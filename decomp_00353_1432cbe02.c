// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432cbe02 FUN_1432cbe02 body=387 status=ok
// SIG undefined FUN_1432cbe02(void)

void FUN_1432cbe02(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_3c;
  undefined7 local_3b;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 3;
  local_3b = 0;
  uStack_34 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cbf36;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cbf36:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cbf86 FUN_1432cbf86 body=387 status=ok
// SIG undefined FUN_1432cbf86(void)

void FUN_1432cbf86(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_3c;
  undefined7 local_3b;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 4;
  local_3b = 0;
  uStack_34 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cc0ba;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cc0ba:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cc10a FUN_1432cc10a body=397 status=ok
// SIG undefined FUN_1432cc10a(void)

void FUN_1432cc10a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0;
  local_3a = 1;
  local_31 = 0;
  local_39 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cc248;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cc248:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cc298 FUN_1432cc298 body=397 status=ok
// SIG undefined FUN_1432cc298(void)

void FUN_1432cc298(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 3;
  local_3a = 1;
  local_31 = 0;
  local_39 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cc3d6;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cc3d6:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cc426 FUN_1432cc426 body=397 status=ok
// SIG undefined FUN_1432cc426(void)

void FUN_1432cc426(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 2;
  local_3a = 1;
  local_31 = 0;
  local_39 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cc564;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cc564:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cc5b4 FUN_1432cc5b4 body=397 status=ok
// SIG undefined FUN_1432cc5b4(void)

void FUN_1432cc5b4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 4;
  local_3a = 1;
  local_31 = 0;
  local_39 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cc6f2;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cc6f2:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cc742 FUN_1432cc742 body=397 status=ok
// SIG undefined FUN_1432cc742(void)

void FUN_1432cc742(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 1;
  local_3a = 1;
  local_31 = 0;
  local_39 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cc880;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cc880:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cc8d0 FUN_1432cc8d0 body=394 status=ok
// SIG undefined FUN_1432cc8d0(void)

void FUN_1432cc8d0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x100;
  local_3a = 0;
  local_32 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cca0b;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cca0b:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cca5c FUN_1432cca5c body=394 status=ok
// SIG undefined FUN_1432cca5c(void)

void FUN_1432cca5c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x103;
  local_3a = 0;
  local_32 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432ccb97;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432ccb97:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432ccbe8 FUN_1432ccbe8 body=394 status=ok
// SIG undefined FUN_1432ccbe8(void)

void FUN_1432ccbe8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x102;
  local_3a = 0;
  local_32 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432ccd23;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432ccd23:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432ccd74 FUN_1432ccd74 body=394 status=ok
// SIG undefined FUN_1432ccd74(void)

void FUN_1432ccd74(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x104;
  local_3a = 0;
  local_32 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cceaf;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cceaf:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432ccf00 FUN_1432ccf00 body=394 status=ok
// SIG undefined FUN_1432ccf00(void)

void FUN_1432ccf00(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x101;
  local_3a = 0;
  local_32 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cd03b;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cd03b:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cd08c FUN_1432cd08c body=370 status=ok
// SIG undefined FUN_1432cd08c(void)

void FUN_1432cd08c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010103;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cd1af;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cd1af:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cd200 FUN_1432cd200 body=370 status=ok
// SIG undefined FUN_1432cd200(void)

void FUN_1432cd200(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010104;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1432cd323;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cd323:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cd374 FUN_1432cd374 body=374 status=ok
// SIG undefined FUN_1432cd374(void)

void FUN_1432cd374(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004010700;
  local_26 = 4;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_1432cd49b;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cd49b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cd4ec FUN_1432cd4ec body=374 status=ok
// SIG undefined FUN_1432cd4ec(void)

void FUN_1432cd4ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x102000007010700;
  local_26 = 0x2000007;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_1432cd613;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cd613:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cd664 FUN_1432cd664 body=374 status=ok
// SIG undefined FUN_1432cd664(void)

void FUN_1432cd664(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x103000007010700;
  local_26 = 0x3000007;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_1432cd78b;
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
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432cd78b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432cd7dc FUN_1432cd7dc body=31 status=ok
// SIG undefined FUN_1432cd7dc(void)

undefined8 FUN_1432cd7dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432cd808 FUN_1432cd808 body=145 status=ok
// SIG undefined FUN_1432cd808(void)

undefined8 *
FUN_1432cd808(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a452d90;
  uVar4 = DAT_14c873488;
  uVar1 = *param_3;
  uVar2 = *param_2;
  param_1[2] = 0;
  iVar3 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 3) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar3,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar3);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar4;
  return param_1;
}



// FUNCTION 1432cd8a8 FUN_1432cd8a8 body=116 status=ok
// SIG undefined FUN_1432cd8a8(void)

void FUN_1432cd8a8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1432cd91c FUN_1432cd91c body=668 status=ok
// SIG undefined FUN_1432cd91c(void)

void FUN_1432cd91c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1432cd999;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1432cd999:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x38;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x34 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x30 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1432cdbb8 FUN_1432cdbb8 body=585 status=ok
// SIG undefined FUN_1432cdbb8(void)

void FUN_1432cdbb8(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  void *_Src;
  undefined1 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  size_t _Size;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  void **local_78;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (longlong *)param_1[2];
  plVar3 = (longlong *)param_1[1];
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    lVar4 = *(longlong *)(*(longlong *)*param_1 + (longlong)*param_2 * 8);
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar10 = (uint)lVar4 & 0xffff;
    plVar9 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar3[8];
    }
    iVar11 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)plVar3[9] - 1U &
                     (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar10) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar12 = *plVar3 + (longlong)iVar11 * 0x38;
        if (*(longlong *)(*plVar3 + (longlong)iVar11 * 0x38) == lVar4) goto LAB_1432cdc6f;
        iVar11 = *(int *)(lVar12 + 0x30);
      } while (iVar11 != -1);
    }
  }
  lVar12 = 0;
LAB_1432cdc6f:
  local_4c = 0;
  local_50 = 0;
  local_78 = &local_68;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  uVar6 = (**(code **)(*local_70 + 0x20))
                    (local_70,*(undefined8 *)(lVar12 + 0x28),&local_4c,&local_50);
  *(undefined1 *)(lVar12 + 0x20) = uVar6;
  puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar10 = local_4c;
  uVar5 = local_50;
  _Src = local_68;
  uVar2 = *(undefined4 *)param_1[3];
  *puVar7 = 0;
  _Size = (size_t)(int)uStack_60;
  *(int *)(puVar7 + 1) = (int)uStack_60;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  }
  else {
    FUN_1447a127e(puVar7,uStack_60 & 0xffffffff,0);
    memcpy((void *)*puVar7,_Src,_Size);
  }
  *(uint *)(puVar7 + 2) = uVar10;
  *(uint *)((longlong)puVar7 + 0x14) = uVar5;
  *(undefined4 *)(puVar7 + 3) = uVar2;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9 = local_70;
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a452db0;
  plVar8[2] = (longlong)puVar7;
  *(undefined8 **)(lVar12 + 8) = puVar7;
  plVar3 = *(longlong **)(lVar12 + 0x10);
  if (plVar8 == plVar3) {
    if (plVar8 == (longlong *)0x0) goto LAB_1432cdd9b;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1432cdd9b;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar11 = *piVar1;
    UNLOCK();
    plVar3 = plVar8;
  }
  else {
    *(longlong **)(lVar12 + 0x10) = plVar8;
    if (plVar3 == (longlong *)0x0) goto LAB_1432cdd9b;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1432cdd9b;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar11 = *piVar1;
    UNLOCK();
  }
  if (iVar11 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1432cdd9b:
  if (((local_4c < *(uint *)((longlong)plVar9 + 0x22c)) && (local_50 < *(uint *)(plVar9 + 0x46))) &&
     (local_4c < *(uint *)(plVar9 + 0x45))) {
    bVar13 = local_50 < *(uint *)(plVar9 + 0x45);
  }
  else {
    bVar13 = false;
  }
  *(byte *)(lVar12 + 0x18) = *(byte *)(lVar12 + 0x18) & bVar13;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432cde02 FUN_1432cde02 body=47 status=ok
// SIG undefined FUN_1432cde02(void)

void FUN_1432cde02(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 1432cde32 FUN_1432cde32 body=143 status=ok
// SIG undefined FUN_1432cde32(void)

void FUN_1432cde32(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*param_1 + 8);
    local_20 = param_1[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = lVar1;
    FUN_147d28f2e(uVar2,&local_28,2,0x10);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x20) + 0x18);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001432cde83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(longlong *)(*param_1 + 8) + 0x20,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1432cdecc FUN_1432cdecc body=12 status=ok
// SIG undefined FUN_1432cdecc(void)

void FUN_1432cdecc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432cded5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1432cded8 FUN_1432cded8 body=83 status=ok
// SIG undefined FUN_1432cded8(void)

undefined8 * FUN_1432cded8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a452df0;
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



// FUNCTION 1432cdf2c FUN_1432cdf2c body=282 status=ok
// SIG undefined FUN_1432cdf2c(void)

undefined8 * FUN_1432cdf2c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432c7d5e);
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



// FUNCTION 1432ce046 FUN_1432ce046 body=245 status=ok
// SIG undefined FUN_1432ce046(void)

void FUN_1432ce046(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8);
    local_20 = *(longlong *)(param_1 + 0xb8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_147d28f2e(uVar5,&local_28,2,0x10);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x18))(lVar3 + 0x20,&DAT_14ca85100);
  plVar4 = *(longlong **)(param_1 + 0xb8);
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
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ce16a FUN_1432ce16a body=12 status=ok
// SIG undefined FUN_1432ce16a(void)

void FUN_1432ce16a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432ce173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1432ce176 FUN_1432ce176 body=29 status=ok
// SIG undefined FUN_1432ce176(void)

undefined8 FUN_1432ce176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432ce194 FUN_1432ce194 body=282 status=ok
// SIG undefined FUN_1432ce194(void)

undefined8 * FUN_1432ce194(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432c7d5e);
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



// FUNCTION 1432ce2ae FUN_1432ce2ae body=109 status=ok
// SIG undefined FUN_1432ce2ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ce2ae(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1432c5940(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1432c5940(param_1[0x15],param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ce2f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1432ce31c FUN_1432ce31c body=25 status=ok
// SIG undefined FUN_1432ce31c(void)

void FUN_1432ce31c(void)

{
  FUN_1413f4858();
  FUN_14170c56a(&DAT_14caad3e0);
  return;
}



// FUNCTION 1432ce336 FUN_1432ce336 body=40 status=ok
// SIG undefined FUN_1432ce336(void)

void FUN_1432ce336(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_147511ce4(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1432ce368 FUN_1432ce368 body=12 status=ok
// SIG undefined FUN_1432ce368(void)

void FUN_1432ce368(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432ce371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1432ce374 FUN_1432ce374 body=29 status=ok
// SIG undefined FUN_1432ce374(void)

undefined8 FUN_1432ce374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432ce392 FUN_1432ce392 body=282 status=ok
// SIG undefined FUN_1432ce392(void)

undefined8 * FUN_1432ce392(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432c7d5e);
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



// FUNCTION 1432ce4ac FUN_1432ce4ac body=96 status=ok
// SIG undefined FUN_1432ce4ac(void)

ulonglong FUN_1432ce4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_147511ce4(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ce4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1432ce526 FUN_1432ce526 body=12 status=ok
// SIG undefined FUN_1432ce526(void)

void FUN_1432ce526(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432ce52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1432ce532 FUN_1432ce532 body=57 status=ok
// SIG undefined FUN_1432ce532(void)

undefined8 * FUN_1432ce532(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4530a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432ce56c FUN_1432ce56c body=282 status=ok
// SIG undefined FUN_1432ce56c(void)

undefined8 * FUN_1432ce56c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432c7d5e);
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



// FUNCTION 1432ce686 FUN_1432ce686 body=106 status=ok
// SIG undefined FUN_1432ce686(void)

void FUN_1432ce686(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432c6bd2(param_1[0x15],&DAT_14ca85100,param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ce6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432ce6f0 FUN_1432ce6f0 body=3637 status=ok
// SIG undefined FUN_1432ce6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ce6f0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/SlateRHIRenderer",&PTR_FUN_14a44dff0,1,0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/SlateRHIRenderer",&PTR_FUN_14a44e3b0,1,0);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14caabc58);
  if (cVar1 == '\0') {
    _DAT_14caabc58 = 0;
    uRam000000014caabc60 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/SlateRHIRenderer",&PTR_FUN_14a44e730,1,0);
  DAT_14caabc88 = 0xffffffff;
  _DAT_14caabc8c = 0x105;
  DAT_14caabc8e = 0;
  DAT_14caabc90 = 0;
  DAT_14caabc80 = &PTR_FUN_14a4521c0;
  FUN_146337824();
  atexit(FUN_1432b93da);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1432c81d6;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caabd00,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1432c81f0;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caabd70,6,&local_a8);
  local_a0 = FUN_140648aee;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caabe90,&local_a8);
  local_a0 = FUN_14064879a;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caabfb8,&local_a8);
  local_a0 = FUN_1406489d2;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac0e0,&local_a8);
  local_a0 = FUN_1406488b6;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac208,&local_a8);
  local_a0 = FUN_140648c0a;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac330,&local_a8);
  local_a0 = FUN_140648d26;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac458,&local_a8);
  local_a0 = FUN_1460cf884;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac580,&local_a8);
  local_a0 = FUN_140648e42;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac6a8,&local_a8);
  local_a0 = FUN_1460cfaf8;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac7d0,&local_a8);
  local_a0 = FUN_1460cfd6c;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14caac8f8,&local_a8);
  local_a0 = FUN_145f5bdc2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaca40,&local_a8);
  local_a0 = FUN_145f0c11e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caacb68,&local_a8);
  local_a0 = FUN_145efea9c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caacc90,&local_a8);
  local_a0 = FUN_145f3707c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caacdb8,&local_a8);
  local_a0 = FUN_145f37670;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caacee0,&local_a8);
  local_a8 = (code *)0x149fca2ba;
  local_a0 = (code *)CONCAT35(local_a0._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14caacf18 = (ulonglong)uVar2;
  local_a8._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14caacf20,L"r.HDR.UI.Level",&local_a8,
                L"Luminance level for UI elements when compositing into HDR framebuffer (default: 1.0)."
               );
  atexit(FUN_1432bcb91);
  local_a8._0_4_ = 0x43960000;
  local_c8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14caacf38,L"r.HDR.UI.Luminance",&local_a8,
                L"Base Luminance in nits for UI elements when compositing into HDR framebuffer. Gets multiplied by r.HDR.UI.Level"
               );
  atexit(FUN_1432bcbd6);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14caacf50,L"r.HDR.UI.CompositeMode",&local_a8,
                L"Mode used when compositing the UI layer:\n0: Standard compositing\n1: Shader pass to improve HDR blending\n"
               );
  atexit(FUN_1432bcc1b);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14caacf68,L"Slate.CopyBackbufferToSlatePostRenderTargets",&local_a8,
                L"Experimental. Set true to copy final backbuffer into slate RTs for slate post processing / material usage"
               );
  atexit(FUN_1432bcc60);
  local_c8._0_4_ = 0;
  FUN_14153156c(&DAT_14caacf88,L"Slate.ShowWireFrame",&DAT_14caacf80,&DAT_149dfb77a);
  atexit(FUN_1432bcca5);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14caacf98,L"r.RenderThreadTimeIncludesDependentWaits",&local_a8,
                L"0: RT stat only includes non-idle time, 1: RT stat includes dependent waits (matching RenderThreadTime_CriticalPath)"
               );
  atexit(FUN_1432bccea);
  local_a0 = FUN_145dad634;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caad0d8,&local_a8);
  local_a0 = FUN_145ea3a4c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caad200,&local_a8);
  local_a8 = (code *)0x800000014a44fa30;
  local_ac = 0x10;
  uVar3 = FUN_14577453c();
  local_a0._0_5_ = CONCAT14(1,uVar3);
  FUN_1463365b0(&local_a8);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/SlateRHIRenderer",&PTR_FUN_14a4503a0,1,&PTR_FUN_14a450370);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,1);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14caad278,L"Slate.DefaultEnablePostRenderTarget_0",&local_a8,
                L"Experimental. Set true to enable slate post render target 0");
  atexit(FUN_1432c282f);
  local_c8._0_4_ = 4;
  FUN_141471170(&DAT_14caad290,L"r.PSOPrecache.SlateMaterials",&DAT_14c760fd4,
                L"Precache all possible required PSOs for loaded Slate Materials.");
  atexit(FUN_1432c2874);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14caad2a0,L"Slate.EnableDrawEvents",&DAT_14caad2b0,&DAT_149e0635c);
  atexit(FUN_1432c28b9);
  FUN_1411e592c(&DAT_14caad2b4,L"SlateView");
  local_a0 = FUN_1415c2a24;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caad340,&local_a8);
  DAT_14caad398 = (undefined4 *)0x0;
  DAT_14caad3a0 = 5;
  FUN_146337a64();
  puVar6 = DAT_14caad398;
  *DAT_14caad398 = 0x5020100;
  *(undefined1 *)(puVar6 + 1) = 7;
  atexit((_func_5014 *)&LAB_1432c3c58);
  uVar4 = (ulonglong)DAT_14c9ebd80;
  DAT_14caad3a8 = DAT_14c9ebd80;
  DAT_14c9ebd80 = DAT_14c9ebd80 + 1;
  (&DAT_14cafe3e0)[uVar4 * 2] = FUN_1432c3e5e;
  (&DAT_14cafe3e8)[uVar4 * 2] = L"SlateGlobalPSOCollector";
  atexit((_func_5014 *)&LAB_1432c4808);
  DAT_14caad3ac = 1;
  uVar4 = (ulonglong)DAT_14c9c0cf0;
  DAT_14caad3b0 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar4 * 0x10) = FUN_14179c124;
  (&DAT_14cafe978)[uVar4 * 2] = L"SlateMaterialPSOCollector";
  atexit((_func_5014 *)&LAB_1432c4a61);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  FUN_140bd5914(&DAT_14caad3b8,L"Slate.ResourceManager.LockResourceDuringGC",&local_a8,
                L"Lock the Slate RHI Resource Manager when GCing and when the loading screen has ownership to prevent multithreaded access to the resources."
               );
  atexit(FUN_1432c4a8b);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1432ce31c;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caad448,6,&local_a8);
  local_a0 = FUN_1415d0b6e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caad568,&local_a8);
  local_a0 = FUN_1460a3aa4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caad690,&local_a8);
  local_a0 = FUN_145f93844;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caad7b8,&local_a8);
  local_a0 = FUN_146046eb0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caad8e0,&local_a8);
  local_a0 = FUN_146139f22;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caada08,&local_a8);
  local_a0 = FUN_140b2e92e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caadb30,&local_a8);
  local_a0 = FUN_140b2e6fa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caadc58,&local_a8);
  local_a0 = FUN_140b2e05e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caadd80,&local_a8);
  local_a0 = FUN_1460a3d14;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caadea8,&local_a8);
  local_a0 = FUN_1460a3f84;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caadfd0,&local_a8);
  local_a0 = FUN_1460a41f4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae0f8,&local_a8);
  local_a0 = FUN_1460a4464;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae220,&local_a8);
  local_a0 = FUN_1460a46d4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae348,&local_a8);
  local_a0 = FUN_1460a4944;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae470,&local_a8);
  local_a0 = FUN_1460a4bb4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae598,&local_a8);
  local_a0 = FUN_1460a4e24;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae6c0,&local_a8);
  local_a0 = FUN_1460a5094;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae7e8,&local_a8);
  local_a0 = FUN_1460a5304;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caae910,&local_a8);
  local_a0 = FUN_1460a5574;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaea38,&local_a8);
  local_a0 = FUN_1460a57e4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaeb60,&local_a8);
  local_a0 = FUN_1460a5a54;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaec88,&local_a8);
  local_a0 = FUN_140b2dd10;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaedb0,&local_a8);
  local_a0 = FUN_140b2e814;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaeed8,&local_a8);
  local_a0 = FUN_140b2de2a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf000,&local_a8);
  local_a0 = FUN_1460a5cc4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf128,&local_a8);
  local_a0 = FUN_140b2df44;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf250,&local_a8);
  local_a0 = FUN_1460a5f34;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf378,&local_a8);
  local_a0 = FUN_140b2e178;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf4a0,&local_a8);
  local_a0 = FUN_1460a61a4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf5c8,&local_a8);
  local_a0 = FUN_140b2e292;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf6f0,&local_a8);
  local_a0 = FUN_1460a6414;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf818,&local_a8);
  local_a0 = FUN_140b2e3ac;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaf940,&local_a8);
  local_a0 = FUN_1460a6684;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caafa68,&local_a8);
  local_a0 = FUN_140b2e4c6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caafb90,&local_a8);
  local_a0 = FUN_1460a68f4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caafcb8,&local_a8);
  local_a0 = FUN_140b2e5e0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caafde0,&local_a8);
  local_a0 = FUN_1460a6b64;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caaff08,&local_a8);
  _DAT_14caad388 = 0xffffffff;
  DAT_14caad38c = 5;
  DAT_14caad38d = 1;
  DAT_14caad38e = 0;
  DAT_14caad390 = 0;
  DAT_14caad380 = &PTR_FUN_14a452f20;
  FUN_146337d7e();
  atexit(FUN_1432c614b);
  _DAT_14caad370 = 0xffffffff;
  DAT_14caad374 = 5;
  DAT_14caad375 = 1;
  DAT_14caad376 = 0;
  DAT_14caad378 = 0;
  DAT_14caad368 = &PTR_FUN_14a452f80;
  FUN_146337dc6();
  atexit(FUN_1432c617a);
  _DAT_14caad358 = 0xffffffff;
  DAT_14caad35c = 5;
  DAT_14caad35d = 1;
  DAT_14caad35e = 0;
  DAT_14caad360 = 0;
  DAT_14caad350 = &PTR_FUN_14a452fb0;
  FUN_146337e52();
  atexit(FUN_1432c61a9);
  puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 0;
  *puVar5 = &PTR_FUN_14a4517a0;
  puVar6 = (undefined4 *)FUN_14001cc68(0x30,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0x3f800000;
  puVar6[3] = 0x3f800000;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 10) = 0;
  puVar5[3] = puVar6;
  _DAT_14caad3d0 = puVar5;
  DAT_14caad3d8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(DAT_14caad3d8 + 1) = 1;
  *(undefined4 *)((longlong)DAT_14caad3d8 + 0xc) = 1;
  *DAT_14caad3d8 = &PTR_FUN_14a453120;
  DAT_14caad3d8[2] = puVar5;
  atexit(FUN_1432c6fd6);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432cf528 FUN_1432cf528 body=57 status=ok
// SIG undefined FUN_1432cf528(void)

void FUN_1432cf528(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab15e8 == 0) {
    uVar1 = FUN_145a24bfd();
    DAT_14cab15e8 = FUN_14171c317(FUN_146337efb,uVar1,L"EFrameNumberDisplayFormats");
  }
  return;
}



// FUNCTION 1432cf561 FUN_1432cf561 body=63 status=ok
// SIG undefined FUN_1432cf561(void)

void FUN_1432cf561(void)

{
  longlong lVar1;
  
  lVar1 = 0x230;
  do {
    if (*(longlong **)((longlong)&DAT_14cab1600 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&DAT_14cab1600 + lVar1) + 0x10))();
    }
    if (*(longlong **)(lVar1 + 0x14cab15f0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x14cab15f0) + 0x10))();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432cf5a0 FUN_1432cf5a0 body=69 status=ok
// SIG undefined FUN_1432cf5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432cf5a0(void)

{
  _DAT_14cab1870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432cf5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab1878,1);
  return;
}



// FUNCTION 1432cf5e5 FUN_1432cf5e5 body=57 status=ok
// SIG undefined FUN_1432cf5e5(void)

void FUN_1432cf5e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab18c0 == 0) {
    uVar1 = FUN_145a24bfd();
    DAT_14cab18c0 = FUN_14171c317(FUN_146338057,uVar1,L"ETimedDataInputEvaluationType");
  }
  return;
}



// FUNCTION 1432cf61e FUN_1432cf61e body=57 status=ok
// SIG undefined FUN_1432cf61e(void)

void FUN_1432cf61e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab18d8 == 0) {
    uVar1 = FUN_145a24bfd();
    DAT_14cab18d8 = FUN_14171c317(FUN_146338086,uVar1,L"ETimedDataInputState");
  }
  return;
}



// FUNCTION 1432cf657 FUN_1432cf657 body=47 status=ok
// SIG undefined FUN_1432cf657(void)

void FUN_1432cf657(void)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    if (*(longlong **)(lVar1 + 0x14cab19e0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x14cab19e0) + 0x10))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432cf6a2 FUN_1432cf6a2 body=29 status=ok
// SIG undefined FUN_1432cf6a2(void)

undefined8 FUN_1432cf6a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432cf6d4 FUN_1432cf6d4 body=93 status=ok
// SIG undefined FUN_1432cf6d4(void)

void FUN_1432cf6d4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a458040;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 1432cf732 FUN_1432cf732 body=93 status=ok
// SIG undefined FUN_1432cf732(void)

void FUN_1432cf732(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a458040;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 1432cf790 FUN_1432cf790 body=126 status=ok
// SIG undefined FUN_1432cf790(void)

void FUN_1432cf790(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a458040;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432cf7ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432cf80e FUN_1432cf80e body=68 status=ok
// SIG undefined FUN_1432cf80e(void)

undefined4 FUN_1432cf80e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x280) == '\x01') {
    FUN_1475195a2(lVar1 + 0x278);
    uVar3 = *(uint *)(lVar1 + 0x278) ^ *(uint *)(param_1 + 0x20);
    uVar2 = CONCAT31((int3)(uVar3 >> 8),
                     *(int *)(param_1 + 0x24) == *(int *)(lVar1 + 0x27c) && uVar3 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1432cf852 FUN_1432cf852 body=38 status=ok
// SIG undefined FUN_1432cf852(void)

undefined1 FUN_1432cf852(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x280) == '\x01') {
    FUN_1475195a2(*(longlong *)(param_1 + 0x18) + 0x278);
  }
  return 1;
}



// FUNCTION 1432cf878 FUN_1432cf878 body=29 status=ok
// SIG undefined FUN_1432cf878(void)

