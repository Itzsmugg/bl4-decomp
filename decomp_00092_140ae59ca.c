// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ae59ca FUN_140ae59ca body=141 status=ok
// SIG undefined FUN_140ae59ca(void)

undefined8 FUN_140ae59ca(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = -1;
  local_20 = -1;
  cVar1 = FUN_140ae5c1d(param_2);
  iVar2 = local_1c;
  if (cVar1 != '\0') {
    if (local_1c != local_20) {
      cVar1 = FUN_140ae5f1a(local_1c);
      if (cVar1 != '\0') {
        iVar2 = FUN_14042831e(param_1);
      }
    }
    cVar1 = FUN_140368a1a(param_1,iVar2);
    uVar3 = 1;
    if (cVar1 != '\0') goto LAB_140ae5a36;
  }
  uVar3 = 0;
LAB_140ae5a36:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae5a58 FUN_140ae5a58 body=164 status=ok
// SIG undefined FUN_140ae5a58(void)

undefined8 FUN_140ae5a58(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  int local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  local_28 = -1;
  cVar1 = FUN_140ae5c1d(param_2);
  if ((cVar1 != '\0') && ((int)local_24 <= local_28)) {
    uVar3 = local_28 + 1;
    uVar4 = local_24;
    do {
      cVar1 = FUN_140368a1a(param_1,uVar4);
      if ((cVar1 == '\0') &&
         (((uVar2 = 1, (int)uVar4 < 0 || (*(int *)(param_1 + 0x78f0) <= (int)uVar4)) ||
          (*(char *)(*(longlong *)(param_1 + 0x78e8) + 0x10 + (ulonglong)uVar4 * 0x48) != '\x01'))))
      goto LAB_140ae5ade;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  uVar2 = 0;
LAB_140ae5ade:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140ae5afe FUN_140ae5afe body=286 status=ok
// SIG undefined FUN_140ae5afe(void)

longlong FUN_140ae5afe(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cb6a468 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140940a0a;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146522c10;
      local_38 = &LAB_14876160d;
      local_40 = &LAB_140e30382;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9c0;
      FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
    }
    if ((*(int *)(DAT_14cb6a468 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8) == DAT_14cb6a468 + 0x30)) goto LAB_140ae5b55;
  }
  lVar1 = 0;
LAB_140ae5b55:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae5c1d FUN_140ae5c1d body=764 status=ok
// SIG undefined FUN_140ae5c1d(void)

ulonglong FUN_140ae5c1d(longlong *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_3 = -1;
  *param_2 = -1;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar8 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar10 = plVar8;
  if (cVar2 == '\0') {
LAB_140ae5c70:
    if (*plVar10 == 0) goto LAB_140ae5dd1;
    plVar10 = plVar8;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar10 = (longlong *)(*plVar8 + 0x30);
        goto LAB_140ae5c85;
      }
LAB_140ae5d66:
      if (((DAT_14c9a1ab0 == 0) || (*plVar8 == 0)) ||
         (plVar8 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar8 + 0x28)),
         plVar8 == (longlong *)0x0)) goto LAB_140ae5c9e;
      puVar11 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar11 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar8 + 0x2a0))(plVar8,plVar1,puVar11);
LAB_140ae5db6:
      if (cVar2 == '\0') goto LAB_140ae5c9e;
      goto LAB_140ae5e1e;
    }
LAB_140ae5c85:
    if (*plVar10 == 0) goto LAB_140ae5d66;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar10 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar8 != 0 &&
        (plVar8 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar8 + 0x28)),
        plVar8 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar1);
      goto LAB_140ae5db6;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar10 = (longlong *)(*plVar8 + 0x30);
      goto LAB_140ae5c70;
    }
LAB_140ae5dd1:
    lVar5 = FUN_140162146();
    if (lVar5 != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_1446ddda2(&local_68,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_68,plVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
LAB_140ae5e1e:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_140ae5c9e:
  lVar5 = plVar1[5];
  if (lVar5 == 0) {
    uVar6 = FUN_145d8612a();
    lVar5 = FUN_14477b664(uVar6);
    plVar1[5] = lVar5;
  }
  lVar7 = plVar1[6];
  if (lVar7 == 0) {
    uVar4 = 0;
    if ((lVar5 == 0) || (plVar1[4] == 0)) goto LAB_140ae5d0d;
    plVar8 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      plVar1[6] = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar7 = FUN_144aff482(uVar6,plVar1 + 4);
      plVar1[6] = lVar7;
      if (lVar7 != 0) goto LAB_140ae5cb8;
    }
  }
  else {
LAB_140ae5cb8:
    uVar4 = 0;
    if ((longlong)*(int *)(lVar7 + 0x20) == 0) goto LAB_140ae5d0d;
    piVar9 = (int *)(*(longlong *)(lVar7 + 0x18) + 8);
    do {
      iVar12 = *piVar9;
      iVar3 = (int)uVar4;
      if (*(longlong *)(piVar9 + -2) == *param_1) {
        if (iVar12 != 0) {
          *param_2 = iVar3;
          iVar12 = iVar3 + *piVar9 + -1;
          *param_3 = iVar12;
          uVar4 = CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1);
          goto LAB_140ae5d0d;
        }
        iVar12 = 0;
      }
      uVar4 = (ulonglong)(uint)(iVar3 + iVar12);
      piVar13 = piVar9 + 0xc;
      piVar9 = piVar9 + 0xe;
    } while (piVar13 !=
             (int *)((longlong)*(int *)(lVar7 + 0x20) * 0x38 + *(longlong *)(lVar7 + 0x18)));
  }
  uVar4 = 0;
LAB_140ae5d0d:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140ae5f1a FUN_140ae5f1a body=726 status=ok
// SIG undefined FUN_140ae5f1a(void)

ulonglong FUN_140ae5f1a(int param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar8 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar9 = plVar8;
  if (cVar2 == '\0') {
LAB_140ae5f57:
    if (*plVar9 == 0) goto LAB_140ae60a0;
    plVar9 = plVar8;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar9 = (longlong *)(*plVar8 + 0x30);
        goto LAB_140ae5f6c;
      }
LAB_140ae6035:
      if (((DAT_14c9a1ab0 == 0) || (*plVar8 == 0)) ||
         (plVar8 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar8 + 0x28)),
         plVar8 == (longlong *)0x0)) goto LAB_140ae5f84;
      puVar10 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar8 + 0x2a0))(plVar8,plVar1,puVar10);
LAB_140ae6085:
      if (cVar2 == '\0') goto LAB_140ae5f84;
      goto LAB_140ae60ea;
    }
LAB_140ae5f6c:
    if (*plVar9 == 0) goto LAB_140ae6035;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar9 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar8 != 0 &&
        (plVar8 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar8 + 0x28)),
        plVar8 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar1);
      goto LAB_140ae6085;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar9 = (longlong *)(*plVar8 + 0x30);
      goto LAB_140ae5f57;
    }
LAB_140ae60a0:
    lVar5 = FUN_140162146();
    if (lVar5 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_140ae60ea:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_140ae5f84:
  lVar5 = plVar1[5];
  if (lVar5 == 0) {
    uVar6 = FUN_145d8612a();
    lVar5 = FUN_14477b664(uVar6);
    plVar1[5] = lVar5;
  }
  lVar7 = plVar1[6];
  if (lVar7 == 0) {
    uVar4 = 0;
    if ((lVar5 == 0) || (plVar1[4] == 0)) goto LAB_140ae5fe0;
    plVar8 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      plVar1[6] = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar7 = FUN_144aff482(uVar6,plVar1 + 4);
      plVar1[6] = lVar7;
      if (lVar7 != 0) goto LAB_140ae5f9e;
    }
  }
  else {
LAB_140ae5f9e:
    uVar4 = 0;
    if ((longlong)*(int *)(lVar7 + 0x20) == 0) goto LAB_140ae5fe0;
    plVar8 = *(longlong **)(lVar7 + 0x18);
    plVar9 = plVar8 + (longlong)*(int *)(lVar7 + 0x20) * 7;
    do {
      iVar11 = (int)plVar8[1];
      iVar3 = (int)uVar4;
      if (*plVar8 == plVar1[0xf]) {
        if (iVar11 != 0) {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),param_1 <= iVar3 + iVar11 + -1 && iVar3 <= param_1);
          goto LAB_140ae5fe0;
        }
        iVar11 = 0;
      }
      uVar4 = (ulonglong)(uint)(iVar3 + iVar11);
      plVar8 = plVar8 + 7;
    } while (plVar8 != plVar9);
  }
  uVar4 = 0;
LAB_140ae5fe0:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140ae61f2 FUN_140ae61f2 body=29 status=ok
// SIG undefined FUN_140ae61f2(void)

void FUN_140ae61f2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140ae6210 FUN_140ae6210 body=84 status=ok
// SIG undefined FUN_140ae6210(void)

undefined8 * FUN_140ae6210(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a395460;
  puVar1 = param_1 + 2;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[6];
  }
  FUN_144717c65(puVar1,*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ae6264 FUN_140ae6264 body=500 status=ok
// SIG undefined FUN_140ae6264(void)

int FUN_140ae6264(longlong param_1,double *param_2,float param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  *param_4 = 0;
  if (*(int *)(param_1 + 0x30) < 1) {
    iVar8 = 0;
  }
  else {
    iVar6 = 0;
    lVar7 = 0;
    iVar8 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
      iVar1 = *(int *)(lVar4 + 0x18);
      if (0 < (longlong)iVar1) {
        lVar9 = 0;
        do {
          iVar2 = *(int *)(*(longlong *)(lVar4 + 0x10) + 4 + lVar9);
          if ((((iVar2 != 0) &&
               (uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x10) + lVar9), -1 < (int)uVar3)) &&
              ((int)uVar3 < DAT_14c9647dc)) &&
             (((plVar10 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar2)) &&
              (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar5 = *plVar10, lVar5 != 0)))))) {
            dVar11 = *param_2 - *(double *)(lVar5 + 0x160);
            dVar12 = param_2[1] - *(double *)(lVar5 + 0x168);
            iVar8 = (iVar8 + 1) -
                    (uint)(param_3 * param_3 < (float)(dVar12 * dVar12 + dVar11 * dVar11));
            iVar6 = iVar6 + 1;
            *param_4 = iVar6;
          }
          lVar9 = lVar9 + 0x48;
        } while ((longlong)iVar1 * 0x48 != lVar9);
      }
      iVar1 = *(int *)(lVar4 + 0x68);
      if (0 < (longlong)iVar1) {
        lVar9 = 0;
        do {
          iVar2 = *(int *)(*(longlong *)(lVar4 + 0x60) + 4 + lVar9);
          if ((((iVar2 != 0) &&
               (uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x60) + lVar9), -1 < (int)uVar3)) &&
              (((int)uVar3 < DAT_14c9647dc &&
               (((plVar10 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar2)) &&
                ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))))) && (lVar5 = *plVar10, lVar5 != 0))
          {
            dVar11 = *param_2 - *(double *)(lVar5 + 0x160);
            dVar12 = param_2[1] - *(double *)(lVar5 + 0x168);
            iVar8 = (iVar8 + 1) -
                    (uint)(param_3 * param_3 < (float)(dVar12 * dVar12 + dVar11 * dVar11));
            iVar6 = iVar6 + 1;
            *param_4 = iVar6;
          }
          lVar9 = lVar9 + 0x48;
        } while ((longlong)iVar1 * 0x48 != lVar9);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x30));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return iVar8;
}



// FUNCTION 140ae646a FUN_140ae646a body=881 status=ok
// SIG undefined FUN_140ae646a(void)

/* WARNING: Removing unreachable block (ram,0x000140ae6792) */
/* WARNING: Removing unreachable block (ram,0x000140ae67a5) */
/* WARNING: Removing unreachable block (ram,0x000140ae67a9) */

void FUN_140ae646a(undefined8 param_1,byte *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float *pfVar17;
  byte bVar18;
  byte *pbVar19;
  longlong lVar20;
  undefined ***pppuVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  undefined1 auStack_198 [40];
  float *local_170 [2];
  int local_160;
  float *local_158;
  int local_148;
  float *local_140;
  int local_130;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  int local_d8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_140a990a6(local_128);
  if (*param_2 == 1) {
    iVar23 = *(int *)(param_2 + 0x30);
    uVar24 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar23);
    *(int *)(param_2 + 0x30) = iVar23 + 1;
    lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar23 * 8);
    pbVar19 = param_2 + 0x44;
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar5 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar24 = uVar5 & 0x7fff;
    lVar22 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar5 < 0) {
      lVar20 = (ulonglong)(uVar24 * *(int *)(lVar22 + 0x80)) + *(longlong *)(lVar22 + 0x70);
    }
    else {
      iVar23 = **(int **)(lVar22 + 0x20);
      lVar20 = 0;
      if (iVar23 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar23;
          iVar23 = (*(int **)(lVar22 + 0x20))[lVar20 + 1];
          lVar20 = lVar20 + 1;
        } while (iVar23 <= (int)uVar24);
      }
      lVar20 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar22 + 0x18) + lVar20 * 8);
    }
    uVar24 = (uint)(uVar5 >> 0xf);
    pbVar19 = (byte *)(lVar22 + 0x4c);
  }
  iVar23 = *(int *)pbVar19;
  FUN_1448a432c(local_170,param_2);
  *(undefined1 *)(local_120 + 0xec) = 1;
  bVar18 = *param_2;
  lVar22 = *(longlong *)(param_2 + 0x80);
  pbVar19 = (byte *)(lVar22 + 0x40);
  if (bVar18 != 0) {
    pbVar19 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar19) {
    piVar25 = (int *)(lVar20 + (longlong)(int)(iVar23 * uVar24) * 4);
    iVar23 = 0;
    do {
      dVar16 = dStack_90;
      dVar15 = local_98;
      dVar14 = dStack_a0;
      ppuVar13 = local_a8;
      uVar12 = uStack_b0;
      uVar11 = uStack_c0;
      iVar6 = *piVar25;
      pfVar1 = local_140 + local_130;
      fVar3 = *local_140;
      pfVar2 = local_158 + local_148;
      fVar4 = *local_158;
      pfVar17 = local_170[0] + local_160;
      local_158 = pfVar2;
      local_140 = pfVar1;
      if (0 < iVar6) {
        dVar10 = (double)*local_170[0] + *(double *)(local_120 + 0x38);
        dVar9 = (double)fVar4 + *(double *)(local_120 + 0x40);
        dVar8 = (double)fVar3 + *(double *)(local_120 + 0x48);
        local_d8[0] = iVar6;
        local_58 = local_98;
        dStack_50 = dStack_90;
        local_68 = local_a8;
        dStack_60 = dStack_a0;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = dVar9;
        dStack_90 = dVar8;
        local_a8 = &PTR_LAB_14be786d0;
        dStack_a0 = dVar10;
        local_b8 = (undefined ***)0x0;
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        local_c8 = FUN_1446199c4;
        uStack_80._0_4_ = (undefined4)uVar11;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar12;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_e8 = dVar15;
        dStack_e0 = dVar16;
        local_f8 = ppuVar13;
        dStack_f0 = dVar14;
        dStack_50 = dVar16;
        local_58 = dVar15;
        dStack_60 = dVar14;
        local_68 = ppuVar13;
        uStack_70 = uVar12;
        local_78 = 0;
        uStack_80 = uVar11;
        local_88 = 0;
        local_a8 = &PTR_LAB_14be786d0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_1446199c4;
        local_108 = 0;
        local_118 = 0;
        local_170[0] = local_170[0] + local_160;
        FUN_1408164d2(local_120 + 0x70,local_d8);
        if (local_c8 != (code *)0x0) {
          pppuVar21 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar21 = &local_a8;
          }
          (*(code *)(*pppuVar21)[2])();
        }
        bVar18 = *param_2;
        lVar22 = *(longlong *)(param_2 + 0x80);
        pfVar17 = local_170[0];
      }
      local_170[0] = pfVar17;
      iVar23 = iVar23 + 1;
      pbVar19 = (byte *)(lVar22 + 0x40);
      if ((bVar18 & 1) != 0) {
        pbVar19 = param_2 + 0x3c;
      }
      piVar25 = (int *)((longlong)piVar25 + (ulonglong)(uVar24 << 2));
    } while (iVar23 < *(int *)pbVar19);
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ae67dc FUN_140ae67dc body=281 status=ok
// SIG undefined FUN_140ae67dc(void)

ulonglong FUN_140ae67dc(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t unaff_RBX;
  ulonglong uVar6;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar6 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    if (param_2 != param_1) {
      iVar1 = *(int *)(param_1 + 0x58);
      unaff_RBX = (size_t)iVar1;
      pvVar2 = *(void **)(param_1 + 0x50);
      *(int *)(param_2 + 0x58) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x5c) == 0) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(param_2 + 0x50),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x50),pvVar2,unaff_RBX);
        }
      }
    }
    FUN_140ae68f6(param_2 + 0x60,param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    uVar4 = *(undefined4 *)(param_1 + 0x80);
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    *(undefined4 *)(param_2 + 0x80) = uVar4;
    *(undefined4 *)(param_2 + 0x84) = uVar5;
    uVar6 = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (param_2 != param_1) {
      iVar1 = *(int *)(param_1 + 0x90);
      pvVar2 = *(void **)(param_1 + 0x88);
      *(int *)(param_2 + 0x90) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x94) == 0) {
        *(undefined4 *)(param_2 + 0x94) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 0x88),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x88),pvVar2,(longlong)iVar1 * 2);
        }
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140ae68f6 FUN_140ae68f6 body=79 status=ok
// SIG undefined FUN_140ae68f6(void)

undefined8 * FUN_140ae68f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140ae6a0c(param_1,iVar1);
      FUN_140ae6945(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140ae6945 FUN_140ae6945 body=199 status=ok
// SIG undefined FUN_140ae6945(void)

void FUN_140ae6945(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined4 *)(param_1 + 8 + lVar4) = *(undefined4 *)(param_2 + 8 + lVar4);
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x20 + lVar4) = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar4) = *(undefined8 *)(param_2 + 0x10 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x18 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x18 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x20 + lVar4) = *(undefined8 *)(param_2 + 0x20 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x28 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x28 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x38 + lVar4) = *(undefined8 *)(param_2 + 0x38 + lVar4);
      *(undefined4 *)(param_1 + 0x40 + lVar4) = *(undefined4 *)(param_2 + 0x40 + lVar4);
      *(undefined8 *)(param_1 + 0x48 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x50 + lVar4) = *(undefined4 *)(param_2 + 0x50 + lVar4);
      lVar4 = lVar4 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ae6a0c FUN_140ae6a0c body=330 status=ok
// SIG undefined FUN_140ae6a0c(void)

void FUN_140ae6a0c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ae6a7a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140ae6a7a:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140ae6b56 FUN_140ae6b56 body=582 status=ok
// SIG undefined FUN_140ae6b56(void)

void FUN_140ae6b56(ulonglong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  code *local_f0;
  ulonglong *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f4 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    lVar6 = (longlong)(int)param_2[1] * 0x60;
    lVar7 = *param_2 + 0x58;
    do {
      local_e0 = local_e0 & 0xffffffffffffff00;
      local_b8[0] = 0;
      FUN_140217b36(&local_e0,param_1 + 0x1e8);
      FUN_1448729ea(lVar7 + -0x50,&local_b0,&local_e0);
      if (local_90 == 3) {
        uVar8 = local_b0;
        bVar4 = 3;
      }
      else {
        FUN_1400b56fe(&local_88,&local_b0,3);
        uVar8 = 0;
        if (local_68 != 0) {
          uVar8 = local_88;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar5 = &local_88;
          if (0x18 < local_70) {
            puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar3)(puVar5);
        }
        bVar4 = local_90;
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
          bVar4 = local_90;
        }
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar5 = &local_b0;
        if (0x18 < local_98) {
          puVar5 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar3)(puVar5);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      FUN_1448173f8(local_b8);
      if (((char)local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      local_d4 = local_f4;
      local_f0 = FUN_143ecb466;
      local_e8 = &local_e0;
      local_e0 = param_1;
      local_d8 = uVar8;
      FUN_140ae6d9e(uVar2,lVar7,&local_f0);
      lVar7 = lVar7 + 0x60;
      lVar6 = lVar6 + -0x60;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ae6d9e FUN_140ae6d9e body=107 status=ok
// SIG undefined FUN_140ae6d9e(void)

void FUN_140ae6d9e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    do {
      if (*plVar1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x000140ae6dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_3)(param_3[1],plVar1);
        return;
      }
      if (plVar1[-1] == *param_2) {
        (*(code *)*param_3)(param_3[1],plVar1);
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140ae6e0a FUN_140ae6e0a body=209 status=ok
// SIG undefined FUN_140ae6e0a(void)

void FUN_140ae6e0a(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  if (cVar5 == '\0') {
    return;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x1c4);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ae6e85;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar8 != (undefined8 *)0x0) &&
       ((*(int *)(puVar8 + 2) == iVar1 && ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      uVar7 = *puVar8;
      goto LAB_140ae6e85;
    }
  }
  uVar7 = 0;
LAB_140ae6e85:
  **(undefined8 **)(param_1 + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar1 = *(int *)(param_2 + 0x58);
  lVar9 = (longlong)iVar1;
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar6 = param_2;
  }
  *(undefined8 *)(lVar6 + lVar9 * 0x14) = uVar4;
  *(undefined4 *)(lVar6 + 8 + lVar9 * 0x14) = uVar3;
  *(undefined8 *)(lVar6 + 0xc + lVar9 * 0x14) = uVar7;
  return;
}



// FUNCTION 140ae6eec FUN_140ae6eec body=468 status=ok
// SIG undefined FUN_140ae6eec(void)

void FUN_140ae6eec(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0xe0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x100) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 200) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xc0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xc0)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x90) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x88)) {
    FUN_1400020a8(*plVar1);
  }
  *(undefined2 **)(param_1 + 0x48) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0x58,0);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x28) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 0x38,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_140ae70c0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ae70c0 FUN_140ae70c0 body=41 status=ok
// SIG undefined FUN_140ae70c0(void)

void FUN_140ae70c0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14091aa36(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 140ae70f8 FUN_140ae70f8 body=40 status=ok
// SIG undefined FUN_140ae70f8(void)

undefined8 FUN_140ae70f8(undefined8 param_1,int param_2)

{
  FUN_140ae7120();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ae7120 FUN_140ae7120 body=297 status=ok
// SIG undefined FUN_140ae7120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae7120(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2e1700;
  FUN_140ae72af(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140ae7249(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1406c2f92(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140ae727c(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140ae7249(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000140ae7231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140ae7249 FUN_140ae7249 body=51 status=ok
// SIG undefined FUN_140ae7249(void)

void FUN_140ae7249(longlong param_1,int param_2)

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



// FUNCTION 140ae727c FUN_140ae727c body=51 status=ok
// SIG undefined FUN_140ae727c(void)

void FUN_140ae727c(longlong param_1,int param_2)

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



// FUNCTION 140ae72af FUN_140ae72af body=68 status=ok
// SIG undefined FUN_140ae72af(void)

void FUN_140ae72af(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ae72f4 FUN_140ae72f4 body=42 status=ok
// SIG undefined FUN_140ae72f4(void)

void FUN_140ae72f4(longlong param_1)

{
  FUN_14024bdb0();
  FUN_140ae731e(param_1 + 0xd8,*(undefined4 *)(param_1 + 200),0);
  return;
}



// FUNCTION 140ae731e FUN_140ae731e body=115 status=ok
// SIG undefined FUN_140ae731e(void)

void FUN_140ae731e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140c489aa(param_1,iVar1);
    }
    FUN_140c485c5((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147f55ebe(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140ae7392 FUN_140ae7392 body=132 status=ok
// SIG undefined FUN_140ae7392(void)

longlong * FUN_140ae7392(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2f0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4abc40;
  FUN_140ae7416(plVar3 + 2,param_1);
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



// FUNCTION 140ae7416 FUN_140ae7416 body=145 status=ok
// SIG undefined FUN_140ae7416(void)

undefined8 * FUN_140ae7416(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ae760a();
  *param_1 = &PTR_FUN_14b4a75c0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0x200000000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x100000000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_140ae7534(param_1 + 0x52,0x28);
  uVar1 = FUN_140ae74a8(param_1);
  param_1[0x5b] = uVar1;
  return param_1;
}



// FUNCTION 140ae74a8 FUN_140ae74a8 body=81 status=ok
// SIG undefined FUN_140ae74a8(void)

longlong * FUN_140ae74a8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140ae74fa();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140ae74fa FUN_140ae74fa body=57 status=ok
// SIG undefined FUN_140ae74fa(void)

void FUN_140ae74fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a650 = FUN_140002ddd(FUN_146526ad6,uVar1,L"InventoryStatsDef");
  }
  return;
}



// FUNCTION 140ae7534 FUN_140ae7534 body=214 status=ok
// SIG undefined FUN_140ae7534(void)

void FUN_140ae7534(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 140ae760a FUN_140ae760a body=365 status=ok
// SIG undefined FUN_140ae760a(void)

undefined8 * FUN_140ae760a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14b318750;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = &DAT_100000001;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_140056680(param_1 + 9,&DAT_149dfb77a);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = param_2;
  FUN_140ae7778(param_1 + 0x21,7);
  return param_1;
}



// FUNCTION 140ae7778 FUN_140ae7778 body=332 status=ok
// SIG undefined FUN_140ae7778(void)

void FUN_140ae7778(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140ae77e6;
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
LAB_140ae77e6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 140ae78c4 FUN_140ae78c4 body=755 status=ok
// SIG undefined FUN_140ae78c4(void)

void FUN_140ae78c4(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_2 != 0) && (local_78 = *(longlong *)(param_2 + 0x20), local_78 != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_a0 = &local_60;
      local_60 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1478c0a72;
      local_b0 = &LAB_1417b2375;
      local_b8 = L"Engine";
      local_c0 = 0x1000000000;
      local_c8 = 0x10000004;
      local_d0 = 8;
      local_d8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(local_78 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(local_78 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       ((longlong)*(int *)(param_1 + 0x30) != 0)) {
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar9 = (longlong)*(int *)(param_1 + 0x30) * 0x24;
      do {
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar7 = param_2;
          if ((*(char *)(lVar6 + 0x20) != '\x01') &&
             (lVar7 = local_78, *(longlong *)(lVar6 + 0x18) != 0)) {
            plVar5 = (longlong *)
                     FUN_140ae7da1(*(undefined8 *)(local_78 + 0x10),*(longlong *)(lVar6 + 0x18),3);
            if (plVar5 == (longlong *)0x0) goto LAB_140ae7a2b;
            lVar7 = (**(code **)(*plVar5 + 0x220))(plVar5,local_78,0);
          }
          FUN_140ae7bb8(&local_60,lVar7,lVar6);
          plVar5 = local_50;
          uVar3 = local_58;
          pcVar2 = local_60;
          if ((local_60 != (code *)0x0) && (local_50 != (longlong *)0x0)) {
            uVar1 = *(uint *)(param_2 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            iVar4 = *(int *)(lVar7 + 0x10);
            if (*(int *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar10 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar10) {
                local_7c = iVar8;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
                iVar8 = local_7c;
              }
              LOCK();
              iVar4 = *(int *)(lVar7 + 0x10);
              bVar10 = iVar4 == 0;
              if (bVar10) {
                *(int *)(lVar7 + 0x10) = iVar8;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar10) {
                iVar4 = iVar8;
              }
            }
            local_68 = *(undefined8 *)(lVar6 + 8);
            local_70 = CONCAT44(iVar4,uVar1);
            (**(code **)(*plVar5 + 0x1f0))(plVar5,&local_70,pcVar2,uVar3);
          }
        }
LAB_140ae7a2b:
        lVar6 = lVar6 + 0x24;
        lVar9 = lVar9 + -0x24;
      } while (lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ae7bb8 FUN_140ae7bb8 body=489 status=ok
// SIG undefined FUN_140ae7bb8(void)

longlong * FUN_140ae7bb8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  if (param_3[2] == 0) {
    lVar1 = FUN_1408985b6(*(undefined8 *)(param_2 + 0x10),*param_3,3);
    param_1[2] = lVar1;
    return param_1;
  }
  lVar1 = FUN_1408d67c1(*(undefined8 *)(param_2 + 0x10),param_3[2],3);
  if (lVar1 == 0) {
    return param_1;
  }
  puVar5 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947fc8) && (FUN_144b3d300(&DAT_14c947fc8), DAT_14c947fc8 == -1)) {
    uVar3 = FUN_1446dcc8c();
    FUN_14000176a(&DAT_14c947f78,L"FGbxInlineStructProperty",0,0x2000000000000000,0x108001,
                  0x2000000000000000,uVar3,FUN_14686c8ac);
    atexit(FUN_1427b495e);
    _Init_thread_footer(&DAT_14c947fc8);
  }
  if (DAT_14c947f80 == 0) {
    bVar6 = puVar5 != (undefined *)0x0;
    if (puVar5 != &DAT_14c947f78 && bVar6) {
      do {
        puVar5 = *(undefined **)(puVar5 + 0x30);
        bVar6 = puVar5 != (undefined *)0x0;
        if (puVar5 == &DAT_14c947f78) break;
      } while (puVar5 != (undefined *)0x0);
    }
    if (!bVar6) goto LAB_140ae7ced;
  }
  else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c947f80) == 0) {
LAB_140ae7ced:
    lVar2 = FUN_1408985b6(*(undefined8 *)(lVar1 + 0x70),*param_3,3);
    param_1[2] = lVar2;
    if (lVar2 == 0) {
      return param_1;
    }
    param_1[1] = (longlong)*(int *)(lVar2 + 0x44) + param_2 + *(int *)(lVar1 + 0x44);
    return param_1;
  }
  lVar2 = FUN_1408985b6(*(undefined8 *)(lVar1 + 0x78),*param_3,3);
  if (((lVar2 != 0) &&
      (plVar4 = (longlong *)(param_2 + *(int *)(lVar1 + 0x44)), plVar4 != (longlong *)0x0)) &&
     (lVar1 = *plVar4, lVar1 != 0)) {
    param_1[2] = lVar2;
    param_1[1] = lVar1 + *(int *)(lVar2 + 0x44);
  }
  return param_1;
}



// FUNCTION 140ae7da1 FUN_140ae7da1 body=316 status=ok
// SIG undefined FUN_140ae7da1(void)

longlong FUN_140ae7da1(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  int local_20;
  char local_1c;
  byte local_1b;
  byte local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_140ae7ede(&local_30,param_1);
    plVar2 = local_30;
    lVar3 = local_28;
LAB_140ae7dd6:
    local_28 = lVar3;
    local_30 = plVar2;
    if (local_28 != 0) {
      lVar3 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_140ae7e7a;
      lVar3 = *(longlong *)(local_28 + 0x18);
      plVar2 = local_30;
      local_28 = lVar3;
      if (local_30 != (longlong *)0x0) {
        do {
          lVar4 = (longlong)local_20;
          while( true ) {
            for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
              if (((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x4018001) == 0) &&
                 (((local_1b & 1) != 0 || ((*(byte *)(lVar3 + 0x3b) & 0x20) == 0))))
              goto LAB_140ae7dd6;
            }
            if ((local_1a & 1) == 0) break;
            lVar4 = lVar4 + 1;
            local_20 = (int)lVar4;
            if ((int)plVar2[0x3c] <= lVar4) break;
            lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
            lVar3 = 0;
            if (lVar1 != 0) {
              lVar3 = *(longlong *)(lVar1 + 0x50);
            }
          }
          if ((local_1c != '\x01') ||
             (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(), plVar2 == (longlong *)0x0))
          goto LAB_140ae7e78;
          lVar3 = plVar2[10];
          local_20 = -1;
        } while( true );
      }
      plVar2 = (longlong *)0x0;
      goto LAB_140ae7dd6;
    }
  }
LAB_140ae7e78:
  lVar3 = 0;
LAB_140ae7e7a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140ae7ede FUN_140ae7ede body=316 status=ok
// SIG undefined FUN_140ae7ede(void)

longlong * FUN_140ae7ede(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar4;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar4 = FUN_144a797b2();
    if (*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
      goto LAB_140ae7f2a;
    }
  }
  bVar5 = false;
LAB_140ae7f2a:
  *(bool *)((longlong)param_1 + 0x16) = bVar5;
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_140ae7f3d:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x4018001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_140ae7f8f;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_140ae7f3d;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_140ae7f3d;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_140ae7f8f:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return param_1;
}



// FUNCTION 140ae801a FUN_140ae801a body=71 status=ok
// SIG undefined FUN_140ae801a(void)

void FUN_140ae801a(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_140ae8660(param_1);
  }
  FUN_140ae8062(param_1 + 0xa0,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ae8062 FUN_140ae8062 body=1533 status=ok
// SIG undefined FUN_140ae8062(void)

int FUN_140ae8062(longlong *param_1,byte param_2,void *param_3,longlong param_4,longlong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  short sVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_b8 [47];
  byte local_89;
  longlong local_88;
  int local_7c;
  longlong *local_78;
  uint local_70 [8];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_4c = 0;
  uVar12 = *(uint *)((longlong)param_3 + 0x20);
  local_50 = 0;
  uVar3 = uVar12 + 0x1f & 0xffffffe0;
  local_88 = param_4;
  if (0 < (int)uVar3) {
    local_4c = 0x100;
    if (0x100 < uVar3) {
      local_4c = uVar3;
    }
    FUN_14497ddce(local_70,0);
    uVar12 = *(uint *)((longlong)param_3 + 0x20);
  }
  local_50 = uVar12;
  if (uVar12 != 0) {
    memcpy(local_70,param_3,(ulonglong)(uVar12 + 0x1f >> 3 & 0xfffffffc));
  }
  if ((int)param_1[1] < 1) {
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    iVar11 = 0;
    lVar13 = local_88;
    local_89 = param_2;
    local_78 = param_1;
    do {
      uVar12 = *(uint *)(*param_1 + 8 + (longlong)iVar11 * 0x10);
      if (uVar12 < 7) {
        uVar2 = *(ulonglong *)(*param_1 + (longlong)iVar11 * 0x10);
        sVar15 = (short)uVar2;
        uVar3 = (uint)uVar2;
        bVar6 = (byte)(uVar2 >> 0x10);
        switch(uVar12) {
        case 0:
          if (((sVar15 != -1) && ((int)(uVar2 & 0xffff) < (int)local_50)) &&
             ((local_70[(uVar2 & 0xffff) >> 5] >> (uVar3 & 0x1f) & 1) != 0)) {
            uVar16 = uVar2 >> 0x10;
            if ((short)(uVar2 >> 0x10) == -1) {
              uVar12 = 0xffff;
            }
            else {
              uVar12 = (uint)(uVar16 & 0xffff);
              if ((uVar12 < local_50) &&
                 ((local_70[(uVar16 & 0xffff) >> 5] >> ((uint)(uVar2 >> 0x10) & 0x1f) & 1) != 0))
              break;
            }
            uVar3 = uVar12 + 1;
            iVar17 = *(int *)(lVar13 + 0x20);
            iVar18 = uVar3 - iVar17;
            if (iVar18 != 0 && iVar17 <= (int)uVar3) {
              local_7c = iVar18;
              if (iVar17 == 0) {
LAB_140ae841f:
                uVar9 = uVar3;
                if (*(int *)(lVar13 + 0x24) <= (int)uVar12) {
                  *(undefined4 *)(lVar13 + 0x24) = 0x100;
                  FUN_14497ddce(lVar13,iVar17);
                  uVar9 = *(int *)(local_88 + 0x20) + local_7c;
                  lVar13 = local_88;
                }
                uVar10 = uVar9 + 0x1f;
                if (-1 < (int)uVar9) {
                  uVar10 = uVar9;
                }
                *(uint *)(lVar13 + 0x20) = uVar9;
                if ((int)uVar9 % 0x20 != 0) {
                  bVar7 = -(char)((int)uVar9 % 0x20);
                  *(uint *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4) =
                       (uint)(*(int *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4) << (bVar7 & 0x1f))
                       >> (bVar7 & 0x1f);
                }
              }
              else {
                iVar18 = iVar17 + 0x1e;
                if (-1 < iVar17 + -1) {
                  iVar18 = iVar17 + -1;
                }
                if (iVar18 >> 5 != (int)((uVar16 & 0xffff) >> 5)) goto LAB_140ae841f;
                *(uint *)(lVar13 + 0x20) = uVar3;
              }
              FUN_1447c45ca(lVar13,iVar17,local_7c,0);
              lVar13 = local_88;
            }
            uVar9 = local_50;
            uVar10 = 1 << (bVar6 & 0x1f);
            puVar1 = (uint *)(lVar13 + (ulonglong)(uVar12 >> 5) * 4);
            *puVar1 = *puVar1 | uVar10;
            iVar17 = uVar3 - local_50;
            if (iVar17 != 0 && (int)local_50 <= (int)uVar3) {
              if (local_50 == 0) {
LAB_140ae84c7:
                if ((int)local_4c <= (int)uVar12) {
                  local_4c = 0x100;
                  FUN_14497ddce(local_70,local_50);
                  uVar3 = local_50 + iVar17;
                }
                uVar4 = uVar3 + 0x1f;
                if (-1 < (int)uVar3) {
                  uVar4 = uVar3;
                }
                local_50 = uVar3;
                uVar3 = local_50;
                if ((int)uVar3 % 0x20 != 0) {
                  bVar6 = -(char)((int)uVar3 % 0x20);
                  local_70[(int)uVar4 >> 5] =
                       (local_70[(int)uVar4 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
                  uVar3 = local_50;
                }
              }
              else {
                iVar18 = local_50 + 0x1e;
                if (-1 < (int)(local_50 - 1)) {
                  iVar18 = local_50 - 1;
                }
                if (iVar18 >> 5 != (int)((uVar16 & 0xffff) >> 5)) goto LAB_140ae84c7;
              }
              local_50 = uVar3;
              FUN_1447c45ca(local_70,uVar9,iVar17,0);
              lVar13 = local_88;
            }
            local_70[uVar12 >> 5] = local_70[uVar12 >> 5] | uVar10;
            goto LAB_140ae82e8;
          }
          break;
        case 1:
          if ((bVar6 & param_2) == 0) goto switchD_140ae8135_caseD_4;
          break;
        case 2:
          lVar13 = local_88;
          param_2 = local_89;
          if (((sVar15 != -1) && ((int)(uVar2 & 0xffff) < (int)local_50)) &&
             ((local_70[(uVar2 & 0xffff) >> 5] >> (uVar3 & 0x1f) & 1) != 0)) {
            iVar11 = (uVar3 >> 0x10) - 1;
          }
          break;
        case 3:
          if (((sVar15 == -1) || ((int)local_50 <= (int)(uVar2 & 0xffff))) ||
             ((local_70[(uVar2 & 0xffff) >> 5] >> (uVar3 & 0x1f) & 1) == 0)) {
            iVar11 = (uVar3 >> 0x10) - 1;
          }
          break;
        case 4:
switchD_140ae8135_caseD_4:
          iVar11 = (uVar3 & 0xffff) - 1;
          break;
        case 5:
          if (sVar15 == -1) {
            uVar12 = 0xffff;
          }
          else {
            uVar12 = (uint)(uVar2 & 0xffff);
            if (((int)uVar12 < (int)local_50) &&
               ((local_70[(uVar2 & 0xffff) >> 5] >> (uVar3 & 0x1f) & 1) != 0)) break;
          }
          uVar3 = uVar12 + 1;
          iVar17 = *(int *)(lVar13 + 0x20);
          iVar18 = uVar3 - iVar17;
          if (iVar18 != 0 && iVar17 <= (int)uVar3) {
            if (iVar17 == 0) {
LAB_140ae81d7:
              uVar9 = uVar3;
              if (*(int *)(lVar13 + 0x24) <= (int)uVar12) {
                *(undefined4 *)(lVar13 + 0x24) = 0x100;
                FUN_14497ddce(lVar13,iVar17);
                uVar9 = *(int *)(local_88 + 0x20) + iVar18;
                lVar13 = local_88;
              }
              uVar10 = uVar9 + 0x1f;
              if (-1 < (int)uVar9) {
                uVar10 = uVar9;
              }
              *(uint *)(lVar13 + 0x20) = uVar9;
              if ((int)uVar9 % 0x20 != 0) {
                bVar6 = -(char)((int)uVar9 % 0x20);
                *(uint *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4) =
                     (uint)(*(int *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4) << (bVar6 & 0x1f))
                     >> (bVar6 & 0x1f);
              }
            }
            else {
              iVar8 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar8 = iVar17 + -1;
              }
              if (iVar8 >> 5 != (int)((uVar2 & 0xffff) >> 5)) goto LAB_140ae81d7;
              *(uint *)(lVar13 + 0x20) = uVar3;
            }
            FUN_1447c45ca(lVar13,iVar17,iVar18,0);
            lVar13 = local_88;
          }
          uVar9 = local_50;
          uVar10 = 1 << ((byte)uVar2 & 0x1f);
          puVar1 = (uint *)(lVar13 + (ulonglong)(uVar12 >> 5) * 4);
          *puVar1 = *puVar1 | uVar10;
          iVar17 = uVar3 - local_50;
          if (iVar17 != 0 && (int)local_50 <= (int)uVar3) {
            if (local_50 == 0) {
LAB_140ae8277:
              if ((int)local_4c <= (int)uVar12) {
                local_4c = 0x100;
                FUN_14497ddce(local_70,local_50);
                uVar3 = local_50 + iVar17;
              }
              uVar4 = uVar3 + 0x1f;
              if (-1 < (int)uVar3) {
                uVar4 = uVar3;
              }
              local_50 = uVar3;
              uVar3 = local_50;
              if ((int)uVar3 % 0x20 != 0) {
                bVar6 = -(char)((int)uVar3 % 0x20);
                local_70[(int)uVar4 >> 5] =
                     (local_70[(int)uVar4 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
                uVar3 = local_50;
              }
            }
            else {
              iVar18 = local_50 + 0x1e;
              if (-1 < (int)(local_50 - 1)) {
                iVar18 = local_50 - 1;
              }
              if (iVar18 >> 5 != (int)((uVar2 & 0xffff) >> 5)) goto LAB_140ae8277;
            }
            local_50 = uVar3;
            FUN_1447c45ca(local_70,uVar9,iVar17,0);
            lVar13 = local_88;
          }
          local_70[uVar12 >> 5] = local_70[uVar12 >> 5] | uVar10;
          param_1 = local_78;
          param_2 = local_89;
LAB_140ae82e8:
          iVar14 = iVar14 + 1;
          break;
        case 6:
          iVar17 = *(int *)(param_5 + 0x18);
          *(uint *)(param_5 + 0x18) = iVar17 + 1U;
          if (*(uint *)(param_5 + 0x1c) < iVar17 + 1U) {
            FUN_147580770(param_5,iVar17);
            lVar13 = local_88;
          }
          lVar5 = *(longlong *)(param_5 + 0x10);
          if (*(longlong *)(param_5 + 0x10) == 0) {
            lVar5 = param_5;
          }
          *(ulonglong *)(lVar5 + (longlong)iVar17 * 8) = uVar2;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar14;
}



// FUNCTION 140ae8660 FUN_140ae8660 body=9172 status=ok
// SIG undefined FUN_140ae8660(void)

void FUN_140ae8660(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  bool bVar30;
  uint uVar31;
  int iVar32;
  uint *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined2 *puVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  int iVar43;
  ulonglong uVar44;
  undefined8 *puVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  uint uVar51;
  undefined2 *puVar52;
  longlong lVar53;
  longlong *plVar54;
  bool bVar55;
  float fVar56;
  undefined1 auStack_4c8 [32];
  longlong *local_4a8;
  longlong *local_4a0;
  uint *local_498;
  ulonglong local_490;
  ulonglong local_488;
  uint *local_480;
  ulonglong local_478;
  uint *local_470;
  undefined8 local_468;
  ulonglong local_460;
  longlong local_458;
  longlong local_450;
  uint *local_448;
  longlong *local_440;
  undefined8 *local_438;
  undefined1 local_42d;
  int local_42c;
  longlong local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined8 uStack_410;
  longlong local_408;
  undefined8 uStack_400;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  int local_3d4;
  undefined1 local_3d0 [8];
  undefined1 *local_3c8;
  int local_3c0;
  uint local_3b0 [4];
  uint *local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined8 uStack_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 *local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  uint local_350;
  int local_34c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_3a0 = (uint *)0x0;
  local_398 = 0x8000000000;
  local_498 = (uint *)(param_1 + 2);
  local_390 = 0;
  uStack_388 = 0;
  local_380 = 0;
  uVar37 = *(uint *)(param_1 + 5);
  local_480 = (uint *)(ulonglong)uVar37;
  local_4a8 = param_1;
  if (uVar37 == 0) {
    uVar38 = 1;
    iVar32 = 0;
    uVar17 = 0;
    uVar44 = 0;
  }
  else {
    puVar20 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar20 = local_498;
    }
    uVar24 = *puVar20;
    if (uVar24 == 0) {
      iVar32 = uVar37 + 0x1e;
      if (-1 < (int)(uVar37 - 1)) {
        iVar32 = uVar37 - 1;
      }
      uVar44 = 0;
      uVar17 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar17 = uVar44;
      }
      iVar32 = 0;
      do {
        if (uVar17 == uVar44) goto LAB_140ae874f;
        iVar32 = iVar32 + 0x20;
        uVar24 = puVar20[uVar44 + 1];
        uVar44 = uVar44 + 1;
      } while (uVar24 == 0);
    }
    else {
      iVar32 = 0;
      uVar44 = 0;
    }
    uVar38 = (ulonglong)(-uVar24 & uVar24);
    uVar17 = uVar38 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar24 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    uVar17 = (ulonglong)uVar24;
    if ((int)uVar37 <= (int)uVar24) {
      uVar17 = (ulonglong)uVar37;
    }
  }
  if ((uint)uVar17 == uVar37) {
LAB_140ae874f:
    uVar47 = (ulonglong)uVar37;
  }
  else {
    uVar37 = 0xffffffff;
    do {
      local_4a0 = (longlong *)CONCAT44(local_4a0._4_4_,iVar32);
      lVar46 = *local_4a8;
      lVar53 = (longlong)(int)uVar17 * 0x60;
      lVar18 = lVar46 + lVar53;
      lVar48 = *(longlong *)(lVar18 + 0x10);
      if (*(longlong *)(lVar18 + 0x10) == 0) {
        lVar48 = lVar18 + 8;
      }
      iVar32 = *(int *)(lVar18 + 0x18);
      local_490 = uVar44;
      if ((longlong)iVar32 != 0) {
        lVar18 = 0;
        do {
          FUN_1409098b2(local_3b0,*(undefined2 *)(lVar48 + lVar18));
          lVar18 = lVar18 + 2;
        } while ((longlong)iVar32 * 2 != lVar18);
      }
      lVar46 = lVar46 + lVar53;
      lVar18 = lVar46 + 0x30;
      if (*(longlong *)(lVar46 + 0x38) != 0) {
        lVar18 = *(longlong *)(lVar46 + 0x38);
      }
      iVar32 = *(int *)(lVar46 + 0x40);
      if ((longlong)iVar32 != 0) {
        lVar46 = 0;
        do {
          FUN_1409098b2(local_3b0,*(undefined2 *)(lVar18 + lVar46));
          lVar46 = lVar46 + 2;
        } while ((longlong)iVar32 * 2 != lVar46);
      }
      uVar37 = uVar37 & ~(uint)uVar38;
      puVar20 = (uint *)local_4a8[4];
      if ((uint *)local_4a8[4] == (uint *)0x0) {
        puVar20 = local_498;
      }
      uVar24 = *(uint *)(local_4a8 + 5);
      uVar47 = (ulonglong)uVar24;
      iVar43 = (int)local_490;
      lVar18 = (longlong)iVar43;
      uVar31 = puVar20[lVar18] & uVar37;
      uVar44 = local_490;
      iVar32 = (int)local_4a0;
      if (uVar31 == 0) {
        iVar23 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar23 = uVar24 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar32 = (int)local_4a0 + 0x20;
        iVar27 = iVar23;
        if (iVar23 < iVar43) {
          iVar27 = iVar43;
        }
        if (iVar43 < iVar23) {
          lVar46 = 0;
          do {
            uVar31 = puVar20[lVar18 + lVar46 + 1];
            if (uVar31 != 0) {
              uVar37 = 0xffffffff;
              uVar44 = (ulonglong)(iVar43 + (int)lVar46 + 1);
              goto LAB_140ae8935;
            }
            iVar32 = iVar32 + 0x20;
            lVar46 = lVar46 + 1;
          } while (iVar27 - lVar18 != lVar46);
          uVar37 = 0xffffffff;
          iVar43 = iVar27;
        }
        uVar44 = (ulonglong)(iVar43 + 1);
        uVar17 = uVar47;
      }
      else {
LAB_140ae8935:
        uVar38 = (ulonglong)(-uVar31 & uVar31);
        uVar17 = uVar38 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar31 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        uVar17 = (ulonglong)uVar31;
        if ((int)uVar24 <= (int)uVar31) {
          uVar17 = uVar47;
        }
      }
    } while ((int)uVar17 != (int)local_480);
  }
  local_4a0 = local_4a8 + 10;
  local_480 = (uint *)(local_4a8 + 0xc);
  uVar37 = *(uint *)(local_4a8 + 0xf);
  uVar44 = (ulonglong)uVar37;
  if (uVar37 == 0) {
    uVar39 = 1;
    uVar17 = 0;
    iVar32 = 0;
    uVar38 = 0;
  }
  else {
    puVar20 = (uint *)local_4a8[0xe];
    if ((uint *)local_4a8[0xe] == (uint *)0x0) {
      puVar20 = local_480;
    }
    uVar24 = *puVar20;
    if (uVar24 == 0) {
      iVar32 = uVar37 + 0x1e;
      if (-1 < (int)(uVar37 - 1)) {
        iVar32 = uVar37 - 1;
      }
      uVar17 = 0;
      uVar38 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar38 = uVar17;
      }
      iVar32 = 0;
      do {
        if (uVar38 == uVar17) {
          uVar44 = (ulonglong)uVar37;
          goto LAB_140ae8b20;
        }
        iVar32 = iVar32 + 0x20;
        uVar24 = puVar20[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar17 = 0;
      iVar32 = 0;
    }
    uVar39 = (ulonglong)(-uVar24 & uVar24);
    uVar38 = uVar39 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar24 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    uVar38 = (ulonglong)uVar24;
    if ((int)uVar37 <= (int)uVar24) {
      uVar38 = uVar44;
    }
  }
  if ((uint)uVar38 != uVar37) {
    uVar37 = 0xffffffff;
    local_478 = uVar44;
    do {
      local_490 = CONCAT44(local_490._4_4_,iVar32);
      lVar46 = *local_4a0;
      lVar48 = (longlong)(int)uVar38 * 0x88;
      lVar18 = lVar46 + lVar48;
      lVar53 = *(longlong *)(lVar18 + 0x38);
      if (*(longlong *)(lVar18 + 0x38) == 0) {
        lVar53 = lVar18 + 0x30;
      }
      iVar32 = *(int *)(lVar18 + 0x40);
      local_488 = uVar17;
      if ((longlong)iVar32 != 0) {
        lVar18 = 0;
        do {
          FUN_1409098b2(local_3b0,*(undefined2 *)(lVar53 + lVar18));
          lVar18 = lVar18 + 2;
        } while ((longlong)iVar32 * 2 != lVar18);
      }
      lVar46 = lVar46 + lVar48;
      lVar18 = lVar46 + 0x58;
      if (*(longlong *)(lVar46 + 0x60) != 0) {
        lVar18 = *(longlong *)(lVar46 + 0x60);
      }
      iVar32 = *(int *)(lVar46 + 0x68);
      if ((longlong)iVar32 != 0) {
        lVar46 = 0;
        do {
          FUN_1409098b2(local_3b0,*(undefined2 *)(lVar18 + lVar46));
          lVar46 = lVar46 + 2;
        } while ((longlong)iVar32 * 2 != lVar46);
      }
      uVar37 = uVar37 & ~(uint)uVar39;
      puVar20 = (uint *)local_4a8[0xe];
      if ((uint *)local_4a8[0xe] == (uint *)0x0) {
        puVar20 = local_480;
      }
      uVar24 = *(uint *)(local_4a8 + 0xf);
      uVar44 = (ulonglong)uVar24;
      iVar43 = (int)local_488;
      lVar18 = (longlong)iVar43;
      uVar31 = puVar20[lVar18] & uVar37;
      uVar17 = local_488;
      iVar32 = (uint)local_490;
      if (uVar31 == 0) {
        iVar23 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar23 = uVar24 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar32 = (uint)local_490 + 0x20;
        iVar27 = iVar23;
        if (iVar23 < iVar43) {
          iVar27 = iVar43;
        }
        if (iVar43 < iVar23) {
          lVar46 = 0;
          do {
            uVar31 = puVar20[lVar18 + lVar46 + 1];
            if (uVar31 != 0) {
              uVar37 = 0xffffffff;
              uVar17 = (ulonglong)(iVar43 + (int)lVar46 + 1);
              goto LAB_140ae8abc;
            }
            iVar32 = iVar32 + 0x20;
            lVar46 = lVar46 + 1;
          } while (iVar27 - lVar18 != lVar46);
          uVar37 = 0xffffffff;
          iVar43 = iVar27;
        }
        uVar17 = (ulonglong)(iVar43 + 1);
        uVar38 = uVar44;
      }
      else {
LAB_140ae8abc:
        uVar39 = (ulonglong)(-uVar31 & uVar31);
        uVar38 = uVar39 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar38 != 0) {
          for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar31 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        uVar38 = (ulonglong)uVar31;
        if ((int)uVar24 <= (int)uVar31) {
          uVar38 = uVar44;
        }
      }
    } while ((int)uVar38 != (int)local_478);
    uVar47 = (ulonglong)*(uint *)(local_4a8 + 5);
  }
LAB_140ae8b20:
  iVar32 = (int)uVar47;
  if (iVar32 == 0) {
    uVar39 = 1;
    uVar17 = 0;
    iVar43 = 0;
    uVar38 = 0;
  }
  else {
    puVar20 = (uint *)local_4a8[4];
    if ((uint *)local_4a8[4] == (uint *)0x0) {
      puVar20 = local_498;
    }
    uVar37 = *puVar20;
    if (uVar37 == 0) {
      iVar43 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar43 = iVar32 + -1;
      }
      uVar17 = 0;
      uVar38 = (ulonglong)(uint)(iVar43 >> 5);
      if (iVar43 >> 5 < 1) {
        uVar38 = uVar17;
      }
      iVar43 = 0;
      do {
        if (uVar38 == uVar17) goto LAB_140ae8d7a;
        iVar43 = iVar43 + 0x20;
        uVar37 = puVar20[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar37 == 0);
    }
    else {
      uVar17 = 0;
      iVar43 = 0;
    }
    uVar39 = (ulonglong)(-uVar37 & uVar37);
    uVar38 = uVar39 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar37 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    uVar38 = (ulonglong)uVar37;
    if (iVar32 <= (int)uVar37) {
      uVar38 = uVar47;
    }
  }
  if ((int)uVar38 != iVar32) {
    uVar37 = 0xffffffff;
    local_488 = uVar47;
    do {
      local_490 = CONCAT44(local_490._4_4_,iVar43);
      lVar18 = (longlong)(int)uVar38 * 0x60;
      uVar4 = *(ushort *)(*local_4a8 + lVar18);
      if ((int)(uint)uVar4 < (int)local_398) {
        puVar20 = local_3a0;
        if (local_3a0 == (uint *)0x0) {
          puVar20 = local_3b0;
        }
        if ((puVar20[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) != 0) {
          puVar52 = (undefined2 *)(*local_4a8 + lVar18);
          puVar36 = puVar52 + 4;
          if (*(undefined2 **)(puVar52 + 8) != (undefined2 *)0x0) {
            puVar36 = *(undefined2 **)(puVar52 + 8);
          }
          iVar32 = *(int *)(puVar52 + 0xc);
          if ((longlong)iVar32 != 0) {
            lVar18 = 0;
            do {
              FUN_1447ba426(local_3b0,*(undefined2 *)((longlong)puVar36 + lVar18),*puVar52);
              lVar18 = lVar18 + 2;
            } while ((longlong)iVar32 * 2 != lVar18);
          }
          puVar36 = puVar52 + 0x18;
          if (*(undefined2 **)(puVar52 + 0x1c) != (undefined2 *)0x0) {
            puVar36 = *(undefined2 **)(puVar52 + 0x1c);
          }
          iVar32 = *(int *)(puVar52 + 0x20);
          if ((longlong)iVar32 != 0) {
            lVar18 = 0;
            do {
              FUN_1447ba426(local_3b0,*(undefined2 *)((longlong)puVar36 + lVar18),*puVar52);
              lVar18 = lVar18 + 2;
            } while ((longlong)iVar32 * 2 != lVar18);
          }
        }
      }
      uVar37 = uVar37 & ~(uint)uVar39;
      puVar20 = (uint *)local_4a8[4];
      if ((uint *)local_4a8[4] == (uint *)0x0) {
        puVar20 = local_498;
      }
      uVar24 = *(uint *)(local_4a8 + 5);
      iVar32 = (int)uVar17;
      lVar18 = (longlong)iVar32;
      uVar31 = puVar20[lVar18] & uVar37;
      iVar43 = (uint)local_490;
      if (uVar31 == 0) {
        iVar23 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar23 = uVar24 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar43 = (uint)local_490 + 0x20;
        iVar27 = iVar23;
        if (iVar23 < iVar32) {
          iVar27 = iVar32;
        }
        if (iVar32 < iVar23) {
          lVar46 = 0;
          do {
            uVar31 = puVar20[lVar18 + lVar46 + 1];
            if (uVar31 != 0) {
              uVar17 = (ulonglong)(iVar32 + (int)lVar46 + 1);
              uVar37 = 0xffffffff;
              goto LAB_140ae8d16;
            }
            iVar43 = iVar43 + 0x20;
            lVar46 = lVar46 + 1;
          } while (iVar27 - lVar18 != lVar46);
          uVar37 = 0xffffffff;
          iVar32 = iVar27;
        }
        uVar17 = (ulonglong)(iVar32 + 1);
        uVar31 = uVar24;
      }
      else {
LAB_140ae8d16:
        uVar39 = (ulonglong)(-uVar31 & uVar31);
        uVar44 = uVar39 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar44 != 0) {
          for (; uVar44 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar31 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar24 <= (int)uVar31) {
          uVar31 = uVar24;
        }
      }
      uVar38 = (ulonglong)uVar31;
    } while (uVar31 != (uint)local_488);
    uVar44 = (ulonglong)*(uint *)(local_4a8 + 0xf);
  }
LAB_140ae8d7a:
  iVar32 = (int)uVar44;
  plVar22 = local_4a0;
  if (iVar32 == 0) {
    uVar47 = 1;
    uVar17 = 0;
    iVar43 = 0;
    uVar38 = 0;
  }
  else {
    puVar20 = (uint *)local_4a8[0xe];
    if ((uint *)local_4a8[0xe] == (uint *)0x0) {
      puVar20 = local_480;
    }
    uVar37 = *puVar20;
    if (uVar37 == 0) {
      iVar43 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar43 = iVar32 + -1;
      }
      uVar17 = 0;
      uVar38 = (ulonglong)(uint)(iVar43 >> 5);
      if (iVar43 >> 5 < 1) {
        uVar38 = uVar17;
      }
      iVar43 = 0;
      do {
        if (uVar38 == uVar17) goto LAB_140ae8dfd;
        iVar43 = iVar43 + 0x20;
        uVar37 = puVar20[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar37 == 0);
    }
    else {
      uVar17 = 0;
      iVar43 = 0;
    }
    uVar47 = (ulonglong)(-uVar37 & uVar37);
    uVar38 = uVar47 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar37 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    uVar38 = (ulonglong)uVar37;
    if (iVar32 <= (int)uVar37) {
      uVar38 = uVar44;
    }
  }
  if ((int)uVar38 != iVar32) {
    uVar37 = 0xffffffff;
    local_460 = uVar44;
    do {
      local_458 = CONCAT44(local_458._4_4_,uVar37);
      local_488 = CONCAT44(local_488._4_4_,iVar43);
      lVar18 = *plVar22;
      lVar46 = (longlong)(int)uVar38 * 0x88;
      puVar20 = (uint *)(lVar18 + lVar46);
      uVar37 = *(uint *)(lVar18 + 0x20 + lVar46);
      local_478 = uVar17;
      local_468 = uVar47;
      if (uVar37 == 0) {
        uVar38 = 1;
        uVar47 = 0;
        uVar17 = 0;
        iVar32 = 0;
      }
      else {
        uVar24 = *puVar20;
        uVar47 = 0;
        iVar32 = 0;
        if (uVar24 == 0) {
          iVar32 = uVar37 + 0x1e;
          if (-1 < (int)(uVar37 - 1)) {
            iVar32 = uVar37 - 1;
          }
          uVar47 = 0;
          uVar17 = (ulonglong)(uint)(iVar32 >> 5);
          if (iVar32 >> 5 < 1) {
            uVar17 = uVar47;
          }
          iVar32 = 0;
          do {
            if (uVar17 == uVar47) goto LAB_140ae9439;
            iVar32 = iVar32 + 0x20;
            uVar24 = *(uint *)(lVar18 + lVar46 + 4 + uVar47 * 4);
            uVar47 = uVar47 + 1;
          } while (uVar24 == 0);
        }
        uVar38 = (ulonglong)(-uVar24 & uVar24);
        uVar17 = uVar38 * 2 + 1;
        lVar48 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar48 == 0; lVar48 = lVar48 + -1) {
          }
        }
        uVar24 = (iVar32 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
        if ((int)uVar37 <= (int)uVar24) {
          uVar24 = uVar37;
        }
        uVar17 = (ulonglong)uVar24;
      }
      if ((int)uVar17 < (int)uVar37) {
        local_470 = puVar20 + 0xc;
        local_448 = puVar20 + 0x16;
        local_450 = lVar18 + lVar46 + 4;
        uVar37 = 0xffffffff;
        do {
          local_490 = CONCAT44(local_490._4_4_,uVar37);
          if ((int)(uVar17 & 0xffff) < (int)local_398) {
            puVar33 = local_3a0;
            if (local_3a0 == (uint *)0x0) {
              puVar33 = local_3b0;
            }
            if ((puVar33[(uVar17 & 0xffff) >> 5] >> ((uint)uVar17 & 0x1f) & 1) != 0) {
              puVar33 = *(uint **)(puVar20 + 0xe);
              if (*(uint **)(puVar20 + 0xe) == (uint *)0x0) {
                puVar33 = local_470;
              }
              uVar37 = puVar20[0x10];
              if ((longlong)(int)uVar37 != 0) {
                lVar18 = 0;
                do {
                  FUN_1447ba426(local_3b0,*(undefined2 *)((longlong)puVar33 + lVar18),uVar17);
                  lVar18 = lVar18 + 2;
                } while ((longlong)(int)uVar37 * 2 != lVar18);
              }
              puVar33 = *(uint **)(puVar20 + 0x18);
              if (*(uint **)(puVar20 + 0x18) == (uint *)0x0) {
                puVar33 = local_448;
              }
              uVar37 = puVar20[0x1a];
              if ((longlong)(int)uVar37 != 0) {
                lVar18 = 0;
                do {
                  FUN_1447ba426(local_3b0,*(undefined2 *)((longlong)puVar33 + lVar18),uVar17);
                  lVar18 = lVar18 + 2;
                } while ((longlong)(int)uVar37 * 2 != lVar18);
              }
            }
          }
          uVar37 = (uint)local_490 & ~(uint)uVar38;
          uVar24 = puVar20[8];
          iVar43 = (int)uVar47;
          lVar18 = (longlong)iVar43;
          uVar31 = puVar20[lVar18] & uVar37;
          if (uVar31 == 0) {
            iVar23 = uVar24 + 0x1e;
            if (-1 < (int)(uVar24 - 1)) {
              iVar23 = uVar24 - 1;
            }
            iVar27 = iVar23 >> 5;
            if (iVar23 >> 5 < iVar43) {
              iVar27 = iVar43;
            }
            lVar46 = 0;
            do {
              if (iVar27 - lVar18 == lVar46) goto LAB_140ae9431;
              iVar32 = iVar32 + 0x20;
              uVar31 = *(uint *)(local_450 + lVar18 * 4 + lVar46 * 4);
              lVar46 = lVar46 + 1;
            } while (uVar31 == 0);
            uVar47 = (ulonglong)(uint)(iVar43 + (int)lVar46);
            uVar37 = 0xffffffff;
          }
          uVar38 = (ulonglong)(-uVar31 & uVar31);
          uVar44 = uVar38 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar44 != 0) {
            for (; uVar44 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar51 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          uVar31 = uVar51;
          if ((int)uVar24 <= (int)uVar51) {
            uVar31 = uVar24;
          }
          uVar17 = (ulonglong)uVar31;
        } while ((int)uVar51 < (int)uVar24);
LAB_140ae9431:
        uVar44 = (ulonglong)*(uint *)(local_4a8 + 0xf);
        plVar22 = local_4a0;
      }
LAB_140ae9439:
      uVar37 = (uint)local_458 & ~(uint)local_468;
      puVar20 = (uint *)local_4a8[0xe];
      if ((uint *)local_4a8[0xe] == (uint *)0x0) {
        puVar20 = local_480;
      }
      iVar32 = (int)local_478;
      lVar18 = (longlong)iVar32;
      uVar24 = puVar20[lVar18] & uVar37;
      iVar23 = (int)uVar44;
      uVar17 = local_478;
      iVar43 = (int)local_488;
      if (uVar24 == 0) {
        iVar27 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar27 = iVar23 + -1;
        }
        iVar27 = iVar27 >> 5;
        iVar43 = (int)local_488 + 0x20;
        iVar25 = iVar27;
        if (iVar27 < iVar32) {
          iVar25 = iVar32;
        }
        if (iVar32 < iVar27) {
          lVar46 = 0;
          do {
            uVar24 = puVar20[lVar18 + lVar46 + 1];
            if (uVar24 != 0) {
              uVar37 = 0xffffffff;
              uVar17 = (ulonglong)(iVar32 + (int)lVar46 + 1);
              goto LAB_140ae94cb;
            }
            iVar43 = iVar43 + 0x20;
            lVar46 = lVar46 + 1;
          } while (iVar25 - lVar18 != lVar46);
          uVar37 = 0xffffffff;
          iVar32 = iVar25;
        }
        uVar17 = (ulonglong)(iVar32 + 1);
        uVar38 = uVar44;
        uVar47 = local_468;
        plVar22 = local_4a0;
      }
      else {
LAB_140ae94cb:
        uVar47 = (ulonglong)(-uVar24 & uVar24);
        uVar38 = uVar47 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar38 != 0) {
          for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar24 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        uVar38 = (ulonglong)uVar24;
        if (iVar23 <= (int)uVar24) {
          uVar38 = uVar44;
        }
      }
    } while ((int)uVar38 != (int)local_460);
  }
LAB_140ae8dfd:
  FUN_1459caf0a(local_3b0);
  iVar43 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0xffffffff00000080;
  local_3d4 = 0;
  local_3c8 = (undefined1 *)0x0;
  local_3c0 = 0;
  uVar17 = 1;
  uVar44 = 0;
  iVar32 = 0;
  if ((int)local_398 != 0) {
    puVar20 = local_3a0;
    if (local_3a0 == (uint *)0x0) {
      puVar20 = local_3b0;
    }
    uVar37 = *puVar20;
    if (uVar37 == 0) {
      iVar32 = (int)local_398 + 0x1e;
      if (-1 < (int)local_398 + -1) {
        iVar32 = (int)local_398 + -1;
      }
      uVar44 = 0;
      uVar17 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar17 = 0;
      }
      iVar43 = 0;
      do {
        if (uVar17 == uVar44) goto LAB_140ae8f99;
        iVar43 = iVar43 + 0x20;
        uVar37 = puVar20[uVar44 + 1];
        uVar44 = uVar44 + 1;
      } while (uVar37 == 0);
    }
    else {
      iVar43 = 0;
      uVar44 = 0;
    }
    uVar17 = (ulonglong)(-uVar37 & uVar37);
    uVar38 = uVar17 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar32 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)local_398 <= iVar32) {
      iVar32 = (int)local_398;
    }
  }
  if (iVar32 < (int)local_398) {
    uVar37 = 0xffffffff;
    do {
      FUN_1412f874c(local_3b0,iVar32,&local_408);
      uVar37 = ~(uint)uVar17 & uVar37;
      puVar20 = local_3a0;
      if (local_3a0 == (uint *)0x0) {
        puVar20 = local_3b0;
      }
      iVar32 = (int)uVar44;
      lVar18 = (longlong)iVar32;
      uVar24 = puVar20[lVar18] & uVar37;
      if (uVar24 == 0) {
        iVar23 = (int)local_398 + 0x1e;
        if (-1 < (int)local_398 + -1) {
          iVar23 = (int)local_398 + -1;
        }
        iVar23 = iVar23 >> 5;
        iVar27 = iVar23;
        if (iVar23 < iVar32) {
          iVar27 = iVar32;
        }
        if (iVar23 <= iVar32) break;
        lVar46 = 0;
        while( true ) {
          iVar43 = iVar43 + 0x20;
          uVar24 = puVar20[lVar18 + lVar46 + 1];
          if (uVar24 != 0) break;
          lVar46 = lVar46 + 1;
          if (iVar27 - lVar18 == lVar46) goto LAB_140ae8f99;
        }
        uVar44 = (ulonglong)(iVar32 + (int)lVar46 + 1);
        uVar37 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar24 & uVar24);
      uVar38 = uVar17 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar32 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar32 < (int)local_398);
  }
LAB_140ae8f99:
  local_418 = 0;
  uStack_410 = 0;
  iVar32 = (int)local_4a8[5];
  if (iVar32 == 0) {
    uVar38 = 1;
    uVar44 = 0;
    iVar43 = 0;
    iVar23 = 0;
  }
  else {
    puVar20 = (uint *)local_4a8[4];
    if ((uint *)local_4a8[4] == (uint *)0x0) {
      puVar20 = local_498;
    }
    uVar37 = *puVar20;
    if (uVar37 == 0) {
      iVar43 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar43 = iVar32 + -1;
      }
      uVar44 = 0;
      uVar17 = (ulonglong)(uint)(iVar43 >> 5);
      if (iVar43 >> 5 < 1) {
        uVar17 = uVar44;
      }
      iVar43 = 0;
      do {
        if (uVar17 == uVar44) goto LAB_140ae985a;
        iVar43 = iVar43 + 0x20;
        uVar37 = puVar20[uVar44 + 1];
        uVar44 = uVar44 + 1;
      } while (uVar37 == 0);
    }
    else {
      uVar44 = 0;
      iVar43 = 0;
    }
    uVar38 = (ulonglong)(-uVar37 & uVar37);
    uVar17 = uVar38 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar23 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar32 <= iVar23) {
      iVar23 = iVar32;
    }
  }
  if (iVar23 != iVar32) {
    uVar37 = 0xffffffff;
    puVar20 = local_498;
    do {
      uVar17 = uStack_410;
      uVar4 = *(ushort *)(*local_4a8 + (longlong)iVar23 * 0x60);
      uVar47 = 0;
      if ((int)uStack_400 != local_3d4) {
        puVar19 = local_3c8;
        if (local_3c8 == (undefined1 *)0x0) {
          puVar19 = local_3d0;
        }
        iVar23 = *(int *)(puVar19 + (ulonglong)(local_3c0 - 1U & (uint)uVar4) * 4);
        uVar47 = 0;
        if (iVar23 != -1) {
          do {
            lVar18 = local_408 + (longlong)iVar23 * 0x10;
            if (*(ushort *)(local_408 + (longlong)iVar23 * 0x10) == uVar4) {
              uVar47 = 0;
              if ((uint *)(lVar18 + 4) != (uint *)0x0 && lVar18 != 0) {
                uVar47 = (ulonglong)*(uint *)(lVar18 + 4);
              }
              goto LAB_140ae90d8;
            }
            iVar23 = *(int *)(lVar18 + 8);
          } while (iVar23 != -1);
          uVar47 = 0;
        }
      }
LAB_140ae90d8:
      lVar18 = (longlong)(int)uStack_410;
      uVar24 = (int)uStack_410 + 1;
      uStack_410 = CONCAT44(uStack_410._4_4_,uVar24);
      if (uStack_410._4_4_ < uVar24) {
        FUN_14634276c(&local_418,uVar17 & 0xffffffff);
        puVar20 = local_498;
      }
      lVar46 = local_418;
      plVar22 = local_4a0;
      *(ulonglong *)(local_418 + lVar18 * 8) = (ulonglong)uVar4 | uVar47 << 0x20;
      uVar37 = uVar37 & ~(uint)uVar38;
      puVar33 = (uint *)local_4a8[4];
      if ((uint *)local_4a8[4] == (uint *)0x0) {
        puVar33 = puVar20;
      }
      iVar27 = (int)local_4a8[5];
      iVar23 = (int)uVar44;
      lVar18 = (longlong)iVar23;
      uVar24 = puVar33[lVar18] & uVar37;
      if (uVar24 == 0) {
        iVar25 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar25 = iVar27 + -1;
        }
        iVar25 = iVar25 >> 5;
        iVar43 = iVar43 + 0x20;
        iVar26 = iVar25;
        if (iVar25 < iVar23) {
          iVar26 = iVar23;
        }
        puVar20 = local_498;
        if (iVar23 < iVar25) {
          lVar48 = 0;
          do {
            uVar24 = puVar33[lVar18 + lVar48 + 1];
            if (uVar24 != 0) {
              uVar44 = (ulonglong)(iVar23 + (int)lVar48 + 1);
              uVar37 = 0xffffffff;
              goto LAB_140ae9194;
            }
            iVar43 = iVar43 + 0x20;
            lVar48 = lVar48 + 1;
          } while (iVar26 - lVar18 != lVar48);
          uVar37 = 0xffffffff;
          iVar23 = iVar26;
        }
        uVar44 = (ulonglong)(iVar23 + 1);
        iVar23 = iVar27;
      }
      else {
LAB_140ae9194:
        uVar38 = (ulonglong)(-uVar24 & uVar24);
        uVar17 = uVar38 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar23 = (iVar43 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar27 <= iVar23) {
          iVar23 = iVar27;
        }
      }
    } while (iVar23 != iVar32);
    iVar32 = (int)uStack_410;
    lVar18 = (longlong)(int)uStack_410;
    if (1 < lVar18) {
      memset(&local_368,0,0x2f0);
      local_378 = (longlong *)lVar46;
      uStack_370 = (int *)(lVar46 + lVar18 * 8 + -8);
      fVar56 = logf((float)iVar32);
      local_368 = (undefined1 *)CONCAT44(local_368._4_4_,(int)(longlong)(fVar56 + fVar56));
      plVar21 = &local_378;
      do {
        puVar29 = (undefined8 *)*plVar21;
        puVar41 = (undefined8 *)plVar21[1];
        iVar32 = (int)plVar21[2];
        iVar43 = (int)((ulonglong)((longlong)puVar41 - (longlong)puVar29) >> 3);
        uVar44 = (ulonglong)(iVar43 + 1);
        puVar34 = puVar29;
        puVar40 = puVar29;
        puVar49 = puVar41;
        if (iVar32 != 0) {
LAB_140ae95b2:
          if (8 < (int)(uint)uVar44) {
            uVar37 = (uint)uVar44 >> 1;
            uVar5 = puVar40[uVar37];
            puVar40[uVar37] = *puVar40;
            *puVar40 = uVar5;
            puVar28 = puVar49 + 1;
            puVar29 = puVar40;
            do {
              puVar16 = puVar29 + 1;
              puVar50 = puVar29 + 1;
              do {
                puVar29 = puVar50;
                puVar45 = puVar16;
                if (puVar49 < puVar29) break;
                puVar16 = puVar45 + 1;
                puVar50 = puVar29 + 1;
              } while (*(int *)((longlong)puVar29 + 4) <= *(int *)((longlong)puVar40 + 4));
              puVar16 = puVar28 + -2;
              do {
                puVar50 = puVar28;
                puVar35 = puVar16;
                puVar28 = puVar50 + -1;
                if (puVar28 <= puVar40) break;
                puVar16 = puVar35 + -1;
              } while (*(int *)((longlong)puVar40 + 4) <= *(int *)((longlong)puVar50 + -4));
              if (puVar28 < puVar29) goto LAB_140ae9635;
              uVar5 = *puVar29;
              *puVar29 = *puVar28;
              *puVar28 = uVar5;
            } while( true );
          }
          for (; puVar29 = puVar40, puVar41 = puVar40, puVar40 < puVar49; puVar49 = puVar49 + -1) {
            while (puVar34 = puVar29, puVar29 = puVar41 + 1, puVar29 <= puVar49) {
              piVar1 = (int *)((longlong)puVar41 + 0xc);
              puVar41 = puVar29;
              if (*piVar1 <= *(int *)((longlong)puVar34 + 4)) {
                puVar29 = puVar34;
              }
            }
            uVar5 = *puVar34;
            *puVar34 = *puVar49;
            *puVar49 = uVar5;
          }
          goto LAB_140ae984d;
        }
LAB_140ae96c8:
        iVar32 = (int)uVar44;
        if (iVar32 != 0) {
          iVar43 = (iVar43 - (iVar43 + -1 >> 0x1f)) + -1 >> 1;
          iVar23 = iVar43;
joined_r0x000140ae96ef:
          do {
            iVar27 = iVar43 * 2 + 1;
            if (iVar27 < iVar32) {
              iVar25 = iVar43 * 2 + 2;
              if ((iVar25 < iVar32) &&
                 (*(int *)((longlong)puVar29 + (longlong)iVar27 * 8 + 4) <=
                  *(int *)((longlong)puVar29 + (longlong)iVar25 * 8 + 4))) {
                iVar27 = iVar25;
              }
              lVar46 = (longlong)iVar43;
              lVar18 = (longlong)iVar27;
              if (*(int *)((longlong)puVar29 + lVar46 * 8 + 4) <
                  *(int *)((longlong)puVar29 + lVar18 * 8 + 4)) {
                uVar5 = puVar29[lVar46];
                puVar29[lVar46] = puVar29[lVar18];
                puVar29[lVar18] = uVar5;
                iVar43 = iVar27;
                goto joined_r0x000140ae96ef;
              }
            }
            bVar55 = iVar23 != 0;
            iVar43 = iVar23 + -1;
            iVar23 = iVar43;
          } while (bVar55);
          if (1 < iVar32) {
            uVar5 = *puVar29;
            *puVar29 = puVar29[uVar44 - 1];
            puVar29[uVar44 - 1] = uVar5;
            if (iVar32 != 2) {
              do {
                uVar17 = uVar44 - 1;
                iVar32 = 0;
                iVar23 = 1;
                iVar43 = 0;
                do {
                  iVar32 = iVar32 + 2;
                  iVar27 = iVar23;
                  if (((longlong)iVar32 < (longlong)uVar17) &&
                     (*(int *)((longlong)puVar29 + (longlong)iVar23 * 8 + 4) <=
                      *(int *)((longlong)puVar29 + (longlong)iVar32 * 8 + 4))) {
                    iVar27 = iVar32;
                  }
                  lVar18 = (longlong)iVar43;
                  lVar46 = (longlong)iVar27;
                  if (*(int *)((longlong)puVar29 + lVar46 * 8 + 4) <=
                      *(int *)((longlong)puVar29 + lVar18 * 8 + 4)) break;
                  uVar5 = puVar29[lVar18];
                  puVar29[lVar18] = puVar29[lVar46];
                  puVar29[lVar46] = uVar5;
                  iVar32 = iVar27 * 2;
                  iVar23 = iVar27 * 2 + 1;
                  iVar43 = iVar27;
                } while ((longlong)iVar23 < (longlong)uVar17);
                uVar5 = *puVar29;
                *puVar29 = puVar29[uVar44 - 2];
                puVar29[uVar44 - 2] = uVar5;
                uVar44 = uVar17;
              } while (2 < uVar17);
            }
          }
        }
LAB_140ae984d:
        plVar21 = plVar21 + -3;
      } while (&local_378 <= plVar21);
    }
  }
LAB_140ae985a:
  local_428 = 0;
  uStack_420 = 0;
  uVar37 = *(uint *)(local_4a8 + 0xf);
  if (uVar37 == 0) {
    uVar38 = 1;
    uVar44 = 0;
    iVar32 = 0;
    uVar24 = 0;
  }
  else {
    puVar20 = (uint *)local_4a8[0xe];
    if ((uint *)local_4a8[0xe] == (uint *)0x0) {
      puVar20 = local_480;
    }
    uVar24 = *puVar20;
    if (uVar24 == 0) {
      iVar32 = uVar37 + 0x1e;
      if (-1 < (int)(uVar37 - 1)) {
        iVar32 = uVar37 - 1;
      }
      uVar44 = 0;
      uVar17 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar17 = uVar44;
      }
      iVar32 = 0;
      do {
        if (uVar17 == uVar44) goto LAB_140aea379;
        iVar32 = iVar32 + 0x20;
        uVar24 = puVar20[uVar44 + 1];
        uVar44 = uVar44 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar44 = 0;
      iVar32 = 0;
    }
    uVar38 = (ulonglong)(-uVar24 & uVar24);
    uVar17 = uVar38 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar24 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar37 <= (int)uVar24) {
      uVar24 = uVar37;
    }
  }
  if (uVar24 != uVar37) {
    uVar31 = 0xffffffff;
    local_470 = (uint *)(ulonglong)uVar37;
    do {
      lVar18 = *plVar22;
      lVar46 = (longlong)(int)uVar24 * 0x88;
      puVar20 = (uint *)(lVar18 + lVar46);
      uVar37 = *(uint *)(lVar18 + 0x20 + lVar46);
      local_498 = (uint *)CONCAT44(local_498._4_4_,iVar32);
      local_478 = CONCAT44(local_478._4_4_,uVar31);
      if (uVar37 == 0) {
        uVar47 = 1;
        iVar32 = 0;
        uVar17 = 0;
        uVar24 = 0;
      }
      else {
        uVar24 = *puVar20;
        iVar32 = 0;
        uVar17 = 0;
        if (uVar24 == 0) {
          iVar32 = uVar37 + 0x1e;
          if (-1 < (int)(uVar37 - 1)) {
            iVar32 = uVar37 - 1;
          }
          iVar43 = 0;
          uVar47 = (ulonglong)(uint)(iVar32 >> 5);
          if (iVar32 >> 5 < 1) {
            uVar47 = 0;
          }
          uVar17 = 0;
          iVar32 = 0;
          do {
            if (uVar47 == uVar17) goto LAB_140ae9af3;
            iVar32 = iVar32 + 0x20;
            uVar24 = *(uint *)(lVar18 + lVar46 + 4 + uVar17 * 4);
            uVar17 = uVar17 + 1;
          } while (uVar24 == 0);
        }
        uVar47 = (ulonglong)(-uVar24 & uVar24);
        uVar39 = uVar47 * 2 + 1;
        lVar48 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar48 == 0; lVar48 = lVar48 + -1) {
          }
        }
        uVar24 = (iVar32 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
        if ((int)uVar37 <= (int)uVar24) {
          uVar24 = uVar37;
        }
      }
      iVar43 = 0;
      if ((int)uVar24 < (int)uVar37) {
        local_490 = CONCAT44(local_490._4_4_,(int)uStack_400);
        puVar19 = local_3c8;
        if (local_3c8 == (undefined1 *)0x0) {
          puVar19 = local_3d0;
        }
        iVar23 = uVar37 + 0x1e;
        if (-1 < (int)(uVar37 - 1)) {
          iVar23 = uVar37 - 1;
        }
        local_468 = CONCAT44(local_468._4_4_,local_3c0 + -1) & 0xffffffff0000ffff;
        local_458 = lVar18 + lVar46 + 4;
        iVar43 = 0;
        uVar31 = 0xffffffff;
        do {
          if ((int)uStack_400 != local_3d4) {
            iVar27 = *(int *)(puVar19 + (ulonglong)(uVar24 & (uint)local_468) * 4);
            while (iVar27 != -1) {
              lVar18 = local_408 + (longlong)iVar27 * 0x10;
              if (*(short *)(local_408 + (longlong)iVar27 * 0x10) == (short)uVar24) {
                if (((int *)(lVar18 + 4) != (int *)0x0 && lVar18 != 0) &&
                   (iVar27 = *(int *)(lVar18 + 4), iVar43 < iVar27)) {
                  iVar43 = iVar27;
                }
                break;
              }
              iVar27 = *(int *)(lVar18 + 8);
            }
          }
          uVar31 = uVar31 & ~(uint)uVar47;
          iVar27 = (int)uVar17;
          lVar18 = (longlong)iVar27;
          uVar24 = puVar20[lVar18] & uVar31;
          if (uVar24 == 0) {
            iVar25 = iVar23 >> 5;
            if (iVar23 >> 5 < iVar27) {
              iVar25 = iVar27;
            }
            lVar46 = 0;
            do {
              if (iVar25 - lVar18 == lVar46) goto LAB_140ae9af3;
              iVar32 = iVar32 + 0x20;
              uVar24 = *(uint *)(local_458 + lVar18 * 4 + lVar46 * 4);
              lVar46 = lVar46 + 1;
            } while (uVar24 == 0);
            uVar17 = (ulonglong)(uint)(iVar27 + (int)lVar46);
            uVar31 = 0xffffffff;
          }
          uVar47 = (ulonglong)(-uVar24 & uVar24);
          uVar39 = uVar47 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar24 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while ((int)uVar24 < (int)uVar37);
      }
LAB_140ae9af3:
      local_358 = 0;
      uVar37 = puVar20[8];
      uVar24 = uVar37 + 0x1f & 0xffffffe0;
      local_488 = uVar44;
      if (0 < (int)uVar24) {
        if (uVar24 < 0x101) {
          uVar24 = 0x100;
        }
        local_358 = (ulonglong)uVar24 << 0x20;
        FUN_14497ddce(&local_378,0);
        uVar37 = puVar20[8];
      }
      puVar33 = local_480;
      local_358 = CONCAT44(local_358._4_4_,uVar37);
      if (uVar37 != 0) {
        memcpy(&local_378,puVar20,(ulonglong)(uVar37 + 0x1f >> 3 & 0xfffffffc));
      }
      uVar44 = uStack_420;
      plVar22 = local_4a0;
      local_350 = puVar20[10];
      local_34c = iVar43;
      lVar18 = (longlong)(int)uStack_420;
      uVar37 = (int)uStack_420 + 1;
      uStack_420 = CONCAT44(uStack_420._4_4_,uVar37);
      if (uStack_420._4_4_ < uVar37) {
        FUN_1463427f2(&local_428,uVar44 & 0xffffffff);
      }
      lVar46 = local_428;
      lVar18 = lVar18 * 0x30;
      puVar49 = (undefined8 *)(local_428 + 0x10 + lVar18);
      *puVar49 = local_368;
      puVar49[1] = uStack_360;
      puVar3 = (undefined4 *)(local_428 + lVar18);
      *puVar3 = (undefined4)local_378;
      puVar3[1] = local_378._4_4_;
      puVar3[2] = (undefined4)uStack_370;
      puVar3[3] = uStack_370._4_4_;
      *(undefined4 *)(local_428 + 0x20 + lVar18) = (undefined4)local_358;
      *(undefined4 *)(local_428 + 0x24 + lVar18) = local_358._4_4_;
      local_358 = 0;
      *(uint *)(local_428 + 0x28 + lVar18) = local_350;
      *(int *)(local_428 + 0x2c + lVar18) = local_34c;
      uVar31 = (uint)local_478 & ~(uint)uVar38;
      puVar20 = (uint *)local_4a8[0xe];
      if ((uint *)local_4a8[0xe] == (uint *)0x0) {
        puVar20 = puVar33;
      }
      uVar37 = *(uint *)(local_4a8 + 0xf);
      iVar43 = (int)local_488;
      lVar18 = (longlong)iVar43;
      uVar24 = puVar20[lVar18] & uVar31;
      uVar44 = local_488;
      iVar32 = (int)local_498;
      if (uVar24 == 0) {
        iVar23 = uVar37 + 0x1e;
        if (-1 < (int)(uVar37 - 1)) {
          iVar23 = uVar37 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar32 = (int)local_498 + 0x20;
        iVar27 = iVar23;
        if (iVar23 < iVar43) {
          iVar27 = iVar43;
        }
        if (iVar43 < iVar23) {
          lVar48 = 0;
          do {
            uVar24 = puVar20[lVar18 + lVar48 + 1];
            if (uVar24 != 0) {
              uVar31 = 0xffffffff;
              uVar44 = (ulonglong)(iVar43 + (int)lVar48 + 1);
              goto LAB_140ae9c89;
            }
            iVar32 = iVar32 + 0x20;
            lVar48 = lVar48 + 1;
          } while (iVar27 - lVar18 != lVar48);
          uVar31 = 0xffffffff;
          iVar43 = iVar27;
        }
        uVar44 = (ulonglong)(iVar43 + 1);
        plVar22 = local_4a0;
        uVar24 = uVar37;
      }
      else {
LAB_140ae9c89:
        uVar38 = (ulonglong)(-uVar24 & uVar24);
        uVar17 = uVar38 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar24 = (iVar32 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar37 <= (int)uVar24) {
          uVar24 = uVar37;
        }
      }
    } while (uVar24 != (uint)local_470);
    iVar32 = (int)uStack_420;
    lVar18 = (longlong)(int)uStack_420;
    if (1 < lVar18) {
      memset(&local_368,0,0x2f0);
      local_378 = (longlong *)lVar46;
      uStack_370 = (int *)(lVar18 * 0x30 + lVar46 + -0x30);
      fVar56 = logf((float)iVar32);
      local_368 = (undefined1 *)CONCAT44(local_368._4_4_,(int)(longlong)(fVar56 + fVar56));
      plVar21 = &local_378;
      do {
        puVar29 = (undefined8 *)*plVar21;
        puVar49 = (undefined8 *)plVar21[1];
        iVar32 = (int)plVar21[2];
        iVar43 = (int)((ulonglong)((longlong)puVar49 - (longlong)puVar29) >> 4) * -0x55555555;
        uVar44 = (ulonglong)(iVar43 + 1);
        puVar41 = puVar29;
        puVar34 = puVar49;
        if (iVar32 != 0) {
LAB_140ae9d83:
          if (8 < (int)(uint)uVar44) {
            uVar44 = (ulonglong)((uint)uVar44 >> 1);
            uVar5 = puVar29[uVar44 * 6];
            uVar6 = (puVar29 + uVar44 * 6)[1];
            uVar7 = puVar29[uVar44 * 6 + 2];
            uVar8 = (puVar29 + uVar44 * 6 + 2)[1];
            uVar9 = puVar29[uVar44 * 6 + 4];
            uVar10 = (puVar29 + uVar44 * 6 + 4)[1];
            uVar11 = *puVar29;
            uVar12 = puVar29[1];
            uVar13 = puVar29[2];
            uVar14 = puVar29[3];
            uVar15 = puVar29[5];
            puVar29[uVar44 * 6 + 4] = puVar29[4];
            (puVar29 + uVar44 * 6 + 4)[1] = uVar15;
            puVar29[uVar44 * 6 + 2] = uVar13;
            (puVar29 + uVar44 * 6 + 2)[1] = uVar14;
            puVar29[uVar44 * 6] = uVar11;
            (puVar29 + uVar44 * 6)[1] = uVar12;
            puVar29[4] = uVar9;
            puVar29[5] = uVar10;
            puVar29[2] = uVar7;
            puVar29[3] = uVar8;
            *puVar29 = uVar5;
            puVar29[1] = uVar6;
            puVar40 = puVar49 + 6;
            puVar28 = puVar29;
            do {
              puVar16 = puVar28 + 6;
              puVar50 = puVar28 + 6;
              do {
                puVar28 = puVar50;
                puVar45 = puVar16;
                if (puVar49 < puVar28) break;
                puVar16 = puVar45 + 6;
                puVar50 = puVar28 + 6;
              } while (*(int *)((longlong)puVar28 + 0x2c) <= *(int *)((longlong)puVar29 + 0x2c));
              puVar16 = puVar40 + -0xc;
              do {
                puVar50 = puVar40;
                puVar35 = puVar16;
                puVar40 = puVar50 + -6;
                if (puVar40 <= puVar29) break;
                puVar16 = puVar35 + -6;
              } while (*(int *)((longlong)puVar29 + 0x2c) <= *(int *)((longlong)puVar50 + -4));
              if (puVar40 < puVar28) goto LAB_140ae9eb9;
              uVar5 = *puVar28;
              uVar6 = puVar28[1];
              uVar7 = puVar28[2];
              uVar8 = puVar28[3];
              uVar9 = puVar28[4];
              uVar10 = puVar28[5];
              uVar11 = *puVar40;
              uVar12 = puVar50[-5];
              uVar13 = puVar50[-4];
              uVar14 = puVar50[-3];
              uVar15 = puVar50[-1];
              puVar28[4] = puVar50[-2];
              puVar28[5] = uVar15;
              puVar28[2] = uVar13;
              puVar28[3] = uVar14;
              *puVar28 = uVar11;
              puVar28[1] = uVar12;
              puVar50[-2] = uVar9;
              puVar50[-1] = uVar10;
              puVar50[-4] = uVar7;
              puVar50[-3] = uVar8;
              *puVar40 = uVar5;
              puVar50[-5] = uVar6;
            } while( true );
          }
          for (; puVar41 = puVar29, puVar34 = puVar29, puVar29 < puVar49; puVar49 = puVar49 + -6) {
            while (puVar40 = puVar41, puVar41 = puVar34 + 6, puVar41 <= puVar49) {
              piVar1 = (int *)((longlong)puVar34 + 0x5c);
              puVar34 = puVar41;
              if (*piVar1 <= *(int *)((longlong)puVar40 + 0x2c)) {
                puVar41 = puVar40;
              }
            }
            local_78 = (longlong *)*puVar40;
            uStack_70 = (undefined8 *)puVar40[1];
            local_68 = puVar40[2];
            uStack_60 = puVar40[3];
            local_58 = puVar40[4];
            uStack_50 = puVar40[5];
            uVar10 = local_78;
            uVar11 = uStack_70;
            uVar5 = *puVar49;
            uVar6 = puVar49[1];
            uVar7 = puVar49[2];
            uVar8 = puVar49[3];
            uVar9 = puVar49[5];
            puVar40[4] = puVar49[4];
            puVar40[5] = uVar9;
            puVar40[2] = uVar7;
            puVar40[3] = uVar8;
            *puVar40 = uVar5;
            puVar40[1] = uVar6;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            puVar49[4] = local_58;
            puVar49[5] = uStack_50;
            puVar49[2] = local_68;
            puVar49[3] = uStack_60;
            *(undefined4 *)puVar49 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar49 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar49 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar49 + 0xc) = uStack_70._4_4_;
            local_78 = (longlong *)uVar10;
            uStack_70 = (undefined8 *)uVar11;
          }
          goto LAB_140aea36c;
        }
LAB_140ae9fac:
        iVar32 = (int)uVar44;
        if (iVar32 != 0) {
          iVar43 = (iVar43 - (iVar43 + -1 >> 0x1f)) + -1 >> 1;
          iVar23 = iVar43;
joined_r0x000140ae9fcf:
          do {
            iVar27 = iVar43 * 2 + 1;
            if (iVar27 < iVar32) {
              iVar25 = iVar43 * 2 + 2;
              if ((iVar25 < iVar32) &&
                 (*(int *)((longlong)puVar29 + (longlong)iVar27 * 0x30 + 0x2c) <=
                  *(int *)((longlong)puVar29 + (longlong)iVar25 * 0x30 + 0x2c))) {
                iVar27 = iVar25;
              }
              if (*(int *)((longlong)puVar29 + (longlong)iVar43 * 0x30 + 0x2c) <
                  *(int *)((longlong)puVar29 + (longlong)iVar27 * 0x30 + 0x2c)) {
                puVar41 = puVar29 + (longlong)iVar43 * 6;
                puVar49 = puVar29 + (longlong)iVar27 * 6;
                local_78 = (longlong *)*puVar41;
                uStack_70 = (undefined8 *)puVar41[1];
                local_68 = puVar41[2];
                uStack_60 = puVar41[3];
                local_58 = puVar41[4];
                uStack_50 = puVar41[5];
                uVar10 = local_78;
                uVar11 = uStack_70;
                uVar5 = *puVar49;
                uVar6 = puVar49[1];
                uVar7 = puVar49[2];
                uVar8 = puVar49[3];
                uVar9 = puVar49[5];
                puVar41[4] = puVar49[4];
                puVar41[5] = uVar9;
                puVar41[2] = uVar7;
                puVar41[3] = uVar8;
                *puVar41 = uVar5;
                puVar41[1] = uVar6;
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                puVar49[4] = local_58;
                puVar49[5] = uStack_50;
                puVar49[2] = local_68;
                puVar49[3] = uStack_60;
                *(undefined4 *)puVar49 = (undefined4)local_78;
                *(undefined4 *)((longlong)puVar49 + 4) = local_78._4_4_;
                *(undefined4 *)(puVar49 + 1) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)puVar49 + 0xc) = uStack_70._4_4_;
                iVar43 = iVar27;
                local_78 = (longlong *)uVar10;
                uStack_70 = (undefined8 *)uVar11;
                goto joined_r0x000140ae9fcf;
              }
            }
            bVar55 = iVar23 != 0;
            iVar43 = iVar23 + -1;
            iVar23 = iVar43;
          } while (bVar55);
          if (1 < iVar32) {
            uVar44 = uVar44 - 1;
            local_78 = (longlong *)*puVar29;
            uStack_70 = (undefined8 *)puVar29[1];
            local_68 = puVar29[2];
            uStack_60 = puVar29[3];
            local_58 = puVar29[4];
            uStack_50 = puVar29[5];
            uVar10 = local_78;
            uVar11 = uStack_70;
            uVar5 = puVar29[uVar44 * 6];
            uVar6 = (puVar29 + uVar44 * 6)[1];
            uVar7 = puVar29[uVar44 * 6 + 2];
            uVar8 = (puVar29 + uVar44 * 6 + 2)[1];
            uVar9 = (puVar29 + uVar44 * 6 + 4)[1];
            puVar29[4] = puVar29[uVar44 * 6 + 4];
            puVar29[5] = uVar9;
            puVar29[2] = uVar7;
            puVar29[3] = uVar8;
            *puVar29 = uVar5;
            puVar29[1] = uVar6;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            puVar29[uVar44 * 6 + 4] = local_58;
            (puVar29 + uVar44 * 6 + 4)[1] = uStack_50;
            puVar29[uVar44 * 6 + 2] = local_68;
            (puVar29 + uVar44 * 6 + 2)[1] = uStack_60;
            puVar49 = puVar29 + uVar44 * 6;
            *(undefined4 *)puVar49 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar49 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar49 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar49 + 0xc) = uStack_70._4_4_;
            local_78 = (longlong *)uVar10;
            uStack_70 = (undefined8 *)uVar11;
            if (iVar32 != 2) {
              do {
                iVar32 = 0;
                iVar23 = 1;
                iVar43 = 0;
                do {
                  iVar32 = iVar32 + 2;
                  iVar27 = iVar23;
                  if (((longlong)iVar32 < (longlong)uVar44) &&
                     (*(int *)((longlong)puVar29 + (longlong)iVar23 * 0x30 + 0x2c) <=
                      *(int *)((longlong)puVar29 + (longlong)iVar32 * 0x30 + 0x2c))) {
                    iVar27 = iVar32;
                  }
                  if (*(int *)((longlong)puVar29 + (longlong)iVar27 * 0x30 + 0x2c) <=
                      *(int *)((longlong)puVar29 + (longlong)iVar43 * 0x30 + 0x2c)) break;
                  puVar41 = puVar29 + (longlong)iVar43 * 6;
                  puVar49 = puVar29 + (longlong)iVar27 * 6;
                  uVar5 = *puVar41;
                  uVar6 = puVar41[1];
                  uVar7 = puVar41[2];
                  uVar8 = puVar41[3];
                  uVar9 = puVar41[4];
                  uVar10 = puVar41[5];
                  uVar11 = *puVar49;
                  uVar12 = puVar49[1];
                  uVar13 = puVar49[2];
                  uVar14 = puVar49[3];
                  uVar15 = puVar49[5];
                  puVar41[4] = puVar49[4];
                  puVar41[5] = uVar15;
                  puVar41[2] = uVar13;
                  puVar41[3] = uVar14;
                  *puVar41 = uVar11;
                  puVar41[1] = uVar12;
                  puVar49[4] = uVar9;
                  puVar49[5] = uVar10;
                  puVar49[2] = uVar7;
                  puVar49[3] = uVar8;
                  *puVar49 = uVar5;
                  puVar49[1] = uVar6;
                  iVar32 = iVar27 * 2;
                  iVar23 = iVar27 * 2 + 1;
                  iVar43 = iVar27;
                } while ((longlong)iVar23 < (longlong)uVar44);
                uVar17 = uVar44 - 1;
                local_78 = (longlong *)*puVar29;
                uStack_70 = (undefined8 *)puVar29[1];
                local_68 = puVar29[2];
                uStack_60 = puVar29[3];
                local_58 = puVar29[4];
                uStack_50 = puVar29[5];
                uVar10 = local_78;
                uVar11 = uStack_70;
                uVar5 = puVar29[uVar17 * 6];
                uVar6 = (puVar29 + uVar17 * 6)[1];
                uVar7 = puVar29[uVar17 * 6 + 2];
                uVar8 = (puVar29 + uVar17 * 6 + 2)[1];
                uVar9 = (puVar29 + uVar17 * 6 + 4)[1];
                puVar29[4] = puVar29[uVar17 * 6 + 4];
                puVar29[5] = uVar9;
                puVar29[2] = uVar7;
                puVar29[3] = uVar8;
                *puVar29 = uVar5;
                puVar29[1] = uVar6;
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                puVar29[uVar17 * 6 + 4] = local_58;
                (puVar29 + uVar17 * 6 + 4)[1] = uStack_50;
                puVar29[uVar17 * 6 + 2] = local_68;
                (puVar29 + uVar17 * 6 + 2)[1] = uStack_60;
                puVar49 = puVar29 + uVar17 * 6;
                *(undefined4 *)puVar49 = (undefined4)local_78;
                *(undefined4 *)((longlong)puVar49 + 4) = local_78._4_4_;
                *(undefined4 *)(puVar49 + 1) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)puVar49 + 0xc) = uStack_70._4_4_;
                bVar55 = 2 < uVar44;
                uVar44 = uVar17;
                local_78 = (longlong *)uVar10;
                uStack_70 = (undefined8 *)uVar11;
              } while (bVar55);
            }
          }
        }
LAB_140aea36c:
        plVar21 = plVar21 + -3;
      } while (&local_378 <= plVar21);
    }
  }
LAB_140aea379:
  plVar21 = local_4a8;
  *(undefined4 *)(local_4a8 + 0x15) = 0;
  if (*(int *)((longlong)local_4a8 + 0xac) != 0) {
    FUN_147580a3e(local_4a8 + 0x14);
  }
  uStack_370 = &local_42c;
  local_42c = -1;
  local_368 = &local_42d;
  local_42d = 3;
  local_438 = &local_378;
  local_378 = plVar21;
  local_78 = plVar21;
  local_440 = plVar21;
  bVar30 = 0 < (int)uStack_410;
  bVar55 = 0 < (int)uStack_420;
  uStack_70 = local_438;
  if (bVar30 || bVar55) {
    plVar2 = plVar21 + 7;
    uVar17 = 0;
    uVar44 = 0;
    plVar42 = plVar21;
    do {
      plVar54 = local_4a0;
      plVar21 = local_4a8;
      iVar43 = (int)uVar17;
      iVar32 = (int)uVar44;
      if ((bVar30) && (bVar55)) {
        uVar47 = (ulonglong)iVar43;
        iVar23 = *(int *)(local_418 + 4 + uVar47 * 8);
        uVar38 = (ulonglong)iVar32;
        iVar27 = *(int *)(local_428 + 0x2c + uVar38 * 0x30);
        if (iVar27 < iVar23) {
          if (iVar32 < (int)uStack_420) {
            lVar18 = uVar38 * 0x30;
            do {
              if (*(int *)(local_428 + 0x2c + uVar38 * 0x30) != iVar27) break;
              lVar46 = uVar38 * 0x30 + local_428;
              uVar24 = *(int *)(lVar46 + 0x20) + 0x1f;
              uVar37 = uVar24 >> 5;
              if (0x1f < uVar24) {
                uVar44 = (ulonglong)uVar37;
                uVar47 = 0;
                do {
                  uVar37 = uVar37 ^ *(uint *)(local_428 + lVar18 + uVar47 * 4);
                  uVar47 = uVar47 + 1;
                } while (uVar44 != uVar47);
              }
              uVar24 = *(uint *)(lVar46 + 0x28);
              uVar37 = uVar24 >> 0xd ^ uVar37 - uVar24;
              uVar31 = uVar37 << 8 ^ (-0x61c88647 - uVar24) - uVar37;
              uVar24 = uVar31 >> 0xd ^ (uVar24 - uVar37) - uVar31;
              uVar37 = uVar24 >> 0xc ^ (uVar37 - uVar31) - uVar24;
              uVar51 = uVar37 << 0x10 ^ (uVar31 - uVar24) - uVar37;
              uVar24 = uVar51 >> 5 ^ (uVar24 - uVar37) - uVar51;
              uVar31 = uVar24 >> 3 ^ (uVar37 - uVar51) - uVar24;
              uVar37 = uVar31 << 10 ^ (uVar51 - uVar24) - uVar31;
              iVar32 = FUN_1400acb12(plVar54,uVar37 >> 0xf ^ uVar24 - (uVar31 + uVar37));
              if (iVar32 != -1) {
                lVar48 = (longlong)iVar32 * 0x88 + *plVar54;
                if (lVar48 + 0x30 != 0 && lVar48 != 0) {
                  if (*(int *)(lVar48 + 0x40) != 0) {
                    FUN_1432df06e(&local_440,lVar46,lVar48 + 0x30,1);
                  }
                  if (*(int *)(lVar48 + 0x68) != 0) {
                    FUN_1432df06e(&local_440,lVar46,lVar48 + 0x58,2);
                  }
                }
              }
              uVar38 = uVar38 + 1;
              lVar18 = lVar18 + 0x30;
            } while ((longlong)uVar38 < (longlong)(int)uStack_420);
            uVar44 = uVar38 & 0xffffffff;
            plVar21 = local_4a8;
          }
        }
        else if (iVar43 < (int)uStack_410) {
          do {
            if (*(int *)(local_418 + 4 + uVar47 * 8) != iVar23) break;
            if ((int)plVar21[1] != *(int *)((longlong)plVar21 + 0x34)) {
              uVar4 = *(ushort *)(local_418 + uVar47 * 8);
              plVar22 = (longlong *)plVar21[8];
              if ((longlong *)plVar21[8] == (longlong *)0x0) {
                plVar22 = plVar2;
              }
              iVar32 = *(int *)((longlong)plVar22 +
                               (ulonglong)((int)plVar21[9] - 1U & (uint)uVar4) * 4);
              if (iVar32 != -1) {
                do {
                  lVar18 = *plVar21 + (longlong)iVar32 * 0x60;
                  if (*(ushort *)(*plVar21 + (longlong)iVar32 * 0x60) == uVar4) {
                    if (lVar18 + 8 != 0 && lVar18 != 0) {
                      if (*(int *)(lVar18 + 0x18) != 0) {
                        FUN_1432dee24(&local_78,(uint)uVar4,lVar18 + 8,1);
                      }
                      if (*(int *)(lVar18 + 0x40) != 0) {
                        FUN_1432dee24(&local_78,uVar4,lVar18 + 0x30,2);
                      }
                    }
                    break;
                  }
                  iVar32 = *(int *)(lVar18 + 0x58);
                } while (iVar32 != -1);
              }
            }
            uVar47 = uVar47 + 1;
          } while ((longlong)uVar47 < (longlong)(int)uStack_410);
          uVar17 = uVar47 & 0xffffffff;
          plVar54 = local_4a0;
        }
      }
      else {
        plVar21 = plVar42;
        plVar54 = plVar22;
        if (bVar30) {
          if (iVar43 < (int)uStack_410) {
            uVar17 = (ulonglong)iVar43;
            do {
              if ((int)plVar42[1] != *(int *)((longlong)plVar42 + 0x34)) {
                uVar4 = *(ushort *)(local_418 + uVar17 * 8);
                plVar22 = (longlong *)plVar42[8];
                if ((longlong *)plVar42[8] == (longlong *)0x0) {
                  plVar22 = plVar2;
                }
                iVar32 = *(int *)((longlong)plVar22 +
                                 (ulonglong)((int)plVar42[9] - 1U & (uint)uVar4) * 4);
                if (iVar32 != -1) {
                  do {
                    lVar18 = *plVar42 + (longlong)iVar32 * 0x60;
                    if (*(ushort *)(*plVar42 + (longlong)iVar32 * 0x60) == uVar4) {
                      if (lVar18 + 8 != 0 && lVar18 != 0) {
                        if (*(int *)(lVar18 + 0x18) != 0) {
                          FUN_1432dee24(&local_78,(uint)uVar4,lVar18 + 8,1);
                        }
                        if (*(int *)(lVar18 + 0x40) != 0) {
                          FUN_1432dee24(&local_78,uVar4,lVar18 + 0x30,2);
                        }
                      }
                      break;
                    }
                    iVar32 = *(int *)(lVar18 + 0x58);
                  } while (iVar32 != -1);
                }
              }
              uVar17 = uVar17 + 1;
            } while ((longlong)uVar17 < (longlong)(int)uStack_410);
          }
        }
        else if (iVar32 < (int)uStack_420) {
          uVar44 = (ulonglong)iVar32;
          lVar18 = uVar44 * 0x30;
          do {
            lVar46 = uVar44 * 0x30;
            uVar24 = *(int *)(local_428 + 0x20 + lVar46) + 0x1f;
            uVar37 = uVar24 >> 5;
            if (0x1f < uVar24) {
              uVar38 = (ulonglong)uVar37;
              uVar47 = 0;
              do {
                uVar37 = uVar37 ^ *(uint *)(local_428 + lVar18 + uVar47 * 4);
                uVar47 = uVar47 + 1;
              } while (uVar38 != uVar47);
            }
            lVar48 = local_428 + lVar46;
            uVar24 = *(uint *)(local_428 + 0x28 + lVar46);
            uVar37 = uVar24 >> 0xd ^ uVar37 - uVar24;
            uVar31 = uVar37 << 8 ^ (-0x61c88647 - uVar24) - uVar37;
            uVar51 = uVar31 >> 0xd ^ (uVar24 - uVar37) - uVar31;
            uVar37 = uVar51 >> 0xc ^ (uVar37 - uVar31) - uVar51;
            uVar24 = uVar37 << 0x10 ^ (uVar31 - uVar51) - uVar37;
            uVar51 = uVar24 >> 5 ^ (uVar51 - uVar37) - uVar24;
            uVar31 = uVar51 >> 3 ^ (uVar37 - uVar24) - uVar51;
            uVar37 = uVar31 << 10 ^ (uVar24 - uVar51) - uVar31;
            iVar32 = FUN_1400acb12(plVar22,uVar37 >> 0xf ^ uVar51 - (uVar31 + uVar37),lVar48);
            if (iVar32 != -1) {
              lVar46 = (longlong)iVar32 * 0x88 + *plVar22;
              if (lVar46 + 0x30 != 0 && lVar46 != 0) {
                if (*(int *)(lVar46 + 0x40) != 0) {
                  FUN_1432df06e(&local_440,lVar48,lVar46 + 0x30,1);
                }
                if (*(int *)(lVar46 + 0x68) != 0) {
                  FUN_1432df06e(&local_440,lVar48,lVar46 + 0x58,2);
                }
              }
            }
            uVar44 = uVar44 + 1;
            lVar18 = lVar18 + 0x30;
            plVar21 = local_4a8;
          } while ((longlong)uVar44 < (longlong)(int)uStack_420);
        }
      }
      bVar55 = (int)uVar44 < (int)uStack_420;
      bVar30 = (int)uVar17 < (int)uStack_410;
      plVar42 = plVar21;
      plVar22 = plVar54;
    } while (((int)uVar17 < (int)uStack_410) || ((int)uVar44 < (int)uStack_420));
    if ((longlong)local_42c != -1) {
      *(short *)(plVar21[0x14] + (longlong)local_42c * 0x10) = (short)plVar21[0x15];
    }
  }
  *(undefined1 *)(plVar21 + 0x16) = 0;
  if (local_428 != 0) {
    FUN_1400020a8();
  }
  if (local_418 != 0) {
    FUN_1400020a8();
  }
  local_3c0 = 0;
  if (local_3c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145d0cd26(&local_408);
  if (local_390 != 0) {
    FUN_1400020a8();
  }
  if (local_3a0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140ae9635:
  uVar5 = *puVar40;
  *puVar40 = *puVar28;
  *puVar28 = uVar5;
  iVar32 = iVar32 + -1;
  puVar50 = puVar50 + -2;
  if ((longlong)puVar35 - (longlong)puVar34 < (longlong)puVar41 - (longlong)puVar45) {
    if (puVar29 < puVar49) {
      *plVar21 = (longlong)puVar29;
      plVar21[1] = (longlong)puVar49;
      *(int *)(plVar21 + 2) = iVar32;
      plVar21 = plVar21 + 3;
    }
    puVar29 = puVar40;
    puVar41 = puVar35;
    if (puVar28 <= puVar40 + 1) goto LAB_140ae984d;
  }
  else {
    if (puVar40 + 1 < puVar28) {
      *plVar21 = (longlong)puVar40;
      plVar21[1] = (longlong)puVar50;
      *(int *)(plVar21 + 2) = iVar32;
      plVar21 = plVar21 + 3;
    }
    puVar40 = puVar45;
    puVar50 = puVar49;
    puVar41 = puVar49;
    if (puVar49 <= puVar29) goto LAB_140ae984d;
  }
  iVar43 = (int)((ulonglong)((longlong)puVar41 - (longlong)puVar40) >> 3);
  uVar44 = (ulonglong)(iVar43 + 1);
  puVar34 = puVar40;
  puVar40 = puVar29;
  puVar49 = puVar50;
  if (iVar32 == 0) goto LAB_140ae96c8;
  goto LAB_140ae95b2;
LAB_140ae9eb9:
  local_78 = (longlong *)*puVar29;
  uStack_70 = (undefined8 *)puVar29[1];
  local_68 = puVar29[2];
  uStack_60 = puVar29[3];
  local_58 = puVar29[4];
  uStack_50 = puVar29[5];
  uVar10 = local_78;
  uVar11 = uStack_70;
  uVar5 = *puVar40;
  uVar6 = puVar50[-5];
  uVar7 = puVar50[-4];
  uVar8 = puVar50[-3];
  uVar9 = puVar50[-1];
  puVar29[4] = puVar50[-2];
  puVar29[5] = uVar9;
  puVar29[2] = uVar7;
  puVar29[3] = uVar8;
  *puVar29 = uVar5;
  puVar29[1] = uVar6;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar50[-2] = local_58;
  puVar50[-1] = uStack_50;
  puVar50[-4] = local_68;
  puVar50[-3] = uStack_60;
  *(undefined4 *)puVar40 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar50 + -0x2c) = local_78._4_4_;
  *(undefined4 *)(puVar50 + -5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar50 + -0x24) = uStack_70._4_4_;
  iVar32 = iVar32 + -1;
  puVar50 = puVar50 + -0xc;
  local_78 = (longlong *)uVar10;
  uStack_70 = (undefined8 *)uVar11;
  if ((longlong)puVar35 - (longlong)puVar41 < (longlong)puVar34 - (longlong)puVar45) {
    if (puVar28 < puVar49) {
      *plVar21 = (longlong)puVar28;
      plVar21[1] = (longlong)puVar49;
      *(int *)(plVar21 + 2) = iVar32;
      plVar21 = plVar21 + 3;
    }
    puVar45 = puVar29;
    if (puVar40 <= puVar29 + 6) goto LAB_140aea36c;
  }
  else {
    if (puVar29 + 6 < puVar40) {
      *plVar21 = (longlong)puVar29;
      plVar21[1] = (longlong)puVar50;
      *(int *)(plVar21 + 2) = iVar32;
      plVar21 = plVar21 + 3;
    }
    puVar29 = puVar28;
    puVar35 = puVar49;
    puVar50 = puVar49;
    if (puVar49 <= puVar28) goto LAB_140aea36c;
  }
  iVar43 = (int)((ulonglong)((longlong)puVar35 - (longlong)puVar45) >> 4) * -0x55555555;
  uVar44 = (ulonglong)(iVar43 + 1);
  puVar41 = puVar45;
  puVar49 = puVar50;
  puVar34 = puVar35;
  if (iVar32 == 0) goto LAB_140ae9fac;
  goto LAB_140ae9d83;
}



// FUNCTION 140aeaa36 FUN_140aeaa36 body=254 status=ok
// SIG undefined FUN_140aeaa36(void)

undefined8 FUN_140aeaa36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      lVar1 = param_2 + 0x18 + lVar4;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_3 + lVar4 + 0x10);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar4 + 8);
      FUN_1404306dc();
      FUN_1408cbbee(param_2 + lVar4 + 0x28,param_3 + lVar4 + 0x28);
      FUN_140472cde(param_2 + lVar4 + 0x38,param_3 + lVar4 + 0x38);
      *(undefined4 *)(param_2 + lVar4 + 0x48) = *(undefined4 *)(param_3 + lVar4 + 0x48);
      if (param_2 != param_3) {
        FUN_1408f487b(*(undefined8 *)(param_2 + 0x50 + lVar4),
                      *(undefined4 *)(param_2 + 0x58 + lVar4));
        iVar2 = *(int *)(param_3 + 0x58 + lVar4);
        uVar3 = *(undefined8 *)(param_3 + 0x50 + lVar4);
        *(int *)(param_2 + 0x58 + lVar4) = iVar2;
        if (iVar2 == 0 && *(int *)(param_2 + 0x5c + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0x5c + lVar4) = 0;
        }
        else {
          puVar5 = (undefined8 *)(param_2 + lVar4 + 0x50);
          FUN_140aeab34(puVar5,iVar2);
          FUN_140aeac19(*puVar5,uVar3,iVar2);
        }
      }
      *(undefined8 *)(param_2 + 0x60 + lVar4) = *(undefined8 *)(param_3 + 0x60 + lVar4);
      lVar4 = lVar4 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140aeab34 FUN_140aeab34 body=229 status=ok
// SIG undefined FUN_140aeab34(void)

void FUN_140aeab34(longlong param_1,int param_2,int param_3)

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



// FUNCTION 140aeac19 FUN_140aeac19 body=252 status=ok
// SIG undefined FUN_140aeac19(void)

void FUN_140aeac19(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    do {
      puVar3[-10] = *param_2;
      puVar3[-8] = 0;
      puVar3[-7] = 0;
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      FUN_140c19bee(puVar3 + -9,param_2 + 1);
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 0xb);
      uVar2 = param_2[10];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_140aead42(puVar3,iVar1,0);
        FUN_140aead15(*puVar3,uVar2);
      }
      puVar3[2] = 0;
      iVar1 = *(int *)(param_2 + 0xd);
      _Src = (void *)param_2[0xc];
      *(int *)(puVar3 + 3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
      }
      else {
        FUN_144801f7c(puVar3 + 2,iVar1,0);
        memcpy((void *)puVar3[2],_Src,(longlong)iVar1 << 3);
      }
      puVar3 = puVar3 + 0xe;
      param_2 = param_2 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140aead15 FUN_140aead15 body=44 status=ok
// SIG undefined FUN_140aead15(void)

void FUN_140aead15(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140aead42 FUN_140aead42 body=334 status=ok
// SIG undefined FUN_140aead42(void)

void FUN_140aead42(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aeadb4;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140aeadb4:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140aeae90 FUN_140aeae90 body=245 status=ok
// SIG undefined FUN_140aeae90(void)

undefined8 *
FUN_140aeae90(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  *_Dst = &PTR_FUN_14b520c60;
  FUN_140aeaf86(_Dst + 4);
  _Dst[3] = 0;
  *_Dst = &PTR_FUN_14b9dd800;
  _Dst[0x25] = 0;
  *(undefined4 *)((longlong)_Dst + 0x12f) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(_Dst + 0x27) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)_Dst + 0x13c) = uVar1;
  *(undefined4 *)(_Dst + 0x28) = uVar2;
  *(undefined4 *)((longlong)_Dst + 0x144) = uVar3;
  _Dst[0x29] = DAT_14c8464f0;
  *(undefined4 *)(_Dst + 0x2a) = 0xbf800000;
  FUN_140aeb046(param_1,_Dst,param_3,param_4,param_5,param_6,param_7);
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 140aeaf86 FUN_140aeaf86 body=192 status=ok
// SIG undefined FUN_140aeaf86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aeaf86(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  param_1[6] = 0xffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14b517f30;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0x800000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0x400000000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x61) = 1;
  *(undefined1 *)((longlong)param_1 + 99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = 0x1000000;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  uVar1 = uRam000000014cad0ee8;
  *(undefined8 *)(param_1 + 0x38) = _DAT_14cad0ee0;
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  uVar1 = _DAT_14cad0ed8;
  *(undefined8 *)(param_1 + 0x34) = _DAT_14cad0ed0;
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  return;
}



// FUNCTION 140aeb046 FUN_140aeb046 body=707 status=ok
// SIG undefined FUN_140aeb046(void)

void FUN_140aeb046(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(longlong *)(param_1 + 0x330) = param_2;
  *(longlong *)(param_2 + 0x10) = param_1;
  cVar3 = *(char *)(param_2 + 8);
  *(char *)(param_1 + 0x328) = cVar3;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (param_4 != 0) {
    plVar1 = (longlong *)(param_1 + 0x350);
    uVar7 = *(uint *)(param_1 + 0x358);
    if (0 < (int)uVar7) {
      uVar9 = 0;
LAB_140aeb0d5:
      if (*(int *)(*plVar1 + 4 + uVar9 * 8) != *(int *)(param_4 + 0x18)) goto code_r0x000140aeb0dc;
      lVar8 = (longlong)*(int *)(*plVar1 + uVar9 * 8);
      lVar5 = *(longlong *)(*(longlong *)(param_4 + 8) + lVar8 * 8);
      if ((((lVar5 != 0) && (*(char *)(lVar5 + 9) == '\x01')) && (*(char *)(lVar5 + 8) == cVar3)) &&
         (((*(longlong *)(param_1 + 0x338) = lVar5, param_5 != 0 &&
           (*(int *)(param_5 + 0x18) == *(int *)(param_4 + 0x18))) &&
          ((lVar5 = *(longlong *)(*(longlong *)(param_5 + 8) + lVar8 * 8), lVar5 != 0 &&
           ((*(char *)(lVar5 + 9) == '\x01' && (*(char *)(lVar5 + 8) == cVar3)))))))) {
        *(longlong *)(param_1 + 0x340) = lVar5;
        *(undefined4 *)(param_1 + 0x348) = param_6;
      }
      local_78 = 0;
      uStack_70 = 0;
      if ((int)uVar9 < (int)uVar7) {
        do {
          uVar6 = uStack_70;
          lVar5 = *plVar1;
          lVar8 = (longlong)(int)uStack_70;
          uVar7 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
          if (uStack_70._4_4_ < uVar7) {
            FUN_140aeb312(&local_78,uVar6 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar8 * 8) = *(undefined8 *)(lVar5 + uVar9 * 8);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(param_1 + 0x358));
      }
      if (plVar1 == &local_78) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x350) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x350) = local_78;
        local_78 = 0;
        *(int *)(param_1 + 0x358) = (int)uStack_70;
        *(uint *)(param_1 + 0x35c) = uStack_70._4_4_;
      }
    }
LAB_140aeb1b2:
    if (((param_5 != 0) && (*(int *)(param_5 + 0x18) != *(int *)(param_4 + 0x18))) &&
       (0 < (int)*(uint *)(param_1 + 0x358))) {
      uVar9 = 0;
      do {
        if (*(int *)(*plVar1 + 4 + uVar9 * 8) == *(int *)(param_5 + 0x18)) {
          lVar5 = *(longlong *)
                   (*(longlong *)(param_5 + 8) + (longlong)*(int *)(*plVar1 + uVar9 * 8) * 8);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 9) == '\x01')) &&
             (*(char *)(lVar5 + 8) == *(char *)(param_1 + 0x328))) {
            *(longlong *)(param_1 + 0x340) = lVar5;
            *(undefined4 *)(param_1 + 0x348) = param_6;
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while (*(uint *)(param_1 + 0x358) != uVar9);
    }
  }
  iVar4 = *(int *)(param_1 + 0x358);
  *(uint *)(param_1 + 0x358) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x35c) < iVar4 + 1U) {
    FUN_140aeb312((longlong *)(param_1 + 0x350),iVar4);
  }
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x350) + (longlong)iVar4 * 8);
  FUN_140aeb30a(puVar2);
  puVar2[1] = param_7;
  *puVar2 = param_3;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140aeb0dc:
  uVar9 = uVar9 + 1;
  if (uVar7 == uVar9) goto LAB_140aeb1b2;
  goto LAB_140aeb0d5;
}



// FUNCTION 140aeb30a FUN_140aeb30a body=8 status=ok
// SIG undefined FUN_140aeb30a(void)

void FUN_140aeb30a(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}



// FUNCTION 140aeb312 FUN_140aeb312 body=353 status=ok
// SIG undefined FUN_140aeb312(void)

void FUN_140aeb312(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aeb397;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140aeb397:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140aeb482 FUN_140aeb482 body=36 status=ok
// SIG undefined FUN_140aeb482(void)

undefined8 FUN_140aeb482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140aeb4a6 FUN_140aeb4a6 body=104 status=ok
// SIG undefined FUN_140aeb4a6(void)

void FUN_140aeb4a6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
    iVar1 = DAT_14cb25e80;
    lVar2 = (longlong)(int)DAT_14cb25e80;
    DAT_14cb25e80 = DAT_14cb25e80 + 1;
    if (DAT_14cb25e84 < DAT_14cb25e80) {
      FUN_140aeb50e(&DAT_14cb25e78,iVar1);
    }
    *(longlong *)(DAT_14cb25e78 + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000140aeb4ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
    return;
  }
  return;
}



// FUNCTION 140aeb50e FUN_140aeb50e body=353 status=ok
// SIG undefined FUN_140aeb50e(void)

void FUN_140aeb50e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aeb593;
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
LAB_140aeb593:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140aeb678 FUN_140aeb678 body=120 status=ok
// SIG undefined FUN_140aeb678(void)

undefined8 FUN_140aeb678(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cb820f0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb820f0 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aeb700 FUN_140aeb700 body=45 status=ok
// SIG undefined FUN_140aeb700(void)

undefined8 FUN_140aeb700(undefined8 param_1,int param_2)

{
  FUN_140aeb72e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 140aeb72e FUN_140aeb72e body=164 status=ok
// SIG undefined FUN_140aeb72e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aeb72e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b5f69f0;
  lVar2 = 0x150;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x38;
  } while (lVar2 != 0);
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
                    /* WARNING: Could not recover jumptable at 0x000140aeb7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140aeb7d2 FUN_140aeb7d2 body=199 status=ok
// SIG undefined FUN_140aeb7d2(void)

undefined4 *
FUN_140aeb7d2(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_6;
  local_78 = param_5;
  FUN_140aeb89a();
  cVar1 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
  if (cVar1 != '\0') {
    local_68 = param_6;
    local_70 = param_5;
    local_78 = CONCAT44(local_78._4_4_,param_4);
    (**(code **)(*param_1 + 0x8e8))(param_1,&local_58,param_2,param_3);
    *(undefined8 *)(param_2 + 4) = local_48;
    *param_2 = local_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
    param_2[3] = uStack_4c;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aeb89a FUN_140aeb89a body=343 status=ok
// SIG undefined FUN_140aeb89a(void)

double * FUN_140aeb89a(longlong *param_1,double *param_2,double *param_3,float param_4,
                      double *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x2e) & 0x10) == 0) {
    dVar4 = *param_3;
    uVar1 = SUB84(dVar4,0);
    uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = param_3[1];
    local_68 = *param_5;
    local_60 = param_5[1];
    dVar6 = dVar4 * local_68 + dVar3 * local_60;
    dVar4 = param_3[2];
    uVar7 = SUB84(param_5[2],0);
    uVar8 = (undefined4)((ulonglong)param_5[2] >> 0x20);
  }
  else {
    local_88 = *(undefined4 *)param_5;
    uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_80 = *(undefined4 *)(param_5 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_78 = param_5[2];
    (**(code **)(*param_1 + 0x560))(local_88,&local_68);
    dVar4 = *param_3;
    uVar1 = SUB84(dVar4,0);
    uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = param_3[1];
    dVar6 = dVar4 * local_68 + dVar3 * local_60;
    dVar4 = param_3[2];
    uVar7 = (undefined4)local_58;
    uVar8 = (undefined4)((ulonglong)local_58 >> 0x20);
  }
  dVar6 = dVar4 * (double)CONCAT44(uVar8,uVar7) + dVar6;
  dVar5 = (double)param_4;
  *param_2 = ((double)CONCAT44(uVar2,uVar1) - dVar6 * local_68) * dVar5;
  param_2[1] = (dVar3 - local_60 * dVar6) * dVar5;
  param_2[2] = (dVar4 - (double)CONCAT44(uVar8,uVar7) * dVar6) * dVar5;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aeb9f2 FUN_140aeb9f2 body=914 status=ok
// SIG undefined FUN_140aeb9f2(void)

double * FUN_140aeb9f2(longlong param_1,double *param_2,double *param_3,double *param_4,
                      float param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 local_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_2[2] = param_3[2];
  dVar8 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar8;
  dVar8 = *(double *)(param_1 + 0x230);
  dVar1 = *(double *)(param_1 + 0x238);
  dVar2 = *(double *)(param_1 + 0x240);
  fVar9 = (float)((*param_2 * -dVar8 - param_2[1] * dVar1) - param_2[2] * dVar2);
  if ((0.0 < fVar9) &&
     (fVar10 = (float)((double)param_5 *
                      (-dVar2 * param_4[2] + -dVar8 * *param_4 + -dVar1 * param_4[1])),
     0.0001 < fVar9 - fVar10)) {
    if (0.0 < fVar10) {
      dVar3 = (double)(fVar10 / fVar9);
      dVar4 = *param_2 * dVar3;
      *param_2 = dVar4;
      dVar5 = param_2[1] * dVar3;
      param_2[1] = dVar5;
      dVar3 = param_2[2] * dVar3;
      param_2[2] = dVar3;
    }
    else {
      param_2[2] = DAT_14c8464f0;
      dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *param_2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      param_2[1] = dVar3;
      dVar3 = param_2[2];
      dVar4 = *param_2;
      dVar5 = param_2[1];
    }
    dVar6 = (param_3[2] - dVar3) * dVar2 + (*param_3 - dVar4) * dVar8 + dVar1 * (param_3[1] - dVar5)
    ;
    local_88 = (param_3[2] - dVar3) - dVar2 * dVar6;
    local_90 = (param_3[1] - dVar5) - dVar1 * dVar6;
    local_98 = (*param_3 - dVar4) - dVar6 * dVar8;
    dVar6 = param_6[2] * dVar2 + *param_6 * dVar8 + dVar1 * param_6[1];
    local_a8 = param_6[2] - dVar2 * dVar6;
    uStack_b0 = param_6[1] - dVar1 * dVar6;
    local_b8 = *param_6 - dVar6 * dVar8;
    dVar8 = local_a8 * local_a8 + local_b8 * local_b8 + uStack_b0 * uStack_b0;
    uVar7 = SUB84(dVar8,0);
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      if (9.99999993922529e-09 <= dVar8) {
        uVar7 = SUB84(SQRT(dVar8),0);
        dVar8 = 1.0 / SQRT(dVar8);
        local_a8 = local_a8 * dVar8;
        uStack_b0 = uStack_b0 * dVar8;
        local_b8 = local_b8 * dVar8;
      }
      else {
        local_a8 = DAT_14c8464f0;
        local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        uVar7 = (undefined4)DAT_14c8464e0;
      }
    }
    local_e0 = param_7;
    local_e8 = &local_b8;
    FUN_140aeb89a(uVar7,&local_d0,&local_98,0x3f800000);
    *param_2 = dVar4 + local_d0;
    param_2[1] = dVar5 + local_c8;
    param_2[2] = dVar3 + local_c0;
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140aebdb2 FUN_140aebdb2 body=231 status=ok
// SIG undefined FUN_140aebdb2(void)

void FUN_140aebdb2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140850e3c();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    local_50 = DAT_14cbc28a0;
    local_58 = DAT_14cbc2898;
    FUN_1448075d0(local_48);
    puVar1 = (undefined8 *)FUN_144a06846(param_3,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar1 != (byte *)0x0) && ((*(byte *)*puVar1 & 3) != 0)) {
      uVar2 = FUN_140dddafc(param_3);
      local_50 = DAT_14cbc28a0;
      local_58 = DAT_14cbc2898;
      FUN_1448075d0(local_48);
      FUN_14045886c(uVar2,local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aebe9a FUN_140aebe9a body=122 status=ok
// SIG undefined FUN_140aebe9a(void)

void FUN_140aebe9a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aebf1c FUN_140aebf1c body=122 status=ok
// SIG undefined FUN_140aebf1c(void)

void FUN_140aebf1c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aebf9e FUN_140aebf9e body=123 status=ok
// SIG undefined FUN_140aebf9e(void)

longlong * FUN_140aebf9e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar4 < 1) {
    FUN_140d7698c(param_1,1);
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar4 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar1 * 0x30;
  uVar3 = *param_3;
  *(undefined1 *)(lVar2 + 0x20 + lVar5) = 0;
  FUN_140aec01a(lVar2 + lVar5,uVar3);
  *(undefined8 *)(lVar2 + 0x28 + lVar5) = *param_2;
  return param_1;
}



// FUNCTION 140aec01a FUN_140aec01a body=116 status=ok
// SIG undefined FUN_140aec01a(void)

undefined8 * FUN_140aec01a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_1400021e4(&local_20,&local_30);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 4)])(param_1);
  *param_1 = local_30;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  *(undefined1 *)(param_1 + 4) = 4;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aec0a6 FUN_140aec0a6 body=235 status=ok
// SIG undefined FUN_140aec0a6(void)

void FUN_140aec0a6(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x27f] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1,&local_30);
    FUN_140aec192(param_1,*(undefined8 *)(param_1[0x27f] + 0x3a0),
                  (float)SQRT(local_20 * local_20 + local_30 * local_30 + local_28 * local_28));
  }
  if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 != 3) {
    uVar2 = FUN_14477b072(param_1,DAT_14cb5b2f8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aec192 FUN_140aec192 body=373 status=ok
// SIG undefined FUN_140aec192(void)

void FUN_140aec192(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x35d0) != 0) {
    FUN_140aec308(*(longlong *)(param_1 + 0x35d0),&local_50);
    lVar4 = local_50;
    if ((longlong)local_48 != 0) {
      local_88 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_7c = 1;
      local_74 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 1;
      local_90 = param_2;
      local_78 = param_3;
      if ((*(longlong *)(param_1 + 0x13f8) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x13f8) + 0x380) != '\x01')) {
        if (local_48 < 1) {
          lVar4 = 0;
        }
        else {
          uVar2 = rand();
          iVar3 = (int)((float)local_48 * ((float)(uVar2 & 0x7fff) / 32767.0));
          iVar5 = local_48 + -1;
          if (iVar3 < local_48 + -1) {
            iVar5 = iVar3;
          }
          lVar4 = (longlong)iVar5;
        }
        uVar1 = *(undefined8 *)(local_50 + lVar4 * 8);
        uStack_84 = (undefined4)uVar1;
        local_80 = (undefined4)((ulonglong)uVar1 >> 0x20);
        FUN_140e8651e(*(undefined8 *)(param_1 + 0x35d0));
      }
      else {
        lVar6 = 0;
        do {
          uStack_84 = (undefined4)*(undefined8 *)(lVar4 + lVar6);
          local_80 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + lVar6) >> 0x20);
          FUN_140e8651e(*(undefined8 *)(param_1 + 0x35d0),&local_90);
          lVar6 = lVar6 + 8;
        } while ((longlong)local_48 * 8 != lVar6);
      }
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aec308 FUN_140aec308 body=106 status=ok
// SIG undefined FUN_140aec308(void)

longlong * FUN_140aec308(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x380);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x378);
    lVar4 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x70;
    } while ((longlong)iVar1 * 0x70 - lVar4 != 0);
  }
  return param_2;
}



// FUNCTION 140aec372 FUN_140aec372 body=135 status=ok
// SIG undefined FUN_140aec372(void)

void FUN_140aec372(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_140aec3fa(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a494940;
  puVar1[0x41] = &PTR_LAB_14a494cb0;
  local_28 = 0x7b5ae74c;
  uStack_24 = 0xd2704c10;
  uStack_20 = 0xa9585798;
  uStack_1c = 0xb212a5a;
  iVar2 = FUN_1448a256a(puVar1);
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(char *)((longlong)puVar1 + 0x59) = '\x02' - (iVar2 < 6);
  *(undefined2 *)(puVar1 + 0x2d) = 0x101;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aec3fa FUN_140aec3fa body=207 status=ok
// SIG undefined FUN_140aec3fa(void)

longlong * FUN_140aec3fa(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406ed334();
  *param_1 = (longlong)&PTR_FUN_14a493f70;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_140aec500(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  local_30 = 2;
  local_28 = 2;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  local_48 = 0xd2704c107b5ae74c;
  uStack_40 = 0xb212a5aa9585798;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_58 = 0xd2704c107b5ae74c;
    uStack_50 = 0xb212a5aa9585798;
    iVar2 = FUN_1448a256a(param_1);
    cVar1 = '\x02' - (iVar2 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar1;
  FUN_140aec5ac(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aec4ca FUN_140aec4ca body=54 status=ok
// SIG undefined FUN_140aec4ca(void)

void FUN_140aec4ca(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (((*(uint *)(param_1 + 8) >> 9 & 1) != 0) || (cVar2 = FUN_145c40fca(param_1,1), cVar2 != '\0'))
  {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x98) = *param_2;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
  }
  return;
}



// FUNCTION 140aec500 FUN_140aec500 body=172 status=ok
// SIG undefined FUN_140aec500(void)

void FUN_140aec500(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a46e9c0;
  *(undefined2 *)(param_1 + 10) = 0x404;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 140aec5ac FUN_140aec5ac body=330 status=ok
// SIG undefined FUN_140aec5ac(void)

void FUN_140aec5ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_140aec798(plVar1,param_1 + 0x100);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_140aec64d;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_140aec69c:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140aec64d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_30 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_140aec64d;
      goto LAB_140aec69c;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140aec64d;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140aec64d:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aec6f8 FUN_140aec6f8 body=159 status=ok
// SIG undefined FUN_140aec6f8(void)

void FUN_140aec6f8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_140aec735;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_140aec735;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140aec735:
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
                    /* WARNING: Could not recover jumptable at 0x000140aec793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140aec798 FUN_140aec798 body=197 status=ok
// SIG undefined FUN_140aec798(void)

undefined8 * FUN_140aec798(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_140aec85e();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 140aec85e FUN_140aec85e body=57 status=ok
// SIG undefined FUN_140aec85e(void)

void FUN_140aec85e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2290 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2290 = FUN_140002ddd(FUN_14633b03e,uVar1,L"MovieSceneBoolChannel");
  }
  return;
}



// FUNCTION 140aec898 FUN_140aec898 body=356 status=ok
// SIG undefined FUN_140aec898(void)

void FUN_140aec898(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aec91d;
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
LAB_140aec91d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140aec9fd FUN_140aec9fd body=49 status=ok
// SIG undefined FUN_140aec9fd(void)

longlong FUN_140aec9fd(void)

{
  if (DAT_14cb35bc0 == 0) {
    FUN_140f50038(&DAT_14cb35bc0,&PTR_s__Script_Niagara_14ad51820);
  }
  return DAT_14cb35bc0;
}



// FUNCTION 140aeca34 FUN_140aeca34 body=57 status=ok
// SIG undefined FUN_140aeca34(void)

void FUN_140aeca34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad98 = FUN_140002ddd(FUN_1464ccf33,uVar1,L"GbxBrainAspectSettings_RetraceSteps");
  }
  return;
}



// FUNCTION 140aeca6d FUN_140aeca6d body=312 status=ok
// SIG undefined FUN_140aeca6d(void)

void FUN_140aeca6d(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4dfea0;
  puVar1[0x25] = &PTR_FUN_14a4e01f0;
  puVar1[0x26] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab6340) {
    FUN_144b3d300(&DAT_14cab6340);
    if (DAT_14cab6340 == -1) {
      FUN_1446ddc76(&DAT_14cab6338,"Transform",1);
      _Init_thread_footer(&DAT_14cab6340);
    }
  }
  FUN_1400021e4(&DAT_14cab6338,local_48);
  FUN_140aecba6(&local_34,DAT_14cab6338,local_48);
  *(undefined4 *)(puVar1 + 0x22) = local_24;
  *(undefined4 *)(puVar1 + 0x20) = local_34;
  *(undefined4 *)((longlong)puVar1 + 0x104) = uStack_30;
  *(undefined4 *)(puVar1 + 0x21) = uStack_2c;
  *(undefined4 *)((longlong)puVar1 + 0x10c) = uStack_28;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(puVar1 + 0xd) = 0x1f;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aecba6 FUN_140aecba6 body=211 status=ok
// SIG undefined FUN_140aecba6(void)

undefined8 * FUN_140aecba6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  bool bVar3;
  
  *param_1 = param_2;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(param_1 + 1,puVar2,1);
  iVar1 = FUN_1447ee042(param_3,&DAT_149e065c6,1,1,0,0xffffffff);
  if (iVar1 == -1) {
    iVar1 = FUN_1447ee042(param_3,&DAT_149e01f64,1,1,0,0xffffffff);
    if (iVar1 == -1) {
      iVar1 = FUN_1447ee042(param_3,&DAT_149e2b508,1,1,0,0xffffffff);
      bVar3 = iVar1 == -1;
      goto LAB_140aecc68;
    }
  }
  bVar3 = false;
LAB_140aecc68:
  *(bool *)(param_1 + 2) = bVar3;
  return param_1;
}



// FUNCTION 140aecc84 FUN_140aecc84 body=416 status=ok
// SIG undefined FUN_140aecc84(void)

undefined8 * FUN_140aecc84(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14061ea1a();
  *param_1 = &PTR_FUN_14a5d5c50;
  param_1[5] = &PTR_FUN_14a5d5f30;
  param_1[6] = &PTR_FUN_14a5d5f70;
  param_1[7] = &PTR_FUN_14a5d5fa0;
  param_1[0x11] = &PTR_FUN_14a5d5fd0;
  lVar1 = 0xa0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1 + -0xc) = 0x3f80000000000000;
    *(undefined4 *)((longlong)param_1 + lVar1 + -4) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1) = 5;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xd0);
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x101000100000000;
  *(undefined2 *)((longlong)param_1 + 0xd1) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xd3) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar2 = param_1 + 0x2a;
  lVar1 = 0x60;
  do {
    FUN_140056680(puVar2,&DAT_149e01fe8);
    puVar2[2] = 0x42c8000000000000;
    *(undefined4 *)(puVar2 + 3) = 4;
    *(undefined2 *)((longlong)puVar2 + 0x1c) = 0;
    puVar2 = puVar2 + 4;
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  local_48 = &local_38;
  local_38 = 0x100000000;
  local_40 = &local_30;
  FUN_140aece26(param_1 + 0x37);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aece26 FUN_140aece26 body=109 status=ok
// SIG undefined FUN_140aece26(void)

undefined8 * FUN_140aece26(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 2;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 140aece94 FUN_140aece94 body=153 status=ok
// SIG undefined FUN_140aece94(void)

undefined8 FUN_140aece94(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if (cVar1 == '\0') {
    uVar3 = 0;
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    iVar2 = FUN_14487fd02(param_1);
    cVar1 = (**(code **)(*param_2 + 0x2b8))(param_2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_2 + 0x2c0))(param_2);
      if (cVar1 == '\0') {
        if (iVar2 != 3) {
          return 1;
        }
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        uVar3 = 3;
        goto LAB_140aecefb;
      }
      if (iVar2 != 3) {
        return 1;
      }
      uVar3 = 2;
    }
    else {
      if (iVar2 == 0) {
        return 1;
      }
      if (iVar2 == 3) {
        return 1;
      }
      uVar3 = 1;
    }
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
  }
LAB_140aecefb:
  *param_3 = uVar3;
  return 0;
}



// FUNCTION 140aecf2e FUN_140aecf2e body=43 status=ok
// SIG undefined FUN_140aecf2e(void)

bool FUN_140aecf2e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (cVar2 = FUN_140aecf5a(lVar1), cVar2 == '\0')) {
    return *(char *)(lVar1 + 0x30) == '\0';
  }
  return false;
}



// FUNCTION 140aecf5a FUN_140aecf5a body=305 status=ok
// SIG undefined FUN_140aecf5a(void)

undefined8 FUN_140aecf5a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  lVar1 = FUN_140aed08c();
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
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (lVar4 = lVar2,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         != lVar1 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0));
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aed08c FUN_140aed08c body=221 status=ok
// SIG undefined FUN_140aed08c(void)

longlong FUN_140aed08c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb10f78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db4501;
    local_40 = FUN_14640f9e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"DataLayerInstance",&DAT_14cb10f78,FUN_14640f9be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10f78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aed16a FUN_140aed16a body=49 status=ok
// SIG undefined FUN_140aed16a(void)

bool FUN_140aed16a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (((lVar1 != 0) && (cVar2 = FUN_140aecf5a(lVar1), cVar2 == '\0')) &&
     (*(char *)(lVar1 + 0x30) == '\0')) {
    return *(char *)(lVar1 + 0x38) == '\x01';
  }
  return false;
}



// FUNCTION 140aed19c FUN_140aed19c body=49 status=ok
// SIG undefined FUN_140aed19c(void)

bool FUN_140aed19c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (((lVar1 != 0) && (cVar2 = FUN_140aecf5a(lVar1), cVar2 == '\0')) &&
     (*(char *)(lVar1 + 0x30) == '\0')) {
    return *(char *)(lVar1 + 0x38) == '\x02';
  }
  return false;
}



// FUNCTION 140aed1ce FUN_140aed1ce body=91 status=ok
// SIG undefined FUN_140aed1ce(void)

undefined8 * FUN_140aed1ce(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_140aed286(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_140aed286();
  }
  FUN_140aed22a(param_1,param_2);
  *param_1 = &PTR_FUN_14b95e170;
  return param_1;
}



// FUNCTION 140aed22a FUN_140aed22a body=91 status=ok
// SIG undefined FUN_140aed22a(void)

undefined8 * FUN_140aed22a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140aed36c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_140aed25c;
  }
  param_2 = FUN_140aed36c();
LAB_140aed25c:
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b3e86d0;
  return param_1;
}



// FUNCTION 140aed286 FUN_140aed286 body=228 status=ok
// SIG undefined FUN_140aed286(void)

longlong FUN_140aed286(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbab850 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b5876;
    local_38 = &LAB_148c2310d;
    local_40 = &LAB_14064ff9d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2600;
    FUN_14081cfa3(L"/Script/OakGame",L"OakInteractiveObject",&DAT_14cbab850,FUN_1465dde8c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbab850;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aed36c FUN_140aed36c body=228 status=ok
// SIG undefined FUN_140aed36c(void)

longlong FUN_140aed36c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb69ab0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148755d96;
    local_40 = &LAB_1465227c8;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x1a58;
    FUN_14081cfa3(L"/Script/GbxGame",L"InteractiveObject",&DAT_14cb69ab0,FUN_1465227a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69ab0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aed452 FUN_140aed452 body=782 status=ok
// SIG undefined FUN_140aed452(void)

undefined8 * FUN_140aed452(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14a1b6c40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = (code *)(local_48 + 2);
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_1 + 0xd,&local_50);
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b023a30;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1e) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  param_1[0x20] = DAT_14c8464f0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x1000000000;
  if (param_2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1478c0a72;
      local_80 = &LAB_1417b2375;
      local_88 = L"Engine";
      local_90 = 0x1000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x390;
      local_70 = &local_50;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_140aed726;
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(param_2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
        == DAT_14cac9ca8 + 0x30)) goto LAB_140aed5ee;
  }
LAB_140aed726:
  param_2 = FUN_144a6c4d8();
LAB_140aed5ee:
  param_1[0x33] = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aed762 FUN_140aed762 body=409 status=ok
// SIG undefined FUN_140aed762(void)

void FUN_140aed762(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140aed936();
  lVar4 = *(longlong *)(param_1 + 0xbf8);
  if (*(char *)(lVar4 + 0x88) != '\0') goto LAB_140aed797;
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd8))(param_1 + 0x178);
  if ((cVar1 == '\0') || (*(int *)(lVar4 + 0xb0) == 0)) goto LAB_140aed797;
  local_88 = *(undefined8 *)(lVar4 + 0xb0);
  local_80 = *(undefined4 *)(lVar4 + 0xb8);
  FUN_1448075d0(local_58);
  if (DAT_14cb75d20 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144815d88(DAT_14cb75d20,local_58);
  }
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_140aed8fc();
  lVar4 = FUN_14477b664(uVar3);
  lVar5 = FUN_140aed8fc();
  uVar3 = FUN_140aed8fc();
  FUN_1402d1bfa(&local_60,uVar3,uVar2);
  if (local_60 != 0) {
    uStack_68 = 0;
  }
  local_78 = local_60;
  lVar6 = FUN_140aed8fc();
  if (lVar5 == 0) {
LAB_140aed895:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_140aed895;
  if (lVar4 != lVar6) {
    uStack_68 = 0;
  }
  uVar3 = FUN_14477b664(lVar6);
  local_70 = FUN_14477b664(uVar3);
  if ((local_60 != 0) && (local_70 != 0)) {
    uStack_68 = uVar2;
  }
  FUN_140c080d8(param_1,&local_78);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_140aed797:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aed8fc FUN_140aed8fc body=57 status=ok
// SIG undefined FUN_140aed8fc(void)

void FUN_140aed8fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bb90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bb90 = FUN_140002ddd(FUN_1464d0ede,uVar1,L"JumpGoalDef");
  }
  return;
}



// FUNCTION 140aed936 FUN_140aed936 body=846 status=ok
// SIG undefined FUN_140aed936(void)

void FUN_140aed936(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 unaff_RBX;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 *puStack_1f0;
  undefined8 *local_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 *puStack_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1a9;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_130 [72];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(char *)(param_2 + 0x88) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_218);
  }
  if (*(char *)(param_2 + 0xb) == '\x01') {
    if (param_1[0x15] == 0) {
      lVar14 = 0xd88;
    }
    else {
      iVar13 = FUN_14487fd02();
      lVar14 = 0xdd0;
      if (iVar13 < 3) {
        lVar14 = 0xd88;
      }
    }
    if (lVar14 + (longlong)param_1 != 0) {
      uVar8 = *(undefined1 *)(param_2 + 0x8b);
      local_1a9 = *(undefined1 *)(param_2 + 0x89);
      uVar9 = *(undefined1 *)(param_2 + 8);
      dVar2 = (double)param_1[0x46];
      dVar3 = *(double *)(param_2 + 0x38);
      dVar4 = (double)param_1[0x47];
      dVar5 = *(double *)(param_2 + 0x30);
      dVar6 = *(double *)(param_2 + 0x40);
      dVar7 = (double)param_1[0x48];
      uVar11 = *(undefined8 *)(param_2 + 0x78);
      puVar12 = *(undefined8 **)(param_2 + 0x80);
      local_b8 = *(undefined8 *)(param_2 + 0xa8);
      local_c8 = *(undefined8 *)(param_2 + 0x98);
      uStack_c0 = *(undefined8 *)(param_2 + 0xa0);
      local_d8 = *(undefined8 *)(param_2 + 0x28);
      local_e8 = *(undefined4 *)(param_2 + 0x18);
      uStack_e4 = *(undefined4 *)(param_2 + 0x1c);
      uStack_e0 = *(undefined4 *)(param_2 + 0x20);
      uStack_dc = *(undefined4 *)(param_2 + 0x24);
      uVar1 = *(undefined4 *)(param_2 + 0x90);
      uVar10 = *(undefined1 *)(param_2 + 10);
      FUN_14341f2e8(local_130);
      local_1c0 = local_1a9;
      local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,uVar1);
      puStack_1f0 = &local_e8;
      local_1e8 = &local_c8;
      fStack_1e0 = (float)((-dVar2 * dVar5 - dVar3 * dVar4) - dVar6 * dVar7);
      local_1d8 = uVar11;
      puStack_1d0 = puVar12;
      local_1c8 = uVar9;
      local_1b8 = uVar8;
      (**(code **)(*param_1 + 0xac8))
                (param_1,*(undefined4 *)(param_2 + 0x10),local_130,
                 CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar10) & 0xffffffff);
    }
  }
  else if (*(char *)(param_2 + 10) == '\x01') {
    local_1c8 = *(undefined1 *)(param_2 + 0x8b);
    local_1e8 = *(undefined8 **)(param_2 + 0x78);
    fStack_1e0 = *(float *)(param_2 + 0x80);
    uStack_1dc = *(undefined4 *)(param_2 + 0x84);
    local_138 = *(undefined8 *)(param_2 + 0xa8);
    local_1f8 = &local_148;
    local_148 = *(undefined8 *)(param_2 + 0x98);
    uStack_140 = *(undefined8 *)(param_2 + 0xa0);
    local_158 = *(undefined8 *)(param_2 + 0x28);
    local_168 = *(undefined8 *)(param_2 + 0x18);
    uStack_160 = *(undefined8 *)(param_2 + 0x20);
    puStack_1d0 = (undefined8 *)CONCAT71(puStack_1d0._1_7_,*(undefined1 *)(param_2 + 0x89));
    local_1d8 = CONCAT71(local_1d8._1_7_,*(undefined1 *)(param_2 + 8));
    puStack_1f0 = (undefined4 *)
                  CONCAT44(puStack_1f0._4_4_,
                           (float)((-(double)param_1[0x46] * *(double *)(param_2 + 0x30) -
                                   *(double *)(param_2 + 0x38) * (double)param_1[0x47]) -
                                  *(double *)(param_2 + 0x40) * (double)param_1[0x48]));
    (**(code **)(*param_1 + 0xac0))
              (param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x90));
  }
  else {
    local_90 = *(char *)(param_2 + 9) == '\x01';
    if ((bool)local_90) {
      local_98 = *(undefined8 *)(param_2 + 0x58);
      local_a8 = *(undefined8 *)(param_2 + 0x48);
      uStack_a0 = *(undefined8 *)(param_2 + 0x50);
    }
    puStack_1d0 = &local_a8;
    local_1f8 = *(undefined8 **)(param_2 + 0x78);
    puStack_1f0 = *(undefined4 **)(param_2 + 0x80);
    local_178 = *(undefined8 *)(param_2 + 0x40);
    local_188 = *(undefined8 *)(param_2 + 0x30);
    uStack_180 = *(undefined8 *)(param_2 + 0x38);
    local_1a8 = *(undefined8 *)(param_2 + 0x18);
    uStack_1a0 = *(undefined8 *)(param_2 + 0x20);
    local_198 = *(undefined8 *)(param_2 + 0x28);
    local_1d8 = CONCAT71(local_1d8._1_7_,*(undefined1 *)(param_2 + 0x8b));
    fStack_1e0 = (float)CONCAT31(fStack_1e0._1_3_,*(undefined1 *)(param_2 + 0x89));
    local_1e8 = (undefined8 *)CONCAT71(local_1e8._1_7_,*(undefined1 *)(param_2 + 8));
    (**(code **)(*param_1 + 0xab0))(param_1,*(undefined4 *)(param_2 + 0x10));
  }
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aedcbe FUN_140aedcbe body=130 status=ok
// SIG undefined FUN_140aedcbe(void)

void FUN_140aedcbe(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if ((cVar1 != '\0') && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) {
    lVar3 = param_1[0x102];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
      param_1[0x102] = lVar3;
    }
    iVar2 = FUN_14343d73c(lVar3,param_2);
    if (iVar2 != -1) {
      FUN_14343d78a(lVar3,iVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140aedd40 FUN_140aedd40 body=1246 status=ok
// SIG undefined FUN_140aedd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aedd40(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6,byte param_7,byte param_8,undefined1 param_9,
                  undefined8 *param_10)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  longlong local_190;
  longlong local_188;
  byte local_180;
  byte local_178;
  undefined1 local_170;
  undefined8 *local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cVar6 = (**(code **)(*param_1 + 0x600))();
  if ((cVar6 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_140aee1d6;
  lVar8 = param_1[0x102];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
    param_1[0x102] = lVar8;
  }
  bVar12 = param_5 == 0 & param_7;
  if ((bVar12 & param_8) != 0) goto LAB_140aee1d6;
  iVar7 = FUN_14343d73c(lVar8,param_2);
  if (iVar7 == -1) goto LAB_140aee1d6;
  FUN_14343d78a(lVar8,iVar7,param_1);
  if (param_8 == 0) {
    FUN_1434e16a4(&local_78,param_3,param_1);
  }
  else {
    FUN_14341f746(param_5,param_6,param_3,&local_78);
  }
  if (*(char *)(param_1[0x17f] + 0x8a) == '\x01') {
    local_88 = param_4[2];
    local_98 = *param_4;
    uStack_90 = param_4[1];
    FUN_14341f956(param_5,param_6,&local_98,param_4);
  }
  if ((((DAT_14c7613ec != 0) && ((*(byte *)(param_1 + 0x69) & 0x18) != 0)) &&
      (*(char *)(param_10 + 3) == '\0')) &&
     ((lVar2 = *(longlong *)(lVar8 + 0x48), lVar2 != 0 && ((undefined8 *)(lVar2 + 600) != param_10))
     )) {
    param_10[2] = *(undefined8 *)(lVar2 + 0x268);
    uVar5 = *(undefined8 *)(lVar2 + 0x260);
    *param_10 = *(undefined8 *)(lVar2 + 600);
    param_10[1] = uVar5;
    *(undefined1 *)(param_10 + 3) = 1;
  }
  local_168 = &local_b8;
  local_a8 = DAT_14cad0eb8;
  local_b8 = _DAT_14cad0ea8;
  uStack_b0 = _DAT_14cad0eb0;
  local_d8 = *param_4;
  uStack_d0 = param_4[1];
  local_198 = &local_d8;
  local_c8 = param_4[2];
  local_f8 = local_78;
  uStack_f4 = uStack_74;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  local_e8 = local_68;
  local_170 = param_9;
  local_178 = param_8;
  local_180 = param_7;
  local_188 = param_6;
  local_190 = param_5;
  (**(code **)(*param_1 + 0xb70))(param_1,lVar8,param_2);
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    if (*(char *)(param_10 + 3) == '\x01') {
      local_108 = param_10[2];
      local_118 = *param_10;
      uStack_110 = param_10[1];
      local_138 = local_78;
      uStack_134 = uStack_74;
      uStack_130 = uStack_70;
      uStack_12c = uStack_6c;
      local_128 = local_68;
      local_190 = CONCAT71(local_190._1_7_,1);
      local_198 = (undefined8 *)0x0;
      FUN_14084af84(lVar2,&local_138,&local_118,0);
    }
    else {
      local_148 = local_68;
      local_158 = local_78;
      uStack_154 = uStack_74;
      uStack_150 = uStack_70;
      uStack_14c = uStack_6c;
      local_198 = (undefined8 *)CONCAT71(local_198._1_7_,1);
      FUN_140d93b16(lVar2,&local_158,0,0);
    }
  }
  param_1[0x27] = param_4[2];
  uVar13 = *(undefined4 *)((longlong)param_4 + 4);
  uVar14 = *(undefined4 *)(param_4 + 1);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)param_1 + 300) = uVar13;
  *(undefined4 *)(param_1 + 0x26) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  lVar2 = *(longlong *)(param_1[0x3e] + 0x450);
  (**(code **)(*param_1 + 0x5f0))
            (param_1,CONCAT71((int7)((ulonglong)param_3 >> 8),param_9) & 0xffffffff);
  if (bVar12 == 1 && lVar2 != 0) {
    lVar2 = param_1[0x22];
    if (lVar2 == 0) {
      param_5 = 0;
    }
    else {
      local_98 = *(undefined8 *)(lVar2 + 0x260);
      uStack_90 = *(undefined8 *)(lVar2 + 0x268);
      local_88 = *(undefined8 *)(lVar2 + 0x270);
      local_198 = (undefined8 *)0x0;
      param_5 = 0;
      (**(code **)(*param_1 + 0x900))(param_1,&local_98,param_1 + 0x93,0);
      param_6 = 0;
      if ((~*(uint *)(param_1 + 0x93) & 3) == 0) {
        if (*(int *)((longlong)param_1 + 0x584) == 0) {
LAB_140aee218:
          param_5 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0xb0);
          param_5 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar11 == (longlong *)0x0) ||
               (((int)plVar11[2] != *(int *)((longlong)param_1 + 0x584) ||
                ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140aee218;
            param_5 = *plVar11;
          }
        }
        param_6 = param_1[0xb3];
      }
    }
  }
  (**(code **)(*param_1 + 0x730))(param_1,param_5,param_6,1);
  (**(code **)(*param_1 + 0xa78))(param_1);
  *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
  (**(code **)(*param_1 + 0x658))(param_1);
  lVar2 = param_1[0x22];
  if (lVar2 == 0) {
    plVar10 = &DAT_14c8463d0;
    puVar9 = &DAT_14c8463e0;
    plVar11 = &DAT_14c8464e0;
    uVar13 = (undefined4)DAT_14c8464f0;
    uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    plVar11 = (longlong *)(lVar2 + 0x260);
    uVar13 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    plVar10 = (longlong *)(lVar2 + 0x240);
    puVar9 = (undefined8 *)(lVar2 + 0x250);
  }
  lVar2 = plVar11[1];
  param_1[0x78] = *plVar11;
  param_1[0x79] = lVar2;
  param_1[0x7a] = CONCAT44(uVar14,uVar13);
  lVar2 = plVar10[1];
  uVar13 = *(undefined4 *)puVar9;
  uVar14 = *(undefined4 *)((longlong)puVar9 + 4);
  uVar3 = *(undefined4 *)(puVar9 + 1);
  uVar4 = *(undefined4 *)((longlong)puVar9 + 0xc);
  param_1[0x74] = *plVar10;
  param_1[0x75] = lVar2;
  *(undefined4 *)(param_1 + 0x76) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar14;
  *(undefined4 *)(param_1 + 0x77) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = uVar4;
  *(int *)(param_1 + 0x7b) = (int)param_1[0x25];
  *(undefined4 *)((longlong)param_1 + 0x3dc) = *(undefined4 *)((longlong)param_1 + 300);
  *(int *)(param_1 + 0x7c) = (int)param_1[0x26];
  *(undefined4 *)((longlong)param_1 + 0x3e4) = *(undefined4 *)((longlong)param_1 + 0x134);
  param_1[0x7d] = param_1[0x27];
  (**(code **)(*param_1 + 0x4d0))(param_1);
  *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
LAB_140aee1d6:
  if (*(char *)(param_10 + 3) == '\x01') {
    *(undefined1 *)(param_10 + 3) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aee220 FUN_140aee220 body=516 status=ok
// SIG undefined FUN_140aee220(void)

void FUN_140aee220(longlong param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_98 [43];
  char local_6d;
  uint local_6c;
  undefined8 *local_68;
  uint *local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar13 = *(int *)(param_1 + 0x50);
  local_68 = param_4;
  if (iVar13 == 0) {
    uVar9 = 0;
    uVar8 = 1;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x38);
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar14 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar14 = iVar13 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar8 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar9) goto LAB_140aee3d2;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar8 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar14 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar14) {
      iVar14 = iVar13;
    }
  }
  if (iVar14 < iVar13) {
    local_6d = param_3;
    local_60 = (uint *)(param_1 + 0x38);
    local_58 = param_2;
    uVar11 = 0xffffffff;
    do {
      local_6c = uVar11;
      lVar12 = *(longlong *)(param_1 + 0x28);
      lVar7 = (longlong)iVar14;
      if (((local_6d == '\0') || (*(char *)(lVar12 + 0x20 + lVar7 * 0x28) == '\0')) &&
         (cVar2 = FUN_140aee426(*(undefined8 *)(lVar12 + lVar7 * 0x28),local_58), cVar2 != '\0')) {
        local_4c = iVar14;
        (*(code *)*local_68)(local_68[1],lVar12 + lVar7 * 0x28,&local_4c);
        iVar13 = *(int *)(param_1 + 0x50);
      }
      uVar11 = local_6c & ~(uint)uVar8;
      puVar6 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar6 = local_60;
      }
      iVar14 = (int)uVar9;
      lVar12 = (longlong)iVar14;
      uVar3 = puVar6[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar4 = iVar13 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar14) {
          iVar5 = iVar14;
        }
        if (iVar4 <= iVar14) break;
        lVar7 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar6[lVar12 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar12 == lVar7) goto LAB_140aee3d2;
        }
        uVar9 = (ulonglong)(iVar14 + (int)lVar7 + 1);
        uVar11 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar14 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar13);
  }
LAB_140aee3d2:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aee426 FUN_140aee426 body=73 status=ok
// SIG undefined FUN_140aee426(void)

undefined8 FUN_140aee426(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar4;
  bool bVar5;
  ulonglong uVar3;
  
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == *(char *)(param_1 + 0x18)) {
    if (cVar1 == '\x01') {
      uVar2 = *(uint *)(param_1 + 8) ^ *(uint *)(param_2 + 8);
      uVar3 = (ulonglong)uVar2;
      bVar5 = *(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
              (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10) &&
              (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) && uVar2 == 0));
    }
    else {
      if (cVar1 != '\0') goto LAB_140aee46b;
      uVar3 = *(ulonglong *)(param_1 + 8);
      bVar5 = uVar3 == *(ulonglong *)(param_2 + 8);
    }
    uVar4 = CONCAT71((int7)(uVar3 >> 8),bVar5);
  }
  else {
LAB_140aee46b:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140aee470 FUN_140aee470 body=40 status=ok
// SIG undefined FUN_140aee470(void)

undefined8 FUN_140aee470(undefined8 param_1,int param_2)

{
  FUN_140aee498();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aee498 FUN_140aee498 body=164 status=ok
// SIG undefined FUN_140aee498(void)

void FUN_140aee498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b177260;
  param_1[5] = &PTR_FUN_14b177d30;
  param_1[6] = &PTR_LAB_14b177d70;
  param_1[0x55] = &PTR_FUN_14b177dc0;
  param_1[0x56] = &PTR_FUN_14b177e40;
  param_1[0x57] = &PTR_FUN_14b177e50;
  param_1[0xca] = &PTR_FUN_14b177e80;
  param_1[0x15e] = &PTR_FUN_14b177ea0;
  *(undefined4 *)(param_1 + 0x207) = 0;
  if (param_1[0x206] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(param_1 + 0x1fe);
  FUN_140aee5f0(param_1);
  return;
}



// FUNCTION 140aee53c FUN_140aee53c body=55 status=ok
// SIG undefined FUN_140aee53c(void)

void FUN_140aee53c(longlong *param_1)

{
  FUN_140aee574(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140aee574 FUN_140aee574 body=123 status=ok
// SIG undefined FUN_140aee574(void)

void FUN_140aee574(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 140aee5f0 FUN_140aee5f0 body=499 status=ok
// SIG undefined FUN_140aee5f0(void)

void FUN_140aee5f0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ac97bd0;
  param_1[5] = &PTR_FUN_14ac986a0;
  param_1[6] = &PTR_LAB_14ac986e0;
  param_1[0x55] = &PTR_FUN_14ac98730;
  param_1[0x56] = &PTR_FUN_14ac987b0;
  param_1[0x57] = &PTR_FUN_14ac987c0;
  param_1[0xca] = &PTR_FUN_14ac987f0;
  param_1[0x15e] = &PTR_FUN_14ac98810;
  if (param_1[0x1f2] == 0) goto LAB_140aee67c;
  while( true ) {
    FUN_1400020a8();
LAB_140aee67c:
    if ((undefined8 *)param_1[0x1f1] == (undefined8 *)0x0) break;
    param_1[0x1f1] = *(undefined8 *)param_1[0x1f1];
  }
  FUN_144760d56(param_1 + 0x1be);
  plVar1 = param_1 + 0x174;
  if (*(int *)(param_1 + 0x175) == 0) {
LAB_140aee6a4:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x175) = 0;
      goto LAB_140aee6a4;
    }
  }
  plVar1 = param_1 + 0x172;
  if (*(int *)(param_1 + 0x173) == 0) {
LAB_140aee6c4:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x173) = 0;
      goto LAB_140aee6c4;
    }
  }
  plVar1 = param_1 + 0x170;
  if (*(int *)(param_1 + 0x171) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140aee6f0;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x171) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140aee6f0:
  FUN_144760e21(param_1[0x169],*(undefined4 *)(param_1 + 0x16a));
  if (param_1[0x169] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee7e4(param_1);
  return;
}



// FUNCTION 140aee7e4 FUN_140aee7e4 body=887 status=ok
// SIG undefined FUN_140aee7e4(void)

void FUN_140aee7e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a409ec0;
  param_1[5] = &PTR_FUN_14a40a980;
  param_1[6] = &PTR_LAB_14a40a9c0;
  param_1[0x55] = &PTR_FUN_14a40aa10;
  param_1[0x56] = &PTR_FUN_14a40aa90;
  param_1[0x57] = &PTR_FUN_14a40aaa0;
  param_1[0xca] = &PTR_FUN_14a40aad0;
  if (param_1[0x15c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x159] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x155] != 0) {
    FUN_1400020a8();
  }
  FUN_140aeeb5c(param_1 + 0x14e,param_1[0x14e]);
  if (param_1[0x14c] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x149];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x146] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x135] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x132] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x123] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x120] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x8dc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x8dc) = 0;
  }
  if (param_1[0x118] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x116] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x113] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x111] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x102],*(undefined4 *)(param_1 + 0x103));
  if (param_1[0x102] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 140aeeb5c FUN_140aeeb5c body=61 status=ok
// SIG undefined FUN_140aeeb5c(void)

void FUN_140aeeb5c(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ce6e(param_2);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 140aeeb9a FUN_140aeeb9a body=40 status=ok
// SIG undefined FUN_140aeeb9a(void)

undefined8 FUN_140aeeb9a(undefined8 param_1,int param_2)

{
  FUN_140aeebc2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aeebc2 FUN_140aeebc2 body=117 status=ok
// SIG undefined FUN_140aeebc2(void)

void FUN_140aeebc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b5dd0;
  param_1[0x1f] = &PTR_FUN_14a4b6140;
  FUN_140aeec64(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140aeec37(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 140aeec37 FUN_140aeec37 body=45 status=ok
// SIG undefined FUN_140aeec37(void)

void FUN_140aeec37(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1404dbc70(param_1);
      param_1 = param_1 + 0x120;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140aeec64 FUN_140aeec64 body=86 status=ok
// SIG undefined FUN_140aeec64(void)

void FUN_140aeec64(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x340;
    do {
      FUN_1404dbc70(param_1);
      FUN_1404dbc70(param_1 + -0x110);
      FUN_1404dbc70(param_1 + -0x220);
      FUN_1404dbc70(param_1 + -0x330);
      param_1 = param_1 + 0x450;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140aeecba FUN_140aeecba body=114 status=ok
// SIG undefined FUN_140aeecba(void)

void FUN_140aeecba(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_14791bb40(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  FUN_140aeed2c(param_1 + 0x20,2,1);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *puVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x138);
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = param_1 + 0x198;
  return;
}



// FUNCTION 140aeed2c FUN_140aeed2c body=115 status=ok
// SIG undefined FUN_140aeed2c(void)

void FUN_140aeed2c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140554e38(param_1,iVar1);
    }
    FUN_140554e1c((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147e3d792(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140aeedaa FUN_140aeedaa body=103 status=ok
// SIG undefined FUN_140aeedaa(void)

undefined8 * FUN_140aeedaa(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14ac53490;
  param_1[5] = &PTR_FUN_14ac53a70;
  param_1[6] = &PTR_LAB_14ac53ab0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b9) = 0;
  FUN_140b967fa(param_1,1);
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x20;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  return param_1;
}



// FUNCTION 140aeee12 FUN_140aeee12 body=344 status=ok
// SIG undefined FUN_140aeee12(void)

void FUN_140aeee12(longlong param_1)

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
  
  dVar7 = (*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x110)) -
          *(double *)(param_1 + 0x180);
  dVar8 = (*(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x118)) -
          *(double *)(param_1 + 0x188);
  dVar9 = (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0x120)) - *(double *)(param_1 + 400)
  ;
  dVar3 = *(double *)(param_1 + 0xf8) + *(double *)(param_1 + 0x110) + *(double *)(param_1 + 0x168);
  dVar5 = *(double *)(param_1 + 0x100) + *(double *)(param_1 + 0x118) + *(double *)(param_1 + 0x170)
  ;
  dVar1 = *(double *)(param_1 + 0x108) + *(double *)(param_1 + 0x120) + *(double *)(param_1 + 0x178)
  ;
  dVar2 = (dVar1 - dVar9) * 0.5;
  dVar6 = (dVar5 - dVar8) * 0.5;
  dVar4 = (dVar3 - dVar7) * 0.5;
  *(double *)(param_1 + 0x130) = (dVar7 + dVar3) * 0.5;
  *(double *)(param_1 + 0x138) = (dVar8 + dVar5) * 0.5;
  *(double *)(param_1 + 0x140) = (dVar9 + dVar1) * 0.5;
  *(double *)(param_1 + 0x148) = dVar4;
  *(double *)(param_1 + 0x150) = dVar6;
  *(double *)(param_1 + 0x158) = dVar2;
  *(double *)(param_1 + 0x160) = SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar6 * dVar6);
  return;
}



// FUNCTION 140aeef6a FUN_140aeef6a body=1 status=ok
// SIG undefined FUN_140aeef6a(void)

void FUN_140aeef6a(void)

{
  return;
}



// FUNCTION 140aeef6c FUN_140aeef6c body=80 status=ok
// SIG undefined FUN_140aeef6c(void)

void FUN_140aeef6c(longlong *param_1)

{
  if (((char)param_1[0x2f] != '\x03') && ((char)param_1[0x2f] != '\0')) {
    return;
  }
  FUN_14576edb8(param_1);
  (**(code **)(*param_1 + 0x330))(param_1,1);
  FUN_1405e47c6(param_1,0);
  FUN_140aeefbc(param_1,0,1);
  return;
}



// FUNCTION 140aeefbc FUN_140aeefbc body=630 status=ok
// SIG undefined FUN_140aeefbc(void)

uint FUN_140aeefbc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((*(byte *)(param_1 + 0x65) & 2) == 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
     ((lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0 && (-1 < (short)*(undefined4 *)(lVar4 + 8))
      ))) {
    uVar2 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_30;
        local_30 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar4 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar4 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
             (lVar5 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             != lVar4 + 0x30)) {
            lVar5 = 0;
          }
        } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xc0) != 0)) {
          FUN_1412f3774(*(longlong *)(lVar5 + 0xc0),param_1,param_2,param_3);
        }
      }
    }
  }
  uVar2 = 1;
  if ((*(byte *)(param_1 + 0x65) & 2) == 0) {
    uVar2 = *(uint *)(param_1 + 8) >> 0x1e & 1;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aef242 FUN_140aef242 body=31 status=ok
// SIG undefined FUN_140aef242(void)

undefined8 FUN_140aef242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aef262 FUN_140aef262 body=1241 status=ok
// SIG undefined FUN_140aef262(void)

void FUN_140aef262(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined **ppuVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_158 [47];
  undefined1 local_129;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_129 = 0;
  uVar8 = *(uint *)(param_3 + 0x24);
  if (SBORROW4(0,uVar8)) {
    puVar11 = (uint *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar11 = (uint *)(param_3 + 0x10);
    }
    uVar8 = *puVar11;
    uVar13 = (ulonglong)puVar11[1] << 0x20;
  }
  else {
    uVar13 = 0;
  }
  cVar7 = FUN_140aef73c(param_1 + 0x38,uVar8 | uVar13,&local_129);
  uVar6 = local_129;
  if (cVar7 != '\0') {
    local_118 = (undefined4)param_5[0x24];
    local_128 = param_5[0x22];
    lStack_120 = param_5[0x23];
    uStack_114 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
    uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
    uStack_10c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
    uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
    local_100 = (undefined4)param_5[0x27];
    uStack_fc = *(undefined4 *)((longlong)param_5 + 0x13c);
    uStack_f8 = (undefined4)param_5[0x28];
    uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x144);
    local_f0 = (undefined4)param_5[0x29];
    uStack_ec = *(undefined4 *)((longlong)param_5 + 0x14c);
    uStack_e8 = (undefined4)param_5[0x2a];
    uStack_e4 = *(undefined4 *)((longlong)param_5 + 0x154);
    local_e0 = param_5[0x2b];
    local_d0 = (undefined4)param_5[0x2d];
    local_d8 = param_5[0x2c];
    local_c8 = 0;
    iVar4 = (int)param_5[0x2f];
    lVar9 = param_5[0x2e];
    local_c0 = CONCAT44(local_c0._4_4_,iVar4);
    if (iVar4 == 0) {
      local_c0 = 0;
    }
    else {
      FUN_14753cf4a(&local_c8,iVar4,0);
      FUN_14753cfbd(local_c8,lVar9,iVar4);
    }
    local_b8 = (void *)0x0;
    uVar8 = *(uint *)(param_5 + 0x31);
    pvVar5 = (void *)param_5[0x30];
    local_b0 = CONCAT44(local_b0._4_4_,uVar8);
    if ((longlong)(int)uVar8 == 0) {
      local_b0 = (ulonglong)uVar8;
    }
    else {
      FUN_1456c5740(&local_b8,uVar8,0);
      memcpy(local_b8,pvVar5,(longlong)(int)uVar8 << 3);
    }
    local_a8 = (undefined1)param_5[0x32];
    local_a0 = (void *)0x0;
    uVar8 = *(uint *)(param_5 + 0x34);
    pvVar5 = (void *)param_5[0x33];
    local_98 = CONCAT44(local_98._4_4_,uVar8);
    if ((longlong)(int)uVar8 == 0) {
      local_98 = (ulonglong)uVar8;
    }
    else {
      FUN_1447bda9e(&local_a0,uVar8,0);
      memcpy(local_a0,pvVar5,(longlong)(int)uVar8 << 2);
    }
    uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
    uStack_90 = (undefined5)param_5[0x35];
    local_8b = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
    local_40 = local_40 | 3;
    local_80 = &PTR_FUN_14a4c5350;
    uStack_78 = CONCAT31(uStack_78._1_3_,uVar6);
    iVar4 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
      FUN_140ac5684(param_5,iVar4);
    }
    lVar9 = *param_5;
    lVar12 = (longlong)iVar4 * 0xf0;
    *(undefined4 *)(lVar9 + 0x20 + lVar12) = uStack_108;
    puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar12);
    *puVar1 = CONCAT44(uStack_114,local_118);
    puVar1[1] = CONCAT44(uStack_10c,uStack_110);
    *(longlong *)(lVar9 + lVar12) = local_128;
    ((longlong *)(lVar9 + lVar12))[1] = lStack_120;
    *(longlong *)(lVar9 + 0x48 + lVar12) = local_e0;
    puVar2 = (undefined4 *)(lVar9 + 0x38 + lVar12);
    *puVar2 = local_f0;
    puVar2[1] = uStack_ec;
    puVar2[2] = uStack_e8;
    puVar2[3] = uStack_e4;
    puVar2 = (undefined4 *)(lVar9 + 0x28 + lVar12);
    *puVar2 = local_100;
    puVar2[1] = uStack_fc;
    puVar2[2] = uStack_f8;
    puVar2[3] = uStack_f4;
    *(longlong *)(lVar9 + 0x50 + lVar12) = local_d8;
    *(undefined4 *)(lVar9 + 0x58 + lVar12) = local_d0;
    *(undefined8 *)(lVar9 + 0x60 + lVar12) = 0;
    *(longlong *)(lVar9 + 0x60 + lVar12) = local_c8;
    local_c8 = 0;
    *(undefined4 *)(lVar9 + 0x68 + lVar12) = (undefined4)local_c0;
    *(undefined4 *)(lVar9 + 0x6c + lVar12) = local_c0._4_4_;
    local_c0 = 0;
    *(undefined8 *)(lVar9 + 0x70 + lVar12) = 0;
    *(void **)(lVar9 + 0x70 + lVar12) = local_b8;
    local_b8 = (void *)0x0;
    *(undefined4 *)(lVar9 + 0x78 + lVar12) = (undefined4)local_b0;
    *(undefined4 *)(lVar9 + 0x7c + lVar12) = local_b0._4_4_;
    local_b0 = 0;
    *(undefined1 *)(lVar9 + 0x80 + lVar12) = local_a8;
    *(undefined8 *)(lVar9 + 0x88 + lVar12) = 0;
    *(void **)(lVar9 + 0x88 + lVar12) = local_a0;
    local_a0 = (void *)0x0;
    *(undefined4 *)(lVar9 + 0x90 + lVar12) = (undefined4)local_98;
    *(undefined4 *)(lVar9 + 0x94 + lVar12) = local_98._4_4_;
    local_98 = 0;
    *(ulonglong *)(lVar9 + 0x9d + lVar12) = CONCAT53(uStack_88,local_8b);
    *(ulonglong *)(lVar9 + 0x98 + lVar12) = CONCAT35(local_8b,uStack_90);
    bVar3 = *(byte *)(lVar9 + 0xe8 + lVar12);
    *(byte *)(lVar9 + 0xe8 + lVar12) = bVar3 & 0xfc | 2;
    if ((local_40 & 1) != 0) {
      lVar9 = lVar9 + lVar12;
      *(byte *)(lVar9 + 0xe8) = bVar3 | 3;
      *(byte *)(lVar9 + 0xe8) = *(byte *)(lVar9 + 0xe8) & 0xfd | local_40 & 2;
      *(undefined8 *)(lVar9 + 0xd8) = local_50;
      *(undefined8 *)(lVar9 + 0xe0) = uStack_48;
      *(undefined8 *)(lVar9 + 200) = local_60;
      *(undefined8 *)(lVar9 + 0xd0) = uStack_58;
      *(undefined4 *)(lVar9 + 0xb8) = local_70;
      *(undefined4 *)(lVar9 + 0xbc) = uStack_6c;
      *(undefined4 *)(lVar9 + 0xc0) = uStack_68;
      *(undefined4 *)(lVar9 + 0xc4) = uStack_64;
      *(undefined4 *)(lVar9 + 0xa8) = (undefined4)local_80;
      *(undefined4 *)(lVar9 + 0xac) = local_80._4_4_;
      *(undefined4 *)(lVar9 + 0xb0) = uStack_78;
      *(undefined4 *)(lVar9 + 0xb4) = uStack_74;
      local_40 = local_40 & 0xfe;
    }
    if ((local_40 & 1) != 0) {
      ppuVar10 = (undefined **)&local_80;
      if ((local_40 & 2) == 0) {
        ppuVar10 = local_80;
      }
      local_40 = local_40 & 0xfe;
      (**(code **)*ppuVar10)(ppuVar10,0);
      if ((local_40 & 2) == 0) {
        FUN_1400020a8(local_80);
      }
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447bda9c(local_c8,local_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aef73c FUN_140aef73c body=652 status=ok
// SIG undefined FUN_140aef73c(void)

undefined8 FUN_140aef73c(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int7 iVar9;
  undefined8 uVar8;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  int local_78;
  float local_74;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = *(uint *)(param_1 + 0x60);
  if (uVar13 == 0) {
    if (*(char *)(param_1 + 0x69) != '\x01') {
LAB_140aef8f4:
      uVar8 = 0;
      goto LAB_140aef86b;
    }
    uVar6 = *(undefined1 *)(param_1 + 0x68);
    iVar9 = (int7)(local_60 >> 8);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x58);
    iVar7 = *piVar4;
    iVar3 = piVar4[(int)(uVar13 - 1)];
    iVar12 = (int)param_2;
    fVar14 = (float)((ulonglong)param_2 >> 0x20);
    if ((iVar12 < iVar7) || ((iVar7 == iVar12 && (fVar14 < 0.0)))) {
      bVar2 = *(byte *)(param_1 + 0x50);
      if (1 < bVar2 - 3) {
        if (bVar2 == 5) goto LAB_140aef8f4;
        FUN_140108ff7(local_80,iVar7,iVar3,param_2);
        if (iVar7 <= iVar12) goto LAB_140aef7d6;
        goto joined_r0x000140aef8e3;
      }
      uVar6 = **(undefined1 **)(param_1 + 0x70);
      iVar9 = (int7)((ulonglong)*(undefined1 **)(param_1 + 0x70) >> 8);
    }
    else {
      if ((iVar3 < iVar12) || ((iVar3 == iVar12 && (0.0 < fVar14)))) {
        if (*(byte *)(param_1 + 0x51) - 3 < 2) {
          iVar7 = *(int *)(param_1 + 0x78) + -1;
          uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar7);
          iVar9 = (int7)(int3)((uint)iVar7 >> 8);
          goto LAB_140aef867;
        }
        if (*(byte *)(param_1 + 0x51) == 5) goto LAB_140aef8f4;
      }
      FUN_140108ff7(local_80,iVar7,iVar3,param_2);
LAB_140aef7d6:
      if ((iVar7 != iVar12) || (0.0 <= fVar14)) {
        if ((iVar3 < iVar12) || ((iVar3 == iVar12 && (0.0 < fVar14)))) {
          bVar2 = *(byte *)(param_1 + 0x51);
          goto joined_r0x000140aef8e3;
        }
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x50);
joined_r0x000140aef8e3:
        if ((bVar2 == 2) && ((local_70 & 1) != 0)) {
          fVar14 = local_74 + 0.5 + -0.5;
          if (0.99999994 <= fVar14) {
            fVar14 = 0.99999994;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar14 = 0.0 - fVar14;
          auVar15 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14),1);
          local_78 = ((iVar3 + iVar7) - local_78) + -1 + (int)auVar15._0_4_;
          local_74 = (fVar14 - auVar15._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= local_74) {
            local_74 = 0.99999994;
          }
          if (local_74 <= 0.0) {
            local_74 = 0.0;
          }
        }
      }
      if ((int)uVar13 < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar1 = (uVar13 >> 1) + uVar11;
          if ((piVar4[uVar1] <= local_78) && (piVar4[uVar1] != local_78 || 0.0 <= local_74)) {
            uVar11 = uVar1 + (uVar13 & 1);
          }
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
      }
      uVar10 = 1;
      if (1 < (int)uVar11) {
        uVar10 = (ulonglong)uVar11;
      }
      uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + -1 + uVar10);
      iVar9 = (int7)((ulonglong)*(longlong *)(param_1 + 0x70) >> 8);
    }
  }
LAB_140aef867:
  *param_3 = uVar6;
  uVar8 = CONCAT71(iVar9,1);
LAB_140aef86b:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140aef9ca FUN_140aef9ca body=221 status=ok
// SIG undefined FUN_140aef9ca(void)

longlong FUN_140aef9ca(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      uint param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((((*(uint *)(param_1 + 0x10) & 1) == 0) &&
      ((param_5 & 3) != 0 || (*(uint *)(*(longlong *)(param_3 + 0x10) + 0xd4) & 0x200000) != 0)) &&
     (((*(uint *)(param_1 + 0x10) & 2) == 0 || (cVar1 = FUN_144a792c0(param_3,0x30), cVar1 != '\0'))
     )) {
    if ((param_4 != 0 && param_2 == 0) && (lVar2 = *(longlong *)(param_3 + 0x20), lVar2 != param_4))
    {
      lVar3 = FUN_144938c96(param_4);
      bVar4 = lVar3 == 0;
      if (lVar3 != lVar2 && !bVar4) {
        do {
          lVar3 = FUN_144938c96(lVar3);
          bVar4 = lVar3 == 0;
          if (bVar4) break;
        } while (lVar3 != lVar2);
      }
      if (!bVar4) {
        return 0;
      }
    }
    if (param_2 == 0) {
      param_2 = param_3;
    }
    lVar2 = FUN_140aefaa8(param_1,param_2,param_3,param_4,param_5);
    if (lVar2 != -1) {
      param_3 = lVar2;
    }
  }
  return param_3;
}



// FUNCTION 140aefaa8 FUN_140aefaa8 body=1720 status=ok
// SIG undefined FUN_140aefaa8(void)

longlong *
FUN_140aefaa8(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,uint param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined *puVar11;
  longlong *plVar12;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined2 local_b8;
  longlong *local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar12 = (longlong *)0xffffffffffffffff;
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) goto LAB_140aefd58;
  if (DAT_14c951858 == 0) {
    local_f0 = &local_d8;
    local_d8 = FUN_1449e2820;
    local_e0 = FUN_14081d0ea;
    local_e8 = FUN_14081d0ea;
    local_f8 = &LAB_1468c5283;
    local_100 = FUN_142809da0;
    local_108 = L"Engine";
    local_110 = 0x400000000;
    local_118 = 0x10000000;
    local_120 = 8;
    local_128 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  plVar8 = param_3;
  if ((*(int *)(param_4[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
      != DAT_14c951858 + 0x30)) {
    do {
      plVar8 = (longlong *)plVar8[4];
    } while (plVar8 != param_4 && plVar8 != (longlong *)0x0);
    if ((param_4 == (longlong *)0x0) || (plVar8 != (longlong *)0x0)) goto LAB_140aefd58;
  }
  else if (param_4 != param_3) {
LAB_140aefb34:
    plVar9 = plVar8;
    plVar8 = plVar9;
    if ((longlong *)plVar9[4] != (longlong *)0x0) goto code_r0x000140aefb43;
    goto LAB_140aefb53;
  }
  goto LAB_140aefb65;
code_r0x000140aefbce:
  plVar9 = (longlong *)plVar10[4];
  if ((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0) goto LAB_140aefbbf;
  plVar9 = (longlong *)FUN_142840154(plVar10);
LAB_140aefbde:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)plVar10[4];
    goto LAB_140aefbbf;
  }
  if (plVar9 != plVar8) goto LAB_140aefde7;
  goto LAB_140aefbf0;
code_r0x000140aefb43:
  plVar8 = (longlong *)plVar9[4];
  if ((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0) goto LAB_140aefb34;
  plVar8 = (longlong *)FUN_142840154(plVar9);
LAB_140aefb53:
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)plVar9[4];
    goto LAB_140aefb34;
  }
  if (plVar8 == param_4) goto LAB_140aefd58;
LAB_140aefb65:
  plVar8 = (longlong *)*param_1;
  if (((param_5 & 2) == 0) || (plVar8 != param_2)) {
    if (DAT_14c951858 == 0) {
      local_f0 = &local_d8;
      local_d8 = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = FUN_14081d0ea;
      local_f8 = &LAB_1468c5283;
      local_100 = FUN_142809da0;
      local_108 = L"Engine";
      local_110 = 0x400000000;
      local_118 = 0x10000000;
      local_120 = 8;
      local_128 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    plVar9 = param_2;
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
        DAT_14c951858 + 0x30)) {
      do {
        plVar9 = (longlong *)plVar9[4];
      } while (plVar9 != plVar8 && plVar9 != (longlong *)0x0);
      if (plVar8 == (longlong *)0x0 || plVar9 != (longlong *)0x0) goto LAB_140aefbf0;
    }
    else if (plVar8 != param_2) {
LAB_140aefbbf:
      plVar10 = plVar9;
      plVar9 = plVar10;
      if ((longlong *)plVar10[4] != (longlong *)0x0) goto code_r0x000140aefbce;
      goto LAB_140aefbde;
    }
LAB_140aefde7:
    lVar3 = param_3[4];
    lVar7 = FUN_144938c96(param_4);
    if (lVar3 != lVar7) goto LAB_140aefd58;
  }
LAB_140aefbf0:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9517d0);
  if (DAT_14c9517f8 == param_2) {
LAB_140aefe54:
    bVar5 = DAT_14c951800;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9517d0);
    if (((param_2 != param_3) && ((bVar5 & 1) != 0)) &&
       (cVar4 = FUN_144b00bde(param_3,*param_1), cVar4 != '\0')) {
      param_2 = param_3;
    }
  }
  else {
    DAT_14c9517f8 = param_2;
    if (DAT_14c951788 != DAT_14c9517b4) {
      uVar6 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      puVar11 = &DAT_14c9517b8;
      if (DAT_14c9517c0 != (undefined *)0x0) {
        puVar11 = DAT_14c9517c0;
      }
      iVar2 = *(int *)(puVar11 + (ulonglong)(DAT_14c9517c8 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      while (iVar2 != -1) {
        puVar1 = (undefined8 *)(DAT_14c951780 + (longlong)iVar2 * 0x18);
        if ((longlong *)*puVar1 == param_2) {
          if ((byte *)(puVar1 + 1) != (byte *)0x0 && puVar1 != (undefined8 *)0x0) {
            DAT_14c951800 = *(byte *)(puVar1 + 1);
            goto LAB_140aefe54;
          }
          break;
        }
        iVar2 = *(int *)(puVar1 + 2);
      }
    }
    DAT_14c951800 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9517d0);
  }
  plVar8 = (longlong *)FUN_140af0162(param_1,param_2);
  if (plVar8 == (longlong *)0x0) {
    if (((param_5 & 4) == 0) &&
       ((param_2 == param_3 || (plVar12 = param_3, (longlong *)param_3[4] != param_4)))) {
      cVar4 = (**(code **)(*param_2 + 0x100))(param_2);
      bVar5 = (**(code **)(*param_2 + 0x108))(param_2);
      if (((cVar4 == '\0') || (DAT_14c86a9f0 == '\0')) && ((bVar5 & DAT_14c8687b8) != 1)) {
        plVar12 = (longlong *)0x0;
      }
      else {
        lVar3 = param_2[4];
        lVar7 = FUN_140af0162(param_1,lVar3);
        if (lVar7 == 0) {
          local_128 = param_5;
          lVar7 = FUN_140aefaa8(param_1,lVar3,lVar3,param_4);
        }
        lVar3 = param_2[3];
        if ((*(byte *)(*(longlong *)(lVar7 + 0x10) + 0xd6) & 4) == 0) {
          local_120 = 0;
          local_128 = 0;
          plVar12 = (longlong *)FUN_140be85e0(0,lVar7,lVar3,0);
          if ((plVar12 != (longlong *)0x0) &&
             (((*(char *)((longlong)param_1 + 0x14) != '\x01' ||
               (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
              ((*(uint *)(plVar12 + 1) >> 0x15 & 1) != 0)))) goto LAB_140aefd58;
        }
        local_d8 = (code *)param_2[2];
        local_88 = (longlong *)0x0;
        local_58 = 0;
        local_a0 = 0;
        lStack_98 = 0;
        uStack_c0 = (ulonglong)*(uint *)(lVar7 + 8) & 0xffffffff00000069;
        local_b8 = 1;
        local_d0 = lVar7;
        local_c8 = lVar3;
        local_b0 = param_2;
        plStack_a8 = param_1;
        plVar12 = (longlong *)FUN_1402710dd(&local_d8);
        if (lStack_98 != 0) {
          plVar8 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar8 = local_78;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
  }
  else {
    plVar12 = plVar8;
    if ((*(char *)((longlong)param_1 + 0x15) == '\x01') &&
       ((*(byte *)(plVar8[2] + 0xd6) & 0x80) != 0)) {
      FUN_14472e7dc(plVar8,param_1);
    }
  }
LAB_140aefd58:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return plVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af0162 FUN_140af0162 body=145 status=ok
// SIG undefined FUN_140af0162(void)

ulonglong FUN_140af0162(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (ulonglong *)0x0) {
            return puVar1[1];
          }
          return 0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140af01f4 FUN_140af01f4 body=1048 status=ok
// SIG undefined FUN_140af01f4(void)

uint * FUN_140af01f4(uint *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  int local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  byte local_68;
  char local_60 [16];
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *(longlong *)(param_2 + 0x38);
  local_b8 = -1;
  if (param_1[1] == 0) {
LAB_140af05cd:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar12 == (longlong *)0x0) ||
         ((*(uint *)(plVar12 + 2) != param_1[1] || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
      goto LAB_140af05cd;
      lVar7 = *plVar12;
    }
  }
  local_60[0] = '\0';
  local_38[0] = 0;
  FUN_1456bb102(local_60,lVar7);
  puVar8 = &local_88;
  FUN_1447c3578(param_2,puVar8,local_60);
  FUN_140af060e(param_1,&local_c0,puVar8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < (ushort)iStack_70) {
      puVar8 = (uint *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar3)(puVar8);
  }
  if (0x18 < (ushort)iStack_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  if ((lVar7 != 0) &&
     (*(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(param_2 + 0x28) * 0x120) != (code *)0x0)) {
    cVar6 = (**(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(param_2 + 0x28) * 0x120))
                      (param_2 + 8,local_60);
    if (cVar6 != '\0') {
      local_98 = 0;
      local_90 = 0xffffffff;
      cVar6 = FUN_1470de5c4(param_2 + 8);
      if ((cVar6 == '\0') || (local_98 != local_c0)) {
        local_88 = *param_1;
        uStack_84 = param_1[1];
        uStack_80 = param_1[2];
        uStack_7c = param_1[3];
        local_78 = local_c0;
        iStack_70 = local_b8;
        local_b0 = (undefined8 *)0x0;
        local_a8 = 0;
        FUN_1446efa72(&local_b0,0,4,0x10);
        puVar4 = local_b0;
        local_a8 = 4;
        *local_b0 = &PTR_LAB_14a1c85c0;
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
        local_b0[2] = lVar10;
        *local_b0 = &PTR_FUN_14a1c8470;
        local_b0[3] = 0;
        FUN_14485c47a(local_b0 + 3,lVar7);
        *(undefined4 *)(puVar4 + 6) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar4 + 0x34) = local_78._4_4_;
        *(int *)(puVar4 + 7) = iStack_70;
        *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_6c;
        *(uint *)(puVar4 + 4) = local_88;
        *(uint *)((longlong)puVar4 + 0x24) = uStack_84;
        *(uint *)(puVar4 + 5) = uStack_80;
        *(uint *)((longlong)puVar4 + 0x2c) = uStack_7c;
        FUN_142b45f1e(param_2,&local_a0,local_60);
        FUN_1449db362(&local_b0);
        if (local_a0 != 0) {
          uVar2 = param_1[0x256];
          param_1[0x256] = uVar2 + 1;
          if (param_1[599] < uVar2 + 1) {
            FUN_1470e3b12(param_1 + 0x254,uVar2);
          }
          lVar7 = *(longlong *)(param_1 + 0x254);
          FUN_14034cca6(lVar7 + (longlong)(int)uVar2 * 0x40,param_2);
          *(longlong *)(lVar7 + 0x38 + (longlong)(int)uVar2 * 0x40) = local_a0;
        }
      }
    }
  }
  FUN_1448173f8(local_38);
  if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  lVar7 = (longlong)local_b8;
  if ((lVar7 < 0) || ((int)param_1[0x246] <= local_b8)) {
LAB_140af03a4:
    if (local_c0 != 0) {
      puVar9 = param_1 + 4;
      if (*(uint **)(param_1 + 0x244) != (uint *)0x0) {
        puVar9 = *(uint **)(param_1 + 0x244);
      }
      uVar2 = param_1[0x246];
      if ((longlong)(int)uVar2 != 0) {
        puVar8 = (uint *)0x0;
        lVar7 = 0;
        do {
          if (*(longlong *)((longlong)puVar9 + lVar7 + 0x28) == local_c0) {
            uVar11 = (int)(lVar7 >> 3) * 0x38e38e39;
            puVar8 = (uint *)0x0;
            if ((-1 < (int)uVar11) && (puVar8 = (uint *)0x0, (int)uVar11 < (int)uVar2)) {
              puVar8 = puVar9 + (ulonglong)(uVar11 & 0x7fffffff) * 0x12;
              goto LAB_140af0367;
            }
            break;
          }
          lVar7 = lVar7 + 0x48;
        } while ((longlong)(int)uVar2 * 0x48 != lVar7);
        goto LAB_140af0376;
      }
    }
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x244);
    if (*(uint **)(param_1 + 0x244) == (uint *)0x0) {
      puVar8 = param_1 + 4;
    }
    if (*(longlong *)(puVar8 + lVar7 * 0x12 + 10) != local_c0) goto LAB_140af03a4;
    puVar8 = puVar8 + lVar7 * 0x12;
LAB_140af0367:
    if (puVar8 != (uint *)0x0) {
      puVar8[0xc] = *(uint *)(param_2 + 0x50);
      goto LAB_140af0376;
    }
  }
  puVar8 = (uint *)0x0;
LAB_140af0376:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 140af060e FUN_140af060e body=1224 status=ok
// SIG undefined FUN_140af060e(void)

void FUN_140af060e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 *_Dst;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *_Src;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  byte bVar13;
  uint uVar14;
  longlong *_Src_00;
  longlong lVar15;
  undefined1 auStack_98 [40];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_2;
  if (lVar5 == 0) goto LAB_140af06ed;
  lVar15 = param_1 + 0x10;
  uVar3 = *(uint *)(param_2 + 1);
  uVar14 = *(uint *)(param_1 + 0x918);
  lVar8 = *(longlong *)(param_1 + 0x910);
  if (*(longlong *)(param_1 + 0x910) == 0) {
    lVar8 = lVar15;
  }
  if ((int)uVar3 < (int)uVar14 && -1 < (int)uVar3) {
    if (*(longlong *)(lVar8 + 0x28 + (ulonglong)uVar3 * 0x48) != lVar5) {
      uVar9 = (ulonglong)uVar14;
LAB_140af071d:
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + 0x28 + lVar10) == lVar5) {
          uVar3 = (int)(lVar10 >> 3) * 0x38e38e39;
          *(uint *)(param_2 + 1) = uVar3;
          uVar14 = *(uint *)(param_1 + 0x918);
          if (((int)uVar3 < 0) || ((int)uVar14 <= (int)uVar3)) goto LAB_140af0749;
          lVar5 = *(longlong *)(param_1 + 0x910);
          if (*(longlong *)(param_1 + 0x910) == 0) {
            lVar5 = lVar15;
          }
          _Src_00 = (longlong *)(lVar5 + (ulonglong)(uVar3 & 0x7fffffff) * 0x48);
          goto LAB_140af068c;
        }
        lVar10 = lVar10 + 0x48;
      } while (uVar9 * 0x48 != lVar10);
      goto LAB_140af073b;
    }
    _Src_00 = (longlong *)(lVar8 + (ulonglong)uVar3 * 0x48);
LAB_140af068c:
    if (_Src_00 == (longlong *)0x0) goto LAB_140af0749;
    bVar13 = *(byte *)(_Src_00 + 4);
    if (bVar13 == *(byte *)(param_3 + 4)) {
      puVar11 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar11 = (undefined8 *)*param_3;
      }
      plVar7 = _Src_00;
      if (0x18 < *(ushort *)(_Src_00 + 3)) {
        plVar7 = (longlong *)*_Src_00;
      }
      if (*(code **)(&DAT_14c9a85e0 + (uint)bVar13 * 0x120) == (code *)0x0) {
        iVar4 = memcmp(plVar7,puVar11,
                       (longlong)
                       *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar13 * 0x120)));
        if (iVar4 == 0) goto LAB_140af06ed;
      }
      else {
        cVar2 = (**(code **)(&DAT_14c9a85e0 + (uint)bVar13 * 0x120))();
        if (cVar2 != '\0') goto LAB_140af06ed;
        bVar13 = *(byte *)(_Src_00 + 4);
      }
    }
    local_58 = *(ushort *)(_Src_00 + 3);
    if (local_58 < 0x19) {
      uVar9 = (ulonglong)((uint)bVar13 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b8 + uVar9);
      if ((pcVar6 == (code *)0x0) &&
         (pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9), pcVar6 == (code *)0x0)) {
        memcpy(local_70,_Src_00,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
      }
      else {
        (*pcVar6)(local_70,_Src_00);
      }
    }
    else {
      local_70[0] = (undefined8 ***)*_Src_00;
      *_Src_00 = 0;
      *(undefined2 *)(_Src_00 + 3) = 0;
    }
    local_50 = *(byte *)(_Src_00 + 4);
    *(undefined1 *)(_Src_00 + 4) = 0;
    if (*(char *)(param_3 + 4) == '\0') {
      if (0x18 < *(ushort *)(param_3 + 3)) {
        param_3 = (undefined8 *)*param_3;
      }
      plVar7 = _Src_00;
      if (0x18 < *(ushort *)(_Src_00 + 3)) {
        plVar7 = (longlong *)*_Src_00;
      }
      if (DAT_14c9a85c0 == (code *)0x0) {
        memcpy(plVar7,param_3,(longlong)DAT_14c9a8510);
      }
      else {
        (*DAT_14c9a85c0)(plVar7,param_3);
      }
    }
    else {
      if (DAT_14c9a85d0 != (code *)0x0) {
        plVar7 = _Src_00;
        if (0x18 < *(ushort *)(_Src_00 + 3)) {
          plVar7 = (longlong *)*_Src_00;
        }
        (*DAT_14c9a85d0)(plVar7);
      }
      if (0x18 < *(ushort *)(_Src_00 + 3)) {
        FUN_1400020a8(*_Src_00);
      }
      bVar13 = *(byte *)(param_3 + 4);
      uVar1 = *(ushort *)(param_3 + 3);
      *(ushort *)(_Src_00 + 3) = uVar1;
      plVar7 = _Src_00;
      puVar11 = param_3;
      if (0x18 < uVar1) {
        plVar7 = (longlong *)FUN_14001cc68(uVar1,0);
        *_Src_00 = (longlong)plVar7;
        puVar11 = (undefined8 *)*param_3;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar13 * 0x120));
      if (pcVar6 == (code *)0x0) {
        memcpy(plVar7,puVar11,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar13 * 0x120)));
      }
      else {
        (*pcVar6)();
      }
      *(undefined1 *)(_Src_00 + 4) = *(undefined1 *)(param_3 + 4);
    }
    FUN_140af0ad8(param_1,param_2,_Src_00,local_70);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  }
  else {
    if (uVar14 != 0) {
      uVar9 = (ulonglong)(int)uVar14;
      goto LAB_140af071d;
    }
LAB_140af073b:
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    uVar14 = *(uint *)(param_1 + 0x918);
LAB_140af0749:
    *(uint *)(param_1 + 0x918) = uVar14 + 1;
    if (*(uint *)(param_1 + 0x91c) < uVar14 + 1) {
      FUN_14576eef0(lVar15,uVar14);
    }
    lVar5 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar5 = lVar15;
    }
    puVar11 = (undefined8 *)(lVar5 + (longlong)(int)uVar14 * 0x48);
    bVar13 = *(byte *)(param_3 + 4);
    uVar1 = *(ushort *)(param_3 + 3);
    *(ushort *)(puVar11 + 3) = uVar1;
    _Dst = puVar11;
    _Src = param_3;
    if (0x18 < uVar1) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar1,0);
      *puVar11 = _Dst;
      _Src = (undefined8 *)*param_3;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar13 * 0x120));
    if (pcVar6 == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar13 * 0x120)));
    }
    else {
      (*pcVar6)();
    }
    *(undefined1 *)(puVar11 + 4) = *(undefined1 *)(param_3 + 4);
    puVar11[5] = *param_2;
    *(undefined4 *)(puVar11 + 6) = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    *(uint *)(param_2 + 1) = uVar14;
    if (*(char *)(param_3 + 4) == '\0') goto LAB_140af06ed;
    local_58 = 0;
    local_50 = 0;
    if (*(longlong *)(param_1 + 0x910) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x910);
    }
    FUN_140af0ad8(param_1,param_2,lVar15 + (longlong)(int)uVar14 * 0x48,local_70);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  }
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_70;
    if (0x18 < local_58) {
      ppppuVar12 = (undefined8 ****)local_70[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
LAB_140af06ed:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af0ad8 FUN_140af0ad8 body=620 status=ok
// SIG undefined FUN_140af0ad8(void)

void FUN_140af0ad8(uint *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  uint *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  uint **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = param_1[0x253];
  param_1[0x253] = uVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[0x250];
  if ((longlong)uVar5 < 1) {
    param_1[0x253] = uVar1;
  }
  else {
    bVar7 = false;
    local_80 = param_2;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while (((lVar2 = *(longlong *)(param_1 + 0x24e), *(int *)(lVar2 + lVar8) != 0 &&
              (plVar6 = *(longlong **)(lVar2 + -8 + lVar8), plVar6 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,param_3 + 0x28,param_4,param_3),
             cVar4 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          param_1[0x253] = param_1[0x253] - 1;
          param_2 = local_80;
          if (bVar7) goto LAB_140af0d39;
          goto LAB_140af0b28;
        }
      }
      uVar5 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    param_1[0x253] = param_1[0x253] - 1;
LAB_140af0d39:
    param_2 = local_80;
    FUN_14474d06a(param_1 + 0x24e,0);
  }
LAB_140af0b28:
  if ((char)param_1[0x249] == '\x01') {
    local_78 = (uint *)0x0;
    local_70 = (longlong *)CONCAT44(local_70._4_4_,0xffffffff);
    if ((uint *)*param_2 != (uint *)0x0) {
      local_70 = (longlong *)CONCAT44(local_70._4_4_,(int)param_2[1]);
      local_78 = (uint *)*param_2;
    }
    FUN_1447cd2ec(param_1 + 0x24a,&local_78);
    local_58 = FUN_142b3d86a;
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    local_50 = &local_78;
    FUN_140cfa7c8(param_3 + 0x30);
  }
  plVar6 = *(longlong **)(param_1 + 2);
  if ((((plVar6 != (longlong *)0x0) && (param_1[1] != 0)) &&
      ((uVar1 = *param_1, -1 < (int)uVar1 &&
       (((int)uVar1 < DAT_14c9647dc &&
        (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0)))))) &&
     ((*(uint *)(lVar8 + 0x10) == param_1[1] && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
    (**(code **)(*plVar6 + 0x30))(plVar6,param_3,param_4);
    if ((((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         ((plVar6 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
         ((lVar8 = *plVar6, lVar8 != 0 && (*(longlong *)(lVar8 + 0x10) != 0)))))) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x10) + 0xd6) & 4) != 0)) {
      FUN_1470c7612(lVar8,param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af0d46 FUN_140af0d46 body=152 status=ok
// SIG undefined FUN_140af0d46(void)

undefined8 * FUN_140af0d46(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_140af0dde(param_1,param_3);
  if (lVar2 == 0) {
    if (*param_1 == 1) {
      FUN_1400021e4(param_1 + 1,param_2);
    }
    else if (*param_1 == 0) {
      FUN_140056680(param_2,L"Self");
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x68);
    _Src = *(void **)(lVar2 + 0x60);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 140af0dde FUN_140af0dde body=90 status=ok
// SIG undefined FUN_140af0dde(void)

longlong FUN_140af0dde(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140af0e38();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x28);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
    }
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 140af0e38 FUN_140af0e38 body=2923 status=ok
// SIG undefined FUN_140af0e38(void)

ulonglong FUN_140af0e38(int *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_928 [32];
  undefined4 local_908;
  undefined4 local_900;
  undefined4 local_8f8;
  undefined8 local_8f0;
  wchar_t *local_8e8;
  code *local_8e0;
  undefined1 *local_8d8;
  code **local_8d0;
  code *local_8c8;
  code *local_8c0;
  ulonglong local_8b0;
  longlong local_8a8;
  char *local_8a0;
  bool *local_898;
  bool local_88a;
  char local_889;
  undefined8 local_888;
  code *local_880;
  code *local_878;
  undefined1 *local_870;
  char local_868;
  undefined1 local_860 [2070];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_928;
  lVar6 = FUN_14018d992();
  if (DAT_14c951858 == 0) {
    local_8d0 = &local_880;
    local_880 = FUN_1449e2820;
    local_8c0 = FUN_14081d0ea;
    local_8c8 = FUN_14081d0ea;
    local_8d8 = &LAB_1468c5283;
    local_8e0 = FUN_142809da0;
    local_8e8 = L"Engine";
    local_8f0 = 0x400000000;
    local_8f8 = 0x10000000;
    local_900 = 8;
    local_908 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package");
  }
  lVar12 = *(longlong *)(param_2 + 0x20);
  if (lVar12 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (lVar9 = lVar12,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
          ) != lVar6 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
    if (lVar9 != 0) {
      if (*param_1 == 1) {
        if (*(longlong *)(param_1 + 1) != 0) {
          local_880 = (code *)local_860;
          local_868 = '\0';
          local_870 = local_4a;
          local_878 = local_880;
          FUN_14005eb5c(param_1 + 1,&local_880);
          pcVar4 = local_880;
          if ((longlong)*(int *)(lVar9 + 0xc0) != 0) {
            uVar15 = (longlong)local_878 - (longlong)local_880;
            uVar11 = *(ulonglong *)(lVar9 + 0xb8);
            uVar10 = uVar11 + (longlong)*(int *)(lVar9 + 0xc0) * 0x48;
            iVar14 = (int)(uVar15 >> 1);
            bVar5 = DAT_14c950c29;
LAB_140af0f5a:
            lVar6 = *(longlong *)(uVar11 + 0x28);
            if (((bVar5 & 1) == 0) || (lVar6 == 0)) {
              if (lVar6 != 0) goto LAB_140af0f74;
              goto LAB_140af0ffd;
            }
            FUN_14689c22e(lVar6);
            bVar5 = DAT_14c950c29;
LAB_140af0f74:
            uVar3 = *(uint *)(lVar6 + 0x68);
            iVar13 = uVar3 - 1;
            if (uVar3 == 0) {
              iVar13 = 0;
            }
            if (iVar13 != iVar14) goto LAB_140af0ffd;
            if (((iVar14 != 0) && (1 < uVar3)) && ((uVar15 & 0x1ffffffff) >> 1 != 0)) {
              lVar9 = 0;
              lVar12 = (longlong)iVar14;
              do {
                uVar1 = *(ushort *)(pcVar4 + lVar9);
                uVar2 = *(ushort *)(*(longlong *)(lVar6 + 0x60) + lVar9);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar13 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_140af1596;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto LAB_140af1593;
                }
                lVar12 = lVar12 + -1;
                if (lVar12 == 0) break;
                lVar9 = lVar9 + 2;
              } while( true );
            }
            goto LAB_140af159f;
          }
LAB_140af100a:
          if (local_868 == '\x01') {
            FUN_1400020a8(local_880);
          }
        }
      }
      else if (*param_1 == 0) {
        if (DAT_14cb3e268 == 0) {
          local_8d0 = &local_880;
          local_880 = FUN_1449e2820;
          local_8c0 = FUN_14081d0ea;
          local_8c8 = FUN_14081d0ea;
          local_8d8 = &LAB_1481bbd47;
          local_8e0 = FUN_143a7bac5;
          local_8e8 = L"Engine";
          local_8f0 = 0;
          local_8f8 = 0x10000000;
          local_900 = 8;
          local_908 = 0x70;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter");
        }
        lVar6 = DAT_14cb3e268;
        if (DAT_14c951858 == 0) {
          local_8d0 = &local_880;
          local_880 = FUN_1449e2820;
          local_8c0 = FUN_14081d0ea;
          local_8c8 = FUN_14081d0ea;
          local_8d8 = &LAB_1468c5283;
          local_8e0 = FUN_142809da0;
          local_8e8 = L"Engine";
          local_8f0 = 0x400000000;
          local_8f8 = 0x10000000;
          local_900 = 8;
          local_908 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package");
        }
        lVar12 = *(longlong *)(param_2 + 0x20);
        if (lVar12 == 0) {
          lVar6 = (longlong)*(int *)(lVar9 + 0xc0);
          if (lVar6 != 0) {
            uVar10 = *(ulonglong *)(lVar9 + 0xb8);
LAB_140af109c:
            local_8b0 = uVar10 + lVar6 * 0x48;
            uVar11 = 0;
LAB_140af10a7:
            lVar12 = FUN_14040f60c(uVar10);
            uVar3 = DAT_14cb3b000;
            lVar6 = DAT_14cb3aff8;
            if ((lVar12 != 0) && (*(char *)(uVar10 + 0x20) != '\0')) {
              local_889 = '\0';
              local_88a = false;
              local_8a0 = &local_889;
              local_898 = &local_88a;
              lVar9 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x118) + 0x390);
              local_8a8 = param_2;
              bVar16 = local_88a;
              if (lVar9 != 0) {
                lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x118) + 0x388);
                lVar7 = 0;
                do {
                  if (*(longlong *)(lVar8 + 0x40 + lVar7) == param_2) {
                    local_889 = '\x01';
                    local_888 = *(undefined8 *)(lVar8 + 8 + lVar7);
                    uVar15 = (ulonglong)(DAT_14cb3b000 - 1);
                    if (DAT_14cb3b000 == 0) {
                      uVar15 = uVar11;
                    }
                    local_868 = '\0';
                    local_880 = (code *)local_860;
                    local_870 = local_4a;
                    local_878 = local_880;
                    FUN_14005eb5c(&local_888,&local_880);
                    iVar13 = (int)uVar15;
                    iVar14 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
                    if ((iVar13 < 2) || (*(short *)(lVar6 + -2 + uVar15 * 2) != 0x2e)) {
                      if (iVar14 <= iVar13 + 1) goto LAB_140af1955;
                      bVar16 = false;
                      if ((iVar13 < 0) ||
                         (uVar15 = (ulonglong)iVar13, *(short *)(local_880 + uVar15 * 2) != 0x2e))
                      goto LAB_140af12b9;
                      if (uVar3 < 2) {
                        bVar16 = true;
                        goto LAB_140af12b9;
                      }
                    }
                    else if (iVar14 <= iVar13) {
LAB_140af1955:
                      bVar16 = false;
                      goto LAB_140af12b9;
                    }
                    lVar9 = 0;
                    goto LAB_140af1143;
                  }
                  lVar7 = lVar7 + 0x50;
                } while (lVar9 * 0x50 != lVar7);
              }
              goto LAB_140af12cf;
            }
            goto LAB_140af1576;
          }
        }
        else {
          iVar14 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar14) ||
               (lVar8 = lVar12,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar14 * 8) !=
               lVar6 + 0x30)) {
              lVar8 = 0;
            }
          } while ((lVar8 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
          uVar10 = *(ulonglong *)(lVar9 + 0xb8);
          iVar14 = *(int *)(lVar9 + 0xc0);
          lVar6 = (longlong)iVar14;
          if (lVar8 == 0) {
            if (iVar14 != 0) goto LAB_140af109c;
          }
          else if (iVar14 != 0) {
            lVar6 = lVar6 * 0x48;
            bVar5 = DAT_14c950c29;
            do {
              lVar12 = *(longlong *)(uVar10 + 0x28);
              if (((bVar5 & 1) != 0) && (lVar12 != 0)) {
                FUN_14689c22e(lVar12);
                bVar5 = DAT_14c950c29;
              }
              uVar11 = uVar10;
              if (lVar12 == lVar8) break;
              uVar10 = uVar10 + 0x48;
              lVar6 = lVar6 + -0x48;
              uVar11 = 0;
            } while (lVar6 != 0);
            goto LAB_140af15a9;
          }
        }
      }
    }
  }
  uVar11 = 0;
LAB_140af15a9:
  if ((local_48 ^ (ulonglong)auStack_928) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
LAB_140af1143:
  uVar1 = *(ushort *)(lVar6 + lVar9);
  uVar2 = *(ushort *)(local_880 + lVar9);
  if (uVar1 == uVar2) {
    iVar14 = 0;
    if ((uVar1 == 0) || (uVar15 == 1)) goto LAB_140af1655;
LAB_140af1168:
    uVar15 = uVar15 - 1;
    lVar9 = lVar9 + 2;
    goto LAB_140af1143;
  }
  if ((uVar2 | uVar1) < 0x80) {
    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
      iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      goto LAB_140af1655;
    }
    if (uVar15 == 1) {
      iVar14 = 0;
      goto LAB_140af1655;
    }
    goto LAB_140af1168;
  }
  iVar14 = (uint)uVar1 - (uint)uVar2;
LAB_140af1655:
  bVar16 = iVar14 == 0;
LAB_140af12b9:
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
LAB_140af12cf:
  local_88a = bVar16;
  uVar3 = DAT_14cb3b000;
  lVar6 = DAT_14cb3aff8;
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar12 + 0xf0) + 0x390);
  bVar16 = local_88a;
  if (lVar9 != 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0xf0) + 0x388);
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar8 + 0x40 + lVar7) == param_2) {
        local_889 = '\x01';
        local_888 = *(undefined8 *)(lVar8 + 8 + lVar7);
        uVar15 = (ulonglong)(DAT_14cb3b000 - 1);
        if (DAT_14cb3b000 == 0) {
          uVar15 = uVar11;
        }
        local_868 = '\0';
        local_880 = (code *)local_860;
        local_870 = local_4a;
        local_878 = local_880;
        FUN_14005eb5c(&local_888,&local_880);
        iVar13 = (int)uVar15;
        iVar14 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
        if ((iVar13 < 2) || (*(short *)(lVar6 + -2 + uVar15 * 2) != 0x2e)) {
          if (iVar14 <= iVar13 + 1) goto LAB_140af1965;
          bVar16 = false;
          if ((iVar13 < 0) ||
             (uVar15 = (ulonglong)iVar13, *(short *)(local_880 + uVar15 * 2) != 0x2e))
          goto LAB_140af13cd;
          if (uVar3 < 2) {
            bVar16 = true;
            goto LAB_140af13cd;
          }
        }
        else if (iVar14 <= iVar13) {
LAB_140af1965:
          bVar16 = false;
          goto LAB_140af13cd;
        }
        lVar9 = 0;
        goto LAB_140af119e;
      }
      lVar7 = lVar7 + 0x50;
    } while (lVar9 * 0x50 != lVar7);
  }
  goto LAB_140af13e3;
LAB_140af119e:
  uVar1 = *(ushort *)(lVar6 + lVar9);
  uVar2 = *(ushort *)(local_880 + lVar9);
  if (uVar1 == uVar2) {
    iVar14 = 0;
    if ((uVar1 == 0) || (uVar15 == 1)) goto LAB_140af1664;
LAB_140af11c3:
    uVar15 = uVar15 - 1;
    lVar9 = lVar9 + 2;
    goto LAB_140af119e;
  }
  if ((uVar2 | uVar1) < 0x80) {
    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
      iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      goto LAB_140af1664;
    }
    if (uVar15 == 1) {
      iVar14 = 0;
      goto LAB_140af1664;
    }
    goto LAB_140af11c3;
  }
  iVar14 = (uint)uVar1 - (uint)uVar2;
LAB_140af1664:
  bVar16 = iVar14 == 0;
LAB_140af13cd:
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
LAB_140af13e3:
  local_88a = bVar16;
  uVar3 = DAT_14cb3b000;
  lVar9 = DAT_14cb3aff8;
  lVar6 = *(longlong *)(lVar12 + 0x268);
  bVar16 = local_88a;
  if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x390) != 0)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar6 + 0x388) + 0x40 + lVar8) == param_2) {
        local_889 = '\x01';
        local_888 = *(undefined8 *)(*(longlong *)(lVar6 + 0x388) + 8 + lVar8);
        uVar15 = (ulonglong)(DAT_14cb3b000 - 1);
        if (DAT_14cb3b000 == 0) {
          uVar15 = uVar11;
        }
        local_868 = '\0';
        local_880 = (code *)local_860;
        local_870 = local_4a;
        local_878 = local_880;
        FUN_14005eb5c(&local_888,&local_880);
        iVar13 = (int)uVar15;
        iVar14 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
        if ((iVar13 < 2) || (*(short *)(lVar9 + -2 + uVar15 * 2) != 0x2e)) {
          if (iVar14 <= iVar13 + 1) goto LAB_140af1975;
          bVar16 = false;
          if ((iVar13 < 0) ||
             (uVar15 = (ulonglong)iVar13, *(short *)(local_880 + uVar15 * 2) != 0x2e))
          goto LAB_140af1545;
          if (uVar3 < 2) {
            bVar16 = true;
            goto LAB_140af1545;
          }
        }
        else if (iVar14 <= iVar13) {
LAB_140af1975:
          bVar16 = false;
          goto LAB_140af1545;
        }
        lVar6 = 0;
        goto LAB_140af142a;
      }
      lVar8 = lVar8 + 0x50;
    } while ((longlong)*(int *)(lVar6 + 0x390) * 0x50 != lVar8);
  }
LAB_140af155b:
  local_88a = bVar16;
  iVar14 = *(int *)(lVar12 + 0x88);
  if ((longlong)iVar14 != 0) {
    lVar6 = *(longlong *)(lVar12 + 0x80);
    lVar12 = 0;
    do {
      FUN_143a3dcd2(&local_8a8,*(undefined8 *)(lVar6 + lVar12));
      lVar12 = lVar12 + 0x58;
    } while ((longlong)iVar14 * 0x58 - lVar12 != 0);
  }
  if (local_889 != '\0') {
    uVar11 = 0;
    if ((local_88a & 1U) != 0) {
      uVar11 = uVar10;
    }
    goto LAB_140af15a9;
  }
LAB_140af1576:
  uVar10 = uVar10 + 0x48;
  if (uVar10 == local_8b0) goto LAB_140af15a9;
  goto LAB_140af10a7;
LAB_140af142a:
  uVar1 = *(ushort *)(lVar9 + lVar6);
  uVar2 = *(ushort *)(local_880 + lVar6);
  if (uVar1 == uVar2) {
    iVar14 = 0;
    if ((uVar1 == 0) || (uVar15 == 1)) goto LAB_140af1673;
LAB_140af144f:
    uVar15 = uVar15 - 1;
    lVar6 = lVar6 + 2;
    goto LAB_140af142a;
  }
  if ((uVar2 | uVar1) < 0x80) {
    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
      iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      goto LAB_140af1673;
    }
    if (uVar15 == 1) {
      iVar14 = 0;
      goto LAB_140af1673;
    }
    goto LAB_140af144f;
  }
  iVar14 = (uint)uVar1 - (uint)uVar2;
LAB_140af1673:
  bVar16 = iVar14 == 0;
LAB_140af1545:
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
  goto LAB_140af155b;
LAB_140af1593:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_140af1596:
  if (iVar13 == 0) {
LAB_140af159f:
    if (local_868 == '\x01') {
      FUN_1400020a8(local_880);
    }
    goto LAB_140af15a9;
  }
LAB_140af0ffd:
  uVar11 = uVar11 + 0x48;
  if (uVar11 == uVar10) goto LAB_140af100a;
  goto LAB_140af0f5a;
}



// FUNCTION 140af19a4 FUN_140af19a4 body=701 status=ok
// SIG undefined FUN_140af19a4(void)

void FUN_140af19a4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  byte local_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_50 = 0;
  uStack_49 = 0;
  local_48 = 0x19101;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_50);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        *(byte **)(param_2 + 0x20) = pbVar4;
        uStack_50 = (undefined7)uVar1;
        uStack_49 = (undefined1)((ulonglong)uVar1 >> 0x38);
        goto LAB_140af1a6d;
      }
      (*pcVar2)(uVar1,param_2,&uStack_50);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
LAB_140af1a6d:
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_51);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_51);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
      local_51 = (byte)uVar1;
      uStack_50 = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_51);
    }
  }
  pbVar4 = &local_51;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = CONCAT17(uStack_49,uStack_50);
  local_30 = local_48;
  local_28 = 0;
  bVar3 = FUN_140af1c62(param_1);
  *pbVar4 = bVar3 ^ 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af1c62 FUN_140af1c62 body=188 status=ok
// SIG undefined FUN_140af1c62(void)

ulonglong FUN_140af1c62(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    local_40 = *param_2;
    FUN_1446dcdd4(local_38);
    if (DAT_14cb8b9b8 != 0) {
      lVar2 = FUN_144837462(DAT_14cb8b9b8,local_38);
      if ((lVar2 != 0) && ((longlong)*(int *)(lVar1 + 0x50) != 0)) {
        plVar3 = *(longlong **)(lVar1 + 0x48);
        lVar4 = (longlong)*(int *)(lVar1 + 0x50) * 0x90;
        do {
          if (*plVar3 == lVar2) {
            if (plVar3 != (longlong *)0x0) {
              uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),(char)plVar3[0x11]) &
                      0xffffffffffffff01;
              goto LAB_140af1ced;
            }
            break;
          }
          plVar3 = plVar3 + 0x12;
          lVar4 = lVar4 + -0x90;
        } while (lVar4 != 0);
      }
    }
    uVar5 = 0;
LAB_140af1ced:
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af1d20 FUN_140af1d20 body=456 status=ok
// SIG undefined FUN_140af1d20(void)

undefined4 FUN_140af1d20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lStack_f0 = *(longlong *)(param_1 + 0x50);
  local_70 = *(undefined8 *)(lStack_f0 + 0x58);
  local_78 = &PTR_FUN_14a8a89c0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_98 = 0xffff;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_c8 = *(byte *)(lStack_f0 + 0xa4) >> 1 & 1;
  local_f8 = *(undefined8 *)(lStack_f0 + 0x68);
  local_c0 = *(longlong *)(param_1 + 0x48);
  if (local_c0 == 0) {
    local_c0 = FUN_14479d2ce(param_1 + 0xd8);
  }
  local_d8 = &local_78;
  local_a0 = param_2;
  uVar5 = FUN_140af1eea(uVar3,**(undefined8 **)(param_1 + 0x30),&local_118,param_2);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_38;
  local_78 = &PTR_FUN_14a8a89c0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af1eea FUN_140af1eea body=536 status=ok
// SIG undefined FUN_140af1eea(void)

ulonglong FUN_140af1eea(longlong param_1,longlong param_2,void *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_138 [40];
  void *local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  undefined1 local_e8 [48];
  longlong local_b8;
  undefined8 local_b0;
  byte local_9f;
  byte local_9d;
  undefined2 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    uVar4 = FUN_140af2104(param_2 + 0x20,param_4,*(undefined8 *)((longlong)param_3 + 0x58));
    uVar6 = (ulonglong)uVar4;
    if ((*(longlong *)((longlong)param_3 + 0x58) != 0 && *(longlong *)(param_1 + 0x58) != 0) &&
       (local_f8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x58) + 8), local_f8 != 0)) {
      lVar9 = 0;
      uVar8 = 0;
      local_108 = *(longlong *)((longlong)param_3 + 0x58);
      local_100 = param_1;
      do {
        lVar1 = *(longlong *)(local_100 + 0x28);
        uVar5 = (ulonglong)((uint)*(ushort *)(**(longlong **)(local_100 + 0x58) + lVar9) * 0x30);
        lVar2 = *(longlong *)(lVar1 + uVar5);
        local_f0 = *(longlong **)(*(longlong *)(lVar2 + 0x70) + 0xb8);
        memcpy(local_e8,param_3,0x82);
        local_60 = (void *)0x0;
        local_58 = *(int *)((longlong)param_3 + 0x90);
        lVar7 = (longlong)local_58;
        if (lVar7 == 0) {
          local_54 = 0;
        }
        else {
          local_110 = *(void **)((longlong)param_3 + 0x88);
          FUN_1446dd670(&local_60,local_58,0);
          memcpy(local_60,local_110,lVar7 * 2);
        }
        local_50 = *(undefined4 *)((longlong)param_3 + 0x98);
        local_b0 = *(undefined8 *)(lVar2 + 0x70);
        local_b8 = *(int *)(lVar1 + uVar5 + 0x14) + local_108;
        local_68 = (undefined2)uVar8;
        local_9d = 0;
        local_9f = 0;
        bVar3 = (**(code **)(*local_f0 + 0x48))(local_f0,local_e8);
        *(byte *)((longlong)param_3 + 0x4b) = *(byte *)((longlong)param_3 + 0x4b) | local_9d;
        *(byte *)((longlong)param_3 + 0x49) = *(byte *)((longlong)param_3 + 0x49) | local_9f;
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar3);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
      } while (local_f8 != uVar8);
    }
  }
  else {
    uVar6 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 140af2104 FUN_140af2104 body=863 status=ok
// SIG undefined FUN_140af2104(void)

ulonglong FUN_140af2104(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    uVar20 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar13 = 0;
  }
  else {
    puVar22 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar22 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar22;
    if (uVar15 == 0) {
      iVar5 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar5 = iVar1 + -1;
      }
      uVar14 = 0;
      uVar20 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar20 = uVar14;
      }
      iVar13 = 0;
      do {
        if (uVar20 == uVar14) goto LAB_140af2385;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar22[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar14 = 0;
      iVar13 = 0;
    }
    uVar20 = (ulonglong)(-uVar15 & uVar15);
    uVar21 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar5 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
  }
  if (iVar5 == iVar1) {
LAB_140af2385:
    uVar21 = 0;
  }
  else {
    uVar15 = 0xffffffff;
    uVar21 = 0;
    do {
      lVar17 = *param_1;
      lVar16 = (longlong)iVar5 * 0xe0;
      lVar18 = *(longlong *)(lVar17 + 200 + lVar16);
      if (lVar18 == 0) {
        lVar18 = lVar17 + lVar16;
        if (*(int *)(lVar18 + 0x70) != *(int *)(lVar18 + 0x9c)) {
          lVar3 = *param_2;
          lVar19 = lVar18 + 0xa0;
          if (*(longlong *)(lVar18 + 0xa8) != 0) {
            lVar19 = *(longlong *)(lVar18 + 0xa8);
          }
          iVar5 = *(int *)(lVar19 + (ulonglong)
                                    (*(int *)(lVar18 + 0xb0) - 1U &
                                    (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
          if (iVar5 != -1) {
            puVar22 = (uint *)(lVar17 + lVar16 + 8);
            lVar17 = *(longlong *)(lVar18 + 0x68);
            do {
              if (*(longlong *)(lVar17 + (longlong)iVar5 * 0x10) == lVar3) {
                FUN_140326250((longlong *)(lVar18 + 0x68),param_2);
                FUN_140af2464(puVar22,*param_2);
                uVar21 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
                if (param_3 != (longlong *)0x0) {
                  uVar12 = *puVar22;
                  uVar7 = (**(code **)(*param_3 + 0x280))();
                  if (uVar7 < 0xffffffff00000000) {
                    plVar11 = DAT_14c9980d0;
                    if (DAT_14c9980d8 == 0) {
                      plVar11 = (longlong *)0x0;
                    }
                    (**(code **)(*plVar11 + 0x58))(plVar11,param_3,uVar7,uVar12);
                  }
                  else {
                    uVar6 = (uint)uVar7;
                    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
                      puVar10 = DAT_14c998080;
                      if (DAT_14c998080 == (undefined *)0x0) {
                        puVar10 = &DAT_14c998070;
                      }
                      if ((*(uint *)(puVar10 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) &
                          1) != 0) {
                        lVar18 = (ulonglong)(uVar6 & 0x7fffffff) * 0x68 + DAT_14c998060;
                        lVar17 = *(longlong *)(lVar18 + 0x18);
                        if (*(longlong *)(lVar18 + 0x18) == 0) {
                          lVar17 = lVar18 + 8;
                        }
                        puVar22 = (uint *)(lVar17 + (ulonglong)(uVar12 >> 3 & 0x1ffc));
                        *puVar22 = *puVar22 | 1 << ((byte)uVar12 & 0x1f);
                        *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
                      }
                    }
                  }
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar17 + 8);
            } while (iVar5 != -1);
          }
        }
      }
      else {
        bVar4 = FUN_140af2104(lVar18,param_2,param_3);
        uVar21 = CONCAT71((int7)(uVar21 >> 8),(byte)uVar21 | bVar4);
      }
      uVar15 = uVar15 & ~(uint)uVar20;
      puVar22 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar22 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar5 = (int)uVar14;
      lVar17 = (longlong)iVar5;
      uVar12 = puVar22[lVar17] & uVar15;
      if (uVar12 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar18 = 0;
          do {
            uVar12 = puVar22[lVar17 + lVar18 + 1];
            if (uVar12 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140af22c2;
            }
            iVar13 = iVar13 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar9 - lVar17 != lVar18);
          uVar15 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_140af22c2:
        uVar20 = (ulonglong)(-uVar12 & uVar12);
        uVar7 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar1);
  }
  return uVar21 & 0xffffff01;
}



// FUNCTION 140af2464 FUN_140af2464 body=206 status=ok
// SIG undefined FUN_140af2464(void)

void FUN_140af2464(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [7];
  char local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = '\0';
  local_20 = param_2;
  FUN_140325a06(param_1 + 0x10,local_28,&local_20,&local_21);
  if ((((local_21 == '\0') && (DAT_14c75f435 == '\x01')) && (*(int *)(param_1 + 0xcc) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 200), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) &&
        (((int)plVar2[2] == *(int *)(param_1 + 0xcc) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0))
        )) && ((longlong *)*plVar2 != (longlong *)0x0)) {
      plVar3 = (longlong *)0x0;
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar3 + 0x2f8))(plVar3,local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af253a FUN_140af253a body=57 status=ok
// SIG undefined FUN_140af253a(void)

void FUN_140af253a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60cd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60cd8 = FUN_140002ddd(FUN_1464efe21,uVar1,L"GbxMomentNodeSettings_PlaySequence");
  }
  return;
}



// FUNCTION 140af2573 FUN_140af2573 body=1328 status=ok
// SIG undefined FUN_140af2573(void)

void FUN_140af2573(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  float local_dc;
  char local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  float local_ac;
  char local_a8;
  code *local_a0 [2];
  longlong *local_90;
  undefined4 local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = FUN_1447262c2();
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_120 = local_a0;
      local_a0[0] = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_1459f2e4c;
      local_128 = &LAB_148c39de3;
      local_130 = &LAB_1457a9eb2;
      local_138 = &DAT_149e063b2;
      local_140 = 0;
      local_148 = 0x10000004;
      local_150 = 0x10;
      local_158 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_178);
    }
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0x3f800000;
  local_b0 = 0;
  local_ac = 0.0;
  local_a8 = '\0';
  local_100 = param_2;
  plVar6 = (longlong *)FUN_1447262c2(param_1);
  if (((plVar6 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar6 + 0x180))(plVar6), lVar5 != 0))
     && (0 < *(int *)(lVar5 + 0x238))) {
    uVar10 = 0;
    bVar9 = false;
LAB_140af2672:
    uVar8 = uVar10 & 0xffffffff;
    do {
      uVar10 = uVar10 + 1;
      iVar2 = *(int *)(*(longlong *)(lVar5 + 0x230) + -4 + uVar10 * 8);
      if (((((iVar2 != 0) &&
            (uVar7 = *(uint *)(*(longlong *)(lVar5 + 0x230) + -8 + uVar10 * 8), -1 < (int)uVar7)) &&
           (((int)uVar7 < DAT_14c9647dc &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar2)))))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar6, lVar3 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_a0[0] = FUN_141030f22;
          local_110 = FUN_14081d0ea;
          local_118 = &LAB_1459f2e4c;
          local_128 = &LAB_148c39de3;
          local_130 = &LAB_1457a9eb2;
          local_138 = &DAT_149e063b2;
          local_140 = 0;
          local_148 = 0x10000004;
          local_150 = 0x10;
          local_158 = 0x3de0;
          local_120 = local_a0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30))
        goto code_r0x000140af2719;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if (*(int *)(lVar5 + 0x238) <= (int)uVar7) {
        if (bVar9) goto LAB_140af2849;
        break;
      }
    } while( true );
  }
  FUN_140af2b35(param_1,local_100);
LAB_140af285b:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140af2719:
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0x3f800000;
  local_e0 = 0;
  local_dc = 0.0;
  local_d8 = '\0';
  local_a0[0] = (code *)((ulonglong)local_a0[0] & 0xffffffffffffff00);
  local_78[0] = 0;
  FUN_1456bb102(local_a0,lVar3);
  FUN_140af2b35(local_a0,&local_f8);
  FUN_1448173f8(local_78);
  if (((char)local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  fVar11 = local_dc;
  cVar4 = local_d8;
  if (local_d8 == '\x01') {
    fVar11 = (((float)local_f8 + 1.0) / (1.0 - local_f8._4_4_)) * (float)local_e8 *
             (local_e8._4_4_ + (float)uStack_f0) + uStack_f0._4_4_;
    cVar4 = '\0';
  }
  if (local_a8 == '\x01') {
    local_ac = (((float)local_c8 + 1.0) / (1.0 - local_c8._4_4_)) * (float)local_b8 *
               (local_b8._4_4_ + (float)uStack_c0) + uStack_c0._4_4_;
    local_a8 = '\0';
  }
  if (local_ac < fVar11) {
    local_c8 = local_f8;
    uStack_c0 = uStack_f0;
    local_b8 = local_e8;
    local_b0 = local_e0;
    local_ac = fVar11;
    local_a8 = cVar4;
  }
  bVar9 = true;
  if (*(int *)(lVar5 + 0x238) <= (int)uVar10) goto LAB_140af2849;
  goto LAB_140af2672;
LAB_140af2849:
  FUN_140af2ad2(local_100,&local_c8);
  goto LAB_140af285b;
}



// FUNCTION 140af2ad2 FUN_140af2ad2 body=99 status=ok
// SIG undefined FUN_140af2ad2(void)

void FUN_140af2ad2(float *param_1,float *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  param_1[4] = param_2[4] * param_1[4];
  if (*(char *)(param_2 + 6) == '\x01') {
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 140af2b35 FUN_140af2b35 body=292 status=ok
// SIG undefined FUN_140af2b35(void)

void FUN_140af2b35(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140af2f8c();
  if ((longlong)*(int *)(lVar3 + 0x28) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x20);
    lVar3 = (longlong)*(int *)(lVar3 + 0x28) * 0x18;
    do {
      lVar6 = plVar7[1];
      if (lVar6 == 0) {
        uVar4 = FUN_145d863b2();
        lVar6 = FUN_14477b664(uVar4);
        plVar7[1] = lVar6;
      }
      lVar5 = plVar7[2];
      if (lVar5 == 0) {
        if ((lVar6 != 0) && (*plVar7 != 0)) {
          plVar1 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar7[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar4,plVar7);
            plVar7[2] = lVar5;
            if (lVar5 != 0) goto LAB_140af2b8c;
          }
        }
      }
      else {
LAB_140af2b8c:
        local_3c = 0;
        cVar2 = FUN_140af2cf8(lVar5,param_1,&local_3c);
        if (cVar2 != '\0') {
          FUN_140af2c5a(param_2,*(undefined1 *)(lVar5 + 0x18),local_3c);
        }
      }
      plVar7 = plVar7 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af2c5a FUN_140af2c5a body=158 status=ok
// SIG undefined FUN_140af2c5a(void)

void FUN_140af2c5a(float *param_1,char param_2,float param_3)

{
  if (param_2 == '\0') {
    if ((param_3 != 0.0) || (NAN(param_3))) {
      *(undefined1 *)(param_1 + 8) = 1;
      if (param_3 <= 0.0) {
        param_1[1] = param_3 + param_1[1];
        return;
      }
      *param_1 = param_3 + *param_1;
      return;
    }
  }
  else {
    switch(param_2) {
    case '\x01':
      if ((param_3 != 0.0) || (NAN(param_3))) {
        *(undefined1 *)(param_1 + 8) = 1;
        param_1[2] = param_3 + param_1[2];
        return;
      }
      break;
    case '\x02':
      if ((param_3 != 0.0) || (NAN(param_3))) {
        *(undefined1 *)(param_1 + 8) = 1;
        param_1[3] = param_3 + param_1[3];
        return;
      }
      break;
    case '\x03':
      if ((param_3 != 1.0) || (NAN(param_3))) {
        *(undefined1 *)(param_1 + 8) = 1;
        param_1[4] = param_3 * param_1[4];
        return;
      }
      break;
    case '\x04':
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 6) = 1;
      param_1[5] = param_3;
    }
  }
  return;
}



// FUNCTION 140af2cf8 FUN_140af2cf8 body=659 status=ok
// SIG undefined FUN_140af2cf8(void)

ulonglong FUN_140af2cf8(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong unaff_RBP;
  code ****ppppcVar5;
  undefined4 uVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code ***local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  code ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = FUN_1447262c2(param_2);
  if (lVar3 == 0) {
LAB_140af2d63:
    lVar3 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_b0 = (code ***)local_68;
      local_68[0] = (code ***)FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1459f2e4c;
      local_b8 = &LAB_148c39de3;
      local_c0 = &LAB_1457a9eb2;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140af2d63;
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (lVar3 == 0) goto LAB_140af2e20;
    unaff_RBP = 0;
    lVar3 = FUN_14418dfb2(lVar3 + 0x2788,param_1,0);
    if (lVar3 == 0) goto LAB_140af2e22;
    *param_3 = *(undefined4 *)(lVar3 + 0x1c);
  }
  else {
    if (*(char *)(param_1 + 0x19) != '\x01') {
LAB_140af2e20:
      unaff_RBP = 0;
      goto LAB_140af2e22;
    }
    puVar4 = &local_90;
    FUN_140168de2(param_1 + 0x20,puVar4,param_2);
    if (local_70 == 3) {
      uVar2 = 3;
      uVar6 = local_90;
    }
    else {
      FUN_1400b56fe(local_68,&local_90,3);
      uVar6 = 0;
      if (local_48 != 0) {
        uVar6 = local_68[0]._0_4_;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppcVar5 = local_68;
        if (0x18 < local_50) {
          ppppcVar5 = (code ****)local_68[0];
        }
        (*pcVar1)(ppppcVar5);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      uVar2 = (uint)local_70;
    }
    *param_3 = uVar6;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_78) {
        puVar4 = (undefined4 *)CONCAT44(uStack_8c,local_90);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_78) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_140af2e22:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af2f8c FUN_140af2f8c body=347 status=ok
// SIG undefined FUN_140af2f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140af2f8c(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcce10 == (longlong *)0x0) {
    _DAT_14cbcce40 = 0;
    _DAT_14cbcce48 = 0;
    _DAT_14cbcce30 = 0;
    _DAT_14cbcce38 = 0;
    DAT_14cbcce20 = 0;
    _DAT_14cbcce28 = 0;
    _DAT_14cbcce50 = 0;
    _DAT_14cbcce18 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14cbcce20);
    _DAT_14cbcce30 = CONCAT44(DAT_14cbcce30_4,0xffffffff);
    _DAT_14cbcce18 = &PTR_FUN_14b6a0f60;
    _DAT_14cbcce38 = 0;
    _DAT_14cbcce40 = 0;
    _DAT_14cbcce48 = 0;
    _DAT_14cbcce50 = 0;
    DAT_14cbcce10 = (longlong *)&DAT_14cbcce18;
  }
  plVar1 = DAT_14cbcce10;
  plVar3 = DAT_14cbcce10 + 1;
  if ((char)DAT_14cbcce10[2] == '\0') {
LAB_140af2fc2:
    if (*plVar3 == 0) goto LAB_140af3089;
    cVar2 = FUN_1449e3c20(DAT_14cbcce10);
    if (cVar2 == '\0') goto LAB_140af2fdc;
  }
  else {
    if ((char)DAT_14cbcce10[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140af2fc2;
    }
LAB_140af3089:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_140af2fdc;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"def_globals_luck",0);
    FUN_140024ada(&local_58,plVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140af2fdc:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af30e8 FUN_140af30e8 body=210 status=ok
// SIG undefined FUN_140af30e8(void)

void FUN_140af30e8(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  bVar4 = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adbe510;
  puVar3[2] = param_1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  bVar1 = *(byte *)(param_1 + 0x48);
  *(bool *)(puVar3 + 3) = (bVar1 & 0xfd) == 1;
  if ((bVar1 & 0xfe) == 2) {
    bVar4 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)puVar3 + 0x19) = bVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != puVar3) && (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar2 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 140af31ba FUN_140af31ba body=344 status=ok
// SIG undefined FUN_140af31ba(void)

void FUN_140af31ba(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = *(code **)(*(longlong *)param_1[2] + 0x390);
  if (pcVar2 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar2)((longlong *)param_1[2],param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar3 = param_1[2];
    lVar4 = FUN_14117954a();
    if (lVar3 != lVar4) {
      local_28 = param_1[2];
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      local_20 = 1;
      local_1e = 0;
      local_1c = 0xffffffff;
      FUN_140c6bd52(&local_28,0x1f);
    }
  }
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) &&
     (uVar1 = *(uint *)(param_1 + 6), *(uint *)(param_1 + 6) = uVar1 | 1, (~uVar1 & 4) == 0)) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af3314 FUN_140af3314 body=37 status=ok
// SIG undefined FUN_140af3314(void)

void FUN_140af3314(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x210);
  FUN_140af333a(param_2);
  return;
}



// FUNCTION 140af333a FUN_140af333a body=310 status=ok
// SIG undefined FUN_140af333a(void)

void FUN_140af333a(undefined8 *param_1)

{
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0x3ff0000000000000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x39] = 0;
  *param_1 = &PTR_FUN_14a890400;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}



// FUNCTION 140af3470 FUN_140af3470 body=118 status=ok
// SIG undefined FUN_140af3470(void)

void FUN_140af3470(longlong param_1)

{
  FUN_140af34e6(param_1 + 0x5e0);
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FUN_140896ad0(param_1 + 0x6a0);
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  FUN_140af34e6(param_1 + 0x6d0);
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FUN_140896ad0(param_1 + 0x790);
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0;
  }
  return;
}



// FUNCTION 140af34e6 FUN_140af34e6 body=244 status=ok
// SIG undefined FUN_140af34e6(void)

void FUN_140af34e6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0xd0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      local_40 = lVar3;
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x20) == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 8);
        }
        if (*(longlong *)(lVar3 + 0x30) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 8);
        }
        if (lVar4 != 0) {
          lVar5 = lVar4;
        }
        if (lVar5 == 0) {
          FUN_142b4e8f4(lVar3);
          FUN_1400020a8(lVar3);
        }
        else {
          FUN_14711a74c(lVar5,&local_40);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_1462b4164(param_1 + 200,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af35dc FUN_140af35dc body=357 status=ok
// SIG undefined FUN_140af35dc(void)

void FUN_140af35dc(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = param_3;
  if (param_3 == 0) {
    return;
  }
LAB_140af35fa:
  lVar2 = lVar1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x000140af3609;
  goto LAB_140af3618;
code_r0x000140af3609:
  lVar1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_140af3618:
    if (lVar1 != 0) {
      lVar1 = FUN_140af3742();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
        lVar1 = FUN_140af3828();
        if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
          return;
        }
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30) {
          return;
        }
        if (*param_2 == DAT_14c965758) {
          *(float *)(param_3 + 0x28) = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94);
          fVar3 = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x98);
        }
        else {
          if (*param_2 != DAT_14c9657a0) {
            return;
          }
          *(float *)(param_3 + 0x28) = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xa4);
          fVar3 = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xa8);
        }
        fVar3 = fVar3 + fVar3;
      }
      else if (*param_2 == DAT_14c965758) {
        *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x8c);
        fVar3 = 1.0 - *(float *)(param_1 + 0x90);
      }
      else {
        if (*param_2 != DAT_14c9657a0) {
          return;
        }
        *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x9c);
        fVar3 = 1.0 - *(float *)(param_1 + 0xa0);
      }
      *(float *)(param_3 + 0x2c) = fVar3;
      return;
    }
    lVar1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_140af35fa;
}



// FUNCTION 140af3742 FUN_140af3742 body=228 status=ok
// SIG undefined FUN_140af3742(void)

longlong FUN_140af3742(void)

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
  if (DAT_14cb27300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14181c830;
    local_38 = &LAB_147f9e879;
    local_40 = FUN_1438bf3cb;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputModifierDeadZone",&DAT_14cb27300,&DAT_147f9e878);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af3828 FUN_140af3828 body=228 status=ok
// SIG undefined FUN_140af3828(void)

longlong FUN_140af3828(void)

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
  if (DAT_14cb91490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14181c830;
    local_38 = &LAB_1489f205d;
    local_40 = FUN_146569287;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxInputModifier_AxialDeadZone",&DAT_14cb91490,
                  &DAT_1489f205c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af390e FUN_140af390e body=674 status=ok
// SIG undefined FUN_140af390e(void)

void FUN_140af390e(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [24];
  undefined2 local_130 [20];
  undefined2 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined2 local_d0;
  undefined1 local_c8;
  char local_c0;
  undefined2 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined2 local_60;
  undefined1 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  switch(*(undefined1 *)(param_1 + 0x50)) {
  case 1:
    if (*(char *)(param_1 + 0x29) == '\x02') {
      plVar2 = (longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        plVar2 = (longlong *)(param_1 + 0x148);
      }
      if ((*plVar2 != 0) && (*(char *)(*plVar2 + 0x30) == '\x02')) {
        *(undefined1 *)(param_1 + 0x28) = 2;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
    }
    break;
  case 2:
  case 7:
    cVar1 = FUN_140af3bf8(param_1);
    if (cVar1 != '\0') {
      FUN_140af3cd6(param_1);
      memset(local_148,0,0x128);
      local_130[0] = 0x101;
      local_108 = 4;
      local_f8 = (DAT_14c9a8634 & 0x20) == 0;
      local_100 = 1;
      local_d0 = 4;
      local_e8 = 0x40200000;
      local_c8 = 3;
      local_c0 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
      local_98 = 4;
      local_90 = 1;
      local_60 = 4;
      local_78 = 0x40200000;
      local_58 = 3;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = 1;
      local_88 = local_f8;
      local_50 = local_c0;
      FUN_140af3c70(param_1,local_148);
      FUN_140b970fc(local_130);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x29) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      if (((*(longlong *)(param_1 + 0x270) != 0) &&
          (lVar3 = *(longlong *)(param_1 + 0x128), lVar3 != 0)) &&
         ((longlong)*(int *)(lVar3 + 0x38) != 0)) {
        plVar2 = *(longlong **)(lVar3 + 0x30);
        lVar3 = (longlong)*(int *)(lVar3 + 0x38) * 0xf8;
        do {
          if (*plVar2 == *(longlong *)(param_1 + 0x270)) break;
          plVar2 = plVar2 + 0x1f;
          lVar3 = lVar3 + -0xf8;
        } while (lVar3 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
    }
    break;
  case 4:
    cVar1 = FUN_140af3bf8(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
    }
    break;
  case 5:
  case 6:
  case 8:
    cVar1 = FUN_140af3bf8(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af3bf8 FUN_140af3bf8 body=119 status=ok
// SIG undefined FUN_140af3bf8(void)

byte FUN_140af3bf8(longlong param_1)

{
  byte bVar1;
  
  bVar1 = 1;
  if (((((*(longlong *)(param_1 + 0x110) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
       (*(longlong *)(param_1 + 0x120) != 0)) &&
      ((*(longlong *)(param_1 + 0x130) != 0 && (*(longlong *)(param_1 + 0x128) != 0)))) &&
     ((*(longlong *)(param_1 + 0x138) != 0 &&
      ((*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x110) != 0 &&
       (*(longlong *)(param_1 + 0x390) != 0)))))) {
    bVar1 = FUN_14489e746(*(longlong *)(param_1 + 0x130),*(longlong *)(param_1 + 0x128) + 0xb8,
                          *(longlong *)(param_1 + 0x390),0);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 140af3c70 FUN_140af3c70 body=102 status=ok
// SIG undefined FUN_140af3c70(void)

void FUN_140af3c70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x270);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\x01')) {
    FUN_147f4ab24(param_1,lVar1 + 0x50);
  }
  lVar1 = *(longlong *)(param_2 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\x01')) {
    FUN_147f4aa32(param_1,lVar1 + 0x50);
  }
  FUN_140f0aa74(param_1 + 0x268,param_2);
  FUN_14386d9ee(param_1);
  return;
}



// FUNCTION 140af3cd6 FUN_140af3cd6 body=1408 status=ok
// SIG undefined FUN_140af3cd6(void)

void FUN_140af3cd6(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((param_1[0x22] == 0) || (param_1[0x23] == 0)) || (param_1[0x24] == 0)) ||
     (((param_1[0x26] == 0 || (lVar6 = param_1[0x25], lVar6 == 0)) ||
      ((param_1[0x27] == 0 ||
       ((*(longlong *)(param_1[0x27] + 0x110) == 0 || ((char)param_1[10] == (char)param_2))))))))
  goto LAB_140af41c4;
  plVar16 = (longlong *)0x0;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_a8 = 0x3dcccccd;
  local_a4 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x3dcccccd;
  local_84 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  local_c0 = *(undefined8 *)(lVar6 + 0xb8);
  if (param_1[0x4e] != 0) {
    if ((longlong)*(int *)(lVar6 + 0x38) != 0) {
      plVar16 = *(longlong **)(lVar6 + 0x30);
      lVar6 = (longlong)*(int *)(lVar6 + 0x38) * 0xf8;
      do {
        if (*plVar16 == param_1[0x4e]) goto LAB_140af3e1d;
        plVar16 = plVar16 + 0x1f;
        lVar6 = lVar6 + -0xf8;
      } while (lVar6 != 0);
    }
    plVar16 = (longlong *)0x0;
  }
LAB_140af3e1d:
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar5 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar5;
  }
  else {
    bVar11 = false;
    do {
      lVar6 = uVar7 * 0x10 + -8;
      uVar15 = uVar7;
      while (((*(int *)(*param_1 + lVar6) != 0 &&
              (plVar1 = *(longlong **)(*param_1 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2), cVar4 != '\0'))) {
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar15 < 2;
        uVar15 = uVar15 - 1;
        if (bVar2) {
          iVar5 = *(int *)((longlong)param_1 + 0x14) + -1;
          *(int *)((longlong)param_1 + 0x14) = iVar5;
          if (bVar11) goto LAB_140af3e8d;
          goto LAB_140af3ef6;
        }
      }
      uVar7 = uVar15 - 1;
      bVar11 = true;
    } while (1 < uVar15);
    iVar5 = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)((longlong)param_1 + 0x14) = iVar5;
LAB_140af3e8d:
    if (iVar5 < 1) {
      iVar5 = (int)param_1[1];
      iVar9 = iVar5;
      if (0 < iVar5) {
        iVar13 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar13 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(*param_1 + (longlong)iVar13 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar1 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(param_1,iVar13);
            FUN_14005b248(param_1);
          }
          else {
            iVar13 = iVar13 + 1;
          }
          iVar9 = (int)param_1[1];
        } while (iVar13 < iVar9);
      }
      iVar13 = 2;
      if (2 < iVar9 * 2) {
        iVar13 = iVar9 * 2;
      }
      *(int *)(param_1 + 2) = iVar13;
      if ((iVar13 < iVar5) && (*(int *)((longlong)param_1 + 0xc) != iVar9)) {
        FUN_14045812c(param_1);
      }
    }
  }
LAB_140af3ef6:
  uVar12 = 1;
  uVar10 = 2;
  lVar6 = local_b8;
  switch(param_2 & 0xff) {
  case 1:
    if ((*(byte *)(param_1 + 10) & 0xf7) != 0) {
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    }
    if (param_1[0x4d] != 0) {
      local_68 = 2;
      lVar3 = param_1[0x25];
      if (*(char *)(param_1[0x4d] + 0x62a) == '\x01') {
        lVar6 = *(longlong *)(lVar3 + 0xc0);
        if (DAT_14c950c29 != '\0') {
          if (lVar6 == 0) {
LAB_140af4187:
            local_68 = 2;
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *(longlong *)(lVar3 + 0xc0);
          }
        }
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 200);
        if (DAT_14c950c29 != '\0') {
          if (lVar6 == 0) goto LAB_140af4187;
          FUN_1456cec3c();
          lVar6 = *(longlong *)(lVar3 + 200);
        }
      }
LAB_140af4189:
      uVar12 = 2;
      uVar10 = 1;
    }
    break;
  case 2:
    if (param_1[0x4d] != 0) {
      local_68 = 0;
      plVar16 = (longlong *)param_1[0x25];
      if (*(char *)(param_1[0x4d] + 0x62a) == '\x01') {
        lVar6 = plVar16[0x1a];
        if (DAT_14c950c29 != '\0') {
          if (plVar16[0x1a] == 0) goto LAB_140af41a6;
          plVar16 = plVar16 + 0x1a;
          goto LAB_140af41f7;
        }
      }
      else {
        lVar6 = plVar16[0x1b];
        if (DAT_14c950c29 != '\0') goto LAB_140af41a1;
      }
    }
    break;
  case 3:
    if (plVar16 != (longlong *)0x0) {
      local_68 = 2;
      lVar6 = plVar16[0x1a];
      if (DAT_14c950c29 == '\x01') {
        if (lVar6 == 0) goto LAB_140af4187;
        FUN_1456cec3c();
        lVar6 = plVar16[0x1a];
      }
      goto LAB_140af4189;
    }
    break;
  case 4:
    if (plVar16 != (longlong *)0x0) {
      local_68 = 1;
      lVar6 = plVar16[0x18];
      if (DAT_14c950c29 == '\x01') {
        if (plVar16[0x18] == 0) goto LAB_140af41a6;
        plVar16 = plVar16 + 0x18;
LAB_140af41f7:
        FUN_1456cec3c();
        lVar6 = *plVar16;
      }
    }
    break;
  case 5:
    if (plVar16 != (longlong *)0x0) {
      local_68 = 1;
      lVar6 = plVar16[0x19];
      if (DAT_14c950c29 == '\x01') {
        if (plVar16[0x19] == 0) goto LAB_140af41a6;
        plVar16 = plVar16 + 0x19;
        goto LAB_140af41f7;
      }
    }
    break;
  case 6:
    if ((plVar16 != (longlong *)0x0) && (lVar3 = plVar16[0x1e], 0 < (int)lVar3)) {
      local_68 = 1;
      uVar8 = *(int *)((longlong)param_1 + 0x4d4) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)param_1 + 0x4d4) = uVar8;
      lVar14 = (longlong)(int)((float)(int)lVar3 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0));
      lVar3 = plVar16[0x1d];
      lVar6 = *(longlong *)(lVar3 + lVar14 * 8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *(longlong *)(lVar3 + lVar14 * 8);
        }
      }
      uVar12 = 2;
      uVar10 = 1;
      if ((((param_1[0x24] != 0) && (*(char *)(param_1[0x24] + 0x178) == '\x03')) &&
          (*(undefined4 *)(param_1 + 0x73) = *(undefined4 *)((longlong)param_1 + 0x4d4),
          param_1[0x22] != 0)) && ((longlong *)param_1[0x23] != (longlong *)0x0)) {
        local_b8 = lVar6;
        (**(code **)(*(longlong *)param_1[0x23] + 0x20))();
        lVar6 = local_b8;
      }
    }
    break;
  case 7:
    if (plVar16 != (longlong *)0x0) {
      local_68 = 0;
      lVar6 = plVar16[0x1b];
      if (DAT_14c950c29 == '\x01') {
LAB_140af41a1:
        local_68 = 0;
        if (lVar6 != 0) {
          plVar16 = plVar16 + 0x1b;
          goto LAB_140af41f7;
        }
LAB_140af41a6:
        lVar6 = 0;
      }
    }
  }
  local_b8 = lVar6;
  local_90 = uVar10;
  local_70 = uVar12;
  FUN_14386dc4e(param_1,param_2);
LAB_140af41c4:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af4260 FUN_140af4260 body=476 status=ok
// SIG undefined FUN_140af4260(void)

void FUN_140af4260(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b127a60;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x17] = DAT_14c8464e0;
  param_1[0x18] = uVar1;
  param_1[0x19] = DAT_14c8464f0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1a;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar2 = 0x160;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xc) = 0x44bb800043fa0000;
    *(undefined1 *)((longlong)param_1 + lVar2 + -4) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x1c0);
  lVar2 = 0x1bc;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -0xc) = 2;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + -4) = 2;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x20c);
  param_1[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x40] = DAT_14c8464e0;
  param_1[0x41] = uVar1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x6000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x55000000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x55000000;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x46c35000;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x46c35000;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined4 *)((longlong)param_1 + 500) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x46c35000;
  return;
}



// FUNCTION 140af443c FUN_140af443c body=1712 status=ok
// SIG undefined FUN_140af443c(void)

void FUN_140af443c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_d4;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1405f1eac();
  lVar8 = *(longlong *)(param_1 + 0x3a8);
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x9c) & 8) == 0)) {
    FUN_141062a52(lVar8,0);
  }
  lVar8 = FUN_1447210f0(param_1);
  if (lVar8 == 0) goto LAB_140af4642;
  FUN_1408b794c(&local_b8,lVar8);
  plVar12 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar12 == (longlong *)0x0) goto LAB_140af4642;
  iVar7 = (int)plVar12[1];
  do {
    if (iVar7 == 0) {
      plVar12 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar11 = (int)plVar12[1];
    bVar17 = iVar7 == iVar11;
    if (bVar17) {
      *(int *)(plVar12 + 1) = iVar7 + 1;
      iVar11 = iVar7;
    }
    iVar7 = iVar11;
    UNLOCK();
  } while (!bVar17);
  LOCK();
  piVar1 = (int *)((longlong)CONCAT44(uStack_ac,local_b0) + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_ac,local_b0) + 0x10))();
  }
  lVar8 = (longlong)local_b8;
  if (plVar12 == (longlong *)0x0) goto LAB_140af4642;
  if (local_b8 != (code *)0x0) {
    if (param_1 == 0) {
      local_b8._0_4_ = 0;
      iVar7 = 0;
      uVar16 = (uint)local_b8;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0xc);
      local_b8 = (code *)(ulonglong)uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar7 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar7 = *(int *)(lVar15 + 0x10);
        bVar17 = iVar7 == 0;
        if (bVar17) {
          *(int *)(lVar15 + 0x10) = iVar11;
          iVar7 = 0;
        }
        UNLOCK();
        uVar16 = (uint)local_b8;
        if (bVar17) {
          iVar7 = iVar11;
        }
      }
    }
    local_b8._0_4_ = uVar16;
    local_b8 = (code *)CONCAT44(iVar7,(uint)local_b8);
    if ((longlong)*(int *)(lVar8 + 0x58) != 0) {
      lVar15 = *(longlong *)(lVar8 + 0x50);
      lVar14 = (longlong)*(int *)(lVar8 + 0x58) << 3;
      do {
        cVar6 = FUN_140af4aee(lVar15,&local_b8);
        if (cVar6 != '\0') {
          FUN_14121c652(lVar8,param_1);
          break;
        }
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    if (param_1 == 0) {
      uVar16 = 0;
      iVar7 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar7 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar7 = *(int *)(lVar15 + 0x10);
        bVar17 = iVar7 == 0;
        if (bVar17) {
          *(int *)(lVar15 + 0x10) = iVar11;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar7 = iVar11;
        }
      }
    }
    iVar11 = *(int *)(lVar8 + 0x58);
    *(uint *)(lVar8 + 0x58) = iVar11 + 1U;
    if (*(uint *)(lVar8 + 0x5c) < iVar11 + 1U) {
      FUN_14576f018(lVar8 + 0x50,iVar11);
    }
    *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar11 * 8) = CONCAT44(iVar7,uVar16);
    if ((((*(int *)(lVar8 + 0xc) != 0) && (uVar16 = *(uint *)(lVar8 + 8), -1 < (int)uVar16)) &&
        ((int)uVar16 < DAT_14c9647dc)) &&
       (((plVar10 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(lVar8 + 0xc))) &&
        (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar15 = *plVar10, lVar15 != 0)))))) {
      if (*(longlong *)(lVar8 + 0x68) == 0) {
        if (*(longlong *)(lVar15 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar15 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar15 + 0x1f0) + 0xf0);
        }
        uVar4 = *puVar9;
        local_d0 = (undefined8 *)0x0;
        local_c8 = 0;
        FUN_1446efa72(&local_d0,0,3,0x10);
        local_c8 = 3;
        plVar10 = *(longlong **)(lVar8 + 0x18);
        if (plVar10 == (longlong *)0x0) {
LAB_140af49de:
          *local_d0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          local_d0[2] = lVar13;
          *local_d0 = &PTR_FUN_14b9e1ce0;
          local_d0[3] = 0;
          local_d0[4] = 0;
          local_d0[5] = lVar8;
        }
        else {
          iVar7 = (int)plVar10[1];
          do {
            if (iVar7 == 0) goto LAB_140af49de;
            LOCK();
            iVar11 = (int)plVar10[1];
            bVar17 = iVar7 == iVar11;
            if (bVar17) {
              *(int *)(plVar10 + 1) = iVar7 + 1;
              iVar11 = iVar7;
            }
            iVar7 = iVar11;
            UNLOCK();
          } while (!bVar17);
          uVar3 = *(undefined8 *)(lVar8 + 0x10);
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          *local_d0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          local_d0[2] = lVar13;
          *local_d0 = &PTR_FUN_14b9e1ce0;
          local_d0[3] = uVar3;
          local_d0[4] = plVar10;
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          local_d0[5] = lVar8;
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        local_b8 = (code *)0x0;
        local_b0 = 0;
        FUN_14487d8d8(&local_b8,&local_d0);
        local_78 = 1;
        FUN_14016fdb0(uVar4,&local_c0,&local_b8);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
        *(ulonglong *)(lVar8 + 0x68) = CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0));
        if (local_c8 != 0) {
          if (local_d0 == (undefined8 *)0x0) goto LAB_140af462d;
          (**(code **)*local_d0)(local_d0,0);
          FUN_1446efa72(&local_d0,0,0,0x10);
          local_c8 = 0;
        }
        if (local_d0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_140af462d:
      if (*(longlong *)(lVar8 + 0x60) == 0) {
        local_d4 = 0x3f800000;
        local_e8 = &DAT_14c872ce8;
        FUN_14153841e(DAT_14c872ce0,L"WorldRegionManager",L"DiscoverRefreshRate");
        uVar5 = local_d4;
        if (*(longlong *)(lVar15 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar15 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar15 + 0x1f0) + 0xf0);
        }
        uVar4 = *puVar9;
        local_b8 = FUN_140e13c5a;
        local_b0 = 0;
        FUN_14576f09e(&local_d0,lVar8,&local_b8);
        local_b8 = (code *)0x0;
        local_b0 = 0;
        FUN_14487d8d8(&local_b8,&local_d0);
        local_78 = 1;
        local_e8 = (undefined8 *)&local_c0;
        local_c0 = 1;
        uStack_bc = 0xbf800000;
        FUN_1406f4044(uVar4,lVar8 + 0x60,&local_b8,uVar5);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
        FUN_1449db362(&local_d0);
      }
    }
  }
  LOCK();
  plVar10 = plVar12 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_140af4642:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af4aee FUN_140af4aee body=104 status=ok
// SIG undefined FUN_140af4aee(void)

ulonglong FUN_140af4aee(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140af4b56 FUN_140af4b56 body=132 status=ok
// SIG undefined FUN_140af4b56(void)

void FUN_140af4b56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  code **local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1416a9fc6();
  local_40 = &local_58;
  local_38 = &local_48;
  local_48 = FUN_142adec44;
  local_28 = &local_38;
  local_30 = &LAB_142aea360;
  local_58 = param_1;
  local_50 = param_2;
  FUN_1415625f6(param_3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af4bdc FUN_140af4bdc body=4774 status=ok
// SIG undefined FUN_140af4bdc(void)

void FUN_140af4bdc(longlong *param_1,longlong *param_2,longlong **param_3,longlong *param_4,
                  longlong param_5,longlong param_6,int param_7,longlong *param_8)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  char cVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined4 *puVar26;
  int iVar27;
  int iVar28;
  longlong **pplVar29;
  int iVar30;
  longlong *plVar31;
  int iVar32;
  longlong **pplVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  longlong **pplVar38;
  ulonglong uVar39;
  bool bVar40;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  longlong *local_3e8;
  uint local_3dc;
  longlong **local_3d8;
  int local_3cc;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  ulonglong local_3b0;
  int local_3a4;
  longlong *local_3a0;
  longlong local_398;
  longlong **local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  longlong *local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_33c [4];
  longlong *local_338 [2];
  longlong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  longlong *local_2d8;
  longlong *plStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  longlong local_298;
  int local_290;
  longlong *local_288;
  longlong local_278;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_3d8 = param_3;
  if (param_7 == 0) {
    FUN_1413f4b02(param_1);
  }
  local_3b8 = param_2 + 2;
  local_2d8 = (longlong *)&DAT_100000000;
  local_2c8 = (longlong *)&DAT_ffffffff;
  local_2c0 = (ulonglong)local_2c0._4_4_ << 0x20;
  local_3a0 = param_4;
  plStack_2d0 = local_3b8;
  if ((int)param_2[5] == 0) {
    uVar39 = 1;
    local_3dc = 0xffffffff;
    iVar19 = 0;
    iVar32 = 0;
    iVar30 = 0;
    local_3b0 = 0;
  }
  else {
    FUN_1449c0562(&local_2d8);
    local_3b0 = (ulonglong)local_2d8 & 0xffffffff;
    uVar39 = (ulonglong)local_2d8 >> 0x20;
    local_3dc = (uint)local_2c8;
    iVar19 = (int)param_2[5];
    iVar30 = local_2c8._4_4_;
    iVar32 = (int)local_2c0;
  }
  local_3e8 = param_1;
  if (iVar30 != iVar19 || plStack_2d0 != local_3b8) {
    local_398 = param_6 + 0x48;
    plVar31 = plStack_2d0;
    local_3cc = iVar19;
    local_3c8 = plStack_2d0;
    local_3c0 = param_2;
    do {
      puVar3 = *(undefined8 **)(*local_3c0 + (longlong)iVar30 * 0x10);
      if (puVar3 != (undefined8 *)0x0) {
        if (param_7 == 0) {
          bVar40 = true;
          lVar21 = 0;
        }
        else {
          local_358 = *puVar3;
          uStack_350 = puVar3[2];
          uVar20 = (uint)((ulonglong)uStack_350 >> 0x10);
          uVar35 = (uint)uStack_350 & 0xffff;
          uVar18 = (uint)((ulonglong)local_358 >> 0x10);
          uVar37 = (uint)local_358 & 0xffff;
          uVar18 = ((uint)local_358 << 0x10 | uVar37) + (int)((ulonglong)local_358 >> 0x20) +
                   (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar37 >> 4);
          iVar19 = FUN_1447fff98(param_1,(uVar18 >> 2) +
                                         (uint)uStack_350 * 0x10000 +
                                         (int)((ulonglong)uStack_350 >> 0x20) + uVar35 +
                                         (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4) +
                                         uVar18 * 0x40 + 0x9e3779b9 ^ uVar18,&local_358);
          if ((iVar19 == -1) ||
             (plVar22 = (longlong *)((longlong)iVar19 * 0x10 + *param_1), plVar22 == (longlong *)0x0
             )) {
            lVar21 = 0;
          }
          else {
            lVar21 = *plVar22;
          }
          bVar40 = lVar21 == 0;
          if ((param_7 == 1 && bVar40) || (param_7 == 3 && !bVar40)) goto LAB_140af5023;
        }
        plVar31 = local_3c8;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        if (*(int *)(param_6 + 0x18) == *(int *)(param_6 + 0x44)) {
LAB_140af50f0:
          lVar36 = 0;
        }
        else {
          lVar24 = puVar3[4];
          lVar4 = puVar3[5];
          uVar20 = (uint)((ulonglong)lVar24 >> 0x10);
          uVar37 = (uint)lVar24 & 0xffff;
          uVar18 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar35 = (uint)lVar4 & 0xffff;
          uVar20 = (int)((ulonglong)lVar24 >> 0x20) + ((uint)lVar24 << 0x10 | uVar37) +
                   (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar37 >> 4);
          lVar36 = *(longlong *)(param_6 + 0x50);
          if (*(longlong *)(param_6 + 0x50) == 0) {
            lVar36 = local_398;
          }
          iVar19 = *(int *)(lVar36 + (ulonglong)
                                     (*(int *)(param_6 + 0x58) - 1U &
                                     ((uVar20 >> 2) +
                                      ((uint)lVar4 << 0x10 | uVar35) +
                                      (int)((ulonglong)lVar4 >> 0x20) +
                                      (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar35 >> 4) +
                                      uVar20 * 0x40 + 0x9e3779b9 ^ uVar20)) * 4);
          if (iVar19 == -1) goto LAB_140af50f0;
          lVar5 = *(longlong *)(param_6 + 0x10);
          do {
            lVar34 = (longlong)iVar19 * 0x68;
            lVar36 = lVar5 + lVar34;
            if ((*(longlong *)(lVar5 + lVar34) == lVar24) &&
               (*(longlong *)(lVar5 + 8 + lVar34) == lVar4)) break;
            iVar19 = *(int *)(lVar36 + 0x60);
            lVar36 = 0;
          } while (iVar19 != -1);
        }
        lVar24 = lVar36 + 0x10;
        if (lVar36 == 0) {
          lVar24 = 0;
        }
        local_3a4 = iVar32;
        FUN_140af61de(puVar3 + 8,&local_b8,lVar24,param_6);
        if (bVar40) {
          lVar21 = FUN_14001cc68(0x70,0x10);
          FUN_1400e7d28(lVar21,puVar3);
          param_1 = local_3e8;
          local_2d8 = (longlong *)0x0;
          iVar19 = (int)uStack_b0;
          if ((int)uStack_b0 != 0) {
            local_2d8 = (longlong *)FUN_14001cc68(0x18);
            *local_2d8 = local_b8;
            local_b8 = 0;
            *(int *)(local_2d8 + 1) = iVar19;
            *(undefined4 *)((longlong)local_2d8 + 0xc) = uStack_b0._4_4_;
            uStack_b0 = 0;
            *(undefined4 *)(local_2d8 + 2) = 0;
            LOCK();
            *(undefined4 *)(local_2d8 + 2) = 1;
            UNLOCK();
          }
          FUN_14020871a(lVar21 + 0x40,&local_2d8);
          FUN_1400b4210(&local_2d8);
          FUN_140af5e84(lVar21 + 0x40);
          FUN_140af5ea4(param_1,lVar21);
          if (param_8 != (longlong *)0x0) {
            iVar19 = (int)param_8[1];
            *(uint *)(param_8 + 1) = iVar19 + 1U;
            if (*(uint *)((longlong)param_8 + 0xc) < iVar19 + 1U) {
              FUN_14701ada4(param_8,iVar19);
            }
            *(longlong *)(*param_8 + (longlong)iVar19 * 8) = lVar21;
            plVar31 = local_3c8;
            param_1 = local_3e8;
          }
        }
        else {
          FUN_1400e7d28(&local_2d8,puVar3);
          param_1 = local_3e8;
          local_318 = (code *)0x0;
          iVar19 = (int)uStack_b0;
          if ((int)uStack_b0 != 0) {
            local_318 = (code *)FUN_14001cc68(0x18);
            *(longlong *)local_318 = local_b8;
            local_b8 = 0;
            *(int *)((longlong)local_318 + 8) = iVar19;
            *(undefined4 *)((longlong)local_318 + 0xc) = uStack_b0._4_4_;
            uStack_b0 = 0;
            *(undefined4 *)((longlong)local_318 + 0x10) = 0;
            LOCK();
            *(undefined4 *)((longlong)local_318 + 0x10) = 1;
            UNLOCK();
          }
          FUN_14020871a(&local_298,&local_318);
          FUN_1400b4210(&local_318);
          local_318 = (code *)((ulonglong)local_318 & 0xffffffffffffff00);
          FUN_140af6df6(param_1,lVar21,&local_2d8,&local_318);
          if ((param_8 != (longlong *)0x0) && ((char)local_318 == '\x01')) {
            iVar19 = (int)param_8[3];
            *(uint *)(param_8 + 3) = iVar19 + 1U;
            if (*(uint *)((longlong)param_8 + 0x1c) < iVar19 + 1U) {
              FUN_14701ada4(param_8 + 2,iVar19);
            }
            *(longlong *)(param_8[2] + (longlong)iVar19 * 8) = lVar21;
            plVar31 = local_3c8;
            param_1 = local_3e8;
          }
          if (local_278 != 0) {
            FUN_1400020a8();
          }
          plVar22 = local_288;
          if (local_288 != (longlong *)0x0) {
            LOCK();
            plVar25 = local_288 + 1;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)*plVar25 == 0) {
              (**(code **)*local_288)(local_288);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
          FUN_1400b4210(&local_298);
        }
        FUN_140958ed1(local_b8,uStack_b0 & 0xffffffff);
        iVar32 = local_3a4;
        if (local_b8 != 0) {
          FUN_1400020a8();
          iVar32 = local_3a4;
        }
      }
LAB_140af5023:
      local_3dc = local_3dc & ~(uint)uVar39;
      plVar22 = (longlong *)plVar31[2];
      if ((longlong *)plVar31[2] == (longlong *)0x0) {
        plVar22 = plVar31;
      }
      iVar19 = (int)plVar31[3];
      iVar30 = (int)local_3b0;
      lVar21 = (longlong)iVar30;
      uVar20 = *(uint *)((longlong)plVar22 + lVar21 * 4) & local_3dc;
      if (uVar20 == 0) {
        iVar27 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar27 = iVar19 + -1;
        }
        iVar27 = iVar27 >> 5;
        iVar32 = iVar32 + 0x20;
        iVar28 = iVar27;
        if (iVar27 < iVar30) {
          iVar28 = iVar30;
        }
        if (iVar30 < iVar27) {
          lVar24 = 0;
          do {
            uVar20 = *(uint *)((longlong)plVar22 + lVar24 * 4 + lVar21 * 4 + 4);
            if (uVar20 != 0) {
              local_3b0 = (ulonglong)(iVar30 + (int)lVar24 + 1);
              local_3dc = 0xffffffff;
              goto LAB_140af50aa;
            }
            iVar32 = iVar32 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar28 - lVar21 != lVar24);
          local_3dc = 0xffffffff;
          iVar30 = iVar28;
        }
        local_3b0 = (ulonglong)(iVar30 + 1);
        param_1 = local_3e8;
        iVar30 = iVar19;
      }
      else {
LAB_140af50aa:
        uVar39 = (ulonglong)(-uVar20 & uVar20);
        uVar2 = uVar39 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar30 = (iVar32 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar30) {
          iVar30 = iVar19;
        }
      }
    } while (iVar30 != local_3cc || plVar31 != local_3b8);
  }
  plVar31 = local_3a0;
  iVar19 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (param_7 != 1) {
    plVar22 = local_3a0 + 2;
    local_2d8 = (longlong *)0x100000000;
    local_2c8 = (longlong *)&DAT_ffffffff;
    local_2c0 = local_2c0 & 0xffffffff00000000;
    plStack_2d0 = plVar22;
    if ((int)local_3a0[5] != 0) {
      FUN_1449c0562(&local_2d8);
      iVar19 = (int)plVar31[5];
    }
    local_300 = local_2c8;
    plVar25 = local_300;
    local_2f8 = (int)local_2c0;
    uStack_2f4 = local_2c0._4_4_;
    local_310 = (longlong **)local_2d8;
    local_308 = (longlong **)plStack_2d0;
    local_318 = (code *)plVar31;
    local_300._4_4_ = (uint)((ulonglong)local_2c8 >> 0x20);
    iVar30 = local_300._4_4_;
    if ((local_300._4_4_ != iVar19) || (local_300 = plVar25, plStack_2d0 != plVar22)) {
      do {
        local_300 = plVar25;
        local_2d8 = &local_2b8;
        local_2c8 = &local_b8;
        plVar31 = (longlong *)((longlong)iVar30 * 0x18 + *(longlong *)local_318);
        local_2c0 = local_2c0 & 0xffffffffffffff00;
        plStack_2d0 = local_2d8;
        FUN_14005eb5c(plVar31,&local_2d8);
        local_368 = local_2d8;
        local_360 = (undefined4)((ulonglong)((longlong)plStack_2d0 - (longlong)local_2d8) >> 1);
        cVar17 = FUN_14475c62c();
        if ((char)local_2c0 == '\x01') {
          FUN_1400020a8(local_2d8);
        }
        if ((param_7 == 3) && ((int)local_3e8[0x3d] != *(int *)((longlong)local_3e8 + 0x214))) {
          lVar21 = *plVar31;
          uVar20 = (uint)((ulonglong)lVar21 >> 0x10);
          uVar18 = (uint)lVar21 & 0xffff;
          plVar25 = local_3e8 + 0x43;
          if ((longlong *)local_3e8[0x44] != (longlong *)0x0) {
            plVar25 = (longlong *)local_3e8[0x44];
          }
          iVar30 = *(int *)((longlong)plVar25 +
                           (ulonglong)
                           ((int)local_3e8[0x45] - 1U &
                           (int)((ulonglong)lVar21 >> 0x20) + ((uint)lVar21 << 0x10 | uVar18) +
                           (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar18 >> 4)) * 4);
          if (iVar30 != -1) {
            do {
              plVar25 = (longlong *)(local_3e8[0x3c] + (longlong)iVar30 * 0x18);
              if (*plVar25 == lVar21) {
                if (((ulonglong)(plVar25 + 1) & 0xfffffffffffffff7) != 0) goto LAB_140af5cde;
                break;
              }
              iVar30 = (int)plVar25[2];
            } while (iVar30 != -1);
          }
        }
        if (plVar31[1] != 0) {
          if (cVar17 == '\0') {
            if ((int)local_3e8[0xb] != *(int *)((longlong)local_3e8 + 0x84)) {
              lVar21 = *plVar31;
              uVar20 = (uint)((ulonglong)lVar21 >> 0x10);
              uVar18 = (uint)lVar21 & 0xffff;
              plVar25 = local_3e8 + 0x11;
              if ((longlong *)local_3e8[0x12] != (longlong *)0x0) {
                plVar25 = (longlong *)local_3e8[0x12];
              }
              iVar30 = *(int *)((longlong)plVar25 +
                               (ulonglong)
                               ((int)local_3e8[0x13] - 1U &
                               (int)((ulonglong)lVar21 >> 0x20) + ((uint)lVar21 << 0x10 | uVar18) +
                               (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar18 >> 4)) * 4);
              if (iVar30 != -1) {
                do {
                  plVar25 = (longlong *)(local_3e8[10] + (longlong)iVar30 * 0x28);
                  if (*plVar25 == lVar21) {
                    if (((ulonglong)(plVar25 + 1) & 0xfffffffffffffff7) != 0) goto LAB_140af5bae;
                    break;
                  }
                  iVar30 = (int)plVar25[4];
                } while (iVar30 != -1);
              }
            }
          }
          else {
            local_2d8 = (longlong *)*plVar31;
            plStack_2d0 = (longlong *)0x0;
            local_2c8 = (longlong *)0x0;
            local_2c0 = 0;
            FUN_14701b82a(&local_b8,&local_390);
            lVar21 = *plVar31;
LAB_140af5bae:
            puVar26 = (undefined4 *)FUN_14700eea0(local_3e8,lVar21);
            puVar6 = (undefined4 *)plVar31[1];
            uVar7 = puVar6[1];
            uVar8 = puVar6[2];
            uVar9 = puVar6[3];
            uVar10 = puVar6[4];
            uVar11 = puVar6[5];
            uVar12 = puVar6[6];
            uVar13 = puVar6[7];
            *puVar26 = *puVar6;
            puVar26[1] = uVar7;
            puVar26[2] = uVar8;
            puVar26[3] = uVar9;
            puVar26[4] = uVar10;
            puVar26[5] = uVar11;
            puVar26[6] = uVar12;
            puVar26[7] = uVar13;
            *(undefined1 *)(puVar26 + 8) = *(undefined1 *)(puVar6 + 8);
            FUN_146ffcaac(puVar26 + 10,puVar6 + 10);
            FUN_1406fa324(puVar26 + 0x1e,puVar6 + 0x1e);
            uVar7 = puVar6[0x23];
            uVar8 = puVar6[0x24];
            uVar9 = puVar6[0x25];
            uVar23 = *(undefined8 *)(puVar6 + 0x26);
            uVar14 = *(undefined8 *)(puVar6 + 0x28);
            uVar15 = *(undefined8 *)((longlong)puVar6 + 0xa5);
            uVar16 = *(undefined8 *)((longlong)puVar6 + 0xad);
            puVar26[0x22] = puVar6[0x22];
            puVar26[0x23] = uVar7;
            puVar26[0x24] = uVar8;
            puVar26[0x25] = uVar9;
            *(undefined8 *)(puVar26 + 0x26) = uVar23;
            *(undefined8 *)(puVar26 + 0x28) = uVar14;
            *(undefined8 *)((longlong)puVar26 + 0xa5) = uVar15;
            *(undefined8 *)((longlong)puVar26 + 0xad) = uVar16;
          }
        }
LAB_140af5cde:
        local_300 = (longlong *)CONCAT44(local_300._4_4_,(uint)local_300 & ~local_310._4_4_);
        FUN_1449c0562(&local_310);
        iVar30 = local_300._4_4_;
        plVar25 = local_300;
      } while (((local_300._4_4_ != iVar19) || (local_308 != (longlong **)plVar22)) ||
              (local_318 != (code *)local_3a0));
    }
    param_1 = local_3e8;
    pplVar33 = local_3d8 + 2;
    pplVar29 = local_3d8 + 5;
    local_2b8 = 0;
    uVar20 = 0;
    local_2b0 = 0;
    local_2d8 = (longlong *)0x0;
    plStack_2d0 = (longlong *)0x0;
    local_2ac = 0xffffffff00000080;
    local_2a4 = 0;
    local_298 = 0;
    local_290 = 0;
    local_388 = pplVar33;
    if (param_7 == 3) {
      uVar20 = *(int *)(local_3d8 + 1) - *(int *)((longlong)local_3d8 + 0x34);
      if (uVar20 != 0) {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar20);
        }
        FUN_14701bd26(&local_2d8,uVar20);
        iVar19 = 1;
        if (3 < uVar20) {
          uVar20 = (uVar20 | 1) + 0xe;
          iVar19 = 0x1f;
          if (uVar20 != 0) {
            for (; uVar20 >> iVar19 == 0; iVar19 = iVar19 + -1) {
            }
          }
          iVar19 = 1 << ((byte)iVar19 & 0x1f);
        }
        if ((local_290 == 0) || (local_290 < iVar19)) {
          local_290 = iVar19;
          FUN_14701b2f4();
        }
      }
      local_390 = (longlong **)0x100000000;
      local_380._0_4_ = 0xffffffff;
      local_380._4_4_ = 0;
      local_378 = (ulonglong)local_378._4_4_ << 0x20;
      uVar20 = 0;
      if (*(int *)pplVar29 != 0) {
        FUN_1449c0562(&local_390);
        uVar20 = *(uint *)pplVar29;
      }
      local_300._0_4_ = (uint)local_380;
      local_300._4_4_ = local_380._4_4_;
      local_2f8 = (uint)local_378;
      uStack_2f4 = local_378._4_4_;
      local_310 = local_390;
      local_308 = local_388;
      local_318 = (code *)local_3d8;
      if ((local_380._4_4_ != uVar20) || (local_388 != pplVar33)) {
        do {
          pplVar29 = (longlong **)(*(longlong **)local_318 + (longlong)(int)local_300._4_4_ * 6);
          local_338[0] = (longlong *)
                         (*(longlong **)local_318)[(longlong)(int)local_300._4_4_ * 6 + 4];
          lVar21 = FUN_14700ef9c(local_3e8,pplVar29);
          if ((*(byte *)(lVar21 + 0xc0) & 0x10) == 0) {
            local_388 = local_338;
            local_390 = pplVar29;
            FUN_14701bec8(&local_2d8,local_33c);
          }
          local_3f8 = (undefined4)local_338[0][0xb];
          FUN_14701a52c(lVar21,(int)local_338[0][5],(int)local_338[0][7],(int)local_338[0][9]);
          local_300._0_4_ = (uint)local_300 & ~local_310._4_4_;
          FUN_1449c0562(&local_310);
        } while ((longlong **)local_318 != local_3d8 ||
                 (local_308 != pplVar33 || local_300._4_4_ != uVar20));
      }
      pplVar33 = (longlong **)&local_2c8;
      pplVar29 = (longlong **)&local_2b0;
      pplVar38 = &local_2d8;
      param_1 = local_3e8;
    }
    else {
      local_390 = (longlong **)0x100000000;
      local_380._0_4_ = 0xffffffff;
      local_380._4_4_ = 0;
      local_378 = local_378 & 0xffffffff00000000;
      if (*(int *)pplVar29 != 0) {
        FUN_1449c0562(&local_390);
        uVar20 = *(uint *)pplVar29;
      }
      pplVar38 = local_3d8;
      local_300._0_4_ = (uint)local_380;
      local_300._4_4_ = local_380._4_4_;
      local_2f8 = (uint)local_378;
      uStack_2f4 = local_378._4_4_;
      local_310 = local_390;
      local_308 = local_388;
      local_318 = (code *)local_3d8;
      if ((local_380._4_4_ != uVar20) || (local_388 != pplVar33)) {
        do {
          do {
            lVar21 = (*(longlong **)local_318)[(longlong)(int)local_300._4_4_ * 6 + 4];
            uVar23 = FUN_14700ef9c(param_1,*(longlong **)local_318 +
                                           (longlong)(int)local_300._4_4_ * 6);
            local_3f8 = *(undefined4 *)(lVar21 + 0x58);
            FUN_14701a52c(uVar23,*(undefined4 *)(lVar21 + 0x28),*(undefined4 *)(lVar21 + 0x38),
                          *(undefined4 *)(lVar21 + 0x48));
            local_300._0_4_ = (uint)local_300 & ~local_310._4_4_;
            FUN_1449c0562(&local_310);
          } while (local_300._4_4_ != uVar20);
        } while ((local_308 != pplVar33) || ((longlong **)local_318 != pplVar38));
      }
    }
    local_318 = (code *)0x100000000;
    local_308 = (longlong **)0xffffffff;
    local_300 = (longlong *)((ulonglong)local_300._4_4_ << 0x20);
    iVar19 = 0;
    local_310 = pplVar33;
    if (*(int *)(pplVar33 + 3) != 0) {
      FUN_1449c0562(&local_318);
      iVar19 = *(int *)(pplVar33 + 3);
    }
    local_378 = (ulonglong)local_308;
    local_370 = (uint)local_300;
    local_36c = local_300._4_4_;
    local_388 = (longlong **)local_318;
    local_380 = local_310;
    iVar30 = *(int *)pplVar29;
    local_318 = (code *)CONCAT44(1 << ((byte)iVar30 & 0x1f),iVar30 >> 5);
    local_308 = (longlong **)CONCAT44(iVar30,-1 << ((byte)iVar30 & 0x1f));
    local_300 = (longlong *)(CONCAT44(local_300._4_4_,iVar30) & 0xffffffffffffffe0);
    local_390 = pplVar38;
    local_310 = pplVar33;
    if (iVar19 != iVar30) {
      FUN_1449c0562(&local_318);
      iVar19 = local_308._4_4_;
    }
    pplVar33 = local_310;
    pplVar29 = pplVar38;
    if ((local_378._4_4_ != iVar19) || (local_380 != local_310)) {
      do {
        lVar21 = (*pplVar29)[(longlong)(int)local_378._4_4_ * 6 + 4];
        lVar24 = FUN_14700ef9c(param_1,*pplVar29 + (longlong)(int)local_378._4_4_ * 6);
        local_328 = 0;
        local_320 = 0x100000000;
        local_338[0] = (longlong *)((ulonglong)local_338[0] & 0xffffffffffff0000);
        local_318 = (code *)0x0;
        local_308 = (longlong **)0x0;
        local_308 = (longlong **)FUN_14001cc68(0x28,8);
        *local_308 = (longlong *)&PTR_LAB_149fcb910;
        local_308[1] = param_1;
        local_308[2] = (longlong *)local_3d8;
        local_308[3] = &local_b8;
        local_308[4] = (longlong *)lVar24;
        if (local_308 + 1 != (longlong **)0x0) {
          local_318 = FUN_142aea102;
        }
        FUN_14700f04e(lVar21,&local_318,0xf,local_338);
        if (local_318 != (code *)0x0) {
          plVar31 = (longlong *)local_308;
          if (local_308 == (longlong **)0x0) {
            plVar31 = (longlong *)&local_2f8;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        if (local_328 != 0) {
          FUN_1400020a8();
        }
        *(byte *)(lVar24 + 0xc0) = *(byte *)(lVar24 + 0xc0) | 0x10;
        local_378 = CONCAT44(local_378._4_4_,(uint)local_378 & ~local_388._4_4_);
        FUN_1449c0562(&local_388);
        pplVar29 = local_390;
        param_1 = local_3e8;
      } while (((local_378._4_4_ != iVar19) || (local_380 != pplVar33)) || (local_390 != pplVar38));
    }
    FUN_14576f8ee(param_1,1,1);
    local_290 = 0;
    if (local_298 != 0) {
      FUN_1400020a8();
    }
    FUN_145969bc6(&local_2d8);
  }
  FUN_14576f494(param_1 + 0x59,param_5 + 0x58);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14576f404(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af5e84 FUN_140af5e84 body=32 status=ok
// SIG undefined FUN_140af5e84(void)

ushort * FUN_140af5e84(ushort *param_1)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar5 = *(longlong *)param_1;
  if (((lVar5 == 0) ||
      (uVar3 = *param_1, param_1 = (ushort *)(ulonglong)(uVar3 & 1), (uVar3 & 1) != 0)) ||
     (iVar4 = *(int *)(lVar5 + 8), *(int *)(lVar5 + 0xc) == iVar4)) {
    return param_1;
  }
  if (iVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar7 = (longlong)iVar4 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar9 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
        }
        else {
          if ((uVar9 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar9 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_140958f6e;
              lVar1 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar1 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar9 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
      }
    }
LAB_140958f6e:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar7;
    param_1 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
    uVar9 = 0x7fffffff;
    if (iVar4 <= (int)(uVar7 / 0x18)) {
      uVar9 = uVar7 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar9 != *(int *)(lVar5 + 0xc)) {
    *(int *)(lVar5 + 0xc) = (int)uVar9;
    param_1 = (ushort *)FUN_1446f8d3c(lVar5,*(undefined4 *)(lVar5 + 8),uVar9,0x18,8);
  }
  return param_1;
}



// FUNCTION 140af5ea4 FUN_140af5ea4 body=825 status=ok
// SIG undefined FUN_140af5ea4(void)

void FUN_140af5ea4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_b8 [32];
  undefined8 ***local_98;
  longlong *local_90;
  uint local_88;
  uint local_80;
  undefined8 *local_78;
  char local_69;
  undefined8 *local_68;
  undefined8 ***local_60 [2];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_69 = '\0';
  local_68 = param_2;
  FUN_141735520(param_1,&local_90,&local_68,&local_69);
  if (local_69 == '\0') {
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
  }
  uVar5 = *param_2;
  uVar8 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar2 = (uint)uVar5 & 0xffff;
  local_78 = param_2;
  lVar3 = FUN_141734d66(param_1 + 0x50,
                        ((uint)uVar5 << 0x10 | uVar2) + (int)((ulonglong)uVar5 >> 0x20) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar2 >> 4),param_2);
  iVar6 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar6 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar6 + 1U) {
    FUN_140899908(lVar3,iVar6);
  }
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar3 = *(longlong *)(lVar3 + 8);
  }
  *(undefined8 **)(lVar3 + (longlong)iVar6 * 8) = param_2;
  uVar5 = param_2[1];
  uVar8 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar2 = (uint)uVar5 & 0xffff;
  plVar4 = (longlong *)
           FUN_1417351be(param_1 + 0xa0,
                         ((uint)uVar5 << 0x10 | uVar2) + (int)((ulonglong)uVar5 >> 0x20) +
                         (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar2 >> 4),param_2 + 1);
  iVar6 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
    FUN_1407de694(plVar4,iVar6);
  }
  *(undefined8 **)(*plVar4 + (longlong)iVar6 * 8) = param_2;
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar9 = (uint)uVar5 & 0xffff;
  uVar2 = ((uint)uVar5 << 0x10 | uVar9) + (int)((ulonglong)uVar5 >> 0x20) +
          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4);
  uVar5 = FUN_1410ff204(param_1 + 0xf0,
                        ((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar7 >> 4) + uVar2 * 0x40 +
                        (uVar2 >> 2) + 0x9e3779b9 ^ uVar2,param_2 + 4);
  FUN_140dba0a8(uVar5,&local_90,&local_78);
  plVar4 = param_2 + 8;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    if (*plVar4 == 0) goto LAB_140af61b6;
    local_80 = *(uint *)(*plVar4 + 8);
  }
  else {
    local_80 = (uint)*(ushort *)((longlong)param_2 + 0x42);
  }
  local_88 = 0;
  local_90 = plVar4;
  if (local_80 != 0) {
    plVar4 = (longlong *)(param_1 + 0x140);
    do {
      FUN_144a5de44(&local_90,local_60);
      local_98 = local_60[0];
      uVar8 = (uint)((ulonglong)local_60[0] >> 0x10);
      uVar2 = (uint)local_60[0] & 0xffff;
      uVar8 = ((uint)local_60[0] << 0x10 | uVar2) + (int)((ulonglong)local_60[0] >> 0x20) +
              (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar2 >> 4);
      if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
        lVar3 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar3 = param_1 + 0x178;
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & uVar8) * 4);
        if (iVar6 != -1) {
          do {
            lVar3 = *plVar4 + (longlong)iVar6 * 0x60;
            if (*(undefined8 *****)(*plVar4 + (longlong)iVar6 * 0x60) ==
                (undefined8 ****)local_60[0]) {
              if (lVar3 != 0) goto LAB_140af618e;
              break;
            }
            iVar6 = *(int *)(lVar3 + 0x58);
          } while (iVar6 != -1);
        }
      }
      local_60[0] = &local_98;
      FUN_140f8a5ea(plVar4,&local_4c,uVar8,local_60);
      lVar3 = *plVar4 + (longlong)local_4c * 0x60;
LAB_140af618e:
      FUN_144972254(lVar3 + 8,local_60,local_68 + 4,0);
      local_88 = local_88 + 1;
    } while (local_88 != local_80);
  }
LAB_140af61b6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af61de FUN_140af61de body=1363 status=ok
// SIG undefined FUN_140af61de(void)

void FUN_140af61de(byte *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118 [2];
  longlong local_108;
  undefined1 local_100 [8];
  byte *local_f8;
  uint local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  ulonglong *local_d8;
  byte local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(param_4 + 0x18) != *(int *)(param_4 + 0x44)) {
    uVar18 = (uint)((ulonglong)DAT_14c99dec0 >> 0x10);
    uVar13 = (uint)DAT_14c99dec0 & 0xffff;
    uVar4 = (uint)((ulonglong)DAT_14c99dec8 >> 0x10);
    uVar6 = (uint)DAT_14c99dec8 & 0xffff;
    uVar18 = (int)((ulonglong)DAT_14c99dec0 >> 0x20) + ((uint)DAT_14c99dec0 << 0x10 | uVar13) +
             (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar13 >> 4);
    lVar2 = param_4 + 0x48;
    if (*(longlong *)(param_4 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_4 + 0x50);
    }
    iVar10 = *(int *)(lVar2 + (ulonglong)
                              (*(int *)(param_4 + 0x58) - 1U &
                              ((uVar18 >> 2) +
                               ((uint)DAT_14c99dec8 << 0x10 | uVar6) +
                               (int)((ulonglong)DAT_14c99dec8 >> 0x20) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4) + uVar18 * 0x40 +
                               0x9e3779b9 ^ uVar18)) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)(param_4 + 0x10);
      do {
        lVar15 = (longlong)iVar10 * 0x68;
        lVar3 = lVar2 + lVar15;
        if ((*(longlong *)(lVar2 + lVar15) == DAT_14c99dec0) &&
           (*(longlong *)(lVar2 + 8 + lVar15) == DAT_14c99dec8)) goto LAB_140af6300;
        iVar10 = *(int *)(lVar3 + 0x60);
      } while (iVar10 != -1);
    }
  }
  lVar3 = 0;
LAB_140af6300:
  local_128 = (longlong *)(lVar3 + 0x10);
  if (lVar3 == 0) {
    local_128 = (longlong *)0x0;
  }
  local_e8 = local_c8;
  local_d0 = 0;
  local_d8 = &local_48;
  local_f0 = 0;
  local_130 = param_3;
  local_f8 = param_1;
  local_e0 = local_e8;
  if ((*param_1 & 1) == 0) {
    if (*(longlong *)param_1 == 0) goto LAB_140af6448;
    uVar4 = *(uint *)(*(longlong *)param_1 + 8);
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 2);
  }
  if (uVar4 != 0) {
LAB_140af636d:
    FUN_144a5de44(&local_f8,&local_108);
    local_e0 = local_e8;
    FUN_14005eb5c(&local_108);
    if ((int)((ulonglong)((longlong)local_e0 - (longlong)local_e8) >> 1) < 5) {
LAB_140af6482:
      bVar1 = 1;
      bVar12 = 1;
      uVar16 = (uint)local_108;
      uVar18 = (uint)((ulonglong)local_108 >> 0x10);
      iVar17 = (int)((ulonglong)local_108 >> 0x20);
      uVar13 = (uint)DAT_14c99ded0;
      uVar6 = (uint)((ulonglong)DAT_14c99ded0 >> 0x10);
      iVar10 = (int)((ulonglong)DAT_14c99ded0 >> 0x20);
      if ((local_128 != (longlong *)0x0) &&
         (bVar12 = 1, (int)local_128[1] != *(int *)((longlong)local_128 + 0x34))) {
        local_120 = local_108;
        local_138 = local_128 + 7;
        if ((longlong *)local_128[8] != (longlong *)0x0) {
          local_138 = (longlong *)local_128[8];
        }
        uVar7 = (int)local_128[9] - 1;
        iVar14 = *(int *)((longlong)local_138 +
                         (ulonglong)
                         (iVar17 + (uVar16 << 0x10 | uVar16 & 0xffff) +
                          (uVar18 << 0x13 | uVar18 & 0xffff) + ((uVar16 & 0xffff) >> 4) & uVar7) * 4
                         );
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(*local_128 + (longlong)iVar14 * 0x10) == local_108)
            goto LAB_140af6723;
            iVar14 = *(int *)((longlong)iVar14 * 0x10 + *local_128 + 8);
          } while (iVar14 != -1);
        }
        iVar14 = *(int *)((longlong)local_138 +
                         (ulonglong)
                         (iVar10 + (uVar13 << 0x10 | uVar13 & 0xffff) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar13 & 0xffff) >> 4) & uVar7) * 4);
        bVar12 = 1;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(*local_128 + (longlong)iVar14 * 0x10) == DAT_14c99ded0)
            goto LAB_140af6723;
            iVar14 = *(int *)((longlong)iVar14 * 0x10 + *local_128 + 8);
          } while (iVar14 != -1);
          bVar12 = 1;
        }
      }
      goto LAB_140af65b1;
    }
    lVar2 = 5;
    lVar3 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)&DAT_149e6e300 + lVar3);
      uVar8 = (ulonglong)uVar5;
      uVar9 = *(ushort *)(local_e8 + lVar3);
      if (uVar5 != uVar9) break;
      if (uVar5 == 0) goto LAB_140af63f8;
LAB_140af63c2:
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) goto LAB_140af63f8;
      lVar3 = lVar3 + 2;
    }
    if ((uVar9 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar11 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_140af63c2;
    }
    if (uVar5 != uVar9) goto LAB_140af6482;
LAB_140af63f8:
    bVar1 = *(byte *)(param_4 + 9);
    goto LAB_140af63fb;
  }
LAB_140af6448:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140af6723:
  bVar12 = 0;
LAB_140af65b1:
  if ((local_130 != (longlong *)0x0) && ((int)local_130[1] != *(int *)((longlong)local_130 + 0x34)))
  {
    local_138 = local_130 + 7;
    if ((longlong *)local_130[8] != (longlong *)0x0) {
      local_138 = (longlong *)local_130[8];
    }
    uVar7 = (int)local_130[9] - 1;
    iVar17 = *(int *)((longlong)local_138 +
                     (ulonglong)
                     (iVar17 + (uVar16 << 0x10 | uVar16 & 0xffff) +
                      (uVar18 << 0x13 | uVar18 & 0xffff) + ((uVar16 & 0xffff) >> 4) & uVar7) * 4);
    if (iVar17 != -1) {
      do {
        if (*(longlong *)(*local_130 + (longlong)iVar17 * 0x10) == local_108) goto LAB_140af672b;
        iVar17 = *(int *)((longlong)iVar17 * 0x10 + *local_130 + 8);
      } while (iVar17 != -1);
    }
    local_120 = DAT_14c99ded0;
    iVar10 = *(int *)((longlong)local_138 +
                     (ulonglong)
                     (iVar10 + (uVar13 << 0x10 | uVar13 & 0xffff) + (uVar6 << 0x13 | uVar6 & 0xffff)
                      + ((uVar13 & 0xffff) >> 4) & uVar7) * 4);
    if (iVar10 != -1) {
      do {
        if (*(longlong *)(*local_130 + (longlong)iVar10 * 0x10) == DAT_14c99ded0)
        goto LAB_140af672b;
        iVar10 = *(int *)((longlong)iVar10 * 0x10 + *local_130 + 8);
      } while (iVar10 != -1);
    }
  }
LAB_140af65bb:
  bVar1 = bVar1 & bVar12 ^ *(byte *)(param_4 + 5);
LAB_140af63fb:
  if (bVar1 != 0) {
    FUN_140af6732(local_100,local_118);
    FUN_140af67e0(param_2,&local_108,local_118);
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
  local_f0 = local_f0 + 1;
  if (local_f0 == uVar4) goto code_r0x000140af643a;
  goto LAB_140af636d;
LAB_140af672b:
  bVar1 = 0;
  goto LAB_140af65bb;
code_r0x000140af643a:
  if ((local_d0 & 1) != 0) {
    FUN_1400020a8(local_e8);
  }
  goto LAB_140af6448;
}



// FUNCTION 140af6732 FUN_140af6732 body=171 status=ok
// SIG undefined FUN_140af6732(void)

undefined8 * FUN_140af6732(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined1 auStack_48 [32];
  uint local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)*param_1;
  if ((longlong)puVar2 < 0) {
    local_28 = (uint)((ulonglong)puVar2 >> 0x20) & 0x7fffffff;
    local_24 = SUB84(puVar2,0);
    FUN_140af6904(&local_28,param_2);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af67e0 FUN_140af67e0 body=292 status=ok
// SIG undefined FUN_140af67e0(void)

undefined8 * FUN_140af67e0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if ((int)uVar1 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar5 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar5 >> 1) + uVar8;
      iVar4 = *(int *)(lVar3 + (ulonglong)uVar7 * 0x18) - *param_2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar3 + 4 + (ulonglong)uVar7 * 0x18) - param_2[1];
      }
      uVar6 = (uint)uVar5;
      if (iVar4 < 0) {
        uVar8 = uVar7 + (uVar6 & 1);
      }
      uVar5 = uVar5 >> 1;
    } while (1 < uVar6);
    if ((int)uVar8 < (int)uVar1) {
      uVar5 = (ulonglong)uVar8;
      iVar4 = *param_2 - *(int *)(lVar3 + uVar5 * 0x18);
      if (iVar4 == 0) {
        iVar4 = param_2[1] - *(int *)(lVar3 + 4 + uVar5 * 0x18);
      }
      if (-1 < iVar4) {
        puVar9 = (undefined8 *)(lVar3 + uVar5 * 0x18);
        FUN_140958ed1(puVar9,1);
        goto LAB_140af68a2;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140af6a9a(param_1,uVar1);
    lVar3 = *param_1;
  }
  lVar2 = (ulonglong)uVar8 * 0x18;
  memmove((void *)(lVar3 + lVar2 + 0x18),(void *)(lVar3 + lVar2),(ulonglong)(uVar1 - uVar8) * 0x18);
  puVar9 = (undefined8 *)(lVar2 + *param_1);
LAB_140af68a2:
  *puVar9 = *(undefined8 *)param_2;
  puVar9[1] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  return puVar9 + 1;
}



// FUNCTION 140af6904 FUN_140af6904 body=405 status=ok
// SIG undefined FUN_140af6904(void)

undefined8 * FUN_140af6904(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  longlong lVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong uVar4;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(&DAT_14c927ae8 + (ulonglong)*param_1 * 8);
  uVar3 = param_1[1] >> 3;
  uVar4 = (ulonglong)uVar3;
  switch(param_1[1] & 7) {
  case 1:
    FUN_140056680(param_2,(longlong)*(int *)(*(longlong *)(lVar2 + 0x40) + uVar4 * 4) * 2 +
                          *(longlong *)(lVar2 + 0x50));
    break;
  case 2:
    local_48 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x60) + uVar4 * 4);
    FUN_14029eeae(&local_48,param_2);
    goto LAB_140af69b9;
  case 3:
    FUN_1400021e4((ulonglong)(uVar3 << 3) + *(longlong *)(lVar2 + 0x70),param_2);
    break;
  case 4:
    lVar2 = *(longlong *)(lVar2 + 0x80);
    lVar5 = uVar4 * 0x10;
    local_38 = 0;
    local_48 = (ulonglong)*(uint *)(lVar2 + lVar5);
    local_40 = (ulonglong)*(uint *)(lVar2 + 4 + lVar5);
    local_28 = (ulonglong)*(uint *)(lVar2 + 0xc + lVar5);
    local_30 = (ulonglong)*(uint *)(lVar2 + 8 + lVar5);
    FUN_140af6c10(&local_48,param_2);
LAB_140af69b9:
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  case 5:
    FUN_140af6c10(uVar4 * 0x28 + *(longlong *)(lVar2 + 0x90),param_2);
    break;
  case 6:
    lVar2 = *(longlong *)(lVar2 + 0xa0);
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 8 + uVar4 * 0x10);
    _Src = *(void **)(lVar2 + uVar4 * 0x10);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_140af69b9;
    }
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    break;
  case 7:
    *param_2 = 0;
    param_2[1] = 0;
    break;
  default:
    FUN_1400b22c2(param_2,(longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + uVar4 * 4) +
                          *(longlong *)(lVar2 + 0x30));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 140af6a9a FUN_140af6a9a body=373 status=ok
// SIG undefined FUN_140af6a9a(void)

void FUN_140af6a9a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140af6b23;
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
LAB_140af6b23:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140af6c10 FUN_140af6c10 body=191 status=ok
// SIG undefined FUN_140af6c10(void)

undefined8 * FUN_140af6c10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_140af6cd0(param_1,&local_238);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_248,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  if ((undefined8 *)&local_248 == param_2) {
    if (CONCAT44(uStack_244,local_248) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_248;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_244;
    *(undefined4 *)(param_2 + 1) = uStack_240;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_23c;
  }
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af6cd0 FUN_140af6cd0 body=294 status=ok
// SIG undefined FUN_140af6cd0(void)

void FUN_140af6cd0(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  
  if (*param_1 != 0) {
    FUN_14005eb5c(param_1,param_2);
    if (param_1[1] != 0) {
      puVar1 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
        FUN_140213274(param_2,1);
        puVar1 = *(undefined2 **)(param_2 + 8);
      }
      *(undefined2 **)(param_2 + 8) = puVar1 + 1;
      *puVar1 = 0x2e;
      FUN_14005eb5c(param_1 + 1,param_2);
    }
    puVar1 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,1);
      puVar1 = *(undefined2 **)(param_2 + 8);
    }
    *(undefined2 **)(param_2 + 8) = puVar1 + 1;
    *puVar1 = 0x27;
  }
  FUN_14005eb5c(param_1 + 3,param_2);
  if (param_1[4] != 0) {
    puVar1 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,1);
      puVar1 = *(undefined2 **)(param_2 + 8);
    }
    *(undefined2 **)(param_2 + 8) = puVar1 + 1;
    *puVar1 = 0x2e;
    FUN_14005eb5c(param_1 + 4,param_2);
  }
  if (*param_1 != 0) {
    puVar1 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,1);
      puVar1 = *(undefined2 **)(param_2 + 8);
    }
    *(undefined2 **)(param_2 + 8) = puVar1 + 1;
    *puVar1 = 0x27;
  }
  return;
}



// FUNCTION 140af6df6 FUN_140af6df6 body=2205 status=ok
// SIG undefined FUN_140af6df6(void)

void FUN_140af6df6(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  longlong **pplVar1;
  longlong **pplVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 ***pppuVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStack_d8 [32];
  byte *local_b8;
  uint local_ac;
  longlong local_a8;
  undefined8 ***local_a0;
  longlong **local_98;
  uint local_90;
  uint local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 ***local_60 [2];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == (longlong *)0x0) {
    lVar12 = 0;
    lVar16 = 0;
  }
  else {
    lVar12 = *param_2;
    lVar16 = param_2[2];
  }
  lVar17 = *param_3;
  lVar4 = param_3[2];
  lVar25 = lVar17;
  if (param_3 == (longlong *)0x0) {
    lVar25 = 0;
    lVar4 = 0;
  }
  bVar30 = lVar4 != lVar16 || lVar25 != lVar12;
  local_70 = param_2;
  local_68 = param_2;
  if (bVar30) {
    local_80 = lVar12;
    local_78 = lVar16;
    iVar11 = FUN_14701301c(param_1);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) - iVar11;
    lVar17 = *param_3;
  }
  lVar19 = *param_2;
  if (lVar19 != lVar17) {
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      uVar24 = (uint)((ulonglong)lVar19 >> 0x10);
      uVar28 = (uint)lVar19 & 0xffff;
      lVar17 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x90);
      }
      iVar11 = *(int *)(lVar17 + (ulonglong)
                                 (*(int *)(param_1 + 0x98) - 1U &
                                 (int)((ulonglong)lVar19 >> 0x20) + ((uint)lVar19 << 0x10 | uVar28)
                                 + (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar28 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          plVar14 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar11 * 0x28);
          if (*plVar14 == lVar19) goto LAB_140af7303;
          iVar11 = (int)plVar14[4];
        } while (iVar11 != -1);
      }
    }
    plVar14 = (longlong *)0x0;
LAB_140af7303:
    plVar18 = plVar14 + 1;
    if (plVar14 == (longlong *)0x0) {
      plVar18 = (longlong *)0x0;
    }
    local_98 = &local_70;
    FUN_14701f0de(plVar18);
    lVar17 = FUN_141734d66((longlong *)(param_1 + 0x50));
    iVar11 = *(int *)(lVar17 + 0x10);
    uVar24 = iVar11 + 1;
    *(uint *)(lVar17 + 0x10) = uVar24;
    if (*(uint *)(lVar17 + 0x14) < uVar24) {
      FUN_140899908(lVar17);
    }
    if (*(longlong *)(lVar17 + 8) != 0) {
      lVar17 = *(longlong *)(lVar17 + 8);
    }
    *(longlong **)(lVar17 + (longlong)iVar11 * 8) = local_70;
    bVar30 = true;
    param_2 = local_68;
  }
  lVar17 = param_2[1];
  if (lVar17 != param_3[1]) {
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      uVar24 = (uint)((ulonglong)lVar17 >> 0x10);
      uVar28 = (uint)lVar17 & 0xffff;
      lVar19 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar19 = *(longlong *)(param_1 + 0xe0);
      }
      iVar11 = *(int *)(lVar19 + (ulonglong)
                                 (*(int *)(param_1 + 0xe8) - 1U &
                                 (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar28)
                                 + (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar28 >> 4)) * 4);
      if (iVar11 != -1) {
        lVar19 = *(longlong *)(param_1 + 0xa0);
        do {
          lVar22 = lVar19 + (longlong)iVar11 * 0x20;
          if (*(longlong *)(lVar19 + (longlong)iVar11 * 0x20) == lVar17) goto LAB_140af7426;
          iVar11 = *(int *)(lVar22 + 0x18);
        } while (iVar11 != -1);
      }
    }
    lVar22 = 0;
LAB_140af7426:
    lVar17 = lVar22 + 8;
    if (lVar22 == 0) {
      lVar17 = 0;
    }
    local_98 = &local_70;
    FUN_14701f1b0(lVar17);
    lVar17 = param_3[1];
    uVar24 = (uint)((ulonglong)lVar17 >> 0x10);
    uVar28 = (uint)lVar17 & 0xffff;
    plVar14 = (longlong *)
              FUN_1417351be((longlong *)(param_1 + 0xa0),
                            ((uint)lVar17 << 0x10 | uVar28) + (int)((ulonglong)lVar17 >> 0x20) +
                            (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar28 >> 4));
    iVar11 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar11 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar11 + 1U) {
      FUN_1407de694(plVar14,iVar11);
    }
    *(longlong **)(*plVar14 + (longlong)iVar11 * 8) = local_70;
    bVar30 = true;
    param_2 = local_68;
  }
  lVar17 = param_2[4];
  if (lVar17 == param_3[4]) {
    lVar19 = param_2[5];
    if (lVar19 != param_3[5]) goto LAB_140af74ba;
  }
  else {
    lVar19 = param_2[5];
LAB_140af74ba:
    if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
      uVar24 = (uint)((ulonglong)lVar17 >> 0x10);
      uVar27 = (uint)lVar17 & 0xffff;
      uVar28 = (uint)((ulonglong)lVar19 >> 0x10);
      uVar21 = (uint)lVar19 & 0xffff;
      uVar24 = (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar27) +
               (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar27 >> 4);
      lVar22 = param_1 + 0x128;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        lVar22 = *(longlong *)(param_1 + 0x130);
      }
      iVar11 = *(int *)(lVar22 + (ulonglong)
                                 (*(int *)(param_1 + 0x138) - 1U &
                                 ((uVar21 >> 4) +
                                  (uint)lVar19 * 0x10000 + uVar21 + (int)((ulonglong)lVar19 >> 0x20)
                                  + (uVar28 << 0x13 | uVar28 & 0xffff) +
                                  (uVar24 >> 2) + uVar24 * 0x40 + 0x9e3779b9 ^ uVar24)) * 4);
      if (iVar11 != -1) {
        lVar22 = *(longlong *)(param_1 + 0xf0);
        do {
          lVar26 = (longlong)iVar11 * 0x68;
          lVar23 = lVar22 + lVar26;
          if ((*(longlong *)(lVar22 + lVar26) == lVar17) &&
             (*(longlong *)(lVar22 + 8 + lVar26) == lVar19)) goto LAB_140af75b5;
          iVar11 = *(int *)(lVar23 + 0x60);
        } while (iVar11 != -1);
      }
    }
    lVar23 = 0;
LAB_140af75b5:
    lVar17 = lVar23 + 0x10;
    if (lVar23 == 0) {
      lVar17 = 0;
    }
    local_b8 = param_4;
    FUN_147013132(lVar17,local_70);
    lVar17 = param_3[4];
    lVar19 = param_3[5];
    uVar24 = (uint)((ulonglong)lVar19 >> 0x10);
    uVar27 = (uint)lVar19 & 0xffff;
    uVar28 = (uint)((ulonglong)lVar17 >> 0x10);
    uVar21 = (uint)lVar17 & 0xffff;
    uVar28 = ((uint)lVar17 << 0x10 | uVar21) + (int)((ulonglong)lVar17 >> 0x20) +
             (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar21 >> 4);
    uVar15 = FUN_1410ff204((longlong *)(param_1 + 0xf0),
                           (uVar28 >> 2) +
                           ((uint)lVar19 << 0x10 | uVar27) + (int)((ulonglong)lVar19 >> 0x20) +
                           (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar27 >> 4) + uVar28 * 0x40 +
                           0x9e3779b9 ^ uVar28,param_3 + 4);
    FUN_140dba0a8(uVar15,&local_98);
    bVar30 = true;
    param_4 = local_b8;
    param_2 = local_68;
  }
  pplVar1 = (longlong **)(param_3 + 8);
  pplVar2 = (longlong **)(param_2 + 8);
  cVar9 = FUN_141182a96(pplVar2,pplVar1);
  if (cVar9 == '\0') {
    if (((ulonglong)*pplVar2 & 1) == 0) {
      if (*pplVar2 != (longlong *)0x0) {
        local_88 = *(uint *)(*pplVar2 + 1);
        goto LAB_140af6f62;
      }
    }
    else {
      local_88 = (uint)*(ushort *)((longlong)param_2 + 0x42);
LAB_140af6f62:
      local_90 = 0;
      local_98 = pplVar2;
      if (local_88 != 0) {
        do {
          FUN_144a5de44(&local_98,local_60);
          local_90 = local_90 + 1;
        } while (local_90 != local_88);
      }
    }
    if (((ulonglong)*pplVar1 & 1) == 0) {
      if (*pplVar1 != (longlong *)0x0) {
        local_88 = *(uint *)(*pplVar1 + 1);
        goto LAB_140af6fba;
      }
    }
    else {
      local_88 = (uint)*(ushort *)((longlong)param_3 + 0x42);
LAB_140af6fba:
      local_90 = 0;
      local_98 = pplVar1;
      if (local_88 != 0) {
        local_b8 = (byte *)(param_1 + 0x140);
        local_a8 = param_1 + 0x178;
        do {
          FUN_144a5de44(&local_98,local_60);
          pppuVar8 = local_60[0];
          plVar14 = local_68;
          local_a0 = local_60[0];
          uVar3 = *(ushort *)(local_68 + 8);
          uVar24 = (uint)local_60[0];
          iVar11 = (int)((ulonglong)local_60[0] >> 0x20);
          if ((uVar3 & 1) == 0) {
            plVar18 = (longlong *)local_68[8];
            if (plVar18 != (longlong *)0x0) {
              local_ac = *(uint *)(plVar18 + 1);
              lVar17 = *plVar18;
              if ((int)local_ac < 1) {
                uVar28 = 0;
              }
              else {
                uVar28 = 0;
                uVar21 = local_ac;
                do {
                  uVar27 = (uVar21 >> 1) + uVar28;
                  iVar20 = *(int *)(lVar17 + (ulonglong)uVar27 * 0x18) - uVar24;
                  if (iVar20 == 0) {
                    iVar20 = *(int *)(lVar17 + 4 + (ulonglong)uVar27 * 0x18) - iVar11;
                  }
                  if (iVar20 < 0) {
                    uVar28 = uVar27 + (uVar21 & 1);
                  }
                  bVar30 = 1 < uVar21;
                  uVar21 = uVar21 >> 1;
                } while (bVar30);
              }
              if ((int)uVar28 < (int)local_ac) {
                uVar29 = (ulonglong)uVar28;
                iVar20 = uVar24 - *(int *)(lVar17 + uVar29 * 0x18);
                if (iVar20 == 0) {
                  iVar20 = iVar11 - *(int *)(lVar17 + 4 + uVar29 * 0x18);
                }
                if (-1 < iVar20) {
                  uVar29 = lVar17 + uVar29 * 0x18 + 8;
                  goto LAB_140af7033;
                }
              }
            }
LAB_140af703c:
            pbVar7 = local_b8;
            uVar28 = (uint)((ulonglong)pppuVar8 >> 0x10);
            uVar24 = (uVar24 << 0x10 | uVar24 & 0xffff) + iVar11 +
                     (uVar28 << 0x13 | uVar28 & 0xffff) + ((uVar24 & 0xffff) >> 4);
            if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
              lVar17 = *(longlong *)(param_1 + 0x180);
              if (*(longlong *)(param_1 + 0x180) == 0) {
                lVar17 = local_a8;
              }
              iVar11 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & uVar24) * 4);
              if (iVar11 != -1) {
                do {
                  lVar17 = *(longlong *)local_b8 + (longlong)iVar11 * 0x60;
                  if (*(undefined8 *****)(*(longlong *)local_b8 + (longlong)iVar11 * 0x60) ==
                      (undefined8 ****)pppuVar8) {
                    if (lVar17 != 0) goto LAB_140af710a;
                    break;
                  }
                  iVar11 = *(int *)(lVar17 + 0x58);
                } while (iVar11 != -1);
              }
            }
            local_60[0] = &local_a0;
            FUN_140f8a5ea(local_b8,&local_4c,uVar24,local_60);
            lVar17 = *(longlong *)pbVar7 + (longlong)local_4c * 0x60;
LAB_140af710a:
            FUN_144972254(lVar17 + 8,local_60,plVar14 + 4,0);
          }
          else {
            puVar13 = (undefined4 *)FUN_146859566(local_68 + 8,local_60[0]);
            if (puVar13 == (undefined4 *)0x0) {
              uVar29 = 0;
            }
            else {
              uVar29 = (ulonglong)CONCAT24(uVar3 >> 2,*puVar13) | 0x8000000000000000;
            }
LAB_140af7033:
            if (uVar29 == 0) goto LAB_140af703c;
          }
          local_90 = local_90 + 1;
        } while (local_90 != local_88);
      }
    }
    bVar10 = 1;
    if (param_4 == (byte *)0x0) goto LAB_140af71fa;
  }
  else {
    if (param_4 == (byte *)0x0) goto LAB_140af71fa;
    bVar10 = 1;
    if ((((!bVar30) && (param_2[2] == param_3[2])) &&
        (*(int *)((longlong)param_2 + 0x3c) == *(int *)((longlong)param_3 + 0x3c))) &&
       ((int)param_2[6] == (int)param_3[6])) {
      puVar5 = (undefined8 *)param_2[9];
      puVar6 = (undefined8 *)param_3[9];
      if (puVar5 != (undefined8 *)0x0 && puVar6 != (undefined8 *)0x0) {
        if (puVar5 == puVar6) {
          bVar10 = 0;
        }
        else if (*(int *)(puVar5 + 1) == *(int *)(puVar6 + 1)) {
          bVar10 = FUN_14701a92e(*puVar5,*puVar6);
          bVar10 = bVar10 ^ 1;
        }
      }
      else {
        bVar10 = (puVar5 != (undefined8 *)0x0) != (puVar6 != (undefined8 *)0x0);
      }
    }
  }
  *param_4 = bVar10;
LAB_140af71fa:
  FUN_14128b194(local_68,param_3);
  if (lVar4 != lVar16 || lVar25 != lVar12) {
    local_60[0] = (undefined8 ***)((ulonglong)local_60[0] & 0xffffffffffffff00);
    FUN_141735520(param_1,&local_98,&local_68,local_60);
    if ((char)local_60[0] == '\0') {
      *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af7694 FUN_140af7694 body=35 status=ok
// SIG undefined FUN_140af7694(void)

void FUN_140af7694(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1) = *(undefined4 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 4 + lVar1) = *(undefined8 *)(param_2 + 4 + lVar1);
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140af76b8 FUN_140af76b8 body=341 status=ok
// SIG undefined FUN_140af76b8(void)

longlong * FUN_140af76b8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403fa6f6(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar8 = 0;
      uVar7 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar6 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar8) = *(undefined4 *)(lVar4 + lVar8);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar8) = *(undefined4 *)(lVar4 + 4 + lVar8);
        }
        else {
          *(undefined8 *)(lVar5 + 8 + lVar8) = 0;
          iVar3 = *(int *)(lVar4 + 0x10 + lVar8);
          _Src = *(void **)(lVar4 + 8 + lVar8);
          *(int *)(lVar5 + 0x10 + lVar8) = iVar3;
          if ((longlong)iVar3 == 0) {
            *(undefined4 *)(lVar5 + 0x14 + lVar8) = 0;
          }
          else {
            FUN_1447bda9e(lVar5 + 8 + lVar8,iVar3,0);
            memcpy(*(void **)(lVar5 + 8 + lVar8),_Src,(longlong)iVar3 << 2);
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar8) = *(undefined8 *)(lVar4 + 0x18 + lVar8);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 140af781c FUN_140af781c body=137 status=ok
// SIG undefined FUN_140af781c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140af781c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140af78b2 FUN_140af78b2 body=173 status=ok
// SIG undefined FUN_140af78b2(void)

void FUN_140af78b2(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140af7949;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140af7949:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140af7964 FUN_140af7964 body=1034 status=ok
// SIG undefined FUN_140af7964(void)

longlong *
FUN_140af7964(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,float param_5,
             undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = FUN_140af7eac(*(undefined8 *)(param_1 + 8),param_4);
  local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)((longlong)param_4 + 0x54));
  FUN_1406d7b94(*(undefined8 *)(param_1 + 0x10),&local_80,uVar7,0);
  local_a0 = param_2;
  if ((local_80 == (longlong *)0x0) || (*local_80 == 0)) {
    uVar11 = 0;
    uVar10 = 0;
    goto LAB_140af7b2f;
  }
  fVar14 = *(float *)(param_4 + 10);
  if ((5.0 <= fVar14) || ((fVar14 <= -5.0 || (1e-08 < ABS(fVar14))))) {
    puVar9 = &local_90;
    if (5.0 <= fVar14) {
      fVar14 = 5.0;
    }
    if (fVar14 <= -5.0) {
      fVar14 = -5.0;
    }
    local_8c = (int)(fVar14 * 65536.0);
    local_90 = 0x10000;
    local_88 = 0x1000000000000;
  }
  else {
    puVar9 = (undefined4 *)0x0;
  }
  FUN_144b45cb0(*local_80,puVar9,0);
  fVar14 = 0.0;
  if (0.0 <= *(float *)(param_4 + 9)) {
    fVar14 = *(float *)(param_4 + 9);
  }
  fVar13 = 0.0;
  if (0.0 <= param_5) {
    fVar13 = param_5;
  }
  lVar3 = *local_80;
  iVar5 = FUN_144b42fe0(((int)(fVar14 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar13 * 65536.0));
  FUN_14011ecb7(lVar3,iVar5 + 0x20 >> 6);
  local_98 = *param_4;
  if ((local_98 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar4 = FUN_140af803e(&local_98);
  if ((cVar4 == '\0') || (*(char *)((longlong)local_80 + 0xb9) != '\x01')) {
    iVar5 = FUN_140af7d6f(*local_80,(char)local_80[0x23]);
    uVar10 = iVar5 + 0x20U >> 6;
    plVar12 = local_80;
    if (cVar4 != '\0') goto LAB_140af7af9;
LAB_140af7b15:
    iVar5 = FUN_140af7db2(*plVar12,(char)plVar12[0x23]);
  }
  else {
    uVar10 = FUN_144b42fe0((int)local_80[0x18],
                           *(undefined4 *)(*(longlong *)(*local_80 + 0x80) + 0x20));
    uVar10 = uVar10 >> 6;
    plVar12 = local_80;
LAB_140af7af9:
    if ((char)plVar12[0x17] == '\0') {
      if (*(char *)((longlong)plVar12 + 0xb9) == '\0') goto LAB_140af7b15;
      uVar11 = FUN_146936c9c(*plVar12,(char)plVar12[0x23]);
    }
    else {
      iVar5 = FUN_144b42fe0(*(undefined4 *)((longlong)plVar12 + 0xbc),
                            *(undefined4 *)(*(longlong *)(*plVar12 + 0x80) + 0x20));
      uVar11 = iVar5 + 0x3fU & 0xffffffc0;
    }
    if (*(char *)((longlong)plVar12 + 0xb9) == '\x01') {
      uVar6 = FUN_144b42fe0((int)plVar12[0x18],
                            *(undefined4 *)(*(longlong *)(*plVar12 + 0x80) + 0x20));
      uVar6 = uVar6 & 0xffffffc0;
    }
    else {
      uVar6 = FUN_140af7d6f(*plVar12,(char)plVar12[0x23]);
    }
    iVar5 = uVar11 - uVar6;
  }
  uVar11 = iVar5 + 0x20U >> 6;
LAB_140af7b2f:
  plVar12 = (longlong *)CONCAT44(uStack_74,local_78);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  lVar3 = param_4[1];
  plVar8 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149eda170;
  local_c0 = *(undefined1 *)((longlong)param_4 + 0x56);
  local_80 = (longlong *)*param_3;
  *param_3 = 0;
  local_78 = (undefined4)param_3[1];
  uStack_74 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_b0 = param_6;
  local_c8 = lVar3;
  local_b8 = param_4 + 2;
  FUN_140af815e(plVar8 + 2,&local_80,uVar10,uVar11);
  plVar12 = local_a0;
  *local_a0 = (longlong)(plVar8 + 2);
  local_a0[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  FUN_140af7df7(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12;
}



// FUNCTION 140af7d6f FUN_140af7d6f body=67 status=ok
// SIG undefined FUN_140af7d6f(void)

undefined8 FUN_140af7d6f(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      return 0;
    }
    uVar2 = FUN_144b42fe0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20));
    return uVar2;
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20);
  if (param_2 == '\0') {
    uVar2 = FUN_144b42fe0((int)*(short *)(param_1 + 0x6c),uVar1);
    return uVar2;
  }
  uVar2 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x5c),uVar1);
  return uVar2;
}



// FUNCTION 140af7db2 FUN_140af7db2 body=69 status=ok
// SIG undefined FUN_140af7db2(void)

undefined8 FUN_140af7db2(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    if (param_2 == '\0') {
      iVar1 = (int)*(short *)(param_1 + 0x6e);
    }
    else {
      iVar1 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
    }
    uVar2 = FUN_144b42fe0(iVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20));
    return uVar2;
  }
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
    return 0;
  }
  uVar2 = FUN_144b42fe0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x2c),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20));
  return uVar2;
}



// FUNCTION 140af7df7 FUN_140af7df7 body=157 status=ok
// SIG undefined FUN_140af7df7(void)

void FUN_140af7df7(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar4 = 0x80;
    do {
      plVar3 = *(longlong **)(param_1 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0x60);
    lVar4 = 0x60;
    do {
      plVar3 = *(longlong **)(param_1 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0x20);
    plVar3 = *(longlong **)(param_1 + 8);
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
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 140af7e94 FUN_140af7e94 body=23 status=ok
// SIG undefined FUN_140af7e94(void)

void FUN_140af7e94(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140af7ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140af7eac FUN_140af7eac body=235 status=ok
// SIG undefined FUN_140af7eac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140af7eac(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9683e8) && (FUN_144b3d300(&DAT_14c9683e8), DAT_14c9683e8 == -1)) {
    _DAT_14c9683d8 = 0;
    _DAT_14c9683e0 = 0;
    DAT_14c9683c0 = 0;
    uRam000000014c9683c8 = 0;
    _DAT_14c9683ce = 0;
    uRam000000014c9683d0 = 0;
    atexit((_func_5014 *)&LAB_1428641ff);
    _Init_thread_footer(&DAT_14c9683e8);
  }
  uVar1 = FUN_1406d8740(param_2);
  lVar2 = FUN_1406d84a8(param_1,uVar1);
  if (lVar2 != 0) {
    plVar4 = (longlong *)(lVar2 + 8);
    if (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar2 + 0x28);
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      puVar3 = (undefined8 *)FUN_140af7f98(plVar4,param_2 + 0x40);
      if (puVar3 != (undefined8 *)0x0) {
        return puVar3;
      }
      if ((0 < (int)((longlong *)*plVar4)[1]) &&
         (puVar3 = (undefined8 *)(*(longlong *)*plVar4 + 8), puVar3 != (undefined8 *)0x0)) {
        return puVar3;
      }
    }
  }
  return &DAT_14c9683c0;
}



// FUNCTION 140af7f98 FUN_140af7f98 body=166 status=ok
// SIG undefined FUN_140af7f98(void)

undefined8 FUN_140af7f98(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar5 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = uVar2;
    do {
      uVar1 = (uVar8 >> 1) + uVar7;
      uVar3 = *(undefined8 *)(lVar5 + (ulonglong)uVar1 * 0x10);
      iVar6 = (int)uVar3 - *param_2;
      if (iVar6 == 0) {
        iVar6 = (int)((ulonglong)uVar3 >> 0x20) - param_2[1];
      }
      if (iVar6 < 0) {
        uVar7 = uVar1 + (uVar8 & 1);
      }
      bVar4 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar4);
  }
  if ((int)uVar7 < (int)uVar2) {
    uVar3 = *(undefined8 *)(lVar5 + (ulonglong)uVar7 * 0x10);
    iVar6 = *param_2 - (int)uVar3;
    if (iVar6 == 0) {
      iVar6 = param_2[1] - (int)((ulonglong)uVar3 >> 0x20);
    }
    if (-1 < iVar6) {
      return *(undefined8 *)(lVar5 + 8 + (ulonglong)uVar7 * 0x10);
    }
  }
  return 0;
}



// FUNCTION 140af803e FUN_140af803e body=286 status=ok
// SIG undefined FUN_140af803e(void)

ulonglong FUN_140af803e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
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
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (lVar2 != 0) {
    if (DAT_14c9684a8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1469380b7;
      local_50 = FUN_1462798ef;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/SlateCore",L"FontProviderInterface",&DAT_14c9684a8,&DAT_1469380b6);
    }
    plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14c9684a8);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
        uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar2 + 0x38));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af815e FUN_140af815e body=1063 status=ok
// SIG undefined FUN_140af815e(void)

longlong *
FUN_140af815e(longlong *param_1,longlong *param_2,undefined2 param_3,undefined2 param_4,
             longlong param_5,undefined1 param_6,undefined4 *param_7,longlong *param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int *piVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x12) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x14) = param_6;
  param_1[3] = param_5;
  if (param_5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  bVar10 = DAT_14c950c29;
  uVar2 = *param_7;
  *(undefined4 *)((longlong)param_1 + 0x23) = *(undefined4 *)((longlong)param_7 + 3);
  *(undefined4 *)(param_1 + 4) = uVar2;
  lVar3 = *(longlong *)(param_7 + 2);
  param_1[5] = lVar3;
  if ((lVar3 != 0 & bVar10) == 1) {
    FUN_1456cec3c();
  }
  uVar2 = param_7[5];
  uVar7 = param_7[6];
  uVar8 = param_7[7];
  *(undefined4 *)(param_1 + 6) = param_7[4];
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = *param_8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_140a3e3ee(param_1 + 0xc,*(undefined4 *)((longlong)param_8 + 4),1);
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 < 1) {
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(*(longlong *)*param_1 + 0x20);
    lVar20 = 0;
    do {
      lVar4 = *param_1;
      plVar21 = *(longlong **)(lVar4 + lVar20 * 0xa8);
      if (((*plVar21 != 0) && (plVar21[1] != 0)) && (0 < *(int *)(plVar21[1] + 8))) {
        lVar9 = param_1[10];
        if ((longlong)(int)lVar9 != 0) {
          plVar5 = (longlong *)param_1[9];
          plVar16 = plVar5;
          do {
            plVar19 = (longlong *)plVar16[1];
            if (plVar19 == (longlong *)0x0) {
LAB_140af832e:
              plVar19 = (longlong *)0x0;
            }
            else {
              iVar14 = (int)plVar19[1];
              do {
                if (iVar14 == 0) goto LAB_140af832e;
                LOCK();
                iVar11 = (int)plVar19[1];
                bVar22 = iVar14 == iVar11;
                if (bVar22) {
                  *(int *)(plVar19 + 1) = iVar14 + 1;
                  iVar11 = iVar14;
                }
                iVar14 = iVar11;
                UNLOCK();
              } while (!bVar22);
            }
            lVar18 = *plVar16;
            plVar6 = (longlong *)plVar21[1];
            if (plVar6 == (longlong *)0x0) {
LAB_140af8333:
              lVar15 = 0;
            }
            else {
              iVar14 = (int)plVar6[1];
              do {
                if (iVar14 == 0) goto LAB_140af8333;
                LOCK();
                iVar11 = (int)plVar6[1];
                bVar22 = iVar14 == iVar11;
                if (bVar22) {
                  *(int *)(plVar6 + 1) = iVar14 + 1;
                  iVar11 = iVar14;
                }
                iVar14 = iVar11;
                UNLOCK();
              } while (!bVar22);
              lVar15 = *plVar21;
              LOCK();
              plVar1 = plVar6 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar17 = (int *)((longlong)plVar6 + 0xc);
                *piVar17 = *piVar17 + -1;
                UNLOCK();
                if (*piVar17 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            if (plVar19 == (longlong *)0x0) {
              lVar18 = 0;
            }
            else {
              LOCK();
              plVar6 = plVar19 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar17 = (int *)((longlong)plVar19 + 0xc);
                *piVar17 = *piVar17 + -1;
                UNLOCK();
                if (*piVar17 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
            if (lVar18 == lVar15) {
              if ((~((longlong)plVar16 - (longlong)plVar5) & 0xffffffff0U) != 0) goto LAB_140af83f0;
              break;
            }
            plVar16 = plVar16 + 2;
          } while (plVar16 != plVar5 + (longlong)(int)lVar9 * 2);
        }
        iVar14 = (int)param_1[10];
        *(uint *)(param_1 + 10) = iVar14 + 1U;
        if (*(uint *)((longlong)param_1 + 0x54) < iVar14 + 1U) {
          FUN_14171e380(param_1 + 9,iVar14);
        }
        lVar9 = param_1[9];
        *(longlong *)(lVar9 + (longlong)iVar14 * 0x10) = *plVar21;
        lVar18 = plVar21[1];
        *(longlong *)(lVar9 + 8 + (longlong)iVar14 * 0x10) = lVar18;
        if (lVar18 != 0) {
          LOCK();
          *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
          UNLOCK();
        }
      }
LAB_140af83f0:
      plVar21 = (longlong *)(lVar4 + lVar20 * 0xa8);
      *(int *)(param_1 + 8) = (int)param_1[8] + (int)(short)plVar21[3];
      uVar13 = *(int *)((longlong)plVar21 + 0x14) - (int)param_1[0xb];
      if ((((int)uVar13 < 0) || ((int)param_1[0xd] <= (int)uVar13)) ||
         (piVar17 = (int *)((ulonglong)uVar13 * 0x18 + param_1[0xc]), piVar17 == (int *)0x0)) {
        if ((*plVar21 != 0) && (plVar5 = *(longlong **)(*plVar21 + 8), plVar5 != (longlong *)0x0)) {
          iVar14 = (int)plVar5[1];
          do {
            if (iVar14 == 0) goto LAB_140af845d;
            LOCK();
            iVar11 = (int)plVar5[1];
            bVar22 = iVar14 == iVar11;
            if (bVar22) {
              *(int *)(plVar5 + 1) = iVar14 + 1;
              iVar11 = iVar14;
            }
            iVar14 = iVar11;
            UNLOCK();
          } while (!bVar22);
          LOCK();
          plVar16 = plVar5 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar17 = (int *)((longlong)plVar5 + 0xc);
            *piVar17 = *piVar17 + -1;
            UNLOCK();
            if (*piVar17 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
LAB_140af845d:
        cVar12 = FUN_146935758(plVar21);
        if ((cVar12 != '\0') && (*(char *)((longlong)plVar21 + 0x24) != '\0')) {
          piVar17 = (int *)0x0;
          goto LAB_140af8477;
        }
      }
      else if (*piVar17 == -1) {
LAB_140af8477:
        *piVar17 = (int)lVar20;
        if (*(longlong *)(piVar17 + 2) != 0) {
          FUN_1400020a8();
        }
        piVar17[2] = 0;
        piVar17[3] = 0;
        piVar17[4] = 0;
        piVar17[5] = 0;
      }
      else {
        iVar14 = piVar17[4];
        piVar17[4] = iVar14 + 1U;
        if ((uint)piVar17[5] < iVar14 + 1U) {
          FUN_1446f48e2(piVar17 + 2,iVar14);
        }
        *(int *)(*(longlong *)(piVar17 + 2) + (longlong)iVar14 * 4) = (int)lVar20;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != (int)lVar3);
  }
  FUN_140af7df7(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 140af858e FUN_140af858e body=162 status=ok
// SIG undefined FUN_140af858e(void)

undefined8 * FUN_140af858e(undefined8 *param_1)

{
  FUN_140af86ba();
  *param_1 = &PTR_FUN_14b7bcd40;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0xf00000d0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined2 *)(param_1 + 0x10a) = 0x100;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined8 *)((longlong)param_1 + 0x835) = 0;
  FUN_140af8630(param_1 + 0x9e,&DAT_14cbcdd98);
  return param_1;
}



// FUNCTION 140af8630 FUN_140af8630 body=137 status=ok
// SIG undefined FUN_140af8630(void)

undefined8 FUN_140af8630(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    local_20 = 0;
    FUN_1405593a8(*param_1,&local_20,param_2);
    if ((local_20 != 0) && (lVar2 = *(longlong *)(local_20 + 0x10), lVar2 != 0)) {
      if (*param_1 == 0) {
        *param_1 = lVar2;
      }
      else if (lVar2 != *param_1) goto LAB_140af86b1;
      uVar1 = *(ushort *)(local_20 + 8);
      if (*(uint *)(param_1 + 1) != (uint)uVar1) {
        *(uint *)(param_1 + 1) = (uint)uVar1;
        uVar3 = CONCAT71((uint7)(byte)(uVar1 >> 8),1);
        goto LAB_140af8693;
      }
    }
  }
LAB_140af86b1:
  uVar3 = 0;
LAB_140af8693:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af86ba FUN_140af86ba body=1198 status=ok
// SIG undefined FUN_140af86ba(void)

undefined8 * FUN_140af86ba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_14b419eb0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = &PTR_FUN_14b00be10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = &PTR_FUN_14b00be10;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = &PTR_FUN_14b00be10;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = &PTR_FUN_14b00be10;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = &PTR_FUN_14b00be10;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = &PTR_FUN_14b00be10;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = &PTR_FUN_14b00be10;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = &PTR_FUN_14b00be10;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x44] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = &PTR_FUN_14b00be10;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = &PTR_FUN_14b00be10;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = &PTR_FUN_14b00be10;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = &PTR_FUN_14b00be10;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x76] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x9b] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x2000;
  param_1[0x9d] = 0;
  uVar1 = FUN_140938dea();
  param_1[0x9e] = uVar1;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  FUN_1405e5ea0();
  param_1[0xa1] = &DAT_14cb86bb8;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa0] = &PTR_FUN_14b41bda0;
  *(undefined2 *)((longlong)param_1 + 0x53a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x53c) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x529) = 0;
  *(undefined8 *)((longlong)param_1 + 0x531) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x6000;
  param_1[0xb2] = 0;
  param_1[0xb3] = &DAT_14a171d50;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0xffffffffffffffff;
  param_1[0xc5] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = &PTR_FUN_14b00be10;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xcb] = &PTR_FUN_14b00be10;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd0] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = &PTR_FUN_14b00be10;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = &PTR_FUN_14b00be10;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = &PTR_FUN_14b00be10;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe5] = &PTR_FUN_14b00be10;
  *(undefined4 *)((longlong)param_1 + 0x74f) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0x1000001;
  *(undefined1 *)((longlong)param_1 + 0x79c) = 0;
  param_1[0xb4] = DAT_14cb86da8 + 0x480;
  return param_1;
}



// FUNCTION 140af8b76 FUN_140af8b76 body=40 status=ok
// SIG undefined FUN_140af8b76(void)

undefined8 FUN_140af8b76(undefined8 param_1,int param_2)

{
  FUN_140af8b9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140af8b9e FUN_140af8b9e body=265 status=ok
// SIG undefined FUN_140af8b9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140af8b9e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b0eda50;
  FUN_140af8ca7(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000140af8c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140af8ca7 FUN_140af8ca7 body=78 status=ok
// SIG undefined FUN_140af8ca7(void)

void FUN_140af8ca7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140af8cf5 FUN_140af8cf5 body=267 status=ok
// SIG undefined FUN_140af8cf5(void)

void FUN_140af8cf5(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x20);
  puVar4 = (undefined8 *)(param_2 + 0x30);
  do {
    puVar3[-4] = 0;
    iVar1 = *(int *)(puVar4 + -5);
    _Src = (void *)puVar4[-6];
    *(int *)(puVar3 + -3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + -0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + -4,iVar1,0);
      memcpy((void *)puVar3[-4],_Src,(longlong)iVar1 * 2);
    }
    puVar3[-2] = 0;
    iVar1 = *(int *)(puVar4 + -3);
    uVar2 = puVar4[-4];
    *(int *)(puVar3 + -1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + -4) = 0;
    }
    else {
      FUN_140af8e78(puVar3 + -2,iVar1);
      FUN_140af8e00(puVar3[-2],uVar2);
    }
    *puVar3 = 0;
    iVar1 = *(int *)(puVar4 + -1);
    uVar2 = puVar4[-2];
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_140af8e78(puVar3,iVar1);
      FUN_140af8e00(*puVar3,uVar2);
    }
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar4 + 1);
    puVar3[2] = *puVar4;
    puVar3 = puVar3 + 8;
    puVar4 = puVar4 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140af8e00 FUN_140af8e00 body=119 status=ok
// SIG undefined FUN_140af8e00(void)

void FUN_140af8e00(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + -1);
    _Src = (void *)puVar2[-2];
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    param_1[2] = *puVar2;
    param_1 = param_1 + 3;
    puVar2 = puVar2 + 3;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140af8e78 FUN_140af8e78 body=323 status=ok
// SIG undefined FUN_140af8e78(void)

undefined8 FUN_140af8e78(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140af8ede;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140af8ede:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x18)) {
    uVar8 = uVar5 / 0x18 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 140af8fbc FUN_140af8fbc body=614 status=ok
// SIG undefined FUN_140af8fbc(void)

void FUN_140af8fbc(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 4;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)(param_1 + 0x10);
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147cc2668(param_2,puVar4);
    goto LAB_140af9100;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) << 2,(longlong)*(int *)(param_1 + 0x1c) << 2
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140af9100;
    local_30 = *(uint *)(param_1 + 0x18);
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      }
      else {
        FUN_14572512c(param_2,&local_30);
      }
    }
    else {
      local_30 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    uVar6 = *puVar4;
    uVar8 = ((longlong)uVar6 >> 0x18) + (longlong)puVar4;
    if ((uVar6 & 1) == 0) {
      uVar8 = uVar6;
    }
    lVar7 = *param_2;
LAB_140af90fa:
    (**(code **)(lVar7 + 0x170))(param_2,uVar8,(longlong)(int)local_30 << 2);
  }
  else {
    if (local_2c == 4) {
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar2;
      }
      if (local_30 < 0x20000000) {
        FUN_140af9224(puVar4);
        iVar3 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar3 + local_30;
        if ((uint)(*(int *)(param_1 + 0x1c) - iVar3) < local_30) {
          FUN_147cc282c(puVar4);
        }
        uVar8 = *puVar4;
        if ((uVar8 & 1) != 0) {
          uVar8 = (longlong)puVar4 + ((longlong)uVar8 >> 0x18);
        }
        lVar7 = *param_2;
        goto LAB_140af90fa;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140af9100:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af9224 FUN_140af9224 body=42 status=ok
// SIG undefined FUN_140af9224(void)

void FUN_140af9224(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140964c9c();
    return;
  }
  return;
}



// FUNCTION 140af924e FUN_140af924e body=30 status=ok
// SIG undefined FUN_140af924e(void)

void FUN_140af924e(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140af926c FUN_140af926c body=133 status=ok
// SIG undefined FUN_140af926c(void)

void FUN_140af926c(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_14aad9fb0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  FUN_144a5e012(&DAT_14cb0ba00,param_1,2);
  return;
}



// FUNCTION 140af92f2 FUN_140af92f2 body=88 status=ok
// SIG undefined FUN_140af92f2(void)

void FUN_140af92f2(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140927ab0();
  if (cVar1 != '\0') {
    FUN_14152b6d4(param_1,1);
  }
  FUN_140af938a(param_1,param_2);
  if (*(char *)(param_1 + 0x5f9) == '\x01') {
    FUN_140af934a(param_1,*(undefined1 *)(param_1 + 0x5f8));
    if (*(char *)(param_1 + 0x5f9) == '\x01') {
      *(undefined1 *)(param_1 + 0x5f9) = 0;
    }
  }
  return;
}



// FUNCTION 140af934a FUN_140af934a body=63 status=ok
// SIG undefined FUN_140af934a(void)

void FUN_140af934a(longlong *param_1,byte param_2)

{
  if (*(byte *)((longlong)param_1 + 0x409) == param_2) {
    return;
  }
  *(byte *)((longlong)param_1 + 0x409) = param_2;
  FUN_140af93c2(param_1,param_2 ^ 3);
                    /* WARNING: Could not recover jumptable at 0x000140af9386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x650))(param_1,*(undefined1 *)((longlong)param_1 + 0x409));
  return;
}



// FUNCTION 140af938a FUN_140af938a body=55 status=ok
// SIG undefined FUN_140af938a(void)

void FUN_140af938a(longlong param_1)

{
  FUN_1403d8a98();
  FUN_140af96da(param_1);
  if (*(char *)(param_1 + 0x409) == '\x01') {
    FUN_140af93c2(param_1,3);
  }
  FUN_140af93c2(param_1,1);
  return;
}



// FUNCTION 140af93c2 FUN_140af93c2 body=133 status=ok
// SIG undefined FUN_140af93c2(void)

void FUN_140af93c2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x440);
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x448) * 5;
    do {
      lVar4 = plVar5[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *plVar5;
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar6);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar6);
      }
      plVar3 = (longlong *)plVar5[2];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      }
      plVar5 = plVar5 + 5;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 140af9448 FUN_140af9448 body=55 status=ok
// SIG undefined FUN_140af9448(void)

void FUN_140af9448(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 == '\x04') && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x38;
    do {
      FUN_140af94c6(lVar1);
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140af9480 FUN_140af9480 body=70 status=ok
// SIG undefined FUN_140af9480(void)

void FUN_140af9480(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 140af94c6 FUN_140af94c6 body=255 status=ok
// SIG undefined FUN_140af94c6(void)

void FUN_140af94c6(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*param_1 != '\x01') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  if (param_1[0x30] != '\x01') goto LAB_140af9502;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_140927942();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) goto LAB_140af9502;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      goto LAB_140af9502;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_1 + 0x18);
    *(longlong *)(param_1 + 0x28) = lVar5;
    if (lVar5 == 0) goto LAB_140af9502;
  }
  FUN_1410d99c0(lVar1,&DAT_14cb1afa8,1);
LAB_140af9502:
  FUN_140af95c6(lVar1,0);
  return;
}



// FUNCTION 140af95c6 FUN_140af95c6 body=142 status=ok
// SIG undefined FUN_140af95c6(void)

void FUN_140af95c6(undefined8 param_1,char param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != '\0') {
    FUN_140af9c32(param_1);
  }
  FUN_1448c1924(param_1,&local_28);
  if (local_28 != 0) {
    FUN_140929af0();
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af9666 FUN_140af9666 body=43 status=ok
// SIG undefined FUN_140af9666(void)

void FUN_140af9666(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == '\x04') || (param_2 == '\x02')) {
    uVar1 = FUN_14085b07e(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  return;
}



// FUNCTION 140af9692 FUN_140af9692 body=71 status=ok
// SIG undefined FUN_140af9692(void)

void FUN_140af9692(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 140af96da FUN_140af96da body=1253 status=ok
// SIG undefined FUN_140af96da(void)

void FUN_140af96da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x460) != '\x01') ||
     (lVar7 = FUN_1447210f0(), uVar3 = DAT_14cb1ae68, lVar7 == 0)) goto LAB_140af9acd;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_40,uVar3,lVar7);
  plVar9 = local_38;
  if ((local_40 == 0) || (local_38 == (longlong *)0x0)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar17 = local_38 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar10 = (int *)((longlong)plVar9 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_38 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar10 = (int *)((longlong)local_38 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (plVar9 == (longlong *)0x0) goto LAB_140af9acd;
  iVar4 = (int)plVar9[1];
  do {
    plVar17 = (longlong *)0x0;
    if (iVar4 == 0) break;
    LOCK();
    iVar14 = (int)plVar9[1];
    bVar21 = iVar4 == iVar14;
    if (bVar21) {
      *(int *)(plVar9 + 1) = iVar4 + 1;
      iVar14 = iVar4;
    }
    iVar4 = iVar14;
    UNLOCK();
    plVar17 = plVar9;
  } while (!bVar21);
  LOCK();
  piVar10 = (int *)((longlong)plVar9 + 0xc);
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (plVar17 == (longlong *)0x0) goto LAB_140af9acd;
  if (local_40 != 0) {
    lVar7 = param_1;
    if (*(char *)(param_1 + 0x408) == '\x01') {
LAB_140af97c9:
      lVar13 = lVar7;
      lVar7 = lVar13;
      if (*(longlong *)(lVar13 + 0x20) != 0) goto code_r0x000140af97d8;
      goto LAB_140af97e6;
    }
    goto LAB_140af9abc;
  }
  goto LAB_140af9ac3;
LAB_140af993e:
  iVar1 = (int)plVar9[2];
  if (iVar1 == -1) goto LAB_140af996a;
  goto LAB_140af9927;
code_r0x000140af97d8:
  lVar7 = *(longlong *)(lVar13 + 0x20);
  if ((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) goto LAB_140af97c9;
  lVar7 = FUN_142840154(lVar13);
LAB_140af97e6:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar13 + 0x20);
    goto LAB_140af97c9;
  }
  lVar7 = *(longlong *)(lVar7 + 0x18);
  lVar13 = *(longlong *)(param_1 + 0x18);
  uVar19 = (uint)lVar13;
  uVar16 = (uint)lVar7;
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  iVar14 = (int)((ulonglong)lVar7 >> 0x20);
  uVar12 = (uint)((ulonglong)lVar13 >> 0x10);
  uVar6 = (uint)((ulonglong)lVar7 >> 0x10);
  if (*(int *)(local_40 + 0xf0) != *(int *)(local_40 + 0x11c)) {
    uVar5 = (uVar19 << 0x10 | uVar19 & 0xffff) + iVar4 + (uVar12 << 0x13 | uVar12 & 0xffff) +
            ((uVar19 & 0xffff) >> 4);
    uVar11 = uVar5 >> 0xd ^
             ((uVar16 << 0x10 | uVar16 & 0xffff) + iVar14 + (uVar6 << 0x13 | uVar6 & 0xffff) +
             ((uVar16 & 0xffff) >> 4)) - uVar5;
    uVar15 = uVar11 << 8 ^ (-0x61c88647 - uVar5) - uVar11;
    uVar18 = uVar15 >> 0xd ^ (uVar5 - uVar11) - uVar15;
    uVar5 = uVar18 >> 0xc ^ (uVar11 - uVar15) - uVar18;
    uVar11 = uVar5 << 0x10 ^ (uVar15 - uVar18) - uVar5;
    uVar15 = uVar11 >> 5 ^ (uVar18 - uVar5) - uVar11;
    uVar5 = uVar15 >> 3 ^ (uVar5 - uVar11) - uVar15;
    uVar11 = uVar5 << 10 ^ (uVar11 - uVar15) - uVar5;
    lVar8 = local_40 + 0x120;
    if (*(longlong *)(local_40 + 0x128) != 0) {
      lVar8 = *(longlong *)(local_40 + 0x128);
    }
    iVar1 = *(int *)(lVar8 + ((longlong)(int)(uVar11 >> 0xf ^ uVar15 - (uVar5 + uVar11)) &
                             (longlong)*(int *)(local_40 + 0x130) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(local_40 + 0xe8);
LAB_140af9927:
      plVar9 = (longlong *)(lVar2 + (longlong)iVar1 * 0x18);
      if ((*plVar9 != lVar7) || (*(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x18) != lVar13))
      goto LAB_140af993e;
      iVar20 = *(int *)(lVar8 + (longlong)*(int *)((longlong)plVar9 + 0x14) * 4);
      if (iVar20 == iVar1) {
        piVar10 = (int *)(lVar8 + (longlong)*(int *)((longlong)plVar9 + 0x14) * 4);
      }
      else {
        do {
          piVar10 = (int *)(lVar2 + (longlong)iVar20 * 0x18 + 0x10);
          iVar20 = *piVar10;
        } while (iVar20 != iVar1);
      }
      *piVar10 = (int)plVar9[2];
      FUN_140af9bc0();
    }
  }
LAB_140af996a:
  if (*(int *)(local_40 + 0x140) != *(int *)(local_40 + 0x16c)) {
    uVar12 = iVar4 + (uVar19 << 0x10 | uVar19 & 0xffff) + (uVar12 << 0x13 | uVar12 & 0xffff) +
             ((uVar19 & 0xffff) >> 4);
    uVar6 = uVar12 >> 0xd ^
            (iVar14 + (uVar16 << 0x10 | uVar16 & 0xffff) + (uVar6 << 0x13 | uVar6 & 0xffff) +
            ((uVar16 & 0xffff) >> 4)) - uVar12;
    uVar16 = uVar6 << 8 ^ (-0x61c88647 - uVar12) - uVar6;
    uVar19 = uVar16 >> 0xd ^ (uVar12 - uVar6) - uVar16;
    uVar12 = uVar19 >> 0xc ^ (uVar6 - uVar16) - uVar19;
    uVar6 = uVar12 << 0x10 ^ (uVar16 - uVar19) - uVar12;
    uVar16 = uVar6 >> 5 ^ (uVar19 - uVar12) - uVar6;
    uVar12 = uVar16 >> 3 ^ (uVar12 - uVar6) - uVar16;
    uVar6 = uVar12 << 10 ^ (uVar6 - uVar16) - uVar12;
    lVar8 = local_40 + 0x170;
    if (*(longlong *)(local_40 + 0x178) != 0) {
      lVar8 = *(longlong *)(local_40 + 0x178);
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(local_40 + 0x180) - 1U &
                             (uVar6 >> 0xf ^ uVar16 - (uVar12 + uVar6))) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)(*(longlong *)(local_40 + 0x138) + (longlong)iVar4 * 0x28);
        if ((*plVar9 == lVar7) &&
           (*(longlong *)(*(longlong *)(local_40 + 0x138) + 8 + (longlong)iVar4 * 0x28) == lVar13))
        goto LAB_140af9aac;
        iVar4 = (int)plVar9[4];
      } while (iVar4 != -1);
    }
  }
  plVar9 = (longlong *)0x0;
LAB_140af9aac:
  lVar7 = plVar9[2];
  *(undefined1 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
LAB_140af9abc:
  *(undefined1 *)(param_1 + 0x460) = 0;
LAB_140af9ac3:
  LOCK();
  plVar9 = plVar17 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar10 = (int *)((longlong)plVar17 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_140af9acd:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af9bc0 FUN_140af9bc0 body=114 status=ok
// SIG undefined FUN_140af9bc0(void)

void FUN_140af9bc0(longlong *param_1,int param_2)

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



// FUNCTION 140af9c32 FUN_140af9c32 body=122 status=ok
// SIG undefined FUN_140af9c32(void)

void FUN_140af9c32(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(param_1,&local_28);
  if (local_28 != 0) {
    FUN_140af9cbe();
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140af9cbe FUN_140af9cbe body=500 status=ok
// SIG undefined FUN_140af9cbe(void)

void FUN_140af9cbe(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_768 [40];
  undefined1 local_740 [1792];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_768;
  iVar1 = *(int *)(param_1 + 0x1ac);
  FUN_14092d378(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1ac) != 0)) {
    FUN_147e286fa(param_1 + 0x1a0);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) goto LAB_140af9e72;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x2000000000;
  FUN_1414f66ac(param_1 + 0x28,local_740);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xc);
  if (iVar1 == 0) {
LAB_140af9eac:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != iVar1 || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
      goto LAB_140af9eac;
      uVar5 = *puVar3;
    }
  }
  puVar6 = local_740;
  if (local_40 != (undefined1 *)0x0) {
    puVar6 = local_40;
  }
  if ((longlong)(int)local_38 != 0) {
    lVar7 = (longlong)(int)local_38 * 0x38;
    do {
      if ((((*(int *)(puVar6 + 0x1c) == 0) || (uVar2 = *(uint *)(puVar6 + 0x18), (int)uVar2 < 0)) ||
          (DAT_14c9647dc <= (int)uVar2)) ||
         (((plVar4 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(puVar6 + 0x1c))) ||
          (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
           (plVar4 = (longlong *)*plVar4, plVar4 == (longlong *)0x0)))))) {
        plVar4 = *(longlong **)(puVar6 + 0x20);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x48))(plVar4,puVar6,uVar5);
        }
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                  (*(longlong **)(param_1 + 0x10),plVar4,0);
        (**(code **)(*plVar4 + 0x5c8))(plVar4,0);
      }
      puVar6 = puVar6 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_140af9e72:
  if ((local_30 ^ (ulonglong)auStack_768) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140af9eb4 FUN_140af9eb4 body=253 status=ok
// SIG undefined FUN_140af9eb4(void)

undefined8 *
FUN_140af9eb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  if (param_5 == '\0') {
    local_48 = 0;
    FUN_140af9fb2(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8c18) {
    FUN_144b3d300(&DAT_14cae8c18);
    if (DAT_14cae8c18 == -1) {
      FUN_147b8ed28();
      _Init_thread_footer(&DAT_14cae8c18);
    }
  }
  do {
    FUN_147b8ee76(&local_38,param_4);
    *param_1 = local_38;
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_140be85e0(0,param_2,local_38,0);
  } while (lVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140af9fb2 FUN_140af9fb2 body=770 status=ok
// SIG undefined FUN_140af9fb2(void)

ulonglong *
FUN_140af9fb2(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    param_4 = *(ulonglong *)(param_3 + 0x18);
  }
  *param_1 = 0;
  local_68 = param_4 & 0xffffffff;
  do {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9642e0) {
      FUN_144b3d300(&DAT_14c9642e0);
      if (DAT_14c9642e0 == -1) {
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        DAT_14c9642d8 = (ulonglong)DAT_14c892e7c;
        _Init_thread_footer(&DAT_14c9642e0);
      }
    }
    if (param_4 == DAT_14c9642d8) {
      if (param_2 != 0) {
        iVar4 = *(int *)(param_3 + 200) + 1;
        *(int *)(param_3 + 200) = iVar4;
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        uVar6 = CONCAT44(iVar4,DAT_14c892efc);
        goto LAB_140afa0a9;
      }
      iVar4 = *(int *)(param_3 + 200) + 1;
      *(int *)(param_3 + 200) = iVar4;
      uVar2 = FUN_14682bf7b(0xef);
      FUN_140002266(&local_60,L"/Temp/%s",uVar2);
      puVar3 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar3 = local_60;
      }
      FUN_14495448a(&local_50,puVar3,iVar4);
      *param_1 = local_50;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((param_2 + 1U < 2) || ((param_5 & 2) != 0)) {
        uVar5 = *(int *)(param_3 + 200) + 1;
        *(uint *)(param_3 + 200) = uVar5;
      }
      else {
        LOCK();
        UNLOCK();
        uVar5 = DAT_14c75ecf4 - 1;
        DAT_14c75ecf4 = DAT_14c75ecf4 + -1;
      }
      uVar6 = ((ulonglong)uVar5 << 0x20) + local_68;
LAB_140afa0a9:
      *param_1 = uVar6;
    }
    if (param_2 == -1 || (param_5 & 2) != 0) {
      FUN_1400021e4(param_1,&local_60);
      puVar3 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar3 = local_60;
      }
      local_88 = 0;
      lVar1 = FUN_140277cc4(0,puVar3,0,0);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c964670) {
        FUN_144b3d300(&DAT_14c964670);
        if (DAT_14c964670 == -1) {
          FUN_145794a58(&DAT_14c964408);
          atexit((_func_5014 *)&LAB_142840318);
          _Init_thread_footer(&DAT_14c964670);
        }
      }
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = local_88 & 0xffffffffffffff00;
      lVar1 = FUN_140163a0e(&DAT_14c964408,0);
    }
    if ((lVar1 == 0) && (*param_1 != param_4)) {
      if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 140afa2b5 FUN_140afa2b5 body=92 status=ok
// SIG undefined FUN_140afa2b5(void)

undefined8 FUN_140afa2b5(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_2 + 0x508) != 0) && ((longlong)*(int *)(param_2 + 0x518) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x510) + lVar2) != 0) goto LAB_140afa2f9;
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_2 + 0x518) * 8 != lVar2);
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return 1;
  }
LAB_140afa2f9:
  uVar1 = FUN_1407df772(param_2 + 0x500,param_1 + 0xd8);
  return uVar1;
}



// FUNCTION 140afa312 FUN_140afa312 body=88 status=ok
// SIG undefined FUN_140afa312(void)

void FUN_140afa312(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_140afa36a();
  memcpy((void *)(param_2 + 0x40),(void *)(param_1 + 0x730),0x2c8);
  uVar1 = *(undefined8 *)(param_1 + 0xa08);
  uVar2 = *(undefined8 *)(param_1 + 0xa10);
  uVar3 = *(undefined8 *)(param_1 + 0xa18);
  *(undefined8 *)(param_2 + 0x310) = *(undefined8 *)(param_1 + 0xa00);
  *(undefined8 *)(param_2 + 0x318) = uVar1;
  *(undefined8 *)(param_2 + 800) = uVar2;
  *(undefined8 *)(param_2 + 0x328) = uVar3;
  *(undefined8 *)(param_2 + 0x330) = *(undefined8 *)(param_1 + 0xa20);
  return;
}



// FUNCTION 140afa36a FUN_140afa36a body=1499 status=ok
// SIG undefined FUN_140afa36a(void)

void FUN_140afa36a(longlong param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_198 [36];
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  longlong *local_150;
  undefined8 local_148;
  longlong local_140;
  float local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined2 uStack_10a;
  undefined6 local_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar12 = *(longlong *)(param_1 + 0x1a0);
  lVar22 = lVar12;
  local_170 = param_2;
  if (0 < *(int *)(lVar12 + 0x20)) {
    plVar14 = *(longlong **)(lVar12 + 0x18);
    *(int *)(param_2 + 0x28) = (int)plVar14[1];
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((longlong)plVar14 + 0xc);
    if ((int)plVar14[1] == 0) {
      fVar29 = 0.0;
    }
    else {
      fVar29 = *(float *)((longlong)plVar14 + 0x14);
      fVar33 = (float)FUN_148acb5dc(plVar14);
      fVar29 = fVar29 / fVar33;
    }
    lVar23 = local_170;
    *(float *)(local_170 + 0x38) = fVar29;
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 8);
    fVar29 = (float)FUN_148acb000(lVar22,*(undefined4 *)(lVar22 + 0x14),1);
    fVar33 = (float)FUN_148acb5dc(plVar14,(int)plVar14[1]);
    *(float *)(lVar23 + 0x3c) = fVar33 * fVar29 * *(float *)(*plVar14 + 0x30);
    lVar22 = *(longlong *)(param_1 + 0x1a0);
  }
  if (0 < *(int *)(lVar22 + 0x10)) {
    lVar22 = *(longlong *)(lVar22 + 8);
    fVar29 = 0.0;
    uVar31 = 0;
    if (*(char *)(lVar22 + 0x24) == '\x01') {
      uVar31 = *(undefined4 *)(lVar22 + 0x14);
    }
    *(undefined4 *)(local_170 + 0x30) = uVar31;
    if (*(char *)(lVar22 + 0x24) == '\x01') {
      fVar33 = *(float *)(lVar22 + 0xc);
      fVar29 = (float)FUN_148acb000(lVar22,*(undefined4 *)(lVar22 + 0x14),1);
      fVar29 = fVar29 * fVar33;
    }
    *(float *)(local_170 + 0x34) = fVar29;
  }
  if (0 < *(int *)(lVar12 + 0x40)) {
    local_150 = (longlong *)(local_170 + 0x18);
    lVar27 = 0xb0;
    lVar28 = 0x10;
    lVar23 = 0;
    lVar22 = 0;
    lVar24 = 0;
    local_140 = param_1;
    do {
      lVar20 = local_140;
      lVar13 = *(longlong *)(lVar12 + 0x38);
      local_154 = *(float *)(lVar13 + 0x30 + lVar22);
      local_158 = *(float *)(lVar13 + 0x2c + lVar22);
      fVar33 = local_154 * local_158 - (float)*(double *)(lVar13 + 0x48 + lVar22);
      fVar29 = ABS(fVar33);
      pfVar1 = (float *)(*(longlong *)(lVar13 + lVar22) + 0x58);
      local_171 = *pfVar1 <= fVar29 && fVar29 != *pfVar1;
      local_138 = (float)*(double *)(lVar13 + 0x50 + lVar22);
      pfVar1 = (float *)(*(longlong *)(lVar13 + lVar22) + 0x5c);
      local_172 = *pfVar1 <= ABS(local_138) && ABS(local_138) != *pfVar1;
      lVar21 = *(longlong *)(local_140 + 0x660);
      dVar7 = *(double *)(lVar21 + -0x10 + lVar28);
      dVar8 = *(double *)(lVar21 + -8 + lVar28);
      dVar9 = *(double *)(lVar21 + lVar28);
      dVar15 = dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8;
      if (((dVar15 != 1.0) || (dVar16 = dVar9, dVar17 = dVar8, dVar18 = dVar7, NAN(dVar15))) &&
         (dVar16 = DAT_14c8464f0, dVar17 = DAT_14c8464e8, dVar18 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar15)) {
        dVar15 = 1.0 / SQRT(dVar15);
        dVar16 = dVar9 * dVar15;
        dVar17 = dVar8 * dVar15;
        dVar18 = dVar7 * dVar15;
      }
      local_173 = *(undefined1 *)(lVar13 + 0x9c + lVar22);
      uVar31 = *(undefined4 *)(lVar13 + 100 + lVar22);
      local_168 = *(undefined4 *)(lVar13 + 0x60 + lVar22);
      local_15c = *(undefined4 *)(lVar13 + 0xb4 + lVar22);
      local_160 = *(undefined4 *)(lVar13 + 0xb0 + lVar22);
      local_164 = *(undefined4 *)(lVar13 + 0x98 + lVar22);
      fVar29 = *(float *)(*(longlong *)(*(longlong *)(lVar12 + 0x48) + lVar23) + 0x30);
      fVar30 = (float)FUN_140afa946(*(longlong *)(lVar12 + 0x48) + lVar23);
      lVar13 = *(longlong *)(lVar12 + 0x48);
      fVar4 = *(float *)(*(longlong *)(lVar13 + lVar23) + 0x38);
      fVar32 = 1.0;
      if (1e-08 < fVar4) {
        fVar32 = *(float *)(lVar13 + 8 + lVar23) / fVar4;
      }
      uVar5 = *(undefined4 *)(lVar13 + 0x28 + lVar23);
      if (1.0 <= fVar32) {
        fVar32 = 1.0;
      }
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      lVar13 = *(longlong *)(lVar12 + 0x38);
      fVar4 = *(float *)(lVar13 + 0x3c + lVar22);
      fVar6 = *(float *)(lVar13 + 0x40 + lVar22);
      uVar25 = *(undefined1 *)(lVar13 + 0xe1 + lVar22);
      lVar13 = *(longlong *)(lVar20 + 0x690);
      bVar10 = *(byte *)(lVar13 + -3 + lVar27);
      local_f8 = *(undefined8 *)(lVar13 + -0x78 + lVar27);
      puVar2 = (undefined8 *)(lVar13 + -0x88 + lVar27);
      uVar26 = *puVar2;
      uVar19 = puVar2[1];
      local_108 = (undefined6)uVar26;
      uStack_102 = (undefined2)((ulonglong)uVar26 >> 0x30);
      uStack_100 = (undefined6)uVar19;
      uStack_fa = (undefined2)((ulonglong)uVar19 >> 0x30);
      local_118 = *(undefined8 *)(lVar13 + -0x90 + lVar27);
      puVar3 = (undefined4 *)(lVar13 + -0xa0 + lVar27);
      local_128 = *puVar3;
      uStack_124 = puVar3[1];
      uStack_120 = puVar3[2];
      uStack_11c = puVar3[3];
      uVar26 = *(undefined8 *)(lVar13 + lVar27);
      iVar11 = *(int *)(local_170 + 0x20);
      *(uint *)(local_170 + 0x20) = iVar11 + 1U;
      if (*(uint *)(local_170 + 0x24) < iVar11 + 1U) {
        local_174 = uVar25;
        local_148 = uVar26;
        FUN_140afa9b8(local_150,iVar11);
        uVar25 = local_174;
        uVar26 = local_148;
      }
      lVar13 = *local_150;
      lVar21 = (longlong)iVar11 * 0x98;
      *(undefined1 *)(lVar13 + lVar21) = local_173;
      *(undefined4 *)(lVar13 + 4 + lVar21) = uVar31;
      *(undefined4 *)(lVar13 + 8 + lVar21) = local_168;
      *(float *)(lVar13 + 0xc + lVar21) = local_154;
      *(float *)(lVar13 + 0x10 + lVar21) = local_158;
      *(undefined4 *)(lVar13 + 0x14 + lVar21) = local_15c;
      *(undefined4 *)(lVar13 + 0x18 + lVar21) = local_160;
      *(undefined4 *)(lVar13 + 0x1c + lVar21) = local_164;
      *(undefined1 *)(lVar13 + 0x20 + lVar21) = local_171;
      *(float *)(lVar13 + 0x24 + lVar21) = fVar33;
      *(undefined1 *)(lVar13 + 0x28 + lVar21) = local_172;
      *(float *)(lVar13 + 0x2c + lVar21) = local_138;
      *(double *)(lVar13 + 0x30 + lVar21) = dVar18;
      *(double *)(lVar13 + 0x38 + lVar21) = dVar17;
      *(double *)(lVar13 + 0x40 + lVar21) = dVar16;
      *(float *)(lVar13 + 0x48 + lVar21) = fVar29 + fVar30;
      *(undefined4 *)(lVar13 + 0x4c + lVar21) = uVar5;
      *(float *)(lVar13 + 0x50 + lVar21) = fVar32;
      *(float *)(lVar13 + 0x54 + lVar21) = fVar4 / 10000.0;
      *(float *)(lVar13 + 0x58 + lVar21) = fVar6 / 10000.0;
      *(undefined1 *)(lVar13 + 0x5c + lVar21) = uVar25;
      *(byte *)(lVar13 + 0x5d + lVar21) = bVar10 & 1;
      puVar2 = (undefined8 *)(lVar13 + 0x68 + lVar21);
      *puVar2 = CONCAT26(uStack_fa,uStack_100);
      puVar2[1] = local_f8;
      puVar2 = (undefined8 *)(lVar13 + 0x5e + lVar21);
      *puVar2 = CONCAT62(local_108,uStack_10a);
      puVar2[1] = CONCAT62(uStack_100,uStack_102);
      puVar3 = (undefined4 *)(lVar13 + 0x78 + lVar21);
      *puVar3 = local_128;
      puVar3[1] = uStack_124;
      puVar3[2] = uStack_120;
      puVar3[3] = uStack_11c;
      *(undefined8 *)(lVar13 + 0x88 + lVar21) = local_118;
      *(undefined8 *)(lVar13 + 0x90 + lVar21) = uVar26;
      lVar24 = lVar24 + 1;
      lVar27 = lVar27 + 0x100;
      lVar22 = lVar22 + 0xe8;
      lVar23 = lVar23 + 0x88;
      lVar28 = lVar28 + 0x18;
    } while (lVar24 < *(int *)(lVar12 + 0x40));
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140afa946 FUN_140afa946 body=114 status=ok
// SIG undefined FUN_140afa946(void)

float FUN_140afa946(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  
  iVar1 = *(int *)(*param_1 + 0x60);
  fVar3 = *(float *)(param_1 + 9) - *(float *)(*param_1 + 0x38);
  if (iVar1 != 0) {
    if ((int)param_1[0x10] < iVar1) {
      *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
    }
    iVar1 = *(int *)((longlong)param_1 + 0x7c);
    *(int *)((longlong)param_1 + 0x7c) = iVar1 + 1;
    *(float *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x54) = fVar3;
    if (*(int *)(*param_1 + 0x60) <= *(int *)((longlong)param_1 + 0x7c)) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    }
    iVar1 = (int)param_1[0x10];
    fVar3 = 0.0;
    if (0 < (longlong)iVar1) {
      lVar2 = 0;
      do {
        fVar3 = fVar3 + *(float *)((longlong)param_1 + lVar2 * 4 + 0x54);
        lVar2 = lVar2 + 1;
      } while (iVar1 != lVar2);
    }
    fVar3 = fVar3 / (float)iVar1;
  }
  return fVar3;
}



// FUNCTION 140afa9b8 FUN_140afa9b8 body=369 status=ok
// SIG undefined FUN_140afa9b8(void)

void FUN_140afa9b8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x98;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140afaa40;
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
LAB_140afaa40:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}



// FUNCTION 140afab2a FUN_140afab2a body=486 status=ok
// SIG undefined FUN_140afab2a(void)

void FUN_140afab2a(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar10 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar10 = 0;
    uVar9 = 0x7fffffff;
    uVar6 = (uint)local_60;
    do {
      if (uVar9 == 0) {
        iVar10 = -1;
        break;
      }
      iVar4 = iVar10;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar9, 7 < (int)uVar9)) {
        while (uVar9 = uVar7, iVar4 = iVar10, local_4c = uVar6,
              (*local_58 & 0x8080808080808080) == 0) {
          local_58 = local_58 + 1;
          iVar10 = iVar10 + 8;
          local_4c = uVar6 - 8;
          uVar9 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_4c;
          iVar4 = iVar10;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar9, bVar1)) break;
        }
      }
LAB_140afac15:
      do {
        iVar10 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
        uVar7 = FUN_14003e942(&local_58,&local_4c);
        uVar6 = local_4c;
        if (uVar7 < 0x10000) {
          uVar9 = uVar9 - 1;
          iVar4 = iVar10 + 1;
          if (0x7f < uVar7) goto LAB_140afac15;
        }
        else {
          if (1 < uVar9) {
            uVar9 = uVar9 - 2;
            iVar4 = iVar10 + 2;
            goto LAB_140afac15;
          }
          uVar9 = 0;
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar10;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_78,iVar10 + 1,1);
  *(undefined2 *)(local_78[0] + (longlong)iVar10 * 2) = 0;
  FUN_1446e71a3(local_78[0],(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_78);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140afad12 thunk_FUN_140afad18 body=5 status=ok
// SIG undefined thunk_FUN_140afad18(void)

void thunk_FUN_140afad18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  longlong lStack_a0;
  void *pvStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong *plStack_80;
  code *apcStack_78 [2];
  undefined8 *puStack_68;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pvStack_98 = (void *)0x0;
  iStack_90 = *(int *)(param_2 + 1);
  lVar8 = (longlong)iStack_90;
  pvVar3 = (void *)*param_2;
  lStack_a0 = param_1;
  if (lVar8 == 0) {
    uStack_8c = 0;
  }
  else {
    FUN_1446dd670(&pvStack_98,iStack_90,0);
    memcpy(pvStack_98,pvVar3,lVar8 * 2);
  }
  plStack_80 = *(longlong **)(param_1 + 0x10);
  if (plStack_80 == (longlong *)0x0) {
    plStack_80 = (longlong *)0x0;
    uStack_88 = 0;
  }
  else {
    iVar6 = (int)plStack_80[1];
    uStack_88 = 0;
    do {
      if (iVar6 == 0) {
        plStack_80 = (longlong *)0x0;
        goto LAB_140afadaa;
      }
      LOCK();
      iVar5 = (int)plStack_80[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plStack_80 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uStack_88 = *(undefined8 *)(param_1 + 8);
  }
LAB_140afadaa:
  apcStack_78[0] = (code *)0x0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar3 = pvStack_98;
  *puVar7 = &PTR_FUN_14b478d60;
  puVar7[1] = lStack_a0;
  puVar7[2] = 0;
  lVar8 = (longlong)iStack_90;
  *(int *)(puVar7 + 3) = iStack_90;
  puStack_68 = puVar7;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar7 + 2,iStack_90,0);
    memcpy((void *)puVar7[2],pvVar3,lVar8 * 2);
  }
  puVar7[4] = uStack_88;
  puVar7[5] = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
    apcStack_78[0] = FUN_143eb9e08;
  }
  FUN_1403911de(param_1,apcStack_78);
  plVar4 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (pvStack_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140afad18 FUN_140afad18 body=464 status=ok
// SIG undefined FUN_140afad18(void)

void FUN_140afad18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *local_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar8 = (longlong)local_90;
  pvVar3 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar8 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar3,lVar8 * 2);
  }
  local_80 = *(longlong **)(param_1 + 0x10);
  if (local_80 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    local_88 = 0;
  }
  else {
    iVar6 = (int)local_80[1];
    local_88 = 0;
    do {
      if (iVar6 == 0) {
        local_80 = (longlong *)0x0;
        goto LAB_140afadaa;
      }
      LOCK();
      iVar5 = (int)local_80[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(local_80 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_88 = *(undefined8 *)(param_1 + 8);
  }
LAB_140afadaa:
  local_78[0] = (code *)0x0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar3 = local_98;
  *puVar7 = &PTR_FUN_14b478d60;
  puVar7[1] = local_a0;
  puVar7[2] = 0;
  lVar8 = (longlong)local_90;
  *(int *)(puVar7 + 3) = local_90;
  local_68 = puVar7;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar7 + 2,local_90,0);
    memcpy((void *)puVar7[2],pvVar3,lVar8 * 2);
  }
  puVar7[4] = local_88;
  puVar7[5] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_143eb9e08;
  }
  FUN_1403911de(param_1,local_78);
  plVar4 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140afaeea FUN_140afaeea body=16954 status=ok
// SIG undefined FUN_140afaeea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140afaeea(code *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  code *pcVar12;
  undefined1 auVar13 [8];
  code **ppcVar14;
  char cVar15;
  code cVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  code *pcVar24;
  undefined8 uVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  double *pdVar32;
  code *pcVar33;
  uint *puVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  int iVar37;
  ushort uVar38;
  ushort uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  double dVar74;
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar88;
  undefined1 auVar89 [16];
  code *pcVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined4 uVar93;
  undefined4 uVar94;
  double dVar95;
  longlong *plVar96;
  double dVar97;
  undefined1 auStack_498 [32];
  code **local_478;
  code **local_470;
  uint local_468;
  code *local_460;
  wchar_t *local_458;
  code *local_450;
  undefined1 *local_448;
  undefined8 *local_440;
  undefined1 *local_438;
  code *local_430;
  float local_41c;
  undefined1 local_418 [16];
  code *local_400;
  code *local_3f8;
  double *local_3e0;
  undefined8 local_3d8;
  longlong *local_3c8;
  code *local_3b8;
  code *local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_388;
  double dStack_380;
  code *local_378;
  code *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined1 local_348 [16];
  double local_338;
  undefined1 local_328 [8];
  code **ppcStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  undefined1 local_2f0;
  undefined7 uStack_2ef;
  double dStack_2e8;
  double local_2e0;
  code *local_2d8;
  undefined8 *local_2d0;
  double local_2c8;
  double local_2c0;
  code *local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  code *local_298;
  double dStack_290;
  undefined1 local_288 [16];
  code *local_278;
  double dStack_270;
  longlong *local_268;
  longlong local_260;
  code *local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  code *local_238;
  double local_230;
  undefined8 local_228;
  undefined8 local_220;
  code *local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  int local_1d8;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  double dStack_160;
  double dStack_158;
  code *local_150;
  double dStack_148;
  undefined8 local_140;
  double dStack_138;
  undefined8 local_130;
  double dStack_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if ((*(longlong *)(param_1 + 0x1a00) != 0) &&
     (pcVar33 = *(code **)(param_1 + 0x1700), pcVar33 != (code *)0x0)) {
    local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
    local_150 = (code *)((ulonglong)local_150 & 0xffffffff00000000);
    FUN_1456bb102(&local_178,param_1);
    local_398 = (double)CONCAT44(local_398._4_4_,*(uint *)((longlong)pcVar33 + 0x1d00));
    local_3e0 = (double *)CONCAT44(local_3e0._4_4_,(uint)(byte)param_1[0x1ac0]);
    if (*(uint *)((longlong)pcVar33 + 0x1d00) != (uint)(byte)param_1[0x1ac0]) {
      pcVar90 = *(code **)(param_1 + 0x1a00);
      iVar17 = *(int *)((longlong)pcVar90 + 0x1158);
      local_3b8 = pcVar33;
      if (iVar17 == 0) {
        uVar36 = 1;
        plVar96 = (longlong *)0x0;
        iVar28 = 0;
        iVar37 = 0;
      }
      else {
        puVar34 = *(uint **)((longlong)pcVar90 + 0x1150);
        if (*(uint **)((longlong)pcVar90 + 0x1150) == (uint *)0x0) {
          puVar34 = (uint *)((longlong)pcVar90 + 0x1140);
        }
        uVar27 = *puVar34;
        if (uVar27 == 0) {
          iVar37 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar37 = iVar17 + -1;
          }
          plVar96 = (longlong *)0x0;
          plVar22 = (longlong *)(ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            plVar22 = plVar96;
          }
          iVar37 = 0;
          do {
            if (plVar22 == plVar96) goto LAB_140afebab;
            iVar37 = iVar37 + 0x20;
            uVar27 = puVar34[(longlong)plVar96 + 1];
            plVar96 = (longlong *)((longlong)plVar96 + 1);
          } while (uVar27 == 0);
        }
        else {
          plVar96 = (longlong *)0x0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar27 & uVar27);
        uVar41 = uVar36 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar28 = (iVar37 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar28) {
          iVar28 = iVar17;
        }
      }
      if (iVar28 < iVar17) {
        uVar27 = 0xffffffff;
        local_400 = pcVar90;
        local_3b0 = (code *)((longlong)pcVar90 + 0x1140);
        do {
          local_3a8 = (double)CONCAT44(local_3a8._4_4_,uVar27);
          local_3d8 = (double)CONCAT44(local_3d8._4_4_,iVar37);
          lVar18 = *(longlong *)((longlong)pcVar90 + 0x1130) + (longlong)iVar28 * 0xe0;
          lVar19 = *(longlong *)((longlong)pcVar90 + 0x1130) + (longlong)iVar28 * 0xe0;
          local_2d8 = (code *)((ulonglong)local_2d8 & 0xffffffffffffff00);
          auVar64[0xf] = 0;
          auVar64._0_15_ = stack0xfffffffffffffcd9;
          _local_328 = auVar64 << 8;
          local_470 = &local_2d8;
          local_478._0_4_ = local_3e0._0_4_;
          local_3c8 = plVar96;
          FUN_140aff8e8(param_1,&local_1f8,lVar18,lVar19 + 8);
          local_470 = (code **)local_328;
          local_478 = (code **)CONCAT44(local_478._4_4_,local_398._0_4_);
          local_418._0_8_ = lVar18;
          FUN_140aff8e8(param_1,&local_278,lVar18,lVar19 + 8);
          if ((uStack_1f0 == dStack_270) && ((longlong *)local_1e8._0_8_ == local_268)) {
            if (local_1d8 == (int)local_258) {
              if (1 < local_1d8) {
                lVar18 = 0;
                while( true ) {
                  uVar38 = *(ushort *)(local_1e8._8_8_ + lVar18);
                  uVar41 = (ulonglong)uVar38;
                  uVar39 = *(ushort *)(local_260 + lVar18);
                  if (uVar38 != uVar39) break;
                  if (uVar38 == 0) goto LAB_140afdd42;
LAB_140afde87:
                  lVar18 = lVar18 + 2;
                }
                pcVar90 = local_400;
                if ((uVar39 | uVar38) < 0x80) {
                  uVar38 = (ushort)(byte)(&DAT_149e05da0)[uVar41];
                  uVar40 = (ulonglong)uVar39;
                  uVar39 = (ushort)(byte)(&DAT_149e05da0)[uVar40];
                  if ((&DAT_149e05da0)[uVar41] == (&DAT_149e05da0)[uVar40]) goto LAB_140afde87;
                }
                if (uVar38 != uVar39) goto LAB_140afdaaa;
              }
            }
            else if ((int)local_258 + local_1d8 != 1) goto LAB_140afdaaa;
          }
          else {
LAB_140afdaaa:
            local_3f8 = param_1 + 0x1a20;
            pcVar33 = local_3f8;
            if ((char)local_2d8 != '\0') {
              pcVar33 = param_1 + 0x1a70;
            }
            if (*(int *)(pcVar33 + 8) != *(int *)(pcVar33 + 0x34)) {
              lVar18 = *(longlong *)local_418._0_8_;
              uVar27 = (uint)((ulonglong)lVar18 >> 0x10);
              uVar29 = (uint)lVar18 & 0xffff;
              pcVar24 = pcVar33 + 0x38;
              if (*(code **)(pcVar33 + 0x40) != (code *)0x0) {
                pcVar24 = *(code **)(pcVar33 + 0x40);
              }
              iVar17 = *(int *)(pcVar24 +
                               (ulonglong)
                               (*(int *)(pcVar33 + 0x48) - 1U &
                               (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar29) +
                               (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar29 >> 4)) * 4);
              if (iVar17 != -1) {
                do {
                  lVar21 = *(longlong *)pcVar33 + (longlong)iVar17 * 0x20;
                  if (*(longlong *)(*(longlong *)pcVar33 + (longlong)iVar17 * 0x20) == lVar18) {
                    if ((lVar21 != 0) && (lVar21 != -8)) {
                      iVar17 = *(int *)(lVar21 + 0x10);
                      if ((longlong)iVar17 != 0) {
                        lVar18 = *(longlong *)(lVar21 + 8);
                        lVar21 = 0;
                        do {
                          plVar96 = *(longlong **)(lVar18 + lVar21);
                          if ((plVar96 != (longlong *)0x0) &&
                             ((*(byte *)((longlong)plVar96 + 0x9e) & 0x10) != 0)) {
                            (**(code **)(*plVar96 + 0x2b0))();
                          }
                          lVar21 = lVar21 + 8;
                        } while ((longlong)iVar17 * 8 != lVar21);
                        lVar18 = *(longlong *)local_418._0_8_;
                        pcVar90 = local_400;
                      }
                      FUN_14576fa84(pcVar33,lVar18);
                    }
                    break;
                  }
                  iVar17 = *(int *)(lVar21 + 0x18);
                } while (iVar17 != -1);
              }
            }
            if (local_328[0] != '\0') {
              local_3f8 = param_1 + 0x1a70;
            }
            lVar18 = FUN_1402d1dc0(&local_278);
            if ((lVar18 != 0) && (iVar17 = *(int *)(lVar19 + 0x90), (longlong)iVar17 != 0)) {
              local_388 = *(double *)(lVar19 + 0x88);
              lVar18 = 0;
              do {
                local_288._0_8_ = DAT_14c846508;
                local_298 = DAT_14c8464f8;
                dStack_290 = DAT_14c846500;
                local_2b8 = DAT_14c8464e0;
                dStack_2b0 = DAT_14c8464e8;
                local_2a8._0_8_ = DAT_14c8464f0;
                uVar20 = *(undefined8 *)((longlong)local_388 + lVar18);
                lVar19 = *(longlong *)(param_1 + 0x428);
                uVar25 = FUN_1402d1dc0();
                local_460 = (code *)((ulonglong)local_460 & 0xffffffffffffff00);
                local_468 = local_468 & 0xffffff00;
                local_478 = &local_298;
                local_458 = (wchar_t *)CONCAT71(local_458._1_7_,1);
                local_470 = (code **)CONCAT44(local_470._4_4_,2);
                lVar19 = FUN_140a44468(uVar25,lVar19,uVar20,&local_2b8);
                if (lVar19 != 0) {
                  FUN_140affd74(param_1,lVar19);
                  uVar20 = *(undefined8 *)local_418._0_8_;
                  uVar27 = (uint)((ulonglong)uVar20 >> 0x10);
                  uVar29 = (uint)uVar20 & 0xffff;
                  plVar96 = (longlong *)
                            FUN_140affefe(local_3f8,
                                          ((uint)uVar20 << 0x10 | uVar29) +
                                          (int)((ulonglong)uVar20 >> 0x20) +
                                          (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar29 >> 4),
                                          local_418._0_8_);
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(lVar19);
                  }
                  iVar37 = (int)plVar96[1];
                  *(uint *)(plVar96 + 1) = iVar37 + 1U;
                  if (*(uint *)((longlong)plVar96 + 0xc) < iVar37 + 1U) {
                    FUN_140affc12(plVar96,iVar37);
                  }
                  *(longlong *)(*plVar96 + (longlong)iVar37 * 8) = lVar19;
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(lVar19);
                  }
                }
                lVar18 = lVar18 + 0x20;
              } while ((longlong)iVar17 * 0x20 != lVar18);
            }
          }
LAB_140afdd42:
          if (local_260 != 0) {
            FUN_1400020a8();
          }
          pcVar33 = local_3b0;
          plVar96 = local_3c8;
          iVar37 = (int)local_3d8;
          uVar27 = local_3a8._0_4_;
          if (local_1e8._8_8_ != 0) {
            FUN_1400020a8();
          }
          uVar27 = uVar27 & ~(uint)uVar36;
          pcVar24 = (code *)*(uint **)((longlong)pcVar90 + 0x1150);
          if (*(uint **)((longlong)pcVar90 + 0x1150) == (uint *)0x0) {
            pcVar24 = pcVar33;
          }
          iVar17 = *(int *)((longlong)pcVar90 + 0x1158);
          iVar28 = (int)plVar96;
          lVar18 = (longlong)iVar28;
          uVar29 = *(uint *)((longlong)pcVar24 + lVar18 * 4) & uVar27;
          if (uVar29 == 0) {
            iVar30 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar30 = iVar17 + -1;
            }
            iVar30 = iVar30 >> 5;
            iVar31 = iVar30;
            if (iVar30 < iVar28) {
              iVar31 = iVar28;
            }
            if (iVar30 <= iVar28) break;
            lVar19 = 0;
            while( true ) {
              iVar37 = iVar37 + 0x20;
              uVar29 = *(uint *)((longlong)pcVar24 + (lVar18 + lVar19 + 1) * 4);
              if (uVar29 != 0) break;
              lVar19 = lVar19 + 1;
              if (iVar31 - lVar18 == lVar19) goto LAB_140afebab;
            }
            plVar96 = (longlong *)(ulonglong)(iVar28 + (int)lVar19 + 1);
            uVar27 = 0xffffffff;
          }
          uVar36 = (ulonglong)(-uVar29 & uVar29);
          uVar41 = uVar36 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar28 = (iVar37 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while (iVar28 < iVar17);
      }
LAB_140afebab:
      param_1[0x1ac0] = *(code *)((longlong)local_3b8 + 0x1d00);
      pcVar33 = local_3b8;
    }
    local_2d0 = &local_178;
    ppcStack_320 = &local_2d8;
    local_328 = (undefined1  [8])param_1;
    local_2d8 = param_1;
    FUN_140b0025e(local_328,0);
    FUN_140b0025e(local_328);
    lVar18 = *(longlong *)(param_1 + 0x1700);
    if ((*(char *)(lVar18 + 0x1d08) == '\x01') && (*(char *)(lVar18 + 0x1d0a) == '\x01')) {
      if ((longlong)*(int *)(lVar18 + 0x1db0) < 1) {
        iVar17 = -1;
      }
      else {
        uVar41 = 0xffffffff;
        uVar36 = 0;
        do {
          if (*(float *)(*(longlong *)(lVar18 + 0x1da8) + uVar36 * 8) <= *(float *)(lVar18 + 0x1d24)
             ) {
            uVar41 = uVar36 & 0xffffffff;
          }
          iVar17 = (int)uVar41;
          uVar36 = uVar36 + 1;
        } while ((longlong)*(int *)(lVar18 + 0x1db0) != uVar36);
      }
      if (*(int *)(param_1 + 0x1be4) < iVar17) {
        lVar18 = *(longlong *)(param_1 + 0x1a00);
        local_3f8 = (code *)(lVar18 + 0x1270);
        local_470 = (code **)&local_2f0;
        local_2f0 = 0;
        local_478 = (code **)CONCAT44(local_478._4_4_,*(undefined4 *)((longlong)pcVar33 + 0x1d00));
        FUN_140aff8e8(param_1,&local_1f8,lVar18 + 0x1340);
        lVar19 = FUN_1402d1dc0(&local_1f8);
        if (lVar19 != 0) {
          iVar37 = *(int *)(param_1 + 0x1bf0);
          if ((longlong)iVar37 != 0) {
            lVar19 = *(longlong *)(param_1 + 0x1be8);
            lVar21 = 0;
            do {
              plVar96 = *(longlong **)(lVar19 + lVar21);
              if ((plVar96 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(plVar96);
LAB_140afee0c:
                if ((*(byte *)((longlong)plVar96 + 0x9e) & 0x10) != 0) {
                  (**(code **)(*plVar96 + 0x2b0))(plVar96);
                }
              }
              else if (plVar96 != (longlong *)0x0) goto LAB_140afee0c;
              lVar21 = lVar21 + 8;
            } while ((longlong)iVar37 * 8 != lVar21);
          }
          local_418._0_8_ = param_1 + 0x1be8;
          *(undefined4 *)(param_1 + 0x1bf0) = 0;
          if (*(int *)(param_1 + 0x1bf4) != 0) {
            FUN_14576fc0a(param_1 + 0x1be8);
          }
          if ((longlong)*(int *)(lVar18 + 0x12f8) != 0) {
            puVar35 = *(undefined8 **)(lVar18 + 0x12f0);
            lVar18 = (longlong)*(int *)(lVar18 + 0x12f8) << 5;
            local_3c8 = (longlong *)(CONCAT71(local_3c8._1_7_,local_2f0) & 0xffffffffffffff01);
            do {
              local_268 = DAT_14c846508;
              local_278 = DAT_14c8464f8;
              dStack_270 = DAT_14c846500;
              local_298 = DAT_14c8464e0;
              dStack_290 = DAT_14c8464e8;
              local_288._0_8_ = DAT_14c8464f0;
              uVar20 = *puVar35;
              lVar19 = *(longlong *)(param_1 + 0x428);
              uVar25 = FUN_1402d1dc0(&local_1f8);
              local_458 = (wchar_t *)CONCAT71(local_458._1_7_,1);
              local_468 = CONCAT31(local_468._1_3_,1);
              local_478 = &local_278;
              local_460 = (code *)((ulonglong)local_460 & 0xffffffffffffff00);
              local_470 = (code **)CONCAT44(local_470._4_4_,2);
              lVar19 = FUN_140a44468(uVar25,lVar19,uVar20,&local_298);
              if (lVar19 != 0) {
                local_478 = (code **)CONCAT71(local_478._1_7_,local_3c8._0_1_);
                FUN_1440bba28(&local_2d8,lVar19,local_3f8,puVar35);
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar19);
                }
                iVar37 = *(int *)(param_1 + 0x1bf0);
                *(uint *)(param_1 + 0x1bf0) = iVar37 + 1U;
                if (*(uint *)(param_1 + 0x1bf4) < iVar37 + 1U) {
                  FUN_140affc12(local_418._0_8_,iVar37);
                }
                *(longlong *)(*(longlong *)local_418._0_8_ + (longlong)iVar37 * 8) = lVar19;
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar19);
                }
              }
              puVar35 = puVar35 + 4;
              lVar18 = lVar18 + -0x20;
            } while (lVar18 != 0);
          }
        }
        local_478 = (code **)0x0;
        FUN_140b32deb(&local_2b8,param_1,*(longlong *)(param_1 + 0x1a00) + 0x1690,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
        if (local_1e8._8_8_ != 0) {
          FUN_1400020a8();
        }
      }
      *(int *)(param_1 + 0x1be4) = iVar17;
    }
    else {
      iVar17 = *(int *)(param_1 + 0x1bf0);
      if ((longlong)iVar17 != 0) {
        lVar18 = *(longlong *)(param_1 + 0x1be8);
        lVar19 = 0;
        do {
          plVar96 = *(longlong **)(lVar18 + lVar19);
          if ((plVar96 != (longlong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(plVar96);
LAB_140afec49:
            if ((*(byte *)((longlong)plVar96 + 0x9e) & 0x10) != 0) {
              (**(code **)(*plVar96 + 0x2b0))(plVar96);
            }
          }
          else if (plVar96 != (longlong *)0x0) goto LAB_140afec49;
          lVar19 = lVar19 + 8;
        } while ((longlong)iVar17 * 8 != lVar19);
      }
      *(undefined4 *)(param_1 + 0x1bf0) = 0;
      if (*(int *)(param_1 + 0x1bf4) != 0) {
        FUN_14576fc0a(param_1 + 0x1be8);
      }
    }
    FUN_1448173f8(&local_150);
    if (((char)local_178 == '\x03') && (plStack_168 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_168 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_168 + 0x10))();
      }
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x15e0);
  if (lVar18 == 0) {
    if ((*(longlong **)(param_1 + 0x428) != (longlong *)0x0) &&
       (lVar18 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x610))(), lVar18 != 0)) {
      if (DAT_14caec470 == 0) {
        local_440 = &local_178;
        local_178 = FUN_1417df956;
        local_430 = FUN_14081d0ea;
        local_438 = &LAB_1463eaa20;
        local_448 = &LAB_147bbd9ea;
        local_450 = FUN_1401cf6d7;
        local_458 = L"Engine";
        local_460 = (code *)0x0;
        local_468 = 0x10000000;
        local_470 = (code **)CONCAT44(local_470._4_4_,8);
        local_478 = (code **)CONCAT44(local_478._4_4_,0x330);
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar18);
        }
        *(longlong *)(param_1 + 0x15e0) = lVar18;
        goto LAB_140afaf97;
      }
    }
    lVar18 = 0;
  }
LAB_140afaf97:
  lVar19 = *(longlong *)(param_1 + 0x1a00);
  if ((*(longlong *)(param_1 + 0x1700) != 0) && (lVar18 != 0 && lVar19 != 0)) {
    cVar15 = FUN_1402096b0();
    if (cVar15 == '\0') {
      auVar75 = ZEXT812(0);
    }
    else {
      auVar75 = ZEXT812(0x3f800000);
    }
    fVar73 = *(float *)(param_1 + 0x15e8);
    fVar62 = auVar75._0_4_ - fVar73;
    auVar76 = auVar75;
    if (1e-08 <= fVar62 * fVar62) {
      fVar72 = *(float *)(lVar19 + 0xf08 + (ulonglong)(auVar75._0_4_ <= fVar73) * 4) * param_2;
      if (fVar72 <= fVar62) {
        fVar62 = fVar72;
      }
      if (fVar62 <= -fVar72) {
        fVar62 = -fVar72;
      }
      auVar76._4_4_ = 0;
      auVar76._0_4_ = fVar62 + fVar73;
      auVar76._8_4_ = auVar75._8_4_;
    }
    *(int *)(param_1 + 0x15e8) = auVar76._0_4_;
    local_1f8 = *(code **)(lVar19 + 0xf00);
    uStack_1f0 = (double)CONCAT71(uStack_1f0._1_7_,2);
    uStack_1f0 = (double)CONCAT44(0xffffffff,(undefined4)uStack_1f0);
    local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
    uStack_170 = 0.0;
    plStack_168 = (longlong *)0x0;
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    local_150 = (code *)0x0;
    dStack_148 = 0.0;
    local_140 = 0;
    dStack_138 = 0.0;
    local_130 = 0;
    dStack_128 = 0.0;
    local_478 = (code **)&local_178;
    FUN_140042bb4(lVar18);
    lVar19 = *(longlong *)(param_1 + 0x1700);
    if ((*(char *)(lVar19 + 0x1cd8) != '\x01') ||
       ((auVar65 = ZEXT816(0), *(char *)(lVar19 + 0x1d08) == '\x01' &&
        (*(char *)(lVar19 + 0x1d0a) != '\0')))) {
      auVar65._0_12_ = ZEXT812(0x3f800000);
      auVar65._12_4_ = 0;
    }
    fVar73 = *(float *)(param_1 + 0x15ec);
    fVar62 = auVar65._0_4_ - fVar73;
    auVar69 = auVar65;
    if (1e-08 <= fVar62 * fVar62) {
      fVar72 = *(float *)(*(longlong *)(param_1 + 0x1a00) + 0xf18 +
                         (ulonglong)(auVar65._0_4_ <= fVar73) * 4) * param_2;
      if (fVar72 <= fVar62) {
        fVar62 = fVar72;
      }
      if (fVar62 <= -fVar72) {
        fVar62 = -fVar72;
      }
      auVar69._4_4_ = 0;
      auVar69._0_4_ = fVar62 + fVar73;
      auVar69._8_4_ = auVar65._8_4_;
      auVar69._12_4_ = auVar65._12_4_;
    }
    *(int *)(param_1 + 0x15ec) = auVar69._0_4_;
    local_1f8 = *(code **)(*(longlong *)(param_1 + 0x1a00) + 0xf10);
    uStack_1f0 = (double)CONCAT71(uStack_1f0._1_7_,2);
    uStack_1f0 = (double)CONCAT44(0xffffffff,(undefined4)uStack_1f0);
    local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
    uStack_170 = 0.0;
    plStack_168 = (longlong *)0x0;
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    local_150 = (code *)0x0;
    dStack_148 = 0.0;
    local_140 = 0;
    dStack_138 = 0.0;
    local_130 = 0;
    dStack_128 = 0.0;
    local_478 = (code **)&local_178;
    FUN_140042bb4(lVar18);
    fVar73 = *(float *)(param_1 + 0x15e8);
    fVar62 = *(float *)(param_1 + 0x15f0);
    fVar72 = fVar73 - fVar62;
    if (1e-08 <= fVar72 * fVar72) {
      fVar73 = *(float *)(*(longlong *)(param_1 + 0x1a00) + 0xf28 +
                         (ulonglong)(fVar73 <= fVar62) * 4) * param_2;
      if (fVar73 <= fVar72) {
        fVar72 = fVar73;
      }
      if (fVar72 <= -fVar73) {
        fVar72 = -fVar73;
      }
      fVar73 = fVar72 + fVar62;
    }
    *(float *)(param_1 + 0x15f0) = fVar73;
    local_1f8 = *(code **)(*(longlong *)(param_1 + 0x1a00) + 0xf20);
    uStack_1f0 = (double)CONCAT71(uStack_1f0._1_7_,2);
    uStack_1f0 = (double)CONCAT44(0xffffffff,(undefined4)uStack_1f0);
    local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
    uStack_170 = 0.0;
    plStack_168 = (longlong *)0x0;
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    local_150 = (code *)0x0;
    dStack_148 = 0.0;
    local_140 = 0;
    dStack_138 = 0.0;
    local_130 = 0;
    dStack_128 = 0.0;
    local_478 = (code **)&local_178;
    FUN_140042bb4(lVar18);
    lVar19 = *(longlong *)(param_1 + 0x1a00);
  }
  if (((lVar19 != 0) && (*(longlong *)(param_1 + 0x1700) != 0)) &&
     (fVar73 = *(float *)(param_1 + 0x1bf8), *(float *)(param_1 + 0x1bf8) = fVar73 - param_2,
     fVar73 - param_2 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x1bf8) = *(undefined4 *)(lVar19 + 0x1220);
    fVar73 = (float)FUN_1401f2f5e(param_1);
    if (0.0 < fVar73) {
      fVar73 = *(float *)(*(longlong *)(param_1 + 0x1700) + 0x968) / fVar73;
      if (1.0 <= fVar73) {
        fVar73 = 1.0;
      }
      if (fVar73 <= 0.0) {
        fVar73 = 0.0;
      }
      if (*(longlong *)(param_1 + 0x1c00) != 0) {
        *(float *)(*(longlong *)(param_1 + 0x1c00) + 0x630) =
             *(float *)(*(longlong *)(param_1 + 0x1a00) + 0x1224) * fVar73;
        *(float *)(*(longlong *)(param_1 + 0x1c00) + 0x62c) =
             *(float *)(*(longlong *)(param_1 + 0x1a00) + 0x1228) * fVar73;
      }
      if (*(longlong *)(param_1 + 0x1c08) != 0) {
        *(float *)(*(longlong *)(param_1 + 0x1c08) + 0x2ac) =
             fVar73 * *(float *)(*(longlong *)(param_1 + 0x1a00) + 0x122c);
        FUN_1448c6f34();
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1a00) != 0) &&
     (plVar96 = *(longlong **)(param_1 + 0x1700), plVar96 != (longlong *)0x0)) {
    lVar18 = (**(code **)(*plVar96 + 0x6d8))(plVar96);
    lVar19 = FUN_1447210f0(param_1);
    if (lVar19 == 0) {
      dVar48 = 0.0;
    }
    else {
      lVar19 = FUN_1447210f0(param_1);
      dVar48 = *(double *)(lVar19 + 0x6d0);
    }
    fVar73 = 1.0 - (float)(int)plVar96[0x12e] /
                   (float)*(int *)(*(longlong *)(param_1 + 0x1700) + 0xcb8);
    if (0.0 < *(float *)(*(longlong *)(param_1 + 0x1a00) + 0x1420)) {
      fVar62 = fVar73 - *(float *)(param_1 + 0x1ad8);
      if (1e-08 <= fVar62 * fVar62) {
        fVar73 = *(float *)(*(longlong *)(param_1 + 0x1a00) + 0x1420) * param_2;
        if (1.0 <= fVar73) {
          fVar73 = 1.0;
        }
        if (fVar73 <= 0.0) {
          fVar73 = 0.0;
        }
        fVar73 = *(float *)(param_1 + 0x1ad8) + fVar62 * fVar73;
      }
    }
    *(float *)(param_1 + 0x1ad8) = fVar73;
    pcVar33 = param_1 + 0x1b48;
    cVar15 = FUN_144904448(pcVar33);
    if (cVar15 != '\0') {
      if (0 < (longlong)*(int *)(*(longlong *)(param_1 + 0x1700) + 0x1db0)) {
        lVar19 = 0;
        do {
          lVar19 = lVar19 + 1;
        } while (*(int *)(*(longlong *)(param_1 + 0x1700) + 0x1db0) != lVar19);
      }
      plVar22 = *(longlong **)pcVar33;
      if (((plVar22 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1b50) != -1)) &&
         (*plVar22 == *(longlong *)(param_1 + 0x1b50))) {
        *(int *)(plVar22 + 0x21) = (int)plVar22[0x21] + 1;
        lVar19 = *(longlong *)(param_1 + 0x1a00);
        lVar21 = *(longlong *)(lVar19 + 0x16c8);
        if (lVar21 == 0) {
          uVar20 = FUN_1407f787c();
          lVar21 = FUN_14477b664(uVar20);
          *(longlong *)(lVar19 + 0x16c8) = lVar21;
        }
        if (((*(longlong *)(lVar19 + 0x16d0) == 0) && (lVar21 != 0)) &&
           (*(longlong *)(lVar19 + 0x16c0) != 0)) {
          plVar5 = *(longlong **)(lVar21 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar15 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar15 == '\0')) {
            uVar20 = 0;
          }
          else {
            uVar20 = (**(code **)(*plVar5 + 0x110))(plVar5);
            uVar20 = FUN_144aff482(uVar20,(longlong *)(lVar19 + 0x16c0));
          }
          *(undefined8 *)(lVar19 + 0x16d0) = uVar20;
        }
        local_478 = (code **)((ulonglong)local_478 & 0xffffffffffffff00);
        FUN_1447997cc(plVar22);
        *(int *)(plVar22 + 0x21) = (int)plVar22[0x21] + -1;
        if (((int)plVar22[0x26] < 1) && (FUN_1400847bc(plVar22 + 0x17,0), (int)plVar22[0x21] == 0))
        {
          FUN_140087e46(plVar22);
          if (*plVar22 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140afb53b;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar22);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar22);
          }
        }
      }
    }
LAB_140afb53b:
    fVar72 = (float)dVar48;
    fVar62 = *(float *)((longlong)plVar96 + 0x1cf4);
    lVar19 = *(longlong *)(param_1 + 0x1a00);
    fVar73 = *(float *)(lVar19 + 0x1458);
    if (((fVar73 <= fVar62) &&
        (*(float *)(param_1 + 0x1ac8) <= fVar73 && fVar73 != *(float *)(param_1 + 0x1ac8))) &&
       (*(float *)(param_1 + 0x1ad0) + *(float *)(lVar19 + 0x145c) <= fVar72)) {
      local_478 = (code **)0x0;
      FUN_140b32deb(&local_1f8,param_1,lVar19 + 0x1428,*(undefined8 *)(lVar19 + 0x1588));
      local_1f8 = (code *)0x0;
      uStack_1f0 = -NAN;
      lVar19 = *(longlong *)(param_1 + 0x540);
      if (lVar19 == 0) {
        uVar20 = FUN_140aff5aa();
        lVar19 = FUN_14477b664(uVar20);
        *(longlong *)(param_1 + 0x540) = lVar19;
      }
      pcVar90 = param_1 + 0x538;
      lVar21 = *(longlong *)(param_1 + 0x548);
      if (lVar21 == 0) {
        if ((lVar19 != 0) && (*(longlong *)pcVar90 != 0)) {
          plVar22 = *(longlong **)(lVar19 + 0xb8);
          if ((plVar22 == (longlong *)0x0) ||
             (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
            *(longlong *)(param_1 + 0x548) = 0;
          }
          else {
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar21 = FUN_144aff482(uVar20,pcVar90);
            *(longlong *)(param_1 + 0x548) = lVar21;
            if (lVar21 != 0) {
              lVar19 = *(longlong *)(param_1 + 0x540);
              goto LAB_140afb5f2;
            }
          }
        }
      }
      else {
LAB_140afb5f2:
        uVar20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1588);
        if (lVar19 == 0) {
          uVar25 = FUN_140aff5aa();
          lVar19 = FUN_14477b664(uVar25);
          *(longlong *)(param_1 + 0x540) = lVar19;
          lVar21 = *(longlong *)(param_1 + 0x548);
          if (((lVar21 == 0) && (lVar21 = 0, lVar19 != 0)) && (*(longlong *)pcVar90 != 0)) {
            plVar22 = *(longlong **)(lVar19 + 0xb8);
            if ((plVar22 == (longlong *)0x0) ||
               (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
              lVar21 = 0;
            }
            else {
              uVar25 = (**(code **)(*plVar22 + 0x110))(plVar22);
              lVar21 = FUN_144aff482(uVar25,pcVar90);
            }
            *(longlong *)(param_1 + 0x548) = lVar21;
          }
        }
        local_478 = (code **)0x0;
        FUN_140b32deb(&local_278,param_1,lVar21 + 0xe0,uVar20);
        local_278 = (code *)0x0;
        dStack_270 = -NAN;
      }
      *(float *)(param_1 + 0x1ad0) = fVar72;
      fVar62 = *(float *)((longlong)plVar96 + 0x1cf4);
      lVar19 = *(longlong *)(param_1 + 0x1a00);
    }
    if (((fVar62 <= *(float *)(lVar19 + 0x1490)) &&
        (*(float *)(lVar19 + 0x1490) < *(float *)(param_1 + 0x1ac8))) &&
       (*(float *)(param_1 + 0x1ad4) + *(float *)(lVar19 + 0x1494) <= fVar72)) {
      local_478 = (code **)0x0;
      FUN_140b32deb(&local_298,param_1,lVar19 + 0x1460,*(undefined8 *)(lVar19 + 0x1588));
      local_298 = (code *)0x0;
      dStack_290 = -NAN;
      lVar19 = *(longlong *)(param_1 + 0x540);
      if (lVar19 == 0) {
        uVar20 = FUN_140aff5aa();
        lVar19 = FUN_14477b664(uVar20);
        *(longlong *)(param_1 + 0x540) = lVar19;
      }
      pcVar90 = param_1 + 0x538;
      lVar21 = *(longlong *)(param_1 + 0x548);
      if (lVar21 == 0) {
        if ((lVar19 != 0) && (*(longlong *)pcVar90 != 0)) {
          plVar22 = *(longlong **)(lVar19 + 0xb8);
          if ((plVar22 == (longlong *)0x0) ||
             (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
            *(longlong *)(param_1 + 0x548) = 0;
          }
          else {
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar21 = FUN_144aff482(uVar20,pcVar90);
            *(longlong *)(param_1 + 0x548) = lVar21;
            if (lVar21 != 0) {
              lVar19 = *(longlong *)(param_1 + 0x540);
              goto LAB_140afb6f8;
            }
          }
        }
      }
      else {
LAB_140afb6f8:
        uVar20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1588);
        if (lVar19 == 0) {
          uVar25 = FUN_140aff5aa();
          lVar19 = FUN_14477b664(uVar25);
          *(longlong *)(param_1 + 0x540) = lVar19;
          lVar21 = *(longlong *)(param_1 + 0x548);
          if (((lVar21 == 0) && (lVar21 = 0, lVar19 != 0)) && (*(longlong *)pcVar90 != 0)) {
            plVar22 = *(longlong **)(lVar19 + 0xb8);
            if ((plVar22 == (longlong *)0x0) ||
               (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
              lVar21 = 0;
            }
            else {
              uVar25 = (**(code **)(*plVar22 + 0x110))(plVar22);
              lVar21 = FUN_144aff482(uVar25,pcVar90);
            }
            *(longlong *)(param_1 + 0x548) = lVar21;
          }
        }
        local_478 = (code **)0x0;
        FUN_140b32deb(&local_2b8,param_1,lVar21 + 0x110,uVar20);
        local_2b8 = (code *)0x0;
        dStack_2b0 = -NAN;
      }
      *(float *)(param_1 + 0x1ad4) = fVar72;
      fVar62 = *(float *)((longlong)plVar96 + 0x1cf4);
    }
    *(float *)(param_1 + 0x1ac8) = fVar62;
    cVar16 = (code)FUN_1402096b0(*(longlong *)(param_1 + 0x1700));
    if (param_1[0x1acc] != cVar16) {
      cVar15 = FUN_144904448(param_1 + 0x1b18);
      if (cVar15 != '\0') {
        FUN_14072d42a(param_1 + 0x1b18);
      }
      cVar15 = FUN_144904448(param_1 + 0x1b30);
      if (cVar15 != '\0') {
        FUN_14072d42a(param_1 + 0x1b30);
      }
      cVar15 = FUN_144904448(param_1 + 0x1b98);
      if (cVar15 != '\0') {
        FUN_14072d42a(param_1 + 0x1b98);
      }
      cVar15 = FUN_144904448(param_1 + 0x1bb0);
      if (cVar15 != '\0') {
        FUN_14072d42a(param_1 + 0x1bb0);
      }
      param_1[0x1acc] = cVar16;
      if (cVar16 == (code)0x0) {
        if ((lVar18 == 0) || (fVar73 = (float)FUN_14020975c(lVar18), 1e-08 < fVar73)) {
          local_478 = (code **)0x0;
          FUN_140b32deb(&local_178,param_1,*(longlong *)(param_1 + 0x1a00) + 0x14c8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
          *(code **)(param_1 + 0x1b30) = local_178;
          *(double *)(param_1 + 0x1b38) = uStack_170;
          *(longlong **)(param_1 + 0x1b40) = plStack_168;
          lVar18 = *(longlong *)(param_1 + 0x540);
          if (lVar18 == 0) {
            uVar20 = FUN_140aff5aa();
            lVar18 = FUN_14477b664(uVar20);
            *(longlong *)(param_1 + 0x540) = lVar18;
          }
          pcVar90 = param_1 + 0x538;
          lVar19 = *(longlong *)(param_1 + 0x548);
          if (lVar19 != 0) {
LAB_140afb98f:
            uVar20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590);
            if (lVar18 == 0) {
              uVar25 = FUN_140aff5aa();
              lVar18 = FUN_14477b664(uVar25);
              *(longlong *)(param_1 + 0x540) = lVar18;
              lVar19 = *(longlong *)(param_1 + 0x548);
              if (((lVar19 == 0) && (lVar19 = 0, lVar18 != 0)) && (*(longlong *)pcVar90 != 0)) {
                plVar22 = *(longlong **)(lVar18 + 0xb8);
                if ((plVar22 == (longlong *)0x0) ||
                   (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
                  lVar19 = 0;
                }
                else {
                  uVar25 = (**(code **)(*plVar22 + 0x110))(plVar22);
                  lVar19 = FUN_144aff482(uVar25,pcVar90);
                }
                *(longlong *)(param_1 + 0x548) = lVar19;
              }
            }
            lVar19 = lVar19 + 0x170;
            goto LAB_140afb9ad;
          }
          lVar21 = 0x1e60;
          if ((lVar18 != 0) && (*(longlong *)pcVar90 != 0)) {
            plVar22 = *(longlong **)(lVar18 + 0xb8);
            if ((plVar22 == (longlong *)0x0) ||
               (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0'))
            goto LAB_140afecd0;
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar19 = FUN_144aff482(uVar20,pcVar90);
            *(longlong *)(param_1 + 0x548) = lVar19;
            if (lVar19 != 0) {
              lVar18 = *(longlong *)(param_1 + 0x540);
              goto LAB_140afb98f;
            }
          }
        }
        else {
          local_478 = (code **)0x0;
          FUN_140b32deb(&local_178,param_1,*(longlong *)(param_1 + 0x1a00) + 0x14f8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
          *(code **)(param_1 + 0x1b30) = local_178;
          *(double *)(param_1 + 0x1b38) = uStack_170;
          *(longlong **)(param_1 + 0x1b40) = plStack_168;
          lVar18 = *(longlong *)(param_1 + 0x540);
          if (lVar18 == 0) {
            uVar20 = FUN_140aff5aa();
            lVar18 = FUN_14477b664(uVar20);
            *(longlong *)(param_1 + 0x540) = lVar18;
          }
          pcVar90 = param_1 + 0x538;
          lVar19 = *(longlong *)(param_1 + 0x548);
          if (lVar19 == 0) {
            lVar21 = 0x1e60;
            if ((lVar18 != 0) && (*(longlong *)pcVar90 != 0)) {
              plVar22 = *(longlong **)(lVar18 + 0xb8);
              if ((plVar22 == (longlong *)0x0) ||
                 (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
LAB_140afecd0:
                *(longlong *)(param_1 + 0x548) = 0;
              }
              else {
                uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
                lVar19 = FUN_144aff482(uVar20,pcVar90);
                *(longlong *)(param_1 + 0x548) = lVar19;
                if (lVar19 != 0) {
                  lVar18 = *(longlong *)(param_1 + 0x540);
                  goto LAB_140afe03e;
                }
              }
            }
          }
          else {
LAB_140afe03e:
            uVar20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590);
            if (lVar18 == 0) {
              uVar25 = FUN_140aff5aa();
              lVar18 = FUN_14477b664(uVar25);
              *(longlong *)(param_1 + 0x540) = lVar18;
              lVar19 = *(longlong *)(param_1 + 0x548);
              if (((lVar19 == 0) && (lVar19 = 0, lVar18 != 0)) && (*(longlong *)pcVar90 != 0)) {
                plVar22 = *(longlong **)(lVar18 + 0xb8);
                if ((plVar22 == (longlong *)0x0) ||
                   (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
                  lVar19 = 0;
                }
                else {
                  uVar25 = (**(code **)(*plVar22 + 0x110))(plVar22);
                  lVar19 = FUN_144aff482(uVar25,pcVar90);
                }
                *(longlong *)(param_1 + 0x548) = lVar19;
              }
            }
            lVar19 = lVar19 + 0x1a0;
LAB_140afb9ad:
            local_478 = (code **)0x0;
            FUN_140b32deb(&local_178,param_1,lVar19,uVar20);
            *(code **)(param_1 + 0x1bb0) = local_178;
            *(double *)(param_1 + 0x1bb8) = uStack_170;
            *(longlong **)(param_1 + 0x1bc0) = plStack_168;
            lVar21 = 0x1e60;
          }
        }
      }
      else {
        local_478 = (code **)0x0;
        FUN_140b32deb(&local_178,param_1,*(longlong *)(param_1 + 0x1a00) + 0x1498,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
        *(code **)(param_1 + 0x1b18) = local_178;
        *(double *)(param_1 + 0x1b20) = uStack_170;
        *(longlong **)(param_1 + 0x1b28) = plStack_168;
        lVar18 = *(longlong *)(param_1 + 0x540);
        if (lVar18 == 0) {
          uVar20 = FUN_140aff5aa();
          lVar18 = FUN_14477b664(uVar20);
          *(longlong *)(param_1 + 0x540) = lVar18;
        }
        pcVar90 = param_1 + 0x538;
        lVar19 = *(longlong *)(param_1 + 0x548);
        if (lVar19 == 0) {
          lVar21 = 0x1e50;
          if ((lVar18 != 0) && (*(longlong *)pcVar90 != 0)) {
            plVar22 = *(longlong **)(lVar18 + 0xb8);
            if ((plVar22 == (longlong *)0x0) ||
               (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0'))
            goto LAB_140afecd0;
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar19 = FUN_144aff482(uVar20,pcVar90);
            *(longlong *)(param_1 + 0x548) = lVar19;
            if (lVar19 != 0) {
              lVar18 = *(longlong *)(param_1 + 0x540);
              goto LAB_140afb881;
            }
          }
        }
        else {
LAB_140afb881:
          uVar20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590);
          if (lVar18 == 0) {
            uVar25 = FUN_140aff5aa();
            lVar18 = FUN_14477b664(uVar25);
            *(longlong *)(param_1 + 0x540) = lVar18;
            lVar19 = *(longlong *)(param_1 + 0x548);
            if (((lVar19 == 0) && (lVar19 = 0, lVar18 != 0)) && (*(longlong *)pcVar90 != 0)) {
              plVar22 = *(longlong **)(lVar18 + 0xb8);
              if ((plVar22 == (longlong *)0x0) ||
                 (cVar15 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar15 == '\0')) {
                lVar19 = 0;
              }
              else {
                uVar25 = (**(code **)(*plVar22 + 0x110))(plVar22);
                lVar19 = FUN_144aff482(uVar25,pcVar90);
              }
              *(longlong *)(param_1 + 0x548) = lVar19;
            }
          }
          local_478 = (code **)0x0;
          FUN_140b32deb(&local_178,param_1,lVar19 + 0x140,uVar20);
          *(code **)(param_1 + 0x1b98) = local_178;
          *(double *)(param_1 + 0x1ba0) = uStack_170;
          *(longlong **)(param_1 + 0x1ba8) = plStack_168;
          lVar21 = 0x1e50;
        }
      }
      local_178 = param_1;
      FUN_1447cd2ec(param_1 + lVar21);
    }
    cVar16 = *(code *)(*(longlong *)(param_1 + 0x1700) + 0x19a3);
    if ((param_1[0x1adc] != cVar16) && (param_1[0x1adc] = cVar16, cVar16 == (code)0x1)) {
      local_478 = (code **)0x0;
      FUN_140b32deb(&local_2d8,param_1,*(longlong *)(param_1 + 0x1a00) + 0x1600,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
      local_2d8 = (code *)0x0;
      local_2d0 = (undefined8 *)0xffffffffffffffff;
      plVar22 = *(longlong **)(param_1 + 0x3c0);
      if (plVar22 != (longlong *)0x0) {
        if (DAT_14cbadd90 == 0) {
          local_440 = &local_178;
          local_178 = FUN_141030f22;
          local_430 = FUN_14081d0ea;
          local_438 = &LAB_1459f2e4c;
          local_448 = &LAB_148c39de3;
          local_450 = (code *)&LAB_1457a9eb2;
          local_458 = L"Game";
          local_460 = (code *)0x0;
          local_468 = 0x10000004;
          local_470 = (code **)CONCAT44(local_470._4_4_,0x10);
          local_478 = (code **)CONCAT44(local_478._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar22[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) && (lVar18 = *(longlong *)(param_1 + 0x1a08), lVar18 != 0)) &&
           (((*(byte *)(plVar22 + 0x84) & 2) != 0 &&
            (cVar15 = (**(code **)(*plVar22 + 0x6c8))(plVar22), cVar15 != '\0')))) {
          local_178 = *(code **)(lVar18 + 0x780);
          uStack_170 = (double)CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar18 + 0x788));
          plStack_168 = (longlong *)0x0;
          local_470 = (code **)((ulonglong)local_470 & 0xffffffffffffff00);
          local_478 = (code **)((ulonglong)local_478 & 0xffffffffffffff00);
          local_468 = 0x3f800000;
          local_460 = param_1;
          FUN_140cab31c(plVar22,&local_178,0xff,plVar22 + 300);
        }
      }
    }
    cVar16 = *(code *)((longlong)plVar96 + 0x1d0a);
    if (param_1[0x1add] != cVar16) {
      param_1[0x1add] = cVar16;
      lVar18 = *(longlong *)(param_1 + 0x1a00);
      if (lVar18 != 0) {
        lVar19 = *(longlong *)(lVar18 + 0x1678);
        if (lVar19 == 0) {
          uVar20 = FUN_140067708();
          lVar19 = FUN_14477b664(uVar20);
          *(longlong *)(lVar18 + 0x1678) = lVar19;
        }
        if (*(longlong *)(lVar18 + 0x1680) == 0) {
          if ((lVar19 != 0) && (*(longlong *)(lVar18 + 0x1670) != 0)) {
            plVar96 = *(longlong **)(lVar19 + 0xb8);
            if ((plVar96 == (longlong *)0x0) ||
               (cVar15 = (**(code **)(*plVar96 + 0x108))(plVar96), cVar15 == '\0')) {
              *(undefined8 *)(lVar18 + 0x1680) = 0;
            }
            else {
              uVar20 = (**(code **)(*plVar96 + 0x110))(plVar96);
              lVar19 = FUN_144aff482(uVar20,(longlong *)(lVar18 + 0x1670));
              *(longlong *)(lVar18 + 0x1680) = lVar19;
              if (lVar19 != 0) goto LAB_140afd7b3;
            }
          }
          if ((*(char *)(lVar18 + 0x1660) == '\x01') && (*(longlong *)(lVar18 + 0x1664) != 0))
          goto LAB_140afd7b3;
          if ((cVar16 == (code)0x0) || (cVar15 = FUN_144904448(pcVar33), cVar15 != '\0'))
          goto LAB_140afbab5;
        }
        else {
LAB_140afd7b3:
          if (cVar16 == (code)0x0) {
            local_478 = (code **)0x0;
            FUN_140b32deb(&local_178,param_1,*(longlong *)(param_1 + 0x1a00) + 0x1660,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
            goto LAB_140afbab5;
          }
        }
        local_478 = (code **)0x0;
        FUN_140b32deb(&local_178,param_1,*(longlong *)(param_1 + 0x1a00) + 0x1630,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1590));
        *(code **)(param_1 + 0x1b48) = local_178;
        *(double *)(param_1 + 0x1b50) = uStack_170;
        *(longlong **)(param_1 + 7000) = plStack_168;
      }
    }
  }
LAB_140afbab5:
  plVar96 = *(longlong **)(param_1 + 0x3c0);
  if (plVar96 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_440 = &local_178;
      local_178 = FUN_141030f22;
      local_430 = FUN_14081d0ea;
      local_438 = &LAB_1459f2e4c;
      local_448 = &LAB_148c39de3;
      local_450 = (code *)&LAB_1457a9eb2;
      local_458 = L"Game";
      local_460 = (code *)0x0;
      local_468 = 0x10000004;
      local_470 = (code **)CONCAT44(local_470._4_4_,0x10);
      local_478 = (code **)CONCAT44(local_478._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar96[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar96[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
          DAT_14cbadd90 + 0x30)) && (*(longlong *)(param_1 + 0x1700) != 0)) &&
       ((*(byte *)(plVar96 + 0x84) & 2) != 0)) {
      lVar18 = *(longlong *)(param_1 + 0x1a08);
      cVar15 = (**(code **)(*plVar96 + 0x6c8))(plVar96);
      if ((lVar18 != 0) && (cVar15 != '\0')) {
        lVar19 = *(longlong *)(param_1 + 0x1700);
        cVar16 = (code)FUN_1402096b0(lVar19);
        if ((param_1[0x1be0] != cVar16) && (param_1[0x1be0] = cVar16, cVar16 != (code)0x0)) {
          local_178 = *(code **)(lVar18 + 0x750);
          uStack_170 = (double)CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar18 + 0x758));
          plStack_168 = (longlong *)0x0;
          FUN_14576fc3a(plVar96,&local_178,plVar96 + 300,0);
        }
        if (*(char *)(lVar19 + 0x1d08) == '\x01') {
          cVar16 = *(code *)(lVar19 + 0x1d0a);
          if ((param_1[0x1be1] != cVar16) && (param_1[0x1be1] = cVar16, cVar16 != (code)0x0)) {
            local_1f8 = *(code **)(lVar18 + 0x768);
            uStack_1f0 = (double)CONCAT44(uStack_1f0._4_4_,*(undefined4 *)(lVar18 + 0x770));
            auVar11._8_8_ = 0;
            auVar11._0_8_ = local_1e8._8_8_;
            local_1e8 = auVar11 << 0x40;
            FUN_14576fc3a(plVar96,&local_1f8,plVar96 + 300,0);
            local_278 = *(code **)(lVar18 + 0x798);
            dStack_270 = (double)CONCAT44(dStack_270._4_4_,*(undefined4 *)(lVar18 + 0x7a0));
            local_268 = (longlong *)0x0;
            FUN_14576fc3a(plVar96,&local_278,plVar96 + 300,0);
          }
        }
        else if (param_1[0x1be1] != (code)0x0) {
          param_1[0x1be1] = (code)0x0;
        }
      }
    }
  }
  if (param_1[0x255c] == (code)0x1) {
    FUN_14576fd48(param_1);
  }
  local_3e0 = (double *)(param_1 + 0x24c0);
  local_3b0 = param_1 + 0x24d8;
  local_370 = param_1 + 0x24f8;
  pcVar33 = param_1 + 0x253c;
  local_3b8 = param_1 + 0x2528;
  local_378 = param_1 + 0x2508;
  local_400 = param_1 + 0x2540;
  lVar18 = 0;
  local_41c = param_2;
  while( true ) {
    plVar96 = *(longlong **)(param_1 + 0x1a00);
    uVar27 = 0;
    if (plVar96 != (longlong *)0x0) {
      uVar27 = *(uint *)(plVar96 + 0x1e7);
    }
    if ((int)uVar27 <= lVar18) break;
    if (lVar18 < *(int *)(param_1 + 0x2348)) {
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x2340) + 0x20 + lVar18 * 0x170);
      bVar26 = lVar19 != 0 & DAT_14c950c29;
      uVar93 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x2340) >> 8),bVar26);
      if (bVar26 == 1) {
        lVar21 = lVar19;
        FUN_1456cec3c();
        uVar93 = (undefined4)lVar21;
        plVar96 = *(longlong **)(param_1 + 0x1a00);
      }
      else if (lVar19 == 0) goto LAB_140afd2dc;
      if (plVar96 != (longlong *)0x0) {
        lVar21 = *(longlong *)(lVar19 + 0x1c8);
        if (lVar21 == 0) {
          uVar93 = SUB84(DAT_14c8464f8,0);
          uVar94 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
          dVar48 = DAT_14c846500;
          plVar96 = DAT_14c846508;
        }
        else {
          pcVar90 = *(code **)(lVar21 + 0x240);
          dVar48 = *(double *)(lVar21 + 0x248);
          plVar22 = *(longlong **)(lVar21 + 0x250);
          dVar47 = *(double *)(lVar21 + 600);
          pdVar32 = *(double **)(lVar21 + 0x228);
          local_178 = pcVar90;
          uStack_170 = dVar48;
          plStack_168 = plVar22;
          dStack_160 = dVar47;
          if (pdVar32 == (double *)0x0) {
            uVar93 = 0x40;
            pdVar32 = (double *)FUN_14001cc68(0x40,0x10);
            dVar42 = DAT_14c8463d8;
            *pdVar32 = DAT_14c8463d0;
            pdVar32[1] = dVar42;
            dVar42 = DAT_14c8463e8;
            pdVar32[2] = DAT_14c8463e0;
            pdVar32[3] = dVar42;
            dVar42 = DAT_14c846500;
            pdVar32[4] = (double)DAT_14c8464f8;
            pdVar32[5] = dVar42;
            plVar96 = DAT_14c846508;
            pdVar32[6] = (double)DAT_14c846508;
            *(double **)(lVar21 + 0x228) = pdVar32;
          }
          auVar91._8_8_ = -(ulonglong)(dVar48 != pdVar32[1]);
          auVar91._0_8_ = -(ulonglong)((double)pcVar90 != *pdVar32);
          iVar17 = movmskpd((int)plVar96,auVar91);
          auVar6._8_4_ = (int)-(ulonglong)(dVar47 != pdVar32[3]);
          auVar6._0_8_ = -(ulonglong)((double)plVar22 != pdVar32[2]);
          auVar6._12_4_ = (int)(-(ulonglong)(dVar47 != pdVar32[3]) >> 0x20);
          uVar27 = movmskpd(uVar93,auVar6);
          if ((uVar27 & 0x3fffffff) != 0 || iVar17 != 0) {
            pdVar32[2] = (double)plStack_168;
            pdVar32[3] = dStack_160;
            *pdVar32 = (double)local_178;
            pdVar32[1] = uStack_170;
            FUN_1448052ee(&local_178,&local_1f8);
            pdVar32[6] = (double)local_1e8._0_8_;
            pdVar32[4] = (double)local_1f8;
            pdVar32[5] = uStack_1f0;
          }
          uVar93 = SUB84(pdVar32[4],0);
          uVar94 = (undefined4)((ulonglong)pdVar32[4] >> 0x20);
          dVar48 = pdVar32[5];
          plVar96 = (longlong *)pdVar32[6];
        }
        auVar63._4_4_ = uVar94;
        auVar63._0_4_ = uVar93;
        auVar63._8_8_ = dVar48;
        auVar64 = divpd(auVar63,_DAT_1499387d0);
        auVar51._0_8_ = (double)plVar96 / 360.0;
        auVar51._8_8_ = 0;
        auVar65 = roundpd(auVar64,auVar64,3);
        auVar64 = roundpd(auVar51,auVar51,3);
        dVar47 = ((double)CONCAT44(uVar94,uVar93) - auVar65._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar48 = (dVar48 - auVar65._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar95 = ((double)plVar96 - auVar64._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar97 = (0.0 - auVar64._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar42 = sin(dVar47);
        dVar43 = sin(dVar48);
        dVar44 = sin(dVar95);
        sin(dVar97);
        dVar45 = cos(dVar47);
        dVar46 = cos(dVar48);
        dVar95 = cos(dVar95);
        cos(dVar97);
        plVar96 = DAT_14c846508;
        dVar47 = DAT_14c846500;
        pcVar90 = DAT_14c8464f8;
        dVar48 = dVar43 * dVar42 * dVar44 + dVar46 * dVar45 * dVar95;
        local_298 = (code *)(dVar42 * dVar43 * dVar95 - dVar45 * dVar46 * dVar44);
        dStack_290 = -(dVar42 * dVar46 * dVar95) - dVar45 * dVar43 * dVar44;
        local_288._8_4_ = SUB84(dVar48,0);
        local_288._0_8_ = -(dVar46 * dVar42 * dVar44) + dVar43 * dVar45 * dVar95;
        local_288._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        plVar22 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x5d0))(param_1);
        if (plVar22 == (longlong *)0x0) {
          lVar21 = *(longlong *)(param_1 + 0x1700);
          if (lVar21 != 0) {
            dVar47 = (double)*(float *)(lVar21 + 0x1998);
            pcVar90 = (code *)(double)*(float *)(lVar21 + 0x199c);
          }
        }
        else {
          (**(code **)(*plVar22 + 0x680))(plVar22,&local_178);
          dVar47 = uStack_170;
          pcVar90 = local_178;
          plVar96 = plStack_168;
        }
        auVar52._8_4_ = SUB84(dVar47,0);
        auVar52._0_8_ = pcVar90;
        auVar52._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        auVar64 = divpd(auVar52,_DAT_1499387d0);
        auVar66._8_8_ = 0;
        auVar66._0_8_ = (double)plVar96 / 360.0;
        auVar64 = roundpd(auVar64,auVar64,3);
        auVar65 = roundpd(auVar66,auVar66,3);
        dVar48 = ((double)pcVar90 - auVar64._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar47 = (dVar47 - auVar64._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar46 = ((double)plVar96 - auVar65._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar95 = (0.0 - auVar65._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar42 = sin(dVar48);
        dVar43 = sin(dVar47);
        dVar44 = sin(dVar46);
        sin(dVar95);
        dVar45 = cos(dVar48);
        dVar47 = cos(dVar47);
        dVar46 = cos(dVar46);
        cos(dVar95);
        dVar48 = dVar43 * dVar42 * dVar44 + dVar47 * dVar45 * dVar46;
        local_2b8 = (code *)(dVar42 * dVar43 * dVar46 - dVar45 * dVar47 * dVar44);
        dStack_2b0 = -(dVar42 * dVar47 * dVar46) - dVar45 * dVar43 * dVar44;
        local_2a8._8_4_ = SUB84(dVar48,0);
        local_2a8._0_8_ = -(dVar47 * dVar42 * dVar44) + dVar43 * dVar45 * dVar46;
        local_2a8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        local_478 = (code **)CONCAT44(local_478._4_4_,
                                      *(undefined4 *)(*(longlong *)(param_1 + 0x1a00) + 0xf58));
        FUN_140aff276(&local_2d8,&local_298,&local_2b8);
        FUN_1448052ee(&local_2d8,&local_2f0);
        pdVar32 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
        if (*(longlong *)(param_1 + 0x1c8) == 0) {
          pdVar32 = (double *)&DAT_14c846480;
        }
        dVar42 = *pdVar32;
        dVar47 = pdVar32[1];
        dVar43 = pdVar32[2];
        dVar48 = pdVar32[3];
        dVar44 = dVar42 * 0.0 - dVar47 * 0.0;
        dVar45 = dVar47 * 1.0 - dVar43 * 0.0;
        dVar46 = dVar42 * -1.0 + dVar43 * 0.0;
        dVar45 = dVar45 + dVar45;
        dVar46 = dVar46 + dVar46;
        dVar44 = dVar44 + dVar44;
        dVar95 = dVar44 * dVar48 + 1.0 + (dVar46 * dVar42 - dVar45 * dVar47);
        dVar47 = (dVar44 * dVar47 - dVar46 * dVar43) + dVar48 * dVar45 + 0.0;
        dVar43 = (dVar43 * dVar45 - dVar42 * dVar44) + pdVar32[3] * dVar46 + 0.0;
        dVar42 = local_2c8 - (double)local_2d8 * 0.0;
        dVar44 = (double)local_2d8 * 0.0 - (double)local_2d0;
        dVar45 = (double)local_2d0 * 0.0 + local_2c8 * -0.0;
        dVar44 = dVar44 + dVar44;
        dVar42 = dVar42 + dVar42;
        dVar45 = dVar45 + dVar45;
        plVar96 = (longlong *)
                  (((double)local_2d8 * dVar42 - dVar45 * (double)local_2d0) +
                  local_2c0 * dVar44 + 0.0);
        dVar48 = (local_2c8 * dVar45 - dVar44 * (double)local_2d8) + local_2c0 * dVar42 + 0.0;
        pcVar90 = (code *)(((double)local_2d0 * dVar44 - dVar42 * local_2c8) +
                          dVar45 * local_2c0 + 1.0);
        dVar42 = dVar47 * dVar48 - (double)pcVar90 * dVar43;
        dVar44 = dVar95 * (double)pcVar90 - (double)plVar96 * dVar47;
        pcVar24 = (code *)(dVar43 * (double)plVar96 - dVar48 * dVar95);
        dVar47 = dVar42 * dVar42 + (double)pcVar24 * (double)pcVar24 + dVar44 * dVar44;
        if (((dVar47 != 1.0) || (dVar43 = dVar42, pcVar7 = pcVar24, dVar45 = dVar44, NAN(dVar47)))
           && (dVar43 = DAT_14c8464f0, pcVar7 = DAT_14c8464e0, dVar45 = DAT_14c8464e8,
              9.99999993922529e-09 <= dVar47)) {
          dVar47 = 1.0 / SQRT(dVar47);
          dVar43 = dVar42 * dVar47;
          pcVar7 = (code *)((double)pcVar24 * dVar47);
          dVar45 = dVar44 * dVar47;
        }
        auVar77._0_8_ = (double)pcVar90 * dVar45 - (double)pcVar7 * dVar48;
        auVar77._8_8_ = 0;
        dVar47 = (double)plVar96 * (double)pcVar7 - dVar43 * (double)pcVar90;
        pcVar24 = (code *)(dVar48 * dVar43 - dVar45 * (double)plVar96);
        dVar42 = auVar77._0_8_ * auVar77._0_8_ + (double)pcVar24 * (double)pcVar24 + dVar47 * dVar47
        ;
        if ((dVar42 != 1.0) || (NAN(dVar42))) {
          if (9.99999993922529e-09 <= dVar42) {
            dVar42 = 1.0 / SQRT(dVar42);
            auVar77._0_8_ = auVar77._0_8_ * dVar42;
            auVar77._8_8_ = 0;
            dVar47 = dVar47 * dVar42;
            pcVar24 = (code *)((double)pcVar24 * dVar42);
          }
          else {
            auVar77._8_8_ = 0;
            auVar77._0_8_ = DAT_14c8464f0;
            dVar47 = DAT_14c8464e8;
            pcVar24 = DAT_14c8464e0;
          }
        }
        if ((((9.999999747378752e-05 < ABS((double)pcVar7)) || (9.999999747378752e-05 < ABS(dVar45))
             ) || (9.999999747378752e-05 < ABS(dVar43))) &&
           (((9.999999747378752e-05 < ABS((double)pcVar24) || (9.999999747378752e-05 < ABS(dVar47)))
            || (9.999999747378752e-05 < ABS(auVar77._0_8_))))) {
          local_418 = auVar77;
          (**(code **)(**(longlong **)(param_1 + 0x428) + 0x4a8))
                    (*(longlong **)(param_1 + 0x428),&local_178,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x1a00) + 0xf30) + lVar18 * 0x20));
          auVar67._8_8_ = dStack_160;
          auVar67._0_8_ = plStack_168;
          local_1f8 = local_178;
          uStack_1f0 = uStack_170;
          local_1e8 = auVar67;
          FUN_1448052ee(&local_1f8,local_308);
          local_308 = ZEXT816(0);
          auVar53._8_8_ = 0;
          auVar53._0_8_ = local_2f8;
          auVar64 = divpd(auVar53,_DAT_1499387d0);
          auVar65 = roundpd(auVar67,local_308,3);
          auVar64 = roundpd(auVar64,auVar64,3);
          dVar46 = (0.0 - auVar65._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar95 = (0.0 - auVar65._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar42 = (local_2f8 - auVar64._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar44 = (0.0 - auVar64._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          local_3f8 = (code *)sin(dVar46);
          local_3a8 = dVar95;
          dStack_3a0 = dVar95;
          local_3c8 = (longlong *)sin(dVar95);
          local_3d8 = sin(dVar42);
          local_388 = dVar44;
          dStack_380 = dVar44;
          sin(dVar44);
          local_398 = cos(dVar46);
          dVar44 = cos(local_3a8);
          dVar46 = cos(dVar42);
          cos(local_388);
          dVar42 = (double)local_3c8 * (double)local_3f8 * local_3d8 + dVar44 * local_398 * dVar46;
          local_328 = (undefined1  [8])
                      ((double)local_3f8 * (double)local_3c8 * dVar46 -
                      local_398 * dVar44 * local_3d8);
          ppcStack_320 = (code **)(-((double)local_3f8 * dVar44 * dVar46) -
                                  local_398 * (double)local_3c8 * local_3d8);
          local_318._8_4_ = SUB84(dVar42,0);
          local_318._0_8_ =
               -(dVar44 * (double)local_3f8 * local_3d8) + (double)local_3c8 * local_398 * dVar46;
          local_318._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          FUN_14076d742(local_328,&local_1f8);
          local_260 = 0;
          local_240 = 0;
          local_228 = local_418._0_8_;
          local_220 = 0;
          local_218 = DAT_14c8464e0;
          local_210 = DAT_14c8464e8;
          dStack_208 = DAT_14c8464f0;
          local_200 = 0x3ff0000000000000;
          local_278 = pcVar90;
          dStack_270 = dVar48;
          local_268 = plVar96;
          local_258 = pcVar7;
          local_250 = dVar45;
          local_248 = dVar43;
          local_238 = pcVar24;
          local_230 = dVar47;
          FUN_1447fea8d(&local_178,&local_1f8,&local_278);
          dVar44 = dStack_128;
          dVar43 = dStack_138;
          dVar42 = dStack_148;
          dVar47 = dStack_158;
          plVar96 = plStack_168;
          dVar48 = uStack_170;
          pcVar90 = local_178;
          local_3f8 = local_150;
          local_418._0_8_ = local_130;
          dVar45 = 0.0;
          if (((uStack_170 != 0.0) || (NAN(uStack_170))) ||
             (((double)local_178 != 0.0 || (NAN((double)local_178))))) {
            dVar45 = atan2(uStack_170,(double)local_178);
            dVar45 = dVar45 * 57.29577951308232;
          }
          dVar46 = SQRT(dVar48 * dVar48 + (double)pcVar90 * (double)pcVar90);
          dVar48 = 0.0;
          if (((((double)plVar96 != 0.0) || (NAN((double)plVar96))) || (dVar46 != 0.0)) ||
             (NAN(dVar46))) {
            dVar48 = atan2((double)plVar96,dVar46);
            dVar48 = dVar48 * 57.29577951308232;
          }
          dVar95 = sin(dVar48 * 0.01745329238474369);
          dVar97 = sin(dVar45 * 0.01745329238474369);
          dVar49 = cos(dVar48 * 0.01745329238474369);
          dVar46 = cos(dVar45 * 0.01745329238474369);
          dVar50 = 0.0;
          dVar74 = dVar95 * 0.0 * dVar46 - dVar97;
          dVar46 = dVar95 * 0.0 * dVar97 + dVar46;
          dVar47 = dVar42 * dVar49 * -0.0 + dVar47 * dVar74 + (double)local_3f8 * dVar46;
          dVar42 = dVar44 * dVar49 * -0.0 + dVar43 * dVar74 + (double)local_418._0_8_ * dVar46;
          if (((dVar42 != 0.0) || (NAN(dVar42))) || ((dVar47 != 0.0 || (NAN(dVar47))))) {
            dVar50 = atan2(dVar42,dVar47);
            dVar50 = dVar50 * 57.29577951308232;
          }
          local_2f0 = SUB81(dVar48,0);
          uStack_2ef = (undefined7)((ulonglong)dVar48 >> 8);
          dStack_2e8 = dVar45;
          local_2e0 = dVar50;
        }
        local_338 = local_2e0;
        local_348._1_7_ = uStack_2ef;
        local_348[0] = local_2f0;
        local_348._8_8_ = dStack_2e8;
        if (*(longlong *)(lVar19 + 0x1c8) != 0) {
          local_468 = local_468 & 0xffffff00;
          local_470 = (code **)((ulonglong)local_470 & 0xffffffff00000000);
          local_478 = (code **)0x0;
          FUN_1407fd932(*(longlong *)(lVar19 + 0x1c8),&DAT_14c8464e0,local_348);
        }
        param_2 = local_41c;
        lVar21 = *(longlong *)(param_1 + 0x1a00);
        if ((*(char *)(lVar21 + 0xf70) == '\x01') &&
           (cVar15 = FUN_140aff210(param_1,lVar19), cVar15 != '\0')) {
          local_358 = *(undefined8 *)(lVar21 + 0xf88);
          local_368 = *(undefined8 *)(lVar21 + 0xf78);
          uStack_360 = *(undefined8 *)(lVar21 + 0xf80);
          FUN_140aff5e4(lVar19,&local_368);
          lVar21 = *(longlong *)(param_1 + 0x1a00);
        }
        if ((((*(longlong *)(lVar21 + 0xf90) != 0) && (0 < *(int *)(lVar19 + 0xd10))) &&
            (**(longlong **)(lVar19 + 0xd08) != 0)) &&
           ((plVar96 = *(longlong **)(**(longlong **)(lVar19 + 0xd08) + 0x48),
            plVar96 != (longlong *)0x0 && (lVar18 < *(int *)(lVar21 + 0xf38))))) {
          lVar21 = *(longlong *)(lVar19 + 0x1c8);
          if (lVar21 == 0) {
            pdVar32 = (double *)&DAT_14c8464e0;
            dVar48 = DAT_14c8464f0;
          }
          else {
            pdVar32 = (double *)(lVar21 + 0x260);
            dVar48 = *(double *)(lVar21 + 0x270);
          }
          dVar47 = *pdVar32;
          dVar42 = pdVar32[1];
          uVar93 = SUB84(dVar42,0);
          uVar94 = (undefined4)((ulonglong)dVar42 >> 0x20);
          (**(code **)(*plVar96 + 0x4b0))(plVar96,&local_278);
          plVar96 = local_268;
          dVar43 = dStack_270;
          pcVar90 = local_278;
          (**(code **)(**(longlong **)(param_1 + 0x428) + 0x4b0))
                    (*(longlong **)(param_1 + 0x428),local_328,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x1a00) + 0xf30) + lVar18 * 0x20));
          pdVar32 = local_3e0;
          local_418._0_8_ = dVar48;
          local_3f8 = pcVar90;
          local_3c8 = plVar96;
          auVar13 = local_328;
          ppcVar14 = ppcStack_320;
          uVar20 = local_318._0_8_;
          if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x24c0))) ||
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x24c8)))) ||
             (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x24d0)))) {
            local_3d8 = (double)((ulonglong)local_3d8._4_4_ << 0x20);
          }
          else {
            local_3e0[2] = (double)local_318._0_8_;
            *local_3e0 = (double)local_328;
            local_3e0[1] = (double)ppcStack_320;
            *(undefined4 *)(param_1 + 0x24f0) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x1a00) + 0xfa4);
            local_3d8 = (double)CONCAT44(local_3d8._4_4_,
                                         (int)CONCAT71((int7)((ulonglong)
                                                              *(longlong *)(param_1 + 0x1a00) >> 8),
                                                       1));
          }
          lVar21 = *(longlong *)(param_1 + 0x1a00);
          local_478 = (code **)CONCAT44(local_478._4_4_,*(undefined4 *)(lVar21 + 0xfac));
          FUN_140b81d26(&local_178,local_3e0,local_328);
          pdVar32[2] = (double)plStack_168;
          *pdVar32 = (double)local_178;
          pdVar32[1] = uStack_170;
          dVar44 = *(double *)(param_1 + 0x24d0) - (double)uVar20;
          dVar48 = *(double *)(param_1 + 0x24c8) - (double)ppcVar14;
          pcVar90 = (code *)(*(double *)(param_1 + 0x24c0) - (double)auVar13);
          local_308._8_8_ = dVar48;
          local_308._0_8_ = pcVar90;
          local_2f8 = dVar44;
          lVar23 = FUN_1447e736e(lVar21 + 0x1038);
          if (lVar23 == 0) {
            lVar21 = lVar21 + 0xfb8;
          }
          else {
            lVar21 = FUN_1447e736e(lVar21 + 0x1038);
            lVar21 = lVar21 + 0x30;
          }
          if (lVar21 != 0) {
            dVar45 = dVar44 * dVar44 + (double)pcVar90 * (double)pcVar90 + dVar48 * dVar48;
            local_3a8 = dVar42;
            fVar73 = (float)FUN_1448c9f94(lVar21,(float)SQRT(dVar45),0);
            if (((dVar45 != 1.0) ||
                (pcVar24 = pcVar90, dVar42 = dVar44, dVar46 = dVar48, NAN(dVar45))) &&
               (pcVar24 = DAT_14c8464e0, dVar42 = DAT_14c8464f0, dVar46 = DAT_14c8464e8,
               9.99999993922529e-09 <= dVar45)) {
              dVar45 = 1.0 / SQRT(dVar45);
              pcVar24 = (code *)((double)pcVar90 * dVar45);
              dVar42 = dVar44 * dVar45;
              dVar46 = dVar48 * dVar45;
            }
            dVar45 = (double)fVar73;
            dVar44 = dVar42 * dVar45;
            dVar48 = dVar46 * dVar45;
            pcVar90 = (code *)((double)pcVar24 * dVar45);
            local_308._8_8_ = dVar48;
            local_308._0_8_ = pcVar90;
            uVar93 = SUB84(local_3a8,0);
            uVar94 = (undefined4)((ulonglong)local_3a8 >> 0x20);
            param_2 = local_41c;
            local_2f8 = dVar44;
          }
          pcVar24 = local_3b0;
          lVar21 = *(longlong *)(param_1 + 0x1a00);
          fVar73 = *(float *)(lVar21 + 4000 +
                             (ulonglong)
                             (SQRT(dVar44 * dVar44 +
                                   (double)pcVar90 * (double)pcVar90 + dVar48 * dVar48) <=
                             SQRT(*(double *)(param_1 + 0x24e8) * *(double *)(param_1 + 0x24e8) +
                                  *(double *)(param_1 + 0x24d8) * *(double *)(param_1 + 0x24d8) +
                                  *(double *)(param_1 + 0x24e0) * *(double *)(param_1 + 0x24e0))) *
                             4);
          fVar62 = fVar73 - *(float *)(param_1 + 0x24f0);
          if (1e-08 <= fVar62 * fVar62) {
            fVar73 = *(float *)(lVar21 + 0xfa8) * param_2;
            if (fVar73 <= fVar62) {
              fVar62 = fVar73;
            }
            if (fVar62 <= -fVar73) {
              fVar62 = -fVar73;
            }
            fVar73 = *(float *)(param_1 + 0x24f0) + fVar62;
          }
          dVar45 = (double)local_3c8 - (double)local_418._0_8_;
          dVar47 = (double)local_3f8 - dVar47;
          *(float *)(param_1 + 0x24f0) = fVar73;
          local_478 = (code **)CONCAT44(local_478._4_4_,fVar73);
          FUN_140b81d26(&local_178,local_3b0);
          *(longlong **)(pcVar24 + 0x10) = plStack_168;
          *(code **)pcVar24 = local_178;
          *(double *)(pcVar24 + 8) = uStack_170;
          dVar48 = *(double *)(param_1 + 0x24d8);
          dVar42 = *(double *)(param_1 + 0x24e0);
          dVar44 = *(double *)(param_1 + 0x24e8);
          if ((char)local_3d8 != '\0') {
            lVar23 = -0x10;
            do {
              FUN_140aff126(&local_178);
              *(code **)(pcVar33 + lVar23 * 4 + -4) = local_178;
              *(double *)(pcVar33 + lVar23 * 4 + -4 + 8) = uStack_170;
              uVar27 = rand();
              fVar73 = (float)(uVar27 & 0x7fff) / 32767.0 + -0.5;
              lVar21 = *(longlong *)(param_1 + 0x1a00);
              *(float *)(param_1 + lVar23 + 0x254c) =
                   (fVar73 + fVar73) * *(float *)(lVar21 + 0x1068);
              lVar23 = lVar23 + 4;
            } while (lVar23 != 0);
          }
          pcVar12 = local_370;
          pcVar7 = local_378;
          pcVar24 = local_3b8;
          pcVar90 = local_400;
          fVar73 = *(float *)(lVar21 + 0x1064) * param_2 + *(float *)(param_1 + 0x2538);
          *(float *)(param_1 + 0x2538) = fVar73;
          if (1.0 <= fVar73) {
            local_418._0_8_ = pcVar33;
            do {
              *(float *)(param_1 + 0x2538) = fVar73 + -1.0;
              lVar23 = *(longlong *)pcVar7;
              lVar8 = *(longlong *)(pcVar7 + 8);
              lVar9 = *(longlong *)(pcVar7 + 0x10);
              lVar10 = *(longlong *)(pcVar7 + 0x18);
              lVar21 = *(longlong *)(pcVar7 + 0x28);
              *(longlong *)(pcVar12 + 0x20) = *(longlong *)(pcVar7 + 0x20);
              *(longlong *)(pcVar12 + 0x28) = lVar21;
              *(longlong *)(pcVar12 + 0x10) = lVar9;
              *(longlong *)(pcVar12 + 0x18) = lVar10;
              *(longlong *)pcVar12 = lVar23;
              *(longlong *)(pcVar12 + 8) = lVar8;
              FUN_140aff126(&local_178);
              *(code **)pcVar24 = local_178;
              *(double *)(pcVar24 + 8) = uStack_170;
              fVar73 = *(float *)(param_1 + 0x2538);
            } while (1.0 <= fVar73);
            lVar21 = *(longlong *)(param_1 + 0x1a00);
            pcVar33 = (code *)local_418._0_8_;
          }
          fVar62 = *(float *)(lVar21 + 0x106c) * param_2 + *(float *)(param_1 + 0x254c);
          *(float *)(param_1 + 0x254c) = fVar62;
          if (1.0 <= fVar62) {
            do {
              *(float *)(param_1 + 0x254c) = fVar62 + -1.0;
              lVar21 = *(longlong *)pcVar90;
              *(undefined4 *)(pcVar33 + 8) = *(undefined4 *)(pcVar90 + 8);
              *(longlong *)pcVar33 = lVar21;
              uVar27 = rand();
              fVar73 = (float)(uVar27 & 0x7fff) / 32767.0 + -0.5;
              fVar72 = (fVar73 + fVar73) * *(float *)(*(longlong *)(param_1 + 0x1a00) + 0x1068);
              *(float *)(param_1 + 0x2548) = fVar72;
              fVar62 = *(float *)(param_1 + 0x254c);
            } while (1.0 <= fVar62);
            fVar73 = *(float *)(param_1 + 0x2538);
          }
          else {
            fVar72 = *(float *)(param_1 + 0x2548);
          }
          plVar96 = *(longlong **)(lVar19 + 0x1c8);
          if (plVar96 != (longlong *)0x0) {
            fVar2 = *(float *)(param_1 + 0x2544);
            fVar3 = *(float *)(param_1 + 0x2540);
            fVar4 = *(float *)(param_1 + 0x253c);
            dVar46 = *(double *)(param_1 + 0x2510);
            dVar95 = *(double *)(param_1 + 0x2520);
            dVar97 = *(double *)(param_1 + 0x2500);
            dVar80 = (double)(fVar73 * fVar73);
            dVar49 = *(double *)(param_1 + 0x24f8);
            dVar88 = (double)(fVar73 * fVar73 * fVar73);
            dVar50 = *(double *)(param_1 + 0x2508);
            dVar74 = *(double *)(param_1 + 0x2518);
            uStack_1f0 = (((double)ppcVar14 - (dVar43 - (double)CONCAT44(uVar94,uVar93))) + dVar42 +
                         ((((dVar46 * 3.0 - dVar97) - dVar95 * 3.0) + *(double *)(param_1 + 0x2530))
                          * dVar88 +
                         ((dVar95 * 4.0 + ((dVar97 + dVar97) - dVar46 * 5.0)) -
                         *(double *)(param_1 + 0x2530)) * dVar80 +
                         (dVar95 - dVar97) * (double)fVar73 + dVar46 + dVar46) * 0.5) -
                         (double)plVar96[0x4d];
            local_1f8 = (code *)((((double)auVar13 - dVar47) + dVar48 +
                                 (((dVar74 * 4.0 + ((dVar49 + dVar49) - dVar50 * 5.0)) -
                                  *(double *)(param_1 + 0x2528)) * dVar80 +
                                  (dVar74 - dVar49) * (double)fVar73 + dVar50 + dVar50 +
                                 (((dVar50 * 3.0 - dVar49) - dVar74 * 3.0) +
                                 *(double *)(param_1 + 0x2528)) * dVar88) * 0.5) -
                                (double)plVar96[0x4c]);
            local_1e8._0_8_ =
                 (((double)uVar20 - dVar45) + dVar44 +
                 (double)((((fVar2 * 4.0 + fVar4 + fVar4 + fVar3 * -5.0) - fVar72) * fVar62 * fVar62
                           + fVar3 + fVar3 + (fVar2 - fVar4) * fVar62 +
                          fVar62 * fVar62 * fVar62 *
                          (((fVar3 * 3.0 - fVar4) - fVar2 * 3.0) + fVar72)) * 0.5)) -
                 (double)plVar96[0x4e];
            local_178 = (code *)plVar96[0x48];
            uStack_170 = (double)plVar96[0x49];
            plStack_168 = (longlong *)plVar96[0x4a];
            dStack_160 = (double)plVar96[0x4b];
            local_468 = local_468 & 0xffffff00;
            local_470 = (code **)((ulonglong)local_470 & 0xffffffff00000000);
            local_478 = (code **)0x0;
            (**(code **)(*plVar96 + 0x510))(plVar96,&local_1f8);
          }
        }
      }
    }
LAB_140afd2dc:
    lVar18 = lVar18 + 1;
  }
  if (param_1[0x178] == (code)0x3) {
    *(float *)(param_1 + 0x2614) = *(float *)(param_1 + 0x2614) + param_2;
    lVar18 = *(longlong *)(param_1 + 0x1700);
    if ((lVar18 != 0) && (cVar15 = FUN_1402096b0(), cVar15 != '\0')) {
      *(float *)(param_1 + 0x2610) = param_2 + *(float *)(param_1 + 0x2610);
    }
    uVar27 = (uint)lVar18;
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    if (lVar18 == 0) {
      pdVar32 = (double *)&DAT_14c8464e0;
      dVar48 = DAT_14c8464f0;
    }
    else {
      pdVar32 = (double *)(lVar18 + 0x260);
      dVar48 = *(double *)(lVar18 + 0x270);
    }
    dVar43 = *pdVar32;
    dVar44 = pdVar32[1];
    dVar47 = *(double *)(param_1 + 0x2618);
    dVar42 = *(double *)(param_1 + 0x2620);
    if (((ABS(dVar47) <= 9.999999747378752e-05) && (ABS(dVar42) <= 9.999999747378752e-05)) &&
       (ABS(*(double *)(param_1 + 0x2628)) <= 9.999999747378752e-05)) {
      *(double *)(param_1 + 0x2628) = dVar48;
      dVar42 = dVar44;
      dVar47 = dVar43;
    }
    *(float *)(param_1 + 0x260c) =
         (float)((double)*(float *)(param_1 + 0x260c) +
                SQRT((dVar48 - *(double *)(param_1 + 0x2628)) *
                     (dVar48 - *(double *)(param_1 + 0x2628)) +
                     (dVar43 - dVar47) * (dVar43 - dVar47) + (dVar44 - dVar42) * (dVar44 - dVar42)))
    ;
    *(double *)(param_1 + 0x2618) = dVar43;
    *(double *)(param_1 + 0x2620) = dVar44;
    *(double *)(param_1 + 0x2628) = dVar48;
  }
  if (((*(int *)(param_1 + 0x263c) == 0) || (uVar27 = *(uint *)(param_1 + 0x2638), (int)uVar27 < 0))
     || (DAT_14c9647dc <= (int)uVar27)) goto LAB_140afd4a4;
  uVar29 = uVar27 & 0xffff;
  uVar27 = uVar27 >> 0x10;
  lVar18 = (ulonglong)(uVar29 * 0x18) + *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar27 * 8);
  if (((lVar18 == 0) || (*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x263c))) ||
     (((*(uint *)(lVar18 + 8) & 0x10200000) != 0 || ((*(uint *)(lVar18 + 8) & 0x10200000) != 0))))
  goto LAB_140afd4a4;
  pcVar33 = param_1;
  lVar18 = FUN_1447210f0();
  uVar27 = (uint)pcVar33;
  if (lVar18 == 0) goto LAB_140afd4a4;
  if (*(int *)(param_1 + 0x263c) == 0) {
LAB_140afe15c:
    uVar20 = 0;
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x2638);
    uVar20 = 0;
    if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) {
      puVar35 = (undefined8 *)
                ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
      if ((puVar35 == (undefined8 *)0x0) ||
         ((*(int *)(puVar35 + 2) != *(int *)(param_1 + 0x263c) ||
          ((*(uint *)(puVar35 + 1) & 0x10200000) != 0)))) goto LAB_140afe15c;
      uVar20 = *puVar35;
    }
  }
  lVar19 = FUN_1448e494c(lVar18,uVar20);
  uVar27 = (uint)lVar18;
  if (lVar19 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    if (lVar18 == 0) {
      pdVar32 = (double *)&DAT_14c8464e0;
      dVar48 = DAT_14c8464f0;
    }
    else {
      pdVar32 = (double *)(lVar18 + 0x260);
      dVar48 = *(double *)(lVar18 + 0x270);
    }
    local_178 = (code *)CONCAT44((float)pdVar32[1],(float)*pdVar32);
    uStack_170 = (double)CONCAT44(0x3f800000,(float)dVar48);
    FUN_144938f46(lVar19,DAT_14cbc2c60);
    uVar27 = (uint)lVar19;
  }
LAB_140afd4a4:
  lVar18 = *(longlong *)(param_1 + 0x1710);
  if (((lVar18 != 0) && (param_1[0x1c28] == (code)0x1)) &&
     (lVar19 = *(longlong *)(lVar18 + 0x1c8), lVar19 != 0)) {
    if (((9.999999747378752e-05 < ABS(*(double *)(lVar19 + 0x198) - *(double *)(param_1 + 0x1c10)))
        || (9.999999747378752e-05 < ABS(*(double *)(lVar19 + 0x1a0) - *(double *)(param_1 + 0x1c18))
           )) || (9.999999747378752e-05 <
                  ABS(*(double *)(lVar19 + 0x1a8) - *(double *)(param_1 + 0x1c20)))) {
      local_268 = *(longlong **)(param_1 + 0x1c20);
      local_278 = *(code **)(param_1 + 0x1c10);
      dStack_270 = *(double *)(param_1 + 0x1c18);
      auVar64 = *(undefined1 (*) [16])(lVar19 + 0x1b0);
      dVar47 = auVar64._0_8_;
      dVar42 = auVar64._8_8_;
      dVar48 = *(double *)(lVar19 + 0x1c0);
      pdVar32 = *(double **)(lVar19 + 0x230);
      if (pdVar32 == (double *)0x0) {
        pdVar32 = (double *)FUN_14001cc68(0x40,0x10);
        dVar43 = DAT_14c8463d8;
        *pdVar32 = DAT_14c8463d0;
        pdVar32[1] = dVar43;
        dVar43 = DAT_14c8463e8;
        pdVar32[2] = DAT_14c8463e0;
        pdVar32[3] = dVar43;
        dVar43 = DAT_14c846500;
        pdVar32[4] = (double)DAT_14c8464f8;
        pdVar32[5] = dVar43;
        pdVar32[6] = (double)DAT_14c846508;
        *(double **)(lVar19 + 0x230) = pdVar32;
      }
      if (((pdVar32[4] != dVar47) || (NAN(pdVar32[4]) || NAN(dVar47))) ||
         ((pdVar32[5] != dVar42 ||
          (((NAN(pdVar32[5]) || NAN(dVar42) || (pdVar32[6] != dVar48)) ||
           (NAN(pdVar32[6]) || NAN(dVar48))))))) {
        auVar83._8_8_ = 0;
        auVar83._0_8_ = dVar48;
        dVar43 = (double)DAT_1499387d0;
        dVar44 = DAT_1499387d0._8_8_;
        auVar64 = divpd(auVar64,_DAT_1499387d0);
        auVar65 = divpd(auVar83,_DAT_1499387d0);
        auVar64 = roundpd(auVar64,auVar64,3);
        auVar65 = roundpd(auVar65,auVar65,3);
        auVar92._0_8_ = dVar47 - auVar64._0_8_ * dVar43;
        auVar92._8_8_ = dVar42 - auVar64._8_8_ * dVar44;
        auVar84._0_8_ = dVar48 - auVar65._0_8_ * dVar43;
        auVar84._8_8_ = 0.0 - auVar65._8_8_ * dVar44;
        auVar79._0_8_ = auVar92._0_8_ + dVar43;
        auVar79._8_8_ = auVar92._8_8_ + dVar44;
        auVar87._0_8_ = auVar84._0_8_ + dVar43;
        auVar87._8_8_ = auVar84._8_8_ + dVar44;
        auVar59._8_8_ = -(ulonglong)(0.0 <= auVar92._8_8_);
        auVar59._0_8_ = -(ulonglong)(0.0 <= auVar92._0_8_);
        auVar64 = blendvpd(auVar79,auVar92,auVar59);
        auVar60._8_8_ = -(ulonglong)(0.0 <= auVar84._8_8_);
        auVar60._0_8_ = -(ulonglong)(0.0 <= auVar84._0_8_);
        auVar65 = blendvpd(auVar87,auVar84,auVar60);
        auVar71._0_8_ = auVar64._0_8_ + -360.0;
        auVar71._8_8_ = auVar64._8_8_ + -360.0;
        auVar61._8_8_ = -(ulonglong)(180.0 < auVar64._8_8_);
        auVar61._0_8_ = -(ulonglong)(180.0 < auVar64._0_8_);
        auVar64 = blendvpd(auVar64,auVar71,auVar61);
        dVar48 = auVar65._0_8_;
        *(undefined1 (*) [16])(pdVar32 + 4) = auVar64;
        pdVar32[6] = (double)(~-(ulonglong)(180.0 < dVar48) & (ulonglong)dVar48 |
                             (ulonglong)(dVar48 + -360.0) & -(ulonglong)(180.0 < dVar48));
        FUN_144a7484c(pdVar32 + 4,&local_178);
        pdVar32[2] = (double)plStack_168;
        pdVar32[3] = dStack_160;
        *pdVar32 = (double)local_178;
        pdVar32[1] = uStack_170;
      }
      local_178 = (code *)*pdVar32;
      uStack_170 = pdVar32[1];
      plStack_168 = (longlong *)pdVar32[2];
      dStack_160 = pdVar32[3];
      local_1f8 = local_278;
      uStack_1f0 = dStack_270;
      local_1e8._0_8_ = local_268;
      local_470 = (code **)((ulonglong)local_470 & 0xffffffffffffff00);
      local_478 = (code **)0x0;
      lVar21 = lVar19;
      lVar18 = FUN_144927ad4(lVar19,&local_1f8,&local_178,0);
      uVar27 = (uint)lVar21;
    }
    auVar64 = *(undefined1 (*) [16])(lVar19 + 0x1b0);
    dVar48 = (double)DAT_1499387d0;
    dVar47 = DAT_1499387d0._8_8_;
    auVar65 = divpd(auVar64,_DAT_1499387d0);
    auVar68._8_8_ = 0;
    auVar68._0_8_ = *(double *)(lVar19 + 0x1c0);
    auVar69 = divpd(auVar68,_DAT_1499387d0);
    auVar65 = roundpd(auVar65,auVar65,3);
    auVar69 = roundpd(auVar69,auVar69,3);
    auVar81._0_8_ = auVar64._0_8_ - auVar65._0_8_ * dVar48;
    auVar81._8_8_ = auVar64._8_8_ - auVar65._8_8_ * dVar47;
    auVar85._0_8_ = *(double *)(lVar19 + 0x1c0) - auVar69._0_8_ * dVar48;
    auVar85._8_8_ = 0.0 - auVar69._8_8_ * dVar47;
    auVar78._0_8_ = auVar81._0_8_ + dVar48;
    auVar78._8_8_ = auVar81._8_8_ + dVar47;
    auVar89._0_8_ = dVar48 + auVar85._0_8_;
    auVar89._8_8_ = dVar47 + auVar85._8_8_;
    auVar54._8_8_ = -(ulonglong)(0.0 <= auVar81._8_8_);
    auVar54._0_8_ = -(ulonglong)(0.0 <= auVar81._0_8_);
    auVar64 = blendvpd(auVar78,auVar81,auVar54);
    auVar55._8_8_ = -(ulonglong)(0.0 <= auVar85._8_8_);
    auVar55._0_8_ = -(ulonglong)(0.0 <= auVar85._0_8_);
    auVar65 = blendvpd(auVar89,auVar85,auVar55);
    auVar86._0_8_ = auVar64._0_8_ + -360.0;
    auVar86._8_8_ = auVar64._8_8_ + -360.0;
    auVar82._0_8_ = auVar65._0_8_ + -360.0;
    auVar82._8_8_ = auVar65._8_8_ + -360.0;
    auVar56._8_8_ = -(ulonglong)(180.0 < auVar64._8_8_);
    auVar56._0_8_ = -(ulonglong)(180.0 < auVar64._0_8_);
    auVar64 = blendvpd(auVar64,auVar86,auVar56);
    auVar57._8_8_ = -(ulonglong)(180.0 < auVar65._8_8_);
    auVar57._0_8_ = -(ulonglong)(180.0 < auVar65._0_8_);
    auVar65 = blendvpd(auVar65,auVar82,auVar57);
    auVar70._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar64._8_8_));
    auVar70._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar64._0_8_));
    iVar17 = movmskpd((int)lVar18,auVar70);
    auVar58._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar65._8_8_));
    auVar58._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar65._0_8_));
    uVar27 = movmskpd(uVar27,auVar58);
    if ((uVar27 & 0x3fffffff) != 0 || iVar17 != 0) {
      plStack_168 = DAT_14c846508;
      local_178 = DAT_14c8464f8;
      uStack_170 = DAT_14c846500;
      local_478 = (code **)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_14020f75c(lVar19,&local_178,0,0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aff126 FUN_140aff126 body=233 status=ok
// SIG undefined FUN_140aff126(void)

double * FUN_140aff126(double *param_1,float param_2)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  
  do {
    uVar2 = rand();
    fVar3 = (float)(uVar2 & 0x7fff) / 32767.0;
    dVar1 = (double)(fVar3 + fVar3 + -1.0);
    uVar2 = rand();
    fVar3 = (float)(uVar2 & 0x7fff) / 32767.0;
    dVar4 = (double)(fVar3 + fVar3 + -1.0);
  } while (1.0 < dVar1 * dVar1 + dVar4 * dVar4);
  *param_1 = dVar1 * (double)param_2;
  param_1[1] = dVar4 * (double)param_2;
  return param_1;
}



// FUNCTION 140aff210 FUN_140aff210 body=101 status=ok
// SIG undefined FUN_140aff210(void)

undefined8 FUN_140aff210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1a00), lVar1 != 0)) &&
     (0 < (int)*(uint *)(param_1 + 0x2348))) {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x2340) + 0x28);
    uVar2 = 0;
    do {
      if ((plVar3[-1] == param_2) || (*plVar3 == param_2)) {
        if (0x7ffffffe < (uint)uVar2) {
          return 0;
        }
        if (*(int *)(lVar1 + 0xf68) <= (int)(uint)uVar2) {
          return 0;
        }
        return CONCAT71((int7)(uVar2 >> 8),*(undefined1 *)(*(longlong *)(lVar1 + 0xf60) + uVar2));
      }
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 0x2e;
    } while (*(uint *)(param_1 + 0x2348) != uVar2);
  }
  return 0;
}



// FUNCTION 140aff276 FUN_140aff276 body=819 status=ok
// SIG undefined FUN_140aff276(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140aff276(double *param_1,double *param_2,double *param_3,float param_4,float param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  if (0.0 < param_5) {
    dVar15 = *param_2;
    dVar11 = param_2[2];
    dVar18 = *param_3;
    dVar12 = param_3[2];
    lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] - param_3[1]));
    auVar4._8_4_ = (int)lVar8;
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar15 - dVar18));
    auVar4._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    uVar5 = movmskpd(in_EAX,auVar4);
    lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] - param_3[3]));
    auVar17._8_4_ = (int)lVar8;
    auVar17._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 - dVar12));
    auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    iVar6 = movmskpd((int)param_1,auVar17);
    uVar7 = iVar6 << 2 | uVar5;
    if (uVar7 != 0) {
      lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] + param_3[1]));
      auVar3._8_4_ = (int)lVar8;
      auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar15 + dVar18));
      auVar3._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
      iVar6 = movmskpd(uVar5,auVar3);
      lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] + param_3[3]));
      auVar2._8_4_ = (int)lVar8;
      auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 + dVar12));
      auVar2._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
      uVar5 = movmskpd(uVar7,auVar2);
      if ((uVar5 & 0x3fffffff) != 0 || iVar6 != 0) {
        dVar9 = param_2[1];
        uVar22 = SUB84(dVar9,0);
        uVar23 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar13 = param_3[1];
        uVar24 = SUB84(dVar13,0);
        uVar25 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar10 = param_2[3];
        uVar20 = SUB84(dVar10,0);
        uVar21 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar1 = param_3[3];
        uVar26 = SUB84(dVar1,0);
        uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
        param_4 = param_4 * param_5;
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        dVar9 = dVar10 * dVar1 + dVar11 * dVar12 + dVar15 * dVar18 + dVar9 * dVar13;
        dVar10 = dVar9 * (double)(&DAT_149931160)[0.0 <= dVar9];
        dVar13 = 1.0 - (double)param_4;
        dVar9 = (double)(&DAT_149931160)[0.0 <= dVar9] * (double)param_4;
        if (dVar10 < 0.9999) {
          dVar11 = dVar10;
          if (1.0 <= dVar10) {
            dVar11 = 1.0;
          }
          dVar11 = acos((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar11));
          dVar12 = sin(dVar11);
          dVar13 = sin(dVar13 * dVar11);
          dVar13 = dVar13 * (1.0 / dVar12);
          dVar9 = sin(dVar9 * dVar11);
          dVar9 = dVar9 * (1.0 / dVar12);
          uVar20 = SUB84(param_2[3],0);
          uVar21 = (undefined4)((ulonglong)param_2[3] >> 0x20);
          uVar26 = SUB84(param_3[3],0);
          uVar27 = (undefined4)((ulonglong)param_3[3] >> 0x20);
          dVar11 = param_2[2];
          dVar12 = param_3[2];
          dVar15 = *param_2;
          uVar22 = SUB84(param_2[1],0);
          uVar23 = (undefined4)((ulonglong)param_2[1] >> 0x20);
          dVar18 = *param_3;
          uVar24 = SUB84(param_3[1],0);
          uVar25 = (undefined4)((ulonglong)param_3[1] >> 0x20);
        }
        *param_1 = dVar15 * dVar13 + dVar18 * dVar9;
        param_1[1] = (double)CONCAT44(uVar23,uVar22) * dVar13 +
                     (double)CONCAT44(uVar25,uVar24) * dVar9;
        param_1[2] = dVar11 * dVar13 + dVar12 * dVar9;
        param_1[3] = (double)CONCAT44(uVar21,uVar20) * dVar13 +
                     (double)CONCAT44(uVar27,uVar26) * dVar9;
        dVar11 = *param_1;
        dVar12 = param_1[1];
        dVar15 = param_1[2];
        dVar18 = param_1[3];
        dVar9 = dVar15 * dVar15 + dVar11 * dVar11;
        dVar13 = dVar18 * dVar18 + dVar12 * dVar12;
        auVar16._0_8_ = dVar9 + dVar13;
        auVar16._8_8_ = dVar9 + dVar13;
        auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
        auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
        auVar17 = sqrtpd(auVar16,auVar16);
        auVar17 = divpd(_DAT_149934d80,auVar17);
        auVar19._0_8_ = auVar17._0_8_ * dVar15;
        auVar19._8_8_ = auVar17._8_8_ * dVar18;
        *param_1 = (double)((ulonglong)(dVar11 * auVar17._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
        param_1[1] = (double)((ulonglong)(dVar12 * auVar17._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
        auVar17 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar14);
        *(undefined1 (*) [16])(param_1 + 2) = auVar17;
        return param_1;
      }
    }
  }
  dVar11 = *param_3;
  dVar12 = param_3[1];
  dVar15 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = dVar15;
  *param_1 = dVar11;
  param_1[1] = dVar12;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return param_1;
}



// FUNCTION 140aff5aa FUN_140aff5aa body=57 status=ok
// SIG undefined FUN_140aff5aa(void)

void FUN_140aff5aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba48b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba48b0 = FUN_140002ddd(FUN_1465beca5,uVar1,L"HoverDriveDef");
  }
  return;
}



// FUNCTION 140aff5e4 FUN_140aff5e4 body=770 status=ok
// SIG undefined FUN_140aff5e4(void)

void FUN_140aff5e4(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_168 [32];
  double local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined1 local_c8 [8];
  undefined1 local_c0 [48];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    iVar3 = _finite(*param_2);
    if (iVar3 != 0) {
      iVar3 = _finite(param_2[1]);
      if (iVar3 != 0) {
        iVar3 = _finite(param_2[2]);
        if (iVar3 != 0) {
          local_128 = param_2[2];
          local_138 = *(undefined4 *)param_2;
          uStack_134 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_130 = *(undefined4 *)(param_2 + 1);
          uStack_12c = *(undefined4 *)((longlong)param_2 + 0xc);
          (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x478))();
          goto LAB_140aff663;
        }
      }
    }
    FUN_1446ddc76(local_c8,"Blueprint",1);
    FUN_14276766e(local_c0,local_c8);
    local_148 = param_2[2];
    FUN_140002266(local_f8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_2,param_2[1]);
    FUN_140233b1a(local_e8,local_f8);
    local_50 = L"InvalidScale";
    local_48 = 0xc;
    FUN_1446e940c(local_11c,&local_50);
    local_50 = L"Actor";
    local_48 = 5;
    FUN_1446e940c(local_120,&local_50);
    FUN_140208bae(local_118,local_120,local_11c,L"Scale \'{0}\' is not valid.");
    FUN_14023409e(&local_108,local_118,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_e8);
    local_68 = &local_30;
    local_70 = &local_50;
    FUN_14010d304(&local_60);
    local_80 = local_108;
    local_78 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_80,&local_60);
    FUN_14007f2db(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    FUN_1427679d4(local_c0,local_90,local_d8);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_c0);
  }
LAB_140aff663:
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aff8e8 FUN_140aff8e8 body=542 status=ok
// SIG undefined FUN_140aff8e8(void)

undefined8 *
FUN_140aff8e8(longlong param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
             undefined4 param_5,undefined1 *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140affb08(param_4,param_2,param_5);
  *param_6 = 0;
  if (*param_4 != '\x01') goto LAB_140aff933;
  lVar5 = *(longlong *)(param_1 + 0x540);
  if (lVar5 == 0) {
    uVar4 = FUN_140aff5aa();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x540) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x538);
  lVar6 = *(longlong *)(param_1 + 0x548);
  if (lVar6 == 0) {
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x548) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x540);
            goto LAB_140aff97e;
          }
          goto LAB_140aff9d2;
        }
      }
      *(undefined8 *)(param_1 + 0x548) = 0;
    }
  }
  else {
LAB_140aff97e:
    if (lVar5 == 0) {
      uVar4 = FUN_140aff5aa(lVar6);
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x540) = lVar5;
      lVar6 = *(longlong *)(param_1 + 0x548);
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_140affb03:
          lVar6 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar2 + 0x108))();
          if (cVar3 == '\0') goto LAB_140affb03;
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0x548) = lVar6;
      }
    }
    FUN_140b0053c(lVar6,&local_60,*param_3);
    *param_2 = local_60;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    if (&local_60 == param_2) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[3] != 0) {
        FUN_1400020a8();
      }
      param_2[3] = local_48;
      *(undefined4 *)(param_2 + 4) = local_40;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_3c;
    }
  }
LAB_140aff9d2:
  *param_6 = 1;
LAB_140aff933:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140affb08 FUN_140affb08 body=266 status=ok
// SIG undefined FUN_140affb08(void)

undefined8 * FUN_140affb08(char *param_1,undefined8 *param_2,uint param_3)

{
  void *_Src;
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  if (*param_1 != '\0') {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    return param_2;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    pcVar6 = param_1 + 0x68;
    if (*(char **)(param_1 + 0x70) != (char *)0x0) {
      pcVar6 = *(char **)(param_1 + 0x70);
    }
    iVar5 = *(int *)(pcVar6 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_3 & 0xff) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      iVar7 = iVar5;
      do {
        if (*(char *)(lVar1 + (longlong)iVar7 * 0x38) == (char)param_3) goto LAB_140affb9a;
        iVar7 = *(int *)((longlong)iVar7 * 0x38 + lVar1 + 0x30);
      } while (iVar7 != -1);
    }
  }
  goto LAB_140affb25;
  while (iVar5 = *(int *)(param_1 + 0x30), iVar5 != -1) {
LAB_140affb9a:
    param_1 = (char *)(lVar1 + (longlong)iVar5 * 0x38);
    if (*(char *)(lVar1 + (longlong)iVar5 * 0x38) == (char)param_3) goto LAB_140affb25;
  }
  param_1 = (char *)0x0;
LAB_140affb25:
  *param_2 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar5 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 4) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar5,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar5 * 2);
  }
  return param_2;
}



// FUNCTION 140affc12 FUN_140affc12 body=353 status=ok
// SIG undefined FUN_140affc12(void)

void FUN_140affc12(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140affc97;
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
LAB_140affc97:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140affd74 FUN_140affd74 body=393 status=ok
// SIG undefined FUN_140affd74(void)

void FUN_140affd74(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x540);
  if (lVar5 == 0) {
    uVar4 = FUN_140aff5aa();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x540) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x538);
  lVar6 = *(longlong *)(param_1 + 0x548);
  if (lVar6 == 0) {
    if (*plVar1 == 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x548) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x548) = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x540);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_140aff5aa();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x540) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x548);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x548) = lVar6;
    }
  }
  if ((longlong)*(int *)(lVar6 + 0xa8) != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0xa0);
    puVar8 = puVar7 + (longlong)*(int *)(lVar6 + 0xa8) * 0x13;
    do {
      FUN_140b00610(param_1,param_2,*puVar7,puVar7 + 1);
      puVar7 = puVar7 + 0x13;
    } while (puVar7 != puVar8);
  }
  return;
}



// FUNCTION 140affefe FUN_140affefe body=864 status=ok
// SIG undefined FUN_140affefe(void)

longlong FUN_140affefe(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  
  iVar22 = (int)param_1[1];
  iVar12 = *(int *)((longlong)param_1 + 0x34);
  if (iVar22 != iVar12) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        lVar19 = *param_1 + (longlong)iVar11 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == *param_3) {
          if (lVar19 != 0) goto LAB_140b00104;
          break;
        }
        iVar11 = *(int *)(lVar19 + 0x18);
      } while (iVar11 != -1);
    }
  }
  if (iVar12 == 0) {
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447711aa(param_1,iVar22);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar17 = iVar12 + 1;
    iVar21 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar21 = iVar12;
    }
    if (iVar21 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar18 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar18) {
              uVar16 = uVar18;
            }
          }
          else {
            uVar16 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar16 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)uVar18 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar13,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar13;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar19 = (longlong)iVar22;
    iVar11 = *(int *)(*param_1 + 4 + lVar19 * 0x20);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar12 + -1;
    if (iVar12 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar12 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar12 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  iVar12 = 1;
  lVar5 = *param_1;
  lVar19 = lVar19 * 0x20;
  puVar2 = (undefined4 *)(lVar5 + lVar19);
  lVar6 = *param_3;
  *(longlong *)(lVar5 + lVar19) = lVar6;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar19);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar19) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar18) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == lVar6) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar7;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          FUN_14576fb96(param_1,iVar22);
          goto LAB_140b000f3;
        }
        iVar11 = puVar3[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar18) {
    uVar14 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar18 < 1) || (iVar12 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar2[7] = param_2;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4)
    ;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar22;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_140b00a46(param_1);
  }
LAB_140b000f3:
  lVar19 = *param_1 + (longlong)iVar22 * 0x20;
LAB_140b00104:
  return lVar19 + 8;
}



// FUNCTION 140b0025e FUN_140b0025e body=733 status=ok
// SIG undefined FUN_140b0025e(void)

void FUN_140b0025e(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  
  lVar2 = *param_1;
  plVar17 = (longlong *)(lVar2 + 0x1a20);
  if (param_2 != '\0') {
    plVar17 = (longlong *)(lVar2 + 0x1a70);
  }
  iVar4 = (int)plVar17[5];
  if (iVar4 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = (uint *)plVar17[4];
    if ((uint *)plVar17[4] == (uint *)0x0) {
      puVar7 = (uint *)(plVar17 + 2);
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar8 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar8 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
  }
  if (iVar8 < iVar4) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(lVar2 + 0x1a00);
      if (*(int *)(lVar11 + 0x1138) != *(int *)(lVar11 + 0x1164)) {
        lVar18 = *(longlong *)(*plVar17 + (longlong)iVar8 * 0x20);
        uVar5 = (uint)((ulonglong)lVar18 >> 0x10);
        uVar14 = (uint)lVar18 & 0xffff;
        lVar13 = lVar11 + 0x1168;
        if (*(longlong *)(lVar11 + 0x1170) != 0) {
          lVar13 = *(longlong *)(lVar11 + 0x1170);
        }
        iVar6 = *(int *)(lVar13 + (ulonglong)
                                  (*(int *)(lVar11 + 0x1178) - 1U &
                                  (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar14)
                                  + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            lVar13 = *(longlong *)(lVar11 + 0x1130) + (longlong)iVar6 * 0xe0;
            if (*(longlong *)(*(longlong *)(lVar11 + 0x1130) + (longlong)iVar6 * 0xe0) == lVar18)
            goto LAB_140b003f7;
            iVar6 = *(int *)(lVar13 + 0xd8);
          } while (iVar6 != -1);
        }
      }
      lVar13 = 0;
LAB_140b003f7:
      lVar11 = *plVar17 + (longlong)iVar8 * 0x20;
      iVar8 = *(int *)(lVar13 + 0x90);
      iVar6 = *(int *)(lVar11 + 0x10);
      iVar9 = iVar8;
      if (iVar6 < iVar8) {
        iVar9 = iVar6;
      }
      if (0 < iVar9) {
        lVar18 = 0;
        lVar19 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar11 + 8) + lVar19 * 8);
          if (lVar3 != 0) {
            FUN_1440bba28(param_1[1],lVar3,lVar13 + 8,*(longlong *)(lVar13 + 0x88) + lVar18,param_2)
            ;
            iVar8 = *(int *)(lVar13 + 0x90);
            iVar6 = *(int *)(lVar11 + 0x10);
          }
          lVar19 = lVar19 + 1;
          iVar4 = iVar8;
          if (iVar6 < iVar8) {
            iVar4 = iVar6;
          }
          lVar18 = lVar18 + 0x20;
        } while (lVar19 < iVar4);
        iVar4 = (int)plVar17[5];
      }
      uVar12 = uVar12 & ~(uint)uVar16;
      puVar7 = (uint *)plVar17[4];
      if ((uint *)plVar17[4] == (uint *)0x0) {
        puVar7 = (uint *)(plVar17 + 2);
      }
      iVar8 = (int)uVar15;
      lVar11 = (longlong)iVar8;
      uVar5 = puVar7[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar6;
        if (iVar6 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar6 <= iVar8) {
          return;
        }
        lVar18 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar7[lVar11 + lVar18 + 1];
          if (uVar5 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar9 - lVar11 == lVar18) {
            return;
          }
        }
        uVar15 = (ulonglong)(iVar8 + (int)lVar18 + 1);
        uVar12 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar16 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
  return;
}



// FUNCTION 140b0053c FUN_140b0053c body=211 status=ok
// SIG undefined FUN_140b0053c(void)

undefined8 * FUN_140b0053c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    puVar1 = param_2 + 3;
    lVar6 = (longlong)*(int *)(param_1 + 0x98) * 0x30;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x20);
    do {
      if (puVar7[-4] == param_3) {
        *param_2 = puVar7[-3];
        uVar3 = *(undefined4 *)((longlong)puVar7 + -0xc);
        uVar4 = *(undefined4 *)(puVar7 + -1);
        uVar5 = *(undefined4 *)((longlong)puVar7 + -4);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar7 + -2);
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
        *(undefined4 *)(param_2 + 2) = uVar4;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
        if (puVar7 != puVar1) {
          iVar2 = *(int *)(puVar7 + 1);
          _Src = (void *)*puVar7;
          *(int *)(param_2 + 4) = iVar2;
          if (iVar2 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x24) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
            }
          }
        }
      }
      puVar7 = puVar7 + 6;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  return param_2;
}



// FUNCTION 140b00610 FUN_140b00610 body=1077 status=ok
// SIG undefined FUN_140b00610(void)

void FUN_140b00610(longlong param_1,longlong *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined4 local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  char local_98 [16];
  longlong *local_88;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x1700) == 0)) goto LAB_140b0070c;
  local_98[0] = '\0';
  local_70 = 0;
  FUN_1456bb102(local_98,param_1);
  if (*param_4 == '\x01') {
    puVar8 = &local_c0;
    FUN_1448729ea(param_4 + 8,puVar8,local_98);
    uVar5 = local_c0;
    if (local_a0 == 3) {
LAB_140b006a9:
      (**(code **)(*param_2 + 0xa08))(param_2,param_3,uVar5);
    }
    else if (local_a0 < 0x15) {
      if (local_a0 == 1) {
        uVar5 = FUN_144a7fca4(&local_c0);
        (**(code **)(*param_2 + 0x9f8))(param_2,param_3,uVar5);
      }
      else if (local_a0 == 2) {
        uVar5 = FUN_1405d5f74(&local_c0);
        (**(code **)(*param_2 + 0xa00))(param_2,param_3,uVar5);
      }
      else if (local_a0 == 4) {
        FUN_144a7b7fe(&local_c0,local_d8);
        (**(code **)(*param_2 + 0xa10))(param_2,param_3,local_d8);
      }
    }
    else {
      if (local_a0 == 0x15) {
        puVar12 = &local_68;
        FUN_1400b56fe(puVar12,&local_c0,3);
        uVar5 = 0;
        if (local_48 != 0) {
          uVar5 = local_68;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_50) {
            puVar12 = (undefined4 *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar2)(puVar12);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        goto LAB_140b006a9;
      }
      if (local_a0 == 0x18) {
        FUN_140a1ca64(&local_c0,local_e8);
        (**(code **)(*param_2 + 0xa18))(param_2,param_3,local_e8);
      }
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_a8) {
        puVar8 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
      }
      (*pcVar2)(puVar8);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
    }
  }
  else if (param_4[0x58] == '\x01') {
    (**(code **)(*param_2 + 0xa08))(param_2,param_3,*(undefined4 *)(param_4 + 0x60));
  }
  else {
    switch(param_4[0x58]) {
    case '\0':
      (**(code **)(*param_2 + 0xa00))(param_2,param_3,*(undefined4 *)(param_4 + 0x5c));
      break;
    case '\x02':
      local_f8 = *(undefined8 *)(param_4 + 0x78);
      local_108 = *(undefined4 *)(param_4 + 0x68);
      uStack_104 = *(undefined4 *)(param_4 + 0x6c);
      uStack_100 = *(undefined4 *)(param_4 + 0x70);
      uStack_fc = *(undefined4 *)(param_4 + 0x74);
      (**(code **)(*param_2 + 0xa10))(param_2,param_3);
      break;
    case '\x03':
      local_118 = *(undefined4 *)(param_4 + 0x80);
      uStack_114 = *(undefined4 *)(param_4 + 0x84);
      uStack_110 = *(undefined4 *)(param_4 + 0x88);
      uStack_10c = *(undefined4 *)(param_4 + 0x8c);
      (**(code **)(*param_2 + 0xa18))(param_2,param_3);
      break;
    case '\x04':
      (**(code **)(*param_2 + 0x9f8))(param_2,param_3,param_4[0x59]);
    }
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_70 != 0) {
    lVar10 = (longlong)local_70 + -1;
    lVar11 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar3 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_70 = 0;
  }
  if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
LAB_140b0070c:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b00a46 FUN_140b00a46 body=673 status=ok
// SIG undefined FUN_140b00a46(void)

void FUN_140b00a46(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
LAB_140b00a91:
    uVar4 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar11 != uVar4);
  }
  else {
    if (uVar11 == 0) goto LAB_140b00c40;
    FUN_1446efa72(plVar7,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_140b00a91;
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  iVar6 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar5 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar14 = (longlong)iVar12 * 0x20;
      uVar2 = *(undefined8 *)(lVar10 + lVar14);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar15 = (uint)uVar2 & 0xffff;
      uVar9 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar9;
      *(int *)(lVar10 + 0x1c + lVar14) = iVar8;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar10 + 0x18 + lVar14) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar11 = ~(uint)uVar13 & uVar11;
      plVar7 = (longlong *)local_60[2];
      if ((longlong *)local_60[2] == (longlong *)0x0) {
        plVar7 = local_60;
      }
      iVar8 = (int)local_60[3];
      lVar10 = (longlong)iVar6;
      uVar4 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar4 == 0) {
        iVar12 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar12 = iVar8 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar3 = iVar12;
        if (iVar12 < iVar6) {
          iVar3 = iVar6;
        }
        if (iVar12 <= iVar6) break;
        lVar14 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar4 = *(uint *)((longlong)plVar7 + lVar14 * 4 + lVar10 * 4 + 4);
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar3 - lVar10 == lVar14) goto LAB_140b00c40;
        }
        iVar6 = iVar6 + (int)lVar14 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar8);
  }
LAB_140b00c40:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b00ce8 FUN_140b00ce8 body=60 status=ok
// SIG undefined FUN_140b00ce8(void)

void FUN_140b00ce8(longlong param_1)

{
  longlong lVar1;
  
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_140b00d17;
  }
  FUN_140b00d5e(param_1 + 0x6d0,0);
LAB_140b00d17:
  FUN_140b00d24(param_1);
  return;
}



// FUNCTION 140b00d24 FUN_140b00d24 body=58 status=ok
// SIG undefined FUN_140b00d24(void)

void FUN_140b00d24(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1447c0e7a();
  if (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) ||
     (lVar1 = 0xa08, (*(byte *)((longlong)param_1 + 0x9f) & 4) == 0)) {
    lVar1 = 0xa10;
  }
                    /* WARNING: Could not recover jumptable at 0x000140b00d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1);
  return;
}



// FUNCTION 140b00d5e FUN_140b00d5e body=207 status=ok
// SIG undefined FUN_140b00d5e(void)

void FUN_140b00d5e(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      lVar4 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      lVar4 = param_1[3];
    }
    LOCK();
    bVar6 = param_1 == *(longlong **)(lVar4 + 0x30);
    if (bVar6) {
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    UNLOCK();
    if (!bVar6) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    lVar3 = param_1[2];
    lVar4 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5) != 0)) {
          FUN_140b00e2e(lVar4 + 0x18,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0x10 != lVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140b00e2e FUN_140b00e2e body=162 status=ok
// SIG undefined FUN_140b00e2e(void)

void FUN_140b00e2e(longlong *param_1,undefined8 param_2)

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
        goto LAB_140b00ebb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b00ebb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140b00ed0 FUN_140b00ed0 body=71 status=ok
// SIG undefined FUN_140b00ed0(void)

undefined8 * FUN_140b00ed0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e70270;
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xf] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b00f18 FUN_140b00f18 body=29 status=ok
// SIG undefined FUN_140b00f18(void)

undefined8 FUN_140b00f18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b00f36 FUN_140b00f36 body=654 status=ok
// SIG undefined FUN_140b00f36(void)

void FUN_140b00f36(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_1 + 0x640);
  if (lVar7 != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_144775d28(&local_78,1);
    uVar3 = uStack_70;
    lVar6 = (longlong)(int)uStack_70;
    uVar5 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
    if (uStack_70._4_4_ < uVar5) {
      FUN_14741464c(&local_78,uVar3 & 0xffffffff);
    }
    local_78[lVar6] = lVar7;
    local_58 = local_78;
    local_50 = (int)uStack_70;
    FUN_14007658c(&DAT_14ca850c8,&local_58,0);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  if ((DAT_14ca96da8 != '\0') && ((*(byte *)(*param_2 + 0x194) & 0x20) != 0)) {
    local_78 = &DAT_14ca85100;
    uStack_70 = 0;
    local_68 = 0;
    FUN_1417b3222(&uStack_70,0x62);
    lVar7 = (longlong)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      lVar6 = lVar7 * 0x60 + param_1 + 0x340;
      do {
        lVar1 = *(longlong *)(param_2[2] + lVar7 * 8);
        cVar4 = FUN_144a7ebcb();
        if ((((cVar4 != '\0') && (0 < *(int *)(lVar1 + 0x10c))) &&
            (lVar2 = *(longlong *)(lVar1 + 0x50), lVar2 != 0)) &&
           ((((*(byte *)(lVar2 + 0xa0) & 8) == 0 && (*(char *)(lVar1 + 0x290) == '\0')) &&
            (*(longlong *)(lVar6 + 0x50) != 0)))) {
          FUN_147427f7e(lVar2,*(longlong *)(lVar6 + 0x50),&local_78);
          *(uint *)(lVar2 + 0xa0) =
               *(uint *)(lVar2 + 0xa0) & 0xfffffffe | (uint)*(byte *)(lVar6 + 0x58);
        }
        FUN_147d5f788(lVar6);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (lVar7 < *(int *)(param_1 + 0x10));
    }
    if ((int)local_68 != 0) {
      (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_78,&uStack_70);
    }
    if (uStack_70 != 0) {
      FUN_1400020a8();
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      do {
        lVar6 = *(longlong *)(param_2[2] + lVar7 * 8);
        if (((0 < *(int *)(lVar6 + 0x10c)) && (*(longlong *)(lVar6 + 0x50) != 0)) &&
           (((*(byte *)(*(longlong *)(lVar6 + 0x50) + 0xa0) & 8) == 0 &&
            (((*(char *)(lVar6 + 0x290) == '\0' && (cVar4 = FUN_144a7ebcb(), cVar4 != '\0')) &&
             (cVar4 = FUN_1474283cc(*(undefined8 *)(lVar6 + 0x50)), cVar4 != '\0')))))) {
          FUN_147428096(*(undefined8 *)(lVar6 + 0x50),&DAT_14ca85100,2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x10));
    }
  }
  *(char *)(param_2[1] + 0x8f) =
       (*(char *)(param_1 + 0xc) - *(char *)(param_1 + 0xe)) + *(char *)(param_1 + 0xb);
  FUN_140b011c6(*param_2);
  *(undefined1 *)(param_1 + 0x5e) = 1;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b011c6 FUN_140b011c6 body=163 status=ok
// SIG undefined FUN_140b011c6(void)

void FUN_140b011c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140083894();
  if (((*(longlong *)(param_1 + 0xe0) != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) &&
     (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x40) + 0x70))) {
    FUN_147cca938(*(longlong *)(lVar1 + 0x50),param_1);
  }
  if ((DAT_14ca96da8 != '\0') && ((*(byte *)(param_1 + 0x194) & 0x20) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0xe0);
    if (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x18) == '\x01') {
      FUN_1436743ea(DAT_14ca964f8,&DAT_14ca85100,*(undefined4 *)(lVar1 + 0x88),
                    *(undefined1 *)(lVar1 + 0x8f));
      lVar1 = *(longlong *)(param_1 + 0xe0);
    }
                    /* WARNING: Could not recover jumptable at 0x000140b0125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca964f8 + 0x50))(DAT_14ca964f8,*(undefined4 *)(lVar1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 140b01269 FUN_140b01269 body=380 status=ok
// SIG undefined FUN_140b01269(void)

int * FUN_140b01269(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 ****ppppuVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  float local_90 [2];
  char local_88 [16];
  longlong *local_78;
  undefined4 local_60 [2];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88[0] = '\0';
  local_60[0] = 0;
  FUN_1456bb102(local_88,param_1);
  FUN_1447c3578(param_2 + 0xa0,local_58,local_88);
  FUN_140b013e6(local_58,local_90);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar4 = local_58;
    if (0x18 < local_40) {
      ppppuVar4 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_1448173f8(local_60);
  if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)local_78 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x110);
  if (((lVar2 == 0) || (ABS(local_90[0]) <= 1e-08)) || ((longlong)*(int *)(param_3 + 0xa8) == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar6 = (longlong)*(int *)(param_3 + 0xa8) * 0x130;
    piVar5 = *(int **)(param_3 + 0xa0);
    do {
      piVar3 = piVar5;
      if ((*piVar3 == (int)lVar2) && (piVar3[1] == (int)((ulonglong)lVar2 >> 0x20))) break;
      piVar5 = piVar3 + 0x4c;
      piVar3 = (int *)0x0;
      lVar6 = lVar6 + -0x130;
    } while (lVar6 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar3;
}



// FUNCTION 140b013e6 FUN_140b013e6 body=177 status=ok
// SIG undefined FUN_140b013e6(void)

longlong * FUN_140b013e6(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\v') {
    *param_2 = *param_1;
  }
  else {
    FUN_1400b56fe(local_40,param_1,0xb);
    pppuVar2 = (undefined8 ***)local_40[0];
    if (local_20 == 0) {
      pppuVar2 = DAT_14c9ab1b0;
    }
    *param_2 = (longlong)pppuVar2;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_40;
      if (0x18 < local_28) {
        pppuVar2 = (undefined8 ***)local_40[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b01498 FUN_140b01498 body=281 status=ok
// SIG undefined FUN_140b01498(void)

void FUN_140b01498(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  char local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140b015bc(param_1,&local_50,param_2[2],param_2[3]);
    if (local_4c == '\x01') {
      uVar1 = *param_2;
      local_30 = 4;
      local_48 = local_50;
      local_28 = 3;
      local_58 = *(longlong *)(param_1 + 0x10);
      if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      puVar3 = &local_48;
      FUN_14095c1ce(uVar1,&local_58,puVar3,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_30) {
          puVar3 = (undefined4 *)CONCAT44(uStack_44,local_48);
        }
        (*pcVar2)(puVar3);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(CONCAT44(uStack_44,local_48));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140528990(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b015bc FUN_140b015bc body=413 status=ok
// SIG undefined FUN_140b015bc(void)

undefined4 *
FUN_140b015bc(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  byte local_3c;
  undefined4 local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[6];
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar5 != 0) goto LAB_140b01601;
  }
  else {
    FUN_1456cec3c();
LAB_140b01601:
    lVar2 = FUN_140553c72();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))) {
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar4 = lVar5;
      }
      goto LAB_140b0162f;
    }
  }
  lVar4 = 0;
LAB_140b0162f:
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    plVar3 = (longlong *)*param_3;
    lVar5 = (longlong)*(int *)(param_3 + 1) * 0xb0;
    do {
      if (*plVar3 == lVar4) {
        if ((plVar3 == (longlong *)0x0) || ((char)plVar3[4] == '\0')) break;
        local_38 = (undefined4)plVar3[2];
        local_34 = 1;
        cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
        if (cVar1 == '\0') {
          *(byte *)(param_2 + 1) = local_34;
          local_40 = local_38;
          local_3c = local_34;
        }
        else {
          local_48 = param_1[6];
          if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          FUN_140b0175a(param_3,&local_40,&local_48,param_4);
          if ((local_3c == 1) &&
             (cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_40), cVar1 == '\0')) break;
          *(byte *)(param_2 + 1) = local_3c;
        }
        if ((local_3c & 1) != 0) {
          *param_2 = local_40;
        }
        goto LAB_140b016fd;
      }
      plVar3 = plVar3 + 0x16;
      lVar5 = lVar5 + -0xb0;
    } while (lVar5 != 0);
  }
  *(undefined1 *)(param_2 + 1) = 0;
LAB_140b016fd:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0175a FUN_140b0175a body=196 status=ok
// SIG undefined FUN_140b0175a(void)

undefined4 *
FUN_140b0175a(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  
  lVar3 = *param_3;
  if ((((lVar3 == 0) || (lVar2 = FUN_140553c72(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *param_3;
  }
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar6 = (longlong *)*param_1;
    lVar2 = (longlong)*(int *)(param_1 + 1) * 0xb0;
    do {
      if (*plVar6 == lVar3) {
        if ((plVar6 != (longlong *)0x0) && ((char)plVar6[4] == '\x01')) {
          uVar4 = FUN_140b0181e(param_1,plVar6);
          uVar5 = FUN_140b018ba(param_1,plVar6);
          uVar7 = FUN_140b01976(plVar6,uVar5,uVar4,param_4);
          *param_2 = uVar7;
          uVar1 = 1;
          goto LAB_140b01808;
        }
        break;
      }
      plVar6 = plVar6 + 0x16;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  uVar1 = 0;
LAB_140b01808:
  *(undefined1 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140b0181e FUN_140b0181e body=156 status=ok
// SIG undefined FUN_140b0181e(void)

longlong * FUN_140b0181e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
    lVar6 = (longlong)*(int *)(param_1 + 0x28) * 0x50;
    bVar3 = DAT_14c950c29;
    do {
      lVar1 = *plVar5;
      lVar4 = *param_2;
      if ((lVar4 == 0) || ((bVar3 & 1) == 0)) {
        if (lVar4 != 0) goto LAB_140b01861;
LAB_140b018ac:
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c(lVar4);
LAB_140b01861:
        lVar2 = FUN_140553c72();
        bVar3 = DAT_14c950c29;
        if ((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_140b018ac;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30) {
          lVar4 = 0;
        }
      }
      if (lVar1 == lVar4) {
        return plVar5;
      }
      plVar5 = plVar5 + 10;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 140b018ba FUN_140b018ba body=171 status=ok
// SIG undefined FUN_140b018ba(void)

longlong * FUN_140b018ba(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((*(byte *)((longlong)param_2 + 0x1c) & 2) == 0) && ((longlong)*(int *)(param_1 + 0x18) != 0))
  {
    plVar5 = *(longlong **)(param_1 + 0x10);
    lVar6 = (longlong)*(int *)(param_1 + 0x18) * 0x50;
    bVar3 = DAT_14c950c29;
    do {
      lVar1 = *plVar5;
      lVar4 = *param_2;
      if ((lVar4 == 0) || ((bVar3 & 1) == 0)) {
        if (lVar4 != 0) goto LAB_140b01915;
LAB_140b0192e:
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c(lVar4);
LAB_140b01915:
        lVar2 = FUN_140553c72();
        bVar3 = DAT_14c950c29;
        if ((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_140b0192e;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30) {
          lVar4 = 0;
        }
      }
      if (lVar1 == lVar4) {
        return plVar5;
      }
      plVar5 = plVar5 + 10;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  return (longlong *)0x0;
}


