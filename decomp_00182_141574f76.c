// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141574f76 FUN_141574f76 body=258 status=ok
// SIG undefined FUN_141574f76(void)

void FUN_141574f76(void)

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
              0x110) < DAT_14cb51958) {
    FUN_144b3d300(&DAT_14cb51958);
    if (DAT_14cb51958 == -1) {
      FUN_145e4cd0c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x33;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb518d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf929c);
      _Init_thread_footer(&DAT_14cb51958);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157507a FUN_14157507a body=253 status=ok
// SIG undefined FUN_14157507a(void)

void FUN_14157507a(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar1 = *param_3;
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if ((lVar3 != 0) && (lVar3 + 8 != 0)) {
            local_20 = *(undefined8 *)(param_2 + 8);
            local_18 = *(undefined4 *)(param_2 + 0x10);
            FUN_141575186(lVar3 + 8,&DAT_14ca85100);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141575186 FUN_141575186 body=1901 status=ok
// SIG undefined FUN_141575186(void)

void FUN_141575186(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *_Dst;
  longlong *plVar11;
  undefined4 uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar7 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar7 = *(int *)(param_3 + 1);
  }
  if (iVar7 == (int)param_1[5]) goto LAB_141575660;
  FUN_1412e0dfc(param_1);
  *(int *)(param_1 + 5) = iVar7;
  *(int *)(param_1 + 4) = iVar7 * 0xc + 0xc;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  bVar14 = *(int *)((longlong)param_1 + 0x2c) != -1;
  uVar12 = 0x400;
  if (!bVar14) {
    uVar12 = 0x10;
  }
  iVar7 = iVar7 * 0xc + 0xc;
  local_a8 = (undefined8 *)CONCAT44(DAT_14c873698,iVar7);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar14 * 8 + 0x4121);
  if (iVar7 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar12);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar12;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar12);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar12;
  }
  lVar13 = local_b0;
  plVar11 = param_1 + 1;
  if (plVar11 == &local_b0) {
LAB_141575382:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar13 = *plVar11;
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_b0;
    local_b0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_141575382;
    }
  }
  if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x28) & 0x10) == 0)) {
    local_a8._0_3_ = 0x10d00;
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar10 = param_1 + 3;
  if (plVar10 == &local_b0) {
LAB_1415754b9:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar13 = *plVar10;
    *plVar10 = local_b0;
    local_b0 = 0;
    if (lVar13 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar13 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar13 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar13 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_1415754b9;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar11 == 0) || ((*(byte *)(*plVar11 + 0x28) & 0x10) == 0)) {
      local_a8 = (undefined8 *)0x10d01;
    }
    else {
      local_a8 = (undefined8 *)0x40001;
    }
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar11 = param_1 + 2;
    if (plVar11 != &local_b0) {
      lVar13 = *plVar11;
      *plVar11 = local_b0;
      local_b0 = 0;
      if (lVar13 == 0) goto LAB_141575660;
      LOCK();
      puVar1 = (uint *)(lVar13 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar13 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar13 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar13;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar14 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar14) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar13;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar14 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar14) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
LAB_141575660:
  lVar5 = param_1[4];
  lVar13 = param_1[1];
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar5);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar13,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) * 0xc);
  }
  uVar12 = DAT_14c846338;
  uVar6 = DAT_14c846330;
  lVar13 = param_1[5];
  *(undefined4 *)((longlong)_Dst + (longlong)(int)lVar13 * 0xc + 8) = DAT_14c846338;
  *(undefined8 *)((longlong)_Dst + (longlong)(int)lVar13 * 0xc) = uVar6;
  lVar13 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((uint7)(uint3)((uint)uVar12 >> 8),1));
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar13 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar13 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415758f4 FUN_1415758f4 body=924 status=ok
// SIG undefined FUN_1415758f4(void)

void FUN_1415758f4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afe0540;
  param_1[4] = &PTR_FUN_14afe0560;
  FUN_1464ad576();
  if (*(char *)((longlong)param_1 + 0x51c) == '\x01') {
    if (*(char *)(param_1 + 0xa3) == '\x01') {
      *(undefined1 *)(param_1 + 0xa3) = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x51c) = 0;
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  FUN_1464ad7ba(param_1 + 0x93);
  *(undefined4 *)(param_1 + 0x92) = 0;
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_1464ad7f0(param_1 + 0x89);
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_1464ad826(param_1 + 0x7a);
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1464ad85c(param_1 + 0x6d);
  plVar3 = param_1 + 0x6b;
  if (*(int *)(param_1 + 0x6c) == 0) {
LAB_141575a70:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      goto LAB_141575a70;
    }
  }
  plVar3 = param_1 + 0x69;
  if (*(int *)(param_1 + 0x6a) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_141575ac4;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x6a) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_141575ac4:
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x40];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_145777871(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459daad6(param_1 + 6);
  FUN_14114f6be(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141575c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141575c90 FUN_141575c90 body=289 status=ok
// SIG undefined FUN_141575c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141575c90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c3018) {
    FUN_144b3d300(&DAT_14c9c3018);
    if (DAT_14c9c3018 == -1) {
      FUN_141575db2();
      FUN_145e4e6a8();
      FUN_140db5666(&DAT_14c9c2f70,0,&DAT_14c9c2f08,L"FCopyStencilToStencilTexturePS",
                    L"/Engine/Private/DownsampleDepthPixelShader.usf",
                    L"CopyStencilToStencilTexturePS",3,1,FUN_14714653a,FUN_1471464da,&LAB_1471464c2,
                    &LAB_1471464be,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c3f00);
      _DAT_14c9c2f70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bbff85);
      _Init_thread_footer(&DAT_14c9c3018);
    }
  }
  return &DAT_14c9c2f70;
}



// FUNCTION 141575db2 FUN_141575db2 body=258 status=ok
// SIG undefined FUN_141575db2(void)

void FUN_141575db2(void)

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
              0x110) < DAT_14c9c3f80) {
    FUN_144b3d300(&DAT_14c9c3f80);
    if (DAT_14c9c3f80 == -1) {
      FUN_145e4e7f2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xf10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3f00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc29ef);
      _Init_thread_footer(&DAT_14c9c3f80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141575eb6 FUN_141575eb6 body=289 status=ok
// SIG undefined FUN_141575eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141575eb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6378) {
    FUN_144b3d300(&DAT_14c9c6378);
    if (DAT_14c9c6378 == -1) {
      FUN_141575fd8();
      FUN_145e4ef58();
      FUN_140db5666(&DAT_14c9c62d0,0,&DAT_14c9c6268,L"FBuildTileConesCS",
                    L"/Engine/Private/DistanceFieldObjectCulling.usf",L"BuildTileConesMain",5,1,
                    FUN_14714ed5a,FUN_14714ecfa,&LAB_1462bdc50,&LAB_14714ecf6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8410);
      _DAT_14c9c62d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd62f9);
      _Init_thread_footer(&DAT_14c9c6378);
    }
  }
  return &DAT_14c9c62d0;
}



// FUNCTION 141575fd8 FUN_141575fd8 body=258 status=ok
// SIG undefined FUN_141575fd8(void)

void FUN_141575fd8(void)

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
              0x110) < DAT_14c9c8490) {
    FUN_144b3d300(&DAT_14c9c8490);
    if (DAT_14c9c8490 == -1) {
      FUN_145e4f0a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x74;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8410,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be768e);
      _Init_thread_footer(&DAT_14c9c8490);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415760dc FUN_1415760dc body=289 status=ok
// SIG undefined FUN_1415760dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415760dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7c20) {
    FUN_144b3d300(&DAT_14c9c7c20);
    if (DAT_14c9c7c20 == -1) {
      FUN_1415761fe();
      FUN_145e4f29e();
      FUN_140db5666(&DAT_14c9c7b78,0,&DAT_14c9c7b10,
                    L"FGenerateDistanceFieldAssetStreamingRequestsCS",
                    L"/Engine/Private/DistanceFieldStreaming.usf",
                    L"GenerateDistanceFieldAssetStreamingRequestsCS",5,1,FUN_14714fce2,FUN_14714fc82
                    ,&LAB_1462bdcf8,&LAB_14714fc7e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c90d0
                   );
      _DAT_14c9c7b78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be43bb);
      _Init_thread_footer(&DAT_14c9c7c20);
    }
  }
  return &DAT_14c9c7b78;
}



// FUNCTION 1415761fe FUN_1415761fe body=258 status=ok
// SIG undefined FUN_1415761fe(void)

void FUN_1415761fe(void)

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
              0x110) < DAT_14c9c9150) {
    FUN_144b3d300(&DAT_14c9c9150);
    if (DAT_14c9c9150 == -1) {
      FUN_145e4f3e8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x11e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c90d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be77c6);
      _Init_thread_footer(&DAT_14c9c9150);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141576302 FUN_141576302 body=289 status=ok
// SIG undefined FUN_141576302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141576302(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb7a8) {
    FUN_144b3d300(&DAT_14c9cb7a8);
    if (DAT_14c9cb7a8 == -1) {
      FUN_141576424();
      FUN_145e4f5e4();
      FUN_140db5666(&DAT_14c9cb700,0,&DAT_14c9cb698,L"FGenerateConservativeDepthBufferCS",
                    L"/Engine/Private/GenerateConservativeDepth.usf",
                    L"GenerateConservativeDepthBufferCS",5,1,FUN_14715a64c,FUN_14715a5ec,
                    &LAB_14715a5d4,&LAB_14715a5d0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce380)
      ;
      _DAT_14c9cb700 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c02b1c);
      _Init_thread_footer(&DAT_14c9cb7a8);
    }
  }
  return &DAT_14c9cb700;
}



// FUNCTION 141576424 FUN_141576424 body=258 status=ok
// SIG undefined FUN_141576424(void)

void FUN_141576424(void)

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
              0x110) < DAT_14c9ce400) {
    FUN_144b3d300(&DAT_14c9ce400);
    if (DAT_14c9ce400 == -1) {
      FUN_145e4f72e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce380,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e087);
      _Init_thread_footer(&DAT_14c9ce400);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141576528 FUN_141576528 body=289 status=ok
// SIG undefined FUN_141576528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141576528(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cbb20) {
    FUN_144b3d300(&DAT_14c9cbb20);
    if (DAT_14c9cbb20 == -1) {
      FUN_14157664a();
      FUN_145e4f92a();
      FUN_140db5666(&DAT_14c9cba78,0,&DAT_14c9cba10,L"FBuildHeightfieldComposeTilesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldHeightfields.usf",
                    L"BuildHeightfieldComposeTilesCS",5,1,FUN_14715a89e,FUN_14715a83e,&LAB_1462c2008
                    ,&LAB_14715a83a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce518);
      _DAT_14c9cba78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03019);
      _Init_thread_footer(&DAT_14c9cbb20);
    }
  }
  return &DAT_14c9cba78;
}



// FUNCTION 14157664a FUN_14157664a body=258 status=ok
// SIG undefined FUN_14157664a(void)

void FUN_14157664a(void)

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
              0x110) < DAT_14c9ce598) {
    FUN_144b3d300(&DAT_14c9ce598);
    if (DAT_14c9ce598 == -1) {
      FUN_145e4fa74(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce518,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e0ab);
      _Init_thread_footer(&DAT_14c9ce598);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157674e FUN_14157674e body=289 status=ok
// SIG undefined FUN_14157674e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157674e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cc488) {
    FUN_144b3d300(&DAT_14c9cc488);
    if (DAT_14c9cc488 == -1) {
      FUN_141576870();
      FUN_145e4fc70();
      FUN_140db5666(&DAT_14c9cc3e0,0,&DAT_14c9cc378,L"FCullObjectsToGridCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceField.usf",L"CullObjectsToGridCS",
                    5,1,FUN_14715ad42,FUN_14715ace2,&LAB_1462c2038,&LAB_14715acde,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ce848);
      _DAT_14c9cc3e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03d05);
      _Init_thread_footer(&DAT_14c9cc488);
    }
  }
  return &DAT_14c9cc3e0;
}



// FUNCTION 141576870 FUN_141576870 body=258 status=ok
// SIG undefined FUN_141576870(void)

void FUN_141576870(void)

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
              0x110) < DAT_14c9ce8c8) {
    FUN_144b3d300(&DAT_14c9ce8c8);
    if (DAT_14c9ce8c8 == -1) {
      FUN_141576974(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x64a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce848,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e234);
      _Init_thread_footer(&DAT_14c9ce8c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141576974 FUN_141576974 body=226 status=ok
// SIG undefined FUN_141576974(void)

longlong * FUN_141576974(longlong *param_1)

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
  pcVar13 = FUN_1462c44da;
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



// FUNCTION 141576a58 FUN_141576a58 body=289 status=ok
// SIG undefined FUN_141576a58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141576a58(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cc6d8) {
    FUN_144b3d300(&DAT_14c9cc6d8);
    if (DAT_14c9cc6d8 == -1) {
      FUN_141576b7a();
      FUN_145e4fed2();
      FUN_140db5666(&DAT_14c9cc630,0,&DAT_14c9cc5c8,L"FCompositeObjectsIntoPagesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldCompositeObjects.usf",
                    L"CompositeObjectsIntoPagesCS",5,0x30,FUN_14715aec6,FUN_14715ae66,&LAB_142c03d62
                    ,&LAB_142c03d5e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce9e0);
      _DAT_14c9cc630 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03d9e);
      _Init_thread_footer(&DAT_14c9cc6d8);
    }
  }
  return &DAT_14c9cc630;
}



// FUNCTION 141576b7a FUN_141576b7a body=258 status=ok
// SIG undefined FUN_141576b7a(void)

void FUN_141576b7a(void)

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
              0x110) < DAT_14c9cea60) {
    FUN_144b3d300(&DAT_14c9cea60);
    if (DAT_14c9cea60 == -1) {
      FUN_145e5001c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x240;
      local_58 = 0x6b4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce9e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e258);
      _Init_thread_footer(&DAT_14c9cea60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141576c7e FUN_141576c7e body=289 status=ok
// SIG undefined FUN_141576c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141576c7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ccb78) {
    FUN_144b3d300(&DAT_14c9ccb78);
    if (DAT_14c9ccb78 == -1) {
      FUN_141576da0();
      FUN_145e50218();
      FUN_140db5666(&DAT_14c9ccad0,0,&DAT_14c9cca68,L"FPageFreeListReturnCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceField.usf",L"PageFreeListReturnCS"
                    ,5,1,FUN_14715b1da,FUN_14715b17a,&LAB_1462c2050,&LAB_14715b176,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9cec00);
      _DAT_14c9ccad0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03e70);
      _Init_thread_footer(&DAT_14c9ccb78);
    }
  }
  return &DAT_14c9ccad0;
}



// FUNCTION 141576da0 FUN_141576da0 body=258 status=ok
// SIG undefined FUN_141576da0(void)

void FUN_141576da0(void)

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
              0x110) < DAT_14c9cec80) {
    FUN_144b3d300(&DAT_14c9cec80);
    if (DAT_14c9cec80 == -1) {
      FUN_145e50362(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x784;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cec00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e288);
      _Init_thread_footer(&DAT_14c9cec80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141576ea4 FUN_141576ea4 body=289 status=ok
// SIG undefined FUN_141576ea4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141576ea4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9ba0) {
    FUN_144b3d300(&DAT_14c9e9ba0);
    if (DAT_14c9e9ba0 == -1) {
      FUN_141576fc6();
      FUN_145e55bfe();
      FUN_140db5666(&DAT_14c9e9af8,0,&DAT_14c9e9a90,L"FCopyStencilToLightingChannelsPS",
                    L"/Engine/Private/DownsampleDepthPixelShader.usf",
                    L"CopyStencilToLightingChannelsPS",3,2,FUN_1471d2fa4,FUN_1471d2f44,FUN_1462d4750
                    ,&LAB_1471d2f40,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9eaad0);
      _DAT_14c9e9af8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cf232e);
      _Init_thread_footer(&DAT_14c9e9ba0);
    }
  }
  return &DAT_14c9e9af8;
}



// FUNCTION 141576fc6 FUN_141576fc6 body=258 status=ok
// SIG undefined FUN_141576fc6(void)

void FUN_141576fc6(void)

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
              0x110) < DAT_14c9eab50) {
    FUN_144b3d300(&DAT_14c9eab50);
    if (DAT_14c9eab50 == -1) {
      FUN_145e55d48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xce1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9eaad0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf7fe3);
      _Init_thread_footer(&DAT_14c9eab50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415770ca FUN_1415770ca body=289 status=ok
// SIG undefined FUN_1415770ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415770ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee1c0) {
    FUN_144b3d300(&DAT_14c9ee1c0);
    if (DAT_14c9ee1c0 == -1) {
      FUN_1415771ec();
      FUN_145e55f44();
      FUN_140db5666(&DAT_14c9ee118,0,&DAT_14c9ee0b0,L"FCompactCulledObjectsCS",
                    L"/Engine/Private/Lumen/LumenMeshSDFCulling.usf",L"CompactCulledObjectsCS",5,4,
                    FUN_1471dee0a,FUN_1471dedaa,&LAB_1462d72dc,&LAB_1471deda6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0808);
      _DAT_14c9ee118 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25b23);
      _Init_thread_footer(&DAT_14c9ee1c0);
    }
  }
  return &DAT_14c9ee118;
}



// FUNCTION 1415771ec FUN_1415771ec body=258 status=ok
// SIG undefined FUN_1415771ec(void)

void FUN_1415771ec(void)

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
              0x110) < DAT_14c9f0888) {
    FUN_144b3d300(&DAT_14c9f0888);
    if (DAT_14c9f0888 == -1) {
      FUN_145e5608e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x10b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0808,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262bf);
      _Init_thread_footer(&DAT_14c9f0888);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415772f0 FUN_1415772f0 body=289 status=ok
// SIG undefined FUN_1415772f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415772f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2a80) {
    FUN_144b3d300(&DAT_14c9f2a80);
    if (DAT_14c9f2a80 == -1) {
      FUN_141577412();
      FUN_145e56d5e();
      FUN_140db5666(&DAT_14c9f29d8,0,&DAT_14c9f2970,L"FBuildRadiosityTilesCS",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosityCulling.usf",
                    L"BuildRadiosityTilesCS",5,1,FUN_1471ed102,FUN_1471ed0a2,&LAB_1462db3de,
                    &LAB_1471ed09e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6040);
      _DAT_14c9f29d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d36326);
      _Init_thread_footer(&DAT_14c9f2a80);
    }
  }
  return &DAT_14c9f29d8;
}



// FUNCTION 141577412 FUN_141577412 body=258 status=ok
// SIG undefined FUN_141577412(void)

void FUN_141577412(void)

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
              0x110) < DAT_14c9f60c0) {
    FUN_144b3d300(&DAT_14c9f60c0);
    if (DAT_14c9f60c0 == -1) {
      FUN_145e56ea8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x107;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6040,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d580d9);
      _Init_thread_footer(&DAT_14c9f60c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141577516 FUN_141577516 body=289 status=ok
// SIG undefined FUN_141577516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141577516(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f90e8) {
    FUN_144b3d300(&DAT_14c9f90e8);
    if (DAT_14c9f90e8 == -1) {
      FUN_141577638();
      FUN_145e570a4();
      FUN_140db5666(&DAT_14c9f9040,0,&DAT_14c9f8fd8,L"FInitializeLightTileIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingCulling.usf",
                    L"InitializeLightTileIndirectArgsCS",5,1,FUN_147204e3c,FUN_147204ddc,
                    &LAB_1462e168a,&LAB_147204dd8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fdc50)
      ;
      _DAT_14c9f9040 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e52);
      _Init_thread_footer(&DAT_14c9f90e8);
    }
  }
  return &DAT_14c9f9040;
}



// FUNCTION 141577638 FUN_141577638 body=258 status=ok
// SIG undefined FUN_141577638(void)

void FUN_141577638(void)

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
              0x110) < DAT_14c9fdcd0) {
    FUN_144b3d300(&DAT_14c9fdcd0);
    if (DAT_14c9fdcd0 == -1) {
      FUN_145e571ee(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x21e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdc50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d992ff);
      _Init_thread_footer(&DAT_14c9fdcd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157773c FUN_14157773c body=289 status=ok
// SIG undefined FUN_14157773c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157773c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb5c8) {
    FUN_144b3d300(&DAT_14c9fb5c8);
    if (DAT_14c9fb5c8 == -1) {
      FUN_14157785e();
      FUN_145e573ea();
      FUN_140db5666(&DAT_14c9fb520,0,&DAT_14c9fb4b8,L"FBuildCardsUpdateListCS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"BuildCardsUpdateListCS",5,2,
                    FUN_147207edc,FUN_147207e7c,&LAB_1462e1752,&LAB_147207e78,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fed50);
      _DAT_14c9fb520 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7ff67);
      _Init_thread_footer(&DAT_14c9fb5c8);
    }
  }
  return &DAT_14c9fb520;
}



// FUNCTION 14157785e FUN_14157785e body=258 status=ok
// SIG undefined FUN_14157785e(void)

void FUN_14157785e(void)

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
              0x110) < DAT_14c9fedd0) {
    FUN_144b3d300(&DAT_14c9fedd0);
    if (DAT_14c9fedd0 == -1) {
      FUN_141577962(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x196;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fed50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c55f);
      _Init_thread_footer(&DAT_14c9fedd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141577962 FUN_141577962 body=226 status=ok
// SIG undefined FUN_141577962(void)

longlong * FUN_141577962(longlong *param_1)

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
  pcVar13 = FUN_1462e4c7c;
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



// FUNCTION 141577a46 FUN_141577a46 body=289 status=ok
// SIG undefined FUN_141577a46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141577a46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fc448) {
    FUN_144b3d300(&DAT_14c9fc448);
    if (DAT_14c9fc448 == -1) {
      FUN_141577b68();
      FUN_145e5764c();
      FUN_140db5666(&DAT_14c9fc3a0,0,&DAT_14c9fc338,L"FScreenProbeConvertToIrradianceCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeConvertToIrradianceCS",5,0xc,FUN_147208806,FUN_1472087a6,
                    &LAB_14176b702,&LAB_142d878fc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff218)
      ;
      _DAT_14c9fc3a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d87950);
      _Init_thread_footer(&DAT_14c9fc448);
    }
  }
  return &DAT_14c9fc3a0;
}



// FUNCTION 141577b68 FUN_141577b68 body=258 status=ok
// SIG undefined FUN_141577b68(void)

void FUN_141577b68(void)

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
              0x110) < DAT_14c9ff298) {
    FUN_144b3d300(&DAT_14c9ff298);
    if (DAT_14c9ff298 == -1) {
      FUN_145e57796(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0xfc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff218,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c665);
      _Init_thread_footer(&DAT_14c9ff298);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141577c6c FUN_141577c6c body=289 status=ok
// SIG undefined FUN_141577c6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141577c6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd4a8) {
    FUN_144b3d300(&DAT_14c9fd4a8);
    if (DAT_14c9fd4a8 == -1) {
      FUN_141577d8e();
      FUN_145e57992();
      FUN_140db5666(&DAT_14c9fd400,0,&DAT_14c9fd398,L"FScreenProbeTileClassificationBuildListsCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"ScreenProbeTileClassificationBuildListsCS",5,2,FUN_14720936e,FUN_14720930e,
                    FUN_1462e1828,&LAB_14720930a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff7f0);
      _DAT_14c9fd400 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd4a);
      _Init_thread_footer(&DAT_14c9fd4a8);
    }
  }
  return &DAT_14c9fd400;
}



// FUNCTION 141577d8e FUN_141577d8e body=258 status=ok
// SIG undefined FUN_141577d8e(void)

void FUN_141577d8e(void)

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
              0x110) < DAT_14c9ff870) {
    FUN_144b3d300(&DAT_14c9ff870);
    if (DAT_14c9ff870 == -1) {
      FUN_145e57adc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x362;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff7f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6e9);
      _Init_thread_footer(&DAT_14c9ff870);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141577e92 FUN_141577e92 body=289 status=ok
// SIG undefined FUN_141577e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141577e92(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca014e0) {
    FUN_144b3d300(&DAT_14ca014e0);
    if (DAT_14ca014e0 == -1) {
      FUN_141577fb4();
      FUN_145e58242();
      FUN_140db5666(&DAT_14ca01438,0,&DAT_14ca013d0,L"FScreenProbeTraceScreenTexturesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeTracing.usf",
                    L"ScreenProbeTraceScreenTexturesCS",5,0x80,FUN_147220fc0,FUN_147220f60,
                    &LAB_14176dde0,&LAB_140dfd330,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca05c58)
      ;
      _DAT_14ca01438 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db08e0);
      _Init_thread_footer(&DAT_14ca014e0);
    }
  }
  return &DAT_14ca01438;
}



// FUNCTION 141577fb4 FUN_141577fb4 body=258 status=ok
// SIG undefined FUN_141577fb4(void)

void FUN_141577fb4(void)

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
              0x110) < DAT_14ca05cd8) {
    FUN_144b3d300(&DAT_14ca05cd8);
    if (DAT_14ca05cd8 == -1) {
      FUN_1415780b8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x530;
      local_58 = 0xb7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05c58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3019);
      _Init_thread_footer(&DAT_14ca05cd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415780b8 FUN_1415780b8 body=226 status=ok
// SIG undefined FUN_1415780b8(void)

longlong * FUN_1415780b8(longlong *param_1)

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
  pcVar13 = FUN_1462e7e6e;
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



// FUNCTION 14157819c FUN_14157819c body=289 status=ok
// SIG undefined FUN_14157819c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157819c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ff08) {
    FUN_144b3d300(&DAT_14ca2ff08);
    if (DAT_14ca2ff08 == -1) {
      FUN_1415782be();
      FUN_145e5a520();
      FUN_140db5666(&DAT_14ca2fe60,0,&DAT_14ca2fdf8,L"FSubsurfaceBuildIndirectDispatchArgsCS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"BuildIndirectDispatchArgsCS",5,1,
                    FUN_147299930,FUN_1472998d0,&LAB_1472998b8,&LAB_1472998b4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33b40);
      _DAT_14ca2fe60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f06070);
      _Init_thread_footer(&DAT_14ca2ff08);
    }
  }
  return &DAT_14ca2fe60;
}



// FUNCTION 1415782be FUN_1415782be body=258 status=ok
// SIG undefined FUN_1415782be(void)

void FUN_1415782be(void)

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
              0x110) < DAT_14ca33bc0) {
    FUN_144b3d300(&DAT_14ca33bc0);
    if (DAT_14ca33bc0 == -1) {
      FUN_145e5a66a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1f8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33b40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140a5);
      _Init_thread_footer(&DAT_14ca33bc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415783c2 FUN_1415783c2 body=289 status=ok
// SIG undefined FUN_1415783c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415783c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43190) {
    FUN_144b3d300(&DAT_14ca43190);
    if (DAT_14ca43190 == -1) {
      FUN_1415784e4();
      FUN_145e5c378();
      FUN_140db5666(&DAT_14ca430e8,0,&DAT_14ca43080,L"FRenderRealTimeReflectionHeightFogPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"RenderRealTimeReflectionHeightFogPS",3,2,FUN_1472c75e8,FUN_1472c7588,
                    &LAB_1472c7584,&LAB_1472c7580,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca44320)
      ;
      _DAT_14ca430e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f531);
      _Init_thread_footer(&DAT_14ca43190);
    }
  }
  return &DAT_14ca430e8;
}



// FUNCTION 1415784e4 FUN_1415784e4 body=258 status=ok
// SIG undefined FUN_1415784e4(void)

void FUN_1415784e4(void)

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
              0x110) < DAT_14ca443a0) {
    FUN_144b3d300(&DAT_14ca443a0);
    if (DAT_14ca443a0 == -1) {
      FUN_145e5c4c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xf1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44320,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb257f);
      _Init_thread_footer(&DAT_14ca443a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415785e8 FUN_1415785e8 body=289 status=ok
// SIG undefined FUN_1415785e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415785e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60fa8) {
    FUN_144b3d300(&DAT_14ca60fa8);
    if (DAT_14ca60fa8 == -1) {
      FUN_14157870a();
      FUN_145e5cc28();
      FUN_140db5666(&DAT_14ca60f00,0,&DAT_14ca60e98,L"FFilterTranslucentVolumePS",
                    L"/Engine/Private/TranslucentLightingShaders.usf",L"FilterMainPS",3,1,
                    FUN_147322b9a,FUN_147322b3a,&LAB_145bb5a54,&LAB_147322b36,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62a10);
      _DAT_14ca60f00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ac35f);
      _Init_thread_footer(&DAT_14ca60fa8);
    }
  }
  return &DAT_14ca60f00;
}



// FUNCTION 14157870a FUN_14157870a body=258 status=ok
// SIG undefined FUN_14157870a(void)

void FUN_14157870a(void)

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
              0x110) < DAT_14ca62a90) {
    FUN_144b3d300(&DAT_14ca62a90);
    if (DAT_14ca62a90 == -1) {
      FUN_145e5cd72(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x29d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62a10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bd5ab);
      _Init_thread_footer(&DAT_14ca62a90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157880e FUN_14157880e body=289 status=ok
// SIG undefined FUN_14157880e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157880e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61320) {
    FUN_144b3d300(&DAT_14ca61320);
    if (DAT_14ca61320 == -1) {
      FUN_141578930();
      FUN_145e5cf6e();
      FUN_140db5666(&DAT_14ca61278,0,&DAT_14ca61210,L"FClearTranslucentLightingVolumeCS",
                    L"/Engine/Private/TranslucentLightInjectionShaders.usf",
                    L"ClearTranslucentLightingVolumeCS",5,1,FUN_147322df6,FUN_147322d96,
                    &LAB_147322d7e,&LAB_147322d7a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca62ba8)
      ;
      _DAT_14ca61278 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ac479);
      _Init_thread_footer(&DAT_14ca61320);
    }
  }
  return &DAT_14ca61278;
}



// FUNCTION 141578930 FUN_141578930 body=258 status=ok
// SIG undefined FUN_141578930(void)

void FUN_141578930(void)

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
              0x110) < DAT_14ca62c28) {
    FUN_144b3d300(&DAT_14ca62c28);
    if (DAT_14ca62c28 == -1) {
      FUN_145e5d0b8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x345;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62ba8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bd5cf);
      _Init_thread_footer(&DAT_14ca62c28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141578a34 FUN_141578a34 body=289 status=ok
// SIG undefined FUN_141578a34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141578a34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61860) {
    FUN_144b3d300(&DAT_14ca61860);
    if (DAT_14ca61860 == -1) {
      FUN_141578b56();
      FUN_145e5d2b4();
      FUN_140db5666(&DAT_14ca617b8,0,&DAT_14ca61750,L"FCopySceneColorPS",
                    L"/Engine/Private/TranslucentLightingShaders.usf",L"CopySceneColorMain",3,1,
                    FUN_14732308c,FUN_14732302c,&LAB_147323014,&LAB_147323010,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62d40);
      _DAT_14ca617b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b1cf9);
      _Init_thread_footer(&DAT_14ca61860);
    }
  }
  return &DAT_14ca617b8;
}



// FUNCTION 141578b56 FUN_141578b56 body=258 status=ok
// SIG undefined FUN_141578b56(void)

void FUN_141578b56(void)

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
              0x110) < DAT_14ca62dc0) {
    FUN_144b3d300(&DAT_14ca62dc0);
    if (DAT_14ca62dc0 == -1) {
      FUN_145e5d3fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x1ad;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62d40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bde58);
      _Init_thread_footer(&DAT_14ca62dc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141578c5a FUN_141578c5a body=289 status=ok
// SIG undefined FUN_141578c5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141578c5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61d80) {
    FUN_144b3d300(&DAT_14ca61d80);
    if (DAT_14ca61d80 == -1) {
      FUN_141578d7c();
      FUN_145e5d5fa();
      FUN_140db5666(&DAT_14ca61cd8,0,&DAT_14ca61c70,L"FCalculateShadingRateImageCS",
                    L"/Engine/Private/VariableRateShading/VRSShadingRateCalculate.usf",
                    L"CalculateShadingRateImage",5,8,FUN_1473235a0,FUN_147323540,&LAB_1430b8178,
                    &LAB_14732353c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca62ff8);
      _DAT_14ca61cd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b81ed);
      _Init_thread_footer(&DAT_14ca61d80);
    }
  }
  return &DAT_14ca61cd8;
}



// FUNCTION 141578d7c FUN_141578d7c body=258 status=ok
// SIG undefined FUN_141578d7c(void)

void FUN_141578d7c(void)

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
              0x110) < DAT_14ca63078) {
    FUN_144b3d300(&DAT_14ca63078);
    if (DAT_14ca63078 == -1) {
      FUN_145e5d744(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x51;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62ff8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c1f74);
      _Init_thread_footer(&DAT_14ca63078);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141578e80 FUN_141578e80 body=289 status=ok
// SIG undefined FUN_141578e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141578e80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca64e98) {
    FUN_144b3d300(&DAT_14ca64e98);
    if (DAT_14ca64e98 == -1) {
      FUN_141578fa2();
      FUN_145e5e414();
      FUN_140db5666(&DAT_14ca64df0,0,&DAT_14ca64d88,L"FUpdatePhysicalPageAddresses",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"UpdatePhysicalPageAddresses",5,4,FUN_14732b346,FUN_14732b2e6,&LAB_14732b2ae,
                    &LAB_14732b2aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67870);
      _DAT_14ca64df0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce8d4);
      _Init_thread_footer(&DAT_14ca64e98);
    }
  }
  return &DAT_14ca64df0;
}