undefined8 FUN_1432cf878(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432cf8aa FUN_1432cf8aa body=93 status=ok
// SIG undefined FUN_1432cf8aa(void)

void FUN_1432cf8aa(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a4580b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 1432cf908 FUN_1432cf908 body=93 status=ok
// SIG undefined FUN_1432cf908(void)

void FUN_1432cf908(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a4580b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 1432cf966 FUN_1432cf966 body=126 status=ok
// SIG undefined FUN_1432cf966(void)

void FUN_1432cf966(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4580b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432cf9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432cf9e4 FUN_1432cf9e4 body=68 status=ok
// SIG undefined FUN_1432cf9e4(void)

undefined4 FUN_1432cf9e4(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x280) == '\x01') {
    FUN_1475195a2(lVar1 + 0x278);
    uVar3 = *(uint *)(lVar1 + 0x278) ^ *(uint *)(param_1 + 0x20);
    uVar2 = CONCAT31((int3)(uVar3 >> 8),
                     *(int *)(param_1 + 0x24) == *(int *)(lVar1 + 0x27c) && uVar3 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1432cfa28 FUN_1432cfa28 body=38 status=ok
// SIG undefined FUN_1432cfa28(void)

undefined1 FUN_1432cfa28(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x280) == '\x01') {
    FUN_1475195a2(*(longlong *)(param_1 + 0x18) + 0x278);
  }
  return 1;
}



// FUNCTION 1432cfa4e FUN_1432cfa4e body=29 status=ok
// SIG undefined FUN_1432cfa4e(void)

undefined8 FUN_1432cfa4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432cfa80 FUN_1432cfa80 body=93 status=ok
// SIG undefined FUN_1432cfa80(void)

void FUN_1432cfa80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a458190;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 1432cfade FUN_1432cfade body=93 status=ok
// SIG undefined FUN_1432cfade(void)

void FUN_1432cfade(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a458190;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 1432cfb3c FUN_1432cfb3c body=126 status=ok
// SIG undefined FUN_1432cfb3c(void)

void FUN_1432cfb3c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a458190;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432cfbab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432cfbba FUN_1432cfbba body=68 status=ok
// SIG undefined FUN_1432cfbba(void)

undefined4 FUN_1432cfbba(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x280) == '\x01') {
    FUN_1475195a2(lVar1 + 0x278);
    uVar3 = *(uint *)(lVar1 + 0x278) ^ *(uint *)(param_1 + 0x20);
    uVar2 = CONCAT31((int3)(uVar3 >> 8),
                     *(int *)(param_1 + 0x24) == *(int *)(lVar1 + 0x27c) && uVar3 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1432cfbfe FUN_1432cfbfe body=38 status=ok
// SIG undefined FUN_1432cfbfe(void)

undefined1 FUN_1432cfbfe(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x280) == '\x01') {
    FUN_1475195a2(*(longlong *)(param_1 + 0x18) + 0x278);
  }
  return 1;
}



// FUNCTION 1432cfc24 FUN_1432cfc24 body=4682 status=ok
// SIG undefined FUN_1432cfc24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432cfc24(void)

{
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14098d3d2(FUN_1432cf528,L"/Script/TimeManagement",L"EFrameNumberDisplayFormats",&DAT_14cab15e0
               );
  _DAT_14cab1610 = &DAT_10000000c;
  local_58 = L"FPS_12";
  local_50 = 6;
  FUN_1446e940c(&local_5c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_60,&local_58);
  local_58 = L"12 fps (animation)";
  local_50 = 0x12;
  FUN_140208c1e(&DAT_14cab1618,local_60,&local_5c,&local_58);
  local_58 = L"FPS_12_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_64,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_68,&local_58);
  local_58 = L"12 fps (animation)";
  local_50 = 0x12;
  FUN_140208c1e(&DAT_14cab1628,local_68,local_64,&local_58);
  _DAT_14cab1638 = &DAT_10000000f;
  local_58 = L"FPS_15";
  local_50 = 6;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_70,&local_58);
  local_58 = L"15 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab1640,local_70,local_6c,&local_58);
  local_58 = L"FPS_15_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_74,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_78,&local_58);
  local_58 = L"15 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab1650,local_78,local_74,&local_58);
  _DAT_14cab1660 = &DAT_100000018;
  local_58 = L"FPS_24";
  local_50 = 6;
  FUN_1446e940c(local_7c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_80,&local_58);
  local_58 = L"24 fps (film)";
  local_50 = 0xd;
  FUN_140208c1e(&DAT_14cab1668,local_80,local_7c,&local_58);
  local_58 = L"FPS_24_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_84,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_88,&local_58);
  local_58 = L"24 fps (film)";
  local_50 = 0xd;
  FUN_140208c1e(&DAT_14cab1678,local_88,local_84,&local_58);
  _DAT_14cab1688 = 0x100000019;
  local_58 = L"FPS_25";
  local_50 = 6;
  FUN_1446e940c(local_8c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_90,&local_58);
  local_58 = L"25 fps (PAL/25)";
  local_50 = 0xf;
  FUN_140208c1e(&DAT_14cab1690,local_90,local_8c,&local_58);
  local_58 = L"FPS_25_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_94,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_98,&local_58);
  local_58 = L"25 fps (PAL/25)";
  local_50 = 0xf;
  FUN_140208c1e(&DAT_14cab16a0,local_98,local_94,&local_58);
  _DAT_14cab16b0 = 0x10000001e;
  local_58 = L"FPS_30";
  local_50 = 6;
  FUN_1446e940c(local_9c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_a0,&local_58);
  local_58 = L"30 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab16b8,local_a0,local_9c,&local_58);
  local_58 = L"FPS_30_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_a4,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_a8,&local_58);
  local_58 = L"30 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab16c8,local_a8,local_a4,&local_58);
  _DAT_14cab16d8 = &DAT_100000030;
  local_58 = L"FPS_48";
  local_50 = 6;
  FUN_1446e940c(local_ac,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_b0,&local_58);
  local_58 = L"48 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab16e0,local_b0,local_ac,&local_58);
  local_58 = L"FPS_48_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_b4,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_b8,&local_58);
  local_58 = L"48 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab16f0,local_b8,local_b4,&local_58);
  _DAT_14cab1700 = 0x100000032;
  local_58 = L"FPS_50";
  local_50 = 6;
  FUN_1446e940c(local_bc,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_c0,&local_58);
  local_58 = L"50 fps (PAL/50)";
  local_50 = 0xf;
  FUN_140208c1e(&DAT_14cab1708,local_c0,local_bc,&local_58);
  local_58 = L"FPS_50_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_c4,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_c8,&local_58);
  local_58 = L"50 fps (PAL/50)";
  local_50 = 0xf;
  FUN_140208c1e(&DAT_14cab1718,local_c8,local_c4,&local_58);
  _DAT_14cab1728 = &DAT_10000003c;
  local_58 = L"FPS_60";
  local_50 = 6;
  FUN_1446e940c(local_cc,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_d0,&local_58);
  local_58 = L"60 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab1730,local_d0,local_cc,&local_58);
  local_58 = L"FPS_60_Description";
  local_50 = 0x12;
  FUN_1446e940c(local_d4,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_d8,&local_58);
  local_58 = L"60 fps";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cab1740,local_d8,local_d4,&local_58);
  _DAT_14cab1750 = 0x100000064;
  local_58 = L"FPS_100";
  local_50 = 7;
  FUN_1446e940c(local_dc,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_e0,&local_58);
  local_58 = L"100 fps";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cab1758,local_e0,local_dc,&local_58);
  local_58 = L"FPS_100_Description";
  local_50 = 0x13;
  FUN_1446e940c(local_e4,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_e8,&local_58);
  local_58 = L"100 fps";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cab1768,local_e8,local_e4,&local_58);
  _DAT_14cab1778 = 0x100000078;
  local_58 = L"FPS_120";
  local_50 = 7;
  FUN_1446e940c(local_ec,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_f0,&local_58);
  local_58 = L"120 fps";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cab1780,local_f0,local_ec,&local_58);
  local_58 = L"FPS_120_Description";
  local_50 = 0x13;
  FUN_1446e940c(local_f4,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_f8,&local_58);
  local_58 = L"120 fps";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cab1790,local_f8,local_f4,&local_58);
  _DAT_14cab17a0 = 0xf0;
  _DAT_14cab17a4 = 1;
  local_58 = L"FPS_240";
  local_50 = 7;
  FUN_1446e940c(local_fc,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_100,&local_58);
  local_58 = L"240 fps";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cab17a8,local_100,local_fc,&local_58);
  local_58 = L"FPS_240_Description";
  local_50 = 0x13;
  FUN_1446e940c(local_104,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_108,&local_58);
  local_58 = L"240 fps";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cab17b8,local_108,local_104,&local_58);
  _DAT_14cab17c8 = 24000;
  _DAT_14cab17cc = 0x3e9;
  local_58 = L"NTSC_24";
  local_50 = 7;
  FUN_1446e940c(local_10c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_110,&local_58);
  local_58 = L"23.976 (NTSC/24)";
  local_50 = 0x10;
  FUN_140208c1e(&DAT_14cab17d0,local_110,local_10c,&local_58);
  local_58 = L"NTSC_24_Description";
  local_50 = 0x13;
  FUN_1446e940c(local_114,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_118,&local_58);
  local_58 = L"23.976 (NTSC/24)";
  local_50 = 0x10;
  FUN_140208c1e(&DAT_14cab17e0,local_118,local_114,&local_58);
  _DAT_14cab17f0 = 30000;
  _DAT_14cab17f4 = 0x3e9;
  local_58 = L"NTSC_30";
  local_50 = 7;
  FUN_1446e940c(local_11c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_120,&local_58);
  local_58 = L"29.97 fps (NTSC/30)";
  local_50 = 0x13;
  FUN_140208c1e(&DAT_14cab17f8,local_120,local_11c,&local_58);
  local_58 = L"NTSC_30_Description";
  local_50 = 0x13;
  FUN_1446e940c(local_124,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_128,&local_58);
  local_58 = L"29.97 fps (NTSC/30)";
  local_50 = 0x13;
  FUN_140208c1e(&DAT_14cab1808,local_128,local_124,&local_58);
  _DAT_14cab1818 = 60000;
  _DAT_14cab181c = 0x3e9;
  local_58 = L"NTSC_60";
  local_50 = 7;
  FUN_1446e940c(local_12c,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_130,&local_58);
  local_58 = L"59.94 fps (NTSC/60)";
  local_50 = 0x13;
  FUN_140208c1e(&DAT_14cab1820,local_130,local_12c,&local_58);
  local_58 = L"NTSC_60_Description";
  local_50 = 0x13;
  FUN_1446e940c(local_134,&local_58);
  local_58 = L"CommonFrameRates";
  local_50 = 0x10;
  FUN_1446e940c(local_138,&local_58);
  local_58 = L"59.94 fps (NTSC/60)";
  local_50 = 0x13;
  FUN_140208c1e(&DAT_14cab1830,local_138,local_134);
  atexit(FUN_1432cf561);
  local_148 = 0;
  local_150 = (undefined **)0x0;
  local_158 = 0;
  FUN_14282b410(L"/Script/TimeManagement",&PTR_FUN_14a453bf0,1,0);
  local_148 = 0;
  local_150 = (undefined **)0x0;
  local_158 = 0;
  FUN_14282b410(L"/Script/TimeManagement",&PTR_FUN_14a454030,1,0);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,1);
  local_158 = CONCAT44(local_158._4_4_,0x20);
  FUN_14078dbce(&DAT_14cab1870,L"MediaIO.PreventFieldFlipping",&local_58,
                L"Whether to enable an interlace field flipping fix. (Experimental)");
  atexit(FUN_1432cf5a0);
  local_148 = 0;
  local_150 = (undefined **)0x0;
  local_158 = 0;
  FUN_14282b410(L"/Script/TimeManagement",&PTR_FUN_14a4545d0,1,0);
  local_148 = 0;
  local_150 = (undefined **)0x0;
  local_158 = 0;
  FUN_14282b410(L"/Script/TimeManagement",&PTR_FUN_14a4549e0,1,0);
  local_148 = 2;
  local_150 = &PTR_FUN_14a454d00;
  local_158 = 2;
  FUN_14282b410(L"/Script/TimeManagement",0,0,&PTR_FUN_14a454d40);
  DAT_14cab1918._0_4_ = 0xffffffff;
  DAT_14cab1918._4_4_ = 0xffffffff;
  local_148 = 0;
  local_150 = (undefined **)0x0;
  local_158 = 0;
  FUN_14282b410(L"/Script/TimeManagement",&PTR_FUN_14a456770,1,0);
  local_58 = (wchar_t *)0x800000014a453c18;
  local_5c = 0xe;
  local_50 = FUN_14577453c(L"TimeManagement",&local_5c);
  local_4c = 1;
  FUN_14633853e(&local_58);
  local_148 = 0;
  local_150 = (undefined **)0x0;
  local_158 = 0;
  FUN_14282b410(L"/Script/TimeManagement",&PTR_FUN_14a456bc0,1,0);
  local_58 = L"TimecodeLabelHour";
  local_50 = 0x11;
  FUN_1446e940c(&local_5c,&local_58);
  local_58 = L"TimecodeProviderTab";
  local_50 = 0x13;
  FUN_1446e940c(local_60,&local_58);
  local_58 = L"HR";
  local_50 = 2;
  FUN_140208c1e(&DAT_14cab19f0,local_60,&local_5c,&local_58);
  local_58 = L"TimecodeLabelMin";
  local_50 = 0x10;
  FUN_1446e940c(local_64,&local_58);
  local_58 = L"TimecodeProviderTab";
  local_50 = 0x13;
  FUN_1446e940c(local_68,&local_58);
  local_58 = L"MIN";
  local_50 = 3;
  FUN_140208c1e(&DAT_14cab1a00,local_68,local_64,&local_58);
  local_58 = L"TimecodeLabelSecond";
  local_50 = 0x13;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"TimecodeProviderTab";
  local_50 = 0x13;
  FUN_1446e940c(local_70,&local_58);
  local_58 = L"SEC";
  local_50 = 3;
  FUN_140208c1e(&DAT_14cab1a10,local_70,local_6c,&local_58);
  local_58 = L"TimecodeLabelFrame";
  local_50 = 0x12;
  FUN_1446e940c(local_74,&local_58);
  local_58 = L"TimecodeProviderTab";
  local_50 = 0x13;
  FUN_1446e940c(local_78,&local_58);
  local_58 = L"FR";
  local_50 = 2;
  FUN_140208c1e(&DAT_14cab1a20,local_78,local_74,&local_58);
  atexit(FUN_1432cf657);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d0e70 FUN_1432d0e70 body=55 status=ok
// SIG undefined FUN_1432d0e70(void)

void FUN_1432d0e70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1b58 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1b58 = FUN_14171c317(FUN_146338c52,uVar1,L"EMovieSceneKeyInterpolation");
  }
  return;
}



// FUNCTION 1432d0ea7 FUN_1432d0ea7 body=55 status=ok
// SIG undefined FUN_1432d0ea7(void)

void FUN_1432d0ea7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1bf0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1bf0 = FUN_14171c317(FUN_146338e03,uVar1,L"EMovieSceneCompletionMode");
  }
  return;
}



// FUNCTION 1432d0ede FUN_1432d0ede body=55 status=ok
// SIG undefined FUN_1432d0ede(void)

void FUN_1432d0ede(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1c08 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1c08 = FUN_14171c317(FUN_146338e34,uVar1,L"EMovieSceneConditionScope");
  }
  return;
}



// FUNCTION 1432d0f15 FUN_1432d0f15 body=55 status=ok
// SIG undefined FUN_1432d0f15(void)

void FUN_1432d0f15(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1c20 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1c20 = FUN_14171c317(FUN_146338e63,uVar1,L"EMovieSceneConditionCheckFrequency");
  }
  return;
}



// FUNCTION 1432d0f4c FUN_1432d0f4c body=221 status=ok
// SIG undefined FUN_1432d0f4c(void)

longlong FUN_1432d0f4c(void)

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
  if (DAT_14cab2770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475472e1;
    local_40 = &LAB_14633c0b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d102a FUN_1432d102a body=55 status=ok
// SIG undefined FUN_1432d102a(void)

void FUN_1432d102a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1dc0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1dc0 = FUN_14171c317(FUN_1463395f9,uVar1,L"EMovieScenePlayerStatus");
  }
  return;
}



// FUNCTION 1432d1061 FUN_1432d1061 body=55 status=ok
// SIG undefined FUN_1432d1061(void)

void FUN_1432d1061(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1dd8 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1dd8 = FUN_14171c317(FUN_146339628,uVar1,L"EMovieSceneEvaluationType");
  }
  return;
}



// FUNCTION 1432d1098 FUN_1432d1098 body=55 status=ok
// SIG undefined FUN_1432d1098(void)

void FUN_1432d1098(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1df0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1df0 = FUN_14171c317(FUN_146339659,uVar1,L"EUpdateClockSource");
  }
  return;
}



// FUNCTION 1432d10cf FUN_1432d10cf body=55 status=ok
// SIG undefined FUN_1432d10cf(void)

void FUN_1432d10cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1e08 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1e08 = FUN_14171c317(FUN_14633968a,uVar1,L"EMovieSceneSequenceFlags");
  }
  return;
}



// FUNCTION 1432d1106 FUN_1432d1106 body=55 status=ok
// SIG undefined FUN_1432d1106(void)

void FUN_1432d1106(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1e20 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1e20 = FUN_14171c317(FUN_1463396b9,uVar1,L"EMovieSceneServerClientMask");
  }
  return;
}



// FUNCTION 1432d113d FUN_1432d113d body=55 status=ok
// SIG undefined FUN_1432d113d(void)

void FUN_1432d113d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1e38 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1e38 = FUN_14171c317(FUN_1463396e8,uVar1,L"EMovieSceneGroupConditionOperator");
  }
  return;
}



// FUNCTION 1432d1174 FUN_1432d1174 body=55 status=ok
// SIG undefined FUN_1432d1174(void)

void FUN_1432d1174(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1f40 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1f40 = FUN_14171c317(FUN_146339b57,uVar1,L"EMovieSceneSubSectionFlags");
  }
  return;
}



// FUNCTION 1432d11ab FUN_1432d11ab body=55 status=ok
// SIG undefined FUN_1432d11ab(void)

void FUN_1432d11ab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1fa0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1fa0 = FUN_14171c317(FUN_146339d3b,uVar1,L"ESectionEvaluationFlags");
  }
  return;
}



// FUNCTION 1432d11e2 FUN_1432d11e2 body=55 status=ok
// SIG undefined FUN_1432d11e2(void)

void FUN_1432d11e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2030 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2030 = FUN_14171c317(FUN_14633a019,uVar1,L"EMovieSceneCompletionModeOverride");
  }
  return;
}



// FUNCTION 1432d13b2 FUN_1432d13b2 body=86 status=ok
// SIG undefined FUN_1432d13b2(void)

undefined8 FUN_1432d13b2(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_3);
    }
  }
  else {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 1432d148f FUN_1432d148f body=1557 status=ok
// SIG undefined FUN_1432d148f(void)

void FUN_1432d148f(void)

{
  longlong lVar1;
  
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a458a90,1,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a458e00,1,0,0,0,0);
  FUN_1446f470e(&DAT_14cab1a60,L"BP_GetBoundObjectForSequencer",1);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4592c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a459630,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a459990,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a459ee0,1,&PTR_FUN_14a459eb0,1,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45a250,1,0,0,0,0);
  DAT_14cab1b00 = 0xffffffff;
  DAT_14cab1b04 = 0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45a5b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45a920,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45ac80,1,0,0,0,0);
  FUN_14098d3d2(FUN_1432d0e70,L"/Script/MovieScene",L"EMovieSceneKeyInterpolation",&DAT_14cab1b50);
  FUN_1446f470e(&DAT_14cab1b80,L"OnObjectBoundBySequencer",1);
  FUN_1446f470e(&DAT_14cab1b90,L"OnObjectUnboundBySequencer",1);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45b3a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45b710,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45ba70,1,0,0,0,0);
  FUN_14098d3d2(FUN_1432d0ea7,L"/Script/MovieScene",L"EMovieSceneCompletionMode",&DAT_14cab1be8);
  FUN_1446f470e(&DAT_14cab1c60,L"BP_EvaluateCondition",1);
  FUN_1446f470e(&DAT_14cab1c70,L"BP_GetCheckFrequency",1);
  FUN_1446f470e(&DAT_14cab1c80,L"BP_GetScope",1);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45c6a0,1,&PTR_FUN_14a45c650,2,&PTR_FUN_14a45c610,2
               );
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45ce20,1,&PTR_FUN_14a45cdd0,2,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45cf80,1,0,0);
  FUN_1446f470e(&DAT_14cab1d18,L"OnEvaluate",1);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45d3f0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45d4c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45d600,2,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45d7e0,1,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45d930,1,0,0);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14a45dc80 + lVar1),L"/Script/MovieScene",
                  *(undefined8 *)(&UNK_14a45dc88 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_14a45dc90 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xb0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45e280,1,0,0,&PTR_FUN_14a45e260,1);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45e5d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45e7d0,3,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45e8d0,1,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45eca0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45edb0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45ef50,1,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a45f320,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45f830,1,&PTR_FUN_14a45f810,1);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a45fe00,2,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a460200,3,&PTR_FUN_14a4601e0,1);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a460340,1,0,0);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a460b10,2,&PTR_FUN_14a460af0,1);
  return;
}



// FUNCTION 1432d1aa4 FUN_1432d1aa4 body=55 status=ok
// SIG undefined FUN_1432d1aa4(void)

void FUN_1432d1aa4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab20b0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab20b0 = FUN_14171c317(FUN_14179c871,uVar1,L"EMovieSceneTimeUnit");
  }
  return;
}



// FUNCTION 1432d1adb FUN_1432d1adb body=55 status=ok
// SIG undefined FUN_1432d1adb(void)

void FUN_1432d1adb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2140 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2140 = FUN_14171c317(FUN_14633a9c8,uVar1,L"EMovieSceneTimeWarpType");
  }
  return;
}



// FUNCTION 1432d1b12 FUN_1432d1b12 body=69 status=ok
// SIG undefined FUN_1432d1b12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d1b12(void)

{
  _DAT_14cab2248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d1b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2250,1);
  return;
}



// FUNCTION 1432d1b58 FUN_1432d1b58 body=983 status=ok
// SIG undefined FUN_1432d1b58(void)

longlong FUN_1432d1b58(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      ulonglong param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 *local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  int local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = *param_6;
  local_50 = param_6[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  lVar3 = (**(code **)(*param_1 + 0x328))(param_1,&local_58);
  if (lVar3 == 0) {
    lVar3 = DAT_14cb10918;
  }
  local_70 = *param_6;
  local_68 = param_6[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_100 = &local_70;
  local_108 = param_5;
  (**(code **)(*param_1 + 0x330))(param_1,&local_60,param_2,param_4);
  if (local_60 != 0) {
    local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffff00000000);
    local_108 = local_108 & 0xffffffff00000000;
    plVar4 = (longlong *)FUN_140be85e0(0,*(undefined8 *)(lVar3 + 0x30),local_60,0);
    if (plVar4 != (longlong *)0x0) {
      local_108 = local_108 & 0xffffffff00000000;
      local_ac = param_3;
      FUN_140af9fb2(local_78,*(undefined8 *)(lVar3 + 0x30),plVar4[2],0);
      FUN_1400021e4(local_78,&local_88);
      pcVar6 = local_88;
      if (local_80 == 0) {
        pcVar6 = (code *)&DAT_149dfb77a;
      }
      (**(code **)(*plVar4 + 0x170))(plVar4,pcVar6,0,0);
      param_3 = local_ac;
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  local_98 = *param_6;
  local_90 = param_6[1];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  local_f0 = &local_98;
  local_f8 = param_5;
  local_100 = (undefined8 *)param_4;
  local_108._0_4_ = param_3;
  lVar5 = (**(code **)(*param_1 + 0x318))(param_1,lVar3,local_60,param_2);
  if (lVar5 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_d0 = &local_88;
      local_88 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = &LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = (undefined8 *)0x1000000000;
      local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
      local_100 = (undefined8 *)CONCAT44(local_100._4_4_,8);
      local_108._0_4_ = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cab2268) && (FUN_144b3d300(&DAT_14cab2268), DAT_14cab2268 == -1))
      {
        FUN_1446f470e(&DAT_14cab2260,L"SequencerActor",1);
        _Init_thread_footer(&DAT_14cab2268);
      }
      FUN_140721fbe(lVar5 + 0x1f0,&DAT_14cab2260);
    }
    local_a8 = *param_6;
    local_a0 = param_6[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_f0 = &local_a8;
    local_f8 = param_5;
    local_100 = (undefined8 *)param_4;
    local_108._0_4_ = param_3;
    (**(code **)(*param_1 + 0x338))(param_1,lVar5,lVar3,param_2);
  }
  plVar4 = (longlong *)param_6[1];
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
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1432d1f44 FUN_1432d1f44 body=59 status=ok
// SIG undefined FUN_1432d1f44(void)

undefined8 FUN_1432d1f44(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return param_1;
}



// FUNCTION 1432d1f84 FUN_1432d1f84 body=69 status=ok
// SIG undefined FUN_1432d1f84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d1f84(void)

{
  _DAT_14cab2338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d1fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2340,1);
  return;
}



// FUNCTION 1432d1fc9 FUN_1432d1fc9 body=69 status=ok
// SIG undefined FUN_1432d1fc9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d1fc9(void)

{
  _DAT_14cab2348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d200b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2350,1);
  return;
}



// FUNCTION 1432d200e FUN_1432d200e body=69 status=ok
// SIG undefined FUN_1432d200e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d200e(void)

{
  _DAT_14cab2358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d2050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2360,1);
  return;
}



// FUNCTION 1432d2054 FUN_1432d2054 body=403 status=ok
// SIG undefined FUN_1432d2054(void)

void FUN_1432d2054(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *param_1;
  iVar6 = (int)param_2;
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  if (((bVar1 & 4) == 0) && (iVar6 == *(int *)(param_1 + 4))) {
    if ((fVar7 == *(float *)(param_1 + 8)) && (!NAN(fVar7) && !NAN(*(float *)(param_1 + 8))))
    goto LAB_1432d21c8;
  }
  if ((bVar1 & 2) == 0) {
    iVar5 = (int)*(undefined8 *)(param_1 + 4);
    if ((iVar6 < iVar5) ||
       ((iVar6 == iVar5 && (fVar7 < (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20)))))
    goto LAB_1432d21c8;
  }
  if ((bVar1 & 1) == 0) {
    iVar5 = (int)*(undefined8 *)(param_1 + 4);
    if ((iVar5 < iVar6) ||
       ((iVar6 == iVar5 && ((float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20) < fVar7))))
    goto LAB_1432d21c8;
  }
  FUN_140108ff7(local_48,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_2);
  iVar5 = *(int *)(param_1 + 0xc);
  if (((bVar1 & 8) != 0) || (iVar5 = local_38, local_38 == *(int *)(param_1 + 0xc))) {
    fVar7 = fVar7 - *(float *)(param_1 + 8);
    auVar10 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),1);
    fVar7 = (fVar7 - auVar10._0_4_) + 0.5 + -0.5;
    auVar9 = ZEXT416((uint)fVar7);
    if (0.99999994 <= fVar7) {
      auVar9 = ZEXT416(0x3f7fffff);
    }
    if (auVar9._0_4_ <= 0.0) {
      auVar4._12_4_ = 0;
      auVar4._0_12_ = auVar9._4_12_;
      auVar9 = auVar4 << 0x20;
    }
    dVar8 = ABS((double)auVar9._0_4_ +
                (double)((int)auVar10._0_4_ + (iVar6 - *(int *)(param_1 + 4))));
    iVar6 = -(local_38 - iVar5);
    if (iVar6 < 0) {
      iVar6 = local_38 - iVar5;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((*(char *)(puVar2 + 1) != '\x01') ||
       ((iVar6 <= **(int **)(param_1 + 0x28) &&
        (dVar8 < **(double **)(param_1 + 0x20) || dVar8 == **(double **)(param_1 + 0x20))))) {
      *puVar2 = param_2;
      *(undefined1 *)(puVar2 + 1) = 1;
      **(double **)(param_1 + 0x20) = dVar8;
      piVar3 = *(int **)(param_1 + 0x28);
      *piVar3 = iVar6;
      *(undefined1 *)(piVar3 + 1) = 1;
    }
  }
LAB_1432d21c8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d21e8 FUN_1432d21e8 body=305 status=ok
// SIG undefined FUN_1432d21e8(void)

void FUN_1432d21e8(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  bVar1 = *param_1;
  if (((((bVar1 & 4) != 0) || (iVar5 != *(int *)(param_1 + 4))) ||
      (fVar7 != *(float *)(param_1 + 8))) || (NAN(fVar7) || NAN(*(float *)(param_1 + 8)))) {
    iVar4 = (int)*(undefined8 *)(param_1 + 4);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
    if ((((bVar1 & 2) != 0) || ((iVar4 <= iVar5 && ((iVar5 != iVar4 || (fVar6 <= fVar7)))))) &&
       (((bVar1 & 1) != 0 || ((iVar5 <= iVar4 && ((iVar5 != iVar4 || (fVar7 <= fVar6)))))))) {
      fVar7 = fVar7 - fVar6;
      auVar9 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),1);
      fVar7 = (fVar7 - auVar9._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar7) {
        fVar7 = 0.99999994;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      dVar8 = ABS((double)fVar7 + (double)((int)auVar9._0_4_ + (iVar5 - iVar4)));
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      if ((*(char *)(puVar2 + 1) != '\x01') ||
         ((-1 < **(int **)(param_1 + 0x28) &&
          (dVar8 < **(double **)(param_1 + 0x20) || dVar8 == **(double **)(param_1 + 0x20))))) {
        *puVar2 = param_2;
        *(undefined1 *)(puVar2 + 1) = 1;
        **(double **)(param_1 + 0x20) = dVar8;
        puVar3 = *(undefined4 **)(param_1 + 0x28);
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 1) = 1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1432d2319 FUN_1432d2319 body=55 status=ok
// SIG undefined FUN_1432d2319(void)

void FUN_1432d2319(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2490 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2490 = FUN_14171c317(FUN_14633b64c,uVar1,L"EMovieSceneSequenceCompilerMask");
  }
  return;
}



// FUNCTION 1432d2361 FUN_1432d2361 body=69 status=ok
// SIG undefined FUN_1432d2361(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d2361(void)

{
  _DAT_14cab24f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d23a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2500,1);
  return;
}



// FUNCTION 1432d23a6 FUN_1432d23a6 body=69 status=ok
// SIG undefined FUN_1432d23a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d23a6(void)

{
  _DAT_14cab2508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d23e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2510,1);
  return;
}



// FUNCTION 1432d244a FUN_1432d244a body=1337 status=ok
// SIG undefined FUN_1432d244a(void)

void FUN_1432d244a(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_f8 [39];
  byte local_d1;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_bc;
  longlong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  uint *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  int local_6c;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar4 = param_1 + 2;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (*(int *)((longlong)param_1 + 0x15c) < 0) {
    FUN_147543c02(plVar4);
  }
  plVar15 = (longlong *)param_1[1];
  uVar14 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar12 = (int)plVar15[1];
    lVar7 = 0;
    do {
      if (iVar12 == 0) {
        plVar15 = (longlong *)0x0;
        goto LAB_1432d24bf;
      }
      LOCK();
      iVar19 = (int)plVar15[1];
      bVar21 = iVar12 == iVar19;
      if (bVar21) {
        *(int *)(plVar15 + 1) = iVar12 + 1;
        iVar19 = iVar12;
      }
      iVar12 = iVar19;
      UNLOCK();
    } while (!bVar21);
    lVar7 = *param_1;
    uVar14 = 0;
  }
LAB_1432d24bf:
  iVar12 = *(int *)(lVar7 + 0x34);
  lVar16 = *(longlong *)(lVar7 + 0x28);
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar16);
  }
  if ((char)uVar14 == '\0') {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_58 = lVar7;
  local_50 = plVar15;
  plVar6 = (longlong *)FUN_140165676(&local_58);
  lVar7 = *(longlong *)(lVar16 + 0xa0);
  lVar13 = (longlong)iVar12 * 0x30;
  FUN_147543cf6(plVar4,&DAT_14cab2074,lVar7 + lVar13);
  iVar19 = *(int *)(lVar7 + 0x24 + lVar13);
  local_c8 = plVar6;
  local_bc = uVar14;
  if (((((iVar19 == 0) || (uVar3 = *(uint *)(lVar7 + 0x20 + lVar13), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar19)))) ||
     ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) {
    local_d1 = plVar6 != (longlong *)0x0;
  }
  else {
    local_d1 = plVar6 != (longlong *)0x0;
    if (((bool)local_d1) && (lVar7 = *plVar11, lVar7 != 0)) {
      lVar13 = (**(code **)(*plVar6 + 0x10))();
      local_68 = *(undefined8 *)(lVar13 + 8);
      plVar11 = *(longlong **)(lVar13 + 0x10);
      if (plVar11 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
        FUN_140a473e6(plVar6 + 2,&DAT_14cab2074,lVar7);
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        local_60 = plVar11;
        FUN_140a473e6(plVar6 + 2,&DAT_14cab2074,lVar7);
        LOCK();
        plVar6 = plVar11 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      local_d1 = true;
    }
  }
  local_a0 = lVar16;
  local_98 = plVar4;
  local_88 = (longlong)iVar12;
  lVar7 = FUN_1400a382a(lVar16,iVar12);
  if (lVar7 != 0) {
    local_90 = (uint *)(lVar7 + 0xa8);
    uVar3 = *(uint *)(lVar7 + 0xc0);
    if (uVar3 == 0) {
      uVar17 = 1;
      uVar20 = 0;
      iVar12 = 0;
      uVar5 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar7 + 0xb8);
      if (*(uint **)(lVar7 + 0xb8) == (uint *)0x0) {
        puVar8 = local_90;
      }
      uVar5 = *puVar8;
      if (uVar5 == 0) {
        iVar12 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar12 = uVar3 - 1;
        }
        uVar20 = 0;
        uVar17 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar17 = uVar20;
        }
        iVar12 = 0;
        do {
          if (uVar17 == uVar20) goto LAB_1432d26d7;
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar8[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar20 = 0;
        iVar12 = 0;
      }
      uVar17 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar5) {
        uVar5 = uVar3;
      }
    }
    if (uVar5 != uVar3) {
      local_b0 = local_c8 + 2;
      uVar18 = 0xffffffff;
      local_d1 = local_d1 ^ 1;
      local_a8 = (ulonglong)uVar3;
      do {
        lVar16 = *(longlong *)(lVar7 + 0x98);
        FUN_1475343aa(local_a0,&local_6c,local_88,
                      *(undefined4 *)(lVar16 + (longlong)(int)uVar5 * 0x100));
        if ((longlong)local_6c != -1) {
          lVar16 = lVar16 + (longlong)(int)uVar5 * 0x100;
          FUN_147543cf6(local_98,lVar16,(longlong)local_6c * 0x30 + *(longlong *)(local_a0 + 0xa0));
          lVar13 = FUN_1400a4c08(lVar16 + 8);
          if (lVar13 != 0 && local_d1 == 0) {
            local_b8 = lVar13;
            lVar13 = (**(code **)(*local_c8 + 0x10))();
            local_80 = *(undefined8 *)(lVar13 + 8);
            plVar4 = *(longlong **)(lVar13 + 0x10);
            local_d0 = plVar4;
            if (plVar4 == (longlong *)0x0) {
              local_78 = (longlong *)0x0;
              FUN_140a473e6(local_b0,lVar16,local_b8,&local_80);
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              local_78 = plVar4;
              FUN_140a473e6(local_b0,lVar16,local_b8,&local_80);
              plVar6 = local_d0;
              LOCK();
              plVar4 = plVar4 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_d0 + 0x10))();
                }
              }
            }
          }
        }
        uVar18 = uVar18 & ~(uint)uVar17;
        puVar8 = *(uint **)(lVar7 + 0xb8);
        if (*(uint **)(lVar7 + 0xb8) == (uint *)0x0) {
          puVar8 = local_90;
        }
        uVar3 = *(uint *)(lVar7 + 0xc0);
        iVar19 = (int)uVar20;
        lVar16 = (longlong)iVar19;
        uVar5 = puVar8[lVar16] & uVar18;
        if (uVar5 == 0) {
          iVar9 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar9 = uVar3 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar19) {
            iVar10 = iVar19;
          }
          if (iVar19 < iVar9) {
            lVar13 = 0;
            do {
              uVar5 = puVar8[lVar16 + lVar13 + 1];
              if (uVar5 != 0) {
                uVar20 = (ulonglong)(iVar19 + (int)lVar13 + 1);
                uVar18 = 0xffffffff;
                goto LAB_1432d280e;
              }
              iVar12 = iVar12 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar10 - lVar16 != lVar13);
            uVar18 = 0xffffffff;
            iVar19 = iVar10;
          }
          uVar20 = (ulonglong)(iVar19 + 1);
          uVar5 = uVar3;
        }
        else {
LAB_1432d280e:
          uVar17 = (ulonglong)(-uVar5 & uVar5);
          uVar2 = uVar17 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar5) {
            uVar5 = uVar3;
          }
        }
      } while (uVar5 != (uint)local_a8);
    }
  }
