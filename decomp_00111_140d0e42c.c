// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d0e42c FUN_140d0e42c body=102 status=ok
// SIG undefined FUN_140d0e42c(void)

void FUN_140d0e42c(longlong param_1,longlong *param_2)

{
  float fVar1;
  
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(param_1 + 0x48) = param_2;
    if (param_2 != (longlong *)0x0) goto LAB_140d0e44f;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong **)(param_1 + 0x48) = param_2;
LAB_140d0e44f:
    (**(code **)(*param_2 + 0x3b0))(param_2,0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      fVar1 = (float)*(double *)(*(longlong *)(param_1 + 0x48) + 0x1c8);
      goto LAB_140d0e46e;
    }
  }
  fVar1 = 1.0;
LAB_140d0e46e:
  *(float *)(param_1 + 0x60) = fVar1;
  return;
}



// FUNCTION 140d0e492 FUN_140d0e492 body=1294 status=ok
// SIG undefined FUN_140d0e492(void)

ulonglong FUN_140d0e492(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x7c) = bVar1 | 2;
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((bVar1 & 4) == 0) {
    uVar7 = CONCAT71(uVar8,1);
  }
  else if (param_1[0x7e] == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x648))(param_1);
    if (lVar3 == 0) {
      uVar7 = CONCAT71(uVar8,*(longlong *)(param_1[0x7e] + 0x1a8) == 0);
    }
    else {
      lVar4 = FUN_14045ceca();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) {
        uVar7 = 0;
        plVar6 = (longlong *)FUN_140d0ede8(param_1,lVar3,0);
        if (plVar6 != (longlong *)0x0) {
          if (param_1[0x39] == 0) {
            FUN_14092e51e(param_1,plVar6);
          }
          else {
            (**(code **)(*plVar6 + 0x490))(plVar6,param_1[0x39],&DAT_14cadada0,0);
          }
          FUN_140b506a4(plVar6);
          (**(code **)(*plVar6 + 0x2a8))(plVar6,0);
          uVar7 = 1;
        }
      }
      else {
        lVar4 = FUN_140d0ea52();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          param_1[0x7a] = 0;
          uVar7 = 0;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          param_1[0x7a] = lVar3;
          if (param_1[0x7b] == 0) {
            puVar5 = (undefined8 *)FUN_14001cc68(0x220,0x10);
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            *(undefined4 *)(puVar5 + 7) = 2;
            puVar5[0x18] = 0;
            *(undefined4 *)(puVar5 + 0x19) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x3c) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x4c) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x54) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x5c) = 0;
            *(undefined8 *)((longlong)puVar5 + 100) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x6c) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x74) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x8c) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x94) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x9c) = 0;
            *(undefined8 *)((longlong)puVar5 + 0xa4) = 0;
            *(undefined4 *)((longlong)puVar5 + 0xac) = 0;
            *(undefined8 *)((longlong)puVar5 + 0xcc) = 0xffffffff00000080;
            *(undefined4 *)((longlong)puVar5 + 0xd4) = 0;
            puVar5[0x1c] = 0;
            *(undefined4 *)(puVar5 + 0x1d) = 0;
            *(undefined8 *)((longlong)puVar5 + 0xfd) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x105) = 0;
            puVar5[0x1e] = 0;
            puVar5[0x1f] = 0;
            puVar5[0x26] = 0;
            puVar5[0x27] = 0;
            puVar5[0x24] = 0;
            puVar5[0x25] = 0;
            puVar5[0x22] = 0;
            puVar5[0x23] = 0;
            puVar5[0x28] = 2;
            *(undefined1 *)(puVar5 + 0x3e) = 0;
            *(undefined4 *)((longlong)puVar5 + 0x147) = 0;
            puVar5[0x30] = 0;
            puVar5[0x2e] = 0;
            puVar5[0x2f] = 0;
            puVar5[0x2c] = 0;
            puVar5[0x2d] = 0;
            puVar5[0x2a] = 0;
            puVar5[0x2b] = 0;
            puVar5[0x42] = 0;
            puVar5[0x43] = 0;
            puVar5[0x40] = 0;
            puVar5[0x41] = 0;
            *puVar5 = &PTR_FUN_14b302f70;
            *(undefined1 *)(puVar5 + 0x29) = 1;
            param_1[0x7b] = (longlong)puVar5;
          }
          uVar2 = FUN_14078a0a0(param_1 + 0x73,0);
          uVar7 = (ulonglong)uVar2;
        }
      }
      if ((*(byte *)(param_1 + 0x7c) & 2) != 0) {
        if ((*(byte *)(param_1 + 0x7c) & 8) != 0) {
          FUN_1405e47c6(param_1,0);
        }
        lVar3 = param_1[0x39];
        if (lVar3 != 0) {
          if (DAT_14cac7cb8 == 0) {
            local_60 = &local_48;
            local_48 = FUN_144a7958c;
            local_50 = FUN_14081d0ea;
            local_58 = &LAB_1417963e0;
            local_68 = &LAB_1478a2d90;
            local_70 = &LAB_146395589;
            local_78 = L"Engine";
            local_80 = 0x20000000000;
            local_88 = 0x10000005;
            local_90 = 0x10;
            local_98 = 0xad0;
            FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
            lVar3 = param_1[0x39];
            if (lVar3 == 0) goto LAB_140d0e75d;
          }
          if ((((DAT_14cac7cb8 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) &&
              (*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
              DAT_14cac7cb8 + 0x30)) {
            local_48 = (code *)0x0;
            uStack_40 = 0;
            FUN_140d0ec1d(param_1 + 0x7e,&local_48);
            if (0 < (int)uStack_40) {
              FUN_140d0e9ce(lVar3,&local_48);
            }
            (**(code **)(*param_1 + 0x638))(param_1,lVar3);
            if (DAT_14cad2858 == 0) {
              local_60 = &local_38;
              local_38 = FUN_144a7958c;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_146395584;
              local_68 = &LAB_147a0ba80;
              local_70 = &LAB_14575ccce;
              local_78 = L"Engine";
              local_80 = 0x40000000000;
              local_88 = 0x10000004;
              local_90 = 0x10;
              local_98 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
              *(byte *)(lVar3 + 0xc70) = *(byte *)(lVar3 + 0xc70) & 0xfb;
            }
            if (local_48 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
LAB_140d0e75d:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d0e9b2 FUN_140d0e9b2 body=27 status=ok
// SIG undefined FUN_140d0e9b2(void)

undefined8 FUN_140d0e9b2(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    uVar1 = FUN_1401fe4bc(*(longlong *)(param_1 + 0x3f0) + 0x1a0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140d0e9ce FUN_140d0e9ce body=131 status=ok
// SIG undefined FUN_140d0e9ce(void)

void FUN_140d0e9ce(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x658);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar2 != 0) == 0) {
      if (lVar2 == 0) {
        return;
      }
      goto LAB_140d0e9f0;
    }
  }
  else if (DAT_14c950c29 != 1) goto LAB_140d0e9f0;
  FUN_1456cec3c(lVar2);
LAB_140d0e9f0:
  lVar1 = FUN_140d0eb38();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    FUN_144a688da(lVar2,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d0ea52 FUN_140d0ea52 body=228 status=ok
// SIG undefined FUN_140d0ea52(void)

longlong FUN_140d0ea52(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb69bd8 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_148758bb1;
    local_40 = FUN_14185c73e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryBodyData",&DAT_14cb69bd8,&DAT_148758bb0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69bd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0eb38 FUN_140d0eb38 body=228 status=ok
// SIG undefined FUN_140d0eb38(void)

longlong FUN_140d0eb38(void)

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
  if (DAT_14cac1768 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146379ed0;
    local_38 = &LAB_1478708b9;
    local_40 = FUN_1417ad16f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x5c8;
    FUN_14081cfa3(L"/Script/Engine",L"GestaltSkeletalMesh",&DAT_14cac1768,&DAT_1478708b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1768;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0ec1d FUN_140d0ec1d body=276 status=ok
// SIG undefined FUN_140d0ec1d(void)

void FUN_140d0ec1d(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      FUN_140d0ed32(*(undefined8 *)(lVar5 + lVar4),param_2,&local_48);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  FUN_140c65c56(param_1,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x68))(local_58,param_2);
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((longlong)(int)uStack_40 != 0) {
    lVar5 = (longlong)(int)uStack_40 << 3;
    plVar3 = local_48;
    do {
      local_58 = plVar3;
      FUN_1408ff3be(param_2,&local_58);
      plVar3 = plVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0ed32 FUN_140d0ed32 body=182 status=ok
// SIG undefined FUN_140d0ed32(void)

void FUN_140d0ed32(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1446f84a2(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0x68),
           (longlong)(int)uVar1 << 3);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((longlong)(int)uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < uVar1) {
    FUN_1446f84a2(param_3,iVar2);
  }
  memcpy((void *)((longlong)iVar2 * 8 + *param_3),*(void **)(param_1 + 0x78),
         (longlong)(int)uVar1 << 3);
  return;
}



// FUNCTION 140d0ede8 FUN_140d0ede8 body=434 status=ok
// SIG undefined FUN_140d0ede8(void)

longlong * FUN_140d0ede8(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) {
      lVar1 = FUN_1406d0862();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        plVar2 = (longlong *)FUN_140995b6b(param_1);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0xa78))(plVar2,param_2);
          goto LAB_140d0ee7b;
        }
      }
    }
    else {
      plVar2 = (longlong *)FUN_14579bcd6(param_1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xaa8))(plVar2,param_2,1);
LAB_140d0ee7b:
        if (param_3 != '\0') {
          FUN_140b506a4(plVar2);
          (**(code **)(*plVar2 + 0x2a8))(plVar2,0);
        }
        goto LAB_140d0ee7f;
      }
    }
  }
  plVar2 = (longlong *)0x0;
LAB_140d0ee7f:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0ef9b FUN_140d0ef9b body=19 status=ok
// SIG undefined FUN_140d0ef9b(void)

void FUN_140d0ef9b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140d0efae FUN_140d0efae body=353 status=ok
// SIG undefined FUN_140d0efae(void)

void FUN_140d0efae(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d0f033;
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
LAB_140d0f033:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140d0f110 FUN_140d0f110 body=410 status=ok
// SIG undefined FUN_140d0f110(void)

void FUN_140d0f110(ulonglong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar2) {
      uVar5 = uVar2;
    }
    lVar3 = (longlong)(int)uVar5;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar4 = lVar3 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) {
        uVar6 = uVar7 & 0xfffffffffffffff0;
        if (uVar6 < 0x7ff1) goto LAB_140d0f246;
        goto LAB_140d0f216;
      }
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140d0f19f:
  do {
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x14)) {
      uVar6 = uVar4 / 0x14 & 0xffffffff;
    }
    uVar5 = (uint)uVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 == 0) && ((int)uVar5 < 1)) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar4 = FUN_14001fdce(uVar4,uVar6 * 0x14,4);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar5 <= param_2) {
      return;
    }
    uVar7 = 0x14;
    FUN_1467ac767();
LAB_140d0f246:
    bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
    uVar7 = 0x32;
    if (0x32 < bVar1) {
      uVar7 = (ulonglong)bVar1;
    }
    uVar8 = 0x32 - (ulonglong)bVar1;
    do {
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d0f19f;
      lVar3 = uVar7 + 1 + uVar8;
      uVar8 = uVar8 - 1;
    } while (lVar3 != 0x33);
LAB_140d0f216:
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & (uVar6 + uVar4) - 1;
  } while( true );
}



// FUNCTION 140d0f2ac FUN_140d0f2ac body=226 status=ok
// SIG undefined FUN_140d0f2ac(void)

void FUN_140d0f2ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140d0f38e FUN_140d0f38e body=269 status=ok
// SIG undefined FUN_140d0f38e(void)

void FUN_140d0f38e(longlong param_1,int param_2)

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



// FUNCTION 140d0f49c FUN_140d0f49c body=381 status=ok
// SIG undefined FUN_140d0f49c(void)

void FUN_140d0f49c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d0f529;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140d0f529:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 140d0f61a FUN_140d0f61a body=606 status=ok
// SIG undefined FUN_140d0f61a(void)

void FUN_140d0f61a(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar6 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar6;
  uVar8 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar7 = *(longlong *)(param_1 + 0x40) + 0x240;
  uVar8 = FUN_140309e34(lVar1 + 0x80,lVar7,lVar1 + 0x98);
  *(undefined4 *)(param_1 + 0x60) = uVar8;
  uVar8 = FUN_140309e34(lVar1 + 0xa0,lVar7,lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 100) = uVar8;
  FUN_140309ec4(lVar1 + 0xc0,&local_88,lVar7);
  *(undefined8 *)(param_1 + 0x78) = local_78;
  *(undefined4 *)(param_1 + 0x68) = local_88;
  *(undefined4 *)(param_1 + 0x6c) = uStack_84;
  *(undefined4 *)(param_1 + 0x70) = uStack_80;
  *(undefined4 *)(param_1 + 0x74) = uStack_7c;
  FUN_140d0f87a(lVar1 + 0x158,&local_88,param_1 + 0x68,lVar7);
  dVar3 = (double)FUN_144719204(local_88,0x4076800000000000);
  dVar4 = (double)FUN_144719204(uStack_80,0x4076800000000000);
  dVar9 = sin(dVar3 * 0.017453292519943295);
  dVar3 = cos(dVar3 * 0.017453292519943295);
  dVar2 = sin(dVar4 * 0.017453292519943295);
  dVar4 = cos(dVar4 * 0.017453292519943295);
  dVar2 = dVar2 * dVar3;
  dVar4 = dVar4 * dVar3;
  *(double *)(param_1 + 0x80) = dVar4;
  *(double *)(param_1 + 0x88) = dVar2;
  *(double *)(param_1 + 0x90) = dVar9;
  if (*(int *)(lVar1 + 0x2b8) == 0) {
    dVar9 = dVar4 * dVar4 + dVar2 * dVar2;
    if ((dVar9 != 1.0) || (NAN(dVar9))) {
      dVar10 = DAT_14c8464f0;
      dVar3 = DAT_14c8464e8;
      dVar5 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar9) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar10 = dVar9 * 0.0;
        dVar3 = dVar2 * dVar9;
        dVar5 = dVar4 * dVar9;
      }
    }
    else {
      dVar10 = 0.0;
      dVar3 = dVar2;
      dVar5 = dVar4;
    }
    *(double *)(param_1 + 0x80) = dVar5;
    *(double *)(param_1 + 0x88) = dVar3;
    *(double *)(param_1 + 0x90) = dVar10;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d0f87a FUN_140d0f87a body=394 status=ok
// SIG undefined FUN_140d0f87a(void)

double * FUN_140d0f87a(int *param_1,double *param_2,double *param_3,undefined8 param_4)

{
  double _X;
  double dVar1;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_1 == 0) {
    FUN_140d0fa06(param_1 + 2,param_2,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  FUN_140d0fa06(param_1 + 0x40,local_50,param_4);
  FUN_140309ec4(param_1 + 0x1a,&local_98,param_4);
  local_70 = local_88 - param_3[2];
  local_78 = local_90 - param_3[1];
  local_80 = local_98 - *param_3;
  FUN_1401c9a0e(local_50,&local_68);
  dVar1 = 0.0;
  if ((((local_68 != 0.0) || (NAN(local_68))) || (local_60 != 0.0)) || (NAN(local_60))) {
    dVar1 = atan2(local_60,local_68);
    dVar1 = dVar1 * 57.29577951308232;
  }
  param_2[1] = dVar1;
  _X = SQRT(local_68 * local_68 + local_60 * local_60);
  dVar1 = 0.0;
  if (((_X != 0.0) || (NAN(_X))) || ((local_58 != 0.0 || (NAN(local_58))))) {
    dVar1 = atan2(local_58,_X);
    dVar1 = dVar1 * 57.29577951308232;
  }
  *param_2 = dVar1;
  param_2[2] = 0.0;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d0fa06 FUN_140d0fa06 body=81 status=ok
// SIG undefined FUN_140d0fa06(void)

undefined8 FUN_140d0fa06(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14030a04a(param_1,param_3);
  if (lVar1 == 0) {
    FUN_140d0fa58(param_1,param_2,param_3,param_1 + 0x18);
  }
  else {
    FUN_140d0fb16(param_1 + 0x30,param_2,lVar1,0);
  }
  return param_2;
}



// FUNCTION 140d0fa58 FUN_140d0fa58 body=186 status=ok
// SIG undefined FUN_140d0fa58(void)

undefined4 *
FUN_140d0fa58(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_3 + 0xac) != -1) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *param_2 = *param_4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    cVar4 = FUN_1470f43b2(param_3,*(undefined8 *)(param_1 + 8),&local_30);
LAB_140d0fb01:
    if (cVar4 != '\0') {
      *(undefined8 *)(param_2 + 4) = local_20;
      goto LAB_140d0fa96;
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar4 = FUN_1470f41da(param_3,*(undefined8 *)(param_1 + 8),&local_30);
    goto LAB_140d0fb01;
  }
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
LAB_140d0fa96:
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0fb16 FUN_140d0fb16 body=268 status=ok
// SIG undefined FUN_140d0fb16(void)

double * FUN_140d0fb16(undefined8 param_1,double *param_2,undefined8 param_3,undefined1 param_4)

{
  double _X;
  double dVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  undefined1 local_40;
  double local_38;
  double local_30;
  double local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = '\0';
  local_40 = 0;
  local_68 = param_4;
  FUN_140d0fc24(param_1,param_3,&local_38,&local_58);
  if (local_20 == '\x01') {
    dVar1 = 0.0;
    if ((((local_38 != 0.0) || (NAN(local_38))) || (local_30 != 0.0)) || (NAN(local_30))) {
      dVar1 = atan2(local_30,local_38);
      dVar1 = dVar1 * 57.29577951308232;
    }
    param_2[1] = dVar1;
    _X = SQRT(local_38 * local_38 + local_30 * local_30);
    dVar1 = 0.0;
    if (((_X != 0.0) || (NAN(_X))) || ((local_28 != 0.0 || (NAN(local_28))))) {
      dVar1 = atan2(local_28,_X);
      dVar1 = dVar1 * 57.29577951308232;
    }
    *param_2 = dVar1;
    param_2[2] = 0.0;
  }
  else {
    param_2[2] = local_48;
    *param_2 = local_58;
    param_2[1] = dStack_50;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d0fc24 FUN_140d0fc24 body=3904 status=ok
// SIG undefined FUN_140d0fc24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d0fc24(byte *param_1,undefined1 (*param_2) [16],double *param_3,
                  undefined1 (*param_4) [16],undefined1 param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  undefined1 (*in_RAX) [16];
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 (*pauVar33) [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  ulonglong uVar42;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 (*local_108) [16];
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 (*local_e8) [16];
  ulonglong local_e0;
  undefined1 auVar27 [16];
  undefined1 auVar45 [12];
  
  auVar45 = unaff_XMM6._4_12_;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar3 = *param_1;
  if (10 < (ulonglong)bVar3) goto LAB_140d0fd59;
  iVar11 = (&switchD_140d0fcc8::switchdataD_14a1cc9a0)[bVar3] + 0x4a1cc9a0;
  switch(bVar3) {
  case 0:
    if ((param_2 == (undefined1 (*) [16])0x0) ||
       (lVar10 = *(longlong *)(param_2[0x1c] + 8), lVar10 == 0)) {
      local_e8 = DAT_14c846508;
      local_f8 = DAT_14c8464f8;
      dStack_f0 = DAT_14c846500;
    }
    else {
      dVar14 = *(double *)(lVar10 + 0x240);
      dVar16 = *(double *)(lVar10 + 0x248);
      pauVar33 = *(undefined1 (**) [16])(lVar10 + 0x250);
      dVar37 = *(double *)(lVar10 + 600);
      pdVar9 = *(double **)(lVar10 + 0x228);
      local_118 = dVar14;
      dStack_110 = dVar16;
      local_108 = pauVar33;
      dStack_100 = dVar37;
      if (pdVar9 == (double *)0x0) {
        iVar11 = 0x40;
        pdVar9 = (double *)FUN_14001cc68(0x40,0x10);
        dVar38 = DAT_14c8463d8;
        *pdVar9 = DAT_14c8463d0;
        pdVar9[1] = dVar38;
        dVar38 = DAT_14c8463e8;
        pdVar9[2] = DAT_14c8463e0;
        pdVar9[3] = dVar38;
        dVar38 = DAT_14c846500;
        pdVar9[4] = DAT_14c8464f8;
        pdVar9[5] = dVar38;
        param_2 = DAT_14c846508;
        pdVar9[6] = (double)DAT_14c846508;
        *(double **)(lVar10 + 0x228) = pdVar9;
      }
      unaff_XMM6._8_8_ = -(ulonglong)(dVar16 != pdVar9[1]);
      unaff_XMM6._0_8_ = -(ulonglong)(dVar14 != *pdVar9);
      auVar35._8_8_ = -(ulonglong)(dVar37 != pdVar9[3]);
      auVar35._0_8_ = -(ulonglong)((double)pauVar33 != pdVar9[2]);
      iVar7 = movmskpd((int)param_2,unaff_XMM6);
      uVar12 = movmskpd(iVar11,auVar35);
      if ((uVar12 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar9[2] = (double)local_108;
        pdVar9[3] = dStack_100;
        *pdVar9 = local_118;
        pdVar9[1] = dStack_110;
        FUN_1448052ee(&local_118,&local_f8);
        pdVar9[6] = (double)local_e8;
        pdVar9[4] = local_f8;
        pdVar9[5] = dStack_f0;
      }
      local_e8 = (undefined1 (*) [16])pdVar9[6];
      local_f8 = pdVar9[4];
      dStack_f0 = pdVar9[5];
    }
    auVar45 = unaff_XMM6._4_12_;
    goto LAB_140d0fd44;
  case 1:
    if (param_2 == (undefined1 (*) [16])0x0) {
      local_e8 = DAT_14c846508;
      local_f8 = DAT_14c8464f8;
      dStack_f0 = DAT_14c846500;
    }
    else {
      (**(code **)(*(longlong *)*param_2 + 0x588))(param_2,&local_118,&local_f8);
    }
    in_RAX = (undefined1 (*) [16])&local_f8;
    if (in_RAX == param_4) goto LAB_140d0fd59;
LAB_140d0fd44:
    *(undefined1 (**) [16])param_4[1] = local_e8;
    in_RAX = local_e8;
    dVar14 = local_f8;
    dVar16 = dStack_f0;
LAB_140d0fd52:
    *(double *)*param_4 = dVar14;
    *(double *)(*param_4 + 8) = dVar16;
    goto LAB_140d0fd55;
  case 2:
    in_RAX = (undefined1 (*) [16])0x0;
    dVar14 = DAT_14c8464e8;
    pauVar33 = DAT_14c8464f0;
    dVar16 = DAT_14c8464e0;
    if (param_2 != (undefined1 (*) [16])0x0) {
      in_RAX = (undefined1 (*) [16])(**(code **)(*(longlong *)*param_2 + 0x328))(param_2,&local_118)
      ;
      dVar37 = (double)local_108 * (double)local_108 +
               local_118 * local_118 + dStack_110 * dStack_110;
      if (((dVar37 != 1.0) ||
          (dVar14 = dStack_110, pauVar33 = local_108, dVar16 = local_118, NAN(dVar37))) &&
         (dVar14 = DAT_14c8464e8, pauVar33 = DAT_14c8464f0, dVar16 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar37)) {
        dVar16 = 1.0 / SQRT(dVar37);
        pauVar33 = (undefined1 (*) [16])((double)local_108 * dVar16);
        dVar14 = dStack_110 * dVar16;
        dVar16 = local_118 * dVar16;
      }
    }
    *param_3 = dVar16;
    param_3[1] = dVar14;
    param_3[2] = (double)pauVar33;
    break;
  case 3:
    if (param_2 == (undefined1 (*) [16])0x0) {
      local_108 = DAT_14c8464f0;
      local_118 = DAT_14c8464e0;
      dStack_110 = DAT_14c8464e8;
    }
    else {
      FUN_1470ee68a(&local_118,param_2);
    }
    param_3[2] = (double)local_108;
    *param_3 = local_118;
    param_3[1] = dStack_110;
    in_RAX = local_108;
    break;
  case 4:
    uVar12 = rand();
    auVar45._8_4_ = 0;
    auVar45._0_8_ = SUB128(ZEXT812(0x46fffe00),4);
    uVar8 = rand();
    in_RAX = (undefined1 (*) [16])(ulonglong)(uVar8 & 0x7fff);
    *(double *)*param_4 = (double)(((float)(uVar8 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    *(double *)(*param_4 + 8) = (double)(((float)(uVar12 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    goto LAB_140d0ffbc;
  case 5:
    uVar12 = rand();
    auVar45._8_4_ = 0;
    auVar45._0_8_ = SUB128(ZEXT812(0x46fffe00),4);
    uVar8 = rand();
    in_RAX = (undefined1 (*) [16])(ulonglong)(uVar8 & 0x7fff);
    *(double *)*param_4 = (double)(((float)(uVar8 & 0x7fff) / 32767.0) * 180.0 + 0.0);
    *(double *)(*param_4 + 8) = (double)(((float)(uVar12 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    goto LAB_140d0ffbc;
  case 6:
    uVar12 = rand();
    auVar45._8_4_ = 0;
    auVar45._0_8_ = SUB128(ZEXT812(0x46fffe00),4);
    uVar8 = rand();
    in_RAX = (undefined1 (*) [16])(ulonglong)(uVar8 & 0x7fff);
    *(double *)*param_4 = (double)(((float)(uVar8 & 0x7fff) / 32767.0) * 180.0 + -180.0);
    *(double *)(*param_4 + 8) = (double)(((float)(uVar12 & 0x7fff) / 32767.0) * 360.0 + 0.0);
LAB_140d0ffbc:
    *(undefined8 *)param_4[1] = 0;
LAB_140d0fd55:
    param_4[1][8] = 1;
    goto LAB_140d0fd59;
  case 7:
    uVar12 = rand();
    in_RAX = (undefined1 (*) [16])0x0;
    *(undefined8 *)*param_4 = 0;
    *(double *)(*param_4 + 8) = (double)(((float)(uVar12 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    *(undefined8 *)param_4[1] = 0;
    goto LAB_140d0fd55;
  case 8:
    *param_3 = 0.0;
    param_3[1] = 0.0;
    in_RAX = (undefined1 (*) [16])&DAT_3ff0000000000000;
    goto LAB_140d0ff49;
  case 9:
    *param_3 = 0.0;
    param_3[1] = 0.0;
    in_RAX = (undefined1 (*) [16])0xbff0000000000000;
LAB_140d0ff49:
    param_3[2] = (double)in_RAX;
    break;
  case 10:
    if (param_2 == (undefined1 (*) [16])0x0) {
      local_108 = DAT_14c846508;
      local_118 = DAT_14c8464f8;
      dStack_110 = DAT_14c846500;
    }
    else {
      FUN_14579bd88(param_1,&local_118,param_2,param_5);
    }
    in_RAX = (undefined1 (*) [16])&local_118;
    if (in_RAX == param_4) goto LAB_140d0fd59;
    *(undefined1 (**) [16])param_4[1] = local_108;
    in_RAX = local_108;
    dVar14 = local_118;
    dVar16 = dStack_110;
    goto LAB_140d0fd52;
  }
  *(undefined1 *)(param_3 + 3) = 1;
LAB_140d0fd59:
  cVar4 = *(char *)(param_3 + 3);
  pdVar9 = (double *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  if ((cVar4 == '\0') && (param_4[1][8] == '\0')) {
    lVar10 = FUN_1470d1d33();
    if ((lVar10 != 0) && (FUN_1401cfad2(lVar10,&local_118,*param_1), local_118 != 0.0)) {
      FUN_1400020a8();
    }
    goto LAB_140d0fe85;
  }
  pdVar1 = param_3 + 3;
  bVar3 = param_1[1];
  uVar8 = (uint)bVar3;
  uVar12 = (uint)bVar3;
  if (bVar3 == 1) {
    if (cVar4 == '\0') {
      uVar2 = *(undefined8 *)param_4[1];
      dVar14 = (double)FUN_144719204(*(double *)(*param_4 + 8) + 180.0);
      uVar42 = (ulonglong)(dVar14 + 360.0) & -(ulonglong)(dVar14 < 0.0);
      auVar45._4_8_ = 0;
      auVar45._0_4_ = (uint)(uVar42 >> 0x20);
      dVar14 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar14 | uVar42);
      *(ulonglong *)*param_4 = *(ulonglong *)*param_4 ^ 0x8000000000000000;
      *(ulonglong *)(*param_4 + 8) =
           ~-(ulonglong)(180.0 < dVar14) & (ulonglong)dVar14 |
           (ulonglong)(dVar14 + -360.0) & -(ulonglong)(180.0 < dVar14);
      *(undefined8 *)param_4[1] = uVar2;
      pdVar9 = (double *)(param_4[1] + 8);
      uVar12 = uVar8;
    }
    else {
      *(undefined4 *)param_3 = *(undefined4 *)param_3;
      *(uint *)((longlong)param_3 + 4) = *(uint *)((longlong)param_3 + 4) ^ 0x80000000;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_3 + 1);
      *(uint *)((longlong)param_3 + 0xc) = *(uint *)((longlong)param_3 + 0xc) ^ 0x80000000;
      param_3[2] = -param_3[2];
      pdVar9 = pdVar1;
      uVar12 = (uint)bVar3;
    }
LAB_140d10860:
    *(undefined1 *)pdVar9 = 1;
  }
  else {
    if (bVar3 == 2) {
      if (cVar4 != '\0') goto LAB_140d1091f;
      *(undefined8 *)*param_4 = 0;
LAB_140d108ea:
      *(undefined8 *)param_4[1] = 0;
      pdVar9 = (double *)(param_4[1] + 8);
      uVar12 = 0;
      goto LAB_140d10860;
    }
    if (bVar3 == 3) {
      if (cVar4 == '\0') {
        dVar14 = (double)FUN_144719204(*(double *)(*param_4 + 8) + 180.0);
        uVar42 = (ulonglong)(dVar14 + 360.0) & -(ulonglong)(dVar14 < 0.0);
        auVar45._4_8_ = 0;
        auVar45._0_4_ = (uint)(uVar42 >> 0x20);
        dVar14 = (double)(~-(ulonglong)(dVar14 < 0.0) & (ulonglong)dVar14 | uVar42);
        *(undefined8 *)*param_4 = 0;
        *(ulonglong *)(*param_4 + 8) =
             ~-(ulonglong)(180.0 < dVar14) & (ulonglong)dVar14 |
             (ulonglong)(dVar14 + -360.0) & -(ulonglong)(180.0 < dVar14);
        goto LAB_140d108ea;
      }
      *(undefined4 *)param_3 = *(undefined4 *)param_3;
      *(uint *)((longlong)param_3 + 4) = *(uint *)((longlong)param_3 + 4) ^ 0x80000000;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_3 + 1);
      *(uint *)((longlong)param_3 + 0xc) = *(uint *)((longlong)param_3 + 0xc) ^ 0x80000000;
LAB_140d1091f:
      param_3[2] = 0.0;
      pdVar9 = pdVar1;
      uVar12 = (uint)bVar3;
      goto LAB_140d10860;
    }
  }
  auVar27 = _DAT_1499387d0;
  auVar35 = *(undefined1 (*) [16])(param_1 + 8);
  dVar14 = (double)DAT_1499387d0;
  dVar16 = DAT_1499387d0._8_8_;
  auVar21 = divpd(auVar35,_DAT_1499387d0);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(double *)(param_1 + 0x18);
  auVar29 = divpd(auVar28,_DAT_1499387d0);
  auVar21 = roundpd(auVar21,auVar21,3);
  auVar29 = roundpd(auVar29,auVar29,3);
  dVar37 = auVar35._0_8_ - auVar21._0_8_ * dVar14;
  dVar38 = auVar35._8_8_ - auVar21._8_8_ * dVar16;
  dVar39 = *(double *)(param_1 + 0x18) - auVar29._0_8_ * dVar14;
  dVar40 = 0.0 - auVar29._8_8_ * dVar16;
  auVar36._0_8_ = dVar37 + dVar14;
  auVar36._8_8_ = dVar38 + dVar16;
  auVar34._0_8_ = dVar39 + dVar14;
  auVar34._8_8_ = dVar40 + dVar16;
  auVar22._8_8_ = -(ulonglong)(0.0 <= dVar38);
  auVar22._0_8_ = -(ulonglong)(0.0 <= dVar37);
  auVar21._8_8_ = dVar38;
  auVar21._0_8_ = dVar37;
  auVar21 = blendvpd(auVar36,auVar21,auVar22);
  auVar23._8_8_ = -(ulonglong)(0.0 <= dVar40);
  auVar23._0_8_ = -(ulonglong)(0.0 <= dVar39);
  auVar5._8_8_ = dVar40;
  auVar5._0_8_ = dVar39;
  auVar35 = blendvpd(auVar34,auVar5,auVar23);
  auVar24._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
  auVar24._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
  auVar6._8_8_ = auVar21._8_8_ + -360.0;
  auVar6._0_8_ = auVar21._0_8_ + -360.0;
  auVar21 = blendvpd(auVar21,auVar6,auVar24);
  auVar25._8_8_ = -(ulonglong)(180.0 < auVar35._8_8_);
  auVar25._0_8_ = -(ulonglong)(180.0 < auVar35._0_8_);
  auVar29._8_8_ = auVar35._8_8_ + -360.0;
  auVar29._0_8_ = auVar35._0_8_ + -360.0;
  auVar35 = blendvpd(auVar35,auVar29,auVar25);
  auVar30._8_8_ = -(ulonglong)(1.0 < ABS(auVar21._8_8_));
  auVar30._0_8_ = -(ulonglong)(1.0 < ABS(auVar21._0_8_));
  iVar11 = movmskpd((int)pdVar9,auVar30);
  auVar26._8_8_ = -(ulonglong)(1.0 < ABS(auVar35._8_8_));
  auVar26._0_8_ = -(ulonglong)(1.0 < ABS(auVar35._0_8_));
  uVar12 = movmskpd(uVar12,auVar26);
  if ((uVar12 & 0x3fffffff) != 0 || iVar11 != 0) {
    if (*(char *)pdVar1 == '\x01') {
      FUN_144a79a9c(param_3,(undefined1 (*) [16])&local_118);
      if ((undefined1 (*) [16])&local_118 != param_4) {
        *(undefined1 (**) [16])param_4[1] = local_108;
        *(double *)*param_4 = local_118;
        *(double *)(*param_4 + 8) = dStack_110;
        param_4[1][8] = 1;
      }
      if (*(char *)pdVar1 == '\x01') {
        *(undefined1 *)pdVar1 = 0;
      }
    }
    auVar35 = divpd(*param_4,auVar27);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(double *)param_4[1];
    auVar21 = divpd(auVar31,auVar27);
    auVar35 = roundpd(auVar35,auVar35,3);
    auVar21 = roundpd(auVar21,auVar21,3);
    dVar37 = (*(double *)*param_4 - auVar35._0_8_ * dVar14) * 0.008726646259971648;
    dVar17 = (*(double *)(*param_4 + 8) - auVar35._8_8_ * dVar16) * 0.008726646259971648;
    dVar18 = (*(double *)param_4[1] - auVar21._0_8_ * dVar14) * 0.008726646259971648;
    dVar19 = (0.0 - auVar21._8_8_ * dVar16) * 0.008726646259971648;
    dVar38 = sin(dVar37);
    dVar39 = sin(dVar17);
    dVar40 = sin(dVar18);
    sin(dVar19);
    dVar15 = cos(dVar37);
    dVar17 = cos(dVar17);
    dVar18 = cos(dVar18);
    cos(dVar19);
    auVar44._0_8_ = -(dVar17 * dVar38 * dVar40) + dVar39 * dVar15 * dVar18;
    auVar44._8_8_ = dVar39 * dVar38 * dVar40 + dVar17 * dVar15 * dVar18;
    auVar45 = auVar44._4_12_;
    dVar37 = dVar38 * dVar39 * dVar18 - dVar15 * dVar17 * dVar40;
    dVar38 = -(dVar38 * dVar17 * dVar18) - dVar15 * dVar39 * dVar40;
    auVar35 = *(undefined1 (*) [16])(param_1 + 8);
    auVar21 = divpd(auVar35,auVar27);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(double *)(param_1 + 0x18);
    auVar29 = divpd(auVar32,auVar27);
    auVar21 = roundpd(auVar21,auVar21,3);
    auVar29 = roundpd(auVar29,auVar29,3);
    dVar40 = (auVar35._0_8_ - auVar21._0_8_ * dVar14) * 0.008726646259971648;
    dVar15 = (auVar35._8_8_ - auVar21._8_8_ * dVar16) * 0.008726646259971648;
    dVar17 = (*(double *)(param_1 + 0x18) - auVar29._0_8_ * dVar14) * 0.008726646259971648;
    dVar18 = (0.0 - auVar29._8_8_ * dVar16) * 0.008726646259971648;
    dVar14 = sin(dVar40);
    dVar16 = sin(dVar15);
    dVar39 = sin(dVar17);
    sin(dVar18);
    dVar40 = cos(dVar40);
    dVar15 = cos(dVar15);
    dVar17 = cos(dVar17);
    cos(dVar18);
    dVar19 = -(dVar15 * dVar14 * dVar39) + dVar16 * dVar40 * dVar17;
    dVar20 = dVar16 * dVar14 * dVar39 + dVar15 * dVar40 * dVar17;
    dVar18 = dVar14 * dVar16 * dVar17 - dVar40 * dVar15 * dVar39;
    dVar14 = -(dVar14 * dVar15 * dVar17) - dVar40 * dVar16 * dVar39;
    local_118 = dVar14 * auVar44._0_8_ * -1.0 +
                dVar19 * dVar38 + dVar37 * dVar20 * 1.0 + auVar44._8_8_ * dVar18;
    dStack_110 = dVar18 * auVar44._0_8_ * 1.0 +
                 dVar20 * dVar38 + dVar37 * dVar19 * -1.0 + auVar44._8_8_ * dVar14;
    local_108 = (undefined1 (*) [16])
                (dVar20 * auVar44._0_8_ * 1.0 +
                ((dVar37 * dVar14 * 1.0 + auVar44._8_8_ * dVar19) - dVar38 * dVar18));
    dStack_100 = dVar19 * auVar44._0_8_ * -1.0 +
                 ((dVar37 * dVar18 * -1.0 + auVar44._8_8_ * dVar20) - dVar38 * dVar14);
    FUN_1448052ee(&local_118,&local_f8);
    *(undefined1 (**) [16])param_4[1] = local_e8;
    *(double *)*param_4 = local_f8;
    *(double *)(*param_4 + 8) = dStack_f0;
    param_4[1][8] = 1;
  }
  if (0.0001 < *(float *)(param_1 + 0x20)) {
    uVar12 = rand();
    fVar41 = (float)(uVar12 & 0x7fff) / -32767.0 + 0.5;
    fVar13 = 1.0 - (fVar41 + fVar41) * (fVar41 + fVar41);
    auVar27 = ZEXT416((uint)fVar13);
    if (fVar13 < 0.0) {
      auVar27._0_4_ = sqrtf(fVar13);
      auVar27._4_4_ = extraout_XMM0_Db;
      auVar27._8_8_ = extraout_XMM0_Qb;
      fVar13 = auVar27._0_4_;
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    auVar43._0_4_ = fVar41 * *(float *)(param_1 + 0x20);
    auVar43._4_12_ = auVar45;
    auVar35 = blendps(auVar43,ZEXT816(0),0xe);
    roundps(auVar27,auVar35,3);
    uVar12 = rand();
    auVar35 = blendps(ZEXT416((uint)(((float)(uVar12 & 0x7fff) / -32767.0 + 0.5) * fVar13 *
                                    *(float *)(param_1 + 0x20))),ZEXT816(0),0xe);
    roundps(auVar35,auVar35,3);
    if (*(char *)pdVar1 == '\x01') {
      dVar16 = *param_3;
      dVar14 = param_3[1];
      dVar37 = 0.0;
      if ((((dVar16 != 0.0) || (NAN(dVar16))) || (dVar14 != 0.0)) || (NAN(dVar14))) {
        dVar37 = atan2(dVar14,dVar16);
        dVar37 = dVar37 * 57.29577951308232;
        dVar16 = *param_3;
        dVar14 = param_3[1];
      }
      dVar38 = SQRT(dVar16 * dVar16 + dVar14 * dVar14);
      dVar16 = param_3[2];
      dVar14 = 0.0;
      if (((dVar16 != 0.0) || (NAN(dVar16))) || ((dVar38 != 0.0 || (NAN(dVar38))))) {
        dVar14 = atan2(dVar16,dVar38);
        dVar14 = dVar14 * 57.29577951308232;
      }
      uVar46 = SUB84(dVar37,0);
      uVar47 = (undefined4)((ulonglong)dVar37 >> 0x20);
      dVar16 = 0.0;
    }
    else {
      auVar35 = *param_4;
      dVar14 = auVar35._0_8_;
      uVar46 = auVar35._8_4_;
      uVar47 = auVar35._12_4_;
      dVar16 = *(double *)param_4[1] * 0.01745329238474369;
    }
    dVar37 = (double)CONCAT44(uVar47,uVar46) * 0.01745329238474369;
    dVar38 = sin(dVar14 * 0.01745329238474369);
    dVar39 = sin(dVar37);
    dVar40 = sin(dVar16);
    dVar15 = cos(dVar14 * 0.01745329238474369);
    dVar37 = cos(dVar37);
    dVar16 = cos(dVar16);
    local_138 = dVar15 * dVar40;
    local_128 = DAT_14c8464e0;
    dStack_120 = DAT_14c8464e8;
    dVar14 = (double)DAT_14c8464f0 * 0.0;
    local_130 = dVar38;
    dVar17 = (double)FUN_144719204();
    dVar18 = (double)FUN_144719204();
    dVar19 = sin(dVar17 * 0.017453292519943295);
    dVar17 = cos(dVar17 * 0.017453292519943295);
    dVar20 = sin(dVar18 * 0.017453292519943295);
    dVar18 = cos(dVar18 * 0.017453292519943295);
    dVar20 = dVar20 * dVar17;
    dVar18 = dVar18 * dVar17;
    *param_3 = local_128 * 0.0 +
               dVar19 * -(dVar38 * dVar16 * dVar37 + dVar39 * dVar40) +
               dVar20 * (dVar38 * dVar40 * dVar37 - dVar39 * dVar16) + dVar18 * dVar15 * dVar37;
    param_3[1] = dStack_120 * 0.0 +
                 dVar19 * (dVar37 * dVar40 - dVar39 * dVar38 * dVar16) +
                 dVar20 * (dVar38 * dVar40 * dVar39 + dVar37 * dVar16) + dVar18 * dVar39 * dVar15;
    param_3[2] = (dVar18 * local_130 - dVar20 * local_138) + dVar15 * dVar16 * dVar19 + dVar14;
    *(undefined1 *)(param_3 + 3) = 1;
    if (param_4[1][8] == '\x01') {
      param_4[1][8] = 0;
    }
  }
LAB_140d0fe85:
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d10b66 FUN_140d10b66 body=162 status=ok
// SIG undefined FUN_140d10b66(void)

void FUN_140d10b66(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_2 + 0x5c) != 0) {
    uVar1 = *(uint *)(param_2 + 0x58);
    bVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d10bd8;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_2 + 0x5c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      if (*(char *)(lVar4 + 0x180) == '\x01') {
        bVar2 = *(byte *)(param_2 + 0x91);
        goto LAB_140d10bd8;
      }
    }
  }
  bVar2 = 0;
LAB_140d10bd8:
  bVar2 = bVar2 ^ *(byte *)(param_1 + 0x38);
  if (((*(byte *)(param_1 + 0x30) != bVar2) &&
      (*(byte *)(param_1 + 0x30) = bVar2, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140d10bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x60))(plVar3,param_1,*(code **)(*plVar3 + 0x60));
    return;
  }
  return;
}



// FUNCTION 140d10c08 FUN_140d10c08 body=21 status=ok
// SIG undefined FUN_140d10c08(void)

undefined8 FUN_140d10c08(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d10c1e FUN_140d10c1e body=43 status=ok
// SIG undefined FUN_140d10c1e(void)

void FUN_140d10c1e(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140e58bde();
  if (*(char *)(param_1 + 0x90) != (char)uVar1) {
    FUN_140d10c4a(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 140d10c4a FUN_140d10c4a body=262 status=ok
// SIG undefined FUN_140d10c4a(void)

void FUN_140d10c4a(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x90) = param_2;
  FUN_140d10fb2();
  FUN_140d10d50(param_1,param_1);
  cVar2 = FUN_140a30cde(param_1);
  cVar3 = *(char *)(param_1 + 0x90);
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      lVar1 = param_1 + 0x58;
      cVar3 = FUN_144729dda(lVar1);
      if (cVar3 != '\0') {
        uVar4 = FUN_14479d2ce(lVar1);
        cVar3 = FUN_148934496(uVar4);
        if (cVar3 != '\0') {
          uVar4 = FUN_14479d2ce(lVar1);
          cVar3 = FUN_140a30ba2(uVar4);
          if (cVar3 == '\0') {
            lVar1 = *(longlong *)(param_1 + 0x50);
            if ((lVar1 != 0) && ((*(char *)(lVar1 + 8) != '\x01' || (*(int *)(lVar1 + 0xc) != 0))))
            {
              FUN_14128cbda(param_1,param_1 + 0x94,0,1);
              return;
            }
          }
          else {
            cVar3 = *(char *)(param_1 + 0x91);
            *(char *)(param_1 + 0x91) = *(char *)(param_1 + 0x90);
            *(undefined4 *)(param_1 + 0x9c) = 0;
            if (cVar3 != *(char *)(param_1 + 0x90)) goto LAB_140d10ca0;
          }
        }
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x91);
    *(char *)(param_1 + 0x91) = cVar3;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    if (cVar2 != cVar3) {
LAB_140d10ca0:
      FUN_14128cdea(param_1);
      FUN_140d10d50(param_1 + 0x18,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140d10d50 FUN_140d10d50 body=162 status=ok
// SIG undefined FUN_140d10d50(void)

void FUN_140d10d50(longlong *param_1,undefined8 param_2)

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
        goto LAB_140d10ddd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d10ddd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d10df2 FUN_140d10df2 body=21 status=ok
// SIG undefined FUN_140d10df2(void)

undefined8 FUN_140d10df2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d10e20 FUN_140d10e20 body=162 status=ok
// SIG undefined FUN_140d10e20(void)

void FUN_140d10e20(longlong *param_1,undefined8 param_2)

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
        goto LAB_140d10ead;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d10ead:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d10ec2 FUN_140d10ec2 body=103 status=ok
// SIG undefined FUN_140d10ec2(void)

ulonglong FUN_140d10ec2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140d10f0c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d10f0c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d10f2a FUN_140d10f2a body=135 status=ok
// SIG undefined FUN_140d10f2a(void)

void FUN_140d10f2a(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    iVar3 = 0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x40);
    plVar1 = plVar4 + *(int *)(param_1 + 0x48);
    iVar3 = 0;
    do {
      lVar6 = (longlong)*(int *)(*plVar4 + 0x68);
      iVar7 = 0;
      if (lVar6 != 0) {
        lVar5 = 0;
        iVar7 = 0;
        do {
          iVar7 = iVar7 + *(int *)(*(longlong *)(*(longlong *)(*plVar4 + 0x60) + lVar5) + 0x94);
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
      iVar3 = iVar3 + iVar7;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  bVar2 = *(int *)(param_1 + 0x38) <= iVar3;
  if ((((bool)*(char *)(param_1 + 0x30) != bVar2) &&
      (*(bool *)(param_1 + 0x30) = bVar2, *(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140d10faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 140d10fb2 FUN_140d10fb2 body=165 status=ok
// SIG undefined FUN_140d10fb2(void)

void FUN_140d10fb2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x5c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if (((*(longlong **)(lVar2 + 0x188) == (longlong *)0x0) ||
          (lVar2 = **(longlong **)(lVar2 + 0x188), lVar2 == 0)) ||
         ((*(char *)(lVar2 + 0x30) == '\0' &&
          ((*(char *)(lVar2 + 0x31) == '\0' && (*(int *)(lVar2 + 0x6c) != 1)))))) {
                    /* WARNING: Could not recover jumptable at 0x000140d11048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
        return;
      }
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 1;
    }
  }
  return;
}



// FUNCTION 140d1105a FUN_140d1105a body=279 status=ok
// SIG undefined FUN_140d1105a(void)

undefined8 FUN_140d1105a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140d1116b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d1116b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140d1116b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d11118;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140d11118;
    }
  }
  uVar6 = 0;
LAB_140d11118:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d11172 FUN_140d11172 body=96 status=ok
// SIG undefined FUN_140d11172(void)

void FUN_140d11172(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x60))();
  }
  FUN_140d111f0(param_1 + 0xf0,param_1);
  lVar1 = param_1 + 0x60;
  if (*(char *)(param_2 + 0x90) == '\0') {
    lVar1 = param_1 + 0x78;
  }
  FUN_140d114b4(lVar1,param_1,param_2);
  return;
}



// FUNCTION 140d111d2 FUN_140d111d2 body=21 status=ok
// SIG undefined FUN_140d111d2(void)

undefined8 FUN_140d111d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d111f0 FUN_140d111f0 body=162 status=ok
// SIG undefined FUN_140d111f0(void)

void FUN_140d111f0(longlong *param_1,undefined8 param_2)

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
        goto LAB_140d1127d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d1127d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d11292 FUN_140d11292 body=21 status=ok
// SIG undefined FUN_140d11292(void)

undefined8 FUN_140d11292(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d112b8 FUN_140d112b8 body=173 status=ok
// SIG undefined FUN_140d112b8(void)

void FUN_140d112b8(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140d1134f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d1134f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d11366 FUN_140d11366 body=103 status=ok
// SIG undefined FUN_140d11366(void)

ulonglong FUN_140d11366(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140d113b0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d113b0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d113ce FUN_140d113ce body=93 status=ok
// SIG undefined FUN_140d113ce(void)

void FUN_140d113ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = FUN_1401cd362(param_3);
    lVar3 = FUN_140d1142c(lVar1);
    if (lVar2 == lVar3) {
      FUN_140d118ce(param_1,lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140d1142c FUN_140d1142c body=136 status=ok
// SIG undefined FUN_140d1142c(void)

void FUN_140d1142c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
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
    return;
  }
  return;
}



// FUNCTION 140d114b4 FUN_140d114b4 body=173 status=ok
// SIG undefined FUN_140d114b4(void)

void FUN_140d114b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140d1154b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d1154b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d11562 FUN_140d11562 body=61 status=ok
// SIG undefined FUN_140d11562(void)

void FUN_140d11562(longlong param_1)

{
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x60))();
  }
  FUN_140d111f0(param_1 + 0xf0,param_1);
  return;
}



// FUNCTION 140d115a0 FUN_140d115a0 body=190 status=ok
// SIG undefined FUN_140d115a0(void)

void FUN_140d115a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x60))();
  }
  FUN_140d111f0(param_1 + 0xf0,param_1);
  if (((((*(int *)(param_2 + 0x5c) != 0) && (uVar1 = *(uint *)(param_2 + 0x58), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_2 + 0x5c))))) &&
     ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    if ((*(char *)(lVar2 + 0x180) == '\x01') && (lVar2 = 0x90, *(char *)(param_2 + 0x91) != '\0'))
    goto LAB_140d1163f;
  }
  lVar2 = 0xa8;
LAB_140d1163f:
  FUN_140d114b4(lVar2 + param_1,param_1,param_2);
  return;
}



// FUNCTION 140d1165e FUN_140d1165e body=103 status=ok
// SIG undefined FUN_140d1165e(void)

ulonglong FUN_140d1165e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140d116a8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d116a8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d116c6 FUN_140d116c6 body=279 status=ok
// SIG undefined FUN_140d116c6(void)

undefined8 FUN_140d116c6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140d117d7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d117d7;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140d117d7:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d11784;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140d11784;
    }
  }
  uVar6 = 0;
LAB_140d11784:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d117de FUN_140d117de body=239 status=ok
// SIG undefined FUN_140d117de(void)

void FUN_140d117de(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x60))();
  }
  FUN_140d111f0(param_1 + 0xf0,param_1);
  plVar6 = (longlong *)(param_1 + 0x30);
  if (*(char *)(param_2 + 0x80) == '\0') {
    plVar6 = (longlong *)(param_1 + 0x48);
  }
  iVar1 = *(int *)((longlong)plVar6 + 0x14);
  *(int *)((longlong)plVar6 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)plVar6[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)plVar6 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar9 = uVar5;
    while (((*(int *)(*plVar6 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*plVar6 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2), cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar9 < 2;
      uVar9 = uVar9 - 1;
      if (bVar3) {
        *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_140d118b7;
      }
    }
    uVar5 = uVar9 - 1;
    bVar7 = true;
  } while (1 < uVar9);
  *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + -1;
LAB_140d118b7:
  FUN_14474d06a(plVar6,0);
  return;
}



// FUNCTION 140d118ce FUN_140d118ce body=440 status=ok
// SIG undefined FUN_140d118ce(void)

ulonglong FUN_140d118ce(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_140e58d02(*(longlong *)(param_2 + 0x20),&local_30);
    plVar1 = local_28;
    if ((longlong *)(param_1 + 0x38) != &local_30) {
      *(longlong *)(param_1 + 0x38) = local_30;
      local_30 = 0;
      plVar4 = *(longlong **)(param_1 + 0x40);
      if (local_28 != plVar4) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x40) = plVar1;
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
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + 0x18);
      if (*(int *)(lVar5 + 0x20) != 3) {
        FUN_1446efa72(plVar1,0,3,0x10);
        *(undefined4 *)(lVar5 + 0x20) = 3;
      }
      puVar6 = (undefined8 *)*plVar1;
      *puVar6 = &PTR_LAB_14b420820;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      puVar6[2] = lVar7;
      *puVar6 = &PTR_FUN_14b4209d0;
      puVar6[3] = param_1;
      puVar6[4] = &LAB_14579bf46;
      *(undefined4 *)(puVar6 + 5) = 0;
      cVar3 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x30);
      uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      if (((*(char *)(param_1 + 0x30) != cVar3) &&
          (*(char *)(param_1 + 0x30) = cVar3, *(int *)(param_1 + 0x20) != 0)) &&
         (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
      }
      goto LAB_140d119dd;
    }
  }
  uVar8 = 0;
LAB_140d119dd:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d11a88 FUN_140d11a88 body=159 status=ok
// SIG undefined FUN_140d11a88(void)

void FUN_140d11a88(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  cVar4 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x80) = cVar4;
  if ((cVar4 == '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    cVar4 = FUN_148934496();
    if (cVar4 != '\0') {
      cVar4 = FUN_140a30ba2(*(undefined8 *)(param_1 + 0x58));
      if (cVar4 == '\0') {
        FUN_14893591a(param_1);
      }
      else {
        FUN_148934602();
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      uVar5 = FUN_140e58bde(lVar3);
      if (*(char *)(lVar3 + 0x90) != (char)uVar5) {
        FUN_140d10c4a(lVar3,uVar5);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  FUN_140d10e20(param_1,param_1);
  return;
}



// FUNCTION 140d11b28 FUN_140d11b28 body=148 status=ok
// SIG undefined FUN_140d11b28(void)

void FUN_140d11b28(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x60))();
  }
  FUN_140d111f0(param_1 + 0xf0,param_1);
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x30);
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar3 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
    do {
      uVar1 = FUN_140e58bde(lVar2);
      if (*(char *)(lVar2 + 0x90) != (char)uVar1) {
        FUN_140d10c4a(lVar2,uVar1);
      }
      lVar2 = lVar2 + 0xa8;
      lVar3 = lVar3 + -0xa8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140d11bc2 FUN_140d11bc2 body=57 status=ok
// SIG undefined FUN_140d11bc2(void)

void FUN_140d11bc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93360 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93360 = FUN_140002ddd(FUN_146570b8a,uVar1,L"GbxBrainAspectSettings_CanUseWeapon");
  }
  return;
}



// FUNCTION 140d11c06 FUN_140d11c06 body=286 status=ok
// SIG undefined FUN_140d11c06(void)

undefined8 * FUN_140d11c06(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a483880;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x25) = 1;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    local_28 = 0x7b5ae74c;
    uStack_24 = 0xd2704c10;
    uStack_20 = 0xa9585798;
    uStack_1c = 0xb212a5a;
    iVar1 = FUN_1448a256a(param_1);
    if (iVar1 < 7) {
      FUN_145cba7c3(&local_30);
      param_1[0x23] = local_30;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d11d26 FUN_140d11d26 body=118 status=ok
// SIG undefined FUN_140d11d26(void)

undefined1 FUN_140d11d26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d11d9c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x124);
    uVar2 = *(undefined4 *)(param_3 + 0x128);
    uVar3 = *(undefined4 *)(param_3 + 300);
    uVar4 = *(undefined4 *)(param_3 + 0x130);
    uVar5 = *(undefined4 *)(param_3 + 0x134);
    uVar6 = *(undefined4 *)(param_3 + 0x138);
    uVar7 = *(undefined4 *)(param_3 + 0x13c);
    uVar8 = *(undefined4 *)(param_3 + 0x140);
    uVar9 = *(undefined4 *)(param_3 + 0x144);
    uVar10 = *(undefined4 *)(param_3 + 0x148);
    uVar11 = *(undefined4 *)(param_3 + 0x14c);
    uVar12 = *(undefined4 *)(param_3 + 0x150);
    uVar13 = *(undefined4 *)(param_3 + 0x154);
    uVar14 = *(undefined4 *)(param_3 + 0x158);
    uVar15 = *(undefined4 *)(param_3 + 0x15c);
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + 0x120);
    *(undefined4 *)(param_2 + 0x124) = uVar1;
    *(undefined4 *)(param_2 + 0x128) = uVar2;
    *(undefined4 *)(param_2 + 300) = uVar3;
    *(undefined4 *)(param_2 + 0x130) = uVar4;
    *(undefined4 *)(param_2 + 0x134) = uVar5;
    *(undefined4 *)(param_2 + 0x138) = uVar6;
    *(undefined4 *)(param_2 + 0x13c) = uVar7;
    *(undefined4 *)(param_2 + 0x140) = uVar8;
    *(undefined4 *)(param_2 + 0x144) = uVar9;
    *(undefined4 *)(param_2 + 0x148) = uVar10;
    *(undefined4 *)(param_2 + 0x14c) = uVar11;
    *(undefined4 *)(param_2 + 0x150) = uVar12;
    *(undefined4 *)(param_2 + 0x154) = uVar13;
    *(undefined4 *)(param_2 + 0x158) = uVar14;
    *(undefined4 *)(param_2 + 0x15c) = uVar15;
    param_2 = param_2 + 0x160;
    param_3 = param_3 + 0x160;
  }
  return 1;
}



// FUNCTION 140d11d9c FUN_140d11d9c body=450 status=ok
// SIG undefined FUN_140d11d9c(void)

longlong FUN_140d11d9c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  FUN_140472d3c(param_1 + 0x40,param_2 + 0x40);
  FUN_140472cde(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  lVar16 = *(longlong *)(param_2 + 0x68);
  if (DAT_14c950c29 == 1) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x68);
    }
  }
  bVar15 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x68) = lVar16;
  lVar16 = *(longlong *)(param_2 + 0x70);
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x70);
      bVar15 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar16;
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  uVar6 = *(undefined4 *)(param_2 + 0x90);
  uVar7 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  lVar16 = *(longlong *)(param_2 + 0xa8);
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0xa8);
      bVar15 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar16;
  lVar16 = *(longlong *)(param_2 + 0xb0);
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0xb0);
    }
  }
  *(longlong *)(param_1 + 0xb0) = lVar16;
  uVar8 = *(undefined8 *)(param_2 + 0xc0);
  uVar9 = *(undefined8 *)(param_2 + 200);
  uVar10 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  *(undefined8 *)(param_1 + 200) = uVar9;
  *(undefined8 *)(param_1 + 0xd0) = uVar10;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  uVar8 = *(undefined8 *)(param_2 + 0xe8);
  uVar9 = *(undefined8 *)(param_2 + 0xf0);
  uVar10 = *(undefined8 *)(param_2 + 0xf8);
  uVar11 = *(undefined8 *)(param_2 + 0x100);
  uVar12 = *(undefined8 *)(param_2 + 0x108);
  uVar13 = *(undefined8 *)(param_2 + 0x110);
  uVar14 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar8;
  *(undefined8 *)(param_1 + 0xf0) = uVar9;
  *(undefined8 *)(param_1 + 0xf8) = uVar10;
  *(undefined8 *)(param_1 + 0x100) = uVar11;
  *(undefined8 *)(param_1 + 0x108) = uVar12;
  *(undefined8 *)(param_1 + 0x110) = uVar13;
  *(undefined8 *)(param_1 + 0x118) = uVar14;
  return param_1;
}



// FUNCTION 140d11f5e FUN_140d11f5e body=95 status=ok
// SIG undefined FUN_140d11f5e(void)

void FUN_140d11f5e(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  *(undefined4 *)(param_1[10] + 0x80) = 0;
  FUN_140b576f0();
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d11fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140d11fbe FUN_140d11fbe body=3 status=ok
// SIG undefined FUN_140d11fbe(void)

void FUN_140d11fbe(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d11fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}



// FUNCTION 140d11fc2 FUN_140d11fc2 body=148 status=ok
// SIG undefined FUN_140d11fc2(void)

undefined8 * FUN_140d11fc2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = TAsyncQueuedWork<void>::vftable;
  plVar4 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d12056 FUN_140d12056 body=750 status=ok
// SIG undefined FUN_140d12056(void)

longlong FUN_140d12056(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (uint *)(param_1 + 0x90);
  if ((((*(int *)(param_1 + 0x94) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x94))) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar5 = *plVar8, lVar5 == 0)))))) {
    if (*(longlong *)(param_1 + 0x98) == 0) goto LAB_140d121ba;
    lVar5 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar3 == '\0')) {
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x90) = 0;
        goto LAB_140d121ba;
      }
      uVar2 = *(uint *)(lVar5 + 0xc);
      *puVar1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar9;
        }
      }
      *(int *)(param_1 + 0x94) = iVar4;
    }
    else {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) goto LAB_140d121ba;
  }
  if (DAT_14c949118 == 0) {
    local_38 = FUN_140631fbe;
    lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar10;
    FUN_1446f470e(local_30,L"Class",1);
    local_48 = &LAB_146891e90;
    local_50 = &LAB_146273097;
    local_60 = L"Engine";
    local_58 = 199;
    local_68 = 0x20;
    local_70 = 0x10000000;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_38;
    FUN_14574b4b2(lVar10);
    DAT_14c949118 = lVar10;
    uVar6 = FUN_144a7a812();
    lVar10 = DAT_14c949118;
    uVar7 = FUN_1449e2fb2();
    local_78 = L"Class";
    FUN_14574b446(uVar7,lVar10,uVar6,L"/Script/CoreUObject");
  }
  if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
      (lVar10 = FUN_140d12354(), lVar10 != 0)) &&
     ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar5 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
       lVar10 + 0x30)))) {
    if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return lVar5;
  }
LAB_140d121ba:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 140d12354 FUN_140d12354 body=228 status=ok
// SIG undefined FUN_140d12354(void)

longlong FUN_140d12354(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6e750 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413594aa;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148799f6b;
    local_40 = &LAB_14653bdb6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1540;
    FUN_14081cfa3(L"/Script/GbxGame",L"Projectile",&DAT_14cb6e750,FUN_14653bd94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1243a FUN_140d1243a body=111 status=ok
// SIG undefined FUN_140d1243a(void)

ulonglong FUN_140d1243a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_140d1248c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d1248c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x30))
                (lVar4 + *(int *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d124aa FUN_140d124aa body=51 status=ok
// SIG undefined FUN_140d124aa(void)

void FUN_140d124aa(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_140d124de(param_1,CONCAT71((int7)((ulonglong)uVar1 >> 8),
                                 (byte)uVar1 ^ *(byte *)(param_3 + 0x20)) & 0xffffffff,param_4,0);
  return;
}



// FUNCTION 140d124de FUN_140d124de body=222 status=ok
// SIG undefined FUN_140d124de(void)

void FUN_140d124de(longlong *param_1,char param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,1);
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + 0x30);
    *(int *)(lVar1 + 0x30) = iVar3 + 1;
    if ((longlong)*(int *)(lVar1 + 0x28) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x20);
      lVar4 = (longlong)*(int *)(lVar1 + 0x28) * 0x1c;
      do {
        if (((int)*plVar2 == (int)param_3) &&
           (*(int *)((longlong)plVar2 + 4) == (int)((ulonglong)param_3 >> 0x20))) {
          if (plVar2 != (longlong *)0x0) goto LAB_140d12541;
          break;
        }
        plVar2 = (longlong *)((longlong)plVar2 + 0x1c);
        lVar4 = lVar4 + -0x1c;
      } while (lVar4 != 0);
    }
    *(int *)(lVar1 + 0x30) = iVar3 + 2;
    plVar2 = (longlong *)FUN_1403ae72c(lVar1 + 0x20);
    if ((int)plVar2[1] == 0 || *plVar2 != param_3) {
      *plVar2 = param_3;
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    }
    if ((int)plVar2[3] == 0 || *(char *)((longlong)plVar2 + 0x14) != param_4) {
      *(char *)((longlong)plVar2 + 0x14) = param_4;
      *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
    }
LAB_140d12541:
    if (*(char *)((longlong)plVar2 + 0xc) == param_2) {
      if ((int)plVar2[2] != 0) {
        return;
      }
      iVar3 = 1;
    }
    else {
      iVar3 = (int)plVar2[2] + 1;
    }
    *(char *)((longlong)plVar2 + 0xc) = param_2;
    *(int *)(plVar2 + 2) = iVar3;
  }
  return;
}



// FUNCTION 140d125bc FUN_140d125bc body=104 status=ok
// SIG undefined FUN_140d125bc(void)

undefined8 FUN_140d125bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_140d12626(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d12626 FUN_140d12626 body=93 status=ok
// SIG undefined FUN_140d12626(void)

undefined8 FUN_140d12626(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  lVar1 = DAT_14cb92ed0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb92ed0 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1447a97f4(local_40,param_1);
    uVar2 = FUN_140d12684(lVar1,local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d12684 FUN_140d12684 body=43 status=ok
// SIG undefined FUN_140d12684(void)

undefined8 FUN_140d12684(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462();
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 140d126b0 FUN_140d126b0 body=516 status=ok
// SIG undefined FUN_140d126b0(void)

void FUN_140d126b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140d128b6(param_1,&local_40);
  pcVar3 = local_40;
  SRWLock = (PSRWLOCK)(local_40 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
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
  if (pcVar3[0x430] == (code)0x0) {
    if (*(int *)(pcVar3 + 0x434) != 0) goto LAB_140d12724;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x434) + 1;
  }
  pcVar3[0x430] = (code)0x0;
  *(int *)(pcVar3 + 0x434) = iVar4;
LAB_140d12724:
  if (*(char *)(param_1 + 0x21c) == '\x01') {
    *(undefined1 *)(param_1 + 0x21c) = 0;
  }
  FUN_140d12946(param_1,0);
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_140898514(lVar5 + 0x3da0,0);
      FUN_140c125e6(lVar5 + 0xd98,&DAT_14cbd95f0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140d127c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d128b6 FUN_140d128b6 body=143 status=ok
// SIG undefined FUN_140d128b6(void)

undefined8 * FUN_140d128b6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
  *param_2 = *(undefined8 *)(local_28 + 0xe0);
  lVar3 = *(longlong *)(local_28 + 0xe8);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d12946 FUN_140d12946 body=180 status=ok
// SIG undefined FUN_140d12946(void)

void FUN_140d12946(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x420);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x78));
  *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + 1;
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
  if (*(char *)(lVar3 + 0x60) == param_2) {
    if (*(int *)(lVar3 + 100) != 0) goto LAB_140d129a5;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 100) + 1;
  }
  *(char *)(lVar3 + 0x60) = param_2;
  *(int *)(lVar3 + 100) = iVar4;
LAB_140d129a5:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x78));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d129fc FUN_140d129fc body=55 status=ok
// SIG undefined FUN_140d129fc(void)

void FUN_140d129fc(longlong *param_1)

{
  FUN_140d12a34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d12a34 FUN_140d12a34 body=121 status=ok
// SIG undefined FUN_140d12a34(void)

void FUN_140d12a34(longlong param_1,int param_2)

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



// FUNCTION 140d12ab4 FUN_140d12ab4 body=149 status=ok
// SIG undefined FUN_140d12ab4(void)

undefined8 FUN_140d12ab4(longlong param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined4 extraout_var;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  
  lVar4 = DAT_14ca6af00;
  iVar2 = *(int *)(param_1 + 4);
  iVar8 = iVar2 + 0x3f;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((iVar8 >> 6 & 0x80000001U) == 1) {
    uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar7 = (ulonglong)uVar3;
    if (((uVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar3 == 2)) {
      uVar9 = 0;
    }
    else if (uVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = CONCAT44(extraout_var,DVar6);
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    fVar1 = *(float *)(lVar4 + uVar9 * 4);
    fVar10 = 0.0;
    if (0.0 <= fVar1) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      return CONCAT71((int7)(uVar7 >> 8),2);
    }
  }
  return 0;
}



// FUNCTION 140d12b4a FUN_140d12b4a body=128 status=ok
// SIG undefined FUN_140d12b4a(void)

void FUN_140d12b4a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0x70);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x90) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x88)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_2 + 0x88)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d12bca(*(undefined8 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x60));
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d12bca FUN_140d12bca body=45 status=ok
// SIG undefined FUN_140d12bca(void)

void FUN_140d12bca(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140485912(param_1);
      param_1 = param_1 + 0x110;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d12c00 FUN_140d12c00 body=108 status=ok
// SIG undefined FUN_140d12c00(void)

undefined8 * FUN_140d12c00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3792e0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  uVar1 = FUN_140d12c6c();
  FUN_140005f6c(param_1 + 0x1f,uVar1,0,0);
  return param_1;
}



// FUNCTION 140d12c6c FUN_140d12c6c body=57 status=ok
// SIG undefined FUN_140d12c6c(void)

void FUN_140d12c6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56160 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56160 = FUN_140002ddd(FUN_1464b6661,uVar1,L"CoordinatedMaterialSettings");
  }
  return;
}



// FUNCTION 140d12ca6 FUN_140d12ca6 body=103 status=ok
// SIG undefined FUN_140d12ca6(void)

ulonglong FUN_140d12ca6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140d12cf0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d12cf0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d12d0e FUN_140d12d0e body=406 status=ok
// SIG undefined FUN_140d12d0e(void)

void FUN_140d12d0e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  undefined *local_a0;
  undefined4 *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_98 = (undefined4 *)(param_2 + 0xc);
    local_a0 = &DAT_14cbe2650;
    FUN_144a405ac(&local_88,local_8c,&local_a0,0);
    local_98 = (undefined4 *)(param_2 + 0x10);
    local_a0 = &DAT_14cbe2658;
    FUN_144a405ac(&local_88,local_8c,&local_a0,0);
    local_a4 = 0;
    local_a0 = &DAT_14cbe2660;
    local_98 = &local_a4;
    FUN_140d12ea6(&local_88,local_8c,&local_a0,0);
    if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
      if ((*(uint *)(param_2 + 8) & 0x20) == 0) {
        local_a4 = 0;
      }
      else {
        local_a4 = 0x40000000;
      }
    }
    else {
      local_a4 = 0x3f800000;
    }
    local_a0 = &DAT_14cbe2668;
    local_98 = &local_a4;
    FUN_140d12ea6(&local_88,local_8c,&local_a0,0);
    FUN_1408caf7a(param_1,&DAT_14cbe2670,&local_88,1);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d12ea6 FUN_140d12ea6 body=460 status=ok
// SIG undefined FUN_140d12ea6(void)

int * FUN_140d12ea6(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408cb62c(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *local_48 = lVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar3 = (uint)lVar2 & 0xffff;
  uVar9 = ((uint)lVar2 << 0x10 | uVar3) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar3 >> 4);
  cVar4 = '\0';
  iVar8 = local_50[0];
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar7 == -1) {
      cVar4 = '\0';
    }
    else {
      do {
        iVar8 = iVar7;
        plVar5 = (longlong *)(*param_1 + (longlong)iVar8 * 0x14);
        if (*plVar5 == lVar2) {
          lVar2 = *local_48;
          *(int *)(plVar5 + 1) = (int)local_48[1];
          *plVar5 = lVar2;
          FUN_14064cf78(param_1,local_50[0],1);
          cVar4 = '\x01';
          break;
        }
        cVar4 = '\0';
        iVar8 = local_50[0];
        iVar7 = *(int *)((longlong)plVar5 + 0xc);
      } while (*(int *)((longlong)plVar5 + 0xc) != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= (int)param_1[9])) {
      uVar9 = (int)param_1[9] - 1U & uVar9;
      *(uint *)(local_48 + 2) = uVar9;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
           iVar8;
    }
    else {
      *(int *)(param_1 + 9) = iVar7;
      FUN_1408cb1a2(param_1);
    }
  }
  *param_2 = iVar8;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d13074 FUN_140d13074 body=284 status=ok
// SIG undefined FUN_140d13074(void)

void FUN_140d13074(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [36];
  float local_a4;
  undefined *local_a0;
  float *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_a4 = (float)*(byte *)(param_2 + 8);
    local_a0 = &DAT_14cbe2668;
    local_98 = &local_a4;
    FUN_140d12ea6(&local_88,local_8c,&local_a0,0);
    local_a4 = 1.0;
    local_a0 = &DAT_14cbe2660;
    local_98 = &local_a4;
    FUN_140d12ea6(&local_88,local_8c,&local_a0,0);
    FUN_1408caf7a(param_1,&DAT_14cbe2678,&local_88,0);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1319a FUN_140d1319a body=967 status=ok
// SIG undefined FUN_140d1319a(void)

undefined8 * FUN_140d1319a(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0755f0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 4;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xf) = 2;
  *(byte *)(param_1 + 0x10) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 10;
  *(undefined1 *)(param_1 + 0x16) = 2;
  *(byte *)(param_1 + 0x17) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x35] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x39) = 4;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 3;
  *(char *)(param_1 + 0x3b) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = &PTR_FUN_14a1701c0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (DAT_14cb70c58 != 0) {
    uVar2 = FUN_1405d6618();
    FUN_140d13562(param_1 + 0x44,uVar2);
  }
  pcVar5 = (char *)(param_1 + 4);
  if (0x18 < *(ushort *)(param_1 + 7)) {
    pcVar5 = *(char **)pcVar5;
  }
  if (*(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 8) * 0x120) == (code *)0x0) {
    pcVar4 = pcVar5 + *(int *)((longlong)&DAT_14c9a8510 +
                              (ulonglong)((uint)*(byte *)(param_1 + 8) * 0x120));
    do {
      if (pcVar4 <= pcVar5) goto LAB_140d1339b;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == '\0');
  }
  else {
    cVar1 = (**(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 8) * 0x120))();
    if (cVar1 != '\0') {
LAB_140d1339b:
      lVar3 = FUN_1405d6522();
      FUN_144983130(param_1 + 3,lVar3 + 0xb0);
    }
  }
  pcVar5 = (char *)(param_1 + 0x1a);
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    pcVar5 = *(char **)pcVar5;
  }
  if (*(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 0x1e) * 0x120) == (code *)0x0) {
    pcVar4 = pcVar5 + *(int *)((longlong)&DAT_14c9a8510 +
                              (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
    do {
      if (pcVar4 <= pcVar5) goto LAB_140d133ed;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == '\0');
  }
  else {
    cVar1 = (**(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 0x1e) * 0x120))();
    if (cVar1 != '\0') {
LAB_140d133ed:
      lVar3 = FUN_1405d6522();
      FUN_144983130(param_1 + 0x19,lVar3 + 0x120);
    }
  }
  pcVar5 = (char *)(param_1 + 0x21);
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    pcVar5 = *(char **)pcVar5;
  }
  if (*(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 0x25) * 0x120) == (code *)0x0) {
    pcVar4 = pcVar5 + *(int *)((longlong)&DAT_14c9a8510 +
                              (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
    do {
      if (pcVar4 <= pcVar5) goto LAB_140d13442;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == '\0');
  }
  else {
    cVar1 = (**(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 0x25) * 0x120))();
    if (cVar1 != '\0') {
LAB_140d13442:
      lVar3 = FUN_1405d6522();
      FUN_144983130(param_1 + 0x20,lVar3 + 0x158);
    }
  }
  pcVar5 = (char *)(param_1 + 0x28);
  if (0x18 < *(ushort *)(param_1 + 0x2b)) {
    pcVar5 = *(char **)pcVar5;
  }
  if (*(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 0x2c) * 0x120) == (code *)0x0) {
    pcVar4 = pcVar5 + *(int *)((longlong)&DAT_14c9a8510 +
                              (ulonglong)((uint)*(byte *)(param_1 + 0x2c) * 0x120));
    do {
      if (pcVar4 <= pcVar5) goto LAB_140d13497;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == '\0');
  }
  else {
    cVar1 = (**(code **)(&DAT_14c9a8620 + (uint)*(byte *)(param_1 + 0x2c) * 0x120))();
    if (cVar1 != '\0') {
LAB_140d13497:
      lVar3 = FUN_1405d6522();
      FUN_144983130(param_1 + 0x27,lVar3 + 400);
    }
  }
  return param_1;
}



// FUNCTION 140d13562 FUN_140d13562 body=62 status=ok
// SIG undefined FUN_140d13562(void)

void FUN_140d13562(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_14087dfa2(param_1 + 0x20,0);
  return;
}



// FUNCTION 140d135be FUN_140d135be body=373 status=ok
// SIG undefined FUN_140d135be(void)

ulonglong FUN_140d135be(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar5 = FUN_145cd91a0();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_140d1362b;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x18) = lVar7;
        if (lVar7 == 0) goto LAB_140d1362b;
        lVar6 = *(longlong *)(param_1 + 0x10);
        goto LAB_140d135e8;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    goto LAB_140d1362b;
  }
LAB_140d135e8:
  if (lVar6 == 0) {
    uVar5 = FUN_145cd91a0();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar6;
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_140d1372f:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_140d1372f;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar7;
    }
  }
  iVar2 = *(int *)(lVar7 + 0x20);
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  if ((longlong)iVar2 != 0) {
    lVar6 = *(longlong *)(lVar7 + 0x18);
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + lVar7);
      if (plVar1 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        if (cVar4 == '\0') {
          unaff_RBP = 0;
          break;
        }
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar7);
  }
LAB_140d1362b:
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 140d13734 FUN_140d13734 body=202 status=ok
// SIG undefined FUN_140d13734(void)

ulonglong FUN_140d13734(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar5 = *(longlong **)(param_1 + 8);
    lVar7 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      lVar4 = plVar5[1];
      if (lVar4 == 0) {
        uVar3 = FUN_14155b406();
        lVar4 = FUN_14477b664(uVar3);
        plVar5[1] = lVar4;
      }
      if (plVar5[2] == 0) {
        if ((lVar4 != 0) && (*plVar5 != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar5[2] = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar4 = FUN_144aff482(uVar3,plVar5);
            plVar5[2] = lVar4;
            if (lVar4 != 0) goto LAB_140d13766;
          }
        }
      }
      else {
LAB_140d13766:
        cVar2 = FUN_140d137fe(*param_2,plVar5);
        if ((char)plVar5[3] != cVar2) {
          uVar6 = 0;
          break;
        }
      }
      plVar5 = plVar5 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140d137fe FUN_140d137fe body=210 status=ok
// SIG undefined FUN_140d137fe(void)

undefined8 FUN_140d137fe(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar2 = FUN_14155b406();
    lVar7 = FUN_14477b664(uVar2);
    param_2[1] = lVar7;
  }
  lVar3 = param_2[2];
  if (((lVar3 == 0) && (lVar3 = 0, lVar7 != 0)) && (*param_2 != 0)) {
    plVar6 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 == '\0')) {
      lVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar3 = FUN_144aff482(uVar2,param_2);
    }
    param_2[2] = lVar3;
  }
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x178);
    lVar7 = (longlong)*(int *)(param_1 + 0x180) << 4;
    do {
      lVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (lVar4 == lVar3) {
        if (plVar6 == (longlong *)0x0) {
          return 0;
        }
        uVar5 = CONCAT71((int7)((ulonglong)*plVar6 >> 8),*(undefined1 *)(*plVar6 + 0x38)) &
                0xffffffffffffff02;
        return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 140d138d6 FUN_140d138d6 body=467 status=ok
// SIG undefined FUN_140d138d6(void)

ulonglong FUN_140d138d6(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    pbVar10 = *(byte **)(param_1 + 8);
    pbVar11 = pbVar10 + (longlong)*(int *)(param_1 + 0x10) * 0x20;
    do {
      lVar8 = *(longlong *)(pbVar10 + 0x10);
      if (lVar8 == 0) {
        uVar5 = FUN_14110242a();
        lVar8 = FUN_14477b664(uVar5);
        *(longlong *)(pbVar10 + 0x10) = lVar8;
      }
      pbVar1 = pbVar10 + 8;
      lVar6 = *(longlong *)(pbVar10 + 0x18);
      if (lVar6 == 0) {
        if ((lVar8 != 0) && (*(longlong *)pbVar1 != 0)) {
          plVar7 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar7 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
            pbVar10[0x18] = 0;
            pbVar10[0x19] = 0;
            pbVar10[0x1a] = 0;
            pbVar10[0x1b] = 0;
            pbVar10[0x1c] = 0;
            pbVar10[0x1d] = 0;
            pbVar10[0x1e] = 0;
            pbVar10[0x1f] = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
            lVar6 = FUN_144aff482(uVar5,pbVar1);
            *(longlong *)(pbVar10 + 0x18) = lVar6;
            if (lVar6 != 0) {
              lVar8 = *(longlong *)(pbVar10 + 0x10);
              goto LAB_140d13920;
            }
          }
        }
      }
      else {
LAB_140d13920:
        lVar2 = *param_2;
        if (lVar8 == 0) {
          uVar5 = FUN_14110242a();
          lVar8 = FUN_14477b664(uVar5);
          *(longlong *)(pbVar10 + 0x10) = lVar8;
          lVar6 = *(longlong *)(pbVar10 + 0x18);
          if (lVar6 != 0) goto LAB_140d1392c;
          bVar3 = 0;
          if ((lVar8 != 0) && (*(longlong *)pbVar1 != 0)) {
            plVar7 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
              pbVar10[0x18] = 0;
              pbVar10[0x19] = 0;
              pbVar10[0x1a] = 0;
              pbVar10[0x1b] = 0;
              pbVar10[0x1c] = 0;
              pbVar10[0x1d] = 0;
              pbVar10[0x1e] = 0;
              pbVar10[0x1f] = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
              lVar6 = FUN_144aff482(uVar5,pbVar1);
              *(longlong *)(pbVar10 + 0x18) = lVar6;
              if (lVar6 != 0) goto LAB_140d1392c;
            }
            goto LAB_140d13a82;
          }
        }
        else {
LAB_140d1392c:
          lVar8 = (longlong)*(int *)(lVar2 + 0x50);
          if (lVar8 != 0) {
            plVar7 = *(longlong **)(lVar2 + 0x48);
            lVar8 = lVar8 * 0x90;
            do {
              if (*plVar7 == lVar6) {
                if (plVar7 != (longlong *)0x0) {
                  bVar3 = *(byte *)(plVar7 + 0x11) & 1;
                  goto LAB_140d13970;
                }
                break;
              }
              plVar7 = plVar7 + 0x12;
              lVar8 = lVar8 + -0x90;
            } while (lVar8 != 0);
          }
LAB_140d13a82:
          bVar3 = 0;
        }
LAB_140d13970:
        if (*pbVar10 != bVar3) {
          uVar9 = 0;
          break;
        }
      }
      pbVar10 = pbVar10 + 0x20;
    } while (pbVar10 != pbVar11);
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140d13aaa FUN_140d13aaa body=13877 status=ok
// SIG undefined FUN_140d13aaa(void)

void FUN_140d13aaa(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  ulonglong *puVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint uVar28;
  undefined4 *puVar29;
  longlong *plVar30;
  longlong lVar31;
  int iVar32;
  uint *puVar33;
  longlong lVar34;
  longlong *plVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  bool bVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_5d8 [32];
  uint *local_5b8;
  undefined4 local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined2 *local_598;
  undefined1 *local_590;
  undefined1 *local_588;
  uint **local_580;
  undefined1 *local_578;
  code *local_570;
  uint *local_560;
  uint *local_558;
  ulonglong local_550;
  longlong local_548;
  longlong *local_540;
  longlong *local_538;
  longlong *local_530;
  longlong *local_528;
  uint *local_520;
  ulonglong local_518;
  int local_50c;
  uint *local_508;
  uint *local_500;
  longlong local_4f8;
  uint *local_4f0;
  ulonglong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  uint *local_4d0;
  uint *local_4c8;
  uint *local_4c0;
  longlong local_4b8;
  uint *local_4b0;
  uint *local_4a8;
  uint *local_4a0;
  uint *local_498;
  longlong local_490;
  longlong local_488;
  undefined8 uStack_480;
  undefined8 local_470;
  undefined8 local_468;
  uint local_460;
  longlong local_458;
  int local_450;
  undefined4 local_44c;
  undefined8 local_448;
  uint local_440;
  undefined8 local_438;
  undefined4 local_430;
  longlong local_428;
  undefined8 local_420;
  uint *local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  char cStack_f3;
  undefined1 uStack_f2;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint *local_90;
  longlong local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  plVar1 = (longlong *)(param_1 + -0x28);
  lVar9 = param_1 + 0x450;
  local_418 = (uint *)0x0;
  uStack_410 = 0;
  FUN_140d170e0(lVar9,&local_418);
  if ((longlong)(int)uStack_410 != 0) {
    local_520 = local_418 + (int)uStack_410;
    puVar27 = local_418;
LAB_140d14a54:
    if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
      lVar12 = *(longlong *)(param_1 + 0x3f0);
      if (*(longlong *)(param_1 + 0x3f0) == 0) {
        lVar12 = param_1 + 1000;
      }
      iVar32 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & *puVar27) * 4);
      if (iVar32 != -1) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60) == *puVar27) {
            lVar12 = FUN_140d1799c(plVar1);
            uVar7 = *puVar27;
            if (lVar12 != 0) {
              iVar32 = *(int *)(param_1 + 0x408);
              iVar8 = *(int *)(param_1 + 0x434);
              if (iVar32 != iVar8) {
                lVar10 = *(longlong *)(param_1 + 0x440);
                if (*(longlong *)(param_1 + 0x440) == 0) {
                  lVar10 = param_1 + 0x438;
                }
                iVar36 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x448) - 1U & uVar7) * 4);
                if (iVar36 != -1) {
                  lVar10 = *(longlong *)(param_1 + 0x400);
                  iVar23 = iVar36;
                  goto LAB_140d14b04;
                }
              }
            }
            break;
          }
          iVar32 = *(int *)((longlong)iVar32 * 0x60 + *(longlong *)(param_1 + 0x3b0) + 0x58);
        } while (iVar32 != -1);
      }
    }
    goto LAB_140d16e2b;
  }
LAB_140d13b17:
  if (local_418 != (uint *)0x0) {
    FUN_1400020a8(local_418);
  }
  lVar9 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar9 == 0) || (plVar18 = *(longlong **)(lVar9 + 0x1f0), plVar18 == (longlong *)0x0))
  goto LAB_140d13b6b;
  if (DAT_14cb5e538 == 0) {
    local_418 = (uint *)&LAB_1417c5d06;
    local_570 = FUN_14081d0ea;
    local_578 = &LAB_1417ad04a;
    local_588 = &LAB_1486a7af7;
    local_590 = &LAB_1464e1631;
    local_598 = &DAT_149e063b2;
    local_5a0 = 0;
    local_5a8 = 0x1000000c;
    local_5b0 = 8;
    local_5b8 = (uint *)CONCAT44(local_5b8._4_4_,0x420);
    local_580 = &local_418;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
  }
  if ((*(int *)(plVar18[2] + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
      != DAT_14cb5e538 + 0x30)) goto LAB_140d13b6b;
  if (*(code **)(*plVar18 + 0x498) == (code *)&LAB_14015c36e) {
    cVar6 = (char)plVar18[0x42];
  }
  else {
    cVar6 = (**(code **)(*plVar18 + 0x498))(plVar18);
  }
  if (cVar6 != '\b') goto LAB_140d13b6b;
  lVar10 = FUN_1407e8892();
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_488 = 0;
  uStack_480 = 0;
  lVar12 = (ulonglong)(*(int *)(param_1 + 800) == 0) * 0x20;
  puVar27 = *(uint **)(param_1 + 0x310 + lVar12);
  if (puVar27 != (uint *)0x0) {
    uVar7 = *puVar27;
    local_550 = (ulonglong)*(uint *)(lVar10 + 0x118);
    lVar10 = FUN_1400f6f32(lVar9);
    if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x68) == 0)) {
LAB_140d13c95:
      *(undefined1 *)((longlong)puVar27 + 0x326) = 1;
    }
    else {
      FUN_140d173bc(*(longlong *)(lVar10 + 0x68),&local_418,uVar7);
      if ((short)local_418 < 0) goto LAB_140d13c95;
    }
    lVar10 = FUN_140d172b5(lVar9,*puVar27);
    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x178) != '\x03')) {
      *(undefined1 *)((longlong)puVar27 + 0x326) = 1;
    }
    if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
      lVar11 = param_1 + 1000;
      if (*(longlong *)(param_1 + 0x3f0) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x3f0);
      }
      iVar32 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & *puVar27) * 4);
      if (iVar32 != -1) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60) == *puVar27)
          goto LAB_140d13cea;
          iVar32 = *(int *)((longlong)iVar32 * 0x60 + *(longlong *)(param_1 + 0x3b0) + 0x58);
        } while (iVar32 != -1);
      }
    }
    FUN_140d176d6(plVar1);
    *(undefined1 *)((longlong)puVar27 + 0x326) = 1;
LAB_140d13cea:
    bVar40 = (longlong)uStack_480 < 0;
    uStack_480 = uStack_480 & 0xffffffff00000000;
    if (bVar40) {
      FUN_140d17472(&local_488);
    }
    puVar33 = puVar27 + 2;
    puVar17 = (uint *)(param_1 + 0x178);
    local_4f0 = puVar33;
    if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
      bVar3 = (byte)*puVar33;
      lVar11 = param_1 + 0x1b0;
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x1b8);
      }
      iVar32 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x1c0) - 1U & (uint)bVar3) * 4);
      if (iVar32 != -1) {
        lVar11 = *(longlong *)puVar17;
        iVar8 = iVar32;
        do {
          if (*(byte *)(lVar11 + (longlong)iVar8 * 0x20) == bVar3) goto LAB_140d14021;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar11 + 0x18);
        } while (iVar8 != -1);
      }
    }
    goto LAB_140d13d31;
  }
  goto LAB_140d13ec3;
  while (iVar23 = *(int *)((longlong)iVar23 * 0x20 + lVar10 + 0x18), iVar23 != -1) {
LAB_140d14b04:
    if (*(uint *)(lVar10 + (longlong)iVar23 * 0x20) == uVar7) goto LAB_140d14b15;
  }
LAB_140d16e2b:
  FUN_14573a2c8(lVar9);
  goto LAB_140d14bf4;
  while (iVar36 = *(int *)(lVar11 + 0x18), iVar36 != -1) {
LAB_140d14b15:
    lVar11 = lVar10 + (longlong)iVar36 * 0x20;
    if (*(uint *)(lVar10 + (longlong)iVar36 * 0x20) == uVar7) goto LAB_140d14b2a;
  }
  lVar11 = 0;
LAB_140d14b2a:
  if (*(longlong *)(lVar11 + 8) == 0) {
    FUN_14573a2c8(lVar9);
    uVar7 = *puVar27;
    iVar32 = *(int *)(param_1 + 0x408);
    iVar8 = *(int *)(param_1 + 0x434);
  }
  if (iVar32 == iVar8) {
LAB_140d16dd4:
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x440);
    if (*(longlong *)(param_1 + 0x440) == 0) {
      lVar10 = param_1 + 0x438;
    }
    iVar32 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x448) - 1U & uVar7) * 4);
    if (iVar32 == -1) goto LAB_140d16dd4;
    do {
      lVar10 = *(longlong *)(param_1 + 0x400) + (longlong)iVar32 * 0x20;
      if (*(uint *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar32 * 0x20) == uVar7) break;
      iVar32 = *(int *)(lVar10 + 0x18);
      lVar10 = 0;
    } while (iVar32 != -1);
  }
  if (*(int *)(param_1 + 0x3b8) == *(int *)(param_1 + 0x3e4)) {
LAB_140d16ddb:
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x3f0);
    if (*(longlong *)(param_1 + 0x3f0) == 0) {
      lVar11 = param_1 + 1000;
    }
    iVar32 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & uVar7) * 4);
    if (iVar32 == -1) goto LAB_140d16ddb;
    do {
      lVar11 = *(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60;
      if (*(uint *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60) == uVar7) break;
      iVar32 = *(int *)(lVar11 + 0x58);
      lVar11 = 0;
    } while (iVar32 != -1);
  }
  local_5b8 = (uint *)CONCAT71(local_5b8._1_7_,*(undefined1 *)(*(longlong *)(lVar10 + 8) + 0x1c));
  FUN_140d19aa4(plVar1,uVar7,lVar12,lVar11 + 8);
LAB_140d14bf4:
  puVar27 = puVar27 + 1;
  if (puVar27 == local_520) goto LAB_140d13b17;
  goto LAB_140d14a54;
  while (iVar32 = *(int *)(lVar31 + 0x18), iVar32 != -1) {
LAB_140d14021:
    lVar31 = lVar11 + (longlong)iVar32 * 0x20;
    if (*(byte *)(lVar11 + (longlong)iVar32 * 0x20) == bVar3) goto LAB_140d14c85;
  }
  lVar31 = 0;
LAB_140d14c85:
  if ((bVar3 == 10) && (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc))) {
    lVar11 = *(longlong *)(puVar27 + 0x4d);
    uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar25 = (uint)lVar11 & 0xffff;
    lVar34 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      lVar34 = *(longlong *)(param_1 + 0x208);
    }
    iVar32 = *(int *)(lVar34 + (ulonglong)
                               (*(int *)(param_1 + 0x210) - 1U &
                               (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar25) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar25 >> 4)) * 4);
    if (iVar32 != -1) {
      lVar34 = *(longlong *)(param_1 + 0x1c8);
      iVar8 = iVar32;
      do {
        if (*(longlong *)(lVar34 + (longlong)iVar8 * 0x20) == lVar11) goto LAB_140d14d34;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar34 + 0x18);
      } while (iVar8 != -1);
    }
  }
  goto LAB_140d13d31;
  while (iVar32 = *(int *)(lVar12 + 0x58), iVar32 != -1) {
LAB_140d1459b:
    lVar12 = *(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60;
    if (*(uint *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60) == uVar7)
    goto LAB_140d142a1;
  }
LAB_140d1429f:
  lVar12 = 0;
LAB_140d142a1:
  if (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c)) {
    lVar31 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar31 = *(longlong *)(lVar12 + 0x48);
    }
    iVar32 = *(int *)(lVar31 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar25) * 4);
    if (iVar32 != -1) {
      do {
        puVar22 = (ulonglong *)(*(longlong *)(lVar12 + 8) + (longlong)iVar32 * 0x18);
        if ((longlong *)*puVar22 == plVar5) goto LAB_140d142af;
        iVar32 = (int)puVar22[2];
      } while (iVar32 != -1);
    }
  }
  puVar22 = (ulonglong *)0x0;
LAB_140d142af:
  uVar38 = puVar22[1];
  if (uVar38 == 0) goto LAB_140d14183;
  local_518 = CONCAT44(local_518._4_4_,(int)CONCAT71((int7)((ulonglong)puVar22 >> 8),1));
  local_4e8 = uVar38;
  if (*(char *)(uVar38 + 0x28) == '\0') {
    cVar6 = FUN_140d2b622(plVar1);
    if (cVar6 == '\0') {
      local_518 = local_518 & 0xffffffff00000000;
      uVar16 = local_550;
    }
    else {
      local_540 = plVar18;
      lVar12 = FUN_140d18446(plVar1,*puVar27);
      plVar18 = local_540;
      uVar16 = local_550;
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x28) = 1;
        FUN_140d1855e(local_4b8,plVar5);
        plVar18 = local_540;
        uVar16 = local_550;
      }
    }
  }
  lVar12 = *plVar5;
  puVar33 = local_558;
  if (lVar12 == 0) goto LAB_140d14183;
  iVar32 = *(int *)(lVar12 + 0x140);
  if (0 < iVar32) {
    if ((local_50c == -1) || (*(char *)(param_1 + 0x7a8) == '\x01')) {
      local_50c = FUN_140d182cc(lVar9);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      lVar12 = *plVar5;
      puVar33 = local_558;
      uVar16 = local_550;
      if (lVar12 == 0) goto LAB_140d14183;
      iVar32 = *(int *)(lVar12 + 0x140);
    }
    puVar33 = local_558;
    if (local_50c < iVar32) goto LAB_140d14183;
  }
  lVar31 = *(longlong *)(lVar12 + 0x410);
  *(undefined1 *)(puVar27 + 4) = *(undefined1 *)(lVar12 + 0x11b);
  local_560 = puVar27;
  local_540 = plVar18;
  local_538 = plVar15;
  puVar33 = local_558;
  uVar16 = local_550;
  lVar11 = local_548;
  switch((char)puVar27[2]) {
  case '\x01':
  case '\x04':
  case '\x11':
  case '\x17':
  case '\x1c':
    break;
  case '\x02':
  case '\a':
    lVar12 = *plVar5;
    if (0 < *(int *)(lVar12 + 0x1a0)) {
      plVar18 = (longlong *)(lVar12 + 0x168);
      if (*(longlong **)(lVar12 + 0x198) != (longlong *)0x0) {
        plVar18 = *(longlong **)(lVar12 + 0x198);
      }
      if ((*plVar18 != 0) && ((int)plVar18[1] - 1U < 0xfffffffe)) {
        cVar6 = FUN_140d1c84a(plVar5,local_4f0);
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
        if (cVar6 == '\0') goto LAB_140d14183;
        lVar12 = *plVar5;
      }
    }
    lVar12 = FUN_1405faa04(lVar12 + 0x1b8);
    if (lVar12 != 0) {
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_98);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (local_98 != *(longlong *)(local_560 + 0x43)) goto LAB_140d14183;
    }
    lVar12 = *plVar5;
    if ((*(char *)(lVar12 + 0x1d0) == '\x01') &&
       (plVar18 = local_540, puVar33 = local_558, uVar16 = local_550, puVar27 = local_560,
       plVar15 = local_538, lVar11 = local_548, *(char *)(lVar12 + 0x1d1) != (char)local_560[0xc6]))
    goto LAB_140d14183;
    lVar12 = FUN_140d199ea(lVar12 + 0x2b0);
    if (lVar12 != 0) {
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_98);
      if (local_98 != *(longlong *)(local_560 + 0x47)) {
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
        if (*(longlong *)(local_560 + 0x47) != 0) goto LAB_140d14183;
        if (DAT_14c947fe0 == 0) {
          lVar12 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar12);
          DAT_14c947fe0 = lVar12;
        }
        FUN_140045924(DAT_14c947fe0,&local_458);
        cVar6 = FUN_1407df772(local_500,&local_458);
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
        if (cVar6 == '\0') goto LAB_140d14183;
      }
    }
    lVar12 = FUN_14579c19e(*plVar5 + 0x298);
    if (lVar12 != 0) {
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_98);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (local_98 != *(longlong *)(local_560 + 0x45)) goto LAB_140d14183;
    }
    lVar12 = *plVar5;
    if ((longlong)*(int *)(lVar12 + 0x238) != 0) {
      local_528 = (longlong *)(longlong)(int)local_560[0x16];
      plVar35 = *(longlong **)(lVar12 + 0x230);
      do {
        if (local_560[0x12] != 0) {
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_560 + 0x10) + lVar10) == *plVar35)
            goto LAB_140d1640e;
            lVar10 = lVar10 + 8;
          } while ((longlong)(int)local_560[0x12] << 3 != lVar10);
        }
        if (local_560[0x16] != 0) {
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_560 + 0x14) + lVar10) == *plVar35)
            goto LAB_140d1640e;
            lVar10 = lVar10 + 8;
          } while ((longlong)local_528 * 8 != lVar10);
        }
        plVar35 = plVar35 + 1;
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
      } while (plVar35 != *(longlong **)(lVar12 + 0x230) + *(int *)(lVar12 + 0x238));
      goto LAB_140d14183;
    }
LAB_140d1640e:
    lVar10 = *(longlong *)(lVar12 + 600);
    if (lVar10 == 0) {
      uVar14 = FUN_1401548e0();
      lVar10 = FUN_14477b664(uVar14);
      *(longlong *)(lVar12 + 600) = lVar10;
    }
    if (*(longlong *)(lVar12 + 0x260) == 0) {
      if ((lVar10 != 0) && (*(longlong *)(lVar12 + 0x250) != 0)) {
        plVar18 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          *(undefined8 *)(lVar12 + 0x260) = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar10 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x250));
          *(longlong *)(lVar12 + 0x260) = lVar10;
          if (lVar10 != 0) goto LAB_140d1643c;
        }
      }
    }
    else {
LAB_140d1643c:
      lVar12 = *plVar5;
      lVar10 = *(longlong *)(lVar12 + 600);
      if (lVar10 == 0) {
        uVar14 = FUN_1401548e0();
        lVar10 = FUN_14477b664(uVar14);
        *(longlong *)(lVar12 + 600) = lVar10;
      }
      lVar31 = *(longlong *)(lVar12 + 0x260);
      if (((lVar31 == 0) && (lVar31 = 0, lVar10 != 0)) && (*(longlong *)(lVar12 + 0x250) != 0)) {
        plVar18 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          lVar31 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar31 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x250));
        }
        *(longlong *)(lVar12 + 0x260) = lVar31;
      }
      FUN_1446dcdd4(&local_418,local_4d0);
      uVar14 = FUN_1400d6974(&local_418);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (lVar31 == 0) goto LAB_140d14183;
      puVar26 = *(undefined4 **)(lVar31 + 8);
      if (puVar26 == (undefined4 *)0x0) {
        puVar26 = &DAT_14c9485f0;
      }
      cVar6 = FUN_14030fc16(uVar14,puVar26);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (cVar6 == '\0') goto LAB_140d14183;
    }
    lVar12 = *plVar5;
    if ((*(longlong *)(lVar12 + 0x1f8) != 0) && ((longlong)*(int *)(lVar12 + 0x208) != 0)) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0x200) + lVar10) != 0) {
          cVar6 = FUN_140d1d704(local_500,lVar12 + 0x1f0);
          plVar18 = local_540;
          puVar33 = local_558;
          uVar16 = local_550;
          puVar27 = local_560;
          plVar15 = local_538;
          lVar11 = local_548;
          if (cVar6 == '\0') goto LAB_140d14183;
          break;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(lVar12 + 0x208) * 8 != lVar10);
    }
    if ((*(longlong *)(lVar12 + 0x218) != 0) && ((longlong)*(int *)(lVar12 + 0x228) != 0)) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0x220) + lVar10) != 0) {
          cVar6 = FUN_140d1d704(local_500,lVar12 + 0x210);
          plVar18 = local_540;
          puVar33 = local_558;
          uVar16 = local_550;
          puVar27 = local_560;
          plVar15 = local_538;
          lVar11 = local_548;
          if (cVar6 != '\0') goto LAB_140d14183;
          break;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(lVar12 + 0x228) * 8 != lVar10);
    }
    puVar27 = local_560;
    plVar18 = local_540;
    plVar15 = local_538;
    puVar33 = local_558;
    uVar16 = local_550;
    lVar11 = local_548;
    if (((*(char *)(lVar12 + 0x161) != '\0') &&
        (((byte)local_560[0x90] >> ((byte)(*(char *)(lVar12 + 0x161) - 1) & 0x1f) & 1) == 0)) ||
       (*(char *)(lVar12 + 0x268) != (char)local_560[0x92])) goto LAB_140d14183;
    fVar41 = *(float *)(lVar12 + 0x1e4) * *(float *)(lVar12 + 0x1e4);
    if (*(char *)(lVar12 + 0x1e0) == '\x01') {
      if (fVar41 < (float)local_560[0x91]) goto LAB_140d14183;
    }
    else if ((float)local_560[0x91] < fVar41) goto LAB_140d14183;
    if ((longlong)*(int *)(lVar12 + 0x2d0) != 0) {
      if ((longlong)(int)local_560[0x38] != 0) {
        plVar13 = *(longlong **)(local_560 + 0x36);
        plVar35 = plVar13 + (int)local_560[0x38];
        do {
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar12 + 0x2c8) + lVar10) == *plVar13)
            goto LAB_140d16913;
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(lVar12 + 0x2d0) * 8 != lVar10);
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar35);
      }
      goto LAB_140d14183;
    }
LAB_140d16913:
    if ((longlong)*(int *)(lVar12 + 0x278) != 0) {
      local_528 = (longlong *)(longlong)(int)local_560[0x40];
      plVar35 = *(longlong **)(lVar12 + 0x270);
      do {
        if (local_560[0x3c] != 0) {
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_560 + 0x3a) + lVar10) == *plVar35)
            goto LAB_140d169b1;
            lVar10 = lVar10 + 8;
          } while ((longlong)(int)local_560[0x3c] << 3 != lVar10);
        }
        if (local_560[0x40] != 0) {
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_560 + 0x3e) + lVar10) == *plVar35)
            goto LAB_140d169b1;
            lVar10 = lVar10 + 8;
          } while ((longlong)local_528 * 8 != lVar10);
        }
        plVar35 = plVar35 + 1;
      } while (plVar35 != *(longlong **)(lVar12 + 0x270) + *(int *)(lVar12 + 0x278));
      goto LAB_140d14183;
    }
LAB_140d169b1:
    cVar6 = *(char *)(lVar12 + 0x1d2);
    if ((cVar6 != '\0') &&
       (((bool)(char)local_560[0x30] != (cVar6 == '\x01') ||
        (((cVar6 == '\x01' && (*(char *)(lVar12 + 0x1d3) == '\x01')) && (local_560[0xc5] != 2))))))
    goto LAB_140d14183;
    if (((((*(uint *)(lVar12 + 0x1dc) != 0) && (local_560[0x32] < *(uint *)(lVar12 + 0x1dc))) ||
         (((*(char *)(lVar12 + 0x1d6) == '\x01' && (*(char *)((longlong)local_560 + 0xc3) != '\x01')
           ) || ((*(char *)(lVar12 + 0x1d7) == '\x01' && ((char)local_560[0x31] != '\x01')))))) ||
        ((*(char *)(lVar12 + 0x1d4) == '\x01' && (*(char *)((longlong)local_560 + 0xc2) != '\x01')))
        ) || ((((*(char *)(lVar12 + 0x1d5) == '\x01' &&
                (*(char *)((longlong)local_560 + 0xc1) != '\x01')) ||
               ((*(char *)(lVar12 + 0x1d8) == '\x01' &&
                (*(char *)((longlong)local_560 + 0xc5) != '\x01')))) ||
              ((*(uint *)(lVar12 + 0x290) != 0 && (local_560[0x33] < *(uint *)(lVar12 + 0x290)))))))
    goto LAB_140d14183;
    if (*(char *)(lVar12 + 0x1e8) == '\x01') {
      local_560[0x8d] = local_560[0x32];
      lVar12 = *plVar5;
    }
    lVar11 = *(longlong *)(lVar12 + 0x310);
    if (lVar11 == 0) {
      uVar14 = FUN_14086ad12();
      lVar11 = FUN_14477b664(uVar14);
      *(longlong *)(lVar12 + 0x310) = lVar11;
    }
    if (*(longlong *)(lVar12 + 0x318) == 0) {
      lVar10 = local_548;
      if ((lVar11 != 0) && (*(longlong *)(lVar12 + 0x308) != 0)) {
        plVar18 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          *(undefined8 *)(lVar12 + 0x318) = 0;
          lVar10 = local_548;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar11 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x308));
          *(longlong *)(lVar12 + 0x318) = lVar11;
          lVar10 = local_548;
          if (lVar11 != 0) goto LAB_140d16af9;
        }
      }
    }
    else {
LAB_140d16af9:
      lVar10 = local_548;
      if (*(longlong *)(local_560 + 0x4f) != *(longlong *)(*plVar5 + 0x308))
      goto switchD_140d147ae_caseD_f;
    }
    break;
  case '\x03':
    lVar12 = *plVar5;
    if (0 < *(int *)(lVar12 + 0x1a0)) {
      plVar18 = (longlong *)(lVar12 + 0x168);
      if (*(longlong **)(lVar12 + 0x198) != (longlong *)0x0) {
        plVar18 = *(longlong **)(lVar12 + 0x198);
      }
      if ((*plVar18 != 0) && ((int)plVar18[1] - 1U < 0xfffffffe)) {
        cVar6 = FUN_140d1c84a(plVar5);
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
        if (cVar6 == '\0') goto LAB_140d14183;
        lVar12 = *plVar5;
      }
    }
    puVar27 = local_560;
    plVar18 = local_540;
    plVar15 = local_538;
    puVar33 = local_558;
    uVar16 = local_550;
    lVar11 = local_548;
    if (((*(char *)(lVar12 + 0x1d2) != '\0') &&
        ((bool)(char)local_560[0x30] != (*(char *)(lVar12 + 0x1d2) == '\x01'))) ||
       ((*(uint *)(lVar12 + 0x1dc) != 0 && (local_560[0x32] < *(uint *)(lVar12 + 0x1dc)))))
    goto LAB_140d14183;
    if ((*(longlong *)(lVar12 + 0x1f8) != 0) && ((longlong)*(int *)(lVar12 + 0x208) != 0)) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0x200) + lVar10) != 0) {
          cVar6 = FUN_140d1d704(local_500);
          plVar18 = local_540;
          puVar33 = local_558;
          uVar16 = local_550;
          puVar27 = local_560;
          plVar15 = local_538;
          lVar11 = local_548;
          if (cVar6 == '\0') goto LAB_140d14183;
          break;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(lVar12 + 0x208) * 8 != lVar10);
    }
    lVar10 = local_548;
    if ((*(longlong *)(lVar12 + 0x218) != 0) && ((longlong)*(int *)(lVar12 + 0x228) != 0)) {
      lVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0x220) + lVar11) != 0) {
          cVar6 = FUN_140d1d704(local_500,lVar12 + 0x210);
          bVar40 = cVar6 == '\0';
          goto LAB_140d1581a;
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)*(int *)(lVar12 + 0x228) * 8 != lVar11);
    }
    break;
  case '\x05':
    lVar12 = FUN_140d199ea(*plVar5 + 0x2b0);
    if (lVar12 != 0) {
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_98);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (local_98 != *(longlong *)(local_560 + 0x47)) goto LAB_140d14183;
    }
    lVar12 = FUN_14579c19e(*plVar5 + 0x298);
    if (lVar12 != 0) {
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_98);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (local_98 != *(longlong *)(local_560 + 0x45)) goto LAB_140d14183;
    }
    lVar10 = local_548;
    if ((*(char *)(*plVar5 + 0x161) != '\0') &&
       (((byte)local_560[0x90] >> ((byte)(*(char *)(*plVar5 + 0x161) - 1) & 0x1f) & 1) != 0))
    goto switchD_140d147ae_caseD_f;
    break;
  case '\x06':
    lVar12 = *plVar5;
    if (*(char *)(lVar12 + 0x1a0) != '\0') {
      cVar6 = FUN_1414955c2(lVar12 + 0x168,local_4a0);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if (cVar6 == '\0') goto LAB_140d14183;
      lVar12 = *plVar5;
    }
    puVar27 = local_560;
    plVar18 = local_540;
    plVar15 = local_538;
    puVar33 = local_558;
    uVar16 = local_550;
    lVar11 = local_548;
    if (*(longlong *)(lVar12 + 0x1f8) != 0) {
      uVar7 = *(uint *)(lVar12 + 0x208);
      if ((longlong)(int)uVar7 != 0) {
        lVar10 = (longlong)(int)uVar7 * 8;
        lVar31 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar12 + 0x200) + lVar31) != 0) {
            if (*(longlong *)(lVar12 + 0x1f8) != *(longlong *)(local_560 + 0x2a))
            goto LAB_140d14183;
            uVar25 = local_560[0x2e];
            uVar28 = uVar25;
            if ((int)uVar7 < (int)uVar25) {
              uVar28 = uVar7;
            }
            if ((int)uVar28 < 1) goto LAB_140d161ec;
            uVar38 = 0;
            goto LAB_140d161d3;
          }
          lVar31 = lVar31 + 8;
        } while (lVar10 - lVar31 != 0);
      }
    }
    goto LAB_140d156ed;
  case '\b':
    lVar12 = *plVar5;
    if (*(ulonglong *)(puVar27 + 0x8e) < *(ulonglong *)(lVar12 + 0x3c8)) goto LAB_140d14183;
    goto LAB_140d15761;
  case '\t':
    lVar12 = *plVar5;
LAB_140d15761:
    lVar11 = *(longlong *)(lVar12 + 0x3b8);
    if (lVar11 == 0) {
      uVar14 = FUN_140dddfde();
      lVar11 = FUN_14477b664(uVar14);
      *(longlong *)(lVar12 + 0x3b8) = lVar11;
    }
    if (*(longlong *)(lVar12 + 0x3c0) == 0) {
      lVar10 = local_548;
      if ((lVar11 != 0) && (*(longlong *)(lVar12 + 0x3b0) != 0)) {
        plVar18 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          *(undefined8 *)(lVar12 + 0x3c0) = 0;
          lVar10 = local_548;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar11 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x3b0));
          *(longlong *)(lVar12 + 0x3c0) = lVar11;
          lVar10 = local_548;
          if (lVar11 != 0) goto LAB_140d15797;
        }
      }
    }
    else {
LAB_140d15797:
      lVar12 = *plVar5;
      lVar10 = *(longlong *)(lVar12 + 0x3b8);
      if (lVar10 == 0) {
        uVar14 = FUN_140dddfde();
        lVar10 = FUN_14477b664(uVar14);
        *(longlong *)(lVar12 + 0x3b8) = lVar10;
      }
      if (((*(longlong *)(lVar12 + 0x3c0) == 0) && (lVar10 != 0)) &&
         (*(longlong *)(lVar12 + 0x3b0) != 0)) {
        plVar18 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          uVar14 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x3b0));
        }
        *(undefined8 *)(lVar12 + 0x3c0) = uVar14;
      }
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_98);
      bVar40 = local_98 == *(longlong *)(local_560 + 0x4b);
LAB_140d1581a:
      lVar10 = local_548;
      if (!bVar40) goto switchD_140d147ae_caseD_f;
    }
    break;
  case '\n':
    lVar12 = *plVar5;
    if (*(char *)(lVar12 + 800) != '\x01') {
      lVar10 = *(longlong *)(lVar12 + 0x310);
      if (lVar10 == 0) {
        uVar14 = FUN_14086ad12();
        lVar10 = FUN_14477b664(uVar14);
        *(longlong *)(lVar12 + 0x310) = lVar10;
      }
      if (*(longlong *)(lVar12 + 0x318) == 0) {
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
        if ((lVar10 == 0) || (*(longlong *)(lVar12 + 0x308) == 0)) goto LAB_140d14183;
        plVar18 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          *(undefined8 *)(lVar12 + 0x318) = 0;
          plVar18 = local_540;
          puVar33 = local_558;
          uVar16 = local_550;
          puVar27 = local_560;
          plVar15 = local_538;
          lVar11 = local_548;
          goto LAB_140d14183;
        }
        uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
        lVar10 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x308));
        *(longlong *)(lVar12 + 0x318) = lVar10;
        plVar18 = local_540;
        puVar33 = local_558;
        uVar16 = local_550;
        puVar27 = local_560;
        plVar15 = local_538;
        lVar11 = local_548;
        if (lVar10 == 0) goto LAB_140d14183;
      }
      lVar12 = *plVar5;
      lVar10 = *(longlong *)(lVar12 + 0x310);
      if (lVar10 == 0) {
        uVar14 = FUN_14086ad12();
        lVar10 = FUN_14477b664(uVar14);
        *(longlong *)(lVar12 + 0x310) = lVar10;
      }
      if (((*(longlong *)(lVar12 + 0x318) == 0) && (lVar10 != 0)) &&
         (*(longlong *)(lVar12 + 0x308) != 0)) {
        plVar18 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          uVar14 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x308));
        }
        *(undefined8 *)(lVar12 + 0x318) = uVar14;
      }
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,&local_428);
      plVar18 = local_540;
      puVar33 = local_558;
      uVar16 = local_550;
      puVar27 = local_560;
      plVar15 = local_538;
      lVar11 = local_548;
      if ((*(longlong *)(local_560 + 0x4f) != local_428) ||
         (*(longlong *)(*plVar5 + 0x2f8) != *(longlong *)(local_560 + 0x52))) goto LAB_140d14183;
      bVar40 = *(uint *)(*plVar5 + 0x300) == local_560[0x54];
      lVar10 = local_548;
      goto joined_r0x000140d15464;
    }
    if ((longlong)*(int *)(lVar12 + 0x330) == 0) goto LAB_140d14183;
    lVar11 = 0;
    do {
      lVar10 = local_548;
      if (*(longlong *)(*(longlong *)(lVar12 + 0x328) + lVar11) == *(longlong *)local_4c0)
      goto switchD_140d147ae_caseD_1;
      lVar11 = lVar11 + 0x18;
    } while ((longlong)*(int *)(lVar12 + 0x330) * 0x18 != lVar11);
    goto switchD_140d147ae_caseD_f;
  case '\v':
    lVar12 = *plVar5;
    if ((longlong)*(int *)(lVar12 + 0x360) < 1) {
      bVar40 = true;
    }
    else {
      plVar18 = *(longlong **)(lVar12 + 0x358);
      local_528 = plVar18 + (longlong)*(int *)(lVar12 + 0x360) * 3;
      bVar40 = false;
      puVar27 = local_508;
      do {
        if (bVar40) break;
        lVar12 = *(longlong *)puVar27;
        if (lVar12 != 0) {
          lVar10 = plVar18[1];
          if (lVar10 == 0) {
            uVar14 = FUN_14042c486();
            lVar10 = FUN_14477b664(uVar14);
            plVar18[1] = lVar10;
          }
          lVar11 = plVar18[2];
          if (lVar11 == 0) {
            if ((lVar10 != 0) && (puVar27 = local_508, local_530 = plVar18, *plVar18 != 0)) {
              plVar18 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar18 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
                local_530[2] = 0;
                plVar18 = local_530;
                puVar27 = local_508;
              }
              else {
                uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
                plVar18 = local_530;
                lVar11 = FUN_144aff482(uVar14,local_530);
                plVar18[2] = lVar11;
                puVar27 = local_508;
                if (lVar11 != 0) goto LAB_140d14833;
              }
            }
          }
          else {
LAB_140d14833:
            bVar40 = true;
            if (lVar12 != lVar11) {
              iVar32 = 10;
              bVar39 = false;
              local_530 = plVar18;
              do {
                if (bVar39) break;
                lVar10 = FUN_14001d26e(lVar12);
                bVar39 = lVar10 == 0;
                if (!bVar39) {
                  lVar12 = lVar10;
                }
                plVar18 = local_530;
                puVar27 = local_508;
                if (lVar12 == lVar11) goto LAB_140d1487f;
                iVar32 = iVar32 + -1;
              } while (iVar32 != 0);
              bVar40 = false;
              plVar18 = local_530;
              puVar27 = local_508;
            }
          }
        }
LAB_140d1487f:
        plVar18 = plVar18 + 3;
      } while (plVar18 != local_528);
      lVar12 = *plVar5;
    }
    if ((bool)(*(longlong *)(lVar12 + 0x368) != 0 & bVar40)) {
      lVar12 = FUN_14087dee0(local_508);
      if (lVar12 == 0) {
        lVar10 = 0;
      }
      else {
        if (DAT_14c947fe0 == 0) {
          lVar12 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar12);
          DAT_14c947fe0 = lVar12;
        }
        FUN_140045924(DAT_14c947fe0,&local_98);
        lVar10 = local_98;
      }
      lVar12 = *plVar5;
      bVar40 = lVar10 == *(longlong *)(lVar12 + 0x368);
    }
    lVar10 = *(longlong *)(lVar12 + 0x390);
    if (lVar10 == 0) {
      uVar14 = FUN_141340f56();
      lVar10 = FUN_14477b664(uVar14);
      *(longlong *)(lVar12 + 0x390) = lVar10;
    }
    if (*(longlong *)(lVar12 + 0x398) == 0) {
      if ((lVar10 != 0) && (*(longlong *)(lVar12 + 0x388) != 0)) {
        plVar18 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
          *(undefined8 *)(lVar12 + 0x398) = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar10 = FUN_144aff482(uVar14,(longlong *)(lVar12 + 0x388));
          *(longlong *)(lVar12 + 0x398) = lVar10;
          if (lVar10 != 0) goto LAB_140d15d54;
        }
      }
    }
    else {
LAB_140d15d54:
      if (bVar40) {
        local_528 = (longlong *)(longlong)(int)local_560[0x60];
        if (local_528 != (longlong *)0x0) {
          local_530 = *(longlong **)(local_560 + 0x5e);
          local_528 = (longlong *)((longlong)local_528 << 3);
          plVar18 = (longlong *)0x0;
          do {
            if (DAT_14c947fe0 == 0) {
              lVar12 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar12);
              DAT_14c947fe0 = lVar12;
            }
            bVar40 = true;
            FUN_140045924(DAT_14c947fe0,&local_98);
            if (local_98 == *(longlong *)(*plVar5 + 0x388)) goto LAB_140d15e07;
            plVar18 = plVar18 + 1;
          } while (local_528 != plVar18);
        }
        bVar40 = false;
      }
    }
LAB_140d15e07:
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar11 = local_548;
    if (!bVar40) goto LAB_140d14183;
    bVar40 = *(uint *)(*plVar5 + 0x380) != 0 && *(uint *)(*plVar5 + 0x380) != local_560[0x8c];
    goto LAB_140d15e30;
  case '\f':
    lVar12 = (longlong)*(int *)(*plVar5 + 0x2f0);
    if (lVar12 != 0) {
      plVar13 = *(longlong **)(*plVar5 + 0x2e8);
      plVar35 = plVar13 + lVar12 * 3;
      puVar17 = *(uint **)(puVar27 + 0xa4);
      if (*(uint **)(puVar27 + 0xa4) == (uint *)0x0) {
        puVar17 = local_498;
      }
      local_528 = (longlong *)CONCAT44(local_528._4_4_,puVar27[0xa6] - 1);
      lVar12 = *(longlong *)(puVar27 + 0x94);
      fVar41 = 0.0;
      local_530 = (longlong *)((ulonglong)local_530 & 0xffffffff00000000);
LAB_140d14610:
      if (puVar27[0x96] != puVar27[0xa1]) {
        lVar10 = *plVar13;
        uVar7 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar25 = (uint)lVar10 & 0xffff;
        uVar7 = puVar17[(int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar25) +
                        (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar25 >> 4) & puVar27[0xa6] - 1];
        for (uVar25 = uVar7; uVar25 != 0xffffffff;
            uVar25 = *(uint *)(lVar12 + (longlong)(int)uVar25 * 0x14 + 0xc)) {
          uVar28 = uVar7;
          if (*(longlong *)(lVar12 + (longlong)(int)uVar25 * 0x14) == lVar10) goto LAB_140d1468b;
        }
      }
      goto LAB_140d14615;
    }
    goto LAB_140d14183;
  case '\r':
    if (((*(uint *)(*plVar5 + 0x2d8) != 0) && (*(uint *)(*plVar5 + 0x2d8) != puVar27[0xc4])) ||
       (lVar10 = local_548, (int)puVar27[0xa8] < 1)) goto LAB_140d14183;
    goto LAB_140d15eaf;
  case '\x0e':
    cVar6 = FUN_140114204(local_4c8);
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar11 = local_548;
    if ((cVar6 == '\0') ||
       (cVar6 = FUN_140114204(*plVar5 + 0x3d8), plVar18 = local_540, puVar33 = local_558,
       uVar16 = local_550, puVar27 = local_560, plVar15 = local_538, lVar11 = local_548,
       cVar6 == '\0')) goto LAB_140d14183;
    lVar12 = *plVar5;
    if ((*(uint *)(lVar12 + 1000) == 0) ||
       ((iVar32 = *(int *)(lVar12 + 0x3ec), iVar32 == 0 ||
        (*(uint *)(lVar12 + 1000) == DAT_14c948000)))) {
LAB_140d16892:
      local_430 = DAT_14c948620;
      local_438 = DAT_14c948618;
    }
    else {
      if ((iVar32 < 2) && (*(int *)(lVar12 + 0x40c) < 1)) {
        lVar12 = lVar12 + 0x3f0;
      }
      else {
        lVar12 = *(longlong *)(lVar12 + 0x400);
      }
      if ((iVar32 == 1) || (iVar32 < 6)) goto LAB_140d16892;
      local_430 = *(undefined4 *)(lVar12 + 0x44);
      local_438 = *(undefined8 *)(lVar12 + 0x3c);
    }
    FUN_144928d62(local_4a8,5);
    cVar6 = FUN_14493b798(local_4c8,*plVar5 + 0x3d8);
    bVar40 = cVar6 == '\0';
LAB_140d15e30:
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar10 = local_548;
    lVar11 = local_548;
    if (bVar40) goto LAB_140d14183;
    goto LAB_140d15eaf;
  default:
    goto switchD_140d147ae_caseD_f;
  case '\x10':
    bVar40 = puVar27[0xa9] == *(uint *)(*plVar5 + 0x3d0);
    goto joined_r0x000140d15464;
  case '\x12':
    if (lVar31 != 0) {
      bVar40 = lVar31 == *(longlong *)local_4d0;
      goto joined_r0x000140d15464;
    }
    break;
  case '\x13':
    lVar12 = (longlong)*(int *)(*plVar5 + 0x430);
    if (lVar12 != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*plVar5 + 0x428) + lVar11) == *(longlong *)(puVar27 + 0xba))
        goto switchD_140d147ae_caseD_1;
        lVar11 = lVar11 + 0x18;
      } while (lVar12 * 0x18 != lVar11);
      goto switchD_140d147ae_caseD_f;
    }
    break;
  case '\x14':
    if (*(uint *)(*plVar5 + 0x438) == 0) goto LAB_140d14183;
    bVar40 = *(uint *)(*plVar5 + 0x438) == puVar27[0xbc];
    lVar10 = local_548;
    goto joined_r0x000140d15464;
  case '\x15':
    uVar7 = *(uint *)(*plVar5 + 0x2e0);
    if ((uVar7 == 0) || (uVar7 != puVar27[0xbe])) goto LAB_140d14183;
    lVar12 = *(longlong *)(*plVar5 + 0x2b0);
    lVar10 = local_548;
    if ((*(longlong *)(puVar27 + 0x47) != lVar12) &&
       (local_98 = lVar12, cVar6 = FUN_1407df772(local_500), lVar10 = local_548, cVar6 == '\0'))
    goto switchD_140d147ae_caseD_f;
    break;
  case '\x16':
    if (*(uint *)(*plVar5 + 0x494) == 0) goto LAB_140d14183;
    bVar40 = *(uint *)(*plVar5 + 0x494) == puVar27[0xbd];
    lVar10 = local_548;
    goto joined_r0x000140d15464;
  case '\x18':
    FUN_1446dcdd4(&local_98,local_4c0);
    if (DAT_14cb8d3c0 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_1407d7c9c(DAT_14cb8d3c0,&local_98);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar11 = local_548;
    if (lVar12 == 0) goto LAB_140d14183;
    lVar31 = (longlong)*(int *)(*plVar5 + 0x448);
    if (lVar31 == 0) goto LAB_140d14183;
    lVar11 = *(longlong *)(*plVar5 + 0x440);
    lVar34 = 0;
    do {
      lVar10 = local_548;
      if ((*(int *)(lVar11 + lVar34) == *(int *)(lVar12 + 0x20)) &&
         (*(int *)(lVar11 + 8 + lVar34) == *(int *)(lVar12 + 0x28))) goto switchD_140d147ae_caseD_1;
      lVar34 = lVar34 + 0xc;
    } while (lVar31 * 0xc != lVar34);
    goto switchD_140d147ae_caseD_f;
  case '\x19':
    lVar12 = (longlong)*(int *)(*plVar5 + 0x488);
    if (lVar12 == 0) goto LAB_140d14183;
    lVar11 = 0;
    do {
      lVar10 = local_548;
      if (*(longlong *)(*(longlong *)(*plVar5 + 0x480) + lVar11) == *(longlong *)(puVar27 + 0xbf))
      goto switchD_140d147ae_caseD_1;
      lVar11 = lVar11 + 8;
    } while (lVar12 * 8 != lVar11);
switchD_140d147ae_caseD_f:
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar11 = lVar10;
    goto LAB_140d14183;
  case '\x1a':
    bVar40 = *(longlong *)(puVar27 + 0x4f) == *(longlong *)(*plVar5 + 0x308);
    goto joined_r0x000140d15464;
  case '\x1b':
    local_98 = *(longlong *)(*plVar5 + 0x340);
    FUN_1401533ba(&local_448,&local_98);
    if (*(char *)(*plVar5 + 0x338) == '\x01') {
      lVar12 = FUN_140d1d7e4();
      puVar19 = (undefined8 *)FUN_140d19a6c(lVar12 + 0x90);
      local_458 = 0;
      local_450 = *(int *)(puVar19 + 1);
      uVar14 = *puVar19;
      if (local_450 == 0) {
        local_44c = 0;
      }
      else {
        FUN_148c13408(&local_458,local_450,0);
        FUN_148c1347b(local_458,uVar14);
        lVar12 = local_458;
        lVar10 = (longlong)local_450;
        if (lVar10 != 0) {
          lVar11 = 0;
          do {
            local_468 = *(undefined8 *)(lVar12 + lVar11);
            FUN_1446dcdd4(&local_98,&local_468);
            if ((((uint)local_98 != 0) && (local_98._4_4_ != 0)) &&
               ((uint)local_98 != DAT_14c948000)) {
              if (DAT_14c947fe0 == 0) {
                lVar12 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar12);
                DAT_14c947fe0 = lVar12;
              }
              FUN_140045924(DAT_14c947fe0,&local_470,&local_98);
              local_420 = local_470;
              FUN_1401533ba(&local_468);
              local_448 = local_468;
              local_440 = local_460;
              if (local_80 != 0) {
                FUN_1400020a8();
              }
              break;
            }
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            lVar11 = lVar11 + 0x18;
          } while (lVar10 * 0x18 != lVar11);
        }
      }
      if (local_458 != 0) {
        FUN_1400020a8(local_458);
      }
    }
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar11 = local_548;
    if (((uint)local_448 == 0) || (local_560[0xc1] != (uint)local_448)) goto LAB_140d14183;
    bVar40 = local_560[0xc3] == local_440;
    lVar10 = local_548;
joined_r0x000140d15464:
    plVar18 = local_540;
    puVar33 = local_558;
    uVar16 = local_550;
    puVar27 = local_560;
    plVar15 = local_538;
    lVar11 = lVar10;
    if (!bVar40) goto LAB_140d14183;
    goto LAB_140d15eaf;
  case '\x1d':
    lVar12 = *plVar5;
    if (((*(char *)(lVar12 + 0x491) == '\x01') && (*(char *)((longlong)puVar27 + 0xc6) != '\x01'))
       || ((*(char *)(lVar12 + 0x490) == '\x01' && (*(char *)((longlong)puVar27 + 199) != '\x01'))))
    goto LAB_140d14183;
    lVar10 = local_548;
    if ((longlong)*(int *)(lVar12 + 0x238) != 0) {
      local_528 = *(longlong **)(lVar12 + 0x230);
      plVar35 = local_528;
      do {
        if (puVar27[0x12] != 0) {
          lVar31 = 0;
          do {
            if (*(longlong *)(*(longlong *)(puVar27 + 0x10) + lVar31) == *plVar35)
            goto switchD_140d147ae_caseD_1;
            lVar31 = lVar31 + 8;
          } while ((longlong)(int)puVar27[0x12] << 3 != lVar31);
        }
        if (puVar27[0x16] != 0) {
          lVar31 = 0;
          do {
            if (*(longlong *)(*(longlong *)(puVar27 + 0x14) + lVar31) == *plVar35)
            goto switchD_140d147ae_caseD_1;
            lVar31 = lVar31 + 8;
          } while ((longlong)(int)puVar27[0x16] << 3 != lVar31);
        }
        plVar35 = plVar35 + 1;
      } while (plVar35 != local_528 + *(int *)(lVar12 + 0x238));
      goto LAB_140d14183;
    }
  }
switchD_140d147ae_caseD_1:
LAB_140d15eaf:
  plVar15 = local_538;
  plVar18 = local_540;
  puVar27 = local_560;
  puVar33 = local_558;
  uVar16 = local_550;
  lVar11 = lVar10;
  if ((*plVar5 == 0) || (*(char *)(*plVar5 + 0x1a8) != '\x01')) {
    if ((char)local_560[4] == '\x01') {
      iVar32 = *(int *)(param_1 + 0x3d8);
      lVar11 = local_548;
      if (iVar32 == 0) {
        uVar38 = 1;
        plVar35 = (longlong *)0x0;
        iVar8 = 0;
        iVar36 = 0;
      }
      else {
        puVar17 = *(uint **)(param_1 + 0x3d0);
        if (*(uint **)(param_1 + 0x3d0) == (uint *)0x0) {
          puVar17 = local_4b0;
        }
        uVar7 = *puVar17;
        if (uVar7 == 0) {
          iVar8 = iVar32 + 0x1e;
          if (-1 < iVar32 + -1) {
            iVar8 = iVar32 + -1;
          }
          plVar35 = (longlong *)0x0;
          plVar13 = (longlong *)(ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            plVar13 = plVar35;
          }
          iVar36 = 0;
          do {
            if (plVar13 == plVar35) goto LAB_140d14183;
            iVar36 = iVar36 + 0x20;
            uVar7 = puVar17[(longlong)plVar35 + 1];
            plVar35 = (longlong *)((longlong)plVar35 + 1);
          } while (uVar7 == 0);
        }
        else {
          plVar35 = (longlong *)0x0;
          iVar36 = 0;
        }
        uVar38 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar38 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar36 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar32 <= iVar8) {
          iVar8 = iVar32;
        }
      }
      if (iVar8 != iVar32) {
        uVar7 = 0xffffffff;
LAB_140d14321:
        lVar12 = *(longlong *)(param_1 + 0x3b0);
        lVar10 = (longlong)iVar8 * 0x60;
        if (*(int *)(lVar12 + 0x10 + lVar10) != *(int *)(lVar12 + 0x3c + lVar10)) {
          puVar29 = (undefined4 *)(lVar12 + lVar10);
          puVar26 = puVar29 + 0x10;
          if (*(undefined4 **)(puVar29 + 0x12) != (undefined4 *)0x0) {
            puVar26 = *(undefined4 **)(puVar29 + 0x12);
          }
          iVar8 = puVar26[puVar29[0x14] - 1 & (uint)local_4e0];
          if (iVar8 != -1) {
            lVar12 = *(longlong *)(puVar29 + 2);
            iVar23 = iVar8;
            do {
              if (*(longlong **)(lVar12 + (longlong)iVar23 * 0x18) == plVar5) goto LAB_140d14459;
              iVar23 = *(int *)(lVar12 + (longlong)iVar23 * 0x18 + 0x10);
            } while (iVar23 != -1);
          }
        }
        goto LAB_140d14340;
      }
    }
    else if ((char)local_518 != '\0') {
      local_5b8 = local_4f0;
      FUN_140d1c8e8(plVar1,*local_560,plVar5,local_4e8);
      puVar33 = local_558;
      uVar16 = local_550;
    }
  }
  else {
    uVar7 = *(uint *)(local_4e8 + 0x2c);
    lVar12 = *(longlong *)(param_1 + 0x600);
    if (*(longlong *)(param_1 + 0x600) == 0) {
      lVar12 = local_490;
    }
    uVar25 = uVar7 + 0x1f;
    if (-1 < (longlong)(int)uVar7) {
      uVar25 = uVar7;
    }
    if (((*(uint *)(lVar12 + (longlong)((int)uVar25 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x5e0) + (longlong)(int)uVar7 * 0x10) != 0)) {
      FUN_140d1d9a6();
      puVar33 = local_558;
      uVar16 = local_550;
    }
  }
LAB_140d14183:
  lVar10 = lVar11 + 1;
  iVar32 = (int)uVar16;
  lVar12 = local_4f8;
  if ((int)(*puVar33 + iVar32) <= (int)lVar11) goto LAB_140d13e50;
  goto LAB_140d1414c;
  while (uVar28 = *(uint *)((longlong)plVar30 + 0xc),
        *(uint *)((longlong)plVar30 + 0xc) != 0xffffffff) {
LAB_140d1468b:
    plVar30 = (longlong *)(lVar12 + (longlong)(int)uVar28 * 0x14);
    if (*plVar30 == lVar10) goto LAB_140d146a6;
  }
  plVar30 = (longlong *)0x0;
LAB_140d146a6:
  if (0.0 < *(float *)(plVar30 + 1)) {
    local_530 = (longlong *)CONCAT44(local_530._4_4_,(uint)(byte)((char)local_530 + 1));
    do {
      plVar30 = (longlong *)(lVar12 + (longlong)(int)uVar7 * 0x14);
      if (*plVar30 == lVar10) goto LAB_140d146e5;
      uVar7 = *(uint *)((longlong)plVar30 + 0xc);
    } while (uVar7 != 0xffffffff);
    plVar30 = (longlong *)0x0;
LAB_140d146e5:
    fVar41 = fVar41 + *(float *)(plVar30 + 1);
  }
LAB_140d14615:
  plVar13 = plVar13 + 3;
  if (plVar13 == plVar35) goto LAB_140d15e54;
  goto LAB_140d14610;
LAB_140d15e54:
  if (((char)local_530 < '\x01') || (fVar41 <= 0.0)) goto LAB_140d14183;
  uVar25 = (int)ROUND(fVar41 + fVar41 + -0.5) >> 1;
  uVar7 = 0;
  if (0 < (int)uVar25) {
    uVar7 = uVar25;
  }
  puVar27[0x8d] = uVar7;
  lVar10 = local_548;
  goto switchD_140d147ae_caseD_1;
  while (uVar38 = uVar38 + 1, uVar28 != uVar38) {
LAB_140d161d3:
    if ((*(ulonglong *)(*(longlong *)(local_560 + 0x2c) + uVar38 * 8) &
        ~*(ulonglong *)(*(longlong *)(lVar12 + 0x200) + uVar38 * 8)) != 0) goto LAB_140d14183;
  }
LAB_140d161ec:
  if ((int)uVar7 < (int)uVar25) {
    lVar31 = 0;
    do {
      if (*(longlong *)(lVar10 + *(longlong *)(local_560 + 0x2c) + lVar31 * 8) != 0)
      goto LAB_140d14183;
      lVar31 = lVar31 + 1;
    } while (uVar25 - uVar7 != (int)lVar31);
  }
LAB_140d156ed:
  if (*(char *)(lVar12 + 0x2dc) == (char)local_560[0x42]) goto LAB_140d14183;
  lVar12 = FUN_1405faa04(lVar12 + 0x1b8);
  if ((lVar12 != 0) &&
     (plVar18 = local_540, puVar33 = local_558, uVar16 = local_550, puVar27 = local_560,
     plVar15 = local_538, lVar11 = local_548,
     *(longlong *)(*plVar5 + 0x1b8) != *(longlong *)(local_560 + 0x43))) goto LAB_140d14183;
  lVar10 = local_548;
  if (*(char *)(*plVar5 + 0x1e8) == '\x01') {
    local_560[0x8d] = local_560[0x32];
  }
  goto switchD_140d147ae_caseD_1;
  while (iVar8 = (int)puVar22[2], iVar8 != -1) {
LAB_140d14459:
    puVar22 = (ulonglong *)(lVar12 + (longlong)iVar8 * 0x18);
    if ((longlong *)*puVar22 == plVar5) goto LAB_140d14473;
  }
  puVar22 = (ulonglong *)0x0;
LAB_140d14473:
  uVar16 = puVar22[1];
  if (uVar16 != 0) {
    uVar24 = *puVar29;
    local_4e8 = CONCAT44(local_4e8._4_4_,iVar36);
    local_528 = plVar35;
    if (*(char *)(uVar16 + 0x28) == '\0') {
      local_518 = uVar16;
      cVar6 = FUN_140d2b622(plVar1,uVar24,plVar5);
      plVar35 = local_528;
      iVar36 = (int)local_4e8;
      if (cVar6 == '\0') goto LAB_140d14340;
      local_530 = (longlong *)CONCAT44(local_530._4_4_,*puVar29);
      lVar12 = FUN_140d18446(plVar1,*puVar29,plVar5);
      uVar16 = local_518;
      uVar24 = local_530._0_4_;
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x28) = 1;
        FUN_140d1855e(local_4b8,plVar5,lVar12,(ulonglong)local_530 & 0xffffffff);
        uVar16 = local_518;
        uVar24 = *puVar29;
      }
    }
    local_5b8 = local_4f0;
    FUN_140d1c8e8(plVar1,uVar24,plVar5,uVar16);
    plVar35 = local_528;
    iVar36 = (int)local_4e8;
  }
LAB_140d14340:
  uVar7 = uVar7 & ~(uint)uVar38;
  puVar27 = *(uint **)(param_1 + 0x3d0);
  if (*(uint **)(param_1 + 0x3d0) == (uint *)0x0) {
    puVar27 = local_4b0;
  }
  iVar23 = *(int *)(param_1 + 0x3d8);
  iVar8 = (int)plVar35;
  lVar12 = (longlong)iVar8;
  local_518 = CONCAT44(local_518._4_4_,uVar7);
  uVar25 = puVar27[lVar12] & uVar7;
  if (uVar25 == 0) {
    iVar20 = iVar23 + 0x1e;
    if (-1 < iVar23 + -1) {
      iVar20 = iVar23 + -1;
    }
    iVar20 = iVar20 >> 5;
    iVar36 = iVar36 + 0x20;
    iVar21 = iVar20;
    if (iVar20 < iVar8) {
      iVar21 = iVar8;
    }
    if (iVar8 < iVar20) {
      lVar10 = 0;
      do {
        uVar25 = puVar27[lVar12 + lVar10 + 1];
        if (uVar25 != 0) {
          plVar35 = (longlong *)(ulonglong)(iVar8 + (int)lVar10 + 1);
          uVar7 = 0xffffffff;
          goto LAB_140d143d6;
        }
        iVar36 = iVar36 + 0x20;
        lVar10 = lVar10 + 1;
      } while (iVar21 - lVar12 != lVar10);
      local_518 = CONCAT44(local_518._4_4_,0xffffffff);
      iVar8 = iVar21;
    }
    plVar35 = (longlong *)(ulonglong)(iVar8 + 1);
    iVar8 = iVar23;
    uVar7 = (uint)local_518;
  }
  else {
LAB_140d143d6:
    uVar38 = (ulonglong)(-uVar25 & uVar25);
    uVar16 = uVar38 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar36 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar8) {
      iVar8 = iVar23;
    }
  }
  plVar18 = local_540;
  puVar33 = local_558;
  uVar16 = local_550;
  puVar27 = local_560;
  plVar15 = local_538;
  lVar11 = local_548;
  if (iVar8 == iVar32) goto LAB_140d14183;
  goto LAB_140d14321;
LAB_140d14d50:
  if (uVar25 != 0xffffffff) {
    puVar33 = (uint *)(lVar11 + (longlong)(int)uVar25 * 0x18);
    if (*puVar33 != uVar7) goto code_r0x000140d14d6d;
    uVar28 = *(uint *)(lVar10 + (longlong)(int)puVar33[5] * 4);
    if (uVar28 == uVar25) {
      puVar17 = (uint *)(lVar10 + (longlong)(int)puVar33[5] * 4);
    }
    else {
      do {
        lVar10 = (longlong)(int)uVar28;
        uVar28 = *(uint *)(lVar11 + 0x10 + lVar10 * 0x18);
      } while (uVar28 != uVar25);
      puVar17 = (uint *)(lVar11 + lVar10 * 0x18 + 0x10);
    }
    *puVar17 = puVar33[4];
    FUN_140d18a84();
  }
  goto LAB_140d13eaa;
code_r0x000140d14d6d:
  uVar25 = puVar33[4];
  goto LAB_140d14d50;
  while (iVar8 = *(int *)(lVar12 + 0x58), iVar8 != -1) {
LAB_140d16d40:
    lVar12 = lVar9 + (longlong)iVar8 * 0x60;
    if (*(uint *)(lVar9 + (longlong)iVar8 * 0x60) == uVar7) goto LAB_140d16d5e;
  }
  lVar12 = 0;
LAB_140d16d5e:
  if (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c)) {
    FUN_140d173bc(local_520,&local_e8,uVar7);
    if (-1 < (short)local_e8) goto LAB_140d16ca2;
  }
  FUN_145bf4c9e(plVar1,uVar7);
LAB_140d16ca2:
  local_400 = CONCAT44(local_400._4_4_,(uint)local_400 & ~uStack_410._4_4_);
  FUN_1449c0562(&uStack_410);
  iVar8 = local_400._4_4_;
  uVar14 = local_400;
  if (local_418 == puVar27 &&
      (CONCAT44(uStack_404,local_408) == uVar16 && local_400._4_4_ == iVar32)) goto LAB_140d16c73;
  goto LAB_140d16c94;
  while (iVar32 = *(int *)(lVar37 + 0x18), iVar32 != -1) {
LAB_140d14d34:
    lVar37 = lVar34 + (longlong)iVar32 * 0x20;
    if (*(longlong *)(lVar34 + (longlong)iVar32 * 0x20) == lVar11) goto LAB_140d14e52;
  }
  lVar37 = 0;
LAB_140d14e52:
  if ((longlong)*(int *)(lVar37 + 0x10) != 0) {
    lVar11 = *(longlong *)(lVar37 + 8);
    lVar34 = (longlong)*(int *)(lVar37 + 0x10) * 2;
    lVar37 = 0;
    local_558 = puVar17;
    local_4f8 = lVar12;
    local_4e0 = lVar11;
    local_4d8 = lVar34;
    do {
      sVar4 = *(short *)(lVar11 + lVar37);
      if ((-1 < sVar4) && ((int)sVar4 < *(int *)(lVar31 + 0x10))) {
        local_520 = (uint *)(longlong)(int)uStack_480;
        uVar7 = (int)uStack_480 + 1;
        uStack_480 = CONCAT44(uStack_480._4_4_,uVar7);
        lVar12 = *(longlong *)(lVar31 + 8);
        if (uStack_480._4_4_ < uVar7) {
          local_548 = *(longlong *)(lVar31 + 8);
          FUN_14100c5e2(&local_488,local_520);
          lVar11 = local_4e0;
          puVar33 = local_4f0;
          lVar34 = local_4d8;
          lVar12 = local_548;
          puVar17 = local_558;
        }
        *(undefined8 *)(local_488 + (longlong)local_520 * 8) =
             *(undefined8 *)(lVar12 + (longlong)(int)sVar4 * 8);
      }
      lVar37 = lVar37 + 2;
      lVar12 = local_4f8;
    } while (lVar34 != lVar37);
  }
LAB_140d13d31:
  if ((int)uStack_480 == 0) {
    plVar15 = (longlong *)FUN_140d17572(puVar17,(byte)*puVar33);
    plVar18 = plVar15 + 1;
    if ((int)plVar15[1] == 0) {
      *(undefined1 *)(puVar27 + 0xc9) = 1;
    }
  }
  else {
    plVar18 = &uStack_480;
    plVar15 = &local_488;
  }
  cVar6 = FUN_140d174a2(plVar1,*puVar27);
  local_520 = (uint *)CONCAT71(local_520._1_7_,cVar6);
  if ((((lVar10 != 0) && (cVar6 != '\0')) && (puVar27[6] != 0)) &&
     ((puVar27[7] != 0 && (puVar27[6] != DAT_14c948000)))) {
    local_540 = plVar18;
    local_538 = plVar15;
    local_4f8 = lVar12;
    if (DAT_14c947fe0 == 0) {
      lVar12 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar12);
      DAT_14c947fe0 = lVar12;
    }
    FUN_140045924(DAT_14c947fe0,&local_418,puVar27 + 6,1);
    lVar11 = FUN_1403363fe(plVar1,&local_418);
    lVar12 = local_4f8;
    plVar15 = local_538;
    plVar18 = local_540;
    if (lVar11 != 0) {
      local_5b8 = (uint *)CONCAT71(local_5b8._1_7_,1);
      FUN_140d18af6(plVar1,lVar10,lVar11,puVar27[0x8d]);
      *(undefined1 *)(puVar27 + 0xc9) = 1;
    }
  }
  iVar32 = (int)local_550;
  if ((char)puVar27[0xc9] == '\x01') {
    puVar33 = puVar27 + 200;
  }
  else {
    puVar33 = puVar27 + 200;
    if ((-1 < iVar32 & (*(byte *)((longlong)puVar27 + 0x326) ^ 1) & (byte)local_520) == 1) {
      lVar10 = (longlong)(int)puVar27[200];
      local_4f8 = lVar12;
      if (-1 < lVar10) {
        local_4d8 = param_1 + 1000;
        local_4b8 = param_1 + 0x6b0;
        local_490 = param_1 + 0x5f0;
        local_4b0 = (uint *)(param_1 + 0x3c0);
        local_4c0 = puVar27 + 0x4d;
        local_500 = puVar27 + 0x28;
        local_4d0 = puVar27 + 0xb8;
        local_4c8 = puVar27 + 0xaa;
        local_4a8 = puVar27 + 0xae;
        local_498 = puVar27 + 0xa2;
        local_508 = puVar27 + 0x56;
        local_4a0 = puVar27 + 0x18;
        local_50c = -1;
        uVar16 = local_550;
        local_558 = puVar33;
LAB_140d1414c:
        iVar32 = (int)uVar16;
        if ((int)lVar10 < (int)*plVar18) {
          plVar5 = *(longlong **)(*plVar15 + lVar10 * 8);
          lVar11 = lVar10;
          if (plVar5 != (longlong *)0x0) {
            uVar7 = *puVar27;
            if (*(int *)(param_1 + 0x3b8) == *(int *)(param_1 + 0x3e4)) {
LAB_140d14176:
              lVar12 = 0;
            }
            else {
              lVar12 = *(longlong *)(param_1 + 0x3f0);
              if (*(longlong *)(param_1 + 0x3f0) == 0) {
                lVar12 = local_4d8;
              }
              iVar32 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & uVar7) * 4);
              if (iVar32 == -1) goto LAB_140d14176;
              do {
                lVar12 = *(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60;
                puVar33 = local_558;
                if (*(uint *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar32 * 0x60) == uVar7)
                goto LAB_140d14179;
                iVar32 = *(int *)(lVar12 + 0x58);
              } while (iVar32 != -1);
              lVar12 = 0;
            }
LAB_140d14179:
            if (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c)) {
              uVar25 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4))
                       * -0x7a143595;
              uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
              uVar25 = uVar25 >> 0x10 ^ uVar25;
              lVar31 = lVar12 + 0x40;
              if (*(longlong *)(lVar12 + 0x48) != 0) {
                lVar31 = *(longlong *)(lVar12 + 0x48);
              }
              local_4e0 = CONCAT44(local_4e0._4_4_,uVar25);
              iVar32 = *(int *)(lVar31 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar25) * 4);
              puVar33 = local_558;
              local_548 = lVar10;
              if (iVar32 != -1) {
                do {
                  if (*(longlong **)(*(longlong *)(lVar12 + 8) + (longlong)iVar32 * 0x18) == plVar5)
                  {
                    if (*(int *)(param_1 + 0x3b8) == *(int *)(param_1 + 0x3e4)) goto LAB_140d1429f;
                    lVar12 = *(longlong *)(param_1 + 0x3f0);
                    if (*(longlong *)(param_1 + 0x3f0) == 0) {
                      lVar12 = local_4d8;
                    }
                    iVar32 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & uVar7) *
                                               4);
                    if (iVar32 == -1) goto LAB_140d1429f;
                    goto LAB_140d1459b;
                  }
                  iVar32 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar32 * 0x18 + 0x10);
                } while (iVar32 != -1);
              }
            }
          }
          goto LAB_140d14183;
        }
      }
      *(undefined1 *)(puVar27 + 0xc9) = 1;
      lVar12 = local_4f8;
    }
  }
LAB_140d13e50:
  if ((byte)local_520 != '\0') {
    lVar9 = (longlong)plVar1 + lVar12 + 0x330;
    *puVar33 = *puVar33 + iVar32 + 1;
    puVar26 = *(undefined4 **)((longlong)plVar1 + lVar12 + 0x338);
    if (puVar26 != (undefined4 *)0x0) {
      uVar7 = FUN_140d17d4e(*puVar27,local_4f0,param_1 + 0x758);
      if ((uVar7 != 0) && (*(int *)(param_1 + 0x548) != *(int *)(param_1 + 0x574))) {
        lVar10 = param_1 + 0x578;
        if (*(longlong *)(param_1 + 0x580) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x580);
        }
        uVar16 = (longlong)(int)uVar7 & (longlong)*(int *)(param_1 + 0x588) - 1U;
        iVar32 = *(int *)(lVar10 + (uVar16 & 0xffffffff) * 4);
        if (iVar32 != -1) {
          lVar11 = *(longlong *)(param_1 + 0x540);
          do {
            if (*(uint *)(lVar11 + (longlong)iVar32 * 0x18) == uVar7) {
              uVar25 = *(uint *)(lVar10 + uVar16 * 4);
              bVar40 = true;
              goto LAB_140d14d50;
            }
            iVar32 = *(int *)(lVar11 + (longlong)iVar32 * 0x18 + 0x10);
          } while (iVar32 != -1);
        }
      }
      bVar40 = false;
LAB_140d13eaa:
      if ((char)puVar27[0xc9] == '\x01') {
        FUN_140d17628(lVar9,puVar26);
      }
      else if (*(char *)((longlong)puVar27 + 0x326) == '\x01') {
        local_418 = (uint *)CONCAT44(local_418._4_4_,*puVar26);
        FUN_140d1861a(&uStack_410,puVar26 + 2);
        uStack_f8 = puVar26[200];
        uStack_f4 = (undefined1)((uint)*(undefined4 *)((longlong)puVar26 + 0x323) >> 8);
        cStack_f3 = (char)((uint)*(undefined4 *)((longlong)puVar26 + 0x323) >> 0x10);
        uStack_f2 = 0;
        cStack_f3 = cStack_f3 + -1;
        FUN_140d17628(lVar9,puVar26);
        if ((cStack_f3 != '\0') && (FUN_140d17b40(lVar9,&local_418), bVar40)) {
          lVar9 = param_1 + 0x540;
          uVar14 = *(undefined8 *)((longlong)plVar1 + lVar12 + 0x340);
          FUN_140d19732(lVar9,&local_98);
          *local_90 = uVar7;
          *(undefined8 *)(local_90 + 2) = uVar14;
          local_90[4] = 0xffffffff;
          local_458 = CONCAT44(local_458._4_4_,(uint)local_98);
          local_5b8 = (uint *)0x0;
          cVar6 = FUN_140d183b8(lVar9,uVar7,local_90);
          if (cVar6 == '\0') {
            uVar25 = *(int *)(param_1 + 0x548) - *(int *)(param_1 + 0x574);
            iVar32 = 1;
            if (3 < uVar25) {
              uVar16 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
              lVar12 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iVar32 = 1 << ((byte)lVar12 & 0x1f);
            }
            if (((int)uVar25 < 1) || (iVar32 <= *(int *)(param_1 + 0x588))) {
              uVar7 = *(int *)(param_1 + 0x588) - 1U & uVar7;
              local_90[5] = uVar7;
              lVar9 = *(longlong *)(param_1 + 0x580);
              if (*(longlong *)(param_1 + 0x580) == 0) {
                lVar9 = param_1 + 0x578;
              }
              local_90[4] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x588) - 1U &
                                              (longlong)(int)uVar7) * 4);
              lVar9 = *(longlong *)(param_1 + 0x580);
              if (*(longlong *)(param_1 + 0x580) == 0) {
                lVar9 = param_1 + 0x578;
              }
              *(undefined4 *)
               (lVar9 + ((longlong)*(int *)(param_1 + 0x588) - 1U & (longlong)(int)uVar7) * 4) =
                   (undefined4)local_458;
            }
            else {
              *(int *)(param_1 + 0x588) = iVar32;
              FUN_140d1c3ca(lVar9);
            }
          }
        }
        FUN_140d17bd8(&uStack_410);
      }
    }
  }
LAB_140d13ec3:
  if (local_488 != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  uVar16 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_1447a08a2(&local_e8,0);
  }
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    FUN_1446efbd8(&local_d8,0);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_140d13b6b:
  if ((((*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) &&
       (lVar9 = (**(code **)(*plVar1 + 0x180))(plVar1), lVar9 != 0)) &&
      (lVar9 = FUN_1400f6f32(lVar9), lVar9 != 0)) &&
     (local_520 = *(uint **)(lVar9 + 0x68), local_520 != (uint *)0x0)) {
    puVar27 = (uint *)(param_1 + 0x358);
    uVar16 = param_1 + 0x368;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    uStack_d0 = 0;
    uStack_e0 = uVar16;
    if (*(int *)(param_1 + 0x380) == 0) {
      iVar32 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar32 = *(int *)(param_1 + 0x380);
    }
    uStack_3f8 = CONCAT44(uStack_cc,uStack_d0);
    local_400 = local_d8;
    uVar14 = local_400;
    uStack_410 = local_e8;
    local_408 = (undefined4)uStack_e0;
    uStack_404 = uStack_e0._4_4_;
    local_400._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    local_418 = puVar27;
    if ((local_400._4_4_ != iVar32) || (uStack_e0 != uVar16)) {
      iVar8 = local_400._4_4_;
      local_400 = uVar14;
LAB_140d16c94:
      if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
        uVar7 = *(uint *)(*(longlong *)local_418 + (longlong)iVar8 * 0xc);
        lVar9 = *(longlong *)(param_1 + 0x3f0);
        if (*(longlong *)(param_1 + 0x3f0) == 0) {
          lVar9 = param_1 + 1000;
        }
        iVar8 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          lVar9 = *(longlong *)(param_1 + 0x3b0);
          iVar36 = iVar8;
          do {
            if (*(uint *)(lVar9 + (longlong)iVar36 * 0x60) == uVar7) goto LAB_140d16d40;
            iVar36 = *(int *)((longlong)iVar36 * 0x60 + lVar9 + 0x58);
          } while (iVar36 != -1);
        }
      }
      goto LAB_140d16ca2;
    }
LAB_140d16c73:
    local_400 = uVar14;
    FUN_14068ded2(puVar27,0);
  }
  if ((local_70 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d170e0 FUN_140d170e0 body=469 status=ok
// SIG undefined FUN_140d170e0(void)

void FUN_140d170e0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar7) {
    FUN_14481578e();
  }
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar12 = 1;
    uVar13 = 0;
    iVar2 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar6;
    if (uVar10 == 0) {
      iVar2 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar2 = iVar7 + -1;
      }
      uVar13 = 0;
      uVar12 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar12 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar2) {
      iVar2 = iVar7;
    }
  }
  if (iVar2 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar11 = *param_1;
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(param_2,iVar7);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) =
           *(undefined4 *)((longlong)iVar2 * 0x10 + lVar11);
      uVar10 = uVar10 & ~(uint)uVar12;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar2 = (int)uVar13;
      lVar11 = (longlong)iVar2;
      uVar3 = puVar6[lVar11] & uVar10;
      if (uVar3 == 0) {
        iVar4 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar4 = iVar7 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar11 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar11 == lVar8) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar2 + (int)lVar8 + 1);
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar7);
  }
  return;
}



// FUNCTION 140d172b5 FUN_140d172b5 body=120 status=ok
// SIG undefined FUN_140d172b5(void)

undefined8 FUN_140d172b5(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar1 = FUN_1400f6f32();
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
      FUN_140d173bc(lVar1,local_24,param_2);
      if (-1 < local_24[0]) {
        uVar2 = FUN_140d1732e(lVar1,local_24);
        goto LAB_140d1730b;
      }
    }
  }
  uVar2 = 0;
LAB_140d1730b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1732e FUN_140d1732e body=142 status=ok
// SIG undefined FUN_140d1732e(void)

undefined8 FUN_140d1732e(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar5 + 0x28) != 0) {
        uVar2 = *(uint *)(lVar5 + 0x24);
        uVar3 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (puVar4 == (undefined8 *)0x0) {
            return 0;
          }
          if (*(int *)(puVar4 + 2) != *(int *)(lVar5 + 0x28)) {
            return 0;
          }
          if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
            return 0;
          }
          uVar3 = *puVar4;
        }
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140d173bc FUN_140d173bc body=181 status=ok
// SIG undefined FUN_140d173bc(void)

void FUN_140d173bc(longlong param_1,undefined2 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = 0xffff;
  if ((-1 < param_3) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if ((((((lVar2 != 0) && (*(short *)(lVar2 + 4) < 0)) && (*(int *)(lVar2 + 0x20) == param_3))
           && ((*(int *)(lVar2 + 0x1c) != 0 && (uVar1 = *(uint *)(lVar2 + 0x18), -1 < (int)uVar1))))
          && (((int)uVar1 < DAT_14c9647dc &&
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar2 + 0x1c))))))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
        uVar4 = *(undefined2 *)(lVar2 + 2);
        uVar3 = *(undefined2 *)(lVar2 + 8);
        goto LAB_140d17462;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar5);
  }
  uVar3 = 0;
LAB_140d17462:
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}



// FUNCTION 140d17472 FUN_140d17472 body=48 status=ok
// SIG undefined FUN_140d17472(void)

void FUN_140d17472(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 140d174a2 FUN_140d174a2 body=207 status=ok
// SIG undefined FUN_140d174a2(void)

undefined8 FUN_140d174a2(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x480) != *(int *)(param_1 + 0x4ac)) {
    lVar1 = param_1 + 0x4b0;
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x4b8);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x4c0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x478) + (longlong)iVar3 * 0x10) == param_2) {
          return 0;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x478) + 8);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar1 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x418);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        bVar4 = *(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar3 * 0x60) == param_2;
        uVar2 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
        if (bVar4) {
          return uVar2;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0x3d8) + 0x58);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140d17572 FUN_140d17572 body=181 status=ok
// SIG undefined FUN_140d17572(void)

longlong FUN_140d17572(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_140d175d4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_140d19392(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_140d175d4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140d17628 FUN_140d17628 body=174 status=ok
// SIG undefined FUN_140d17628(void)

void FUN_140d17628(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((int)param_1[3] == 1) {
    FUN_14403b4ea(param_1);
    return;
  }
  if (param_1[1] == param_2) {
    lVar1 = *(longlong *)(param_1[1] + 0x328);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x330) = 0;
  }
  else if (param_1[2] == param_2) {
    lVar1 = *(longlong *)(param_1[2] + 0x330);
    param_1[2] = lVar1;
    *(undefined8 *)(lVar1 + 0x328) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x330);
    *(longlong *)(*(longlong *)(param_2 + 0x328) + 0x330) = lVar1;
    *(undefined8 *)(lVar1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  }
  FUN_140d17bd8(param_2 + 8);
  FUN_1400020a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d176d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + -1);
  return;
}



// FUNCTION 140d176d6 FUN_140d176d6 body=708 status=ok
// SIG undefined FUN_140d176d6(void)

void FUN_140d176d6(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  uint local_6c;
  undefined8 *local_68;
  longlong *local_60;
  undefined1 local_55;
  uint local_54;
  uint *local_50;
  undefined8 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = param_2;
  if (((int)param_2 < 0x100) || (lVar4 = FUN_140d1799c(), lVar4 == 0)) goto LAB_140d17977;
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar5 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x418);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x420) + 0x7fffffffU & param_2) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x3d8);
      do {
        if (*(uint *)(lVar5 + (longlong)iVar8 * 0x60) == param_2) {
          if (*(int *)(param_1 + 0x430) != *(int *)(param_1 + 0x45c)) {
            lVar5 = param_1 + 0x460;
            if (*(longlong *)(param_1 + 0x468) != 0) {
              lVar5 = *(longlong *)(param_1 + 0x468);
            }
            iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x470) + 0x7fffffffU & param_2)
                                     * 4);
            if (iVar8 != -1) {
              goto LAB_140d177b9;
            }
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + lVar5 + 0x58);
      } while (iVar8 != -1);
    }
  }
  goto LAB_140d177d4;
  while (iVar8 = *(int *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x428) + 0x18),
        iVar8 != -1) {
LAB_140d177b9:
    if (*(uint *)(*(longlong *)(param_1 + 0x428) + (longlong)iVar8 * 0x20) == param_2)
    goto LAB_140d17977;
  }
LAB_140d177d4:
  local_55 = 0;
  local_54 = param_2;
  puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14b964128;
  *(uint *)(puVar6 + 3) = param_2;
  *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
  puVar6[4] = param_1;
  local_68 = puVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b9646c0;
  plVar7[2] = (longlong)puVar6;
  local_60 = plVar7;
  if (puVar6 != (undefined8 *)0x0) {
    if (plVar7 == (longlong *)0x0) {
      puVar6[1] = puVar6;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar6[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  local_50 = &local_54;
  local_48 = &local_68;
  FUN_145d1ba66(param_1 + 0x428,local_3c);
  plVar7 = (longlong *)FUN_140d1799c(param_1,local_54);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x70))(plVar7,local_68,&local_55);
    *(undefined1 *)((longlong)local_68 + 0x1c) = local_55;
  }
  uVar3 = local_55;
  plVar7 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_50 = &local_6c;
  FUN_145a0cccc((longlong *)(param_1 + 0x3d8),&local_68);
  local_78 = uVar3;
  FUN_140d19aa4(param_1,local_6c,lVar4,
                *(longlong *)(param_1 + 0x3d8) + (longlong)(int)local_68 * 0x60 + 8);
LAB_140d17977:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d1799c FUN_140d1799c body=303 status=ok
// SIG undefined FUN_140d1799c(void)

undefined8 FUN_140d1799c(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)((longlong)param_1 + 0x3d4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x7a);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d17aa0;
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar2 != (undefined8 *)0x0) &&
       ((*(int *)(puVar2 + 2) == *(int *)((longlong)param_1 + 0x3d4) &&
        ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar6 = (longlong *)*puVar2;
      }
      else {
        plVar6 = (longlong *)0x0;
      }
      lVar3 = (**(code **)(*plVar6 + 0x2b0))();
      if (lVar3 != 0) {
        lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        if (lVar4 != 0) {
          lVar4 = FUN_1400f6f32(lVar4);
          if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 != 0)) {
            FUN_140d173bc(lVar4,local_2c,param_2);
            if (-1 < local_2c[0]) {
              local_30 = FUN_140b9fef0(lVar4,local_2c,0);
              uVar5 = FUN_140d17acc(lVar3);
              goto LAB_140d17aa0;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_140d17aa0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d17acc FUN_140d17acc body=116 status=ok
// SIG undefined FUN_140d17acc(void)

undefined8 FUN_140d17acc(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar1 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x58,
            *(uint *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x58) != *param_2) {
        iVar2 = *(int *)(lVar1 + 0x50);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if (lVar1 == -8) {
        return 0;
      }
      return *(undefined8 *)(lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 140d17b40 FUN_140d17b40 body=152 status=ok
// SIG undefined FUN_140d17b40(void)

bool FUN_140d17b40(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_14001cc68(0x338,0x10);
  *puVar2 = *param_2;
  FUN_140d1861a(puVar2 + 2,param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x323);
  puVar2[200] = param_2[200];
  *(undefined4 *)((longlong)puVar2 + 0x323) = uVar1;
  *(undefined8 *)(puVar2 + 0xca) = 0;
  *(undefined8 *)(puVar2 + 0xcc) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar2;
    }
    else {
      *(undefined4 **)(param_1[2] + 0x328) = puVar2;
      *(longlong *)(puVar2 + 0xcc) = param_1[2];
    }
    param_1[2] = (longlong)puVar2;
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
  }
  return puVar2 != (undefined4 *)0x0;
}



// FUNCTION 140d17bd8 FUN_140d17bd8 body=374 status=ok
// SIG undefined FUN_140d17bd8(void)

void FUN_140d17bd8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x248);
  FUN_140368b56(param_1 + 0x150);
  if ((*(longlong *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0x148) != -1)) {
    *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x98) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_140115c12(param_1 + 0xa8,0);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d17d4e FUN_140d17d4e body=1405 status=ok
// SIG undefined FUN_140d17d4e(void)

uint FUN_140d17d4e(ulonglong param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [44];
  uint local_7c;
  code *local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined **local_58;
  uint *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = 0;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    bVar1 = *param_2;
    plVar5 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_3[9] - 1U & (uint)bVar1) * 4);
    if (iVar4 != -1) {
      lVar8 = *param_3;
      iVar9 = iVar4;
      do {
        if (*(byte *)(lVar8 + (longlong)iVar9 * 0x10) == bVar1) goto LAB_140d17dce;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + lVar8 + 8);
      } while (iVar9 != -1);
      uVar3 = 0;
    }
  }
  goto LAB_140d17de6;
  while (iVar4 = *(int *)(lVar7 + 8), iVar4 != -1) {
LAB_140d17dce:
    lVar7 = lVar8 + (longlong)iVar4 * 0x10;
    if (*(byte *)(lVar8 + (longlong)iVar4 * 0x10) == bVar1) goto LAB_140d17de3;
  }
  lVar7 = 0;
LAB_140d17de3:
  uVar3 = *(uint *)(lVar7 + 4);
LAB_140d17de6:
  FUN_1407e8892();
  if (*param_2 == 0x15) {
    uVar3 = *(uint *)(param_2 + 0x2f0);
    uVar10 = uVar3 >> 0xd ^ -uVar3;
    uVar11 = uVar10 << 8 ^ (-0x61c88647 - uVar3) - uVar10;
    uVar12 = uVar11 >> 0xd ^ (uVar3 - uVar10) - uVar11;
    uVar3 = uVar12 >> 0xc ^ (uVar10 - uVar11) - uVar12;
    uVar13 = uVar3 << 0x10 ^ (uVar11 - uVar12) - uVar3;
    uVar10 = uVar13 >> 5 ^ (uVar12 - uVar3) - uVar13;
    uVar11 = uVar10 >> 3 ^ (uVar3 - uVar13) - uVar10;
    uVar3 = uVar11 << 10 ^ (uVar13 - uVar10) - uVar11;
    uVar3 = uVar3 >> 0xf ^ uVar10 - (uVar11 + uVar3);
  }
  else {
    uVar10 = 0;
    if (*param_2 != 3) goto LAB_140d182a5;
    uVar3 = (uint)(uVar3 < *(uint *)(param_2 + 0xc0));
    uVar10 = uVar3 * -0x100 ^ 0x9e3779b9;
    uVar11 = uVar10 >> 0xd ^ uVar3 * 2 - uVar10;
    uVar3 = uVar11 >> 0xc ^ (-uVar10 - uVar3) - uVar11;
    uVar10 = uVar3 << 0x10 ^ (uVar10 - uVar11) - uVar3;
    uVar11 = uVar10 >> 5 ^ (uVar11 - uVar3) - uVar10;
    uVar12 = uVar11 >> 3 ^ (uVar3 - uVar10) - uVar11;
    uVar3 = uVar12 << 10 ^ (uVar10 - uVar11) - uVar12;
    uVar3 = uVar3 >> 0xf ^ uVar11 - (uVar12 + uVar3);
    iVar4 = uVar3 - param_2[0xb8];
    uVar3 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar3;
    uVar11 = uVar3 >> 0xd ^ ((uint)param_2[0xb8] - iVar4) - uVar3;
    uVar10 = uVar11 >> 0xc ^ (iVar4 - uVar3) - uVar11;
    uVar3 = uVar10 << 0x10 ^ (uVar3 - uVar11) - uVar10;
    uVar12 = uVar3 >> 5 ^ (uVar11 - uVar10) - uVar3;
    uVar11 = uVar12 >> 3 ^ (uVar10 - uVar3) - uVar12;
    uVar10 = uVar11 << 10 ^ (uVar3 - uVar12) - uVar11;
    uVar2 = *(undefined8 *)(param_2 + 0x104);
    uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar13 = (uint)uVar2 & 0xffff;
    uVar3 = ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4);
    uVar10 = uVar3 >> 0xd ^ (uVar10 >> 0xf ^ uVar12 - (uVar11 + uVar10)) - uVar3;
    uVar11 = uVar10 << 8 ^ (-0x61c88647 - uVar3) - uVar10;
    uVar3 = uVar11 >> 0xd ^ (uVar3 - uVar10) - uVar11;
    uVar10 = uVar3 >> 0xc ^ (uVar10 - uVar11) - uVar3;
    uVar12 = uVar10 << 0x10 ^ (uVar11 - uVar3) - uVar10;
    uVar11 = uVar12 >> 5 ^ (uVar3 - uVar10) - uVar12;
    uVar3 = uVar11 >> 3 ^ (uVar10 - uVar12) - uVar11;
    uVar10 = uVar3 << 10 ^ (uVar12 - uVar11) - uVar3;
    local_7c = uVar10 >> 0xf ^ uVar11 - (uVar3 + uVar10);
    local_50 = &local_7c;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b964460;
    local_78 = FUN_1440ea63e;
    FUN_140cf3304(param_2 + 0x58,&local_78);
    uVar3 = local_7c;
    if (local_78 != (code *)0x0) {
      pppuVar6 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar6 = &local_58;
      }
      (*(code *)(*pppuVar6)[2])();
      uVar3 = local_7c;
    }
  }
  uVar10 = 0;
  if (uVar3 != 0) {
    iVar4 = (int)param_1;
    uVar3 = (uint)(param_1 >> 0xd) & 0x7ffff ^ uVar3 - iVar4;
    uVar10 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - iVar4;
    uVar11 = uVar10 >> 0xd ^ (iVar4 - uVar3) - uVar10;
    uVar3 = uVar11 >> 0xc ^ (uVar3 - uVar10) - uVar11;
    uVar12 = uVar3 << 0x10 ^ (uVar10 - uVar11) - uVar3;
    uVar10 = uVar12 >> 5 ^ (uVar11 - uVar3) - uVar12;
    uVar11 = uVar10 >> 3 ^ (uVar3 - uVar12) - uVar10;
    uVar3 = uVar11 << 10 ^ (uVar12 - uVar10) - uVar11;
    uVar3 = uVar3 >> 0xf ^ uVar10 - (uVar11 + uVar3);
    iVar4 = uVar3 - *param_2;
    uVar10 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar3;
    uVar3 = uVar10 >> 0xd ^ ((uint)*param_2 - iVar4) - uVar10;
    uVar11 = uVar3 >> 0xc ^ (iVar4 - uVar10) - uVar3;
    uVar10 = uVar11 << 0x10 ^ (uVar10 - uVar3) - uVar11;
    uVar12 = uVar10 >> 5 ^ (uVar3 - uVar11) - uVar10;
    uVar3 = uVar12 >> 3 ^ (uVar11 - uVar10) - uVar12;
    uVar10 = uVar3 << 10 ^ (uVar10 - uVar12) - uVar3;
    local_7c = uVar10 >> 0xf ^ uVar12 - (uVar3 + uVar10);
    local_78 = (code *)0x0;
    uStack_70 = 0;
    FUN_1449f3ff4(param_2 + 0x98);
    if ((longlong)(int)uStack_70 != 0) {
      lVar8 = 0;
      do {
        uVar2 = *(undefined8 *)(local_78 + lVar8);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar10 = (uint)uVar2 & 0xffff;
        uVar10 = ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4);
        uVar11 = uVar10 >> 0xd ^ local_7c - uVar10;
        uVar3 = uVar11 << 8 ^ (-0x61c88647 - uVar10) - uVar11;
        uVar12 = uVar3 >> 0xd ^ (uVar10 - uVar11) - uVar3;
        uVar10 = uVar12 >> 0xc ^ (uVar11 - uVar3) - uVar12;
        uVar11 = uVar10 << 0x10 ^ (uVar3 - uVar12) - uVar10;
        uVar3 = uVar11 >> 5 ^ (uVar12 - uVar10) - uVar11;
        uVar12 = uVar3 >> 3 ^ (uVar10 - uVar11) - uVar3;
        uVar10 = uVar12 << 10 ^ (uVar11 - uVar3) - uVar12;
        local_7c = uVar10 >> 0xf ^ uVar3 - (uVar12 + uVar10);
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)uStack_70 * 8 != lVar8);
    }
    uVar10 = local_7c;
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
      uVar10 = local_7c;
    }
  }
LAB_140d182a5:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 140d182cc FUN_140d182cc body=234 status=ok
// SIG undefined FUN_140d182cc(void)

uint FUN_140d182cc(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  char local_68 [4];
  longlong local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca650;
  local_50 = DAT_14cbca658;
  FUN_144928d62(local_38,1);
  lVar2 = FUN_140149a73(param_1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar2,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x03') {
    bVar3 = local_64 == 0;
  }
  else {
    uVar1 = local_5c;
    if (local_68[0] == '\x02') goto LAB_140d18373;
    if (local_68[0] != '\x01') {
      uVar1 = 0;
      goto LAB_140d18373;
    }
    bVar3 = local_5c == 0;
  }
  uVar1 = (uint)!bVar3;
LAB_140d18373:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140d183b8 FUN_140d183b8 body=142 status=ok
// SIG undefined FUN_140d183b8(void)

void FUN_140d183b8(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_140d18a84(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_140d18422;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_140d18422:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140d18446 FUN_140d18446 body=279 status=ok
// SIG undefined FUN_140d18446(void)

ulonglong FUN_140d18446(longlong param_1,uint param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((param_3 != 0) && (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c))) {
    lVar2 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x418);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar5 * 0x60,
            *(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar5 * 0x60) != param_2) {
        iVar5 = *(int *)(lVar2 + 0x58);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if ((longlong *)(lVar2 + 8) == (longlong *)0x0 || lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
        uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar4 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x48);
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & (uVar3 >> 0x10 ^ uVar3))
                                 * 4);
        if (iVar5 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar5 * 0x18);
            if (*puVar1 == param_3) {
              if (puVar1 == (ulonglong *)0x0) {
                return 0;
              }
              return puVar1[1];
            }
            iVar5 = (int)puVar1[2];
          } while (iVar5 != -1);
          return 0;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140d1855e FUN_140d1855e body=187 status=ok
// SIG undefined FUN_140d1855e(void)

void FUN_140d1855e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140d18601;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d18601:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d1861a FUN_140d1861a body=727 status=ok
// SIG undefined FUN_140d1861a(void)

undefined8 * FUN_140d1861a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1447a97f4(param_1 + 2,param_2 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1403de7ba(param_1 + 7,param_2 + 7);
  param_1[0x11] = 0;
  puVar24 = param_2 + 0xb;
  if ((undefined8 *)param_2[0x11] != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)param_2[0x11];
  }
  FUN_1400709d4(param_1 + 0xb,puVar24,*(undefined4 *)(param_2 + 0x12),0);
  param_1[0x13] = &DAT_14a171d50;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = param_2[0x14];
  FUN_1406022fe(param_1 + 0x15,param_2 + 0x15);
  param_1[0x13] = &PTR_FUN_14b0394b0;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  _Src = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],_Src,(longlong)iVar1 << 3);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_1403de7ba(param_1 + 0x1c,param_2 + 0x1c);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x21);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x22);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x114);
  uVar7 = *(undefined4 *)(param_2 + 0x23);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x11c);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x124);
  uVar11 = *(undefined4 *)(param_2 + 0x25);
  uVar12 = *(undefined4 *)((longlong)param_2 + 300);
  uVar13 = *(undefined4 *)((longlong)param_2 + 300);
  uVar14 = *(undefined4 *)(param_2 + 0x26);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x134);
  uVar16 = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
  *(undefined4 *)(param_1 + 0x21) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar4;
  *(undefined4 *)(param_1 + 0x22) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar6;
  *(undefined4 *)(param_1 + 0x23) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar10;
  *(undefined4 *)(param_1 + 0x25) = uVar11;
  *(undefined4 *)((longlong)param_1 + 300) = uVar12;
  *(undefined4 *)((longlong)param_1 + 300) = uVar13;
  *(undefined4 *)(param_1 + 0x26) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar15;
  *(undefined4 *)(param_1 + 0x27) = uVar16;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  param_1[0x28] = 0;
  param_1[0x28] = param_2[0x28];
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  FUN_1406fd608(param_1 + 0x2a,param_2 + 0x2a);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x22c);
  uVar3 = *(undefined4 *)(param_2 + 0x46);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x234);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x231);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x235);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x239);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x23d);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar2;
  *(undefined4 *)(param_1 + 0x46) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x234) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x231) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x235) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x239) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x23d) = uVar8;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  FUN_140d188f2(param_1 + 0x49,param_2 + 0x49);
  param_1[0x53] = param_2[0x53];
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_2 + 0x55);
  param_1[0x54] = param_2[0x54];
  FUN_1447715ec(param_1 + 0x56,param_2 + 0x56);
  uVar17 = param_2[0x5c];
  uVar18 = param_2[0x5d];
  uVar19 = param_2[0x5e];
  uVar20 = param_2[0x5f];
  uVar21 = param_2[0x60];
  uVar22 = *(undefined8 *)((longlong)param_2 + 0x301);
  uVar23 = *(undefined8 *)((longlong)param_2 + 0x309);
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = uVar17;
  param_1[0x5d] = uVar18;
  param_1[0x5e] = uVar19;
  param_1[0x5f] = uVar20;
  param_1[0x60] = uVar21;
  *(undefined8 *)((longlong)param_1 + 0x301) = uVar22;
  *(undefined8 *)((longlong)param_1 + 0x309) = uVar23;
  return param_1;
}



// FUNCTION 140d188f2 FUN_140d188f2 body=154 status=ok
// SIG undefined FUN_140d188f2(void)

longlong FUN_140d188f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140d1891e;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140d1891e:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140d1898c(param_1,param_2);
  return param_1;
}



// FUNCTION 140d1898c FUN_140d1898c body=248 status=ok
// SIG undefined FUN_140d1898c(void)

undefined8 * FUN_140d1898c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14064e812(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 140d18a84 FUN_140d18a84 body=114 status=ok
// SIG undefined FUN_140d18a84(void)

void FUN_140d18a84(longlong *param_1,int param_2)

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



// FUNCTION 140d18af6 FUN_140d18af6 body=2202 status=ok
// SIG undefined FUN_140d18af6(void)

void FUN_140d18af6(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,char param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_3d8 [32];
  undefined1 *local_3b8;
  uint *local_3b0;
  undefined8 local_3a8;
  undefined1 local_3a0 [24];
  longlong local_388;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if ((param_3 == (longlong *)0x0 || param_2 == 0) || (*(longlong *)(param_2 + 0x398) == 0))
  goto LAB_140d18ec9;
  lVar3 = FUN_140082f10();
  lVar16 = *(longlong *)(param_2 + 0x398);
  if (((lVar16 == 0) ||
      (((lVar3 == 0 || (lVar15 = *(longlong *)(lVar16 + 0x10), lVar15 == 0)) ||
       (*(int *)(lVar15 + 0x38) < *(int *)(lVar3 + 0x38))))) ||
     (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_140d18ec9;
  uVar13 = *(uint *)(lVar16 + 0x394);
  local_378[0] = 0;
  local_374 = 0xbf800000;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  lVar16 = *param_3;
  if (lVar16 == 0) {
    local_378[0] = 0;
    local_150 = param_4 << 0x20;
    local_3a8 = 0;
  }
  else {
    local_378[0] = *(undefined1 *)(lVar16 + 0x160);
    local_150 = param_4 << 0x20;
    puVar11 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar16 + 8) != (undefined4 *)0x0) {
      puVar11 = *(undefined4 **)(lVar16 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar16 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar16);
      DAT_14c947fe0 = lVar16;
    }
    FUN_140045924(DAT_14c947fe0,&local_3a8,puVar11,1);
  }
  FUN_1446dcdd4(local_3a0,&local_3a8);
  FUN_1404e49fa(&local_368,local_3a0);
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar16 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x418);
    }
    iVar7 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & uVar13) * 4);
    if (iVar7 != -1) {
      lVar16 = *(longlong *)(param_1 + 0x3d8);
      iVar6 = iVar7;
      do {
        iVar20 = iVar7;
        if (*(uint *)(lVar16 + (longlong)iVar6 * 0x60) == uVar13) goto LAB_140d18f01;
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + lVar16 + 0x58);
      } while (iVar6 != -1);
    }
  }
  if (param_5 != '\0') {
    FUN_140896820(param_1,uVar13,local_378);
  }
  goto LAB_140d18ebf;
  while (iVar20 = *(int *)(lVar3 + 0x58), *(int *)(lVar3 + 0x58) != -1) {
LAB_140d18f01:
    lVar3 = lVar16 + (longlong)iVar20 * 0x60;
    if (*(uint *)(lVar16 + (longlong)iVar20 * 0x60) == uVar13) goto LAB_140d18f20;
  }
  lVar3 = 0;
LAB_140d18f20:
  if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
    uVar14 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar14 = uVar14 >> 0x10 ^ uVar14;
    lVar15 = lVar3 + 0x40;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      lVar15 = *(longlong *)(lVar3 + 0x48);
    }
    iVar6 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar14) * 4);
    if (iVar6 != -1) {
      do {
        iVar20 = iVar7;
        if (*(longlong **)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x18) == param_3)
        goto LAB_140d18fb3;
        iVar6 = *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_140d18ebf;
  while (iVar6 = *(int *)(puVar5 + 2), iVar6 != -1) {
LAB_140d19263:
    puVar5 = (undefined8 *)(lVar16 + (longlong)iVar6 * 0x18);
    if ((longlong *)*puVar5 == param_3) goto LAB_140d1927f;
  }
  puVar5 = (undefined8 *)0x0;
LAB_140d1927f:
  local_3b8 = local_378;
  FUN_140d1c8e8(param_1,*puVar12,param_3,puVar5[1]);
  iVar2 = *(int *)(param_1 + 0x400);
  puVar17 = local_3b0;
LAB_140d192a5:
  uVar13 = uVar13 & ~(uint)uVar19;
  puVar4 = *(uint **)(param_1 + 0x3f8);
  if (*(uint **)(param_1 + 0x3f8) == (uint *)0x0) {
    puVar4 = puVar17;
  }
  iVar6 = (int)uVar18;
  lVar16 = (longlong)iVar6;
  uVar8 = puVar4[lVar16] & uVar13;
  if (uVar8 == 0) {
    iVar9 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar9 = iVar2 + -1;
    }
    iVar9 = iVar9 >> 5;
    iVar20 = iVar20 + 0x20;
    iVar10 = iVar9;
    if (iVar9 < iVar6) {
      iVar10 = iVar6;
    }
    if (iVar6 < iVar9) {
      lVar3 = 0;
      do {
        uVar8 = puVar4[lVar16 + lVar3 + 1];
        if (uVar8 != 0) {
          uVar18 = (ulonglong)(iVar6 + (int)lVar3 + 1);
          uVar13 = 0xffffffff;
          goto LAB_140d1931b;
        }
        iVar20 = iVar20 + 0x20;
        lVar3 = lVar3 + 1;
      } while (iVar10 - lVar16 != lVar3);
      uVar13 = 0xffffffff;
      iVar6 = iVar10;
    }
    uVar18 = (ulonglong)(iVar6 + 1);
    puVar17 = local_3b0;
    iVar6 = iVar2;
  }
  else {
LAB_140d1931b:
    uVar19 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 == iVar7) goto LAB_140d18ebf;
  goto LAB_140d191f7;
  while (iVar20 = *(int *)(lVar3 + 0x58), *(int *)(lVar3 + 0x58) != -1) {
LAB_140d18fb3:
    lVar3 = lVar16 + (longlong)iVar20 * 0x60;
    if (*(uint *)(lVar16 + (longlong)iVar20 * 0x60) == uVar13) goto LAB_140d18fd2;
  }
  lVar3 = 0;
LAB_140d18fd2:
  if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
    lVar15 = lVar3 + 0x40;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      lVar15 = *(longlong *)(lVar3 + 0x48);
    }
    iVar6 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar14) * 4);
    if (iVar6 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x18);
        if ((longlong *)*puVar5 == param_3) goto LAB_140d1901f;
        iVar6 = *(int *)(puVar5 + 2);
      } while (iVar6 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_140d1901f:
  iVar6 = iVar7;
  if (*(char *)(puVar5[1] + 0x28) == '\x01') {
    do {
      lVar3 = lVar16 + (longlong)iVar6 * 0x60;
      if (*(uint *)(lVar16 + (longlong)iVar6 * 0x60) == uVar13) goto LAB_140d1904e;
      iVar6 = *(int *)(lVar3 + 0x58);
    } while (*(int *)(lVar3 + 0x58) != -1);
    lVar3 = 0;
LAB_140d1904e:
    if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
      lVar15 = lVar3 + 0x40;
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        lVar15 = *(longlong *)(lVar3 + 0x48);
      }
      iVar6 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar14) * 4);
      if (iVar6 != -1) {
        do {
          puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x18);
          if ((longlong *)*puVar5 == param_3) goto LAB_140d1909b;
          iVar6 = *(int *)(puVar5 + 2);
        } while (iVar6 != -1);
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_140d1909b:
    if (*(char *)(puVar5[1] + 0x11) == '\0') {
      if ((*param_3 == 0) || (*(char *)(*param_3 + 0x11b) != '\x01')) {
        do {
          lVar3 = lVar16 + (longlong)iVar7 * 0x60;
          if (*(uint *)(lVar16 + (longlong)iVar7 * 0x60) == uVar13) goto LAB_140d19170;
          iVar7 = *(int *)(lVar3 + 0x58);
        } while (iVar7 != -1);
        lVar3 = 0;
LAB_140d19170:
        if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
          lVar16 = lVar3 + 0x40;
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            lVar16 = *(longlong *)(lVar3 + 0x48);
          }
          iVar7 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar14) * 4);
          if (iVar7 != -1) {
            do {
              puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)iVar7 * 0x18);
              if ((longlong *)*puVar5 == param_3) goto LAB_140d191b3;
              iVar7 = *(int *)(puVar5 + 2);
            } while (iVar7 != -1);
          }
        }
        puVar5 = (undefined8 *)0x0;
LAB_140d191b3:
        local_3b8 = local_378;
        FUN_140d1c8e8(param_1,uVar13,param_3,puVar5[1]);
      }
      else {
        puVar17 = (uint *)(param_1 + 1000);
        iVar7 = *(int *)(param_1 + 0x400);
        if (iVar7 == 0) {
          uVar19 = 1;
          uVar18 = 0;
          iVar20 = 0;
          iVar6 = 0;
        }
        else {
          puVar4 = *(uint **)(param_1 + 0x3f8);
          if (*(uint **)(param_1 + 0x3f8) == (uint *)0x0) {
            puVar4 = puVar17;
          }
          uVar13 = *puVar4;
          if (uVar13 == 0) {
            iVar6 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar6 = iVar7 + -1;
            }
            uVar18 = 0;
            uVar19 = (ulonglong)(uint)(iVar6 >> 5);
            if (iVar6 >> 5 < 1) {
              uVar19 = uVar18;
            }
            iVar20 = 0;
            do {
              if (uVar19 == uVar18) goto LAB_140d18ebf;
              iVar20 = iVar20 + 0x20;
              uVar13 = puVar4[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar13 == 0);
          }
          else {
            uVar18 = 0;
            iVar20 = 0;
          }
          uVar19 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar6 = (iVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar6) {
            iVar6 = iVar7;
          }
        }
        if (iVar6 != iVar7) {
          uVar13 = 0xffffffff;
          iVar2 = iVar7;
          local_3b0 = puVar17;
LAB_140d191f7:
          lVar16 = *(longlong *)(param_1 + 0x3d8);
          lVar3 = (longlong)iVar6 * 0x60;
          if (*(int *)(lVar16 + 0x10 + lVar3) != *(int *)(lVar16 + 0x3c + lVar3)) {
            puVar12 = (undefined4 *)(lVar16 + lVar3);
            puVar11 = puVar12 + 0x10;
            if (*(undefined4 **)(puVar12 + 0x12) != (undefined4 *)0x0) {
              puVar11 = *(undefined4 **)(puVar12 + 0x12);
            }
            iVar6 = puVar11[puVar12[0x14] - 1 & uVar14];
            if (iVar6 != -1) {
              lVar16 = *(longlong *)(puVar12 + 2);
              iVar9 = iVar6;
              do {
                if (*(longlong **)(lVar16 + (longlong)iVar9 * 0x18) == param_3) goto LAB_140d19263;
                iVar9 = *(int *)(lVar16 + (longlong)iVar9 * 0x18 + 0x10);
              } while (iVar9 != -1);
            }
          }
          goto LAB_140d192a5;
        }
      }
    }
  }
LAB_140d18ebf:
  FUN_140d17bd8(local_378);
LAB_140d18ec9:
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d19392 FUN_140d19392 body=276 status=ok
// SIG undefined FUN_140d19392(void)

undefined4 * FUN_140d19392(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d1954c(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_140d194a8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140d1c630(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d194a8 FUN_140d194a8 body=163 status=ok
// SIG undefined FUN_140d194a8(void)

undefined8 FUN_140d194a8(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148cffd90(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140d1954c FUN_140d1954c body=485 status=ok
// SIG undefined FUN_140d1954c(void)

int * FUN_140d1954c(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140d19732 FUN_140d19732 body=696 status=ok
// SIG undefined FUN_140d19732(void)

int * FUN_140d19732(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar7 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140d19915;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar10 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_140d19915:
          iVar3 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140d199ea FUN_140d199ea body=129 status=ok
// SIG undefined FUN_140d199ea(void)

longlong FUN_140d199ea(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_144837462(DAT_14cb84a00,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d19a6c FUN_140d19a6c body=55 status=ok
// SIG undefined FUN_140d19a6c(void)

undefined8 FUN_140d19a6c(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_1441cfb9a();
    if (lVar1 != 0) {
      uVar2 = FUN_14435d2b4(lVar1,param_1);
      return uVar2;
    }
  }
  return param_1;
}



// FUNCTION 140d19aa4 FUN_140d19aa4 body=10532 status=ok
// SIG undefined FUN_140d19aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d19aa4(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  void *_Dst;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulonglong *puVar23;
  undefined8 uVar24;
  longlong *plVar25;
  byte bVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong *plVar41;
  longlong *plVar42;
  uint *puVar43;
  bool bVar44;
  undefined4 uVar45;
  undefined1 auStack_508 [32];
  uint *local_4e8;
  undefined8 *local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  wchar_t *local_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined8 *local_4b0;
  undefined1 *local_4a8;
  code *local_4a0;
  uint *local_490;
  longlong *local_488;
  longlong *local_480;
  longlong *local_478;
  uint *local_470;
  uint *local_468;
  longlong *local_460;
  longlong *local_458;
  uint *local_450;
  longlong *local_448;
  longlong *local_440;
  longlong *local_438;
  uint local_42c;
  longlong *local_428;
  longlong local_420;
  longlong local_418;
  longlong *local_410;
  longlong *local_408;
  longlong *local_400;
  uint *local_3f8;
  ulonglong local_3f0;
  uint local_3e4;
  undefined8 local_3e0;
  uint local_3d8;
  undefined4 uStack_3d4;
  uint local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 local_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined8 local_360;
  ulonglong local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined **local_348;
  undefined *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2e0;
  undefined8 local_2dc;
  undefined8 uStack_2d4;
  undefined8 local_2cc;
  undefined8 uStack_2c4;
  undefined8 local_2bc;
  undefined8 uStack_2b4;
  undefined8 local_2ac;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_508;
  local_438 = param_3;
  local_3e4 = param_2;
  local_418 = FUN_1407e8892();
  plVar42 = param_1 + 0x8f;
  local_478 = param_4;
  if ((int)param_1[0x90] != *(int *)((longlong)param_1 + 0x4ac)) {
    plVar25 = param_1 + 0x96;
    if ((longlong *)param_1[0x97] != (longlong *)0x0) {
      plVar25 = (longlong *)param_1[0x97];
    }
    iVar15 = *(int *)((longlong)plVar25 + (ulonglong)((int)param_1[0x98] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        lVar17 = *plVar42 + (longlong)iVar15 * 0x10;
        if (*(uint *)(*plVar42 + (longlong)iVar15 * 0x10) == param_2) {
          if (lVar17 != 0) goto LAB_140d19bb7;
          break;
        }
        iVar15 = *(int *)(lVar17 + 8);
      } while (iVar15 != -1);
    }
  }
  local_3e0 = &local_3e4;
  local_4e8 = (uint *)0x0;
  FUN_1407932ac(plVar42,&local_c8,param_2);
  lVar17 = *plVar42 +
           (longlong)CONCAT22(local_c8._2_2_,CONCAT11(local_c8._1_1_,(undefined1)local_c8)) * 0x10;
LAB_140d19bb7:
  puVar43 = (uint *)(lVar17 + 4);
  uVar31 = *puVar43;
  uVar29 = (ulonglong)uVar31;
  iVar15 = *(int *)(local_418 + 0x11c);
  if (iVar15 < 1) {
    uVar31 = iVar15 + uVar31;
  }
  else {
    local_488 = param_1;
    local_408 = plVar42;
    if ((int)uVar31 < 0) {
LAB_140d1ba86:
      FUN_14573a2c8(local_408,local_3e4);
      uVar31 = local_3e4;
      FUN_140d2b374(param_1,local_3e4);
      FUN_140d7114c(param_1,uVar31);
      FUN_1456d1bf6(param_1,uVar31);
      local_470 = (uint *)CONCAT44(local_470._4_4_,uVar31);
      FUN_145dc6940(param_1,uVar31);
      plVar42 = local_488;
      local_490 = (uint *)(param_1 + 0x2c);
      uVar31 = *(uint *)(param_1 + 0x2f);
      if (uVar31 == 0) {
        uVar35 = 1;
        uVar29 = 0;
        iVar15 = 0;
        uVar32 = 0;
      }
      else {
        puVar43 = (uint *)param_1[0x2e];
        if ((uint *)param_1[0x2e] == (uint *)0x0) {
          puVar43 = local_490;
        }
        uVar32 = *puVar43;
        if (uVar32 == 0) {
          iVar15 = uVar31 + 0x1e;
          if (-1 < (int)(uVar31 - 1)) {
            iVar15 = uVar31 - 1;
          }
          uVar29 = 0;
          uVar34 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar34 = uVar29;
          }
          iVar15 = 0;
          do {
            if (uVar34 == uVar29) goto LAB_140d1bb71;
            iVar15 = iVar15 + 0x20;
            uVar32 = puVar43[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar32 == 0);
        }
        else {
          uVar29 = 0;
          iVar15 = 0;
        }
        uVar35 = (ulonglong)(-uVar32 & uVar32);
        uVar34 = uVar35 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar32 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar31 <= (int)uVar32) {
          uVar32 = uVar31;
        }
      }
      if (uVar32 != uVar31) {
        local_468 = (uint *)CONCAT44(local_468._4_4_,0xffffffff);
        local_450 = (uint *)(ulonglong)uVar31;
        do {
          lVar17 = plVar42[0x2a];
          local_3e0._0_4_ = (uint)local_3e0 & 0xffffff00;
          local_3e0._4_4_ = 0xbf800000;
          local_3d8 = local_3d8 & 0xffffff00;
          uStack_3c0 = 0;
          local_3d0 = 0;
          uStack_3cc = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          local_358 = 0;
          local_350 = 0;
          local_398 = 0;
          uStack_390 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          uStack_3b8 = 0;
          uStack_3b4 = 0;
          uStack_3b0 = 0;
          local_34c = 2;
          FUN_1405c5fa2();
          local_340 = &DAT_14cb769e8;
          local_338 = 0;
          uStack_330 = 0;
          local_348 = &PTR_FUN_14b0394b0;
          local_318 = 0;
          local_328 = 0;
          uStack_320 = 0;
          local_2e0 = 0;
          local_2f0 = 0;
          uStack_2e8 = 0;
          local_300 = 0;
          uStack_2f8 = 0;
          local_310 = 0;
          uStack_308 = 0;
          local_2ac = 0;
          local_2bc = 0;
          uStack_2b4 = 0;
          local_2cc = 0;
          uStack_2c4 = 0;
          local_2dc = 0;
          uStack_2d4 = 0;
          local_2a0 = FUN_140938dea();
          local_298 = 0xffffffff;
          local_230 = 0;
          local_228 = 0;
          local_290 = 0;
          uStack_288 = 0;
          local_280 = 0;
          uStack_278 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_260 = 0;
          uStack_258 = 0;
          local_250 = 0;
          uStack_248 = 0;
          local_224 = 0xffffffff00000080;
          local_21c = 0;
          local_210 = 0;
          local_208 = 0;
          local_1e0 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_200 = 0;
          uStack_1f8 = 0;
          local_1d8 = 0xf;
          local_1d0 = 1;
          local_1cc = 0;
          uStack_1c4 = 0;
          local_1b8 = 0x100000000;
          local_1b0 = 1;
          local_1a8 = 0;
          local_1a4 = 0;
          local_1a0 = 0;
          local_178 = 0;
          local_170 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_16c = 0xffffffff00000080;
          local_164 = 0;
          local_158 = 0;
          local_150 = 0;
          local_13c = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 0;
          local_148 = 0;
          local_140 = 0;
          local_d8 = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_d4 = 1;
          local_d0 = 0;
          local_3e0._0_4_ = CONCAT31(local_3e0._1_3_,0x19);
          uVar24 = *(undefined8 *)(lVar17 + (longlong)(int)uVar32 * 0x10);
          uStack_ec = (undefined4)uVar24;
          uStack_e8 = (undefined4)((ulonglong)uVar24 >> 0x20);
          FUN_140896820(plVar42,(ulonglong)local_470 & 0xffffffff,&local_3e0);
          FUN_140d17bd8(&local_3e0);
          uVar31 = ~(uint)uVar35 & (uint)local_468;
          puVar43 = (uint *)plVar42[0x2e];
          if ((uint *)plVar42[0x2e] == (uint *)0x0) {
            puVar43 = local_490;
          }
          uVar28 = *(uint *)(plVar42 + 0x2f);
          iVar36 = (int)uVar29;
          lVar17 = (longlong)iVar36;
          uVar32 = puVar43[lVar17] & uVar31;
          if (uVar32 == 0) {
            iVar13 = uVar28 + 0x1e;
            if (-1 < (int)(uVar28 - 1)) {
              iVar13 = uVar28 - 1;
            }
            iVar13 = iVar13 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar27 = iVar13;
            if (iVar13 < iVar36) {
              iVar27 = iVar36;
            }
            if (iVar36 < iVar13) {
              lVar39 = 0;
              do {
                uVar32 = puVar43[lVar17 + lVar39 + 1];
                if (uVar32 != 0) {
                  uVar29 = (ulonglong)(iVar36 + (int)lVar39 + 1);
                  uVar31 = 0xffffffff;
                  goto LAB_140d1c068;
                }
                iVar15 = iVar15 + 0x20;
                lVar39 = lVar39 + 1;
              } while (iVar27 - lVar17 != lVar39);
              uVar31 = 0xffffffff;
              iVar36 = iVar27;
            }
            uVar29 = (ulonglong)(iVar36 + 1);
            uVar32 = uVar28;
          }
          else {
LAB_140d1c068:
            uVar35 = (ulonglong)(-uVar32 & uVar32);
            uVar34 = uVar35 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar32 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar28 <= (int)uVar32) {
              uVar32 = uVar28;
            }
          }
          local_468 = (uint *)CONCAT44(local_468._4_4_,uVar31);
        } while (uVar32 != (uint)local_450);
      }
LAB_140d1bb71:
      plVar42 = local_488;
      if (local_488[0xe8] == 0) {
        local_3e0._0_4_ = 0x48cfd352;
        local_3e0._4_4_ = 1;
        local_3d8 = 0;
        FUN_145db22c6(&local_c8,local_488);
        plVar42[0xe8] =
             CONCAT44(local_c8._4_4_,
                      CONCAT22(local_c8._2_2_,CONCAT11(local_c8._1_1_,(undefined1)local_c8)));
      }
      uVar24 = (**(code **)(*plVar42 + 0x180))(plVar42);
      plVar25 = (longlong *)FUN_140d172b5(uVar24,(ulonglong)local_470 & 0xffffffff);
      if (plVar25 == (longlong *)0x0) {
LAB_140d1bd37:
        plVar25 = (longlong *)0x0;
      }
      else {
        if (DAT_14cbadd90 == 0) {
          local_4b0 = &local_3e0;
          local_3e0._0_4_ = 0x41030f22;
          local_3e0._4_4_ = 1;
          local_4a0 = FUN_14081d0ea;
          local_4a8 = &LAB_1459f2e4c;
          local_4b8 = &LAB_148c39de3;
          local_4c0 = &LAB_1457a9eb2;
          local_4c8 = L"Game";
          local_4d0 = 0;
          local_4d8 = 0x10000004;
          local_4e0 = (undefined8 *)CONCAT44(local_4e0._4_4_,0x10);
          local_4e8 = (uint *)CONCAT44(local_4e8._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(plVar25[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar25[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
            DAT_14cbadd90 + 0x30)) goto LAB_140d1bd37;
        if (((char)plVar42[0x12] == '\0') && ((char)plVar25[0x2f] == '\x03')) {
          cVar12 = (**(code **)(*plVar25 + 0x6c8))(plVar25);
          if (cVar12 != '\0') {
            *(undefined1 *)(plVar42 + 0x12) = 1;
            iVar15 = *(int *)((longlong)plVar42 + 0x44);
            *(int *)((longlong)plVar42 + 0x44) = iVar15 + 1;
            uVar29 = (ulonglong)(int)plVar42[7];
            if ((longlong)uVar29 < 1) {
              *(int *)((longlong)plVar42 + 0x44) = iVar15;
            }
            else {
              plVar41 = plVar42 + 6;
              bVar44 = false;
              do {
                lVar17 = uVar29 * 0x10 + -8;
                uVar34 = uVar29;
                while ((*(int *)(*plVar41 + lVar17) != 0 &&
                       (plVar30 = *(longlong **)(*plVar41 + -8 + lVar17), plVar30 != (longlong *)0x0
                       ))) {
                  cVar12 = (**(code **)(*plVar30 + 0x60))();
                  if (cVar12 == '\0') break;
                  lVar17 = lVar17 + -0x10;
                  bVar7 = uVar34 < 2;
                  uVar34 = uVar34 - 1;
                  if (bVar7) {
                    iVar15 = *(int *)((longlong)plVar42 + 0x44) + -1;
                    *(int *)((longlong)plVar42 + 0x44) = iVar15;
                    if (!bVar44) goto LAB_140d1c0e4;
                    goto LAB_140d1bcce;
                  }
                }
                uVar29 = uVar34 - 1;
                bVar44 = true;
              } while (1 < uVar34);
              iVar15 = *(int *)((longlong)plVar42 + 0x44) + -1;
              *(int *)((longlong)plVar42 + 0x44) = iVar15;
LAB_140d1bcce:
              if (iVar15 < 1) {
                iVar15 = (int)plVar42[7];
                iVar36 = iVar15;
                if (0 < iVar15) {
                  iVar13 = 0;
                  do {
                    if ((*(int *)(*plVar41 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                       (plVar42 = *(longlong **)(*plVar41 + (longlong)iVar13 * 0x10),
                       plVar42 == (longlong *)0x0)) {
LAB_140d1bd23:
                      FUN_14005b288(plVar41,iVar13);
                      FUN_14005b248(plVar41);
                    }
                    else {
                      cVar12 = (**(code **)(*plVar42 + 0x28))();
                      if (cVar12 != '\0') goto LAB_140d1bd23;
                      iVar13 = iVar13 + 1;
                    }
                    iVar36 = (int)local_488[7];
                  } while (iVar13 < iVar36);
                }
                plVar42 = local_488;
                iVar13 = 2;
                if (2 < iVar36 * 2) {
                  iVar13 = iVar36 * 2;
                }
                *(int *)(local_488 + 8) = iVar13;
                if ((iVar13 < iVar15) && (*(int *)((longlong)local_488 + 0x3c) != iVar36)) {
                  FUN_14045812c(plVar41);
                }
              }
            }
LAB_140d1c0e4:
            plVar41 = (longlong *)FUN_140a68038(1);
            puVar43 = local_3e0;
            if ((plVar41 != (longlong *)0x0) && (plVar42[0xea] == 0)) {
              local_3e0._0_4_ = 0;
              local_3e0._4_4_ = 0;
              local_3d8 = 0;
              FUN_1446efa72(&local_3e0,0,3,0x10);
              local_3d8 = 3;
              puVar2 = (undefined8 *)CONCAT44(local_3e0._4_4_,(uint)local_3e0);
              *puVar2 = &PTR_LAB_14b4e4420;
              LOCK();
              UNLOCK();
              lVar39 = DAT_14c758608 + 1;
              lVar17 = DAT_14c758608 + 1;
              if (lVar39 == 0) {
                LOCK();
                UNLOCK();
                lVar39 = DAT_14c758608 + 2;
                lVar17 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar17;
              puVar2[2] = lVar39;
              *puVar2 = &PTR_FUN_14b964650;
              puVar2[3] = 0;
              iVar15 = 0;
              if (plVar42 != (longlong *)0x0) {
                uVar31 = *(uint *)((longlong)plVar42 + 0xc);
                *(uint *)(puVar2 + 3) = uVar31;
                if ((int)uVar31 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                iVar15 = *(int *)(lVar17 + 0x10);
                if (*(int *)(lVar17 + 0x10) == 0) {
                  LOCK();
                  iVar15 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar36 = DAT_14c964868 + 1;
                  bVar44 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar15;
                  if (bVar44) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar36);
                  }
                  LOCK();
                  iVar15 = *(int *)(lVar17 + 0x10);
                  bVar44 = iVar15 == 0;
                  if (bVar44) {
                    *(int *)(lVar17 + 0x10) = iVar36;
                    iVar15 = 0;
                  }
                  UNLOCK();
                  plVar42 = local_488;
                  if (bVar44) {
                    iVar15 = iVar36;
                  }
                }
              }
              *(int *)((longlong)puVar2 + 0x1c) = iVar15;
              puVar2[4] = FUN_1440e5eba;
              *(undefined4 *)(puVar2 + 5) = 0;
              (**(code **)(*plVar41 + 0x170))(plVar41,&local_c8,&local_3e0);
              puVar43 = (uint *)CONCAT44(local_3e0._4_4_,(uint)local_3e0);
              plVar42[0xea] =
                   CONCAT44(local_c8._4_4_,
                            CONCAT22(local_c8._2_2_,CONCAT11(local_c8._1_1_,(undefined1)local_c8)));
              if (local_3d8 != 0) {
                puVar2 = (undefined8 *)CONCAT44(local_3e0._4_4_,(uint)local_3e0);
                if (puVar2 == (undefined8 *)0x0) goto LAB_140d1c24b;
                (**(code **)*puVar2)(puVar2,0);
                FUN_1446efa72(&local_3e0,0,0,0x10);
                local_3d8 = 0;
              }
              puVar43 = (uint *)0x0;
              if (CONCAT44(local_3e0._4_4_,(uint)local_3e0) != 0) {
                FUN_1400020a8();
                puVar43 = (uint *)CONCAT44(local_3e0._4_4_,(uint)local_3e0);
              }
            }
LAB_140d1c24b:
            local_3e0 = puVar43;
            FUN_1440e5eea(plVar42);
          }
        }
        FUN_148d01522(plVar42 + 9,plVar25);
      }
      FUN_1459ce154(plVar25);
      goto LAB_140d1ba48;
    }
    plVar42 = local_478 + 7;
    local_428 = param_1 + 0xc1;
    local_460 = param_1 + 0x20;
    local_400 = param_1 + 0xe4;
    local_458 = local_478 + 2;
    local_440 = param_1 + 0x27;
    local_448 = param_1 + 0x28;
    local_468 = (uint *)(param_1 + 0x22);
    local_410 = param_1 + 99;
    plVar25 = local_478;
    uVar34 = uVar29;
    local_480 = plVar42;
    local_3f8 = puVar43;
    do {
      if ((int)param_1[0x15] <= (int)uVar29) goto LAB_140d1ba86;
      plVar41 = (longlong *)(uVar29 * 0x20 + param_1[0x14]);
      if ((int)plVar25[1] != *(int *)((longlong)plVar25 + 0x34)) {
        uVar31 = ((uint)((ulonglong)plVar41 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar41 >> 4)) *
                 -0x7a143595;
        uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
        plVar30 = (longlong *)plVar25[8];
        if ((longlong *)plVar25[8] == (longlong *)0x0) {
          plVar30 = plVar42;
        }
        iVar36 = *(int *)((longlong)plVar30 +
                         (ulonglong)((int)plVar25[9] - 1U & (uVar31 >> 0x10 ^ uVar31)) * 4);
        if (iVar36 != -1) {
          do {
            if (*(longlong **)(*plVar25 + (longlong)iVar36 * 0x18) == plVar41) goto LAB_140d1b12b;
            iVar36 = *(int *)(*plVar25 + (longlong)iVar36 * 0x18 + 0x10);
          } while (iVar36 != -1);
        }
      }
      puVar20 = DAT_14cbc5978;
      if (DAT_14cbc5978 == (uint *)0x0) {
        puVar20 = (uint *)FUN_140595974(0x3000,0);
        lVar17 = 0xff;
        puVar22 = puVar20;
        do {
          puVar21 = puVar22 + 0xc;
          *(uint **)puVar22 = puVar21;
          lVar17 = lVar17 + -1;
          puVar22 = puVar21;
        } while (lVar17 != 0);
        *(uint **)puVar21 = DAT_14cbc5978;
        _DAT_14cbc5980 = _DAT_14cbc5980 + 0x100;
        plVar42 = local_480;
      }
      plVar30 = local_458;
      DAT_14cbc5978 = *(uint **)puVar20;
      _DAT_14cbc5984 = _DAT_14cbc5984 + 1;
      puVar20[4] = 0;
      puVar20[5] = 0;
      puVar20[6] = 0;
      puVar20[7] = 0;
      puVar20[8] = 0;
      puVar20[9] = 0;
      puVar20[10] = 0;
      puVar20[0xb] = 0;
      puVar20[0] = 0;
      puVar20[1] = 0;
      puVar20[2] = 0;
      puVar20[3] = 0;
      puVar20[5] = 0xffffffff;
      puVar20[6] = 0xffffffff;
      *(undefined1 *)(puVar20 + 10) = 1;
      puVar20[0xb] = 0xffffffff;
      if (puVar20 != (uint *)0x0) {
        local_490 = puVar20;
        local_3f0 = uVar29;
        if ((*plVar41 != 0) && (*(char *)(*plVar41 + 0x1a8) == '\x01')) {
          plVar19 = (longlong *)FUN_14001cc68(0x58,0x10);
          plVar19[1] = (longlong)&DAT_100000001;
          *plVar19 = (longlong)&PTR_FUN_14b9645c0;
          plVar19[2] = 0;
          plVar19[3] = 0;
          plVar19[6] = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          plVar19[9] = 0;
          plVar19[10] = 0;
          *(uint *)(plVar19 + 4) = local_3e4;
          plVar19[5] = (longlong)plVar41;
          if (*plVar41 == 0) {
            uVar45 = 0xffffffff;
          }
          else {
            uVar45 = *(undefined4 *)(*plVar41 + 0x1ac);
          }
          *(undefined4 *)(plVar19 + 6) = uVar45;
          uVar45 = 0xbf800000;
          if (*plVar41 != 0) {
            uVar45 = *(undefined4 *)(*plVar41 + 0x1b0);
          }
          puVar43 = (uint *)(plVar19 + 2);
          *(undefined4 *)((longlong)plVar19 + 0x34) = uVar45;
          local_3d8 = (uint)plVar19;
          uStack_3d4 = (undefined4)((ulonglong)plVar19 >> 0x20);
          local_3e0 = puVar43;
          FUN_148d00f42(&local_3e0,puVar43);
          if (plVar19 == (longlong *)0x0) {
            FUN_14662252c(local_428,&local_3e0);
            *(undefined8 *)CONCAT44(uStack_3d4,local_3d8) = 0x10;
            ((undefined8 *)CONCAT44(uStack_3d4,local_3d8))[1] = 0;
            local_490[0xb] = (uint)local_3e0;
            plVar25 = local_478;
            plVar42 = local_480;
          }
          else {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            plVar42 = (longlong *)CONCAT44(uStack_3d4,local_3d8);
            if (plVar42 != (longlong *)0x0) {
              LOCK();
              plVar25 = plVar42 + 1;
              *(int *)plVar25 = (int)*plVar25 + -1;
              UNLOCK();
              if ((int)*plVar25 == 0) {
                (**(code **)*plVar42)(plVar42);
                LOCK();
                piVar4 = (int *)((longlong)plVar42 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar42 + 0x10))(plVar42);
                }
              }
            }
            FUN_14662252c(local_428,&local_3e0);
            plVar25 = local_478;
            *(longlong *)CONCAT44(uStack_3d4,local_3d8) = (longlong)puVar43;
            ((longlong *)CONCAT44(uStack_3d4,local_3d8))[1] = (longlong)plVar19;
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            local_490[0xb] = (uint)local_3e0;
            LOCK();
            plVar1 = plVar19 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plVar42 = local_480;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar4 = (int *)((longlong)plVar19 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              plVar42 = local_480;
              if (*piVar4 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar42 = local_480;
              }
            }
          }
        }
        if (*(int *)((longlong)plVar25 + 0x34) == 0) {
          iVar15 = (int)plVar25[1];
          *(int *)(plVar25 + 1) = iVar15 + 1;
          if (*(int *)((longlong)plVar25 + 0xc) == iVar15) {
            FUN_14482b872(plVar25,iVar15);
            plVar42 = local_480;
          }
          iVar36 = (int)plVar25[5];
          if (iVar36 == 0) {
            iVar13 = -1;
          }
          else {
            iVar13 = iVar36 + 0x1e;
            if (-1 < iVar36 + -1) {
              iVar13 = iVar36 + -1;
            }
            iVar13 = iVar13 >> 5;
          }
          iVar27 = iVar36 + 1;
          iVar33 = iVar36 + 0x1f;
          if (-1 < iVar36) {
            iVar33 = iVar36;
          }
          if (iVar33 >> 5 == iVar13) {
            *(int *)(plVar25 + 5) = iVar27;
          }
          else {
            if (*(int *)((longlong)plVar25 + 0x2c) <= iVar36) {
              iVar13 = iVar36;
              if (iVar36 + 0x20U < 0xa0) {
                iVar27 = 0x80;
              }
              else {
                uVar31 = iVar36 + 0x20U >> 5;
                if (*(int *)((longlong)plVar25 + 0x2c) + 0x1fU < 0xa0) {
                  uVar32 = 4;
                  if (4 < uVar31) {
                    uVar32 = uVar31;
                  }
                }
                else {
                  uVar32 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
                }
                uVar29 = (ulonglong)(uVar32 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar28 = (uint)(uVar29 + 0xf);
                    if (uVar32 < 0x1ffd) {
                      uVar29 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar28 >> 4]];
                    }
                    else {
                      uVar34 = uVar29 + 0xf & 0xfffffffffffffff0;
                      plVar30 = local_458;
                      if (uVar34 < 0x7ff1) {
                        bVar26 = (&DAT_14c841e00)[uVar28 >> 4];
                        uVar35 = 0x32;
                        if (0x32 < bVar26) {
                          uVar35 = (ulonglong)bVar26;
                        }
                        uVar37 = 0x32 - (ulonglong)bVar26;
                        do {
                          uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0)
                          goto LAB_140d1b302;
                          lVar17 = uVar35 + 1 + uVar37;
                          uVar37 = uVar37 - 1;
                        } while (lVar17 != 0x33);
                      }
                      uVar29 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar29 = 0x10;
                      }
                      uVar29 = -uVar29 & (uVar34 + uVar29) - 1;
                    }
                  }
                  else {
                    uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                    iVar13 = (int)local_478[5];
                  }
                }
LAB_140d1b302:
                iVar16 = (int)(uVar29 >> 2);
                iVar27 = iVar16 << 5;
                if (iVar16 < (int)uVar31) {
                  iVar27 = -0x20;
                }
              }
              plVar25 = local_478;
              *(int *)((longlong)local_478 + 0x2c) = iVar27;
              FUN_1446efbd8(plVar30,iVar13);
              iVar27 = (int)plVar25[5] + 1;
              plVar42 = local_480;
            }
            iVar13 = iVar27 + 0x1f;
            if (-1 < iVar27) {
              iVar13 = iVar27;
            }
            *(int *)(plVar25 + 5) = iVar27;
            if (iVar27 % 0x20 != 0) {
              plVar19 = (longlong *)plVar25[4];
              if ((longlong *)plVar25[4] == (longlong *)0x0) {
                plVar19 = plVar30;
              }
              bVar26 = -(char)(iVar27 % 0x20);
              *(uint *)((longlong)plVar19 + (longlong)(iVar13 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar13 >> 5) * 4) <<
                         (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
            }
          }
          lVar17 = (longlong)iVar15;
          plVar19 = (longlong *)plVar25[4];
          if ((longlong *)plVar25[4] == (longlong *)0x0) {
            plVar19 = plVar30;
          }
          bVar26 = (byte)iVar36 & 0x1f;
          puVar43 = (uint *)((longlong)plVar19 + (longlong)(iVar33 >> 5) * 4);
          *puVar43 = *puVar43 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
          plVar19 = plVar25;
        }
        else {
          iVar15 = (int)plVar25[6];
          lVar17 = (longlong)iVar15;
          iVar36 = *(int *)(*plVar25 + 4 + lVar17 * 0x18);
          *(int *)(plVar25 + 6) = iVar36;
          iVar13 = *(int *)((longlong)plVar25 + 0x34) + -1;
          *(int *)((longlong)plVar25 + 0x34) = iVar13;
          plVar30 = local_458;
          plVar19 = local_478;
          plVar42 = local_480;
          if (iVar13 != 0) {
            *(undefined4 *)(*plVar25 + (longlong)iVar36 * 0x18) = 0xffffffff;
          }
        }
        plVar25 = (longlong *)plVar19[4];
        if ((longlong *)plVar19[4] == (longlong *)0x0) {
          plVar25 = plVar30;
        }
        iVar36 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar36 = iVar15;
        }
        puVar43 = (uint *)((longlong)plVar25 + (longlong)(iVar36 >> 5) * 4);
        *puVar43 = *puVar43 | 1 << ((byte)iVar15 & 0x1f);
        puVar2 = (undefined8 *)(*plVar19 + lVar17 * 0x18);
        *puVar2 = plVar41;
        puVar2[1] = local_490;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        uVar31 = ((uint)((ulonglong)plVar41 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar41 >> 4)) *
                 -0x7a143595;
        uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
        uVar31 = uVar31 >> 0x10 ^ uVar31;
        uVar32 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
        if ((uVar32 != 0) && (uVar32 != 1)) {
          plVar25 = (longlong *)plVar19[8];
          if ((longlong *)plVar19[8] == (longlong *)0x0) {
            plVar25 = plVar42;
          }
          iVar36 = *(int *)((longlong)plVar25 + (ulonglong)((int)plVar19[9] - 1U & uVar31) * 4);
          if (iVar36 != -1) {
            do {
              puVar3 = (undefined8 *)(*plVar19 + (longlong)iVar36 * 0x18);
              if ((longlong *)*puVar3 == plVar41) {
                uVar45 = *(undefined4 *)((longlong)puVar2 + 4);
                uVar8 = *(undefined4 *)(puVar2 + 1);
                uVar9 = *(undefined4 *)((longlong)puVar2 + 0xc);
                *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
                *(undefined4 *)((longlong)puVar3 + 4) = uVar45;
                *(undefined4 *)(puVar3 + 1) = uVar8;
                *(undefined4 *)((longlong)puVar3 + 0xc) = uVar9;
                FUN_148d00fe2(plVar19,iVar15);
                goto LAB_140d19f30;
              }
              iVar36 = *(int *)(puVar3 + 2);
            } while (iVar36 != -1);
          }
        }
        if (uVar32 < 4) {
          iVar36 = 1;
        }
        else {
          uVar29 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
          lVar17 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar36 = 1 << ((byte)lVar17 & 0x1f);
        }
        if (((int)uVar32 < 1) || (iVar36 <= (int)plVar19[9])) {
          uVar32 = (int)plVar19[9] - 1U & uVar31;
          *(uint *)((longlong)puVar2 + 0x14) = uVar32;
          plVar25 = (longlong *)plVar19[8];
          if ((longlong *)plVar19[8] == (longlong *)0x0) {
            plVar25 = plVar42;
          }
          *(undefined4 *)(puVar2 + 2) =
               *(undefined4 *)
                ((longlong)plVar25 + ((longlong)(int)plVar19[9] - 1U & (longlong)(int)uVar32) * 4);
          plVar25 = (longlong *)plVar19[8];
          if ((longlong *)plVar19[8] == (longlong *)0x0) {
            plVar25 = plVar42;
          }
          *(int *)((longlong)plVar25 + ((longlong)(int)plVar19[9] - 1U & (longlong)(int)uVar32) * 4)
               = iVar15;
        }
        else {
          *(int *)(plVar19 + 9) = iVar36;
          FUN_141588392();
        }
LAB_140d19f30:
        param_1 = local_488;
        local_3e0._0_4_ = (uint)local_3e0 & 0xffffff00;
        local_3e0._4_4_ = 0;
        local_3d8 = 0;
        uStack_3d4 = 0;
        local_3d0 = local_3d0 & 0xffffff00;
        local_3bc = 0;
        uStack_3b8 = 0;
        uStack_3cc = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3c0 = 0;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,0xc69c4000);
        local_360 = 0;
        local_358 = local_358 & 0xffffffff00000000;
        local_368 = 0;
        local_378 = 0;
        uStack_370 = 0;
        local_388 = 0;
        uStack_380 = 0;
        local_398 = 0;
        uStack_390 = 0;
        local_3a8 = 0;
        uStack_3a0 = 0;
        local_350 = 0x100;
        local_34c = 0;
        lVar17 = *plVar41;
        if (lVar17 == 0) {
          local_c8._0_1_ = 0;
          local_c8._1_1_ = 0;
          local_c8._4_4_ = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
          lStack_a0 = 0;
          uStack_98 = 0;
        }
        else {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
          lStack_a0 = 0;
          uStack_98 = 0;
          uStack_c0 = *(undefined4 *)(lVar17 + 0xe8);
          uVar24 = *(undefined8 *)(lVar17 + 0xe0);
          local_c8._0_1_ = (undefined1)uVar24;
          local_c8._1_1_ = (undefined1)((ulonglong)uVar24 >> 8);
          local_c8._2_2_ = (undefined2)((ulonglong)uVar24 >> 0x10);
          local_c8._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
          FUN_1447715ec(&local_b8,lVar17 + 0xf0);
        }
        puVar43 = local_490 + 6;
        local_4e8 = puVar43;
        local_4e0 = &local_3e0;
        (**(code **)(*local_438 + 0x18))(local_438,&local_c8,0,param_5);
        if (lStack_a0 != 0) {
          FUN_1400020a8();
        }
        uVar28 = local_3e4;
        puVar20 = local_468;
        plVar42 = local_488;
        uVar32 = *puVar43;
        if (uVar32 != 0xffffffff) {
          iVar36 = (int)param_1[0x21];
          iVar15 = *(int *)((longlong)param_1 + 0x134);
          local_450 = puVar43;
          local_42c = uVar31;
          if (iVar36 != iVar15) {
            plVar25 = (longlong *)local_488[0x28];
            if ((longlong *)local_488[0x28] == (longlong *)0x0) {
              plVar25 = local_440;
            }
            iVar13 = *(int *)((longlong)plVar25 +
                             (ulonglong)((int)local_488[0x29] - 1U & local_3e4) * 4);
            if (iVar13 != -1) {
              do {
                lVar17 = *local_460 + (longlong)iVar13 * 0x60;
                if (*(uint *)(*local_460 + (longlong)iVar13 * 0x60) == local_3e4) {
                  if (lVar17 != 0) goto LAB_140d1a5a4;
                  break;
                }
                iVar13 = *(int *)(lVar17 + 0x58);
              } while (iVar13 != -1);
            }
          }
          if (iVar15 == 0) {
            *(int *)(local_488 + 0x21) = iVar36 + 1;
            if (*(int *)((longlong)local_488 + 0x10c) == iVar36) {
              FUN_14488f93c(local_460,iVar36);
            }
            iVar15 = (int)plVar42[0x25];
            if (iVar15 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar13 = iVar15 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar27 = iVar15 + 1;
            iVar33 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar33 = iVar15;
            }
            if (iVar33 >> 5 == iVar13) {
              *(int *)(plVar42 + 0x25) = iVar27;
            }
            else {
              if (*(int *)((longlong)plVar42 + 300) <= iVar15) {
                iVar13 = iVar15;
                if (iVar15 + 0x20U < 0xa0) {
                  iVar27 = 0x80;
                }
                else {
                  uVar31 = iVar15 + 0x20U >> 5;
                  if (*(int *)((longlong)plVar42 + 300) + 0x1fU < 0xa0) {
                    uVar32 = 4;
                    if (4 < uVar31) {
                      uVar32 = uVar31;
                    }
                  }
                  else {
                    uVar32 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
                  }
                  uVar29 = (ulonglong)(uVar32 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar14 = (uint)(uVar29 + 0xf);
                      if (uVar32 < 0x1ffd) {
                        uVar29 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar14 >> 4]];
                      }
                      else {
                        uVar34 = uVar29 + 0xf & 0xfffffffffffffff0;
                        puVar20 = local_468;
                        if (uVar34 < 0x7ff1) {
                          bVar26 = (&DAT_14c841e00)[uVar14 >> 4];
                          uVar35 = 0x32;
                          if (0x32 < bVar26) {
                            uVar35 = (ulonglong)bVar26;
                          }
                          uVar37 = 0x32 - (ulonglong)bVar26;
                          do {
                            uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0)
                            goto LAB_140d1b429;
                            lVar17 = uVar35 + 1 + uVar37;
                            uVar37 = uVar37 - 1;
                          } while (lVar17 != 0x33);
                        }
                        uVar29 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar29 = 0x10;
                        }
                        uVar29 = -uVar29 & (uVar34 + uVar29) - 1;
                      }
                    }
                    else {
                      uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                      iVar13 = (int)local_488[0x25];
                    }
                  }
LAB_140d1b429:
                  iVar16 = (int)(uVar29 >> 2);
                  iVar27 = iVar16 << 5;
                  if (iVar16 < (int)uVar31) {
                    iVar27 = -0x20;
                  }
                }
                plVar42 = local_488;
                *(int *)((longlong)local_488 + 300) = iVar27;
                FUN_1446efbd8(puVar20,iVar13);
                iVar27 = (int)plVar42[0x25] + 1;
              }
              iVar13 = iVar27 + 0x1f;
              if (-1 < iVar27) {
                iVar13 = iVar27;
              }
              *(int *)(plVar42 + 0x25) = iVar27;
              if (iVar27 % 0x20 != 0) {
                puVar43 = (uint *)plVar42[0x24];
                if ((uint *)plVar42[0x24] == (uint *)0x0) {
                  puVar43 = puVar20;
                }
                bVar26 = -(char)(iVar27 % 0x20);
                puVar43[iVar13 >> 5] = (puVar43[iVar13 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
              }
            }
            lVar17 = (longlong)iVar36;
            puVar43 = (uint *)plVar42[0x24];
            if ((uint *)plVar42[0x24] == (uint *)0x0) {
              puVar43 = puVar20;
            }
            bVar26 = (byte)iVar15 & 0x1f;
            puVar43[iVar33 >> 5] =
                 puVar43[iVar33 >> 5] & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
          }
          else {
            iVar36 = (int)local_488[0x26];
            lVar17 = (longlong)iVar36;
            iVar13 = *(int *)(local_488[0x20] + 4 + lVar17 * 0x60);
            *(int *)(local_488 + 0x26) = iVar13;
            *(int *)((longlong)local_488 + 0x134) = iVar15 + -1;
            if (iVar15 + -1 != 0) {
              *(undefined4 *)(local_488[0x20] + (longlong)iVar13 * 0x60) = 0xffffffff;
            }
          }
          puVar43 = (uint *)plVar42[0x24];
          if ((uint *)plVar42[0x24] == (uint *)0x0) {
            puVar43 = puVar20;
          }
          iVar15 = iVar36 + 0x1f;
          if (-1 < iVar36) {
            iVar15 = iVar36;
          }
          puVar43[iVar15 >> 5] = puVar43[iVar15 >> 5] | 1 << ((byte)iVar36 & 0x1f);
          piVar4 = (int *)(plVar42[0x20] + lVar17 * 0x60);
          local_a8 = 0;
          uStack_90 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8._0_1_ = 0;
          local_c8._1_1_ = 0;
          local_c8._2_2_ = 0;
          local_c8._4_4_ = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          lStack_a0 = 0x8000000000;
          puVar43 = (uint *)(lVar17 * 0x60 + plVar42[0x20]);
          puVar22 = puVar43 + 2;
          *puVar43 = local_3e4;
          puVar43[10] = 0;
          puVar43[0xb] = 0;
          puVar43[0xc] = 0;
          puVar22[0] = 0;
          puVar22[1] = 0;
          puVar43[4] = 0;
          puVar43[5] = 0;
          puVar43[0xd] = 0x80;
          puVar43[0xe] = 0xffffffff;
          puVar43[0xf] = 0;
          if (puVar22 != (uint *)&local_c8) {
            piVar4[6] = 0;
            piVar4[7] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            lStack_a0 = 0;
          }
          uStack_98 = 0xffffffff;
          piVar4[0x10] = 0;
          piVar4[0x12] = 0;
          piVar4[0x13] = 0;
          local_88 = 0;
          piVar4[0x14] = 0;
          uStack_80 = 0;
          FUN_144039b6e(&local_c8);
          piVar4[0x16] = -1;
          uVar32 = (int)plVar42[0x21] - *(int *)((longlong)plVar42 + 0x134);
          uVar31 = 1;
          if (uVar32 != 1) {
            if ((int)plVar42[0x21] != *(int *)((longlong)plVar42 + 0x134)) {
              plVar42 = (longlong *)local_488[0x28];
              if ((longlong *)local_488[0x28] == (longlong *)0x0) {
                plVar42 = local_440;
              }
              iVar15 = *(int *)((longlong)plVar42 +
                               (ulonglong)((int)local_488[0x29] - 1U & uVar28) * 4);
              if (iVar15 != -1) {
                do {
                  _Dst = (void *)(*local_460 + (longlong)iVar15 * 0x60);
                  if (*(int *)(*local_460 + (longlong)iVar15 * 0x60) == *piVar4) {
                    *(undefined4 *)((longlong)_Dst + 0x50) = 0;
                    if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_144039b6e((longlong)_Dst + 8);
                    memmove(_Dst,piVar4,0x58);
                    FUN_1440eabbc(local_460,iVar36);
                    goto LAB_140d1a57b;
                  }
                  iVar15 = *(int *)((longlong)_Dst + 0x58);
                } while (iVar15 != -1);
              }
            }
            plVar42 = local_488;
            if (3 < uVar32) {
              uVar29 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
              lVar17 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              uVar31 = 1 << ((byte)lVar17 & 0x1f);
            }
          }
          if (((int)uVar32 < 1) || ((int)uVar31 <= (int)plVar42[0x29])) {
            uVar28 = (int)plVar42[0x29] - 1U & uVar28;
            piVar4[0x17] = uVar28;
            plVar25 = (longlong *)plVar42[0x28];
            if ((longlong *)plVar42[0x28] == (longlong *)0x0) {
              plVar25 = local_440;
            }
            piVar4[0x16] = *(int *)((longlong)plVar25 +
                                   ((longlong)(int)plVar42[0x29] - 1U & (longlong)(int)uVar28) * 4);
            plVar25 = (longlong *)plVar42[0x28];
            if ((longlong *)plVar42[0x28] == (longlong *)0x0) {
              plVar25 = local_440;
            }
            *(int *)((longlong)plVar25 +
                    ((longlong)(int)plVar42[0x29] - 1U & (longlong)(int)uVar28) * 4) = iVar36;
          }
          else {
            *(uint *)(plVar42 + 0x29) = uVar31;
            if (plVar42[0x28] != 0) {
              FUN_1446efa72(local_448,0,0,4);
              uVar31 = *(uint *)(plVar42 + 0x29);
            }
            plVar25 = local_440;
            if (uVar31 != 0) {
              if (uVar31 == 1) {
                if (*local_448 != 0) {
                  FUN_1446efa72(local_448,0,0,4);
                }
LAB_140d1a471:
                uVar32 = 0;
                do {
                  plVar30 = (longlong *)plVar42[0x28];
                  if ((longlong *)plVar42[0x28] == (longlong *)0x0) {
                    plVar30 = plVar25;
                  }
                  *(undefined4 *)
                   ((longlong)plVar30 + (ulonglong)((int)plVar42[0x29] + 0x7fffffffU & uVar32) * 4)
                       = 0xffffffff;
                  uVar32 = uVar32 + 1;
                } while (uVar31 != uVar32);
              }
              else {
                FUN_1446efa72(local_448,0,uVar31,4);
                if (0 < (int)uVar31) goto LAB_140d1a471;
              }
              iVar15 = (int)plVar42[0x25];
              if (iVar15 == 0) {
                uVar29 = 0;
                uVar34 = 1;
                iVar27 = 0;
                iVar13 = 0;
              }
              else {
                puVar43 = (uint *)plVar42[0x24];
                if ((uint *)plVar42[0x24] == (uint *)0x0) {
                  puVar43 = puVar20;
                }
                uVar31 = *puVar43;
                if (uVar31 == 0) {
                  iVar13 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar13 = iVar15 + -1;
                  }
                  uVar29 = 0;
                  uVar32 = iVar13 >> 5;
                  if (iVar13 >> 5 < 1) {
                    uVar32 = 0;
                  }
                  iVar27 = 0;
                  do {
                    if (uVar32 == uVar29) goto LAB_140d1a57b;
                    iVar27 = iVar27 + 0x20;
                    uVar31 = puVar43[uVar29 + 1];
                    uVar29 = uVar29 + 1;
                  } while (uVar31 == 0);
                }
                else {
                  uVar29 = 0;
                  iVar27 = 0;
                }
                uVar34 = (ulonglong)(-uVar31 & uVar31);
                uVar35 = uVar34 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar13 = (iVar27 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if (iVar15 <= iVar13) {
                  iVar13 = iVar15;
                }
              }
              if (iVar13 < iVar15) {
                uVar31 = 0xffffffff;
                do {
                  lVar17 = plVar42[0x20];
                  lVar39 = (longlong)iVar13 * 0x60;
                  uVar35 = (longlong)(int)plVar42[0x29] - 1U & (longlong)*(int *)(lVar17 + lVar39);
                  iVar15 = (int)uVar35;
                  *(int *)(lVar17 + 0x5c + lVar39) = iVar15;
                  plVar30 = (longlong *)plVar42[0x28];
                  if ((longlong *)plVar42[0x28] == (longlong *)0x0) {
                    plVar30 = plVar25;
                  }
                  *(undefined4 *)(lVar17 + 0x58 + lVar39) =
                       *(undefined4 *)
                        ((longlong)plVar30 + ((longlong)(int)plVar42[0x29] - 1U & uVar35) * 4);
                  plVar30 = (longlong *)plVar42[0x28];
                  if ((longlong *)plVar42[0x28] == (longlong *)0x0) {
                    plVar30 = plVar25;
                  }
                  *(int *)((longlong)plVar30 +
                          ((longlong)iVar15 & (longlong)(int)plVar42[0x29] - 1U) * 4) = iVar13;
                  uVar31 = ~(uint)uVar34 & uVar31;
                  puVar43 = (uint *)plVar42[0x24];
                  if ((uint *)plVar42[0x24] == (uint *)0x0) {
                    puVar43 = local_468;
                  }
                  iVar15 = (int)plVar42[0x25];
                  iVar13 = (int)uVar29;
                  lVar17 = (longlong)iVar13;
                  uVar32 = puVar43[lVar17] & uVar31;
                  if (uVar32 == 0) {
                    iVar33 = iVar15 + 0x1e;
                    if (-1 < iVar15 + -1) {
                      iVar33 = iVar15 + -1;
                    }
                    iVar33 = iVar33 >> 5;
                    iVar16 = iVar33;
                    if (iVar33 < iVar13) {
                      iVar16 = iVar13;
                    }
                    if (iVar33 <= iVar13) break;
                    lVar39 = 0;
                    while( true ) {
                      iVar27 = iVar27 + 0x20;
                      uVar32 = puVar43[lVar17 + lVar39 + 1];
                      if (uVar32 != 0) break;
                      lVar39 = lVar39 + 1;
                      if (iVar16 - lVar17 == lVar39) goto LAB_140d1a57b;
                    }
                    uVar29 = (ulonglong)(iVar13 + (int)lVar39 + 1);
                    uVar31 = 0xffffffff;
                  }
                  uVar34 = (ulonglong)(-uVar32 & uVar32);
                  uVar35 = uVar34 * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar35 != 0) {
                    for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  iVar13 = (iVar27 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                } while (iVar13 < iVar15);
              }
            }
          }
LAB_140d1a57b:
          lVar17 = *local_460 + (longlong)iVar36 * 0x60;
          uVar32 = *local_450;
LAB_140d1a5a4:
          plVar42 = (longlong *)(lVar17 + 8);
          iVar36 = *(int *)(lVar17 + 0x10);
          iVar15 = *(int *)(lVar17 + 0x3c);
          if (iVar36 != iVar15) {
            lVar39 = lVar17 + 0x40;
            if (*(longlong *)(lVar17 + 0x48) != 0) {
              lVar39 = *(longlong *)(lVar17 + 0x48);
            }
            iVar13 = *(int *)(lVar39 + (ulonglong)(*(int *)(lVar17 + 0x50) - 1U & uVar32) * 4);
            if (iVar13 != -1) {
              do {
                lVar39 = *plVar42 + (longlong)iVar13 * 0x20;
                if (*(uint *)(*plVar42 + (longlong)iVar13 * 0x20) == uVar32) {
                  if (lVar39 != 0) goto LAB_140d1ae09;
                  break;
                }
                iVar13 = *(int *)(lVar39 + 0x18);
              } while (iVar13 != -1);
            }
          }
          if (iVar15 == 0) {
            *(int *)(lVar17 + 0x10) = iVar36 + 1;
            if (*(int *)(lVar17 + 0x14) == iVar36) {
              FUN_1447711aa(plVar42,iVar36);
            }
            iVar15 = *(int *)(lVar17 + 0x30);
            if (iVar15 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar13 = iVar15 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            lVar39 = lVar17 + 0x18;
            iVar27 = iVar15 + 1;
            iVar33 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar33 = iVar15;
            }
            if (iVar33 >> 5 == iVar13) {
              *(int *)(lVar17 + 0x30) = iVar27;
            }
            else {
              if (*(int *)(lVar17 + 0x34) <= iVar15) {
                iVar13 = iVar15;
                if (iVar15 + 0x20U < 0xa0) {
                  iVar27 = 0x80;
                }
                else {
                  uVar31 = iVar15 + 0x20U >> 5;
                  if (*(int *)(lVar17 + 0x34) + 0x1fU < 0xa0) {
                    uVar28 = 4;
                    if (4 < uVar31) {
                      uVar28 = uVar31;
                    }
                  }
                  else {
                    uVar28 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
                  }
                  uVar29 = (ulonglong)(uVar28 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar14 = (uint)(uVar29 + 0xf);
                      if (uVar28 < 0x1ffd) {
                        uVar29 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar14 >> 4]];
                      }
                      else {
                        uVar34 = uVar29 + 0xf & 0xfffffffffffffff0;
                        if (uVar34 < 0x7ff1) {
                          bVar26 = (&DAT_14c841e00)[uVar14 >> 4];
                          uVar35 = 0x32;
                          if (0x32 < bVar26) {
                            uVar35 = (ulonglong)bVar26;
                          }
                          uVar37 = 0x32 - (ulonglong)bVar26;
                          do {
                            uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0)
                            goto LAB_140d1b4c9;
                            lVar18 = uVar35 + 1 + uVar37;
                            uVar37 = uVar37 - 1;
                          } while (lVar18 != 0x33);
                        }
                        uVar29 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar29 = 0x10;
                        }
                        uVar29 = -uVar29 & (uVar34 + uVar29) - 1;
                      }
                    }
                    else {
                      uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                      iVar13 = *(int *)(lVar17 + 0x30);
                    }
                  }
LAB_140d1b4c9:
                  iVar16 = (int)(uVar29 >> 2);
                  iVar27 = iVar16 << 5;
                  if (iVar16 < (int)uVar31) {
                    iVar27 = -0x20;
                  }
                }
                *(int *)(lVar17 + 0x34) = iVar27;
                FUN_1446efbd8(lVar39,iVar13);
                iVar27 = *(int *)(lVar17 + 0x30) + 1;
              }
              iVar13 = iVar27 + 0x1f;
              if (-1 < iVar27) {
                iVar13 = iVar27;
              }
              *(int *)(lVar17 + 0x30) = iVar27;
              if (iVar27 % 0x20 != 0) {
                lVar18 = *(longlong *)(lVar17 + 0x28);
                if (*(longlong *)(lVar17 + 0x28) == 0) {
                  lVar18 = lVar39;
                }
                bVar26 = -(char)(iVar27 % 0x20);
                *(uint *)(lVar18 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)(lVar18 + (longlong)(iVar13 >> 5) * 4) << (bVar26 & 0x1f)) >>
                     (bVar26 & 0x1f);
              }
            }
            lVar18 = (longlong)iVar36;
            if (*(longlong *)(lVar17 + 0x28) != 0) {
              lVar39 = *(longlong *)(lVar17 + 0x28);
            }
            bVar26 = (byte)iVar15 & 0x1f;
            puVar43 = (uint *)(lVar39 + (longlong)(iVar33 >> 5) * 4);
            *puVar43 = *puVar43 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
          }
          else {
            iVar36 = *(int *)(lVar17 + 0x38);
            lVar18 = (longlong)iVar36;
            iVar13 = *(int *)(*plVar42 + 4 + lVar18 * 0x20);
            *(int *)(lVar17 + 0x38) = iVar13;
            *(int *)(lVar17 + 0x3c) = iVar15 + -1;
            if (iVar15 + -1 != 0) {
              *(undefined4 *)(*plVar42 + (longlong)iVar13 * 0x20) = 0xffffffff;
            }
          }
          local_470 = (uint *)(lVar17 + 0x18);
          uVar31 = 1 << ((byte)iVar36 & 0x1f);
          puVar43 = *(uint **)(lVar17 + 0x28);
          if (*(uint **)(lVar17 + 0x28) == (uint *)0x0) {
            puVar43 = local_470;
          }
          iVar15 = iVar36 + 0x1f;
          if (-1 < iVar36) {
            iVar15 = iVar36;
          }
          puVar43[iVar15 >> 5] = puVar43[iVar15 >> 5] | uVar31;
          lVar39 = *plVar42;
          lVar18 = lVar18 * 0x20;
          puVar5 = (undefined4 *)(lVar39 + lVar18);
          uVar28 = *local_450;
          *(uint *)(lVar39 + lVar18) = uVar28;
          puVar2 = (undefined8 *)(lVar39 + 8 + lVar18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined4 *)(lVar39 + 0x18 + lVar18) = 0xffffffff;
          uVar14 = *(int *)(lVar17 + 0x10) - *(int *)(lVar17 + 0x3c);
          local_420 = (longlong)iVar36;
          if (1 < uVar14) {
            lVar39 = lVar17 + 0x40;
            if (*(longlong *)(lVar17 + 0x48) != 0) {
              lVar39 = *(longlong *)(lVar17 + 0x48);
            }
            iVar13 = *(int *)(lVar39 + (ulonglong)(*(int *)(lVar17 + 0x50) - 1U & uVar32) * 4);
            if (iVar13 != -1) {
              do {
                puVar6 = (undefined4 *)(*plVar42 + (longlong)iVar13 * 0x20);
                if (*(uint *)(*plVar42 + (longlong)iVar13 * 0x20) == uVar28) {
                  if (*(longlong *)(puVar6 + 2) != 0) {
                    FUN_1400020a8();
                  }
                  uVar45 = *puVar5;
                  uVar8 = puVar5[1];
                  uVar9 = puVar5[2];
                  uVar10 = puVar5[3];
                  *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar5 + 4);
                  *puVar6 = uVar45;
                  puVar6[1] = uVar8;
                  puVar6[2] = uVar9;
                  puVar6[3] = uVar10;
                  lVar39 = *plVar42;
                  if (*(int *)(lVar17 + 0x3c) != 0) {
                    *(int *)(lVar39 + (longlong)*(int *)(lVar17 + 0x38) * 0x20) = iVar36;
                  }
                  *(undefined4 *)(lVar39 + local_420 * 0x20) = 0xffffffff;
                  if (*(int *)(lVar17 + 0x3c) < 1) {
                    uVar45 = 0xffffffff;
                  }
                  else {
                    uVar45 = *(undefined4 *)(lVar17 + 0x38);
                  }
                  *(undefined4 *)(lVar39 + local_420 * 0x20 + 4) = uVar45;
                  *(int *)(lVar17 + 0x38) = iVar36;
                  *(int *)(lVar17 + 0x3c) = *(int *)(lVar17 + 0x3c) + 1;
                  puVar43 = local_470;
                  if (*(uint **)(lVar17 + 0x28) != (uint *)0x0) {
                    puVar43 = *(uint **)(lVar17 + 0x28);
                  }
                  puVar43[iVar15 >> 5] = puVar43[iVar15 >> 5] & ~uVar31;
                  goto LAB_140d1adf1;
                }
                iVar13 = puVar6[6];
              } while (iVar13 != -1);
            }
          }
          uVar31 = 1;
          if (3 < uVar14) {
            uVar29 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
            lVar39 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            uVar31 = 1 << ((byte)lVar39 & 0x1f);
          }
          if (((int)uVar14 < 1) || ((int)uVar31 <= *(int *)(lVar17 + 0x50))) {
            uVar32 = *(int *)(lVar17 + 0x50) - 1U & uVar32;
            puVar5[7] = uVar32;
            lVar39 = *(longlong *)(lVar17 + 0x48);
            if (*(longlong *)(lVar17 + 0x48) == 0) {
              lVar39 = lVar17 + 0x40;
            }
            puVar5[6] = *(undefined4 *)
                         (lVar39 + ((longlong)*(int *)(lVar17 + 0x50) - 1U & (longlong)(int)uVar32)
                                   * 4);
            lVar39 = *(longlong *)(lVar17 + 0x48);
            if (*(longlong *)(lVar17 + 0x48) == 0) {
              lVar39 = lVar17 + 0x40;
            }
            *(int *)(lVar39 + ((longlong)*(int *)(lVar17 + 0x50) - 1U & (longlong)(int)uVar32) * 4)
                 = iVar36;
          }
          else {
            *(uint *)(lVar17 + 0x50) = uVar31;
            plVar25 = (longlong *)(lVar17 + 0x48);
            if (*(longlong *)(lVar17 + 0x48) != 0) {
              FUN_1446efa72(plVar25,0,0,4);
              uVar31 = *(uint *)(lVar17 + 0x50);
            }
            if (uVar31 != 0) {
              lVar39 = lVar17 + 0x40;
              if (uVar31 == 1) {
                if (*plVar25 != 0) {
                  FUN_1446efa72(plVar25,0,0,4);
                }
LAB_140d1a7e9:
                uVar32 = 0;
                do {
                  lVar18 = *(longlong *)(lVar17 + 0x48);
                  if (*(longlong *)(lVar17 + 0x48) == 0) {
                    lVar18 = lVar39;
                  }
                  *(undefined4 *)
                   (lVar18 + (ulonglong)(*(int *)(lVar17 + 0x50) + 0x7fffffffU & uVar32) * 4) =
                       0xffffffff;
                  uVar32 = uVar32 + 1;
                } while (uVar31 != uVar32);
              }
              else {
                FUN_1446efa72(plVar25,0,uVar31,4);
                if (0 < (int)uVar31) goto LAB_140d1a7e9;
              }
              iVar15 = *(int *)(lVar17 + 0x30);
              if (iVar15 == 0) {
                uVar29 = 0;
                uVar34 = 1;
                iVar13 = 0;
                iVar36 = 0;
              }
              else {
                puVar43 = *(uint **)(lVar17 + 0x28);
                if (*(uint **)(lVar17 + 0x28) == (uint *)0x0) {
                  puVar43 = local_470;
                }
                uVar31 = *puVar43;
                if (uVar31 == 0) {
                  iVar36 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar36 = iVar15 + -1;
                  }
                  uVar29 = 0;
                  uVar34 = (ulonglong)(uint)(iVar36 >> 5);
                  if (iVar36 >> 5 < 1) {
                    uVar34 = uVar29;
                  }
                  iVar13 = 0;
                  do {
                    if (uVar34 == uVar29) goto LAB_140d1adf1;
                    iVar13 = iVar13 + 0x20;
                    uVar31 = puVar43[uVar29 + 1];
                    uVar29 = uVar29 + 1;
                  } while (uVar31 == 0);
                }
                else {
                  uVar29 = 0;
                  iVar13 = 0;
                }
                uVar34 = (ulonglong)(-uVar31 & uVar31);
                uVar35 = uVar34 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar36 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar15 <= iVar36) {
                  iVar36 = iVar15;
                }
              }
              if (iVar36 < iVar15) {
                uVar31 = 0xffffffff;
                do {
                  lVar18 = *plVar42;
                  lVar40 = (longlong)iVar36 * 0x20;
                  uVar35 = (longlong)*(int *)(lVar17 + 0x50) - 1U &
                           (longlong)*(int *)(lVar18 + lVar40);
                  iVar15 = (int)uVar35;
                  *(int *)(lVar18 + 0x1c + lVar40) = iVar15;
                  lVar38 = *(longlong *)(lVar17 + 0x48);
                  if (*(longlong *)(lVar17 + 0x48) == 0) {
                    lVar38 = lVar39;
                  }
                  *(undefined4 *)(lVar18 + 0x18 + lVar40) =
                       *(undefined4 *)
                        (lVar38 + ((longlong)*(int *)(lVar17 + 0x50) - 1U & uVar35) * 4);
                  lVar18 = *(longlong *)(lVar17 + 0x48);
                  if (*(longlong *)(lVar17 + 0x48) == 0) {
                    lVar18 = lVar39;
                  }
                  *(int *)(lVar18 + ((longlong)iVar15 & (longlong)*(int *)(lVar17 + 0x50) - 1U) * 4)
                       = iVar36;
                  uVar31 = ~(uint)uVar34 & uVar31;
                  puVar43 = *(uint **)(lVar17 + 0x28);
                  if (*(uint **)(lVar17 + 0x28) == (uint *)0x0) {
                    puVar43 = local_470;
                  }
                  iVar15 = *(int *)(lVar17 + 0x30);
                  iVar36 = (int)uVar29;
                  lVar18 = (longlong)iVar36;
                  uVar32 = puVar43[lVar18] & uVar31;
                  if (uVar32 == 0) {
                    iVar27 = iVar15 + 0x1e;
                    if (-1 < iVar15 + -1) {
                      iVar27 = iVar15 + -1;
                    }
                    iVar27 = iVar27 >> 5;
                    iVar33 = iVar27;
                    if (iVar27 < iVar36) {
                      iVar33 = iVar36;
                    }
                    if (iVar27 <= iVar36) break;
                    lVar38 = 0;
                    while( true ) {
                      iVar13 = iVar13 + 0x20;
                      uVar32 = puVar43[lVar18 + lVar38 + 1];
                      if (uVar32 != 0) break;
                      lVar38 = lVar38 + 1;
                      if (iVar33 - lVar18 == lVar38) goto LAB_140d1adf1;
                    }
                    uVar29 = (ulonglong)(iVar36 + (int)lVar38 + 1);
                    uVar31 = 0xffffffff;
                  }
                  uVar34 = (ulonglong)(-uVar32 & uVar32);
                  uVar35 = uVar34 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar35 != 0) {
                    for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar36 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                } while (iVar36 < iVar15);
              }
            }
          }
LAB_140d1adf1:
          lVar39 = *plVar42 + local_420 * 0x20;
LAB_140d1ae09:
          param_1 = local_488;
          iVar15 = *(int *)(lVar39 + 0x10);
          *(uint *)(lVar39 + 0x10) = iVar15 + 1U;
          if (*(uint *)(lVar39 + 0x14) < iVar15 + 1U) {
            FUN_14100c5e2((longlong *)(lVar39 + 8),iVar15);
          }
          uVar31 = local_3e4;
          *(longlong **)(*(longlong *)(lVar39 + 8) + (longlong)iVar15 * 8) = plVar41;
          if (plVar41 != (longlong *)0x0) {
            iVar15 = (**(code **)(*local_438 + 0x38))(local_438,*local_450);
            lVar17 = FUN_1418e02fe(plVar41);
            if (((lVar17 == 0) || (lVar17 = (**(code **)(*param_1 + 0x180))(param_1), lVar17 == 0))
               || (plVar42 = (longlong *)FUN_140d7139d(lVar17,uVar31), plVar42 == (longlong *)0x0))
            {
LAB_140d1b08a:
              uVar11 = 0;
            }
            else {
              if (DAT_14cbae3d8 == 0) {
                local_c8._0_1_ = 0x22;
                local_c8._1_1_ = 0xf;
                local_c8._2_2_ = 0x4103;
                local_c8._4_4_ = 1;
                local_4a0 = FUN_14081d0ea;
                local_4a8 = &LAB_1464f5fc4;
                local_4b0 = &local_c8;
                local_4b8 = &LAB_148c3dd26;
                local_4c0 = &LAB_1459673ba;
                local_4c8 = L"Engine";
                local_4d0 = 0;
                local_4d8 = 0x10000004;
                local_4e0 = (undefined8 *)CONCAT44(local_4e0._4_4_,0x10);
                local_4e8 = (uint *)CONCAT44(local_4e8._4_4_,0x1360);
                FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
              }
              iVar36 = *(int *)(DAT_14cbae3d8 + 0x38);
              if ((*(int *)(plVar42[2] + 0x38) < iVar36) ||
                 (*(longlong *)(*(longlong *)(plVar42[2] + 0x30) + (longlong)iVar36 * 8) !=
                  DAT_14cbae3d8 + 0x30)) {
LAB_140d1aece:
                uVar11 = 0;
              }
              else {
                lVar17 = FUN_1401b2ade(plVar42,(longlong)iVar36,local_490);
                if (lVar17 == 0) {
LAB_140d1afea:
                  lVar17 = 0;
                }
                else {
                  if (DAT_14cb61cd0 == 0) {
                    local_c8._0_1_ = 0x22;
                    local_c8._1_1_ = 0xf;
                    local_c8._2_2_ = 0x4103;
                    local_c8._4_4_ = 1;
                    local_4a0 = FUN_14081d0ea;
                    local_4a8 = &LAB_1463b31ae;
                    local_4b0 = &local_c8;
                    local_4b8 = &LAB_1486dca4f;
                    local_4c0 = &LAB_1464f50a6;
                    local_4c8 = L"Game";
                    local_4d0 = 0;
                    local_4d8 = 0x10000004;
                    local_4e0 = (undefined8 *)CONCAT44(local_4e0._4_4_,8);
                    local_4e8 = (uint *)CONCAT44(local_4e8._4_4_,0xd70);
                    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,
                                  FUN_1464f5084);
                  }
                  if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) <
                       *(int *)(DAT_14cb61cd0 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
                  goto LAB_140d1afea;
                }
                if (((((*plVar41 == 0) || (lVar17 == 0)) || (*(char *)(*plVar41 + 0x138) == '\0'))
                    || (*(char *)(lVar17 + 0xd68) == '\x01')) &&
                   (lVar17 = (**(code **)(*plVar42 + 0x7e0))(plVar42,&DAT_14cb8dcf0), lVar17 != 0))
                {
                  lVar39 = FUN_1418e02fe(plVar41);
                  param_1 = local_488;
                  if ((lVar39 == 0) || (cVar12 = FUN_14095026a(lVar17,lVar39), cVar12 == '\0'))
                  goto LAB_140d1b08a;
                  lVar17 = *plVar41;
                  if ((lVar17 == 0) || (*(byte *)(lVar17 + 0x4a0) == 0)) {
                    iVar36 = 0;
                  }
                  else {
                    iVar36 = (int)*(undefined8 *)
                                   (*(longlong *)(lVar17 + 0x498) + -0x50 +
                                   (ulonglong)((uint)*(byte *)(lVar17 + 0x4a0) * 0x50));
                  }
                  if (iVar36 == iVar15) goto LAB_140d1aece;
                  *(undefined1 *)((longlong)local_490 + 0x11) = 1;
                  local_c8._0_1_ = 0xff;
                  (**(code **)(*local_438 + 0x48))(local_438,local_490[6],&local_c8,iVar36 - iVar15)
                  ;
                  if (((*plVar41 == 0) || (*(char *)(*plVar41 + 0x160) != '\x01')) &&
                     ((int)local_488[0x5d] != *(int *)((longlong)local_488 + 0x314))) {
                    plVar42 = (longlong *)local_488[100];
                    if ((longlong *)local_488[100] == (longlong *)0x0) {
                      plVar42 = local_410;
                    }
                    iVar15 = *(int *)((longlong)plVar42 +
                                     (ulonglong)((int)local_488[0x65] - 1U & local_42c) * 4);
                    if (iVar15 != -1) {
                      do {
                        lVar17 = local_488[0x5c] + (longlong)iVar15 * 0x20;
                        if (*(longlong **)(local_488[0x5c] + (longlong)iVar15 * 0x20) == plVar41) {
                          if (((lVar17 + 8U & 0xfffffffffffffff7) != 0) &&
                             (iVar15 = *(int *)(lVar17 + 0x10), (longlong)iVar15 != 0)) {
                            local_470 = *(uint **)(lVar17 + 8);
                            lVar17 = 0;
                            do {
                              plVar42 = *(longlong **)((longlong)local_470 + lVar17);
                              puVar23 = (ulonglong *)FUN_140d18446(local_488,uVar31,plVar42);
                              if (puVar23 != (ulonglong *)0x0) {
                                iVar13 = *(int *)((longlong)puVar23 + 0x14);
                                if (*(int *)((longlong)puVar23 + 0x14) < 1) {
                                  iVar13 = 0;
                                }
                                uVar32 = (**(code **)(*local_438 + 0x38))(local_438,(int)puVar23[3])
                                ;
                                local_4e8 = (uint *)CONCAT44(local_4e8._4_4_,uVar32);
                                local_4e0 = (undefined8 *)
                                            CONCAT71(local_4e0._1_7_,*puVar23 != (ulonglong)uVar32);
                                FUN_1440e6550(local_488,uVar31,puVar23,plVar42);
                                if ((*plVar42 != 0) && (*(char *)(*plVar42 + 0x11d) == '\x01')) {
                                  local_4e8 = (uint *)CONCAT71(local_4e8._1_7_,(char)iVar13);
                                  FUN_1440e670c(local_488,uVar31,puVar23,plVar42);
                                }
                              }
                              lVar17 = lVar17 + 8;
                            } while ((longlong)iVar15 * 8 != lVar17);
                          }
                          break;
                        }
                        iVar15 = *(int *)(lVar17 + 0x18);
                      } while (iVar15 != -1);
                    }
                  }
                  uVar11 = 1;
                  param_1 = local_488;
                  iVar15 = iVar36;
                }
                else {
                  uVar11 = 0;
                  param_1 = local_488;
                }
              }
            }
            local_4e0 = (undefined8 *)CONCAT71(local_4e0._1_7_,uVar11);
            local_4e8 = (uint *)CONCAT44(local_4e8._4_4_,iVar15);
            FUN_1440e6550(param_1,uVar31,local_490,plVar41);
            if ((*plVar41 != 0) && (*(char *)(*plVar41 + 0x11d) == '\x01')) {
              local_4e8 = (uint *)((ulonglong)local_4e8 & 0xffffffffffffff00);
              FUN_1440e670c(param_1,uVar31,local_490,plVar41);
            }
          }
          FUN_1440eac36(local_400,local_3e4,plVar41);
        }
        FUN_1409838b8(&local_3e0);
        uVar29 = local_3f0;
        plVar25 = local_478;
        plVar42 = local_480;
        puVar43 = local_3f8;
      }
      iVar15 = *(int *)(local_418 + 0x11c);
      uVar34 = (ulonglong)*puVar43;
LAB_140d1b12b:
      uVar29 = uVar29 + 1;
      uVar31 = (int)uVar34 + iVar15;
    } while ((int)uVar29 < (int)uVar31);
  }
  *puVar43 = uVar31;
LAB_140d1ba48:
  if ((local_70 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1c3ca FUN_140d1c3ca body=614 status=ok
// SIG undefined FUN_140d1c3ca(void)

void FUN_140d1c3ca(longlong *param_1)

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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140d1c444;
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
LAB_140d1c444:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar13 = 0;
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
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



// FUNCTION 140d1c630 FUN_140d1c630 body=537 status=ok
// SIG undefined FUN_140d1c630(void)

void FUN_140d1c630(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar10 = local_58 >> 0x20;
    }
    iVar6 = (int)local_58;
    uVar7 = (uint)local_48;
    iVar8 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar8 * 0x20;
        uVar5 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar13 + lVar12);
        *(uint *)(lVar13 + 0x1c + lVar12) = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x18 + lVar12) =
             *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4) = iVar8;
        uVar7 = ~(uint)uVar10 & uVar7;
        plVar9 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar9 = local_50;
        }
        iVar3 = (int)local_50[3];
        lVar13 = (longlong)iVar6;
        uVar5 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar7;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar4 - lVar13 == lVar12) goto LAB_140d1c804;
          }
          iVar6 = iVar6 + (int)lVar12 + 1;
          uVar7 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_140d1c804:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1c84a FUN_140d1c84a body=156 status=ok
// SIG undefined FUN_140d1c84a(void)

undefined1 FUN_140d1c84a(longlong *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined1 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_59;
  local_59 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b964480;
  local_58[0] = FUN_1440ea7d8;
  local_30 = param_2;
  FUN_140cf3304(*param_1 + 0x168,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_59;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1c8e8 FUN_140d1c8e8 body=3610 status=ok
// SIG undefined FUN_140d1c8e8(void)

void FUN_140d1c8e8(longlong *param_1,uint param_2,longlong *param_3,ulonglong *param_4,char *param_5
                  )

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  code *pcVar22;
  bool bVar23;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  int local_f4;
  int local_f0;
  undefined1 local_e9;
  ulonglong local_e8;
  uint local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  uint *local_c0;
  longlong local_b8;
  code *local_b0;
  undefined1 local_a5;
  short local_a4 [2];
  ulonglong local_a0;
  code *local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined **local_68;
  code **local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x1f0), plVar4 != (longlong *)0x0)) {
    if (DAT_14cb5e538 == 0) {
      local_110 = &local_88;
      local_88 = (code *)&LAB_1417c5d06;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_1417ad04a;
      local_118 = &LAB_1486a7af7;
      local_120 = &LAB_1464e1631;
      local_128 = L"Game";
      local_130 = 0;
      local_138 = 0x1000000c;
      local_140 = 8;
      local_148 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
      if (*(code **)(*plVar4 + 0x498) == (code *)&LAB_14015c36e) {
        cVar2 = (char)plVar4[0x42];
      }
      else {
        cVar2 = (**(code **)(*plVar4 + 0x498))(plVar4);
      }
      if (((cVar2 == '\b') &&
          (plVar4 = (longlong *)FUN_140d1799c(param_1,param_2), plVar4 != (longlong *)0x0)) &&
         (uVar16 = (ulonglong)*(uint *)(param_5 + 0x22c), param_3 != (longlong *)0x0 && uVar16 != 0)
         ) {
        lVar17 = *param_3;
        if (lVar17 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = *(char *)(lVar17 + 0x160);
        }
        if (((param_4 != (ulonglong *)0x0) && (cVar2 == *param_5)) &&
           ((iVar14 = (int)param_4[3], iVar14 != -1 &&
            ((*(char *)((longlong)param_4 + 0x11) == '\0' && ((char)param_4[5] == '\x01')))))) {
          if ((lVar17 == 0) ||
             ((*(byte *)(lVar17 + 0x4a0) == 0 ||
              (*(ulonglong *)
                (*(longlong *)(lVar17 + 0x498) + -0x50 +
                (ulonglong)((uint)*(byte *)(lVar17 + 0x4a0) * 0x50)) <= *param_4)))) {
            *(undefined1 *)((longlong)param_4 + 0x11) = 1;
          }
          else {
            local_a5 = 0xff;
            switch((byte)(*(char *)(lVar17 + 0x160) - 10U) >> 1 | *(char *)(lVar17 + 0x160) << 7) {
            case 0:
              if (*(char *)(lVar17 + 0x322) != '\x01') goto switchD_140d1cba2_caseD_1;
              local_a0 = CONCAT44(local_a0._4_4_,param_2);
              lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
              if ((((lVar3 != 0) && (lVar3 = FUN_1400f6f32(lVar3), lVar3 != 0)) &&
                  (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) &&
                 ((FUN_140d173bc(lVar3,local_a4,param_2), -1 < local_a4[0] &&
                  (lVar3 = FUN_140d71416(lVar3,local_a4), lVar3 != 0)))) {
                if (DAT_14cbae3d8 == 0) {
                  local_110 = &local_98;
                  local_98 = FUN_141030f22;
                  local_100 = FUN_14081d0ea;
                  local_108 = &LAB_1464f5fc4;
                  local_118 = &LAB_148c3dd26;
                  local_120 = &LAB_1459673ba;
                  local_128 = L"Engine";
                  local_130 = 0;
                  local_138 = 0x10000004;
                  local_140 = 0x10;
                  local_148 = 0x1360;
                  FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
                }
                if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38))
                   && (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
                  plVar5 = (longlong *)FUN_1401b2ade(lVar3);
                  if ((plVar5 != (longlong *)0x0) &&
                     (((char)plVar5[0x2f] == '\x03' &&
                      (cVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar2 != '\0')))) {
                    plVar5 = (longlong *)FUN_148d0002c(param_1 + 200,param_2,&local_a0);
                    if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
                      uVar13 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)param_3 >> 4)) * -0x7a143595;
                      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                      plVar9 = plVar5 + 7;
                      if ((longlong *)plVar5[8] != (longlong *)0x0) {
                        plVar9 = (longlong *)plVar5[8];
                      }
                      iVar14 = *(int *)((longlong)plVar9 +
                                       (ulonglong)((int)plVar5[9] - 1U & (uVar13 >> 0x10 ^ uVar13))
                                       * 4);
                      if (iVar14 != -1) {
                        do {
                          if (*(longlong **)(*plVar5 + (longlong)iVar14 * 0x10) == param_3)
                          goto LAB_140d1cca5;
                          iVar14 = *(int *)((longlong)iVar14 * 0x10 + *plVar5 + 8);
                        } while (iVar14 != -1);
                      }
                    }
                    FUN_148cfcea2(param_1,local_a0 & 0xffffffff,param_3);
                  }
LAB_140d1cca5:
                  lVar17 = *param_3;
                  iVar14 = 0;
                  if ((lVar17 == 0) || (iVar14 = 0, *(char *)(lVar17 + 0x160) != '\n')) {
LAB_140d1cecb:
                    cVar2 = FUN_148dc1bec(lVar3,param_3,iVar14);
                    if (cVar2 == '\0') {
                      FUN_148dc1ae0(lVar3,param_3,iVar14);
                    }
                    if (*param_3 == 0) {
                      local_98 = (code *)0x0;
                    }
                    else {
                      puVar12 = *(undefined4 **)(*param_3 + 8);
                      puVar21 = &DAT_14c9485f0;
                      if (puVar12 != (undefined4 *)0x0) {
                        puVar21 = puVar12;
                      }
                      if (DAT_14c947fe0 == 0) {
                        lVar17 = FUN_14001cc68(0x140,0x10);
                        FUN_1456b2032(lVar17);
                        DAT_14c947fe0 = lVar17;
                      }
                      FUN_140045924(DAT_14c947fe0,&local_98,puVar21,1);
                    }
                    lVar3 = FUN_148dc1c9c(lVar3,&local_98);
                    local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
                    local_78 = 0;
                    local_68 = &PTR_LAB_14b964530;
                    local_88 = (code *)&LAB_1440eab6e;
                    local_60 = &local_98;
                    FUN_1488b0f5e(lVar3 + 8);
                    uVar16 = (ulonglong)(int)local_98;
                    iVar14 = (int)param_4[3];
                    goto switchD_140d1cba2_caseD_4;
                  }
                  if ((longlong)*(int *)(lVar17 + 0x330) != 0) {
                    uVar16 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar17 + 0x328) + uVar16) ==
                          *(longlong *)(param_5 + 300)) {
                        iVar14 = (int)(uVar16 >> 3) * -0x55555555;
                        if (iVar14 != -1) goto LAB_140d1cecb;
                        break;
                      }
                      uVar16 = uVar16 + 0x18;
                    } while ((longlong)*(int *)(lVar17 + 0x330) * 0x18 != uVar16);
                  }
                }
              }
              break;
            case 4:
            case 8:
switchD_140d1cba2_caseD_4:
              (**(code **)(*plVar4 + 0x50))(plVar4,iVar14,uVar16);
              break;
            case 7:
              plVar5 = (longlong *)FUN_140d7139d(lVar3,param_2);
              if (plVar5 == (longlong *)0x0) {
LAB_140d1cd3c:
                iVar14 = (int)param_4[3];
              }
              else {
                if (DAT_14cbae3d8 == 0) {
                  local_110 = &local_88;
                  local_88 = FUN_141030f22;
                  local_100 = FUN_14081d0ea;
                  local_108 = &LAB_1464f5fc4;
                  local_118 = &LAB_148c3dd26;
                  local_120 = &LAB_1459673ba;
                  local_128 = L"Engine";
                  local_130 = 0;
                  local_138 = 0x10000004;
                  local_140 = 0x10;
                  local_148 = 0x1360;
                  FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
                }
                if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8
                     ) != DAT_14cbae3d8 + 0x30)) goto LAB_140d1cd3c;
                local_98 = (code *)0x0;
                uStack_90 = 0;
                FUN_1459c806e(param_3,&local_98,plVar5);
                local_f4 = -1;
                if (((int)uStack_90 != 0) &&
                   (local_b8 = (**(code **)(*plVar5 + 0x7e0))(plVar5,&DAT_14cb8dcf0), local_b8 != 0)
                   ) {
                  local_78 = 0;
                  uStack_70 = 0;
                  local_88 = (code *)0x0;
                  uStack_80 = 0;
                  FUN_146621e34(param_3);
                  if ((longlong)(int)uStack_90 == 0) {
                    local_f4 = 0;
                  }
                  else {
                    local_b0 = local_98 + (longlong)(int)uStack_90 * 8;
                    local_f4 = 0;
                    pcVar22 = local_98;
                    do {
                      lVar3 = *(longlong *)pcVar22;
                      if (lVar3 != 0) {
                        local_a0 = 0;
                        puVar12 = *(undefined4 **)(lVar3 + 8);
                        if (puVar12 == (undefined4 *)0x0) {
                          puVar12 = &DAT_14c9485f0;
                        }
                        FUN_1489ad95c(local_b8,puVar12,&local_a0);
                        local_d8 = local_a0;
                        if (local_a0 != 0) {
                          if (*(char *)(lVar3 + 0x24) == '\x01') {
                            uVar13 = *(uint *)(local_a0 + 0x48);
                            lVar3 = local_a0 + 0x30;
                            if (*(longlong *)(local_a0 + 0x40) != 0) {
                              lVar3 = *(longlong *)(local_a0 + 0x40);
                            }
                            uVar8 = 0xffffffff >> (-(char)((int)uVar13 % 0x20) & 0x1fU);
                            if ((int)uVar13 % 0x20 < 1) {
                              uVar8 = 0xffffffff;
                            }
                            if ((int)uVar13 < 1) {
                              iVar14 = 0;
                            }
                            else {
                              uVar16 = (ulonglong)uVar13 + 0x1f >> 5;
                              uVar19 = 0xffffffff;
                              if (uVar13 < 0x21) {
                                uVar19 = uVar8;
                              }
                              local_e8 = uVar16 - 2;
                              uVar18 = 0;
                              iVar14 = 0;
                              do {
                                uVar19 = uVar19 & *(uint *)(lVar3 + uVar18 * 4);
                                uVar20 = (ulonglong)uVar19 - (ulonglong)(uVar19 >> 1 & 0x55555555);
                                uVar20 = (uVar20 >> 2 & 0x3333333333333333) +
                                         (uVar20 & 0x3333333333333333);
                                iVar14 = iVar14 + (uint)(byte)(((uVar20 >> 4) + uVar20 &
                                                               0xf0f0f0f0f0f0f0f) *
                                                               0x101010101010101 >> 0x38);
                                bVar23 = local_e8 == uVar18;
                                uVar18 = uVar18 + 1;
                                uVar19 = 0xffffffff;
                                if (bVar23) {
                                  uVar19 = uVar8;
                                }
                              } while (uVar16 != uVar18);
                            }
                            local_f4 = local_f4 + iVar14;
                          }
                          else if ((int)uStack_80 == 0) {
                            local_f4 = (local_f4 + *(int *)(local_a0 + 0x58)) -
                                       *(int *)(local_a0 + 0x84);
                          }
                          else {
                            local_c0 = (uint *)(local_a0 + 0x60);
                            uVar13 = *(uint *)(local_a0 + 0x78);
                            local_d0 = (ulonglong)uVar13;
                            if (uVar13 == 0) {
                              local_c8 = 1;
                              local_e8 = 0;
                              uVar16 = 0;
                              local_f0 = 0;
                            }
                            else {
                              puVar6 = *(uint **)(local_a0 + 0x70);
                              if (*(uint **)(local_a0 + 0x70) == (uint *)0x0) {
                                puVar6 = local_c0;
                              }
                              uVar8 = *puVar6;
                              if (uVar8 == 0) {
                                local_e8 = 0;
                                local_f0 = 0;
                                do {
                                  iVar14 = uVar13 + 0x1e;
                                  if (-1 < (int)(uVar13 - 1)) {
                                    iVar14 = uVar13 - 1;
                                  }
                                  uVar8 = iVar14 >> 5;
                                  if (iVar14 >> 5 < 1) {
                                    uVar8 = 0;
                                  }
                                  if (local_e8 == uVar8) goto LAB_140d1cfe9;
                                  local_f0 = local_f0 + 0x20;
                                  uVar8 = puVar6[local_e8 + 1];
                                  local_e8 = local_e8 + 1;
                                } while (uVar8 == 0);
                              }
                              else {
                                local_e8 = 0;
                                local_f0 = 0;
                              }
                              local_c8 = (ulonglong)(-uVar8 & uVar8);
                              uVar16 = local_c8 * 2 + 1;
                              lVar3 = 0x3f;
                              if (uVar16 != 0) {
                                for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                                }
                              }
                              uVar8 = (local_f0 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
                              uVar16 = (ulonglong)uVar8;
                              if ((int)uVar13 <= (int)uVar8) {
                                uVar16 = local_d0;
                              }
                            }
                            if ((uint)uVar16 != uVar13) {
                              local_dc = 0xffffffff;
                              do {
                                uVar18 = local_d8;
                                bVar1 = FUN_1410a8654(*(longlong *)
                                                       (*(longlong *)(local_d8 + 0x50) +
                                                       (longlong)(int)uVar16 * 0x10) + 0x40,
                                                      &local_88);
                                local_e9 = (int)uStack_80 != 0;
                                local_dc = ~(uint)local_c8 & local_dc;
                                puVar6 = *(uint **)(uVar18 + 0x70);
                                if (puVar6 == (uint *)0x0) {
                                  puVar6 = local_c0;
                                }
                                uVar13 = *(uint *)(uVar18 + 0x78);
                                uVar16 = (ulonglong)uVar13;
                                lVar3 = (longlong)(int)local_e8;
                                uVar8 = puVar6[lVar3] & local_dc;
                                if (uVar8 == 0) {
                                  iVar14 = uVar13 + 0x1e;
                                  if (-1 < (int)(uVar13 - 1)) {
                                    iVar14 = uVar13 - 1;
                                  }
                                  iVar14 = iVar14 >> 5;
                                  local_f0 = local_f0 + 0x20;
                                  iVar10 = iVar14;
                                  if (iVar14 < (int)local_e8) {
                                    iVar10 = (int)local_e8;
                                  }
                                  if ((int)local_e8 < iVar14) {
                                    lVar17 = 0;
                                    do {
                                      uVar8 = puVar6[lVar3 + lVar17 + 1];
                                      if (uVar8 != 0) {
                                        local_e8 = (ulonglong)((int)local_e8 + (int)lVar17 + 1);
                                        local_dc = 0xffffffff;
                                        goto LAB_140d1d32c;
                                      }
                                      local_f0 = local_f0 + 0x20;
                                      lVar17 = lVar17 + 1;
                                    } while (iVar10 - lVar3 != lVar17);
                                    local_dc = 0xffffffff;
                                    local_e8 = (longlong)iVar10 + 1;
                                  }
                                  else {
                                    local_e8 = lVar3 + 1;
                                  }
                                }
                                else {
LAB_140d1d32c:
                                  local_c8 = (ulonglong)(-uVar8 & uVar8);
                                  uVar16 = local_c8 * 2 + 1;
                                  lVar3 = 0x3f;
                                  if (uVar16 != 0) {
                                    for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                                    }
                                  }
                                  uVar8 = (local_f0 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
                                  if ((int)uVar13 <= (int)uVar8) {
                                    uVar8 = uVar13;
                                  }
                                  uVar16 = (ulonglong)uVar8;
                                }
                                local_f4 = local_f4 + (uint)(bVar1 & local_e9);
                              } while ((int)uVar16 != (int)local_d0);
                            }
                          }
                        }
                      }
LAB_140d1cfe9:
                      pcVar22 = pcVar22 + 8;
                    } while (pcVar22 != local_b0);
                  }
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_88 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                }
                if (local_98 != (code *)0x0) {
                  FUN_1400020a8();
                }
                iVar14 = (int)param_4[3];
                if (local_f4 != -1) {
                  uVar16 = (ulonglong)local_f4;
                  goto switchD_140d1cba2_caseD_4;
                }
              }
              uVar16 = (ulonglong)*(uint *)(param_5 + 0x22c);
            default:
switchD_140d1cba2_caseD_1:
              (**(code **)(*plVar4 + 0x48))(plVar4,iVar14,&local_a5,uVar16);
            }
            lVar3 = *param_3;
            if (((lVar3 != 0) && (*(char *)(lVar3 + 0x139) == '\x01')) &&
               (-1 < *(int *)(lVar3 + 0x13c))) {
              FUN_148cfd17a(param_1,param_2,*(int *)(lVar3 + 0x13c),*(undefined1 *)(lVar3 + 0x144));
            }
          }
        }
      }
    }
  }
  if ((int)param_1[0x7c] != *(int *)((longlong)param_1 + 0x40c)) {
    plVar4 = param_1 + 0x82;
    if ((longlong *)param_1[0x83] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x83];
    }
    iVar14 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x84] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar3 = param_1[0x7b];
      iVar10 = iVar14;
      do {
        iVar11 = iVar14;
        if (*(uint *)(lVar3 + (longlong)iVar10 * 0x60) == param_2) goto LAB_140d1c9cf;
        iVar10 = *(int *)((longlong)iVar10 * 0x60 + lVar3 + 0x58);
      } while (iVar10 != -1);
    }
  }
LAB_140d1ca78:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar11 = *(int *)(lVar17 + 0x58), *(int *)(lVar17 + 0x58) != -1) {
LAB_140d1c9cf:
    lVar17 = lVar3 + (longlong)iVar11 * 0x60;
    if (*(uint *)(lVar3 + (longlong)iVar11 * 0x60) == param_2) goto LAB_140d1c9ee;
  }
  lVar17 = 0;
LAB_140d1c9ee:
  if (*(int *)(lVar17 + 0x10) != *(int *)(lVar17 + 0x3c)) {
    uVar13 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    lVar15 = lVar17 + 0x40;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      lVar15 = *(longlong *)(lVar17 + 0x48);
    }
    iVar10 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar17 + 0x50) - 1U & (uVar13 >> 0x10 ^ uVar13))
                               * 4);
    if (iVar10 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(lVar17 + 8) + (longlong)iVar10 * 0x18);
        if ((longlong *)*plVar4 == param_3) goto LAB_140d1ca6e;
        iVar10 = (int)plVar4[2];
      } while (iVar10 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140d1ca6e:
  if ((ulonglong *)plVar4[1] != param_4) {
    do {
      lVar17 = lVar3 + (longlong)iVar14 * 0x60;
      if (*(uint *)(lVar3 + (longlong)iVar14 * 0x60) == param_2) goto LAB_140d1d4db;
      iVar14 = *(int *)(lVar17 + 0x58);
    } while (iVar14 != -1);
    lVar17 = 0;
LAB_140d1d4db:
    if (*(int *)(lVar17 + 0x10) != *(int *)(lVar17 + 0x3c)) {
      uVar13 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      lVar3 = lVar17 + 0x40;
      if (*(longlong *)(lVar17 + 0x48) != 0) {
        lVar3 = *(longlong *)(lVar17 + 0x48);
      }
      iVar14 = *(int *)(lVar3 + (ulonglong)
                                (*(int *)(lVar17 + 0x50) - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
      if (iVar14 != -1) {
        do {
          puVar7 = (undefined8 *)(*(longlong *)(lVar17 + 8) + (longlong)iVar14 * 0x18);
          if ((longlong *)*puVar7 == param_3) goto LAB_140d1d4e5;
          iVar14 = *(int *)(puVar7 + 2);
        } while (iVar14 != -1);
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_140d1d4e5:
    puVar7[1] = param_4;
  }
  goto LAB_140d1ca78;
}



// FUNCTION 140d1d704 FUN_140d1d704 body=224 status=ok
// SIG undefined FUN_140d1d704(void)

undefined8 FUN_140d1d704(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_3 == '\x01') {
    if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar5 = uVar1;
      if ((int)uVar4 < (int)uVar1) {
        uVar5 = uVar4;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          if ((*(ulonglong *)(*(longlong *)(param_2 + 0x10) + uVar6 * 8) &
              ~*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8)) != 0) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      if ((int)uVar1 <= (int)uVar4) {
        return 1;
      }
      lVar3 = 0;
      while (*(longlong *)((longlong)(int)uVar4 * 8 + *(longlong *)(param_2 + 0x10) + lVar3 * 8) ==
             0) {
        lVar3 = lVar3 + 1;
        if (uVar1 - uVar4 == (int)lVar3) {
          return 1;
        }
      }
    }
  }
  else if (param_3 == '\0') {
    if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
      uVar4 = *(uint *)(param_2 + 0x18);
      if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
        uVar4 = *(uint *)(param_1 + 0x18);
      }
      if (0 < (int)uVar4) {
        uVar6 = 0;
        do {
          if ((*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8) &
              *(ulonglong *)(*(longlong *)(param_2 + 0x10) + uVar6 * 8)) != 0) {
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
      }
    }
  }
  else if ((param_3 == '\x02') && (cVar2 = FUN_144b082da(), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d1d7e4 FUN_140d1d7e4 body=448 status=ok
// SIG undefined FUN_140d1d7e4(void)

longlong * FUN_140d1d7e4(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbca068 == (longlong *)0x0) {
    FUN_145f98f38(&DAT_14cbca070);
    DAT_14cbca068 = (longlong *)&DAT_14cbca070;
  }
  plVar3 = DAT_14cbca068;
  plVar2 = DAT_14cbca068 + 1;
  cVar4 = (char)DAT_14cbca068[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_140d1d818:
    if (*plVar6 == 0) goto LAB_140d1d8de;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_140d1d829:
      if (*plVar6 == 0) goto LAB_140d1d87f;
      if ((((int)DAT_14cbca068[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_140d1d83d;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_140d1d83d;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cbca068);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_140d1d829;
      }
LAB_140d1d87f:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_140d1d83d;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_140d1d83d;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cbca068);
    }
    if (cVar4 == '\0') goto LAB_140d1d83d;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_140d1d818;
    }
LAB_140d1d8de:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_140d1d83d;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_end_game",0);
    FUN_140024ada(&local_48,plVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_140d1d83d:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 140d1d9a6 FUN_140d1d9a6 body=1295 status=ok
// SIG undefined FUN_140d1d9a6(void)

void FUN_140d1d9a6(undefined8 *param_1,float param_2,longlong *param_3)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 unaff_R13;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(float *)((longlong)param_1 + 0x24) <= 0.0) || (param_1[3] == 0)) goto LAB_140d1dd9f;
  if ((param_1[7] != 0) && ((param_1[8] != 0 && (0 < *(int *)(param_1[8] + 8))))) {
    FUN_1401cb356();
    local_80 = param_1[7];
    local_78 = param_1[8];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0xc) = *(int *)(local_78 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_80);
    plVar10 = (longlong *)param_1[8];
    param_1[7] = 0;
    param_1[8] = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  lVar6 = (**(code **)(*param_3 + 0x180))(param_3);
  if (lVar6 == 0) goto LAB_140d1dd9f;
  dVar2 = *(double *)(lVar6 + 0x6d0);
  dVar18 = (double)param_2;
  if (dVar2 <= (double)param_2) {
    dVar18 = dVar2;
  }
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  fVar19 = (float)(dVar2 - (double)(float)dVar18);
  iVar9 = *(int *)(param_1 + 6);
  if ((longlong)iVar9 < 1) {
    iVar12 = 1;
  }
  else {
    iVar16 = -iVar9;
    iVar12 = 1;
    uVar15 = (longlong)iVar9;
    do {
      lVar6 = param_1[5];
      if (fVar19 <= *(float *)(lVar6 + -4 + uVar15 * 4) + *(float *)((longlong)param_1 + 0x24)) {
        iVar12 = iVar12 + 1;
      }
      else {
        uVar13 = *(uint *)(param_1 + 6);
        if (uVar15 != uVar13) {
          memmove((void *)(lVar6 + uVar15 * 4 + -4),(void *)(lVar6 + uVar15 * 4),
                  (longlong)(int)(iVar16 + uVar13) << 2);
          uVar13 = *(uint *)(param_1 + 6);
        }
        *(uint *)(param_1 + 6) = uVar13 - 1;
        FUN_1401fef06(param_1 + 5);
      }
      iVar16 = iVar16 + 1;
      bVar17 = 1 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar17);
    iVar9 = *(int *)(param_1 + 6);
  }
  *(uint *)(param_1 + 6) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar9 + 1U) {
    FUN_14475e4ac(param_1 + 5,iVar9);
  }
  *(float *)(param_1[5] + (longlong)iVar9 * 4) = fVar19;
  if (*(int *)(param_1 + 4) <= iVar12) {
    FUN_1440eac36(&DAT_14cbc9990,*(undefined4 *)(param_1 + 2),param_1[3]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
  }
  plVar10 = (longlong *)param_1[1];
  uVar14 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  uVar13 = 0;
  if (plVar10 == (longlong *)0x0) {
LAB_140d1db91:
    local_b0 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar10[1];
    do {
      if (iVar9 == 0) goto LAB_140d1db91;
      LOCK();
      iVar12 = (int)plVar10[1];
      bVar17 = iVar9 == iVar12;
      if (bVar17) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar12 = iVar9;
      }
      iVar9 = iVar12;
      UNLOCK();
    } while (!bVar17);
    local_b0 = *param_1;
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    uVar14 = 0;
  }
  uVar15 = 0;
  if (param_3 != (longlong *)0x0) {
    uVar13 = *(uint *)((longlong)param_3 + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar15 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar5 = *(uint *)(lVar6 + 0x10);
      bVar17 = uVar5 == 0;
      if (bVar17) {
        *(uint *)(lVar6 + 0x10) = uVar11;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar5 = uVar11;
      }
      uVar15 = (ulonglong)uVar5;
    }
  }
  uVar7 = FUN_1401cb356();
  fVar19 = *(float *)((longlong)param_1 + 0x24);
  if ((char)uVar14 == '\0') {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
  }
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  local_a4 = uVar14;
  FUN_1446efa72(&local_a0,0,4,0x10);
  puVar4 = local_a0;
  local_98 = 4;
  *local_a0 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_a0[2] = lVar8;
  *local_a0 = &PTR_FUN_14b96d590;
  local_a0[3] = 0;
  iVar9 = 0;
  if (param_3 != (longlong *)0x0) {
    uVar11 = *(uint *)((longlong)param_3 + 0xc);
    *(uint *)(local_a0 + 3) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar9 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar6 + 0x10);
      bVar17 = iVar9 == 0;
      if (bVar17) {
        *(int *)(lVar6 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar9 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar9;
  puVar4[4] = local_b0;
  puVar4[5] = plVar10;
  puVar4[6] = uVar15 << 0x20 | (ulonglong)uVar13;
  local_b8 = fVar19 - (float)dVar18;
  FUN_1405f67fc(uVar7,&local_90,&local_a0,L"FOakTimedChallengeEvent.ClearCombo");
  uVar14 = local_a4;
  param_1[7] = local_90;
  local_90 = 0;
  plVar3 = (longlong *)param_1[8];
  param_1[8] = local_88;
  local_88 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
  }
  if (local_98 == 0) {
LAB_140d1dd7d:
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,0);
    FUN_1446efa72(&local_a0,0,0,0x10);
    local_98 = 0;
    goto LAB_140d1dd7d;
  }
  if ((char)uVar14 == '\0') {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_140d1dd9f:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d1dede FUN_140d1dede body=456 status=ok
// SIG undefined FUN_140d1dede(void)

void FUN_140d1dede(ulonglong *param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 local_58 [2];
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == '\0') {
    local_b0 = local_98;
    local_98[0] = 0;
    local_88 = 0;
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    local_a8 = 0;
    FUN_1431f157f(param_1,param_3,param_4,param_5);
  }
  else {
    local_b0 = local_58;
    local_58[0] = 0;
    local_48 = 0;
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    local_a8 = 0;
    FUN_140d1e0a7(param_1,param_3,param_4);
  }
  uVar1 = DAT_14ca85ce8;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 5;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x30);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 5;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = uVar1;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 4;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x28);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 4;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fc200;
  puVar2[2] = 0x200000000;
  *(undefined4 *)(puVar2 + 3) = 1;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1e0a7 FUN_140d1e0a7 body=2191 status=ok
// SIG undefined FUN_140d1e0a7(void)

void FUN_140d1e0a7(ulonglong *param_1,uint param_2,void *param_3,char param_4,undefined8 param_5,
                  char param_6,undefined4 param_7,longlong *param_8,byte param_9)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined1 local_2b0 [8];
  undefined8 local_2a8 [40];
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [13];
  undefined3 uStack_8f;
  undefined1 auStack_8c [13];
  undefined1 local_78 [16];
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  plVar6 = param_8;
  uVar11 = DAT_14c9c0d50;
  bVar4 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_140d1e830;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if (bVar4 != 0) goto LAB_140d1e830;
  puVar9 = &DAT_14ca007a8;
  if (param_6 == '\0') {
    puVar9 = &DAT_14c9c0c60;
  }
  puVar16 = &DAT_14c9c0d98;
  if (param_6 != '\0') {
    puVar16 = &DAT_14ca90e98;
  }
  if (param_4 == '\0') {
    puVar9 = puVar16;
  }
  uVar1 = *puVar9;
  uVar22 = 0;
  local_d8 = 0;
  local_e8 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_cc = (undefined1  [16])0x0;
  local_bc = (undefined1  [16])0x0;
  local_ac = (undefined1  [16])0x0;
  local_9c = SUB1613((undefined1  [16])0x0,0);
  uStack_8f = 0;
  auStack_8c = SUB1613((undefined1  [16])0x0,3);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  local_2c0 = param_3;
  FUN_144b0e33a(param_1,local_128);
  local_f8._8_8_ = DAT_14c9c0db0;
  local_f8._0_8_ = uVar11;
  local_e8._0_8_ = uVar1;
  plVar13 = *(longlong **)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_1415e141e();
  uVar15 = 0;
  lVar21 = 0;
  if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
    plVar14 = plVar13 + 7;
    if ((longlong *)plVar13[8] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar13[8];
    }
    iVar12 = *(int *)((longlong)plVar14 +
                     (ulonglong)
                     ((int)plVar13[9] - 1U &
                     (int)DAT_14ca90940 + (int)((ulonglong)DAT_14ca90940 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        plVar14 = (longlong *)(*plVar13 + (longlong)iVar12 * 0x18);
        if (*plVar14 == DAT_14ca90940) {
          uVar15 = 0;
          if (plVar14 != (longlong *)0x0) {
            lVar21 = 0;
            if (plVar14 + 1 == (longlong *)0x0) goto LAB_140d1e3c1;
            lVar21 = plVar14[1];
            puVar2 = *(ulonglong **)(lVar21 + 0x28);
            lVar23 = ((ulonglong)(DAT_14ca90938 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14ca90938 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar15 = puVar2[3];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar2 + ((longlong)uVar15 >> 0x18) + 0x18;
            }
            uVar19 = puVar2[5];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar2 + ((longlong)uVar19 >> 0x18) + 0x28;
            }
            uVar17 = puVar2[1];
            if ((uVar17 & 1) != 0) {
              uVar17 = (longlong)puVar2 + ((longlong)uVar17 >> 0x18) + 8;
            }
            uVar20 = *puVar2;
            if ((uVar20 & 1) != 0) {
              uVar20 = ((longlong)uVar20 >> 0x18) + (longlong)puVar2;
            }
            uVar18 = *(uint *)(uVar20 + (ulonglong)
                                        ((uint)puVar2[2] &
                                         ((uint)((ulonglong)lVar23 >> 0x2f) ^ (uint)lVar23) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar18 != 0xffffffff) {
              goto LAB_140d1e370;
            }
          }
          break;
        }
        iVar12 = (int)plVar14[2];
      } while (iVar12 != -1);
    }
    goto LAB_140d1e38c;
  }
  goto LAB_140d1e3c1;
  while (uVar22 = *(uint *)(uVar20 + uVar24 * 4), uVar22 != 0xffffffff) {
LAB_140d1e546:
    uVar24 = (ulonglong)uVar22;
    if ((*(ulonglong *)(uVar19 + uVar24 * 8) == DAT_14ca90b88) &&
       (*(int *)(uVar17 + uVar24 * 4) == iVar8)) {
      uVar17 = puVar2[7];
      if ((uVar17 & 1) != 0) {
        uVar17 = (longlong)(puVar2 + 7) + ((longlong)uVar17 >> 0x18);
      }
      uVar19 = *(ulonglong *)(uVar17 + (longlong)(int)uVar22 * 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + uVar17 + (longlong)(int)uVar22 * 8;
      }
      if (uVar19 != 0) goto LAB_140d1e596;
      break;
    }
  }
  goto LAB_140d1e562;
  while (uVar18 = *(uint *)(uVar17 + uVar20 * 4), uVar18 != 0xffffffff) {
LAB_140d1e370:
    uVar20 = (ulonglong)uVar18;
    if ((*(longlong *)(uVar15 + uVar20 * 8) == DAT_14ca90938) &&
       (*(int *)(uVar19 + uVar20 * 4) == 0)) {
      uVar19 = puVar2[7];
      if ((uVar19 & 1) != 0) {
        uVar19 = (longlong)(puVar2 + 7) + ((longlong)uVar19 >> 0x18);
      }
      uVar15 = *(ulonglong *)(uVar19 + (longlong)(int)uVar18 * 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = ((longlong)uVar15 >> 0x18) + uVar19 + (longlong)(int)uVar18 * 8;
      }
      if (uVar15 != 0) goto LAB_140d1e3c1;
      break;
    }
  }
LAB_140d1e38c:
  uVar15 = 0;
  lVar21 = 0;
LAB_140d1e3c1:
  FUN_1415e141e();
  if ((local_cc[4] < 0x12) && ((0x22002U >> (local_cc[4] & 0x1f) & 1) != 0)) {
    uVar22 = *(uint *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85550 * 0x3c) >> 0x1a & 8;
  }
  local_2b8 = uVar15;
  local_2b0 = (undefined1  [8])lVar21;
  FUN_1415d5bd2();
  if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
    plVar14 = plVar13 + 7;
    if ((longlong *)plVar13[8] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar13[8];
    }
    iVar12 = *(int *)((longlong)plVar14 +
                     (ulonglong)
                     ((int)plVar13[9] - 1U &
                     (int)DAT_14ca90b90 + (int)((ulonglong)DAT_14ca90b90 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      iVar8 = param_2 + (param_2 == 0) + (uint)param_9 * 0x10 + uVar22 + -1;
      do {
        plVar14 = (longlong *)(*plVar13 + (longlong)iVar12 * 0x18);
        if (*plVar14 == DAT_14ca90b90) {
          uVar19 = 0;
          if (plVar14 != (longlong *)0x0) {
            lVar23 = 0;
            if (plVar14 + 1 == (longlong *)0x0) goto LAB_140d1e596;
            lVar23 = plVar14[1];
            puVar2 = *(ulonglong **)(lVar23 + 0x28);
            uVar19 = (DAT_14ca90b88 ^ (longlong)iVar8) * -0x622015f714c7d297;
            lVar10 = (uVar19 >> 0x2f ^ (longlong)iVar8 ^ uVar19) * -0x622015f714c7d297;
            uVar19 = puVar2[3];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar2 + ((longlong)uVar19 >> 0x18) + 0x18;
            }
            uVar17 = puVar2[5];
            if ((uVar17 & 1) != 0) {
              uVar17 = (longlong)puVar2 + ((longlong)uVar17 >> 0x18) + 0x28;
            }
            uVar20 = puVar2[1];
            if ((uVar20 & 1) != 0) {
              uVar20 = (longlong)puVar2 + ((longlong)uVar20 >> 0x18) + 8;
            }
            uVar24 = *puVar2;
            if ((uVar24 & 1) != 0) {
              uVar24 = ((longlong)uVar24 >> 0x18) + (longlong)puVar2;
            }
            uVar22 = *(uint *)(uVar24 + (ulonglong)
                                        ((uint)puVar2[2] &
                                         ((uint)((ulonglong)lVar10 >> 0x2f) ^ (uint)lVar10) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar22 != 0xffffffff) {
              goto LAB_140d1e546;
            }
          }
          break;
        }
        iVar12 = (int)plVar14[2];
      } while (iVar12 != -1);
    }
  }
LAB_140d1e562:
  uVar19 = 0;
  lVar23 = 0;
LAB_140d1e596:
  FUN_1415d5bd2();
  local_128._0_8_ = DAT_14ca968c0;
  auVar7 = local_128;
  if (uVar15 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar21 + 8) + 0x50) +
              (longlong)*(int *)(uVar15 + 0xd4) * 8);
    if (lVar10 == 0) {
      local_128 = auVar7;
      lVar10 = FUN_1400bafc2(*(longlong *)(lVar21 + 8),(longlong)*(int *)(uVar15 + 0xd4),1);
    }
  }
  local_128._8_8_ = lVar10;
  if (uVar19 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar23 + 8) + 0x50) +
              (longlong)*(int *)(uVar19 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(lVar23 + 8),(longlong)*(int *)(uVar19 + 0xd4),1);
    }
  }
  local_118._0_8_ = lVar21;
  local_d0 = 1;
  pcVar3 = (code *)*plVar6;
  if (pcVar3 != (code *)0x0) {
    plVar13 = plVar6 + 4;
    if ((longlong *)plVar6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar6[2];
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar3)(uVar11,local_128);
  }
  lVar21 = FUN_140028f18(param_1,local_128);
  uVar5 = param_7;
  if ((lVar21 != 0) && ((local_60 & 0x10000000) == 0)) {
    *(undefined4 *)(param_1 + 0x35) = local_108._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x36) = local_108._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = local_108._12_4_;
    *(undefined4 *)(param_1 + 0x33) = local_118._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x19c) = local_118._4_4_;
    *(undefined4 *)(param_1 + 0x34) = local_118._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = local_118._12_4_;
    param_1[0x31] = local_128._0_8_;
    param_1[0x32] = local_128._8_8_;
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 4;
    if ((undefined8 *)param_1[1] < puVar9) {
      FUN_140023dd8(param_1,0x28);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 4;
    }
    *param_1 = (ulonglong)puVar9;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a37d348;
    puVar16[2] = lVar21;
    *(undefined4 *)(puVar16 + 3) = uVar5;
    *(undefined1 *)((longlong)puVar16 + 0x1c) = 1;
  }
  if (local_2b8 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)local_2b0 + 8) + 0x50) +
              (longlong)*(int *)(local_2b8 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)((longlong)local_2b0 + 8),
                             (longlong)*(int *)(local_2b8 + 0xd4),1);
    }
  }
  FUN_14178e44e(param_1,&local_2b8,lVar21,&param_5);
  lVar21 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)&local_2c0 + lVar21 + 6) = (undefined1  [16])0x0;
    *(undefined4 *)(local_2b0 + lVar21 + 6) = 0xffff0000;
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x152);
  local_154 = 0;
  local_168 = (undefined1  [16])0x0;
  local_158 = 0;
  local_150 = 0xffffffff;
  uStack_14c = 0xffffffff;
  uStack_148 = 0xffffffff;
  uStack_144 = 0xffffffff;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  uVar22 = 0;
  if (((int)param_2 < 1) ||
     (memcpy(local_2a8,local_2c0,(ulonglong)param_2 << 4), uVar22 = param_2, param_2 < 8)) {
    lVar21 = (ulonglong)uVar22 << 4;
    do {
      *(undefined8 *)((longlong)local_2a8 + lVar21) = 0;
      *(undefined8 *)((longlong)local_2a8 + lVar21 + 8) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x80);
  }
  if (uVar19 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar23 + 8) + 0x50) +
              (longlong)*(int *)(uVar19 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(lVar23 + 8),(longlong)*(int *)(uVar19 + 0xd4),1);
    }
  }
  uVar11 = FUN_141472624();
  local_2c8 = local_2a8;
  FUN_1449cc26b(param_1,lVar21,uVar19,uVar11);
LAB_140d1e830:
  if (*plVar6 != 0) {
    plVar13 = plVar6 + 4;
    if ((longlong *)plVar6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar6[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1e946 FUN_140d1e946 body=31 status=ok
// SIG undefined FUN_140d1e946(void)

undefined8 FUN_140d1e946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d1e966 FUN_140d1e966 body=382 status=ok
// SIG undefined FUN_140d1e966(void)

undefined4 * FUN_140d1e966(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d1ec56(param_1,local_40);
  uVar6 = *param_3;
  *local_38 = uVar6;
  if ((uVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar6);
    uVar6 = *local_38;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  if (((bVar1 & 1) != 0) && (uVar6 != 0)) {
    FUN_1456cec3c(uVar6);
  }
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_140d1eae6(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
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
      *(uint *)((longlong)local_38 + 0xc) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140d1ee3c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1eae6 FUN_140d1eae6 body=164 status=ok
// SIG undefined FUN_140d1eae6(void)

undefined8 FUN_140d1eae6(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_140d1eb8c(param_1,param_2,&local_30);
    if (iVar1 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_14840386c(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_140d1eb41;
    }
  }
  uVar2 = 0;
LAB_140d1eb41:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d1eb8c FUN_140d1eb8c body=202 status=ok
// SIG undefined FUN_140d1eb8c(void)

int FUN_140d1eb8c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140d1ec56 FUN_140d1ec56 body=485 status=ok
// SIG undefined FUN_140d1ec56(void)

int * FUN_140d1ec56(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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



// FUNCTION 140d1ee3c FUN_140d1ee3c body=732 status=ok
// SIG undefined FUN_140d1ee3c(void)

void FUN_140d1ee3c(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_140d1eeb6;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar14 != uVar3);
LAB_140d1eeb6:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar16 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar4;
    if (uVar14 == 0) {
      iVar10 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar10 = iVar6 + -1;
      }
      uVar16 = 0;
      uVar13 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar13 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar16) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar11 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar11) {
      iVar11 = iVar6;
    }
  }
  if (iVar11 < iVar6) {
    uVar14 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar15 = *param_1;
      uVar9 = *(ulonglong *)(lVar15 + (longlong)iVar11 * 0x10);
      if (((bVar2 & 1) != 0) && (uVar9 != 0)) {
        FUN_1456cec3c(uVar9);
        bVar2 = DAT_14c950c29;
      }
      lVar15 = lVar15 + (longlong)iVar11 * 0x10;
      uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar9 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar9;
      *(int *)(lVar15 + 0xc) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar15 + 8) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11;
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar11 = (int)uVar16;
      lVar15 = (longlong)iVar11;
      uVar3 = puVar4[lVar15] & uVar14;
      if (uVar3 == 0) {
        iVar7 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar7 = iVar6 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar4[lVar15 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar11 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar9 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar6);
  }
  return;
}



// FUNCTION 140d1f118 FUN_140d1f118 body=76 status=ok
// SIG undefined FUN_140d1f118(void)

undefined8 FUN_140d1f118(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140d1f164(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140d1f159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140d1f164 FUN_140d1f164 body=191 status=ok
// SIG undefined FUN_140d1f164(void)

longlong FUN_140d1f164(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140d1f224();
  lVar3 = *param_1;
  if (DAT_14cbc8c80 != DAT_14cbc8cac) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc8cb0;
    if (DAT_14cbc8cb8 != (undefined *)0x0) {
      puVar7 = DAT_14cbc8cb8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc8cc0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc8c78 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc8c70;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140d1f224 FUN_140d1f224 body=152 status=ok
// SIG undefined FUN_140d1f224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d1f224(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc8cc8) {
    FUN_144b3d300(&DAT_14cbc8cc8);
    if (DAT_14cbc8cc8 == -1) {
      DAT_14cbc8c98 = 0;
      DAT_14cbc8ca0 = 0;
      DAT_14cbc8c78 = 0;
      _DAT_14cbc8c80 = 0;
      _DAT_14cbc8ca4 = 0xffffffff00000080;
      DAT_14cbc8cac = 0;
      DAT_14cbc8cb8 = 0;
      DAT_14cbc8cc0 = 0;
      atexit(FUN_14410d78c);
      _Init_thread_footer(&DAT_14cbc8cc8);
      return;
    }
  }
  return;
}



// FUNCTION 140d1f2bc FUN_140d1f2bc body=428 status=ok
// SIG undefined FUN_140d1f2bc(void)

longlong FUN_140d1f2bc(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_3;
  iVar10 = FUN_140b2b37a(param_2 + 0x1268);
  lVar11 = *(longlong *)(param_2 + 0x1268);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  FUN_1400021e4(&local_50,&local_70);
  puVar12 = local_70;
  if (local_68 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_60,L"%s%d",puVar12,uVar3);
  iVar5 = local_58 + -1;
  if (local_58 == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(&local_48,iVar5,local_60,1);
  *(undefined8 *)(lVar11 + (longlong)iVar10 * 0x60) = local_48;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar11 = lVar11 + (longlong)iVar10 * 0x60;
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(lVar11 + 0x38) = *(undefined1 *)(param_1 + 0x38);
  *(undefined1 *)(lVar11 + 0x39) = *(undefined1 *)(param_1 + 0x39);
  *(undefined1 *)(lVar11 + 0x3a) = *(undefined1 *)(param_1 + 0x3a);
  *(undefined1 *)(lVar11 + 0x3b) = *(undefined1 *)(param_1 + 0x8c);
  *(undefined1 *)(lVar11 + 0x3c) = *(undefined1 *)(param_1 + 0x8d);
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  uVar7 = *(undefined4 *)(param_1 + 0x98);
  uVar8 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(lVar11 + 0x44) = uVar3;
  *(undefined4 *)(lVar11 + 0x48) = uVar7;
  *(undefined4 *)(lVar11 + 0x4c) = uVar8;
  iVar10 = *(int *)(lVar11 + 0x58);
  *(uint *)(lVar11 + 0x58) = iVar10 + 1U;
  if (*(uint *)(lVar11 + 0x5c) < iVar10 + 1U) {
    FUN_140d1f4ac(lVar11 + 0x50,iVar10);
  }
  lVar6 = (longlong)iVar10 * 0x60;
  FUN_140d1f469(*(longlong *)(lVar11 + 0x50) + lVar6);
  lVar4 = *(longlong *)(lVar11 + 0x50);
  *(undefined8 *)(lVar4 + 0x20 + lVar6) = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
  *puVar1 = *(undefined8 *)(param_1 + 0x40);
  puVar1[1] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(lVar4 + 0x28 + lVar6);
  *puVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar1[1] = uVar9;
  *(undefined8 *)(lVar4 + 0x38 + lVar6) = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar7 = *(undefined4 *)(param_1 + 0x78);
  uVar8 = *(undefined4 *)(param_1 + 0x7c);
  puVar2 = (undefined4 *)(lVar4 + 0x40 + lVar6);
  *puVar2 = *(undefined4 *)(param_1 + 0x70);
  puVar2[1] = uVar3;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined8 *)(lVar4 + 0x50 + lVar6) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(lVar4 + lVar6) = param_3;
  *(undefined8 *)(lVar4 + 8 + lVar6) = 0xffffffff7fffffff;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 140d1f469 FUN_140d1f469 body=66 status=ok
// SIG undefined FUN_140d1f469(void)

void FUN_140d1f469(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff7fffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  return;
}



// FUNCTION 140d1f4ac FUN_140d1f4ac body=272 status=ok
// SIG undefined FUN_140d1f4ac(void)

void FUN_140d1f4ac(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140d1f5ca FUN_140d1f5ca body=36 status=ok
// SIG undefined FUN_140d1f5ca(void)

undefined8 FUN_140d1f5ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140d1f5ee FUN_140d1f5ee body=40 status=ok
// SIG undefined FUN_140d1f5ee(void)

undefined8 FUN_140d1f5ee(undefined8 param_1,int param_2)

{
  FUN_140d1f616();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d1f616 FUN_140d1f616 body=77 status=ok
// SIG undefined FUN_140d1f616(void)

void FUN_140d1f616(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad90b00;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ad8eb80;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 140d1f66a FUN_140d1f66a body=57 status=ok
// SIG undefined FUN_140d1f66a(void)

void FUN_140d1f66a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5280 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5280 = FUN_140002ddd(FUN_1465c1aef,uVar1,L"LevelTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 140d1f6a4 FUN_140d1f6a4 body=12 status=ok
// SIG undefined FUN_140d1f6a4(void)

void FUN_140d1f6a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d1f6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140d1f6b0 FUN_140d1f6b0 body=31 status=ok
// SIG undefined FUN_140d1f6b0(void)

undefined8 FUN_140d1f6b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d1f6d0 FUN_140d1f6d0 body=144 status=ok
// SIG undefined FUN_140d1f6d0(void)

void FUN_140d1f6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b112240;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_140d1f760(param_1[0x6c],*(undefined4 *)(param_1 + 0x6d));
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  return;
}



// FUNCTION 140d1f760 FUN_140d1f760 body=120 status=ok
// SIG undefined FUN_140d1f760(void)

void FUN_140d1f760(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (plVar1[9] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[7] != 0) {
        FUN_1400020a8();
      }
      FUN_140e17bf8(plVar1[2],(int)plVar1[3]);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_140e17b7f(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d1f7d8 FUN_140d1f7d8 body=80 status=ok
// SIG undefined FUN_140d1f7d8(void)

void FUN_140d1f7d8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d1f825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3);
  return;
}



// FUNCTION 140d1f828 FUN_140d1f828 body=443 status=ok
// SIG undefined FUN_140d1f828(void)

void FUN_140d1f828(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (DAT_14c763b17 == '\0') {
    fVar9 = *(float *)(param_1 + 0x188) * 0.01;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x68);
    fVar11 = *(float *)(lVar3 + 0x10) * fVar9 * fVar9;
    fVar9 = (float)(~-(uint)(fVar9 < 0.0) & (uint)-fVar11 | (uint)fVar11 & -(uint)(fVar9 < 0.0));
    dVar12 = (double)(fVar9 * *(float *)(lVar3 + 0x14)) * 100.0 * *(double *)(param_1 + 0x60);
    dVar13 = *(double *)(param_1 + 0x68) * 0.0;
    dVar10 = (double)(*(float *)(lVar3 + 0x18) * fVar9) * 100.0 * *(double *)(param_1 + 0x70);
    dVar5 = *(double *)(param_1 + 0x20);
    dVar6 = *(double *)(param_1 + 0x28);
    dVar7 = *(double *)(param_1 + 0x30);
    dVar1 = *(double *)(param_1 + 0x38);
    dVar14 = dVar13 * dVar5 - dVar6 * dVar12;
    dVar15 = dVar10 * dVar6 - dVar7 * dVar13;
    dVar16 = dVar12 * dVar7 - dVar5 * dVar10;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar7 * dVar15 - dVar5 * dVar14) + *(double *)(param_1 + 0x38) * dVar16 + dVar13;
    iVar2 = *(int *)(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
      FUN_140d1f9e4((longlong *)(param_1 + 0x1a8),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x1a8);
    lVar8 = (longlong)iVar2 * 0x20;
    auVar4._8_4_ = SUB84(dVar13,0);
    auVar4._0_8_ = (dVar14 * dVar6 - dVar16 * dVar7) + dVar1 * dVar15 + dVar12;
    auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + lVar8) = auVar4;
    *(double *)(lVar3 + 0x10 + lVar8) = dVar14 * dVar1 + dVar10 + (dVar16 * dVar5 - dVar15 * dVar6);
    *(undefined4 *)(lVar3 + 0x18 + lVar8) = 1;
  }
  return;
}



// FUNCTION 140d1f9e4 FUN_140d1f9e4 body=255 status=ok
// SIG undefined FUN_140d1f9e4(void)

void FUN_140d1f9e4(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140d1fae4 FUN_140d1fae4 body=1055 status=ok
// SIG undefined FUN_140d1fae4(void)

void FUN_140d1fae4(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_158 [40];
  double local_130;
  double local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((DAT_14c763b19 == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (lVar21 = *(longlong *)(param_1 + 0x1a0), 0 < *(int *)(lVar21 + 0x90))) {
    lVar24 = 0;
    lVar23 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x48);
      uVar34 = 0;
      uVar35 = 0;
      uVar32 = 0;
      uVar33 = 0;
      if ((plVar6 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar6 + 0xc))) {
        uVar3 = *(undefined8 *)(*(longlong *)(*plVar6 + 0x3e0) + (longlong)(int)plVar6[1] * 0x18);
        uVar34 = (undefined4)uVar3;
        uVar35 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)
                 (*(longlong *)(*plVar6 + 0x3e0) + 8 + (longlong)(int)plVar6[1] * 0x18);
        uVar32 = (undefined4)uVar3;
        uVar33 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      lVar21 = *(longlong *)(lVar21 + 0x88);
      *(undefined8 *)(lVar21 + 0x58 + lVar24) = *(undefined8 *)(param_1 + 0x90);
      uVar12 = *(undefined4 *)(param_1 + 0x84);
      uVar13 = *(undefined4 *)(param_1 + 0x88);
      uVar14 = *(undefined4 *)(param_1 + 0x8c);
      puVar1 = (undefined4 *)(lVar21 + 0x48 + lVar24);
      *puVar1 = *(undefined4 *)(param_1 + 0x80);
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      FUN_148acb540(lVar24 + lVar21,param_2);
      FUN_148acb52a(lVar24 + lVar21,&local_f8);
      dVar25 = local_e8 + 0.0;
      dVar8 = (double)CONCAT44(uVar33,uVar32) + local_f0;
      dVar11 = (double)CONCAT44(uVar35,uVar34) + local_f8;
      dVar27 = *(double *)(param_1 + 0x60);
      dVar29 = *(double *)(param_1 + 0x68);
      dVar15 = *(double *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      local_118 = *(undefined4 *)(param_1 + 0x38);
      uStack_114 = *(undefined4 *)(param_1 + 0x3c);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uStack_110 = (undefined4)uVar3;
      uStack_10c = (undefined4)((ulonglong)uVar3 >> 0x20);
      dVar17 = *(double *)(param_1 + 0x20);
      dVar18 = *(double *)(param_1 + 0x28);
      dVar19 = *(double *)(param_1 + 0x30);
      local_108 = *(double *)(param_1 + 0x40);
      dStack_100 = *(double *)(param_1 + 0x48);
      local_130 = *(double *)(param_1 + 0x50);
      pdVar2 = (double *)(lVar21 + 0x10 + lVar24);
      dVar9 = *pdVar2;
      dVar10 = pdVar2[1];
      dVar4 = *(double *)(lVar21 + 0x20 + lVar24);
      iVar5 = *(int *)(param_1 + 0x1c0);
      *(uint *)(param_1 + 0x1c0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1c4) < iVar5 + 1U) {
        FUN_140c32b6c(param_1 + 0x1b8,iVar5);
      }
      dVar11 = dVar11 * dVar27;
      dVar8 = dVar8 * dVar29;
      dVar25 = dVar25 * dVar15;
      dVar26 = dVar8 * dVar17 - dVar11 * dVar18;
      dVar28 = dVar25 * dVar18 - dVar8 * dVar19;
      dVar30 = dVar11 * dVar19 - dVar25 * dVar17;
      dVar28 = dVar28 + dVar28;
      dVar30 = dVar30 + dVar30;
      dVar26 = dVar26 + dVar26;
      dVar20 = (double)CONCAT44(uStack_114,local_118);
      dVar9 = dVar9 * dVar27;
      dVar10 = dVar10 * dVar29;
      dVar4 = dVar4 * dVar15;
      dVar27 = dVar10 * dVar17 - dVar18 * dVar9;
      dVar29 = dVar4 * dVar18 - dVar19 * dVar10;
      dVar31 = dVar9 * dVar19 - dVar17 * dVar4;
      dVar29 = dVar29 + dVar29;
      dVar31 = dVar31 + dVar31;
      dVar27 = dVar27 + dVar27;
      dVar10 = (dVar19 * dVar29 - dVar17 * dVar27) +
               (double)CONCAT44(uStack_10c,uStack_110) * dVar31 + dVar10 + dStack_100;
      lVar21 = *(longlong *)(param_1 + 0x1b8);
      lVar22 = (longlong)iVar5 * 0x38;
      auVar7._8_4_ = SUB84(dVar10,0);
      auVar7._0_8_ = (dVar27 * dVar18 - dVar31 * dVar19) + dVar20 * dVar29 + dVar9 + local_108;
      auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar21 + lVar22) = auVar7;
      *(double *)(lVar21 + 0x10 + lVar22) =
           dVar27 * dVar20 + dVar4 + (dVar31 * dVar17 - dVar29 * dVar18) + local_130;
      pdVar2 = (double *)(lVar21 + 0x18 + lVar22);
      *pdVar2 = (dVar26 * dVar18 - dVar30 * dVar19) + dVar20 * dVar28 + dVar11 + local_108;
      pdVar2[1] = (dVar19 * dVar28 - dVar17 * dVar26) +
                  (double)CONCAT44(uStack_10c,uStack_110) * dVar30 + dVar8 + dStack_100;
      *(double *)(lVar21 + 0x28 + lVar22) =
           dVar26 * dVar20 + dVar25 + (dVar30 * dVar17 - dVar28 * dVar18) + local_130;
      *(undefined4 *)(lVar21 + 0x30 + lVar22) = 1;
      lVar23 = lVar23 + 1;
      lVar21 = *(longlong *)(param_1 + 0x1a0);
      lVar24 = lVar24 + 0x70;
      local_128 = dVar15;
      uStack_120 = uVar16;
    } while (lVar23 < *(int *)(lVar21 + 0x90));
  }
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d1ff04 FUN_140d1ff04 body=1954 status=ok
// SIG undefined FUN_140d1ff04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d1ff04(longlong param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  int iVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_188 [32];
  float local_168;
  undefined4 local_160;
  float local_154;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((DAT_14c763b18 == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    FUN_14051b394(local_118 + 2,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x80),1);
    FUN_14051b394(local_118,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x80),1);
    auVar14 = _DAT_149934d80;
    lVar17 = *(longlong *)(param_1 + 0x1a0);
    if (0 < *(int *)(lVar17 + 0x80)) {
      local_154 = (float)*(double *)(param_1 + 0x50);
      lVar19 = 0;
      lVar16 = 0;
      lVar18 = 0;
      do {
        pdVar7 = *(double **)(*(longlong *)(lVar17 + 0x78) + lVar19);
        dVar22 = *pdVar7 * 100.0 * *(double *)(param_1 + 0x60);
        dVar25 = pdVar7[1] * 100.0 * *(double *)(param_1 + 0x68);
        dVar20 = pdVar7[2] * 100.0 * *(double *)(param_1 + 0x70);
        dVar3 = *(double *)(param_1 + 0x20);
        dVar2 = *(double *)(param_1 + 0x28);
        dVar4 = *(double *)(param_1 + 0x30);
        dVar1 = *(double *)(param_1 + 0x38);
        dVar28 = dVar25 * dVar3 - dVar22 * dVar2;
        dVar30 = dVar20 * dVar2 - dVar25 * dVar4;
        dVar33 = dVar22 * dVar4 - dVar3 * dVar20;
        dVar30 = dVar30 + dVar30;
        dVar33 = dVar33 + dVar33;
        dVar28 = dVar28 + dVar28;
        local_138 = (dVar28 * dVar2 - dVar33 * dVar4) + dVar1 * dVar30 + dVar22 +
                    *(double *)(param_1 + 0x40);
        dStack_130 = (dVar4 * dVar30 - dVar3 * dVar28) +
                     *(double *)(param_1 + 0x38) * dVar33 + dVar25 + *(double *)(param_1 + 0x48);
        local_128 = dVar28 * dVar1 + dVar20 + (dVar33 * dVar3 - dVar30 * dVar2) +
                    *(double *)(param_1 + 0x50);
        FUN_148ad4d97(&local_150,*(undefined8 *)(param_1 + 0x18),&local_138);
        *(double *)(local_118[0] + 0x10 + lVar16) = local_140;
        *(double *)(local_118[0] + lVar16) = local_150;
        ((double *)(local_118[0] + lVar16))[1] = dStack_148;
        dVar3 = *(double *)(local_118[0] + lVar16);
        dVar2 = ((double *)(local_118[0] + lVar16))[1];
        dVar1 = *(double *)(local_118[0] + 0x10 + lVar16);
        dVar4 = *(double *)(param_1 + 0x20);
        dVar25 = -dVar4;
        dVar30 = -*(double *)(param_1 + 0x28);
        dVar20 = *(double *)(param_1 + 0x30) * -1.0;
        dVar22 = *(double *)(param_1 + 0x38) * 1.0;
        dVar33 = dVar2 * dVar25 - dVar3 * dVar30;
        dVar32 = dVar1 * dVar30 - dVar2 * dVar20;
        dVar34 = dVar3 * dVar20 - dVar25 * dVar1;
        dVar32 = dVar32 + dVar32;
        dVar34 = dVar34 + dVar34;
        dVar33 = dVar33 + dVar33;
        dVar1 = *(double *)(local_118[0] + 0x10 + lVar16);
        auVar5 = *(undefined1 (*) [16])(param_1 + 0x60);
        auVar24 = divpd(auVar14,auVar5);
        dVar28 = *(double *)(param_1 + 0x70);
        *(double *)(local_118[2] + lVar16) =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar24._0_8_) *
             ((dVar33 * dVar30 - dVar34 * dVar20) + dVar22 * dVar32 + dVar3);
        ((double *)(local_118[2] + lVar16))[1] =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar24._8_8_) *
             (dVar4 * dVar33 + dVar20 * dVar32 + dVar22 * dVar34 + dVar2);
        *(double *)(local_118[2] + 0x10 + lVar16) =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar28)) & (ulonglong)(1.0 / dVar28))
             * (dVar22 * dVar33 + dVar1 + (dVar34 * dVar25 - dVar32 * dVar30));
        lVar18 = lVar18 + 1;
        lVar17 = *(longlong *)(param_1 + 0x1a0);
        lVar16 = lVar16 + 0x18;
        lVar19 = lVar19 + 0x38;
      } while (lVar18 < *(int *)(lVar17 + 0x80));
      if (0 < *(int *)(lVar17 + 0x80)) {
        lVar18 = 0x10;
        lVar16 = 0;
        local_154 = local_154 * 0.01;
        lVar19 = 0;
        do {
          lVar17 = *(longlong *)(lVar17 + 0x78) + lVar16;
          local_140 = *(double *)(local_118[2] + lVar18) * 0.009999999776482582;
          dStack_148 = *(double *)(local_118[2] + -8 + lVar18) * 0.009999999776482582;
          local_150 = *(double *)(local_118[2] + -0x10 + lVar18) * 0.009999999776482582;
          local_168 = local_154;
          local_160 = param_2;
          FUN_148acad72(lVar17,&local_138,param_1 + 0x20,&local_150);
          dVar32 = local_138 * *(double *)(param_1 + 0x60);
          dVar34 = dStack_130 * *(double *)(param_1 + 0x68);
          dVar33 = local_128 * *(double *)(param_1 + 0x70);
          dVar8 = *(double *)(param_1 + 0x20);
          dVar9 = *(double *)(param_1 + 0x28);
          dVar10 = *(double *)(param_1 + 0x30);
          dVar1 = *(double *)(param_1 + 0x38);
          dVar28 = *(double *)(param_1 + 0x38);
          FUN_148acace6(lVar17,&local_150);
          dVar25 = local_150 * 100.0 * *(double *)(param_1 + 0x60);
          dVar30 = dStack_148 * 100.0 * *(double *)(param_1 + 0x68);
          dVar21 = local_140 * 100.0 * *(double *)(param_1 + 0x70);
          dVar11 = *(double *)(param_1 + 0x20);
          dVar12 = *(double *)(param_1 + 0x28);
          dVar13 = *(double *)(param_1 + 0x30);
          dVar2 = *(double *)(param_1 + 0x38);
          dVar3 = *(double *)(param_1 + 0x38);
          dVar29 = dVar30 * dVar11 - dVar25 * dVar12;
          dVar31 = dVar21 * dVar12 - dVar30 * dVar13;
          dVar35 = dVar25 * dVar13 - dVar11 * dVar21;
          dVar31 = dVar31 + dVar31;
          dVar35 = dVar35 + dVar35;
          dVar29 = dVar29 + dVar29;
          dVar20 = *(double *)(param_1 + 0x40);
          dVar22 = *(double *)(param_1 + 0x48);
          dVar4 = *(double *)(param_1 + 0x50);
          iVar6 = *(int *)(param_1 + 0x1c0);
          *(uint *)(param_1 + 0x1c0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1c4) < iVar6 + 1U) {
            FUN_140c32b6c(param_1 + 0x1b8,iVar6);
          }
          dVar23 = dVar34 * dVar8 - dVar32 * dVar9;
          dVar26 = dVar33 * dVar9 - dVar34 * dVar10;
          dVar27 = dVar32 * dVar10 - dVar8 * dVar33;
          dVar26 = dVar26 + dVar26;
          dVar27 = dVar27 + dVar27;
          dVar23 = dVar23 + dVar23;
          lVar17 = *(longlong *)(param_1 + 0x1b8);
          lVar15 = (longlong)iVar6 * 0x38;
          *(double *)(lVar17 + lVar15) =
               ((dVar23 * dVar9 - dVar27 * dVar10) + dVar1 * dVar26 + dVar32) * 100.0;
          *(double *)(lVar17 + 8 + lVar15) =
               ((dVar10 * dVar26 - dVar8 * dVar23) + dVar28 * dVar27 + dVar34) * 100.0;
          *(double *)(lVar17 + 0x10 + lVar15) =
               (dVar23 * dVar1 + dVar33 + (dVar27 * dVar8 - dVar26 * dVar9)) * 100.0;
          pdVar7 = (double *)(lVar17 + 0x18 + lVar15);
          *pdVar7 = (dVar29 * dVar12 - dVar35 * dVar13) + dVar2 * dVar31 + dVar25 + dVar20;
          pdVar7[1] = (dVar13 * dVar31 - dVar11 * dVar29) + dVar3 * dVar35 + dVar30 + dVar22;
          *(double *)(lVar17 + 0x28 + lVar15) =
               dVar29 * dVar2 + dVar21 + (dVar35 * dVar11 - dVar31 * dVar12) + dVar4;
          *(undefined4 *)(lVar17 + 0x30 + lVar15) = 1;
          lVar19 = lVar19 + 1;
          lVar17 = *(longlong *)(param_1 + 0x1a0);
          lVar18 = lVar18 + 0x18;
          lVar16 = lVar16 + 0x38;
        } while (lVar19 < *(int *)(lVar17 + 0x80));
      }
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    if (local_118[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d206a8 FUN_140d206a8 body=2091 status=ok
// SIG undefined FUN_140d206a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d206a8(longlong param_1,float param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  byte bVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [12];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  if (*(int *)(lVar2 + 0xb0) < 1) goto LAB_140d207fa;
  if ((DAT_14c763b15 == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    pbVar5 = (byte *)**(undefined8 **)(lVar2 + 0xa8);
    bVar6 = *pbVar5;
    dVar11 = DAT_14c8464f0;
    dVar17 = DAT_14c8464e8;
    dVar16 = DAT_14c8464e0;
    if (bVar6 == 1) {
      lVar7 = **(longlong **)(lVar2 + 0xb8);
      fVar8 = (*(float *)(lVar7 + 8) * 3.1415927) / 180.0;
      fVar22 = (*(float *)(lVar7 + 0x10) * 3.1415927) / 180.0;
      if (*(char *)(lVar7 + 1) == '\x01') {
        auVar24 = ZEXT816(0);
        if (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x9c) == '\x01') {
          fVar13 = *(float *)(param_1 + 0x188) * 0.01;
          auVar18 = (undefined1  [12])0x0;
          if (20.0 <= fVar13) {
            auVar18 = ZEXT412(0);
            fVar13 = 20.0;
          }
          auVar24._0_4_ =
               fVar13 * fVar13 * *(float *)(param_3 + 0x40) * *(float *)(lVar7 + 4) * param_2 * 60.0
          ;
          auVar24._4_12_ = auVar18;
        }
      }
      else {
        auVar24 = ZEXT416((uint)(*(float *)(param_3 + 0x40) * *(float *)(lVar7 + 4)));
      }
      if (fVar8 <= auVar24._0_4_) {
        auVar24._0_4_ = fVar8;
      }
      if (auVar24._0_4_ <= -fVar8) {
        auVar24._0_4_ = -fVar8;
      }
      dVar16 = (double)auVar24._0_4_;
      fVar8 = *(float *)(param_3 + 0x4c) * *(float *)(lVar7 + 0xc);
      if (fVar22 <= fVar8) {
        fVar8 = fVar22;
      }
      if (fVar8 <= -fVar22) {
        fVar8 = -fVar22;
      }
      dVar11 = (double)fVar8;
      local_f0 = *(double *)(param_1 + 0x138) * dVar16 + 1.0 + *(double *)(param_1 + 0x120) * dVar11
      ;
      dVar17 = 0.0;
      local_f8 = *(double *)(param_1 + 0x130) * dVar16 + 0.0 + *(double *)(param_1 + 0x118) * dVar11
      ;
      local_100 = dVar16 * *(double *)(param_1 + 0x128) + 0.0 +
                  dVar11 * *(double *)(param_1 + 0x110);
      auVar26._0_8_ = local_100 * local_100 + local_f8 * local_f8;
      auVar26._8_8_ = auVar24._8_8_;
      dVar16 = local_f0 * local_f0 + auVar26._0_8_;
      if (9.99999993922529e-09 < dVar16) {
        auVar26._0_8_ = 1.0 / SQRT(dVar16);
        auVar26._8_8_ = 0;
        local_100 = local_100 * auVar26._0_8_;
        local_f8 = local_f8 * auVar26._0_8_;
        local_f0 = local_f0 * auVar26._0_8_;
      }
      local_108 = *(double *)(param_1 + 0x108);
      local_118 = *(double *)(param_1 + 0xf8);
      dStack_110 = *(double *)(param_1 + 0x100);
      dVar16 = *(double *)(param_1 + 0xb0);
      dVar11 = *(double *)(param_1 + 0xb8);
      dVar15 = *(double *)(param_1 + 0xc0);
      fVar8 = *(float *)(lVar7 + 0x14);
      fVar22 = *(float *)(lVar7 + 0x1c);
      fVar13 = *(float *)(lVar7 + 0x18);
      FUN_144a9d448(&local_e8);
      dVar9 = local_d8 * local_d8 + local_e8 * local_e8;
      dVar10 = dStack_e0 * dStack_e0 + 0.0;
      auVar21._0_8_ = dVar9 + dVar10;
      auVar21._8_8_ = dVar9 + dVar10;
      auVar12._8_8_ = -(ulonglong)(1e-08 <= auVar21._8_8_);
      auVar12._0_8_ = -(ulonglong)(1e-08 <= auVar21._0_8_);
      auVar24 = sqrtpd(auVar26,auVar21);
      auVar24 = divpd(_DAT_149934d80,auVar24);
      dStack_e0 = dStack_e0 * auVar24._8_8_;
      auVar4._8_4_ = SUB84(dStack_e0,0);
      auVar4._0_8_ = local_e8 * auVar24._0_8_;
      auVar4._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
      auVar26 = blendvpd(ZEXT816(0x3ff0000000000000),auVar4,auVar12);
      if ((-(ulonglong)(1e-08 <= auVar21._0_8_) & 1) != 0) {
        dVar17 = local_d8 * auVar24._0_8_;
      }
      dVar9 = dStack_d0;
      if (1.0 <= dStack_d0) {
        dVar9 = 1.0;
      }
      dVar9 = acos((double)(~-(ulonglong)(dStack_d0 < -1.0) & (ulonglong)dVar9 |
                           -(ulonglong)(dStack_d0 < -1.0) & 0xbff0000000000000));
      fVar8 = (float)((double)(fVar8 * (float)(dVar9 + dVar9)) -
                     (dVar15 * dVar17 + dVar16 * auVar26._0_8_ + dVar11 * auVar26._8_8_) *
                     (double)fVar13);
      if (fVar22 <= fVar8) {
        fVar8 = fVar22;
      }
      if (fVar8 <= -fVar22) {
        fVar8 = -fVar22;
      }
      dVar11 = (double)fVar8;
      dVar17 = dVar17 * dVar11;
      dVar16 = auVar26._8_8_ * dVar11;
      dVar11 = auVar26._0_8_ * dVar11;
      dVar14 = (double)(float)(dVar17 * *(double *)(param_1 + 0x120) +
                              dVar11 * *(double *)(param_1 + 0x110) +
                              *(double *)(param_1 + 0x118) * dVar16);
      dVar19 = (double)*(float *)(lVar7 + 0x20);
      dVar15 = (double)(float)(dVar17 * local_108 + dVar11 * local_118 + dVar16 * dStack_110);
      dVar9 = (double)*(float *)(lVar7 + 0x28);
      dVar16 = (double)(float)(dVar17 * *(double *)(param_1 + 0x138) +
                              dVar11 * *(double *)(param_1 + 0x128) +
                              *(double *)(param_1 + 0x130) * dVar16);
      dVar10 = (double)*(float *)(lVar7 + 0x24);
      dVar11 = *(double *)(param_1 + 0x138) * dVar16 * dVar10 +
               local_108 * dVar15 * dVar9 + *(double *)(param_1 + 0x120) * dVar14 * dVar19;
      dVar17 = *(double *)(param_1 + 0x130) * dVar16 * dVar10 +
               dStack_110 * dVar15 * dVar9 + *(double *)(param_1 + 0x118) * dVar14 * dVar19;
      dVar16 = *(double *)(param_1 + 0x128) * dVar16 * dVar10 +
               local_118 * dVar15 * dVar9 + *(double *)(param_1 + 0x110) * dVar14 * dVar19;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 0xb0)) {
        pbVar5 = (byte *)**(undefined8 **)(*(longlong *)(param_1 + 0x1a0) + 0xa8);
        bVar6 = *pbVar5;
        goto LAB_140d2077a;
      }
    }
    else {
LAB_140d2077a:
      if ((bVar6 & 1) != 0) {
        dVar15 = (double)*(float *)(param_3 + 0x50);
        dVar23 = (double)*(float *)(pbVar5 + 0x14);
        dVar14 = (double)*(float *)(param_3 + 0x4c);
        dVar19 = (double)*(float *)(pbVar5 + 0x10);
        dVar20 = (double)*(float *)(param_3 + 0x54);
        dVar25 = (double)*(float *)(pbVar5 + 4);
        dVar9 = (double)*(float *)(pbVar5 + 0xc);
        dVar10 = (double)*(float *)(pbVar5 + 0x1c);
        dVar11 = (*(double *)(param_1 + 0x108) * dVar15 * dVar9 +
                 *(double *)(param_1 + 0x108) * dVar20 * dVar25 +
                 *(double *)(param_1 + 0x138) * dVar14 * dVar19 +
                 (dVar11 - *(double *)(param_1 + 0x120) * dVar15 * dVar23)) -
                 *(double *)(param_1 + 0xc0) * dVar10;
        dVar17 = (*(double *)(param_1 + 0x100) * dVar15 * dVar9 +
                 *(double *)(param_1 + 0x100) * dVar20 * dVar25 +
                 *(double *)(param_1 + 0x130) * dVar14 * dVar19 +
                 (dVar17 - *(double *)(param_1 + 0x118) * dVar15 * dVar23)) -
                 *(double *)(param_1 + 0xb8) * dVar10;
        dVar16 = (*(double *)(param_1 + 0xf8) * dVar15 * dVar9 +
                 dVar20 * *(double *)(param_1 + 0xf8) * dVar25 +
                 dVar14 * *(double *)(param_1 + 0x128) * dVar19 +
                 (dVar16 - *(double *)(param_1 + 0x110) * dVar15 * dVar23)) -
                 dVar10 * *(double *)(param_1 + 0xb0);
      }
    }
    iVar1 = *(int *)(param_1 + 0x1d0);
    *(uint *)(param_1 + 0x1d0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1d4) < iVar1 + 1U) {
      FUN_140d20ed4((longlong *)(param_1 + 0x1c8),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    lVar7 = (longlong)iVar1 * 0x20;
    *(double *)(lVar2 + lVar7) = dVar16;
    *(double *)(lVar2 + 8 + lVar7) = dVar17;
    *(double *)(lVar2 + 0x10 + lVar7) = dVar11;
    *(undefined4 *)(lVar2 + 0x18 + lVar7) = 3;
  }
  if ((((DAT_14c763b16 == '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 0xd0))) &&
      (pcVar3 = (char *)**(undefined8 **)(*(longlong *)(param_1 + 0x1a0) + 200), *pcVar3 == '\x01'))
     && (*(longlong *)(param_1 + 0x18) != 0)) {
    fVar8 = *(float *)(pcVar3 + 4);
    fVar22 = *(float *)(pcVar3 + 8);
    dVar16 = *(double *)(param_1 + 0x90);
    dVar15 = (double)param_2;
    dVar11 = *(double *)(param_1 + 0x80);
    dVar17 = *(double *)(param_1 + 0x88);
    iVar1 = *(int *)(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x1b0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1b4) < iVar1 + 1U) {
      FUN_140d1f9e4((longlong *)(param_1 + 0x1a8),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    lVar7 = (longlong)iVar1 * 0x20;
    *(double *)(lVar2 + lVar7) = (dVar11 * (double)-fVar22) / dVar15;
    *(double *)(lVar2 + 8 + lVar7) = ((double)-fVar22 * dVar17) / dVar15;
    *(double *)(lVar2 + 0x10 + lVar7) = ((double)-fVar8 * dVar16) / dVar15;
    *(undefined4 *)(lVar2 + 0x18 + lVar7) = 1;
  }
LAB_140d207fa:
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d20ed4 FUN_140d20ed4 body=255 status=ok
// SIG undefined FUN_140d20ed4(void)

void FUN_140d20ed4(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140d20fe2 FUN_140d20fe2 body=31 status=ok
// SIG undefined FUN_140d20fe2(void)

undefined8 FUN_140d20fe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d21002 FUN_140d21002 body=57 status=ok
// SIG undefined FUN_140d21002(void)

void FUN_140d21002(longlong param_1)

{
  undefined8 uVar1;
  
  switchD_143c3d4dc::caseD_1d();
  if ((DAT_14c872a72 == '\0') && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    uVar1 = FUN_140b55eae();
    FUN_140d2103c(uVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 140d2103c FUN_140d2103c body=879 status=ok
// SIG undefined FUN_140d2103c(void)

void FUN_140d2103c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar11 = 0;
    uVar3 = 0;
  }
  else {
    uVar11 = *(uint *)(param_2 + 0xc);
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar3 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar3 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar3 = uVar6;
      }
    }
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar6 = uVar3 >> 0xd ^ uVar11 - uVar3;
    uVar7 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar9 = uVar7 >> 0xd ^ (uVar3 - uVar6) - uVar7;
    uVar10 = uVar9 >> 0xc ^ (uVar6 - uVar7) - uVar9;
    uVar6 = uVar10 << 0x10 ^ (uVar7 - uVar9) - uVar10;
    uVar7 = uVar6 >> 5 ^ (uVar9 - uVar10) - uVar6;
    uVar9 = uVar7 >> 3 ^ (uVar10 - uVar6) - uVar7;
    uVar6 = uVar9 << 10 ^ (uVar6 - uVar7) - uVar9;
    lVar12 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x90);
    }
    uVar6 = *(uint *)(lVar12 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (uVar6 >> 0xf ^ uVar7 - (uVar9 + uVar6))) * 4);
    if (uVar6 != 0xffffffff) {
      lVar12 = *(longlong *)(param_1 + 0x50);
      do {
        puVar1 = (uint *)(lVar12 + (longlong)(int)uVar6 * 0x14);
        if ((*puVar1 == uVar11) && (*(uint *)(lVar12 + 4 + (longlong)(int)uVar6 * 0x14) == uVar3)) {
          if (puVar1 != (uint *)0x0) {
            uVar3 = puVar1[2];
            if ((longlong)(int)uVar3 != -1) {
              FUN_140d213ac(param_1 + 0xd8,uVar3);
              FUN_140d2152a(param_1 + 0x128,uVar3);
              FUN_140d2165c(param_1 + 0x178,uVar3);
              FUN_140d21406(param_1 + 0x1c8,uVar3);
              lVar12 = *(longlong *)(param_1 + 0xa0);
              lVar13 = (longlong)(int)uVar3 * 0x30;
              if (*(longlong *)(lVar12 + 0x10 + lVar13) != 0) {
                FUN_1400020a8();
                lVar12 = *(longlong *)(param_1 + 0xa0);
              }
              if (*(int *)(param_1 + 0xd4) != 0) {
                *(uint *)(lVar12 + (longlong)*(int *)(param_1 + 0xd0) * 0x30) = uVar3;
              }
              *(undefined4 *)(lVar12 + lVar13) = 0xffffffff;
              if (*(int *)(param_1 + 0xd4) < 1) {
                uVar4 = 0xffffffff;
              }
              else {
                uVar4 = *(undefined4 *)(param_1 + 0xd0);
              }
              *(undefined4 *)(lVar12 + lVar13 + 4) = uVar4;
              *(uint *)(param_1 + 0xd0) = uVar3;
              *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
              lVar12 = param_1 + 0xb0;
              if (*(longlong *)(param_1 + 0xc0) != 0) {
                lVar12 = *(longlong *)(param_1 + 0xc0);
              }
              uVar11 = uVar3 + 0x1f;
              if (-1 < (int)uVar3) {
                uVar11 = uVar3;
              }
              bVar2 = (byte)uVar3 & 0x1f;
              puVar1 = (uint *)(lVar12 + (longlong)((int)uVar11 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
              local_38 = 0;
              if (param_2 != 0) {
                uVar3 = *(uint *)(param_2 + 0xc);
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar12 = 0;
                }
                iVar5 = *(int *)(lVar12 + 0x10);
                if (*(int *)(lVar12 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar8 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar14) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar8);
                  }
                  LOCK();
                  iVar5 = *(int *)(lVar12 + 0x10);
                  bVar14 = iVar5 == 0;
                  if (bVar14) {
                    *(int *)(lVar12 + 0x10) = iVar8;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    iVar5 = iVar8;
                  }
                }
                local_38 = CONCAT44(iVar5,uVar3);
              }
              FUN_140d217b4((longlong *)(param_1 + 0x50),&local_38);
            }
          }
          break;
        }
        uVar6 = puVar1[3];
      } while (uVar6 != 0xffffffff);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d213ac FUN_140d213ac body=89 status=ok
// SIG undefined FUN_140d213ac(void)

void FUN_140d213ac(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x150) == param_2) {
          FUN_14579c224(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x150 + *param_1 + 0x148);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 140d21406 FUN_140d21406 body=177 status=ok
// SIG undefined FUN_140d21406(void)

void FUN_140d21406(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x100;
        lVar1 = lVar2 + lVar7;
        if (*(int *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0xfc) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0xfc) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x100 + lVar2 + 0xf8);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0xf8);
          FUN_140a31b96(*param_1 + lVar7 + 8);
          FUN_140d214b8(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0xf8);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140d214b8 FUN_140d214b8 body=114 status=ok
// SIG undefined FUN_140d214b8(void)

void FUN_140d214b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x100) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100 + 4) = uVar4;
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



// FUNCTION 140d2152a FUN_140d2152a body=183 status=ok
// SIG undefined FUN_140d2152a(void)

void FUN_140d2152a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x170;
        lVar1 = lVar2 + lVar7;
        if (*(int *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x16c) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x16c) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x170 + lVar2 + 0x168);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x168);
          FUN_140a3194c(*param_1 + lVar7 + 8);
          FUN_140d215e2(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x168);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140d215e2 FUN_140d215e2 body=122 status=ok
// SIG undefined FUN_140d215e2(void)

void FUN_140d215e2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x170) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x170) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x170 + 4) = uVar5;
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



// FUNCTION 140d2165c FUN_140d2165c body=229 status=ok
// SIG undefined FUN_140d2165c(void)

void FUN_140d2165c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x40;
        lVar1 = lVar2 + lVar7;
        if (*(int *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x40 + lVar2 + 0x38);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x38);
          lVar7 = *param_1 + lVar7;
          FUN_140a318c3(*(undefined8 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x30));
          if (*(longlong *)(lVar7 + 0x28) != 0) {
            FUN_1400020a8();
          }
          FUN_140a31900(*(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x20));
          if (*(longlong *)(lVar7 + 0x18) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_1400020a8();
          }
          FUN_140d21742(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x38);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140d21742 FUN_140d21742 body=114 status=ok
// SIG undefined FUN_140d21742(void)

void FUN_140d21742(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 140d217b4 FUN_140d217b4 body=293 status=ok
// SIG undefined FUN_140d217b4(void)

void FUN_140d217b4(longlong *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[1];
    uVar6 = uVar2 >> 0xd ^ *param_2 - uVar2;
    uVar8 = uVar6 << 8 ^ (-0x61c88647 - uVar2) - uVar6;
    uVar10 = uVar8 >> 0xd ^ (uVar2 - uVar6) - uVar8;
    uVar11 = uVar10 >> 0xc ^ (uVar6 - uVar8) - uVar10;
    uVar6 = uVar11 << 0x10 ^ (uVar8 - uVar10) - uVar11;
    uVar8 = uVar6 >> 5 ^ (uVar10 - uVar11) - uVar6;
    uVar10 = uVar8 >> 3 ^ (uVar11 - uVar6) - uVar8;
    uVar6 = uVar10 << 10 ^ (uVar6 - uVar8) - uVar10;
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar9 +
                    ((longlong)(int)(uVar6 >> 0xf ^ uVar8 - (uVar10 + uVar6)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar3 * 0x14);
        if ((*piVar1 == *param_2) && (*(uint *)(lVar4 + 4 + (longlong)iVar3 * 0x14) == uVar2)) {
          iVar5 = *(int *)((longlong)plVar9 + (longlong)piVar1[4] * 4);
          if (iVar5 == iVar3) {
            piVar7 = (int *)((longlong)plVar9 + (longlong)piVar1[4] * 4);
          }
          else {
            do {
              piVar7 = (int *)(lVar4 + (longlong)iVar5 * 0x14 + 0xc);
              iVar5 = *piVar7;
            } while (iVar5 != iVar3);
          }
          *piVar7 = piVar1[3];
          FUN_140d218da();
          return;
        }
        iVar3 = piVar1[3];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 140d218da FUN_140d218da body=114 status=ok
// SIG undefined FUN_140d218da(void)

void FUN_140d218da(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 140d2194c FUN_140d2194c body=134 status=ok
// SIG undefined FUN_140d2194c(void)

void FUN_140d2194c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  return;
}



// FUNCTION 140d219d2 FUN_140d219d2 body=19 status=ok
// SIG undefined FUN_140d219d2(void)

undefined1 FUN_140d219d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d219e6(param_3);
  return 1;
}



// FUNCTION 140d219e6 FUN_140d219e6 body=116 status=ok
// SIG undefined FUN_140d219e6(void)

void FUN_140d219e6(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_1400b22c2(local_28,uVar2);
  FUN_140d21a5c(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d21a5c FUN_140d21a5c body=140 status=ok
// SIG undefined FUN_140d21a5c(void)

void FUN_140d21a5c(undefined8 *param_1,undefined8 *param_2)

{
  wint_t _C;
  bool bVar1;
  int iVar2;
  wchar_t *_Str;
  wint_t *pwVar3;
  bool bVar4;
  
  *param_1 = 0;
  if (1 < *(int *)(param_2 + 1)) {
    pwVar3 = (wint_t *)*param_2;
    if ((*pwVar3 == 0x2d) || (*pwVar3 == 0x2b)) {
      pwVar3 = pwVar3 + 1;
    }
    bVar4 = false;
    for (; _C = *pwVar3, _C != 0; pwVar3 = pwVar3 + 1) {
      if (_C == 0x2e) {
        bVar1 = true;
        if (bVar4) goto LAB_140d21ae3;
      }
      else {
        iVar2 = iswdigit(_C);
        bVar1 = bVar4;
        if (iVar2 == 0) {
LAB_140d21ae3:
          *(undefined1 *)param_1 = 0;
          return;
        }
      }
      bVar4 = bVar1;
    }
    *(undefined1 *)param_1 = 1;
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    iVar2 = _wtoi(_Str);
    *(int *)((longlong)param_1 + 4) = iVar2;
  }
  return;
}



// FUNCTION 140d21ae8 FUN_140d21ae8 body=241 status=ok
// SIG undefined FUN_140d21ae8(void)

void FUN_140d21ae8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined **local_b8 [5];
  byte local_8f;
  byte local_8e;
  byte local_8d;
  longlong *local_60;
  longlong local_40;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x10,0,0);
  FUN_144869430(local_b8);
  local_b8[0] = &PTR_FUN_14b3fa8b0;
  local_8d = local_8d | 2;
  local_8f = local_8f & 0xfe;
  local_8e = local_8e & 0xfb;
  local_28 = param_2;
  uVar1 = FUN_140d21bda();
  FUN_14047320e(uVar1,local_b8,param_1 + 0x20,0);
  local_b8[0] = &PTR__purecall_149e35f70;
  if (local_60 != (longlong *)0x0) {
    if (*local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_60);
  }
  if (local_40 != 0) {
    if (*(longlong *)(local_40 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d21bda FUN_140d21bda body=57 status=ok
// SIG undefined FUN_140d21bda(void)

void FUN_140d21bda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69a00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69a00 = FUN_140002ddd(FUN_146522448,uVar1,L"ImpactEffectParams");
  }
  return;
}



// FUNCTION 140d21c14 FUN_140d21c14 body=1514 status=ok
// SIG undefined FUN_140d21c14(void)

void FUN_140d21c14(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_b8 = (undefined2 *)param_5;
  FUN_140d22372();
  lVar7 = param_5 + 0x1d0;
  lVar6 = FUN_140d22434(lVar7);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(lVar6 + 0x18) = *param_2;
  *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_2 + 1);
  FUN_1408226d0(param_3,&local_88,1);
  puVar12 = local_88;
  if (local_80 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  if (param_5 == 0) {
    local_a0 = 0;
  }
  else {
    puVar13 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_5 + 8) != (undefined4 *)0x0) {
      puVar13 = *(undefined4 **)(param_5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_a0,puVar13,1);
  }
  FUN_1400021e4(&local_a0,&local_98);
  puVar11 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar11 = local_98;
  }
  local_b8 = puVar12;
  FUN_140002266(&local_78,L"__%s_%d_%s_ChainActor",puVar11,param_4);
  uStack_60 = 0;
  uStack_5c = 0;
  puVar12 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar12 = local_78;
  }
  FUN_1405f0d29(&local_64,puVar12,0);
  *(undefined4 *)(lVar6 + 0x2c) = uStack_5c;
  *(ulonglong *)(lVar6 + 0x24) = CONCAT44(uStack_60,local_64);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = lVar7;
  lVar7 = FUN_140b9c2d2(lVar7,param_3);
  pbVar3 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc80);
  if ((*pbVar3 & 1) == 0) {
    plVar8 = (longlong *)FUN_148927844();
  }
  else {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar5 = *(undefined4 *)(lVar6 + 0xc7c);
    *pbVar3 = 0;
    *(undefined4 *)(lVar6 + 0xc7c) = 0xffffffff;
    plVar8 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b41dea0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    plVar8[7] = 0;
    plVar8[8] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    plVar8[2] = (longlong)&PTR_FUN_14b008de0;
    *(undefined4 *)((longlong)plVar8 + 0x5c) = 0;
    *(undefined4 *)(plVar8 + 10) = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    *(undefined4 *)(lVar6 + 0xc7c) = uVar5;
    *pbVar3 = 1;
  }
  *(undefined1 *)(plVar8 + 5) = *(undefined1 *)(param_1 + 0x30);
  if (plVar8[6] == *(longlong *)(param_1 + 0x38)) {
    iVar10 = *(int *)(param_1 + 0x40);
    if ((int)plVar8[7] != iVar10) goto LAB_140d21e95;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x40);
LAB_140d21e95:
    plVar8[6] = *(longlong *)(param_1 + 0x38);
    *(int *)(plVar8 + 7) = iVar10;
    plVar8[8] = 0;
  }
  *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(param_1 + 0x58);
  plVar8[9] = *(longlong *)(param_1 + 0x50);
  plVar8[0xb] = *(longlong *)(param_1 + 8);
  *(undefined4 *)(plVar8 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar10 = *(int *)(lVar7 + 0x50);
  *(uint *)(lVar7 + 0x50) = iVar10 + 1U;
  if (*(uint *)(lVar7 + 0x54) < iVar10 + 1U) {
    FUN_140822376((longlong *)(lVar7 + 0x48),iVar10);
  }
  lVar9 = local_a8;
  lVar6 = *(longlong *)(lVar7 + 0x48);
  *(longlong **)(lVar6 + (longlong)iVar10 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar10 * 0x10) = plVar8;
  if (plVar8 == (longlong *)0x0) {
    FUN_140d22200(local_a8,lVar7 + 0x18);
  }
  else {
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
    FUN_140d22200(lVar9,lVar7 + 0x18);
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
  if (*(char *)(param_1 + 0x60) == '\0') {
    if ((*(longlong *)(param_1 + 0x68) == 0) || (0xfffffffd < *(int *)(param_1 + 0x70) - 1U))
    goto LAB_140d220af;
  }
  else if (*(int *)(param_1 + 0x80) == 0) goto LAB_140d220af;
  lVar7 = FUN_140b9c2d2(lVar9,(longlong *)(param_1 + 8));
  puVar13 = (undefined4 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc7c)
  ;
  uVar5 = *puVar13;
  bVar4 = *pbVar3;
  if ((bVar4 & 1) != 0) {
    *pbVar3 = 0;
    *puVar13 = 0xffffffff;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b41dec0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[2] = (longlong)&PTR_FUN_14b008e20;
  plVar8[8] = 0;
  if ((bVar4 & 1) != 0) {
    *puVar13 = uVar5;
    *pbVar3 = 1;
  }
  *(undefined1 *)(plVar8 + 5) = *(undefined1 *)(param_1 + 0x60);
  iVar10 = *(int *)(param_1 + 0x70);
  if ((*(longlong *)(param_1 + 0x68) != 0) || (iVar10 != 0)) {
    plVar8[6] = *(longlong *)(param_1 + 0x68);
    *(int *)(plVar8 + 7) = iVar10;
    plVar8[8] = 0;
  }
  *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(param_1 + 0x88);
  plVar8[9] = *(longlong *)(param_1 + 0x80);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar10 = *(int *)(lVar7 + 0x50);
  *(uint *)(lVar7 + 0x50) = iVar10 + 1U;
  if (*(uint *)(lVar7 + 0x54) < iVar10 + 1U) {
    FUN_140822376((longlong *)(lVar7 + 0x48),iVar10);
  }
  lVar9 = local_a8;
  lVar6 = *(longlong *)(lVar7 + 0x48);
  *(longlong **)(lVar6 + (longlong)iVar10 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar10 * 0x10) = plVar8;
  if (plVar8 == (longlong *)0x0) {
    FUN_140d22200(local_a8,lVar7 + 0x18);
  }
  else {
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
    FUN_140d22200(lVar9,lVar7 + 0x18);
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
LAB_140d220af:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d22200 FUN_140d22200 body=90 status=ok
// SIG undefined FUN_140d22200(void)

void FUN_140d22200(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_140d2225a();
  *(undefined8 *)(lVar3 + 0x20) = *param_2;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 140d2225a FUN_140d2225a body=137 status=ok
// SIG undefined FUN_140d2225a(void)

undefined8 FUN_140d2225a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140d222e4();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_140d2231e(param_1,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d222e4 FUN_140d222e4 body=57 status=ok
// SIG undefined FUN_140d222e4(void)

void FUN_140d222e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba20 = FUN_140002ddd(FUN_14652d9a0,uVar1,L"MissionActionType_BinderEnable");
  }
  return;
}



// FUNCTION 140d2231e FUN_140d2231e body=83 status=ok
// SIG undefined FUN_140d2231e(void)

longlong * FUN_140d2231e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140d222e4();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140d22372 FUN_140d22372 body=193 status=ok
// SIG undefined FUN_140d22372(void)

void FUN_140d22372(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar3);
      if (plVar1 != (longlong *)0x0) {
        local_48 = *(undefined4 *)(param_1 + 0x10);
        local_50 = *(undefined8 *)(param_1 + 8);
        local_60 = *param_2;
        local_58 = *(undefined4 *)(param_2 + 1);
        local_68 = param_5;
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_60,&local_50,uVar4 & 0xffffffff);
        iVar2 = *(int *)(param_1 + 0x28);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)uVar4 < (longlong)iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d22434 FUN_140d22434 body=256 status=ok
// SIG undefined FUN_140d22434(void)

longlong * FUN_140d22434(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b41bae0;
  plVar6 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b347590;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  iVar3 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar3 + 1U;
  if (*(uint *)(param_1 + 300) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_1 + 0x120),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((longlong *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  }
  return plVar6;
}



// FUNCTION 140d22534 FUN_140d22534 body=1013 status=ok
// SIG undefined FUN_140d22534(void)

void FUN_140d22534(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_b8 = (undefined2 *)param_5;
  FUN_140d22372();
  lVar2 = param_5 + 0x1d0;
  lVar7 = FUN_140d22434(lVar2);
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(lVar7 + 0x18) = *param_2;
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_2 + 1);
  FUN_1408226d0(param_3,&local_88,1);
  puVar10 = local_88;
  if (local_80 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  if (param_5 == 0) {
    local_a0 = 0;
  }
  else {
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_5 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(param_5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_a0,puVar14,1);
  }
  FUN_1400021e4(&local_a0,&local_98);
  puVar13 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar13 = local_98;
  }
  local_b8 = puVar10;
  FUN_140002266(&local_78,L"__%s_%d_%s_ChildActor",puVar13,param_4);
  uStack_60 = 0;
  uStack_5c = 0;
  puVar10 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar10 = local_78;
  }
  FUN_1405f0d29(&local_64,puVar10,0);
  *(undefined4 *)(lVar7 + 0x2c) = uStack_5c;
  *(ulonglong *)(lVar7 + 0x24) = CONCAT44(uStack_60,local_64);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = lVar2;
  lVar7 = FUN_140b9c2d2(lVar2,param_3);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(lVar7 + 0x20);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar7 + 0x18);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar14 = (undefined4 *)(lVar2 + 0xc7c);
  uVar5 = *puVar14;
  pbVar3 = (byte *)(lVar2 + 0xc80);
  bVar4 = *pbVar3;
  if ((bVar4 & 1) != 0) {
    *pbVar3 = 0;
    *puVar14 = 0xffffffff;
  }
  plVar8 = (longlong *)FUN_14001cc68(0xe0);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b41dee0;
  memset(plVar8 + 2,0,0xd0);
  lVar2 = local_a8;
  plVar8[2] = (longlong)&PTR_FUN_14affdee0;
  plVar8[8] = 0;
  if ((bVar4 & 1) != 0) {
    *puVar14 = uVar5;
    *pbVar3 = 1;
  }
  *(undefined1 *)(plVar8 + 5) = *(undefined1 *)(param_1 + 0xa8);
  iVar6 = *(int *)(param_1 + 0xb8);
  if ((*(longlong *)(param_1 + 0xb0) != 0) || (iVar6 != 0)) {
    plVar8[6] = *(longlong *)(param_1 + 0xb0);
    *(int *)(plVar8 + 7) = iVar6;
    plVar8[8] = 0;
  }
  *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(param_1 + 0xd0);
  plVar8[9] = *(longlong *)(param_1 + 200);
  *(undefined4 *)(plVar8 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  plVar8[0xb] = *(longlong *)(param_1 + 8);
  plVar8[0x1a] = *(longlong *)(param_1 + 0xa0);
  plVar11 = (longlong *)(param_1 + 0x40);
  plVar12 = plVar8 + 0xe;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar12 = *plVar11;
    plVar11 = plVar11 + 1;
    plVar12 = plVar12 + 1;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar6 = *(int *)(lVar7 + 0x50);
  *(uint *)(lVar7 + 0x50) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0x54) < iVar6 + 1U) {
    FUN_140822376((longlong *)(lVar7 + 0x48),iVar6);
  }
  lVar7 = *(longlong *)(lVar7 + 0x48);
  *(longlong **)(lVar7 + (longlong)iVar6 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar7 + 8 + (longlong)iVar6 * 0x10) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_140d22200(lVar2,param_1 + 0xd8);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d22934 FUN_140d22934 body=79 status=ok
// SIG undefined FUN_140d22934(void)

void FUN_140d22934(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (DAT_14c8445d0 != 0) {
    FUN_140d22984(DAT_14c8445d0,param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140859a90(param_1);
  return;
}



// FUNCTION 140d22984 FUN_140d22984 body=854 status=ok
// SIG undefined FUN_140d22984(void)

void FUN_140d22984(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  bool bVar16;
  
  plVar12 = (longlong *)param_2[1];
  if (plVar12 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar7 = (int)plVar12[1];
    do {
      iVar6 = iVar7;
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_140d22b37;
      }
      LOCK();
      iVar7 = (int)plVar12[1];
      bVar16 = iVar6 == iVar7;
      if (bVar16) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      UNLOCK();
    } while (!bVar16);
    uVar4 = *param_2;
    if (uVar4 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar12 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar15 = (int *)((longlong)plVar12 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        lVar10 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar10 = param_1 + 0xd8;
        }
        uVar11 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)*(int *)(param_1 + 0xe8) - 1U;
        iVar7 = *(int *)(lVar10 + uVar11 * 4);
        if (iVar7 != -1) {
          plVar3 = (longlong *)(param_1 + 0xa0);
          piVar15 = (int *)(lVar10 + uVar11 * 4);
LAB_140d22a72:
          lVar10 = *plVar3;
          lVar9 = (longlong)iVar7;
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          uVar11 = *(ulonglong *)(lVar10 + lVar9 * 0x18);
          plVar5 = *(longlong **)(lVar10 + 8 + lVar9 * 0x18);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
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
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          if (uVar11 != uVar4) goto LAB_140d22c36;
          iVar7 = *piVar15;
          lVar10 = param_1 + 0xd8;
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            lVar10 = *(longlong *)(param_1 + 0xe0);
          }
          lVar9 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar7 * 0x18;
          lVar14 = (longlong)*(int *)(lVar9 + 0x14);
          iVar13 = *(int *)(lVar10 + lVar14 * 4);
          if (iVar13 == iVar7) {
            piVar15 = (int *)(lVar10 + lVar14 * 4);
          }
          else {
            do {
              piVar15 = (int *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar13 * 0x18 + 0x10);
              iVar13 = *piVar15;
            } while (iVar13 != iVar7);
          }
          *piVar15 = *(int *)(lVar9 + 0x10);
          plVar5 = *(longlong **)(*plVar3 + 8 + (longlong)iVar7 * 0x18);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar15 = (int *)((longlong)plVar5 + 0xc);
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (*piVar15 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_140d22d04(plVar3,iVar7);
        }
      }
LAB_140d22b24:
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar15 = (int *)((longlong)plVar12 + 0xc);
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    }
LAB_140d22b37:
    plVar3 = (longlong *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar15 = (int *)((longlong)plVar3 + 0xc);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (iVar6 != 0) {
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar15 = (int *)((longlong)plVar12 + 0xc);
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d22b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x10))(plVar12);
          return;
        }
      }
    }
  }
  return;
LAB_140d22c36:
  lVar10 = lVar10 + lVar9 * 0x18;
  iVar7 = *(int *)(lVar10 + 0x10);
  piVar15 = (int *)(lVar10 + 0x10);
  if (iVar7 == -1) goto LAB_140d22b24;
  goto LAB_140d22a72;
}



// FUNCTION 140d22cda FUN_140d22cda body=42 status=ok
// SIG undefined FUN_140d22cda(void)

void FUN_140d22cda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140d22d80(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140d22d04 FUN_140d22d04 body=116 status=ok
// SIG undefined FUN_140d22d04(void)

void FUN_140d22d04(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140d22d80 FUN_140d22d80 body=181 status=ok
// SIG undefined FUN_140d22d80(void)

void FUN_140d22d80(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xc0) != param_1 + 200) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_140cf19b0(lVar2);
    FUN_1401773f0(lVar2);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14250edb0();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14250edb0();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 140d22e40 FUN_140d22e40 body=1814 status=ok
// SIG undefined FUN_140d22e40(void)

undefined8 * FUN_140d22e40(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14cb717f0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140486538(param_2,DAT_14cb717f0);
  FUN_14048646a(param_2 + 0x20,uVar1,0,0);
  FUN_14064ffa8(param_1,param_2);
  *param_1 = &PTR_FUN_14b69fc10;
  param_1[0x72] = &PTR_FUN_14b6a0280;
  param_1[0x73] = &PTR_FUN_14b6a02a0;
  param_1[0x74] = &PTR_FUN_14b6a02d0;
  param_1[0x75] = &PTR_FUN_14b6a02e0;
  param_1[0x76] = &PTR_FUN_14b6a0350;
  param_1[0x77] = &PTR_FUN_14b6a0380;
  param_1[0x78] = &PTR_FUN_14b6a03b0;
  param_1[0x7f] = &PTR_FUN_14b6a0460;
  param_1[0x80] = &PTR_FUN_14b6a04d0;
  param_1[0x81] = &PTR_FUN_14b6a0540;
  param_1[0x82] = &PTR_FUN_14b6a0570;
  param_1[0x83] = &PTR_FUN_14b6a05b0;
  param_1[0x84] = &PTR_FUN_14b6a0650;
  param_1[0x85] = &PTR_FUN_14b6a0670;
  param_1[0x89] = &PTR_FUN_14b6a0690;
  param_1[0x8a] = &PTR_FUN_14b6a0750;
  param_1[0x8b] = &PTR_FUN_14b6a07d0;
  param_1[0x8c] = &PTR_FUN_14b6a0820;
  param_1[0x8d] = &PTR_FUN_14b6a0860;
  param_1[0x8e] = &PTR_FUN_14b6a0880;
  param_1[0x8f] = &PTR_FUN_14b6a08a0;
  param_1[0x90] = &PTR_FUN_14b6a08c0;
  param_1[0x91] = &PTR_FUN_14b6a08e0;
  param_1[0x92] = &PTR_FUN_14b6a0900;
  param_1[0x93] = &PTR_FUN_14b6a0920;
  param_1[0x94] = &PTR_FUN_14b6a0940;
  param_1[0x95] = &PTR_FUN_14b6a0960;
  param_1[0x96] = &PTR_FUN_14b6a0980;
  param_1[0x34b] = &PTR_FUN_14b6a09a0;
  param_1[0x352] = &PTR_FUN_14b6a09b0;
  param_1[0x353] = &PTR_FUN_14b6a09f0;
  param_1[0x354] = &PTR_FUN_14b6a0a30;
  param_1[0x355] = &PTR_FUN_14b6a0a80;
  param_1[0x356] = &PTR_FUN_14b6a0ab0;
  param_1[0x359] = &PTR_FUN_14b6a0af0;
  param_1[0x35a] = &PTR_FUN_14b6a0b00;
  param_1[0x35b] = &PTR_FUN_14b6a0b30;
  param_1[0x35c] = &PTR_FUN_14b6a0bd0;
  param_1[0x4bf] = &PTR_FUN_14b6a0bf0;
  param_1[0x4c0] = &PTR_FUN_14b6a0c30;
  param_1[0x4d9] = 0;
  param_1[0x4da] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4c8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2647) = 0;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  param_1[0x4cc] = 0;
  param_1[0x4cd] = 0;
  *(undefined4 *)(param_1 + 0x4ce) = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = 0;
  *(undefined4 *)(param_1 + 0x4db) = 2;
  param_1[0x4ec] = 0;
  *(undefined4 *)(param_1 + 0x4ed) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x273c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2744) = 0;
  *(undefined8 *)((longlong)param_1 + 0x272c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2734) = 0;
  *(undefined8 *)((longlong)param_1 + 0x271c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2724) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x276c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2774) = 0;
  param_1[0x4f0] = 0;
  *(undefined4 *)(param_1 + 0x4f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x279d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27a5) = 0;
  param_1[0x4f2] = 0;
  param_1[0x4f3] = 0;
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  param_1[0x4fc] = 2;
  *(undefined1 *)(param_1 + 0x512) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27e7) = 0;
  param_1[0x504] = 0;
  param_1[0x502] = 0;
  param_1[0x503] = 0;
  param_1[0x500] = 0;
  param_1[0x501] = 0;
  param_1[0x4fe] = 0;
  param_1[0x4ff] = 0;
  param_1[0x514] = 0;
  param_1[0x515] = 0;
  param_1[0x516] = 0;
  param_1[0x517] = 0;
  param_1[0x4d4] = &PTR_FUN_14b6a0e80;
  *(undefined4 *)((longlong)param_1 + 0x28d7) = 0;
  param_1[0x519] = 0;
  param_1[0x51a] = 0;
  *(undefined1 *)(param_1 + 0x52a) = 0;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  param_1[0x526] = 0;
  param_1[0x527] = 0;
  param_1[0x524] = 0;
  param_1[0x525] = 0;
  param_1[0x522] = 0;
  param_1[0x523] = 0;
  param_1[0x520] = 0;
  param_1[0x521] = 0;
  param_1[0x51e] = 0;
  param_1[0x51f] = 0;
  param_1[0x51c] = 0;
  param_1[0x51d] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar4 = param_1 + 0x51f;
    param_1[0x522] = &DAT_14cbcd1d0;
    param_1[0x521] = param_1;
    lVar2 = DAT_14cbcd1d0;
    while( true ) {
      param_1[0x51f] = lVar2;
      LOCK();
      lVar3 = *(longlong *)param_1[0x522];
      bVar5 = lVar2 == lVar3;
      if (bVar5) {
        *(longlong *)param_1[0x522] = (longlong)plVar4;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar5) break;
      param_1[0x51f] = lVar3;
      lVar2 = *(longlong *)param_1[0x522];
    }
    if (*plVar4 != 0) {
      *(longlong **)(*plVar4 + 8) = plVar4;
    }
  }
  uVar1 = DAT_14cbcccc8;
  if (DAT_14cb63950 == 0) {
    local_50 = &local_30;
    local_30 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464ec72a;
    local_58 = &LAB_1486f5f75;
    local_60 = &LAB_140945686;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  local_80 = local_80 & 0xffffff00;
  local_88 = local_88 & 0xffffff00;
  plVar4 = (longlong *)FUN_14048696c(param_1,uVar1,DAT_14cb63950,DAT_14cb63950);
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar4;
    if (plVar4 != (longlong *)0x0) goto LAB_140d23310;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0x39] = plVar4;
LAB_140d23310:
    if (DAT_14cac7cb8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1417963e0;
      local_58 = &LAB_1478a2d90;
      local_60 = &LAB_146395589;
      local_68 = L"Engine";
      local_70 = 0x20000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0xad0;
      FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
      plVar4 = (longlong *)param_1[0x39];
      if (plVar4 == (longlong *)0x0) goto LAB_140d23501;
    }
    if ((((DAT_14cac7cb8 != 0) && (lVar2 = plVar4[2], lVar2 != 0)) &&
        (*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
        DAT_14cac7cb8 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar4);
      }
      param_1[0x4d1] = plVar4;
      (**(code **)(*plVar4 + 0x728))(plVar4,DAT_14cbcccb8,1);
      (**(code **)(*(longlong *)param_1[0x4d1] + 0x588))((longlong *)param_1[0x4d1],2);
      goto LAB_140d2350c;
    }
  }
LAB_140d23501:
  param_1[0x4d1] = 0;
LAB_140d2350c:
  *(undefined1 *)((longlong)param_1 + 0x179) = 2;
  FUN_1405e4918(param_1,0x3f800000);
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d23558 FUN_140d23558 body=108 status=ok
// SIG undefined FUN_140d23558(void)

undefined8 * FUN_140d23558(undefined8 *param_1)

{
  FUN_140d235c4();
  *param_1 = &PTR_FUN_14b6a9790;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 2;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x239) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  return param_1;
}



// FUNCTION 140d235c4 FUN_140d235c4 body=426 status=ok
// SIG undefined FUN_140d235c4(void)

undefined8 * FUN_140d235c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b02e0f0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xffffffe0 | 3;
  FUN_1405c5fa2();
  param_1[0x1d] = &DAT_14cb769e8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  memset((void *)((longlong)param_1 + 0x104),0,0xd8);
  param_1[0x3c] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  FUN_1405c5fa2();
  param_1[0x40] = &DAT_14cb769e8;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = &PTR_FUN_14b0394b0;
  *(undefined4 *)(param_1 + 0x38) = 0x40000000;
  FUN_14020a6cc(param_1 + 0x37,1);
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  FUN_14020a6cc((void *)((longlong)param_1 + 0x104),1);
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x22,1);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x11c,1);
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x25,1);
  return param_1;
}



// FUNCTION 140d2376e FUN_140d2376e body=49 status=ok
// SIG undefined FUN_140d2376e(void)

longlong FUN_140d2376e(void)

{
  if (DAT_14cb291b8 == 0) {
    FUN_140f50038(&DAT_14cb291b8,&PTR_s__Script_GameplayCameras_14ad095e7_1_14ad095c8);
  }
  return DAT_14cb291b8;
}



// FUNCTION 140d237a0 FUN_140d237a0 body=126 status=ok
// SIG undefined FUN_140d237a0(void)

undefined8 * FUN_140d237a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140d2386a(param_1,iVar1,0);
    FUN_140d2381e(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1401f3db8(param_1 + 2,param_2 + 2);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 140d2381e FUN_140d2381e body=76 status=ok
// SIG undefined FUN_140d2381e(void)

void FUN_140d2381e(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 140d2386a FUN_140d2386a body=334 status=ok
// SIG undefined FUN_140d2386a(void)

void FUN_140d2386a(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d238dc;
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
LAB_140d238dc:
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



// FUNCTION 140d239c6 FUN_140d239c6 body=1123 status=ok
// SIG undefined FUN_140d239c6(void)

void FUN_140d239c6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_140d23e2a(&local_78,param_1 + 0xc);
      FUN_140653d46(param_1 + 0x28,&local_78);
    }
    local_80 = DAT_14cb861c0;
    local_88 = DAT_14cb861b8;
    FUN_1448075d0(&local_78);
    pbVar6 = (byte *)*param_3;
    if (pbVar6 != (byte *)0x0) {
      if ((*pbVar6 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar6 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar11 != -1) {
          do {
            lVar3 = *plVar9 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_78) {
              if ((((lVar3 != 0) &&
                   (puVar10 = (undefined8 *)(lVar3 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_140d23ab2;
              break;
            }
            iVar11 = *(int *)(lVar3 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d23ab2:
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) != 0)) {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      FUN_14579c39a(puVar10,&local_78,0);
      if (local_78 != 0) {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar2 = (undefined4 *)(lVar3 + 0xc7c);
        uVar5 = *puVar2;
        pbVar6 = (byte *)(lVar3 + 0xc80);
        bVar4 = *pbVar6;
        if ((bVar4 & 1) != 0) {
          *pbVar6 = 0;
          *puVar2 = 1;
        }
        iVar11 = *(int *)(param_1 + 0x90);
        uVar8 = iVar11 + 1;
        if (iVar11 < -1) goto LAB_140d23e05;
        plVar9 = (longlong *)(param_1 + 0x88);
        uVar7 = *(uint *)(param_1 + 0x94);
        if ((int)uVar7 <= iVar11) {
          FUN_14579c328(plVar9);
          iVar11 = *(int *)(param_1 + 0x90);
          uVar7 = *(uint *)(param_1 + 0x94);
          uVar8 = iVar11 + 1;
        }
        *(uint *)(param_1 + 0x90) = uVar8;
        if (uVar7 < uVar8) {
          FUN_14890b22c(plVar9,iVar11);
        }
        puVar10 = (undefined8 *)(*plVar9 + (longlong)iVar11 * 0x18);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        FUN_1401f3db8(puVar10,&local_78);
        if ((bVar4 & 1) != 0) {
          *puVar2 = uVar5;
          *pbVar6 = 1;
        }
      }
      plVar9 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_70 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    local_80 = DAT_14cb861d8;
    local_88 = DAT_14cb861d0;
    FUN_1448075d0(&local_78);
    pbVar6 = (byte *)*param_3;
    if (pbVar6 != (byte *)0x0) {
      if ((*pbVar6 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar6 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar11 != -1) {
          do {
            lVar3 = *plVar9 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_78) {
              if (((lVar3 != 0) &&
                  (puVar10 = (undefined8 *)(lVar3 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
              goto LAB_140d23b67;
              break;
            }
            iVar11 = *(int *)(lVar3 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d23b67:
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) != 0)) {
      FUN_14068d188(puVar10,&local_78,0);
      if ((uint)local_78 != 0) {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar2 = (undefined4 *)(lVar3 + 0xc7c);
        uVar5 = *puVar2;
        pbVar6 = (byte *)(lVar3 + 0xc80);
        bVar4 = *pbVar6;
        if ((bVar4 & 1) != 0) {
          *pbVar6 = 0;
          *puVar2 = 1;
        }
        iVar11 = *(int *)(param_1 + 0x20);
        uVar8 = iVar11 + 1;
        if (iVar11 < -1) {
LAB_140d23e05:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar8);
        }
        plVar9 = (longlong *)(param_1 + 0x18);
        uVar7 = *(uint *)(param_1 + 0x24);
        if ((int)uVar7 <= iVar11) {
          FUN_1446dda88(plVar9);
          iVar11 = *(int *)(param_1 + 0x20);
          uVar7 = *(uint *)(param_1 + 0x24);
          uVar8 = iVar11 + 1;
        }
        *(uint *)(param_1 + 0x20) = uVar8;
        if (uVar7 < uVar8) {
          FUN_1446dd912(plVar9,iVar11);
        }
        lVar3 = *plVar9;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar11 * 0xc) = plStack_70._0_4_;
        *(longlong *)(lVar3 + (longlong)iVar11 * 0xc) = local_78;
        if ((bVar4 & 1) != 0) {
          *puVar2 = uVar5;
          *pbVar6 = 1;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d23e2a FUN_140d23e2a body=191 status=ok
// SIG undefined FUN_140d23e2a(void)

undefined8 FUN_140d23e2a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,local_48);
  FUN_1400b22c2(local_58,"Type.");
  FUN_1401c7f3e(&local_38,local_58,local_48);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_38,1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d23eea FUN_140d23eea body=57 status=ok
// SIG undefined FUN_140d23eea(void)

void FUN_140d23eea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cb48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cb48 = FUN_140002ddd(FUN_146533842,uVar1,L"MissionSubAlias");
  }
  return;
}



// FUNCTION 140d23f24 FUN_140d23f24 body=353 status=ok
// SIG undefined FUN_140d23f24(void)

void FUN_140d23f24(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_2 + 0x48);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)(param_1 + 0x44) < iVar3) {
    FUN_140d244fa(param_1 + 0x38);
    iVar3 = *(int *)(param_2 + 0x48);
  }
  if (iVar3 != 0) {
    plVar4 = *(longlong **)(param_2 + 0x40);
    plVar6 = plVar4 + iVar3;
    do {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        puVar2 = (uint *)FUN_140d24086(param_1 + 0x38);
        uVar1 = *(uint *)(lVar5 + 0xc);
        *puVar2 = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        uVar1 = *(uint *)(lVar5 + 0x10);
        if (*(uint *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar8 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar8);
          }
          LOCK();
          uVar1 = *(uint *)(lVar5 + 0x10);
          bVar9 = uVar1 == 0;
          if (bVar9) {
            *(uint *)(lVar5 + 0x10) = uVar8;
            uVar1 = 0;
          }
          UNLOCK();
          if (bVar9) {
            uVar1 = uVar8;
          }
        }
        puVar2[1] = uVar1;
        if ((longlong)*(int *)(param_1 + 0x50) != 0) {
          lVar5 = (longlong)*(int *)(param_1 + 0x50) << 6;
          do {
            FUN_14054a65c();
            lVar5 = lVar5 + -0x40;
          } while (lVar5 != 0);
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar6);
  }
  iVar3 = *(int *)(param_2 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x30);
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar7) != 0) {
        FUN_140d240e2(param_1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  return;
}



// FUNCTION 140d24086 FUN_140d24086 body=70 status=ok
// SIG undefined FUN_140d24086(void)

longlong FUN_140d24086(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140d24646(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_140d240cc(lVar2,1);
  return lVar2;
}



// FUNCTION 140d240cc FUN_140d240cc body=22 status=ok
// SIG undefined FUN_140d240cc(void)

void FUN_140d240cc(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 140d240e2 FUN_140d240e2 body=619 status=ok
// SIG undefined FUN_140d240e2(void)

void FUN_140d240e2(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar7 = (longlong)*(int *)(param_1 + 0x60) << 3;
    do {
      cVar2 = FUN_14069eaf4(lVar4,param_2);
      if (cVar2 != '\0') goto LAB_140d24243;
      lVar4 = lVar4 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (param_2 == 0) {
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar4 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
      uVar5 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_140155462(param_1 + 0x58,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) =
       (ulonglong)uVar8 | uVar5 << 0x20;
  local_58 = FUN_140bfe0c8;
  local_50 = 0;
  FUN_140d2434e(&local_48,param_1);
  FUN_14080ef1c(param_2 + 0x300,&local_58,&local_48);
  if (local_40 == 0) {
LAB_140d241e3:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140d241e3;
  }
  local_58 = FUN_140bfe324;
  local_50 = 0;
  FUN_140d2434e(&local_48,param_1);
  FUN_14080ef1c(param_2 + 0x318,&local_58,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_140d24243;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140d24243:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2434e FUN_140d2434e body=428 status=ok
// SIG undefined FUN_140d2434e(void)

longlong * FUN_140d2434e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_140d2442e:
    *puVar5 = &PTR_LAB_14a915ec0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b430b40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_140d2442e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a915ec0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b430b40;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d244fa FUN_140d244fa body=332 status=ok
// SIG undefined FUN_140d244fa(void)

void FUN_140d244fa(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140d24568;
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
LAB_140d24568:
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



// FUNCTION 140d24646 FUN_140d24646 body=370 status=ok
// SIG undefined FUN_140d24646(void)

void FUN_140d24646(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d246d1;
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
LAB_140d246d1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140d247b8 FUN_140d247b8 body=52 status=ok
// SIG undefined FUN_140d247b8(void)

void FUN_140d247b8(longlong param_1)

{
  FUN_140d247ec();
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x768) + 0x5fd0,param_1);
    return;
  }
  return;
}



// FUNCTION 140d247ec FUN_140d247ec body=95 status=ok
// SIG undefined FUN_140d247ec(void)

void FUN_140d247ec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x558) + 0x1258,param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x638);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x6a8) == '\x01')) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x1108) + 0x10))(lVar1 + 0x1108);
    FUN_140d2484c(uVar2);
    return;
  }
  return;
}



// FUNCTION 140d2484c FUN_140d2484c body=1174 status=ok
// SIG undefined FUN_140d2484c(void)

void FUN_140d2484c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((((*(int *)(param_1 + 0x6c) != 0) && (uVar2 = *(uint *)(param_1 + 0x68), -1 < (int)uVar2))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       ((plVar7 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x6c))))) &&
      ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar11 = *plVar7, lVar11 != 0)) {
    iVar4 = *(int *)(param_1 + 0x94);
    FUN_140d24ce3(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    if ((iVar4 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
      FUN_1457e5992(param_1 + 0x88);
    }
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0xd9) = 0;
    uVar5 = FUN_1447210f0(lVar11);
    FUN_140d24d2e(&local_58,uVar5);
    if (local_50 != (longlong *)0x0) {
      iVar4 = (int)local_50[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar12 = (int)local_50[1];
        bVar14 = iVar4 == iVar12;
        if (bVar14) {
          *(int *)(local_50 + 1) = iVar4 + 1;
          iVar12 = iVar4;
        }
        iVar4 = iVar12;
        UNLOCK();
        plVar7 = local_50;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      pcVar3 = local_58;
      if (plVar7 != (longlong *)0x0) {
        if ((local_58 != (code *)0x0) && (*(longlong *)(param_1 + 0x70) != 0)) {
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar4 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar4 = *(int *)(lVar11 + 0x10);
            bVar14 = iVar4 == 0;
            if (bVar14) {
              *(int *)(lVar11 + 0x10) = iVar12;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar4 = iVar12;
            }
          }
          if ((((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
              (iVar4 != 0)) && ((-1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
            lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if ((lVar11 != 0) &&
               ((*(int *)(lVar11 + 0x10) == iVar4 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0))))
            {
              iVar12 = *(int *)(pcVar3 + 0x60);
              if ((longlong)iVar12 != 0) {
                local_60 = pcVar3 + 0x58;
                lVar11 = *(longlong *)(pcVar3 + 0x58);
                iVar9 = 1;
                lVar8 = 0;
                lVar6 = 0;
                do {
                  if (*(longlong *)(lVar11 + 8 + lVar8) == *(longlong *)(param_1 + 0x78)) {
                    if (iVar9 != 0) {
                      iVar9 = iVar12 - iVar9;
                      if (iVar9 != 0) {
                        iVar10 = 1;
                        if (iVar9 < 1) {
                          iVar10 = iVar9;
                        }
                        memmove((void *)((lVar6 >> 0x20) * 0x10 + lVar11),
                                (void *)((longlong)(iVar12 - iVar10) * 0x10 + lVar11),
                                (longlong)iVar10 << 4);
                        iVar12 = *(int *)(pcVar3 + 0x60);
                      }
                      *(int *)(pcVar3 + 0x60) = iVar12 + -1;
                      FUN_14072f168(local_60);
                    }
                    break;
                  }
                  lVar6 = lVar6 + 0x100000000;
                  iVar9 = iVar9 + 1;
                  lVar8 = lVar8 + 0x10;
                } while ((longlong)iVar12 << 4 != lVar8);
              }
              if (((((int)uVar2 < DAT_14c9647dc) &&
                   (plVar13 = (longlong *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   plVar13 != (longlong *)0x0)) && ((int)plVar13[2] == iVar4)) &&
                 (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (lVar11 = *plVar13, lVar11 != 0))))
              {
                if (DAT_14cac9ca8 == 0) {
                  local_58 = FUN_141030f22;
                  local_70 = FUN_14081d0ea;
                  local_78 = FUN_14081d0ea;
                  local_80 = &local_58;
                  local_88 = &LAB_1478c0a72;
                  local_90 = &LAB_1417b2375;
                  local_98 = L"Engine";
                  local_a0 = 0x1000000000;
                  local_a8 = 0x10000004;
                  local_b0 = 8;
                  local_b8 = 0x390;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                }
                if (((*(int *)(DAT_14cac9ca8 + 0x38) <=
                      *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
                   (lVar11 = FUN_1406c47dc(lVar11), lVar11 != 0)) {
                  FUN_1401c4d5c(pcVar3 + 0x20,lVar11,lVar11 + 0x40);
                }
              }
            }
          }
        }
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d24ce3 FUN_140d24ce3 body=75 status=ok
// SIG undefined FUN_140d24ce3(void)

void FUN_140d24ce3(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x130);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-0x20] == '\x01') {
        pcVar1[-0x20] = '\0';
      }
      if (pcVar1[-0x40] == '\x01') {
        pcVar1[-0x40] = '\0';
      }
      if (pcVar1[-0x88] == '\x01') {
        pcVar1[-0x88] = '\0';
      }
      pcVar1 = pcVar1 + 0x138;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d24d2e FUN_140d24d2e body=310 status=ok
// SIG undefined FUN_140d24d2e(void)

longlong * FUN_140d24d2e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb71d90;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d24e66 FUN_140d24e66 body=538 status=ok
// SIG undefined FUN_140d24e66(void)

longlong * FUN_140d24e66(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14c8733f4);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  if (uVar7 < 0x1d) {
    FUN_140e74ec2(param_1,param_2);
    goto LAB_140d24efd;
  }
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    uVar2 = param_1[0x15];
    if (param_1[0x14] <= (longlong)uVar2) {
      FUN_1405d09b8(param_1,1);
      goto LAB_140d24f44;
    }
    bVar1 = *(byte *)(param_1[0x12] + (longlong)(int)(uVar2 >> 3));
    param_1[0x15] = uVar2 + 1;
    local_50 = 0;
    if ((bVar1 >> ((uint)uVar2 & 7) & 1) == 0) goto LAB_140d24f44;
    FUN_140e74ec2(param_1,param_2);
  }
  else {
LAB_140d24f44:
    local_50 = 0;
    plVar3 = (longlong *)param_1[0x16];
    uVar8 = FUN_1446f8646();
    local_58 = 0;
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,uVar8,&local_50);
    lVar5 = local_50;
    if (local_50 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      if (*(int *)((longlong)param_2 + 0x24) < 0) {
        FUN_1446f8c06(param_2 + 3,0);
      }
      puVar4 = (undefined2 *)param_2[3];
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_48,local_50);
      *(undefined4 *)(param_2 + 1) = local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
      *(undefined4 *)(param_2 + 2) = uStack_40;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
      if (param_2 + 1 == (undefined8 *)&local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_2[3] != 0) {
          FUN_1400020a8();
        }
        param_2[3] = local_38;
        local_38 = 0;
        *(undefined4 *)(param_2 + 4) = local_30;
        *(undefined4 *)((longlong)param_2 + 0x24) = local_2c;
      }
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      if (cVar6 != '\0') {
        uVar7 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
          *param_2 = 0;
          goto LAB_140d24ef8;
        }
      }
      FUN_14485c47a(param_2,lVar5);
    }
  }
LAB_140d24ef8:
  FUN_140d25081();
LAB_140d24efd:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d25081 FUN_140d25081 body=151 status=ok
// SIG undefined FUN_140d25081(void)

undefined4 FUN_140d25081(void)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  bVar6 = true;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      if (cVar2 == '\0') {
        return 0xffffffff;
      }
      puVar5 = &DAT_14c7590bc;
      goto LAB_140d250ee;
    }
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    bVar6 = DVar3 == DVar4;
  }
  if (cVar2 == '\0') {
    if (!bVar6) {
      return 0xffffffff;
    }
    puVar5 = &DAT_14c7590b4;
  }
  else {
    puVar5 = &DAT_14c7590bc;
    if (bVar6) {
      puVar5 = &DAT_14c7590b8;
    }
  }
LAB_140d250ee:
  return *puVar5;
}



// FUNCTION 140d25118 FUN_140d25118 body=277 status=ok
// SIG undefined FUN_140d25118(void)

undefined8 FUN_140d25118(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140d25227;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d25227;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140d25227:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d251d4;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140d251d4;
    }
  }
  uVar6 = 0;
LAB_140d251d4:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2522e FUN_140d2522e body=142 status=ok
// SIG undefined FUN_140d2522e(void)

void FUN_140d2522e(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if ((((lVar2 == 0) || (*(int *)(param_1 + 0x54) == 0)) ||
        (uVar1 = *(uint *)(param_1 + 0x50), (int)uVar1 < 0)) ||
       (((DAT_14c9647dc <= (int)uVar1 ||
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0)) ||
        ((*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x54) ||
         ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))))) goto LAB_140d2524f;
  }
  else {
    lVar2 = 0;
  }
  FUN_140b75e76(*(longlong *)(param_1 + 0x28) + 0x3d88,lVar2);
LAB_140d2524f:
  *(char *)(param_1 + 0x128) = param_2;
  return;
}



// FUNCTION 140d252bc FUN_140d252bc body=25 status=ok
// SIG undefined FUN_140d252bc(void)

undefined8 FUN_140d252bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d252ee FUN_140d252ee body=31 status=ok
// SIG undefined FUN_140d252ee(void)

undefined8 FUN_140d252ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d2530e FUN_140d2530e body=154 status=ok
// SIG undefined FUN_140d2530e(void)

longlong FUN_140d2530e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140d25363;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140d25363:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140d253a8(param_1,param_2);
  return param_1;
}



// FUNCTION 140d253a8 FUN_140d253a8 body=384 status=ok
// SIG undefined FUN_140d253a8(void)

longlong * FUN_140d253a8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141078e44(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar8 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar10 = 0;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar3 + lVar10);
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar3 + 4 + lVar10);
        }
        else {
          lVar4 = *(longlong *)(lVar3 + lVar10);
          *(longlong *)(lVar5 + lVar10) = lVar4;
          if ((lVar4 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined4 *)(lVar5 + 8 + lVar10) = *(undefined4 *)(lVar3 + 8 + lVar10);
          *(undefined8 *)(lVar5 + 0x10 + lVar10) = *(undefined8 *)(lVar3 + 0x10 + lVar10);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x18;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 140d25528 FUN_140d25528 body=1058 status=ok
// SIG undefined FUN_140d25528(void)

void FUN_140d25528(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_140656670(param_1 + 0x98);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  pvStack_a0 = (void *)0x0;
  local_98 = 0;
  if (lVar5 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
  }
  else {
    FUN_1400bbfc4(&local_68,lVar5);
    uStack_b0 = CONCAT44(uStack_64,local_68);
    local_a8 = CONCAT44(uStack_5c,uStack_60);
    if (pvStack_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    pvStack_a0 = local_58;
    local_98 = CONCAT44(uStack_4c,uStack_50);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    uVar7 = *(uint *)(lVar5 + 0xc);
    if (cVar3 != '\0') {
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        local_b8 = 0;
        goto LAB_140d25606;
      }
    }
    local_b8 = CONCAT44(local_b8._4_4_,uVar7);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar6;
      }
    }
    local_b8 = CONCAT44(iVar4,(undefined4)local_b8);
  }
LAB_140d25606:
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = (longlong *)0x0;
  if (uStack_b0 == 0) {
    local_68 = *(undefined4 *)(param_1 + 0xa0);
    uStack_64 = *(undefined4 *)(param_1 + 0xa4);
    uStack_60 = *(undefined4 *)(param_1 + 0xa8);
    uStack_5c = *(undefined4 *)(param_1 + 0xac);
    local_58 = (void *)0x0;
    uStack_50 = *(uint *)(param_1 + 0xb8);
    lVar5 = (longlong)(int)uStack_50;
    pvVar2 = *(void **)(param_1 + 0xb0);
    if (lVar5 == 0) {
      uStack_4c = 0;
      uVar7 = 0;
    }
    else {
      FUN_1446dd670(&local_58,uStack_50,0);
      memcpy(local_58,pvVar2,lVar5 * 2);
      uVar7 = uStack_50;
    }
    pvVar2 = local_58;
    local_b8 = 0;
    uStack_b0 = CONCAT44(uStack_64,local_68);
    local_a8 = CONCAT44(uStack_5c,uStack_60);
    local_98 = CONCAT44(local_98._4_4_,uVar7);
    if (local_98._4_4_ == 0 && uVar7 == 0) {
      local_98 = (ulonglong)uVar7;
    }
    else {
      FUN_1446dd670(&pvStack_a0,uVar7);
      if (uVar7 != 0) {
        memcpy(pvStack_a0,pvVar2,(longlong)(int)uVar7 * 2);
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14042b1ec(param_2,&local_b8,1);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (pvStack_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    lVar8 = (longlong)*(int *)(param_1 + 200) * 0x28;
    do {
      FUN_14579c524(&local_b8,lVar5);
      FUN_14042b1ec(param_2,&local_b8,1);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      if (pvStack_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x150);
    lVar8 = (longlong)*(int *)(param_1 + 0x158) * 0x28;
    do {
      FUN_140d2594c(&local_b8,lVar5);
      FUN_14042b1ec(param_2,&local_b8,1);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      if (pvStack_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2594c FUN_140d2594c body=1450 status=ok
// SIG undefined FUN_140d2594c(void)

uint * FUN_140d2594c(uint *param_1,uint *param_2)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  void **ppvVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  void *local_88;
  uint local_80;
  undefined4 local_7c;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((param_2[1] == 0) || (uVar4 = *param_2, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4))
     || (((plVar8 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
          plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != param_2[1])) ||
         (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar11 = *plVar8, lVar11 == 0)))))) {
    if (*(longlong *)(param_2 + 2) != 0) {
      lVar11 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar11 == 0) || (cVar3 == '\0')) {
        if (lVar11 == 0) {
          param_2[0] = 0;
          param_2[1] = 0;
          goto LAB_140d25bc4;
        }
        uVar4 = *(uint *)(lVar11 + 0xc);
        *param_2 = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        uVar4 = *(uint *)(lVar5 + 0x10);
        if (*(uint *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar9);
          }
          LOCK();
          uVar4 = *(uint *)(lVar5 + 0x10);
          bVar12 = uVar4 == 0;
          if (bVar12) {
            *(uint *)(lVar5 + 0x10) = uVar9;
            uVar4 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar4 = uVar9;
          }
        }
        param_2[1] = uVar4;
      }
      else {
        uVar4 = *(uint *)(lVar11 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_2,lVar11);
        }
      }
      if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_140d259d9;
    }
  }
  else {
LAB_140d259d9:
    if (DAT_14c949118 == 0) {
      local_50 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(&local_70,L"Class",1);
      local_a8 = &LAB_146891e90;
      local_b0 = &LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = 199;
      local_c8 = 0x20;
      local_d0 = 0x10000000;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,8);
      local_a0 = &local_50;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      uVar6 = FUN_144a7a812();
      lVar5 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_d8 = L"Class";
      FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
    }
    if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
        (lVar5 = FUN_140789e1e(), lVar5 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar11 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      FUN_1400bbfc4(&local_70,lVar11);
      param_1[2] = local_70;
      param_1[3] = uStack_6c;
      param_1[4] = uStack_68;
      param_1[5] = uStack_64;
      if (param_1 + 2 == &local_70) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 6) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 6) = local_60;
        local_60 = 0;
        param_1[8] = local_58;
        param_1[9] = local_54;
      }
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      uVar4 = *(uint *)(lVar11 + 0xc);
      if (cVar3 != '\0') {
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          goto LAB_140d25aff;
        }
      }
      *param_1 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar4 = *(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar4 = *(uint *)(lVar11 + 0x10);
        bVar12 = uVar4 == 0;
        if (bVar12) {
          *(uint *)(lVar11 + 0x10) = uVar9;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar4 = uVar9;
        }
      }
      param_1[1] = uVar4;
      goto LAB_140d25aff;
    }
  }
LAB_140d25bc4:
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
LAB_140d25aff:
  ppvVar10 = (void **)(param_1 + 6);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    local_98 = param_2[2];
    uStack_94 = param_2[3];
    uStack_90 = param_2[4];
    uStack_8c = param_2[5];
    local_88 = (void *)0x0;
    local_80 = param_2[8];
    lVar11 = (longlong)(int)local_80;
    pvVar1 = *(void **)(param_2 + 6);
    if (lVar11 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar1,lVar11 * 2);
    }
    uVar4 = local_80;
    pvVar1 = local_88;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = local_98;
    param_1[3] = uStack_94;
    param_1[4] = uStack_90;
    param_1[5] = uStack_8c;
    if (ppvVar10 != &local_88) {
      lVar11 = (longlong)(int)local_80;
      param_1[8] = local_80;
      if (local_80 == 0 && param_1[9] == 0) {
        param_1[9] = 0;
      }
      else {
        FUN_1446dd670(ppvVar10,local_80);
        if (uVar4 != 0) {
          memcpy(*ppvVar10,pvVar1,lVar11 * 2);
        }
      }
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d25ef8 FUN_140d25ef8 body=2204 status=ok
// SIG undefined FUN_140d25ef8(void)

void FUN_140d25ef8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  void **local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1468d96f0;
      local_f0 = (void **)0x0;
      local_f8 = (undefined4 *)0x4008001;
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
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_30);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_30);
    }
  }
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1403a682c;
      local_f0 = (void **)0x0;
      local_f8 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_38);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_141710108;
      local_f0 = (void **)0x1000000000000000;
      local_f8 = (undefined4 *)0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_58);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1403a682c;
      local_f0 = (void **)0x0;
      local_f8 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_68);
    }
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_140dafe7a;
      local_f0 = (void **)0x0;
      local_f8 = (undefined4 *)0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_78);
    }
  }
  _Src = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_70;
  local_98 = (int)uStack_70;
  if (lVar4 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,uStack_70 & 0xffffffff,0);
    memcpy(local_a0,_Src,lVar4 * 2);
  }
  local_b8 = (undefined4)local_68;
  uStack_b4 = local_68._4_4_;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  local_d0 = local_58;
  uVar3 = FUN_14477b664(uStack_50);
  local_c8 = FUN_14477b664(uVar3);
  local_c0 = local_48;
  local_f0 = &local_a0;
  local_f8 = &local_b8;
  FUN_140d26796(&local_90,local_30,local_38,&local_d0);
  *param_3 = local_90;
  param_3[1] = local_88;
  param_3[2] = local_80;
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d26796 FUN_140d26796 body=327 status=ok
// SIG undefined FUN_140d26796(void)

undefined8 *
FUN_140d26796(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5,longlong *param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_4[1];
  local_30 = param_3;
  if (lVar3 == 0) {
    uVar4 = FUN_140d8fa50();
    lVar3 = FUN_14477b664(uVar4);
    param_4[1] = lVar3;
  }
  lVar5 = param_4[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar3 != 0)) && (*param_4 != 0)) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_140d268d9:
      lVar5 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_140d268d9;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,param_4);
    }
    param_4[2] = lVar5;
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    if ((lVar5 != 0) && (lVar3 != 0)) {
      lVar3 = FUN_140d268de(lVar5,&local_30);
      if (lVar3 != 0) {
        local_48 = *param_5;
        uStack_44 = param_5[1];
        uStack_40 = param_5[2];
        uStack_3c = param_5[3];
        FUN_140d26af5(param_1,lVar3);
        goto LAB_140d2681c;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_140d2681c:
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d268de FUN_140d268de body=534 status=ok
// SIG undefined FUN_140d268de(void)

longlong FUN_140d268de(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar6 = *(longlong *)(param_1 + 400);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x198) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar7 * 0x28);
        if (*plVar1 == lVar2) {
          lVar6 = 0;
          if ((plVar1 == (longlong *)0x0) || (plVar1 == (longlong *)&DAT_fffffffffffffff8)) break;
          lVar2 = plVar1[1];
          local_38 = lVar2;
          uVar5 = FUN_14477b664(plVar1[2]);
          local_30 = FUN_14477b664(uVar5);
          lVar6 = plVar1[3];
          local_28 = lVar6;
          if (local_30 == 0) {
            uVar5 = FUN_140067708();
            local_30 = FUN_14477b664(uVar5);
          }
          if (lVar6 == 0) {
            local_28 = 0;
            lVar6 = 0;
            if ((lVar2 == 0) || (lVar6 = 0, local_30 == 0)) break;
            plVar1 = *(longlong **)(local_30 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) goto LAB_140d26ad7;
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,&local_38);
            local_28 = lVar6;
            if (lVar6 == 0) goto LAB_140d26ad7;
          }
          if (local_30 == 0) {
            uVar5 = FUN_140067708();
            local_30 = FUN_14477b664(uVar5);
            lVar6 = local_28;
            if (((local_28 == 0) && (lVar6 = 0, local_30 != 0)) && (local_38 != 0)) {
              plVar1 = *(longlong **)(local_30 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0'))
              goto LAB_140d26ad7;
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar6 = FUN_144aff482(uVar5,&local_38);
            }
          }
          break;
        }
        iVar7 = (int)plVar1[4];
        lVar6 = 0;
      } while (iVar7 != -1);
      goto LAB_140d26988;
    }
  }
LAB_140d26ad7:
  lVar6 = 0;
LAB_140d26988:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 140d26af5 FUN_140d26af5 body=1246 status=ok
// SIG undefined FUN_140d26af5(void)

undefined8 * FUN_140d26af5(undefined8 *param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    if (DAT_14cb253f8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_147f6f09d;
      local_80 = &LAB_146201c25;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000006;
      local_a0 = 8;
      local_a8 = 0x480;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    lVar6 = DAT_14cb253f8;
    lVar8 = DAT_14cb25be0;
    if ((*(longlong *)(DAT_14cb253f8 + 0x110) == 0) &&
       (FUN_140aa6c08(DAT_14cb253f8), lVar8 = DAT_14cb25be0, *(longlong *)(lVar6 + 0x110) == 0)) {
      lVar8 = 0;
    }
    if (DAT_14cb259f8 != 0) {
      pcVar9 = *(code **)(DAT_14cb259f8 + 0xa0);
      local_58 = pcVar9;
      if ((pcVar9 != (code *)0x0) &&
         (*(int *)(pcVar9 + 0x108) = *(int *)(pcVar9 + 0x108) + 1, *(longlong *)pcVar9 != -1)) {
        if (lVar8 != 0) {
          lVar6 = *(longlong *)(lVar8 + 0x38);
          if (lVar6 == 0) {
            uVar5 = FUN_1407f787c();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar8 + 0x38) = lVar6;
          }
          plVar1 = (longlong *)(lVar8 + 0x30);
          lVar7 = *(longlong *)(lVar8 + 0x40);
          if (lVar7 == 0) {
            if ((lVar6 != 0) && (*plVar1 != 0)) {
              plVar3 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                *(undefined8 *)(lVar8 + 0x40) = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar7 = FUN_144aff482(uVar5,plVar1);
                *(longlong *)(lVar8 + 0x40) = lVar7;
                if (lVar7 != 0) {
                  lVar6 = *(longlong *)(lVar8 + 0x38);
                  pcVar9 = local_58;
                  goto LAB_140d26bb2;
                }
              }
            }
          }
          else {
LAB_140d26bb2:
            dVar2 = *param_3;
            if (lVar6 == 0) {
              uVar5 = FUN_1407f787c();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(lVar8 + 0x38) = lVar6;
              lVar7 = *(longlong *)(lVar8 + 0x40);
              if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
                plVar3 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar7 = FUN_144aff482(uVar5,plVar1);
                }
                *(longlong *)(lVar8 + 0x40) = lVar7;
              }
            }
            local_a8 = local_a8 & 0xffffff00;
            FUN_1447997cc(pcVar9,lVar7,(float)dVar2,0);
          }
          lVar6 = *(longlong *)(lVar8 + 0x50);
          if (lVar6 == 0) {
            uVar5 = FUN_1407f787c();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar8 + 0x50) = lVar6;
          }
          plVar1 = (longlong *)(lVar8 + 0x48);
          lVar7 = *(longlong *)(lVar8 + 0x58);
          if (lVar7 == 0) {
            if ((lVar6 != 0) && (*plVar1 != 0)) {
              plVar3 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                *(undefined8 *)(lVar8 + 0x58) = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar7 = FUN_144aff482(uVar5,plVar1);
                *(longlong *)(lVar8 + 0x58) = lVar7;
                if (lVar7 != 0) {
                  lVar6 = *(longlong *)(lVar8 + 0x50);
                  goto LAB_140d26bf3;
                }
              }
            }
          }
          else {
LAB_140d26bf3:
            pcVar9 = local_58;
            dVar2 = param_3[1];
            if (lVar6 == 0) {
              uVar5 = FUN_1407f787c();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(lVar8 + 0x50) = lVar6;
              lVar7 = *(longlong *)(lVar8 + 0x58);
              if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
                plVar3 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar7 = FUN_144aff482(uVar5,plVar1);
                }
                *(longlong *)(lVar8 + 0x58) = lVar7;
              }
            }
            local_a8 = local_a8 & 0xffffff00;
            FUN_1447997cc(pcVar9,lVar7,(float)dVar2,0);
          }
        }
        local_a8 = 0;
        FUN_14084a448(local_58,param_1,param_2,0);
        pcVar9 = local_58;
        if (((local_58 != (code *)0x0) &&
            (*(int *)(local_58 + 0x108) = *(int *)(local_58 + 0x108) + -1,
            *(int *)(local_58 + 0x130) < 1)) &&
           (FUN_1400847bc(local_58 + 0xb8,0), *(int *)(pcVar9 + 0x108) == 0)) {
          FUN_140087e46(pcVar9);
          if (*(longlong *)pcVar9 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140d26c6b;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar9);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar9);
          }
        }
        goto LAB_140d26c6b;
      }
      FUN_144a61ac8(&local_58);
    }
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_140d26c6b:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d26fe2 FUN_140d26fe2 body=31 status=ok
// SIG undefined FUN_140d26fe2(void)

undefined8 FUN_140d26fe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d27002 FUN_140d27002 body=33 status=ok
// SIG undefined FUN_140d27002(void)

undefined8 FUN_140d27002(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2d8))();
  return param_2;
}



// FUNCTION 140d27024 FUN_140d27024 body=134 status=ok
// SIG undefined FUN_140d27024(void)

double * FUN_140d27024(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = (double)*(float *)(param_1 + 0x1f);
  dVar1 = (double)param_1[0x1c];
  dVar2 = (double)param_1[0x1d];
  *param_2 = dVar1 - dVar4;
  param_2[1] = dVar2 - dVar4;
  param_2[3] = dVar1 + dVar4;
  param_2[4] = dVar2 + dVar4;
  *(undefined1 *)(param_2 + 6) = 1;
  lVar3 = (**(code **)(*param_1 + 0x2d0))();
  param_2[2] = *(double *)(lVar3 + 0x10);
  lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  param_2[5] = *(double *)(lVar3 + 0x28);
  return param_2;
}



// FUNCTION 140d270aa FUN_140d270aa body=559 status=ok
// SIG undefined FUN_140d270aa(void)

void FUN_140d270aa(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_140077068(param_2,param_1);
    goto LAB_140d271a2;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1),(longlong)*(int *)((longlong)param_1 + 0xc));
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140d271a2;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_140d27193:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28);
  }
  else {
    if (local_24 == 1) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (-1 < (int)local_28) {
        *(undefined4 *)(param_1 + 1) = 0;
        if (*(uint *)((longlong)param_1 + 0xc) == local_28) {
          iVar4 = 0;
          uVar5 = local_28;
        }
        else {
          FUN_144893a1c(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_1447403be(param_1,iVar4);
        }
        goto LAB_140d27193;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140d271a2:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d272da FUN_140d272da body=136 status=ok
// SIG undefined FUN_140d272da(void)

undefined8 FUN_140d272da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      memcpy((void *)(param_2 + -0x98),(void *)(param_3 + -0x98),0x92);
      FUN_140d273b0(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      FUN_140d27362(param_2 + 0x18,param_3 + 0x18);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(param_3 + 0x28);
      param_3 = param_3 + 0xe0;
      param_2 = param_2 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140d27362 FUN_140d27362 body=77 status=ok
// SIG undefined FUN_140d27362(void)

longlong * FUN_140d27362(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  lVar1 = *param_1;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + -1;
      FUN_140d274d8();
      *param_1 = 0;
      lVar2 = *param_2;
    }
    if (lVar2 != 0) {
      *param_1 = lVar2;
      *(int *)(lVar2 + 0x108) = *(int *)(lVar2 + 0x108) + 1;
    }
  }
  return param_1;
}



// FUNCTION 140d273b0 FUN_140d273b0 body=79 status=ok
// SIG undefined FUN_140d273b0(void)

undefined8 * FUN_140d273b0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140d27400(param_1,iVar1);
      FUN_144796a68(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d27400 FUN_140d27400 body=216 status=ok
// SIG undefined FUN_140d27400(void)

void FUN_140d27400(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    iVar1 = (int)(uVar2 >> 7);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x80,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d274d8 FUN_140d274d8 body=125 status=ok
// SIG undefined FUN_140d274d8(void)

void FUN_140d274d8(longlong *param_1)

{
  if ((int)param_1[0x26] < 1) {
    FUN_1400847bc(param_1 + 0x17,0);
    if ((int)param_1[0x21] == 0) {
      FUN_140087e46(param_1);
      if (((*param_1 != -1) && (param_1 != (longlong *)0x0)) && (DAT_14cb259f8 != 0)) {
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),param_1);
      }
      if ((param_1 != (longlong *)0x0) && (DAT_14cb259f8 != 0)) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d275b2 FUN_140d275b2 body=1142 status=ok
// SIG undefined FUN_140d275b2(void)

undefined8 FUN_140d275b2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_50;
  undefined4 *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined1 local_31;
  short local_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_31;
  local_31 = 0;
  local_48 = &local_38;
  local_38 = 0x3e800000;
  local_50 = param_1;
  local_40 = param_1;
  lVar7 = FUN_140d27b16(param_1);
  if (lVar7 == 0) {
LAB_140d2763e:
    plVar8 = (longlong *)FUN_1403ca102(param_1);
    if (plVar8 != (longlong *)0x0) {
      lVar7 = FUN_1447210f0(param_1);
      if ((lVar7 != 0) && (0.0 < *(float *)(param_1 + 0x3198))) {
        if ((*(float *)(param_1 + 0x319c) <= (float)*(double *)(lVar7 + 0x6d0)) &&
           ((float)*(double *)(lVar7 + 0x6d0) - *(float *)(param_1 + 0x319c) <
            *(float *)(param_1 + 0x3198))) goto LAB_140d2773b;
      }
      if ((*(longlong *)(param_1 + 0x448) != 0) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x448) + 8) >> 0x1e & 1) == 0)) {
        *(undefined8 *)(param_1 + 0x3198) = 0;
        cVar4 = (**(code **)(*plVar8 + 0x498))(plVar8);
        uVar9 = DAT_14cb0d2b0;
        if (cVar4 == '\x03') {
          if ((((*(longlong *)(param_1 + 0x2370) == 0) ||
               (0xfffffffd < *(int *)(param_1 + 0x2378) - 1U)) &&
              (*(char *)(param_1 + 0x2368) == '\0')) &&
             (cVar4 = FUN_140426394(param_1 + 0xd98,&DAT_14cbd9578), cVar4 != '\0')) {
            local_31 = 1;
            local_38 = 0x40200000;
            goto LAB_140d277e5;
          }
        }
        else {
          if (cVar4 != '\x05') {
            if ((*(char *)(param_1 + 0x23b8) == '\x01') &&
               (cVar5 = FUN_14579c798(plVar8), cVar5 == '\0')) goto LAB_140d277e0;
            if (1 < (byte)(cVar4 - 7U)) goto LAB_140d2773b;
            lVar7 = FUN_140d27a2a(plVar8);
            if ((7 < (byte)(*(char *)(lVar7 + 0xb0) - 1U)) && (*(longlong *)(param_1 + 0xb10) != 0))
            {
LAB_140d277e0:
              local_31 = 1;
              goto LAB_140d277e5;
            }
            lVar7 = FUN_140d27a2a(plVar8);
            if (((byte)(*(char *)(lVar7 + 0xb0) - 1U) < 8) &&
               (lVar7 = FUN_140d27a2a(plVar8), 1 < *(byte *)(lVar7 + 0xb0))) {
              lVar7 = FUN_140d27a2a(plVar8);
              if ((byte)(*(char *)(lVar7 + 0xb0) - 7U) < 2) goto LAB_140d278ac;
              lVar7 = FUN_140d27a2a(plVar8);
              if ((byte)(*(char *)(lVar7 + 0xb0) - 5U) < 2) {
                uVar9 = FUN_140d27aa0(param_1);
                lVar7 = FUN_146071a56(uVar9);
                if ((lVar7 != 0) && (cVar4 = FUN_148e0790c(lVar7), cVar4 != '\0')) {
                  local_38 = 0x3f000000;
                  goto LAB_140d277e0;
                }
              }
            }
            uVar9 = FUN_140d27aa0(param_1);
            cVar4 = FUN_140d27c2e(uVar9,0,1);
            if (cVar4 != '\0') goto LAB_140d277e0;
            lVar7 = FUN_140d27aa0(param_1);
            if (*(char *)(lVar7 + 0x41) != '\x01') goto LAB_140d2773b;
            uVar9 = FUN_140d27aa0(param_1);
            lVar7 = FUN_146071a56(uVar9);
            if ((lVar7 != 0) || (*(longlong *)(param_1 + 0x398) == 0)) goto LAB_140d2773b;
            lVar11 = FUN_144a7b4ca();
            lVar7 = *(longlong *)(param_1 + 0x398);
            if ((lVar7 == 0) ||
               ((((lVar11 == 0 || (lVar2 = *(longlong *)(lVar7 + 0x10), lVar2 == 0)) ||
                 (*(int *)(lVar2 + 0x38) < *(int *)(lVar11 + 0x38))) ||
                (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                 != lVar11 + 0x30)))) goto LAB_140d2773b;
            FUN_1405a77a8(lVar7,&local_30);
            lVar7 = CONCAT44(uStack_2c,CONCAT22(uStack_2e,local_30));
            bVar3 = true;
            if ((lVar7 != 0) && (cVar4 = FUN_140373d18(lVar7,0), cVar4 == '\0')) {
              local_38 = 0x3fc00000;
              local_31 = 1;
              FUN_140d28200(&local_58);
              bVar3 = false;
            }
            if (local_28 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_28 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
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
            if (bVar3) goto LAB_140d2773b;
            goto LAB_140d277ef;
          }
          if (((*(longlong *)(param_1 + 0x2370) == 0) ||
              (0xfffffffd < *(int *)(param_1 + 0x2378) - 1U)) &&
             (*(char *)(param_1 + 0x2368) == '\0')) {
            uVar10 = FUN_1447210f0(param_1);
            lVar7 = FUN_1405e677a(uVar9,uVar10);
            if (((((*(char *)(lVar7 + 0x88) != '\x01') &&
                  (lVar7 = FUN_1447210f0(param_1), lVar7 != 0)) &&
                 (lVar7 = FUN_1400f6f32(lVar7), lVar7 != 0)) &&
                ((lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0 &&
                 (FUN_140d27df6(lVar7,&local_30,param_1), -1 < local_30)))) &&
               (uVar6 = FUN_1402d8968(lVar7,&local_30), 2 < uVar6)) {
LAB_140d278ac:
              local_38 = 0x3fc00000;
              goto LAB_140d277e0;
            }
          }
        }
      }
    }
LAB_140d2773b:
    FUN_140d27eb2(&local_40);
    uVar9 = 1;
  }
  else {
    FUN_140d27b72(lVar7,&local_30,DAT_14cbcfa88);
    if (((char)uStack_2c == '\x01') && (1e-08 < ABS((float)CONCAT22(uStack_2e,local_30))))
    goto LAB_140d2763e;
LAB_140d277e5:
    FUN_140d28200(&local_58);
LAB_140d277ef:
    uVar9 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140d27a2a FUN_140d27a2a body=117 status=ok
// SIG undefined FUN_140d27a2a(void)

undefined8 * FUN_140d27a2a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x550);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(400,0x10);
    *puVar2 = FUN_14619d6f5;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    FUN_14579ccd6(puVar2,param_1);
    lVar1 = *(longlong *)(param_1 + 0x550);
    *(undefined8 **)(param_1 + 0x550) = puVar2;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      puVar2 = *(undefined8 **)(param_1 + 0x550);
    }
  }
  return puVar2;
}



// FUNCTION 140d27aa0 FUN_140d27aa0 body=117 status=ok
// SIG undefined FUN_140d27aa0(void)

undefined8 * FUN_140d27aa0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(&DAT_000031a8 + param_1);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
    *puVar2 = FUN_145a08a75;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    FUN_14579cab0(puVar2,param_1);
    lVar1 = *(longlong *)(&DAT_000031a8 + param_1);
    *(undefined8 **)(&DAT_000031a8 + param_1) = puVar2;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      puVar2 = *(undefined8 **)(&DAT_000031a8 + param_1);
    }
  }
  return puVar2;
}



// FUNCTION 140d27b16 FUN_140d27b16 body=92 status=ok
// SIG undefined FUN_140d27b16(void)

longlong FUN_140d27b16(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar3 = FUN_140183ac4();
    lVar1 = *(longlong *)(param_1 + 0x448);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140d27b72 FUN_140d27b72 body=188 status=ok
// SIG undefined FUN_140d27b72(void)

void FUN_140d27b72(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x3a60) != *(int *)(param_1 + 0x3a8c)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0x3a90;
    if (*(longlong *)(param_1 + 15000) != 0) {
      lVar3 = *(longlong *)(param_1 + 15000);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x3aa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x3a58) + (longlong)iVar4 * 0x3c;
        if (*(longlong *)(*(longlong *)(param_1 + 0x3a58) + (longlong)iVar4 * 0x3c) == param_3) {
          uVar1 = 0;
          if ((lVar3 != 0) && (lVar3 != -8)) {
            *param_2 = *(undefined4 *)(lVar3 + 0x10);
            uVar1 = 1;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x34);
        uVar1 = 0;
      } while (iVar4 != -1);
      goto LAB_140d27c18;
    }
  }
  uVar1 = 0;
LAB_140d27c18:
  *(undefined1 *)(param_2 + 1) = uVar1;
  return;
}



// FUNCTION 140d27c2e FUN_140d27c2e body=455 status=ok
// SIG undefined FUN_140d27c2e(void)

undefined8 FUN_140d27c2e(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((param_2 != '\0') ||
        ((((lVar5 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x30)), lVar5 != 0 &&
           (lVar5 = FUN_1400f6f32(lVar5), lVar5 != 0)) &&
          (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) &&
         ((FUN_140d27df6(lVar5,local_2c,*(undefined8 *)(param_1 + 0x30)), -1 < local_2c[0] &&
          (uVar4 = FUN_1402d8968(lVar5,local_2c), 10 < uVar4)))))) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x6c8))(), cVar2 != '\0')) &&
      ((lVar5 = *(longlong *)(param_1 + 0x30), param_3 != '\0' ||
       (((*(longlong *)(lVar5 + 0x2370) == 0 || (0xfffffffd < *(int *)(lVar5 + 0x2378) - 1U)) &&
        (*(char *)(lVar5 + 0x2368) == '\0')))))) && (*(longlong *)(lVar5 + 0x398) != 0)) {
    lVar6 = FUN_144a7b4ca();
    lVar5 = *(longlong *)(lVar5 + 0x398);
    if (lVar5 != 0) {
      uVar8 = 0;
      if ((lVar6 == 0) || (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 == 0)) goto LAB_140d27cb4;
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        lVar6 = FUN_1403b0700(lVar5);
        uVar8 = 0;
        if ((*(longlong *)(lVar6 + 0x38) == 0) ||
           (uVar8 = 0, *(longlong *)(lVar6 + 0x38) == DAT_14cb71810)) goto LAB_140d27cb4;
        FUN_14579c768(*(undefined8 *)(param_1 + 0x30));
        lVar6 = param_1 + 0x38;
        cVar2 = FUN_144729dda(lVar6);
        if (cVar2 != '\0') {
          plVar7 = (longlong *)FUN_14479d2ce(lVar6);
          bVar3 = (**(code **)(*plVar7 + 0x498))(plVar7);
          if (bVar3 < 6) goto LAB_140d27cb2;
          plVar7 = (longlong *)FUN_14479d2ce(lVar6);
          cVar2 = (**(code **)(*plVar7 + 0x498))(plVar7);
          if ((byte)(cVar2 - 6U) < 3) {
            uVar8 = FUN_14479d2ce(lVar6);
            uVar9 = FUN_144a7ba4c(*(undefined8 *)(param_1 + 0x30));
            FUN_14579c75c(uVar8,uVar9);
          }
        }
        FUN_14579c844(lVar5);
        uVar8 = 1;
        goto LAB_140d27cb4;
      }
    }
  }
LAB_140d27cb2:
  uVar8 = 0;
LAB_140d27cb4:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140d27df6 FUN_140d27df6 body=188 status=ok
// SIG undefined FUN_140d27df6(void)

void FUN_140d27df6(longlong param_1,undefined2 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar4 = 0xffff;
  if ((param_3 != 0) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if ((lVar2 != 0) && (*(short *)(lVar2 + 4) < 0)) {
        if ((*(int *)(lVar2 + 0x28) == 0) || (uVar1 = *(uint *)(lVar2 + 0x24), (int)uVar1 < 0)) {
LAB_140d27ead:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(lVar2 + 0x28))) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_140d27ead;
            lVar6 = *plVar7;
          }
        }
        if (lVar6 == param_3) {
          uVar4 = *(undefined2 *)(lVar2 + 2);
          uVar3 = *(undefined2 *)(lVar2 + 8);
          goto LAB_140d27e9e;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar5);
  }
  uVar3 = 0;
LAB_140d27e9e:
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}



// FUNCTION 140d27eb2 FUN_140d27eb2 body=620 status=ok
// SIG undefined FUN_140d27eb2(void)

void FUN_140d27eb2(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (0.0 < *(float *)(lVar3 + 0x3198)) {
    FUN_1415b967e(0,&DAT_14cbcfa98);
  }
  if (((*(longlong *)(lVar3 + 0x3188) == 0) || (*(longlong *)(lVar3 + 0x3190) == 0)) ||
     (*(int *)(*(longlong *)(lVar3 + 0x3190) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b995700;
    local_58[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar9;
    puVar5[4] = FUN_140d275b2;
    *(undefined4 *)(puVar5 + 5) = 0;
    local_68 = 0x3dcccccd;
    FUN_1405f67fc(uVar6,&local_48,&local_58,
                  L"AOakPlayerController.CheckReadyToFadeUpCameraFromBlack");
    *(undefined8 *)(lVar3 + 0x3188) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x3190);
    *(longlong **)(lVar3 + 0x3190) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_140d28090;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d28090:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d28120 FUN_140d28120 body=224 status=ok
// SIG undefined FUN_140d28120(void)

undefined8 FUN_140d28120(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*param_4 != 0) {
    iVar1 = *(int *)(*param_3 + 0x1f8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(*param_3 + 0x1f0);
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar6) == *param_4) {
          uVar5 = (int)(lVar6 >> 4) * -0x33333333;
          if (((-1 < (int)uVar5) && ((int)uVar5 < iVar1)) &&
             ((byte)(*(char *)(lVar2 + 8 + (ulonglong)(uVar5 & 0x7fffffff) * 0x50) - 1U) < 2)) {
            lVar6 = *(longlong *)(param_1 + 0x78);
            lVar3 = (ulonglong)(uVar5 & 0x7fffffff) * 0x70;
            lVar2 = lVar6 + lVar3;
            iVar1 = *(int *)(lVar6 + 0x10 + lVar3);
            if (((iVar1 != 0) && (*(int *)(lVar2 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) {
              FUN_1447715ec(lVar2 + 0x38,lVar6 + lVar3 + 0x10);
            }
            puVar4 = (undefined4 *)(lVar2 + 0x38);
            goto LAB_140d281e5;
          }
          break;
        }
        lVar6 = lVar6 + 0x50;
      } while ((longlong)iVar1 * 0x50 != lVar6);
    }
  }
  puVar4 = &DAT_14c9485f0;
LAB_140d281e5:
  FUN_1447a97f4(param_2,puVar4);
  return param_2;
}



// FUNCTION 140d28200 FUN_140d28200 body=692 status=ok
// SIG undefined FUN_140d28200(void)

void FUN_140d28200(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_1[1];
  if (*(char *)*param_1 == '\x01') {
    FUN_1415b967e(1,&DAT_14cbcfa98);
    lVar3 = FUN_140d27b16(lVar2);
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
      uStack_3c = *(undefined4 *)param_1[2];
      local_28 = 0;
      local_48 = local_48 & 0xffffff00;
      uStack_44 = 0x3f800000;
      uStack_40 = 0;
      local_38 = DAT_14c758c60;
      local_34 = DAT_14c758c60;
      local_30 = DAT_14c758c60;
      local_2c = 0x3f800000;
      FUN_140fa871e(lVar3,&DAT_14cbcfa88);
      lVar3 = FUN_140083894();
      *(undefined1 *)(lVar3 + 0x58) = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cbcfbc0) {
        FUN_144b3d300(&DAT_14cbcfbc0);
        if (DAT_14cbcfbc0 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          lVar3 = (**(code **)(*DAT_14c8407a8 + 0xd0))
                            (DAT_14c8407a8,L"r.Gbx.Shadow.Virtual.Cache.Invalidate",1);
          if (lVar3 == 0) {
            DAT_14cbcfbb8 = (longlong *)0x0;
          }
          else {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            plVar4 = (longlong *)
                     (**(code **)(*DAT_14c8407a8 + 0xd0))
                               (DAT_14c8407a8,L"r.Gbx.Shadow.Virtual.Cache.Invalidate",1);
            DAT_14cbcfbb8 = (longlong *)(**(code **)(*plVar4 + 0x80))(plVar4);
          }
          _Init_thread_footer(&DAT_14cbcfbc0);
        }
      }
      plVar4 = DAT_14cbcfbb8;
      if (DAT_14cbcfbb8 != (longlong *)0x0) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c872ef8) {
          FUN_144b3d300(&DAT_14c872ef8);
          if (DAT_14c872ef8 == -1) {
            FUN_1459825b0(&DAT_14c872ee0);
            atexit(FUN_1427868a5);
            _Init_thread_footer(&DAT_14c872ef8);
          }
        }
        (**(code **)(*plVar4 + 0xa0))(plVar4,&local_48,0,&DAT_14c872ee0);
        FUN_1447a1747(CONCAT44(uStack_44,local_48),uStack_40);
        if (CONCAT44(uStack_44,local_48) != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (((*(longlong *)(lVar2 + 0x3188) != 0) && (*(longlong *)(lVar2 + 0x3190) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x3190) + 8))) {
    FUN_1401cb356();
    local_58 = *(undefined8 *)(lVar2 + 0x3188);
    local_50 = *(longlong *)(lVar2 + 0x3190);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_58);
    plVar4 = *(longlong **)(lVar2 + 0x3190);
    *(undefined8 *)(lVar2 + 0x3188) = 0;
    *(undefined8 *)(lVar2 + 0x3190) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d284c4 FUN_140d284c4 body=61 status=ok
// SIG undefined FUN_140d284c4(void)

void FUN_140d284c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)*param_1;
  }
  FUN_1412e8829(puVar1,param_2,param_3,0x4000000,0,0,0);
  return;
}



// FUNCTION 140d28502 FUN_140d28502 body=1412 status=ok
// SIG undefined FUN_140d28502(void)

ulonglong FUN_140d28502(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong local_78 [7];
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar4 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  plVar7 = (longlong *)(param_1 + 0x28);
  plVar9 = *(longlong **)(param_1 + 0x38);
  if (plVar9 == (longlong *)0x0) {
    if ((lVar5 != 0) && (*plVar7 != 0)) {
      plVar9 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
        plVar8 = (longlong *)FUN_144aff482(uVar4,plVar7);
        *(longlong **)(param_1 + 0x38) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          lVar5 = *(longlong *)(param_1 + 0x30);
          plVar9 = plVar8;
          goto LAB_140d28545;
        }
      }
    }
  }
  else {
LAB_140d28545:
    if (lVar5 == 0) {
      uVar4 = FUN_140490c9a();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x30) = lVar5;
      plVar9 = *(longlong **)(param_1 + 0x38);
      if (((plVar9 == (longlong *)0x0) && (plVar9 = (longlong *)0x0, lVar5 != 0)) && (*plVar7 != 0))
      {
        plVar9 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
          plVar9 = (longlong *)0x0;
        }
        else {
          uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
          plVar9 = (longlong *)FUN_144aff482(uVar4,plVar7);
        }
        *(longlong **)(param_1 + 0x38) = plVar9;
      }
    }
    if ((char)plVar9[3] == '\x05') {
      local_40 = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (lVar5 == 0) {
        uVar4 = FUN_140490c9a();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x30) = lVar5;
        plVar9 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar9 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        plVar9 = (longlong *)0x0;
        if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
          plVar9 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
            plVar9 = (longlong *)0x0;
          }
          else {
            uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
            plVar9 = (longlong *)FUN_144aff482(uVar4,plVar7);
          }
          *(longlong **)(param_1 + 0x38) = plVar9;
        }
      }
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      local_88 = (longlong *)0x0;
      uVar4 = FUN_140490c9a();
      plStack_90 = (longlong *)FUN_14477b664(uVar4);
      lVar5 = FUN_140490c9a();
      uVar4 = FUN_140490c9a();
      FUN_1402d1bfa(local_a8,uVar4,plVar9);
      if (local_98 != local_a8[0]) {
        local_88 = (longlong *)0x0;
      }
      local_98 = local_a8[0];
      lVar6 = FUN_140490c9a();
      if (lVar5 == 0) {
LAB_140d2860f:
        lVar6 = lVar5;
      }
      else if (lVar6 == 0) {
        lVar6 = 0;
      }
      else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) goto LAB_140d2860f;
      if (plStack_90 != (longlong *)lVar6) {
        local_88 = (longlong *)0x0;
      }
      uVar4 = FUN_14477b664(lVar6);
      plStack_90 = (longlong *)FUN_14477b664(uVar4);
      if ((local_a8[0] != 0) && (plStack_90 != (longlong *)0x0)) {
        local_88 = plVar9;
      }
      cVar3 = FUN_140490d6e(param_2,&local_98,local_78);
      if (cVar3 == '\0') {
LAB_140d28902:
        bVar13 = true;
      }
      else {
        lVar5 = FUN_140316ff8();
        if (*(int *)(lVar5 + 0x440) != *(int *)(lVar5 + 0x46c)) {
          uVar2 = (uint)((ulonglong)local_78[0] >> 0x10);
          uVar12 = (uint)local_78[0] & 0xffff;
          lVar6 = lVar5 + 0x470;
          if (*(longlong *)(lVar5 + 0x478) != 0) {
            lVar6 = *(longlong *)(lVar5 + 0x478);
          }
          iVar11 = *(int *)(lVar6 + (ulonglong)
                                    (*(int *)(lVar5 + 0x480) - 1U &
                                    (int)((ulonglong)local_78[0] >> 0x20) +
                                    ((uint)local_78[0] << 0x10 | uVar12) +
                                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4)) * 4);
          if (iVar11 != -1) {
            do {
              lVar6 = *(longlong *)(lVar5 + 0x438) + (longlong)iVar11 * 0x30;
              if (*(longlong *)(*(longlong *)(lVar5 + 0x438) + (longlong)iVar11 * 0x30) ==
                  local_78[0]) goto LAB_140d286ff;
              iVar11 = *(int *)(lVar6 + 0x28);
            } while (iVar11 != -1);
          }
        }
        lVar6 = 0;
LAB_140d286ff:
        if (*(int *)(param_2 + 8) == 0) {
LAB_140d28837:
          uVar4 = 0;
        }
        else {
          uVar2 = *(uint *)(param_2 + 4);
          uVar4 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar10 == (undefined8 *)0x0) ||
               ((*(int *)(puVar10 + 2) != *(int *)(param_2 + 8) ||
                ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_140d28837;
            uVar4 = *puVar10;
          }
        }
        plVar7 = (longlong *)FUN_140d28a87(uVar4);
        if (lVar6 == 0) goto LAB_140d28902;
        lVar5 = *(longlong *)(lVar6 + 0x10);
        if (lVar5 == 0) {
          uVar4 = FUN_14060ed7a();
          lVar5 = FUN_14477b664(uVar4);
          *(longlong *)(lVar6 + 0x10) = lVar5;
        }
        plVar8 = (longlong *)(lVar6 + 8);
        bVar13 = true;
        bVar14 = true;
        if (*(longlong *)(lVar6 + 0x18) == 0) {
          if ((lVar5 == 0) || (*plVar8 == 0)) goto LAB_140d28902;
          plVar9 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
            lVar5 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
            lVar5 = FUN_144aff482(uVar4,plVar8);
          }
          *(longlong *)(lVar6 + 0x18) = lVar5;
          bVar14 = lVar5 != 0;
        }
        if (plVar7 == (longlong *)0x0) goto LAB_140d28902;
        if (bVar14) {
          local_98 = *plVar8;
          FUN_1401533ba(local_a8,&local_98,1);
          plVar9 = &local_98;
          (**(code **)(*plVar7 + 0x78))(plVar7,plVar9,local_a8);
          bVar13 = local_98 == 0;
          if (!bVar13) {
            cVar3 = FUN_1405f61f4();
            plVar9 = (longlong *)
                     CONCAT71((int7)((ulonglong)plVar9 >> 8),cVar3 != *(char *)(lVar6 + 0x20));
          }
          plVar7 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_90 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plStack_90)(plStack_90);
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
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_40])();
      if (!bVar13) goto LAB_140d2880d;
    }
  }
  plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),2);
LAB_140d2880d:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar9 & 0xffffffff;
}



// FUNCTION 140d28a87 FUN_140d28a87 body=35 status=ok
// SIG undefined FUN_140d28a87(void)

undefined8 FUN_140d28a87(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    uVar2 = FUN_14039ffc6(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140d28aaa FUN_140d28aaa body=103 status=ok
// SIG undefined FUN_140d28aaa(void)

ulonglong FUN_140d28aaa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140d28af4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d28af4;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d28b20 FUN_140d28b20 body=537 status=ok
// SIG undefined FUN_140d28b20(void)

void FUN_140d28b20(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140136774();
  if (((param_1[0x68] != 0) && (*(char *)((longlong)param_1 + 0x1fb) == '\0')) &&
     (param_1[0x15] != 0)) {
    param_1[0x68] = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x304) = 0xffffffff;
  fVar8 = 0.0;
  if (0.0 <= *(float *)((longlong)param_1 + 0x2cc)) {
    fVar8 = *(float *)((longlong)param_1 + 0x2cc);
  }
  *(float *)((longlong)param_1 + 0x2cc) = fVar8;
  FUN_144842a8a(param_1,local_38);
  if ((local_38[0] < 0xe4) && (param_1[0x6c] != 0)) {
    *(float *)((longlong)param_1 + 0x2cc) =
         *(float *)((longlong)param_1 + 0x2cc) / *(float *)(param_1[0x6c] + 0x15c);
    fVar8 = powf(*(float *)((longlong)param_1 + 0x36c),2.2);
    *(float *)((longlong)param_1 + 0x36c) = fVar8;
    *(float *)((longlong)param_1 + 0x36c) = fVar8 / *(float *)(param_1[0x6c] + 0x15c);
  }
  lVar6 = DAT_14cad16a8;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar7 = 0;
  }
  else if (iVar2 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar7 = 1;
  }
  fVar8 = *(float *)(lVar6 + uVar7 * 4);
  iVar2 = (**(code **)(*param_1 + 0x600))(param_1);
  if ((iVar2 != 0) && (plVar5 = param_1, param_1 != (longlong *)0x0)) {
    do {
      if ((*(uint *)(plVar5 + 1) & 0x30) != 0) goto LAB_140d28c2a;
      plVar1 = plVar5 + 4;
      plVar5 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    if (((0.01 < fVar8) && (*(float *)((longlong)param_1 + 0x2f4) == 0.0)) &&
       (!NAN(*(float *)((longlong)param_1 + 0x2f4)))) {
      lVar6 = FUN_140d28d40();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        fVar9 = fVar8 * *(float *)((longlong)param_1 + 0x40c);
        if (fVar9 <= fVar8 * 100.0) {
          fVar9 = fVar8 * 100.0;
        }
        *(float *)((longlong)param_1 + 0x2f4) = fVar9;
      }
    }
  }
LAB_140d28c2a:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d28d40 FUN_140d28d40 body=228 status=ok
// SIG undefined FUN_140d28d40(void)

longlong FUN_140d28d40(void)

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
  if (DAT_14cad1800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b727a;
    local_38 = &LAB_1479e514a;
    local_40 = FUN_1463b8ab3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x430;
    FUN_14081cfa3(L"/Script/Engine",L"LocalLightComponent",&DAT_14cad1800,FUN_1463b8a8c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d28e2e FUN_140d28e2e body=104 status=ok
// SIG undefined FUN_140d28e2e(void)

undefined8 * FUN_140d28e2e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b4a6a30;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 2;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 140d28e9c FUN_140d28e9c body=57 status=ok
// SIG undefined FUN_140d28e9c(void)

void FUN_140d28e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab40 = FUN_140002ddd(FUN_1464cbbf4,uVar1,L"GbxBrainAspect_HasSkill");
  }
  return;
}



// FUNCTION 140d28ed5 FUN_140d28ed5 body=332 status=ok
// SIG undefined FUN_140d28ed5(void)

void FUN_140d28ed5(void)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong local_48;
  undefined8 uStack_40;
  int local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = -1;
  uVar3 = FUN_14482ca40();
  uVar5 = FUN_140d29022();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_58 = uVar3 | 0x90000000;
  local_30 = &local_48;
  FUN_140245161(uVar5,&local_28,1,0x10);
  uVar8 = (longlong)local_38;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
    local_38 = (int)uVar8;
    if ((longlong)(int)uStack_40 <= (longlong)uVar8) break;
  } while (*(longlong *)(local_48 + uVar8 * 8) == 0);
  lVar6 = local_48;
  iVar4 = (int)uStack_40;
  if (local_38 < (int)uStack_40 && -2 < (longlong)uVar9) {
    do {
      iVar7 = (int)uVar8;
      lVar1 = *(longlong *)(lVar6 + (uVar8 & 0xffffffff) * 8);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
         ((*(uint *)(lVar1 + 8) & 0x10) == 0)) {
        uVar2 = FUN_1401e6e8e(lVar1 + 0x38);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x28) + 0x10) = uVar2;
        lVar6 = local_48;
        iVar4 = (int)uStack_40;
        iVar7 = local_38;
      }
      uVar8 = (longlong)iVar7;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
        local_38 = (int)uVar8;
        if ((longlong)iVar4 <= (longlong)uVar8) break;
      } while (*(longlong *)(lVar6 + uVar8 * 8) == 0);
    } while ((-2 < (longlong)uVar9) && (local_38 < iVar4));
  }
  if (lVar6 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d29022 FUN_140d29022 body=228 status=ok
// SIG undefined FUN_140d29022(void)

longlong FUN_140d29022(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3c530 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1438fdbac;
    local_38 = &LAB_14817c44f;
    local_40 = &LAB_145c8f9aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterfacePlatformSet",&DAT_14cb3c530,
                  &DAT_14817c44e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3c530;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d29116 FUN_140d29116 body=161 status=ok
// SIG undefined FUN_140d29116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d29116(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b1f33b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140d291b8 FUN_140d291b8 body=642 status=ok
// SIG undefined FUN_140d291b8(void)

void FUN_140d291b8(longlong param_1,undefined8 *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = *(longlong **)(param_1 + 0x3bb0);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d2920b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x3ba8);
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)(param_1 + -0x3a30) + 0x720))(param_1 + -0x3a30,local_b0);
      dVar8 = (double)FUN_144719204(*param_2,0x4076800000000000);
      dVar9 = (double)FUN_144719204(param_2[1],0x4076800000000000);
      dVar10 = sin(dVar8 * 0.017453292519943295);
      dVar8 = cos(dVar8 * 0.017453292519943295);
      dVar11 = sin(dVar9 * 0.017453292519943295);
      local_c8 = cos(dVar9 * 0.017453292519943295);
      local_c0 = dVar11 * dVar8;
      local_c8 = local_c8 * dVar8;
      local_b8 = dVar10;
      FUN_140d2943c(local_b0,&local_98);
      dVar8 = 0.0;
      if ((((local_98 != 0.0) || (NAN(local_98))) || (local_90 != 0.0)) || (NAN(local_90))) {
        dVar8 = atan2(local_90,local_98);
        dVar8 = dVar8 * 57.29577951308232;
      }
      dVar10 = SQRT(local_98 * local_98 + local_90 * local_90);
      dVar9 = 0.0;
      if (((local_88 != 0.0) || (NAN(local_88))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
        dVar9 = atan2(local_88,dVar10);
        dVar9 = dVar9 * 57.29577951308232;
      }
      if ((*(longlong *)(lVar4 + 0x208) != 0) &&
         (0.0 < *(float *)(*(longlong *)(lVar4 + 0x208) + 0x21c))) {
        dVar10 = (double)param_3;
        *(double *)(lVar4 + 0x580) = dVar9 * dVar10;
        *(double *)(lVar4 + 0x588) = dVar8 * dVar10;
        *(double *)(lVar4 + 0x590) = dVar10 * 0.0;
        *(undefined1 *)(lVar4 + 0x598) = 0;
      }
    }
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
LAB_140d2920b:
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2943c FUN_140d2943c body=511 status=ok
// SIG undefined FUN_140d2943c(void)

double * FUN_140d2943c(double *param_1,double *param_2,double *param_3)

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
  
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  dVar4 = sin(dVar2 * 0.01745329238474369);
  dVar5 = sin(dVar3 * 0.01745329238474369);
  dVar6 = sin(dVar1 * 0.01745329238474369);
  sin(0.0);
  dVar7 = cos(dVar2 * 0.01745329238474369);
  dVar8 = cos(dVar3 * 0.01745329238474369);
  dVar9 = cos(dVar1 * 0.01745329238474369);
  cos(0.0);
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  *param_2 = dVar1 * dVar4 + dVar3 * dVar5 * dVar7 + dVar2 * dVar7 * dVar8 + 0.0;
  param_2[1] = dVar1 * -dVar6 * dVar7 +
               dVar3 * (dVar4 * dVar6 * dVar5 + dVar8 * dVar9) +
               dVar2 * (dVar4 * dVar6 * dVar8 - dVar5 * dVar9) + 0.0;
  param_2[2] = ((dVar8 * dVar6 - dVar5 * dVar4 * dVar9) * dVar3 -
               (dVar4 * dVar9 * dVar8 + dVar5 * dVar6) * dVar2) + dVar7 * dVar9 * dVar1 + 0.0;
  return param_2;
}