// FUNCTION 141578fa2 FUN_141578fa2 body=258 status=ok
// SIG undefined FUN_141578fa2(void)

void FUN_141578fa2(void)

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
              0x110) < DAT_14ca678f0) {
    FUN_144b3d300(&DAT_14ca678f0);
    if (DAT_14ca678f0 == -1) {
      FUN_145e5e55e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x3f8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67870,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5463);
      _Init_thread_footer(&DAT_14ca678f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415790a6 FUN_1415790a6 body=289 status=ok
// SIG undefined FUN_1415790a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415790a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca64fc0) {
    FUN_144b3d300(&DAT_14ca64fc0);
    if (DAT_14ca64fc0 == -1) {
      FUN_1415791c8();
      FUN_145e5e75a();
      FUN_140db5666(&DAT_14ca64f18,0,&DAT_14ca64eb0,L"FUpdatePhysicalPages",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"UpdatePhysicalPages",5,4,FUN_14732b444,FUN_14732b3e4,&LAB_14732b3ac,
                    &LAB_14732b3a8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca678f8);
      _DAT_14ca64f18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce8e0);
      _Init_thread_footer(&DAT_14ca64fc0);
    }
  }
  return &DAT_14ca64f18;
}



// FUNCTION 1415791c8 FUN_1415791c8 body=258 status=ok
// SIG undefined FUN_1415791c8(void)

void FUN_1415791c8(void)

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
              0x110) < DAT_14ca67978) {
    FUN_144b3d300(&DAT_14ca67978);
    if (DAT_14ca67978 == -1) {
      FUN_145e5e8a4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x40f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca678f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e546f);
      _Init_thread_footer(&DAT_14ca67978);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415792cc FUN_1415792cc body=289 status=ok
// SIG undefined FUN_1415792cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415792cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca656b0) {
    FUN_144b3d300(&DAT_14ca656b0);
    if (DAT_14ca656b0 == -1) {
      FUN_1415793ee();
      FUN_145e5eaa0();
      FUN_140db5666(&DAT_14ca65608,0,&DAT_14ca655a0,L"FSelectPagesToInitializeCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"SelectPagesToInitializeCS",5,2,FUN_14732bb5a,FUN_14732bafa,&LAB_14732bac2,
                    &LAB_14732babe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67cb0);
      _DAT_14ca65608 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce928);
      _Init_thread_footer(&DAT_14ca656b0);
    }
  }
  return &DAT_14ca65608;
}



// FUNCTION 1415793ee FUN_1415793ee body=258 status=ok
// SIG undefined FUN_1415793ee(void)

void FUN_1415793ee(void)

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
              0x110) < DAT_14ca67d30) {
    FUN_144b3d300(&DAT_14ca67d30);
    if (DAT_14ca67d30 == -1) {
      FUN_145e5ebea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x521;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67cb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54c3);
      _Init_thread_footer(&DAT_14ca67d30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415794f2 FUN_1415794f2 body=289 status=ok
// SIG undefined FUN_1415794f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415794f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca657d8) {
    FUN_144b3d300(&DAT_14ca657d8);
    if (DAT_14ca657d8 == -1) {
      FUN_141579614();
      FUN_145e5ede6();
      FUN_140db5666(&DAT_14ca65730,0,&DAT_14ca656c8,L"FInitializePhysicalPagesIndirectCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"InitializePhysicalPagesIndirectCS",5,1,FUN_14732bc58,FUN_14732bbf8,
                    &LAB_14732bbc0,&LAB_14732bbbc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67d38)
      ;
      _DAT_14ca65730 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce934);
      _Init_thread_footer(&DAT_14ca657d8);
    }
  }
  return &DAT_14ca65730;
}



// FUNCTION 141579614 FUN_141579614 body=258 status=ok
// SIG undefined FUN_141579614(void)

void FUN_141579614(void)

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
              0x110) < DAT_14ca67db8) {
    FUN_144b3d300(&DAT_14ca67db8);
    if (DAT_14ca67db8 == -1) {
      FUN_145e5ef30(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x530;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67d38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54cf);
      _Init_thread_footer(&DAT_14ca67db8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141579718 FUN_141579718 body=289 status=ok
// SIG undefined FUN_141579718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141579718(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65b50) {
    FUN_144b3d300(&DAT_14ca65b50);
    if (DAT_14ca65b50 == -1) {
      FUN_14157983a();
      FUN_145e5f12c();
      FUN_140db5666(&DAT_14ca65aa8,0,&DAT_14ca65a40,L"FInitPageRectBoundsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"InitPageRectBounds",5,1,FUN_14732bf52,FUN_14732bef2,&LAB_14732beba,
                    &LAB_14732beb6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67ed0);
      _DAT_14ca65aa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430cf5d4);
      _Init_thread_footer(&DAT_14ca65b50);
    }
  }
  return &DAT_14ca65aa8;
}



// FUNCTION 14157983a FUN_14157983a body=258 status=ok
// SIG undefined FUN_14157983a(void)

void FUN_14157983a(void)

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
              0x110) < DAT_14ca67f50) {
    FUN_144b3d300(&DAT_14ca67f50);
    if (DAT_14ca67f50 == -1) {
      FUN_145e5f276(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x5a3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67ed0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54f3);
      _Init_thread_footer(&DAT_14ca67f50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157993e FUN_14157993e body=289 status=ok
// SIG undefined FUN_14157993e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157993e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65ec8) {
    FUN_144b3d300(&DAT_14ca65ec8);
    if (DAT_14ca65ec8 == -1) {
      FUN_141579a60();
      FUN_145e5f472();
      FUN_140db5666(&DAT_14ca65e20,0,&DAT_14ca65db8,L"FVirtualSmLogStatsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPrintStats.usf",
                    L"LogVirtualSmStatsCS",5,2,FUN_14732c36c,FUN_14732c30c,&LAB_14732c2d4,
                    &LAB_14732c2d0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68068);
      _DAT_14ca65e20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d7edd);
      _Init_thread_footer(&DAT_14ca65ec8);
    }
  }
  return &DAT_14ca65e20;
}



// FUNCTION 141579a60 FUN_141579a60 body=258 status=ok
// SIG undefined FUN_141579a60(void)

void FUN_141579a60(void)

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
              0x110) < DAT_14ca680e8) {
    FUN_144b3d300(&DAT_14ca680e8);
    if (DAT_14ca680e8 == -1) {
      FUN_145e5f5bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x9bf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68068,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6495);
      _Init_thread_footer(&DAT_14ca680e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141579b64 FUN_141579b64 body=258 status=ok
// SIG undefined FUN_141579b64(void)

void FUN_141579b64(void)

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
              0x110) < DAT_14cb50e40) {
    FUN_144b3d300(&DAT_14cb50e40);
    if (DAT_14cb50e40 == -1) {
      FUN_145e6805c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xb5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb50dc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf2e22);
      _Init_thread_footer(&DAT_14cb50e40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141579c68 FUN_141579c68 body=289 status=ok
// SIG undefined FUN_141579c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141579c68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec3f8) {
    FUN_144b3d300(&DAT_14c9ec3f8);
    if (DAT_14c9ec3f8 == -1) {
      FUN_141579d8a();
      FUN_145e6ba70();
      FUN_140db5666(&DAT_14c9ec350,0,&DAT_14c9ec2e8,L"FApplyLightShaftsPixelShader",
                    L"/Engine/Private/LightShaftShader.usf",L"ApplyLightShaftsPixelMain",3,1,
                    FUN_1471dc326,FUN_1471dc2c6,&LAB_1471dc2ae,&LAB_1471dc2aa,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0010);
      _DAT_14c9ec350 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cfe783);
      _Init_thread_footer(&DAT_14c9ec3f8);
    }
  }
  return &DAT_14c9ec350;
}



// FUNCTION 141579d8a FUN_141579d8a body=258 status=ok
// SIG undefined FUN_141579d8a(void)

void FUN_141579d8a(void)

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
              0x110) < DAT_14c9f0090) {
    FUN_144b3d300(&DAT_14c9f0090);
    if (DAT_14c9f0090 == -1) {
      FUN_145e6bbba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x11b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0010,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261df);
      _Init_thread_footer(&DAT_14c9f0090);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141579e8e FUN_141579e8e body=289 status=ok
// SIG undefined FUN_141579e8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141579e8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14ee8) {
    FUN_144b3d300(&DAT_14ca14ee8);
    if (DAT_14ca14ee8 == -1) {
      FUN_141579fb0();
      FUN_145e6bdb8();
      FUN_140db5666(&DAT_14ca14e40,0,&DAT_14ca14dd8,L"FCompactViewsVSM_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceCulling.usf",L"CompactViewsVSM_CS",5,4,
                    FUN_1472523b8,FUN_147252358,&LAB_1462eecf4,&LAB_147252354,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17b50);
      _DAT_14ca14e40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a438);
      _Init_thread_footer(&DAT_14ca14ee8);
    }
  }
  return &DAT_14ca14e40;
}



// FUNCTION 141579fb0 FUN_141579fb0 body=258 status=ok
// SIG undefined FUN_141579fb0(void)

void FUN_141579fb0(void)

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
              0x110) < DAT_14ca17bd0) {
    FUN_144b3d300(&DAT_14ca17bd0);
    if (DAT_14ca17bd0 == -1) {
      FUN_145e6bf02(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x395;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17b50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27657);
      _Init_thread_footer(&DAT_14ca17bd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157a0b4 FUN_14157a0b4 body=289 status=ok
// SIG undefined FUN_14157a0b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157a0b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d078) {
    FUN_144b3d300(&DAT_14ca5d078);
    if (DAT_14ca5d078 == -1) {
      FUN_14157a1d6();
      FUN_145e6c100();
      FUN_140db5666(&DAT_14ca5cfd0,0,&DAT_14ca5cf68,L"FRenderMultiScatteredLuminanceLutCS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderMultiScatteredLuminanceLutCS",5,2,
                    FUN_147315df8,FUN_147315d98,&LAB_147315d94,&LAB_147315d90,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5eda8);
      _DAT_14ca5cfd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430914d5);
      _Init_thread_footer(&DAT_14ca5d078);
    }
  }
  return &DAT_14ca5cfd0;
}



// FUNCTION 14157a1d6 FUN_14157a1d6 body=258 status=ok
// SIG undefined FUN_14157a1d6(void)

void FUN_14157a1d6(void)

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
              0x110) < DAT_14ca5ee28) {
    FUN_144b3d300(&DAT_14ca5ee28);
    if (DAT_14ca5ee28 == -1) {
      FUN_145e6c24a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x339;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5eda8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e81b);
      _Init_thread_footer(&DAT_14ca5ee28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157a2da FUN_14157a2da body=289 status=ok
// SIG undefined FUN_14157a2da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157a2da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65338) {
    FUN_144b3d300(&DAT_14ca65338);
    if (DAT_14ca65338 == -1) {
      FUN_14157a3fc();
      FUN_145e6c448();
      FUN_140db5666(&DAT_14ca65290,0,&DAT_14ca65228,L"FPackAvailablePagesCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"PackAvailablePages",5,1,FUN_14732b860,FUN_14732b800,&LAB_14732b7c8,
                    &LAB_14732b7c4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67b18);
      _DAT_14ca65290 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce904);
      _Init_thread_footer(&DAT_14ca65338);
    }
  }
  return &DAT_14ca65290;
}



// FUNCTION 14157a3fc FUN_14157a3fc body=258 status=ok
// SIG undefined FUN_14157a3fc(void)

void FUN_14157a3fc(void)

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
              0x110) < DAT_14ca67b98) {
    FUN_144b3d300(&DAT_14ca67b98);
    if (DAT_14ca67b98 == -1) {
      FUN_145e6c592(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4f6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67b18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e549f);
      _Init_thread_footer(&DAT_14ca67b98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157a500 FUN_14157a500 body=289 status=ok
// SIG undefined FUN_14157a500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157a500(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65460) {
    FUN_144b3d300(&DAT_14ca65460);
    if (DAT_14ca65460 == -1) {
      FUN_14157a622();
      FUN_145e6c790();
      FUN_140db5666(&DAT_14ca653b8,0,&DAT_14ca65350,L"FAppendPhysicalPageListsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"AppendPhysicalPageLists",5,1,FUN_14732b95e,FUN_14732b8fe,&LAB_14732b8c6,
                    &LAB_14732b8c2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67ba0);
      _DAT_14ca653b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce910);
      _Init_thread_footer(&DAT_14ca65460);
    }
  }
  return &DAT_14ca653b8;
}



// FUNCTION 14157a622 FUN_14157a622 body=258 status=ok
// SIG undefined FUN_14157a622(void)

void FUN_14157a622(void)

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
              0x110) < DAT_14ca67c20) {
    FUN_144b3d300(&DAT_14ca67c20);
    if (DAT_14ca67c20 == -1) {
      FUN_145e6c8da(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x503;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67ba0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54ab);
      _Init_thread_footer(&DAT_14ca67c20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157a726 FUN_14157a726 body=289 status=ok
// SIG undefined FUN_14157a726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157a726(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65c78) {
    FUN_144b3d300(&DAT_14ca65c78);
    if (DAT_14ca65c78 == -1) {
      FUN_14157a848();
      FUN_145e6cad8();
      FUN_140db5666(&DAT_14ca65bd0,0,&DAT_14ca65b68,L"FVirtualSmFeedbackStatusCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"FeedbackStatusCS",5,1,FUN_14732c050,FUN_14732bff0,&LAB_14732bfb8,
                    &LAB_14732bfb4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67f58);
      _DAT_14ca65bd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430cf5e0);
      _Init_thread_footer(&DAT_14ca65c78);
    }
  }
  return &DAT_14ca65bd0;
}



// FUNCTION 14157a848 FUN_14157a848 body=258 status=ok
// SIG undefined FUN_14157a848(void)

void FUN_14157a848(void)

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
              0x110) < DAT_14ca67fd8) {
    FUN_144b3d300(&DAT_14ca67fd8);
    if (DAT_14ca67fd8 == -1) {
      FUN_145e6cc22(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x5b4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67f58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54ff);
      _Init_thread_footer(&DAT_14ca67fd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157a94c FUN_14157a94c body=289 status=ok
// SIG undefined FUN_14157a94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157a94c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca665b8) {
    FUN_144b3d300(&DAT_14ca665b8);
    if (DAT_14ca665b8 == -1) {
      FUN_14157aa6e();
      FUN_145e6ce20();
      FUN_140db5666(&DAT_14ca66510,0,&DAT_14ca664a8,L"FUpdateAndClearDirtyFlagsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"UpdateAndClearDirtyFlagsCS",5,1,FUN_14732c928,FUN_14732c8c8,&LAB_14732c890,
                    &LAB_14732c88c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68420);
      _DAT_14ca66510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d82f0);
      _Init_thread_footer(&DAT_14ca665b8);
    }
  }
  return &DAT_14ca66510;
}



// FUNCTION 14157aa6e FUN_14157aa6e body=258 status=ok
// SIG undefined FUN_14157aa6e(void)

void FUN_14157aa6e(void)

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
              0x110) < DAT_14ca684a0) {
    FUN_144b3d300(&DAT_14ca684a0);
    if (DAT_14ca684a0 == -1) {
      FUN_145e6cf6a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xb36;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68420,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64e9);
      _Init_thread_footer(&DAT_14ca684a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157ab72 FUN_14157ab72 body=289 status=ok
// SIG undefined FUN_14157ab72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157ab72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8bea0) {
    FUN_144b3d300(&DAT_14ca8bea0);
    if (DAT_14ca8bea0 == -1) {
      FUN_14157ac94();
      FUN_145e6d168();
      FUN_140db5666(&DAT_14ca8bdf8,0,&DAT_14ca8bd90,L"FBuildIndirectDispatchArgsBufferCS",
                    L"/Engine/Private/ComputeGenerateMips.usf",L"BuildIndirectDispatchArgsCS",5,1,
                    FUN_14741bff2,FUN_14741bf92,&LAB_14741bf8e,&LAB_14741bf8a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca91748);
      _DAT_14ca8bdf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2e33);
      _Init_thread_footer(&DAT_14ca8bea0);
    }
  }
  return &DAT_14ca8bdf8;
}



// FUNCTION 14157ac94 FUN_14157ac94 body=258 status=ok
// SIG undefined FUN_14157ac94(void)

void FUN_14157ac94(void)

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
              0x110) < DAT_14ca917c8) {
    FUN_144b3d300(&DAT_14ca917c8);
    if (DAT_14ca917c8 == -1) {
      FUN_145e6d2bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x54;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91748,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8c2d);
      _Init_thread_footer(&DAT_14ca917c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157ad98 FUN_14157ad98 body=289 status=ok
// SIG undefined FUN_14157ad98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157ad98(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb50af0) {
    FUN_144b3d300(&DAT_14cb50af0);
    if (DAT_14cb50af0 == -1) {
      FUN_14157aeba();
      FUN_145e6d4b0();
      FUN_140db5666(&DAT_14cb50a48,0,&DAT_14cb509e0,L"FProjectionCS",
                    L"/GbxWindShaders/JacobiSolve.usf",L"Projection",5,1,FUN_1485ec922,FUN_1485ec8c2
                    ,&LAB_1485ec8be,&LAB_1485ec8ba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb50e48
                   );
      _DAT_14cb50a48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143beebdd);
      _Init_thread_footer(&DAT_14cb50af0);
    }
  }
  return &DAT_14cb50a48;
}



// FUNCTION 14157aeba FUN_14157aeba body=258 status=ok
// SIG undefined FUN_14157aeba(void)

void FUN_14157aeba(void)

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
              0x110) < DAT_14cb50ec8) {
    FUN_144b3d300(&DAT_14cb50ec8);
    if (DAT_14cb50ec8 == -1) {
      FUN_145e6d5fa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xd7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb50e48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf2e2e);
      _Init_thread_footer(&DAT_14cb50ec8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157afbe FUN_14157afbe body=101 status=ok
// SIG undefined FUN_14157afbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14157afbe(void)

{
  _DAT_14c949858 = 0;
  _DAT_14c94985c = 0;
  _DAT_14c949860 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c949868);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c949868,4000);
  DAT_14c949890 = FUN_1405d8a54(1);
  DAT_14c950c20 = &DAT_14c949858;
  return;
}



// FUNCTION 14157b024 FUN_14157b024 body=289 status=ok
// SIG undefined FUN_14157b024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157b024(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef898) {
    FUN_144b3d300(&DAT_14c9ef898);
    if (DAT_14c9ef898 == -1) {
      FUN_14157b146();
      FUN_145e7128a();
      FUN_140db5666(&DAT_14c9ef7f0,0,&DAT_14c9ef788,L"FRadianceCacheTraceFromProbesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"TraceFromProbesCS",5,8,
                    FUN_1471dff26,FUN_1471dfec6,&LAB_141767fe2,&LAB_1471dfec2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f1220);
      _DAT_14c9ef7f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260f1);
      _Init_thread_footer(&DAT_14c9ef898);
    }
  }
  return &DAT_14c9ef7f0;
}



// FUNCTION 14157b146 FUN_14157b146 body=258 status=ok
// SIG undefined FUN_14157b146(void)

void FUN_14157b146(void)

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
              0x110) < DAT_14c9f12a0) {
    FUN_144b3d300(&DAT_14c9f12a0);
    if (DAT_14c9f12a0 == -1) {
      FUN_145e713d4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2f0;
      local_58 = 0x34c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1220,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263bb);
      _Init_thread_footer(&DAT_14c9f12a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157b24a FUN_14157b24a body=289 status=ok
// SIG undefined FUN_14157b24a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157b24a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2cd0) {
    FUN_144b3d300(&DAT_14c9f2cd0);
    if (DAT_14c9f2cd0 == -1) {
      FUN_14157b36c();
      FUN_145e71b42();
      FUN_140db5666(&DAT_14c9f2c28,0,&DAT_14c9f2bc0,L"FLumenRadiosityDistanceFieldTracingCS",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosity.usf",
                    L"LumenRadiosityDistanceFieldTracingCS",5,8,FUN_1471ed28e,FUN_1471ed22e,
                    &LAB_141768ec8,&LAB_1471ed22a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f61d8)
      ;
      _DAT_14c9f2c28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3633e);
      _Init_thread_footer(&DAT_14c9f2cd0);
    }
  }
  return &DAT_14c9f2c28;
}



// FUNCTION 14157b36c FUN_14157b36c body=258 status=ok
// SIG undefined FUN_14157b36c(void)

void FUN_14157b36c(void)

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
              0x110) < DAT_14c9f6258) {
    FUN_144b3d300(&DAT_14c9f6258);
    if (DAT_14c9f6258 == -1) {
      FUN_145e71c8c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x16a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f61d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d580fd);
      _Init_thread_footer(&DAT_14c9f6258);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157b470 FUN_14157b470 body=289 status=ok
// SIG undefined FUN_14157b470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157b470(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fbfa8) {
    FUN_144b3d300(&DAT_14c9fbfa8);
    if (DAT_14c9fbfa8 == -1) {
      FUN_14157b592();
      FUN_145e71e8c();
      FUN_140db5666(&DAT_14c9fbf00,0,&DAT_14c9fbe98,L"FScreenProbeCompositeTracesWithScatterCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeCompositeTracesWithScatterCS",5,6,FUN_1472084f2,FUN_147208492,
                    &LAB_1462e1784,&LAB_14720848e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9feff8)
      ;
      _DAT_14c9fbf00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d878cb);
      _Init_thread_footer(&DAT_14c9fbfa8);
    }
  }
  return &DAT_14c9fbf00;
}



// FUNCTION 14157b592 FUN_14157b592 body=258 status=ok
// SIG undefined FUN_14157b592(void)

void FUN_14157b592(void)

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
              0x110) < DAT_14c9ff078) {
    FUN_144b3d300(&DAT_14c9ff078);
    if (DAT_14c9ff078 == -1) {
      FUN_145e71fd6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9feff8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c635);
      _Init_thread_footer(&DAT_14c9ff078);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157b696 FUN_14157b696 body=289 status=ok
// SIG undefined FUN_14157b696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157b696(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca00e18) {
    FUN_144b3d300(&DAT_14ca00e18);
    if (DAT_14ca00e18 == -1) {
      FUN_14157b7b8();
      FUN_145e721d6();
      FUN_140db5666(&DAT_14ca00d70,0,&DAT_14ca00d08,
                    L"FScreenProbeComputeBRDFProbabilityDensityFunctionCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeImportanceSampling.usf",
                    L"ScreenProbeComputeBRDFProbabilityDensityFunctionCS",5,2,FUN_147220bea,
                    FUN_147220b8a,FUN_1462e72e8,&LAB_147220b86,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca059b0);
      _DAT_14ca00d70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dae88d);
      _Init_thread_footer(&DAT_14ca00e18);
    }
  }
  return &DAT_14ca00d70;
}



// FUNCTION 14157b7b8 FUN_14157b7b8 body=258 status=ok
// SIG undefined FUN_14157b7b8(void)

void FUN_14157b7b8(void)

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
              0x110) < DAT_14ca05a30) {
    FUN_144b3d300(&DAT_14ca05a30);
    if (DAT_14ca05a30 == -1) {
      FUN_145e72320(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x55;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca059b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd2fdd);
      _Init_thread_footer(&DAT_14ca05a30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157b8bc FUN_14157b8bc body=226 status=ok
// SIG undefined FUN_14157b8bc(void)

longlong * FUN_14157b8bc(longlong *param_1)

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
  pcVar13 = FUN_14630c9a2;
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



// FUNCTION 14157b9a0 FUN_14157b9a0 body=289 status=ok
// SIG undefined FUN_14157b9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157b9a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61ea8) {
    FUN_144b3d300(&DAT_14ca61ea8);
    if (DAT_14ca61ea8 == -1) {
      FUN_14157bac2();
      FUN_145e77b1c();
      FUN_140db5666(&DAT_14ca61e00,0,&DAT_14ca61d98,L"FRescaleVariableRateShadingCS",
                    L"/Engine/Private/VariableRateShading/VRSShadingRateReproject.usf",
                    L"RescaleVariableRateShading",5,1,FUN_14732367e,FUN_14732361e,&LAB_147323606,
                    &LAB_147323602,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca63080);
      _DAT_14ca61e00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b81f9);
      _Init_thread_footer(&DAT_14ca61ea8);
    }
  }
  return &DAT_14ca61e00;
}



// FUNCTION 14157bac2 FUN_14157bac2 body=258 status=ok
// SIG undefined FUN_14157bac2(void)

void FUN_14157bac2(void)

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
              0x110) < DAT_14ca63100) {
    FUN_144b3d300(&DAT_14ca63100);
    if (DAT_14ca63100 == -1) {
      FUN_145e77c66(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x8f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca63080,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c1f80);
      _Init_thread_footer(&DAT_14ca63100);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157bbc6 FUN_14157bbc6 body=226 status=ok
// SIG undefined FUN_14157bbc6(void)

longlong * FUN_14157bbc6(longlong *param_1)

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
  pcVar13 = FUN_146488e60;
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



// FUNCTION 14157bcaa FUN_14157bcaa body=700 status=ok
// SIG undefined FUN_14157bcaa(void)

void FUN_14157bcaa(longlong param_1,char *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1413491c8();
  lVar7 = *(longlong *)(param_2 + 0x18);
  if (lVar7 == 0) {
    uVar5 = FUN_140067708();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_2 + 0x18) = lVar7;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    if ((lVar7 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,param_2 + 0x10);
        *(longlong *)(param_2 + 0x20) = lVar7;
        if (lVar7 != 0) goto LAB_14157bce5;
      }
    }
    if ((*param_2 != '\x01') || (*(longlong *)(param_2 + 4) == 0)) goto LAB_14157be6c;
  }
LAB_14157bce5:
  if ((*(longlong *)(param_1 + 0x40) == 0) ||
     (FUN_1403c747e(*(longlong *)(param_1 + 0x40),&local_30,0), plVar3 = local_30,
     local_30 == (longlong *)0x0)) goto LAB_14157be6c;
  local_58 = *(longlong *)(param_1 + 0x40);
  plVar2 = *(longlong **)(local_58 + 0x20);
  if ((plVar2 == (longlong *)0x0) || (*(int *)(local_58 + 0x1c) == 0)) {
LAB_14157bdd3:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(local_58 + 0x18);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(local_58 + 0x1c))) ||
         ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_14157bdd3;
      if (*(code **)(*plVar2 + 0x30) == (code *)&LAB_14479b63c) {
        plVar6 = plVar2 + -0xa4;
        if ((longlong *)plVar2[-0x77] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar2[-0x77];
        }
      }
      else {
        plVar6 = (longlong *)(**(code **)(*plVar2 + 0x30))();
        local_58 = *(longlong *)(param_1 + 0x40);
      }
    }
  }
  local_50 = *(longlong *)(param_1 + 0x48);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  uVar5 = FUN_140206ee8(param_2,&local_58);
  local_68 = 0;
  FUN_14084a448(plVar3,&local_48,uVar5,plVar6);
  *(undefined8 *)(param_1 + 0x3a0) = local_48;
  *(undefined8 *)(param_1 + 0x3a8) = local_40;
  *(undefined8 *)(param_1 + 0x3b0) = local_38;
  if (((local_30 != (longlong *)0x0) &&
      (*(int *)(local_30 + 0x21) = (int)local_30[0x21] + -1, (int)local_30[0x26] < 1)) &&
     (FUN_1400847bc(local_30 + 0x17,0), (int)local_30[0x21] == 0)) {
    FUN_140087e46(local_30);
    if (*local_30 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_14157be6c;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_30);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_30);
    }
  }
LAB_14157be6c:
  FUN_144904448(param_1 + 0x3a0);
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14157bf68 FUN_14157bf68 body=1867 status=ok
// SIG undefined FUN_14157bf68(void)

void FUN_14157bf68(longlong *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  ulonglong local_78;
  longlong *plStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446f470e(&local_a0,param_2,1);
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_1403e7a24(param_1,iVar14);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar3 = iVar13 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar7 = iVar13 + 1;
    iVar11 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar11 = iVar13;
    }
    if (iVar11 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar13) {
        if (iVar13 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar3 = iVar13;
        }
        else {
          uVar9 = iVar13 + 0x20U >> 5;
          local_a8 = (ulonglong)uVar9;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar9) {
              uVar8 = uVar9;
            }
          }
          else {
            uVar8 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar8 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar7 = -0x20;
          if ((int)local_a8 <= iVar3) {
            iVar7 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar15,iVar3);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar3 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar15;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar13 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar4 = (longlong)iVar14;
    iVar13 = *(int *)(*param_1 + 4 + lVar4 * 0x58);
    *(int *)(param_1 + 6) = iVar13;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x58) = 0xffffffff;
    }
  }
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar13 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  puVar12 = (undefined8 *)(lVar4 * 0x58 + *param_1);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
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
  plStack_80 = DAT_14c844840;
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
  local_78 = local_78 & 0xffffffff00000000;
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
  plStack_70 = DAT_14c844840;
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
  local_68 = local_68 & 0xffffffff00000000;
  *puVar12 = local_a0;
  puVar12[1] = local_98;
  local_98 = 0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_90._4_4_;
  uStack_90 = 0;
  puVar12[3] = local_88;
  FUN_14023423e(puVar12 + 4,&plStack_80);
  FUN_14023423e(puVar12 + 6,&plStack_70);
  *(undefined1 *)(puVar12 + 9) = (undefined1)local_58;
  puVar12[8] = uStack_60;
  if (plStack_70 != (longlong *)0x0) {
    (**(code **)(*plStack_70 + 0x10))();
  }
  if (plStack_80 != (longlong *)0x0) {
    (**(code **)(*plStack_80 + 0x10))();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(puVar12 + 10) = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 < 4) {
    iVar13 = 1;
  }
  else {
    uVar5 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar2 = *puVar12;
  if (((int)uVar9 < 1) || (iVar13 <= (int)param_1[9])) {
    uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar8 = (uint)uVar2 & 0xffff;
    uVar9 = (int)param_1[9] - 1U &
            (uVar8 >> 4) +
            ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar9 << 0x13 | uVar9 & 0xffff);
    *(uint *)((longlong)puVar12 + 0x54) = uVar9;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(puVar12 + 10) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    FUN_14157c6b4(param_1);
  }
  lVar4 = *param_1 + (longlong)iVar14 * 0x58;
  plVar15 = (longlong *)(lVar4 + 8);
  FUN_140056680(&local_98,param_2);
  if (plVar15 == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar15 != 0) {
      FUN_1400020a8();
    }
    *plVar15 = local_98;
    local_98 = 0;
    *(undefined4 *)(lVar4 + 0x10) = (undefined4)uStack_90;
    *(undefined4 *)(lVar4 + 0x14) = uStack_90._4_4_;
  }
  *(undefined8 *)(lVar4 + 0x18) = local_a0;
  plVar15 = (longlong *)*param_3;
  plVar10 = *(longlong **)(lVar4 + 0x20);
  if (plVar10 != plVar15) {
    *(longlong **)(lVar4 + 0x20) = plVar15;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  *(int *)(lVar4 + 0x28) = (int)param_3[1];
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
  plVar10 = DAT_14c844840;
  plVar15 = *(longlong **)(lVar4 + 0x30);
  if (plVar15 != DAT_14c844840) {
    *(longlong **)(lVar4 + 0x30) = DAT_14c844840;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  *(undefined4 *)(lVar4 + 0x38) = DAT_14c844848;
  *(undefined1 *)(lVar4 + 0x40) = param_4;
  *(undefined4 *)(lVar4 + 0x44) = param_5;
  *(undefined1 *)(lVar4 + 0x48) = param_6;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157c6b4 FUN_14157c6b4 body=594 status=ok
// SIG undefined FUN_14157c6b4(void)

void FUN_14157c6b4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x58;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x54 + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x50 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_14157c8bd;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_14157c8bd:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157c908 FUN_14157c908 body=756 status=ok
// SIG undefined FUN_14157c908(void)

void FUN_14157c908(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
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
  plVar1 = local_60;
  iVar15 = (int)local_68;
  uVar10 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar5 = *param_1;
      FUN_140056680(&local_68,&DAT_14a819d6a);
      iVar3 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_78,local_68,iVar3);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar5 = (longlong)iVar7 * 0x58 + lVar5;
      iVar7 = *(int *)(lVar5 + 0x10);
      iVar3 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_78,*(undefined8 *)(lVar5 + 8),iVar3);
      uVar10 = uVar10 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar1[2];
      if ((longlong *)plVar1[2] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      iVar3 = (int)plVar1[3];
      lVar5 = (longlong)iVar15;
      uVar6 = *(uint *)((longlong)plVar8 + lVar5 * 4) & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar15) {
          iVar4 = iVar15;
        }
        if (iVar7 <= iVar15) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar5 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar5 == lVar9) goto LAB_14157caa2;
        }
        iVar15 = iVar15 + (int)lVar9 + 1;
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_14157caa2:
  plVar1 = param_1 + 0x43;
  FUN_14020fad6(plVar1,
                L"When the viewport view-mode is set to \'Nanite Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
               );
  iVar15 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar15 = 0;
  }
  FUN_1400020e8(plVar1,local_78,iVar15);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if ((int)param_1[0x44] == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  else {
    puVar14 = (undefined2 *)*plVar1;
  }
  local_88 = 1;
  puVar12 = &DAT_149dfb77a;
  (**(code **)(*DAT_14c8407a8 + 8))(DAT_14c8407a8,L"r.Nanite.Visualize",&DAT_149dfb77a,puVar14);
  plVar1 = param_1 + 0x45;
  FUN_14020fad6(plVar1,
                L"Specify the list of modes that can be used in the Nanite visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:\n"
               );
  iVar15 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar15 = 0;
  }
  FUN_1400020e8(plVar1,local_78,iVar15);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if ((int)param_1[0x46] != 0) {
    puVar12 = (undefined2 *)*plVar1;
  }
  local_88 = 0;
  (**(code **)(*DAT_14c8407a8 + 8))
            (DAT_14c8407a8,L"r.Nanite.VisualizeOverview",
             L"Triangles,Clusters,Instances,Primitives,,,,,,,,,Overdraw,ShadingBins,RasterBins,EvaluateWPO"
             ,puVar12);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157cbfe FUN_14157cbfe body=226 status=ok