LAB_1432d26d7:
  if ((char)local_bc == '\0') {
    LOCK();
    plVar4 = plVar15 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432d2986 FUN_1432d2986 body=60 status=ok
// SIG undefined FUN_1432d2986(void)

void FUN_1432d2986(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000040;
  
  plVar3 = *(longlong **)(in_stack_00000040 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001432d29be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1432d2b7c FUN_1432d2b7c body=25 status=ok
// SIG undefined FUN_1432d2b7c(void)

void FUN_1432d2b7c(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0xc);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1432d2b96 FUN_1432d2b96 body=29 status=ok
// SIG undefined FUN_1432d2b96(void)

undefined8 FUN_1432d2b96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432d2d32 FUN_1432d2d32 body=93 status=ok
// SIG undefined FUN_1432d2d32(void)

void FUN_1432d2d32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a46d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a46d2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1432d2d90 FUN_1432d2d90 body=93 status=ok
// SIG undefined FUN_1432d2d90(void)

void FUN_1432d2d90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a46d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a46d2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1432d2dee FUN_1432d2dee body=126 status=ok
// SIG undefined FUN_1432d2dee(void)

void FUN_1432d2dee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a46d330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a46d2c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d2e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432d2e6c FUN_1432d2e6c body=77 status=ok
// SIG undefined FUN_1432d2e6c(void)

void FUN_1432d2e6c(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_2;
  local_10 = param_3;
  FUN_1432d2fdc(param_1 + 0x20,&local_11,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d2eba FUN_1432d2eba body=288 status=ok
// SIG undefined FUN_1432d2eba(void)

undefined8 FUN_1432d2eba(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = param_2;
  local_30 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1432d2fd4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1432d2fd4;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1432d2fd4:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1432d2f88;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1432d2fdc(param_1 + 0x20,&local_31,&local_30);
      uVar6 = 1;
      goto LAB_1432d2f88;
    }
  }
  uVar6 = 0;
LAB_1432d2f88:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d2fdc FUN_1432d2fdc body=1560 status=ok
// SIG undefined FUN_1432d2fdc(void)

void FUN_1432d2fdc(longlong *param_1,char *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_108 [47];
  byte local_d9;
  uint *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  uint local_7c;
  undefined8 *local_78;
  uint *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_2 == '\x02') {
    local_c8 = *param_1;
    plVar5 = (longlong *)FUN_1468ca22c(*param_3 + 0x10);
    uVar3 = *(uint *)(plVar5 + 5);
    if (uVar3 == 0) {
      uVar20 = 1;
      uVar19 = 0;
      iVar21 = 0;
      uVar4 = 0;
    }
    else {
      puVar6 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar6 = (uint *)(plVar5 + 2);
      }
      uVar4 = *puVar6;
      if (uVar4 == 0) {
        iVar21 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar21 = uVar3 - 1;
        }
        uVar19 = 0;
        uVar20 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar20 = uVar19;
        }
        iVar21 = 0;
        do {
          if (uVar20 == uVar19) goto LAB_1432d300e;
          iVar21 = iVar21 + 0x20;
          uVar4 = puVar6[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar19 = 0;
        iVar21 = 0;
      }
      uVar20 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar20 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar4 = (iVar21 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar3;
      }
    }
    if (uVar4 != uVar3) {
      local_b8 = (longlong *)(local_c8 + 0x50);
      local_88 = local_c8 + 0x88;
      local_90 = local_c8 + 0xd8;
      local_98 = local_c8 + 0x128;
      local_a0 = local_c8 + 0x178;
      local_a8 = local_c8 + 0x1c8;
      uVar13 = 0xffffffff;
      local_d8 = (uint *)(plVar5 + 2);
      local_b0 = (ulonglong)uVar3;
      do {
        lVar15 = *plVar5;
        lVar16 = *(longlong *)(lVar15 + (longlong)(int)uVar4 * 0x18);
        if (lVar16 == 0) {
LAB_1432d3186:
          lVar16 = 0;
        }
        else {
          lVar7 = FUN_140ce4600();
          if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1432d3186;
        }
        lVar15 = *(longlong *)(lVar15 + (longlong)(int)uVar4 * 0x18 + 8);
        if (lVar15 != 0) {
          lVar7 = FUN_140ce4600();
          if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
              (lVar16 != 0)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            uVar3 = *(uint *)(lVar16 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            uVar4 = *(uint *)(lVar16 + 0x10);
            if (*(uint *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar18 = DAT_14c964868 + 1;
              UNLOCK();
              uVar10 = DAT_14c964868 + 1;
              bVar22 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar18;
              if (bVar22) {
                local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,uVar10);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar10);
                uVar10 = (uint)local_d0;
              }
              LOCK();
              uVar4 = *(uint *)(lVar16 + 0x10);
              bVar22 = uVar4 == 0;
              if (bVar22) {
                *(uint *)(lVar16 + 0x10) = uVar10;
                uVar4 = 0;
              }
              UNLOCK();
              if (bVar22) {
                uVar4 = uVar10;
              }
            }
            if (*(int *)(local_c8 + 0x58) != *(int *)(local_c8 + 0x84)) {
              uVar11 = uVar4 >> 0xd ^ uVar3 - uVar4;
              uVar10 = uVar11 << 8 ^ (-0x61c88647 - uVar4) - uVar11;
              uVar14 = uVar10 >> 0xd ^ (uVar4 - uVar11) - uVar10;
              uVar17 = uVar14 >> 0xc ^ (uVar11 - uVar10) - uVar14;
              uVar11 = uVar17 << 0x10 ^ (uVar10 - uVar14) - uVar17;
              uVar10 = uVar11 >> 5 ^ (uVar14 - uVar17) - uVar11;
              uVar14 = uVar10 >> 3 ^ (uVar17 - uVar11) - uVar10;
              uVar11 = uVar14 << 10 ^ (uVar11 - uVar10) - uVar14;
              lVar16 = *(longlong *)(local_c8 + 0x90);
              if (*(longlong *)(local_c8 + 0x90) == 0) {
                lVar16 = local_88;
              }
              uVar10 = *(uint *)(lVar16 + (ulonglong)
                                          (*(int *)(local_c8 + 0x98) - 1U &
                                          (uVar11 >> 0xf ^ uVar10 - (uVar14 + uVar11))) * 4);
              if (uVar10 != 0xffffffff) {
                do {
                  puVar6 = (uint *)(*local_b8 + (longlong)(int)uVar10 * 0x14);
                  if ((*puVar6 == uVar3) &&
                     (*(uint *)(*local_b8 + 4 + (longlong)(int)uVar10 * 0x14) == uVar4)) {
                    if (puVar6 != (uint *)0x0) {
                      local_7c = puVar6[2];
                      if ((longlong)(int)local_7c != -1) {
                        local_c0 = *(longlong *)(local_c8 + 0xa0);
                        lVar16 = (longlong)(int)local_7c * 0x30;
                        puVar1 = (undefined8 *)(local_c0 + lVar16);
                        puVar12 = puVar1 + 4;
                        FUN_140d217b4(local_b8,puVar12);
                        *puVar1 = 0;
                        puVar1[1] = 0;
                        local_d0 = puVar12;
                        if (puVar1[2] != 0) {
                          FUN_1400020a8();
                        }
                        lVar7 = local_c0 + lVar16;
                        local_d9 = local_d9 & 0xfc;
                        lVar16 = local_c0 + lVar16;
                        *(undefined8 *)(lVar16 + 0x10) = 0;
                        *(undefined8 *)(lVar16 + 0x18) = 0;
                        *(undefined8 *)(lVar16 + 0x20) = 0;
                        *(undefined4 *)(lVar7 + 0x28) = 0xffffffff;
                        *(undefined1 *)(lVar7 + 0x2c) = 0;
                        *(undefined1 *)(lVar7 + 0x2e) = 0;
                        *(byte *)(lVar7 + 0x2f) = local_d9;
                        uVar3 = *(uint *)(lVar15 + 0xc);
                        if ((int)uVar3 < DAT_14c9647dc) {
                          lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                        }
                        else {
                          lVar15 = 0;
                        }
                        iVar18 = *(int *)(lVar15 + 0x10);
                        if (*(int *)(lVar15 + 0x10) == 0) {
                          LOCK();
                          iVar18 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar8 = DAT_14c964868 + 1;
                          bVar22 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar18;
                          local_c0 = lVar7;
                          if (bVar22) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar8);
                          }
                          LOCK();
                          iVar18 = *(int *)(lVar15 + 0x10);
                          bVar22 = iVar18 == 0;
                          if (bVar22) {
                            *(int *)(lVar15 + 0x10) = iVar8;
                            iVar18 = 0;
                          }
                          UNLOCK();
                          lVar7 = local_c0;
                          if (bVar22) {
                            iVar18 = iVar8;
                          }
                        }
                        *(ulonglong *)(lVar7 + 0x20) = CONCAT44(iVar18,uVar3);
                        *(uint *)(lVar7 + 0x28) = local_7c;
                        local_78 = local_d0;
                        local_70 = &local_7c;
                        FUN_1475411a6(local_b8,local_64,&local_78);
                        FUN_140d213ac(local_90,local_7c);
                        FUN_140d2152a(local_98,local_7c);
                        FUN_140d2165c(local_a0,local_7c);
                        FUN_140d21406(local_a8,local_7c);
                        *(int *)(local_c8 + 0x228) = *(int *)(local_c8 + 0x228) + 1;
                      }
                    }
                    break;
                  }
                  uVar10 = puVar6[3];
                } while (uVar10 != 0xffffffff);
              }
            }
          }
        }
        uVar13 = uVar13 & ~(uint)uVar20;
        puVar6 = (uint *)plVar5[4];
        if ((uint *)plVar5[4] == (uint *)0x0) {
          puVar6 = local_d8;
        }
        uVar3 = *(uint *)(plVar5 + 5);
        iVar18 = (int)uVar19;
        lVar15 = (longlong)iVar18;
        uVar4 = puVar6[lVar15] & uVar13;
        if (uVar4 == 0) {
          iVar8 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar8 = uVar3 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar18) {
            iVar9 = iVar18;
          }
          if (iVar18 < iVar8) {
            lVar16 = 0;
            do {
              uVar4 = puVar6[lVar15 + lVar16 + 1];
              if (uVar4 != 0) {
                uVar19 = (ulonglong)(iVar18 + (int)lVar16 + 1);
                uVar13 = 0xffffffff;
                goto LAB_1432d322e;
              }
              iVar21 = iVar21 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar9 - lVar15 != lVar16);
            uVar13 = 0xffffffff;
            lVar15 = (longlong)iVar9;
          }
          uVar19 = lVar15 + 1U & 0xffffffff;
          uVar4 = uVar3;
        }
        else {
LAB_1432d322e:
          uVar20 = (ulonglong)(-uVar4 & uVar4);
          uVar2 = uVar20 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar4 = (iVar21 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
        }
      } while (uVar4 != (uint)local_b0);
    }
  }
LAB_1432d300e:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432d35f6 FUN_1432d35f6 body=262 status=ok
// SIG undefined FUN_1432d35f6(void)

void FUN_1432d35f6(longlong param_1,int param_2)

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



// FUNCTION 1432d36fc FUN_1432d36fc body=72 status=ok
// SIG undefined FUN_1432d36fc(void)

undefined8 FUN_1432d36fc(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0xd0);
  *(uint *)(lVar3 + 0xd0) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xd4) < iVar2 + 1U) {
    FUN_147541924((longlong *)(lVar3 + 200),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 200);
  *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = (ulonglong)uVar1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1432d3744 FUN_1432d3744 body=1162 status=ok
// SIG undefined FUN_1432d3744(void)

undefined8 FUN_1432d3744(longlong param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 *puVar17;
  byte bVar18;
  undefined8 *puVar19;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined8 local_b0;
  undefined4 local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_80;
  ulonglong local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined8 local_68;
  byte local_60;
  byte local_5f;
  undefined8 local_5c;
  ulonglong local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar13 = *(uint *)(param_2 + 4);
  cVar1 = param_2[0xc];
  local_80 = (undefined **)CONCAT71(local_80._1_7_,2);
  local_80 = (undefined **)((ulonglong)local_80 & 0xffffffff);
  local_78 = CONCAT71(local_78._1_7_,2);
  local_78 = local_78 & 0xffffffff;
  if (*param_2 != '\x02') {
    if (((*param_2 != '\x01') || (*(float *)(param_2 + 8) != 0.0)) || (NAN(*(float *)(param_2 + 8)))
       ) {
      uVar13 = uVar13 + 1;
    }
    local_80 = (undefined **)(((ulonglong)uVar13 << 0x20) + 1);
  }
  if (cVar1 != '\x02') {
    local_78 = *(longlong *)(param_2 + 0x10) << 0x20;
  }
  FUN_147543722(*(undefined8 *)(param_1 + 0x10),&local_a8);
  plVar4 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x78);
    if (lVar8 != 0) {
      lVar14 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x70) + lVar14) ==
            (int)plVar4[0x17]) goto LAB_1432d3a6f;
        lVar14 = lVar14 + 4;
      } while (lVar8 * 4 != lVar14);
    }
    cVar7 = (**(code **)(*plVar4 + 0x360))(plVar4);
    if ((cVar1 == '\x01') && (cVar7 != '\0')) {
      uStack_a0 = (uStack_a0 & 0xffffffff00000000) + 1;
    }
  }
  if (((char)local_a8 != '\x02') && ((char)uStack_a0 != '\x02')) {
    if ((uStack_a0._4_4_ < iStack_a4) ||
       ((iStack_a4 == uStack_a0._4_4_ && ((char)uStack_a0 == '\0' || (char)local_a8 == '\0'))))
    goto LAB_1432d3a6f;
  }
  plVar9 = *(longlong **)(param_1 + 0x28);
  uVar13 = *(uint *)(param_1 + 0x20);
  if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
    plVar10 = plVar9 + 7;
    if ((longlong *)plVar9[8] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar9[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[9] - 1U & uVar13) * 4);
    if (iVar11 != -1) {
      do {
        lVar8 = *plVar9 + (longlong)iVar11 * 0x88;
        if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x88) == uVar13) {
          if (lVar8 != 0) {
            lVar8 = lVar8 + 8;
            goto LAB_1432d38e2;
          }
          break;
        }
        iVar11 = *(int *)(lVar8 + 0x80);
      } while (iVar11 != -1);
    }
  }
  if ((int)plVar9[0xb] != *(int *)((longlong)plVar9 + 0x84)) {
    plVar10 = plVar9 + 0x11;
    if ((longlong *)plVar9[0x12] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar9[0x12];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[0x13] - 1U & uVar13) * 4);
    if (iVar11 != -1) {
      do {
        lVar14 = plVar9[10] + (longlong)iVar11 * 0x88;
        if (*(uint *)(plVar9[10] + (longlong)iVar11 * 0x88) == uVar13) goto LAB_1432d3bbf;
        iVar11 = *(int *)(lVar14 + 0x80);
      } while (iVar11 != -1);
    }
  }
  lVar14 = 0;
LAB_1432d3bbf:
  lVar8 = lVar14 + 8;
  if (lVar14 == 0) {
    lVar8 = 0;
  }
LAB_1432d38e2:
  uVar2 = **(undefined4 **)(param_1 + 0x10);
  local_b4 = *(undefined2 *)(lVar8 + 0x10);
  uVar5 = *(undefined8 *)(lVar8 + 0x68);
  plVar9 = (longlong *)FUN_147533afc();
  local_b0 = uVar5;
  (**(code **)(*plVar9 + 0x48))(plVar9,&local_80,uVar5);
  local_70 = local_80._0_2_;
  local_5f = *(byte *)(lVar8 + 0x70) >> 2 & 1;
  lVar14 = *(longlong *)(param_1 + 0x10);
  local_b2 = *(undefined2 *)(lVar14 + 0x78);
  if ((plVar4 != (longlong *)0x0) && ((longlong)*(int *)(lVar8 + 0x28) != 0)) {
    lVar6 = *(longlong *)(lVar8 + 0x20);
    lVar15 = 0;
    do {
      bVar16 = *(byte *)(lVar6 + 0x80 + lVar15);
      if ((bVar16 & 1) != 0) {
        puVar17 = (undefined8 *)(lVar6 + lVar15);
        if ((bVar16 & 2) == 0) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if ((*(int *)(puVar17 + 3) == 0) ||
           (uVar3 = *(uint *)((longlong)puVar17 + 0x14), (int)uVar3 < 0)) {
LAB_1432d39e1:
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)0x0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar19 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar19 == (undefined8 *)0x0) || (*(int *)(puVar19 + 2) != *(int *)(puVar17 + 3)))
               || ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_1432d39e1;
            plVar9 = (longlong *)*puVar19;
          }
        }
        if (plVar9 == plVar4) {
          uVar12 = (lVar15 >> 3) * -0xf0f0f0f0f0f0f0f;
          iVar11 = (int)uVar12;
          local_54 = 0x800000000000ffff;
          if (iVar11 == -1) {
            local_6a = 0;
            local_60 = 0;
          }
          else {
            bVar16 = *(byte *)(lVar14 + 0x24);
            lVar8 = *(longlong *)(param_1 + 8);
            if (bVar16 == 0) {
              bVar16 = *(byte *)(lVar8 + 0x1c);
            }
            bVar18 = 8;
            if ((*(byte *)(lVar14 + 0x7a) & 2) == 0) {
              bVar18 = *(byte *)(lVar14 + 0x7a) * '\x04' & 4;
            }
            lVar14 = (longlong)iVar11 * 0x88;
            puVar17 = (undefined8 *)(lVar6 + lVar14);
            if ((*(byte *)(lVar6 + 0x80 + lVar14) & 2) == 0) {
              puVar17 = (undefined8 *)*puVar17;
            }
            local_6a = *(undefined2 *)(lVar8 + 0x1e);
            local_54 = (ulonglong)(bVar18 | bVar16) << 0x10 |
                       (ulonglong)*(uint *)(lVar8 + 0x18) << 0x20 | uVar12 & 0xffff;
            local_60 = *(byte *)(puVar17 + 1) >> 2 & 1;
          }
          goto LAB_1432d3a05;
        }
      }
      lVar15 = lVar15 + 0x88;
    } while ((longlong)*(int *)(lVar8 + 0x28) * 0x88 != lVar15);
  }
  local_6a = 0;
  local_60 = 0;
  local_54 = 0x800000000000ffff;
LAB_1432d3a05:
  local_78 = **(ulonglong **)(param_1 + 0x18);
  local_5c = CONCAT44(uVar13,uVar2);
  local_98 = local_a8;
  iStack_94 = iStack_a4;
  uStack_90 = (undefined4)uStack_a0;
  uStack_8c = uStack_a0._4_4_;
  local_80 = &PTR_FUN_14a46d398;
  local_6c = local_b4;
  local_68 = local_b0;
  local_c8 = 0;
  local_6e = local_b2;
  FUN_1475569d4(local_78,&local_98,&local_80,0xffffffff);
LAB_1432d3a6f:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1432d3bd0 FUN_1432d3bd0 body=536 status=ok
// SIG undefined FUN_1432d3bd0(void)

undefined8 FUN_1432d3bd0(longlong *param_1,char *param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  undefined7 extraout_var;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  int iStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  byte local_d4;
  undefined1 local_7d;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 local_58;
  byte local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar7 = *(uint *)(param_2 + 4);
  lVar1 = *param_1;
  local_f8 = CONCAT71(local_f8._1_7_,2);
  local_f8 = local_f8 & 0xffffffff;
  local_f0 = CONCAT71(local_f0._1_7_,2);
  local_f0 = local_f0 & 0xffffffff;
  if (*param_2 == '\x02') goto LAB_1432d3c44;
  if (*param_2 == '\x01') {
    if ((*(float *)(param_2 + 8) != 0.0) || (NAN(*(float *)(param_2 + 8)))) goto LAB_1432d3c35;
  }
  else {
LAB_1432d3c35:
    uVar7 = uVar7 + 1;
  }
  local_f8 = ((ulonglong)uVar7 << 0x20) + 1;
LAB_1432d3c44:
  if (param_2[0xc] != '\x02') {
    local_f0 = *(longlong *)(param_2 + 0x10) << 0x20;
  }
  uVar3 = FUN_147543722(lVar1,&local_78,&local_f8);
  uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
  if ((((char)local_78 == '\x02') || ((char)uStack_70 == '\x02')) ||
     ((iStack_74 <= iStack_6c &&
      ((iStack_74 != iStack_6c || ((char)uStack_70 != '\0' && (char)local_78 != '\0')))))) {
    FUN_1475388d6(lVar1,&local_f8,param_1[5],(int)param_1[6]);
    local_108 = local_78;
    iStack_104 = iStack_74;
    uStack_100 = uStack_70;
    iStack_fc = iStack_6c;
    FUN_147536d96(&local_f8);
    local_d4 = local_d4 | *(byte *)(param_1[1] + 0x1c);
    local_7d = (undefined1)param_1[4];
    local_54 = *(byte *)(param_1[1] + 0x1c) | *(byte *)(*param_1 + 0x24);
    local_58 = (undefined4)param_1[6];
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_68 = local_78;
    iStack_64 = iStack_74;
    uStack_60 = uStack_70;
    iStack_5c = iStack_6c;
    FUN_147558432(param_1[3] + 0x18);
    FUN_147557bac(*(undefined8 *)param_1[2],(int)param_1[6],*(undefined4 *)(param_1[5] + 0x68));
    lVar1 = param_1[3];
    uVar3 = *(undefined8 *)param_1[2];
    uVar4 = FUN_1400a4c08(param_1[5]);
    FUN_14753821a(uVar4,&local_f8,uVar3,lVar1);
    pvVar2 = *(void **)param_1[2];
    uVar7 = *(uint *)((longlong)pvVar2 + 0x48);
    uVar6 = 1;
    if ((int)uVar7 < 1) {
      uVar6 = uVar7;
    }
    if (uVar7 != 0) {
      if (1 < (int)uVar7) {
        _Dst = *(void **)((longlong)pvVar2 + 0x40);
        if (*(void **)((longlong)pvVar2 + 0x40) == (void *)0x0) {
          _Dst = pvVar2;
        }
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 8),(ulonglong)(uVar7 - uVar6) << 3
               );
        uVar7 = *(uint *)((longlong)pvVar2 + 0x48);
      }
      *(uint *)((longlong)pvVar2 + 0x48) = uVar7 - uVar6;
    }
    FUN_147537f4a(&local_f8);
    uVar5 = extraout_var;
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return CONCAT71(uVar5,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d3de9 FUN_1432d3de9 body=1325 status=ok
// SIG undefined FUN_1432d3de9(void)

void FUN_1432d3de9(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a464940,1,0);
  DAT_14cab2070 = 0xffffffff;
  DAT_14cab2074 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a464e40,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a464f70);
  FUN_14098d3d2(FUN_1432d1aa4,L"/Script/MovieScene",L"EMovieSceneTimeUnit",&DAT_14cab20a8);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a4650e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4651f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a465310,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a465420,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4655d0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a4657a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a4657c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a465f30);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a466140);
  FUN_1446f470e(&DAT_14cab2240,L"SequencerPreviewActor",1);
  local_44 = 1;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cab2248,L"LevelSequence.EnableReadableActorLabelsForSpawnables",&local_44,
                L"If true, in the editor during PIE, Sequencer will set the DisplayName of spawned actors to match their Spawnable name in Sequencer, mimicking edit-time behavior. This helps with identifying spawnables more reliably, but isn\'t available in packaged builds. Try disabling this if you see async loads being flushed during actor spawning in PIE.\n0: off, 1: on"
               );
  atexit(FUN_1432d1b12);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a466690);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a4669e0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a466d60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a466e00);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a466eb0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a467250,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a467490);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab2338,L"Sequencer.LinearCubicInterpolation",&DAT_14c760fd8,
                L"If 1 Linear Keys Act As Cubic Interpolation with Linear Tangents, if 0 Linear Key Forces Linear Interpolation to Next Key."
               );
  atexit(FUN_1432d1f84);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab2348,L"Sequencer.AutoTangentNew",&DAT_14c760fdc,
                L"If 2 Sequencer will flatten tangents with no overshoot, if 1 Auto Tangent will use new algorithm to gradually flatten maximum/minimum keys, if 0 Auto Tangent will average all keys (pre 4.23 behavior)."
               );
  atexit(FUN_1432d1fc9);
  local_44 = 0x3f4ccccd;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cab2358,L"Sequencer.SmartAutoBlendLocationPercentage",&local_44,
                L"Percentage near the next value that the tangent will blend to the adjacent tangent, if over 1.0 we won\'t blend. Default to 0.8"
               );
  atexit(FUN_1432d200e);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a467e50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a4683c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a468770);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a468b70);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a468ff0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a469360,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a46a440;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a46a490,2,&PTR_FUN_14a46a460);
  FUN_140056680(&DAT_14cab24e8,L"7D4B98092FAC4A6B964ECF72D8279EF8");
  atexit((_func_5014 *)&LAB_1432d2350);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141707242(&DAT_14cab24f8,L"Sequencer.CompilerVersion",&DAT_14cab24e8,
                L"Defines a global identifer for moviescene compiler logic.\n");
  atexit(FUN_1432d2361);
  local_44 = CONCAT31(local_44._1_3_,1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cab2508,L"Sequencer.AddKeepStateDeterminismFences",&local_44,
                L"Whether the Sequencer compiler should auto-add determinism fences for the last frame of KeepState sections. This ensures that the last possible value of the section is consistently evaluated regardless of framerate, at the cost of an extra evaluation on frames that cross over KeepState sections\' end time.\n"
               );
  atexit(FUN_1432d23a6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d4318 FUN_1432d4318 body=42 status=ok
// SIG undefined FUN_1432d4318(void)

void FUN_1432d4318(longlong *param_1)

{
  if (*(short *)((longlong)param_1 + 0xe) != 7) {
    if (*param_1 != 0) {
      thunk_FUN_1400020a8();
    }
    *(undefined2 *)((longlong)param_1 + 0xe) = 7;
  }
  return;
}



// FUNCTION 1432d4342 FUN_1432d4342 body=44 status=ok
// SIG undefined FUN_1432d4342(void)

void FUN_1432d4342(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cab2628;
  if (DAT_14cab2628 == 0) {
    return;
  }
  FUN_1458081fc(DAT_14cab2628);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1432d436e FUN_1432d436e body=14 status=ok
// SIG undefined FUN_1432d436e(void)

void FUN_1432d436e(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x248);
  return;
}



// FUNCTION 1432d437c FUN_1432d437c body=34 status=ok
// SIG undefined FUN_1432d437c(void)

void FUN_1432d437c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x5d8);
  lVar1 = *(longlong *)(param_1 + 0x5e0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1432d439e FUN_1432d439e body=1724 status=ok
// SIG undefined FUN_1432d439e(void)

void FUN_1432d439e(longlong param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined7 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined8 *local_180;
  code *local_178;
  code *local_170;
  char local_161;
  longlong local_160;
  int local_154;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *local_120;
  int local_118;
  longlong local_110;
  code *local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong *local_f0;
  int local_e8;
  longlong local_e0;
  longlong *local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_150 = param_3;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 6) != -1)) &&
     (*(short *)(param_1 + 8) != -1)) {
    local_c0 = param_1 + 0x18;
    local_161 = *(char *)(param_2 + 0x270);
    if (local_161 == '\0') {
      *(int *)(param_2 + 0x264) = *(int *)(param_2 + 0x264) + 1;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x264) = *(int *)(param_2 + 0x264) + 1;
      UNLOCK();
    }
    local_b8 = param_2;
    local_b0 = FUN_1403b8464(&local_c0);
    local_154 = *(int *)(param_2 + 0x10);
    lVar8 = param_1;
    if (local_b0 != local_154) {
      do {
        local_148 = lVar8;
        lVar8 = *(longlong *)(*(longlong *)(local_b8 + 0x60) + (longlong)local_b0 * 8);
        if (local_161 == '\0') {
          *(undefined4 *)(lVar8 + 0x14) = 0;
          local_140 = lVar8;
        }
        else {
          local_140 = 0;
        }
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar8 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d44d7;
            plVar15 = plVar15 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_1432d44d7:
        iVar5 = *(int *)(lVar8 + 0x14);
        if (iVar5 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        local_160 = *plVar15;
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar18 = *(longlong **)(lVar8 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar18 + 0x1e) == *(short *)(param_1 + 6)) goto LAB_1432d4521;
            plVar18 = plVar18 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar18 = (longlong *)0x0;
LAB_1432d4521:
        iVar6 = *(int *)(lVar8 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
        }
        LOCK();
        *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
        UNLOCK();
        lVar9 = *plVar18;
        FUN_1462513a0(lVar8,&local_78);
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar12 = *(longlong **)(lVar8 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 2)) goto LAB_1432d457e;
            plVar12 = plVar12 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar12 = (longlong *)0x0;
LAB_1432d457e:
        iVar7 = *(int *)(lVar8 + 0x14);
        if (iVar7 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
        }
        LOCK();
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        UNLOCK();
        local_110 = *plVar12;
        local_128 = *(undefined8 *)(lVar8 + 0x18);
        local_108 = local_78;
        local_100 = uStack_70;
        local_f8 = local_68;
        local_c8 = local_160;
        uVar4 = *(ushort *)(lVar8 + 0xe);
        local_120 = plVar12;
        local_118 = iVar7;
        local_f0 = plVar18;
        local_e8 = iVar6;
        local_e0 = lVar9;
        local_d8 = plVar15;
        local_d0 = iVar5;
        if ((ulonglong)uVar4 != 0) {
          uVar19 = 0;
          do {
            lVar8 = local_c8;
            plVar15 = (longlong *)(local_f8 + uVar19 * 8);
            if (local_f8 == 0) {
              plVar15 = (longlong *)0x0;
            }
            puVar2 = (undefined4 *)(local_110 + uVar19 * 0x10);
            local_138 = *puVar2;
            uStack_134 = puVar2[1];
            uStack_130 = puVar2[2];
            uStack_12c = puVar2[3];
            lVar9 = *(longlong *)(*local_150 + 8);
            lVar11 = (ulonglong)*(ushort *)(local_e0 + uVar19 * 4) * 0x128;
            local_4c = *(undefined4 *)(lVar9 + 0x110 + lVar11);
            lVar10 = *(longlong *)(lVar9 + 0x100 + lVar11);
            plVar18 = *(longlong **)(lVar9 + 0x108 + lVar11);
            if (plVar18 == (longlong *)0x0) {
              lVar9 = FUN_1405e0c42(lVar10 + 0x38);
              local_58 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
              LOCK();
              plVar12 = plVar18 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
              lVar9 = FUN_1405e0c42(lVar10 + 0x38);
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
              local_58 = plVar18;
            }
            local_60 = lVar10;
            plVar12 = (longlong *)FUN_140165676(&local_60);
            if (lVar9 != 0) {
              cVar3 = *(char *)local_150[1];
              uVar17 = (undefined7)((ulonglong)param_4 >> 8);
              param_4 = (undefined4 *)CONCAT71(uVar17,cVar3);
              if (*(char *)(lVar8 + uVar19) == '\x01') {
                param_4 = (undefined4 *)(CONCAT71(uVar17,cVar3) ^ 1);
                FUN_14755568a(lVar9,&local_138,&local_4c,param_4);
              }
              else if (cVar3 == '\0') {
                if (((plVar15 != (longlong *)0x0) && (lVar8 = *plVar15, lVar8 != 0)) &&
                   ((lVar11 = *(longlong *)(lVar8 + 0x10), lVar11 != 0 &&
                    ((lVar13 = FUN_145a67054(), lVar13 != 0 &&
                     ((*(byte *)(lVar13 + 0xd5) & 0x40) != 0)))))) {
                  if (DAT_14c950d78 == 0) {
                    local_78 = FUN_1449e2820;
                    local_170 = FUN_14081d0ea;
                    local_178 = FUN_14081d0ea;
                    local_180 = &local_78;
                    local_188 = &LAB_1468b50ee;
                    local_190 = FUN_1427f23a3;
                    local_198 = L"Engine";
                    local_1a0 = 0;
                    local_1a8 = 0x10004001;
                    local_1b0 = 8;
                    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,0x28);
                    param_4 = (undefined4 *)&DAT_1468b50f4;
                    local_160 = lVar13;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4)
                    ;
                    lVar13 = local_160;
                  }
                  if (DAT_14c950d78 != lVar13) {
                    do {
                      if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
                        lVar16 = 0;
                        do {
                          param_4 = *(undefined4 **)(*(longlong *)(lVar11 + 0x1d8) + lVar16);
                          if (((param_4 != (undefined4 *)0x0) &&
                              (*(int *)(lVar13 + 0x38) <= (int)param_4[0xe])) &&
                             (param_4 = *(undefined4 **)(param_4 + 0xc),
                             *(longlong *)(param_4 + (longlong)*(int *)(lVar13 + 0x38) * 2) ==
                             lVar13 + 0x30)) {
                            if (DAT_14c950c29 == '\x01') {
                              FUN_1456cec3c(lVar8);
                            }
                            uVar14 = FUN_145a67054();
                            FUN_144718840(lVar8,uVar14);
                            if (plVar12 != (longlong *)0x0) {
                              if (plVar18 != (longlong *)0x0) {
                                LOCK();
                                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                                UNLOCK();
                              }
                              local_1b8 = &local_88;
                              param_4 = &local_138;
                              local_88 = lVar10;
                              local_80 = plVar18;
                              FUN_1475740ae(&local_78,DAT_14cab25c0,local_4c,param_4);
                              local_a8 = (undefined4)local_78;
                              uStack_a4 = local_78._4_4_;
                              uStack_a0 = uStack_70;
                              uStack_9c = uStack_6c;
                              local_98 = local_68;
                              lVar10 = (**(code **)(*plVar12 + 0x20))(plVar12);
                              if (lVar10 == 0) {
LAB_1432d4964:
                                lVar10 = 0;
                              }
                              else {
                                lVar11 = FUN_1411def2e();
                                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) <
                                     *(int *)(lVar11 + 0x38)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                                     (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30))
                                goto LAB_1432d4964;
                              }
                              FUN_14751fe40(lVar8,lVar10,&local_a8);
                            }
                            goto LAB_1432d47d2;
                          }
                          lVar16 = lVar16 + 0x10;
                        } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar16);
                      }
                      lVar11 = *(longlong *)(lVar11 + 0x40);
                    } while (lVar11 != 0);
                  }
                }
