// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14351b8f0 FUN_14351b8f0 body=25 status=ok
// SIG undefined FUN_14351b8f0(void)

void FUN_14351b8f0(void)

{
  FUN_145dfcb38();
  FUN_14170c56a(&DAT_14cade2b8);
  return;
}



// FUNCTION 14351b90a FUN_14351b90a body=1113 status=ok
// SIG undefined FUN_14351b90a(void)

void FUN_14351b90a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"DefaultGeometryCacheVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x20;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_14351ba9f:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14351ba9f;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x20);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar7 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar7 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x3f800000;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10d00;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_14351bcd5;
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
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_14351bcd5:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14351bd64 FUN_14351bd64 body=1113 status=ok
// SIG undefined FUN_14351bd64(void)

void FUN_14351bd64(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"DummyTangentBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x20;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_14351bef9:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14351bef9;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x20);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar7 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar7 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x3f800000;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x13d00;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_14351c12f;
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
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_14351c12f:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14351c1be FUN_14351c1be body=25 status=ok
// SIG undefined FUN_14351c1be(void)

void FUN_14351c1be(void)

{
  FUN_14610ce32();
  FUN_14170c56a(&DAT_14cade3d8);
  return;
}



// FUNCTION 14351c1d8 FUN_14351c1d8 body=363 status=ok
// SIG undefined FUN_14351c1d8(void)

void FUN_14351c1d8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14351c26e;
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
LAB_14351c26e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14351c344 FUN_14351c344 body=389 status=ok
// SIG undefined FUN_14351c344(void)

ulonglong FUN_14351c344(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0xc)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0xc;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0xaaa) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0xffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14351c3f4;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0xffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,4);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14351c3f4:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0xc;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0xc,4);
    }
  }
  return uVar6;
}



// FUNCTION 14351c4ca FUN_14351c4ca body=363 status=ok
// SIG undefined FUN_14351c4ca(void)

void FUN_14351c4ca(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14351c560;
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
LAB_14351c560:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14351c636 FUN_14351c636 body=389 status=ok
// SIG undefined FUN_14351c636(void)

ulonglong FUN_14351c636(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0xc)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0xc;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0xaaa) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0xffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14351c6e6;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0xffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,4);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14351c6e6:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0xc;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0xc,4);
    }
  }
  return uVar6;
}



// FUNCTION 14351c7d4 FUN_14351c7d4 body=51 status=ok
// SIG undefined FUN_14351c7d4(void)

void FUN_14351c7d4(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014351c804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14351c812 FUN_14351c812 body=29 status=ok
// SIG undefined FUN_14351c812(void)

void FUN_14351c812(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14351c830 FUN_14351c830 body=71 status=ok
// SIG undefined FUN_14351c830(void)

undefined8 * FUN_14351c830(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a915400;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14351c89e FUN_14351c89e body=282 status=ok
// SIG undefined FUN_14351c89e(void)

undefined8 * FUN_14351c89e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14351c877);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14351c9b8 FUN_14351c9b8 body=148 status=ok
// SIG undefined FUN_14351c9b8(void)

void FUN_14351c9b8(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014351ca40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14351ca8a FUN_14351ca8a body=5 status=ok
// SIG undefined FUN_14351ca8a(void)

longlong FUN_14351ca8a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14351ca90 FUN_14351ca90 body=12 status=ok
// SIG undefined FUN_14351ca90(void)

void FUN_14351ca90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014351ca99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14351ca9c FUN_14351ca9c body=29 status=ok
// SIG undefined FUN_14351ca9c(void)

undefined8 FUN_14351ca9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14351cabe FUN_14351cabe body=25 status=ok
// SIG undefined FUN_14351cabe(void)

void FUN_14351cabe(void)

{
  FUN_14610cf7c();
  FUN_14170c56a(&DAT_14cae1498);
  return;
}



// FUNCTION 14351cad8 FUN_14351cad8 body=25 status=ok
// SIG undefined FUN_14351cad8(void)

void FUN_14351cad8(void)

{
  FUN_14610d0c6();
  FUN_14170c56a(&DAT_14cae15a8);
  return;
}



// FUNCTION 14351caf6 FUN_14351caf6 body=1391 status=ok
// SIG undefined FUN_14351caf6(void)

void FUN_14351caf6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  ulonglong *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  uint local_84;
  undefined1 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = param_1 + 0x10;
  local_d8 = param_1 + 0x20;
  local_c8 = param_1 + 0x30;
  lVar11 = 0;
  bVar9 = true;
  do {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 1;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_80 = 0;
    local_7c = 0;
    local_78 = L"SortOffset";
    local_70 = 0;
    uStack_68 = 0;
    local_b8 = 0x1000;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x4109);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_e0 = &local_a8;
      local_e8 = (ulonglong *)CONCAT44(local_e8._4_4_,0xc00);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0xc00;
      FUN_14002049c(param_2,0);
    }
    else {
      local_e0 = &local_a8;
      local_e8 = (ulonglong *)CONCAT44(local_e8._4_4_,0xc00);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0xc00;
    }
    lVar10 = local_c0;
    plVar8 = (longlong *)(local_d0 + lVar11 * 8);
    if (plVar8 == &local_c0) {
LAB_14351ccc0:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar12 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar12) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar12 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar12) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
      lVar10 = *plVar8;
    }
    else {
      lVar4 = *plVar8;
      *plVar8 = local_c0;
      local_c0 = 0;
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar4;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar12 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar12) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar12 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar12) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
        goto LAB_14351ccc0;
      }
    }
    if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
      local_b8._0_3_ = 0x11c00;
    }
    else {
      local_b8._0_3_ = 0x40000;
    }
    local_b8 = (ulonglong)(uint3)local_b8;
    uStack_b0 = 0;
    local_e8 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2);
    plVar7 = (longlong *)(local_d8 + lVar11 * 8);
    if (plVar7 == &local_c0) {
LAB_14351cdea:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar12 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar12) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar12 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar12) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
    }
    else {
      lVar10 = *plVar7;
      *plVar7 = local_c0;
      local_c0 = 0;
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar10 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar10 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar12 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar12) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar12 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar12) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
        goto LAB_14351cdea;
      }
    }
    if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
      local_b8 = 0x11c01;
    }
    else {
      local_b8 = 0x40001;
    }
    uStack_b0 = 0;
    local_e8 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_c0,param_2);
    plVar8 = (longlong *)(local_c8 + lVar11 * 8);
    if (plVar8 == &local_c0) {
LAB_14351cf1e:
      lVar11 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar12 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar12) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar12 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar12) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
    }
    else {
      lVar11 = *plVar8;
      *plVar8 = local_c0;
      local_c0 = 0;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar12 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar12) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar12 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar12) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
        goto LAB_14351cf1e;
      }
    }
    lVar11 = 1;
    bVar12 = !bVar9;
    bVar9 = false;
    if (bVar12) {
      if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14351d066 FUN_14351d066 body=942 status=ok
// SIG undefined FUN_14351d066(void)

void FUN_14351d066(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FRadixSortParametersBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x20;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4104);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar9 = local_a0;
  plVar8 = (longlong *)(param_1 + 0x10);
  if (plVar8 == &local_a0) {
LAB_14351d1fc:
    lVar9 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar9;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = *plVar8;
  }
  else {
    lVar4 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_14351d1fc;
    }
  }
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x11c00;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar8 = (longlong *)(param_1 + 0x18);
  if (plVar8 != &local_a0) {
    lVar9 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar9 == 0) goto LAB_14351d386;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar9 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_14351d386:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14351d415 FUN_14351d415 body=455 status=ok
// SIG undefined FUN_14351d415(void)

undefined4 FUN_14351d415(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_14351d5dc();
  if ((char)uVar3 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cae39f8) {
      FUN_144b3d300(&DAT_14cae39f8);
      if (DAT_14cae39f8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cae39f0 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"GPUSort.DebugOffsets",1)
        ;
        _Init_thread_footer(&DAT_14cae39f8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cae3a08) {
      FUN_144b3d300(&DAT_14cae3a08);
      if (DAT_14cae3a08 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cae3a00 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"GPUSort.DebugSort",1);
        _Init_thread_footer(&DAT_14cae3a08);
      }
    }
    iVar1 = *(int *)(DAT_14cae1b00 + 4);
    iVar2 = *(int *)(DAT_14cae1b18 + 4);
    FUN_140635eb8(DAT_14cae39f0,1,0xd000000,0);
    FUN_140635eb8(DAT_14cae3a00,1,0xd000000,0);
    FUN_14351d5dc(param_1,param_2,param_3);
    FUN_140635eb8(DAT_14cae39f0,iVar1 != 0,0xd000000,0);
    FUN_140635eb8(DAT_14cae3a00,iVar2 != 0,0xd000000,0);
  }
  return uVar3;
}



// FUNCTION 14351d5dc FUN_14351d5dc body=5268 status=ok
// SIG undefined FUN_14351d5dc(void)

ulonglong FUN_14351d5dc(longlong param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  void *pvVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  bool bVar27;
  undefined1 auStack_228 [32];
  undefined1 *local_208;
  longlong *local_200;
  int local_1ec;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined4 local_1d4;
  ulonglong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  int *local_1b8;
  undefined8 uStack_1b0;
  int *local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined1 uStack_175;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  longlong lStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_188 = (void *)0x0;
  uStack_180 = 0;
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_1a8 = (int *)0x0;
  uStack_1a0 = 0;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar23 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar23);
  }
  local_1d4 = param_3;
  local_1d0 = uVar23;
  if (param_2 == 0) {
    uStack_180 = 0;
    iVar6 = 0;
    uVar22 = 0;
  }
  else {
    FUN_14480809c(&local_188,(ulonglong)param_2);
    iVar6 = (uint)uStack_180;
    uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 + param_2);
    if ((uint)(uStack_180._4_4_ - iVar6) < param_2) {
      FUN_1447808da();
    }
    iVar6 = 0x3819ffe4;
    uVar19 = 0;
    do {
      iVar6 = iVar6 * 0xbb38435 + 0x3619636b;
      *(int *)((longlong)local_188 + uVar19 * 4) = iVar6;
      uVar19 = uVar19 + 1;
    } while (uVar23 != uVar19);
    uVar22 = (uint)uStack_180;
    iVar6 = uStack_190._4_4_;
  }
  pvVar16 = local_188;
  uStack_190 = CONCAT44(uStack_190._4_4_,uVar22);
  if (iVar6 == 0 && uVar22 == 0) {
    uStack_190 = (ulonglong)uVar22;
  }
  else {
    FUN_1447bda9e(&local_198,uVar22);
    if (uVar22 != 0) {
      memcpy(local_198,pvVar16,(longlong)(int)uVar22 << 2);
    }
  }
  iVar6 = param_2 * 4;
  local_1c8 = (ulonglong)param_2;
  uVar9 = FUN_1449e0cb6(local_198,uStack_190 & 0xffffffff);
  plVar15 = local_88 + 2;
  plVar18 = local_88;
  plVar14 = &local_98;
  plVar13 = &local_a8;
  plVar12 = &local_b8;
  plVar17 = &local_c8;
  uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  local_1ec = iVar6;
  do {
    local_1e8 = CONCAT44(local_1e8._4_4_,(int)uVar9);
    local_118 = 0;
    lStack_110 = 0;
    local_108 = 1;
    uStack_104 = 0;
    uStack_fc = 0;
    uStack_f4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_f0 = uStack_f0 & 0xffffff00;
    uStack_ec = 0;
    local_e8 = L"KeysBuffer";
    lStack_e0 = 0;
    uStack_d8 = 0;
    local_178 = (undefined1)iVar6;
    uStack_177 = (undefined1)((uint)iVar6 >> 8);
    uStack_176 = (undefined1)((uint)iVar6 >> 0x10);
    uStack_175 = (undefined1)((uint)iVar6 >> 0x18);
    uStack_174 = 0;
    uStack_170 = 0x4109;
    local_1e0 = plVar17;
    if (iVar6 == 0) {
      FUN_14570b4be(param_1,&local_118,0x4109,0);
    }
    if (*(char *)(param_1 + 0x69) == '\0') {
      FUN_14002049c(param_1,1);
      local_208 = (undefined1 *)CONCAT44(local_208._4_4_,0xc00);
      local_200 = &local_118;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1c0,param_1,&local_178);
      *(undefined4 *)(local_1c0 + 0x18) = 0xc00;
      FUN_14002049c(param_1,0);
      lVar24 = local_1c0;
    }
    else {
      local_208 = (undefined1 *)CONCAT44(local_208._4_4_,0xc00);
      local_200 = &local_118;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1c0,param_1,&local_178);
      *(undefined4 *)(local_1c0 + 0x18) = 0xc00;
      lVar24 = local_1c0;
    }
    lVar4 = *plVar15;
    *plVar15 = lVar24;
    local_1c0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar4;
          plVar17 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          iVar6 = local_1ec;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar17;
              LOCK();
              bVar27 = plVar17 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar27) {
                plVar17 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar27 = plVar11 != DAT_14ca843c8;
              plVar17 = plVar10;
              if (bVar27) {
                plVar11 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
      lVar24 = local_1c0;
      if (local_1c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_1c0 + 8);
        uVar22 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar22 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_1c0 + 8);
          LOCK();
          uVar22 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar22 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_1c0 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar24;
            plVar17 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            iVar6 = local_1ec;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar17;
                LOCK();
                bVar27 = plVar17 != DAT_14ca843c0;
                plVar11 = plVar10;
                if (bVar27) {
                  plVar17 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar10 = (longlong)plVar11;
                LOCK();
                bVar27 = plVar11 != DAT_14ca843c8;
                plVar17 = plVar10;
                if (bVar27) {
                  plVar11 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
      lVar24 = *plVar15;
    }
    if ((lVar24 == 0) || ((*(byte *)(lVar24 + 0x28) & 0x10) == 0)) {
      uStack_177 = 0x1c;
      uStack_176 = 1;
    }
    else {
      uStack_177 = 0;
      uStack_176 = 4;
    }
    uStack_16c = 0;
    uStack_170 = 0;
    uStack_174 = 0;
    uStack_175 = 0;
    local_178 = 0;
    local_208 = &local_178;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_1c0,param_1);
    lVar24 = *plVar14;
    *plVar14 = local_1c0;
    local_1c0 = 0;
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar24;
          plVar14 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar14;
              LOCK();
              bVar27 = plVar14 != DAT_14ca843c0;
              plVar17 = plVar11;
              if (bVar27) {
                plVar14 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar11 = (longlong)plVar17;
              LOCK();
              bVar27 = plVar17 != DAT_14ca843c8;
              plVar14 = plVar11;
              if (bVar27) {
                plVar17 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
      lVar24 = local_1c0;
      if (local_1c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_1c0 + 8);
        uVar22 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar22 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_1c0 + 8);
          LOCK();
          uVar22 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar22 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_1c0 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar24;
            plVar14 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            iVar6 = local_1ec;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar14;
                LOCK();
                bVar27 = plVar14 != DAT_14ca843c0;
                plVar17 = plVar11;
                if (bVar27) {
                  plVar14 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar11 = (longlong)plVar17;
                LOCK();
                bVar27 = plVar17 != DAT_14ca843c8;
                plVar14 = plVar11;
                if (bVar27) {
                  plVar17 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
    }
    if ((*plVar15 == 0) || ((*(byte *)(*plVar15 + 0x28) & 0x10) == 0)) {
      uStack_177 = 0x1c;
      uStack_176 = 1;
    }
    else {
      uStack_177 = 0;
      uStack_176 = 4;
    }
    local_178 = 1;
    uStack_16c = 0;
    uStack_170 = 0;
    uStack_174 = 0;
    uStack_175 = 0;
    local_208 = &local_178;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_1c0,param_1);
    lVar24 = *plVar12;
    *plVar12 = local_1c0;
    local_1c0 = 0;
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = lVar24;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar15;
              LOCK();
              bVar27 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar12;
              if (bVar27) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar12 = (longlong)plVar14;
              LOCK();
              bVar27 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar12;
              if (bVar27) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
      lVar24 = local_1c0;
      if (local_1c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_1c0 + 8);
        uVar22 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar22 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_1c0 + 8);
          LOCK();
          uVar22 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar22 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_1c0 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar24;
            plVar15 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar15;
                LOCK();
                bVar27 = plVar15 != DAT_14ca843c0;
                plVar14 = plVar12;
                if (bVar27) {
                  plVar15 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar12 = (longlong)plVar14;
                LOCK();
                bVar27 = plVar14 != DAT_14ca843c8;
                plVar15 = plVar12;
                if (bVar27) {
                  plVar14 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
    }
    local_e8 = L"ValuesBuffer";
    if ((char)uStack_f0 == '\x01') {
      local_178 = 0;
      uStack_177 = 0;
      uStack_176 = 0;
      uStack_175 = 0;
      uStack_174 = 0;
      uStack_170 = 0x100000;
    }
    else {
      local_178 = (undefined1)iVar6;
      uStack_177 = (undefined1)((uint)iVar6 >> 8);
      uStack_176 = (undefined1)((uint)iVar6 >> 0x10);
      uStack_175 = (undefined1)((uint)iVar6 >> 0x18);
      uStack_174 = 0;
      uStack_170 = 0x4109;
      if (iVar6 == 0) {
        FUN_14570b4be(param_1,&local_118,0x4109,0);
      }
    }
    if (*(char *)(param_1 + 0x69) == '\0') {
      FUN_14002049c(param_1,1);
      local_208 = (undefined1 *)CONCAT44(local_208._4_4_,0xc00);
      local_200 = &local_118;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1c0,param_1,&local_178);
      *(undefined4 *)(local_1c0 + 0x18) = 0xc00;
      FUN_14002049c(param_1,0);
      lVar24 = local_1c0;
    }
    else {
      local_208 = (undefined1 *)CONCAT44(local_208._4_4_,0xc00);
      local_200 = &local_118;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1c0,param_1,&local_178);
      *(undefined4 *)(local_1c0 + 0x18) = 0xc00;
      lVar24 = local_1c0;
    }
    lVar4 = *plVar18;
    *plVar18 = lVar24;
    local_1c0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = lVar4;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar15;
              LOCK();
              bVar27 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar12;
              if (bVar27) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar12 = (longlong)plVar14;
              LOCK();
              bVar27 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar12;
              if (bVar27) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
      lVar24 = local_1c0;
      if (local_1c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_1c0 + 8);
        uVar22 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar22 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_1c0 + 8);
          LOCK();
          uVar22 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar22 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_1c0 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar24;
            plVar15 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar15;
                LOCK();
                bVar27 = plVar15 != DAT_14ca843c0;
                plVar14 = plVar12;
                if (bVar27) {
                  plVar15 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar12 = (longlong)plVar14;
                LOCK();
                bVar27 = plVar14 != DAT_14ca843c8;
                plVar15 = plVar12;
                if (bVar27) {
                  plVar14 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
      lVar24 = *plVar18;
    }
    if ((lVar24 == 0) || ((*(byte *)(lVar24 + 0x28) & 0x10) == 0)) {
      uStack_177 = 0x1c;
      uStack_176 = 1;
    }
    else {
      uStack_177 = 0;
      uStack_176 = 4;
    }
    uStack_16c = 0;
    uStack_170 = 0;
    uStack_174 = 0;
    uStack_175 = 0;
    local_178 = 0;
    local_208 = &local_178;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_1c0,param_1);
    lVar24 = *plVar13;
    *plVar13 = local_1c0;
    local_1c0 = 0;
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar24;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar15;
              LOCK();
              bVar27 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar13;
              if (bVar27) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar13 = (longlong)plVar14;
              LOCK();
              bVar27 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar13;
              if (bVar27) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
      lVar24 = local_1c0;
      if (local_1c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_1c0 + 8);
        uVar22 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar22 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_1c0 + 8);
          LOCK();
          uVar22 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar22 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_1c0 + 0xd);
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = lVar24;
            plVar15 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar15;
                LOCK();
                bVar27 = plVar15 != DAT_14ca843c0;
                plVar14 = plVar13;
                if (bVar27) {
                  plVar15 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar13 = (longlong)plVar14;
                LOCK();
                bVar27 = plVar14 != DAT_14ca843c8;
                plVar15 = plVar13;
                if (bVar27) {
                  plVar14 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
    }
    if ((*plVar18 == 0) || ((*(byte *)(*plVar18 + 0x28) & 0x10) == 0)) {
      uStack_177 = 0x1c;
      uStack_176 = 1;
    }
    else {
      uStack_177 = 0;
      uStack_176 = 4;
    }
    local_178 = 1;
    uStack_16c = 0;
    uStack_170 = 0;
    uStack_174 = 0;
    uStack_175 = 0;
    local_208 = &local_178;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_1c0,param_1);
    lVar24 = *local_1e0;
    *local_1e0 = local_1c0;
    local_1c0 = 0;
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar24;
          plVar15 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar15;
              LOCK();
              bVar27 = plVar15 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar27) {
                plVar15 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar27 = plVar18 != DAT_14ca843c8;
              plVar15 = plVar14;
              if (bVar27) {
                plVar18 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
      lVar24 = local_1c0;
      if (local_1c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_1c0 + 8);
        uVar22 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar22 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_1c0 + 8);
          LOCK();
          uVar22 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar22 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_1c0 + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            plVar14[1] = lVar24;
            plVar15 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar15;
                LOCK();
                bVar27 = plVar15 != DAT_14ca843c0;
                plVar18 = plVar14;
                if (bVar27) {
                  plVar15 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar14 = (longlong)plVar18;
                LOCK();
                bVar27 = plVar18 != DAT_14ca843c8;
                plVar15 = plVar14;
                if (bVar27) {
                  plVar18 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
    }
    lVar24 = local_88[2];
    plVar17 = &uStack_c0;
    plVar12 = &uStack_b0;
    plVar13 = &uStack_a0;
    plVar14 = &lStack_90;
    plVar18 = local_88 + 1;
    plVar15 = local_88 + 3;
    uVar9 = 0;
  } while ((local_1e8 & 1) != 0);
  cVar3 = *(char *)(param_1 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,1);
  }
  local_208 = (undefined1 *)CONCAT44(local_208._4_4_,iVar6);
  local_200 = (longlong *)CONCAT44(local_200._4_4_,1);
  pvVar16 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar24,0);
  plVar15 = local_88 + 4;
  plVar18 = local_88 + 2;
  plVar14 = local_88;
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,0);
  }
  local_1e8 = (size_t)iVar6;
  memcpy(pvVar16,local_188,local_1e8);
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14002049c(param_1,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
    FUN_14002049c(param_1,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
  }
  lVar24 = local_88[0];
  uVar23 = local_1c8;
  cVar3 = *(char *)(param_1 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,1);
  }
  local_208 = (undefined1 *)CONCAT44(local_208._4_4_,local_1ec);
  local_200 = (longlong *)CONCAT44(local_200._4_4_,1);
  pvVar16 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar24,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(pvVar16,local_188,local_1e8);
  lVar24 = local_88[0];
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14002049c(param_1,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
    FUN_14002049c(param_1,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,local_88[0]);
  }
  local_118 = local_98;
  lStack_110 = lStack_90;
  local_108 = (undefined4)local_b8;
  uStack_104 = CONCAT44((undefined4)uStack_b0,local_b8._4_4_);
  uStack_fc = CONCAT44((undefined4)local_a8,uStack_b0._4_4_);
  uStack_f4 = local_a8._4_4_;
  uStack_f0 = (undefined4)uStack_a0;
  uStack_ec = uStack_a0._4_4_;
  local_e8 = (wchar_t *)local_c8;
  lStack_e0 = uStack_c0;
  local_168 = local_98;
  lStack_160 = lStack_90;
  local_158 = (undefined4)local_b8;
  uStack_154 = local_b8._4_4_;
  uStack_150 = (undefined4)uStack_b0;
  uStack_14c = uStack_b0._4_4_;
  local_148 = (undefined4)local_a8;
  uStack_144 = local_a8._4_4_;
  uStack_140 = (undefined4)uStack_a0;
  uStack_13c = uStack_a0._4_4_;
  local_138 = (undefined4)local_c8;
  uStack_134 = local_c8._4_4_;
  uStack_130 = (undefined4)uStack_c0;
  uStack_12c = uStack_c0._4_4_;
  local_128 = 0;
  uStack_120 = 0;
  local_200 = (longlong *)CONCAT44(local_200._4_4_,local_1d4);
  uVar22 = (uint)uVar23;
  local_208 = (undefined1 *)CONCAT44(local_208._4_4_,uVar22);
  iVar7 = FUN_1409f85cb(param_1,&local_168,0,0xffffffff);
  iVar6 = uStack_1a0._4_4_;
  if (uStack_1a0._4_4_ < (int)uVar22) {
    FUN_14480809c(&local_1a8,uVar23 & 0xffffffff);
    iVar6 = uStack_1a0._4_4_;
  }
  iVar26 = local_1ec;
  iVar5 = (int)uStack_1a0;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(int)uStack_1a0 + uVar22);
  if ((uint)(iVar6 - iVar5) < uVar22) {
    FUN_1447808da(&local_1a8);
  }
  iVar6 = uStack_1b0._4_4_;
  if (uStack_1b0._4_4_ < (int)uVar22) {
    FUN_14480809c(&local_1b8,uVar23 & 0xffffffff);
    iVar26 = local_1ec;
    iVar6 = uStack_1b0._4_4_;
  }
  iVar5 = (int)uStack_1b0;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + uVar22);
  if ((uint)(iVar6 - iVar5) < uVar22) {
    FUN_1447808da(&local_1b8);
  }
  local_1e0 = (longlong *)(longlong)iVar7;
  lVar24 = local_88[(longlong)local_1e0 + 2];
  cVar3 = *(char *)(param_1 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,1);
  }
  local_208 = (undefined1 *)CONCAT44(local_208._4_4_,iVar26);
  local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
  pvVar16 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar24,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(local_1a8,pvVar16,local_1e8);
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14002049c(param_1,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
    FUN_14002049c(param_1,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
  }
  plVar13 = local_1e0;
  lVar24 = local_88[(longlong)local_1e0];
  cVar3 = *(char *)(param_1 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,1);
  }
  local_208 = (undefined1 *)CONCAT44(local_208._4_4_,local_1ec);
  local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
  pvVar16 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar24,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(local_1b8,pvVar16,local_1e8);
  lVar24 = local_88[(longlong)plVar13];
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14002049c(param_1,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
    uVar9 = FUN_14002049c(param_1,0);
  }
  else {
    uVar9 = (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar24);
  }
  plVar13 = &local_98;
  puVar21 = &local_b8;
  if (uVar22 == 0) {
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  else {
    uVar19 = 1;
    if (1 < (int)uVar22) {
      uVar19 = uVar23 & 0xffffffff;
    }
    if ((*local_1a8 != *local_198) || (*local_1b8 != *local_1a8)) {
      local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
      goto LAB_14351e69e;
    }
    uVar23 = 1;
    do {
      uVar25 = uVar23;
      if ((uVar19 == uVar25) || (local_1a8[uVar25] != local_198[uVar25])) break;
      uVar23 = uVar25 + 1;
    } while (local_1b8[uVar25] == local_1a8[uVar25]);
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)local_1a8 >> 8),local_1d0 <= uVar25);
  }
  local_1e8 = CONCAT44(local_1e8._4_4_,uVar8);
LAB_14351e69e:
  do {
    lVar24 = puVar21[-1];
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar24;
          plVar12 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar27 = plVar12 != DAT_14ca843c0;
              plVar17 = plVar11;
              if (bVar27) {
                plVar12 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar11 = (longlong)plVar17;
              LOCK();
              bVar27 = plVar17 != DAT_14ca843c8;
              plVar12 = plVar11;
              if (bVar27) {
                plVar17 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    puVar20 = &local_a8;
    puVar21 = puVar21 + -1;
  } while (puVar21 != &local_c8);
  do {
    lVar24 = puVar20[-1];
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar24;
          plVar12 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar27 = plVar12 != DAT_14ca843c0;
              plVar17 = plVar11;
              if (bVar27) {
                plVar12 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar11 = (longlong)plVar17;
              LOCK();
              bVar27 = plVar17 != DAT_14ca843c8;
              plVar12 = plVar11;
              if (bVar27) {
                plVar17 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    puVar20 = puVar20 + -1;
  } while (puVar20 != &local_b8);
  do {
    lVar24 = plVar13[-1];
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar24;
          plVar12 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar27 = plVar12 != DAT_14ca843c0;
              plVar17 = plVar11;
              if (bVar27) {
                plVar12 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar11 = (longlong)plVar17;
              LOCK();
              bVar27 = plVar17 != DAT_14ca843c8;
              plVar12 = plVar11;
              if (bVar27) {
                plVar17 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    plVar13 = plVar13 + -1;
  } while (plVar13 != &local_a8);
  do {
    lVar24 = plVar14[-1];
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar17 = (longlong *)FUN_14001cc68(0x10,8);
          plVar17[1] = lVar24;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar17 = (longlong)plVar13;
              LOCK();
              bVar27 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar17;
              if (bVar27) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar17 = (longlong)plVar12;
              LOCK();
              bVar27 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar17;
              if (bVar27) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    plVar14 = plVar14 + -1;
  } while (plVar14 != &local_98);
  do {
    lVar24 = plVar18[-1];
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = lVar24;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar14;
              LOCK();
              bVar27 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar12;
              if (bVar27) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar12 = (longlong)plVar13;
              LOCK();
              bVar27 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar12;
              if (bVar27) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    plVar18 = plVar18 + -1;
  } while (plVar18 != local_88);
  do {
    lVar24 = plVar15[-1];
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar24 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar24;
          plVar18 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar18;
              LOCK();
              bVar27 = plVar18 != DAT_14ca843c0;
              plVar14 = plVar13;
              if (bVar27) {
                plVar18 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar13 = (longlong)plVar14;
              LOCK();
              bVar27 = plVar14 != DAT_14ca843c8;
              plVar18 = plVar13;
              if (bVar27) {
                plVar14 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    plVar15 = plVar15 + -1;
  } while (plVar15 != local_88 + 2);
  if (local_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1e8 & 0xffffffff;
}



// FUNCTION 14351ea72 FUN_14351ea72 body=269 status=ok
// SIG undefined FUN_14351ea72(void)

void FUN_14351ea72(int *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  if (3 < *param_1 - 1U) {
    return;
  }
  iVar1 = param_1[1];
  switch(*param_1) {
  case 1:
    uVar4 = 0x200;
    break;
  case 2:
    uVar4 = 0x100000;
    break;
  case 3:
    iVar5 = 0x10;
    do {
      cVar2 = FUN_14351d415(param_2,iVar5,iVar1);
      if (cVar2 == '\0') {
        return;
      }
      iVar5 = iVar5 * 2;
    } while (iVar5 < 0x100001);
    iVar5 = 0x10;
    do {
      cVar2 = FUN_14351d415(param_2,iVar5 + -1,iVar1);
      if (cVar2 == '\0') {
        return;
      }
      iVar5 = iVar5 * 2;
    } while (iVar5 < 0x100001);
    return;
  case 4:
    iVar5 = 999;
    do {
      DAT_14c83e67c = DAT_14c83e67c * 0xbb38435 + 0x3619636b;
      fVar3 = (float)(DAT_14c83e67c & 0x7fffff | 0x3f800000);
      auVar7 = roundss(ZEXT816(0),ZEXT416((uint)fVar3),0xb);
      cVar2 = FUN_14351d415(param_2,(int)((fVar3 - auVar7._0_4_) * 1.04856e+06) + 0x1fU & 0xfffffff0
                            ,iVar1);
      bVar6 = iVar5 != 0;
      iVar5 = iVar5 + -1;
      if (cVar2 == '\0') {
        return;
      }
    } while (bVar6);
    return;
  }
  FUN_14351d415(param_2,uVar4,iVar1);
  return;
}



// FUNCTION 14351eb8a FUN_14351eb8a body=12 status=ok
// SIG undefined FUN_14351eb8a(void)

void FUN_14351eb8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014351eb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14351eb96 FUN_14351eb96 body=29 status=ok
// SIG undefined FUN_14351eb96(void)

undefined8 FUN_14351eb96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14351ebb4 FUN_14351ebb4 body=282 status=ok
// SIG undefined FUN_14351ebb4(void)

undefined8 * FUN_14351ebb4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14351c877);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14351ecce FUN_14351ecce body=366 status=ok
// SIG undefined FUN_14351ecce(void)

void FUN_14351ecce(undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (3 < *(int *)(param_1 + 0x15) - 1U) goto LAB_14351ee01;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xac);
  switch(*(int *)(param_1 + 0x15)) {
  case 1:
    uVar5 = 0x200;
    break;
  case 2:
    uVar5 = 0x100000;
    break;
  case 3:
    iVar6 = 0x10;
    do {
      cVar3 = FUN_14351d415(&DAT_14ca85100,iVar6,uVar2);
      if (cVar3 == '\0') goto LAB_14351ee01;
      iVar6 = iVar6 * 2;
    } while (iVar6 < 0x100001);
    iVar6 = 0x10;
    do {
      cVar3 = FUN_14351d415(&DAT_14ca85100,iVar6 + -1,uVar2);
      if (cVar3 == '\0') break;
      iVar6 = iVar6 * 2;
    } while (iVar6 < 0x100001);
    goto LAB_14351ee01;
  case 4:
    iVar6 = 999;
    do {
      DAT_14c83e67c = DAT_14c83e67c * 0xbb38435 + 0x3619636b;
      fVar4 = (float)(DAT_14c83e67c & 0x7fffff | 0x3f800000);
      auVar8 = roundss(ZEXT816(0),ZEXT416((uint)fVar4),0xb);
      cVar3 = FUN_14351d415(&DAT_14ca85100,
                            (int)((fVar4 - auVar8._0_4_) * 1.04856e+06) + 0x1fU & 0xfffffff0,uVar2);
      bVar7 = iVar6 != 0;
      iVar6 = iVar6 + -1;
      if (cVar3 == '\0') break;
    } while (bVar7);
    goto LAB_14351ee01;
  }
  FUN_14351d415(&DAT_14ca85100,uVar5,uVar2);
LAB_14351ee01:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014351ee29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14351ee3c FUN_14351ee3c body=7937 status=ok
// SIG undefined FUN_14351ee3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14351ee3c(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140056680(&DAT_14cadbee8,L"Transient_Gestalt_");
  atexit((_func_5014 *)&LAB_14350a264);
  FUN_140056680(&DAT_14cadbef8,L"_SkelMesh");
  atexit((_func_5014 *)&LAB_14350a275);
  DAT_14cadbf08 = 0;
  _DAT_14cadbf10 = 0;
  _DAT_14cadbf18 = 2;
  atexit(FUN_14350a286);
  _DAT_14cadbf20 = &DAT_14c872ce8;
  _DAT_14cadbf28 = L"LagCompensation";
  FUN_1446f470e(&DAT_14cadbf30,L"IncludeComponentClass",1);
  DAT_14cadbf38 = 0;
  _DAT_14cadbf60 = 0;
  _DAT_14cadbf68 = 0;
  _DAT_14cadbf40 = 0;
  _DAT_14cadbf48 = 0;
  _DAT_14cadbf6c = 0xffffffff00000080;
  DAT_14cadbf74 = 0;
  DAT_14cadbf80 = 0;
  _DAT_14cadbf88 = 0;
  atexit(FUN_14350a2b7);
  _DAT_14cadbf90 = &DAT_14c872ce8;
  _DAT_14cadbf98 = L"LagCompensation";
  FUN_1446f470e(&DAT_14cadbfa0,L"ExcludeComponentClass",1);
  DAT_14cadbfa8 = 0;
  DAT_14cadbfd0 = 0;
  DAT_14cadbfd8 = 0;
  DAT_14cadbfb0 = 0;
  uRam000000014cadbfb8 = 0;
  _DAT_14cadbfdc = 0xffffffff00000080;
  _DAT_14cadbfe4 = 0;
  DAT_14cadbff0 = 0;
  _DAT_14cadbff8 = 0;
  atexit(FUN_14350a2e6);
  DAT_14cae3bf0 = 0;
  _DAT_14cae3bf8 = 0;
  _DAT_14cae3c00 = 2;
  _DAT_14cae3c04 = 0;
  ram0x00014cae3c0c = 0;
  _DAT_14cae3c14 = 0x200000000;
  _DAT_14cae3c1c = 0;
  _DAT_14cae3c28 = 0;
  LOCK();
  DAT_14cae3c20._0_4_ = 0;
  DAT_14cae3c20._4_4_ = 0;
  UNLOCK();
  atexit(FUN_14350a32f);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cadc000);
  if (cVar2 == '\0') {
    _DAT_14cadc000 = 0;
    uRam000000014cadc008 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_c8 = (code *)0x0;
  local_d8 = (code *)0x0;
  pcStack_d0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a90dd70,2,0);
  local_a8 = (code *)0x149fca2ba;
  uStack_a0 = (code *)CONCAT35(uStack_a0._5_3_,0xd);
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cadc080 = (ulonglong)uVar3;
  DAT_14cae3d20 = 0;
  DAT_14cae3d30 = 0;
  atexit((_func_5014 *)&LAB_14350a3a2);
  DAT_14cae3c30 = 0;
  DAT_14cae3c40 = 0;
  atexit((_func_5014 *)&LAB_14350a3c9);
  DAT_14cae3c70 = 0;
  DAT_14cae3c80 = 0;
  atexit((_func_5014 *)&LAB_14350a3f0);
  local_a8 = (code *)0xf49437e9e4a067ed;
  uStack_a0._0_4_ = 0xa234db0b;
  uStack_a0._4_4_ = 0x2f46ac21;
  _DAT_14cadc088 = 0xe4a067ed;
  uRam000000014cadc08c = 0xf49437e9;
  uRam000000014cadc090 = 0xa234db0b;
  uRam000000014cadc094 = 0x2f46ac21;
  FUN_141005458(&local_a8,1,L"FGbxNavGeometrySettings",0);
  atexit((_func_5014 *)&LAB_14350a417);
  DAT_14cae3d60 = 0;
  atexit((_func_5014 *)&LAB_14350a82d);
  DAT_14cadc0c0 = 0;
  DAT_14cadc0c8 = 0;
  DAT_14cadc0a0 = 0;
  _DAT_14cadc0a8 = 0;
  _DAT_14cadc0cc = 0xffffffff00000080;
  DAT_14cadc0d4 = 0;
  DAT_14cadc0e0 = 0;
  DAT_14cadc0e8 = 0;
  atexit(FUN_14350a848);
  DAT_14cadc0f0 = 0;
  _DAT_14cadc0f8 = 0;
  atexit(FUN_14350a877);
  DAT_14cadc118 = 0;
  local_a8 = (code *)0x0;
  uStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14a914b90;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,1);
  FUN_14152bcb8(&DAT_14cadc170,L"gbx.DumpPostProcessSettings",L"Dump postprocess settings to log",
                &local_a8);
  if ((int)uStack_a0 == 0) {
LAB_14351f23a:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
    goto LAB_14351f23a;
  }
  atexit(FUN_14350bd7f);
  local_a8 = (code *)0x14a1e3c88;
  uStack_a0._0_5_ = 10;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cadc180 = (ulonglong)uVar3;
  local_a8 = (code *)&DAT_14a19662d;
  uStack_a0 = (code *)CONCAT35(uStack_a0._5_3_,4);
  FUN_14001a6c0(&local_a8,1);
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
  DAT_14cadc188 = DAT_14c844840;
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
  _DAT_14cadc190 = 0;
  atexit((_func_5014 *)&LAB_14350bdc4);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cadc198,L"r.gbx.PSOWait.Enabled",&local_a8,
                L"Whether PSOWait is enabled or not, for any system");
  atexit(FUN_14350bdd8);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cadc1b0,L"r.gbx.PSOWait.ShowProgressScreenMessage",&local_a8,
                L"Whether to show an on screen message in any builds (including shipping!) with relevant progress information"
               );
  atexit(FUN_14350be1d);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cadc1c8,L"r.gbx.PSOWait.Login.Enabled",&local_a8,
                L"Whether PSOWait is enabled or not for login task");
  atexit(FUN_14350be62);
  local_a8._0_4_ = 0;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cadc1e0,L"r.gbx.PSOWait.Login.MaxDuration",&local_a8,
                L"0: No max duration>0: Max duration for PSO wait for login task in seconds");
  atexit(FUN_14350bea7);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cadc1f8,L"r.gbx.PSOWait.Travel.Enabled",&local_a8,
                L"Whether PSOWait is enabled or not for travel tunnel");
  atexit(FUN_14350beec);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cadc210,L"r.gbx.PSOWait.Travel.MaxDuration",&local_a8,
                L"0: No max duration>0: Max duration for PSO wait for travel tunnel in seconds");
  atexit(FUN_14350bf31);
  DAT_14cae3a10 = 0;
  _DAT_14cae3a18 = 0;
  _DAT_14cae3a20 = 2;
  atexit(FUN_14350c0df);
  FUN_1414a8e8a();
  FUN_1400b22c2(&DAT_14caddd70,"_Foot");
  atexit((_func_5014 *)&LAB_14350c110);
  FUN_1400b22c2(&DAT_14caddd80,"_Foot_to_Root");
  atexit((_func_5014 *)&LAB_14350c121);
  FUN_1446f470e(&DAT_14caddd90,L"Hips",1);
  FUN_1400b22c2(&DAT_14caddd98,"_Clav");
  atexit((_func_5014 *)&LAB_14350c132);
  FUN_1400b22c2(&DAT_14caddda8,&DAT_14a90e856);
  atexit((_func_5014 *)&LAB_14350c143);
  FUN_1446f470e(&DAT_14cadddb8,L"L_Hand",1);
  FUN_1446f470e(&DAT_14cadddc0,L"L_Hand_To_Root",1);
  FUN_1446f470e(&DAT_14cadddc8,L"L_Hand_Object",1);
  FUN_1446f470e(&DAT_14cadddd0,L"L_Forearm",1);
  FUN_1446f470e(&DAT_14cadddd8,L"R_Hand",1);
  FUN_1446f470e(&DAT_14caddde0,L"R_Hand_To_Root",1);
  FUN_1446f470e(&DAT_14caddde8,L"R_Hand_Object",1);
  FUN_1446f470e(&DAT_14cadddf0,L"R_Forearm",1);
  FUN_1446f470e(&DAT_14cadddf8,L"L_Hand_IK",1);
  FUN_1446f470e(&DAT_14cadde00,L"L_Hand_IK_Grip",1);
  FUN_1446f470e(&DAT_14cadde08,L"L_Hand_IK_Alpha",1);
  FUN_1446f470e(&DAT_14cadde10,L"L_Hand_Perch_IK",1);
  FUN_1446f470e(&DAT_14cadde18,L"R_Hand_IK",1);
  FUN_1446f470e(&DAT_14cadde20,L"R_Hand_IK_Grip",1);
  FUN_1446f470e(&DAT_14cadde28,L"R_Hand_IK_Alpha",1);
  FUN_1446f470e(&DAT_14cadde30,L"R_Hand_Perch_IK",1);
  FUN_1446f470e(&DAT_14cadde38,L"Floor_Pitch",1);
  FUN_1446f470e(&DAT_14cadde40,L"Leg_IK_Disable_Foot_Placement",1);
  FUN_1446f470e(&DAT_14cadde48,L"Leg_IK_Slope_Pitch_Adjustment",1);
  FUN_1446f470e(&DAT_14cadde50,L"Leg_IK_Slope_Roll_Adjustment",1);
  FUN_1446f470e(&DAT_14cadde58,L"L_Foot",1);
  FUN_1446f470e(&DAT_14cadde60,L"L_Shin",1);
  FUN_1446f470e(&DAT_14cadde68,L"R_Foot",1);
  FUN_1446f470e(&DAT_14cadde70,L"R_Shin",1);
  FUN_1446f470e(&DAT_14cadde78,L"L_Foot_IK",1);
  FUN_1446f470e(&DAT_14cadde80,L"R_Foot_IK",1);
  _DAT_14cadde90 = 0x7fefffffffffffff;
  _DAT_14cadde98 = 0x7fefffffffffffff;
  _DAT_14caddea0 = 0x7fefffffffffffff;
  _DAT_14caddea8 = 0x7fefffffffffffff;
  DAT_14caddeb0 = 0x7fefffffffffffff;
  _DAT_14caddeb8 = 0x7fefffffffffffff;
  DAT_14caddec0 = 0x7fefffffffffffff;
  DAT_14cadded0 = 0x7fefffffffffffff;
  DAT_14cadded8 = 0x7fefffffffffffff;
  _DAT_14caddee0 = 0x7fefffffffffffff;
  uRam000000014caddee8 = 0x7fefffffffffffff;
  _DAT_14caddef0 = 0xffffffff;
  uRam000000014caddef4 = 0x7fefffff;
  uRam000000014caddef8 = 0xffffffff;
  uRam000000014caddefc = 0x7fefffff;
  _DAT_14caddf00 = 0x7fefffffffffffff;
  uRam000000014caddf08 = 0;
  _DAT_14caddf10 = 0xffffffff;
  uRam000000014caddf14 = 0x7fefffff;
  uRam000000014caddf18 = 0xffffffff;
  uRam000000014caddf1c = 0x7fefffff;
  _DAT_14caddf20 = 0x7fefffffffffffff;
  uRam000000014caddf28 = 0;
  local_a8 = (code *)0x0;
  uStack_a0 = (code *)((ulonglong)uStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e17030;
  *(code **)((longlong)local_a8 + 0x18) = FUN_14350c154;
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,0x60);
  local_d8 = (code *)&local_a8;
  FUN_141703554(&DAT_14caddf30,L"r.gbx.Shadow.SplitProjection",&DAT_14cae3d68,
                L"0 - No split projection1 - Project the third person mesh, and reject third person mesh projection on the foreground2 - Same as 1, Plus have the First person model self shadow. "
               );
  if ((int)uStack_a0 == 0) {
LAB_14351f8e8:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
    goto LAB_14351f8e8;
  }
  atexit(FUN_14350c1bb);
  local_d8._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14caddf40,L"r.gbx.Shadow.SplitProjection.CsmResolutionFirstPerson",
                &DAT_14c761570,L"Split CSM resolution for the firse person meshes");
  atexit(FUN_14350c200);
  local_d8._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14caddf50,L"r.gbx.Shadow.SplitProjection.CsmResolutionThirdPerson",
                &DAT_14c761568,L"Split CSM resolution for the third person meshes");
  atexit(FUN_14350c245);
  local_d8._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14caddf60,L"r.gbx.Shadow.SplitProjection.CsmFirstPersonDist",&DAT_14c761574,
                L"How far  to pull back the DDL for the first person split");
  atexit(FUN_14350c28a);
  local_d8._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14caddf70,L"r.gbx.Shadow.SplitProjection.CsmThirdPersonDist",&DAT_14c76156c,
                L"How far  to pull back the DDL for the Third person split");
  atexit(FUN_14350c2cf);
  local_a8 = (code *)&DAT_14a1795a8;
  uStack_a0 = (code *)CONCAT35(uStack_a0._5_3_,4);
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14caddf80 = (ulonglong)uVar3;
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caddfe0,L"gbx.UserBenchmark.DelayGarbageCollection",&local_a8,
                L"1: Delay GC while benchmarking");
  atexit(FUN_14350c7d3);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caddff8,L"gbx.UserBenchmark.AutoScreenshot",&local_a8,
                L"1: Take screenshot after each benchmark");
  atexit(FUN_14350c818);
  local_a8._0_4_ = 2;
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cade010,L"gbx.UserBenchmark.TimestampType",&local_a8,
                L"0: No timestamp for filenames \n1: Use the first benchmark timestamp for all subsequent benchmarks in this run\n2: Use a new timestamp for all benchmarks in this run\n3: Use a new timestamp for all benchmarks in this run, but only include date (no hh:mm:ss)"
               );
  atexit(FUN_14350c85d);
  local_a8._0_4_ = 0x3dcccccd;
  local_d8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cade028,L"gbx.UserBenchmark.SecondsToPrepare",&local_a8,
                L"Number of seconds to wait after requesting a benchmark before the benchmark starts"
               );
  atexit(FUN_14350c8a2);
  local_a8._0_4_ = 300;
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cade040,L"gbx.UserBenchmark.MaxExpectedFPS",&local_a8,
                L"Max expected FPS for the purpose of preallocating benchmark data collection");
  atexit(FUN_14350c8e7);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x20000);
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cade058,L"gbx.UserBenchmark.PreallocatedFrames",&local_a8,
                L"Number of frames to preallocate when benchmark duration is not specified upfront")
  ;
  atexit(FUN_14350c92c);
  local_a8 = (code *)0x0;
  uStack_a0 = (code *)((ulonglong)uStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_a8 + 0x18) = FUN_14350d200;
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_1415c7246(&DAT_14cade090,L"gbx.UserBenchmark",
                L"Initiates benchmarking core stats \nUsage: gbx.UserBenchmark [NumSeconds=10]",
                &local_a8);
  if ((int)uStack_a0 == 0) {
LAB_14351fc10:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
    goto LAB_14351fc10;
  }
  atexit(FUN_14350e3db);
  local_a8._0_4_ = 0x11dcba5c;
  local_a8._4_4_ = 0x119a4d66;
  uStack_a0 = (code *)0xf0fb657e8c90066b;
  _DAT_14cade0a4 = 0x11dcba5c;
  uRam000000014cade0a8 = 0x119a4d66;
  uRam000000014cade0ac = 0x8c90066b;
  uRam000000014cade0b0 = 0xf0fb657e;
  FUN_141005458(&local_a8,2,L"GestaltSkeletalMeshVersion",0);
  atexit((_func_5014 *)&LAB_14350e420);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cade0d8,L"r.gbx.RenderSettings.Enabled",&local_a8,&DAT_149dfb77a);
  atexit(FUN_14350e7ea);
  DAT_14cade100 = 0;
  _DAT_14cade108 = 0;
  _DAT_14cade110 = 2;
  atexit(FUN_14350e82f);
  DAT_14cade118 = 0;
  _DAT_14cade120 = 0;
  _DAT_14cade128 = 2;
  atexit(FUN_14350e860);
  DAT_14cade130 = 0;
  _DAT_14cade138 = 0;
  atexit((_func_5014 *)&LAB_14350e891);
  pcStack_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_d8 = (code *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a910350,1,&PTR_FUN_14a910320);
  uStack_a0 = FUN_145e35fb4;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cade210,&local_a8);
  uStack_a0 = FUN_145e40af0;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cade2a8,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14351b8f0;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cade320,6,&local_a8);
  _DAT_14cade330 = 0xffffffff;
  _DAT_14cade334 = 0x105;
  DAT_14cade336 = 0;
  _DAT_14cade338 = 0;
  DAT_14cade340 = 0;
  DAT_14cade328 = &PTR_FUN_14a914d00;
  FUN_1463d12b0();
  atexit(FUN_14350e8cb);
  _DAT_14cade350 = 0xffffffff;
  _DAT_14cade354 = 0x105;
  DAT_14cade356 = 0;
  _DAT_14cade358 = 0;
  DAT_14cade360 = 0;
  DAT_14cade348 = &PTR_FUN_14a914db0;
  FUN_1463d137c();
  atexit(FUN_14350e8fa);
  local_b8 = (code *)&LAB_14350f564;
  local_c0 = (code *)&DAT_147ad7216;
  local_c8 = FUN_14350f576;
  pcStack_d0 = FUN_14350f5bd;
  local_d8 = (code *)&LAB_14350f5db;
  FUN_141585c60(&DAT_14cade368,L"FGeometryCacheVertexVertexFactory",
                L"/Engine/Private/GeometryCacheVertexFactory.ush",0x2aa);
  atexit((_func_5014 *)&LAB_14350f5fa);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14351c1be;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cade440,6,&local_a8);
  uStack_a0 = FUN_145fcca64;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cade4d0,&local_a8);
  uStack_a0 = FUN_145e38e46;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cade568,&local_a8);
  local_b8 = FUN_1417c9ae2;
  local_c0 = FUN_14350f61e;
  local_c8 = (code *)&LAB_14350f7c4;
  pcStack_d0 = FUN_14350f7ef;
  local_d8 = FUN_14350f818;
  FUN_141585c60(&DAT_14cae3cb0,L"FGeometryCollectionVertexFactory",
                L"/Engine/Private/GeometryCollectionVertexFactory.ush",0x66be);
  atexit((_func_5014 *)&LAB_14350f84a);
  FUN_14118b488(&DAT_14cade590);
  _DAT_14cade590 = &PTR_FUN_14a9142f0;
  atexit((_func_5014 *)&LAB_143511d5e);
  local_a8._0_1_ = 1;
  local_d8._0_4_ = 0x24;
  FUN_140bd5914(&DAT_14cade598,L"r.SkinCache.Allow",&local_a8,
                L"Whether or not to allow the GPU skin Cache system to be enabled.\n");
  atexit(FUN_143511d6a);
  local_d8._0_4_ = 0x24;
  FUN_141471170(&DAT_14cade5b0,L"r.SkinCache.CompileShaders",&DAT_14cade5c0,
                L"Whether or not to compile the GPU compute skinning cache shaders.\nThis will compile the shaders for skinning on a compute job and not skin on the vertex shader.\nGPUSkinVertexFactory.usf needs to be touched to cause a recompile if this changes.\n0 is off(default), 1 is on"
               );
  atexit(FUN_143511daf);
  local_a8 = (code *)((ulonglong)local_a8._1_7_ << 8);
  local_d8._0_4_ = 0x24;
  FUN_140bd5914(&DAT_14cade5c8,L"r.SkinCache.SkipCompilingGPUSkinVF",&local_a8,
                L"Reduce GPU Skin Vertex Factory shader permutations. Cannot be disabled while the skin cache is turned off.\n False ( 0): Compile all GPU Skin Vertex factory variants.\n True  ( 1): Don\'t compile all GPU Skin Vertex factory variants."
               );
  atexit(FUN_143511df4);
  local_a8._0_4_ = 1;
  local_d8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cade5e0,L"r.SkinCache.Mode",&local_a8,
                L"Whether or not to use the GPU compute skinning cache.\nThis will perform skinning on a compute job and not skin on the vertex shader.\nRequires r.SkinCache.CompileShaders=1 and r.SkinCache.Allow=1\n 0: off\n 1: on(default)\n"
               );
  atexit(FUN_143511e39);
  local_a8._0_4_ = 1;
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cade5f8,L"r.SkinCache.DefaultBehavior",&local_a8,
                L"Default behavior if all skeletal meshes are included/excluded from the skin cache. If Support Ray Tracing is enabled on a mesh, will force inclusive behavior on that mesh.\n Exclusive ( 0): All skeletal meshes are excluded from the skin cache. Each must opt in individually.\n Inclusive ( 1): All skeletal meshes are included into the skin cache. Each must opt out individually. (default)"
               );
  atexit(FUN_143511e7e);
  local_a8._0_4_ = 2;
  local_d8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cade610,L"r.SkinCache.RecomputeTangents",&local_a8,
                L"This option enables recomputing the vertex tangents on the GPU.\nCan be changed at runtime, requires both r.SkinCache.CompileShaders=1, r.SkinCache.Mode=1 and r.SkinCache.Allow=1\n 0: off\n 1: on, forces all skinned object to Recompute Tangents\n 2: on, only recompute tangents on skinned objects who ticked the Recompute Tangents checkbox(default)\n"
               );
  atexit(FUN_143511ec3);
  local_a8._0_4_ = 0x3f800000;
  local_d8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cade628,L"r.SkinCache.NumTangentIntermediateBuffers",&local_a8,
                L"How many intermediate buffers to use for intermediate results while\ndoing Recompute Tangents; more may allow the GPU to overlap compute jobs."
               );
  atexit(FUN_143511f08);
  local_a8._0_4_ = 0x3f800000;
  local_d8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cade640,L"r.SkinCache.Debug",&local_a8,
                L"A scaling constant passed to the SkinCache shader, useful for debugging");
  atexit(FUN_143511f4d);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x43000000);
  local_d8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cade658,L"r.SkinCache.SceneMemoryLimitInMB",&local_a8,
                L"Maximum memory allowed to be allocated per World/Scene in Megs");
  atexit(FUN_143511f92);
  local_d8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cade670,L"r.SkinCache.AllowDupedVertsForRecomputeTangents",&DAT_14cade680,
                L"0: off (default)\n1: Forces that vertices at the same position will be treated differently and has the potential to cause seams when verts are split.\n"
               );
  atexit(FUN_143511fd7);
  local_d8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cade688,L"r.SkinCache.RecomputeTangentsParallelDispatch",&DAT_14cade684,
                L"This option enables parallel dispatches for recompute tangents.\n 0: off (default), triangle pass is interleaved with vertex pass, requires resource barriers in between. \n 1: on, batch triangle passes together, resource barrier, followed by vertex passes together, cost more memory. \n"
               );
  atexit(FUN_14351201c);
  local_d8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cade698,L"r.SkinCache.MaxDispatchesPerCmdList",&DAT_14cade6a8,
                L"Maximum number of compute shader dispatches which are batched together into a single command list to fix potential TDRs."
               );
  atexit(FUN_143512061);
  local_d8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cade6b0,L"r.SkinCache.PrintMemorySummary",&DAT_14cade6c0,
                L"Print break down of memory usage. 0: off (default), 1: print when out of memory, 2: print every frame"
               );
  atexit(FUN_1435120a6);
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_141471170(&DAT_14cade6c8,L"r.SkinCache.Capture",&DAT_14cade6c4,
                L"Trigger a render capture for the next skin cache dispatches.");
  atexit(FUN_1435120eb);
  uStack_a0 = FUN_1460a6dd4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cade810,&local_a8);
  uStack_a0 = FUN_1460a7044;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cade938,&local_a8);
  uStack_a0 = FUN_1460a72b4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadea60,&local_a8);
  uStack_a0 = FUN_1460a7524;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadeb88,&local_a8);
  uStack_a0 = FUN_1460a7794;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadecb0,&local_a8);
  uStack_a0 = FUN_1460a7a04;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadedd8,&local_a8);
  uStack_a0 = FUN_1460a7c74;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadef00,&local_a8);
  uStack_a0 = FUN_1460a7ee4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf028,&local_a8);
  uStack_a0 = FUN_1460a8154;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf150,&local_a8);
  uStack_a0 = FUN_1460a83c4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf278,&local_a8);
  uStack_a0 = FUN_1460a8634;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf3a0,&local_a8);
  uStack_a0 = FUN_1460a88a4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf4c8,&local_a8);
  uStack_a0 = FUN_1460a8b14;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf5f0,&local_a8);
  uStack_a0 = FUN_1460a8d84;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf718,&local_a8);
  uStack_a0 = FUN_1460a8ff4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf840,&local_a8);
  uStack_a0 = FUN_1460a9264;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadf968,&local_a8);
  uStack_a0 = FUN_1460a94d4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadfa90,&local_a8);
  uStack_a0 = FUN_1460a9744;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadfbb8,&local_a8);
  uStack_a0 = FUN_1460a99b4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadfce0,&local_a8);
  uStack_a0 = FUN_1460a9c24;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadfe08,&local_a8);
  uStack_a0 = FUN_1460a9e94;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cadff30,&local_a8);
  uStack_a0 = FUN_1460aa104;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0058,&local_a8);
  uStack_a0 = FUN_1460aa374;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0180,&local_a8);
  uStack_a0 = FUN_1460aa5e4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae02a8,&local_a8);
  uStack_a0 = FUN_1460aa854;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae03d0,&local_a8);
  uStack_a0 = FUN_1460aaac4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae04f8,&local_a8);
  uStack_a0 = FUN_1460aad34;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0620,&local_a8);
  uStack_a0 = FUN_145cdac9e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0748,&local_a8);
  uStack_a0 = FUN_1460aafa4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0870,&local_a8);
  uStack_a0 = FUN_1460ab214;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0998,&local_a8);
  uStack_a0 = FUN_1460ab484;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0ac0,&local_a8);
  uStack_a0 = FUN_145d50f32;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0be8,&local_a8);
  uStack_a0 = FUN_1460ab6f4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae0d10,&local_a8);
  local_a8 = (code *)0x0;
  uStack_a0 = (code *)((ulonglong)uStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_a8 + 0x18) = FUN_1435166bc;
  FUN_141253d16(&DAT_14cae0d40,&local_a8);
  if ((int)uStack_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_143520796;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143520796:
  DAT_14cae0d58 = 0;
  DAT_14cae0d80 = 0;
  DAT_14cae0d88 = 0;
  DAT_14cae0d60 = 0;
  _DAT_14cae0d68 = 0;
  _DAT_14cae0d8c = 0xffffffff00000080;
  _DAT_14cae0d94 = 0;
  DAT_14cae0da0 = 0;
  _DAT_14cae0da8 = 0;
  DAT_14cae0db0 = 3;
  _DAT_14cae0db4 = 0;
  DAT_14cae0dc0 = 0;
  uRam000000014cae0dc8 = 0;
  DAT_14cae0dd0 = 0;
  atexit((_func_5014 *)&LAB_14351744a);
  local_d8._0_4_ = 4;
  FUN_141471170(&DAT_14cae0dd8,L"Compat.MAX_GPUSKIN_BONES",&DAT_14c761558,
                L"Max number of bones that can be skinned on the GPU in a single draw call. This setting clamp the per platform project setting URendererSettings::MaxSkinBones. Cannot be changed at runtime."
               );
  atexit(FUN_14351744f);
  local_d8._0_4_ = 4;
  FUN_141471170(&DAT_14cae0de8,L"r.GPUSkin.Support16BitBoneIndex",&DAT_14cae0df8,
                L"If enabled, a new mesh imported will use 8 bit (if <=256 bones) or 16 bit (if > 256 bones) bone indices for rendering."
               );
  atexit(FUN_143517494);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cae0e00,L"r.GPUSkin.Limit2BoneInfluences",&local_a8,
                L"Whether to use 2 bones influence instead of default 4/8 for GPU skinning. Cannot be changed at runtime."
               );
  atexit(FUN_1435174d9);
  local_d8._0_4_ = 0x24;
  FUN_141471170(&DAT_14cae0e18,L"r.GPUSkin.UnlimitedBoneInfluences",&DAT_14cae0e28,
                L"Whether to use unlimited bone influences instead of default 4/8 for GPU skinning. Cannot be changed at runtime."
               );
  atexit(FUN_14351751e);
  local_d8._0_4_ = 4;
  FUN_141471170(&DAT_14cae0e30,L"r.GPUSkin.UnlimitedBoneInfluencesThreshold",&DAT_14c76155c,
                L"Unlimited Bone Influences Threshold to use unlimited bone influences buffer if r.GPUSkin.UnlimitedBoneInfluences is enabled. Should be unsigned int. Cannot be changed at runtime."
               );
  atexit(FUN_143517563);
  local_d8._0_4_ = 0x24;
  FUN_14153156c(&DAT_14cae0e40,L"r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences",
                &DAT_14cae0e50,
                L"Any meshes using Unlimited Bone Influences will always be rendered with a Mesh Deformer. This reduces the number of shader permutations needed for skeletal mesh materials, saving memory at the cost of performance. Has no effect if either Unlimited Bone Influences or Deformer Graph is disabled. Cannot be changed at runtime."
               );
  atexit(FUN_1435175a8);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_d8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cae0e58,L"r.Mobile.EnableCloth",&local_a8,
                L"If enabled, compile cloth shader permutations and render simulated cloth on mobile platforms and Mobile mode on PC. Cannot be changed at runtime"
               );
  atexit(FUN_1435175ed);
  DAT_14cae0e78 = 0xffffffff;
  _DAT_14cae0e7c = 0x105;
  DAT_14cae0e7e = 0;
  DAT_14cae0e80 = 0;
  DAT_14cae0e70 = &PTR_FUN_14a915450;
  FUN_1463d1448();
  atexit(FUN_143517632);
  uStack_a0 = FUN_143518032;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae13f0,&local_a8);
  uStack_a0 = FUN_1402159ac;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae1488,&local_a8);
  FUN_145ca616c();
  atexit((_func_5014 *)&LAB_143518c9c);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14351cabe;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cae1500,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14351cad8;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cae1610,6,&local_a8);
  FUN_145ca625c();
  atexit((_func_5014 *)&LAB_143519b77);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae1af0,L"GPUSort.DebugOffsets",&local_a8,L"Debug GPU sort offsets.");
  atexit(FUN_143519c99);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_14078dbce(&DAT_14cae1b08,L"GPUSort.DebugSort",&local_a8,L"Debug GPU sorting.");
  atexit(FUN_143519cde);
  uStack_a0 = FUN_144a92d28;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae1ba8,&local_a8);
  _DAT_14cae1bc0 = 0xffffffff;
  _DAT_14cae1bc4 = 0x105;
  DAT_14cae1bc6 = 0;
  _DAT_14cae1bc8 = 0;
  uRam000000014cae1bd0 = 0;
  DAT_14cae1bd8 = 0;
  DAT_14cae1be0 = 0;
  DAT_14cae1be8 = 0;
  DAT_14cae1bf0 = 0;
  DAT_14cae1bb8 = &PTR_FUN_14a9155a0;
  FUN_1463d14f0();
  atexit(FUN_143519d2f);
  _DAT_14cae1c00 = 0xffffffff;
  _DAT_14cae1c04 = 0x105;
  DAT_14cae1c06 = 0;
  DAT_14cae1c08 = 0;
  DAT_14cae1c10 = 0;
  DAT_14cae1bf8 = &PTR_FUN_14a915620;
  FUN_1463d16a4();
  atexit(FUN_143519d5e);
  uStack_a0 = FUN_1415df36c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae1d30,&local_a8);
  uStack_a0 = FUN_1415b1ee6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae1e58,&local_a8);
  uStack_a0 = FUN_1415c54ba;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae1f80,&local_a8);
  uStack_a0 = FUN_1415696a2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae20a8,&local_a8);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143520d40 FUN_143520d40 body=69 status=ok
// SIG undefined FUN_143520d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143520d40(void)

{
  _DAT_14cae3d70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143520d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae3d78,1);
  return;
}



// FUNCTION 143520d85 FUN_143520d85 body=69 status=ok
// SIG undefined FUN_143520d85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143520d85(void)

{
  _DAT_14cae3d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143520dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae3d88,1);
  return;
}



// FUNCTION 143520dca FUN_143520dca body=69 status=ok
// SIG undefined FUN_143520dca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143520dca(void)

{
  _DAT_14cae3d90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143520e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae3d98,1);
  return;
}



// FUNCTION 143520e0f FUN_143520e0f body=69 status=ok
// SIG undefined FUN_143520e0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143520e0f(void)

{
  _DAT_14cae3da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143520e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae3db0,1);
  return;
}



// FUNCTION 143520e54 FUN_143520e54 body=155 status=ok
// SIG undefined FUN_143520e54(void)

void FUN_143520e54(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_14cae3e40;
  lVar2 = -0xc0;
  do {
    *puVar1 = &PTR_FUN_14a920000;
    FUN_144725486(puVar1);
    *puVar1 = &PTR_FUN_14a920030;
    FUN_14476820c(puVar1 + 2);
    *puVar1 = &PTR_FUN_14a38cd70;
    *(undefined1 *)((longlong)puVar1 + 0xe) = 2;
    if ((*(int *)(puVar1 + 1) != -1) && (DAT_14c868880 == '\0')) {
      FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                    L"A FRenderResource was deleted without being released first!");
    }
    puVar1 = puVar1 + -8;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143520efc FUN_143520efc body=260 status=ok
// SIG undefined FUN_143520efc(void)

void FUN_143520efc(ulonglong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)&local_38 + lVar1) = (&DAT_14cae3dd8)[lVar1];
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  puVar5 = (undefined4 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 6;
  if ((undefined4 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x20);
    puVar5 = (undefined4 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 6;
  }
  *param_1 = (ulonglong)puVar2;
  *(undefined8 *)(puVar5 + 4) = local_28;
  *puVar5 = (undefined4)local_38;
  puVar5[1] = local_38._4_4_;
  puVar5[2] = uStack_30;
  puVar5[3] = uStack_2c;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 4;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x28);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 4;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a2dc3b0;
  puVar3[2] = puVar5;
  *(undefined4 *)(puVar3 + 3) = 3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143521002 FUN_143521002 body=260 status=ok
// SIG undefined FUN_143521002(void)

void FUN_143521002(ulonglong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)&local_38 + lVar1) = (&DAT_14cae3dd8)[lVar1];
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  puVar5 = (undefined4 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 6;
  if ((undefined4 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x20);
    puVar5 = (undefined4 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 6;
  }
  *param_1 = (ulonglong)puVar2;
  *(undefined8 *)(puVar5 + 4) = local_28;
  *puVar5 = (undefined4)local_38;
  puVar5[1] = local_38._4_4_;
  puVar5[2] = uStack_30;
  puVar5[3] = uStack_2c;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 4;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x28);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 4;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a2dc3b8;
  puVar3[2] = puVar5;
  *(undefined4 *)(puVar3 + 3) = 3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143521108 FUN_143521108 body=766 status=ok
// SIG undefined FUN_143521108(void)

void FUN_143521108(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined *local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar5 = *(ulonglong **)(param_2 + 0x18);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar2 = *(uint *)((longlong)puVar5 + 0x17c);
  if (uVar2 != uVar6) {
    *(uint *)((longlong)puVar5 + 0x17c) = uVar6;
    puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
    if ((undefined8 *)puVar5[1] < puVar8) {
      FUN_140023dd8(puVar5,0x20);
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
    }
    *puVar5 = (ulonglong)puVar8;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar7;
    puVar5[6] = (ulonglong)(puVar7 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar3;
  }
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0x38;
  }
  *puVar1 = (ulonglong)puVar8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1d98) {
    FUN_144b3d300(&DAT_14c9e1d98);
    if (DAT_14c9e1d98 == -1) {
      FUN_14596f92a(&local_50);
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FEmptyShaderParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x7a6;
      local_78 = &local_50;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_50 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143530aab);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
  }
  local_50 = &DAT_14cae46f0;
  local_48 = DAT_14c9e1d60;
  if (DAT_14c9e1d60 != 0) {
    LOCK();
    *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14c9e1d18;
  local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffffffffff00);
  FUN_140068f1a(puVar7,&local_51,&local_50,0x10);
  puVar7[0x37] = param_1;
  *puVar7 = &PTR_FUN_14a920090;
  iVar4 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_143204634(param_2,puVar7);
  if (*(uint *)((longlong)puVar5 + 0x17c) != uVar2) {
    *(uint *)((longlong)puVar5 + 0x17c) = uVar2;
    puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
    if ((undefined8 *)puVar5[1] < puVar8) {
      FUN_140023dd8(puVar5,0x20);
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
    }
    *puVar5 = (ulonglong)puVar8;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar7;
    puVar5[6] = (ulonglong)(puVar7 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143521408 FUN_143521408 body=766 status=ok
// SIG undefined FUN_143521408(void)

void FUN_143521408(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined *local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar5 = *(ulonglong **)(param_2 + 0x18);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar2 = *(uint *)((longlong)puVar5 + 0x17c);
  if (uVar2 != uVar6) {
    *(uint *)((longlong)puVar5 + 0x17c) = uVar6;
    puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
    if ((undefined8 *)puVar5[1] < puVar8) {
      FUN_140023dd8(puVar5,0x20);
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
    }
    *puVar5 = (ulonglong)puVar8;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar7;
    puVar5[6] = (ulonglong)(puVar7 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar3;
  }
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0x38;
  }
  *puVar1 = (ulonglong)puVar8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1d98) {
    FUN_144b3d300(&DAT_14c9e1d98);
    if (DAT_14c9e1d98 == -1) {
      FUN_14596f92a(&local_50);
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FEmptyShaderParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x7a6;
      local_78 = &local_50;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_50 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143530aab);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
  }
  local_50 = &DAT_14cae4700;
  local_48 = DAT_14c9e1d60;
  if (DAT_14c9e1d60 != 0) {
    LOCK();
    *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14c9e1d18;
  local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffffffffff00);
  FUN_140068f1a(puVar7,&local_51,&local_50,0x10);
  puVar7[0x37] = param_1;
  *puVar7 = &PTR_FUN_14a9200b0;
  iVar4 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_143204634(param_2,puVar7);
  if (*(uint *)((longlong)puVar5 + 0x17c) != uVar2) {
    *(uint *)((longlong)puVar5 + 0x17c) = uVar2;
    puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
    if ((undefined8 *)puVar5[1] < puVar8) {
      FUN_140023dd8(puVar5,0x20);
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
    }
    *puVar5 = (ulonglong)puVar8;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar7;
    puVar5[6] = (ulonglong)(puVar7 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143521707 FUN_143521707 body=69 status=ok
// SIG undefined FUN_143521707(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521707(void)

{
  _DAT_14cae3fb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae3fc0,1);
  return;
}



// FUNCTION 14352174c FUN_14352174c body=321 status=ok
// SIG undefined FUN_14352174c(void)

ulonglong FUN_14352174c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar2 = DAT_14cae3fc8;
  if (DAT_14cae3fd0 < 1) {
    return 0;
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  if (*(int *)(lVar2 + uVar7 * 4) < 1) {
    return 0;
  }
  if (DAT_14cae3fd8 == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HairStrands.ViewMode",1);
    if (plVar6 != (longlong *)0x0) {
      DAT_14cae3fd8 = (**(code **)(*plVar6 + 0x68))(plVar6);
    }
    if (DAT_14cae3fd8 == 0) goto LAB_14352182e;
  }
  uVar3 = *(int *)(DAT_14cae3fd8 + 4) - 1;
  if (uVar3 < 0x28) {
    return (ulonglong)CONCAT31((int3)(uVar3 >> 8),(&DAT_14a920644)[uVar3]);
  }
LAB_14352182e:
  if ((DAT_14cae4040 & 1) == 0) {
    FUN_147ae4f14();
  }
  if ((*(longlong *)(param_1 + 8) != 0) && ((*(byte *)(*(longlong *)(param_1 + 8) + 0x4c) & 4) != 0)
     ) {
    uVar7 = FUN_147ae4e52(param_1 + 0x1e14);
    return uVar7;
  }
  return 0;
}



// FUNCTION 143521892 FUN_143521892 body=346 status=ok
// SIG undefined FUN_143521892(void)

void FUN_143521892(undefined1 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147ae4ef8();
  FUN_1446f470e(&local_48,uVar4,1);
  local_58 = &local_48;
  FUN_147af1882(&local_3c,&local_58);
  lVar1 = DAT_14cae3fe0 + (longlong)local_3c * 0x50;
  ppuVar5 = (undefined8 **)(lVar1 + 8);
  FUN_140056680(&local_58,uVar4);
  if (ppuVar5 == &local_58) {
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*ppuVar5 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *ppuVar5 = local_58;
    local_58 = (undefined8 *)0x0;
    *(undefined4 *)(lVar1 + 0x10) = local_50;
    *(undefined4 *)(lVar1 + 0x14) = local_4c;
  }
  *(undefined8 *)(lVar1 + 0x18) = local_48;
  plVar2 = (longlong *)*param_2;
  plVar3 = *(longlong **)(lVar1 + 0x20);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x20) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x28) = (int)param_2[1];
  plVar2 = (longlong *)*param_3;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x30) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x38) = (int)param_3[1];
  *(undefined1 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x41) = 1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435219ed FUN_1435219ed body=47 status=ok
// SIG undefined FUN_1435219ed(void)

void FUN_1435219ed(void)

{
  DAT_14cae4090 = 0;
  if (DAT_14cae4088 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&DAT_14cae4048);
  return;
}



// FUNCTION 143521a1c FUN_143521a1c body=69 status=ok
// SIG undefined FUN_143521a1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521a1c(void)

{
  _DAT_14cae40b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae40c0,1);
  return;
}



// FUNCTION 143521a61 FUN_143521a61 body=69 status=ok
// SIG undefined FUN_143521a61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521a61(void)

{
  _DAT_14cae40d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae40d8,1);
  return;
}



// FUNCTION 143521aa6 FUN_143521aa6 body=69 status=ok
// SIG undefined FUN_143521aa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521aa6(void)

{
  _DAT_14cae40e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae40f0,1);
  return;
}



// FUNCTION 143521aeb FUN_143521aeb body=69 status=ok
// SIG undefined FUN_143521aeb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521aeb(void)

{
  _DAT_14cae4100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4108,1);
  return;
}



// FUNCTION 143521b30 FUN_143521b30 body=69 status=ok
// SIG undefined FUN_143521b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521b30(void)

{
  _DAT_14cae4118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4120,1);
  return;
}



// FUNCTION 143521b75 FUN_143521b75 body=69 status=ok
// SIG undefined FUN_143521b75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521b75(void)

{
  _DAT_14cae4130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4138,1);
  return;
}



// FUNCTION 143521bba FUN_143521bba body=69 status=ok
// SIG undefined FUN_143521bba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521bba(void)

{
  _DAT_14cae4148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4150,1);
  return;
}



// FUNCTION 143521bff FUN_143521bff body=69 status=ok
// SIG undefined FUN_143521bff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521bff(void)

{
  _DAT_14cae4160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521c41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4168,1);
  return;
}



// FUNCTION 143521c44 FUN_143521c44 body=69 status=ok
// SIG undefined FUN_143521c44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521c44(void)

{
  _DAT_14cae4888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4890,1);
  return;
}



// FUNCTION 143521c89 FUN_143521c89 body=69 status=ok
// SIG undefined FUN_143521c89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521c89(void)

{
  _DAT_14cae4178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4180,1);
  return;
}



// FUNCTION 143521cce FUN_143521cce body=69 status=ok
// SIG undefined FUN_143521cce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521cce(void)

{
  _DAT_14cae4190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4198,1);
  return;
}



// FUNCTION 143521d13 FUN_143521d13 body=69 status=ok
// SIG undefined FUN_143521d13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521d13(void)

{
  _DAT_14cae48a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae48a8,1);
  return;
}



// FUNCTION 143521d58 FUN_143521d58 body=69 status=ok
// SIG undefined FUN_143521d58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521d58(void)

{
  _DAT_14cae41a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae41b0,1);
  return;
}



// FUNCTION 143521d9d FUN_143521d9d body=69 status=ok
// SIG undefined FUN_143521d9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521d9d(void)

{
  _DAT_14cae41c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae41c8,1);
  return;
}



// FUNCTION 143521de2 FUN_143521de2 body=69 status=ok
// SIG undefined FUN_143521de2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521de2(void)

{
  _DAT_14cae41d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae41e0,1);
  return;
}



// FUNCTION 143521e27 FUN_143521e27 body=69 status=ok
// SIG undefined FUN_143521e27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521e27(void)

{
  _DAT_14cae41f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae41f8,1);
  return;
}



// FUNCTION 143521e6c FUN_143521e6c body=69 status=ok
// SIG undefined FUN_143521e6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521e6c(void)

{
  _DAT_14cae4208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4210,1);
  return;
}



// FUNCTION 143521eb1 FUN_143521eb1 body=69 status=ok
// SIG undefined FUN_143521eb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521eb1(void)

{
  _DAT_14cae4220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4228,1);
  return;
}



// FUNCTION 143521ef6 FUN_143521ef6 body=69 status=ok
// SIG undefined FUN_143521ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521ef6(void)

{
  _DAT_14cae4238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143521f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4240,1);
  return;
}



// FUNCTION 143521f3b FUN_143521f3b body=363 status=ok
// SIG undefined FUN_143521f3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143521f3b(void)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_88 [40];
  void *local_60;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  void *local_48;
  uint local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  fVar5 = *DAT_14cae4218;
  if ((fVar5 != _DAT_14c761588) || (NAN(fVar5) || NAN(_DAT_14c761588))) {
    _DAT_14c761588 = fVar5;
    FUN_1461130fe(&local_48,0x30,1,0x200000);
    pvVar1 = local_48;
    local_60 = (void *)0x0;
    lVar4 = (longlong)(int)local_40;
    local_58 = local_40;
    if (lVar4 == 0) {
      local_54 = 0;
      local_40 = 0;
    }
    else {
      FUN_14010590e(&local_60,local_40,0);
      memcpy(local_60,pvVar1,lVar4 << 3);
    }
    uVar3 = (ulonglong)local_38;
    local_50 = local_38;
    pvVar1 = local_60;
    if (local_38 != local_40) {
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      do {
        uVar2 = (ulonglong)(int)uVar3;
        lVar4 = *(longlong *)((longlong)pvVar1 + uVar2 * 8);
        if ((*(byte *)(lVar4 + 0xbd8) & 1) != 0) {
          if ((*(float *)(lVar4 + 0xbdc) != fVar5) || (NAN(*(float *)(lVar4 + 0xbdc)) || NAN(fVar5))
             ) {
            *(float *)(lVar4 + 0xbdc) = fVar5;
            FUN_143529292(lVar4,CONCAT71((int7)(int3)(uVar3 >> 8),1),1);
            uVar2 = (ulonglong)(int)local_50;
            pvVar1 = local_60;
          }
        }
        uVar3 = uVar2;
        do {
          uVar3 = uVar3 + 1;
          local_50 = (uint)uVar3;
          if ((longlong)(int)local_58 <= (longlong)uVar3) break;
        } while (*(longlong *)((longlong)pvVar1 + uVar3 * 8) == 0);
      } while (local_50 != local_40);
    }
    if (pvVar1 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435220a8 FUN_1435220a8 body=260 status=ok
// SIG undefined FUN_1435220a8(void)

undefined8 *
FUN_1435220a8(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9)

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
  
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = (int)param_2[1];
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  uVar4 = param_5[4];
  uVar5 = param_5[5];
  uVar6 = param_5[6];
  uVar7 = param_5[7];
  uVar8 = *(undefined8 *)(param_5 + 8);
  uVar9 = *(undefined8 *)(param_5 + 10);
  *(undefined4 *)(param_1 + 3) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = *(undefined8 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_8;
  *(undefined4 *)(param_1 + 0xd) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x6c) = param_9;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 0x13) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 0x15) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_4;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1435221ac FUN_1435221ac body=817 status=ok
// SIG undefined FUN_1435221ac(void)

void FUN_1435221ac(void)

{
  void *_Src;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_1a8 [32];
  void *local_188;
  undefined8 local_180;
  void *local_178;
  ulonglong uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158 [2];
  int local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_fc;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_168 = 0;
  uStack_160 = 0;
  uVar6 = 0x238946;
  lVar9 = 0x78;
  do {
    uVar1 = uStack_160;
    puVar7 = &DAT_14c846400;
    puVar8 = local_158;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    lVar4 = (longlong)(int)uStack_160;
    uVar2 = (int)uStack_160 + 1;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar2);
    if (uStack_160._4_4_ < uVar2) {
      FUN_1410491dc(&local_168,uVar1 & 0xffffffff);
    }
    puVar7 = local_158;
    puVar8 = (undefined8 *)(lVar4 * 0x80 + local_168);
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar3 = uVar6 * 0xbb38435;
    uVar6 = uVar6 * -0x4b9b4d07 + 0x9d6f2492;
    *(undefined8 *)(local_168 + -0x78 + lVar9) = 0x3ff0000000000000;
    puVar7 = (undefined8 *)(local_168 + -0x70 + lVar9);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7 = (undefined8 *)(local_168 + -0x60 + lVar9);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)(local_168 + -0x50 + lVar9) = 0x3ff0000000000000;
    puVar7 = (undefined8 *)(local_168 + -0x48 + lVar9);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7 = (undefined8 *)(local_168 + -0x38 + lVar9);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)(local_168 + -0x28 + lVar9) = 0x3ff0000000000000;
    *(undefined8 *)(local_168 + -0x20 + lVar9) = 0;
    *(double *)(local_168 + -0x18 + lVar9) =
         (double)((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * 10000.0;
    *(double *)(local_168 + -0x10 + lVar9) =
         (double)((float)(iVar3 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) * 10000.0;
    *(undefined8 *)(local_168 + -8 + lVar9) = 0;
    *(undefined8 *)(local_168 + lVar9) = 0x3ff0000000000000;
    lVar9 = lVar9 + 0x80;
  } while (lVar9 != 0x1f478);
  local_178 = (void *)0x0;
  uStack_170 = uStack_160 & 0xffffffff;
  if ((int)uStack_160 != 0) {
    FUN_140518214(&local_178,0);
    _Src = local_178;
    if (0 < (longlong)(int)uStack_160) {
      lVar9 = 0;
      do {
        puVar7 = (undefined8 *)(local_168 + lVar9);
        puVar8 = (undefined8 *)((longlong)local_178 + lVar9);
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        lVar9 = lVar9 + 0x80;
      } while ((longlong)(int)uStack_160 * 0x80 != lVar9);
    }
    lVar9 = (longlong)(int)uStack_170;
    local_188 = (void *)0x0;
    local_180._0_4_ = (int)uStack_170;
    if (lVar9 != 0) {
      FUN_140aa14ca(&local_188,uStack_170 & 0xffffffff,0);
      memcpy(local_188,_Src,lVar9 << 7);
      local_c8 = local_188;
      local_148 = (int)local_180;
      local_bc = local_180._4_4_;
      goto LAB_1435223c1;
    }
  }
  local_bc = 0;
  local_c8 = (void *)0x0;
  local_148 = 0;
LAB_1435223c1:
  local_158[0] = 0;
  local_158[1] = 0;
  local_140 = 0xc059000000000000;
  local_138 = 0xc059000000000000;
  local_130 = 0xc059000000000000;
  local_128 = 0x4059000000000000;
  local_120 = 0x4059000000000000;
  local_118 = 0x4059000000000000;
  local_110 = 1;
  local_fc = 0x10;
  local_f4 = 0x3f80000000000001;
  local_ec = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_c0 = local_148;
  FUN_144a5f54e(local_158);
  FUN_14082dd98(local_158);
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435224de FUN_1435224de body=69 status=ok
// SIG undefined FUN_1435224de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435224de(void)

{
  _DAT_14cae4268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143522520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4270,1);
  return;
}



// FUNCTION 143522524 FUN_143522524 body=69 status=ok
// SIG undefined FUN_143522524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143522524(void)

{
  _DAT_14cae4278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143522566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4280,1);
  return;
}



// FUNCTION 14352256a FUN_14352256a body=69 status=ok
// SIG undefined FUN_14352256a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352256a(void)

{
  _DAT_14cae4288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435225ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4290,1);
  return;
}



// FUNCTION 1435225af FUN_1435225af body=49 status=ok
// SIG undefined FUN_1435225af(void)

void FUN_1435225af(void)

{
  FUN_144760e21(DAT_14cae4298,DAT_14cae42a0);
  if (DAT_14cae4298 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435225fe FUN_1435225fe body=69 status=ok
// SIG undefined FUN_1435225fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435225fe(void)

{
  _DAT_14cae42b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143522640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae42c0,1);
  return;
}



// FUNCTION 143522644 FUN_143522644 body=69 status=ok
// SIG undefined FUN_143522644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143522644(void)

{
  _DAT_14cae42c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143522686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae42d0,1);
  return;
}



// FUNCTION 14352268a FUN_14352268a body=4937 status=ok
// SIG undefined FUN_14352268a(void)

void FUN_14352268a(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
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
  char cVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  int iVar29;
  longlong lVar30;
  undefined7 uVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined8 *puVar36;
  int iVar37;
  int iVar38;
  bool bVar39;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 *local_140;
  longlong local_138;
  int local_12c;
  longlong *local_128;
  longlong local_120;
  undefined4 local_114;
  ulonglong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  int local_ec;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  int local_bc;
  int *local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar24 = *(uint *)(param_1 + 0x8e0) - 1;
  if ((int)*(uint *)(DAT_14cae40f8 + 4) < (int)uVar24) {
    uVar24 = *(uint *)(DAT_14cae40f8 + 4);
  }
  bVar23 = *(byte *)(*(longlong *)(param_1 + 0x298) + 0x8f);
  uVar25 = (uint)bVar23;
  if ((int)(uint)bVar23 < (int)uVar24) {
    uVar25 = uVar24;
  }
  uVar26 = uVar24 + 1;
  if ((int)uVar24 < 0) {
    uVar26 = *(uint *)(param_1 + 0x8e0);
  }
  iVar29 = *(int *)(*(longlong *)(param_1 + 0x210) + 8);
  if ((longlong)iVar29 == 1) {
    local_114 = (undefined4)CONCAT71((int7)(int3)((uint)iVar29 >> 8),DAT_14ca96500);
  }
  else if (iVar29 < 3) {
    local_114 = 0;
  }
  else {
    lVar30 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar29 * 2) * 0x3c;
    local_114 = 0;
    if ((*(longlong *)(&DAT_14ca814b0 + lVar30) != DAT_14ca81490) &&
       (*(ushort *)(&DAT_14ca85070 + (longlong)iVar29 * 2) != 0xc)) {
      uVar31 = (undefined7)((ulonglong)lVar30 >> 8);
      if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar30 + 3) & 0x10) == 0) {
        local_114 = (undefined4)CONCAT71(uVar31,1);
      }
      else {
        uVar33 = CONCAT71(uVar31,*(undefined1 *)((longlong)&DAT_14ca814c8 + lVar30 + 3)) &
                 0xffffffffffffff20;
        local_114 = (undefined4)CONCAT71((int7)(uVar33 >> 8),(byte)uVar33 >> 5);
      }
    }
  }
  local_88 = param_2;
  if ((int)uVar25 < (int)uVar26) {
    local_90 = param_5 + 0x10;
    local_98 = param_5 + 0x90;
    local_b0 = param_5 + 0x130;
    local_a8 = param_5 + 0x110;
    uVar33 = (ulonglong)uVar25;
    local_a0 = (ulonglong)uVar26;
    lVar30 = 0;
    local_120 = param_4;
    local_100 = param_3;
    local_f8 = param_1;
    do {
      local_e0 = (uint)*(byte *)(param_4 + 0x2a);
      lVar35 = local_98;
      if (local_e0 != 0) {
        lVar35 = local_90;
      }
      if ((*(int *)(lVar35 + 8 + uVar33 * 0x10) != 0) && (0 < *(int *)(param_4 + 0x10))) {
        local_128 = (longlong *)(lVar35 + uVar33 * 0x10);
        local_78 = *(longlong *)(**(longlong **)(param_1 + 0x298) + uVar33 * 8);
        local_80 = local_78 + 0x10;
        local_d0 = (ulonglong)*(uint *)(local_78 + 0x38);
        lVar35 = local_a8;
        if (local_e0 != 0) {
          lVar35 = local_b0;
        }
        local_b8 = (int *)(lVar35 + uVar33 * 4);
        local_d8 = (uint)uVar33 & 0xf;
        local_dc = local_e0 << 4;
        lVar35 = 0;
        local_c8 = uVar33;
        do {
          local_150 = (undefined4)local_c8;
          local_158 = local_e0;
          local_148 = 1;
          local_138 = lVar35;
          FUN_1405ecb94(param_1,&local_68,local_88);
          lVar35 = local_138;
          if (0 < (int)local_d0) {
            uVar33 = 0;
            plVar20 = local_128;
            do {
              lVar17 = *(longlong *)(local_78 + 0x30);
              if (*(longlong *)(local_78 + 0x30) == 0) {
                lVar17 = local_80;
              }
              if (*(int *)(lVar17 + 8 + uVar33 * 0x1c) != 0) {
                local_110 = uVar33;
                if ((char)local_114 == '\0') {
                  local_70 = (longlong)*local_b8;
                  uVar24 = (int)plVar20[1] / 2;
                  local_e8 = (ulonglong)uVar24;
                  iVar29 = 1;
                  if (*(char *)(param_4 + 0x29) == '\0') {
                    iVar29 = uVar24 + 0x7e;
                    if (-1 < (int)(uVar24 + 0x3f)) {
                      iVar29 = uVar24 + 0x3f;
                    }
                    if ((int)plVar20[1] < 2) goto LAB_14352366d;
                    iVar29 = iVar29 >> 6;
                  }
                  iVar16 = 0;
                  local_d4 = 0;
                  iVar37 = 0;
                  local_bc = iVar29;
                  do {
                    iVar29 = (int)param_3[1];
                    iVar38 = (int)param_3[2];
                    iVar3 = (iVar38 + 0x44) / 0x44;
                    *(int *)(param_3 + 2) = iVar38 + 1;
                    local_12c = iVar16;
                    local_108 = lVar30;
                    if (iVar29 < iVar3) {
                      do {
                        local_ec = iVar29;
                        lVar30 = FUN_14001cc68(0x3fc0,0x10);
                        lVar35 = 0;
                        do {
                          *(undefined8 *)(lVar30 + 0xa8 + lVar35) = 0;
                          puVar32 = (undefined8 *)(lVar30 + 0xb8 + lVar35);
                          *puVar32 = 0;
                          puVar32[1] = 0;
                          *(undefined8 *)(lVar30 + 200 + lVar35) = 0;
                          *(undefined8 *)(lVar30 + 0xd0 + lVar35) = 0xffffffff;
                          *(undefined8 *)(lVar30 + 0xd8 + lVar35) = 0xff0000ffffffff;
                          *(undefined1 *)(lVar30 + 0xe0 + lVar35) = 0;
                          *(undefined4 *)(lVar30 + 0xe4 + lVar35) = 0x40c00f07;
                          pbVar2 = (byte *)(lVar30 + 0xe8 + lVar35);
                          *pbVar2 = *pbVar2 & 0xfc;
                          *(undefined1 **)(lVar30 + 0xb0 + lVar35) = &DAT_100000001;
                          FUN_14470b9e0(lVar30 + lVar35,1);
                          param_3 = local_100;
                          lVar35 = lVar35 + 0xf0;
                        } while (lVar35 != 0x3fc0);
                        iVar29 = (int)local_100[1];
                        *(uint *)(local_100 + 1) = iVar29 + 1U;
                        if (*(uint *)((longlong)local_100 + 0xc) < iVar29 + 1U) {
                          FUN_14002baf6(local_100,iVar29);
                        }
                        *(longlong *)(*param_3 + (longlong)iVar29 * 8) = lVar30;
                        iVar29 = local_ec + 1;
                        lVar35 = local_138;
                        param_4 = local_120;
                        param_1 = local_f8;
                      } while (iVar29 != iVar3);
                    }
                    uVar33 = local_c8;
                    puVar32 = (undefined8 *)
                              ((ulonglong)(uint)(iVar38 % 0x44) * 0xf0 +
                              *(longlong *)(*param_3 + (longlong)(iVar38 / 0x44) * 8));
                    if (((*(byte *)(param_1 + 0x6c) & 0x20) != 0) &&
                       ((longlong)*(int *)(param_1 + 0xf0) != 0)) {
                      uVar34 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar34) ==
                            *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x4c0)) {
                          if ((~uVar34 & 0x7fffffff8) != 0) {
                            bVar23 = *(byte *)(param_1 + 0x6d) >> 3;
                            goto LAB_143522b3f;
                          }
                          break;
                        }
                        uVar34 = uVar34 + 8;
                      } while ((longlong)*(int *)(param_1 + 0xf0) * 8 != uVar34);
                    }
                    bVar23 = *(byte *)(param_1 + 0x6d);
LAB_143522b3f:
                    local_150 = CONCAT31(local_150._1_3_,*(undefined1 *)(param_4 + 0x25 + lVar35));
                    local_158 = CONCAT31(local_158._1_3_,bVar23) & 0xffffff07;
                    local_148 = CONCAT31(local_148._1_3_,1);
                    local_140 = puVar32;
                    cVar15 = FUN_14015294c(param_1,local_c8 & 0xffffffff,0);
                    lVar17 = local_108;
                    lVar30 = local_108;
                    plVar20 = local_128;
                    lVar35 = local_138;
                    if (cVar15 != '\0') {
                      puVar32[0x17] = *(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + uVar33 * 8);
                      puVar36 = (undefined8 *)puVar32[0x15];
                      if ((undefined8 *)puVar32[0x15] == (undefined8 *)0x0) {
                        puVar36 = puVar32;
                      }
                      puVar36[7] = *(undefined8 *)(param_4 + local_138 * 8);
                      *(undefined8 *)((longlong)puVar36 + 0x74) = 0x3f80000000000000;
                      *(uint *)((longlong)puVar36 + 0x7c) =
                           (*(uint *)((longlong)puVar36 + 0x7c) & 0xfffffe00) + local_d8 | local_dc;
                      *puVar36 = *(undefined8 *)(param_1 + 0x250);
                      lVar30 = puVar36[2];
                      if (lVar30 != local_68) {
                        puVar36[2] = local_68;
                        if (local_68 != 0) {
                          LOCK();
                          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
                          UNLOCK();
                        }
                        if (lVar30 != 0) {
                          LOCK();
                          puVar1 = (uint *)(lVar30 + 8);
                          uVar24 = *puVar1;
                          *puVar1 = *puVar1 - 1;
                          UNLOCK();
                          if ((uVar24 & 0x3fffffff) == 1) {
                            puVar1 = (uint *)(lVar30 + 8);
                            LOCK();
                            uVar24 = *puVar1;
                            *puVar1 = *puVar1 | 0x40000000;
                            UNLOCK();
                            if ((uVar24 >> 0x1e & 1) == 0) {
                              bVar23 = *(byte *)(lVar30 + 0xd);
                              plVar21 = (longlong *)FUN_14001cc68(0x10,8);
                              plVar21[1] = lVar30;
                              plVar20 = DAT_14ca843c0;
                              plVar18 = DAT_14ca843c8;
                              param_4 = local_120;
                              param_1 = local_f8;
                              if ((bVar23 & 2) == 0) {
                                do {
                                  *plVar21 = (longlong)plVar20;
                                  LOCK();
                                  bVar39 = plVar20 != DAT_14ca843c0;
                                  plVar18 = plVar21;
                                  if (bVar39) {
                                    plVar20 = DAT_14ca843c0;
                                    plVar18 = DAT_14ca843c0;
                                  }
                                  DAT_14ca843c0 = plVar18;
                                  UNLOCK();
                                } while (bVar39);
                              }
                              else {
                                do {
                                  *plVar21 = (longlong)plVar18;
                                  LOCK();
                                  bVar39 = plVar18 != DAT_14ca843c8;
                                  plVar20 = plVar21;
                                  if (bVar39) {
                                    plVar18 = DAT_14ca843c8;
                                    plVar20 = DAT_14ca843c8;
                                  }
                                  DAT_14ca843c8 = plVar20;
                                  UNLOCK();
                                } while (bVar39);
                              }
                            }
                          }
                        }
                      }
                      uVar24 = *(uint *)((longlong)puVar32 + 0xe4);
                      *(uint *)((longlong)puVar32 + 0xe4) = uVar24 | 0x100000;
                      uVar25 = (uint)*(byte *)(param_4 + 0x25 + local_138) << 0x16;
                      *(uint *)((longlong)puVar32 + 0xe4) = uVar24 & 0xffbfffff | 0x100000 | uVar25;
                      uVar26 = (uint)*(byte *)(param_4 + 0x25 + local_138) << 0x15;
                      *(uint *)((longlong)puVar32 + 0xe4) =
                           uVar24 & 0xff9fffff | 0x100000 | uVar25 | uVar26;
                      uVar27 = (*(byte *)(param_1 + 0x78) & 1) << 0xb;
                      puVar28 = (undefined8 *)(ulonglong)uVar27;
                      *(uint *)((longlong)puVar32 + 0xe4) =
                           uVar24 & 0xff9ff7ff | 0x100000 | uVar25 | uVar26 | uVar27;
                      lVar30 = 0;
                      if ((local_d4 & 1) == 0) {
                        lVar30 = (ulonglong)*(uint *)((longlong)puVar36 + 0x5c) * local_70;
                      }
                      if (*(char *)(param_4 + 0x29) == '\x01') {
                        uVar24 = (int)local_128[1] / 2;
                        puVar28 = (undefined8 *)(ulonglong)uVar24;
                        *(uint *)(puVar36 + 0xc) = uVar24;
                        puVar36[6] = *local_128;
                        *(byte *)((longlong)puVar36 + 0x7d) =
                             *(byte *)((longlong)puVar36 + 0x7d) | 4;
                        plVar20 = local_128;
                        lVar35 = local_138;
                      }
                      else {
                        iVar16 = (int)local_e8;
                        iVar29 = 0x40;
                        if (iVar16 < 0x40) {
                          iVar29 = iVar16;
                        }
                        if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1456afac4(iVar29);
                        }
                        if (*(int *)((longlong)puVar32 + 0xb4) < iVar29) {
                          puVar28 = puVar32;
                          FUN_1400cd00e(puVar32,iVar29);
                          iVar16 = (int)local_e8;
                        }
                        plVar20 = local_128;
                        lVar35 = local_138;
                        if (iVar16 == 0) {
                          local_e8 = 0;
                          param_3 = local_100;
                        }
                        else {
                          iVar38 = 0;
                          do {
                            if (iVar38 == 0) {
                              puVar19 = (undefined8 *)puVar32[0x15];
                              if ((undefined8 *)puVar32[0x15] == (undefined8 *)0x0) {
                                puVar19 = puVar32;
                              }
                            }
                            else {
                              puVar19 = (undefined8 *)FUN_147ae7596(puVar32);
                              puVar36 = (undefined8 *)puVar32[0x15];
                              if ((undefined8 *)puVar32[0x15] == (undefined8 *)0x0) {
                                puVar36 = puVar32;
                              }
                              FUN_1470e71ba(puVar19,puVar36);
                              plVar20 = local_128;
                              lVar35 = local_138;
                            }
                            puVar28 = (undefined8 *)(longlong)iVar37;
                            iVar3 = *(int *)(*plVar20 + (longlong)puVar28 * 4);
                            *(int *)(puVar19 + 0xe) = iVar3;
                            *(int *)(puVar19 + 0xc) =
                                 (*(int *)(*plVar20 + 4 + (longlong)puVar28 * 4) - iVar3) + 1;
                            iVar3 = iVar37 + 2;
                            if (iVar16 + -1 == iVar38) {
                              iVar3 = iVar37;
                            }
                            iVar37 = iVar3;
                            iVar38 = iVar38 + 1;
                          } while (iVar29 + (uint)(iVar29 == 0) != iVar38);
                          local_e8 = (ulonglong)(uint)((int)local_e8 - iVar38);
                          param_4 = local_120;
                          param_3 = local_100;
                          param_1 = local_f8;
                        }
                      }
                      lVar30 = lVar30 + lVar17;
                      local_d4 = (uint)CONCAT71((int7)((ulonglong)puVar28 >> 8),1);
                      if ((lVar30 < *(int *)(DAT_14cae4170 + 4)) &&
                         (local_108 = lVar30,
                         FUN_1436a14f8(param_3,*(undefined4 *)(param_4 + 0x20),puVar32),
                         lVar30 = local_108, plVar20 = local_128, lVar35 = local_138,
                         *(longlong *)(param_1 + 0x2c0) != 0)) {
                        iVar29 = (int)param_3[1];
                        iVar16 = (int)param_3[2];
                        iVar38 = (iVar16 + 0x44) / 0x44;
                        *(int *)(param_3 + 2) = iVar16 + 1;
                        if (iVar29 < iVar38) {
                          do {
                            local_ec = iVar29;
                            lVar30 = FUN_14001cc68(0x3fc0,0x10);
                            lVar35 = 0;
                            do {
                              *(undefined8 *)(lVar30 + 0xa8 + lVar35) = 0;
                              puVar36 = (undefined8 *)(lVar30 + 0xb8 + lVar35);
                              *puVar36 = 0;
                              puVar36[1] = 0;
                              *(undefined8 *)(lVar30 + 200 + lVar35) = 0;
                              *(undefined8 *)(lVar30 + 0xd0 + lVar35) = 0xffffffff;
                              *(undefined8 *)(lVar30 + 0xd8 + lVar35) = 0xff0000ffffffff;
                              *(undefined1 *)(lVar30 + 0xe0 + lVar35) = 0;
                              *(undefined4 *)(lVar30 + 0xe4 + lVar35) = 0x40c00f07;
                              pbVar2 = (byte *)(lVar30 + 0xe8 + lVar35);
                              *pbVar2 = *pbVar2 & 0xfc;
                              *(undefined1 **)(lVar30 + 0xb0 + lVar35) = &DAT_100000001;
                              FUN_14470b9e0(lVar30 + lVar35,1);
                              param_3 = local_100;
                              lVar35 = lVar35 + 0xf0;
                            } while (lVar35 != 0x3fc0);
                            iVar29 = (int)local_100[1];
                            *(uint *)(local_100 + 1) = iVar29 + 1U;
                            if (*(uint *)((longlong)local_100 + 0xc) < iVar29 + 1U) {
                              FUN_14002baf6(local_100,iVar29);
                            }
                            *(longlong *)(*param_3 + (longlong)iVar29 * 8) = lVar30;
                            iVar29 = local_ec + 1;
                          } while (iVar29 != iVar38);
                        }
                        puVar36 = (undefined8 *)
                                  ((ulonglong)(uint)(iVar16 % 0x44) * 0xf0 +
                                  *(longlong *)(*param_3 + (longlong)(iVar16 / 0x44) * 8));
                        if (puVar36 != puVar32) {
                          puVar28 = (undefined8 *)puVar36[0x15];
                          if ((undefined8 *)puVar36[0x15] == (undefined8 *)0x0) {
                            puVar28 = puVar36;
                          }
                          FUN_1446fc26f(puVar28,*(undefined4 *)(puVar36 + 0x16));
                          iVar29 = *(int *)(puVar32 + 0x16);
                          puVar28 = (undefined8 *)puVar32[0x15];
                          *(int *)(puVar36 + 0x16) = iVar29;
                          if (iVar29 == 0 && *(int *)((longlong)puVar36 + 0xb4) == 0) {
                            *(undefined4 *)((longlong)puVar36 + 0xb4) = 1;
                          }
                          else {
                            if (puVar28 == (undefined8 *)0x0) {
                              puVar28 = puVar32;
                            }
                            FUN_14473945a(puVar36,iVar29);
                            puVar19 = (undefined8 *)puVar36[0x15];
                            if ((undefined8 *)puVar36[0x15] == (undefined8 *)0x0) {
                              puVar19 = puVar36;
                            }
                            FUN_1447393f1(puVar19,puVar28,iVar29);
                          }
                        }
                        param_1 = local_f8;
                        uVar4 = *(undefined4 *)(puVar32 + 0x17);
                        uVar5 = *(undefined4 *)((longlong)puVar32 + 0xbc);
                        uVar6 = *(undefined4 *)(puVar32 + 0x18);
                        uVar7 = *(undefined4 *)((longlong)puVar32 + 0xc4);
                        uVar8 = *(undefined4 *)(puVar32 + 0x19);
                        uVar9 = *(undefined4 *)((longlong)puVar32 + 0xcc);
                        uVar10 = *(undefined4 *)(puVar32 + 0x1a);
                        uVar11 = *(undefined4 *)((longlong)puVar32 + 0xd4);
                        uVar12 = *(undefined4 *)((longlong)puVar32 + 0xdc);
                        uVar13 = *(undefined4 *)(puVar32 + 0x1c);
                        uVar14 = *(undefined4 *)((longlong)puVar32 + 0xe4);
                        *(undefined4 *)(puVar36 + 0x1b) = *(undefined4 *)(puVar32 + 0x1b);
                        *(undefined4 *)((longlong)puVar36 + 0xdc) = uVar12;
                        *(undefined4 *)(puVar36 + 0x1c) = uVar13;
                        *(undefined4 *)((longlong)puVar36 + 0xe4) = uVar14;
                        *(undefined1 *)(puVar36 + 0x1d) = *(undefined1 *)(puVar32 + 0x1d);
                        *(undefined4 *)(puVar36 + 0x19) = uVar8;
                        *(undefined4 *)((longlong)puVar36 + 0xcc) = uVar9;
                        *(undefined4 *)(puVar36 + 0x1a) = uVar10;
                        *(undefined4 *)((longlong)puVar36 + 0xd4) = uVar11;
                        *(undefined4 *)(puVar36 + 0x17) = uVar4;
                        *(undefined4 *)((longlong)puVar36 + 0xbc) = uVar5;
                        *(undefined4 *)(puVar36 + 0x18) = uVar6;
                        *(undefined4 *)((longlong)puVar36 + 0xc4) = uVar7;
                        *(uint *)((longlong)puVar36 + 0xe4) =
                             *(uint *)((longlong)puVar36 + 0xe4) & 0xdf7ffeff | 0x20000000;
                        uVar22 = (**(code **)(**(longlong **)(local_f8 + 0x2c0) + 0x2f0))();
                        param_3 = local_100;
                        param_4 = local_120;
                        puVar36[0x18] = uVar22;
                        *(short *)((longlong)puVar36 + 0xdc) =
                             *(short *)((longlong)puVar36 + 0xdc) + (short)local_d0;
                        FUN_1436a14f8(local_100,*(undefined4 *)(local_120 + 0x20),puVar36);
                        lVar30 = local_108;
                        plVar20 = local_128;
                        lVar35 = local_138;
                      }
                    }
                    iVar16 = local_12c + 1;
                    uVar33 = local_110;
                  } while (iVar16 != local_bc);
                }
                else {
                  iVar29 = (int)param_3[1];
                  iVar16 = (int)param_3[2];
                  iVar37 = (iVar16 + 0x44) / 0x44;
                  *(int *)(param_3 + 2) = iVar16 + 1;
                  if (iVar29 < iVar37) {
                    do {
                      local_108 = lVar30;
                      local_12c = iVar29;
                      lVar30 = FUN_14001cc68(0x3fc0,0x10);
                      lVar35 = 0;
                      do {
                        *(undefined8 *)(lVar30 + 0xa8 + lVar35) = 0;
                        puVar32 = (undefined8 *)(lVar30 + 0xb8 + lVar35);
                        *puVar32 = 0;
                        puVar32[1] = 0;
                        *(undefined8 *)(lVar30 + 200 + lVar35) = 0;
                        *(undefined8 *)(lVar30 + 0xd0 + lVar35) = 0xffffffff;
                        *(undefined8 *)(lVar30 + 0xd8 + lVar35) = 0xff0000ffffffff;
                        *(undefined1 *)(lVar30 + 0xe0 + lVar35) = 0;
                        *(undefined4 *)(lVar30 + 0xe4 + lVar35) = 0x40c00f07;
                        pbVar2 = (byte *)(lVar30 + 0xe8 + lVar35);
                        *pbVar2 = *pbVar2 & 0xfc;
                        *(undefined1 **)(lVar30 + 0xb0 + lVar35) = &DAT_100000001;
                        FUN_14470b9e0(lVar30 + lVar35,1);
                        param_3 = local_100;
                        lVar35 = lVar35 + 0xf0;
                      } while (lVar35 != 0x3fc0);
                      iVar29 = (int)local_100[1];
                      *(uint *)(local_100 + 1) = iVar29 + 1U;
                      if (*(uint *)((longlong)local_100 + 0xc) < iVar29 + 1U) {
                        FUN_14002baf6(local_100,iVar29);
                      }
                      *(longlong *)(*param_3 + (longlong)iVar29 * 8) = lVar30;
                      iVar29 = local_12c + 1;
                      lVar30 = local_108;
                      lVar35 = local_138;
                      param_4 = local_120;
                      param_1 = local_f8;
                    } while (iVar29 != iVar37);
                  }
                  uVar34 = local_c8;
                  puVar32 = (undefined8 *)
                            ((ulonglong)(uint)(iVar16 % 0x44) * 0xf0 +
                            *(longlong *)(*param_3 + (longlong)(iVar16 / 0x44) * 8));
                  if (((*(byte *)(param_1 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_1 + 0xf0) != 0)) {
                    uVar33 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar33) ==
                          *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x4c0)) {
                        if ((~uVar33 & 0x7fffffff8) != 0) {
                          bVar23 = *(byte *)(param_1 + 0x6d) >> 3;
                          goto LAB_1435232ab;
                        }
                        break;
                      }
                      uVar33 = uVar33 + 8;
                    } while ((longlong)*(int *)(param_1 + 0xf0) * 8 != uVar33);
                  }
                  bVar23 = *(byte *)(param_1 + 0x6d);
LAB_1435232ab:
                  local_150 = CONCAT31(local_150._1_3_,*(undefined1 *)(param_4 + 0x25 + lVar35));
                  local_158 = CONCAT31(local_158._1_3_,bVar23) & 0xffffff07;
                  local_148 = CONCAT31(local_148._1_3_,1);
                  local_140 = puVar32;
                  cVar15 = FUN_14015294c(param_1,local_c8 & 0xffffffff,0);
                  plVar20 = local_128;
                  uVar33 = local_110;
                  lVar35 = local_138;
                  param_4 = local_120;
                  if (cVar15 != '\0') {
                    uVar24 = *(uint *)((longlong)puVar32 + 0xe4);
                    *(uint *)((longlong)puVar32 + 0xe4) = uVar24 | 0x100000;
                    uVar25 = (uint)*(byte *)(local_120 + 0x25 + local_138) << 0x16;
                    *(uint *)((longlong)puVar32 + 0xe4) = uVar24 & 0xffbfffff | 0x100000 | uVar25;
                    uVar26 = (uint)*(byte *)(local_120 + 0x25 + local_138) << 0x15;
                    *(uint *)((longlong)puVar32 + 0xe4) =
                         uVar24 & 0xff9fffff | 0x100000 | uVar25 | uVar26;
                    *(uint *)((longlong)puVar32 + 0xe4) =
                         uVar24 & 0xff9ff7ff | 0x100000 | uVar25 | uVar26 |
                         (*(byte *)(param_1 + 0x78) & 1) << 0xb;
                    puVar32[0x17] = *(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + uVar34 * 8);
                    puVar36 = (undefined8 *)puVar32[0x15];
                    if ((undefined8 *)puVar32[0x15] == (undefined8 *)0x0) {
                      puVar36 = puVar32;
                    }
                    puVar36[7] = *(undefined8 *)(local_120 + local_138 * 8);
                    *(undefined8 *)((longlong)puVar36 + 0x74) = 0x3f80000000000000;
                    *(uint *)((longlong)puVar36 + 0x7c) =
                         (*(uint *)((longlong)puVar36 + 0x7c) & 0xfffffe00) + local_d8 | local_dc;
                    *puVar36 = *(undefined8 *)(param_1 + 0x250);
                    lVar35 = puVar36[2];
                    if (lVar35 != local_68) {
                      puVar36[2] = local_68;
                      if (local_68 != 0) {
                        LOCK();
                        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
                        UNLOCK();
                      }
                      if (lVar35 != 0) {
                        LOCK();
                        puVar1 = (uint *)(lVar35 + 8);
                        uVar24 = *puVar1;
                        *puVar1 = *puVar1 - 1;
                        UNLOCK();
                        if ((uVar24 & 0x3fffffff) == 1) {
                          puVar1 = (uint *)(lVar35 + 8);
                          LOCK();
                          uVar24 = *puVar1;
                          *puVar1 = *puVar1 | 0x40000000;
                          UNLOCK();
                          if ((uVar24 >> 0x1e & 1) == 0) {
                            bVar23 = *(byte *)(lVar35 + 0xd);
                            plVar21 = (longlong *)FUN_14001cc68(0x10,8);
                            plVar21[1] = lVar35;
                            plVar20 = DAT_14ca843c0;
                            plVar18 = DAT_14ca843c8;
                            if ((bVar23 & 2) == 0) {
                              do {
                                *plVar21 = (longlong)plVar20;
                                LOCK();
                                bVar39 = plVar20 != DAT_14ca843c0;
                                plVar18 = plVar21;
                                if (bVar39) {
                                  plVar20 = DAT_14ca843c0;
                                  plVar18 = DAT_14ca843c0;
                                }
                                DAT_14ca843c0 = plVar18;
                                UNLOCK();
                              } while (bVar39);
                            }
                            else {
                              do {
                                *plVar21 = (longlong)plVar18;
                                LOCK();
                                bVar39 = plVar18 != DAT_14ca843c8;
                                plVar20 = plVar21;
                                if (bVar39) {
                                  plVar18 = DAT_14ca843c8;
                                  plVar20 = DAT_14ca843c8;
                                }
                                DAT_14ca843c8 = plVar20;
                                UNLOCK();
                              } while (bVar39);
                            }
                          }
                        }
                      }
                    }
                    param_4 = local_120;
                    uVar24 = *(uint *)((longlong)puVar36 + 0x7c);
                    *(uint *)((longlong)puVar36 + 0x7c) = uVar24 | 0x800;
                    lVar30 = (ulonglong)*(uint *)((longlong)puVar36 + 0x5c) * (longlong)*local_b8 +
                             lVar30;
                    *(undefined4 *)(puVar36 + 0xe) = 0;
                    *(int *)(puVar36 + 0xc) = (int)local_128[1] / 2;
                    puVar36[6] = *local_128;
                    *(uint *)((longlong)puVar36 + 0x7c) = uVar24 | 0xc00;
                    plVar20 = local_128;
                    uVar33 = local_110;
                    lVar35 = local_138;
                    if ((lVar30 < *(int *)(DAT_14cae4170 + 4)) &&
                       (local_108 = lVar30,
                       FUN_1436a14f8(param_3,*(undefined4 *)(local_120 + 0x20),puVar32),
                       lVar30 = local_108, plVar20 = local_128, uVar33 = local_110,
                       lVar35 = local_138, *(longlong *)(param_1 + 0x2c0) != 0)) {
                      iVar29 = (int)param_3[1];
                      iVar16 = (int)param_3[2];
                      iVar37 = (iVar16 + 0x44) / 0x44;
                      *(int *)(param_3 + 2) = iVar16 + 1;
                      if (iVar29 < iVar37) {
                        do {
                          local_12c = iVar29;
                          lVar30 = FUN_14001cc68(0x3fc0,0x10);
                          lVar35 = 0;
                          do {
                            *(undefined8 *)(lVar30 + 0xa8 + lVar35) = 0;
                            puVar36 = (undefined8 *)(lVar30 + 0xb8 + lVar35);
                            *puVar36 = 0;
                            puVar36[1] = 0;
                            *(undefined8 *)(lVar30 + 200 + lVar35) = 0;
                            *(undefined8 *)(lVar30 + 0xd0 + lVar35) = 0xffffffff;
                            *(undefined8 *)(lVar30 + 0xd8 + lVar35) = 0xff0000ffffffff;
                            *(undefined1 *)(lVar30 + 0xe0 + lVar35) = 0;
                            *(undefined4 *)(lVar30 + 0xe4 + lVar35) = 0x40c00f07;
                            pbVar2 = (byte *)(lVar30 + 0xe8 + lVar35);
                            *pbVar2 = *pbVar2 & 0xfc;
                            *(undefined1 **)(lVar30 + 0xb0 + lVar35) = &DAT_100000001;
                            FUN_14470b9e0(lVar30 + lVar35,1);
                            param_3 = local_100;
                            lVar35 = lVar35 + 0xf0;
                          } while (lVar35 != 0x3fc0);
                          iVar29 = (int)local_100[1];
                          *(uint *)(local_100 + 1) = iVar29 + 1U;
                          if (*(uint *)((longlong)local_100 + 0xc) < iVar29 + 1U) {
                            FUN_14002baf6(local_100,iVar29);
                          }
                          *(longlong *)(*param_3 + (longlong)iVar29 * 8) = lVar30;
                          iVar29 = local_12c + 1;
                        } while (iVar29 != iVar37);
                      }
                      puVar36 = (undefined8 *)
                                ((ulonglong)(uint)(iVar16 % 0x44) * 0xf0 +
                                *(longlong *)(*param_3 + (longlong)(iVar16 / 0x44) * 8));
                      if (puVar36 != puVar32) {
                        puVar28 = (undefined8 *)puVar36[0x15];
                        if ((undefined8 *)puVar36[0x15] == (undefined8 *)0x0) {
                          puVar28 = puVar36;
                        }
                        FUN_1446fc26f(puVar28,*(undefined4 *)(puVar36 + 0x16));
                        iVar29 = *(int *)(puVar32 + 0x16);
                        puVar28 = (undefined8 *)puVar32[0x15];
                        *(int *)(puVar36 + 0x16) = iVar29;
                        if (iVar29 == 0 && *(int *)((longlong)puVar36 + 0xb4) == 0) {
                          *(undefined4 *)((longlong)puVar36 + 0xb4) = 1;
                        }
                        else {
                          if (puVar28 == (undefined8 *)0x0) {
                            puVar28 = puVar32;
                          }
                          FUN_14473945a(puVar36,iVar29);
                          puVar19 = (undefined8 *)puVar36[0x15];
                          if ((undefined8 *)puVar36[0x15] == (undefined8 *)0x0) {
                            puVar19 = puVar36;
                          }
                          FUN_1447393f1(puVar19,puVar28,iVar29);
                        }
                      }
                      param_1 = local_f8;
                      uVar4 = *(undefined4 *)(puVar32 + 0x17);
                      uVar5 = *(undefined4 *)((longlong)puVar32 + 0xbc);
                      uVar6 = *(undefined4 *)(puVar32 + 0x18);
                      uVar7 = *(undefined4 *)((longlong)puVar32 + 0xc4);
                      uVar8 = *(undefined4 *)(puVar32 + 0x19);
                      uVar9 = *(undefined4 *)((longlong)puVar32 + 0xcc);
                      uVar10 = *(undefined4 *)(puVar32 + 0x1a);
                      uVar11 = *(undefined4 *)((longlong)puVar32 + 0xd4);
                      uVar12 = *(undefined4 *)((longlong)puVar32 + 0xdc);
                      uVar13 = *(undefined4 *)(puVar32 + 0x1c);
                      uVar14 = *(undefined4 *)((longlong)puVar32 + 0xe4);
                      *(undefined4 *)(puVar36 + 0x1b) = *(undefined4 *)(puVar32 + 0x1b);
                      *(undefined4 *)((longlong)puVar36 + 0xdc) = uVar12;
                      *(undefined4 *)(puVar36 + 0x1c) = uVar13;
                      *(undefined4 *)((longlong)puVar36 + 0xe4) = uVar14;
                      *(undefined1 *)(puVar36 + 0x1d) = *(undefined1 *)(puVar32 + 0x1d);
                      *(undefined4 *)(puVar36 + 0x19) = uVar8;
                      *(undefined4 *)((longlong)puVar36 + 0xcc) = uVar9;
                      *(undefined4 *)(puVar36 + 0x1a) = uVar10;
                      *(undefined4 *)((longlong)puVar36 + 0xd4) = uVar11;
                      *(undefined4 *)(puVar36 + 0x17) = uVar4;
                      *(undefined4 *)((longlong)puVar36 + 0xbc) = uVar5;
                      *(undefined4 *)(puVar36 + 0x18) = uVar6;
                      *(undefined4 *)((longlong)puVar36 + 0xc4) = uVar7;
                      *(uint *)((longlong)puVar36 + 0xe4) =
                           *(uint *)((longlong)puVar36 + 0xe4) & 0xdf7ffeff | 0x20000000;
                      uVar22 = (**(code **)(**(longlong **)(local_f8 + 0x2c0) + 0x2f0))();
                      param_3 = local_100;
                      param_4 = local_120;
                      puVar36[0x18] = uVar22;
                      *(short *)((longlong)puVar36 + 0xdc) =
                           *(short *)((longlong)puVar36 + 0xdc) + (short)local_d0;
                      FUN_1436a14f8(local_100,*(undefined4 *)(local_120 + 0x20),puVar36);
                      lVar30 = local_108;
                      plVar20 = local_128;
                      uVar33 = local_110;
                      lVar35 = local_138;
                    }
                  }
                }
              }
LAB_14352366d:
              uVar33 = uVar33 + 1;
            } while (uVar33 != local_d0);
          }
          lVar17 = local_68;
          if (local_68 != 0) {
            LOCK();
            puVar1 = (uint *)(local_68 + 8);
            uVar24 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar24 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_68 + 8);
              LOCK();
              uVar24 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar24 >> 0x1e & 1) == 0) {
                bVar23 = *(byte *)(local_68 + 0xd);
                plVar21 = (longlong *)FUN_14001cc68(0x10,8);
                plVar21[1] = lVar17;
                plVar20 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c8;
                lVar35 = local_138;
                if ((bVar23 & 2) == 0) {
                  do {
                    *plVar21 = (longlong)plVar20;
                    LOCK();
                    bVar39 = plVar20 != DAT_14ca843c0;
                    plVar18 = plVar21;
                    if (bVar39) {
                      plVar20 = DAT_14ca843c0;
                      plVar18 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar18;
                    UNLOCK();
                  } while (bVar39);
                }
                else {
                  do {
                    *plVar21 = (longlong)plVar18;
                    LOCK();
                    bVar39 = plVar18 != DAT_14ca843c8;
                    plVar20 = plVar21;
                    if (bVar39) {
                      plVar18 = DAT_14ca843c8;
                      plVar20 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar20;
                    UNLOCK();
                  } while (bVar39);
                }
              }
            }
          }
          lVar35 = lVar35 + 1;
          uVar33 = local_c8;
        } while (lVar35 < *(int *)(param_4 + 0x10));
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435239d4 FUN_1435239d4 body=13001 status=ok
// SIG undefined FUN_1435239d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435239d4(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined1 auVar6 [12];
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint *puVar13;
  double *pdVar14;
  double *pdVar15;
  uint uVar16;
  undefined8 *_Dst;
  double *pdVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  double *pdVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  longlong lVar30;
  int *piVar31;
  undefined4 *puVar32;
  undefined8 *puVar33;
  bool bVar34;
  uint uVar35;
  ulonglong uVar36;
  float fVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [12];
  double dVar53;
  double dVar54;
  undefined1 auVar52 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined1 auVar59 [12];
  double dVar58;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  float fVar73;
  undefined1 auStack_3f8 [32];
  undefined8 *local_3d8;
  undefined1 local_3c1;
  uint local_3c0;
  undefined1 local_3ba;
  byte local_3b9;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [16];
  undefined8 *local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  longlong *local_358;
  double local_350;
  double local_348;
  int local_340;
  uint local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_328;
  undefined8 uStack_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  double dStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  double local_2b8 [4];
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  float fStack_23c;
  undefined8 local_238;
  double dStack_230;
  double local_228;
  undefined8 local_220;
  double dStack_218;
  double local_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  longlong local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  uint local_190;
  undefined4 local_18c;
  byte local_188;
  undefined1 local_187;
  char local_186;
  undefined4 local_184;
  undefined1 local_180;
  float local_17c;
  double local_178 [4];
  undefined8 *local_158;
  double dStack_150;
  longlong *local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_310 = param_5;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (*(char *)(*(longlong *)*param_2 + 0x1de4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3f8);
  }
  if (((*(char *)(param_1 + 0xb52) == '\x01') && (0 < *(int *)(DAT_14cae4140 + 4))) &&
     (*(int *)(param_1 + 0x878) < 1)) {
    local_3c0 = *(uint *)(DAT_14cae40e0 + 4) >> 0x1f;
  }
  else {
    local_3c0 = 0;
  }
  iVar10 = *(int *)(DAT_14cae4158 + 4);
  local_340 = *(int *)(DAT_14cae41b8 + 4);
  local_2d8 = param_1 + 0x100;
  uVar36 = DAT_149931180;
  if (((((9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x100) & uVar36)) ||
        (9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x108) & uVar36))) ||
       ((9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x110) & uVar36) ||
        ((9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x120) & uVar36) ||
         (9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x128) & uVar36))))))) ||
      (9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x130) & uVar36))) ||
     (((9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x140) & uVar36) ||
       (9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x148) & uVar36))) ||
      (9.99999993922529e-09 < (double)(*(ulonglong *)(param_1 + 0x150) & uVar36))))) {
    FUN_14007522e(local_178,local_2d8);
  }
  else {
    pdVar15 = (double *)&DAT_14c846400;
    pdVar14 = local_178;
    for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
      *pdVar14 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar14 = pdVar14 + 1;
    }
  }
  iVar9 = (int)param_2[1];
  if (0 < iVar9) {
    local_3b9 = (byte)local_3c0 ^ 1;
    local_3ba = 0 < iVar10;
    local_2c0 = param_1 + 0x8f8;
    local_2c8 = param_1 + 0x9a8;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    local_2d0 = param_1 + 0xb38;
    lVar21 = 0;
    local_358 = param_2;
    local_33c = param_4;
    do {
      uVar35 = (uint)lVar21;
      if ((param_4 >> (uVar35 & 0x1f) & 1) != 0) {
        lVar5 = *(longlong *)(*param_2 + lVar21 * 8);
        local_18c = 0;
        local_1a0 = 1;
        local_1b0 = local_2c0;
        local_1a8 = local_2c8;
        local_188 = *(byte *)(param_1 + 0x6c) >> 4 & 1;
        local_187 = 0 < *(int *)(DAT_14cae4230 + 4);
        local_184 = *(undefined4 *)(param_1 + 0x8f0);
        lVar12 = *(longlong *)(param_1 + 0xac8);
        local_318 = lVar21;
        local_198 = lVar5;
        local_190 = uVar35;
        if (*(int *)(lVar12 + 8) == 0) {
LAB_1435257bc:
          uVar35 = *(int *)(param_1 + 0xae4) - *(int *)(param_1 + 0xae0);
          if (uVar35 != 0 && *(int *)(param_1 + 0xae0) <= *(int *)(param_1 + 0xae4)) {
            plVar22 = *(longlong **)(local_310 + 0xe8);
            puVar13 = (uint *)*puVar1;
            local_3a8 = (double)(ulonglong)uVar35;
            if (puVar13 != (uint *)0x0) goto LAB_1435257f9;
            while( true ) {
              FUN_14472e504(puVar1);
              puVar13 = (uint *)*puVar1;
LAB_1435257f9:
              puVar29 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
              uVar35 = puVar13[0x12];
              if (puVar29 + 0x2c <= puVar13 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                LOCK();
                uVar16 = *puVar13;
                *puVar13 = *puVar13 + uVar35 + 1;
                UNLOCK();
                if ((uVar16 ^ uVar35) != 0xffffffff) break;
                puVar13 = (uint *)*puVar1;
                *puVar13 = 0xffffffff;
                *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                puVar13[0x12] = 0;
                *puVar1 = puVar13;
                puVar29 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
                uVar35 = 0;
                if (puVar29 + 0x2c <= puVar13 + 0x4000) {
                  uVar35 = 1;
                  goto LAB_143525877;
                }
              }
            }
            uVar35 = uVar35 + 1;
LAB_143525877:
            *(undefined8 **)(puVar13 + 0x10) = puVar29 + 0x2d;
            puVar13[0x12] = uVar35;
            *(int *)(puVar29 + -1) = ((int)puVar29 + -8) - (int)puVar13;
            *(undefined4 *)((longlong)puVar29 + -4) = 0x160;
            puVar29[1] = 0;
            *puVar29 = &PTR_FUN_14a920150;
            lVar21 = *plVar22;
            do {
              puVar29[1] = lVar21;
              LOCK();
              lVar12 = *plVar22;
              bVar34 = lVar21 == lVar12;
              if (bVar34) {
                *plVar22 = (longlong)puVar29;
                lVar12 = lVar21;
              }
              UNLOCK();
              lVar21 = lVar12;
            } while (!bVar34);
            puVar33 = puVar29 + 2;
            puVar29[2] = &PTR_FUN_14a920148;
            *(undefined2 *)(puVar29 + 3) = 1;
            *(undefined1 *)((longlong)puVar29 + 0x1a) = 0;
            puVar11 = puVar29 + 4;
            memset(puVar11,0,0x140);
            auVar40 = local_368;
            local_186 = '\0';
            if ((SUB84(local_3a8,0) < 1000) && (SUB84(local_3a8,0) <= *(int *)(param_1 + 0xad8))) {
              uVar35 = *(uint *)(*(longlong *)(param_1 + 0x298) + 8);
              uVar36 = CONCAT44(0,uVar35);
              uVar16 = *(uint *)(DAT_14cae40e0 + 4);
              if (((int)uVar16 < 0) && (uVar16 = *(uint *)(param_1 + 0x878), (int)uVar16 < 1)) {
                local_378._0_8_ = uVar36;
                if (((char)local_3c0 == '\0') || (*(longlong **)(lVar5 + 0x10) == (longlong *)0x0))
                {
LAB_143525f00:
                  pdVar15 = (double *)(lVar5 + 0x1048);
                }
                else {
                  pdVar15 = (double *)(**(code **)(**(longlong **)(lVar5 + 0x10) + 0x48))();
                  uVar36 = local_378._0_8_;
                  if ((*(float *)(pdVar15 + 7) == 0.0) && (!NAN(*(float *)(pdVar15 + 7))))
                  goto LAB_143525f00;
                }
                local_228 = pdVar15[2];
                local_238 = *pdVar15;
                dStack_230 = pdVar15[1];
                dVar58 = local_228 * dStack_130 + dStack_230 * dStack_150 + local_238 * local_178[1]
                         + local_110;
                local_368._8_4_ = SUB84(dVar58,0);
                local_368._0_8_ =
                     local_228 * local_138 +
                     dStack_230 * (double)local_158 + local_238 * local_178[0] + local_118;
                local_368._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
                local_328 = local_228 * local_128 +
                            dStack_230 * (double)local_148 + local_238 * local_178[2] + local_108;
                uStack_320 = 0;
                if (((char)local_3c0 == '\0') || (*(longlong **)(lVar5 + 0x10) == (longlong *)0x0))
                {
LAB_143525fba:
                  pdVar15 = (double *)(lVar5 + 0x1048);
                }
                else {
                  lVar21 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x48))();
                  uVar36 = local_378._0_8_;
                  if ((*(float *)(lVar21 + 0x38) == 0.0) && (!NAN(*(float *)(lVar21 + 0x38))))
                  goto LAB_143525fba;
                  pdVar15 = (double *)(lVar21 + 0x18);
                }
                local_228 = pdVar15[2];
                local_238 = *pdVar15;
                dStack_230 = pdVar15[1];
                dVar41 = local_228 * local_138 +
                         dStack_230 * (double)local_158 + local_238 * local_178[0] + local_118;
                dVar68 = local_228 * dStack_130 + dStack_230 * dStack_150 + local_238 * local_178[1]
                         + local_110;
                dVar58 = local_228 * local_128 +
                         dStack_230 * (double)local_148 + local_238 * local_178[2] + local_108;
                fVar37 = 0.0;
                fVar73 = 0.0;
                if (*(double *)(lVar5 + 0x8a8) <= 1.0 && *(double *)(lVar5 + 0x8a8) != 1.0) {
                  fVar73 = *(float *)(DAT_14cae4898 + 4);
                }
                fVar45 = *(float *)(param_1 + 0x910);
                uVar35 = *(uint *)(DAT_14cae4188 + 4);
                lVar21 = *(longlong *)(param_1 + 0x298);
                if ((~*(byte *)(param_1 + 0x75) & 0x14) == 0 ||
                    (*(byte *)(param_1 + 0x75) & 0x20) != 0) {
                  fVar37 = *(float *)(param_1 + 0xb8);
                }
                fVar37 = (float)(*(double *)(lVar21 + 0x80) + (double)fVar37);
                auVar59 = ZEXT812(0x7f7fffff);
                if (0.0 < fVar73) {
                  dVar38 = *(double *)(lVar5 + 0x858) * 0.5;
                  dVar67 = *(double *)(lVar5 + 0x830) * 0.5;
                  if (dVar67 <= dVar38) {
                    dVar67 = dVar38;
                  }
                  fVar57 = 1e-08;
                  if (1e-08 <= fVar73 * 0.5) {
                    fVar57 = fVar73 * 0.5;
                  }
                  auVar59._4_8_ = 0;
                  auVar59._0_4_ = (((float)dVar67 * fVar37) / fVar57) * fVar45;
                }
                uVar8 = (uint)((float)*(int *)(param_1 + 0x90c) * DAT_14cb0cc0c);
                uVar16 = uVar8;
                if (((0 < (int)uVar35) && (uVar16 = uVar35, 0 < (int)uVar8)) &&
                   (uVar16 = uVar8, uVar35 < uVar8)) {
                  uVar16 = uVar35;
                }
                fVar57 = DAT_14cb0cc0c * *(float *)(lVar5 + 0x41c);
                fVar62 = auVar59._0_4_;
                fVar73 = fVar62;
                if (fVar57 <= fVar62) {
                  fVar73 = fVar57;
                }
                uVar35 = -(uint)(0.0 < *(float *)(lVar5 + 0x41c));
                auVar51._0_4_ = ~uVar35 & (uint)fVar62;
                auVar51._4_4_ = 0;
                auVar51._8_4_ = auVar59._8_4_;
                auVar6._4_8_ = 0;
                auVar6._0_4_ = (uint)fVar73 & uVar35;
                auVar51 = auVar51 | auVar6;
                auVar52._12_4_ = 0;
                auVar52._0_12_ = auVar51;
                if ((0 < (int)uVar16) && ((float)(int)uVar16 <= auVar51._0_4_)) {
                  auVar52._4_8_ = auVar51._4_8_;
                  auVar52._0_4_ = (float)(int)uVar16;
                  auVar52._12_4_ = 0;
                }
                fVar73 = auVar52._0_4_;
                local_17c = fVar73;
                uVar35 = (uint)uVar36;
                if (1 < (int)uVar35) {
                  dVar67 = *(double *)(lVar5 + 0x858) * 0.5;
                  dVar38 = *(double *)(lVar5 + 0x830) * 0.5;
                  if (dVar38 <= dVar67) {
                    dVar38 = dVar67;
                  }
                  lVar12 = 0;
                  do {
                    fVar62 = *(float *)(lVar21 + 0x24 + lVar12 * 4) * 0.5;
                    fVar57 = 1e-08;
                    if (1e-08 <= fVar62) {
                      fVar57 = fVar62;
                    }
                    fVar57 = ((fVar37 * (float)dVar38) / fVar57) * fVar45;
                    auVar61 = auVar52;
                    if (fVar57 <= fVar73) {
                      auVar61._4_12_ = auVar52._4_12_;
                      auVar61._0_4_ = fVar57;
                    }
                    *(int *)((longlong)&local_238 + lVar12 * 4) = auVar61._0_4_;
                    lVar12 = lVar12 + 1;
                  } while (uVar36 - 1 != lVar12);
                }
                lVar12 = (longlong)(int)uVar35;
                uVar18 = local_368._8_8_;
                (&fStack_23c)[lVar12] = fVar73;
                uVar16 = *(uint *)(param_1 + 0x87c);
                if ((int)*(uint *)(param_1 + 0x87c) < (int)*(char *)(lVar21 + 0x8f)) {
                  uVar16 = (int)*(char *)(lVar21 + 0x8f);
                }
                uVar26 = uVar36 & 0xffffffff;
                if (uVar16 != uVar35) {
                  if ((int)uVar16 < (int)uVar35) {
                    pdVar15 = *(double **)(param_1 + 0xad0);
                    dVar46 = (pdVar15[5] + pdVar15[2]) * 0.5;
                    dVar53 = (pdVar15[4] + pdVar15[1]) * 0.5;
                    dVar38 = (pdVar15[3] + *pdVar15) * 0.5;
                    dVar48 = (double)local_368._0_8_ - dVar38;
                    dVar67 = (double)local_368._8_8_ - dVar53;
                    dVar47 = local_328 - dVar46;
                    dVar38 = dVar41 - dVar38;
                    dVar53 = dVar68 - dVar53;
                    dVar46 = dVar58 - dVar46;
                    fVar73 = (float)SQRT(dVar47 * dVar47 + dVar67 * dVar67 + dVar48 * dVar48);
                    fVar37 = (float)SQRT(dVar46 * dVar46 + dVar53 * dVar53 + dVar38 * dVar38);
                    if (fVar37 <= fVar73) {
                      fVar73 = fVar37;
                    }
                    dVar67 = *pdVar15 - pdVar15[3];
                    dVar46 = pdVar15[1] - pdVar15[4];
                    dVar38 = pdVar15[2] - pdVar15[5];
                    fVar73 = fVar73 - (float)(SQRT(dVar38 * dVar38 +
                                                   dVar46 * dVar46 + dVar67 * dVar67) * 0.5);
                    lVar21 = (longlong)(int)uVar16;
                    pfVar2 = (float *)((longlong)&local_238 + lVar21 * 4);
                    if (fVar73 < *pfVar2 || fVar73 == *pfVar2) {
                      uVar26 = (ulonglong)uVar16;
                      goto LAB_143526392;
                    }
                    lVar20 = 0;
                    do {
                      if ((lVar21 - lVar12) + 1 + lVar20 == 0) {
                        uVar26 = uVar36 & 0xffffffff;
                        goto LAB_143526392;
                      }
                      lVar30 = lVar20 + 1;
                      pfVar2 = (float *)((longlong)&local_238 + lVar20 * 4 + lVar21 * 4 + 4);
                      lVar20 = lVar30;
                    } while (*pfVar2 <= fVar73 && fVar73 != *pfVar2);
                    uVar16 = uVar16 + (int)lVar30;
                  }
                  uVar26 = (ulonglong)uVar16;
                }
LAB_143526392:
                iVar9 = (int)uVar26;
                iVar10 = 0;
                local_398._0_8_ = puVar33;
                if (SUB84(local_3a8,0) != 1) {
                  local_2e8 = puVar29 + 0x14;
                  local_308 = 9.88131291682493e-324;
                  if (2 < SUB84(local_3a8,0)) {
                    local_308 = (double)((ulonglong)local_3a8 & 0xffffffff);
                  }
                  local_350 = (double)(lVar12 + -1);
                  iVar25 = 0;
                  dVar67 = 4.94065645841247e-324;
                  iVar27 = 0;
                  do {
                    uVar35 = *(uint *)(param_1 + 0x87c);
                    uVar16 = (uint)uVar36;
                    uVar24 = uVar36 & 0xffffffff;
                    if (uVar35 != uVar16) {
                      if ((int)uVar35 < (int)uVar16) {
                        lVar21 = *(longlong *)(param_1 + 0xad0);
                        lVar12 = (longlong)dVar67 * 0x38;
                        dVar38 = *(double *)(lVar21 + 0x28 + lVar12);
                        dVar46 = *(double *)(lVar21 + 0x10 + lVar12);
                        dVar53 = *(double *)(lVar21 + 0x20 + lVar12);
                        dVar48 = *(double *)(lVar21 + 8 + lVar12);
                        dVar47 = *(double *)(lVar21 + 0x18 + lVar12);
                        dVar50 = (dVar38 + dVar46) * 0.5;
                        dVar49 = (dVar53 + dVar48) * 0.5;
                        dVar70 = (dVar47 + *(double *)(lVar21 + lVar12)) * 0.5;
                        dVar54 = (double)local_368._0_8_ - dVar70;
                        dVar3 = (double)uVar18 - dVar49;
                        dVar69 = local_328 - dVar50;
                        dVar70 = dVar41 - dVar70;
                        dVar49 = dVar68 - dVar49;
                        dVar50 = dVar58 - dVar50;
                        fVar73 = (float)SQRT(dVar69 * dVar69 + dVar3 * dVar3 + dVar54 * dVar54);
                        fVar37 = (float)SQRT(dVar50 * dVar50 + dVar49 * dVar49 + dVar70 * dVar70);
                        if (fVar37 <= fVar73) {
                          fVar73 = fVar37;
                        }
                        dVar47 = *(double *)(lVar21 + lVar12) - dVar47;
                        dVar48 = dVar48 - dVar53;
                        dVar46 = dVar46 - dVar38;
                        fVar73 = fVar73 - (float)(SQRT(dVar46 * dVar46 +
                                                       dVar48 * dVar48 + dVar47 * dVar47) * 0.5);
                        lVar21 = (longlong)(int)uVar35;
                        pfVar2 = (float *)((longlong)&local_238 + lVar21 * 4);
                        if (*pfVar2 <= fVar73 && fVar73 != *pfVar2) {
                          lVar12 = 0;
                          do {
                            if ((longlong)local_350 - lVar21 == lVar12) {
                              uVar24 = uVar36 & 0xffffffff;
                              goto LAB_1435265ca;
                            }
                            lVar20 = lVar12 + 1;
                            pfVar2 = (float *)((longlong)&local_238 + lVar12 * 4 + lVar21 * 4 + 4);
                            lVar12 = lVar20;
                          } while (*pfVar2 <= fVar73 && fVar73 != *pfVar2);
                          uVar24 = (ulonglong)(uVar35 + (int)lVar20);
                        }
                        else {
                          uVar24 = (ulonglong)uVar35;
                        }
                      }
                      else {
                        uVar24 = (ulonglong)uVar35;
                      }
                    }
LAB_1435265ca:
                    iVar9 = (int)uVar26;
                    iVar10 = iVar27;
                    if (((int)uVar24 != iVar9) &&
                       (iVar10 = SUB84(dVar67,0), uVar26 = uVar24, iVar9 < (int)uVar16)) {
                      puVar19 = (undefined8 *)((longlong)dVar67 + -1);
                      iVar27 = iVar27 + *(int *)(param_1 + 0xae0);
                      local_2f8 = (undefined8 *)
                                  CONCAT44(local_2f8._4_4_,*(int *)(param_1 + 0xae0) + iVar10 + -2);
                      if ((iVar9 < 8) && (*(char *)(puVar33 + 1) != '\0')) {
                        local_348 = (double)(longlong)iVar9;
                        local_338 = local_2e8 + (longlong)local_348 * 2;
                        iVar28 = *(int *)(local_2e8 + (longlong)local_348 * 2 + 1);
                        if ((longlong)iVar28 == 0) {
LAB_143526668:
                          *(uint *)(local_338 + 1) = iVar28 + 1U;
                          local_3b0 = (double)CONCAT44(local_3b0._4_4_,iVar27);
                          local_3b8 = (double)CONCAT44(local_3b8._4_4_,(int)uVar24);
                          local_380 = puVar19;
                          if (*(uint *)((longlong)local_338 + 0xc) < iVar28 + 1U) {
                            FUN_144757aec(local_338,iVar28);
                            uVar24 = (ulonglong)local_3b8 & 0xffffffff;
                            uVar36 = local_378._0_8_;
                            iVar27 = local_3b0._0_4_;
                          }
                          *(int *)(*local_338 + (longlong)iVar28 * 4) = iVar27;
                          iVar28 = (int)local_338[1];
                          *(uint *)(local_338 + 1) = iVar28 + 1U;
                          if (*(uint *)((longlong)local_338 + 0xc) < iVar28 + 1U) {
                            FUN_144757aec(local_338,iVar28);
                            uVar24 = (ulonglong)local_3b8 & 0xffffffff;
                            uVar36 = local_378._0_8_;
                            iVar27 = local_3b0._0_4_;
                          }
                          puVar32 = (undefined4 *)((longlong)iVar28 * 4 + *local_338);
                          puVar19 = local_380;
                        }
                        else {
                          if (*(int *)(*local_338 + (longlong)(iVar28 + -1) * 4) + 1 != iVar27)
                          goto LAB_143526668;
                          puVar32 = (undefined4 *)(*local_338 + (longlong)(iVar28 + -1) * 4);
                        }
                        *puVar32 = (undefined4)local_2f8;
                        piVar31 = (int *)(local_398._0_8_ + (longlong)local_348 * 4 + 0x110);
                        *piVar31 = *piVar31 + iVar25 + (int)puVar19;
                        uVar26 = uVar24;
                        puVar33 = (undefined8 *)local_398._0_8_;
                      }
                      if ((iVar9 < 8) && (*(char *)((longlong)puVar33 + 9) != '\0')) {
                        lVar21 = (longlong)iVar9;
                        piVar31 = (int *)((longlong)puVar33 + lVar21 * 4 + 0x130);
                        *piVar31 = *piVar31 + iVar25 + (int)puVar19;
                        plVar22 = puVar11 + lVar21 * 2;
                        iVar9 = *(int *)(puVar29 + lVar21 * 2 + 5);
                        if ((longlong)iVar9 == 0) {
LAB_143526760:
                          *(uint *)(plVar22 + 1) = iVar9 + 1U;
                          if (*(uint *)((longlong)plVar22 + 0xc) < iVar9 + 1U) {
                            local_338 = plVar22;
                            FUN_144757aec(plVar22,iVar9);
                            plVar22 = local_338;
                            uVar36 = local_378._0_8_;
                          }
                          *(int *)(*plVar22 + (longlong)iVar9 * 4) = iVar27;
                          iVar9 = (int)plVar22[1];
                          *(uint *)(plVar22 + 1) = iVar9 + 1U;
                          if (*(uint *)((longlong)plVar22 + 0xc) < iVar9 + 1U) {
                            FUN_144757aec(plVar22,iVar9);
                            uVar36 = local_378._0_8_;
                          }
                          puVar32 = (undefined4 *)((longlong)iVar9 * 4 + *plVar22);
                        }
                        else {
                          if (*(int *)(*plVar22 + (longlong)(iVar9 + -1) * 4) + 1 != iVar27)
                          goto LAB_143526760;
                          puVar32 = (undefined4 *)(*plVar22 + (longlong)(iVar9 + -1) * 4);
                        }
                        *puVar32 = (undefined4)local_2f8;
                        puVar33 = (undefined8 *)local_398._0_8_;
                      }
                    }
                    iVar9 = (int)uVar26;
                    dVar67 = (double)((longlong)dVar67 + 1);
                    iVar25 = -iVar10;
                    iVar27 = iVar10;
                  } while (dVar67 != local_308);
                }
                iVar27 = *(int *)(param_1 + 0xae0);
                iVar28 = iVar27 + SUB84(local_3a8,0);
                iVar25 = iVar27 + SUB84(local_3a8,0) + -1;
                iVar10 = iVar10 + iVar27;
                if ((*(char *)(puVar33 + 1) == '\x01') && (iVar9 < 8)) {
                  lVar21 = (longlong)iVar9;
                  plVar22 = puVar33 + lVar21 * 2 + 0x12;
                  iVar27 = *(int *)(puVar33 + lVar21 * 2 + 0x13);
                  if ((longlong)iVar27 == 0) {
LAB_143526864:
                    *(uint *)(puVar33 + lVar21 * 2 + 0x13) = iVar27 + 1U;
                    local_3b0 = (double)CONCAT44(local_3b0._4_4_,iVar10);
                    local_3b8 = (double)CONCAT44(local_3b8._4_4_,iVar9);
                    local_3a8 = (double)CONCAT44(local_3a8._4_4_,iVar25);
                    if (*(uint *)((longlong)puVar33 + lVar21 * 0x10 + 0x9c) < iVar27 + 1U) {
                      FUN_144757aec(plVar22,iVar27);
                      iVar9 = SUB84(local_3b8,0);
                      iVar25 = (int)local_3a8._0_4_;
                      iVar10 = local_3b0._0_4_;
                    }
                    *(int *)(*plVar22 + (longlong)iVar27 * 4) = iVar10;
                    iVar27 = *(int *)(puVar33 + lVar21 * 2 + 0x13);
                    *(uint *)(puVar33 + lVar21 * 2 + 0x13) = iVar27 + 1U;
                    if (*(uint *)((longlong)puVar33 + lVar21 * 0x10 + 0x9c) < iVar27 + 1U) {
                      FUN_144757aec(plVar22,iVar27);
                      iVar9 = SUB84(local_3b8,0);
                      iVar25 = (int)local_3a8._0_4_;
                      iVar10 = local_3b0._0_4_;
                    }
                    piVar31 = (int *)((longlong)iVar27 * 4 + *plVar22);
                  }
                  else {
                    if (*(int *)(*plVar22 + (longlong)(iVar27 + -1) * 4) + 1 != iVar10)
                    goto LAB_143526864;
                    piVar31 = (int *)(*plVar22 + (longlong)(iVar27 + -1) * 4);
                  }
                  *piVar31 = iVar25;
                  piVar31 = (int *)(local_398._0_8_ + lVar21 * 4 + 0x110);
                  *piVar31 = *piVar31 + (iVar28 - iVar10);
                  puVar33 = (undefined8 *)local_398._0_8_;
                }
                if ((*(char *)((longlong)puVar33 + 9) == '\x01') && (iVar9 < 8)) {
                  lVar21 = (longlong)iVar9;
                  piVar31 = (int *)((longlong)puVar33 + lVar21 * 4 + 0x130);
                  *piVar31 = *piVar31 + (iVar28 - iVar10);
                  plVar22 = puVar11 + lVar21 * 2;
                  iVar9 = *(int *)(puVar29 + lVar21 * 2 + 5);
                  if ((longlong)iVar9 == 0) {
LAB_143526935:
                    *(uint *)(plVar22 + 1) = iVar9 + 1U;
                    if (*(uint *)((longlong)plVar22 + 0xc) < iVar9 + 1U) {
                      FUN_144757aec(plVar22,iVar9);
                    }
                    *(int *)(*plVar22 + (longlong)iVar9 * 4) = iVar10;
                    iVar10 = (int)plVar22[1];
                    *(uint *)(plVar22 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar22 + 0xc) < iVar10 + 1U) {
                      FUN_144757aec(plVar22,iVar10);
                    }
                    piVar31 = (int *)((longlong)iVar10 * 4 + *plVar22);
                  }
                  else {
                    if (*(int *)(*plVar22 + (longlong)(iVar9 + -1) * 4) + 1 != iVar10)
                    goto LAB_143526935;
                    piVar31 = (int *)(*plVar22 + (longlong)(iVar9 + -1) * 4);
                  }
                  *piVar31 = iVar25;
                }
              }
              else {
                uVar35 = uVar35 - 1;
                if ((int)uVar16 < (int)uVar35) {
                  uVar35 = uVar16;
                }
                if (7 < (int)uVar35) goto LAB_143526986;
                iVar10 = *(int *)(param_1 + 0xae0);
                if ((int)uVar35 < 1) {
                  uVar35 = 0;
                }
                uVar26 = CONCAT44(0,uVar35);
                local_398._0_8_ = puVar33;
                plVar22 = puVar33 + uVar26 * 2 + 0x12;
                iVar9 = *(int *)(puVar33 + uVar26 * 2 + 0x13);
                uVar36 = uVar26;
                if ((longlong)iVar9 == 0) {
LAB_143525b7e:
                  *(uint *)(puVar33 + uVar26 * 2 + 0x13) = iVar9 + 1U;
                  local_378._0_8_ = uVar26;
                  if (*(uint *)((longlong)puVar33 + uVar26 * 0x10 + 0x9c) < iVar9 + 1U) {
                    FUN_144757aec(plVar22,iVar9);
                    uVar36 = local_378._0_8_;
                  }
                  *(int *)(*plVar22 + (longlong)iVar9 * 4) = iVar10;
                  iVar9 = *(int *)(puVar33 + uVar26 * 2 + 0x13);
                  *(uint *)(puVar33 + uVar26 * 2 + 0x13) = iVar9 + 1U;
                  if (*(uint *)((longlong)puVar33 + uVar26 * 0x10 + 0x9c) < iVar9 + 1U) {
                    FUN_144757aec(plVar22,iVar9);
                    uVar36 = local_378._0_8_;
                  }
                  piVar31 = (int *)((longlong)iVar9 * 4 + *plVar22);
                }
                else {
                  if (*(int *)(*plVar22 + (longlong)(iVar9 + -1) * 4) + 1 != iVar10)
                  goto LAB_143525b7e;
                  piVar31 = (int *)(*plVar22 + (longlong)(iVar9 + -1) * 4);
                }
                iVar9 = SUB84(local_3a8,0);
                iVar27 = iVar9 + iVar10 + -1;
                *piVar31 = iVar27;
                puVar33 = (undefined8 *)local_398._0_8_;
                piVar31 = (int *)(local_398._0_8_ + uVar36 * 4 + 0x110);
                *piVar31 = *piVar31 + iVar9;
                if ((*(byte *)(local_398._0_8_ + 9) & 1) != 0) {
                  piVar31 = (int *)(local_398._0_8_ + uVar36 * 4 + 0x130);
                  *piVar31 = *piVar31 + iVar9;
                  plVar22 = puVar11 + uVar26 * 2;
                  iVar9 = *(int *)(puVar29 + uVar26 * 2 + 5);
                  if ((longlong)iVar9 != 0) {
                    if (*(int *)(*plVar22 + (longlong)(iVar9 + -1) * 4) + 1 == iVar10) {
                      *(int *)(*plVar22 + (longlong)(iVar9 + -1) * 4) = iVar27;
                      goto LAB_143526986;
                    }
                  }
                  *(uint *)(plVar22 + 1) = iVar9 + 1U;
                  if (*(uint *)((longlong)plVar22 + 0xc) < iVar9 + 1U) {
                    FUN_144757aec(plVar22,iVar9);
                  }
                  *(int *)(*plVar22 + (longlong)iVar9 * 4) = iVar10;
                  iVar10 = (int)plVar22[1];
                  *(uint *)(plVar22 + 1) = iVar10 + 1U;
                  if (*(uint *)((longlong)plVar22 + 0xc) < iVar10 + 1U) {
                    FUN_144757aec(plVar22,iVar10);
                  }
                  *(int *)(*plVar22 + (longlong)iVar10 * 4) = iVar27;
                }
              }
            }
            else {
              uVar35 = *(uint *)(*(longlong *)(param_1 + 0x298) + 8);
              iVar10 = (int)(char)((char)uVar35 + -1);
              if (7 < iVar10) goto LAB_143526986;
              uVar16 = *(uint *)(param_1 + 0xae0);
              local_368._4_4_ = 0;
              local_368._0_4_ = uVar16;
              lVar21 = (longlong)iVar10;
              local_398._0_8_ = puVar33;
              plVar22 = puVar33 + lVar21 * 2 + 0x12;
              iVar10 = *(int *)(puVar33 + lVar21 * 2 + 0x13);
              if ((longlong)iVar10 == 0) {
LAB_1435259a1:
                *(uint *)(puVar33 + lVar21 * 2 + 0x13) = iVar10 + 1U;
                local_368._8_8_ = auVar40._8_8_;
                if (*(uint *)((longlong)puVar33 + lVar21 * 0x10 + 0x9c) < iVar10 + 1U) {
                  FUN_144757aec(plVar22,iVar10);
                  uVar16 = local_368._0_4_;
                }
                *(uint *)(*plVar22 + (longlong)iVar10 * 4) = uVar16;
                iVar10 = *(int *)(puVar33 + lVar21 * 2 + 0x13);
                *(uint *)(puVar33 + lVar21 * 2 + 0x13) = iVar10 + 1U;
                if (*(uint *)((longlong)puVar33 + lVar21 * 0x10 + 0x9c) < iVar10 + 1U) {
                  FUN_144757aec(plVar22,iVar10);
                  uVar16 = local_368._0_4_;
                }
                piVar31 = (int *)((longlong)iVar10 * 4 + *plVar22);
              }
              else {
                if (*(int *)(*plVar22 + (longlong)(iVar10 + -1) * 4) + 1U != uVar16)
                goto LAB_1435259a1;
                piVar31 = (int *)(*plVar22 + (longlong)(iVar10 + -1) * 4);
                local_368 = auVar40;
              }
              iVar10 = SUB84(local_3a8,0);
              iVar9 = iVar10 + uVar16 + -1;
              *piVar31 = iVar9;
              puVar33 = (undefined8 *)local_398._0_8_;
              piVar31 = (int *)(local_398._0_8_ + lVar21 * 4 + 0x110);
              *piVar31 = *piVar31 + iVar10;
              if ((*(byte *)(local_398._0_8_ + 9) & 1) != 0) {
                lVar21 = ((ulonglong)uVar35 << 0x38) + -0x100000000000000;
                piVar31 = (int *)(local_398._0_8_ + (lVar21 >> 0x36) + 0x130);
                *piVar31 = *piVar31 + iVar10;
                lVar21 = lVar21 >> 0x34;
                plVar22 = (longlong *)((longlong)puVar11 + lVar21);
                iVar10 = *(int *)((longlong)puVar29 + lVar21 + 0x28);
                if ((longlong)iVar10 != 0) {
                  if (*(int *)(*plVar22 + (longlong)(iVar10 + -1) * 4) + 1U == uVar16) {
                    *(int *)(*plVar22 + (longlong)(iVar10 + -1) * 4) = iVar9;
                    goto LAB_143526986;
                  }
                }
                *(uint *)(plVar22 + 1) = iVar10 + 1U;
                if (*(uint *)((longlong)plVar22 + 0xc) < iVar10 + 1U) {
                  FUN_144757aec(plVar22,iVar10);
                }
                *(uint *)(*plVar22 + (longlong)iVar10 * 4) = uVar16;
                iVar10 = (int)plVar22[1];
                *(uint *)(plVar22 + 1) = iVar10 + 1U;
                if (*(uint *)((longlong)plVar22 + 0xc) < iVar10 + 1U) {
                  FUN_144757aec(plVar22,iVar10);
                }
                *(int *)(*plVar22 + (longlong)iVar10 * 4) = iVar9;
              }
            }
LAB_143526986:
            local_3d8 = puVar33;
            FUN_14352268a(param_1,lVar5,local_310);
            param_2 = local_358;
            param_4 = local_33c;
          }
        }
        else {
          plVar22 = *(longlong **)(local_310 + 0xe8);
          puVar13 = (uint *)*puVar1;
          if (puVar13 != (uint *)0x0) goto LAB_143523d23;
          while( true ) {
            FUN_14472e504(puVar1);
            puVar13 = (uint *)*puVar1;
LAB_143523d23:
            puVar29 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
            uVar35 = puVar13[0x12];
            if (puVar29 + 0x84 <= puVar13 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar16 = *puVar13;
              *puVar13 = *puVar13 + uVar35 + 1;
              UNLOCK();
              if ((uVar16 ^ uVar35) != 0xffffffff) break;
              puVar13 = (uint *)*puVar1;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar1 = puVar13;
              puVar29 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
              uVar35 = 0;
              if (puVar29 + 0x84 <= puVar13 + 0x4000) {
                uVar35 = 1;
                goto LAB_143523da3;
              }
            }
          }
          uVar35 = uVar35 + 1;
LAB_143523da3:
          *(undefined8 **)(puVar13 + 0x10) = puVar29 + 0x85;
          puVar13[0x12] = uVar35;
          *(int *)(puVar29 + -1) = ((int)puVar29 + -8) - (int)puVar13;
          *(undefined4 *)((longlong)puVar29 + -4) = 0x420;
          puVar29[1] = 0;
          *puVar29 = &PTR_FUN_14a920138;
          lVar21 = *plVar22;
          do {
            puVar29[1] = lVar21;
            LOCK();
            lVar20 = *plVar22;
            bVar34 = lVar21 == lVar20;
            if (bVar34) {
              *plVar22 = (longlong)puVar29;
              lVar20 = lVar21;
            }
            UNLOCK();
            lVar21 = lVar20;
          } while (!bVar34);
          puVar33 = puVar29 + 2;
          *(byte *)(puVar29 + 3) = local_3b9;
          *(char *)((longlong)puVar29 + 0x19) = (char)local_3c0;
          *(undefined1 *)((longlong)puVar29 + 0x1a) = local_3ba;
          uVar18 = 0;
          memset(puVar29 + 4,0,0x140);
          param_2 = local_358;
          puVar29[2] = &PTR_FUN_14a920140;
          puVar29[0x44] = 0;
          puVar29[0x46] = 0x600000000;
          puVar29[0x68] = 0;
          puVar29[0x6a] = 0x800000000;
          puVar29[0x70] = lVar12;
          *(undefined8 *)((longlong)puVar29 + 0x404) = 0xffffffffffffffff;
          puVar29[0x82] = 0;
          puVar29[0x83] = 0;
          *(undefined4 *)(puVar29 + 0x78) = *(undefined4 *)(*(longlong *)(param_1 + 0x298) + 8);
          puVar29[0x71] = lVar5;
          local_3c1 = *(int *)(DAT_14cae4110 + 4) != 0;
          lVar12 = CONCAT71((int7)((ulonglong)DAT_14cae4110 >> 8),local_3c1);
          lVar21 = *(longlong *)(lVar5 + 0x20);
          local_180 = lVar21 != 0;
          if ((bool)local_180) {
            if (*(int *)(lVar21 + 0xd0) < 1) {
              iVar10 = 0;
            }
            else {
              lVar30 = 0x18;
              lVar20 = 0;
              do {
                lVar12 = *(longlong *)(lVar21 + 0xc0);
                if (*(longlong *)(lVar21 + 0xc0) == 0) {
                  lVar12 = lVar21;
                }
                dVar58 = *(double *)(lVar12 + -0x18 + lVar30);
                local_328 = *(double *)(lVar12 + -0x10 + lVar30);
                local_3a8 = *(double *)(lVar12 + -8 + lVar30);
                dVar68 = 1.0 / SQRT(local_3a8 * local_3a8 + dVar58 * dVar58 + local_328 * local_328)
                ;
                local_3b8 = local_128;
                local_378._0_8_ = dStack_130;
                local_338 = local_148;
                local_380 = local_158;
                local_348 = local_178[1];
                local_3b0 = local_178[0];
                local_368._0_8_ = dStack_150;
                dVar58 = dVar58 * dVar68;
                local_328 = local_328 * dVar68;
                local_3a8 = local_3a8 * dVar68;
                dVar46 = local_3a8 * (local_178[1] * (double)local_148 - dStack_150 * local_178[2])
                         + local_328 * (dStack_130 * local_178[2] - local_178[1] * local_128) +
                           dVar58 * (dStack_150 * local_128 - dStack_130 * (double)local_148) + 0.0;
                dVar53 = local_3a8 *
                         (local_178[2] * (double)local_158 - (double)local_148 * local_178[0]) +
                         local_328 * (local_128 * local_178[0] - local_178[2] * local_138) +
                         dVar58 * ((double)local_148 * local_138 - local_128 * (double)local_158) +
                         0.0;
                uStack_320 = 0;
                local_398._8_8_ = 0;
                local_398._0_8_ = dVar58;
                uStack_3a0 = 0;
                local_2e8 = (undefined8 *)0x0;
                dVar67 = ((double)local_158 * dStack_130 - local_138 * dStack_150) * dVar58 +
                         (local_138 * local_178[1] - local_178[0] * dStack_130) * local_328 +
                         (local_178[0] * dStack_150 - (double)local_158 * local_178[1]) * local_3a8
                         + 0.0;
                dVar38 = dVar67 * dVar67 + dVar46 * dVar46 + dVar53 * dVar53;
                dVar41 = 0.0;
                puVar11 = (undefined8 *)0x0;
                dStack_300 = 0.0;
                if (9.99999993922529e-09 < dVar38) {
                  dVar38 = 1.0 / SQRT(dVar38);
                  puVar11 = (undefined8 *)(dVar67 * dVar38);
                  dVar41 = dVar53 * dVar38;
                  local_2e8 = (undefined8 *)(dVar38 * dVar46);
                  dStack_300 = dVar53;
                }
                uStack_2e0 = 0;
                uStack_2f0 = 0;
                dVar53 = local_128 * local_100 - local_108 * local_120;
                local_350 = local_140;
                dVar38 = (double)local_148 * local_100 - local_108 * local_140;
                dVar67 = (double)local_148 * local_120 - local_128 * local_140;
                dVar47 = local_100 * local_178[2] - local_108 * local_178[3];
                dVar48 = local_120 * local_178[2] - local_128 * local_178[3];
                dVar46 = local_178[2] * local_140 - (double)local_148 * local_178[3];
                dVar67 = (local_138 *
                          (local_110 * dVar46 + (dVar38 * local_178[1] - dVar47 * dStack_150)) +
                         (local_178[0] *
                          (local_110 * dVar67 + (dStack_150 * dVar53 - dVar38 * dStack_130)) -
                         (local_110 * dVar48 + (dVar53 * local_178[1] - dVar47 * dStack_130)) *
                         (double)local_158)) -
                         (dVar46 * dStack_130 + (dVar67 * local_178[1] - dVar48 * dStack_150)) *
                         local_118;
                local_308._0_4_ = SUB84(dVar41,0);
                uVar63 = (undefined4)local_308;
                local_2f8._0_4_ = SUB84(puVar11,0);
                uVar64 = (undefined4)local_2f8;
                local_308._4_4_ = (uint)((ulonglong)dVar41 >> 0x20);
                local_2f8._4_4_ = (uint)((ulonglong)puVar11 >> 0x20);
                uVar35 = local_308._4_4_;
                uVar16 = local_2f8._4_4_;
                if (dVar67 < 0.0) {
                  uVar35 = local_308._4_4_ ^ 0x80000000;
                  uVar16 = local_2f8._4_4_ ^ 0x80000000;
                }
                dVar38 = dVar68 * *(double *)(lVar12 + lVar30) -
                         (*(double *)(lVar5 + 0x38) * local_3a8 +
                         *(double *)(lVar5 + 0x28) * dVar58 + *(double *)(lVar5 + 0x30) * local_328)
                ;
                dVar48 = local_3a8 * dVar38;
                dVar68 = local_328 * dVar38;
                dVar38 = dVar38 * dVar58;
                dVar46 = dVar48 * local_138 + dVar68 * (double)local_158 + dVar38 * local_178[0] +
                         local_118;
                dVar53 = dVar48 * dStack_130 + dVar68 * dStack_150 + dVar38 * local_178[1] +
                         local_110;
                dVar58 = dVar38 * local_178[2] + dVar68 * (double)local_148 + dVar48 * local_128 +
                         local_108;
                iVar10 = *(int *)(puVar29 + 0x46);
                lVar21 = (longlong)iVar10;
                *(uint *)(puVar29 + 0x46) = iVar10 + 1U;
                local_308 = dVar41;
                local_2f8 = puVar11;
                if (*(uint *)((longlong)puVar29 + 0x234) < iVar10 + 1U) {
                  FUN_1448afb60(puVar29 + 0x2c,iVar10);
                }
                uVar36 = -(ulonglong)(dVar67 < 0.0);
                dVar68 = (double)(~uVar36 & (ulonglong)local_2e8 |
                                 (ulonglong)-(double)local_2e8 & uVar36);
                dVar41 = 1.0 / SQRT((double)CONCAT44(uVar16,uVar64) *
                                    (double)CONCAT44(uVar16,uVar64) +
                                    dVar68 * dVar68 +
                                    (double)CONCAT44(uVar35,uVar63) *
                                    (double)CONCAT44(uVar35,uVar63));
                puVar11 = (undefined8 *)puVar29[0x44];
                if ((undefined8 *)puVar29[0x44] == (undefined8 *)0x0) {
                  puVar11 = puVar29 + 0x2c;
                }
                puVar11[lVar21 * 4] = dVar41 * dVar68;
                puVar11[lVar21 * 4 + 1] = (double)CONCAT44(uVar35,uVar63) * dVar41;
                puVar11[lVar21 * 4 + 2] = (double)CONCAT44(uVar16,uVar64) * dVar41;
                puVar11[lVar21 * 4 + 3] =
                     (dVar58 * (double)CONCAT44(uVar16,uVar64) +
                     dVar46 * dVar68 + dVar53 * (double)CONCAT44(uVar35,uVar63)) * dVar41;
                lVar20 = lVar20 + 1;
                lVar21 = *(longlong *)(lVar5 + 0x20);
                lVar12 = (longlong)*(int *)(lVar21 + 0xd0);
                lVar30 = lVar30 + 0x20;
              } while (lVar20 < lVar12);
              iVar10 = *(int *)(puVar29 + 0x46);
              param_4 = local_33c;
            }
            local_3b8 = (double)CONCAT44(local_3b8._4_4_,
                                         (int)CONCAT71((int7)((ulonglong)lVar12 >> 8),iVar10 == 4));
            cVar7 = '\0';
            param_2 = local_358;
LAB_143524cdc:
            if (iVar10 == 0) {
              local_3c1 = 1;
            }
            else {
              FUN_1448afd16(puVar29 + 0x2c);
            }
            local_186 = (char)local_3c0;
            if ((local_186 == '\0') || (*(longlong **)(lVar5 + 0x10) == (longlong *)0x0)) {
LAB_143524d06:
              pdVar15 = (double *)(lVar5 + 0x1048);
            }
            else {
              pdVar15 = (double *)(**(code **)(**(longlong **)(lVar5 + 0x10) + 0x48))();
              if ((*(float *)(pdVar15 + 7) == 0.0) && (!NAN(*(float *)(pdVar15 + 7))))
              goto LAB_143524d06;
            }
            local_228 = pdVar15[2];
            local_238 = *pdVar15;
            dStack_230 = pdVar15[1];
            dVar58 = local_228 * dStack_130 + dStack_230 * dStack_150 + local_238 * local_178[1] +
                     local_110;
            auVar40._8_4_ = SUB84(dVar58,0);
            auVar40._0_8_ =
                 local_228 * local_138 + dStack_230 * (double)local_158 + local_238 * local_178[0] +
                 local_118;
            auVar40._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            *(undefined1 (*) [16])(puVar29 + 0x72) = auVar40;
            puVar29[0x74] =
                 local_228 * local_128 + dStack_230 * (double)local_148 + local_238 * local_178[2] +
                 local_108;
            if (((char)local_3c0 == '\0') || (*(longlong **)(lVar5 + 0x10) == (longlong *)0x0)) {
LAB_143524dc0:
              pdVar15 = (double *)(lVar5 + 0x1048);
            }
            else {
              lVar21 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x48))();
              if ((*(float *)(lVar21 + 0x38) == 0.0) && (!NAN(*(float *)(lVar21 + 0x38))))
              goto LAB_143524dc0;
              pdVar15 = (double *)(lVar21 + 0x18);
            }
            local_228 = pdVar15[2];
            local_238 = *pdVar15;
            dStack_230 = pdVar15[1];
            dVar58 = local_228 * dStack_130 + dStack_230 * dStack_150 + local_238 * local_178[1] +
                     local_110;
            auVar43._8_4_ = SUB84(dVar58,0);
            auVar43._0_8_ =
                 local_228 * local_138 + dStack_230 * (double)local_158 + local_238 * local_178[0] +
                 local_118;
            auVar43._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            *(undefined1 (*) [16])(puVar29 + 0x75) = auVar43;
            puVar29[0x77] =
                 local_228 * local_128 + dStack_230 * (double)local_148 + local_238 * local_178[2] +
                 local_108;
            uVar64 = 0;
            uVar63 = 0;
            if ((~*(byte *)(param_1 + 0x75) & 0x14) == 0 || (*(byte *)(param_1 + 0x75) & 0x20) != 0)
            {
              uVar63 = *(undefined4 *)(param_1 + 0xb8);
            }
            *(undefined4 *)((longlong)puVar29 + 0x41c) = uVar63;
            if (cVar7 == '\0') {
              uVar64 = *(undefined4 *)(DAT_14cae4898 + 4);
            }
            local_368._0_4_ = uVar64;
            local_3a8 = (double)CONCAT44(local_3a8._4_4_,*(undefined4 *)(param_1 + 0x910));
            uVar35 = *(uint *)(DAT_14cae4188 + 4);
            fVar73 = *(float *)(DAT_14cae48b0 + 4);
            local_398._0_4_ = DAT_14cb0cc0c;
            lVar21 = *(longlong *)puVar29[0x70];
            local_308 = (double)((*(float *)(lVar21 + 0x3c) - *(float *)(lVar21 + 0x30)) * 0.5 +
                                *(float *)(lVar21 + 0x30));
            dStack_300 = 0.0;
            local_328 = (double)((*(float *)(lVar21 + 0x38) - *(float *)(lVar21 + 0x2c)) * 0.5 +
                                *(float *)(lVar21 + 0x2c));
            uStack_320 = 0;
            dVar53 = (double)((*(float *)(lVar21 + 0x34) - *(float *)(lVar21 + 0x28)) * 0.5 +
                             *(float *)(lVar21 + 0x28));
            lVar21 = *(longlong *)(param_1 + 0x298);
            auVar39._8_8_ = DAT_14c846500;
            auVar39._0_8_ = DAT_14c8464f8;
            auVar40 = divpd(auVar39,_DAT_1499387d0);
            auVar42._8_8_ = 0;
            auVar42._0_8_ = DAT_14c846508;
            auVar43 = divpd(auVar42,_DAT_1499387d0);
            auVar40 = roundpd(auVar40,auVar40,3);
            auVar43 = roundpd(auVar43,auVar43,3);
            dVar58 = (DAT_14c8464f8 - auVar40._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar41 = (DAT_14c846500 - auVar40._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar47 = (DAT_14c846508 - auVar43._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar70 = (0.0 - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar68 = sin(dVar58);
            dVar67 = sin(dVar41);
            dVar38 = sin(dVar47);
            sin(dVar70);
            dVar46 = cos(dVar58);
            dVar48 = cos(dVar41);
            dVar47 = cos(dVar47);
            cos(dVar70);
            dVar58 = -(dVar48 * dVar68 * dVar38) + dVar67 * dVar46 * dVar47;
            dVar41 = dVar67 * dVar68 * dVar38 + dVar48 * dVar46 * dVar47;
            dVar49 = dVar68 * dVar67 * dVar47 - dVar46 * dVar48 * dVar38;
            dVar54 = -(dVar68 * dVar48 * dVar47) - dVar46 * dVar67 * dVar38;
            dVar47 = dVar54 + dVar54;
            dVar70 = dVar58 + dVar58;
            dVar68 = dVar49 * (dVar49 + dVar49);
            dVar48 = (1.0 - (dVar68 + dVar54 * dVar47)) * local_308;
            dVar38 = (1.0 - (dVar58 * dVar70 + dVar54 * dVar47)) * dVar53;
            dVar46 = (1.0 - (dVar58 * dVar70 + dVar68)) * local_328;
            dVar58 = (dVar49 + dVar49) * dVar41;
            dVar68 = (dVar47 * dVar49 + dVar70 * dVar41) * dVar53;
            dVar67 = (dVar70 * dVar54 + dVar58) * local_328;
            dVar50 = (dVar47 * dVar41 + dVar49 * dVar70) * local_308;
            dVar69 = (dVar47 * dVar49 - dVar70 * dVar41) * local_328;
            dVar54 = (dVar70 * dVar54 - dVar58) * local_308;
            dVar53 = (dVar49 * dVar70 - dVar47 * dVar41) * dVar53;
            dVar41 = *(double *)(lVar21 + 0x68);
            dVar58 = *(double *)(lVar21 + 0x68);
            dVar47 = dVar50 * dVar50 + dVar69 * dVar69 + dVar38 * dVar38;
            dVar70 = dVar54 * dVar54 + dVar46 * dVar46 + dVar68 * dVar68;
            dVar49 = dVar48 * dVar48 + dVar67 * dVar67 + dVar53 * dVar53;
            if (dVar47 <= dVar70) {
              dVar47 = dVar70;
            }
            dVar3 = *(double *)(lVar21 + 0x70);
            dVar70 = *(double *)(lVar21 + 0x70);
            if (dVar47 <= dVar49) {
              dVar47 = dVar49;
            }
            dVar49 = *(double *)(lVar21 + 0x78);
            dVar4 = *(double *)(lVar21 + 0x78);
            if (dVar47 < 0.0) {
              dVar47 = sqrt(dVar47);
            }
            else {
              dVar47 = SQRT(dVar47);
            }
            dVar38 = ABS(dVar50 * dVar49) + ABS(dVar69 * dVar3) + ABS(dVar38 * dVar41);
            dVar68 = ABS(dVar54 * dVar4) + ABS(dVar46 * dVar70) + ABS(dVar68 * dVar58);
            dVar58 = ABS(dVar48 * dVar49) + ABS(dVar67 * dVar3) + ABS(dVar53 * dVar41);
            dVar47 = dVar47 * *(double *)(lVar21 + 0x80);
            dVar58 = SQRT(dVar68 * dVar68 + dVar58 * dVar58 + dVar38 * dVar38);
            if (dVar58 <= dVar47) {
              dVar47 = dVar58;
            }
            fVar37 = (float)((double)*(float *)((longlong)puVar29 + 0x41c) + dVar47);
            fVar45 = 3.4028235e+38;
            uVar63 = 0;
            if (0.0 < (float)local_368._0_4_) {
              dVar41 = *(double *)(lVar5 + 0x858) * 0.5;
              dVar58 = *(double *)(lVar5 + 0x830) * 0.5;
              if (dVar58 <= dVar41) {
                dVar58 = dVar41;
              }
              uVar63 = (undefined4)((ulonglong)dVar58 >> 0x20);
              fVar45 = 1e-08;
              if (1e-08 <= (float)local_368._0_4_ * 0.5) {
                fVar45 = (float)local_368._0_4_ * 0.5;
              }
              fVar45 = (((float)dVar58 * fVar37) / fVar45) * local_3a8._0_4_;
            }
            uVar8 = (uint)((float)*(int *)(param_1 + 0x90c) * (float)local_398._0_4_);
            uVar16 = uVar8;
            if (((0 < (int)uVar35) && (uVar16 = uVar35, 0 < (int)uVar8)) &&
               (uVar16 = uVar8, uVar35 < uVar8)) {
              uVar16 = uVar35;
            }
            fVar62 = (float)local_398._0_4_ * *(float *)(lVar5 + 0x41c);
            fVar57 = fVar45;
            if (fVar62 <= fVar45) {
              fVar57 = fVar62;
            }
            uVar35 = -(uint)(0.0 < *(float *)(lVar5 + 0x41c));
            uVar36 = CONCAT44(uVar63,~uVar35 & (uint)fVar45) | (ulonglong)((uint)fVar57 & uVar35);
            auVar44._8_8_ = 0;
            auVar44._0_8_ = uVar36;
            if ((0 < (int)uVar16) && ((float)(int)uVar16 <= (float)uVar36)) {
              auVar44._4_4_ = uVar63;
              auVar44._0_4_ = (float)(int)uVar16;
              auVar44._8_8_ = 0;
            }
            local_17c = auVar44._0_4_;
            iVar10 = *(int *)(puVar29 + 0x78);
            if (1 < iVar10) {
              lVar21 = 0;
              do {
                dVar58 = *(double *)(lVar5 + 0x858) * 0.5;
                dVar41 = *(double *)(lVar5 + 0x830) * 0.5;
                if (dVar41 <= dVar58) {
                  dVar41 = dVar58;
                }
                fVar57 = *(float *)(*(longlong *)(param_1 + 0x298) + 0x24 + lVar21 * 4) * 0.5;
                fVar45 = 1e-08;
                if (1e-08 <= fVar57) {
                  fVar45 = fVar57;
                }
                fVar45 = (((float)dVar41 * fVar37) / fVar45) * local_3a8._0_4_;
                auVar60 = auVar44;
                if (fVar45 <= local_17c) {
                  auVar60._4_12_ = auVar44._4_12_;
                  auVar60._0_4_ = fVar45;
                }
                fVar57 = local_17c - fVar73;
                if (fVar45 - fVar73 <= local_17c - fVar73) {
                  fVar57 = fVar45 - fVar73;
                }
                *(float *)((longlong)puVar29 + lVar21 * 4 + 0x3e4) = fVar57;
                *(int *)((longlong)puVar29 + lVar21 * 4 + 0x3c4) = auVar60._0_4_;
                iVar10 = *(int *)(puVar29 + 0x78);
                lVar12 = lVar21 + 2;
                lVar21 = lVar21 + 1;
              } while (lVar12 < iVar10);
            }
            *(float *)((longlong)puVar29 + (longlong)iVar10 * 4 + 0x3e0) = local_17c - fVar73;
            *(float *)((longlong)puVar29 + (longlong)*(int *)(puVar29 + 0x78) * 4 + 0x3c0) =
                 local_17c;
            if (0 < *(int *)(puVar29 + 0x78)) {
              lVar21 = 0;
              do {
                *(undefined4 *)((longlong)puVar29 + lVar21 * 4 + 0x360) = 2;
                iVar10 = *(int *)(*(longlong *)(**(longlong **)(param_1 + 0x298) + lVar21 * 8) +
                                 0x10c);
                if (iVar10 != 0) {
                  *(int *)((longlong)puVar29 + lVar21 * 4 + 0x360) = local_340 / iVar10;
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 < *(int *)(puVar29 + 0x78));
            }
            if ((-1 < *(int *)(param_1 + 0xae8)) &&
               (*(int *)(param_1 + 0xae8) <= *(int *)(param_1 + 0xaec))) {
              plVar22 = *(longlong **)(lVar5 + 0x10);
              if (plVar22 == (longlong *)0x0) {
                uVar35 = 0;
              }
              else if (*(code **)(*plVar22 + 0x58) == (code *)&LAB_144b15db2) {
                uVar35 = *(uint *)(plVar22 + 4);
              }
              else {
                uVar35 = (**(code **)(*plVar22 + 0x58))();
              }
              if (*(int *)(param_1 + 0xb08) != *(int *)(param_1 + 0xb34)) {
                lVar21 = *(longlong *)(param_1 + 0xb40);
                if (*(longlong *)(param_1 + 0xb40) == 0) {
                  lVar21 = local_2d0;
                }
                iVar10 = *(int *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0xb48) - 1U & uVar35) * 4)
                ;
                if (iVar10 != -1) {
                  do {
                    lVar21 = *(longlong *)(param_1 + 0xb00) + (longlong)iVar10 * 0x30;
                    if (*(uint *)(*(longlong *)(param_1 + 0xb00) + (longlong)iVar10 * 0x30) ==
                        uVar35) {
                      if ((lVar21 + 8 != 0 && lVar21 != 0) &&
                         (*(int *)(lVar21 + 0x20) == DAT_14c7590b0)) {
                        iVar10 = *(int *)(param_1 + 0xaec) - *(int *)(param_1 + 0xae8);
                        if ((iVar10 + 1 == *(int *)(lVar21 + 0x1c)) &&
                           (((iVar9 = *(int *)(lVar21 + 0x18), -1 < iVar9 &&
                             (iVar9 < (int)*(uint *)(lVar21 + 0x10))) &&
                            (uVar35 = iVar9 + iVar10,
                            uVar35 < *(uint *)(lVar21 + 0x10) && -1 < (int)uVar35)))) {
                          *(int *)((longlong)puVar29 + 0x404) = *(int *)(param_1 + 0xae8);
                          *(undefined4 *)(puVar29 + 0x81) = *(undefined4 *)(param_1 + 0xaec);
                          puVar29[0x82] = lVar21 + 8;
                          *(undefined4 *)(puVar29 + 0x83) = *(undefined4 *)(lVar21 + 0x18);
                        }
                      }
                      break;
                    }
                    iVar10 = *(int *)(lVar21 + 0x28);
                  } while (iVar10 != -1);
                }
              }
            }
            iVar9 = *(int *)(puVar29 + 0x78) + -1;
            iVar10 = *(int *)(DAT_14cae40e0 + 4);
            if (iVar10 < 0) {
              iVar27 = *(int *)(DAT_14cae70b0 + 4);
              if (iVar9 <= *(int *)(DAT_14cae70b0 + 4)) {
                iVar27 = iVar9;
              }
              iVar10 = *(int *)(param_1 + 0x878);
              iVar25 = *(int *)(param_1 + 0x87c);
              iVar28 = iVar25;
              if (iVar25 < iVar27) {
                iVar28 = iVar27;
              }
              if (iVar27 < 0) {
                iVar28 = iVar25;
              }
              iVar27 = *(int *)(puVar29 + 0x78);
              if (0 < iVar10) goto LAB_143525759;
            }
            else {
LAB_143525759:
              iVar28 = iVar9;
              if (iVar10 < iVar9) {
                iVar28 = iVar10;
              }
              iVar27 = iVar28;
              if (iVar28 < 1) {
                iVar28 = 0;
                iVar27 = iVar28;
              }
            }
            iVar10 = (int)*(char *)(*(longlong *)(param_1 + 0x298) + 0x8f);
            if (iVar28 < iVar10) {
              iVar28 = iVar10;
            }
            if (*(int *)(DAT_14cae4128 + 4) < 1) {
              fVar73 = *(float *)((longlong)puVar29 + 0x41c);
              if (local_3b8._0_1_ == '\0') {
                if ((fVar73 != 0.0) || (NAN(fVar73))) {
                  local_3d8 = (undefined8 *)CONCAT71(local_3d8._1_7_,local_3c1);
                  FUN_143527cdc(puVar33,0);
                }
                else {
                  local_3d8 = (undefined8 *)CONCAT71(local_3d8._1_7_,local_3c1);
                  FUN_1435283ca(puVar33,0,iVar28,iVar27);
                }
              }
              else if ((fVar73 != 0.0) || (NAN(fVar73))) {
                local_3d8 = (undefined8 *)CONCAT71(local_3d8._1_7_,local_3c1);
                FUN_143526d1a(puVar33,0);
              }
              else {
                local_3d8 = (undefined8 *)CONCAT71(local_3d8._1_7_,local_3c1);
                FUN_143527516(puVar33,0);
              }
            }
            local_3d8 = puVar33;
            FUN_14352268a(param_1,lVar5,local_310);
            goto LAB_1435257bc;
          }
          local_3b8 = (double)CONCAT44(local_3b8._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)uVar18 >> 8),DAT_14c761584));
          dVar58 = *(double *)(lVar5 + 0x8a8);
          uVar36 = CONCAT71((int7)((ulonglong)plVar22 >> 8),1.0 <= dVar58);
          if (((((*(char *)(lVar5 + 0x23f2) == '\x01') && (*(int *)(lVar5 + 0x1dd0) != 0)) &&
               (cVar7 = FUN_144b2acba(lVar5), cVar7 != '\0')) ||
              (*(char *)(lVar5 + 0x23f5) == '\x01')) &&
             ((*(int *)(lVar5 + 0x1dd0) != 0 && (*(longlong *)(DAT_14cb0d2b0 + 0xfd0) != 0)))) {
            local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,(int)uVar36);
            puVar11 = puVar29 + 0x2c;
            if (puVar11 != (undefined8 *)(lVar5 + 0x2180)) {
              puVar19 = (undefined8 *)(lVar5 + 0x2180);
              if (*(undefined8 **)(lVar5 + 0x2240) != (undefined8 *)0x0) {
                puVar19 = *(undefined8 **)(lVar5 + 0x2240);
              }
              iVar10 = *(int *)(lVar5 + 0x2250);
              *(int *)(puVar29 + 0x46) = iVar10;
              if (iVar10 == 0 && *(int *)((longlong)puVar29 + 0x234) == 0) {
                *(undefined4 *)((longlong)puVar29 + 0x234) = 6;
              }
              else {
                FUN_144715b40(puVar11);
                if (iVar10 != 0) {
                  _Dst = (undefined8 *)puVar29[0x44];
                  if ((undefined8 *)puVar29[0x44] == (undefined8 *)0x0) {
                    _Dst = puVar11;
                  }
                  memcpy(_Dst,puVar19,(longlong)iVar10 << 5);
                }
              }
            }
            puVar19 = puVar29 + 0x48;
            local_380 = puVar11;
            local_350 = dVar58;
            if (puVar19 != (undefined8 *)(lVar5 + 0x2260)) {
              puVar11 = (undefined8 *)(lVar5 + 0x2260);
              if (*(undefined8 **)(lVar5 + 0x2360) != (undefined8 *)0x0) {
                puVar11 = *(undefined8 **)(lVar5 + 0x2360);
              }
              iVar10 = *(int *)(lVar5 + 0x2370);
              *(int *)(puVar29 + 0x6a) = iVar10;
              if (iVar10 == 0 && *(int *)((longlong)puVar29 + 0x354) == 0) {
                *(undefined4 *)((longlong)puVar29 + 0x354) = 8;
              }
              else {
                FUN_144715cb0(puVar19);
                if (iVar10 != 0) {
                  if ((undefined8 *)puVar29[0x68] != (undefined8 *)0x0) {
                    puVar19 = (undefined8 *)puVar29[0x68];
                  }
                  memcpy(puVar19,puVar11,(longlong)iVar10 << 5);
                }
              }
            }
            param_2 = local_358;
            puVar11 = (undefined8 *)puVar29[0x44];
            if ((undefined8 *)puVar29[0x44] == (undefined8 *)0x0) {
              puVar11 = local_380;
            }
            iVar10 = *(int *)(puVar29 + 0x46);
            uVar36 = (ulonglong)local_2e8 & 0xffffffff;
            if ((longlong)iVar10 != 0) {
              lVar21 = 0;
              do {
                local_2f8 = local_158;
                local_308 = local_178[1];
                local_328 = local_178[0];
                local_3a8 = dStack_150;
                dVar58 = *(double *)((longlong)puVar11 + lVar21);
                local_398._0_8_ = *(double *)((longlong)puVar11 + lVar21 + 8);
                local_368._0_8_ = *(double *)((longlong)puVar11 + lVar21 + 0x10);
                dVar53 = (double)local_368._0_8_ *
                         (local_178[1] * (double)local_148 - dStack_150 * local_178[2]) +
                         (double)local_398._0_8_ *
                         (dStack_130 * local_178[2] - local_178[1] * local_128) +
                         dVar58 * (dStack_150 * local_128 - dStack_130 * (double)local_148) + 0.0;
                dVar48 = (double)local_368._0_8_ *
                         (local_178[2] * (double)local_158 - (double)local_148 * local_178[0]) +
                         (double)local_398._0_8_ *
                         (local_128 * local_178[0] - local_178[2] * local_138) +
                         dVar58 * ((double)local_148 * local_138 - local_128 * (double)local_158) +
                         0.0;
                local_398._8_8_ = 0;
                local_368._8_8_ = 0;
                dVar41 = 0.0;
                dVar68 = ((double)local_158 * dStack_130 - local_138 * dStack_150) * dVar58 +
                         (local_138 * local_178[1] - local_178[0] * dStack_130) *
                         (double)local_398._0_8_ +
                         (local_178[0] * dStack_150 - (double)local_158 * local_178[1]) *
                         (double)local_368._0_8_ + 0.0;
                dVar46 = dVar68 * dVar68 + dVar53 * dVar53 + dVar48 * dVar48;
                dVar67 = 0.0;
                plVar22 = (longlong *)0x0;
                dVar38 = 0.0;
                if (9.99999993922529e-09 < dVar46) {
                  dVar41 = 1.0 / SQRT(dVar46);
                  plVar22 = (longlong *)(dVar68 * dVar41);
                  dVar67 = dVar48 * dVar41;
                  dVar41 = dVar41 * dVar53;
                  dVar38 = dVar48;
                }
                uStack_330 = 0;
                local_378._8_4_ = SUB84(dVar38,0);
                local_378._0_8_ = dVar67;
                local_378._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                dVar38 = local_128 * local_100 - local_108 * local_120;
                local_3b0 = local_140;
                dVar48 = (double)local_148 * local_100 - local_108 * local_140;
                dVar47 = (double)local_148 * local_120 - local_128 * local_140;
                local_348 = dStack_130;
                dVar53 = local_100 * local_178[2] - local_108 * local_178[3];
                dVar46 = local_120 * local_178[2] - local_128 * local_178[3];
                dVar68 = local_178[2] * local_140 - (double)local_148 * local_178[3];
                dVar68 = (local_138 *
                          (local_110 * dVar68 + (dVar48 * local_178[1] - dVar53 * dStack_150)) +
                         (local_178[0] *
                          (local_110 * dVar47 + (dStack_150 * dVar38 - dVar48 * dStack_130)) -
                         (local_110 * dVar46 + (dVar38 * local_178[1] - dVar53 * dStack_130)) *
                         (double)local_158)) -
                         (dVar68 * dStack_130 + (dVar47 * local_178[1] - dVar46 * dStack_150)) *
                         local_118;
                local_338._0_4_ = SUB84(plVar22,0);
                local_338._4_4_ = (uint)((ulonglong)plVar22 >> 0x20);
                uVar35 = (uint)((ulonglong)dVar67 >> 0x20);
                if (dVar68 < 0.0) {
                  uVar35 = uVar35 ^ 0x80000000;
                  local_338._4_4_ = local_338._4_4_ ^ 0x80000000;
                }
                uVar26 = -(ulonglong)(dVar68 < 0.0);
                dVar68 = *(double *)((longlong)puVar11 + lVar21 + 0x18);
                dVar46 = (double)local_368._0_8_ * dVar68;
                dVar38 = (double)local_398._0_8_ * dVar68;
                dVar58 = dVar58 * dVar68;
                dVar41 = (double)(~uVar26 & (ulonglong)dVar41 | (ulonglong)-dVar41 & uVar26);
                *(double *)((longlong)puVar11 + lVar21) = dVar41;
                *(ulonglong *)((longlong)puVar11 + lVar21 + 8) = CONCAT44(uVar35,SUB84(dVar67,0));
                *(ulonglong *)((longlong)puVar11 + lVar21 + 0x10) =
                     CONCAT44(local_338._4_4_,(undefined4)local_338);
                *(double *)((longlong)puVar11 + lVar21 + 0x18) =
                     (dVar58 * local_178[2] + dVar38 * (double)local_148 + dVar46 * local_128 +
                     local_108) * (double)CONCAT44(local_338._4_4_,(undefined4)local_338) +
                     (dVar46 * local_138 + dVar38 * (double)local_158 + dVar58 * local_178[0] +
                     local_118) * dVar41 +
                     (dVar46 * dStack_130 + dVar38 * dStack_150 + dVar58 * local_178[1] + local_110)
                     * (double)CONCAT44(uVar35,SUB84(dVar67,0));
                lVar21 = lVar21 + 0x20;
                local_338 = plVar22;
              } while ((longlong)iVar10 * 0x20 != lVar21);
            }
            FUN_1448afd16(local_380);
            iVar10 = *(int *)(puVar29 + 0x46);
            if (local_350 < 1.0) goto LAB_143525556;
            local_3b8 = (double)((ulonglong)local_3b8 & 0xffffffff00000000);
            cVar7 = '\x01';
            goto LAB_143524cdc;
          }
          FUN_1447fea8d(&local_238,local_2d8,lVar5 + 0xab0);
          local_3d8 = (undefined8 *)0x0;
          FUN_1407300cb(puVar29 + 0x2c,&local_238,0);
          if (1.0 <= dVar58) {
            iVar10 = *(int *)(puVar29 + 0x46);
            cVar7 = '\x01';
            local_3b8 = (double)((ulonglong)local_3b8 & 0xffffffff00000000);
            goto LAB_143524cdc;
          }
          iVar10 = *(int *)(puVar29 + 0x46);
LAB_143525556:
          cVar7 = (char)uVar36;
          uVar64 = 0x3ff00000;
          uVar63 = 0;
          if (iVar10 == 4) {
            local_238 = 1.0;
            local_220 = 0;
            dStack_218 = 0.0;
            dStack_230 = 0.0;
            local_228 = 0.0;
            local_210 = 1.0;
            local_1f8 = 0.0;
            dStack_1f0 = 0.0;
            local_208 = 0.0;
            uStack_200 = 0;
            local_1e8 = 1.0;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_1c0 = 0x3ff0000000000000;
            pdVar15 = (double *)(puVar29 + 0x2c);
            pdVar14 = (double *)puVar29[0x44];
            pdVar17 = pdVar14;
            if (pdVar14 == (double *)0x0) {
              pdVar17 = pdVar15;
            }
            uVar55 = 0;
            uVar56 = 0;
            uVar65 = uVar63;
            uVar66 = uVar64;
            if (pdVar17 != (double *)0x0) {
              local_238 = *pdVar17;
              uVar65 = SUB84(local_238,0);
              uVar66 = (undefined4)((ulonglong)local_238 >> 0x20);
              dStack_230 = pdVar17[1];
              uVar55 = SUB84(dStack_230,0);
              uVar56 = (undefined4)((ulonglong)dStack_230 >> 0x20);
              local_228 = pdVar17[2];
            }
            if (pdVar17 != (double *)&DAT_ffffffffffffffe0) {
              dStack_218 = pdVar17[4];
              local_210 = pdVar17[5];
              local_208 = pdVar17[6];
            }
            if (pdVar17 == (double *)&DAT_ffffffffffffffc0) {
              uVar71 = 0;
              uVar72 = 0;
            }
            else {
              local_1f8 = pdVar17[8];
              uVar71 = SUB84(local_1f8,0);
              uVar72 = (undefined4)((ulonglong)local_1f8 >> 0x20);
              dStack_1f0 = pdVar17[9];
              local_1e8 = pdVar17[10];
              uVar63 = SUB84(local_1e8,0);
              uVar64 = (undefined4)((ulonglong)local_1e8 >> 0x20);
            }
            if ((((((9.99999993922529e-09 < ABS((double)CONCAT44(uVar66,uVar65))) ||
                   (9.99999993922529e-09 < ABS((double)CONCAT44(uVar56,uVar55)))) ||
                  (9.99999993922529e-09 < ABS(local_228))) ||
                 ((9.99999993922529e-09 < ABS(dStack_218) || (9.99999993922529e-09 < ABS(local_210))
                  ))) || (9.99999993922529e-09 < ABS(local_208))) ||
               (((9.99999993922529e-09 < ABS((double)CONCAT44(uVar72,uVar71)) ||
                 (9.99999993922529e-09 < ABS(dStack_1f0))) ||
                (9.99999993922529e-09 < ABS((double)CONCAT44(uVar64,uVar63)))))) {
              FUN_14007522e(local_2b8,&local_238);
              pdVar14 = (double *)puVar29[0x44];
              iVar10 = *(int *)(puVar29 + 0x46);
            }
            else {
              pdVar17 = (double *)&DAT_14c846400;
              pdVar23 = local_2b8;
              for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
                *pdVar23 = *pdVar17;
                pdVar17 = pdVar17 + 1;
                pdVar23 = pdVar23 + 1;
              }
              iVar10 = 4;
            }
            if (pdVar14 == (double *)0x0) {
              pdVar14 = pdVar15;
            }
            param_2 = local_358;
            if (0 < iVar10) {
              dVar58 = pdVar14[0xb];
              dVar41 = pdVar14[3];
              dVar68 = pdVar14[7];
              lVar21 = 0;
              lVar12 = 0;
              do {
                pdVar14 = (double *)puVar29[0x44];
                if ((double *)puVar29[0x44] == (double *)0x0) {
                  pdVar14 = pdVar15;
                }
                dVar67 = *(double *)((longlong)pdVar14 + lVar21);
                dVar38 = *(double *)((longlong)pdVar14 + lVar21 + 8);
                dVar46 = *(double *)((longlong)pdVar14 + lVar21 + 0x10);
                dVar53 = dVar46 * dVar46 + dVar67 * dVar67 + dVar38 * dVar38;
                if (((dVar53 != 1.0) ||
                    (dVar48 = dVar46, dVar47 = dVar67, dVar70 = dVar38, NAN(dVar53))) &&
                   (dVar48 = DAT_14c8464f0, dVar47 = DAT_14c8464e0, dVar70 = DAT_14c8464e8,
                   9.99999993922529e-09 <= dVar53)) {
                  dVar53 = 1.0 / SQRT(dVar53);
                  dVar48 = dVar46 * dVar53;
                  dVar47 = dVar67 * dVar53;
                  dVar70 = dVar38 * dVar53;
                }
                *(double *)((longlong)pdVar14 + lVar21) = dVar47;
                *(double *)((longlong)pdVar14 + lVar21 + 8) = dVar70;
                *(double *)((longlong)pdVar14 + lVar21 + 0x10) = dVar48;
                *(double *)((longlong)pdVar14 + lVar21 + 0x18) =
                     dVar48 * (dVar41 * local_278 + dVar68 * local_270 + dVar58 * local_268 +
                              local_260 * 0.0) +
                     dVar47 * (local_2b8[3] * 0.0 +
                              dVar58 * local_2b8[2] + dVar68 * local_2b8[1] + dVar41 * local_2b8[0])
                     + (local_280 * 0.0 +
                       dVar58 * local_288 + dVar68 * local_290 + dVar41 * local_298) * dVar70;
                lVar12 = lVar12 + 1;
                iVar10 = *(int *)(puVar29 + 0x46);
                lVar21 = lVar21 + 0x20;
              } while (lVar12 < iVar10);
            }
            goto LAB_143524cdc;
          }
        }
        iVar9 = (int)param_2[1];
        lVar21 = local_318;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar9);
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143526d1a FUN_143526d1a body=2044 status=ok
// SIG undefined FUN_143526d1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143526d1a(longlong param_1,uint param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  int iVar22;
  double *pdVar23;
  int *piVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined4 in_R10D;
  int iVar29;
  undefined4 in_R11D;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  bool bVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  
  lVar33 = **(longlong **)(param_1 + 0x370);
  lVar21 = (ulonglong)param_2 * 0x40;
  dVar39 = (double)*(float *)(param_1 + 0x40c);
  dVar38 = (double)*(float *)(lVar33 + lVar21) - dVar39;
  dVar37 = (double)*(float *)(lVar33 + 4 + lVar21) - dVar39;
  dVar36 = (double)*(float *)(lVar33 + 8 + lVar21) - dVar39;
  dVar19 = (double)*(float *)(lVar33 + 0x10 + lVar21) + dVar39;
  dVar18 = (double)*(float *)(lVar33 + 0x14 + lVar21) + dVar39;
  dVar39 = (double)*(float *)(lVar33 + 0x18 + lVar21) + dVar39;
  bVar34 = true;
  if (param_5 == '\0') {
    dVar20 = (dVar38 + dVar19) * _DAT_14cae42e0;
    dVar44 = (dVar37 + dVar18) * dRam000000014cae42e8;
    dVar10 = (dVar19 - dVar38) * _DAT_14cae42e0;
    dVar11 = (dVar18 - dVar37) * dRam000000014cae42e8;
    dVar43 = (dVar39 + dVar36) * DAT_14cae42f0;
    pdVar5 = *(double **)(param_1 + 0x330);
    pdVar23 = (double *)(param_1 + 0x230);
    if (pdVar5 != (double *)0x0) {
      pdVar23 = pdVar5;
    }
    dVar9 = (dVar39 - dVar36) * DAT_14cae42f0;
    dVar13 = ABS(pdVar23[8]) * dVar9 + ABS(pdVar23[4]) * dVar11 + ABS(*pdVar23) * dVar10;
    dVar14 = ABS(pdVar23[9]) * dVar9 + ABS(pdVar23[5]) * dVar11 + ABS(pdVar23[1]) * dVar10;
    dVar15 = (dVar43 * pdVar23[8] + dVar44 * pdVar23[4] + dVar20 * *pdVar23) - pdVar23[0xc];
    dVar16 = (dVar43 * pdVar23[9] + dVar44 * pdVar23[5] + dVar20 * pdVar23[1]) - pdVar23[0xd];
    dVar45 = (dVar43 * pdVar23[10] + dVar44 * pdVar23[6] + dVar20 * pdVar23[2]) - pdVar23[0xe];
    dVar43 = (dVar43 * pdVar23[0xb] + dVar44 * pdVar23[7] + dVar20 * pdVar23[3]) - pdVar23[0xf];
    dVar20 = ABS(pdVar23[10]) * dVar9 + ABS(pdVar23[6]) * dVar11 + ABS(pdVar23[2]) * dVar10;
    dVar10 = ABS(pdVar23[0xb]) * dVar9 + ABS(pdVar23[7]) * dVar11 + ABS(pdVar23[3]) * dVar10;
    lVar35 = -(ulonglong)(0.0 - dVar14 < dVar16);
    auVar7._8_4_ = (int)lVar35;
    auVar7._0_8_ = -(ulonglong)(0.0 - dVar13 < dVar15);
    auVar7._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    iVar22 = movmskpd((int)pdVar23,auVar7);
    lVar35 = -(ulonglong)(0.0 - dVar10 < dVar43);
    auVar8._8_4_ = (int)lVar35;
    auVar8._0_8_ = -(ulonglong)(0.0 - dVar20 < dVar45);
    auVar8._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    uVar27 = movmskpd((int)pdVar5,auVar8);
    lVar35 = -(ulonglong)(dVar14 < dVar16);
    auVar12._8_4_ = (int)lVar35;
    auVar12._0_8_ = -(ulonglong)(dVar13 < dVar15);
    auVar12._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    iVar29 = movmskpd(in_R10D,auVar12);
    lVar35 = -(ulonglong)(dVar10 < dVar43);
    auVar17._8_4_ = (int)lVar35;
    auVar17._0_8_ = -(ulonglong)(dVar20 < dVar45);
    auVar17._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    uVar30 = movmskpd(in_R11D,auVar17);
    bVar34 = (uVar27 & 0x3fffffff) == 0 && iVar22 == 0;
    if ((uVar30 & 0x3fffffff) != 0 || iVar29 != 0) {
      return;
    }
  }
  iVar22 = param_3;
  if (param_3 != param_4) {
    dVar43 = (dVar39 + dVar36) * 0.5;
    dVar44 = (dVar18 + dVar37) * 0.5;
    dVar20 = (dVar19 + dVar38) * 0.5;
    dVar10 = *(double *)(param_1 + 0x380) - dVar20;
    dVar45 = *(double *)(param_1 + 0x388) - dVar44;
    dVar11 = *(double *)(param_1 + 0x390) - dVar43;
    fVar46 = (float)SQRT(dVar11 * dVar11 + dVar45 * dVar45 + dVar10 * dVar10);
    dVar20 = *(double *)(param_1 + 0x398) - dVar20;
    dVar44 = *(double *)(param_1 + 0x3a0) - dVar44;
    dVar43 = *(double *)(param_1 + 0x3a8) - dVar43;
    fVar40 = (float)SQRT(dVar43 * dVar43 + dVar44 * dVar44 + dVar20 * dVar20);
    fVar42 = (float)(SQRT((dVar36 - dVar39) * (dVar36 - dVar39) +
                          (dVar37 - dVar18) * (dVar37 - dVar18) +
                          (dVar38 - dVar19) * (dVar38 - dVar19)) * 0.5);
    lVar35 = (longlong)param_4;
    iVar29 = param_4;
    if (param_3 < param_4) {
      fVar41 = fVar46;
      if (fVar40 <= fVar46) {
        fVar41 = fVar40;
      }
      fVar41 = fVar41 - fVar42;
      uVar28 = (ulonglong)param_3;
      pfVar2 = (float *)(param_1 + 0x3b4 + uVar28 * 4);
      if (*pfVar2 <= fVar41 && fVar41 != *pfVar2) {
        lVar31 = 0;
        do {
          iVar22 = param_4;
          if (~uVar28 + lVar35 == lVar31) goto LAB_143527133;
          lVar1 = lVar31 + 1;
          pfVar2 = (float *)(param_1 + uVar28 * 4 + 0x3b8 + lVar31 * 4);
          lVar31 = lVar1;
        } while (*pfVar2 <= fVar41 && fVar41 != *pfVar2);
        param_3 = param_3 + (int)lVar1;
      }
    }
    iVar22 = param_3;
    if (param_3 < param_4) {
      if (fVar46 <= fVar40) {
        fVar46 = fVar40;
      }
      fVar46 = fVar46 + fVar42;
      if (fVar46 < *(float *)(param_1 + 0x3d0 + lVar35 * 4)) {
        do {
          lVar35 = lVar35 + -1;
          iVar29 = param_3;
          if (lVar35 <= param_3) break;
          param_4 = param_4 + -1;
          iVar29 = param_4;
        } while (fVar46 < *(float *)(param_1 + 0x3d0 + lVar35 * 4));
      }
    }
LAB_143527133:
    param_3 = iVar29;
    if (*(int *)(param_1 + 0x3b0) <= iVar22) {
      return;
    }
  }
  iVar29 = *(int *)(param_1 + 0x3f4);
  if (((iVar29 <= (int)param_2) && ((int)param_2 <= *(int *)(param_1 + 0x3f8))) &&
     (*(char *)(**(longlong **)(param_1 + 0x400) +
               (longlong)(int)((param_2 - iVar29) + *(int *)(param_1 + 0x408))) != '\0')) {
    return;
  }
  lVar33 = lVar33 + lVar21;
  iVar32 = *(int *)(lVar33 + 0xc);
  iVar3 = *(int *)(lVar33 + 0x20);
  iVar4 = *(int *)(lVar33 + 0x24);
  if (-1 < iVar32) {
    if ((iVar4 - iVar3) + 1 < *(int *)(param_1 + 0x350 + (longlong)iVar22 * 4)) {
      fVar46 = *(float *)(param_1 + 0x3b0 + (longlong)*(int *)(param_1 + 0x3b0) * 4);
      dVar43 = (dVar39 + dVar36) * 0.5;
      dVar10 = (dVar18 + dVar37) * 0.5;
      dVar11 = (dVar19 + dVar38) * 0.5;
      dVar44 = *(double *)(param_1 + 0x380) - dVar11;
      dVar20 = *(double *)(param_1 + 0x388) - dVar10;
      dVar45 = *(double *)(param_1 + 0x390) - dVar43;
      fVar42 = (float)SQRT(dVar45 * dVar45 + dVar20 * dVar20 + dVar44 * dVar44);
      dVar11 = *(double *)(param_1 + 0x398) - dVar11;
      dVar10 = *(double *)(param_1 + 0x3a0) - dVar10;
      dVar43 = *(double *)(param_1 + 0x3a8) - dVar43;
      fVar40 = (float)SQRT(dVar43 * dVar43 + dVar10 * dVar10 + dVar11 * dVar11);
      if (fVar42 <= fVar40) {
        fVar42 = fVar40;
      }
      fVar42 = (float)(SQRT((dVar36 - dVar39) * (dVar36 - dVar39) +
                            (dVar37 - dVar18) * (dVar37 - dVar18) +
                            (dVar38 - dVar19) * (dVar38 - dVar19)) * 0.5) + fVar42;
      bVar6 = fVar46 <= fVar42;
      if (bVar34 == false) {
        if (fVar46 <= fVar42) goto LAB_1435272e2;
        goto LAB_143527314;
      }
    }
    else {
      bVar6 = true;
      if (bVar34 == false) goto LAB_1435272e2;
    }
    if ((iVar22 < param_3 || (int)param_2 < iVar29) && (bVar6)) {
LAB_1435272e2:
      if (*(int *)(lVar33 + 0x1c) < iVar32) {
        return;
      }
      do {
        FUN_143526d1a(param_1,iVar32,iVar22,param_3,bVar34);
        bVar6 = iVar32 < *(int *)(lVar33 + 0x1c);
        iVar32 = iVar32 + 1;
      } while (bVar6);
      return;
    }
  }
LAB_143527314:
  iVar29 = *(int *)(param_1 + 0x3b0) + -1;
  if (param_3 < iVar29) {
    iVar29 = param_3;
  }
  if (*(char *)(param_1 + 8) != '\x01') goto LAB_1435273d2;
  iVar32 = iVar22;
  if (*(char *)(param_1 + 10) != '\0') {
    iVar32 = iVar29;
  }
  if (7 < iVar32) goto LAB_1435273d2;
  lVar21 = (longlong)iVar32;
  lVar33 = param_1 + lVar21 * 0x10;
  plVar25 = (longlong *)(lVar33 + 0x90);
  iVar32 = *(int *)(lVar33 + 0x98);
  if ((longlong)iVar32 == 0) {
LAB_143527375:
    *(uint *)(lVar33 + 0x98) = iVar32 + 1U;
    if (*(uint *)(lVar33 + 0x9c) < iVar32 + 1U) {
      FUN_144757aec(plVar25,iVar32);
    }
    *(int *)(*plVar25 + (longlong)iVar32 * 4) = iVar3;
    iVar32 = *(int *)(lVar33 + 0x98);
    *(uint *)(lVar33 + 0x98) = iVar32 + 1U;
    if (*(uint *)(lVar33 + 0x9c) < iVar32 + 1U) {
      FUN_144757aec(plVar25,iVar32);
    }
    piVar24 = (int *)((longlong)iVar32 * 4 + *plVar25);
  }
  else {
    if (*(int *)(*plVar25 + (longlong)(iVar32 + -1) * 4) + 1 != iVar3) goto LAB_143527375;
    piVar24 = (int *)(*plVar25 + (longlong)(iVar32 + -1) * 4);
  }
  *piVar24 = iVar4;
  *(int *)(param_1 + 0x110 + lVar21 * 4) =
       (iVar4 - iVar3) + *(int *)(param_1 + 0x110 + lVar21 * 4) + 1;
LAB_1435273d2:
  if ((iVar22 <= iVar29) && (*(char *)(param_1 + 9) != '\0')) {
    lVar33 = (longlong)iVar22;
    iVar22 = (iVar29 - iVar22) + 1;
    plVar25 = (longlong *)(lVar33 * 0x10 + param_1);
    do {
      plVar26 = plVar25 + 2;
      if (lVar33 < 8) {
        piVar24 = (int *)(param_1 + 0x130 + lVar33 * 4);
        *piVar24 = *piVar24 + (iVar4 - iVar3) + 1;
        iVar29 = (int)plVar25[3];
        if ((longlong)iVar29 == 0) {
LAB_143527433:
          *(uint *)(plVar25 + 3) = iVar29 + 1U;
          if (*(uint *)((longlong)plVar25 + 0x1c) < iVar29 + 1U) {
            FUN_144757aec(plVar26,iVar29);
          }
          *(int *)(*plVar26 + (longlong)iVar29 * 4) = iVar3;
          iVar29 = (int)plVar25[3];
          *(uint *)(plVar25 + 3) = iVar29 + 1U;
          if (*(uint *)((longlong)plVar25 + 0x1c) < iVar29 + 1U) {
            FUN_144757aec(plVar26,iVar29);
          }
          piVar24 = (int *)((longlong)iVar29 * 4 + *plVar26);
        }
        else {
          if (*(int *)(*plVar26 + (longlong)(iVar29 + -1) * 4) + 1 != iVar3) goto LAB_143527433;
          piVar24 = (int *)(*plVar26 + (longlong)(iVar29 + -1) * 4);
        }
        *piVar24 = iVar4;
      }
      lVar33 = lVar33 + 1;
      iVar22 = iVar22 + -1;
      plVar25 = plVar26;
    } while (iVar22 != 0);
  }
  return;
}



// FUNCTION 143527516 FUN_143527516 body=1989 status=ok
// SIG undefined FUN_143527516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143527516(longlong param_1,uint param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  bool bVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  longlong lVar22;
  int iVar23;
  double *pdVar24;
  longlong *plVar25;
  longlong *plVar26;
  int *piVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  undefined4 in_R10D;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  longlong lVar34;
  bool bVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  
  lVar34 = **(longlong **)(param_1 + 0x370);
  lVar22 = (ulonglong)param_2 * 0x40;
  dVar37 = (double)*(float *)(lVar34 + 8 + lVar22);
  dVar38 = (double)*(float *)(lVar34 + 4 + lVar22);
  dVar20 = (double)*(float *)(lVar34 + lVar22);
  dVar39 = (double)*(float *)(lVar34 + 0x18 + lVar22);
  dVar19 = (double)*(float *)(lVar34 + 0x14 + lVar22);
  dVar7 = (double)*(float *)(lVar34 + 0x10 + lVar22);
  bVar35 = true;
  if (param_5 == '\0') {
    dVar21 = (dVar20 + dVar7) * _DAT_14cae42e0;
    dVar44 = (dVar38 + dVar19) * dRam000000014cae42e8;
    dVar11 = (dVar7 - dVar20) * _DAT_14cae42e0;
    dVar12 = (dVar19 - dVar38) * dRam000000014cae42e8;
    dVar43 = (dVar37 + dVar39) * DAT_14cae42f0;
    pdVar5 = *(double **)(param_1 + 0x330);
    pdVar24 = (double *)(param_1 + 0x230);
    if (pdVar5 != (double *)0x0) {
      pdVar24 = pdVar5;
    }
    dVar10 = (dVar39 - dVar37) * DAT_14cae42f0;
    dVar14 = ABS(pdVar24[8]) * dVar10 + ABS(pdVar24[4]) * dVar12 + ABS(*pdVar24) * dVar11;
    dVar15 = ABS(pdVar24[9]) * dVar10 + ABS(pdVar24[5]) * dVar12 + ABS(pdVar24[1]) * dVar11;
    dVar16 = (dVar43 * pdVar24[8] + dVar44 * pdVar24[4] + dVar21 * *pdVar24) - pdVar24[0xc];
    dVar17 = (dVar43 * pdVar24[9] + dVar44 * pdVar24[5] + dVar21 * pdVar24[1]) - pdVar24[0xd];
    dVar45 = (dVar43 * pdVar24[10] + dVar44 * pdVar24[6] + dVar21 * pdVar24[2]) - pdVar24[0xe];
    dVar43 = (dVar43 * pdVar24[0xb] + dVar44 * pdVar24[7] + dVar21 * pdVar24[3]) - pdVar24[0xf];
    dVar21 = ABS(pdVar24[10]) * dVar10 + ABS(pdVar24[6]) * dVar12 + ABS(pdVar24[2]) * dVar11;
    dVar11 = ABS(pdVar24[0xb]) * dVar10 + ABS(pdVar24[7]) * dVar12 + ABS(pdVar24[3]) * dVar11;
    lVar36 = -(ulonglong)(0.0 - dVar15 < dVar17);
    auVar8._8_4_ = (int)lVar36;
    auVar8._0_8_ = -(ulonglong)(0.0 - dVar14 < dVar16);
    auVar8._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    iVar23 = movmskpd((int)pdVar24,auVar8);
    lVar36 = -(ulonglong)(0.0 - dVar11 < dVar43);
    auVar9._8_4_ = (int)lVar36;
    auVar9._0_8_ = -(ulonglong)(0.0 - dVar21 < dVar45);
    auVar9._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    uVar28 = movmskpd((int)pdVar5,auVar9);
    lVar36 = -(ulonglong)(dVar15 < dVar17);
    auVar13._8_4_ = (int)lVar36;
    auVar13._0_8_ = -(ulonglong)(dVar14 < dVar16);
    auVar13._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    iVar30 = movmskpd(param_4,auVar13);
    lVar36 = -(ulonglong)(dVar11 < dVar43);
    auVar18._8_4_ = (int)lVar36;
    auVar18._0_8_ = -(ulonglong)(dVar21 < dVar45);
    auVar18._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    uVar31 = movmskpd(in_R10D,auVar18);
    bVar35 = (uVar28 & 0x3fffffff) == 0 && iVar23 == 0;
    if ((uVar31 & 0x3fffffff) != 0 || iVar30 != 0) {
      return;
    }
  }
  iVar23 = param_3;
  if (param_3 != param_4) {
    dVar43 = (dVar37 + dVar39) * 0.5;
    dVar44 = (dVar38 + dVar19) * 0.5;
    dVar21 = (dVar20 + dVar7) * 0.5;
    dVar11 = *(double *)(param_1 + 0x380) - dVar21;
    dVar45 = *(double *)(param_1 + 0x388) - dVar44;
    dVar12 = *(double *)(param_1 + 0x390) - dVar43;
    fVar46 = (float)SQRT(dVar12 * dVar12 + dVar45 * dVar45 + dVar11 * dVar11);
    dVar21 = *(double *)(param_1 + 0x398) - dVar21;
    dVar44 = *(double *)(param_1 + 0x3a0) - dVar44;
    dVar43 = *(double *)(param_1 + 0x3a8) - dVar43;
    fVar40 = (float)SQRT(dVar43 * dVar43 + dVar44 * dVar44 + dVar21 * dVar21);
    fVar42 = (float)(SQRT((dVar37 - dVar39) * (dVar37 - dVar39) +
                          (dVar38 - dVar19) * (dVar38 - dVar19) +
                          (dVar20 - dVar7) * (dVar20 - dVar7)) * 0.5);
    lVar36 = (longlong)param_4;
    if (param_3 < param_4) {
      fVar41 = fVar46;
      if (fVar40 <= fVar46) {
        fVar41 = fVar40;
      }
      fVar41 = fVar41 - fVar42;
      uVar29 = (ulonglong)param_3;
      pfVar2 = (float *)(param_1 + 0x3b4 + uVar29 * 4);
      if (*pfVar2 <= fVar41 && fVar41 != *pfVar2) {
        lVar32 = 0;
        do {
          iVar23 = param_4;
          if (~uVar29 + lVar36 == lVar32) goto LAB_143527900;
          lVar1 = lVar32 + 1;
          pfVar2 = (float *)(param_1 + uVar29 * 4 + 0x3b8 + lVar32 * 4);
          lVar32 = lVar1;
        } while (*pfVar2 <= fVar41 && fVar41 != *pfVar2);
        param_3 = param_3 + (int)lVar1;
      }
    }
    iVar23 = param_3;
    if (param_3 < param_4) {
      if (fVar46 <= fVar40) {
        fVar46 = fVar40;
      }
      fVar46 = fVar46 + fVar42;
      if (fVar46 < *(float *)(param_1 + 0x3d0 + lVar36 * 4)) {
        iVar30 = param_4;
        do {
          lVar36 = lVar36 + -1;
          param_4 = param_3;
          if (lVar36 <= param_3) break;
          param_4 = iVar30 + -1;
          iVar30 = param_4;
        } while (fVar46 < *(float *)(param_1 + 0x3d0 + lVar36 * 4));
      }
    }
LAB_143527900:
    param_3 = iVar23;
    iVar23 = param_4;
    if (*(int *)(param_1 + 0x3b0) <= param_3) {
      return;
    }
  }
  iVar30 = *(int *)(param_1 + 0x3f4);
  if (((iVar30 <= (int)param_2) && ((int)param_2 <= *(int *)(param_1 + 0x3f8))) &&
     (*(char *)(**(longlong **)(param_1 + 0x400) +
               (longlong)(int)((param_2 - iVar30) + *(int *)(param_1 + 0x408))) != '\0')) {
    return;
  }
  lVar34 = lVar34 + lVar22;
  iVar33 = *(int *)(lVar34 + 0xc);
  iVar3 = *(int *)(lVar34 + 0x20);
  iVar4 = *(int *)(lVar34 + 0x24);
  if (-1 < iVar33) {
    if ((iVar4 - iVar3) + 1 < *(int *)(param_1 + 0x350 + (longlong)param_3 * 4)) {
      fVar46 = *(float *)(param_1 + 0x3b0 + (longlong)*(int *)(param_1 + 0x3b0) * 4);
      dVar43 = (dVar37 + dVar39) * 0.5;
      dVar11 = (dVar38 + dVar19) * 0.5;
      dVar12 = (dVar20 + dVar7) * 0.5;
      dVar44 = *(double *)(param_1 + 0x380) - dVar12;
      dVar21 = *(double *)(param_1 + 0x388) - dVar11;
      dVar45 = *(double *)(param_1 + 0x390) - dVar43;
      fVar42 = (float)SQRT(dVar45 * dVar45 + dVar21 * dVar21 + dVar44 * dVar44);
      dVar12 = *(double *)(param_1 + 0x398) - dVar12;
      dVar11 = *(double *)(param_1 + 0x3a0) - dVar11;
      dVar43 = *(double *)(param_1 + 0x3a8) - dVar43;
      fVar40 = (float)SQRT(dVar43 * dVar43 + dVar11 * dVar11 + dVar12 * dVar12);
      if (fVar42 <= fVar40) {
        fVar42 = fVar40;
      }
      fVar42 = (float)(SQRT((dVar37 - dVar39) * (dVar37 - dVar39) +
                            (dVar38 - dVar19) * (dVar38 - dVar19) +
                            (dVar20 - dVar7) * (dVar20 - dVar7)) * 0.5) + fVar42;
      bVar6 = fVar46 <= fVar42;
      if (bVar35 == false) {
        if (fVar46 <= fVar42) goto LAB_143527aaa;
        goto LAB_143527adc;
      }
    }
    else {
      bVar6 = true;
      if (bVar35 == false) goto LAB_143527aaa;
    }
    if ((param_3 < iVar23 || (int)param_2 < iVar30) && (bVar6)) {
LAB_143527aaa:
      if (*(int *)(lVar34 + 0x1c) < iVar33) {
        return;
      }
      do {
        FUN_143527516(param_1,iVar33,param_3,iVar23,bVar35);
        bVar6 = iVar33 < *(int *)(lVar34 + 0x1c);
        iVar33 = iVar33 + 1;
      } while (bVar6);
      return;
    }
  }
LAB_143527adc:
  iVar30 = *(int *)(param_1 + 0x3b0) + -1;
  if (iVar23 < iVar30) {
    iVar30 = iVar23;
  }
  if (*(char *)(param_1 + 8) != '\x01') goto LAB_143527b9a;
  iVar23 = param_3;
  if (*(char *)(param_1 + 10) != '\0') {
    iVar23 = iVar30;
  }
  if (7 < iVar23) goto LAB_143527b9a;
  lVar22 = (longlong)iVar23;
  lVar34 = param_1 + lVar22 * 0x10;
  plVar25 = (longlong *)(lVar34 + 0x90);
  iVar23 = *(int *)(lVar34 + 0x98);
  if ((longlong)iVar23 == 0) {
LAB_143527b3d:
    *(uint *)(lVar34 + 0x98) = iVar23 + 1U;
    if (*(uint *)(lVar34 + 0x9c) < iVar23 + 1U) {
      FUN_144757aec(plVar25,iVar23);
    }
    *(int *)(*plVar25 + (longlong)iVar23 * 4) = iVar3;
    iVar23 = *(int *)(lVar34 + 0x98);
    *(uint *)(lVar34 + 0x98) = iVar23 + 1U;
    if (*(uint *)(lVar34 + 0x9c) < iVar23 + 1U) {
      FUN_144757aec(plVar25,iVar23);
    }
    piVar27 = (int *)((longlong)iVar23 * 4 + *plVar25);
  }
  else {
    if (*(int *)(*plVar25 + (longlong)(iVar23 + -1) * 4) + 1 != iVar3) goto LAB_143527b3d;
    piVar27 = (int *)(*plVar25 + (longlong)(iVar23 + -1) * 4);
  }
  *piVar27 = iVar4;
  *(int *)(param_1 + 0x110 + lVar22 * 4) =
       (iVar4 - iVar3) + *(int *)(param_1 + 0x110 + lVar22 * 4) + 1;
LAB_143527b9a:
  if ((param_3 <= iVar30) && (*(char *)(param_1 + 9) != '\0')) {
    lVar34 = (longlong)param_3;
    iVar23 = (iVar30 - param_3) + 1;
    plVar25 = (longlong *)(lVar34 * 0x10 + param_1);
    do {
      plVar26 = plVar25 + 2;
      if (lVar34 < 8) {
        piVar27 = (int *)(param_1 + 0x130 + lVar34 * 4);
        *piVar27 = *piVar27 + (iVar4 - iVar3) + 1;
        iVar30 = (int)plVar25[3];
        if ((longlong)iVar30 == 0) {
LAB_143527bfb:
          *(uint *)(plVar25 + 3) = iVar30 + 1U;
          if (*(uint *)((longlong)plVar25 + 0x1c) < iVar30 + 1U) {
            FUN_144757aec(plVar26,iVar30);
          }
          *(int *)(*plVar26 + (longlong)iVar30 * 4) = iVar3;
          iVar30 = (int)plVar25[3];
          *(uint *)(plVar25 + 3) = iVar30 + 1U;
          if (*(uint *)((longlong)plVar25 + 0x1c) < iVar30 + 1U) {
            FUN_144757aec(plVar26,iVar30);
          }
          piVar27 = (int *)((longlong)iVar30 * 4 + *plVar26);
        }
        else {
          if (*(int *)(*plVar26 + (longlong)(iVar30 + -1) * 4) + 1 != iVar3) goto LAB_143527bfb;
          piVar27 = (int *)(*plVar26 + (longlong)(iVar30 + -1) * 4);
        }
        *piVar27 = iVar4;
      }
      lVar34 = lVar34 + 1;
      iVar23 = iVar23 + -1;
      plVar25 = plVar26;
    } while (iVar23 != 0);
  }
  return;
}



// FUNCTION 143527cdc FUN_143527cdc body=1773 status=ok
// SIG undefined FUN_143527cdc(void)

void FUN_143527cdc(longlong param_1,uint param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_128 [32];
  char local_108;
  int local_f8;
  char local_f1;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f1 = param_5;
  lVar22 = **(longlong **)(param_1 + 0x370);
  lVar19 = (ulonglong)param_2 * 0x40;
  dVar24 = (double)*(float *)(param_1 + 0x40c);
  dVar8 = (double)*(float *)(lVar22 + lVar19) - dVar24;
  dVar7 = (double)*(float *)(lVar22 + 4 + lVar19) - dVar24;
  dVar6 = (double)*(float *)(lVar22 + 8 + lVar19) - dVar24;
  dVar10 = (double)*(float *)(lVar22 + 0x10 + lVar19) + dVar24;
  dVar9 = (double)*(float *)(lVar22 + 0x14 + lVar19) + dVar24;
  dVar24 = (double)*(float *)(lVar22 + 0x18 + lVar19) + dVar24;
  if (param_5 == '\0') {
    local_c8 = (dVar6 + dVar24) * 0.5;
    local_d0 = (dVar7 + dVar9) * 0.5;
    local_d8 = (dVar8 + dVar10) * 0.5;
    local_e0 = (dVar24 - dVar6) * 0.5;
    local_e8 = (dVar9 - dVar7) * 0.5;
    local_f0 = (dVar10 - dVar8) * 0.5;
    cVar11 = FUN_1434a2cf0(param_1 + 0x150,&local_d8,&local_f0,&local_f1);
    if (cVar11 == '\0') goto LAB_14352832e;
  }
  iVar15 = param_3;
  if (param_3 != param_4) {
    dVar27 = (dVar24 + dVar6) * 0.5;
    dVar30 = (dVar9 + dVar7) * 0.5;
    dVar31 = (dVar10 + dVar8) * 0.5;
    dVar25 = *(double *)(param_1 + 0x380) - dVar31;
    dVar32 = *(double *)(param_1 + 0x388) - dVar30;
    dVar33 = *(double *)(param_1 + 0x390) - dVar27;
    fVar23 = (float)SQRT(dVar33 * dVar33 + dVar32 * dVar32 + dVar25 * dVar25);
    dVar31 = *(double *)(param_1 + 0x398) - dVar31;
    dVar30 = *(double *)(param_1 + 0x3a0) - dVar30;
    dVar27 = *(double *)(param_1 + 0x3a8) - dVar27;
    fVar29 = (float)SQRT(dVar27 * dVar27 + dVar30 * dVar30 + dVar31 * dVar31);
    fVar26 = (float)(SQRT((dVar6 - dVar24) * (dVar6 - dVar24) +
                          (dVar7 - dVar9) * (dVar7 - dVar9) + (dVar8 - dVar10) * (dVar8 - dVar10)) *
                    0.5);
    lVar12 = (longlong)param_4;
    if (param_3 < param_4) {
      fVar28 = fVar23;
      if (fVar29 <= fVar23) {
        fVar28 = fVar29;
      }
      fVar28 = fVar28 - fVar26;
      uVar13 = (ulonglong)param_3;
      pfVar2 = (float *)(param_1 + 0x3b4 + uVar13 * 4);
      if (*pfVar2 <= fVar28 && fVar28 != *pfVar2) {
        lVar18 = 0;
        do {
          iVar15 = param_4;
          if (~uVar13 + lVar12 == lVar18) goto LAB_143527fc3;
          lVar1 = lVar18 + 1;
          pfVar2 = (float *)(param_1 + uVar13 * 4 + 0x3b8 + lVar18 * 4);
          lVar18 = lVar1;
        } while (*pfVar2 <= fVar28 && fVar28 != *pfVar2);
        param_3 = param_3 + (int)lVar1;
      }
    }
    iVar15 = param_3;
    if (param_3 < param_4) {
      if (fVar23 <= fVar29) {
        fVar23 = fVar29;
      }
      fVar23 = fVar23 + fVar26;
      if (fVar23 < *(float *)(param_1 + 0x3d0 + lVar12 * 4)) {
        iVar20 = param_4;
        do {
          lVar12 = lVar12 + -1;
          param_4 = param_3;
          if (lVar12 <= param_3) break;
          param_4 = iVar20 + -1;
          iVar20 = param_4;
        } while (fVar23 < *(float *)(param_1 + 0x3d0 + lVar12 * 4));
      }
    }
LAB_143527fc3:
    param_3 = iVar15;
    iVar15 = param_4;
    if (*(int *)(param_1 + 0x3b0) <= param_3) goto LAB_14352832e;
  }
  iVar20 = *(int *)(param_1 + 0x3f4);
  if (((iVar20 <= (int)param_2) && ((int)param_2 <= *(int *)(param_1 + 0x3f8))) &&
     (*(char *)(**(longlong **)(param_1 + 0x400) +
               (longlong)(int)((param_2 - iVar20) + *(int *)(param_1 + 0x408))) != '\0'))
  goto LAB_14352832e;
  lVar22 = lVar22 + lVar19;
  iVar21 = *(int *)(lVar22 + 0xc);
  iVar3 = *(int *)(lVar22 + 0x20);
  iVar4 = *(int *)(lVar22 + 0x24);
  if (-1 < iVar21) {
    if (*(int *)(param_1 + 0x350 + (longlong)param_3 * 4) <= (iVar4 - iVar3) + 1) {
      bVar5 = true;
      if (local_f1 == '\x01') goto LAB_14352815d;
LAB_14352816f:
      if (iVar21 <= *(int *)(lVar22 + 0x1c)) {
        do {
          local_108 = local_f1;
          FUN_143527cdc(param_1,iVar21,param_3,iVar15);
          bVar5 = iVar21 < *(int *)(lVar22 + 0x1c);
          iVar21 = iVar21 + 1;
        } while (bVar5);
      }
      goto LAB_14352832e;
    }
    fVar23 = *(float *)(param_1 + 0x3b0 + (longlong)*(int *)(param_1 + 0x3b0) * 4);
    dVar27 = (dVar24 + dVar6) * 0.5;
    dVar32 = (dVar9 + dVar7) * 0.5;
    dVar33 = (dVar10 + dVar8) * 0.5;
    dVar30 = *(double *)(param_1 + 0x380) - dVar33;
    dVar25 = *(double *)(param_1 + 0x388) - dVar32;
    dVar31 = *(double *)(param_1 + 0x390) - dVar27;
    fVar29 = (float)SQRT(dVar31 * dVar31 + dVar25 * dVar25 + dVar30 * dVar30);
    dVar33 = *(double *)(param_1 + 0x398) - dVar33;
    dVar32 = *(double *)(param_1 + 0x3a0) - dVar32;
    dVar27 = *(double *)(param_1 + 0x3a8) - dVar27;
    fVar26 = (float)SQRT(dVar27 * dVar27 + dVar32 * dVar32 + dVar33 * dVar33);
    if (fVar29 <= fVar26) {
      fVar29 = fVar26;
    }
    fVar29 = (float)(SQRT((dVar6 - dVar24) * (dVar6 - dVar24) +
                          (dVar7 - dVar9) * (dVar7 - dVar9) + (dVar8 - dVar10) * (dVar8 - dVar10)) *
                    0.5) + fVar29;
    bVar5 = fVar23 <= fVar29;
    if (local_f1 == '\0') {
      if (fVar23 <= fVar29) goto LAB_14352816f;
    }
    else {
LAB_14352815d:
      if ((param_3 < iVar15 || (int)param_2 < iVar20) && (bVar5)) goto LAB_14352816f;
    }
  }
  iVar20 = *(int *)(param_1 + 0x3b0) + -1;
  if (iVar15 < iVar20) {
    iVar20 = iVar15;
  }
  local_f8 = iVar4;
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar15 = param_3;
    if (*(char *)(param_1 + 10) != '\0') {
      iVar15 = iVar20;
    }
    if (iVar15 < 8) {
      lVar19 = (longlong)iVar15;
      lVar22 = param_1 + lVar19 * 0x10;
      plVar16 = (longlong *)(lVar22 + 0x90);
      iVar15 = *(int *)(lVar22 + 0x98);
      if ((longlong)iVar15 == 0) {
LAB_14352820e:
        *(uint *)(lVar22 + 0x98) = iVar15 + 1U;
        if (*(uint *)(lVar22 + 0x9c) < iVar15 + 1U) {
          FUN_144757aec(plVar16,iVar15);
        }
        *(int *)(*plVar16 + (longlong)iVar15 * 4) = iVar3;
        iVar15 = *(int *)(lVar22 + 0x98);
        *(uint *)(lVar22 + 0x98) = iVar15 + 1U;
        if (*(uint *)(lVar22 + 0x9c) < iVar15 + 1U) {
          FUN_144757aec(plVar16,iVar15);
        }
        piVar14 = (int *)((longlong)iVar15 * 4 + *plVar16);
      }
      else {
        if (*(int *)(*plVar16 + (longlong)(iVar15 + -1) * 4) + 1 != iVar3) goto LAB_14352820e;
        piVar14 = (int *)(*plVar16 + (longlong)(iVar15 + -1) * 4);
      }
      *piVar14 = local_f8;
      *(int *)(param_1 + 0x110 + lVar19 * 4) =
           (local_f8 - iVar3) + *(int *)(param_1 + 0x110 + lVar19 * 4) + 1;
    }
  }
  if ((param_3 <= iVar20) && (*(char *)(param_1 + 9) != '\0')) {
    iVar21 = local_f8 - iVar3;
    lVar22 = (longlong)param_3;
    iVar20 = (iVar20 - param_3) + 1;
    plVar16 = (longlong *)(lVar22 * 0x10 + param_1);
    iVar15 = local_f8;
    do {
      plVar17 = plVar16 + 2;
      if (lVar22 < 8) {
        piVar14 = (int *)(param_1 + 0x130 + lVar22 * 4);
        *piVar14 = *piVar14 + iVar21 + 1;
        iVar4 = (int)plVar16[3];
        if ((longlong)iVar4 == 0) {
LAB_1435282d5:
          *(uint *)(plVar16 + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar16 + 0x1c) < iVar4 + 1U) {
            FUN_144757aec(plVar17,iVar4);
            iVar15 = local_f8;
          }
          *(int *)(*plVar17 + (longlong)iVar4 * 4) = iVar3;
          iVar4 = (int)plVar16[3];
          *(uint *)(plVar16 + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar16 + 0x1c) < iVar4 + 1U) {
            FUN_144757aec(plVar17,iVar4);
            iVar15 = local_f8;
          }
          piVar14 = (int *)((longlong)iVar4 * 4 + *plVar17);
        }
        else {
          if (*(int *)(*plVar17 + (longlong)(iVar4 + -1) * 4) + 1 != iVar3) goto LAB_1435282d5;
          piVar14 = (int *)(*plVar17 + (longlong)(iVar4 + -1) * 4);
        }
        *piVar14 = iVar15;
      }
      lVar22 = lVar22 + 1;
      iVar20 = iVar20 + -1;
      plVar16 = plVar17;
    } while (iVar20 != 0);
  }
LAB_14352832e:
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435283ca FUN_1435283ca body=1691 status=ok
// SIG undefined FUN_1435283ca(void)

void FUN_1435283ca(longlong param_1,uint param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_128 [32];
  char local_108;
  char local_f1;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f1 = param_5;
  lVar23 = **(longlong **)(param_1 + 0x370);
  lVar22 = (ulonglong)param_2 * 0x40;
  dVar6 = (double)*(float *)(lVar23 + 8 + lVar22);
  dVar7 = (double)*(float *)(lVar23 + 4 + lVar22);
  dVar9 = (double)*(float *)(lVar23 + lVar22);
  dVar8 = (double)*(float *)(lVar23 + 0x18 + lVar22);
  dVar10 = (double)*(float *)(lVar23 + 0x14 + lVar22);
  dVar11 = (double)*(float *)(lVar23 + 0x10 + lVar22);
  if (param_5 == '\0') {
    local_c8 = (dVar6 + dVar8) * 0.5;
    local_d0 = (dVar7 + dVar10) * 0.5;
    local_d8 = (dVar9 + dVar11) * 0.5;
    local_e0 = (dVar8 - dVar6) * 0.5;
    local_e8 = (dVar10 - dVar7) * 0.5;
    local_f0 = (dVar11 - dVar9) * 0.5;
    cVar12 = FUN_1434a2cf0(param_1 + 0x150,&local_d8,&local_f0,&local_f1);
    if (cVar12 == '\0') goto LAB_1435289cb;
  }
  iVar18 = param_3;
  if (param_3 != param_4) {
    dVar27 = (dVar6 + dVar8) * 0.5;
    dVar30 = (dVar7 + dVar10) * 0.5;
    dVar31 = (dVar9 + dVar11) * 0.5;
    dVar25 = *(double *)(param_1 + 0x380) - dVar31;
    dVar32 = *(double *)(param_1 + 0x388) - dVar30;
    dVar33 = *(double *)(param_1 + 0x390) - dVar27;
    fVar24 = (float)SQRT(dVar33 * dVar33 + dVar32 * dVar32 + dVar25 * dVar25);
    dVar31 = *(double *)(param_1 + 0x398) - dVar31;
    dVar30 = *(double *)(param_1 + 0x3a0) - dVar30;
    dVar27 = *(double *)(param_1 + 0x3a8) - dVar27;
    fVar29 = (float)SQRT(dVar27 * dVar27 + dVar30 * dVar30 + dVar31 * dVar31);
    fVar26 = (float)(SQRT((dVar6 - dVar8) * (dVar6 - dVar8) +
                          (dVar7 - dVar10) * (dVar7 - dVar10) + (dVar9 - dVar11) * (dVar9 - dVar11))
                    * 0.5);
    lVar13 = (longlong)param_4;
    if (param_3 < param_4) {
      fVar28 = fVar24;
      if (fVar29 <= fVar24) {
        fVar28 = fVar29;
      }
      fVar28 = fVar28 - fVar26;
      uVar14 = (ulonglong)param_3;
      pfVar2 = (float *)(param_1 + 0x3b4 + uVar14 * 4);
      if (*pfVar2 <= fVar28 && fVar28 != *pfVar2) {
        lVar20 = 0;
        do {
          iVar18 = param_4;
          if (~uVar14 + lVar13 == lVar20) goto LAB_143528686;
          lVar1 = lVar20 + 1;
          pfVar2 = (float *)(param_1 + uVar14 * 4 + 0x3b8 + lVar20 * 4);
          lVar20 = lVar1;
        } while (*pfVar2 <= fVar28 && fVar28 != *pfVar2);
        iVar18 = param_3 + (int)lVar1;
      }
    }
    if (iVar18 < param_4) {
      if (fVar24 <= fVar29) {
        fVar24 = fVar29;
      }
      fVar24 = fVar24 + fVar26;
      if (fVar24 < *(float *)(param_1 + 0x3d0 + lVar13 * 4)) {
        iVar17 = param_4;
        do {
          lVar13 = lVar13 + -1;
          param_4 = iVar18;
          if (lVar13 <= iVar18) break;
          param_4 = iVar17 + -1;
          iVar17 = param_4;
        } while (fVar24 < *(float *)(param_1 + 0x3d0 + lVar13 * 4));
      }
    }
LAB_143528686:
    param_3 = param_4;
    if (*(int *)(param_1 + 0x3b0) <= iVar18) goto LAB_1435289cb;
  }
  iVar17 = *(int *)(param_1 + 0x3f4);
  if (((iVar17 <= (int)param_2) && ((int)param_2 <= *(int *)(param_1 + 0x3f8))) &&
     (*(char *)(**(longlong **)(param_1 + 0x400) +
               (longlong)(int)((param_2 - iVar17) + *(int *)(param_1 + 0x408))) != '\0'))
  goto LAB_1435289cb;
  lVar23 = lVar23 + lVar22;
  iVar21 = *(int *)(lVar23 + 0xc);
  iVar3 = *(int *)(lVar23 + 0x20);
  iVar4 = *(int *)(lVar23 + 0x24);
  if (-1 < iVar21) {
    if (*(int *)(param_1 + 0x350 + (longlong)iVar18 * 4) <= (iVar4 - iVar3) + 1) {
      bVar5 = true;
      if (local_f1 == '\x01') goto LAB_14352881b;
LAB_14352882d:
      if (iVar21 <= *(int *)(lVar23 + 0x1c)) {
        do {
          local_108 = local_f1;
          FUN_1435283ca(param_1,iVar21,iVar18,param_3);
          bVar5 = iVar21 < *(int *)(lVar23 + 0x1c);
          iVar21 = iVar21 + 1;
        } while (bVar5);
      }
      goto LAB_1435289cb;
    }
    fVar24 = *(float *)(param_1 + 0x3b0 + (longlong)*(int *)(param_1 + 0x3b0) * 4);
    dVar27 = (dVar6 + dVar8) * 0.5;
    dVar32 = (dVar7 + dVar10) * 0.5;
    dVar33 = (dVar9 + dVar11) * 0.5;
    dVar30 = *(double *)(param_1 + 0x380) - dVar33;
    dVar25 = *(double *)(param_1 + 0x388) - dVar32;
    dVar31 = *(double *)(param_1 + 0x390) - dVar27;
    fVar29 = (float)SQRT(dVar31 * dVar31 + dVar25 * dVar25 + dVar30 * dVar30);
    dVar33 = *(double *)(param_1 + 0x398) - dVar33;
    dVar32 = *(double *)(param_1 + 0x3a0) - dVar32;
    dVar27 = *(double *)(param_1 + 0x3a8) - dVar27;
    fVar26 = (float)SQRT(dVar27 * dVar27 + dVar32 * dVar32 + dVar33 * dVar33);
    if (fVar29 <= fVar26) {
      fVar29 = fVar26;
    }
    fVar29 = (float)(SQRT((dVar6 - dVar8) * (dVar6 - dVar8) +
                          (dVar7 - dVar10) * (dVar7 - dVar10) + (dVar9 - dVar11) * (dVar9 - dVar11))
                    * 0.5) + fVar29;
    bVar5 = fVar24 <= fVar29;
    if (local_f1 == '\0') {
      if (fVar24 <= fVar29) goto LAB_14352882d;
    }
    else {
LAB_14352881b:
      if ((iVar18 < param_3 || (int)param_2 < iVar17) && (bVar5)) goto LAB_14352882d;
    }
  }
  iVar17 = *(int *)(param_1 + 0x3b0) + -1;
  if (param_3 < iVar17) {
    iVar17 = param_3;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar21 = iVar18;
    if (*(char *)(param_1 + 10) != '\0') {
      iVar21 = iVar17;
    }
    if (iVar21 < 8) {
      lVar22 = (longlong)iVar21;
      lVar23 = param_1 + lVar22 * 0x10;
      plVar15 = (longlong *)(lVar23 + 0x90);
      iVar21 = *(int *)(lVar23 + 0x98);
      if ((longlong)iVar21 == 0) {
LAB_1435288c3:
        *(uint *)(lVar23 + 0x98) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x9c) < iVar21 + 1U) {
          FUN_144757aec(plVar15,iVar21);
        }
        *(int *)(*plVar15 + (longlong)iVar21 * 4) = iVar3;
        iVar21 = *(int *)(lVar23 + 0x98);
        *(uint *)(lVar23 + 0x98) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x9c) < iVar21 + 1U) {
          FUN_144757aec(plVar15,iVar21);
        }
        piVar19 = (int *)((longlong)iVar21 * 4 + *plVar15);
      }
      else {
        if (*(int *)(*plVar15 + (longlong)(iVar21 + -1) * 4) + 1 != iVar3) goto LAB_1435288c3;
        piVar19 = (int *)(*plVar15 + (longlong)(iVar21 + -1) * 4);
      }
      *piVar19 = iVar4;
      *(int *)(param_1 + 0x110 + lVar22 * 4) =
           (iVar4 - iVar3) + *(int *)(param_1 + 0x110 + lVar22 * 4) + 1;
    }
  }
  if ((iVar18 <= iVar17) && (*(char *)(param_1 + 9) != '\0')) {
    lVar23 = (longlong)iVar18;
    iVar18 = (iVar17 - iVar18) + 1;
    plVar15 = (longlong *)(lVar23 * 0x10 + param_1);
    do {
      plVar16 = plVar15 + 2;
      if (lVar23 < 8) {
        piVar19 = (int *)(param_1 + 0x130 + lVar23 * 4);
        *piVar19 = *piVar19 + (iVar4 - iVar3) + 1;
        iVar17 = (int)plVar15[3];
        if ((longlong)iVar17 == 0) {
LAB_143528981:
          *(uint *)(plVar15 + 3) = iVar17 + 1U;
          if (*(uint *)((longlong)plVar15 + 0x1c) < iVar17 + 1U) {
            FUN_144757aec(plVar16,iVar17);
          }
          *(int *)(*plVar16 + (longlong)iVar17 * 4) = iVar3;
          iVar17 = (int)plVar15[3];
          *(uint *)(plVar15 + 3) = iVar17 + 1U;
          if (*(uint *)((longlong)plVar15 + 0x1c) < iVar17 + 1U) {
            FUN_144757aec(plVar16,iVar17);
          }
          piVar19 = (int *)((longlong)iVar17 * 4 + *plVar16);
        }
        else {
          if (*(int *)(*plVar16 + (longlong)(iVar17 + -1) * 4) + 1 != iVar3) goto LAB_143528981;
          piVar19 = (int *)(*plVar16 + (longlong)(iVar17 + -1) * 4);
        }
        *piVar19 = iVar4;
      }
      lVar23 = lVar23 + 1;
      iVar18 = iVar18 + -1;
      plVar15 = plVar16;
    } while (iVar18 != 0);
  }
LAB_1435289cb:
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143528a66 FUN_143528a66 body=1089 status=ok
// SIG undefined FUN_143528a66(void)

undefined1 (*) [16] FUN_143528a66(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
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
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  if (*(char *)(param_1 + 0xb88) == '\0') {
    if (*(char *)(param_1 + 0xbc0) == '\0') {
      FUN_14014d38a(param_1,param_2);
      return param_2;
    }
    dVar12 = *(double *)(param_1 + 0xb90);
    dVar11 = *(double *)(param_1 + 0xb98);
    uVar18 = (undefined4)*(undefined8 *)(param_1 + 0xba0);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xba0) >> 0x20);
    dVar20 = *(double *)(param_1 + 0xba8);
    dVar16 = *(double *)(param_1 + 0xbb0);
    dVar13 = *(double *)(param_1 + 3000);
  }
  else {
    dVar12 = *(double *)(param_1 + 0xb58);
    dVar11 = *(double *)(param_1 + 0xb60);
    dVar7 = *(double *)(param_1 + 0xb68);
    uVar18 = SUB84(dVar7,0);
    uVar19 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar20 = *(double *)(param_1 + 0xb70);
    dVar16 = *(double *)(param_1 + 0xb78);
    dVar13 = *(double *)(param_1 + 0xb80);
    if (*(char *)(param_1 + 0xbc0) != '\0') {
      if (*(double *)(param_1 + 0xb90) <= dVar12) {
        dVar12 = *(double *)(param_1 + 0xb90);
      }
      if (*(double *)(param_1 + 0xb98) <= dVar11) {
        dVar11 = *(double *)(param_1 + 0xb98);
      }
      dVar1 = *(double *)(param_1 + 0xba0);
      if (dVar1 <= dVar7) {
        uVar18 = SUB84(dVar1,0);
        uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      if (dVar20 <= *(double *)(param_1 + 0xba8)) {
        dVar20 = *(double *)(param_1 + 0xba8);
      }
      if (dVar16 <= *(double *)(param_1 + 0xbb0)) {
        dVar16 = *(double *)(param_1 + 0xbb0);
      }
      if (dVar13 <= *(double *)(param_1 + 3000)) {
        dVar13 = *(double *)(param_1 + 3000);
      }
    }
  }
  dVar15 = (dVar13 - (double)CONCAT44(uVar19,uVar18)) * 0.5;
  dVar17 = (dVar16 - dVar11) * 0.5;
  dVar21 = (dVar20 - dVar12) * 0.5;
  dVar16 = (double)CONCAT44(uVar19,uVar18) + dVar15;
  dVar11 = dVar11 + dVar17;
  dVar12 = dVar12 + dVar21;
  dVar10 = *param_3;
  dVar22 = param_3[1];
  dVar20 = param_3[2];
  dVar3 = param_3[8];
  dVar6 = param_3[9];
  dVar9 = param_3[10];
  dVar7 = dVar22 + dVar22;
  dVar23 = dVar20 + dVar20;
  dVar13 = dVar10 * (dVar10 + dVar10);
  dVar1 = (1.0 - (dVar20 * dVar23 + dVar22 * dVar7)) * dVar3;
  dVar2 = (1.0 - (dVar20 * dVar23 + dVar13)) * dVar6;
  dVar13 = (1.0 - (dVar13 + dVar22 * dVar7)) * dVar9;
  dVar20 = param_3[3];
  dVar24 = dVar23 * dVar20;
  dVar25 = (dVar10 + dVar10) * param_3[3];
  dVar20 = dVar7 * dVar20;
  dVar8 = (dVar7 * dVar10 + dVar24) * dVar3;
  dVar5 = (dVar23 * dVar22 + dVar25) * dVar6;
  dVar14 = (dVar20 + *param_3 * dVar23) * dVar9;
  dVar3 = (*param_3 * dVar23 - dVar20) * dVar3;
  dVar6 = (dVar7 * dVar10 - dVar24) * dVar6;
  dVar9 = (dVar23 * dVar22 - dVar25) * dVar9;
  dVar23 = ABS(dVar15 * dVar14) + ABS(dVar17 * dVar6) + ABS(dVar21 * dVar1);
  dVar24 = ABS(dVar15 * dVar9) + ABS(dVar17 * dVar2) + ABS(dVar21 * dVar8);
  dVar22 = ABS(dVar13 * dVar15) + ABS(dVar5 * dVar17) + ABS(dVar3 * dVar21);
  dVar7 = dVar14 * dVar14 + dVar6 * dVar6 + dVar1 * dVar1;
  dVar10 = dVar9 * dVar9 + dVar2 * dVar2 + dVar8 * dVar8;
  dVar20 = dVar13 * dVar13 + dVar5 * dVar5 + dVar3 * dVar3;
  if (dVar7 <= dVar10) {
    dVar7 = dVar10;
  }
  if (dVar7 <= dVar20) {
    dVar7 = dVar20;
  }
  dVar10 = param_3[4];
  dVar2 = dVar16 * dVar9 + dVar11 * dVar2 + dVar12 * dVar8 + param_3[5];
  dVar20 = param_3[6];
  if (dVar7 < 0.0) {
    dVar7 = sqrt(dVar7);
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  dVar7 = SQRT(dVar15 * dVar15 + dVar21 * dVar21 + dVar17 * dVar17) * dVar7;
  dVar8 = SQRT(dVar24 * dVar24 + dVar22 * dVar22 + dVar23 * dVar23);
  if (dVar8 <= dVar7) {
    dVar7 = dVar8;
  }
  auVar4._8_4_ = SUB84(dVar2,0);
  auVar4._0_8_ = dVar16 * dVar14 + dVar11 * dVar6 + dVar12 * dVar1 + dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_2 = auVar4;
  *(double *)param_2[1] = dVar16 * dVar13 + dVar11 * dVar5 + dVar12 * dVar3 + dVar20;
  *(double *)(param_2[1] + 8) = dVar23;
  *(double *)param_2[2] = dVar24;
  *(double *)(param_2[2] + 8) = dVar22;
  *(double *)param_2[3] = dVar7;
  return param_2;
}



// FUNCTION 143528ea8 FUN_143528ea8 body=1000 status=ok
// SIG undefined FUN_143528ea8(void)

void FUN_143528ea8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  if (((*(byte *)(param_2 + 5) & 4) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    FUN_143529292(param_1,0,0);
  }
  FUN_14353687c(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = 0;
    puVar7[1] = 0;
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14a3a6e70;
    plVar8[2] = (longlong)puVar7;
    *(undefined8 **)(param_1 + 0xb10) = puVar7;
    plVar5 = *(longlong **)(param_1 + 0xb18);
    if (plVar8 == plVar5) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar6 = *piVar3;
          UNLOCK();
          plVar5 = plVar8;
          goto joined_r0x000143529136;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0xb18) = plVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar5 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar6 = *piVar3;
          UNLOCK();
joined_r0x000143529136:
          if (iVar6 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e31250), iVar6 < 0xe)) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_147ae7922(&local_68,param_2);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    goto LAB_143529011;
  }
  puVar7 = *(undefined8 **)(param_1 + 0xb10);
  local_68 = CONCAT44(local_68._4_4_,0x40);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_68);
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)*puVar4);
    *puVar4 = (ulonglong)puVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147af3a36(param_2,puVar7);
    goto LAB_143529011;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(puVar7 + 1) << 6,
             (longlong)*(int *)((longlong)puVar7 + 0xc) << 6);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_143529011;
    local_2c = *(uint *)(puVar7 + 1);
    puVar4 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar2;
    }
LAB_143528ffe:
    (**(code **)(*param_2 + 0x170))(param_2,*puVar7,(longlong)(int)local_2c << 6);
  }
  else {
    if ((int)local_68 == 0x40) {
      local_2c = 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_2c);
        }
      }
      else {
        local_2c = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar2;
      }
      if (local_2c < 0x2000000) {
        *(undefined4 *)(puVar7 + 1) = 0;
        if (*(uint *)((longlong)puVar7 + 0xc) == local_2c) {
          iVar6 = 0;
          uVar9 = local_2c;
        }
        else {
          FUN_140b46408(puVar7);
          iVar6 = *(int *)(puVar7 + 1);
          uVar9 = *(uint *)((longlong)puVar7 + 0xc);
        }
        *(uint *)(puVar7 + 1) = local_2c + iVar6;
        if (uVar9 - iVar6 < local_2c) {
          FUN_147af2e3a(puVar7,iVar6);
        }
        goto LAB_143528ffe;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_143529011:
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (*(char *)(param_1 + 0xb88) == '\0')) {
    FUN_140b4defe(&local_68,*(undefined8 *)(param_1 + 0xb10),param_1 + 0xb28);
    *(undefined8 *)(param_1 + 0xb88) = local_38;
    *(undefined8 *)(param_1 + 0xb78) = local_48;
    *(undefined8 *)(param_1 + 0xb80) = uStack_40;
    *(undefined8 *)(param_1 + 0xb68) = local_58;
    *(undefined8 *)(param_1 + 0xb70) = uStack_50;
    *(int *)(param_1 + 0xb58) = (int)local_68;
    *(undefined4 *)(param_1 + 0xb5c) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0xb60) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0xb64) = uStack_60._4_4_;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143529292 FUN_143529292 body=2087 status=ok
// SIG undefined FUN_143529292(void)

void FUN_143529292(longlong param_1,byte param_2,char param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 uStack_210;
  void *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  ulonglong local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 local_1a0;
  undefined4 local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  void *local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((*(uint *)(param_1 + 8) & 0x30) != 0) goto LAB_14352993c;
  lVar17 = *(longlong *)(param_1 + 0x660);
  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar17 = *(longlong *)(param_1 + 0x660);
LAB_14352934e:
    if ((lVar17 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  else if (lVar17 != 0) goto LAB_14352934e;
  if ((((param_3 == '\0') && ((*(byte *)(param_1 + 0xc24) & 2) == 0)) &&
      ((*(char *)(param_1 + 0x95d) == '\x02' ||
       ((((*(char *)(param_1 + 0x95d) == '\x01' && ((*(byte *)(param_1 + 0x95e) & 0x17) == 0)) &&
         (*(int *)(param_1 + 0x918) < 1)) && (*(int *)(param_1 + 0x910) == 0)))))) &&
     ((*(int *)(param_1 + 0x7e0) == *(int *)(param_1 + 0x728) &&
      (*(int *)(param_1 + 0xb50) == *(int *)(param_1 + 0x7e0))))) {
    lVar17 = *(longlong *)(param_1 + 0x660);
    if ((lVar17 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar17);
      lVar17 = *(longlong *)(param_1 + 0x660);
LAB_1435293f6:
      if ((lVar17 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar17);
      }
      if ((*(double *)(param_1 + 0xbe8) == *(double *)(lVar17 + 0x200)) &&
         (!NAN(*(double *)(param_1 + 0xbe8)) && !NAN(*(double *)(lVar17 + 0x200)))) {
        if ((*(double *)(param_1 + 0xbf0) == *(double *)(lVar17 + 0x208)) &&
           (!NAN(*(double *)(param_1 + 0xbf0)) && !NAN(*(double *)(lVar17 + 0x208)))) {
          if ((*(double *)(param_1 + 0xbf8) == *(double *)(lVar17 + 0x210)) &&
             (!NAN(*(double *)(param_1 + 0xbf8)) && !NAN(*(double *)(lVar17 + 0x210)))) {
            if ((*(double *)(param_1 + 0xc00) == *(double *)(lVar17 + 0x218)) &&
               (!NAN(*(double *)(param_1 + 0xc00)) && !NAN(*(double *)(lVar17 + 0x218)))) {
              if ((*(double *)(param_1 + 0xc08) == *(double *)(lVar17 + 0x220)) &&
                 (!NAN(*(double *)(param_1 + 0xc08)) && !NAN(*(double *)(lVar17 + 0x220)))) {
                if ((*(double *)(param_1 + 0xc10) == *(double *)(lVar17 + 0x228)) &&
                   (!NAN(*(double *)(param_1 + 0xc10)) && !NAN(*(double *)(lVar17 + 0x228)))) {
                  if ((*(double *)(param_1 + 0xc18) == *(double *)(lVar17 + 0x230)) &&
                     (!NAN(*(double *)(param_1 + 0xc18)) && !NAN(*(double *)(lVar17 + 0x230))))
                  goto LAB_1435294af;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (lVar17 != 0) goto LAB_1435293f6;
LAB_1435294af:
      if (*(int *)(param_1 + 0xbd0) < 1) {
        FUN_144842a8a(param_1,local_1e8);
        if (0x1ba < (int)local_1e8._0_4_) {
          local_218 = 0xa8264fbe9c54d522;
          uStack_210 = 0x61b482d094210746;
          iVar12 = FUN_1448a256a(param_1);
          if (0xd < iVar12) goto LAB_14352993c;
        }
      }
    }
  }
  lVar17 = *(longlong *)(param_1 + 0x660);
  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar17);
    lVar17 = *(longlong *)(param_1 + 0x660);
LAB_143529519:
    if ((lVar17 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar17);
    }
    if ((*(uint *)(lVar17 + 8) >> 10 & 1) != 0) goto LAB_14352993c;
    *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) | 2;
    lVar17 = *(longlong *)(param_1 + 0x660);
    if ((lVar17 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar17);
    }
    FUN_1400337aa(lVar17);
    bVar18 = true;
    if (*(int *)(param_1 + 0xb50) == 0) {
      lVar17 = *(longlong *)(param_1 + 0xb0);
      if (lVar17 == 0) {
        lVar17 = FUN_1448abda6(param_1);
        if (lVar17 == 0) goto LAB_14352959a;
        lVar17 = *(longlong *)(param_1 + 0xb0);
        if (lVar17 == 0) {
          lVar17 = FUN_1448abda6(param_1);
        }
      }
      if (((*(byte *)(lVar17 + 0x155) & 1) != 0) && (*(longlong *)(lVar17 + 0x30) != 0)) {
        bVar18 = *(int *)(*(longlong *)(lVar17 + 0x30) + 0xa8) != 0;
        goto LAB_14352959a;
      }
    }
    else {
LAB_14352959a:
      if ((bVar18 & param_2) == 1) {
        if ((*(byte *)(param_1 + 0xc24) & 1) == 0) {
          FUN_14352aed8(param_1);
        }
        else {
          *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) | 4;
        }
        goto LAB_14352993c;
      }
    }
    if (0 < *(int *)(param_1 + 0x728)) {
      lVar17 = *(longlong *)(param_1 + 0x660);
      if ((lVar17 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar17);
        lVar17 = *(longlong *)(param_1 + 0x660);
      }
      else if (lVar17 == 0) goto LAB_1435297cb;
      if ((lVar17 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar17);
        lVar17 = *(longlong *)(param_1 + 0x660);
      }
      if (((DAT_14c950c29 & 1) != 0) && (lVar17 != 0)) {
        FUN_1456cec3c(lVar17);
      }
      plVar10 = *(longlong **)(lVar17 + 0xe0);
      if (((plVar10 != (longlong *)0x0) && ((int)plVar10[1] != 0)) && (*plVar10 != 0)) {
        puVar16 = &DAT_14c8464f0;
        puVar14 = &DAT_14c8464e8;
        puVar15 = &DAT_14c8464e0;
        if (((*(byte *)(param_1 + 0xb20) & 1) != 0) && (*(int *)(param_1 + 0x728) != 0)) {
          lVar17 = *(longlong *)(param_1 + 0x720);
          puVar15 = (undefined8 *)(lVar17 + 0x60);
          puVar16 = (ulonglong *)(lVar17 + 0x70);
          puVar14 = (undefined8 *)(lVar17 + 0x68);
        }
        local_1d8 = *puVar16;
        uVar21 = *puVar14;
        uVar1 = *puVar15;
        uVar19 = (undefined4)uVar1;
        uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined8 *)(param_1 + 0xb28) = uVar1;
        *(undefined8 *)(param_1 + 0xb30) = uVar21;
        *(ulonglong *)(param_1 + 0xb38) = local_1d8;
        if (*(int *)(param_1 + 0x7a4) == 0) {
          do {
            iVar12 = rand();
            *(int *)(param_1 + 0x7a4) = iVar12;
          } while (iVar12 == 0);
          local_1d8 = *(ulonglong *)(param_1 + 0xb38);
          uVar19 = (undefined4)*(undefined8 *)(param_1 + 0xb28);
          uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xb28) >> 0x20);
          uVar21 = *(undefined8 *)(param_1 + 0xb30);
        }
        local_108 = (void *)0x0;
        uStack_100 = 0;
        local_1d8 = local_1d8 ^ 0x8000000000000000;
        local_1e8._8_4_ = (int)uVar21;
        local_1e8._0_8_ = CONCAT44(uVar20,uVar19) ^ 0x8000000000000000;
        local_1e8._12_4_ = (uint)((ulonglong)uVar21 >> 0x20) ^ 0x80000000;
        FUN_14352ace4(param_1);
        iVar12 = *(int *)(param_1 + 0x728);
        uVar20 = *(undefined4 *)(param_1 + 0x7a4);
        uVar19 = *(undefined4 *)(param_1 + 0xbdc);
        uVar13 = FUN_1408dd708();
        lVar17 = *(longlong *)(param_1 + 0x660);
        if ((lVar17 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        dVar2 = *(double *)(lVar17 + 0x200);
        dVar3 = *(double *)(lVar17 + 0x208);
        dVar4 = *(double *)(lVar17 + 0x210);
        dVar5 = *(double *)(lVar17 + 0x218);
        dVar6 = *(double *)(lVar17 + 0x220);
        dVar7 = *(double *)(lVar17 + 0x228);
        uVar8 = *(undefined4 *)(param_1 + 0x7a0);
        local_1f8 = (void *)0x0;
        uVar9 = *(uint *)(param_1 + 0x7b0);
        pvVar11 = *(void **)(param_1 + 0x7a8);
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar9);
        if ((longlong)(int)uVar9 == 0) {
          uStack_1f0 = (ulonglong)uVar9;
        }
        else {
          FUN_1447c510a(&local_1f8,uVar9,0);
          memcpy(local_1f8,pvVar11,(longlong)(int)uVar9 << 2);
        }
        pvVar11 = local_108;
        local_208 = (void *)0x0;
        lVar17 = (longlong)(int)uStack_100;
        local_200._0_4_ = (int)uStack_100;
        if (lVar17 == 0) {
          local_14c = 0;
          local_158 = (void *)0x0;
          local_150 = 0;
        }
        else {
          FUN_140aa14ca(&local_208,uStack_100 & 0xffffffff,0);
          memcpy(local_208,pvVar11,lVar17 << 7);
          local_158 = local_208;
          local_150 = (int)local_200;
          local_14c = local_200._4_4_;
        }
        local_1e8 = ZEXT816(0);
        local_1d8 = CONCAT44(local_1d8._4_4_,local_150);
        local_1a0 = 1;
        local_17c = 0 < iVar12;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_208 = (void *)0x0;
        local_200 = 0;
        local_148 = (undefined4)local_1f8;
        uStack_144 = local_1f8._4_4_;
        uStack_140 = (undefined4)uStack_1f0;
        uStack_13c = uStack_1f0._4_4_;
        local_1f8 = (void *)0x0;
        uStack_1f0 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_1d0 = dVar2 - dVar5;
        local_1c8 = dVar3 - dVar6;
        local_1c0 = dVar4 - dVar7;
        local_1b8 = dVar2 + dVar5;
        local_1b0 = dVar3 + dVar6;
        local_1a8 = dVar4 + dVar7;
        local_18c = uVar13;
        local_184 = uVar20;
        local_180 = uVar19;
        local_138 = uVar8;
        FUN_144a5f54e(local_1e8);
        FUN_144a5ecd2(local_1e8);
        FUN_140b4d836(param_1,local_1e8,0);
        FUN_14082dd98(local_1e8);
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14352993c;
      }
    }
  }
  else if (lVar17 != 0) goto LAB_143529519;
LAB_1435297cb:
  FUN_1463d17bc(param_1);
LAB_14352993c:
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143529aba FUN_143529aba body=546 status=ok
// SIG undefined FUN_143529aba(void)

ulonglong FUN_143529aba(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  void *_Src;
  byte bVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  int *local_50;
  int local_48;
  int *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 1);
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if ((longlong)iVar1 == 0) {
    uVar5 = CONCAT71(uVar6,1);
    goto LAB_143529bad;
  }
  if (param_3 != '\0') {
    piVar2 = (int *)*param_2;
    if (((*piVar2 < 0) || ((int)*(uint *)(param_1 + 0x728) <= *piVar2)) ||
       (*(uint *)(param_1 + 0x728) <= (uint)piVar2[iVar1 + -1] || piVar2[iVar1 + -1] < 0)) {
      uVar5 = 0;
    }
    else {
      local_40 = piVar2;
      local_38 = iVar1;
      FUN_147ae7bac(param_1);
      if ((*(byte *)(param_1 + 0xc24) & 8) != 0) {
        FUN_143529292(param_1,1,0);
      }
      uVar5 = CONCAT71(uVar6,1);
      if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
        bVar3 = *(byte *)(param_1 + 0x9d);
        if ((bVar3 & 1) != 0) {
          if (*(longlong *)(param_1 + 0xb0) != 0) goto LAB_143529bad;
          lVar4 = FUN_1448abda6(param_1);
          if (lVar4 != 0) goto LAB_143529bad;
          bVar3 = *(byte *)(param_1 + 0x9d);
        }
        *(byte *)(param_1 + 0x9d) = bVar3 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
    }
    goto LAB_143529bad;
  }
  local_50 = (int *)0x0;
  _Src = (void *)*param_2;
  uVar5 = 0;
  local_48 = iVar1;
  FUN_144a06ca8(&local_50,iVar1,0);
  memcpy(local_50,_Src,(longlong)iVar1 << 2);
  FUN_144a521da(local_50,local_48);
  if (-1 < *local_50) {
    if (*local_50 < (int)*(uint *)(param_1 + 0x728)) {
      if ((uint)local_50[local_48 + -1] < *(uint *)(param_1 + 0x728) && -1 < local_50[local_48 + -1]
         ) {
        local_40 = local_50;
        local_38 = local_48;
        FUN_147ae7bac(param_1);
        if ((*(byte *)(param_1 + 0xc24) & 8) != 0) {
          FUN_143529292(param_1,1,0);
        }
        if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
          bVar3 = *(byte *)(param_1 + 0x9d);
          if ((bVar3 & 1) == 0) {
LAB_143529cb1:
            *(byte *)(param_1 + 0x9d) = bVar3 | 1;
            FUN_1401057d4(param_1);
            FUN_14010586c(&DAT_14cad0140,param_1);
          }
          else if (*(longlong *)(param_1 + 0xb0) == 0) {
            lVar4 = FUN_1448abda6(param_1);
            if (lVar4 == 0) {
              bVar3 = *(byte *)(param_1 + 0x9d);
              goto LAB_143529cb1;
            }
          }
        }
        uVar5 = 1;
        goto LAB_143529ba3;
      }
    }
    uVar5 = 0;
  }
LAB_143529ba3:
  if (local_50 != (int *)0x0) {
    FUN_1400020a8();
  }
LAB_143529bad:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143529cde FUN_143529cde body=217 status=ok
// SIG undefined FUN_143529cde(void)

ulonglong FUN_143529cde(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  undefined4 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = param_2;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x728) <= param_2)) {
    uVar3 = 0;
  }
  else {
    local_30 = &local_1c;
    local_28 = 1;
    FUN_147ae7bac(param_1);
    if ((*(byte *)(param_1 + 0xc24) & 8) != 0) {
      FUN_143529292(param_1,1,0);
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar1 = *(byte *)(param_1 + 0x9d);
      if ((bVar1 & 1) != 0) {
        if (*(longlong *)(param_1 + 0xb0) != 0) goto LAB_143529d08;
        lVar2 = FUN_1448abda6(param_1);
        if (lVar2 != 0) goto LAB_143529d08;
        bVar1 = *(byte *)(param_1 + 0x9d);
      }
      *(byte *)(param_1 + 0x9d) = bVar1 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
    }
  }
LAB_143529d08:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143529db8 FUN_143529db8 body=1173 status=ok
// SIG undefined FUN_143529db8(void)

int FUN_143529db8(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  double *pdVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  iVar3 = *(int *)(param_1 + 0x728);
  FUN_141048e2e(param_1,iVar3,0,param_2,param_3);
  if ((longlong)iVar3 != -1) {
    lVar20 = *(longlong *)(param_1 + 0x660);
    if ((lVar20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar20);
      lVar20 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar20 == 0) {
      return iVar3;
    }
    if ((lVar20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar20);
      lVar20 = *(longlong *)(param_1 + 0x660);
    }
    if (((DAT_14c950c29 & 1) != 0) && (lVar20 != 0)) {
      FUN_1456cec3c(lVar20);
    }
    plVar6 = *(longlong **)(lVar20 + 0xe0);
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[1] != 0)) && (*plVar6 != 0)) {
      bVar2 = *(byte *)(param_1 + 0xc24);
      bVar19 = 4;
      if ((bVar2 & 1) == 0) {
        bVar19 = bVar2 & 4;
      }
      *(byte *)(param_1 + 0xc24) = bVar2 & 0xf9 | bVar19 | 2;
      iVar4 = *(int *)(param_1 + 0x7e0);
      iVar5 = *(int *)(param_1 + 0xc20);
      *(uint *)(param_1 + 0x7e0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x7e4) < iVar4 + 1U) {
        FUN_1446f48e2(param_1 + 0x7d8,iVar4);
      }
      *(int *)(*(longlong *)(param_1 + 0x7d8) + (longlong)iVar4 * 4) = (iVar5 + iVar3) - iVar4;
      *(int *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) + 1;
      lVar20 = *(longlong *)(param_1 + 0x660);
      if ((lVar20 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar20);
      }
      dVar7 = *(double *)(lVar20 + 0x210) + *(double *)(lVar20 + 0x228);
      dVar10 = *(double *)(lVar20 + 0x208) + *(double *)(lVar20 + 0x220);
      dVar21 = *(double *)(lVar20 + 0x200) + *(double *)(lVar20 + 0x218);
      dVar29 = *(double *)(lVar20 + 0x210) - *(double *)(lVar20 + 0x228);
      dVar24 = *(double *)(lVar20 + 0x208) - *(double *)(lVar20 + 0x220);
      dVar23 = *(double *)(lVar20 + 0x200) - *(double *)(lVar20 + 0x218);
      lVar20 = *(longlong *)(param_1 + 0x720);
      lVar18 = (longlong)iVar3 * 0x80;
      dVar11 = *(double *)(lVar20 + lVar18);
      dVar12 = ((double *)(lVar20 + lVar18))[1];
      pdVar1 = (double *)(lVar20 + 0x20 + lVar18);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      pdVar1 = (double *)(lVar20 + 0x40 + lVar18);
      dVar26 = *pdVar1;
      dVar17 = pdVar1[1];
      dVar27 = (dVar23 + dVar21) * 0.5;
      dVar28 = (dVar24 + dVar10) * 0.5;
      dVar25 = (dVar29 + dVar7) * 0.5;
      dVar22 = (dVar21 - dVar23) * 0.5;
      dVar24 = (dVar10 - dVar24) * 0.5;
      pdVar1 = (double *)(lVar20 + 0x60 + lVar18);
      dVar10 = dVar25 * dVar26 + dVar15 * dVar28 + dVar27 * dVar11 + *pdVar1;
      dVar23 = dVar25 * dVar17 + dVar16 * dVar28 + dVar27 * dVar12 + pdVar1[1];
      dVar21 = (dVar7 - dVar29) * 0.5;
      dVar11 = ABS(dVar21 * dVar26) + ABS(dVar15 * dVar24) + ABS(dVar22 * dVar11);
      dVar12 = ABS(dVar21 * dVar17) + ABS(dVar16 * dVar24) + ABS(dVar22 * dVar12);
      dVar15 = dVar10 - dVar11;
      dVar16 = dVar23 - dVar12;
      uVar31 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar11 = dVar11 + dVar10;
      dVar12 = dVar12 + dVar23;
      uVar30 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar7 = *(double *)(lVar20 + 0x10 + lVar18);
      dVar10 = *(double *)(lVar20 + 0x30 + lVar18);
      dVar23 = *(double *)(lVar20 + 0x50 + lVar18);
      dVar26 = dVar25 * dVar23 + dVar28 * dVar10 + dVar27 * dVar7 +
               *(double *)(lVar20 + 0x70 + lVar18);
      dVar7 = ABS(dVar21 * dVar23) + ABS(dVar24 * dVar10) + ABS(dVar22 * dVar7);
      dVar10 = dVar26 - dVar7;
      dVar7 = dVar7 + dVar26;
      if (*(char *)(param_1 + 0xbc0) == '\0') {
        auVar14._8_4_ = SUB84(dVar16,0);
        auVar14._0_8_ = dVar15;
        auVar14._12_4_ = uVar31;
        *(undefined1 (*) [16])(param_1 + 0xb90) = auVar14;
        *(double *)(param_1 + 0xba0) = dVar10;
        auVar9._8_4_ = SUB84(dVar12,0);
        auVar9._0_8_ = dVar11;
        auVar9._12_4_ = uVar30;
        *(undefined1 (*) [16])(param_1 + 0xba8) = auVar9;
        *(double *)(param_1 + 3000) = dVar7;
        *(undefined1 *)(param_1 + 0xbc0) = 1;
      }
      else {
        dVar23 = *(double *)(param_1 + 0xb90);
        if (dVar15 <= *(double *)(param_1 + 0xb90)) {
          dVar23 = dVar15;
        }
        *(double *)(param_1 + 0xb90) = dVar23;
        dVar23 = *(double *)(param_1 + 0xb98);
        if (dVar16 <= *(double *)(param_1 + 0xb98)) {
          dVar23 = dVar16;
        }
        *(double *)(param_1 + 0xb98) = dVar23;
        dVar23 = *(double *)(param_1 + 0xba0);
        if (dVar10 <= *(double *)(param_1 + 0xba0)) {
          dVar23 = dVar10;
        }
        *(double *)(param_1 + 0xba0) = dVar23;
        dVar23 = *(double *)(param_1 + 0xba8);
        if (*(double *)(param_1 + 0xba8) <= dVar11) {
          dVar23 = dVar11;
        }
        *(double *)(param_1 + 0xba8) = dVar23;
        dVar23 = *(double *)(param_1 + 0xbb0);
        if (*(double *)(param_1 + 0xbb0) <= dVar12) {
          dVar23 = dVar12;
        }
        *(double *)(param_1 + 0xbb0) = dVar23;
        dVar23 = *(double *)(param_1 + 3000);
        if (*(double *)(param_1 + 3000) <= dVar7) {
          dVar23 = dVar7;
        }
        *(double *)(param_1 + 3000) = dVar23;
      }
      iVar4 = *(int *)(param_1 + 0xbd0);
      *(uint *)(param_1 + 0xbd0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xbd4) < iVar4 + 1U) {
        FUN_140555802(param_1 + 0xbc8,iVar4);
      }
      lVar20 = *(longlong *)(param_1 + 0xbc8);
      lVar18 = (longlong)iVar4 * 0x38;
      auVar13._8_4_ = SUB84(dVar16,0);
      auVar13._0_8_ = dVar15;
      auVar13._12_4_ = uVar31;
      *(undefined1 (*) [16])(lVar20 + lVar18) = auVar13;
      *(double *)(lVar20 + 0x10 + lVar18) = dVar10;
      auVar8._8_4_ = SUB84(dVar12,0);
      auVar8._0_8_ = dVar11;
      auVar8._12_4_ = uVar30;
      *(undefined1 (*) [16])(lVar20 + 0x18 + lVar18) = auVar8;
      *(double *)(lVar20 + 0x28 + lVar18) = dVar7;
      *(undefined1 *)(lVar20 + 0x30 + lVar18) = 1;
      if ((*(byte *)(param_1 + 0xc24) & 8) != 0) {
        FUN_143529292(param_1,1,0);
      }
    }
  }
  return iVar3;
}



// FUNCTION 14352a24e FUN_14352a24e body=1610 status=ok
// SIG undefined FUN_14352a24e(void)

undefined8 *
FUN_14352a24e(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
             undefined1 param_5,undefined1 param_6)

{
  double *pdVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  void *pvVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  char local_101;
  longlong local_100;
  undefined8 *local_f8;
  void *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e0 = *param_3;
  local_d8 = *(undefined4 *)(param_3 + 1);
  local_110 = param_6;
  local_118 = param_5;
  FUN_14353718e(param_1,&local_f0,&local_e0,CONCAT71((int7)((ulonglong)local_e0 >> 8),1));
  if (0 < local_e8) {
    lVar22 = *(longlong *)(param_1 + 0x660);
    if ((lVar22 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar22);
      lVar22 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar22 == 0) goto LAB_14352a77b;
    if ((lVar22 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar22);
      lVar22 = *(longlong *)(param_1 + 0x660);
    }
    if (((DAT_14c950c29 & 1) != 0) && (lVar22 != 0)) {
      FUN_1456cec3c(lVar22);
    }
    iVar20 = local_e8;
    plVar5 = *(longlong **)(lVar22 + 0xe0);
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[1] != 0)) && (*plVar5 != 0)) {
      bVar2 = *(byte *)(param_1 + 0xc24);
      bVar18 = 4;
      if ((bVar2 & 1) == 0) {
        bVar18 = bVar2 & 4;
      }
      *(byte *)(param_1 + 0xc24) = bVar2 & 0xf9 | bVar18 | 2;
      iVar19 = *(int *)(param_1 + 0x7e0) + local_e8;
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar19);
      }
      local_100 = param_1 + 0x7d8;
      if (*(int *)(param_1 + 0x7e4) < iVar19) {
        FUN_14481578e(local_100);
      }
      iVar20 = iVar20 + *(int *)(param_1 + 0xbd0);
      if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar20);
      }
      plVar5 = (longlong *)(param_1 + 0xbc8);
      local_101 = param_4;
      local_f8 = param_2;
      if (*(int *)(param_1 + 0xbd4) < iVar20) {
        FUN_1401a2d6a(plVar5,iVar20);
      }
      pvVar17 = local_f0;
      lVar22 = (longlong)local_e8;
      if (lVar22 != 0) {
        iVar20 = *(int *)(param_1 + 0xc20);
        iVar19 = *(int *)(param_1 + 0x7e0);
        lVar21 = 0;
        do {
          iVar3 = *(int *)((longlong)pvVar17 + lVar21);
          iVar4 = *(int *)(param_1 + 0x7e0);
          *(uint *)(param_1 + 0x7e0) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x7e4) < iVar4 + 1U) {
            FUN_1446f48e2(local_100,iVar4);
          }
          *(int *)(*(longlong *)(param_1 + 0x7d8) + (longlong)iVar4 * 4) = iVar3 + (iVar20 - iVar19)
          ;
          *(int *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) + 1;
          lVar6 = *(longlong *)(param_1 + 0x660);
          if ((lVar6 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar6);
          }
          dVar7 = *(double *)(lVar6 + 0x210) + *(double *)(lVar6 + 0x228);
          dVar14 = *(double *)(lVar6 + 0x208) + *(double *)(lVar6 + 0x220);
          dVar24 = *(double *)(lVar6 + 0x200) + *(double *)(lVar6 + 0x218);
          dVar31 = *(double *)(lVar6 + 0x210) - *(double *)(lVar6 + 0x228);
          dVar26 = *(double *)(lVar6 + 0x208) - *(double *)(lVar6 + 0x220);
          dVar32 = *(double *)(lVar6 + 0x200) - *(double *)(lVar6 + 0x218);
          lVar6 = *(longlong *)(param_1 + 0x720);
          lVar23 = (longlong)iVar3 * 0x80;
          dVar25 = *(double *)(lVar6 + lVar23);
          dVar11 = ((double *)(lVar6 + lVar23))[1];
          pdVar1 = (double *)(lVar6 + 0x20 + lVar23);
          dVar10 = *pdVar1;
          dVar15 = pdVar1[1];
          pdVar1 = (double *)(lVar6 + 0x40 + lVar23);
          dVar16 = *pdVar1;
          dVar28 = pdVar1[1];
          dVar29 = (dVar32 + dVar24) * 0.5;
          dVar30 = (dVar26 + dVar14) * 0.5;
          dVar27 = (dVar31 + dVar7) * 0.5;
          dVar32 = (dVar24 - dVar32) * 0.5;
          dVar26 = (dVar14 - dVar26) * 0.5;
          dVar24 = (dVar7 - dVar31) * 0.5;
          pdVar1 = (double *)(lVar6 + 0x60 + lVar23);
          dVar7 = dVar27 * dVar16 + dVar10 * dVar30 + dVar29 * dVar25 + *pdVar1;
          dVar14 = dVar27 * dVar28 + dVar15 * dVar30 + dVar29 * dVar11 + pdVar1[1];
          dVar10 = ABS(dVar24 * dVar16) + ABS(dVar10 * dVar26) + ABS(dVar32 * dVar25);
          dVar11 = ABS(dVar24 * dVar28) + ABS(dVar15 * dVar26) + ABS(dVar32 * dVar11);
          dVar15 = dVar7 - dVar10;
          dVar16 = dVar14 - dVar11;
          uVar34 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar10 = dVar10 + dVar7;
          dVar11 = dVar11 + dVar14;
          uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
          dVar7 = *(double *)(lVar6 + 0x10 + lVar23);
          dVar14 = *(double *)(lVar6 + 0x30 + lVar23);
          dVar25 = *(double *)(lVar6 + 0x50 + lVar23);
          dVar28 = dVar27 * dVar25 + dVar30 * dVar14 + dVar29 * dVar7 +
                   *(double *)(lVar6 + 0x70 + lVar23);
          dVar7 = ABS(dVar24 * dVar25) + ABS(dVar26 * dVar14) + ABS(dVar32 * dVar7);
          dVar14 = dVar28 - dVar7;
          dVar7 = dVar7 + dVar28;
          if (*(char *)(param_1 + 0xbc0) == '\0') {
            auVar13._8_4_ = SUB84(dVar16,0);
            auVar13._0_8_ = dVar15;
            auVar13._12_4_ = uVar34;
            *(undefined1 (*) [16])(param_1 + 0xb90) = auVar13;
            *(double *)(param_1 + 0xba0) = dVar14;
            auVar9._8_4_ = SUB84(dVar11,0);
            auVar9._0_8_ = dVar10;
            auVar9._12_4_ = uVar33;
            *(undefined1 (*) [16])(param_1 + 0xba8) = auVar9;
            *(undefined1 *)(param_1 + 0xbc0) = 1;
            dVar25 = dVar7;
          }
          else {
            dVar25 = *(double *)(param_1 + 0xb90);
            if (dVar15 <= *(double *)(param_1 + 0xb90)) {
              dVar25 = dVar15;
            }
            *(double *)(param_1 + 0xb90) = dVar25;
            dVar25 = *(double *)(param_1 + 0xb98);
            if (dVar16 <= *(double *)(param_1 + 0xb98)) {
              dVar25 = dVar16;
            }
            *(double *)(param_1 + 0xb98) = dVar25;
            dVar25 = *(double *)(param_1 + 0xba0);
            if (dVar14 <= *(double *)(param_1 + 0xba0)) {
              dVar25 = dVar14;
            }
            *(double *)(param_1 + 0xba0) = dVar25;
            dVar25 = *(double *)(param_1 + 0xba8);
            if (*(double *)(param_1 + 0xba8) <= dVar10) {
              dVar25 = dVar10;
            }
            *(double *)(param_1 + 0xba8) = dVar25;
            dVar25 = *(double *)(param_1 + 0xbb0);
            if (*(double *)(param_1 + 0xbb0) <= dVar11) {
              dVar25 = dVar11;
            }
            *(double *)(param_1 + 0xbb0) = dVar25;
            dVar25 = *(double *)(param_1 + 3000);
            if (*(double *)(param_1 + 3000) <= dVar7) {
              dVar25 = dVar7;
            }
          }
          *(double *)(param_1 + 3000) = dVar25;
          iVar3 = *(int *)(param_1 + 0xbd0);
          *(uint *)(param_1 + 0xbd0) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0xbd4) < iVar3 + 1U) {
            FUN_140555802(plVar5,iVar3);
          }
          lVar6 = *plVar5;
          lVar23 = (longlong)iVar3 * 0x38;
          auVar12._8_4_ = SUB84(dVar16,0);
          auVar12._0_8_ = dVar15;
          auVar12._12_4_ = uVar34;
          *(undefined1 (*) [16])(lVar6 + lVar23) = auVar12;
          *(double *)(lVar6 + 0x10 + lVar23) = dVar14;
          auVar8._8_4_ = SUB84(dVar11,0);
          auVar8._0_8_ = dVar10;
          auVar8._12_4_ = uVar33;
          *(undefined1 (*) [16])(lVar6 + 0x18 + lVar23) = auVar8;
          *(double *)(lVar6 + 0x28 + lVar23) = dVar7;
          *(undefined1 *)(lVar6 + 0x30 + lVar23) = 1;
          lVar21 = lVar21 + 4;
        } while (lVar22 * 4 != lVar21);
      }
      param_2 = local_f8;
      param_4 = local_101;
      if ((*(byte *)(param_1 + 0xc24) & 8) != 0) {
        FUN_143529292(param_1,1,0);
      }
    }
  }
LAB_14352a77b:
  pvVar17 = local_f0;
  if (param_4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_e8;
    if ((longlong)local_e8 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(param_2,local_e8,0);
      memcpy((void *)*param_2,pvVar17,(longlong)local_e8 << 2);
    }
  }
  if (local_f0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14352a89a FUN_14352a89a body=364 status=ok
// SIG undefined FUN_14352a89a(void)

void FUN_14352a89a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  byte bVar11;
  
  bVar3 = *(byte *)(param_1 + 0xc24);
  bVar11 = 4;
  if ((bVar3 & 1) == 0) {
    bVar11 = bVar3 & 4;
  }
  *(byte *)(param_1 + 0xc24) = bVar3 & 0xf9 | bVar11 | 2;
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a3a6e70;
  plVar10[2] = (longlong)puVar9;
  *(undefined8 **)(param_1 + 0xb10) = puVar9;
  plVar4 = *(longlong **)(param_1 + 0xb18);
  if (plVar10 == plVar4) {
    if (plVar10 == (longlong *)0x0) goto LAB_14352a968;
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14352a968;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar10;
  }
  else {
    *(longlong **)(param_1 + 0xb18) = plVar10;
    if (plVar4 == (longlong *)0x0) goto LAB_14352a968;
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_14352a968;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14352a968:
  *(undefined8 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  if (*(int *)(param_1 + 0xb4c) != 0) {
    FUN_14481578e(param_1 + 0xb40,0);
  }
  *(undefined8 *)(param_1 + 3000) = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xba8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xbb0) = uVar5;
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb90) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xb94) = uVar6;
  *(undefined4 *)(param_1 + 0xb98) = uVar7;
  *(undefined4 *)(param_1 + 0xb9c) = uVar8;
  *(undefined8 *)(param_1 + 0xba0) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xbc0) = 0;
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  if (*(int *)(param_1 + 0xbd4) != 0) {
    FUN_1401a2d6a(param_1 + 0xbc8,0);
  }
  FUN_141248d6c(param_1);
  return;
}



// FUNCTION 14352aa06 FUN_14352aa06 body=733 status=ok
// SIG undefined FUN_14352aa06(void)

void FUN_14352aa06(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_e8);
  puVar14 = &local_e8;
  puVar15 = param_3;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_144a6c088(param_1,&local_e8,param_2);
  *(undefined4 *)(param_3 + 0x14) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_3 + 0xa4) = local_e8._4_4_;
  *(undefined4 *)(param_3 + 0x15) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_3 + 0xac) = uStack_e0._4_4_;
  if (*(char *)((longlong)param_3 + 0xae) == '\x01') {
    uVar11 = (ushort)((int)param_1[0xf4] != 0) * 2;
  }
  else {
    uVar11 = 0;
  }
  *(ushort *)((longlong)param_3 + 0x9c) =
       uVar11 | *(byte *)((longlong)param_3 + 0xaf) | (ushort)DAT_14c760e18 << 4;
  lVar12 = param_1[0xcc];
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
  }
  dVar1 = *(double *)(lVar12 + 0x200);
  dVar2 = *(double *)(lVar12 + 0x208);
  dVar3 = *(double *)(lVar12 + 0x210);
  dVar4 = *(double *)(lVar12 + 0x218);
  dVar5 = *(double *)(lVar12 + 0x220);
  dVar6 = *(double *)(lVar12 + 0x228);
  *(float *)((longlong)param_3 + 0x84) = (float)(dVar1 - dVar4);
  *(float *)(param_3 + 0x11) = (float)(dVar2 - dVar5);
  *(float *)((longlong)param_3 + 0x8c) = (float)(dVar3 - dVar6);
  *(float *)(param_3 + 0x12) = (float)(dVar1 + dVar4);
  *(float *)((longlong)param_3 + 0x94) = (float)(dVar2 + dVar5);
  *(float *)(param_3 + 0x13) = (float)(dVar3 + dVar6);
  *(int *)(param_3 + 0x16) = (int)param_1[0x184];
  *(int *)((longlong)param_3 + 0xb4) = (int)param_1[0xe5];
  *(int *)(param_3 + 0x17) = (int)param_1[0xf4];
  local_128 = param_3[0x18];
  uStack_e0 = param_3[0x19];
  local_118 = (longlong *)param_3[0x1a];
  uStack_d0 = param_3[0x1b];
  local_c8 = param_3[0x1c];
  uStack_c0 = param_3[0x1d];
  local_b8 = param_3[0x1e];
  uStack_b0 = param_3[0x1f];
  uVar9 = local_b8;
  uVar10 = uStack_b0;
  local_d8 = local_118;
  uVar8 = uStack_d0;
  local_e8 = local_128;
  uVar7 = uStack_e0;
  param_3[0x1e] = CONCAT44(uStack_f4,local_f8);
  param_3[0x1f] = CONCAT44(uStack_ec,uStack_f0);
  param_3[0x1c] = &PTR_LAB_14a920160;
  param_3[0x1d] = param_1;
  param_3[0x1a] = 0;
  param_3[0x1b] = CONCAT44(uStack_10c,uStack_110);
  param_3[0x18] = FUN_143531462;
  param_3[0x19] = CONCAT44(uStack_11c,uStack_120);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
  local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  uStack_110 = (undefined4)uStack_d0;
  uStack_10c = uStack_d0._4_4_;
  uStack_120 = (undefined4)uStack_e0;
  uStack_11c = uStack_e0._4_4_;
  uStack_e0 = uVar7;
  uStack_d0 = uVar8;
  local_b8 = uVar9;
  uStack_b0 = uVar10;
  if (local_128 != 0) {
    plVar13 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar13 = &local_108;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14352ace4 FUN_14352ace4 body=307 status=ok
// SIG undefined FUN_14352ace4(void)

void FUN_14352ace4(longlong param_1,longlong *param_2,double *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(&local_78);
  iVar11 = *(int *)(param_1 + 0x728);
  FUN_1405181c4(param_2,iVar11,1);
  if (0 < (longlong)iVar11) {
    lVar26 = 0;
    do {
      lVar12 = *(longlong *)(param_1 + 0x720);
      puVar1 = (undefined4 *)(lVar12 + lVar26);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar26);
      uVar16 = *puVar3;
      uVar17 = puVar3[1];
      puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar26);
      uVar18 = *puVar3;
      uVar19 = puVar3[1];
      puVar3 = (undefined8 *)(lVar12 + 0x30 + lVar26);
      uVar20 = *puVar3;
      uVar21 = puVar3[1];
      puVar3 = (undefined8 *)(lVar12 + 0x40 + lVar26);
      uVar22 = *puVar3;
      uVar23 = puVar3[1];
      puVar3 = (undefined8 *)(lVar12 + 0x50 + lVar26);
      uVar24 = *puVar3;
      uVar25 = puVar3[1];
      dVar4 = *(double *)(lVar12 + 0x60 + lVar26);
      dVar5 = *param_3;
      dVar6 = *(double *)(lVar12 + 0x68 + lVar26);
      dVar7 = param_3[1];
      dVar8 = *(double *)(lVar12 + 0x70 + lVar26);
      dVar9 = param_3[2];
      uVar10 = *(undefined8 *)(lVar12 + 0x78 + lVar26);
      lVar12 = *param_2;
      puVar2 = (undefined4 *)(lVar12 + lVar26);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar26);
      *puVar3 = uVar16;
      puVar3[1] = uVar17;
      puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar26);
      *puVar3 = uVar18;
      puVar3[1] = uVar19;
      puVar3 = (undefined8 *)(lVar12 + 0x30 + lVar26);
      *puVar3 = uVar20;
      puVar3[1] = uVar21;
      puVar3 = (undefined8 *)(lVar12 + 0x40 + lVar26);
      *puVar3 = uVar22;
      puVar3[1] = uVar23;
      puVar3 = (undefined8 *)(lVar12 + 0x50 + lVar26);
      *puVar3 = uVar24;
      puVar3[1] = uVar25;
      *(double *)(lVar12 + 0x60 + lVar26) = dVar4 + dVar5;
      *(double *)(lVar12 + 0x68 + lVar26) = dVar6 + dVar7;
      *(double *)(lVar12 + 0x70 + lVar26) = dVar8 + dVar9;
      *(undefined8 *)(lVar12 + 0x78 + lVar26) = uVar10;
      lVar26 = lVar26 + 0x80;
    } while ((longlong)iVar11 * 0x80 != lVar26);
  }
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14352ae18 FUN_14352ae18 body=192 status=ok
// SIG undefined FUN_14352ae18(void)

void FUN_14352ae18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) & 0xfe;
  lVar5 = *(longlong *)(param_1 + 0xc90);
  if (*(longlong *)(param_1 + 0xc90) == 0) {
    lVar5 = param_1 + 0xc70;
  }
  FUN_144717c65(lVar5,*(undefined4 *)(param_1 + 0xc98));
  *(undefined4 *)(param_1 + 0xc98) = 0;
  if (*(int *)(param_1 + 0xc9c) != 0) {
    FUN_14473dbc4(param_1 + 0xc70,0);
  }
  bVar3 = *(byte *)(param_1 + 0xc24);
  if ((bVar3 & 2) == 0) {
    *(byte *)(param_1 + 0xc24) = bVar3 & 0xf9;
  }
  else if ((bVar3 & 4) == 0) {
    FUN_140b4d836(param_1,*param_2,1);
  }
  else {
    *(byte *)(param_1 + 0xc24) = bVar3 & 0xfb;
    FUN_14352aed8(param_1);
  }
  plVar4 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014352aecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14352aed8 FUN_14352aed8 body=2886 status=ok
// SIG undefined FUN_14352aed8(void)

void FUN_14352aed8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  void *pvVar4;
  code *pcVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  LARGE_INTEGER LVar22;
  ulonglong uVar23;
  LARGE_INTEGER LVar24;
  longlong lVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_1c8 [32];
  LARGE_INTEGER *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  int local_178;
  undefined4 local_174;
  longlong *local_170;
  int local_168;
  void *local_160;
  int local_158;
  undefined4 local_154;
  void *local_150;
  int local_148;
  undefined4 local_144;
  LARGE_INTEGER local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_110;
  void *local_108;
  ulonglong uStack_100;
  undefined1 local_e9;
  code *local_e8 [2];
  undefined8 *local_d8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (0 < *(int *)(param_1 + 0x728)) {
    lVar25 = *(longlong *)(param_1 + 0x660);
    if ((lVar25 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar25);
      lVar25 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar25 == 0) goto LAB_14352afb9;
    if ((lVar25 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar25);
      lVar25 = *(longlong *)(param_1 + 0x660);
    }
    if (((DAT_14c950c29 & 1) != 0) && (lVar25 != 0)) {
      FUN_1456cec3c(lVar25);
    }
    plVar12 = *(longlong **)(lVar25 + 0xe0);
    if (((plVar12 != (longlong *)0x0) && ((int)plVar12[1] != 0)) && (*plVar12 != 0)) {
      QueryPerformanceCounter(&local_140);
      puVar17 = &DAT_14c8464f0;
      puVar10 = &DAT_14c8464e8;
      puVar16 = &DAT_14c8464e0;
      if (((*(byte *)(param_1 + 0xb20) & 1) != 0) && (*(int *)(param_1 + 0x728) != 0)) {
        lVar25 = *(longlong *)(param_1 + 0x720);
        puVar16 = (undefined8 *)(lVar25 + 0x60);
        puVar17 = (ulonglong *)(lVar25 + 0x70);
        puVar10 = (undefined8 *)(lVar25 + 0x68);
      }
      dVar6 = (double)local_140.QuadPart * DAT_14c83f420;
      uVar23 = *puVar17;
      uVar15 = *puVar10;
      uVar27 = (undefined4)uVar15;
      uVar28 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar3 = *puVar16;
      uVar20 = (undefined4)uVar3;
      uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined8 *)(param_1 + 0xb28) = uVar3;
      *(undefined8 *)(param_1 + 0xb30) = uVar15;
      *(ulonglong *)(param_1 + 0xb38) = uVar23;
      if (*(int *)(param_1 + 0x7a4) == 0) {
        do {
          iVar7 = rand();
          *(int *)(param_1 + 0x7a4) = iVar7;
        } while (iVar7 == 0);
        uVar23 = *(ulonglong *)(param_1 + 0xb38);
        uVar20 = (undefined4)*(undefined8 *)(param_1 + 0xb28);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xb28) >> 0x20);
        uVar27 = (undefined4)*(undefined8 *)(param_1 + 0xb30);
        uVar28 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xb30) >> 0x20);
      }
      local_108 = (void *)0x0;
      uStack_100 = 0;
      local_130 = (double)(uVar23 ^ 0x8000000000000000);
      local_140.QuadPart = CONCAT44(uVar8,uVar20) ^ 0x8000000000000000;
      dStack_138 = -(double)CONCAT44(uVar28,uVar27);
      FUN_14352ace4(param_1,&local_108,&local_140);
      lVar11 = FUN_14001cc68(0xd8,0x10);
      local_178 = *(int *)(param_1 + 0x728);
      local_174 = *(undefined4 *)(param_1 + 0x7a4);
      uVar20 = *(undefined4 *)(param_1 + 0xbdc);
      uVar8 = FUN_1408dd708(param_1);
      lVar25 = *(longlong *)(param_1 + 0x660);
      if ((lVar25 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar25);
      }
      local_118 = *(double *)(lVar25 + 0x210) + *(double *)(lVar25 + 0x228);
      local_120 = *(double *)(lVar25 + 0x208) + *(double *)(lVar25 + 0x220);
      local_128 = *(double *)(lVar25 + 0x200) + *(double *)(lVar25 + 0x218);
      local_130 = *(double *)(lVar25 + 0x210) - *(double *)(lVar25 + 0x228);
      dStack_138 = *(double *)(lVar25 + 0x208) - *(double *)(lVar25 + 0x220);
      local_140 = (LARGE_INTEGER)(*(double *)(lVar25 + 0x200) - *(double *)(lVar25 + 0x218));
      local_110 = 1;
      uVar27 = *(undefined4 *)(param_1 + 0x7a0);
      local_150 = (void *)0x0;
      local_148 = *(int *)(param_1 + 0x7b0);
      lVar25 = (longlong)local_148;
      pvVar4 = *(void **)(param_1 + 0x7a8);
      if (lVar25 == 0) {
        local_144 = 0;
      }
      else {
        FUN_1447c510a(&local_150,local_148,0);
        memcpy(local_150,pvVar4,lVar25 << 2);
      }
      pvVar4 = local_108;
      local_160 = (void *)0x0;
      lVar25 = (longlong)(int)uStack_100;
      local_158 = (int)uStack_100;
      if (lVar25 == 0) {
        local_154 = 0;
      }
      else {
        FUN_140aa14ca(&local_160,uStack_100 & 0xffffffff,0);
        memcpy(local_160,pvVar4,lVar25 << 7);
      }
      local_188 = 0 < local_178;
      local_190 = local_174;
      local_1a8 = &local_140;
      local_1a0 = uVar8;
      local_198 = uVar20;
      FUN_1435220a8(lVar11,&local_160,&local_150,uVar27);
      plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14a920180;
      plVar12[2] = lVar11;
      *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) | 1;
      local_170 = (longlong *)0x0;
      local_168 = 0;
      FUN_1446efa72(&local_170,0,3,0x10);
      local_168 = 3;
      *local_170 = (longlong)&PTR_LAB_14a920210;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar25 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar25 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar25;
      local_170[2] = lVar18;
      *local_170 = (longlong)&PTR_FUN_14a9201a0;
      local_170[3] = lVar11;
      local_170[4] = (longlong)FUN_140b4639e;
      puVar16 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar14 = (uint *)*puVar16;
      if (puVar14 != (uint *)0x0) goto LAB_14352b43d;
LAB_14352b3bd:
      uVar21 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar21 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar21 | 1;
        __tlregdtor(&LAB_14352fb18);
      }
      lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar13 = *(undefined4 **)(lVar25 + 0x310);
      *(undefined8 *)(lVar25 + 0x310) = 0;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar13 = 0xffffffff;
      *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
      puVar13[0x12] = 0;
      *puVar16 = puVar13;
      FUN_140217a48(puVar16);
      puVar14 = (uint *)*puVar16;
LAB_14352b43d:
      uVar23 = *(longlong *)(puVar14 + 0x10) + 7;
      do {
        LVar24.QuadPart = uVar23 & 0xfffffffffffffff8;
        if ((uint *)(LVar24.QuadPart + 0xc0) <= puVar14 + 0x4000) {
          *(uint **)(puVar14 + 0x10) = (uint *)(LVar24.QuadPart + 0xc0);
          puVar14[0x12] = puVar14[0x12] + 1;
          LVar22.QuadPart = 0;
          FUN_1447247dc(LVar24.QuadPart,0);
          *(undefined ***)LVar24 = &PTR_FUN_14a91fa50;
          *(undefined8 *)(LVar24.QuadPart + 0xa8) = 0;
          *(undefined4 *)(LVar24.QuadPart + 0xb0) = 0;
          if ((longlong **)(LVar24.QuadPart + 0xa8) != &local_170) {
            local_140.QuadPart = 0;
            dStack_138 = (double)((ulonglong)dStack_138 & 0xffffffff00000000);
            if (local_168 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              if (local_170 != (longlong *)0x0) {
                (**(code **)(*local_170 + 0x40))(local_170,&local_140);
                LVar22 = local_140;
                uVar20 = dStack_138._0_4_;
                puVar16 = *(undefined8 **)(LVar24.QuadPart + 0xa8);
                local_140.QuadPart = 0;
                dStack_138 = (double)((ulonglong)dStack_138 & 0xffffffff00000000);
                if (*(int *)(LVar24.QuadPart + 0xb0) != 0) {
                  if (puVar16 == (undefined8 *)0x0) goto LAB_14352b9f6;
                  (**(code **)*puVar16)(puVar16,0);
                  FUN_1446efa72((longlong **)(LVar24.QuadPart + 0xa8),0,0,0x10);
                  *(undefined4 *)(LVar24.QuadPart + 0xb0) = 0;
                  puVar16 = *(undefined8 **)(LVar24.QuadPart + 0xa8);
                }
                if (puVar16 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                ((LARGE_INTEGER *)(LVar24.QuadPart + 0xa8))->QuadPart = (LONGLONG)LVar22;
                *(undefined4 *)(LVar24.QuadPart + 0xb0) = uVar20;
                if (dStack_138._0_4_ != 0) {
                  if ((undefined8 *)local_140.QuadPart == (undefined8 *)0x0) goto LAB_14352b5b0;
                  (*(code *)**(undefined8 **)local_140)(local_140.QuadPart,0);
                  FUN_1446efa72(&local_140,0,0,0x10);
                  dStack_138 = (double)((ulonglong)dStack_138 & 0xffffffff00000000);
                }
                if ((undefined8 *)local_140.QuadPart != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_14352b5b0;
              }
            }
LAB_14352b9f6:
            local_140.QuadPart = 0;
            ((LARGE_INTEGER *)(LVar24.QuadPart + 0xa8))->QuadPart = (LONGLONG)LVar22;
            *(undefined4 *)(LVar24.QuadPart + 0xb0) = uVar20;
          }
LAB_14352b5b0:
          *(undefined4 *)(LVar24.QuadPart + 0xb8) = 0x8ff;
          pcVar5 = *(code **)(*(longlong *)(LVar24.QuadPart + 0x70) + 0x18);
          if (pcVar5 != FUN_144713626) {
            (*pcVar5)((undefined8 *)(LVar24.QuadPart + 0x70),(undefined8 *)(LVar24.QuadPart + 0x48))
            ;
          }
          *(undefined ***)(LVar24.QuadPart + 0x70) =
               LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
               ::vftable;
          ((LARGE_INTEGER *)(LVar24.QuadPart + 0x48))->QuadPart = (LONGLONG)LVar24;
          ((LARGE_INTEGER *)(LVar24.QuadPart + 0x50))->QuadPart = (LONGLONG)LVar24;
          lVar25 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar25 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(lVar25 + 0x30);
          }
          *(undefined8 *)(LVar24.QuadPart + 0x78) = uVar15;
          *(undefined8 *)(LVar24.QuadPart + 0x80) = 0xd80000527800b400;
          *(undefined4 *)(LVar24.QuadPart + 0x1c) = 0;
          if ((undefined8 *)LVar24.QuadPart != (undefined8 *)0x0) {
            LOCK();
            *(int *)(LVar24.QuadPart + 8) = *(int *)(LVar24.QuadPart + 8) + 1;
            UNLOCK();
          }
          local_e9 = 1;
          local_140.QuadPart = LVar24.QuadPart;
          FUN_1447439e4(LVar24.QuadPart);
          if (local_168 != 0) {
            if (local_170 == (longlong *)0x0) goto LAB_14352b705;
            (**(code **)*local_170)(local_170,0);
            FUN_1446efa72(&local_170,0,0,0x10);
            local_168 = 0;
          }
          if (local_170 != (longlong *)0x0) {
            FUN_1400020a8();
          }
LAB_14352b705:
          lVar25 = param_1 + 0xc70;
          iVar7 = *(int *)(param_1 + 0xc98);
          *(uint *)(param_1 + 0xc98) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0xc9c) < iVar7 + 1U) {
            FUN_14476a5c8(lVar25,iVar7);
          }
          lVar18 = *(longlong *)(param_1 + 0xc90);
          if (*(longlong *)(param_1 + 0xc90) == 0) {
            lVar18 = lVar25;
          }
          ((LARGE_INTEGER *)(lVar18 + (longlong)iVar7 * 8))->QuadPart = (LONGLONG)LVar24;
          if ((undefined8 *)LVar24.QuadPart != (undefined8 *)0x0) {
            LOCK();
            *(int *)(LVar24.QuadPart + 8) = *(int *)(LVar24.QuadPart + 8) + 1;
            UNLOCK();
          }
          if (param_1 == 0) {
            uVar21 = 0;
            uVar23 = 0;
          }
          else {
            uVar21 = *(uint *)(param_1 + 0xc);
            if ((int)uVar21 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            uVar23 = (ulonglong)*(uint *)(lVar18 + 0x10);
            if (*(uint *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              uVar19 = DAT_14c964868 + 1;
              bVar26 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar26) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar19);
              }
              LOCK();
              uVar9 = *(uint *)(lVar18 + 0x10);
              bVar26 = uVar9 == 0;
              if (bVar26) {
                *(uint *)(lVar18 + 0x10) = uVar19;
                uVar9 = 0;
              }
              UNLOCK();
              if (bVar26) {
                uVar9 = uVar19;
              }
              uVar23 = (ulonglong)uVar9;
            }
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_e8[0] = (code *)0x0;
          local_d8 = (undefined8 *)FUN_14001cc68(0x28,8);
          *local_d8 = &PTR_LAB_14a920280;
          local_d8[1] = uVar23 << 0x20 | (ulonglong)uVar21;
          local_d8[2] = lVar11;
          local_d8[3] = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_d8[4] = dVar6 + 16777216.0;
          if (local_d8 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_e8[0] = FUN_1435315ce;
          }
          local_1a8 = (LARGE_INTEGER *)CONCAT44(local_1a8._4_4_,0xff);
          FUN_140e6df44(&local_170,local_e8);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          iVar7 = *(int *)(param_1 + 0xc98);
          *(uint *)(param_1 + 0xc98) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0xc9c) < iVar7 + 1U) {
            FUN_14476a5c8(lVar25,iVar7);
          }
          if (*(longlong *)(param_1 + 0xc90) != 0) {
            lVar25 = *(longlong *)(param_1 + 0xc90);
          }
          *(longlong **)(lVar25 + (longlong)iVar7 * 8) = local_170;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_170 + 1) = (int)local_170[1] + 1;
            UNLOCK();
            if (local_170 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_170 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_170)(local_170,1);
              }
            }
          }
          if ((undefined8 *)local_140.QuadPart != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(local_140.QuadPart + 8);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)**(undefined8 **)local_140)(local_140.QuadPart,1);
            }
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_1c8);
        }
        *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
        LOCK();
        uVar21 = *puVar14;
        *puVar14 = *puVar14 + puVar14[0x12] + 1;
        UNLOCK();
        if ((uVar21 ^ puVar14[0x12]) != 0xffffffff) goto LAB_14352b3bd;
        puVar14 = (uint *)*puVar16;
        *puVar14 = 0xffffffff;
        *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar16 = puVar14;
        uVar23 = (longlong)puVar14 + 0x5f;
      } while( true );
    }
  }
LAB_14352afb9:
  if ((local_a0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1463d17bc(param_1);
  return;
}



// FUNCTION 14352ba5e FUN_14352ba5e body=1932 status=ok
// SIG undefined FUN_14352ba5e(void)

undefined8 * FUN_14352ba5e(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
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
  undefined1 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_1a8 [32];
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_3 == '\0') {
    puVar18 = (undefined8 *)FUN_14001cc68(0xb60,0x10);
    lVar19 = param_1[0x16];
    if (lVar19 == 0) {
      lVar19 = FUN_1448abda6(param_1);
    }
    uVar17 = *(undefined1 *)(lVar19 + 0x150);
    FUN_1403fb3a4(puVar18,param_1,uVar17);
    *puVar18 = &PTR_FUN_14a918bf0;
    lVar19 = param_1[0x162];
    puVar18[0x157] = lVar19;
    lVar4 = param_1[0x163];
    puVar18[0x158] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      lVar19 = param_1[0x162];
    }
    puVar18[0x159] = lVar19;
    puVar18[0x15a] = 0;
    iVar21 = (int)param_1[0x17a];
    _Src = (void *)param_1[0x179];
    *(int *)(puVar18 + 0x15b) = iVar21;
    if ((longlong)iVar21 == 0) {
      *(undefined4 *)((longlong)puVar18 + 0xadc) = 0;
    }
    else {
      FUN_147468894(puVar18 + 0x15a,iVar21,0);
      memcpy((void *)puVar18[0x15a],_Src,(longlong)iVar21 * 0x38);
    }
    iVar21 = (int)param_1[0x16a];
    if (iVar21 < 1) {
      iVar21 = *(int *)((longlong)param_1 + 0xb54);
    }
    *(int *)(puVar18 + 0x15c) = iVar21;
    *(int *)((longlong)puVar18 + 0xae4) = (int)param_1[0x184];
    uVar23 = 0;
    puVar18[0x164] = 0;
    *(undefined4 *)(puVar18 + 0x165) = 0;
    puVar18[0x15e] = 0;
    puVar18[0x15f] = 0;
    puVar18[0x160] = 0;
    puVar18[0x161] = 0;
    *(undefined8 *)((longlong)puVar18 + 0xb2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar18 + 0xb34) = 0;
    puVar18[0x168] = 0;
    *(undefined4 *)(puVar18 + 0x169) = 0;
    *(undefined1 *)(puVar18 + 0x16a) = 0;
    *(char *)((longlong)puVar18 + 0xb51) = (char)param_1[0x194];
    uVar17 = (**(code **)(*param_1 + 0xac8))(param_1,uVar17);
    *(undefined1 *)((longlong)puVar18 + 0xb52) = uVar17;
    *(undefined4 *)((longlong)puVar18 + 0xb54) = 0xffffffff;
    puVar18[0x15d] = 0;
    plVar5 = (longlong *)puVar18[0x159];
    iVar21 = 1;
    if (((int)plVar5[1] != 0) && (iVar1 = (int)param_1[0x17c], iVar1 != 0)) {
      uVar2 = *(uint *)(*plVar5 + 0xc);
      uVar3 = *(uint *)(*plVar5 + 0x1c);
      if ((-1 < (int)(uVar2 | uVar3)) && (uVar23 = 0, (int)((uVar3 - uVar2) + 1) <= iVar1)) {
        do {
          uVar22 = uVar3;
          uVar23 = uVar2;
          *(uint *)(puVar18 + 0x15d) = uVar23;
          *(uint *)((longlong)puVar18 + 0xaec) = uVar22;
          uVar2 = *(uint *)(*plVar5 + 0xc + (ulonglong)uVar23 * 0x40);
          if (((int)uVar2 < 0) ||
             (uVar3 = *(uint *)(*plVar5 + 0x1c + (ulonglong)uVar22 * 0x40), (int)uVar3 < 0)) break;
        } while ((int)((uVar3 - uVar2) + 1) <= iVar1);
        iVar21 = uVar22 + 1;
      }
    }
    if ((int)(iVar21 - uVar23) < 2) {
      puVar18[0x15d] = 0xffffffffffffffff;
    }
    else {
      if (*(int *)((longlong)puVar18 + 0xafc) < (int)(iVar21 - uVar23)) {
        FUN_14177ddba(puVar18 + 0x15e);
      }
      (**(code **)(*param_1 + 0x7a8))(param_1,&local_168);
      local_188 = 0.0;
      if ((~*(byte *)((longlong)puVar18 + 0x75) & 0x14) == 0 ||
          (*(byte *)((longlong)puVar18 + 0x75) & 0x20) != 0) {
        local_188 = (double)*(float *)(puVar18 + 0x17);
      }
      iVar21 = *(int *)(puVar18 + 0x15d);
      if (iVar21 <= *(int *)((longlong)puVar18 + 0xaec)) {
        lVar19 = (longlong)iVar21 + -1;
        uVar24 = (longlong)iVar21 << 6 | 0x18;
        do {
          dVar16 = local_138;
          dVar15 = dStack_140;
          dVar14 = local_148;
          dVar13 = local_158;
          dVar12 = dStack_160;
          dVar11 = local_168;
          lVar4 = *(longlong *)puVar18[0x159];
          dVar28 = (double)*(float *)(lVar4 + uVar24) + local_188;
          dVar27 = (double)*(float *)(lVar4 + -4 + uVar24) + local_188;
          dVar31 = (double)*(float *)(lVar4 + -8 + uVar24) + local_188;
          dVar29 = (double)*(float *)(lVar4 + -0x10 + uVar24) - local_188;
          dVar6 = (double)*(float *)(lVar4 + -0x14 + uVar24) - local_188;
          dVar7 = (double)*(float *)(lVar4 + -0x18 + uVar24) - local_188;
          dVar26 = (dVar7 + dVar31) * 0.5;
          dVar30 = (dVar6 + dVar27) * 0.5;
          dVar8 = (dVar29 + dVar28) * 0.5;
          local_178 = local_128;
          dStack_170 = dStack_120;
          dVar9 = dVar8 * local_128 + local_148 * dVar30 + dVar26 * local_168 + local_108;
          dVar10 = dVar8 * dStack_120 + dStack_140 * dVar30 + dVar26 * dStack_160 + dStack_100;
          local_180 = local_118;
          dVar26 = dVar8 * local_118 + dVar30 * local_138 + dVar26 * local_158 + local_f8;
          iVar21 = *(int *)(puVar18 + 0x15f);
          *(uint *)(puVar18 + 0x15f) = iVar21 + 1U;
          if (*(uint *)((longlong)puVar18 + 0xafc) < iVar21 + 1U) {
            FUN_14177df02(puVar18 + 0x15e,iVar21);
          }
          dVar31 = (dVar31 - dVar7) * 0.5;
          dVar8 = (dVar27 - dVar6) * 0.5;
          dVar7 = (dVar28 - dVar29) * 0.5;
          dVar6 = ABS(dVar7 * local_178) + ABS(dVar14 * dVar8) + ABS(dVar11 * dVar31);
          dVar30 = ABS(dVar7 * dStack_170) + ABS(dVar15 * dVar8) + ABS(dVar12 * dVar31);
          dVar28 = dVar9 - dVar6;
          dVar29 = dVar10 - dVar30;
          dVar7 = ABS(dVar7 * local_180) + ABS(dVar16 * dVar8) + ABS(dVar13 * dVar31);
          dVar31 = dVar26 - dVar7;
          dVar7 = ((dVar7 + dVar26) - dVar31) * 0.5;
          dVar26 = ((dVar30 + dVar10) - dVar29) * 0.5;
          dVar6 = ((dVar6 + dVar9) - dVar28) * 0.5;
          lVar4 = puVar18[0x15e];
          lVar20 = (longlong)iVar21 * 0x38;
          *(double *)(lVar4 + lVar20) = dVar28 + dVar6;
          *(double *)(lVar4 + 8 + lVar20) = dVar29 + dVar26;
          *(double *)(lVar4 + 0x10 + lVar20) = dVar31 + dVar7;
          *(double *)(lVar4 + 0x18 + lVar20) = dVar6;
          *(double *)(lVar4 + 0x20 + lVar20) = dVar26;
          *(double *)(lVar4 + 0x28 + lVar20) = dVar7;
          *(double *)(lVar4 + 0x30 + lVar20) = SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar26 * dVar26)
          ;
          lVar19 = lVar19 + 1;
          uVar24 = uVar24 + 0x40;
        } while (lVar19 < *(int *)((longlong)puVar18 + 0xaec));
      }
    }
    *(byte *)((longlong)puVar18 + 0x6f) = *(byte *)((longlong)puVar18 + 0x6f) & 0xfd;
    *(byte *)((longlong)puVar18 + 0x74) =
         *(byte *)((longlong)puVar18 + 0x74) & 0x3f |
         (*(char *)((longlong)puVar18 + 0xb51) == '\0') << 7 | 0x40;
    fVar25 = *(float *)(param_1 + 0xf9) * *DAT_14cae41a0;
    *(float *)(puVar18 + 0x122) = fVar25;
    *(float *)(puVar18 + 0x12d) = fVar25;
    *(float *)(puVar18 + 0x138) = fVar25;
    dVar26 = DAT_14c8464e8;
    dVar30 = DAT_14c8464e0;
    dVar6 = DAT_14c8464f0;
    if ((int)((longlong *)param_1[0x162])[1] != 0) {
      lVar19 = *(longlong *)param_1[0x162];
      dVar26 = (double)((*(float *)(lVar19 + 0x38) - *(float *)(lVar19 + 0x2c)) * 0.5 +
                       *(float *)(lVar19 + 0x2c));
      dVar30 = (double)((*(float *)(lVar19 + 0x34) - *(float *)(lVar19 + 0x28)) * 0.5 +
                       *(float *)(lVar19 + 0x28));
      dVar6 = (double)((*(float *)(lVar19 + 0x3c) - *(float *)(lVar19 + 0x30)) * 0.5 +
                      *(float *)(lVar19 + 0x30));
    }
    puVar18[0x13a] = dVar30;
    puVar18[0x13b] = dVar26;
    puVar18[0x13c] = dVar6;
    puVar18[0x12f] = dVar30;
    puVar18[0x130] = dVar26;
    puVar18[0x131] = dVar6;
    puVar18[0x124] = dVar30;
    puVar18[0x125] = dVar26;
    puVar18[0x126] = dVar6;
  }
  else {
    puVar18 = (undefined8 *)FUN_14001cc68(0x920,0x10);
    FUN_1417ea5d2(puVar18,param_2,param_1);
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar18;
}



// FUNCTION 14352c1ec FUN_14352c1ec body=778 status=ok
// SIG undefined FUN_14352c1ec(void)

longlong FUN_14352c1ec(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_158 [32];
  undefined1 local_138 [128];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae4308) {
    FUN_144b3d300(&DAT_14cae4308);
    if (DAT_14cae4308 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cae4300 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ProxyRenderMode",1);
      _Init_thread_footer(&DAT_14cae4308);
    }
  }
  if (DAT_14cae4300 != (longlong *)0x0) {
    (**(code **)(*DAT_14cae4300 + 0xb0))();
  }
  *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) & 0xdf;
  *(byte *)((longlong)param_1 + 0x66c) = *(byte *)((longlong)param_1 + 0x66c) & 0xf7;
  param_1[0xfd] = 0;
  cVar1 = FUN_14490dacc(param_1,1);
  if (((cVar1 == '\0') || (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)) {
    if ((int)param_1[0xe5] < 1) {
      iVar2 = (int)param_1[0x119];
      if (iVar2 == 0) {
        iVar2 = (int)param_1[0x11c];
      }
      if ((iVar2 < 1) && (*(int *)((longlong)param_1 + 0xb54) < 1)) goto LAB_14352c42c;
    }
    lVar4 = param_1[0xcc];
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
      lVar4 = param_1[0xcc];
    }
    else if (lVar4 == 0) goto LAB_14352c42c;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
      lVar4 = param_1[0xcc];
    }
    if (((DAT_14c950c29 & 1) != 0) && (lVar4 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    plVar6 = *(longlong **)(lVar4 + 0xe0);
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[1] != 0)) && (*plVar6 != 0)) {
      lVar4 = FUN_140408130(param_1);
      if (lVar4 != 0) {
        local_b8 = 2;
        uStack_b4 = 0x7f7fffff;
        uStack_b0 = 0x7f7fffff;
        uStack_ac = 0x7f7fffff;
        local_a8 = &DAT_ff7fffffff7fffff;
        local_a0 = 0xff7fffff;
        local_9c = 0;
        local_98 = DAT_14c84635c;
        local_90 = 0;
        local_88 = 0xffffffffffffffff;
        local_80 = 0;
        local_78 = 0;
        local_68 = (longlong *)0x0;
        (**(code **)(*param_1 + 0xbe8))
                  (param_1,*(undefined4 *)(*(longlong *)(lVar4 + 0x210) + 8),local_138);
        FUN_140408498(param_1 + 0x118,local_138,1);
        if (local_78 != 0) {
          plVar6 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar6 = local_58;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      iVar3 = (**(code **)(*param_1 + 0xbb0))(param_1);
      iVar2 = (int)param_1[0xf4] + 3;
      iVar5 = (int)param_1[0xf4] + 6;
      if (-1 < iVar2) {
        iVar5 = iVar2;
      }
      param_1[0xfd] = (longlong)((iVar5 >> 2) + 5) * (longlong)iVar3 * 0x10;
      goto LAB_14352c42e;
    }
  }
LAB_14352c42c:
  lVar4 = 0;
LAB_14352c42e:
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14352c4f8 FUN_14352c4f8 body=847 status=ok
// SIG undefined FUN_14352c4f8(void)

void FUN_14352c4f8(longlong param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
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
  if ((*(uint *)(param_1 + 8) & 0x30) != 0) {
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((*(byte *)(param_1 + 0xbd8) & 1) == 0) {
LAB_14352c54a:
    bVar3 = false;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
      if (lVar5 == 0) goto LAB_14352c54a;
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
    }
    bVar1 = *(byte *)(lVar5 + 0x152);
    if ((bVar1 == 1) || ((bVar3 = false, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      fVar7 = *DAT_14cae4218;
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)(param_1 + 0xbdc) = fVar7;
      bVar3 = fVar7 < 1.0;
    }
  }
  if ((*(float *)(param_1 + 0xbdc) == 0.0) && (!NAN(*(float *)(param_1 + 0xbdc)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if ((!bVar3) && (0 < *(int *)(param_1 + 0x728))) {
    bVar3 = true;
    if (*(int *)(param_1 + 0x728) == *(int *)(param_1 + 0x7e0)) {
      bVar3 = false;
    }
  }
  if ((!bVar3) && (lVar5 = *(longlong *)(param_1 + 0xa8), lVar5 != 0)) {
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
    lVar5 = *(longlong *)(lVar5 + 0x20);
    if (lVar5 != 0) {
      iVar2 = *(int *)(lVar4 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
           (lVar6 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar4 + 0x30)) {
          lVar6 = 0;
        }
      } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(lVar6 + 0xc0);
        if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
        }
        else if (lVar5 == 0) goto LAB_14352c6ae;
        lVar5 = FUN_1403358e4(lVar5);
        if (lVar5 != 0) {
          bVar3 = true;
          if (lVar5 == lVar6) {
            bVar3 = false;
          }
        }
      }
    }
  }
LAB_14352c6ae:
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_1 + 0xb50);
    *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(param_1 + 0xb50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14352c87a FUN_14352c87a body=5423 status=ok
// SIG undefined FUN_14352c87a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352c87a(longlong param_1,double *param_2,ulonglong param_3,longlong *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  int iVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  float *pfVar17;
  longlong lVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  double dVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar63 [16];
  double dVar64;
  double dVar67;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auStack_338 [32];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [24];
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  dVar28 = local_318;
  if ((int)(*(longlong **)(param_1 + 0xb10))[1] != 0) {
    local_2d8 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar28 = local_2d8._0_8_;
    dVar32 = local_2d8._8_8_;
    auVar36 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar27 = auVar36._0_8_;
    auVar26 = minpd(_DAT_149934d80,local_2d8);
    auVar29 = minpd(ZEXT816(0x3ff0000000000000),auVar36);
    auVar57._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
    auVar57._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
    uVar14 = movmskpd((int)param_1,auVar57);
    pdVar15 = (double *)(ulonglong)uVar14;
    auVar26._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar26._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar16 = movmskpd((int)param_2,auVar26);
    pfVar17 = (float *)((param_3 & 0xffffffff) * 0x40 + **(longlong **)(param_1 + 0xb10));
    if ((uVar16 & 0x3fffffff) == 0 && uVar14 == 0) {
      dVar40 = *(double *)(param_1 + 0x240);
      dVar41 = *(double *)(param_1 + 0x248);
      dVar50 = *(double *)(param_1 + 0x250);
      dVar48 = *(double *)(param_1 + 600);
      dVar33 = *(double *)(param_1 + 600);
      dVar51 = *(double *)(param_1 + 600);
      dVar28 = *(double *)(param_1 + 0xb28) * dVar28;
      dStack_310 = *(double *)(param_1 + 0xb30) * dVar32;
      dVar25 = *(double *)(param_1 + 0xb38) * dVar27;
      dVar32 = auVar36._8_8_ * 0.0;
      auVar29._8_4_ = SUB84(dVar32,0);
      auVar29._0_8_ = dVar25;
      auVar29._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      dVar38 = dStack_310 * dVar40 - dVar28 * dVar41;
      dVar52 = dVar25 * dVar41 - dStack_310 * dVar50;
      dVar53 = dVar28 * dVar50 - dVar25 * dVar40;
      dVar39 = dVar32 * dVar48 - dVar32 * dVar48;
      dVar52 = dVar52 + dVar52;
      dVar53 = dVar53 + dVar53;
      dVar38 = dVar38 + dVar38;
      dVar39 = dVar39 + dVar39;
      dVar32 = *(double *)(param_1 + 0x248);
      dVar54 = *(double *)(param_1 + 0x248);
      dVar64 = dVar50 * 0.0 * -1.0 +
               dVar32 * 0.0 + *(double *)(param_1 + 0x240) * 1.0 * 1.0 + dVar33 * 0.0;
      dVar67 = dVar50 * 0.0 * 1.0 +
               dVar54 * 1.0 + *(double *)(param_1 + 0x240) * 0.0 * -1.0 + dVar51 * 0.0;
      auVar61._0_8_ =
           *(double *)(param_1 + 0x250) * 1.0 * 1.0 +
           ((dVar40 * 0.0 * 1.0 + dVar33 * 0.0) - dVar32 * 0.0);
      auVar61._8_8_ =
           *(double *)(param_1 + 0x250) * 0.0 * -1.0 +
           ((dVar40 * 0.0 * -1.0 + dVar51 * 1.0) - dVar54 * 0.0);
      dStack_300 = auVar29._8_8_;
      dVar32 = (dVar38 * dVar41 - dVar50 * dVar53) + dVar33 * dVar52 + dVar28 +
               *(double *)(param_1 + 0x260);
      dVar54 = (dVar52 * dVar50 - dVar38 * dVar40) + dVar51 * dVar53 + dStack_310 +
               *(double *)(param_1 + 0x268);
      local_2e8 = (dVar53 * dVar40 - dVar41 * dVar52) + dVar33 * dVar38 + dVar25 +
                  *(double *)(param_1 + 0x270);
      dStack_2e0 = (dVar39 * dVar48 - dVar39 * dVar48) + dVar51 * dVar39 + dStack_300 +
                   *(double *)(param_1 + 0x278);
    }
    else {
      dVar51 = *(double *)(param_1 + 0x240);
      dVar54 = *(double *)(param_1 + 0x248);
      dVar33 = *(double *)(param_1 + 0x250);
      dVar38 = dVar54 + dVar54;
      dVar39 = dVar33 + dVar33;
      dVar50 = dVar51 * (dVar51 + dVar51);
      local_1f8 = ((double)DAT_149934d80 - (dVar33 * dVar39 + dVar54 * dVar38)) * dVar28;
      dStack_1d0 = (DAT_149934d80._8_8_ - (dVar33 * dVar39 + dVar50)) * dVar32;
      dVar25 = *(double *)(param_1 + 0x240) * dVar39;
      dVar33 = *(double *)(param_1 + 600);
      dVar40 = dVar39 * dVar33;
      dVar41 = (dVar51 + dVar51) * *(double *)(param_1 + 600);
      dVar33 = dVar38 * dVar33;
      local_1d8 = (dVar38 * dVar51 - dVar40) * dVar32;
      dStack_1b0 = (dVar39 * dVar54 - dVar41) * dVar27;
      local_1b8 = (dVar33 + dVar25) * dVar27;
      dStack_1f0 = (dVar38 * dVar51 + dVar40) * dVar28;
      local_1c8 = (dVar39 * dVar54 + dVar41) * dVar32;
      local_1e8 = (dVar25 - dVar33) * dVar28;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      local_1a8 = (1.0 - (dVar50 + dVar54 * dVar38)) * dVar27;
      uStack_1a0 = 0;
      local_198 = *(undefined8 *)(param_1 + 0x260);
      uStack_190 = *(undefined8 *)(param_1 + 0x268);
      local_188 = *(undefined8 *)(param_1 + 0x270);
      uStack_180 = 0x3ff0000000000000;
      local_278 = 1.0;
      dStack_270 = 0.0;
      local_268 = 0.0;
      uStack_260 = 0;
      local_318 = 0.0;
      dStack_310 = 1.0;
      local_258 = 0.0;
      dStack_250 = 1.0;
      local_248 = 0.0;
      uStack_240 = 0;
      local_238 = 0.0;
      dStack_230 = 0.0;
      local_228 = 1.0;
      uStack_220 = 0;
      local_208._8_4_ = 0;
      local_208._0_8_ = *(double *)(param_1 + 0xb38);
      local_208._12_4_ = 0x3ff00000;
      local_218 = *(double *)(param_1 + 0xb28);
      dStack_210 = *(double *)(param_1 + 0xb30);
      FUN_1447fea8d(&local_178);
      auVar26 = _DAT_149934d80;
      dVar51 = local_168 * local_168 + local_178 * local_178 + uStack_170 * uStack_170;
      local_308 = local_158;
      local_2e8 = local_148;
      dVar54 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
      local_2c8._0_8_ = local_138;
      local_2f0 = local_128;
      dVar33 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
      uVar20 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
      dVar51 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar51)) & uVar20);
      uVar20 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
      dVar54 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar54)) & uVar20);
      uVar20 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
      dVar33 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar20);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar32);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar28);
      auVar57 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
      uVar20 = -(ulonglong)(0.0 <= dVar27 * 1.0);
      dVar32 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar28 = auVar57._0_8_;
      local_178 = local_178 * dVar51 * dVar28;
      uStack_170 = uStack_170 * dVar51 * dVar28;
      local_168 = dVar51 * local_168 * dVar28;
      dVar28 = auVar57._8_8_;
      local_148 = dVar54 * local_148 * dVar28;
      dStack_150 = dStack_150 * dVar54 * dVar28;
      local_158 = dVar28 * local_158 * dVar54;
      local_128 = dVar33 * local_128 * dVar32;
      dStack_130 = dStack_130 * dVar33 * dVar32;
      local_138 = dVar32 * local_138 * dVar33;
      auVar11._8_8_ = dStack_310;
      auVar11._0_8_ = local_318;
      pdVar15 = &local_298;
      FUN_14481fd10(pdVar15,&local_178);
      dVar28 = local_288 * local_288 + local_298 * local_298;
      dVar32 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar30._0_8_ = dVar28 + dVar32;
      auVar30._8_8_ = dVar28 + dVar32;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
      auVar57 = sqrtpd(auVar30,auVar30);
      auVar26 = divpd(auVar26,auVar57);
      auVar34._0_8_ = auVar26._0_8_ * local_288;
      auVar34._8_8_ = auVar26._8_8_ * dStack_280;
      dVar64 = (double)((ulonglong)(local_298 * auVar26._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
      dVar67 = (double)((ulonglong)(dStack_290 * auVar26._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
      auVar61 = blendvpd(auVar11,auVar34,auVar22);
      local_2e8 = local_108;
      dStack_2e0 = 0.0;
      dVar32 = local_118;
      dVar54 = dStack_110;
    }
    dStack_300 = auVar36._8_8_ * 0.0;
    local_308 = dVar27 * 1.0;
    dVar28 = (double)pfVar17[2];
    dVar25 = (double)pfVar17[1];
    dVar27 = (double)*pfVar17;
    dVar38 = auVar61._0_8_;
    dVar56 = auVar61._8_8_;
    dVar39 = dVar38 + dVar38;
    dVar33 = dVar64 + dVar64;
    dVar51 = dVar67 + dVar67;
    local_2c8._0_8_ = dVar64 * dVar39;
    auVar68._0_8_ = (double)local_2d8._8_8_ * (dVar51 * dVar64 - dVar56 * dVar39);
    auVar68._8_8_ = local_308 * (dVar39 * dVar67 - dVar56 * dVar33);
    local_2c8._8_8_ = dVar64 * dVar33;
    auVar63._0_8_ = (dVar51 * dVar56 + (double)local_2c8._0_8_) * local_308;
    auVar63._8_8_ = (dVar33 * dVar56 + dVar64 * dVar33) * dStack_300;
    auVar26 = blendpd(auVar63,auVar68,2);
    auVar65._0_8_ = (1.0 - (dVar39 * dVar38 + dVar51 * dVar67)) * (double)local_2d8._0_8_;
    auVar65._8_8_ = (1.0 - (dVar39 * dVar38 + dVar33 * dVar64)) * (double)local_2d8._8_8_;
    auVar57 = blendpd(auVar68,auVar65,2);
    dVar38 = (dVar56 * dVar39 + dVar51 * dVar64) * (double)local_2d8._0_8_;
    dVar40 = (dVar56 * dVar33 + dVar39 * dVar67) * (double)local_2d8._8_8_;
    auVar36._8_4_ = SUB84(dVar25,0);
    auVar36._0_8_ = dVar27;
    auVar36._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar52 = (dVar27 + (double)pfVar17[4]) * 0.5;
    dVar53 = (auVar36._8_8_ + (double)pfVar17[5]) * 0.5;
    dVar48 = (dVar28 + (double)pfVar17[6]) * 0.5;
    dVar41 = ((double)pfVar17[4] - dVar27) * 0.5;
    dVar50 = ((double)pfVar17[5] - dVar25) * 0.5;
    dVar25 = ((double)pfVar17[6] - dVar28) * 0.5;
    dVar32 = dVar48 * auVar26._0_8_ + auVar57._0_8_ * dVar53 + dVar52 * auVar65._0_8_ + dVar32;
    dVar54 = dVar48 * auVar26._8_8_ + auVar57._8_8_ * dVar53 + dVar52 * dVar38 + dVar54;
    dVar55 = ABS(dVar25 * auVar26._0_8_) + ABS(auVar57._0_8_ * dVar50) + ABS(dVar41 * auVar65._0_8_)
    ;
    dVar58 = ABS(dVar25 * auVar26._8_8_) + ABS(auVar57._8_8_ * dVar50) + ABS(dVar41 * dVar38);
    dVar38 = dVar32 + dVar55;
    dVar39 = dVar54 + dVar58;
    dVar27 = *param_2;
    if (dVar27 <= dVar38) {
      dVar32 = dVar32 - dVar55;
      dVar54 = dVar54 - dVar58;
      local_318 = param_2[3];
      if (((dVar32 <= local_318) && (dVar55 = param_2[1], dVar55 <= dVar39)) &&
         (local_2b0 = param_2[4], dVar28 = local_318, local_2f0 = dVar55, local_2a8 = dVar54,
         dStack_2a0 = dVar54, dVar54 <= local_2b0)) {
        dVar58 = (double)local_2d8._0_8_ * ((double)local_2c8._0_8_ - dVar51 * dVar56);
        dVar33 = local_308 * (1.0 - (dVar33 * dVar64 + dVar51 * dVar67));
        dVar48 = local_2e8 + dVar48 * dVar33 + dVar53 * dVar40 + dVar52 * dVar58;
        dVar51 = ABS(dVar33 * dVar25) + ABS(dVar40 * dVar50) + ABS(dVar58 * dVar41);
        dVar25 = dVar48 + dVar51;
        dVar33 = param_2[2];
        if (dVar33 <= dVar25) {
          dVar48 = dVar48 - dVar51;
          dVar51 = param_2[5];
          if (dVar48 <= dVar51) {
            fVar19 = pfVar17[3];
            if (((int)fVar19 < 0) ||
               ((((dVar27 < dVar32 && (dVar32 < local_318)) &&
                 ((dVar55 < dVar54 && ((dVar54 < local_2b0 && (dVar33 < dVar48)))))) &&
                ((dVar48 < dVar51 &&
                 (((((dVar27 < dVar38 && (dVar38 < local_318)) && (dVar55 < dVar39)) &&
                   ((dVar39 < local_2b0 && (dVar33 < dVar25)))) && (dVar25 < dVar51)))))))) {
              fVar19 = pfVar17[8];
              if ((int)fVar19 <= (int)pfVar17[9]) {
                iVar3 = *(int *)(param_1 + 0xb48);
                lVar18 = (longlong)(int)fVar19 + -1;
                do {
                  fVar12 = fVar19;
                  if (0 < iVar3) {
                    fVar12 = *(float *)(*(longlong *)(param_1 + 0xb40) + 4 + lVar18 * 4);
                  }
                  auVar35 = ZEXT816(0x3ff0000000000000);
                  dVar32 = 0.0;
                  dVar33 = 1.0;
                  uVar42 = 0;
                  uVar43 = 0;
                  uVar44 = 0;
                  uVar45 = 0;
                  dVar28 = 1.0;
                  dVar27 = 1.0;
                  dVar51 = 0.0;
                  dVar54 = 0.0;
                  dVar25 = 0.0;
                  dVar38 = 0.0;
                  if ((-1 < (int)fVar12) && ((int)fVar12 < *(int *)(param_1 + 0x728))) {
                    pdVar15 = (double *)&local_178;
                    fVar12 = (float)FUN_1448ac920(&local_178,
                                                  (ulonglong)(uint)fVar12 * 0x80 +
                                                  *(longlong *)(param_1 + 0x720));
                    auVar35._8_8_ = uStack_120;
                    auVar35._0_8_ = local_128;
                    dVar32 = local_168;
                    dVar33 = dStack_160;
                    uVar42 = (undefined4)local_178;
                    uVar43 = local_178._4_4_;
                    uVar44 = (undefined4)uStack_170;
                    uVar45 = uStack_170._4_4_;
                    dVar28 = local_138;
                    dVar27 = dStack_130;
                    dVar51 = local_158;
                    dVar54 = dStack_150;
                    dVar25 = local_148;
                    dVar38 = dStack_140;
                  }
                  dVar39 = auVar35._0_8_;
                  if ((((dVar28 != 0.0) || (NAN(dVar28))) || (dVar27 != 0.0)) ||
                     (((NAN(dVar27) || (dVar39 != 0.0)) || (NAN(dVar39))))) {
                    dStack_300 = dVar54;
                    local_308 = dVar51;
                    auVar36 = *(undefined1 (*) [16])(param_1 + 0x280);
                    dVar40 = auVar36._0_8_;
                    dVar50 = auVar36._8_8_;
                    auVar26 = *(undefined1 (*) [16])(param_1 + 0x290);
                    dVar41 = auVar26._0_8_;
                    dVar48 = auVar26._8_8_;
                    auVar46._8_8_ = dVar27;
                    auVar46._0_8_ = dVar28;
                    auVar57 = minpd(auVar46,auVar36);
                    auVar26 = minpd(auVar35,auVar26);
                    auVar47._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
                    auVar47._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
                    iVar13 = movmskpd(fVar12,auVar47);
                    auVar49._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
                    auVar49._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
                    uVar14 = movmskpd((int)pdVar15,auVar49);
                    local_318 = dVar25;
                    dStack_310 = dVar38;
                    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
                      dVar7 = *(double *)(param_1 + 0x240);
                      dVar8 = *(double *)(param_1 + 0x248);
                      dVar9 = *(double *)(param_1 + 0x250);
                      dVar10 = *(double *)(param_1 + 600);
                      dVar53 = *(double *)(param_1 + 600);
                      dVar52 = *(double *)(param_1 + 600);
                      dVar64 = *(double *)(param_1 + 0x240);
                      dVar67 = *(double *)(param_1 + 0x240);
                      dVar55 = *(double *)(param_1 + 0x248);
                      dVar58 = *(double *)(param_1 + 0x248);
                      dVar59 = *(double *)(param_1 + 0x250);
                      dVar56 = *(double *)(param_1 + 0x250);
                      dVar60 = (double)CONCAT44(uVar45,uVar44) * dVar59 * -1.0 +
                               dVar32 * dVar55 +
                               dVar33 * dVar64 * 1.0 + (double)CONCAT44(uVar43,uVar42) * dVar53;
                      dVar62 = (double)CONCAT44(uVar43,uVar42) * dVar56 * 1.0 +
                               dVar33 * dVar58 +
                               dVar32 * dVar67 * -1.0 + (double)CONCAT44(uVar45,uVar44) * dVar52;
                      auVar66._0_8_ =
                           dVar33 * dVar59 * 1.0 +
                           ((dVar64 * (double)CONCAT44(uVar45,uVar44) * 1.0 + dVar32 * dVar53) -
                           (double)CONCAT44(uVar43,uVar42) * dVar55);
                      auVar66._8_8_ =
                           dVar32 * dVar56 * -1.0 +
                           ((dVar67 * (double)CONCAT44(uVar43,uVar42) * -1.0 + dVar33 * dVar52) -
                           (double)CONCAT44(uVar45,uVar44) * dVar58);
                      dVar51 = dVar51 * dVar40;
                      dVar54 = dVar54 * dVar50;
                      dVar25 = dVar25 * dVar41;
                      dVar38 = dVar38 * dVar48;
                      dVar67 = dVar54 * dVar7 - dVar51 * dVar8;
                      dVar55 = dVar25 * dVar8 - dVar54 * dVar9;
                      dVar32 = dVar51 * dVar9 - dVar25 * dVar7;
                      dVar64 = dVar38 * dVar10 - dVar38 * dVar10;
                      dVar55 = dVar55 + dVar55;
                      dVar32 = dVar32 + dVar32;
                      dVar67 = dVar67 + dVar67;
                      dVar64 = dVar64 + dVar64;
                      dVar28 = dVar28 * dVar40;
                      dVar27 = dVar27 * dVar50;
                      dVar33 = (dVar67 * dVar8 - dVar9 * dVar32) + dVar53 * dVar55 + dVar51 +
                               *(double *)(param_1 + 0x260);
                      dVar51 = (dVar55 * dVar9 - dVar67 * dVar7) + dVar52 * dVar32 + dVar54 +
                               *(double *)(param_1 + 0x268);
                      dVar32 = (dVar32 * dVar7 - dVar8 * dVar55) + dVar53 * dVar67 + dVar25 +
                               *(double *)(param_1 + 0x270);
                      dVar54 = (dVar64 * dVar10 - dVar64 * dVar10) + dVar52 * dVar64 + dVar38 +
                               *(double *)(param_1 + 0x278);
                      local_2d8._8_8_ = auVar35._8_8_ * dVar48;
                      local_2d8._0_8_ = dVar39 * dVar41;
                      local_2c8._0_16_ = auVar36;
                    }
                    else {
                      local_2d8._8_8_ = auVar35._8_8_ * dVar48;
                      local_2d8._0_8_ = dVar39 * dVar41;
                      dVar48 = *(double *)(param_1 + 0x240);
                      dVar52 = *(double *)(param_1 + 0x248);
                      dVar53 = *(double *)(param_1 + 0x250);
                      dVar64 = dVar52 + dVar52;
                      dVar58 = dVar53 + dVar53;
                      dVar67 = dVar48 * (dVar48 + dVar48);
                      local_1a8 = (1.0 - (dVar67 + dVar52 * dVar64)) * dVar41;
                      dVar55 = *(double *)(param_1 + 0x240) * dVar58;
                      dVar38 = *(double *)(param_1 + 600);
                      dVar56 = dVar58 * dVar38;
                      dVar59 = (dVar48 + dVar48) * *(double *)(param_1 + 600);
                      dVar38 = dVar64 * dVar38;
                      local_1b8 = (dVar38 + dVar55) * dVar41;
                      local_1d8 = (dVar64 * dVar48 - dVar56) * dVar50;
                      dStack_1b0 = (dVar58 * dVar52 - dVar59) * dVar41;
                      local_2e8 = dVar28 * dVar40;
                      dStack_2e0 = dVar27 * dVar50;
                      local_1f8 = (1.0 - (dVar53 * dVar58 + dVar52 * dVar64)) * dVar40;
                      dStack_1d0 = (1.0 - (dVar53 * dVar58 + dVar67)) * dVar50;
                      dStack_1f0 = (dVar64 * dVar48 + dVar56) * dVar40;
                      local_1c8 = (dVar58 * dVar52 + dVar59) * dVar50;
                      local_1e8 = (dVar55 - dVar38) * dVar40;
                      uStack_1e0 = 0;
                      uStack_1c0 = 0;
                      uStack_1a0 = 0;
                      local_198 = *(undefined8 *)(param_1 + 0x260);
                      uStack_190 = *(undefined8 *)(param_1 + 0x268);
                      local_188 = *(undefined8 *)(param_1 + 0x270);
                      uStack_180 = 0x3ff0000000000000;
                      dVar41 = (double)CONCAT44(uVar43,uVar42) + (double)CONCAT44(uVar43,uVar42);
                      dVar50 = (double)CONCAT44(uVar45,uVar44) + (double)CONCAT44(uVar45,uVar44);
                      dVar53 = dVar32 + dVar32;
                      dVar38 = (double)CONCAT44(uVar43,uVar42) * dVar41;
                      dVar40 = (double)CONCAT44(uVar45,uVar44) * dVar50;
                      local_228 = (1.0 - (dVar38 + dVar40)) * dVar39;
                      dVar48 = dVar50 * (double)CONCAT44(uVar43,uVar42);
                      dVar52 = dVar53 * (double)CONCAT44(uVar45,uVar44);
                      dVar64 = (double)CONCAT44(uVar43,uVar42) * dVar53;
                      dVar41 = dVar41 * dVar33;
                      local_238 = (dVar64 + dVar50 * dVar33) * dVar39;
                      local_258 = (dVar48 - dVar53 * dVar33) * dVar27;
                      dStack_230 = (dVar52 - dVar41) * dVar39;
                      local_278 = (1.0 - (dVar32 * dVar53 + dVar40)) * dVar28;
                      dStack_250 = (1.0 - (dVar32 * dVar53 + dVar38)) * dVar27;
                      dStack_270 = (dVar48 + dVar53 * dVar33) * dVar28;
                      local_248 = (dVar52 + dVar41) * dVar27;
                      local_268 = (dVar64 - dVar50 * dVar33) * dVar28;
                      uStack_260 = 0;
                      uStack_240 = 0;
                      uStack_220 = 0;
                      local_208._8_8_ = 0x3ff0000000000000;
                      local_208._0_8_ = dVar25;
                      local_218 = dVar51;
                      dStack_210 = dVar54;
                      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                      dVar27 = dStack_2e0;
                      dVar28 = local_2e8;
                      auVar36 = _DAT_149934d80;
                      local_318 = local_168;
                      dVar32 = local_168 * local_168 +
                               local_178 * local_178 + uStack_170 * uStack_170;
                      dVar51 = local_148 * local_148 +
                               local_158 * local_158 + dStack_150 * dStack_150;
                      dVar54 = local_128 * local_128 +
                               local_138 * local_138 + dStack_130 * dStack_130;
                      uVar20 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
                      dVar33 = (double)(~uVar20 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar32)) & uVar20);
                      uVar20 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
                      dVar51 = (double)(~uVar20 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar51)) & uVar20);
                      uVar20 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
                      dVar32 = (double)(~uVar20 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar54)) & uVar20);
                      auVar23._8_8_ = -(ulonglong)(0.0 <= dStack_2e0);
                      auVar23._0_8_ = -(ulonglong)(0.0 <= local_2e8);
                      auVar26 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
                      dVar54 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) &
                                        0xbff0000000000000 |
                                       -(ulonglong)(0.0 <= (double)local_2d8._0_8_) &
                                       0x3ff0000000000000);
                      dVar25 = auVar26._0_8_;
                      local_178 = local_178 * dVar33 * dVar25;
                      uStack_170 = uStack_170 * dVar33 * dVar25;
                      local_168 = dVar33 * local_168 * dVar25;
                      dVar33 = auVar26._8_8_;
                      local_148 = dVar51 * local_148 * dVar33;
                      dStack_150 = dStack_150 * dVar51 * dVar33;
                      local_158 = dVar33 * local_158 * dVar51;
                      local_128 = dVar32 * local_128 * dVar54;
                      dStack_130 = dStack_130 * dVar32 * dVar54;
                      local_138 = dVar54 * local_138 * dVar32;
                      FUN_14481fd10(&local_298,&local_178);
                      dVar32 = local_288 * local_288 + local_298 * local_298;
                      dVar33 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                      auVar31._0_8_ = dVar32 + dVar33;
                      auVar31._8_8_ = dVar32 + dVar33;
                      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
                      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
                      auVar26 = sqrtpd(auVar31,auVar31);
                      auVar36 = divpd(auVar36,auVar26);
                      auVar37._0_8_ = auVar36._0_8_ * local_288;
                      auVar37._8_8_ = auVar36._8_8_ * dStack_280;
                      dVar60 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_));
                      dVar62 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_));
                      auVar66 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar24);
                      dVar54 = 0.0;
                      dVar32 = local_108;
                      dVar33 = local_118;
                      dVar51 = dStack_110;
                    }
                    iVar13 = (int)param_4[1];
                    *(uint *)(param_4 + 1) = iVar13 + 1U;
                    if (*(uint *)((longlong)param_4 + 0xc) < iVar13 + 1U) {
                      FUN_144a2c682(param_4,iVar13);
                    }
                    lVar4 = *param_4;
                    pdVar15 = (double *)((longlong)iVar13 * 0x60);
                    *(double *)(lVar4 + (longlong)pdVar15) = dVar60;
                    ((double *)(lVar4 + (longlong)pdVar15))[1] = dVar62;
                    *(undefined1 (*) [16])(lVar4 + 0x10 + (longlong)pdVar15) = auVar66;
                    pdVar1 = (double *)(lVar4 + 0x20 + (longlong)pdVar15);
                    *pdVar1 = dVar33;
                    pdVar1[1] = dVar51;
                    pdVar1 = (double *)(lVar4 + 0x30 + (longlong)pdVar15);
                    *pdVar1 = dVar32;
                    pdVar1[1] = dVar54;
                    auVar6._8_4_ = SUB84(dVar27,0);
                    auVar6._0_8_ = dVar28;
                    auVar6._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                    *(undefined1 (*) [16])(lVar4 + 0x40 + (longlong)pdVar15) = auVar6;
                    puVar2 = (undefined8 *)(lVar4 + 0x50 + (longlong)pdVar15);
                    *puVar2 = local_2d8._0_8_;
                    puVar2[1] = local_2d8._8_8_;
                  }
                  lVar18 = lVar18 + 1;
                  fVar19 = (float)((int)fVar19 + 1);
                  dVar28 = local_318;
                } while (lVar18 < (int)pfVar17[9]);
              }
            }
            else if ((int)fVar19 <= (int)pfVar17[7]) {
              do {
                FUN_14352c87a(param_1,param_2,fVar19,param_4);
                bVar5 = (int)fVar19 < (int)pfVar17[7];
                fVar19 = (float)((int)fVar19 + 1);
                dVar28 = local_318;
              } while (bVar5);
            }
          }
        }
      }
    }
  }
  local_318 = dVar28;
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14352ddaa FUN_14352ddaa body=3137 status=ok
// SIG undefined FUN_14352ddaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352ddaa(longlong param_1,double *param_2,uint param_3,undefined8 *param_4,
                  longlong *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [8];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auStack_348 [32];
  longlong *local_328;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [8];
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_318 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar33 = local_318._0_8_;
  dVar35 = local_318._8_8_;
  auVar20 = *(undefined1 (*) [16])(param_1 + 0x290);
  dVar17 = auVar20._0_8_;
  dStack_2f0 = auVar20._8_8_;
  auVar14 = minpd(_DAT_149934d80,local_318);
  auVar19 = minpd(ZEXT816(0x3ff0000000000000),auVar20);
  auVar20._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  iVar4 = movmskpd((int)param_1,auVar20);
  auVar14._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  uVar5 = movmskpd((int)param_2,auVar14);
  pfVar9 = (float *)((ulonglong)param_3 * 0x40 + **(longlong **)(param_1 + 0xb10));
  if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
    dVar28 = *(double *)(param_1 + 0x240);
    dVar27 = *(double *)(param_1 + 0x248);
    dVar31 = *(double *)(param_1 + 0x250);
    dVar34 = *(double *)(param_1 + 600);
    dVar22 = *(double *)(param_1 + 600);
    dVar13 = *(double *)(param_1 + 600);
    dVar33 = *(double *)*(undefined1 (*) [12])(param_1 + 0xb28) * dVar33;
    dVar35 = *(double *)(param_1 + 0xb30) * dVar35;
    dVar39 = *(double *)(param_1 + 0xb38) * dVar17;
    dVar41 = dStack_2f0 * 0.0;
    dVar25 = dVar35 * dVar28 - dVar33 * dVar27;
    dVar32 = dVar39 * dVar27 - dVar35 * dVar31;
    dVar23 = dVar33 * dVar31 - dVar39 * dVar28;
    dVar26 = dVar41 * dVar34 - dVar41 * dVar34;
    dVar32 = dVar32 + dVar32;
    dVar23 = dVar23 + dVar23;
    dVar25 = dVar25 + dVar25;
    dVar26 = dVar26 + dVar26;
    dVar30 = *(double *)(param_1 + 0x248);
    dVar38 = *(double *)(param_1 + 0x248);
    dVar12 = dVar31 * 0.0 * -1.0 +
             dVar30 * 0.0 + *(double *)(param_1 + 0x240) * 1.0 * 1.0 + dVar22 * 0.0;
    dVar24 = dVar31 * 0.0 * 1.0 +
             dVar38 * 1.0 + *(double *)(param_1 + 0x240) * 0.0 * -1.0 + dVar13 * 0.0;
    auVar19._0_8_ =
         *(double *)(param_1 + 0x250) * 1.0 * 1.0 +
         ((dVar28 * 0.0 * 1.0 + dVar22 * 0.0) - dVar30 * 0.0);
    auVar19._8_8_ =
         *(double *)(param_1 + 0x250) * 0.0 * -1.0 +
         ((dVar28 * 0.0 * -1.0 + dVar13 * 1.0) - dVar38 * 0.0);
    local_118 = (dVar25 * dVar27 - dVar31 * dVar23) + dVar22 * dVar32 + dVar33 +
                *(double *)(param_1 + 0x260);
    dStack_110 = (dVar32 * dVar31 - dVar25 * dVar28) + dVar13 * dVar23 + dVar35 +
                 *(double *)(param_1 + 0x268);
    dVar33 = (dVar26 * dVar34 - dVar26 * dVar34) + dVar13 * dVar26 + dVar41 +
             *(double *)(param_1 + 0x278);
    local_2e8._8_4_ = SUB84(dVar33,0);
    local_2e8._0_8_ =
         (dVar23 * dVar28 - dVar27 * dVar32) + dVar22 * dVar25 + dVar39 +
         *(double *)(param_1 + 0x270);
    local_2e8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    auVar29 = (undefined1  [8])(dVar17 * 1.0);
    dVar33 = dStack_2f0 * 0.0;
  }
  else {
    dVar38 = *(double *)(param_1 + 0x240);
    dVar30 = *(double *)(param_1 + 0x248);
    dVar22 = *(double *)(param_1 + 0x250);
    dVar24 = dVar30 + dVar30;
    dVar25 = dVar22 + dVar22;
    dVar13 = dVar38 * (dVar38 + dVar38);
    local_1f8 = ((double)DAT_149934d80 - (dVar22 * dVar25 + dVar30 * dVar24)) * dVar33;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar22 * dVar25 + dVar13)) * dVar35;
    dVar12 = *(double *)(param_1 + 0x240) * dVar25;
    dVar22 = *(double *)(param_1 + 600);
    dVar26 = dVar25 * dVar22;
    dVar28 = (dVar38 + dVar38) * *(double *)(param_1 + 600);
    dVar22 = dVar24 * dVar22;
    local_1d8 = (dVar24 * dVar38 - dVar26) * dVar35;
    dStack_1b0 = (dVar25 * dVar30 - dVar28) * dVar17;
    local_1b8 = (dVar22 + dVar12) * dVar17;
    dStack_1f0 = (dVar24 * dVar38 + dVar26) * dVar33;
    local_1c8 = (dVar25 * dVar30 + dVar28) * dVar35;
    local_1e8 = (dVar12 - dVar22) * dVar33;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1a8 = (1.0 - (dVar13 + dVar30 * dVar24)) * dVar17;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(param_1 + 0x260);
    uStack_190 = *(undefined8 *)(param_1 + 0x268);
    local_188 = *(undefined8 *)(param_1 + 0x270);
    local_2f8 = (undefined1  [8])(dVar17 * 1.0);
    dStack_2f0 = dStack_2f0 * 0.0;
    uStack_180 = 0x3ff0000000000000;
    local_278 = 0x3ff0000000000000;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0x3ff0000000000000;
    uStack_220 = 0;
    local_218._12_4_ = (int)((ulonglong)*(double *)(param_1 + 0xb30) >> 0x20);
    local_218._0_12_ = *(undefined1 (*) [12])(param_1 + 0xb28);
    uStack_200 = 0x3ff0000000000000;
    local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_208 = *(double *)(param_1 + 0xb38);
    FUN_1447fea8d(&local_178);
    dVar33 = dStack_2f0;
    auVar29 = local_2f8;
    auVar20 = _DAT_149934d80;
    dVar35 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_308 = local_158;
    dVar22 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_2d8 = local_128;
    dVar17 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar11 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
    dVar35 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar11);
    uVar11 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
    dVar22 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar22)) & uVar11);
    uVar11 = -(ulonglong)(0.0 <= dVar17 + -9.99999993922529e-09);
    dVar17 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar17)) & uVar11);
    auVar15._8_8_ = -(ulonglong)(0.0 <= (double)local_318._8_8_);
    auVar15._0_8_ = -(ulonglong)(0.0 <= (double)local_318._0_8_);
    auVar14 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar15);
    dVar38 = (double)(~-(ulonglong)(0.0 <= (double)local_2f8) & 0xbff0000000000000 |
                     (ulonglong)
                     ((uint)(-(ulonglong)(0.0 <= (double)local_2f8) >> 0x20) & 0x3ff00000) << 0x20);
    dVar13 = auVar14._0_8_;
    local_178 = local_178 * dVar35 * dVar13;
    local_170 = local_170 * dVar35 * dVar13;
    local_168 = dVar35 * local_168 * dVar13;
    dVar35 = auVar14._8_8_;
    local_148 = dVar22 * local_148 * dVar35;
    local_150 = local_150 * dVar22 * dVar35;
    local_158 = dVar35 * local_158 * dVar22;
    local_128 = dVar17 * local_128 * dVar38;
    local_130 = local_130 * dVar17 * dVar38;
    local_138 = dVar38 * local_138 * dVar17;
    FUN_14481fd10(&local_298,&local_178);
    dVar17 = local_288 * local_288 + local_298 * local_298;
    dVar35 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar18._0_8_ = dVar17 + dVar35;
    auVar18._8_8_ = dVar17 + dVar35;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar14 = sqrtpd(auVar18,auVar18);
    auVar20 = divpd(auVar20,auVar14);
    auVar21._0_8_ = auVar20._0_8_ * local_288;
    auVar21._8_8_ = auVar20._8_8_ * dStack_280;
    dVar12 = (double)((ulonglong)(local_298 * auVar20._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
    dVar24 = (double)((ulonglong)(dStack_290 * auVar20._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
    auVar19 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar16);
    local_2e8._8_8_ = 0;
    local_2e8._0_8_ = local_108;
  }
  dVar22 = (double)pfVar9[1];
  dVar30 = (double)*pfVar9;
  dVar17 = auVar19._0_8_;
  dVar38 = auVar19._8_8_;
  dVar25 = dVar17 + dVar17;
  dVar26 = dVar12 + dVar12;
  dVar28 = dVar24 + dVar24;
  dVar35 = dVar12 * dVar25;
  dStack_300 = dVar12 * dVar26;
  local_2d8 = dVar28 * dVar38;
  dStack_2d0 = dVar26 * dVar38;
  auVar37._0_8_ = (double)local_318._8_8_ * (dVar28 * dVar12 - dVar38 * dVar25);
  auVar37._8_8_ = (double)auVar29 * (dVar25 * dVar24 - dVar38 * dVar26);
  unique0x100004d6 = SUB84(dVar33,0);
  local_2f8 = auVar29;
  unique0x100004da = (int)((ulonglong)dVar33 >> 0x20);
  auVar36._0_8_ = (local_2d8 + dVar35) * (double)auVar29;
  auVar36._8_8_ = (dStack_2d0 + dStack_300) * dVar33;
  auVar20 = blendpd(auVar36,auVar37,2);
  dVar33 = (1.0 - (dVar25 * dVar17 + dVar28 * dVar24)) * (double)local_318._0_8_;
  dVar17 = (1.0 - (dVar25 * dVar17 + dVar26 * dVar12)) * (double)local_318._8_8_;
  auVar2._8_4_ = SUB84(dVar17,0);
  auVar2._0_8_ = dVar33;
  auVar2._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar14 = blendpd(auVar37,auVar2,2);
  dVar13 = (dVar38 * dVar25 + dVar28 * dVar12) * (double)local_318._0_8_;
  dVar38 = (dVar38 * dVar26 + dVar25 * dVar24) * (double)local_318._8_8_;
  auVar40._8_4_ = SUB84(dVar22,0);
  auVar40._0_8_ = dVar30;
  auVar40._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  dVar39 = (dVar30 + (double)pfVar9[4]) * 0.5;
  dVar41 = (auVar40._8_8_ + (double)pfVar9[5]) * 0.5;
  dVar17 = ((double)pfVar9[2] + (double)pfVar9[6]) * 0.5;
  dVar30 = ((double)pfVar9[4] - dVar30) * 0.5;
  dVar22 = ((double)pfVar9[5] - dVar22) * 0.5;
  dVar27 = ((double)pfVar9[6] - (double)pfVar9[2]) * 0.5;
  local_118 = dVar17 * auVar20._0_8_ + auVar14._0_8_ * dVar41 + dVar39 * dVar33 + local_118;
  dStack_110 = dVar17 * auVar20._8_8_ + auVar14._8_8_ * dVar41 + dVar39 * dVar13 + dStack_110;
  dVar31 = ABS(dVar27 * auVar20._0_8_) + ABS(auVar14._0_8_ * dVar22) + ABS(dVar30 * dVar33);
  dVar34 = ABS(dVar27 * auVar20._8_8_) + ABS(auVar14._8_8_ * dVar22) + ABS(dVar30 * dVar13);
  dVar13 = local_118 + dVar31;
  dVar25 = dStack_110 + dVar34;
  dVar33 = *param_2;
  if (dVar33 <= dVar13) {
    local_118 = local_118 - dVar31;
    dStack_110 = dStack_110 - dVar34;
    dVar31 = param_2[3];
    if (((local_118 <= dVar31) && (dVar34 = param_2[1], dVar34 <= dVar25)) &&
       (local_308 = param_2[4], local_2c0 = dVar31, local_2b8 = dStack_110, dStack_2b0 = dStack_110,
       dStack_110 <= local_308)) {
      dVar32 = (double)local_318._0_8_ * (dVar35 - local_2d8);
      dVar35 = (double)auVar29 * (1.0 - (dVar26 * dVar12 + dVar28 * dVar24));
      dVar12 = (double)local_2e8._0_8_ + dVar17 * dVar35 + dVar41 * dVar38 + dVar39 * dVar32;
      dVar38 = ABS(dVar35 * dVar27) + ABS(dVar38 * dVar22) + ABS(dVar32 * dVar30);
      dVar22 = dVar12 + dVar38;
      dVar17 = param_2[2];
      dVar35 = local_308;
      local_2c8 = dVar34;
      if (dVar17 <= dVar22) {
        dVar12 = dVar12 - dVar38;
        dVar38 = param_2[5];
        if (dVar12 <= dVar38) {
          fVar7 = pfVar9[3];
          if (((int)fVar7 < 0) ||
             ((((dVar33 < local_118 && (local_118 < dVar31)) &&
               ((dVar34 < dStack_110 && ((dStack_110 < local_308 && (dVar17 < dVar12)))))) &&
              ((dVar12 < dVar38 &&
               (((((dVar33 < dVar13 && (dVar13 < dVar31)) && (dVar34 < dVar25)) &&
                 ((dVar25 < local_308 && (dVar17 < dVar22)))) && (dVar22 < dVar38)))))))) {
            fVar7 = pfVar9[8];
            if ((int)fVar7 <= (int)pfVar9[9]) {
              iVar4 = *(int *)(param_1 + 0xb48);
              lVar8 = (longlong)(int)fVar7 + -1;
              local_2f8._0_4_ = iVar4;
              do {
                fVar10 = fVar7;
                if (0 < iVar4) {
                  fVar10 = *(float *)(*(longlong *)(param_1 + 0xb40) + 4 + lVar8 * 4);
                }
                if (((-1 < (int)fVar10) && ((int)fVar10 < *(int *)(param_1 + 0x728))) &&
                   (cVar3 = (*(code *)*param_4)(param_4[1],
                                                (ulonglong)(uint)fVar10 * 0x80 +
                                                *(longlong *)(param_1 + 0x720)), cVar3 != '\0')) {
                  lVar6 = (longlong)(int)param_5[1];
                  uVar5 = (int)param_5[1] + 1;
                  *(uint *)(param_5 + 1) = uVar5;
                  if (*(uint *)((longlong)param_5 + 0xc) < uVar5) {
                    local_318._0_8_ = lVar6;
                    FUN_1446f48e2(param_5,lVar6);
                    lVar6 = local_318._0_8_;
                  }
                  *(float *)(*param_5 + lVar6 * 4) = fVar10;
                  iVar4 = local_2f8._0_4_;
                }
                lVar8 = lVar8 + 1;
                fVar7 = (float)((int)fVar7 + 1);
                dVar35 = local_308;
              } while (lVar8 < (int)pfVar9[9]);
            }
          }
          else if ((int)fVar7 <= (int)pfVar9[7]) {
            do {
              local_2a8 = *param_4;
              local_2a0 = param_4[1];
              local_328 = param_5;
              FUN_14352ddaa(param_1,param_2,fVar7,&local_2a8);
              bVar1 = (int)fVar7 < (int)pfVar9[7];
              fVar7 = (float)((int)fVar7 + 1);
              dVar35 = local_308;
            } while (bVar1);
          }
        }
      }
    }
  }
  local_308 = dVar35;
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14352e9ec FUN_14352e9ec body=307 status=ok
// SIG undefined FUN_14352e9ec(void)

void FUN_14352e9ec(void)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1461130fe(&local_30,0x10,1,0);
  uVar5 = (ulonglong)local_20;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      lVar2 = *(longlong *)(local_30 + (uVar5 & 0xffffffff) * 8);
      if ((lVar2 != 0) && (lVar4 = lVar2, (*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        do {
          if ((*(uint *)(lVar4 + 8) & 0x30) != 0) goto LAB_14352eabb;
          plVar1 = (longlong *)(lVar4 + 0x20);
          lVar4 = *plVar1;
        } while (*plVar1 != 0);
        FUN_143529292(lVar2,0,1);
        if ((~*(byte *)(lVar2 + 0x9c) & 3) == 0) {
          bVar3 = *(byte *)(lVar2 + 0x9d);
          if ((bVar3 & 1) != 0) {
            if ((*(longlong *)(lVar2 + 0xb0) != 0) || (lVar4 = FUN_1448abda6(lVar2), lVar4 != 0))
            goto LAB_14352eabb;
            bVar3 = *(byte *)(lVar2 + 0x9d);
          }
          *(byte *)(lVar2 + 0x9d) = bVar3 | 1;
          FUN_1401057d4(lVar2);
          FUN_14010586c(&DAT_14cad0140,lVar2);
        }
      }
LAB_14352eabb:
      uVar5 = (longlong)(int)local_20;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_20 = (uint)uVar5;
        if ((longlong)local_28 <= (longlong)uVar5) break;
      } while (*(longlong *)(local_30 + uVar5 * 8) == 0);
    } while ((-2 < (longlong)uVar6) && ((int)local_20 < local_28));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14352eb20 FUN_14352eb20 body=69 status=ok
// SIG undefined FUN_14352eb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352eb20(void)

{
  _DAT_14cae4310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352eb62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4318,1);
  return;
}



// FUNCTION 14352eb65 FUN_14352eb65 body=69 status=ok
// SIG undefined FUN_14352eb65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352eb65(void)

{
  _DAT_14cae4320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352eba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4328,1);
  return;
}



// FUNCTION 14352ebaa FUN_14352ebaa body=69 status=ok
// SIG undefined FUN_14352ebaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352ebaa(void)

{
  _DAT_14cae4338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352ebec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4340,1);
  return;
}



// FUNCTION 14352ebef FUN_14352ebef body=56 status=ok
// SIG undefined FUN_14352ebef(void)

void FUN_14352ebef(void)

{
  int *piVar1;
  longlong *plVar2;
  
  if (DAT_14cae4398 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14cae4388;
  if (DAT_14cae4388 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cae4388 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014352ec1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14352ec27 FUN_14352ec27 body=300 status=ok
// SIG undefined FUN_14352ec27(void)

void FUN_14352ec27(void)

{
  void *_Src;
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined2 *)0x0;
  local_28 = *(int *)(DAT_14cae4348 + 1);
  lVar1 = (longlong)local_28;
  _Src = (void *)*DAT_14cae4348;
  if (lVar1 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar1 * 2);
    lVar1 = DAT_14cb0d2b0;
    if (1 < local_28) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      puVar2 = local_30;
      if (local_28 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))
                ((longlong *)(lVar1 + 0x28),DAT_14cb10918,puVar2,&DAT_14c872ee0);
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14352ed54 FUN_14352ed54 body=412 status=ok
// SIG undefined FUN_14352ed54(void)

void FUN_14352ed54(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4,
                  undefined1 param_5,int param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x410);
  lVar4 = *(longlong *)(param_1 + 0x410);
  uVar3 = *(uint *)(param_1 + 0x418);
  lVar7 = (longlong)(int)uVar3;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + 0x20 + lVar5) == param_4) {
        if (lVar5 + lVar4 != 0) goto LAB_14352ee39;
        break;
      }
      lVar5 = lVar5 + 0x30;
    } while (lVar7 * 0x30 != lVar5);
    if (0 < (int)uVar3) {
      lVar5 = 0x2c;
      uVar6 = 0;
      do {
        if (*(int *)(lVar4 + lVar5) < param_6) {
          local_58 = *param_3;
          uStack_50 = param_3[1];
          local_68 = *param_2;
          uStack_64 = param_2[1];
          uStack_60 = param_2[2];
          uStack_5c = param_2[3];
          *(uint *)(param_1 + 0x418) = uVar3 + 1;
          if (*(uint *)(param_1 + 0x41c) <= uVar3) {
            FUN_147af42b0(plVar1,uVar3);
            lVar4 = *plVar1;
          }
          memmove((void *)(lVar4 + lVar5 + 4),(void *)(lVar4 + lVar5 + -0x2c),
                  (ulonglong)(uVar3 - (int)uVar6) * 0x30);
          lVar4 = *plVar1;
          puVar2 = (undefined4 *)(lVar4 + -0x2c + lVar5);
          *puVar2 = local_68;
          puVar2[1] = uStack_64;
          puVar2[2] = uStack_60;
          puVar2[3] = uStack_5c;
          puVar2 = (undefined4 *)(lVar4 + -0x1c + lVar5);
          *puVar2 = (undefined4)local_58;
          puVar2[1] = local_58._4_4_;
          puVar2[2] = (undefined4)uStack_50;
          puVar2[3] = uStack_50._4_4_;
          *(longlong *)(lVar4 + -0xc + lVar5) = param_4;
          *(undefined1 *)(lVar4 + -4 + lVar5) = param_5;
          *(int *)(lVar4 + lVar5) = param_6;
          goto LAB_14352ee39;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x30;
      } while (uVar3 != uVar6);
    }
  }
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  *(uint *)(param_1 + 0x418) = uVar3 + 1;
  if (*(uint *)(param_1 + 0x41c) < uVar3 + 1) {
    FUN_147af42b0(plVar1,(ulonglong)uVar3);
    lVar4 = *plVar1;
  }
  lVar7 = lVar7 * 0x30;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar7);
  *puVar2 = (undefined4)local_58;
  puVar2[1] = local_58._4_4_;
  puVar2[2] = (undefined4)uStack_50;
  puVar2[3] = uStack_50._4_4_;
  puVar2 = (undefined4 *)(lVar4 + lVar7);
  *puVar2 = local_68;
  puVar2[1] = uStack_64;
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_5c;
  *(longlong *)(lVar4 + 0x20 + lVar7) = param_4;
  *(undefined1 *)(lVar4 + 0x28 + lVar7) = param_5;
  *(int *)(lVar4 + 0x2c + lVar7) = param_6;
LAB_14352ee39:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14352eef1 FUN_14352eef1 body=59 status=ok
// SIG undefined FUN_14352eef1(void)

void FUN_14352eef1(void)

{
  FUN_144760e21(DAT_14cae4870,DAT_14cae4878);
  if (DAT_14cae4870 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352ef1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cae4848);
  return;
}



// FUNCTION 14352ef2c FUN_14352ef2c body=49 status=ok
// SIG undefined FUN_14352ef2c(void)

void FUN_14352ef2c(void)

{
  FUN_144760e21(DAT_14cae45c8,DAT_14cae45d0);
  if (DAT_14cae45c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14352ef5d FUN_14352ef5d body=69 status=ok
// SIG undefined FUN_14352ef5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352ef5d(void)

{
  _DAT_14cae45e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352ef9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae45e8,1);
  return;
}



// FUNCTION 14352efa2 FUN_14352efa2 body=69 status=ok
// SIG undefined FUN_14352efa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352efa2(void)

{
  _DAT_14cae45f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352efe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4600,1);
  return;
}



// FUNCTION 14352efe7 FUN_14352efe7 body=69 status=ok
// SIG undefined FUN_14352efe7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14352efe7(void)

{
  _DAT_14cae4610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014352f029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4618,1);
  return;
}



// FUNCTION 14352f02c FUN_14352f02c body=94 status=ok
// SIG undefined FUN_14352f02c(void)

void FUN_14352f02c(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x3e0) = param_2;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 1000) = param_3;
  return;
}



// FUNCTION 14352f08a FUN_14352f08a body=1353 status=ok
// SIG undefined FUN_14352f08a(void)

longlong FUN_14352f08a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined8 *local_280;
  undefined1 *local_278;
  undefined8 local_270;
  wchar_t *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  code **local_250;
  code *local_248;
  code *local_240;
  code *local_238;
  double local_230;
  double local_228;
  undefined1 local_220 [4];
  undefined4 local_21c;
  undefined4 local_17c;
  undefined1 local_168 [24];
  undefined4 local_150;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108 [2];
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined2 local_dc;
  undefined1 local_da;
  undefined2 local_d9;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (((*(byte *)(param_1 + 0x3a0) & 8) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x390), plVar1[0x89] == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x408);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x448);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x430);
      }
    }
    goto LAB_14352f428;
  }
  (**(code **)(*plVar1 + 0x718))(plVar1,&local_120,local_108);
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x448) + 0x430);
  local_cc = 0;
  local_c8 = 0x101;
  local_a0 = 0;
  local_98 = 0x800000000;
  local_80 = 0;
  local_78 = 0x400000000;
  local_e0 = 1;
  local_d4 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_df = 1;
  local_dd = 0;
  local_d0 = 0;
  local_dc = 0;
  local_da = 0;
  if (lVar9 != 0) {
    local_90 = *(undefined4 *)(lVar9 + 0xc);
    local_78 = 0x400000001;
    uStack_e8 = *(undefined8 *)(lVar9 + 0x18);
  }
  local_d9 = 0x101;
  memset(local_220,0,0x100);
  local_150 = 0xffffffff;
  local_21c = 0x3f800000;
  local_17c = 0xffffffff;
  uVar8 = FUN_1447210f0(param_1);
  dVar5 = (double)FUN_144719204(local_108[0],0x4076800000000000);
  dVar6 = (double)FUN_144719204(local_100,0x4076800000000000);
  dVar3 = sin(dVar5 * 0.017453292519943295);
  dVar5 = cos(dVar5 * 0.017453292519943295);
  dVar4 = sin(dVar6 * 0.017453292519943295);
  dVar6 = cos(dVar6 * 0.017453292519943295);
  local_228 = dVar3 * 100000.0 + local_110;
  local_230 = dVar4 * dVar5 * 100000.0 + local_118;
  local_238 = (code *)(dVar6 * dVar5 * 100000.0 + local_120);
  local_278 = &DAT_14cad0f10;
  local_288 = 1;
  local_280 = &local_f0;
  cVar7 = FUN_1400b50cc(uVar8,local_220,&local_120,&local_238);
  if ((cVar7 == '\0') || (lVar9 = FUN_14485cccc(local_168), lVar9 == 0)) {
LAB_14352f3fd:
    lVar9 = *(longlong *)(param_1 + 0x408);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x400);
    if (lVar2 != 0) {
      if (DAT_14cac9ca8 == 0) {
        local_238 = FUN_141030f22;
        local_240 = FUN_14081d0ea;
        local_248 = FUN_14081d0ea;
        local_258 = &LAB_1478c0a72;
        local_260 = &LAB_1417b2375;
        local_268 = L"Engine";
        local_270 = 0x1000000000;
        local_278 = (undefined1 *)CONCAT44(local_278._4_4_,0x10000004);
        local_280 = (undefined8 *)CONCAT44(local_280._4_4_,8);
        local_288 = 0x390;
        local_250 = &local_238;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        if (DAT_14cac9ca8 == 0) goto LAB_14352f404;
      }
      if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
           == DAT_14cac9ca8 + 0x30)) && (lVar2 = *(longlong *)(param_1 + 0x400), lVar2 != 0)) {
        if ((DAT_14c950c29 == '\x01') && (FUN_1456cec3c(), DAT_14cac9ca8 == 0)) {
          local_238 = FUN_141030f22;
          local_240 = FUN_14081d0ea;
          local_248 = FUN_14081d0ea;
          local_258 = &LAB_1478c0a72;
          local_260 = &LAB_1417b2375;
          local_268 = L"Engine";
          local_270 = 0x1000000000;
          local_278 = (undefined1 *)CONCAT44(local_278._4_4_,0x10000004);
          local_280 = (undefined8 *)CONCAT44(local_280._4_4_,8);
          local_288 = 0x390;
          local_250 = &local_238;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          if (DAT_14cac9ca8 != 0) goto LAB_14352f369;
LAB_14352f373:
          lVar10 = 0;
        }
        else {
LAB_14352f369:
          if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) goto LAB_14352f373;
          lVar10 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
              DAT_14cac9ca8 + 0x30) {
            lVar10 = lVar2;
          }
        }
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_14352f3fd;
      }
    }
  }
LAB_14352f404:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_14352f428:
  if ((local_70 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 14352f5d4 FUN_14352f5d4 body=428 status=ok
// SIG undefined FUN_14352f5d4(void)

void FUN_14352f5d4(void)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae4810) && (FUN_144b3d300(&DAT_14cae4810), DAT_14cae4810 == -1)) {
    local_28 = "ImageWrapper";
    local_20 = 0xc;
    local_1c = 0;
    uVar3 = FUN_14001a6c0(&local_28,1);
    DAT_14cae4808 = (ulonglong)uVar3;
    _Init_thread_footer(&DAT_14cae4810);
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14352f671;
    }
    if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1447c1074(DAT_14cae4808);
    return;
  }
LAB_14352f671:
  uVar2 = DAT_14cae4808;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1402c9134(&DAT_14c874628,uVar2,&local_28,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14352f78c FUN_14352f78c body=3 status=ok
// SIG undefined FUN_14352f78c(void)

undefined8 FUN_14352f78c(void)

{
  return 0;
}



// FUNCTION 14352f790 FUN_14352f790 body=141 status=ok
// SIG undefined FUN_14352f790(void)

undefined8 FUN_14352f790(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  uVar2 = 0;
  cVar1 = FUN_142781902(&local_28,puVar3,0);
  if (cVar1 != '\0') {
    local_38 = (undefined4)local_28;
    uStack_34 = local_28._4_4_;
    uStack_30 = (undefined4)uStack_20;
    uStack_2c = uStack_20._4_4_;
    uVar2 = FUN_14352f81e();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14352f81e FUN_14352f81e body=186 status=ok
// SIG undefined FUN_14352f81e(void)

undefined8 FUN_14352f81e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = CONCAT22(uStack_3c._2_2_,0x201);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  plVar4 = (longlong *)FUN_14352f5d4();
  if (plVar4 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar1,uVar2,&local_48);
    if (cVar3 == '\0') {
      uVar5 = 0;
    }
    else {
      local_68 = (undefined4)local_48;
      uStack_64 = local_48._4_4_;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      local_58 = local_38;
      uVar5 = FUN_14352f8da(&local_68);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14352f8da FUN_14352f8da body=310 status=ok
// SIG undefined FUN_14352f8da(void)

longlong * FUN_14352f8da(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  byte local_54;
  undefined1 local_53;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar5 = *(byte *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)bVar5;
  if (uVar6 < 9) {
    uVar4 = (&DAT_14a9207ad)[uVar6];
    bVar5 = (&DAT_14a9207a4)[uVar6];
  }
  else {
    uVar4 = 0;
  }
  local_68 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  plVar3 = (longlong *)
           FUN_1437337e4(*(undefined4 *)param_1,*(undefined4 *)((longlong)param_1 + 4),uVar4,0);
  if (plVar3 != (longlong *)0x0) {
    *(byte *)((longlong)plVar3 + 0x104) = *(byte *)((longlong)plVar3 + 0x104) | 2;
    lVar2 = **(longlong **)(plVar3[0x29] + 0x18);
    FUN_14031515e((undefined8 *)(lVar2 + 0x20));
    *(undefined1 *)(lVar2 + 0x33) = 2;
    uVar1 = *(uint *)(lVar2 + 0x34);
    *(uint *)(lVar2 + 0x34) = uVar1 & 0xfffbffff;
    if ((uVar1 >> 0x1e & 1) == 0) {
      local_50 = *(undefined8 *)(lVar2 + 0x20);
    }
    else {
      local_50 = 0;
    }
    local_53 = *(undefined1 *)((longlong)param_1 + 0xd);
    local_60 = *param_1;
    local_58 = 1;
    local_54 = bVar5;
    FUN_14287def8(param_1);
    lVar2 = **(longlong **)(plVar3[0x29] + 0x18);
    *(undefined1 *)(lVar2 + 0x33) = 0;
    if ((*(byte *)(lVar2 + 0x34) & 8) != 0) {
      FUN_1400ea36e(lVar2 + 0x20,lVar2 + 0x20);
    }
    (**(code **)(*plVar3 + 0x318))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14352fa12 FUN_14352fa12 body=117 status=ok
// SIG undefined FUN_14352fa12(void)

ulonglong FUN_14352fa12(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*DAT_14cae4678 + 0xb0))();
  DAT_14cae4680 = (int)uVar2;
  if (DAT_14cae4680 != 0) {
    lVar1 = param_1[3];
    param_1[3] = *param_1 + lVar1;
    param_1[3] = (*param_1 + lVar1) - *(longlong *)(param_1[1] + (longlong)(int)param_1[5] * 8);
    *(longlong *)(param_1[1] + (longlong)(int)param_1[5] * 8) = *param_1;
    LOCK();
    *param_1 = 0;
    UNLOCK();
    *(int *)(param_1 + 5) = ((int)param_1[5] + 1) % (int)param_1[2];
    LOCK();
    uVar2 = param_1[4];
    param_1[4] = (ulonglong)param_1[3] / (ulonglong)(longlong)(int)param_1[2];
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 14352fa87 FUN_14352fa87 body=102 status=ok
// SIG undefined FUN_14352fa87(void)

void FUN_14352fa87(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14a91f520;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14352fb40 FUN_14352fb40 body=282 status=ok
// SIG undefined FUN_14352fb40(void)

undefined8 * FUN_14352fb40(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14352fb18);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14352fc5a FUN_14352fc5a body=27 status=ok
// SIG undefined FUN_14352fc5a(void)

void FUN_14352fc5a(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cae47d8);
  FUN_145d7100e();
  return;
}



// FUNCTION 14352fcd4 FUN_14352fcd4 body=149 status=ok
// SIG undefined FUN_14352fcd4(void)

void FUN_14352fcd4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (uVar4 < 5) {
    uVar4 = 4;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 3,0);
      uVar4 = uVar4 >> 3;
      iVar2 = *(int *)(param_1 + 0x2c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x2c) = (int)uVar4;
  FUN_141148b94(param_1,*(undefined4 *)(param_1 + 0x28),uVar4,8);
  return;
}



// FUNCTION 14352fd6a FUN_14352fd6a body=143 status=ok
// SIG undefined FUN_14352fd6a(void)

void FUN_14352fd6a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((ulonglong)uVar4 < 3) {
    uVar4 = 2;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  FUN_147af2bec(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14352fdfa FUN_14352fdfa body=38 status=ok
// SIG undefined FUN_14352fdfa(void)

undefined8 FUN_14352fdfa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14352fe20 FUN_14352fe20 body=3210 status=ok
// SIG undefined FUN_14352fe20(void)

void FUN_14352fe20(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  size_t _Size;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_3c8 [40];
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  longlong *plStack_380;
  int local_378;
  int iStack_374;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 *local_330;
  int local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_144b1c6fa(param_1 + 0x10);
  puVar30 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar30 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2);
    puVar30 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar30 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar30;
  param_2[6] = (ulonglong)(puVar30 + 1);
  puVar30[1] = 0;
  *puVar30 = &PTR_FUN_14a1fb978;
  puVar30[3] = 0;
  _Size = (size_t)local_378;
  *(int *)(puVar30 + 4) = local_378;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar30 + 0x24) = 8;
  }
  else {
    plVar13 = plStack_380;
    if (plStack_380 == (longlong *)0x0) {
      plVar13 = &local_388;
    }
    FUN_1446fe144(puVar30 + 2,local_378,0);
    puVar12 = (undefined8 *)puVar30[3];
    if ((undefined8 *)puVar30[3] == (undefined8 *)0x0) {
      puVar12 = puVar30 + 2;
    }
    memcpy(puVar12,plVar13,_Size);
  }
  puVar30[0xd] = 0;
  *(int *)(puVar30 + 0xe) = local_328;
  if ((longlong)local_328 == 0) {
    *(undefined4 *)((longlong)puVar30 + 0x74) = 8;
  }
  else {
    puVar12 = local_330;
    if (local_330 == (undefined8 *)0x0) {
      puVar12 = &uStack_370;
    }
    FUN_1446fe1b8(puVar30 + 5,local_328,0);
    puVar15 = (undefined8 *)puVar30[0xd];
    if ((undefined8 *)puVar30[0xd] == (undefined8 *)0x0) {
      puVar15 = puVar30 + 5;
    }
    memcpy(puVar15,puVar12,(longlong)local_328 << 3);
  }
  *(undefined4 *)(puVar30 + 0xf) = local_320;
  *(undefined4 *)((longlong)puVar30 + 0x7c) = uStack_31c;
  *(undefined4 *)(puVar30 + 0x10) = uStack_318;
  *(undefined4 *)((longlong)puVar30 + 0x84) = uStack_314;
  if (local_330 != (undefined8 *)0x0) {
    FUN_1400020a8(local_330);
  }
  if (plStack_380 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar19 = *(longlong *)(param_1 + 0x1b8);
  local_398 = lVar19 + 0x40;
  lVar11 = *(longlong *)(lVar19 + 0xe0);
  if (*(longlong *)(lVar19 + 0xe0) == 0) {
    lVar11 = local_398;
  }
  iVar25 = *(int *)(lVar19 + 0xe8);
  if ((longlong)iVar25 != 0) {
    lVar18 = 0;
    do {
      uVar17 = *(uint *)(lVar11 + 8 + lVar18);
      if ((~uVar17 & 0x30) == 0) {
        uVar21 = 0xffffffef;
        if ((uVar17 & 8) == 0) {
          uVar21 = 0xffffffd7;
        }
        uVar17 = uVar17 & uVar21;
        *(uint *)(lVar11 + 8 + lVar18) = uVar17;
      }
      *(uint *)(*(longlong *)(lVar11 + 0x10 + lVar18) + 0x34) = uVar17;
      uVar17 = *(uint *)(lVar11 + 8 + lVar18);
      if ((uVar17 & 0x10) == 0) {
        if ((uVar17 & 4) == 0) {
          *(undefined4 *)(lVar11 + 0x20 + lVar18) = 3;
        }
        else {
          *(undefined4 *)(lVar11 + 0x20 + lVar18) = 2;
        }
      }
      else {
        *(undefined4 *)(lVar11 + 0x20 + lVar18) = 1;
      }
      lVar18 = lVar18 + 0x28;
    } while ((longlong)iVar25 * 0x28 != lVar18);
  }
  lVar11 = lVar19 + 0x100;
  if (*(longlong *)(lVar19 + 0x120) != 0) {
    lVar11 = *(longlong *)(lVar19 + 0x120);
  }
  lVar18 = (longlong)*(int *)(lVar19 + 0x128);
  if (lVar18 == 0) {
    uVar17 = 0;
    iVar25 = 0;
  }
  else {
    lVar23 = 0;
    iVar25 = 0;
    uVar17 = 0;
    do {
      lVar14 = *(longlong *)(lVar11 + lVar23);
      iVar22 = 0;
      if (*(int *)(lVar14 + 0x28) != 0) {
        lVar20 = *(longlong *)(lVar14 + 0x20);
        if (*(longlong *)(lVar14 + 0x20) == 0) {
          lVar20 = lVar14;
        }
        iVar22 = *(int *)(*(longlong *)(lVar20 + (longlong)(*(int *)(lVar14 + 0x28) + -1) * 8) +
                         0x48);
      }
      if (iVar25 < iVar22) {
        iVar25 = iVar22;
      }
      uVar17 = uVar17 + ((~*(uint *)(lVar14 + 0x34) & 0x24) == 0);
      lVar23 = lVar23 + 8;
    } while (lVar18 * 8 != lVar23);
  }
  uVar21 = (uint)(lVar18 != 0);
  if ((int)uVar21 < (int)uVar17) {
    uVar21 = uVar17;
  }
  local_3a0 = lVar19;
  if (uVar21 != 0) {
    lVar11 = lVar19 + 0x130;
    uVar32 = 0;
    do {
      if ((longlong)uVar32 < (longlong)*(int *)(lVar19 + 0x148)) {
        lVar18 = *(longlong *)(lVar19 + 0x140);
        if (*(longlong *)(lVar19 + 0x140) == 0) {
          lVar18 = lVar11;
        }
        plVar13 = *(longlong **)(lVar18 + uVar32 * 8);
        if ((int)plVar13[0xe] != iVar25) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          *(int *)(plVar13 + 0xe) = iVar25;
          (**(code **)(*plVar13 + 8))(plVar13);
          lVar19 = local_3a0;
        }
      }
      else {
        puVar12 = (undefined8 *)FUN_14001cc68(0x78,0x10);
        *(undefined4 *)(puVar12 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar12 + 0xc) = 0x105;
        *(undefined1 *)((longlong)puVar12 + 0xe) = 0;
        *puVar12 = &PTR_FUN_14a91f860;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = 0;
        *(int *)(puVar12 + 0xe) = iVar25;
        FUN_1435eb280(puVar12,param_2);
        lVar19 = (longlong)*(int *)(local_3a0 + 0x148);
        uVar17 = *(int *)(local_3a0 + 0x148) + 1;
        *(uint *)(local_3a0 + 0x148) = uVar17;
        if (*(uint *)(local_3a0 + 0x14c) < uVar17) {
          local_390 = lVar19;
          FUN_147af2b6e(lVar11,lVar19);
          lVar19 = local_390;
        }
        lVar18 = *(longlong *)(local_3a0 + 0x140);
        if (*(longlong *)(local_3a0 + 0x140) == 0) {
          lVar18 = lVar11;
        }
        *(undefined8 **)(lVar18 + lVar19 * 8) = puVar12;
        lVar19 = local_3a0;
      }
      uVar32 = uVar32 + 1;
    } while (uVar21 != uVar32);
  }
  uVar17 = *(uint *)(lVar19 + 0x148);
  lVar11 = lVar19;
  if ((int)uVar21 < (int)uVar17) {
    do {
      lVar18 = *(longlong *)(lVar11 + 0x140);
      if (*(longlong *)(lVar11 + 0x140) == 0) {
        lVar18 = lVar19 + 0x130;
      }
      plVar13 = *(longlong **)(lVar18 + -8 + (ulonglong)uVar17 * 8);
      *(uint *)(lVar11 + 0x148) = uVar17 - 1;
      FUN_14352fd6a(lVar19 + 0x130);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      *(undefined4 *)(plVar13 + 0xe) = 0;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)*plVar13)(plVar13);
      }
      uVar17 = *(uint *)(local_3a0 + 0x148);
      lVar11 = local_3a0;
    } while ((int)uVar21 < (int)uVar17);
  }
  uVar17 = *(uint *)(lVar11 + 0xe8);
  uVar32 = (ulonglong)uVar17;
  if (uVar32 != 0) {
    lVar19 = lVar11;
    if (1 < (int)uVar17) {
      lVar19 = *(longlong *)(lVar11 + 0xe0);
      if (*(longlong *)(lVar11 + 0xe0) == 0) {
        lVar19 = local_398;
      }
      memset(&local_378,0,0x2f0);
      plStack_380 = (longlong *)(lVar19 + uVar32 * 0x28 + -0x28);
      local_388 = lVar19;
      fVar36 = logf((float)(int)uVar17);
      local_378 = (int)(longlong)(fVar36 + fVar36);
      plVar13 = &local_388;
      do {
        puVar30 = (undefined8 *)*plVar13;
        puVar12 = (undefined8 *)plVar13[1];
        iVar25 = (int)plVar13[2];
        iVar22 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar30) >> 3) * -0x33333333;
        uVar17 = iVar22 + 1;
        puVar15 = puVar12;
        puVar34 = puVar30;
        if (iVar25 != 0) {
LAB_1435302a9:
          if (8 < (int)uVar17) {
            uVar32 = (ulonglong)(uVar17 >> 1);
            uVar2 = puVar30[uVar32 * 5 + 4];
            uVar3 = puVar30[uVar32 * 5];
            uVar4 = (puVar30 + uVar32 * 5)[1];
            uVar5 = puVar30[uVar32 * 5 + 2];
            uVar6 = (puVar30 + uVar32 * 5 + 2)[1];
            puVar30[uVar32 * 5 + 4] = puVar30[4];
            uVar7 = *puVar30;
            uVar8 = puVar30[1];
            uVar9 = puVar30[3];
            puVar30[uVar32 * 5 + 2] = puVar30[2];
            (puVar30 + uVar32 * 5 + 2)[1] = uVar9;
            puVar30[uVar32 * 5] = uVar7;
            (puVar30 + uVar32 * 5)[1] = uVar8;
            puVar30[4] = uVar2;
            puVar30[2] = uVar5;
            puVar30[3] = uVar6;
            *puVar30 = uVar3;
            puVar30[1] = uVar4;
            puVar27 = puVar12 + 5;
            puVar16 = puVar30;
            do {
              puVar10 = puVar16 + 5;
              puVar24 = puVar16 + 5;
              do {
                puVar16 = puVar24;
                puVar29 = puVar10;
                if (puVar12 < puVar16) break;
                puVar10 = puVar29 + 5;
                puVar24 = puVar16 + 5;
              } while (*(uint *)(puVar30 + 4) <= *(uint *)(puVar16 + 4));
              puVar10 = puVar27 + -10;
              do {
                puVar24 = puVar27;
                puVar31 = puVar10;
                puVar27 = puVar24 + -5;
                if (puVar27 <= puVar30) break;
                puVar10 = puVar31 + -5;
              } while (*(uint *)(puVar24 + -1) <= *(uint *)(puVar30 + 4));
              if (puVar27 < puVar16) goto LAB_1435303da;
              uVar2 = puVar16[4];
              uVar3 = *puVar16;
              uVar4 = puVar16[1];
              uVar5 = puVar16[2];
              uVar6 = puVar16[3];
              puVar16[4] = puVar24[-1];
              uVar7 = *puVar27;
              uVar8 = puVar24[-4];
              uVar9 = puVar24[-2];
              puVar16[2] = puVar24[-3];
              puVar16[3] = uVar9;
              *puVar16 = uVar7;
              puVar16[1] = uVar8;
              puVar24[-1] = uVar2;
              puVar24[-3] = uVar5;
              puVar24[-2] = uVar6;
              *puVar27 = uVar3;
              puVar24[-4] = uVar4;
            } while( true );
          }
          for (; puVar34 = puVar30, puVar15 = puVar30, puVar30 < puVar12; puVar12 = puVar12 + -5) {
            while (puVar27 = puVar34, puVar15 = puVar15 + 5, puVar15 <= puVar12) {
              puVar34 = puVar15;
              if (*(uint *)(puVar27 + 4) <= *(uint *)(puVar15 + 4)) {
                puVar34 = puVar27;
              }
            }
            local_68 = puVar27[4];
            local_88 = *puVar27;
            uStack_80 = puVar27[1];
            local_78 = puVar27[2];
            uStack_70 = puVar27[3];
            uVar5 = local_88;
            uVar6 = uStack_80;
            puVar27[4] = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[3];
            puVar27[2] = puVar12[2];
            puVar27[3] = uVar4;
            *puVar27 = uVar2;
            puVar27[1] = uVar3;
            puVar12[4] = local_68;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            puVar12[2] = local_78;
            puVar12[3] = uStack_70;
            *(undefined4 *)puVar12 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar12 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_80._4_4_;
            local_88 = uVar5;
            uStack_80 = uVar6;
          }
          goto LAB_143530855;
        }
LAB_1435304cb:
        if (uVar17 != 0) {
          iVar25 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
          iVar22 = iVar25;
joined_r0x0001435304ec:
          do {
            iVar26 = iVar25 * 2 + 1;
            if (iVar26 < (int)uVar17) {
              iVar28 = iVar25 * 2 + 2;
              if ((iVar28 < (int)uVar17) &&
                 (*(uint *)(puVar30 + (longlong)iVar28 * 5 + 4) <=
                  *(uint *)(puVar30 + (longlong)iVar26 * 5 + 4))) {
                iVar26 = iVar28;
              }
              if (*(uint *)(puVar30 + (longlong)iVar26 * 5 + 4) <
                  *(uint *)(puVar30 + (longlong)iVar25 * 5 + 4)) {
                puVar12 = puVar30 + (longlong)iVar25 * 5;
                puVar15 = puVar30 + (longlong)iVar26 * 5;
                local_68 = puVar12[4];
                local_88 = *puVar12;
                uStack_80 = puVar12[1];
                local_78 = puVar12[2];
                uStack_70 = puVar12[3];
                uVar5 = local_88;
                uVar6 = uStack_80;
                puVar12[4] = puVar15[4];
                uVar2 = *puVar15;
                uVar3 = puVar15[1];
                uVar4 = puVar15[3];
                puVar12[2] = puVar15[2];
                puVar12[3] = uVar4;
                *puVar12 = uVar2;
                puVar12[1] = uVar3;
                puVar15[4] = local_68;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                puVar15[2] = local_78;
                puVar15[3] = uStack_70;
                *(undefined4 *)puVar15 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar15 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_80._4_4_;
                iVar25 = iVar26;
                local_88 = uVar5;
                uStack_80 = uVar6;
                goto joined_r0x0001435304ec;
              }
            }
            bVar35 = iVar22 != 0;
            iVar25 = iVar22 + -1;
            iVar22 = iVar25;
          } while (bVar35);
          if (1 < (int)uVar17) {
            uVar32 = (ulonglong)uVar17 - 1;
            local_68 = puVar30[4];
            local_88 = *puVar30;
            uStack_80 = puVar30[1];
            local_78 = puVar30[2];
            uStack_70 = puVar30[3];
            uVar5 = local_88;
            uVar6 = uStack_80;
            puVar30[4] = puVar30[uVar32 * 5 + 4];
            uVar2 = puVar30[uVar32 * 5];
            uVar3 = (puVar30 + uVar32 * 5)[1];
            uVar4 = (puVar30 + uVar32 * 5 + 2)[1];
            puVar30[2] = puVar30[uVar32 * 5 + 2];
            puVar30[3] = uVar4;
            *puVar30 = uVar2;
            puVar30[1] = uVar3;
            puVar30[uVar32 * 5 + 4] = local_68;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            puVar30[uVar32 * 5 + 2] = local_78;
            (puVar30 + uVar32 * 5 + 2)[1] = uStack_70;
            puVar12 = puVar30 + uVar32 * 5;
            *(undefined4 *)puVar12 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar12 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_80._4_4_;
            local_88 = uVar5;
            uStack_80 = uVar6;
            if (uVar17 != 2) {
              do {
                iVar25 = 0;
                iVar26 = 1;
                iVar22 = 0;
                do {
                  iVar25 = iVar25 + 2;
                  iVar28 = iVar26;
                  if (((longlong)iVar25 < (longlong)uVar32) &&
                     (*(uint *)(puVar30 + (longlong)iVar25 * 5 + 4) <=
                      *(uint *)(puVar30 + (longlong)iVar26 * 5 + 4))) {
                    iVar28 = iVar25;
                  }
                  if (*(uint *)(puVar30 + (longlong)iVar22 * 5 + 4) <=
                      *(uint *)(puVar30 + (longlong)iVar28 * 5 + 4)) break;
                  puVar12 = puVar30 + (longlong)iVar22 * 5;
                  puVar15 = puVar30 + (longlong)iVar28 * 5;
                  uVar2 = puVar12[4];
                  uVar3 = *puVar12;
                  uVar4 = puVar12[1];
                  uVar5 = puVar12[2];
                  uVar6 = puVar12[3];
                  puVar12[4] = puVar15[4];
                  uVar7 = *puVar15;
                  uVar8 = puVar15[1];
                  uVar9 = puVar15[3];
                  puVar12[2] = puVar15[2];
                  puVar12[3] = uVar9;
                  *puVar12 = uVar7;
                  puVar12[1] = uVar8;
                  puVar15[4] = uVar2;
                  puVar15[2] = uVar5;
                  puVar15[3] = uVar6;
                  *puVar15 = uVar3;
                  puVar15[1] = uVar4;
                  iVar25 = iVar28 * 2;
                  iVar26 = iVar28 * 2 + 1;
                  iVar22 = iVar28;
                } while ((longlong)iVar26 < (longlong)uVar32);
                uVar33 = uVar32 - 1;
                local_68 = puVar30[4];
                local_88 = *puVar30;
                uStack_80 = puVar30[1];
                local_78 = puVar30[2];
                uStack_70 = puVar30[3];
                uVar5 = local_88;
                uVar6 = uStack_80;
                puVar30[4] = puVar30[uVar33 * 5 + 4];
                uVar2 = puVar30[uVar33 * 5];
                uVar3 = (puVar30 + uVar33 * 5)[1];
                uVar4 = (puVar30 + uVar33 * 5 + 2)[1];
                puVar30[2] = puVar30[uVar33 * 5 + 2];
                puVar30[3] = uVar4;
                *puVar30 = uVar2;
                puVar30[1] = uVar3;
                puVar30[uVar33 * 5 + 4] = local_68;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                puVar30[uVar33 * 5 + 2] = local_78;
                (puVar30 + uVar33 * 5 + 2)[1] = uStack_70;
                puVar12 = puVar30 + uVar33 * 5;
                *(undefined4 *)puVar12 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar12 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_80._4_4_;
                bVar35 = 2 < uVar32;
                uVar32 = uVar33;
                local_88 = uVar5;
                uStack_80 = uVar6;
              } while (bVar35);
            }
          }
        }
LAB_143530855:
        plVar13 = plVar13 + -3;
      } while (&local_388 <= plVar13);
      uVar32 = (ulonglong)*(uint *)(local_3a0 + 0xe8);
      lVar19 = local_3a0;
    }
    lVar18 = local_398;
    lVar11 = lVar19;
    if ((int)uVar32 != 0) {
      lVar23 = lVar19 + 0x130;
      do {
        lVar14 = *(longlong *)(lVar11 + 0xe0);
        if (*(longlong *)(lVar11 + 0xe0) == 0) {
          lVar14 = lVar18;
        }
        iVar25 = (int)uVar32;
        if (*(int *)(lVar14 + 0x20 + (longlong)(iVar25 + -1) * 0x28) != 1) {
          if (0 < iVar25) {
            uVar33 = uVar32 + 1;
            lVar18 = uVar32 * 0x28;
            goto LAB_14353097e;
          }
          break;
        }
        lVar20 = (longlong)iVar25;
        local_368 = *(undefined8 *)(lVar14 + -8 + lVar20 * 0x28);
        plVar13 = (longlong *)(lVar14 + -0x28 + lVar20 * 0x28);
        local_388 = *plVar13;
        plStack_380 = (longlong *)plVar13[1];
        piVar1 = (int *)(lVar14 + -0x18 + lVar20 * 0x28);
        local_378 = *piVar1;
        iStack_374 = piVar1[1];
        uStack_370 = *(undefined8 *)(piVar1 + 2);
        *(int *)(lVar11 + 0xe8) = iVar25 + -1;
        FUN_143530ab8(lVar18);
        lVar11 = *(longlong *)(local_3a0 + 0x140);
        if (*(longlong *)(local_3a0 + 0x140) == 0) {
          lVar11 = lVar23;
        }
        uStack_370 = *(undefined8 *)(lVar11 + (longlong)(*(int *)(local_3a0 + 0x148) + -1) * 8);
        FUN_1417ca2ec(&local_388,param_2,lVar19 + 0x150,4);
        FUN_1409f7fce(&local_388,param_2,*(undefined4 *)(local_3a0 + 0x160));
        *(undefined4 *)(CONCAT44(iStack_374,local_378) + 0x38) = 0xffffffff;
        uVar32 = (ulonglong)*(uint *)(local_3a0 + 0xe8);
        lVar11 = local_3a0;
      } while (*(uint *)(local_3a0 + 0xe8) != 0);
    }
  }
  goto LAB_1435309f8;
LAB_1435303da:
  local_68 = puVar30[4];
  local_88 = *puVar30;
  uStack_80 = puVar30[1];
  local_78 = puVar30[2];
  uStack_70 = puVar30[3];
  uVar5 = local_88;
  uVar6 = uStack_80;
  puVar30[4] = puVar24[-1];
  uVar2 = *puVar27;
  uVar3 = puVar24[-4];
  uVar4 = puVar24[-2];
  puVar30[2] = puVar24[-3];
  puVar30[3] = uVar4;
  *puVar30 = uVar2;
  puVar30[1] = uVar3;
  puVar24[-1] = local_68;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  puVar24[-3] = local_78;
  puVar24[-2] = uStack_70;
  *(undefined4 *)puVar27 = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar24 + -0x24) = local_88._4_4_;
  *(undefined4 *)(puVar24 + -4) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar24 + -0x1c) = uStack_80._4_4_;
  iVar25 = iVar25 + -1;
  puVar24 = puVar24 + -10;
  local_88 = uVar5;
  uStack_80 = uVar6;
  if ((longlong)puVar31 - (longlong)puVar34 < (longlong)puVar15 - (longlong)puVar29) {
    if (puVar16 < puVar12) {
      *plVar13 = (longlong)puVar16;
      plVar13[1] = (longlong)puVar12;
      *(int *)(plVar13 + 2) = iVar25;
      plVar13 = plVar13 + 3;
    }
    puVar29 = puVar30;
    if (puVar27 <= puVar30 + 5) goto LAB_143530855;
  }
  else {
    if (puVar30 + 5 < puVar27) {
      *plVar13 = (longlong)puVar30;
      plVar13[1] = (longlong)puVar24;
      *(int *)(plVar13 + 2) = iVar25;
      plVar13 = plVar13 + 3;
    }
    puVar30 = puVar16;
    puVar24 = puVar12;
    puVar31 = puVar12;
    if (puVar12 <= puVar16) goto LAB_143530855;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar31 - (longlong)puVar29) >> 3) * -0x33333333;
  uVar17 = iVar22 + 1;
  puVar12 = puVar24;
  puVar15 = puVar31;
  puVar34 = puVar29;
  if (iVar25 == 0) goto LAB_1435304cb;
  goto LAB_1435302a9;
  while( true ) {
    lVar20 = *(longlong *)(lVar11 + 0x140);
    if (*(longlong *)(lVar11 + 0x140) == 0) {
      lVar20 = lVar23;
    }
    uVar2 = *(undefined8 *)(lVar20 + -8 + (longlong)*(int *)(lVar11 + 0x148) * 8);
    *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + -1;
    FUN_14352fd6a(lVar23);
    *(undefined8 *)(lVar14 + 0x18 + lVar18) = uVar2;
    FUN_1417ca2ec(lVar14 + lVar18,param_2,lVar19 + 0x150,4);
    uVar33 = uVar33 - 1;
    lVar11 = local_3a0;
    if (uVar33 < 2) break;
LAB_14353097e:
    lVar18 = lVar18 + -0x28;
    lVar14 = *(longlong *)(lVar11 + 0xe0);
    if (*(longlong *)(lVar11 + 0xe0) == 0) {
      lVar14 = local_398;
    }
    if (*(int *)(lVar14 + 0x20 + lVar18) != 2) break;
  }
LAB_1435309f8:
  FUN_143530b6a(lVar11 + 0x10,param_2);
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143530ab8 FUN_143530ab8 body=177 status=ok
// SIG undefined FUN_143530ab8(void)

void FUN_143530ab8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xa8);
  uVar1 = *(uint *)(param_1 + 0xac);
  if ((ulonglong)uVar4 < 5) {
    uVar4 = 4;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if ((ulonglong)((longlong)iVar3 * 0x28) < 0x4000) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 * 0x28,0);
      uVar4 = (uint)(uVar2 / 0x28);
      uVar1 = *(uint *)(param_1 + 0xac);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0xac) = uVar4;
  FUN_147af2ad8(param_1,*(undefined4 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 143530b6a FUN_143530b6a body=162 status=ok
// SIG undefined FUN_143530b6a(void)

void FUN_143530b6a(longlong *param_1,undefined8 param_2)

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
        goto LAB_143530bf7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143530bf7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143530c0c FUN_143530c0c body=38 status=ok
// SIG undefined FUN_143530c0c(void)

undefined8 FUN_143530c0c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143530c32 FUN_143530c32 body=1588 status=ok
// SIG undefined FUN_143530c32(void)

void FUN_143530c32(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  void *pvVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *_Src;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  size_t _Size;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int iStack_d4;
  longlong lStack_d0;
  undefined8 local_c8;
  longlong *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_e8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  _Size = (size_t)local_d8;
  *(int *)(puVar17 + 4) = local_d8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar13 = &local_e8;
    if ((undefined4 *)CONCAT44(uStack_dc,uStack_e0) != (undefined4 *)0x0) {
      puVar13 = (undefined4 *)CONCAT44(uStack_dc,uStack_e0);
    }
    FUN_1446fe144(puVar17 + 2,local_d8,0);
    puVar6 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar6 = puVar17 + 2;
    }
    memcpy(puVar6,puVar13,_Size);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    _Src = local_90;
    if (local_90 == (longlong *)0x0) {
      _Src = &lStack_d0;
    }
    FUN_1446fe1b8(puVar17 + 5,local_88,0);
    puVar6 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar17 + 5;
    }
    memcpy(puVar6,_Src,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar17 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_74;
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  iVar4 = *(int *)(lVar2 + 0xe8);
  if (iVar4 != 0) {
    lVar12 = lVar2 + 0x130;
    do {
      lVar8 = *(longlong *)(lVar2 + 0xe0);
      if (*(longlong *)(lVar2 + 0xe0) == 0) {
        lVar8 = lVar2 + 0x40;
      }
      lVar7 = (longlong)iVar4;
      local_c8 = *(undefined8 *)(lVar8 + -8 + lVar7 * 0x28);
      puVar13 = (undefined4 *)(lVar8 + -0x28 + lVar7 * 0x28);
      local_e8 = *puVar13;
      uStack_e4 = puVar13[1];
      uStack_e0 = puVar13[2];
      uStack_dc = puVar13[3];
      piVar1 = (int *)(lVar8 + -0x18 + lVar7 * 0x28);
      local_d8 = *piVar1;
      iStack_d4 = piVar1[1];
      lStack_d0 = *(longlong *)(piVar1 + 2);
      *(int *)(lVar2 + 0xe8) = iVar4 + -1;
      FUN_143530ab8(lVar2 + 0x40);
      if (lStack_d0 == 0) {
        lVar8 = *(longlong *)(lVar2 + 0x140);
        if (*(longlong *)(lVar2 + 0x140) == 0) {
          lVar8 = lVar12;
        }
        lVar8 = *(longlong *)(lVar8 + -8 + (longlong)*(int *)(lVar2 + 0x148) * 8);
        *(int *)(lVar2 + 0x148) = *(int *)(lVar2 + 0x148) + -1;
        FUN_14352fd6a(lVar12);
        lStack_d0 = lVar8;
      }
      lVar8 = lStack_d0;
      FUN_1417ca2ec(&local_e8,param_2,lVar2 + 0x150,8);
      FUN_1409f7fce(&local_e8,param_2,*(undefined4 *)(lVar2 + 0x160));
      *(undefined4 *)(CONCAT44(iStack_d4,local_d8) + 0x38) = 0xffffffff;
      iVar4 = *(int *)(lVar2 + 0x148);
      *(uint *)(lVar2 + 0x148) = iVar4 + 1U;
      if (*(uint *)(lVar2 + 0x14c) < iVar4 + 1U) {
        FUN_147af2b6e(lVar12,iVar4);
      }
      lVar7 = *(longlong *)(lVar2 + 0x140);
      if (*(longlong *)(lVar2 + 0x140) == 0) {
        lVar7 = lVar12;
      }
      *(longlong *)(lVar7 + (longlong)iVar4 * 8) = lVar8;
      iVar4 = *(int *)(lVar2 + 0xe8);
    } while (iVar4 != 0);
  }
  FUN_143530b6a(lVar2 + 0x28,param_2);
  lVar12 = lVar2 + 0x100;
  if (DAT_14cae3da0 == 0) {
    if (0 < *(int *)(lVar2 + 0x128)) {
      lVar8 = lVar2 + 0xf0;
      uVar14 = 0;
      do {
        lVar7 = *(longlong *)(lVar2 + 0x120);
        if (*(longlong *)(lVar2 + 0x120) == 0) {
          lVar7 = lVar12;
        }
        lVar16 = (longlong)(int)uVar14;
        pvVar3 = *(void **)(lVar7 + lVar16 * 8);
        if (*(int *)((longlong)pvVar3 + 0x28) == 0) {
LAB_143531011:
          iVar4 = *(int *)((longlong)pvVar3 + 0x30);
          *(int *)((longlong)pvVar3 + 0x30) = iVar4 + 1;
          if (*(int *)(lVar2 + 0xf8) <= iVar4) {
            FUN_141148ac6(pvVar3);
          }
        }
        else {
          pvVar10 = *(void **)((longlong)pvVar3 + 0x20);
          if (*(void **)((longlong)pvVar3 + 0x20) == (void *)0x0) {
            pvVar10 = pvVar3;
          }
          uVar18 = *(int *)((longlong)pvVar3 + 0x28) - 1;
          lVar7 = *(longlong *)((longlong)pvVar10 + (longlong)(int)uVar18 * 8);
          iVar4 = *(int *)(lVar7 + 0x4c);
          if (iVar4 < 1) goto LAB_143531011;
          iVar15 = *(int *)(lVar7 + 0x48);
          if (uVar18 != 0) {
            local_100 = (ulonglong)uVar18;
            lVar7 = 0;
            local_110 = lVar16;
            local_f8 = lVar8;
            local_f0 = lVar12;
            do {
              puVar6 = *(undefined8 **)((longlong)pvVar10 + lVar7 * 8);
              local_108 = lVar7;
              if (puVar6 != (undefined8 *)0x0) {
                (**(code **)*puVar6)(puVar6,1);
              }
              lVar7 = local_108 + 1;
            } while ((int)local_100 != (int)lVar7);
            iVar5 = *(int *)((longlong)pvVar3 + 0x28) - uVar18;
            uVar11 = uVar18;
            if (iVar5 != 0) {
              pvVar10 = *(void **)((longlong)pvVar3 + 0x20);
              if (*(void **)((longlong)pvVar3 + 0x20) == (void *)0x0) {
                pvVar10 = pvVar3;
              }
              memmove(pvVar10,(void *)((longlong)pvVar10 + (longlong)(int)uVar18 * 8),
                      (longlong)iVar5 << 3);
              uVar11 = *(uint *)((longlong)pvVar3 + 0x28);
            }
            *(uint *)((longlong)pvVar3 + 0x28) = uVar11 - uVar18;
            FUN_14352fcd4(pvVar3);
            lVar12 = local_f0;
            lVar8 = local_f8;
            lVar16 = local_110;
          }
          fVar19 = (float)iVar4 * *(float *)(lVar2 + 0xf4);
          fVar20 = (float)*(int *)(lVar2 + 0xfc);
          if ((float)*(int *)(lVar2 + 0xfc) <= fVar19) {
            fVar20 = fVar19;
          }
          if (*(float *)(lVar2 + 0xf4) * fVar20 < (float)iVar15) {
            iVar4 = *(int *)((longlong)pvVar3 + 0x30);
            *(int *)((longlong)pvVar3 + 0x30) = iVar4 + 1;
            if (*(int *)(lVar2 + 0xf8) <= iVar4) {
              local_110 = lVar16;
              FUN_141148ac6(pvVar3);
              uVar9 = FUN_14001cc68(0x50,0x10);
              local_118 = lVar8;
              FUN_1414444b8(uVar9,param_2,(int)fVar20,0);
              iVar4 = *(int *)((longlong)pvVar3 + 0x28);
              *(uint *)((longlong)pvVar3 + 0x28) = iVar4 + 1U;
              if (*(uint *)((longlong)pvVar3 + 0x2c) < iVar4 + 1U) {
                FUN_1462b1344(pvVar3,iVar4);
              }
              pvVar10 = *(void **)((longlong)pvVar3 + 0x20);
              if (*(void **)((longlong)pvVar3 + 0x20) == (void *)0x0) {
                pvVar10 = pvVar3;
              }
              *(undefined8 *)((longlong)pvVar10 + (longlong)iVar4 * 8) = uVar9;
              lVar16 = local_110;
            }
          }
          else {
            *(undefined4 *)((longlong)pvVar3 + 0x30) = 0;
          }
          pvVar10 = *(void **)((longlong)pvVar3 + 0x20);
          if (*(void **)((longlong)pvVar3 + 0x20) == (void *)0x0) {
            pvVar10 = pvVar3;
          }
          *(undefined4 *)
           (*(longlong *)
             ((longlong)pvVar10 + (longlong)(*(int *)((longlong)pvVar3 + 0x28) + -1) * 8) + 0x4c) =
               0;
        }
        *(undefined4 *)((longlong)pvVar3 + 0x38) = 0xffffffff;
        if (*(int *)((longlong)pvVar3 + 0x28) == 0) {
LAB_1435310d4:
          lVar7 = *(longlong *)(lVar2 + 0x120);
          if (*(longlong *)(lVar2 + 0x120) == 0) {
            lVar7 = lVar12;
          }
          lVar7 = *(longlong *)(lVar7 + lVar16 * 8);
          if (lVar7 != 0) {
            FUN_141148a62(lVar7);
            FUN_1400020a8(lVar7);
          }
          iVar4 = *(int *)(lVar2 + 0x128);
          iVar15 = ~uVar14 + iVar4;
          if (iVar15 != 0) {
            if (0 < iVar15) {
              iVar15 = 1;
            }
            lVar7 = *(longlong *)(lVar2 + 0x120);
            if (*(longlong *)(lVar2 + 0x120) == 0) {
              lVar7 = lVar12;
            }
            memmove((void *)(lVar7 + lVar16 * 8),(void *)(lVar7 + (longlong)(iVar4 - iVar15) * 8),
                    (longlong)iVar15 << 3);
            iVar4 = *(int *)(lVar2 + 0x128);
          }
          *(int *)(lVar2 + 0x128) = iVar4 + -1;
          FUN_14352fcd4(lVar12);
          uVar14 = uVar14 - 1;
        }
        else {
          pvVar10 = *(void **)((longlong)pvVar3 + 0x20);
          if (*(void **)((longlong)pvVar3 + 0x20) == (void *)0x0) {
            pvVar10 = pvVar3;
          }
          if (*(int *)(*(longlong *)
                        ((longlong)pvVar10 + (longlong)(*(int *)((longlong)pvVar3 + 0x28) + -1) * 8)
                      + 0x48) == 0) goto LAB_1435310d4;
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < *(int *)(lVar2 + 0x128));
    }
  }
  else {
    FUN_145811998(lVar12);
    *(undefined4 *)(lVar2 + 0x128) = 0;
    if (*(int *)(lVar2 + 300) != 0) {
      FUN_141148b2e(lVar12,0);
    }
    FUN_1458119e4(lVar2);
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143531268 FUN_143531268 body=29 status=ok
// SIG undefined FUN_143531268(void)

undefined8 FUN_143531268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14353129a FUN_14353129a body=85 status=ok
// SIG undefined FUN_14353129a(void)

void FUN_14353129a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9200d0;
  return;
}



// FUNCTION 1435312f0 FUN_1435312f0 body=85 status=ok
// SIG undefined FUN_1435312f0(void)

void FUN_1435312f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9200d0;
  return;
}



// FUNCTION 143531346 FUN_143531346 body=118 status=ok
// SIG undefined FUN_143531346(void)

void FUN_143531346(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9200d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435313ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435313bc FUN_1435313bc body=81 status=ok
// SIG undefined FUN_1435313bc(void)

void FUN_1435313bc(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14353140e FUN_14353140e body=83 status=ok
// SIG undefined FUN_14353140e(void)

undefined8 FUN_14353140e(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143531462 FUN_143531462 body=259 status=ok
// SIG undefined FUN_143531462(void)

void FUN_143531462(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  FUN_1409766d0(lVar1);
  local_38 = *(ulonglong *)(lVar1 + 0xb38) ^ 0x8000000000000000;
  local_48 = *(undefined4 *)(lVar1 + 0xb28);
  uStack_40 = *(undefined4 *)(lVar1 + 0xb30);
  uStack_44 = *(uint *)(lVar1 + 0xb2c) ^ 0x80000000;
  uStack_3c = *(uint *)(lVar1 + 0xb34) ^ 0x80000000;
  local_4c = *(undefined4 *)(lVar1 + 0x728);
  local_58 = *(undefined8 *)(lVar1 + 0x720);
  local_50 = 0x80;
  FUN_1417cbca0(param_2);
  local_60 = *(ulonglong *)(lVar1 + 0xb38) ^ 0x8000000000000000;
  local_70 = *(undefined4 *)(lVar1 + 0xb28);
  uStack_68 = *(undefined4 *)(lVar1 + 0xb30);
  uStack_6c = *(uint *)(lVar1 + 0xb2c) ^ 0x80000000;
  uStack_64 = *(uint *)(lVar1 + 0xb34) ^ 0x80000000;
  local_80 = *(undefined8 *)(lVar1 + 0x730);
  local_78 = *(undefined4 *)(lVar1 + 0x738);
  FUN_14353e8d0(param_2);
  FUN_14054c6c4(param_2 + 0x120,lVar1 + 0x7d8);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143531590 FUN_143531590 body=29 status=ok
// SIG undefined FUN_143531590(void)

undefined8 FUN_143531590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435315ae FUN_1435315ae body=31 status=ok
// SIG undefined FUN_1435315ae(void)

undefined8 FUN_1435315ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435315ce FUN_1435315ce body=372 status=ok
// SIG undefined FUN_1435315ce(void)

void FUN_1435315ce(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    uVar7 = (undefined4)param_1[3];
    uVar8 = (undefined4)((ulonglong)param_1[3] >> 0x20);
    uVar5 = FUN_1401cb356();
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar7 = (undefined4)param_1[3];
    uVar8 = (undefined4)((ulonglong)param_1[3] >> 0x20);
    uVar5 = FUN_1401cb356();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_88[0] = (code *)0x0;
  local_78 = (longlong *)FUN_14001cc68(0x28,8);
  *local_78 = (longlong)&PTR_LAB_14a9202e0;
  local_78[1] = lVar2;
  local_78[2] = lVar3;
  local_78[3] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_78[4] = CONCAT44(uVar8,uVar7);
  if (local_78 != (longlong *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_1435317c0;
  }
  local_a8 = local_88;
  FUN_1401cbba4(uVar5,local_98,L"ApplyBuildTreeAsync_GameThread",0);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (local_88[0] != (code *)0x0) {
    plVar6 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14353174e FUN_14353174e body=29 status=ok
// SIG undefined FUN_14353174e(void)

void FUN_14353174e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14353176c FUN_14353176c body=83 status=ok
// SIG undefined FUN_14353176c(void)

undefined8 * FUN_14353176c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a920280;
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



// FUNCTION 1435317c0 FUN_1435317c0 body=162 status=ok
// SIG undefined FUN_1435317c0(void)

undefined8 FUN_1435317c0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))) {
      local_18 = *(undefined8 *)(param_1 + 2);
      local_10 = *(longlong *)(param_1 + 4);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FUN_14352ae18(lVar2,&local_18);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14353186e FUN_14353186e body=29 status=ok
// SIG undefined FUN_14353186e(void)

void FUN_14353186e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14353188c FUN_14353188c body=83 status=ok
// SIG undefined FUN_14353188c(void)

undefined8 * FUN_14353188c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a9202e0;
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



// FUNCTION 1435318e0 FUN_1435318e0 body=266 status=ok
// SIG undefined FUN_1435318e0(void)

bool FUN_1435318e0(double *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_48 [40];
  double local_20 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(param_1 + 4);
  local_20[0] = 1.0;
  local_20[1] = 1.0;
  local_20[2] = 1.0;
  lVar2 = 0;
  do {
    dVar5 = *(double *)(param_2 + lVar2 * 4);
    dVar3 = *(double *)(param_2 + 8 + lVar2 * 4);
    dVar4 = *(double *)(param_2 + 0x10 + lVar2 * 4);
    dVar5 = dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3;
    *(ulonglong *)((longlong)local_20 + lVar2) =
         -(ulonglong)(9.99999993922529e-09 < dVar5) & (ulonglong)SQRT(dVar5);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  dVar5 = local_20[0];
  if (local_20[0] <= local_20[1]) {
    dVar5 = local_20[1];
  }
  if (dVar5 <= local_20[2]) {
    dVar5 = local_20[2];
  }
  dVar4 = param_1[2] - *(double *)(param_2 + 0x70);
  dVar7 = param_1[1] - *(double *)(param_2 + 0x68);
  dVar6 = *param_1 - *(double *)(param_2 + 0x60);
  dVar3 = dVar5 * (double)fVar1 + param_1[3] + 9.999999747378752e-05;
  dVar5 = 0.0;
  if (0.0 <= dVar3) {
    dVar5 = dVar3;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return dVar4 * dVar4 + dVar6 * dVar6 + dVar7 * dVar7 <= dVar5 * dVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435319ec FUN_1435319ec body=568 status=ok
// SIG undefined FUN_1435319ec(void)

undefined8 FUN_1435319ec(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar8 = 0.0;
    dVar13 = 0.0;
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar8 = (param_1[7] + param_1[10]) * 0.5;
    dVar13 = (param_1[8] + param_1[0xb]) * 0.5;
    dVar7 = (param_1[9] + param_1[0xc]) * 0.5;
    dVar9 = (param_1[10] - param_1[7]) * 0.5;
    dVar11 = (param_1[0xb] - param_1[8]) * 0.5;
    dVar12 = (param_1[0xc] - param_1[9]) * 0.5;
    dVar10 = dVar7 * param_2[8] + dVar13 * param_2[4] + dVar8 * *param_2 + param_2[0xc];
    dVar5 = dVar7 * param_2[9] + dVar13 * param_2[5] + dVar8 * param_2[1] + param_2[0xd];
    dVar3 = ABS(dVar12 * param_2[8]) + ABS(param_2[4] * dVar11) + ABS(dVar9 * *param_2);
    dVar4 = ABS(dVar12 * param_2[9]) + ABS(param_2[5] * dVar11) + ABS(dVar9 * param_2[1]);
    dVar1 = dVar10 - dVar3;
    dVar2 = dVar5 - dVar4;
    dVar3 = dVar3 + dVar10;
    dVar4 = dVar4 + dVar5;
    dVar8 = dVar7 * param_2[10] + dVar13 * param_2[6] + dVar8 * param_2[2] + param_2[0xe];
    dVar10 = ABS(dVar11 * param_2[6]) + ABS(dVar9 * param_2[2]) + ABS(dVar12 * param_2[10]);
    dVar13 = dVar8 - dVar10;
    dVar8 = dVar8 + dVar10;
  }
  if ((((dVar3 < *param_1) || (param_1[3] <= dVar1 && dVar1 != param_1[3])) || (dVar4 < param_1[1]))
     || (((param_1[4] <= dVar2 && dVar2 != param_1[4] || (dVar8 < param_1[2])) ||
         (param_1[5] <= dVar13 && dVar13 != param_1[5])))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143531c27 FUN_143531c27 body=5147 status=ok
// SIG undefined FUN_143531c27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143531c27(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  undefined8 local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = 0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cae3d70,L"fx.GPUSort.FrameCountBeforeShrinking",&DAT_14c761578,
                L"Number of consecutive frames where the GPU sort buffer is considered oversized before allowing shrinking. (default=100)"
               );
  atexit(FUN_143520d40);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cae3d80,L"fx.GPUSort.MinBufferSize",&DAT_14c76157c,
                L"Minimum GPU sort buffer size, in particles (default=8192)");
  atexit(FUN_143520d85);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cae3d90,L"fx.GPUSort.BufferSlack",&DAT_14c761580,
                L"Slack ratio when resizing GPU sort buffers. Must be bigger than 1 (default=2)");
  atexit(FUN_143520dca);
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_141471170(&DAT_14cae3da8,L"fx.GPUSort.StressTest",&DAT_14cae3da0,
                L"Force a stress test on the GPU sort by release persistent data every frame (default=0)"
               );
  atexit(FUN_143520e0f);
  do {
    *(undefined4 *)((longlong)&DAT_14cae3dc8 + lVar4) = 0xffffffff;
    *(undefined2 *)((longlong)&DAT_14cae3dcc + lVar4) = 0x105;
    (&DAT_14cae3dce)[lVar4] = 0;
    *(undefined8 *)(&DAT_14cae3dd0 + lVar4) = 0;
    *(undefined8 *)((longlong)&DAT_14cae3dd8 + lVar4) = 0;
    *(undefined8 *)(&DAT_14cae3de0 + lVar4) = 0;
    *(undefined8 *)(lVar4 + 0x14cae3de8) = 0;
    *(undefined8 *)(&DAT_14cae3dec + lVar4) = 0;
    *(undefined8 *)(lVar4 + 0x14cae3df4) = 0;
    *(undefined ***)((longlong)&DAT_14cae3dc0 + lVar4) = &PTR_FUN_14a920000;
    FUN_1463d2640((longlong)&DAT_14cae3dc0 + lVar4);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0xc0);
  atexit(FUN_143520e54);
  local_48 = FUN_145fe4332;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cae3f98);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cae3fa8);
  if (cVar1 == '\0') {
    _DAT_14cae3fa8 = 0;
    uRam000000014cae3fb0 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cae3fb8,L"r.HairStrands.Enable",&local_50,
                L"Enable/Disable the entire hair strands system. This affects all geometric representations (i.e., strands, cards, and meshes)."
               );
  atexit(FUN_143521707);
  DAT_14cae4000 = 0;
  DAT_14cae4008 = 0;
  DAT_14cae3fe0 = 0;
  _DAT_14cae3fe8 = 0;
  _DAT_14cae400c = 0xffffffff00000080;
  DAT_14cae4014 = 0;
  DAT_14cae4020 = 0;
  DAT_14cae4028 = 0;
  DAT_14cae4030 = 0;
  uRam000000014cae4038 = 0;
  _DAT_14cae4040 = 0;
  atexit((_func_5014 *)&LAB_14352188d);
  _DAT_14cae4068 = 0;
  _DAT_14cae4070 = 0;
  DAT_14cae4048 = 0;
  _DAT_14cae4050 = 0;
  _DAT_14cae4074 = 0xffffffff00000080;
  DAT_14cae407c = 0;
  DAT_14cae4088 = 0;
  DAT_14cae4090 = 0;
  atexit(FUN_1435219ed);
  local_50 = &DAT_14a917a82;
  local_48._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cae4098 = (ulonglong)uVar2;
  local_50 = "TextureFormat";
  local_48._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cae40a0 = (ulonglong)uVar2;
  local_50 = "DeviceType";
  local_48._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cae40a8 = (ulonglong)uVar2;
  local_50 = "SMInstance";
  local_48 = (code *)CONCAT35(local_48._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cae40b0 = (ulonglong)uVar2;
  local_50._0_4_ = 0x10;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae40b8,L"foliage.SplitFactor",&local_50,
                L"This controls the branching factor of the foliage tree.");
  atexit(FUN_143521a1c);
  local_50._0_4_ = 0xffffffff;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae40d0,L"foliage.ForceLOD",&local_50,
                L"If greater than or equal to zero, forces the foliage LOD to that level.");
  atexit(FUN_143521a61);
  local_50._0_4_ = 0xffffffff;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae40e8,L"foliage.OnlyLOD",&local_50,
                L"If greater than or equal to zero, only renders the foliage LOD at that level.");
  atexit(FUN_143521aa6);
  local_50._0_4_ = 0;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4100,L"foliage.DisableCull",&local_50,
                L"If greater than zero, no culling occurs based on frustum.");
  atexit(FUN_143521aeb);
  local_50._0_4_ = 0;
  local_78._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cae4118,L"foliage.CullAll",&local_50,
                L"If greater than zero, everything is considered culled.");
  atexit(FUN_143521b30);
  local_50._0_4_ = 1;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4130,L"foliage.DitheredLOD",&local_50,
                L"If greater than zero, dithered LOD is used, otherwise popping LOD is used.");
  atexit(FUN_143521b75);
  local_50._0_4_ = 0;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4148,L"foliage.OverestimateLOD",&local_50,
                L"If greater than zero and dithered LOD is not used, then we use an overestimate of LOD instead of an underestimate."
               );
  atexit(FUN_143521bba);
  local_50._0_4_ = 100000000;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4160,L"foliage.MaxTrianglesToRender",&local_50,
                L"This is an absolute limit on the number of foliage triangles to render in one traversal. This is used to prevent a silly LOD parameter mistake from causing the OS to kill the GPU."
               );
  atexit(FUN_143521bff);
  local_50._0_4_ = 0x36a7c5ac;
  local_78._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cae4888,L"foliage.MinimumScreenSize",&local_50,
                L"This controls the screen size at which we cull foliage instances entirely.");
  atexit(FUN_143521c44);
  local_50 = (char *)((ulonglong)local_50._4_4_ << 0x20);
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4178,L"foliage.MaxEndCullDistance",&local_50,
                L"Max distance for end culling (0 disabled).");
  atexit(FUN_143521c89);
  local_50 = (char *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_14a9200d0;
  local_54 = 0x3f800000;
  local_78 = CONCAT44(local_78._4_4_,0x40);
  FUN_140a6b41e(&DAT_14cae4190,L"foliage.LODDistanceScale",&local_54,
                L"Scale factor for the distance used in computing LOD for foliage.");
  (**(code **)(*DAT_14cae4198 + 200))(DAT_14cae4198,&local_50);
  if ((int)local_48 == 0) {
LAB_143532255:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143532255;
  }
  atexit(FUN_143521cce);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cae48a0,L"foliage.RandomLODRange",&local_50,
                L"Random distance added to each instance distance to compute LOD.");
  atexit(FUN_143521d13);
  local_50._0_4_ = 0x2000;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae41a8,L"foliage.MinVertsToSplitNode",&local_50,
                L"Controls the accuracy between culling and LOD accuracy and culling and CPU performance."
               );
  atexit(FUN_143521d58);
  local_50._0_4_ = 0x10;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae41c0,L"foliage.MaxOcclusionQueriesPerComponent",&local_50,
                L"Controls the granularity of occlusion culling. 16-128 is a reasonable range.");
  atexit(FUN_143521d9d);
  local_50._0_4_ = 6;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae41d8,L"foliage.MinOcclusionQueriesPerComponent",&local_50,
                L"Controls the granularity of occlusion culling. 2 should be the Min.");
  atexit(FUN_143521de2);
  local_50._0_4_ = 0x100;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae41f0,L"foliage.MinInstancesPerOcclusionQuery",&local_50,
                L"Controls the granualrity of occlusion culling. 1024 to 65536 is a reasonable range. This is not exact, actual minimum might be off by a factor of two."
               );
  atexit(FUN_143521e27);
  local_50._0_4_ = 0x3f800000;
  local_78._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cae4208,L"foliage.DensityScale",&local_50,
                L"Controls the amount of foliage to render. Foliage must opt-in to density scaling through the foliage type."
               );
  atexit(FUN_143521e6c);
  local_50._0_4_ = 0;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4220,L"foliage.InstanceRuns",&local_50,
                L"Whether to use the InstanceRuns feature of FMeshBatch to compress foliage draw call data sent to the renderer.  Not supported by the Mesh Draw Command pipeline."
               );
  atexit(FUN_143521eb1);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14cae4238,L"r.RayTracing.Geometry.HierarchicalInstancedStaticMesh",&local_50,
                L"Include HISM in ray tracing effects (default = 1)");
  atexit(FUN_143521ef6);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_50 + 0x18) = FUN_143521f3b;
  FUN_141253d16(&DAT_14cae4250,&local_50);
  if ((int)local_48 == 0) {
LAB_1435324e5:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_1435324e5;
  }
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_50 + 0x18) = FUN_1435221ac;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cae4268,L"foliage.Test",L"Useful for debugging.",&local_50);
  if ((int)local_48 == 0) {
LAB_1435325c5:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_1435325c5;
  }
  atexit(FUN_1435224de);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(undefined **)((longlong)local_50 + 0x18) = &DAT_143522523;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cae4278,L"foliage.Freeze",
                L"Useful for debugging. Freezes the foliage culling and LOD.",&local_50);
  if ((int)local_48 == 0) {
LAB_1435326a3:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_1435326a3;
  }
  atexit(FUN_143522524);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(undefined **)((longlong)local_50 + 0x18) = &DAT_143522569;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cae4288,L"foliage.UnFreeze",
                L"Useful for debugging. Freezes the foliage culling and LOD.",&local_50);
  if ((int)local_48 == 0) {
LAB_143532781:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143532781;
  }
  atexit(FUN_14352256a);
  DAT_14cae4298 = 0;
  _DAT_14cae42a0 = 0;
  _DAT_14cae42a8 = 2;
  atexit(FUN_1435225af);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(undefined1 **)((longlong)local_50 + 0x18) = &LAB_1435225f6;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cae42b8,L"foliage.ToggleVectorCull",
                L"Useful for debugging. Toggles the optimized cull.",&local_50);
  if ((int)local_48 == 0) {
LAB_143532880:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143532880;
  }
  atexit(FUN_1435225fe);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(undefined **)((longlong)local_50 + 0x18) = &DAT_143522643;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cae42c8,L"foliage.LogFoliageFrame",
                L"Useful for debugging. Logs all foliage rendered in a frame.",&local_50);
  if ((int)local_48 == 0) {
LAB_14353295e:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_14353295e;
  }
  atexit(FUN_143522644);
  _DAT_14cae42e0 = 0x3fe0000000000000;
  uRam000000014cae42e8 = 0x3fe0000000000000;
  DAT_14cae42f0 = 0x3fe0000000000000;
  uRam000000014cae42f8 = 0;
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_50 + 0x18) = FUN_14352e9ec;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cae4310,L"foliage.RebuildFoliageTrees",
                L"Rebuild the trees for non-grass foliage.",&local_50);
  if ((int)local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_143532a67;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143532a67:
  atexit(FUN_14352eb20);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cae4320,L"r.SaveEXR.CompressionQuality",&local_50,
                L"Defines how we save HDR screenshots in the EXR format.\n 0: no compression\n 1: default compression which can be slow (default)"
               );
  atexit(FUN_14352eb65);
  FUN_140056680(&local_50,&DAT_149dfb77a);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_140f510cc(&DAT_14cae4338,L"r.HighResScreenshot.AdditionalCmds",&local_50,
                L"Additional command to execute when a high res screenshot is requested.");
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_14352ebaa);
  DAT_14cae48b8 = 0xfffffffe;
  FUN_145e201aa();
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9196e0,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a919a60,1,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a91a020,1,&PTR_FUN_14a919ff0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a91a190);
  local_50 = &DAT_14a19662d;
  local_48 = (code *)CONCAT35(local_48._5_3_,4);
  FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&DAT_14cae4484,L"AddDebugText",1);
  FUN_1446f470e(&DAT_14cae4520,L"ReceiveDrawHUD",1);
  FUN_1446f470e(&DAT_14cae4530,L"ReceiveHitBoxBeginCursorOver",1);
  FUN_1446f470e(&DAT_14cae4540,L"ReceiveHitBoxClick",1);
  FUN_1446f470e(&DAT_14cae4550,L"ReceiveHitBoxEndCursorOver",1);
  FUN_1446f470e(&DAT_14cae4560,L"ReceiveHitBoxRelease",1);
  FUN_1446f470e(&DAT_14cae4570,L"RemoveAllDebugStrings",1);
  FUN_1446f470e(&DAT_14cae4580,L"RemoveDebugText",1);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a91df20,1,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae4848);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae4848,4000);
  DAT_14cae4870 = 0;
  _DAT_14cae4878 = 0;
  _DAT_14cae4880 = 2;
  atexit(FUN_14352eef1);
  DAT_14cae45c8 = 0;
  _DAT_14cae45d0 = 0;
  _DAT_14cae45d8 = 2;
  atexit(FUN_14352ef2c);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae45e0,L"r.DebugSafeZone.Mode",&local_50,
                L"The safe zone visualization mode (0..2)\n 0: Disabled (default)\n 1: Show Title Safe Zone\n 2: Show Action Safe Zone"
               );
  atexit(FUN_14352ef5d);
  local_50._0_4_ = 0x3e4ccccd;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cae45f8,L"r.DebugSafeZone.OverlayAlpha",&local_50,
                L"The alpha value of the safe zone overlay (0..1)\n default: 0.2");
  atexit(FUN_14352efa2);
  local_50 = (char *)CONCAT44(local_50._4_4_,0x80);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae4610,L"r.DebugSafeZone.MaxDebugTextStringsPerActor",&local_50,
                L"The maximum number of debug strings that can be attached to a given actor (<=0 : no limit)"
               );
  atexit(FUN_14352efe7);
  FUN_1446f470e(&DAT_14cae4628,L"Reset",1);
  FUN_1446f470e(&DAT_14cae4630,L"HitBox",1);
  FUN_1446f470e(&DAT_14cae4638,L"Animation",1);
  FUN_1446f470e(&DAT_14cae4640,L"Physics",1);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a91e710,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a91edf0,1,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  local_78 = local_78 & 0xffffffff00000000;
  DAT_14cae4678 =
       (**(code **)(*DAT_14c8407a8 + 0x18))
                 (DAT_14c8407a8,L"InGamePerformanceTracking.Enabled",0,
                  L"If in-game performance tracking is enabled. Most games will likely not use or need this so it should be left disabled."
                 );
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  local_78 = local_78 & 0xffffffff00000000;
  DAT_14cae4688 =
       (**(code **)(*DAT_14c8407a8 + 0x18))
                 (DAT_14c8407a8,L"InGamePerformanceTracking.HistorySize",0x1e,
                  L"How many frames in game performance tracking should store in it\'s history.");
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a91f810,1,&PTR_FUN_14a91f7c0);
  FUN_140056680(&DAT_14cae46d8,L"ICH-");
  atexit((_func_5014 *)&LAB_14352faed);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143533044 FUN_143533044 body=47 status=ok
// SIG undefined FUN_143533044(void)

void FUN_143533044(void)

{
  DAT_14cae49c8 = 0;
  if (DAT_14cae49c0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a119f4(&DAT_14cae4980);
  return;
}



// FUNCTION 143533074 FUN_143533074 body=312 status=ok
// SIG undefined FUN_143533074(void)

void FUN_143533074(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0 && param_2 != 0)) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1408c9530(lVar3,param_2,*(undefined8 *)(param_2 + 0xa8));
      local_38 = (undefined1 *)0x0;
      local_30 = 0x1800000000;
      FUN_1448c0c58(param_1,local_f8,0);
      puVar4 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar4 = local_f8;
      }
      lVar3 = (longlong)(int)local_30;
      if (lVar3 != 0) {
        lVar2 = 0;
        do {
          lVar1 = *(longlong *)(puVar4 + lVar2);
          if ((lVar1 != 0) && (lVar1 != param_2 && *(longlong *)(lVar1 + 0x10) != 0)) {
            FUN_1408c9530(*(longlong *)(lVar1 + 0x10),param_2);
          }
          lVar2 = lVar2 + 8;
        } while (lVar3 * 8 != lVar2);
      }
      if (local_38 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435331ae FUN_1435331ae body=289 status=ok
// SIG undefined FUN_1435331ae(void)

longlong FUN_1435331ae(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1 != -1) && (DAT_14cb0d2b0 != 0)) && (lVar4 = FUN_140313804(), lVar4 != 0)) &&
     ((lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x48))(lVar4 + 0x30), lVar4 != 0 &&
      (iVar3 = *(int *)(lVar4 + 0x238), 0 < iVar3)))) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar7 * 8);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (((plVar5 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
            ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) && (lVar6 = *plVar5, lVar6 != 0)) {
        FUN_147c9996e(lVar6,&local_34);
        if (local_34 != -1 && local_34 == param_1) goto LAB_1435332aa;
        iVar3 = *(int *)(lVar4 + 0x238);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar3);
  }
  lVar6 = 0;
LAB_1435332aa:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1435332e8 FUN_1435332e8 body=69 status=ok
// SIG undefined FUN_1435332e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435332e8(void)

{
  _DAT_14cae4cd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353332a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4cd8,1);
  return;
}



// FUNCTION 14353332d FUN_14353332d body=69 status=ok
// SIG undefined FUN_14353332d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353332d(void)

{
  _DAT_14cae4ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353336f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4cf0,1);
  return;
}



// FUNCTION 143533372 FUN_143533372 body=69 status=ok
// SIG undefined FUN_143533372(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533372(void)

{
  _DAT_14cae70a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435333b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae70a8,1);
  return;
}



// FUNCTION 1435333b7 FUN_1435333b7 body=69 status=ok
// SIG undefined FUN_1435333b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435333b7(void)

{
  _DAT_14cae4d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435333f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d08,1);
  return;
}



// FUNCTION 1435333fc FUN_1435333fc body=69 status=ok
// SIG undefined FUN_1435333fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435333fc(void)

{
  _DAT_14cae4d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353343e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d20,1);
  return;
}



// FUNCTION 143533441 FUN_143533441 body=69 status=ok
// SIG undefined FUN_143533441(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533441(void)

{
  _DAT_14cae4d30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143533483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d38,1);
  return;
}



// FUNCTION 143533486 FUN_143533486 body=69 status=ok
// SIG undefined FUN_143533486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533486(void)

{
  _DAT_14cae4d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435334c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d50,1);
  return;
}



// FUNCTION 1435334cb FUN_1435334cb body=69 status=ok
// SIG undefined FUN_1435334cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435334cb(void)

{
  _DAT_14cae4d60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353350d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d68,1);
  return;
}



// FUNCTION 143533510 FUN_143533510 body=69 status=ok
// SIG undefined FUN_143533510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533510(void)

{
  _DAT_14cae4d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143533552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d80,1);
  return;
}



// FUNCTION 143533555 FUN_143533555 body=69 status=ok
// SIG undefined FUN_143533555(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533555(void)

{
  _DAT_14cae4d90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143533597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4d98,1);
  return;
}



// FUNCTION 14353359a FUN_14353359a body=69 status=ok
// SIG undefined FUN_14353359a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353359a(void)

{
  _DAT_14cae4da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435335dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4db0,1);
  return;
}



// FUNCTION 1435335df FUN_1435335df body=69 status=ok
// SIG undefined FUN_1435335df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435335df(void)

{
  _DAT_14cae4dc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143533621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4dc8,1);
  return;
}



// FUNCTION 143533624 FUN_143533624 body=69 status=ok
// SIG undefined FUN_143533624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533624(void)

{
  _DAT_14cae4dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143533666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4de0,1);
  return;
}



// FUNCTION 143533669 FUN_143533669 body=69 status=ok
// SIG undefined FUN_143533669(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533669(void)

{
  _DAT_14cae4df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435336ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4df8,1);
  return;
}



// FUNCTION 1435336ae FUN_1435336ae body=69 status=ok
// SIG undefined FUN_1435336ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435336ae(void)

{
  _DAT_14cae4e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435336f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4e10,1);
  return;
}



// FUNCTION 1435336f3 FUN_1435336f3 body=69 status=ok
// SIG undefined FUN_1435336f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435336f3(void)

{
  _DAT_14cae4e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143533735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4e28,1);
  return;
}



// FUNCTION 143533738 FUN_143533738 body=69 status=ok
// SIG undefined FUN_143533738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143533738(void)

{
  _DAT_14cae4e38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353377a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4e40,1);
  return;
}



// FUNCTION 14353377d FUN_14353377d body=69 status=ok
// SIG undefined FUN_14353377d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353377d(void)

{
  _DAT_14cae4e50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435337bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4e58,1);
  return;
}



// FUNCTION 1435337ce FUN_1435337ce body=47 status=ok
// SIG undefined FUN_1435337ce(void)

void FUN_1435337ce(void)

{
  DAT_14cae4e68 = &PTR_FUN_14a9750e0;
  FUN_144725486(&DAT_14cae4e68);
  FUN_14631f922(&DAT_14cae4e68);
  return;
}



// FUNCTION 1435337fd FUN_1435337fd body=47 status=ok
// SIG undefined FUN_1435337fd(void)

void FUN_1435337fd(void)

{
  DAT_14cae4e90 = &PTR_FUN_14a975140;
  FUN_1463d3238(&DAT_14cae4e90);
  FUN_145902a44(&DAT_14cae4e90);
  return;
}



// FUNCTION 14353382c FUN_14353382c body=49 status=ok
// SIG undefined FUN_14353382c(void)

void FUN_14353382c(void)

{
  FUN_144760e21(DAT_14cae4f38,DAT_14cae4f40);
  if (DAT_14cae4f38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14353385d FUN_14353385d body=49 status=ok
// SIG undefined FUN_14353385d(void)

void FUN_14353385d(void)

{
  FUN_144760e21(DAT_14cae4f50,DAT_14cae4f58);
  if (DAT_14cae4f50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14353388e FUN_14353388e body=455 status=ok
// SIG undefined FUN_14353388e(void)

void FUN_14353388e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78 [10];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a9751a0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x49) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x51) = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == (longlong *)0x0) goto LAB_143533985;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_143533927:
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
    if (plVar3 == (longlong *)0x0) goto LAB_143533985;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_143533927;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143533985:
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  puVar7 = param_2;
  puVar8 = local_78;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = puVar9;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  puVar7 = local_78;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0x20));
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x38))();
    (**(code **)(*plVar4 + 0x38))(plVar4,uVar6 & 0xffffffff);
  }
  if ((longlong *)plVar3[4] != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)plVar3[4] + 0x38))();
    (**(code **)(*plVar4 + 0x38))(plVar4,uVar6 & 0xffffffff);
  }
  if ((longlong *)plVar3[2] != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)plVar3[2] + 0x38))();
    (**(code **)(*plVar4 + 0x38))(plVar4,uVar6 & 0xffffffff);
  }
  if ((longlong *)plVar3[6] == (longlong *)0x0) {
    if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  (**(code **)(*(longlong *)plVar3[6] + 0x38))();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 143533a6a FUN_143533a6a body=807 status=ok
// SIG undefined FUN_143533a6a(void)

void FUN_143533a6a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(*(undefined8 **)(param_1 + 0x10) + 8)) {
    uVar10 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x38))();
    local_58 = (ulonglong *)(param_1 + 0x40);
    FUN_143533d92(param_2,uVar10,1,param_1 + 0x38);
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x48);
    uVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x38))();
    local_58 = (ulonglong *)(param_1 + 0x60);
    FUN_143533d92(param_2,uVar10,(cVar5 != '\0') * '\t' + '\x01',param_1 + 0x58);
    uVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x38))();
    local_58 = (ulonglong *)(param_1 + 0x80);
    FUN_143533d92(param_2,uVar10,0x3f,param_1 + 0x78);
    uVar9 = DAT_14cae4e80;
    puVar3 = (ulonglong *)(param_1 + 0xa0);
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x44) < 1) {
      uVar8 = *puVar3;
      if (uVar8 != DAT_14cae4e80) {
        *puVar3 = DAT_14cae4e80;
        if (uVar9 != 0) {
          LOCK();
          piVar1 = (int *)(uVar9 + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        if (uVar8 != 0) {
          LOCK();
          puVar2 = (uint *)(uVar8 + 8);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar4 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(uVar8 + 8);
            LOCK();
            uVar4 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar4 >> 0x1e & 1) == 0) {
              bVar6 = *(byte *)(uVar8 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = uVar8;
              plVar13 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar6 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar13;
                  LOCK();
                  bVar14 = plVar13 != DAT_14ca843c0;
                  plVar12 = plVar11;
                  if (bVar14) {
                    plVar13 = DAT_14ca843c0;
                    plVar12 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar12;
                  UNLOCK();
                } while (bVar14);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar14 = plVar12 != DAT_14ca843c8;
                  plVar13 = plVar11;
                  if (bVar14) {
                    plVar12 = DAT_14ca843c8;
                    plVar13 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar13;
                  UNLOCK();
                } while (bVar14);
              }
            }
          }
        }
      }
    }
    else {
      uVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x38))();
      local_58 = puVar3;
      FUN_143533d92(param_2,uVar10,0xd,(longlong *)(param_1 + 0x98));
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar7 = *(longlong *)(param_1 + 0x98);
        if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x28) & 0x10) == 0)) {
          local_48[0]._0_3_ = 0x10d00;
        }
        else {
          local_48[0]._0_3_ = 0x40000;
        }
        local_48[0] = (ulonglong)(uint3)local_48[0];
        local_48[1] = 0;
        local_58 = local_48;
        (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
        if (puVar3 != &local_50) {
          uVar9 = *puVar3;
          *puVar3 = local_50;
          local_50 = 0;
          if (uVar9 == 0) goto LAB_143533d28;
          LOCK();
          puVar2 = (uint *)(uVar9 + 8);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar4 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(uVar9 + 8);
            LOCK();
            uVar4 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar4 >> 0x1e & 1) == 0) {
              bVar6 = *(byte *)(uVar9 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = uVar9;
              plVar13 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar6 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar13;
                  LOCK();
                  bVar14 = plVar13 != DAT_14ca843c0;
                  plVar12 = plVar11;
                  if (bVar14) {
                    plVar13 = DAT_14ca843c0;
                    plVar12 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar12;
                  UNLOCK();
                } while (bVar14);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar14 = plVar12 != DAT_14ca843c8;
                  plVar13 = plVar11;
                  if (bVar14) {
                    plVar12 = DAT_14ca843c8;
                    plVar13 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar13;
                  UNLOCK();
                } while (bVar14);
              }
            }
          }
        }
        uVar9 = local_50;
        if (local_50 != 0) {
          LOCK();
          puVar2 = (uint *)(local_50 + 8);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar4 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(local_50 + 8);
            LOCK();
            uVar4 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar4 >> 0x1e & 1) == 0) {
              bVar6 = *(byte *)(local_50 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = uVar9;
              plVar13 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar6 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar13;
                  LOCK();
                  bVar14 = plVar13 != DAT_14ca843c0;
                  plVar12 = plVar11;
                  if (bVar14) {
                    plVar13 = DAT_14ca843c0;
                    plVar12 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar12;
                  UNLOCK();
                } while (bVar14);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar14 = plVar12 != DAT_14ca843c8;
                  plVar13 = plVar11;
                  if (bVar14) {
                    plVar12 = DAT_14ca843c8;
                    plVar13 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar13;
                  UNLOCK();
                } while (bVar14);
              }
            }
          }
        }
      }
    }
  }
LAB_143533d28:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143533d92 FUN_143533d92 body=1043 status=ok
// SIG undefined FUN_143533d92(void)

void FUN_143533d92(longlong param_1,longlong *param_2,undefined1 param_3,longlong *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"FStaticMeshInstanceBuffer";
  local_48 = 0;
  uStack_40 = 0;
  local_78 = param_2;
  iVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  local_98 = (undefined1)iVar5;
  uStack_97 = (undefined1)((uint)iVar5 >> 8);
  uStack_96 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar5 == 0) {
    FUN_14570b4be(param_1,&local_80,0x4101,0);
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14002049c(param_1,1);
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_1,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_1,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_1,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  if (&local_a0 == param_4) {
LAB_143533f49:
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar4 = *param_4;
    *param_4 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_143533f49;
    }
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0) {
    if ((*param_4 == 0) || ((*(byte *)(*param_4 + 0x28) & 0x10) == 0)) {
      uStack_96 = 1;
      uStack_97 = param_3;
    }
    else {
      uStack_97 = 0;
      uStack_96 = 4;
    }
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_95 = 0;
    local_98 = 0;
    local_b8 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_1);
    if (&local_a0 != param_5) {
      lVar4 = *param_5;
      *param_5 = local_a0;
      local_a0 = 0;
      if (lVar4 == 0) goto LAB_1435340f9;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
LAB_1435340f9:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435341c2 FUN_1435341c2 body=749 status=ok
// SIG undefined FUN_1435341c2(void)

void FUN_1435341c2(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  longlong *local_100;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar8 = (uint)*(byte *)((longlong)param_1 + 0xc);
  if (*(byte *)((longlong)param_1 + 0xc) == 5) {
    uVar8 = DAT_14c760db4;
  }
  bVar7 = DAT_14ca96500;
  if (uVar8 != 1) {
    if ((int)uVar8 < 3) {
      bVar7 = 0;
    }
    else {
      lVar2 = (ulonglong)DAT_14ca85550 * 0x3c;
      bVar7 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490) &&
         (bVar7 = 0, DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0) {
          bVar7 = 1;
        }
        else {
          bVar7 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  uVar6 = 0;
  if ((1 < (int)uVar8) && ((*(uint *)(lVar2 + 0x28) & 0x4000) != 0)) {
    uVar6 = ((ulonglong)
             *(byte *)((longlong)&DAT_14ca814d0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)uVar8 * 2) * 0x3c + 6) &
            0xffffffffffffff10) >> 4;
  }
  local_30 = 0x1100000000;
  local_100 = param_1 + 2;
  local_108 = local_b8;
  FUN_1417ca9f0(uVar8,uVar6,param_1 + 0x26,param_1 + 0x44);
  local_108 = (undefined1 *)CONCAT71(local_108._1_7_,0xd);
  FUN_1447f936a(param_1,0,local_b8,0xd);
  FUN_1447f9616(param_1,local_b8,0);
  if (bVar7 == 0) {
    local_e8 = param_1[0x4e];
    local_e0 = param_1[0x4f];
    local_d8 = param_1[0x50];
    local_d0 = param_1[0x51];
    local_c8 = (undefined4)param_1[0x52];
    FUN_145e362c0();
    local_100 = (longlong *)((ulonglong)local_100 & 0xffffffff00000000);
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,2);
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_f0,&local_e8,DAT_14cae4be8);
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
      if (local_f0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_f0 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_f0 + 8);
          LOCK();
          uVar8 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar7 = *(byte *)(local_f0 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = local_f0;
            plVar5 = DAT_14ca843c0;
            plVar4 = DAT_14ca843c8;
            if ((bVar7 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar9 = plVar5 != DAT_14ca843c0;
                plVar4 = plVar3;
                if (bVar9) {
                  plVar5 = DAT_14ca843c0;
                  plVar4 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar4;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar3 = (longlong)plVar4;
                LOCK();
                bVar9 = plVar4 != DAT_14ca843c8;
                plVar5 = plVar3;
                if (bVar9) {
                  plVar4 = DAT_14ca843c8;
                  plVar5 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar5;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
    lVar2 = param_1[0x53];
    param_1[0x53] = local_f0;
    if (lVar2 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar2 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar2 + 8);
        LOCK();
        uVar8 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(lVar2 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar2;
          plVar5 = DAT_14ca843c0;
          plVar4 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c0;
              plVar4 = plVar3;
              if (bVar9) {
                plVar5 = DAT_14ca843c0;
                plVar4 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar4;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar3 = (longlong)plVar4;
              LOCK();
              bVar9 = plVar4 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar9) {
                plVar4 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435344b0 FUN_1435344b0 body=2431 status=ok
// SIG undefined FUN_1435344b0(void)

void FUN_1435344b0(byte param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6,uint param_7,longlong *param_8,char *param_9,
                  longlong *param_10,longlong *param_11)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  byte bVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  void *pvVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  size_t _Size;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  wchar_t *local_d0;
  longlong *local_c8;
  char *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  void *local_88;
  size_t local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((8 < param_1) || ((0x129U >> (param_1 & 0x1f) & 1) == 0)) goto LAB_1435347b3;
  local_b8 = *(undefined8 *)(param_9 + 0x40);
  local_a8 = param_11;
  local_b0 = param_10;
  local_c0 = param_9;
  local_c8 = param_8;
  local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,param_7);
  local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,param_6);
  FUN_143566a84(param_2,param_3,param_4,param_5);
  lVar7 = *(longlong *)(param_9 + 0x38);
  iVar10 = *(int *)(param_9 + 0x70);
  uVar1 = *(ushort *)(param_2 + 0x22);
  local_5c = iVar10;
  if (uVar1 != 0) {
    lVar6 = *param_10;
    uVar17 = *(ulonglong *)(lVar6 + 0x30);
    uVar8 = lVar6 + 0x30 + ((longlong)uVar17 >> 0x18);
    if ((uVar17 & 1) == 0) {
      uVar8 = uVar17;
    }
    lVar12 = (longlong)*(int *)(lVar6 + 0x38);
    if (0 < lVar12) {
      local_88 = (void *)CONCAT62(local_88._2_6_,*(short *)(param_2 + 0x20));
      iVar15 = *(int *)(lVar6 + 0x28);
      iVar11 = iVar15 + 0xe;
      if (-1 < iVar15 + 7) {
        iVar11 = iVar15 + 7;
      }
      pvVar13 = (void *)((ulonglong)
                         (uint)((iVar11 >> 3) +
                               (*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x18) + iVar15) * 8) +
                        param_10[1]);
      puVar9 = (ulonglong *)(uVar8 + 8);
      do {
        if (*(short *)(param_2 + 0x1e) == (short)puVar9[-1]) {
          uVar17 = *puVar9;
          uVar8 = ((longlong)uVar17 >> 0x18) + (longlong)puVar9;
          if ((uVar17 & 1) == 0) {
            uVar8 = uVar17;
          }
          if (0 < (longlong)(int)puVar9[1]) {
            lVar6 = 0;
            goto LAB_143534999;
          }
          break;
        }
        pvVar13 = (void *)((longlong)pvVar13 + (ulonglong)*(ushort *)((longlong)puVar9 + -6));
        puVar9 = puVar9 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  goto LAB_143534581;
  while( true ) {
    pvVar13 = (void *)((longlong)pvVar13 + (ulonglong)*(ushort *)(uVar8 + 2 + lVar7 * 4));
    lVar7 = lVar7 + 1;
    if ((int)puVar9[1] == lVar7) break;
LAB_143534880:
    if (*(short *)(param_2 + 0xe) == *(short *)(uVar8 + lVar7 * 4)) {
      _Size = 0x10;
      if (uVar1 < 0x10) {
        _Size = (size_t)(uint)uVar1;
      }
      memcpy(pvVar13,&local_78,_Size);
      uVar14 = (uint)uVar1 - (int)_Size;
      memset((void *)((longlong)pvVar13 + _Size),0,(longlong)(int)((int)uVar14 >> 0x1f & uVar14));
      break;
    }
  }
  goto LAB_143534622;
  while( true ) {
    pvVar13 = (void *)((longlong)pvVar13 + (ulonglong)*(ushort *)(uVar8 + 2 + lVar6 * 4));
    lVar6 = lVar6 + 1;
    if ((int)puVar9[1] == lVar6) break;
LAB_143534999:
    if (*(short *)(param_2 + 0x20) == *(short *)(uVar8 + lVar6 * 4)) {
      local_80 = 4;
      if (uVar1 < 4) {
        local_80 = (size_t)(uint)uVar1;
      }
      local_88 = pvVar13;
      memcpy(pvVar13,&local_5c,local_80);
      uVar14 = (uint)uVar1 - (int)local_80;
      memset((void *)((longlong)local_88 + local_80),0,(longlong)(int)((int)uVar14 >> 0x1f & uVar14)
            );
      break;
    }
  }
LAB_143534581:
  if (param_3 == 0) {
    puVar5 = &DAT_14ca85550;
  }
  else {
    puVar5 = (ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 8) * 2);
  }
  uVar17 = (ulonglong)*puVar5;
  lVar6 = uVar17 * 0x3c;
  bVar4 = DAT_14ca96500;
  if ((&DAT_14ca814b8)[uVar17 * 0xf] == 1) {
joined_r0x000143534b12:
    if (bVar4 == 0) {
LAB_143534b18:
      local_88 = (void *)param_8[0x53];
      FUN_145e362c0();
      uVar17 = *(ulonglong *)(param_5 + 0xa0);
      uVar8 = param_5 + 0xa0 + ((longlong)uVar17 >> 0x18);
      if ((uVar17 & 1) == 0) {
        uVar8 = uVar17;
      }
      if (0 < (longlong)*(int *)(param_5 + 0xa8)) {
        lVar6 = 0;
        do {
          if (*(longlong *)(uVar8 + lVar6 * 4) == DAT_14cae4bc8) {
            uVar17 = *(ulonglong *)(param_5 + 0xb0);
            uVar8 = param_5 + 0xb0 + ((longlong)uVar17 >> 0x18);
            if ((uVar17 & 1) == 0) {
              uVar8 = uVar17;
            }
            puVar5 = (ushort *)(uVar8 + lVar6);
            goto LAB_143534be8;
          }
          lVar6 = lVar6 + 2;
        } while ((longlong)*(int *)(param_5 + 0xa8) * 2 != lVar6);
      }
      puVar5 = &DAT_14c9c45cc;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1))
      {
        DAT_14c9c45cc = 0xffff;
        _Init_thread_footer(&DAT_14c9c45d0);
      }
LAB_143534be8:
      uVar1 = *puVar5;
      if (uVar1 != 0xffff) {
        puVar9 = (ulonglong *)*param_10;
        uVar17 = *puVar9;
        uVar8 = ((longlong)uVar17 >> 0x18) + (longlong)puVar9;
        if ((uVar17 & 1) == 0) {
          uVar8 = uVar17;
        }
        uVar14 = (uint)puVar9[1];
        uVar17 = 0;
        uVar18 = uVar14;
        if (8 < (int)uVar14) {
          uVar17 = 0;
          uVar19 = (ulonglong)uVar14;
          uVar16 = uVar14;
          do {
            uVar19 = uVar19 >> 1;
            uVar18 = (uint)uVar19;
            uVar20 = uVar18 + (int)uVar17;
            if (*(ushort *)(uVar8 + (ulonglong)uVar20 * 2) < uVar1) {
              uVar17 = (ulonglong)(uVar20 + (uVar16 & 1));
            }
            bVar3 = 0x11 < uVar16;
            uVar16 = uVar18;
          } while (bVar3);
        }
        iVar15 = (int)uVar17;
        uVar18 = uVar18 + iVar15 + 1;
        if ((int)uVar18 < (int)uVar14) {
          uVar14 = uVar18;
        }
        iVar11 = uVar14 - iVar15;
        if (iVar11 != 0 && iVar15 <= (int)uVar14) {
          do {
            if (*(ushort *)(uVar8 + uVar17 * 2) == uVar1) {
              *(void **)(param_10[1] + (uVar17 & 0xffffffff) * 8) = local_88;
              break;
            }
            uVar17 = uVar17 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      lVar6 = (**(code **)(*param_8 + 0x30))();
      if (((1 < (int)param_7) && ((*(uint *)(lVar6 + 0x28) & 0x4000) != 0)) &&
         ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_7 * 2) * 0x3c + 6) &
          0x10) != 0)) {
        if ((*(uint *)(param_2 + 0x12) & 0xff0000) != 0) {
          FUN_147511800(param_10,param_8[0x4e],*(uint *)(param_2 + 0x12) & 0xffff);
        }
        if ((*(uint *)(param_2 + 0x16) & 0xff0000) != 0) {
          FUN_147511800(param_10,param_8[0x4f],*(uint *)(param_2 + 0x16) & 0xffff);
        }
        if ((*(uint *)(param_2 + 0x1a) & 0xff0000) != 0) {
          FUN_147511800(param_10,param_8[0x50],*(uint *)(param_2 + 0x1a) & 0xffff);
        }
      }
      if ((0 < iVar10) && (0 < (int)param_11[0xc])) {
        FUN_144b1d1da(param_8,iVar10,param_6,param_11);
      }
    }
  }
  else {
    if ((((int)(&DAT_14ca814b8)[uVar17 * 0xf] < 3) || (uVar17 == 0xc)) ||
       (*(longlong *)(&DAT_14ca814b0 + lVar6) == DAT_14ca81490)) goto LAB_143534b18;
    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar6 + 3) & 0x10) != 0) {
      bVar4 = *(byte *)((longlong)&DAT_14ca814c8 + lVar6 + 3) & 0x20;
      goto joined_r0x000143534b12;
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  if ((lVar7 != 0) && ((param_9[0x7c] & 0xf0U) != 0)) {
    local_78 = CONCAT44((float)*(double *)(lVar7 + 0x48),(float)*(double *)(lVar7 + 0x40));
    uStack_70 = CONCAT44(0x3f800000,(float)*(double *)(lVar7 + 0x50));
  }
  uVar1 = *(ushort *)(param_2 + 0x10);
  if (uVar1 != 0) {
    lVar7 = *param_10;
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar8 = lVar7 + 0x30 + ((longlong)uVar17 >> 0x18);
    if ((uVar17 & 1) == 0) {
      uVar8 = uVar17;
    }
    lVar6 = (longlong)*(int *)(lVar7 + 0x38);
    if (0 < lVar6) {
      iVar10 = *(int *)(lVar7 + 0x28);
      iVar15 = iVar10 + 0xe;
      if (-1 < iVar10 + 7) {
        iVar15 = iVar10 + 7;
      }
      pvVar13 = (void *)((ulonglong)
                         (uint)((iVar15 >> 3) +
                               (*(int *)(lVar7 + 8) + *(int *)(lVar7 + 0x18) + iVar10) * 8) +
                        param_10[1]);
      puVar9 = (ulonglong *)(uVar8 + 8);
      do {
        if (*(short *)(param_2 + 0xc) == (short)puVar9[-1]) {
          uVar17 = *puVar9;
          uVar8 = ((longlong)uVar17 >> 0x18) + (longlong)puVar9;
          if ((uVar17 & 1) == 0) {
            uVar8 = uVar17;
          }
          if (0 < (longlong)(int)puVar9[1]) {
            lVar7 = 0;
            goto LAB_143534880;
          }
          break;
        }
        pvVar13 = (void *)((longlong)pvVar13 + (ulonglong)*(ushort *)((longlong)puVar9 + -6));
        puVar9 = puVar9 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
LAB_143534622:
  uVar2 = *(undefined8 *)(param_9 + 0x10);
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae4cb8) && (FUN_144b3d300(&DAT_14cae4cb8), DAT_14cae4cb8 == -1)) {
    FUN_14572917e(local_58);
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_c0 = "Unknown";
    local_c8 = (longlong *)0x0;
    local_d0 = L"InstancedVFLooseParameters";
    local_d8 = L"FInstancedStaticMeshVFLooseUniformShaderParameters";
    local_b0 = (longlong *)CONCAT44(local_b0._4_4_,0x60);
    local_b8 = CONCAT44(local_b8._4_4_,0x32);
    local_a8 = local_58;
    FUN_140b49562(&DAT_14cae4c38,1,1);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1435332dc);
    _Init_thread_footer(&DAT_14cae4cb8);
  }
  uVar17 = *(ulonglong *)(param_5 + 0xa0);
  uVar8 = param_5 + 0xa0 + ((longlong)uVar17 >> 0x18);
  if ((uVar17 & 1) == 0) {
    uVar8 = uVar17;
  }
  if (0 < (longlong)*(int *)(param_5 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == DAT_14cae4c60) {
        uVar17 = *(ulonglong *)(param_5 + 0xb0);
        if ((uVar17 & 1) != 0) {
          uVar17 = ((longlong)uVar17 >> 0x18) + param_5 + 0xb0;
        }
        puVar5 = (ushort *)(uVar17 + lVar7);
        goto LAB_143534750;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_5 + 0xa8) * 2 != lVar7);
  }
  puVar5 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_143534750:
  uVar1 = *puVar5;
  if (uVar1 != 0xffff) {
    puVar9 = (ulonglong *)*param_10;
    uVar17 = *puVar9;
    uVar8 = ((longlong)uVar17 >> 0x18) + (longlong)puVar9;
    if ((uVar17 & 1) == 0) {
      uVar8 = uVar17;
    }
    uVar14 = (uint)puVar9[1];
    uVar16 = 0;
    uVar18 = uVar14;
    if (8 < (int)uVar14) {
      uVar16 = 0;
      uVar20 = uVar14;
      do {
        uVar18 = uVar20 >> 1;
        if (*(ushort *)(uVar8 + (ulonglong)(uVar18 + uVar16) * 2) < uVar1) {
          uVar16 = uVar18 + uVar16 + (uVar20 & 1);
        }
        bVar3 = 0x11 < uVar20;
        uVar20 = uVar18;
      } while (bVar3);
    }
    uVar18 = uVar18 + uVar16 + 1;
    if ((int)uVar18 < (int)uVar14) {
      uVar14 = uVar18;
    }
    iVar10 = uVar14 - uVar16;
    if (iVar10 != 0 && (int)uVar16 <= (int)uVar14) {
      uVar17 = (ulonglong)uVar16;
      do {
        if (*(ushort *)(uVar8 + uVar17 * 2) == uVar1) {
          *(undefined8 *)(param_10[1] + (uVar17 & 0xffffffff) * 8) = uVar2;
          break;
        }
        uVar17 = uVar17 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
LAB_1435347b3:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143534e30 FUN_143534e30 body=41 status=ok
// SIG undefined FUN_143534e30(void)

undefined * FUN_143534e30(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((param_1 < 9) && ((0x129U >> (param_1 & 0x1f) & 1) != 0)) {
    FUN_145da05a2();
    puVar1 = &DAT_14cae4b30;
  }
  return puVar1;
}



// FUNCTION 1435356c2 FUN_1435356c2 body=117 status=ok
// SIG undefined FUN_1435356c2(void)

void FUN_1435356c2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a975858;
  plVar3 = (longlong *)param_1[0x39];
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
  if (*(char *)(param_1 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  *param_1 = &PTR_FUN_14a9758a8;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435357c8 FUN_1435357c8 body=438 status=ok
// SIG undefined FUN_1435357c8(void)

undefined8 * FUN_1435357c8(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0x8000000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xc) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9e) = 0x80;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x16) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xb4) = iVar2;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xff7fffff7f7fffff;
  *(undefined1 **)((longlong)param_1 + 0x16c) = &DAT_ff7fffffff7fffff;
  if ((((iVar2 != 0) && (uVar1 = *(uint *)(param_1 + 0x16), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == iVar2)) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x9d) = 2;
    }
  }
  return param_1;
}



// FUNCTION 14353597e FUN_14353597e body=182 status=ok
// SIG undefined FUN_14353597e(void)

undefined8 FUN_14353597e(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_14490dacc(param_1,1);
  if (((cVar1 == '\0') || (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)) {
    if (((param_3 == '\0') || (*(longlong *)(param_1 + 0x700) != 0)) ||
       (*(longlong *)(param_1 + 0x708) != 0)) {
      uVar2 = FUN_14001cc68(0xac0,0x10);
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
      FUN_1403fb3a4(uVar2,param_1,*(undefined1 *)(lVar3 + 0x150));
    }
    else {
      *(byte *)(param_1 + 0x66c) = *(byte *)(param_1 + 0x66c) | 8;
      uVar2 = FUN_14001cc68(0x920,0x10);
      FUN_1401ea02c(uVar2,param_2,param_1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143535a34 FUN_143535a34 body=3412 status=ok
// SIG undefined FUN_143535a34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143535a34(longlong *param_1)

{
  uint uVar1;
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
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  double *pdVar19;
  longlong lVar20;
  double *pdVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined8 local_3d0;
  double *local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  longlong *local_390;
  double local_388;
  double local_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318 [2];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  longlong local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  lVar16 = param_1[0x16];
  if (lVar16 == 0) {
    lVar16 = FUN_1448abda6(param_1);
  }
  if (*(longlong *)(lVar16 + 0x260) != 0) {
    uVar1 = *(uint *)(param_1 + 0xe5);
    local_3b8 = (**(code **)(*param_1 + 0x7a0))(param_1);
    if (local_3b8 == 0) {
      iVar15 = (int)param_1[0x108];
      *(uint *)(param_1 + 0x108) = iVar15 + uVar1;
      if ((uint)(*(int *)((longlong)param_1 + 0x844) - iVar15) < uVar1) {
        FUN_1405a36b0(param_1 + 0x107);
      }
      memset((void *)((longlong)iVar15 * 8 + param_1[0x107]),0,(longlong)(int)uVar1 << 3);
    }
    else {
      lVar16 = param_1[0x16];
      if (lVar16 == 0) {
        lVar16 = FUN_1448abda6(param_1);
      }
      local_398 = *(undefined8 *)(lVar16 + 0x260);
      if ((*(byte *)((longlong)param_1 + 0x44d) & 0x10) == 0) {
        lVar16 = *(longlong *)(local_3b8 + 0xd0);
        param_1[0xa4] = *(longlong *)(local_3b8 + 200);
        param_1[0xa5] = lVar16;
      }
      local_3b0 = param_1 + 0x107;
      iVar15 = (int)param_1[0x108];
      if (iVar15 < (int)uVar1) {
        *(uint *)(param_1 + 0x108) = uVar1;
        if ((uint)(*(int *)((longlong)param_1 + 0x844) - iVar15) < uVar1 - iVar15) {
          FUN_1405a36b0(local_3b0);
        }
        local_2a8 = 0;
        uStack_2a0 = 0;
        if ((int)uVar1 < 0) {
LAB_14353676e:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)uVar1);
        }
      }
      else {
        if ((int)uVar1 < 0) goto LAB_14353676e;
        if ((int)uVar1 < iVar15) {
          *(uint *)(param_1 + 0x108) = uVar1;
          FUN_141064088(local_3b0);
        }
      }
      uStack_2a0 = 0;
      local_2a8 = 0;
      if (uVar1 != 0) {
        local_390 = param_1 + 0x82;
        FUN_14179bc96(&local_2a8,uVar1);
        local_2b8 = 0;
        uStack_2b0 = 0;
        FUN_1401a2688(&local_2b8,uVar1);
        lVar16 = 0;
        uVar22 = 0;
        do {
          pdVar19 = &local_378;
          uVar14 = FUN_1448ac920(&local_378,param_1[0xe4] + lVar16);
          local_2f8 = 0.0;
          dStack_2f0 = 0.0;
          auVar28 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar2 = auVar28._0_8_;
          dVar4 = auVar28._8_8_;
          auVar29 = *(undefined1 (*) [16])(param_1 + 0x52);
          dVar27 = auVar29._0_8_;
          dVar39 = auVar29._8_8_;
          dVar3 = local_338._0_8_;
          dVar5 = local_338._8_8_;
          dVar40 = local_328._0_8_;
          auVar28 = minpd(local_338,auVar28);
          auVar31 = minpd(local_328,auVar29);
          auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
          auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
          iVar15 = movmskpd(uVar14,auVar29);
          auVar28._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
          auVar28._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
          uVar18 = movmskpd((int)pdVar19,auVar28);
          if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
            local_3a8 = local_328;
            dVar9 = (double)param_1[0x48];
            dVar10 = (double)param_1[0x49];
            dVar11 = (double)param_1[0x4a];
            dVar12 = (double)param_1[0x4b];
            dVar30 = (double)param_1[0x4b];
            dVar38 = (double)param_1[0x4b];
            dVar24 = (double)param_1[0x48];
            dVar41 = (double)param_1[0x48];
            dVar26 = (double)param_1[0x49];
            dVar33 = (double)param_1[0x49];
            dVar35 = (double)param_1[0x4a];
            dVar36 = (double)param_1[0x4a];
            local_318[0] = dStack_370 * dVar35 * -1.0 +
                           local_368 * dVar26 + dStack_360 * dVar24 * 1.0 + local_378 * dVar30;
            local_318[1] = local_378 * dVar36 * 1.0 +
                           dStack_360 * dVar33 + local_368 * dVar41 * -1.0 + dStack_370 * dVar38;
            dVar42 = local_358 * dVar2;
            dVar43 = dStack_350 * dVar4;
            dVar7 = local_348 * dVar27;
            dVar8 = dStack_340 * dVar39;
            dVar44 = dVar43 * dVar9 - dVar10 * dVar42;
            dVar45 = dVar7 * dVar10 - dVar11 * dVar43;
            dVar37 = dVar42 * dVar11 - dVar9 * dVar7;
            dVar6 = dVar8 * dVar12 - dVar12 * dVar8;
            dVar45 = dVar45 + dVar45;
            dVar37 = dVar37 + dVar37;
            dVar44 = dVar44 + dVar44;
            dVar6 = dVar6 + dVar6;
            local_2f8 = (dVar44 * dVar10 - dVar11 * dVar37) + dVar30 * dVar45 + dVar42 +
                        (double)param_1[0x4c];
            dStack_2f0 = (dVar45 * dVar11 - dVar44 * dVar9) + dVar38 * dVar37 + dVar43 +
                         (double)param_1[0x4d];
            local_2e8 = (dVar37 * dVar9 - dVar10 * dVar45) + dVar30 * dVar44 + dVar7 +
                        (double)param_1[0x4e];
            dStack_2e0 = (dVar6 * dVar12 - dVar6 * dVar12) + dVar38 * dVar6 + dVar8 +
                         (double)param_1[0x4f];
            local_308._8_8_ =
                 local_368 * dVar36 * -1.0 +
                 ((dVar41 * local_378 * -1.0 + dStack_360 * dVar38) - dStack_370 * dVar33);
            local_308._0_8_ =
                 dStack_360 * dVar35 * 1.0 +
                 ((dVar24 * dStack_370 * 1.0 + local_368 * dVar30) - local_378 * dVar26);
            dVar40 = dVar40 * dVar27;
            dVar39 = local_328._8_8_ * dVar39;
          }
          else {
            dVar38 = (double)param_1[0x48];
            dVar24 = (double)param_1[0x49];
            dVar41 = (double)param_1[0x4a];
            dVar33 = dVar24 + dVar24;
            dVar35 = dVar41 + dVar41;
            dVar26 = dVar38 * (dVar38 + dVar38);
            local_1a8 = (1.0 - (dVar26 + dVar24 * dVar33)) * dVar27;
            dVar30 = (double)param_1[0x4b];
            dVar36 = dVar35 * dVar30;
            dVar37 = (dVar38 + dVar38) * (double)param_1[0x4b];
            dVar30 = dVar33 * dVar30;
            local_1b8 = (dVar30 + (double)param_1[0x48] * dVar35) * dVar27;
            dVar39 = dVar39 * local_328._8_8_;
            local_3a8._8_4_ = SUB84(dVar39,0);
            local_3a8._0_8_ = dVar27 * dVar40;
            local_3a8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            dStack_1d0 = (1.0 - (dVar41 * dVar35 + dVar26)) * dVar4;
            dVar39 = (dVar33 * dVar38 + dVar36) * dVar2;
            local_1c8 = (dVar35 * dVar24 + dVar37) * dVar4;
            local_1d8 = (dVar33 * dVar38 - dVar36) * dVar4;
            dStack_1b0 = (dVar35 * dVar24 - dVar37) * dVar27;
            local_1e8 = ((double)param_1[0x48] * dVar35 - dVar30) * dVar2;
            local_1f8._8_4_ = SUB84(dVar39,0);
            local_1f8._0_8_ = (1.0 - (dVar41 * dVar35 + dVar24 * dVar33)) * dVar2;
            local_1f8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0x4c];
            lStack_190 = param_1[0x4d];
            local_188 = param_1[0x4e];
            uStack_180 = 0x3ff0000000000000;
            dVar39 = dStack_370 + dStack_370;
            dVar30 = local_368 + local_368;
            dVar27 = local_378 * (local_378 + local_378);
            local_228 = (1.0 - (dVar27 + dStack_370 * dVar39)) * dVar40;
            dVar38 = (local_378 + local_378) * dStack_360;
            local_238 = (dVar39 * dStack_360 + local_378 * dVar30) * dVar40;
            dStack_230 = (dVar30 * dStack_370 - dVar38) * dVar40;
            local_278 = (1.0 - (local_368 * dVar30 + dStack_370 * dVar39)) * dVar3;
            dVar27 = (1.0 - (local_368 * dVar30 + dVar27)) * dVar5;
            dStack_270 = (dVar39 * local_378 + dVar30 * dStack_360) * dVar3;
            local_248 = (dVar30 * dStack_370 + dVar38) * dVar5;
            local_268 = (local_378 * dVar30 - dVar39 * dStack_360) * dVar3;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar27,0);
            local_258._0_8_ = (dVar39 * local_378 - dVar30 * dStack_360) * dVar5;
            local_258._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_358;
            dStack_210 = dStack_350;
            local_208 = local_348;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            local_380 = local_168;
            dVar40 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
            local_388 = local_148;
            dVar39 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar27 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar23 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
            dVar30 = (double)(~uVar23 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar40)) & uVar23);
            uVar23 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
            dVar38 = (double)(~uVar23 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar39)) & uVar23);
            uVar23 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
            dVar27 = (double)(~uVar23 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar27)) & uVar23);
            dVar40 = (double)local_3a8._0_8_;
            dVar39 = (double)local_3a8._8_8_;
            auVar31._8_8_ = -(ulonglong)(0.0 <= dVar4 * dVar5);
            auVar31._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar3);
            auVar28 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar31);
            dVar24 = (double)(~-(ulonglong)(0.0 <= (double)local_3a8._0_8_) & 0xbff0000000000000 |
                             (ulonglong)
                             ((uint)(-(ulonglong)(0.0 <= (double)local_3a8._0_8_) >> 0x20) &
                             0x3ff00000) << 0x20);
            dVar41 = auVar28._0_8_;
            local_178 = local_178 * dVar30 * dVar41;
            local_170 = local_170 * dVar30 * dVar41;
            local_168 = dVar30 * local_168 * dVar41;
            dVar30 = auVar28._8_8_;
            local_148 = dVar38 * local_148 * dVar30;
            local_150 = local_150 * dVar38 * dVar30;
            local_158 = dVar30 * local_158 * dVar38;
            local_128 = dVar27 * local_128 * dVar24;
            local_130 = local_130 * dVar27 * dVar24;
            local_138 = dVar24 * local_138 * dVar27;
            FUN_14481fd10(&local_298,&local_178);
            dVar27 = local_288 * local_288 + local_298 * local_298;
            dVar30 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar32._0_8_ = dVar27 + dVar30;
            auVar32._8_8_ = dVar27 + dVar30;
            auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
            auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
            auVar28 = sqrtpd(auVar32,auVar32);
            auVar28 = divpd(_DAT_149934d80,auVar28);
            auVar34._0_8_ = auVar28._0_8_ * local_288;
            auVar34._8_8_ = auVar28._8_8_ * dStack_280;
            local_308 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar25);
            local_318[0] = (double)((ulonglong)(local_298 * auVar28._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
            local_318[1] = (double)((ulonglong)(dStack_290 * auVar28._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
            dStack_2e0 = 0.0;
            local_2f8 = local_118;
            dStack_2f0 = dStack_110;
            local_2e8 = local_108;
          }
          dVar4 = dVar4 * dVar5;
          local_2d8._8_4_ = SUB84(dVar4,0);
          local_2d8._0_8_ = dVar2 * dVar3;
          local_2d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          local_2c8._8_4_ = SUB84(dVar39,0);
          local_2c8._0_8_ = dVar40;
          local_2c8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
          if (((9.999999747378752e-05 < ABS(dVar2 * dVar3)) || (9.999999747378752e-05 < ABS(dVar4)))
             || (9.999999747378752e-05 < ABS(dVar40))) {
            lVar17 = FUN_14001cc68(0x188,0x10);
            FUN_144805afa(lVar17);
            uVar23 = uStack_2a0;
            lVar20 = (longlong)(int)uStack_2a0;
            uVar18 = (int)uStack_2a0 + 1;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar18);
            if (uStack_2a0._4_4_ < uVar18) {
              FUN_1405a36b0(&local_2a8,uVar23 & 0xffffffff);
            }
            *(longlong *)(local_2a8 + lVar20 * 8) = lVar17;
            *(longlong *)(param_1[0x107] + uVar22 * 8) = lVar17;
            FUN_1400f437c(lVar17,local_390);
            uVar23 = uStack_2b0;
            *(int *)(lVar17 + 0xc) = (int)uVar22;
            *(byte *)(lVar17 + 8) = *(byte *)(lVar17 + 8) & 0xee;
            if (*(char *)((longlong)param_1 + 0x1fb) == '\x02') {
              local_178 = (double)CONCAT62(local_178._2_6_,1);
              local_3c0 = 0;
              local_3c8 = &local_178;
              local_3d0 = local_398;
              local_3d8 = 0;
              FUN_140311a3a(lVar17,local_3b8,local_318,param_1);
            }
            else {
              lVar17 = (longlong)(int)uStack_2b0;
              uVar18 = (int)uStack_2b0 + 1;
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar18);
              if (uStack_2b0._4_4_ < uVar18) {
                FUN_144a2c682(&local_2b8,uVar23 & 0xffffffff);
              }
              pdVar19 = local_318;
              pdVar21 = (double *)(lVar17 * 0x60 + local_2b8);
              for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                *pdVar21 = *pdVar19;
                pdVar19 = pdVar19 + 1;
                pdVar21 = pdVar21 + 1;
              }
            }
          }
          else {
            *(undefined8 *)(*local_3b0 + uVar22 * 8) = 0;
          }
          uVar22 = uVar22 + 1;
          lVar16 = lVar16 + 0x80;
        } while (uVar1 != uVar22);
        if ((0 < (int)uStack_2a0) && (*(char *)((longlong)param_1 + 0x1fb) != '\x02')) {
          lVar16 = param_1[0x16];
          if (lVar16 == 0) {
            lVar16 = FUN_1448abda6(param_1);
          }
          local_3d8 = *(undefined8 *)(lVar16 + 0x260);
          local_3d0 = 0;
          FUN_143606434(&local_2a8,&local_2b8,local_3b8,param_1);
        }
        if (local_2b8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
    }
    *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 8;
    cVar13 = (**(code **)(*param_1 + 0x460))(param_1);
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar13 << 6;
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14353678a FUN_14353678a body=88 status=ok
// SIG undefined FUN_14353678a(void)

void FUN_14353678a(longlong param_1)

{
  char cVar1;
  
  FUN_14342d416();
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_1 + 0x808);
  *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0x810);
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x460))(param_1 + -0x30);
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xbf | cVar1 << 6;
  return;
}



// FUNCTION 1435367e2 FUN_1435367e2 body=153 status=ok
// SIG undefined FUN_1435367e2(void)

void FUN_1435367e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x800);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x7f8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140156df6(lVar3,0,0);
        lVar3 = *(longlong *)(lVar2 + lVar4);
        if (lVar3 != 0) {
          FUN_144760d56(lVar3);
          FUN_1400020a8(lVar3);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x800) = 0;
  if (*(int *)(param_1 + 0x804) != 0) {
    FUN_14179bc96(param_1 + 0x7f8,0);
    return;
  }
  return;
}



// FUNCTION 14353687c FUN_14353687c body=2291 status=ok
// SIG undefined FUN_14353687c(void)

void FUN_14353687c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  byte bVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140a39be2();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e38f8c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39474);
  if (param_2[0xd] == 0) {
    bVar17 = false;
  }
  else {
    bVar17 = *(longlong *)(param_2[0xd] + 0x10) != 0;
  }
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if ((10 < iVar8) || (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc28), 0x17 < iVar8)) {
    puVar4 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      local_68 = (code *)CONCAT44(local_68._4_4_,(uint)bVar17);
      (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
      if (1 < (uint)local_68) {
        FUN_14572541c(param_2);
      }
      bVar17 = (uint)local_68 != 0;
    }
    else {
      bVar17 = *(int *)*puVar4 != 0;
      *puVar4 = (ulonglong)piVar2;
    }
  }
  lVar12 = FUN_144938c96(param_1);
  bVar16 = 1;
  if (lVar12 == 0) {
LAB_1435369dd:
    lVar12 = 0;
  }
  else {
    if (DAT_14cac1d70 == 0) {
      local_90 = &local_68;
      local_68 = FUN_144b223ce;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1432411d6;
      local_98 = &LAB_147878f54;
      local_a0 = &LAB_1417ad3ba;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0xb10;
      FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
    }
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cac1d70 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) != DAT_14cac1d70 + 0x30)) goto LAB_1435369dd;
    if ((((*(byte *)(param_1 + 0x7d4) & 2) != 0) || ((*(byte *)(param_1 + 0x9e) & 0x20) == 0)) &&
       (cVar7 = FUN_1403d2392(lVar12), cVar7 != '\0')) {
      bVar16 = FUN_144a792c0(param_1,0x30);
    }
  }
  bVar16 = (*(byte *)((longlong)param_2 + 0x29) & 1) == 0 | bVar16;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_68 = (code *)CONCAT44(local_68._4_4_,(uint)bVar16);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar9 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar9 = (uint)local_68;
    }
  }
  else {
    uVar9 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (uVar9 != 0) {
      FUN_1401987b4(param_1 + 0x720,param_2,*(int *)((longlong)param_2 + 0x44) < 0x3ec);
      FUN_140ec5f04(param_1 + 0x7a8,param_2,0);
    }
  }
  else {
    local_68 = (code *)0x0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (uVar9 == 0) {
      if (bVar16 == 0) goto LAB_143536c75;
    }
    else {
      FUN_1401987b4(&local_68,param_2,*(int *)((longlong)param_2 + 0x44) < 0x3ec);
      iVar8 = FUN_1448332aa(param_2,&DAT_149e3cb60);
      if (0x27 < iVar8) {
        FUN_140ec5f04(&local_78,param_2,0);
      }
      if (bVar16 == 0) {
LAB_143536c75:
        FUN_14787dea6(param_1 + 0x720,lVar12 + 0x720);
        if (lVar12 != param_1) {
          iVar8 = *(int *)(lVar12 + 0x7b0);
          _Src = *(void **)(lVar12 + 0x7a8);
          *(int *)(param_1 + 0x7b0) = iVar8;
          if (iVar8 == 0 && *(int *)(param_1 + 0x7b4) == 0) {
            *(undefined4 *)(param_1 + 0x7b4) = 0;
          }
          else {
            FUN_1447c510a((undefined8 *)(param_1 + 0x7a8),iVar8);
            if (iVar8 != 0) {
              memcpy(*(void **)(param_1 + 0x7a8),_Src,(longlong)iVar8 << 2);
            }
          }
        }
        *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(lVar12 + 0x7a0);
      }
      else {
        if ((code **)(param_1 + 0x720) != &local_68) {
          if (*(longlong *)(param_1 + 0x720) != 0) {
            FUN_1400020a8();
          }
          *(code **)(param_1 + 0x720) = local_68;
          local_68 = (code *)0x0;
          *(undefined4 *)(param_1 + 0x728) = (undefined4)uStack_60;
          *(undefined4 *)(param_1 + 0x72c) = uStack_60._4_4_;
          uStack_60 = 0;
        }
        if ((longlong *)(param_1 + 0x7a8) != &local_78) {
          if (*(longlong *)(param_1 + 0x7a8) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x7a8) = local_78;
          local_78 = 0;
          *(undefined4 *)(param_1 + 0x7b0) = (undefined4)uStack_70;
          *(undefined4 *)(param_1 + 0x7b4) = uStack_70._4_4_;
          uStack_70 = 0;
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((bVar17 == false) ||
      ((iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbb8), iVar8 < 0xb &&
       (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc28), iVar8 < 0x18)))) ||
     ((*(byte *)(param_2 + 5) & 1) == 0)) goto LAB_143536c0d;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_68 = (code *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar9 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar9 = (uint)local_68;
    }
  }
  else {
    uVar9 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar9 == 0) goto LAB_143536c0d;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  FUN_147b01198(&local_68,param_2);
  FUN_140c151f0(local_58,param_2,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae6f68) && (FUN_144b3d300(&DAT_14cae6f68), DAT_14cae6f68 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SceneCulling.Precomputed",1);
    if (plVar13 == (longlong *)0x0) {
      DAT_14cae6f60 = 0;
    }
    else {
      DAT_14cae6f60 = (**(code **)(*plVar13 + 0x68))(plVar13);
    }
    _Init_thread_footer(&DAT_14cae6f68);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae6f78) && (FUN_144b3d300(&DAT_14cae6f78), DAT_14cae6f78 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SceneCulling",1);
    if (plVar13 == (longlong *)0x0) {
      DAT_14cae6f70 = 0;
    }
    else {
      DAT_14cae6f70 = (**(code **)(*plVar13 + 0x68))(plVar13);
    }
    _Init_thread_footer(&DAT_14cae6f78);
  }
  lVar12 = DAT_14cae6f70;
  if (DAT_14cae6f70 == 0) {
LAB_143536f0f:
    *(undefined8 *)(param_1 + 0x980) = 0;
    plVar13 = *(longlong **)(param_1 + 0x988);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x988) = 0;
LAB_143536f31:
      LOCK();
      plVar15 = plVar13 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar8 = *(int *)(lVar5 + 0xc60);
    if (iVar8 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
        if (iVar8 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar17 = DVar10 == DVar11;
        }
        else {
          bVar17 = false;
        }
      }
      uVar14 = (ulonglong)(bVar17 ^ 1);
    }
    lVar6 = DAT_14cae6f60;
    if (DAT_14cae6f60 == 0 || *(int *)(lVar12 + uVar14 * 4) == 0) goto LAB_143536f0f;
    iVar8 = *(int *)(lVar5 + 0xc60);
    if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
      uVar14 = 0;
    }
    else if (iVar8 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      uVar14 = (ulonglong)(DVar10 != DVar11);
    }
    else {
      uVar14 = 1;
    }
    if (*(int *)(lVar6 + uVar14 * 4) == 0) goto LAB_143536f0f;
    plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14a975530;
    FUN_147b4f224(plVar13 + 2,&local_68);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x980) = plVar13 + 2;
      plVar15 = *(longlong **)(param_1 + 0x988);
      if (plVar13 == plVar15) {
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x988) = plVar13;
        if (plVar15 != (longlong *)0x0) goto LAB_143537008;
      }
      goto LAB_143536f31;
    }
    *(undefined8 *)(param_1 + 0x980) = 0x10;
    plVar15 = *(longlong **)(param_1 + 0x988);
    if (plVar15 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x988) = 0;
LAB_143537008:
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      if (plVar13 != (longlong *)0x0) goto LAB_143536f31;
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143536c0d:
  if ((local_58[2] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14353718e FUN_14353718e body=1510 status=ok
// SIG undefined FUN_14353718e(void)

longlong *
FUN_14353718e(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4,char param_5,
             byte param_6)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined7 uVar7;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  void *_Dst;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStack_178 [47];
  char local_149;
  undefined4 local_148;
  undefined4 local_144;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_104 [4];
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8 [12];
  longlong local_98;
  undefined8 uStack_90;
  undefined1 *local_80;
  undefined4 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar13 = *(int *)(param_3 + 1);
  *param_2 = 0;
  param_2[1] = 0;
  local_149 = param_4;
  if (param_4 != '\0') {
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (iVar13 != 0) {
      FUN_14481578e(param_2);
    }
  }
  iVar16 = (int)param_1[0xe5];
  lVar10 = (longlong)iVar13 * (longlong)(int)param_1[0xf4];
  iVar1 = (int)param_1[0xf6];
  uVar3 = (uint)lVar10;
  *(uint *)(param_1 + 0xf6) = uVar3 + iVar1;
  local_140 = param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0x7b4) - iVar1) < uVar3) {
    FUN_14475e4ac(param_1 + 0xf5);
  }
  _Dst = (void *)((longlong)iVar1 * 4 + param_1[0xf5]);
  memset(_Dst,0,lVar10 * 4);
  plVar6 = local_140;
  bVar2 = (byte)_Dst;
  iVar13 = iVar13 + iVar16;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  plVar8 = param_1 + 0xe4;
  local_128 = plVar8;
  if (*(int *)((longlong)param_1 + 0x72c) < iVar13) {
    FUN_1401989ec(plVar8,iVar13);
    bVar2 = (byte)plVar8;
  }
  if (((*(byte *)((longlong)param_1 + 0x7d4) & 0x20) != 0) &&
     (*(int *)((longlong)param_1 + 0x73c) < iVar13)) {
    plVar8 = param_1 + 0xe6;
    FUN_144920e50(plVar8,iVar13);
    bVar2 = (byte)plVar8;
  }
  if (iVar13 == 0) {
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf;
LAB_143537414:
    local_98 = 0;
    uStack_90 = 0;
    local_148 = 0;
    local_144 = 0;
LAB_14353742f:
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      puVar15 = (undefined8 *)*param_3;
      puVar11 = puVar15 + (longlong)*(int *)(param_3 + 1) * 0xc;
      local_120 = param_1 + 0x118;
      local_130 = param_1 + 0x48;
      local_138 = param_1 + 0xe6;
      do {
        puVar5 = (undefined8 *)FUN_1410490b0(local_128);
        FUN_1410492dc(local_120,(int)param_1[0xe5] + -1,0);
        if (param_5 == '\0') {
          puVar12 = puVar15;
          puVar14 = local_f8;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        else {
          FUN_1449437a2(puVar15,local_f8,local_130);
        }
        FUN_1410495e2(param_1,puVar5,iVar16,local_f8);
        if ((*(byte *)((longlong)param_1 + 0x7d4) & 0x20) != 0) {
          lVar10 = param_1[0xe7];
          uVar3 = (int)lVar10 + 1;
          *(uint *)(param_1 + 0xe7) = uVar3;
          if (*(uint *)((longlong)param_1 + 0x73c) < uVar3) {
            FUN_140518214(local_138);
          }
          puVar12 = (undefined8 *)((longlong)(int)lVar10 * 0x80 + *local_138);
          for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        plVar6 = local_140;
        if (local_149 != '\0') {
          lVar10 = local_140[1];
          uVar3 = (int)lVar10 + 1;
          *(uint *)(local_140 + 1) = uVar3;
          if (*(uint *)((longlong)local_140 + 0xc) < uVar3) {
            FUN_1446f48e2(local_140);
          }
          *(int *)(*plVar6 + (longlong)(int)lVar10 * 4) = iVar16;
        }
        if ((char)local_144 != '\0') {
          if ((int)param_1[0xe5] == 1) {
            FUN_14014d556(param_1,&local_80,local_130,1);
            plVar8 = DAT_14caca2a8;
            if (DAT_14caca2b0 == 0) {
              plVar8 = (longlong *)0x0;
            }
            (**(code **)(*plVar8 + 0x58))();
          }
          if ((char)local_148 != '\0') {
            lVar10 = (longlong)(int)uStack_90;
            uVar3 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
            if (uStack_90._4_4_ < uVar3) {
              FUN_144a2c682(&local_98);
            }
            puVar5 = puVar15;
            puVar12 = (undefined8 *)(lVar10 * 0x60 + local_98);
            for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
              *puVar12 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar12 = puVar12 + 1;
            }
          }
        }
        if ((longlong)DAT_14cae4f40 != 0) {
          lVar10 = 0;
          do {
            if ((*(int *)(DAT_14cae4f38 + 8 + lVar10) != 0) &&
               (*(longlong *)(DAT_14cae4f38 + lVar10) != 0)) {
              local_104[0] = 0;
              local_fc = 0xffffffff;
              local_80 = local_104;
              local_78 = 1;
              local_100 = iVar16;
              FUN_147b4e6d4(param_1,&local_80);
              break;
            }
            lVar10 = lVar10 + 0x10;
          } while ((longlong)DAT_14cae4f40 * 0x10 != lVar10);
        }
        iVar16 = iVar16 + 1;
        puVar15 = puVar15 + 0xc;
      } while (puVar15 != puVar11);
    }
    if ((char)local_144 == '\0') goto LAB_14353769d;
    if ((char)local_148 == '\0') {
      (**(code **)(*param_1 + 0xbc8))(param_1);
      goto LAB_14353769d;
    }
  }
  else {
    lVar10 = param_1[0xcc];
    if ((lVar10 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
LAB_1435372d0:
      if (((*(byte *)(lVar10 + 0x194) & 4) == 0) || (-1 < *(char *)((longlong)param_1 + 0x9e))) {
LAB_143537716:
        bVar2 = 0;
      }
      else {
        if (*(code **)(param_1[0x55] + 0x58) == (code *)&LAB_1457ba96c) {
          uVar3 = (uint)*(byte *)((longlong)param_1 + 0x2e9);
        }
        else {
          uVar3 = (**(code **)(param_1[0x55] + 0x58))(param_1 + 0x55);
        }
        bVar2 = 1;
        if ((int)uVar3 < 2) {
          lVar9 = *param_1;
          if (*(code **)(lVar9 + 0x558) == (code *)&LAB_1448a8146) {
            plVar6 = param_1 + 0x8f;
          }
          else {
            plVar6 = (longlong *)(**(code **)(lVar9 + 0x558))(param_1);
            lVar9 = *param_1;
          }
          if (*(code **)(lVar9 + 0x570) == (code *)&LAB_1448a814e) {
            if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0))
            goto LAB_143537716;
            uVar3 = (uint)*(byte *)((longlong)param_1 + 0x427);
          }
          else {
            uVar3 = (**(code **)(lVar9 + 0x570))();
          }
          bVar2 = 0;
          if (((uVar3 < 6) && ((0x2aU >> (uVar3 & 0x1f) & 1) != 0)) &&
             (bVar2 = 1, *(char *)((longlong)plVar6 + 2) != '\x02')) {
            bVar2 = *(char *)((longlong)plVar6 + 6) == '\x02';
          }
        }
      }
    }
    else if (lVar10 != 0) goto LAB_1435372d0;
    plVar6 = local_140;
    bVar2 = lVar10 != 0 & bVar2;
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | bVar2 << 6;
    if (((bVar2 & param_6) != 1) || ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0))
    goto LAB_143537414;
    uVar4 = (**(code **)(*param_1 + 0xbd0))(param_1);
    local_98 = 0;
    uStack_90 = 0;
    if ((char)uVar4 == '\0') {
      local_144 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      local_148 = 0;
      goto LAB_14353742f;
    }
    iVar13 = *(int *)(param_3 + 1);
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (iVar13 != 0) {
      uVar4 = FUN_1401a2688(&local_98);
      uVar7 = (undefined7)((ulonglong)uVar4 >> 8);
      local_148 = (undefined4)CONCAT71(uVar7,1);
      local_144 = (undefined4)CONCAT71(uVar7,1);
      goto LAB_14353742f;
    }
  }
  local_110 = (int)uStack_90;
  local_118 = local_98;
  (**(code **)(*param_1 + 0xbc0))(param_1);
LAB_14353769d:
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 143537776 FUN_143537776 body=129 status=ok
// SIG undefined FUN_143537776(void)

ulonglong FUN_143537776(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  
  piVar3 = (int *)*param_2;
  if (-1 < *piVar3) {
    lVar4 = *param_1;
    uVar1 = *(uint *)(lVar4 + 0x728);
    if (*piVar3 < (int)uVar1) {
      iVar2 = *(int *)(param_2 + 1);
      if ((uint)piVar3[iVar2 + -1] < uVar1 && -1 < piVar3[iVar2 + -1]) {
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (iVar2 != 0) {
          lVar6 = 0;
          do {
            FUN_14106388a(lVar4,*(undefined4 *)((longlong)piVar3 + lVar6),0,0,1);
            lVar6 = lVar6 + 4;
          } while ((longlong)iVar2 * 4 != lVar6);
        }
        goto LAB_1435377e9;
      }
    }
  }
  uVar5 = 0;
LAB_1435377e9:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1435377f8 FUN_1435377f8 body=11118 status=ok
// SIG undefined FUN_1435377f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1435377f8(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,int param_5,
             longlong *param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  double *pdVar17;
  int iVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined1 auStack_4d8 [44];
  undefined4 local_4ac;
  longlong *local_4a8;
  int local_49c;
  double local_498;
  double dStack_490;
  longlong *local_488;
  double dStack_480;
  longlong *local_470;
  undefined1 local_468 [16];
  longlong *local_458;
  double dStack_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  longlong *local_410;
  longlong *local_408;
  longlong *local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  longlong local_3b8;
  undefined4 local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  longlong *local_328;
  int local_320;
  undefined4 local_31c;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
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
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double *local_170;
  longlong *local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  uVar8 = *(uint *)(param_2 + 1);
  uVar11 = 0;
  local_470 = param_3;
  if ((uVar8 != *(uint *)(param_3 + 1)) || (*(uint *)(param_3 + 1) != *(uint *)(param_4 + 1)))
  goto LAB_14353a2b3;
  if (((0 < param_5) && ((int)param_6[1] / param_5 != uVar8)) ||
     (plVar28 = (longlong *)(ulonglong)(uVar8 | *(uint *)(param_1 + 0xe5)),
     (uVar8 | *(uint *)(param_1 + 0xe5)) == 0)) {
    uVar11 = 0;
    goto LAB_14353a2b3;
  }
  if ((int)param_1[0xf4] != param_5) {
    plVar28 = param_1;
    (**(code **)(*param_1 + 0xb18))(param_1);
    param_5 = (int)param_1[0xf4];
  }
  local_328 = (longlong *)0x0;
  local_320 = (int)param_1[0x10c];
  lVar21 = (longlong)local_320;
  _Src = (void *)param_1[0x10b];
  local_49c = param_5;
  if (lVar21 == 0) {
    local_31c = 0;
  }
  else {
    FUN_144a06ca8(&local_328,local_320,0);
    plVar28 = local_328;
    memcpy(local_328,_Src,lVar21 << 2);
  }
  local_440 = param_1 + 0xe4;
  local_348 = ZEXT816(0);
  local_408 = param_2;
  local_338 = local_348;
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) ||
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) {
    local_498 = (double)((ulonglong)local_498 & 0xffffffff00000000);
    local_4ac = 0;
LAB_1435379a4:
    if (0 < (int)param_2[1]) {
      plVar23 = param_1 + 0x114;
      local_4a8 = param_1 + 0x118;
      local_448 = param_1 + 0x11d;
      lVar21 = 0;
      local_458 = plVar23;
LAB_143537a15:
      plVar16 = (longlong *)local_338;
      iVar10 = (int)lVar21;
      if ((int)param_1[0x10e] != *(int *)((longlong)param_1 + 0x89c)) {
        uVar8 = *(uint *)(*param_2 + lVar21 * 4);
        plVar28 = (longlong *)param_1[0x115];
        if ((longlong *)param_1[0x115] == (longlong *)0x0) {
          plVar28 = plVar23;
        }
        iVar18 = *(int *)((longlong)plVar28 + (ulonglong)((int)param_1[0x116] - 1U & uVar8) * 4);
        if (iVar18 != -1) {
          plVar28 = (longlong *)param_1[0x10d];
          do {
            plVar1 = plVar28 + (longlong)iVar18 * 2;
            if (*(uint *)(plVar28 + (longlong)iVar18 * 2) == uVar8) {
              plVar28 = (longlong *)((ulonglong)plVar28 & 0xffffffffffffff00);
              if ((int *)((longlong)plVar1 + 4) != (int *)0x0 && plVar1 != (longlong *)0x0) {
                iVar18 = *(int *)((longlong)plVar1 + 4);
                lVar25 = (longlong)iVar18;
                lVar22 = *local_470;
                lVar20 = lVar21 * 0x60;
                dVar57 = *(double *)(lVar22 + lVar20);
                dVar66 = ((double *)(lVar22 + lVar20))[1];
                dVar36 = *(double *)(lVar22 + 0x10 + lVar20);
                pdVar17 = (double *)(lVar22 + 0x40 + lVar20);
                dVar65 = *pdVar17;
                dVar60 = pdVar17[1];
                dVar34 = *(double *)(lVar22 + 0x50 + lVar20);
                dVar37 = dVar66 + dVar66;
                dVar45 = dVar36 + dVar36;
                dVar54 = dVar57 * (dVar57 + dVar57);
                dVar58 = *(double *)(lVar22 + lVar20) * dVar45;
                pdVar17 = (double *)(lVar22 + 0x18 + lVar20);
                dVar64 = *pdVar17;
                dVar63 = dVar45 * dVar64;
                dVar35 = (dVar57 + dVar57) * *pdVar17;
                dVar64 = dVar37 * dVar64;
                local_2f8._8_8_ = (dVar37 * dVar57 + dVar63) * dVar65;
                local_2f8._0_8_ = (1.0 - (dVar36 * dVar45 + dVar66 * dVar37)) * dVar65;
                local_2e8 = (dVar58 - dVar64) * dVar65;
                uStack_2e0 = 0;
                local_2d8 = (dVar37 * dVar57 - dVar63) * dVar60;
                dStack_2d0 = (1.0 - (dVar36 * dVar45 + dVar54)) * dVar60;
                local_2c8 = (dVar45 * dVar66 + dVar35) * dVar60;
                uStack_2c0 = 0;
                local_2b8 = (dVar64 + dVar58) * dVar34;
                dStack_2b0 = (dVar45 * dVar66 - dVar35) * dVar34;
                local_2a8 = (1.0 - (dVar54 + dVar66 * dVar37)) * dVar34;
                uStack_2a0 = 0;
                local_288._8_8_ = 0x3ff0000000000000;
                local_288._0_8_ = *(undefined8 *)(lVar22 + 0x30 + lVar20);
                local_298 = *(undefined1 (*) [16])(lVar22 + 0x20 + lVar20);
                if (*(char *)((longlong)param_1 + 0x1fb) != '\x02') goto LAB_14353900e;
                plVar23 = (longlong *)(*local_440 + lVar25 * 0x80);
                puVar19 = local_2f8;
                lVar22 = 0;
                plVar28 = plVar23;
                goto LAB_143537c58;
              }
              break;
            }
            iVar18 = (int)plVar1[1];
          } while (iVar18 != -1);
        }
      }
      uVar9 = local_338._8_4_;
      lVar22 = (longlong)(int)local_338._8_4_;
      uVar8 = local_338._8_4_ + 1;
      local_338._8_4_ = uVar8;
      if ((uint)local_338._12_4_ < uVar8) {
        FUN_1446f48e2(plVar16,uVar9);
        plVar28 = plVar16;
      }
      *(int *)(local_338._0_8_ + lVar22 * 4) = iVar10;
      goto LAB_143537aae;
    }
LAB_1435391ca:
    if (local_498._0_1_ != '\0') {
      iVar18 = local_348._8_4_;
      goto LAB_1435391df;
    }
    local_4a8 = (longlong *)((ulonglong)local_4a8 & 0xffffffff00000000);
  }
  else {
    plVar28 = param_1;
    uVar11 = (**(code **)(*param_1 + 0xbd0))(param_1);
    local_348 = ZEXT816(0);
    if ((char)uVar11 == '\0') {
      local_4ac = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      local_498 = (double)((ulonglong)local_498 & 0xffffffff00000000);
      goto LAB_1435379a4;
    }
    iVar10 = (int)param_2[1];
    iVar18 = iVar10 * 2;
    if (iVar10 < 0) goto LAB_14353a360;
    if (iVar10 != 0) {
      plVar28 = (longlong *)local_348;
      uVar11 = FUN_1401a2688(plVar28);
      uVar12 = (undefined7)((ulonglong)uVar11 >> 8);
      local_498 = (double)CONCAT44(local_498._4_4_,(int)CONCAT71(uVar12,1));
      local_4ac = (undefined4)CONCAT71(uVar12,1);
      goto LAB_1435379a4;
    }
    local_4ac = 1;
    iVar18 = 0;
LAB_1435391df:
    iVar18 = iVar18 + local_320;
    if (iVar18 < 0) goto LAB_14353a360;
    local_4a8 = (longlong *)
                CONCAT44(local_4a8._4_4_,(int)CONCAT71((int7)((ulonglong)plVar28 >> 8),1));
    if ((int)local_348._12_4_ < iVar18) {
      FUN_1401a2688(local_348);
    }
  }
  if (0 < local_320) {
    uVar8 = 0;
    iVar10 = local_320;
    do {
      lVar21 = (longlong)(int)uVar8;
      if (*(int *)((longlong)local_328 + lVar21 * 4) == -1) {
        uVar8 = uVar8 + 1;
      }
      else {
        if ((char)local_4a8 != '\0') {
          pdVar17 = &local_3a8;
          uVar9 = FUN_1448ac920(pdVar17,lVar21 * 0x80 + param_1[0xe4]);
          auVar51 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar64 = auVar51._0_8_;
          dVar65 = auVar51._8_8_;
          auVar55 = *(undefined1 (*) [16])(param_1 + 0x52);
          dVar57 = auVar55._0_8_;
          dVar60 = auVar55._8_8_;
          dVar66 = local_368._0_8_;
          dVar34 = local_368._8_8_;
          dVar36 = local_358._0_8_;
          auVar51 = minpd(local_368,auVar51);
          auVar55 = minpd(local_358,auVar55);
          auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
          auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
          iVar10 = movmskpd(uVar9,auVar52);
          auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
          auVar56._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
          uVar15 = movmskpd((int)pdVar17,auVar56);
          if ((uVar15 & 0x3fffffff) == 0 && iVar10 == 0) {
            dVar72 = (double)param_1[0x48];
            dVar4 = (double)param_1[0x49];
            dVar62 = (double)param_1[0x4a];
            dVar70 = (double)param_1[0x4b];
            dVar45 = (double)param_1[0x4b];
            dVar63 = (double)param_1[0x4b];
            dVar35 = (double)param_1[0x48];
            dVar37 = (double)param_1[0x48];
            dVar58 = (double)param_1[0x49];
            dVar54 = (double)param_1[0x49];
            dVar61 = (double)param_1[0x4a];
            dVar59 = (double)param_1[0x4a];
            dVar69 = dStack_3a0 * dVar61 * -1.0 +
                     local_398 * dVar58 + dStack_390 * dVar35 * 1.0 + local_3a8 * dVar45;
            dVar71 = local_3a8 * dVar59 * 1.0 +
                     dStack_390 * dVar54 + local_398 * dVar37 * -1.0 + dStack_3a0 * dVar63;
            auVar68._0_8_ =
                 dStack_390 * dVar61 * 1.0 +
                 ((dVar35 * dStack_3a0 * 1.0 + local_398 * dVar45) - local_3a8 * dVar58);
            auVar68._8_8_ =
                 local_398 * dVar59 * -1.0 +
                 ((dVar37 * local_3a8 * -1.0 + dStack_390 * dVar63) - dStack_3a0 * dVar54);
            dVar61 = local_388 * dVar64;
            dVar67 = dStack_380 * dVar65;
            dVar58 = local_378 * dVar57;
            dVar59 = dStack_370 * dVar60;
            dVar54 = dVar67 * dVar72 - dVar4 * dVar61;
            dVar73 = dVar58 * dVar4 - dVar62 * dVar67;
            dVar35 = dVar61 * dVar62 - dVar72 * dVar58;
            dVar37 = dVar59 * dVar70 - dVar70 * dVar59;
            dVar73 = dVar73 + dVar73;
            dVar35 = dVar35 + dVar35;
            dVar54 = dVar54 + dVar54;
            dVar37 = dVar37 + dVar37;
            plVar28 = (longlong *)(dVar66 * dVar64);
            dVar34 = dVar34 * dVar65;
            dVar36 = dVar36 * dVar57;
            dVar60 = local_358._8_8_ * dVar60;
            dVar57 = (dVar54 * dVar4 - dVar62 * dVar35) + dVar45 * dVar73 + dVar61 +
                     (double)param_1[0x4c];
            dVar66 = (dVar73 * dVar62 - dVar54 * dVar72) + dVar63 * dVar35 + dVar67 +
                     (double)param_1[0x4d];
            dVar64 = (dVar35 * dVar72 - dVar4 * dVar73) + dVar45 * dVar54 + dVar58 +
                     (double)param_1[0x4e];
            dVar65 = (dVar37 * dVar70 - dVar37 * dVar70) + dVar63 * dVar37 + dVar59 +
                     (double)param_1[0x4f];
          }
          else {
            dVar63 = (double)param_1[0x48];
            dVar35 = (double)param_1[0x49];
            dVar37 = (double)param_1[0x4a];
            dVar54 = dVar35 + dVar35;
            dVar58 = dVar37 + dVar37;
            dVar62 = dVar63 * (dVar63 + dVar63);
            local_1a8 = (1.0 - (dVar62 + dVar35 * dVar54)) * dVar57;
            dVar45 = (double)param_1[0x4b];
            dVar59 = dVar58 * dVar45;
            dVar61 = (dVar63 + dVar63) * (double)param_1[0x4b];
            dVar45 = dVar54 * dVar45;
            local_1b8 = (dVar45 + (double)param_1[0x48] * dVar58) * dVar57;
            local_498 = dVar57 * dVar36;
            dStack_490 = dVar60 * local_358._8_8_;
            local_1f8 = (1.0 - (dVar37 * dVar58 + dVar35 * dVar54)) * dVar64;
            dStack_1d0 = (1.0 - (dVar37 * dVar58 + dVar62)) * dVar65;
            dStack_1f0 = (dVar54 * dVar63 + dVar59) * dVar64;
            local_1c8 = (dVar58 * dVar35 + dVar61) * dVar65;
            local_1d8 = (dVar54 * dVar63 - dVar59) * dVar65;
            dStack_1b0 = (dVar58 * dVar35 - dVar61) * dVar57;
            local_1e8 = ((double)param_1[0x48] * dVar58 - dVar45) * dVar64;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0x4c];
            lStack_190 = param_1[0x4d];
            local_188 = param_1[0x4e];
            uStack_180 = 0x3ff0000000000000;
            dVar57 = dStack_3a0 + dStack_3a0;
            dVar60 = local_398 + local_398;
            dVar63 = local_3a8 * (local_3a8 + local_3a8);
            local_228 = (1.0 - (dVar63 + dStack_3a0 * dVar57)) * dVar36;
            dVar45 = (local_3a8 + local_3a8) * dStack_390;
            local_238 = (dVar57 * dStack_390 + local_3a8 * dVar60) * dVar36;
            local_258 = (dVar57 * local_3a8 - dVar60 * dStack_390) * dVar34;
            dStack_230 = (dVar60 * dStack_3a0 - dVar45) * dVar36;
            local_458 = (longlong *)(dVar64 * dVar66);
            dStack_450 = dVar65 * dVar34;
            local_278 = (1.0 - (local_398 * dVar60 + dStack_3a0 * dVar57)) * dVar66;
            dStack_250 = (1.0 - (local_398 * dVar60 + dVar63)) * dVar34;
            dStack_270 = (dVar57 * local_3a8 + dVar60 * dStack_390) * dVar66;
            local_248 = (dVar60 * dStack_3a0 + dVar45) * dVar34;
            local_268 = (local_3a8 * dVar60 - dVar57 * dStack_390) * dVar66;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_388;
            dStack_210 = dStack_380;
            local_208 = local_378;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            dVar34 = dStack_450;
            plVar28 = local_458;
            dVar60 = dStack_490;
            dVar36 = local_498;
            auVar51 = _DAT_149934d80;
            local_488 = local_168;
            dVar64 = (double)local_168 * (double)local_168 +
                     local_178 * local_178 + (double)local_170 * (double)local_170;
            dVar57 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar66 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar27 = -(ulonglong)(0.0 <= dVar64 + -9.99999993922529e-09);
            dVar64 = (double)(~uVar27 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar64)) & uVar27);
            uVar27 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
            dVar57 = (double)(~uVar27 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar57)) & uVar27);
            uVar27 = -(ulonglong)(0.0 <= dVar66 + -9.99999993922529e-09);
            dVar66 = (double)(~uVar27 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar66)) & uVar27);
            auVar32._8_8_ = -(ulonglong)(0.0 <= dStack_450);
            auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_458);
            auVar55 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
            dVar65 = (double)(~-(ulonglong)(0.0 <= local_498) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= local_498) & 0x3ff0000000000000);
            dVar45 = auVar55._0_8_;
            local_178 = local_178 * dVar64 * dVar45;
            local_170 = (double *)((double)local_170 * dVar64 * dVar45);
            local_168 = (longlong *)(dVar64 * (double)local_168 * dVar45);
            dVar64 = auVar55._8_8_;
            local_148 = dVar57 * local_148 * dVar64;
            local_150 = local_150 * dVar57 * dVar64;
            local_158 = dVar64 * local_158 * dVar57;
            local_128 = dVar66 * local_128 * dVar65;
            local_130 = local_130 * dVar66 * dVar65;
            local_138 = dVar65 * local_138 * dVar66;
            FUN_14481fd10(&local_318,&local_178);
            dVar64 = local_308 * local_308 + local_318 * local_318;
            dVar57 = dStack_300 * dStack_300 + dStack_310 * dStack_310;
            auVar44._0_8_ = dVar64 + dVar57;
            auVar44._8_8_ = dVar64 + dVar57;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
            auVar55 = sqrtpd(auVar44,auVar44);
            auVar51 = divpd(auVar51,auVar55);
            auVar53._0_8_ = auVar51._0_8_ * local_308;
            auVar53._8_8_ = auVar51._8_8_ * dStack_300;
            dVar69 = (double)((ulonglong)(local_318 * auVar51._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
            dVar71 = (double)((ulonglong)(dStack_310 * auVar51._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
            auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar33);
            dVar65 = 0.0;
            dVar64 = local_108;
            dVar57 = local_118;
            dVar66 = dStack_110;
          }
          uVar9 = local_348._8_4_;
          lVar22 = (longlong)(int)local_348._8_4_;
          uVar15 = local_348._8_4_ + 1;
          local_348._8_4_ = uVar15;
          if ((uint)local_348._12_4_ < uVar15) {
            FUN_144a2c682(local_348,uVar9);
          }
          lVar22 = lVar22 * 0x60;
          *(double *)(local_348._0_8_ + lVar22) = dVar69;
          ((double *)(local_348._0_8_ + lVar22))[1] = dVar71;
          *(undefined1 (*) [16])(local_348._0_8_ + 0x10 + lVar22) = auVar68;
          pdVar17 = (double *)(local_348._0_8_ + 0x20 + lVar22);
          *pdVar17 = dVar57;
          pdVar17[1] = dVar66;
          pdVar17 = (double *)(local_348._0_8_ + 0x30 + lVar22);
          *pdVar17 = dVar64;
          pdVar17[1] = dVar65;
          puVar2 = (undefined8 *)(local_348._0_8_ + 0x40 + lVar22);
          *puVar2 = plVar28;
          puVar2[1] = dVar34;
          pdVar17 = (double *)(local_348._0_8_ + 0x50 + lVar22);
          *pdVar17 = dVar36;
          pdVar17[1] = dVar60;
        }
        FUN_141064118(param_1 + 0x118,uVar8);
        iVar10 = (int)param_1[0xe5];
        uVar15 = ~uVar8;
        iVar18 = iVar10 + uVar15;
        iVar14 = 1;
        if (iVar18 != 0) {
          if (0 < iVar18) {
            iVar18 = iVar14;
          }
          memmove((void *)(lVar21 * 0x80 + param_1[0xe4]),
                  (void *)((longlong)(iVar10 - iVar18) * 0x80 + param_1[0xe4]),(longlong)iVar18 << 7
                 );
          iVar10 = (int)param_1[0xe5];
        }
        *(int *)(param_1 + 0xe5) = iVar10 + -1;
        iVar10 = (int)param_1[0xe7];
        iVar18 = iVar10 + uVar15;
        if (iVar18 != 0) {
          if (0 < iVar18) {
            iVar18 = iVar14;
          }
          memmove((void *)(lVar21 * 0x80 + param_1[0xe6]),
                  (void *)((longlong)(iVar10 - iVar18) * 0x80 + param_1[0xe6]),(longlong)iVar18 << 7
                 );
          iVar10 = (int)param_1[0xe7];
        }
        *(int *)(param_1 + 0xe7) = iVar10 + -1;
        iVar10 = (int)param_1[0x10c];
        iVar18 = iVar10 + uVar15;
        if (iVar18 != 0) {
          if (0 < iVar18) {
            iVar18 = iVar14;
          }
          memmove((void *)(param_1[0x10b] + lVar21 * 4),
                  (void *)(param_1[0x10b] + (longlong)(iVar10 - iVar18) * 4),(longlong)iVar18 << 2);
          iVar10 = (int)param_1[0x10c];
        }
        *(int *)(param_1 + 0x10c) = iVar10 + -1;
        if ((0 < local_49c) && (iVar10 = (int)param_1[0xf4], iVar10 != 0)) {
          iVar18 = (int)param_1[0xf6];
          iVar24 = (iVar18 - iVar10 * uVar8) - iVar10;
          if (iVar10 < iVar24) {
            iVar24 = iVar10;
          }
          if (iVar24 != 0) {
            memmove((void *)(param_1[0xf5] + (longlong)(int)(iVar10 * uVar8) * 4),
                    (void *)(param_1[0xf5] + (longlong)(iVar18 - iVar24) * 4),(longlong)iVar24 << 2)
            ;
            iVar18 = (int)param_1[0xf6];
          }
          *(int *)(param_1 + 0xf6) = iVar18 - iVar10;
        }
        iVar10 = local_320 + uVar15;
        if (iVar10 != 0) {
          if (0 < iVar10) {
            iVar10 = iVar14;
          }
          memmove((void *)((longlong)local_328 + lVar21 * 4),
                  (void *)((longlong)local_328 + (longlong)(local_320 - iVar10) * 4),
                  (longlong)iVar10 << 2);
        }
        local_320 = local_320 + -1;
        iVar18 = (int)param_1[0x10a];
        iVar10 = local_320;
        if ((int)uVar8 < iVar18) {
          iVar10 = uVar15 + iVar18;
          if (iVar10 != 0) {
            if (0 < iVar10) {
              iVar10 = iVar14;
            }
            memmove((void *)(param_1[0x109] + lVar21 * 4),
                    (void *)(param_1[0x109] + (longlong)(iVar18 - iVar10) * 4),(longlong)iVar10 << 2
                   );
            iVar18 = (int)param_1[0x10a];
          }
          *(int *)(param_1 + 0x10a) = iVar18 + -1;
          iVar10 = local_320;
        }
      }
    } while ((int)uVar8 < iVar10);
  }
  local_400 = param_4;
  if ((char)local_4a8 != '\0') {
    iVar18 = local_348._8_4_ + local_338._8_4_;
    if (iVar18 < 0) {
LAB_14353a360:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    if ((int)local_348._12_4_ < iVar18) {
      FUN_1401a2688(local_348);
    }
  }
  if (local_338._8_4_ != 0) {
    local_498 = (double)local_338._0_8_;
    lVar21 = (longlong)(int)local_338._8_4_;
    local_488 = param_1 + 0xe6;
    local_458 = param_1 + 0xf5;
    lVar22 = 0;
    do {
      iVar10 = *(int *)((longlong)local_498 + lVar22);
      FUN_1410492dc(param_1 + 0x118,(int)param_1[0xe5],0);
      lVar25 = *local_470;
      lVar20 = (longlong)iVar10 * 0x60;
      dVar36 = *(double *)(lVar25 + lVar20);
      dVar65 = ((double *)(lVar25 + lVar20))[1];
      dVar60 = *(double *)(lVar25 + 0x10 + lVar20);
      puVar2 = (undefined8 *)(lVar25 + 0x20 + lVar20);
      uVar11 = *puVar2;
      uVar7 = puVar2[1];
      puVar3 = (undefined4 *)(lVar25 + 0x30 + lVar20);
      uVar9 = *puVar3;
      uVar6 = puVar3[1];
      pdVar17 = (double *)(lVar25 + 0x40 + lVar20);
      dVar34 = *pdVar17;
      dVar45 = pdVar17[1];
      dVar63 = *(double *)(lVar25 + 0x50 + lVar20);
      dVar64 = *(double *)(lVar25 + lVar20);
      pdVar17 = (double *)(lVar25 + 0x18 + lVar20);
      dVar57 = *pdVar17;
      dVar66 = *pdVar17;
      iVar18 = (int)param_1[0xe5];
      *(uint *)(param_1 + 0xe5) = iVar18 + 1U;
      if (*(uint *)((longlong)param_1 + 0x72c) < iVar18 + 1U) {
        FUN_1410491dc(local_440,iVar18);
      }
      dVar35 = dVar65 + dVar65;
      dVar54 = dVar60 + dVar60;
      dVar37 = dVar36 * (dVar36 + dVar36);
      dVar64 = dVar64 * dVar54;
      dVar58 = dVar54 * dVar57;
      dVar66 = (dVar36 + dVar36) * dVar66;
      dVar57 = dVar35 * dVar57;
      lVar25 = param_1[0xe4];
      lVar26 = (longlong)iVar18 * 0x80;
      *(double *)(lVar25 + lVar26) = (1.0 - (dVar60 * dVar54 + dVar65 * dVar35)) * dVar34;
      ((double *)(lVar25 + lVar26))[1] = (dVar35 * dVar36 + dVar58) * dVar34;
      pdVar17 = (double *)(lVar25 + 0x10 + lVar26);
      *pdVar17 = (dVar64 - dVar57) * dVar34;
      pdVar17[1] = 0.0;
      pdVar17 = (double *)(lVar25 + 0x20 + lVar26);
      *pdVar17 = (dVar35 * dVar36 - dVar58) * dVar45;
      pdVar17[1] = (1.0 - (dVar60 * dVar54 + dVar37)) * dVar45;
      pdVar17 = (double *)(lVar25 + 0x30 + lVar26);
      *pdVar17 = (dVar54 * dVar65 + dVar66) * dVar45;
      pdVar17[1] = 0.0;
      pdVar17 = (double *)(lVar25 + 0x40 + lVar26);
      *pdVar17 = (dVar57 + dVar64) * dVar63;
      pdVar17[1] = (dVar54 * dVar65 - dVar66) * dVar63;
      pdVar17 = (double *)(lVar25 + 0x50 + lVar26);
      *pdVar17 = (1.0 - (dVar37 + dVar65 * dVar35)) * dVar63;
      pdVar17[1] = 0.0;
      puVar2 = (undefined8 *)(lVar25 + 0x60 + lVar26);
      *puVar2 = uVar11;
      puVar2[1] = uVar7;
      puVar3 = (undefined4 *)(lVar25 + 0x70 + lVar26);
      *puVar3 = uVar9;
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0x3ff00000;
      lVar25 = *local_400;
      dVar36 = *(double *)(lVar25 + lVar20);
      dVar65 = ((double *)(lVar25 + lVar20))[1];
      dVar60 = *(double *)(lVar25 + 0x10 + lVar20);
      puVar2 = (undefined8 *)(lVar25 + 0x20 + lVar20);
      uVar11 = *puVar2;
      uVar7 = puVar2[1];
      puVar3 = (undefined4 *)(lVar25 + 0x30 + lVar20);
      uVar9 = *puVar3;
      uVar6 = puVar3[1];
      pdVar17 = (double *)(lVar25 + 0x40 + lVar20);
      dVar34 = *pdVar17;
      dVar45 = pdVar17[1];
      dVar63 = *(double *)(lVar25 + 0x50 + lVar20);
      dVar64 = *(double *)(lVar25 + lVar20);
      pdVar17 = (double *)(lVar25 + 0x18 + lVar20);
      dVar57 = *pdVar17;
      dVar66 = *pdVar17;
      iVar18 = (int)param_1[0xe7];
      *(uint *)(param_1 + 0xe7) = iVar18 + 1U;
      if (*(uint *)((longlong)param_1 + 0x73c) < iVar18 + 1U) {
        FUN_140518214(local_488,iVar18);
      }
      dVar35 = dVar65 + dVar65;
      dVar54 = dVar60 + dVar60;
      dVar37 = dVar36 * (dVar36 + dVar36);
      dVar64 = dVar64 * dVar54;
      dVar58 = dVar54 * dVar57;
      dVar66 = (dVar36 + dVar36) * dVar66;
      dVar57 = dVar35 * dVar57;
      lVar25 = param_1[0xe6];
      lVar20 = (longlong)iVar18 * 0x80;
      *(double *)(lVar25 + lVar20) = (1.0 - (dVar60 * dVar54 + dVar65 * dVar35)) * dVar34;
      ((double *)(lVar25 + lVar20))[1] = (dVar35 * dVar36 + dVar58) * dVar34;
      pdVar17 = (double *)(lVar25 + 0x10 + lVar20);
      *pdVar17 = (dVar64 - dVar57) * dVar34;
      pdVar17[1] = 0.0;
      pdVar17 = (double *)(lVar25 + 0x20 + lVar20);
      *pdVar17 = (dVar35 * dVar36 - dVar58) * dVar45;
      pdVar17[1] = (1.0 - (dVar60 * dVar54 + dVar37)) * dVar45;
      pdVar17 = (double *)(lVar25 + 0x30 + lVar20);
      *pdVar17 = (dVar54 * dVar65 + dVar66) * dVar45;
      pdVar17[1] = 0.0;
      pdVar17 = (double *)(lVar25 + 0x40 + lVar20);
      *pdVar17 = (dVar57 + dVar64) * dVar63;
      pdVar17[1] = (dVar54 * dVar65 - dVar66) * dVar63;
      pdVar17 = (double *)(lVar25 + 0x50 + lVar20);
      *pdVar17 = (1.0 - (dVar37 + dVar65 * dVar35)) * dVar63;
      pdVar17[1] = 0.0;
      puVar2 = (undefined8 *)(lVar25 + 0x60 + lVar20);
      *puVar2 = uVar11;
      puVar2[1] = uVar7;
      puVar3 = (undefined4 *)(lVar25 + 0x70 + lVar20);
      *puVar3 = uVar9;
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0x3ff00000;
      lVar25 = *local_408;
      iVar18 = (int)param_1[0x10c];
      *(uint *)(param_1 + 0x10c) = iVar18 + 1U;
      if (*(uint *)((longlong)param_1 + 0x864) < iVar18 + 1U) {
        FUN_1446f48e2(param_1 + 0x10b,iVar18);
      }
      *(undefined4 *)(param_1[0x10b] + (longlong)iVar18 * 4) =
           *(undefined4 *)(lVar25 + (longlong)iVar10 * 4);
      if (0 < local_49c) {
        uVar8 = *(uint *)(param_1 + 0xf4);
        iVar18 = (int)param_1[0xf6];
        *(uint *)(param_1 + 0xf6) = iVar18 + uVar8;
        uVar15 = uVar8;
        if ((uint)(*(int *)((longlong)param_1 + 0x7b4) - iVar18) < uVar8) {
          FUN_14475e4ac(local_458,iVar18);
          uVar15 = *(uint *)(param_1 + 0xf4);
        }
        memcpy((void *)((longlong)iVar18 * 4 + *local_458),
               (void *)((longlong)(int)(uVar8 * iVar10) * 4 + *param_6),(longlong)(int)uVar15 << 2);
      }
      lVar22 = lVar22 + 4;
    } while (lVar21 * 4 != lVar22);
  }
  FUN_1407058ce(param_1 + 0x10d);
  local_278 = (double)((ulonglong)local_278 & 0xffffffff00000000);
  if (0 < (int)param_1[0x10c]) {
    iVar10 = 0;
    do {
      local_178 = (double)((longlong)iVar10 * 4 + param_1[0x10b]);
      local_170 = &local_278;
      FUN_140263e2a(param_1 + 0x10d,&local_1f8,&local_178,0);
      iVar10 = local_278._0_4_ + 1;
      local_278 = (double)CONCAT44(local_278._4_4_,iVar10);
    } while (iVar10 < (int)param_1[0x10c]);
  }
  if ((char)local_4ac != '\0') {
    if ((char)local_4a8 == '\0') {
      (**(code **)(*param_1 + 0xbc8))(param_1);
    }
    else {
      local_3b8 = local_348._0_8_;
      local_3b0 = local_348._8_4_;
      (**(code **)(*param_1 + 0xbc0))(param_1);
    }
  }
  if (local_348._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_338._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar11 = 1;
LAB_14353a2b3:
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
LAB_143537c58:
  lVar26 = 0;
LAB_143537c5b:
  if (ABS((double)plVar28[lVar26] - *(double *)(puVar19 + lVar26 * 8)) <= 9.999999974752427e-07)
  goto code_r0x000143537c73;
  plVar28 = (longlong *)local_2f8;
  for (lVar26 = 0x10; lVar26 != 0; lVar26 = lVar26 + -1) {
    *plVar23 = *plVar28;
    plVar28 = plVar28 + 1;
    plVar23 = plVar23 + 1;
  }
  lVar26 = *param_4;
  dVar57 = *(double *)(lVar26 + lVar20);
  dVar66 = ((double *)(lVar26 + lVar20))[1];
  dVar36 = *(double *)(lVar26 + 0x10 + lVar20);
  auVar51 = *(undefined1 (*) [16])(lVar26 + 0x20 + lVar20);
  dVar37 = dVar66 + dVar66;
  dVar45 = dVar36 + dVar36;
  dVar54 = dVar57 * (dVar57 + dVar57);
  pdVar17 = (double *)(lVar26 + 0x40 + lVar20);
  dVar65 = *pdVar17;
  dVar60 = pdVar17[1];
  dVar34 = *(double *)(lVar26 + 0x50 + lVar20);
  dVar58 = *(double *)(lVar26 + lVar20) * dVar45;
  pdVar17 = (double *)(lVar26 + 0x18 + lVar20);
  dVar64 = *pdVar17;
  dVar63 = dVar45 * dVar64;
  dVar35 = (dVar57 + dVar57) * *pdVar17;
  dVar64 = dVar37 * dVar64;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = (1.0 - (dVar54 + dVar66 * dVar37)) * dVar34;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = (dVar58 - dVar64) * dVar65;
  auVar55._8_8_ = 0x3ff0000000000000;
  auVar55._0_8_ = *(undefined8 *)(lVar26 + 0x30 + lVar20);
  plVar28 = (longlong *)param_1[0xe6];
  plVar28[lVar25 * 0x10] = (longlong)((1.0 - (dVar36 * dVar45 + dVar66 * dVar37)) * dVar65);
  (plVar28 + lVar25 * 0x10)[1] = (longlong)((dVar37 * dVar57 + dVar63) * dVar65);
  *(undefined1 (*) [16])(plVar28 + lVar25 * 0x10 + 2) = auVar46;
  plVar28[lVar25 * 0x10 + 4] = (longlong)((dVar37 * dVar57 - dVar63) * dVar60);
  (plVar28 + lVar25 * 0x10 + 4)[1] = (longlong)((1.0 - (dVar36 * dVar45 + dVar54)) * dVar60);
  plVar28[lVar25 * 0x10 + 6] = (longlong)((dVar45 * dVar66 + dVar35) * dVar60);
  (plVar28 + lVar25 * 0x10 + 6)[1] = 0;
  plVar28[lVar25 * 0x10 + 8] = (longlong)((dVar64 + dVar58) * dVar34);
  (plVar28 + lVar25 * 0x10 + 8)[1] = (longlong)((dVar45 * dVar66 - dVar35) * dVar34);
  *(undefined1 (*) [16])(plVar28 + lVar25 * 0x10 + 10) = auVar38;
  *(undefined1 (*) [16])(plVar28 + lVar25 * 0x10 + 0xc) = auVar51;
  *(undefined1 (*) [16])(plVar28 + lVar25 * 0x10 + 0xe) = auVar55;
  if (*(char *)((longlong)param_1 + 0x95d) == '\x01') {
    iVar14 = (int)param_1[0x119];
    if (iVar14 == 0) {
      iVar14 = (int)param_1[0x11c];
    }
    if (iVar14 <= iVar18) {
      iVar14 = iVar18;
    }
    iVar24 = iVar14 + 0xe;
    if (-1 < iVar14 + 7) {
      iVar24 = iVar14 + 7;
    }
    if ((int)param_1[0x11e] < iVar24 >> 3) {
      FUN_1402d2c96(local_448,iVar24 >> 3,CONCAT71((int7)((ulonglong)lVar22 >> 8),1));
    }
    *(int *)(param_1 + 0x123) = iVar14;
    iVar14 = (int)param_1[0x124];
    if (iVar18 <= (int)param_1[0x124]) {
      iVar14 = iVar18;
    }
    *(int *)(param_1 + 0x124) = iVar14;
    iVar14 = *(int *)((longlong)param_1 + 0x924);
    if (*(int *)((longlong)param_1 + 0x924) < iVar18) {
      iVar14 = iVar18;
    }
    iVar24 = iVar18 + 7;
    if (-1 < iVar18) {
      iVar24 = iVar18;
    }
    *(int *)((longlong)param_1 + 0x924) = iVar14;
    puVar19 = (undefined1 *)(longlong)(iVar24 >> 3);
    uVar8 = *(uint *)(param_1[0x11d] + (longlong)puVar19 * 4);
    bVar13 = (byte)(iVar18 % 8 << 2);
    if ((uVar8 >> (bVar13 & 0x1f) & 3) == 0) {
      *(int *)((longlong)param_1 + 0x92c) = *(int *)((longlong)param_1 + 0x92c) + 1;
    }
    *(uint *)(param_1[0x11d] + (longlong)puVar19 * 4) = uVar8 | 2 << (bVar13 & 0x1f);
LAB_143537eb7:
    plVar28 = local_4a8;
    FUN_1402d2c26(local_4a8);
  }
  else if (*(char *)((longlong)param_1 + 0x95d) != '\x02') {
    *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) | 0x10;
    goto LAB_143537eb7;
  }
  if (local_498._0_1_ != '\0') {
    lVar22 = *param_4;
    pdVar17 = (double *)(lVar22 + lVar20);
    auVar38 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar64 = auVar38._0_8_;
    dVar66 = auVar38._8_8_;
    auVar46 = *(undefined1 (*) [16])(param_1 + 0x52);
    dVar57 = auVar46._0_8_;
    dVar36 = auVar46._8_8_;
    auVar51 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar20);
    auVar55 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar20);
    auVar39 = minpd(auVar51,auVar38);
    auVar47 = minpd(auVar55,auVar46);
    auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
    iVar14 = movmskpd((int)lVar22,auVar40);
    auVar39._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
    auVar39._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
    uVar8 = movmskpd((int)puVar19,auVar39);
    if ((uVar8 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar58 = *pdVar17;
      dVar59 = pdVar17[1];
      dVar61 = pdVar17[2];
      dVar62 = pdVar17[3];
      dVar70 = (double)param_1[0x48];
      dVar72 = (double)param_1[0x49];
      dVar4 = (double)param_1[0x4a];
      dVar67 = (double)param_1[0x4b];
      dVar60 = (double)param_1[0x4b];
      dVar65 = (double)param_1[0x4b];
      dVar34 = (double)param_1[0x48];
      dVar45 = (double)param_1[0x48];
      dVar63 = (double)param_1[0x49];
      dVar35 = (double)param_1[0x49];
      dVar54 = (double)param_1[0x4a];
      dVar37 = (double)param_1[0x4a];
      dVar69 = dVar59 * dVar54 * -1.0 + dVar61 * dVar63 + dVar62 * dVar34 * 1.0 + dVar58 * dVar60;
      dVar71 = dVar58 * dVar37 * 1.0 + dVar62 * dVar35 + dVar61 * dVar45 * -1.0 + dVar59 * dVar65;
      local_3d8._8_8_ =
           dVar61 * dVar37 * -1.0 + ((dVar45 * dVar58 * -1.0 + dVar62 * dVar65) - dVar59 * dVar35);
      local_3d8._0_8_ =
           dVar62 * dVar54 * 1.0 + ((dVar34 * dVar59 * 1.0 + dVar61 * dVar60) - dVar58 * dVar63);
      dVar54 = pdVar17[4] * dVar64;
      dVar58 = pdVar17[5] * dVar66;
      dVar35 = pdVar17[6] * dVar57;
      dVar37 = pdVar17[7] * dVar36;
      dVar34 = dVar58 * dVar70 - dVar72 * dVar54;
      dVar59 = dVar35 * dVar72 - dVar4 * dVar58;
      dVar63 = dVar54 * dVar4 - dVar70 * dVar35;
      dVar45 = dVar37 * dVar67 - dVar67 * dVar37;
      dVar59 = dVar59 + dVar59;
      dVar63 = dVar63 + dVar63;
      dVar34 = dVar34 + dVar34;
      dVar45 = dVar45 + dVar45;
      local_3e8 = (dVar34 * dVar72 - dVar4 * dVar63) + dVar60 * dVar59 + dVar54 +
                  (double)param_1[0x4c];
      dStack_3e0 = (dVar59 * dVar4 - dVar34 * dVar70) + dVar65 * dVar63 + dVar58 +
                   (double)param_1[0x4d];
      local_3f8 = (dVar63 * dVar70 - dVar72 * dVar59) + dVar60 * dVar34 + dVar35 +
                  (double)param_1[0x4e];
      dStack_3f0 = (dVar45 * dVar67 - dVar45 * dVar67) + dVar65 * dVar45 + dVar37 +
                   (double)param_1[0x4f];
      plVar28 = (longlong *)(auVar51._0_8_ * dVar64);
      dVar66 = auVar51._8_8_ * dVar66;
      dVar36 = auVar55._8_8_ * dVar36;
      local_428._8_4_ = SUB84(dVar36,0);
      local_428._0_8_ = auVar55._0_8_ * dVar57;
      local_428._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      uVar9 = 0;
    }
    else {
      local_488 = (longlong *)(auVar51._0_8_ * dVar64);
      dStack_480 = auVar51._8_8_ * dVar66;
      dVar36 = auVar55._8_8_ * dVar36;
      local_428._8_4_ = SUB84(dVar36,0);
      local_428._0_8_ = auVar55._0_8_ * dVar57;
      local_428._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar65 = (double)param_1[0x48];
      dVar60 = (double)param_1[0x49];
      dVar36 = (double)param_1[0x4a];
      dVar34 = dVar60 + dVar60;
      dVar45 = dVar36 + dVar36;
      dVar63 = dVar65 * (dVar65 + dVar65);
      local_1f8 = (1.0 - (dVar36 * dVar45 + dVar60 * dVar34)) * dVar64;
      dStack_1d0 = (1.0 - (dVar36 * dVar45 + dVar63)) * dVar66;
      local_1a8 = (1.0 - (dVar63 + dVar60 * dVar34)) * dVar57;
      dVar36 = (double)param_1[0x4b];
      dVar63 = dVar45 * dVar36;
      dVar35 = (dVar65 + dVar65) * (double)param_1[0x4b];
      dVar36 = dVar34 * dVar36;
      dStack_1f0 = (dVar34 * dVar65 + dVar63) * dVar64;
      local_1c8 = (dVar45 * dVar60 + dVar35) * dVar66;
      local_1b8 = (dVar36 + (double)param_1[0x48] * dVar45) * dVar57;
      local_1d8 = (dVar34 * dVar65 - dVar63) * dVar66;
      dStack_1b0 = (dVar45 * dVar60 - dVar35) * dVar57;
      local_1e8 = ((double)param_1[0x48] * dVar45 - dVar36) * dVar64;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = param_1[0x4c];
      lStack_190 = param_1[0x4d];
      local_188 = param_1[0x4e];
      uStack_180 = 0x3ff0000000000000;
      dVar57 = *pdVar17;
      dVar66 = pdVar17[1];
      dVar64 = pdVar17[2];
      local_268 = pdVar17[8];
      local_258 = pdVar17[9];
      dStack_230 = pdVar17[10];
      dVar34 = dVar66 + dVar66;
      dVar36 = dVar64 + dVar64;
      dVar65 = dVar57 * (dVar57 + dVar57);
      local_278 = (1.0 - (dVar64 * dVar36 + dVar66 * dVar34)) * local_268;
      dStack_250 = (1.0 - (dVar64 * dVar36 + dVar65)) * local_258;
      local_228 = (1.0 - (dVar65 + dVar66 * dVar34)) * dStack_230;
      dVar64 = pdVar17[3];
      dVar65 = dVar36 * dVar64;
      dVar60 = (dVar57 + dVar57) * pdVar17[3];
      dVar64 = dVar34 * dVar64;
      dStack_270 = (dVar34 * dVar57 + dVar65) * local_268;
      local_248 = (dVar36 * dVar66 + dVar60) * local_258;
      local_238 = (dVar64 + *pdVar17 * dVar36) * dStack_230;
      local_268 = (*pdVar17 * dVar36 - dVar64) * local_268;
      local_258 = (dVar34 * dVar57 - dVar65) * local_258;
      dStack_230 = (dVar36 * dVar66 - dVar60) * dStack_230;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = pdVar17[4];
      dStack_210 = pdVar17[5];
      local_208 = pdVar17[6];
      uStack_200 = 0x3ff0000000000000;
      pdVar17 = &local_178;
      FUN_1447fea8d(pdVar17,&local_278,&local_1f8);
      dVar66 = dStack_480;
      plVar28 = local_488;
      auVar51 = _DAT_149934d80;
      local_468._0_8_ = local_168;
      dVar64 = (double)local_168 * (double)local_168 +
               local_178 * local_178 + (double)local_170 * (double)local_170;
      dVar57 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      dVar36 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar27 = -(ulonglong)(0.0 <= dVar64 + -9.99999993922529e-09);
      dVar64 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar64)) & uVar27);
      uVar27 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
      dVar57 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar57)) & uVar27);
      uVar27 = -(ulonglong)(0.0 <= dVar36 + -9.99999993922529e-09);
      dVar36 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar36)) & uVar27);
      auVar47._8_8_ = -(ulonglong)(0.0 <= dStack_480);
      auVar47._0_8_ = -(ulonglong)(0.0 <= (double)local_488);
      auVar55 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar47);
      dVar65 = (double)(~-(ulonglong)(0.0 <= (double)local_428._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_428._0_8_) & 0x3ff0000000000000);
      dVar60 = auVar55._0_8_;
      local_178 = local_178 * dVar64 * dVar60;
      local_170 = (double *)((double)local_170 * dVar64 * dVar60);
      local_168 = (longlong *)(dVar64 * (double)local_168 * dVar60);
      dVar64 = auVar55._8_8_;
      local_148 = dVar57 * local_148 * dVar64;
      local_150 = local_150 * dVar57 * dVar64;
      local_158 = dVar64 * local_158 * dVar57;
      local_128 = dVar36 * local_128 * dVar65;
      local_130 = local_130 * dVar36 * dVar65;
      local_138 = dVar65 * local_138 * dVar36;
      FUN_14481fd10(&local_3a8);
      uVar9 = SUB84(pdVar17,0);
      dVar64 = local_398 * local_398 + local_3a8 * local_3a8;
      dVar57 = dStack_390 * dStack_390 + dStack_3a0 * dStack_3a0;
      auVar41._0_8_ = dVar64 + dVar57;
      auVar41._8_8_ = dVar64 + dVar57;
      auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
      auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
      auVar55 = sqrtpd(auVar41,auVar41);
      auVar51 = divpd(auVar51,auVar55);
      auVar48._0_8_ = auVar51._0_8_ * local_398;
      auVar48._8_8_ = auVar51._8_8_ * dStack_390;
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar29);
      local_3e8 = local_118;
      dStack_3e0 = dStack_110;
      dVar69 = (double)((ulonglong)(local_3a8 * auVar51._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
      dVar71 = (double)((ulonglong)(dStack_3a0 * auVar51._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
      local_3f8 = local_108;
      dStack_3f0 = 0.0;
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x50);
      auVar46 = *(undefined1 (*) [16])(param_1 + 0x52);
    }
    auVar51 = _DAT_149934d80;
    lVar22 = *local_470;
    pdVar17 = (double *)(lVar22 + lVar20);
    local_468 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar20);
    dVar64 = local_468._0_8_;
    local_438 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar20);
    dVar57 = local_438._0_8_;
    auVar55 = minpd(local_468,auVar38);
    auVar39 = minpd(local_438,auVar46);
    auVar42._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
    iVar14 = movmskpd((int)lVar22,auVar42);
    auVar49._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
    auVar49._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
    uVar8 = movmskpd(uVar9,auVar49);
    dVar60 = auVar38._0_8_;
    dVar65 = auVar38._8_8_;
    dVar34 = auVar46._0_8_;
    dVar36 = auVar46._8_8_;
    local_488 = plVar28;
    dStack_480 = dVar66;
    if ((uVar8 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar70 = *pdVar17;
      dVar72 = pdVar17[1];
      dVar4 = pdVar17[2];
      dVar67 = pdVar17[3];
      dVar73 = (double)param_1[0x48];
      dVar5 = (double)param_1[0x49];
      dVar61 = SUB168(*(undefined1 (*) [16])(param_1 + 0x4a),0);
      dVar62 = SUB168(*(undefined1 (*) [16])(param_1 + 0x4a),8);
      dVar45 = (double)param_1[0x4b];
      dVar66 = (double)param_1[0x4b];
      dVar35 = (double)param_1[0x48];
      dVar63 = (double)param_1[0x48];
      dVar54 = (double)param_1[0x49];
      dVar37 = (double)param_1[0x49];
      dVar58 = (double)param_1[0x4a];
      dVar59 = (double)param_1[0x4a];
      dVar74 = dVar72 * dVar58 * -1.0 + dVar4 * dVar54 + dVar67 * dVar35 * 1.0 + dVar70 * dVar45;
      dVar75 = dVar70 * dVar59 * 1.0 + dVar67 * dVar37 + dVar4 * dVar63 * -1.0 + dVar72 * dVar66;
      auVar51._0_8_ =
           dVar67 * dVar58 * 1.0 + ((dVar35 * dVar72 * 1.0 + dVar4 * dVar45) - dVar70 * dVar54);
      auVar51._8_8_ =
           dVar4 * dVar59 * -1.0 + ((dVar63 * dVar70 * -1.0 + dVar67 * dVar66) - dVar72 * dVar37);
      dVar63 = pdVar17[4] * dVar60;
      dVar72 = pdVar17[5] * dVar65;
      dVar58 = pdVar17[6] * dVar34;
      dVar59 = pdVar17[7] * dVar36;
      dVar35 = dVar72 * dVar73 - dVar5 * dVar63;
      dVar70 = dVar58 * dVar5 - dVar61 * dVar72;
      dVar54 = dVar63 * dVar61 - dVar73 * dVar58;
      dVar37 = dVar59 * dVar62 - dVar62 * dVar59;
      dVar70 = dVar70 + dVar70;
      dVar54 = dVar54 + dVar54;
      dVar35 = dVar35 + dVar35;
      dVar37 = dVar37 + dVar37;
      dVar64 = dVar64 * dVar60;
      dVar65 = local_468._8_8_ * dVar65;
      dVar57 = dVar57 * dVar34;
      dVar36 = local_438._8_8_ * dVar36;
      dVar34 = (dVar35 * dVar5 - dVar61 * dVar54) + dVar45 * dVar70 + dVar63 + (double)param_1[0x4c]
      ;
      dVar63 = (dVar70 * dVar61 - dVar35 * dVar73) + dVar66 * dVar54 + dVar72 +
               (double)param_1[0x4d];
      dVar60 = (dVar54 * dVar73 - dVar5 * dVar70) + dVar45 * dVar35 + dVar58 + (double)param_1[0x4e]
      ;
      dVar66 = (dVar37 * dVar62 - dVar37 * dVar62) + dVar66 * dVar37 + dVar59 +
               (double)param_1[0x4f];
    }
    else {
      local_468._8_8_ = local_468._8_8_ * dVar65;
      local_468._0_8_ = dVar64 * dVar60;
      local_438._8_8_ = local_438._8_8_ * dVar36;
      local_438._0_8_ = dVar57 * dVar34;
      dVar57 = (double)param_1[0x48];
      dVar66 = (double)param_1[0x49];
      dVar64 = (double)param_1[0x4a];
      dVar36 = dVar66 + dVar66;
      dVar45 = dVar64 + dVar64;
      dVar63 = dVar57 * (dVar57 + dVar57);
      local_1f8 = ((double)DAT_149934d80 - (dVar64 * dVar45 + dVar66 * dVar36)) * dVar60;
      dStack_1d0 = (DAT_149934d80._8_8_ - (dVar64 * dVar45 + dVar63)) * dVar65;
      local_1a8 = (1.0 - (dVar63 + dVar66 * dVar36)) * dVar34;
      dVar64 = (double)param_1[0x4b];
      dVar63 = dVar45 * dVar64;
      dVar35 = (dVar57 + dVar57) * (double)param_1[0x4b];
      dVar64 = dVar36 * dVar64;
      dStack_1f0 = (dVar36 * dVar57 + dVar63) * dVar60;
      local_1c8 = (dVar45 * dVar66 + dVar35) * dVar65;
      local_1b8 = (dVar64 + (double)param_1[0x48] * dVar45) * dVar34;
      local_1d8 = (dVar36 * dVar57 - dVar63) * dVar65;
      dStack_1b0 = (dVar45 * dVar66 - dVar35) * dVar34;
      local_1e8 = ((double)param_1[0x48] * dVar45 - dVar64) * dVar60;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = param_1[0x4c];
      lStack_190 = param_1[0x4d];
      local_188 = param_1[0x4e];
      uStack_180 = 0x3ff0000000000000;
      dVar57 = *pdVar17;
      dVar66 = pdVar17[1];
      dVar64 = pdVar17[2];
      local_268 = pdVar17[8];
      local_258 = pdVar17[9];
      dStack_230 = pdVar17[10];
      dVar34 = dVar66 + dVar66;
      dVar36 = dVar64 + dVar64;
      dVar65 = dVar57 * (dVar57 + dVar57);
      local_278 = ((double)DAT_149934d80 - (dVar64 * dVar36 + dVar66 * dVar34)) * local_268;
      dStack_250 = (DAT_149934d80._8_8_ - (dVar64 * dVar36 + dVar65)) * local_258;
      local_228 = (1.0 - (dVar65 + dVar66 * dVar34)) * dStack_230;
      dVar64 = pdVar17[3];
      dVar65 = dVar36 * dVar64;
      dVar60 = (dVar57 + dVar57) * pdVar17[3];
      dVar64 = dVar34 * dVar64;
      dStack_270 = (dVar34 * dVar57 + dVar65) * local_268;
      local_248 = (dVar36 * dVar66 + dVar60) * local_258;
      local_238 = (dVar64 + *pdVar17 * dVar36) * dStack_230;
      local_268 = (*pdVar17 * dVar36 - dVar64) * local_268;
      local_258 = (dVar34 * dVar57 - dVar65) * local_258;
      dStack_230 = (dVar36 * dVar66 - dVar60) * dStack_230;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = pdVar17[4];
      dStack_210 = pdVar17[5];
      local_208 = pdVar17[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
      local_410 = local_168;
      dVar64 = (double)local_168 * (double)local_168 +
               local_178 * local_178 + (double)local_170 * (double)local_170;
      local_418 = local_148;
      dVar66 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      dVar57 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar27 = -(ulonglong)(0.0 <= dVar64 + -9.99999993922529e-09);
      dVar65 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar64)) & uVar27);
      uVar27 = -(ulonglong)(0.0 <= dVar66 + -9.99999993922529e-09);
      dVar64 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar66)) & uVar27);
      uVar27 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
      dVar60 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar57)) & uVar27);
      dVar57 = (double)local_438._0_8_;
      dVar36 = (double)local_438._8_8_;
      auVar30._8_8_ = -(ulonglong)(0.0 <= (double)local_468._8_8_);
      auVar30._0_8_ = -(ulonglong)(0.0 <= (double)local_468._0_8_);
      auVar55 = blendvpd(_DAT_149936790,auVar51,auVar30);
      dVar66 = (double)(~-(ulonglong)(0.0 <= (double)local_438._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_438._0_8_) & 0x3ff0000000000000);
      dVar34 = auVar55._0_8_;
      local_178 = local_178 * dVar65 * dVar34;
      local_170 = (double *)((double)local_170 * dVar65 * dVar34);
      local_168 = (longlong *)(dVar65 * (double)local_168 * dVar34);
      dVar65 = auVar55._8_8_;
      local_148 = dVar64 * local_148 * dVar65;
      local_150 = local_150 * dVar64 * dVar65;
      local_158 = dVar65 * local_158 * dVar64;
      local_128 = dVar60 * local_128 * dVar66;
      local_130 = local_130 * dVar60 * dVar66;
      local_138 = dVar66 * local_138 * dVar60;
      local_3c8 = dVar69;
      dStack_3c0 = dVar71;
      FUN_14481fd10(&local_3a8,&local_178);
      dVar64 = local_398 * local_398 + local_3a8 * local_3a8;
      dVar66 = dStack_390 * dStack_390 + dStack_3a0 * dStack_3a0;
      auVar43._0_8_ = dVar64 + dVar66;
      auVar43._8_8_ = dVar64 + dVar66;
      auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
      auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
      auVar55 = sqrtpd(auVar43,auVar43);
      auVar51 = divpd(auVar51,auVar55);
      auVar50._0_8_ = auVar51._0_8_ * local_398;
      auVar50._8_8_ = auVar51._8_8_ * dStack_390;
      dVar74 = (double)((ulonglong)(local_3a8 * auVar51._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
      dVar75 = (double)((ulonglong)(dStack_3a0 * auVar51._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
      auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar31);
      dVar66 = 0.0;
      dVar64 = (double)local_468._0_8_;
      dVar65 = (double)local_468._8_8_;
      dVar60 = local_108;
      dVar34 = local_118;
      dVar63 = dStack_110;
    }
    uVar9 = local_348._8_4_;
    lVar22 = (longlong)(int)local_348._8_4_;
    local_348._8_4_ = local_348._8_4_ + 2;
    if ((uint)(local_348._12_4_ - uVar9) < 2) {
      FUN_144a2c682(local_348,uVar9);
    }
    plVar28 = (longlong *)(lVar22 * 0x60);
    *(double *)(local_348._0_8_ + (longlong)plVar28) = dVar69;
    ((double *)(local_348._0_8_ + (longlong)plVar28))[1] = dVar71;
    puVar2 = (undefined8 *)(local_348._0_8_ + 0x10 + (longlong)plVar28);
    *puVar2 = local_3d8._0_8_;
    puVar2[1] = local_3d8._8_8_;
    pdVar17 = (double *)(local_348._0_8_ + 0x20 + (longlong)plVar28);
    *pdVar17 = local_3e8;
    pdVar17[1] = dStack_3e0;
    pdVar17 = (double *)(local_348._0_8_ + 0x30 + (longlong)plVar28);
    *pdVar17 = local_3f8;
    pdVar17[1] = dStack_3f0;
    plVar23 = (longlong *)(local_348._0_8_ + 0x40 + (longlong)plVar28);
    *plVar23 = (longlong)local_488;
    plVar23[1] = (longlong)dStack_480;
    *(undefined1 (*) [16])(local_348._0_8_ + 0x50 + (longlong)plVar28) = local_428;
    pdVar17 = (double *)(local_348._0_8_ + 0x60 + (longlong)plVar28);
    *pdVar17 = dVar74;
    pdVar17[1] = dVar75;
    *(undefined1 (*) [16])(local_348._0_8_ + 0x70 + (longlong)plVar28) = auVar51;
    pdVar17 = (double *)(local_348._0_8_ + 0x80 + (longlong)plVar28);
    *pdVar17 = dVar34;
    pdVar17[1] = dVar63;
    pdVar17 = (double *)(local_348._0_8_ + 0x90 + (longlong)plVar28);
    *pdVar17 = dVar60;
    pdVar17[1] = dVar66;
    pdVar17 = (double *)(local_348._0_8_ + 0xa0 + (longlong)plVar28);
    *pdVar17 = dVar64;
    pdVar17[1] = dVar65;
    pdVar17 = (double *)(local_348._0_8_ + 0xb0 + (longlong)plVar28);
    *pdVar17 = dVar57;
    pdVar17[1] = dVar36;
  }
  goto LAB_14353900e;
code_r0x000143537c73:
  lVar26 = lVar26 + 1;
  if (lVar26 == 4) goto code_r0x000143537c7c;
  goto LAB_143537c5b;
code_r0x000143537c7c:
  lVar22 = lVar22 + 1;
  puVar19 = puVar19 + 0x20;
  plVar28 = plVar28 + 4;
  if (lVar22 == 4) goto LAB_14353900e;
  goto LAB_143537c58;
LAB_14353900e:
  if ((0 < local_49c) && (*(char *)((longlong)param_1 + 0x1fb) != '\0')) {
    iVar14 = (int)param_1[0xf4];
    lVar22 = (longlong)iVar14;
    if (0 < lVar22) {
      plVar28 = (longlong *)((longlong)(iVar18 * iVar14) * 4 + param_1[0xf5]);
      lVar20 = 0;
      do {
        if (1e-06 < ABS(*(float *)(*param_6 + (longlong)(iVar10 * iVar14) * 4 + lVar20 * 4) -
                        *(float *)((longlong)plVar28 + lVar20 * 4))) {
          memcpy(plVar28,(void *)(*param_6 + (longlong)(iVar10 * iVar14) * 4),lVar22 << 2);
          if (*(char *)((longlong)param_1 + 0x95d) == '\x01') {
            iVar10 = (int)param_1[0x119];
            if (iVar10 == 0) {
              iVar10 = (int)param_1[0x11c];
            }
            if (iVar10 <= iVar18) {
              iVar10 = iVar18;
            }
            iVar14 = iVar10 + 0xe;
            if (-1 < iVar10 + 7) {
              iVar14 = iVar10 + 7;
            }
            if ((int)param_1[0x11e] < iVar14 >> 3) {
              FUN_1402d2c96(local_448,iVar14 >> 3,1);
            }
            *(int *)(param_1 + 0x123) = iVar10;
            iVar10 = (int)param_1[0x124];
            if (iVar18 <= (int)param_1[0x124]) {
              iVar10 = iVar18;
            }
            *(int *)(param_1 + 0x124) = iVar10;
            iVar10 = *(int *)((longlong)param_1 + 0x924);
            if (*(int *)((longlong)param_1 + 0x924) < iVar18) {
              iVar10 = iVar18;
            }
            iVar14 = iVar18 + 7;
            if (-1 < iVar18) {
              iVar14 = iVar18;
            }
            *(int *)((longlong)param_1 + 0x924) = iVar10;
            uVar8 = *(uint *)(param_1[0x11d] + (longlong)(iVar14 >> 3) * 4);
            bVar13 = (byte)(iVar18 % 8 << 2);
            if ((uVar8 >> (bVar13 & 0x1f) & 5) == 0) {
              *(int *)(param_1 + 0x126) = (int)param_1[0x126] + 1;
            }
            *(uint *)(param_1[0x11d] + (longlong)(iVar14 >> 3) * 4) = uVar8 | 4 << (bVar13 & 0x1f);
          }
          else {
            if (*(char *)((longlong)param_1 + 0x95d) == '\x02') break;
            *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) | 0x10;
          }
          plVar28 = local_4a8;
          FUN_1402d2c26(local_4a8);
          break;
        }
        lVar20 = lVar20 + 1;
      } while (lVar22 != lVar20);
    }
  }
  *(undefined4 *)((longlong)local_328 + lVar25 * 4) = 0xffffffff;
  plVar23 = local_458;
LAB_143537aae:
  lVar21 = lVar21 + 1;
  if ((int)param_2[1] <= lVar21) goto LAB_1435391ca;
  goto LAB_143537a15;
}



// FUNCTION 14353a368 FUN_14353a368 body=8299 status=ok
// SIG undefined FUN_14353a368(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14353a368(longlong *param_1,uint param_2,undefined8 *param_3,char param_4,char param_5,
             undefined1 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined7 uVar18;
  byte bVar19;
  uint uVar20;
  double *pdVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  double *pdVar26;
  double *pdVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  double dVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  double dVar56;
  double dVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  undefined1 auVar71 [16];
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStack_458 [39];
  char local_431;
  undefined4 local_430;
  undefined4 local_42c;
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  longlong local_400;
  undefined1 local_3f8 [24];
  double local_3e0;
  double local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  longlong local_378;
  undefined4 local_370;
  double local_368 [2];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308 [4];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if ((((int)param_2 < 0) || ((int)*(uint *)(param_1 + 0xe5) <= (int)param_2)) ||
     (uVar20 = *(int *)(param_3 + 1) + param_2,
     *(uint *)(param_1 + 0xe5) < uVar20 ||
     (uVar20 == 0 || SCARRY4(*(int *)(param_3 + 1),param_2) != (int)uVar20 < 0))) {
    uVar17 = 0;
    goto LAB_14353a41f;
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) ||
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) {
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_430 = 0;
    local_42c = 0;
LAB_14353a4ef:
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      pdVar27 = (double *)*param_3;
      local_3c8 = param_1 + 0x48;
      local_3c0 = param_1 + 0x118;
      local_3d0 = param_1 + 0x11d;
      uVar30 = (ulonglong)param_2;
      iVar29 = param_2 << 2;
      lVar28 = uVar30 << 7;
      lVar25 = (longlong)*(int *)(param_3 + 1) * 0x60;
      local_431 = param_4;
      do {
        lVar23 = param_1[0xe4];
        local_400 = lVar25;
        if ((char)local_430 != '\0') {
          pdVar21 = local_308;
          uVar15 = FUN_1448ac920(pdVar21,lVar23 + lVar28);
          auVar40 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar61 = auVar40._0_8_;
          dVar63 = auVar40._8_8_;
          auVar68 = *(undefined1 (*) [16])(param_1 + 0x52);
          dVar51 = auVar68._0_8_;
          dStack_410 = auVar68._8_8_;
          auVar45._8_8_ = dStack_2c0;
          auVar45._0_8_ = local_2c8;
          auVar12._8_8_ = dStack_2b0;
          auVar12._0_8_ = local_2b8;
          auVar40 = minpd(auVar45,auVar40);
          auVar45 = minpd(auVar12,auVar68);
          auVar68._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
          auVar68._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
          iVar16 = movmskpd(uVar15,auVar68);
          auVar40._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
          auVar40._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
          uVar20 = movmskpd((int)pdVar21,auVar40);
          if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
            dVar58 = (double)param_1[0x48];
            dVar59 = (double)param_1[0x49];
            dVar62 = (double)param_1[0x4a];
            dVar65 = (double)param_1[0x4b];
            dVar38 = (double)param_1[0x4b];
            dVar57 = (double)param_1[0x4b];
            dVar60 = (double)param_1[0x48];
            dVar39 = (double)param_1[0x48];
            dVar52 = (double)param_1[0x49];
            dVar44 = (double)param_1[0x49];
            dVar56 = (double)param_1[0x4a];
            dVar53 = (double)param_1[0x4a];
            local_388 = local_308[1] * dVar56 * -1.0 +
                        local_308[2] * dVar52 + local_308[3] * dVar60 * 1.0 + local_308[0] * dVar38;
            dStack_380 = local_308[0] * dVar53 * 1.0 +
                         local_308[3] * dVar44 +
                         local_308[2] * dVar39 * -1.0 + local_308[1] * dVar57;
            auVar71._0_8_ =
                 local_308[3] * dVar56 * 1.0 +
                 ((dVar60 * local_308[1] * 1.0 + local_308[2] * dVar38) - local_308[0] * dVar52);
            auVar71._8_8_ =
                 local_308[2] * dVar53 * -1.0 +
                 ((dVar39 * local_308[0] * -1.0 + local_308[3] * dVar57) - local_308[1] * dVar44);
            dVar44 = local_2e8 * dVar61;
            dVar64 = dStack_2e0 * dVar63;
            dVar56 = local_2d8 * dVar51;
            dVar74 = dStack_2d0 * dStack_410;
            dVar52 = dVar64 * dVar58 - dVar59 * dVar44;
            dVar53 = dVar56 * dVar59 - dVar62 * dVar64;
            dVar60 = dVar44 * dVar62 - dVar58 * dVar56;
            dVar39 = dVar74 * dVar65 - dVar65 * dVar74;
            dVar53 = dVar53 + dVar53;
            dVar60 = dVar60 + dVar60;
            dVar52 = dVar52 + dVar52;
            dVar39 = dVar39 + dVar39;
            dVar61 = local_2c8 * dVar61;
            dVar63 = dStack_2c0 * dVar63;
            local_418 = local_2b8 * dVar51;
            dStack_410 = dStack_2b0 * dStack_410;
            dVar51 = (dVar52 * dVar59 - dVar62 * dVar60) + dVar38 * dVar53 + dVar44 +
                     (double)param_1[0x4c];
            dVar44 = (dVar53 * dVar62 - dVar52 * dVar58) + dVar57 * dVar60 + dVar64 +
                     (double)param_1[0x4d];
            dVar38 = (dVar60 * dVar58 - dVar59 * dVar53) + dVar38 * dVar52 + dVar56 +
                     (double)param_1[0x4e];
            dVar57 = (dVar39 * dVar65 - dVar39 * dVar65) + dVar57 * dVar39 + dVar74 +
                     (double)param_1[0x4f];
            uVar15 = 0;
          }
          else {
            dVar57 = (double)param_1[0x48];
            dVar60 = (double)param_1[0x49];
            dVar39 = (double)param_1[0x4a];
            dVar44 = dVar60 + dVar60;
            dVar52 = dVar39 + dVar39;
            dVar58 = dVar57 * (dVar57 + dVar57);
            local_1a8 = (1.0 - (dVar58 + dVar60 * dVar44)) * dVar51;
            dVar38 = (double)param_1[0x4b];
            dVar53 = dVar52 * dVar38;
            dVar56 = (dVar57 + dVar57) * (double)param_1[0x4b];
            dVar38 = dVar44 * dVar38;
            local_1b8 = (dVar38 + (double)param_1[0x48] * dVar52) * dVar51;
            local_418 = dVar51 * local_2b8;
            dStack_410 = dStack_410 * dStack_2b0;
            dVar59 = (dVar44 * dVar57 + dVar53) * dVar61;
            local_1c8 = (dVar52 * dVar60 + dVar56) * dVar63;
            dStack_1b0 = (dVar52 * dVar60 - dVar56) * dVar51;
            local_1e8 = ((double)param_1[0x48] * dVar52 - dVar38) * dVar61;
            local_1f8._8_4_ = SUB84(dVar59,0);
            local_1f8._0_8_ = (1.0 - (dVar39 * dVar52 + dVar60 * dVar44)) * dVar61;
            local_1f8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_8_ = (1.0 - (dVar39 * dVar52 + dVar58)) * dVar63;
            local_1d8._0_8_ = (dVar44 * dVar57 - dVar53) * dVar63;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0x4c];
            lStack_190 = param_1[0x4d];
            local_188 = param_1[0x4e];
            uStack_180 = 0x3ff0000000000000;
            dVar51 = local_308[1] + local_308[1];
            dVar38 = local_308[2] + local_308[2];
            dVar60 = local_308[0] * (local_308[0] + local_308[0]);
            local_228 = (1.0 - (dVar60 + local_308[1] * dVar51)) * local_2b8;
            dVar57 = (local_308[0] + local_308[0]) * local_308[3];
            local_238 = (dVar51 * local_308[3] + local_308[0] * dVar38) * local_2b8;
            dStack_230 = (dVar38 * local_308[1] - dVar57) * local_2b8;
            local_428._8_4_ = SUB84(dVar63 * dStack_2c0,0);
            local_428._0_8_ = dVar61 * local_2c8;
            local_428._12_4_ = (int)((ulonglong)(dVar63 * dStack_2c0) >> 0x20);
            local_278 = (1.0 - (local_308[2] * dVar38 + local_308[1] * dVar51)) * local_2c8;
            dVar61 = (1.0 - (local_308[2] * dVar38 + dVar60)) * dStack_2c0;
            dStack_270 = (dVar51 * local_308[0] + dVar38 * local_308[3]) * local_2c8;
            local_248 = (dVar38 * local_308[1] + dVar57) * dStack_2c0;
            local_268 = (local_308[0] * dVar38 - dVar51 * local_308[3]) * local_2c8;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar61,0);
            local_258._0_8_ = (dVar51 * local_308[0] - dVar38 * local_308[3]) * dStack_2c0;
            local_258._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_2e8;
            dStack_210 = dStack_2e0;
            local_208 = local_2d8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            auVar40 = _DAT_149934d80;
            dVar61 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
            dVar63 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar57 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar31 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
            dVar51 = (double)(~uVar31 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar61)) & uVar31);
            uVar31 = -(ulonglong)(0.0 <= dVar63 + -9.99999993922529e-09);
            dVar38 = (double)(~uVar31 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar63)) & uVar31);
            uVar31 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
            dVar57 = (double)(~uVar31 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar57)) & uVar31);
            dVar61 = (double)local_428._0_8_;
            dVar63 = (double)local_428._8_8_;
            auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_428._8_8_);
            auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_428._0_8_);
            auVar68 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
            dVar60 = (double)(~-(ulonglong)(0.0 <= local_418) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= local_418) & 0x3ff0000000000000);
            dVar39 = auVar68._0_8_;
            local_178 = local_178 * dVar51 * dVar39;
            local_170 = local_170 * dVar51 * dVar39;
            local_168 = dVar51 * local_168 * dVar39;
            dVar51 = auVar68._8_8_;
            local_148 = dVar38 * local_148 * dVar51;
            local_150 = local_150 * dVar38 * dVar51;
            local_158 = dVar51 * local_158 * dVar38;
            local_128 = dVar57 * local_128 * dVar60;
            local_130 = local_130 * dVar57 * dVar60;
            local_138 = dVar60 * local_138 * dVar57;
            pdVar21 = local_368;
            iVar16 = FUN_14481fd10(pdVar21,&local_178);
            uVar15 = SUB84(pdVar21,0);
            dVar51 = (double)local_358._0_8_ * (double)local_358._0_8_ + local_368[0] * local_368[0]
            ;
            dVar38 = (double)local_358._8_8_ * (double)local_358._8_8_ + local_368[1] * local_368[1]
            ;
            auVar41._0_8_ = dVar51 + dVar38;
            auVar41._8_8_ = dVar51 + dVar38;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
            auVar68 = sqrtpd(auVar41,auVar41);
            auVar40 = divpd(auVar40,auVar68);
            auVar46._0_8_ = auVar40._0_8_ * (double)local_358._0_8_;
            auVar46._8_8_ = auVar40._8_8_ * (double)local_358._8_8_;
            local_388 = (double)((ulonglong)(local_368[0] * auVar40._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
            dStack_380 = (double)((ulonglong)(local_368[1] * auVar40._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
            auVar71 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar33);
            dVar57 = 0.0;
            dVar51 = local_118;
            dVar44 = dStack_110;
            dVar38 = local_108;
          }
          if (param_4 == '\0') {
            local_428._8_4_ = SUB84(dVar63,0);
            local_428._0_8_ = dVar61;
            local_428._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
            auVar40 = *(undefined1 (*) [16])(param_1 + 0x50);
            dVar63 = auVar40._0_8_;
            dVar52 = auVar40._8_8_;
            auVar68 = *(undefined1 (*) [16])(param_1 + 0x52);
            dVar60 = auVar68._0_8_;
            dVar53 = auVar68._8_8_;
            local_3f8._0_16_ = *(undefined1 (*) [16])(pdVar27 + 8);
            dVar39 = local_3f8._0_8_;
            auVar45 = *(undefined1 (*) [16])(pdVar27 + 10);
            auVar40 = minpd(local_3f8._0_16_,auVar40);
            auVar68 = minpd(auVar45,auVar68);
            auVar42._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
            auVar42._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
            iVar16 = movmskpd(iVar16,auVar42);
            auVar47._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
            auVar47._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
            uVar20 = movmskpd(uVar15,auVar47);
            local_3a8 = dVar38;
            dStack_3a0 = dVar57;
            local_398 = auVar71;
            if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
              dVar67 = *pdVar27;
              dVar73 = pdVar27[1];
              dVar70 = pdVar27[2];
              dVar72 = pdVar27[3];
              dVar7 = (double)param_1[0x48];
              dVar8 = (double)param_1[0x49];
              dVar9 = (double)param_1[0x4a];
              dVar10 = (double)param_1[0x4b];
              dVar56 = (double)param_1[0x4b];
              dVar58 = (double)param_1[0x4b];
              dVar59 = (double)param_1[0x48];
              dVar62 = (double)param_1[0x48];
              dVar74 = (double)param_1[0x49];
              dVar65 = (double)param_1[0x49];
              dVar66 = (double)param_1[0x4a];
              dVar64 = (double)param_1[0x4a];
              dVar3 = dVar73 * dVar66 * -1.0 +
                      dVar70 * dVar74 + dVar72 * dVar59 * 1.0 + dVar67 * dVar56;
              dVar4 = dVar67 * dVar64 * 1.0 +
                      dVar72 * dVar65 + dVar70 * dVar62 * -1.0 + dVar73 * dVar58;
              auVar69._0_8_ =
                   dVar72 * dVar66 * 1.0 +
                   ((dVar59 * dVar73 * 1.0 + dVar70 * dVar56) - dVar67 * dVar74);
              auVar69._8_8_ =
                   dVar70 * dVar64 * -1.0 +
                   ((dVar62 * dVar67 * -1.0 + dVar72 * dVar58) - dVar73 * dVar65);
              dVar59 = pdVar27[4] * dVar63;
              dVar62 = pdVar27[5] * dVar52;
              dVar64 = pdVar27[6] * dVar60;
              dVar66 = pdVar27[7] * dVar53;
              dVar67 = dVar62 * dVar7 - dVar8 * dVar59;
              dVar73 = dVar64 * dVar8 - dVar9 * dVar62;
              dVar65 = dVar59 * dVar9 - dVar7 * dVar64;
              dVar74 = dVar66 * dVar10 - dVar10 * dVar66;
              dVar73 = dVar73 + dVar73;
              dVar65 = dVar65 + dVar65;
              dVar67 = dVar67 + dVar67;
              dVar74 = dVar74 + dVar74;
              dVar39 = dVar39 * dVar63;
              dVar52 = local_3f8._8_8_ * dVar52;
              dVar60 = auVar45._0_8_ * dVar60;
              dVar53 = auVar45._8_8_ * dVar53;
              dVar59 = (dVar67 * dVar8 - dVar9 * dVar65) + dVar56 * dVar73 + dVar59 +
                       (double)param_1[0x4c];
              dVar62 = (dVar73 * dVar9 - dVar67 * dVar7) + dVar58 * dVar65 + dVar62 +
                       (double)param_1[0x4d];
              dVar65 = (dVar65 * dVar7 - dVar8 * dVar73) + dVar56 * dVar67 + dVar64 +
                       (double)param_1[0x4e];
              dVar56 = (dVar74 * dVar10 - dVar74 * dVar10) + dVar58 * dVar74 + dVar66 +
                       (double)param_1[0x4f];
              dVar63 = (double)local_428._8_8_;
            }
            else {
              local_3f8._8_8_ = local_3f8._8_8_ * dVar52;
              local_3f8._0_8_ = dVar39 * dVar63;
              local_3b8 = auVar45._0_8_ * dVar60;
              dStack_3b0 = auVar45._8_8_ * dVar53;
              dVar38 = (double)param_1[0x48];
              dVar57 = (double)param_1[0x49];
              dVar39 = (double)param_1[0x4a];
              dVar53 = dVar57 + dVar57;
              dVar56 = dVar39 + dVar39;
              dVar62 = dVar38 * (dVar38 + dVar38);
              local_1a8 = (1.0 - (dVar62 + dVar57 * dVar53)) * dVar60;
              dVar61 = (double)param_1[0x4b];
              dVar58 = dVar56 * dVar61;
              dVar59 = (dVar38 + dVar38) * (double)param_1[0x4b];
              dVar61 = dVar53 * dVar61;
              local_1c8 = (dVar56 * dVar57 + dVar59) * dVar52;
              local_1b8 = (dVar61 + (double)param_1[0x48] * dVar56) * dVar60;
              dStack_1b0 = (dVar56 * dVar57 - dVar59) * dVar60;
              local_1e8 = ((double)param_1[0x48] * dVar56 - dVar61) * dVar63;
              local_1f8._8_8_ = (dVar53 * dVar38 + dVar58) * dVar63;
              local_1f8._0_8_ = (1.0 - (dVar39 * dVar56 + dVar57 * dVar53)) * dVar63;
              uStack_1e0 = 0;
              local_1d8._8_8_ = (1.0 - (dVar39 * dVar56 + dVar62)) * dVar52;
              local_1d8._0_8_ = (dVar53 * dVar38 - dVar58) * dVar52;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_1[0x4c];
              lStack_190 = param_1[0x4d];
              local_188 = param_1[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar63 = *pdVar27;
              dVar38 = pdVar27[1];
              dVar57 = pdVar27[2];
              local_268 = pdVar27[8];
              dVar60 = pdVar27[9];
              dStack_230 = pdVar27[10];
              dVar56 = dVar38 + dVar38;
              dVar39 = dVar57 + dVar57;
              dVar58 = dVar63 * (dVar63 + dVar63);
              local_278 = (1.0 - (dVar57 * dVar39 + dVar38 * dVar56)) * local_268;
              local_228 = (1.0 - (dVar58 + dVar38 * dVar56)) * dStack_230;
              dVar61 = pdVar27[3];
              dVar52 = dVar39 * dVar61;
              dVar53 = (dVar63 + dVar63) * pdVar27[3];
              dVar61 = dVar56 * dVar61;
              dStack_270 = (dVar56 * dVar63 + dVar52) * local_268;
              local_248 = (dVar39 * dVar38 + dVar53) * dVar60;
              local_238 = (dVar61 + *pdVar27 * dVar39) * dStack_230;
              local_268 = (*pdVar27 * dVar39 - dVar61) * local_268;
              dStack_230 = (dVar39 * dVar38 - dVar53) * dStack_230;
              uStack_260 = 0;
              local_258._8_8_ = (1.0 - (dVar57 * dVar39 + dVar58)) * dVar60;
              local_258._0_8_ = (dVar56 * dVar63 - dVar52) * dVar60;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = pdVar27[4];
              dStack_210 = pdVar27[5];
              local_208 = pdVar27[6];
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,local_1f8);
              auVar40 = _DAT_149934d80;
              local_3d8 = local_168;
              dVar61 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
              local_3e0 = local_158;
              dVar63 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
              dVar38 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar31 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
              dVar61 = (double)(~uVar31 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar61)) & uVar31);
              uVar31 = -(ulonglong)(0.0 <= dVar63 + -9.99999993922529e-09);
              dVar63 = (double)(~uVar31 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar63)) & uVar31);
              uVar31 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
              dVar57 = (double)(~uVar31 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar38)) & uVar31);
              dVar39 = (double)local_3f8._0_8_;
              dVar52 = (double)local_3f8._8_8_;
              auVar34._8_8_ = -(ulonglong)(0.0 <= (double)local_3f8._8_8_);
              auVar34._0_8_ = -(ulonglong)(0.0 <= (double)local_3f8._0_8_);
              auVar68 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
              dVar38 = (double)(~-(ulonglong)(0.0 <= local_3b8) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= local_3b8) & 0x3ff0000000000000);
              dVar60 = auVar68._0_8_;
              local_178 = local_178 * dVar61 * dVar60;
              local_170 = local_170 * dVar61 * dVar60;
              local_168 = dVar61 * local_168 * dVar60;
              dVar61 = auVar68._8_8_;
              local_148 = dVar63 * local_148 * dVar61;
              local_150 = local_150 * dVar63 * dVar61;
              local_158 = dVar61 * local_158 * dVar63;
              local_128 = dVar57 * local_128 * dVar38;
              local_130 = local_130 * dVar57 * dVar38;
              local_138 = dVar38 * local_138 * dVar57;
              FUN_14481fd10(local_368,&local_178);
              dVar61 = (double)local_358._0_8_ * (double)local_358._0_8_ +
                       local_368[0] * local_368[0];
              dVar63 = (double)local_358._8_8_ * (double)local_358._8_8_ +
                       local_368[1] * local_368[1];
              auVar43._0_8_ = dVar61 + dVar63;
              auVar43._8_8_ = dVar61 + dVar63;
              auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
              auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
              auVar68 = sqrtpd(auVar43,auVar43);
              auVar40 = divpd(auVar40,auVar68);
              auVar48._0_8_ = auVar40._0_8_ * (double)local_358._0_8_;
              auVar48._8_8_ = auVar40._8_8_ * (double)local_358._8_8_;
              dVar3 = (double)((ulonglong)(local_368[0] * auVar40._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
              dVar4 = (double)((ulonglong)(local_368[1] * auVar40._8_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
              auVar69 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar35);
              dVar56 = 0.0;
              auVar71 = local_398;
              dVar61 = (double)local_428._0_8_;
              dVar63 = (double)local_428._8_8_;
              dVar59 = local_118;
              dVar62 = dStack_110;
              dVar65 = local_108;
              dVar60 = local_3b8;
              dVar53 = dStack_3b0;
              dVar38 = local_3a8;
              dVar57 = dStack_3a0;
            }
          }
          else {
            dVar3 = *pdVar27;
            dVar4 = pdVar27[1];
            auVar69 = *(undefined1 (*) [16])(pdVar27 + 2);
            dVar56 = pdVar27[7];
            dVar39 = pdVar27[8];
            dVar52 = pdVar27[9];
            dVar59 = pdVar27[4];
            dVar62 = pdVar27[5];
            dVar65 = pdVar27[6];
            dVar60 = pdVar27[10];
            dVar53 = pdVar27[0xb];
          }
          uVar31 = uStack_2a0;
          iVar16 = (int)uStack_2a0;
          lVar25 = (longlong)(int)uStack_2a0;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + 2);
          if ((uint)(uStack_2a0._4_4_ - iVar16) < 2) {
            FUN_144a2c682(&local_2a8,uVar31 & 0xffffffff);
          }
          lVar25 = lVar25 * 0x60;
          *(double *)(local_2a8 + lVar25) = local_388;
          ((double *)(local_2a8 + lVar25))[1] = dStack_380;
          *(undefined1 (*) [16])(local_2a8 + 0x10 + lVar25) = auVar71;
          pdVar21 = (double *)(local_2a8 + 0x20 + lVar25);
          *pdVar21 = dVar51;
          pdVar21[1] = dVar44;
          pdVar21 = (double *)(local_2a8 + 0x30 + lVar25);
          *pdVar21 = dVar38;
          pdVar21[1] = dVar57;
          auVar5._8_4_ = SUB84(dVar63,0);
          auVar5._0_8_ = dVar61;
          auVar5._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x40 + lVar25) = auVar5;
          pdVar21 = (double *)(local_2a8 + 0x50 + lVar25);
          *pdVar21 = local_418;
          pdVar21[1] = dStack_410;
          auVar1._8_4_ = SUB84(dVar4,0);
          auVar1._0_8_ = dVar3;
          auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0x60 + lVar25) = auVar1;
          *(undefined1 (*) [16])(local_2a8 + 0x70 + lVar25) = auVar69;
          pdVar21 = (double *)(local_2a8 + 0x80 + lVar25);
          *pdVar21 = dVar59;
          pdVar21[1] = dVar62;
          pdVar21 = (double *)(local_2a8 + 0x90 + lVar25);
          *pdVar21 = dVar65;
          pdVar21[1] = dVar56;
          auVar6._8_4_ = SUB84(dVar52,0);
          auVar6._0_8_ = dVar39;
          auVar6._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 0xa0 + lVar25) = auVar6;
          pdVar21 = (double *)(local_2a8 + 0xb0 + lVar25);
          *pdVar21 = dVar60;
          pdVar21[1] = dVar53;
        }
        if (param_4 == '\0') {
          pdVar21 = pdVar27;
          pdVar26 = local_308;
          for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
            *pdVar26 = *pdVar21;
            pdVar21 = pdVar21 + 1;
            pdVar26 = pdVar26 + 1;
          }
          uVar15 = 0;
          param_4 = local_431;
        }
        else {
          pdVar21 = pdVar27;
          FUN_1449437a2(pdVar27,local_308,local_3c8);
          uVar15 = SUB84(pdVar21,0);
        }
        lVar25 = local_400;
        dVar63 = local_308[1] + local_308[1];
        dVar61 = local_308[2] + local_308[2];
        dVar38 = local_308[0] * (local_308[0] + local_308[0]);
        dVar51 = (local_308[0] + local_308[0]) * local_308[3];
        dVar57 = (dVar63 * local_308[0] + dVar61 * local_308[3]) * local_2c8;
        auVar2._8_4_ = SUB84(dVar57,0);
        auVar2._0_8_ = (1.0 - (local_308[2] * dVar61 + local_308[1] * dVar63)) * local_2c8;
        auVar2._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
        *(undefined1 (*) [16])(lVar23 + lVar28) = auVar2;
        pdVar21 = (double *)(lVar23 + 0x10 + lVar28);
        *pdVar21 = (local_308[0] * dVar61 - dVar63 * local_308[3]) * local_2c8;
        pdVar21[1] = 0.0;
        pdVar21 = (double *)(lVar23 + 0x20 + lVar28);
        *pdVar21 = (dVar63 * local_308[0] - dVar61 * local_308[3]) * dStack_2c0;
        pdVar21[1] = (1.0 - (local_308[2] * dVar61 + dVar38)) * dStack_2c0;
        pdVar21 = (double *)(lVar23 + 0x30 + lVar28);
        *pdVar21 = (dVar61 * local_308[1] + dVar51) * dStack_2c0;
        pdVar21[1] = 0.0;
        pdVar21 = (double *)(lVar23 + 0x40 + lVar28);
        *pdVar21 = (dVar63 * local_308[3] + local_308[0] * dVar61) * local_2b8;
        pdVar21[1] = (dVar61 * local_308[1] - dVar51) * local_2b8;
        pdVar21 = (double *)(lVar23 + 0x50 + lVar28);
        *pdVar21 = (1.0 - (dVar38 + local_308[1] * dVar63)) * local_2b8;
        pdVar21[1] = 0.0;
        pdVar21 = (double *)(lVar23 + 0x60 + lVar28);
        *pdVar21 = local_2e8;
        pdVar21[1] = dStack_2e0;
        pdVar21 = (double *)(lVar23 + 0x70 + lVar28);
        *pdVar21 = local_2d8;
        pdVar21[1] = 1.0;
        iVar16 = (int)uVar30;
        if (*(char *)((longlong)param_1 + 0x95d) == '\x01') {
          iVar24 = (int)param_1[0x119];
          if (iVar24 == 0) {
            iVar24 = (int)param_1[0x11c];
          }
          if (iVar24 <= iVar16) {
            iVar24 = iVar16;
          }
          uVar20 = iVar24 + 7U >> 3;
          if ((int)param_1[0x11e] < (int)uVar20) {
            FUN_1402d2c96(local_3d0,uVar20,1);
          }
          *(int *)(param_1 + 0x123) = iVar24;
          iVar24 = (int)param_1[0x124];
          if (iVar16 <= (int)param_1[0x124]) {
            iVar24 = iVar16;
          }
          *(int *)(param_1 + 0x124) = iVar24;
          iVar24 = *(int *)((longlong)param_1 + 0x924);
          if (*(int *)((longlong)param_1 + 0x924) < iVar16) {
            iVar24 = iVar16;
          }
          *(int *)((longlong)param_1 + 0x924) = iVar24;
          bVar19 = (byte)iVar29 & 0x1c;
          uVar31 = uVar30 >> 3 & 0x1fffffff;
          uVar20 = *(uint *)(param_1[0x11d] + uVar31 * 4);
          if ((uVar20 >> bVar19 & 3) == 0) {
            *(int *)((longlong)param_1 + 0x92c) = *(int *)((longlong)param_1 + 0x92c) + 1;
          }
          *(uint *)(param_1[0x11d] + uVar31 * 4) = uVar20 | 2 << bVar19;
LAB_14353b94c:
          plVar22 = local_3c0;
          FUN_1402d2c26();
          uVar15 = SUB84(plVar22,0);
        }
        else if (*(char *)((longlong)param_1 + 0x95d) != '\x02') {
          *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) | 0x10;
          goto LAB_14353b94c;
        }
        if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
          if (param_4 == '\0') {
            local_338 = ZEXT816(0);
            local_348 = 0.0;
            dStack_340 = 0.0;
            auVar40 = *(undefined1 (*) [16])(param_1 + 0x50);
            dVar61 = auVar40._0_8_;
            dVar63 = auVar40._8_8_;
            auVar68 = *(undefined1 (*) [16])(param_1 + 0x52);
            dVar51 = auVar68._0_8_;
            dVar38 = auVar68._8_8_;
            auVar11._8_8_ = dStack_2c0;
            auVar11._0_8_ = local_2c8;
            auVar13._8_8_ = dStack_2b0;
            auVar13._0_8_ = local_2b8;
            auVar40 = minpd(auVar11,auVar40);
            auVar68 = minpd(auVar13,auVar68);
            auVar49._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
            auVar49._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
            iVar16 = movmskpd((int)&local_348,auVar49);
            auVar54._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
            auVar54._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
            uVar20 = movmskpd(uVar15,auVar54);
            if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
              dVar64 = (double)param_1[0x48];
              dVar66 = (double)param_1[0x49];
              dVar3 = (double)param_1[0x4a];
              dVar4 = (double)param_1[0x4b];
              dVar57 = (double)param_1[0x4b];
              dVar60 = (double)param_1[0x4b];
              dVar39 = (double)param_1[0x48];
              dVar44 = (double)param_1[0x48];
              dVar53 = (double)param_1[0x49];
              dVar52 = (double)param_1[0x49];
              dVar58 = (double)param_1[0x4a];
              dVar56 = (double)param_1[0x4a];
              local_368[0] = local_308[1] * dVar58 * -1.0 +
                             local_308[2] * dVar53 +
                             local_308[3] * dVar39 * 1.0 + local_308[0] * dVar57;
              local_368[1] = local_308[0] * dVar56 * 1.0 +
                             local_308[3] * dVar52 +
                             local_308[2] * dVar44 * -1.0 + local_308[1] * dVar60;
              dVar59 = local_2e8 * dVar61;
              dVar62 = dStack_2e0 * dVar63;
              dVar70 = local_2d8 * dVar51;
              dVar72 = dStack_2d0 * dVar38;
              dVar65 = dVar62 * dVar64 - dVar66 * dVar59;
              dVar67 = dVar70 * dVar66 - dVar3 * dVar62;
              dVar73 = dVar59 * dVar3 - dVar64 * dVar70;
              dVar74 = dVar72 * dVar4 - dVar4 * dVar72;
              dVar67 = dVar67 + dVar67;
              dVar73 = dVar73 + dVar73;
              dVar65 = dVar65 + dVar65;
              dVar74 = dVar74 + dVar74;
              local_348 = (dVar65 * dVar66 - dVar3 * dVar73) + dVar57 * dVar67 + dVar59 +
                          (double)param_1[0x4c];
              dStack_340 = (dVar67 * dVar3 - dVar65 * dVar64) + dVar60 * dVar73 + dVar62 +
                           (double)param_1[0x4d];
              dVar59 = (dVar74 * dVar4 - dVar74 * dVar4) + dVar60 * dVar74 + dVar72 +
                       (double)param_1[0x4f];
              local_358._8_8_ =
                   local_308[2] * dVar56 * -1.0 +
                   ((dVar44 * local_308[0] * -1.0 + local_308[3] * dVar60) - local_308[1] * dVar52);
              local_358._0_8_ =
                   local_308[3] * dVar58 * 1.0 +
                   ((dVar39 * local_308[1] * 1.0 + local_308[2] * dVar57) - local_308[0] * dVar53);
              local_338._8_4_ = SUB84(dVar59,0);
              local_338._0_8_ =
                   (dVar73 * dVar64 - dVar66 * dVar67) + dVar57 * dVar65 + dVar70 +
                   (double)param_1[0x4e];
              local_338._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
              local_328 = local_2c8 * dVar61;
              dStack_320 = dStack_2c0 * dVar63;
              local_318 = local_2b8 * dVar51;
              dStack_310 = dStack_2b0 * dVar38;
            }
            else {
              dVar60 = (double)param_1[0x48];
              dVar39 = (double)param_1[0x49];
              dVar44 = (double)param_1[0x4a];
              dVar52 = dVar39 + dVar39;
              dVar53 = dVar44 + dVar44;
              dVar59 = dVar60 * (dVar60 + dVar60);
              local_1a8 = (1.0 - (dVar59 + dVar39 * dVar52)) * dVar51;
              dVar57 = (double)param_1[0x4b];
              dVar56 = dVar53 * dVar57;
              dVar58 = (dVar60 + dVar60) * (double)param_1[0x4b];
              dVar57 = dVar52 * dVar57;
              local_1b8 = (dVar57 + (double)param_1[0x48] * dVar53) * dVar51;
              local_418 = dVar51 * local_2b8;
              dStack_410 = dVar38 * dStack_2b0;
              dVar38 = (1.0 - (dVar44 * dVar53 + dVar59)) * dVar63;
              local_1c8 = (dVar53 * dVar39 + dVar58) * dVar63;
              dStack_1b0 = (dVar53 * dVar39 - dVar58) * dVar51;
              local_1e8 = ((double)param_1[0x48] * dVar53 - dVar57) * dVar61;
              local_1f8._8_8_ = (dVar52 * dVar60 + dVar56) * dVar61;
              local_1f8._0_8_ = (1.0 - (dVar44 * dVar53 + dVar39 * dVar52)) * dVar61;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar38,0);
              local_1d8._0_8_ = (dVar52 * dVar60 - dVar56) * dVar63;
              local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_1[0x4c];
              lStack_190 = param_1[0x4d];
              local_188 = param_1[0x4e];
              uStack_180 = 0x3ff0000000000000;
              dVar51 = local_308[1] + local_308[1];
              dVar38 = local_308[2] + local_308[2];
              dVar60 = local_308[0] * (local_308[0] + local_308[0]);
              local_228 = (1.0 - (dVar60 + local_308[1] * dVar51)) * local_2b8;
              dVar57 = (local_308[0] + local_308[0]) * local_308[3];
              local_238 = (dVar51 * local_308[3] + local_308[0] * dVar38) * local_2b8;
              dStack_230 = (dVar38 * local_308[1] - dVar57) * local_2b8;
              local_428._8_8_ = dVar63 * dStack_2c0;
              local_428._0_8_ = dVar61 * local_2c8;
              local_278 = (1.0 - (local_308[2] * dVar38 + local_308[1] * dVar51)) * local_2c8;
              dStack_270 = (dVar51 * local_308[0] + dVar38 * local_308[3]) * local_2c8;
              local_248 = (dVar38 * local_308[1] + dVar57) * dStack_2c0;
              local_268 = (local_308[0] * dVar38 - dVar51 * local_308[3]) * local_2c8;
              uStack_260 = 0;
              local_258._8_8_ = (1.0 - (local_308[2] * dVar38 + dVar60)) * dStack_2c0;
              local_258._0_8_ = (dVar51 * local_308[0] - dVar38 * local_308[3]) * dStack_2c0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = local_2e8;
              dStack_210 = dStack_2e0;
              local_208 = local_2d8;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,local_1f8);
              dVar57 = dStack_410;
              dVar38 = local_418;
              dVar51 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
              dVar63 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
              dVar61 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar31 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
              dVar51 = (double)(~uVar31 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar51)) & uVar31);
              uVar31 = -(ulonglong)(0.0 <= dVar63 + -9.99999993922529e-09);
              dVar63 = (double)(~uVar31 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar63)) & uVar31);
              uVar31 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
              dVar61 = (double)(~uVar31 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar61)) & uVar31);
              uVar17 = local_428._0_8_;
              uVar14 = local_428._8_8_;
              auVar36._8_8_ = -(ulonglong)(0.0 <= (double)local_428._8_8_);
              auVar36._0_8_ = -(ulonglong)(0.0 <= (double)local_428._0_8_);
              auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
              dVar60 = (double)(~-(ulonglong)(0.0 <= local_418) & 0xbff0000000000000 |
                               (ulonglong)
                               ((uint)(-(ulonglong)(0.0 <= local_418) >> 0x20) & 0x3ff00000) << 0x20
                               );
              dVar39 = auVar40._0_8_;
              local_178 = local_178 * dVar51 * dVar39;
              local_170 = local_170 * dVar51 * dVar39;
              local_168 = dVar51 * local_168 * dVar39;
              dVar51 = auVar40._8_8_;
              local_148 = dVar63 * local_148 * dVar51;
              local_150 = local_150 * dVar63 * dVar51;
              local_158 = dVar51 * local_158 * dVar63;
              local_128 = dVar61 * local_128 * dVar60;
              local_130 = local_130 * dVar61 * dVar60;
              local_138 = dVar60 * local_138 * dVar61;
              FUN_14481fd10(&local_298,&local_178);
              dVar61 = local_288 * local_288 + local_298 * local_298;
              dVar51 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar50._0_8_ = dVar61 + dVar51;
              auVar50._8_8_ = dVar61 + dVar51;
              auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              auVar40 = sqrtpd(auVar50,auVar50);
              auVar40 = divpd(_DAT_149934d80,auVar40);
              auVar55._0_8_ = auVar40._0_8_ * local_288;
              auVar55._8_8_ = auVar40._8_8_ * dStack_280;
              local_368[0] = (double)((ulonglong)(local_298 * auVar40._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
              local_368[1] = (double)((ulonglong)(dStack_290 * auVar40._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
              local_358 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar37);
              local_328 = (double)uVar17;
              dStack_320 = (double)uVar14;
              local_318 = dVar38;
              dStack_310 = dVar57;
              local_348 = local_118;
              dStack_340 = dStack_110;
              local_338._8_8_ = 0;
              local_338._0_8_ = local_108;
            }
          }
          else {
            pdVar21 = pdVar27;
            pdVar26 = local_368;
            for (lVar23 = 0xc; param_4 = local_431, lVar23 != 0; lVar23 = lVar23 + -1) {
              *pdVar26 = *pdVar21;
              pdVar21 = pdVar21 + 1;
              pdVar26 = pdVar26 + 1;
            }
          }
          FUN_14086e618(param_1,uVar30 & 0xffffffff,local_368,param_6);
        }
        uVar30 = uVar30 + 1;
        pdVar27 = pdVar27 + 0xc;
        iVar29 = iVar29 + 4;
        lVar28 = lVar28 + 0x80;
        lVar25 = lVar25 + -0x60;
      } while (lVar25 != 0);
    }
    if ((char)local_42c != '\0') {
      if ((char)local_430 != '\0') goto LAB_14353c2bc;
      (**(code **)(*param_1 + 0xbc8))(param_1);
    }
  }
  else {
    uVar17 = (**(code **)(*param_1 + 0xbd0))(param_1);
    local_2a8 = 0;
    uStack_2a0 = 0;
    if ((char)uVar17 == '\0') {
      local_42c = (undefined4)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
      local_430 = 0;
      goto LAB_14353a4ef;
    }
    iVar29 = *(int *)(param_3 + 1);
    if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar29 * 2);
    }
    if (iVar29 != 0) {
      uVar17 = FUN_1401a2688(&local_2a8);
      uVar18 = (undefined7)((ulonglong)uVar17 >> 8);
      local_430 = (undefined4)CONCAT71(uVar18,1);
      local_42c = (undefined4)CONCAT71(uVar18,1);
      goto LAB_14353a4ef;
    }
LAB_14353c2bc:
    local_370 = (int)uStack_2a0;
    local_378 = local_2a8;
    (**(code **)(*param_1 + 0xbc0))(param_1);
  }
  if (param_5 != '\0') {
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar19 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar19 & 1) != 0) {
        if ((param_1[0x16] != 0) || (lVar25 = FUN_1448abda6(param_1), lVar25 != 0))
        goto LAB_14353c39a;
        bVar19 = *(byte *)((longlong)param_1 + 0x9d);
      }
      *(byte *)((longlong)param_1 + 0x9d) = bVar19 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
    }
  }
LAB_14353c39a:
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  uVar17 = 1;
LAB_14353a41f:
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 14353c3d6 FUN_14353c3d6 body=605 status=ok
// SIG undefined FUN_14353c3d6(void)

void FUN_14353c3d6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + 8) & 0x30) == 0) {
    iVar2 = *(int *)(param_1 + 0x7a4);
    while (iVar2 == 0) {
      iVar2 = rand();
      *(int *)(param_1 + 0x7a4) = iVar2;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_28;
      local_28 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar1 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
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
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      iVar2 = *(int *)(lVar1 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
           (lVar4 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar1 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(lVar4 + 0xc0);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) goto LAB_14353c4ba;
        lVar3 = FUN_1403358e4(lVar3);
        if ((lVar3 != lVar4 && lVar3 != 0) && (*(char *)(param_1 + 0x95d) != '\x02')) {
          *(byte *)(param_1 + 0x95e) = *(byte *)(param_1 + 0x95e) | 2;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
LAB_14353c4ba:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14353c646 FUN_14353c646 body=357 status=ok
// SIG undefined FUN_14353c646(void)

byte FUN_14353c646(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cac1d70 == 0) {
    local_50 = &local_30;
    local_30 = FUN_144b223ce;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1432411d6;
    local_58 = &LAB_147878f54;
    local_60 = &LAB_1417ad3ba;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0xb10;
    FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
  }
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cac1d70 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8)
      != DAT_14cac1d70 + 0x30)) {
    lVar2 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
    bVar1 = (byte)param_2;
    if (lVar2 != 0) {
      local_88 = local_88 & 0xffffff00;
      bVar1 = FUN_147c48234(lVar2,param_3,param_4,param_1 + 0x838);
    }
    bVar1 = lVar2 != 0 & bVar1;
  }
  else {
    bVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14353c7ac FUN_14353c7ac body=69 status=ok
// SIG undefined FUN_14353c7ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353c7ac(void)

{
  _DAT_14cae4fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353c7ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae4fe8,1);
  return;
}



// FUNCTION 14353c7f1 FUN_14353c7f1 body=69 status=ok
// SIG undefined FUN_14353c7f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353c7f1(void)

{
  _DAT_14cae4ff8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353c833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae5000,1);
  return;
}



// FUNCTION 14353c836 FUN_14353c836 body=69 status=ok
// SIG undefined FUN_14353c836(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353c836(void)

{
  _DAT_14cae5010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae5018,1);
  return;
}



// FUNCTION 14353c87b FUN_14353c87b body=69 status=ok
// SIG undefined FUN_14353c87b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353c87b(void)

{
  _DAT_14cae5028 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353c8bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae5030,1);
  return;
}



// FUNCTION 14353c8c0 FUN_14353c8c0 body=5719 status=ok
// SIG undefined FUN_14353c8c0(void)

void FUN_14353c8c0(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  void *_Src;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  uint uVar29;
  float *pfVar30;
  longlong *plVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  int iVar44;
  int iVar45;
  longlong *plVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [16];
  ulonglong local_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  float *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined8 uStack_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar29 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
  puVar1 = (undefined8 *)(param_1 + 8);
  local_1c0 = (ulonglong)(uVar29 >> 0x10 ^ uVar29) | 0x100000000;
  local_1b0 = (undefined8 *)(param_1 + 0x38);
  pfVar2 = (float *)(param_1 + 0x50);
  local_1a0 = param_1 + 0x78;
  local_198 = param_1 + 0x88;
  local_190 = param_1 + 0x98;
  local_188 = param_1 + 0xa8;
  local_180 = param_1 + 0xb8;
  local_178 = param_1 + 200;
  plVar4 = (longlong *)(param_1 + 0xd8);
  local_168 = param_1 + 0xe8;
  local_160 = param_1 + 0xf8;
  local_158 = param_1 + 0x118;
  local_150 = param_1 + 0x11c;
  local_148 = param_1 + 0x120;
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0xf0);
  local_1b8 = puVar1;
  local_1a8 = pfVar2;
  local_170 = plVar4;
  if ((*(char *)(param_1 + 0x1a9) == '\x01') && (*(int *)(param_2 + 0x1b4) != 0)) {
    uVar11 = *(undefined8 *)(param_2 + 0x130);
    uVar27 = *(undefined8 *)(param_2 + 0x138);
    uVar15 = *(undefined4 *)(param_2 + 0x140);
    uVar16 = *(undefined4 *)(param_2 + 0x144);
    uVar17 = *(undefined4 *)(param_2 + 0x148);
    uVar18 = *(undefined4 *)(param_2 + 0x14c);
    uVar19 = *(undefined4 *)(param_2 + 0x154);
    uVar20 = *(undefined4 *)(param_2 + 0x158);
    uVar21 = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x2c) = uVar19;
    *(undefined4 *)(param_1 + 0x30) = uVar20;
    *(undefined4 *)(param_1 + 0x34) = uVar21;
    *(undefined4 *)(param_1 + 0x18) = uVar15;
    *(undefined4 *)(param_1 + 0x1c) = uVar16;
    *(undefined4 *)(param_1 + 0x20) = uVar17;
    *(undefined4 *)(param_1 + 0x24) = uVar18;
    *puVar1 = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar27;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x170);
    uVar11 = *(undefined8 *)(param_2 + 0x168);
    *local_1b0 = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x40) = uVar11;
    FUN_14026f2d2(pfVar2,param_2 + 0xf8);
    FUN_14026f33c(&local_134,puVar1,*(undefined4 *)(param_2 + 0x1ac));
    pfVar30 = *(float **)(param_1 + 0x68);
    if (*(float **)(param_1 + 0x68) == (float *)0x0) {
      pfVar30 = pfVar2;
    }
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      pfVar2 = pfVar30 + (longlong)*(int *)(param_1 + 0x70) * 6;
      do {
        *pfVar30 = *pfVar30 - local_134;
        pfVar30[1] = pfVar30[1] - local_130;
        pfVar30[2] = pfVar30[2] - local_12c;
        pfVar30[3] = pfVar30[3] + local_134;
        pfVar30[4] = pfVar30[4] + local_130;
        pfVar30[5] = pfVar30[5] + local_12c;
        pfVar30 = pfVar30 + 6;
      } while (pfVar30 != pfVar2);
    }
    lVar43 = *(longlong *)(param_1 + 0x1b0);
    if (lVar43 != 0) {
      if (*(int *)(lVar43 + 0x18) == 0) {
        cVar9 = *(char *)(param_2 + 0x90);
        cVar10 = *(char *)(param_2 + 0x91);
        iVar44 = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x80);
        bVar47 = iVar44 == *(int *)(param_2 + 0x1b0);
        if (cVar9 != '\0' || cVar10 != '\0') {
          iVar44 = *(int *)(param_2 + 0x1b0);
        }
        FUN_14026f28a(plVar4);
        if (iVar44 != 0) {
          plVar46 = (longlong *)(param_2 + 0x40);
          fVar48 = SQRT(*(float *)(param_2 + 0x138) * *(float *)(param_2 + 0x138) +
                        *(float *)(param_2 + 0x130) * *(float *)(param_2 + 0x130) +
                        *(float *)(param_2 + 0x134) * *(float *)(param_2 + 0x134));
          fVar50 = SQRT(*(float *)(param_2 + 0x144) * *(float *)(param_2 + 0x144) +
                        *(float *)(param_2 + 0x13c) * *(float *)(param_2 + 0x13c) +
                        *(float *)(param_2 + 0x140) * *(float *)(param_2 + 0x140));
          if (((ABS(fVar48 - fVar50) <= 1e-08) &&
              (fVar51 = SQRT(*(float *)(param_2 + 0x150) * *(float *)(param_2 + 0x150) +
                             *(float *)(param_2 + 0x148) * *(float *)(param_2 + 0x148) +
                             *(float *)(param_2 + 0x14c) * *(float *)(param_2 + 0x14c)),
              ABS(fVar48 - fVar51) <= 1e-08)) && (ABS(fVar50 - fVar51) <= 1e-08)) {
            auVar52 = insertps(*(undefined1 (*) [16])(param_2 + 0x154),
                               *(undefined4 *)(param_2 + 0x158),0x10);
            if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
              uVar29 = *(uint *)(param_2 + 0x48);
              uVar33 = (ulonglong)uVar29;
              iVar14 = *(int *)(param_2 + 0x78);
              if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
                iVar14 = *(int *)(param_2 + 0x70);
              }
              iVar44 = iVar14 + 7;
              if (-1 < iVar14) {
                iVar44 = iVar14;
              }
              uVar38 = iVar44 >> 3;
              uVar34 = (ulonglong)uVar38;
              iVar45 = iVar14 % 8;
              iVar44 = 0;
              uVar35 = 0;
              if ((int)uVar38 < (int)uVar29 && -8 < iVar14) {
                uVar35 = *(uint *)(*plVar46 + (longlong)(int)uVar38 * 4) & 0x33333333;
              }
              uVar35 = uVar35 >> ((char)iVar45 * '\x04' & 0x1fU);
              if ((int)uVar38 < (int)uVar29) {
                if (uVar35 == 0) {
                  uVar37 = (longlong)(int)uVar38;
                  do {
                    if ((longlong)(int)uVar29 - 1U == uVar37) {
                      iVar45 = 0;
                      param_3 = 0;
                      iVar44 = 0;
                      goto LAB_14353d93d;
                    }
                    uVar34 = uVar37 + 1;
                    uVar35 = *(uint *)(*plVar46 + 4 + uVar37 * 4) & 0x33333333;
                    uVar37 = uVar34;
                  } while (uVar35 == 0);
                  iVar45 = 0;
                }
                uVar29 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar35 = uVar35 >> ((byte)uVar29 & 0x1c);
                iVar45 = (uVar29 >> 2) + iVar45;
              }
              param_3 = (ulonglong)uVar35;
              uVar33 = uVar34 & 0xffffffff;
            }
            else {
              iVar45 = 0;
              uVar33 = 0;
              plVar46 = (longlong *)0x0;
            }
LAB_14353d93d:
            fVar48 = *(float *)(param_2 + 0x130);
            fVar50 = *(float *)(param_2 + 0x134);
            fVar51 = *(float *)(param_2 + 0x138);
            fVar22 = *(float *)(param_2 + 0x13c);
            fVar23 = *(float *)(param_2 + 0x13c);
            fVar24 = *(float *)(param_2 + 0x140);
            fVar6 = *(float *)(param_2 + 0x144);
            fVar7 = *(float *)(param_2 + 0x148);
            auVar52 = insertps(auVar52,*(undefined4 *)(param_2 + 0x15c),0x20);
            fVar49 = *(float *)(param_2 + 0x148);
            fVar25 = *(float *)(param_2 + 0x14c);
            fVar55 = *(float *)(param_2 + 0x150);
            fVar56 = *(float *)(param_2 + 0x154);
            lVar43 = 0;
LAB_14353d962:
            do {
              iVar14 = (int)uVar33;
              iVar32 = iVar45 + iVar14 * 8;
              do {
                lVar40 = lVar43 * 0x30 + 0x2c;
                do {
                  if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
                    iVar41 = *(int *)((longlong)plVar46 + 0x3c) + 1;
                    if ((int)plVar46[6] < iVar41) {
                      iVar41 = (int)plVar46[6];
                    }
                    if (iVar41 <= iVar32) goto LAB_14353db2d;
                  }
                  else if (iVar44 <= lVar43) goto LAB_14353db2d;
                  iVar41 = iVar32;
                  if ((cVar9 != '\0' || cVar10 != '\0') || bVar47) {
                    iVar41 = (int)lVar43;
                  }
                  lVar42 = (longlong)iVar41 * 0x30;
                  lVar36 = *(longlong *)(param_2 + 0xb0);
                  pfVar2 = (float *)(lVar36 + -0x2c + lVar40);
                  fVar57 = *pfVar2;
                  fVar8 = pfVar2[1];
                  fVar53 = pfVar2[2];
                  fStack_120 = fVar53 * fVar55 + fVar8 * fVar6 + fVar57 * fVar51;
                  local_128 = (void *)CONCAT44(fVar53 * fVar25 + fVar8 * fVar24 + fVar57 * fVar50,
                                               fVar53 * fVar49 + fVar8 * fVar23 + fVar57 * fVar48);
                  pfVar2 = (float *)(lVar36 + -0x20 + lVar40);
                  fVar57 = *pfVar2;
                  fVar8 = pfVar2[1];
                  fVar53 = pfVar2[2];
                  fStack_11c = fVar53 * fVar49 + fVar8 * fVar23 + fVar57 * fVar48;
                  local_118 = fVar53 * fVar25 + fVar8 * fVar24 + fVar57 * fVar50;
                  fStack_114 = fVar53 * fVar55 + fVar8 * fVar6 + fVar57 * fVar51;
                  pfVar2 = (float *)(lVar36 + -0x14 + lVar40);
                  fVar57 = *pfVar2;
                  fVar8 = pfVar2[1];
                  fVar53 = pfVar2[2];
                  fVar26 = pfVar2[3];
                  fStack_110 = fVar53 * fVar49 + fVar8 * fVar23 + fVar57 * fVar48;
                  fStack_10c = fVar53 * fVar25 + fVar8 * fVar24 + fVar57 * fVar50;
                  fStack_108 = fVar53 * fVar55 + fVar8 * fVar6 + fVar57 * fVar51;
                  fVar57 = *(float *)(lVar36 + -4 + lVar40);
                  fVar8 = *(float *)(lVar36 + lVar40);
                  fVar53 = fVar8 * fVar49 + fVar57 * fVar23 + fVar26 * fVar48 + auVar52._0_4_;
                  fVar54 = fVar8 * fVar25 + fVar57 * fVar24 + fVar26 * fVar50 + auVar52._4_4_;
                  uStack_104 = CONCAT44(fVar54,fVar53);
                  lVar36 = *plVar4;
                  puVar5 = (undefined8 *)(lVar36 + 0x1c + lVar42);
                  *puVar5 = CONCAT44(fStack_108,fStack_10c);
                  puVar5[1] = uStack_104;
                  puVar5 = (undefined8 *)(lVar36 + 0x10 + lVar42);
                  *puVar5 = CONCAT44(fStack_114,local_118);
                  puVar5[1] = CONCAT44(fStack_10c,fStack_110);
                  *(undefined8 *)(lVar36 + lVar42) = local_128;
                  ((undefined8 *)(lVar36 + lVar42))[1] = CONCAT44(fStack_11c,fStack_120);
                  auVar12._4_4_ = fVar54;
                  auVar12._0_4_ = fVar53;
                  auVar12._8_4_ = fVar8 * fVar55 + fVar57 * fVar6 + fVar26 * fVar51 + auVar52._8_4_;
                  auVar12._12_4_ =
                       fVar8 * fVar56 + fVar57 * fVar7 + fVar26 * fVar22 + auVar52._12_4_;
                  uVar11 = extractps(auVar12,2);
                  *(undefined8 *)(lVar36 + 0x2c + lVar42) = uVar11;
                  lVar43 = lVar43 + 1;
                  lVar40 = lVar40 + 0x30;
                } while ((cVar9 != '\0' || cVar10 != '\0') || bVar47);
                uVar29 = *(uint *)(plVar46 + 1);
              } while ((int)uVar29 <= iVar14);
              uVar33 = (ulonglong)iVar14;
              uVar35 = (uint)param_3 & 0xfffffffc;
              if ((param_3 & 0xfffffffc) == 0) {
                uVar34 = uVar33;
                do {
                  if ((longlong)(int)uVar29 - 1U == uVar34) {
                    iVar45 = 0;
                    param_3 = 0;
                    uVar33 = (ulonglong)uVar29;
                    goto LAB_14353d962;
                  }
                  uVar33 = uVar34 + 1;
                  uVar35 = *(uint *)(*plVar46 + 4 + uVar34 * 4) & 0x33333333;
                  uVar34 = uVar33;
                } while (uVar35 == 0);
                iVar45 = 0;
              }
              uVar29 = 0;
              if (uVar35 != 0) {
                for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              iVar45 = (uVar29 >> 2) + iVar45;
              param_3 = (ulonglong)(uVar35 >> ((byte)uVar29 & 0x1c));
            } while( true );
          }
          auVar52 = insertps(*(undefined1 (*) [16])(param_2 + 0x154),
                             *(undefined4 *)(param_2 + 0x158),0x10);
          if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
            uVar29 = *(uint *)(param_2 + 0x48);
            uVar33 = (ulonglong)uVar29;
            iVar14 = *(int *)(param_2 + 0x78);
            if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
              iVar14 = *(int *)(param_2 + 0x70);
            }
            iVar44 = iVar14 + 7;
            if (-1 < iVar14) {
              iVar44 = iVar14;
            }
            uVar38 = iVar44 >> 3;
            uVar34 = (ulonglong)uVar38;
            iVar45 = iVar14 % 8;
            iVar44 = 0;
            uVar35 = 0;
            if ((int)uVar38 < (int)uVar29 && -8 < iVar14) {
              uVar35 = *(uint *)(*plVar46 + (longlong)(int)uVar38 * 4) & 0x33333333;
            }
            uVar35 = uVar35 >> ((char)iVar45 * '\x04' & 0x1fU);
            param_3 = (ulonglong)uVar35;
            if ((int)uVar38 < (int)uVar29) {
              if (uVar35 == 0) {
                uVar37 = (longlong)(int)uVar38;
                do {
                  if ((longlong)(int)uVar29 - 1U == uVar37) {
                    iVar44 = 0;
                    param_3 = 0;
                    goto LAB_14353ccb3;
                  }
                  uVar34 = uVar37 + 1;
                  uVar35 = *(uint *)(*plVar46 + 4 + uVar37 * 4) & 0x33333333;
                  uVar37 = uVar34;
                } while (uVar35 == 0);
                iVar45 = 0;
              }
              uVar29 = 0;
              if (uVar35 != 0) {
                for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              param_3 = (ulonglong)(uVar35 >> ((byte)uVar29 & 0x1c));
              iVar45 = (uVar29 >> 2) + iVar45;
              uVar33 = uVar34 & 0xffffffff;
            }
            else {
              uVar33 = (ulonglong)uVar38;
            }
          }
          else {
            plVar46 = (longlong *)0x0;
            uVar33 = 0;
LAB_14353ccb3:
            iVar45 = 0;
          }
          fVar48 = *(float *)(param_2 + 0x130);
          fVar50 = *(float *)(param_2 + 0x134);
          fVar51 = *(float *)(param_2 + 0x138);
          fVar22 = *(float *)(param_2 + 0x13c);
          fVar23 = *(float *)(param_2 + 0x140);
          fVar24 = *(float *)(param_2 + 0x144);
          local_1d8 = *(float *)(param_2 + 0x148);
          fStack_1d4 = *(float *)(param_2 + 0x14c);
          fStack_1d0 = *(float *)(param_2 + 0x150);
          uStack_1cc = *(undefined4 *)(param_2 + 0x154);
          local_1f8 = insertps(auVar52,*(undefined4 *)(param_2 + 0x15c),0x20);
          lVar43 = 0;
LAB_14353d08a:
          do {
            iVar14 = (int)uVar33;
            iVar32 = iVar45 + iVar14 * 8;
            do {
              lVar40 = lVar43 * 0x30 + 0x2c;
              do {
                if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
                  iVar41 = *(int *)((longlong)plVar46 + 0x3c) + 1;
                  if ((int)plVar46[6] < iVar41) {
                    iVar41 = (int)plVar46[6];
                  }
                  if (iVar41 <= iVar32) goto LAB_14353db2d;
                }
                else if (iVar44 <= lVar43) goto LAB_14353db2d;
                iVar41 = iVar32;
                if ((cVar9 != '\0' || cVar10 != '\0') || bVar47) {
                  iVar41 = (int)lVar43;
                }
                lVar36 = *(longlong *)(param_2 + 0xb0);
                pfVar2 = (float *)(lVar36 + -0x2c + lVar40);
                fVar6 = *pfVar2;
                fVar7 = pfVar2[1];
                fVar49 = pfVar2[2];
                fVar55 = fVar49 * local_1d8 + fVar7 * fVar22 + fVar6 * fVar48;
                fVar56 = fVar49 * fStack_1d4 + fVar7 * fVar23 + fVar6 * fVar50;
                fStack_120 = fVar49 * fStack_1d0 + fVar7 * fVar24 + fVar6 * fVar51;
                local_128 = (void *)CONCAT44(fVar56,fVar55);
                pfVar2 = (float *)(lVar36 + -0x20 + lVar40);
                fVar6 = *pfVar2;
                fVar7 = pfVar2[1];
                fVar49 = pfVar2[2];
                fStack_11c = fVar49 * local_1d8 + fVar7 * fVar22 + fVar6 * fVar48;
                local_118 = fVar49 * fStack_1d4 + fVar7 * fVar23 + fVar6 * fVar50;
                fStack_114 = fVar49 * fStack_1d0 + fVar7 * fVar24 + fVar6 * fVar51;
                pfVar2 = (float *)(lVar36 + -0x14 + lVar40);
                fVar6 = *pfVar2;
                fVar7 = pfVar2[1];
                fVar49 = pfVar2[2];
                fVar25 = pfVar2[3];
                fStack_110 = fVar49 * local_1d8 + fVar7 * fVar22 + fVar6 * fVar48;
                fStack_10c = fVar49 * fStack_1d4 + fVar7 * fVar23 + fVar6 * fVar50;
                fStack_108 = fVar49 * fStack_1d0 + fVar7 * fVar24 + fVar6 * fVar51;
                fVar6 = *(float *)(lVar36 + -4 + lVar40);
                fVar7 = *(float *)(lVar36 + lVar40);
                uStack_104 = CONCAT44(fVar7 * fStack_1d4 +
                                      fVar6 * fVar23 + fVar25 * fVar50 + local_1f8._4_4_,
                                      fVar7 * local_1d8 +
                                      fVar6 * fVar22 + fVar25 * fVar48 + local_1f8._0_4_);
                if (((((fVar55 != 0.0) || (NAN(fVar55))) ||
                     ((fVar56 != 0.0 || ((NAN(fVar56) || (fStack_120 != 0.0)))))) ||
                    (NAN(fStack_120))) &&
                   (((((fStack_11c != 0.0 || (NAN(fStack_11c))) || (local_118 != 0.0)) ||
                     ((NAN(local_118) || (fStack_114 != 0.0)))) || (NAN(fStack_114))))) {
                  fVar49 = fStack_120 * fStack_120 + fVar55 * fVar55 + fVar56 * fVar56;
                  fVar57 = (fStack_114 * fStack_120 + fStack_11c * fVar55 + fVar56 * local_118) /
                           fVar49;
                  fStack_11c = fStack_11c - fVar57 * fVar55;
                  local_118 = local_118 - fVar56 * fVar57;
                  fStack_114 = fStack_114 - fStack_120 * fVar57;
                  fVar49 = (fStack_108 * fStack_120 + fStack_110 * fVar55 + fVar56 * fStack_10c) /
                           fVar49;
                  fStack_110 = fStack_110 - fVar49 * fVar55;
                  fStack_10c = fStack_10c - fVar56 * fVar49;
                  fStack_108 = fStack_108 - fStack_120 * fVar49;
                  fVar49 = (fStack_108 * fStack_114 +
                           fStack_110 * fStack_11c + local_118 * fStack_10c) /
                           (fStack_114 * fStack_114 +
                           fStack_11c * fStack_11c + local_118 * local_118);
                  fStack_110 = fStack_110 - fVar49 * fStack_11c;
                  fStack_10c = fStack_10c - local_118 * fVar49;
                  fStack_108 = fStack_108 - fStack_114 * fVar49;
                }
                lVar36 = *plVar4;
                lVar42 = (longlong)iVar41 * 0x30;
                puVar5 = (undefined8 *)(lVar36 + 0x1c + lVar42);
                *puVar5 = CONCAT44(fStack_108,fStack_10c);
                puVar5[1] = uStack_104;
                puVar5 = (undefined8 *)(lVar36 + 0x10 + lVar42);
                *puVar5 = CONCAT44(fStack_114,local_118);
                puVar5[1] = CONCAT44(fStack_10c,fStack_110);
                *(undefined8 *)(lVar36 + lVar42) = local_128;
                ((undefined8 *)(lVar36 + lVar42))[1] = CONCAT44(fStack_11c,fStack_120);
                *(float *)(lVar36 + 0x2c + lVar42) =
                     fVar7 * fStack_1d0 + fVar6 * fVar24 + fVar25 * fVar51 + local_1f8._8_4_;
                lVar43 = lVar43 + 1;
                lVar40 = lVar40 + 0x30;
              } while ((cVar9 != '\0' || cVar10 != '\0') || bVar47);
              uVar29 = *(uint *)(plVar46 + 1);
            } while ((int)uVar29 <= iVar14);
            uVar33 = (ulonglong)iVar14;
            uVar35 = (uint)param_3 & 0xfffffffc;
            if ((param_3 & 0xfffffffc) == 0) {
              uVar34 = uVar33;
              do {
                if ((longlong)(int)uVar29 - 1U == uVar34) {
                  param_3 = 0;
                  uVar33 = (ulonglong)uVar29;
                  iVar45 = 0;
                  goto LAB_14353d08a;
                }
                uVar33 = uVar34 + 1;
                uVar35 = *(uint *)(*plVar46 + 4 + uVar34 * 4) & 0x33333333;
                uVar34 = uVar33;
              } while (uVar35 == 0);
              iVar45 = 0;
            }
            uVar29 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
              }
            }
            iVar45 = (uVar29 >> 2) + iVar45;
            param_3 = (ulonglong)(uVar35 >> ((byte)uVar29 & 0x1c));
          } while( true );
        }
LAB_14353db2d:
        FUN_14026f552(param_2,&local_1c0);
      }
      else {
        plVar46 = (longlong *)(lVar43 + 0x10);
        cVar9 = *(char *)(param_2 + 0x90);
        cVar10 = *(char *)(param_2 + 0x91);
        iVar44 = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x80);
        bVar47 = iVar44 == *(int *)(param_2 + 0x1b0);
        if (cVar9 != '\0' || cVar10 != '\0') {
          iVar44 = *(int *)(param_2 + 0x1b0);
        }
        local_140 = plVar46;
        FUN_14026f28a(plVar4);
        if (iVar44 != 0) {
          plVar31 = (longlong *)(param_2 + 0x40);
          fVar48 = SQRT(*(float *)(param_2 + 0x138) * *(float *)(param_2 + 0x138) +
                        *(float *)(param_2 + 0x130) * *(float *)(param_2 + 0x130) +
                        *(float *)(param_2 + 0x134) * *(float *)(param_2 + 0x134));
          fVar50 = SQRT(*(float *)(param_2 + 0x144) * *(float *)(param_2 + 0x144) +
                        *(float *)(param_2 + 0x13c) * *(float *)(param_2 + 0x13c) +
                        *(float *)(param_2 + 0x140) * *(float *)(param_2 + 0x140));
          if (((ABS(fVar48 - fVar50) <= 1e-08) &&
              (fVar51 = SQRT(*(float *)(param_2 + 0x150) * *(float *)(param_2 + 0x150) +
                             *(float *)(param_2 + 0x148) * *(float *)(param_2 + 0x148) +
                             *(float *)(param_2 + 0x14c) * *(float *)(param_2 + 0x14c)),
              ABS(fVar48 - fVar51) <= 1e-08)) && (ABS(fVar50 - fVar51) <= 1e-08)) {
            auVar52 = insertps(*(undefined1 (*) [16])(param_2 + 0x154),
                               *(undefined4 *)(param_2 + 0x158),0x10);
            if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
              uVar29 = *(uint *)(param_2 + 0x48);
              uVar33 = (ulonglong)uVar29;
              iVar14 = *(int *)(param_2 + 0x78);
              if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
                iVar14 = *(int *)(param_2 + 0x70);
              }
              iVar44 = iVar14 + 7;
              if (-1 < iVar14) {
                iVar44 = iVar14;
              }
              uVar39 = iVar44 >> 3;
              uVar34 = (ulonglong)uVar39;
              uVar35 = iVar14 % 8;
              iVar44 = 0;
              uVar38 = 0;
              if ((int)uVar39 < (int)uVar29 && -8 < iVar14) {
                uVar38 = *(uint *)(*plVar31 + (longlong)(int)uVar39 * 4) & 0x33333333;
              }
              uVar38 = uVar38 >> ((char)uVar35 * '\x04' & 0x1fU);
              if ((int)uVar39 < (int)uVar29) {
                if (uVar38 == 0) {
                  uVar37 = (longlong)(int)uVar39;
                  do {
                    if ((longlong)(int)uVar29 - 1U == uVar37) {
                      uVar37 = 0;
                      param_3 = 0;
                      iVar44 = 0;
                      goto LAB_14353dbfc;
                    }
                    uVar34 = uVar37 + 1;
                    uVar38 = *(uint *)(*plVar31 + 4 + uVar37 * 4) & 0x33333333;
                    uVar37 = uVar34;
                  } while (uVar38 == 0);
                  uVar35 = 0;
                }
                uVar29 = 0;
                if (uVar38 != 0) {
                  for (; (uVar38 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar38 = uVar38 >> ((byte)uVar29 & 0x1c);
                uVar35 = (uVar29 >> 2) + uVar35;
              }
              uVar37 = (ulonglong)uVar35;
              param_3 = (ulonglong)uVar38;
              uVar33 = uVar34 & 0xffffffff;
            }
            else {
              uVar37 = 0;
              uVar33 = 0;
              plVar31 = (longlong *)0x0;
            }
LAB_14353dbfc:
            fVar48 = *(float *)(param_2 + 0x130);
            fVar50 = *(float *)(param_2 + 0x134);
            fVar51 = *(float *)(param_2 + 0x138);
            fVar22 = *(float *)(param_2 + 0x13c);
            fVar23 = *(float *)(param_2 + 0x13c);
            fVar24 = *(float *)(param_2 + 0x140);
            fVar6 = *(float *)(param_2 + 0x144);
            fVar7 = *(float *)(param_2 + 0x148);
            auVar52 = insertps(auVar52,*(undefined4 *)(param_2 + 0x15c),0x20);
            fVar49 = *(float *)(param_2 + 0x148);
            fVar25 = *(float *)(param_2 + 0x14c);
            fVar55 = *(float *)(param_2 + 0x150);
            fVar56 = *(float *)(param_2 + 0x154);
            lVar43 = 0;
LAB_14353dc21:
            do {
              local_1f8._0_8_ = uVar37;
              iVar14 = (int)uVar33;
              iVar45 = (int)uVar37 + iVar14 * 8;
              do {
                if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
                  iVar32 = *(int *)((longlong)plVar31 + 0x3c) + 1;
                  if ((int)plVar31[6] < iVar32) {
                    iVar32 = (int)plVar31[6];
                  }
                  if (iVar32 <= iVar45) goto LAB_14353ddf5;
                }
                else if (iVar44 <= lVar43) goto LAB_14353ddf5;
                iVar32 = iVar45;
                if ((cVar9 != '\0' || cVar10 != '\0') || bVar47) {
                  iVar32 = (int)lVar43;
                }
                lVar36 = (longlong)*(int *)(*plVar46 + lVar43 * 4) * 0x30;
                lVar42 = (longlong)iVar32 * 0x30;
                lVar43 = lVar43 + 1;
                lVar40 = *(longlong *)(param_2 + 0xb0);
                pfVar2 = (float *)(lVar40 + lVar36);
                fVar57 = *pfVar2;
                fVar8 = pfVar2[1];
                fVar53 = pfVar2[2];
                fStack_120 = fVar53 * fVar55 + fVar8 * fVar6 + fVar57 * fVar51;
                local_128 = (void *)CONCAT44(fVar53 * fVar25 + fVar8 * fVar24 + fVar57 * fVar50,
                                             fVar53 * fVar49 + fVar8 * fVar23 + fVar57 * fVar48);
                pfVar2 = (float *)(lVar40 + 0xc + lVar36);
                fVar57 = *pfVar2;
                fVar8 = pfVar2[1];
                fVar53 = pfVar2[2];
                fStack_11c = fVar53 * fVar49 + fVar8 * fVar23 + fVar57 * fVar48;
                local_118 = fVar53 * fVar25 + fVar8 * fVar24 + fVar57 * fVar50;
                fStack_114 = fVar53 * fVar55 + fVar8 * fVar6 + fVar57 * fVar51;
                pfVar2 = (float *)(lVar40 + 0x18 + lVar36);
                fVar57 = *pfVar2;
                fVar8 = pfVar2[1];
                fVar53 = pfVar2[2];
                fVar26 = pfVar2[3];
                fStack_110 = fVar53 * fVar49 + fVar8 * fVar23 + fVar57 * fVar48;
                fStack_10c = fVar53 * fVar25 + fVar8 * fVar24 + fVar57 * fVar50;
                fStack_108 = fVar53 * fVar55 + fVar8 * fVar6 + fVar57 * fVar51;
                fVar57 = *(float *)(lVar40 + 0x28 + lVar36);
                fVar8 = *(float *)(lVar40 + 0x2c + lVar36);
                fVar53 = fVar8 * fVar49 + fVar57 * fVar23 + fVar26 * fVar48 + auVar52._0_4_;
                fVar54 = fVar8 * fVar25 + fVar57 * fVar24 + fVar26 * fVar50 + auVar52._4_4_;
                uStack_104 = CONCAT44(fVar54,fVar53);
                lVar40 = *plVar4;
                puVar5 = (undefined8 *)(lVar40 + 0x1c + lVar42);
                *puVar5 = CONCAT44(fStack_108,fStack_10c);
                puVar5[1] = uStack_104;
                puVar5 = (undefined8 *)(lVar40 + 0x10 + lVar42);
                *puVar5 = CONCAT44(fStack_114,local_118);
                puVar5[1] = CONCAT44(fStack_10c,fStack_110);
                *(undefined8 *)(lVar40 + lVar42) = local_128;
                ((undefined8 *)(lVar40 + lVar42))[1] = CONCAT44(fStack_11c,fStack_120);
                auVar13._4_4_ = fVar54;
                auVar13._0_4_ = fVar53;
                auVar13._8_4_ = fVar8 * fVar55 + fVar57 * fVar6 + fVar26 * fVar51 + auVar52._8_4_;
                auVar13._12_4_ = fVar8 * fVar56 + fVar57 * fVar7 + fVar26 * fVar22 + auVar52._12_4_;
                uVar11 = extractps(auVar13,2);
                *(undefined8 *)(lVar40 + 0x2c + lVar42) = uVar11;
              } while (((cVar9 != '\0' || cVar10 != '\0') || bVar47) ||
                      (uVar29 = *(uint *)(plVar31 + 1), (int)uVar29 <= iVar14));
              uVar33 = (ulonglong)iVar14;
              uVar35 = (uint)param_3 & 0xfffffffc;
              if ((param_3 & 0xfffffffc) == 0) {
                uVar34 = uVar33;
                do {
                  if ((longlong)(int)uVar29 - 1U == uVar34) {
                    param_3 = 0;
                    uVar33 = (ulonglong)uVar29;
                    uVar37 = 0;
                    goto LAB_14353dc21;
                  }
                  uVar33 = uVar34 + 1;
                  uVar35 = *(uint *)(*plVar31 + 4 + uVar34 * 4) & 0x33333333;
                  uVar34 = uVar33;
                } while (uVar35 == 0);
                auVar28._8_8_ = 0;
                auVar28._0_8_ = local_1f8._8_8_;
                local_1f8 = auVar28 << 0x40;
              }
              uVar29 = 0;
              if (uVar35 != 0) {
                for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              uVar37 = (ulonglong)((uVar29 >> 2) + local_1f8._0_4_);
              param_3 = (ulonglong)(uVar35 >> ((byte)uVar29 & 0x1c));
            } while( true );
          }
          auVar52 = insertps(*(undefined1 (*) [16])(param_2 + 0x154),
                             *(undefined4 *)(param_2 + 0x158),0x10);
          if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
            uVar29 = *(uint *)(param_2 + 0x48);
            uVar33 = (ulonglong)uVar29;
            iVar14 = *(int *)(param_2 + 0x78);
            if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
              iVar14 = *(int *)(param_2 + 0x70);
            }
            iVar44 = iVar14 + 7;
            if (-1 < iVar14) {
              iVar44 = iVar14;
            }
            uVar39 = iVar44 >> 3;
            uVar34 = (ulonglong)uVar39;
            uVar38 = iVar14 % 8;
            local_1e0 = (ulonglong)uVar38;
            iVar44 = 0;
            uVar35 = 0;
            if ((int)uVar39 < (int)uVar29 && -8 < iVar14) {
              uVar35 = *(uint *)(*plVar31 + (longlong)(int)uVar39 * 4) & 0x33333333;
            }
            uVar35 = uVar35 >> ((char)uVar38 * '\x04' & 0x1fU);
            param_3 = (ulonglong)uVar35;
            if ((int)uVar39 < (int)uVar29) {
              if (uVar35 == 0) {
                uVar37 = (longlong)(int)uVar39;
                do {
                  if ((longlong)(int)uVar29 - 1U == uVar37) {
                    iVar44 = 0;
                    param_3 = 0;
                    goto LAB_14353cec0;
                  }
                  uVar34 = uVar37 + 1;
                  uVar35 = *(uint *)(*plVar31 + 4 + uVar37 * 4) & 0x33333333;
                  uVar37 = uVar34;
                } while (uVar35 == 0);
                uVar38 = 0;
              }
              uVar29 = 0;
              if (uVar35 != 0) {
                for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              param_3 = (ulonglong)(uVar35 >> ((byte)uVar29 & 0x1c));
              local_1e0 = (ulonglong)((uVar29 >> 2) + uVar38);
              uVar33 = uVar34 & 0xffffffff;
            }
            else {
              uVar33 = (ulonglong)uVar39;
            }
          }
          else {
            plVar31 = (longlong *)0x0;
            uVar33 = 0;
LAB_14353cec0:
            local_1e0 = 0;
          }
          fVar48 = *(float *)(param_2 + 0x130);
          fVar50 = *(float *)(param_2 + 0x134);
          fVar51 = *(float *)(param_2 + 0x138);
          fVar22 = *(float *)(param_2 + 0x13c);
          fVar23 = *(float *)(param_2 + 0x140);
          fVar24 = *(float *)(param_2 + 0x144);
          local_1d8 = *(float *)(param_2 + 0x148);
          fStack_1d4 = *(float *)(param_2 + 0x14c);
          fStack_1d0 = *(float *)(param_2 + 0x150);
          uStack_1cc = *(undefined4 *)(param_2 + 0x154);
          local_1f8 = insertps(auVar52,*(undefined4 *)(param_2 + 0x15c),0x20);
          lVar43 = 0;
LAB_14353d47b:
          do {
            iVar14 = (int)uVar33;
            iVar45 = (int)local_1e0 + iVar14 * 8;
            do {
              if ((cVar9 == '\0' && cVar10 == '\0') && !bVar47) {
                iVar32 = *(int *)((longlong)plVar31 + 0x3c) + 1;
                if ((int)plVar31[6] < iVar32) {
                  iVar32 = (int)plVar31[6];
                }
                if (iVar32 <= iVar45) goto LAB_14353ddf5;
              }
              else if (iVar44 <= lVar43) goto LAB_14353ddf5;
              iVar32 = iVar45;
              if ((cVar9 != '\0' || cVar10 != '\0') || bVar47) {
                iVar32 = (int)lVar43;
              }
              lVar40 = *(longlong *)(param_2 + 0xb0);
              lVar36 = (longlong)*(int *)(*plVar46 + lVar43 * 4) * 0x30;
              pfVar2 = (float *)(lVar40 + lVar36);
              fVar6 = *pfVar2;
              fVar7 = pfVar2[1];
              fVar49 = pfVar2[2];
              fVar55 = fVar49 * local_1d8 + fVar7 * fVar22 + fVar6 * fVar48;
              fVar56 = fVar49 * fStack_1d4 + fVar7 * fVar23 + fVar6 * fVar50;
              fStack_120 = fVar49 * fStack_1d0 + fVar7 * fVar24 + fVar6 * fVar51;
              local_128 = (void *)CONCAT44(fVar56,fVar55);
              pfVar2 = (float *)(lVar40 + 0xc + lVar36);
              fVar6 = *pfVar2;
              fVar7 = pfVar2[1];
              fVar49 = pfVar2[2];
              fStack_11c = fVar49 * local_1d8 + fVar7 * fVar22 + fVar6 * fVar48;
              local_118 = fVar49 * fStack_1d4 + fVar7 * fVar23 + fVar6 * fVar50;
              fStack_114 = fVar49 * fStack_1d0 + fVar7 * fVar24 + fVar6 * fVar51;
              pfVar2 = (float *)(lVar40 + 0x18 + lVar36);
              fVar6 = *pfVar2;
              fVar7 = pfVar2[1];
              fVar49 = pfVar2[2];
              fVar25 = pfVar2[3];
              fStack_110 = fVar49 * local_1d8 + fVar7 * fVar22 + fVar6 * fVar48;
              fStack_10c = fVar49 * fStack_1d4 + fVar7 * fVar23 + fVar6 * fVar50;
              fStack_108 = fVar49 * fStack_1d0 + fVar7 * fVar24 + fVar6 * fVar51;
              fVar6 = *(float *)(lVar40 + 0x28 + lVar36);
              fVar7 = *(float *)(lVar40 + 0x2c + lVar36);
              uStack_104 = CONCAT44(fVar7 * fStack_1d4 +
                                    fVar6 * fVar23 + fVar25 * fVar50 + local_1f8._4_4_,
                                    fVar7 * local_1d8 +
                                    fVar6 * fVar22 + fVar25 * fVar48 + local_1f8._0_4_);
              if ((((fVar55 != 0.0) || (NAN(fVar55))) ||
                  ((fVar56 != 0.0 || (((NAN(fVar56) || (fStack_120 != 0.0)) || (NAN(fStack_120))))))
                  ) && (((fStack_11c != 0.0 || (NAN(fStack_11c))) ||
                        ((local_118 != 0.0 ||
                         (((NAN(local_118) || (fStack_114 != 0.0)) || (NAN(fStack_114))))))))) {
                fVar49 = fStack_120 * fStack_120 + fVar55 * fVar55 + fVar56 * fVar56;
                fVar57 = (fStack_114 * fStack_120 + fStack_11c * fVar55 + fVar56 * local_118) /
                         fVar49;
                fStack_11c = fStack_11c - fVar57 * fVar55;
                local_118 = local_118 - fVar56 * fVar57;
                fStack_114 = fStack_114 - fStack_120 * fVar57;
                fVar49 = (fStack_108 * fStack_120 + fStack_110 * fVar55 + fVar56 * fStack_10c) /
                         fVar49;
                fStack_110 = fStack_110 - fVar49 * fVar55;
                fStack_10c = fStack_10c - fVar56 * fVar49;
                fStack_108 = fStack_108 - fStack_120 * fVar49;
                fVar49 = (fStack_108 * fStack_114 + fStack_110 * fStack_11c + local_118 * fStack_10c
                         ) / (fStack_114 * fStack_114 +
                             fStack_11c * fStack_11c + local_118 * local_118);
                fStack_110 = fStack_110 - fVar49 * fStack_11c;
                fStack_10c = fStack_10c - local_118 * fVar49;
                fStack_108 = fStack_108 - fStack_114 * fVar49;
              }
              lVar40 = *plVar4;
              lVar36 = (longlong)iVar32 * 0x30;
              puVar5 = (undefined8 *)(lVar40 + 0x1c + lVar36);
              *puVar5 = CONCAT44(fStack_108,fStack_10c);
              puVar5[1] = uStack_104;
              puVar5 = (undefined8 *)(lVar40 + 0x10 + lVar36);
              *puVar5 = CONCAT44(fStack_114,local_118);
              puVar5[1] = CONCAT44(fStack_10c,fStack_110);
              *(undefined8 *)(lVar40 + lVar36) = local_128;
              ((undefined8 *)(lVar40 + lVar36))[1] = CONCAT44(fStack_11c,fStack_120);
              *(float *)(lVar40 + 0x2c + lVar36) =
                   fVar7 * fStack_1d0 + fVar6 * fVar24 + fVar25 * fVar51 + local_1f8._8_4_;
              lVar43 = lVar43 + 1;
            } while (((cVar9 != '\0' || cVar10 != '\0') || bVar47) ||
                    (uVar29 = *(uint *)(plVar31 + 1), (int)uVar29 <= iVar14));
            uVar33 = (ulonglong)iVar14;
            uVar35 = (uint)param_3 & 0xfffffffc;
            if ((param_3 & 0xfffffffc) == 0) {
              uVar34 = uVar33;
              do {
                if ((longlong)(int)uVar29 - 1U == uVar34) {
                  param_3 = 0;
                  uVar33 = (ulonglong)uVar29;
                  local_1e0 = 0;
                  goto LAB_14353d47b;
                }
                uVar33 = uVar34 + 1;
                uVar35 = *(uint *)(*plVar31 + 4 + uVar34 * 4) & 0x33333333;
                uVar34 = uVar33;
              } while (uVar35 == 0);
              local_1e0 = 0;
            }
            uVar29 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
              }
            }
            local_1e0 = (ulonglong)((uVar29 >> 2) + (int)local_1e0);
            param_3 = (ulonglong)(uVar35 >> ((byte)uVar29 & 0x1c));
          } while( true );
        }
LAB_14353ddf5:
        FUN_147b013be(param_2,&local_140,&local_1c0);
      }
      FUN_14067dd2c(param_1 + 0x168,*(undefined4 *)(param_2 + 0x1b4));
      local_128 = (void *)0x0;
      fStack_120 = *(float *)(*(undefined8 **)(param_1 + 0x1b0) + 1);
      lVar43 = (longlong)(int)fStack_120;
      _Src = (void *)**(undefined8 **)(param_1 + 0x1b0);
      if (lVar43 == 0) {
        fStack_11c = 0.0;
      }
      else {
        FUN_147b49a34(&local_128,fStack_120);
        memcpy(local_128,_Src,lVar43 * 0x28);
      }
      FUN_147af6e64(puVar1,&local_128);
      if (local_128 != (void *)0x0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      plVar4 = *(longlong **)(param_1 + 0x1b8);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        LOCK();
        plVar46 = plVar4 + 1;
        *(int *)plVar46 = (int)*plVar46 + -1;
        UNLOCK();
        if ((int)*plVar46 == 0) {
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
  }
  else {
    FUN_14067d924(param_1,param_2);
    iVar44 = *(int *)(param_1 + 0x170);
    if (iVar44 == 0) {
      iVar44 = *(int *)(param_1 + 0x188);
    }
    FUN_14491a3fa(param_2,iVar44,&local_1c0);
  }
  *(undefined1 *)(param_1 + 0x1a9) = 0;
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14353df18 FUN_14353df18 body=1238 status=ok
// SIG undefined FUN_14353df18(void)

void FUN_14353df18(ulonglong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auStack_138 [40];
  uint local_110;
  undefined4 local_10c;
  ulonglong local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar12 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  local_c0 = param_1 + 8;
  local_c8 = (ulonglong)(uVar12 >> 0x10 ^ uVar12) | 0x100000000;
  local_b8 = param_1 + 0x38;
  local_b0 = param_1 + 0x50;
  local_d8 = (longlong *)(param_1 + 0x78);
  local_e0 = (longlong *)(param_1 + 0x88);
  local_e8 = (longlong *)(param_1 + 0x98);
  local_90 = param_1 + 0xa8;
  local_88 = param_1 + 0xb8;
  local_80 = param_1 + 200;
  local_70 = param_1 + 0xe8;
  local_68 = param_1 + 0xf8;
  local_60 = param_1 + 0x118;
  local_58 = param_1 + 0x11c;
  local_50 = param_1 + 0x120;
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0xf0);
  iVar15 = *(int *)(param_2 + 0x1b0);
  plVar21 = (longlong *)(param_2 + 0x40);
  bVar11 = true;
  if ((*(char *)(param_2 + 0x90) == '\0') &&
     (*(int *)(param_2 + 0x8c) + *(int *)(param_2 + 0x80) != iVar15)) {
    uVar12 = *(uint *)(param_2 + 0x48);
    local_108 = (ulonglong)uVar12;
    iVar15 = *(int *)(param_2 + 0x78);
    if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
      iVar15 = *(int *)(param_2 + 0x70);
    }
    iVar16 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar16 = iVar15;
    }
    uVar13 = iVar16 >> 3;
    uVar27 = (ulonglong)uVar13;
    uVar22 = iVar15 % 8;
    uVar19 = 0;
    if ((int)uVar13 < (int)uVar12 && -8 < iVar15) {
      uVar19 = *(uint *)(*plVar21 + (longlong)(int)uVar13 * 4) & 0x99999999;
    }
    bVar5 = (char)uVar22 * '\x04' & 0x1f;
    local_110 = uVar19 >> bVar5;
    if ((int)uVar13 < (int)uVar12) {
      if (uVar19 >> bVar5 == 0) {
        uVar14 = (longlong)(int)uVar13;
        do {
          if ((longlong)(int)uVar12 - 1U == uVar14) {
            local_100 = 0;
            local_110 = 0;
            goto LAB_14353e146;
          }
          uVar27 = uVar14 + 1;
          local_110 = *(uint *)(*plVar21 + 4 + uVar14 * 4) & 0x99999999;
          uVar14 = uVar27;
        } while (local_110 == 0);
        uVar22 = 0;
      }
      uVar12 = 0;
      if (local_110 != 0) {
        for (; (local_110 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      uVar22 = (uVar12 >> 2) + uVar22;
      local_110 = local_110 >> ((byte)uVar12 & 0x1c);
    }
    local_100 = (ulonglong)uVar22;
    local_108 = uVar27 & 0xffffffff;
LAB_14353e146:
    bVar11 = false;
    iVar15 = 0;
    plVar20 = plVar21;
  }
  else {
    local_100 = 0;
    local_108 = 0;
    plVar20 = (longlong *)0x0;
  }
  local_10c = *(undefined4 *)(param_2 + 0x1b4);
  lVar24 = (longlong)iVar15;
  uVar27 = 0;
  local_f8 = plVar20;
  local_f0 = plVar21;
  local_d0 = lVar24;
  local_a8 = local_d8;
  local_a0 = local_e0;
  local_98 = local_e8;
  local_78 = (longlong *)(param_1 + 0xd8);
LAB_14353e16a:
  do {
    uVar12 = (int)local_100 + (int)local_108 * 8;
    do {
      do {
        if (bVar11) {
          if (lVar24 <= (longlong)uVar27) {
LAB_14353e392:
            FUN_14067d924(param_1,param_2);
            FUN_14491a3fa(param_2,local_10c,&local_c8);
            if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return;
          }
        }
        else {
          iVar15 = *(int *)((longlong)plVar20 + 0x3c) + 1;
          if ((int)plVar20[6] < iVar15) {
            iVar15 = (int)plVar20[6];
          }
          if (iVar15 <= (int)uVar12) goto LAB_14353e392;
        }
        uVar14 = (ulonglong)uVar12;
        if (bVar11) {
          uVar14 = uVar27 & 0xffffffff;
        }
        iVar15 = (int)uVar14;
        iVar16 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar16 = iVar15;
        }
        if ((*(uint *)(*plVar21 + (longlong)(iVar16 >> 3) * 4) >> (iVar15 * 4 & 0x1fU) & 1) == 0) {
          if (*(char *)(param_2 + 0x95) == '\0') {
            uVar14 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x98) + uVar27 * 4);
          }
          iVar16 = (int)uVar14;
          if (-1 < iVar16) {
            iVar3 = *(int *)(param_1 + 0x170);
            iVar4 = *(int *)(param_1 + 0x180 + (ulonglong)(iVar3 == 0) * 8);
            if ((iVar3 == 0) || (iVar4 <= iVar16)) {
              if (iVar16 < iVar4) {
                if (iVar3 != 0) {
                  iVar16 = *(int *)(*(longlong *)(param_1 + 0x178) + uVar14 * 4);
                }
                goto LAB_14353e23e;
              }
            }
            else {
              iVar16 = *(int *)(*(longlong *)(param_1 + 0x178) + uVar14 * 4);
              if (iVar16 != -1) {
LAB_14353e23e:
                lVar24 = *(longlong *)(param_1 + 0xd8);
                lVar18 = (longlong)iVar16;
                lVar23 = lVar18 * 0x30;
                lVar26 = (longlong)iVar15;
                lVar25 = lVar26 * 0x30;
                uVar6 = *(undefined8 *)(lVar24 + lVar23);
                uVar7 = ((undefined8 *)(lVar24 + lVar23))[1];
                puVar1 = (undefined8 *)(lVar24 + 0x10 + lVar23);
                uVar8 = *puVar1;
                uVar9 = puVar1[1];
                puVar1 = (undefined8 *)(lVar24 + 0x20 + lVar23);
                uVar10 = puVar1[1];
                puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar25);
                *puVar2 = *puVar1;
                puVar2[1] = uVar10;
                puVar1 = (undefined8 *)(lVar24 + 0x10 + lVar25);
                *puVar1 = uVar8;
                puVar1[1] = uVar9;
                *(undefined8 *)(lVar24 + lVar25) = uVar6;
                ((undefined8 *)(lVar24 + lVar25))[1] = uVar7;
                uVar17 = *(ushort *)(param_2 + 0xf0);
                if ((uVar17 & 2) != 0) {
                  iVar3 = *(int *)(param_2 + 0xa8);
                  memcpy((void *)(*local_d8 + (longlong)(iVar15 * iVar3) * 4),
                         (void *)(*local_d8 + (longlong)(iVar16 * iVar3) * 4),(longlong)iVar3 << 2);
                  uVar17 = *(ushort *)(param_2 + 0xf0);
                  plVar20 = local_f8;
                  plVar21 = local_f0;
                }
                if ((uVar17 & 1) != 0) {
                  *(undefined4 *)(*local_e0 + lVar26 * 4) = *(undefined4 *)(*local_e0 + lVar18 * 4);
                  uVar17 = *(ushort *)(param_2 + 0xf0);
                }
                lVar24 = local_d0;
                if ((uVar17 & 0x10) != 0) {
                  puVar1 = (undefined8 *)(*local_e8 + lVar18 * 0x10);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(*local_e8 + lVar26 * 0x10);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                }
              }
            }
          }
        }
        uVar27 = uVar27 + 1;
      } while (bVar11);
      uVar22 = *(uint *)(plVar20 + 1);
    } while ((int)uVar22 <= (int)local_108);
    local_108 = (ulonglong)(int)local_108;
    local_110 = local_110 & 0xfffffff6;
    if (local_110 == 0) {
      uVar14 = local_108;
      do {
        if ((longlong)(int)uVar22 - 1U == uVar14) {
          local_100 = 0;
          local_110 = 0;
          local_108 = (ulonglong)uVar22;
          goto LAB_14353e16a;
        }
        local_108 = uVar14 + 1;
        local_110 = *(uint *)(*plVar20 + 4 + uVar14 * 4) & 0x99999999;
        uVar14 = local_108;
      } while (local_110 == 0);
      iVar15 = 0;
    }
    else {
      iVar15 = (int)local_100;
    }
    uVar12 = 0;
    if (local_110 != 0) {
      for (; (local_110 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
    local_110 = local_110 >> ((byte)uVar12 & 0x1c);
    local_100 = (ulonglong)((uVar12 >> 2) + iVar15);
  } while( true );
}



// FUNCTION 14353e3f0 FUN_14353e3f0 body=1222 status=ok
// SIG undefined FUN_14353e3f0(void)

void FUN_14353e3f0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x1e0);
  if (plVar4 == (longlong *)0x0) goto LAB_14353e531;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14353e44b;
    if (iVar7 != 1) goto LAB_14353e446;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14353e44b;
  }
  else {
LAB_14353e446:
    if (iVar7 == 0x10) goto LAB_14353e44b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14353e44b:
      (**(code **)(*plVar4 + 0x20))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14353e44b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14353e5f3;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143541375);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_14353e5f3:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14353e673;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14353e673:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14a9755b0;
    puVar17[0x15] = plVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar17[0xf] = uVar12;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a975550;
    local_68[0] = FUN_143544ad4;
    local_40 = plVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FReleasePerInstanceRenderData",&DAT_14cae7090);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14353e531:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14353e8d0 FUN_14353e8d0 body=1380 status=ok
// SIG undefined FUN_14353e8d0(void)

void FUN_14353e8d0(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
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
  uint uVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  longlong *plVar29;
  uint local_120;
  int local_11c;
  int local_118;
  ulonglong local_110;
  
  if ((*(ushort *)(param_1 + 0xf0) & 4) != 0) {
    if ((int)param_2[1] == 0) {
      *(ushort *)(param_1 + 0xf0) = *(ushort *)(param_1 + 0xf0) & 0xfffb;
    }
    else {
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      plVar1 = (longlong *)(param_1 + 0xc0);
      local_11c = *(int *)(param_1 + 0x1b0);
      if ((*(char *)(param_1 + 0x90) == '\0' && *(char *)(param_1 + 0x91) == '\0') &&
         (iVar26 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x80), iVar26 != local_11c)) {
        if (iVar26 != 0) {
          plVar29 = (longlong *)(param_1 + 0x40);
          FUN_140250dc8(plVar1);
          uVar17 = *(uint *)(param_1 + 0x48);
          iVar26 = *(int *)(param_1 + 0x78);
          if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x78)) {
            iVar26 = *(int *)(param_1 + 0x70);
          }
          iVar19 = iVar26 + 7;
          if (-1 < iVar26) {
            iVar19 = iVar26;
          }
          uVar22 = iVar19 >> 3;
          local_110 = (ulonglong)uVar22;
          local_118 = iVar26 % 8;
          bVar20 = false;
          local_120 = 0;
          if (-8 < iVar26 && (int)uVar22 < (int)uVar17) {
            local_120 = *(uint *)(*plVar29 + (longlong)(int)uVar22 * 4) & 0x33333333;
          }
          local_120 = local_120 >> ((char)local_118 * '\x04' & 0x1fU);
          if ((int)uVar22 < (int)uVar17) {
            if (local_120 == 0) {
              uVar28 = (longlong)(int)uVar22;
              do {
                if ((longlong)(int)uVar17 - 1U == uVar28) {
                  bVar20 = false;
                  local_11c = 0;
                  local_120 = 0;
                  local_110 = (ulonglong)uVar17;
                  goto LAB_14353ea34;
                }
                local_110 = uVar28 + 1;
                local_120 = *(uint *)(*plVar29 + 4 + uVar28 * 4) & 0x33333333;
                uVar28 = local_110;
              } while (local_120 == 0);
              local_118 = 0;
            }
            uVar17 = 0;
            if (local_120 != 0) {
              for (; (local_120 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            local_118 = (uVar17 >> 2) + local_118;
            local_120 = local_120 >> ((byte)uVar17 & 0x1c);
            bVar20 = false;
            local_11c = 0;
          }
          else {
            local_11c = 0;
          }
LAB_14353ea3d:
          iVar26 = 0;
LAB_14353ea40:
          do {
            iVar19 = (int)local_110;
            iVar27 = local_118 + iVar19 * 8;
            do {
              do {
                if (bVar20) {
                  iVar21 = iVar26;
                  if (local_11c <= iVar26) {
                    return;
                  }
                }
                else {
                  iVar24 = *(int *)((longlong)plVar29 + 0x3c) + 1;
                  if ((int)plVar29[6] < iVar24) {
                    iVar24 = (int)plVar29[6];
                  }
                  iVar21 = iVar27;
                  if (iVar24 <= iVar27) {
                    return;
                  }
                }
                lVar18 = *param_2;
                lVar23 = (longlong)iVar21 * 0x80;
                dVar5 = *(double *)(lVar18 + 0x10 + lVar23);
                dVar6 = *(double *)(lVar18 + 8 + lVar23);
                dVar7 = *(double *)(lVar18 + 0x60 + lVar23);
                dVar8 = *(double *)(lVar18 + lVar23);
                dVar9 = *(double *)(lVar18 + 0x30 + lVar23);
                dVar10 = *(double *)(lVar18 + 0x68 + lVar23);
                dVar11 = *(double *)(lVar18 + 0x28 + lVar23);
                dVar12 = *(double *)(lVar18 + 0x20 + lVar23);
                dVar13 = *(double *)(lVar18 + 0x70 + lVar23);
                dVar14 = *(double *)(lVar18 + 0x50 + lVar23);
                dVar15 = *(double *)(lVar18 + 0x48 + lVar23);
                dVar16 = *(double *)(lVar18 + 0x40 + lVar23);
                iVar24 = *(int *)(param_1 + 200);
                *(uint *)(param_1 + 200) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0xcc) < iVar24 + 1U) {
                  FUN_14026f43e(plVar1,iVar24);
                }
                lVar18 = *plVar1;
                lVar23 = (longlong)iVar24 * 0x30;
                *(float *)(lVar18 + lVar23) = (float)dVar8;
                *(float *)(lVar18 + 4 + lVar23) = (float)dVar6;
                *(float *)(lVar18 + 8 + lVar23) = (float)dVar5;
                *(float *)(lVar18 + 0xc + lVar23) = (float)dVar12;
                *(float *)(lVar18 + 0x10 + lVar23) = (float)dVar11;
                *(float *)(lVar18 + 0x14 + lVar23) = (float)dVar9;
                *(float *)(lVar18 + 0x18 + lVar23) = (float)dVar16;
                *(float *)(lVar18 + 0x1c + lVar23) = (float)dVar15;
                *(float *)(lVar18 + 0x20 + lVar23) = (float)dVar14;
                *(float *)(lVar18 + 0x24 + lVar23) = (float)(dVar7 + dVar2);
                *(float *)(lVar18 + 0x28 + lVar23) = (float)(dVar10 + dVar3);
                *(float *)(lVar18 + 0x2c + lVar23) = (float)(dVar13 + dVar4);
                iVar26 = iVar26 + 1;
              } while (bVar20);
              uVar17 = *(uint *)(plVar29 + 1);
              local_110 = (ulonglong)uVar17;
            } while ((int)uVar17 <= iVar19);
            local_120 = local_120 & 0xfffffffc;
            uVar28 = (longlong)iVar19;
            if (local_120 == 0) {
              uVar25 = (longlong)iVar19;
              do {
                if ((longlong)(int)uVar17 - 1U == uVar25) {
                  local_120 = 0;
                  local_118 = 0;
                  goto LAB_14353ea40;
                }
                uVar28 = uVar25 + 1;
                local_120 = *(uint *)(*plVar29 + 4 + uVar25 * 4) & 0x33333333;
                uVar25 = uVar28;
              } while (local_120 == 0);
              local_118 = 0;
            }
            local_110 = uVar28;
            uVar17 = 0;
            if (local_120 != 0) {
              for (; (local_120 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            local_118 = (uVar17 >> 2) + local_118;
            local_120 = local_120 >> ((byte)uVar17 & 0x1c);
          } while( true );
        }
      }
      else if (local_11c != 0) {
        FUN_140250dc8(plVar1,local_11c);
        plVar29 = (longlong *)0x0;
        bVar20 = true;
        local_110 = 0;
LAB_14353ea34:
        local_118 = 0;
        goto LAB_14353ea3d;
      }
      *(undefined4 *)(param_1 + 200) = 0;
      if (*(int *)(param_1 + 0xcc) < 0) {
        FUN_140250e1e(plVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14353ee34 FUN_14353ee34 body=1227 status=ok
// SIG undefined FUN_14353ee34(void)

void FUN_14353ee34(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  uint local_d8;
  int local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  uint *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong local_a0 [2];
  undefined2 *local_90;
  int local_88;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  plVar1 = DAT_14c9485b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar12 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar12 != 0) {
    puVar14 = (uint *)(param_2 + 2);
    uVar5 = *(uint *)(param_2 + 5);
    if (uVar5 == 0) {
      uVar4 = 0;
    }
    else {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = puVar14;
      }
      uVar4 = *puVar7;
      if (uVar4 == 0) {
        iVar3 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar3 = uVar5 - 1;
        }
        uVar19 = 0;
        uVar9 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar9 = uVar19;
        }
        iVar3 = 0x3e;
        do {
          uVar4 = uVar5;
          if (uVar9 == uVar19) goto LAB_14353eeed;
          uVar4 = puVar7[uVar19 + 1];
          uVar19 = uVar19 + 1;
          iVar3 = iVar3 + 0x20;
        } while (uVar4 == 0);
      }
      else {
        iVar3 = 0x3e;
      }
      uVar9 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar4 = iVar3 - ((uint)lVar17 ^ 0x3f);
      if ((int)uVar5 <= (int)uVar4) {
        uVar4 = uVar5;
      }
    }
LAB_14353eeed:
    iVar12 = iVar12 * *(int *)(*param_2 + 0x18 + (longlong)(int)uVar4 * 0x28);
    local_58 = 0;
    uStack_50 = 0;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar12 != 0) {
      FUN_1402191ca();
      uVar5 = *(uint *)(param_2 + 5);
    }
    uVar9 = (ulonglong)uVar5;
    local_c8 = plVar1;
    local_d0 = param_3;
    if (uVar5 == 0) {
      uVar22 = 1;
      uVar15 = 0;
      iVar12 = 0;
      uVar19 = 0;
    }
    else {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = puVar14;
      }
      uVar4 = *puVar7;
      if (uVar4 == 0) {
        iVar12 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar12 = uVar5 - 1;
        }
        uVar15 = 0;
        uVar19 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar19 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar19 == uVar15) goto LAB_14353efb9;
          iVar12 = iVar12 + 0x20;
          uVar4 = puVar7[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar15 = 0;
        iVar12 = 0;
      }
      uVar22 = (ulonglong)(-uVar4 & uVar4);
      uVar19 = uVar22 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar4 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      uVar19 = (ulonglong)uVar4;
      if ((int)uVar5 <= (int)uVar4) {
        uVar19 = uVar9;
      }
    }
    if ((uint)uVar19 != uVar5) {
      uVar5 = 0xffffffff;
      uVar20 = uVar9;
      local_c0 = uVar9;
      local_b8 = puVar14;
      local_b0 = param_2;
      do {
        lVar17 = (longlong)*(int *)(*param_2 + 0x18 + (longlong)(int)uVar19 * 0x28);
        local_a8 = uVar15;
        if (lVar17 != 0) {
          lVar16 = *(longlong *)(*param_2 + 0x10 + (longlong)(int)uVar19 * 0x28);
          lVar18 = 0;
          local_d8 = uVar5;
          local_d4 = iVar12;
          do {
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(lVar16 + 8 + lVar18) != 0) {
              puVar13 = *(undefined2 **)(lVar16 + lVar18);
            }
            FUN_1446f470e(&local_68,puVar13,1);
            uVar9 = uStack_50;
            lVar21 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_1446f84a2(&local_58,uVar9 & 0xffffffff);
            }
            *(longlong *)(local_58 + lVar21 * 8) = local_68;
            lVar18 = lVar18 + 0x10;
          } while (lVar17 * 0x10 != lVar18);
          uVar9 = (ulonglong)*(uint *)(local_b0 + 5);
          puVar14 = local_b8;
          param_2 = local_b0;
          uVar20 = local_c0;
          iVar12 = local_d4;
          uVar5 = local_d8;
        }
        uVar5 = uVar5 & ~(uint)uVar22;
        puVar7 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar7 = puVar14;
        }
        iVar3 = (int)local_a8;
        lVar17 = (longlong)iVar3;
        uVar4 = puVar7[lVar17] & uVar5;
        iVar6 = (int)uVar9;
        uVar15 = local_a8;
        if (uVar4 == 0) {
          iVar10 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar10 = iVar6 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar3) {
            iVar11 = iVar3;
          }
          if (iVar3 < iVar10) {
            lVar16 = 0;
            do {
              uVar4 = puVar7[lVar17 + lVar16 + 1];
              if (uVar4 != 0) {
                uVar15 = (ulonglong)(iVar3 + (int)lVar16 + 1);
                uVar5 = 0xffffffff;
                goto LAB_14353f242;
              }
              iVar12 = iVar12 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar11 - lVar17 != lVar16);
            uVar5 = 0xffffffff;
            iVar3 = iVar11;
          }
          uVar15 = (ulonglong)(iVar3 + 1);
          uVar19 = uVar9;
        }
        else {
LAB_14353f242:
          uVar22 = (ulonglong)(-uVar4 & uVar4);
          uVar19 = uVar22 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar4 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          uVar19 = (ulonglong)uVar4;
          if (iVar6 <= (int)uVar4) {
            uVar19 = uVar9;
          }
        }
      } while ((int)uVar19 != (int)uVar20);
    }
LAB_14353efb9:
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (int)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_58 = 0;
    uStack_50 = 0;
    local_e8 = 1;
    (**(code **)(*local_c8 + 0x28))(local_c8,&local_78,&local_68,1);
    uVar2 = local_d0;
    if ((longlong)(int)uStack_60 == 0) {
      uVar9 = 0;
    }
    else {
      lVar16 = (longlong)(int)uStack_60 * 0x70;
      lVar17 = local_68;
      do {
        FUN_1400021e4(lVar17,local_a0);
        FUN_146271a9e(&local_90,local_a0);
        puVar13 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar13 = local_90;
        }
        FUN_1446f470e(local_80,puVar13,1);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
        uVar5 = local_80._0_4_ & 0xffff;
        uVar8 = FUN_140e6d7e2(uVar2,(local_80._0_4_ << 0x10 | uVar5) + local_80._4_4_ +
                                    (local_80._2_4_ << 0x13 | local_80._2_4_ & 0xffff) +
                                    (uVar5 >> 4),local_80);
        FUN_140721fbe(uVar8,lVar17);
        lVar17 = lVar17 + 0x70;
        lVar16 = lVar16 + -0x70;
      } while (lVar16 != 0);
      uVar9 = uStack_60 & 0xffffffff;
    }
    FUN_140195631(local_68,uVar9);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14353f301 FUN_14353f301 body=69 status=ok
// SIG undefined FUN_14353f301(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14353f301(void)

{
  _DAT_14cae5110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014353f343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae5118,1);
  return;
}



// FUNCTION 14353f346 FUN_14353f346 body=674 status=ok
// SIG undefined FUN_14353f346(void)

longlong * FUN_14353f346(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)0x0;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x1c0))(param_2);
    if (cVar1 == '\0') {
      if (DAT_14caec308 == 0) {
        local_50 = &local_28;
        local_28 = FUN_1417df956;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146386466;
        local_58 = &LAB_147bb408b;
        local_60 = (code *)&LAB_1463eaa15;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000001;
        local_80 = 8;
        local_88 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
      if (((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
           DAT_14caec308 + 0x30)) ||
         (cVar1 = (**(code **)(*param_2 + 0x598))(param_2), cVar1 == '\0')) {
        uVar5 = *param_1;
        uVar2 = FUN_1402d2740();
        plVar3 = (longlong *)FUN_14092e757(uVar2,param_2,uVar5,0);
        param_2 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          if (DAT_14caec470 == 0) {
            local_50 = &local_28;
            local_28 = FUN_1417df956;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1463eaa20;
            local_58 = &LAB_147bbd9ea;
            local_60 = FUN_1401cf6d7;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          param_2 = plVar3;
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) ==
              DAT_14caec470 + 0x30)) {
            local_38 = 0;
            uStack_30 = 0;
            plVar4 = (longlong *)(**(code **)(*plVar3 + 0x360))(plVar3);
            if ((plVar4 != (longlong *)0x0) &&
               (cVar1 = (**(code **)(*plVar4 + 0x1c0))(plVar4), cVar1 == '\0')) {
              uVar5 = *param_1;
              uVar2 = FUN_1402d2740();
              uVar5 = FUN_14092e757(uVar2,plVar4,uVar5,0);
              FUN_147bbed06(plVar3 + 0x23,uVar5,1);
            }
          }
        }
      }
      else {
        param_2 = (longlong *)param_2[0x22];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14353f5ea FUN_14353f5ea body=682 status=ok
// SIG undefined FUN_14353f5ea(void)

longlong * FUN_14353f5ea(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_140cc27fc(param_2);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x1c0))(plVar2);
    if (cVar1 == '\0') {
      if (DAT_14caec308 == 0) {
        local_50 = &local_28;
        local_28 = FUN_1417df956;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146386466;
        local_58 = &LAB_147bb408b;
        local_60 = (code *)&LAB_1463eaa15;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000001;
        local_80 = 8;
        local_88 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
      if (((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
           DAT_14caec308 + 0x30)) || (cVar1 = (**(code **)(*plVar2 + 0x598))(plVar2), cVar1 == '\0')
         ) {
        uVar6 = *param_1;
        uVar3 = FUN_1402d2740();
        plVar4 = (longlong *)FUN_14092e757(uVar3,plVar2,uVar6,0);
        plVar2 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14caec470 == 0) {
            local_50 = &local_28;
            local_28 = FUN_1417df956;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1463eaa20;
            local_58 = &LAB_147bbd9ea;
            local_60 = FUN_1401cf6d7;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          plVar2 = plVar4;
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) ==
              DAT_14caec470 + 0x30)) {
            local_38 = 0;
            uStack_30 = 0;
            plVar5 = (longlong *)(**(code **)(*plVar4 + 0x360))(plVar4);
            if ((plVar5 != (longlong *)0x0) &&
               (cVar1 = (**(code **)(*plVar5 + 0x1c0))(plVar5), cVar1 == '\0')) {
              uVar6 = *param_1;
              uVar3 = FUN_1402d2740();
              uVar6 = FUN_14092e757(uVar3,plVar5,uVar6,0);
              FUN_147bbed06(plVar4 + 0x23,uVar6,1);
            }
          }
        }
      }
      else {
        plVar2 = (longlong *)plVar2[0x22];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 14353f895 FUN_14353f895 body=55 status=ok
// SIG undefined FUN_14353f895(void)

void FUN_14353f895(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae5200 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae5200 = FUN_14171c317(FUN_1463d3a56,uVar1,L"EArraySortOrder");
  }
  return;
}



// FUNCTION 14353f8cc FUN_14353f8cc body=55 status=ok
// SIG undefined FUN_14353f8cc(void)

void FUN_14353f8cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae53b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae53b8 = FUN_14171c317(FUN_1463d4683,uVar1,L"ESlateGesture");
  }
  return;
}



// FUNCTION 14353f903 FUN_14353f903 body=55 status=ok
// SIG undefined FUN_14353f903(void)

void FUN_14353f903(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae5640 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae5640 = FUN_14171c317(FUN_1463d54b1,uVar1,L"EMIDCreationFlags");
  }
  return;
}



// FUNCTION 14353f93a FUN_14353f93a body=3548 status=ok
// SIG undefined FUN_14353f93a(void)

void FUN_14353f93a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong **_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_58 = (undefined *)FUN_140342cba();
          local_50 = FUN_1468c7f1e;
          local_60 = 0;
          local_68 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_50 = FUN_1468d96f0;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_14353fb07;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_14353fb07:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_58 = (undefined *)FUN_140342cba();
          local_50 = FUN_1468c7f1e;
          local_60 = 0;
          local_68 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_50 = FUN_1468d96f0;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_14353fcbb;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_14353fcbb:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_58 = (undefined *)FUN_140342cba();
          local_50 = FUN_1468c7f1e;
          local_60 = 0;
          local_68 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_50 = FUN_1468d96f0;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_14353fe6f;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_14353fe6f:
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
  local_48 = DAT_14c844840;
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
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963ee0) {
    FUN_144b3d300(&DAT_14c963ee0);
    if (DAT_14c963ee0 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_58 = (undefined *)FUN_140342cba();
          local_50 = FUN_1468c7f1e;
          local_60 = 0;
          local_68 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_50 = FUN_140fb5c52;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_143540073;
          }
        }
        _Src = (longlong **)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_143540073:
  plVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))(local_48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143540717 FUN_143540717 body=55 status=ok
// SIG undefined FUN_143540717(void)

void FUN_143540717(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae56a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae56a0 = FUN_14171c317(FUN_1463d5671,uVar1,L"EEasingFunc");
  }
  return;
}



// FUNCTION 14354074e FUN_14354074e body=55 status=ok
// SIG undefined FUN_14354074e(void)

void FUN_14354074e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae56b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae56b8 = FUN_14171c317(FUN_1463d56a2,uVar1,L"ELerpInterpolationMode");
  }
  return;
}



// FUNCTION 143540785 FUN_143540785 body=55 status=ok
// SIG undefined FUN_143540785(void)

void FUN_143540785(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae56d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae56d0 = FUN_14171c317(FUN_1463d56d1,uVar1,L"EMatrixColumns");
  }
  return;
}



// FUNCTION 1435407bc FUN_1435407bc body=129 status=ok
// SIG undefined FUN_1435407bc(void)

bool FUN_1435407bc(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_2 - *param_3 <= *param_1) && (*param_1 <= *param_2 + *param_3)) {
    bVar1 = false;
    if ((param_2[1] - param_3[1] <= param_1[1]) &&
       (bVar1 = false, param_1[1] <= param_2[1] + param_3[1])) {
      if (param_2[2] - param_3[2] <= param_1[2]) {
        bVar1 = param_1[2] <= param_2[2] + param_3[2];
      }
      else {
        bVar1 = false;
      }
    }
  }
  return bVar1;
}



// FUNCTION 14354083e FUN_14354083e body=61 status=ok
// SIG undefined FUN_14354083e(void)

void FUN_14354083e(undefined8 param_1,longlong param_2,double *param_3)

{
  uint uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = rand();
  *param_3 = (double)((float)(uVar1 & 0x7fff) / 32767.0);
  return;
}



// FUNCTION 14354087c FUN_14354087c body=339 status=ok
// SIG undefined FUN_14354087c(void)

void FUN_14354087c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  do {
    do {
      uVar3 = rand();
      fVar4 = (float)(uVar3 & 0x7fff) / 32767.0;
      dVar1 = (double)(fVar4 + fVar4 + -1.0);
      uVar3 = rand();
      fVar4 = (float)(uVar3 & 0x7fff) / 32767.0;
      dVar2 = (double)(fVar4 + fVar4 + -1.0);
      uVar3 = rand();
      fVar4 = (float)(uVar3 & 0x7fff) / 32767.0;
      dVar5 = (double)(fVar4 + fVar4 + -1.0);
      dVar6 = dVar5 * dVar5 + dVar1 * dVar1 + dVar2 * dVar2;
    } while (1.0 < dVar6);
  } while (dVar6 < 9.999999747378752e-05);
  dVar6 = 1.0 / SQRT(dVar6);
  *param_3 = dVar6 * dVar1;
  param_3[1] = dVar2 * dVar6;
  param_3[2] = dVar5 * dVar6;
  return;
}



// FUNCTION 1435409cf FUN_1435409cf body=91 status=ok
// SIG undefined FUN_1435409cf(void)

void FUN_1435409cf(void)

{
  if (DAT_14cae6e68 != 0) {
    if (DAT_14cae6e60 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cae6e60)(DAT_14cae6e60,0);
    FUN_1446efa72(&DAT_14cae6e60,0,0,0x10);
    DAT_14cae6e68 = 0;
  }
  if (DAT_14cae6e60 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143540a30 FUN_143540a30 body=48 status=ok
// SIG undefined FUN_143540a30(void)

longlong FUN_143540a30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540a60 FUN_143540a60 body=48 status=ok
// SIG undefined FUN_143540a60(void)

longlong FUN_143540a60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540a90 FUN_143540a90 body=48 status=ok
// SIG undefined FUN_143540a90(void)

longlong FUN_143540a90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540ac0 FUN_143540ac0 body=48 status=ok
// SIG undefined FUN_143540ac0(void)

longlong FUN_143540ac0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540af0 FUN_143540af0 body=48 status=ok
// SIG undefined FUN_143540af0(void)

longlong FUN_143540af0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540b74 FUN_143540b74 body=76 status=ok
// SIG undefined FUN_143540b74(void)

undefined8 * FUN_143540b74(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  *param_1 = &PTR_FUN_14a9758a8;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540bc0 FUN_143540bc0 body=60 status=ok
// SIG undefined FUN_143540bc0(void)

undefined8 * FUN_143540bc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9758a8;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540c08 FUN_143540c08 body=84 status=ok
// SIG undefined FUN_143540c08(void)

void FUN_143540c08(longlong param_1,longlong *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),0,0);
                    /* WARNING: Could not recover jumptable at 0x000143540c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return;
}



// FUNCTION 143540d12 FUN_143540d12 body=25 status=ok
// SIG undefined FUN_143540d12(void)

void FUN_143540d12(void)

{
  FUN_145da05a2();
  FUN_14170c56a(&DAT_14cae4b30);
  return;
}



// FUNCTION 143540d2c FUN_143540d2c body=29 status=ok
// SIG undefined FUN_143540d2c(void)

undefined8 FUN_143540d2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143540d5e FUN_143540d5e body=85 status=ok
// SIG undefined FUN_143540d5e(void)

void FUN_143540d5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a975070;
  return;
}



// FUNCTION 143540db4 FUN_143540db4 body=85 status=ok
// SIG undefined FUN_143540db4(void)

void FUN_143540db4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a975070;
  return;
}



// FUNCTION 143540e0a FUN_143540e0a body=118 status=ok
// SIG undefined FUN_143540e0a(void)

void FUN_143540e0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a975070;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143540e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143540e80 FUN_143540e80 body=81 status=ok
// SIG undefined FUN_143540e80(void)

void FUN_143540e80(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143540ed2 FUN_143540ed2 body=83 status=ok
// SIG undefined FUN_143540ed2(void)

undefined8 FUN_143540ed2(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143540f26 FUN_143540f26 body=1102 status=ok
// SIG undefined FUN_143540f26(void)

void FUN_143540f26(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"DummyFloatBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x10;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1435410bb:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1435410bb;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10d00;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1435412e6;
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
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1435412e6:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14354139c FUN_14354139c body=304 status=ok
// SIG undefined FUN_14354139c(void)

void FUN_14354139c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1435413fd;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_1435413fd:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 1435414cc FUN_1435414cc body=346 status=ok
// SIG undefined FUN_1435414cc(void)

void FUN_1435414cc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14354155e;
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
LAB_14354155e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143541626 FUN_143541626 body=150 status=ok
// SIG undefined FUN_143541626(void)

void FUN_143541626(uint *param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)param_1[4] < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = **(uint **)(param_1 + 2);
  }
  if (0 < (int)param_2[1]) {
    uVar4 = *param_1;
    uVar3 = 0;
    uVar5 = 0;
    do {
      if (uVar3 == uVar2) {
        uVar4 = *(uint *)(*(longlong *)(param_1 + 2) + 4 + (longlong)(int)uVar5 * 8);
        uVar6 = uVar5 + 1;
        uVar2 = 0xffffffff;
        bVar1 = -2 < (int)uVar5;
        uVar5 = uVar6;
        if ((bVar1) && ((int)uVar6 < (int)param_1[4])) {
          uVar2 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar6 * 8);
        }
      }
      uVar4 = uVar4 * 0xbb38435 + 0x3619636b;
      *(float *)(*param_2 + uVar3 * 4) = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)(int)param_2[1]);
  }
  return;
}



// FUNCTION 1435416bc FUN_1435416bc body=114 status=ok
// SIG undefined FUN_1435416bc(void)

longlong FUN_1435416bc(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a9751e0;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_140976db2((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 << 3);
  }
  return param_2 + 0x18;
}



// FUNCTION 143541740 FUN_143541740 body=57 status=ok
// SIG undefined FUN_143541740(void)

undefined8 * FUN_143541740(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9751e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14354177a FUN_14354177a body=3746 status=ok
// SIG undefined FUN_14354177a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14354177a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  uint uVar14;
  double dVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint unaff_EBP;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  double dVar24;
  longlong *plVar25;
  float fVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  longlong *plVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_180;
  float local_17c;
  longlong *local_178;
  undefined8 uStack_170;
  float local_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar3 = *param_1;
  lVar9 = lVar3;
  FUN_1409766d0(lVar3);
  bVar10 = *(byte *)(lVar3 + 0x7d4) >> 6;
  if (((-1 < DAT_14c76158c & bVar10) == 1) && (DAT_14c76158c < *(int *)(lVar3 + 0x728))) {
    if (*(char *)(param_2 + 0x90) == '\x01') {
      *(undefined8 *)(lVar3 + 0x818) = DAT_14c8464f0;
      uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(ulonglong *)(lVar3 + 0x808) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(lVar3 + 0x810) = uVar5;
      *(undefined8 *)(lVar3 + 0x800) = DAT_14c8464f0;
      uVar42 = DAT_14c8464e8._4_4_;
      uVar41 = (undefined4)DAT_14c8464e8;
      uVar40 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(lVar3 + 0x7f0) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(lVar3 + 0x7f4) = uVar40;
      *(undefined4 *)(lVar3 + 0x7f8) = uVar41;
      *(undefined4 *)(lVar3 + 0x7fc) = uVar42;
      *(undefined1 *)(lVar3 + 0x820) = 0;
    }
    else if (*(char *)(lVar3 + 0x820) == '\0') {
      plVar37 = (longlong *)(*(double *)(lVar3 + 0x170) + *(double *)(lVar3 + 0x188));
      dVar33 = *(double *)(lVar3 + 0x168) + *(double *)(lVar3 + 0x180);
      dVar31 = *(double *)(lVar3 + 0x160) + *(double *)(lVar3 + 0x178);
      dVar15 = *(double *)(lVar3 + 0x170) - *(double *)(lVar3 + 0x188);
      dVar24 = *(double *)(lVar3 + 0x168) - *(double *)(lVar3 + 0x180);
      dVar36 = *(double *)(lVar3 + 0x160) - *(double *)(lVar3 + 0x178);
      dVar32 = (double)plVar37 - dVar15;
      if (((((dVar31 - dVar36 != 0.0) || (NAN(dVar31 - dVar36))) || (dVar33 - dVar24 != 0.0)) ||
          ((NAN(dVar33 - dVar24) || (dVar32 != 0.0)))) || (NAN(dVar32))) {
        auVar51 = *(undefined1 (*) [16])(lVar3 + 0x280);
        auVar53 = *(undefined1 (*) [16])(lVar3 + 0x290);
        lVar8 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar51._8_8_));
        auVar45._8_4_ = (int)lVar8;
        auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar51._0_8_));
        auVar45._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
        iVar20 = movmskpd(DAT_14c76158c,auVar45);
        lVar8 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar53._8_8_));
        auVar48._8_4_ = (int)lVar8;
        auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar53._0_8_));
        auVar48._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
        uVar14 = movmskpd((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),bVar10),auVar48);
        if ((uVar14 & 0x3fffffff) == 0 && iVar20 == 0) {
          local_158 = DAT_14c8464a0;
          dStack_150 = DAT_14c8464a8;
          local_178 = DAT_14c8464b0;
          uStack_170 = DAT_14c8464b8;
          local_148 = DAT_14c8464d0;
          dStack_140 = dRam000000014c8464d8;
          uVar40 = (undefined4)DAT_14c8464c0;
          uVar41 = DAT_14c8464c0._4_4_;
          uVar42 = (undefined4)DAT_14c8464c8;
          uVar43 = DAT_14c8464c8._4_4_;
          dVar35 = DAT_14c846490;
          dVar39 = DAT_14c846480;
          dVar46 = DAT_14c846488;
          dVar49 = DAT_14c846498;
        }
        else {
          auVar48 = divpd(_DAT_149934d80,auVar51);
          auVar45 = divpd(ZEXT816(0x3ff0000000000000),auVar53);
          dVar1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar51._0_8_)) & auVar48._0_8_);
          uVar40 = SUB84(dVar1,0);
          uVar41 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar51._8_8_)) & auVar48._8_8_);
          uVar42 = SUB84(dVar2,0);
          uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
          local_148 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar53._0_8_)) &
                              auVar45._0_8_);
          dVar39 = -*(double *)(lVar3 + 0x240);
          dVar46 = -*(double *)(lVar3 + 0x248);
          dVar35 = *(double *)(lVar3 + 0x250) * -1.0;
          dVar49 = *(double *)(lVar3 + 600) * 1.0;
          dVar1 = *(double *)(lVar3 + 0x260) * dVar1;
          dVar2 = *(double *)(lVar3 + 0x268) * dVar2;
          dStack_140 = 0.0;
          dVar47 = *(double *)(lVar3 + 0x270) * local_148;
          dVar34 = dVar2 * dVar39 - dVar46 * dVar1;
          dVar44 = dVar47 * dVar46 - dVar35 * dVar2;
          dVar38 = dVar1 * dVar35 - dVar39 * dVar47;
          dVar44 = dVar44 + dVar44;
          dVar38 = dVar38 + dVar38;
          dVar34 = dVar34 + dVar34;
          local_158 = 0.0 - ((dVar34 * dVar46 - dVar38 * dVar35) + dVar49 * dVar44 + dVar1);
          dStack_150 = 0.0 - (dVar34 * *(double *)(lVar3 + 0x240) + dVar35 * dVar44 +
                             dVar49 * dVar38 + dVar2);
          local_178 = (longlong *)
                      (0.0 - (dVar49 * dVar34 + dVar47 + (dVar38 * dVar39 - dVar44 * dVar46)));
          uStack_170 = 0;
        }
        dVar34 = dVar35 + dVar35;
        dVar1 = dVar39 + dVar39;
        dVar2 = dVar46 + dVar46;
        auVar52._0_8_ = (double)CONCAT44(uVar43,uVar42) * (dVar2 * dVar39 - dVar34 * dVar49);
        auVar52._8_8_ = local_148 * (dVar34 * dVar46 - dVar1 * dVar49);
        auVar50._0_8_ = (dVar2 * dVar49 + dVar39 * dVar34) * local_148;
        auVar50._8_8_ = (dVar1 * dVar49 + dVar39 * dVar1) * dStack_140;
        dVar47 = (1.0 - (dVar1 * dVar39 + dVar2 * dVar46)) * local_148;
        auVar51 = blendpd(auVar50,auVar52,2);
        dVar38 = (1.0 - (dVar34 * dVar35 + dVar2 * dVar46)) * (double)CONCAT44(uVar41,uVar40);
        dVar35 = (1.0 - (dVar34 * dVar35 + dVar1 * dVar39)) * (double)CONCAT44(uVar43,uVar42);
        auVar53._8_4_ = SUB84(dVar35,0);
        auVar53._0_8_ = dVar38;
        auVar53._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        auVar53 = blendpd(auVar52,auVar53,2);
        dVar44 = (dVar34 * dVar49 + dVar2 * dVar39) * (double)CONCAT44(uVar41,uVar40);
        dVar46 = (dVar1 * dVar49 + dVar34 * dVar46) * (double)CONCAT44(uVar43,uVar42);
        dVar34 = (dVar39 * dVar34 - dVar2 * dVar49) * (double)CONCAT44(uVar41,uVar40);
        dVar1 = (dVar36 + dVar31) * 0.5;
        dVar2 = (dVar24 + dVar33) * 0.5;
        dVar15 = (dVar15 + (double)plVar37) * 0.5;
        dVar31 = (dVar31 - dVar36) * 0.5;
        dVar33 = (dVar33 - dVar24) * 0.5;
        dVar32 = dVar32 * 0.5;
        dVar36 = dVar15 * auVar51._0_8_ + dVar2 * auVar53._0_8_ + dVar1 * dVar38 + local_158;
        dVar35 = dVar15 * auVar51._8_8_ + dVar2 * auVar53._8_8_ + dVar1 * dVar44 + dStack_150;
        dVar38 = ABS(dVar32 * auVar51._0_8_) + ABS(auVar53._0_8_ * dVar33) + ABS(dVar31 * dVar38);
        dVar39 = ABS(dVar32 * auVar51._8_8_) + ABS(auVar53._8_8_ * dVar33) + ABS(dVar31 * dVar44);
        dVar24 = dVar35 - dVar39;
        dVar31 = ABS(dVar33 * dVar46) + ABS(dVar31 * dVar34) + ABS(dVar32 * dVar47);
        dVar15 = dVar15 * dVar47 + dVar2 * dVar46 + dVar1 * dVar34 + (double)local_178;
        auVar51._8_4_ = SUB84(dVar24,0);
        auVar51._0_8_ = dVar36 - dVar38;
        auVar51._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        *(undefined1 (*) [16])(lVar3 + 0x7f0) = auVar51;
        *(double *)(lVar3 + 0x800) = dVar15 - dVar31;
        *(double *)(lVar3 + 0x808) = dVar38 + dVar36;
        *(double *)(lVar3 + 0x810) = dVar39 + dVar35;
        *(double *)(lVar3 + 0x818) = dVar15 + dVar31;
        *(undefined1 *)(lVar3 + 0x820) = 1;
        local_188 = plVar37;
      }
    }
    lVar9 = *(longlong *)(lVar3 + 0x660);
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar9);
    }
    local_100 = *(double *)(lVar9 + 0x210) + *(double *)(lVar9 + 0x228);
    local_108 = *(double *)(lVar9 + 0x208) + *(double *)(lVar9 + 0x220);
    local_110 = *(double *)(lVar9 + 0x200) + *(double *)(lVar9 + 0x218);
    local_118 = *(double *)(lVar9 + 0x210) - *(double *)(lVar9 + 0x228);
    local_120 = *(double *)(lVar9 + 0x208) - *(double *)(lVar9 + 0x220);
    local_128 = *(double *)(lVar9 + 0x200) - *(double *)(lVar9 + 0x218);
    local_f8 = 1;
    local_12c = *(undefined4 *)(lVar3 + 0x728);
    local_138 = *(undefined8 *)(lVar3 + 0x720);
    local_130 = 0x80;
    FUN_147b04a28(param_2,&local_138,&local_128,(undefined4 *)(lVar3 + 0x7f0));
  }
  else {
    *(undefined8 *)(lVar3 + 0x818) = DAT_14c8464f0;
    uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(lVar3 + 0x808) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(lVar3 + 0x810) = uVar5;
    uVar42 = DAT_14c8464e8._4_4_;
    uVar41 = (undefined4)DAT_14c8464e8;
    uVar40 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(lVar3 + 0x7f0) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(lVar3 + 0x7f4) = uVar40;
    *(undefined4 *)(lVar3 + 0x7f8) = uVar41;
    *(undefined4 *)(lVar3 + 0x7fc) = uVar42;
    *(undefined8 *)(lVar3 + 0x800) = DAT_14c8464f0;
    *(undefined1 *)(lVar3 + 0x820) = 0;
    lVar9 = *(longlong *)(lVar3 + 0x720);
    plVar37 = (longlong *)(param_2 + 0xb0);
    unaff_EBP = *(uint *)(param_2 + 0x1b0);
    if ((*(char *)(param_2 + 0x90) == '\0' && *(char *)(param_2 + 0x91) == '\0') &&
       (uVar14 = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x80), uVar14 != unaff_EBP)) {
      if (uVar14 != 0) {
        plVar25 = (longlong *)(param_2 + 0x40);
        FUN_140250dc8(plVar37);
        uVar14 = *(uint *)(param_2 + 0x48);
        iVar20 = *(int *)(param_2 + 0x78);
        if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
          iVar20 = *(int *)(param_2 + 0x70);
        }
        iVar18 = iVar20 + 7;
        if (-1 < iVar20) {
          iVar18 = iVar20;
        }
        uVar19 = iVar18 >> 3;
        dVar15 = (double)(ulonglong)uVar19;
        uVar28 = iVar20 % 8;
        dVar24 = (double)(ulonglong)uVar28;
        unaff_EBP = 0;
        uVar21 = 0;
        if ((-8 < iVar20) && ((int)uVar19 < (int)uVar14)) {
          uVar21 = *(uint *)(*plVar25 + (longlong)(int)uVar19 * 4) & 0x33333333;
        }
        bVar10 = (char)uVar28 * '\x04' & 0x1f;
        uVar22 = uVar21 >> bVar10;
        if ((int)uVar19 < (int)uVar14) {
          if (uVar21 >> bVar10 == 0) {
            dVar24 = (double)(longlong)(int)uVar19;
            do {
              if ((double)((longlong)(int)uVar14 - 1U) == dVar24) {
                bVar6 = false;
                unaff_EBP = 0;
                dVar15 = (double)(ulonglong)uVar14;
                local_188 = (longlong *)((ulonglong)local_188._4_4_ << 0x20);
                goto LAB_1435418ac;
              }
              dVar15 = (double)((longlong)dVar24 + 1);
              uVar22 = *(uint *)(*plVar25 + 4 + (longlong)dVar24 * 4) & 0x33333333;
              dVar24 = dVar15;
            } while (uVar22 == 0);
            uVar28 = 0;
          }
          uVar14 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
            }
          }
          local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar22 >> ((byte)uVar14 & 0x1c));
          bVar6 = false;
          unaff_EBP = 0;
          dVar24 = (double)(ulonglong)((uVar14 >> 2) + uVar28);
        }
        else {
          local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar22);
          bVar6 = false;
        }
        goto LAB_1435418af;
      }
    }
    else if (unaff_EBP != 0) {
      FUN_140250dc8(plVar37,unaff_EBP);
      plVar25 = (longlong *)0x0;
      bVar6 = true;
      dVar15 = 0.0;
LAB_1435418ac:
      dVar24 = 0.0;
LAB_1435418af:
      fVar26 = 0.0;
LAB_1435418b2:
      do {
        fVar13 = (float)(SUB84(dVar24,0) + SUB84(dVar15,0) * 8);
        do {
          do {
            if (bVar6) {
              fVar29 = fVar26;
              if ((int)unaff_EBP <= (int)fVar26) goto LAB_1435421a9;
            }
            else {
              iVar20 = *(int *)((longlong)plVar25 + 0x3c) + 1;
              if ((int)plVar25[6] < iVar20) {
                iVar20 = (int)plVar25[6];
              }
              fVar29 = fVar13;
              if (iVar20 <= (int)fVar13) goto LAB_1435421a9;
            }
            lVar8 = (longlong)(int)fVar29 * 0x80;
            fVar29 = (float)*(double *)(lVar9 + 0x10 + lVar8);
            dVar31 = *(double *)(lVar9 + 8 + lVar8);
            dVar32 = *(double *)(lVar9 + lVar8);
            fVar30 = (float)*(double *)(lVar9 + 0x30 + lVar8);
            dVar33 = *(double *)(lVar9 + 0x28 + lVar8);
            dVar36 = *(double *)(lVar9 + 0x20 + lVar8);
            dVar1 = *(double *)(lVar9 + 0x50 + lVar8);
            dVar2 = *(double *)(lVar9 + 0x48 + lVar8);
            dVar34 = *(double *)(lVar9 + 0x40 + lVar8);
            dVar38 = *(double *)(lVar9 + 0x70 + lVar8);
            dVar35 = *(double *)(lVar9 + 0x68 + lVar8);
            dVar39 = *(double *)(lVar9 + 0x60 + lVar8);
            iVar20 = *(int *)(param_2 + 0xb8);
            *(uint *)(param_2 + 0xb8) = iVar20 + 1U;
            if (*(uint *)(param_2 + 0xbc) < iVar20 + 1U) {
              local_180 = fVar29;
              local_17c = fVar13;
              local_178 = plVar25;
              local_15c = fVar30;
              local_158 = dVar24;
              local_148 = dVar15;
              FUN_14026f43e(plVar37,iVar20);
              dVar15 = local_148;
              plVar25 = local_178;
              dVar24 = local_158;
              fVar29 = local_180;
              fVar13 = local_17c;
              fVar30 = local_15c;
            }
            lVar8 = *plVar37;
            lVar12 = (longlong)iVar20 * 0x30;
            *(float *)(lVar8 + lVar12) = (float)dVar32;
            *(float *)(lVar8 + 4 + lVar12) = (float)dVar31;
            *(float *)(lVar8 + 8 + lVar12) = fVar29;
            *(float *)(lVar8 + 0xc + lVar12) = (float)dVar36;
            *(float *)(lVar8 + 0x10 + lVar12) = (float)dVar33;
            *(float *)(lVar8 + 0x14 + lVar12) = fVar30;
            *(float *)(lVar8 + 0x18 + lVar12) = (float)dVar34;
            *(float *)(lVar8 + 0x1c + lVar12) = (float)dVar2;
            *(float *)(lVar8 + 0x20 + lVar12) = (float)dVar1;
            *(float *)(lVar8 + 0x24 + lVar12) = (float)dVar39;
            *(float *)(lVar8 + 0x28 + lVar12) = (float)dVar35;
            *(float *)(lVar8 + 0x2c + lVar12) = (float)dVar38;
            fVar26 = (float)((int)fVar26 + 1);
          } while (bVar6);
          uVar14 = *(uint *)(plVar25 + 1);
        } while ((int)uVar14 <= SUB84(dVar15,0));
        dVar15 = (double)(longlong)SUB84(dVar15,0);
        uVar21 = (uint)local_188 & 0xfffffffc;
        if (((ulonglong)local_188 & 0xfffffffc) == 0) {
          dVar31 = dVar15;
          do {
            local_188 = (longlong *)((ulonglong)local_188 & 0xffffffff00000000);
            if ((double)((longlong)(int)uVar14 - 1U) == dVar31) {
              dVar15 = (double)(ulonglong)uVar14;
              dVar24 = 0.0;
              goto LAB_1435418b2;
            }
            dVar15 = (double)((longlong)dVar31 + 1);
            dVar24 = 0.0;
            uVar21 = *(uint *)(*plVar25 + 4 + (longlong)dVar31 * 4) & 0x33333333;
            dVar31 = dVar15;
          } while (uVar21 == 0);
        }
        uVar14 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar21 >> ((byte)uVar14 & 0x1c));
        dVar24 = (double)(ulonglong)((uVar14 >> 2) + SUB84(dVar24,0));
      } while( true );
    }
    *(undefined4 *)(param_2 + 0xb8) = 0;
    if (*(int *)(param_2 + 0xbc) < 0) {
      FUN_140250e1e(plVar37,0);
    }
  }
LAB_1435421a9:
  if ((*(ushort *)(param_2 + 0xf0) & 4) != 0) {
    if (*(int *)(lVar3 + 0x738) == 0) {
      *(ushort *)(param_2 + 0xf0) = *(ushort *)(param_2 + 0xf0) & 0xfffb;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x730);
      plVar37 = (longlong *)(param_2 + 0xc0);
      uVar14 = *(uint *)(param_2 + 0x1b0);
      uVar16 = (ulonglong)uVar14;
      if ((*(char *)(param_2 + 0x90) == '\0' && *(char *)(param_2 + 0x91) == '\0') &&
         (uVar21 = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x80), uVar21 != uVar14)) {
        if (uVar21 != 0) {
          plVar25 = (longlong *)(param_2 + 0x40);
          FUN_140250dc8();
          uVar21 = *(uint *)(param_2 + 0x48);
          iVar18 = *(int *)(param_2 + 0x78);
          if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
            iVar18 = *(int *)(param_2 + 0x70);
          }
          iVar20 = iVar18 + 7;
          if (-1 < iVar18) {
            iVar20 = iVar18;
          }
          uVar28 = iVar20 >> 3;
          uVar16 = (ulonglong)uVar28;
          iVar20 = iVar18 % 8;
          uVar14 = 0;
          uVar19 = 0;
          if ((-8 < iVar18) && ((int)uVar28 < (int)uVar21)) {
            uVar19 = *(uint *)(*plVar25 + (longlong)(int)uVar28 * 4) & 0x33333333;
          }
          unaff_EBP = uVar19 >> ((char)iVar20 * '\x04' & 0x1fU);
          if ((int)uVar28 < (int)uVar21) {
            if (unaff_EBP == 0) {
              uVar23 = (longlong)(int)uVar28;
              do {
                if ((longlong)(int)uVar21 - 1U == uVar23) {
                  uVar23 = 0;
                  uVar16 = (ulonglong)uVar21;
                  unaff_EBP = 0;
                  iVar20 = 0;
                  uVar14 = 0;
                  goto LAB_14354233b;
                }
                uVar16 = uVar23 + 1;
                unaff_EBP = *(uint *)(*plVar25 + 4 + uVar23 * 4) & 0x33333333;
                uVar23 = uVar16;
              } while (unaff_EBP == 0);
              iVar20 = 0;
            }
            uVar14 = 0;
            if (unaff_EBP != 0) {
              for (; (unaff_EBP >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            unaff_EBP = unaff_EBP >> ((byte)uVar14 & 0x1c);
            iVar20 = (uVar14 >> 2) + iVar20;
            uVar23 = 0;
            uVar14 = 0;
          }
          else {
            uVar23 = 0;
          }
LAB_14354233b:
          iVar18 = 0;
LAB_14354233d:
          do {
            iVar4 = (int)uVar16;
            iVar27 = iVar20 + iVar4 * 8;
            do {
              if ((char)uVar23 == '\0') {
                iVar11 = *(int *)((longlong)plVar25 + 0x3c) + 1;
                if ((int)plVar25[6] < iVar11) {
                  iVar11 = (int)plVar25[6];
                }
                iVar7 = iVar27;
                if (iVar11 <= iVar27) goto LAB_1435421b8;
              }
              else {
                iVar7 = iVar18;
                if ((int)uVar14 <= iVar18) goto LAB_1435421b8;
              }
              lVar9 = (longlong)iVar7 * 0x80;
              fVar26 = (float)*(double *)(lVar3 + 0x10 + lVar9);
              dVar15 = *(double *)(lVar3 + 8 + lVar9);
              dVar24 = *(double *)(lVar3 + lVar9);
              fVar13 = (float)*(double *)(lVar3 + 0x30 + lVar9);
              dVar31 = *(double *)(lVar3 + 0x28 + lVar9);
              dVar32 = *(double *)(lVar3 + 0x20 + lVar9);
              dVar33 = *(double *)(lVar3 + 0x50 + lVar9);
              dVar36 = *(double *)(lVar3 + 0x48 + lVar9);
              dVar1 = *(double *)(lVar3 + 0x40 + lVar9);
              dVar2 = *(double *)(lVar3 + 0x70 + lVar9);
              dVar34 = *(double *)(lVar3 + 0x68 + lVar9);
              dVar38 = *(double *)(lVar3 + 0x60 + lVar9);
              iVar11 = *(int *)(param_2 + 200);
              *(uint *)(param_2 + 200) = iVar11 + 1U;
              if (*(uint *)(param_2 + 0xcc) < iVar11 + 1U) {
                local_148 = (double)CONCAT44(local_148._4_4_,uVar14);
                local_158 = (double)CONCAT44(local_158._4_4_,(int)uVar23);
                local_188 = plVar37;
                local_180 = fVar13;
                local_17c = fVar26;
                local_178 = plVar25;
                FUN_14026f43e(plVar37,iVar11);
                uVar23 = (ulonglong)local_158 & 0xffffffff;
                plVar37 = local_188;
                plVar25 = local_178;
                fVar26 = local_17c;
                uVar14 = local_148._0_4_;
                fVar13 = local_180;
              }
              lVar9 = *plVar37;
              lVar8 = (longlong)iVar11 * 0x30;
              *(float *)(lVar9 + lVar8) = (float)dVar24;
              *(float *)(lVar9 + 4 + lVar8) = (float)dVar15;
              *(float *)(lVar9 + 8 + lVar8) = fVar26;
              *(float *)(lVar9 + 0xc + lVar8) = (float)dVar32;
              *(float *)(lVar9 + 0x10 + lVar8) = (float)dVar31;
              *(float *)(lVar9 + 0x14 + lVar8) = fVar13;
              *(float *)(lVar9 + 0x18 + lVar8) = (float)dVar1;
              *(float *)(lVar9 + 0x1c + lVar8) = (float)dVar36;
              *(float *)(lVar9 + 0x20 + lVar8) = (float)dVar33;
              *(float *)(lVar9 + 0x24 + lVar8) = (float)dVar38;
              *(float *)(lVar9 + 0x28 + lVar8) = (float)dVar34;
              *(float *)(lVar9 + 0x2c + lVar8) = (float)dVar2;
              iVar18 = iVar18 + 1;
            } while (((char)uVar23 != '\0') ||
                    (uVar21 = *(uint *)(plVar25 + 1), (int)uVar21 <= iVar4));
            uVar16 = (ulonglong)iVar4;
            uVar19 = unaff_EBP & 0xfffffffc;
            if ((unaff_EBP & 0xfffffffc) == 0) {
              uVar17 = uVar16;
              do {
                unaff_EBP = 0;
                if ((longlong)(int)uVar21 - 1U == uVar17) {
                  uVar16 = (ulonglong)uVar21;
                  iVar20 = 0;
                  goto LAB_14354233d;
                }
                uVar16 = uVar17 + 1;
                uVar23 = uVar23 & 0xffffffff;
                iVar20 = 0;
                uVar19 = *(uint *)(*plVar25 + 4 + uVar17 * 4) & 0x33333333;
                uVar17 = uVar16;
              } while (uVar19 == 0);
            }
            uVar21 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar20 = (uVar21 >> 2) + iVar20;
            unaff_EBP = uVar19 >> ((byte)uVar21 & 0x1c);
          } while( true );
        }
      }
      else if (uVar14 != 0) {
        FUN_140250dc8(plVar37,uVar14);
        plVar25 = (longlong *)0x0;
        uVar23 = CONCAT71((int7)(uVar16 >> 8),1);
        uVar16 = 0;
        iVar20 = 0;
        goto LAB_14354233b;
      }
      *(undefined4 *)(param_2 + 200) = 0;
      if (*(int *)(param_2 + 0xcc) < 0) {
        FUN_140250e1e(plVar37,0);
      }
    }
  }
LAB_1435421b8:
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143542648 FUN_143542648 body=29 status=ok
// SIG undefined FUN_143542648(void)

undefined8 FUN_143542648(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143542666 FUN_143542666 body=408 status=ok
// SIG undefined FUN_143542666(void)

void FUN_143542666(undefined4 *param_1,longlong param_2,int *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_1a0 = *param_4;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_1a0);
  iVar1 = *param_3;
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
  local_38 = 0;
  local_118 = 0x400000000;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0xffffffff;
  local_cc = 0xff;
  local_ca = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  lVar3 = param_2 + 0x158;
  if ((*(byte *)(param_2 + 0x5c) & 8) == 0) {
    lVar3 = 0;
  }
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 4) + 0x6b0))) &&
     (lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 4) + 0x6a8) + 0x40 + (longlong)iVar1 * 0xa0),
     lVar2 != 0)) {
    lVar3 = lVar2;
  }
  local_1a8 = CONCAT44(local_1a8._4_4_,*param_1);
  local_198 = &local_188;
  local_190 = &local_a8;
  FUN_14004283b(param_2 + 0x90,lVar3,*(undefined8 *)(param_1 + 2),0);
  local_1a8 = param_5;
  FUN_147af7088(DAT_14c760db4,uVar4 & 0xffffffff,&local_188,&local_a8);
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143542800 FUN_143542800 body=1118 status=ok
// SIG undefined FUN_143542800(void)

void FUN_143542800(longlong *param_1,_struct_19 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  DWORD DVar4;
  _struct_19 _Var5;
  _struct_19 _Var6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  _struct_19 *p_Var12;
  LARGE_INTEGER *pLVar13;
  LARGE_INTEGER *pLVar14;
  bool bVar15;
  undefined1 auStack_128 [44];
  DWORD local_fc;
  LONG local_f8;
  DWORD local_f4;
  LONG local_f0;
  DWORD local_ec;
  _struct_19 local_e8;
  _struct_19 local_e0;
  _struct_19 local_d8;
  _struct_19 local_d0;
  undefined1 local_c1;
  DWORD local_c0;
  undefined1 local_bc;
  LARGE_INTEGER local_b8 [2];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = *param_1;
  if (lVar11 == 0) goto LAB_143542872;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar11 + 0x1c);
    if ((2 < iVar2) && (bVar8 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar8 < 3)) {
      local_b8[0].QuadPart = 0x20100000001;
      local_b8[1] = (LARGE_INTEGER)0x30100000101;
      local_a8 = DAT_14c7585c8;
      local_a4 = DAT_14c7585c8 | 0x200;
      local_a0 = DAT_14c7585c8 | 0x100;
      local_9c = DAT_14c7585c8 | 0x300;
      local_98 = 0;
      uStack_94 = 0x200;
      uStack_90 = 0x100;
      uStack_8c = 0x300;
      if (*(byte *)((longlong)local_b8 + (ulonglong)(iVar2 - 3) * 4) == bVar8) goto LAB_143542c52;
    }
    QueryPerformanceCounter(local_b8);
    local_b8[1] = (LARGE_INTEGER)0xffffffffffffffff;
    FUN_140056092(lVar11,local_b8);
  }
  else {
LAB_143542c52:
    FUN_140082318(lVar11);
  }
LAB_143542872:
  *(int *)(param_1 + 2) = (int)param_3[1];
  param_1[1] = *param_3;
  p_Var12 = param_2;
  pLVar13 = local_b8;
  for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
    pLVar13->s = *p_Var12;
    p_Var12 = p_Var12 + 1;
    pLVar13 = pLVar13 + 1;
  }
  local_d0 = param_2[0xd];
  local_d8 = param_2[0xe];
  param_2[0xd].LowPart = 0;
  param_2[0xd].HighPart = 0;
  param_2[0xe].LowPart = 0;
  param_2[0xe].HighPart = 0;
  local_ec = param_2[0xf].LowPart;
  local_f0 = param_2[0xf].HighPart;
  param_2[0xf].LowPart = 0;
  param_2[0xf].HighPart = 0;
  local_e0 = param_2[0x10];
  param_2[0x10].LowPart = 0;
  param_2[0x10].HighPart = 0;
  local_f4 = param_2[0x11].LowPart;
  local_f8 = param_2[0x11].HighPart;
  param_2[0x11].LowPart = 0;
  param_2[0x11].HighPart = 0;
  local_e8 = param_2[0x12];
  param_2[0x12].LowPart = 0;
  param_2[0x12].HighPart = 0;
  local_fc = param_2[0x13].LowPart;
  LVar3 = param_2[0x13].HighPart;
  param_2[0x13].LowPart = 0;
  param_2[0x13].HighPart = 0;
  local_bc = (undefined1)param_2[0x14].HighPart;
  local_c0 = param_2[0x14].LowPart;
  DVar4 = param_2[0x15].LowPart;
  _Var5 = param_2[0x16];
  _Var6 = param_2[0x17];
  param_2[0x16].LowPart = 0;
  param_2[0x16].HighPart = 0;
  param_2[0x17].LowPart = 0;
  param_2[0x17].HighPart = 0;
  puVar9 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x168,0x10);
  *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
  puVar9[1] = &DAT_100000002;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  puVar9[6] = 0;
  puVar9[7] = 0x100000000;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0xe800000000000020;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0x100000000;
  *(undefined2 *)(puVar9 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar9 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar9 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar9 + 8);
  }
  *puVar9 = &PTR_FUN_14a975368;
  if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
  }
  puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar9[9] = puVar9;
  puVar9[10] = puVar9;
  lVar11 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
  ;
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar11 + 0x30);
  }
  puVar9[0xf] = uVar10;
  puVar9[0x10] = 0xc8000052a5d4be00;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
  pLVar13 = local_b8;
  pLVar14 = (LARGE_INTEGER *)(puVar9 + 0x15);
  for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pLVar14 = *pLVar13;
    pLVar13 = pLVar13 + 1;
    pLVar14 = pLVar14 + 1;
  }
  *(_struct_19 *)(puVar9 + 0x22) = local_d0;
  *(_struct_19 *)(puVar9 + 0x23) = local_d8;
  *(DWORD *)(puVar9 + 0x24) = local_ec;
  *(LONG *)((longlong)puVar9 + 0x124) = local_f0;
  *(_struct_19 *)(puVar9 + 0x25) = local_e0;
  *(DWORD *)(puVar9 + 0x26) = local_f4;
  *(LONG *)((longlong)puVar9 + 0x134) = local_f8;
  *(_struct_19 *)(puVar9 + 0x27) = local_e8;
  *(DWORD *)(puVar9 + 0x28) = local_fc;
  *(LONG *)((longlong)puVar9 + 0x144) = LVar3;
  *(DWORD *)(puVar9 + 0x29) = local_c0;
  *(undefined1 *)((longlong)puVar9 + 0x14c) = local_bc;
  *(DWORD *)(puVar9 + 0x2a) = DVar4;
  *(_struct_19 *)(puVar9 + 0x2b) = _Var5;
  *(_struct_19 *)(puVar9 + 0x2c) = _Var6;
  *puVar9 = &PTR_FUN_14a975358;
  local_c1 = 1;
  FUN_1447439e4(puVar9);
  puVar7 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143542c60 FUN_143542c60 body=449 status=ok
// SIG undefined FUN_143542c60(void)

void FUN_143542c60(float *param_1)

{
  float fVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x2c);
  if ((float *)(plVar2 + 0x2d) != param_1 + 0x20) {
    if (plVar2[0x2d] != 0) {
      FUN_1400020a8();
    }
    plVar2[0x2d] = *(longlong *)(param_1 + 0x20);
    param_1[0x20] = 0.0;
    param_1[0x21] = 0.0;
    *(float *)(plVar2 + 0x2e) = param_1[0x22];
    *(float *)((longlong)plVar2 + 0x174) = param_1[0x23];
    param_1[0x22] = 0.0;
    param_1[0x23] = 0.0;
    if (plVar2[0x2f] != 0) {
      FUN_1400020a8();
    }
    plVar2[0x2f] = *(longlong *)(param_1 + 0x24);
    param_1[0x24] = 0.0;
    param_1[0x25] = 0.0;
    *(float *)(plVar2 + 0x30) = param_1[0x26];
    *(float *)((longlong)plVar2 + 0x184) = param_1[0x27];
    param_1[0x26] = 0.0;
    param_1[0x27] = 0.0;
  }
  *(undefined1 *)((longlong)plVar2 + 0x18c) = *(undefined1 *)(param_1 + 0x29);
  *(float *)(plVar2 + 0x31) = param_1[0x28];
  *(undefined2 *)(plVar2 + 0x24) = *(undefined2 *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0xc);
  lVar7 = *(longlong *)(param_1 + 0xe);
  fVar1 = param_1[0x10];
  fVar3 = param_1[0x11];
  fVar4 = param_1[0x12];
  fVar5 = param_1[0x13];
  lVar8 = *(longlong *)(param_1 + 0x16);
  plVar2[5] = *(longlong *)(param_1 + 0x14);
  plVar2[6] = lVar8;
  *(float *)(plVar2 + 3) = fVar1;
  *(float *)((longlong)plVar2 + 0x1c) = fVar3;
  *(float *)(plVar2 + 4) = fVar4;
  *(float *)((longlong)plVar2 + 0x24) = fVar5;
  plVar2[1] = lVar6;
  plVar2[2] = lVar7;
  fVar1 = param_1[7];
  fVar3 = param_1[8];
  fVar4 = param_1[9];
  *(float *)(plVar2 + 7) = param_1[6];
  *(float *)((longlong)plVar2 + 0x3c) = fVar1;
  *(float *)(plVar2 + 8) = fVar3;
  *(float *)((longlong)plVar2 + 0x44) = fVar4;
  plVar2[9] = *(longlong *)(param_1 + 10);
  FUN_14026f33c(&local_2c,param_1 + 0xc,param_1[0x19]);
  *param_1 = *param_1 - local_2c;
  param_1[1] = param_1[1] - local_28;
  param_1[2] = param_1[2] - local_24;
  param_1[3] = local_2c + param_1[3];
  param_1[4] = local_28 + param_1[4];
  fVar1 = param_1[5];
  param_1[5] = local_24 + fVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143542e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x1a,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58,param_1 + 0x1a,local_24 + fVar1,param_1 + 0x1c);
}



// FUNCTION 143542e22 FUN_143542e22 body=118 status=ok
// SIG undefined FUN_143542e22(void)

undefined8 * FUN_143542e22(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 143542e98 FUN_143542e98 body=279 status=ok
// SIG undefined FUN_143542e98(void)

void FUN_143542e98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  
  lVar6 = DAT_14cae4ff0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar9 = 0;
  }
  else if (iVar4 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  fVar3 = *(float *)(lVar6 + uVar9 * 4);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    FUN_14000f986();
  }
  FUN_143542c60(param_1 + 0xa8);
  plVar5 = *(longlong **)(param_1 + 0x160);
  if (plVar5 != (longlong *)0x0) {
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
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x110);
  if (lVar6 == 0) {
    return;
  }
  FUN_14006ea12(lVar6);
  FUN_1400020a8(lVar6);
  return;
}



// FUNCTION 143542fb0 FUN_143542fb0 body=110 status=ok
// SIG undefined FUN_143542fb0(void)

undefined8 * FUN_143542fb0(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14354304c FUN_14354304c body=29 status=ok
// SIG undefined FUN_14354304c(void)

void FUN_14354304c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14354306a FUN_14354306a body=173 status=ok
// SIG undefined FUN_14354306a(void)

undefined8 * FUN_14354306a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_14a975380;
  plVar3 = (longlong *)param_1[0x1b];
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
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    FUN_14006ea12(lVar4);
    FUN_1400020a8(lVar4);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143543118 FUN_143543118 body=282 status=ok
// SIG undefined FUN_143543118(void)

undefined8 * FUN_143543118(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143541375);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143543232 FUN_143543232 body=239 status=ok
// SIG undefined FUN_143543232(void)

void FUN_143543232(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x15] == 0) {
    FUN_143542c60(param_1 + 0x18);
  }
  else {
    FUN_143542800(param_1[0x15],param_1 + 0x18,param_1 + 0x16);
  }
  plVar3 = (longlong *)param_1[0x2f];
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
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x25];
  if (lVar4 != 0) {
    FUN_14006ea12(lVar4);
    FUN_1400020a8(lVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435432ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143543322 FUN_143543322 body=945 status=ok
// SIG undefined FUN_143543322(void)

void FUN_143543322(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_248 [47];
  undefined1 local_219;
  LARGE_INTEGER local_218;
  undefined8 uStack_210;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_14354338f;
  if (DAT_14c87e718 == '\0') {
    iVar3 = *(int *)(lVar4 + 0x1c);
    if ((2 < iVar3) && (bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar7 < 3)) {
      local_218.QuadPart = 0x20100000001;
      uStack_210 = 0x30100000101;
      local_208 = DAT_14c7585c8;
      local_204 = DAT_14c7585c8 | 0x200;
      local_200 = DAT_14c7585c8 | 0x100;
      local_1fc = DAT_14c7585c8 | 0x300;
      local_1f8 = 0;
      uStack_1f4 = 0x200;
      uStack_1f0 = 0x100;
      uStack_1ec = 0x300;
      if (*(byte *)((longlong)&local_218 + (ulonglong)(iVar3 - 3) * 4) == bVar7) goto LAB_1435436c7;
    }
    QueryPerformanceCounter(&local_218);
    uStack_210 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_218);
  }
  else {
LAB_1435436c7:
    FUN_140082318(lVar4);
  }
LAB_14354338f:
  *(int *)(param_1 + 2) = (int)param_3[1];
  param_1[1] = *param_3;
  FUN_144b24618(&local_218,param_2);
  local_58 = *(undefined8 *)(param_2 + 0x1c0);
  plStack_50 = *(longlong **)(param_2 + 0x1c8);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  local_48 = *(undefined4 *)(param_2 + 0x1d0);
  puVar8 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x290,0x10);
  *puVar8 = UE::Tasks::Private::FTaskBase::vftable;
  puVar8[1] = &DAT_100000002;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  puVar8[6] = 0;
  puVar8[7] = 0x100000000;
  *(undefined1 *)(puVar8 + 8) = 1;
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0xe800000000000020;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0x100000000;
  *(undefined2 *)(puVar8 + 0x14) = 0;
  LOCK();
  bVar10 = *(char *)(puVar8 + 8) == '\x01';
  if (bVar10) {
    *(char *)(puVar8 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_14008cdb0(puVar8 + 8);
  }
  *puVar8 = &PTR_FUN_14a9753f0;
  if (*(code **)(puVar8[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar8[0xe] + 0x18))(puVar8 + 0xe,puVar8 + 9);
  }
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar8[9] = puVar8;
  puVar8[10] = puVar8;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar8[0xf] = uVar9;
  puVar8[0x10] = 0xc8000052a5d4be00;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
  FUN_144b24618(puVar8 + 0x16,&local_218);
  puVar8[0x4e] = local_58;
  puVar8[0x4f] = plStack_50;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined4 *)(puVar8 + 0x50) = local_48;
  *puVar8 = &PTR_FUN_14a9753e0;
  local_219 = 1;
  FUN_1447439e4(puVar8);
  puVar5 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_144ae33c0(&local_218);
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435436d4 FUN_1435436d4 body=118 status=ok
// SIG undefined FUN_1435436d4(void)

undefined8 * FUN_1435436d4(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 14354374a FUN_14354374a body=198 status=ok
// SIG undefined FUN_14354374a(void)

void FUN_14354374a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  
  lVar6 = DAT_14cae4ff0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar9 = 0;
  }
  else if (iVar4 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  fVar3 = *(float *)(lVar6 + uVar9 * 4);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    FUN_14000f986();
  }
  (**(code **)(**(longlong **)(param_1 + 0x270) + 0x40))
            (*(longlong **)(param_1 + 0x270),param_1 + 0xb0);
  plVar5 = *(longlong **)(param_1 + 0x278);
  if (plVar5 != (longlong *)0x0) {
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
  FUN_144ae33c0(param_1 + 0xb0);
  return;
}



// FUNCTION 143543810 FUN_143543810 body=110 status=ok
// SIG undefined FUN_143543810(void)

undefined8 * FUN_143543810(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435438b6 FUN_1435438b6 body=29 status=ok
// SIG undefined FUN_1435438b6(void)

void FUN_1435438b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435438d4 FUN_1435438d4 body=104 status=ok
// SIG undefined FUN_1435438d4(void)

undefined8 * FUN_1435438d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a975400;
  plVar3 = (longlong *)param_1[0x3f];
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
  FUN_144ae33c0(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14354393c FUN_14354393c body=282 status=ok
// SIG undefined FUN_14354393c(void)

undefined8 * FUN_14354393c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143541375);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143543a56 FUN_143543a56 body=178 status=ok
// SIG undefined FUN_143543a56(void)

void FUN_143543a56(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x16] == 0) {
    (**(code **)(*(longlong *)param_1[0x52] + 0x40))((longlong *)param_1[0x52],param_1 + 0x1a);
  }
  else {
    FUN_143543322(param_1[0x16],param_1 + 0x1a,param_1 + 0x17);
  }
  plVar3 = (longlong *)param_1[0x53];
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
  FUN_144ae33c0(param_1 + 0x1a);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143543afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143543b08 FUN_143543b08 body=945 status=ok
// SIG undefined FUN_143543b08(void)

void FUN_143543b08(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_248 [47];
  undefined1 local_219;
  LARGE_INTEGER local_218;
  undefined8 uStack_210;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_143543b75;
  if (DAT_14c87e718 == '\0') {
    iVar3 = *(int *)(lVar4 + 0x1c);
    if ((2 < iVar3) && (bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar7 < 3)) {
      local_218.QuadPart = 0x20100000001;
      uStack_210 = 0x30100000101;
      local_208 = DAT_14c7585c8;
      local_204 = DAT_14c7585c8 | 0x200;
      local_200 = DAT_14c7585c8 | 0x100;
      local_1fc = DAT_14c7585c8 | 0x300;
      local_1f8 = 0;
      uStack_1f4 = 0x200;
      uStack_1f0 = 0x100;
      uStack_1ec = 0x300;
      if (*(byte *)((longlong)&local_218 + (ulonglong)(iVar3 - 3) * 4) == bVar7) goto LAB_143543ead;
    }
    QueryPerformanceCounter(&local_218);
    uStack_210 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_218);
  }
  else {
LAB_143543ead:
    FUN_140082318(lVar4);
  }
LAB_143543b75:
  *(int *)(param_1 + 2) = (int)param_3[1];
  param_1[1] = *param_3;
  FUN_144b24618(&local_218,param_2);
  local_58 = *(undefined8 *)(param_2 + 0x1c0);
  plStack_50 = *(longlong **)(param_2 + 0x1c8);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  local_48 = *(undefined4 *)(param_2 + 0x1d0);
  puVar8 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x290,0x10);
  *puVar8 = UE::Tasks::Private::FTaskBase::vftable;
  puVar8[1] = &DAT_100000002;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  puVar8[6] = 0;
  puVar8[7] = 0x100000000;
  *(undefined1 *)(puVar8 + 8) = 1;
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0xe800000000000020;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0x100000000;
  *(undefined2 *)(puVar8 + 0x14) = 0;
  LOCK();
  bVar10 = *(char *)(puVar8 + 8) == '\x01';
  if (bVar10) {
    *(char *)(puVar8 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_14008cdb0(puVar8 + 8);
  }
  *puVar8 = &PTR_FUN_14a975440;
  if (*(code **)(puVar8[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar8[0xe] + 0x18))(puVar8 + 0xe,puVar8 + 9);
  }
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar8[9] = puVar8;
  puVar8[10] = puVar8;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar8[0xf] = uVar9;
  puVar8[0x10] = 0xc8000052a5d4be00;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
  FUN_144b24618(puVar8 + 0x16,&local_218);
  puVar8[0x4e] = local_58;
  puVar8[0x4f] = plStack_50;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined4 *)(puVar8 + 0x50) = local_48;
  *puVar8 = &PTR_FUN_14a975430;
  local_219 = 1;
  FUN_1447439e4(puVar8);
  puVar5 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_144ae33c0(&local_218);
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