// SIG undefined FUN_14157cbfe(void)

longlong * FUN_14157cbfe(longlong *param_1)

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
  pcVar13 = FUN_1462d4a20;
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



// FUNCTION 14157cce2 FUN_14157cce2 body=289 status=ok
// SIG undefined FUN_14157cce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157cce2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ecfd0) {
    FUN_144b3d300(&DAT_14c9ecfd0);
    if (DAT_14c9ecfd0 == -1) {
      FUN_14157ce04();
      FUN_145e85312();
      FUN_140db5666(&DAT_14c9ecf28,0,&DAT_14c9ecec0,L"FLumenFrontLayerTranslucencyClearGBufferPS",
                    L"/Engine/Private/Lumen/LumenTranslucencyVolumeLighting.usf",
                    L"LumenFrontLayerTranslucencyClearGBufferPS",3,1,FUN_1471dcaf6,FUN_1471dca96,
                    &LAB_1462d72a0,&LAB_1471dca92,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f03c8)
      ;
      _DAT_14c9ecf28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d0ca66);
      _Init_thread_footer(&DAT_14c9ecfd0);
    }
  }
  return &DAT_14c9ecf28;
}



// FUNCTION 14157ce04 FUN_14157ce04 body=258 status=ok
// SIG undefined FUN_14157ce04(void)

void FUN_14157ce04(void)

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
              0x110) < DAT_14c9f0448) {
    FUN_144b3d300(&DAT_14c9f0448);
    if (DAT_14c9f0448 == -1) {
      FUN_145e8545c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x4a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f03c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26253);
      _Init_thread_footer(&DAT_14c9f0448);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157cf08 FUN_14157cf08 body=289 status=ok
// SIG undefined FUN_14157cf08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157cf08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef9c0) {
    FUN_144b3d300(&DAT_14c9ef9c0);
    if (DAT_14c9ef9c0 == -1) {
      FUN_14157d02a();
      FUN_145e8565e();
      FUN_140db5666(&DAT_14c9ef918,0,&DAT_14c9ef8b0,L"FFilterProbeRadianceWithGatherCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",
                    L"FilterProbeRadianceWithGatherCS",5,1,FUN_1471dffec,FUN_1471dff8c,
                    &LAB_1462d739a,&LAB_1471dff88,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f12a8)
      ;
      _DAT_14c9ef918 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260fd);
      _Init_thread_footer(&DAT_14c9ef9c0);
    }
  }
  return &DAT_14c9ef918;
}



// FUNCTION 14157d02a FUN_14157d02a body=258 status=ok
// SIG undefined FUN_14157d02a(void)

void FUN_14157d02a(void)

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
              0x110) < DAT_14c9f1328) {
    FUN_144b3d300(&DAT_14c9f1328);
    if (DAT_14c9f1328 == -1) {
      FUN_145e857a8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x387;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f12a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263df);
      _Init_thread_footer(&DAT_14c9f1328);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157d12e FUN_14157d12e body=226 status=ok
// SIG undefined FUN_14157d12e(void)

longlong * FUN_14157d12e(longlong *param_1)

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
  pcVar13 = FUN_1462e10cc;
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



// FUNCTION 14157d212 FUN_14157d212 body=289 status=ok
// SIG undefined FUN_14157d212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157d212(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fcdb8) {
    FUN_144b3d300(&DAT_14c9fcdb8);
    if (DAT_14c9fcdb8 == -1) {
      FUN_14157d334();
      FUN_145e86916();
      FUN_140db5666(&DAT_14c9fcd10,0,&DAT_14c9fcca8,L"FScreenProbeAdaptivePlacementCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"ScreenProbeAdaptivePlacementCS",5,2,FUN_147208eca,FUN_147208e6a,&LAB_145843444
                    ,&LAB_147208e66,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff4c0);
      _DAT_14c9fcd10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd02);
      _Init_thread_footer(&DAT_14c9fcdb8);
    }
  }
  return &DAT_14c9fcd10;
}



// FUNCTION 14157d334 FUN_14157d334 body=258 status=ok
// SIG undefined FUN_14157d334(void)

void FUN_14157d334(void)

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
              0x110) < DAT_14c9ff540) {
    FUN_144b3d300(&DAT_14c9ff540);
    if (DAT_14c9ff540 == -1) {
      FUN_145e86a60(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0x288;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff4c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6a1);
      _Init_thread_footer(&DAT_14c9ff540);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157d438 FUN_14157d438 body=289 status=ok
// SIG undefined FUN_14157d438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157d438(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02e58) {
    FUN_144b3d300(&DAT_14ca02e58);
    if (DAT_14ca02e58 == -1) {
      FUN_14157d55a();
      FUN_145e871d2();
      FUN_140db5666(&DAT_14ca02db0,0,&DAT_14ca02d48,L"FMarkRadianceProbesUsedByTranslucencyVolumeCS"
                    ,L"/Engine/Private/Lumen/LumenTranslucencyVolumeLighting.usf",
                    L"MarkRadianceProbesUsedByTranslucencyVolumeCS",5,1,FUN_14722272c,FUN_1472226cc,
                    &LAB_1462e73fc,&LAB_1472226c8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca064d8)
      ;
      _DAT_14ca02db0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dbe7a8);
      _Init_thread_footer(&DAT_14ca02e58);
    }
  }
  return &DAT_14ca02db0;
}



// FUNCTION 14157d55a FUN_14157d55a body=258 status=ok
// SIG undefined FUN_14157d55a(void)

void FUN_14157d55a(void)

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
              0x110) < DAT_14ca06558) {
    FUN_144b3d300(&DAT_14ca06558);
    if (DAT_14ca06558 == -1) {
      FUN_145e8731c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x1a3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca064d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a2b);
      _Init_thread_footer(&DAT_14ca06558);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157d65e FUN_14157d65e body=226 status=ok
// SIG undefined FUN_14157d65e(void)

longlong * FUN_14157d65e(longlong *param_1)

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
  pcVar13 = FUN_1462eb7c4;
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



// FUNCTION 14157d742 FUN_14157d742 body=226 status=ok
// SIG undefined FUN_14157d742(void)

longlong * FUN_14157d742(longlong *param_1)

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
  pcVar13 = FUN_1462f016a;
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



// FUNCTION 14157d826 FUN_14157d826 body=289 status=ok
// SIG undefined FUN_14157d826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157d826(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45280) {
    FUN_144b3d300(&DAT_14ca45280);
    if (DAT_14ca45280 == -1) {
      FUN_14157d948();
      FUN_145e94766();
      FUN_140db5666(&DAT_14ca451d8,0,&DAT_14ca45170,L"FSceneCapturePS",
                    L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,0x10,FUN_1472d938a,
                    FUN_1472d932a,&LAB_1472d92d4,&LAB_1472d92d0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca46c08);
      _DAT_14ca451d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd1b05);
      _Init_thread_footer(&DAT_14ca45280);
    }
  }
  return &DAT_14ca451d8;
}



// FUNCTION 14157d948 FUN_14157d948 body=258 status=ok
// SIG undefined FUN_14157d948(void)

void FUN_14157d948(void)

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
              0x110) < DAT_14ca46c88) {
    FUN_144b3d300(&DAT_14ca46c88);
    if (DAT_14ca46c88 == -1) {
      FUN_145e948b0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x74;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46c08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fe8f2d);
      _Init_thread_footer(&DAT_14ca46c88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157da4c FUN_14157da4c body=289 status=ok
// SIG undefined FUN_14157da4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157da4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61448) {
    FUN_144b3d300(&DAT_14ca61448);
    if (DAT_14ca61448 == -1) {
      FUN_14157db6e();
      FUN_145e97632();
      FUN_140db5666(&DAT_14ca613a0,0,&DAT_14ca61338,L"FInjectAmbientCubemapPS",
                    L"/Engine/Private/TranslucentLightingShaders.usf",L"InjectAmbientCubemapMainPS",
                    3,1,FUN_147322ed4,FUN_147322e74,&LAB_147322e5c,&LAB_147322e58,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62c30);
      _DAT_14ca613a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ad2ae);
      _Init_thread_footer(&DAT_14ca61448);
    }
  }
  return &DAT_14ca613a0;
}



// FUNCTION 14157db6e FUN_14157db6e body=258 status=ok
// SIG undefined FUN_14157db6e(void)

void FUN_14157db6e(void)

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
              0x110) < DAT_14ca62cb0) {
    FUN_144b3d300(&DAT_14ca62cb0);
    if (DAT_14ca62cb0 == -1) {
      FUN_145e9777c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x3e6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62c30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bd5db);
      _Init_thread_footer(&DAT_14ca62cb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157dc72 FUN_14157dc72 body=226 status=ok
// SIG undefined FUN_14157dc72(void)

longlong * FUN_14157dc72(longlong *param_1)

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
  pcVar13 = FUN_146318b4e;
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



// FUNCTION 14157dd56 FUN_14157dd56 body=287 status=ok
// SIG undefined FUN_14157dd56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157dd56(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2f5b8) {
    FUN_144b3d300(&DAT_14cb2f5b8);
    if (DAT_14cb2f5b8 == -1) {
      uVar1 = FUN_14157de76();
      FUN_145e9bf4a();
      FUN_140db5666(&DAT_14cb2f510,0,&DAT_14cb2f4a8,L"FNiagaraRibbonCreateIndexBufferCS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonGenerateIndices.usf",
                    L"GenerateIndices",5,8,FUN_14804da02,FUN_14804d9a8,&LAB_1438fa1dc,&LAB_14804d9a4
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2f510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa1df);
      _Init_thread_footer(&DAT_14cb2f5b8);
    }
  }
  return &DAT_14cb2f510;
}



// FUNCTION 14157de76 FUN_14157de76 body=265 status=ok
// SIG undefined FUN_14157de76(void)

undefined * FUN_14157de76(void)

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
              0x110) < DAT_14cb33ef0) {
    FUN_144b3d300(&DAT_14cb33ef0);
    if (DAT_14cb33ef0 == -1) {
      FUN_14157df80(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraRibbonGenerateIndices";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x104;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33e70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb778);
      _Init_thread_footer(&DAT_14cb33ef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33e70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157df80 FUN_14157df80 body=226 status=ok
// SIG undefined FUN_14157df80(void)

longlong * FUN_14157df80(longlong *param_1)

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
  pcVar13 = FUN_146462234;
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



// FUNCTION 14157e064 FUN_14157e064 body=226 status=ok
// SIG undefined FUN_14157e064(void)

longlong * FUN_14157e064(longlong *param_1)

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
  pcVar13 = FUN_14667d1c6;
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



// FUNCTION 14157e148 FUN_14157e148 body=226 status=ok
// SIG undefined FUN_14157e148(void)

longlong * FUN_14157e148(longlong *param_1)

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
  pcVar13 = FUN_14667da58;
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



// FUNCTION 14157e22c FUN_14157e22c body=1596 status=ok
// SIG undefined FUN_14157e22c(void)

void FUN_14157e22c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b8d8810;
  param_1[0x72] = &PTR_FUN_14b8d9090;
  param_1[0x87] = &PTR_FUN_14b8d90f0;
  param_1[0x88] = &PTR_FUN_14b8d9160;
  param_1[0x89] = &PTR_FUN_14b8d91d0;
  param_1[0x8a] = &PTR_FUN_14b8d9200;
  param_1[0x8b] = &PTR_FUN_14b8d9230;
  param_1[0x8c] = &PTR_FUN_14b8d9260;
  param_1[0x93] = &PTR_FUN_14b8d9310;
  param_1[0x94] = &PTR_FUN_14b8d9340;
  param_1[0x95] = &PTR_FUN_14b8d9400;
  param_1[0x96] = &PTR_FUN_14b8d9420;
  param_1[0x97] = &PTR_FUN_14b8d9460;
  param_1[0x98] = &PTR_FUN_14b8d9480;
  param_1[0x99] = &PTR_FUN_14b8d94a0;
  param_1[0x9a] = &PTR_FUN_14b8d94c0;
  param_1[0x9b] = &PTR_FUN_14b8d94e0;
  param_1[0x9c] = &PTR_FUN_14b8d9530;
  param_1[0x9d] = &PTR_FUN_14b8d9550;
  param_1[0x9e] = &PTR_FUN_14b8d95c0;
  param_1[0x9f] = &PTR_FUN_14b8d9600;
  param_1[0xa0] = &PTR_FUN_14b8d9650;
  param_1[0xa1] = &PTR_FUN_14b8d96a0;
  param_1[0xa2] = &PTR_FUN_14b8d96c0;
  param_1[0xa3] = &PTR_FUN_14b8d97a0;
  param_1[0xa4] = &PTR_FUN_14b8d9830;
  param_1[0xa5] = &PTR_FUN_14b8d98a0;
  param_1[0xa6] = &PTR_FUN_14b8d98e0;
  plVar3 = (longlong *)param_1[0x4c0];
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
  *(undefined4 *)(param_1 + 0x4be) = 0;
  if (param_1[0x4bd] != 0) {
    FUN_1400020a8();
  }
  FUN_140eb3794(param_1 + 0x4b5);
  FUN_144760e21(param_1[0x4b1],*(undefined4 *)(param_1 + 0x4b2));
  if (param_1[0x4b1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4ae],*(undefined4 *)(param_1 + 0x4af));
  if (param_1[0x4ae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x496] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7b284(param_1 + 0x454);
  FUN_14063adfa(param_1 + 0x43a);
  FUN_14136963c(param_1 + 0x401);
  FUN_1409deebc(param_1[0x3ff],*(undefined4 *)(param_1 + 0x400));
  if (param_1[0x3ff] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x3dd);
  FUN_144760e21(param_1[0x3da],*(undefined4 *)(param_1 + 0x3db));
  if (param_1[0x3da] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3d7],*(undefined4 *)(param_1 + 0x3d8));
  if (param_1[0x3d7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3d4],*(undefined4 *)(param_1 + 0x3d5));
  if (param_1[0x3d4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3ce] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3cc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3ca] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3c9];
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
  plVar3 = (longlong *)param_1[0x3c7];
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
  FUN_14063ab46(param_1 + 0x3a8);
  FUN_1406398aa(param_1 + 0x3a4,1);
  param_1[0x39e] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x1cf9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0x39e);
    *(undefined1 *)((longlong)param_1 + 0x1cf9) = 0;
  }
  FUN_14079057a(param_1 + 0x386);
  if (*(char *)(param_1 + 0x385) == '\x01') {
    *(undefined1 *)(param_1 + 0x385) = 0;
  }
  if (param_1[0x37d] != 0) {
    FUN_1400020a8();
  }
  FUN_148c9af5c(param_1 + 0x36c);
  FUN_148c9af5c(param_1 + 0x35c);
  *(undefined4 *)(param_1 + 0x357) = 0;
  if (param_1[0x356] != 0) {
    FUN_1400020a8();
  }
  FUN_145967d36(param_1 + 0x34e);
  *(undefined4 *)(param_1 + 0x34d) = 0;
  if (param_1[0x34c] != 0) {
    FUN_1400020a8();
  }
  FUN_145967d36(param_1 + 0x344);
  param_1[0x2fc] = &PTR_FUN_14b8d99e0;
  if (param_1[0x304] != 0) {
    FUN_140872868(param_1 + 0x2fc);
  }
  FUN_1403d7c6c(param_1 + 0x2fc);
  FUN_1403d7d90(param_1 + 0x2bf);
  if (param_1[0x2b9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2b8];
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
  FUN_140da32e9(param_1[0x2b2],*(undefined4 *)(param_1 + 0x2b3));
  if (param_1[0x2b2] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2af],*(undefined4 *)(param_1 + 0x2b0));
  if (param_1[0x2af] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2a3],*(undefined4 *)(param_1 + 0x2a4));
  if (param_1[0x2a3] != 0) {
    FUN_1400020a8();
  }
  FUN_1406399d0(param_1 + 0x284);
  FUN_140d97df4(param_1 + 0x1b9);
  FUN_14063ace6(param_1 + 0x19f);
  FUN_140cbb40e(param_1 + 0x17a);
  FUN_140cbb262(param_1 + 0x104);
  FUN_14063a842(param_1 + 0xcb);
  FUN_1403d7bbc(param_1 + 0xbb);
  FUN_1403d7b38(param_1 + 0xad);
  plVar3 = (longlong *)param_1[0xab];
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
  FUN_14063a6a6(param_1 + 0x8c);
  FUN_140cbb210(param_1);
  return;
}



// FUNCTION 14157e868 FUN_14157e868 body=289 status=ok
// SIG undefined FUN_14157e868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157e868(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f43f8) {
    FUN_144b3d300(&DAT_14c9f43f8);
    if (DAT_14c9f43f8 == -1) {
      FUN_14157e98a();
      FUN_145ea0184();
      FUN_140db5666(&DAT_14c9f4350,0,&DAT_14c9f42e8,L"FLumenReflectionDenoiserClearCS",
                    L"/Engine/Private/Lumen/LumenReflectionDenoiserClear.usf",
                    L"LumenReflectionDenoiserClearCS",5,1,FUN_1471ef848,FUN_1471ef7e8,&LAB_1462db4c8
                    ,&LAB_1471ef7e4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6c78);
      _DAT_14c9f4350 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d404c2);
      _Init_thread_footer(&DAT_14c9f43f8);
    }
  }
  return &DAT_14c9f4350;
}



// FUNCTION 14157e98a FUN_14157e98a body=258 status=ok
// SIG undefined FUN_14157e98a(void)

void FUN_14157e98a(void)

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
              0x110) < DAT_14c9f6cf8) {
    FUN_144b3d300(&DAT_14c9f6cf8);
    if (DAT_14c9f6cf8 == -1) {
      FUN_145ea02ce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x36a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6c78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595b5);
      _Init_thread_footer(&DAT_14c9f6cf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157ea8e FUN_14157ea8e body=289 status=ok
// SIG undefined FUN_14157ea8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157ea8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f4fc0) {
    FUN_144b3d300(&DAT_14c9f4fc0);
    if (DAT_14c9f4fc0 == -1) {
      FUN_14157ebb0();
      FUN_145ea04d2();
      FUN_140db5666(&DAT_14c9f4f18,0,&DAT_14c9f4eb0,L"FReflectionTraceVoxelsCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",L"ReflectionTraceVoxelsCS",5
                    ,0x80,FUN_1471eff2e,FUN_1471efece,&LAB_1417691ba,&LAB_140fe3642,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f71c8);
      _DAT_14c9f4f18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a457);
      _Init_thread_footer(&DAT_14c9f4fc0);
    }
  }
  return &DAT_14c9f4f18;
}



// FUNCTION 14157ebb0 FUN_14157ebb0 body=258 status=ok
// SIG undefined FUN_14157ebb0(void)

void FUN_14157ebb0(void)

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
              0x110) < DAT_14c9f7248) {
    FUN_144b3d300(&DAT_14c9f7248);
    if (DAT_14c9f7248 == -1) {
      FUN_145ea061c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x510;
      local_58 = 0x20a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f71c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59645);
      _Init_thread_footer(&DAT_14c9f7248);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157ecb4 FUN_14157ecb4 body=289 status=ok
// SIG undefined FUN_14157ecb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157ecb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5dc28) {
    FUN_144b3d300(&DAT_14ca5dc28);
    if (DAT_14ca5dc28 == -1) {
      FUN_14157edd6();
      FUN_145ea2e3e();
      FUN_140db5666(&DAT_14ca5db80,0,&DAT_14ca5db18,L"FStochasticLightingStoreSceneHistoryCS",
                    L"/Engine/Private/StochasticLighting/StochasticLightingDenoising.usf",
                    L"StoreSceneHistoryCS",5,2,FUN_1473171de,FUN_14731717e,FUN_14630a71c,
                    &LAB_14731717a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5f270);
      _DAT_14ca5db80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430992e6);
      _Init_thread_footer(&DAT_14ca5dc28);
    }
  }
  return &DAT_14ca5db80;
}



// FUNCTION 14157edd6 FUN_14157edd6 body=258 status=ok
// SIG undefined FUN_14157edd6(void)

void FUN_14157edd6(void)

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
              0x110) < DAT_14ca5f2f0) {
    FUN_144b3d300(&DAT_14ca5f2f0);
    if (DAT_14ca5f2f0 == -1) {
      FUN_145ea2f88(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f270,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e887);
      _Init_thread_footer(&DAT_14ca5f2f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157eeda FUN_14157eeda body=289 status=ok
// SIG undefined FUN_14157eeda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157eeda(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca66820) {
    FUN_144b3d300(&DAT_14ca66820);
    if (DAT_14ca66820 == -1) {
      FUN_14157effc();
      FUN_145ea318c();
      FUN_140db5666(&DAT_14ca66778,0,&DAT_14ca66710,L"FVirtualSmBuildHZBPerPageCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"BuildHZBPerPageCS",5,1,FUN_14732cc44,FUN_14732cbe4,&LAB_14732cbac,
                    &LAB_14732cba8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca685b8);
      _DAT_14ca66778 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430e1788);
      _Init_thread_footer(&DAT_14ca66820);
    }
  }
  return &DAT_14ca66778;
}



// FUNCTION 14157effc FUN_14157effc body=258 status=ok
// SIG undefined FUN_14157effc(void)

void FUN_14157effc(void)

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
              0x110) < DAT_14ca68638) {
    FUN_144b3d300(&DAT_14ca68638);
    if (DAT_14ca68638 == -1) {
      FUN_145ea32d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xe98;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca685b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6bef);
      _Init_thread_footer(&DAT_14ca68638);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157f100 FUN_14157f100 body=275 status=ok
// SIG undefined FUN_14157f100(void)

void FUN_14157f100(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar2 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar4 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_14157f151;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_14157f151:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == param_1[1]) goto LAB_14157f1a4;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_14157f1a4:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + 4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar4 + 8 + lVar6 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14157f214 FUN_14157f214 body=289 status=ok
// SIG undefined FUN_14157f214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157f214(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f47a8) {
    FUN_144b3d300(&DAT_14c9f47a8);
    if (DAT_14c9f47a8 == -1) {
      FUN_14157f336();
      FUN_145ea5a50();
      FUN_140db5666(&DAT_14c9f4700,0,&DAT_14c9f4698,L"FReflectionClearTracesCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",L"ReflectionClearTracesCS",5
                    ,2,FUN_1471ef9d0,FUN_1471ef970,&LAB_1462db4d2,&LAB_1471ef96c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f6d88);
      _DAT_14c9f4700 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a3fb);
      _Init_thread_footer(&DAT_14c9f47a8);
    }
  }
  return &DAT_14c9f4700;
}



// FUNCTION 14157f336 FUN_14157f336 body=258 status=ok
// SIG undefined FUN_14157f336(void)

void FUN_14157f336(void)

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
              0x110) < DAT_14c9f6e08) {
    FUN_144b3d300(&DAT_14c9f6e08);
    if (DAT_14c9f6e08 == -1) {
      FUN_145ea5b9a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0xd0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6d88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595cd);
      _Init_thread_footer(&DAT_14c9f6e08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157f43a FUN_14157f43a body=289 status=ok
// SIG undefined FUN_14157f43a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157f43a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01858) {
    FUN_144b3d300(&DAT_14ca01858);
    if (DAT_14ca01858 == -1) {
      FUN_14157f55c();
      FUN_145ea5da0();
      FUN_140db5666(&DAT_14ca017b0,0,&DAT_14ca01748,L"FScreenProbeTraceMeshSDFsCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeTracing.usf",
                    L"ScreenProbeTraceMeshSDFsCS",5,0xc0,FUN_14722120e,FUN_1472211ae,&LAB_14176de68,
                    FUN_142db0904,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca05df0);
      _DAT_14ca017b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db09e4);
      _Init_thread_footer(&DAT_14ca01858);
    }
  }
  return &DAT_14ca017b0;
}



// FUNCTION 14157f55c FUN_14157f55c body=258 status=ok
// SIG undefined FUN_14157f55c(void)

void FUN_14157f55c(void)

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
              0x110) < DAT_14ca05e70) {
    FUN_144b3d300(&DAT_14ca05e70);
    if (DAT_14ca05e70 == -1) {
      FUN_145ea5eea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x450;
      local_58 = 0x162;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05df0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd303d);
      _Init_thread_footer(&DAT_14ca05e70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157f660 FUN_14157f660 body=289 status=ok
// SIG undefined FUN_14157f660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157f660(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5cf50) {
    FUN_144b3d300(&DAT_14ca5cf50);
    if (DAT_14ca5cf50 == -1) {
      FUN_14157f782();
      FUN_145ea714c();
      FUN_140db5666(&DAT_14ca5cea8,0,&DAT_14ca5ce40,L"FRenderTransmittanceLutCS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderTransmittanceLutCS",5,1,
                    FUN_147315d2e,FUN_147315cce,&LAB_147315cca,&LAB_147315cc6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5ed20);
      _DAT_14ca5cea8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430914c9);
      _Init_thread_footer(&DAT_14ca5cf50);
    }
  }
  return &DAT_14ca5cea8;
}



// FUNCTION 14157f782 FUN_14157f782 body=258 status=ok
// SIG undefined FUN_14157f782(void)

void FUN_14157f782(void)

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
              0x110) < DAT_14ca5eda0) {
    FUN_144b3d300(&DAT_14ca5eda0);
    if (DAT_14ca5eda0 == -1) {
      FUN_145ea7296(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x31d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5ed20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e80f);
      _Init_thread_footer(&DAT_14ca5eda0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157f886 FUN_14157f886 body=289 status=ok
// SIG undefined FUN_14157f886(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157f886(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65588) {
    FUN_144b3d300(&DAT_14ca65588);
    if (DAT_14ca65588 == -1) {
      FUN_14157f9a8();
      FUN_145ea749c();
      FUN_140db5666(&DAT_14ca654e0,0,&DAT_14ca65478,L"FPropagateMappedMipsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPageManagement.usf",
                    L"PropagateMappedMips",5,1,FUN_14732ba5c,FUN_14732b9fc,&LAB_14732b9c4,
                    &LAB_14732b9c0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67c28);
      _DAT_14ca654e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce91c);
      _Init_thread_footer(&DAT_14ca65588);
    }
  }
  return &DAT_14ca654e0;
}



// FUNCTION 14157f9a8 FUN_14157f9a8 body=258 status=ok
// SIG undefined FUN_14157f9a8(void)

void FUN_14157f9a8(void)

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
              0x110) < DAT_14ca67ca8) {
    FUN_144b3d300(&DAT_14ca67ca8);
    if (DAT_14ca67ca8 == -1) {
      FUN_145ea75e6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x511;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67c28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54b7);
      _Init_thread_footer(&DAT_14ca67ca8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157faac FUN_14157faac body=96 status=ok
// SIG undefined FUN_14157faac(void)

undefined * FUN_14157faac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c27a8) {
    FUN_144b3d300(&DAT_14c8c27a8);
    if (DAT_14c8c27a8 == -1) {
      FUN_145ea7e27(&DAT_14c8c2720);
      _Init_thread_footer(&DAT_14c8c27a8);
    }
  }
  return &DAT_14c8c2720;
}



// FUNCTION 14157fb0c FUN_14157fb0c body=164 status=ok
// SIG undefined FUN_14157fb0c(void)

void FUN_14157fb0c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Coordinates";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Coordinates";
  local_38 = 0xb;
  FUN_140208c1e(&DAT_14caeaea0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157fbb2 FUN_14157fbb2 body=164 status=ok
// SIG undefined FUN_14157fbb2(void)

void FUN_14157fbb2(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"VectorOps";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"VectorOps";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeb438,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157fc58 FUN_14157fc58 body=147 status=ok
// SIG undefined FUN_14157fc58(void)

undefined8 * FUN_14157fc58(undefined8 *param_1)

{
  FUN_140b1ac70();
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb1c) = 0;
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x166) = 0;
  *param_1 = &PTR_FUN_14b0e7580;
  param_1[0x168] = 0;
  *(undefined1 *)(param_1 + 0x176) = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  return param_1;
}



// FUNCTION 14157fcec FUN_14157fcec body=242 status=ok
// SIG undefined FUN_14157fcec(void)

void FUN_14157fcec(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x60) == lVar1) goto LAB_14157fd9c;
        iVar5 = *(int *)((longlong)iVar5 * 0x60 + *param_1 + 0x50);
      } while (iVar5 != -1);
    }
  }
  local_30 = param_2;
  local_28 = param_3;
  FUN_1461705ea(param_1,local_1c);
LAB_14157fd9c:
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14157fdf0 FUN_14157fdf0 body=289 status=ok
// SIG undefined FUN_14157fdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14157fdf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c66f0) {
    FUN_144b3d300(&DAT_14c9c66f0);
    if (DAT_14c9c66f0 == -1) {
      FUN_14157ff12();
      FUN_145eaa94c();
      FUN_140db5666(&DAT_14c9c6648,0,&DAT_14c9c65e0,L"FComputeCulledTilesStartOffsetCS",
                    L"/Engine/Private/DistanceFieldObjectCulling.usf",
                    L"ComputeCulledTilesStartOffsetCS",5,1,FUN_14714efac,FUN_14714ef4c,
                    &LAB_1462bdc68,&LAB_14714ef48,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8630)
      ;
      _DAT_14c9c6648 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd631d);
      _Init_thread_footer(&DAT_14c9c66f0);
    }
  }
  return &DAT_14c9c6648;
}



// FUNCTION 14157ff12 FUN_14157ff12 body=258 status=ok
// SIG undefined FUN_14157ff12(void)

void FUN_14157ff12(void)

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
              0x110) < DAT_14c9c86b0) {
    FUN_144b3d300(&DAT_14c9c86b0);
    if (DAT_14c9c86b0 == -1) {
      FUN_145eaaa96(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0xe0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8630,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76be);
      _Init_thread_footer(&DAT_14c9c86b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141580016 FUN_141580016 body=289 status=ok
// SIG undefined FUN_141580016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141580016(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01980) {
    FUN_144b3d300(&DAT_14ca01980);
    if (DAT_14ca01980 == -1) {
      FUN_141580138();
      FUN_145eacd62();
      FUN_140db5666(&DAT_14ca018d8,0,&DAT_14ca01870,L"FScreenProbeTraceVoxelsCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeTracing.usf",L"ScreenProbeTraceVoxelsCS"
                    ,5,0x80,FUN_1472212d0,FUN_147221270,FUN_14176def0,FUN_142db09f0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca05e78);
      _DAT_14ca018d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db0a88);
      _Init_thread_footer(&DAT_14ca01980);
    }
  }
  return &DAT_14ca018d8;
}



// FUNCTION 141580138 FUN_141580138 body=258 status=ok
// SIG undefined FUN_141580138(void)