LAB_1432d47d2:
                FUN_140e06640(lVar9,&local_138);
              }
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar18 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar4);
        }
        FUN_14754eb34(&local_128);
        param_1 = local_148;
        if (local_140 != 0) {
          *(undefined4 *)(local_140 + 0x14) = 1;
        }
        local_b0 = FUN_1403b8464(&local_c0);
        lVar8 = local_148;
      } while (local_b0 != local_154);
    }
    if (local_c0 != 0) {
      if (*(char *)(local_b8 + 0x270) == '\0') {
        *(int *)(local_b8 + 0x264) = *(int *)(local_b8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_b8 + 0x264) = *(int *)(local_b8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432d4a5b FUN_1432d4a5b body=41 status=ok
// SIG undefined FUN_1432d4a5b(void)

void FUN_1432d4a5b(void)

{
  DAT_14cab26c0 = 0;
  if (DAT_14cab26b8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62d88();
  return;
}



// FUNCTION 1432d4a94 FUN_1432d4a94 body=364 status=ok
// SIG undefined FUN_1432d4a94(void)

void FUN_1432d4a94(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_1c8 [40];
  undefined2 *local_1a0;
  undefined1 *local_198;
  longlong local_190 [2];
  undefined1 local_180;
  undefined2 local_174;
  undefined2 local_172;
  undefined1 local_170 [2];
  undefined2 local_16e;
  undefined1 local_16b;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 *local_148;
  longlong local_140;
  longlong local_e8;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = FUN_14009d2a0();
  local_68 = 0x10000000000;
  local_40 = 0x10000000000;
  local_38 = 0;
  uStack_30 = 0;
  local_140 = (longlong)&local_160 + 2;
  local_160 = (undefined **)CONCAT62(local_160._2_6_,*(undefined2 *)(lVar1 + 0x11a));
  local_148 = &local_160;
  FUN_1403b5126(local_88,&local_148,2);
  local_160 = &PTR_FUN_14a473cd0;
  local_158 = param_1;
  local_150 = FUN_14009d2a0();
  FUN_140857d6a(*(longlong *)(param_1 + 0x28) + 0x28,local_88,&local_160,1);
  local_190[1] = 0;
  local_180 = 1;
  local_16e = *(undefined2 *)(lVar1 + 0x58);
  local_16b = 0;
  local_168 = 0x6ff;
  local_164 = 0;
  local_174 = *(undefined2 *)(lVar1 + 0x11a);
  local_1a0 = &local_174;
  local_172 = *(undefined2 *)(lVar1 + 0x11c);
  local_198 = local_170;
  local_190[0] = param_1;
  FUN_1403b5028(local_170,&local_148);
  FUN_1403b79be(&local_148,*(longlong *)(param_1 + 0x28) + 0x28,local_190);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d4c03 FUN_1432d4c03 body=69 status=ok
// SIG undefined FUN_1432d4c03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d4c03(void)

{
  _DAT_14cab2750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d4c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2758,1);
  return;
}



// FUNCTION 1432d4c48 FUN_1432d4c48 body=69 status=ok
// SIG undefined FUN_1432d4c48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d4c48(void)

{
  _DAT_14cab2760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d4c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2768,1);
  return;
}



// FUNCTION 1432d4c8e FUN_1432d4c8e body=22 status=ok
// SIG undefined FUN_1432d4c8e(void)

void FUN_1432d4c8e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  return;
}



// FUNCTION 1432d4ca4 FUN_1432d4ca4 body=75 status=ok
// SIG undefined FUN_1432d4ca4(void)

void FUN_1432d4ca4(longlong param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
  if (uVar2 == 0xffff) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8);
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar2 * 8);
  }
  *(uint *)(param_2 + 1) = uVar1;
  *(ushort *)(param_2 + 2) = param_3;
  return;
}



// FUNCTION 1432d4cf0 FUN_1432d4cf0 body=196 status=ok
// SIG undefined FUN_1432d4cf0(void)

void FUN_1432d4cf0(longlong *param_1,ushort param_2)

{
  short sVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  short local_38 [3];
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  sVar1 = *(short *)(*(longlong *)(lVar2 + 0x98) + 4 + (ulonglong)param_2 * 8);
  local_32 = param_2;
  if (sVar1 != -1) {
    local_38[0] = sVar1;
    FUN_1403b68b0(lVar2 + 0xd0,local_38,&local_32);
  }
  FUN_1403b6834(lVar2 + 0xd0,&local_32);
  FUN_1403b6782(lVar2 + 0x158,&local_32);
  FUN_1403b67d4(lVar2 + 0x98,(ulonglong)param_2);
  if (param_1[1] != 0) {
    FUN_1403b73fc(param_1[1],local_38,&local_32);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d4db6 FUN_1432d4db6 body=42 status=ok
// SIG undefined FUN_1432d4db6(void)

undefined * FUN_1432d4db6(longlong param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_2 * 8);
  if (uVar1 != 0xffff) {
    return (undefined *)((ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 8));
  }
  return &DAT_14cab2728;
}



// FUNCTION 1432d4de5 FUN_1432d4de5 body=41 status=ok
// SIG undefined FUN_1432d4de5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d4de5(void)

{
  _DAT_14cab2950 = 0;
  if (DAT_14cab2948 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62e26();
  return;
}



// FUNCTION 1432d4e17 FUN_1432d4e17 body=24 status=ok
// SIG undefined FUN_1432d4e17(void)

void FUN_1432d4e17(void)

{
  FUN_145d70b0a();
  FUN_1461bf15a();
  FUN_1457d98ce();
  return;
}



// FUNCTION 1432d4e30 FUN_1432d4e30 body=57 status=ok
// SIG undefined FUN_1432d4e30(void)

void FUN_1432d4e30(longlong param_1)

{
  if ((*(ulonglong *)(param_1 + 0x6d0) == 0) ||
     (*(ulonglong *)(param_1 + 0x6d0) < *(ulonglong *)(param_1 + 0x278))) {
    FUN_1447b9e90(param_1);
    *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(param_1 + 0x270);
  }
  return;
}



// FUNCTION 1432d4e6a FUN_1432d4e6a body=16 status=ok
// SIG undefined FUN_1432d4e6a(void)

undefined8 FUN_1432d4e6a(longlong *param_1)

{
  return *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
}



// FUNCTION 1432d4e7a FUN_1432d4e7a body=4062 status=ok
// SIG undefined FUN_1432d4e7a(void)

void FUN_1432d4e7a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined1 auStack_2b8 [40];
  longlong local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined2 local_270;
  undefined2 local_26e;
  undefined1 local_26b;
  undefined4 local_268;
  undefined1 local_264;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  uint local_220 [8];
  int local_200;
  int local_1fc;
  longlong local_1f8;
  undefined1 local_198 [64];
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [32];
  undefined1 *local_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_158 = 0;
  local_150 = 0x400000000;
  local_128 = (undefined1 *)0x0;
  local_120 = 0x400000000;
  lVar9 = FUN_14009d2a0();
  lVar1 = param_1 + 0x40;
  lVar10 = *(longlong *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(lVar10 + 0x548);
  if ((*(int *)(lVar10 + 0x29c) == 0) && (*(char *)(lVar10 + 0x298) != '\0')) {
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0x400000000;
    local_258 = &local_260;
    local_260 = CONCAT62(local_260._2_6_,0xffff);
    local_250 = (longlong)&local_260 + 2;
    local_290 = param_3;
    FUN_147552f5e(param_2,&local_118);
    puVar23 = (undefined8 *)0x0;
    if ((int)local_f0 != 0) {
      puVar23 = &local_118;
    }
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar3;
    if (puVar13 != (uint *)0x0) goto LAB_1432d53ef;
    while( true ) {
      uVar16 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar16 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar16 | 1;
        __tlregdtor(&LAB_1432d8424);
      }
      lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar10 + 0x310);
      *(undefined8 *)(lVar10 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar3 = puVar12;
      FUN_140217a48(puVar3);
      puVar13 = (uint *)*puVar3;
LAB_1432d53ef:
      puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar20 + 0x19);
      uVar16 = puVar13[0x12];
      if (puVar19 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar8 = *puVar13;
        *puVar13 = *puVar13 + uVar16 + 1;
        UNLOCK();
        if ((uVar8 ^ uVar16) != 0xffffffff) break;
        puVar13 = (uint *)*puVar3;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar20 + 0x19);
        uVar16 = 0;
        if (puVar19 <= puVar13 + 0x4000) {
          uVar16 = 1;
          goto LAB_1432d5473;
        }
      }
    }
    uVar16 = uVar16 + 1;
LAB_1432d5473:
    *(uint **)(puVar13 + 0x10) = puVar19;
    puVar13[0x12] = uVar16;
    FUN_1447247dc(puVar20,puVar23);
    param_3 = local_290;
    *puVar20 = &PTR_FUN_14a4757d0;
    puVar20[0x15] = uVar11;
    puVar20[0x16] = lVar1;
    *(undefined1 *)((longlong)puVar20 + 0xb9) = 0;
    *(undefined4 *)((longlong)puVar20 + 0xbc) = 0x6ff;
    *(undefined1 *)(puVar20 + 0x18) = 0;
    *(undefined1 *)((longlong)puVar20 + 0xc3) = (undefined1)local_26e;
    *(undefined2 *)((longlong)puVar20 + 0xc1) = local_270;
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar10 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar10 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar10 + 0x30);
    }
    puVar20[0xf] = uVar11;
    puVar20[0x10] = 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
    }
    local_258 = (undefined8 *)CONCAT71(local_258._1_7_,1);
    local_278 = puVar20;
    FUN_1447439e4();
    puVar23 = &local_118;
    if (local_f8 != (undefined8 *)0x0) {
      puVar23 = local_f8;
    }
    FUN_144717c65(puVar23,local_f0 & 0xffffffff);
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_278 != (undefined8 *)0x0) {
      FUN_147552ffc(local_198,*(undefined2 *)(lVar9 + 0x54),&local_278);
      FUN_147552ffc(local_198,*(undefined2 *)(lVar9 + 0x56),&local_278);
    }
  }
  else {
    local_118 = uVar11;
    local_110 = lVar1;
    FUN_140522b40();
    local_278 = (undefined8 *)0x0;
  }
  local_270 = *(undefined2 *)(lVar9 + 0x4e);
  local_26e = *(undefined2 *)(lVar9 + 0x54);
  local_26b = 0;
  local_268 = 0x6ff;
  local_264 = 0;
  lVar10 = FUN_14009d2a0();
  uVar4 = *(ushort *)(lVar10 + 0x128);
  FUN_14179e2a2(&local_258,&local_270);
  iVar22 = local_200;
  iVar15 = uVar4 + 1;
  iVar21 = iVar15 - local_200;
  if (iVar21 != 0 && local_200 <= iVar15) {
    if (local_200 == 0) {
LAB_1432d4f9e:
      if (local_1fc <= (int)(uint)uVar4) {
        local_1fc = 0x100;
        FUN_14497ddce(local_220,local_200);
        iVar15 = local_200 + iVar21;
      }
      iVar18 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar18 = iVar15;
      }
      local_200 = iVar15;
      iVar15 = local_200;
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_220[iVar18 >> 5] = (local_220[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        iVar15 = local_200;
      }
    }
    else {
      iVar18 = local_200 + 0x1e;
      if (-1 < local_200 + -1) {
        iVar18 = local_200 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1432d4f9e;
    }
    local_200 = iVar15;
    FUN_1447c45ca(local_220,iVar22,iVar21,0);
  }
  local_220[uVar4 >> 5] = local_220[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  if (((short)local_258 == -1) || (local_258._2_2_ == -1)) {
LAB_1432d503a:
    local_280 = (undefined8 *)0x0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar10 = lVar5 + 0x28;
    cVar7 = FUN_14179e3fe(&local_258,lVar10);
    if (cVar7 == '\0') goto LAB_1432d503a;
    if ((*(int *)(lVar5 + 0x29c) != 0) || (*(char *)(lVar5 + 0x298) == '\0')) {
      local_260 = lVar1;
      FUN_147550668(&local_118,lVar10,&local_258);
      FUN_1432d856a(&local_118,&local_260);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1432d503a;
    }
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0x400000000;
    local_290 = param_3;
    FUN_1475506e0(&local_258,local_198,&local_118);
    puVar23 = (undefined8 *)0x0;
    if ((int)local_f0 != 0) {
      puVar23 = &local_118;
    }
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar3;
    if (puVar13 != (uint *)0x0) goto LAB_1432d5729;
    while( true ) {
      uVar16 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar16 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar16 | 1;
        __tlregdtor(&LAB_1432d8424);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar3 = puVar12;
      FUN_140217a48(puVar3);
      puVar13 = (uint *)*puVar3;
LAB_1432d5729:
      puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar20 + 0x30);
      uVar16 = puVar13[0x12];
      if (puVar19 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar8 = *puVar13;
        *puVar13 = *puVar13 + uVar16 + 1;
        UNLOCK();
        if ((uVar8 ^ uVar16) != 0xffffffff) break;
        puVar13 = (uint *)*puVar3;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar20 + 0x30);
        uVar16 = 0;
        if (puVar19 <= puVar13 + 0x4000) {
          uVar16 = 1;
          goto LAB_1432d57ab;
        }
      }
    }
    uVar16 = uVar16 + 1;
LAB_1432d57ab:
    *(uint **)(puVar13 + 0x10) = puVar19;
    puVar13[0x12] = uVar16;
    FUN_1447247dc(puVar20,puVar23);
    *puVar20 = &PTR_FUN_14a4757e0;
    FUN_147550668(puVar20 + 0x15,lVar10,&local_258);
    puVar20[0x2f] = lVar1;
    uVar16 = *(uint *)(puVar20 + 0x16);
    if (((ulonglong)uVar16 & 0xff) == 0xff) {
      uVar8 = uVar16 >> 10 & 3;
      iVar22 = 0;
      if ((uVar16 >> 9 & 1) == 0 || uVar8 < 2) {
        uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
        iVar22 = 0;
      }
      else {
        uVar24 = 2;
      }
    }
    else {
      iVar22 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
      uVar24 = 5;
    }
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    param_3 = local_290;
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar10 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar10 == 0) {
      uVar6 = 1;
      if ((char)uVar24 != '\x06') {
        uVar6 = uVar24;
      }
      uVar24 = uVar6;
      uVar11 = 0;
    }
    else {
      if ((char)uVar24 == '\x06') {
        uVar24 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar10 + 0x30);
    }
    puVar20[0xf] = uVar11;
    puVar20[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar20 + 0x1c) = iVar22;
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
    }
    local_260 = CONCAT71(local_260._1_7_,1);
    local_280 = puVar20;
    FUN_1447439e4(puVar20);
    if (param_3 != 0) {
      FUN_147550798(&local_258,&local_280,param_3);
    }
    puVar23 = &local_118;
    if (local_f8 != (undefined8 *)0x0) {
      puVar23 = local_f8;
    }
    FUN_144717c65(puVar23,local_f0 & 0xffffffff);
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar20 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
  }
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  local_270 = *(undefined2 *)(lVar9 + 0x4e);
  local_26e = *(undefined2 *)(lVar9 + 0x56);
  local_26b = 0;
  local_268 = 0x6ff;
  local_264 = 0;
  lVar10 = FUN_14009d2a0();
  uVar4 = *(ushort *)(lVar10 + 0x128);
  FUN_14179e48c(&local_258,&local_270);
  iVar22 = local_200;
  iVar15 = uVar4 + 1;
  iVar21 = iVar15 - local_200;
  if (iVar21 != 0 && local_200 <= iVar15) {
    if (local_200 == 0) {
LAB_1432d50cd:
      if (local_1fc <= (int)(uint)uVar4) {
        local_1fc = 0x100;
        FUN_14497ddce(local_220,local_200);
        iVar15 = local_200 + iVar21;
      }
      iVar18 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar18 = iVar15;
      }
      local_200 = iVar15;
      iVar15 = local_200;
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_220[iVar18 >> 5] = (local_220[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        iVar15 = local_200;
      }
    }
    else {
      iVar18 = local_200 + 0x1e;
      if (-1 < local_200 + -1) {
        iVar18 = local_200 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1432d50cd;
    }
    local_200 = iVar15;
    FUN_1447c45ca(local_220,iVar22,iVar21,0);
  }
  local_220[uVar4 >> 5] = local_220[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  if (((short)local_258 != -1) && (local_258._2_2_ != -1)) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    lVar10 = lVar9 + 0x28;
    cVar7 = FUN_14179e5e8(&local_258,lVar10);
    if (cVar7 != '\0') {
      if ((*(int *)(lVar9 + 0x29c) == 0) && (*(char *)(lVar9 + 0x298) != '\0')) {
        local_f8 = (undefined8 *)0x0;
        local_f0 = 0x400000000;
        FUN_147550a54(&local_258,local_198,&local_118);
        puVar23 = (undefined8 *)0x0;
        if ((int)local_f0 != 0) {
          puVar23 = &local_118;
        }
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar3;
        if (puVar13 != (uint *)0x0) goto LAB_1432d5910;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_1432d8424);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          FUN_140217a48(puVar3);
          puVar13 = (uint *)*puVar3;
LAB_1432d5910:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar20 + 0x30);
          uVar16 = puVar13[0x12];
          if (puVar19 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar8 = *puVar13;
            *puVar13 = *puVar13 + uVar16 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar16) != 0xffffffff) break;
            puVar13 = (uint *)*puVar3;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar20 + 0x30);
            uVar16 = 0;
            if (puVar19 <= puVar13 + 0x4000) {
              uVar16 = 1;
              goto LAB_1432d5992;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_1432d5992:
        *(uint **)(puVar13 + 0x10) = puVar19;
        puVar13[0x12] = uVar16;
        FUN_1447247dc(puVar20,puVar23);
        *puVar20 = &PTR_FUN_14a4757f0;
        FUN_1475509dc(puVar20 + 0x15,lVar10,&local_258);
        puVar20[0x2f] = lVar1;
        uVar16 = *(uint *)(puVar20 + 0x16);
        if (((ulonglong)uVar16 & 0xff) == 0xff) {
          uVar8 = uVar16 >> 10 & 3;
          iVar22 = 0;
          if ((uVar16 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar22 = 0;
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar22 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar1 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar1 == 0) {
          uVar6 = 1;
          if ((char)uVar24 != '\x06') {
            uVar6 = uVar24;
          }
          uVar24 = uVar6;
          uVar11 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar1 + 0x30);
        }
        puVar20[0xf] = uVar11;
        puVar20[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar22;
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
        }
        local_260 = CONCAT71(local_260._1_7_,1);
        local_288 = puVar20;
        FUN_1447439e4(puVar20);
        if (param_3 != 0) {
          FUN_147550b0c(&local_258,&local_288,param_3);
        }
        puVar23 = &local_118;
        if (local_f8 != (undefined8 *)0x0) {
          puVar23 = local_f8;
        }
        FUN_144717c65(puVar23,local_f0 & 0xffffffff);
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar20 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
        goto LAB_1432d516e;
      }
      local_260 = lVar1;
      FUN_1475509dc(&local_118,lVar10,&local_258);
      FUN_1432d8816(&local_118,&local_260);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_288 = (undefined8 *)0x0;
LAB_1432d516e:
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if (local_278 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_278 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_278)(local_278,1);
    }
  }
  puVar17 = local_128;
  if (local_128 == (undefined1 *)0x0) {
    puVar17 = local_148;
  }
  FUN_144717c65(puVar17,local_120 & 0xffffffff);
  if (local_128 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_198);
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432d5e5a FUN_1432d5e5a body=1404 status=ok
// SIG undefined FUN_1432d5e5a(void)

undefined8 *
FUN_1432d5e5a(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_f0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     ((param_1[3] != -1 && (cVar4 = FUN_1414cdd38(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      FUN_147550de6(param_1,param_4,&local_128);
      puVar11 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar11 = &local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432d607b;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432d8424);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432d607b:
        puVar12 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar12 + 0x32);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar12 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar12 + 0x32);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432d60ff;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432d60ff:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar12,puVar11);
      *puVar12 = &PTR_FUN_14a475820;
      uVar8 = *(undefined8 *)(param_1 + 4);
      puVar12[0x15] = *(undefined8 *)param_1;
      puVar12[0x16] = uVar8;
      *(undefined4 *)(puVar12 + 0x17) = *(undefined4 *)(param_1 + 8);
      puVar12[0x1c] = 0x10000000000;
      puVar12[0x21] = 0x10000000000;
      puVar12[0x28] = 0x10000000000;
      puVar12[0x22] = 0;
      puVar12[0x23] = 0;
      puVar12[0x2d] = 0x10000000000;
      FUN_145bcc69a(puVar12 + 0x15,puVar12 + 0x18);
      puVar12[0x2e] = param_3;
      puVar12[0x2f] = *(undefined8 *)(param_3 + 0x248);
      uVar8 = *param_7;
      puVar12[0x30] = *param_6;
      puVar12[0x31] = uVar8;
      uVar9 = *(uint *)((longlong)puVar12 + 0xb4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar14 != '\x06') {
          uVar3 = uVar14;
        }
        uVar14 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar12[0xf] = uVar8;
      puVar12[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar12 + 0x1c) = iVar13;
      *param_2 = puVar12;
      uVar8 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_138 = CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_147550ee6(param_1,param_2,param_5);
      }
      puVar11 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar11 = local_108;
      }
      FUN_144717c65(puVar11,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432d5ebc;
    }
    local_138 = *param_6;
    local_130 = *param_7;
    local_118 = *(undefined4 *)(param_1 + 8);
    local_128 = *(undefined8 *)param_1;
    uStack_120 = *(undefined8 *)(param_1 + 4);
    local_f0 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_90 = 0x10000000000;
    local_c0 = 0;
    uStack_b8 = 0;
    local_68 = 0x10000000000;
    FUN_145bcc69a(&local_128);
    local_58 = *(undefined8 *)(param_3 + 0x248);
    local_60 = param_3;
    FUN_1432d8acc(&local_128,&local_138);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432d5ebc:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d63d8 FUN_1432d63d8 body=1769 status=ok
// SIG undefined FUN_1432d63d8(void)

