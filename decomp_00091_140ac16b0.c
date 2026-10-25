// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ac16b0 FUN_140ac16b0 body=40 status=ok
// SIG undefined FUN_140ac16b0(void)

undefined4 FUN_140ac16b0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (((*param_1 == *param_2) && (*(longlong *)(param_1 + 2) == *(longlong *)(param_2 + 2))) &&
     (*(longlong *)(param_1 + 5) == *(longlong *)(param_2 + 5))) {
    uVar1 = CONCAT31((int3)((uint)param_1[8] >> 8),param_1[8] == param_2[8]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 140ac16d8 FUN_140ac16d8 body=100 status=ok
// SIG undefined FUN_140ac16d8(void)

char FUN_140ac16d8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [24];
  int iStack_68;
  int iStack_5c;
  ulonglong uStack_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
LAB_140ac1738:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1c);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x20) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_140ac1738;
      lVar5 = *plVar6;
    }
  }
  if ((*(longlong *)(lVar5 + 0x30) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360), lVar5 == 0)) {
    return '\0';
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar6 = *(longlong **)(lVar5 + 0x38);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar5 + 0x108);
    if (plVar6 == (longlong *)0x0) {
LAB_14490d7c2:
      cVar3 = '\0';
      if (DAT_14cb0d2b0 != 0) {
        if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
          lVar7 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar7);
            if (*(longlong *)(lVar2 + 0x360) == lVar5) {
              if (lVar2 != 0) {
                if (*(int *)(lVar5 + 0x768) - 2U < 0x7fffffff) {
                  FUN_140245d8a(auStack_80,lVar2 + 0x160,*(undefined8 *)(lVar5 + 0x760),
                                *(undefined1 *)(lVar5 + 0x759));
                  if (iStack_5c != 0) {
                    lVar5 = FUN_14045d4ce(auStack_80,L"listen",0);
                    if (lVar5 == 0) {
                      if (0x7ffffffe < iStack_68 - 2U) goto LAB_14490d8c1;
                      cVar3 = '\x03';
                    }
                    else {
                      cVar3 = '\x02';
                    }
                    FUN_141238aee(auStack_80);
                    goto LAB_14490d78c;
                  }
LAB_14490d8c1:
                  FUN_141238aee(auStack_80);
                }
                else {
                  lVar5 = *(longlong *)(lVar2 + 0x230);
                  if ((lVar5 != 0) && (*(int *)(lVar5 + 100) != 0)) {
                    lVar5 = FUN_14045d4ce(lVar5 + 0x40,L"listen",0);
                    if (lVar5 != 0) {
                      cVar3 = '\x02';
                      goto LAB_14490d78c;
                    }
                    cVar3 = '\x03';
                    if (*(int *)(*(longlong *)(lVar2 + 0x230) + 0x58) - 2U < 0x7fffffff)
                    goto LAB_14490d78c;
                  }
                }
              }
              break;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar7);
        }
        cVar3 = '\0';
      }
      goto LAB_14490d78c;
    }
    if (*(char *)((longlong)plVar6 + 0xcbe) == '\0') {
      if (plVar6[0x1e] != 0) {
        iVar4 = FUN_143587a6a(plVar6[0x1e]);
        plVar6 = *(longlong **)(lVar5 + 0x108);
        if (iVar4 != 1) goto LAB_14490d751;
      }
      cVar3 = FUN_147a5fad0();
      if ((cVar3 == '\0') || (plVar6 = *(longlong **)(lVar5 + 0x108), (char)plVar6[0x61] != '\x01'))
      goto LAB_14490d7c2;
    }
  }
LAB_14490d751:
  if (*(code **)(*plVar6 + 0x3c0) == (code *)&LAB_1448ff5f6) {
    cVar8 = plVar6[0x1e] == 0;
  }
  else {
    cVar8 = (**(code **)(*plVar6 + 0x3c0))();
  }
  cVar3 = '\x03';
  if (cVar8 != '\0') {
    cVar3 = (DAT_14c86a9f0 & 1) + 1;
  }
LAB_14490d78c:
  if ((uStack_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar3;
}



// FUNCTION 140ac173c FUN_140ac173c body=378 status=ok
// SIG undefined FUN_140ac173c(void)

int * FUN_140ac173c(int *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  piVar4 = (int *)&DAT_14c948618;
  puVar3 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
  if (((*(int *)(param_2 + 0x10) != 0) && (2 < *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x18);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x1c);
  }
  if (*piVar4 == 0) {
    param_1[2] = DAT_14cb7bd70;
    *(undefined8 *)param_1 = DAT_14cb7bd68;
  }
  else {
    uVar2 = *puVar3;
    *param_1 = *piVar4;
    *(undefined8 *)(param_1 + 1) = uVar2;
  }
  piVar4 = (int *)&DAT_14c948618;
  puVar3 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
  if (((*(int *)(param_2 + 0x10) != 0) && (3 < *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x24);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28);
  }
  if (*piVar4 == 0) {
    param_1[5] = DAT_14cb7bd88;
    *(undefined8 *)(param_1 + 3) = DAT_14cb7bd80;
  }
  else {
    uVar2 = *puVar3;
    param_1[3] = *piVar4;
    *(undefined8 *)(param_1 + 4) = uVar2;
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (iVar1 = *(int *)(param_2 + 0x14), iVar1 != 0)) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    lVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 != 1) && (4 < iVar1)) {
      local_10 = *(int *)(lVar5 + 0x38);
      local_18 = *(undefined8 *)(lVar5 + 0x30);
      goto LAB_140ac1837;
    }
  }
  local_10 = DAT_14c948620;
  local_18 = DAT_14c948618;
LAB_140ac1837:
  param_1[8] = local_10;
  *(undefined8 *)(param_1 + 6) = local_18;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 140ac18b8 FUN_140ac18b8 body=522 status=ok
// SIG undefined FUN_140ac18b8(void)

undefined8 * FUN_140ac18b8(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_140ac1ac2(param_1);
  *param_1 = &PTR_FUN_14b49c980;
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x4e] = 0;
  memset(param_1 + 0x38,0,0x91);
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  FUN_1405c5fa2();
  param_1[0x50] = &DAT_14cb769e8;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = &PTR_FUN_14b0394b0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x4fc71eb4;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  *(undefined4 *)(param_1 + 0x32) = 0x40200000;
  FUN_14020a6cc(param_1 + 0x31,1);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  FUN_140841e14(param_1 + 0x3b,1);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x42480000;
  FUN_14020a6cc((longlong)param_1 + 0x1e4,1);
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  FUN_14020a6cc((longlong)param_1 + 0x1fc,1);
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x2c4,1);
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0x7f;
  *(byte *)((longlong)param_1 + 0x2d1) = *(byte *)((longlong)param_1 + 0x2d1) & 0x40;
  *(byte *)((longlong)param_1 + 0x2d2) = *(byte *)((longlong)param_1 + 0x2d2) & 0xfc;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x4c,1);
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x22c,1);
  return param_1;
}



// FUNCTION 140ac1ac2 FUN_140ac1ac2 body=431 status=ok
// SIG undefined FUN_140ac1ac2(void)

undefined8 * FUN_140ac1ac2(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_140ac1c72();
  *param_1 = &PTR_FUN_14b49e1b0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[0x18] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined4 *)(param_1 + 0x26) = 1;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



// FUNCTION 140ac1c72 FUN_140ac1c72 body=94 status=ok
// SIG undefined FUN_140ac1c72(void)

undefined8 * FUN_140ac1c72(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b493c80;
  return param_1;
}



// FUNCTION 140ac1cd0 FUN_140ac1cd0 body=580 status=ok
// SIG undefined FUN_140ac1cd0(void)

void FUN_140ac1cd0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong local_88;
  longlong *local_80;
  undefined1 local_74 [11];
  undefined1 local_69;
  longlong local_68 [2];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140ac1f16();
  if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x2b0);
    local_80 = plVar7 + (longlong)*(int *)(param_1 + 0x2b8) * 5;
    local_88 = *(longlong *)(param_1 + 0x200);
    do {
      if ((longlong)*(int *)(local_88 + 0x30) != 0) {
        lVar10 = *(longlong *)(local_88 + 0x28);
        lVar8 = (longlong)*(int *)(local_88 + 0x30) * 0x40 + lVar10;
        do {
          if (*(longlong *)(lVar10 + 0x38) == *plVar7) {
            local_58 = (longlong *)0x0;
            local_50 = 0x200000000;
            lVar4 = *(longlong *)(lVar10 + 0x18);
            if (lVar4 == 0) {
              uVar5 = FUN_14016979c();
              lVar4 = FUN_14477b664(uVar5);
              *(longlong *)(lVar10 + 0x18) = lVar4;
            }
            lVar6 = *(longlong *)(lVar10 + 0x20);
            if (lVar6 == 0) {
              if ((*(longlong *)(lVar10 + 0x10) == 0) || (lVar4 == 0)) {
                lVar6 = 0;
              }
              else {
                plVar9 = *(longlong **)(lVar4 + 0xb8);
                if ((plVar9 == (longlong *)0x0) ||
                   (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
                  lVar6 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar9 + 0x110))(plVar9);
                  lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar10 + 0x10));
                }
                *(longlong *)(lVar10 + 0x20) = lVar6;
              }
            }
            FUN_144a5c57e(param_1 + 0x290,lVar6);
            plVar9 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar9 = local_68;
            }
            if ((longlong)(int)local_50 != 0) {
              plVar1 = plVar9 + (int)local_50;
              do {
                plVar3 = (longlong *)plVar7[3];
                if ((longlong *)plVar7[3] == (longlong *)0x0) {
                  plVar3 = plVar7 + 1;
                }
                if ((longlong)(int)plVar7[4] == 0) {
                  fVar12 = 0.0;
                }
                else {
                  fVar12 = 0.0;
                  lVar4 = 0;
                  do {
                    if ((*(uint *)((longlong)plVar3 + lVar4) & *(uint *)(*plVar9 + 0x18)) != 0) {
                      fVar12 = fVar12 + *(float *)((longlong)plVar3 + lVar4 + 4);
                    }
                    lVar4 = lVar4 + 8;
                  } while ((longlong)(int)plVar7[4] * 8 != lVar4);
                }
                uVar11 = FUN_140ac2084(param_1,lVar10,fVar12,0);
                local_98 = &local_69;
                FUN_1402a444c(local_74,*plVar9 + 8,*(undefined1 *)(lVar10 + 0x2d),uVar11);
                plVar9 = plVar9 + 1;
              } while (plVar9 != plVar1);
            }
            if (local_58 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          lVar10 = lVar10 + 0x40;
        } while (lVar10 != lVar8);
      }
      plVar7 = plVar7 + 5;
    } while (plVar7 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac1f16 FUN_140ac1f16 body=365 status=ok
// SIG undefined FUN_140ac1f16(void)

void FUN_140ac1f16(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong unaff_RBX;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x200);
  if ((lVar1 != 0) && ((longlong)*(int *)(param_1 + 0x130) != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x128);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x130) * 2;
    do {
      if ((longlong)*(int *)(lVar1 + 0x30) != 0) {
        lVar7 = *(longlong *)(lVar1 + 0x28);
        lVar9 = (longlong)*(int *)(lVar1 + 0x30) << 6;
        do {
          if (*(longlong *)(lVar7 + 0x38) == *plVar6) {
            uVar10 = FUN_140ac2084(param_1,lVar7,(int)plVar6[1],0);
            unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar7 + 0x2d));
            lVar3 = *(longlong *)(lVar7 + 0x18);
            if (lVar3 == 0) {
              uVar4 = FUN_14016979c();
              lVar3 = FUN_14477b664(uVar4);
              *(longlong *)(lVar7 + 0x18) = lVar3;
            }
            lVar5 = *(longlong *)(lVar7 + 0x20);
            if (((lVar5 == 0) && (lVar5 = 0, lVar3 != 0)) &&
               (local_70 = (longlong *)(lVar7 + 0x10), *local_70 != 0)) {
              local_78 = *(longlong **)(lVar3 + 0xb8);
              if ((local_78 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*local_78 + 0x108))(), cVar2 == '\0')) {
                lVar5 = 0;
              }
              else {
                uVar4 = (**(code **)(*local_78 + 0x110))();
                lVar5 = FUN_144aff482(uVar4,local_70);
              }
              *(longlong *)(lVar7 + 0x20) = lVar5;
            }
            local_88 = &local_61;
            FUN_14021808c(param_1,lVar5,unaff_RBX & 0xffffffff,uVar10);
          }
          lVar7 = lVar7 + 0x40;
          lVar9 = lVar9 + -0x40;
        } while (lVar9 != 0);
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac2084 FUN_140ac2084 body=2901 status=ok
// SIG undefined FUN_140ac2084(void)

undefined8 FUN_140ac2084(longlong param_1,longlong param_2,float param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined *puVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  char local_110;
  undefined7 uStack_10f;
  longlong *local_100;
  int local_e8;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_2 + 0x28) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar2 = param_1 + 0x1e8;
  local_110 = '\0';
  local_e8 = 0;
  FUN_140217b36(&local_110,lVar2);
  pfVar9 = &local_e0;
  FUN_1448729ea(lVar10,pfVar9,&local_110);
  if (local_c0 == 3) {
    bVar4 = 3;
    fVar17 = local_e0;
  }
  else {
    pfVar11 = &local_b8;
    FUN_1400b56fe(pfVar11,&local_e0,3);
    fVar17 = local_b8;
    if (local_98 == 0) {
      fVar17 = 1.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar11 = (float *)CONCAT44(uStack_b4,local_b8);
      }
      (*pcVar3)(pfVar11);
    }
    bVar4 = local_c0;
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      bVar4 = local_c0;
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar9 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  lVar10 = DAT_14c9a3da0;
  if ((longlong)local_e8 != 0) {
    lVar14 = (longlong)local_e8 + -1;
    lVar12 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar10 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar10 = DAT_14c9a3da0;
    iVar13 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
    }
    *(undefined4 *)(lVar10 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar10 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar6 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar6 = iVar13;
    }
    bVar4 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar13;
    *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_e8 = 0;
  }
  if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_2 + 0x2a) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_110 = '\0';
  local_e8 = 0;
  FUN_140217b36(&local_110,lVar2);
  pfVar9 = &local_e0;
  FUN_1448729ea(lVar10,pfVar9,&local_110);
  if (local_c0 == 3) {
    local_c0 = 3;
    fVar15 = local_e0;
  }
  else {
    pfVar11 = &local_b8;
    FUN_1400b56fe(pfVar11,&local_e0,3);
    fVar15 = local_b8;
    if (local_98 == 0) {
      fVar15 = 1.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a0) {
        pfVar11 = (float *)CONCAT44(uStack_b4,local_b8);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar9 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  lVar10 = DAT_14c9a3da0;
  if ((longlong)local_e8 != 0) {
    lVar14 = (longlong)local_e8 + -1;
    lVar12 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar10 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar10 = DAT_14c9a3da0;
    iVar13 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
    }
    *(undefined4 *)(lVar10 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar10 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar6 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar6 = iVar13;
    }
    bVar4 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar13;
    *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_e8 = 0;
  }
  if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  fVar19 = fVar17 * *(float *)(param_1 + 0x138) * fVar15 * param_3;
  if (param_4 != (undefined8 *)0x0) {
    local_118 = (double)fVar15;
    local_120 = (double)fVar17;
    local_128 = (double)*(float *)(param_1 + 0x138);
    FUN_140002266(&local_110,
                  L"Modifier({value}%g{normal}) = Stat({value}%g{normal}) * Rarity({value}%g{normal}) * AttributeBaseMultiplier({value}%g{normal}) * StatToAttributeMultiplier({value}%g{normal})"
                  ,(double)fVar19,(double)param_3);
    pcVar3 = (code *)*param_4;
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar5,&local_110);
    if (CONCAT71(uStack_10f,local_110) != 0) {
      FUN_1400020a8();
    }
  }
  fVar17 = fVar19;
  if (fVar19 <= 0.0) {
    local_110 = '\0';
    local_e8 = 0;
    FUN_140217b36(&local_110,lVar2);
    if (*(char *)(param_2 + 0x30) == '\x01') {
      uVar5 = FUN_1406f3fb0(param_2 + 0x34);
      pfVar9 = &local_b8;
      FUN_1448729ea(uVar5,pfVar9,&local_110);
      fVar15 = (float)FUN_144a7b41a(pfVar9,0xff7fffff);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar9 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar9);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      }
      if (0.0 <= fVar15) {
        fVar15 = 0.0;
      }
    }
    else {
      fVar15 = -3.4028235e+38;
    }
    lVar2 = DAT_14c9a3da0;
    if ((longlong)local_e8 != 0) {
      lVar10 = (longlong)local_e8 + -1;
      lVar12 = lVar10 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
      if (*(longlong *)(lVar2 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar2 = DAT_14c9a3da0;
      iVar13 = (int)lVar10;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
      }
      *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
      iVar6 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar6 = DAT_14c9a3dd0;
      }
      *(int *)(lVar2 + 4 + lVar12) = iVar6;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar8 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar8 = DAT_14c9a3dc0;
      }
      iVar6 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar6 = iVar13;
      }
      bVar4 = (byte)lVar10 & 0x1f;
      DAT_14c9a3dd0 = iVar13;
      *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_e8 = 0;
    }
    if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    if (fVar19 <= fVar15) {
      fVar17 = fVar15;
    }
  }
  else {
    local_110 = '\0';
    local_e8 = 0;
    FUN_140217b36(&local_110,lVar2);
    if (*(char *)(param_2 + 0x2f) == '\x01') {
      uVar5 = FUN_1406f3fb0(param_2 + 0x32);
      pfVar9 = &local_b8;
      FUN_1448729ea(uVar5,pfVar9,&local_110);
      fVar15 = (float)FUN_144a7b41a(pfVar9,0x7f7fffff);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar9 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar9);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
    }
    else {
      fVar15 = 3.4028235e+38;
    }
    lVar2 = DAT_14c9a3da0;
    if ((longlong)local_e8 != 0) {
      lVar10 = (longlong)local_e8 + -1;
      lVar12 = lVar10 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
      if (*(longlong *)(lVar2 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar2 = DAT_14c9a3da0;
      iVar13 = (int)lVar10;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
      }
      *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
      iVar6 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar6 = DAT_14c9a3dd0;
      }
      *(int *)(lVar2 + 4 + lVar12) = iVar6;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar8 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar8 = DAT_14c9a3dc0;
      }
      iVar6 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar6 = iVar13;
      }
      bVar4 = (byte)lVar10 & 0x1f;
      DAT_14c9a3dd0 = iVar13;
      *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_e8 = 0;
    }
    if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    if (fVar15 <= fVar19) {
      fVar17 = fVar15;
    }
  }
  uVar16 = 0;
  if (param_4 == (undefined8 *)0x0) {
    if (*(char *)(param_2 + 0x2e) != '\0') {
      fVar17 = -fVar17;
    }
    uVar16 = 0;
    fVar15 = -1.0;
    if (-1.0 <= fVar17) {
      fVar15 = fVar17;
    }
    if (*(char *)(param_2 + 0x2d) == '\x03') {
      fVar15 = fVar15 + 1.0;
    }
  }
  else {
    if (1e-08 < ABS(fVar17 - fVar19)) {
      FUN_140002266(&local_110,L"Modifier limited to {value}%g",(double)fVar17);
      pcVar3 = (code *)*param_4;
      plVar7 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_4[2];
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar5,&local_110);
      if (CONCAT71(uStack_10f,local_110) != 0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(param_2 + 0x2e) != '\0') {
      uVar16 = 0x80000000;
      fVar17 = -fVar17;
      FUN_140002266(&local_110,L"Modifier inverted to {value}%g{normal} since zero is better",
                    (double)fVar17);
      pcVar3 = (code *)*param_4;
      plVar7 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_4[2];
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar5,&local_110);
      if (CONCAT71(uStack_10f,local_110) != 0) {
        FUN_1400020a8();
      }
    }
    if (fVar17 < -1.0) {
      uVar18 = 0;
      FUN_140002266(&local_110,L"Negative Modifier limited to absolute negative limit of {value}%g",
                    0xbff0000000000000);
      pcVar3 = (code *)*param_4;
      plVar7 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_4[2];
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar5,&local_110);
      if (CONCAT71(uStack_10f,local_110) != 0) {
        FUN_1400020a8();
      }
      fVar15 = 0.0;
      uVar16 = 0;
      if (*(char *)(param_2 + 0x2d) != '\x03') {
        fVar15 = -1.0;
        uVar16 = 0;
      }
    }
    else {
      fVar15 = fVar17;
      if (*(char *)(param_2 + 0x2d) == '\x03') {
        uVar16 = 0;
        fVar15 = fVar17 + 1.0;
      }
      uVar18 = SUB84((double)fVar17,0);
    }
    FUN_140002266(&local_110,L"Multiplier({value}%g{normal}) = 1 + Modifier({value}%g{normal})",
                  (double)fVar15,uVar18);
    pcVar3 = (code *)*param_4;
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    (*pcVar3)(uVar5,&local_110);
    if (CONCAT71(uStack_10f,local_110) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar16,fVar15);
}



// FUNCTION 140ac2bda FUN_140ac2bda body=87 status=ok
// SIG undefined FUN_140ac2bda(void)

void FUN_140ac2bda(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140ac2c32(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((char)plVar3[0x49] == '\0') {
        *(undefined1 *)(plVar3 + 0x49) = 1;
        (**(code **)(*plVar3 + 8))();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 140ac2c32 FUN_140ac2c32 body=223 status=ok
// SIG undefined FUN_140ac2c32(void)

void FUN_140ac2c32(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140ac2d12(param_1,1);
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      if (*(char *)((longlong)param_1 + 0x24) == '\0') {
        FUN_14898763a(*(longlong *)(lVar1 + 0x10) + 0x18,local_88,lVar1);
      }
      local_89 = 1;
      local_78 = 0;
      local_68 = &PTR_LAB_14b42bff0;
      local_88[0] = FUN_143e3a2b0;
      local_60 = param_1;
      local_58 = &local_89;
      local_50 = lVar1;
      (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))(*(longlong **)(lVar1 + 0x10),local_88);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac2d12 FUN_140ac2d12 body=206 status=ok
// SIG undefined FUN_140ac2d12(void)

void FUN_140ac2d12(longlong param_1,byte param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  byte local_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(char *)(param_1 + 0x2c) == '\x01') && (*(int *)(param_1 + 0x38) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x34), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (puVar3 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar3 != (undefined8 *)0x0)))) &&
     ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x38) &&
      ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
    local_c = *(undefined4 *)(param_1 + 0x28);
    local_10 = *(undefined4 *)(param_1 + 0x30);
    if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
      local_18 = *puVar3;
    }
    else {
      local_18 = 0;
    }
    local_20[0] = param_2 ^ 1;
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,local_20);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac2de2 FUN_140ac2de2 body=946 status=ok
// SIG undefined FUN_140ac2de2(void)

/* WARNING: Removing unreachable block (ram,0x000140ac3140) */

void FUN_140ac2de2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong unaff_R12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  float unaff_XMM6_Da;
  undefined1 auStack_e8 [39];
  undefined1 local_c1;
  char local_c0 [8];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_98 [2];
  char local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar4 = *(byte *)(param_1 + 0x244);
  if (bVar4 == 1) {
    unaff_XMM6_Da = *(float *)(param_1 + 0x240);
  }
  FUN_140ac3196(param_1);
  bVar5 = *(byte *)(param_1 + 0x244);
  bVar8 = unaff_XMM6_Da == *(float *)(param_1 + 0x240);
  if ((bVar5 & 1) == 0) {
    bVar8 = bVar5 == bVar4;
  }
  if ((!(bool)(bVar5 == bVar4 & bVar8)) &&
     ((((bVar4 & bVar5) != 1 || (1e-08 <= ABS(unaff_XMM6_Da - *(float *)(param_1 + 0x240)))) &&
      (uVar12 = (ulonglong)*(int *)(param_1 + 0x238), 0 < (longlong)uVar12)))) {
    lVar2 = param_1 + 200;
    lVar15 = uVar12 * 0x48;
    do {
      lVar15 = lVar15 + -0x48;
      lVar14 = *(longlong *)(param_1 + 0x230);
      lVar10 = lVar14;
      if (lVar14 == 0) {
        lVar10 = lVar2;
      }
      cVar9 = *(char *)(lVar10 + lVar15);
      if (cVar9 == '\x01') {
        if (*(longlong *)(lVar10 + 8 + lVar15) != 0) goto LAB_140ac2f32;
LAB_140ac2f00:
        FUN_14576c1f8(lVar2,(int)uVar12 + -1);
        FUN_14576c1b4(lVar2);
      }
      else {
        if (cVar9 == '\x02') {
          cVar9 = FUN_144729dda(lVar10 + lVar15 + 8);
          if (cVar9 != '\0') {
            lVar14 = *(longlong *)(param_1 + 0x230);
            goto LAB_140ac2f32;
          }
          goto LAB_140ac2f00;
        }
        if (((cVar9 != '\x03') || (*(longlong *)(lVar10 + 8 + lVar15) == 0)) ||
           ((lVar10 = *(longlong *)(lVar10 + 0x10 + lVar15), lVar10 == 0 ||
            (*(int *)(lVar10 + 8) < 1)))) goto LAB_140ac2f00;
LAB_140ac2f32:
        if (lVar14 == 0) {
          lVar14 = lVar2;
        }
        plVar13 = (longlong *)(lVar14 + lVar15 + 0x30);
        plVar7 = (longlong *)*plVar13;
        if (*(char *)(param_1 + 0x244) == '\x01') {
          if (plVar7 == (longlong *)0x0) {
            FUN_140ac3312(param_1);
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 0x240);
            uVar6 = *(undefined1 *)(param_1 + 0xc0);
            local_c0[0] = *(char *)(lVar14 + lVar15);
            if (local_c0[0] == '\x01') {
              local_c0[0] = '\x02';
              local_b8 = 0;
              FUN_14485c47a(&local_b8,*(undefined8 *)(lVar14 + lVar15 + 8));
            }
            else if (local_c0[0] == '\x02') {
              local_b8 = *(undefined8 *)(lVar14 + 8 + lVar15);
            }
            else if (local_c0[0] == '\x03') {
              local_b8 = *(undefined8 *)(lVar14 + 8 + lVar15);
              local_b0 = *(longlong **)(lVar14 + 0x10 + lVar15);
              if (local_b0 == (longlong *)0x0) {
                local_a8 = *(undefined8 *)(lVar14 + 0x18 + lVar15);
                local_a0 = *(undefined1 *)(lVar14 + 0x20 + lVar15);
              }
              else {
                LOCK();
                *(int *)((longlong)local_b0 + 0xc) = *(int *)((longlong)local_b0 + 0xc) + 1;
                UNLOCK();
                local_a8 = *(undefined8 *)(lVar14 + 0x18 + lVar15);
                local_a0 = *(undefined1 *)(lVar14 + 0x20 + lVar15);
              }
            }
            local_98[0] = 0;
            if (*(int *)(lVar14 + 0x28 + lVar15) != 0) {
              local_c1 = uVar6;
              uVar11 = FUN_1448174c4(local_98);
              FUN_1400e08b0(uVar11,DAT_14c9a3da0 + (longlong)*(int *)(lVar14 + 0x28 + lVar15) * 0x10
                                   + -0x10);
              uVar6 = local_c1;
            }
            unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),uVar6);
            local_90 = '\0';
            local_68[0] = 0;
            plVar13 = (longlong *)*plVar13;
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x18))(plVar13,local_c0,unaff_R12 & 0xffffffff,uVar3);
            }
            FUN_1448173f8(local_68);
            if (local_90 != '\0') {
              if (local_90 == '\x01') {
                local_88 = 0;
              }
              else if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_80 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_80 + 0x10))();
                }
              }
              local_90 = '\0';
            }
            FUN_1448173f8(local_98);
            if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_b0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_b0 + 0x10))();
              }
            }
          }
        }
        else if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
          FUN_14053d96a(plVar13);
        }
      }
      bVar8 = 1 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac3196 FUN_140ac3196 body=379 status=ok
// SIG undefined FUN_140ac3196(void)

void FUN_140ac3196(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_a8 [40];
  float local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x244) == '\x01') {
    *(undefined1 *)(param_1 + 0x244) = 0;
  }
  if ((*(char *)(param_1 + 0x248) != '\x01') || (*(int *)(param_1 + 0x238) == 0))
  goto LAB_140ac324d;
  pfVar4 = &local_80;
  FUN_1448729ea(param_1 + 0x68,pfVar4,param_1 + 8);
  fVar5 = local_80;
  if (local_60 == 3) {
LAB_140ac3200:
    iVar2 = _isnan((double)fVar5);
    if (iVar2 == 0) {
      *(float *)(param_1 + 0x240) = fVar5;
      *(undefined1 *)(param_1 + 0x244) = 1;
    }
  }
  else if (local_60 != 0) {
    pfVar3 = &local_58;
    FUN_1400b56fe(pfVar3,&local_80,3);
    fVar5 = 0.0;
    if (local_38 != 0) {
      fVar5 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        pfVar3 = (float *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(pfVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    goto LAB_140ac3200;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      pfVar4 = (float *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(pfVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
LAB_140ac324d:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac3312 FUN_140ac3312 body=712 status=ok
// SIG undefined FUN_140ac3312(void)

/* WARNING: Removing unreachable block (ram,0x000140ac354d) */

void FUN_140ac3312(longlong param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 *local_d8;
  undefined1 local_c1;
  undefined8 local_c0;
  longlong *local_b8;
  char local_b0 [8];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  char local_90;
  undefined4 local_88 [2];
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_2 + 0x30) != 0) || (*(longlong *)(param_1 + 0xb8) == 0)) ||
     (*(char *)(param_1 + 0x244) != '\x01')) goto LAB_140ac34d7;
  uVar3 = *(undefined4 *)(param_1 + 0x240);
  uVar4 = *(undefined1 *)(param_1 + 0xc0);
  local_b0[0] = *param_2;
  if (local_b0[0] == '\x01') {
    local_b0[0] = '\x02';
    local_a8 = 0;
    FUN_14485c47a(&local_a8,*(undefined8 *)(param_2 + 8));
  }
  else if (local_b0[0] == '\x02') {
    local_a8 = *(undefined8 *)(param_2 + 8);
  }
  else if (local_b0[0] == '\x03') {
    local_a8 = *(undefined8 *)(param_2 + 8);
    local_a0 = *(longlong **)(param_2 + 0x10);
    if (local_a0 == (longlong *)0x0) {
      local_98 = *(undefined8 *)(param_2 + 0x18);
      local_90 = param_2[0x20];
    }
    else {
      LOCK();
      *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
      UNLOCK();
      local_98 = *(undefined8 *)(param_2 + 0x18);
      local_90 = param_2[0x20];
    }
  }
  local_88[0] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar6 = FUN_1448174c4(local_88);
    FUN_1400e08b0(uVar6,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
  }
  local_80 = '\0';
  local_58[0] = 0;
  local_d8 = &local_c1;
  local_e0 = 1;
  local_e8 = uVar3;
  FUN_140c40077(&local_c0,*(undefined8 *)(param_1 + 0xb8),local_b0,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar4) & 0xffffffff);
  plVar2 = local_b8;
  *(undefined8 *)(param_2 + 0x30) = local_c0;
  local_c0 = 0;
  plVar5 = *(longlong **)(param_2 + 0x38);
  if (local_b8 == plVar5) {
LAB_140ac3479:
    plVar5 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b8)(local_b8);
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
  else {
    local_b8 = (longlong *)0x0;
    *(longlong **)(param_2 + 0x38) = plVar2;
    if (plVar5 != (longlong *)0x0) {
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
      goto LAB_140ac3479;
    }
  }
  FUN_1448173f8(local_58);
  if (local_80 != '\0') {
    if (local_80 == '\x01') {
      local_78 = 0;
    }
    else if ((local_80 == '\x03') && (local_70 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    local_80 = '\0';
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
LAB_140ac34d7:
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac35dc FUN_140ac35dc body=22 status=ok
// SIG undefined FUN_140ac35dc(void)

undefined8 FUN_140ac35dc(undefined8 param_1,undefined8 param_2)

{
  FUN_140ac35f2();
  return param_2;
}



// FUNCTION 140ac35f2 FUN_140ac35f2 body=1645 status=ok
// SIG undefined FUN_140ac35f2(void)

uint * FUN_140ac35f2(longlong param_1,uint *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  code ****ppppcVar7;
  uint uVar8;
  longlong *_Src;
  code *pcVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code ***local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  code ***local_78 [3];
  ushort local_60;
  byte local_58;
  code ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  local_30 = 0;
  local_80 = param_3;
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x188);
    lVar5 = (longlong)*(int *)(param_1 + 400) * 0x58;
    do {
      if (*plVar4 == param_3) {
        if (plVar4 != (longlong *)0x0) {
          _Src = plVar4 + 1;
          if ((char)plVar4[5] == '\0') {
            if (0x18 < *(ushort *)(plVar4 + 4)) {
              _Src = (longlong *)plVar4[1];
            }
            if (DAT_14c9a85c0 == (code *)0x0) {
              memcpy(local_50,_Src,(longlong)DAT_14c9a8510);
            }
            else {
              (*DAT_14c9a85c0)(local_50,_Src);
            }
          }
          else {
            if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(local_50), 0x18 < local_38)) {
              FUN_1400020a8(local_50[0]);
            }
            bVar1 = *(byte *)(plVar4 + 5);
            local_38 = *(ushort *)(plVar4 + 4);
            if (local_38 < 0x19) {
              ppppcVar7 = local_50;
            }
            else {
              ppppcVar7 = (code ****)FUN_14001cc68(local_38,0);
              _Src = (longlong *)*_Src;
              local_50[0] = (code ***)ppppcVar7;
            }
            pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
            if (pcVar9 == (code *)0x0) {
              memcpy(ppppcVar7,_Src,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
                    );
            }
            else {
              (*pcVar9)(ppppcVar7,_Src);
            }
            local_30 = *(byte *)(plVar4 + 5);
          }
          goto LAB_140ac3668;
        }
        break;
      }
      plVar4 = plVar4 + 0xb;
      lVar5 = lVar5 + -0x58;
    } while (lVar5 != 0);
  }
  local_78[0] = (code ***)0x0;
  local_88 = 0;
  plVar4 = (longlong *)FUN_140ac3c60(param_1,0,&local_88,local_78);
  if (plVar4 != (longlong *)0x0) {
    if ((int)local_80 == DAT_14cb7e048) {
      if (DAT_14cac6e60 == 0) {
        local_78[0] = (code ***)FUN_144a7958c;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_142b47bc4;
        local_a8 = &LAB_1478989f1;
        local_b0 = &LAB_146391124;
        local_b8 = L"Engine";
        local_c0 = 0x10000000000;
        local_c8 = 0x10000005;
        local_d0 = 0x10;
        local_d8 = 0x620;
        local_a0 = (code ***)local_78;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        lVar5 = (**(code **)(*plVar4 + 0x610))(plVar4,local_80._4_4_ + -1);
        *(undefined2 *)(param_2 + 6) = 8;
        param_2[1] = 0;
        if (lVar5 == 0) {
          *param_2 = 0;
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar5 + 0xc);
          *param_2 = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          uVar3 = *(uint *)(lVar5 + 0x10);
          if (*(uint *)(lVar5 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar3 = *(uint *)(lVar5 + 0x10);
            bVar10 = uVar3 == 0;
            if (bVar10) {
              *(uint *)(lVar5 + 0x10) = uVar8;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar10) {
              uVar3 = uVar8;
            }
          }
        }
        param_2[1] = uVar3;
        *(undefined1 *)(param_2 + 8) = 6;
        uVar3 = (uint)local_30;
        goto LAB_140ac36e0;
      }
    }
    else {
      lVar5 = FUN_144a5c5e8(param_1,&local_80);
      if (lVar5 != 0) {
        FUN_140ac3d4c(local_78,lVar5,(longlong)plVar4 + (longlong)*(int *)(lVar5 + 0x44));
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
        if (pcVar9 != (code *)0x0) {
          ppppcVar7 = (code ****)local_50[0];
          if (local_38 < 0x19) {
            ppppcVar7 = local_50;
          }
          (*pcVar9)(ppppcVar7);
        }
        if (0x18 < local_38) {
          FUN_1400020a8(local_50[0]);
        }
        local_38 = local_60;
        if (local_60 < 0x19) {
          uVar6 = (ulonglong)((uint)local_58 * 0x120);
          if (*(code **)((longlong)&DAT_14c9a85b8 + uVar6) == (code *)0x0) {
            if (*(code **)((longlong)&DAT_14c9a85b0 + uVar6) == (code *)0x0) {
              memcpy(local_50,local_78,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
            }
            else {
              (**(code **)((longlong)&DAT_14c9a85b0 + uVar6))(local_50,local_78);
            }
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b8 + uVar6))(local_50,local_78);
          }
        }
        else {
          local_50[0] = local_78[0];
          local_78[0] = (code ***)0x0;
          local_60 = 0;
        }
        local_30 = local_58;
        local_58 = 0;
        if (DAT_14c9a85d0 != (code *)0x0) {
          ppppcVar7 = local_78;
          if (0x18 < local_60) {
            ppppcVar7 = (code ****)local_78[0];
          }
          (*DAT_14c9a85d0)(ppppcVar7);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(local_78[0]);
        }
      }
    }
  }
LAB_140ac3668:
  *(ushort *)(param_2 + 6) = local_38;
  if (local_38 < 0x19) {
    uVar6 = (ulonglong)((uint)local_30 * 0x120);
    pcVar9 = *(code **)((longlong)&DAT_14c9a85b8 + uVar6);
    if ((pcVar9 == (code *)0x0) &&
       (pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + uVar6), pcVar9 == (code *)0x0)) {
      memcpy(param_2,local_50,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
    }
    else {
      (*pcVar9)(param_2,local_50);
    }
  }
  else {
    *(code ****)param_2 = local_50[0];
    local_50[0] = (code ***)0x0;
    local_38 = 0;
  }
  *(byte *)(param_2 + 8) = local_30;
  local_30 = 0;
  uVar3 = 0;
LAB_140ac36e0:
  pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar9 != (code *)0x0) {
    ppppcVar7 = (code ****)local_50[0];
    if (local_38 < 0x19) {
      ppppcVar7 = local_50;
    }
    (*pcVar9)(ppppcVar7);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ac3c60 FUN_140ac3c60 body=235 status=ok
// SIG undefined FUN_140ac3c60(void)

longlong FUN_140ac3c60(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1 + 0x68;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x128);
  }
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar6 = lVar6 + 8;
    lVar5 = (longlong)*(int *)(param_1 + 0x130) * 0x18;
    do {
      if (((((param_2 == 0) || (cVar3 = FUN_1403e9e5e(lVar6,param_2), cVar3 != '\0')) &&
           ((*param_3 == 0 || (*(longlong *)(lVar6 + 8) == *param_3)))) &&
          ((((*(int *)(lVar6 + -4) != 0 && (uVar1 = *(uint *)(lVar6 + -8), -1 < (int)uVar1)) &&
            ((int)uVar1 < DAT_14c9647dc)) &&
           ((plVar4 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(lVar6 + -4))))))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
        if (*param_4 == 0) {
          return lVar2;
        }
        cVar3 = FUN_14342c3d2(lVar2);
        if (cVar3 != '\0') {
          return lVar2;
        }
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 140ac3d4c FUN_140ac3d4c body=2910 status=ok
// SIG undefined FUN_140ac3d4c(void)

uint * FUN_140ac3d4c(uint *param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  void *_Src;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || (param_3 == (uint *)0x0)) {
LAB_140ac47a1:
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    puVar10 = (undefined *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
      FUN_1446f4b16();
      local_a0 = FUN_140f17fc6;
      local_a8 = &DAT_14c951c78;
      local_b0 = 0;
      local_b8 = 0x24008001;
      FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
      atexit(FUN_142818859);
      _Init_thread_footer(&DAT_14c9529b0);
    }
    if (DAT_14c952968 == 0) {
      bVar18 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952960 && bVar18) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar18 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952960) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (bVar18) goto LAB_140ac4058;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952968) != 0) {
LAB_140ac4058:
      *(undefined2 *)(param_1 + 6) = 0x28;
      puVar8 = (undefined8 *)FUN_14001cc68(0x28,0);
      *(undefined8 **)param_1 = puVar8;
      *puVar8 = *(undefined8 *)param_3;
      uVar7 = param_3[3];
      uVar14 = param_3[4];
      uVar4 = param_3[5];
      *(uint *)(puVar8 + 1) = param_3[2];
      *(uint *)((longlong)puVar8 + 0xc) = uVar7;
      *(uint *)(puVar8 + 2) = uVar14;
      *(uint *)((longlong)puVar8 + 0x14) = uVar4;
      puVar8[3] = 0;
      uVar7 = param_3[8];
      _Src = *(void **)(param_3 + 6);
      *(uint *)(puVar8 + 4) = uVar7;
      if ((longlong)(int)uVar7 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(puVar8 + 3,uVar7,0);
        memcpy((void *)puVar8[3],_Src,(longlong)(int)uVar7 * 2);
      }
      *(undefined1 *)(param_1 + 8) = 0x1c;
      goto LAB_140ac3e75;
    }
    puVar10 = (undefined *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_1468d96f0;
      local_b0 = 0;
      local_b8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    if (DAT_14c951c80 == 0) {
      bVar18 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c951c78 && bVar18) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar18 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c951c78) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (bVar18) goto LAB_140ac40ff;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951c80) != 0) {
LAB_140ac40ff:
      lVar9 = (**(code **)(*param_2 + 0x210))(param_2,param_3);
      lVar16 = param_2[0xe];
      if (lVar16 != 0) {
        if (DAT_14cac9ca8 == 0) {
          local_80 = &local_68;
          local_68 = FUN_141030f22;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_14081d0ea;
          local_88 = &LAB_1478c0a72;
          local_90 = &LAB_1417b2375;
          local_98 = L"Engine";
          local_a0 = (code *)0x1000000000;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x10000004);
          local_b0 = CONCAT44(local_b0._4_4_,8);
          local_b8 = CONCAT44(local_b8._4_4_,0x390);
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          if (DAT_14cac9ca8 != 0) goto LAB_140ac412a;
        }
        else {
LAB_140ac412a:
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
              DAT_14cac9ca8 + 0x30)) {
            if (lVar9 == 0) {
LAB_140ac4866:
              lVar9 = 0;
            }
            else {
              lVar16 = FUN_144a6c4d8();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) goto LAB_140ac4866;
            }
            *(undefined2 *)(param_1 + 6) = 8;
            param_1[0] = 0;
            param_1[1] = 0;
            FUN_14485c47a(param_1,lVar9);
            *(undefined1 *)(param_1 + 8) = 7;
            goto LAB_140ac3e75;
          }
        }
        lVar16 = param_2[0xe];
        if (DAT_14cac7648 == 0) {
          local_80 = &local_68;
          local_68 = FUN_144a7958c;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_143242436;
          local_88 = &LAB_14789ef1f;
          local_90 = &LAB_1417b008f;
          local_98 = L"Engine";
          local_a0 = (code *)0x8000000000;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x10000004);
          local_b0 = CONCAT44(local_b0._4_4_,0x10);
          local_b8 = CONCAT44(local_b8._4_4_,0x2b0);
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
          if (DAT_14cac7648 == 0) goto LAB_140ac4163;
        }
        if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
            DAT_14cac7648 + 0x30)) {
          if (lVar9 == 0) {
LAB_140ac41e8:
            lVar9 = 0;
          }
          else {
            lVar16 = FUN_144a799b0();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) goto LAB_140ac41e8;
          }
          *(undefined2 *)(param_1 + 6) = 8;
          param_1[0] = 0;
          param_1[1] = 0;
          FUN_14485c47a(param_1,lVar9);
          *(undefined1 *)(param_1 + 8) = 0xe;
          goto LAB_140ac3e75;
        }
      }
LAB_140ac4163:
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
      if (lVar9 == 0) {
        *param_1 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(lVar9 + 0xc);
        *param_1 = uVar7;
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        uVar7 = *(uint *)(lVar16 + 0x10);
        if (*(uint *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar17 = DAT_14c964868 + 1;
          UNLOCK();
          uVar14 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar17;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar14);
          }
          LOCK();
          uVar7 = *(uint *)(lVar16 + 0x10);
          bVar18 = uVar7 == 0;
          if (bVar18) {
            *(uint *)(lVar16 + 0x10) = uVar14;
            uVar7 = 0;
          }
          UNLOCK();
          if (bVar18) {
            uVar7 = uVar14;
          }
        }
      }
      param_1[1] = uVar7;
      *(undefined1 *)(param_1 + 8) = 6;
      goto LAB_140ac3e75;
    }
    puVar8 = (undefined8 *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_14067a048;
      local_b0 = 0;
      local_b8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar18 = puVar8 != (undefined8 *)0x0;
      if (puVar8 != &DAT_14c951cd0 && bVar18) {
        do {
          puVar8 = (undefined8 *)puVar8[6];
          bVar18 = puVar8 != (undefined8 *)0x0;
          if (puVar8 == &DAT_14c951cd0) break;
        } while (puVar8 != (undefined8 *)0x0);
      }
      if (!bVar18) goto LAB_140ac43ca;
    }
    else if ((puVar8[3] & DAT_14c951cd8) == 0) {
LAB_140ac43ca:
      puVar10 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c947f70) && (FUN_144b3d300(&DAT_14c947f70), DAT_14c947f70 == -1))
      {
        local_a8 = (undefined *)FUN_1446ddbd2();
        local_a0 = FUN_141710108;
        local_b0 = 0x1000000000000000;
        local_b8 = 0x8001;
        FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
        atexit(FUN_1427b4857);
        _Init_thread_footer(&DAT_14c947f70);
      }
      if (DAT_14c947f28 == 0) {
        bVar18 = puVar10 != (undefined *)0x0;
        if ((puVar10 != &DAT_14c947f20) && (puVar10 != (undefined *)0x0)) {
          do {
            puVar10 = *(undefined **)(puVar10 + 0x30);
            bVar18 = puVar10 != (undefined *)0x0;
          } while (puVar10 != &DAT_14c947f20 && bVar18);
        }
        if (bVar18) {
LAB_140ac47c6:
          *(undefined2 *)(param_1 + 6) = 0x18;
          *(undefined8 *)param_1 = *(undefined8 *)param_3;
          uVar11 = FUN_14477b664(*(undefined8 *)(param_3 + 2));
          uVar11 = FUN_14477b664(uVar11);
          *(undefined8 *)(param_1 + 2) = uVar11;
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
          *(undefined1 *)(param_1 + 8) = 0x1d;
          goto LAB_140ac3e75;
        }
      }
      else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c947f28) != 0) goto LAB_140ac47c6;
      lVar16 = 0;
      do {
        if (((((&DAT_14c9a853c)[lVar16 * 0x48] == 0) ||
             (uVar7 = (&DAT_14c9a8538)[lVar16 * 0x48], (int)uVar7 < 0)) ||
            (DAT_14c9647dc <= (int)uVar7)) ||
           (((plVar13 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar13 == (longlong *)0x0 || ((int)plVar13[2] != (&DAT_14c9a853c)[lVar16 * 0x48])) ||
            (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 ||
             (plVar1 = &DAT_14c9a8540 + lVar16 * 0x24, *plVar13 == 0)))))) {
          (&DAT_14c9a8540)[lVar16 * 0x24] = 0;
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_a8 = (undefined *)FUN_140342cba();
            local_a0 = FUN_1468c7f1e;
            local_b0 = 0;
            local_b8 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          lVar9 = *plVar1;
          if (((((lVar9 == 0) || ((&DAT_14c9a854c)[lVar16 * 0x48] == 0)) ||
               (uVar7 = (&DAT_14c9a8548)[lVar16 * 0x48], (int)uVar7 < 0)) ||
              ((DAT_14c9647dc <= (int)uVar7 ||
               (lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar15 == 0)
               ))) || ((*(int *)(lVar15 + 0x10) != (&DAT_14c9a854c)[lVar16 * 0x48] ||
                       ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) {
            if ((&DAT_14c9a8558)[lVar16 * 0x48] == 0) {
LAB_140ac4591:
              if (lVar9 != 0) goto LAB_140ac4531;
            }
            else {
              lVar9 = FUN_14007daa4(plVar1,0,0);
              if (lVar9 != 0) {
                puVar10 = *(undefined **)(lVar9 + 8);
                if (DAT_14c951a40 == 0) {
                  bVar18 = puVar10 != (undefined *)0x0;
                  if (puVar10 != &DAT_14c951a38 && bVar18) {
                    do {
                      puVar10 = *(undefined **)(puVar10 + 0x30);
                      bVar18 = puVar10 != (undefined *)0x0;
                      if (puVar10 == &DAT_14c951a38) break;
                    } while (puVar10 != (undefined *)0x0);
                  }
                  if (bVar18) goto LAB_140ac458d;
                }
                else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a40) != 0) {
LAB_140ac458d:
                  *plVar1 = lVar9;
                  goto LAB_140ac4591;
                }
              }
              if (*plVar1 != 0) {
                *plVar1 = 0;
                *(undefined8 *)(&DAT_14c9a8548 + lVar16 * 0x48) = 0;
              }
            }
          }
          else {
LAB_140ac4531:
            cVar5 = (**(code **)(*param_2 + 0x1b0))(param_2);
            if (cVar5 != '\0') {
              uVar7 = (&DAT_14c9a8510)[lVar16 * 0x48];
              uVar6 = (ushort)uVar7;
              *(ushort *)(param_1 + 6) = uVar6;
              puVar12 = param_1;
              if (0x18 < uVar6) {
                puVar12 = (uint *)FUN_14001cc68(uVar7 & 0xffff);
                *(uint **)param_1 = puVar12;
              }
              if ((code *)(&DAT_14c9a85a8)[lVar16 * 0x24] == (code *)0x0) {
                iVar17 = (&DAT_14c9a8510)[lVar16 * 0x48];
                memset(puVar12,0,(longlong)iVar17);
              }
              else {
                (*(code *)(&DAT_14c9a85a8)[lVar16 * 0x24])();
                iVar17 = (&DAT_14c9a8510)[lVar16 * 0x48];
              }
              *(char *)(param_1 + 8) = (char)lVar16;
              if (*(int *)((longlong)param_2 + 0x34) * (int)param_2[6] == iVar17) {
                puVar12 = param_1;
                if (0x18 < (ushort)param_1[6]) {
                  puVar12 = *(uint **)param_1;
                }
                if (puVar12 != param_3) {
                  if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
                    (**(code **)(*param_2 + 0x100))(param_2,puVar12,param_3);
                  }
                  else {
                    memcpy(puVar12,param_3,
                           (longlong)*(int *)((longlong)param_2 + 0x34) * (longlong)(int)param_2[6])
                    ;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
                }
                goto LAB_140ac3e75;
              }
              if ((code *)(&DAT_14c9a85d0)[lVar16 * 0x24] != (code *)0x0) {
                puVar12 = param_1;
                if (0x18 < (ushort)param_1[6]) {
                  puVar12 = *(uint **)param_1;
                }
                (*(code *)(&DAT_14c9a85d0)[lVar16 * 0x24])(puVar12);
              }
              if (0x18 < (ushort)param_1[6]) {
                FUN_1400020a8(*(undefined8 *)param_1);
              }
            }
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x24);
      goto LAB_140ac47a1;
    }
    bVar2 = *(byte *)((longlong)param_2 + 0x73);
    bVar3 = *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
    *(undefined2 *)(param_1 + 6) = 4;
    *param_1 = (uint)((bVar3 & bVar2) != 0);
    *(undefined1 *)(param_1 + 8) = 1;
  }
LAB_140ac3e75:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ac48b0 FUN_140ac48b0 body=229 status=ok
// SIG undefined FUN_140ac48b0(void)

void FUN_140ac48b0(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 140ac4996 FUN_140ac4996 body=36 status=ok
// SIG undefined FUN_140ac4996(void)

void FUN_140ac4996(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_140ac49ba();
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return;
}



// FUNCTION 140ac49ba FUN_140ac49ba body=506 status=ok
// SIG undefined FUN_140ac49ba(void)

undefined8 FUN_140ac49ba(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x61) == '\0') {
    local_68 = 0;
    uStack_60 = 0;
    local_98 = (longlong *)0xffffffffffffffff;
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    pcVar1 = *(code **)(param_1 + 0x70);
    plVar7 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar1)(&local_a8,uVar6);
    (**(code **)(*local_a8 + 0x1a0))(local_a8,*(undefined8 *)(param_1 + 0x18));
    FUN_14707c7bc(&local_98,local_a8,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c));
    bVar8 = *(longlong *)(param_1 + 0x20) == local_90;
    bVar9 = *(longlong *)(param_1 + 0x28) == lStack_88;
    auVar3._8_8_ = uStack_78;
    auVar3._0_8_ = local_80;
    bVar4 = local_70 == *(int *)(param_1 + 0x40);
    bVar5 = auVar3 == *(undefined1 (*) [16])(param_1 + 0x30);
    bVar2 = local_58._4_4_ == *(int *)(param_1 + 0x5c);
    if ((bVar9 && bVar8) && ((bVar4 && bVar5) && bVar2)) {
      *(undefined1 *)(param_1 + 0x61) = 1;
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_140aa547e(local_a0);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if ((bVar9 && bVar8) && ((bVar4 && bVar5) && bVar2)) goto LAB_140ac49f5;
  }
  else {
LAB_140ac49f5:
    if (param_4 + param_3 <= *(longlong *)(param_1 + 0x20)) {
      pcVar1 = *(code **)(param_1 + 0x70);
      plVar7 = (longlong *)(param_1 + 0x90);
      if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0x80);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar1)(&local_98,uVar6);
      (**(code **)(*local_98 + 0x1a0))(local_98,param_4 + *(longlong *)(param_1 + 0xb0));
      (**(code **)(*local_98 + 0x170))(local_98,param_2,param_3);
      if (local_98 != (longlong *)0x0) {
        FUN_140aa547e(local_90);
      }
      uVar6 = 1;
      goto LAB_140ac4a6c;
    }
  }
  uVar6 = 0;
LAB_140ac4a6c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140ac4bb6 FUN_140ac4bb6 body=331 status=ok
// SIG undefined FUN_140ac4bb6(void)

undefined8 *
FUN_140ac4bb6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  plVar1 = (longlong *)FUN_140ac4d02(param_4);
  if (plVar1 != (longlong *)0x0) {
    puVar5 = &local_50;
    FUN_1401533ba(puVar5,param_1 + 8,1);
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,puVar5);
    uVar4 = 0x7fffffff;
    if (uVar2 < 0x7fffffff) {
      uVar4 = uVar2;
    }
    local_38 = 4;
    local_50 = (undefined4)uVar4;
    local_30 = 2;
    if (DAT_14c9a85d0 != (code *)0x0) {
      (*DAT_14c9a85d0)(param_2);
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
    }
    *(undefined2 *)(param_2 + 3) = 4;
    pcVar3 = DAT_14c9a87f8;
    if ((DAT_14c9a87f8 == (code *)0x0) && (pcVar3 = DAT_14c9a87f0, DAT_14c9a87f0 == (code *)0x0)) {
      memcpy(param_2,&local_50,(longlong)DAT_14c9a8750);
    }
    else {
      (*pcVar3)(param_2,&local_50);
    }
    *(undefined1 *)(param_2 + 4) = local_30;
    local_30 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      if (0x18 < local_38) {
        puVar5 = (undefined4 *)CONCAT44(uStack_4c,local_50);
      }
      (*DAT_14c9a85d0)(puVar5);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(CONCAT44(uStack_4c,local_50));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac4d02 FUN_140ac4d02 body=47 status=ok
// SIG undefined FUN_140ac4d02(void)

undefined8 FUN_140ac4d02(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_140ac4d32();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140ac4d32 FUN_140ac4d32 body=228 status=ok
// SIG undefined FUN_140ac4d32(void)

longlong FUN_140ac4d32(void)

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
  if (DAT_14cb5c210 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486851df;
    local_40 = FUN_1464d4895;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCurrencyHolder",&DAT_14cb5c210,&DAT_1486851de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac4e18 FUN_140ac4e18 body=2155 status=ok
// SIG undefined FUN_140ac4e18(void)

void FUN_140ac4e18(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  byte local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  int iStack_114;
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_178 = *(undefined8 **)(param_1 + 0x38);
    uStack_170 = *(undefined4 *)(param_1 + 0x40);
    uStack_16c = *(undefined4 *)(param_1 + 0x44);
    FUN_1407e4e88();
    uVar13 = DAT_14cb8a448;
    local_128 = CONCAT44((undefined4)local_178,DAT_14cb8a448);
    uStack_120 = CONCAT44(uStack_170,local_178._4_4_);
    uStack_118 = uStack_16c;
    iStack_114 = 0;
    plVar11 = *(longlong **)(param_4 + 0x10);
    uVar9 = FUN_1447addd0((longlong)&local_128 + 4,0x10);
    uVar16 = uVar9 >> 0xd ^ iStack_114 - uVar9;
    uVar18 = uVar16 << 8 ^ (-0x61c88647 - uVar16) - uVar9;
    uVar19 = uVar18 >> 0xd ^ (uVar9 - uVar16) - uVar18;
    uVar9 = uVar19 >> 0xc ^ (uVar16 - uVar18) - uVar19;
    uVar16 = uVar9 << 0x10 ^ (uVar18 - uVar19) - uVar9;
    uVar18 = uVar16 >> 5 ^ (uVar19 - uVar9) - uVar16;
    uVar19 = uVar18 >> 3 ^ (uVar9 - uVar16) - uVar18;
    uVar9 = uVar19 << 10 ^ (uVar16 - uVar18) - uVar19;
    uVar16 = uVar13 >> 0xd ^ (uVar9 >> 0xf ^ uVar18 - (uVar19 + uVar9)) - uVar13;
    uVar9 = uVar16 << 8 ^ (-0x61c88647 - uVar13) - uVar16;
    uVar13 = uVar9 >> 0xd ^ (uVar13 - uVar16) - uVar9;
    uVar16 = uVar13 >> 0xc ^ (uVar16 - uVar9) - uVar13;
    uVar18 = uVar16 << 0x10 ^ (uVar9 - uVar13) - uVar16;
    uVar13 = uVar18 >> 5 ^ (uVar13 - uVar16) - uVar18;
    uVar9 = uVar13 >> 3 ^ (uVar16 - uVar18) - uVar13;
    uVar16 = uVar9 << 10 ^ (uVar18 - uVar13) - uVar9;
    iVar10 = FUN_1407e4ee4(plVar11,uVar16 >> 0xf ^ uVar13 - (uVar9 + uVar16),&local_128);
    if (((((iVar10 == -1) ||
          (lVar12 = *plVar11 + (longlong)iVar10 * 0x28, plVar11 = (longlong *)(lVar12 + 0x18),
          plVar11 == (longlong *)0x0 || lVar12 == 0)) || (lVar12 = *plVar11, lVar12 == 0)) ||
        ((*(int *)(lVar12 + 0x28) != *(int *)(param_1 + 0x60) ||
         (*(int *)(lVar12 + 0x2c) != *(int *)(param_1 + 100))))) ||
       ((*(int *)(lVar12 + 0x30) != *(int *)(param_1 + 0x68) ||
        ((*(int *)(lVar12 + 0x34) != *(int *)(param_1 + 0x6c) || (*(char *)(lVar12 + 10) == '\x01'))
        )))) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      plVar11 = *(longlong **)(param_1 + 0x28);
      if (plVar11 == (longlong *)0x0) {
        local_198 = *(undefined8 *)(param_1 + 0x38);
        uStack_190 = *(undefined8 *)(param_1 + 0x40);
        local_188 = *(undefined4 *)(param_1 + 0x60);
        uStack_184 = *(undefined4 *)(param_1 + 100);
        uStack_180 = *(undefined4 *)(param_1 + 0x68);
        uStack_17c = *(undefined4 *)(param_1 + 0x6c);
        uVar20 = *(undefined8 *)(param_1 + 0x48);
        uVar17 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        local_198 = *(undefined8 *)(param_1 + 0x38);
        uStack_190 = *(undefined8 *)(param_1 + 0x40);
        local_188 = *(undefined4 *)(param_1 + 0x60);
        uStack_184 = *(undefined4 *)(param_1 + 100);
        uStack_180 = *(undefined4 *)(param_1 + 0x68);
        uStack_17c = *(undefined4 *)(param_1 + 0x6c);
        uVar20 = *(undefined8 *)(param_1 + 0x48);
        uVar17 = *(undefined4 *)(param_1 + 0x50);
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      local_178 = (undefined8 *)FUN_14001cc68(0x50,8);
      local_138 = (local_138 & 0xfc) + 1;
      *local_178 = &PTR_FUN_14b423b80;
      local_178[3] = CONCAT44(uStack_184,local_188);
      local_178[4] = CONCAT44(uStack_17c,uStack_180);
      local_178[1] = local_198;
      local_178[2] = uStack_190;
      local_178[5] = uVar20;
      *(undefined4 *)(local_178 + 6) = uVar17;
      local_178[7] = 0;
      local_178[8] = uVar5;
      local_178[9] = plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      uStack_118 = (int)param_5[0x24];
      local_128 = param_5[0x22];
      uStack_120 = param_5[0x23];
      iStack_114 = (int)*(undefined8 *)((longlong)param_5 + 0x124);
      uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
      uStack_10c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
      uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
      local_100 = (int)param_5[0x27];
      uStack_fc = *(undefined4 *)((longlong)param_5 + 0x13c);
      uStack_f8 = (int)param_5[0x28];
      uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x144);
      local_f0 = (int)param_5[0x29];
      uStack_ec = *(undefined4 *)((longlong)param_5 + 0x14c);
      uStack_e8 = (int)param_5[0x2a];
      uStack_e4 = *(undefined4 *)((longlong)param_5 + 0x154);
      local_e0 = param_5[0x2b];
      local_d0 = (int)param_5[0x2d];
      local_d8 = param_5[0x2c];
      local_c8 = 0;
      iVar10 = (int)param_5[0x2f];
      lVar12 = param_5[0x2e];
      local_c0 = CONCAT44(local_c0._4_4_,iVar10);
      if (iVar10 == 0) {
        local_c0 = 0;
      }
      else {
        FUN_14753cf4a(&local_c8,iVar10,0);
        FUN_14753cfbd(local_c8,lVar12,iVar10);
      }
      local_b8 = (void *)0x0;
      uVar13 = *(uint *)(param_5 + 0x31);
      pvVar6 = (void *)param_5[0x30];
      local_b0 = CONCAT44(local_b0._4_4_,uVar13);
      if ((longlong)(int)uVar13 == 0) {
        local_b0 = (ulonglong)uVar13;
      }
      else {
        FUN_1456c5740(&local_b8,uVar13,0);
        memcpy(local_b8,pvVar6,(longlong)(int)uVar13 << 3);
      }
      local_a8 = (char)param_5[0x32];
      local_a0 = (void *)0x0;
      uVar13 = *(uint *)(param_5 + 0x34);
      pvVar6 = (void *)param_5[0x33];
      local_98 = CONCAT44(local_98._4_4_,uVar13);
      if ((longlong)(int)uVar13 == 0) {
        local_98 = (ulonglong)uVar13;
      }
      else {
        FUN_1447bda9e(&local_a0,uVar13,0);
        memcpy(local_a0,pvVar6,(longlong)(int)uVar13 << 2);
      }
      bVar7 = local_138;
      puVar15 = (undefined8 *)&local_80;
      uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
      uStack_90 = (undefined5)param_5[0x35];
      local_8b = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
      bVar8 = local_40 & 0xfc;
      local_40 = bVar8 + 2;
      if ((local_138 & 1) != 0) {
        local_138 = local_138 & 0xfe;
        local_40 = bVar8 | bVar7 & 2 | 1;
        local_50 = local_148;
        uStack_48 = uStack_140;
        local_60 = local_158;
        uStack_58 = uStack_150;
        local_70 = local_168;
        uStack_68 = uStack_160;
        local_80 = (undefined4)local_178;
        uStack_7c = local_178._4_4_;
        uStack_78 = uStack_170;
        uStack_74 = uStack_16c;
      }
      bVar7 = local_138;
      iVar10 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
        FUN_140ac5684(param_5,iVar10);
      }
      lVar12 = *param_5;
      lVar14 = (longlong)iVar10 * 0xf0;
      *(undefined4 *)(lVar12 + 0x20 + lVar14) = uStack_108;
      puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar14);
      *puVar3 = CONCAT44(iStack_114,uStack_118);
      puVar3[1] = CONCAT44(uStack_10c,uStack_110);
      *(longlong *)(lVar12 + lVar14) = local_128;
      ((longlong *)(lVar12 + lVar14))[1] = uStack_120;
      *(longlong *)(lVar12 + 0x48 + lVar14) = local_e0;
      puVar4 = (undefined4 *)(lVar12 + 0x38 + lVar14);
      *puVar4 = local_f0;
      puVar4[1] = uStack_ec;
      puVar4[2] = uStack_e8;
      puVar4[3] = uStack_e4;
      puVar4 = (undefined4 *)(lVar12 + 0x28 + lVar14);
      *puVar4 = local_100;
      puVar4[1] = uStack_fc;
      puVar4[2] = uStack_f8;
      puVar4[3] = uStack_f4;
      *(longlong *)(lVar12 + 0x50 + lVar14) = local_d8;
      *(undefined4 *)(lVar12 + 0x58 + lVar14) = local_d0;
      *(undefined8 *)(lVar12 + 0x60 + lVar14) = 0;
      *(longlong *)(lVar12 + 0x60 + lVar14) = local_c8;
      local_c8 = 0;
      *(undefined4 *)(lVar12 + 0x68 + lVar14) = (undefined4)local_c0;
      *(undefined4 *)(lVar12 + 0x6c + lVar14) = local_c0._4_4_;
      local_c0 = 0;
      *(undefined8 *)(lVar12 + 0x70 + lVar14) = 0;
      *(void **)(lVar12 + 0x70 + lVar14) = local_b8;
      local_b8 = (void *)0x0;
      *(undefined4 *)(lVar12 + 0x78 + lVar14) = (undefined4)local_b0;
      *(undefined4 *)(lVar12 + 0x7c + lVar14) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined1 *)(lVar12 + 0x80 + lVar14) = local_a8;
      *(undefined8 *)(lVar12 + 0x88 + lVar14) = 0;
      *(void **)(lVar12 + 0x88 + lVar14) = local_a0;
      local_a0 = (void *)0x0;
      *(undefined4 *)(lVar12 + 0x90 + lVar14) = (undefined4)local_98;
      *(undefined4 *)(lVar12 + 0x94 + lVar14) = local_98._4_4_;
      local_98 = 0;
      *(ulonglong *)(lVar12 + 0x9d + lVar14) = CONCAT53(uStack_88,local_8b);
      *(ulonglong *)(lVar12 + 0x98 + lVar14) = CONCAT35(local_8b,uStack_90);
      bVar8 = *(byte *)(lVar12 + 0xe8 + lVar14);
      *(byte *)(lVar12 + 0xe8 + lVar14) = bVar8 & 0xfc | 2;
      if ((local_40 & 1) != 0) {
        lVar12 = lVar12 + lVar14;
        *(byte *)(lVar12 + 0xe8) = bVar8 | 3;
        *(byte *)(lVar12 + 0xe8) = *(byte *)(lVar12 + 0xe8) & 0xfd | local_40 & 2;
        *(undefined8 *)(lVar12 + 0xd8) = local_50;
        *(undefined8 *)(lVar12 + 0xe0) = uStack_48;
        *(undefined8 *)(lVar12 + 200) = local_60;
        *(undefined8 *)(lVar12 + 0xd0) = uStack_58;
        *(undefined4 *)(lVar12 + 0xb8) = (undefined4)local_70;
        *(undefined4 *)(lVar12 + 0xbc) = local_70._4_4_;
        *(undefined4 *)(lVar12 + 0xc0) = (undefined4)uStack_68;
        *(undefined4 *)(lVar12 + 0xc4) = uStack_68._4_4_;
        *(undefined4 *)(lVar12 + 0xa8) = local_80;
        *(undefined4 *)(lVar12 + 0xac) = uStack_7c;
        *(undefined4 *)(lVar12 + 0xb0) = uStack_78;
        *(undefined4 *)(lVar12 + 0xb4) = uStack_74;
        local_40 = local_40 & 0xfe;
      }
      if ((local_40 & 1) != 0) {
        if ((local_40 & 2) == 0) {
          puVar15 = (undefined8 *)CONCAT44(uStack_7c,local_80);
        }
        local_40 = local_40 & 0xfe;
        (**(code **)*puVar15)(puVar15,0);
        if ((local_40 & 2) == 0) {
          FUN_1400020a8(CONCAT44(uStack_7c,local_80));
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
      if ((bVar7 & 1) != 0) {
        puVar15 = local_178;
        if ((bVar7 & 2) != 0) {
          puVar15 = &local_178;
        }
        local_138 = bVar7 & 0xfe;
        (**(code **)*puVar15)(puVar15,0);
        if ((local_138 & 2) == 0) {
          FUN_1400020a8(local_178);
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac5684 FUN_140ac5684 body=274 status=ok
// SIG undefined FUN_140ac5684(void)

void FUN_140ac5684(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0xf0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140ac57a4 FUN_140ac57a4 body=116 status=ok
// SIG undefined FUN_140ac57a4(void)

void FUN_140ac57a4(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140ac5818(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d89132(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140ac5818 FUN_140ac5818 body=269 status=ok
// SIG undefined FUN_140ac5818(void)

void FUN_140ac5818(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140ac5926 FUN_140ac5926 body=197 status=ok
// SIG undefined FUN_140ac5926(void)

undefined4
FUN_140ac5926(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_140ac59fc(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  (**(code **)(*param_1 + 8))(param_1,local_50);
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_140ac59fc(param_3,param_2,local_40,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_50);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac59fc FUN_140ac59fc body=143 status=ok
// SIG undefined FUN_140ac59fc(void)

bool FUN_140ac59fc(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_5 == 0) {
    FUN_140ac5a8c(param_1,&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_5 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac5a8c FUN_140ac5a8c body=117 status=ok
// SIG undefined FUN_140ac5a8c(void)

undefined8 FUN_140ac5a8c(float *param_1,undefined8 param_2)

{
  if (ABS(param_1[1]) <= 1e-08) {
    FUN_140002266(param_2,&DAT_149e14292,(double)*param_1);
  }
  else {
    FUN_140002266(param_2,L"%g +-%g",(double)*param_1,(double)param_1[1]);
  }
  return param_2;
}



// FUNCTION 140ac5b02 FUN_140ac5b02 body=261 status=ok
// SIG undefined FUN_140ac5b02(void)

undefined8 * FUN_140ac5b02(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_140b80270(param_1,uVar4 & 0xffffffff);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_140b7fdd8(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_140ac5c08(param_1,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac5c08 FUN_140ac5c08 body=448 status=ok
// SIG undefined FUN_140ac5c08(void)

undefined4 *
FUN_140ac5c08(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ac5f02();
  uVar8 = 0;
  FUN_140ac5dca(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50;
  iVar7 = *(int *)(local_48 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_140ac5e66(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar7 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x24) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140b7fdd8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac5dca FUN_140ac5dca body=155 status=ok
// SIG undefined FUN_140ac5dca(void)

undefined8 *
FUN_140ac5dca(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 140ac5e66 FUN_140ac5e66 body=156 status=ok
// SIG undefined FUN_140ac5e66(void)

void FUN_140ac5e66(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_1457511aa();
    if (iVar10 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      *(undefined4 *)(plVar1 + 2) = param_3[4];
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(undefined4 *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
      FUN_140ac60ec(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_140ac5e9a;
    }
  }
  uVar9 = 0;
LAB_140ac5e9a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 140ac5f02 FUN_140ac5f02 body=489 status=ok
// SIG undefined FUN_140ac5f02(void)

int * FUN_140ac5f02(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
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
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
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
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140ac60ec FUN_140ac60ec body=138 status=ok
// SIG undefined FUN_140ac60ec(void)

void FUN_140ac60ec(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ac6176 FUN_140ac6176 body=1655 status=ok
// SIG undefined FUN_140ac6176(void)

void FUN_140ac6176(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  void *pvVar7;
  ushort *puVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong lVar17;
  undefined1 auStack_b8 [40];
  void *local_90;
  PSRWLOCK local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x208) != 0) {
    lVar3 = param_1 + 0x208;
    lVar5 = *(longlong *)(param_1 + 0x288);
    if (lVar5 != 0) {
      FUN_1448d5e3c(&local_70,lVar3);
      puVar6 = *(undefined1 **)(local_70 + 0xb0);
      AcquireSRWLockShared((PSRWLOCK)(puVar6 + 0x88));
      plVar2 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar16 = (int *)((longlong)plVar2 + 0xc);
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (*piVar16 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (*(int *)(puVar6 + 0x80) != *(int *)(param_1 + 0x298)) {
        *(int *)(param_1 + 0x298) = *(int *)(puVar6 + 0x80);
        FUN_1448d5e3c(&local_70,lVar3);
        piVar16 = *(int **)(local_70 + 0x60);
        local_88 = (PSRWLOCK)(piVar16 + 0x2c);
        AcquireSRWLockShared(local_88);
        plVar2 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar13 = (int *)((longlong)plVar2 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        *(undefined1 *)(lVar5 + 0x12a) = *puVar6;
        *(undefined4 *)(lVar5 + 0x140) = *(undefined4 *)(puVar6 + 8);
        *(undefined1 *)(lVar5 + 299) = puVar6[1];
        *(bool *)(lVar5 + 300) = *(int *)(puVar6 + 0x34) != 2;
        *(undefined1 *)(lVar5 + 0x12d) = puVar6[4];
        puVar15 = (undefined8 *)(lVar5 + 0x130);
        if (puVar15 != (undefined8 *)(puVar6 + 0x20)) {
          iVar4 = *(int *)(puVar6 + 0x28);
          pvVar7 = *(void **)(puVar6 + 0x20);
          *(int *)(lVar5 + 0x138) = iVar4;
          if (iVar4 == 0 && *(int *)(lVar5 + 0x13c) == 0) {
            *(undefined4 *)(lVar5 + 0x13c) = 0;
          }
          else {
            local_90 = pvVar7;
            FUN_1446dd670(puVar15,iVar4);
            if (iVar4 != 0) {
              memcpy((void *)*puVar15,local_90,(longlong)iVar4 * 2);
            }
          }
        }
        *(undefined1 *)(lVar5 + 0x129) = puVar6[3];
        bVar11 = 0;
        if (1 < *(int *)(lVar5 + 0x138)) {
          bVar11 = *(byte *)(lVar5 + 300) ^ 1;
        }
        *(byte *)(lVar5 + 0x15a) = bVar11;
        iVar4 = piVar16[0x17];
        iVar12 = piVar16[0x18];
        iVar9 = piVar16[0x19];
        *(int *)(lVar5 + 0x1b8) = piVar16[0x16];
        *(int *)(lVar5 + 0x1bc) = iVar4;
        *(int *)(lVar5 + 0x1c0) = iVar12;
        *(int *)(lVar5 + 0x1c4) = iVar9;
        iVar12 = *(int *)(puVar6 + 8) - *piVar16;
        iVar4 = *(int *)(param_1 + 0x2a4);
        *(bool *)(lVar5 + 0x158) = iVar4 <= iVar12;
        *(bool *)(lVar5 + 0x159) = iVar12 < iVar4;
        puVar15 = &DAT_14cbdba28;
        piVar16 = &DAT_14cbdba30;
        if (0 < iVar12) {
          piVar16 = &DAT_14cbdba20;
          puVar15 = &DAT_14cbdba18;
        }
        piVar13 = &DAT_14cbdba10;
        if (iVar12 < 3) {
          piVar13 = piVar16;
        }
        puVar14 = &DAT_14cbdba08;
        if (iVar12 < 3) {
          puVar14 = puVar15;
        }
        iVar4 = *piVar13 + -1;
        if (*piVar13 == 0) {
          iVar4 = 0;
        }
        FUN_1402980a2(lVar5 + 0x148,*puVar14,iVar4);
        *(undefined1 *)(lVar5 + 0x1a2) = puVar6[0x7a];
        *(undefined1 *)(lVar5 + 0x1a1) = puVar6[0x79];
        *(undefined1 *)(lVar5 + 0x1a0) = puVar6[0x78];
        puVar15 = (undefined8 *)(lVar5 + 0x1a8);
        if (puVar15 != (undefined8 *)(puVar6 + 0x68)) {
          iVar4 = *(int *)(puVar6 + 0x70);
          pvVar7 = *(void **)(puVar6 + 0x68);
          *(int *)(lVar5 + 0x1b0) = iVar4;
          if (iVar4 == 0 && *(int *)(lVar5 + 0x1b4) == 0) {
            *(undefined4 *)(lVar5 + 0x1b4) = 0;
          }
          else {
            FUN_1446dd670(puVar15,iVar4);
            if (iVar4 != 0) {
              memcpy((void *)*puVar15,pvVar7,(longlong)iVar4 * 2);
            }
          }
        }
        *(undefined1 *)(lVar5 + 0x180) = puVar6[0x60];
        *(bool *)(lVar5 + 0x181) = 1 < *(int *)(puVar6 + 0x58);
        puVar15 = (undefined8 *)(lVar5 + 0x188);
        if (puVar15 != (undefined8 *)(puVar6 + 0x48)) {
          iVar4 = *(int *)(puVar6 + 0x50);
          pvVar7 = *(void **)(puVar6 + 0x48);
          *(int *)(lVar5 + 400) = iVar4;
          if (iVar4 == 0 && *(int *)(lVar5 + 0x194) == 0) {
            *(undefined4 *)(lVar5 + 0x194) = 0;
          }
          else {
            FUN_1446dd670(puVar15,iVar4);
            if (iVar4 != 0) {
              memcpy((void *)*puVar15,pvVar7,(longlong)iVar4 * 2);
            }
          }
        }
        *(undefined4 *)(lVar5 + 0x198) = *(undefined4 *)(puVar6 + 0x58);
        *(float *)(lVar5 + 0x19c) = *(float *)(puVar6 + 0x5c) * 100.0;
        local_80 = (void *)0x0;
        local_78 = *(int *)(puVar6 + 0x18);
        lVar17 = (longlong)local_78;
        pvVar7 = *(void **)(puVar6 + 0x10);
        if (lVar17 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar7,lVar17 * 2);
        }
        FUN_14000bbd8(&local_70,&local_80,0);
        cVar10 = FUN_140ac6a88(&local_70,lVar5 + 0x160);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (cVar10 == '\0') {
          iVar4 = local_78 + -1;
          if (local_78 == 0) {
            iVar4 = 0;
          }
          FUN_1402980a2(lVar5 + 0x160,local_80,iVar4);
        }
        puVar15 = (undefined8 *)(lVar5 + 0x170);
        if (puVar15 != (undefined8 *)(puVar6 + 0x38)) {
          iVar4 = *(int *)(puVar6 + 0x40);
          pvVar7 = *(void **)(puVar6 + 0x38);
          *(int *)(lVar5 + 0x178) = iVar4;
          if (iVar4 == 0 && *(int *)(lVar5 + 0x17c) == 0) {
            *(undefined4 *)(lVar5 + 0x17c) = 0;
          }
          else {
            FUN_1446dd670(puVar15,iVar4);
            if (iVar4 != 0) {
              memcpy((void *)*puVar15,pvVar7,(longlong)iVar4 * 2);
            }
          }
        }
        FUN_140ac67ee(param_1);
        puVar8 = *(ushort **)(lVar5 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
        }
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockShared(local_88);
      }
      ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 0x88));
      lVar5 = *(longlong *)(param_1 + 0x288);
      if (lVar5 != 0) {
        FUN_1448d5e3c(&local_70,lVar3);
        lVar17 = *(longlong *)(local_70 + 0x530);
        SRWLock = (PSRWLOCK)(lVar17 + 0x168);
        AcquireSRWLockShared(SRWLock);
        plVar2 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar16 = (int *)((longlong)plVar2 + 0xc);
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (*piVar16 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        iVar4 = *(int *)(lVar17 + 0x160);
        if (*(int *)(param_1 + 0x29c) != iVar4) {
          *(int *)(param_1 + 0x29c) = iVar4;
          cVar10 = FUN_140ac67ee(param_1);
          if ((cVar10 != '\0') && (puVar8 = *(ushort **)(lVar5 + 0x80), puVar8 != (ushort *)0x0)) {
            *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
          }
        }
        ReleaseSRWLockShared(SRWLock);
      }
    }
    FUN_1448d5e3c(&local_70,lVar3);
    lVar3 = *(longlong *)(local_70 + 0x2a0);
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x68));
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar16 = (int *)((longlong)local_68 + 0xc);
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (*piVar16 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (*(int *)(param_1 + 0x2a0) != *(int *)(lVar3 + 0x60)) {
      *(int *)(param_1 + 0x2a0) = *(int *)(lVar3 + 0x60);
      lVar5 = *(longlong *)(param_1 + 0x288);
      if (*(int *)(lVar5 + 0x1cc) != *(int *)(lVar3 + 0x44)) {
        *(undefined1 *)(lVar5 + 0x1c8) = *(undefined1 *)(lVar3 + 0x40);
        *(undefined4 *)(lVar5 + 0x1cc) = *(undefined4 *)(lVar3 + 0x44);
        puVar8 = *(ushort **)(lVar5 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x68));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac67ee FUN_140ac67ee body=665 status=ok
// SIG undefined FUN_140ac67ee(void)

ulonglong FUN_140ac67ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x288);
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  plVar5 = *(longlong **)(local_40 + 0x530);
  AcquireSRWLockShared((PSRWLOCK)(plVar5 + 0x2d));
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((int)plVar5[1] < 3) {
    if ((*(float *)(lVar4 + 0xc0) != 0.0) || (NAN(*(float *)(lVar4 + 0xc0)))) {
      iVar9 = *(int *)(lVar4 + 0xc4) + 1;
LAB_140ac689b:
      *(undefined4 *)(lVar4 + 0xc0) = 0;
      *(int *)(lVar4 + 0xc4) = iVar9;
    }
    else if (*(int *)(lVar4 + 0xc4) == 0) {
      iVar9 = 1;
      goto LAB_140ac689b;
    }
    *(undefined4 *)(lVar4 + 200) = 0;
    *(undefined4 *)(lVar4 + 0xd0) = 0x100;
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar8 = FUN_1418fb1f2(lVar4 + 0xb0,*plVar5 + 0xb0);
    uVar11 = (ulonglong)uVar8;
  }
  if ((int)plVar5[1] < 2) {
    if ((*(float *)(lVar4 + 0xe8) != 0.0) || (NAN(*(float *)(lVar4 + 0xe8)))) {
      iVar9 = *(int *)(lVar4 + 0xec) + 1;
LAB_140ac6909:
      *(undefined4 *)(lVar4 + 0xe8) = 0;
      *(int *)(lVar4 + 0xec) = iVar9;
    }
    else if (*(int *)(lVar4 + 0xec) == 0) {
      iVar9 = 1;
      goto LAB_140ac6909;
    }
    *(undefined4 *)(lVar4 + 0xf0) = 0;
    *(undefined4 *)(lVar4 + 0xf8) = 0x100;
    bVar6 = 1;
  }
  else {
    bVar6 = FUN_1418fb1f2(lVar4 + 0xd8,*plVar5 + 0x58);
  }
  if ((int)plVar5[1] < 1) {
    if ((*(float *)(lVar4 + 0x110) != 0.0) || (NAN(*(float *)(lVar4 + 0x110)))) {
      iVar9 = *(int *)(lVar4 + 0x114) + 1;
LAB_140ac6972:
      *(undefined4 *)(lVar4 + 0x110) = 0;
      *(int *)(lVar4 + 0x114) = iVar9;
    }
    else if (*(int *)(lVar4 + 0x114) == 0) {
      iVar9 = 1;
      goto LAB_140ac6972;
    }
    *(undefined4 *)(lVar4 + 0x118) = 0;
    *(undefined2 *)(lVar4 + 0x120) = 0x100;
    *(undefined1 *)(lVar4 + 0x123) = 0;
    bVar7 = 1;
  }
  else {
    bVar7 = FUN_1418fb1f2(lVar4 + 0x100,*plVar5);
  }
  bVar3 = *(byte *)(lVar4 + 0xd1);
  *(byte *)(lVar4 + 0xd2) = bVar3 ^ 1;
  *(byte *)(lVar4 + 0xfa) = bVar3;
  if (*(char *)(lVar4 + 0xf9) == '\x01') {
    *(byte *)(lVar4 + 0x122) = bVar3;
    if ((bVar3 != 0) && (*(char *)(lVar4 + 0x121) == '\x01')) {
      bVar12 = (int)plVar5[1] != 0;
      goto LAB_140ac69fe;
    }
  }
  else {
    *(undefined1 *)(lVar4 + 0x122) = 0;
  }
  bVar12 = false;
LAB_140ac69fe:
  *(bool *)(lVar4 + 0x128) = bVar12;
  if (*(char *)(lVar4 + 299) == '\0') {
    uVar10 = 1;
    if ((*(char *)(lVar4 + 0xd3) == '\0') && (*(char *)(lVar4 + 0xfb) == '\0')) {
      uVar10 = *(undefined1 *)(lVar4 + 0x123);
    }
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)(lVar4 + 0x12e) = uVar10;
  ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0x2d));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 | bVar6 | bVar7) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac6a88 FUN_140ac6a88 body=524 status=ok
// SIG undefined FUN_140ac6a88(void)

undefined4 FUN_140ac6a88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_40 = DAT_14c844840;
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
  local_38 = 0;
  uVar4 = FUN_140ac6c96(param_1,&local_40);
  plVar3 = local_40;
  if ((char)uVar4 != '\0') {
    plVar5 = local_40;
    if (*(code **)(*local_40 + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_40 + 0x50))(local_40);
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*plVar3 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar5 = (longlong *)(plVar3[5] + 8);
      if (plVar3[5] == 0) {
        plVar5 = plVar3 + 3;
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar5 = plVar3 + 2;
    }
    else {
      plVar5 = (longlong *)(*pcVar2)(plVar3);
    }
    if (plVar5 != param_2) {
      iVar1 = (int)plVar5[1];
      _Src = (void *)*plVar5;
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac6c96 FUN_140ac6c96 body=192 status=ok
// SIG undefined FUN_140ac6c96(void)

undefined8 FUN_140ac6c96(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((DAT_14cb8d378 != 0) &&
     (plVar3 = (longlong *)FUN_144837462(DAT_14cb8d378,param_1), plVar3 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    if (DAT_14cb91eb0 == 0) {
      uVar5 = FUN_14580b51a();
      DAT_14cb91eb0 = FUN_140002ddd(FUN_1418b7497,uVar5,L"GbxUIDisplayDataDef_LocalizedText");
      if (DAT_14cb91eb0 == 0) {
        return 0;
      }
    }
    if ((*(int *)(DAT_14cb91eb0 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb91eb0 + 0x38) * 8) ==
        DAT_14cb91eb0 + 0x30)) {
      plVar1 = (longlong *)plVar3[3];
      plVar2 = (longlong *)*param_2;
      if (plVar2 != plVar1) {
        *param_2 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      lVar4 = plVar3[4];
      *(int *)(param_2 + 1) = (int)lVar4;
      return CONCAT71((uint7)(uint3)((uint)(int)lVar4 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 140ac6d56 FUN_140ac6d56 body=57 status=ok
// SIG undefined FUN_140ac6d56(void)

void FUN_140ac6d56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91eb0 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91eb0 = FUN_140002ddd(FUN_1418b7497,uVar1,L"GbxUIDisplayDataDef_LocalizedText");
  }
  return;
}



// FUNCTION 140ac6d90 FUN_140ac6d90 body=57 status=ok
// SIG undefined FUN_140ac6d90(void)

void FUN_140ac6d90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91ef8 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91ef8 = FUN_140002ddd(FUN_14656b6a9,uVar1,L"GbxUIDisplayDataDef_UIListMenuEntryText");
  }
  return;
}



// FUNCTION 140ac6dd0 FUN_140ac6dd0 body=57 status=ok
// SIG undefined FUN_140ac6dd0(void)

void FUN_140ac6dd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ee70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ee70 = FUN_140002ddd(FUN_14653e900,uVar1,L"RadiateDamageAreaBodySettings");
  }
  return;
}



// FUNCTION 140ac6e0a FUN_140ac6e0a body=15325 status=ok
// SIG undefined FUN_140ac6e0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac6e0a(longlong param_1,longlong *param_2,char param_3,double *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  byte bVar14;
  undefined4 extraout_EAX;
  int iVar15;
  int iVar16;
  undefined4 extraout_EAX_00;
  uint uVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  void *_Dst;
  ulonglong uVar21;
  char cVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  double *pdVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  double *pdVar31;
  bool bVar32;
  double *pdVar33;
  undefined1 (*pauVar34) [16];
  bool bVar35;
  ulonglong uVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulonglong uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  ulonglong uVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined4 local_510;
  undefined4 local_508;
  undefined4 local_500;
  char local_4e9;
  double local_4e8;
  double dStack_4e0;
  undefined1 local_4d8 [16];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [24];
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  longlong *local_460;
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438 [4];
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  longlong *plStack_3c8;
  longlong lStack_3c0;
  undefined8 local_3b8;
  longlong lStack_3b0;
  undefined8 local_3a8;
  longlong lStack_3a0;
  undefined8 local_398;
  longlong lStack_390;
  undefined8 local_388;
  longlong lStack_380;
  undefined8 local_378;
  longlong lStack_370;
  undefined8 local_368;
  longlong lStack_360;
  undefined8 local_358;
  undefined1 local_350 [8];
  double local_348;
  double local_340;
  undefined **local_338;
  double dStack_330;
  double local_328 [4];
  double dStack_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  longlong local_240;
  int local_238;
  int local_234;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
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
  double dStack_160;
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
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_3d0 = 0;
  plStack_3c8 = (longlong *)0x0;
  lStack_3c0 = 0;
  local_3b8 = 0;
  lStack_3b0 = 0;
  local_3a8 = 0;
  lStack_3a0 = 0;
  local_398 = 0;
  lStack_390 = 0;
  local_388 = 0;
  lStack_380 = 0;
  local_378 = 0;
  lStack_370 = 0;
  local_368 = 0;
  lStack_360 = 0;
  local_358 = 0;
  if (param_2 == (longlong *)0x0) {
LAB_140ac6f13:
    lVar19 = (**(code **)(*param_2 + 0x7a0))(param_2);
    if (lVar19 == 0) goto LAB_140ac86a6;
    pdVar33 = (double *)(param_2 + 0x48);
    if (param_4 != (double *)0x0) {
      pdVar33 = param_4;
    }
    pdVar26 = local_438;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *pdVar26 = *pdVar33;
      pdVar33 = pdVar33 + 1;
      pdVar26 = pdVar26 + 1;
    }
    local_4e9 = param_3;
    if (*(int *)(lVar19 + 0x60) + *(int *)(lVar19 + 0x40) + *(int *)(lVar19 + 0x50) +
        *(int *)(lVar19 + 0x70) + *(int *)(lVar19 + 0x80) + *(int *)(lVar19 + 0x90) +
        *(int *)(lVar19 + 0xa0) != 0) {
      lVar24 = DAT_14c997cc0;
      if (DAT_14c997cc0 == 0) {
        plVar25 = (longlong *)FUN_145a62958();
        lVar24 = plVar25[0x22];
        if (lVar24 == 0) {
          (**(code **)(*plVar25 + 1000))(plVar25);
          lVar24 = plVar25[0x22];
        }
      }
      bVar5 = *(byte *)(lVar19 + 0x31);
      plVar25 = (longlong *)(ulonglong)bVar5;
      bVar14 = *(byte *)(lVar24 + 0x75);
      if (bVar5 != 0) {
        bVar14 = bVar5;
      }
      if (bVar14 != 3) {
        iVar15 = *(int *)(lVar19 + 0x50);
        if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar15);
        }
        if (iVar15 != 0) {
          plVar25 = &lStack_3b0;
          FUN_140418e28();
          if ((longlong)*(int *)(lVar19 + 0x50) != 0) {
            pauVar34 = (undefined1 (*) [16])(*(longlong *)(lVar19 + 0x48) + 0x48);
            lVar24 = (longlong)*(int *)(lVar19 + 0x50) * 0x70;
            local_460 = param_2;
            while( true ) {
              auVar51 = _DAT_1499387d0;
              uVar18 = SUB84(plVar25,0);
              local_2e8 = (double)*(float *)pauVar34[2];
              local_2f0 = (double)*(float *)(pauVar34[1] + 0xc);
              local_2f8 = (double)*(float *)(pauVar34[1] + 8);
              dStack_330 = SQRT(local_2e8 * local_2e8 +
                                local_2f8 * local_2f8 + local_2f0 * local_2f0);
              local_338 = &PTR_LAB_14a1e1978;
              local_328[2] = *(double *)(pauVar34[-1] + 8);
              local_328[0] = *(double *)(pauVar34[-2] + 8);
              local_328[1] = *(double *)pauVar34[-1];
              local_300 = *(double *)pauVar34[1];
              local_328[3] = *(double *)*pauVar34;
              dStack_308 = *(double *)(*pauVar34 + 8);
              auVar61 = *pauVar34;
              dVar37 = (double)DAT_1499387d0;
              dVar38 = DAT_1499387d0._8_8_;
              auVar39 = divpd(auVar61,_DAT_1499387d0);
              auVar48._8_8_ = 0;
              auVar48._0_8_ = *(double *)pauVar34[1];
              auVar49 = divpd(auVar48,_DAT_1499387d0);
              auVar39 = roundpd(auVar39,auVar39,3);
              auVar49 = roundpd(auVar49,auVar49,3);
              dVar76 = (auVar61._0_8_ - auVar39._0_8_ * dVar37) * 0.008726646259971648;
              dVar78 = (auVar61._8_8_ - auVar39._8_8_ * dVar38) * 0.008726646259971648;
              dVar69 = (*(double *)pauVar34[1] - auVar49._0_8_ * dVar37) * 0.008726646259971648;
              dVar73 = (0.0 - auVar49._8_8_ * dVar38) * 0.008726646259971648;
              sin(dVar76);
              sin(dVar78);
              sin(dVar69);
              sin(dVar73);
              cos(dVar76);
              cos(dVar78);
              cos(dVar69);
              cos(dVar73);
              dVar76 = local_3e8;
              dVar73 = dStack_3f0;
              dVar69 = local_3f8;
              auVar61._8_8_ = dStack_3f0;
              auVar61._0_8_ = local_3f8;
              auVar39._8_8_ = uStack_3e0;
              auVar39._0_8_ = local_3e8;
              local_4c8 = dStack_3f0;
              auVar49._8_8_ = dStack_308;
              auVar49._0_8_ = local_328[3];
              auVar49 = divpd(auVar49,auVar51);
              auVar50._8_8_ = 0;
              auVar50._0_8_ = local_300;
              auVar51 = divpd(auVar50,auVar51);
              auVar49 = roundpd(auVar49,auVar49,3);
              auVar51 = roundpd(auVar51,auVar51,3);
              dVar70 = (local_328[3] - auVar49._0_8_ * dVar37) * 0.008726646259971648;
              dVar74 = (dStack_308 - auVar49._8_8_ * dVar38) * 0.008726646259971648;
              dVar77 = (local_300 - auVar51._0_8_ * dVar37) * 0.008726646259971648;
              dVar79 = (0.0 - auVar51._8_8_ * dVar38) * 0.008726646259971648;
              dVar37 = sin(dVar70);
              dVar38 = sin(dVar74);
              dVar78 = sin(dVar77);
              sin(dVar79);
              dVar70 = cos(dVar70);
              dVar74 = cos(dVar74);
              dVar77 = cos(dVar77);
              cos(dVar79);
              dVar71 = -(dVar74 * dVar37 * dVar78) + dVar38 * dVar70 * dVar77;
              dVar75 = dVar38 * dVar37 * dVar78 + dVar74 * dVar70 * dVar77;
              dVar79 = dVar37 * dVar38 * dVar77 - dVar70 * dVar74 * dVar78;
              dVar37 = -(dVar37 * dVar74 * dVar77) - dVar70 * dVar38 * dVar78;
              auVar49 = minpd(_DAT_149934d80,auVar61);
              auVar39 = minpd(ZEXT816(0x3ff0000000000000),auVar39);
              auVar51._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
              auVar51._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
              iVar15 = movmskpd(extraout_EAX,auVar51);
              auVar63._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
              auVar63._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
              uVar23 = movmskpd(uVar18,auVar63);
              if ((uVar23 & 0x3fffffff) == 0 && iVar15 == 0) {
                dVar38 = (double)DAT_149931170;
                dVar78 = DAT_149931170._8_8_;
                local_2b8._0_8_ =
                     dVar37 * local_438[2] * -1.0 +
                     dVar71 * local_438[1] + dVar75 * local_438[0] * dVar38 + dVar79 * local_438[3];
                local_2b8._8_8_ =
                     dVar79 * local_438[2] * 1.0 +
                     dVar75 * local_438[1] + dVar71 * local_438[0] * dVar78 + dVar37 * local_438[3];
                local_2a8._0_8_ =
                     dVar75 * local_438[2] * dVar38 +
                     ((local_438[0] * dVar37 * dVar38 + dVar71 * local_438[3]) -
                     dVar79 * local_438[1]);
                local_2a8._8_8_ =
                     dVar71 * local_438[2] * dVar78 +
                     ((local_438[0] * dVar79 * dVar78 + dVar75 * local_438[3]) -
                     dVar37 * local_438[1]);
                dVar69 = dVar69 * local_328[0];
                dVar73 = dVar73 * local_328[1];
                dVar37 = dVar76 * local_328[2];
                dVar70 = dVar73 * local_438[0] - dVar69 * local_438[1];
                dVar74 = dVar37 * local_438[1] - dVar73 * local_438[2];
                dVar78 = dVar69 * local_438[2] - dVar37 * local_438[0];
                dVar74 = dVar74 + dVar74;
                dVar78 = dVar78 + dVar78;
                dVar70 = dVar70 + dVar70;
                dVar37 = (dVar78 * local_438[0] - local_438[1] * dVar74) +
                         local_438[3] * dVar70 + dVar37 + local_408;
                dVar38 = (dVar70 * local_438[1] - local_438[2] * dVar78) +
                         local_438[3] * dVar74 + dVar69 + local_418;
                dVar69 = (dVar74 * local_438[2] - dVar70 * local_438[0]) +
                         local_438[3] * dVar78 + dVar73 + dStack_410;
              }
              else {
                dVar38 = local_438[1] + local_438[1];
                dVar78 = local_438[2] + local_438[2];
                dVar74 = local_438[0] * (local_438[0] + local_438[0]);
                local_178 = (1.0 - (local_438[2] * dVar78 + local_438[1] * dVar38)) * dVar69;
                dStack_150 = (1.0 - (local_438[2] * dVar78 + dVar74)) * dVar73;
                dVar70 = (local_438[0] + local_438[0]) * local_438[3];
                local_158 = (dVar38 * local_438[0] - dVar78 * local_438[3]) * dVar73;
                dStack_130 = (dVar78 * local_438[1] - dVar70) * dVar76;
                local_138 = (dVar38 * local_438[3] + local_438[0] * dVar78) * dVar76;
                dStack_170 = (dVar38 * local_438[0] + dVar78 * local_438[3]) * dVar69;
                local_148 = (dVar78 * local_438[1] + dVar70) * dVar73;
                local_168 = (local_438[0] * dVar78 - dVar38 * local_438[3]) * dVar69;
                dStack_160 = 0.0;
                local_128 = (1.0 - (dVar74 + local_438[1] * dVar38)) * dVar76;
                uStack_140 = 0;
                uStack_120 = 0;
                local_118 = local_418;
                dStack_110 = dStack_410;
                local_108 = local_408;
                uStack_100 = 0x3ff0000000000000;
                dVar38 = dVar37 + dVar37;
                dVar70 = dVar71 + dVar71;
                dVar78 = dVar79 * (dVar79 + dVar79);
                local_1f8 = 1.0 - (dVar71 * dVar70 + dVar37 * dVar38);
                dStack_1d0 = 1.0 - (dVar71 * dVar70 + dVar78);
                local_1a8 = 1.0 - (dVar78 + dVar37 * dVar38);
                dStack_1b0 = (dVar79 + dVar79) * dVar75;
                dStack_1f0 = dVar38 * dVar79 + dVar70 * dVar75;
                local_1c8 = dVar70 * dVar37 + dStack_1b0;
                local_1d8 = dVar38 * dVar79 - dVar70 * dVar75;
                dStack_1b0 = dVar70 * dVar37 - dStack_1b0;
                local_1b8 = dVar38 * dVar75 + dVar79 * dVar70;
                local_1e8 = dVar79 * dVar70 - dVar38 * dVar75;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = local_328[0];
                dStack_190 = local_328[1];
                local_188 = local_328[2];
                uStack_180 = 0x3ff0000000000000;
                FUN_1447fea8d(local_2b8,&local_1f8);
                auVar39 = _DAT_149934d80;
                local_4e8 = (double)local_2a8._0_8_;
                dVar37 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                         (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                         (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
                dVar38 = local_288 * local_288 + local_298 * local_298 + dStack_290 * dStack_290;
                dVar78 = local_268 * local_268 + local_278 * local_278 + dStack_270 * dStack_270;
                uVar21 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
                dVar37 = (double)(~uVar21 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar37)) & uVar21);
                uVar21 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
                dVar38 = (double)(~uVar21 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar38)) & uVar21);
                uVar21 = -(ulonglong)(0.0 <= dVar78 + -9.99999993922529e-09);
                dVar78 = (double)(~uVar21 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar78)) & uVar21);
                auVar40._8_8_ = -(ulonglong)(0.0 <= dVar73);
                auVar40._0_8_ = -(ulonglong)(0.0 <= dVar69);
                auVar49 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar40);
                dVar69 = (double)(~-(ulonglong)(0.0 <= dVar76) & 0xbff0000000000000 |
                                 (ulonglong)
                                 ((uint)(-(ulonglong)(0.0 <= dVar76) >> 0x20) & 0x3ff00000) << 0x20)
                ;
                dVar73 = auVar49._0_8_;
                local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar37 * dVar73;
                local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar37 * dVar73;
                local_2a8._0_8_ = dVar37 * (double)local_2a8._0_8_ * dVar73;
                dVar37 = auVar49._8_8_;
                local_288 = dVar38 * local_288 * dVar37;
                dStack_290 = dStack_290 * dVar38 * dVar37;
                local_298 = dVar37 * local_298 * dVar38;
                local_268 = dVar78 * local_268 * dVar69;
                dStack_270 = dStack_270 * dVar78 * dVar69;
                local_278 = dVar69 * local_278 * dVar78;
                local_4d8 = auVar61;
                FUN_14481fd10(&local_2d8,local_2b8);
                dVar37 = local_2c8 * local_2c8 + local_2d8 * local_2d8;
                dVar38 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
                auVar55._0_8_ = dVar37 + dVar38;
                auVar55._8_8_ = dVar37 + dVar38;
                auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
                auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
                auVar61 = sqrtpd(auVar55,auVar55);
                auVar61 = divpd(auVar39,auVar61);
                auVar66._0_8_ = auVar61._0_8_ * local_2c8;
                auVar66._8_8_ = auVar61._8_8_ * dStack_2c0;
                local_2b8._0_8_ =
                     (ulonglong)(local_2d8 * auVar61._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
                local_2b8._8_8_ =
                     (ulonglong)(dStack_2d0 * auVar61._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
                local_2a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar41);
                dVar37 = local_248;
                dVar38 = local_258;
                dVar69 = dStack_250;
              }
              FUN_1448052ee(local_2b8,local_328 + 3);
              local_348 = local_4c8;
              local_340 = dVar76;
              local_328[0] = dVar38;
              local_328[1] = dVar69;
              local_328[2] = dVar37;
              FUN_140418cba(&local_338,local_350,0,0);
              local_298 = 0.0;
              dStack_290 = 0.0;
              local_2a8 = ZEXT816(0);
              local_2b8 = ZEXT816(0);
              local_288 = (double)((ulonglong)local_288 & 0xffffffffffffff00);
              local_500 = *(undefined4 *)pauVar34[2];
              local_510 = *(undefined4 *)(pauVar34[1] + 8);
              local_508 = *(undefined4 *)(pauVar34[1] + 0xc);
              local_518 = pauVar34[-2] + 8;
              FUN_142414030(local_2b8,&DAT_14c846480);
              uVar21 = local_3a8;
              dVar69 = (dStack_290 - (double)local_2a8._0_8_) * 0.5;
              dVar38 = (local_298 - (double)local_2b8._8_8_) * 0.5;
              dVar37 = ((double)local_2a8._8_8_ - (double)local_2b8._0_8_) * 0.5;
              dVar37 = dVar69 * dVar69 + dVar37 * dVar37 + dVar38 * dVar38;
              lVar30 = (longlong)(int)local_3a8;
              uVar23 = (int)local_3a8 + 1;
              local_3a8 = CONCAT44(local_3a8._4_4_,uVar23);
              dStack_330 = dVar37;
              if (local_3a8._4_4_ < uVar23) {
                FUN_1471029fa(&lStack_3b0,uVar21 & 0xffffffff);
              }
              puVar1 = (undefined8 *)(lStack_3b0 + lVar30 * 0x58);
              puVar1[1] = dVar37;
              *puVar1 = &PTR_LAB_14a1e1978;
              pdVar33 = local_328;
              pdVar26 = (double *)(puVar1 + 2);
              for (lVar30 = 9; lVar30 != 0; lVar30 = lVar30 + -1) {
                *pdVar26 = *pdVar33;
                pdVar33 = pdVar33 + 1;
                pdVar26 = pdVar26 + 1;
              }
              pauVar34 = pauVar34 + 7;
              lVar24 = lVar24 + -0x70;
              plVar25 = (longlong *)0x0;
              param_2 = local_460;
              if (lVar24 == 0) break;
              plVar25 = (longlong *)0x0;
            }
          }
        }
        iVar15 = *(int *)(lVar19 + 0x60);
        iVar27 = (int)local_398 + iVar15;
        if (iVar27 < 0) {
LAB_140ac9f61:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar27);
        }
        if ((int)local_398._4_4_ < iVar27) {
          plVar25 = &lStack_3a0;
          FUN_14499bdc2();
          iVar15 = *(int *)(lVar19 + 0x60);
        }
        if (iVar15 != 0) {
          pauVar34 = (undefined1 (*) [16])(*(longlong *)(lVar19 + 0x58) + 0x48);
          lVar24 = (longlong)iVar15 * 0x68;
          do {
            uVar18 = SUB84(plVar25,0);
            local_4c8 = (double)*(float *)(pauVar34[1] + 8);
            local_4d8._0_8_ = (double)*(float *)(pauVar34[1] + 0xc);
            local_4b8 = *(double *)(pauVar34[-2] + 8);
            dStack_4b0 = *(double *)pauVar34[-1];
            auVar61 = *pauVar34;
            auVar39 = divpd(auVar61,_DAT_1499387d0);
            auVar52._8_8_ = 0;
            auVar52._0_8_ = *(double *)pauVar34[1];
            auVar49 = divpd(auVar52,_DAT_1499387d0);
            auVar39 = roundpd(auVar39,auVar39,3);
            auVar49 = roundpd(auVar49,auVar49,3);
            dVar37 = (auVar61._0_8_ - auVar39._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar38 = (auVar61._8_8_ - auVar39._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar77 = (*(double *)pauVar34[1] - auVar49._0_8_ * (double)DAT_1499387d0) *
                     0.008726646259971648;
            dVar79 = (0.0 - auVar49._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            local_4a8._8_8_ = 0;
            local_4a8._0_8_ = *(ulonglong *)(pauVar34[-1] + 8);
            sin(dVar37);
            sin(dVar38);
            sin(dVar77);
            sin(dVar79);
            cos(dVar37);
            cos(dVar38);
            cos(dVar77);
            cos(dVar79);
            dVar69 = local_3e8;
            local_498._8_8_ = dStack_3f0;
            local_498._0_8_ = local_3f8;
            auVar10._8_8_ = uStack_3e0;
            auVar10._0_8_ = local_3e8;
            local_4e8 = dStack_3f0;
            dStack_4e0 = 0.0;
            dVar73 = sin(dVar37);
            dVar76 = sin(dVar38);
            dVar78 = sin(dVar77);
            sin(dVar79);
            dVar70 = cos(dVar37);
            dVar74 = cos(dVar38);
            dVar77 = cos(dVar77);
            cos(dVar79);
            dVar37 = local_498._0_8_;
            dVar38 = local_498._8_8_;
            dVar71 = -(dVar74 * dVar73 * dVar78) + dVar76 * dVar70 * dVar77;
            dVar75 = dVar76 * dVar73 * dVar78 + dVar74 * dVar70 * dVar77;
            dVar79 = dVar73 * dVar76 * dVar77 - dVar70 * dVar74 * dVar78;
            dVar73 = -(dVar73 * dVar74 * dVar77) - dVar70 * dVar76 * dVar78;
            auVar61 = minpd(_DAT_149934d80,local_498._0_16_);
            auVar39 = minpd(ZEXT816(0x3ff0000000000000),auVar10);
            auVar53._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
            auVar53._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
            iVar15 = movmskpd(extraout_EAX_00,auVar53);
            auVar56._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
            auVar56._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
            uVar23 = movmskpd(uVar18,auVar56);
            if ((uVar23 & 0x3fffffff) == 0 && iVar15 == 0) {
              local_2b8._0_8_ =
                   dVar73 * local_438[2] * -1.0 +
                   dVar71 * local_438[1] + dVar75 * local_438[0] * 1.0 + dVar79 * local_438[3];
              local_2b8._8_8_ =
                   dVar79 * local_438[2] * 1.0 +
                   dVar75 * local_438[1] + dVar71 * local_438[0] * -1.0 + dVar73 * local_438[3];
              local_2a8._0_8_ =
                   dVar75 * local_438[2] * 1.0 +
                   ((local_438[0] * dVar73 * 1.0 + dVar71 * local_438[3]) - dVar79 * local_438[1]);
              local_2a8._8_8_ =
                   dVar71 * local_438[2] * -1.0 +
                   ((local_438[0] * dVar79 * -1.0 + dVar75 * local_438[3]) - dVar73 * local_438[1]);
              dVar76 = local_4b8 * dVar37;
              dVar38 = dStack_4b0 * dVar38;
              dVar73 = (double)local_4a8._0_8_ * dVar69;
              dVar78 = dVar38 * local_438[0] - dVar76 * local_438[1];
              dVar70 = dVar73 * local_438[1] - dVar38 * local_438[2];
              dVar74 = dVar76 * local_438[2] - dVar73 * local_438[0];
              dVar70 = dVar70 + dVar70;
              dVar74 = dVar74 + dVar74;
              dVar78 = dVar78 + dVar78;
              dVar73 = (dVar74 * local_438[0] - local_438[1] * dVar70) +
                       local_438[3] * dVar78 + dVar73 + local_408;
              dVar76 = (dVar78 * local_438[1] - local_438[2] * dVar74) +
                       local_438[3] * dVar70 + dVar76 + local_418;
              dVar38 = (dVar70 * local_438[2] - dVar78 * local_438[0]) +
                       local_438[3] * dVar74 + dVar38 + dStack_410;
            }
            else {
              dVar76 = local_438[1] + local_438[1];
              dVar78 = local_438[2] + local_438[2];
              dVar74 = local_438[0] * (local_438[0] + local_438[0]);
              local_178 = (1.0 - (local_438[2] * dVar78 + local_438[1] * dVar76)) * dVar37;
              dStack_150 = (1.0 - (local_438[2] * dVar78 + dVar74)) * dVar38;
              dVar70 = (local_438[0] + local_438[0]) * local_438[3];
              local_158 = (dVar76 * local_438[0] - dVar78 * local_438[3]) * dVar38;
              dStack_130 = (dVar78 * local_438[1] - dVar70) * dVar69;
              local_138 = (dVar76 * local_438[3] + local_438[0] * dVar78) * dVar69;
              dStack_170 = (dVar76 * local_438[0] + dVar78 * local_438[3]) * dVar37;
              local_148 = (dVar78 * local_438[1] + dVar70) * dVar38;
              local_168 = (local_438[0] * dVar78 - dVar76 * local_438[3]) * dVar37;
              dStack_160 = 0.0;
              local_128 = (1.0 - (dVar74 + local_438[1] * dVar76)) * dVar69;
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = local_418;
              dStack_110 = dStack_410;
              local_108 = local_408;
              uStack_100 = 0x3ff0000000000000;
              dVar76 = dVar73 + dVar73;
              dVar70 = dVar71 + dVar71;
              dVar78 = dVar79 * (dVar79 + dVar79);
              local_1f8 = 1.0 - (dVar71 * dVar70 + dVar73 * dVar76);
              dStack_1d0 = 1.0 - (dVar71 * dVar70 + dVar78);
              local_1a8 = 1.0 - (dVar78 + dVar73 * dVar76);
              dStack_1b0 = (dVar79 + dVar79) * dVar75;
              dStack_1f0 = dVar76 * dVar79 + dVar70 * dVar75;
              local_1c8 = dVar70 * dVar73 + dStack_1b0;
              local_1d8 = dVar76 * dVar79 - dVar70 * dVar75;
              dStack_1b0 = dVar70 * dVar73 - dStack_1b0;
              local_1b8 = dVar76 * dVar75 + dVar79 * dVar70;
              local_1e8 = dVar79 * dVar70 - dVar76 * dVar75;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_4b8;
              dStack_190 = dStack_4b0;
              local_188 = (double)local_4a8._0_8_;
              uStack_180 = 0x3ff0000000000000;
              FUN_1447fea8d(local_2b8,&local_1f8);
              auVar61 = _DAT_149934d80;
              local_4b8 = (double)local_2a8._0_8_;
              dVar76 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                       (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                       (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
              dVar78 = local_288 * local_288 + local_298 * local_298 + dStack_290 * dStack_290;
              dVar73 = local_268 * local_268 + local_278 * local_278 + dStack_270 * dStack_270;
              uVar21 = -(ulonglong)(0.0 <= dVar76 + -9.99999993922529e-09);
              dVar76 = (double)(~uVar21 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar76)) & uVar21);
              uVar21 = -(ulonglong)(0.0 <= dVar78 + -9.99999993922529e-09);
              dVar78 = (double)(~uVar21 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar78)) & uVar21);
              uVar21 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
              dVar73 = (double)(~uVar21 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar73)) & uVar21);
              auVar43._8_8_ = -(ulonglong)(0.0 <= dVar38);
              auVar43._0_8_ = -(ulonglong)(0.0 <= dVar37);
              auVar39 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar43);
              dVar38 = (double)(~-(ulonglong)(0.0 <= dVar69) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= dVar69) & 0x3ff0000000000000);
              dVar70 = auVar39._0_8_;
              local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar76 * dVar70;
              local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar76 * dVar70;
              local_2a8._0_8_ = dVar76 * (double)local_2a8._0_8_ * dVar70;
              dVar76 = auVar39._8_8_;
              local_288 = dVar78 * local_288 * dVar76;
              dStack_290 = dStack_290 * dVar78 * dVar76;
              local_298 = dVar76 * local_298 * dVar78;
              local_268 = dVar73 * local_268 * dVar38;
              dStack_270 = dStack_270 * dVar73 * dVar38;
              local_278 = dVar38 * local_278 * dVar73;
              local_4a8 = auVar10;
              FUN_14481fd10(&local_338,local_2b8);
              dVar38 = local_328[0] * local_328[0] + (double)local_338 * (double)local_338;
              dVar73 = local_328[1] * local_328[1] + dStack_330 * dStack_330;
              auVar60._0_8_ = dVar38 + dVar73;
              auVar60._8_8_ = dVar38 + dVar73;
              auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
              auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
              auVar39 = sqrtpd(auVar60,auVar60);
              auVar61 = divpd(auVar61,auVar39);
              auVar64._0_8_ = auVar61._0_8_ * local_328[0];
              auVar64._8_8_ = auVar61._8_8_ * local_328[1];
              local_2b8._0_8_ =
                   (ulonglong)((double)local_338 * auVar61._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
              local_2b8._8_8_ =
                   (ulonglong)(dStack_330 * auVar61._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
              local_2a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar44);
              dVar73 = local_248;
              dVar76 = local_258;
              dVar38 = dStack_250;
            }
            FUN_1448052ee(local_2b8,&local_178);
            dVar77 = local_168;
            dVar74 = dStack_170;
            dVar70 = local_178;
            local_298 = 0.0;
            dStack_290 = 0.0;
            local_2a8 = ZEXT816(0);
            local_2b8 = ZEXT816(0);
            local_288 = (double)((ulonglong)local_288 & 0xffffffffffffff00);
            local_510 = *(undefined4 *)(pauVar34[1] + 8);
            local_508 = *(undefined4 *)(pauVar34[1] + 0xc);
            local_518 = pauVar34[-2] + 8;
            FUN_142414180(local_2b8,&DAT_14c846480);
            uVar21 = local_398;
            dVar79 = dStack_290 - (double)local_2a8._0_8_;
            dVar71 = local_298 - (double)local_2b8._8_8_;
            dVar78 = (double)local_2a8._8_8_ - (double)local_2b8._0_8_;
            lVar30 = (longlong)(int)local_398;
            uVar23 = (int)local_398 + 1;
            local_398 = CONCAT44(local_398._4_4_,uVar23);
            if (local_398._4_4_ < uVar23) {
              FUN_147102a90(&lStack_3a0,uVar21 & 0xffffffff);
            }
            dVar37 = (double)(~-(ulonglong)(ABS(dVar37) < ABS(local_4e8)) & (ulonglong)dVar37 |
                             (ulonglong)local_4e8 & -(ulonglong)(ABS(dVar37) < ABS(local_4e8))) *
                     local_4c8;
            if (dVar37 <= 0.0) {
              dVar37 = 0.0;
            }
            dVar75 = (local_4c8 - dVar37) + dVar69 * (double)local_4d8._0_8_;
            dVar69 = 0.0;
            if (0.0 <= dVar75) {
              dVar69 = dVar75;
            }
            dVar71 = dVar71 * 0.5;
            dVar78 = dVar78 * 0.5;
            dVar79 = dVar79 * 0.5;
            plVar25 = (longlong *)(lVar30 * 0x50);
            *(double *)(lStack_3a0 + 8 + (longlong)plVar25) =
                 dVar79 * dVar79 + dVar78 * dVar78 + dVar71 * dVar71;
            *(undefined ***)(lStack_3a0 + (longlong)plVar25) = &PTR_LAB_14a1e1948;
            pdVar33 = (double *)(lStack_3a0 + 0x10 + (longlong)plVar25);
            *pdVar33 = dVar76;
            pdVar33[1] = dVar38;
            *(double *)(lStack_3a0 + 0x20 + (longlong)plVar25) = dVar73;
            *(double *)(lStack_3a0 + 0x28 + (longlong)plVar25) = dVar70;
            *(double *)(lStack_3a0 + 0x30 + (longlong)plVar25) = dVar74;
            *(double *)(lStack_3a0 + 0x38 + (longlong)plVar25) = dVar77;
            *(double *)(lStack_3a0 + 0x40 + (longlong)plVar25) = dVar37;
            *(double *)(lStack_3a0 + 0x48 + (longlong)plVar25) = dVar69;
            pauVar34 = (undefined1 (*) [16])(pauVar34[6] + 8);
            lVar24 = lVar24 + -0x68;
          } while (lVar24 != 0);
        }
        uVar18 = SUB84(plVar25,0);
        iVar15 = *(int *)(lVar19 + 0x40);
        iVar27 = (int)local_3b8 + iVar15;
        if (iVar27 < 0) goto LAB_140ac9f61;
        if ((int)local_3b8._4_4_ < iVar27) {
          uVar18 = SUB84(&lStack_3c0,0);
          FUN_1404186bc();
          iVar15 = *(int *)(lVar19 + 0x40);
        }
        dVar69 = local_3e8;
        dVar38 = dStack_3f0;
        dVar37 = local_3f8;
        if (iVar15 != 0) {
          lVar24 = *(longlong *)(lVar19 + 0x38);
          auVar8._8_8_ = dStack_3f0;
          auVar8._0_8_ = local_3f8;
          auVar11._8_8_ = uStack_3e0;
          auVar11._0_8_ = local_3e8;
          uVar80 = (undefined4)DAT_149934d80;
          uVar81 = DAT_149934d80._4_4_;
          uVar82 = DAT_149934d80._8_4_;
          uVar83 = DAT_149934d80._12_4_;
          auVar61 = minpd(_DAT_149934d80,auVar8);
          auVar39 = minpd(ZEXT816(0x3ff0000000000000),auVar11);
          auVar54._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
          auVar54._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
          iVar16 = movmskpd(uVar18,auVar54);
          auVar57._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar57._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          iVar27 = movmskpd(iVar27,auVar57);
          local_4c8 = local_438[0];
          dStack_4c0 = local_438[1];
          local_4d8._8_8_ = local_438[3];
          local_4d8._0_8_ = local_438[2];
          local_4e8 = local_418;
          dStack_4e0 = dStack_410;
          local_4b8 = local_408;
          dStack_4b0 = dStack_400;
          local_4a8._8_8_ = local_438[3];
          local_4a8._0_8_ = local_438[3];
          uVar21 = -(ulonglong)(ABS(local_3e8) <= ABS(local_3f8));
          uVar47 = uVar21 & (ulonglong)local_3f8;
          uVar59 = ~uVar21 & (ulonglong)local_3e8;
          uVar21 = -(ulonglong)(ABS(local_3f8) < ABS(dStack_3f0));
          uVar72 = uVar21 & (ulonglong)dStack_3f0;
          lVar30 = (longlong)iVar15 * 0x50;
          do {
            fVar2 = *(float *)(lVar24 + 0x48);
            if (iVar16 + iVar27 * 4 == 0) {
              dVar73 = *(double *)(lVar24 + 0x30) * dVar37;
              dVar76 = *(double *)(lVar24 + 0x38) * dVar38;
              dVar78 = *(double *)(lVar24 + 0x40) * dVar69;
              dVar74 = dVar76 * local_4c8 - dVar73 * dStack_4c0;
              dVar77 = dVar78 * dStack_4c0 - dVar76 * (double)local_4d8._0_8_;
              dVar70 = dVar73 * (double)local_4d8._0_8_ - dVar78 * local_4c8;
              dVar77 = dVar77 + dVar77;
              dVar70 = dVar70 + dVar70;
              dVar74 = dVar74 + dVar74;
              dVar73 = (dVar74 * dStack_4c0 - (double)local_4d8._0_8_ * dVar70) +
                       (double)local_4a8._0_8_ * dVar77 + dVar73 + local_4e8;
              dVar76 = (dVar77 * (double)local_4d8._0_8_ - dVar74 * local_4c8) +
                       (double)local_4a8._8_8_ * dVar70 + dVar76 + dStack_4e0;
              dVar78 = (dVar70 * local_4c8 - dStack_4c0 * dVar77) +
                       (double)local_4a8._0_8_ * dVar74 + dVar78 + local_4b8;
            }
            else {
              dVar76 = dStack_4c0 + dStack_4c0;
              dVar70 = (double)local_4d8._0_8_ + (double)local_4d8._0_8_;
              dVar78 = local_4c8 * (local_4c8 + local_4c8);
              local_178 = ((double)CONCAT44(uVar81,uVar80) -
                          ((double)local_4d8._0_8_ * dVar70 + dStack_4c0 * dVar76)) * dVar37;
              dStack_150 = ((double)CONCAT44(uVar83,uVar82) -
                           ((double)local_4d8._0_8_ * dVar70 + dVar78)) * dVar38;
              dVar74 = (local_4c8 + local_4c8) * (double)local_4a8._8_8_;
              local_138 = (dVar76 * (double)local_4a8._0_8_ + local_4c8 * dVar70) * dVar69;
              local_158 = (dVar76 * local_4c8 - dVar70 * (double)local_4a8._0_8_) * dVar38;
              dStack_130 = (dVar70 * dStack_4c0 - dVar74) * dVar69;
              auVar42._8_8_ = -(ulonglong)(0.0 <= dVar38);
              auVar42._0_8_ = -(ulonglong)(0.0 <= dVar37);
              auVar7._4_4_ = uVar81;
              auVar7._0_4_ = uVar80;
              auVar7._8_4_ = uVar82;
              auVar7._12_4_ = uVar83;
              local_458 = blendvpd(_DAT_149936790,auVar7,auVar42);
              dVar73 = (double)(~-(ulonglong)(0.0 <= dVar69) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= dVar69) & 0x3ff0000000000000);
              dStack_170 = (dVar76 * local_4c8 + dVar70 * (double)local_4a8._0_8_) * dVar37;
              local_148 = (dVar70 * dStack_4c0 + dVar74) * dVar38;
              local_168 = (local_4c8 * dVar70 - dVar76 * (double)local_4a8._0_8_) * dVar37;
              dStack_160 = 0.0;
              uStack_140 = 0;
              local_128 = (1.0 - (dVar78 + dStack_4c0 * dVar76)) * dVar69;
              uStack_120 = 0;
              local_118 = local_4e8;
              dStack_110 = dStack_4e0;
              local_108 = local_4b8;
              uStack_100 = 0x3ff0000000000000;
              local_1f8 = 1.0;
              dStack_1f0 = 0.0;
              local_1e8 = 0.0;
              uStack_1e0 = 0;
              local_1d8 = 0.0;
              dStack_1d0 = 1.0;
              local_1c8 = 0.0;
              uStack_1c0 = 0;
              local_1b8 = 0.0;
              dStack_1b0 = 0.0;
              local_1a8 = 1.0;
              uStack_1a0 = 0;
              uStack_180 = 0x3ff0000000000000;
              local_448 = local_458._8_8_;
              dStack_440 = local_448;
              local_198 = *(double *)(lVar24 + 0x30);
              dStack_190 = *(double *)(lVar24 + 0x38);
              local_188 = *(double *)(lVar24 + 0x40);
              FUN_1447fea8d(local_2b8,&local_1f8,&local_178);
              local_470 = (double)local_2b8._8_8_;
              local_468 = (double)local_2a8._0_8_;
              dVar76 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                       (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                       (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
              local_478 = local_288;
              dVar78 = local_288 * local_288 + local_298 * local_298 + dStack_290 * dStack_290;
              local_480 = local_268;
              dVar70 = local_268 * local_268 + local_278 * local_278 + dStack_270 * dStack_270;
              uVar36 = -(ulonglong)(0.0 <= dVar76 + -9.99999993922529e-09);
              dVar76 = (double)(~uVar36 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar76)) & uVar36);
              uVar36 = -(ulonglong)(0.0 <= dVar78 + -9.99999993922529e-09);
              dVar78 = (double)(~uVar36 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar78)) & uVar36);
              uVar80 = 0;
              uVar81 = 0x3ff00000;
              uVar82 = 0;
              uVar83 = 0x3ff00000;
              uVar36 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
              dVar70 = (double)(~uVar36 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar70)) & uVar36);
              local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar76 * (double)local_458._0_8_;
              local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar76 * (double)local_458._0_8_;
              local_2a8._0_8_ = dVar76 * (double)local_2a8._0_8_ * (double)local_458._0_8_;
              local_288 = dVar78 * local_288 * local_448;
              dStack_290 = dStack_290 * dVar78 * local_448;
              local_298 = local_298 * dVar78 * local_448;
              local_268 = dVar70 * local_268 * dVar73;
              dStack_270 = dStack_270 * dVar70 * dVar73;
              local_278 = local_278 * dVar70 * dVar73;
              FUN_14481fd10(&local_338,local_2b8);
              dVar73 = local_258;
              dVar76 = dStack_250;
              dVar78 = local_248;
            }
            FUN_14016be34(lVar24,local_2b8);
            uVar36 = local_3b8;
            dVar74 = dStack_290 - (double)local_2a8._0_8_;
            dVar70 = local_298 - (double)local_2b8._8_8_;
            dVar77 = (double)local_2a8._8_8_ - (double)local_2b8._0_8_;
            lVar28 = (longlong)(int)local_3b8;
            uVar23 = (int)local_3b8 + 1;
            local_3b8 = CONCAT44(local_3b8._4_4_,uVar23);
            if (local_3b8._4_4_ < uVar23) {
              FUN_14174450c(&lStack_3c0,uVar36 & 0xffffffff);
            }
            dVar79 = (double)fVar2 * (double)(uVar72 | ~uVar21 & (uVar59 | uVar47));
            if (dVar79 <= 0.0) {
              dVar79 = 0.0;
            }
            dVar74 = dVar74 * 0.5;
            dVar70 = dVar70 * 0.5;
            dVar77 = dVar77 * 0.5;
            lVar28 = lVar28 * 0x30;
            *(double *)(lStack_3c0 + 8 + lVar28) =
                 dVar74 * dVar74 + dVar77 * dVar77 + dVar70 * dVar70;
            *(undefined ***)(lStack_3c0 + lVar28) = &PTR_LAB_14a1e1938;
            pdVar33 = (double *)(lStack_3c0 + 0x10 + lVar28);
            *pdVar33 = dVar73;
            pdVar33[1] = dVar76;
            *(double *)(lStack_3c0 + 0x20 + lVar28) = dVar78;
            *(double *)(lStack_3c0 + 0x28 + lVar28) = dVar79;
            lVar24 = lVar24 + 0x50;
            lVar30 = lVar30 + -0x50;
          } while (lVar30 != 0);
        }
        iVar15 = *(int *)(lVar19 + 0x80);
        iVar27 = (int)local_378 + iVar15;
        if (iVar27 < 0) goto LAB_140ac9f61;
        if ((int)local_378._4_4_ < iVar27) {
          FUN_147102b2a(&lStack_380);
          iVar15 = *(int *)(lVar19 + 0x80);
        }
        if (iVar15 != 0) {
          lVar24 = (longlong)iVar15 * 0x70;
          pdVar33 = (double *)(*(longlong *)(lVar19 + 0x78) + 0x48);
          do {
            fVar2 = *(float *)(pdVar33 + 3);
            fVar3 = *(float *)((longlong)pdVar33 + 0x1c);
            dVar37 = (double)fVar2;
            if (fVar2 <= fVar3) {
              fVar2 = fVar3;
            }
            dStack_330 = (double)(fVar2 + *(float *)(pdVar33 + 4));
            local_338 = &PTR_LAB_14a1e1968;
            local_328[2] = pdVar33[-1];
            local_328[0] = pdVar33[-3];
            local_328[1] = pdVar33[-2];
            local_300 = pdVar33[2];
            pdVar26 = local_328 + 3;
            local_328[3] = *pdVar33;
            dStack_308 = pdVar33[1];
            local_2f0 = (double)fVar3;
            local_4d8._0_8_ = local_2f0;
            local_4c8 = (double)*(float *)(pdVar33 + 4);
            local_2f8 = dVar37;
            local_2e8 = local_4c8;
            FUN_144a7484c(pdVar33,local_2b8);
            dVar73 = local_3e8;
            dVar69 = dStack_3f0;
            dVar38 = local_3f8;
            auVar9._8_8_ = dStack_3f0;
            auVar9._0_8_ = local_3f8;
            auVar12._8_8_ = uStack_3e0;
            auVar12._0_8_ = local_3e8;
            uVar18 = FUN_144a7484c(pdVar26,local_2b8);
            auVar61 = _DAT_149934d80;
            local_4e8 = local_328[2];
            dStack_4e0 = 0.0;
            auVar39 = minpd(_DAT_149934d80,auVar9);
            auVar49 = minpd(ZEXT816(0x3ff0000000000000),auVar12);
            auVar65._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
            auVar65._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
            iVar15 = movmskpd(uVar18,auVar65);
            auVar68._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
            auVar68._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
            uVar23 = movmskpd((int)pdVar26,auVar68);
            if ((uVar23 & 0x3fffffff) == 0 && iVar15 == 0) {
              dVar77 = local_438[0] * (double)local_2b8._8_8_;
              dVar79 = local_438[0] * (double)local_2b8._0_8_;
              dVar76 = (double)local_2b8._0_8_ * local_438[1];
              dVar78 = (double)local_2b8._8_8_ * local_438[1];
              dVar70 = (double)local_2b8._0_8_ * local_438[2];
              dVar74 = (double)local_2a8._0_8_ * local_438[2];
              local_2b8._0_8_ =
                   (double)local_2b8._8_8_ * local_438[2] * -1.0 +
                   (double)local_2a8._0_8_ * local_438[1] +
                   (double)local_2a8._8_8_ * local_438[0] * 1.0 +
                   (double)local_2b8._0_8_ * local_438[3];
              local_2b8._8_8_ =
                   dVar70 * 1.0 +
                   (double)local_2a8._8_8_ * local_438[1] +
                   (double)local_2a8._0_8_ * local_438[0] * -1.0 +
                   (double)local_2b8._8_8_ * local_438[3];
              local_2a8._0_8_ =
                   (double)local_2a8._8_8_ * local_438[2] * 1.0 +
                   ((dVar77 * 1.0 + (double)local_2a8._0_8_ * local_438[3]) - dVar76);
              local_2a8._8_8_ =
                   dVar74 * -1.0 +
                   ((dVar79 * -1.0 + (double)local_2a8._8_8_ * local_438[3]) - dVar78);
              dVar78 = dVar38 * local_328[0];
              dVar70 = dVar69 * local_328[1];
              dVar74 = dVar73 * local_328[2];
              dVar76 = dVar70 * local_438[0] - dVar78 * local_438[1];
              dVar77 = dVar74 * local_438[1] - dVar70 * local_438[2];
              dVar79 = dVar78 * local_438[2] - dVar74 * local_438[0];
              dVar77 = dVar77 + dVar77;
              dVar79 = dVar79 + dVar79;
              dVar76 = dVar76 + dVar76;
              dVar78 = (dVar76 * local_438[1] - local_438[2] * dVar79) +
                       local_438[3] * dVar77 + dVar78 + local_418;
              dVar70 = (dVar77 * local_438[2] - dVar76 * local_438[0]) +
                       local_438[3] * dVar79 + dVar70 + dStack_410;
              dVar76 = (dVar79 * local_438[0] - local_438[1] * dVar77) +
                       local_438[3] * dVar76 + dVar74 + local_408;
            }
            else {
              dVar78 = local_438[1] + local_438[1];
              dVar70 = local_438[2] + local_438[2];
              dVar76 = local_438[0] * (local_438[0] + local_438[0]);
              local_178 = (1.0 - (local_438[2] * dVar70 + local_438[1] * dVar78)) * dVar38;
              dStack_150 = (1.0 - (local_438[2] * dVar70 + dVar76)) * dVar69;
              dVar74 = (local_438[0] + local_438[0]) * local_438[3];
              local_158 = (dVar78 * local_438[0] - dVar70 * local_438[3]) * dVar69;
              dStack_130 = (dVar70 * local_438[1] - dVar74) * dVar73;
              local_138 = (dVar78 * local_438[3] + local_438[0] * dVar70) * dVar73;
              dStack_170 = (dVar78 * local_438[0] + dVar70 * local_438[3]) * dVar38;
              local_148 = (dVar70 * local_438[1] + dVar74) * dVar69;
              local_168 = (local_438[0] * dVar70 - dVar78 * local_438[3]) * dVar38;
              dStack_160 = 0.0;
              local_128 = (1.0 - (dVar76 + local_438[1] * dVar78)) * dVar73;
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = local_418;
              dStack_110 = dStack_410;
              local_108 = local_408;
              uStack_100 = 0x3ff0000000000000;
              dVar76 = (double)local_2b8._8_8_ + (double)local_2b8._8_8_;
              dVar70 = (double)local_2a8._0_8_ + (double)local_2a8._0_8_;
              dVar78 = (double)local_2b8._0_8_ * ((double)local_2b8._0_8_ + (double)local_2b8._0_8_)
              ;
              local_1f8 = (double)DAT_149934d80 -
                          ((double)local_2a8._0_8_ * dVar70 + (double)local_2b8._8_8_ * dVar76);
              dStack_1d0 = DAT_149934d80._8_8_ - ((double)local_2a8._0_8_ * dVar70 + dVar78);
              local_1a8 = 1.0 - (dVar78 + (double)local_2b8._8_8_ * dVar76);
              dStack_1b0 = ((double)local_2b8._0_8_ + (double)local_2b8._0_8_) *
                           (double)local_2a8._8_8_;
              dStack_1f0 = dVar76 * (double)local_2b8._0_8_ + dVar70 * (double)local_2a8._8_8_;
              local_1c8 = dVar70 * (double)local_2b8._8_8_ + dStack_1b0;
              local_1d8 = dVar76 * (double)local_2b8._0_8_ - dVar70 * (double)local_2a8._8_8_;
              dStack_1b0 = dVar70 * (double)local_2b8._8_8_ - dStack_1b0;
              local_1b8 = dVar76 * (double)local_2a8._8_8_ + (double)local_2b8._0_8_ * dVar70;
              local_1e8 = (double)local_2b8._0_8_ * dVar70 - dVar76 * (double)local_2a8._8_8_;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_328[0];
              dStack_190 = local_328[1];
              local_188 = local_328[2];
              uStack_180 = 0x3ff0000000000000;
              FUN_1447fea8d(local_2b8,&local_1f8,&local_178);
              FUN_144a1c686(local_2b8,0x3e45798ee0000000);
              auVar45._8_8_ = -(ulonglong)(0.0 <= dVar69);
              auVar45._0_8_ = -(ulonglong)(0.0 <= dVar38);
              auVar39 = blendvpd(_DAT_149936790,auVar61,auVar45);
              dVar76 = (double)(~-(ulonglong)(0.0 <= dVar73) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= dVar73) & 0x3ff0000000000000);
              dVar78 = auVar39._0_8_;
              local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar78;
              local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar78;
              local_2a8._0_8_ = (double)local_2a8._0_8_ * dVar78;
              dVar78 = auVar39._8_8_;
              local_288 = local_288 * dVar78;
              dStack_290 = dStack_290 * dVar78;
              local_298 = dVar78 * local_298;
              local_268 = local_268 * dVar76;
              dStack_270 = dStack_270 * dVar76;
              local_278 = dVar76 * local_278;
              FUN_14481fd10(&local_2d8,local_2b8);
              dVar76 = local_2c8 * local_2c8 + local_2d8 * local_2d8;
              dVar78 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
              auVar58._0_8_ = dVar76 + dVar78;
              auVar58._8_8_ = dVar76 + dVar78;
              auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
              auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
              auVar39 = sqrtpd(auVar58,auVar58);
              auVar61 = divpd(auVar61,auVar39);
              auVar62._0_8_ = auVar61._0_8_ * local_2c8;
              auVar62._8_8_ = auVar61._8_8_ * dStack_2c0;
              local_2b8._0_8_ =
                   (ulonglong)(local_2d8 * auVar61._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
              local_2b8._8_8_ =
                   (ulonglong)(dStack_2d0 * auVar61._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
              local_2a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar46);
              dVar76 = local_248;
              dVar78 = local_258;
              dVar70 = dStack_250;
            }
            FUN_1448052ee(local_2b8,local_328 + 3);
            local_2f8 = dVar38 * dVar37;
            if (dVar38 * dVar37 <= 0.0) {
              local_2f8 = 0.0;
            }
            local_2f0 = dVar69 * (double)local_4d8._0_8_;
            if (dVar69 * (double)local_4d8._0_8_ <= 0.0) {
              local_2f0 = 0.0;
            }
            dVar37 = ((dVar37 - local_2f8) + ((double)local_4d8._0_8_ - local_2f0)) * 0.5 +
                     local_4c8 * dVar73;
            local_2e8 = 0.0;
            if (0.0 <= dVar37) {
              local_2e8 = dVar37;
            }
            local_328[0] = dVar78;
            local_328[1] = dVar70;
            local_328[2] = dVar76;
            FUN_1479b057c(pdVar33 + -9,local_2b8);
            uVar21 = local_378;
            dVar69 = (dStack_290 - (double)local_2a8._0_8_) * 0.5;
            dVar38 = (local_298 - (double)local_2b8._8_8_) * 0.5;
            dVar37 = ((double)local_2a8._8_8_ - (double)local_2b8._0_8_) * 0.5;
            dVar37 = dVar69 * dVar69 + dVar37 * dVar37 + dVar38 * dVar38;
            lVar30 = (longlong)(int)local_378;
            uVar23 = (int)local_378 + 1;
            local_378 = CONCAT44(local_378._4_4_,uVar23);
            dStack_330 = dVar37;
            if (local_378._4_4_ < uVar23) {
              FUN_147102b9e(&lStack_380,uVar21 & 0xffffffff);
            }
            puVar1 = (undefined8 *)(lStack_380 + lVar30 * 0x58);
            puVar1[1] = dVar37;
            *puVar1 = &PTR_LAB_14a1e1968;
            pdVar26 = local_328;
            pdVar31 = (double *)(puVar1 + 2);
            for (lVar30 = 9; lVar30 != 0; lVar30 = lVar30 + -1) {
              *pdVar31 = *pdVar26;
              pdVar26 = pdVar26 + 1;
              pdVar31 = pdVar31 + 1;
            }
            pdVar33 = pdVar33 + 0xe;
            lVar24 = lVar24 + -0x70;
          } while (lVar24 != 0);
        }
        iVar15 = *(int *)(lVar19 + 0x70);
        iVar27 = (int)local_388 + iVar15;
        if (iVar27 < 0) goto LAB_140ac9f61;
        if ((int)local_388._4_4_ < iVar27) {
          FUN_140acb1ca(&lStack_390);
          iVar15 = *(int *)(lVar19 + 0x70);
        }
        param_3 = local_4e9;
        if (iVar15 != 0) {
          lVar19 = *(longlong *)(lVar19 + 0x68);
          lVar24 = (longlong)iVar15 * 0x100 + lVar19;
          local_4e8 = local_418;
          dStack_4e0 = dStack_410;
          local_4b8 = local_408;
          local_4c8 = local_3f8;
          dStack_4c0 = dStack_3f0;
          local_4d8._8_8_ = uStack_3e0;
          local_4d8._0_8_ = local_3e8;
          dVar38 = local_3f8;
          dVar69 = dStack_3f0;
          dVar37 = local_3e8;
          do {
            if (*(int *)(lVar19 + 0x38) != 0) {
              FUN_140acae00(local_2b8);
              uVar21 = local_388;
              if ((int)local_2a8._8_4_ < 1) {
LAB_140ac9f3d:
                uVar80 = 0;
                uVar18 = 0;
                bVar35 = false;
                dVar73 = 0.0;
                dVar37 = 0.0;
                dVar38 = 0.0;
                dVar69 = 0.0;
                dVar76 = 0.0;
              }
              else {
                lVar30 = 0x10;
                lVar28 = 0;
                do {
                  pdVar33 = (double *)(local_2a8._0_8_ + -0x10 + lVar30);
                  dVar74 = *pdVar33 * dVar38;
                  dVar77 = pdVar33[1] * dVar69;
                  dVar73 = *(double *)(local_2a8._0_8_ + lVar30) * dVar37;
                  dVar76 = dVar77 * local_438[0] - local_438[1] * dVar74;
                  dVar78 = dVar73 * local_438[1] - local_438[2] * dVar77;
                  dVar70 = dVar74 * local_438[2] - local_438[0] * dVar73;
                  dVar78 = dVar78 + dVar78;
                  dVar70 = dVar70 + dVar70;
                  dVar76 = dVar76 + dVar76;
                  pdVar33 = (double *)(local_2a8._0_8_ + -0x10 + lVar30);
                  *pdVar33 = (dVar76 * local_438[1] - dVar70 * local_438[2]) +
                             local_438[3] * dVar78 + dVar74;
                  pdVar33[1] = (local_438[2] * dVar78 - local_438[0] * dVar76) +
                               local_438[3] * dVar70 + dVar77;
                  *(double *)(local_2a8._0_8_ + lVar30) =
                       dVar76 * local_438[3] + dVar73 +
                       (dVar70 * local_438[0] - dVar78 * local_438[1]);
                  lVar28 = lVar28 + 1;
                  lVar30 = lVar30 + 0x18;
                } while (lVar28 < (int)local_2a8._8_4_);
                if ((int)local_2a8._8_4_ < 1) goto LAB_140ac9f3d;
                bVar35 = true;
                uVar18 = 0;
                uVar80 = 0;
                lVar30 = 0;
                dVar73 = 0.0;
                dVar38 = 0.0;
                dVar69 = 0.0;
                auVar67 = ZEXT816(0);
                dVar78 = 0.0;
                do {
                  dVar37 = *(double *)(local_2a8._0_8_ + lVar30);
                  if (bVar35) {
                    dVar38 = *(double *)(local_2a8._0_8_ + 8 + lVar30);
                    uVar18 = SUB84(dVar38,0);
                    uVar80 = (undefined4)((ulonglong)dVar38 >> 0x20);
                    dVar69 = *(double *)(local_2a8._0_8_ + 0x10 + lVar30);
                    auVar67._8_8_ = 0;
                    auVar67._0_8_ = dVar37;
                    dVar73 = dVar69;
                  }
                  else {
                    if (dVar37 <= auVar67._0_8_) {
                      auVar67._0_8_ = dVar37;
                    }
                    dVar76 = *(double *)(local_2a8._0_8_ + 8 + lVar30);
                    dVar70 = *(double *)(local_2a8._0_8_ + 0x10 + lVar30);
                    if (dVar76 <= (double)CONCAT44(uVar80,uVar18)) {
                      uVar18 = SUB84(dVar76,0);
                      uVar80 = (undefined4)((ulonglong)dVar76 >> 0x20);
                    }
                    if (dVar70 <= dVar73) {
                      dVar73 = dVar70;
                    }
                    if (dVar78 <= dVar37) {
                      dVar78 = dVar37;
                    }
                    dVar37 = dVar78;
                    if (dVar38 <= dVar76) {
                      dVar38 = dVar76;
                    }
                    if (dVar69 <= dVar70) {
                      dVar69 = dVar70;
                    }
                  }
                  dVar76 = auVar67._0_8_;
                  lVar30 = lVar30 + 0x18;
                  bVar35 = false;
                  dVar78 = dVar37;
                } while ((longlong)(int)local_2a8._8_4_ * 0x18 != lVar30);
                bVar35 = true;
              }
              local_288 = (dVar73 + dVar69) * 0.5;
              dStack_290 = ((double)CONCAT44(uVar80,uVar18) + dVar38) * 0.5;
              local_298 = (dVar37 + dVar76) * 0.5;
              if (bVar35) {
                lVar30 = 0;
                do {
                  *(double *)(local_2a8._0_8_ + lVar30) =
                       *(double *)(local_2a8._0_8_ + lVar30) - local_298;
                  *(double *)(local_2a8._0_8_ + 8 + lVar30) =
                       *(double *)(local_2a8._0_8_ + 8 + lVar30) - dStack_290;
                  *(double *)(local_2a8._0_8_ + 0x10 + lVar30) =
                       *(double *)(local_2a8._0_8_ + 0x10 + lVar30) - local_288;
                  lVar30 = lVar30 + 0x18;
                } while ((ulonglong)(uint)local_2a8._8_4_ * 0x18 != lVar30);
              }
              local_298 = local_298 + local_4e8;
              dStack_290 = dStack_290 + dStack_4e0;
              local_288 = local_288 + local_4b8;
              local_268 = DAT_14c8463e0;
              dStack_260 = DAT_14c8463e8;
              local_278 = DAT_14c8463d0;
              dStack_270 = DAT_14c8463d8;
              dVar69 = (dVar69 - dVar73) * 0.5;
              dVar38 = (dVar38 - (double)CONCAT44(uVar80,uVar18)) * 0.5;
              dVar37 = (dVar37 - dVar76) * 0.5;
              dVar37 = dVar69 * dVar69 + dVar37 * dVar37 + dVar38 * dVar38;
              lVar30 = (longlong)(int)local_388;
              uVar23 = (int)local_388 + 1;
              local_388 = CONCAT44(local_388._4_4_,uVar23);
              local_2b8._8_8_ = dVar37;
              if (local_388._4_4_ < uVar23) {
                FUN_147102c2e(&lStack_390,uVar21 & 0xffffffff);
              }
              lVar28 = lStack_390;
              lVar30 = lVar30 * 0x60;
              *(undefined8 *)(lStack_390 + 8 + lVar30) = local_2b8._8_8_;
              *(undefined ***)(lStack_390 + lVar30) = &PTR_LAB_14a1e27b0;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (longlong)(int)local_2a8._8_4_;
              lVar20 = SUB168(auVar6 * ZEXT816(0x18),0);
              lVar20 = lVar20 + (ulonglong)(lVar20 == 0);
              if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
                lVar20 = -1;
              }
              _Dst = (void *)FUN_14001cc68(lVar20,0x10);
              *(void **)(lVar28 + 0x10 + lVar30) = _Dst;
              *(undefined4 *)(lVar28 + 0x18 + lVar30) = local_2a8._8_4_;
              *(double *)(lVar28 + 0x30 + lVar30) = local_288;
              pdVar33 = (double *)(lVar28 + 0x20 + lVar30);
              *pdVar33 = local_298;
              pdVar33[1] = dStack_290;
              pdVar33 = (double *)(lVar28 + 0x40 + lVar30);
              *pdVar33 = local_278;
              pdVar33[1] = dStack_270;
              pdVar33 = (double *)(lVar28 + 0x50 + lVar30);
              *pdVar33 = local_268;
              pdVar33[1] = dStack_260;
              uVar13 = local_2a8._0_8_;
              memcpy(_Dst,(void *)local_2a8._0_8_,(longlong)(int)local_2a8._8_4_ * 0x18);
              dVar69 = dStack_4c0;
              dVar38 = local_4c8;
              local_2b8._0_8_ = &PTR_LAB_14a1e27b0;
              dVar37 = (double)local_4d8._0_8_;
              if ((void *)uVar13 != (void *)0x0) {
                FUN_1400020a8(uVar13);
              }
            }
            lVar19 = lVar19 + 0x100;
            param_3 = local_4e9;
          } while (lVar19 != lVar24);
        }
        goto LAB_140ac8117;
      }
    }
    FUN_14576c3c6(local_438,lVar19,&lStack_360);
    param_3 = local_4e9;
  }
  else {
    lVar19 = FUN_1401f7e9a();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar19 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) !=
        lVar19 + 0x30)) goto LAB_140ac6f13;
    FUN_144a5d136(local_2b8,param_2,param_4);
    uVar21 = local_368;
    if ((0 < local_238) && (0 < local_234)) {
      if (param_4 != (double *)0x0) {
        local_2a8 = *(undefined1 (*) [16])(param_4 + 4);
        local_298 = param_4[6];
      }
      lVar19 = (longlong)(int)local_368;
      uVar23 = (int)local_368 + 1;
      local_368 = CONCAT44(local_368._4_4_,uVar23);
      if (local_368._4_4_ < uVar23) {
        FUN_140acb960(&lStack_370,uVar21 & 0xffffffff);
      }
      FUN_140acb696(lVar19 * 0xb8 + lStack_370,local_2b8,0);
    }
    local_2b8._0_8_ = &PTR_LAB_14a1e2790;
    if (local_248 != 0.0) {
      FUN_1400020a8();
    }
    if (local_240 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140ac8117:
  FUN_1449d7dd2(&lStack_3c0,local_2b8);
  if ((longlong)(int)local_368 != 0) {
    lVar24 = (longlong)(int)local_368 * 0xb8;
    lVar19 = lStack_370;
    do {
      FUN_140acbad4(lVar19,&local_178);
      if (local_148._0_1_ == '\0' || local_288._0_1_ == '\0') {
        if (local_148._0_1_ != '\0') {
          local_288 = local_148;
          local_298 = local_158;
          dStack_290 = dStack_150;
          local_2a8._8_8_ = dStack_160;
          local_2a8._0_8_ = local_168;
          local_2b8._8_8_ = dStack_170;
          local_2b8._0_8_ = local_178;
        }
      }
      else {
        if (local_178 <= (double)local_2b8._0_8_) {
          local_2b8._0_8_ = local_178;
        }
        if (dStack_170 <= (double)local_2b8._8_8_) {
          local_2b8._8_8_ = dStack_170;
        }
        if (local_168 <= (double)local_2a8._0_8_) {
          local_2a8._0_8_ = local_168;
        }
        if ((double)local_2a8._8_8_ <= dStack_160) {
          local_2a8._8_8_ = dStack_160;
        }
        if (local_298 <= local_158) {
          local_298 = local_158;
        }
        if (dStack_290 <= dStack_150) {
          dStack_290 = dStack_150;
        }
      }
      lVar19 = lVar19 + 0xb8;
      lVar24 = lVar24 + -0xb8;
    } while (lVar24 != 0);
  }
  if ((longlong)(int)local_358 != 0) {
    lVar19 = lStack_360;
    cVar22 = local_288._0_1_;
    do {
      bVar32 = true;
      dVar78 = 0.0;
      lVar24 = 0x28;
      bVar35 = false;
      dVar76 = 0.0;
      dVar73 = 0.0;
      dVar37 = 0.0;
      dVar38 = 0.0;
      dVar69 = 0.0;
      do {
        dVar70 = *(double *)(lVar19 + -0x10 + lVar24);
        if (bVar32) {
          dVar37 = *(double *)(lVar19 + -8 + lVar24);
          dVar38 = *(double *)(lVar19 + lVar24);
          bVar35 = true;
          dVar73 = dVar38;
          dVar76 = dVar37;
          dVar78 = dVar70;
        }
        else {
          if (dVar70 <= dVar78) {
            dVar78 = dVar70;
          }
          dVar74 = *(double *)(lVar19 + -8 + lVar24);
          dVar77 = *(double *)(lVar19 + lVar24);
          if (dVar74 <= dVar76) {
            dVar76 = dVar74;
          }
          if (dVar77 <= dVar73) {
            dVar73 = dVar77;
          }
          if (dVar69 <= dVar70) {
            dVar69 = dVar70;
          }
          dVar70 = dVar69;
          if (dVar37 <= dVar74) {
            dVar37 = dVar74;
          }
          if (dVar38 <= dVar77) {
            dVar38 = dVar77;
          }
        }
        lVar24 = lVar24 + 0x18;
        bVar32 = false;
        dVar69 = dVar70;
      } while (lVar24 != 0x70);
      if ((cVar22 == '\0') || (!bVar35)) {
        if (bVar35) {
          cVar22 = '\x01';
          dStack_290 = dVar38;
          local_298 = dVar37;
          local_2a8._8_8_ = dVar70;
          local_2a8._0_8_ = dVar73;
          local_2b8._8_8_ = dVar76;
          local_2b8._0_8_ = dVar78;
        }
      }
      else {
        if (dVar78 <= (double)local_2b8._0_8_) {
          local_2b8._0_8_ = dVar78;
        }
        if (dVar76 <= (double)local_2b8._8_8_) {
          local_2b8._8_8_ = dVar76;
        }
        if (dVar73 <= (double)local_2a8._0_8_) {
          local_2a8._0_8_ = dVar73;
        }
        if ((double)local_2a8._8_8_ <= dVar70) {
          local_2a8._8_8_ = dVar70;
        }
        if (local_298 <= dVar37) {
          local_298 = dVar37;
        }
        if (dStack_290 <= dVar38) {
          dStack_290 = dVar38;
        }
      }
      lVar19 = lVar19 + 0x98;
    } while (lVar19 != (longlong)(int)local_358 * 0x98 + lStack_360);
    local_288 = (double)CONCAT71(local_288._1_7_,cVar22);
  }
  if (param_3 == '\0') {
    local_3d0 = 2;
  }
  else {
    if (param_2 == (longlong *)0x0) {
      uVar23 = 0;
      uVar21 = 0;
    }
    else {
      uVar23 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar23 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar21 = (ulonglong)*(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        uVar29 = DAT_14c964868 + 1;
        bVar35 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar35) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar29);
        }
        LOCK();
        uVar17 = *(uint *)(lVar19 + 0x10);
        bVar35 = uVar17 == 0;
        if (bVar35) {
          *(uint *)(lVar19 + 0x10) = uVar29;
          uVar17 = 0;
        }
        UNLOCK();
        if (bVar35) {
          uVar17 = uVar29;
        }
        uVar21 = (ulonglong)uVar17;
      }
    }
    param_2 = (longlong *)((ulonglong)uVar23 | uVar21 << 0x20);
    local_3d0 = 3;
  }
  iVar15 = *(int *)(param_1 + 0x10);
  lVar19 = (longlong)iVar15;
  plStack_3c8 = param_2;
  if (lVar19 == -1) {
    iVar15 = FUN_140acacd0(param_1);
    *(int *)(param_1 + 0x10) = iVar15;
    lVar19 = *(longlong *)(param_1 + 0x28);
    lVar24 = (longlong)iVar15 * 200;
    *(double *)(lVar19 + 0xc0 + lVar24) = local_288;
    pdVar33 = (double *)(lVar19 + 0xb0 + lVar24);
    *pdVar33 = local_298;
    pdVar33[1] = dStack_290;
    puVar1 = (undefined8 *)(lVar19 + 0xa0 + lVar24);
    *puVar1 = local_2a8._0_8_;
    puVar1[1] = local_2a8._8_8_;
    puVar1 = (undefined8 *)(lVar19 + 0x90 + lVar24);
    *puVar1 = local_2b8._0_8_;
    puVar1[1] = local_2b8._8_8_;
    lVar19 = *(longlong *)(param_1 + 0x28);
    lVar24 = (longlong)*(int *)(param_1 + 0x10) * 200;
    puVar1 = (undefined8 *)(lVar19 + lVar24);
    *puVar1 = CONCAT44(uStack_3cc,local_3d0);
    puVar1[1] = plStack_3c8;
    FUN_140aca9e8(puVar1 + 2,&lStack_3c0);
    FUN_140acaa38(lVar19 + lVar24 + 0x20,&lStack_3b0);
    FUN_140acaa88(lVar19 + lVar24 + 0x30,&lStack_3a0);
    FUN_140acab28(lVar19 + lVar24 + 0x40,&lStack_390);
    FUN_140acaad8(lVar19 + lVar24 + 0x50,&lStack_380);
    FUN_140acabd6(lVar19 + lVar24 + 0x60,&lStack_370);
    FUN_140acab86(lVar19 + lVar24 + 0x70,&lStack_360);
  }
  else {
    lVar24 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar24 + 0x84 + lVar19 * 200) != -1) {
      do {
        iVar15 = *(int *)(lVar24 + 0x80 + lVar19 * 200);
        lVar30 = (longlong)iVar15 * 200;
        dVar37 = *(double *)(lVar24 + 0xb8 + lVar30);
        dVar38 = dStack_290;
        if (dStack_290 <= dVar37) {
          dVar38 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0xb0 + lVar30);
        dVar69 = local_298;
        if (local_298 <= dVar37) {
          dVar69 = dVar37;
        }
        iVar27 = *(int *)(lVar24 + 0x84 + lVar19 * 200);
        dVar37 = *(double *)(lVar24 + 0xa8 + lVar30);
        dVar73 = (double)local_2a8._8_8_;
        if ((double)local_2a8._8_8_ <= dVar37) {
          dVar73 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0xa0 + lVar30);
        dVar76 = (double)local_2a8._0_8_;
        if (dVar37 <= (double)local_2a8._0_8_) {
          dVar76 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0x98 + lVar30);
        dVar78 = (double)local_2b8._8_8_;
        if (dVar37 <= (double)local_2b8._8_8_) {
          dVar78 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0x90 + lVar30);
        dVar70 = (double)local_2b8._0_8_;
        if (dVar37 <= (double)local_2b8._0_8_) {
          dVar70 = dVar37;
        }
        lVar19 = (longlong)iVar27 * 200;
        dVar37 = *(double *)(lVar24 + 0xb8 + lVar19);
        dVar74 = dStack_290;
        if (dStack_290 <= dVar37) {
          dVar74 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0xb0 + lVar19);
        dVar77 = local_298;
        if (local_298 <= dVar37) {
          dVar77 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0xa8 + lVar19);
        dVar79 = (double)local_2a8._8_8_;
        if ((double)local_2a8._8_8_ <= dVar37) {
          dVar79 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0xa0 + lVar19);
        dVar71 = (double)local_2a8._0_8_;
        if (dVar37 <= (double)local_2a8._0_8_) {
          dVar71 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0x98 + lVar19);
        dVar75 = (double)local_2b8._8_8_;
        if (dVar37 <= (double)local_2b8._8_8_) {
          dVar75 = dVar37;
        }
        dVar37 = *(double *)(lVar24 + 0x90 + lVar19);
        dVar4 = (double)local_2b8._0_8_;
        if (dVar37 <= (double)local_2b8._0_8_) {
          dVar4 = dVar37;
        }
        if ((dVar79 - dVar4) * (dVar77 - dVar75) * (dVar74 - dVar71) <=
            (dVar73 - dVar70) * (dVar69 - dVar78) * (dVar38 - dVar76)) {
          iVar15 = iVar27;
        }
        lVar19 = (longlong)iVar15;
      } while (*(int *)(lVar24 + 0x84 + lVar19 * 200) != -1);
    }
    iVar16 = FUN_140acacd0(param_1);
    lVar24 = *(longlong *)(param_1 + 0x28);
    lVar28 = (longlong)iVar16 * 200;
    puVar1 = (undefined8 *)(lVar24 + 0x90 + lVar28);
    *puVar1 = local_2b8._0_8_;
    puVar1[1] = local_2b8._8_8_;
    puVar1 = (undefined8 *)(lVar24 + 0xa0 + lVar28);
    *puVar1 = local_2a8._0_8_;
    puVar1[1] = local_2a8._8_8_;
    pdVar33 = (double *)(lVar24 + 0xb0 + lVar28);
    *pdVar33 = local_298;
    pdVar33[1] = dStack_290;
    *(double *)(lVar24 + 0xc0 + lVar28) = local_288;
    lVar24 = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined8 *)(lVar24 + lVar28);
    *puVar1 = CONCAT44(uStack_3cc,local_3d0);
    puVar1[1] = plStack_3c8;
    FUN_140aca9e8(puVar1 + 2,&lStack_3c0);
    FUN_140acaa38(lVar24 + lVar28 + 0x20,&lStack_3b0);
    FUN_140acaa88(lVar24 + lVar28 + 0x30,&lStack_3a0);
    FUN_140acab28(lVar24 + lVar28 + 0x40,&lStack_390);
    FUN_140acaad8(lVar24 + lVar28 + 0x50,&lStack_380);
    FUN_140acabd6(lVar24 + lVar28 + 0x60,&lStack_370);
    FUN_140acab86(lVar24 + lVar28 + 0x70,&lStack_360);
    iVar27 = FUN_140acacd0(param_1);
    lVar30 = (longlong)iVar27 * 200;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x80 + lVar30) = iVar15;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x84 + lVar30) = iVar16;
    lVar24 = *(longlong *)(param_1 + 0x28);
    lVar19 = lVar19 * 200;
    dVar38 = *(double *)(lVar24 + 0xb8 + lVar19);
    dVar37 = *(double *)(lVar24 + 0xb8 + lVar28);
    if (dVar38 <= dVar37) {
      dVar38 = dVar37;
    }
    dVar69 = *(double *)(lVar24 + 0xb0 + lVar19);
    dVar37 = *(double *)(lVar24 + 0xb0 + lVar28);
    if (dVar69 <= dVar37) {
      dVar69 = dVar37;
    }
    dVar73 = *(double *)(lVar24 + 0xa8 + lVar19);
    dVar37 = *(double *)(lVar24 + 0xa8 + lVar28);
    if (dVar73 <= dVar37) {
      dVar73 = dVar37;
    }
    dVar76 = *(double *)(lVar24 + 0xa0 + lVar19);
    dVar37 = *(double *)(lVar24 + 0xa0 + lVar28);
    if (dVar37 <= dVar76) {
      dVar76 = dVar37;
    }
    dVar70 = *(double *)(lVar24 + 0x90 + lVar19);
    dVar78 = *(double *)(lVar24 + 0x98 + lVar19);
    dVar37 = *(double *)(lVar24 + 0x98 + lVar28);
    if (dVar37 <= dVar78) {
      dVar78 = dVar37;
    }
    dVar37 = *(double *)(lVar24 + 0x90 + lVar28);
    if (dVar37 <= dVar70) {
      dVar70 = dVar37;
    }
    *(double *)(lVar24 + 0x90 + lVar30) = dVar70;
    *(double *)(lVar24 + 0x98 + lVar30) = dVar78;
    *(double *)(lVar24 + 0xa0 + lVar30) = dVar76;
    *(double *)(lVar24 + 0xa8 + lVar30) = dVar73;
    *(double *)(lVar24 + 0xb0 + lVar30) = dVar69;
    *(double *)(lVar24 + 0xb8 + lVar30) = dVar38;
    *(undefined1 *)(lVar24 + 0xc0 + lVar30) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x8c + lVar30) = 1;
    iVar16 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x88 + lVar19);
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x88 + lVar19) = iVar27;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x88 + lVar28) = iVar27;
    if ((longlong)iVar16 == -1) {
      *(int *)(param_1 + 0x10) = iVar27;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x28) + 0x88 + lVar30) = iVar16;
      lVar24 = (longlong)iVar16 * 200;
      lVar19 = *(longlong *)(param_1 + 0x28) + lVar24;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x80 + lVar24) == iVar15) {
        *(int *)(lVar19 + 0x80) = iVar27;
      }
      else {
        *(int *)(lVar19 + 0x84) = iVar27;
      }
    }
    if (iVar27 != -1) {
      lVar19 = *(longlong *)(param_1 + 0x28);
      do {
        lVar24 = (longlong)iVar27 * 200;
        lVar30 = (longlong)*(int *)(lVar19 + 0x80 + lVar24) * 200;
        lVar28 = (longlong)*(int *)(lVar19 + 0x84 + lVar24) * 200;
        dVar38 = *(double *)(lVar19 + 0xb8 + lVar30);
        dVar37 = *(double *)(lVar19 + 0xb8 + lVar28);
        if (dVar38 <= dVar37) {
          dVar38 = dVar37;
        }
        dVar69 = *(double *)(lVar19 + 0xb0 + lVar30);
        dVar37 = *(double *)(lVar19 + 0xb0 + lVar28);
        if (dVar69 <= dVar37) {
          dVar69 = dVar37;
        }
        dVar73 = *(double *)(lVar19 + 0xa8 + lVar30);
        dVar37 = *(double *)(lVar19 + 0xa8 + lVar28);
        if (dVar73 <= dVar37) {
          dVar73 = dVar37;
        }
        dVar76 = *(double *)(lVar19 + 0xa0 + lVar30);
        dVar37 = *(double *)(lVar19 + 0xa0 + lVar28);
        if (dVar37 <= dVar76) {
          dVar76 = dVar37;
        }
        dVar78 = *(double *)(lVar19 + 0x98 + lVar30);
        dVar37 = *(double *)(lVar19 + 0x98 + lVar28);
        if (dVar37 <= dVar78) {
          dVar78 = dVar37;
        }
        dVar70 = *(double *)(lVar19 + 0x90 + lVar30);
        dVar37 = *(double *)(lVar19 + 0x90 + lVar28);
        if (dVar37 <= dVar70) {
          dVar70 = dVar37;
        }
        *(double *)(lVar19 + 0x90 + lVar24) = dVar70;
        *(double *)(lVar19 + 0x98 + lVar24) = dVar78;
        *(double *)(lVar19 + 0xa0 + lVar24) = dVar76;
        *(double *)(lVar19 + 0xa8 + lVar24) = dVar73;
        *(double *)(lVar19 + 0xb0 + lVar24) = dVar69;
        *(double *)(lVar19 + 0xb8 + lVar24) = dVar38;
        *(undefined1 *)(lVar19 + 0xc0 + lVar24) = 1;
        uVar23 = *(uint *)(lVar19 + 0x8c + lVar30);
        uVar29 = *(uint *)(lVar19 + 0x8c + lVar28);
        if (uVar29 < uVar23) {
          uVar29 = uVar23;
        }
        *(uint *)(*(longlong *)(param_1 + 0x28) + 0x8c + lVar24) = uVar29 + 1;
        lVar19 = *(longlong *)(param_1 + 0x28);
        iVar27 = *(int *)(lVar19 + 0x88 + lVar24);
      } while (iVar27 != -1);
    }
  }
LAB_140ac86a6:
  FUN_14003d612(&local_3d0);
  if ((local_f0 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aca9e8 FUN_140aca9e8 body=79 status=ok
// SIG undefined FUN_140aca9e8(void)

undefined8 * FUN_140aca9e8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140acb000(param_1,iVar1);
      FUN_140acac33(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acaa38 FUN_140acaa38 body=79 status=ok
// SIG undefined FUN_140acaa38(void)

undefined8 * FUN_140acaa38(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140acb39c(param_1,iVar1);
      FUN_140acac7d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acaa88 FUN_140acaa88 body=79 status=ok
// SIG undefined FUN_140acaa88(void)

undefined8 * FUN_140acaa88(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140cbcc80(param_1,iVar1);
      FUN_140cbcc22(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acaad8 FUN_140acaad8 body=79 status=ok
// SIG undefined FUN_140acaad8(void)

undefined8 * FUN_140acaad8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147102cc2(param_1,iVar1);
      FUN_147102d31(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acab28 FUN_140acab28 body=93 status=ok
// SIG undefined FUN_140acab28(void)

undefined8 * FUN_140acab28(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140074ac0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140acb2b2(param_1,iVar1);
      FUN_140acb0e9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acab86 FUN_140acab86 body=79 status=ok
// SIG undefined FUN_140acab86(void)

undefined8 * FUN_140acab86(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14576c354(param_1,iVar1);
      FUN_140acbd53(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acabd6 FUN_140acabd6 body=93 status=ok
// SIG undefined FUN_140acabd6(void)

undefined8 * FUN_140acabd6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14003d6a9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140acb810(param_1,iVar1);
      FUN_140acb4e6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140acac33 FUN_140acac33 body=74 status=ok
// SIG undefined FUN_140acac33(void)

void FUN_140acac33(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      *(undefined ***)(param_1 + lVar6) = &PTR_LAB_14a1e1958;
      *(undefined8 *)(param_1 + 8 + lVar6) = *(undefined8 *)(param_2 + 8 + lVar6);
      *(undefined ***)(param_1 + lVar6) = &PTR_LAB_14a1e1938;
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x20 + lVar6);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar6);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar6 = lVar6 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140acac7d FUN_140acac7d body=83 status=ok
// SIG undefined FUN_140acac7d(void)

void FUN_140acac7d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = (undefined8 *)(param_1 + lVar4);
      *puVar3 = &PTR_LAB_14a1e1958;
      puVar3[1] = *(undefined8 *)(param_2 + 8 + lVar4);
      *puVar3 = &PTR_LAB_14a1e1978;
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar4);
      puVar3 = puVar3 + 2;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar4 = lVar4 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140acacd0 FUN_140acacd0 body=303 status=ok
// SIG undefined FUN_140acacd0(void)

void FUN_140acacd0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar6 = 8;
    if (uVar2 != 0) {
      uVar6 = uVar2 * 2;
    }
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < (int)uVar6) {
      FUN_14480809c(plVar1);
    }
    uVar7 = uVar6 - uVar2;
    if (uVar2 <= uVar6 && uVar7 != 0) {
      do {
        uVar6 = uVar6 - 1;
        iVar3 = *(int *)(param_1 + 0x20);
        uVar4 = iVar3 + 1;
        *(uint *)(param_1 + 0x20) = uVar4;
        if (*(uint *)(param_1 + 0x24) < uVar4) {
          FUN_1447808da(plVar1);
        }
        *(uint *)(*plVar1 + (longlong)iVar3 * 4) = uVar6;
      } while (uVar6 != uVar2);
    }
    iVar3 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar3 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < uVar7) {
      FUN_140acb526(param_1 + 0x28);
    }
    memset((void *)((longlong)iVar3 * 200 + *(longlong *)(param_1 + 0x28)),0,
           (longlong)(int)uVar7 * 200);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + -1) * 4) * 200;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x88 + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x80 + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x84 + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x8c + lVar5) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 140acae00 FUN_140acae00 body=511 status=ok
// SIG undefined FUN_140acae00(void)

undefined8 * FUN_140acae00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  size_t _Size;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *_Dst;
  size_t sVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  param_1[1] = 0;
  *param_1 = &PTR_LAB_14a1e27b0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)*(int *)(param_2 + 0x38);
  lVar8 = SUB168(auVar5 * ZEXT816(0x18),0);
  lVar11 = -1;
  if (SUB168(auVar5 * ZEXT816(0x18),8) == 0) {
    lVar11 = lVar8 + (ulonglong)(lVar8 == 0);
  }
  _Dst = (void *)FUN_14001cc68(lVar11,0x10);
  param_1[2] = _Dst;
  iVar4 = *(int *)(param_2 + 0x38);
  *(int *)(param_1 + 3) = iVar4;
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  param_1[4] = *(undefined8 *)(param_2 + 0xb0);
  param_1[5] = uVar6;
  param_1[6] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  param_1[8] = *(undefined8 *)(param_2 + 0x90);
  param_1[9] = uVar1;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  _Size = (longlong)iVar4 * 0x18;
  memcpy(_Dst,*(void **)(param_2 + 0x30),_Size);
  if ((longlong)iVar4 < 1) {
    dVar15 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar14 = 0.0;
    uVar12 = 0;
    uVar13 = 0;
    dVar18 = 0.0;
  }
  else {
    bVar10 = true;
    dVar15 = 0.0;
    sVar9 = 0;
    dVar17 = 0.0;
    dVar14 = 0.0;
    uVar12 = 0;
    uVar13 = 0;
    dVar18 = 0.0;
    uVar19 = 0;
    uVar21 = 0;
    do {
      dVar16 = *(double *)((longlong)_Dst + sVar9);
      uVar20 = SUB84(dVar16,0);
      uVar22 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (bVar10) {
        dVar14 = *(double *)((longlong)_Dst + sVar9 + 8);
        dVar17 = *(double *)((longlong)_Dst + sVar9 + 0x10);
        uVar12 = SUB84(dVar17,0);
        uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
        dVar15 = dVar14;
        dVar18 = dVar16;
      }
      else {
        if (dVar16 <= dVar18) {
          dVar18 = dVar16;
        }
        dVar2 = *(double *)((longlong)_Dst + sVar9 + 8);
        dVar3 = *(double *)((longlong)_Dst + sVar9 + 0x10);
        if (dVar2 <= dVar15) {
          dVar15 = dVar2;
        }
        if (dVar3 <= dVar17) {
          dVar17 = dVar3;
        }
        if ((double)CONCAT44(uVar21,uVar19) <= dVar16) {
          uVar19 = uVar20;
          uVar21 = uVar22;
        }
        if (dVar14 <= dVar2) {
          dVar14 = dVar2;
        }
        if ((double)CONCAT44(uVar13,uVar12) <= dVar3) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (int)((ulonglong)dVar3 >> 0x20);
        }
        dVar16 = (double)CONCAT44(uVar21,uVar19);
        uVar20 = uVar19;
        uVar22 = uVar21;
      }
      sVar9 = sVar9 + 0x18;
      bVar10 = false;
      uVar19 = uVar20;
      uVar21 = uVar22;
    } while (_Size != sVar9);
  }
  dVar17 = ((double)CONCAT44(uVar13,uVar12) - dVar17) * 0.5 +
           (dVar17 + (double)CONCAT44(uVar13,uVar12)) * 0.5;
  dVar14 = (dVar14 - dVar15) * 0.5 + (dVar15 + dVar14) * 0.5;
  dVar16 = (dVar16 - dVar18) * 0.5 + (dVar16 + dVar18) * 0.5;
  param_1[1] = SQRT(dVar17 * dVar17 + dVar16 * dVar16 + dVar14 * dVar14);
  return param_1;
}



// FUNCTION 140acb000 FUN_140acb000 body=233 status=ok
// SIG undefined FUN_140acb000(void)

void FUN_140acb000(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140acb0e9 FUN_140acb0e9 body=225 status=ok
// SIG undefined FUN_140acb0e9(void)

void FUN_140acb0e9(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *_Dst;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      *(undefined8 *)(param_1 + 8 + lVar9) = *(undefined8 *)(param_2 + 8 + lVar9);
      *(undefined ***)(param_1 + lVar9) = &PTR_LAB_14a1e27b0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)*(int *)(param_2 + 0x18 + lVar9);
      lVar8 = SUB168(auVar4 * ZEXT816(0x18),0);
      lVar8 = lVar8 + (ulonglong)(lVar8 == 0);
      if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
        lVar8 = -1;
      }
      _Dst = (void *)FUN_14001cc68(lVar8,0x10);
      *(void **)(param_1 + 0x10 + lVar9) = _Dst;
      iVar3 = *(int *)(param_2 + 0x18 + lVar9);
      *(int *)(param_1 + 0x18 + lVar9) = iVar3;
      *(undefined8 *)(param_1 + 0x30 + lVar9) = *(undefined8 *)(param_2 + 0x30 + lVar9);
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(param_2 + 0x40 + lVar9);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x50 + lVar9);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x40 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x50 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      memcpy(_Dst,*(void **)(param_2 + 0x10 + lVar9),(longlong)iVar3 * 0x18);
      lVar9 = lVar9 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140acb1ca FUN_140acb1ca body=231 status=ok
// SIG undefined FUN_140acb1ca(void)

void FUN_140acb1ca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 140acb2b2 FUN_140acb2b2 body=233 status=ok
// SIG undefined FUN_140acb2b2(void)

void FUN_140acb2b2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
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
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140acb39c FUN_140acb39c body=330 status=ok
// SIG undefined FUN_140acb39c(void)

void FUN_140acb39c(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140acb40a;
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
LAB_140acb40a:
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



// FUNCTION 140acb4e6 FUN_140acb4e6 body=63 status=ok
// SIG undefined FUN_140acb4e6(void)

void FUN_140acb4e6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140acb696(param_1,param_2,0);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 140acb526 FUN_140acb526 body=366 status=ok
// SIG undefined FUN_140acb526(void)

void FUN_140acb526(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 200;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140acb5bb;
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
LAB_140acb5bb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 200)) {
    uVar7 = uVar5 / 200 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,200,8);
  return;
}



// FUNCTION 140acb696 FUN_140acb696 body=378 status=ok
// SIG undefined FUN_140acb696(void)

undefined8 * FUN_140acb696(undefined8 *param_1,longlong param_2,char param_3)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *_Dst;
  longlong lVar5;
  longlong lVar6;
  
  param_1[1] = 0;
  *param_1 = &PTR_LAB_14a1e2790;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar3;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar3;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar3;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar3;
  iVar1 = *(int *)(param_2 + 0x80);
  *(int *)(param_1 + 0x10) = iVar1;
  iVar2 = *(int *)(param_2 + 0x84);
  *(int *)((longlong)param_1 + 0x84) = iVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = uVar3;
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  lVar6 = (longlong)(iVar2 * iVar1);
  lVar5 = -1;
  if (-1 < iVar2 * iVar1) {
    lVar5 = lVar6 * 8 + (ulonglong)(lVar6 * 8 == 0);
  }
  pvVar4 = (void *)FUN_14001cc68(lVar5,0x10);
  param_1[0xe] = pvVar4;
  _Dst = (void *)FUN_14001cc68(lVar6 + (ulonglong)(lVar6 == 0),0x10);
  param_1[0xf] = _Dst;
  _Size = (longlong)iVar1 * (longlong)iVar2 * 8;
  if (param_3 == '\0') {
    memcpy(pvVar4,*(void **)(param_2 + 0x70),_Size);
    pvVar4 = *(void **)(param_2 + 0x78);
  }
  else {
    memcpy(pvVar4,(void *)(*(int *)(param_2 + 0x70) + param_2),_Size);
    pvVar4 = (void *)(*(int *)(param_2 + 0x78) + param_2);
  }
  memcpy(_Dst,pvVar4,(longlong)iVar1 * (longlong)iVar2);
  return param_1;
}



// FUNCTION 140acb810 FUN_140acb810 body=336 status=ok
// SIG undefined FUN_140acb810(void)

void FUN_140acb810(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0xb8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140acb881;
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
LAB_140acb881:
    iVar5 = (int)(uVar4 / 0xb8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xb8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140acb960 FUN_140acb960 body=372 status=ok
// SIG undefined FUN_140acb960(void)

void FUN_140acb960(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xb8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140acb9e8;
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
LAB_140acb9e8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xb8)) {
    uVar7 = uVar5 / 0xb8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xb8,8);
  return;
}



// FUNCTION 140acbad4 FUN_140acbad4 body=639 status=ok
// SIG undefined FUN_140acbad4(void)

double * FUN_140acbad4(longlong param_1,double *param_2)

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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar18 = *(double *)(param_1 + 0x98);
  dVar19 = *(double *)(param_1 + 0x68) * dVar18;
  dVar20 = *(double *)(param_1 + 0x60) * dVar18;
  dVar18 = dVar18 * *(double *)(param_1 + 0x58);
  dVar1 = *(double *)(param_1 + 0xa8);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar15 = dVar19 * dVar1 + dVar2;
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar17 = dVar20 * dVar1 + dVar4;
  dVar16 = dVar1 * dVar18 + dVar3;
  dVar1 = *(double *)(param_1 + 0x88);
  dVar6 = (double)*(int *)(param_1 + 0x80);
  dVar10 = *(double *)(param_1 + 0x38) * dVar1 * dVar6 + dVar2;
  dVar11 = *(double *)(param_1 + 0x30) * dVar1 * dVar6 + dVar4;
  dVar5 = *(double *)(param_1 + 0x90);
  dVar9 = dVar1 * *(double *)(param_1 + 0x28) * dVar6 + dVar3;
  dVar6 = (double)*(int *)(param_1 + 0x84);
  dVar8 = *(double *)(param_1 + 0x50) * dVar5 * dVar6;
  dVar7 = *(double *)(param_1 + 0x48) * dVar5 * dVar6;
  dVar6 = dVar5 * *(double *)(param_1 + 0x40) * dVar6;
  dVar1 = *(double *)(param_1 + 0xb0);
  dVar19 = dVar19 * dVar1;
  dVar20 = dVar20 * dVar1;
  dVar18 = dVar18 * dVar1;
  dVar14 = dVar10 + dVar8 + dVar19;
  dVar12 = dVar11 + dVar7 + dVar20;
  dVar13 = dVar9 + dVar6 + dVar18;
  dVar5 = dVar8 + dVar2 + dVar19;
  dVar2 = dVar7 + dVar4 + dVar20;
  dVar1 = dVar6 + dVar3 + dVar18;
  dVar19 = dVar19 + dVar10;
  dVar20 = dVar20 + dVar11;
  dVar18 = dVar18 + dVar9;
  dVar3 = dVar5;
  if (dVar19 <= dVar5) {
    dVar3 = dVar19;
  }
  dVar4 = dVar2;
  if (dVar20 <= dVar2) {
    dVar4 = dVar20;
  }
  dVar6 = dVar1;
  if (dVar18 <= dVar1) {
    dVar6 = dVar18;
  }
  dVar7 = dVar15;
  if (dVar14 <= dVar15) {
    dVar7 = dVar14;
  }
  if (dVar3 <= dVar7) {
    dVar7 = dVar3;
  }
  dVar3 = dVar17;
  if (dVar12 <= dVar17) {
    dVar3 = dVar12;
  }
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  dVar4 = dVar16;
  if (dVar13 <= dVar16) {
    dVar4 = dVar13;
  }
  if (dVar6 <= dVar4) {
    dVar4 = dVar6;
  }
  if (dVar5 <= dVar19) {
    dVar5 = dVar19;
  }
  if (dVar2 <= dVar20) {
    dVar2 = dVar20;
  }
  if (dVar1 <= dVar18) {
    dVar1 = dVar18;
  }
  if (dVar15 <= dVar14) {
    dVar15 = dVar14;
  }
  if (dVar15 <= dVar5) {
    dVar15 = dVar5;
  }
  if (dVar17 <= dVar12) {
    dVar17 = dVar12;
  }
  if (dVar17 <= dVar2) {
    dVar17 = dVar2;
  }
  if (dVar16 <= dVar13) {
    dVar16 = dVar13;
  }
  if (dVar16 <= dVar1) {
    dVar16 = dVar1;
  }
  *param_2 = dVar4;
  param_2[1] = dVar3;
  param_2[2] = dVar7;
  param_2[3] = dVar16;
  param_2[4] = dVar17;
  param_2[5] = dVar15;
  *(undefined1 *)(param_2 + 6) = 1;
  return param_2;
}



// FUNCTION 140acbd53 FUN_140acbd53 body=116 status=ok
// SIG undefined FUN_140acbd53(void)

void FUN_140acbd53(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar2);
      *puVar1 = &PTR_LAB_14a1e1958;
      puVar1[1] = *(undefined8 *)(param_2 + 8 + lVar2);
      *puVar1 = &PTR_LAB_14a1e38d0;
      memcpy(puVar1 + 2,(void *)(param_2 + 0x10 + lVar2),0x88);
      lVar2 = lVar2 + 0x98;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140acbdc7 FUN_140acbdc7 body=1755 status=ok
// SIG undefined FUN_140acbdc7(void)

void FUN_140acbdc7(double *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  lVar16 = param_2[1];
  if (0 < (longlong)(int)lVar16) {
    lVar19 = 0;
    do {
      lVar4 = *param_2;
      uVar17 = (ulonglong)*(ushort *)(lVar4 + lVar19);
      lVar18 = *(longlong *)(param_3 + 0x28);
      dVar29 = param_1[8];
      dVar30 = param_1[9];
      dVar23 = (double)*(float *)(lVar18 + uVar17 * 0xc) * dVar29;
      dVar8 = (double)*(float *)(lVar18 + 4 + uVar17 * 0xc) * dVar30;
      dVar33 = param_1[10];
      dVar24 = (double)*(float *)(lVar18 + 8 + uVar17 * 0xc) * dVar33;
      dVar2 = param_1[3];
      dVar20 = param_1[3];
      dVar13 = *param_1;
      dVar14 = param_1[1];
      dVar15 = param_1[2];
      dVar11 = param_1[4];
      dVar12 = param_1[5];
      dVar31 = dVar8 * dVar13 - dVar23 * dVar14;
      dVar9 = dVar24 * dVar14 - dVar8 * dVar15;
      dVar27 = dVar23 * dVar15 - dVar24 * dVar13;
      dVar9 = dVar9 + dVar9;
      dVar27 = dVar27 + dVar27;
      dVar31 = dVar31 + dVar31;
      uVar17 = (ulonglong)*(ushort *)(lVar4 + 2 + lVar19);
      dVar25 = (double)*(float *)(lVar18 + uVar17 * 0xc) * dVar29;
      dVar26 = (double)*(float *)(lVar18 + 4 + uVar17 * 0xc) * dVar30;
      dVar28 = (double)*(float *)(lVar18 + 8 + uVar17 * 0xc) * dVar33;
      dVar21 = dVar26 * dVar13 - dVar14 * dVar25;
      dVar22 = dVar28 * dVar14 - dVar15 * dVar26;
      dVar32 = dVar25 * dVar15 - dVar13 * dVar28;
      dVar22 = dVar22 + dVar22;
      dVar32 = dVar32 + dVar32;
      dVar21 = dVar21 + dVar21;
      dVar5 = param_1[6];
      dVar7 = (dVar31 * dVar14 - dVar27 * dVar15) + dVar2 * dVar9 + dVar23 + dVar11;
      dVar8 = (dVar15 * dVar9 - dVar31 * dVar13) + dVar20 * dVar27 + dVar8 + dVar12;
      dVar9 = dVar2 * dVar31 + dVar24 + (dVar27 * dVar13 - dVar9 * dVar14) + dVar5;
      dVar27 = (dVar21 * dVar14 - dVar32 * dVar15) + dVar2 * dVar22 + dVar25 + dVar11;
      dVar24 = (dVar15 * dVar22 - dVar21 * dVar13) + dVar20 * dVar32 + dVar26 + dVar12;
      dVar31 = dVar2 * dVar21 + dVar28 + (dVar32 * dVar13 - dVar22 * dVar14) + dVar5;
      uVar17 = (ulonglong)*(ushort *)(lVar4 + 4 + lVar19);
      dVar29 = (double)*(float *)(lVar18 + uVar17 * 0xc) * dVar29;
      dVar30 = (double)*(float *)(lVar18 + 4 + uVar17 * 0xc) * dVar30;
      dVar33 = (double)*(float *)(lVar18 + 8 + uVar17 * 0xc) * dVar33;
      dVar21 = dVar30 * dVar13 - dVar14 * dVar29;
      dVar22 = dVar33 * dVar14 - dVar15 * dVar30;
      dVar23 = dVar29 * dVar15 - dVar13 * dVar33;
      dVar22 = dVar22 + dVar22;
      dVar23 = dVar23 + dVar23;
      dVar21 = dVar21 + dVar21;
      dVar11 = (dVar21 * dVar14 - dVar23 * dVar15) + dVar2 * dVar22 + dVar29 + dVar11;
      dVar12 = (dVar15 * dVar22 - dVar21 * dVar13) + dVar20 * dVar23 + dVar30 + dVar12;
      dVar5 = dVar2 * dVar21 + dVar33 + (dVar23 * dVar13 - dVar22 * dVar14) + dVar5;
      dVar21 = (dVar27 - dVar7) * (dVar12 - dVar8) - (dVar11 - dVar7) * (dVar24 - dVar8);
      dVar2 = (dVar31 - dVar9) * (dVar11 - dVar7) - (dVar5 - dVar9) * (dVar27 - dVar7);
      dVar23 = (dVar24 - dVar8) * (dVar5 - dVar9) - (dVar31 - dVar9) * (dVar12 - dVar8);
      dVar20 = dVar21 * dVar21 + dVar23 * dVar23 + dVar2 * dVar2;
      if (((dVar20 != 1.0) || (dVar22 = dVar2, dVar32 = dVar23, dVar29 = dVar21, NAN(dVar20))) &&
         (dVar22 = DAT_14c8464e8, dVar32 = DAT_14c8464e0, dVar29 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar20)) {
        dVar20 = 1.0 / SQRT(dVar20);
        dVar22 = dVar2 * dVar20;
        dVar32 = dVar23 * dVar20;
        dVar29 = dVar21 * dVar20;
      }
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14576c464(param_4,iVar3);
      }
      dVar23 = (dVar31 + dVar9 + dVar5) * 0.3333333333333333;
      dVar20 = (dVar8 + dVar12 + dVar24) * 0.3333333333333333;
      dVar21 = (dVar7 + dVar11 + dVar27) * 0.3333333333333333;
      dVar30 = (dVar31 - dVar23) * (dVar31 - dVar23) +
               (dVar27 - dVar21) * (dVar27 - dVar21) + (dVar24 - dVar20) * (dVar24 - dVar20);
      dVar33 = (dVar5 - dVar23) * (dVar5 - dVar23) +
               (dVar11 - dVar21) * (dVar11 - dVar21) + (dVar12 - dVar20) * (dVar12 - dVar20);
      dVar2 = (dVar9 - dVar23) * (dVar9 - dVar23) +
              (dVar7 - dVar21) * (dVar7 - dVar21) + (dVar8 - dVar20) * (dVar8 - dVar20);
      if (dVar2 <= dVar33) {
        dVar2 = dVar33;
      }
      if (dVar2 <= dVar30) {
        dVar2 = dVar30;
      }
      lVar4 = *param_4;
      lVar18 = (longlong)iVar3 * 0x98;
      *(undefined8 *)(lVar4 + 8 + lVar18) = 0;
      *(undefined ***)(lVar4 + lVar18) = &PTR_LAB_14a1e38d0;
      *(double *)(lVar4 + 0x10 + lVar18) = SQRT(dVar2);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0x18 + lVar18) = auVar6;
      *(double *)(lVar4 + 0x28 + lVar18) = dVar9;
      auVar10._8_4_ = SUB84(dVar12,0);
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0x30 + lVar18) = auVar10;
      *(double *)(lVar4 + 0x40 + lVar18) = dVar5;
      pdVar1 = (double *)(lVar4 + 0x48 + lVar18);
      *pdVar1 = dVar27;
      pdVar1[1] = dVar24;
      *(double *)(lVar4 + 0x58 + lVar18) = dVar31;
      *(double *)(lVar4 + 0x60 + lVar18) = dVar32;
      *(double *)(lVar4 + 0x68 + lVar18) = dVar22;
      *(double *)(lVar4 + 0x70 + lVar18) = dVar29;
      *(double *)(lVar4 + 0x78 + lVar18) = dVar21;
      *(double *)(lVar4 + 0x80 + lVar18) = dVar20;
      *(double *)(lVar4 + 0x88 + lVar18) = dVar23;
      *(undefined8 *)(lVar4 + 0x90 + lVar18) = 0x4024000000000000;
      lVar19 = lVar19 + 6;
    } while ((longlong)(int)lVar16 * 6 != lVar19);
  }
  return;
}



// FUNCTION 140acc4a8 FUN_140acc4a8 body=57 status=ok
// SIG undefined FUN_140acc4a8(void)

void FUN_140acc4a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69d18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69d18 = FUN_140002ddd(FUN_146523756,uVar1,L"InventoryBodyControlAttributeInput");
  }
  return;
}



// FUNCTION 140acc4e8 FUN_140acc4e8 body=57 status=ok
// SIG undefined FUN_140acc4e8(void)

void FUN_140acc4e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb232c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb232c0 = FUN_140002ddd(FUN_14643d48d,uVar1,L"GpsTest_FlightNavReachable");
  }
  return;
}



// FUNCTION 140acc522 FUN_140acc522 body=419 status=ok
// SIG undefined FUN_140acc522(void)

void FUN_140acc522(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x8c) < 0x20) {
    FUN_140acc6c6(plVar2);
  }
  iVar8 = 0x20;
  do {
    puVar7 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar7 = 0;
    puVar7[1] = 0xffff00000000;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    iVar4 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar4 + 1U) {
      FUN_1402cc33a(plVar2,iVar4);
    }
    *(undefined8 **)(*plVar2 + (longlong)iVar4 * 8) = puVar7;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lVar1 = param_1 + 0x40;
  uVar3 = *(ushort *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(longlong *)(param_1 + 0x58) = lVar1;
  *(longlong *)(param_1 + 0x50) = lVar1;
  *(uint *)(param_1 + 0x4c) = (*(uint *)(param_1 + 0x4c) & 0xffe00000) + (uint)uVar3 + 0x30000;
  iVar8 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar8 < 1) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
  }
  else {
    puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + -8 + (longlong)iVar8 * 8);
    *(int *)(param_1 + 0x88) = iVar8 + -1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined4 *)puVar7 = uVar5;
  *(undefined4 *)((longlong)puVar7 + 4) = uVar6;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(uint *)((longlong)puVar7 + 0xc) =
       (*(uint *)((longlong)puVar7 + 0xc) & 0xffe00000) + (uint)uVar3 + 0x10000;
  *(undefined8 **)(*(longlong *)(param_1 + 0x58) + 0x10) = puVar7;
  puVar7[3] = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 **)(param_1 + 0x58) = puVar7;
  puVar7[2] = lVar1;
  iVar8 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar8 + 1U) {
    FUN_1402cc33a((longlong *)(param_1 + 0x70),iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar8 * 8) = puVar7;
  return;
}



// FUNCTION 140acc6c6 FUN_140acc6c6 body=145 status=ok
// SIG undefined FUN_140acc6c6(void)

void FUN_140acc6c6(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x100;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e10];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x100,8);
  }
  uVar2 = 0x7fffffff;
  if (0x1f < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 140acc758 FUN_140acc758 body=1171 status=ok
// SIG undefined FUN_140acc758(void)

void FUN_140acc758(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_140acc842;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_140acc842:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140acc90e;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_140acc90e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7c8))(param_1,local_2c,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140accbec FUN_140accbec body=44 status=ok
// SIG undefined FUN_140accbec(void)

void FUN_140accbec(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x260) + 0x44) = param_2;
  }
  return;
}



// FUNCTION 140accc18 FUN_140accc18 body=90 status=ok
// SIG undefined FUN_140accc18(void)

undefined8 * FUN_140accc18(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_140accc74(local_28,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140accc74 FUN_140accc74 body=448 status=ok
// SIG undefined FUN_140accc74(void)

void FUN_140accc74(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  lVar4 = *param_2;
  lVar3 = param_2[1];
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  if ((int)lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    do {
      uVar6 = local_40;
      lVar5 = (longlong)(int)local_40;
      uVar1 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,uVar1);
      if (local_40._4_4_ < uVar1) {
        FUN_1456b1fa2(local_108,uVar6 & 0xffffffff);
      }
      puVar2 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar2 = local_108;
      }
      *(undefined4 *)(puVar2 + lVar5 * 0xc + 8) = *(undefined4 *)((undefined8 *)(lVar4 + lVar7) + 1)
      ;
      *(undefined8 *)(puVar2 + lVar5 * 0xc) = *(undefined8 *)(lVar4 + lVar7);
      lVar7 = lVar7 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar7);
    uVar6 = local_40 & 0xffffffff;
  }
  FUN_1447a993c(param_1,uVar6);
  if (0 < (int)local_40) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      puVar2 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar2 = local_108;
      }
      uVar6 = uVar6 + 1;
      FUN_1447a993c(param_1,uVar6 & 0xffffffff);
      if ((0 < *(int *)(param_1 + 0x24)) || (lVar3 = param_1 + 8, 1 < *(int *)(param_1 + 4))) {
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
      *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)((longlong)(puVar2 + lVar4) + 8);
      *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(puVar2 + lVar4);
      lVar4 = lVar4 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140acce36 FUN_140acce36 body=1300 status=ok
// SIG undefined FUN_140acce36(void)

undefined8 FUN_140acce36(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x158) == *(int *)(param_1 + 0x184)) {
LAB_140acd2e3:
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar3 = *(longlong *)(param_1 + 400);
    }
    iVar9 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_2) * 4);
    if (iVar9 == -1) goto LAB_140acd2e3;
    lVar3 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x150) + (longlong)iVar9 * 0x20;
      if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar9 * 0x20) == param_2) {
        if (lVar6 == 0) goto LAB_140acd2e3;
        lVar3 = *(longlong *)(lVar6 + 8);
        plVar10 = *(longlong **)(lVar6 + 0x10);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          goto LAB_140accefa;
        }
        break;
      }
      iVar9 = *(int *)(lVar6 + 0x18);
    } while (iVar9 != -1);
  }
  plVar10 = (longlong *)0x0;
LAB_140accefa:
  plVar4 = (longlong *)FUN_1408a1f76(param_1);
  fVar16 = 0.0;
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cb56270 == 0) {
      local_a0 = &local_88;
      local_88 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_1427b09ee;
      local_a8 = &LAB_148630fef;
      local_b0 = FUN_1464b6a91;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10004001;
      local_d0 = 8;
      local_d8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb56270);
    if (plVar4 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_a0 = &local_88;
        local_88 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_1427b09ee;
        local_a8 = &LAB_148630fef;
        local_b0 = FUN_1464b6a91;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10004001;
        local_d0 = 8;
        local_d8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb56270);
      if (((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) &&
         (lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5), lVar6 != 0)) {
        if (*(longlong *)(param_1 + 0x48) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x50);
        }
        lVar7 = FUN_144860928();
        fVar11 = (float)(**(code **)(*plVar4 + 0x28))(plVar4,*(undefined4 *)(lVar7 + 0x90));
        if ((fVar11 != 0.0) || (fVar16 = 0.0, NAN(fVar11))) {
          fVar11 = *(float *)(lVar6 + 0x50c) / fVar11;
          fVar16 = 1.0;
          if (fVar11 <= 1.0) {
            fVar16 = fVar11;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x50);
  }
  lVar6 = FUN_144860928();
  fVar12 = (float)(**(code **)(*plVar4 + 0x30))(plVar4,*(undefined4 *)(lVar6 + 0x8c));
  fVar14 = 0.0;
  uVar15 = 0;
  fVar11 = 0.0;
  if ((fVar12 == 0.0) && (!NAN(fVar12))) goto LAB_140acd0d4;
  fVar11 = 0.0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar6 = FUN_1447210f0();
    fVar11 = 0.0;
    if (lVar6 != 0) {
      fVar11 = *(float *)(lVar6 + 0x930);
    }
  }
  if (((((*(longlong **)(param_1 + 0x70) == (longlong *)0x0) || (*(int *)(param_1 + 0x6c) == 0)) ||
       (uVar2 = *(uint *)(param_1 + 0x68), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 == 0)))) ||
     ((*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x6c) ||
      ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) {
LAB_140acd343:
    fVar13 = 0.0;
  }
  else {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))();
    plVar4 = (longlong *)FUN_140acd3d8(uVar8);
    if (plVar4 == (longlong *)0x0) goto LAB_140acd343;
    lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
    fVar13 = *(float *)(lVar6 + 0x78);
    if ((fVar13 == -1.0) && (!NAN(fVar13))) {
      if (*(longlong *)(param_1 + 0x40) == 0) goto LAB_140acd343;
      lVar6 = FUN_1447210f0();
      fVar13 = 0.0;
      if (lVar6 != 0) {
        fVar13 = *(float *)(lVar6 + 0x930);
      }
    }
  }
  fVar12 = (fVar11 - fVar13) / fVar12;
  fVar11 = 1.0;
  if (fVar12 <= 1.0) {
    fVar11 = fVar12;
  }
  fVar11 = 1.0 - fVar11;
LAB_140acd0d4:
  if (lVar3 != 0) {
    if (fVar11 <= fVar16) {
      fVar11 = fVar16;
    }
    fVar16 = (float)FUN_140acd34c(lVar3);
    fVar14 = (float)FUN_140acd622(lVar3);
    FUN_140acd522(lVar3,&local_88);
    fVar14 = ((float)local_88 - local_88._4_4_) * fVar14;
    if (fVar14 <= fVar16) {
      fVar14 = fVar16;
    }
    uVar8 = FUN_140acd458(lVar3);
    uVar15 = (undefined4)((ulonglong)uVar8 >> 0x20);
    fVar14 = ((float)uVar8 - fVar14) * fVar11 + fVar14;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar15,fVar14);
}



// FUNCTION 140acd34c FUN_140acd34c body=140 status=ok
// SIG undefined FUN_140acd34c(void)

ulonglong FUN_140acd34c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x3a0) == '\x01') {
    uVar3 = FUN_14576c4f8(param_1 + 0x40,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
    return uVar3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140acd3ab;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       ((((int)plVar2[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0))
        && (*plVar2 != 0)))) {
      uVar3 = (ulonglong)*(byte *)(*plVar2 + 0xbd8);
      goto LAB_140acd3ab;
    }
  }
  uVar3 = 0;
LAB_140acd3ab:
  return (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 0x18) + 0x168);
}



// FUNCTION 140acd3d8 FUN_140acd3d8 body=127 status=ok
// SIG undefined FUN_140acd3d8(void)

longlong FUN_140acd3d8(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0xc0) != 0) && (0 < *(int *)(param_1 + 0x80))) &&
     (piVar2 = *(int **)(param_1 + 0x78), *piVar2 != 0x7fffffff)) {
    if (piVar2[9] != 0 && *(longlong *)(piVar2 + 10) != 0) {
      uVar1 = piVar2[8];
      lVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (lVar3 == 0) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x10) != piVar2[9]) {
          return 0;
        }
        lVar4 = 0;
        if ((*(uint *)(lVar3 + 8) & 0x10200000) == 0) {
          lVar4 = *(longlong *)(piVar2 + 10);
        }
      }
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140acd458 FUN_140acd458 body=200 status=ok
// SIG undefined FUN_140acd458(void)

float FUN_140acd458(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  fVar1 = (float)FUN_140acd622();
  FUN_140acd522(param_1,&local_68);
  fVar4 = local_68 + local_64;
  fVar2 = (float)FUN_140acd34c(param_1);
  fVar3 = (float)FUN_140acd622(param_1);
  FUN_140acd522(param_1,&local_68);
  fVar3 = (local_68 - local_64) * fVar3;
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar4 = fVar4 * fVar1;
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140acd522 FUN_140acd522 body=255 status=ok
// SIG undefined FUN_140acd522(void)

float * FUN_140acd522(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x448) == '\x01') {
    FUN_14576c5d6(param_1 + 0x40,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
    return param_2;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140acd599;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((((int)plVar4[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))
        && (*plVar4 != 0)))) {
      uVar3 = (ulonglong)*(byte *)(*plVar4 + 0xbd8);
      goto LAB_140acd599;
    }
  }
  uVar3 = 0;
LAB_140acd599:
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 0x18);
  fVar7 = *(float *)(lVar2 + 0x118);
  fVar6 = *(float *)(lVar2 + 0x124);
  fVar5 = fVar7;
  if (fVar7 <= fVar6) {
    fVar5 = fVar6;
    fVar6 = fVar7;
  }
  fVar7 = fVar6;
  if (fVar6 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar7 = (fVar7 - fVar6) * 0.5;
  fVar7 = (fVar6 + fVar7) - fVar7;
  if (fVar5 <= fVar7) {
    fVar7 = fVar5;
  }
  fVar6 = (fVar5 - fVar7) * 0.5;
  param_2[1] = fVar6;
  *param_2 = fVar7 + fVar6;
  return param_2;
}



// FUNCTION 140acd622 FUN_140acd622 body=965 status=ok
// SIG undefined FUN_140acd622(void)

undefined4 FUN_140acd622(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x348) == '\x01') {
    local_b0[0] = '\0';
    local_88 = 0;
    FUN_1456bb102(local_b0,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
    puVar12 = &local_80;
    FUN_1448729ea(param_1 + 0x2f8,puVar12,local_b0);
    if (local_60 == 3) {
      uVar4 = 3;
      uVar15 = local_80;
    }
    else {
      puVar10 = &local_58;
      FUN_1400b56fe(puVar10,&local_80,3);
      uVar15 = 0;
      if (local_38 != 0) {
        uVar15 = local_58;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar10 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar3)(puVar10);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      uVar4 = (uint)local_60;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_68) {
        puVar12 = (undefined4 *)CONCAT44(uStack_7c,local_80);
      }
      (*pcVar3)(puVar12);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(CONCAT44(uStack_7c,local_80));
    }
    lVar5 = DAT_14c9a3da0;
    if ((longlong)local_88 != 0) {
      lVar9 = (longlong)local_88 + -1;
      lVar11 = lVar9 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
      if (*(longlong *)(lVar5 + lVar11) != 0) {
        FUN_1400020a8();
      }
      lVar5 = DAT_14c9a3da0;
      iVar8 = (int)lVar9;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
      }
      *(undefined4 *)(lVar5 + lVar11) = 0xffffffff;
      iVar6 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar6 = DAT_14c9a3dd0;
      }
      *(int *)(lVar5 + 4 + lVar11) = iVar6;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar7 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar7 = DAT_14c9a3dc0;
      }
      iVar6 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      bVar2 = (byte)lVar9 & 0x1f;
      DAT_14c9a3dd0 = iVar8;
      *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
           *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_88 = 0;
    }
    if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    goto LAB_140acd6ec;
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (((iVar8 == 0) || (uVar4 = *(uint *)(param_1 + 0x18), (int)uVar4 < 0)) ||
     (DAT_14c9647dc <= (int)uVar4)) {
    lVar5 = **(longlong **)(param_1 + 0x20);
    if (*(char *)(lVar5 + 0x12d) != '\0') goto LAB_140acd88f;
  }
  else {
    plVar13 = (longlong *)
              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != iVar8)) ||
       (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (*plVar13 == 0)))) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar14 * 0x18);
    if (*(char *)(lVar5 + 0x12d) != '\0') {
      if ((int)uVar4 < DAT_14c9647dc) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != iVar8)) ||
           ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_140acd88f;
        lVar5 = *plVar13;
      }
      else {
LAB_140acd88f:
        lVar5 = 0;
      }
      bVar2 = *(byte *)(lVar5 + 0xbd8);
      uVar15 = 0;
      if (((int)(uint)bVar2 < *(int *)(lVar5 + 0xbf0)) &&
         (*(longlong *)
           (*(longlong *)(lVar5 + 0xbe8) + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) != 0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
      }
      goto LAB_140acd6ec;
    }
  }
  uVar15 = *(undefined4 *)(lVar5 + 0x150);
LAB_140acd6ec:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140acda08 FUN_140acda08 body=108 status=ok
// SIG undefined FUN_140acda08(void)

void FUN_140acda08(float *param_1,float param_2,float param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_2;
  if (param_2 <= param_3) {
    fVar2 = param_3;
    param_3 = param_2;
  }
  fVar4 = param_3;
  if (param_3 <= *param_1 + param_1[1]) {
    fVar4 = *param_1 + param_1[1];
  }
  fVar3 = (fVar4 - param_3) * 0.5;
  if (param_4 != '\0') {
    fVar4 = param_3 + fVar3;
  }
  else {
    fVar4 = fVar4 - fVar3;
  }
  fVar1 = fVar4 - fVar3;
  if (fVar2 <= fVar4 - fVar3) {
    fVar1 = fVar2;
  }
  fVar4 = (fVar2 - fVar1) * 0.5;
  param_1[1] = fVar4;
  if (param_4 != '\0') {
    fVar2 = fVar1 + fVar4;
  }
  else {
    fVar2 = fVar2 - fVar4;
  }
  *param_1 = fVar2;
  return;
}



// FUNCTION 140acda74 FUN_140acda74 body=68 status=ok
// SIG undefined FUN_140acda74(void)

int FUN_140acda74(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140acdb30(param_1,iVar1);
  }
  FUN_140acdab8((longlong)iVar1 * 0x40 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140acdab8 FUN_140acdab8 body=22 status=ok
// SIG undefined FUN_140acdab8(void)

void FUN_140acdab8(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 140acdace FUN_140acdace body=98 status=ok
// SIG undefined FUN_140acdace(void)

int FUN_140acdace(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if ((longlong)iVar2 != 0) {
    iVar3 = *(int *)(*plVar1 + (longlong)(iVar2 + -1) * 4);
    iVar4 = -iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar3;
    }
  }
  if (param_2 != 0) {
    iVar3 = -(param_2 + iVar4);
    if (param_3 != '\0') {
      iVar3 = param_2 + iVar4;
    }
    *(uint *)(param_1 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar3;
  }
  return iVar4;
}



// FUNCTION 140acdb30 FUN_140acdb30 body=255 status=ok
// SIG undefined FUN_140acdb30(void)

void FUN_140acdb30(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140acdc30 FUN_140acdc30 body=190 status=ok
// SIG undefined FUN_140acdc30(void)

undefined8 * FUN_140acdc30(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x2f8))();
  if (cVar2 == '\x01') {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xe] = 0;
    *puVar3 = &PTR_FUN_14ae25d60;
    *(undefined1 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0xffffffff;
    *(undefined1 *)(puVar3 + 2) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0xffffffff;
    *(undefined1 *)(puVar3 + 3) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0xffffffff;
    *(undefined1 *)(puVar3 + 4) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0xffffffff;
    puVar3[7] = DAT_14c846520;
    uVar1 = DAT_14c846518;
    puVar3[5] = DAT_14c846510;
    puVar3[6] = uVar1;
    puVar3[10] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    puVar3[8] = DAT_14c8464e0;
    puVar3[9] = uVar1;
    puVar3[0xd] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    puVar3[0xb] = DAT_14c8464e0;
    puVar3[0xc] = uVar1;
  }
  return puVar3;
}



// FUNCTION 140acdcf6 FUN_140acdcf6 body=714 status=ok
// SIG undefined FUN_140acdcf6(void)

void FUN_140acdcf6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = param_1[6];
  if ((*(longlong *)(lVar5 + 0xb18) != 0) &&
     (plVar1 = *(longlong **)(lVar5 + 0xb20), plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar6 = (**(code **)(*param_1 + 0x3e0))(param_1);
    FUN_140ace004(uVar2,*(undefined1 *)(lVar5 + 0xd44),uVar6);
    plVar3 = *(longlong **)(param_1[6] + 0x1b0);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14cb6fd70 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_1487a9cc9;
        local_70 = FUN_1465433f8;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb6fd70);
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cb6fd70 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_1487a9cc9;
          local_70 = FUN_1465433f8;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
        }
        plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb6fd70);
        if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
          fVar7 = (float)FUN_14023bf44(plVar4);
          if (0.0 < fVar7) {
            lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
            plVar3 = (longlong *)(**(code **)(*plVar4 + 0x28))(plVar4);
            if (plVar3 == (longlong *)0x0) {
              fVar8 = -1.0;
            }
            else {
              fVar8 = (float)(**(code **)(*plVar3 + 0x30))(plVar3,*(undefined1 *)(lVar5 + 1));
              fVar8 = fVar8 + -1.0;
            }
            *(float *)(param_1 + 0x58) = (fVar7 * fVar8 + 1.0) * *(float *)(param_1 + 0x58);
          }
        }
      }
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,(int)param_1[0x58]);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_140ace06a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140acdfc2 FUN_140acdfc2 body=66 status=ok
// SIG undefined FUN_140acdfc2(void)

float FUN_140acdfc2(longlong *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)((longlong)param_1 + 0x20c);
  iVar1 = *(int *)((longlong)param_1 + 0x2dc);
  iVar2 = (**(code **)(*param_1 + 0x3c8))();
  if (iVar1 < iVar2) {
    fVar3 = fVar3 * *(float *)(param_1 + 0x43);
  }
  return fVar3;
}



// FUNCTION 140ace004 FUN_140ace004 body=101 status=ok
// SIG undefined FUN_140ace004(void)

void FUN_140ace004(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x150) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x150) + 0x178) == '\x03')) {
    lVar1 = FUN_14016530a();
    if (lVar1 != 0) {
      lVar1 = FUN_14008e0ae(lVar1);
      FUN_1409d461e(lVar1,*(float *)(lVar1 + 200) + *(float *)(lVar1 + 0x120) + param_3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140ace06a FUN_140ace06a body=1756 status=ok
// SIG undefined FUN_140ace06a(void)

void FUN_140ace06a(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  double local_c0;
  double local_b8;
  code *local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((-1 < (char)param_1[0x5a]) || (param_1[0x56] == 0)) goto LAB_140ace3b1;
  lVar8 = param_1[6];
  if (*(char *)(lVar8 + 0x178) != '\x03') {
    if (*(longlong **)(lVar8 + 0x1b0) == (longlong *)0x0) goto LAB_140ace3b1;
    cVar6 = (**(code **)(**(longlong **)(lVar8 + 0x1b0) + 0x700))();
    if (cVar6 == '\0') goto LAB_140ace3b1;
    lVar8 = param_1[6];
  }
  if ((*(longlong *)(lVar8 + 0x1b0) != 0) &&
     (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x1b0) + 0x3c0), lVar8 != 0)) {
    if (DAT_14caf9cd0 == 0) {
      local_e0 = &local_b0;
      local_b0 = FUN_141030f22;
      local_d0 = FUN_14081d0ea;
      local_d8 = (code *)&LAB_1463c0cc2;
      local_e8 = &LAB_147c9db5b;
      local_f0 = (code *)&LAB_1463f9c44;
      local_f8 = L"Game";
      local_100 = 0x2000000000;
      local_108 = 0x10000004;
      local_110 = 8;
      local_118 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
       (lVar11 = *(longlong *)(lVar8 + 0x448), lVar11 != 0)) {
      uVar9 = FUN_1405e72a0();
      plVar10 = (longlong *)FUN_144718840(lVar11,uVar9);
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
        if (lVar11 != 0) {
          uVar5 = *(ushort *)(param_1[6] + 0xbe0);
          if (*(uint *)(param_1 + 99) != (uint)uVar5) {
            *(uint *)(param_1 + 99) = (uint)uVar5;
            *(uint *)((longlong)param_1 + 0x31c) = (uint)uVar5;
          }
          *(int *)(param_1 + 100) = (int)param_1[100] + 1;
          fVar2 = *(float *)((longlong)param_1 + 0x20c);
          lVar8 = *(longlong *)(lVar8 + 0x448);
          fVar14 = (float)(**(code **)(*param_1 + 0x448))(param_1);
          if (lVar8 != 0) {
            if ((*(byte *)(param_1[0x56] + 0xb4) & 1) != 0) {
              fVar15 = (float)FUN_147c93b0c(lVar8);
              fVar14 = fVar14 * fVar15 * 0.5;
            }
            plVar10 = *(longlong **)(param_1[6] + 0x1b0);
            if (plVar10 != (longlong *)0x0) {
              if (DAT_14cb6fd70 == 0) {
                local_e0 = &local_b0;
                local_b0 = FUN_1449e2820;
                local_d0 = FUN_14081d0ea;
                local_d8 = FUN_1427b09ee;
                local_e8 = &LAB_1487a9cc9;
                local_f0 = FUN_1465433f8;
                local_f8 = L"Engine";
                local_100 = 0;
                local_108 = 0x10004001;
                local_110 = 8;
                local_118 = 0x28;
                FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
              }
              lVar12 = (**(code **)(*plVar10 + 0x288))(plVar10,DAT_14cb6fd70);
              if (lVar12 != 0) {
                if (DAT_14cb6fd70 == 0) {
                  local_e0 = &local_b0;
                  local_b0 = FUN_1449e2820;
                  local_d0 = FUN_14081d0ea;
                  local_d8 = FUN_1427b09ee;
                  local_e8 = &LAB_1487a9cc9;
                  local_f0 = FUN_1465433f8;
                  local_f8 = L"Engine";
                  local_100 = 0;
                  local_108 = 0x10004001;
                  local_110 = 8;
                  local_118 = 0x28;
                  FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
                }
                lVar13 = FUN_144718840(lVar12,DAT_14cb6fd70);
                if ((lVar12 != lVar13) && (lVar13 != 0)) {
                  fVar15 = (float)FUN_14023bf44(lVar13);
                  if (0.0 < fVar15) {
                    fVar14 = fVar14 * (fVar15 * (*(float *)(param_1[0x56] + 0x9c) + -1.0) + 1.0);
                    pfVar1 = (float *)(param_1[0x56] + 0xa0);
                    if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
                      fVar15 = (float)FUN_14023bdd2(lVar13);
                      fVar15 = tanf(fVar15 * *(float *)(lVar8 + 0x3a8) * 0.5 * 0.017453292);
                      fVar16 = tanf(*(float *)(lVar8 + 0x3a8) * 0.5 * 0.017453292);
                      fVar15 = (1.0 - *(float *)(param_1[0x56] + 0xa0)) * (fVar15 / fVar16) +
                               *(float *)(param_1[0x56] + 0xa0);
                      if (1.0 <= fVar15) {
                        fVar15 = 1.0;
                      }
                      if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                      }
                      fVar14 = fVar14 * fVar15;
                    }
                  }
                }
              }
            }
          }
          local_b8 = (double)(*(float *)((longlong)param_1 + 700) * fVar14);
          local_c0 = (double)(fVar14 * *(float *)(param_1 + 0x57));
          local_118 = CONCAT31(local_118._1_3_,fVar2 < 0.0);
          FUN_140ace748(param_1 + 99,&local_b0,param_1[0x56]);
          lVar8 = param_1[0x56];
          bVar7 = 1;
          if ((*(byte *)(lVar8 + 0xb4) & 2) != 0) {
            bVar7 = FUN_1402273fc(param_1[6]);
            bVar7 = bVar7 ^ 1;
            lVar8 = param_1[0x56];
          }
          *(byte *)((longlong)param_1 + 0x2d1) =
               *(byte *)((longlong)param_1 + 0x2d1) & 0xfe | bVar7 ^ 1;
          uVar3 = *(uint *)(lVar8 + 0xac);
          uVar4 = *(undefined4 *)(lVar8 + 0xb0);
          *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(lVar8 + 0xa4);
          *(undefined4 *)(lVar11 + 0xa8) = uVar4;
          *(uint *)(lVar11 + 0xa0) = uVar3;
          *(double *)(lVar11 + 0x80) = local_a8;
          *(code **)(lVar11 + 0x88) = local_b0;
          *(undefined8 *)(lVar11 + 0x90) = 0;
          *(double *)(lVar11 + 0x68) = local_a8 + *(double *)(lVar11 + 0x68);
          *(double *)(lVar11 + 0x70) = (double)local_b0 + *(double *)(lVar11 + 0x70);
          *(double *)(lVar11 + 0x78) = *(double *)(lVar11 + 0x78) + 0.0;
          *(undefined1 *)(lVar11 + 0xac) = 1;
          *(undefined1 *)(lVar11 + 0xae) = 0;
          *(byte *)(lVar11 + 0xad) = bVar7;
          if ((bVar7 ^ 1) == 0) {
            *(uint *)(lVar11 + 0xa4) = uVar3 ^ 0x80000000;
          }
          if ((*(byte *)((longlong)param_1 + 0x2d1) & 1) == 0) {
            if (param_1[0x62] != 0) {
              FUN_14480f766(lVar11 + 0x38);
              param_1[0x62] = 0;
            }
          }
          else if (param_1[0x62] == 0) {
            FUN_148a19a12(lVar11 + 0x38,&local_c0,param_1);
            param_1[0x62] = (longlong)local_c0;
          }
        }
      }
    }
  }
LAB_140ace3b1:
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ace748 FUN_140ace748 body=327 status=ok
// SIG undefined FUN_140ace748(void)

double * FUN_140ace748(longlong param_1,double *param_2,longlong param_3,double *param_4,
                      char param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  dVar2 = ((*(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x18)) *
           (double)((float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) +
          *(double *)(param_3 + 0x18)) * *param_4;
  *param_2 = dVar2;
  uVar5 = iVar1 * -0x4b9b4d07 + 0x9d6f2492;
  dVar3 = ((*(double *)(param_3 + 0x30) - *(double *)(param_3 + 0x20)) *
           (double)((float)(uVar5 >> 9 | 0x3f800000) + -1.0) + *(double *)(param_3 + 0x20)) *
          param_4[1];
  param_2[1] = dVar3;
  lVar4 = param_3 + 0x48;
  if (param_5 != '\0') {
    lVar4 = param_3 + 0x70;
  }
  lVar4 = FUN_1447e736e(lVar4);
  if (lVar4 != 0) {
    fVar6 = (float)*(int *)(param_1 + 8);
    if (((*(byte *)(param_3 + 0xb4) & 4) != 0) && (0 < *(int *)(param_1 + 0xc))) {
      fVar6 = fVar6 / ((float)*(int *)(param_1 + 0xc) * *(float *)(param_3 + 0x98));
    }
    fVar6 = (float)FUN_1449e6cbc(lVar4,fVar6);
    dVar2 = dVar2 * (double)fVar6;
    *param_2 = dVar2;
    dVar3 = dVar3 * (double)fVar6;
    param_2[1] = dVar3;
  }
  if (*(int *)(param_1 + 8) == 1) {
    *param_2 = dVar2 * *(double *)(param_3 + 0x38);
    param_2[1] = dVar3 * *(double *)(param_3 + 0x40);
  }
  *(uint *)(param_1 + 4) = uVar5;
  return param_2;
}



// FUNCTION 140ace890 FUN_140ace890 body=292 status=ok
// SIG undefined FUN_140ace890(void)

longlong * FUN_140ace890(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ace9c0 FUN_140ace9c0 body=392 status=ok
// SIG undefined FUN_140ace9c0(void)

void FUN_140ace9c0(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140aceb4a(local_38);
  if (*param_2 == '\x01') {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_40 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_48 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_40 = 1;
      local_48 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_140acea6c;
    }
  }
  local_30 = (char *)(lVar6 + 0x50);
LAB_140acea6c:
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    uVar4 = *(undefined4 *)(local_30 + 8);
    iVar9 = 0;
    do {
      puVar1 = local_48 + (int)local_40;
      *local_48 = uVar4;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aceb4a FUN_140aceb4a body=148 status=ok
// SIG undefined FUN_140aceb4a(void)

void FUN_140aceb4a(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 140acebec FUN_140acebec body=131 status=ok
// SIG undefined FUN_140acebec(void)

undefined8 * FUN_140acebec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a4a90;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140acec6f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140acec6f FUN_140acec6f body=107 status=ok
// SIG undefined FUN_140acec6f(void)

void FUN_140acec6f(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x80);
    do {
      *(undefined ***)(puVar1 + -8) = &PTR_FUN_14b00be10;
      FUN_14487da0a(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14487da48(*(undefined8 *)(puVar1 + -6),puVar1[-4]);
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140acecda FUN_140acecda body=179 status=ok
// SIG undefined FUN_140acecda(void)

void FUN_140acecda(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1401c3c2c();
  lVar2 = param_1[0x16];
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
        (param_1[0x15] != 0)) &&
       ((((*(byte *)(param_1[0x15] + 0x60) & 2) == 0 &&
         (*(char *)((longlong)param_1 + 0x683) == '\x02')) &&
        (*(char *)((longlong)param_1 + 0x686) == '\0')))) {
      *(undefined1 *)((longlong)param_1 + 0x683) = 1;
    }
  }
  if (*(char *)((longlong)param_1 + 0x683) == '\x01') {
    (**(code **)(*param_1 + 0x730))(param_1,1);
  }
  FUN_140acf01e(param_1);
  FUN_140aced8e(param_1);
  FUN_140acee66(param_1);
  return;
}



// FUNCTION 140aced8e FUN_140aced8e body=215 status=ok
// SIG undefined FUN_140aced8e(void)

void FUN_140aced8e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (((((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
       ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
      (*(char *)(param_1 + 0x683) != '\0')) &&
     ((lVar2 = param_1, *(char *)(param_1 + 0x684) != '\x01' ||
      ((*(longlong *)(param_1 + 0x720) != 0 &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar2 != 0)))))) {
    local_28 = FUN_140bb7632;
    local_20 = 0;
    FUN_140acf33c(lVar2 + 0x200,local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140acee66 FUN_140acee66 body=438 status=ok
// SIG undefined FUN_140acee66(void)

void FUN_140acee66(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) {
    uVar2 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar2,lVar5);
    plVar6 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_30 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      iVar4 = (int)plVar6[1];
      do {
        plVar7 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plVar6;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_38 != 0) {
          FUN_1408c1da2(local_38 + 0x2f0,param_1,0);
        }
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140acf01e FUN_140acf01e body=712 status=ok
// SIG undefined FUN_140acf01e(void)

void FUN_140acf01e(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if ((lVar5 == 0) || (*(longlong *)(param_1 + 0xa8) == 0)) goto LAB_140acf18a;
  if (*(char *)(param_1 + 0x684) == '\x01') {
    if ((*(longlong *)(param_1 + 0x720) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar8 != 0)) {
      uVar2 = *(undefined8 *)(lVar8 + 0x268);
      uVar6 = *(undefined8 *)(lVar8 + 0x270);
      *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(lVar8 + 0x260);
      *(undefined8 *)(param_1 + 0x710) = uVar2;
      *(undefined8 *)(param_1 + 0x718) = uVar6;
      uVar13 = *(undefined4 *)(lVar8 + 0x260);
      uVar14 = *(undefined4 *)(lVar8 + 0x264);
      uVar15 = *(undefined4 *)(lVar8 + 0x268);
      uVar16 = *(undefined4 *)(lVar8 + 0x26c);
      uVar6 = *(undefined8 *)(lVar8 + 0x270);
      goto LAB_140acf093;
    }
    bVar12 = false;
  }
  else {
    uVar13 = *(undefined4 *)(param_1 + 0x260);
    uVar14 = *(undefined4 *)(param_1 + 0x264);
    uVar15 = *(undefined4 *)(param_1 + 0x268);
    uVar16 = *(undefined4 *)(param_1 + 0x26c);
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    *(undefined4 *)(param_1 + 0x708) = uVar13;
    *(undefined4 *)(param_1 + 0x70c) = uVar14;
    *(undefined4 *)(param_1 + 0x710) = uVar15;
    *(undefined4 *)(param_1 + 0x714) = uVar16;
    *(undefined8 *)(param_1 + 0x718) = uVar6;
    lVar8 = param_1;
LAB_140acf093:
    *(undefined4 *)(param_1 + 0x6f0) = uVar13;
    *(undefined4 *)(param_1 + 0x6f4) = uVar14;
    *(undefined4 *)(param_1 + 0x6f8) = uVar15;
    *(undefined4 *)(param_1 + 0x6fc) = uVar16;
    *(undefined8 *)(param_1 + 0x700) = uVar6;
    bVar12 = (*(uint *)(lVar8 + 0x590) & 0xf00) == 0x300;
  }
  bVar1 = *(byte *)(lVar5 + 0x152);
  if (*(char *)(param_1 + 0x685) == '\x02') {
    uVar10 = 0x400;
  }
  else if ((*(char *)(param_1 + 0x685) == '\x01') || (*(char *)(param_1 + 0x683) == '\x01')) {
    uVar10 = 0x300;
  }
  else {
    uVar10 = (uint)(*(char *)(param_1 + 0x682) == '\0') << 9;
  }
  lVar5 = FUN_140612f46(param_1 + 0x6b8);
  if (lVar5 == 0) {
    uVar11 = 0xffffffff00000000;
  }
  else {
    lVar5 = FUN_140612f46(param_1 + 0x6b8);
    uVar11 = (ulonglong)*(uint *)(lVar5 + 0xc) << 0x20;
  }
  pcVar3 = DAT_14cae3c30;
  if ((*(longlong *)(param_1 + 0x688) != 0) && (DAT_14cae3c30 != (code *)0x0)) {
    plVar9 = &DAT_14cae3c50;
    if (DAT_14cae3c40 != (longlong *)0x0) {
      plVar9 = DAT_14cae3c40;
    }
    local_48 = *(longlong *)(param_1 + 0x688);
    uVar6 = (**(code **)(*plVar9 + 8))();
    uVar4 = (*pcVar3)(uVar6,&local_48);
    uVar10 = uVar10 | 1 << (uVar4 & 0x1f);
  }
  if (((bVar1 < 7 & 0x6aU >> (bVar1 & 0x1f)) == 0) || (bVar12 == ((uVar10 & 0xf00) == 0x300))) {
    bVar12 = false;
  }
  else {
    FUN_140acf690(param_1);
    bVar12 = true;
  }
  lVar5 = *(longlong *)(param_1 + 0x720);
  if (*(char *)(param_1 + 0x684) == '\x01') {
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x3a8), lVar5 != 0)) {
      *(ulonglong *)(lVar5 + 0x590) = uVar11 | uVar10;
      *(undefined1 *)(lVar5 + 0x4f5) = 1;
      uVar7 = 0;
      goto LAB_140acf180;
    }
  }
  else {
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x3a8) != 0)) {
      *(undefined1 *)(*(longlong *)(lVar5 + 0x3a8) + 0x4f5) = 0;
    }
    *(ulonglong *)(param_1 + 0x590) = uVar11 | uVar10;
    uVar7 = 1;
LAB_140acf180:
    *(undefined1 *)(param_1 + 0x4f5) = uVar7;
  }
  if (bVar12) {
    FUN_141062a52(param_1,0);
  }
LAB_140acf18a:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140acf2f8 FUN_140acf2f8 body=67 status=ok
// SIG undefined FUN_140acf2f8(void)

ulonglong FUN_140acf2f8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14477bcf0();
  if ((longlong)*(int *)(lVar1 + 0x50) != 0) {
    lVar2 = (longlong)*(int *)(lVar1 + 0x50) << 3;
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x48) + uVar3 * 8) == param_1) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 140acf33c FUN_140acf33c body=772 status=ok
// SIG undefined FUN_140acf33c(void)

undefined8 * FUN_140acf33c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14a7feda0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14aba4880;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_140acf4f0;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_140acf4da;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_140acf4da:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140acf4f0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140acf690 FUN_140acf690 body=1193 status=ok
// SIG undefined FUN_140acf690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acf690(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0xa0) != 0) && ((*(byte *)(param_1 + 0xb8) & 0x60) == 0x20)) {
    FUN_147c69af2(*(longlong *)(param_1 + 0xa0),param_1 + 0x30);
    *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xef;
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0x9f;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    lVar8 = *(longlong *)(param_1 + 0xa8);
    if (lVar8 != 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_38;
        local_38 = (code *)&LAB_14355090c;
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
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
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
      lVar8 = *(longlong *)(lVar8 + 0x20);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar4 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
             (lVar7 = lVar8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             != lVar4 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
        if (lVar7 != 0) {
          FUN_1479cbf44(lVar7 + 0x348,param_1);
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0x9c) & 8) == 0) {
    if ((param_1 != 0) && (DAT_14cad0ec0 != 0)) {
      if (DAT_14cac6e60 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_142b47bc4;
        local_58 = &LAB_1478989f1;
        local_60 = (code *)&LAB_146391124;
        local_68 = L"Engine";
        local_70 = 0x10000000000;
        local_78 = 0x10000005;
        local_80 = 0x10;
        local_88 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
         (*(longlong *)(param_1 + 0x380) != 0)) {
        FUN_1406f7bf0(*(longlong *)(param_1 + 0x380) + 0x228,param_1);
        *(undefined8 *)(param_1 + 0x380) = 0;
      }
    }
    if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar6 = (ulonglong)DAT_14cad0f58;
  if (0 < (longlong)uVar6) {
    bVar9 = false;
    DAT_14cad0f64 = DAT_14cad0f64 + 1;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(DAT_14cad0f50 + lVar8) != 0 &&
              (plVar2 = *(longlong **)(DAT_14cad0f50 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          DAT_14cad0f64 = DAT_14cad0f64 + -1;
          if (bVar9) goto LAB_140acf8d0;
          goto LAB_140acf7f8;
        }
      }
      uVar6 = uVar11 - 1;
      bVar9 = true;
    } while (1 < uVar11);
    DAT_14cad0f64 = DAT_14cad0f64 + -1;
LAB_140acf8d0:
    iVar1 = DAT_14cad0f58;
    if (DAT_14cad0f64 < 1) {
      if (0 < DAT_14cad0f58) {
        iVar10 = 0;
        do {
          if (((*(int *)(DAT_14cad0f50 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(DAT_14cad0f50 + (longlong)iVar10 * 0x10),
              plVar2 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(&DAT_14cad0f50,iVar10);
            FUN_14005b248(&DAT_14cad0f50);
          }
          else {
            iVar10 = iVar10 + 1;
          }
        } while (iVar10 < DAT_14cad0f58);
      }
      _DAT_14cad0f60 = 2;
      if (2 < DAT_14cad0f58 * 2) {
        _DAT_14cad0f60 = DAT_14cad0f58 * 2;
      }
      if ((_DAT_14cad0f60 < iVar1) && (DAT_14cad0f5c != DAT_14cad0f58)) {
        FUN_14045812c(&DAT_14cad0f50);
      }
    }
  }
LAB_140acf7f8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140acfb54 FUN_140acfb54 body=40 status=ok
// SIG undefined FUN_140acfb54(void)

undefined8 FUN_140acfb54(undefined8 param_1,int param_2)

{
  FUN_140acfb7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140acfb7c FUN_140acfb7c body=439 status=ok
// SIG undefined FUN_140acfb7c(void)

void FUN_140acfb7c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b1106e0;
  param_1[5] = &PTR_FUN_14b1111e0;
  param_1[6] = &PTR_FUN_14b111220;
  param_1[0x55] = &PTR_FUN_14b111270;
  param_1[0x56] = &PTR_FUN_14b1112f0;
  param_1[0x57] = &PTR_FUN_14b111300;
  param_1[0xe3] = &PTR_FUN_14b111330;
  plVar1 = param_1 + 0xf6;
  if (*(int *)(param_1 + 0xf7) == 0) {
LAB_140acfbed:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0xf7) = 0;
      goto LAB_140acfbed;
    }
  }
  plVar1 = param_1 + 0xf4;
  if (*(int *)(param_1 + 0xf5) == 0) {
LAB_140acfc0d:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0xf5) = 0;
      goto LAB_140acfc0d;
    }
  }
  plVar1 = param_1 + 0xf2;
  if (*(int *)(param_1 + 0xf3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140acfc39;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xf3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140acfc39:
  if (*(char *)((longlong)param_1 + 0x75c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x75c) = 0;
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e248(param_1);
  return;
}



// FUNCTION 140acfd40 FUN_140acfd40 body=156 status=ok
// SIG undefined FUN_140acfd40(void)

void FUN_140acfd40(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140acfddc(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_146de74fc(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_146de755c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140acfddc FUN_140acfddc body=255 status=ok
// SIG undefined FUN_140acfddc(void)

void FUN_140acfddc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140acfedc FUN_140acfedc body=121 status=ok
// SIG undefined FUN_140acfedc(void)

float FUN_140acfedc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x348);
  if (plVar1 == (longlong *)0x0) {
    fVar2 = 0.0;
    if ((param_3 != 0) && (fVar2 = 0.0, *(char *)(param_3 + 0x7c) == '\x01')) {
      fVar2 = *(float *)(param_3 + 0x78);
    }
  }
  else if (param_4 == 0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 8));
    if ((param_3 != 0) && ((*(byte *)(param_3 + 0x278) & 4) != 0)) {
      fVar3 = (float)FUN_140acff56(*(undefined8 *)(param_2 + 8));
      fVar2 = fVar2 * fVar3;
    }
  }
  else {
    fVar2 = *(float *)(param_4 + 0x164);
  }
  return fVar2;
}



// FUNCTION 140acff56 FUN_140acff56 body=206 status=ok
// SIG undefined FUN_140acff56(void)

void FUN_140acff56(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      uVar4 = 0x3f800000;
      goto LAB_140acffdc;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  uVar1 = FUN_1403ec9c0();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  uVar4 = 0x3f800000;
  if ((param_1 != 0) && (plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(0x3f800000,&local_20);
    if (DAT_14c950c29 == '\x01') {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        FUN_1456cec3c();
      }
    }
    plVar2 = (longlong *)0x0;
    if (local_20 != 0) {
      plVar2 = local_18;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    uVar4 = *(undefined4 *)(lVar3 + 0x114);
  }
LAB_140acffdc:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 140ad0026 FUN_140ad0026 body=584 status=ok
// SIG undefined FUN_140ad0026(void)

undefined4 FUN_140ad0026(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_1456bb102(local_b0);
  puVar10 = &local_80;
  FUN_1448729ea(param_1 + 0x48,puVar10,local_b0);
  if (local_60 == 3) {
    uVar5 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = 0;
    if (local_38 != 0) {
      uVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar5 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
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
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad027a FUN_140ad027a body=1620 status=ok
// SIG undefined FUN_140ad027a(void)

float FUN_140ad027a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1c8 [40];
  float local_1a0;
  undefined4 uStack_19c;
  longlong *local_190;
  ushort local_188;
  byte local_180;
  int local_178;
  float local_170;
  undefined4 uStack_16c;
  ushort local_158;
  byte local_150;
  float local_148;
  undefined4 uStack_144;
  longlong *local_138;
  ushort local_130;
  byte local_128;
  int local_120;
  float local_118;
  undefined4 uStack_114;
  ushort local_100;
  byte local_f8;
  char local_f0 [16];
  longlong *local_e0;
  undefined4 local_c8 [2];
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_1456bb102(local_f0);
  pfVar10 = &local_c0;
  FUN_1448729ea(param_1 + 0x48,pfVar10,local_f0);
  fVar14 = local_c0;
  if (local_a0 != 3) {
    pfVar12 = &local_148;
    FUN_1400b56fe(pfVar12,&local_c0,3);
    fVar14 = 0.0;
    if (local_128 != 0) {
      fVar14 = local_148;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_128 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_130) {
        pfVar12 = (float *)CONCAT44(uStack_144,local_148);
      }
      (*pcVar2)(pfVar12);
    }
    if (0x18 < local_130) {
      FUN_1400020a8(CONCAT44(uStack_144,local_148));
    }
  }
  local_148 = (float)((uint)local_148 & 0xffffff00);
  local_120 = 0;
  FUN_1456bb102(&local_148,param_2);
  pfVar12 = &local_118;
  FUN_1448729ea(param_1 + 0xe8,pfVar12,&local_148);
  fVar15 = local_118;
  if (local_f8 != 3) {
    pfVar13 = &local_1a0;
    FUN_1400b56fe(pfVar13,&local_118,3);
    fVar15 = 0.0;
    if (local_180 != 0) {
      fVar15 = local_1a0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_180 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_188) {
        pfVar13 = (float *)CONCAT44(uStack_19c,local_1a0);
      }
      (*pcVar2)(pfVar13);
    }
    if (0x18 < local_188) {
      FUN_1400020a8(CONCAT44(uStack_19c,local_1a0));
    }
  }
  local_1a0 = (float)((uint)local_1a0 & 0xffffff00);
  local_178 = 0;
  FUN_1456bb102(&local_1a0,param_2);
  pfVar13 = &local_170;
  FUN_1448729ea(param_1 + 0x98,pfVar13,&local_1a0);
  if (local_150 == 3) {
    local_150 = 3;
    fVar16 = local_170;
  }
  else {
    pfVar9 = &local_98;
    FUN_1400b56fe(pfVar9,&local_170,3);
    fVar16 = 0.0;
    if (local_78 != 0) {
      fVar16 = local_98;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar9 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar9);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_150 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_158) {
      pfVar13 = (float *)CONCAT44(uStack_16c,local_170);
    }
    (*pcVar2)(pfVar13);
  }
  if (0x18 < local_158) {
    FUN_1400020a8(CONCAT44(uStack_16c,local_170));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_178 != 0) {
    lVar8 = (longlong)local_178 + -1;
    lVar11 = lVar8 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar7 = (int)lVar8;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar5 = iVar7;
    }
    bVar3 = (byte)lVar8 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_178 = 0;
  }
  if ((local_1a0._0_1_ == '\x03') && (local_190 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_190 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_190 + 0x10))();
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_100) {
      pfVar12 = (float *)CONCAT44(uStack_114,local_118);
    }
    (*pcVar2)(pfVar12);
  }
  if (0x18 < local_100) {
    FUN_1400020a8(CONCAT44(uStack_114,local_118));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_120 != 0) {
    lVar11 = (longlong)local_120 + -1;
    lVar8 = lVar11 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar4 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar7 = (int)lVar11;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar8) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar5 = iVar7;
    }
    bVar3 = (byte)lVar11 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_120 = 0;
  }
  if ((local_148._0_1_ == '\x03') && (local_138 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_138 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_138 + 0x10))();
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar10 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar10);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (fVar14 + fVar15 + fVar16) / 6.0;
}



// FUNCTION 140ad08de FUN_140ad08de body=71 status=ok
// SIG undefined FUN_140ad08de(void)

undefined8 * FUN_140ad08de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3442b0;
  FUN_1447cd778(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ad0925 FUN_140ad0925 body=159 status=ok
// SIG undefined FUN_140ad0925(void)

undefined8 * FUN_140ad0925(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x200,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e5fe0;
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_140ad09c6(puVar1 + 2,param_1,*param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad09c6 FUN_140ad09c6 body=5999 status=ok
// SIG undefined FUN_140ad09c6(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140ad09c6(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *******pppppppuVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  void *_Dst;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined2 *local_178;
  undefined8 ******local_170;
  longlong lStack_168;
  ulonglong uStack_160;
  undefined4 local_158;
  byte local_154;
  undefined8 *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined2 *local_108;
  undefined *local_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  int local_e0;
  undefined8 *******local_d8;
  undefined8 uStack_d0;
  ushort local_c0;
  byte local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = FUN_143c91454;
  param_1[3] = *param_4;
  lVar23 = param_4[1];
  param_1[4] = lVar23;
  if (lVar23 != 0) {
    LOCK();
    *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = &DAT_14a171d50;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar9 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x10) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar23 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar23 = 0;
    }
    iVar8 = *(int *)(lVar23 + 0x10);
    if (*(int *)(lVar23 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar8 = *(int *)(lVar23 + 0x10);
      bVar24 = iVar8 == 0;
      if (bVar24) {
        *(int *)(lVar23 + 0x10) = iVar19;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar24) {
        iVar8 = iVar19;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x84) = iVar8;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  local_1e0 = param_4;
  if (*param_4 == 0) goto LAB_140ad120e;
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    uVar9 = *(uint *)(param_2 + 0x208);
    if (0 < (int)uVar9) {
      uVar2 = *(uint *)(param_1[3] + 0x164);
      if ((ulonglong)uVar2 == 0xffffffff) {
        local_1c8 = 0;
        uVar11 = *(undefined8 *)(param_2 + 0x200);
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar9);
        plVar15 = (longlong *)0x0;
        FUN_140ad25e8(&local_1c8,uVar9,0);
        FUN_140ad2494(local_1c8,uVar11,uVar9);
        if (*(int *)((longlong)param_1 + 0x84) != 0) {
          uVar9 = *(uint *)(param_1 + 0x10);
          plVar15 = (longlong *)0x0;
          if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
            puVar18 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if ((puVar18 == (undefined8 *)0x0) ||
               ((*(int *)(puVar18 + 2) != *(int *)((longlong)param_1 + 0x84) ||
                ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = (longlong *)*puVar18;
            }
          }
        }
        do {
          if (plVar15[5] != 0) {
            lVar23 = *(longlong *)(plVar15[5] + 0x30);
            if (lVar23 != 0) {
              uVar11 = *(undefined8 *)(lVar23 + 0x360);
              goto LAB_140ad0cae;
            }
            break;
          }
          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x2f0))(plVar15);
        } while (plVar15 != (longlong *)0x0);
        uVar11 = 0;
LAB_140ad0cae:
        plVar15 = (longlong *)0x0;
        FUN_140149a73(uVar11);
        iVar8 = *(int *)(param_1[3] + 0xf4);
        if (iVar8 != 0) {
          uVar9 = *(uint *)(param_1[3] + 0xf0);
          plVar15 = (longlong *)0x0;
          if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
            puVar18 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if ((puVar18 == (undefined8 *)0x0) ||
               (((*(int *)(puVar18 + 2) != iVar8 || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) ||
                ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = (longlong *)*puVar18;
            }
          }
        }
        uVar20 = uStack_1c0 & 0xffffffff;
        if ((int)(uint)uStack_1c0 < 1) {
          bVar24 = true;
          param_4 = local_1e0;
        }
        else {
          uVar21 = 0;
          local_1e8 = plVar15;
          do {
            uVar9 = (uint)uVar21;
            lVar23 = uVar21 * 0x80;
            bVar6 = 1;
            if (*(int *)(local_1c8 + 0x78 + lVar23) == 0) {
              bVar5 = 1;
            }
            else {
              bVar5 = FUN_1405d584e(local_1c8 + lVar23 + 0x70);
            }
            if (*(int *)(local_1c8 + 0x58 + lVar23) != 0) {
              bVar6 = FUN_14576c79f(local_1c8 + lVar23 + 0x50);
            }
            cVar7 = '\x01';
            if (*(int *)(local_1c8 + 0x68 + lVar23) != 0) {
              cVar7 = FUN_14576c79f();
            }
            lVar23 = local_1c8;
            if (((bVar5 & bVar6) != 1) || (cVar7 == '\0')) {
              lVar10 = (longlong)(int)uVar9 * 0x80;
              FUN_1447cd778(*(undefined8 *)(local_1c8 + 0x70 + lVar10));
              if (*(longlong *)(lVar23 + 0x70 + lVar10) != 0) {
                FUN_1400020a8();
              }
              _Dst = (void *)(lVar23 + lVar10);
              if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
                FUN_1400020a8();
              }
              if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
                FUN_1400020a8();
              }
              plVar15 = (longlong *)((longlong)_Dst + 0x20);
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                                 (ulonglong)((uint)*(byte *)((longlong)_Dst + 0x40) * 0x120));
              if (pcVar3 != (code *)0x0) {
                plVar14 = plVar15;
                if (0x18 < *(ushort *)((longlong)_Dst + 0x38)) {
                  plVar14 = (longlong *)*plVar15;
                }
                (*pcVar3)(plVar14);
              }
              if (0x18 < *(ushort *)((longlong)_Dst + 0x38)) {
                FUN_1400020a8(*plVar15);
              }
              if (~uVar9 + (uint)uStack_1c0 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + 0x80),
                        (longlong)(int)(~uVar9 + (uint)uStack_1c0) << 7);
              }
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 + -1);
              FUN_140ad229c();
              uVar9 = uVar9 - 1;
            }
            uVar21 = (ulonglong)(uVar9 + 1);
            uVar20 = uStack_1c0 & 0xffffffff;
          } while ((int)(uVar9 + 1) < (int)(uint)uStack_1c0);
          if ((int)(uint)uStack_1c0 < 1) {
            bVar24 = true;
            param_4 = local_1e0;
          }
          else {
            DAT_14cb70b40 = DAT_14cb70b40 * 0xbb38435 + 0x3619636b;
            fVar26 = (float)(DAT_14cb70b40 >> 9 | 0x3f800000) + -1.0;
            uVar9 = (uint)uStack_1c0;
            if (fVar26 < 0.0) {
              uVar9 = rand();
              fVar26 = (float)(uVar9 & 0x7fff) / 32767.0;
              uVar9 = (uint)uStack_1c0;
            }
            local_118 = (undefined8 *)0x0;
            local_10c = 0x20;
            local_110 = uVar9;
            if (0x20 < uVar9) {
              FUN_140fb08bc(&local_198);
            }
            puVar18 = local_118;
            if (local_118 == (undefined8 *)0x0) {
              puVar18 = &local_198;
            }
            memset(puVar18,0,(longlong)(int)uVar9 << 2);
            if ((int)(uint)uStack_1c0 < 1) {
              uVar20 = 0xffffffffffffffff;
            }
            else {
              fVar27 = 0.0;
              lVar10 = 0x18;
              lVar23 = 0;
              do {
                lVar22 = local_1c8 + lVar10;
                local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffffffffff00);
                local_e0 = 0;
                FUN_1456bb102(&local_108,0);
                FUN_1447c3578(lVar22,&local_d8,&local_108);
                if (local_b8 == 3) {
                  uVar9 = 3;
                  uVar28 = local_d8._0_4_;
                }
                else {
                  FUN_1400b56fe(&local_a8,&local_d8,3);
                  uVar28 = 0;
                  if (local_88 != 0) {
                    uVar28 = local_a8;
                  }
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    puVar17 = &local_a8;
                    if (0x18 < local_90) {
                      puVar17 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
                    }
                    (*pcVar3)(puVar17);
                  }
                  if (0x18 < local_90) {
                    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
                  }
                  uVar9 = (uint)local_b8;
                }
                pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
                if (pcVar3 != (code *)0x0) {
                  pppppppuVar16 = &local_d8;
                  if (0x18 < local_c0) {
                    pppppppuVar16 = local_d8;
                  }
                  (*pcVar3)(pppppppuVar16);
                }
                if (0x18 < local_c0) {
                  FUN_1400020a8(local_d8);
                }
                if ((longlong)local_e0 != 0) {
                  lVar22 = (longlong)local_e0 + -1;
                  local_1e8 = DAT_14c9a3da0;
                  FUN_1448176ff(DAT_14c9a3da0[lVar22 * 2],(int)DAT_14c9a3da0[lVar22 * 2 + 1]);
                  if (local_1e8[lVar22 * 2] != 0) {
                    FUN_1400020a8();
                  }
                  plVar15 = DAT_14c9a3da0;
                  iVar8 = (int)lVar22;
                  if (DAT_14c9a3dd4 != 0) {
                    *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 2) = iVar8;
                  }
                  *(undefined4 *)(plVar15 + lVar22 * 2) = 0xffffffff;
                  iVar19 = -1;
                  if (0 < DAT_14c9a3dd4) {
                    iVar19 = DAT_14c9a3dd0;
                  }
                  *(int *)((longlong)plVar15 + lVar22 * 0x10 + 4) = iVar19;
                  DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                  puVar13 = DAT_14c9a3dc0;
                  if (DAT_14c9a3dc0 == (undefined *)0x0) {
                    puVar13 = &DAT_14c9a3db0;
                  }
                  iVar19 = iVar8 + 0x1f;
                  if (-1 < iVar8) {
                    iVar19 = iVar8;
                  }
                  bVar6 = (byte)lVar22 & 0x1f;
                  DAT_14c9a3dd0 = iVar8;
                  *(uint *)(puVar13 + (longlong)(iVar19 >> 5) * 4) =
                       *(uint *)(puVar13 + (longlong)(iVar19 >> 5) * 4) &
                       (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                  local_e0 = 0;
                }
                if (((char)local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_f8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_f8 + 0x10))();
                  }
                }
                puVar18 = local_118;
                if (local_118 == (undefined8 *)0x0) {
                  puVar18 = &local_198;
                }
                *(undefined4 *)((longlong)puVar18 + lVar23 * 4) = uVar28;
                puVar18 = local_118;
                if (local_118 == (undefined8 *)0x0) {
                  puVar18 = &local_198;
                }
                fVar27 = fVar27 + *(float *)((longlong)puVar18 + lVar23 * 4);
                lVar23 = lVar23 + 1;
                lVar10 = lVar10 + 0x80;
              } while (lVar23 < (int)(uint)uStack_1c0);
              uVar20 = 0xffffffffffffffff;
              if (0 < (int)(uint)uStack_1c0) {
                fVar25 = 0.0;
                uVar21 = 0;
                do {
                  bVar24 = fVar25 <= fVar26 * fVar27;
                  fVar25 = fVar25 + *(float *)((longlong)puVar18 + uVar21 * 4);
                  if ((bVar24) && (uVar20 = uVar21, fVar26 * fVar27 <= fVar25)) break;
                  uVar21 = uVar21 + 1;
                  uVar20 = 0xffffffffffffffff;
                } while ((uStack_1c0 & 0xffffffff) != uVar21);
              }
            }
            param_4 = local_1e0;
            if (local_118 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            local_108 = *(undefined2 **)(local_1c8 + uVar20 * 0x80);
            FUN_1401533ba(&local_198,&local_108,1);
            bVar24 = false;
            uVar20 = uStack_1c0 & 0xffffffff;
          }
        }
        FUN_140c638d7(local_1c8,uVar20);
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        if (!bVar24) goto LAB_140ad11d4;
      }
      else if (uVar2 < uVar9) {
        local_108 = *(undefined2 **)(*(longlong *)(param_2 + 0x200) + (ulonglong)uVar2 * 0x80);
        goto LAB_140ad0bac;
      }
    }
LAB_140ad11be:
    uStack_190 = (undefined8 ******)CONCAT44(uStack_190._4_4_,DAT_14c948620);
    local_198 = DAT_14c948618;
  }
  else {
    if (*(char *)(param_2 + 0x1e0) != '\0') goto LAB_140ad11be;
    local_108 = *(undefined2 **)(param_1[0xd] + 0x1e8);
LAB_140ad0bac:
    FUN_1401533ba(&local_198,&local_108,1);
  }
LAB_140ad11d4:
  *(int *)(param_1 + 0x26) = (int)uStack_190;
  param_1[0x25] = local_198;
  DAT_14cb70750 = DAT_14cb70750 + 1;
  *(int *)(param_1 + 0x11) = DAT_14cb70750;
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(*param_4 + 0x138);
  iVar8 = *(int *)((longlong)param_1 + 0x84);
LAB_140ad120e:
  if ((((iVar8 == 0) || (uVar9 = *(uint *)(param_1 + 0x10), (int)uVar9 < 0)) ||
      (DAT_14c9647dc <= (int)uVar9)) ||
     ((plVar15 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
      plVar15 == (longlong *)0x0 || ((int)plVar15[2] != iVar8)))) {
    FUN_140ad21c8(param_1);
  }
  else {
    if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
      plVar14 = (longlong *)*plVar15;
    }
    else {
      plVar14 = (longlong *)0x0;
    }
    if (((*(uint *)(plVar15 + 1) & 0x10200000) == 0) &&
       (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)) {
      do {
        if (plVar15[5] != 0) {
          lVar23 = *(longlong *)(plVar15[5] + 0x30);
          if (lVar23 == 0) goto LAB_140ad1e46;
          lVar23 = *(longlong *)(lVar23 + 0x360);
          break;
        }
        plVar15 = (longlong *)(**(code **)(*plVar15 + 0x2f0))(plVar15);
        lVar23 = 0;
      } while (plVar15 != (longlong *)0x0);
    }
    else {
LAB_140ad1e46:
      lVar23 = 0;
    }
    lVar10 = FUN_140ad21c8(param_1);
    if ((((plVar14 != (longlong *)0x0) && ((**(code **)(*plVar14 + 0x2c0))(plVar14), lVar23 != 0))
        && (param_1[3] != 0)) && ((lVar10 != 0 && ((*(byte *)(lVar23 + 0x155) & 0x20) == 0)))) {
      FUN_1405d7ab2(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
      *(undefined4 *)(param_1 + 0x22) = 0;
      if (*(int *)((longlong)param_1 + 0x114) != 0) {
        FUN_140f8dd3e(param_1 + 0x21,0);
      }
      local_108 = &DAT_14a171d50;
      local_f8 = (longlong *)0x0;
      uStack_f0 = 0;
      lVar23 = param_1[3];
      local_100 = &DAT_14cb70058;
      local_a8 = (undefined4)DAT_14c8464e0;
      uStack_a4 = DAT_14c8464e0._4_4_;
      uStack_a0 = (undefined4)DAT_14c8464e8;
      uStack_9c = DAT_14c8464e8._4_4_;
      local_98 = DAT_14c8464f0;
      if ((*(byte *)(lVar23 + 0x152) & 1) != 0) {
        local_1b0 = *(undefined8 *)(lVar23 + 0x118);
        FUN_1400021e4(&local_1b0,&local_d8);
        FUN_1400b22c2(&local_1c8,"Region.");
        FUN_1401c7f3e(&local_198,&local_1c8,&local_d8);
        iVar8 = (int)uStack_190 + -1;
        if ((int)uStack_190 == 0) {
          iVar8 = 0;
        }
        FUN_1446f82e2(&local_1a0,iVar8,local_198,1);
        local_1a8 = local_1a0;
        FUN_140653d46(&local_108);
        if (local_198 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != (undefined8 *******)0x0) {
          FUN_1400020a8();
        }
        lVar23 = param_1[3];
      }
      local_d8 = (undefined8 *******)0x0;
      uStack_d0 = 0;
      if (*(int *)(lVar23 + 0x80) == 0) {
        FUN_1405dc634(&local_108,lVar23 + 0x88);
      }
      else if (*(int *)(lVar23 + 0x80) == 1) {
        local_1c8 = 0;
        uStack_1c0 = 0;
        FUN_1449f3ff4(lVar23 + 0x88,&local_1c8);
        if (0 < (int)(uint)uStack_1c0) {
          lVar23 = 0;
          lVar10 = 0;
          do {
            local_198 = &DAT_14a171d50;
            uStack_190 = (undefined8 ******)0x0;
            uStack_188 = 0;
            uStack_180 = 0;
            FUN_1405dc634(&local_198,&local_108);
            FUN_140653d46(&local_198,local_1c8 + lVar23);
            uVar20 = uStack_d0;
            lVar22 = (longlong)(int)uStack_d0;
            uVar9 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
            if (uStack_d0._4_4_ < uVar9) {
              FUN_1406131f8(&local_d8,uVar20 & 0xffffffff);
            }
            pppppppuVar16 = local_d8 + lVar22 * 4;
            *pppppppuVar16 = (undefined8 ******)&DAT_14a171d50;
            pppppppuVar16[1] = (undefined8 ******)0x0;
            pppppppuVar16[2] = (undefined8 ******)0x0;
            pppppppuVar16[3] = (undefined8 ******)0x0;
            pppppppuVar16[1] = uStack_190;
            FUN_1406022fe(pppppppuVar16 + 2,&uStack_188);
            local_198 = &DAT_14a171d50;
            uVar20 = uStack_180 >> 0x20;
            uStack_180 = uStack_180 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              FUN_140115c12(&uStack_188,0);
            }
            uStack_190 = (undefined8 ******)0x0;
            if (uStack_188 != 0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 1;
            lVar23 = lVar23 + 8;
          } while (lVar10 < (int)(uint)uStack_1c0);
        }
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
      }
      local_1e8 = param_1 + 0x2e;
      lVar23 = param_1[0xd];
      if (*(char *)(lVar23 + 0x1e0) == '\x01') {
        if (0 < (longlong)*(int *)(lVar23 + 0x208)) {
          plVar15 = *(longlong **)(lVar23 + 0x200);
          plVar14 = plVar15 + (longlong)*(int *)(lVar23 + 0x208) * 0x10;
          do {
            lVar23 = plVar15[1];
            if (lVar23 == 0) {
              uVar11 = FUN_14060ed7a();
              lVar23 = FUN_14477b664(uVar11);
              plVar15[1] = lVar23;
            }
            puVar12 = (undefined2 *)plVar15[2];
            if (puVar12 == (undefined2 *)0x0) {
              if ((lVar23 != 0) && (*plVar15 != 0)) {
                plVar4 = *(longlong **)(lVar23 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
                  plVar15[2] = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  puVar12 = (undefined2 *)FUN_144aff482(uVar11,plVar15);
                  plVar15[2] = (longlong)puVar12;
                  if (puVar12 != (undefined2 *)0x0) goto LAB_140ad14ac;
                }
              }
            }
            else {
LAB_140ad14ac:
              if ((longlong)(int)uStack_d0 == 0) {
                bVar6 = *(byte *)(param_1[3] + 0xc);
                if (bVar6 == 1) {
                  local_1cc = *(undefined4 *)(param_1[3] + 8);
                }
                uStack_180 = local_98;
                uStack_190 = (undefined8 ******)CONCAT44(uStack_a4,local_a8);
                uStack_188 = CONCAT44(uStack_9c,uStack_a0);
                local_178 = &DAT_14a171d50;
                lStack_168 = 0;
                uStack_160 = 0;
                local_170 = (undefined8 ******)local_100;
                local_198 = puVar12;
                FUN_1406022fe(&lStack_168,&local_f8);
                plVar4 = local_1e8;
                if (bVar6 != 0) {
                  local_158 = local_1cc;
                }
                iVar8 = *(int *)(param_1 + 0x2f);
                *(uint *)(param_1 + 0x2f) = iVar8 + 1U;
                local_154 = bVar6;
                if (*(uint *)((longlong)param_1 + 0x17c) < iVar8 + 1U) {
                  FUN_140ad231e(local_1e8,iVar8);
                }
                lVar23 = *plVar4;
                puVar17 = (undefined4 *)(lVar23 + (longlong)iVar8 * 0x48);
                puVar17[4] = (undefined4)uStack_188;
                puVar17[5] = uStack_188._4_4_;
                puVar17[6] = (undefined4)uStack_180;
                puVar17[7] = uStack_180._4_4_;
                *puVar17 = (undefined4)local_198;
                puVar17[1] = local_198._4_4_;
                puVar17[2] = (int)uStack_190;
                puVar17[3] = uStack_190._4_4_;
                FUN_140ad2136(puVar17 + 8,&local_178);
                *(byte *)(puVar17 + 0x11) = local_154;
                if (local_154 == 1) {
                  *(undefined4 *)(lVar23 + (longlong)iVar8 * 0x48 + 0x40) = local_158;
                }
                if ((local_154 & 1) != 0) {
                  local_154 = 0;
                }
                local_178 = &DAT_14a171d50;
                uVar20 = uStack_160 >> 0x20;
                uStack_160 = uStack_160 & 0xffffffff00000000;
                if ((int)uVar20 != 0) {
                  FUN_140115c12(&lStack_168,0);
                }
                local_170 = (undefined8 ******)0x0;
                if (lStack_168 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                lVar23 = (longlong)(int)uStack_d0 << 5;
                pppppppuVar16 = local_d8 + 2;
                do {
                  bVar6 = *(byte *)(param_1[3] + 0xc);
                  if (bVar6 == 1) {
                    local_1d0 = *(undefined4 *)(param_1[3] + 8);
                  }
                  uStack_180 = local_98;
                  uStack_190 = (undefined8 ******)CONCAT44(uStack_a4,local_a8);
                  uStack_188 = CONCAT44(uStack_9c,uStack_a0);
                  local_178 = &DAT_14a171d50;
                  lStack_168 = 0;
                  uStack_160 = 0;
                  local_170 = pppppppuVar16[-1];
                  local_198 = puVar12;
                  FUN_1406022fe(&lStack_168,pppppppuVar16);
                  plVar4 = local_1e8;
                  if (bVar6 != 0) {
                    local_158 = local_1d0;
                  }
                  iVar8 = *(int *)(param_1 + 0x2f);
                  *(uint *)(param_1 + 0x2f) = iVar8 + 1U;
                  local_154 = bVar6;
                  if (*(uint *)((longlong)param_1 + 0x17c) < iVar8 + 1U) {
                    FUN_140ad231e(local_1e8,iVar8);
                  }
                  local_1d8 = *plVar4;
                  lVar10 = local_1d8 + 0x20 + (longlong)iVar8 * 0x48;
                  *(undefined4 *)(lVar10 + -0x10) = (undefined4)uStack_188;
                  *(undefined4 *)(lVar10 + -0xc) = uStack_188._4_4_;
                  *(undefined4 *)(lVar10 + -8) = (undefined4)uStack_180;
                  *(undefined4 *)(lVar10 + -4) = uStack_180._4_4_;
                  *(undefined4 *)(lVar10 + -0x20) = (undefined4)local_198;
                  *(undefined4 *)(lVar10 + -0x1c) = local_198._4_4_;
                  *(int *)(lVar10 + -0x18) = (int)uStack_190;
                  *(undefined4 *)(lVar10 + -0x14) = uStack_190._4_4_;
                  FUN_140ad2136(lVar10,&local_178);
                  *(byte *)(lVar10 + 0x24) = local_154;
                  if (local_154 == 1) {
                    *(undefined4 *)(local_1d8 + (longlong)iVar8 * 0x48 + 0x40) = local_158;
                  }
                  if ((local_154 & 1) != 0) {
                    local_154 = 0;
                  }
                  local_178 = &DAT_14a171d50;
                  uVar20 = uStack_160 >> 0x20;
                  uStack_160 = uStack_160 & 0xffffffff00000000;
                  if ((int)uVar20 != 0) {
                    FUN_140115c12(&lStack_168,0);
                  }
                  local_170 = (undefined8 ******)0x0;
                  if (lStack_168 != 0) {
                    FUN_1400020a8();
                  }
                  pppppppuVar16 = pppppppuVar16 + 4;
                  lVar23 = lVar23 + -0x20;
                } while (lVar23 != 0);
              }
            }
            plVar15 = plVar15 + 0x10;
          } while (plVar15 != plVar14);
        }
      }
      else if (*(char *)(lVar23 + 0x1e0) == '\0') {
        local_1c8 = *(longlong *)(lVar23 + 0x1e8);
        puVar18 = &local_198;
        FUN_1446dcdd4(puVar18);
        puVar12 = (undefined2 *)FUN_14060eaf6(puVar18);
        if (uStack_180 != 0) {
          FUN_1400020a8();
        }
        if (puVar12 != (undefined2 *)0x0) {
          if ((longlong)(int)uStack_d0 == 0) {
            bVar6 = *(byte *)(param_1[3] + 0xc);
            if (bVar6 == 1) {
              puVar18 = (undefined8 *)(ulonglong)*(uint *)(param_1[3] + 8);
            }
            uStack_190 = (undefined8 ******)CONCAT44(uStack_a4,local_a8);
            uStack_188 = CONCAT44(uStack_9c,uStack_a0);
            uStack_180 = local_98;
            local_178 = &DAT_14a171d50;
            lStack_168 = 0;
            uStack_160 = 0;
            local_170 = (undefined8 ******)local_100;
            local_198 = puVar12;
            FUN_1406022fe(&lStack_168,&local_f8);
            plVar15 = local_1e8;
            if (bVar6 != 0) {
              local_158 = SUB84(puVar18,0);
            }
            iVar8 = *(int *)(param_1 + 0x2f);
            *(uint *)(param_1 + 0x2f) = iVar8 + 1U;
            local_154 = bVar6;
            if (*(uint *)((longlong)param_1 + 0x17c) < iVar8 + 1U) {
              FUN_140ad231e(local_1e8,iVar8);
            }
            lVar23 = *plVar15;
            puVar17 = (undefined4 *)(lVar23 + (longlong)iVar8 * 0x48);
            puVar17[4] = (undefined4)uStack_188;
            puVar17[5] = uStack_188._4_4_;
            puVar17[6] = (undefined4)uStack_180;
            puVar17[7] = uStack_180._4_4_;
            *puVar17 = (undefined4)local_198;
            puVar17[1] = local_198._4_4_;
            puVar17[2] = (int)uStack_190;
            puVar17[3] = uStack_190._4_4_;
            FUN_140ad2136(puVar17 + 8,&local_178);
            *(byte *)(puVar17 + 0x11) = local_154;
            if (local_154 == 1) {
              *(undefined4 *)(lVar23 + (longlong)iVar8 * 0x48 + 0x40) = local_158;
            }
            if ((local_154 & 1) != 0) {
              local_154 = 0;
            }
            local_178 = &DAT_14a171d50;
            uVar20 = uStack_160 >> 0x20;
            uStack_160 = uStack_160 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              FUN_140115c12(&lStack_168,0);
            }
            local_170 = (undefined8 ******)0x0;
            if (lStack_168 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            lVar23 = (longlong)(int)uStack_d0 << 5;
            pppppppuVar16 = local_d8 + 2;
            do {
              bVar6 = *(byte *)(param_1[3] + 0xc);
              if (bVar6 == 1) {
                local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1[3] + 8));
              }
              uStack_180 = local_98;
              uStack_190 = (undefined8 ******)CONCAT44(uStack_a4,local_a8);
              uStack_188 = CONCAT44(uStack_9c,uStack_a0);
              local_178 = &DAT_14a171d50;
              lStack_168 = 0;
              uStack_160 = 0;
              local_170 = pppppppuVar16[-1];
              local_198 = puVar12;
              FUN_1406022fe(&lStack_168,pppppppuVar16);
              plVar15 = local_1e8;
              if (bVar6 != 0) {
                local_158 = (undefined4)local_1d8;
              }
              iVar8 = *(int *)(param_1 + 0x2f);
              *(uint *)(param_1 + 0x2f) = iVar8 + 1U;
              local_154 = bVar6;
              if (*(uint *)((longlong)param_1 + 0x17c) < iVar8 + 1U) {
                FUN_140ad231e(local_1e8,iVar8);
              }
              lVar10 = *plVar15;
              puVar17 = (undefined4 *)(lVar10 + (longlong)iVar8 * 0x48);
              puVar17[4] = (undefined4)uStack_188;
              puVar17[5] = uStack_188._4_4_;
              puVar17[6] = (undefined4)uStack_180;
              puVar17[7] = uStack_180._4_4_;
              *puVar17 = (undefined4)local_198;
              puVar17[1] = local_198._4_4_;
              puVar17[2] = (int)uStack_190;
              puVar17[3] = uStack_190._4_4_;
              FUN_140ad2136(puVar17 + 8,&local_178);
              *(byte *)(puVar17 + 0x11) = local_154;
              if (local_154 == 1) {
                *(undefined4 *)(lVar10 + (longlong)iVar8 * 0x48 + 0x40) = local_158;
              }
              if ((local_154 & 1) != 0) {
                local_154 = 0;
              }
              local_178 = &DAT_14a171d50;
              uVar20 = uStack_160 >> 0x20;
              uStack_160 = uStack_160 & 0xffffffff00000000;
              if ((int)uVar20 != 0) {
                FUN_140115c12(&lStack_168,0);
              }
              local_170 = (undefined8 ******)0x0;
              if (lStack_168 != 0) {
                FUN_1400020a8();
              }
              pppppppuVar16 = pppppppuVar16 + 4;
              lVar23 = lVar23 + -0x20;
            } while (lVar23 != 0);
          }
        }
      }
      FUN_140ad223a(local_d8,uStack_d0 & 0xffffffff);
      if (local_d8 != (undefined8 *******)0x0) {
        FUN_1400020a8();
      }
      param_4 = local_1e0;
      local_108 = &DAT_14a171d50;
      uVar20 = uStack_f0 >> 0x20;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      if ((int)uVar20 != 0) {
        FUN_140115c12(&local_f8,0);
      }
      local_100 = (undefined *)0x0;
      if (local_f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  plVar15 = (longlong *)param_4[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ad2136 FUN_140ad2136 body=145 status=ok
// SIG undefined FUN_140ad2136(void)

undefined8 * FUN_140ad2136(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &DAT_14a171d50;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  _Src = *(void **)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140602356(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_140115c12(param_2 + 0x10,0);
  }
  return param_1;
}



// FUNCTION 140ad21c8 FUN_140ad21c8 body=114 status=ok
// SIG undefined FUN_140ad21c8(void)

undefined8 FUN_140ad21c8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x84))) &&
        ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) &&
       (((longlong *)*plVar2 != (longlong *)0x0 &&
        (lVar3 = (**(code **)(*(longlong *)*plVar2 + 0x2b8))(), lVar3 != 0)))) {
      return *(undefined8 *)(lVar3 + 0xe0);
    }
  }
  return 0;
}



// FUNCTION 140ad223a FUN_140ad223a body=97 status=ok
// SIG undefined FUN_140ad223a(void)

void FUN_140ad223a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ad229c FUN_140ad229c body=129 status=ok
// SIG undefined FUN_140ad229c(void)

void FUN_140ad229c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x1ffffffffffff80U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 7,8);
      uVar2 = uVar2 >> 7;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,0x80,8);
    }
  }
  return;
}



// FUNCTION 140ad231e FUN_140ad231e body=373 status=ok
// SIG undefined FUN_140ad231e(void)

void FUN_140ad231e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ad23a7;
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
LAB_140ad23a7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140ad2494 FUN_140ad2494 body=60 status=ok
// SIG undefined FUN_140ad2494(void)

void FUN_140ad2494(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140ad24d0(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 140ad24d0 FUN_140ad24d0 body=280 status=ok
// SIG undefined FUN_140ad24d0(void)

undefined8 * FUN_140ad24d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  FUN_14034cca6(param_1 + 3,param_2 + 3);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar2 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1470d42fa(param_1 + 10,iVar1,0);
    FUN_145d27cee(param_1[10],uVar2,iVar1);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  uVar2 = param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1470d42fa(param_1 + 0xc,iVar1,0);
    FUN_145d27cee(param_1[0xc],uVar2,iVar1);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar2 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_14055313c(param_1 + 0xe,iVar1,0);
    FUN_140553097(param_1[0xe],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 140ad25e8 FUN_140ad25e8 body=216 status=ok
// SIG undefined FUN_140ad25e8(void)

void FUN_140ad25e8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x1ffffffffffffffU) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 7);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x80,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140ad26c0 FUN_140ad26c0 body=95 status=ok
// SIG undefined FUN_140ad26c0(void)

DWORD FUN_140ad26c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c842744) {
    FUN_144b3d300(&DAT_14c842744);
    if (DAT_14c842744 == -1) {
      DAT_14c842740 = GetCurrentThreadId();
      _Init_thread_footer(&DAT_14c842744);
    }
  }
  return DAT_14c842740;
}



// FUNCTION 140ad2720 FUN_140ad2720 body=227 status=ok
// SIG undefined FUN_140ad2720(void)

void FUN_140ad2720(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  plVar1 = DAT_14cb0d2b0;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) &&
     (*(longlong *)(param_1 + 0x39e0) != 0)) {
    uVar3 = FUN_1447210f0(param_1);
    cVar2 = (**(code **)(*plVar1 + 0x3c0))(plVar1,uVar3);
    if (cVar2 != '\0') {
      param_3 = param_3 * *(float *)(*(longlong *)(param_1 + 0x39e0) + 0x60);
    }
    local_58 = *(undefined8 *)(param_5 + 4);
    local_78 = &local_68;
    local_68 = *param_5;
    uStack_64 = param_5[1];
    uStack_60 = param_5[2];
    uStack_5c = param_5[3];
    local_70 = param_6;
    FUN_140ad2804(*(longlong *)(param_1 + 0x39e0) + 0x48,param_2,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad2804 FUN_140ad2804 body=915 status=ok
// SIG undefined FUN_140ad2804(void)

void FUN_140ad2804(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 *local_f0;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
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
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar3 = (**(code **)(*param_1 + 0x20))();
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
  local_90 = *param_2;
  FUN_1446dcdd4(&local_88);
  if (DAT_14cb7d258 == 0) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar6 = (longlong *)FUN_144837462(DAT_14cb7d258,&local_88);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    local_e1 = param_4;
    local_e0 = uVar4;
    local_d8 = uVar3;
    if (plVar6 != (longlong *)0x0) {
      if (((char)plVar6[3] == '\x01') && ((longlong)(int)plVar5[1] != 0)) {
        plVar11 = (longlong *)*plVar5;
        plVar10 = plVar11 + (longlong)(int)plVar5[1] * 2;
        local_d0 = plVar5;
        do {
          plVar5 = (longlong *)*plVar11;
          plVar8 = (longlong *)plVar11[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          if (plVar5 != (longlong *)0x0) {
            puVar9 = &DAT_14c9485f0;
            if (*(undefined4 **)(plVar5[2] + 8) != (undefined4 *)0x0) {
              puVar9 = *(undefined4 **)(plVar5[2] + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar7 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar7);
              DAT_14c947fe0 = lVar7;
            }
            FUN_140045924(DAT_14c947fe0,&local_88,puVar9,1);
            if ((local_88 == (longlong *)*param_2) && (*(int *)(param_2 + 1) == 0x7010)) {
              *(undefined1 *)(plVar5 + 6) = param_6;
              local_98 = *(undefined8 *)(param_5 + 4);
              local_f0 = &local_a8;
              local_a8 = *param_5;
              uStack_a4 = param_5[1];
              uStack_a0 = param_5[2];
              uStack_9c = param_5[3];
              local_f8 = local_e1;
              (**(code **)(*plVar5 + 0x10))(plVar5,local_e0,local_d8,param_3);
              if (plVar8 == (longlong *)0x0) goto LAB_140ad298f;
              LOCK();
              plVar5 = plVar8 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 != 0) goto LAB_140ad298f;
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) goto LAB_140ad298f;
              lVar7 = *plVar8;
              goto LAB_140ad2b90;
            }
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
          plVar11 = plVar11 + 2;
          plVar5 = local_d0;
        } while (plVar11 != plVar10);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_88);
      uVar4 = local_d8;
      uVar3 = local_e0;
      if (local_88 != (longlong *)0x0) {
        iVar2 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
          FUN_14576c966(plVar5,iVar2);
        }
        lVar7 = *plVar5;
        *(longlong **)(lVar7 + (longlong)iVar2 * 0x10) = local_88;
        *(longlong **)(lVar7 + 8 + (longlong)iVar2 * 0x10) = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        *(undefined1 *)(local_88 + 6) = param_6;
        local_b8 = *(undefined8 *)(param_5 + 4);
        local_f0 = &local_c8;
        local_c8 = *param_5;
        uStack_c4 = param_5[1];
        uStack_c0 = param_5[2];
        uStack_bc = param_5[3];
        local_f8 = local_e1;
        (**(code **)(*local_88 + 0x10))(local_88,uVar3,uVar4,param_3);
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar7 = *local_80;
            plVar8 = local_80;
LAB_140ad2b90:
            (**(code **)(lVar7 + 0x10))(plVar8);
          }
        }
      }
    }
  }
LAB_140ad298f:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ad2b98 FUN_140ad2b98 body=245 status=ok
// SIG undefined FUN_140ad2b98(void)

longlong * FUN_140ad2b98(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x160);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b402340;
  plVar3[2] = (longlong)&PTR_FUN_14b402570;
  plVar3[4] = param_1;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0x3f800000;
  *(undefined2 *)((longlong)plVar3 + 0x42) = 0;
  *(undefined1 *)((longlong)plVar3 + 0x44) = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *(undefined4 *)(plVar3 + 0x11) = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  *(undefined4 *)(plVar3 + 0x18) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0;
  memset(plVar3 + 0x1a,0,0x88);
  *(bool *)(plVar3 + 8) = *(float *)(param_1 + 0x1c) <= 0.0 && *(float *)(param_1 + 0x1c) != 0.0;
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



// FUNCTION 140ad2c8e FUN_140ad2c8e body=1256 status=ok
// SIG undefined FUN_140ad2c8e(void)

void FUN_140ad2c8e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  char param_5,double *param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  lVar6 = *(longlong *)(param_1 + 0x10);
  fVar7 = *(float *)(lVar6 + 0x1c);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    if (0.0 < *(float *)(param_1 + 0x2c)) {
      *(float *)(param_1 + 0x2c) = fVar7;
      uVar1 = *(ushort *)(param_1 + 0x32);
      if ((uVar1 & 2) == 0) goto LAB_140ad2eeb;
      *(ushort *)(param_1 + 0x32) = uVar1 & 0xfffd;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      fVar7 = 0.0;
      if (*(float *)(lVar6 + 0x20) <= 0.0) {
        *(ushort *)(param_1 + 0x32) = uVar1 & 0xfffc;
      }
      else {
        *(ushort *)(param_1 + 0x32) = uVar1 & 0xfffd | 1;
        fVar7 = (-0.0 / *(float *)(lVar6 + 0x24) + 1.0) * *(float *)(lVar6 + 0x20);
      }
    }
    else {
      dVar13 = 0.0;
      dVar8 = 0.0;
      if (*(char *)(lVar6 + 0x30) == '\0') {
        uVar5 = rand();
        dVar8 = (double)(((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855);
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(double *)(param_1 + 0x60) = dVar8;
      if (*(char *)(lVar6 + 0x3c) == '\0') {
        uVar5 = rand();
        dVar13 = (double)(((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855);
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(double *)(param_1 + 0x68) = dVar13;
      dVar13 = 0.0;
      dVar8 = 0.0;
      if (*(char *)(lVar6 + 0x48) == '\0') {
        uVar5 = rand();
        dVar8 = (double)(((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855);
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(double *)(param_1 + 0x70) = dVar8;
      if (*(char *)(lVar6 + 0x54) == '\0') {
        uVar5 = rand();
        dVar13 = (double)(((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855);
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(double *)(param_1 + 0x48) = dVar13;
      dVar13 = 0.0;
      dVar8 = 0.0;
      if (*(char *)(lVar6 + 0x60) == '\0') {
        uVar5 = rand();
        dVar8 = (double)(((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855);
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(double *)(param_1 + 0x50) = dVar8;
      if (*(char *)(lVar6 + 0x6c) == '\0') {
        uVar5 = rand();
        dVar13 = (double)(((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855);
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(double *)(param_1 + 0x58) = dVar13;
      fVar7 = 0.0;
      if (*(char *)(lVar6 + 0x78) == '\0') {
        uVar5 = rand();
        fVar7 = ((float)(uVar5 & 0x7fff) / 32767.0) * 6.2831855;
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      *(float *)(param_1 + 0x78) = fVar7;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x70);
      *(float *)(param_1 + 0xb0) = fVar7;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar6 + 0x1c);
      if (*(float *)(lVar6 + 0x20) <= 0.0) goto LAB_140ad2eeb;
      *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
      fVar7 = 0.0;
    }
    *(float *)(param_1 + 0x38) = fVar7;
  }
LAB_140ad2eeb:
  *(char *)(param_1 + 0x34) = param_5;
  if (param_5 == '\x02') {
    dVar8 = *param_6;
    dVar12 = param_6[1];
    dVar13 = param_6[2];
    dVar9 = sin(dVar8 * 0.01745329238474369);
    dVar10 = sin(dVar12 * 0.01745329238474369);
    dVar11 = sin(dVar13 * 0.01745329238474369);
    sin(0.0);
    dVar8 = cos(dVar8 * 0.01745329238474369);
    dVar12 = cos(dVar12 * 0.01745329238474369);
    dVar13 = cos(dVar13 * 0.01745329238474369);
    cos(0.0);
    uVar4 = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8;
    uVar2 = DAT_14c8464e0;
    *(double *)(param_1 + 0xc0) = dVar8 * dVar12;
    *(double *)(param_1 + 200) = dVar10 * dVar8;
    *(double *)(param_1 + 0xd0) = dVar9;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(double *)(param_1 + 0xe0) = dVar9 * dVar11 * dVar12 - dVar10 * dVar13;
    *(double *)(param_1 + 0xe8) = dVar9 * dVar11 * dVar10 + dVar12 * dVar13;
    *(double *)(param_1 + 0xf0) = -dVar11 * dVar8;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(double *)(param_1 + 0x100) = -(dVar9 * dVar13 * dVar12 + dVar10 * dVar11);
    *(double *)(param_1 + 0x108) = dVar12 * dVar11 - dVar10 * dVar9 * dVar13;
    *(double *)(param_1 + 0x110) = dVar8 * dVar13;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = uVar2;
    *(undefined8 *)(param_1 + 0x128) = uVar3;
    *(undefined8 *)(param_1 + 0x130) = uVar4;
    *(undefined8 *)(param_1 + 0x138) = 0x3ff0000000000000;
  }
  return;
}



// FUNCTION 140ad3176 FUN_140ad3176 body=1879 status=ok
// SIG undefined FUN_140ad3176(void)

void FUN_140ad3176(float param_1,longlong param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  char cVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong in_RCX;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  uint local_140;
  int local_13c;
  longlong *local_138;
  longlong local_130;
  uint *local_128;
  ulonglong local_120;
  longlong local_118;
  uint local_110;
  float local_10c;
  float local_108 [2];
  uint *local_100;
  uint *local_f8;
  float *pfStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *(uint *)(param_2 + 0x74);
  puVar23 = (uint *)(in_RCX + 0x108);
  uVar12 = *(uint *)(in_RCX + 0x120);
  local_118 = param_2;
  if (uVar12 == 0) {
    uVar16 = 1;
    uVar25 = 0;
    uVar10 = 0;
    iVar20 = 0;
  }
  else {
    puVar8 = *(uint **)(in_RCX + 0x118);
    if (*(uint **)(in_RCX + 0x118) == (uint *)0x0) {
      puVar8 = puVar23;
    }
    uVar10 = *puVar8;
    if (uVar10 == 0) {
      iVar20 = uVar12 + 0x1e;
      if (-1 < (int)(uVar12 - 1)) {
        iVar20 = uVar12 - 1;
      }
      uVar25 = 0;
      uVar16 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar16 = uVar25;
      }
      param_1 = 3.4e+38;
      iVar20 = 0;
      do {
        if (uVar16 == uVar25) goto LAB_140ad3669;
        iVar20 = iVar20 + 0x20;
        uVar10 = puVar8[uVar25 + 1];
        uVar25 = uVar25 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar25 = 0;
      iVar20 = 0;
    }
    uVar16 = (ulonglong)(-uVar10 & uVar10);
    uVar9 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar10 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar10) {
      uVar10 = uVar12;
    }
  }
  if (uVar10 != uVar12) {
    local_138 = (longlong *)(in_RCX + 0x2d8);
    local_130 = in_RCX + 0x310;
    uVar18 = 0xffffffff;
    dVar5 = 3.3999999521443642e+38;
    local_128 = puVar23;
    local_120 = (ulonglong)uVar12;
LAB_140ad32a3:
    plVar6 = local_138;
    lVar17 = *(longlong *)(in_RCX + 0x78);
    lVar19 = (longlong)*(int *)(*(longlong *)(in_RCX + 0xf8) + (longlong)(int)uVar10 * 0xc) * 0x280;
    local_110 = *(uint *)(lVar17 + 0x80 + lVar19);
    dVar2 = dVar5;
    local_140 = uVar18;
    local_13c = iVar20;
    if (*(char *)(lVar17 + 0x91 + lVar19) == '\x01') {
      iVar20 = *(int *)(in_RCX + 0x2e0);
      iVar24 = *(int *)(in_RCX + 0x30c);
      if (iVar20 != iVar24) {
        lVar21 = *(longlong *)(in_RCX + 0x318);
        if (*(longlong *)(in_RCX + 0x318) == 0) {
          lVar21 = local_130;
        }
        iVar11 = *(int *)(lVar21 + (ulonglong)(*(int *)(in_RCX + 800) - 1U & uVar1) * 4);
        if (iVar11 != -1) {
          lVar21 = *local_138;
          iVar13 = iVar11;
          do {
            iVar14 = iVar11;
            if (*(uint *)(lVar21 + (longlong)iVar13 * 0x60) == uVar1) goto LAB_140ad3350;
            iVar13 = *(int *)((longlong)iVar13 * 0x60 + lVar21 + 0x58);
          } while (iVar13 != -1);
        }
      }
      goto LAB_140ad33c7;
    }
    goto LAB_140ad359f;
  }
  param_1 = 3.4e+38;
LAB_140ad3669:
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(param_1);
  }
  return;
  while (iVar14 = *(int *)(lVar15 + 0x58), *(int *)(lVar15 + 0x58) != -1) {
LAB_140ad3350:
    lVar15 = lVar21 + (longlong)iVar14 * 0x60;
    if (*(uint *)(lVar21 + (longlong)iVar14 * 0x60) == uVar1) goto LAB_140ad3372;
  }
  lVar15 = 0;
LAB_140ad3372:
  if (*(int *)(lVar15 + 0x10) != *(int *)(lVar15 + 0x3c)) {
    lVar22 = lVar15 + 0x40;
    if (*(longlong *)(lVar15 + 0x48) != 0) {
      lVar22 = *(longlong *)(lVar15 + 0x48);
    }
    iVar13 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar15 + 0x50) - 1U & local_110) * 4);
    puVar23 = local_128;
    if (iVar13 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar15 + 8) + (longlong)iVar13 * 0x10) == local_110)
        goto LAB_140ad350d;
        iVar13 = *(int *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar15 + 8) + 8);
      } while (iVar13 != -1);
    }
  }
LAB_140ad33c7:
  lVar17 = lVar17 + lVar19;
  dVar3 = *(double *)(lVar17 + 0x210) - *(double *)(local_118 + 0x78);
  dVar2 = *(double *)(lVar17 + 0x218) - *(double *)(local_118 + 0x80);
  dVar4 = *(double *)(lVar17 + 0x220) - *(double *)(local_118 + 0x88);
  if (iVar20 != iVar24) {
    lVar17 = *(longlong *)(in_RCX + 0x318);
    if (*(longlong *)(in_RCX + 0x318) == 0) {
      lVar17 = local_130;
    }
    iVar11 = *(int *)(lVar17 + (ulonglong)(*(int *)(in_RCX + 800) - 1U & uVar1) * 4);
    if (iVar11 != -1) {
      do {
        if (*(uint *)(*local_138 + (longlong)iVar11 * 0x60) == uVar1) goto LAB_140ad344d;
        iVar11 = *(int *)((longlong)iVar11 * 0x60 + *local_138 + 0x58);
      } while (iVar11 != -1);
    }
  }
  local_d8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (uint *)0x0;
  pfStack_f0 = (float *)0x0;
  uStack_d0 = 0x8000000000;
  local_c8 = 0xffffffff;
  FUN_140ad4178(param_1,local_108);
  puVar8 = local_100;
  *local_100 = uVar1;
  FUN_140ad3f92(local_100 + 2,&local_f8);
  puVar8[0x16] = 0xffffffff;
  local_10c = local_108[0];
  uVar12 = *puVar8;
  local_148 = 0;
  cVar7 = FUN_140ad40a6(plVar6,uVar12,puVar8,&local_10c);
  if (cVar7 == '\0') {
    uVar10 = *(int *)(in_RCX + 0x2e0) - *(int *)(in_RCX + 0x30c);
    if (uVar10 < 4) {
      iVar20 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar20 <= *(int *)(in_RCX + 800))) {
      uVar12 = *(int *)(in_RCX + 800) - 1U & uVar12;
      puVar8[0x17] = uVar12;
      lVar17 = *(longlong *)(in_RCX + 0x318);
      if (*(longlong *)(in_RCX + 0x318) == 0) {
        lVar17 = local_130;
      }
      puVar8[0x16] = *(uint *)(lVar17 + ((longlong)*(int *)(in_RCX + 800) - 1U &
                                        (longlong)(int)uVar12) * 4);
      lVar17 = *(longlong *)(in_RCX + 0x318);
      if (*(longlong *)(in_RCX + 0x318) == 0) {
        lVar17 = local_130;
      }
      *(float *)(lVar17 + ((longlong)*(int *)(in_RCX + 800) - 1U & (longlong)(int)uVar12) * 4) =
           local_10c;
    }
    else {
      *(int *)(in_RCX + 800) = iVar20;
      FUN_140ad4366(local_138);
    }
  }
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(&local_f8);
  iVar20 = *(int *)(in_RCX + 0x2e0);
  iVar24 = *(int *)(in_RCX + 0x30c);
LAB_140ad344d:
  if (iVar20 != iVar24) {
    lVar17 = *(longlong *)(in_RCX + 0x318);
    if (*(longlong *)(in_RCX + 0x318) == 0) {
      lVar17 = local_130;
    }
    iVar20 = *(int *)(lVar17 + (ulonglong)(*(int *)(in_RCX + 800) - 1U & uVar1) * 4);
    if (iVar20 != -1) {
      do {
        lVar17 = *local_138 + (longlong)iVar20 * 0x60;
        if (*(uint *)(*local_138 + (longlong)iVar20 * 0x60) == uVar1) goto LAB_140ad349c;
        iVar20 = *(int *)(lVar17 + 0x58);
      } while (iVar20 != -1);
    }
  }
  lVar17 = 0;
LAB_140ad349c:
  dVar2 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
  local_10c = (float)dVar2;
  local_f8 = &local_110;
  pfStack_f0 = &local_10c;
  param_1 = (float)FUN_140ad38ce(lVar17 + 8,local_108,&local_f8,0);
  uVar12 = *(uint *)(in_RCX + 0x120);
LAB_140ad3595:
  if (dVar5 <= dVar2) {
    dVar2 = dVar5;
  }
LAB_140ad359f:
  uVar18 = local_140 & ~(uint)uVar16;
  puVar8 = *(uint **)(in_RCX + 0x118);
  if (*(uint **)(in_RCX + 0x118) == (uint *)0x0) {
    puVar8 = puVar23;
  }
  iVar24 = (int)uVar25;
  lVar17 = (longlong)iVar24;
  uVar10 = puVar8[lVar17] & uVar18;
  iVar20 = local_13c;
  if (uVar10 == 0) {
    iVar11 = uVar12 + 0x1e;
    if (-1 < (int)(uVar12 - 1)) {
      iVar11 = uVar12 - 1;
    }
    iVar11 = iVar11 >> 5;
    iVar20 = local_13c + 0x20;
    iVar13 = iVar11;
    if (iVar11 < iVar24) {
      iVar13 = iVar24;
    }
    if (iVar24 < iVar11) {
      lVar19 = 0;
      do {
        uVar10 = puVar8[lVar17 + lVar19 + 1];
        if (uVar10 != 0) {
          uVar25 = (ulonglong)(iVar24 + (int)lVar19 + 1);
          uVar18 = 0xffffffff;
          goto LAB_140ad360c;
        }
        iVar20 = iVar20 + 0x20;
        lVar19 = lVar19 + 1;
      } while (iVar13 - lVar17 != lVar19);
      uVar18 = 0xffffffff;
      lVar17 = (longlong)iVar13;
    }
    uVar25 = lVar17 + 1U & 0xffffffff;
    puVar23 = local_128;
    uVar10 = uVar12;
  }
  else {
LAB_140ad360c:
    uVar16 = (ulonglong)(-uVar10 & uVar10);
    uVar9 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar10 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar10) {
      uVar10 = uVar12;
    }
  }
  dVar5 = dVar2;
  if (uVar10 == (uint)local_120) goto LAB_140ad3662;
  goto LAB_140ad32a3;
  while (iVar11 = *(int *)(lVar17 + 0x58), iVar11 != -1) {
LAB_140ad350d:
    lVar17 = lVar21 + (longlong)iVar11 * 0x60;
    if (*(uint *)(lVar21 + (longlong)iVar11 * 0x60) == uVar1) goto LAB_140ad3531;
  }
  lVar17 = 0;
LAB_140ad3531:
  if (*(int *)(lVar17 + 0x10) != *(int *)(lVar17 + 0x3c)) {
    lVar19 = lVar17 + 0x40;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      lVar19 = *(longlong *)(lVar17 + 0x48);
    }
    iVar20 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar17 + 0x50) - 1U & local_110) * 4);
    if (iVar20 != -1) {
      do {
        lVar19 = *(longlong *)(lVar17 + 8) + (longlong)iVar20 * 0x10;
        if (*(uint *)(*(longlong *)(lVar17 + 8) + (longlong)iVar20 * 0x10) == local_110)
        goto LAB_140ad358f;
        iVar20 = *(int *)(lVar19 + 8);
      } while (iVar20 != -1);
    }
  }
  lVar19 = 0;
LAB_140ad358f:
  dVar2 = (double)*(float *)(lVar19 + 4);
  goto LAB_140ad3595;
LAB_140ad3662:
  param_1 = (float)dVar2;
  goto LAB_140ad3669;
}



// FUNCTION 140ad38ce FUN_140ad38ce body=312 status=ok
// SIG undefined FUN_140ad38ce(void)

undefined4 *
FUN_140ad38ce(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ad3aa0(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140ad3a08(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140ad3d14(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad3a08 FUN_140ad3a08 body=152 status=ok
// SIG undefined FUN_140ad3a08(void)

void FUN_140ad3a08(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_140ad3c8a(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140ad3a72;
    }
  }
  uVar2 = 0;
LAB_140ad3a72:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140ad3aa0 FUN_140ad3aa0 body=489 status=ok
// SIG undefined FUN_140ad3aa0(void)

int * FUN_140ad3aa0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
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
      FUN_144869a3c(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
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
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140ad3c8a FUN_140ad3c8a body=138 status=ok
// SIG undefined FUN_140ad3c8a(void)

void FUN_140ad3c8a(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140ad3d14 FUN_140ad3d14 body=637 status=ok
// SIG undefined FUN_140ad3d14(void)

void FUN_140ad3d14(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140ad3d77;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140ad3d77:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140ad3f92 FUN_140ad3f92 body=125 status=ok
// SIG undefined FUN_140ad3f92(void)

undefined8 * FUN_140ad3f92(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140ad4010();
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



// FUNCTION 140ad4010 FUN_140ad4010 body=150 status=ok
// SIG undefined FUN_140ad4010(void)

longlong * FUN_140ad4010(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 140ad40a6 FUN_140ad40a6 body=210 status=ok
// SIG undefined FUN_140ad40a6(void)

void FUN_140ad40a6(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1407b1382((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147dfa776(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_140ad411b;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_140ad411b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140ad4178 FUN_140ad4178 body=493 status=ok
// SIG undefined FUN_140ad4178(void)

int * FUN_140ad4178(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
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
      FUN_14488f93c(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
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
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x60);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 140ad4366 FUN_140ad4366 body=540 status=ok
// SIG undefined FUN_140ad4366(void)

void FUN_140ad4366(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x60;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x5c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140ad453d;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140ad453d:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad4584 FUN_140ad4584 body=93 status=ok
// SIG undefined FUN_140ad4584(void)

undefined8 * FUN_140ad4584(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ad45e1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490eb398(param_1,iVar1);
      FUN_1490eb40a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140ad45e1 FUN_140ad45e1 body=43 status=ok
// SIG undefined FUN_140ad45e1(void)

void FUN_140ad45e1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490de8da(param_1);
    param_1 = param_1 + 0xd0;
  }
  return;
}



// FUNCTION 140ad460c FUN_140ad460c body=312 status=ok
// SIG undefined FUN_140ad460c(void)

longlong * FUN_140ad460c(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x10')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1491947ce(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb58850;
    local_50 = &local_88;
    local_78[0] = &LAB_149194706;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ad4746 FUN_140ad4746 body=295 status=ok
// SIG undefined FUN_140ad4746(void)

void FUN_140ad4746(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined8 local_34;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x2e8) == '\0')) &&
     ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x530));
    if (*(longlong *)(param_1 + 0x558) != 0) {
      FUN_1491dddd2(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x530));
    if (**(longlong **)(param_1 + 0x588) != 0) {
      FUN_1491dddd2(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_140ad4892(param_1 + 0x28,param_2,param_1,param_3);
    if (0 < *(int *)(param_1 + 0x48)) {
      if (param_3 == 0) {
        local_34 = 0;
        local_38 = 0;
      }
      else {
        local_38 = *(undefined1 *)(param_3 + 0x10);
        local_2a = *(undefined1 *)(param_3 + 0x13);
        local_2c = *(undefined2 *)(param_3 + 0x11);
        local_34 = *(undefined8 *)(param_3 + 0x14);
      }
      local_37 = local_2c;
      local_35 = local_2a;
      FUN_14917ff09(param_1 + 0x40,param_2,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad4892 FUN_140ad4892 body=192 status=ok
// SIG undefined FUN_140ad4892(void)

void FUN_140ad4892(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_140ad492b;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140ad492b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140ad4952 FUN_140ad4952 body=4752 status=ok
// SIG undefined FUN_140ad4952(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad4952(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 uVar21;
  undefined8 unaff_RDI;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  int iVar29;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  longlong local_3b8;
  int local_3ac;
  undefined1 local_3a6;
  undefined1 local_3a5;
  uint local_3a4;
  ulonglong local_3a0;
  undefined8 local_398;
  ulonglong local_390;
  longlong local_388;
  ulonglong local_380;
  ulonglong local_378;
  longlong *local_370;
  int local_364;
  longlong *local_360;
  uint *local_358;
  LPCRITICAL_SECTION local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  ulonglong local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_308;
  longlong local_2d8;
  undefined4 local_2d0;
  int local_2cc;
  undefined1 local_2c8 [16];
  longlong local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined8 local_2a8;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_278;
  longlong local_248;
  undefined4 local_240;
  int local_23c;
  undefined1 local_238 [16];
  longlong local_228;
  undefined4 local_220;
  uint local_21c;
  undefined8 local_218;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  longlong local_1b8;
  undefined4 local_1b0;
  int local_1ac;
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  longlong local_178;
  undefined4 local_170;
  undefined1 local_168 [16];
  undefined1 *local_158;
  longlong local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 local_78;
  ulonglong local_48;
  
  local_378 = CONCAT71(local_378._1_7_,param_3);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  uVar21 = *(undefined1 *)(param_1 + 0x470);
  *(undefined1 *)(param_1 + 0x470) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + 0xc0) != 0) || (*(int *)(param_2 + 0xc0) != 0)) {
    local_370 = (longlong *)(param_1 + 0xb8);
    local_128._0_4_ = 0;
    local_128._4_4_ = 0;
    uStack_120._0_4_ = 0;
    uStack_120._4_4_ = 0;
    local_3b8 = param_2;
    FUN_1491ddccc(param_1);
    uVar22 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(int *)(local_3b8 + 0xc0) <= *(int *)(param_1 + 0xc0)) {
      if (DAT_14cc079b0 == 0) {
        uVar12 = FUN_1408c25db();
        DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar12);
      }
      if (*(char *)(*(longlong *)(DAT_14cc079b0 + 0x40) + 8) != -1) {
        lVar25 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0xf0) + 8 + lVar25) !=
              *(int *)(*(longlong *)(local_3b8 + 0xf0) + 8 + lVar25)) goto LAB_140ad4add;
          pcVar2 = (char *)(*(longlong *)(DAT_14cc079b0 + 0x40) + 0x18 + lVar25);
          lVar25 = lVar25 + 0x10;
        } while (*pcVar2 != -1);
      }
      if (0 < (longlong)*(int *)(local_3b8 + 0xc0)) {
        lVar25 = 0;
        do {
          lVar27 = *(longlong *)(*local_370 + lVar25 * 8);
          lVar23 = *(longlong *)(*(longlong *)(local_3b8 + 0xb8) + lVar25 * 8);
          if ((*(char *)(lVar27 + 0x10) != *(char *)(lVar23 + 0x10)) ||
             (*(int *)(lVar27 + 0x20) != *(int *)(lVar23 + 0x20))) goto LAB_140ad4add;
          lVar25 = lVar25 + 1;
        } while (*(int *)(local_3b8 + 0xc0) != lVar25);
      }
      uVar22 = 0;
    }
LAB_140ad4add:
    uVar3 = *(undefined1 *)(param_1 + 0x2e9);
    *(undefined1 *)(param_1 + 0x2e9) = 1;
    FUN_14150bb00(param_1,uVar22 & 0xffffffff);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc077b0) {
      FUN_144b3d300(&DAT_14cc077b0);
      if (DAT_14cc077b0 == -1) {
        DAT_14cc077a0 = (undefined8 *)0x0;
        _DAT_14cc077a8 = 8;
        FUN_144a06ca8(&DAT_14cc077a0,8,0);
        puVar13 = DAT_14cc077a0;
        DAT_14cc077a0[2] = 0x12000000128;
        puVar13[3] = 0x11000000070;
        *puVar13 = 0x21000000118;
        puVar13[1] = 0x5800000500;
        atexit((_func_5014 *)&LAB_14449df77);
        _Init_thread_footer(&DAT_14cc077b0);
      }
    }
    local_3a6 = uVar3;
    local_3a5 = uVar21;
    local_388 = param_1;
    local_350 = lpCriticalSection;
    if ((char)uVar22 == '\0') {
      lVar25 = (longlong)*(int *)(param_1 + 0xc0);
      if (*(int *)(local_3b8 + 0xc0) < *(int *)(param_1 + 0xc0)) {
        lVar27 = lVar25 * 8;
        do {
          lVar27 = lVar27 + -8;
          lVar25 = lVar25 + -1;
          FUN_14449d868(param_1,*(longlong *)(param_1 + 0xb8) + lVar27);
        } while (*(int *)(local_3b8 + 0xc0) < lVar25);
      }
      FUN_14449df88(local_370);
      if (DAT_14cc079b0 == 0) {
        uVar12 = FUN_1408c25db();
        DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar12,L"ERigElementType");
      }
      lVar25 = DAT_14cc079b0;
      if (*(char *)(*(longlong *)(DAT_14cc079b0 + 0x40) + 8) != -1) {
        lVar27 = 0;
        do {
          FUN_14449df88(*(longlong *)(param_1 + 0xf0) + lVar27,
                        *(undefined4 *)(*(longlong *)(local_3b8 + 0xf0) + 8 + lVar27));
          pcVar2 = (char *)(*(longlong *)(lVar25 + 0x40) + 0x18 + lVar27);
          lVar27 = lVar27 + 0x10;
        } while (*pcVar2 != -1);
      }
      iVar10 = 0;
      iVar29 = 0;
      iVar9 = 0;
      if (0 < *(int *)(local_3b8 + 0xc0)) {
        lVar25 = 0;
        iVar9 = 0;
        iVar29 = 0;
        iVar10 = 0;
        do {
          lVar27 = *(longlong *)(*(longlong *)(local_3b8 + 0xb8) + lVar25 * 8);
          plVar28 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + lVar25 * 8);
          *(undefined4 *)(plVar28 + 3) = *(undefined4 *)(lVar27 + 0x18);
          plVar28[2] = *(longlong *)(lVar27 + 0x10);
          *(undefined4 *)((longlong)plVar28 + 0x1c) = *(undefined4 *)(lVar27 + 0x1c);
          *(undefined4 *)(plVar28 + 4) = *(undefined4 *)(lVar27 + 0x20);
          *(undefined4 *)((longlong)plVar28 + 0x24) = *(undefined4 *)(lVar27 + 0x24);
          *(undefined1 *)(plVar28 + 5) = 0;
          iVar7 = (**(code **)(*plVar28 + 0x28))(plVar28);
          iVar16 = (**(code **)(*plVar28 + 0x28))(plVar28);
          iVar8 = (**(code **)(*plVar28 + 0x30))(plVar28);
          if (lVar25 < *(int *)(param_1 + 0x568)) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x560) + lVar25 * 4);
            *piVar1 = *piVar1 + 1;
          }
          iVar9 = iVar9 + iVar7;
          iVar29 = iVar29 + iVar16;
          iVar10 = iVar10 + iVar8;
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(int *)(local_3b8 + 0xc0));
      }
      local_398 = (longlong *)CONCAT44(local_398._4_4_,iVar10);
      FUN_1459a7e20(param_1 + 0x118,local_3b8 + 0x118);
    }
    else {
      local_148 = 0;
      uStack_140 = 0;
      lVar25 = local_3b8;
      if (0 < *(int *)(local_3b8 + 0xf8)) {
        uVar22 = 0;
        do {
          uVar5 = uStack_140;
          uVar19 = 0x8040201008040201U >> ((char)uVar22 * '\b' & 0x3fU) & 0xffffffff;
          if (7 < uVar22) {
            uVar19 = 0;
          }
          local_128._0_4_ = 0;
          iVar9 = *(int *)(*(longlong *)(lVar25 + 0xf0) + 8 + uVar22 * 0x10);
          if ((char)local_378 == '\0') {
LAB_140ad4bea:
            if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar9);
            }
          }
          else {
            if (iVar9 != 0) {
              uVar12 = FUN_14449d43c(local_388,uVar19,iVar9,&local_128);
              uVar5 = uStack_140;
              lVar25 = (longlong)(int)uStack_140;
              uVar6 = (int)uStack_140 + 1;
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar6);
              if (uStack_140._4_4_ < uVar6) {
                FUN_14018c802(&local_148,uVar5 & 0xffffffff);
              }
              *(undefined8 *)(local_148 + lVar25 * 8) = uVar12;
              lVar25 = local_3b8;
              goto LAB_140ad4bea;
            }
            lVar27 = (longlong)(int)uStack_140;
            uVar6 = (int)uStack_140 + 1;
            uStack_140 = CONCAT44(uStack_140._4_4_,uVar6);
            if (uStack_140._4_4_ < uVar6) {
              FUN_14018c802(&local_148,uVar5 & 0xffffffff);
              lVar25 = local_3b8;
            }
            *(undefined8 *)(local_148 + lVar27 * 8) = 0;
          }
          if (*(int *)(*(longlong *)(local_388 + 0xf0) + uVar22 * 0x10 + 0xc) < iVar9) {
            FUN_1466d195e(*(longlong *)(local_388 + 0xf0) + uVar22 * 0x10,iVar9);
            lVar25 = local_3b8;
          }
          uVar22 = uVar22 + 1;
        } while ((longlong)uVar22 < (longlong)*(int *)(lVar25 + 0xf8));
      }
      param_1 = local_388;
      iVar9 = *(int *)(lVar25 + 0xc0);
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      if (*(int *)(local_388 + 0xc4) < iVar9) {
        FUN_1466d195e(local_370);
        lVar25 = local_3b8;
      }
      local_390 = param_1 + 0x118;
      uVar22 = (longlong)*(int *)(lVar25 + 0x120) - (longlong)*(int *)(lVar25 + 0x14c);
      uVar6 = (uint)uVar22;
      if ((uint)(*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x14c)) < uVar6) {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar22);
        }
        FUN_141906e72(local_390,uVar22 & 0xffffffff);
        iVar9 = 1;
        if (3 < uVar6) {
          uVar6 = (uVar6 | 1) + 0xe;
          iVar9 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          iVar9 = 1 << ((byte)iVar9 & 0x1f);
        }
        if ((*(int *)(param_1 + 0x160) == 0) ||
           (lVar25 = local_3b8, *(int *)(param_1 + 0x160) < iVar9)) {
          *(int *)(param_1 + 0x160) = iVar9;
          FUN_140fe5654(local_390);
          lVar25 = local_3b8;
        }
      }
      uVar6 = local_398._4_4_;
      local_398 = (longlong *)((ulonglong)local_398._4_4_ << 0x20);
      iVar29 = 0;
      iVar9 = 0;
      if (0 < *(int *)(lVar25 + 0xc0)) {
        lVar27 = 0;
        local_398 = (longlong *)((ulonglong)uVar6 << 0x20);
        do {
          local_3a0 = CONCAT44(local_3a0._4_4_,iVar29);
          lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0xb8) + lVar27 * 8);
          uVar6 = FUN_1402aff74(*(undefined1 *)(lVar25 + 0x10));
          iVar10 = FUN_1402aff74(*(undefined1 *)(lVar25 + 0x10));
          iVar10 = *(int *)(*(longlong *)(param_1 + 0xf0) + 8 + (longlong)iVar10 * 0x10);
          lVar23 = (longlong)(int)uVar6;
          iVar29 = *(int *)((longlong)DAT_14cc077a0 + lVar23 * 4);
          local_328 = CONCAT44(local_328._4_4_,iVar29);
          if ((char)local_378 == '\0') {
            uVar22 = 0x8040201008040201U >> ((char)uVar6 * '\b' & 0x3fU) & 0xffffffff;
            if (7 < uVar6) {
              uVar22 = 0;
            }
            plVar28 = (longlong *)FUN_14449d43c(param_1,uVar22,1,&local_328);
          }
          else {
            plVar28 = (longlong *)
                      ((longlong)(iVar29 * iVar10) + *(longlong *)(local_148 + lVar23 * 8));
          }
          *(undefined4 *)(plVar28 + 3) = *(undefined4 *)(lVar25 + 0x18);
          plVar28[2] = *(longlong *)(lVar25 + 0x10);
          *(undefined4 *)((longlong)plVar28 + 0x1c) = *(undefined4 *)(lVar25 + 0x1c);
          *(undefined4 *)(plVar28 + 4) = *(undefined4 *)(lVar25 + 0x20);
          *(undefined4 *)((longlong)plVar28 + 0x24) = *(undefined4 *)(lVar25 + 0x24);
          *(undefined1 *)(plVar28 + 5) = 0;
          local_3ac = (**(code **)(*plVar28 + 0x28))(plVar28);
          uVar11 = (**(code **)(*plVar28 + 0x28))(plVar28);
          local_380 = CONCAT44(local_380._4_4_,uVar11);
          local_3a4 = (**(code **)(*plVar28 + 0x30))(plVar28);
          *(int *)(plVar28 + 4) = iVar10;
          iVar10 = *(int *)(param_1 + 0xc0);
          *(uint *)(param_1 + 0xc0) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0xc4) < iVar10 + 1U) {
            FUN_145c8ed70(local_370,iVar10);
          }
          *(longlong **)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar10 * 8) = plVar28;
          *(int *)((longlong)plVar28 + 0x1c) = iVar10;
          lVar26 = *(longlong *)(param_1 + 0xf0);
          lVar23 = lVar23 * 0x10;
          iVar10 = *(int *)(lVar26 + 8 + lVar23);
          *(uint *)(lVar26 + 8 + lVar23) = iVar10 + 1U;
          if (*(uint *)(lVar26 + 0xc + lVar23) < iVar10 + 1U) {
            FUN_145c8ed70((longlong *)(lVar26 + lVar23),iVar10);
          }
          *(longlong **)(*(longlong *)(lVar26 + lVar23) + (longlong)iVar10 * 8) = plVar28;
          uStack_120 = (longlong)plVar28 + 0x1c;
          local_128 = (longlong *)(lVar25 + 0x10);
          FUN_140fe526c(local_390,local_168,&local_128,0);
          if (lVar27 < *(int *)(param_1 + 0x568)) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x560) + lVar27 * 4);
            *piVar1 = *piVar1 + 1;
          }
          iVar9 = iVar9 + local_3ac;
          iVar29 = (int)local_3a0 + (int)local_380;
          local_398 = (longlong *)CONCAT44(local_398._4_4_,(int)local_398 + local_3a4);
          lVar27 = lVar27 + 1;
          lVar25 = local_3b8;
        } while (lVar27 < *(int *)(local_3b8 + 0xc0));
      }
      if (local_148 != 0) {
        FUN_1400020a8();
      }
    }
    lVar25 = param_1 + 0x1b8;
    local_88 = 0;
    local_78 = 0;
    FUN_14449dc32(lVar25);
    lVar27 = param_1 + 0x1d8;
    local_c8 = 0;
    local_b8 = 0;
    FUN_14449dd4c(lVar27);
    param_1 = param_1 + 0x1f8;
    local_108 = 0;
    local_f8 = 0;
    FUN_14449de5e(param_1);
    FUN_141906ab0(lVar25,&local_128,iVar9);
    local_168[0] = 0;
    FUN_141906c0e(lVar27,&local_148,iVar29);
    local_328 = local_328 & 0xffffffff00000000;
    FUN_1466cd7fe(param_1,local_168,(ulonglong)local_398 & 0xffffffff);
    local_1f8 = 0;
    local_1e8 = 0;
    FUN_1466cd94a(lVar25,&local_1b8);
    local_170 = 0;
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    local_1b0 = 0;
    if (local_1ac != 0) {
      FUN_14472eb64(&local_1b8,0);
    }
    local_188 = 0xffffffff;
    local_190 = 0;
    if (0x80 < local_18c) {
      local_18c = 0x80;
      FUN_1446efbd8(local_1a8,0);
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    local_288 = 0;
    local_278 = 0;
    FUN_1466cdc5c(lVar27,&local_248);
    local_200 = 0;
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_240 = 0;
    if (local_23c != 0) {
      FUN_14472eb64(&local_248,0);
    }
    local_218 = 0xffffffff;
    local_220 = 0;
    if (0x80 < local_21c) {
      local_21c = 0x80;
      FUN_1446efbd8(local_238,0);
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    local_318 = 0;
    local_308 = 0;
    FUN_1466cdf4a(param_1,&local_2d8);
    local_290 = 0;
    if (local_298 != 0) {
      FUN_1400020a8();
    }
    local_2d0 = 0;
    if (local_2cc != 0) {
      FUN_14472eb64(&local_2d8,0);
    }
    local_2a8 = 0xffffffff;
    local_2b0 = 0;
    if (0x80 < local_2ac) {
      local_2ac = 0x80;
      FUN_1446efbd8(local_2c8,0);
    }
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (0 < *(int *)(local_3b8 + 0xc0)) {
      lVar25 = 0;
      local_378 = 0;
      iVar10 = 0;
      iVar9 = 0;
      do {
        lVar27 = *(longlong *)(*(longlong *)(local_3b8 + 0xb8) + lVar25 * 8);
        plVar28 = *(longlong **)(*local_370 + lVar25 * 8);
        iVar29 = iVar10;
        iVar7 = iVar9;
        if (plVar28 != (longlong *)0x0) {
          bVar4 = *(byte *)(plVar28 + 2);
          uVar22 = (ulonglong)bVar4;
          if (uVar22 < 0x21) {
            if ((0x100010016U >> (uVar22 & 0x3f) & 1) == 0) {
              if (uVar22 == 8) {
                puVar14 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar14 = local_168;
                }
                *(undefined4 *)((longlong)plVar28 + 0x4c) =
                     *(undefined4 *)(puVar14 + (longlong)(int)local_378 * 4);
                local_378 = (ulonglong)((int)local_378 + 1);
                goto LAB_140ad5598;
              }
              goto LAB_140ad558b;
            }
          }
          else {
LAB_140ad558b:
            if (bVar4 != 0x80) goto LAB_140ad5598;
          }
          puVar13 = local_118;
          if (local_118 == (undefined8 *)0x0) {
            puVar13 = &local_128;
          }
          lVar23 = (longlong)iVar9;
          *(undefined4 *)(plVar28 + 0xd) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4);
          *(undefined4 *)(plVar28 + 9) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 4);
          *(undefined4 *)(plVar28 + 0xf) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 8);
          *(undefined4 *)(plVar28 + 0xb) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0xc);
          plVar20 = local_138;
          if (local_138 == (longlong *)0x0) {
            plVar20 = &local_148;
          }
          lVar26 = (longlong)iVar10;
          *(undefined4 *)(plVar28 + 0x17) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4);
          *(undefined4 *)(plVar28 + 0x13) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 4);
          *(undefined4 *)(plVar28 + 0x15) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 8);
          *(undefined4 *)(plVar28 + 0x11) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0xc);
          iVar29 = iVar10 + 4;
          iVar7 = iVar9 + 4;
          if (bVar4 == 4) {
            *(undefined4 *)(plVar28 + 0x84) =
                 *(undefined4 *)((longlong)puVar13 + (longlong)(iVar9 + 4) * 4);
            *(undefined4 *)(plVar28 + 0x80) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x14)
            ;
            *(undefined4 *)(plVar28 + 0x86) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x18)
            ;
            *(undefined4 *)(plVar28 + 0x82) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x1c)
            ;
            *(undefined4 *)(plVar28 + 0x8e) =
                 *(undefined4 *)((longlong)plVar20 + (longlong)(iVar10 + 4) * 4);
            *(undefined4 *)(plVar28 + 0x8a) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x14)
            ;
            *(undefined4 *)(plVar28 + 0x8c) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x18)
            ;
            *(undefined4 *)(plVar28 + 0x88) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x1c)
            ;
            *(undefined4 *)(plVar28 + 0x94) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x20)
            ;
            *(undefined4 *)(plVar28 + 0x90) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x24)
            ;
            *(undefined4 *)(plVar28 + 0x96) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x28)
            ;
            *(undefined4 *)(plVar28 + 0x92) = *(undefined4 *)((longlong)puVar13 + lVar23 * 4 + 0x2c)
            ;
            *(undefined4 *)(plVar28 + 0x9e) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x20)
            ;
            *(undefined4 *)(plVar28 + 0x9a) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x24)
            ;
            *(undefined4 *)(plVar28 + 0x9c) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x28)
            ;
            *(undefined4 *)(plVar28 + 0x98) = *(undefined4 *)((longlong)plVar20 + lVar26 * 4 + 0x2c)
            ;
            iVar29 = iVar10 + 0xc;
            iVar7 = iVar9 + 0xc;
          }
        }
LAB_140ad5598:
        iVar9 = iVar7;
        iVar10 = iVar29;
        local_328 = *(ulonglong *)(local_388 + 0x1f8);
        local_320 = *(undefined4 *)(local_388 + 0x200);
        local_338 = *(undefined8 *)(local_388 + 0x1d8);
        local_330 = *(undefined4 *)(local_388 + 0x1e0);
        local_348 = *(undefined8 *)(local_388 + 0x1b8);
        local_340 = *(undefined4 *)(local_388 + 0x1c0);
        (**(code **)(*plVar28 + 0x48))(plVar28,&local_348,&local_338,&local_328);
        (**(code **)(*plVar28 + 0x40))(plVar28,lVar27);
        lVar23 = *(longlong *)(lVar27 + 8);
        if (lVar23 != 0) {
          iVar29 = *(int *)(lVar27 + 0x34);
          if ((-1 < (longlong)iVar29) && (iVar29 < *(int *)(lVar23 + 0x270))) {
            lVar27 = *(longlong *)(lVar23 + 0x268);
            lVar23 = (longlong)iVar29 * 0x60;
            uVar6 = *(uint *)(lVar27 + 0x28 + lVar23);
            local_380 = (ulonglong)uVar6;
            if (uVar6 != 0) {
              local_398 = (longlong *)(lVar27 + lVar23);
              local_358 = (uint *)(lVar23 + lVar27 + 0x10);
              puVar15 = (uint *)local_398[4];
              if ((uint *)local_398[4] == (uint *)0x0) {
                puVar15 = local_358;
              }
              uVar17 = *puVar15;
              if (uVar17 == 0) {
                iVar29 = uVar6 + 0x1e;
                if (-1 < (int)(uVar6 - 1)) {
                  iVar29 = uVar6 - 1;
                }
                local_3a0 = 0;
                uVar22 = (ulonglong)(uint)(iVar29 >> 5);
                if (iVar29 >> 5 < 1) {
                  uVar22 = 0;
                }
                local_3ac = 0;
                do {
                  if (uVar22 == local_3a0) goto LAB_140ad5621;
                  local_3ac = local_3ac + 0x20;
                  uVar17 = puVar15[local_3a0 + 1];
                  local_3a0 = local_3a0 + 1;
                } while (uVar17 == 0);
              }
              else {
                local_3a0 = 0;
                local_3ac = 0;
              }
              local_390 = (ulonglong)(-uVar17 & uVar17);
              uVar22 = local_390 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar29 = (local_3ac - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if (iVar29 < (int)uVar6) {
                local_3a4 = 0xffffffff;
                do {
                  lVar27 = *local_398 + (longlong)iVar29 * 0x18;
                  lVar23 = *(longlong *)(lVar27 + 8);
                  local_3c8 = 0;
                  local_360 = (longlong *)
                              FUN_1491e0882(local_388,plVar28,lVar27,*(undefined1 *)(lVar23 + 0x10))
                  ;
                  lVar27 = FUN_1491929d8(lVar23);
                  local_364 = *(int *)(lVar27 + 0x34);
                  lVar27 = FUN_1491929d8(lVar23);
                  lVar23 = *(int *)(lVar27 + 0x44) + lVar23;
                  if (lVar23 != 0) {
                    lVar27 = FUN_1491929d8(local_360);
                    if (*(int *)(lVar27 + 0x34) == local_364) {
                      (**(code **)(*local_360 + 0x10))(local_360,lVar23);
                    }
                  }
                  local_3a4 = local_3a4 & ~(uint)local_390;
                  puVar15 = (uint *)local_398[4];
                  if ((uint *)local_398[4] == (uint *)0x0) {
                    puVar15 = local_358;
                  }
                  iVar7 = (int)local_398[5];
                  lVar27 = (longlong)(int)local_3a0;
                  uVar6 = puVar15[lVar27] & local_3a4;
                  iVar29 = iVar7;
                  if (uVar6 == 0) {
                    iVar16 = iVar7 + 0x1e;
                    if (-1 < iVar7 + -1) {
                      iVar16 = iVar7 + -1;
                    }
                    iVar16 = iVar16 >> 5;
                    local_3ac = local_3ac + 0x20;
                    iVar8 = iVar16;
                    if (iVar16 < (int)local_3a0) {
                      iVar8 = (int)local_3a0;
                    }
                    if ((int)local_3a0 < iVar16) {
                      lVar23 = 0;
                      do {
                        uVar6 = (puVar15 + lVar27 + 1)[lVar23];
                        if (uVar6 != 0) {
                          local_3a0 = (ulonglong)((int)local_3a0 + (int)lVar23 + 1);
                          local_3a4 = 0xffffffff;
                          goto LAB_140ad581a;
                        }
                        local_3ac = local_3ac + 0x20;
                        lVar23 = lVar23 + 1;
                      } while (iVar8 - lVar27 != lVar23);
                      local_3a4 = 0xffffffff;
                      local_3a0 = (longlong)iVar8 + 1;
                    }
                    else {
                      local_3a0 = lVar27 + 1;
                    }
                  }
                  else {
LAB_140ad581a:
                    local_390 = (ulonglong)(-uVar6 & uVar6);
                    uVar22 = local_390 * 2 + 1;
                    lVar27 = 0x3f;
                    if (uVar22 != 0) {
                      for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                      }
                    }
                    iVar29 = (local_3ac - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                    if (iVar7 <= iVar29) {
                      iVar29 = iVar7;
                    }
                  }
                } while (iVar29 != (int)local_380);
              }
            }
          }
        }
LAB_140ad5621:
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)(local_3b8 + 0xc0));
    }
    param_1 = local_388;
    FUN_140e4926c(local_388);
    FUN_1491d7f8e(param_1 + 0x390,local_3b8 + 0x390);
    FUN_14449dffe(param_1,0);
    uVar6 = FUN_14449e1fc(local_3b8);
    uVar17 = uVar6 >> 0xd ^ *(int *)(local_3b8 + 0xa8) - uVar6;
    uVar18 = uVar17 << 8 ^ (-0x61c88647 - uVar6) - uVar17;
    uVar24 = uVar18 >> 0xd ^ (uVar6 - uVar17) - uVar18;
    uVar6 = uVar24 >> 0xc ^ (uVar17 - uVar18) - uVar24;
    uVar17 = uVar6 << 0x10 ^ (uVar18 - uVar24) - uVar6;
    uVar18 = uVar17 >> 5 ^ (uVar24 - uVar6) - uVar17;
    uVar24 = uVar18 >> 3 ^ (uVar6 - uVar17) - uVar18;
    uVar6 = uVar24 << 10 ^ (uVar17 - uVar18) - uVar24;
    *(uint *)(param_1 + 0xa8) = (uVar6 >> 0xf ^ uVar18 - (uVar24 + uVar6)) + 1;
    if (*(int *)(param_1 + 0x480) != *(int *)(param_1 + 0x4ac)) {
      FUN_14920d1d6(param_1 + 0x478);
      FUN_14920d31a(param_1 + 0x478);
    }
    lpCriticalSection = local_350;
    uVar21 = local_3a5;
    uVar3 = local_3a6;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + *(int *)(local_3b8 + 0xac);
    *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + *(short *)(local_3b8 + 0xb0);
    if (local_158 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar25 = uStack_120;
    if (local_118 != (undefined8 *)0x0) {
      FUN_1400020a8();
      lVar25 = uStack_120;
    }
    uStack_120._4_4_ = (undefined4)((ulonglong)lVar25 >> 0x20);
    *(undefined1 *)(param_1 + 0x2e9) = uVar3;
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      lVar27 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x50) + lVar27 + 8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar27) != 0)) {
          local_148 = 0;
          uVar22 = (ulonglong)local_128 >> 8;
          local_128._0_4_ = CONCAT31((int3)uVar22,0xff);
          local_128._4_4_ = 0;
          uStack_120._0_4_ = 0;
          FUN_14920c4a2(param_1 + 0x50);
          lVar25 = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
          break;
        }
        lVar27 = lVar27 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar27);
    }
    *(undefined1 *)(param_1 + 0x470) = 0;
    uStack_120 = lVar25;
    FUN_140ad4746(param_1,0x13,0);
  }
  LeaveCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x470) = uVar21;
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ad5be4 FUN_140ad5be4 body=2489 status=ok
// SIG undefined FUN_140ad5be4(void)

void FUN_140ad5be4(longlong param_1,byte param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f1;
  LPCRITICAL_SECTION local_f0;
  undefined1 local_e8 [96];
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  EnterCriticalSection(lpCriticalSection);
  uVar13 = *(undefined1 *)(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x110) = 0;
  local_f0 = lpCriticalSection;
  if (param_2 != 0xff) {
    iVar6 = *(int *)(param_1 + 0xa8) - (uint)param_2;
    uVar12 = iVar6 * 0x100 ^ 0x9e3779b9U - *(int *)(param_1 + 0xa8);
    uVar8 = uVar12 >> 0xd ^ ((uint)param_2 - iVar6) - uVar12;
    uVar4 = uVar8 >> 0xc ^ (iVar6 - uVar12) - uVar8;
    uVar12 = uVar4 << 0x10 ^ (uVar12 - uVar8) - uVar4;
    uVar8 = uVar12 >> 5 ^ (uVar8 - uVar4) - uVar12;
    uVar4 = uVar8 >> 3 ^ (uVar4 - uVar12) - uVar8;
    uVar12 = uVar4 << 10 ^ (uVar12 - uVar8) - uVar4;
    uVar4 = uVar12 >> 0xf ^ uVar8 - (uVar4 + uVar12);
    if (uVar4 != *(uint *)(param_1 + 0x3e0)) {
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      if (*(int *)(param_1 + 0x3f4) < 0) {
        FUN_14475e67c(param_1 + 1000);
      }
      if (*(int *)(param_1 + 0x404) < 0) {
        *(undefined4 *)(param_1 + 0x400) = 0;
        FUN_14481578e(param_1 + 0x3f8);
      }
      else {
        *(undefined4 *)(param_1 + 0x400) = 0;
      }
      *(uint *)(param_1 + 0x3e0) = uVar4;
      uVar4 = *(uint *)(param_1 + 0xc0);
      iVar6 = *(int *)(param_1 + 0x3f0);
      *(uint *)(param_1 + 0x3f0) = iVar6 + uVar4;
      if ((uint)(*(int *)(param_1 + 0x3f4) - iVar6) < uVar4) {
        FUN_1401c3474(param_1 + 1000);
      }
      memset((void *)((longlong)iVar6 + *(longlong *)(param_1 + 1000)),0,(longlong)(int)uVar4);
      local_78 = 0;
      local_68 = &PTR_LAB_14bb90330;
      local_88[0] = FUN_1444aafc4;
      local_60 = param_1;
      local_58 = param_2;
      FUN_14449bc3c(param_1,local_88,1);
    }
    if (*(int *)(param_1 + 0x3f0) != 0) {
      iVar6 = *(int *)(param_1 + 0x400);
      if ((longlong)iVar6 == 0) {
        bVar2 = true;
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x3f8);
        lVar14 = 0;
        do {
          lVar5 = FUN_141125054(param_1,*(undefined4 *)(lVar15 + lVar14));
          if (lVar5 != 0) {
            FUN_1401571e4(param_1,local_e8,lVar5,1);
            if (*(char *)(lVar5 + 0x10) == '\x04') {
              FUN_1401261c4(param_1,local_e8,lVar5,1);
              FUN_14449ed30(param_1,local_e8,lVar5,1);
            }
            local_100 = 0;
            local_108 = 1;
            FUN_1448340d4(param_1,lVar5,0,1);
          }
          lVar14 = lVar14 + 4;
        } while ((longlong)iVar6 * 4 != lVar14);
        iVar6 = *(int *)(param_1 + 0x400);
        if ((longlong)iVar6 != 0) {
          lVar15 = *(longlong *)(param_1 + 0x3f8);
          lVar14 = 0;
          do {
            lVar5 = FUN_141125054(param_1,*(undefined4 *)(lVar15 + lVar14));
            if (lVar5 != 0) {
              pcVar1 = *(char **)(lVar5 + 0x90);
              pcVar9 = "";
              if (pcVar1 != (char *)0x0) {
                pcVar9 = pcVar1;
              }
              if (*pcVar9 == '\0') {
                pcVar9 = &DAT_14cc07bfc;
                if (pcVar1 != (char *)0x0) {
                  pcVar9 = pcVar1;
                }
                *pcVar9 = '\x01';
                if (*(char *)(lVar5 + 0x10) == '\x04') {
                  puVar7 = &DAT_14cc07bfc;
                  if (*(undefined1 **)(lVar5 + 0x448) != (undefined1 *)0x0) {
                    puVar7 = *(undefined1 **)(lVar5 + 0x448);
                  }
                  *puVar7 = 1;
                  puVar7 = &DAT_14cc07bfc;
                  if (*(undefined1 **)(lVar5 + 0x4c8) != (undefined1 *)0x0) {
                    puVar7 = *(undefined1 **)(lVar5 + 0x4c8);
                  }
                  *puVar7 = 1;
                }
                local_100 = 1;
                local_108 = 0;
                FUN_1448340d4(param_1,lVar5,0,1);
              }
            }
            lVar14 = lVar14 + 4;
          } while ((longlong)iVar6 * 4 != lVar14);
        }
        bVar2 = true;
      }
      goto LAB_140ad5f18;
    }
  }
  bVar2 = false;
LAB_140ad5f18:
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar15 = 0;
    do {
      if (((*(int *)(param_1 + 0x3f0) == 0 || !bVar2) ||
          (*(char *)(*(longlong *)(param_1 + 1000) + lVar15) == '\0')) &&
         (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar15 * 8), lVar14 != 0)) {
        bVar3 = *(byte *)(lVar14 + 0x10);
        if ((bVar3 == 4) || (bVar3 == 2)) {
          lVar5 = lVar14 + 0x110;
          if (*(longlong *)(lVar14 + 0x1a0) != 0) {
            lVar5 = *(longlong *)(lVar14 + 0x1a0);
          }
          iVar6 = *(int *)(lVar14 + 0x1b0);
          if ((longlong)iVar6 != 0) {
            lVar14 = 0;
            do {
              *(undefined4 *)(lVar5 + 0x10 + lVar14) = *(undefined4 *)(lVar5 + 0x1c + lVar14);
              *(undefined8 *)(lVar5 + 8 + lVar14) = *(undefined8 *)(lVar5 + 0x14 + lVar14);
              lVar14 = lVar14 + 0x90;
            } while ((longlong)iVar6 * 0x90 != lVar14);
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar15 * 8);
            if (lVar14 == 0) goto LAB_140ad61f0;
            bVar3 = *(byte *)(lVar14 + 0x10);
          }
        }
        if (bVar3 == 4) {
          if (*(longlong *)(lVar14 + 0x408) != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x428);
            if ((puVar10 == (undefined8 *)0x0) &&
               (puVar10 = &DAT_14cc07c00,
               *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc07c60)) {
              local_f1 = uVar13;
              FUN_144b3d300(&DAT_14cc07c60);
              puVar10 = &DAT_14cc07c00;
              uVar13 = local_f1;
              if (DAT_14cc07c60 == -1) {
                puVar10 = &DAT_14c846480;
                puVar11 = &DAT_14cc07c00;
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                _Init_thread_footer(&DAT_14cc07c60);
                puVar10 = &DAT_14cc07c00;
                uVar13 = local_f1;
              }
            }
            puVar11 = *(undefined8 **)(lVar14 + 0x408);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          if (*(longlong *)(lVar14 + 0x418) != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x438);
            if ((puVar10 == (undefined8 *)0x0) &&
               (puVar10 = &DAT_14cc07c00,
               *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc07c60)) {
              local_f1 = uVar13;
              FUN_144b3d300(&DAT_14cc07c60);
              puVar10 = &DAT_14cc07c00;
              uVar13 = local_f1;
              if (DAT_14cc07c60 == -1) {
                puVar10 = &DAT_14c846480;
                puVar11 = &DAT_14cc07c00;
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                _Init_thread_footer(&DAT_14cc07c60);
                puVar10 = &DAT_14cc07c00;
                uVar13 = local_f1;
              }
            }
            puVar11 = *(undefined8 **)(lVar14 + 0x418);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          if (*(undefined1 **)(lVar14 + 0x458) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(lVar14 + 0x478);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_14bb83710;
            }
            **(undefined1 **)(lVar14 + 0x458) = *puVar7;
          }
          if (*(undefined1 **)(lVar14 + 0x448) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(lVar14 + 0x468);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_14bb83710;
            }
            **(undefined1 **)(lVar14 + 0x448) = *puVar7;
          }
          if (*(longlong *)(lVar14 + 0x488) != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x4a8);
            if ((puVar10 == (undefined8 *)0x0) &&
               (puVar10 = &DAT_14cc07c00,
               *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc07c60)) {
              local_f1 = uVar13;
              FUN_144b3d300(&DAT_14cc07c60);
              puVar10 = &DAT_14cc07c00;
              uVar13 = local_f1;
              if (DAT_14cc07c60 == -1) {
                puVar10 = &DAT_14c846480;
                puVar11 = &DAT_14cc07c00;
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                _Init_thread_footer(&DAT_14cc07c60);
                puVar10 = &DAT_14cc07c00;
                uVar13 = local_f1;
              }
            }
            puVar11 = *(undefined8 **)(lVar14 + 0x488);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          if (*(longlong *)(lVar14 + 0x498) != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x4b8);
            if ((puVar10 == (undefined8 *)0x0) &&
               (puVar10 = &DAT_14cc07c00,
               *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc07c60)) {
              local_f1 = uVar13;
              FUN_144b3d300(&DAT_14cc07c60);
              puVar10 = &DAT_14cc07c00;
              uVar13 = local_f1;
              if (DAT_14cc07c60 == -1) {
                puVar10 = &DAT_14c846480;
                puVar11 = &DAT_14cc07c00;
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                _Init_thread_footer(&DAT_14cc07c60);
                puVar10 = &DAT_14cc07c00;
                uVar13 = local_f1;
              }
            }
            puVar11 = *(undefined8 **)(lVar14 + 0x498);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          if (*(undefined1 **)(lVar14 + 0x4d8) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(lVar14 + 0x4f8);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_14bb83710;
            }
            **(undefined1 **)(lVar14 + 0x4d8) = *puVar7;
          }
          if (*(undefined1 **)(lVar14 + 0x4c8) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(lVar14 + 0x4e8);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_14bb83710;
            }
            **(undefined1 **)(lVar14 + 0x4c8) = *puVar7;
          }
          *(undefined8 *)(lVar14 + 0x3e0) = *(undefined8 *)(lVar14 + 0x3f8);
          *(undefined4 *)(lVar14 + 0x3d0) = *(undefined4 *)(lVar14 + 1000);
          *(undefined4 *)(lVar14 + 0x3d4) = *(undefined4 *)(lVar14 + 0x3ec);
          *(undefined4 *)(lVar14 + 0x3d8) = *(undefined4 *)(lVar14 + 0x3f0);
          *(undefined4 *)(lVar14 + 0x3dc) = *(undefined4 *)(lVar14 + 0x3f4);
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar15 * 8);
          if (lVar14 == 0) goto LAB_140ad61f0;
          bVar3 = *(byte *)(lVar14 + 0x10);
        }
        if (((bVar3 < 0x21) && ((0x100010016U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
           (bVar3 == 0x80)) {
          if (*(longlong *)(lVar14 + 0x50) != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x70);
            if ((puVar10 == (undefined8 *)0x0) &&
               (puVar10 = &DAT_14cc07c00,
               *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc07c60)) {
              local_f1 = uVar13;
              FUN_144b3d300(&DAT_14cc07c60);
              puVar10 = &DAT_14cc07c00;
              uVar13 = local_f1;
              if (DAT_14cc07c60 == -1) {
                puVar10 = &DAT_14c846480;
                puVar11 = &DAT_14cc07c00;
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                _Init_thread_footer(&DAT_14cc07c60);
                puVar10 = &DAT_14cc07c00;
                uVar13 = local_f1;
              }
            }
            puVar11 = *(undefined8 **)(lVar14 + 0x50);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          if (*(longlong *)(lVar14 + 0x60) != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x80);
            if ((puVar10 == (undefined8 *)0x0) &&
               (puVar10 = &DAT_14cc07c00,
               *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc07c60)) {
              local_f1 = uVar13;
              FUN_144b3d300(&DAT_14cc07c60);
              puVar10 = &DAT_14cc07c00;
              uVar13 = local_f1;
              if (DAT_14cc07c60 == -1) {
                puVar10 = &DAT_14c846480;
                puVar11 = &DAT_14cc07c00;
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                _Init_thread_footer(&DAT_14cc07c60);
                puVar10 = &DAT_14cc07c00;
                uVar13 = local_f1;
              }
            }
            puVar11 = *(undefined8 **)(lVar14 + 0x60);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          if (*(undefined1 **)(lVar14 + 0xa0) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(lVar14 + 0xc0);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_14bb83710;
            }
            **(undefined1 **)(lVar14 + 0xa0) = *puVar7;
          }
          if (*(undefined1 **)(lVar14 + 0x90) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(lVar14 + 0xb0);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_14bb83710;
            }
            **(undefined1 **)(lVar14 + 0x90) = *puVar7;
          }
        }
      }
LAB_140ad61f0:
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0xc0));
  }
  *(undefined1 *)(param_1 + 0x110) = uVar13;
  LeaveCriticalSection(local_f0);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ad659e FUN_140ad659e body=56 status=ok
// SIG undefined FUN_140ad659e(void)

void FUN_140ad659e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_140ad65d6(param_6,param_5,param_2,param_3,param_4,param_6,param_7,&DAT_14cad0f08);
  return;
}



// FUNCTION 140ad65d6 FUN_140ad65d6 body=430 status=ok
// SIG undefined FUN_140ad65d6(void)

undefined4
FUN_140ad65d6(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b9;
  longlong local_b8 [2];
  undefined8 *local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_128 = *param_4;
  uStack_120 = param_4[1];
  local_118 = *(undefined4 *)(param_4 + 2);
  uStack_114 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_110 = *(undefined4 *)(param_4 + 3);
  uStack_10c = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar6 = *param_3;
  uVar5 = param_3[1];
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_3 + 4);
  FUN_144a73fdc(local_a8,&local_128,param_2);
  local_128 = local_98;
  uStack_120 = uStack_90;
  local_118 = local_88;
  uStack_114 = uStack_84;
  uStack_110 = uStack_80;
  uStack_10c = uStack_7c;
  uStack_f0 = 0;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0x3ff0000000000000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  local_130 = &local_b9;
  local_138 = param_8;
  local_148 = param_6;
  uStack_140 = param_7;
  local_150 = param_5;
  local_158 = local_b8;
  local_108 = uVar6;
  uStack_104 = uVar5;
  uStack_100 = (int)uVar2;
  uStack_fc = (int)((ulonglong)uVar2 >> 0x20);
  local_f8 = uVar3;
  uVar6 = FUN_140d7b999(param_1,local_a8[0],param_2,&local_128);
  if (local_a8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8[0] + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_a8[0] + 0xc) == 0)) {
      pcVar4 = *(code **)*local_a8[0];
      if ((pcVar4 == FUN_141724e50) || (pcVar4 == FUN_141724e26)) {
        *local_a8[0] = &PTR_FUN_149f553e0;
        FUN_1400020a8();
      }
      else {
        (*pcVar4)(local_a8[0],1);
      }
    }
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad6786 FUN_140ad6786 body=333 status=ok
// SIG undefined FUN_140ad6786(void)

void FUN_140ad6786(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_1447c0e7a();
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x6c8) + 0x30);
    puVar3 = *(undefined8 **)(param_1 + 0x6d0);
    if (puVar3 != puVar2) {
      *(undefined8 **)(param_1 + 0x6d0) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x6d8);
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x6c8) + 0x38);
    if (puVar2 != puVar3) {
      *(undefined8 **)(param_1 + 0x6d8) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
      }
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
  FUN_140ad6926(param_1,(undefined8 *)(param_1 + 0x6c8));
  puVar2 = *(undefined8 **)(param_1 + 0x6c8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0;
  FUN_140ad68d4(param_1 + 0x6e8);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar4 = FUN_1447210f0();
    if (lVar4 != 0) {
      lVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x390) + 0x18))
                        (*(longlong *)(param_1 + 0x20) + 0x390);
      if (lVar4 != 0) {
        FUN_140c0092c(lVar4,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ad68d4 FUN_140ad68d4 body=81 status=ok
// SIG undefined FUN_140ad68d4(void)

void FUN_140ad68d4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140ca8596(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140ad6926 FUN_140ad6926 body=258 status=ok
// SIG undefined FUN_140ad6926(void)

void FUN_140ad6926(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((*param_2 != 0) && (*(uint *)(*param_2 + 8) < 2)) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if ((lVar4 == 0) && (lVar4 = FUN_1448abda6(), lVar4 == 0)) {
      return;
    }
    if ((*(longlong *)(lVar4 + 0x260) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x38), lVar4 != 0)) {
      uVar1 = *(undefined8 *)(*param_2 + 0x30);
      *(undefined8 *)(*param_2 + 0x30) = 0;
      uVar2 = *(undefined8 *)(*param_2 + 0x38);
      *(undefined8 *)(*param_2 + 0x38) = 0;
      puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *(undefined2 *)(puVar3 + 8) = 1;
      *puVar3 = &PTR_FUN_149f45dc0;
      puVar3[10] = FUN_14324b3be;
      puVar3[0xc] = 0;
      puVar3[0xe] = &PTR_LAB_14a3c1500;
      puVar3[0xf] = uVar1;
      puVar3[0x10] = uVar2;
      puVar3[0x12] = 0;
      puVar3[0x14] = 0;
      *(undefined1 *)(puVar3 + 0x1a) = 0;
      FUN_1406e6496(lVar4 + 0x70,puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140ad6a28 FUN_140ad6a28 body=356 status=ok
// SIG undefined FUN_140ad6a28(void)

undefined8 * FUN_140ad6a28(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14a3c02b0;
  if (DAT_14caa22a0 != DAT_14caa22cc) {
    iVar3 = FUN_1447addd0(param_1 + 2,0x10);
    puVar4 = &DAT_14caa22d0;
    if (DAT_14caa22d8 != (undefined *)0x0) {
      puVar4 = DAT_14caa22d8;
    }
    iVar3 = *(int *)(puVar4 + ((longlong)iVar3 & (longlong)DAT_14caa22e0 - 1U) * 4);
    if (iVar3 != -1) {
      do {
        lVar7 = (longlong)iVar3 * 0x20;
        lVar1 = DAT_14caa2298 + lVar7;
        if ((((*(int *)(DAT_14caa2298 + lVar7) == *(int *)(param_1 + 2)) &&
             (*(int *)(DAT_14caa2298 + 4 + lVar7) == *(int *)((longlong)param_1 + 0x14))) &&
            (*(int *)(DAT_14caa2298 + 8 + lVar7) == *(int *)(param_1 + 3))) &&
           (*(int *)(DAT_14caa2298 + 0xc + lVar7) == *(int *)((longlong)param_1 + 0x1c))) {
          iVar6 = *(int *)(puVar4 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          if (iVar6 == iVar3) {
            piVar5 = (int *)(puVar4 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          }
          else {
            do {
              piVar5 = (int *)((longlong)iVar6 * 0x20 + DAT_14caa2298 + 0x18);
              iVar6 = *piVar5;
            } while (iVar6 != iVar3);
          }
          *piVar5 = *(int *)(lVar1 + 0x18);
          FUN_140ad6bc2();
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  FUN_140ad6b8c(param_1[9]);
  FUN_140ad6b8c(param_1[8]);
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(puVar2 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(puVar2 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ad6b8c FUN_140ad6b8c body=54 status=ok
// SIG undefined FUN_140ad6b8c(void)

void FUN_140ad6b8c(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_1417921d4(param_1 + 4);
  *param_1 = &PTR_FUN_149f553e0;
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140ad6bc2 FUN_140ad6bc2 body=128 status=ok
// SIG undefined FUN_140ad6bc2(void)

void FUN_140ad6bc2(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caa2298;
  if (DAT_14caa22cc != 0) {
    *(int *)(DAT_14caa2298 + (longlong)DAT_14caa22c8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caa22cc) {
    iVar4 = DAT_14caa22c8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14caa22cc = DAT_14caa22cc + 1;
  puVar3 = &DAT_14caa22a8;
  if (DAT_14caa22b8 != (undefined *)0x0) {
    puVar3 = DAT_14caa22b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caa22c8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 140ad6c42 FUN_140ad6c42 body=12 status=ok
// SIG undefined FUN_140ad6c42(void)

void FUN_140ad6c42(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140ad6c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140ad6c4e FUN_140ad6c4e body=59 status=ok
// SIG undefined FUN_140ad6c4e(void)

undefined8 * FUN_140ad6c4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b47b010;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ad6c8a FUN_140ad6c8a body=29 status=ok
// SIG undefined FUN_140ad6c8a(void)

void FUN_140ad6c8a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140ad6ca8 FUN_140ad6ca8 body=59 status=ok
// SIG undefined FUN_140ad6ca8(void)

undefined8 * FUN_140ad6ca8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478fc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ad6ce4 FUN_140ad6ce4 body=29 status=ok
// SIG undefined FUN_140ad6ce4(void)

void FUN_140ad6ce4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140ad6d02 FUN_140ad6d02 body=59 status=ok
// SIG undefined FUN_140ad6d02(void)

undefined8 * FUN_140ad6d02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b47b030;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ad6d3e FUN_140ad6d3e body=584 status=ok
// SIG undefined FUN_140ad6d3e(void)

undefined4 * FUN_140ad6d3e(longlong param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + -0x3670);
  if (plVar2 == (longlong *)0x0) {
    FUN_140ad724c(param_1 + 0x2350,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*plVar2 + 0x7a0))(plVar2,param_2,param_3,param_4);
  }
  fVar8 = (float)FUN_140ad6f88(param_1 + 0x26b8,param_4);
  if (fVar8 <= 0.0) goto LAB_140ad6ed8;
  plVar2 = (longlong *)(param_1 + -0x3a30);
  pcVar3 = *(code **)(*plVar2 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    lVar7 = *(longlong *)(param_1 + -0x3680);
    if (lVar7 == 0) {
      pcVar3 = *(code **)(*plVar2 + 0x5f8);
      if (pcVar3 == FUN_144784df4) {
        pcVar3 = *(code **)(*(longlong *)(param_1 + 0x1f0) + 0x18);
        if (pcVar3 == (code *)&LAB_144904684) {
          if (*(int *)(param_1 + 0x3b84) != 0) {
            uVar1 = *(uint *)(param_1 + 0x3b80);
            lVar7 = 0;
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140ad6e55;
            plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar5 != (longlong *)0x0) &&
               (((int)plVar5[2] == *(int *)(param_1 + 0x3b84) &&
                ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
                lVar7 = *plVar5;
              }
              else {
                lVar7 = 0;
              }
              lVar7 = lVar7 + 0x110;
              goto LAB_140ad6f2e;
            }
          }
        }
        else {
          lVar7 = (*pcVar3)(param_1 + 0x1f0);
LAB_140ad6f2e:
          if (lVar7 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x20);
            goto LAB_140ad6f3b;
          }
        }
      }
      else {
        lVar7 = (*pcVar3)(plVar2);
LAB_140ad6f3b:
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x3b0);
          goto LAB_140ad6e55;
        }
      }
      lVar7 = 0;
    }
  }
  else {
    lVar7 = (*pcVar3)(plVar2);
  }
LAB_140ad6e55:
  if (((int)param_4 < 0) || (*(int *)(param_1 + 0x2760) <= (int)param_4)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2758) + 0x20 + (ulonglong)param_4 * 0x170);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
  }
  uVar4 = FUN_1447210f0(plVar2);
  local_80 = lVar7 != 0;
  local_88 = fVar8;
  local_78 = lVar7 == 0;
  FUN_140ad7566(&local_68,uVar4,lVar6,param_2);
  *(undefined8 *)(param_2 + 4) = local_58;
  *param_2 = local_68;
  param_2[1] = uStack_64;
  param_2[2] = uStack_60;
  param_2[3] = uStack_5c;
LAB_140ad6ed8:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad6f88 FUN_140ad6f88 body=385 status=ok
// SIG undefined FUN_140ad6f88(void)

float FUN_140ad6f88(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar3 = (float)FUN_140ad714c();
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + (ulonglong)param_2 * 0x170);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_140ad7026;
    if (DAT_14cbbd498 == 0) {
      local_50 = &local_38;
      local_38 = FUN_140940982;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146572ba2;
      local_58 = &LAB_148ca13ba;
      local_60 = &LAB_140e51436;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      cVar2 = FUN_140ad710a(lVar1);
      if (cVar2 != '\0') {
        fVar3 = fVar3 + *(float *)(lVar1 + 0xf6c);
      }
    }
  }
LAB_140ad7026:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad710a FUN_140ad710a body=66 status=ok
// SIG undefined FUN_140ad710a(void)

undefined8 FUN_140ad710a(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined7 uVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 != 0) {
    uVar2 = FUN_14030d84e();
    plVar3 = (longlong *)FUN_144718840(lVar6,uVar2);
    param_1 = lVar6;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      bVar5 = (byte)uVar2;
      uVar4 = (undefined7)((ulonglong)uVar2 >> 8);
      bVar1 = 1;
      goto LAB_140ad7140;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_140ad7140:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 140ad714c FUN_140ad714c body=255 status=ok
// SIG undefined FUN_140ad714c(void)

ulonglong FUN_140ad714c(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  
  uVar6 = (ulonglong)param_2;
  plVar2 = *(longlong **)(param_1 + 0x150);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_14058c734();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14058c734();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x40) != 0)) {
          uVar6 = FUN_140acce36(lVar4,uVar6);
          return uVar6;
        }
      }
    }
  }
  lVar4 = FUN_14016530a(param_1,uVar6);
  if (lVar4 == 0) {
    fVar7 = 0.0;
  }
  else {
    lVar4 = FUN_140280ec4(lVar4);
    fVar7 = *(float *)(lVar4 + 200);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + uVar6 * 0x170);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    else if (lVar4 == 0) goto LAB_140ad7231;
    fVar5 = (float)FUN_140165266(lVar4);
    fVar7 = fVar7 * fVar5;
  }
LAB_140ad7231:
  return (ulonglong)(uint)fVar7;
}



// FUNCTION 140ad724c FUN_140ad724c body=209 status=ok
// SIG undefined FUN_140ad724c(void)

undefined4 * FUN_140ad724c(longlong param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar7 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar7 = *(longlong *)(param_1 + 400);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_4) * 4);
    if (iVar8 != -1) {
      plVar9 = (longlong *)0x0;
      do {
        lVar7 = *(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 0x20) == param_4) {
          if (lVar7 == 0) goto LAB_140ad72eb;
          lVar3 = *(longlong *)(lVar7 + 8);
          plVar9 = *(longlong **)(lVar7 + 0x10);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          if (lVar3 != 0) {
            FUN_140ad731e(lVar3,param_2);
            goto LAB_140ad72cc;
          }
          break;
        }
        iVar8 = *(int *)(lVar7 + 0x18);
      } while (iVar8 != -1);
      goto LAB_140ad72ed;
    }
  }
LAB_140ad72eb:
  plVar9 = (longlong *)0x0;
LAB_140ad72ed:
  *(undefined8 *)(param_2 + 4) = DAT_14c846508;
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar4 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
LAB_140ad72cc:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_2;
}



// FUNCTION 140ad731e FUN_140ad731e body=583 status=ok
// SIG undefined FUN_140ad731e(void)

undefined4 * FUN_140ad731e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_78 [32];
  char local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_2 + 4) = DAT_14c846508;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  lVar7 = FUN_1408a35a2(param_1 + 0x600);
  if ((lVar7 == 0) || (*(char *)(param_1 + 0x5d8) != '\0')) {
    if (((*(int *)(param_1 + 0x1c) != 0) &&
        ((((uVar6 = *(uint *)(param_1 + 0x18), -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc)) &&
          (plVar9 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0)) &&
         (((int)plVar9[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)
          ))))) && (lVar7 = *plVar9, lVar7 != 0)) {
      bVar1 = *(byte *)(lVar7 + 0xbd8);
      local_b8 = DAT_14c8464f0;
      local_c8 = DAT_14c8464e0;
      uStack_c0 = DAT_14c8464e8;
      *(undefined8 *)(param_2 + 4) = DAT_14c846508;
      uVar5 = DAT_14c846500._4_4_;
      uVar4 = (undefined4)DAT_14c846500;
      uVar3 = DAT_14c8464f8._4_4_;
      *param_2 = (undefined4)DAT_14c8464f8;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      if (((int)(uint)bVar1 < *(int *)(lVar7 + 0xbf0)) &&
         (plVar9 = *(longlong **)
                    (*(longlong *)(lVar7 + 0xbe8) + 8 +
                    (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2d8))(plVar9,&local_c8,param_2);
      }
    }
  }
  else {
    puVar8 = (undefined4 *)FUN_1407726b2(lVar7);
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *param_2 = *puVar8;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar8 + 4);
    if (*(char *)(lVar7 + 0x338) == '\x01') {
      local_38 = *(undefined8 *)(lVar7 + 0x378);
      local_48 = *(undefined8 *)(lVar7 + 0x368);
      uStack_40 = *(undefined8 *)(lVar7 + 0x370);
      uVar6 = 0;
      if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2))
          && ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x1c))) &&
          (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
        uVar6 = (uint)*(byte *)(*plVar9 + 0xbd8);
      }
      if ((*(int *)(param_1 + 0x28) <= (int)uVar6) ||
         (*(float *)(*(longlong *)(param_1 + 0x20) + 0x10 + (ulonglong)uVar6 * 0x18) <= 0.0)) {
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_108 = (undefined4)local_48;
        uStack_104 = local_48._4_4_;
        uStack_100 = (undefined4)uStack_40;
        uStack_fc = uStack_40._4_4_;
        local_d0 = 0;
        local_f8 = local_38;
        FUN_1447c9d7a(&local_c8,param_3);
        if (local_58 == '\x01') {
          FUN_1448052ee(local_78,param_2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad7566 FUN_140ad7566 body=2754 status=ok
// SIG undefined FUN_140ad7566(void)

double * FUN_140ad7566(double *param_1,longlong param_2,longlong param_3,double *param_4,
                      float param_5,char param_6,char param_7)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  double dVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_178 [32];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_5 <= 0.0) {
    param_1[2] = param_4[2];
    uVar21 = *(undefined4 *)((longlong)param_4 + 4);
    uVar22 = *(undefined4 *)(param_4 + 1);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar21;
    *(undefined4 *)(param_1 + 1) = uVar22;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_178);
  }
  lVar14 = FUN_140ad802e();
  if ((param_6 == '\0') || (*(int *)(lVar14 + 0x28) < 1)) {
    fVar24 = param_5 * 0.5 * 0.017453292;
    if (param_7 == '\0') {
      FUN_144a76660(param_4,local_120);
      FUN_140c84580(local_108,local_120,fVar24);
      FUN_144a79a9c(local_108,param_1);
      goto LAB_140ad7a45;
    }
    dVar17 = (double)FUN_144719204(SUB84(*param_4,0),0x4076800000000000);
    dVar2 = (double)FUN_144719204(SUB84(param_4[1],0),0x4076800000000000);
    local_150 = sin(dVar17 * 0.017453292519943295);
    dVar17 = cos(dVar17 * 0.017453292519943295);
    dVar8 = sin(dVar2 * 0.017453292519943295);
    local_140 = cos(dVar2 * 0.017453292519943295);
    local_138 = dVar8 * dVar17;
    local_140 = local_140 * dVar17;
    uVar13 = rand();
    dVar4 = *param_4;
    dVar17 = param_4[1];
    dVar8 = param_4[2];
    dVar2 = sin(dVar4 * 0.01745329238474369);
    local_158 = dVar2;
    dVar19 = sin(dVar17 * 0.01745329238474369);
    dVar3 = sin(dVar8 * 0.01745329238474369);
    sin(0.0);
    dVar4 = cos(dVar4 * 0.01745329238474369);
    dVar17 = cos(dVar17 * 0.01745329238474369);
    dVar8 = cos(dVar8 * 0.01745329238474369);
    cos(0.0);
    local_130 = dVar4 * dVar17;
    local_128 = dVar19 * dVar4;
    dVar5 = dVar2 * dVar3 * dVar17 - dVar19 * dVar8;
    dVar2 = dVar2 * dVar3 * dVar19 + dVar17 * dVar8;
    dVar4 = -dVar3 * dVar4;
    dVar8 = (double)((fVar24 * 180.0) / 3.1415927) * 0.017453292519943295;
    dVar17 = sin(dVar8);
    dVar8 = cos(dVar8);
    dVar20 = 1.0 - dVar8;
    dVar19 = dVar4 * dVar5 * dVar20;
    dVar3 = dVar4 * dVar2 * dVar20;
    dVar7 = (dVar4 * dVar4 * dVar20 + dVar8) * local_150 +
            (dVar19 - dVar2 * dVar17) * local_140 + (dVar3 + dVar5 * dVar17) * local_138;
    dVar18 = dVar5 * dVar2 * dVar20;
    dVar6 = (dVar3 - dVar5 * dVar17) * local_150 +
            (dVar18 + dVar4 * dVar17) * local_140 + (dVar2 * dVar2 * dVar20 + dVar8) * local_138;
    dVar4 = (dVar19 + dVar2 * dVar17) * local_150 +
            (dVar20 * dVar5 * dVar5 + dVar8) * local_140 + (dVar18 - dVar4 * dVar17) * local_138;
    dVar8 = (double)((((float)(uVar13 & 0x7fff) / 32767.0) * 6.2831855 * 180.0) / 3.1415927) *
            0.017453292519943295;
    local_148 = dVar5;
    dVar17 = sin(dVar8);
    dVar8 = cos(dVar8);
    dVar5 = 1.0 - dVar8;
    dVar3 = local_158 * local_130 * dVar5;
    dVar19 = local_158 * local_128 * dVar5;
    dVar2 = (local_158 * local_158 * dVar5 + dVar8) * dVar7 +
            (dVar3 - local_128 * dVar17) * dVar4 + (dVar19 + local_130 * dVar17) * dVar6;
    dVar18 = local_128 * local_130 * dVar5;
    dVar19 = (dVar19 - local_130 * dVar17) * dVar7 +
             (dVar18 + local_158 * dVar17) * dVar4 + (local_128 * local_128 * dVar5 + dVar8) * dVar6
    ;
    dVar8 = (dVar3 + local_128 * dVar17) * dVar7 +
            (dVar5 * local_130 * local_130 + dVar8) * dVar4 + (dVar18 - local_158 * dVar17) * dVar6;
    dVar17 = 0.0;
    if ((((dVar8 != 0.0) || (NAN(dVar8))) || (dVar19 != 0.0)) || (NAN(dVar19))) {
      dVar17 = atan2(dVar19,dVar8);
      dVar17 = dVar17 * 57.29577951308232;
    }
    param_1[1] = dVar17;
    dVar17 = SQRT(dVar8 * dVar8 + dVar19 * dVar19);
    if (((dVar2 == 0.0) && (!NAN(dVar2))) && (dVar17 == 0.0)) goto joined_r0x000140ad7f85;
LAB_140ad7a2c:
    dVar8 = atan2(dVar2,dVar17);
    dVar8 = dVar8 * 57.29577951308232;
  }
  else {
    fVar24 = (float)*(double *)(param_2 + 0x6d0);
    if ((param_3 != 0) && (cVar12 = FUN_1402273fc(param_3), cVar12 != '\0')) {
      fVar24 = (fVar24 - *(float *)(param_3 + 0xc18)) +
               (float)*(ushort *)(param_3 + 0xbe0) * 3.1415927;
    }
    param_5 = param_5 * 0.5;
    uVar22 = 0;
    dVar8 = 0.0;
    uVar21 = 0;
    dVar17 = 0.0;
    if ((0.0 < param_5) && (uVar13 = *(uint *)(lVar14 + 0x28), 0 < (int)uVar13)) {
      lVar1 = *(longlong *)(lVar14 + 0x20);
      lVar15 = 0;
      do {
        fVar23 = *(float *)(lVar14 + 0x30) * fVar24;
        fVar16 = sinf((*(float *)(lVar1 + 0xc + lVar15) * fVar23 + *(float *)(lVar1 + 0x14 + lVar15)
                      ) * 0.017453292);
        dVar8 = dVar8 + (double)(fVar16 * *(float *)(lVar1 + 0x10 + lVar15));
        fVar16 = sinf((fVar23 * *(float *)(lVar1 + lVar15) + *(float *)(lVar1 + 8 + lVar15)) *
                      0.017453292);
        dVar17 = dVar17 + (double)(fVar16 * *(float *)(lVar1 + 4 + lVar15));
        lVar15 = lVar15 + 0x18;
      } while ((ulonglong)uVar13 * 0x18 != lVar15);
      dVar19 = 1.0 / (double)*(int *)(lVar14 + 0x28);
      dVar2 = (double)param_5;
      dVar17 = dVar17 * dVar19 * dVar2;
      uVar21 = SUB84(dVar17,0);
      dVar8 = dVar8 * dVar19 * dVar2;
      uVar22 = SUB84(dVar8,0);
      dVar19 = dVar17 * dVar17 + dVar8 * dVar8;
      if ((double)(param_5 * param_5) < dVar19) {
        if (9.99999993922529e-09 < dVar19) {
          dVar8 = dVar8 * (1.0 / SQRT(dVar19));
        }
        else {
          dVar8 = 0.0;
        }
        uVar22 = SUB84(dVar8 * dVar2,0);
        uVar21 = SUB84((double)(-(ulonglong)(9.99999993922529e-09 < dVar19) &
                               (ulonglong)(dVar17 * (1.0 / SQRT(dVar19)))) * dVar2,0);
      }
    }
    dVar2 = *param_4;
    dVar17 = param_4[1];
    dVar8 = param_4[2];
    dVar19 = sin(dVar2 * 0.01745329238474369);
    dVar3 = sin(dVar17 * 0.01745329238474369);
    dVar4 = sin(dVar8 * 0.01745329238474369);
    sin(0.0);
    dVar5 = cos(dVar2 * 0.01745329238474369);
    dVar17 = cos(dVar17 * 0.01745329238474369);
    dVar8 = cos(dVar8 * 0.01745329238474369);
    cos(0.0);
    dVar11 = DAT_14c8464e8;
    dVar9 = DAT_14c8464e0;
    local_158 = dVar5 * dVar4;
    dVar2 = DAT_14c8464f0 * 0.0;
    local_150 = dVar19;
    dVar7 = (double)FUN_144719204(uVar22,0x4076800000000000);
    dVar20 = (double)FUN_144719204(uVar21,0x4076800000000000);
    dVar6 = sin(dVar7 * 0.017453292519943295);
    dVar7 = cos(dVar7 * 0.017453292519943295);
    dVar18 = sin(dVar20 * 0.017453292519943295);
    dVar20 = cos(dVar20 * 0.017453292519943295);
    dVar18 = dVar18 * dVar7;
    dVar20 = dVar20 * dVar7;
    dVar7 = 0.0;
    dVar9 = dVar9 * 0.0 +
            dVar6 * -(dVar19 * dVar8 * dVar17 + dVar3 * dVar4) +
            dVar18 * (dVar19 * dVar4 * dVar17 - dVar3 * dVar8) + dVar20 * dVar5 * dVar17;
    dVar17 = dVar11 * 0.0 +
             dVar6 * (dVar17 * dVar4 - dVar3 * dVar19 * dVar8) +
             dVar18 * (dVar19 * dVar4 * dVar3 + dVar17 * dVar8) + dVar20 * dVar3 * dVar5;
    dVar2 = (dVar20 * local_150 - dVar18 * local_158) + dVar5 * dVar8 * dVar6 + dVar2;
    if ((((dVar9 != 0.0) || (NAN(dVar9))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
      dVar7 = atan2(dVar17,dVar9);
      dVar7 = dVar7 * 57.29577951308232;
    }
    param_1[1] = dVar7;
    dVar17 = SQRT(dVar9 * dVar9 + dVar17 * dVar17);
    if (((dVar2 != 0.0) || (NAN(dVar2))) || (dVar17 != 0.0)) goto LAB_140ad7a2c;
joined_r0x000140ad7f85:
    dVar8 = 0.0;
    if (NAN(dVar17)) goto LAB_140ad7a2c;
  }
  *param_1 = dVar8;
  param_1[2] = 0.0;
LAB_140ad7a45:
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ad802e FUN_140ad802e body=353 status=ok
// SIG undefined FUN_140ad802e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140ad802e(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb94f50 == (longlong *)0x0) {
    DAT_14cb94f60 = 0;
    uRam000000014cb94f68 = 0;
    plVar2 = &DAT_14cb94f60;
    _DAT_14cb94f70 = 0xffffffff;
    _DAT_14cb94f58 = &PTR_FUN_14b4a7950;
    _DAT_14cb94f78 = 0;
    _DAT_14cb94f80 = 0;
    _DAT_14cb94f88 = 0;
    _DAT_14cb94f90 = 0;
    uRam000000014cb94f98 = 0;
    _DAT_14cb94fa0 = 0;
    uRam000000014cb94fa8 = 0;
    _DAT_14cb94fb0 = 0;
    uRam000000014cb94fb8 = 0;
    _DAT_14cb94fc0 = 0;
    uRam000000014cb94fc8 = 0;
    _DAT_14cb94fd0 = 0;
    uRam000000014cb94fd8 = 0;
    _DAT_14cb94fe0 = 0;
    uRam000000014cb94fe8 = 0;
    _DAT_14cb94ff0 = 0;
    uRam000000014cb94ff8 = 0;
    _DAT_14cb95000 = 0;
    DAT_14cb94f50 = (longlong *)&DAT_14cb94f58;
LAB_140ad805f:
    plVar4 = DAT_14cb94f50;
    if (*plVar2 == 0) goto LAB_140ad8142;
    cVar1 = FUN_1449e3c20(DAT_14cb94f50);
    if (cVar1 == '\0') goto LAB_140ad8079;
  }
  else {
    plVar2 = DAT_14cb94f50 + 1;
    if ((char)DAT_14cb94f50[2] == '\0') goto LAB_140ad805f;
    if ((char)DAT_14cb94f50[2] == '\x02') {
      plVar2 = (longlong *)(*plVar2 + 0x30);
      goto LAB_140ad805f;
    }
LAB_140ad8142:
    plVar4 = DAT_14cb94f50;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140ad8079;
    FUN_144a884d2(local_40,"def_globals_weapon",0);
    FUN_140024ada(local_40,plVar4);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
LAB_140ad8079:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ad8190 FUN_140ad8190 body=123 status=ok
// SIG undefined FUN_140ad8190(void)

void FUN_140ad8190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14059f5ca(*(undefined8 *)(param_1 + 0x30),&local_21);
  if (lVar1 != 0) {
    local_38 = local_21;
    FUN_14059f62a(lVar1,*(undefined8 *)(param_1 + 0x2f0),param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ad821a FUN_140ad821a body=72 status=ok
// SIG undefined FUN_140ad821a(void)

undefined8 * FUN_140ad821a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9444d0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_140ad8262(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ad8262 FUN_140ad8262 body=269 status=ok
// SIG undefined FUN_140ad8262(void)

void FUN_140ad8262(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b49c190;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x28] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (*(int *)((longlong)param_1 + 0x15c) != 0) {
    FUN_140115c12(param_1 + 0x2a,0);
  }
  param_1[0x29] = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140ad8370(param_1);
  return;
}



// FUNCTION 140ad8370 FUN_140ad8370 body=71 status=ok
// SIG undefined FUN_140ad8370(void)

void FUN_140ad8370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b49c1f0;
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ad83b8 FUN_140ad83b8 body=11302 status=ok
// SIG undefined FUN_140ad83b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ad83b8(longlong param_1,longlong *param_2,longlong param_3)

{
  double *pdVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 extraout_EAX;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  double *pdVar17;
  uint uVar18;
  longlong *plVar19;
  uint uVar20;
  undefined8 *puVar21;
  double *pdVar22;
  undefined8 *puVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar62;
  double dVar63;
  undefined1 auVar61 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined1 auStack_5c8 [32];
  double *local_5a8;
  undefined4 local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  wchar_t *local_588;
  undefined1 *local_580;
  undefined1 *local_578;
  code **local_570;
  undefined1 *local_568;
  code *local_560;
  undefined4 local_554;
  longlong local_550;
  double *local_548;
  undefined8 *local_540;
  undefined1 local_538 [16];
  longlong *local_528;
  longlong *local_520;
  longlong *local_518;
  longlong *local_510;
  longlong *local_508;
  longlong local_500;
  undefined1 local_4f8 [24];
  ulonglong local_4e0;
  ulonglong local_4d8;
  longlong *local_4d0;
  double local_4c8;
  double dStack_4c0;
  void *local_4b8;
  int local_4b0;
  undefined4 local_4ac;
  double local_4a8 [4];
  double local_488;
  double dStack_480;
  double local_478;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  double local_448 [4];
  double local_428;
  double dStack_420;
  ulonglong local_418;
  double local_408;
  double dStack_400;
  double local_3f8;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  longlong local_388;
  undefined8 uStack_380;
  undefined8 local_378 [13];
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  code *local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
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
  ulonglong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  if ((((param_2 != (longlong *)0x0) && (param_3 != 0)) && (*param_2 != 0)) && (param_1 != 0)) {
    pdVar17 = (double *)&DAT_14c846480;
    pdVar22 = local_4a8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar22 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar22 = pdVar22 + 1;
    }
    FUN_140adbca4(param_1,param_3,local_4a8);
    local_4b8 = (void *)0x0;
    local_4b0 = *(int *)(param_1 + 0x90);
    lVar12 = (longlong)local_4b0;
    _Src = *(void **)(param_1 + 0x88);
    if (lVar12 == 0) {
      local_4ac = 0;
    }
    else {
      FUN_140adb4c2(&local_4b8,local_4b0,0);
      memcpy(local_4b8,_Src,lVar12 << 3);
    }
    uVar6 = FUN_140adb3cf(&local_4b8);
    *(undefined4 *)(param_2 + 0x1d24) = uVar6;
    if (0 < *(int *)(param_1 + 0xa0)) {
      plVar9 = (longlong *)(param_1 + 0x98);
      uVar20 = ((uint *)*plVar9)[1];
      if (((((uVar20 != 0) && (uVar11 = *(uint *)*plVar9, -1 < (int)uVar11)) &&
           (((int)uVar11 < DAT_14c9647dc &&
            ((plVar19 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == uVar20)))))) &&
          ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) &&
         (((((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && (*plVar19 != 0)) &&
           (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0x90))) &&
          (*(uint *)((longlong)param_2 + 0x4c) < 100)))) {
        local_528 = (longlong *)(param_1 + 0x88);
        local_510 = param_2 + 8;
        local_2fc = 0;
        local_300 = 0;
        local_5a8 = (double *)&local_304;
        local_304 = 0;
        local_500 = param_1;
        FUN_140adb5ff(plVar9,local_528,&local_2fc,&local_300);
        if ((uint)(local_300 + local_2fc + local_304) < 100) {
          local_540 = (undefined8 *)(param_3 + 0x50);
          local_308 = (int)param_2[8];
          local_30c = *(int *)((longlong)param_2 + 0x44);
          local_508 = plVar9;
          if (((local_30c - local_308 != local_2fc) ||
              (local_310 = (int)param_2[9], local_310 - local_30c != local_300)) ||
             (*(int *)((longlong)param_2 + 0x4c) - local_310 != local_304)) {
            local_5a8 = local_4a8;
            FUN_141666cb2(plVar9,local_528,local_510,local_540);
            local_308 = (int)param_2[8];
            local_30c = *(int *)((longlong)param_2 + 0x44);
            local_310 = (int)param_2[9];
          }
          local_518 = param_2 + 0xe1a;
          memcpy(param_2 + 0x12ca,local_518,0x12c0);
          local_520 = param_2 + 0x1072;
          memcpy(param_2 + 0x1522,local_520,0x12c0);
          if (0 < *(int *)(local_500 + 0x90)) {
            uVar6 = 0;
            uVar71 = 0x3ff00000;
            uVar72 = 0;
            uVar73 = 0x3ff00000;
            lVar12 = 0;
            do {
              uVar28 = *(ulonglong *)(*local_528 + lVar12 * 8);
              uVar26 = uVar28 >> 0x20;
              uVar20 = (uint)uVar28;
              iVar25 = (int)(uVar28 >> 0x20);
              if (((uVar26 == 0) || ((int)uVar20 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar20 ||
                  ((((plVar9 = (longlong *)
                               ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                               *(longlong *)
                                (DAT_14c9647c8 + (ulonglong)((uint)(uVar28 >> 0xd) & 0x3fff8))),
                     plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar25)) ||
                    ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
                   (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))))))) {
                local_554 = 0;
                puVar21 = local_540;
              }
              else {
                lVar13 = *plVar9;
                if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
                  lVar13 = 0;
                }
                local_554 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(plVar9 + 1) >> 8),1);
                puVar21 = (undefined8 *)(lVar13 + 0x240);
              }
              puVar23 = local_378;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar23 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar23 = puVar23 + 1;
              }
              uVar3 = *(ulonglong *)(*local_508 + lVar12 * 8);
              if (((uVar3 >> 0x20 != 0) && (uVar11 = (uint)uVar3, -1 < (int)uVar11)) &&
                 ((int)uVar11 < DAT_14c9647dc)) {
                uVar18 = uVar11 & 0xffff;
                uVar27 = (ulonglong)((uint)(uVar3 >> 0x10) & 0x7fff);
                plVar9 = (longlong *)
                         ((ulonglong)(uVar18 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar27 * 8));
                if ((((plVar9 != (longlong *)0x0) &&
                     (iVar8 = (int)(uVar3 >> 0x20), (int)plVar9[2] == iVar8)) &&
                    ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) &&
                   (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))) {
                  local_550 = lVar12;
                  if ((((uVar26 == 0) || (((int)uVar20 < 0 || (DAT_14c9647dc <= (int)uVar20)))) ||
                      (plVar9 = (longlong *)
                                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                *(longlong *)
                                 (DAT_14c9647c8 + (ulonglong)((uint)(uVar28 >> 0xd) & 0x3fff8))),
                      plVar9 == (longlong *)0x0)) ||
                     ((((int)plVar9[2] != iVar25 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
                      (*plVar9 == 0)))) {
LAB_140ad944c:
                    if (((int)uVar11 < DAT_14c9647dc) &&
                       (((plVar9 = (longlong *)
                                   ((ulonglong)(uVar18 * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + uVar27 * 8)),
                         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar8)) &&
                        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
                      lVar12 = *plVar9;
                    }
                    else {
                      lVar12 = 0;
                    }
                    plVar9 = (longlong *)
                             (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x20))(lVar12 + 0x28);
                    lVar12 = local_550;
                    if (plVar9 == (longlong *)0x0) goto LAB_140ad9329;
                  }
                  else {
                    lVar12 = *plVar9;
                    if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
                      lVar12 = 0;
                    }
                    lVar13 = *(longlong *)(lVar12 + 0x658);
                    if (lVar13 == 0) {
                      lVar13 = *(longlong *)(lVar12 + 0x660);
                      if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) goto LAB_140adaed8;
                      if (lVar13 != 0) goto LAB_140ad88c9;
                      goto LAB_140ad944c;
                    }
                    if (DAT_14c950c29 == '\x01') {
LAB_140adaed8:
                      FUN_1456cec3c(lVar13);
                    }
LAB_140ad88c9:
                    if (DAT_14cb06da8 == 0) {
                      local_178 = FUN_1449e2820;
                      local_560 = FUN_14081d0ea;
                      local_568 = &LAB_1464003b0;
                      local_570 = &local_178;
                      local_578 = &LAB_147d17bdf;
                      local_580 = &LAB_1417edf22;
                      local_588 = L"Engine";
                      local_590 = 0;
                      local_598 = 0x10000000;
                      local_5a0 = 8;
                      local_5a8 = (double *)CONCAT44(local_5a8._4_4_,0x588);
                      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                    }
                    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) <
                         *(int *)(DAT_14cb06da8 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
                    goto LAB_140ad944c;
                    iVar7 = *(int *)(*local_528 + 4 + local_550 * 8);
                    if ((iVar7 == 0) ||
                       (uVar2 = *(uint *)(*local_528 + local_550 * 8), (int)uVar2 < 0)) {
LAB_140ad9422:
                      lVar12 = 0;
                    }
                    else {
                      lVar12 = 0;
                      if ((int)uVar2 < DAT_14c9647dc) {
                        plVar9 = (longlong *)
                                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                        if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar7)) ||
                           ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_140ad9422;
                        lVar12 = *plVar9;
                      }
                    }
                    plVar9 = *(longlong **)(lVar12 + 0x658);
                    if (plVar9 == (longlong *)0x0) {
                      plVar9 = *(longlong **)(lVar12 + 0x660);
                      if ((DAT_14c950c29 == '\x01') && (plVar9 != (longlong *)0x0))
                      goto LAB_140adaef2;
                      lVar12 = local_550;
                      if (plVar9 == (longlong *)0x0) goto LAB_140ad9329;
                    }
                    else if (DAT_14c950c29 != '\0') {
LAB_140adaef2:
                      FUN_1456cec3c(plVar9);
                      if (DAT_14cb06da8 == 0) {
                        local_178 = FUN_1449e2820;
                        local_560 = FUN_14081d0ea;
                        local_568 = &LAB_1464003b0;
                        local_570 = &local_178;
                        local_578 = &LAB_147d17bdf;
                        local_580 = &LAB_1417edf22;
                        local_588 = L"Engine";
                        local_590 = 0;
                        local_598 = 0x10000000;
                        local_5a0 = 8;
                        local_5a8 = (double *)CONCAT44(local_5a8._4_4_,0x588);
                        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e
                                     );
                      }
                      uVar6 = 0;
                      uVar71 = 0x3ff00000;
                      uVar72 = 0;
                      uVar73 = 0x3ff00000;
                    }
                    lVar12 = local_550;
                    if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar9[2] + 0x30) +
                         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
                    goto LAB_140ad9329;
                  }
                  lVar12 = (**(code **)(*plVar9 + 0x310))(plVar9);
                  local_388 = 0;
                  uStack_380 = 0;
                  local_178 = *(code **)(lVar12 + 0x30);
                  dStack_170 = (double)CONCAT44(dStack_170._4_4_,*(undefined4 *)(lVar12 + 0x38));
                  FUN_144a39936(lVar12,&local_178,&local_388);
                  if (((int)uVar11 < DAT_14c9647dc) &&
                     ((plVar9 = (longlong *)
                                ((ulonglong)(uVar18 * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + uVar27 * 8)),
                      plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar8)))) {
                    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
                      lVar13 = *plVar9;
                    }
                    else {
                      lVar13 = 0;
                    }
                  }
                  else {
                    lVar13 = 0;
                  }
                  if ((longlong)*(int *)(lVar13 + 0x48) != 0) {
                    plVar9 = *(longlong **)(lVar13 + 0x40);
                    local_4d0 = plVar9 + *(int *)(lVar13 + 0x48);
                    local_4e0 = uVar28 & 0xffff;
                    local_4d8 = (ulonglong)((uint)(uVar28 >> 0x10) & 0x7fff);
                    do {
                      lVar15 = local_388;
                      lVar13 = *plVar9;
                      lVar24 = *(longlong *)(lVar13 + 0x28);
                      if ((lVar24 != 0) && (*(int *)(lVar12 + 0x98) != *(int *)(lVar12 + 0xc4))) {
                        uVar11 = (uint)((ulonglong)lVar24 >> 0x10);
                        uVar18 = (uint)lVar24 & 0xffff;
                        lVar14 = *(longlong *)(lVar12 + 0xd0);
                        if (*(longlong *)(lVar12 + 0xd0) == 0) {
                          lVar14 = lVar12 + 200;
                        }
                        iVar8 = *(int *)(lVar14 + (ulonglong)
                                                  (*(int *)(lVar12 + 0xd8) - 1U &
                                                  (int)((ulonglong)lVar24 >> 0x20) +
                                                  ((uint)lVar24 << 0x10 | uVar18) +
                                                  (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar18 >> 4)
                                                  ) * 4);
                        if (iVar8 != -1) {
LAB_140ad8af6:
                          plVar19 = (longlong *)
                                    (*(longlong *)(lVar12 + 0x90) + (longlong)iVar8 * 0x14);
                          if (*plVar19 != lVar24) goto code_r0x000140ad8b06;
                          if ((plVar19 != (longlong *)0x0) && (plVar19 + 1 != (longlong *)0x0)) {
                            iVar8 = (int)plVar19[1];
                            lVar24 = (longlong)iVar8;
                            if ((lVar24 != -1) && (iVar8 < (int)uStack_380)) {
                              if ((char)local_554 == '\0') {
                                lVar24 = lVar24 * 0x60;
                                local_548 = (double *)(local_388 + lVar24);
                                puVar16 = local_2f8;
                                FUN_14181e422(puVar16,local_378,local_4a8);
                                auVar39 = _DAT_149934d80;
                                local_3b8 = ZEXT816(0);
                                local_3c8 = ZEXT816(0);
                                dVar29 = local_2b8._0_8_;
                                dVar54 = local_2b8._8_8_;
                                auVar30._8_8_ = dStack_2a0;
                                auVar30._0_8_ = local_2a8;
                                local_538 = *(undefined1 (*) [16])(lVar15 + 0x40 + lVar24);
                                auVar52 = *(undefined1 (*) [16])(lVar15 + 0x50 + lVar24);
                                auVar55 = minpd(local_538,local_2b8);
                                auVar30 = minpd(auVar52,auVar30);
                                auVar40._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                                auVar40._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                                iVar8 = movmskpd((int)local_2f8,auVar40);
                                auVar55._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
                                auVar55._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
                                uVar11 = movmskpd((int)puVar16,auVar55);
                                if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
                                  dVar62 = *local_548;
                                  dVar64 = local_548[1];
                                  dVar65 = local_548[2];
                                  dVar43 = local_548[3];
                                  dVar42 = (double)DAT_149931170;
                                  dVar59 = DAT_149931170._8_8_;
                                  local_3e8 = dVar64 * (double)local_2e8._0_8_ * -1.0 +
                                              dVar65 * (double)local_2f8._8_8_ +
                                              dVar43 * (double)local_2f8._0_8_ * dVar42 +
                                              dVar62 * (double)local_2e8._8_8_;
                                  dStack_3e0 = dVar62 * (double)local_2e8._0_8_ * 1.0 +
                                               dVar43 * (double)local_2f8._8_8_ +
                                               dVar65 * (double)local_2f8._0_8_ * dVar59 +
                                               dVar64 * (double)local_2e8._8_8_;
                                  dVar63 = local_548[4] * dVar29;
                                  dVar58 = local_548[5] * dVar54;
                                  dVar49 = local_548[6] * local_2a8;
                                  dVar60 = local_548[7] * dStack_2a0;
                                  local_3d8._8_8_ =
                                       dVar65 * (double)local_2e8._0_8_ * dVar59 +
                                       (((double)local_2f8._0_8_ * dVar62 * dVar59 +
                                        dVar43 * (double)local_2e8._8_8_) -
                                       dVar64 * (double)local_2f8._8_8_);
                                  local_3d8._0_8_ =
                                       dVar43 * (double)local_2e8._0_8_ * dVar42 +
                                       (((double)local_2f8._0_8_ * dVar64 * dVar42 +
                                        dVar65 * (double)local_2e8._8_8_) -
                                       dVar62 * (double)local_2f8._8_8_);
                                  dVar42 = dVar58 * (double)local_2f8._0_8_ -
                                           (double)local_2f8._8_8_ * dVar63;
                                  dVar59 = dVar49 * (double)local_2f8._8_8_ -
                                           (double)local_2e8._0_8_ * dVar58;
                                  dVar62 = dVar63 * (double)local_2e8._0_8_ -
                                           (double)local_2f8._0_8_ * dVar49;
                                  dVar64 = dVar60 * (double)local_2e8._8_8_ -
                                           (double)local_2e8._8_8_ * dVar60;
                                  dVar59 = dVar59 + dVar59;
                                  dVar62 = dVar62 + dVar62;
                                  dVar42 = dVar42 + dVar42;
                                  dVar64 = dVar64 + dVar64;
                                  local_3b8._0_8_ =
                                       (dVar62 * (double)local_2f8._0_8_ -
                                       (double)local_2f8._8_8_ * dVar59) +
                                       (double)local_2e8._8_8_ * dVar42 + dVar49 +
                                       (double)local_2c8._0_8_;
                                  local_3b8._8_8_ =
                                       (dVar64 * (double)local_2e8._8_8_ -
                                       dVar64 * (double)local_2e8._8_8_) +
                                       (double)local_2e8._8_8_ * dVar64 + dVar60 +
                                       (double)local_2c8._8_8_;
                                  local_3c8._8_8_ =
                                       (dVar59 * (double)local_2e8._0_8_ -
                                       dVar42 * (double)local_2f8._0_8_) +
                                       (double)local_2e8._8_8_ * dVar62 + dVar58 +
                                       (double)local_2d8._8_8_;
                                  local_3c8._0_8_ =
                                       (dVar42 * (double)local_2f8._8_8_ -
                                       (double)local_2e8._0_8_ * dVar62) +
                                       (double)local_2e8._8_8_ * dVar59 + dVar63 +
                                       (double)local_2d8._0_8_;
                                  local_3a8._0_8_ = (double)local_538._0_8_ * dVar29;
                                  local_3a8._8_8_ = (double)local_538._8_8_ * dVar54;
                                  dVar29 = auVar52._8_8_ * dStack_2a0;
                                  local_398._8_4_ = SUB84(dVar29,0);
                                  local_398._0_8_ = auVar52._0_8_ * local_2a8;
                                  local_398._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
                                  uVar6 = 0;
                                  uVar71 = 0x3ff00000;
                                  uVar72 = 0;
                                  uVar73 = 0x3ff00000;
                                  pdVar17 = (double *)0x0;
                                }
                                else {
                                  dVar42 = auVar52._0_8_ * local_2a8;
                                  dVar59 = auVar52._8_8_ * dStack_2a0;
                                  dVar62 = (double)local_2f8._8_8_ + (double)local_2f8._8_8_;
                                  dVar64 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
                                  dVar43 = (double)local_2f8._0_8_ *
                                           ((double)local_2f8._0_8_ + (double)local_2f8._0_8_);
                                  uVar6 = (undefined4)DAT_149934d80;
                                  uVar71 = DAT_149934d80._4_4_;
                                  uVar72 = DAT_149934d80._8_4_;
                                  uVar73 = DAT_149934d80._12_4_;
                                  local_1a8 = (1.0 - (dVar43 + (double)local_2f8._8_8_ * dVar62)) *
                                              local_2a8;
                                  dVar65 = ((double)local_2f8._0_8_ + (double)local_2f8._0_8_) *
                                           (double)local_2e8._8_8_;
                                  local_1b8 = (dVar62 * (double)local_2e8._8_8_ +
                                              (double)local_2f8._0_8_ * dVar64) * local_2a8;
                                  dVar68 = (double)local_538._0_8_ * dVar29;
                                  dVar70 = (double)local_538._8_8_ * dVar54;
                                  dStack_1b0 = (dVar64 * (double)local_2f8._8_8_ - dVar65) *
                                               local_2a8;
                                  local_1f8 = ((double)DAT_149934d80 -
                                              ((double)local_2e8._0_8_ * dVar64 +
                                              (double)local_2f8._8_8_ * dVar62)) * dVar29;
                                  dStack_1f0 = (dVar62 * (double)local_2f8._0_8_ +
                                               dVar64 * (double)local_2e8._8_8_) * dVar29;
                                  local_1c8 = (dVar64 * (double)local_2f8._8_8_ + dVar65) * dVar54;
                                  local_1e8 = ((double)local_2f8._0_8_ * dVar64 -
                                              dVar62 * (double)local_2e8._8_8_) * dVar29;
                                  uStack_1e0 = 0;
                                  local_1d8._8_8_ =
                                       (DAT_149934d80._8_8_ -
                                       ((double)local_2e8._0_8_ * dVar64 + dVar43)) * dVar54;
                                  local_1d8._0_8_ =
                                       (dVar62 * (double)local_2f8._0_8_ -
                                       dVar64 * (double)local_2e8._8_8_) * dVar54;
                                  uStack_1c0 = 0;
                                  uStack_1a0 = 0;
                                  local_198 = (double)local_2d8._0_8_;
                                  dStack_190 = (double)local_2d8._8_8_;
                                  local_188 = (double)local_2c8._0_8_;
                                  uStack_180 = 0x3ff0000000000000;
                                  dVar54 = *local_548;
                                  dVar62 = local_548[1];
                                  dVar64 = local_548[2];
                                  dVar65 = local_548[8];
                                  dVar43 = local_548[9];
                                  dVar49 = local_548[10];
                                  dVar66 = dVar62 + dVar62;
                                  dVar60 = dVar64 + dVar64;
                                  dVar69 = dVar54 * (dVar54 + dVar54);
                                  local_278 = ((double)DAT_149934d80 -
                                              (dVar64 * dVar60 + dVar62 * dVar66)) * dVar65;
                                  local_228 = (1.0 - (dVar69 + dVar62 * dVar66)) * dVar49;
                                  dVar29 = local_548[3];
                                  dVar63 = dVar60 * dVar29;
                                  dVar58 = (dVar54 + dVar54) * local_548[3];
                                  dVar29 = dVar66 * dVar29;
                                  dStack_270 = (dVar66 * dVar54 + dVar63) * dVar65;
                                  local_268._8_8_ = 0;
                                  local_268._0_8_ = (*local_548 * dVar60 - dVar29) * dVar65;
                                  local_258._8_8_ =
                                       (DAT_149934d80._8_8_ - (dVar64 * dVar60 + dVar69)) * dVar43;
                                  local_258._0_8_ = (dVar66 * dVar54 - dVar63) * dVar43;
                                  local_248._8_8_ = 0;
                                  local_248._0_8_ = (dVar60 * dVar62 + dVar58) * dVar43;
                                  local_238._8_8_ = (dVar60 * dVar62 - dVar58) * dVar49;
                                  local_238._0_8_ = (dVar29 + *local_548 * dVar60) * dVar49;
                                  uStack_220 = 0;
                                  local_218 = local_548[4];
                                  dStack_210 = local_548[5];
                                  local_208._8_8_ = 0x3ff0000000000000;
                                  local_208._0_8_ = local_548[6];
                                  FUN_1447fea8d(&local_178);
                                  FUN_144a1c686(&local_178,0x3e45798ee0000000);
                                  auVar52._8_8_ = -(ulonglong)(0.0 <= dVar70);
                                  auVar52._0_8_ = -(ulonglong)(0.0 <= dVar68);
                                  auVar52 = blendvpd(_DAT_149936790,auVar39,auVar52);
                                  uVar28 = -(ulonglong)(0.0 <= dVar42);
                                  dVar29 = (double)(~uVar28 & 0xbff0000000000000 |
                                                   uVar28 & 0x3ff0000000000000);
                                  dVar54 = auVar52._0_8_;
                                  local_168 = local_168 * dVar54;
                                  dStack_170 = dStack_170 * dVar54;
                                  local_178 = (code *)((double)local_178 * dVar54);
                                  dVar54 = auVar52._8_8_;
                                  local_148 = local_148 * dVar54;
                                  dStack_150 = dStack_150 * dVar54;
                                  local_158 = dVar54 * local_158;
                                  local_128 = local_128 * dVar29;
                                  dStack_130 = dStack_130 * dVar29;
                                  local_138 = dVar29 * local_138;
                                  pdVar17 = local_448;
                                  FUN_14481fd10(pdVar17,&local_178);
                                  dVar29 = local_448[2] * local_448[2] + local_448[0] * local_448[0]
                                  ;
                                  dVar54 = local_448[3] * local_448[3] + local_448[1] * local_448[1]
                                  ;
                                  auVar44._0_8_ = dVar29 + dVar54;
                                  auVar44._8_8_ = dVar29 + dVar54;
                                  auVar31._8_8_ =
                                       -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
                                  auVar31._0_8_ =
                                       -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
                                  auVar52 = sqrtpd(auVar44,auVar44);
                                  auVar52 = divpd(auVar39,auVar52);
                                  auVar39._0_8_ = auVar52._0_8_ * local_448[2];
                                  auVar39._8_8_ = auVar52._8_8_ * local_448[3];
                                  local_3e8 = (double)((ulonglong)(local_448[0] * auVar52._0_8_) &
                                                      -(ulonglong)
                                                       (9.99999993922529e-09 <= auVar44._0_8_));
                                  dStack_3e0 = (double)((ulonglong)(local_448[1] * auVar52._8_8_) &
                                                       -(ulonglong)
                                                        (9.99999993922529e-09 <= auVar44._8_8_));
                                  local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,
                                                       auVar31);
                                  local_3a8._8_8_ = dVar70;
                                  local_3a8._0_8_ = dVar68;
                                  local_398._8_4_ = SUB84(dVar59,0);
                                  local_398._0_8_ = dVar42;
                                  local_398._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
                                  local_3c8._8_8_ = dStack_110;
                                  local_3c8._0_8_ = local_118;
                                  local_3b8._8_8_ = 0;
                                  local_3b8._0_8_ = local_108;
                                }
                              }
                              else {
                                if ((uVar26 == 0) || ((int)uVar20 < 0)) {
LAB_140ad9301:
                                  lVar15 = 0;
                                }
                                else {
                                  lVar15 = 0;
                                  if ((int)uVar20 < DAT_14c9647dc) {
                                    plVar19 = (longlong *)
                                              ((ulonglong)(uint)((int)local_4e0 * 0x18) +
                                              *(longlong *)(DAT_14c9647c8 + local_4d8 * 8));
                                    if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != iVar25)
                                        ) || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0))
                                    goto LAB_140ad9301;
                                    lVar15 = *plVar19;
                                  }
                                }
                                if ((*(byte *)(lVar15 + 0x9c) & 1) == 0) {
                                  pdVar17 = (double *)&DAT_14c846480;
                                  pdVar22 = local_448;
                                  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                                    *pdVar22 = *pdVar17;
                                    pdVar17 = pdVar17 + 1;
                                    pdVar22 = pdVar22 + 1;
                                  }
                                }
                                else {
                                  FUN_140084aae(lVar15,local_448,lVar24,lVar15 + 0x240);
                                }
                                dVar42 = local_448[1] + local_448[1];
                                dVar29 = local_448[2] + local_448[2];
                                dVar54 = local_448[0] * (local_448[0] + local_448[0]);
                                local_178 = (code *)(((double)CONCAT44(uVar71,uVar6) -
                                                     (local_448[2] * dVar29 + local_448[1] * dVar42)
                                                     ) * local_408);
                                dStack_150 = ((double)CONCAT44(uVar73,uVar72) -
                                             (local_448[2] * dVar29 + dVar54)) * dStack_400;
                                local_128 = (1.0 - (dVar54 + local_448[1] * dVar42)) * local_3f8;
                                dVar54 = (local_448[0] + local_448[0]) * local_448[3];
                                dStack_170 = (dVar42 * local_448[0] + dVar29 * local_448[3]) *
                                             local_408;
                                local_148 = (dVar29 * local_448[1] + dVar54) * dStack_400;
                                local_138 = (dVar42 * local_448[3] + local_448[0] * dVar29) *
                                            local_3f8;
                                local_168 = (local_448[0] * dVar29 - dVar42 * local_448[3]) *
                                            local_408;
                                local_158 = (dVar42 * local_448[0] - dVar29 * local_448[3]) *
                                            dStack_400;
                                dStack_130 = (dVar29 * local_448[1] - dVar54) * local_3f8;
                                dStack_160 = 0.0;
                                uStack_140 = 0;
                                uStack_120 = 0;
                                local_118 = local_428;
                                dStack_110 = dStack_420;
                                local_108 = local_418;
                                uStack_100 = 0x3ff0000000000000;
                                dStack_1b0 = local_458._0_8_;
                                dVar54 = local_4a8[1] + local_4a8[1];
                                dVar42 = local_4a8[2] + local_4a8[2];
                                dVar29 = local_4a8[0] * (local_4a8[0] + local_4a8[0]);
                                local_1f8 = ((double)CONCAT44(uVar71,uVar6) -
                                            (local_4a8[2] * dVar42 + local_4a8[1] * dVar54)) *
                                            local_468;
                                local_1d8._8_8_ =
                                     ((double)CONCAT44(uVar73,uVar72) -
                                     (local_4a8[2] * dVar42 + dVar29)) * dStack_460;
                                local_1a8 = (1.0 - (dVar29 + local_4a8[1] * dVar54)) * dStack_1b0;
                                dVar29 = (local_4a8[0] + local_4a8[0]) * local_4a8[3];
                                dStack_1f0 = (dVar54 * local_4a8[0] + dVar42 * local_4a8[3]) *
                                             local_468;
                                local_1c8 = (dVar42 * local_4a8[1] + dVar29) * dStack_460;
                                local_1b8 = (dVar54 * local_4a8[3] + local_4a8[0] * dVar42) *
                                            dStack_1b0;
                                local_1e8 = (local_4a8[0] * dVar42 - dVar54 * local_4a8[3]) *
                                            local_468;
                                local_1d8._0_8_ =
                                     (dVar54 * local_4a8[0] - dVar42 * local_4a8[3]) * dStack_460;
                                dStack_1b0 = (dVar42 * local_4a8[1] - dVar29) * dStack_1b0;
                                uStack_1e0 = 0;
                                uStack_1c0 = 0;
                                uStack_1a0 = 0;
                                local_198 = local_488;
                                dStack_190 = dStack_480;
                                local_188 = local_478;
                                uStack_180 = 0x3ff0000000000000;
                                if (((((9.99999993922529e-09 < ABS(local_1f8)) ||
                                      (9.99999993922529e-09 < ABS(dStack_1f0))) ||
                                     ((9.99999993922529e-09 < ABS(local_1e8) ||
                                      ((9.99999993922529e-09 < ABS((double)local_1d8._0_8_) ||
                                       (9.99999993922529e-09 < ABS((double)local_1d8._8_8_))))))) ||
                                    (9.99999993922529e-09 < ABS(local_1c8))) ||
                                   (((9.99999993922529e-09 < ABS(local_1b8) ||
                                     (9.99999993922529e-09 < ABS(dStack_1b0))) ||
                                    (9.99999993922529e-09 < ABS(local_1a8))))) {
                                  FUN_14007522e(local_2f8,&local_1f8);
                                }
                                else {
                                  puVar21 = &DAT_14c846400;
                                  puVar23 = (undefined8 *)local_2f8;
                                  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                                    *puVar23 = *puVar21;
                                    puVar21 = puVar21 + 1;
                                    puVar23 = puVar23 + 1;
                                  }
                                }
                                FUN_1447fea8d(&local_278,&local_178,local_2f8);
                                pdVar17 = &local_3e8;
                                FUN_1448ac920(pdVar17,&local_278);
                              }
                              if ((longlong)*(int *)(lVar13 + 0x50) != 0) {
                                lVar24 = *(longlong *)(lVar13 + 0x48) + 0x48;
                                local_538._0_8_ = (longlong)*(int *)(lVar13 + 0x50) * 0x70;
                                do {
                                  if ((*(byte *)(lVar24 + -0x2f) & 0xfe) == 2) {
                                    lVar15 = lVar24;
                                    uVar6 = FUN_144a7484c(lVar24,&local_178);
                                    auVar30 = local_3a8;
                                    auVar52 = _DAT_149934d80;
                                    dVar29 = local_3a8._0_8_;
                                    dVar42 = local_3a8._8_8_;
                                    dVar54 = local_398._0_8_;
                                    dVar59 = local_398._8_8_;
                                    auVar39 = minpd(_DAT_149934d80,local_3a8);
                                    auVar55 = minpd(ZEXT816(0x3ff0000000000000),local_398);
                                    auVar57._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                                    auVar57._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                                    iVar8 = movmskpd(uVar6,auVar57);
                                    auVar61._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                                    auVar61._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                                    uVar11 = movmskpd((int)lVar15,auVar61);
                                    if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
                                      dVar62 = (double)DAT_149931170;
                                      dVar64 = DAT_149931170._8_8_;
                                      dVar65 = (double)local_178 * (double)local_3d8._0_8_ * 1.0 +
                                               dStack_160 * dStack_3e0 +
                                               local_168 * local_3e8 * dVar64 +
                                               dStack_170 * (double)local_3d8._8_8_;
                                      local_2f8._8_4_ = SUB84(dVar65,0);
                                      local_2f8._0_8_ =
                                           dStack_170 * (double)local_3d8._0_8_ * -1.0 +
                                           local_168 * dStack_3e0 +
                                           dStack_160 * local_3e8 * dVar62 +
                                           (double)local_178 * (double)local_3d8._8_8_;
                                      local_2f8._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
                                      local_2e8._8_8_ =
                                           local_168 * (double)local_3d8._0_8_ * dVar64 +
                                           ((local_3e8 * (double)local_178 * dVar64 +
                                            dStack_160 * (double)local_3d8._8_8_) -
                                           dStack_170 * dStack_3e0);
                                      local_2e8._0_8_ =
                                           dStack_160 * (double)local_3d8._0_8_ * dVar62 +
                                           ((local_3e8 * dStack_170 * dVar62 +
                                            local_168 * (double)local_3d8._8_8_) -
                                           (double)local_178 * dStack_3e0);
                                      dVar29 = *(double *)(lVar24 + -0x18) * dVar29;
                                      dVar42 = *(double *)(lVar24 + -0x10) * dVar42;
                                      dVar62 = *(double *)(lVar24 + -8) * dVar54;
                                      dVar64 = dVar59 * 0.0;
                                      dVar65 = dVar42 * local_3e8 - dVar29 * dStack_3e0;
                                      dVar43 = dVar62 * dStack_3e0 -
                                               dVar42 * (double)local_3d8._0_8_;
                                      dVar49 = dVar29 * (double)local_3d8._0_8_ - dVar62 * local_3e8
                                      ;
                                      dVar60 = dVar64 * (double)local_3d8._8_8_ -
                                               dVar64 * (double)local_3d8._8_8_;
                                      dVar43 = dVar43 + dVar43;
                                      dVar49 = dVar49 + dVar49;
                                      dVar65 = dVar65 + dVar65;
                                      dVar60 = dVar60 + dVar60;
                                      local_2d8._0_8_ =
                                           (dVar65 * dStack_3e0 - (double)local_3d8._0_8_ * dVar49)
                                           + (double)local_3d8._8_8_ * dVar43 + dVar29 +
                                           (double)local_3c8._0_8_;
                                      local_2d8._8_8_ =
                                           (dVar43 * (double)local_3d8._0_8_ - dVar65 * local_3e8) +
                                           (double)local_3d8._8_8_ * dVar49 + dVar42 +
                                           (double)local_3c8._8_8_;
                                      local_2c8._0_8_ =
                                           (dVar49 * local_3e8 - dStack_3e0 * dVar43) +
                                           (double)local_3d8._8_8_ * dVar65 + dVar62 +
                                           (double)local_3b8._0_8_;
                                      local_2c8._8_8_ =
                                           (dVar60 * (double)local_3d8._8_8_ -
                                           dVar60 * (double)local_3d8._8_8_) +
                                           (double)local_3d8._8_8_ * dVar60 + dVar64 +
                                           (double)local_3b8._8_8_;
                                    }
                                    else {
                                      dVar65 = dStack_3e0 + dStack_3e0;
                                      dVar43 = (double)local_3d8._0_8_ + (double)local_3d8._0_8_;
                                      dVar64 = local_3e8 * (local_3e8 + local_3e8);
                                      local_1f8 = ((double)DAT_149934d80 -
                                                  ((double)local_3d8._0_8_ * dVar43 +
                                                  dStack_3e0 * dVar65)) * dVar29;
                                      dVar62 = (DAT_149934d80._8_8_ -
                                               ((double)local_3d8._0_8_ * dVar43 + dVar64)) * dVar42
                                      ;
                                      dVar49 = (local_3e8 + local_3e8) * (double)local_3d8._8_8_;
                                      dStack_1b0 = (dVar43 * dStack_3e0 - dVar49) * dVar54;
                                      local_1b8 = (dVar65 * (double)local_3d8._8_8_ +
                                                  local_3e8 * dVar43) * dVar54;
                                      dStack_1f0 = (dVar65 * local_3e8 +
                                                   dVar43 * (double)local_3d8._8_8_) * dVar29;
                                      local_1c8 = (dVar43 * dStack_3e0 + dVar49) * dVar42;
                                      local_1e8 = (local_3e8 * dVar43 -
                                                  dVar65 * (double)local_3d8._8_8_) * dVar29;
                                      uStack_1e0 = 0;
                                      local_1d8._8_4_ = SUB84(dVar62,0);
                                      local_1d8._0_8_ =
                                           (dVar65 * local_3e8 - dVar43 * (double)local_3d8._8_8_) *
                                           dVar42;
                                      local_1d8._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                                      local_1a8 = (1.0 - (dVar64 + dStack_3e0 * dVar65)) * dVar54;
                                      uStack_1c0 = 0;
                                      uStack_1a0 = 0;
                                      local_198 = (double)local_3c8._0_8_;
                                      dStack_190 = (double)local_3c8._8_8_;
                                      local_188 = (double)local_3b8._0_8_;
                                      uStack_180 = 0x3ff0000000000000;
                                      dVar64 = dStack_170 + dStack_170;
                                      dVar65 = local_168 + local_168;
                                      dVar62 = (double)local_178 *
                                               ((double)local_178 + (double)local_178);
                                      local_278 = (double)DAT_149934d80 -
                                                  (local_168 * dVar65 + dStack_170 * dVar64);
                                      local_258._8_8_ =
                                           DAT_149934d80._8_8_ - (local_168 * dVar65 + dVar62);
                                      local_228 = 1.0 - (dVar62 + dStack_170 * dVar64);
                                      dVar62 = ((double)local_178 + (double)local_178) * dStack_160;
                                      dStack_270 = dVar64 * (double)local_178 + dVar65 * dStack_160;
                                      local_258._0_8_ =
                                           dVar64 * (double)local_178 - dVar65 * dStack_160;
                                      local_268._8_8_ = 0;
                                      local_268._0_8_ =
                                           (double)local_178 * dVar65 - dVar64 * dStack_160;
                                      local_248._8_8_ = 0;
                                      local_248._0_8_ = dVar65 * dStack_170 + dVar62;
                                      local_238._8_8_ = dVar65 * dStack_170 - dVar62;
                                      local_238._0_8_ =
                                           dVar64 * dStack_160 + (double)local_178 * dVar65;
                                      uStack_220 = 0;
                                      local_208._8_8_ = 0x3ff0000000000000;
                                      local_208._0_8_ = *(double *)(lVar24 + -8);
                                      local_218 = *(double *)(lVar24 + -0x18);
                                      dStack_210 = *(double *)(lVar24 + -0x10);
                                      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                                      FUN_144a1c686(&local_178,0x3e45798ee0000000);
                                      auVar32._8_8_ = -(ulonglong)(0.0 <= dVar42);
                                      auVar32._0_8_ = -(ulonglong)(0.0 <= dVar29);
                                      auVar39 = blendvpd(_DAT_149936790,auVar52,auVar32);
                                      uVar28 = -(ulonglong)(0.0 <= dVar54 * 1.0);
                                      dVar29 = (double)(~uVar28 & 0xbff0000000000000 |
                                                       uVar28 & 0x3ff0000000000000);
                                      dVar42 = auVar39._0_8_;
                                      local_168 = local_168 * dVar42;
                                      dStack_170 = dStack_170 * dVar42;
                                      local_178 = (code *)((double)local_178 * dVar42);
                                      dVar42 = auVar39._8_8_;
                                      local_148 = local_148 * dVar42;
                                      dStack_150 = dStack_150 * dVar42;
                                      local_158 = dVar42 * local_158;
                                      local_128 = local_128 * dVar29;
                                      dStack_130 = dStack_130 * dVar29;
                                      local_138 = dVar29 * local_138;
                                      FUN_14481fd10(local_448,&local_178);
                                      dVar29 = local_448[2] * local_448[2] +
                                               local_448[0] * local_448[0];
                                      dVar42 = local_448[3] * local_448[3] +
                                               local_448[1] * local_448[1];
                                      auVar45._0_8_ = dVar29 + dVar42;
                                      auVar45._8_8_ = dVar29 + dVar42;
                                      auVar33._8_8_ =
                                           -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
                                      auVar33._0_8_ =
                                           -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
                                      auVar39 = sqrtpd(auVar45,auVar45);
                                      auVar52 = divpd(auVar52,auVar39);
                                      auVar67._0_8_ = auVar52._0_8_ * local_448[2];
                                      auVar67._8_8_ = auVar52._8_8_ * local_448[3];
                                      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,
                                                           auVar67,auVar33);
                                      local_2f8._8_8_ =
                                           (ulonglong)(local_448[1] * auVar52._8_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
                                      local_2f8._0_8_ =
                                           (ulonglong)(local_448[0] * auVar52._0_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
                                      local_2d8._8_8_ = dStack_110;
                                      local_2d8._0_8_ = local_118;
                                      local_2c8._8_8_ = 0;
                                      local_2c8._0_8_ = local_108;
                                    }
                                    dStack_2a0 = dVar59 * 0.0;
                                    local_2a8 = dVar54 * 1.0;
                                    local_2b8 = auVar30;
                                    pdVar17 = (double *)local_2f8;
                                    FUN_140adafdf(pdVar17,&local_308,local_518,local_520);
                                  }
                                  lVar24 = lVar24 + 0x70;
                                  lVar15 = local_538._0_8_ + -0x70;
                                  local_538._0_8_ = lVar15;
                                  uVar6 = 0;
                                  uVar71 = 0x3ff00000;
                                  uVar72 = 0;
                                  uVar73 = 0x3ff00000;
                                } while (lVar15 != 0);
                              }
                              if ((longlong)*(int *)(lVar13 + 0x40) != 0) {
                                pdVar17 = *(double **)(lVar13 + 0x38);
                                local_538._0_8_ = pdVar17;
                                local_548 = (double *)((longlong)*(int *)(lVar13 + 0x40) * 0x50);
                                pdVar22 = (double *)0x0;
                                do {
                                  auVar52 = _DAT_149934d80;
                                  if ((*(byte *)(local_538._0_8_ + 0x19 + (longlong)pdVar22) & 0xfe)
                                      == 2) {
                                    pdVar1 = (double *)(local_538._0_8_ + 0x30 + (longlong)pdVar22);
                                    dVar59 = *pdVar1;
                                    dVar62 = pdVar1[1];
                                    dVar29 = *(double *)(local_538._0_8_ + 0x40 + (longlong)pdVar22)
                                    ;
                                    dVar54 = local_398._0_8_;
                                    dVar42 = local_398._8_8_;
                                    local_4f8._0_16_ = local_3a8;
                                    auVar30 = local_4f8._0_16_;
                                    auVar39 = minpd(_DAT_149934d80,local_3a8);
                                    auVar55 = minpd(ZEXT816(0x3ff0000000000000),local_398);
                                    auVar41._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                                    auVar41._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                                    iVar8 = movmskpd(local_538._0_4_,auVar41);
                                    auVar46._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                                    auVar46._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                                    uVar11 = movmskpd((int)pdVar17,auVar46);
                                    local_4f8._0_8_ = local_3a8._0_8_;
                                    uVar4 = local_4f8._0_8_;
                                    local_4f8._8_8_ = local_3a8._8_8_;
                                    uVar5 = local_4f8._8_8_;
                                    local_4f8._0_16_ = auVar30;
                                    if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
                                      local_4c8 = (double)local_3d8._8_8_ * 0.0;
                                      dStack_4c0 = (double)local_3d8._8_8_ * 1.0;
                                      dVar59 = dVar59 * (double)local_4f8._0_8_;
                                      dVar62 = dVar62 * (double)local_4f8._8_8_;
                                      dVar29 = dVar29 * dVar54;
                                      dVar64 = dVar42 * 0.0;
                                      dVar49 = dVar62 * local_3e8 - dVar59 * dStack_3e0;
                                      dVar60 = dVar29 * dStack_3e0 -
                                               dVar62 * (double)local_3d8._0_8_;
                                      dVar65 = dVar59 * (double)local_3d8._0_8_ - dVar29 * local_3e8
                                      ;
                                      dVar43 = dVar64 * (double)local_3d8._8_8_ -
                                               dVar64 * (double)local_3d8._8_8_;
                                      dVar60 = dVar60 + dVar60;
                                      dVar65 = dVar65 + dVar65;
                                      dVar49 = dVar49 + dVar49;
                                      dVar43 = dVar43 + dVar43;
                                      local_2f8._0_8_ =
                                           (double)local_3d8._0_8_ * 0.0 * -1.0 +
                                           dStack_3e0 * 0.0 +
                                           local_3e8 * 1.0 * 1.0 + (double)local_3d8._8_8_ * 0.0;
                                      local_2f8._8_8_ =
                                           (double)local_3d8._0_8_ * 0.0 * 1.0 +
                                           dStack_3e0 * 1.0 +
                                           local_3e8 * 0.0 * -1.0 + (double)local_3d8._8_8_ * 0.0;
                                      local_2e8._8_8_ =
                                           (double)local_3d8._0_8_ * 0.0 * -1.0 +
                                           ((local_3e8 * 0.0 * -1.0 + dStack_4c0) - dStack_3e0 * 0.0
                                           );
                                      local_2e8._0_8_ =
                                           (double)local_3d8._0_8_ * 1.0 * 1.0 +
                                           ((local_3e8 * 0.0 * 1.0 + local_4c8) - dStack_3e0 * 0.0);
                                      local_2d8._0_8_ =
                                           (dVar49 * dStack_3e0 - (double)local_3d8._0_8_ * dVar65)
                                           + (double)local_3d8._8_8_ * dVar60 + dVar59 +
                                           (double)local_3c8._0_8_;
                                      local_2d8._8_8_ =
                                           (dVar60 * (double)local_3d8._0_8_ - dVar49 * local_3e8) +
                                           (double)local_3d8._8_8_ * dVar65 + dVar62 +
                                           (double)local_3c8._8_8_;
                                      local_2c8._0_8_ =
                                           (dVar65 * local_3e8 - dStack_3e0 * dVar60) +
                                           (double)local_3d8._8_8_ * dVar49 + dVar29 +
                                           (double)local_3b8._0_8_;
                                      local_2c8._8_8_ =
                                           (dVar43 * (double)local_3d8._8_8_ -
                                           dVar43 * (double)local_3d8._8_8_) +
                                           (double)local_3d8._8_8_ * dVar43 + dVar64 +
                                           (double)local_3b8._8_8_;
                                    }
                                    else {
                                      dVar64 = dStack_3e0 + dStack_3e0;
                                      dVar65 = (double)local_3d8._0_8_ + (double)local_3d8._0_8_;
                                      dVar49 = local_3e8 * (local_3e8 + local_3e8);
                                      local_1f8 = ((double)DAT_149934d80 -
                                                  ((double)local_3d8._0_8_ * dVar65 +
                                                  dStack_3e0 * dVar64)) * (double)local_4f8._0_8_;
                                      local_1d8._8_8_ =
                                           (DAT_149934d80._8_8_ -
                                           ((double)local_3d8._0_8_ * dVar65 + dVar49)) *
                                           (double)local_4f8._8_8_;
                                      dVar43 = (local_3e8 + local_3e8) * (double)local_3d8._8_8_;
                                      dStack_1b0 = (dVar65 * dStack_3e0 - dVar43) * dVar54;
                                      local_1b8 = (dVar64 * (double)local_3d8._8_8_ +
                                                  local_3e8 * dVar65) * dVar54;
                                      local_1d8._0_8_ =
                                           (dVar64 * local_3e8 - dVar65 * (double)local_3d8._8_8_) *
                                           (double)local_4f8._8_8_;
                                      dStack_1f0 = (dVar64 * local_3e8 +
                                                   dVar65 * (double)local_3d8._8_8_) *
                                                   (double)local_4f8._0_8_;
                                      local_1c8 = (dVar65 * dStack_3e0 + dVar43) *
                                                  (double)local_4f8._8_8_;
                                      local_1e8 = (local_3e8 * dVar65 -
                                                  dVar64 * (double)local_3d8._8_8_) *
                                                  (double)local_4f8._0_8_;
                                      uStack_1e0 = 0;
                                      uStack_1c0 = 0;
                                      local_1a8 = (1.0 - (dVar49 + dStack_3e0 * dVar64)) * dVar54;
                                      uStack_1a0 = 0;
                                      local_198 = (double)local_3c8._0_8_;
                                      dStack_190 = (double)local_3c8._8_8_;
                                      local_188 = (double)local_3b8._0_8_;
                                      uStack_180 = 0x3ff0000000000000;
                                      local_278 = 1.0;
                                      dStack_270 = 0.0;
                                      local_268 = (undefined1  [16])0x0;
                                      local_248 = (undefined1  [16])0x0;
                                      local_238 = (undefined1  [16])0x0;
                                      local_228 = 1.0;
                                      uStack_220 = 0;
                                      local_208._8_4_ = 0;
                                      local_208._0_8_ = dVar29;
                                      local_208._12_4_ = 0x3ff00000;
                                      local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
                                      local_218 = dVar59;
                                      dStack_210 = dVar62;
                                      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                                      FUN_144a1c686(&local_178,0x3e45798ee0000000);
                                      auVar34._8_8_ = -(ulonglong)(0.0 <= (double)uVar5);
                                      auVar34._0_8_ = -(ulonglong)(0.0 <= (double)uVar4);
                                      auVar30 = blendvpd(_DAT_149936790,auVar52,auVar34);
                                      uVar28 = -(ulonglong)(0.0 <= dVar54 * 1.0);
                                      dVar29 = (double)(~uVar28 & 0xbff0000000000000 |
                                                       uVar28 & 0x3ff0000000000000);
                                      dVar59 = auVar30._0_8_;
                                      local_168 = local_168 * dVar59;
                                      dStack_170 = dStack_170 * dVar59;
                                      local_178 = (code *)((double)local_178 * dVar59);
                                      dVar59 = auVar30._8_8_;
                                      local_148 = local_148 * dVar59;
                                      dStack_150 = dStack_150 * dVar59;
                                      local_158 = dVar59 * local_158;
                                      local_128 = local_128 * dVar29;
                                      dStack_130 = dStack_130 * dVar29;
                                      local_138 = dVar29 * local_138;
                                      FUN_14481fd10(local_448,&local_178);
                                      dVar29 = local_448[2] * local_448[2] +
                                               local_448[0] * local_448[0];
                                      dVar59 = local_448[3] * local_448[3] +
                                               local_448[1] * local_448[1];
                                      auVar47._0_8_ = dVar29 + dVar59;
                                      auVar47._8_8_ = dVar29 + dVar59;
                                      auVar35._8_8_ =
                                           -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
                                      auVar35._0_8_ =
                                           -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
                                      auVar30 = sqrtpd(auVar47,auVar47);
                                      auVar52 = divpd(auVar52,auVar30);
                                      auVar51._0_8_ = auVar52._0_8_ * local_448[2];
                                      auVar51._8_8_ = auVar52._8_8_ * local_448[3];
                                      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,
                                                           auVar51,auVar35);
                                      local_2f8._8_8_ =
                                           (ulonglong)(local_448[1] * auVar52._8_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
                                      local_2f8._0_8_ =
                                           (ulonglong)(local_448[0] * auVar52._0_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
                                      local_2c8._8_8_ = 0;
                                      local_2c8._0_8_ = local_108;
                                      local_2d8._0_8_ = local_118;
                                      local_2d8._8_8_ = dStack_110;
                                    }
                                    dStack_2a0 = dVar42 * 0.0;
                                    local_2a8 = dVar54 * 1.0;
                                    local_2b8 = local_4f8._0_16_;
                                    pdVar17 = (double *)local_2f8;
                                    FUN_140adafdf(pdVar17,&local_30c,local_518,local_520);
                                  }
                                  pdVar22 = pdVar22 + 10;
                                  uVar6 = 0;
                                  uVar71 = 0x3ff00000;
                                  uVar72 = 0;
                                  uVar73 = 0x3ff00000;
                                } while (local_548 != pdVar22);
                              }
                              iVar8 = *(int *)(lVar13 + 0x60);
                              if ((longlong)iVar8 != 0) {
                                lVar13 = *(longlong *)(lVar13 + 0x58);
                                lVar24 = 0;
                                do {
                                  uVar10 = SUB84(pdVar17,0);
                                  if ((*(byte *)(lVar13 + 0x19 + lVar24) & 0xfe) == 2) {
                                    auVar52 = *(undefined1 (*) [16])(lVar13 + 0x48 + lVar24);
                                    dVar29 = *(double *)(lVar13 + 0x58 + lVar24);
                                    auVar30 = divpd(auVar52,_DAT_1499387d0);
                                    auVar38._8_8_ = 0;
                                    auVar38._0_8_ = dVar29;
                                    auVar39 = divpd(auVar38,_DAT_1499387d0);
                                    auVar30 = roundpd(auVar30,auVar30,3);
                                    auVar39 = roundpd(auVar39,auVar39,3);
                                    dVar59 = (auVar52._0_8_ - auVar30._0_8_ * (double)DAT_1499387d0)
                                             * 0.008726646259971648;
                                    dVar62 = (auVar52._8_8_ - auVar30._8_8_ * DAT_1499387d0._8_8_) *
                                             0.008726646259971648;
                                    dVar64 = (dVar29 - auVar39._0_8_ * (double)DAT_1499387d0) *
                                             0.008726646259971648;
                                    dVar65 = (0.0 - auVar39._8_8_ * DAT_1499387d0._8_8_) *
                                             0.008726646259971648;
                                    dVar29 = sin(dVar59);
                                    dVar54 = sin(dVar62);
                                    dVar42 = sin(dVar64);
                                    sin(dVar65);
                                    dVar59 = cos(dVar59);
                                    dVar62 = cos(dVar62);
                                    dVar64 = cos(dVar64);
                                    cos(dVar65);
                                    auVar30 = local_3a8;
                                    auVar52 = _DAT_149934d80;
                                    uVar6 = (undefined4)DAT_149934d80;
                                    uVar71 = DAT_149934d80._4_4_;
                                    uVar72 = DAT_149934d80._8_4_;
                                    uVar73 = DAT_149934d80._12_4_;
                                    dVar60 = -(dVar62 * dVar29 * dVar42) + dVar54 * dVar59 * dVar64;
                                    dVar63 = dVar54 * dVar29 * dVar42 + dVar62 * dVar59 * dVar64;
                                    dVar43 = dVar29 * dVar54 * dVar64 - dVar59 * dVar62 * dVar42;
                                    dVar49 = -(dVar29 * dVar62 * dVar64) - dVar59 * dVar54 * dVar42;
                                    pdVar17 = (double *)(lVar13 + 0x30 + lVar24);
                                    dVar64 = *pdVar17;
                                    dVar65 = pdVar17[1];
                                    dVar29 = *(double *)(lVar13 + 0x40 + lVar24);
                                    dVar54 = local_3a8._0_8_;
                                    dVar59 = local_3a8._8_8_;
                                    dVar42 = local_398._0_8_;
                                    dVar62 = local_398._8_8_;
                                    auVar39 = minpd(_DAT_149934d80,local_3a8);
                                    auVar55 = minpd(ZEXT816(0x3ff0000000000000),local_398);
                                    auVar50._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                                    auVar50._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                                    iVar7 = movmskpd(extraout_EAX,auVar50);
                                    auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                                    auVar56._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                                    uVar11 = movmskpd(uVar10,auVar56);
                                    if ((uVar11 & 0x3fffffff) == 0 && iVar7 == 0) {
                                      local_2f8._8_8_ =
                                           dVar43 * (double)local_3d8._0_8_ * 1.0 +
                                           dVar63 * dStack_3e0 +
                                           dVar60 * local_3e8 * -1.0 +
                                           dVar49 * (double)local_3d8._8_8_;
                                      local_2f8._0_8_ =
                                           dVar49 * (double)local_3d8._0_8_ * -1.0 +
                                           dVar60 * dStack_3e0 +
                                           dVar63 * local_3e8 * 1.0 +
                                           dVar43 * (double)local_3d8._8_8_;
                                      local_2e8._8_8_ =
                                           dVar60 * (double)local_3d8._0_8_ * -1.0 +
                                           ((local_3e8 * dVar43 * -1.0 +
                                            dVar63 * (double)local_3d8._8_8_) - dVar49 * dStack_3e0)
                                      ;
                                      local_2e8._0_8_ =
                                           dVar63 * (double)local_3d8._0_8_ * 1.0 +
                                           ((local_3e8 * dVar49 * 1.0 +
                                            dVar60 * (double)local_3d8._8_8_) - dVar43 * dStack_3e0)
                                      ;
                                      dVar64 = dVar64 * dVar54;
                                      dVar65 = dVar65 * dVar59;
                                      dVar29 = dVar29 * dVar42;
                                      dVar54 = dVar62 * 0.0;
                                      dVar59 = dVar65 * local_3e8 - dVar64 * dStack_3e0;
                                      dVar43 = dVar29 * dStack_3e0 -
                                               dVar65 * (double)local_3d8._0_8_;
                                      dVar49 = dVar64 * (double)local_3d8._0_8_ - dVar29 * local_3e8
                                      ;
                                      dVar60 = dVar54 * (double)local_3d8._8_8_ -
                                               dVar54 * (double)local_3d8._8_8_;
                                      dVar43 = dVar43 + dVar43;
                                      dVar49 = dVar49 + dVar49;
                                      dVar59 = dVar59 + dVar59;
                                      dVar60 = dVar60 + dVar60;
                                      local_2d8._0_8_ =
                                           (dVar59 * dStack_3e0 - (double)local_3d8._0_8_ * dVar49)
                                           + (double)local_3d8._8_8_ * dVar43 + dVar64 +
                                           (double)local_3c8._0_8_;
                                      local_2d8._8_8_ =
                                           (dVar43 * (double)local_3d8._0_8_ - dVar59 * local_3e8) +
                                           (double)local_3d8._8_8_ * dVar49 + dVar65 +
                                           (double)local_3c8._8_8_;
                                      local_2c8._0_8_ =
                                           (dVar49 * local_3e8 - dStack_3e0 * dVar43) +
                                           (double)local_3d8._8_8_ * dVar59 + dVar29 +
                                           (double)local_3b8._0_8_;
                                      local_2c8._8_8_ =
                                           (dVar60 * (double)local_3d8._8_8_ -
                                           dVar60 * (double)local_3d8._8_8_) +
                                           (double)local_3d8._8_8_ * dVar60 + dVar54 +
                                           (double)local_3b8._8_8_;
                                    }
                                    else {
                                      dVar58 = dStack_3e0 + dStack_3e0;
                                      dVar66 = (double)local_3d8._0_8_ + (double)local_3d8._0_8_;
                                      dVar70 = local_3e8 * (local_3e8 + local_3e8);
                                      local_1f8 = ((double)DAT_149934d80 -
                                                  ((double)local_3d8._0_8_ * dVar66 +
                                                  dStack_3e0 * dVar58)) * dVar54;
                                      dVar68 = (local_3e8 + local_3e8) * (double)local_3d8._8_8_;
                                      dStack_1b0 = (dVar66 * dStack_3e0 - dVar68) * dVar42;
                                      local_1b8 = (dVar58 * (double)local_3d8._8_8_ +
                                                  local_3e8 * dVar66) * dVar42;
                                      dStack_1f0 = (dVar58 * local_3e8 +
                                                   dVar66 * (double)local_3d8._8_8_) * dVar54;
                                      local_1c8 = (dVar66 * dStack_3e0 + dVar68) * dVar59;
                                      local_1e8 = (local_3e8 * dVar66 -
                                                  dVar58 * (double)local_3d8._8_8_) * dVar54;
                                      uStack_1e0 = 0;
                                      local_1a8 = (1.0 - (dVar70 + dStack_3e0 * dVar58)) * dVar42;
                                      local_1d8._8_8_ =
                                           (DAT_149934d80._8_8_ -
                                           ((double)local_3d8._0_8_ * dVar66 + dVar70)) * dVar59;
                                      local_1d8._0_8_ =
                                           (dVar58 * local_3e8 - dVar66 * (double)local_3d8._8_8_) *
                                           dVar59;
                                      uStack_1c0 = 0;
                                      uStack_1a0 = 0;
                                      local_198 = (double)local_3c8._0_8_;
                                      dStack_190 = (double)local_3c8._8_8_;
                                      local_188 = (double)local_3b8._0_8_;
                                      uStack_180 = 0x3ff0000000000000;
                                      dVar58 = dVar49 + dVar49;
                                      dVar68 = dVar60 + dVar60;
                                      dVar66 = dVar43 * (dVar43 + dVar43);
                                      local_278 = (double)DAT_149934d80 -
                                                  (dVar60 * dVar68 + dVar49 * dVar58);
                                      local_228 = 1.0 - (dVar66 + dVar49 * dVar58);
                                      dVar70 = (dVar43 + dVar43) * dVar63;
                                      dStack_270 = dVar58 * dVar43 + dVar68 * dVar63;
                                      local_268._8_8_ = 0;
                                      local_268._0_8_ = dVar43 * dVar68 - dVar58 * dVar63;
                                      local_258._8_8_ =
                                           DAT_149934d80._8_8_ - (dVar60 * dVar68 + dVar66);
                                      local_258._0_8_ = dVar58 * dVar43 - dVar68 * dVar63;
                                      local_248._8_8_ = 0;
                                      local_248._0_8_ = dVar68 * dVar49 + dVar70;
                                      local_238._8_8_ = dVar68 * dVar49 - dVar70;
                                      local_238._0_8_ = dVar58 * dVar63 + dVar43 * dVar68;
                                      uStack_220 = 0;
                                      local_208._8_8_ = 0x3ff0000000000000;
                                      local_208._0_8_ = dVar29;
                                      local_218 = dVar64;
                                      dStack_210 = dVar65;
                                      FUN_1447fea8d(&local_178);
                                      FUN_144a1c686(&local_178,0x3e45798ee0000000);
                                      auVar36._8_8_ = -(ulonglong)(0.0 <= dVar59);
                                      auVar36._0_8_ = -(ulonglong)(0.0 <= dVar54);
                                      auVar39 = blendvpd(_DAT_149936790,auVar52,auVar36);
                                      uVar28 = -(ulonglong)(0.0 <= dVar42 * 1.0);
                                      dVar29 = (double)(~uVar28 & 0xbff0000000000000 |
                                                       uVar28 & 0x3ff0000000000000);
                                      dVar54 = auVar39._0_8_;
                                      local_168 = local_168 * dVar54;
                                      dStack_170 = dStack_170 * dVar54;
                                      local_178 = (code *)((double)local_178 * dVar54);
                                      dVar54 = auVar39._8_8_;
                                      local_148 = local_148 * dVar54;
                                      dStack_150 = dStack_150 * dVar54;
                                      local_158 = dVar54 * local_158;
                                      local_128 = local_128 * dVar29;
                                      dStack_130 = dStack_130 * dVar29;
                                      local_138 = dVar29 * local_138;
                                      FUN_14481fd10(local_448);
                                      dVar29 = local_448[2] * local_448[2] +
                                               local_448[0] * local_448[0];
                                      dVar54 = local_448[3] * local_448[3] +
                                               local_448[1] * local_448[1];
                                      auVar48._0_8_ = dVar29 + dVar54;
                                      auVar48._8_8_ = dVar29 + dVar54;
                                      auVar37._8_8_ =
                                           -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
                                      auVar37._0_8_ =
                                           -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
                                      auVar39 = sqrtpd(auVar48,auVar48);
                                      auVar52 = divpd(auVar52,auVar39);
                                      auVar53._0_8_ = auVar52._0_8_ * local_448[2];
                                      auVar53._8_8_ = auVar52._8_8_ * local_448[3];
                                      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,
                                                           auVar53,auVar37);
                                      local_2f8._8_8_ =
                                           (ulonglong)(local_448[1] * auVar52._8_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
                                      local_2f8._0_8_ =
                                           (ulonglong)(local_448[0] * auVar52._0_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
                                      local_2d8._8_8_ = dStack_110;
                                      local_2d8._0_8_ = local_118;
                                      local_2c8._8_8_ = 0;
                                      local_2c8._0_8_ = local_108;
                                    }
                                    dStack_2a0 = dVar62 * 0.0;
                                    local_2a8 = dVar42 * 1.0;
                                    local_2b8 = auVar30;
                                    pdVar17 = (double *)local_2f8;
                                    FUN_140adafdf(pdVar17,&local_310,local_518,local_520);
                                  }
                                  lVar24 = lVar24 + 0x68;
                                } while ((longlong)iVar8 * 0x68 - lVar24 != 0);
                              }
                            }
                          }
                        }
                      }
LAB_140ad92ed:
                      plVar9 = plVar9 + 1;
                    } while (plVar9 != local_4d0);
                  }
                  lVar12 = local_550;
                  if (local_388 != 0) {
                    FUN_1400020a8();
                    lVar12 = local_550;
                  }
                }
              }
LAB_140ad9329:
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(int *)(local_500 + 0x90));
          }
        }
        FUN_144a5d770(local_510);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
code_r0x000140ad8b06:
  iVar8 = *(int *)((longlong)plVar19 + 0xc);
  if (iVar8 == -1) goto LAB_140ad92ed;
  goto LAB_140ad8af6;
}



// FUNCTION 140adafdf FUN_140adafdf body=1007 status=ok
// SIG undefined FUN_140adafdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140adafdf(double *param_1,int *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
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
  longlong lVar15;
  double dVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar4 = *param_2;
  dVar9 = *param_1;
  dVar10 = param_1[1];
  dVar11 = param_1[2];
  dVar12 = param_1[8];
  dVar13 = param_1[9];
  dVar14 = param_1[10];
  dVar5 = dVar10 + dVar10;
  dVar16 = dVar11 + dVar11;
  dVar6 = dVar9 * (dVar9 + dVar9);
  dVar3 = param_1[3];
  dVar7 = dVar16 * dVar3;
  dVar8 = (dVar9 + dVar9) * param_1[3];
  dVar3 = dVar5 * dVar3;
  local_118 = (float)((1.0 - (dVar11 * dVar16 + dVar10 * dVar5)) * dVar12);
  local_e8 = (float)param_1[4];
  fStack_e4 = (float)param_1[5];
  fStack_e0 = (float)param_1[6];
  fStack_114 = (float)((dVar5 * dVar9 + dVar7) * dVar12);
  fStack_110 = (float)((dVar16 * dVar9 - dVar3) * dVar12);
  uStack_10c = 0;
  local_108 = (float)((dVar5 * dVar9 - dVar7) * dVar13);
  fStack_104 = (float)((1.0 - (dVar11 * dVar16 + dVar6)) * dVar13);
  fStack_100 = (float)((dVar16 * dVar10 + dVar8) * dVar13);
  uStack_fc = 0;
  local_f8 = (float)((dVar3 + dVar16 * dVar9) * dVar14);
  fStack_f4 = (float)((dVar16 * dVar10 - dVar8) * dVar14);
  fStack_f0 = (float)((1.0 - (dVar6 + dVar10 * dVar5)) * dVar14);
  uStack_ec = 0;
  uStack_dc = 0x3f800000;
  if ((((((1e-08 < ABS(local_118)) || (1e-08 < ABS(fStack_114))) || (1e-08 < ABS(fStack_110))) ||
       ((1e-08 < ABS(local_108) || (1e-08 < ABS(fStack_104))))) ||
      ((1e-08 < ABS(fStack_100) || ((1e-08 < ABS(local_f8) || (1e-08 < ABS(fStack_f4))))))) ||
     (1e-08 < ABS(fStack_f0))) {
    FUN_144906c86(&local_158,&local_118);
  }
  else {
    local_128 = _DAT_14c846280;
    uStack_120 = _DAT_14c846288;
    local_138 = _DAT_14c846270;
    uStack_130 = _DAT_14c846278;
    local_148 = _DAT_14c846260;
    uStack_140 = _DAT_14c846268;
    local_158 = _DAT_14c846250;
    uStack_150 = DAT_14c846258;
  }
  lVar15 = (ulonglong)(uint)(iVar4 * 3) * 0x10;
  pfVar1 = (float *)(param_3 + lVar15);
  *pfVar1 = local_118;
  pfVar1[1] = local_108;
  pfVar1[2] = local_f8;
  pfVar1[3] = local_e8;
  pfVar1 = (float *)(param_3 + 0x10 + lVar15);
  *pfVar1 = fStack_114;
  pfVar1[1] = fStack_104;
  pfVar1[2] = fStack_f4;
  pfVar1[3] = fStack_e4;
  pfVar1 = (float *)(param_3 + 0x20 + lVar15);
  *pfVar1 = fStack_110;
  pfVar1[1] = fStack_100;
  pfVar1[2] = fStack_f0;
  pfVar1[3] = fStack_e0;
  puVar2 = (undefined4 *)(param_4 + lVar15);
  *puVar2 = (undefined4)local_158;
  puVar2[1] = (undefined4)local_148;
  puVar2[2] = (int)local_138;
  puVar2[3] = (int)local_128;
  puVar2 = (undefined4 *)(param_4 + 0x10 + lVar15);
  *puVar2 = local_158._4_4_;
  puVar2[1] = local_148._4_4_;
  puVar2[2] = (int)((ulonglong)local_138 >> 0x20);
  puVar2[3] = (int)((ulonglong)local_128 >> 0x20);
  puVar2 = (undefined4 *)(param_4 + 0x20 + lVar15);
  *puVar2 = (undefined4)uStack_150;
  puVar2[1] = (undefined4)uStack_140;
  puVar2[2] = (int)uStack_130;
  puVar2[3] = (int)uStack_120;
  *param_2 = *param_2 + 1;
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_178,(undefined4)local_158,uStack_130,local_128);
}



// FUNCTION 140adb3cf FUN_140adb3cf body=243 status=ok
// SIG undefined FUN_140adb3cf(void)

uint FUN_140adb3cf(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  if ((longlong)(int)param_1[1] < 1) {
    uVar3 = 0;
  }
  else {
    lVar7 = 0;
    uVar3 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 4 + lVar7 * 8);
      if ((((iVar1 != 0) && (uVar5 = *(uint *)(lVar2 + lVar7 * 8), -1 < (int)uVar5)) &&
          ((int)uVar5 < DAT_14c9647dc)) &&
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)) &&
          (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar8 = *plVar6, lVar8 != 0)))))) {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
          lVar8 = 0;
        }
        bVar4 = (byte)*(undefined4 *)(lVar8 + 0x48);
        if (bVar4 < *(byte *)(lVar8 + 0x49)) {
          bVar4 = *(byte *)(lVar8 + 0x49);
        }
        uVar5 = (uint)bVar4;
        if (uVar5 < 4) {
          uVar5 = 3;
        }
        if ((*(byte *)(lVar8 + 0xc61) & 0x20) == 0) {
          uVar5 = (uint)bVar4;
        }
        if (4 < uVar5) {
          uVar5 = 5;
        }
        if (uVar3 < uVar5 + 1) {
          uVar3 = uVar5 + 1;
        }
      }
      lVar7 = lVar7 + 1;
    } while ((int)param_1[1] != lVar7);
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  return uVar3;
}



// FUNCTION 140adb4c2 FUN_140adb4c2 body=317 status=ok
// SIG undefined FUN_140adb4c2(void)

void FUN_140adb4c2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140adb530;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140adb530:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140adb5ff FUN_140adb5ff body=1700 status=ok
// SIG undefined FUN_140adb5ff(void)

void FUN_140adb5ff(longlong *param_1,longlong *param_2,int *param_3,int *param_4,int *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  int *local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  local_60 = param_4;
  if (0 < (int)param_2[1]) {
    lVar12 = 0;
    do {
      local_58 = *(ulonglong *)(*param_1 + lVar12 * 8);
      if ((((((local_58 >> 0x20 != 0) && (uVar4 = (uint)local_58, -1 < (int)uVar4)) &&
            ((int)uVar4 < DAT_14c9647dc)) &&
           ((plVar6 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
            plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)(local_58 >> 0x20))))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
        iVar10 = *(int *)(*param_2 + 4 + lVar12 * 8);
        if (((iVar10 == 0) ||
            (((uVar4 = *(uint *)(*param_2 + lVar12 * 8), (int)uVar4 < 0 ||
              (DAT_14c9647dc <= (int)uVar4)) ||
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar6 == (longlong *)0x0)))) ||
           ((((int)plVar6[2] != iVar10 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) ||
            (lVar2 = *plVar6, lVar2 == 0)))) {
LAB_140adba7b:
          lVar2 = FUN_14479d2ce(&local_58);
          plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28);
          if (plVar6 == (longlong *)0x0) goto LAB_140adba0b;
        }
        else {
          if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
            lVar2 = 0;
          }
          lVar5 = *(longlong *)(lVar2 + 0x658);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar2 + 0x660);
            if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) goto LAB_140adbbde;
            if (lVar5 != 0) goto LAB_140adb773;
            goto LAB_140adba7b;
          }
          if (DAT_14c950c29 == '\x01') {
LAB_140adbbde:
            FUN_1456cec3c(lVar5);
          }
LAB_140adb773:
          if (DAT_14cb06da8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1464003b0;
            local_88 = &LAB_147d17bdf;
            local_90 = &LAB_1417edf22;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
          goto LAB_140adba7b;
          iVar10 = *(int *)(*param_2 + 4 + lVar12 * 8);
          if ((iVar10 == 0) || (uVar4 = *(uint *)(*param_2 + lVar12 * 8), (int)uVar4 < 0)) {
LAB_140adba51:
            lVar2 = 0;
          }
          else {
            lVar2 = 0;
            if ((int)uVar4 < DAT_14c9647dc) {
              plVar6 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != iVar10)) ||
                 ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_140adba51;
              lVar2 = *plVar6;
            }
          }
          plVar6 = *(longlong **)(lVar2 + 0x658);
          if (plVar6 == (longlong *)0x0) {
            plVar6 = *(longlong **)(lVar2 + 0x660);
            if ((DAT_14c950c29 == '\x01') && (plVar6 != (longlong *)0x0)) goto LAB_140adbbeb;
            if (plVar6 == (longlong *)0x0) goto LAB_140adba0b;
          }
          else if (DAT_14c950c29 != '\0') {
LAB_140adbbeb:
            FUN_1456cec3c(plVar6);
            if (DAT_14cb06da8 == 0) {
              local_80 = &local_50;
              local_50 = FUN_1449e2820;
              local_70 = FUN_14081d0ea;
              local_78 = &LAB_1464003b0;
              local_88 = &LAB_147d17bdf;
              local_90 = &LAB_1417edf22;
              local_98 = L"Engine";
              local_a0 = 0;
              local_a8 = 0x10000000;
              local_b0 = 8;
              local_b8 = 0x588;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
          }
          if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
              DAT_14cb06da8 + 0x30)) goto LAB_140adba0b;
        }
        lVar2 = (**(code **)(*plVar6 + 0x310))(plVar6);
        if (0 < *(int *)(lVar2 + 0x28)) {
          if ((local_58._4_4_ == 0) || ((int)(uint)local_58 < 0)) {
LAB_140adba49:
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if ((int)(uint)local_58 < DAT_14c9647dc) {
              plVar6 = (longlong *)
                       ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8));
              if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != local_58._4_4_)) ||
                 ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_140adba49;
              lVar5 = *plVar6;
            }
          }
          if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
            plVar3 = *(longlong **)(lVar5 + 0x40);
            plVar6 = plVar3 + *(int *)(lVar5 + 0x48);
            do {
              lVar5 = *plVar3;
              lVar11 = *(longlong *)(lVar5 + 0x28);
              if ((lVar11 != 0) && (*(int *)(lVar2 + 0x98) != *(int *)(lVar2 + 0xc4))) {
                uVar4 = (uint)((ulonglong)lVar11 >> 0x10);
                uVar9 = (uint)lVar11 & 0xffff;
                lVar8 = *(longlong *)(lVar2 + 0xd0);
                if (*(longlong *)(lVar2 + 0xd0) == 0) {
                  lVar8 = lVar2 + 200;
                }
                iVar10 = *(int *)(lVar8 + (ulonglong)
                                          (*(int *)(lVar2 + 0xd8) - 1U &
                                          (int)((ulonglong)lVar11 >> 0x20) +
                                          ((uint)lVar11 << 0x10 | uVar9) +
                                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
                if (iVar10 != -1) {
                  do {
                    plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar10 * 0x14);
                    if (*plVar1 == lVar11) {
                      if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
                         ((iVar10 = (int)plVar1[1], iVar10 != -1 &&
                          (iVar10 < *(int *)(lVar2 + 0x28))))) {
                        iVar10 = *(int *)(lVar5 + 0x50);
                        if ((longlong)iVar10 != 0) {
                          lVar11 = *(longlong *)(lVar5 + 0x48);
                          iVar7 = *param_3;
                          lVar8 = 0;
                          do {
                            if ((*(byte *)(lVar11 + 0x19 + lVar8) & 0xfe) == 2) {
                              iVar7 = iVar7 + 1;
                              *param_3 = iVar7;
                            }
                            lVar8 = lVar8 + 0x70;
                          } while ((longlong)iVar10 * 0x70 - lVar8 != 0);
                        }
                        iVar10 = *(int *)(lVar5 + 0x40);
                        if ((longlong)iVar10 != 0) {
                          lVar11 = *(longlong *)(lVar5 + 0x38);
                          iVar7 = *local_60;
                          lVar8 = 0;
                          do {
                            if ((*(byte *)(lVar11 + 0x19 + lVar8) & 0xfe) == 2) {
                              iVar7 = iVar7 + 1;
                              *local_60 = iVar7;
                            }
                            lVar8 = lVar8 + 0x50;
                          } while ((longlong)iVar10 * 0x50 != lVar8);
                        }
                        iVar10 = *(int *)(lVar5 + 0x60);
                        if ((longlong)iVar10 != 0) {
                          lVar5 = *(longlong *)(lVar5 + 0x58);
                          iVar7 = *param_5;
                          lVar11 = 0;
                          do {
                            if ((*(byte *)(lVar5 + 0x19 + lVar11) & 0xfe) == 2) {
                              iVar7 = iVar7 + 1;
                              *param_5 = iVar7;
                            }
                            lVar11 = lVar11 + 0x68;
                          } while ((longlong)iVar10 * 0x68 - lVar11 != 0);
                        }
                      }
                      break;
                    }
                    iVar10 = *(int *)((longlong)plVar1 + 0xc);
                  } while (iVar10 != -1);
                }
              }
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar6);
          }
        }
      }
LAB_140adba0b:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140adbca4 FUN_140adbca4 body=4518 status=ok
// SIG undefined FUN_140adbca4(void)

void FUN_140adbca4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  int local_c4;
  ulonglong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar13 = &DAT_14c846480;
  puVar19 = param_3;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar19 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar19 = puVar19 + 1;
  }
  local_70 = 0;
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     (plVar6 = (longlong *)FUN_144741050(param_1 + 0x70), *plVar6 == 0)) {
    lVar12 = FUN_1404101e2(param_1 + 0x40);
    if (lVar12 == 0) {
      iVar21 = 0;
      if (((((*(int *)(param_2 + 0x4c) != 0) &&
            (uVar22 = *(uint *)(param_2 + 0x48), -1 < (int)uVar22)) && ((int)uVar22 < DAT_14c9647dc)
           ) && ((plVar6 = (longlong *)
                           ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                 plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_2 + 0x4c))))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
          (lVar12 = *plVar6, lVar7 = lVar12, lVar12 != 0)))) {
        do {
          if (DAT_14cad2858 == 0) {
            local_a8 = FUN_144a7958c;
            local_d0 = FUN_14081d0ea;
            local_d8 = (code *)&LAB_146395584;
            local_e8 = &LAB_147a0ba80;
            local_f0 = (code *)&LAB_14575ccce;
            local_f8 = L"Engine";
            local_100 = 0x40000000000;
            local_108 = 0x10000004;
            local_110 = 0x10;
            local_118 = 0x1180;
            local_e0 = &local_a8;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
            lVar20 = *(longlong *)(lVar7 + 0x658);
            if (lVar20 == 0) {
              lVar20 = *(longlong *)(lVar7 + 0x660);
              if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) goto LAB_140adc1b6;
              if (lVar20 != 0) goto LAB_140adc01a;
            }
            else {
              if (DAT_14c950c29 == '\x01') {
LAB_140adc1b6:
                FUN_1456cec3c(lVar20);
              }
LAB_140adc01a:
              if (DAT_14cb06da8 == 0) {
                local_a8 = FUN_1449e2820;
                local_d0 = FUN_14081d0ea;
                local_d8 = (code *)&LAB_1464003b0;
                local_e8 = &LAB_147d17bdf;
                local_f0 = (code *)&LAB_1417edf22;
                local_f8 = L"Engine";
                local_100 = 0;
                local_108 = 0x10000000;
                local_110 = 8;
                local_118 = 0x588;
                local_e0 = &local_a8;
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
              }
              if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
                uVar22 = *(uint *)(lVar7 + 0xc);
                local_70 = CONCAT44(local_70._4_4_,uVar22);
                if ((int)uVar22 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                iVar21 = *(int *)(lVar7 + 0x10);
                if (iVar21 == 0) {
                  LOCK();
                  iVar21 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar18 = DAT_14c964868 + 1;
                  bVar23 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar21;
                  if (bVar23) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar18);
                  }
                  LOCK();
                  iVar21 = *(int *)(lVar7 + 0x10);
                  bVar23 = iVar21 == 0;
                  if (bVar23) {
                    *(int *)(lVar7 + 0x10) = iVar18;
                    iVar21 = 0;
                  }
                  UNLOCK();
                  if (bVar23) {
                    iVar21 = iVar18;
                  }
                  local_70 = CONCAT44(iVar21,(uint)local_70);
                  iVar18 = 0;
                  if (iVar21 == 0) goto LAB_140adc277;
                }
                else {
                  local_70 = CONCAT44(iVar21,uVar22);
                }
                iVar18 = iVar21;
                if (((((int)(uint)local_70 < 0) || (DAT_14c9647dc <= (int)(uint)local_70)) ||
                    (lVar7 = (ulonglong)(((uint)local_70 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_70 >> 0x10) * 8),
                    lVar7 == 0)) ||
                   ((*(int *)(lVar7 + 0x10) != iVar21 || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0))
                   )) goto LAB_140adc277;
                goto LAB_140adc723;
              }
            }
          }
          plVar6 = (longlong *)(lVar7 + 0x120);
          lVar7 = *plVar6;
        } while (*plVar6 != 0);
        iVar18 = 0;
LAB_140adc277:
        iVar21 = iVar18;
        if (DAT_14cad2858 == 0) {
          local_a8 = FUN_144a7958c;
          local_d0 = FUN_14081d0ea;
          local_d8 = (code *)&LAB_146395584;
          local_e8 = &LAB_147a0ba80;
          local_f0 = (code *)&LAB_14575ccce;
          local_f8 = L"Engine";
          local_100 = 0x40000000000;
          local_108 = 0x10000004;
          local_110 = 0x10;
          local_118 = 0x1180;
          local_e0 = &local_a8;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar7 = DAT_14cad2858;
        if (DAT_14c951858 == 0) {
          local_a8 = FUN_1449e2820;
          local_d0 = FUN_14081d0ea;
          local_d8 = FUN_14081d0ea;
          local_e8 = &LAB_1468c5283;
          local_f0 = FUN_142809da0;
          local_f8 = L"Engine";
          local_100 = 0x400000000;
          local_108 = 0x10000000;
          local_110 = 8;
          local_118 = 0x50;
          local_e0 = &local_a8;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar12 = *(longlong *)(lVar12 + 0x20);
        if (lVar12 != 0) {
          iVar18 = *(int *)(lVar7 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar18) ||
               (lVar20 = lVar12,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar18 * 8) !=
               lVar7 + 0x30)) {
              lVar20 = 0;
            }
          } while ((lVar20 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
          if (lVar20 != 0) {
            uVar22 = *(uint *)(lVar20 + 0xc);
            goto LAB_140adbeeb;
          }
        }
      }
    }
    else {
      lVar7 = FUN_1414199c4();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
        lVar12 = FUN_140849bbe(lVar12);
      }
      else {
        lVar12 = *(longlong *)(lVar12 + 0x398);
      }
      if (lVar12 == 0) {
        local_70 = 0;
        iVar21 = 0;
      }
      else {
        uVar22 = *(uint *)(lVar12 + 0xc);
LAB_140adbeeb:
        local_70 = CONCAT44(local_70._4_4_,uVar22);
        if ((int)uVar22 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar21 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar21 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar23 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar21;
          if (bVar23) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar21 = *(int *)(lVar12 + 0x10);
          bVar23 = iVar21 == 0;
          if (bVar23) {
            *(int *)(lVar12 + 0x10) = iVar18;
            iVar21 = 0;
          }
          UNLOCK();
          if (bVar23) {
            iVar21 = iVar18;
          }
        }
      }
      local_70 = CONCAT44(iVar21,(uint)local_70);
    }
  }
  else {
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffffffff);
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = FUN_144830b78(local_90,&DAT_14cb42160);
    local_88 = 0;
    uStack_80 = 0;
    lVar12 = FUN_1404e5848(&local_a8,param_2 + 0x1e8,param_1 + 0x68);
    iVar21 = 0;
    if (lVar12 != 0) {
      if (DAT_14cad2858 == 0) {
        local_e0 = &local_68;
        local_68 = FUN_144a7958c;
        local_d0 = FUN_14081d0ea;
        local_d8 = (code *)&LAB_146395584;
        local_e8 = &LAB_147a0ba80;
        local_f0 = (code *)&LAB_14575ccce;
        local_f8 = L"Engine";
        local_100 = 0x40000000000;
        local_108 = 0x10000004;
        local_110 = 0x10;
        local_118 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar7 = *(longlong *)(lVar12 + 0x10);
      iVar18 = *(int *)(lVar7 + 0x38);
      if ((iVar18 < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          != DAT_14cad2858 + 0x30)) {
        if (DAT_14cac9ca8 == 0) {
          local_e0 = &local_68;
          local_68 = FUN_141030f22;
          local_d0 = FUN_14081d0ea;
          local_d8 = FUN_14081d0ea;
          local_e8 = &LAB_1478c0a72;
          local_f0 = (code *)&LAB_1417b2375;
          local_f8 = L"Engine";
          local_100 = 0x1000000000;
          local_108 = 0x10000004;
          local_110 = 8;
          local_118 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          lVar7 = *(longlong *)(lVar12 + 0x10);
          iVar18 = *(int *)(lVar7 + 0x38);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar18) &&
           (*(longlong *)
             (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
            DAT_14cac9ca8 + 0x30)) {
          local_b0 = param_3;
          lVar7 = FUN_1414199c4();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (((*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30 &&
               (lVar7 = *(longlong *)(lVar12 + 0x398), lVar7 != 0)) &&
              ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)))) {
LAB_140adc6c6:
            uVar22 = *(uint *)(lVar7 + 0xc);
            local_70 = CONCAT44(local_70._4_4_,uVar22);
            if ((int)uVar22 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar21 = *(int *)(lVar12 + 0x10);
            iVar18 = DAT_14c964868;
            param_3 = local_b0;
            goto joined_r0x000140adc704;
          }
          uVar22 = *(uint *)(lVar12 + 0x268);
          uVar16 = (ulonglong)uVar22;
          if (uVar22 == 0) {
            uVar15 = 0;
            uVar17 = 1;
            uVar4 = 0;
            iVar21 = 0;
          }
          else {
            puVar8 = *(uint **)(lVar12 + 0x260);
            if (*(uint **)(lVar12 + 0x260) == (uint *)0x0) {
              puVar8 = (uint *)(lVar12 + 0x250);
            }
            uVar4 = *puVar8;
            if (uVar4 == 0) {
              iVar21 = uVar22 + 0x1e;
              if (-1 < (int)(uVar22 - 1)) {
                iVar21 = uVar22 - 1;
              }
              uVar15 = 0;
              uVar17 = (ulonglong)(uint)(iVar21 >> 5);
              if (iVar21 >> 5 < 1) {
                uVar17 = uVar15;
              }
              iVar21 = 0;
              do {
                if (uVar17 == uVar15) goto LAB_140adbe88;
                iVar21 = iVar21 + 0x20;
                uVar4 = puVar8[uVar15 + 1];
                uVar15 = uVar15 + 1;
              } while (uVar4 == 0);
            }
            else {
              uVar15 = 0;
              iVar21 = 0;
            }
            uVar17 = (ulonglong)(-uVar4 & uVar4);
            uVar2 = uVar17 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar4 = (iVar21 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar4) {
              uVar4 = uVar22;
            }
          }
          if (uVar4 != uVar22) {
            uVar22 = 0xffffffff;
            do {
              lVar7 = *(longlong *)(*(longlong *)(lVar12 + 0x240) + (longlong)(int)uVar4 * 0x10);
              if (lVar7 != 0) {
                if (DAT_14cad2858 == 0) {
                  local_68 = FUN_144a7958c;
                  local_d0 = FUN_14081d0ea;
                  local_d8 = (code *)&LAB_146395584;
                  local_e0 = &local_68;
                  local_e8 = &LAB_147a0ba80;
                  local_f0 = (code *)&LAB_14575ccce;
                  local_f8 = L"Engine";
                  local_100 = 0x40000000000;
                  local_108 = 0x10000004;
                  local_110 = 0x10;
                  local_118 = 0x1180;
                  local_c4 = iVar21;
                  local_c0 = uVar16;
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                FUN_1463bcebe);
                  uVar16 = local_c0;
                  iVar21 = local_c4;
                }
                if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)
                     ) && (*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                            (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30))
                   && ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
                  lVar20 = *(longlong *)(lVar7 + 0x658);
                  if (lVar20 == 0) {
                    lVar20 = *(longlong *)(lVar7 + 0x660);
                    if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) goto LAB_140adc671;
                    if (lVar20 != 0) goto LAB_140adc3ca;
                  }
                  else {
                    if (DAT_14c950c29 == '\x01') {
LAB_140adc671:
                      local_c4 = iVar21;
                      local_c0 = uVar16;
                      local_b8 = lVar20;
                      FUN_1456cec3c(lVar20);
                      lVar20 = local_b8;
                      uVar16 = local_c0;
                      iVar21 = local_c4;
                    }
LAB_140adc3ca:
                    if (DAT_14cb06da8 == 0) {
                      local_68 = FUN_1449e2820;
                      local_d0 = FUN_14081d0ea;
                      local_d8 = (code *)&LAB_1464003b0;
                      local_e0 = &local_68;
                      local_e8 = &LAB_147d17bdf;
                      local_f0 = (code *)&LAB_1417edf22;
                      local_f8 = L"Engine";
                      local_100 = 0;
                      local_108 = 0x10000000;
                      local_110 = 8;
                      local_118 = 0x588;
                      local_c4 = iVar21;
                      local_c0 = uVar16;
                      local_b8 = lVar20;
                      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                      lVar20 = local_b8;
                      uVar16 = local_c0;
                      iVar21 = local_c4;
                    }
                    if ((*(int *)(DAT_14cb06da8 + 0x38) <=
                         *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30))
                    goto LAB_140adc6c6;
                  }
                }
              }
              uVar22 = uVar22 & ~(uint)uVar17;
              puVar8 = *(uint **)(lVar12 + 0x260);
              if (*(uint **)(lVar12 + 0x260) == (uint *)0x0) {
                puVar8 = (uint *)(lVar12 + 0x250);
              }
              uVar5 = *(uint *)(lVar12 + 0x268);
              iVar18 = (int)uVar15;
              lVar7 = (longlong)iVar18;
              uVar4 = puVar8[lVar7] & uVar22;
              if (uVar4 == 0) {
                iVar10 = uVar5 + 0x1e;
                if (-1 < (int)(uVar5 - 1)) {
                  iVar10 = uVar5 - 1;
                }
                iVar10 = iVar10 >> 5;
                iVar21 = iVar21 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar18) {
                  iVar11 = iVar18;
                }
                if (iVar18 < iVar10) {
                  lVar20 = 0;
                  do {
                    uVar4 = puVar8[lVar7 + lVar20 + 1];
                    if (uVar4 != 0) {
                      uVar15 = (ulonglong)(iVar18 + (int)lVar20 + 1);
                      uVar22 = 0xffffffff;
                      goto LAB_140adc4a5;
                    }
                    iVar21 = iVar21 + 0x20;
                    lVar20 = lVar20 + 1;
                  } while (iVar11 - lVar7 != lVar20);
                  uVar22 = 0xffffffff;
                  iVar18 = iVar11;
                }
                uVar15 = (ulonglong)(iVar18 + 1);
                uVar4 = uVar5;
              }
              else {
LAB_140adc4a5:
                uVar17 = (ulonglong)(-uVar4 & uVar4);
                uVar2 = uVar17 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                uVar4 = (iVar21 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                if ((int)uVar5 <= (int)uVar4) {
                  uVar4 = uVar5;
                }
              }
            } while (uVar4 != (uint)uVar16);
          }
LAB_140adbe88:
          local_70 = 0;
          param_3 = local_b0;
          iVar21 = 0;
          goto LAB_140adc70a;
        }
      }
      else {
        iVar21 = 0;
        if ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0) {
          uVar22 = *(uint *)(lVar12 + 0xc);
          local_70 = CONCAT44(local_70._4_4_,uVar22);
          if ((int)uVar22 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          iVar21 = *(int *)(lVar12 + 0x10);
          iVar18 = DAT_14c964868;
joined_r0x000140adc704:
          DAT_14c964868 = iVar18;
          if (iVar21 == 0) {
            LOCK();
            DAT_14c964868 = iVar18 + 1;
            UNLOCK();
            iVar10 = iVar18 + 1;
            if (iVar18 < 1000) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar21 = *(int *)(lVar12 + 0x10);
            bVar23 = iVar21 == 0;
            if (bVar23) {
              *(int *)(lVar12 + 0x10) = iVar10;
              iVar21 = 0;
            }
            UNLOCK();
            if (bVar23) {
              iVar21 = iVar10;
            }
          }
LAB_140adc70a:
          local_70 = CONCAT44(iVar21,(uint)local_70);
        }
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140adc723:
  plVar6 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_14181f5d4(plVar6,0);
  }
  plVar1 = (longlong *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_14181f634(plVar1);
  }
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (((((*(int *)(param_2 + 0x4c) != 0) && (uVar22 = *(uint *)(param_2 + 0x48), -1 < (int)uVar22))
       && ((int)uVar22 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_2 + 0x4c))))) &&
     ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
    for (lVar7 = *plVar14; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x120)) {
      uVar9 = FUN_141483544();
      plVar14 = (longlong *)FUN_144718840(lVar7,uVar9);
      if (plVar14 != (longlong *)0x0) {
        lVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,param_3,plVar6,plVar1);
        break;
      }
    }
  }
  cVar3 = FUN_143913506();
  if (cVar3 == '\0') {
    if (lVar12 != 0) {
      iVar21 = *(int *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x94) < iVar21 + 1U) {
        FUN_14181f664(plVar6,iVar21);
      }
      *(ulonglong *)(*plVar6 + (longlong)iVar21 * 8) = local_70;
      goto LAB_140adc86f;
    }
    if (iVar21 == 0) {
LAB_140adca2a:
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)0x0;
      if ((-1 < (int)(uint)local_70) && ((int)(uint)local_70 < DAT_14c9647dc)) {
        puVar13 = (undefined8 *)
                  ((ulonglong)(((uint)local_70 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_70 >> 0x10) * 8));
        if ((puVar13 == (undefined8 *)0x0) ||
           ((*(int *)(puVar13 + 2) != iVar21 || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0))))
        goto LAB_140adca2a;
        plVar14 = (longlong *)*puVar13;
      }
    }
    lVar12 = (**(code **)(*plVar14 + 0xb98))();
    if (lVar12 == 0) goto LAB_140adc8e1;
    iVar21 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar21 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar21 + 1U) {
      FUN_14181f664(plVar6,iVar21);
    }
    *(ulonglong *)(*plVar6 + (longlong)iVar21 * 8) = local_70;
    uVar22 = 0;
    if (local_70 >> 0x20 == 0) {
LAB_140adca5e:
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)0x0;
      uVar4 = (uint)local_70;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        puVar13 = (undefined8 *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
        if ((puVar13 == (undefined8 *)0x0) ||
           ((*(int *)(puVar13 + 2) != (int)(local_70 >> 0x20) ||
            ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_140adca5e;
        plVar6 = (longlong *)*puVar13;
      }
    }
    lVar12 = (**(code **)(*plVar6 + 0xb98))();
    uVar16 = 0;
    if (lVar12 != 0) {
      uVar22 = *(uint *)(lVar12 + 0xc);
      goto LAB_140adc873;
    }
  }
  else {
    if (lVar12 == 0) goto LAB_140adc8e1;
    iVar21 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar21 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar21 + 1U) {
      FUN_14181f664(plVar6,iVar21);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar21 * 8) = 0;
LAB_140adc86f:
    uVar22 = *(uint *)(lVar12 + 0xc);
LAB_140adc873:
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar16 = (ulonglong)*(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar21 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar21;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar5 = *(uint *)(lVar12 + 0x10);
      bVar23 = uVar5 == 0;
      if (bVar23) {
        *(uint *)(lVar12 + 0x10) = uVar4;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar5 = uVar4;
      }
      uVar16 = (ulonglong)uVar5;
    }
  }
  iVar21 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar21 + 1U) {
    FUN_14181f7c6(plVar1,iVar21);
  }
  *(ulonglong *)(*plVar1 + (longlong)iVar21 * 8) = (ulonglong)uVar22 | uVar16 << 0x20;
LAB_140adc8e1:
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140adce4c FUN_140adce4c body=273 status=ok
// SIG undefined FUN_140adce4c(void)

void FUN_140adce4c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14009d2a0();
  lVar3 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  uVar1 = *(ushort *)(lVar2 + 0x11a);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(lVar2 + 0x11c);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if (bVar4) {
    local_38 = (undefined4)*param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = (undefined4)param_2[1];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = param_5;
    FUN_140add568(param_1,&local_38,param_3,param_4);
  }
  else if (bVar5) {
    local_48 = (undefined4)*param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_40 = (undefined4)param_2[1];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = param_5;
    FUN_140adcf5e(param_1,&local_48,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140adcf5e FUN_140adcf5e body=536 status=ok
// SIG undefined FUN_140adcf5e(void)

void FUN_140adcf5e(longlong param_1,longlong *param_2,longlong param_3,int *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar14 = (ulonglong)
           *(ushort *)
            (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe);
  local_58 = param_3;
  if (uVar14 != 0) {
    lVar1 = param_1 + 0x58;
    uVar13 = 0;
    do {
      local_4a = *(undefined2 *)(local_58 + uVar13 * 2);
      if (((*param_4 != -1) && (param_4[1] != -1)) && ((*(byte *)(param_4 + 2) & 1) == 0)) {
        cVar4 = FUN_140add178(param_5,&local_4a,param_4);
        if (cVar4 != '\0') {
          iVar15 = param_4[1];
          iVar9 = iVar15 + 1;
          iVar3 = *(int *)(param_1 + 0x70);
          iVar12 = iVar9 - iVar3;
          if (0 < iVar12) {
            if (iVar3 == 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar5 = iVar3 + -1;
              }
              iVar5 = iVar5 >> 5;
            }
            iVar11 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar11 = iVar15;
            }
            if (iVar11 >> 5 == iVar5) {
              *(int *)(param_1 + 0x70) = iVar9;
            }
            else {
              if (*(int *)(param_1 + 0x74) <= iVar15) {
                if (iVar15 + 0x20U < 0xa0) {
                  iVar15 = 0x80;
                  iVar9 = iVar3;
                }
                else {
                  uVar16 = iVar15 + 0x20U >> 5;
                  if (*(int *)(param_1 + 0x74) + 0x1fU < 0xa0) {
                    uVar8 = 4;
                    if (4 < uVar16) {
                      uVar8 = uVar16;
                    }
                  }
                  else {
                    uVar8 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
                  }
                  uVar6 = FUN_144a3809e(uVar8 << 2,0);
                  iVar9 = (int)(uVar6 >> 2);
                  iVar15 = -0x20;
                  if ((int)uVar16 <= iVar9) {
                    iVar15 = iVar9 << 5;
                  }
                  iVar9 = *(int *)(param_1 + 0x70);
                }
                *(int *)(param_1 + 0x74) = iVar15;
                FUN_1446efbd8(lVar1,iVar9);
                iVar9 = *(int *)(param_1 + 0x70) + iVar12;
              }
              iVar15 = iVar9 + 0x1f;
              if (-1 < iVar9) {
                iVar15 = iVar9;
              }
              *(int *)(param_1 + 0x70) = iVar9;
              if (iVar9 % 0x20 != 0) {
                lVar10 = *(longlong *)(param_1 + 0x68);
                if (*(longlong *)(param_1 + 0x68) == 0) {
                  lVar10 = lVar1;
                }
                bVar7 = -(char)(iVar9 % 0x20);
                *(uint *)(lVar10 + (longlong)(iVar15 >> 5) * 4) =
                     (uint)(*(int *)(lVar10 + (longlong)(iVar15 >> 5) * 4) << (bVar7 & 0x1f)) >>
                     (bVar7 & 0x1f);
              }
            }
            FUN_1447c6044(lVar1,iVar3,iVar12,0);
            iVar15 = param_4[1];
          }
          lVar10 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == 0) {
            lVar10 = lVar1;
          }
          iVar9 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          puVar2 = (uint *)(lVar10 + (longlong)(iVar9 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar15 & 0x1f);
        }
        *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) | 1;
      }
      uVar13 = uVar13 + 1;
      param_4 = param_4 + 3;
    } while (uVar14 != uVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140add178 FUN_140add178 body=558 status=ok
// SIG undefined FUN_140add178(void)

undefined8 FUN_140add178(longlong *param_1,short *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  
  iVar2 = *param_3;
  if ((((iVar2 != -1) && (uVar3 = param_3[1], uVar3 != 0xffffffff)) &&
      ((*(byte *)(param_3 + 2) & 1) == 0)) &&
     (lVar15 = *param_1, *(int *)(lVar15 + 0x68) != *(int *)(lVar15 + 0x94))) {
    uVar7 = uVar3 >> 0xd ^ iVar2 - uVar3;
    uVar10 = uVar7 << 8 ^ (-0x61c88647 - uVar3) - uVar7;
    uVar12 = uVar10 >> 0xd ^ (uVar3 - uVar7) - uVar10;
    uVar13 = uVar12 >> 0xc ^ (uVar7 - uVar10) - uVar12;
    uVar7 = uVar13 << 0x10 ^ (uVar10 - uVar12) - uVar13;
    uVar10 = uVar7 >> 5 ^ (uVar12 - uVar13) - uVar7;
    uVar12 = uVar10 >> 3 ^ (uVar13 - uVar7) - uVar10;
    uVar7 = uVar12 << 10 ^ (uVar7 - uVar10) - uVar12;
    lVar9 = lVar15 + 0x98;
    if (*(longlong *)(lVar15 + 0xa0) != 0) {
      lVar9 = *(longlong *)(lVar15 + 0xa0);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(lVar15 + 0xa8) - 1U &
                             (uVar7 >> 0xf ^ uVar10 - (uVar12 + uVar7))) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(lVar15 + 0x60) + (longlong)iVar8 * 0x28);
        if ((*piVar1 == iVar2) &&
           (*(uint *)(*(longlong *)(lVar15 + 0x60) + 4 + (longlong)iVar8 * 0x28) == uVar3)) {
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          if (piVar1 + 4 == (int *)0x0) {
            return 0;
          }
          uVar3 = piVar1[6];
          lVar15 = (longlong)(int)uVar3;
          if (lVar15 != 0) {
            psVar4 = *(short **)(piVar1 + 4);
            uVar10 = 0;
            bVar14 = *psVar4 == *param_2;
            uVar7 = 0;
            do {
              uVar5 = (ulonglong)uVar7;
              uVar13 = uVar7;
              uVar11 = uVar5;
              uVar12 = uVar7 + 1;
              if ((int)(uVar7 + 1) < (int)uVar3) {
                uVar12 = uVar3;
              }
              do {
                uVar11 = uVar11 + 1;
                uVar6 = uVar12;
                if (lVar15 <= (longlong)uVar11) break;
                uVar13 = uVar13 + 1;
                uVar6 = uVar13;
              } while (bVar14 == (psVar4[uVar11] == *param_2));
              if (bVar14 == false) {
                if (uVar10 != uVar7) {
                  memmove(psVar4 + (int)uVar10,psVar4 + uVar5,(longlong)(int)(uVar6 - uVar7) * 2);
                }
                uVar10 = uVar10 + (uVar6 - uVar7);
              }
              bVar14 = (bool)(bVar14 ^ 1);
              uVar7 = uVar6;
            } while ((longlong)uVar11 < lVar15);
            piVar1[6] = uVar10;
            if (uVar10 != 0) {
              return 0;
            }
          }
          FUN_140add3a6(*param_1 + 0x60,param_3);
          return 1;
        }
        iVar8 = piVar1[8];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 140add3a6 FUN_140add3a6 body=336 status=ok
// SIG undefined FUN_140add3a6(void)

undefined8 FUN_140add3a6(longlong *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[1];
    uVar7 = uVar2 >> 0xd ^ *param_2 - uVar2;
    uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar2) - uVar7;
    uVar10 = uVar9 >> 0xd ^ (uVar2 - uVar7) - uVar9;
    uVar12 = uVar10 >> 0xc ^ (uVar7 - uVar9) - uVar10;
    uVar7 = uVar12 << 0x10 ^ (uVar9 - uVar10) - uVar12;
    uVar9 = uVar7 >> 5 ^ (uVar10 - uVar12) - uVar7;
    uVar10 = uVar9 >> 3 ^ (uVar12 - uVar7) - uVar9;
    uVar7 = uVar10 << 10 ^ (uVar7 - uVar9) - uVar10;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar8 +
                    ((longlong)(int)(uVar7 >> 0xf ^ uVar9 - (uVar10 + uVar7)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar3 = *param_1;
      do {
        lVar11 = (longlong)iVar6;
        piVar1 = (int *)(lVar3 + lVar11 * 0x28);
        if ((*piVar1 == *param_2) && (*(uint *)(lVar3 + 4 + lVar11 * 0x28) == uVar2)) {
          iVar4 = *(int *)((longlong)plVar8 + (longlong)piVar1[9] * 4);
          if (iVar4 == iVar6) {
            piVar5 = (int *)((longlong)plVar8 + (longlong)piVar1[9] * 4);
          }
          else {
            do {
              piVar5 = (int *)(lVar3 + (longlong)iVar4 * 0x28 + 0x20);
              iVar4 = *piVar5;
            } while (iVar4 != iVar6);
          }
          *piVar5 = piVar1[8];
          if (*(longlong *)(*param_1 + 0x10 + lVar11 * 0x28) != 0) {
            FUN_1400020a8();
          }
          FUN_140add4f6(param_1,iVar6);
          return 1;
        }
        iVar6 = piVar1[8];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 140add4f6 FUN_140add4f6 body=114 status=ok
// SIG undefined FUN_140add4f6(void)

void FUN_140add4f6(longlong *param_1,int param_2)

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



// FUNCTION 140add568 FUN_140add568 body=2457 status=ok
// SIG undefined FUN_140add568(void)

void FUN_140add568(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong *plVar29;
  longlong *plVar30;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uint local_9c;
  int local_98;
  int local_94;
  uint *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar27 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar27 + 0xc) != 0) {
    plVar29 = *(longlong **)(lVar27 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar27 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar29 + 0x1e) == *(short *)(param_1 + 0x7c)) goto LAB_140add5d7;
      plVar29 = plVar29 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar29 = (longlong *)0x0;
LAB_140add5d7:
  uVar4 = *(ushort *)(lVar27 + 0xe);
  local_94 = *(int *)(lVar27 + 0x14);
  local_68 = param_3;
  local_60 = param_4;
  if (local_94 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar29 + 1));
  }
  LOCK();
  *(int *)(plVar29 + 3) = (int)plVar29[3] + 1;
  UNLOCK();
  if (*(ushort *)(lVar27 + 0xc) != 0) {
    plVar30 = *(longlong **)(lVar27 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar27 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar30 + 0x1e) == *(short *)(param_1 + 0x7a)) goto LAB_140add618;
      plVar30 = plVar30 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar30 = (longlong *)0x0;
LAB_140add618:
  local_70 = *plVar29;
  local_98 = *(int *)(lVar27 + 0x14);
  if (local_98 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar30 + 1));
  }
  LOCK();
  *(int *)(plVar30 + 3) = (int)plVar30[3] + 1;
  UNLOCK();
  if ((ulonglong)uVar4 != 0) {
    local_80 = *plVar30;
    local_c8 = (longlong *)(param_1 + 8);
    local_c0 = param_1 + 0x40;
    local_b8 = (longlong *)(param_1 + 0x48);
    local_90 = (uint *)(param_1 + 0x18);
    uVar14 = 0;
    local_78 = (ulonglong)uVar4;
    do {
      puVar25 = local_90;
      uVar21 = *(ulonglong *)(local_80 + uVar14 * 8);
      lVar27 = *(longlong *)(local_70 + 8 + uVar14 * 0x14);
      local_4a = *(undefined2 *)(local_68 + uVar14 * 2);
      uVar10 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
      uVar16 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar16 = uVar16 >> 0x10 ^ uVar16;
      uVar10 = (uint)((ulonglong)lVar27 >> 0x10);
      uVar22 = (uint)lVar27 & 0xffff;
      uVar16 = (uVar16 >> 2) +
               ((uint)lVar27 << 0x10 | uVar22) + (int)((ulonglong)lVar27 >> 0x20) +
               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar22 >> 4) + uVar16 * 0x40 + 0x9e3779b9 ^
               uVar16;
      uVar10 = *(uint *)(param_1 + 0x10);
      uVar24 = (ulonglong)uVar10;
      uVar22 = *(uint *)(param_1 + 0x3c);
      local_b0 = uVar14;
      if (uVar10 != uVar22) {
        lVar12 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar12 = local_c0;
        }
        iVar23 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar16) * 4);
        if (iVar23 != -1) {
          lVar12 = *local_c8;
          do {
            lVar20 = (longlong)iVar23 * 0x20;
            lVar26 = lVar12 + lVar20;
            if ((*(ulonglong *)(lVar12 + lVar20) == uVar21) &&
               (*(longlong *)(lVar12 + 8 + lVar20) == lVar27)) {
              if (lVar26 != 0) goto LAB_140addba4;
              break;
            }
            iVar23 = *(int *)(lVar26 + 0x18);
          } while (iVar23 != -1);
        }
      }
      if (uVar22 == 0) {
        *(uint *)(param_1 + 0x10) = uVar10 + 1;
        if (*(uint *)(param_1 + 0x14) == uVar10) {
          FUN_1447711aa(local_c8,uVar24);
        }
        iVar23 = *(int *)(param_1 + 0x30);
        if (iVar23 == 0) {
          iVar11 = -1;
        }
        else {
          iVar11 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar11 = iVar23 + -1;
          }
          iVar11 = iVar11 >> 5;
        }
        iVar17 = iVar23 + 1;
        iVar18 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar18 = iVar23;
        }
        local_a8 = uVar24;
        if (iVar18 >> 5 == iVar11) {
          *(int *)(param_1 + 0x30) = iVar17;
        }
        else {
          if (*(int *)(param_1 + 0x34) <= iVar23) {
            local_9c = uVar16;
            if (iVar23 + 0x20U < 0xa0) {
              iVar17 = 0x80;
              iVar11 = iVar23;
            }
            else {
              uVar10 = iVar23 + 0x20U >> 5;
              local_88 = (ulonglong)uVar10;
              if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
                uVar22 = 4;
                if (4 < uVar10) {
                  uVar22 = uVar10;
                }
              }
              else {
                uVar22 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
              }
              uVar14 = FUN_144a3809e(uVar22 << 2,0);
              iVar11 = (int)(uVar14 >> 2);
              iVar17 = -0x20;
              if ((int)local_88 <= iVar11) {
                iVar17 = iVar11 << 5;
              }
              iVar11 = *(int *)(param_1 + 0x30);
            }
            *(int *)(param_1 + 0x34) = iVar17;
            FUN_1446efbd8(puVar25,iVar11);
            iVar17 = *(int *)(param_1 + 0x30) + 1;
            uVar16 = local_9c;
          }
          iVar11 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar11 = iVar17;
          }
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 % 0x20 != 0) {
            puVar13 = *(uint **)(param_1 + 0x28);
            if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
              puVar13 = puVar25;
            }
            bVar15 = -(char)(iVar17 % 0x20);
            puVar13[iVar11 >> 5] = (puVar13[iVar11 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
          }
        }
        lVar12 = (longlong)(int)local_a8;
        puVar13 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar13 = puVar25;
        }
        bVar15 = (byte)iVar23 & 0x1f;
        puVar13[iVar18 >> 5] = puVar13[iVar18 >> 5] & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
      }
      else {
        local_a8 = (ulonglong)*(uint *)(param_1 + 0x38);
        lVar12 = (longlong)(int)*(uint *)(param_1 + 0x38);
        iVar23 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar12 * 0x20);
        *(int *)(param_1 + 0x38) = iVar23;
        *(uint *)(param_1 + 0x3c) = uVar22 - 1;
        if (uVar22 - 1 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar23 * 0x20) = 0xffffffff;
        }
      }
      iVar23 = (int)local_a8;
      puVar13 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar13 = puVar25;
      }
      iVar11 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar11 = iVar23;
      }
      puVar13[iVar11 >> 5] = puVar13[iVar11 >> 5] | 1 << ((byte)local_a8 & 0x1f);
      lVar26 = *(longlong *)(param_1 + 8);
      lVar12 = lVar12 * 0x20;
      puVar1 = (undefined4 *)(lVar26 + lVar12);
      *(ulonglong *)(lVar26 + lVar12) = uVar21;
      *(longlong *)(lVar26 + 8 + lVar12) = lVar27;
      *(undefined4 *)(lVar26 + 0x10 + lVar12) = 0xffffffff;
      *(undefined4 *)(lVar26 + 0x18 + lVar12) = 0xffffffff;
      uVar10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
      if (1 < uVar10) {
        lVar12 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar12 = local_c0;
        }
        iVar11 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar16) * 4);
        if (iVar11 != -1) {
          lVar12 = *local_c8;
          do {
            lVar26 = (longlong)iVar11 * 0x20;
            puVar2 = (undefined4 *)(lVar12 + lVar26);
            if ((*(ulonglong *)(lVar12 + lVar26) == uVar21) &&
               (*(longlong *)(lVar12 + 8 + lVar26) == lVar27)) {
              uVar6 = *puVar1;
              uVar7 = puVar1[1];
              uVar8 = puVar1[2];
              uVar9 = puVar1[3];
              *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
              *puVar2 = uVar6;
              puVar2[1] = uVar7;
              puVar2[2] = uVar8;
              puVar2[3] = uVar9;
              FUN_141092924(local_c8,local_a8 & 0xffffffff);
              goto LAB_140addb8b;
            }
            iVar11 = puVar2[6];
          } while (iVar11 != -1);
        }
      }
      uVar22 = 1;
      if (3 < uVar10) {
        uVar14 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
        lVar27 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar22 = 1 << ((byte)lVar27 & 0x1f);
      }
      if (((int)uVar10 < 1) || ((int)uVar22 <= *(int *)(param_1 + 0x50))) {
        uVar16 = *(int *)(param_1 + 0x50) - 1U & uVar16;
        puVar1[7] = uVar16;
        lVar27 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar27 = local_c0;
        }
        puVar1[6] = *(undefined4 *)
                     (lVar27 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar16) * 4
                     );
        lVar27 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar27 = local_c0;
        }
        *(int *)(lVar27 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar16) * 4) =
             iVar23;
      }
      else {
        *(uint *)(param_1 + 0x50) = uVar22;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          FUN_1446efa72(local_b8,0,0,4);
          uVar22 = *(uint *)(param_1 + 0x50);
        }
        if (uVar22 == 1) {
          if (*local_b8 != 0) {
            FUN_1446efa72(local_b8,0,0,4);
          }
LAB_140add8ff:
          uVar10 = 0;
          do {
            lVar27 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar27 = local_c0;
            }
            *(undefined4 *)
             (lVar27 + (ulonglong)(*(int *)(param_1 + 0x50) + 0x7fffffffU & uVar10) * 4) =
                 0xffffffff;
            uVar10 = uVar10 + 1;
          } while (uVar22 != uVar10);
        }
        else {
          if (uVar22 == 0) goto LAB_140addb8b;
          FUN_1446efa72(local_b8,0,uVar22,4);
          if (0 < (int)uVar22) goto LAB_140add8ff;
        }
        iVar23 = *(int *)(param_1 + 0x30);
        if (iVar23 == 0) {
          uVar14 = 0;
          uVar21 = 1;
          iVar11 = 0;
          iVar17 = 0;
        }
        else {
          puVar13 = *(uint **)(param_1 + 0x28);
          if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
            puVar13 = puVar25;
          }
          uVar10 = *puVar13;
          if (uVar10 == 0) {
            iVar11 = iVar23 + 0x1e;
            if (-1 < iVar23 + -1) {
              iVar11 = iVar23 + -1;
            }
            uVar14 = 0;
            uVar21 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar21 = uVar14;
            }
            iVar17 = 0;
            do {
              if (uVar21 == uVar14) goto LAB_140addb8b;
              iVar17 = iVar17 + 0x20;
              uVar10 = puVar13[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar10 == 0);
          }
          else {
            uVar14 = 0;
            iVar17 = 0;
          }
          uVar21 = (ulonglong)(-uVar10 & uVar10);
          uVar24 = uVar21 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar11 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (iVar23 <= iVar11) {
            iVar11 = iVar23;
          }
        }
        if (iVar11 < iVar23) {
          uVar10 = 0xffffffff;
          do {
            lVar27 = *(longlong *)(param_1 + 8);
            lVar26 = (longlong)iVar11 * 0x20;
            uVar5 = *(undefined8 *)(lVar27 + 8 + lVar26);
            uVar22 = ((uint)(*(ulonglong *)(lVar27 + lVar26) >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)(lVar27 + lVar26) >> 4)) * -0x7a143595;
            uVar16 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            uVar16 = uVar16 >> 0x10 ^ uVar16;
            uVar22 = (uint)((ulonglong)uVar5 >> 0x10);
            uVar28 = (uint)uVar5 & 0xffff;
            uVar24 = (longlong)
                     (int)((uVar16 >> 2) +
                           ((uint)uVar5 << 0x10 | uVar28) + (int)((ulonglong)uVar5 >> 0x20) +
                           (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar28 >> 4) + uVar16 * 0x40 +
                           0x9e3779b9 ^ uVar16) & (longlong)*(int *)(param_1 + 0x50) - 1U;
            iVar23 = (int)uVar24;
            *(int *)(lVar27 + 0x1c + lVar26) = iVar23;
            lVar12 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar12 = local_c0;
            }
            *(undefined4 *)(lVar27 + 0x18 + lVar26) =
                 *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar24) * 4);
            lVar27 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar27 = local_c0;
            }
            *(int *)(lVar27 + ((longlong)iVar23 & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4) =
                 iVar11;
            uVar10 = ~(uint)uVar21 & uVar10;
            puVar25 = *(uint **)(param_1 + 0x28);
            if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
              puVar25 = local_90;
            }
            iVar23 = *(int *)(param_1 + 0x30);
            iVar11 = (int)uVar14;
            lVar27 = (longlong)iVar11;
            uVar22 = puVar25[lVar27] & uVar10;
            if (uVar22 == 0) {
              iVar18 = iVar23 + 0x1e;
              if (-1 < iVar23 + -1) {
                iVar18 = iVar23 + -1;
              }
              iVar18 = iVar18 >> 5;
              iVar19 = iVar18;
              if (iVar18 < iVar11) {
                iVar19 = iVar11;
              }
              if (iVar18 <= iVar11) break;
              lVar12 = 0;
              while( true ) {
                iVar17 = iVar17 + 0x20;
                uVar22 = puVar25[lVar27 + lVar12 + 1];
                if (uVar22 != 0) break;
                lVar12 = lVar12 + 1;
                if (iVar19 - lVar27 == lVar12) goto LAB_140addb8b;
              }
              uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
            }
            uVar21 = (ulonglong)(-uVar22 & uVar22);
            uVar24 = uVar21 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            iVar11 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          } while (iVar11 < iVar23);
        }
      }
LAB_140addb8b:
      lVar26 = *local_c8 + (longlong)(int)local_a8 * 0x20;
LAB_140addba4:
      puVar25 = (uint *)(lVar26 + 0x10);
      uVar10 = *puVar25;
      if (uVar10 == 0xffffffff) {
        uVar10 = FUN_14086cb32(*param_5);
        *puVar25 = uVar10;
      }
      else if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0x70))) {
        lVar27 = param_1 + 0x58;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar27 = *(longlong *)(param_1 + 0x68);
        }
        bVar15 = (byte)uVar10 & 0x1f;
        puVar13 = (uint *)(lVar27 + (ulonglong)(uVar10 >> 5) * 4);
        *puVar13 = *puVar13 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
        uVar10 = *puVar25;
      }
      puVar3 = (undefined8 *)(local_60 + local_b0 * 0xc);
      local_58 = *(undefined4 *)(param_5 + 1);
      local_50 = local_50 & 0xffffff00;
      uStack_54 = uVar10;
      FUN_140addf02(param_5,&local_4a,&local_58);
      *(uint *)(puVar3 + 1) = local_50;
      *puVar3 = CONCAT44(uStack_54,local_58);
      uVar14 = local_b0 + 1;
    } while (uVar14 != local_78);
  }
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar29 + 3) = (int)plVar29[3] + -1;
    UNLOCK();
    if (local_94 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar29 + 1));
    }
  }
  if (plVar30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar30 + 3) = (int)plVar30[3] + -1;
    UNLOCK();
    if (local_98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar30 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140addf02 FUN_140addf02 body=242 status=ok
// SIG undefined FUN_140addf02(void)

void FUN_140addf02(longlong *param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((*param_3 != -1) && (uVar2 = param_3[1], uVar2 != 0xffffffff)) &&
     ((*(byte *)(param_3 + 2) & 1) == 0)) {
    uVar4 = uVar2 >> 0xd ^ *param_3 - uVar2;
    uVar5 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
    uVar6 = uVar5 >> 0xd ^ (uVar2 - uVar4) - uVar5;
    uVar2 = uVar6 >> 0xc ^ (uVar4 - uVar5) - uVar6;
    uVar7 = uVar2 << 0x10 ^ (uVar5 - uVar6) - uVar2;
    uVar4 = uVar7 >> 5 ^ (uVar6 - uVar2) - uVar7;
    uVar5 = uVar4 >> 3 ^ (uVar2 - uVar7) - uVar4;
    uVar2 = uVar5 << 10 ^ (uVar7 - uVar4) - uVar5;
    plVar3 = (longlong *)FUN_140addff4(*param_1 + 0x60,uVar2 >> 0xf ^ uVar4 - (uVar5 + uVar2));
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1405e07ae(plVar3,iVar1);
    }
    *(undefined2 *)(*plVar3 + (longlong)iVar1 * 2) = *param_2;
  }
  return;
}



// FUNCTION 140addff4 FUN_140addff4 body=130 status=ok
// SIG undefined FUN_140addff4(void)

longlong FUN_140addff4(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140ade078();
  if (lVar1 == 0) {
    local_38 = 0;
    local_30 = param_3;
    FUN_140ade0da(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 140ade078 FUN_140ade078 body=97 status=ok
// SIG undefined FUN_140ade078(void)

int * FUN_140ade078(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while( true ) {
        piVar1 = (int *)(*param_1 + (longlong)iVar3 * 0x28);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar3 * 0x28) == param_3[1])
           ) break;
        iVar3 = piVar1[8];
        if (iVar3 == -1) {
          return (int *)0x0;
        }
      }
      return piVar1;
    }
  }
  return (int *)0x0;
}



// FUNCTION 140ade0da FUN_140ade0da body=842 status=ok
// SIG undefined FUN_140ade0da(void)

int * FUN_140ade0da(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_140549c28(param_1,iVar19);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar8 = iVar17 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar14 = iVar17 + 1;
    iVar20 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar20 = iVar17;
    }
    if (iVar20 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar8 = iVar17;
        }
        else {
          uVar9 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar9) {
              uVar15 = uVar9;
            }
          }
          else {
            uVar15 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar15 << 2,0);
          iVar8 = (int)(uVar16 >> 2);
          iVar14 = -0x20;
          if ((int)uVar9 <= iVar8) {
            iVar14 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar11,iVar8);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar8 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar11;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar8 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar17 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar10 = (longlong)iVar19;
    iVar17 = *(int *)(*param_1 + 4 + lVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar17;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[4];
  }
  iVar17 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar17 = iVar19;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar17 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar19 & 0x1f);
  piVar2 = (int *)(*param_1 + lVar10 * 0x28);
  puVar4 = (undefined8 *)*param_4;
  piVar2[2] = *(int *)(puVar4 + 1);
  *(undefined8 *)piVar2 = *puVar4;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = -1;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar17 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar17 * 0x28);
        if ((*piVar3 == *piVar2) && (*(int *)(*param_1 + 4 + (longlong)iVar17 * 0x28) == piVar2[1]))
        {
          if (*(longlong *)(piVar3 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar17 = *piVar2;
          iVar8 = piVar2[1];
          iVar14 = piVar2[2];
          iVar20 = piVar2[3];
          iVar5 = piVar2[5];
          iVar6 = piVar2[6];
          iVar7 = piVar2[7];
          piVar3[4] = piVar2[4];
          piVar3[5] = iVar5;
          piVar3[6] = iVar6;
          piVar3[7] = iVar7;
          *piVar3 = iVar17;
          piVar3[1] = iVar8;
          piVar3[2] = iVar14;
          piVar3[3] = iVar20;
          FUN_140add4f6(param_1,iVar19);
          cVar12 = '\x01';
          break;
        }
        iVar17 = piVar3[8];
        cVar12 = '\0';
      } while (iVar17 != -1);
      goto LAB_140ade245;
    }
  }
  cVar12 = '\0';
LAB_140ade245:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar12;
  }
  if (cVar12 == '\0') {
    uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar17 = 1;
    if (3 < uVar9) {
      uVar16 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar17 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      piVar2[9] = param_3;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      piVar2[8] = *(int *)((longlong)plVar11 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 9) = iVar17;
      FUN_140ade424(param_1);
    }
  }
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 140ade424 FUN_140ade424 body=781 status=ok
// SIG undefined FUN_140ade424(void)

void FUN_140ade424(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140ade48a;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar9 != uVar2);
LAB_140ade48a:
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar17 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar7) {
      iVar7 = iVar16;
    }
  }
  if (iVar7 < iVar16) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(uint *)(lVar8 + 4 + lVar14 * 0x28);
      uVar15 = uVar2 >> 0xd ^ *(int *)(lVar8 + lVar14 * 0x28) - uVar2;
      uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar2) - uVar15;
      uVar2 = uVar6 >> 0xd ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 0xc ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 0x10 ^ (uVar6 - uVar2) - uVar15;
      uVar2 = uVar6 >> 5 ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 3 ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 10 ^ (uVar6 - uVar2) - uVar15;
      uVar17 = (longlong)(int)(uVar6 >> 0xf ^ uVar2 - (uVar15 + uVar6)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar8 + 0x24 + lVar14 * 0x28) = iVar16;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x20 + lVar14 * 0x28) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar7 = (int)uVar3;
      lVar8 = (longlong)iVar7;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar10 = iVar16 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar17 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar16);
  }
  return;
}



// FUNCTION 140ade738 FUN_140ade738 body=87 status=ok
// SIG undefined FUN_140ade738(void)

undefined1 FUN_140ade738(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) &&
       (lVar1 = FUN_140ade790(lVar1,*(undefined4 *)(param_1 + 0xe0)), lVar1 != 0)) {
      return *(undefined1 *)(lVar1 + 8);
    }
  }
  return 0;
}



// FUNCTION 140ade790 FUN_140ade790 body=110 status=ok
// SIG undefined FUN_140ade790(void)

uint * FUN_140ade790(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar1 = param_1 + 0x210;
    if (*(longlong *)(param_1 + 0x218) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x218);
    }
    uVar4 = *(uint *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x220) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x1d8) + (longlong)(int)uVar4 * 0x24);
        if (*puVar3 == param_2) break;
        uVar4 = puVar3[7];
        puVar3 = (uint *)0x0;
      } while (uVar4 != 0xffffffff);
      goto LAB_140ade7e0;
    }
  }
  puVar3 = (uint *)0x0;
LAB_140ade7e0:
  puVar2 = puVar3 + 1;
  if (puVar3 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 140ade7fe FUN_140ade7fe body=228 status=ok
// SIG undefined FUN_140ade7fe(void)

longlong FUN_140ade7fe(void)

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
  if (DAT_14cbb60a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594c69e;
    local_38 = &LAB_148c659f3;
    local_40 = &LAB_145dd25be;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x248;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewManager",&DAT_14cbb60a0,&DAT_148c659f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb60a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ade8e4 FUN_140ade8e4 body=698 status=ok
// SIG undefined FUN_140ade8e4(void)

longlong FUN_140ade8e4(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x1f0), lVar3 == 0)) goto LAB_140adea28;
  if (DAT_14cb92088 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = &LAB_1417ad04a;
    local_58 = &LAB_14107a1fc;
    local_68 = &LAB_1489f8be7;
    local_70 = FUN_14656bf51;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x38;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,&DAT_1489f8be6);
  }
  lVar5 = DAT_14cb92088;
  if ((DAT_14cb92088 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cb92088 != 0) goto LAB_140ade95f;
LAB_140adeb98:
    lVar4 = 0;
  }
  else {
    FUN_1456cec3c(DAT_14cb92088);
    if (DAT_14cb92088 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = &LAB_1417ad04a;
      local_58 = &LAB_14107a1fc;
      local_68 = &LAB_1489f8be7;
      local_70 = FUN_14656bf51;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x38;
      FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,&DAT_1489f8be6
                   );
      if (DAT_14cb92088 == 0) goto LAB_140adeb98;
    }
LAB_140ade95f:
    if (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cb92088 + 0x38)) goto LAB_140adeb98;
    lVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb92088 + 0x38) * 8) ==
        DAT_14cb92088 + 0x30) {
      lVar4 = lVar5;
    }
  }
  lVar3 = FUN_1448a6f9c(lVar3 + 0x100,lVar4);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
    FUN_1404963c2(lVar3,&local_48,param_1);
    iVar1 = *(int *)(lVar3 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x38);
      iVar2 = (int)local_48;
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar5);
        if (*(int *)(lVar4 + 0xb0) == iVar2) {
          if ((local_40 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_40);
          }
          if (*(longlong *)(lVar4 + 0xb8) == local_40) goto LAB_140ade9f2;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
LAB_140adea28:
  lVar4 = 0;
LAB_140ade9f2:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 140adeba0 thunk_FUN_140adeba6 body=5 status=ok
// SIG undefined thunk_FUN_140adeba6(void)

undefined8 * thunk_FUN_140adeba6(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined8 uStack_56;
  int *piStack_48;
  undefined8 *puStack_40;
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_140adecae();
  if (puVar3 == (undefined8 *)0x0) {
    if ((longlong)*param_2 == -1) {
      uStack_60 = *(undefined8 *)(param_2 + 1);
      piStack_48 = param_2 + 1;
      puStack_40 = &uStack_60;
      uStack_58 = 0xffff;
      uStack_56 = 0;
      FUN_14576d74e(param_1 + 0x98,&iStack_34,&piStack_48,0);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)iStack_34 * 0x24 + 8);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x60);
      lVar5 = (longlong)*param_2 * 0x70;
      lVar4 = lVar2 + lVar5;
      iVar1 = *(int *)(lVar4 + 0x68);
      *(uint *)(lVar4 + 0x68) = iVar1 + 1U;
      if (*(uint *)(lVar4 + 0x6c) < iVar1 + 1U) {
        FUN_14576d640(lVar4 + 0x10,iVar1);
      }
      lVar2 = *(longlong *)(lVar2 + 0x60 + lVar5);
      lVar4 = lVar4 + 0x10;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      puVar3 = (undefined8 *)(lVar4 + (longlong)iVar1 * 0x14);
      *puVar3 = *(undefined8 *)(param_2 + 1);
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *(undefined8 *)((longlong)puVar3 + 10) = 0;
    }
  }
  if ((uStack_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140adeba6 FUN_140adeba6 body=263 status=ok
// SIG undefined FUN_140adeba6(void)

undefined8 * FUN_140adeba6(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_56;
  int *local_48;
  undefined8 *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_140adecae();
  if (puVar3 == (undefined8 *)0x0) {
    if ((longlong)*param_2 == -1) {
      local_60 = *(undefined8 *)(param_2 + 1);
      local_48 = param_2 + 1;
      local_40 = &local_60;
      local_58 = 0xffff;
      local_56 = 0;
      FUN_14576d74e(param_1 + 0x98,&local_34,&local_48,0);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)local_34 * 0x24 + 8);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x60);
      lVar5 = (longlong)*param_2 * 0x70;
      lVar4 = lVar2 + lVar5;
      iVar1 = *(int *)(lVar4 + 0x68);
      *(uint *)(lVar4 + 0x68) = iVar1 + 1U;
      if (*(uint *)(lVar4 + 0x6c) < iVar1 + 1U) {
        FUN_14576d640(lVar4 + 0x10,iVar1);
      }
      lVar2 = *(longlong *)(lVar2 + 0x60 + lVar5);
      lVar4 = lVar4 + 0x10;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      puVar3 = (undefined8 *)(lVar4 + (longlong)iVar1 * 0x14);
      *puVar3 = *(undefined8 *)(param_2 + 1);
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *(undefined8 *)((longlong)puVar3 + 10) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140adecae FUN_140adecae body=207 status=ok
// SIG undefined FUN_140adecae(void)

uint * FUN_140adecae(longlong param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((longlong)*param_2 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)*param_2 * 0x70;
    puVar1 = *(uint **)(lVar3 + 0x60);
    if (*(uint **)(lVar3 + 0x60) == (uint *)0x0) {
      puVar1 = (uint *)(lVar3 + 0x10);
    }
    if ((longlong)*(int *)(lVar3 + 0x68) != 0) {
      lVar3 = (longlong)*(int *)(lVar3 + 0x68) * 0x14;
      do {
        if ((*puVar1 == param_2[1]) && (puVar1[1] == param_2[2])) {
          return puVar1;
        }
        puVar1 = puVar1 + 5;
        lVar3 = lVar3 + -0x14;
      } while (lVar3 != 0);
    }
    return (uint *)0x0;
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (param_2[2] ^ param_2[1]))
                              * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar4 * 0x24);
        if ((*puVar1 == param_2[1]) &&
           (*(uint *)(*(longlong *)(param_1 + 0x98) + 4 + (longlong)(int)uVar4 * 0x24) == param_2[2]
           )) goto LAB_140aded71;
        uVar4 = puVar1[7];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar1 = (uint *)0x0;
LAB_140aded71:
  puVar2 = puVar1 + 2;
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 140aded8c FUN_140aded8c body=31 status=ok
// SIG undefined FUN_140aded8c(void)

undefined8 FUN_140aded8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140adedac FUN_140adedac body=40 status=ok
// SIG undefined FUN_140adedac(void)

undefined8 FUN_140adedac(undefined8 param_1,int param_2)

{
  FUN_140adedd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140adedd4 FUN_140adedd4 body=775 status=ok
// SIG undefined FUN_140adedd4(void)

void FUN_140adedd4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aff4df0;
  FUN_140753a84(param_1[0xdc],*(undefined4 *)(param_1 + 0xdd));
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf0db(param_1[0x9a],*(undefined4 *)(param_1 + 0x9b));
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x92] = &PTR_FUN_14aff4f48;
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(param_1[0x80],*(undefined4 *)(param_1 + 0x81));
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_140653573(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x6f];
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
  param_1[0x6a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (*(int *)((longlong)param_1 + 0x36c) != 0) {
    FUN_140115c12(param_1 + 0x6c,0);
  }
  param_1[0x6b] = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x66] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (*(int *)((longlong)param_1 + 0x34c) != 0) {
    FUN_140115c12(param_1 + 0x68,0);
  }
  param_1[0x67] = 0;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x62];
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
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x33] = &PTR_FUN_14aff4f50;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 140adf0db FUN_140adf0db body=75 status=ok
// SIG undefined FUN_140adf0db(void)

void FUN_140adf0db(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140adf126 FUN_140adf126 body=6 status=ok
// SIG undefined FUN_140adf126(void)

undefined4 * FUN_140adf126(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 140adf12c FUN_140adf12c body=188 status=ok
// SIG undefined FUN_140adf12c(void)

undefined8 * FUN_140adf12c(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == 0) && (plVar2 = *(longlong **)(param_1 + 0x188), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,local_38);
    FUN_140adf1ea(&local_30,local_38);
    *param_2 = local_30;
    param_2[1] = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140adf1ea FUN_140adf1ea body=211 status=ok
// SIG undefined FUN_140adf1ea(void)

undefined8 * FUN_140adf1ea(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  return param_1;
}



// FUNCTION 140adf2be FUN_140adf2be body=167 status=ok
// SIG undefined FUN_140adf2be(void)

undefined8 * FUN_140adf2be(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b8f9b10;
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x8f8;
  do {
    FUN_140adf6d2(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x8b8);
  lVar1 = 0x8b8;
  do {
    FUN_1405b087a(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x878);
  FUN_140adf366(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140adf366 FUN_140adf366 body=876 status=ok
// SIG undefined FUN_140adf366(void)

void FUN_140adf366(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b493b00;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0xffffffffffffffff;
  if ((param_1[0xfa] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xfa] + 0x50));
  }
  FUN_1405b08b0(param_1[0xe9],*(undefined4 *)(param_1 + 0xea));
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf824(param_1 + 0x93);
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x8a],*(undefined4 *)(param_1 + 0x8b));
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x88],*(undefined4 *)(param_1 + 0x89));
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x86],*(undefined4 *)(param_1 + 0x87));
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x84],*(undefined4 *)(param_1 + 0x85));
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x80],*(undefined4 *)(param_1 + 0x81));
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf6d2(param_1[0x7c],*(undefined4 *)(param_1 + 0x7d));
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x78],*(undefined4 *)(param_1 + 0x79));
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x70],*(undefined4 *)(param_1 + 0x71));
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x6e],*(undefined4 *)(param_1 + 0x6f));
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x6c],*(undefined4 *)(param_1 + 0x6d));
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_140adf85c(param_1 + 0x60);
  FUN_14060fc84(param_1);
  return;
}



// FUNCTION 140adf6d2 FUN_140adf6d2 body=56 status=ok
// SIG undefined FUN_140adf6d2(void)

void FUN_140adf6d2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140adf70a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140adf70a FUN_140adf70a body=281 status=ok
// SIG undefined FUN_140adf70a(void)

void FUN_140adf70a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
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
      plVar3 = (longlong *)plVar4[-2];
      if (plVar3 != (longlong *)0x0) {
        *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
        if ((int)plVar3[0x26] < 1) {
          FUN_1400847bc(plVar3 + 0x17,0);
          if ((int)plVar3[0x21] == 0) {
            FUN_140087e46(plVar3);
            if (*plVar3 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140adf75d;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
            }
          }
        }
LAB_140adf75d:
        plVar4[-2] = 0;
      }
      if ((plVar4[-4] != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(plVar4[-4] + 0x50));
      }
      if ((plVar4[-5] != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(plVar4[-5] + 0x50));
      }
      plVar4 = plVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140adf824 FUN_140adf824 body=55 status=ok
// SIG undefined FUN_140adf824(void)

void FUN_140adf824(longlong *param_1)

{
  FUN_140adf894(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140adf85c FUN_140adf85c body=55 status=ok
// SIG undefined FUN_140adf85c(void)

void FUN_140adf85c(longlong *param_1)

{
  FUN_140adfa0c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140adf894 FUN_140adf894 body=373 status=ok
// SIG undefined FUN_140adf894(void)

void FUN_140adf894(longlong *param_1,int param_2)

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
      FUN_144a61ac8(*local_70 + (longlong)iStack_54 * 0x18 + 8);
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
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 140adfa0c FUN_140adfa0c body=526 status=ok
// SIG undefined FUN_140adfa0c(void)

void FUN_140adfa0c(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = puVar1;
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140adfb6c;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 < iVar3) {
    uVar13 = 0xffffffff;
    bVar4 = DAT_14cb26569;
    do {
      lVar12 = *(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20);
      if ((lVar12 != 0) && ((bVar4 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar12 + 0x50));
        iVar3 = (int)param_1[5];
        bVar4 = DAT_14cb26569;
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = puVar1;
      }
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar5[lVar12] & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar7 = puVar5[lVar12 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar12 == lVar11) goto LAB_140adfb6c;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar3);
  }
LAB_140adfb6c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar7 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar7 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar7;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140adfc1c FUN_140adfc1c body=40 status=ok
// SIG undefined FUN_140adfc1c(void)

undefined8 FUN_140adfc1c(undefined8 param_1,int param_2)

{
  FUN_140adfc44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140adfc44 FUN_140adfc44 body=864 status=ok
// SIG undefined FUN_140adfc44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140adfc44(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b334210;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  FUN_140adffd8(param_1 + 0xf0);
  FUN_140adf0db(param_1[0xea],*(undefined4 *)(param_1 + 0xeb));
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe2] = &PTR_FUN_14aff4f48;
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xdc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xdf)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xdf)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0xc4] = &PTR_FUN_14aff4f50;
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xbe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xc2) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xc1)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xc1)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7b] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (*(int *)((longlong)param_1 + 0x3f4) != 0) {
    FUN_140115c12(param_1 + 0x7d,0);
  }
  param_1[0x7c] = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140adffa4(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140adfed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140adffa4 FUN_140adffa4 body=51 status=ok
// SIG undefined FUN_140adffa4(void)

void FUN_140adffa4(longlong param_1,int param_2)

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



// FUNCTION 140adffd8 FUN_140adffd8 body=55 status=ok
// SIG undefined FUN_140adffd8(void)

void FUN_140adffd8(longlong *param_1)

{
  FUN_140ae0010(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ae0010 FUN_140ae0010 body=123 status=ok
// SIG undefined FUN_140ae0010(void)

void FUN_140ae0010(longlong param_1,int param_2)

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



// FUNCTION 140ae008c FUN_140ae008c body=2196 status=ok
// SIG undefined FUN_140ae008c(void)

void FUN_140ae008c(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ushort *puVar17;
  bool bVar18;
  char cVar19;
  undefined8 uVar20;
  wchar_t *_Str;
  size_t sVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStack_258 [32];
  uint *local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 local_221;
  uint local_220;
  undefined1 local_219;
  PSRWLOCK local_218;
  int local_210;
  undefined1 *local_208;
  longlong *local_200;
  longlong *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  longlong local_1e0 [32];
  undefined1 local_e0 [128];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  iVar23 = DAT_14c9647dc;
  lVar16 = DAT_14c9647c8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar15 = *(longlong *)(param_1 + 0x288);
  if (((lVar15 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x80) == 0)) ||
     (*(int *)(param_1 + 0x208) == 0)) goto LAB_140ae038b;
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar1 = (uint *)(param_1 + 0x30);
    uVar4 = *puVar1;
    if (((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
       ((plVar25 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar25 != (longlong *)0x0 &&
        (((int)plVar25[2] == *(int *)(param_1 + 0x34) &&
         ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)))))) {
      lVar26 = *plVar25;
      *(longlong *)(param_1 + 0x298) = lVar26;
      if ((lVar26 == 0) ||
         (((((*(int *)(lVar26 + 0x388) == 0 || (uVar4 = *(uint *)(lVar26 + 900), (int)uVar4 < 0)) ||
            (iVar23 <= (int)uVar4)) ||
           ((plVar25 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(lVar16 + (ulonglong)(uVar4 >> 0x10) * 8)),
            plVar25 == (longlong *)0x0 || ((int)plVar25[2] != *(int *)(lVar26 + 0x388))))) ||
          (((*(uint *)(plVar25 + 1) & 0x10200000) != 0 || (*plVar25 == 0)))))) goto LAB_140ae038b;
      FUN_1448d5e3c(&local_200,param_1 + 0x208);
      lVar16 = local_200[0x54];
      AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x68));
      plVar25 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1f8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar25 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
      }
      if (*(int *)(lVar15 + 0xbc) != *(int *)(lVar16 + 0x44)) {
        *(undefined1 *)(lVar15 + 0xb8) = *(undefined1 *)(lVar16 + 0x40);
        *(undefined4 *)(lVar15 + 0xbc) = *(undefined4 *)(lVar16 + 0x44);
        puVar17 = *(ushort **)(lVar15 + 0x80);
        if (puVar17 != (ushort *)0x0) {
          *puVar17 = *puVar17 | (ushort)(1L << (*(byte *)(lVar15 + 0x78) & 0x3f));
        }
      }
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae0522:
        uVar20 = 0;
      }
      else {
        uVar4 = *puVar1;
        uVar20 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar22 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar22 == (undefined8 *)0x0) ||
             ((*(int *)(puVar22 + 2) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)))) goto LAB_140ae0522;
          uVar20 = *puVar22;
        }
      }
      cVar19 = FUN_140ae0922(uVar20);
      if (*(char *)(lVar15 + 0x158) == cVar19) {
        FUN_1448d5e3c(&local_200);
        puVar27 = (undefined1 *)local_200[0x44];
        local_218 = (PSRWLOCK)(puVar27 + 0x1b8);
        local_210 = 0;
        AcquireSRWLockShared(local_218);
        plVar25 = local_1f8;
        local_208 = puVar27;
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_1f8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_1f8)(local_1f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar25 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
          }
        }
        puVar27 = local_208;
        iVar23 = *(int *)(lVar15 + 0xb4);
        iVar5 = *(int *)(local_208 + 0x9c);
        if (iVar23 != iVar5) {
          *(undefined4 *)(lVar15 + 0xb0) = *(undefined4 *)(local_208 + 0x98);
          *(undefined4 *)(lVar15 + 0xb4) = *(undefined4 *)(local_208 + 0x9c);
        }
        iVar24 = *(int *)(lVar15 + 0x16c);
        if (*(char *)(lVar15 + 0x168) == local_208[0x88]) {
          bVar18 = false;
          bVar30 = iVar24 == 0;
          iVar24 = 0;
          if (bVar30) goto LAB_140ae082d;
        }
        else {
LAB_140ae082d:
          *(undefined1 *)(lVar15 + 0x168) = local_208[0x88];
          *(int *)(lVar15 + 0x16c) = iVar24 + 1;
          bVar18 = true;
        }
        iVar24 = *(int *)(lVar15 + 0x174);
        if (*(char *)(lVar15 + 0x170) == local_208[0x90]) {
          bVar30 = false;
          bVar31 = iVar24 == 0;
          iVar24 = 0;
          if (bVar31) goto LAB_140ae06c8;
        }
        else {
LAB_140ae06c8:
          *(undefined1 *)(lVar15 + 0x170) = local_208[0x90];
          *(int *)(lVar15 + 0x174) = iVar24 + 1;
          bVar30 = true;
        }
        if (*(int *)(lVar15 + 0x164) == *(int *)(local_208 + 0xac)) {
          if ((iVar23 != iVar5) || (bVar18 || bVar30)) goto LAB_140ae06fb;
        }
        else {
          *(undefined1 *)(lVar15 + 0x160) = local_208[0xa8];
          *(undefined4 *)(lVar15 + 0x164) = *(undefined4 *)(local_208 + 0xac);
LAB_140ae06fb:
          uVar20 = FUN_14479d2ce(puVar1);
          local_219 = *(undefined1 *)(lVar15 + 0x170);
          local_220 = (uint)*(byte *)(lVar15 + 0x168);
          local_221 = *(undefined1 *)(lVar15 + 0x160);
          local_228 = *(undefined4 *)(lVar15 + 0xb0);
          local_200 = local_1e0;
          local_1e8 = '\0';
          local_1f0 = local_e0;
          local_1f8 = local_200;
          _Str = (wchar_t *)FUN_140c7f682(param_1,L"AmmoRegenChanged",&local_200);
          local_60 = 0;
          if (_Str == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar21 = wcslen(_Str);
            FUN_1446fe5a4(local_e0,_Str,sVar21 & 0xffffffff,1);
          }
          local_230 = &local_219;
          local_238 = &local_220;
          FUN_14576e2b8(uVar20,local_58,&local_228,&local_221);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_1e8 == '\x01') {
            FUN_1400020a8(local_200);
          }
        }
        if (*(int *)(param_1 + 0x2a4) != *(int *)(puVar27 + 0x1b0)) {
          *(int *)(param_1 + 0x2a4) = *(int *)(puVar27 + 0x1b0);
          cVar19 = *(char *)(param_1 + 0x2a2);
          iVar23 = *(int *)(lVar15 + 0xc4);
          iVar5 = *(int *)(puVar27 + 4);
          if (iVar23 != iVar5) {
            *(undefined1 *)(lVar15 + 0xc0) = *puVar27;
            *(undefined4 *)(lVar15 + 0xc4) = *(undefined4 *)(puVar27 + 4);
          }
          iVar24 = *(int *)(lVar15 + 0x1dc);
          iVar6 = *(int *)(puVar27 + 0xc4);
          if (iVar24 != iVar6) {
            *(undefined1 *)(lVar15 + 0x1d8) = puVar27[0xc0];
            *(undefined4 *)(lVar15 + 0x1dc) = *(undefined4 *)(puVar27 + 0xc4);
          }
          iVar7 = *(int *)(lVar15 + 0xe4);
          iVar8 = *(int *)(puVar27 + 0x2c);
          if (iVar7 != iVar8) {
            *(undefined1 *)(lVar15 + 0xe0) = puVar27[0x28];
            *(undefined4 *)(lVar15 + 0xe4) = *(undefined4 *)(puVar27 + 0x2c);
          }
          iVar9 = *(int *)(lVar15 + 0xf4);
          iVar10 = *(int *)(puVar27 + 0x3c);
          if (iVar9 != iVar10) {
            *(undefined1 *)(lVar15 + 0xf0) = puVar27[0x38];
            *(undefined4 *)(lVar15 + 0xf4) = *(undefined4 *)(puVar27 + 0x3c);
          }
          iVar11 = *(int *)(lVar15 + 0xcc);
          iVar12 = *(int *)(puVar27 + 0xc);
          if (iVar11 != iVar12) {
            *(undefined1 *)(lVar15 + 200) = puVar27[8];
            *(undefined4 *)(lVar15 + 0xcc) = *(undefined4 *)(puVar27 + 0xc);
          }
          iVar13 = *(int *)(lVar15 + 0xd4);
          iVar14 = *(int *)(puVar27 + 0x14);
          if (iVar13 != iVar14) {
            *(undefined1 *)(lVar15 + 0xd0) = puVar27[0x10];
            *(undefined4 *)(lVar15 + 0xd4) = *(undefined4 *)(puVar27 + 0x14);
          }
          if ((((((cVar19 == '\0' && iVar23 == iVar5) && iVar24 == iVar6) && iVar7 == iVar8) &&
               iVar9 == iVar10) && iVar11 == iVar12) && iVar13 == iVar14) {
            FUN_140ae12a6(param_1,lVar15,&local_218,1);
            FUN_140ae0d3c(param_1,lVar15,&local_218,1);
            FUN_140ae1dc6(param_1,lVar15,&local_218,1);
            FUN_140ae0af6(param_1,lVar15,&local_218,1);
            if (0 < *(int *)(local_208 + 400)) {
              lVar26 = 0;
              uVar28 = 0;
              puVar27 = local_208;
              do {
                if ((longlong)uVar28 < (longlong)*(int *)(lVar15 + 0x2b0)) {
                  lVar29 = *(longlong *)(puVar27 + 0x188);
                  cVar19 = FUN_140ae09f8(*(longlong *)(lVar15 + 0x2a8) + lVar26,lVar29 + lVar26);
                  if (cVar19 != '\0') goto LAB_140ae08d6;
                }
                else {
                  lVar29 = *(longlong *)(puVar27 + 0x188);
LAB_140ae08d6:
                  local_238 = (uint *)CONCAT71(local_238._1_7_,1);
                  FUN_14576df7c(param_1,lVar15,lVar29 + lVar26,uVar28 & 0xffffffff);
                  puVar27 = local_208;
                }
                uVar28 = uVar28 + 1;
                lVar26 = lVar26 + 0x120;
              } while ((longlong)uVar28 < (longlong)*(int *)(puVar27 + 400));
            }
          }
          else {
            if (*(int *)(lVar15 + 0x144) != *(int *)(puVar27 + 0x7c)) {
              *(undefined1 *)(lVar15 + 0x140) = puVar27[0x78];
              *(undefined4 *)(lVar15 + 0x144) = *(undefined4 *)(puVar27 + 0x7c);
            }
            FUN_140ae12a6(param_1,lVar15,&local_218,0);
            FUN_140ae0d3c(param_1,lVar15,&local_218,0);
            FUN_140ae1dc6(param_1,lVar15,&local_218,0);
            FUN_140ae0af6(param_1,lVar15,&local_218,0);
            iVar23 = *(int *)(puVar27 + 400);
            if (0 < iVar23) {
              lVar26 = 0;
              uVar28 = 0;
              do {
                lVar29 = *(longlong *)(puVar27 + 0x188);
                if (((longlong)*(int *)(lVar15 + 0x2b0) <= (longlong)uVar28) ||
                   (cVar19 = FUN_140ae09f8(*(longlong *)(lVar15 + 0x2a8) + lVar26,lVar29 + lVar26),
                   cVar19 != '\0')) {
                  local_238 = (uint *)((ulonglong)local_238 & 0xffffffffffffff00);
                  FUN_14576df7c(param_1,lVar15,lVar29 + lVar26,uVar28 & 0xffffffff);
                  iVar23 = *(int *)(puVar27 + 400);
                }
                uVar28 = uVar28 + 1;
                lVar26 = lVar26 + 0x120;
              } while ((longlong)uVar28 < (longlong)iVar23);
            }
            puVar17 = *(ushort **)(lVar15 + 0x80);
            if (puVar17 != (ushort *)0x0) {
              *puVar17 = *puVar17 | (ushort)(1L << (*(byte *)(lVar15 + 0x78) & 0x3f));
            }
            *(undefined1 *)(param_1 + 0x2a2) = 0;
          }
        }
        if (local_210 == 0) {
          ReleaseSRWLockShared(local_218);
        }
        else {
          ReleaseSRWLockExclusive(local_218);
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x68));
      goto LAB_140ae038b;
    }
  }
  *(undefined8 *)(param_1 + 0x298) = 0;
LAB_140ae038b:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ae0922 FUN_140ae0922 body=214 status=ok
// SIG undefined FUN_140ae0922(void)

byte FUN_140ae0922(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 != 0) {
    if (((((*(longlong *)(lVar3 + 0x30) != 0) &&
          (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar4 != 0)) &&
         (*(longlong *)(lVar4 + 0x588) != 0)) &&
        (*(double *)(lVar3 + 0x708) <= *(double *)(lVar3 + 0x6d0))) ||
       (((*(byte *)(lVar3 + 0x154) & 0x40) != 0 && (iVar2 = FUN_14490d72a(lVar3), iVar2 == 3)))) {
      return 1;
    }
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
        if (*(longlong *)(lVar1 + 0x360) == lVar3) {
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) {
            return 1;
          }
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    }
    if (*(char *)(lVar3 + 0x152) == '\x03') {
      return *(byte *)(lVar3 + 0x155) >> 7;
    }
  }
  return 0;
}



// FUNCTION 140ae09f8 FUN_140ae09f8 body=254 status=ok
// SIG undefined FUN_140ae09f8(void)

byte FUN_140ae09f8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (*(int *)(param_2 + 4) != *(int *)(param_1 + 4)) {
    return 1;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == *(int *)(param_1 + 0x10)) {
    if (1 < iVar2) {
      lVar8 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*(longlong *)(param_2 + 8) + lVar8);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 8) + lVar8);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_140ae0a6d;
LAB_140ae0a47:
        lVar8 = lVar8 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_140ae0a47;
      }
      if (uVar3 != uVar5) {
        return 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) + iVar2 != 1) {
    return 1;
  }
LAB_140ae0a6d:
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 == *(int *)(param_1 + 0x28)) {
    if (iVar2 < 2) {
      bVar9 = true;
      goto LAB_140ae0ad4;
    }
    lVar8 = 0;
    while( true ) {
      uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x20) + lVar8);
      uVar1 = (uint)uVar3;
      uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar8);
      uVar7 = (uint)uVar5;
      if (uVar3 != uVar5) {
        if ((uVar5 | uVar3) < 0x80) {
          uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar5]) goto LAB_140ae0aa4;
        }
        iVar2 = uVar1 - uVar7;
        goto LAB_140ae0ad1;
      }
      if (uVar3 == 0) break;
LAB_140ae0aa4:
      lVar8 = lVar8 + 2;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28) + iVar2 + -1;
  }
LAB_140ae0ad1:
  bVar9 = iVar2 == 0;
LAB_140ae0ad4:
  return bVar9 ^ 1;
}



// FUNCTION 140ae0af6 FUN_140ae0af6 body=581 status=ok
// SIG undefined FUN_140ae0af6(void)

void FUN_140ae0af6(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  wchar_t *_Str;
  size_t sVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_218 [40];
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar9 != (longlong *)0x0) &&
         (((int)plVar9[2] == *(int *)(param_1 + 0x34) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)
          ))) {
        lVar8 = *plVar9;
        *(longlong *)(param_1 + 0x298) = lVar8;
        if (lVar8 != 0) {
          lVar3 = *(longlong *)(param_3 + 0x10);
          bVar4 = false;
          if (*(int *)(param_2 + 0x244) != *(int *)(lVar3 + 0x124)) {
            *(undefined4 *)(param_2 + 0x240) = *(undefined4 *)(lVar3 + 0x120);
            *(undefined4 *)(param_2 + 0x244) = *(undefined4 *)(lVar3 + 0x124);
            bVar4 = *(float *)(*(longlong *)(param_3 + 0x10) + 0x120) != 0.0;
            lVar8 = *(longlong *)(param_1 + 0x298);
          }
          uVar5 = FUN_140ae0922(lVar8);
          iVar2 = *(int *)(param_2 + 0x15c);
          if (iVar2 != 0) {
            *(undefined1 *)(param_2 + 0x158) = uVar5;
            *(undefined4 *)(param_2 + 0x15c) = 0;
          }
          if ((param_4 != '\0') && (bVar4 || iVar2 != 0)) {
            uVar6 = FUN_14479d2ce((uint *)(param_1 + 0x30));
            local_1e9 = *(undefined1 *)(param_2 + 0x158);
            local_1f0 = *(undefined4 *)(param_2 + 0x240);
            local_1e8 = local_1c8;
            local_1d0 = '\0';
            local_1d8 = local_c8;
            local_1e0 = local_1e8;
            _Str = (wchar_t *)FUN_140c7f682(param_1,L"TimerDurationChanged",&local_1e8);
            local_48 = 0;
            if (_Str == (wchar_t *)0x0) {
              local_40 = 0;
              local_38 = 0;
            }
            else {
              sVar7 = wcslen(_Str);
              FUN_1446fe5a4(local_c8,_Str,sVar7 & 0xffffffff,1);
            }
            FUN_148e7b694(uVar6,local_40,&local_1f0,&local_1e9);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            if (local_1d0 == '\x01') {
              FUN_1400020a8(local_1e8);
            }
          }
        }
        goto LAB_140ae0bc4;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x298) = 0;
LAB_140ae0bc4:
  if ((local_30 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae0d3c FUN_140ae0d3c body=1287 status=ok
// SIG undefined FUN_140ae0d3c(void)

void FUN_140ae0d3c(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  byte bVar10;
  undefined8 uVar11;
  wchar_t *_Str;
  size_t sVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  void **local_270;
  undefined1 *local_268;
  byte local_25a;
  char local_259;
  longlong local_258;
  uint *local_250;
  longlong *local_248;
  longlong *local_240;
  undefined4 local_238;
  void *local_230;
  int local_228;
  undefined4 local_224;
  undefined1 local_219;
  void *local_218;
  int local_210;
  undefined4 local_20c;
  undefined1 local_201;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  undefined1 local_1e0 [256];
  undefined1 local_e0 [128];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_250 = (uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *local_250;
    uVar11 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140ae0dcd;
    puVar13 = (undefined8 *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar13 != (undefined8 *)0x0) &&
       ((*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))) {
      uVar11 = *puVar13;
      goto LAB_140ae0dcd;
    }
  }
  uVar11 = 0;
LAB_140ae0dcd:
  *(undefined8 *)(param_1 + 0x298) = uVar11;
  local_248 = (longlong *)(param_2 + 0x248);
  local_259 = param_4;
  local_258 = param_1;
  bVar10 = FUN_140ae1244(local_248,*(longlong *)(param_3 + 0x10) + 0x170);
  lVar14 = *(longlong *)(param_3 + 0x10);
  iVar2 = *(int *)(param_2 + 0x1a0);
  iVar3 = *(int *)(lVar14 + 0x138);
  if (iVar2 != iVar3) {
    FUN_144a787a6(param_2 + 400,lVar14 + 0x128);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(lVar14 + 0x138);
    lVar14 = *(longlong *)(param_3 + 0x10);
  }
  local_25a = iVar2 != iVar3;
  iVar2 = *(int *)(param_2 + 0x114);
  iVar3 = *(int *)(lVar14 + 0x5c);
  if (iVar2 != iVar3) {
    *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(lVar14 + 0x58);
    *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(lVar14 + 0x5c);
    lVar14 = *(longlong *)(param_3 + 0x10);
  }
  iVar4 = *(int *)(param_2 + 0x1d0);
  iVar5 = *(int *)(lVar14 + 0x150);
  if (iVar4 != iVar5) {
    FUN_144a787a6(param_2 + 0x1c0,lVar14 + 0x140);
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(lVar14 + 0x150);
    lVar14 = *(longlong *)(param_3 + 0x10);
  }
  iVar6 = *(int *)(param_2 + 0x164);
  iVar7 = *(int *)(lVar14 + 0xac);
  if (iVar6 != iVar7) {
    *(undefined1 *)(param_2 + 0x160) = *(undefined1 *)(lVar14 + 0xa8);
    *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(lVar14 + 0xac);
  }
  iVar8 = *(int *)(param_2 + 0x198);
  pvVar9 = *(void **)(param_2 + 400);
  *(int *)(param_2 + 0x180) = iVar8;
  if (iVar8 == 0 && *(int *)(param_2 + 0x184) == 0) {
    *(undefined4 *)(param_2 + 0x184) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x178),iVar8);
    if (iVar8 != 0) {
      memcpy(*(void **)(param_2 + 0x178),pvVar9,(longlong)iVar8 * 2);
    }
  }
  *(undefined1 *)(param_2 + 0x188) = 1;
  iVar8 = *(int *)(param_2 + 0x1c8);
  pvVar9 = *(void **)(param_2 + 0x1c0);
  *(int *)(param_2 + 0x1b0) = iVar8;
  if (iVar8 == 0 && *(int *)(param_2 + 0x1b4) == 0) {
    *(undefined4 *)(param_2 + 0x1b4) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x1a8),iVar8);
    if (iVar8 != 0) {
      memcpy(*(void **)(param_2 + 0x1a8),pvVar9,(longlong)iVar8 * 2);
    }
  }
  *(undefined1 *)(param_2 + 0x1b8) = 1;
  if ((local_259 != '\0') &&
     ((byte)(bVar10 | local_25a | iVar2 != iVar3 | iVar4 != iVar5 | iVar6 != iVar7) == 1 &&
      *(longlong *)(local_258 + 0x298) != 0)) {
    uVar11 = FUN_14479d2ce(local_250);
    local_201 = *(undefined1 *)(param_2 + 0x160);
    local_218 = (void *)0x0;
    local_210 = *(int *)(param_2 + 0x1c8);
    lVar14 = (longlong)local_210;
    pvVar9 = *(void **)(param_2 + 0x1c0);
    if (lVar14 == 0) {
      local_20c = 0;
    }
    else {
      FUN_1446dd670(&local_218,local_210,0);
      memcpy(local_218,pvVar9,lVar14 * 2);
    }
    local_219 = *(undefined1 *)(param_2 + 0x110);
    local_230 = (void *)0x0;
    local_228 = *(int *)(param_2 + 0x198);
    lVar14 = (longlong)local_228;
    pvVar9 = *(void **)(param_2 + 400);
    if (lVar14 == 0) {
      local_224 = 0;
    }
    else {
      FUN_1446dd670(&local_230,local_228,0);
      memcpy(local_230,pvVar9,lVar14 * 2);
    }
    local_240 = (longlong *)*local_248;
    if (local_240 != (longlong *)0x0) {
      (**(code **)(*local_240 + 8))();
    }
    local_238 = *(undefined4 *)(param_2 + 0x250);
    local_200 = local_1e0;
    local_1e8 = '\0';
    local_1f0 = local_e0;
    local_1f8 = local_200;
    _Str = (wchar_t *)FUN_140c7f682(local_258,L"WeaponModesChanged",&local_200);
    local_60 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = 0;
      local_50 = 0;
    }
    else {
      sVar12 = wcslen(_Str);
      FUN_1446fe5a4(local_e0,_Str,sVar12 & 0xffffffff,1);
    }
    local_268 = &local_201;
    local_270 = &local_218;
    local_278 = &local_219;
    FUN_148e7b418(uVar11,local_58,&local_240,&local_230);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_1e8 == '\x01') {
      FUN_1400020a8(local_200);
    }
    if (local_240 != (longlong *)0x0) {
      (**(code **)(*local_240 + 0x10))();
    }
    if (local_230 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_218 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae1244 FUN_140ae1244 body=98 status=ok
// SIG undefined FUN_140ae1244(void)

bool FUN_140ae1244(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[2];
  lVar4 = param_2[2];
  if ((int)lVar3 != (int)lVar4) {
    plVar1 = (longlong *)*param_2;
    plVar2 = (longlong *)*param_1;
    if (plVar2 != plVar1) {
      *param_1 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  return (int)lVar3 != (int)lVar4;
}



// FUNCTION 140ae12a6 FUN_140ae12a6 body=2847 status=ok
// SIG undefined FUN_140ae12a6(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000140ae1c69 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_140ae12a6(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  char cVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined1 uVar24;
  code *pcVar25;
  char *pcVar26;
  undefined1 auStack_3c8 [45];
  char local_39b;
  undefined1 local_39a;
  undefined1 local_399;
  undefined4 local_398;
  int local_394;
  longlong local_390;
  longlong local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined2 local_368;
  longlong *local_360;
  longlong *local_358;
  char *local_350;
  char local_348;
  longlong local_340 [32];
  char local_240 [128];
  char *local_1c0;
  char *local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae1cee:
    uVar18 = 0;
  }
  else {
    uVar23 = *(uint *)(param_1 + 0x30);
    uVar18 = 0;
    if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
      puVar19 = (undefined8 *)
                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
      if ((puVar19 == (undefined8 *)0x0) ||
         ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_140ae1cee;
      uVar18 = *puVar19;
    }
  }
  *(undefined8 *)(param_1 + 0x298) = uVar18;
  lVar13 = *(longlong *)(param_3 + 0x10);
  iVar3 = *(int *)(param_2 + 0x1e8);
  iVar4 = *(int *)(lVar13 + 0xd8);
  if (iVar3 != iVar4) {
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(lVar13 + 0xd0);
    *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(lVar13 + 0xd8);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  iVar5 = *(int *)(param_2 + 700);
  iVar6 = *(int *)(lVar13 + 0xcc);
  if (iVar5 != iVar6) {
    *(undefined4 *)(param_2 + 0x2b8) = *(undefined4 *)(lVar13 + 200);
    *(undefined4 *)(param_2 + 700) = *(undefined4 *)(lVar13 + 0xcc);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  iVar7 = *(int *)(param_2 + 0xdc);
  iVar8 = *(int *)(lVar13 + 0x1c);
  if (iVar7 != iVar8) {
    *(undefined1 *)(param_2 + 0xd8) = *(undefined1 *)(lVar13 + 0x18);
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(lVar13 + 0x1c);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  iVar9 = *(int *)(param_2 + 0xd4);
  iVar10 = *(int *)(lVar13 + 0x14);
  if (iVar9 != iVar10) {
    *(undefined1 *)(param_2 + 0xd0) = *(undefined1 *)(lVar13 + 0x10);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(lVar13 + 0x14);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  iVar11 = *(int *)(param_2 + 0xf4);
  iVar12 = *(int *)(lVar13 + 0x3c);
  if (iVar11 != iVar12) {
    *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(lVar13 + 0x38);
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(lVar13 + 0x3c);
  }
  if (((param_4 != '\0') &&
      (!(bool)(~(((iVar3 != iVar4 || iVar5 != iVar6) || iVar7 != iVar8) || iVar9 != iVar10) &
              iVar11 == iVar12))) && (*(longlong *)(param_1 + 0x298) != 0)) {
    if (((*(byte *)(param_1 + 0x8c) & 0x80) == 0) &&
       (*(char *)(*(longlong *)(param_3 + 0x10) + 0x10) == '\x01')) {
      FUN_1410ea50c(param_1);
      *(undefined1 *)(param_1 + 0x2a2) = 1;
      FUN_145899dd6(param_1);
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae1d11:
      lVar13 = 0;
    }
    else {
      uVar23 = *(uint *)(param_1 + 0x30);
      lVar13 = 0;
      if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
        plVar20 = (longlong *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
        if ((plVar20 == (longlong *)0x0) ||
           (((int)plVar20[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_140ae1d11;
        lVar13 = *plVar20;
      }
    }
    uVar22 = *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x10);
    local_394 = (int)*(float *)(param_2 + 0x2b8);
    uVar24 = *(undefined1 *)(param_2 + 0xd8);
    local_398 = *(undefined4 *)(param_2 + 0x1e0);
    local_360 = local_340;
    local_348 = '\0';
    local_350 = local_240;
    local_358 = local_360;
    pwVar14 = (wchar_t *)FUN_140c7f682(param_1,L"LoadedAmmoChanged",&local_360);
    local_1c0 = (char *)0x0;
    local_39b = param_4;
    if (pwVar14 == (wchar_t *)0x0) {
      local_1b8 = (char *)0x0;
      local_1b0 = 0;
      puVar19 = (undefined8 *)(lVar13 + 0x30);
LAB_140ae1618:
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
    }
    else {
      local_39a = uVar24;
      local_399 = uVar22;
      local_390 = lVar13;
      sVar15 = wcslen(pwVar14);
      local_1b0 = FUN_14475aa65(0,pwVar14,sVar15 & 0xffffffff);
      uVar23 = local_1b0 + 1;
      local_1b8 = (char *)0x0;
      if (0x80 < uVar23) {
        FUN_1446efa72(&local_1c0,0,uVar23,1);
        local_1b8 = local_1c0;
      }
      if (local_1b8 == (char *)0x0) {
        local_1b8 = local_240;
      }
      FUN_14475a98a(local_1b8,uVar23,pwVar14,(int)sVar15 + 1);
      pcVar26 = local_1b8;
      puVar19 = (undefined8 *)(local_390 + 0x30);
      local_a8 = 0;
      uVar22 = local_399;
      uVar24 = local_39a;
      if (local_1b8 == (char *)0x0) goto LAB_140ae1618;
      sVar15 = strlen(local_1b8);
      FUN_1446e6fe8(&local_1a8,pcVar26,sVar15 & 0xffffffff,1);
      uVar22 = local_399;
      uVar24 = local_39a;
    }
    FUN_140056680(&local_388,local_a0);
    local_378 = (longlong *)CONCAT44(local_398,local_394);
    local_370._0_2_ = CONCAT11(uVar22,uVar24);
    pcVar25 = (code *)0x0;
    local_88 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar16 = &PTR_FUN_14b9c53f0;
    plVar20 = puVar16 + 1;
    *plVar20 = local_388;
    local_388 = 0;
    *(undefined4 *)(puVar16 + 2) = (undefined4)local_380;
    *(undefined4 *)((longlong)puVar16 + 0x14) = local_380._4_4_;
    local_380 = 0;
    *(undefined2 *)(puVar16 + 4) = (undefined2)local_370;
    puVar16[3] = local_378;
    if (plVar20 != (longlong *)0x0) {
      pcVar25 = FUN_1418fcace;
      local_88 = FUN_1418fcace;
    }
    puVar17 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    param_4 = local_39b;
    *puVar17 = 0;
    puVar17[2] = pcVar25;
    puVar17[4] = puVar16;
    local_78 = 0;
    *(undefined4 *)(puVar17 + 8) = local_58;
    *(undefined4 *)((longlong)puVar17 + 0x44) = uStack_54;
    *(undefined4 *)(puVar17 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar17 + 6) = local_68;
    *(undefined4 *)((longlong)puVar17 + 0x34) = uStack_64;
    *(undefined4 *)(puVar17 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_5c;
    if (plVar20 != (longlong *)0x0) {
      local_88 = (code *)0x0;
    }
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      puVar16 = (undefined8 *)*puVar19;
      *puVar19 = puVar17;
      UNLOCK();
      LOCK();
      *puVar16 = puVar17;
      UNLOCK();
      if (local_88 != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
      }
    }
    if (local_388 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 != (char *)0x0) {
      FUN_1400020a8();
    }
    if (local_348 == '\x01') {
      FUN_1400020a8(local_360);
    }
  }
  lVar13 = *(longlong *)(param_3 + 0x10);
  iVar3 = *(int *)(param_2 + 0x1f8);
  iVar4 = *(int *)(lVar13 + 0xe8);
  if (iVar3 != iVar4) {
    uVar18 = *(undefined8 *)(lVar13 + 0xe0);
    *(undefined8 *)(param_2 + 0x1f0) = uVar18;
    *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(lVar13 + 0xe8);
    local_1a8 = 0;
    plStack_1a0 = (longlong *)0x0;
    FUN_140e6da68(&local_360,uVar18,0);
    FUN_140008f88(param_2 + 0x200,&local_360);
    if (local_360 != (longlong *)0x0) {
      (**(code **)(*local_360 + 0x10))();
    }
    plVar20 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_1a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_1a0)(plStack_1a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  cVar21 = *(char *)(lVar13 + 0x38);
  iVar5 = *(int *)(param_2 + 0x104);
  iVar6 = *(int *)(lVar13 + 0x4c);
  if (iVar5 != iVar6) {
    *(undefined1 *)(param_2 + 0x100) = *(undefined1 *)(lVar13 + 0x48);
    *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(lVar13 + 0x4c);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  iVar7 = *(int *)(param_2 + 0xfc);
  iVar8 = *(int *)(lVar13 + 0x44);
  if (iVar7 != iVar8) {
    *(undefined1 *)(param_2 + 0xf8) = *(undefined1 *)(lVar13 + 0x40);
    *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(lVar13 + 0x44);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(param_2 + 0x124) != *(int *)(lVar13 + 0x6c)) {
    *(undefined1 *)(param_2 + 0x120) = *(undefined1 *)(lVar13 + 0x68);
    *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(lVar13 + 0x6c);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(param_2 + 0x218) != *(int *)(lVar13 + 0xf8)) {
    *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(lVar13 + 0xf0);
    *(undefined4 *)(param_2 + 0x218) = *(undefined4 *)(lVar13 + 0xf8);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(param_2 + 0x11c) != *(int *)(lVar13 + 100)) {
    *(undefined1 *)(param_2 + 0x118) = *(undefined1 *)(lVar13 + 0x60);
    *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(lVar13 + 100);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(param_2 + 0x14c) != *(int *)(lVar13 + 0x84)) {
    *(undefined1 *)(param_2 + 0x148) = *(undefined1 *)(lVar13 + 0x80);
    *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(lVar13 + 0x84);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(param_2 + 0x228) != *(int *)(lVar13 + 0x108)) {
    *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(lVar13 + 0x100);
    *(undefined4 *)(param_2 + 0x228) = *(undefined4 *)(lVar13 + 0x108);
    lVar13 = *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(param_2 + 300) != *(int *)(lVar13 + 0x74)) {
    *(undefined1 *)(param_2 + 0x128) = *(undefined1 *)(lVar13 + 0x70);
    *(undefined4 *)(param_2 + 300) = *(undefined4 *)(lVar13 + 0x74);
  }
  if (((param_4 == '\0') ||
      (((iVar3 == iVar4 && cVar21 == '\0') && iVar5 == iVar6) && iVar7 == iVar8)) ||
     (*(longlong *)(param_1 + 0x298) == 0)) goto LAB_140ae1cc0;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae1d18:
    lVar13 = 0;
  }
  else {
    uVar23 = *(uint *)(param_1 + 0x30);
    lVar13 = 0;
    if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
      plVar20 = (longlong *)
                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
      if ((plVar20 == (longlong *)0x0) ||
         (((int)plVar20[2] != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_140ae1d18;
      lVar13 = *plVar20;
    }
  }
  uVar22 = *(undefined1 *)(param_2 + 0xf8);
  cVar21 = *(char *)(param_2 + 0x100);
  local_360 = local_340;
  local_348 = '\0';
  local_350 = local_240;
  local_358 = local_360;
  pwVar14 = (wchar_t *)FUN_140c7f682(param_1,L"ReserveAmmoChanged",&local_360);
  local_1c0 = (char *)0x0;
  if (pwVar14 == (wchar_t *)0x0) {
    local_1b8 = (char *)0x0;
    local_1b0 = 0;
LAB_140ae1b1a:
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
  }
  else {
    local_39b = cVar21;
    sVar15 = wcslen(pwVar14);
    local_1b0 = FUN_14475aa65(0,pwVar14,sVar15 & 0xffffffff);
    uVar23 = local_1b0 + 1;
    pcVar26 = (char *)0x0;
    if (0x80 < uVar23) {
      FUN_1446efa72(&local_1c0,0,uVar23,1);
      pcVar26 = local_1c0;
    }
    local_1b8 = pcVar26;
    if (pcVar26 == (char *)0x0) {
      local_1b8 = local_240;
    }
    FUN_14475a98a(local_1b8,uVar23,pwVar14,(int)sVar15 + 1);
    pcVar26 = local_1b8;
    local_a8 = 0;
    cVar21 = local_39b;
    if (local_1b8 == (char *)0x0) goto LAB_140ae1b1a;
    sVar15 = strlen(local_1b8);
    FUN_1446e6fe8(&local_1a8,pcVar26,sVar15 & 0xffffffff,1);
    cVar21 = local_39b;
  }
  FUN_140056680(&local_388,local_a0);
  local_378 = *(longlong **)(param_2 + 0x200);
  if (local_378 != (longlong *)0x0) {
    (**(code **)(*local_378 + 8))();
  }
  local_370 = *(undefined4 *)(param_2 + 0x208);
  local_368 = CONCAT11(uVar22,cVar21);
  local_88 = (code *)0x0;
  puVar19 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar19 = &PTR_FUN_14b9c5410;
  puVar19[1] = local_388;
  local_388 = 0;
  *(undefined4 *)(puVar19 + 2) = (undefined4)local_380;
  *(undefined4 *)((longlong)puVar19 + 0x14) = local_380._4_4_;
  local_380 = 0;
  puVar19[3] = local_378;
  if (local_378 != (longlong *)0x0) {
    (**(code **)(*local_378 + 8))();
  }
  *(undefined4 *)(puVar19 + 4) = local_370;
  *(undefined2 *)(puVar19 + 5) = local_368;
  if (puVar19 == (undefined8 *)&DAT_fffffffffffffff8) {
    pcVar25 = (code *)0x0;
  }
  else {
    pcVar25 = FUN_1442d8b3e;
    local_88 = FUN_1442d8b3e;
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar16 = 0;
  puVar16[2] = pcVar25;
  puVar16[4] = puVar19;
  local_78 = 0;
  *(undefined4 *)(puVar16 + 8) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x44) = uStack_54;
  *(undefined4 *)(puVar16 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar16 + 6) = local_68;
  *(undefined4 *)((longlong)puVar16 + 0x34) = uStack_64;
  *(undefined4 *)(puVar16 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar16 + 0x3c) = uStack_5c;
  if (puVar19 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88 = (code *)0x0;
  }
  if (puVar16 != (undefined8 *)0x0) {
    LOCK();
    puVar19 = *(undefined8 **)(lVar13 + 0x30);
    *(undefined8 **)(lVar13 + 0x30) = puVar16;
    UNLOCK();
    LOCK();
    *puVar19 = puVar16;
    UNLOCK();
    if (local_88 != (code *)0x0) {
      (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if (local_378 != (longlong *)0x0) {
    (**(code **)(*local_378 + 0x10))();
  }
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 != (char *)0x0) {
    FUN_1400020a8();
  }
  if (local_348 == '\x01') {
    FUN_1400020a8(local_360);
  }
LAB_140ae1cc0:
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae1dc6 FUN_140ae1dc6 body=4668 status=ok
// SIG undefined FUN_140ae1dc6(void)

/* WARNING: Removing unreachable block (ram,0x000140ae2f2f) */
/* WARNING: Removing unreachable block (ram,0x000140ae2f3e) */
/* WARNING: Removing unreachable block (ram,0x000140ae2f42) */
/* WARNING: Removing unreachable block (ram,0x000140ae2eb4) */
/* WARNING: Removing unreachable block (ram,0x000140ae2ebe) */

void FUN_140ae1dc6(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  bool bVar7;
  longlong *plVar8;
  undefined4 uVar9;
  char cVar10;
  undefined1 uVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  void *pvVar21;
  char cVar22;
  uint uVar23;
  uint *puVar24;
  byte bVar25;
  longlong **pplVar26;
  bool bVar27;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  longlong local_3a0;
  uint *local_398;
  undefined8 local_390;
  longlong local_388;
  void *local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  byte local_364;
  longlong *local_360;
  undefined4 local_358;
  longlong **local_2e0;
  longlong **local_2d8;
  int local_2d0;
  undefined8 *local_2c8;
  undefined8 *puStack_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 auStack_2a8 [32];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined4 local_198;
  longlong **local_120;
  longlong **local_118;
  int local_110;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  puVar24 = (uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae2351:
    uVar15 = 0;
  }
  else {
    uVar23 = *puVar24;
    uVar15 = 0;
    if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_140ae2351;
      uVar15 = *puVar17;
    }
  }
  *(undefined8 *)(param_1 + 0x298) = uVar15;
  lVar20 = *(longlong *)(param_3 + 0x10);
  iVar16 = *(int *)(param_2 + 0xec);
  iVar2 = *(int *)(lVar20 + 0x34);
  if (iVar16 != iVar2) {
    bVar25 = *(byte *)(lVar20 + 0x30);
    *(byte *)(param_2 + 0xe8) = bVar25;
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(lVar20 + 0x34);
    bVar25 = bVar25 ^ 1;
    iVar18 = *(int *)(param_2 + 0x13c);
    if (bVar25 == *(byte *)(param_2 + 0x138)) {
      if (iVar18 != 0) goto LAB_140ae1e6c;
      iVar18 = 0;
    }
    *(byte *)(param_2 + 0x138) = bVar25;
    *(int *)(param_2 + 0x13c) = iVar18 + 1;
  }
LAB_140ae1e6c:
  if (((param_4 != '\0') && (iVar16 != iVar2)) && (*(longlong *)(param_1 + 0x298) != 0)) {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae2d13:
      uVar15 = 0;
    }
    else {
      uVar23 = *puVar24;
      uVar15 = 0;
      if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
        puVar17 = (undefined8 *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
        if ((puVar17 == (undefined8 *)0x0) ||
           ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_140ae2d13;
        uVar15 = *puVar17;
      }
    }
    local_360 = (longlong *)CONCAT71(local_360._1_7_,*(undefined1 *)(param_2 + 0x138));
    local_88 = (longlong *)CONCAT71(local_88._1_7_,*(undefined1 *)(param_2 + 0xe8));
    local_2c8 = auStack_2a8;
    local_2b0 = local_2b0 & 0xffffffffffffff00;
    local_2b8 = local_1a8;
    local_3a0 = param_3;
    local_398 = puVar24;
    puStack_2c0 = local_2c8;
    pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"OverheatingChanged",&local_2c8);
    local_120 = (longlong **)0x0;
    local_390 = uVar15;
    if (pwVar12 == (wchar_t *)0x0) {
      local_118 = (longlong **)0x0;
      local_110 = 0;
    }
    else {
      sVar13 = wcslen(pwVar12);
      local_110 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
      uVar23 = local_110 + 1;
      local_118 = (longlong **)0x0;
      if (0x80 < uVar23) {
        FUN_1446efa72(&local_120,0,uVar23,1);
        local_118 = local_120;
      }
      if (local_118 == (longlong **)0x0) {
        local_118 = &local_1a0;
      }
      FUN_14475a98a(local_118,uVar23,pwVar12,(int)sVar13 + 1);
    }
    FUN_140ae3004(local_390,local_118,&local_88,&local_360);
    if (local_120 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    param_3 = local_3a0;
    puVar24 = local_398;
    if ((char)local_2b0 == '\x01') {
      FUN_1400020a8(local_2c8);
      param_3 = local_3a0;
      puVar24 = local_398;
    }
  }
  lVar20 = *(longlong *)(param_3 + 0x10);
  iVar16 = *(int *)(param_2 + 0xf4);
  iVar2 = *(int *)(lVar20 + 0x3c);
  local_390 = CONCAT71(local_390._1_7_,param_4);
  if (iVar16 != iVar2) {
    *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(lVar20 + 0x38);
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(lVar20 + 0x3c);
    lVar20 = *(longlong *)(param_3 + 0x10);
  }
  puVar17 = (undefined8 *)(param_2 + 0x2d8);
  iVar18 = *(int *)(param_2 + 0x2e8);
  iVar3 = *(int *)(lVar20 + 0x168);
  if (iVar18 != iVar3) {
    if (puVar17 != (undefined8 *)(lVar20 + 0x158)) {
      iVar4 = *(int *)(lVar20 + 0x160);
      pvVar21 = *(void **)(lVar20 + 0x158);
      *(int *)(param_2 + 0x2e0) = iVar4;
      if (iVar4 == 0 && *(int *)(param_2 + 0x2e4) == 0) {
        *(undefined4 *)(param_2 + 0x2e4) = 0;
      }
      else {
        local_3a0 = param_3;
        local_398 = puVar24;
        local_388 = (longlong)iVar4;
        local_380 = pvVar21;
        FUN_1446dd670(puVar17);
        param_3 = local_3a0;
        puVar24 = local_398;
        if ((int)local_388 != 0) {
          memcpy((void *)*puVar17,local_380,local_388 * 2);
          param_3 = local_3a0;
          puVar24 = local_398;
        }
      }
    }
    *(undefined4 *)(param_2 + 0x2e8) = *(undefined4 *)(lVar20 + 0x168);
  }
  bVar27 = iVar16 != iVar2 || iVar18 != iVar3;
  cVar22 = (char)local_390;
  if (*(char *)(param_2 + 0xd0) == '\0') {
    if ((*(byte *)(param_2 + 0xf0) & 1) == 0) {
      if (*(char *)(param_2 + 0xe8) != '\x01') {
        bVar7 = false;
        goto LAB_140ae1efa;
      }
      local_3a0 = param_3;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
        cVar22 = (char)local_390;
      }
      local_1a0 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_198 = DAT_14c844848;
      local_2c8 = (undefined8 *)0x0;
      puStack_2c0 = (undefined8 *)0x0;
      local_2b8 = (undefined1 *)((ulonglong)local_2b8 & 0xffffffff00000000);
      local_2b0 = 0;
      auStack_2a8[0] = 0;
      FUN_1446ddda2(&local_2c8,"WeaponStatus_Overheat");
      FUN_140ac6c96(&local_2c8,&local_1a0);
      if (local_2b0 != 0) {
        FUN_1400020a8();
      }
      puVar17 = (undefined8 *)(param_2 + 0x260);
      if (*(int *)(param_2 + 0x270) == 0) {
LAB_140ae2a83:
        plVar19 = (longlong *)*puVar17;
        if (plVar19 != local_1a0) {
          *puVar17 = local_1a0;
          if (local_1a0 != (longlong *)0x0) {
            (**(code **)(*local_1a0 + 8))();
          }
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        *(undefined4 *)(param_2 + 0x268) = local_198;
        *(int *)(param_2 + 0x270) = *(int *)(param_2 + 0x270) + 1;
        bVar25 = 1;
      }
      else {
        bVar25 = 0;
        cVar10 = FUN_144722c14(puVar17,&local_1a0);
        if (cVar10 == '\0') goto LAB_140ae2a83;
      }
      local_2c8 = (undefined8 *)0x0;
      puStack_2c0 = (undefined8 *)0x0;
      local_2b8 = (undefined1 *)((ulonglong)local_2b8 & 0xffffffff00000000);
      local_2b0 = 0;
      auStack_2a8[0] = 0;
      FUN_1446ddda2(&local_2c8,"WeaponStatus_ShotsFired");
      FUN_140ac6c96(&local_2c8,&local_1a0);
      if (local_2b0 != 0) {
        FUN_1400020a8();
      }
      puVar17 = (undefined8 *)(param_2 + 0x278);
      if (*(int *)(param_2 + 0x288) == 0) {
LAB_140ae2acb:
        plVar19 = (longlong *)*puVar17;
        if (plVar19 != local_1a0) {
          *puVar17 = local_1a0;
          if (local_1a0 != (longlong *)0x0) {
            (**(code **)(*local_1a0 + 8))();
          }
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        *(undefined4 *)(param_2 + 0x280) = local_198;
        *(int *)(param_2 + 0x288) = *(int *)(param_2 + 0x288) + 1;
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
        cVar10 = FUN_144722c14(puVar17,&local_1a0);
        if (cVar10 == '\0') goto LAB_140ae2acb;
      }
      if (local_1a0 != (longlong *)0x0) {
        (**(code **)(*local_1a0 + 0x10))();
      }
      bVar27 = (bool)(bVar27 | bVar25 | bVar6);
      bVar7 = true;
      param_3 = local_3a0;
    }
    else {
LAB_140ae27fa:
      local_3a0 = param_3;
      if ((*(byte *)(param_1 + 0x8c) & 0x80) == 0) {
        FUN_1410ea50c(param_1);
        *(undefined1 *)(param_1 + 0x2a2) = 1;
        FUN_145899dd6(param_1);
      }
      local_398 = (uint *)(param_2 + 0x260);
      *(int *)(param_2 + 0x270) = *(int *)(param_2 + 0x270) + 1;
      local_2c8 = (undefined8 *)0x0;
      puStack_2c0 = (undefined8 *)0x0;
      local_2b8 = (undefined1 *)((ulonglong)local_2b8 & 0xffffffff00000000);
      local_2b0 = 0;
      auStack_2a8[0] = 0;
      FUN_1446ddda2(&local_2c8,"WeaponStatus_Swapping");
      FUN_140ac6c96(&local_2c8,local_398);
      if (local_2b0 != 0) {
        FUN_1400020a8();
      }
      *(int *)(param_2 + 0x288) = *(int *)(param_2 + 0x288) + 1;
      FUN_14000bbd8(&local_2c8,puVar17);
      FUN_140ac6c96(&local_2c8,param_2 + 0x278);
      if (local_2b0 != 0) {
        FUN_1400020a8();
      }
      bVar7 = false;
      param_3 = local_3a0;
    }
  }
  else {
    if ((*(byte *)(param_2 + 0xf0) & 1) != 0) goto LAB_140ae27fa;
    *(int *)(param_2 + 0x270) = *(int *)(param_2 + 0x270) + 1;
    if (*(char *)(param_2 + 200) == '\x01') {
      local_2c8 = (undefined8 *)0x0;
      puStack_2c0 = (undefined8 *)0x0;
      local_2b8 = (undefined1 *)((ulonglong)local_2b8._4_4_ << 0x20);
      local_2b0 = 0;
      auStack_2a8[0] = 0;
      FUN_1446ddda2(&local_2c8,"WeaponStatus_Repairing");
      FUN_140ac6c96(&local_2c8,param_2 + 0x260);
      if (local_2b0 != 0) {
        FUN_1400020a8();
      }
      bVar7 = true;
    }
    else {
      local_2c8 = (undefined8 *)0x0;
      puStack_2c0 = (undefined8 *)0x0;
      local_2b8 = (undefined1 *)((ulonglong)local_2b8._4_4_ << 0x20);
      local_2b0 = 0;
      auStack_2a8[0] = 0;
      FUN_1446ddda2(&local_2c8,"WeaponStatus_Reloading");
      FUN_140ac6c96(&local_2c8,param_2 + 0x260);
      if (local_2b0 != 0) {
        FUN_1400020a8();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
        cVar22 = (char)local_390;
      }
      plVar19 = (longlong *)(param_2 + 0x278);
      if (*(int *)(param_2 + 0x288) != 0) {
        bVar7 = false;
        cVar10 = FUN_144722c14(plVar19,&DAT_14c844840);
        if (cVar10 != '\0') goto LAB_140ae1efa;
      }
      plVar8 = DAT_14c844840;
      plVar5 = (longlong *)*plVar19;
      if (plVar5 != DAT_14c844840) {
        *plVar19 = (longlong)DAT_14c844840;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      *(undefined4 *)(param_2 + 0x280) = DAT_14c844848;
      *(int *)(param_2 + 0x288) = *(int *)(param_2 + 0x288) + 1;
      bVar7 = false;
    }
  }
LAB_140ae1efa:
  if ((cVar22 != '\0') && (bVar27 && *(longlong *)(param_1 + 0x298) != 0)) {
    local_3a0 = param_3;
    uVar15 = FUN_14479d2ce(puVar24);
    if (*(char *)(param_2 + 0xd0) == '\x01') {
      uVar11 = *(undefined1 *)(param_2 + 200);
    }
    else {
      uVar11 = 0;
    }
    local_378 = CONCAT71(local_378._1_7_,uVar11);
    local_360 = *(longlong **)(param_2 + 0x278);
    if (local_360 != (longlong *)0x0) {
      (**(code **)(*local_360 + 8))();
    }
    local_358 = *(undefined4 *)(param_2 + 0x280);
    local_88 = *(longlong **)(param_2 + 0x260);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    local_80 = *(undefined4 *)(param_2 + 0x268);
    local_2c8 = auStack_2a8;
    local_2b0 = local_2b0 & 0xffffffffffffff00;
    local_2b8 = local_1a8;
    puStack_2c0 = local_2c8;
    pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"StatusLabelTextChanged",&local_2c8);
    local_120 = (longlong **)0x0;
    if (pwVar12 == (wchar_t *)0x0) {
      local_118 = (longlong **)0x0;
      local_110 = 0;
    }
    else {
      sVar13 = wcslen(pwVar12);
      FUN_1446fe5a4(&local_1a0,pwVar12,sVar13 & 0xffffffff,1);
    }
    local_3a8 = &local_378;
    FUN_14576dcfc(uVar15,local_118,&local_88,&local_360);
    if (local_120 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if ((char)local_2b0 == '\x01') {
      FUN_1400020a8(local_2c8);
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    param_3 = local_3a0;
    if (local_360 != (longlong *)0x0) {
      (**(code **)(*local_360 + 0x10))();
      param_3 = local_3a0;
    }
  }
  lVar20 = *(longlong *)(param_3 + 0x10);
  iVar16 = *(int *)(param_2 + 0x238);
  iVar2 = *(int *)(lVar20 + 0x118);
  if (iVar16 != iVar2) {
    *(undefined8 *)(param_2 + 0x230) = *(undefined8 *)(lVar20 + 0x110);
    *(undefined4 *)(param_2 + 0x238) = *(undefined4 *)(lVar20 + 0x118);
  }
  if ((bVar7) && (*(longlong *)(param_2 + 0x230) != 0)) {
    bVar25 = *(byte *)(param_2 + 0xd0) ^ 1;
  }
  else {
    bVar25 = 0;
  }
  iVar18 = *(int *)(param_2 + 0x154);
  if (bVar25 == *(byte *)(param_2 + 0x150)) {
    bVar6 = 1;
    if (iVar18 == 0) {
      iVar18 = 0;
      goto LAB_140ae2ceb;
    }
  }
  else {
LAB_140ae2ceb:
    *(byte *)(param_2 + 0x150) = bVar25;
    *(int *)(param_2 + 0x154) = iVar18 + 1;
    bVar6 = 0;
  }
  if (((cVar22 != '\0') && (!(bool)(iVar16 == iVar2 & bVar6))) &&
     (*(longlong *)(param_1 + 0x298) != 0)) {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae2d0c:
      pvVar21 = (void *)0x0;
    }
    else {
      uVar23 = *puVar24;
      pvVar21 = (void *)0x0;
      if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
        plVar19 = (longlong *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
        if ((plVar19 == (longlong *)0x0) ||
           (((int)plVar19[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140ae2d0c;
        pvVar21 = (void *)*plVar19;
      }
    }
    local_388 = CONCAT44(local_388._4_4_,*(undefined4 *)(param_2 + 0x230));
    local_2c8 = auStack_2a8;
    local_2b0 = local_2b0 & 0xffffffffffffff00;
    local_2b8 = local_1a8;
    local_3a0 = param_3;
    local_398 = puVar24;
    puStack_2c0 = local_2c8;
    pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"OverheatingShotsChanged",&local_2c8);
    local_2e0 = (longlong **)0x0;
    if (pwVar12 == (wchar_t *)0x0) {
      local_2d8 = (longlong **)0x0;
      local_2d0 = 0;
      puVar17 = (undefined8 *)((longlong)pvVar21 + 0x30);
LAB_140ae2f0c:
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      cVar22 = (char)local_390;
    }
    else {
      local_380 = pvVar21;
      sVar13 = wcslen(pwVar12);
      local_2d0 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
      uVar23 = local_2d0 + 1;
      local_2d8 = (longlong **)0x0;
      if (0x80 < uVar23) {
        FUN_1446efa72(&local_2e0,0,uVar23,1);
        local_2d8 = local_2e0;
      }
      if (local_2d8 == (longlong **)0x0) {
        local_2d8 = &local_360;
      }
      FUN_14475a98a(local_2d8,uVar23,pwVar12,(int)sVar13 + 1);
      pplVar26 = local_2d8;
      puVar17 = (undefined8 *)((longlong)local_380 + 0x30);
      local_a0 = 0;
      if (local_2d8 == (longlong **)0x0) goto LAB_140ae2f0c;
      sVar13 = strlen((char *)local_2d8);
      FUN_1446e6fe8(&local_1a0,pplVar26,sVar13 & 0xffffffff,1);
    }
    uVar9 = (undefined4)local_388;
    FUN_140056680(&local_378,local_98);
    local_368 = uVar9;
    local_68 = &PTR_FUN_14b9c5490;
    uStack_60 = local_378;
    uStack_58 = uStack_370;
    local_378 = 0;
    uStack_370 = 0;
    uStack_50 = uVar9;
    uStack_4c = CONCAT31(uStack_4c._1_3_,bVar25);
    local_364 = bVar25;
    puVar14 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar14 = 0;
    puVar14[2] = FUN_1418fce1c;
    puVar14[4] = 0;
    local_78 = 0;
    *(undefined4 *)(puVar14 + 6) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar14 + 0x34) = local_68._4_4_;
    *(undefined4 *)(puVar14 + 7) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_60._4_4_;
    *(undefined4 *)(puVar14 + 8) = (undefined4)uStack_58;
    *(undefined4 *)((longlong)puVar14 + 0x44) = uStack_58._4_4_;
    *(undefined4 *)(puVar14 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar14 + 0x4c) = uStack_4c;
    local_88 = (longlong *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (undefined8 *)*puVar17;
      *puVar17 = puVar14;
      UNLOCK();
      LOCK();
      *puVar1 = puVar14;
      UNLOCK();
    }
    if (local_378 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (local_2e0 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    param_3 = local_3a0;
    puVar24 = local_398;
    if ((char)local_2b0 == '\x01') {
      FUN_1400020a8(local_2c8);
      param_3 = local_3a0;
      puVar24 = local_398;
    }
  }
  cVar10 = '\x01';
  if ((*(char *)(param_2 + 0xe8) == '\0') && (*(char *)(param_2 + 0xd0) == '\0')) {
    cVar10 = *(char *)(param_2 + 0xf0);
  }
  if (cVar10 == *(char *)(param_2 + 0x130)) {
    if (*(int *)(param_2 + 0x134) == 0) {
      iVar16 = 1;
      goto LAB_140ae2267;
    }
    bVar25 = 0;
  }
  else {
    iVar16 = *(int *)(param_2 + 0x134) + 1;
LAB_140ae2267:
    *(char *)(param_2 + 0x130) = cVar10;
    *(int *)(param_2 + 0x134) = iVar16;
    bVar25 = 1;
  }
  lVar20 = *(longlong *)(param_3 + 0x10);
  iVar16 = *(int *)(param_2 + 0x10c);
  iVar2 = *(int *)(lVar20 + 0x54);
  iVar18 = iVar16;
  if (iVar16 != iVar2) {
    *(undefined1 *)(param_2 + 0x108) = *(undefined1 *)(lVar20 + 0x50);
    iVar18 = *(int *)(lVar20 + 0x54);
    *(int *)(param_2 + 0x10c) = iVar18;
  }
  bVar27 = (bool)(bVar25 | iVar16 != iVar2);
  if ((cVar10 != '\0') && (*(char *)(param_2 + 0x108) == '\x01')) {
    *(undefined1 *)(param_2 + 0x108) = 0;
    *(int *)(param_2 + 0x10c) = iVar18 + 1;
    bVar27 = true;
  }
  if ((cVar22 == '\0') || (!bVar27 || *(longlong *)(param_1 + 0x298) == 0)) goto LAB_140ae1ff0;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140ae2c8d:
    uVar15 = 0;
  }
  else {
    uVar23 = *puVar24;
    uVar15 = 0;
    if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_140ae2c8d;
      uVar15 = *puVar17;
    }
  }
  local_360 = (longlong *)CONCAT71(local_360._1_7_,*(undefined1 *)(param_2 + 0x108));
  local_88 = (longlong *)CONCAT71(local_88._1_7_,cVar10);
  local_2c8 = auStack_2a8;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = local_1a8;
  puStack_2c0 = local_2c8;
  pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"LabelVisibilityChanged",&local_2c8);
  local_120 = (longlong **)0x0;
  if (pwVar12 == (wchar_t *)0x0) {
    local_118 = (longlong **)0x0;
    local_110 = 0;
  }
  else {
    sVar13 = wcslen(pwVar12);
    local_110 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
    uVar23 = local_110 + 1;
    pplVar26 = (longlong **)0x0;
    if (0x80 < uVar23) {
      FUN_1446efa72(&local_120,0,uVar23,1);
      pplVar26 = local_120;
    }
    local_118 = pplVar26;
    if (pplVar26 == (longlong **)0x0) {
      local_118 = &local_1a0;
    }
    FUN_14475a98a(local_118,uVar23,pwVar12,(int)sVar13 + 1);
  }
  FUN_140ae3004(uVar15,local_118,&local_88,&local_360);
  if (local_120 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_2b0 == '\x01') {
    FUN_1400020a8(local_2c8);
  }
LAB_140ae1ff0:
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae3004 FUN_140ae3004 body=415 status=ok
// SIG undefined FUN_140ae3004(void)

/* WARNING: Removing unreachable block (ram,0x000140ae3186) */
/* WARNING: Removing unreachable block (ram,0x000140ae3195) */
/* WARNING: Removing unreachable block (ram,0x000140ae3199) */

undefined8 FUN_140ae3004(longlong param_1,char *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined2 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a8,local_88);
  local_198 = CONCAT11(*param_4,*param_3);
  local_58 = &PTR_FUN_14b9c5450;
  uStack_50 = local_1a8;
  uStack_48 = uStack_1a0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_40 = CONCAT22(uStack_40._2_2_,local_198);
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = FUN_1418fcc84;
  puVar3[4] = 0;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_48._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  local_78 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_1a8 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140ae31a4 FUN_140ae31a4 body=143 status=ok
// SIG undefined FUN_140ae31a4(void)

void FUN_140ae31a4(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  if ((*(char *)((longlong)param_1 + 0x117b) == '\0') ||
     (*(undefined1 *)((longlong)param_1 + 0x117b) = 0,
     (~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0)) goto LAB_140ae31b5;
  bVar2 = *(byte *)((longlong)param_1 + 0x9d);
  if ((bVar2 & 1) != 0) {
    if (param_1[0x16] != 0) goto LAB_140ae31b5;
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 != 0) goto LAB_140ae31b5;
    bVar2 = *(byte *)((longlong)param_1 + 0x9d);
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_140ae31b5:
  cVar1 = (**(code **)(*param_1 + 0xcf8))(param_1);
  if (cVar1 == '\0') {
    FUN_140ae3234(param_1);
    return;
  }
  return;
}



// FUNCTION 140ae3234 FUN_140ae3234 body=48 status=ok
// SIG undefined FUN_140ae3234(void)

void FUN_140ae3234(longlong param_1)

{
  FUN_1448ee24a();
  *(byte *)(param_1 + 0x89e) = *(byte *)(param_1 + 0x89e) | 1;
  FUN_144a5d7ea(param_1);
  FUN_1447f69b6(param_1 + 0x1158);
  return;
}



// FUNCTION 140ae3264 FUN_140ae3264 body=334 status=ok
// SIG undefined FUN_140ae3264(void)

undefined4 * FUN_140ae3264(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ae3470(param_1,local_40);
  puVar5 = (ulonglong *)*param_3;
  *local_38 = puVar5;
  lVar8 = param_3[1];
  local_38[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    puVar5 = (ulonglong *)*local_38;
  }
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar3 = ((uint)(*puVar5 >> 0x14) & 0xffff ^ (uint)(*puVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_140ae33b4(param_1,uVar3,local_38,&local_44);
  uVar1 = local_44;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_38 + 0x14) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140ae3646(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae33b4 FUN_140ae33b4 body=188 status=ok
// SIG undefined FUN_140ae33b4(void)

undefined8 FUN_140ae33b4(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*(longlong *)*puVar3 == *(longlong *)*param_3) {
          plVar7 = (longlong *)puVar3[1];
          if (plVar7 != (longlong *)0x0) {
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
          }
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 1);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(undefined4 *)puVar3 = *(undefined4 *)param_3;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
          *(undefined4 *)(puVar3 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
          FUN_14021c50e(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = *(int *)(puVar3 + 2);
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 140ae3470 FUN_140ae3470 body=470 status=ok
// SIG undefined FUN_140ae3470(void)

int * FUN_140ae3470(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140ae3646 FUN_140ae3646 body=670 status=ok
// SIG undefined FUN_140ae3646(void)

void FUN_140ae3646(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140ae36b9;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140ae36b9:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = **(ulonglong **)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 140ae38e4 FUN_140ae38e4 body=1671 status=ok
// SIG undefined FUN_140ae38e4(void)

void FUN_140ae38e4(longlong *param_1)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_198 [32];
  longlong *local_178;
  LARGE_INTEGER local_170 [5];
  byte local_145;
  longlong *local_118;
  longlong local_f8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  QueryPerformanceCounter(local_170);
  uVar21 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  iVar4 = (int)param_1[5];
  uVar20 = 1;
  iVar12 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar18 = *puVar10;
    if (uVar18 == 0) {
      iVar11 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar11 = iVar4 + -1;
      }
      uVar21 = 0;
      uVar20 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar20 = uVar21;
      }
      iVar12 = 0;
      do {
        if (uVar20 == uVar21) goto LAB_140ae3c22;
        iVar12 = iVar12 + 0x20;
        uVar18 = puVar10[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar21 = 0;
    }
    uVar20 = (ulonglong)(-uVar18 & uVar18);
    uVar19 = uVar20 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar11 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 < iVar4) {
    dVar3 = (double)local_170[0].QuadPart * DAT_14c83f420 + 16777216.0;
    local_178 = param_1 + 7;
    uVar18 = 0xffffffff;
    do {
      lVar16 = *param_1;
      lVar5 = (longlong)iVar11 * 0x40;
      dVar1 = *(double *)(lVar16 + 0x28 + lVar5);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        if (90.0 < dVar3 - dVar1) {
          FUN_140ec6b90(param_1);
        }
      }
      else {
        lVar17 = lVar16 + lVar5;
        if ((((*(int *)(lVar17 + 0xc) == 0) || (uVar7 = *(uint *)(lVar17 + 8), (int)uVar7 < 0)) ||
            (DAT_14c9647dc <= (int)uVar7)) ||
           (((lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar14 == 0 ||
             (*(int *)(lVar14 + 0x10) != *(int *)(lVar17 + 0xc))) ||
            ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))) {
LAB_140ae3ac2:
          *(double *)(lVar17 + 0x28) = dVar3;
        }
        else {
          puVar13 = (ulonglong *)(lVar16 + lVar5);
          if ((*puVar13 & 1) != 0) {
            uVar2 = *(undefined8 *)(lVar17 + 8);
            puVar6 = (ulonglong *)
                     FUN_147bf3302(&local_d8,(uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2);
            uVar19 = *puVar6;
            if (uVar19 == 0) {
              *puVar6 = *puVar13;
            }
            else {
              if (*puVar13 <= uVar19) goto LAB_140ae3ac2;
              if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                plVar15 = (longlong *)param_1[8];
                if ((longlong *)param_1[8] == (longlong *)0x0) {
                  plVar15 = local_178;
                }
                iVar4 = *(int *)((longlong)plVar15 +
                                (ulonglong)
                                ((int)param_1[9] - 1U & (int)uVar19 + (int)(uVar19 >> 0x20) * 0x17)
                                * 4);
                if (iVar4 != -1) {
                  do {
                    lVar16 = *param_1 + (longlong)iVar4 * 0x40;
                    if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x40) == uVar19)
                    goto LAB_140ae3c09;
                    iVar4 = *(int *)(lVar16 + 0x38);
                  } while (iVar4 != -1);
                }
              }
              lVar16 = 0;
LAB_140ae3c09:
              *(double *)(lVar16 + 0x28) = dVar3;
              *puVar6 = *puVar13;
            }
          }
        }
      }
      uVar18 = uVar18 & ~(uint)uVar20;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar11 = (int)uVar21;
      lVar16 = (longlong)iVar11;
      uVar7 = puVar10[lVar16] & uVar18;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar8 <= iVar11) break;
        lVar5 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar16 + lVar5 + 1];
          if (uVar7 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar9 - lVar16 == lVar5) goto LAB_140ae3c22;
        }
        uVar21 = (ulonglong)(iVar11 + (int)lVar5 + 1);
        uVar18 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar7 & uVar7);
      uVar19 = uVar20 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar11 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_140ae3c22:
  iVar4 = (int)param_1[0xf];
  if (iVar4 == 0) {
    uVar19 = 1;
    uVar20 = 0;
    iVar11 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0xc);
    }
    uVar18 = *puVar10;
    if (uVar18 == 0) {
      iVar11 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar11 = iVar4 + -1;
      }
      uVar20 = 0;
      uVar21 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar21 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar21 == uVar20) goto LAB_140ae3e2f;
        iVar11 = iVar11 + 0x20;
        uVar18 = puVar10[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar21 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar12 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar12) {
      iVar12 = iVar4;
    }
  }
  if (iVar12 < iVar4) {
    local_178 = param_1 + 7;
    uVar18 = 0xffffffff;
    do {
      lVar16 = param_1[10];
      lVar5 = (longlong)iVar12;
      iVar12 = *(int *)(lVar16 + 4 + lVar5 * 0x18);
      if (((iVar12 != 0) && (uVar7 = *(uint *)(lVar16 + lVar5 * 0x18), -1 < (int)uVar7)) &&
         ((((int)uVar7 < DAT_14c9647dc &&
           (((lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar17 != 0 &&
             (*(int *)(lVar17 + 0x10) == iVar12)) && ((*(uint *)(lVar17 + 8) & 0x10200000) == 0))))
          && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))))) {
        lVar16 = *(longlong *)(lVar16 + 8 + lVar5 * 0x18);
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = local_178;
        }
        iVar12 = *(int *)((longlong)plVar15 +
                         (ulonglong)
                         ((int)param_1[9] - 1U &
                         (int)lVar16 + (int)((ulonglong)lVar16 >> 0x20) * 0x17) * 4);
        if (iVar12 != -1) {
          do {
            if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x40) == lVar16) goto LAB_140ae3d9a;
            iVar12 = *(int *)((longlong)iVar12 * 0x40 + *param_1 + 0x38);
          } while (iVar12 != -1);
        }
      }
      FUN_14102113e(param_1 + 10);
      iVar4 = (int)param_1[0xf];
LAB_140ae3d9a:
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar10 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0xc);
      }
      iVar12 = (int)uVar20;
      lVar16 = (longlong)iVar12;
      uVar7 = puVar10[lVar16] & uVar18;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) break;
        lVar5 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = puVar10[lVar16 + lVar5 + 1];
          if (uVar7 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar9 - lVar16 == lVar5) goto LAB_140ae3e2f;
        }
        uVar20 = (ulonglong)(iVar12 + (int)lVar5 + 1);
        uVar18 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar7 & uVar7);
      uVar21 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar12 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar4);
  }
LAB_140ae3e2f:
  FUN_144869430(local_170);
  local_145 = local_145 | 8;
  local_e0 = (longlong)*(int *)((longlong)param_1 + 0xc) * 0x40 + (longlong)(int)param_1[9] * 4 +
             (ulonglong)(*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5) * 4 +
             (longlong)*(int *)((longlong)param_1 + 0x5c) * 0x18 +
             (ulonglong)(*(int *)((longlong)param_1 + 0x7c) + 0x1fU >> 5) * 4 +
             (longlong)(int)param_1[0x13] * 4;
  local_170[0].QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
  if (local_118 != (longlong *)0x0) {
    if (*local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_118);
  }
  if (local_f8 != 0) {
    if (*(longlong *)(local_f8 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_f8);
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_145ad57ba(&local_d8);
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae3f7a FUN_140ae3f7a body=190 status=ok
// SIG undefined FUN_140ae3f7a(void)

undefined8 * FUN_140ae3f7a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b399fe0;
  FUN_140ae4038(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 140ae4038 FUN_140ae4038 body=104 status=ok
// SIG undefined FUN_140ae4038(void)

void FUN_140ae4038(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      *(undefined ***)(puVar1 + -8) = &PTR_FUN_14b00be10;
      FUN_14487da0a(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14487da48(*(undefined8 *)(puVar1 + -6),puVar1[-4]);
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ae40a0 FUN_140ae40a0 body=1935 status=ok
// SIG undefined FUN_140ae40a0(void)

void FUN_140ae40a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_30);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_30);
    }
  }
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_38);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_40);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_40);
    }
  }
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_48);
    }
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_50);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_50);
    }
  }
  uVar4 = local_40;
  uVar3 = local_48;
  uVar5 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_78 = uVar5;
  uVar5 = FUN_140ae4830(local_30,&local_58,uVar4,uVar3);
  *param_3 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae4830 FUN_140ae4830 body=610 status=ok
// SIG undefined FUN_140ae4830(void)

longlong FUN_140ae4830(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *param_2;
  local_48 = param_4;
  local_40 = param_3;
  if (lVar6 == 0) {
LAB_140ae4897:
    bVar1 = false;
    lVar6 = 0;
    lVar2 = 0;
    if (param_1 == (longlong *)0x0 || param_3 == 0) goto LAB_140ae49ba;
LAB_140ae48b9:
    uVar3 = FUN_140566488();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140566488();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if ((plVar5 != (longlong *)0x0 && plVar4 != plVar5) &&
         (lVar2 = (**(code **)(*plVar5 + 0x20))(plVar5), lVar2 != 0)) {
        if (param_3 == 0) {
          lVar6 = FUN_140c13516(lVar2,param_2);
          if (lVar6 != 0) {
            lVar2 = FUN_140ac3c60(lVar6,0,&local_48,&stack0x00000028);
            goto LAB_140ae49ba;
          }
        }
        else {
          lVar2 = FUN_140777470(lVar2,&local_40);
          if (lVar2 != 0) {
            local_38 = (code *)0x0;
            lVar2 = FUN_140ac3c60(lVar2,0,&local_48);
            if (!bVar1 || lVar2 == 0) goto LAB_140ae49ba;
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_140ae49ba;
          }
        }
      }
    }
  }
  else {
    if (DAT_14cac7648 == 0) {
      local_60 = &local_38;
      local_38 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_143242436;
      local_68 = &LAB_14789ef1f;
      local_70 = &LAB_1417b008f;
      local_78 = L"Engine";
      local_80 = 0x8000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      if (DAT_14cac7648 == 0) goto LAB_140ae4897;
    }
    if (((*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cac7648 + 0x38)) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
         != DAT_14cac7648 + 0x30)) || (lVar6 = *param_2, lVar6 == 0)) goto LAB_140ae4897;
    bVar1 = true;
    if (param_1 != (longlong *)0x0) goto LAB_140ae48b9;
  }
  lVar2 = 0;
LAB_140ae49ba:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140ae4a94 FUN_140ae4a94 body=68 status=ok
// SIG undefined FUN_140ae4a94(void)

void FUN_140ae4a94(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_1;
  FUN_140ae4ada(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae4ada FUN_140ae4ada body=154 status=ok
// SIG undefined FUN_140ae4ada(void)

void FUN_140ae4ada(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 2;
  if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(lVar2 + 0x70),0x20);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 2;
  }
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14aaf9250;
  puVar4[1] = *param_2;
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  return;
}



// FUNCTION 140ae4b74 FUN_140ae4b74 body=65 status=ok
// SIG undefined FUN_140ae4b74(void)

void FUN_140ae4b74(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_140ae4bb6();
  FUN_140ae4c4c(param_1 + 0x41e8,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ae4bb6 FUN_140ae4bb6 body=150 status=ok
// SIG undefined FUN_140ae4bb6(void)

void FUN_140ae4bb6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140805992();
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return;
    }
    lVar2 = param_1 + 0x3210;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar1 = FUN_140153468(lVar2);
  if (((lVar1 != 0) && ((*(byte *)(lVar2 + 0x298) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x110) != 0)) {
    if (*(longlong *)(param_1 + 0x3170) == 0) {
      if (*(char *)(param_1 + 0x34b0) != '\x01') {
        return;
      }
      param_1 = param_1 + 0x3210;
    }
    else {
      param_1 = *(longlong *)(param_1 + 0x3170) + 0xd8;
    }
    FUN_140ae4d0e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140ae4c4c FUN_140ae4c4c body=194 status=ok
// SIG undefined FUN_140ae4c4c(void)

void FUN_140ae4c4c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140ae4cf3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140ae4cf3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140ae4d0e FUN_140ae4d0e body=978 status=ok
// SIG undefined FUN_140ae4d0e(void)

void FUN_140ae4d0e(uint *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_1[0xa6] & 1) != 0) goto LAB_140ae4fe0;
  local_88 = *(double *)(param_2 + 0x68);
  local_98 = *(double *)(param_2 + 0x58);
  dStack_90 = *(double *)(param_2 + 0x60);
  dVar4 = *(double *)(param_1 + 0xa4) + local_88;
  dVar14 = *(double *)(param_1 + 0xa2) + dStack_90;
  dVar15 = *(double *)(param_1 + 0xa0) + local_98;
  *(double *)(param_1 + 0xa0) = dVar15;
  *(double *)(param_1 + 0xa2) = dVar14;
  *(double *)(param_1 + 0xa4) = dVar4;
  fVar1 = (float)param_1[0x7e];
  if (param_1[1] == 0) {
LAB_140ae5050:
    lVar7 = 0;
  }
  else {
    uVar10 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((*(uint *)(plVar6 + 2) != param_1[1] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_140ae5050;
      lVar7 = *plVar6;
    }
  }
  dVar16 = *(double *)(lVar7 + 0x128);
  dVar2 = *(double *)(lVar7 + 0x130);
  dVar3 = *(double *)(lVar7 + 0x138);
  dVar5 = dVar3 * dVar3 + dVar16 * dVar16 + dVar2 * dVar2;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    if (dVar5 < 9.99999993922529e-09) {
      dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
      dVar2 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
      dVar3 = DAT_14c8464f0;
    }
    else {
      dVar5 = 1.0 / SQRT(dVar5);
      dVar2 = dVar2 * dVar5;
      dVar16 = dVar16 * dVar5;
      dVar3 = dVar3 * dVar5;
    }
  }
  if (dVar3 * local_88 + dVar16 * local_98 + dStack_90 * dVar2 <= (double)fVar1) {
    uVar8 = FUN_14485cccc(param_2 + 0xb8);
    pdVar9 = &local_98;
  }
  else {
    dVar16 = dVar4 * dVar4 + dVar15 * dVar15 + dVar14 * dVar14;
    if ((dVar16 != 1.0) || (NAN(dVar16))) {
      if (dVar16 < 9.99999993922529e-09) {
        local_a8 = DAT_14c8464f0;
        uVar10 = (uint)DAT_14c8464e0;
        uVar11 = DAT_14c8464e0._4_4_;
        uVar12 = (uint)DAT_14c8464e8;
        uVar13 = DAT_14c8464e8._4_4_;
        goto LAB_140ae506b;
      }
      local_b8 = 1.0 / SQRT(dVar16);
      local_a8 = dVar4 * local_b8;
      uStack_b0 = dVar14 * local_b8;
      local_b8 = dVar15 * local_b8;
    }
    else {
      local_a8 = *(double *)(param_1 + 0xa4);
      uVar10 = param_1[0xa0];
      uVar11 = param_1[0xa1];
      uVar12 = param_1[0xa2];
      uVar13 = param_1[0xa3];
LAB_140ae506b:
      local_b8 = (double)CONCAT44(uVar11,uVar10);
      uStack_b0 = (double)CONCAT44(uVar13,uVar12);
    }
    lVar7 = FUN_14479d2ce(param_1);
    dVar4 = *(double *)(lVar7 + 0x128);
    dVar14 = *(double *)(lVar7 + 0x130);
    dVar15 = *(double *)(lVar7 + 0x138);
    dVar16 = dVar15 * dVar15 + dVar4 * dVar4 + dVar14 * dVar14;
    if ((dVar16 != 1.0) || (NAN(dVar16))) {
      if (dVar16 < 9.99999993922529e-09) {
        dVar4 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
        dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
        dVar15 = DAT_14c8464f0;
      }
      else {
        dVar16 = 1.0 / SQRT(dVar16);
        dVar14 = dVar14 * dVar16;
        dVar4 = dVar4 * dVar16;
        dVar15 = dVar15 * dVar16;
      }
    }
    if ((double)fVar1 < dVar15 * local_a8 + dVar4 * local_b8 + dVar14 * uStack_b0)
    goto LAB_140ae4fe0;
    uVar8 = FUN_14485cccc(param_2 + 0xb8);
    pdVar9 = (double *)&local_b8;
  }
  FUN_140ae50e2(param_1,uVar8,pdVar9);
LAB_140ae4fe0:
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae50e2 FUN_140ae50e2 body=1099 status=ok
// SIG undefined FUN_140ae50e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ae50e2(uint *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  
  uVar12 = param_1[1];
  plVar13 = param_2;
  lVar10 = _DAT_00001ce8;
  if (((uVar12 == 0) || (uVar15 = *param_1, (int)uVar15 < 0)) || (DAT_14c9647dc <= (int)uVar15)) {
LAB_140ae53c5:
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar13 = (longlong *)
              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
    if (((plVar13 == (longlong *)0x0) || (*(uint *)(plVar13 + 2) != uVar12)) ||
       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar13;
    }
    lVar10 = *(longlong *)(&DAT_00001ce8 + lVar10);
    plVar13 = (longlong *)
              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
    if (((plVar13 == (longlong *)0x0) || (*(uint *)(plVar13 + 2) != uVar12)) ||
       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_140ae53c5;
    plVar11 = (longlong *)*plVar13;
  }
  cVar4 = (**(code **)(*plVar11 + 0xe18))();
  if (cVar4 == '\0') {
    return;
  }
  if ((param_2 == (longlong *)0x0) || (*(byte *)(lVar10 + 0x178) < 2)) {
    lVar16 = FUN_140153468(param_1);
    if (param_2 != (longlong *)0x0) goto LAB_140ae5216;
LAB_140ae5257:
    lVar9 = FUN_140153468(param_1);
    bVar14 = *(byte *)(lVar9 + 0xfa) & 1;
    if ((((*(char *)(lVar10 + 0x178) == '\x03') ||
         (lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0x114) & 1) != 0)) &&
        (*(longlong *)(param_1 + 2) != 0)) &&
       ((plVar11 = *(longlong **)(param_1 + 4), plVar11 != (longlong *)0x0 && (0 < (int)plVar11[1]))
       )) {
      iVar5 = (int)plVar11[1];
      do {
        if (iVar5 == 0) {
          plVar13 = param_2;
          (**(code **)(_DAT_00000000 + 0xe0))(0,param_2,param_3);
          goto LAB_140ae53e2;
        }
        LOCK();
        iVar3 = (int)plVar11[1];
        bVar17 = iVar5 == iVar3;
        if (bVar17) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar17);
      plVar13 = param_2;
      (**(code **)(**(longlong **)(param_1 + 2) + 0xe0))
                (*(longlong **)(param_1 + 2),param_2,param_3);
LAB_140ae5384:
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  else {
    uVar12 = *(uint *)((longlong)param_2 + 0xc);
    param_1[0x8c] = uVar12;
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
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar12 = *(uint *)(lVar16 + 0x10);
      bVar17 = uVar12 == 0;
      if (bVar17) {
        *(uint *)(lVar16 + 0x10) = uVar15;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar12 = uVar15;
      }
    }
    param_1[0x8d] = uVar12;
    lVar16 = FUN_140153468(param_1);
LAB_140ae5216:
    plVar13 = (longlong *)FUN_14069ce7c();
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x288))(param_2,plVar13);
    if (puVar6 == (undefined8 *)0x0) goto LAB_140ae5257;
    uVar7 = FUN_14069ce7c();
    puVar8 = (undefined8 *)FUN_144718840(puVar6,uVar7);
    plVar13 = (longlong *)(uVar7 & 0xffffffffffffff00);
    if (puVar8 == (undefined8 *)0x0 || puVar6 == puVar8) goto LAB_140ae5257;
    plVar13 = (longlong *)*puVar8;
    lVar9 = (*(code *)plVar13[2])(puVar8);
    if ((*(char *)(lVar9 + 0x18) != '\x01') || (*(char *)(lVar9 + 0x40) == '\0')) {
      lVar9 = FUN_140153468(param_1);
      uVar12 = *(uint *)(lVar9 + 0xf8) & 0x20000;
      bVar14 = (byte)(uVar12 >> 0x11);
      if (uVar12 != 0) {
        *(undefined1 *)(param_1 + 0x8e) = 1;
      }
      if ((((*(char *)(lVar10 + 0x178) != '\x03') &&
           (lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0x114) & 1) == 0)) ||
          (*(longlong *)(param_1 + 2) == 0)) ||
         ((plVar11 = *(longlong **)(param_1 + 4), plVar11 == (longlong *)0x0 ||
          ((int)plVar11[1] < 1)))) goto LAB_140ae53e2;
      iVar5 = (int)plVar11[1];
      do {
        if (iVar5 == 0) {
          plVar13 = param_2;
          (**(code **)(_DAT_00000000 + 0xd8))(0,param_2,param_3);
          goto LAB_140ae53e2;
        }
        LOCK();
        iVar3 = (int)plVar11[1];
        bVar17 = iVar5 == iVar3;
        if (bVar17) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar17);
      plVar13 = param_2;
      (**(code **)(**(longlong **)(param_1 + 2) + 0xd8))
                (*(longlong **)(param_1 + 2),param_2,param_3);
      goto LAB_140ae5384;
    }
    bVar14 = 0;
  }
LAB_140ae53e2:
  lVar10 = FUN_140153468(param_1);
  if ((lVar10 != 0) && (lVar10 = FUN_140153468(param_1), lVar10 == lVar16)) {
    if (((((param_1[0xa6] & 0x40) == 0) &&
         (((lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0xf8) & 0x20) != 0 &&
           (param_1[0x3b] != 0)) && (uVar12 = param_1[0x3a], -1 < (int)uVar12)))) &&
        ((((int)uVar12 < DAT_14c9647dc &&
          (plVar13 = (longlong *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
          plVar13 != (longlong *)0x0)) && (*(uint *)(plVar13 + 2) == param_1[0x3b])))) &&
       ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
        plVar11 = (longlong *)*plVar13;
      }
      else {
        plVar11 = (longlong *)0x0;
      }
      if (plVar11 == param_2) {
        *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x40;
        goto LAB_140ae547e;
      }
    }
    if (bVar14 != 0) {
LAB_140ae547e:
      lVar10 = FUN_140153468(param_1);
      bVar14 = *(byte *)(lVar10 + 0xa0);
      lVar10 = FUN_140153468(param_1);
      uVar7 = CONCAT71((int7)((ulonglong)plVar13 >> 8),*(char *)(lVar10 + 0xa0) * '\x02') &
              0xffffffffffffff04;
      FUN_141105826(param_1,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | bVar14 & 1));
      return;
    }
  }
  return;
}



// FUNCTION 140ae552e FUN_140ae552e body=158 status=ok
// SIG undefined FUN_140ae552e(void)

bool FUN_140ae552e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  char *local_30;
  char local_1d [5];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = false;
  local_1d[4] = '\0';
  local_1d[3] = '\0';
  local_1d[2] = '\0';
  local_38 = local_1d + 1;
  local_1d[1] = 0;
  local_30 = local_1d;
  local_1d[0] = '\0';
  cVar1 = FUN_140ae55cd(param_3);
  if (cVar1 != '\0') {
    if ((local_1d[4] == '\x01') && ((local_1d[3] != '\x01' || (local_1d[0] == '\x01')))) {
      bVar2 = local_1d[2] == *(char *)(param_1 + 0x10);
    }
    else {
      bVar2 = false;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae55cd FUN_140ae55cd body=851 status=ok
// SIG undefined FUN_140ae55cd(void)

undefined8
FUN_140ae55cd(longlong param_1,byte *param_2,undefined1 *param_3,char *param_4,char *param_5,
             undefined1 *param_6)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
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
  char local_51;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_140ae5afe();
  lVar5 = FUN_140ae5922(param_1 + 0x28);
  if ((lVar5 != 0) && (*(longlong **)(lVar5 + 0x10) != (longlong *)0x0)) {
    if (*(int *)(lVar5 + 0xc) != 0) {
      uVar1 = *(uint *)(lVar5 + 8);
      uVar8 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140ae5804;
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x10) == *(int *)(lVar5 + 0xc))) {
        uVar8 = 0;
        if ((lVar4 == 0) || (uVar8 = 0, (*(uint *)(lVar10 + 8) & 0x10200000) != 0))
        goto LAB_140ae5804;
        lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x18))();
        if (lVar5 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_70 = &local_50;
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1459f2e4c;
            local_78 = &LAB_148c39de3;
            local_80 = &LAB_1457a9eb2;
            local_88 = &DAT_149e063b2;
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
             (lVar10 = *(longlong *)(lVar5 + 0xf48), lVar10 != 0)) {
            lVar6 = FUN_14011c349();
            local_50 = *(code **)(lVar6 + 0x48);
            lVar5 = FUN_140254f32(lVar5);
            if (lVar5 != 0) {
              plVar9 = (longlong *)(lVar4 + 0x3f0);
              lVar4 = *(longlong *)(lVar4 + 0x3f0);
              if ((*(byte *)(lVar4 + 0x368) & 4) == 0) {
                *param_3 = 0;
                uVar3 = 1;
              }
              else {
                if (*(char *)(lVar5 + 0x138) == '\0') {
                  bVar7 = *(int *)(lVar5 + 0x94) <= *(int *)(lVar5 + 0x9c);
                }
                else {
                  bVar7 = false;
                }
                *param_3 = bVar7;
                uVar3 = *(undefined1 *)(lVar5 + 0x147);
              }
              *param_6 = uVar3;
              lVar5 = *plVar9;
              if (lVar5 == 0) {
                local_50 = (code *)0x0;
              }
              else {
                local_50 = *(code **)(lVar5 + 0xa0);
                if ((local_50 == (code *)0x0) &&
                   (local_50 = *(code **)(lVar5 + 0x98), local_50 == (code *)0x0)) {
                  local_50 = *(code **)(lVar5 + 0x3c);
                }
              }
              cVar2 = FUN_140ae5a58(lVar10,&local_50);
              *param_5 = cVar2;
              cVar2 = FUN_140ae59ca(lVar10,&local_50);
              *param_4 = cVar2;
              *param_2 = *(byte *)(lVar4 + 0x368) >> 4 & 1;
              local_51 = '\x01';
              cVar2 = FUN_1402556d4(lVar10,plVar9);
              if (cVar2 == '\0') {
                *param_2 = 0;
                if (local_51 == '\0') goto LAB_140ae5911;
              }
              else {
                uVar8 = 1;
                if ((*param_2 & 1) == 0) goto LAB_140ae5804;
                if ((*param_4 != '\0') || (*param_5 != '\0')) {
                  cVar2 = (**(code **)(*(longlong *)(lVar10 + 0x3be8) + 0x38))
                                    (lVar10 + 0x3be8,0xffffffff,plVar9);
                  if (cVar2 == '\0') {
                    *param_2 = 0;
                  }
                  goto LAB_140ae5804;
                }
                *param_2 = 0;
              }
              uVar8 = 1;
              goto LAB_140ae5804;
            }
          }
        }
      }
    }
  }
LAB_140ae5911:
  uVar8 = 0;
LAB_140ae5804:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ae5922 FUN_140ae5922 body=109 status=ok
// SIG undefined FUN_140ae5922(void)

longlong FUN_140ae5922(int *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*param_1 != 0) {
    lVar3 = (longlong)*param_1 * 0x10;
    lVar5 = (longlong)*(int *)(DAT_14c9a3da0 + -8 + lVar3);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(DAT_14c9a3da0 + -0x10 + lVar3);
      lVar6 = 0;
      while( true ) {
        lVar1 = *(longlong *)(lVar3 + lVar6);
        uVar4 = FUN_140ae5990();
        cVar2 = FUN_1448093f4(lVar1,uVar4);
        if ((cVar2 != '\0') && (lVar1 != 0)) break;
        lVar6 = lVar6 + 0x10;
        if (lVar5 * 0x10 == lVar6) {
          return 0;
        }
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140ae5990 FUN_140ae5990 body=57 status=ok
// SIG undefined FUN_140ae5990(void)

void FUN_140ae5990(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f8e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f8e0 = FUN_140002ddd(FUN_146541c17,uVar1,L"GbxContextParam_PlayerUsingObject");
  }
  return;
}