void FUN_141580138(void)

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
              0x110) < DAT_14ca05ef8) {
    FUN_144b3d300(&DAT_14ca05ef8);
    if (DAT_14ca05ef8 == -1) {
      FUN_145eaceac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x450;
      local_58 = 0x1b3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05e78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3049);
      _Init_thread_footer(&DAT_14ca05ef8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158023c FUN_14158023c body=226 status=ok
// SIG undefined FUN_14158023c(void)

longlong * FUN_14158023c(longlong *param_1)

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
  pcVar13 = FUN_14630a20e;
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



// FUNCTION 141580320 FUN_141580320 body=161 status=ok
// SIG undefined FUN_141580320(void)

int FUN_141580320(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  iVar4 = 0;
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    iVar4 = 0;
    if ((*(byte *)(lVar2 + 0x152) & 0xfe) != 4) {
      if ((((*(int *)((longlong)param_1 + 0x374) == 0) ||
           (uVar1 = *(uint *)(param_1 + 0x6e), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
         (((plVar3 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar3 == (longlong *)0x0 || ((int)plVar3[2] != *(int *)((longlong)param_1 + 0x374))) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) {
        iVar4 = -(param_2 & 0xff);
      }
      else {
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar2 = *plVar3;
        }
        else {
          lVar2 = 0;
        }
        iVar4 = *(int *)(lVar2 + 0xe0);
      }
    }
  }
  return iVar4;
}



// FUNCTION 1415803c2 FUN_1415803c2 body=226 status=ok
// SIG undefined FUN_1415803c2(void)

longlong * FUN_1415803c2(longlong *param_1)

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
  pcVar13 = FUN_1462cb8d8;
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



// FUNCTION 1415804a6 FUN_1415804a6 body=289 status=ok
// SIG undefined FUN_1415804a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415804a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f3170) {
    FUN_144b3d300(&DAT_14c9f3170);
    if (DAT_14c9f3170 == -1) {
      FUN_1415805c8();
      FUN_145eb5fda();
      FUN_140db5666(&DAT_14c9f30c8,0,&DAT_14c9f3060,L"FLumenRadiosityConvertToSH",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosity.usf",
                    L"LumenRadiosityConvertToSH",5,1,FUN_1471ed73e,FUN_1471ed6de,&LAB_1462db416,
                    &LAB_1471ed6da,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6370);
      _DAT_14c9f30c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d36371);
      _Init_thread_footer(&DAT_14c9f3170);
    }
  }
  return &DAT_14c9f30c8;
}



// FUNCTION 1415805c8 FUN_1415805c8 body=258 status=ok
// SIG undefined FUN_1415805c8(void)

void FUN_1415805c8(void)

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
              0x110) < DAT_14c9f63f0) {
    FUN_144b3d300(&DAT_14c9f63f0);
    if (DAT_14c9f63f0 == -1) {
      FUN_145eb6124(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x1f9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6370,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58121);
      _Init_thread_footer(&DAT_14c9f63f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415806cc FUN_1415806cc body=523 status=ok
// SIG undefined FUN_1415806cc(void)

void FUN_1415806cc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x178) != '\x03') {
    return;
  }
  iVar1 = *(int *)(param_1 + 1);
  lVar14 = (longlong)iVar1;
  if (lVar14 == 0) {
    return;
  }
  puVar3 = (uint *)*param_1;
  iVar15 = 0;
  if (puVar3[1] != 0) {
    uVar2 = *puVar3;
    lVar12 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141580763;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((*(uint *)(plVar5 + 2) == puVar3[1] && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      lVar12 = *plVar5;
      goto LAB_141580763;
    }
  }
  lVar12 = 0;
LAB_141580763:
  iVar6 = 0;
  bVar4 = lVar12 == param_2;
  do {
    lVar12 = (longlong)iVar6;
    iVar10 = iVar6 + 1;
    if (iVar6 + 1 < iVar1) {
      iVar10 = iVar1;
    }
    puVar11 = puVar3 + lVar12 * 0x1e + 0x1f;
    iVar7 = iVar6;
    lVar13 = lVar12;
    do {
      lVar13 = lVar13 + 1;
      iVar8 = iVar10;
      if (lVar14 <= lVar13) break;
      if ((*puVar11 == 0) || (uVar2 = puVar11[-1], (int)uVar2 < 0)) {
LAB_141580826:
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar5 == (longlong *)0x0) || (*(uint *)(plVar5 + 2) != *puVar11)) ||
             ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_141580826;
          lVar9 = *plVar5;
        }
      }
      iVar7 = iVar7 + 1;
      puVar11 = puVar11 + 0x1e;
      iVar8 = iVar7;
    } while (bVar4 == (lVar9 == param_2));
    iVar10 = iVar8 - iVar6;
    if (bVar4 == false) {
      if (iVar15 != iVar6) {
        memmove(puVar3 + (longlong)iVar15 * 0x1e,puVar3 + lVar12 * 0x1e,(longlong)iVar10 * 0x78);
      }
      iVar15 = iVar15 + iVar10;
    }
    else {
      FUN_1457e62fb(puVar3 + lVar12 * 0x1e,iVar10);
    }
    iVar6 = iVar8;
    bVar4 = (bool)(bVar4 ^ 1);
    if (lVar14 <= lVar13) {
      *(int *)(param_1 + 1) = iVar15;
      if (iVar1 <= iVar15) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 0;
      FUN_148835588(&DAT_14cb7bd50,param_2);
      return;
    }
  } while( true );
}



// FUNCTION 1415808d8 FUN_1415808d8 body=69 status=ok
// SIG undefined FUN_1415808d8(void)

void FUN_1415808d8(longlong *param_1)

{
  if ((char)param_1[0x2d] == '\0') {
    return;
  }
  if ((char)param_1[0x30] == '\x01') {
    FUN_145d299fe(param_1 + 0x30);
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  FUN_145abd7ea(param_1);
  return;
}



// FUNCTION 14158091e FUN_14158091e body=434 status=ok
// SIG undefined FUN_14158091e(void)

undefined * FUN_14158091e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca0f8) {
    FUN_144b3d300(&DAT_14c9ca0f8);
    if (DAT_14c9ca0f8 == -1) {
      FUN_145ebc150(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"DistortionPass";
      local_78 = L"FDistortionPassUniformParameters";
      local_38 = 0;
      local_50 = 0x2c0;
      local_58 = 0x4b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ca078,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bf7d72);
      _Init_thread_footer(&DAT_14c9ca0f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ca078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141580ad2 FUN_141580ad2 body=444 status=ok
// SIG undefined FUN_141580ad2(void)

/* WARNING: Removing unreachable block (ram,0x000141580bc0) */

void FUN_141580ad2(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar7 = *param_2;
    lVar6 = (longlong)(int)param_2[1] << 7;
    do {
      FUN_144529d80(*param_1,lVar7 + 0x40);
      cVar3 = FUN_14945fc10(lVar7 + 8);
      if ((cVar3 == '\0') || (lVar4 = FUN_149466e92(lVar7 + 8), *(longlong *)(lVar4 + 0x18) == 0)) {
        plVar2 = (longlong *)param_1[1];
        FUN_1400021e4(lVar7,&local_68);
        puVar5 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar5 = local_68;
        }
        FUN_140002266(&local_58,L"// Error: Binding \"%s\" is not supported",puVar5);
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(plVar2,iVar1);
        }
        lVar4 = *plVar2;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar4 + lVar8) = 0;
        *(undefined8 *)(lVar4 + lVar8) = local_58;
        *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0xc + lVar8) = local_50._4_4_;
        puVar5 = local_68;
      }
      else {
        plVar2 = (longlong *)param_1[1];
        FUN_14949b9ee(&local_58,lVar7,1);
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(plVar2,iVar1);
        }
        lVar4 = *plVar2;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar4 + lVar8) = 0;
        *(undefined8 *)(lVar4 + lVar8) = local_58;
        *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0xc + lVar8) = local_50._4_4_;
        puVar5 = (undefined2 *)0x0;
      }
      local_50 = 0;
      local_58 = 0;
      if (puVar5 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x80;
      lVar6 = lVar6 + -0x80;
    } while (lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141580c90 FUN_141580c90 body=1061 status=ok
// SIG undefined FUN_141580c90(void)

void FUN_141580c90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined1 auStack_138 [44];
  uint local_10c;
  uint local_108;
  uint local_104;
  longlong local_100;
  longlong local_f8;
  int local_ec;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar15 = (int)param_1[1];
  uVar22 = (ulonglong)iVar15;
  if (0 < (longlong)uVar22) {
    local_100 = *param_1;
    uVar21 = 0;
    do {
      if ((uVar21 | 1) < uVar22) {
        lVar24 = (uVar21 | 1) * 0x80;
        uVar9 = *(uint *)(local_100 + 0x48 + uVar21 * 0x80);
        uVar6 = *(uint *)(local_100 + 0x48 + lVar24);
        if ((int)uVar6 < (int)uVar9) {
          uVar9 = uVar6;
        }
        if (0 < (int)uVar9) {
          puVar26 = (undefined8 *)(uVar21 * 0x80 + local_100);
          puVar25 = (undefined8 *)(lVar24 + local_100);
          uVar19 = 0;
          do {
            uVar3 = *(ulonglong *)(puVar26[8] + uVar19 * 8);
            uVar4 = *(ulonglong *)(puVar25[8] + uVar19 * 8);
            if (uVar4 != uVar3) {
              if ((int)uVar4 == (int)uVar3) {
                iVar20 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
              }
              else {
                iVar20 = FUN_14002c2bd(uVar4 & 0xffffffff);
              }
              if (iVar20 < 0) {
                puVar13 = puVar26;
                puVar16 = local_c8;
                for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *puVar16 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar16 = puVar16 + 1;
                }
                puVar13 = puVar25;
                for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *puVar26 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar26 = puVar26 + 1;
                }
                puVar26 = local_c8;
                for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *puVar25 = *puVar26;
                  puVar26 = puVar26 + 1;
                  puVar25 = puVar25 + 1;
                }
              }
              break;
            }
            uVar19 = uVar19 + 1;
          } while (uVar9 != uVar19);
        }
      }
      uVar21 = uVar21 + 2;
    } while ((int)uVar21 < iVar15);
    if (2 < iVar15) {
      uVar21 = 2;
      local_d8 = uVar22;
      do {
        local_10c = (int)uVar21 * 2;
        local_d0 = (longlong)(int)local_10c;
        lVar24 = 0;
        local_e8 = uVar21;
        do {
          local_108 = (int)local_d8 - (int)lVar24;
          if ((int)local_10c <= (int)local_108) {
            local_108 = local_10c;
          }
          local_e0 = lVar24;
          if ((int)local_e8 < (int)local_108 && 0 < (int)local_e8) {
            local_f8 = lVar24 * 0x80 + local_100;
            iVar15 = 0;
            uVar22 = local_e8 & 0xffffffff;
            do {
              local_104 = (uint)uVar22;
              lVar24 = (longlong)(int)local_104 * 0x80 + local_f8;
              iVar20 = 0;
              if (local_104 - iVar15 != 0 && iVar15 <= (int)local_104) {
                lVar23 = (longlong)iVar15 * 0x80 + local_f8;
                uVar9 = local_104 - iVar15;
                do {
                  iVar12 = (uVar9 >> 1) + iVar20;
                  lVar10 = (longlong)iVar12 * 0x80;
                  uVar6 = *(uint *)(lVar23 + 0x48 + lVar10);
                  uVar7 = *(uint *)(lVar24 + 0x48);
                  plVar8 = (longlong *)(ulonglong)uVar7;
                  if ((int)uVar7 < (int)uVar6) {
                    uVar6 = uVar7;
                  }
                  if ((int)uVar6 < 1) {
LAB_141580e92:
                    bVar27 = false;
                  }
                  else {
                    plVar8 = *(longlong **)(lVar24 + 0x40);
                    plVar5 = *(longlong **)(lVar10 + lVar23 + 0x40);
                    lVar10 = *plVar5;
                    lVar11 = *plVar8;
                    if (lVar11 == lVar10) {
                      uVar22 = 0;
                      do {
                        if ((ulonglong)uVar6 - 1 == uVar22) goto LAB_141580e92;
                        lVar10 = plVar5[uVar22 + 1];
                        lVar11 = plVar8[uVar22 + 1];
                        uVar22 = uVar22 + 1;
                      } while (lVar11 == lVar10);
                      bVar27 = uVar22 < uVar6;
                    }
                    else {
                      bVar27 = true;
                      uVar22 = 0;
                    }
                    if ((int)lVar11 == (int)lVar10) {
                      uVar6 = *(int *)((longlong)plVar8 + uVar22 * 8 + 4) -
                              *(int *)((longlong)plVar5 + uVar22 * 8 + 4);
                    }
                    else {
                      uVar6 = FUN_14002c2bd();
                    }
                    plVar8 = (longlong *)(ulonglong)(uVar6 >> 0x1f);
                  }
                  iVar12 = iVar12 + (uVar9 & 1);
                  if (((ulonglong)plVar8 & 1) == 0) {
                    iVar20 = iVar12;
                  }
                  if (!bVar27) {
                    iVar20 = iVar12;
                  }
                  bVar27 = 1 < uVar9;
                  uVar9 = uVar9 >> 1;
                } while (bVar27);
              }
              iVar20 = iVar20 + iVar15;
              uVar22 = (ulonglong)local_104;
              if (local_104 - iVar20 == 0 || (int)local_104 < iVar20) break;
              if (local_108 - local_104 == 0 || (int)local_108 < (int)local_104) {
                iVar15 = 0;
              }
              else {
                puVar25 = (undefined8 *)((longlong)iVar20 * 0x80 + local_f8);
                iVar15 = 0;
                uVar9 = local_108 - local_104;
                local_ec = local_104 - iVar20;
                do {
                  uVar6 = iVar15 + (uVar9 >> 1);
                  plVar8 = (longlong *)((ulonglong)uVar6 * 0x80);
                  uVar7 = *(uint *)(lVar24 + 0x48 + (longlong)plVar8);
                  uVar18 = *(uint *)(puVar25 + 9);
                  if ((int)uVar7 < (int)*(uint *)(puVar25 + 9)) {
                    uVar18 = uVar7;
                  }
                  if ((int)uVar18 < 1) {
LAB_141580f6e:
                    bVar27 = false;
                  }
                  else {
                    plVar8 = *(longlong **)((longlong)plVar8 + lVar24 + 0x40);
                    plVar5 = (longlong *)puVar25[8];
                    lVar23 = *plVar5;
                    lVar10 = *plVar8;
                    if (lVar10 == lVar23) {
                      uVar22 = 0;
                      do {
                        if ((ulonglong)uVar18 - 1 == uVar22) goto LAB_141580f6e;
                        lVar23 = plVar5[uVar22 + 1];
                        lVar10 = plVar8[uVar22 + 1];
                        uVar22 = uVar22 + 1;
                      } while (lVar10 == lVar23);
                      bVar27 = uVar22 < uVar18;
                    }
                    else {
                      bVar27 = true;
                      uVar22 = 0;
                    }
                    if ((int)lVar10 == (int)lVar23) {
                      uVar7 = *(int *)((longlong)plVar8 + uVar22 * 8 + 4) -
                              *(int *)((longlong)plVar5 + uVar22 * 8 + 4);
                    }
                    else {
                      uVar7 = FUN_14002c2bd();
                    }
                    plVar8 = (longlong *)(ulonglong)(uVar7 >> 0x1f);
                  }
                  iVar12 = uVar6 + (uVar9 & 1);
                  if (((ulonglong)plVar8 & 1) == 0) {
                    iVar12 = iVar15;
                  }
                  if (!bVar27) {
                    iVar12 = iVar15;
                  }
                  iVar15 = iVar12;
                  bVar27 = 1 < uVar9;
                  uVar9 = uVar9 >> 1;
                } while (bVar27);
                uVar9 = local_104 + iVar15;
                uVar22 = (ulonglong)uVar9;
                if (0 < iVar15) {
                  puVar13 = puVar25 + (longlong)local_ec * 0x10;
                  puVar16 = puVar25 + (longlong)(int)(uVar9 - iVar20) * 0x10;
                  puVar26 = puVar13;
                  do {
                    while( true ) {
                      puVar1 = puVar26 + 0x10;
                      puVar2 = puVar25 + 0x10;
                      puVar14 = puVar25;
                      puVar17 = local_c8;
                      for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                        *puVar17 = *puVar14;
                        puVar14 = puVar14 + 1;
                        puVar17 = puVar17 + 1;
                      }
                      puVar14 = puVar26;
                      puVar17 = puVar25;
                      for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                        *puVar17 = *puVar14;
                        puVar14 = puVar14 + 1;
                        puVar17 = puVar17 + 1;
                      }
                      puVar14 = local_c8;
                      for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                        *puVar26 = *puVar14;
                        puVar14 = puVar14 + 1;
                        puVar26 = puVar26 + 1;
                      }
                      if (puVar1 == puVar16) break;
                      if (puVar2 == puVar13) {
                        puVar13 = puVar1;
                      }
                      puVar25 = puVar25 + 0x10;
                      puVar26 = puVar1;
                    }
                    puVar26 = puVar13;
                    puVar25 = puVar2;
                  } while (puVar2 != puVar13);
                  uVar22 = (ulonglong)uVar9;
                }
              }
              if (((int)local_108 <= (int)uVar22) ||
                 (iVar15 = iVar20 + iVar15 + 1, (int)uVar22 <= iVar15)) break;
            } while( true );
          }
          lVar24 = local_e0 + local_d0;
        } while (lVar24 < (longlong)local_d8);
        uVar21 = (ulonglong)local_10c;
      } while ((int)local_10c < (int)local_d8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415810b6 FUN_1415810b6 body=1488 status=ok
// SIG undefined FUN_1415810b6(void)

/* WARNING: Removing unreachable block (ram,0x00014158159e) */

void FUN_1415810b6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  uint local_c8;
  uint local_c4;
  int local_bc;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)(int)param_2[1] != 0) {
    lVar17 = *param_2;
    lVar18 = (longlong)(int)param_2[1] * 0x80 + lVar17;
    do {
      lVar12 = lVar17 + 8;
      cVar5 = FUN_14945fc10(lVar12);
      if (((cVar5 != '\0') && (lVar7 = FUN_149466e92(lVar12), *(longlong *)(lVar7 + 0x18) != 0)) &&
         (lVar7 = FUN_149466e92(lVar12), **(char **)(lVar7 + 0x18) == '\x04')) {
        lVar7 = FUN_149466e92(lVar12);
        FUN_149458d9c(*(undefined8 *)(lVar7 + 0x18),&local_d0);
        plVar8 = (longlong *)FUN_149466e92(lVar12);
        uVar15 = local_c8;
        lVar12 = (longlong)(int)local_c8;
        local_c8 = local_c8 + 1;
        if (local_c4 < local_c8) {
          local_110 = plVar8;
          FUN_14945b542(&local_d0,uVar15);
          plVar8 = local_110;
        }
        local_d0[lVar12] = plVar8[3];
        local_98 = 0;
        local_90 = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        if ((longlong)(int)local_c8 != 0) {
          local_118 = local_d0;
          local_108 = (longlong *)((longlong)(int)local_c8 << 3);
          plVar8 = (longlong *)0x0;
          do {
            FUN_140f4f540();
            local_110 = plVar8;
            FUN_140f4f5a6(&DAT_14cc1c7d8,&local_e0,
                          *(undefined8 *)(*(longlong *)((longlong)local_118 + (longlong)plVar8) + 4)
                         );
            if (((((*(int *)(local_e0 + 0x18) != 0) &&
                  (uVar15 = *(uint *)(local_e0 + 0x16), -1 < (int)uVar15)) &&
                 (((int)uVar15 < DAT_14c9647dc &&
                  ((plVar8 = (longlong *)
                             ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                   plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(local_e0 + 0x18)))))))
                && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (lVar12 = *plVar8, lVar12 != 0))
            {
              lVar7 = FUN_1408cc5f4();
              if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                FUN_146739dc5(&local_100,lVar12,0);
                local_f0 = *(longlong *)((longlong)local_118 + (longlong)local_110) + 4;
                FUN_148088676(local_b8,&local_bc,&local_f0);
                *(longlong *)(local_b8[0] + 8 + (longlong)local_bc * 0x18) = local_100;
              }
            }
            plVar8 = (longlong *)CONCAT44(uStack_d4,local_d8);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar8 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
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
            plVar8 = local_110 + 1;
          } while (local_108 != plVar8);
          if ((longlong)(int)local_c8 != 0) {
            local_108 = local_d0 + (int)local_c8;
            plVar8 = local_d0;
            do {
              local_f0 = 0;
              local_110 = plVar8;
              FUN_149458322(*plVar8,&local_e0,&local_f0);
              uVar15 = 0;
              iVar13 = local_d8 + -1;
              if (local_d8 == 0) {
                iVar13 = 0;
              }
              if (0 < iVar13) {
                puVar10 = &DAT_149dfb77a;
                if (local_d8 != 0) {
                  puVar10 = local_e0;
                }
                lVar12 = 0;
                do {
                  uVar11 = ((uint)(0x19 < (ushort)puVar10[lVar12] - 0x61) * 0x20 +
                           (uint)(ushort)puVar10[lVar12]) - 0x20;
                  uVar15 = uVar15 >> 8 ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar11) & 0xff) * 4);
                  uVar15 = uVar15 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar15 & 0xff ^ uVar11 >> 8 & 0xff) * 4);
                  lVar12 = lVar12 + 1;
                } while (iVar13 != (int)lVar12);
              }
              plVar8 = (longlong *)*param_1;
              if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
                plVar14 = plVar8 + 7;
                if ((longlong *)plVar8[8] != (longlong *)0x0) {
                  plVar14 = (longlong *)plVar8[8];
                }
                iVar13 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar8[9] - 1U & uVar15) * 4)
                ;
                if (iVar13 != -1) {
                  lVar12 = *plVar8;
LAB_141581417:
                  lVar7 = (longlong)iVar13;
                  iVar13 = *(int *)(lVar12 + 8 + lVar7 * 0x18);
                  if (iVar13 == local_d8) {
                    if (1 < local_d8) {
                      local_118 = (longlong *)CONCAT44(local_118._4_4_,local_d8);
                      lVar16 = 0;
                      do {
                        uVar2 = *(ushort *)(*(longlong *)(lVar12 + lVar7 * 0x18) + lVar16);
                        uVar3 = *(ushort *)((longlong)local_e0 + lVar16);
                        if (uVar2 == uVar3) {
                          if (uVar2 == 0) break;
                        }
                        else {
                          if (0x7f < (uVar3 | uVar2)) {
                            iVar13 = (uint)uVar2 - (uint)uVar3;
                            goto LAB_14158149c;
                          }
                          if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                          goto code_r0x000141581499;
                        }
                        lVar16 = lVar16 + 2;
                      } while( true );
                    }
                  }
                  else if (iVar13 + local_d8 != 1) goto LAB_141581435;
                  goto LAB_1415815c8;
                }
              }
LAB_1415814af:
              local_118 = (longlong *)param_1[1];
              FUN_1494584c4(*local_110,&local_100,local_b8);
              iVar13 = (int)local_f8;
              iVar6 = ((int)local_f8 == 0) + 3;
              local_f0 = local_100;
              local_100 = 0;
              iVar4 = local_f8._4_4_;
              local_e8 = local_f8;
              local_f8 = 0;
              iVar9 = iVar6 + iVar13;
              if (iVar9 < iVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar6);
              }
              if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar9);
              }
              if (iVar4 < iVar9) {
                FUN_1446f8c06(&local_f0);
              }
              FUN_1400020e8(&local_f0,&DAT_14bcfe0f0,3);
              lVar12 = local_118[1];
              uVar15 = (int)lVar12 + 1;
              *(uint *)(local_118 + 1) = uVar15;
              if (*(uint *)((longlong)local_118 + 0xc) < uVar15) {
                FUN_1447a1bd6(local_118);
              }
              lVar7 = *local_118;
              lVar12 = (longlong)(int)lVar12 * 0x10;
              *(undefined8 *)(lVar7 + lVar12) = 0;
              *(longlong *)(lVar7 + lVar12) = local_f0;
              *(undefined4 *)(lVar7 + 8 + lVar12) = (undefined4)local_e8;
              *(undefined4 *)(lVar7 + 0xc + lVar12) = local_e8._4_4_;
              local_e8 = 0;
              local_f0 = 0;
              if (local_100 != 0) {
                FUN_1400020a8();
              }
              FUN_14482b35e(*param_1,&local_f0,&local_e0);
LAB_1415815c8:
              if (local_e0 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              plVar8 = local_110 + 1;
            } while (plVar8 != local_108);
          }
        }
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_140105116(local_b8);
        if (local_d0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar17 = lVar17 + 0x80;
    } while (lVar17 != lVar18);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000141581499:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14158149c:
  if (iVar13 == 0) goto LAB_1415815c8;
LAB_141581435:
  iVar13 = *(int *)(lVar12 + 0x10 + lVar7 * 0x18);
  if (iVar13 == -1) goto LAB_1415814af;
  goto LAB_141581417;
}



// FUNCTION 141581688 FUN_141581688 body=68 status=ok
// SIG undefined FUN_141581688(void)

void FUN_141581688(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x3a0) = lVar1;
  *(longlong *)(param_1 + 0x3a8) = param_2[1];
  return;
}



// FUNCTION 1415816cc FUN_1415816cc body=1320 status=ok
// SIG undefined FUN_1415816cc(void)