void FUN_1432d63d8(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  int iVar20;
  uint *puVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  int iVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  longlong lVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  uint *puVar38;
  uint uVar39;
  undefined1 (*pauVar40) [16];
  ulonglong uVar41;
  float fVar42;
  undefined1 auStack_3e8 [40];
  undefined1 (*local_3c0) [16];
  undefined1 (*local_3b8) [16];
  undefined1 (*local_3b0) [16];
  undefined1 (*local_3a8) [16];
  undefined1 (*local_3a0) [16];
  longlong local_398;
  uint *local_390;
  longlong local_388;
  longlong local_380;
  undefined4 local_378 [188];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  puVar38 = (uint *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    uVar41 = 1;
    uVar31 = 0;
    iVar20 = 0;
    iVar30 = 0;
  }
  else {
    puVar21 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar21 = puVar38;
    }
    uVar39 = *puVar21;
    if (uVar39 == 0) {
      iVar20 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar20 = iVar1 + -1;
      }
      uVar31 = 0;
      uVar41 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar41 = uVar31;
      }
      iVar30 = 0;
      do {
        if (uVar41 == uVar31) goto LAB_1432d66fb;
        iVar30 = iVar30 + 0x20;
        uVar39 = puVar21[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar39 == 0);
    }
    else {
      uVar31 = 0;
      iVar30 = 0;
    }
    uVar41 = (ulonglong)(-uVar39 & uVar39);
    uVar28 = uVar41 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    iVar20 = (iVar30 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar20) {
      iVar20 = iVar1;
    }
  }
  if (iVar20 != iVar1) {
    uVar39 = 0xffffffff;
    local_398 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
    local_390 = puVar38;
    do {
      lVar33 = *(longlong *)(param_1 + 0x40);
      lVar22 = (longlong)iVar20 * 0x20;
      uVar27 = *(uint *)(lVar33 + 0x10 + lVar22);
      lVar34 = *(longlong *)(lVar33 + 8 + lVar22);
      if (*(int *)(*(longlong *)(local_398 + 8) + 0x88 +
                  (ulonglong)*(ushort *)(lVar33 + lVar22) * 0x128) == 0) {
        if (1 < (int)uVar27) {
          memset(local_378,0,0x2f0);
          local_380 = (ulonglong)uVar27 * 0x40 + lVar34 + -0x40;
          local_388 = lVar34;
          fVar42 = logf((float)(int)uVar27);
          local_378[0] = (int)(longlong)(fVar42 + fVar42);
          plVar29 = &local_388;
          do {
            pauVar23 = (undefined1 (*) [16])*plVar29;
            pauVar32 = (undefined1 (*) [16])plVar29[1];
            iVar20 = (int)plVar29[2];
            iVar26 = (int)((ulonglong)((longlong)pauVar32 - (longlong)pauVar23) >> 6);
            pauVar36 = pauVar32;
            pauVar37 = pauVar23;
            if (iVar20 != 0) {
LAB_1432d6546:
              if (8 < (int)(iVar26 + 1U)) {
                uVar28 = (ulonglong)(iVar26 + 1U >> 1);
                auVar16 = *(undefined1 (*) [12])pauVar23[uVar28 * 4];
                auVar15 = pauVar23[uVar28 * 4 + 1];
                uVar3 = *(undefined8 *)pauVar23[uVar28 * 4 + 2];
                uVar4 = *(undefined8 *)(pauVar23[uVar28 * 4 + 2] + 8);
                uVar5 = *(undefined8 *)pauVar23[uVar28 * 4 + 3];
                uVar6 = *(undefined8 *)(pauVar23[uVar28 * 4 + 3] + 8);
                uStack_7c = (undefined4)
                            ((ulonglong)*(undefined8 *)(pauVar23[uVar28 * 4] + 8) >> 0x20);
                uVar7 = *(undefined8 *)*pauVar23;
                uVar8 = *(undefined8 *)(*pauVar23 + 8);
                uVar9 = *(undefined8 *)pauVar23[1];
                uVar10 = *(undefined8 *)(pauVar23[1] + 8);
                uVar11 = *(undefined8 *)pauVar23[2];
                uVar12 = *(undefined8 *)(pauVar23[2] + 8);
                uVar13 = *(undefined8 *)(pauVar23[3] + 8);
                *(undefined8 *)pauVar23[uVar28 * 4 + 3] = *(undefined8 *)pauVar23[3];
                *(undefined8 *)(pauVar23[uVar28 * 4 + 3] + 8) = uVar13;
                *(undefined8 *)pauVar23[uVar28 * 4 + 2] = uVar11;
                *(undefined8 *)(pauVar23[uVar28 * 4 + 2] + 8) = uVar12;
                *(undefined8 *)pauVar23[uVar28 * 4 + 1] = uVar9;
                *(undefined8 *)(pauVar23[uVar28 * 4 + 1] + 8) = uVar10;
                *(undefined8 *)pauVar23[uVar28 * 4] = uVar7;
                *(undefined8 *)(pauVar23[uVar28 * 4] + 8) = uVar8;
                auVar14._12_4_ = uStack_7c;
                auVar14._0_12_ = auVar16;
                *(undefined8 *)pauVar23[3] = uVar5;
                *(undefined8 *)(pauVar23[3] + 8) = uVar6;
                *(undefined8 *)pauVar23[2] = uVar3;
                *(undefined8 *)(pauVar23[2] + 8) = uVar4;
                pauVar23[1] = auVar15;
                *pauVar23 = auVar14;
                local_3b8 = pauVar32 + 4;
                local_3c0 = pauVar23;
                do {
                  local_3a8 = local_3c0 + 4;
                  pauVar35 = local_3a8;
                  do {
                    local_3b0 = pauVar35;
                    pauVar18 = local_3a8;
                    local_3a0 = local_3a8;
                    local_3c0 = local_3b0;
                    if (pauVar32 < local_3b0) break;
                    iVar26 = (int)*(undefined8 *)(pauVar23[2] + 0xc);
                    iVar24 = (int)*(undefined8 *)(local_3b0[2] + 0xc);
                    if (iVar26 < iVar24) break;
                    local_3a8 = local_3a8 + 4;
                    pauVar35 = local_3b0 + 4;
                  } while ((iVar26 != iVar24) ||
                          ((float)((ulonglong)*(undefined8 *)(local_3b0[2] + 0xc) >> 0x20) <=
                           (float)((ulonglong)*(undefined8 *)(pauVar23[2] + 0xc) >> 0x20)));
                  local_3a8 = local_3b8 + -4;
                  pauVar35 = local_3b8 + -8;
                  do {
                    pauVar40 = pauVar35;
                    pauVar19 = local_3a8;
                    local_3b8 = local_3a8;
                    if (local_3a8 <= pauVar23) break;
                    pauVar17 = local_3a8 + 2;
                    iVar26 = (int)*(undefined8 *)(*pauVar17 + 0xc);
                    iVar24 = (int)*(undefined8 *)(pauVar23[2] + 0xc);
                    if (iVar26 < iVar24) break;
                    local_3a8 = local_3a8 + -4;
                    pauVar35 = pauVar40 + -4;
                  } while ((iVar26 != iVar24) ||
                          ((float)((ulonglong)*(undefined8 *)(pauVar23[2] + 0xc) >> 0x20) <=
                           (float)((ulonglong)*(undefined8 *)(*pauVar17 + 0xc) >> 0x20)));
                  if (pauVar19 < local_3b0) goto LAB_1432d6982;
                  auVar16 = *(undefined1 (*) [12])*local_3b0;
                  auVar14 = local_3b0[1];
                  uVar3 = *(undefined8 *)local_3b0[2];
                  uVar4 = *(undefined8 *)(local_3b0[2] + 8);
                  uVar5 = *(undefined8 *)local_3b0[3];
                  uVar6 = *(undefined8 *)(local_3b0[3] + 8);
                  uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(*local_3b0 + 8) >> 0x20);
                  uVar7 = *(undefined8 *)*pauVar19;
                  uVar8 = *(undefined8 *)(*pauVar19 + 8);
                  uVar9 = *(undefined8 *)pauVar19[1];
                  uVar10 = *(undefined8 *)(pauVar19[1] + 8);
                  uVar11 = *(undefined8 *)pauVar19[2];
                  uVar12 = *(undefined8 *)(pauVar19[2] + 8);
                  uVar13 = *(undefined8 *)(pauVar19[3] + 8);
                  *(undefined8 *)local_3b0[3] = *(undefined8 *)pauVar19[3];
                  *(undefined8 *)(local_3b0[3] + 8) = uVar13;
                  *(undefined8 *)local_3b0[2] = uVar11;
                  *(undefined8 *)(local_3b0[2] + 8) = uVar12;
                  *(undefined8 *)local_3b0[1] = uVar9;
                  *(undefined8 *)(local_3b0[1] + 8) = uVar10;
                  *(undefined8 *)*local_3b0 = uVar7;
                  *(undefined8 *)(*local_3b0 + 8) = uVar8;
                  auVar15._12_4_ = uStack_7c;
                  auVar15._0_12_ = auVar16;
                  *(undefined8 *)pauVar19[3] = uVar5;
                  *(undefined8 *)(pauVar19[3] + 8) = uVar6;
                  *(undefined8 *)pauVar19[2] = uVar3;
                  *(undefined8 *)(pauVar19[2] + 8) = uVar4;
                  pauVar19[1] = auVar14;
                  *pauVar19 = auVar15;
                } while( true );
              }
              for (; pauVar40 = local_3b0, pauVar37 = pauVar23, pauVar36 = pauVar23,
                  pauVar23 < pauVar32; pauVar32 = pauVar32 + -4) {
                while (pauVar36 = pauVar36 + 4, pauVar36 <= pauVar32) {
                  iVar26 = (int)*(undefined8 *)(pauVar37[2] + 0xc);
                  iVar20 = (int)*(undefined8 *)(pauVar36[2] + 0xc);
                  if ((iVar26 < iVar20) ||
                     ((float)((ulonglong)*(undefined8 *)(pauVar37[2] + 0xc) >> 0x20) <
                      (float)((ulonglong)*(undefined8 *)(pauVar36[2] + 0xc) >> 0x20) &&
                      iVar26 == iVar20)) {
                    pauVar37 = pauVar36;
                  }
                }
                auVar14 = pauVar37[1];
                local_68 = *(undefined8 *)pauVar37[2];
                uStack_60 = *(undefined8 *)(pauVar37[2] + 8);
                local_58 = *(undefined8 *)pauVar37[3];
                uStack_50 = *(undefined8 *)(pauVar37[3] + 8);
                local_78 = *(undefined8 *)pauVar37[1];
                uStack_70 = *(undefined8 *)(pauVar37[1] + 8);
                local_88 = (undefined4)*(undefined8 *)*pauVar37;
                uStack_84 = (undefined4)((ulonglong)*(undefined8 *)*pauVar37 >> 0x20);
                uStack_80 = (undefined4)*(undefined8 *)(*pauVar37 + 8);
                uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                uVar3 = *(undefined8 *)*pauVar32;
                uVar4 = *(undefined8 *)(*pauVar32 + 8);
                uVar5 = *(undefined8 *)pauVar32[1];
                uVar6 = *(undefined8 *)(pauVar32[1] + 8);
                uVar7 = *(undefined8 *)pauVar32[2];
                uVar8 = *(undefined8 *)(pauVar32[2] + 8);
                uVar9 = *(undefined8 *)(pauVar32[3] + 8);
                *(undefined8 *)pauVar37[3] = *(undefined8 *)pauVar32[3];
                *(undefined8 *)(pauVar37[3] + 8) = uVar9;
                *(undefined8 *)pauVar37[2] = uVar7;
                *(undefined8 *)(pauVar37[2] + 8) = uVar8;
                *(undefined8 *)pauVar37[1] = uVar5;
                *(undefined8 *)(pauVar37[1] + 8) = uVar6;
                *(undefined8 *)*pauVar37 = uVar3;
                *(undefined8 *)(*pauVar37 + 8) = uVar4;
                *(undefined8 *)pauVar32[3] = local_58;
                *(undefined8 *)(pauVar32[3] + 8) = uStack_50;
                *(undefined8 *)pauVar32[2] = local_68;
                *(undefined8 *)(pauVar32[2] + 8) = uStack_60;
                pauVar32[1] = auVar14;
                *(undefined4 *)*pauVar32 = local_88;
                *(undefined4 *)(*pauVar32 + 4) = uStack_84;
                *(undefined4 *)(*pauVar32 + 8) = uStack_80;
                *(undefined4 *)(*pauVar32 + 0xc) = uStack_7c;
              }
              goto LAB_1432d6646;
            }
LAB_1432d6767:
            local_3c0 = pauVar23;
            FUN_14755144b(local_3c0);
            pauVar40 = local_3b0;
LAB_1432d6646:
            local_3b0 = pauVar40;
            plVar29 = plVar29 + -3;
            puVar38 = local_390;
          } while (&local_388 <= plVar29);
        }
      }
      else {
        FUN_147551856(lVar34,(ulonglong)uVar27);
      }
      uVar39 = uVar39 & ~(uint)uVar41;
      puVar21 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar21 = puVar38;
      }
      iVar26 = *(int *)(param_1 + 0x68);
      iVar20 = (int)uVar31;
      lVar33 = (longlong)iVar20;
      uVar27 = puVar21[lVar33] & uVar39;
      if (uVar27 == 0) {
        iVar24 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar24 = iVar26 + -1;
        }
        iVar24 = iVar24 >> 5;
        iVar30 = iVar30 + 0x20;
        iVar25 = iVar24;
        if (iVar24 < iVar20) {
          iVar25 = iVar20;
        }
        if (iVar20 < iVar24) {
          lVar34 = 0;
          do {
            uVar27 = puVar21[lVar33 + lVar34 + 1];
            if (uVar27 != 0) {
              uVar31 = (ulonglong)(iVar20 + (int)lVar34 + 1);
              uVar39 = 0xffffffff;
              goto LAB_1432d66c7;
            }
            iVar30 = iVar30 + 0x20;
            lVar34 = lVar34 + 1;
          } while (iVar25 - lVar33 != lVar34);
          uVar39 = 0xffffffff;
          iVar20 = iVar25;
        }
        uVar31 = (ulonglong)(iVar20 + 1);
        iVar20 = iVar26;
      }
      else {
LAB_1432d66c7:
        uVar41 = (ulonglong)(-uVar27 & uVar27);
        uVar28 = uVar41 * 2 + 1;
        lVar33 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        iVar20 = (iVar30 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar20) {
          iVar20 = iVar26;
        }
      }
    } while (iVar20 != iVar1);
  }
LAB_1432d66fb:
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1432d6982:
  auVar14 = pauVar23[1];
  local_68 = *(undefined8 *)pauVar23[2];
  uStack_60 = *(undefined8 *)(pauVar23[2] + 8);
  local_58 = *(undefined8 *)pauVar23[3];
  uStack_50 = *(undefined8 *)(pauVar23[3] + 8);
  local_78 = *(undefined8 *)pauVar23[1];
  uStack_70 = *(undefined8 *)(pauVar23[1] + 8);
  local_88 = (undefined4)*(undefined8 *)*pauVar23;
  uStack_84 = (undefined4)((ulonglong)*(undefined8 *)*pauVar23 >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(*pauVar23 + 8);
  uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
  uVar3 = *(undefined8 *)*pauVar19;
  uVar4 = *(undefined8 *)(*pauVar19 + 8);
  uVar5 = *(undefined8 *)pauVar19[1];
  uVar6 = *(undefined8 *)(pauVar19[1] + 8);
  uVar7 = *(undefined8 *)pauVar19[2];
  uVar8 = *(undefined8 *)(pauVar19[2] + 8);
  uVar9 = *(undefined8 *)(pauVar19[3] + 8);
  *(undefined8 *)pauVar23[3] = *(undefined8 *)pauVar19[3];
  *(undefined8 *)(pauVar23[3] + 8) = uVar9;
  *(undefined8 *)pauVar23[2] = uVar7;
  *(undefined8 *)(pauVar23[2] + 8) = uVar8;
  *(undefined8 *)pauVar23[1] = uVar5;
  *(undefined8 *)(pauVar23[1] + 8) = uVar6;
  *(undefined8 *)*pauVar23 = uVar3;
  *(undefined8 *)(*pauVar23 + 8) = uVar4;
  *(undefined8 *)pauVar19[3] = local_58;
  *(undefined8 *)(pauVar19[3] + 8) = uStack_50;
  *(undefined8 *)pauVar19[2] = local_68;
  *(undefined8 *)(pauVar19[2] + 8) = uStack_60;
  pauVar19[1] = auVar14;
  *(undefined4 *)*pauVar19 = local_88;
  *(undefined4 *)(*pauVar19 + 4) = uStack_84;
  *(undefined4 *)(*pauVar19 + 8) = uStack_80;
  *(undefined4 *)(*pauVar19 + 0xc) = uStack_7c;
  iVar20 = iVar20 + -1;
  pauVar35 = pauVar19 + -4;
  if ((longlong)pauVar40 - (longlong)pauVar37 < (longlong)pauVar36 - (longlong)pauVar18) {
    if (local_3b0 < pauVar32) {
      *plVar29 = (longlong)local_3b0;
      plVar29[1] = (longlong)pauVar32;
      *(int *)(plVar29 + 2) = iVar20;
      plVar29 = plVar29 + 3;
    }
    local_3b0 = pauVar40;
    pauVar32 = pauVar23;
    if (pauVar19 <= pauVar23 + 4) goto LAB_1432d6646;
  }
  else {
    if (pauVar23 + 4 < pauVar19) {
      *plVar29 = (longlong)pauVar23;
      plVar29[1] = (longlong)pauVar35;
      *(int *)(plVar29 + 2) = iVar20;
      plVar29 = plVar29 + 3;
    }
    bVar2 = pauVar32 <= local_3b0;
    pauVar23 = local_3b0;
    pauVar35 = pauVar32;
    local_3b0 = pauVar32;
    pauVar32 = local_3a0;
    if (bVar2) goto LAB_1432d6646;
  }
  local_3a0 = pauVar32;
  iVar26 = (int)((ulonglong)((longlong)local_3b0 - (longlong)local_3a0) >> 6);
  pauVar32 = pauVar35;
  pauVar36 = local_3b0;
  pauVar37 = local_3a0;
  local_3c0 = pauVar23;
  if (iVar20 == 0) goto LAB_1432d6767;
  goto LAB_1432d6546;
}



// FUNCTION 1432d6b1e FUN_1432d6b1e body=29 status=ok
// SIG undefined FUN_1432d6b1e(void)

undefined8 FUN_1432d6b1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432d6b3c FUN_1432d6b3c body=258 status=ok
// SIG undefined FUN_1432d6b3c(void)

void FUN_1432d6b3c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_58 [36];
  ushort local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14009d2a0();
  local_34[0] = *(ushort *)(lVar4 + 100);
  local_34[1] = *(undefined2 *)(lVar4 + 0x66);
  lVar4 = 0;
  do {
    uVar2 = *(ushort *)((longlong)local_34 + lVar4);
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(param_3 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_1432d6ba5:
        if (*(int *)(param_3 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_3 + 0x24) = 0x100;
          FUN_14497ddce(param_3,iVar3);
          iVar6 = *(int *)(param_3 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(param_3 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(param_3 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(param_3 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1432d6ba5;
        *(int *)(param_3 + 0x20) = iVar6;
      }
      FUN_1447c45ca(param_3,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    lVar4 = lVar4 + 2;
    if (lVar4 == 4) {
      if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1432d6c40 FUN_1432d6c40 body=619 status=ok
// SIG undefined FUN_1432d6c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d6c40(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Src;
  int *piVar6;
  undefined8 *puVar7;
  void *_Dst;
  void *pvVar8;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar11 [16];
  
  lVar3 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar3 + 0x68)) {
        if (*(int *)(param_2 + 0x14) == 1) goto LAB_1432d6caa;
        LOCK();
        *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
        UNLOCK();
        _Src = (void *)*puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
          UNLOCK();
        }
        goto LAB_1432d6ce6;
      }
      puVar7 = puVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (*(int *)(param_2 + 0x14) == 1) {
    puVar7 = (undefined8 *)0x0;
LAB_1432d6caa:
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
    LOCK();
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    UNLOCK();
    _Src = (void *)*puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
      UNLOCK();
      ReleaseSRWLockShared((PSRWLOCK)(puVar7 + 1));
    }
  }
  else {
    LOCK();
    _DAT_00000018 = _DAT_00000018 + 1;
    UNLOCK();
    _Src = _DAT_00000000;
  }
LAB_1432d6ce6:
  piVar6 = (int *)(param_2 + 0x14);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar3 + 100)) {
        if (*piVar6 == 1) goto LAB_1432d6d30;
        LOCK();
        *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
        UNLOCK();
        _Dst = (void *)*puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
          UNLOCK();
        }
        goto LAB_1432d6d6e;
      }
      puVar7 = puVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (*piVar6 == 1) {
    puVar7 = (undefined8 *)0x0;
LAB_1432d6d30:
    AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
    LOCK();
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    UNLOCK();
    _Dst = (void *)*puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
    }
  }
  else {
    LOCK();
    _DAT_00000018 = _DAT_00000018 + 1;
    UNLOCK();
    _Dst = _DAT_00000000;
  }
LAB_1432d6d6e:
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar3 + 0x66)) {
        if (*piVar6 == 1) goto LAB_1432d6db8;
        LOCK();
        *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
        UNLOCK();
        pvVar8 = (void *)*puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
          UNLOCK();
        }
        goto LAB_1432d6df6;
      }
      puVar7 = puVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (*piVar6 == 1) {
    puVar7 = (undefined8 *)0x0;
LAB_1432d6db8:
    AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
    LOCK();
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    UNLOCK();
    pvVar8 = (void *)*puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
    }
  }
  else {
    LOCK();
    _DAT_00000018 = _DAT_00000018 + 1;
    UNLOCK();
    pvVar8 = _DAT_00000000;
  }
LAB_1432d6df6:
  uVar1 = *(ushort *)(param_2 + 0xe);
  memcpy(_Dst,_Src,(ulonglong)uVar1 << 4);
  auVar2 = _DAT_149931e80;
  if (uVar1 != 0) {
    lVar3 = (ulonglong)uVar1 - 1;
    auVar9._8_4_ = (int)lVar3;
    auVar9._0_8_ = lVar3;
    auVar9._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    auVar10 = pmovsxbq(in_XMM1,0x100);
    uVar5 = 0;
    auVar9 = auVar9 ^ _DAT_149931e80;
    auVar11 = pmovsxbq(in_XMM4,0x202);
    do {
      if ((bool)(~(auVar9._0_8_ < SUB168(auVar10 ^ auVar2,0)) & 1)) {
        *(undefined1 **)((longlong)pvVar8 + uVar5) = &LAB_140aa1c3a;
      }
      if (SUB168(auVar10 ^ auVar2,8) <= auVar9._8_8_) {
        *(undefined1 **)((longlong)pvVar8 + uVar5 + 8) = &LAB_140aa1c3a;
      }
      lVar3 = auVar10._8_8_;
      auVar10._0_8_ = auVar10._0_8_ + auVar11._0_8_;
      auVar10._8_8_ = lVar3 + auVar11._8_8_;
      uVar5 = uVar5 + 0x10;
    } while (((uint)uVar1 * 8 + 8 & 0xfffffff0) != uVar5);
  }
  return;
}



// FUNCTION 1432d6eac FUN_1432d6eac body=29 status=ok
// SIG undefined FUN_1432d6eac(void)

undefined8 FUN_1432d6eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432d6ee8 FUN_1432d6ee8 body=444 status=ok
// SIG undefined FUN_1432d6ee8(void)

void FUN_1432d6ee8(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,*param_1 + (longlong)iVar4 * 0x28 + 0x20,0,0);
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar10 = puVar5[lVar12] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar11 = 0;
          do {
            uVar10 = puVar5[lVar12 + lVar11 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar11 + 1);
              uVar6 = 0xffffffff;
              goto LAB_1432d701b;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar12 != lVar11);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1432d701b:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 1432d70dc FUN_1432d70dc body=140 status=ok
// SIG undefined FUN_1432d70dc(void)

ulonglong FUN_1432d70dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  undefined7 uVar3;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (*(char *)param_1[1] == '\0') {
    FUN_14754a3b2(&local_30,*param_1,*param_2);
    if (local_28 != 0) {
      if ((longlong)*(int *)(local_28 + 0x1c) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(local_30 + 0x40) + 4 +
                        (longlong)*(int *)(local_28 + 0x1c) * 0xc);
      }
      uVar2 = CONCAT71(uVar3,iVar1 <= local_20 || local_20 < 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d716a FUN_1432d716a body=361 status=ok
// SIG undefined FUN_1432d716a(void)

ulonglong FUN_1432d716a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  ulonglong local_28;
  undefined7 uVar7;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (*(char *)param_1[2] == '\0') {
    FUN_14754a3b2(&local_40,*param_1,*param_2);
    local_58 = local_40;
    uStack_54 = uStack_3c;
    uStack_50 = uStack_38;
    uStack_4c = uStack_34;
    local_48 = local_30;
    lVar4 = CONCAT44(uStack_3c,local_40);
    lVar3 = CONCAT44(uStack_34,uStack_38);
    uVar6 = CONCAT71(uVar7,1);
    if (lVar3 != 0 || (int)local_30 != 0) {
      do {
        if ((longlong)*(int *)(lVar3 + 0x1c) == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)
                  *(int *)(*(longlong *)(lVar4 + 0x40) + (longlong)*(int *)(lVar3 + 0x1c) * 0xc) *
                  0x18 + *(longlong *)(lVar4 + 0x50);
        }
        iVar1 = *(int *)(lVar4 + 0xc + (longlong)(int)local_30 * 0x18);
        if ((iVar1 == 0) ||
           (uVar2 = *(uint *)(lVar4 + 8 + (longlong)(int)local_30 * 0x18), (int)uVar2 < 0)) {
LAB_1432d72d0:
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != iVar1)) ||
               ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_1432d72d0;
            lVar4 = *plVar5;
          }
        }
        bVar8 = *(int *)(lVar4 + 0xb8) == *(int *)param_1[1];
        uVar6 = CONCAT71((int7)(uVar6 >> 8),!bVar8);
        if (bVar8) break;
        FUN_147544974(&local_58);
        lVar4 = CONCAT44(uStack_54,local_58);
        lVar3 = CONCAT44(uStack_4c,uStack_50);
        local_30 = local_48 & 0xffffffff;
      } while ((int)local_48 != 0 || (lVar4 != CONCAT44(uStack_3c,local_40) || lVar3 != 0));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1432d72d4 FUN_1432d72d4 body=307 status=ok
// SIG undefined FUN_1432d72d4(void)

void FUN_1432d72d4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d730f;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1432d730f:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7352;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d7352:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)(int)lVar3 * 4 + lVar4 + lVar6 * 4) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d73db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7408 FUN_1432d7408 body=312 status=ok
// SIG undefined FUN_1432d7408(void)

void FUN_1432d7408(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7447;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1432d7447:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d748a;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1432d748a:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x14 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      puVar8[4] = *(undefined4 *)(lVar9 + 0x10 + lVar10 * 0x14);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x14);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 5;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7540 FUN_1432d7540 body=291 status=ok
// SIG undefined FUN_1432d7540(void)

void FUN_1432d7540(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d757f;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1432d757f:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d75c2;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d75c2:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7664 FUN_1432d7664 body=291 status=ok
// SIG undefined FUN_1432d7664(void)

void FUN_1432d7664(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d76a3;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1432d76a3:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d76e6;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d76e6:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7788 FUN_1432d7788 body=291 status=ok
// SIG undefined FUN_1432d7788(void)

void FUN_1432d7788(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d77c7;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1432d77c7:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d780a;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d780a:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d78ac FUN_1432d78ac body=89 status=ok
// SIG undefined FUN_1432d78ac(void)

void FUN_1432d78ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 1432d7906 FUN_1432d7906 body=337 status=ok
// SIG undefined FUN_1432d7906(void)

void FUN_1432d7906(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7946;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1432d7946:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d798a;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d798a:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7a58 FUN_1432d7a58 body=337 status=ok
// SIG undefined FUN_1432d7a58(void)

void FUN_1432d7a58(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7a98;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1432d7a98:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7adc;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d7adc:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7baa FUN_1432d7baa body=291 status=ok
// SIG undefined FUN_1432d7baa(void)

void FUN_1432d7baa(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7be9;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1432d7be9:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7c2c;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d7c2c:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined2 *)((longlong)(int)lVar3 * 2 + lVar4 + lVar6 * 2) =
           *(undefined2 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7d00 FUN_1432d7d00 body=286 status=ok
// SIG undefined FUN_1432d7d00(void)

void FUN_1432d7d00(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7d3f;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1432d7d3f:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7d82;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d7d82:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined1 *)((int)lVar3 + lVar4 + lVar6) =
           *(undefined1 *)(lVar5 + *(int *)(*param_4 + lVar6 * 4));
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7e1e FUN_1432d7e1e body=75 status=ok
// SIG undefined FUN_1432d7e1e(void)

void FUN_1432d7e1e(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      if ((*(int *)(param_3 + 8) == 0) && (*(int *)(param_3 + 0xc) == 0)) {
        (**(code **)(*param_2 + 0x88))(param_2,param_3,0,0);
      }
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 1432d7e6a FUN_1432d7e6a body=363 status=ok
// SIG undefined FUN_1432d7e6a(void)

void FUN_1432d7e6a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7eaa;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1432d7eaa:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d7eee;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432d7eee:
  lVar6 = *plVar9;
  iVar3 = *(int *)(lVar5 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    plVar10 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *plVar8 + 8);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar7 = (longlong)*(int *)(*param_4 + lVar5 * 4) * 0x10;
      plVar1 = (longlong *)(lVar6 + lVar7);
      lVar7 = *(longlong *)(lVar6 + lVar7);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *plVar1;
          bVar4 = DAT_14c950c29;
        }
      }
      plVar10[-1] = lVar7;
      *plVar10 = plVar1[1];
      lVar5 = lVar5 + 1;
      plVar10 = plVar10 + 2;
    } while (lVar5 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d7fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d7fd6 FUN_1432d7fd6 body=29 status=ok
// SIG undefined FUN_1432d7fd6(void)

undefined8 FUN_1432d7fd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432d7ff4 FUN_1432d7ff4 body=375 status=ok
// SIG undefined FUN_1432d7ff4(void)

void FUN_1432d7ff4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432d8032;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1432d8032:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 10)) goto LAB_1432d807f;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1432d807f:
  lVar6 = *plVar9;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar5 = *plVar11;
    lVar8 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = param_2[1];
      lVar10 = (longlong)*(int *)(*param_4 + lVar8 * 4) * 0x10;
      lVar7 = *(longlong *)(lVar6 + lVar10);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar10 + lVar6);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)((int)lVar3 + (int)lVar8) * 0x10 + lVar5) = lVar7;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((longlong)param_2 + 0xc));
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432d8152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432d816c FUN_1432d816c body=104 status=ok
// SIG undefined FUN_1432d816c(void)

void FUN_1432d816c(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1432d81d4 FUN_1432d81d4 body=31 status=ok
// SIG undefined FUN_1432d81d4(void)

undefined8 FUN_1432d81d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432d82e2 FUN_1432d82e2 body=208 status=ok
// SIG undefined FUN_1432d82e2(void)

int FUN_1432d82e2(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
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



// FUNCTION 1432d83b2 FUN_1432d83b2 body=114 status=ok
// SIG undefined FUN_1432d83b2(void)

void FUN_1432d83b2(longlong *param_1,int param_2)

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



// FUNCTION 1432d844c FUN_1432d844c body=1 status=ok
// SIG undefined FUN_1432d844c(void)

void FUN_1432d844c(void)

{
  return;
}



// FUNCTION 1432d844e FUN_1432d844e body=1 status=ok
// SIG undefined FUN_1432d844e(void)

void FUN_1432d844e(void)

{
  return;
}



// FUNCTION 1432d8450 FUN_1432d8450 body=282 status=ok
// SIG undefined FUN_1432d8450(void)

undefined8 * FUN_1432d8450(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432d8424);
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



// FUNCTION 1432d856a FUN_1432d856a body=306 status=ok
// SIG undefined FUN_1432d856a(void)

void FUN_1432d856a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147550816(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147550816(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d869e FUN_1432d869e body=282 status=ok
// SIG undefined FUN_1432d869e(void)

undefined8 * FUN_1432d869e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432d8424);
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



// FUNCTION 1432d87b8 FUN_1432d87b8 body=93 status=ok
// SIG undefined FUN_1432d87b8(void)

void FUN_1432d87b8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432d856a(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d880b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432d8816 FUN_1432d8816 body=306 status=ok
// SIG undefined FUN_1432d8816(void)

void FUN_1432d8816(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147550b8a(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147550b8a(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d894a FUN_1432d894a body=282 status=ok
// SIG undefined FUN_1432d894a(void)

undefined8 * FUN_1432d894a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432d8424);
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



// FUNCTION 1432d8a64 FUN_1432d8a64 body=93 status=ok
// SIG undefined FUN_1432d8a64(void)

void FUN_1432d8a64(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432d8816(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d8ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432d8acc FUN_1432d8acc body=309 status=ok
// SIG undefined FUN_1432d8acc(void)

void FUN_1432d8acc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147550f64(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1432d63d8(*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1432d8c02 FUN_1432d8c02 body=282 status=ok
// SIG undefined FUN_1432d8c02(void)

undefined8 * FUN_1432d8c02(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432d8424);
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



// FUNCTION 1432d8d1c FUN_1432d8d1c body=93 status=ok
// SIG undefined FUN_1432d8d1c(void)

void FUN_1432d8d1c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432d8acc(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d8d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432d8d7a FUN_1432d8d7a body=31 status=ok
// SIG undefined FUN_1432d8d7a(void)

undefined8 FUN_1432d8d7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432d8de8 FUN_1432d8de8 body=147 status=ok
// SIG undefined FUN_1432d8de8(void)

void FUN_1432d8de8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x128 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x128) = param_2;
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
      puVar7 = puVar7 + 0x4a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1432d8e7b FUN_1432d8e7b body=843 status=ok
// SIG undefined FUN_1432d8e7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d8e7b(void)

{
  ulonglong uVar1;
  
  _DAT_14cab25bc = 0xffffffff;
  DAT_14cab25c0 = 0;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a46f120,4,0,0);
  DAT_14cab2628 = 0;
  atexit(FUN_1432d4342);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a46fca0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a470050,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4703f0,1,0,0,0,0);
  DAT_14cab2698 = 0;
  DAT_14cab26a0 = 0;
  DAT_14cab2678 = 0;
  _DAT_14cab2680 = 0;
  _DAT_14cab26a4 = 0xffffffff00000080;
  DAT_14cab26ac = 0;
  DAT_14cab26b8 = 0;
  DAT_14cab26c0 = 0;
  atexit(FUN_1432d4a5b);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4707b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a470b70,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a470ed0,1,0,0,0,0);
  uVar1 = 0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a471280,1,0,0,0,0);
  _DAT_14cab2748 = 0x10000000000;
  uVar1 = uVar1 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab2750,L"Sequencer.ThreadedEvaluation.AllocationThreshold",&DAT_14c760fe0,
                L"(Default: 32) Defines the entity allocation fragmentation threshold above which threaded evaluation will be used.\n"
                ,uVar1);
  atexit(FUN_1432d4c03);
  FUN_141471170(&DAT_14cab2760,L"Sequencer.ThreadedEvaluation.EntityThreshold",&DAT_14c760fe4,
                L"(Default: 256) Defines the number of entities that need to exist to justify threaded evaluation.\n"
                ,uVar1 & 0xffffffff00000000);
  atexit(FUN_1432d4c48);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a471940,1,0,0,0,0);
  FUN_1475472e4();
  atexit((_func_5014 *)&LAB_1432d4de0);
  DAT_14cab2928 = 0;
  _DAT_14cab2930 = 0;
  DAT_14cab2908 = 0;
  _DAT_14cab2910 = 0;
  _DAT_14cab2934 = 0xffffffff00000080;
  _DAT_14cab293c = 0;
  DAT_14cab2948 = 0;
  _DAT_14cab2950 = 0;
  atexit(FUN_1432d4de5);
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a471bd0,3,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a471fe0,1,0,0,0,0);
  FUN_14608e916();
  atexit(FUN_1432d4e17);
  DAT_14cab2be4 = DAT_14c760fec | 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4723a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a472ba0,1,&PTR_FUN_14a472b20,3,0,0);
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a473650,3,0,0,0,0);
  return;
}



// FUNCTION 1432d91c8 FUN_1432d91c8 body=57 status=ok
// SIG undefined FUN_1432d91c8(void)

longlong FUN_1432d91c8(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 1432d9202 FUN_1432d9202 body=25 status=ok
// SIG undefined FUN_1432d9202(void)

void FUN_1432d9202(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x34);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1432d921c FUN_1432d921c body=207 status=ok
// SIG undefined FUN_1432d921c(void)

void FUN_1432d921c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x24);
  if (((((iVar1 != 0) && (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x100) + 0x20), -1 < (int)uVar2)
        ) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == iVar1)))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
      ((*plVar3 != 0 && (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44))))))) {
    FUN_14055c180(param_1,*plVar3,1);
  }
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != (longlong *)0x0) {
    local_20 = *(undefined8 *)(param_1 + 0x100);
    local_18 = *(longlong *)(param_1 + 0x108);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432d92ec FUN_1432d92ec body=75 status=ok
// SIG undefined FUN_1432d92ec(void)

longlong FUN_1432d92ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
    do {
      FUN_147559218(lVar2,param_2);
      if (*(char *)(param_2 + 1) != '\0') {
        return param_2;
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1432d9338 FUN_1432d9338 body=55 status=ok
// SIG undefined FUN_1432d9338(void)

void FUN_1432d9338(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001432d936b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1432d9370 FUN_1432d9370 body=55 status=ok
// SIG undefined FUN_1432d9370(void)

void FUN_1432d9370(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001432d93a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1432d93a8 FUN_1432d93a8 body=4559 status=ok
// SIG undefined FUN_1432d93a8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1432d93a8(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  int local_290;
  char local_279;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  uint local_22c;
  int local_228;
  int local_224;
  longlong local_220;
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  longlong local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  longlong local_1c8 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  undefined2 local_15a;
  undefined2 local_158;
  undefined1 local_153;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  uint local_138;
  undefined1 local_130 [2];
  short local_12e;
  short local_12c;
  undefined *local_118 [4];
  int local_f8;
  int local_f4;
  uint local_f0 [8];
  int local_d0;
  int local_cc;
  longlong local_c8;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar9 = FUN_14009d2a0();
  uVar13 = local_148;
  local_250 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_248 = lVar9;
  local_240 = param_1;
  if (*(int *)(local_250 + 0x50) != *(int *)(local_250 + 0x7c)) {
    local_1e8 = 0;
    uStack_1e0 = (longlong *)0x0;
    local_148._0_4_ = CONCAT22(*(undefined2 *)(lVar9 + 0x4e),(undefined2)local_148);
    local_148._6_2_ = SUB82(uVar13,6);
    local_148._0_6_ = CONCAT24(*(undefined2 *)(lVar9 + 0x6a),(undefined4)local_148);
    local_140._0_2_ = (ushort)(byte)local_140;
    local_140 = CONCAT44(0x6ff,(undefined4)local_140);
    local_138 = local_138 & 0xffffff00;
    uVar3 = *(ushort *)(lVar9 + 0x11c);
    FUN_1405e1022(local_130);
    iVar6 = local_d0;
    iVar16 = uVar3 + 1;
    iVar21 = iVar16 - local_d0;
    if (iVar21 != 0 && local_d0 <= iVar16) {
      if (local_d0 == 0) {
LAB_1432d9481:
        if (local_cc <= (int)(uint)uVar3) {
          local_cc = 0x100;
          FUN_14497ddce(local_f0,local_d0);
          iVar16 = local_d0 + iVar21;
        }
        iVar17 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar17 = iVar16;
        }
        local_d0 = iVar16;
        iVar16 = local_d0;
        if (iVar16 % 0x20 != 0) {
          bVar15 = -(char)(iVar16 % 0x20);
          local_f0[iVar17 >> 5] = (local_f0[iVar17 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
          iVar16 = local_d0;
        }
      }
      else {
        iVar17 = local_d0 + 0x1e;
        if (-1 < local_d0 + -1) {
          iVar17 = local_d0 + -1;
        }
        if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1432d9481;
      }
      local_d0 = iVar16;
      FUN_1447c45ca(local_f0,iVar6,iVar21,0);
    }
    local_f0[uVar3 >> 5] = local_f0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    if ((local_12e != -1) && (local_12c != -1)) {
      lVar10 = *(longlong *)(param_1 + 0x28);
      uStack_60 = lVar10 + 0x28;
      local_68 = local_118;
      local_260 = CONCAT71(local_260._1_7_,*(char *)(lVar10 + 0x298));
      if (*(char *)(lVar10 + 0x298) == '\0') {
        *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
      }
      else {
        LOCK();
        *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
        UNLOCK();
      }
      iVar6 = FUN_1403b8464(&local_68,0);
      uStack_58 = CONCAT44(uStack_58._4_4_,iVar6);
      local_238 = CONCAT44(local_238._4_4_,*(int *)(lVar10 + 0x38));
      if (iVar6 != *(int *)(lVar10 + 0x38)) {
        do {
          uVar23 = *(ulonglong *)(*(longlong *)(uStack_60 + 0x60) + (longlong)iVar6 * 8);
          if ((char)local_260 == '\0') {
            *(undefined4 *)(uVar23 + 0x14) = 0;
            local_268 = uVar23;
          }
          else {
            local_268 = 0;
          }
          if (*(ushort *)(uVar23 + 0xc) != 0) {
            plVar22 = *(longlong **)(uVar23 + 0x28);
            lVar9 = (ulonglong)*(ushort *)(uVar23 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar22 + 0x1e) == local_12c) goto LAB_1432d9764;
              plVar22 = plVar22 + 4;
              lVar9 = lVar9 + -0x20;
            } while (lVar9 != 0);
          }
          plVar22 = (longlong *)0x0;
LAB_1432d9764:
          local_258 = CONCAT44(local_258._4_4_,*(int *)(uVar23 + 0x14));
          if (*(int *)(uVar23 + 0x14) == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar22 + 1));
          }
          LOCK();
          *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
          UNLOCK();
          lVar9 = *plVar22;
          if (*(ushort *)(uVar23 + 0xc) != 0) {
            plVar11 = *(longlong **)(uVar23 + 0x28);
            lVar10 = (ulonglong)*(ushort *)(uVar23 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar11 + 0x1e) == local_12e) goto LAB_1432d97b0;
              plVar11 = plVar11 + 4;
              lVar10 = lVar10 + -0x20;
            } while (lVar10 != 0);
          }
          plVar11 = (longlong *)0x0;
LAB_1432d97b0:
          local_270 = CONCAT44(local_270._4_4_,*(int *)(uVar23 + 0x14));
          if (*(int *)(uVar23 + 0x14) == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
          }
          LOCK();
          *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
          UNLOCK();
          local_278 = (ulonglong)*(ushort *)(uVar23 + 0xe);
          if (local_278 != 0) {
            lVar10 = *plVar11;
            lVar18 = *(longlong *)(uVar23 + 0x18);
            uVar23 = 0;
            do {
              uVar4 = *(undefined2 *)(lVar18 + uVar23 * 2);
              cVar5 = FUN_1405e05f2(local_250,lVar9,*(undefined4 *)(lVar10 + uVar23 * 4));
              uVar19 = (ulonglong)uStack_1e0;
              if (cVar5 != '\0') {
                lVar24 = (longlong)(int)uStack_1e0;
                uVar7 = (int)uStack_1e0 + 1;
                uStack_1e0 = (longlong *)CONCAT44(uStack_1e0._4_4_,uVar7);
                if (uStack_1e0._4_4_ < uVar7) {
                  FUN_1405e07ae(&local_1e8,uVar19 & 0xffffffff);
                }
                *(undefined2 *)(local_1e8 + lVar24 * 2) = uVar4;
              }
              uVar23 = uVar23 + 1;
              lVar9 = lVar9 + 0x10;
            } while (local_278 != uVar23);
          }
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar22 + 3) = (int)plVar22[3] + -1;
            UNLOCK();
            if ((int)local_258 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(plVar22 + 1));
            }
          }
          lVar9 = local_248;
          uVar23 = local_268;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
            UNLOCK();
            if ((int)local_270 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
            }
          }
          if (uVar23 != 0) {
            *(undefined4 *)(uVar23 + 0x14) = 1;
          }
          iVar6 = FUN_1403b8464(&local_68,(int)uStack_58 + 1);
          uStack_58 = CONCAT44(uStack_58._4_4_,iVar6);
        } while (iVar6 != (int)local_238);
      }
      param_1 = local_240;
      if (local_68 != (undefined **)0x0) {
        if (*(char *)(uStack_60 + 0x270) == '\0') {
          *(int *)(uStack_60 + 0x264) = *(int *)(uStack_60 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(uStack_60 + 0x264) = *(int *)(uStack_60 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    lVar10 = local_1e8;
    lVar18 = (longlong)(int)uStack_1e0;
    if (lVar18 != 0) {
      lVar24 = 0;
      do {
        uVar4 = *(undefined2 *)(lVar10 + lVar24);
        FUN_1405e0ab4(*(longlong *)(param_1 + 0x28) + 0x28,uVar4,*(undefined2 *)(lVar9 + 0x11a));
        FUN_1405e0992(*(longlong *)(param_1 + 0x28) + 0x28,uVar4,*(undefined2 *)(lVar9 + 0x11c),2);
        lVar24 = lVar24 + 2;
      } while (lVar18 * 2 != lVar24);
    }
    if (local_1e8 != 0) {
      FUN_1400020a8(local_1e8);
    }
  }
  uVar13 = local_148;
  uStack_1e0 = local_1c8;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1d8 = local_250;
  local_148._0_4_ = CONCAT22(*(undefined2 *)(lVar9 + 0x4e),(undefined2)local_148);
  local_148._6_2_ = SUB82(uVar13,6);
  local_148._0_6_ = CONCAT24(*(undefined2 *)(lVar9 + 0x6a),(undefined4)local_148);
  local_140._0_2_ = (ushort)(byte)local_140;
  local_140 = CONCAT44(0x6ff,(undefined4)local_140);
  local_138 = local_138 & 0xffffff00;
  uVar3 = *(ushort *)(lVar9 + 0x11c);
  local_1e8 = param_1;
  FUN_1405e1022(local_130);
  iVar6 = local_f8;
  iVar16 = uVar3 + 1;
  iVar21 = iVar16 - local_f8;
  if (iVar21 != 0 && local_f8 <= iVar16) {
    if (local_f8 == 0) {
LAB_1432d96bf:
      if (local_f4 <= (int)(uint)uVar3) {
        local_f4 = 0x100;
        FUN_14497ddce(local_118,local_f8);
        iVar16 = local_f8 + iVar21;
      }
      iVar17 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar17 = iVar16;
      }
      local_f8 = iVar16;
      iVar16 = local_f8;
      if (iVar16 % 0x20 != 0) {
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)local_118 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)((longlong)local_118 + (longlong)(iVar17 >> 5) * 4) << (bVar15 & 0x1f))
             >> (bVar15 & 0x1f);
        iVar16 = local_f8;
      }
    }
    else {
      iVar17 = local_f8 + 0x1e;
      if (-1 < local_f8 + -1) {
        iVar17 = local_f8 + -1;
      }
      if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1432d96bf;
    }
    local_f8 = iVar16;
    FUN_1447c45ca(local_118,iVar6,iVar21,0);
  }
  puVar2 = (uint *)((longlong)local_118 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  if ((local_12e != -1) && (local_12c != -1)) {
    lVar10 = *(longlong *)(param_1 + 0x28);
    uStack_60 = lVar10 + 0x28;
    local_68 = local_118;
    local_270 = CONCAT71(local_270._1_7_,*(char *)(lVar10 + 0x298));
    if (*(char *)(lVar10 + 0x298) == '\0') {
      *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
      UNLOCK();
    }
    iVar6 = FUN_1403b8464(&local_68,0);
    uStack_58 = CONCAT44(uStack_58._4_4_,iVar6);
    local_260 = CONCAT44(local_260._4_4_,*(int *)(lVar10 + 0x38));
    if (iVar6 != *(int *)(lVar10 + 0x38)) {
      do {
        uVar23 = *(ulonglong *)(*(longlong *)(uStack_60 + 0x60) + (longlong)iVar6 * 8);
        if ((char)local_270 == '\0') {
          *(undefined4 *)(uVar23 + 0x14) = 0;
          local_278 = uVar23;
        }
        else {
          local_278 = 0;
        }
        if (*(ushort *)(uVar23 + 0xc) != 0) {
          plVar22 = *(longlong **)(uVar23 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(uVar23 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar22 + 0x1e) == local_12c) goto LAB_1432d9af4;
            plVar22 = plVar22 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar22 = (longlong *)0x0;
LAB_1432d9af4:
        local_268 = CONCAT44(local_268._4_4_,*(int *)(uVar23 + 0x14));
        if (*(int *)(uVar23 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar22 + 1));
        }
        LOCK();
        *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
        UNLOCK();
        lVar9 = *plVar22;
        if (*(ushort *)(uVar23 + 0xc) != 0) {
          plVar11 = *(longlong **)(uVar23 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(uVar23 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar11 + 0x1e) == local_12e) goto LAB_1432d9b3f;
            plVar11 = plVar11 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar11 = (longlong *)0x0;
LAB_1432d9b3f:
        local_258 = CONCAT44(local_258._4_4_,*(int *)(uVar23 + 0x14));
        if (*(int *)(uVar23 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
        }
        LOCK();
        *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
        UNLOCK();
        uVar3 = *(ushort *)(uVar23 + 0xe);
        if ((ulonglong)uVar3 != 0) {
          lVar10 = *plVar11;
          lVar18 = *(longlong *)(uVar23 + 0x18);
          uVar23 = 0;
          do {
            FUN_1432dbc16(&local_1e8,*(undefined2 *)(lVar18 + uVar23 * 2),
                          *(undefined4 *)(lVar10 + uVar23 * 4),lVar9);
            uVar23 = uVar23 + 1;
            lVar9 = lVar9 + 0x10;
          } while (uVar3 != uVar23);
        }
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 3) = (int)plVar22[3] + -1;
          UNLOCK();
          if ((int)local_268 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar22 + 1));
          }
        }
        param_1 = local_240;
        uVar23 = local_278;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
          UNLOCK();
          if ((int)local_258 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
          }
        }
        if (uVar23 != 0) {
          *(undefined4 *)(uVar23 + 0x14) = 1;
        }
        iVar6 = FUN_1403b8464(&local_68,(int)uStack_58 + 1);
        uStack_58 = CONCAT44(uStack_58._4_4_,iVar6);
        lVar9 = local_248;
      } while (iVar6 != (int)local_260);
    }
    if (local_68 != (undefined **)0x0) {
      if (*(char *)(uStack_60 + 0x270) == '\0') {
        *(int *)(uStack_60 + 0x264) = *(int *)(uStack_60 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(uStack_60 + 0x264) = *(int *)(uStack_60 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_1f8 = local_1c8;
  local_1f0 = local_250;
  local_200 = param_1;
  FUN_1432da578();
  local_15a = *(undefined2 *)(lVar9 + 0x4e);
  local_158 = *(undefined2 *)(lVar9 + 0x6a);
  local_153 = 0;
  local_150 = 0x6ff;
  local_14c = 0;
  uVar3 = *(ushort *)(lVar9 + 0x11a);
  FUN_1405e1022(local_130);
  iVar6 = local_f8;
  iVar16 = uVar3 + 1;
  iVar21 = iVar16 - local_f8;
  if (iVar21 == 0 || iVar16 < local_f8) goto LAB_1432d9c34;
  if (local_f8 == 0) {
LAB_1432d9a49:
    if (local_f4 <= (int)(uint)uVar3) {
      local_f4 = 0x100;
      FUN_14497ddce(local_118,local_f8);
      iVar16 = local_f8 + iVar21;
    }
    iVar17 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar17 = iVar16;
    }
    local_f8 = iVar16;
    iVar16 = local_f8;
    if (iVar16 % 0x20 != 0) {
      bVar15 = -(char)(iVar16 % 0x20);
      *(uint *)((longlong)local_118 + (longlong)(iVar17 >> 5) * 4) =
           (uint)(*(int *)((longlong)local_118 + (longlong)(iVar17 >> 5) * 4) << (bVar15 & 0x1f)) >>
           (bVar15 & 0x1f);
      iVar16 = local_f8;
    }
  }
  else {
    iVar17 = local_f8 + 0x1e;
    if (-1 < local_f8 + -1) {
      iVar17 = local_f8 + -1;
    }
    if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1432d9a49;
  }
  local_f8 = iVar16;
  FUN_1447c45ca(local_118,iVar6,iVar21,0);
LAB_1432d9c34:
  puVar2 = (uint *)((longlong)local_118 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  if ((local_12e != -1) && (local_12c != -1)) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    local_140 = lVar9 + 0x28;
    local_279 = *(char *)(lVar9 + 0x298);
    local_148 = local_118;
    if (local_279 == '\0') {
      *(int *)(lVar9 + 0x28c) = *(int *)(lVar9 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar9 + 0x28c) = *(int *)(lVar9 + 0x28c) + 1;
      UNLOCK();
    }
    local_138 = FUN_1403b8464(&local_148,0);
    local_22c = *(uint *)(lVar9 + 0x38);
    if (local_138 != local_22c) {
      local_208 = local_250 + 0x48;
      do {
        lVar9 = *(longlong *)(*(longlong *)(local_140 + 0x60) + (longlong)(int)local_138 * 8);
        if (local_279 == '\0') {
          *(undefined4 *)(lVar9 + 0x14) = 0;
          local_220 = lVar9;
        }
        else {
          local_220 = 0;
        }
        if (*(ushort *)(lVar9 + 0xc) != 0) {
          plVar22 = *(longlong **)(lVar9 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar22 + 0x1e) == local_12c) goto LAB_1432d9dba;
            plVar22 = plVar22 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar22 = (longlong *)0x0;
LAB_1432d9dba:
        local_224 = *(int *)(lVar9 + 0x14);
        if (local_224 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar22 + 1));
        }
        LOCK();
        *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
        UNLOCK();
        local_260 = *plVar22;
        if (*(ushort *)(lVar9 + 0xc) != 0) {
          plVar11 = *(longlong **)(lVar9 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar11 + 0x1e) == local_12e) goto LAB_1432d9e09;
            plVar11 = plVar11 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar11 = (longlong *)0x0;
LAB_1432d9e09:
        local_228 = *(int *)(lVar9 + 0x14);
        local_210 = plVar22;
        if (local_228 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
        }
        LOCK();
        *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
        UNLOCK();
        local_268 = (ulonglong)*(ushort *)(lVar9 + 0xe);
        local_218 = plVar11;
        if (local_268 != 0) {
          local_258 = *plVar11;
          local_248 = *(longlong *)(lVar9 + 0x18);
          uVar23 = 0;
          do {
            uVar19 = (ulonglong)*(uint *)(local_258 + uVar23 * 4);
            local_278 = CONCAT62(local_278._2_6_,*(undefined2 *)(local_248 + uVar23 * 2));
            lVar9 = *(longlong *)(local_250 + 8);
            lVar18 = (uVar19 & 0xffff) * 0x128;
            lVar10 = *(longlong *)(lVar9 + 0x100 + lVar18);
            plVar22 = *(longlong **)(lVar9 + 0x108 + lVar18);
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
            }
            lVar24 = lVar10 + 0x38;
            plVar11 = (longlong *)FUN_1400a16d0(lVar24);
            if (plVar11 != (longlong *)0x0) {
              puVar20 = (undefined8 *)(uVar23 * 0x10 + local_260);
              local_1a8 = *(uint *)(lVar9 + lVar18 + 0x110);
              local_1b8 = *(undefined4 *)puVar20;
              uStack_1b4 = *(undefined4 *)((longlong)puVar20 + 4);
              uStack_1b0 = *(undefined4 *)(puVar20 + 1);
              uStack_1ac = *(undefined4 *)((longlong)puVar20 + 0xc);
              local_270 = uVar19;
              local_19c = local_1a8;
              plVar12 = (longlong *)FUN_1432dbf3e(lVar24);
              if ((plVar12 == (longlong *)0x0) ||
                 (lVar9 = (**(code **)(*plVar12 + 8))(plVar12,&local_1b8), lVar9 == 0)) {
                local_298 = (longlong *)((ulonglong)local_298 & 0xffffffff00000000);
                FUN_140f96e2c(plVar11,&local_68,puVar20,&local_19c);
                lVar9 = FUN_1405e0c42(lVar24);
                if ((lVar9 != 0) && (*(int *)(lVar9 + 0xb0) != *(int *)(lVar9 + 0xdc))) {
                  lVar18 = lVar9 + 0xe0;
                  if (*(longlong *)(lVar9 + 0xe8) != 0) {
                    lVar18 = *(longlong *)(lVar9 + 0xe8);
                  }
                  iVar6 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar9 + 0xf0) - 1U & local_19c) * 4
                                  );
                  if (iVar6 != -1) {
                    do {
                      lVar18 = *(longlong *)(lVar9 + 0xa8) + (longlong)iVar6 * 400;
                      if (*(uint *)(*(longlong *)(lVar9 + 0xa8) + (longlong)iVar6 * 400) ==
                          local_19c) {
                        if ((lVar18 != 0) && (lVar18 != -8)) {
                          uVar8 = FUN_1447addd0(puVar20,0x10);
                          iVar6 = FUN_140f5cb3a(lVar18 + 0x120,uVar8,puVar20);
                          if (iVar6 != -1) {
                            FUN_1432dbc16(&local_1e8,local_278 & 0xffff,local_270,puVar20);
                            goto LAB_1432da3f7;
                          }
                        }
                        break;
                      }
                      iVar6 = *(int *)(lVar18 + 0x188);
                    } while (iVar6 != -1);
                  }
                }
                plVar12 = (longlong *)FUN_140127e98(lVar24);
                if (plVar12 != (longlong *)0x0) {
                  uStack_60 = 0;
                  uStack_58 = 0x100000000;
                  cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar20,local_19c,&local_68);
                  if (cVar5 == '\0') {
                    FUN_1432dbc16(&local_1e8,local_278 & 0xffff,local_270,puVar20);
                    if (uStack_60 != 0) {
                      FUN_1400020a8();
                    }
                    goto LAB_1432da3f7;
                  }
                  if (uStack_60 != 0) {
                    FUN_1400020a8();
                  }
                }
                plVar12 = (longlong *)FUN_1400d1226(lVar10,&local_19c);
                if (plVar12 != (longlong *)0x0) {
                  lVar9 = *(longlong *)(local_240 + 0x28);
                  lVar18 = FUN_14009d2a0();
                  cVar5 = FUN_140bbead8(lVar9 + 0x28,local_278 & 0xffff,
                                        *(undefined2 *)(lVar18 + 0x138));
                  if (cVar5 == '\0') {
                    local_278 = (**(code **)(*plVar12 + 0x2a8))(plVar12);
                    if (local_278 != 0) {
                      FUN_1432dd47e(local_278,&local_68,puVar20);
                      if (0 < (int)uStack_60) {
                        local_238 = lVar10 + 0x60;
                        iVar6 = 0;
                        do {
                          if (plVar22 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                            UNLOCK();
                          }
                          local_170 = lVar10;
                          local_168 = plVar22;
                          uVar13 = (**(code **)(*plVar12 + 0x2e8))(plVar12);
                          local_298 = &local_170;
                          local_290 = iVar6;
                          lVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,puVar20,uVar13,&local_19c);
                          if (plVar22 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                            UNLOCK();
                          }
                          local_180 = lVar10;
                          local_178 = plVar22;
                          plVar14 = (longlong *)FUN_140165676(&local_180);
                          if (lVar9 != 0) {
                            local_198 = *(undefined4 *)puVar20;
                            uStack_194 = *(undefined4 *)((longlong)puVar20 + 4);
                            uStack_190 = *(undefined4 *)(puVar20 + 1);
                            uStack_18c = *(undefined4 *)((longlong)puVar20 + 0xc);
                            local_188 = local_19c;
                            if (plVar14 != (longlong *)0x0) {
                              (**(code **)(*plVar14 + 0x68))(plVar14,lVar9,&local_198);
                            }
                            local_50 = local_188;
                            uStack_60 = CONCAT44(uStack_194,local_198);
                            uStack_58 = CONCAT44(uStack_18c,uStack_190);
                            local_68 = &PTR_FUN_14a480cc0;
                            local_4c = iVar6;
                            FUN_14027378e(local_238,lVar9,DAT_14cab2d08,&local_68);
                          }
                          iVar6 = iVar6 + 1;
                          FUN_1432dd47e(local_278,&local_68,puVar20);
                        } while (iVar6 < (int)uStack_60);
                      }
                    }
                  }
                  else {
                    if (plVar22 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                      UNLOCK();
                    }
                    local_170 = lVar10;
                    local_168 = plVar22;
                    uVar13 = (**(code **)(*plVar12 + 0x2e8))(plVar12);
                    local_298 = &local_170;
                    local_290 = 0;
                    lVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,puVar20,uVar13,&local_19c);
                    if (plVar22 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                      UNLOCK();
                    }
                    local_180 = lVar10;
                    local_178 = plVar22;
                    plVar11 = (longlong *)FUN_140165676(&local_180);
                    if (lVar9 != 0) {
                      local_198 = *(undefined4 *)puVar20;
                      uStack_194 = *(undefined4 *)((longlong)puVar20 + 4);
                      uStack_190 = *(undefined4 *)(puVar20 + 1);
                      uStack_18c = *(undefined4 *)((longlong)puVar20 + 0xc);
                      local_188 = local_19c;
                      if (plVar11 != (longlong *)0x0) {
                        (**(code **)(*plVar11 + 0x68))(plVar11,lVar9,&local_198);
                      }
                      local_50 = local_188;
                      uStack_60 = CONCAT44(uStack_194,local_198);
                      uStack_58 = CONCAT44(uStack_18c,uStack_190);
                      local_68 = &PTR_FUN_14a480cc0;
                      local_4c = 0;
                      FUN_14027378e(lVar10 + 0x60,lVar9,DAT_14cab2d08,&local_68);
                    }
                  }
                  local_68 = (undefined **)*puVar20;
                  uStack_60 = puVar20[1];
                  uStack_58 = CONCAT44(uStack_58._4_4_,(int)local_270);
                  FUN_140874ce2(local_208,&local_198,&local_68,0);
                }
              }
            }
LAB_1432da3f7:
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar22 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != local_268);
        }
        if (local_210 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_210 + 3) = (int)local_210[3] + -1;
          UNLOCK();
          if (local_224 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_210 + 1));
          }
        }
        lVar9 = local_220;
        if (local_218 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_218 + 3) = (int)local_218[3] + -1;
          UNLOCK();
          if (local_228 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_218 + 1));
          }
        }
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x14) = 1;
        }
        local_138 = FUN_1403b8464(&local_148,local_138 + 1);
      } while (local_138 != local_22c);
    }
    if (local_148 != (undefined **)0x0) {
      if (*(char *)(local_140 + 0x270) == '\0') {
        *(int *)(local_140 + 0x264) = *(int *)(local_140 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_140 + 0x264) = *(int *)(local_140 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1432da578(&local_200);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432da578 FUN_1432da578 body=421 status=ok
// SIG undefined FUN_1432da578(void)

void FUN_1432da578(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = *(longlong **)(param_1 + 8);
  lVar6 = plVar8[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *plVar8;
    lVar11 = 0;
    do {
      puVar3 = (undefined4 *)(lVar4 + lVar11);
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      lVar7 = lVar4 + 0xc + lVar11;
      uStack_58 = *(undefined4 *)(lVar7 + 4);
      uStack_54 = *(undefined4 *)(lVar7 + 8);
      uStack_50 = *(uint *)(lVar7 + 0xc);
      lVar7 = *(longlong *)(param_1 + 0x10);
      uVar9 = uStack_50 & 0xffff;
      if ((int)uVar9 < *(int *)(lVar7 + 0x30)) {
        lVar10 = lVar7 + 0x18;
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          lVar10 = *(longlong *)(lVar7 + 0x28);
        }
        if ((*(uint *)(lVar10 + (ulonglong)(uVar9 >> 5) * 4) >> (uStack_50 & 0x1f) & 1) != 0) {
          lVar7 = *(longlong *)(lVar7 + 8);
          lVar10 = (ulonglong)uVar9 * 0x128;
          if (uStack_50 >> 0x10 == (uint)*(ushort *)(lVar7 + 0x11c + lVar10)) {
            lVar5 = *(longlong *)(lVar7 + 0x100 + lVar10);
            plVar8 = *(longlong **)(lVar7 + 0x108 + lVar10);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
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
            lVar7 = FUN_1400a16d0(lVar5 + 0x38);
            if (lVar7 != 0) {
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
              }
              local_88 = uStack_58;
              local_78 = lVar5;
              local_70 = plVar8;
              FUN_141654ac4(lVar7,&local_68,&uStack_54,&local_78);
            }
            if (plVar8 != (longlong *)0x0) {
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
          }
        }
      }
      lVar11 = lVar11 + 0x1c;
    } while ((longlong)(int)lVar6 * 0x1c != lVar11);
    plVar8 = *(longlong **)(param_1 + 8);
  }
  *(undefined4 *)(plVar8 + 1) = 0;
  if (*(int *)((longlong)plVar8 + 0xc) != 0) {
    FUN_14179e8e4();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432da71e FUN_1432da71e body=69 status=ok
// SIG undefined FUN_1432da71e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432da71e(void)

{
  _DAT_14cab2d10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432da760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2d18,1);
  return;
}



// FUNCTION 1432da764 FUN_1432da764 body=496 status=ok
// SIG undefined FUN_1432da764(void)

void FUN_1432da764(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if ((*(char *)((longlong)param_1 + 0x22) == '\0') && (DAT_14c760ff0 != '\0')) goto LAB_1432da782;
  if (*param_2 == 0) {
    return;
  }
  if (*param_1 == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14a475ba0;
    plVar7[10] = 0;
    plVar7[0xb] = 0x400000000;
    plVar7[0x10] = 0;
    plVar7[0x11] = 0x400000000;
    if (plVar7 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar10 = (longlong *)param_1[1];
      if (plVar10 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_1432da868:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_1432da88c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *param_1 = (longlong)(plVar7 + 2);
      plVar10 = (longlong *)param_1[1];
      if (plVar7 == plVar10) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      else {
        param_1[1] = (longlong)plVar7;
        if (plVar10 != (longlong *)0x0) goto LAB_1432da868;
      }
LAB_1432da88c:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    uVar8 = (ulonglong)*(ushort *)(param_1 + 4);
    lVar5 = *(longlong *)(param_1[2] + 0xb8);
    lVar9 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar5 + 0x18 + uVar8 * 0x28);
    *(longlong *)(lVar5 + uVar8 * 0x28 + 0x10) = lVar9;
    *(longlong *)(lVar5 + 0x18 + uVar8 * 0x28) = lVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  FUN_147552ffc(*param_1,0xffff,param_2);
  lVar5 = param_1[3];
  iVar3 = *(int *)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x28) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0x2c) < iVar3 + 1U) {
    FUN_14476a5c8(lVar5,iVar3);
  }
  lVar9 = *(longlong *)(lVar5 + 0x20);
  if (*(longlong *)(lVar5 + 0x20) == 0) {
    lVar9 = lVar5;
  }
  lVar5 = *param_2;
  *(longlong *)(lVar9 + (longlong)iVar3 * 8) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_1432da782:
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432da7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432da954 FUN_1432da954 body=509 status=ok
// SIG undefined FUN_1432da954(void)

void FUN_1432da954(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if ((*(char *)((longlong)param_1 + 0x22) == '\0') && (DAT_14c760ff0 != '\0')) goto LAB_1432da976;
  if (*param_3 == 0) {
    return;
  }
  if (*param_1 == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14a475ba0;
    plVar7[10] = 0;
    plVar7[0xb] = 0x400000000;
    plVar7[0x10] = 0;
    plVar7[0x11] = 0x400000000;
    if (plVar7 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar10 = (longlong *)param_1[1];
      if (plVar10 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_1432daa63:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_1432daa87;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *param_1 = (longlong)(plVar7 + 2);
      plVar10 = (longlong *)param_1[1];
      if (plVar7 == plVar10) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      else {
        param_1[1] = (longlong)plVar7;
        if (plVar10 != (longlong *)0x0) goto LAB_1432daa63;
      }
LAB_1432daa87:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    uVar8 = (ulonglong)*(ushort *)(param_1 + 4);
    lVar5 = *(longlong *)(param_1[2] + 0xb8);
    lVar9 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar5 + 0x18 + uVar8 * 0x28);
    *(longlong *)(lVar5 + uVar8 * 0x28 + 0x10) = lVar9;
    *(longlong *)(lVar5 + 0x18 + uVar8 * 0x28) = lVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  FUN_147552ffc(*param_1,param_2,param_3);
  lVar5 = param_1[3];
  iVar3 = *(int *)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x28) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0x2c) < iVar3 + 1U) {
    FUN_14476a5c8(lVar5,iVar3);
  }
  lVar9 = *(longlong *)(lVar5 + 0x20);
  if (*(longlong *)(lVar5 + 0x20) == 0) {
    lVar9 = lVar5;
  }
  lVar5 = *param_3;
  *(longlong *)(lVar9 + (longlong)iVar3 * 8) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_1432da976:
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432da99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432dab51 FUN_1432dab51 body=69 status=ok
// SIG undefined FUN_1432dab51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432dab51(void)

{
  _DAT_14cab2d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432dab93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab2d28,1);
  return;
}



// FUNCTION 1432dab96 FUN_1432dab96 body=31 status=ok
// SIG undefined FUN_1432dab96(void)

void FUN_1432dab96(longlong param_1)

{
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8) =
       *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1432dabb6 FUN_1432dabb6 body=252 status=ok
// SIG undefined FUN_1432dabb6(void)

void FUN_1432dabb6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x48) !=
      *(int *)(*(longlong *)(param_1 + 0x40) + 0x74)) {
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x298) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
    }
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x290);
    FUN_1475536be(param_2);
    local_58 = 0;
    local_48 = &PTR_LAB_14a480d50;
    local_68 = &DAT_1432dc5fc;
    local_88 = uVar2;
    local_40 = param_1;
    FUN_14014aede(&local_70);
    local_78 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + 1;
      UNLOCK();
    }
    FUN_1432da764(param_3,&local_78);
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_70 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_70)(local_70,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dacc5 FUN_1432dacc5 body=55 status=ok
// SIG undefined FUN_1432dacc5(void)

void FUN_1432dacc5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2dc0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2dc0 = FUN_14171c317(FUN_14633d34c,uVar1,L"EMovieSceneBlendType");
  }
  return;
}