void FUN_1415816cc(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int *piVar4;
  longlong **pplVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong **local_80;
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined4 local_54;
  longlong *local_50;
  longlong **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_54 = param_2;
  cVar7 = FUN_145cf896c(param_1,*param_3);
  if (cVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  plVar10 = (longlong *)FUN_1461482d4(param_1 + 0x248,param_2,&local_54);
  local_78 = (longlong *)*param_3;
  pplVar5 = (longlong **)param_3[1];
  if (pplVar5 == (longlong **)0x0) {
    local_70 = (longlong **)0x0;
  }
  else {
    LOCK();
    *(int *)(pplVar5 + 1) = *(int *)(pplVar5 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pplVar5 + 1) = *(int *)(pplVar5 + 1) + 1;
    UNLOCK();
    local_70 = pplVar5;
  }
  uVar8 = (**(code **)(*local_78 + 0x40))();
  iVar9 = FUN_145cf801a(plVar10,uVar8,&local_78);
  pplVar1 = local_70;
  lVar16 = 0;
  if (iVar9 != -1) {
    lVar16 = (longlong)iVar9 * 0x38 + *plVar10;
  }
  if (local_70 != (longlong **)0x0) {
    LOCK();
    pplVar3 = local_70 + 1;
    *(int *)pplVar3 = *(int *)pplVar3 + -1;
    UNLOCK();
    if (*(int *)pplVar3 == 0) {
      (*(code *)**local_70)(local_70);
      LOCK();
      piVar4 = (int *)((longlong)pplVar1 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (*(code *)(*pplVar1)[2])(pplVar1);
      }
    }
  }
  if (pplVar5 != (longlong **)0x0) {
    LOCK();
    pplVar1 = pplVar5 + 1;
    *(int *)pplVar1 = *(int *)pplVar1 + -1;
    UNLOCK();
    if (*(int *)pplVar1 == 0) {
      (*(code *)**pplVar5)(pplVar5);
      LOCK();
      piVar4 = (int *)((longlong)pplVar5 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (*(code *)(*pplVar5)[2])(pplVar5);
      }
    }
  }
  if (lVar16 == 0) {
    local_78 = (longlong *)CONCAT44(local_78._4_4_,local_54);
    local_70 = (longlong **)*param_3;
    local_68 = (longlong *)param_3[1];
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_60 = 0;
    local_50 = param_3;
    local_48 = &local_78;
    FUN_146142b1c(plVar10,&local_88);
    plVar14 = local_68;
    lVar12 = (longlong)(int)local_88;
    lVar16 = *plVar10;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_68 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar4 = (int *)((longlong)plVar14 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    lVar16 = lVar16 + lVar12 * 0x38;
  }
  if (*(char *)(lVar16 + 0x29) != '\0') goto LAB_141581857;
  lVar12 = *param_3;
  uVar11 = FUN_140b64e34(param_1);
  FUN_140b6e166(&local_78,uVar11,lVar12);
  if (local_78 != (longlong *)0x0) {
    *(undefined1 *)(lVar16 + 0x29) = 1;
    FUN_140b64d6c(param_1,&local_50,local_54);
    if (local_50 != (longlong *)0x0) {
      local_88 = local_50;
      local_80 = local_48;
      if (local_48 != (longlong **)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = *(int *)(local_48 + 1) + 1;
        UNLOCK();
      }
      FUN_145c2c83a(param_1,&local_88,param_3,0x20);
      pplVar5 = local_80;
      if (local_80 != (longlong **)0x0) {
        LOCK();
        pplVar1 = local_80 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**local_80)(local_80);
          LOCK();
          piVar4 = (int *)((longlong)pplVar5 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
    }
    pplVar5 = local_48;
    if (local_48 != (longlong **)0x0) {
      LOCK();
      pplVar1 = local_48 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**pplVar5)(pplVar5);
        LOCK();
        piVar4 = (int *)((longlong)pplVar5 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
    lVar16 = *param_3;
    plVar10 = (longlong *)param_3[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_50 = (longlong *)0x0;
    local_48 = (longlong **)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_1446efa72(&local_50,0,4,0x10);
    local_48 = (longlong **)CONCAT44(local_48._4_4_,4);
    plVar14 = *(longlong **)(param_1 + 0x18);
    if (plVar14 == (longlong *)0x0) {
LAB_1415819ea:
      *local_50 = (longlong)&PTR_LAB_14b4e0d70;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      local_50[2] = lVar13;
      *local_50 = (longlong)&PTR_FUN_14b4e0d00;
      local_50[3] = 0;
      local_50[4] = 0;
      bVar17 = true;
      plVar14 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar14[1];
      do {
        if (iVar9 == 0) goto LAB_1415819ea;
        LOCK();
        iVar6 = (int)plVar14[1];
        bVar17 = iVar9 == iVar6;
        if (bVar17) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar17);
      lVar12 = *(longlong *)(param_1 + 0x10);
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      *local_50 = (longlong)&PTR_LAB_14b4e0d70;
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 1;
      lVar13 = DAT_14c758608 + 1;
      if (lVar15 == 0) {
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 2;
        lVar13 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar13;
      local_50[2] = lVar15;
      *local_50 = (longlong)&PTR_FUN_14b4e0d00;
      local_50[3] = lVar12;
      local_50[4] = (longlong)plVar14;
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
    }
    local_50[5] = param_1;
    local_50[6] = lVar16;
    local_50[7] = (longlong)plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (!bVar17) {
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar4 = (int *)((longlong)plVar14 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar4 = (int *)((longlong)plVar14 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar4 = (int *)((longlong)plVar14 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    pplVar5 = local_70;
    local_88 = local_78;
    local_80 = local_70;
    if (local_70 == (longlong **)0x0) {
      FUN_145e07e32(param_1,&local_54,&local_88,&local_50);
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + 1;
      UNLOCK();
      FUN_145e07e32(param_1,&local_54,&local_88,&local_50);
      if (pplVar5 != (longlong **)0x0) {
        LOCK();
        pplVar1 = pplVar5 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**pplVar5)(pplVar5);
          LOCK();
          piVar4 = (int *)((longlong)pplVar5 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
    }
    if ((int)local_48 == 0) {
LAB_141581ba5:
      if (local_50 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_50 != (longlong *)0x0) {
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = (longlong **)((ulonglong)local_48 & 0xffffffff00000000);
      goto LAB_141581ba5;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar4 = (int *)((longlong)plVar10 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  pplVar5 = local_70;
  if (local_70 != (longlong **)0x0) {
    LOCK();
    pplVar1 = local_70 + 1;
    *(int *)pplVar1 = *(int *)pplVar1 + -1;
    UNLOCK();
    if (*(int *)pplVar1 == 0) {
      (*(code *)**local_70)(local_70);
      LOCK();
      piVar4 = (int *)((longlong)pplVar5 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (*(code *)(*pplVar5)[2])(pplVar5);
      }
    }
  }
LAB_141581857:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141581c12 FUN_141581c12 body=179 status=ok
// SIG undefined FUN_141581c12(void)

int * FUN_141581c12(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x48);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_141581ca8;
          break;
        }
        iVar2 = piVar1[0x10];
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_145ec0816(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x48);
LAB_141581ca8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 141581cc6 FUN_141581cc6 body=23 status=ok
// SIG undefined FUN_141581cc6(void)

void FUN_141581cc6(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141581cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141581cde FUN_141581cde body=127 status=ok
// SIG undefined FUN_141581cde(void)

void FUN_141581cde(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xbf800000bf800000;
  param_1[0x17] = 0xbf800000bf800000;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}



// FUNCTION 141581d5e FUN_141581d5e body=277 status=ok
// SIG undefined FUN_141581d5e(void)

void FUN_141581d5e(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Texture";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Texture";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caebe60,local_58,local_54,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_140208c1e(&DAT_14caebe70,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141581e74 FUN_141581e74 body=277 status=ok
// SIG undefined FUN_141581e74(void)

void FUN_141581e74(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Texture";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Texture";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeab30,local_58,local_54,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_140208c1e(&DAT_14caeab40,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141581f8a FUN_141581f8a body=277 status=ok
// SIG undefined FUN_141581f8a(void)

void FUN_141581f8a(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Texture";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Texture";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeab58,local_58,local_54,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_140208c1e(&DAT_14caeab68,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415820a0 FUN_1415820a0 body=138 status=ok
// SIG undefined FUN_1415820a0(void)

undefined8 * FUN_1415820a0(undefined8 *param_1,undefined1 param_2)

{
  FUN_140402582();
  *param_1 = &PTR_FUN_14aac3578;
  *(undefined1 *)(param_1 + 0x26) = param_2;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 14158212a FUN_14158212a body=550 status=ok
// SIG undefined FUN_14158212a(void)

void FUN_14158212a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x40;
      FUN_1447a1747(*(undefined8 *)(lVar11 + 0x28 + lVar10),*(undefined4 *)(lVar11 + 0x30 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x28 + lVar10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar10 + lVar11 + 0x18) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar10 + lVar11 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_141582290;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141582290:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140b7ce44(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141582352 FUN_141582352 body=117 status=ok
// SIG undefined FUN_141582352(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141582352(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867bc8) {
    FUN_144b3d300(&DAT_14c867bc8);
    if (DAT_14c867bc8 == -1) {
      DAT_14c867bb0 = 0;
      _DAT_14c867bb8 = 0;
      _DAT_14c867bc0 = 2;
      atexit(FUN_1427804ef);
      _Init_thread_footer(&DAT_14c867bc8);
    }
  }
  return &DAT_14c867bb0;
}



// FUNCTION 1415823c8 FUN_1415823c8 body=437 status=ok
// SIG undefined FUN_1415823c8(void)

undefined8 * FUN_1415823c8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8d7670;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  uVar2 = DAT_14c8464e8;
  param_1[0x18] = DAT_14c8464e0;
  param_1[0x19] = uVar2;
  param_1[0x1a] = DAT_14c8464f0;
  uVar2 = DAT_14c8463f8;
  param_1[0x1b] = DAT_14c8463f0;
  param_1[0x1c] = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  uVar2 = DAT_14c846328;
  param_1[0x1e] = DAT_14c846320;
  param_1[0x1f] = uVar2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0x3fdcccccc0000000;
  param_1[0x29] = 0x3fd1eb8520000000;
  param_1[0x2a] = 0x4010000000000000;
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
  param_1[0x2b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x2c) = DAT_14c844848;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 14158257e FUN_14158257e body=332 status=ok
// SIG undefined FUN_14158257e(void)

undefined4 FUN_14158257e(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  undefined4 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  char local_49;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_58 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"SonyController",L"VibrationMode");
  if (cVar1 == '\0') {
LAB_141582656:
    local_58 = &DAT_14c872ce8;
    cVar1 = FUN_14052bb08(DAT_14c872ce0,L"SonyController",L"bAdvancedVibrationMode",&local_49);
    if ((cVar1 == '\0') || (local_49 == '\0')) {
      puVar3 = &DAT_14be8c3e0;
    }
    else {
      puVar3 = &DAT_14be8c3b0;
    }
    uVar7 = *(undefined4 *)(puVar3 + 0x10);
LAB_14158269d:
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar7;
  }
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar2 = local_48;
  }
  lVar4 = 0;
LAB_1415825f6:
  lVar5 = 0;
  do {
    uVar8 = *(ushort *)((longlong)puVar2 + lVar5);
    uVar9 = (ulonglong)uVar8;
    uVar6 = *(ushort *)((&PTR_u_Advanced_14be8c3b8)[lVar4 * 3] + lVar5);
    if (uVar8 == uVar6) {
      if (uVar8 == 0) goto LAB_14158264b;
    }
    else {
      if (0x7f < (uVar6 | uVar8)) break;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      uVar10 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar10]) break;
    }
    lVar5 = lVar5 + 2;
  } while( true );
  if (uVar8 == uVar6) {
LAB_14158264b:
    if (lVar4 * 0x18 != -0x14be8c3b0) {
      uVar7 = (&DAT_14be8c3c0)[lVar4 * 6];
      goto LAB_14158269d;
    }
    goto LAB_141582656;
  }
  lVar4 = lVar4 + 1;
  if (lVar4 == 3) goto LAB_141582656;
  goto LAB_1415825f6;
}



// FUNCTION 1415826cc FUN_1415826cc body=564 status=ok
// SIG undefined FUN_1415826cc(void)

void FUN_1415826cc(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  code *local_e8 [2];
  longlong *local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8[0] = *param_1;
  local_98 = param_1[2];
  param_1[2] = 0;
  local_88 = (undefined4)param_1[4];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_80 = (undefined4)param_1[5];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_78 = (undefined4)param_1[6];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_70 = (undefined4)param_1[7];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (local_a8[0] != 0) {
    *param_1 = 0;
  }
  FUN_1463ae090(local_68,local_a8);
  cVar4 = FUN_146269f19();
  pcVar3 = local_68[0];
  if (cVar4 != '\0') {
    plVar8 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar8 = &local_48;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7);
    goto LAB_14158286d;
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1415828e8;
      }
      if (DAT_14cace560 == '\x01') {
        local_f8 = 0;
        local_100 = 0;
        local_108 = DAT_14c76135a;
        FUN_143412d48(&DAT_14c844298,&local_f0,L"AudioCommand",local_68);
        if (local_f0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_f0 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_f0)(local_f0,1);
          }
        }
      }
      else {
        local_e8[0] = local_68[0];
        local_d8 = local_58;
        local_58 = (longlong *)0x0;
        local_c8 = local_48;
        uStack_c0 = uStack_40;
        local_b8 = local_38;
        uStack_b4 = uStack_34;
        uStack_b0 = uStack_30;
        uStack_ac = uStack_2c;
        if (local_68[0] != (code *)0x0) {
          local_68[0] = (code *)0x0;
        }
        FUN_1407461b0(1,local_e8);
      }
      goto LAB_14158286d;
    }
  }
LAB_1415828e8:
  FUN_143412cba(&DAT_14cace5a8,local_68);
LAB_14158286d:
  if (local_68[0] != (code *)0x0) {
    plVar8 = &local_48;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (*param_1 != 0) {
    plVar8 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141582902 FUN_141582902 body=398 status=ok
// SIG undefined FUN_141582902(void)

undefined8 * FUN_141582902(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a14af20;
  InitializeSRWLock((PSRWLOCK)(param_1 + 5));
  memset(param_1 + 6,0,0x800);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x106));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x106),4000);
  param_1[0x10f] = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x88c) = 0;
  param_1[0x113] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  *(undefined2 *)(param_1 + 0x11f) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 2;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91c) = 0;
  *(undefined4 *)(param_1 + 0x125) = 2;
  *(undefined8 *)((longlong)param_1 + 0x92c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x934) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0;
  param_1[0x128] = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_14629b472(&DAT_14c867408,local_28,param_1,&LAB_1403acdb8);
    FUN_14629b472(&DAT_14c867438,local_28,param_1,FUN_1403acdc6);
    uVar1 = FUN_140b631de();
    FUN_14629b472(uVar1,local_28,param_1,&LAB_1403ad44c);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141582a92 FUN_141582a92 body=54 status=ok
// SIG undefined FUN_141582a92(void)

ulonglong FUN_141582a92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (int)*(uint *)(param_1 + 0x160)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x158) + 8);
    uVar2 = 0;
    do {
      if (*plVar1 == param_2) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 6;
    } while (*(uint *)(param_1 + 0x160) != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 141582ac8 FUN_141582ac8 body=2951 status=ok
// SIG undefined FUN_141582ac8(void)

longlong FUN_141582ac8(longlong param_1,byte param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong *plVar27;
  uint uVar28;
  int iVar29;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint *local_90;
  uint local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0 < *(int *)(param_1 + 0x9f8)) &&
     (plVar3 = (longlong *)**(longlong **)(param_1 + 0x9f0), plVar3 != (longlong *)0x0)) {
    lVar10 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar11 = FUN_1410ef06e();
    if ((lVar11 != 0) &&
       ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
         lVar11 + 0x30)))) {
      plVar27 = plVar3 + 0x54;
      local_84 = 0;
      if ((param_3 != 0) && (*(char *)(param_1 + 0x934) != '\0')) {
        local_84 = FUN_144105418(plVar27,param_3);
      }
      local_58 = plVar3[3];
      local_50._0_2_ = CONCAT11((char)local_84,param_2);
      plVar1 = (longlong *)(param_1 + 0x938);
      local_60 = (ulonglong)param_2;
      uVar21 = (uint)((ulonglong)local_58 >> 0x10);
      uVar22 = (uint)local_58 & 0xffff;
      iVar16 = ((uint)local_58 << 0x10 | uVar22) + (int)((ulonglong)local_58 >> 0x20) +
               (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar22 >> 4);
      iVar17 = iVar16 - (uint)param_2;
      uVar22 = iVar17 * 0x100 ^ 0x9e3779b9U - iVar16;
      uVar21 = uVar22 >> 0xd ^ ((uint)param_2 - iVar17) - uVar22;
      uVar24 = uVar21 >> 0xc ^ (iVar17 - uVar22) - uVar21;
      uVar28 = uVar24 << 0x10 ^ (uVar22 - uVar21) - uVar24;
      uVar23 = uVar28 >> 5 ^ (uVar21 - uVar24) - uVar28;
      uVar22 = uVar23 >> 3 ^ (uVar24 - uVar28) - uVar23;
      uVar21 = uVar22 << 10 ^ (uVar28 - uVar23) - uVar22;
      uVar21 = uVar21 >> 0xf ^ uVar23 - (uVar22 + uVar21);
      iVar16 = uVar21 - (local_84 & 0xff);
      uVar23 = iVar16 * 0x100 ^ 0x9e3779b9 - uVar21;
      uVar22 = uVar23 >> 0xd ^ ((local_84 & 0xff) - iVar16) - uVar23;
      uVar21 = uVar22 >> 0xc ^ (iVar16 - uVar23) - uVar22;
      uVar23 = uVar21 << 0x10 ^ (uVar23 - uVar22) - uVar21;
      uVar22 = uVar23 >> 5 ^ (uVar22 - uVar21) - uVar23;
      uVar21 = uVar22 >> 3 ^ (uVar21 - uVar23) - uVar22;
      uVar23 = uVar21 << 10 ^ (uVar23 - uVar22) - uVar21;
      uVar21 = uVar23 >> 0xf ^ uVar22 - (uVar21 + uVar23);
      iVar16 = FUN_14419d804(plVar1,uVar21);
      if (iVar16 == -1) {
LAB_141582d04:
        local_78 = plVar1;
        local_68 = plVar27;
        if (*(int *)(param_1 + 0x96c) == 0) {
          uVar22 = *(uint *)(param_1 + 0x940);
          uVar12 = (ulonglong)uVar22;
          *(uint *)(param_1 + 0x940) = uVar22 + 1;
          if (*(uint *)(param_1 + 0x944) == uVar22) {
            FUN_1447711aa(plVar1,uVar22);
          }
          iVar16 = *(int *)(param_1 + 0x960);
          if (iVar16 == 0) {
            iVar17 = -1;
          }
          else {
            iVar17 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar17 = iVar16 + -1;
            }
            iVar17 = iVar17 >> 5;
          }
          lVar10 = param_1 + 0x948;
          iVar25 = iVar16 + 1;
          iVar29 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar29 = iVar16;
          }
          if (iVar29 >> 5 == iVar17) {
            *(int *)(param_1 + 0x960) = iVar25;
          }
          else {
            if (*(int *)(param_1 + 0x964) <= iVar16) {
              iVar17 = iVar16;
              local_98 = uVar12;
              if (iVar16 + 0x20U < 0xa0) {
                iVar25 = 0x80;
              }
              else {
                uVar22 = iVar16 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x964) + 0x1fU < 0xa0) {
                  uVar23 = 4;
                  if (4 < uVar22) {
                    uVar23 = uVar22;
                  }
                }
                else {
                  uVar23 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                }
                uVar12 = (ulonglong)(uVar23 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar24 = (uint)(uVar12 + 0xf);
                    if (uVar23 < 0x1ffd) {
                      uVar12 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                    }
                    else {
                      uVar18 = (ulonglong)(uVar24 & 0xfffffff0);
                      if (uVar18 < 0x7ff1) {
                        bVar13 = (&DAT_14c841e00)[uVar24 >> 4];
                        uVar15 = 0x32;
                        if (0x32 < bVar13) {
                          uVar15 = (ulonglong)bVar13;
                        }
                        uVar20 = 0x32 - (ulonglong)bVar13;
                        do {
                          uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0)
                          goto LAB_141583550;
                          lVar11 = uVar15 + 1 + uVar20;
                          uVar20 = uVar20 - 1;
                        } while (lVar11 != 0x33);
                      }
                      uVar12 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar12 = (ulonglong)DAT_14c841df8;
                      }
                      uVar12 = -uVar12 & (uVar18 + uVar12) - 1;
                    }
                  }
                  else {
                    uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
                    iVar17 = *(int *)(param_1 + 0x960);
                  }
                }
LAB_141583550:
                iVar9 = (int)(uVar12 >> 2);
                iVar25 = -0x20;
                if ((int)uVar22 <= iVar9) {
                  iVar25 = iVar9 << 5;
                }
              }
              *(int *)(param_1 + 0x964) = iVar25;
              FUN_1446efbd8(lVar10,iVar17);
              iVar25 = *(int *)(param_1 + 0x960) + 1;
              uVar12 = local_98;
            }
            iVar17 = iVar25 + 0x1f;
            if (-1 < iVar25) {
              iVar17 = iVar25;
            }
            *(int *)(param_1 + 0x960) = iVar25;
            if (iVar25 % 0x20 != 0) {
              lVar11 = *(longlong *)(param_1 + 0x958);
              if (*(longlong *)(param_1 + 0x958) == 0) {
                lVar11 = lVar10;
              }
              bVar13 = -(char)(iVar25 % 0x20);
              *(uint *)(lVar11 + (longlong)(iVar17 >> 5) * 4) =
                   (uint)(*(int *)(lVar11 + (longlong)(iVar17 >> 5) * 4) << (bVar13 & 0x1f)) >>
                   (bVar13 & 0x1f);
            }
          }
          lVar11 = (longlong)(int)uVar12;
          if (*(longlong *)(param_1 + 0x958) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x958);
          }
          bVar13 = (byte)iVar16 & 0x1f;
          puVar14 = (uint *)(lVar10 + (longlong)(iVar29 >> 5) * 4);
          *puVar14 = *puVar14 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
        }
        else {
          uVar12 = (ulonglong)*(uint *)(param_1 + 0x968);
          lVar11 = (longlong)(int)*(uint *)(param_1 + 0x968);
          iVar16 = *(int *)(*(longlong *)(param_1 + 0x938) + 4 + lVar11 * 0x20);
          *(int *)(param_1 + 0x968) = iVar16;
          iVar17 = *(int *)(param_1 + 0x96c) + -1;
          *(int *)(param_1 + 0x96c) = iVar17;
          if (iVar17 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x938) + (longlong)iVar16 * 0x20) = 0xffffffff;
          }
        }
        local_90 = (uint *)(param_1 + 0x948);
        iVar16 = (int)uVar12;
        uVar22 = 1 << ((byte)uVar12 & 0x1f);
        puVar14 = *(uint **)(param_1 + 0x958);
        if (*(uint **)(param_1 + 0x958) == (uint *)0x0) {
          puVar14 = local_90;
        }
        iVar17 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar17 = iVar16;
        }
        puVar14[iVar17 >> 5] = puVar14[iVar17 >> 5] | uVar22;
        uVar23 = 1;
        lVar10 = *(longlong *)(param_1 + 0x938);
        lVar11 = lVar11 * 0x20;
        puVar2 = (undefined4 *)(lVar10 + lVar11);
        *(undefined4 *)(lVar10 + 8 + lVar11) = local_50;
        *(longlong *)(lVar10 + lVar11) = local_58;
        *(undefined8 *)(lVar10 + 0x10 + lVar11) = 0;
        *(undefined4 *)(lVar10 + 0x18 + lVar11) = 0xffffffff;
        uVar24 = *(int *)(param_1 + 0x940) - *(int *)(param_1 + 0x96c);
        local_80 = (longlong)iVar16;
        if (uVar24 == 1) {
LAB_141582e81:
          if (((int)uVar24 < 1) || ((int)uVar23 <= *(int *)(param_1 + 0x980))) {
            uVar21 = *(int *)(param_1 + 0x980) - 1U & uVar21;
            puVar2[7] = uVar21;
            lVar10 = *(longlong *)(param_1 + 0x978);
            if (*(longlong *)(param_1 + 0x978) == 0) {
              lVar10 = param_1 + 0x970;
            }
            puVar2[6] = *(undefined4 *)
                         (lVar10 + ((longlong)*(int *)(param_1 + 0x980) - 1U & (longlong)(int)uVar21
                                   ) * 4);
            lVar10 = *(longlong *)(param_1 + 0x978);
            if (*(longlong *)(param_1 + 0x978) == 0) {
              lVar10 = param_1 + 0x970;
            }
            *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x980) - 1U & (longlong)(int)uVar21) * 4
                    ) = (int)uVar12;
          }
          else {
            *(uint *)(param_1 + 0x980) = uVar23;
            plVar27 = (longlong *)(param_1 + 0x978);
            if (*(longlong *)(param_1 + 0x978) != 0) {
              FUN_1446efa72(plVar27,0,0,4);
              uVar23 = *(uint *)(param_1 + 0x980);
            }
            if (uVar23 != 0) {
              lVar10 = param_1 + 0x970;
              if (uVar23 == 1) {
                if (*plVar27 != 0) {
                  FUN_1446efa72(plVar27,0,0,4);
                }
LAB_141582eef:
                uVar21 = 0;
                do {
                  lVar11 = *(longlong *)(param_1 + 0x978);
                  if (*(longlong *)(param_1 + 0x978) == 0) {
                    lVar11 = lVar10;
                  }
                  *(undefined4 *)
                   (lVar11 + (ulonglong)(*(int *)(param_1 + 0x980) + 0x7fffffffU & uVar21) * 4) =
                       0xffffffff;
                  uVar21 = uVar21 + 1;
                } while (uVar23 != uVar21);
              }
              else {
                FUN_1446efa72(plVar27,0,uVar23,4);
                if (0 < (int)uVar23) goto LAB_141582eef;
              }
              iVar16 = *(int *)(param_1 + 0x960);
              if (iVar16 == 0) {
                uVar12 = 0;
                uVar18 = 1;
                iVar17 = 0;
                iVar25 = 0;
              }
              else {
                puVar14 = *(uint **)(param_1 + 0x958);
                if (*(uint **)(param_1 + 0x958) == (uint *)0x0) {
                  puVar14 = local_90;
                }
                uVar21 = *puVar14;
                if (uVar21 == 0) {
                  iVar17 = iVar16 + 0x1e;
                  if (-1 < iVar16 + -1) {
                    iVar17 = iVar16 + -1;
                  }
                  uVar12 = 0;
                  uVar22 = iVar17 >> 5;
                  if (iVar17 >> 5 < 1) {
                    uVar22 = 0;
                  }
                  iVar17 = 0;
                  do {
                    if (uVar22 == uVar12) goto LAB_1415833d1;
                    iVar17 = iVar17 + 0x20;
                    uVar21 = puVar14[uVar12 + 1];
                    uVar12 = uVar12 + 1;
                  } while (uVar21 == 0);
                }
                else {
                  uVar12 = 0;
                  iVar17 = 0;
                }
                uVar18 = (ulonglong)(-uVar21 & uVar21);
                uVar15 = uVar18 * 2 + 1;
                lVar11 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                iVar25 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                if (iVar16 <= iVar25) {
                  iVar25 = iVar16;
                }
              }
              if (iVar25 < iVar16) {
                uVar21 = 0xffffffff;
                do {
                  local_98 = CONCAT44(local_98._4_4_,iVar17);
                  lVar11 = *(longlong *)(param_1 + 0x938);
                  lVar26 = (longlong)iVar25 * 0x20;
                  uVar4 = *(undefined8 *)(lVar11 + lVar26);
                  uVar22 = (uint)((ulonglong)uVar4 >> 0x10);
                  uVar23 = (uint)uVar4 & 0xffff;
                  iVar16 = ((uint)uVar4 << 0x10 | uVar23) + (int)((ulonglong)uVar4 >> 0x20) +
                           (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar23 >> 4);
                  uVar23 = (uint)*(byte *)(lVar11 + 8 + lVar26);
                  iVar29 = iVar16 - uVar23;
                  uVar22 = iVar29 * 0x100 ^ 0x9e3779b9U - iVar16;
                  uVar23 = uVar22 >> 0xd ^ (uVar23 - iVar29) - uVar22;
                  uVar28 = uVar23 >> 0xc ^ (iVar29 - uVar22) - uVar23;
                  uVar22 = uVar28 << 0x10 ^ (uVar22 - uVar23) - uVar28;
                  uVar24 = uVar22 >> 5 ^ (uVar23 - uVar28) - uVar22;
                  uVar23 = uVar24 >> 3 ^ (uVar28 - uVar22) - uVar24;
                  uVar22 = uVar23 << 10 ^ (uVar22 - uVar24) - uVar23;
                  uVar23 = uVar22 >> 0xf ^ uVar24 - (uVar23 + uVar22);
                  uVar22 = (uint)*(byte *)(lVar11 + 9 + lVar26);
                  iVar16 = uVar23 - uVar22;
                  uVar24 = iVar16 * 0x100 ^ 0x9e3779b9 - uVar23;
                  uVar23 = uVar24 >> 0xd ^ (uVar22 - iVar16) - uVar24;
                  uVar22 = uVar23 >> 0xc ^ (iVar16 - uVar24) - uVar23;
                  uVar24 = uVar22 << 0x10 ^ (uVar24 - uVar23) - uVar22;
                  uVar28 = uVar24 >> 5 ^ (uVar23 - uVar22) - uVar24;
                  uVar23 = uVar28 >> 3 ^ (uVar22 - uVar24) - uVar28;
                  uVar22 = uVar23 << 10 ^ (uVar24 - uVar28) - uVar23;
                  uVar15 = (longlong)(int)(uVar22 >> 0xf ^ uVar28 - (uVar23 + uVar22)) &
                           (longlong)*(int *)(param_1 + 0x980) - 1U;
                  iVar16 = (int)uVar15;
                  *(int *)(lVar11 + 0x1c + lVar26) = iVar16;
                  lVar19 = *(longlong *)(param_1 + 0x978);
                  if (*(longlong *)(param_1 + 0x978) == 0) {
                    lVar19 = lVar10;
                  }
                  *(undefined4 *)(lVar11 + 0x18 + lVar26) =
                       *(undefined4 *)
                        (lVar19 + ((longlong)*(int *)(param_1 + 0x980) - 1U & uVar15) * 4);
                  lVar11 = *(longlong *)(param_1 + 0x978);
                  if (*(longlong *)(param_1 + 0x978) == 0) {
                    lVar11 = lVar10;
                  }
                  *(int *)(lVar11 + ((longlong)iVar16 & (longlong)*(int *)(param_1 + 0x980) - 1U) *
                                    4) = iVar25;
                  uVar21 = ~(uint)uVar18 & uVar21;
                  puVar14 = *(uint **)(param_1 + 0x958);
                  if (*(uint **)(param_1 + 0x958) == (uint *)0x0) {
                    puVar14 = local_90;
                  }
                  iVar16 = *(int *)(param_1 + 0x960);
                  iVar25 = (int)uVar12;
                  lVar11 = (longlong)iVar25;
                  uVar22 = puVar14[lVar11] & uVar21;
                  if (uVar22 == 0) {
                    iVar29 = iVar16 + 0x1e;
                    if (-1 < iVar16 + -1) {
                      iVar29 = iVar16 + -1;
                    }
                    iVar29 = iVar29 >> 5;
                    iVar9 = iVar29;
                    if (iVar29 < iVar25) {
                      iVar9 = iVar25;
                    }
                    if (iVar29 <= iVar25) break;
                    lVar19 = 0;
                    while( true ) {
                      iVar17 = iVar17 + 0x20;
                      uVar22 = puVar14[lVar11 + lVar19 + 1];
                      if (uVar22 != 0) break;
                      lVar19 = lVar19 + 1;
                      if (iVar9 - lVar11 == lVar19) goto LAB_1415833d1;
                    }
                    uVar12 = (ulonglong)(iVar25 + (int)lVar19 + 1);
                    uVar21 = 0xffffffff;
                  }
                  uVar18 = (ulonglong)(-uVar22 & uVar22);
                  uVar15 = uVar18 * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar15 != 0) {
                    for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  iVar25 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                } while (iVar25 < iVar16);
              }
            }
          }
        }
        else {
          local_98 = uVar12;
          local_70 = (longlong)(iVar17 >> 5);
          iVar16 = FUN_14419d804(local_78,uVar21,puVar2);
          if (iVar16 == -1) {
            uVar12 = local_98;
            if (3 < uVar24) {
              uVar18 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
              lVar10 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar23 = 1 << ((byte)lVar10 & 0x1f);
            }
            goto LAB_141582e81;
          }
          lVar10 = *(longlong *)(param_1 + 0x938);
          uVar8 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar16 * 0x20) = *(undefined8 *)(puVar2 + 4);
          puVar2 = (undefined4 *)(lVar10 + (longlong)iVar16 * 0x20);
          *puVar2 = uVar8;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          lVar10 = *(longlong *)(param_1 + 0x938);
          if (*(int *)(param_1 + 0x96c) != 0) {
            *(int *)(lVar10 + (longlong)*(int *)(param_1 + 0x968) * 0x20) = (int)local_98;
          }
          *(undefined4 *)(lVar10 + local_80 * 0x20) = 0xffffffff;
          if (*(int *)(param_1 + 0x96c) < 1) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = *(undefined4 *)(param_1 + 0x968);
          }
          *(undefined4 *)(lVar10 + local_80 * 0x20 + 4) = uVar8;
          *(int *)(param_1 + 0x968) = (int)local_98;
          *(int *)(param_1 + 0x96c) = *(int *)(param_1 + 0x96c) + 1;
          puVar14 = local_90;
          if (*(uint **)(param_1 + 0x958) != (uint *)0x0) {
            puVar14 = *(uint **)(param_1 + 0x958);
          }
          puVar14[local_70] = puVar14[local_70] & ~uVar22;
        }
LAB_1415833d1:
        lVar10 = *local_78 + local_80 * 0x20;
        plVar27 = local_68;
      }
      else {
        if (*plVar1 + (longlong)iVar16 * 0x20 == 0) goto LAB_141582d04;
        lVar10 = *plVar1 + (longlong)iVar16 * 0x20;
      }
      uVar12 = local_60;
      lVar11 = *(longlong *)(lVar10 + 0x10);
      if (lVar11 != 0) goto LAB_141582b38;
      if ((char)local_84 != '\0') {
        plVar27 = plVar3 + 0x7c;
      }
      lVar11 = FUN_1402d20ea(plVar27 + local_60 * 5);
      if (lVar11 != 0) {
LAB_141583422:
        lVar11 = FUN_14090ceee(lVar11,param_1,0);
        if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar11);
        }
        *(longlong *)(lVar10 + 0x10) = lVar11;
        goto LAB_141582b38;
      }
      lVar11 = FUN_1410ac07e(param_1);
      if (((~param_2 & 6) != 0) && (lVar11 != 0)) {
        lVar11 = FUN_1410ac07e(param_1);
        lVar11 = FUN_1402d20ea(lVar11 + uVar12 * 0x28 + 0x180);
        if (lVar11 != 0) goto LAB_141583422;
      }
    }
  }
  lVar11 = 0;
LAB_141582b38:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141583650 FUN_141583650 body=226 status=ok
// SIG undefined FUN_141583650(void)

longlong * FUN_141583650(longlong *param_1)

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
  pcVar13 = FUN_1462fe26c;
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



// FUNCTION 141583733 FUN_141583733 body=90 status=ok
// SIG undefined FUN_141583733(void)

void FUN_141583733(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_145ec7d04(param_1,param_1,param_1 + 0x10,param_1 + 0x20);
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) / 4.9684415;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    return;
  }
  FUN_145ec7e4c(param_1);
  return;
}



// FUNCTION 14158378d FUN_14158378d body=575 status=ok
// SIG undefined FUN_14158378d(void)

float * FUN_14158378d(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  dVar7 = pow(ABS((double)fVar1 + -0.8),3.0);
  dVar8 = pow(ABS((double)fVar2 + -0.8),3.0);
  dVar9 = pow(ABS((double)fVar3 + -0.8),3.0);
  fVar4 = param_2[1];
  fVar5 = *param_2;
  dVar10 = pow((double)param_2[2] + -0.33,4.0);
  dVar11 = pow((double)fVar4 + -0.33,4.0);
  dVar12 = pow((double)fVar5 + -0.33,4.0);
  fVar4 = param_3[2];
  fVar5 = param_3[1];
  fVar6 = param_3[3];
  *param_1 = ((float)(dVar9 * 7.0 + (1.85 - (double)fVar3)) / (float)(dVar12 * 100.0 + 3.5)) *
             *param_3;
  param_1[1] = ((float)(dVar8 * 7.0 + (1.85 - (double)fVar2)) / (float)(dVar11 * 100.0 + 3.5)) *
               fVar5;
  param_1[2] = ((float)(dVar7 * 7.0 + (1.85 - (double)fVar1)) / (float)(dVar10 * 100.0 + 3.5)) *
               fVar4;
  param_1[3] = fVar6;
  return param_1;
}



// FUNCTION 1415839cc FUN_1415839cc body=652 status=ok
// SIG undefined FUN_1415839cc(void)

ulonglong FUN_1415839cc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [40];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 auStack_80 [4];
  undefined2 local_60;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  if ((param_2 != 0) && ((int)param_1[1] != 0)) {
    lVar13 = *param_1;
    lVar1 = lVar13 + (longlong)(int)param_1[1] * 0x28;
    uVar11 = 0;
    do {
      if ((longlong)*(int *)(lVar13 + 0x20) != 0) {
        plVar3 = (longlong *)(lVar13 + 0x18);
        lVar12 = (longlong)*(int *)(lVar13 + 0x20) * 0x58;
        plVar14 = (longlong *)(*(longlong *)(lVar13 + 0x18) + 8);
        do {
          lVar7 = plVar14[1];
          if (lVar7 == 0) {
            uVar6 = FUN_140c1c194();
            lVar7 = FUN_14477b664(uVar6);
            plVar14[1] = lVar7;
          }
          lVar8 = plVar14[2];
          if (lVar8 == 0) {
            if ((lVar7 != 0) && (*plVar14 != 0)) {
              plVar4 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
                plVar14[2] = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar8 = FUN_144aff482(uVar6,plVar14);
                plVar14[2] = lVar8;
                if (lVar8 != 0) {
                  lVar7 = plVar14[1];
                  goto LAB_141583a65;
                }
              }
            }
          }
          else {
LAB_141583a65:
            if (lVar7 == 0) {
              uVar6 = FUN_140c1c194(lVar8);
              lVar7 = FUN_14477b664(uVar6);
              plVar14[1] = lVar7;
              lVar8 = plVar14[2];
              if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar14 != 0)) {
                plVar4 = *(longlong **)(lVar7 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar4 + 0x108))(), cVar5 == '\0')) {
                  lVar8 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar8 = FUN_144aff482(uVar6,plVar14);
                }
                plVar14[2] = lVar8;
              }
            }
            cVar5 = FUN_14094f966(lVar8,param_2);
            if (cVar5 == '\0') {
              FUN_14028f43e(*(undefined8 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x20));
              *(undefined4 *)(lVar13 + 0x20) = 0;
              uVar9 = 0;
              iVar10 = 0;
              if (*(int *)(lVar13 + 0x24) != 0) {
                FUN_1487c0124(plVar3);
                iVar10 = *(int *)(lVar13 + 0x20);
                uVar9 = *(uint *)(lVar13 + 0x24);
              }
              local_a0 = 0;
              local_60 = 0;
              local_58 = 0;
              local_50 = 0;
              local_88 = 0;
              auStack_80[0] = 0;
              local_98 = 0;
              uStack_90 = 0;
              *(uint *)(lVar13 + 0x20) = iVar10 + 1U;
              if (uVar9 < iVar10 + 1U) {
                FUN_14095139e(plVar3,iVar10);
              }
              lVar12 = *plVar3;
              lVar7 = (longlong)iVar10 * 0x58;
              puVar2 = (undefined1 *)(lVar12 + lVar7);
              *puVar2 = local_a0;
              FUN_145d1462c(puVar2 + 8,&local_98);
              FUN_140382e86(lVar12 + lVar7 + 0x20,auStack_80);
              FUN_144a2da94(auStack_80);
              uVar11 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              break;
            }
          }
          plVar14 = plVar14 + 0xb;
          lVar12 = lVar12 + -0x58;
        } while (lVar12 != 0);
      }
      lVar13 = lVar13 + 0x28;
    } while (lVar13 != lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 141583c5a FUN_141583c5a body=1116 status=ok
// SIG undefined FUN_141583c5a(void)

void FUN_141583c5a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_48);
  lVar4 = local_48[0x76];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xd8));
  *(int *)(lVar4 + 0xd0) = *(int *)(lVar4 + 0xd0) + 1;
  plVar9 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  *(undefined1 *)(lVar4 + 0xb2) = 1;
  lVar7 = FUN_140495e96(param_1 + 0x30);
  if (((lVar7 == 0) || (lVar7 = FUN_14427aa18(lVar7), lVar7 == 0)) ||
     (*(int *)(lVar7 + 0x30) == *(int *)(lVar7 + 0x5c))) {
LAB_141583e53:
    lVar8 = 0;
  }
  else {
    uVar3 = (uint)((ulonglong)DAT_14cbd9748 >> 0x10);
    uVar13 = (uint)DAT_14cbd9748 & 0xffff;
    lVar8 = lVar7 + 0x60;
    if (*(longlong *)(lVar7 + 0x68) != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x68);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(lVar7 + 0x70) - 1U &
                              (int)((ulonglong)DAT_14cbd9748 >> 0x20) +
                              ((uint)DAT_14cbd9748 << 0x10 | uVar13) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar10 == -1) goto LAB_141583e53;
    lVar8 = 0;
    do {
      plVar9 = (longlong *)(*(longlong *)(lVar7 + 0x28) + (longlong)iVar10 * 0x18);
      if (*plVar9 == DAT_14cbd9748) {
        if ((plVar9 + 1 == (longlong *)0x0 || plVar9 == (longlong *)0x0) ||
           (lVar7 = plVar9[1], lVar7 == 0)) goto LAB_141583e53;
        lVar8 = FUN_14406f144();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_141583e53;
        uVar3 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar10 = *(int *)(lVar7 + 0x10);
        if (iVar10 == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          lVar8 = 0;
          LOCK();
          iVar10 = *(int *)(lVar7 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar7 + 0x10) = iVar12;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar12;
          }
          if (iVar10 == 0) break;
        }
        lVar8 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             ((((int)plVar9[2] != iVar10 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
              (lVar8 = *plVar9, lVar8 == 0)))) goto LAB_141583e53;
          if (*(char *)(lVar8 + 0x70) == '\0') {
            *(undefined1 *)(lVar8 + 0x70) = 1;
            local_40 = DAT_14cbb6288;
            local_48 = DAT_14cbb6280;
            (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x38))(lVar8 + 0x28);
          }
        }
        break;
      }
      iVar10 = (int)plVar9[2];
    } while (iVar10 != -1);
  }
  FUN_1449027d0(param_1,&local_48);
  uVar5 = local_48[0x76];
  plVar9 = (longlong *)local_48[0x77];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar6 != (longlong *)0x0) {
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
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_48[2] = lVar11;
  *local_48 = &PTR_FUN_14b9ae730;
  local_48[3] = uVar5;
  local_48[4] = plVar9;
  if (plVar9 == (longlong *)0x0) {
    local_48[5] = lVar8;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_48[5] = lVar8;
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar7 = FUN_1402735c8();
  FUN_14663e6a4(param_1,param_1 + 0x70,&local_48,*(undefined4 *)(lVar7 + 0x508));
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_141583fb9;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141583fb9:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xd8));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415840b8 FUN_1415840b8 body=168 status=ok
// SIG undefined FUN_1415840b8(void)