// FUNCTION 1432dad1c FUN_1432dad1c body=25 status=ok
// SIG undefined FUN_1432dad1c(void)

void FUN_1432dad1c(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x30);
    return;
  }
  *param_2 = 0xffff;
  return;
}



// FUNCTION 1432dad42 FUN_1432dad42 body=117 status=ok
// SIG undefined FUN_1432dad42(void)

longlong * FUN_1432dad42(longlong param_1,longlong *param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  iVar1 = FUN_1447bdbdc((longlong *)(param_1 + 0x28),param_3[1] ^ *param_3 ^ param_3[2] ^ param_3[3]
                       );
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x28);
    if (((char *)(lVar4 + 0x10) != (char *)0x0 && lVar4 != 0) && (*(char *)(lVar4 + 0x10) == '\x01')
       ) {
      uVar3 = *(undefined4 *)(lVar4 + 0x28);
      lVar2 = lVar4 + 0x18;
      if (*(longlong *)(lVar4 + 0x20) != 0) {
        lVar2 = *(longlong *)(lVar4 + 0x20);
      }
      goto LAB_1432dada7;
    }
  }
  uVar3 = 0;
  lVar2 = 0;
LAB_1432dada7:
  *param_2 = lVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 1432dadb8 FUN_1432dadb8 body=18 status=ok
// SIG undefined FUN_1432dadb8(void)

bool FUN_1432dadb8(longlong *param_1)

{
  if (*param_1 != 0) {
    return param_1[1] != 0;
  }
  return false;
}



// FUNCTION 1432dadca FUN_1432dadca body=66 status=ok
// SIG undefined FUN_1432dadca(void)

undefined8 FUN_1432dadca(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if (param_1[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((*param_1 != 0) && (uVar1 = *(ushort *)(param_1[1] + 0x30), uVar1 != 0xffff)) {
      lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x548) + 8);
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                       *(undefined1 *)(lVar2 + 0x126 + (ulonglong)uVar1 * 0x128)) &
              0xffffffffffffff04;
      uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
    }
  }
  return uVar4;
}



// FUNCTION 1432dae0c FUN_1432dae0c body=55 status=ok
// SIG undefined FUN_1432dae0c(void)

void FUN_1432dae0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3070 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3070 = FUN_14171c317(FUN_14633e340,uVar1,L"EEvaluationMethod");
  }
  return;
}



// FUNCTION 1432dae44 FUN_1432dae44 body=164 status=ok
// SIG undefined FUN_1432dae44(void)

void FUN_1432dae44(int *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0 < param_1[1]) &&
     ((*param_1 != (int)param_2 || (param_1[1] != (int)((ulonglong)param_2 >> 0x20))))) {
    FUN_144a808d5(&local_30,*(undefined8 *)(param_1 + 5),*(undefined8 *)param_1,param_2);
    if (param_4 == '\0') {
      uStack_2c = 0;
    }
    *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_2c,local_30);
    if ((char)param_1[9] == '\x01') {
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if ((char)param_1[0x14] == '\x01') {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  *(undefined8 *)param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(char *)(param_1 + 4) = param_4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432daeea FUN_1432daeea body=351 status=ok
// SIG undefined FUN_1432daeea(void)

undefined1 * FUN_1432daeea(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *(longlong *)((longlong)param_1 + 0x14);
  fVar8 = (float)((ulonglong)lVar3 >> 0x20);
  if (lVar1 != lVar2) {
    lVar4 = (lVar1 >> 0x20) * (longlong)(int)lVar2;
    lVar2 = (longlong)(int)lVar1 * (lVar2 >> 0x20);
    lVar1 = (lVar4 * (int)lVar3) / lVar2;
    dVar6 = ((double)fVar8 * (double)lVar4) / (double)lVar2 +
            (((double)lVar4 * (double)(int)lVar3) / (double)lVar2 - (double)lVar1);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar6;
    auVar7 = roundpd(auVar7,auVar7,1);
    lVar1 = (longlong)auVar7._0_8_ + lVar1;
    fVar5 = (float)(dVar6 - auVar7._0_8_);
    fVar8 = fVar5;
    if (0.99999994 <= fVar5) {
      fVar8 = 0.99999994;
    }
    if (0x7ffffffe < lVar1) {
      lVar1 = 0x7fffffff;
    }
    lVar3 = -0x80000000;
    if (-0x80000000 < lVar1) {
      lVar3 = lVar1;
    }
    fVar8 = (float)(~-(uint)(0.0 < fVar5) & (uint)fVar5 | (uint)fVar8 & -(uint)(0.0 < fVar5)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    lVar2 = param_1[1];
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = (int)lVar3;
  *(float *)(param_2 + 8) = fVar8;
  param_2[0xc] = 1;
  *(int *)(param_2 + 0x10) = (int)lVar3;
  *(float *)(param_2 + 0x14) = fVar8;
  *(longlong *)(param_2 + 0x18) = lVar2;
  *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
  return param_2;
}



// FUNCTION 1432db04a FUN_1432db04a body=467 status=ok
// SIG undefined FUN_1432db04a(void)

undefined1 * FUN_1432db04a(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if ((char)param_1[2] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3 & 0xffffffff00000000;
  }
  *(ulonglong *)((longlong)param_1 + 0x14) = param_3 & 0xffffffff | uVar2;
  lVar1 = *param_1;
  lVar3 = param_1[1];
  fVar8 = (float)(uVar2 >> 0x20);
  if (lVar1 != lVar3) {
    lVar4 = (lVar1 >> 0x20) * (longlong)(int)lVar3;
    lVar3 = (longlong)(int)lVar1 * (lVar3 >> 0x20);
    lVar1 = (lVar4 * (int)param_3) / lVar3;
    dVar5 = ((double)fVar8 * (double)lVar4) / (double)lVar3 +
            (((double)lVar4 * (double)(int)param_3) / (double)lVar3 - (double)lVar1);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar5;
    auVar7 = roundpd(auVar7,auVar7,1);
    uVar2 = (longlong)auVar7._0_8_ + lVar1;
    fVar6 = (float)(dVar5 - auVar7._0_8_);
    fVar8 = fVar6;
    if (0.99999994 <= fVar6) {
      fVar8 = 0.99999994;
    }
    if (0x7ffffffe < (longlong)uVar2) {
      uVar2 = 0x7fffffff;
    }
    param_3 = 0xffffffff80000000;
    if (-0x80000000 < (longlong)uVar2) {
      param_3 = uVar2;
    }
    fVar8 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar8 & -(uint)(0.0 < fVar6)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    lVar3 = param_1[1];
  }
  *(undefined1 *)(param_1 + 5) = 1;
  *(int *)((longlong)param_1 + 0x2c) = (int)param_3;
  *(float *)(param_1 + 6) = fVar8;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(int *)(param_1 + 7) = (int)param_3;
  *(float *)((longlong)param_1 + 0x3c) = fVar8;
  param_1[8] = lVar3;
  param_1[9] = -0x8000000000000000;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
  *param_2 = (char)param_1[5];
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)((longlong)param_1 + 0x29);
  param_2[3] = *(undefined1 *)((longlong)param_1 + 0x2b);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(param_2 + 8) = (int)param_1[6];
  param_2[0xc] = *(undefined1 *)((longlong)param_1 + 0x34);
  *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)((longlong)param_1 + 0x35);
  param_2[0xf] = *(undefined1 *)((longlong)param_1 + 0x37);
  lVar1 = param_1[8];
  *(longlong *)(param_2 + 0x10) = param_1[7];
  *(longlong *)(param_2 + 0x18) = lVar1;
  return param_2;
}



// FUNCTION 1432db21e FUN_1432db21e body=916 status=ok
// SIG undefined FUN_1432db21e(void)

longlong * FUN_1432db21e(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  
  fVar21 = (float)(param_3 >> 0x20);
  iVar13 = (int)param_3;
  fVar3 = fVar21;
  if (((char)param_1[2] == '\0') && (fVar3 = 0.0, *(char *)((longlong)param_1 + 0x54) != '\0')) {
    fVar3 = fVar21;
  }
  uVar15 = *(ulonglong *)
            ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x24) * 8 + 0x14);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  fVar21 = (float)(uVar15 >> 0x20);
  fVar22 = fVar3;
  if (lVar4 != lVar5) {
    lVar12 = (lVar4 >> 0x20) * (longlong)(int)lVar5;
    lVar5 = (longlong)(int)lVar4 * (lVar5 >> 0x20);
    lVar4 = (lVar12 * (int)uVar15) / lVar5;
    dVar17 = ((double)fVar21 * (double)lVar12) / (double)lVar5 +
             (((double)lVar12 * (double)(int)uVar15) / (double)lVar5 - (double)lVar4);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar17;
    auVar18 = roundpd(auVar18,auVar18,1);
    fVar19 = (float)(dVar17 - auVar18._0_8_);
    uVar15 = (longlong)auVar18._0_8_ + lVar4;
    fVar21 = fVar19;
    if (0.99999994 <= fVar19) {
      fVar21 = 0.99999994;
    }
    if (0x7ffffffe < (longlong)uVar15) {
      uVar15 = 0x7fffffff;
    }
    if ((longlong)uVar15 < -0x7fffffff) {
      uVar15 = 0xffffffff80000000;
    }
    fVar21 = (float)(~-(uint)(0.0 < fVar19) & (uint)fVar19 | (uint)fVar21 & -(uint)(0.0 < fVar19)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar21) {
      fVar21 = 0.99999994;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    lVar4 = *param_1;
    lVar5 = param_1[1];
    if (lVar4 != lVar5) {
      lVar12 = (lVar4 >> 0x20) * (longlong)(int)lVar5;
      lVar5 = (longlong)(int)lVar4 * (lVar5 >> 0x20);
      lVar4 = (lVar12 * iVar13) / lVar5;
      dVar17 = ((double)fVar3 * (double)lVar12) / (double)lVar5 +
               (((double)lVar12 * (double)iVar13) / (double)lVar5 - (double)lVar4);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = dVar17;
      auVar18 = roundpd(auVar20,auVar20,1);
      uVar6 = (longlong)auVar18._0_8_ + lVar4;
      fVar19 = (float)(dVar17 - auVar18._0_8_);
      fVar22 = fVar19;
      if (0.99999994 <= fVar19) {
        fVar22 = 0.99999994;
      }
      if (0x7ffffffe < (longlong)uVar6) {
        uVar6 = 0x7fffffff;
      }
      param_3 = 0xffffffff80000000;
      if (-0x80000000 < (longlong)uVar6) {
        param_3 = uVar6;
      }
      fVar22 = (float)(~-(uint)(0.0 < fVar19) & (uint)fVar19 | (uint)fVar22 & -(uint)(0.0 < fVar19))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar22) {
        fVar22 = 0.99999994;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      lVar5 = param_1[1];
    }
  }
  iVar11 = (int)param_3;
  iVar14 = (int)uVar15;
  iVar7 = iVar11;
  fVar19 = fVar22;
  if (iVar11 == iVar14) {
    if ((fVar22 == fVar21) && (!NAN(fVar22) && !NAN(fVar21))) {
      bVar9 = 1;
      bVar8 = 1;
      fVar10 = fVar22;
      goto LAB_1432db4e0;
    }
  }
  bVar8 = *(byte *)((longlong)param_1 + 0x24) ^ 1;
  bVar16 = iVar11 == iVar14;
  bVar1 = iVar11 < iVar14;
  bVar2 = fVar22 < fVar21;
  fVar10 = fVar21;
  if (bVar2 && bVar16 || bVar1) {
    fVar10 = fVar22;
    uVar15 = param_3;
    fVar19 = fVar21;
    iVar7 = iVar14;
  }
  param_3 = uVar15;
  bVar9 = 1;
  if (bVar2 && bVar16 || bVar1) {
    bVar9 = bVar8;
  }
  if (bVar2 && bVar16 || bVar1) {
    bVar8 = 1;
  }
LAB_1432db4e0:
  auVar18 = roundps(ZEXT416((uint)(fVar22 - fVar21)),ZEXT416((uint)(fVar22 - fVar21)),1);
  *(byte *)(param_1 + 5) = bVar8;
  *(ulonglong *)((longlong)param_1 + 0x2c) = param_3 & 0xffffffff | (ulonglong)(uint)fVar10 << 0x20;
  *(byte *)((longlong)param_1 + 0x34) = bVar9;
  param_1[7] = CONCAT44(fVar19,iVar7);
  param_1[8] = lVar5;
  *(uint *)(param_1 + 9) = (uint)((int)auVar18._0_4_ + (iVar11 - iVar14)) >> 0x1f;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined1 *)(param_1 + 10) = 1;
  *(int *)((longlong)param_1 + 0x14) = iVar13;
  *(float *)(param_1 + 3) = fVar3;
  *(int *)((longlong)param_1 + 0x1c) = iVar13;
  *(float *)(param_1 + 4) = fVar3;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  param_2[2] = param_1[7];
  param_2[3] = param_1[8];
  lVar4 = param_1[6];
  *param_2 = param_1[5];
  param_2[1] = lVar4;
  param_2[4] = param_1[9];
  return param_2;
}



// FUNCTION 1432db5b8 FUN_1432db5b8 body=37 status=ok
// SIG undefined FUN_1432db5b8(void)

void FUN_1432db5b8(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a47b390;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 1432db5de FUN_1432db5de body=18 status=ok
// SIG undefined FUN_1432db5de(void)

undefined8 * FUN_1432db5de(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1432db5f0 FUN_1432db5f0 body=55 status=ok
// SIG undefined FUN_1432db5f0(void)

void FUN_1432db5f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3178 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3178 = FUN_14171c317(FUN_14633e89c,uVar1,L"EMovieSceneBreadcrumbMode");
  }
  return;
}



// FUNCTION 1432db628 FUN_1432db628 body=568 status=ok
// SIG undefined FUN_1432db628(void)

uint * FUN_1432db628(uint *param_1,longlong *param_2,longlong param_3,uint param_4,
                    undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_3 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(param_3 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar5 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar5 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar5 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar5 = uVar7;
      }
    }
  }
  uVar7 = *(uint *)(*param_2 + 0x30);
  *param_1 = uVar6;
  param_1[1] = uVar5;
  param_1[2] = uVar7;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = *(uint *)(*param_2 + 0x30);
  lVar9 = DAT_14c9647c8;
  iVar3 = *(int *)(*param_2 + 0x24);
  if ((((iVar3 != 0) && (uVar5 = *(uint *)(*param_2 + 0x20), -1 < (int)uVar5)) &&
      ((int)uVar5 < DAT_14c9647dc)) &&
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar3)) &&
      ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
    lVar4 = *plVar8;
    param_1[7] = 0;
    param_1[8] = 0;
    if (lVar4 != 0) {
      uVar5 = *(uint *)(lVar4 + 0xc);
      param_1[7] = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(lVar9 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar5 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar5 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar5 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar6;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar5 = uVar6;
        }
      }
      goto LAB_1432db742;
    }
  }
  param_1[7] = 0;
  uVar5 = 0;
LAB_1432db742:
  param_1[8] = uVar5;
  *(undefined1 *)(param_1 + 0xc) = param_5;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar9 + 0xec8);
  *(uint **)(lVar9 + 0xec8) = param_1;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 1432db88c FUN_1432db88c body=134 status=ok
// SIG undefined FUN_1432db88c(void)

void FUN_1432db88c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1432dbc16 FUN_1432dbc16 body=806 status=ok
// SIG undefined FUN_1432dbc16(void)

void FUN_1432dbc16(longlong *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58 [2];
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar15 = param_1[2];
  uVar13 = param_3 & 0xffff;
  if ((int)uVar13 < *(int *)(lVar15 + 0x30)) {
    lVar10 = lVar15 + 0x18;
    if (*(longlong *)(lVar15 + 0x28) != 0) {
      lVar10 = *(longlong *)(lVar15 + 0x28);
    }
    if ((*(uint *)(lVar10 + (ulonglong)(uVar13 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      lVar15 = *(longlong *)(lVar15 + 8);
      lVar10 = (ulonglong)uVar13 * 0x128;
      if (param_3 >> 0x10 == (uint)*(ushort *)(lVar15 + 0x11c + lVar10)) {
        lVar12 = *param_1;
        lVar4 = *(longlong *)(lVar15 + 0x100 + lVar10);
        plVar16 = *(longlong **)(lVar15 + 0x108 + lVar10);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
        }
        lVar15 = lVar15 + lVar10;
        lVar10 = FUN_1405e0c42(lVar4 + 0x38);
        if (lVar10 == 0) {
          local_58[0] = *(undefined4 *)(lVar15 + 0x110);
          FUN_1400d1226(lVar4);
        }
        else {
          local_58[0] = *(undefined4 *)(lVar15 + 0x110);
          local_70 = lVar4;
          plVar11 = (longlong *)FUN_1400a65d2(lVar10);
          if (plVar11 != (longlong *)0x0) {
            lVar10 = *(longlong *)(lVar12 + 0x28);
            lVar12 = FUN_14009d2a0();
            cVar8 = FUN_140bbead8(lVar10 + 0x28,param_2,*(undefined2 *)(lVar12 + 0x138));
            if (cVar8 == '\0') {
              lVar10 = (**(code **)(*plVar11 + 0x2a8))(plVar11);
              if ((lVar10 != 0) && (FUN_1432dd47e(lVar10,local_58,param_4), 0 < local_50)) {
                iVar9 = 0;
                local_78 = plVar16;
                do {
                  plVar11 = (longlong *)FUN_140bf242e(lVar10,param_4,iVar9);
                  if (plVar11 != (longlong *)0x0) {
                    local_68 = local_70;
                    if (plVar16 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                      UNLOCK();
                    }
                    local_60 = plVar16;
                    lVar12 = (**(code **)(*plVar11 + 0x2d0))(plVar11,&local_68);
                    if (lVar12 != 0) {
                      if ((((*(byte *)(lVar15 + 0x126) & 2) != 0) &&
                          (*(int *)(lVar15 + 0x122) != *(int *)(lVar15 + 0x11a))) &&
                         (*(char *)(lVar12 + 0x28) != '\0')) break;
                      plVar16 = (longlong *)param_1[1];
                      uVar14 = *(undefined4 *)(lVar15 + 0x110);
                      iVar3 = (int)plVar16[1];
                      *(uint *)(plVar16 + 1) = iVar3 + 1U;
                      if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
                        local_7c = uVar14;
                        FUN_14179e914(plVar16,iVar3);
                        uVar14 = local_7c;
                      }
                      lVar12 = *plVar16;
                      lVar4 = (longlong)iVar3 * 0x1c;
                      uVar5 = param_4[1];
                      uVar6 = param_4[2];
                      uVar7 = param_4[3];
                      puVar2 = (undefined4 *)(lVar12 + lVar4);
                      *puVar2 = *param_4;
                      puVar2[1] = uVar5;
                      puVar2[2] = uVar6;
                      puVar2[3] = uVar7;
                      *(int *)(lVar12 + 0x10 + lVar4) = iVar9;
                      *(undefined4 *)(lVar12 + 0x14 + lVar4) = uVar14;
                      *(uint *)(lVar12 + 0x18 + lVar4) = param_3;
                      plVar16 = local_78;
                    }
                  }
                  iVar9 = iVar9 + 1;
                  FUN_1432dd47e(lVar10,local_58,param_4);
                } while (iVar9 < local_50);
              }
            }
            else {
              lVar10 = (**(code **)(*plVar11 + 0x2e8))();
              iVar9 = FUN_140c7f2b4(lVar10,param_4);
              if (((iVar9 != -1) &&
                  (lVar10 = (longlong)iVar9 * 0xf0 + *(longlong *)(lVar10 + 0x60), lVar10 != 0)) &&
                 (((*(byte *)(lVar15 + 0x126) & 2) == 0 ||
                  ((*(int *)(lVar15 + 0x122) == *(int *)(lVar15 + 0x11a) ||
                   (*(char *)(lVar10 + 0xd8) == '\0')))))) {
                plVar11 = (longlong *)param_1[1];
                uVar14 = *(undefined4 *)(lVar15 + 0x110);
                iVar9 = (int)plVar11[1];
                *(uint *)(plVar11 + 1) = iVar9 + 1U;
                if (*(uint *)((longlong)plVar11 + 0xc) < iVar9 + 1U) {
                  FUN_14179e914(plVar11,iVar9);
                }
                lVar15 = *plVar11;
                lVar10 = (longlong)iVar9 * 0x1c;
                uVar5 = param_4[1];
                uVar6 = param_4[2];
                uVar7 = param_4[3];
                puVar2 = (undefined4 *)(lVar15 + lVar10);
                *puVar2 = *param_4;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar7;
                *(undefined4 *)(lVar15 + 0x10 + lVar10) = 0;
                *(undefined4 *)(lVar15 + 0x14 + lVar10) = uVar14;
                *(uint *)(lVar15 + 0x18 + lVar10) = param_3;
              }
            }
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar16 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
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



// FUNCTION 1432dbf3e FUN_1432dbf3e body=188 status=ok
// SIG undefined FUN_1432dbf3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1432dbf3e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (_DAT_14cab3290 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)_DAT_14cab3290 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 != '\x01') {
        if (cVar1 == '\0') {
          return puVar4;
        }
        if (cVar1 != '\x02') {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)*puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432dbffa FUN_1432dbffa body=547 status=ok
// SIG undefined FUN_1432dbffa(void)

longlong * FUN_1432dbffa(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
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
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1432dc23c FUN_1432dc23c body=110 status=ok
// SIG undefined FUN_1432dc23c(void)

undefined8 * FUN_1432dc23c(undefined8 *param_1,int param_2)

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



// FUNCTION 1432dc2aa FUN_1432dc2aa body=170 status=ok
// SIG undefined FUN_1432dc2aa(void)

int FUN_1432dc2aa(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 2) - (ulonglong)(*(uint *)(param_1 + 2) >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar3 == 0) {
    iVar2 = 0;
  }
  else {
    uVar5 = 0;
    iVar2 = 0;
    do {
      uVar1 = *(ushort *)(*param_1 + uVar5 * 2);
      uVar4 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x5555);
      uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
      iVar2 = iVar2 + (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                  0x38);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  return iVar2;
}



// FUNCTION 1432dc354 FUN_1432dc354 body=547 status=ok
// SIG undefined FUN_1432dc354(void)

longlong * FUN_1432dc354(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
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
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1432dc58e FUN_1432dc58e body=110 status=ok
// SIG undefined FUN_1432dc58e(void)

undefined8 * FUN_1432dc58e(undefined8 *param_1,int param_2)

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



// FUNCTION 1432dc61a FUN_1432dc61a body=29 status=ok
// SIG undefined FUN_1432dc61a(void)

undefined8 FUN_1432dc61a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432dc637 FUN_1432dc637 body=690 status=ok
// SIG undefined FUN_1432dc637(void)

void FUN_1432dc637(longlong param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    uVar9 = (ulonglong)param_3;
    plVar16 = &local_358;
    do {
      puVar5 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      iVar12 = (int)plVar16[2];
      uVar7 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar5) >> 4) + 1;
      puVar13 = puVar10;
      puVar14 = puVar5;
      if (iVar12 != 0) {
LAB_1432dc707:
        if (8 < (int)uVar7) {
          uVar1 = puVar5[(ulonglong)(uVar7 >> 1) * 2];
          uVar2 = (puVar5 + (ulonglong)(uVar7 >> 1) * 2)[1];
          uVar3 = puVar5[1];
          puVar5[(ulonglong)(uVar7 >> 1) * 2] = *puVar5;
          (puVar5 + (ulonglong)(uVar7 >> 1) * 2)[1] = uVar3;
          *puVar5 = uVar1;
          puVar5[1] = uVar2;
          puVar8 = puVar10 + 2;
          puVar6 = puVar5;
          do {
            puVar4 = puVar6 + 2;
            puVar11 = puVar6 + 2;
            do {
              puVar6 = puVar11;
              puVar17 = puVar4;
              if (puVar10 < puVar6) break;
              puVar4 = puVar17 + 2;
              puVar11 = puVar6 + 2;
            } while (*(ushort *)((longlong)puVar6 + uVar9) <= *(ushort *)((longlong)puVar5 + uVar9))
            ;
            puVar4 = puVar8 + -4;
            do {
              puVar11 = puVar8;
              puVar15 = puVar4;
              puVar8 = puVar11 + -2;
              if (puVar8 <= puVar5) break;
              puVar4 = puVar15 + -2;
            } while (*(ushort *)((longlong)puVar5 + uVar9) <= *(ushort *)((longlong)puVar8 + uVar9))
            ;
            if (puVar8 < puVar6) goto LAB_1432dc829;
            uVar1 = *puVar6;
            uVar2 = puVar6[1];
            uVar3 = puVar11[-1];
            *puVar6 = *puVar8;
            puVar6[1] = uVar3;
            *puVar8 = uVar1;
            puVar11[-1] = uVar2;
          } while( true );
        }
        for (; puVar14 = puVar5, puVar13 = puVar5, puVar5 < puVar10; puVar10 = puVar10 + -2) {
          while (puVar8 = puVar14, puVar13 = puVar13 + 2, puVar13 <= puVar10) {
            puVar14 = puVar13;
            if (*(ushort *)((longlong)puVar13 + uVar9) <= *(ushort *)((longlong)puVar8 + uVar9)) {
              puVar14 = puVar8;
            }
          }
          local_58 = *puVar8;
          uStack_50 = puVar8[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          uVar1 = puVar10[1];
          *puVar8 = *puVar10;
          puVar8[1] = uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_1432dc7e7;
      }
LAB_1432dc8dd:
      FUN_14756696a(puVar5,uVar7,param_3);
LAB_1432dc7e7:
      plVar16 = plVar16 + -3;
    } while (&local_358 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1432dc829:
  local_58 = *puVar5;
  uStack_50 = puVar5[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = puVar11[-1];
  *puVar5 = *puVar8;
  puVar5[1] = uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar8 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar11 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + -4) = uStack_50._4_4_;
  iVar12 = iVar12 + -1;
  puVar11 = puVar11 + -4;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar15 - (longlong)puVar14 < (longlong)puVar13 - (longlong)puVar17) {
    if (puVar6 < puVar10) {
      *plVar16 = (longlong)puVar6;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = iVar12;
      plVar16 = plVar16 + 3;
    }
    puVar17 = puVar5;
    if (puVar8 <= puVar5 + 2) goto LAB_1432dc7e7;
  }
  else {
    if (puVar5 + 2 < puVar8) {
      *plVar16 = (longlong)puVar5;
      plVar16[1] = (longlong)puVar11;
      *(int *)(plVar16 + 2) = iVar12;
      plVar16 = plVar16 + 3;
    }
    puVar5 = puVar6;
    puVar11 = puVar10;
    puVar15 = puVar10;
    if (puVar10 <= puVar6) goto LAB_1432dc7e7;
  }
  uVar7 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar17) >> 4) + 1;
  puVar10 = puVar11;
  puVar13 = puVar15;
  puVar14 = puVar17;
  if (iVar12 == 0) goto LAB_1432dc8dd;
  goto LAB_1432dc707;
}



// FUNCTION 1432dc8ea FUN_1432dc8ea body=118 status=ok
// SIG undefined FUN_1432dc8ea(void)

void FUN_1432dc8ea(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 1432dc960 FUN_1432dc960 body=31 status=ok
// SIG undefined FUN_1432dc960(void)

undefined8 FUN_1432dc960(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432dc9cc FUN_1432dc9cc body=188 status=ok
// SIG undefined FUN_1432dc9cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1432dc9cc(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (_DAT_14cab3b78 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)_DAT_14cab3b78 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 == '\0') {
        return puVar4;
      }
      if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
        return (undefined8 *)*puVar4;
      }
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432dca88 FUN_1432dca88 body=40 status=ok
// SIG undefined FUN_1432dca88(void)

void FUN_1432dca88(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14755f982(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1432dcab0 FUN_1432dcab0 body=141 status=ok
// SIG undefined FUN_1432dcab0(void)

undefined8 FUN_1432dcab0(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [40];
  int local_20;
  float fStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fStack_1c = (float)param_2[1] - *(float *)(*param_1 + 0xc);
  auVar3 = roundps(ZEXT416((uint)fStack_1c),ZEXT416((uint)fStack_1c),1);
  local_20 = (*param_2 - *(int *)(*param_1 + 8)) + (int)auVar3._0_4_;
  fStack_1c = fStack_1c - auVar3._0_4_;
  cVar1 = FUN_1458ffc0a(param_1 + 1);
  uVar2 = 1;
  if (cVar1 != '\0') {
    local_18 = CONCAT44(fStack_1c,local_20);
    uVar2 = (*(code *)param_1[4])(param_1[5]);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dcb3e FUN_1432dcb3e body=144 status=ok
// SIG undefined FUN_1432dcb3e(void)

void FUN_1432dcb3e(longlong *param_1,int *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_38 [40];
  int local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar1 = (float)param_2[1] - *(float *)(*param_1 + 0xc);
  auVar2 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),1);
  local_10 = (int)auVar2._0_4_ + (*param_2 - *(int *)(*param_1 + 8));
  local_c = (fVar1 - auVar2._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= local_c) {
    local_c = 0.99999994;
  }
  if (local_c <= 0.0) {
    local_c = 0.0;
  }
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dcbd0 FUN_1432dcbd0 body=142 status=ok
// SIG undefined FUN_1432dcbd0(void)

void FUN_1432dcbd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = *(int *)(param_1 + 7);
  if (local_10 < 2) {
    local_10 = 1;
  }
  local_10 = local_10 + -1;
  local_18 = param_1[6];
  local_30 = &local_18;
  local_20 = 1;
  if (1 < *(int *)(param_1 + 5)) {
    local_20 = *(int *)(param_1 + 5);
  }
  local_20 = local_20 + -1;
  local_28 = param_1[4];
  local_38 = &local_28;
  FUN_14755a2d0(*param_1,*(int *)(param_1 + 3) + 1,*param_2,param_1 + 1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dcc60 FUN_1432dcc60 body=57 status=ok
// SIG undefined FUN_1432dcc60(void)

undefined8 FUN_1432dcc60(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147563c88(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1432dcc9a FUN_1432dcc9a body=57 status=ok
// SIG undefined FUN_1432dcc9a(void)

undefined8 FUN_1432dcc9a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147563c88(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1432dccd4 FUN_1432dccd4 body=120 status=ok
// SIG undefined FUN_1432dccd4(void)

void FUN_1432dccd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)param_1[3];
  local_30 = &local_18;
  local_10 = *(undefined4 *)((undefined8 *)param_1[3] + 1);
  local_28 = *(undefined8 *)param_1[2];
  local_38 = &local_28;
  local_20 = *(undefined4 *)((undefined8 *)param_1[2] + 1);
  FUN_14755a2d0(param_1[1],0,*param_2,*param_1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dcd4e FUN_1432dcd4e body=31 status=ok
// SIG undefined FUN_1432dcd4e(void)

undefined8 FUN_1432dcd4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432dcd76 FUN_1432dcd76 body=37 status=ok
// SIG undefined FUN_1432dcd76(void)

void FUN_1432dcd76(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  (**(code **)(*param_2 + 0x20))(param_2,*param_3,1,0,param_1);
  return;
}



// FUNCTION 1432dcdb1 FUN_1432dcdb1 body=1324 status=ok
// SIG undefined FUN_1432dcdb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432dcdb1(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14cab2cd0 = 0xffffffff;
  DAT_14cab2cd4 = 0;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a475fc0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a476440,1,0);
  DAT_14cab3270 = DAT_14cab3270 + 1;
  iVar2 = (int)DAT_14cab3270;
  uVar1 = (uint)(DAT_14cab3270 >> 0xd) & 0x7ffff;
  uVar3 = 1U - iVar2 ^ uVar1;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - iVar2;
  uVar7 = uVar5 >> 0xd ^ (iVar2 - uVar3) - uVar5;
  uVar3 = uVar7 >> 0xc ^ (uVar3 - uVar5) - uVar7;
  uVar5 = uVar3 << 0x10 ^ (uVar5 - uVar7) - uVar3;
  uVar6 = uVar5 >> 5 ^ (uVar7 - uVar3) - uVar5;
  uVar8 = uVar6 >> 3 ^ (uVar3 - uVar5) - uVar6;
  uVar5 = uVar8 << 10 ^ (uVar5 - uVar6) - uVar8;
  uVar1 = 0x4cab3270U - iVar2 ^ uVar1;
  uVar4 = uVar1 << 8 ^ (-0x61c88647 - uVar1) - iVar2;
  uVar7 = uVar4 >> 0xd ^ (iVar2 - uVar1) - uVar4;
  uVar3 = uVar7 >> 0xc ^ (uVar1 - uVar4) - uVar7;
  uVar1 = uVar3 << 0x10 ^ (uVar4 - uVar7) - uVar3;
  uVar7 = uVar1 >> 5 ^ (uVar7 - uVar3) - uVar1;
  uVar3 = uVar7 >> 3 ^ (uVar3 - uVar1) - uVar7;
  uVar1 = uVar3 << 10 ^ (uVar1 - uVar7) - uVar3;
  DAT_14cab2d08 =
       CONCAT44(uVar5 >> 0xf ^ uVar6 - (uVar8 + uVar5),uVar1 >> 0xf ^ uVar7 - (uVar3 + uVar1));
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab2d10,L"Sequencer.IgnoreDependenciesWhenNotThreading",&DAT_14c760ff0,
                L"(Default: true) Whether to ignore task dependencies when there is no threading.");
  atexit(FUN_1432da71e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab2d20,L"Sequencer.CustomTaskScheduling",&DAT_14c760ff1,
                L"(Default: true. Enables more efficient custom task scheduling of asynchronous Sequencer evaluation."
               );
  atexit(FUN_1432dab51);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a476cb0,1,&PTR_FUN_14a476c80);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4775c0,2,&PTR_FUN_14a477590);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a477830;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a477850);
  _DAT_14cab3288 = DAT_14cab2e38 + 1;
  _DAT_14cab3284 = DAT_14cab2e38;
  DAT_14cab2e38 = DAT_14cab2e38 + 2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a477fd0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a478330,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0);
  local_68 = 0xa462b7ea;
  uStack_64 = 0xf4994e3a;
  uStack_60 = 0x99c1ec1f;
  uStack_5c = 0x8224e1b2;
  _DAT_14cab2e70 = 0xa462b7ea;
  uRam000000014cab2e74 = 0xf4994e3a;
  uRam000000014cab2e78 = 0x99c1ec1f;
  uRam000000014cab2e7c = 0x8224e1b2;
  FUN_141005458(&local_68,4,L"MovieSceneEvaluation",0);
  atexit((_func_5014 *)&LAB_1432dad35);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 0xf;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a479ef0);
  _DAT_14cab3290 = DAT_14cab2e38 + 1;
  DAT_14cab328c = DAT_14cab2e38;
  DAT_14cab3280 = DAT_14cab2e38 + 2;
  _DAT_14cab3294 = DAT_14cab2e38 + 3;
  DAT_14cab2e38 = DAT_14cab2e38 + 4;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47a9d0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47ab90);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a47b0c0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47b0e0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47b330);
  _DAT_14cab30d0 = 0;
  DAT_14cab30e8 = 0;
  _DAT_14cab30f0 = 0;
  DAT_14cab30d8 = 0;
  uRam000000014cab30e0 = 0;
  atexit((_func_5014 *)&LAB_1432db5b2);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47c080);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a47c9a0;
  local_88 = 6;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47c9c0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47cbc0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a47cd20);
  DAT_14cab3260 = DAT_14cab3268 + 1;
  DAT_14cab3098 = DAT_14cab3268 + 2;
  DAT_14cab3264 = DAT_14cab3268 + 3;
  DAT_14cab3268 = DAT_14cab3264;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dd2e0 FUN_1432dd2e0 body=70 status=ok
// SIG undefined FUN_1432dd2e0(void)

void FUN_1432dd2e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x18) << 4;
    lVar2 = *(longlong *)(param_1 + 0x10) + 8;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1432dd326 FUN_1432dd326 body=55 status=ok
// SIG undefined FUN_1432dd326(void)

void FUN_1432dd326(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab32a8 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab32a8 = FUN_14171c317(FUN_14633f4b3,uVar1,L"EMovieSceneBuiltInEasing");
  }
  return;
}



// FUNCTION 1432dd35d FUN_1432dd35d body=106 status=ok
// SIG undefined FUN_1432dd35d(void)

void FUN_1432dd35d(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14a4816d0;
  puVar1[5] = &PTR_FUN_14a481970;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1432dd3cc FUN_1432dd3cc body=4 status=ok
// SIG undefined FUN_1432dd3cc(void)

undefined4 FUN_1432dd3cc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// FUNCTION 1432dd3d0 FUN_1432dd3d0 body=12 status=ok
// SIG undefined FUN_1432dd3d0(void)

longlong FUN_1432dd3d0(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x70);
}



// FUNCTION 1432dd3dc FUN_1432dd3dc body=145 status=ok
// SIG undefined FUN_1432dd3dc(void)

void FUN_1432dd3dc(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14a484340;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 1;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return;
}



// FUNCTION 1432dd46e FUN_1432dd46e body=16 status=ok
// SIG undefined FUN_1432dd46e(void)

void FUN_1432dd46e(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  return;
}



// FUNCTION 1432dd47e FUN_1432dd47e body=233 status=ok
// SIG undefined FUN_1432dd47e(void)

void FUN_1432dd47e(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  if ((int)uVar3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar10;
      lVar9 = (ulonglong)uVar1 * 0x30;
      lVar2 = lVar5 + lVar9;
      uVar4 = *(uint *)(lVar5 + lVar9);
      if ((uVar4 < *param_3) ||
         ((uVar4 <= *param_3 &&
          ((*(uint *)(lVar2 + 4) < param_3[1] ||
           ((*(uint *)(lVar2 + 4) == param_3[1] &&
            ((*(uint *)(lVar2 + 8) < param_3[2] ||
             ((*(uint *)(lVar2 + 8) == param_3[2] && (*(uint *)(lVar2 + 0xc) < param_3[3])))))))))))
         ) {
        uVar10 = uVar1 + (uVar6 & 1);
      }
      bVar11 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar11);
  }
  uVar6 = uVar3 - uVar10;
  if (uVar6 == 0 || (int)uVar3 < (int)uVar10) {
    uVar6 = 0;
  }
  else {
    puVar7 = (uint *)((ulonglong)uVar10 * 0x30 + lVar5 + 0xc);
    uVar8 = 0;
    do {
      if ((((puVar7[-3] != *param_3) || (puVar7[-2] != param_3[1])) || (puVar7[-1] != param_3[2]))
         || (*puVar7 != param_3[3])) {
        uVar6 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar6 != uVar8);
  }
  *param_2 = lVar5 + (ulonglong)uVar10 * 0x30;
  *(uint *)(param_2 + 1) = uVar6;
  return;
}



// FUNCTION 1432dd568 FUN_1432dd568 body=10 status=ok
// SIG undefined FUN_1432dd568(void)

void FUN_1432dd568(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432dd56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))();
  return;
}