ulonglong FUN_1415840b8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  DVar3 = GetCurrentThreadId();
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar7 = uVar4 == uVar1;
    if (bVar7) {
      *param_1 = uVar4 | 1;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
    UNLOCK();
    if (bVar7) {
      param_1[1] = DVar3;
      goto LAB_1415840f1;
    }
  }
  if (param_1[1] == DVar3) {
    LOCK();
    *param_1 = *param_1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(param_1,uVar4);
  }
LAB_1415840f1:
  uVar4 = param_1[8];
  if (0 < (int)uVar4) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 6) + lVar6 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,*param_2);
        uVar4 = param_1[8];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uVar4);
  }
  uVar4 = *param_1;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 < 4) {
    param_1[1] = 0;
    if (uVar4 < 2) {
      LOCK();
      uVar1 = *param_1;
      if (uVar4 == uVar1) {
        *param_1 = 0;
      }
      else {
        uVar5 = (ulonglong)uVar1;
      }
      UNLOCK();
      if (uVar4 == uVar1) {
        return uVar5;
      }
    }
    uVar5 = FUN_140d366d2(param_1);
    return uVar5;
  }
  LOCK();
  *param_1 = *param_1 - 4;
  UNLOCK();
  return uVar5;
}



// FUNCTION 141584160 FUN_141584160 body=20 status=ok
// SIG undefined FUN_141584160(void)

void FUN_141584160(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xb8) != param_2) {
    *(char *)(param_1 + 0xb8) = param_2;
    FUN_1403a3fe6();
    return;
  }
  return;
}



// FUNCTION 141584174 FUN_141584174 body=951 status=ok
// SIG undefined FUN_141584174(void)

void FUN_141584174(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong *local_80;
  longlong *local_78;
  int *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145ecae1c();
  FUN_145ecadd0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_78 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_78;
  if ((int)param_1[5] == 0) {
    uVar18 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar4 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar18 = local_68 >> 0x20;
    iVar4 = (int)param_1[5];
  }
  plVar3 = local_60;
  iVar6 = (int)local_68;
  uVar8 = (uint)local_58;
  iVar11 = local_58._4_4_;
  iVar19 = local_50;
  plVar10 = param_1;
  if (local_58._4_4_ != iVar4 || local_60 != local_78) {
    do {
      local_80 = plVar10;
      local_84 = iVar4;
      lVar14 = *local_80;
      lVar9 = (longlong)iVar11 * 0x68;
      lVar5 = lVar14 + lVar9 + 0x20;
      iVar4 = *(int *)(lVar14 + lVar9 + 0x38);
      iVar11 = -1;
      if (iVar4 != 0) {
        lVar7 = *(longlong *)(lVar14 + 0x30 + lVar9);
        if (lVar7 == 0) {
          lVar7 = lVar5;
        }
        uVar16 = (ulonglong)(iVar4 + 0x1fU >> 5);
        iVar11 = -0x3e - (iVar4 + 0x1fU & 0xffffffe0);
        uVar12 = 0xffffffff >> (-(char)iVar4 & 0x1fU);
        do {
          bVar20 = uVar16 == 0;
          uVar16 = uVar16 - 1;
          if (bVar20) {
            iVar11 = -1;
            goto LAB_1415842ad;
          }
          iVar11 = iVar11 + 0x20;
          uVar17 = uVar12 & *(uint *)(lVar7 + uVar16 * 4);
          uVar12 = 0xffffffff;
        } while (uVar17 == 0);
        uVar16 = (ulonglong)uVar17 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar11 = -(((uint)lVar7 ^ 0x3f) + iVar11);
      }
LAB_1415842ad:
      lVar7 = lVar14 + lVar9;
      plVar10 = (longlong *)(lVar7 + 0x10);
      iVar4 = iVar11 + 1;
      iVar13 = *(int *)(lVar7 + 0x18);
      if (iVar4 < iVar13) {
        if ((0 < *(int *)(lVar14 + 0x44 + lVar9)) &&
           (uVar12 = *(uint *)(lVar14 + 0x40 + lVar9), uVar16 = (ulonglong)uVar12,
           uVar12 != 0xffffffff)) {
          local_70 = (int *)(lVar14 + lVar9 + 0x44);
          lVar2 = *plVar10;
          do {
            lVar15 = (longlong)(int)uVar16 * 0x10;
            if (iVar11 < (int)uVar16) {
              iVar13 = *(int *)(lVar2 + lVar15);
              iVar1 = *(int *)(lVar2 + 4 + lVar15);
              uVar16 = (ulonglong)iVar1;
              if (uVar16 != 0xffffffffffffffff) {
                *(int *)(lVar2 + uVar16 * 0x10) = iVar13;
              }
              if (iVar13 == -1) {
                *(int *)(lVar14 + lVar9 + 0x40) = iVar1;
              }
              else {
                *(int *)(lVar2 + 4 + (longlong)iVar13 * 0x10) = iVar1;
              }
              *local_70 = *local_70 + -1;
            }
            else {
              uVar16 = (ulonglong)*(uint *)(lVar2 + 4 + lVar15);
            }
          } while ((int)uVar16 != -1);
          iVar13 = *(int *)(lVar7 + 0x18);
        }
        if (iVar13 != iVar4) {
          *(int *)(lVar7 + 0x18) = iVar4;
        }
        FUN_144a6134a(lVar5,iVar4,*(int *)(lVar14 + lVar9 + 0x38) - iVar4);
        iVar13 = *(int *)(lVar7 + 0x18);
      }
      if (*(int *)(lVar14 + 0x1c + lVar9) != iVar13) {
        FUN_14474875a(plVar10,iVar13);
        iVar13 = *(int *)(lVar7 + 0x18);
      }
      uVar12 = iVar13 - *(int *)(lVar14 + 0x44 + lVar9);
      if (uVar12 < 4) {
        iVar4 = 1;
      }
      else {
        uVar16 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
        lVar5 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar5 & 0x1f);
      }
      iVar11 = *(int *)(lVar14 + 0x58 + lVar9);
      if ((0 < (int)uVar12 && iVar11 < iVar4) || (iVar4 < iVar11)) {
        *(int *)(lVar14 + lVar9 + 0x58) = iVar4;
        FUN_140dba25c(plVar10);
      }
      uVar8 = uVar8 & ~(uint)uVar18;
      plVar10 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar10 = plVar3;
      }
      iVar4 = (int)plVar3[3];
      lVar14 = (longlong)iVar6;
      uVar12 = *(uint *)((longlong)plVar10 + lVar14 * 4) & uVar8;
      if (uVar12 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar13 = iVar11;
        if (iVar11 < iVar6) {
          iVar13 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar5 = 0;
          do {
            uVar12 = *(uint *)((longlong)plVar10 + lVar5 * 4 + lVar14 * 4 + 4);
            if (uVar12 != 0) {
              iVar6 = iVar6 + (int)lVar5 + 1;
              uVar8 = 0xffffffff;
              goto LAB_141584395;
            }
            iVar19 = iVar19 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar13 - lVar14 != lVar5);
          uVar8 = 0xffffffff;
          iVar6 = iVar13;
        }
        iVar6 = iVar6 + 1;
        iVar11 = iVar4;
      }
      else {
LAB_141584395:
        uVar18 = (ulonglong)(-uVar12 & uVar12);
        uVar16 = uVar18 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar11 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar11) {
          iVar11 = iVar4;
        }
      }
      iVar4 = local_84;
      plVar10 = local_80;
    } while (iVar11 != local_84 || plVar3 != local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14158452c FUN_14158452c body=1394 status=ok
// SIG undefined FUN_14158452c(void)

void FUN_14158452c(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  code **ppcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_108 [40];
  longlong local_e0;
  int local_d8;
  uint local_d0;
  code *local_c8 [2];
  longlong local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  code *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  code *local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x450) != '\0') goto LAB_14158455a;
  local_68 = (code *)(param_1 + 0x20);
  (*(code *)(&PTR_LAB_14a5b3c60)[*(byte *)(param_2 + 8)])();
  lVar13 = 0;
  do {
    lVar6 = FUN_14001cc68(0x58,0x10);
    FUN_14636a6d0(lVar6);
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14a5b5a70;
    plVar7[2] = lVar6;
    *(longlong *)(param_1 + 0x80 + lVar13) = lVar6;
    plVar10 = *(longlong **)(param_1 + 0x88 + lVar13);
    if (plVar7 == plVar10) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar7)();
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000141584646:
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x88 + lVar13) = plVar7;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar10 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar10)();
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar7 = plVar10;
          goto joined_r0x000141584646;
        }
      }
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x20);
  cVar3 = FUN_140c8fd5b();
  if (cVar3 != '\0') {
    plVar10 = *(longlong **)(param_1 + 0x18);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      local_a8 = (code *)0x0;
    }
    else {
      iVar4 = (int)plVar10[1];
      local_a8 = (code *)0x0;
      do {
        if (iVar4 == 0) {
          plVar10 = (longlong *)0x0;
          goto LAB_141584696;
        }
        LOCK();
        iVar2 = (int)plVar10[1];
        bVar14 = iVar4 == iVar2;
        if (bVar14) {
          *(int *)(plVar10 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar14);
      local_a8 = *(code **)(param_1 + 0x10);
    }
LAB_141584696:
    local_88 = FUN_147846986;
    local_80 = 0;
    local_a0 = plVar10;
    FUN_147850c70(&local_68);
    FUN_145f9be62(&DAT_14c86a9a8,&local_88,&local_68);
    if (local_60 == 0) {
LAB_14158471f:
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_68 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
      goto LAB_14158471f;
    }
    *(code **)(param_1 + 0x458) = local_88;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
  local_58 = 0;
  local_50 = 0x8000000000;
  local_78 = 0;
  local_70 = 0x8000000000;
  local_98 = 0;
  local_90 = 0x8000000000;
  local_b8 = 0;
  local_b0 = 0x8000000000;
  FUN_1457538dc(&local_e0,0x10,1,0);
  uVar11 = (ulonglong)local_d0;
  if ((-1 < (int)local_d0) && ((int)local_d0 < local_d8)) {
    do {
      lVar13 = *(longlong *)(local_e0 + (uVar11 & 0xffffffff) * 8);
      if (DAT_14cabd4d8 == 0) {
        uVar8 = FUN_140f5467b();
        DAT_14cabd4d8 = FUN_140002ddd(FUN_14636aa74,uVar8,L"MassFragment");
        if (DAT_14cabd4d8 != 0) goto LAB_14158482c;
LAB_141584847:
        lVar13 = *(longlong *)(local_e0 + (longlong)(int)local_d0 * 8);
        if (DAT_14cabd4f0 == 0) {
          uVar8 = FUN_140f5467b();
          DAT_14cabd4f0 = FUN_140002ddd(FUN_14636aad4,uVar8,L"MassTag");
          if (DAT_14cabd4f0 != 0) goto LAB_141584880;
LAB_14158489b:
          lVar13 = *(longlong *)(local_e0 + (longlong)(int)local_d0 * 8);
          if (DAT_14cabd508 == 0) {
            uVar8 = FUN_140f5467b();
            DAT_14cabd508 = FUN_140002ddd(FUN_14636ab34,uVar8,L"MassChunkFragment");
            if (DAT_14cabd508 != 0) goto LAB_1415848d4;
          }
          else {
LAB_1415848d4:
            if ((*(int *)(DAT_14cabd508 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cabd508 + 0x38) * 8) ==
                DAT_14cabd508 + 0x30)) {
              if (*(longlong *)(local_e0 + (longlong)(int)local_d0 * 8) != DAT_14cabd508) {
                uVar5 = FUN_14688f974(&DAT_14cabdf80);
                ppcVar9 = &local_a8;
                goto LAB_1415849f3;
              }
              goto LAB_1415849fa;
            }
          }
          lVar13 = *(longlong *)(local_e0 + (longlong)(int)local_d0 * 8);
          if (DAT_14cabd520 == 0) {
            uVar8 = FUN_140f5467b();
            DAT_14cabd520 = FUN_140002ddd(FUN_14636ab94,uVar8,L"MassSharedFragment");
            if (DAT_14cabd520 == 0) goto LAB_1415849fa;
          }
          if (((*(int *)(DAT_14cabd520 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cabd520 + 0x38) * 8) ==
               DAT_14cabd520 + 0x30)) &&
             (*(longlong *)(local_e0 + (longlong)(int)local_d0 * 8) != DAT_14cabd520)) {
            uVar5 = FUN_14688f974(&DAT_14cabe230);
            ppcVar9 = local_c8;
            goto LAB_1415849f3;
          }
        }
        else {
LAB_141584880:
          if ((*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cabd4f0 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cabd4f0 + 0x38) * 8) !=
              DAT_14cabd4f0 + 0x30)) goto LAB_14158489b;
          if (*(longlong *)(local_e0 + (longlong)(int)local_d0 * 8) != DAT_14cabd4f0) {
            uVar5 = FUN_14688f974(&DAT_14cabd580);
            ppcVar9 = &local_88;
            goto LAB_1415849f3;
          }
        }
      }
      else {
LAB_14158482c:
        if ((*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cabd4d8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cabd4d8 + 0x38) * 8) !=
            DAT_14cabd4d8 + 0x30)) goto LAB_141584847;
        if (*(longlong *)(local_e0 + (longlong)(int)local_d0 * 8) == DAT_14cabd4d8)
        goto LAB_1415849fa;
        uVar5 = FUN_14688f974(&DAT_14cabda20);
        ppcVar9 = &local_68;
LAB_1415849f3:
        FUN_14688fb8a(ppcVar9,uVar5);
      }
LAB_1415849fa:
      uVar11 = (longlong)(int)local_d0;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
        local_d0 = (uint)uVar11;
        if ((longlong)local_d8 <= (longlong)uVar11) break;
      } while (*(longlong *)(local_e0 + uVar11 * 8) == 0);
    } while ((-2 < (longlong)uVar12) && ((int)local_d0 < local_d8));
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  *(undefined2 *)(param_1 + 0x450) = 0x101;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14158455a:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141584aa0 FUN_141584aa0 body=164 status=ok
// SIG undefined FUN_141584aa0(void)

void FUN_141584aa0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caead28,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141584b46 FUN_141584b46 body=258 status=ok
// SIG undefined FUN_141584b46(void)

void FUN_141584b46(void)

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
              0x110) < DAT_14ca5f960) {
    FUN_144b3d300(&DAT_14ca5f960);
    if (DAT_14ca5f960 == -1) {
      FUN_145ece330(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSingleLayerWaterPassParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x533;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f8e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430a04e3);
      _Init_thread_footer(&DAT_14ca5f960);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141584c4a FUN_141584c4a body=434 status=ok
// SIG undefined FUN_141584c4a(void)

undefined * FUN_141584c4a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5c760) {
    FUN_144b3d300(&DAT_14ca5c760);
    if (DAT_14ca5c760 == -1) {
      FUN_145ece53a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"DeferredDecals";
      local_70 = L"SingleLayerWater";
      local_78 = L"FSingleLayerWaterPassUniformParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x51d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5c6e0,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14308f2e7);
      _Init_thread_footer(&DAT_14ca5c760);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca5c6e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141584dfe FUN_141584dfe body=289 status=ok
// SIG undefined FUN_141584dfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141584dfe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f8b20) {
    FUN_144b3d300(&DAT_14c9f8b20);
    if (DAT_14c9f8b20 == -1) {
      FUN_141584f20();
      FUN_145ecf170();
      FUN_140db5666(&DAT_14c9f8a78,0,&DAT_14c9f8a10,L"FInitializeCardTileIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingCulling.usf",
                    L"InitializeCardTileIndirectArgsCS",5,1,FUN_147204a5e,FUN_1472049fe,
                    &LAB_1462e1658,&LAB_1472049fa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fd9a8)
      ;
      _DAT_14c9f8a78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d67c62);
      _Init_thread_footer(&DAT_14c9f8b20);
    }
  }
  return &DAT_14c9f8a78;
}



// FUNCTION 141584f20 FUN_141584f20 body=258 status=ok
// SIG undefined FUN_141584f20(void)

void FUN_141584f20(void)

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
              0x110) < DAT_14c9fda28) {
    FUN_144b3d300(&DAT_14c9fda28);
    if (DAT_14c9fda28 == -1) {
      FUN_145ecf2ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x129;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fd9a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d992c3);
      _Init_thread_footer(&DAT_14c9fda28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141585024 FUN_141585024 body=289 status=ok
// SIG undefined FUN_141585024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141585024(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fcee0) {
    FUN_144b3d300(&DAT_14c9fcee0);
    if (DAT_14c9fcee0 == -1) {
      FUN_141585146();
      FUN_145ecf426();
      FUN_140db5666(&DAT_14c9fce38,0,&DAT_14c9fcdd0,L"FSetupAdaptiveProbeIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"SetupAdaptiveProbeIndirectArgsCS",5,1,FUN_147208f90,FUN_147208f30,
                    &LAB_1462e17ca,&LAB_147208f2c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff548)
      ;
      _DAT_14c9fce38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd0e);
      _Init_thread_footer(&DAT_14c9fcee0);
    }
  }
  return &DAT_14c9fce38;
}



// FUNCTION 141585146 FUN_141585146 body=258 status=ok
// SIG undefined FUN_141585146(void)

void FUN_141585146(void)

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
              0x110) < DAT_14c9ff5c8) {
    FUN_144b3d300(&DAT_14c9ff5c8);
    if (DAT_14c9ff5c8 == -1) {
      FUN_145ecf570(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 699;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff548,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6ad);
      _Init_thread_footer(&DAT_14c9ff5c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158524a FUN_14158524a body=289 status=ok
// SIG undefined FUN_14158524a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158524a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1cb20) {
    FUN_144b3d300(&DAT_14ca1cb20);
    if (DAT_14ca1cb20 == -1) {
      FUN_14158536c();
      FUN_145ecf6dc();
      FUN_140db5666(&DAT_14ca1ca78,0,&DAT_14ca1ca10,L"FOITSortTriangleIndex_AllocateCS",
                    L"/Engine/Private/OIT/OITSorting.usf",L"MainCS",5,1,FUN_1472710cc,FUN_14727106c,
                    &LAB_147271068,&LAB_147271064,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21668)
      ;
      _DAT_14ca1ca78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e6cdab);
      _Init_thread_footer(&DAT_14ca1cb20);
    }
  }
  return &DAT_14ca1ca78;
}



// FUNCTION 14158536c FUN_14158536c body=258 status=ok
// SIG undefined FUN_14158536c(void)

void FUN_14158536c(void)

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
              0x110) < DAT_14ca216e8) {
    FUN_144b3d300(&DAT_14ca216e8);
    if (DAT_14ca216e8 == -1) {
      FUN_145ecf826(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1fa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21668,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e941d4);
      _Init_thread_footer(&DAT_14ca216e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141585470 FUN_141585470 body=289 status=ok
// SIG undefined FUN_141585470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141585470(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca272a0) {
    FUN_144b3d300(&DAT_14ca272a0);
    if (DAT_14ca272a0 == -1) {
      FUN_141585592();
      FUN_145ecf992();
      FUN_140db5666(&DAT_14ca271f8,0,&DAT_14ca27190,L"FCopyEyeAdaptationToTextureCS",
                    L"/Engine/Private/PostProcessEyeAdaptationUtils.usf",
                    L"CopyEyeAdaptationToTextureCS",5,1,FUN_14728b5fe,FUN_14728b59e,&LAB_14728b59a,
                    &LAB_14728b596,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca29f68);
      _DAT_14ca271f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ebad6c);
      _Init_thread_footer(&DAT_14ca272a0);
    }
  }
  return &DAT_14ca271f8;
}



// FUNCTION 141585592 FUN_141585592 body=258 status=ok
// SIG undefined FUN_141585592(void)

void FUN_141585592(void)

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
              0x110) < DAT_14ca29fe8) {
    FUN_144b3d300(&DAT_14ca29fe8);
    if (DAT_14ca29fe8 == -1) {
      FUN_145ecfadc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x24e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29f68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edce53);
      _Init_thread_footer(&DAT_14ca29fe8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141585696 FUN_141585696 body=164 status=ok
// SIG undefined FUN_141585696(void)

void FUN_141585696(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb498,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158573c FUN_14158573c body=283 status=ok
// SIG undefined FUN_14158573c(void)

void FUN_14158573c(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
    lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0x18;
    do {
      lVar4 = plVar7[1];
      if (lVar4 == 0) {
        uVar3 = FUN_140e2014e();
        lVar4 = FUN_14477b664(uVar3);
        plVar7[1] = lVar4;
      }
      lVar5 = plVar7[2];
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar7 != 0) {
            plVar6 = *(longlong **)(lVar4 + 0xb8);
            if (plVar6 == (longlong *)0x0) {
LAB_14158583a:
              lVar5 = 0;
            }
            else {
              cVar2 = (**(code **)(*plVar6 + 0x108))();
              if (cVar2 == '\0') goto LAB_14158583a;
              uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar5 = FUN_144aff482(uVar3,plVar7);
            }
            plVar7[2] = lVar5;
          }
        }
      }
      pcVar1 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      local_40 = lVar5;
      uVar3 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar3,&local_40);
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141585858 FUN_141585858 body=764 status=ok
// SIG undefined FUN_141585858(void)

void FUN_141585858(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1[0x14];
  uStack_60 = *(undefined4 *)(param_1 + 0x15);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xac);
  FUN_145ed13a8(*param_2);
  plVar8 = (longlong *)*param_2;
  bVar6 = *(byte *)(*plVar8 + 0x29);
  if (((bVar6 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xd), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xc];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    bVar6 = *(byte *)(*plVar8 + 0x29);
  }
  if (((bVar6 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0xf), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0xe];
    lVar9 = 0;
    do {
      local_68 = 0;
      (**(code **)(*(longlong *)*plVar8 + 0x160))((longlong *)*plVar8,&local_68);
      *(undefined8 *)(lVar4 + lVar9) = local_68;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    plVar8 = (longlong *)*param_2;
  }
  local_68 = param_1[0x10];
  uStack_60 = *(undefined4 *)(param_1 + 0x11);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
  FUN_141585b56(plVar8);
  plVar8 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar8;
  bVar6 = *(byte *)((longlong)plVar7 + 0x29);
  if (((bVar6 & 2) == 0) && (iVar3 = *(int *)(param_1 + 0x13), (longlong)iVar3 != 0)) {
    lVar4 = param_1[0x12];
    lVar9 = 0;
    do {
      FUN_145ed145e(plVar8,&local_68);
      *(undefined8 *)(lVar4 + 0x20 + lVar9) = local_48;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar6 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar6 & 2) == 0) && (iVar3 = *(int *)(param_1 + 5), (longlong)iVar3 != 0)) {
    lVar4 = param_1[4];
    lVar9 = 0;
    do {
      plVar7 = (longlong *)*plVar8;
      puVar5 = (ulonglong *)plVar7[1];
      puVar1 = (undefined4 *)*puVar5 + 1;
      if ((undefined4 *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)plVar7 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar7 + 0x170))(plVar7,&local_68,4);
        }
        else {
          FUN_14572512c(plVar7,&local_68);
        }
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)*puVar5);
        *puVar5 = (ulonglong)puVar1;
      }
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar8 = (longlong *)*param_2;
    plVar7 = (longlong *)*plVar8;
    bVar6 = *(byte *)((longlong)plVar7 + 0x29);
  }
  if (((bVar6 & 2) == 0) && (iVar3 = *(int *)(param_1 + 9), (longlong)iVar3 != 0)) {
    lVar4 = param_1[8];
    lVar9 = 0;
    do {
      plVar7 = (longlong *)*plVar8;
      puVar5 = (ulonglong *)plVar7[1];
      puVar1 = (undefined4 *)*puVar5 + 1;
      if ((undefined4 *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)plVar7 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar7 + 0x170))(plVar7,&local_68,4);
        }
        else {
          FUN_14572512c(plVar7,&local_68);
        }
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)*puVar5);
        *puVar5 = (ulonglong)puVar1;
      }
      *(undefined4 *)(lVar4 + lVar9) = (undefined4)local_68;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
    plVar7 = *(longlong **)*param_2;
  }
  (**(code **)(*plVar7 + 0x170))(plVar7,param_1[6],(longlong)*(int *)(param_1 + 7));
  (**(code **)(**(longlong **)*param_2 + 0x170))
            (*(longlong **)*param_2,param_1[10],(longlong)*(int *)(param_1 + 0xb) * 2);
  local_68 = param_1[2];
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_144a9061a(*param_2,&local_68);
  local_68 = *param_1;
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_145ed1306(*param_2,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141585b56 FUN_141585b56 body=264 status=ok
// SIG undefined FUN_141585b56(void)

void FUN_141585b56(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && ((longlong)(int)param_2[1] != 0)) {
    puVar3 = (undefined4 *)*param_2;
    puVar2 = puVar3 + (longlong)(int)param_2[1] * 4;
    do {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_58 = 0;
      plVar1 = (longlong *)
               (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_78);
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,&uStack_70);
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,&local_58);
      (**(code **)(*plVar1 + 0x160))(plVar1,&uStack_60);
      *puVar3 = (undefined4)local_78;
      puVar3[1] = (undefined4)uStack_70;
      puVar3[2] = (undefined4)uStack_60;
      puVar3[3] = (undefined4)local_58;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141585c60 FUN_141585c60 body=1229 status=ok
// SIG undefined FUN_141585c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141585c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  *param_1 = &PTR_FUN_14a398f08;
  param_1[1] = param_2;
  param_1[2] = param_3;
  FUN_1446f470e(param_1 + 3,param_2,1);
  FUN_14099931e(param_1 + 4,param_1 + 3);
  *(undefined4 *)(param_1 + 5) = param_4;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = param_7;
  param_1[9] = param_8;
  param_1[10] = param_9;
  param_1[0xd] = param_1;
  if (DAT_14caa0968 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14caa0968 + 8) = param_1 + 0xb;
  }
  param_1[0xb] = DAT_14caa0968;
  param_1[0xc] = &DAT_14caa0968;
  DAT_14caa0968 = param_1 + 0xb;
  FUN_140187b9a();
  iVar13 = DAT_14caa0fd0;
  iVar11 = DAT_14caa0fa8;
  if (DAT_14caa0fd4 == 0) {
    iVar13 = DAT_14caa0fa8 + 1;
    bVar18 = DAT_14caa0fac == DAT_14caa0fa8;
    DAT_14caa0fa8 = iVar13;
    if (bVar18) {
      FUN_14482b872(&DAT_14caa0fa0,iVar11);
    }
    iVar13 = DAT_14caa0fc8;
    if (DAT_14caa0fc8 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = DAT_14caa0fc8 + 0x1e;
      if (-1 < DAT_14caa0fc8 + -1) {
        iVar6 = DAT_14caa0fc8 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    iVar9 = DAT_14caa0fc8 + 1;
    iVar14 = DAT_14caa0fc8 + 0x1f;
    if (-1 < DAT_14caa0fc8) {
      iVar14 = DAT_14caa0fc8;
    }
    if (iVar14 >> 5 != iVar6) {
      if (DAT_14caa0fcc <= DAT_14caa0fc8) {
        if (DAT_14caa0fc8 + 0x20U < 0xa0) {
          DAT_14caa0fcc = 0x80;
        }
        else {
          uVar15 = DAT_14caa0fc8 + 0x20U >> 5;
          if (DAT_14caa0fcc + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar15) {
              uVar17 = uVar15;
            }
          }
          else {
            uVar17 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar17 << 2,0);
          iVar6 = (int)(uVar10 >> 2);
          DAT_14caa0fcc = -0x20;
          if ((int)uVar15 <= iVar6) {
            DAT_14caa0fcc = iVar6 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14caa0fb0,DAT_14caa0fc8);
        iVar9 = DAT_14caa0fc8 + 1;
      }
      iVar6 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar6 = iVar9;
      }
      if (iVar9 % 0x20 != 0) {
        puVar12 = &DAT_14caa0fb0;
        if (DAT_14caa0fc0 != (undefined *)0x0) {
          puVar12 = DAT_14caa0fc0;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        DAT_14caa0fc8 = iVar9;
        *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(puVar12 + (longlong)(iVar6 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
        iVar9 = DAT_14caa0fc8;
      }
    }
    DAT_14caa0fc8 = iVar9;
    lVar7 = (longlong)iVar11;
    puVar12 = &DAT_14caa0fb0;
    if (DAT_14caa0fc0 != (undefined *)0x0) {
      puVar12 = DAT_14caa0fc0;
    }
    bVar8 = (byte)iVar13 & 0x1f;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    iVar13 = iVar11;
  }
  else {
    lVar7 = (longlong)DAT_14caa0fd0;
    DAT_14caa0fd0 = *(int *)(DAT_14caa0fa0 + 4 + lVar7 * 0x18);
    DAT_14caa0fd4 = DAT_14caa0fd4 + -1;
    if (DAT_14caa0fd4 != 0) {
      *(undefined4 *)(DAT_14caa0fa0 + (longlong)DAT_14caa0fd0 * 0x18) = 0xffffffff;
    }
  }
  iVar11 = 1;
  puVar12 = &DAT_14caa0fb0;
  if (DAT_14caa0fc0 != (undefined *)0x0) {
    puVar12 = DAT_14caa0fc0;
  }
  iVar6 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar6 = iVar13;
  }
  *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) | 1 << ((byte)iVar13 & 0x1f);
  plVar2 = (longlong *)(DAT_14caa0fa0 + lVar7 * 0x18);
  lVar7 = param_1[4];
  *plVar2 = lVar7;
  plVar2[1] = (longlong)param_1;
  *(undefined4 *)(plVar2 + 2) = 0xffffffff;
  uVar15 = (int)((ulonglong)lVar7 >> 0x20) * 0x17 + (int)lVar7;
  uVar17 = DAT_14caa0fa8 - DAT_14caa0fd4;
  if ((uVar17 != 0) && (uVar17 != 1)) {
    puVar12 = &DAT_14caa0fd8;
    if (DAT_14caa0fe0 != (undefined *)0x0) {
      puVar12 = DAT_14caa0fe0;
    }
    iVar6 = *(int *)(puVar12 + (ulonglong)(DAT_14caa0fe8 - 1U & uVar15) * 4);
    while (iVar6 != -1) {
      plVar3 = (longlong *)(DAT_14caa0fa0 + (longlong)iVar6 * 0x18);
      if (*plVar3 == lVar7) {
        uVar4 = *(undefined4 *)((longlong)plVar2 + 4);
        lVar7 = plVar2[1];
        uVar5 = *(undefined4 *)((longlong)plVar2 + 0xc);
        *(int *)plVar3 = (int)*plVar2;
        *(undefined4 *)((longlong)plVar3 + 4) = uVar4;
        *(int *)(plVar3 + 1) = (int)lVar7;
        *(undefined4 *)((longlong)plVar3 + 0xc) = uVar5;
        FUN_14112e342(&DAT_14caa0fa0,iVar13,1);
        goto LAB_141585ef1;
      }
      iVar6 = (int)plVar3[2];
    }
  }
  if (3 < uVar17) {
    uVar10 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar17 < 1) || (iVar11 <= DAT_14caa0fe8)) {
    uVar15 = DAT_14caa0fe8 - 1U & uVar15;
    *(uint *)((longlong)plVar2 + 0x14) = uVar15;
    puVar12 = DAT_14caa0fe0;
    if (DAT_14caa0fe0 == (undefined *)0x0) {
      puVar12 = &DAT_14caa0fd8;
    }
    *(undefined4 *)(plVar2 + 2) =
         *(undefined4 *)(puVar12 + ((longlong)DAT_14caa0fe8 - 1U & (longlong)(int)uVar15) * 4);
    puVar12 = DAT_14caa0fe0;
    if (DAT_14caa0fe0 == (undefined *)0x0) {
      puVar12 = &DAT_14caa0fd8;
    }
    *(int *)(puVar12 + ((longlong)DAT_14caa0fe8 - 1U & (longlong)(int)uVar15) * 4) = iVar13;
  }
  else {
    DAT_14caa0fe8 = iVar11;
    FUN_14158612e();
  }
LAB_141585ef1:
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    FUN_140a0f4bc();
    uVar15 = DAT_14caa0f90;
    if ((int)DAT_14caa0f90 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar16 = DAT_14caa0f90;
      do {
        uVar1 = (uVar16 >> 1) + uVar17;
        if (*(ulonglong *)(*(longlong *)(DAT_14caa0f88 + (ulonglong)uVar1 * 8) + 0x20) <
            (ulonglong)param_1[4]) {
          uVar17 = uVar1 + (uVar16 & 1);
        }
        bVar18 = 1 < uVar16;
        uVar16 = uVar16 >> 1;
      } while (bVar18);
    }
    DAT_14caa0f90 = DAT_14caa0f90 + 1;
    if (DAT_14caa0f94 < DAT_14caa0f90) {
      FUN_145ed2d64(&DAT_14caa0f88,uVar15);
    }
    uVar10 = (ulonglong)uVar17;
    memmove((void *)(DAT_14caa0f88 + uVar10 * 8 + 8),(void *)(DAT_14caa0f88 + uVar10 * 8),
            (ulonglong)(uVar15 - uVar17) << 3);
    *(undefined8 **)(DAT_14caa0f88 + uVar10 * 8) = param_1;
  }
  _DAT_14caa0964 = _DAT_14caa0964 + 1;
  return param_1;
}



// FUNCTION 14158612e FUN_14158612e body=598 status=ok
// SIG undefined FUN_14158612e(void)

void FUN_14158612e(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14caa0fe0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caa0fe0,0,0,4);
  }
  uVar5 = DAT_14caa0fe8;
  if (DAT_14caa0fe8 != 0) {
    FUN_144a1cbf0(&DAT_14caa0fd8,0,DAT_14caa0fe8,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14caa0fe0;
        if (DAT_14caa0fe0 == (undefined *)0x0) {
          puVar7 = &DAT_14caa0fd8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14caa0fe8 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14caa0fb0;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14caa0fc8 == 0) {
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
    if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
      do {
        lVar11 = DAT_14caa0fa0;
        lVar10 = (longlong)iVar6;
        uVar1 = *(undefined8 *)(DAT_14caa0fa0 + lVar10 * 0x18);
        uVar13 = (longlong)((int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1) &
                 (longlong)(int)DAT_14caa0fe8 - 1U;
        iVar12 = (int)uVar13;
        *(int *)(DAT_14caa0fa0 + 0x14 + lVar10 * 0x18) = iVar12;
        puVar7 = DAT_14caa0fe0;
        if (DAT_14caa0fe0 == (undefined *)0x0) {
          puVar7 = &DAT_14caa0fd8;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14caa0fe8 - 1U & uVar13) * 4);
        puVar7 = DAT_14caa0fe0;
        if (DAT_14caa0fe0 == (undefined *)0x0) {
          puVar7 = &DAT_14caa0fd8;
        }
        *(int *)(puVar7 + ((longlong)iVar12 & (longlong)(int)DAT_14caa0fe8 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_50 + 0x10);
        if (*(undefined **)(local_50 + 0x10) == (undefined *)0x0) {
          puVar7 = local_50;
        }
        iVar12 = *(int *)(local_50 + 0x18);
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar11 * 4) & uVar5;
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
            uVar3 = *(uint *)(puVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14158633f;
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
LAB_14158633f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141586386 FUN_141586386 body=164 status=ok
// SIG undefined FUN_141586386(void)

void FUN_141586386(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeafd8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158642c FUN_14158642c body=164 status=ok
// SIG undefined FUN_14158642c(void)

void FUN_14158642c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebad8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415864d2 FUN_1415864d2 body=289 status=ok
// SIG undefined FUN_1415864d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415864d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1af8) {
    FUN_144b3d300(&DAT_14c9c1af8);
    if (DAT_14c9c1af8 == -1) {
      FUN_1415865f4();
      FUN_145ed79d2();
      FUN_140db5666(&DAT_14c9c1a50,0,&DAT_14c9c19e8,
                    L"FPostProcessEdgeDetection2ApplyTargetChangesPS",
                    L"/Engine/Private/PostProcessEdgeDetection2ApplyTargetChanges.usf",
                    L"PixelShaderMainCombine",3,8,FUN_147144cd8,FUN_147144c78,&LAB_147144c36,
                    &LAB_147144c32,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c39b8);
      _DAT_14c9c1a50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba34d7);
      _Init_thread_footer(&DAT_14c9c1af8);
    }
  }
  return &DAT_14c9c1a50;
}



// FUNCTION 1415865f4 FUN_1415865f4 body=258 status=ok
// SIG undefined FUN_1415865f4(void)

void FUN_1415865f4(void)

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
              0x110) < DAT_14c9c3a38) {
    FUN_144b3d300(&DAT_14c9c3a38);
    if (DAT_14c9c3a38 == -1) {
      FUN_145ed7b1c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEdgeDetection2ApplyTargetChangesParametersPS";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x128;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c39b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc0a70);
      _Init_thread_footer(&DAT_14c9c3a38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415866f8 FUN_1415866f8 body=1314 status=ok
// SIG undefined FUN_1415866f8(void)

ulonglong FUN_1415866f8(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  undefined7 uVar14;
  ulonglong uVar13;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)FUN_1408bb964((longlong)param_1 + 0x44);
  if (plVar7 == (longlong *)0x0) {
LAB_14158677b:
    cVar5 = FUN_146642d04(param_1,param_2);
    if ((cVar5 == '\0') && (lVar8 = FUN_1462281ce(param_1,param_2), lVar8 != 0)) {
      lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar9 != 0) &&
         ((lVar9 = FUN_1400f6f32(lVar9), lVar9 != 0 &&
          (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 != 0)))) {
        lVar10 = FUN_140082f10();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
           (lVar12 = lVar8,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) {
          lVar12 = 0;
        }
        FUN_14042af24(lVar9,&local_58,lVar12);
        if ((-1 < (short)local_58) && (iVar6 = FUN_1402d8968(lVar9,&local_58), iVar6 != 0xb))
        goto LAB_14158678a;
      }
      uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1410d53f0(&local_58,uVar11);
      uVar14 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (local_50 != (longlong *)0x0) {
        iVar6 = (int)local_50[1];
        do {
          if (iVar6 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_50[1];
          bVar15 = iVar6 == iVar4;
          if (bVar15) {
            *(int *)(local_50 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
          plVar7 = local_50;
        } while (!bVar15);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        pcVar3 = local_58;
        if (plVar7 != (longlong *)0x0) {
          uVar13 = CONCAT71(uVar14,1);
          if ((local_58 != (code *)0x0) &&
             (lVar9 = FUN_1400f3ad8((longlong)param_1 + 0x44), lVar9 != 0)) {
            if (DAT_14cbadd90 == 0) {
              local_58 = FUN_141030f22;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_1459f2e4c;
              local_78 = &LAB_148c39de3;
              local_80 = &LAB_1457a9eb2;
              local_88 = L"Game";
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 0x10;
              local_a8 = 0x3de0;
              local_70 = &local_58;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
              plVar2 = *(longlong **)(lVar9 + 0xb10);
              if (plVar2 == (longlong *)0x0) {
LAB_141586943:
                if (*(char *)(lVar9 + 0x178) == '\x03') {
                  lVar8 = FUN_1401b2ade(lVar8);
                  if (lVar8 != 0) {
                    if (DAT_14cbadd90 == 0) {
                      local_58 = FUN_141030f22;
                      local_60 = FUN_14081d0ea;
                      local_68 = &LAB_1459f2e4c;
                      local_78 = &LAB_148c39de3;
                      local_80 = &LAB_1457a9eb2;
                      local_88 = L"Game";
                      local_90 = 0;
                      local_98 = 0x10000004;
                      local_a0 = 0x10;
                      local_a8 = 0x3de0;
                      local_70 = &local_58;
                      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,
                                    FUN_1465e9ab8);
                    }
                    if ((*(int *)(DAT_14cbadd90 + 0x38) <=
                         *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                      local_a8 = CONCAT31(local_a8._1_3_,1);
                      uVar13 = 0;
                      cVar5 = FUN_144235fa8(pcVar3,lVar9,lVar8,0);
                      if (cVar5 == '\0') goto LAB_1415869f7;
                    }
                  }
                }
                else {
                  uVar13 = 0;
                  cVar5 = FUN_144236d58(pcVar3,lVar9,0,1);
                  if (cVar5 == '\0') goto LAB_1415869f7;
                  if (DAT_14cbae3d8 == 0) {
                    local_58 = FUN_141030f22;
                    local_60 = FUN_14081d0ea;
                    local_68 = &LAB_1464f5fc4;
                    local_78 = &LAB_148c3dd26;
                    local_80 = &LAB_1459673ba;
                    local_88 = L"Engine";
                    local_90 = 0;
                    local_98 = 0x10000004;
                    local_a0 = 0x10;
                    local_a8 = 0x1360;
                    local_70 = &local_58;
                    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604)
                    ;
                  }
                  if (((*(int *)(DAT_14cbae3d8 + 0x38) <=
                        *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
                     ((*(char *)(lVar8 + 0x742) != '\0' ||
                      ((*(char *)(lVar8 + 0x743) != '\0' ||
                       (uVar13 = 0, *(char *)(lVar8 + 0x741) != '\0')))))) goto LAB_141586a3c;
                }
                uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
              }
              else {
                lVar10 = (**(code **)(*plVar2 + 8))(plVar2);
                lVar12 = FUN_140a1ada8();
                if ((((lVar12 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38))) ||
                    (*(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
                     lVar12 + 0x30)) || (*(char *)((longlong)plVar2 + 0xa5) == '\0'))
                goto LAB_141586943;
LAB_141586a3c:
                uVar13 = 0;
              }
            }
          }
LAB_1415869f7:
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
          goto LAB_14158678c;
        }
      }
      uVar13 = CONCAT71(uVar14,1);
      goto LAB_14158678c;
    }
  }
  else {
    lVar8 = FUN_1403ca142();
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_14158677b;
    if (*(code **)(*plVar7 + 0x498) == (code *)&LAB_14015c36e) {
      cVar5 = (char)plVar7[0x42];
    }
    else {
      cVar5 = (**(code **)(*plVar7 + 0x498))(plVar7);
    }
    if (cVar5 == '\b') goto LAB_14158677b;
  }
LAB_14158678a:
  uVar13 = 0;
LAB_14158678c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 141586c1c FUN_141586c1c body=443 status=ok
// SIG undefined FUN_141586c1c(void)

void FUN_141586c1c(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar11 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_141586d37;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_141586d37:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141586dd8 FUN_141586dd8 body=383 status=ok
// SIG undefined FUN_141586dd8(void)

undefined8 FUN_141586dd8(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c760800 != 1) || (cVar6 = '\x01', DAT_14ca84e27 == '\0')) {
    cVar6 = (DAT_14c760800 == 2) * '\x02';
  }
  iVar3 = (int)((float)(*(int *)(DAT_14c9f5ce8 + 4) + 0x7fU >> 7) * *(float *)(param_1 + 0xa10));
  if (0x3f < iVar3) {
    iVar3 = 0x40;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  if ((((*(int *)(param_1 + 0xa24) == iVar3 * 0x80) && (*(int *)(param_1 + 0xa28) == iVar3 * 0x80))
      && (*(char *)(param_1 + 0xa2c) == cVar6)) &&
     (*(byte *)(param_1 + 0xa20) == (byte)((*(int *)(DAT_14c9ecd08 + 4) == 0) << 4 | 10U))) {
    uVar4 = 0;
  }
  else {
    FUN_141586f58(param_1);
    lVar2 = DAT_14c9f5ce8;
    uVar5 = (uint)((float)(*(int *)(DAT_14c9f5ce8 + 4) + 0x7fU >> 7) * *(float *)(param_1 + 0xa10));
    if (0x3f < (int)uVar5) {
      uVar5 = 0x40;
    }
    if ((int)uVar5 < 2) {
      uVar5 = 1;
    }
    *(ulonglong *)(param_1 + 0xa24) = (ulonglong)uVar5 << 0x27 | (ulonglong)(uVar5 << 7);
    iVar3 = (int)((float)(*(int *)(lVar2 + 4) + 0x7fU >> 7) * *(float *)(param_1 + 0xa10));
    local_30 = 0x40;
    if (iVar3 < 0x40) {
      local_30 = iVar3;
    }
    if (local_30 < 2) {
      local_30 = 1;
    }
    local_2c = local_30;
    FUN_141586fb2(param_1 + 0xa30);
    *(char *)(param_1 + 0xa2c) = cVar6;
    uVar1 = (ulonglong)DAT_14c9ecd08 >> 8;
    *(byte *)(param_1 + 0xa20) = (*(int *)(DAT_14c9ecd08 + 4) == 0) << 4 | 10;
    uVar4 = CONCAT71((int7)uVar1,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141586f58 FUN_141586f58 body=89 status=ok
// SIG undefined FUN_141586f58(void)

void FUN_141586f58(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 400);
  if (0 < iVar1) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1b8);
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        lVar2 = param_1 + 0x1a8;
      }
      if ((*(uint *)(lVar2 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        FUN_1447f515a(param_1,uVar3,1);
        iVar1 = *(int *)(param_1 + 400);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



// FUNCTION 141586fb2 FUN_141586fb2 body=256 status=ok
// SIG undefined FUN_141586fb2(void)

void FUN_141586fb2(void *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)param_2;
  iVar5 = param_2[1] * *param_2;
  *(int *)((longlong)param_1 + 0x90) = iVar5;
  *(int *)((longlong)param_1 + 0x88) = iVar5;
  uVar6 = iVar5 + 0x1f;
  if (0x1f < uVar6) {
    uVar4 = uVar6 >> 5;
    if (*(int *)((longlong)param_1 + 0x8c) + 0x1fU >> 5 < uVar4) {
      FUN_140724ba4(param_1,0,uVar4,4);
      *(uint *)((longlong)param_1 + 0x8c) = uVar6 & 0xffffffe0;
    }
    pvVar3 = *(void **)((longlong)param_1 + 0x80);
    if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
      pvVar3 = param_1;
    }
    if (uVar6 < 0x120) {
      uVar4 = uVar6 >> 3 & 0x3c;
    }
    else {
      uVar4 = uVar4 << 2;
    }
    memset(pvVar3,0,(ulonglong)uVar4);
    iVar5 = *(int *)((longlong)param_1 + 0x88);
    iVar1 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    if (iVar5 % 0x20 != 0) {
      pvVar3 = *(void **)((longlong)param_1 + 0x80);
      if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
        pvVar3 = param_1;
      }
      bVar2 = -(char)(iVar5 % 0x20);
      *(uint *)((longlong)pvVar3 + (longlong)(iVar1 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar3 + (longlong)(iVar1 >> 5) * 4) << (bVar2 & 0x1f)) >>
           (bVar2 & 0x1f);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  return;
}



// FUNCTION 1415870b2 FUN_1415870b2 body=471 status=ok
// SIG undefined FUN_1415870b2(void)

void FUN_1415870b2(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < param_2) goto LAB_14158721c;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0x80;
  uStack_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_b0 = &PTR_FUN_14a46be50;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x7fffffff;
  local_34 = 0;
  lVar1 = param_1 + (ulonglong)param_2 * 0x90;
  if ((undefined ***)(lVar1 + 0x20) == &local_b0) {
LAB_141587194:
    *(undefined1 *)(lVar1 + 0x9c) = 0;
    *(undefined4 *)(lVar1 + 0x98) = 0x7fffffff;
  }
  else {
    *(undefined4 *)(lVar1 + 0x90) = 0;
    if (*(int *)(lVar1 + 0x94) == 0) goto LAB_141587194;
    FUN_140a3dae8(param_1 + (ulonglong)param_2 * 0x90 + 0x88,0);
    *(undefined1 *)(lVar1 + 0x9c) = local_34;
    *(undefined4 *)(lVar1 + 0x98) = local_38;
    local_b0 = &PTR_FUN_14a46be50;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  local_b0 = &PTR_FUN_14a177080;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_a0 >> 0x20;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_14472eb64(&local_a8,0);
  }
  uStack_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    FUN_1446efbd8(local_98,0);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar1 + 0x98) = *(undefined4 *)(param_1 + 0xc);
LAB_14158721c:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158728a FUN_14158728a body=590 status=ok
// SIG undefined FUN_14158728a(void)

undefined8 * FUN_14158728a(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b472fe0;
  param_1[5] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 6));
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 10;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  bVar3 = *(byte *)((longlong)param_1 + 0xda) & 0x80;
  *(byte *)((longlong)param_1 + 0xda) = bVar3 + 8;
  *(undefined1 *)((longlong)param_1 + 0xdb) = 1;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = &PTR_FUN_14a1b6cf0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    *(byte *)((longlong)param_1 + 0xda) = bVar3 | 0xb;
    *(undefined2 *)(param_1 + 0x1b) = 0x505;
    FUN_1446efa72(param_1 + 0x1f,0,3,0x10);
    *(undefined4 *)(param_1 + 0x20) = 3;
    puVar2 = (undefined8 *)param_1[0x1f];
    *puVar2 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar2[2] = lVar4;
    *puVar2 = &PTR_FUN_14b478380;
    puVar2[3] = 0;
    iVar6 = 0;
    if (param_1 != (undefined8 *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(puVar2 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = FUN_140324500;
  }
  return param_1;
}



// FUNCTION 1415874d8 FUN_1415874d8 body=139 status=ok
// SIG undefined FUN_1415874d8(void)

/* WARNING: Removing unreachable block (ram,0x000141587504) */
/* WARNING: Removing unreachable block (ram,0x00014158751a) */
/* WARNING: Removing unreachable block (ram,0x000141587522) */

void FUN_1415874d8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0x7f;
  *(undefined1 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0x7f;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0x7f;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x53) = 0x7f;
  lVar1 = 0xc;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1) = DAT_14c84635c;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x4c);
  return;
}



// FUNCTION 141587564 FUN_141587564 body=434 status=ok
// SIG undefined FUN_141587564(void)

undefined * FUN_141587564(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6ba60) {
    FUN_144b3d300(&DAT_14ca6ba60);
    if (DAT_14ca6ba60 == -1) {
      FUN_145ee1698(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"VoxelizeVolumePass";
      local_78 = L"FVoxelizeVolumePassUniformParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6b9e0,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310b262);
      _Init_thread_footer(&DAT_14ca6ba60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca6b9e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141587717 FUN_141587717 body=207 status=ok
// SIG undefined FUN_141587717(void)

longlong FUN_141587717(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
LAB_141587763:
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) * 2;
    uVar2 = 0;
    do {
      if (puVar5[uVar2] == 0x2e) {
        if ((int)uVar2 != -1) {
          FUN_145825fe6(param_1,uVar2 & 0xffffffff,0);
          if (*(int *)(param_1 + 1) == 0) goto LAB_141587763;
          puVar5 = (undefined2 *)*param_1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + -2;
    } while (lVar3 != 0);
  }
  lVar3 = FUN_140277851(0,puVar5);
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    lVar3 = FUN_1402791b4(0,puVar5,param_2,0,0);
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_1447f71cc(lVar4,0x40000000);
  return lVar3;
}



// FUNCTION 1415877e6 FUN_1415877e6 body=386 status=ok
// SIG undefined FUN_1415877e6(void)

longlong * FUN_1415877e6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1415878f7:
    *puVar5 = &PTR_LAB_14b4edb80;
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
    *puVar5 = &PTR_FUN_14b4ecdc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1415878f7;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4edb80;
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
    *puVar5 = &PTR_FUN_14b4ecdc0;
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



// FUNCTION 141587968 FUN_141587968 body=499 status=ok
// SIG undefined FUN_141587968(void)

void FUN_141587968(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1415bf0d0(&local_40);
  if (local_40 == (longlong *)0x0) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if ((int)param_2[1] != 0) {
      plVar4 = (longlong *)*param_2;
      if (plVar4 == (longlong *)0x0) goto LAB_141587a8d;
      (**(code **)(*plVar4 + 0x60))(plVar4,*(int *)(param_1 + 0x50) != 2,1);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
      FUN_143f1f5be(param_1 + 0x40,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar6 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar3 + lVar6) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
    FUN_143f1f6c4(lVar3 + lVar6,param_2);
    plVar4 = local_40;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_60 = FUN_145e0af84;
      local_58 = 0;
      FUN_14657fa48(&local_50,param_1);
      (**(code **)(*plVar4 + 0x70))(plVar4,&local_60,&local_50);
      *(code **)(param_1 + 0x30) = local_60;
      if (local_48 == 0) {
LAB_141587b2e:
        if (local_50 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48 = 0;
        goto LAB_141587b2e;
      }
      (**(code **)(*local_40 + 0x90))();
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  puVar5 = (undefined8 *)*param_2;
  if ((int)param_2[1] != 0) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_141587a8d;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
    puVar5 = (undefined8 *)*param_2;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141587a8d:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141587b5c FUN_141587b5c body=289 status=ok
// SIG undefined FUN_141587b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141587b5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee098) {
    FUN_144b3d300(&DAT_14c9ee098);
    if (DAT_14c9ee098 == -1) {
      FUN_141587c7e();
      FUN_145ee50d2();
      FUN_140db5666(&DAT_14c9edff0,0,&DAT_14c9edf88,L"FMeshSDFObjectCullPS",
                    L"/Engine/Private/Lumen/LumenMeshSDFCulling.usf",L"MeshSDFObjectCullPS",3,0x18,
                    FUN_1471ded44,FUN_1471dece4,&LAB_141767f8e,&LAB_1471dece0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0780);
      _DAT_14c9edff0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25b17);
      _Init_thread_footer(&DAT_14c9ee098);
    }
  }
  return &DAT_14c9edff0;
}



// FUNCTION 141587c7e FUN_141587c7e body=258 status=ok
// SIG undefined FUN_141587c7e(void)

void FUN_141587c7e(void)

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
              0x110) < DAT_14c9f0800) {
    FUN_144b3d300(&DAT_14c9f0800);
    if (DAT_14c9f0800 == -1) {
      FUN_141587d82(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0xbc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0780,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262b3);
      _Init_thread_footer(&DAT_14c9f0800);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141587d82 FUN_141587d82 body=226 status=ok
// SIG undefined FUN_141587d82(void)

longlong * FUN_141587d82(longlong *param_1)

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
  pcVar13 = FUN_1462d880a;
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



// FUNCTION 141587e66 FUN_141587e66 body=226 status=ok
// SIG undefined FUN_141587e66(void)

longlong * FUN_141587e66(longlong *param_1)

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
  pcVar13 = FUN_146463bc0;
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



// FUNCTION 141587f4a FUN_141587f4a body=226 status=ok
// SIG undefined FUN_141587f4a(void)

longlong * FUN_141587f4a(longlong *param_1)

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
  pcVar13 = FUN_146463ef0;
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



// FUNCTION 14158802e FUN_14158802e body=638 status=ok
// SIG undefined FUN_14158802e(void)

ulonglong FUN_14158802e(longlong param_1,char param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  uint uVar5;
  undefined8 unaff_R12;
  undefined7 uVar6;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  char local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong local_80;
  LPCRITICAL_SECTION local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8d = param_2;
  local_8c = param_4;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  *(LPCRITICAL_SECTION *)(param_1 + 0xa8) = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(uint *)(param_1 + 0x94) != param_3) {
    FUN_1458783ec(param_1 + 0x88,param_3);
  }
  FUN_14587839e(param_1 + 0x10,0);
  *(undefined4 *)(param_1 + 8) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x80) = 0;
  UNLOCK();
  uVar6 = (undefined7)((ulonglong)unaff_R12 >> 8);
  if (param_3 == 0) {
    bVar2 = true;
  }
  else {
    local_88 = (longlong *)(param_1 + 0x98);
    bVar2 = true;
    uVar5 = 1;
    local_80 = param_1 + 0x88;
    local_78 = lpCriticalSection;
    do {
      plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = (longlong)&PTR_FUN_149e168d0;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      FUN_140002266(&local_70,L"%s #%d",param_6,uVar5 - 1);
      local_98 = &DAT_149dfb77a;
      if (local_68 != 0) {
        local_98 = local_70;
      }
      if (local_8d == '\0') {
        cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,local_8c,param_5);
      }
      else {
        cVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1,local_8c,param_5);
      }
      if (cVar3 == '\0') {
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,1);
        }
        uVar6 = 0;
        bVar2 = false;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
          FUN_14626a04a(local_80,iVar1);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = plVar4;
        iVar1 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
          FUN_14626a04a(local_88,iVar1);
        }
        *(longlong **)(*local_88 + (longlong)iVar1 * 8) = plVar4;
      }
      FUN_14275d8c2(&local_70);
      lpCriticalSection = local_78;
    } while ((uVar5 < param_3) && (uVar5 = uVar5 + 1, bVar2));
    if (bVar2 == false) {
      FUN_141286922(param_1);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar2) & 0xffffffff;
}



// FUNCTION 1415882ae FUN_1415882ae body=226 status=ok
// SIG undefined FUN_1415882ae(void)

longlong * FUN_1415882ae(longlong *param_1)

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
  pcVar13 = FUN_146462d82;
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



// FUNCTION 141588392 FUN_141588392 body=667 status=ok
// SIG undefined FUN_141588392(void)

void FUN_141588392(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_141588405;
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
LAB_141588405:
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
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
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



// FUNCTION 14158862e FUN_14158862e body=289 status=ok
// SIG undefined FUN_14158862e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158862e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6e78) {
    FUN_144b3d300(&DAT_14c9c6e78);
    if (DAT_14c9c6e78 == -1) {
      FUN_141588750();
      FUN_145ee8268();
      FUN_140db5666(&DAT_14c9c6dd0,0,&DAT_14c9c6d68,L"FShadowObjectCullVS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",L"ShadowObjectCullVS",0,2,
                    FUN_14714f3ba,FUN_14714f35a,&LAB_14714f342,&LAB_14714f33e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8a70);
      _DAT_14c9c6dd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be00fd);
      _Init_thread_footer(&DAT_14c9c6e78);
    }
  }
  return &DAT_14c9c6dd0;
}



// FUNCTION 141588750 FUN_141588750 body=258 status=ok
// SIG undefined FUN_141588750(void)

void FUN_141588750(void)

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
              0x110) < DAT_14c9c8af0) {
    FUN_144b3d300(&DAT_14c9c8af0);
    if (DAT_14c9c8af0 == -1) {
      FUN_145ee83b2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0xce;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8a70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be772a);
      _Init_thread_footer(&DAT_14c9c8af0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141588854 FUN_141588854 body=289 status=ok
// SIG undefined FUN_141588854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141588854(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c71f0) {
    FUN_144b3d300(&DAT_14c9c71f0);
    if (DAT_14c9c71f0 == -1) {
      FUN_141588976();
      FUN_145ee8638();
      FUN_140db5666(&DAT_14c9c7148,0,&DAT_14c9c70e0,L"FDistanceFieldShadowingUpsamplePS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",
                    L"DistanceFieldShadowingUpsamplePS",3,2,FUN_14714f670,FUN_14714f610,
                    &LAB_14714f5f8,&LAB_14714f5f4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8c90)
      ;
      _DAT_14c9c7148 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be0173);
      _Init_thread_footer(&DAT_14c9c71f0);
    }
  }
  return &DAT_14c9c7148;
}



// FUNCTION 141588976 FUN_141588976 body=258 status=ok
// SIG undefined FUN_141588976(void)