// FUNCTION 1432dd584 FUN_1432dd584 body=527 status=ok
// SIG undefined FUN_1432dd584(void)

undefined8 *
FUN_1432dd584(undefined8 *param_1,longlong *param_2,longlong ***param_3,undefined8 param_4,
             uint *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong **pplVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong ***ppplVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong **local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 != (longlong ***)0x0) && (*param_6 != 0)) {
    pplVar5 = (longlong **)FUN_1432dc9cc(*param_2 + 0x38);
    if (pplVar5 == (longlong **)0x0) {
      lVar6 = *param_2;
      plVar7 = (longlong *)param_2[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      FUN_14179f446(lVar6 + 0x38,&local_70,1 << (DAT_14cab3b78 & 0x1f));
      if (((local_68 & 0xff) == 2) || (ppplVar8 = &local_70, (local_68 & 0xff) == 1)) {
        ppplVar8 = (longlong ***)local_70;
      }
      pplVar5 = *ppplVar8;
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
    }
    local_50 = *param_2;
    local_48 = param_2[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    lVar6 = FUN_141493450(pplVar5,&local_50,param_4);
    if (lVar6 != 0) {
      local_68 = *param_5;
      uStack_64 = param_5[1];
      uStack_60 = param_5[2];
      uStack_5c = param_5[3];
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_3);
      }
      iVar3 = *(int *)(*param_2 + 0x14);
      local_70 = (longlong **)param_3;
      if (iVar3 == 0) {
LAB_1432dd78f:
        lVar9 = 0;
      }
      else {
        uVar4 = *(uint *)(*param_2 + 0x10);
        lVar9 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != iVar3 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
          goto LAB_1432dd78f;
          lVar9 = *plVar7;
          if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar9);
          }
        }
      }
      local_58 = lVar9;
      FUN_147572482(param_1,lVar6,param_6);
      goto LAB_1432dd616;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_1432dd616:
  plVar7 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dd794 FUN_1432dd794 body=69 status=ok
// SIG undefined FUN_1432dd794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432dd794(void)

{
  _DAT_14cab35e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432dd7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab35f0,1);
  return;
}



// FUNCTION 1432dd7d9 FUN_1432dd7d9 body=55 status=ok
// SIG undefined FUN_1432dd7d9(void)

void FUN_1432dd7d9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3630 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3630 = FUN_14171c317(FUN_1463406e7,uVar1,L"EMovieSceneObjectBindingSpace");
  }
  return;
}



// FUNCTION 1432dd83e FUN_1432dd83e body=55 status=ok
// SIG undefined FUN_1432dd83e(void)

void FUN_1432dd83e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3850 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3850 = FUN_14171c317(FUN_146341003,uVar1,L"EUpdatePositionMethod");
  }
  return;
}



// FUNCTION 1432dd875 FUN_1432dd875 body=55 status=ok
// SIG undefined FUN_1432dd875(void)

void FUN_1432dd875(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3880 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3880 = FUN_14171c317(FUN_1463410c8,uVar1,L"EMovieScenePositionType");
  }
  return;
}



// FUNCTION 1432dd8ac FUN_1432dd8ac body=11 status=ok
// SIG undefined FUN_1432dd8ac(void)

bool FUN_1432dd8ac(longlong param_1)

{
  return *(char *)(param_1 + 0x290) == '\x05';
}



// FUNCTION 1432dd8b8 FUN_1432dd8b8 body=11 status=ok
// SIG undefined FUN_1432dd8b8(void)

bool FUN_1432dd8b8(longlong param_1)

{
  return *(char *)(param_1 + 0x290) == '\x01';
}



// FUNCTION 1432dd8de FUN_1432dd8de body=892 status=ok
// SIG undefined FUN_1432dd8de(void)

void FUN_1432dd8de(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x38);
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_140a4831c;
      local_48 = &DAT_14c951a38;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_1432ddaac;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_1432ddaac:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x2d4) = local_29;
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ddc5c FUN_1432ddc5c body=686 status=ok
// SIG undefined FUN_1432ddc5c(void)

void FUN_1432ddc5c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 1 || (int)(param_2 >> 0x20) < 1) {
    FUN_14179f158(param_1,local_40,1);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    goto LAB_1432ddede;
  }
  if (*(longlong **)(param_1 + 0x298) == (longlong *)0x0) {
LAB_1432ddcdc:
    uVar5 = 0;
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x2e8))();
    if (lVar3 == 0) goto LAB_1432ddcdc;
    uVar5 = *(undefined1 *)(lVar3 + 0x170);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x308);
  if (uVar1 == param_2) {
    iVar4 = *(int *)(param_1 + 0x2a4);
    uVar2 = 0;
  }
  else {
    local_40[0] = ((longlong)uVar1 >> 0x20) * (param_2 & 0x7fffffff);
    local_48 = (longlong)(int)uVar1 * ((longlong)param_2 >> 0x20);
    lVar3 = (local_40[0] * *(int *)(param_1 + 0x2a0)) / local_48;
    auVar9._0_8_ = (double)((ulonglong)(double)local_40[0] & 0x8000000000000000) / (double)local_48
                   + (((double)local_40[0] * (double)*(int *)(param_1 + 0x2a0)) / (double)local_48 -
                     (double)lVar3);
    auVar9._8_8_ = 0;
    auVar9 = roundpd(auVar9,auVar9,1);
    lVar3 = (longlong)auVar9._0_8_ + lVar3;
    if (0x7ffffffe < lVar3) {
      lVar3 = 0x7fffffff;
    }
    if (lVar3 < -0x7fffffff) {
      lVar3 = -0x80000000;
    }
    *(int *)(param_1 + 0x2a0) = (int)lVar3;
    lVar3 = (local_40[0] * *(int *)(param_1 + 0x2a4)) / local_48;
    dVar8 = (double)((ulonglong)(double)local_40[0] & 0x8000000000000000) / (double)local_48 +
            (((double)local_40[0] * (double)*(int *)(param_1 + 0x2a4)) / (double)local_48 -
            (double)lVar3);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar8;
    auVar9 = roundpd(auVar7,auVar7,1);
    lVar3 = (longlong)auVar9._0_8_ + lVar3;
    fVar6 = (float)(dVar8 - auVar9._0_8_);
    fVar10 = fVar6;
    if (0.99999994 <= fVar6) {
      fVar10 = 0.99999994;
    }
    if (0x7ffffffe < lVar3) {
      lVar3 = 0x7fffffff;
    }
    if (lVar3 < -0x7fffffff) {
      lVar3 = -0x80000000;
    }
    iVar4 = (int)lVar3;
    fVar10 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar10 & -(uint)(0.0 < fVar6)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar2 = (uint)(0.5 <= fVar10);
  }
  *(uint *)(param_1 + 0x2a4) = iVar4 + uVar2;
  FUN_1432dae44(param_1 + 0x308,param_2,*(undefined8 *)(param_1 + 0x310),
                *(undefined1 *)(param_1 + 0x318));
  *(undefined1 *)(param_1 + 0x35c) = uVar5;
LAB_1432ddede:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ddf0b FUN_1432ddf0b body=69 status=ok
// SIG undefined FUN_1432ddf0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ddf0b(void)

{
  _DAT_14cab3aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ddf4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3aa8,1);
  return;
}



// FUNCTION 1432ddf50 FUN_1432ddf50 body=69 status=ok
// SIG undefined FUN_1432ddf50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ddf50(void)

{
  _DAT_14cab3ab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ddf92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3ab8,1);
  return;
}



// FUNCTION 1432ddf95 FUN_1432ddf95 body=69 status=ok
// SIG undefined FUN_1432ddf95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ddf95(void)

{
  _DAT_14cab3ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ddfd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3ac8,1);
  return;
}



// FUNCTION 1432ddfda FUN_1432ddfda body=69 status=ok
// SIG undefined FUN_1432ddfda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ddfda(void)

{
  _DAT_14cab3ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432de01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3ad8,1);
  return;
}



// FUNCTION 1432de01f FUN_1432de01f body=69 status=ok
// SIG undefined FUN_1432de01f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432de01f(void)

{
  _DAT_14cab3ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432de061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3af0,1);
  return;
}



// FUNCTION 1432de082 FUN_1432de082 body=544 status=ok
// SIG undefined FUN_1432de082(void)

void FUN_1432de082(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  ulonglong uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x228) != (longlong *)0x0))
  {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x10))();
    if (cVar4 == '\0') goto LAB_1432de252;
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    lVar5 = FUN_1400d1226(*(longlong *)(param_1 + 0x2e8),&DAT_14cab329c);
    if (lVar5 != 0) {
      if ((*(longlong *)(param_1 + 0x3a0) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x3a8), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      }
      *(byte *)(param_1 + 0x294) = *(byte *)(param_1 + 0x294) & 0xf7;
      local_88 = param_2[4];
      local_a8 = *param_2;
      uStack_a0 = param_2[1];
      local_98 = *(undefined4 *)(param_2 + 2);
      uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_90 = *(undefined4 *)(param_2 + 3);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_80 = 0x3f800000;
      local_78 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_34 = 0x80000000;
      local_2c = *param_4;
      local_38 = param_3;
      if (*(longlong *)(param_1 + 0x2e8) == 0) {
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
      }
      else {
        FUN_140232b8e(*(longlong *)(param_1 + 0x2e8),&local_b8);
        lVar5 = local_b8;
        if (local_b8 != 0) {
          if (*(longlong *)(param_1 + 0x2e8) == 0) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
          }
          FUN_1404117b8(local_b8,&local_a8,uVar6,0);
          if ((lVar5 == *(longlong *)(param_1 + 0x3e0)) || (param_4[1] == '\0')) {
            if (*(int *)(lVar5 + 0x80) == 0) {
              *(undefined4 *)(lVar5 + 0x80) = DAT_14cab2be4;
            }
            FUN_14029f2bc(lVar5,0);
          }
        }
      }
      plVar3 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      FUN_1447bda9c(local_70,uStack_68 & 0xffffffff);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1432de252:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432de2a4 FUN_1432de2a4 body=2012 status=ok
// SIG undefined FUN_1432de2a4(void)

void FUN_1432de2a4(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 in_XMM5 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined5 uStack_158;
  undefined3 uStack_153;
  undefined5 uStack_150;
  undefined1 local_148;
  undefined2 local_147;
  undefined1 local_145;
  int local_140;
  float local_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined4 local_108;
  int local_100;
  float local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined5 uStack_d8;
  undefined3 uStack_d3;
  undefined5 uStack_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar5 = FUN_1402d76c0();
  if ((((cVar5 != '\0') || (param_1[0x53] == 0)) || ((char)param_1[0x7e] != '\0')) ||
     (*(int *)((longlong)param_1 + 0x39c) < (int)param_1[0x56])) goto LAB_1432de9d9;
  cVar5 = *(char *)((longlong)param_1 + 0x394);
  cVar1 = (char)param_1[0x52];
  bVar11 = (int)*(undefined8 *)((longlong)param_1 + 0x38c) ==
           (int)*(undefined8 *)((longlong)param_1 + 0x31c);
  bVar2 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x38c) >> 0x20) ==
          (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x31c) >> 0x20);
  fVar19 = *(float *)(param_1 + 0x59);
  plVar8 = (longlong *)(**(code **)(param_1[5] + 0x78))(param_1 + 5);
  dVar3 = 1.0;
  if (((plVar8 != (longlong *)0x0) &&
      (lVar9 = (**(code **)(*plVar8 + 0x180))(plVar8), dVar3 = 1.0, lVar9 != 0)) &&
     ((dVar3 = 1.0, *(longlong *)(lVar9 + 0x30) != 0 &&
      (plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x30) + 0x2b0), dVar3 = 1.0,
      plVar8 != (longlong *)0x0)))) {
    fVar12 = (float)(**(code **)(*plVar8 + 0x668))();
    dVar3 = (double)fVar12;
  }
  fVar13 = (float)FUN_140523128(param_1);
  fVar12 = DAT_14c760ff4;
  if ((cVar5 == cVar1 && (bVar2 && bVar11)) ||
     (((lVar9 = param_1[0x61], param_1[0x44] != 0 && ((longlong *)param_1[0x45] != (longlong *)0x0))
      && (cVar6 = (**(code **)(*(longlong *)param_1[0x45] + 0x10))(), cVar6 == '\0'))))
  goto LAB_1432de9d9;
  dVar20 = (double)(int)lVar9;
  dVar21 = (double)(int)((ulonglong)lVar9 >> 0x20);
  dVar15 = ((double)(fVar13 / 1000.0) * dVar20) / dVar21;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar15;
  auVar14 = roundpd(in_XMM5,auVar14,1);
  dVar26 = auVar14._0_8_;
  dVar15 = dVar15 - dVar26;
  if (2147483647.0 <= dVar26) {
    dVar26 = 2147483647.0;
  }
  if (dVar26 <= -2147483648.0) {
    dVar26 = -2147483648.0;
  }
  iVar10 = (int)dVar15;
  fVar23 = (float)dVar15 - (float)iVar10;
  fVar13 = fVar23;
  if (0.99999994 <= fVar23) {
    fVar13 = 0.99999994;
  }
  fVar13 = (float)(~-(uint)(0.0 < fVar23) & (uint)fVar23 | (uint)fVar13 & -(uint)(0.0 < fVar23)) +
           0.5 + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  auVar14 = ZEXT416((uint)fVar13);
  if (fVar13 <= 0.0) {
    auVar14 = ZEXT416(0) << 0x20;
  }
  auVar27._8_8_ = auVar14._8_8_;
  dVar26 = ((double)auVar14._0_4_ + (double)((int)dVar26 + iVar10)) * (double)fVar19;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar26;
  auVar14 = roundpd(auVar24,auVar24,1);
  dVar15 = auVar14._0_8_;
  auVar27._0_8_ = dVar26 - dVar15;
  if (2147483647.0 <= dVar15) {
    dVar15 = 2147483647.0;
  }
  if (dVar15 <= -2147483648.0) {
    dVar15 = -2147483648.0;
  }
  auVar28._4_12_ = auVar27._4_12_;
  fVar13 = (float)auVar27._0_8_;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 + 0.5 + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  auVar28._0_4_ = fVar13;
  if (fVar13 <= 0.0) {
    auVar4._12_4_ = 0;
    auVar4._0_12_ = auVar28._4_12_;
    auVar28 = auVar4 << 0x20;
  }
  auVar29._8_8_ = auVar28._8_8_;
  dVar26 = ((double)auVar28._0_4_ + (double)(int)dVar15) * dVar3;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar26;
  auVar14 = roundpd(auVar25,auVar25,1);
  dVar15 = auVar14._0_8_;
  auVar29._0_8_ = dVar26 - dVar15;
  if (2147483647.0 <= dVar15) {
    dVar15 = 2147483647.0;
  }
  if (dVar15 <= -2147483648.0) {
    dVar15 = -2147483648.0;
  }
  auVar30._4_12_ = auVar29._4_12_;
  fVar13 = (float)auVar29._0_8_;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 + 0.5 + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (cVar5 == '\x01' && cVar1 != '\x01') {
    dVar21 = (dVar20 * (double)(fVar12 * 0.001)) / dVar21;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar21;
    auVar14 = roundpd(auVar22,auVar22,1);
    dVar20 = auVar14._0_8_;
    dVar21 = dVar21 - dVar20;
    if (2147483647.0 <= dVar20) {
      dVar20 = 2147483647.0;
    }
    if (dVar20 <= -2147483648.0) {
      dVar20 = -2147483648.0;
    }
    iVar10 = (int)dVar21;
    fVar18 = (float)dVar21 - (float)iVar10;
    fVar23 = fVar18;
    if (0.99999994 <= fVar18) {
      fVar23 = 0.99999994;
    }
    fVar23 = (float)(~-(uint)(0.0 < fVar18) & (uint)fVar18 | (uint)fVar23 & -(uint)(0.0 < fVar18)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar23) {
      fVar23 = 0.99999994;
    }
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    dVar21 = ((double)fVar23 + (double)((int)dVar20 + iVar10)) * (double)fVar19;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar21;
    auVar14 = roundpd(auVar16,auVar16,1);
    dVar20 = auVar14._0_8_;
    dVar21 = dVar21 - dVar20;
    if (2147483647.0 <= dVar20) {
      dVar20 = 2147483647.0;
    }
    if (dVar20 <= -2147483648.0) {
      dVar20 = -2147483648.0;
    }
    fVar19 = (float)dVar21;
    if (0.99999994 <= fVar19) {
      fVar19 = 0.99999994;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    fVar19 = fVar19 + 0.5 + -0.5;
    if (0.99999994 <= fVar19) {
      fVar19 = 0.99999994;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    dVar3 = dVar3 * ((double)fVar19 + (double)(int)dVar20);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar3;
    auVar14 = roundpd(ZEXT416((uint)(fVar12 * 0.001)),auVar17,1);
    uVar32 = auVar14._0_4_;
    uVar33 = auVar14._4_4_;
    if (2147483647.0 <= auVar14._0_8_) {
      uVar32 = 0xffc00000;
      uVar33 = 0x41dfffff;
    }
    if ((double)CONCAT44(uVar33,uVar32) <= -2147483648.0) {
      uVar32 = 0;
      uVar33 = 0xc1e00000;
    }
    if (*(int *)((longlong)param_1 + 900) < 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      FUN_14571f40c(param_1 + 0x6f);
    }
    else {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    (**(code **)(*param_1 + 0x2b8))(param_1);
    auVar30._0_4_ = fVar13 + *(float *)(param_1 + 0x72);
    auVar24 = roundss(ZEXT416(0),auVar30,9);
    iVar10 = (int)dVar15 + *(int *)((longlong)param_1 + 0x38c) +
             ((int)ROUND(auVar30._0_4_ + auVar30._0_4_ + -0.5) >> 1);
    fVar19 = (auVar30._0_4_ - auVar24._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar19) {
      fVar19 = 0.99999994;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    fVar12 = *(float *)(param_1 + 100) - fVar19;
    auVar24 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    uVar7 = (*(int *)((longlong)param_1 + 0x31c) - iVar10) + (int)auVar24._0_4_;
    fVar12 = (fVar12 - auVar24._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if ((int)uVar7 < 0) {
      if ((fVar12 != 0.0) || (NAN(fVar12))) {
        fVar12 = (1.0 - fVar12) + 0.5 + -0.5;
        if (0.99999994 <= fVar12) {
          fVar12 = 0.99999994;
        }
        uVar7 = ~uVar7;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
      }
      else {
        uVar7 = -uVar7;
        fVar12 = 0.0;
      }
    }
    if ((int)uVar7 <= (int)(double)CONCAT44(uVar33,uVar32)) {
      if (uVar7 != (int)(double)CONCAT44(uVar33,uVar32)) goto LAB_1432de9d9;
      fVar13 = (float)(dVar3 - auVar14._0_8_);
      if (0.99999994 <= fVar13) {
        fVar13 = 0.99999994;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar13 = fVar13 + 0.5 + -0.5;
      if (0.99999994 <= fVar13) {
        fVar13 = 0.99999994;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (fVar12 <= fVar13) goto LAB_1432de9d9;
    }
    local_f8 = 0;
    local_c8 = 0x1000000;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    uStack_d3 = 0;
    uStack_d0 = 0;
    local_100 = iVar10;
    local_fc = fVar19;
    FUN_1405244c0(param_1);
    goto LAB_1432de9d9;
  }
  if (!bVar2 || !bVar11) {
    uVar7 = *(uint *)((longlong)param_1 + 0x294);
    *(uint *)((longlong)param_1 + 0x294) = uVar7 | 4;
    cVar6 = (char)param_1[0x52];
    if (cVar6 == '\0') {
      FUN_1432db04a(param_1 + 0x61,&local_1a8,*(undefined8 *)((longlong)param_1 + 0x38c));
      local_1a0 = param_1[0x61];
      local_1a8 = *(undefined8 *)((longlong)param_1 + 0x31c);
      FUN_1405246a4(param_1[0x7a],&local_1a8);
    }
    else if (cVar6 == '\x02') {
      local_180 = *(undefined8 *)((longlong)param_1 + 0x38c);
      local_178 = 0;
      local_148 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      uStack_153 = 0;
      uStack_150 = 0;
      local_147 = 2;
      local_145 = 1;
LAB_1432de92e:
      FUN_1405244c0(param_1);
    }
    else if (cVar6 == '\x01') {
      if (cVar5 != cVar1) {
        auVar31._0_4_ = fVar13 + *(float *)(param_1 + 0x72);
        auVar31._4_12_ = auVar30._4_12_;
        auVar14 = roundss(ZEXT416(0),auVar31,9);
        local_13c = (auVar31._0_4_ - auVar14._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= local_13c) {
          local_13c = 0.99999994;
        }
        local_140 = (int)dVar15 + *(int *)((longlong)param_1 + 0x38c) +
                    ((int)ROUND(auVar31._0_4_ + auVar31._0_4_ + -0.5) >> 1);
        if (local_13c <= 0.0) {
          local_13c = 0.0;
        }
        local_138 = 0;
        local_108 = 0x1000000;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        uStack_113 = 0;
        uStack_110 = 0;
        goto LAB_1432de92e;
      }
      *(uint *)((longlong)param_1 + 0x294) = uVar7 | 0x14;
    }
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) & 0xfb;
  }
  if (cVar5 != cVar1) {
    if (*(int *)((longlong)param_1 + 900) < 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      FUN_14571f40c(param_1 + 0x6f);
    }
    else {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    cVar5 = *(char *)((longlong)param_1 + 0x394);
    if (cVar5 == '\x01') {
      FUN_140ef5ee2(param_1);
    }
    else if (cVar5 == '\x05') {
      FUN_140b8aeaa(param_1);
    }
    else if (cVar5 == '\x02') {
      FUN_1475773f8(param_1);
    }
  }
LAB_1432de9d9:
  if ((local_c0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432dea81 FUN_1432dea81 body=69 status=ok
// SIG undefined FUN_1432dea81(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432dea81(void)

{
  _DAT_14cab3b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432deac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3b38,1);
  return;
}



// FUNCTION 1432deac6 FUN_1432deac6 body=441 status=ok
// SIG undefined FUN_1432deac6(void)

void FUN_1432deac6(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x48);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      (**(code **)(*param_2 + 0x88))
                (param_2,(longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x38),0,0);
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x48);
      }
      iVar3 = *(int *)(param_1 + 0x60);
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_1432debf6;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1432debf6:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}