void FUN_141588976(void)

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
              0x110) < DAT_14c9c8d10) {
    FUN_144b3d300(&DAT_14c9c8d10);
    if (DAT_14c9c8d10 == -1) {
      FUN_145ee8782(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x18a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8c90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7766);
      _Init_thread_footer(&DAT_14c9c8d10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141588a7a FUN_141588a7a body=226 status=ok
// SIG undefined FUN_141588a7a(void)

longlong * FUN_141588a7a(longlong *param_1)

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
  pcVar13 = FUN_1462f14da;
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



// FUNCTION 141588b5e FUN_141588b5e body=226 status=ok
// SIG undefined FUN_141588b5e(void)

longlong * FUN_141588b5e(longlong *param_1)

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
  pcVar13 = FUN_146463ab0;
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



// FUNCTION 141588c42 FUN_141588c42 body=226 status=ok
// SIG undefined FUN_141588c42(void)

longlong * FUN_141588c42(longlong *param_1)

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
  pcVar13 = FUN_146463d58;
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



// FUNCTION 141588d26 FUN_141588d26 body=1806 status=ok
// SIG undefined FUN_141588d26(void)

void FUN_141588d26(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98 [8];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    puVar1 = (uint *)(param_1 + 2);
    uVar4 = *puVar1;
    if ((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 != 0)) &&
       ((*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_1 + 0x14) &&
        ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0x800000000;
      puVar10 = (undefined8 *)*param_1;
      uVar8 = 0;
      if ((longlong)(int)param_1[1] != 0) {
        local_e8 = puVar10 + (longlong)(int)param_1[1] * 0xf;
        do {
          uVar2 = local_50;
          lVar9 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            FUN_146276acc(local_98,uVar2 & 0xffffffff);
          }
          puVar7 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            puVar7 = local_98;
          }
          puVar7[lVar9] = *puVar10;
          lVar9 = puVar10[2];
          if (lVar9 == 0) {
            uVar6 = FUN_145d84a5c();
            lVar9 = FUN_14477b664(uVar6);
            puVar10[2] = lVar9;
          }
          plVar11 = puVar10 + 1;
          lVar14 = puVar10[3];
          local_108 = puVar10;
          if (lVar14 == 0) {
            if ((lVar9 != 0) && (*plVar11 != 0)) {
              plVar13 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar13 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
                local_108[3] = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13);
                lVar14 = FUN_144aff482(uVar6,plVar11);
                local_108[3] = lVar14;
                if (lVar14 != 0) {
                  lVar9 = local_108[2];
                  goto LAB_141588f01;
                }
              }
            }
          }
          else {
LAB_141588f01:
            puVar10 = local_108;
            if (lVar9 == 0) {
              uVar6 = FUN_145d84a5c();
              lVar9 = FUN_14477b664(uVar6);
              puVar10[2] = lVar9;
              lVar14 = puVar10[3];
              if (((lVar14 == 0) && (lVar14 = 0, puVar10 = local_108, lVar9 != 0)) &&
                 (*plVar11 != 0)) {
                plVar13 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar13 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
                  lVar14 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13);
                  lVar14 = FUN_144aff482(uVar6,plVar11);
                }
                local_108[3] = lVar14;
                puVar10 = local_108;
              }
            }
            lVar9 = lVar14 + 0x60;
            local_b8 = 0x100000000;
            local_a8._0_4_ = 0xffffffff;
            local_a8._4_4_ = 0;
            uStack_a0 = 0;
            iVar12 = 0;
            lStack_b0 = lVar9;
            if (*(int *)(lVar14 + 0x78) != 0) {
              FUN_1449c0562(&local_b8);
              iVar12 = *(int *)(lVar14 + 0x78);
            }
            plVar13 = (longlong *)(lVar14 + 0x50);
            local_c8._0_4_ = (uint)local_a8;
            local_c8._4_4_ = local_a8._4_4_;
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
            local_d8 = local_b8;
            lStack_d0 = lStack_b0;
            local_e0 = plVar13;
            if ((local_a8._4_4_ != iVar12) || (lStack_b0 != lVar9)) {
              do {
                do {
                  local_f8 = *local_e0;
                  local_100 = (longlong)local_c8._4_4_ * 0x38;
                  local_f0 = plVar11;
                  uVar6 = FUN_14479d2ce(puVar1);
                  FUN_14016d8b0(uVar6,*(undefined8 *)(local_f8 + local_100),0);
                  local_c8._0_4_ = (uint)local_c8 & ~local_d8._4_4_;
                  FUN_1449c0562(&local_d8);
                  plVar11 = local_f0;
                } while (local_c8._4_4_ != iVar12);
              } while ((lStack_d0 != lVar9) || (local_e0 != plVar13));
            }
            lVar9 = puVar10[2];
            if (lVar9 == 0) {
              uVar6 = FUN_145d84a5c();
              lVar9 = FUN_14477b664(uVar6);
              puVar10[2] = lVar9;
            }
            lVar14 = puVar10[3];
            if (lVar14 == 0) {
              if (lVar9 == 0) {
                lVar14 = 0;
              }
              else {
                lVar14 = 0;
                if (*plVar11 != 0) {
                  plVar13 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar13 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
                    lVar14 = 0;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13);
                    lVar14 = FUN_144aff482(uVar6,plVar11);
                  }
                  local_108[3] = lVar14;
                }
              }
            }
            lVar9 = lVar14 + 0xb0;
            local_b8 = 0x100000000;
            local_a8 = 0xffffffff;
            uStack_a0 = 0;
            lStack_b0 = lVar9;
            if (*(int *)(lVar14 + 200) == 0) {
              iVar12 = 0;
            }
            else {
              FUN_1449c0562(&local_b8);
              iVar12 = *(int *)(lVar14 + 200);
            }
            plVar11 = (longlong *)(lVar14 + 0xa0);
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
            local_c8 = local_a8;
            uVar6 = local_c8;
            local_d8 = local_b8;
            lStack_d0 = lStack_b0;
            local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
            iVar5 = local_c8._4_4_;
            local_e0 = plVar11;
            if ((local_c8._4_4_ != iVar12) || (local_c8 = uVar6, lStack_b0 != lVar9)) {
              do {
                local_c8 = uVar6;
                lVar14 = *local_e0;
                uVar6 = FUN_14479d2ce(puVar1);
                FUN_14472da24(uVar6,*(undefined8 *)(lVar14 + (longlong)iVar5 * 0xc0),0);
                local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
                FUN_1449c0562(&local_d8);
                iVar5 = local_c8._4_4_;
                uVar6 = local_c8;
              } while (local_e0 != plVar11 || (lStack_d0 != lVar9 || local_c8._4_4_ != iVar12));
            }
          }
          puVar10 = local_108 + 0xf;
        } while (puVar10 != local_e8);
        uVar8 = (undefined4)param_1[1];
        puVar10 = (undefined8 *)*param_1;
      }
      FUN_140e91ad4(puVar10,uVar8);
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FUN_145eea92e(param_1);
      }
      lVar9 = FUN_14479d2ce(param_1 + 3);
      if (lVar9 != 0) {
        puVar10 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          puVar10 = local_98;
        }
        if ((longlong)(int)local_50 != 0) {
          lVar14 = (longlong)(int)local_50 << 3;
          do {
            puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            *puVar7 = &PTR_FUN_14b477720;
            puVar7[1] = *puVar10;
            FUN_14039144e(lVar9,puVar7);
            FUN_141165eb6(param_1 + 8,puVar10);
            puVar10 = puVar10 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        if ((int)param_1[1] == 0) {
          *(undefined1 *)(param_1 + 4) = 0;
          FUN_1447f69b6(param_1 + 0x11);
        }
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141589436 FUN_141589436 body=108 status=ok
// SIG undefined FUN_141589436(void)

undefined * FUN_141589436(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd878) {
    FUN_144b3d300(&DAT_14cacd878);
    if (DAT_14cacd878 == -1) {
      FUN_145eeaff8(&DAT_14cacd7f8);
      atexit((_func_5014 *)&LAB_1433f7028);
      _Init_thread_footer(&DAT_14cacd878);
    }
  }
  return &DAT_14cacd7f8;
}



// FUNCTION 1415894a2 FUN_1415894a2 body=827 status=ok
// SIG undefined FUN_1415894a2(void)

undefined8 FUN_1415894a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  ulonglong local_48;
  longlong *local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = param_1 + 9;
  local_58 = &DAT_14c872ce8;
  cVar7 = FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystem",L"MaxLocalTalkers",puVar1);
  if (cVar7 == '\0') {
    *(undefined4 *)puVar1 = 1;
  }
  puVar2 = (undefined4 *)((longlong)param_1 + 0x4c);
  local_58 = &DAT_14c872ce8;
  cVar7 = FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystem",L"MaxRemoteTalkers",puVar2);
  if (cVar7 == '\0') {
    *puVar2 = 0x10;
  }
  local_58 = &DAT_14c872ce8;
  cVar7 = FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystem",L"VoiceNotificationDelta",param_1 + 0x12);
  if (cVar7 == '\0') {
    *(undefined4 *)(param_1 + 0x12) = 0x3e4ccccd;
  }
  local_31 = '\0';
  local_58 = &DAT_14c872ce8;
  cVar7 = FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystem",L"bHasVoiceEnabled");
  if ((cVar7 != '\0') && (local_31 == '\x01')) {
    plVar4 = (longlong *)param_1[4];
    if (plVar4 == (longlong *)0x0) {
LAB_141589652:
      cVar7 = '\0';
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      plVar4 = local_40;
      param_1[5] = local_48;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      (**(code **)(*(longlong *)param_1[4] + 0x80))((longlong *)param_1[4],&local_48);
      plVar4 = local_40;
      param_1[6] = local_48;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if ((param_1[5] == 0) || (param_1[6] == 0)) goto LAB_141589652;
      cVar7 = (**(code **)(*(longlong *)param_1[4] + 0x120))();
      if (cVar7 == '\0') {
        (**(code **)*param_1)(param_1,&local_48);
        plVar4 = local_40;
        if (param_1 + 7 != &local_48) {
          param_1[7] = local_48;
          local_48 = 0;
          plVar5 = (longlong *)param_1[8];
          if (local_40 != plVar5) {
            local_40 = (longlong *)0x0;
            param_1[8] = plVar4;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
        }
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        puVar6 = (undefined8 *)param_1[7];
        cVar7 = (**(code **)*puVar6)(puVar6,*(undefined4 *)puVar1,*puVar2);
      }
      else {
        *(undefined4 *)puVar1 = 0;
        *puVar2 = 0;
        cVar7 = '\x01';
      }
    }
    local_48 = (local_48 >> 0x10 & 0xffff) << 0x10;
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffffffff0000);
    FUN_148a52fa2(param_1 + 10,&local_48,*(undefined4 *)(param_1 + 9));
    FUN_148a52f5c(param_1 + 0xc,*(undefined4 *)((longlong)param_1 + 0x4c));
    uVar8 = 1;
    if (cVar7 != '\0') goto LAB_14158958f;
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != 0) {
      FUN_148a56dc2(param_1 + 10,0);
    }
    FUN_145eec44c(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      FUN_148a56e32(param_1 + 0xc,0);
    }
    param_1[7] = 0;
    plVar4 = (longlong *)param_1[8];
    if (plVar4 != (longlong *)0x0) {
      param_1[8] = 0;
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  uVar8 = 0;
LAB_14158958f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415897de FUN_1415897de body=648 status=ok
// SIG undefined FUN_1415897de(void)

void FUN_1415897de(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x1a48) != 0) {
    FUN_1446efa72(param_1 + 0x1a48,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 0x1a50);
  if (uVar5 != 0) {
    lVar1 = param_1 + 0x1848;
    FUN_145eec79a(lVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        lVar6 = *(longlong *)(param_1 + 0x1a48);
        if (*(longlong *)(param_1 + 0x1a48) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x1a50) + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 0x1810;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (*(int *)(param_1 + 0x1838) == 0) {
      uVar7 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_144a844ac(&local_58);
      uVar7 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar10 = local_48._4_4_;
    iVar8 = local_40;
    if (local_48._4_4_ < *(int *)(local_50 + 0x28)) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x1800);
        if (*(longlong *)(param_1 + 0x1800) == 0) {
          lVar6 = param_1;
        }
        lVar9 = (longlong)iVar10;
        uVar13 = *(ulonglong *)(lVar6 + lVar9 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)*(int *)(param_1 + 0x1a50) - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar6 + 0x14 + lVar9 * 0x18) = iVar12;
        lVar11 = *(longlong *)(param_1 + 0x1a48);
        if (*(longlong *)(param_1 + 0x1a48) == 0) {
          lVar11 = lVar1;
        }
        *(undefined4 *)(lVar6 + 0x10 + lVar9 * 0x18) =
             *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x1a50) - 1U & uVar13) * 4);
        lVar6 = *(longlong *)(param_1 + 0x1a48);
        if (*(longlong *)(param_1 + 0x1a48) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar12 & (longlong)*(int *)(param_1 + 0x1a50) - 1U) * 4) =
             iVar10;
        uVar5 = ~(uint)uVar7 & uVar5;
        lVar6 = *(longlong *)(local_50 + 0x20);
        if (*(longlong *)(local_50 + 0x20) == 0) {
          lVar6 = local_50;
        }
        iVar12 = *(int *)(local_50 + 0x28);
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)(lVar6 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar10 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar10 = iVar12 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar2 = iVar10;
          if (iVar10 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar10 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar3 = *(uint *)(lVar6 + lVar11 * 4 + 4 + lVar9 * 4);
            if (uVar3 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar2 - lVar11 == lVar9) goto LAB_141589a12;
          }
          iVar4 = iVar4 + (int)lVar9 + 1;
          uVar5 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar7 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar10 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar12);
    }
  }
LAB_141589a12:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141589a68 FUN_141589a68 body=386 status=ok
// SIG undefined FUN_141589a68(void)

void FUN_141589a68(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8c340;
  param_1[4] = &PTR_FUN_14ac8c360;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3a5d8(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3a5d8(param_1 + 0x1c);
  FUN_14032314d(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_14032314d(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14032314d(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1413495c2(param_1 + 0x12);
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141589bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141589bea FUN_141589bea body=226 status=ok
// SIG undefined FUN_141589bea(void)

longlong * FUN_141589bea(longlong *param_1)

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
  pcVar13 = FUN_14676307a;
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



// FUNCTION 141589cce FUN_141589cce body=84 status=ok
// SIG undefined FUN_141589cce(void)

void FUN_141589cce(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      plVar2 = (longlong *)FUN_1459a1b72();
      if (plVar2 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
        if (lVar1 != 0) {
          FUN_143f25ec2(lVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141589d22 FUN_141589d22 body=253 status=ok
// SIG undefined FUN_141589d22(void)

void FUN_141589d22(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1465864c4(param_1,&local_30,param_2);
  if (local_30 != 0) {
    FUN_1465803e2(local_30 + 0xb0,local_34,param_3,0);
    cVar3 = FUN_14101d5a6(param_1);
    if (cVar3 != '\0') {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
        lVar4 = FUN_141030f66();
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
          FUN_145ebf3fc(*(longlong *)(lVar4 + 0x30),param_3,DAT_14cb978e0);
        }
      }
      if (*(char *)(local_30 + 0x100) == '\x01') {
        FUN_1414df638(param_1,param_3);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141589e20 FUN_141589e20 body=186 status=ok
// SIG undefined FUN_141589e20(void)

undefined2 * FUN_141589e20(longlong param_1,undefined2 *param_2,ushort *param_3,longlong *param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  uVar2 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar4 != 0) && (*(uint *)(lVar4 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar4 + 4)) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar4 + 2) * 8);
        } while (-1 < *(short *)(lVar4 + 4));
        if (lVar4 == 0) goto LAB_141589ec6;
      }
      if (*(longlong *)(lVar4 + 0x110) != *param_4) {
        *(longlong *)(lVar4 + 0x110) = *param_4;
        FUN_1414f506e(param_1,lVar4);
        FUN_141323fc0(param_1,lVar4,0x1000);
        FUN_141323fc0(param_1,lVar4,0x20);
      }
      uVar2 = *(undefined2 *)(lVar4 + 2);
      uVar3 = *(undefined2 *)(lVar4 + 8);
      goto LAB_141589ec8;
    }
  }
LAB_141589ec6:
  uVar3 = 0;
LAB_141589ec8:
  *param_2 = uVar2;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 141589eda FUN_141589eda body=606 status=ok
// SIG undefined FUN_141589eda(void)

undefined2 *
FUN_141589eda(longlong param_1,undefined2 *param_2,ushort *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar11 = *param_3;
  uVar4 = 0xffff;
  if ((-1 < (short)uVar11) && ((int)(short)uVar11 < *(int *)(param_1 + 0x10))) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar11 * 8);
    if ((lVar8 != 0) && (*(uint *)(lVar8 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar8 + 4)) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar8 + 2) * 8);
        } while (-1 < *(short *)(lVar8 + 4));
        if (lVar8 == 0) goto LAB_141589ff6;
      }
      if (*(int *)(lVar8 + 200) != *(int *)(lVar8 + 0xf4)) {
        lVar9 = *param_5;
        uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar10 = (uint)lVar9 & 0xffff;
        lVar6 = lVar8 + 0xf8;
        if (*(longlong *)(lVar8 + 0x100) != 0) {
          lVar6 = *(longlong *)(lVar8 + 0x100);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar8 + 0x108) - 1U &
                                 (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar10) +
                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar5 != -1) {
          lVar6 = *(longlong *)(lVar8 + 0xc0);
          do {
            lVar1 = lVar6 + (longlong)iVar5 * 0x20;
            if (*(longlong *)(lVar6 + (longlong)iVar5 * 0x20) == lVar9) {
              plVar13 = (longlong *)(lVar1 + 8);
              if (plVar13 != (longlong *)0x0 && lVar1 != 0) {
                iVar5 = *(int *)(lVar1 + 0x10);
                iVar2 = (int)param_4[1];
                if (iVar5 != iVar2) {
                  if (iVar5 + iVar2 == 1) goto LAB_14158a074;
                  goto LAB_14158a0eb;
                }
                if (iVar5 < 2) goto LAB_14158a074;
                lVar9 = 0;
                goto LAB_14158a0a1;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x18);
          } while (iVar5 != -1);
        }
      }
      local_58 = param_5;
      local_50 = param_4;
      FUN_1406e263c((longlong *)(lVar8 + 0xc0),local_44,&local_58,0);
      goto LAB_14158a058;
    }
  }
LAB_141589ff6:
  uVar7 = 0;
  goto LAB_141589ff8;
LAB_14158a0a1:
  uVar11 = *(ushort *)(*plVar13 + lVar9);
  uVar12 = (ulonglong)uVar11;
  uVar14 = *(ushort *)(*param_4 + lVar9);
  if (uVar11 != uVar14) {
    if ((uVar14 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_14158a0b6;
    }
    if (uVar11 != uVar14) goto LAB_14158a0eb;
    goto LAB_14158a074;
  }
  if (uVar11 == 0) goto LAB_14158a074;
LAB_14158a0b6:
  lVar9 = lVar9 + 2;
  goto LAB_14158a0a1;
LAB_14158a0eb:
  if (plVar13 != param_4) {
    _Src = (void *)*param_4;
    *(int *)(lVar1 + 0x10) = iVar2;
    if (*(int *)(lVar1 + 0x14) == 0 && iVar2 == 0) {
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar13,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar13,_Src,(longlong)iVar2 * 2);
      }
    }
  }
LAB_14158a058:
  FUN_1414f506e(param_1,lVar8);
  FUN_141323fc0(param_1,lVar8,0x20);
LAB_14158a074:
  uVar4 = *(undefined2 *)(lVar8 + 2);
  uVar7 = *(undefined2 *)(lVar8 + 8);
LAB_141589ff8:
  *param_2 = uVar4;
  param_2[1] = uVar7;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14158a13a FUN_14158a13a body=2263 status=ok
// SIG undefined FUN_14158a13a(void)

void FUN_14158a13a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_238 [32];
  uint local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  code **local_1e0;
  undefined1 *local_1d8;
  code *local_1d0;
  int local_1c4;
  longlong local_1c0;
  uint local_1b4;
  byte *local_1b0;
  longlong *local_1a8;
  ulonglong *local_1a0;
  ulonglong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  byte *local_170;
  longlong *local_168;
  byte *local_160;
  longlong *local_158;
  code *local_150;
  code *local_148;
  undefined1 local_140 [16];
  longlong local_130;
  undefined8 *local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar6 = *(longlong **)(param_1 + 0x168);
  local_1c0 = param_1;
  if (plVar6 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_1e0 = &local_148;
      local_148 = FUN_141030f22;
      local_1d0 = FUN_14081d0ea;
      local_1d8 = &LAB_1459f2e4c;
      local_1e8 = &LAB_148c39de3;
      local_1f0 = &LAB_1457a9eb2;
      local_1f8 = &DAT_149e063b2;
      local_200 = 0;
      local_208 = 0x10000004;
      local_210 = 0x10;
      local_218 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) goto LAB_14158a1a0;
  }
  plVar6 = (longlong *)0x0;
LAB_14158a1a0:
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    (**(code **)(*plVar6 + 0x6c8))(plVar6);
    lVar3 = FUN_14011c349();
    if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
      puVar11 = *(ulonglong **)(lVar3 + 0x38);
      puVar17 = puVar11 + (longlong)*(int *)(lVar3 + 0x40) * 3;
      local_178 = plVar6 + 0x1c3;
      if (plVar6 == (longlong *)0x0) {
        local_178 = (longlong *)0x0;
      }
      do {
        local_148 = (code *)*puVar11;
        lVar3 = FUN_140255092(local_1c0,&local_148);
        if (lVar3 != 0) {
          local_180 = lVar3 + 0xd0;
          FUN_146632302();
          local_148 = (code *)*puVar11;
          puVar4 = &DAT_14c9a1308;
          if (*param_2 != 0) {
            puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&local_148);
          }
          pbVar14 = (byte *)*puVar4;
          local_188 = (longlong *)puVar4[1];
          if (local_188 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_188 + 1) = (int)local_188[1] + 1;
            UNLOCK();
          }
          if ((pbVar14 != (byte *)0x0) && ((~*pbVar14 & 3) == 0)) {
            uVar18 = *(int *)(*(longlong *)(pbVar14 + 8) + 0x28) -
                     *(int *)(*(longlong *)(pbVar14 + 8) + 0x54);
            local_158 = (longlong *)CONCAT44(local_158._4_4_,DAT_14cbd06a8);
            local_160 = DAT_14cbd06a0;
            FUN_1448075d0(&local_148,&local_160);
            plVar6 = &DAT_14c9a1288;
            if ((*pbVar14 & 2) != 0) {
              plVar6 = (longlong *)(*(longlong *)(pbVar14 + 8) + 0x18);
            }
            puVar4 = &DAT_14c9a1308;
            if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
              plVar8 = plVar6 + 8;
              if ((longlong *)plVar6[9] != (longlong *)0x0) {
                plVar8 = (longlong *)plVar6[9];
              }
              iVar15 = *(int *)((longlong)plVar8 +
                               (ulonglong)((int)plVar6[10] - 1U & (uint)local_148) * 4);
              puVar4 = &DAT_14c9a1308;
              if (iVar15 != -1) {
                do {
                  lVar12 = *plVar6 + (longlong)iVar15 * 0x40;
                  if (*(uint *)(*plVar6 + (longlong)iVar15 * 0x40) == (uint)local_148) {
                    puVar4 = &DAT_14c9a1308;
                    if (lVar12 == 0) goto LAB_14158a374;
                    puVar7 = (undefined8 *)(lVar12 + 0x28);
                    puVar4 = &DAT_14c9a1308;
                    if ((puVar7 == (undefined8 *)0x0) ||
                       (((byte *)*puVar7 != (byte *)0x0 &&
                        (puVar4 = puVar7, (*(byte *)*puVar7 & 0x40) == 0)))) goto LAB_14158a374;
                    break;
                  }
                  iVar15 = *(int *)(lVar12 + 0x38);
                } while (iVar15 != -1);
                puVar4 = &DAT_14c9a1308;
              }
            }
LAB_14158a374:
            pbVar16 = (byte *)*puVar4;
            local_1a8 = (longlong *)puVar4[1];
            if (local_1a8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
              UNLOCK();
            }
            local_1a0 = puVar11;
            if (local_130 != 0) {
              FUN_1400020a8();
            }
            if (((pbVar16 == (byte *)0x0) || ((*pbVar16 & 3) == 0)) ||
               (uVar18 = uVar18 - 1, (*pbVar16 & 0x6b) != 2)) {
              local_1c4 = 0;
            }
            else {
              local_1c4 = *(int *)(*(longlong *)(pbVar16 + 8) + 0x10);
            }
            uVar10 = 0;
            local_1b0 = pbVar16;
            local_198 = puVar17;
            local_190 = param_2;
            if (0 < (int)uVar18) {
              uVar9 = 0;
              local_1b4 = uVar18;
              do {
                uVar19 = uVar9 + 1;
                local_148 = (code *)(uVar19 << 0x20 | (ulonglong)DAT_14cbd0698);
                puVar4 = (undefined8 *)FUN_1446e60f4(pbVar14,&local_148);
                local_170 = (byte *)*puVar4;
                local_168 = (longlong *)puVar4[1];
                if (local_168 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_168 + 1) = (int)local_168[1] + 1;
                  UNLOCK();
                }
                if ((local_170 != (byte *)0x0) && ((*local_170 & 3) != 0)) {
                  local_218 = CONCAT31(local_218._1_3_,1);
                  FUN_1411fcb00(local_1c0,&local_160,&local_170,lVar3);
                  if ((longlong)(int)local_158 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    lVar12 = (longlong)(int)local_158 * 0xe8;
                    pbVar16 = local_160;
                    do {
                      if (*(char *)(lVar3 + 0x148) == '\x01') {
                        local_208 = *(undefined4 *)(pbVar16 + 0xe0);
                        local_210 = *(undefined4 *)(pbVar16 + 0xdc);
                        local_150 = (code *)CONCAT44(local_150._4_4_,DAT_14c763998);
                        DAT_14c763998 = DAT_14c763998 + 1;
                        local_218._0_1_ = pbVar16[0xd8];
                        FUN_141894808(&local_148,lVar3,&local_150,pbVar16);
                        local_218 = CONCAT31(local_218._1_3_,1);
                        FUN_143d9fb08(lVar3,&local_148,uVar9 & 0xffffffff,local_178);
                        if (local_68 != (undefined8 *)0x0) {
                          (**(code **)*local_68)(local_68,1);
                        }
                        FUN_140368b56(local_140);
                      }
                      pbVar16 = pbVar16 + 0xe8;
                      lVar12 = lVar12 + -0xe8;
                    } while (lVar12 != 0);
                    uVar9 = (ulonglong)local_158 & 0xffffffff;
                  }
                  FUN_1418f00b5(local_160,uVar9);
                  if (local_160 != (byte *)0x0) {
                    FUN_1400020a8();
                  }
                }
                plVar6 = local_168;
                if (local_168 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_168 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)*local_168)(local_168);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                uVar9 = uVar19;
                uVar10 = local_1b4;
              } while (uVar19 != uVar18);
            }
            if (0 < local_1c4) {
              iVar15 = 0;
              pbVar14 = local_1b0;
              do {
                puVar4 = &DAT_14c9a1308;
                if (pbVar14 != (byte *)0x0) {
                  puVar4 = (undefined8 *)FUN_14071eafe(pbVar14,iVar15);
                }
                local_160 = (byte *)*puVar4;
                local_158 = (longlong *)puVar4[1];
                if (local_158 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_158 + 1) = (int)local_158[1] + 1;
                  UNLOCK();
                }
                if ((local_160 == (byte *)0x0) || ((~*local_160 & 3) != 0)) {
                  FUN_1488c5d16(local_180,&local_160);
                }
                else {
                  local_218 = CONCAT31(local_218._1_3_,1);
                  FUN_1411fcb00(local_1c0,&local_170,&local_160,lVar3);
                  if ((longlong)(int)local_168 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    lVar12 = (longlong)(int)local_168 * 0xe8;
                    pbVar14 = local_170;
                    do {
                      uVar18 = 1;
                      if (*(char *)(lVar3 + 0x148) == '\x01') {
                        bVar2 = pbVar14[0xd8];
                        pbVar14[0xd8] = bVar2 & 0xfe;
                        local_210 = *(undefined4 *)(pbVar14 + 0xdc);
                        local_208 = *(undefined4 *)(pbVar14 + 0xe0);
                        local_150 = (code *)CONCAT44(local_150._4_4_,DAT_14c763998);
                        local_218 = CONCAT31(local_218._1_3_,bVar2) & 0xfffffffe;
                        DAT_14c763998 = DAT_14c763998 + 1;
                        FUN_141894808(&local_148,lVar3,&local_150,pbVar14);
                        lVar5 = FUN_1401b2ade(local_1c0);
                        if (lVar5 == 0) {
LAB_14158a71a:
                          lVar5 = 0;
                        }
                        else {
                          if (DAT_14cbadd90 == 0) {
                            local_150 = FUN_141030f22;
                            local_1d0 = FUN_14081d0ea;
                            local_1d8 = &LAB_1459f2e4c;
                            local_1e0 = &local_150;
                            local_1e8 = &LAB_148c39de3;
                            local_1f0 = &LAB_1457a9eb2;
                            local_1f8 = &DAT_149e063b2;
                            local_200 = 0;
                            local_208 = 0x10000004;
                            local_210 = 0x10;
                            local_218 = 0x3de0;
                            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,
                                          FUN_1465e9ab8);
                          }
                          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) <
                               *(int *)(DAT_14cbadd90 + 0x38)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30
                             )) goto LAB_14158a71a;
                        }
                        lVar13 = lVar5 + 0xe18;
                        if (lVar5 == 0) {
                          lVar13 = 0;
                        }
                        local_218 = uVar10;
                        lVar5 = FUN_143d9f6d8(lVar3,&local_148,lVar13,1);
                        if (local_68 != (undefined8 *)0x0) {
                          (**(code **)*local_68)(local_68,1);
                        }
                        uVar18 = (uint)(lVar5 != 0);
                        FUN_140368b56(local_140);
                      }
                      uVar10 = uVar10 + uVar18;
                      pbVar14 = pbVar14 + 0xe8;
                      lVar12 = lVar12 + -0xe8;
                    } while (lVar12 != 0);
                    uVar9 = (ulonglong)local_168 & 0xffffffff;
                  }
                  FUN_1418f00b5(local_170,uVar9);
                  pbVar14 = local_1b0;
                  if (local_170 != (byte *)0x0) {
                    FUN_1400020a8();
                    pbVar14 = local_1b0;
                  }
                }
                plVar6 = local_158;
                if (local_158 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_158 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)*local_158)(local_158);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 != local_1c4);
            }
            param_2 = local_190;
            puVar17 = local_198;
            puVar11 = local_1a0;
            plVar6 = local_1a8;
            if (local_1a8 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_1a8 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*local_1a8)(local_1a8);
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
          plVar6 = local_188;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_188 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_188)(local_188);
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
        puVar11 = puVar11 + 3;
      } while (puVar11 != puVar17);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14158aa12 FUN_14158aa12 body=35 status=ok
// SIG undefined FUN_14158aa12(void)

void FUN_14158aa12(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014158aa31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14158aa36 FUN_14158aa36 body=130 status=ok
// SIG undefined FUN_14158aa36(void)

undefined4
FUN_14158aa36(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_146114c3c(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158aaba FUN_14158aaba body=226 status=ok
// SIG undefined FUN_14158aaba(void)

longlong * FUN_14158aaba(longlong *param_1)

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
  pcVar13 = FUN_1463eff1a;
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



// FUNCTION 14158ab9e FUN_14158ab9e body=371 status=ok
// SIG undefined FUN_14158ab9e(void)

void FUN_14158ab9e(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
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
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6bd52(&local_28,0x1f);
    lVar2 = FUN_145ef25d4();
    local_28 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    local_20 = 2;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6c26c(lVar2,0);
    FUN_140c6bd52(&local_28,0x1f);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158ad12 FUN_14158ad12 body=1269 status=ok
// SIG undefined FUN_14158ad12(void)

void FUN_14158ad12(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  longlong *plVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  uint *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a0 [2];
  undefined8 ***local_98;
  longlong local_90;
  longlong local_88;
  ushort local_80;
  byte local_78;
  undefined8 ***local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ushort local_58;
  undefined6 uStack_56;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar19 = (uint *)(param_1 + 0x218);
  iVar4 = *(int *)(param_1 + 0x230);
  local_e0 = param_2;
  if (iVar4 == 0) {
    uVar21 = 1;
    uVar16 = 0;
    iVar17 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x228);
    if (*(uint **)(param_1 + 0x228) == (uint *)0x0) {
      puVar10 = puVar19;
    }
    uVar20 = *puVar10;
    if (uVar20 == 0) {
      iVar9 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar9 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar21 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar21 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar21 == uVar16) goto LAB_14158adc8;
        iVar17 = iVar17 + 0x20;
        uVar20 = puVar10[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar21 = (ulonglong)(-uVar20 & uVar20);
    uVar2 = uVar21 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar9 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 != iVar4) {
    local_d0 = param_2 + 3;
    uVar20 = 0xffffffff;
    local_d8 = puVar19;
    do {
      lVar18 = *(longlong *)(param_1 + 0x208) + (longlong)iVar9 * 0x48;
      lVar22 = lVar18 + 8;
      bVar3 = *(byte *)(lVar18 + 0x30);
      if (bVar3 - 6 < 2) {
LAB_14158aefc:
        local_c8 = (uint)local_c8._1_3_ << 8;
        local_a0[0] = 0;
        FUN_1456bb102(&local_c8,*local_e0);
        FUN_1447c3578(lVar22,&local_98,&local_c8);
        FUN_140576f62(&local_98,&local_70);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar6 != (code *)0x0) {
          ppppuVar14 = &local_98;
          if (0x18 < local_80) {
            ppppuVar14 = (undefined8 ****)local_98;
          }
          (*pcVar6)(ppppuVar14);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(local_98);
        }
        FUN_1448173f8(local_a0);
        if (((char)local_c8 == '\x03') && (local_b8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
        }
        local_c8 = local_68;
        uStack_c4 = uStack_64;
        uStack_c0 = uStack_60;
        uStack_bc = uStack_5c;
        local_b8 = (longlong *)0x0;
        lVar18 = (longlong)(int)local_50;
        _Src = (void *)CONCAT62(uStack_56,local_58);
        local_b0 = local_50;
        if (lVar18 == 0) {
          local_ac = 0;
        }
        else {
          FUN_1446dd670(&local_b8,local_50,0);
          memcpy(local_b8,_Src,lVar18 * 2);
        }
        if (CONCAT44(uStack_c4,local_c8) != 0) {
          FUN_144a6c37a(local_d0,&local_c8);
        }
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        puVar19 = local_d8;
        if (CONCAT62(uStack_56,local_58) != 0) {
          FUN_1400020a8();
          puVar19 = local_d8;
        }
      }
      else {
        if (bVar3 != 0x1d) {
          if (bVar3 != 0x1c) goto LAB_14158ae47;
          goto LAB_14158aefc;
        }
        local_c8 = (uint)local_c8._1_3_ << 8;
        local_a0[0] = 0;
        FUN_1456bb102(&local_c8,*local_e0);
        FUN_1447c3578(lVar22,&local_70,&local_c8);
        FUN_1411a0e4c(&local_70,&local_98);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_50 & 0xff) * 0x120));
        if (pcVar6 != (code *)0x0) {
          ppppuVar14 = &local_70;
          if (0x18 < local_58) {
            ppppuVar14 = (undefined8 ****)local_70;
          }
          (*pcVar6)(ppppuVar14);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70);
        }
        FUN_1448173f8(local_a0);
        if (((char)local_c8 == '\x03') && (local_b8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
        }
        if (local_88 == 0) {
          puVar19 = local_d8;
          if (((((undefined8 ****)local_98 != (undefined8 ****)0x0) && (local_90 != 0)) &&
              (plVar7 = *(longlong **)(local_90 + 0xb8), plVar7 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar7 + 0x108))(plVar7), puVar19 = local_d8, cVar8 != '\0')) {
            uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
            local_88 = FUN_144aff482(uVar11,&local_98);
            puVar19 = local_d8;
            if (local_88 != 0) goto LAB_14158b171;
          }
        }
        else {
LAB_14158b171:
          lVar18 = local_88;
          uVar11 = FUN_14050fd64();
          local_e8 = 0;
          FUN_14088df30(uVar11,&local_c8,lVar18,0);
          FUN_14885e6de(local_e0,&local_c8);
          puVar19 = local_d8;
        }
      }
LAB_14158ae47:
      uVar20 = uVar20 & ~(uint)uVar21;
      puVar10 = *(uint **)(param_1 + 0x228);
      if (*(uint **)(param_1 + 0x228) == (uint *)0x0) {
        puVar10 = puVar19;
      }
      iVar5 = *(int *)(param_1 + 0x230);
      iVar9 = (int)uVar16;
      lVar18 = (longlong)iVar9;
      uVar15 = puVar10[lVar18] & uVar20;
      if (uVar15 == 0) {
        iVar12 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar12 = iVar5 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar9 < iVar12) {
          lVar22 = 0;
          do {
            uVar15 = puVar10[lVar18 + lVar22 + 1];
            if (uVar15 != 0) {
              uVar16 = (ulonglong)(iVar9 + (int)lVar22 + 1);
              uVar20 = 0xffffffff;
              goto LAB_14158aec9;
            }
            iVar17 = iVar17 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar13 - lVar18 != lVar22);
          uVar20 = 0xffffffff;
          iVar9 = iVar13;
        }
        uVar16 = (ulonglong)(iVar9 + 1);
        puVar19 = local_d8;
        iVar9 = iVar5;
      }
      else {
LAB_14158aec9:
        uVar21 = (ulonglong)(-uVar15 & uVar15);
        uVar2 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
    } while (iVar9 != iVar4);
  }
LAB_14158adc8:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14158b208 FUN_14158b208 body=425 status=ok
// SIG undefined FUN_14158b208(void)

undefined * FUN_14158b208(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f8690) {
    FUN_144b3d300(&DAT_14c9f8690);
    if (DAT_14c9f8690 == -1) {
      FUN_145ef303e(local_20);
      local_38 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LumenCardOutputs";
      local_78 = L"FLumenCardOutputs";
      local_30 = 8;
      local_40 = 0;
      local_50 = 0x20;
      local_58 = 0x6c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f8610,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d650ae);
      _Init_thread_footer(&DAT_14c9f8690);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f8610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


