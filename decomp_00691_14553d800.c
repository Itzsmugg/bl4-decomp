// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14553d800 FUN_14553d800 body=62 status=ok
// SIG undefined FUN_14553d800(void)

undefined8 * FUN_14553d800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da90b0;
  FUN_1455e5440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14553d840 FUN_14553d840 body=86 status=ok
// SIG undefined FUN_14553d840(void)

undefined8 * FUN_14553d840(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_149da9148;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553d8d0 FUN_14553d8d0 body=41 status=ok
// SIG undefined FUN_14553d8d0(void)

undefined8 FUN_14553d8d0(longlong param_1)

{
  FUN_1450768d0(DAT_14c790ff8,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),0,0);
  return 1;
}



// FUNCTION 14553d900 FUN_14553d900 body=120 status=ok
// SIG undefined FUN_14553d900(void)

undefined8 * FUN_14553d900(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9148;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14553d980 FUN_14553d980 body=86 status=ok
// SIG undefined FUN_14553d980(void)

undefined8 * FUN_14553d980(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_149da9198;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553da10 FUN_14553da10 body=122 status=ok
// SIG undefined FUN_14553da10(void)

undefined8 FUN_14553da10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uStackX_c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_38 = *(undefined8 *)(param_2 + 0x40);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_10 = 0;
  uStackX_c = CONCAT31(uStackX_c._1_3_,2);
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_c,*(int *)(param_1 + 0x38)),&local_38,
                          *(undefined4 *)(param_1 + 0x3c),0,1,0);
    return uVar1;
  }
  return 0x39;
}



// FUNCTION 14553da90 FUN_14553da90 body=120 status=ok
// SIG undefined FUN_14553da90(void)

undefined8 * FUN_14553da90(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9198;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14553db10 FUN_14553db10 body=97 status=ok
// SIG undefined FUN_14553db10(void)

undefined8 * FUN_14553db10(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x60);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455e5410(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x54) = 2;
    *puVar1 = &PTR_FUN_149da91e8;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553db80 FUN_14553db80 body=270 status=ok
// SIG undefined FUN_14553db80(void)

void FUN_14553db80(longlong param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined4 local_res8;
  uint local_resc;
  undefined4 uStackX_1c;
  undefined4 *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  local_res8 = FUN_145369980();
  fVar3 = 0.0;
  fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c);
  local_48 = &local_res8;
  local_40 = *(undefined1 *)(param_1 + 0x58);
  local_3f = 1;
  if (fVar2 != 0.0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    fVar3 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 * fVar2;
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_resc = bVar1 & 0x1f;
  FUN_14507f370(g_pGameSyncMgr,
                CONCAT44(uStackX_1c,*(undefined4 *)(param_1 + 0x30)) & 0xffffff00ffffffff,&local_38,
                fVar3 + *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x48),&local_48,
                *(undefined4 *)(param_1 + 0x54),0);
  return;
}



// FUNCTION 14553dc90 FUN_14553dc90 body=282 status=ok
// SIG undefined FUN_14553dc90(void)

void FUN_14553dc90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined4 local_res8;
  uint local_resc;
  undefined4 uStackX_1c;
  undefined4 *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  local_res8 = FUN_145369980();
  fVar3 = 0.0;
  fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c);
  local_48 = &local_res8;
  local_40 = *(undefined1 *)(param_1 + 0x58);
  local_3f = 1;
  if (fVar2 != 0.0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    fVar3 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 * fVar2;
  }
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_resc = bVar1 & 0x1f;
  local_38 = param_3;
  FUN_14507f370(g_pGameSyncMgr,
                CONCAT44(uStackX_1c,*(undefined4 *)(param_1 + 0x30)) & 0xffffff00ffffffff,&local_38,
                fVar3 + *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x48),&local_48,
                *(undefined4 *)(param_1 + 0x54),0);
  return;
}



// FUNCTION 14553ddb0 FUN_14553ddb0 body=162 status=ok
// SIG undefined FUN_14553ddb0(void)

void FUN_14553ddb0(longlong param_1)

{
  byte bVar1;
  undefined4 local_res8;
  uint local_resc;
  undefined4 uStackX_1c;
  undefined4 *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  local_res8 = FUN_145369980();
  local_48 = &local_res8;
  local_40 = *(undefined1 *)(param_1 + 0x58);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_3f = 1;
  local_20 = 0xff;
  local_18 = 0xff;
  local_resc = bVar1 & 0x1f;
  FUN_14507f940(g_pGameSyncMgr,
                CONCAT44(uStackX_1c,*(undefined4 *)(param_1 + 0x30)) & 0xffffff00ffffffff,&local_38,
                &local_48,1);
  return;
}



// FUNCTION 14553de60 FUN_14553de60 body=174 status=ok
// SIG undefined FUN_14553de60(void)

void FUN_14553de60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 local_res8;
  uint local_resc;
  undefined4 uStackX_1c;
  undefined4 *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  local_res8 = FUN_145369980();
  local_48 = &local_res8;
  local_40 = *(undefined1 *)(param_1 + 0x58);
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_3f = 1;
  local_20 = 0xff;
  local_18 = 0xff;
  local_resc = bVar1 & 0x1f;
  local_38 = param_3;
  FUN_14507f940(g_pGameSyncMgr,
                CONCAT44(uStackX_1c,*(undefined4 *)(param_1 + 0x30)) & 0xffffff00ffffffff,&local_38,
                &local_48,1);
  return;
}



// FUNCTION 14553df80 FUN_14553df80 body=62 status=ok
// SIG undefined FUN_14553df80(void)

undefined8 * FUN_14553df80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da91e8;
  FUN_1455e5440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14553dfc0 FUN_14553dfc0 body=78 status=ok
// SIG undefined FUN_14553dfc0(void)

undefined8 * FUN_14553dfc0(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da9280;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553e010 FUN_14553e010 body=88 status=ok
// SIG undefined FUN_14553e010(void)

undefined8 FUN_14553e010(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_145369e40();
  if (lVar3 != 0) {
    FUN_145354900(lVar3 + 0x28,*(short *)(param_1 + 0x34) == 0x1002);
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  return 1;
}



// FUNCTION 14553e070 FUN_14553e070 body=120 status=ok
// SIG undefined FUN_14553e070(void)

undefined8 * FUN_14553e070(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9280;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14553e0f0 FUN_14553e0f0 body=89 status=ok
// SIG undefined FUN_14553e0f0(void)

undefined8 * FUN_14553e0f0(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_145542d40(puVar1,param_1);
    *(undefined1 *)(puVar1 + 9) = 0;
    *puVar1 = &PTR_FUN_149da92d0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0xffffffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553e180 FUN_14553e180 body=951 status=ok
// SIG undefined FUN_14553e180(void)

undefined4 FUN_14553e180(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  bool bVar13;
  
  lVar6 = *(longlong *)(param_2 + 0x40);
  uVar4 = *(ushort *)(param_1 + 0x34);
  if (uVar4 < 0x1b04) {
    if (uVar4 != 0x1b03) {
      if ((uVar4 == 0x1a02) || (uVar4 == 0x1a03)) {
        lVar7 = FUN_145369e40();
        if (lVar7 == 0) {
          return 1;
        }
        if (*(char *)(param_1 + 0x48) == '\0') {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(param_1 + 0x4c);
        }
        FUN_1450d6920(lVar7,uVar12,*(undefined4 *)(param_1 + 0x4c),lVar6,0);
        LOCK();
        piVar1 = (int *)(lVar7 + 0x24);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return 1;
        }
        (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
        return 1;
      }
      if (uVar4 != 0x1b02) {
        return 1;
      }
    }
    lVar7 = FUN_145369e40();
    if (lVar7 != 0) {
      FUN_1450d6ae0(lVar7,*(undefined4 *)(param_1 + 0x4c),lVar6);
      LOCK();
      piVar1 = (int *)(lVar7 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
        return 1;
      }
    }
    return 1;
  }
  if (uVar4 == 0x1b04) {
    FUN_14553e540(param_1,g_pRegistryMgr);
    for (lVar6 = DAT_14c791400; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x10)) {
      FUN_14553e540(param_1,lVar6 + 0x20);
    }
    return 1;
  }
  if (uVar4 != 0x1b05) {
    return 1;
  }
  if (*(longlong *)(lVar6 + 0x28) == 0) {
    return 1;
  }
  plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x28) + 0x20);
  if (plVar9 == (longlong *)0x0) {
    return 1;
  }
  lVar7 = 0;
  do {
    piVar1 = DAT_14c791060;
    uVar5 = *(uint *)(plVar9 + 1);
    if (*(char *)((longlong)plVar9 + 0xc) == '\0') {
      do {
        while (iVar2 = *piVar1, iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_14553e2e3;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar3 = *piVar1;
        if (iVar2 == iVar3) {
          *piVar1 = iVar2 + 1;
        }
        UNLOCK();
      } while (iVar2 != iVar3);
LAB_14553e2e3:
      lVar10 = lVar7;
      if (piVar1[0x12] != 0) {
        for (lVar11 = *(longlong *)
                       (*(longlong *)(piVar1 + 0x10) +
                       ((ulonglong)uVar5 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (lVar10 = lVar7, lVar11 != 0 && (lVar10 = lVar11, *(uint *)(lVar11 + 0x10) != uVar5));
            lVar11 = *(longlong *)(lVar11 + 8)) {
        }
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar2 = *piVar1;
      while (-1 < iVar2) {
        LOCK();
        iVar3 = *piVar1;
        if (iVar2 == iVar3) {
          *piVar1 = iVar2 + -1;
        }
        UNLOCK();
        if (iVar2 == iVar3) {
          if ((iVar2 + -1 != 0) || (piVar1[0xc] < 1)) goto LAB_14553e35a;
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
          lVar11 = lVar10 + -0x10;
          if (lVar10 == 0) {
            lVar11 = lVar7;
          }
          goto LAB_14553e438;
        }
        iVar2 = *piVar1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_14553e35a:
      lVar11 = lVar10 + -0x10;
      if (lVar10 == 0) {
        lVar11 = lVar7;
      }
LAB_14553e438:
      if (lVar11 != 0) {
        piVar1 = *(int **)(param_1 + 0x38);
        if (piVar1 != piVar1 + (ulonglong)*(uint *)(param_1 + 0x40) * 2) {
          piVar8 = piVar1;
          do {
            if ((*(int *)(lVar11 + 0x20) == *piVar8) &&
               (*(byte *)(lVar11 + 0xd4) >> 7 == *(byte *)(piVar8 + 1))) goto LAB_14553e488;
            piVar8 = piVar8 + 2;
          } while (piVar8 != piVar1 + (ulonglong)*(uint *)(param_1 + 0x40) * 2);
        }
        FUN_1450d6ae0(lVar11,*(undefined4 *)(param_1 + 0x4c),lVar6);
LAB_14553e488:
        LOCK();
        piVar1 = (int *)(lVar11 + 0x24);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)(lVar11 + 0x10) + 0x18))();
        }
      }
    }
    else {
      do {
        while (iVar2 = piVar1[0x16], iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
          if (piVar1[0x16] < 0) goto LAB_14553e3a1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
        }
        LOCK();
        bVar13 = iVar2 == piVar1[0x16];
        if (bVar13) {
          piVar1[0x16] = iVar2 + 1;
        }
        UNLOCK();
      } while (!bVar13);
LAB_14553e3a1:
      lVar11 = lVar7;
      if (piVar1[0x28] != 0) {
        for (lVar10 = *(longlong *)
                       (*(longlong *)(piVar1 + 0x26) +
                       ((ulonglong)uVar5 % (ulonglong)(uint)piVar1[0x28]) * 8);
            (lVar11 = lVar7, lVar10 != 0 && (lVar11 = lVar10, *(uint *)(lVar10 + 0x10) != uVar5));
            lVar10 = *(longlong *)(lVar10 + 8)) {
        }
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar2 = piVar1[0x16];
      while (-1 < iVar2) {
        LOCK();
        bVar13 = iVar2 == piVar1[0x16];
        if (bVar13) {
          piVar1[0x16] = iVar2 + -1;
        }
        UNLOCK();
        if (bVar13) {
          if ((iVar2 + -1 == 0) && (0 < piVar1[0x22])) {
            SetEvent(*(HANDLE *)(piVar1 + 0x24));
          }
          goto LAB_14553e42f;
        }
        iVar2 = piVar1[0x16];
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
LAB_14553e42f:
      if (lVar11 != 0) {
        lVar11 = lVar11 + -0x10;
        goto LAB_14553e438;
      }
    }
    plVar9 = (longlong *)*plVar9;
    if (plVar9 == (longlong *)0x0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 14553e540 FUN_14553e540 body=628 status=ok
// SIG undefined FUN_14553e540(void)

void FUN_14553e540(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((param_2 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0))
  {
    lVar8 = 0;
    do {
      piVar4 = DAT_14c791060;
      uVar2 = *(uint *)(param_2 + 1);
      if (*(char *)((longlong)param_2 + 0xc) == '\0') {
        do {
          while (iVar3 = *piVar4, iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
            if (*piVar4 < 0) goto LAB_14553e5a3;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
          }
          LOCK();
          iVar1 = *piVar4;
          if (iVar3 == iVar1) {
            *piVar4 = iVar3 + 1;
          }
          UNLOCK();
        } while (iVar3 != iVar1);
LAB_14553e5a3:
        lVar6 = lVar8;
        if (piVar4[0x12] != 0) {
          for (lVar7 = *(longlong *)
                        (*(longlong *)(piVar4 + 0x10) +
                        ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x12]) * 8);
              (lVar6 = lVar8, lVar7 != 0 && (lVar6 = lVar7, *(uint *)(lVar7 + 0x10) != uVar2));
              lVar7 = *(longlong *)(lVar7 + 8)) {
          }
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = *piVar4;
        while (-1 < iVar3) {
          LOCK();
          iVar1 = *piVar4;
          if (iVar3 == iVar1) {
            *piVar4 = iVar3 + -1;
          }
          UNLOCK();
          if (iVar3 == iVar1) {
            if ((iVar3 + -1 != 0) || (piVar4[0xc] < 1)) goto LAB_14553e61a;
            SetEvent(*(HANDLE *)(piVar4 + 0xe));
            lVar7 = lVar6 + -0x10;
            if (lVar6 == 0) {
              lVar7 = lVar8;
            }
            goto LAB_14553e6f8;
          }
          iVar3 = *piVar4;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
LAB_14553e61a:
        lVar7 = lVar6 + -0x10;
        if (lVar6 == 0) {
          lVar7 = lVar8;
        }
LAB_14553e6f8:
        if (lVar7 != 0) {
          piVar4 = *(int **)(param_1 + 0x38);
          if (piVar4 != piVar4 + (ulonglong)*(uint *)(param_1 + 0x40) * 2) {
            piVar5 = piVar4;
            do {
              if ((*(int *)(lVar7 + 0x20) == *piVar5) &&
                 (*(byte *)(lVar7 + 0xd4) >> 7 == *(byte *)(piVar5 + 1))) goto LAB_14553e748;
              piVar5 = piVar5 + 2;
            } while (piVar5 != piVar4 + (ulonglong)*(uint *)(param_1 + 0x40) * 2);
          }
          FUN_1450d6ae0(lVar7,*(undefined4 *)(param_1 + 0x4c),0);
LAB_14553e748:
          LOCK();
          piVar4 = (int *)(lVar7 + 0x24);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
          }
        }
      }
      else {
        do {
          while (iVar3 = piVar4[0x16], iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
            if (piVar4[0x16] < 0) goto LAB_14553e661;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
          }
          LOCK();
          bVar9 = iVar3 == piVar4[0x16];
          if (bVar9) {
            piVar4[0x16] = iVar3 + 1;
          }
          UNLOCK();
        } while (!bVar9);
LAB_14553e661:
        lVar7 = lVar8;
        if (piVar4[0x28] != 0) {
          for (lVar6 = *(longlong *)
                        (*(longlong *)(piVar4 + 0x26) +
                        ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x28]) * 8);
              (lVar7 = lVar8, lVar6 != 0 && (lVar7 = lVar6, *(uint *)(lVar6 + 0x10) != uVar2));
              lVar6 = *(longlong *)(lVar6 + 8)) {
          }
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = piVar4[0x16];
        while (-1 < iVar3) {
          LOCK();
          bVar9 = iVar3 == piVar4[0x16];
          if (bVar9) {
            piVar4[0x16] = iVar3 + -1;
          }
          UNLOCK();
          if (bVar9) {
            if ((iVar3 + -1 == 0) && (0 < piVar4[0x22])) {
              SetEvent(*(HANDLE *)(piVar4 + 0x24));
            }
            goto LAB_14553e6ef;
          }
          iVar3 = piVar4[0x16];
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
LAB_14553e6ef:
        if (lVar7 != 0) {
          lVar7 = lVar7 + -0x10;
          goto LAB_14553e6f8;
        }
      }
      param_2 = (longlong *)*param_2;
    } while (param_2 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14553e7c0 FUN_14553e7c0 body=62 status=ok
// SIG undefined FUN_14553e7c0(void)

undefined8 * FUN_14553e7c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da92d0;
  FUN_145542d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14553e800 FUN_14553e800 body=78 status=ok
// SIG undefined FUN_14553e800(void)

undefined8 * FUN_14553e800(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da9338;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553e850 FUN_14553e850 body=33 status=ok
// SIG undefined FUN_14553e850(void)

undefined8 FUN_14553e850(longlong param_1,longlong param_2)

{
  FUN_145076870(DAT_14c790ff8,*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x40));
  return 1;
}



// FUNCTION 14553e880 FUN_14553e880 body=120 status=ok
// SIG undefined FUN_14553e880(void)

undefined8 * FUN_14553e880(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9338;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14553e900 FUN_14553e900 body=91 status=ok
// SIG undefined FUN_14553e900(void)

undefined8 * FUN_14553e900(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_145542d40(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da9388;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553e960 FUN_14553e960 body=462 status=ok
// SIG undefined FUN_14553e960(void)

undefined8 FUN_14553e960(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  float fVar8;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined2 local_29;
  undefined8 local_20;
  longlong local_18;
  int local_10;
  byte local_c;
  
  sVar3 = *(short *)(param_1 + 0x34);
  local_40 = *(undefined8 *)(param_2 + 0x40);
  if ((sVar3 != 0x1e02) && (sVar3 != 0x1e03)) {
    if ((sVar3 == 0x1e04) || (sVar3 == 0x1e05)) {
      local_30 = *(byte *)(param_1 + 0x36) & 0x1f;
      local_20 = 0;
      local_38 = *(undefined4 *)(param_2 + 0x38);
      bVar7 = *(byte *)(param_1 + 0x54) & 1;
      local_2a = 0;
      local_c = bVar7 | local_c & 0xfe;
      local_34 = 0;
      local_2c = 0;
      local_29 = 0;
      if (bVar7 == 0) {
        fVar8 = (float)FUN_14553ebd0(param_1 + 0x48);
        local_10 = (int)fVar8;
      }
      else {
        local_10 = FUN_14553ebd0(param_1 + 0x48);
      }
      local_48[0] = 4;
      local_c = (*(byte *)(param_1 + 0x55) & 1) * '\x02' | local_c & 0xfd;
      local_18 = param_1 + 0x38;
      FUN_14508d3c0(local_48);
    }
    return 1;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  plVar5 = (longlong *)FUN_145369e40();
  if (plVar5 == (longlong *)0x0) {
    uVar6 = 0xf;
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x54) & 1;
    local_20 = 0;
    local_c = bVar7 | local_c & 0xfe;
    local_18 = 0;
    local_2c = 0;
    local_2a = 0;
    local_34 = 0;
    local_29 = 0;
    local_30 = 4;
    local_38 = uVar4;
    if (bVar7 == 0) {
      fVar8 = (float)FUN_14553ebd0(param_1 + 0x48);
      local_10 = (int)fVar8;
    }
    else {
      local_10 = FUN_14553ebd0(param_1 + 0x48);
    }
    local_48[0] = 4;
    local_c = (*(byte *)(param_1 + 0x55) & 1) * '\x02' | local_c & 0xfd;
    (**(code **)(*plVar5 + 0x80))(plVar5,local_48);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(plVar5[2] + 0x18))();
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14553eb90 FUN_14553eb90 body=62 status=ok
// SIG undefined FUN_14553eb90(void)

undefined8 * FUN_14553eb90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da9388;
  FUN_145542d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14553ebd0 FUN_14553ebd0 body=90 status=ok
// SIG undefined FUN_14553ebd0(void)

float FUN_14553ebd0(float *param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (param_1[2] - param_1[1] != 0.0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    fVar1 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 *
            (param_1[2] - param_1[1]);
  }
  return fVar1 + param_1[1] + *param_1;
}



// FUNCTION 14553ec40 FUN_14553ec40 body=78 status=ok
// SIG undefined FUN_14553ec40(void)

undefined8 * FUN_14553ec40(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455431a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da93f0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553ec90 FUN_14553ec90 body=161 status=ok
// SIG undefined FUN_14553ec90(void)

ulonglong FUN_14553ec90(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  if ((*(short *)(param_1 + 0x34) != 0x1f02) && (*(short *)(param_1 + 0x34) != 0x1f03)) {
    return 2;
  }
  lVar4 = FUN_145369e40();
  if (lVar4 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = FUN_1455431e0(param_1,5,uVar3,*(undefined4 *)(param_2 + 0x38));
    LOCK();
    piVar1 = (int *)(lVar4 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  return uVar5;
}



// FUNCTION 14553ed50 FUN_14553ed50 body=62 status=ok
// SIG undefined FUN_14553ed50(void)

undefined8 * FUN_14553ed50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da93f0;
  FUN_1455431d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14553ed90 FUN_14553ed90 body=78 status=ok
// SIG undefined FUN_14553ed90(void)

undefined8 * FUN_14553ed90(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da9460;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553ede0 FUN_14553ede0 body=380 status=ok
// SIG undefined FUN_14553ede0(void)

undefined8 FUN_14553ede0(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14c791060;
  uVar2 = *(uint *)(param_1 + 0x30);
  do {
    while (iVar3 = *(int *)(lVar4 + 0x108), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      if (*(int *)(lVar4 + 0x108) < 0) goto LAB_14553ee27;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
    }
    LOCK();
    bVar8 = iVar3 == *(int *)(lVar4 + 0x108);
    if (bVar8) {
      *(int *)(lVar4 + 0x108) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar8);
LAB_14553ee27:
  if (*(uint *)(lVar4 + 0x150) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar4 + 0x148) +
                   ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8);
        plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == uVar2) goto LAB_14553ee57;
    }
    plVar7 = (longlong *)0x0;
LAB_14553ee57:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(lVar4 + 0x108);
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_14553eec4:
      if (plVar7 == (longlong *)0x0) {
        uVar6 = 0xf;
      }
      else {
        uVar6 = *(undefined8 *)(param_2 + 0x40);
        uVar5 = FUN_1450808a0(param_2);
        FUN_145087840(plVar7,uVar6,uVar5,*(undefined4 *)(param_2 + 0x30),0,param_2 + 0x1c,0,0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        uVar6 = 1;
      }
      return uVar6;
    }
    LOCK();
    bVar8 = iVar3 == *(int *)(lVar4 + 0x108);
    if (bVar8) {
      *(int *)(lVar4 + 0x108) = iVar3 + -1;
    }
    UNLOCK();
    if (bVar8) {
      if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x140));
      }
      goto LAB_14553eec4;
    }
    iVar3 = *(int *)(lVar4 + 0x108);
  } while( true );
}



// FUNCTION 14553ef70 FUN_14553ef70 body=120 status=ok
// SIG undefined FUN_14553ef70(void)

undefined8 * FUN_14553ef70(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9460;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14553eff0 FUN_14553eff0 body=78 status=ok
// SIG undefined FUN_14553eff0(void)

undefined8 * FUN_14553eff0(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455431a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da94b0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553f040 FUN_14553f040 body=117 status=ok
// SIG undefined FUN_14553f040(void)

undefined8 FUN_14553f040(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(short *)(param_1 + 0x34) != 0x2202) {
    if (*(short *)(param_1 + 0x34) != 0x2203) {
      return 1;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x40);
  }
  plVar3 = (longlong *)FUN_145369e40();
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
    if (iVar2 == 2) {
      FUN_1450c4390(plVar3,uVar4);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(plVar3[2] + 0x18))();
    }
  }
  return 1;
}



// FUNCTION 14553f0d0 FUN_14553f0d0 body=62 status=ok
// SIG undefined FUN_14553f0d0(void)

undefined8 * FUN_14553f0d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da94b0;
  FUN_1455431d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14553f110 FUN_14553f110 body=92 status=ok
// SIG undefined FUN_14553f110(void)

undefined8 * FUN_14553f110(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_145542d40(puVar1,param_1);
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_149da9520;
    *(undefined2 *)(puVar1 + 10) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553f170 FUN_14553f170 body=377 status=ok
// SIG undefined FUN_14553f170(void)

undefined4 FUN_14553f170(longlong param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res8;
  
  sVar3 = *(short *)(param_1 + 0x34);
  local_res8 = param_1;
  if (sVar3 == 0x3102) {
    plVar4 = (longlong *)FUN_14553f8e0(&local_res8);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = FUN_145369e40(param_1);
      if (lVar5 == 0) {
        return 1;
      }
      FUN_1450d6be0(lVar5,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                    *(undefined1 *)(param_1 + 0x50),0,0);
      goto LAB_14553f2bf;
    }
    FUN_14536b290(plVar4,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                  *(undefined1 *)(param_1 + 0x50));
  }
  else {
    if (sVar3 != 0x3202) {
      if (sVar3 != 0x3204) {
        return 1;
      }
      FUN_14553f5c0(param_1);
      if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
        FUN_14553f350(param_1);
      }
      lVar5 = DAT_14c791400;
      if (DAT_14c791400 == 0) {
        return 1;
      }
      do {
        if (lVar5 != -0x20) {
          FUN_14553f350(param_1);
        }
        lVar5 = *(longlong *)(lVar5 + 0x10);
      } while (lVar5 != 0);
      return 1;
    }
    plVar4 = (longlong *)FUN_14553f8e0(&local_res8);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = FUN_145369e40(param_1);
      if (lVar5 == 0) {
        return 1;
      }
      FUN_1450d6b10(lVar5,*(undefined4 *)(param_1 + 0x48),0);
LAB_14553f2bf:
      LOCK();
      piVar1 = (int *)(lVar5 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return 1;
      }
      (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))(lVar5 + 0x10);
      return 1;
    }
    FUN_14536b1b0(plVar4,*(undefined4 *)(param_1 + 0x48));
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return 1;
  }
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return 1;
}



// FUNCTION 14553f350 FUN_14553f350 body=608 status=ok
// SIG undefined FUN_14553f350(void)

void FUN_14553f350(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar8 = 0;
    do {
      piVar4 = DAT_14c791060;
      uVar2 = *(uint *)(param_2 + 1);
      if (*(char *)((longlong)param_2 + 0xc) == '\0') {
        do {
          while (iVar3 = *piVar4, iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
            if (*piVar4 < 0) goto LAB_14553f3a3;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
          }
          LOCK();
          iVar1 = *piVar4;
          if (iVar3 == iVar1) {
            *piVar4 = iVar3 + 1;
          }
          UNLOCK();
        } while (iVar3 != iVar1);
LAB_14553f3a3:
        lVar6 = lVar8;
        if (piVar4[0x12] != 0) {
          for (lVar7 = *(longlong *)
                        (*(longlong *)(piVar4 + 0x10) +
                        ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x12]) * 8);
              (lVar6 = lVar8, lVar7 != 0 && (lVar6 = lVar7, *(uint *)(lVar7 + 0x10) != uVar2));
              lVar7 = *(longlong *)(lVar7 + 8)) {
          }
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = *piVar4;
        while (-1 < iVar3) {
          LOCK();
          iVar1 = *piVar4;
          if (iVar3 == iVar1) {
            *piVar4 = iVar3 + -1;
          }
          UNLOCK();
          if (iVar3 == iVar1) {
            if ((iVar3 + -1 != 0) || (piVar4[0xc] < 1)) goto LAB_14553f41a;
            SetEvent(*(HANDLE *)(piVar4 + 0xe));
            lVar7 = lVar6 + -0x10;
            if (lVar6 == 0) {
              lVar7 = lVar8;
            }
            goto LAB_14553f4f8;
          }
          iVar3 = *piVar4;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
LAB_14553f41a:
        lVar7 = lVar6 + -0x10;
        if (lVar6 == 0) {
          lVar7 = lVar8;
        }
LAB_14553f4f8:
        if (lVar7 != 0) {
          piVar4 = *(int **)(param_1 + 0x38);
          if (piVar4 != piVar4 + (ulonglong)*(uint *)(param_1 + 0x40) * 2) {
            piVar5 = piVar4;
            do {
              if ((*(int *)(lVar7 + 0x20) == *piVar5) &&
                 (*(byte *)(lVar7 + 0xd4) >> 7 == *(byte *)(piVar5 + 1))) goto LAB_14553f548;
              piVar5 = piVar5 + 2;
            } while (piVar5 != piVar4 + (ulonglong)*(uint *)(param_1 + 0x40) * 2);
          }
          FUN_1450d6b10(lVar7,*(undefined4 *)(param_1 + 0x48),0);
LAB_14553f548:
          LOCK();
          piVar4 = (int *)(lVar7 + 0x24);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
          }
        }
      }
      else {
        do {
          while (iVar3 = piVar4[0x16], iVar3 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
            if (piVar4[0x16] < 0) goto LAB_14553f461;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
          }
          LOCK();
          bVar9 = iVar3 == piVar4[0x16];
          if (bVar9) {
            piVar4[0x16] = iVar3 + 1;
          }
          UNLOCK();
        } while (!bVar9);
LAB_14553f461:
        lVar7 = lVar8;
        if (piVar4[0x28] != 0) {
          for (lVar6 = *(longlong *)
                        (*(longlong *)(piVar4 + 0x26) +
                        ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x28]) * 8);
              (lVar7 = lVar8, lVar6 != 0 && (lVar7 = lVar6, *(uint *)(lVar6 + 0x10) != uVar2));
              lVar6 = *(longlong *)(lVar6 + 8)) {
          }
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar3 = piVar4[0x16];
        while (-1 < iVar3) {
          LOCK();
          bVar9 = iVar3 == piVar4[0x16];
          if (bVar9) {
            piVar4[0x16] = iVar3 + -1;
          }
          UNLOCK();
          if (bVar9) {
            if ((iVar3 + -1 == 0) && (0 < piVar4[0x22])) {
              SetEvent(*(HANDLE *)(piVar4 + 0x24));
            }
            goto LAB_14553f4ef;
          }
          iVar3 = piVar4[0x16];
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 0x18));
LAB_14553f4ef:
        if (lVar7 != 0) {
          lVar7 = lVar7 + -0x10;
          goto LAB_14553f4f8;
        }
      }
      param_2 = (longlong *)*param_2;
    } while (param_2 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14553f5c0 FUN_14553f5c0 body=721 status=ok
// SIG undefined FUN_14553f5c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14553f5c0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  HANDLE pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_38 [32];
  
  lVar6 = DAT_14c791060;
  puVar11 = auStack_38;
  puVar15 = (uint *)0x0;
  do {
    while (iVar3 = *(int *)(lVar6 + 0x420), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
      if (*(int *)(lVar6 + 0x420) < 0) goto LAB_14553f607;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
    }
    LOCK();
    bVar16 = iVar3 == *(int *)(lVar6 + 0x420);
    if (bVar16) {
      *(int *)(lVar6 + 0x420) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar16);
LAB_14553f607:
  uVar8 = *(uint *)(lVar6 + 0x470);
  uVar10 = 0;
  if (uVar8 != 0) {
    uVar14 = 0;
    uVar9 = (ulonglong)uVar8 * 4 + 0xf;
    if (uVar9 <= (ulonglong)uVar8 * 4) {
      uVar9 = 0xffffffffffffff0;
    }
    puVar11 = auStack_38 + -(uVar9 & 0xfffffffffffffff0);
    puVar15 = (uint *)(&stack0xffffffffffffffe8 + -(uVar9 & 0xfffffffffffffff0));
    if (*(uint *)(lVar6 + 0x468) != 0) {
      uVar9 = 0;
      lVar13 = **(longlong **)(lVar6 + 0x460);
      while (lVar13 == 0) {
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
        uVar7 = 0;
        if (*(uint *)(lVar6 + 0x468) <= uVar10) goto joined_r0x00014553f6a7;
        lVar13 = (*(longlong **)(lVar6 + 0x460))[uVar9];
      }
      do {
        while( true ) {
          if (uVar8 <= (uint)uVar14) goto LAB_14553f6ef;
          puVar15[uVar14] = *(uint *)(lVar13 + 0x10);
          uVar14 = (ulonglong)((uint)uVar14 + 1);
          lVar13 = *(longlong *)(lVar13 + 8);
          uVar7 = uVar14;
          if (lVar13 != 0) break;
          do {
            uVar10 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar10;
            if (*(uint *)(lVar6 + 0x468) <= uVar10) goto joined_r0x00014553f6a7;
            lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x460) + uVar9 * 8);
          } while (lVar13 == 0);
        }
joined_r0x00014553f6a7:
        uVar14 = uVar7;
      } while (lVar13 != 0);
    }
LAB_14553f6ef:
    uVar10 = (uint)uVar14;
  }
  uVar8 = *(uint *)(lVar6 + 0x420);
  do {
    if ((int)uVar8 < 0) {
      *(undefined8 *)(puVar11 + -8) = 0x14553f728;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
      uVar9 = extraout_RAX;
LAB_14553f728:
      if ((puVar15 != (uint *)0x0) && (uVar10 != 0)) {
        uVar14 = (ulonglong)uVar10;
        do {
          uVar8 = *puVar15;
          do {
            while (iVar3 = *(int *)(lVar6 + 0x420), iVar3 < 0) {
              *(undefined8 *)(puVar11 + -8) = 0x14553f7cc;
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
              if (*(int *)(lVar6 + 0x420) < 0) goto LAB_14553f75a;
              *(undefined8 *)(puVar11 + -8) = 0x14553f7e3;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
            }
            LOCK();
            bVar16 = iVar3 == *(int *)(lVar6 + 0x420);
            if (bVar16) {
              *(int *)(lVar6 + 0x420) = iVar3 + 1;
            }
            UNLOCK();
          } while (!bVar16);
LAB_14553f75a:
          if (*(uint *)(lVar6 + 0x468) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            for (plVar12 = *(longlong **)
                            (*(longlong *)(lVar6 + 0x460) +
                            ((ulonglong)uVar8 % (ulonglong)*(uint *)(lVar6 + 0x468)) * 8);
                plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[1]) {
              if (*(uint *)(plVar12 + 2) == uVar8) goto LAB_14553f790;
            }
            plVar12 = (longlong *)0x0;
LAB_14553f790:
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar12 + 0x14) = *(int *)((longlong)plVar12 + 0x14) + 1;
              UNLOCK();
            }
          }
          uVar8 = *(uint *)(lVar6 + 0x420);
          while (-1 < (int)uVar8) {
            LOCK();
            uVar10 = *(uint *)(lVar6 + 0x420);
            bVar16 = uVar8 == uVar10;
            if (bVar16) {
              *(uint *)(lVar6 + 0x420) = uVar8 - 1;
              uVar10 = uVar8;
            }
            uVar9 = (ulonglong)uVar10;
            UNLOCK();
            if (bVar16) {
              if ((uVar8 - 1 == 0) &&
                 (uVar9 = (ulonglong)*(uint *)(lVar6 + 0x450), 0 < (int)*(uint *)(lVar6 + 0x450))) {
                pvVar5 = *(HANDLE *)(lVar6 + 0x458);
                *(undefined8 *)(puVar11 + -8) = 0x14553f88f;
                uVar8 = SetEvent(pvVar5);
                uVar9 = (ulonglong)uVar8;
              }
              goto LAB_14553f824;
            }
            uVar8 = *(uint *)(lVar6 + 0x420);
          }
          *(undefined8 *)(puVar11 + -8) = 0x14553f824;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
          uVar9 = extraout_RAX_00;
LAB_14553f824:
          if (plVar12 != (longlong *)0x0) {
            *(undefined8 *)(puVar11 + -8) = 0x14553f835;
            FUN_14536b1b0(plVar12);
            LOCK();
            puVar1 = (uint *)((longlong)plVar12 + 0x14);
            uVar8 = *puVar1;
            uVar9 = (ulonglong)uVar8;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if (uVar8 == 1) {
              pcVar4 = *(code **)(*plVar12 + 0x18);
              *(undefined8 *)(puVar11 + -8) = 0x14553f84d;
              uVar9 = (*pcVar4)(plVar12);
            }
          }
          puVar15 = puVar15 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      return uVar9;
    }
    LOCK();
    uVar2 = *(uint *)(lVar6 + 0x420);
    bVar16 = uVar8 == uVar2;
    if (bVar16) {
      *(uint *)(lVar6 + 0x420) = uVar8 - 1;
      uVar2 = uVar8;
    }
    uVar9 = (ulonglong)uVar2;
    UNLOCK();
    if (bVar16) {
      if ((uVar8 - 1 == 0) &&
         (uVar9 = (ulonglong)*(uint *)(lVar6 + 0x450), 0 < (int)*(uint *)(lVar6 + 0x450))) {
        pvVar5 = *(HANDLE *)(lVar6 + 0x458);
        *(undefined8 *)(puVar11 + -8) = 0x14553f7ba;
        uVar8 = SetEvent(pvVar5);
        uVar9 = (ulonglong)uVar8;
      }
      goto LAB_14553f728;
    }
    uVar8 = *(uint *)(lVar6 + 0x420);
  } while( true );
}



// FUNCTION 14553f8a0 FUN_14553f8a0 body=62 status=ok
// SIG undefined FUN_14553f8a0(void)

undefined8 * FUN_14553f8a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da9520;
  FUN_145542d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14553f8e0 FUN_14553f8e0 body=292 status=ok
// SIG undefined FUN_14553f8e0(void)

longlong FUN_14553f8e0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = DAT_14c791060;
  if (*(char *)(*param_1 + 0x51) == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + 0x30);
  do {
    while (iVar2 = *(int *)(lVar3 + 0x420), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x428));
      if (*(int *)(lVar3 + 0x420) < 0) goto LAB_14553f91d;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x428));
    }
    LOCK();
    bVar5 = iVar2 == *(int *)(lVar3 + 0x420);
    if (bVar5) {
      *(int *)(lVar3 + 0x420) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar5);
LAB_14553f91d:
  if (*(uint *)(lVar3 + 0x468) == 0) {
    lVar4 = 0;
  }
  else {
    for (lVar4 = *(longlong *)
                  (*(longlong *)(lVar3 + 0x460) +
                  ((ulonglong)uVar1 % (ulonglong)*(uint *)(lVar3 + 0x468)) * 8); lVar4 != 0;
        lVar4 = *(longlong *)(lVar4 + 8)) {
      if (*(uint *)(lVar4 + 0x10) == uVar1) goto LAB_14553f950;
    }
    lVar4 = 0;
LAB_14553f950:
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x420);
  while( true ) {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x428));
      return lVar4;
    }
    LOCK();
    bVar5 = iVar2 == *(int *)(lVar3 + 0x420);
    if (bVar5) {
      *(int *)(lVar3 + 0x420) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = *(int *)(lVar3 + 0x420);
  }
  if (iVar2 + -1 != 0) {
    return lVar4;
  }
  if (*(int *)(lVar3 + 0x450) < 1) {
    return lVar4;
  }
  SetEvent(*(HANDLE *)(lVar3 + 0x458));
  return lVar4;
}



// FUNCTION 14553fa10 FUN_14553fa10 body=41 status=ok
// SIG undefined FUN_14553fa10(void)

undefined8 * FUN_14553fa10(undefined8 *param_1)

{
  FUN_145353c20();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149da9588;
  return param_1;
}



// FUNCTION 14553fa40 FUN_14553fa40 body=141 status=ok
// SIG undefined FUN_14553fa40(void)

void FUN_14553fa40(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_149da9588;
  if (param_1[2] != 0) {
    if (*(longlong *)(param_1[2] + 8) != 0) {
      FUN_145353c50();
      FUN_145354610(param_1,0);
    }
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x10));
        *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
      }
      AK::MemoryMgr::Free(2,pvVar1);
    }
    param_1[2] = 0;
  }
  FUN_145353c40(param_1);
  return;
}



// FUNCTION 14553fad0 FUN_14553fad0 body=172 status=ok
// SIG undefined FUN_14553fad0(void)

void FUN_14553fad0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  short *psVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  
  FUN_145353dc0();
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    psVar4 = *(short **)(lVar2 + 0x10);
    if (psVar4 != psVar4 + (ulonglong)*(uint *)(lVar2 + 0x18) * 2) {
      puVar5 = (undefined8 *)(param_1 + 0x50);
      if (param_1 == 0) {
        puVar5 = (undefined8 *)&DAT_00000068;
      }
      do {
        psVar3 = (short *)*puVar5;
        psVar1 = psVar3 + (ulonglong)*(uint *)(puVar5 + 1) * 4;
        if (psVar3 != psVar1) {
          do {
            if (*psVar3 == *psVar4) {
              *(char *)(psVar3 + 1) = (char)psVar4[1];
              break;
            }
            psVar3 = psVar3 + 4;
          } while (psVar3 != psVar1);
        }
        psVar4 = psVar4 + 2;
      } while (psVar4 != (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) * 4));
    }
    if (param_4 != '\0') {
      FUN_145354910(param_1);
    }
  }
  return;
}



// FUNCTION 14553fb80 FUN_14553fb80 body=83 status=ok
// SIG undefined FUN_14553fb80(void)

bool FUN_14553fb80(longlong param_1)

{
  void *pvVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pvVar1 = AK::MemoryMgr::Malloc(2,0x20);
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
      *(void **)(param_1 + 0x10) = pvVar1;
      return pvVar1 != (void *)0x0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    bVar2 = true;
  }
  return !bVar2;
}



// FUNCTION 14553fbe0 FUN_14553fbe0 body=133 status=ok
// SIG undefined FUN_14553fbe0(void)

void FUN_14553fbe0(longlong param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x90);
  if (param_1 == 0) {
    plVar2 = (longlong *)&DAT_000000a8;
  }
  for (lVar1 = *plVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x70)) {
    FUN_14536bc90(lVar1,2,param_4,param_2,param_3,param_6);
  }
  return;
}



// FUNCTION 14553fcb0 FUN_14553fcb0 body=176 status=ok
// SIG undefined FUN_14553fcb0(void)

undefined8 * FUN_14553fcb0(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_149da9588;
  if (param_1[2] != 0) {
    if (*(longlong *)(param_1[2] + 8) != 0) {
      FUN_145353c50();
      FUN_145354610(param_1,0);
    }
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x10));
        *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
      }
      AK::MemoryMgr::Free(2,pvVar1);
    }
    param_1[2] = 0;
  }
  FUN_145353c40(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14553fd60 FUN_14553fd60 body=182 status=ok
// SIG undefined FUN_14553fd60(void)

longlong * FUN_14553fd60(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  if (*param_2 == 0) {
    return param_1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18);
  if (lVar1 != 0) {
    FUN_14538ec90(lVar1);
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      FUN_14538eca0();
    }
    lVar1 = *param_1;
    lVar2 = FUN_1455407c0(param_3 + 0x108,lVar1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) == 0) {
        FUN_14538ec90(lVar1);
      }
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 14553fe20 FUN_14553fe20 body=110 status=ok
// SIG undefined FUN_14553fe20(void)

undefined8 * FUN_14553fe20(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)param_2[2];
  param_1[2] = plVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((DAT_14c790fd0 != 0) && (plVar1 != (longlong *)0x0)) && (*plVar1 != 0)) {
    iVar2 = FUN_1450b4240();
    if (iVar2 == 1) {
      param_1[7] = *(undefined8 *)param_1[2];
    }
  }
  return param_1;
}



// FUNCTION 14553fe90 FUN_14553fe90 body=67 status=ok
// SIG undefined FUN_14553fe90(void)

void FUN_14553fe90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1450b42a0(DAT_14c790fd0);
  }
  FUN_14538dec0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14538eca0();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14553fee0 FUN_14553fee0 body=205 status=ok
// SIG undefined FUN_14553fee0(void)

void FUN_14553fee0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *_Dst;
  longlong *plVar4;
  
  _Dst = (longlong *)FUN_145540720(param_1 + 0x21);
  if (_Dst != (longlong *)0x0) {
    if (*(uint *)(_Dst + 1) < 2) {
      cVar3 = (**(code **)(*param_1 + 0x278))(param_1);
      if (cVar3 == '\0') {
        lVar1 = *_Dst;
        if (lVar1 != 0) {
          FUN_14538ec90(lVar1);
        }
        lVar2 = *param_3;
        *param_3 = lVar1;
        if (lVar2 != 0) {
          FUN_14538eca0();
        }
      }
      FUN_14538eca0(*_Dst);
      plVar4 = (longlong *)((ulonglong)((int)param_1[0x22] - 1) * 0x10 + param_1[0x21]);
      if (_Dst < plVar4) {
        memmove(_Dst,_Dst + 2,(ulonglong)((int)plVar4 - (int)_Dst & 0xfffffff0));
      }
      *(int *)(param_1 + 0x22) = (int)param_1[0x22] + -1;
    }
    else {
      *(uint *)(_Dst + 1) = *(uint *)(_Dst + 1) - 1;
    }
  }
  return;
}



// FUNCTION 14553ffb0 FUN_14553ffb0 body=80 status=ok
// SIG undefined FUN_14553ffb0(void)

undefined4 FUN_14553ffb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1455407c0(param_1 + 0x108);
  if (lVar1 == 0) {
    return 2;
  }
  if (*(int *)(lVar1 + 8) == 0) {
    FUN_14538ec90(param_2);
  }
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  return 1;
}



// FUNCTION 145540000 FUN_145540000 body=133 status=ok
// SIG undefined FUN_145540000(void)

undefined8 FUN_145540000(longlong param_1)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  _Dst = (undefined8 *)FUN_145540720(param_1 + 0x108);
  if (_Dst != (undefined8 *)0x0) {
    if (*(uint *)(_Dst + 1) < 2) {
      FUN_14538eca0(*_Dst);
      puVar1 = (undefined8 *)
               ((ulonglong)(*(int *)(param_1 + 0x110) - 1) * 0x10 + *(longlong *)(param_1 + 0x108));
      if (_Dst < puVar1) {
        memmove(_Dst,_Dst + 2,(ulonglong)((int)puVar1 - (int)_Dst & 0xfffffff0));
      }
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -1;
    }
    else {
      *(uint *)(_Dst + 1) = *(uint *)(_Dst + 1) - 1;
    }
  }
  return 1;
}



// FUNCTION 145540090 FUN_145540090 body=82 status=ok
// SIG undefined FUN_145540090(void)

undefined8 * FUN_145540090(undefined8 *param_1)

{
  FUN_145398460();
  *param_1 = &PTR_FUN_149da9608;
  param_1[1] = &PTR_FUN_149da9888;
  param_1[2] = &PTR_LAB_149da9890;
  param_1[5] = &PTR_LAB_149da98b8;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 1455400f0 FUN_1455400f0 body=48 status=ok
// SIG undefined FUN_1455400f0(void)

void FUN_1455400f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149da9608;
  param_1[1] = &PTR_FUN_149da9888;
  param_1[2] = &PTR_LAB_149da9890;
  param_1[5] = &PTR_LAB_149da98b8;
  FUN_1453984c0();
  return;
}



// FUNCTION 145540120 FUN_145540120 body=58 status=ok
// SIG undefined FUN_145540120(void)

undefined8 FUN_145540120(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  if ((iVar1 == 0) || (iVar1 == 10)) {
    bVar2 = 0x80;
  }
  else {
    bVar2 = 0;
  }
  *(byte *)((longlong)param_1 + 0xd4) = *(byte *)((longlong)param_1 + 0xd4) & 0x7f | bVar2;
  return 1;
}



// FUNCTION 145540160 FUN_145540160 body=65 status=ok
// SIG undefined FUN_145540160(void)

void FUN_145540160(longlong param_1)

{
  if (*(void **)(param_1 + 0x108) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  return;
}



// FUNCTION 1455401c0 FUN_1455401c0 body=355 status=ok
// SIG undefined FUN_1455401c0(void)

undefined8 FUN_1455401c0(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  
  plVar5 = *(longlong **)(param_2 + 0x18);
  uVar4 = *(uint *)(plVar5 + 1);
  if ((uVar4 < *(uint *)((longlong)plVar5 + 0xc)) ||
     ((cVar7 = FUN_1450c0a10(plVar5), cVar7 != '\0' && (uVar4 < *(uint *)((longlong)plVar5 + 0xc))))
     ) {
    lVar2 = *plVar5 + (ulonglong)*(uint *)(plVar5 + 1) * 0x28;
    *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) + 1;
    if ((lVar2 != 0) && (FUN_14538eae0(lVar2), lVar2 != 0)) {
      plVar5 = (longlong *)(param_3 + 0x88);
      if (*(longlong *)(*plVar5 + 0x18) == 0) {
        uVar8 = FUN_14538ec50();
        lVar6 = *(longlong *)(*plVar5 + 0x18);
        *(undefined8 *)(*plVar5 + 0x18) = uVar8;
        if (lVar6 != 0) {
          FUN_14538eca0(lVar6);
        }
      }
      if (*(longlong *)(*plVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_4;
        if (param_1 != 0) {
          LOCK();
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          UNLOCK();
        }
        lVar6 = *(longlong *)(lVar2 + 0x18);
        *(longlong *)(lVar2 + 0x18) = param_1;
        if (lVar6 != 0) {
          LOCK();
          piVar1 = (int *)(lVar6 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
          }
        }
        plVar5 = *(longlong **)(*(longlong *)(param_3 + 0x88) + 0x18);
        if ((int)plVar5[1] == 0) {
          *(byte *)(lVar2 + 0x12) = *(byte *)(lVar2 + 0x12) & 0xfc;
          *(undefined2 *)(lVar2 + 0x10) = 1;
        }
        else {
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(*plVar5 + 0x10);
        }
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          FUN_14553ffb0(param_1);
        }
        return 1;
      }
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (lVar2 != 0) {
    FUN_14538eca0();
  }
  return 0x34;
}



// FUNCTION 145540330 FUN_145540330 body=793 status=ok
// SIG undefined FUN_145540330(void)

undefined4 FUN_145540330(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *_Dst;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_378;
  undefined8 local_370;
  longlong *local_368;
  longlong local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong local_340;
  undefined4 local_338 [2];
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  int *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined1 local_288 [200];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  byte local_28;
  
  local_338[0] = *param_2;
  local_330 = *(undefined8 *)(param_2 + 2);
  uVar4 = 2;
  local_328 = *(undefined8 *)(param_2 + 4);
  local_320 = *(undefined8 *)(param_2 + 6);
  local_304 = param_2[0xd];
  local_310 = *(undefined8 *)(param_2 + 10);
  local_308 = param_2[0xc];
  local_318 = *(int **)(param_2 + 8);
  if (local_318 != (int *)0x0) {
    *local_318 = *local_318 + 1;
  }
  local_300 = *(undefined8 *)(param_2 + 0xe);
  uStack_2f8 = *(undefined8 *)(param_2 + 0x10);
  local_2b8 = param_2[0x20];
  local_2f0 = *(undefined8 *)(param_2 + 0x12);
  uStack_2e8 = *(undefined8 *)(param_2 + 0x14);
  local_2b4 = param_2[0x21];
  local_2b0 = *(undefined8 **)(param_2 + 0x22);
  local_2a8 = param_2[0x24];
  local_2a4 = param_2[0x25];
  local_2e0 = *(undefined8 *)(param_2 + 0x16);
  uStack_2d8 = *(undefined8 *)(param_2 + 0x18);
  local_298 = param_2[0x28];
  local_2c0 = *(undefined8 *)(param_2 + 0x1e);
  local_290 = *(undefined8 *)(param_2 + 0x2a);
  local_2d0 = param_2[0x1a];
  uStack_2cc = param_2[0x1b];
  uStack_2c8 = param_2[0x1c];
  uStack_2c4 = param_2[0x1d];
  local_2a0 = *(undefined8 *)(param_2 + 0x26);
  FUN_1450896a0(local_288);
  local_40 = param_2[0xbe];
  uStack_3c = param_2[0xbf];
  uStack_38 = param_2[0xc0];
  uStack_34 = param_2[0xc1];
  local_48 = *(undefined8 *)(param_2 + 0xbc);
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1450c1160(local_288,param_2 + 0x2c);
  local_30 = *(undefined8 *)(param_2 + 0xc2);
  local_28 = *(byte *)(param_2 + 0xc4) & 0xf | local_28 & 0xf0;
  local_378 = *local_2b0;
  local_370 = local_2b0[1];
  local_368 = (longlong *)local_2b0[2];
  local_360 = 0;
  local_358 = *(undefined4 *)(local_2b0 + 4);
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  if (((DAT_14c790fd0 != 0) && (local_368 != (longlong *)0x0)) && (*local_368 != 0)) {
    iVar3 = FUN_1450b4240(DAT_14c790fd0,*local_368);
    if (iVar3 == 1) {
      local_340 = *local_368;
    }
  }
  _Dst = (longlong *)FUN_145540720(param_1 + 0x21,local_2b0[3]);
  if (_Dst != (longlong *)0x0) {
    if (*(uint *)(_Dst + 1) < 2) {
      cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
      if (cVar2 == '\0') {
        lVar1 = *_Dst;
        if (lVar1 != 0) {
          FUN_14538ec90(lVar1);
        }
        bVar6 = local_360 != 0;
        local_360 = lVar1;
        if (bVar6) {
          FUN_14538eca0();
        }
      }
      FUN_14538eca0(*_Dst);
      plVar5 = (longlong *)((ulonglong)((int)param_1[0x22] - 1) * 0x10 + param_1[0x21]);
      if (_Dst < plVar5) {
        memmove(_Dst,_Dst + 2,(ulonglong)((int)plVar5 - (int)_Dst & 0xfffffff0));
      }
      *(int *)(param_1 + 0x22) = (int)param_1[0x22] + -1;
    }
    else {
      *(uint *)(_Dst + 1) = *(uint *)(_Dst + 1) - 1;
    }
  }
  if (local_360 != 0) {
    local_2b0 = &local_378;
    uVar4 = FUN_14536e380(param_1,local_338);
  }
  if (local_340 != 0) {
    FUN_1450b42a0(DAT_14c790fd0);
  }
  FUN_14538dec0(&local_350);
  if (local_360 != 0) {
    FUN_14538eca0();
    local_360 = 0;
  }
  FUN_144d51aa0(local_288);
  if (local_318 != (int *)0x0) {
    FUN_144d4a460();
  }
  return uVar4;
}



// FUNCTION 145540650 FUN_145540650 body=202 status=ok
// SIG undefined FUN_145540650(void)

undefined8 FUN_145540650(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var7 = (ulonglong)(iVar3 + uVar2) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(0,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar5 = puVar6, (undefined8 *)*param_1 != puVar6)) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar5 + 1) = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *puVar5 = *puVar1;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1455406fd;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_1455406fd:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145540720 FUN_145540720 body=156 status=ok
// SIG undefined FUN_145540720(void)

/* WARNING: Removing unreachable block (ram,0x000145540794) */

ulonglong * FUN_145540720(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      puVar4 = (ulonglong *)((longlong)iVar3 * 0x10 + *param_1);
      uVar1 = *puVar4;
      if (uVar1 == param_2) {
        return puVar4;
      }
      uVar2 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar2 >> 1;
    } while (uVar5 != 0);
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1455407c0 FUN_1455407c0 body=307 status=ok
// SIG undefined FUN_1455407c0(void)

ulonglong * FUN_1455407c0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulonglong *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  void *_Src;
  
  uVar9 = *(uint *)(param_1 + 1);
  uVar8 = 0;
  if (uVar9 != 0) {
    do {
      iVar6 = (uVar9 >> 1) + uVar8;
      puVar5 = (ulonglong *)((longlong)iVar6 * 0x10 + *param_1);
      uVar1 = *puVar5;
      if (uVar1 == param_2) {
        return puVar5;
      }
      uVar4 = uVar9 - 1;
      uVar2 = iVar6 + 1;
      if (param_2 <= uVar1) {
        uVar4 = uVar9;
        uVar2 = uVar8;
      }
      uVar8 = uVar2;
      uVar9 = uVar4 >> 1;
    } while (uVar9 != 0);
  }
  puVar7 = (uint *)(param_1 + 1);
  uVar9 = *puVar7;
  if ((longlong)(int)uVar8 * 0x10 + *param_1 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
       (cVar3 = FUN_145540650(param_1), cVar3 == '\0')) {
      return (ulonglong *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar9) {
      return (ulonglong *)0x0;
    }
    uVar9 = *puVar7;
    *puVar7 = uVar9 + 1;
    puVar5 = (ulonglong *)((ulonglong)uVar9 * 0x10 + *param_1);
    if (puVar5 != (ulonglong *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 0;
    }
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
        (cVar3 = FUN_145540650(param_1), cVar3 == '\0')) ||
       (puVar7 = (uint *)(param_1 + 1), *(uint *)((longlong)param_1 + 0xc) <= uVar9)) {
      return (ulonglong *)0x0;
    }
    _Src = (void *)(*param_1 + (ulonglong)uVar8 * 0x10);
    if (uVar8 < *puVar7) {
      memmove((void *)((longlong)_Src + 0x10),_Src,(ulonglong)((*puVar7 - uVar8) * 0x10));
    }
    if (_Src != (void *)0x0) {
      *(undefined4 *)((longlong)_Src + 8) = 0;
    }
    *puVar7 = *puVar7 + 1;
    puVar5 = (ulonglong *)(*param_1 + (ulonglong)uVar8 * 0x10);
  }
  if (puVar5 != (ulonglong *)0x0) {
    *puVar5 = param_2;
  }
  return puVar5;
}



// FUNCTION 145540900 FUN_145540900 body=95 status=ok
// SIG undefined FUN_145540900(void)

undefined8 * FUN_145540900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da9608;
  param_1[1] = &PTR_FUN_149da9888;
  param_1[2] = &PTR_LAB_149da9890;
  param_1[5] = &PTR_LAB_149da98b8;
  FUN_1453984c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 145540980 FUN_145540980 body=401 status=ok
// SIG undefined FUN_145540980(void)

char FUN_145540980(uint *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  
  piVar1 = DAT_14c791060;
  if (*(longlong *)(param_1 + 2) != 0) {
    return '\x01';
  }
  cVar8 = '\x01';
  uVar3 = *param_1;
  do {
    while (iVar5 = *piVar1, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_1455409df;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar5 == iVar2) {
      *piVar1 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar2);
LAB_1455409df:
  lVar7 = 0;
  lVar9 = lVar7;
  if (piVar1[0x12] != 0) {
    for (lVar6 = *(longlong *)
                  (*(longlong *)(piVar1 + 0x10) +
                  ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (lVar9 = lVar7, lVar6 != 0 && (lVar9 = lVar6, *(uint *)(lVar6 + 0x10) != uVar3));
        lVar6 = *(longlong *)(lVar6 + 8)) {
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar5 = *piVar1;
  do {
    if (iVar5 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_145540a60:
      lVar6 = lVar9 + -0x10;
      if (lVar9 == 0) {
        lVar6 = lVar7;
      }
      if (lVar6 != 0) {
        lVar9 = *(longlong *)(param_2 + 0x40);
        if (((lVar9 != 0) && (lVar7 = *(longlong *)(lVar6 + 0x78), lVar7 != 0)) &&
           (cVar8 = (lVar7 != lVar9) + '\x01', lVar7 == lVar9)) {
          uVar4 = *(undefined8 *)(param_1 + 2);
          *(longlong *)(param_1 + 2) = lVar6;
          iVar5 = FUN_14536efd0(lVar6,param_2);
          if (iVar5 == 1) {
            FUN_145397520(*(undefined8 *)(param_2 + 0x40),param_2,param_1,uVar4);
          }
          else {
            param_1[2] = 0;
            param_1[3] = 0;
          }
        }
        LOCK();
        piVar1 = (int *)(lVar6 + 0x24);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
        }
      }
      return cVar8;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar5 == iVar2) {
      *piVar1 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar2) {
      if ((iVar5 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_145540a60;
    }
    iVar5 = *piVar1;
  } while( true );
}



// FUNCTION 145540b20 FUN_145540b20 body=58 status=ok
// SIG undefined FUN_145540b20(void)

ulonglong FUN_145540b20(longlong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(param_1 + 0x28);
  if ((pfVar2 != (float *)0x0) && (pfVar1 = pfVar2 + 2, *pfVar1 != 0.0)) {
    pfVar2 = *(float **)pfVar2;
    pfVar1 = pfVar2 + (ulonglong)(uint)*pfVar1 * 2;
    while( true ) {
      if (pfVar2 == pfVar1) {
        return CONCAT71((int7)((ulonglong)pfVar2 >> 8),1);
      }
      if ((*pfVar2 <= param_2) && (param_2 < pfVar2[1] || param_2 == pfVar2[1])) break;
      pfVar2 = pfVar2 + 2;
    }
  }
  return (ulonglong)pfVar2 & 0xffffffffffffff00;
}



// FUNCTION 145540b60 FUN_145540b60 body=749 status=ok
// SIG undefined FUN_145540b60(void)

undefined4 FUN_145540b60(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  
  uVar13 = 0;
  uVar15 = 1;
  if (param_3 != 0) {
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 1;
    if (param_2 == 0) {
      uVar15 = 0x1f;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(int *)(param_1 + 0x18) = param_3 + 2;
      pvVar10 = AK::MemoryMgr::Malloc(0,(ulonglong)(uint)((param_3 + 2) * 0x14));
      *(void **)(param_1 + 0x10) = pvVar10;
      if (pvVar10 != (void *)0x0) {
        FUN_1453521a0(param_1 + 0x10,param_2,param_3,0);
        if (*(longlong *)(param_1 + 0x28) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          return 1;
        }
        if (*(int *)(param_1 + 0x18) - 2U < 2) {
          return 1;
        }
        if (*(longlong *)(param_1 + 0x28) == 0) {
          puVar11 = AK::MemoryMgr::Malloc(2,0x10);
          if (puVar11 == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            return 0x34;
          }
          *puVar11 = 0;
          puVar11[1] = 0;
          *(undefined8 **)(param_1 + 0x28) = puVar11;
        }
        bVar8 = false;
        uVar15 = 0xff7fffff;
        do {
          while( true ) {
            iVar4 = *(int *)(param_1 + 0x18);
            uVar14 = iVar4 - 2;
            if (iVar4 == 0) {
              uVar14 = 0;
            }
            if (uVar14 <= uVar13) {
              if (!bVar8) {
                return 1;
              }
              plVar7 = *(longlong **)(param_1 + 0x28);
              uVar13 = *(uint *)(plVar7 + 1);
              uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar4 - 2) * 0xc);
              uVar14 = *(uint *)((longlong)plVar7 + 0xc);
              if (uVar14 <= uVar13) {
                iVar4 = (uVar14 >> 1) + uVar14;
                if (uVar14 == 0) {
                  iVar4 = 1;
                }
                cVar9 = FUN_145542b60(plVar7,iVar4);
                if (cVar9 == '\0') {
                  return 0x34;
                }
              }
              if (uVar13 < *(uint *)((longlong)plVar7 + 0xc)) {
                puVar1 = (undefined4 *)(*plVar7 + (ulonglong)*(uint *)(plVar7 + 1) * 8);
                *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) + 1;
                if (puVar1 != (undefined4 *)0x0) {
                  *puVar1 = 0xff7fffff;
                  puVar1[1] = 0x7f7fffff;
                  *puVar1 = uVar15;
                  puVar1[1] = uVar3;
                  return 1;
                }
              }
              return 0x34;
            }
            lVar6 = *(longlong *)(param_1 + 0x10);
            uVar12 = (ulonglong)(uVar13 + 1);
            fVar2 = *(float *)(lVar6 + 4 + uVar12 * 0xc);
            if (!bVar8) break;
            if (fVar2 <= 0.0) {
              if (iVar4 == 0) {
                uVar14 = 0xffffffff;
              }
              else {
                uVar14 = iVar4 - 3;
              }
              if ((uVar13 == uVar14) ||
                 (*(float *)(lVar6 + 4 + (ulonglong)(uVar13 + 2) * 0xc) <= 0.0)) {
                plVar7 = *(longlong **)(param_1 + 0x28);
                bVar8 = false;
                uVar3 = *(undefined4 *)(lVar6 + uVar12 * 0xc);
                uVar14 = *(uint *)(plVar7 + 1);
                uVar5 = *(uint *)((longlong)plVar7 + 0xc);
                if (uVar5 <= uVar14) {
                  iVar4 = (uVar5 >> 1) + uVar5;
                  if (uVar5 == 0) {
                    iVar4 = 1;
                  }
                  cVar9 = FUN_145542b60(plVar7,iVar4);
                  if (cVar9 == '\0') {
                    return 0x34;
                  }
                }
                if (*(uint *)((longlong)plVar7 + 0xc) <= uVar14) {
                  return 0x34;
                }
                puVar1 = (undefined4 *)(*plVar7 + (ulonglong)*(uint *)(plVar7 + 1) * 8);
                *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) + 1;
                if (puVar1 == (undefined4 *)0x0) {
                  return 0x34;
                }
                *puVar1 = 0xff7fffff;
                puVar1[1] = 0x7f7fffff;
                *puVar1 = uVar15;
                puVar1[1] = uVar3;
              }
            }
LAB_145540d69:
            uVar13 = uVar13 + 1;
          }
          if ((fVar2 <= 0.0) && (*(int *)(lVar6 + 8 + uVar12 * 0xc) == 9)) goto LAB_145540d69;
          uVar15 = *(undefined4 *)(lVar6 + uVar12 * 0xc);
          bVar8 = true;
          uVar13 = uVar13 + 1;
        } while( true );
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar15 = 0x34;
    }
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return uVar15;
}



// FUNCTION 145540e50 FUN_145540e50 body=983 status=ok
// SIG undefined FUN_145540e50(void)

undefined8 * FUN_145540e50(undefined4 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  bool bVar21;
  void *pvVar22;
  undefined8 *in_RCX;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  
  *(undefined1 *)(in_RCX + 4) = 0xff;
  in_RCX[1] = 0;
  *(undefined4 *)(in_RCX + 2) = 0;
  *(undefined4 *)(in_RCX + 3) = 0;
  in_RCX[6] = 0;
  in_RCX[7] = 0;
  in_RCX[8] = 0;
  *(undefined1 *)(in_RCX + 5) = 0xff;
  in_RCX[10] = param_3;
  in_RCX[0xb] = 0;
  in_RCX[0xc] = 0;
  *in_RCX = &PTR_LAB_149da9938;
  in_RCX[9] = param_2;
  if (*(int *)(in_RCX + 8) == 0) {
    param_1 = *(undefined4 *)(param_2 + 0x10);
    uVar9 = *(undefined4 *)(param_2 + 0x14);
    uVar10 = *(undefined4 *)(param_2 + 0x18);
    uVar11 = *(undefined4 *)(param_2 + 0x1c);
    uVar12 = *(undefined4 *)(param_2 + 0x20);
    uVar13 = *(undefined4 *)(param_2 + 0x24);
    uVar14 = *(undefined4 *)(param_2 + 0x28);
    uVar15 = *(undefined4 *)(param_2 + 0x2c);
    uVar16 = *(undefined4 *)(param_2 + 0x30);
    uVar17 = *(undefined4 *)(param_2 + 0x34);
    uVar18 = *(undefined4 *)(param_2 + 0x38);
    uVar19 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(in_RCX + 1) = param_1;
    *(undefined4 *)((longlong)in_RCX + 0xc) = uVar9;
    *(undefined4 *)(in_RCX + 2) = uVar10;
    *(undefined4 *)((longlong)in_RCX + 0x14) = uVar11;
    *(undefined4 *)(in_RCX + 3) = uVar12;
    *(undefined4 *)((longlong)in_RCX + 0x1c) = uVar13;
    *(undefined4 *)(in_RCX + 4) = uVar14;
    *(undefined4 *)((longlong)in_RCX + 0x24) = uVar15;
    *(undefined4 *)(in_RCX + 5) = uVar16;
    *(undefined4 *)((longlong)in_RCX + 0x2c) = uVar17;
    *(undefined4 *)(in_RCX + 6) = uVar18;
    *(undefined4 *)((longlong)in_RCX + 0x34) = uVar19;
  }
  LOCK();
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  UNLOCK();
  lVar24 = in_RCX[10];
  if ((*(char *)(lVar24 + 0x4c) != '\b') && (*(int *)(lVar24 + 0x48) != 0)) {
    FUN_145353180(param_1,*(undefined8 *)(lVar24 + 0x48));
  }
  uVar6 = *(uint *)(in_RCX[10] + 0x38);
  if (uVar6 <= *(uint *)((longlong)in_RCX + 100)) goto LAB_145541013;
  uVar25 = (ulonglong)*(uint *)(in_RCX + 0xc);
  if ((void *)in_RCX[0xb] == (void *)0x0) {
    pvVar22 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar6 << 5);
    bVar21 = false;
    if (pvVar22 != (void *)0x0) {
      if (((void *)in_RCX[0xb] != (void *)0x0) && ((void *)in_RCX[0xb] != pvVar22)) {
        if (uVar25 != 0) {
          lVar24 = (longlong)pvVar22 + 0x1c;
          do {
            puVar2 = (undefined8 *)(lVar24 + -0x1c);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = 0;
              *(undefined4 *)(lVar24 + -0x14) = 0;
              *(undefined8 *)(lVar24 + -0xc) = 0;
              *(undefined8 *)(lVar24 + -4) = 0;
            }
            lVar26 = in_RCX[0xb];
            lVar7 = (-0x1c - (longlong)pvVar22) + lVar24;
            puVar4 = (undefined4 *)(lVar26 + lVar7);
            uVar9 = puVar4[1];
            uVar10 = puVar4[2];
            uVar11 = puVar4[3];
            *(undefined4 *)puVar2 = *puVar4;
            *(undefined4 *)(lVar24 + -0x18) = uVar9;
            *(undefined4 *)(lVar24 + -0x14) = uVar10;
            *(undefined4 *)(lVar24 + -0x10) = uVar11;
            puVar2 = (undefined8 *)(lVar26 + 0x10 + lVar7);
            uVar20 = puVar2[1];
            *(undefined8 *)(lVar24 + -0xc) = *puVar2;
            *(undefined8 *)(lVar24 + -4) = uVar20;
            plVar23 = (longlong *)(in_RCX[0xb] + lVar7);
            if ((void *)plVar23[2] != (void *)0x0) {
              *(undefined4 *)(plVar23 + 3) = 0;
              AK::MemoryMgr::Free(0,(void *)plVar23[2]);
              plVar23[2] = 0;
              *(undefined4 *)((longlong)plVar23 + 0x1c) = 0;
            }
            lVar7 = *(longlong *)(*plVar23 + 8);
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x24);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
              }
            }
            lVar24 = lVar24 + 0x20;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)in_RCX[0xb]);
      }
      goto LAB_145541001;
    }
  }
  else {
    pvVar22 = AK::MemoryMgr::Realloc(0,(void *)in_RCX[0xb],(ulonglong)uVar6 << 5);
    if (pvVar22 == (void *)0x0) {
      bVar21 = false;
    }
    else {
LAB_145541001:
      in_RCX[0xb] = pvVar22;
      bVar21 = true;
      *(uint *)((longlong)in_RCX + 100) = uVar6;
    }
  }
  if (!bVar21) {
    return in_RCX;
  }
LAB_145541013:
  lVar24 = *(longlong *)(in_RCX[10] + 0x30);
  if (lVar24 != (ulonglong)*(uint *)(in_RCX[10] + 0x38) * 0x10 + lVar24) {
    do {
      uVar6 = *(uint *)(in_RCX + 0xc);
      uVar25 = (ulonglong)uVar6;
      lVar7 = *(longlong *)(lVar24 + 8);
      uVar27 = *(uint *)((longlong)in_RCX + 100);
      if (uVar6 < uVar27) {
LAB_1455411f9:
        uVar6 = *(uint *)(in_RCX + 0xc);
        *(uint *)(in_RCX + 0xc) = uVar6 + 1;
        plVar23 = (longlong *)((ulonglong)uVar6 * 0x20 + in_RCX[0xb]);
        if (plVar23 != (longlong *)0x0) {
          *(undefined4 *)(plVar23 + 1) = 0;
          plVar23[2] = 0;
          plVar23[3] = 0;
        }
      }
      else {
        iVar5 = (uVar27 >> 1) + uVar27;
        if (uVar27 == 0) {
          iVar5 = 1;
        }
        uVar27 = iVar5 + uVar27;
        if ((void *)in_RCX[0xb] == (void *)0x0) {
          pvVar22 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar27 << 5);
          if (pvVar22 != (void *)0x0) {
            if (((void *)in_RCX[0xb] != (void *)0x0) && ((void *)in_RCX[0xb] != pvVar22)) {
              if (uVar6 != 0) {
                lVar26 = (longlong)pvVar22 + 0x1c;
                do {
                  puVar2 = (undefined8 *)(lVar26 + -0x1c);
                  if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = 0;
                    *(undefined4 *)(lVar26 + -0x14) = 0;
                    *(undefined8 *)(lVar26 + -0xc) = 0;
                    *(undefined8 *)(lVar26 + -4) = 0;
                  }
                  lVar8 = in_RCX[0xb];
                  lVar3 = (-0x1c - (longlong)pvVar22) + lVar26;
                  puVar4 = (undefined4 *)(lVar8 + lVar3);
                  uVar9 = puVar4[1];
                  uVar10 = puVar4[2];
                  uVar11 = puVar4[3];
                  *(undefined4 *)puVar2 = *puVar4;
                  *(undefined4 *)(lVar26 + -0x18) = uVar9;
                  *(undefined4 *)(lVar26 + -0x14) = uVar10;
                  *(undefined4 *)(lVar26 + -0x10) = uVar11;
                  puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar3);
                  uVar20 = puVar2[1];
                  *(undefined8 *)(lVar26 + -0xc) = *puVar2;
                  *(undefined8 *)(lVar26 + -4) = uVar20;
                  plVar23 = (longlong *)(in_RCX[0xb] + lVar3);
                  if ((void *)plVar23[2] != (void *)0x0) {
                    *(undefined4 *)(plVar23 + 3) = 0;
                    AK::MemoryMgr::Free(0,(void *)plVar23[2]);
                    plVar23[2] = 0;
                    *(undefined4 *)((longlong)plVar23 + 0x1c) = 0;
                  }
                  lVar3 = *(longlong *)(*plVar23 + 8);
                  if (lVar3 != 0) {
                    LOCK();
                    piVar1 = (int *)(lVar3 + 0x24);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
                    }
                  }
                  lVar26 = lVar26 + 0x20;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              AK::MemoryMgr::Free(0,(void *)in_RCX[0xb]);
            }
            goto LAB_1455411e8;
          }
        }
        else {
          pvVar22 = AK::MemoryMgr::Realloc(0,(void *)in_RCX[0xb],(ulonglong)uVar27 << 5);
          if (pvVar22 != (void *)0x0) {
LAB_1455411e8:
            in_RCX[0xb] = pvVar22;
            *(uint *)((longlong)in_RCX + 100) = uVar27;
            if (uVar6 < uVar27) goto LAB_1455411f9;
          }
        }
        plVar23 = (longlong *)0x0;
      }
      *plVar23 = lVar7;
      lVar7 = *(longlong *)(lVar7 + 8);
      if (lVar7 != 0) {
        LOCK();
        piVar1 = (int *)(lVar7 + 0x24);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar24 = lVar24 + 0x10;
    } while (lVar24 != (ulonglong)*(uint *)(in_RCX[10] + 0x38) * 0x10 +
                       *(longlong *)(in_RCX[10] + 0x30));
  }
  return in_RCX;
}



// FUNCTION 145541230 FUN_145541230 body=444 status=ok
// SIG undefined FUN_145541230(void)

void FUN_145541230(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  lVar4 = param_1[10];
  *param_1 = &PTR_LAB_149da9938;
  if ((*(char *)(lVar4 + 0x4c) != '\b') && (*(int *)(lVar4 + 0x48) != 0)) {
    FUN_1453532d0(param_1,*(undefined8 *)(lVar4 + 0x48));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  puVar9 = puVar6;
  if (puVar6 != puVar6 + uVar5 * 4) {
    do {
      plVar8 = (longlong *)puVar9[2];
      if (plVar8 != plVar8 + *(uint *)(puVar9 + 3)) {
        do {
          lVar4 = param_1[10];
          puVar6 = *(undefined8 **)(lVar4 + 0x20);
          lVar7 = *plVar8 + 0x18;
          if (*plVar8 == 0) {
            lVar7 = 0;
          }
          if (puVar6 != puVar6 + *(uint *)(lVar4 + 0x28)) {
            do {
              FUN_1450741b0(lVar7,*puVar6);
              puVar6 = puVar6 + 1;
            } while (puVar6 != (undefined8 *)
                               (*(longlong *)(lVar4 + 0x20) + (ulonglong)*(uint *)(lVar4 + 0x28) * 8
                               ));
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != (longlong *)(puVar9[2] + (ulonglong)*(uint *)(puVar9 + 3) * 8));
      }
      uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
      puVar9 = puVar9 + 4;
      puVar6 = (undefined8 *)param_1[0xb];
    } while (puVar9 != puVar6 + uVar5 * 4);
  }
  if (puVar6 != (undefined8 *)0x0) {
    if (puVar6 != puVar6 + uVar5 * 4) {
      puVar9 = puVar6 + 2;
      do {
        if ((void *)*puVar9 != (void *)0x0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          AK::MemoryMgr::Free(0,(void *)*puVar9);
          *puVar9 = 0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        }
        lVar4 = *(longlong *)(puVar9[-2] + 8);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
          }
        }
        puVar2 = puVar9 + 2;
        puVar9 = puVar9 + 4;
      } while (puVar2 != puVar6 + uVar5 * 4);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  plVar8 = (longlong *)param_1[10];
  LOCK();
  piVar1 = (int *)((longlong)plVar8 + 0x14);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*plVar8 + 0x18))();
  }
  FUN_1453533f0(param_1);
  return;
}



// FUNCTION 1455413f0 FUN_1455413f0 body=274 status=ok
// SIG undefined FUN_1455413f0(void)

void FUN_1455413f0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar4 = *(longlong **)(param_1 + 0x58);
  plVar6 = plVar4 + (ulonglong)*(uint *)(param_1 + 0x60) * 4;
  if (plVar4 != plVar6) {
    while ((*(longlong *)(*plVar4 + 8) == 0 || (*(longlong *)(*plVar4 + 8) != param_3))) {
      plVar4 = plVar4 + 4;
      if (plVar4 == plVar6) {
        return;
      }
    }
    uVar1 = *(uint *)(plVar4 + 3);
    if ((uVar1 < *(uint *)((longlong)plVar4 + 0x1c)) ||
       ((cVar3 = FUN_14535eaa0(plVar4 + 2), cVar3 != '\0' &&
        (uVar1 < *(uint *)((longlong)plVar4 + 0x1c))))) {
      uVar1 = *(uint *)(plVar4 + 3);
      *(uint *)(plVar4 + 3) = uVar1 + 1;
      plVar4 = (longlong *)(plVar4[2] + (ulonglong)uVar1 * 8);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = param_2;
        plVar4 = (longlong *)(param_2 + 0x18);
        plVar6 = plVar4;
        if (param_2 == 0) {
          plVar6 = (longlong *)0x0;
        }
        puVar5 = (ulonglong *)(**(code **)(*plVar4 + 0x30))(plVar4,local_res8);
        lVar2 = *(longlong *)(param_1 + 0x50);
        plVar4 = *(longlong **)(lVar2 + 0x20);
        if (plVar4 != plVar4 + *(uint *)(lVar2 + 0x28)) {
          do {
            if ((*puVar5 >> ((ulonglong)*(uint *)(*plVar4 + 8) & 0x3f) & 1) != 0) {
              FUN_145074140(plVar6);
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != (longlong *)
                             (*(longlong *)(lVar2 + 0x20) + (ulonglong)*(uint *)(lVar2 + 0x28) * 8))
          ;
        }
      }
    }
  }
  return;
}



// FUNCTION 145541510 FUN_145541510 body=249 status=ok
// SIG undefined FUN_145541510(void)

void FUN_145541510(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
  plVar5 = plVar3 + (ulonglong)*(uint *)(param_1 + 0x60) * 4;
  if (plVar3 != plVar5) {
    while ((*(longlong *)(*plVar3 + 8) == 0 || (*(longlong *)(*plVar3 + 8) != param_3))) {
      plVar3 = plVar3 + 4;
      if (plVar3 == plVar5) {
        return;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    lVar6 = param_2 + 0x18;
    if (param_2 == 0) {
      lVar6 = 0;
    }
    puVar4 = *(undefined8 **)(lVar1 + 0x20);
    if (puVar4 != puVar4 + *(uint *)(lVar1 + 0x28)) {
      do {
        FUN_1450741b0(lVar6,*puVar4);
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined8 *)
                         (*(longlong *)(lVar1 + 0x20) + (ulonglong)*(uint *)(lVar1 + 0x28) * 8));
    }
    plVar2 = (longlong *)plVar3[2];
    plVar5 = plVar2 + *(uint *)(plVar3 + 3);
    if (plVar2 != plVar5) {
      while (*plVar2 != param_2) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar5) {
          return;
        }
      }
      if (plVar2 < plVar5 + -1) {
        *plVar2 = plVar5[-1];
      }
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    }
  }
  return;
}



// FUNCTION 145541610 FUN_145541610 body=49 status=ok
// SIG undefined FUN_145541610(void)

longlong * FUN_145541610(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  plVar2 = plVar1 + (ulonglong)*(uint *)(param_1 + 0x60) * 4;
  while( true ) {
    if (plVar1 == plVar2) {
      return (longlong *)0x0;
    }
    if ((*(longlong *)(*plVar1 + 8) != 0) &&
       (*(int *)(*(longlong *)(*plVar1 + 8) + 0x20) == param_2)) break;
    plVar1 = plVar1 + 4;
  }
  return plVar1;
}



// FUNCTION 145541650 FUN_145541650 body=1032 status=ok
// SIG undefined FUN_145541650(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145541650(longlong param_1,undefined8 param_2,longlong *param_3,float *param_4,
                  float *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong *plVar10;
  float *pfVar11;
  ulonglong uVar12;
  char cVar13;
  float fVar14;
  byte local_res8 [8];
  undefined4 local_3d8;
  float local_3d4;
  undefined4 local_3d0;
  float local_3cc [3];
  undefined8 local_3c0;
  uint local_3b8;
  undefined4 local_3b0 [2];
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined1 local_394;
  undefined1 local_393;
  undefined1 local_392;
  undefined2 local_391;
  undefined8 local_388;
  undefined1 local_378 [16];
  undefined8 local_368;
  longlong local_358;
  undefined4 local_344;
  char local_2e0 [5];
  char local_2db;
  undefined1 local_2c8 [608];
  byte local_68;
  
  local_3c0 = *(undefined8 *)(param_1 + 0x50);
  plVar10 = *(longlong **)(param_1 + 0x58);
  local_3b8 = (uint)(*param_3 == 0) | local_3b8 & 0xffffff24 | 0x24;
  if (plVar10 != plVar10 + (ulonglong)*(uint *)(param_1 + 0x60) * 4) {
    do {
      lVar2 = *plVar10;
      if (*(longlong *)(lVar2 + 8) != 0) {
        puVar8 = *(undefined8 **)(lVar2 + 0x28);
        fVar14 = *param_4;
        if ((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 1) == 0)) {
          cVar13 = '\0';
          fVar14 = *param_5;
          if ((puVar8 != (undefined8 *)0x0) && (uVar1 = *(uint *)(puVar8 + 1), uVar1 != 0))
          goto LAB_14554175f;
LAB_145541791:
          cVar9 = '\0';
        }
        else {
          pfVar11 = (float *)*puVar8;
          pfVar7 = pfVar11 + (ulonglong)*(uint *)(puVar8 + 1) * 2;
          for (; pfVar11 != pfVar7; pfVar11 = pfVar11 + 2) {
            if ((*pfVar11 <= fVar14) && (fVar14 < pfVar11[1] || fVar14 == pfVar11[1])) {
              cVar13 = '\0';
              uVar12 = (ulonglong)*(uint *)(puVar8 + 1);
              pfVar7 = (float *)*puVar8;
              fVar14 = *param_5;
              pfVar11 = pfVar7;
              goto LAB_145541771;
            }
          }
          cVar13 = '\x01';
          uVar1 = *(uint *)(puVar8 + 1);
          fVar14 = *param_5;
LAB_14554175f:
          uVar12 = (ulonglong)uVar1;
          pfVar7 = (float *)*puVar8;
          pfVar11 = pfVar7;
          if (pfVar7 != pfVar7 + uVar12 * 2) {
LAB_145541771:
            do {
              if ((*pfVar7 <= fVar14) && (fVar14 < pfVar7[1] || fVar14 == pfVar7[1]))
              goto LAB_145541791;
              pfVar7 = pfVar7 + 2;
            } while (pfVar7 != pfVar11 + uVar12 * 2);
          }
          cVar9 = '\x01';
        }
        cVar4 = FUN_145395fa0(*(undefined8 *)(param_1 + 0x48));
        if ((cVar4 != '\0') && (cVar13 != cVar9)) {
          if (cVar13 == '\0') {
            if ((cVar9 != '\0') &&
               (iVar6 = (int)plVar10[1] + 1, *(int *)(plVar10 + 1) = iVar6, iVar6 == 1)) {
              local_391 = 0;
              local_388 = 0;
              local_394 = 0;
              local_392 = 0;
              local_3b0[0] = 0;
              local_3a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10);
              local_3a0 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18);
              local_398 = 4;
              local_39c = 0;
              local_393 = 0;
              (**(code **)(**(longlong **)(lVar2 + 8) + 0x80))(*(longlong **)(lVar2 + 8),local_3b0);
              FUN_145081890(DAT_14c790fd8,*(undefined8 *)(lVar2 + 8),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18));
            }
          }
          else if (cVar9 == '\0') {
            plVar3 = plVar10 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            if ((int)*plVar3 == 0) {
              local_3cc[1] = 0.0;
              local_3cc[2] = 5.60519e-45;
              FUN_145541a60(param_1,local_378,local_3cc + 1);
              plVar3 = *(longlong **)(lVar2 + 8);
              if ((local_2e0[0] == -0x70) && (local_2db != '\0')) {
                local_res8[0] = local_68 & 1;
                uVar5 = FUN_1450e98e0(local_378);
                iVar6 = FUN_14536f6c0(plVar3,local_2e0,uVar5,local_res8,local_368,local_344);
                if (iVar6 == 1) {
                  local_68 = local_68 & 0xfe | local_res8[0] & 1;
                  goto LAB_145541856;
                }
              }
              else {
LAB_145541856:
                iVar6 = FUN_14536f160(plVar3,local_378);
                if (iVar6 == 1) {
                  (**(code **)(*plVar3 + 0x250))(plVar3,local_378);
                }
              }
              FUN_144d51aa0(local_2c8);
              if (local_358 != 0) {
                FUN_144d4a460();
              }
            }
          }
        }
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          fVar14 = 0.0;
        }
        else {
          local_3d8 = *(undefined4 *)(lVar2 + 0x20);
          local_3d4 = 0.0;
          FUN_1450737c0(lVar2 + 0x10,*param_5,&local_3d8,&local_3d4);
          *(undefined4 *)(lVar2 + 0x20) = local_3d8;
          fVar14 = local_3d4;
        }
        if (((cVar13 == cVar9) && (fVar14 == 1.0)) && (*(longlong *)(lVar2 + 0x10) != 0)) {
          local_3d0 = *(undefined4 *)(lVar2 + 0x20);
          local_3cc[0] = 0.0;
          FUN_1450737c0(lVar2 + 0x10,*param_4,&local_3d0,local_3cc);
          *(undefined4 *)(lVar2 + 0x20) = local_3d0;
          if (local_3cc[0] == 1.0) goto LAB_145541a00;
        }
        puVar8 = (undefined8 *)plVar10[2];
        if (puVar8 != puVar8 + *(uint *)(plVar10 + 3)) {
          do {
            FUN_1450eb0b0(*puVar8,fVar14,&local_3c0,1);
            puVar8 = puVar8 + 1;
          } while (puVar8 != (undefined8 *)(plVar10[2] + (ulonglong)*(uint *)(plVar10 + 3) * 8));
        }
      }
LAB_145541a00:
      plVar10 = plVar10 + 4;
    } while (plVar10 !=
             (longlong *)
             ((ulonglong)*(uint *)(param_1 + 0x60) * 0x20 + *(longlong *)(param_1 + 0x58)));
  }
  return;
}



// FUNCTION 145541a60 FUN_145541a60 body=517 status=ok
// SIG undefined FUN_145541a60(void)

undefined4 * FUN_145541a60(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[0x1f] = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined2 *)(param_2 + 0x26) = 0xff00;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  FUN_1450896a0(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x5e) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xba) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 99) = 0;
  *(undefined8 *)(param_2 + 0x65) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x42) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  param_2[0x48] = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x5a) = 0;
  *(undefined8 *)(param_2 + 0x4b) = 0;
  *(undefined8 *)(param_2 + 0x4d) = 0;
  *(byte *)((longlong)param_2 + 0x173) = *(byte *)((longlong)param_2 + 0x173) & 0xf8;
  *(undefined1 *)((longlong)param_2 + 0x172) = 0;
  param_2[0x4f] = 0;
  *(undefined2 *)(param_2 + 0x5c) = 0;
  param_2[0x4a] = 0x3f800000;
  param_2[0x60] = 0;
  *(undefined8 *)(param_2 + 0x62) = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  param_2[0x66] = 0;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xbe) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) & 0xfe;
  param_2[0xc2] = 0;
  param_2[0xe] = 0;
  *param_2 = 0;
  *(byte *)(param_2 + 0xc4) = *(byte *)(param_2 + 0xc4) & 0xf3 | 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40);
  lVar4 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  *(longlong *)(param_2 + 2) = lVar4;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10);
  param_3[1] = 4;
  *param_3 = 0;
  *(undefined4 **)(param_2 + 6) = param_3;
  lVar2 = *(longlong *)(param_1 + 0x48);
  param_2[0xd] = *(undefined4 *)(lVar2 + 0x54);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(lVar2 + 0x48);
  param_2[0xc] = *(undefined4 *)(lVar2 + 0x50);
  piVar3 = *(int **)(lVar2 + 0x40);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_144d4a460();
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(int **)(param_2 + 8) = piVar3;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x58);
  *(byte *)(param_2 + 0xc4) = *(byte *)(param_2 + 0xc4) | 8;
  param_2[0x20] = uVar1;
  param_2[0x21] = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_2[0x24] = 0;
  return param_2;
}



// FUNCTION 145541c80 FUN_145541c80 body=100 status=ok
// SIG undefined FUN_145541c80(void)

undefined8 * FUN_145541c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453734e0(puVar1);
    *(undefined1 *)((longlong)puVar1 + 0x4c) = 8;
    *puVar1 = &PTR_FUN_149da9948;
    puVar1[3] = &PTR_FUN_149da9968;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145541cf0 FUN_145541cf0 body=289 status=ok
// SIG undefined FUN_145541cf0(void)

ulonglong FUN_145541cf0(longlong param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uStackX_14;
  
  *param_2 = *param_2 + 4;
  uVar8 = FUN_145542940(param_2,param_3,param_1);
  if ((int)uVar8 == 1) {
    piVar5 = (int *)*param_2;
    iVar1 = *piVar5;
    *param_2 = (longlong)(piVar5 + 1);
    cVar7 = (char)piVar5[1];
    *param_2 = (longlong)piVar5 + 5;
    if ((*(char *)(param_1 + 0x4c) != cVar7) || (*(int *)(param_1 + 0x48) != iVar1)) {
      uStackX_14 = CONCAT31(uStackX_14._1_3_,cVar7);
      *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStackX_14,iVar1);
      FUN_1455422e0(param_1,0,0);
    }
    uVar8 = 1;
    uVar2 = *(uint *)*param_2;
    *param_2 = (longlong)((uint *)*param_2 + 1);
    if (uVar2 == 0) {
      uVar8 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x3c) < uVar2) {
        cVar7 = FUN_1455426b0(param_1 + 0x30,uVar2 - *(uint *)(param_1 + 0x3c));
        uVar9 = 0x34;
        if (cVar7 != '\0') {
          uVar9 = 1;
        }
        uVar8 = (ulonglong)uVar9;
        if (cVar7 == '\0') {
          return (ulonglong)uVar9;
        }
      }
      uVar9 = 0;
      if (uVar2 != 0) {
        do {
          puVar6 = (undefined4 *)*param_2;
          uVar3 = *puVar6;
          *param_2 = (longlong)(puVar6 + 1);
          uVar4 = puVar6[1];
          *param_2 = (longlong)(puVar6 + 2);
          uVar8 = FUN_145542370(param_1,uVar3,puVar6 + 2,uVar4);
          if ((int)uVar8 != 1) {
            return uVar8;
          }
          uVar9 = uVar9 + 1;
          *param_2 = *param_2 + (ulonglong)uVar4 * 0xc;
          *param_3 = *param_3 + uVar4 * -0xc;
        } while (uVar9 < uVar2);
      }
    }
  }
  return uVar8;
}



// FUNCTION 145541e20 FUN_145541e20 body=130 status=ok
// SIG undefined FUN_145541e20(void)

void FUN_145541e20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = param_1 + 0x18;
  local_18 = 0;
  FUN_14507d830(DAT_14c791028,&local_28,param_1 + 0x20,param_2,param_3);
  if (*(char *)(param_1 + 0x4c) == '\x04') {
    FUN_14507da20(DAT_14c791028,&local_28,*(undefined4 *)(param_1 + 0x48),param_2,param_3);
  }
  return;
}



// FUNCTION 145541eb0 FUN_145541eb0 body=31 status=ok
// SIG undefined FUN_145541eb0(void)

undefined8 FUN_145541eb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14507dee0(param_1 + 8,param_3,param_2);
  return 1;
}



// FUNCTION 145541ed0 FUN_145541ed0 body=1032 status=ok
// SIG undefined FUN_145541ed0(void)

undefined8
FUN_145541ed0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int *piVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined8 uVar11;
  int *piVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  undefined4 local_res8 [2];
  float local_98;
  undefined4 local_94 [3];
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  local_80 = *(undefined4 *)(param_1 + 0x10);
  local_84 = 1;
  pfVar15 = (float *)0x0;
  local_88 = 0;
  FUN_1450d9430(param_5,param_1 + 0x20,&local_88,param_3);
  iVar17 = 1;
  if (*(int *)(param_1 + 0x48) != 0) {
    piVar12 = *(int **)(param_1 + 0x30);
    piVar8 = piVar12 + (ulonglong)*(uint *)(param_1 + 0x38) * 4;
    for (; (piVar12 != piVar8 && (*piVar12 != *(int *)(param_2 + 0x20))); piVar12 = piVar12 + 4) {
    }
    if (*(longlong *)(*(longlong *)(piVar12 + 2) + 0x10) != 0) {
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0xff;
      local_48 = 0xff;
      local_40 = 0;
      FUN_14507fa00(g_pGameSyncMgr,*(undefined8 *)(param_1 + 0x48),param_5,local_94,&local_68);
      bVar18 = local_68 != 0;
      lVar6 = *(longlong *)(piVar12 + 2);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        fVar19 = 0.0;
      }
      else {
        local_res8[0] = *(undefined4 *)(lVar6 + 0x20);
        local_98 = 0.0;
        FUN_1450737c0(lVar6 + 0x10,local_94[0],local_res8,&local_98);
        *(undefined4 *)(lVar6 + 0x20) = local_res8[0];
        fVar19 = local_98;
        if ((local_98 == 1.0) && (!bVar18)) goto LAB_1455420b5;
      }
      uVar13 = (ulonglong)*(uint *)(param_4 + 1);
      uVar16 = bVar18 ^ 1;
      uStack_70 = uVar16 | uStack_70 & 0xffffff00;
      plVar9 = (longlong *)*param_4;
      plVar1 = plVar9 + uVar13 * 3;
      while ((plVar9 != plVar1 &&
             ((*plVar9 != param_1 || ((((byte)uVar16 ^ (byte)(int)plVar9[1]) & 1) != 0))))) {
        plVar9 = plVar9 + 3;
      }
      pfVar10 = (float *)(plVar9 + 2);
      if (plVar9 == plVar1) {
        pfVar10 = pfVar15;
      }
      local_78 = param_1;
      if (pfVar10 == (float *)0x0) {
        uVar16 = *(uint *)((longlong)param_4 + 0xc);
        if (uVar16 <= uVar13) {
          iVar5 = (uVar16 >> 1) + uVar16;
          if (uVar16 == 0) {
            iVar5 = iVar17;
          }
          cVar7 = FUN_145089db0(param_4,iVar5);
          if (cVar7 == '\0') goto LAB_1455420b5;
        }
        if (uVar13 < *(uint *)((longlong)param_4 + 0xc)) {
          uVar16 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar16 + 1;
          puVar2 = (undefined4 *)(*param_4 + (ulonglong)uVar16 * 0x18);
          if (puVar2 != (undefined4 *)0x0) {
            puVar2[4] = fVar19;
            *puVar2 = (undefined4)local_78;
            puVar2[1] = local_78._4_4_;
            puVar2[2] = uStack_70;
            puVar2[3] = uStack_6c;
          }
        }
      }
      else {
        *pfVar10 = fVar19;
      }
    }
  }
LAB_1455420b5:
  if (param_6 == 0) {
LAB_145542285:
    uVar11 = 1;
  }
  else {
    uVar16 = *(uint *)(param_6 + 0x148);
    uVar4 = *(uint *)(param_6 + 0x14c);
    if (uVar16 < uVar4) {
LAB_1455420ee:
      if (uVar16 < *(uint *)(param_6 + 0x14c)) {
        puVar3 = (undefined8 *)
                 (*(longlong *)(param_6 + 0x140) + (ulonglong)*(uint *)(param_6 + 0x148) * 0x28);
        *(uint *)(param_6 + 0x148) = *(uint *)(param_6 + 0x148) + 1;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          pfVar10 = (float *)(param_1 + 0x18);
          if (param_1 == 0) {
            pfVar10 = pfVar15;
          }
          puVar3[1] = pfVar10;
          *puVar3 = *(undefined8 *)(param_1 + 0x40);
          FUN_14507dbc0(param_1 + 0x20);
          lVar6 = DAT_14c791060;
          if (*(char *)(param_1 + 0x4c) != '\x04') goto LAB_145542285;
          fVar19 = *(float *)(param_1 + 0x48);
          do {
            while (iVar5 = *(int *)(lVar6 + 0x268), iVar5 < 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x270));
              if (*(int *)(lVar6 + 0x268) < 0) goto LAB_145542187;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x270));
            }
            LOCK();
            bVar18 = iVar5 == *(int *)(lVar6 + 0x268);
            if (bVar18) {
              *(int *)(lVar6 + 0x268) = iVar5 + 1;
            }
            UNLOCK();
          } while (!bVar18);
LAB_145542187:
          if (*(uint *)(lVar6 + 0x2b0) != 0) {
            for (pfVar10 = *(float **)
                            (*(longlong *)(lVar6 + 0x2a8) +
                            ((ulonglong)(uint)fVar19 % (ulonglong)*(uint *)(lVar6 + 0x2b0)) * 8);
                (pfVar14 = pfVar15, pfVar10 != (float *)0x0 &&
                (pfVar14 = pfVar10, pfVar10[4] != fVar19)); pfVar10 = *(float **)(pfVar10 + 2)) {
            }
            pfVar15 = pfVar14;
            if (pfVar14 != (float *)0x0) {
              LOCK();
              pfVar14[5] = (float)((int)pfVar14[5] + 1);
              UNLOCK();
            }
          }
          iVar5 = *(int *)(lVar6 + 0x268);
          while (-1 < iVar5) {
            LOCK();
            bVar18 = iVar5 == *(int *)(lVar6 + 0x268);
            if (bVar18) {
              *(int *)(lVar6 + 0x268) = iVar5 + -1;
            }
            UNLOCK();
            if (bVar18) {
              if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar6 + 0x298))) {
                SetEvent(*(HANDLE *)(lVar6 + 0x2a0));
              }
              goto LAB_145542228;
            }
            iVar5 = *(int *)(lVar6 + 0x268);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x270));
LAB_145542228:
          uVar16 = *(uint *)(puVar3 + 4);
          uVar4 = *(uint *)((longlong)puVar3 + 0x24);
          if (uVar16 < uVar4) {
LAB_14554224b:
            if (uVar16 < *(uint *)((longlong)puVar3 + 0x24)) {
              uVar16 = *(uint *)(puVar3 + 4);
              *(uint *)(puVar3 + 4) = uVar16 + 1;
              puVar3 = (undefined8 *)(puVar3[3] + (ulonglong)uVar16 * 8);
              if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = pfVar15;
                LOCK();
                pfVar15[5] = (float)((int)pfVar15[5] + 1);
                UNLOCK();
              }
            }
          }
          else {
            iVar5 = (uVar4 >> 1) + uVar4;
            if (uVar4 == 0) {
              iVar5 = iVar17;
            }
            cVar7 = FUN_14507d5a0(puVar3 + 3,iVar5);
            if (cVar7 != '\0') goto LAB_14554224b;
          }
          LOCK();
          pfVar10 = pfVar15 + 5;
          fVar19 = *pfVar10;
          *pfVar10 = (float)((int)*pfVar10 + -1);
          UNLOCK();
          if (fVar19 == 1.4013e-45) {
            (**(code **)(*(longlong *)pfVar15 + 0x18))(pfVar15);
          }
          goto LAB_145542285;
        }
      }
    }
    else {
      iVar5 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar5 = iVar17;
      }
      cVar7 = FUN_145089fb0(param_6,iVar5);
      if (cVar7 != '\0') goto LAB_1455420ee;
    }
    uVar11 = 0x34;
  }
  return uVar11;
}



// FUNCTION 1455422e0 FUN_1455422e0 body=139 status=ok
// SIG undefined FUN_1455422e0(void)

void FUN_1455422e0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + lVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8);
      if (((plVar1 != (longlong *)0x0) && (plVar1[0xe] != 0)) &&
         (0 < *(short *)(plVar1[0xe] + 0xd0))) {
        (**(code **)(*plVar1 + 0x180))(plVar1,param_2,param_3);
      }
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + *(longlong *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 145542370 FUN_145542370 body=416 status=ok
// SIG undefined FUN_145542370(void)

int FUN_145542370(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  piVar5 = *(int **)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x38);
  piVar8 = piVar5 + (ulonglong)uVar1 * 4;
  piVar7 = piVar5;
  if (piVar5 != piVar8) {
    do {
      if (*piVar7 == param_2) {
        piVar5 = *(int **)(piVar7 + 2);
        goto LAB_1455423d5;
      }
      piVar7 = piVar7 + 4;
    } while (piVar7 != piVar8);
    do {
      if (*piVar5 == param_2) break;
      piVar5 = piVar5 + 4;
    } while (piVar5 != piVar8);
  }
  piVar7 = piVar5 + 2;
  if (piVar5 == piVar8) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 == (int *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= uVar1) {
      if (uVar2 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = (uVar2 >> 1) + uVar2;
      }
      cVar4 = FUN_1455426b0((longlong *)(param_1 + 0x30),iVar6);
      if (cVar4 == '\0') goto LAB_1455424e3;
    }
    if (*(uint *)(param_1 + 0x3c) <= uVar1) goto LAB_1455424e3;
    uVar1 = *(uint *)(param_1 + 0x38);
    piVar7 = (int *)0x0;
    *(uint *)(param_1 + 0x38) = uVar1 + 1;
    piVar5 = (int *)((ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
    if (piVar5 != (int *)0x0) {
      *piVar5 = param_2;
      piVar7 = piVar5 + 2;
    }
  }
  if (piVar7 != (int *)0x0) {
    piVar5 = AK::MemoryMgr::Malloc(0x10,0x30);
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[8] = 1;
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      *(int **)piVar7 = piVar5;
      *piVar5 = param_2;
      iVar6 = FUN_145540980(piVar5,param_1);
      if (iVar6 != 1) {
        FUN_145542760(param_1 + 0x30,param_2);
        AK::MemoryMgr::Free(0x10,piVar5);
        return iVar6;
      }
LAB_1455423d5:
      iVar6 = FUN_145540b60(piVar5,param_3,param_4);
      plVar3 = *(longlong **)(piVar5 + 2);
      if (plVar3 == (longlong *)0x0) {
        return iVar6;
      }
      (**(code **)(*plVar3 + 0x180))(plVar3,0,0);
      return iVar6;
    }
    piVar7[0] = 0;
    piVar7[1] = 0;
  }
LAB_1455424e3:
  FUN_145542760(param_1 + 0x30,param_2);
  return 0x34;
}



// FUNCTION 145542510 FUN_145542510 body=124 status=ok
// SIG undefined FUN_145542510(void)

void FUN_145542510(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x30);
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 0x38) * 4;
  if (piVar4 != piVar5) {
    while (*piVar4 != param_2) {
      piVar4 = piVar4 + 4;
      if (piVar4 == piVar5) {
        return;
      }
    }
    lVar1 = *(longlong *)(piVar4 + 2);
    if (((*(longlong *)(lVar1 + 8) != 0) && (param_1 != 0)) &&
       (iVar3 = FUN_14536f0c0(*(longlong *)(lVar1 + 8),param_1), iVar3 != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = 0;
      FUN_145397520(*(undefined8 *)(param_1 + 0x40),param_1,lVar1,uVar2);
    }
  }
  return;
}



// FUNCTION 145542590 FUN_145542590 body=219 status=ok
// SIG undefined FUN_145542590(void)

void FUN_145542590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (lVar4 = *(longlong *)(param_1 + 0x30),
     lVar4 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + lVar4)) {
    do {
      lVar1 = *(longlong *)(lVar4 + 8);
      if ((*(longlong *)(lVar1 + 8) != 0) &&
         (iVar3 = FUN_14536f0c0(*(longlong *)(lVar1 + 8),param_1), iVar3 != 0)) {
        uVar2 = *(undefined8 *)(lVar1 + 8);
        *(undefined8 *)(lVar1 + 8) = 0;
        FUN_145397520(*(undefined8 *)(param_1 + 0x40),param_1,lVar1,uVar2);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + *(longlong *)(param_1 + 0x30));
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  if ((param_2 != 0) &&
     (lVar4 = *(longlong *)(param_1 + 0x30),
     lVar4 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + lVar4)) {
    do {
      FUN_145540980(*(undefined8 *)(lVar4 + 8),param_1);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + *(longlong *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 145542670 FUN_145542670 body=50 status=ok
// SIG undefined FUN_145542670(void)

void FUN_145542670(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x30);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x38) * 4;
  if (piVar2 == piVar1) {
    return;
  }
  do {
    if (*piVar2 == param_2) {
      FUN_145540980(*(undefined8 *)(piVar2 + 2),param_1);
      return;
    }
    piVar2 = piVar2 + 4;
  } while (piVar2 != piVar1);
  return;
}



// FUNCTION 1455426b0 FUN_1455426b0 body=174 status=ok
// SIG undefined FUN_1455426b0(void)

undefined8 FUN_1455426b0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  __uint64 _Var4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  _Var4 = (ulonglong)uVar5 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var4);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      if (uVar6 != 0) {
        lVar3 = 0;
        do {
          uVar1 = ((undefined8 *)(lVar3 + *param_1))[1];
          *(undefined8 *)(lVar3 + (longlong)pvVar2) = *(undefined8 *)(lVar3 + *param_1);
          ((undefined8 *)(lVar3 + (longlong)pvVar2))[1] = uVar1;
          uVar6 = uVar6 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var4);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 145542760 FUN_145542760 body=96 status=ok
// SIG undefined FUN_145542760(void)

void FUN_145542760(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)*param_1;
  _Dst = piVar1;
  if (piVar1 != piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4) {
    while (*_Dst != param_2) {
      _Dst = _Dst + 4;
      if (_Dst == piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4) {
        return;
      }
    }
    if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 4) {
      memmove(_Dst,_Dst + 4,
              (ulonglong)
              ((int)(piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 4) - (int)_Dst & 0xfffffff0)
             );
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  }
  return;
}



// FUNCTION 1455427c0 FUN_1455427c0 body=378 status=ok
// SIG undefined FUN_1455427c0(void)

undefined8 * FUN_1455427c0(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_149da9948;
  param_1[3] = &PTR_FUN_149da9968;
  pvVar6 = (void *)param_1[6];
  pvVar5 = pvVar6;
  if (pvVar6 != (void *)((ulonglong)*(uint *)(param_1 + 7) * 0x10 + (longlong)pvVar6)) {
    do {
      puVar1 = *(undefined4 **)((longlong)pvVar5 + 8);
      if ((*(longlong *)(puVar1 + 2) != 0) &&
         (iVar4 = FUN_14536f0c0(*(longlong *)(puVar1 + 2),param_1), iVar4 != 0)) {
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(puVar1 + 2) = 0;
        FUN_145397520(param_1[8],param_1,puVar1,uVar2);
      }
      puVar3 = *(undefined8 **)(puVar1 + 10);
      *puVar1 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        if ((void *)*puVar3 != (void *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 0;
          AK::MemoryMgr::Free(0,(void *)*puVar3);
          *puVar3 = 0;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        if (*(void **)(puVar1 + 10) != (void *)0x0) {
          AK::MemoryMgr::Free(2,*(void **)(puVar1 + 10));
        }
        *(undefined8 *)(puVar1 + 10) = 0;
      }
      if (*(void **)(puVar1 + 4) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)(puVar1 + 4));
      }
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 1;
      if (*(void **)((longlong)pvVar5 + 8) != (void *)0x0) {
        AK::MemoryMgr::Free(0x10,*(void **)((longlong)pvVar5 + 8));
      }
      pvVar5 = (void *)((longlong)pvVar5 + 0x10);
      pvVar6 = (void *)param_1[6];
    } while (pvVar5 != (void *)((ulonglong)*(uint *)(param_1 + 7) * 0x10 + (longlong)pvVar6));
  }
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    AK::MemoryMgr::Free(0,pvVar6);
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  FUN_1453526b0(param_1 + 4);
  FUN_1453525f0(param_1 + 4);
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145542940 FUN_145542940 body=541 status=ok
// SIG undefined FUN_145542940(void)

undefined8 FUN_145542940(longlong *param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  
  uVar4 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  uVar15 = (uint)uVar4;
  if (uVar15 == 0) {
    return 1;
  }
  plVar1 = (longlong *)(param_3 + 0x20);
  uVar14 = 0;
  if (uVar15 <= *(uint *)(param_3 + 0x2c)) goto LAB_145542a1c;
  uVar16 = *(uint *)(param_3 + 0x28);
  if ((void *)*plVar1 == (void *)0x0) {
    pvVar10 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar4 << 3);
    bVar8 = false;
    if (pvVar10 != (void *)0x0) {
      if (((void *)*plVar1 != (void *)0x0) && ((void *)*plVar1 != pvVar10)) {
        uVar13 = uVar14;
        if ((ulonglong)uVar16 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar10 + uVar13 * 8) = *(undefined8 *)(*plVar1 + uVar13 * 8);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar16);
        }
        AK::MemoryMgr::Free(0,(void *)*plVar1);
      }
      goto LAB_1455429fd;
    }
  }
  else {
    pvVar10 = AK::MemoryMgr::Realloc(0,(void *)*plVar1,(ulonglong)uVar4 << 3);
    if (pvVar10 == (void *)0x0) {
      bVar8 = false;
    }
    else {
LAB_1455429fd:
      *plVar1 = (longlong)pvVar10;
      bVar8 = true;
      *(uint *)(param_3 + 0x2c) = uVar15;
    }
  }
  if (!bVar8) {
    return 0x34;
  }
LAB_145542a1c:
  if (uVar4 != 0) {
    do {
      puVar7 = (undefined4 *)*param_1;
      uVar5 = *puVar7;
      *param_1 = (longlong)(puVar7 + 1);
      uVar2 = *(undefined1 *)(puVar7 + 1);
      *param_1 = (longlong)puVar7 + 5;
      cVar9 = *(char *)((longlong)puVar7 + 5);
      *param_1 = (longlong)puVar7 + 6;
      bVar3 = *(byte *)((longlong)puVar7 + 6);
      pbVar11 = (byte *)((longlong)puVar7 + 7);
      *param_1 = (longlong)pbVar11;
      uVar16 = bVar3 & 0x7f;
      while ((char)bVar3 < '\0') {
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        *param_1 = (longlong)pbVar11;
        uVar16 = bVar3 & 0x7f | uVar16 << 7;
      }
      uVar6 = *(undefined4 *)pbVar11;
      *param_1 = (longlong)(pbVar11 + 4);
      bVar3 = pbVar11[4];
      *param_1 = (longlong)(pbVar11 + 5);
      uVar4 = *(ushort *)(pbVar11 + 5);
      *param_1 = (longlong)(pbVar11 + 7);
      if ((cVar9 == '\x06') && (cVar9 = '\x02', DAT_14c791034 == 1)) {
        cVar9 = '\x05';
      }
      uVar12 = FUN_145352770(plVar1,2,*(undefined4 *)(param_3 + 0x10),uVar5,uVar2,cVar9,uVar16,uVar6
                             ,bVar3,pbVar11 + 7,(uint)uVar4,local_res8);
      if ((int)uVar12 != 1) {
        return uVar12;
      }
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      *param_1 = *param_1 + (ulonglong)uVar4 * 0xc;
      *param_2 = *param_2 + (uint)uVar4 * -0xc;
    } while (uVar16 < uVar15);
  }
  return 1;
}



// FUNCTION 145542b60 FUN_145542b60 body=467 status=ok
// SIG undefined FUN_145542b60(void)

undefined8 FUN_145542b60(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  uVar10 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar10 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
      uVar9 = 0;
      if (3 < uVar7) {
        puVar5 = (undefined8 *)((longlong)pvVar4 + 8);
        lVar8 = (uVar7 - 4 >> 2) + 1;
        uVar9 = lVar8 * 4;
        do {
          puVar1 = puVar5 + -1;
          if (puVar1 != (undefined8 *)0x0) {
            *(undefined4 *)puVar1 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar5 + -4) = 0x7f7fffff;
          }
          *puVar1 = *(undefined8 *)((longlong)puVar5 + *param_1 + (-8 - (longlong)pvVar4));
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined4 *)puVar5 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar5 + 4) = 0x7f7fffff;
          }
          lVar2 = (8 - (longlong)pvVar4) + (longlong)puVar5;
          *puVar5 = *(undefined8 *)((longlong)puVar5 + *param_1 + 8 + (-8 - (longlong)pvVar4));
          if (lVar2 + (longlong)pvVar4 != 0) {
            *(undefined4 *)(puVar5 + 1) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0x7f7fffff;
          }
          lVar3 = (0x10 - (longlong)pvVar4) + (longlong)puVar5;
          puVar5[1] = *(undefined8 *)(*param_1 + lVar2);
          if (lVar3 + (longlong)pvVar4 != 0) {
            *(undefined4 *)(puVar5 + 2) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar5 + 0x14) = 0x7f7fffff;
          }
          puVar5[2] = *(undefined8 *)(*param_1 + lVar3);
          puVar5 = puVar5 + 4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (uVar9 < uVar7) {
        puVar5 = (undefined8 *)((longlong)pvVar4 + uVar9 * 8);
        lVar8 = uVar7 - uVar9;
        do {
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined4 *)puVar5 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar5 + 4) = 0x7f7fffff;
          }
          *puVar5 = *(undefined8 *)((*param_1 - (longlong)pvVar4) + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar10;
  return 1;
}



// FUNCTION 145542d40 FUN_145542d40 body=43 status=ok
// SIG undefined FUN_145542d40(void)

undefined8 * FUN_145542d40(undefined8 *param_1)

{
  FUN_1453696d0();
  *param_1 = &PTR_FUN_149da9970;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145542d70 FUN_145542d70 body=115 status=ok
// SIG undefined FUN_145542d70(void)

void FUN_145542d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149da9970;
  if ((void *)param_1[7] != (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[7]);
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  return;
}



// FUNCTION 145542df0 FUN_145542df0 body=189 status=ok
// SIG undefined FUN_145542df0(void)

int FUN_145542df0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  char cStackX_14;
  
  piVar5 = *(int **)(param_1 + 0x38);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x40);
  piVar1 = piVar5 + uVar7 * 2;
  if (piVar5 != piVar1) {
    cStackX_14 = (char)((ulonglong)param_2 >> 0x20);
    do {
      if (((int)param_2 == *piVar5) && (cStackX_14 == (char)piVar5[1])) break;
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar1);
  }
  piVar8 = (int *)0x0;
  piVar6 = piVar8;
  if (piVar5 != piVar1) {
    piVar6 = piVar5;
  }
  if (piVar6 != (int *)0x0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 <= uVar7) {
    iVar3 = (uVar2 >> 1) + uVar2;
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    cVar4 = FUN_145543050((longlong *)(param_1 + 0x38),iVar3);
    if (cVar4 == '\0') goto LAB_145542e90;
  }
  if (uVar7 < *(uint *)(param_1 + 0x44)) {
    uVar2 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar2 + 1;
    piVar8 = (int *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar2 * 8);
    if (piVar8 != (int *)0x0) {
      *(undefined8 *)piVar8 = param_2;
    }
  }
LAB_145542e90:
  return 2 - (uint)(piVar8 != (int *)0x0);
}



// FUNCTION 145542eb0 FUN_145542eb0 body=103 status=ok
// SIG undefined FUN_145542eb0(void)

void FUN_145542eb0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *_Dst;
  char cStackX_14;
  
  piVar2 = *(int **)(param_1 + 0x38);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
  _Dst = piVar2;
  if (piVar2 != piVar1) {
    cStackX_14 = (char)((ulonglong)param_2 >> 0x20);
    do {
      if (((int)param_2 == *_Dst) && (cStackX_14 == (char)_Dst[1])) break;
      _Dst = _Dst + 2;
    } while (_Dst != piVar1);
  }
  if (_Dst != piVar1) {
    if (_Dst < piVar2 + (ulonglong)(*(uint *)(param_1 + 0x40) - 1) * 2) {
      memmove(_Dst,_Dst + 2,
              (ulonglong)
              ((int)(piVar2 + (ulonglong)(*(uint *)(param_1 + 0x40) - 1) * 2) - (int)_Dst &
              0xfffffff8));
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  return;
}



// FUNCTION 145542f30 FUN_145542f30 body=275 status=ok
// SIG undefined FUN_145542f30(void)

undefined8 FUN_145542f30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uStackX_c;
  
  bVar2 = *(byte *)*param_2;
  pbVar10 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar10;
  uVar9 = bVar2 & 0x7f;
  while ((char)bVar2 < '\0') {
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    *param_2 = (longlong)pbVar10;
    uVar9 = bVar2 & 0x7f | uVar9 << 7;
  }
  if ((*(uint *)(param_1 + 0x44) < uVar9) &&
     (cVar6 = FUN_145543050(param_1 + 0x38,uVar9 - *(uint *)(param_1 + 0x44)), cVar6 == '\0')) {
    return 2;
  }
  if (uVar9 != 0) {
    uVar8 = (ulonglong)uVar9;
    do {
      puVar5 = (undefined4 *)*param_2;
      uVar3 = *puVar5;
      *param_2 = (longlong)(puVar5 + 1);
      cVar6 = *(char *)(puVar5 + 1);
      *param_2 = (longlong)puVar5 + 5;
      uVar9 = *(uint *)(param_1 + 0x40);
      uVar4 = *(uint *)(param_1 + 0x44);
      uStackX_c = CONCAT31(uStackX_c._1_3_,cVar6 != '\0');
      if (uVar9 < uVar4) {
LAB_145543003:
        if (uVar9 < *(uint *)(param_1 + 0x44)) {
          uVar9 = *(uint *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = uVar9 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar9 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = CONCAT44(uStackX_c,uVar3);
          }
        }
      }
      else {
        iVar7 = (uVar4 >> 1) + uVar4;
        if (uVar4 == 0) {
          iVar7 = 1;
        }
        cVar6 = FUN_145543050(param_1 + 0x38,iVar7);
        if (cVar6 != '\0') goto LAB_145543003;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 1;
}



// FUNCTION 145543050 FUN_145543050 body=170 status=ok
// SIG undefined FUN_145543050(void)

undefined8 FUN_145543050(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 145543100 FUN_145543100 body=150 status=ok
// SIG undefined FUN_145543100(void)

undefined8 * FUN_145543100(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9970;
  if ((void *)param_1[7] != (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[7]);
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1455431a0 FUN_1455431a0 body=33 status=ok
// SIG undefined FUN_1455431a0(void)

undefined8 * FUN_1455431a0(undefined8 *param_1)

{
  FUN_145542d40();
  *param_1 = &PTR_FUN_149da99d8;
  return param_1;
}



// FUNCTION 1455431d0 FUN_1455431d0 body=15 status=ok
// SIG undefined FUN_1455431d0(void)

void FUN_1455431d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149da99d8;
  FUN_145542d70();
  return;
}



// FUNCTION 1455431e0 FUN_1455431e0 body=205 status=ok
// SIG undefined FUN_1455431e0(void)

undefined8 FUN_1455431e0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined8 local_10;
  
  plVar3 = (longlong *)FUN_145369e40();
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0xf;
  }
  else {
    local_20 = *(byte *)((longlong)param_1 + 0x36) & 0x1f;
    local_1c = 0;
    local_18 = 0;
    local_10 = 0;
    local_38[0] = param_2;
    local_30 = param_3;
    local_28 = param_4;
    local_24 = FUN_145369980(param_1);
    (**(code **)(*param_1 + 0x68))(param_1,local_38);
    (**(code **)(*plVar3 + 0x80))(plVar3,local_38);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(plVar3[2] + 0x18))();
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1455432b0 FUN_1455432b0 body=163 status=ok
// SIG undefined FUN_1455432b0(void)

void FUN_1455432b0(longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  longlong *local_18;
  
  local_28 = local_28 & 0xffffff00;
  uStack_20 = 0;
  iStack_2c = (uint)(param_3 == 0) << 8;
  uStack_30 = *(byte *)((longlong)param_1 + 0x36) & 0x1f;
  local_18 = param_1 + 7;
  local_48 = param_2;
  lStack_40 = param_3;
  local_38 = param_4;
  uStack_34 = FUN_145369980();
  (**(code **)(*param_1 + 0x68))(param_1,&local_48);
  local_78 = CONCAT44(uStack_44,local_48);
  lStack_70 = lStack_40;
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  iStack_5c = iStack_2c;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = (undefined4)uStack_20;
  uStack_4c = uStack_20._4_4_;
  FUN_145543360(param_1,&local_78);
  FUN_14508d3c0(&local_48);
  return;
}



// FUNCTION 145543360 FUN_145543360 body=505 status=ok
// SIG undefined FUN_145543360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145543360(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  HANDLE hEvent;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  bool bVar19;
  undefined1 auStack_38 [32];
  longlong *plVar12;
  longlong *plVar18;
  
  lVar5 = DAT_14c791060;
  if (*(char *)(param_2 + 8) != '\0') {
    plVar14 = (longlong *)0x0;
    uVar17 = 0;
    do {
      while (iVar2 = *(int *)(lVar5 + 0x2c0), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x2c8));
        if (*(int *)(lVar5 + 0x2c0) < 0) goto LAB_1455433b7;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x2c8));
      }
      LOCK();
      bVar19 = iVar2 == *(int *)(lVar5 + 0x2c0);
      if (bVar19) {
        *(int *)(lVar5 + 0x2c0) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar19);
LAB_1455433b7:
    puVar13 = auStack_38;
    plVar16 = plVar14;
    if (*(uint *)(lVar5 + 0x310) != 0) {
      uVar8 = (ulonglong)*(uint *)(lVar5 + 0x310) * 8;
      uVar9 = uVar8 + 0xf;
      if (uVar9 <= uVar8) {
        uVar9 = 0xffffffffffffff0;
      }
      lVar7 = -(uVar9 & 0xfffffffffffffff0);
      plVar16 = (longlong *)(&stack0xffffffffffffffe8 + lVar7);
      puVar13 = auStack_38 + lVar7;
      if (*(uint *)(lVar5 + 0x308) != 0) {
        lVar10 = **(longlong **)(lVar5 + 0x300);
        plVar12 = plVar14;
        while (plVar15 = plVar16, plVar18 = plVar14, lVar10 == 0) {
          uVar11 = (int)plVar12 + 1;
          plVar12 = (longlong *)(ulonglong)uVar11;
          puVar13 = auStack_38 + lVar7;
          if (*(uint *)(lVar5 + 0x308) <= uVar11) goto LAB_14554349f;
          lVar10 = (*(longlong **)(lVar5 + 0x300))[(longlong)plVar12];
        }
        do {
          while( true ) {
            *plVar15 = lVar10;
            LOCK();
            *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
            UNLOCK();
            lVar10 = *(longlong *)(lVar10 + 8);
            plVar15 = plVar15 + 1;
            uVar17 = (int)plVar18 + 1;
            plVar18 = (longlong *)(ulonglong)uVar17;
            if (lVar10 != 0) break;
            do {
              uVar11 = (int)plVar12 + 1;
              plVar12 = (longlong *)(ulonglong)uVar11;
              if (*(uint *)(lVar5 + 0x308) <= uVar11) goto LAB_14554349a;
              lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x300) + (longlong)plVar12 * 8);
            } while (lVar10 == 0);
          }
LAB_14554349a:
          puVar13 = auStack_38 + lVar7;
        } while (lVar10 != 0);
      }
    }
LAB_14554349f:
    iVar2 = *(int *)(lVar5 + 0x2c0);
    while (-1 < iVar2) {
      LOCK();
      bVar19 = iVar2 == *(int *)(lVar5 + 0x2c0);
      if (bVar19) {
        *(int *)(lVar5 + 0x2c0) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar19) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar5 + 0x2f0))) {
          hEvent = *(HANDLE *)(lVar5 + 0x2f8);
          *(undefined8 *)(puVar13 + -8) = 0x145543554;
          SetEvent(hEvent);
        }
        goto LAB_1455434d4;
      }
      iVar2 = *(int *)(lVar5 + 0x2c0);
    }
    *(undefined8 *)(puVar13 + -8) = 0x1455434d4;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x2c8));
LAB_1455434d4:
    if (0 < (int)uVar17) {
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar3 = *param_2;
      do {
        lVar5 = plVar16[(longlong)plVar14];
        *(undefined8 *)(puVar13 + -8) = 0x1455434ff;
        FUN_1450aeeb0(lVar5,uVar3,uVar4);
        plVar12 = (longlong *)plVar16[(longlong)plVar14];
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar6 = *(code **)(*plVar12 + 0x18);
          *(undefined8 *)(puVar13 + -8) = 0x145543518;
          (*pcVar6)();
        }
        plVar14 = (longlong *)((longlong)plVar14 + 1);
      } while ((longlong)plVar14 < (longlong)(int)uVar17);
    }
  }
  return;
}



// FUNCTION 145543560 FUN_145543560 body=94 status=ok
// SIG undefined FUN_145543560(void)

void FUN_145543560(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  *(byte *)((longlong)param_1 + 0x36) =
       *(byte *)((longlong)param_1 + 0x36) ^ (*(byte *)((longlong)param_1 + 0x36) ^ bVar1) & 0x1f;
  iVar2 = (**(code **)(*param_1 + 0x48))();
  if (iVar2 == 1) {
    FUN_145542f30(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1455435c0 FUN_1455435c0 body=62 status=ok
// SIG undefined FUN_1455435c0(void)

undefined8 * FUN_1455435c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da99d8;
  FUN_145542d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145543600 FUN_145543600 body=2360 status=ok
// SIG undefined FUN_145543600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145543600(undefined8 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar11;
  uint uVar12;
  float in_XMM0_Dc;
  uint uVar13;
  float in_XMM0_Dd;
  uint uVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar38;
  uint uVar39;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar59;
  ulonglong uVar57;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar65;
  ulonglong uVar63;
  undefined1 auVar58 [16];
  float fVar66;
  uint uVar67;
  float fVar68;
  uint uVar71;
  float fVar72;
  uint uVar73;
  float fVar74;
  uint uVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar86;
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  uint uVar91;
  float fVar92;
  float fVar98;
  float fVar99;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar100;
  float local_140 [16];
  uint local_100 [58];
  ulonglong uVar64;
  undefined1 auVar93 [16];
  
  fVar11 = (float)((ulonglong)param_1 >> 0x20);
  local_140[0] = (float)param_1;
  uVar3 = 0;
  fVar40 = ABS(local_140[0]);
  fVar43 = ABS(fVar11);
  fVar45 = ABS(in_XMM0_Dc);
  fVar47 = ABS(in_XMM0_Dd);
  fVar26 = fVar40 * 0.31830987 + 12582912.0;
  fVar28 = fVar43 * 0.31830987 + 12582912.0;
  fVar30 = fVar45 * 0.31830987 + 12582912.0;
  fVar32 = fVar47 * 0.31830987 + 12582912.0;
  fVar27 = fVar26 - 12582912.0;
  fVar29 = fVar28 - 12582912.0;
  fVar31 = fVar30 - 12582912.0;
  fVar33 = fVar32 - 12582912.0;
  fVar55 = (((fVar40 - fVar27 * 3.140625) - fVar27 * 0.0009675026) - fVar27 * 1.5099067e-07) -
           fVar27 * 5.126688e-12;
  fVar59 = (((fVar43 - fVar29 * 3.140625) - fVar29 * 0.0009675026) - fVar29 * 1.5099067e-07) -
           fVar29 * 5.126688e-12;
  fVar61 = (((fVar45 - fVar31 * 3.140625) - fVar31 * 0.0009675026) - fVar31 * 1.5099067e-07) -
           fVar31 * 5.126688e-12;
  fVar65 = (((fVar47 - fVar33 * 3.140625) - fVar33 * 0.0009675026) - fVar33 * 1.5099067e-07) -
           fVar33 * 5.126688e-12;
  fVar27 = fVar55 * fVar55;
  fVar29 = fVar59 * fVar59;
  fVar31 = fVar61 * fVar61;
  fVar33 = fVar65 * fVar65;
  fVar55 = (float)((uint)fVar55 ^ (int)fVar26 << 0x1f);
  fVar59 = (float)((uint)fVar59 ^ (int)fVar28 << 0x1f);
  fVar61 = (float)((uint)fVar61 ^ (int)fVar30 << 0x1f);
  fVar65 = (float)((uint)fVar65 ^ (int)fVar32 << 0x1f);
  uVar4 = -(uint)(10000.0 < fVar40);
  uVar5 = -(uint)(10000.0 < fVar43);
  uVar6 = -(uint)(10000.0 < fVar45);
  uVar7 = -(uint)(10000.0 < fVar47);
  auVar20._4_4_ = uVar5;
  auVar20._0_4_ = uVar4;
  auVar20._8_4_ = uVar6;
  auVar20._12_4_ = uVar7;
  iVar1 = movmskps(in_EAX,auVar20);
  local_100[0] = (uint)(fVar55 + fVar27 * (((fVar27 * 2.6057805e-06 + -0.00019809602) * fVar27 +
                                           0.008333063) * fVar27 + -0.1666666) * fVar55) ^
                 (uint)local_140[0] & 0x80000000;
  local_100[1] = (uint)(fVar59 + fVar29 * (((fVar29 * 2.6057805e-06 + -0.00019809602) * fVar29 +
                                           0.008333063) * fVar29 + -0.1666666) * fVar59) ^
                 (uint)fVar11 & 0x80000000;
  local_100[2] = (uint)(fVar61 + fVar31 * (((fVar31 * 2.6057805e-06 + -0.00019809602) * fVar31 +
                                           0.008333063) * fVar31 + -0.1666666) * fVar61) ^
                 (uint)in_XMM0_Dc & 0x80000000;
  local_100[3] = (uint)(fVar65 + fVar33 * (((fVar33 * 2.6057805e-06 + -0.00019809602) * fVar33 +
                                           0.008333063) * fVar33 + -0.1666666) * fVar65) ^
                 (uint)in_XMM0_Dd & 0x80000000;
  if (iVar1 != 0) {
    auVar41._4_4_ = -(uint)((float)((uint)fVar43 & 0x7f800000) == INFINITY);
    auVar41._0_4_ = -(uint)((float)((uint)fVar40 & 0x7f800000) == INFINITY);
    auVar41._8_4_ = -(uint)((float)((uint)fVar45 & 0x7f800000) == INFINITY);
    auVar41._12_4_ = -(uint)((float)((uint)fVar47 & 0x7f800000) == INFINITY);
    uVar36 = (((uint)local_140[0] & 0x7f800000) >> 0x17) * 0xc;
    uVar38 = (((uint)fVar11 & 0x7f800000) >> 0x17) * 0xc;
    uVar39 = (((uint)in_XMM0_Dc & 0x7f800000) >> 0x17) * 0xc;
    uVar24 = (((uint)in_XMM0_Dd & 0x7f800000) >> 0x17) * 0xc;
    uVar3 = movmskps(0,auVar41);
    auVar42._4_4_ = *(uint *)(&DAT_14d2bc100 + uVar38);
    auVar42._0_4_ = *(uint *)(&DAT_14d2bc100 + uVar36);
    auVar42._12_4_ = *(uint *)(&DAT_14d2bc100 + uVar24);
    auVar42._8_4_ = *(uint *)(&DAT_14d2bc100 + uVar39);
    auVar25._4_4_ = *(uint *)(&DAT_14d2bc108 + uVar38);
    auVar25._0_4_ = *(uint *)(&DAT_14d2bc108 + uVar36);
    auVar25._12_4_ = *(uint *)(&DAT_14d2bc108 + uVar24);
    auVar25._8_4_ = *(uint *)(&DAT_14d2bc108 + uVar39);
    auVar37._8_4_ = 0xffff;
    auVar37._0_8_ = 0xffff0000ffff;
    auVar37._12_4_ = 0xffff;
    auVar88._0_4_ = ((uint)local_140[0] & 0x7fffff) + 0x800000;
    auVar88._4_4_ = ((uint)fVar11 & 0x7fffff) + 0x800000;
    auVar88._8_4_ = ((uint)in_XMM0_Dc & 0x7fffff) + 0x800000;
    auVar88._12_4_ = ((uint)in_XMM0_Dd & 0x7fffff) + 0x800000;
    auVar42 = auVar42 & auVar37;
    auVar89 = auVar88 & auVar37;
    uVar57 = auVar89._0_8_;
    uVar64 = auVar89._8_8_;
    uVar63 = uVar64 >> 0x20;
    uVar67 = auVar88._0_4_ >> 0x10;
    uVar71 = auVar88._4_4_ >> 0x10;
    uVar73 = auVar88._8_4_ >> 0x10;
    uVar75 = auVar88._12_4_ >> 0x10;
    uVar91 = auVar89._0_4_;
    auVar93._0_8_ = (ulonglong)uVar91 * (ulonglong)auVar42._0_4_;
    auVar93._8_8_ = (uVar64 & 0xffffffff) * (ulonglong)auVar42._8_4_;
    auVar49._4_4_ = *(uint *)(&DAT_14d2bc104 + uVar38);
    auVar49._0_4_ = *(uint *)(&DAT_14d2bc104 + uVar36);
    auVar94._0_8_ = (uVar57 >> 0x20) * (auVar42._0_8_ >> 0x20) << 0x20;
    auVar94._8_8_ = uVar63 * (auVar42._8_8_ >> 0x20) << 0x20;
    auVar49._12_4_ = *(uint *)(&DAT_14d2bc104 + uVar24);
    auVar49._8_4_ = *(uint *)(&DAT_14d2bc104 + uVar39);
    auVar49 = auVar49 & auVar37;
    uVar8 = *(uint *)(&DAT_14d2bc104 + uVar36) >> 0x10;
    uVar12 = *(uint *)(&DAT_14d2bc104 + uVar38) >> 0x10;
    uVar13 = *(uint *)(&DAT_14d2bc104 + uVar39) >> 0x10;
    uVar14 = *(uint *)(&DAT_14d2bc104 + uVar24) >> 0x10;
    auVar94 = auVar93 & _DAT_14d2bc000 | auVar94;
    uVar2 = auVar49._8_8_;
    auVar34._0_8_ = (ulonglong)uVar91 * (ulonglong)uVar8;
    auVar34._8_8_ = (uVar64 & 0xffffffff) * (ulonglong)uVar13;
    auVar16._0_8_ = (uVar57 >> 0x20) * (ulonglong)auVar49._4_4_ << 0x20;
    auVar16._8_8_ = uVar63 * (uVar2 >> 0x20) << 0x20;
    auVar15._0_8_ = (ulonglong)uVar91 * (ulonglong)auVar49._0_4_;
    auVar15._8_8_ = (uVar64 & 0xffffffff) * (ulonglong)auVar49._8_4_;
    auVar50._0_8_ = (ulonglong)auVar49._0_4_ * (ulonglong)uVar67;
    auVar50._8_8_ = (uVar2 & 0xffffffff) * (ulonglong)uVar73;
    auVar25 = auVar25 & auVar37;
    auVar16 = auVar15 & _DAT_14d2bc000 | auVar16;
    auVar95._0_8_ = (ulonglong)uVar67 * (ulonglong)auVar25._0_4_;
    auVar95._8_8_ = (ulonglong)uVar73 * (ulonglong)auVar25._8_4_;
    uVar17 = *(uint *)(&DAT_14d2bc108 + uVar36) >> 0x10;
    uVar21 = *(uint *)(&DAT_14d2bc108 + uVar38) >> 0x10;
    uVar22 = *(uint *)(&DAT_14d2bc108 + uVar39) >> 0x10;
    uVar23 = *(uint *)(&DAT_14d2bc108 + uVar24) >> 0x10;
    auVar9._0_8_ = (auVar25._0_8_ >> 0x20) * (ulonglong)uVar71 << 0x20;
    auVar9._8_8_ = (auVar25._8_8_ >> 0x20) * (ulonglong)uVar75 << 0x20;
    auVar9 = auVar95 & _DAT_14d2bc000 | auVar9;
    auVar35._0_8_ = (uVar57 >> 0x20) * (ulonglong)uVar12 << 0x20;
    auVar35._8_8_ = uVar63 * uVar14 << 0x20;
    auVar80._0_8_ = (ulonglong)uVar67 * (ulonglong)uVar17;
    auVar80._8_8_ = (ulonglong)uVar73 * (ulonglong)uVar22;
    auVar35 = auVar34 & _DAT_14d2bc000 | auVar35;
    auVar18._0_8_ = (ulonglong)uVar17 * (ulonglong)uVar91;
    auVar18._8_8_ = (ulonglong)uVar22 * (ulonglong)auVar89._8_4_;
    auVar19._0_8_ = (ulonglong)uVar21 * (ulonglong)auVar89._4_4_ << 0x20;
    auVar19._8_8_ = (ulonglong)uVar23 * (uVar64 >> 0x20) << 0x20;
    auVar81._0_8_ = (ulonglong)uVar71 * (ulonglong)uVar21 << 0x20;
    auVar81._8_8_ = (ulonglong)uVar75 * (ulonglong)uVar23 << 0x20;
    auVar19 = auVar18 & _DAT_14d2bc000 | auVar19;
    auVar81 = auVar80 & _DAT_14d2bc000 | auVar81;
    auVar51._0_8_ = (ulonglong)auVar49._4_4_ * (ulonglong)uVar71 << 0x20;
    auVar51._8_8_ = (uVar2 >> 0x20) * (ulonglong)uVar75 << 0x20;
    auVar95 = auVar16 & auVar37;
    auVar51 = auVar50 & _DAT_14d2bc000 | auVar51;
    auVar20 = auVar35 & auVar37;
    auVar10._0_4_ = (auVar9._0_4_ >> 0x10) + auVar95._0_4_ + auVar81._0_4_ + (auVar19._0_4_ >> 0x10)
    ;
    auVar10._4_4_ = (auVar9._4_4_ >> 0x10) + auVar95._4_4_ + auVar81._4_4_ + (auVar19._4_4_ >> 0x10)
    ;
    auVar10._8_4_ = (auVar9._8_4_ >> 0x10) + auVar95._8_4_ + auVar81._8_4_ + (auVar19._8_4_ >> 0x10)
    ;
    auVar10._12_4_ =
         (auVar9._12_4_ >> 0x10) + auVar95._12_4_ + auVar81._12_4_ + (auVar19._12_4_ >> 0x10);
    auVar96._0_8_ = (ulonglong)uVar8 * (ulonglong)uVar67;
    auVar96._8_8_ = (ulonglong)uVar13 * (ulonglong)uVar73;
    auVar69._0_8_ = (ulonglong)uVar67 * (ulonglong)auVar42._0_4_;
    auVar69._8_8_ = (ulonglong)uVar73 * (ulonglong)auVar42._8_4_;
    auVar97._0_8_ = (ulonglong)uVar12 * (ulonglong)uVar71 << 0x20;
    auVar97._8_8_ = (ulonglong)uVar14 * (ulonglong)uVar75 << 0x20;
    auVar97 = auVar96 & _DAT_14d2bc000 | auVar97;
    uVar14 = (auVar10._0_4_ >> 0x10) + auVar20._0_4_ + auVar51._0_4_ + (auVar16._0_4_ >> 0x10);
    uVar17 = (auVar10._4_4_ >> 0x10) + auVar20._4_4_ + auVar51._4_4_ + (auVar16._4_4_ >> 0x10);
    uVar21 = (auVar10._8_4_ >> 0x10) + auVar20._8_4_ + auVar51._8_4_ + (auVar16._8_4_ >> 0x10);
    uVar22 = (auVar10._12_4_ >> 0x10) + auVar20._12_4_ + auVar51._12_4_ + (auVar16._12_4_ >> 0x10);
    auVar90._0_8_ = (ulonglong)uVar91 * (ulonglong)(*(uint *)(&DAT_14d2bc100 + uVar36) >> 0x10);
    auVar90._8_8_ = (uVar64 & 0xffffffff) * (ulonglong)(*(uint *)(&DAT_14d2bc100 + uVar39) >> 0x10);
    auVar20 = auVar94 & auVar37;
    auVar58._0_8_ =
         (ulonglong)auVar89._4_4_ * (ulonglong)(*(uint *)(&DAT_14d2bc100 + uVar38) >> 0x10) << 0x20;
    auVar58._8_8_ = uVar63 * (*(uint *)(&DAT_14d2bc100 + uVar24) >> 0x10) << 0x20;
    auVar70._0_8_ = (ulonglong)uVar71 * (auVar42._0_8_ >> 0x20) << 0x20;
    auVar70._8_8_ = (ulonglong)uVar75 * (auVar42._8_8_ >> 0x20) << 0x20;
    auVar89._0_4_ = (uVar14 >> 0x10) + auVar20._0_4_ + auVar97._0_4_ + (auVar35._0_4_ >> 0x10);
    auVar89._4_4_ = (uVar17 >> 0x10) + auVar20._4_4_ + auVar97._4_4_ + (auVar35._4_4_ >> 0x10);
    auVar89._8_4_ = (uVar21 >> 0x10) + auVar20._8_4_ + auVar97._8_4_ + (auVar35._8_4_ >> 0x10);
    auVar89._12_4_ = (uVar22 >> 0x10) + auVar20._12_4_ + auVar97._12_4_ + (auVar35._12_4_ >> 0x10);
    auVar70 = auVar69 & _DAT_14d2bc000 | auVar70;
    auVar16 = (auVar90 & _DAT_14d2bc000 | auVar58) & auVar37;
    auVar20 = auVar89 & auVar37;
    auVar10 = auVar10 & auVar37;
    uVar24 = ((auVar89._0_4_ >> 0x10) + auVar16._0_4_ + auVar70._0_4_ + (auVar94._0_4_ >> 0x10)) *
             0x10000 + auVar20._0_4_;
    uVar8 = ((auVar89._4_4_ >> 0x10) + auVar16._4_4_ + auVar70._4_4_ + (auVar94._4_4_ >> 0x10)) *
            0x10000 + auVar20._4_4_;
    uVar12 = ((auVar89._8_4_ >> 0x10) + auVar16._8_4_ + auVar70._8_4_ + (auVar94._8_4_ >> 0x10)) *
             0x10000 + auVar20._8_4_;
    uVar13 = ((auVar89._12_4_ >> 0x10) + auVar16._12_4_ + auVar70._12_4_ + (auVar94._12_4_ >> 0x10))
             * 0x10000 + auVar20._12_4_;
    uVar23 = uVar14 * 0x10000 + auVar10._0_4_;
    uVar36 = uVar17 * 0x10000 + auVar10._4_4_;
    uVar38 = uVar21 * 0x10000 + auVar10._8_4_;
    uVar39 = uVar22 * 0x10000 + auVar10._12_4_;
    uVar14 = (uint)local_140[0] & 0x80000000;
    uVar17 = (uint)fVar11 & 0x80000000;
    uVar21 = (uint)in_XMM0_Dc & 0x80000000;
    uVar22 = (uint)in_XMM0_Dd & 0x80000000;
    fVar26 = (float)(uVar24 >> 9 | uVar14 ^ 0x3f800000);
    fVar28 = (float)(uVar8 >> 9 | uVar17 ^ 0x3f800000);
    fVar30 = (float)(uVar12 >> 9 | uVar21 ^ 0x3f800000);
    fVar32 = (float)(uVar13 >> 9 | uVar22 ^ 0x3f800000);
    fVar27 = fVar26 + 49152.0;
    fVar29 = fVar28 + 49152.0;
    fVar31 = fVar30 + 49152.0;
    fVar33 = fVar32 + 49152.0;
    fVar40 = (float)((uVar24 & 0x1ff) << 0xe | uVar23 >> 0x12 | uVar14 ^ 0x34000000) -
             (float)(uVar14 ^ 0x34000000);
    fVar43 = (float)((uVar8 & 0x1ff) << 0xe | uVar36 >> 0x12 | uVar17 ^ 0x34000000) -
             (float)(uVar17 ^ 0x34000000);
    fVar45 = (float)((uVar12 & 0x1ff) << 0xe | uVar38 >> 0x12 | uVar21 ^ 0x34000000) -
             (float)(uVar21 ^ 0x34000000);
    fVar47 = (float)((uVar13 & 0x1ff) << 0xe | uVar39 >> 0x12 | uVar22 ^ 0x34000000) -
             (float)(uVar22 ^ 0x34000000);
    fVar26 = fVar26 - (fVar27 - 49152.0);
    fVar28 = fVar28 - (fVar29 - 49152.0);
    fVar30 = fVar30 - (fVar31 - 49152.0);
    fVar32 = fVar32 - (fVar33 - 49152.0);
    fVar55 = fVar26 + fVar40;
    fVar59 = fVar28 + fVar43;
    fVar61 = fVar30 + fVar45;
    fVar76 = fVar32 + fVar47;
    fVar78 = (float)((uint)fVar55 & 0xfffff000);
    fVar82 = (float)((uint)fVar59 & 0xfffff000);
    fVar84 = (float)((uint)fVar61 & 0xfffff000);
    fVar86 = (float)((uint)fVar76 & 0xfffff000);
    fVar65 = (fVar55 - fVar78) * 6.283203 + fVar78 * -1.781782e-05 +
             (((float)((uVar23 & 0x3ffff) << 5 | uVar14 ^ 0x28800000) - (float)(uVar14 ^ 0x28800000)
              ) + fVar40 + (fVar26 - fVar55)) * 6.2831855 + (fVar55 - fVar78) * -1.781782e-05;
    fVar44 = (fVar59 - fVar82) * 6.283203 + fVar82 * -1.781782e-05 +
             (((float)((uVar36 & 0x3ffff) << 5 | uVar17 ^ 0x28800000) - (float)(uVar17 ^ 0x28800000)
              ) + fVar43 + (fVar28 - fVar59)) * 6.2831855 + (fVar59 - fVar82) * -1.781782e-05;
    fVar46 = (fVar61 - fVar84) * 6.283203 + fVar84 * -1.781782e-05 +
             (((float)((uVar38 & 0x3ffff) << 5 | uVar21 ^ 0x28800000) - (float)(uVar21 ^ 0x28800000)
              ) + fVar45 + (fVar30 - fVar61)) * 6.2831855 + (fVar61 - fVar84) * -1.781782e-05;
    fVar76 = (fVar76 - fVar86) * 6.283203 + fVar86 * -1.781782e-05 +
             (((float)((uVar39 & 0x3ffff) << 5 | uVar22 ^ 0x28800000) - (float)(uVar22 ^ 0x28800000)
              ) + fVar47 + (fVar32 - fVar76)) * 6.2831855 + (fVar76 - fVar86) * -1.781782e-05;
    uVar14 = ((uint)fVar27 & 0xff) * 0x10;
    uVar17 = ((uint)fVar29 & 0xff) << 4;
    uVar21 = ((uint)fVar31 & 0xff) * 0x10;
    uVar22 = ((uint)fVar33 & 0xff) * 0x10;
    fVar33 = fVar65 + fVar78 * 6.283203;
    fVar28 = fVar44 + fVar82 * 6.283203;
    fVar32 = fVar46 + fVar84 * 6.283203;
    fVar43 = fVar76 + fVar86 * 6.283203;
    uVar24 = -(uint)(9.536743e-07 < ABS(local_140[0]));
    uVar8 = -(uint)(9.536743e-07 < ABS(fVar11));
    uVar12 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dc));
    uVar13 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dd));
    fVar68 = (float)(-(uint)(ABS(local_140[0]) <= 9.536743e-07) & (uint)local_140[0] |
                    (uint)fVar33 & uVar24);
    fVar72 = (float)(-(uint)(ABS(fVar11) <= 9.536743e-07) & (uint)fVar11 | (uint)fVar28 & uVar8);
    fVar74 = (float)(-(uint)(ABS(in_XMM0_Dc) <= 9.536743e-07) & (uint)in_XMM0_Dc |
                    (uint)fVar32 & uVar12);
    fVar77 = (float)(-(uint)(ABS(in_XMM0_Dd) <= 9.536743e-07) & (uint)in_XMM0_Dd |
                    (uint)fVar43 & uVar13);
    fVar11 = *(float *)(&DAT_14d2bcd04 + uVar14);
    fVar27 = *(float *)(&DAT_14d2bcd04 + uVar17);
    fVar92 = fVar68 * *(float *)(&DAT_14d2bcd0c + uVar14);
    fVar98 = fVar72 * *(float *)(&DAT_14d2bcd0c + uVar17);
    fVar99 = fVar74 * *(float *)(&DAT_14d2bcd0c + uVar21);
    fVar100 = fVar77 * *(float *)(&DAT_14d2bcd0c + uVar22);
    fVar56 = fVar68 * fVar68;
    fVar60 = fVar72 * fVar72;
    fVar62 = fVar74 * fVar74;
    fVar66 = fVar77 * fVar77;
    fVar26 = fVar68 * *(float *)(&DAT_14d2bcd00 + uVar14);
    fVar30 = fVar72 * *(float *)(&DAT_14d2bcd00 + uVar17);
    fVar40 = fVar74 * *(float *)(&DAT_14d2bcd00 + uVar21);
    fVar45 = fVar77 * *(float *)(&DAT_14d2bcd00 + uVar22);
    fVar29 = *(float *)(&DAT_14d2bcd04 + uVar22);
    fVar31 = *(float *)(&DAT_14d2bcd04 + uVar21);
    fVar48 = fVar11 + fVar92;
    fVar52 = fVar27 + fVar98;
    fVar53 = fVar31 + fVar99;
    fVar54 = fVar29 + fVar100;
    fVar79 = fVar48 + fVar26;
    fVar83 = fVar52 + fVar30;
    fVar85 = fVar53 + fVar40;
    fVar87 = fVar54 + fVar45;
    fVar47 = (*(float *)(&DAT_14d2bcd00 + uVar14) + *(float *)(&DAT_14d2bcd0c + uVar14)) -
             fVar68 * fVar11;
    fVar55 = (*(float *)(&DAT_14d2bcd00 + uVar17) + *(float *)(&DAT_14d2bcd0c + uVar17)) -
             fVar72 * fVar27;
    fVar59 = (*(float *)(&DAT_14d2bcd00 + uVar21) + *(float *)(&DAT_14d2bcd0c + uVar21)) -
             fVar74 * fVar31;
    fVar61 = (*(float *)(&DAT_14d2bcd00 + uVar22) + *(float *)(&DAT_14d2bcd0c + uVar22)) -
             fVar77 * fVar29;
    local_100[0] = ~uVar4 & local_100[0] |
                   (uint)(fVar79 + *(float *)(&DAT_14d2bcd08 + uVar14) +
                                   (float)(uVar24 & (uint)(fVar65 + (fVar78 * 6.283203 - fVar33))) *
                                   fVar47 + fVar11 * fVar56 * (fVar56 * 0.041666493 + -0.5) +
                                   fVar92 + (fVar11 - fVar48) + fVar26 + (fVar48 - fVar79) +
                                   (fVar56 * 0.008333292 + -0.16666667) * fVar56 * fVar68 * fVar47)
                   & uVar4;
    local_100[1] = ~uVar5 & local_100[1] |
                   (uint)(fVar83 + *(float *)(&DAT_14d2bcd08 + uVar17) +
                                   (float)(uVar8 & (uint)(fVar44 + (fVar82 * 6.283203 - fVar28))) *
                                   fVar55 + fVar27 * fVar60 * (fVar60 * 0.041666493 + -0.5) +
                                   fVar98 + (fVar27 - fVar52) + fVar30 + (fVar52 - fVar83) +
                                   (fVar60 * 0.008333292 + -0.16666667) * fVar60 * fVar72 * fVar55)
                   & uVar5;
    local_100[2] = ~uVar6 & local_100[2] |
                   (uint)(fVar85 + *(float *)(&DAT_14d2bcd08 + uVar21) +
                                   (float)(uVar12 & (uint)(fVar46 + (fVar84 * 6.283203 - fVar32))) *
                                   fVar59 + fVar31 * fVar62 * (fVar62 * 0.041666493 + -0.5) +
                                   fVar99 + (fVar31 - fVar53) + fVar40 + (fVar53 - fVar85) +
                                   (fVar62 * 0.008333292 + -0.16666667) * fVar62 * fVar74 * fVar59)
                   & uVar6;
    local_100[3] = ~uVar7 & local_100[3] |
                   (uint)(fVar87 + *(float *)(&DAT_14d2bcd08 + uVar22) +
                                   (float)(uVar13 & (uint)(fVar76 + (fVar86 * 6.283203 - fVar43))) *
                                   fVar61 + fVar29 * fVar66 * (fVar66 * 0.041666493 + -0.5) +
                                   fVar100 + (fVar29 - fVar54) + fVar45 + (fVar54 - fVar87) +
                                   (fVar66 * 0.008333292 + -0.16666667) * fVar66 * fVar77 * fVar61)
                   & uVar7;
  }
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if ((uVar3 >> ((uint)uVar2 & 0x1f) & 1) != 0) {
        FUN_1455e5c20(local_140 + uVar2,local_100 + uVar2);
      }
      uVar4 = (uint)uVar2 + 1;
      uVar2 = (ulonglong)uVar4;
    } while ((int)uVar4 < 4);
  }
  return;
}



// FUNCTION 145543f40 FUN_145543f40 body=1905 status=ok
// SIG undefined FUN_145543f40(void)

undefined8 FUN_145543f40(undefined8 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  undefined1 auVar26 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  uint uVar61;
  float fVar64;
  uint uVar65;
  float fVar66;
  uint uVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar68;
  uint uVar69;
  uint uVar70;
  float fVar71;
  uint uVar74;
  float fVar75;
  uint uVar76;
  float fVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar78;
  float fVar79;
  float local_140 [16];
  undefined1 local_100 [14] [16];
  
  fVar5 = (float)((ulonglong)param_1 >> 0x20);
  local_140[0] = (float)param_1;
  uVar4 = 0;
  fVar24 = ABS(local_140[0]);
  fVar27 = ABS(fVar5);
  fVar30 = ABS(in_XMM0_Dc);
  fVar33 = ABS(in_XMM0_Dd);
  fVar11 = fVar24 * 0.31830987 + 12582912.0;
  fVar13 = fVar27 * 0.31830987 + 12582912.0;
  fVar15 = fVar30 * 0.31830987 + 12582912.0;
  fVar17 = fVar33 * 0.31830987 + 12582912.0;
  fVar12 = fVar11 - 12582912.0;
  fVar14 = fVar13 - 12582912.0;
  fVar16 = fVar15 - 12582912.0;
  fVar18 = fVar17 - 12582912.0;
  auVar6._4_4_ = -(uint)(10000.0 < fVar27);
  auVar6._0_4_ = -(uint)(10000.0 < fVar24);
  auVar6._8_4_ = -(uint)(10000.0 < fVar30);
  auVar6._12_4_ = -(uint)(10000.0 < fVar33);
  iVar1 = movmskps(in_EAX,auVar6);
  fVar36 = (((fVar24 - fVar12 * 3.140625) - fVar12 * 0.0009675026) - fVar12 * 1.5099067e-07) -
           fVar12 * 5.126688e-12;
  fVar41 = (((fVar27 - fVar14 * 3.140625) - fVar14 * 0.0009675026) - fVar14 * 1.5099067e-07) -
           fVar14 * 5.126688e-12;
  fVar44 = (((fVar30 - fVar16 * 3.140625) - fVar16 * 0.0009675026) - fVar16 * 1.5099067e-07) -
           fVar16 * 5.126688e-12;
  fVar47 = (((fVar33 - fVar18 * 3.140625) - fVar18 * 0.0009675026) - fVar18 * 1.5099067e-07) -
           fVar18 * 5.126688e-12;
  fVar12 = fVar36 * fVar36;
  fVar14 = fVar41 * fVar41;
  fVar16 = fVar44 * fVar44;
  fVar18 = fVar47 * fVar47;
  fVar36 = (float)((uint)fVar36 ^ (int)fVar11 << 0x1f);
  fVar41 = (float)((uint)fVar41 ^ (int)fVar13 << 0x1f);
  fVar44 = (float)((uint)fVar44 ^ (int)fVar15 << 0x1f);
  fVar47 = (float)((uint)fVar47 ^ (int)fVar17 << 0x1f);
  local_100[0]._0_4_ =
       (uint)(fVar36 + fVar12 * (((fVar12 * 2.6057805e-06 + -0.00019809602) * fVar12 + 0.008333063)
                                 * fVar12 + -0.1666666) * fVar36) ^ (uint)local_140[0] & 0x80000000;
  local_100[0]._4_4_ =
       (uint)(fVar41 + fVar14 * (((fVar14 * 2.6057805e-06 + -0.00019809602) * fVar14 + 0.008333063)
                                 * fVar14 + -0.1666666) * fVar41) ^ (uint)fVar5 & 0x80000000;
  local_100[0]._8_4_ =
       (uint)(fVar44 + fVar16 * (((fVar16 * 2.6057805e-06 + -0.00019809602) * fVar16 + 0.008333063)
                                 * fVar16 + -0.1666666) * fVar44) ^ (uint)in_XMM0_Dc & 0x80000000;
  local_100[0]._12_4_ =
       (uint)(fVar47 + fVar18 * (((fVar18 * 2.6057805e-06 + -0.00019809602) * fVar18 + 0.008333063)
                                 * fVar18 + -0.1666666) * fVar47) ^ (uint)in_XMM0_Dd & 0x80000000;
  if (iVar1 != 0) {
    auVar26._4_4_ = -(uint)((float)((uint)fVar27 & 0x7f800000) == INFINITY);
    auVar26._0_4_ = -(uint)((float)((uint)fVar24 & 0x7f800000) == INFINITY);
    auVar26._8_4_ = -(uint)((float)((uint)fVar30 & 0x7f800000) == INFINITY);
    auVar26._12_4_ = -(uint)((float)((uint)fVar33 & 0x7f800000) == INFINITY);
    uVar4 = movmskps(0,auVar26);
    uVar2 = (((uint)local_140[0] & 0x7f800000) >> 0x17) * 0xc;
    uVar28 = (((uint)fVar5 & 0x7f800000) >> 0x17) * 0xc;
    uVar31 = (((uint)in_XMM0_Dc & 0x7f800000) >> 0x17) * 0xc;
    uVar34 = (((uint)in_XMM0_Dd & 0x7f800000) >> 0x17) * 0xc;
    auVar73._4_4_ = *(uint *)(&DAT_14d2bc108 + uVar28);
    auVar73._0_4_ = *(uint *)(&DAT_14d2bc108 + uVar2);
    auVar73._12_4_ = *(uint *)(&DAT_14d2bc108 + uVar34);
    auVar73._8_4_ = *(uint *)(&DAT_14d2bc108 + uVar31);
    auVar51._12_4_ = *(uint *)(&DAT_14d2bc104 + uVar34);
    auVar51._8_4_ = *(uint *)(&DAT_14d2bc104 + uVar31);
    auVar51._4_4_ = *(uint *)(&DAT_14d2bc104 + uVar28);
    auVar51._0_4_ = *(uint *)(&DAT_14d2bc104 + uVar2);
    auVar57._4_4_ = *(uint *)(&DAT_14d2bc100 + uVar28);
    auVar57._0_4_ = *(uint *)(&DAT_14d2bc100 + uVar2);
    auVar57._12_4_ = *(uint *)(&DAT_14d2bc100 + uVar34);
    auVar57._8_4_ = *(uint *)(&DAT_14d2bc100 + uVar31);
    auVar56._0_4_ = *(uint *)(&DAT_14d2bc108 + uVar2) >> 0x10;
    auVar56._4_4_ = *(uint *)(&DAT_14d2bc108 + uVar28) >> 0x10;
    auVar56._8_4_ = *(uint *)(&DAT_14d2bc108 + uVar31) >> 0x10;
    auVar56._12_4_ = *(uint *)(&DAT_14d2bc108 + uVar34) >> 0x10;
    auVar63._0_4_ = *(uint *)(&DAT_14d2bc104 + uVar2) >> 0x10;
    auVar63._4_4_ = *(uint *)(&DAT_14d2bc104 + uVar28) >> 0x10;
    auVar63._8_4_ = *(uint *)(&DAT_14d2bc104 + uVar31) >> 0x10;
    auVar63._12_4_ = *(uint *)(&DAT_14d2bc104 + uVar34) >> 0x10;
    auVar58._0_4_ = *(uint *)(&DAT_14d2bc100 + uVar2) >> 0x10;
    auVar58._4_4_ = *(uint *)(&DAT_14d2bc100 + uVar28) >> 0x10;
    auVar58._8_4_ = *(uint *)(&DAT_14d2bc100 + uVar31) >> 0x10;
    auVar58._12_4_ = *(uint *)(&DAT_14d2bc100 + uVar34) >> 0x10;
    auVar62._0_4_ = ((uint)local_140[0] & 0x7fffff) + 0x800000;
    auVar62._4_4_ = ((uint)fVar5 & 0x7fffff) + 0x800000;
    auVar62._8_4_ = ((uint)in_XMM0_Dc & 0x7fffff) + 0x800000;
    auVar62._12_4_ = ((uint)in_XMM0_Dd & 0x7fffff) + 0x800000;
    auVar7._8_4_ = 0xffff;
    auVar7._0_8_ = 0xffff0000ffff;
    auVar7._12_4_ = 0xffff;
    auVar23._0_4_ = auVar62._0_4_ >> 0x10;
    auVar23._4_4_ = auVar62._4_4_ >> 0x10;
    auVar23._8_4_ = auVar62._8_4_ >> 0x10;
    auVar23._12_4_ = auVar62._12_4_ >> 0x10;
    auVar62 = auVar62 & auVar7;
    auVar22 = pmulld(auVar62,auVar51 & auVar7);
    auVar6 = pmulld(auVar23,auVar56);
    auVar72 = pmulld(auVar56,auVar62);
    auVar56 = auVar22 & auVar7;
    auVar39 = pmulld(auVar73 & auVar7,auVar23);
    auVar26 = pmulld(auVar62,auVar63);
    auVar52 = pmulld(auVar51 & auVar7,auVar23);
    auVar40._0_4_ = (auVar39._0_4_ >> 0x10) + auVar56._0_4_ + auVar6._0_4_ + (auVar72._0_4_ >> 0x10)
    ;
    auVar40._4_4_ = (auVar39._4_4_ >> 0x10) + auVar56._4_4_ + auVar6._4_4_ + (auVar72._4_4_ >> 0x10)
    ;
    auVar40._8_4_ = (auVar39._8_4_ >> 0x10) + auVar56._8_4_ + auVar6._8_4_ + (auVar72._8_4_ >> 0x10)
    ;
    auVar40._12_4_ =
         (auVar39._12_4_ >> 0x10) + auVar56._12_4_ + auVar6._12_4_ + (auVar72._12_4_ >> 0x10);
    auVar73 = auVar26 & auVar7;
    auVar39 = pmulld(auVar62,auVar57 & auVar7);
    auVar6 = pmulld(auVar63,auVar23);
    uVar2 = (auVar40._0_4_ >> 0x10) + auVar73._0_4_ + auVar52._0_4_ + (auVar22._0_4_ >> 0x10);
    uVar28 = (auVar40._4_4_ >> 0x10) + auVar73._4_4_ + auVar52._4_4_ + (auVar22._4_4_ >> 0x10);
    uVar31 = (auVar40._8_4_ >> 0x10) + auVar73._8_4_ + auVar52._8_4_ + (auVar22._8_4_ >> 0x10);
    uVar34 = (auVar40._12_4_ >> 0x10) + auVar73._12_4_ + auVar52._12_4_ + (auVar22._12_4_ >> 0x10);
    auVar22 = auVar39 & auVar7;
    auVar63 = pmulld(auVar62,auVar58);
    auVar52._0_4_ = (uVar2 >> 0x10) + auVar22._0_4_ + auVar6._0_4_ + (auVar26._0_4_ >> 0x10);
    auVar52._4_4_ = (uVar28 >> 0x10) + auVar22._4_4_ + auVar6._4_4_ + (auVar26._4_4_ >> 0x10);
    auVar52._8_4_ = (uVar31 >> 0x10) + auVar22._8_4_ + auVar6._8_4_ + (auVar26._8_4_ >> 0x10);
    auVar52._12_4_ = (uVar34 >> 0x10) + auVar22._12_4_ + auVar6._12_4_ + (auVar26._12_4_ >> 0x10);
    auVar6 = pmulld(auVar23,auVar57 & auVar7);
    auVar63 = auVar63 & auVar7;
    auVar23 = auVar52 & auVar7;
    auVar40 = auVar40 & auVar7;
    uVar70 = ((auVar52._0_4_ >> 0x10) + auVar63._0_4_ + auVar6._0_4_ + (auVar39._0_4_ >> 0x10)) *
             0x10000 + auVar23._0_4_;
    uVar74 = ((auVar52._4_4_ >> 0x10) + auVar63._4_4_ + auVar6._4_4_ + (auVar39._4_4_ >> 0x10)) *
             0x10000 + auVar23._4_4_;
    uVar76 = ((auVar52._8_4_ >> 0x10) + auVar63._8_4_ + auVar6._8_4_ + (auVar39._8_4_ >> 0x10)) *
             0x10000 + auVar23._8_4_;
    uVar78 = ((auVar52._12_4_ >> 0x10) + auVar63._12_4_ + auVar6._12_4_ + (auVar39._12_4_ >> 0x10))
             * 0x10000 + auVar23._12_4_;
    uVar2 = uVar2 * 0x10000 + auVar40._0_4_;
    uVar28 = uVar28 * 0x10000 + auVar40._4_4_;
    uVar31 = uVar31 * 0x10000 + auVar40._8_4_;
    uVar34 = uVar34 * 0x10000 + auVar40._12_4_;
    uVar61 = (uint)local_140[0] & 0x80000000;
    uVar65 = (uint)fVar5 & 0x80000000;
    uVar67 = (uint)in_XMM0_Dc & 0x80000000;
    uVar69 = (uint)in_XMM0_Dd & 0x80000000;
    fVar36 = (float)(uVar70 >> 9 | uVar61 ^ 0x3f800000);
    fVar41 = (float)(uVar74 >> 9 | uVar65 ^ 0x3f800000);
    fVar44 = (float)(uVar76 >> 9 | uVar67 ^ 0x3f800000);
    fVar59 = (float)(uVar78 >> 9 | uVar69 ^ 0x3f800000);
    fVar60 = fVar36 + 49152.0;
    fVar64 = fVar41 + 49152.0;
    fVar66 = fVar44 + 49152.0;
    fVar68 = fVar59 + 49152.0;
    fVar11 = (float)((uVar70 & 0x1ff) << 0xe | uVar2 >> 0x12 | uVar61 ^ 0x34000000) -
             (float)(uVar61 ^ 0x34000000);
    fVar13 = (float)((uVar74 & 0x1ff) << 0xe | uVar28 >> 0x12 | uVar65 ^ 0x34000000) -
             (float)(uVar65 ^ 0x34000000);
    fVar15 = (float)((uVar76 & 0x1ff) << 0xe | uVar31 >> 0x12 | uVar67 ^ 0x34000000) -
             (float)(uVar67 ^ 0x34000000);
    fVar17 = (float)((uVar78 & 0x1ff) << 0xe | uVar34 >> 0x12 | uVar69 ^ 0x34000000) -
             (float)(uVar69 ^ 0x34000000);
    fVar36 = fVar36 - (fVar60 - 49152.0);
    fVar41 = fVar41 - (fVar64 - 49152.0);
    fVar44 = fVar44 - (fVar66 - 49152.0);
    fVar59 = fVar59 - (fVar68 - 49152.0);
    fVar12 = fVar36 + fVar11;
    fVar14 = fVar41 + fVar13;
    fVar16 = fVar44 + fVar15;
    fVar18 = fVar59 + fVar17;
    fVar47 = (float)((uint)fVar12 & 0xfffff000);
    fVar8 = (float)((uint)fVar14 & 0xfffff000);
    fVar9 = (float)((uint)fVar16 & 0xfffff000);
    fVar10 = (float)((uint)fVar18 & 0xfffff000);
    fVar37 = (fVar12 - fVar47) * 6.283203 + fVar47 * -1.781782e-05 +
             (((float)((uVar2 & 0x3ffff) << 5 | uVar61 ^ 0x28800000) - (float)(uVar61 ^ 0x28800000))
             + fVar11 + (fVar36 - fVar12)) * 6.2831855 + (fVar12 - fVar47) * -1.781782e-05;
    fVar42 = (fVar14 - fVar8) * 6.283203 + fVar8 * -1.781782e-05 +
             (((float)((uVar28 & 0x3ffff) << 5 | uVar65 ^ 0x28800000) - (float)(uVar65 ^ 0x28800000)
              ) + fVar13 + (fVar41 - fVar14)) * 6.2831855 + (fVar14 - fVar8) * -1.781782e-05;
    fVar45 = (fVar16 - fVar9) * 6.283203 + fVar9 * -1.781782e-05 +
             (((float)((uVar31 & 0x3ffff) << 5 | uVar67 ^ 0x28800000) - (float)(uVar67 ^ 0x28800000)
              ) + fVar15 + (fVar44 - fVar16)) * 6.2831855 + (fVar16 - fVar9) * -1.781782e-05;
    fVar48 = (fVar18 - fVar10) * 6.283203 + fVar10 * -1.781782e-05 +
             (((float)((uVar34 & 0x3ffff) << 5 | uVar69 ^ 0x28800000) - (float)(uVar69 ^ 0x28800000)
              ) + fVar17 + (fVar59 - fVar18)) * 6.2831855 + (fVar18 - fVar10) * -1.781782e-05;
    fVar71 = fVar37 + fVar47 * 6.283203;
    fVar75 = fVar42 + fVar8 * 6.283203;
    fVar77 = fVar45 + fVar9 * 6.283203;
    fVar79 = fVar48 + fVar10 * 6.283203;
    uVar2 = -(uint)(9.536743e-07 < ABS(local_140[0]));
    uVar28 = -(uint)(9.536743e-07 < ABS(fVar5));
    uVar31 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dc));
    uVar34 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dd));
    fVar25 = (float)(-(uint)(ABS(local_140[0]) <= 9.536743e-07) & (uint)local_140[0] |
                    (uint)fVar71 & uVar2);
    fVar29 = (float)(-(uint)(ABS(fVar5) <= 9.536743e-07) & (uint)fVar5 | (uint)fVar75 & uVar28);
    fVar32 = (float)(-(uint)(ABS(in_XMM0_Dc) <= 9.536743e-07) & (uint)in_XMM0_Dc |
                    (uint)fVar77 & uVar31);
    fVar35 = (float)(-(uint)(ABS(in_XMM0_Dd) <= 9.536743e-07) & (uint)in_XMM0_Dd |
                    (uint)fVar79 & uVar34);
    uVar61 = ((uint)fVar60 & 0xff) << 4;
    uVar65 = ((uint)fVar64 & 0xff) << 4;
    uVar67 = ((uint)fVar66 & 0xff) << 4;
    uVar69 = ((uint)fVar68 & 0xff) << 4;
    fVar68 = fVar25 * fVar25;
    fVar19 = fVar29 * fVar29;
    fVar20 = fVar32 * fVar32;
    fVar21 = fVar35 * fVar35;
    fVar5 = *(float *)(&DAT_14d2bcd04 + uVar61);
    fVar12 = *(float *)(&DAT_14d2bcd04 + uVar67);
    fVar14 = *(float *)(&DAT_14d2bcd04 + uVar65);
    fVar16 = *(float *)(&DAT_14d2bcd04 + uVar69);
    fVar18 = fVar25 * *(float *)(&DAT_14d2bcd0c + uVar61);
    fVar11 = fVar29 * *(float *)(&DAT_14d2bcd0c + uVar65);
    fVar13 = fVar32 * *(float *)(&DAT_14d2bcd0c + uVar67);
    fVar15 = fVar35 * *(float *)(&DAT_14d2bcd0c + uVar69);
    fVar38 = fVar5 + fVar18;
    fVar43 = fVar14 + fVar11;
    fVar46 = fVar12 + fVar13;
    fVar49 = fVar16 + fVar15;
    fVar50 = fVar25 * *(float *)(&DAT_14d2bcd00 + uVar61);
    fVar53 = fVar29 * *(float *)(&DAT_14d2bcd00 + uVar65);
    fVar54 = fVar32 * *(float *)(&DAT_14d2bcd00 + uVar67);
    fVar55 = fVar35 * *(float *)(&DAT_14d2bcd00 + uVar69);
    fVar17 = fVar38 + fVar50;
    fVar36 = fVar43 + fVar53;
    fVar41 = fVar46 + fVar54;
    fVar44 = fVar49 + fVar55;
    fVar59 = (*(float *)(&DAT_14d2bcd00 + uVar61) + *(float *)(&DAT_14d2bcd0c + uVar61)) -
             fVar25 * fVar5;
    fVar60 = (*(float *)(&DAT_14d2bcd00 + uVar65) + *(float *)(&DAT_14d2bcd0c + uVar65)) -
             fVar29 * fVar14;
    fVar64 = (*(float *)(&DAT_14d2bcd00 + uVar67) + *(float *)(&DAT_14d2bcd0c + uVar67)) -
             fVar32 * fVar12;
    fVar66 = (*(float *)(&DAT_14d2bcd00 + uVar69) + *(float *)(&DAT_14d2bcd0c + uVar69)) -
             fVar35 * fVar16;
    auVar22._0_4_ =
         fVar17 + *(float *)(&DAT_14d2bcd08 + uVar61) +
                  (float)(uVar2 & (uint)(fVar37 + (fVar47 * 6.283203 - fVar71))) * fVar59 +
                  fVar5 * fVar68 * (fVar68 * 0.041666493 + -0.5) +
                  fVar18 + (fVar5 - fVar38) + fVar50 + (fVar38 - fVar17) +
                  (fVar68 * 0.008333292 + -0.16666667) * fVar68 * fVar25 * fVar59;
    auVar22._4_4_ =
         fVar36 + *(float *)(&DAT_14d2bcd08 + uVar65) +
                  (float)(uVar28 & (uint)(fVar42 + (fVar8 * 6.283203 - fVar75))) * fVar60 +
                  fVar14 * fVar19 * (fVar19 * 0.041666493 + -0.5) +
                  fVar11 + (fVar14 - fVar43) + fVar53 + (fVar43 - fVar36) +
                  (fVar19 * 0.008333292 + -0.16666667) * fVar19 * fVar29 * fVar60;
    auVar22._8_4_ =
         fVar41 + *(float *)(&DAT_14d2bcd08 + uVar67) +
                  (float)(uVar31 & (uint)(fVar45 + (fVar9 * 6.283203 - fVar77))) * fVar64 +
                  fVar12 * fVar20 * (fVar20 * 0.041666493 + -0.5) +
                  fVar13 + (fVar12 - fVar46) + fVar54 + (fVar46 - fVar41) +
                  (fVar20 * 0.008333292 + -0.16666667) * fVar20 * fVar32 * fVar64;
    auVar22._12_4_ =
         fVar44 + *(float *)(&DAT_14d2bcd08 + uVar69) +
                  (float)(uVar34 & (uint)(fVar48 + (fVar10 * 6.283203 - fVar79))) * fVar66 +
                  fVar16 * fVar21 * (fVar21 * 0.041666493 + -0.5) +
                  fVar15 + (fVar16 - fVar49) + fVar55 + (fVar49 - fVar44) +
                  (fVar21 * 0.008333292 + -0.16666667) * fVar21 * fVar35 * fVar66;
    auVar39._4_4_ = -(uint)(10000.0 < fVar27);
    auVar39._0_4_ = -(uint)(10000.0 < fVar24);
    auVar39._8_4_ = -(uint)(10000.0 < fVar30);
    auVar39._12_4_ = -(uint)(10000.0 < fVar33);
    local_100[0] = blendvps(local_100[0],auVar22,auVar39);
  }
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      if ((uVar4 >> ((uint)uVar3 & 0x1f) & 1) != 0) {
        FUN_1455e5c20(local_140 + uVar3,local_100[0] + uVar3 * 4);
      }
      uVar2 = (uint)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < 4);
  }
  return local_100[0]._0_8_;
}



// FUNCTION 1455446c0 FUN_1455446c0 body=80 status=ok
// SIG undefined FUN_1455446c0(void)

void FUN_1455446c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x10,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSystemOutputMeta.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149da9a48;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(puVar1 + 1) = 0xff;
    return;
  }
  return;
}



// FUNCTION 145544740 FUN_145544740 body=56 status=ok
// SIG undefined FUN_145544740(void)

undefined8 FUN_145544740(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1455447c0 FUN_1455447c0 body=43 status=ok
// SIG undefined FUN_1455447c0(void)

undefined8 * FUN_1455447c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1455447f0 FUN_1455447f0 body=57 status=ok
// SIG undefined FUN_1455447f0(void)

void FUN_1455447f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x10,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSystemOutputMeta.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149da9a48;
    *(undefined1 *)(puVar1 + 1) = 0;
    return;
  }
  return;
}



// FUNCTION 145544830 FUN_145544830 body=528 status=ok
// SIG undefined FUN_145544830(void)

undefined8 * FUN_145544830(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xff;
  *param_1 = &PTR_FUN_149da9b00;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x2b;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 1;
  FUN_145387c70(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xff;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x2b;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  memset(param_1 + 0x29,0,0xc0);
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  *(byte *)((longlong)param_1 + 0x267) = *(byte *)((longlong)param_1 + 0x267) & 0xf0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xff;
  *(undefined1 *)((longlong)param_1 + 0x265) = 0;
  *(undefined1 *)((longlong)param_1 + 0x266) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x2b;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x2b;
  return param_1;
}



// FUNCTION 145544a40 FUN_145544a40 body=1767 status=ok
// SIG undefined FUN_145544a40(void)

int FUN_145544a40(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                 longlong param_5)

{
  HRESULT HVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  HANDLE pvVar12;
  DWORD_PTR DVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 uVar19;
  char cVar20;
  uint local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  uint local_b8;
  int local_b4;
  longlong *local_b0;
  undefined4 local_a4;
  char local_a0;
  undefined8 local_98;
  short local_88 [8];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60 [2];
  longlong *local_50 [3];
  
  iVar5 = 2;
  iVar3 = 2;
  local_res10 = param_2;
  local_res18 = param_3;
  HVar1 = CoInitializeEx((LPVOID)0x0,2);
  param_1[1] = (longlong)param_3;
  (**(code **)(*param_3 + 0x18))(param_3,&local_b4,param_1 + 2);
  *(uint *)(param_1 + 2) = (uint)*(ushort *)((longlong)param_1 + 0x12);
  if ((DAT_14c79c0b8 == 0) && (DAT_14c79c0b8 = FUN_1450a3890(), DAT_14c79c0b8 == 0))
  goto LAB_145544b58;
  uVar17 = 0;
  if (local_b4 == 0) {
    if (DAT_14c79c0b8 == 0) {
      DAT_14c79c0b8 = FUN_1450a3890();
    }
    if ((int)param_1[2] == 0xb0) {
      uVar17 = 2;
    }
    plVar8 = (longlong *)FUN_1450a4370(DAT_14c79c0b8,local_60,uVar17);
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
      param_1[4] = 0;
    }
    param_1[4] = *plVar8;
    *(int *)(param_1 + 5) = (int)plVar8[1];
    *plVar8 = 0;
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
      local_60[0] = (longlong *)0x0;
    }
    if (param_1[4] == 0) {
      iVar3 = 0x5d;
      goto LAB_145544b58;
    }
    local_b4 = (int)param_1[5];
  }
  plVar8 = param_1 + 4;
  if (DAT_14c79c0b8 == 0) {
    DAT_14c79c0b8 = FUN_1450a3890();
  }
  plVar9 = (longlong *)FUN_1450a3df0(DAT_14c79c0b8 + 8,local_50,local_b4);
  if ((longlong *)*plVar8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar8 + 0x10))();
    *plVar8 = 0;
  }
  *plVar8 = *plVar9;
  *(int *)(param_1 + 5) = (int)plVar9[1];
  *plVar9 = 0;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
    local_50[0] = (longlong *)0x0;
  }
  plVar8 = (longlong *)*plVar8;
  if ((plVar8 == (longlong *)0x0) || ((int)param_1[5] == -1)) goto LAB_145544b58;
  local_68[0] = 0;
  (**(code **)(*plVar8 + 0x20))(plVar8,0,&local_b0);
  if (local_b0 == (longlong *)0x0) goto LAB_145544b58;
  local_78 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  (**(code **)(*local_b0 + 0x28))(local_b0,&DAT_14ab422c0,local_88);
  if (local_88[0] == 0) {
    PropVariantClear((PROPVARIANT *)local_88);
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    goto LAB_145544b58;
  }
  puVar10 = (uint *)FUN_145547640(local_70,local_78);
  uVar14 = *puVar10;
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,(char)uVar14 == '\x02');
  PropVariantClear((PROPVARIANT *)local_88);
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
    local_b0 = (longlong *)0x0;
  }
  cVar20 = '\0';
  uVar2 = 0xffffffff;
  uVar16 = 0xffffffff;
  uVar18 = *(uint *)(param_5 + 4);
  local_b8 = uVar18;
  if (((int)param_1[2] == 0xae) && (param_4 != 0)) {
    param_1[3] = param_4;
    if ((*(char *)(param_4 + 8) != '\0') && ((uVar18 & 0xfffff000) != 0x4000)) {
      cVar20 = '\x01';
    }
    local_a4 = uVar18;
    if (((0x300 < (uVar18 & 0xf00)) || (((char)uVar18 == '\0' && ((uVar18 & 0xf00) != 0x300)))) &&
       (cVar20 != '\0')) {
      if ((byte)local_res8[0] == '\0') {
        local_a4 = *(uint *)(param_4 + 0x10);
      }
      else {
        local_a4 = *(uint *)(param_4 + 0xc);
      }
    }
    local_a0 = cVar20;
    if (*(char *)(param_4 + 0x14) == '\0') {
      local_98._0_5_ = CONCAT14((undefined1)local_a4,(int)local_98);
      local_98._0_7_ = CONCAT25(local_a4._1_2_,(undefined5)local_98);
      local_98 = CONCAT17(local_a4._3_1_,(undefined7)local_98);
    }
    else {
      uVar2 = (uint)*(ushort *)(param_4 + 0x16);
      local_98._0_5_ = CONCAT14((undefined1)local_a4,(int)local_98);
      local_98._0_7_ = CONCAT25(local_a4._1_2_,(undefined5)local_98);
      local_98 = CONCAT17(local_a4._3_1_,(undefined7)local_98);
      plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 8))();
      lVar11 = (**(code **)(*plVar8 + 0x88))(plVar8);
      uVar16 = *(uint *)(lVar11 + 0x44);
      if (uVar16 < uVar2) {
        uVar2 = 0xffffffff;
        uVar16 = 0xffffffff;
      }
    }
    local_b8 = local_98._4_4_;
    *(undefined1 *)(param_1[3] + 0x18) = 0;
  }
  if (((int)param_1[2] == 0xaf) && (param_4 != 0)) {
    uVar19 = *(undefined1 *)(param_4 + 8);
  }
  else {
    uVar19 = 1;
  }
  if ((cVar20 != '\0') && (iVar3 = FUN_145546c10(param_1,uVar2,uVar16), iVar3 == 1)) {
    bVar15 = (byte)local_res8[0];
    *(byte *)((longlong)param_1 + 0x267) =
         ((byte)local_res8[0] & 1) << 2 | *(byte *)((longlong)param_1 + 0x267) & 0xfb | 2;
    plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 8))();
    lVar11 = (**(code **)(*plVar8 + 0x90))(plVar8);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar11 + 0x84);
    if (bVar15 != 0) {
      uVar14 = 3;
      bVar15 = 0;
      do {
        bVar15 = bVar15 + 1;
        uVar14 = uVar14 & uVar14 - 1;
      } while (uVar14 != 0);
      uVar14 = bVar15 | 0x3100;
    }
  }
  iVar3 = FUN_1455464a0(param_1,uVar14,uVar19);
  if ((iVar3 != 1) ||
     (iVar4 = (**(code **)(*(longlong *)param_1[10] + 0x50))(), iVar3 = iVar5, iVar4 < 0))
  goto LAB_145544b58;
  uVar14 = 0x2d63f10c;
  if ((*(byte *)((longlong)param_1 + 0x267) & 2) == 0) {
    if ((0x300 < (uVar18 & 0xf00)) || (((char)uVar18 == '\0' && ((uVar18 & 0xf00) != 0x300)))) {
      uVar18 = *(uint *)(param_1 + 0xd);
    }
    *(uint *)(param_1 + 6) = uVar18;
    *(uint *)(param_5 + 4) = uVar18;
  }
  else {
    if ((0x300 < (local_b8 & 0xf00)) || (((char)local_b8 == '\0' && ((local_b8 & 0xf00) != 0x300))))
    {
      local_b8 = 0x2d63f10c;
    }
    *(uint *)(param_1 + 6) = local_b8;
    *(undefined1 *)(param_5 + 4) = 0;
    *(uint *)(param_5 + 4) = *(byte *)(param_5 + 4) | 0x300;
    iVar5 = (**(code **)(*(longlong *)param_1[0x25] + 0x28))();
    if (iVar5 < 0) goto LAB_145544b58;
    *(undefined1 *)((longlong)param_1 + 0x264) = 1;
    plVar8 = (longlong *)(**(code **)(*local_res18 + 8))();
    lVar11 = (**(code **)(*plVar8 + 0x88))(plVar8);
    plVar8 = param_1 + 0x4a;
    local_98 = *(undefined8 *)(lVar11 + 0x14);
    pvVar12 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)*(uint *)(lVar11 + 0x1c),
                           FUN_1455475f0,param_1,4,(LPDWORD)&local_res18);
    *plVar8 = (longlong)pvVar12;
    if (pvVar12 == (HANDLE)0x0) {
LAB_145544fe0:
      *plVar8 = 0;
    }
    else {
      FUN_145073560(pvVar12,(ulonglong)local_res18 & 0xffffffff,"AK_MSCoreAudioThread");
      iVar5 = (int)local_98;
      BVar6 = SetThreadPriority((HANDLE)*plVar8,(int)local_98);
      if ((BVar6 == 0) && (iVar5 != 0x10000)) {
        CloseHandle((HANDLE)*plVar8);
        goto LAB_145544fe0;
      }
      uVar18 = local_98._4_4_;
      if (local_98._4_4_ != 0) {
        pvVar12 = GetCurrentProcess();
        BVar6 = GetProcessAffinityMask(pvVar12,(PDWORD_PTR)local_res8,(PDWORD_PTR)local_68);
        if (BVar6 != 0) {
          uVar18 = uVar18 & local_res8[0];
        }
        DVar13 = SetThreadAffinityMask((HANDLE)*plVar8,(ulonglong)uVar18);
        if (DVar13 == 0) {
          CloseHandle((HANDLE)*plVar8);
          goto LAB_145544fe0;
        }
      }
      DVar7 = ResumeThread((HANDLE)*plVar8);
      if (DVar7 == 0) {
        CloseHandle((HANDLE)*plVar8);
        goto LAB_145544fe0;
      }
    }
    if (param_1[0x4a] == 0) {
      (**(code **)(*param_1 + 8))(param_1,local_res10);
      goto LAB_145544b58;
    }
  }
  plVar8 = local_res10;
  if ((*(byte *)((longlong)param_1 + 0x267) & 2) == 0) {
    uVar14 = *(uint *)(param_1 + 0xd);
  }
  uVar18 = *(uint *)(param_1 + 6);
  uVar16 = uVar14 & 0xff;
  if ((((uVar18 & 0xff) != uVar16) || (((uVar18 ^ uVar14) & 0xf00) != 0)) ||
     (((uVar18 ^ uVar14) & 0xfffff000) != 0)) {
    lVar11 = (**(code **)(*local_res10 + 0x18))
                       (local_res10,(uVar18 & 0xff) * (uVar16 + 7 >> 3) * 0x20,0x10,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Win32\\AkSinkCoreAudio.cpp"
                        ,0x53f);
    param_1[7] = lVar11;
    if (lVar11 == 0) {
      iVar3 = 0x34;
      goto LAB_145544b58;
    }
    lVar11 = (**(code **)(*plVar8 + 8))
                       (plVar8,*(ushort *)(param_1 + 0xe) * uVar16 * 4,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Win32\\AkSinkCoreAudio.cpp"
                        ,0x543);
    param_1[9] = lVar11;
    if (lVar11 == 0) {
      iVar3 = 0x34;
      goto LAB_145544b58;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x267) & 2) != 0) && ((char)param_1[0xd] == '\x01')) {
    lVar11 = (**(code **)(*plVar8 + 0x18))
                       (plVar8,0x40,0x10,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Win32\\AkSinkCoreAudio.cpp"
                        ,0x54d);
    param_1[8] = lVar11;
    if (lVar11 == 0) {
      iVar3 = 0x34;
      goto LAB_145544b58;
    }
  }
  *(byte *)((longlong)param_1 + 0x267) = *(byte *)((longlong)param_1 + 0x267) | 8;
  iVar3 = 1;
LAB_145544b58:
  if (-1 < HVar1) {
    CoUninitialize();
  }
  return iVar3;
}



// FUNCTION 145545130 FUN_145545130 body=611 status=ok
// SIG undefined FUN_145545130(void)

undefined8 FUN_145545130(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(char *)((longlong)param_1 + 0x264) != '\0') && (param_1[0x4a] != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x264) = 0;
    WaitForSingleObject((HANDLE)param_1[0x4a],0xffffffff);
    CloseHandle((HANDLE)param_1[0x4a]);
    param_1[0x4a] = 0;
  }
  if ((HANDLE)param_1[0x4b] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x4b]);
  }
  lVar5 = param_1[0x41];
  param_1[0x4b] = 0;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x42);
  if (lVar5 != uVar2 * 0x38 + lVar5) {
    lVar3 = lVar5 + 0x14;
    lVar4 = lVar5;
    do {
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined4 *)(lVar3 + 4) = 0;
      *(undefined4 *)(lVar3 + 8) = 0;
      if (*(void **)(lVar3 + -0xc) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)(lVar3 + -0xc));
        *(undefined8 *)(lVar3 + -0xc) = 0;
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x42);
      lVar4 = lVar4 + 0x38;
      lVar5 = param_1[0x41];
      lVar3 = lVar3 + 0x38;
    } while (lVar4 != uVar2 * 0x38 + lVar5);
  }
  if (lVar5 != 0) {
    lVar3 = uVar2 * 0x38 + lVar5;
    if (lVar5 != lVar3) {
      lVar5 = lVar5 + 0x14;
      do {
        *(undefined8 *)(lVar5 + -4) = 0;
        *(undefined4 *)(lVar5 + 4) = 0;
        *(undefined4 *)(lVar5 + 8) = 0;
        if (*(void **)(lVar5 + -0xc) != (void *)0x0) {
          AK::MemoryMgr::Free(0,*(void **)(lVar5 + -0xc));
          *(undefined8 *)(lVar5 + -0xc) = 0;
        }
        plVar1 = *(longlong **)(lVar5 + 0x1c);
        if (plVar1 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 0x1c) = 0;
          (**(code **)(*plVar1 + 0x10))();
        }
        lVar4 = lVar5 + 0x24;
        lVar5 = lVar5 + 0x38;
      } while (lVar4 != lVar3);
    }
    *(undefined4 *)(param_1 + 0x42) = 0;
    AK::MemoryMgr::Free(5,(void *)param_1[0x41]);
    param_1[0x41] = 0;
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    param_1[0xb] = 0;
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x58))();
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
    param_1[10] = 0;
  }
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  if ((void *)param_1[0x26] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[0x26]);
    param_1[0x26] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_1450718b0(param_1 + 0xc);
  }
  if (param_1[0x21] != 0) {
    FUN_1450718b0();
    FUN_1453880c0(param_1 + 0x13);
  }
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[7] = 0;
  }
  if (param_1[9] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[9] = 0;
  }
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[8] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 1455453d0 FUN_1455453d0 body=185 status=ok
// SIG undefined FUN_1455453d0(void)

undefined8 FUN_1455453d0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int local_res8 [2];
  
  if (*(char *)(param_1 + 0x265) == '\0') {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))
                      (*(longlong **)(param_1 + 0x50),local_res8);
    if (iVar3 == 0) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
      uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar1 = *(ushort *)(param_1 + 0x118);
      if (*(ushort *)(param_1 + 0x118) == 0) {
        uVar1 = uVar2;
      }
      uVar4 = (uint)(*(int *)(param_1 + 0x90) - local_res8[0]) / (uint)uVar1;
      uVar5 = uVar4;
      if (((*(byte *)(param_1 + 0x267) & 2) != 0) &&
         (uVar5 = (uint)(((ulonglong)(uint)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x144)) /
                         0xc) / (ulonglong)uVar2), uVar4 < uVar5)) {
        uVar5 = uVar4;
      }
      *param_2 = uVar5;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 145545490 FUN_145545490 body=895 status=ok
// SIG undefined FUN_145545490(void)

ulonglong FUN_145545490(longlong param_1,AkAudioBuffer *param_2,AkAudioBuffer *param_3,int *param_4,
                       undefined8 param_5)

{
  float *pfVar1;
  bool bVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong extraout_RAX;
  int iVar7;
  AkAudioBuffer *pAVar8;
  byte *pbVar9;
  undefined4 uVar10;
  longlong local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  bVar4 = *(byte *)(param_1 + 0x267);
  if ((bVar4 & 8) != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar10 = 0x2d63f10c;
      if ((bVar4 & 2) == 0) {
        uVar10 = *(undefined4 *)(param_1 + 0x68);
      }
      local_98 = 0;
      uStack_90 = 0x3f800000;
      local_68 = 0x3f800000;
      uStack_60 = 0;
      local_74 = 0x3f800000;
      local_70 = 0x3f800000;
      local_6c = 0xffff;
      local_80 = 0;
      local_78 = 0;
      local_88 = 0x3f800000;
      local_58 = 0x3f800000;
      local_54 = 0;
      local_52 = 1;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                (*(longlong **)(param_1 + 8),&local_98,*(undefined4 *)(param_1 + 0x30),uVar10,
                 *(longlong *)(param_1 + 0x38));
    }
    pbVar9 = (byte *)(param_1 + 0x267);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1450919e0(0x3102,*(undefined4 *)(param_1 + 0x68),0);
    }
    *pbVar9 = *pbVar9 & 0xf7;
    bVar4 = *pbVar9;
  }
  if (((bVar4 & 2) == 0) || (*(int *)(param_1 + 0x244) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  }
  uVar3 = param_5;
  if ((*(byte *)(param_1 + 0x267) & 2) == 0) {
    pAVar8 = (AkAudioBuffer *)(param_1 + 0x60);
    pfVar1 = *(float **)(param_1 + 0x38);
    if (*(short *)(param_1 + 0x118) == 0) {
      FUN_145547170(param_1,param_2,pAVar8,&param_5,pfVar1);
    }
    else if (pfVar1 == (float *)0x0) {
      AkMixer::ApplyGain(param_2,pAVar8,param_5,0);
    }
    else {
      memset(*(void **)pAVar8,0,
             (ulonglong)((uint)*(byte *)(param_1 + 0x68) * (uint)*(ushort *)(param_1 + 0x70) * 4));
      AkMixer::MixNinNChannels
                (param_2,pAVar8,(AkRamp *)&param_5,pfVar1,pfVar1,
                 1.0 / (float)*(ushort *)(param_2 + 0x12),(uint)*(ushort *)(param_2 + 0x12));
    }
    uVar6 = (ulonglong)*(ushort *)(param_2 + 0x12);
    *(ushort *)(param_1 + 0x72) = *(ushort *)(param_2 + 0x12);
  }
  else {
    local_a8 = *(undefined2 *)(param_2 + 0x12);
    local_ac = 0x2b;
    local_b8 = *(longlong *)(param_1 + 0x130) + (ulonglong)*(uint *)(param_1 + 0x140) * 4;
    local_b0 = 0x2d63f10c;
    local_a6 = local_a8;
    FUN_145547170(param_1,param_2,&local_b8,&param_5,*(undefined8 *)(param_1 + 0x38));
    iVar7 = (local_b0 & 0xff) * (uint)*(ushort *)(param_2 + 0x12);
    uVar5 = *(int *)(param_1 + 0x140) + iVar7;
    uVar6 = (ulonglong)uVar5 / (ulonglong)*(uint *)(param_1 + 0x138);
    *(uint *)(param_1 + 0x140) = uVar5 % *(uint *)(param_1 + 0x138);
    LOCK();
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar7;
    UNLOCK();
  }
  pAVar8 = (AkAudioBuffer *)(param_1 + 0x60);
  *(byte *)(param_1 + 0x267) = *(byte *)(param_1 + 0x267) | 1;
  if ((param_3 != (AkAudioBuffer *)0x0) && (*(longlong *)param_3 != 0)) {
    pfVar1 = *(float **)(param_1 + 0x40);
    param_5 = uVar3;
    if (*(short *)(param_1 + 0x118) == 0) {
      FUN_145547170(param_1,param_3,pAVar8,&param_5,pfVar1);
    }
    else if (pfVar1 == (float *)0x0) {
      AkMixer::ApplyGain(param_3,pAVar8,uVar3,0);
    }
    else {
      memset(*(void **)pAVar8,0,
             (ulonglong)((uint)*(byte *)(param_1 + 0x68) * (uint)*(ushort *)(param_1 + 0x70) * 4));
      AkMixer::MixNinNChannels
                (param_3,pAVar8,(AkRamp *)&param_5,pfVar1,pfVar1,
                 1.0 / (float)*(ushort *)(param_3 + 0x12),(uint)*(ushort *)(param_3 + 0x12));
    }
    uVar6 = (ulonglong)*(ushort *)(param_3 + 0x12);
    *(ushort *)(param_1 + 0x72) = *(ushort *)(param_3 + 0x12);
  }
  if (bVar2) {
    if (*param_4 != 0) {
      FUN_1455461b0(param_1,param_4,uVar3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
    uVar6 = extraout_RAX;
  }
  return uVar6;
}



// FUNCTION 145545810 FUN_145545810 body=808 status=ok
// SIG undefined FUN_145545810(void)

void FUN_145545810(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int local_res8;
  longlong local_res10;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
  if ((iVar3 == 0) && (local_res8 == 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x266) = 1;
    }
    if ((*(byte *)(param_1 + 0x267) & 2) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
      *(undefined8 *)(param_1 + 0x13c) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0;
      if ((*(int *)(param_1 + 0x244) != 0) &&
         (lVar4 = *(longlong *)(param_1 + 0x208),
         lVar4 != (ulonglong)*(uint *)(param_1 + 0x210) * 0x38 + lVar4)) {
        do {
          *(undefined8 *)(lVar4 + 0x14) = 0;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          lVar4 = lVar4 + 0x38;
        } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x210) * 0x38 +
                          *(longlong *)(param_1 + 0x208));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
    }
  }
  bVar2 = *(byte *)(param_1 + 0x267) & 1;
  if (*(short *)(param_1 + 0x118) == 0) {
    if ((bVar2 == 0) || (*(short *)(param_1 + 0x72) == 0)) {
      local_res10 = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                        (*(longlong **)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x70),&local_res10
                        );
      if (iVar3 == 0) {
        if (local_res10 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                    (*(longlong **)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x70),2);
          goto LAB_145545a20;
        }
      }
      else if ((iVar3 == -0x7776fffa) &&
              (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(), cVar1 == '\0'))
      goto LAB_145545a20;
      *(undefined1 *)(param_1 + 0x265) = 1;
    }
    else {
      FUN_145547280(param_1);
    }
  }
  else {
    if (bVar2 == 0) {
      memset(*(void **)(param_1 + 0x60),0,
             (ulonglong)((uint)*(byte *)(param_1 + 0x68) * (uint)*(ushort *)(param_1 + 0x70) * 4));
      *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_1 + 0x70);
    }
    iVar3 = (*(short *)(param_1 + 0x11a) != *(short *)(param_1 + 0x118)) + 0x2d;
    do {
      if (iVar3 == 0x2d) {
        FUN_1453883a0(param_1 + 0x108);
        FUN_145547280(param_1,param_1 + 0x108);
        *(undefined2 *)(param_1 + 0x11a) = 0;
        *(undefined4 *)(param_1 + 0xc4) = 0;
      }
      iVar3 = FUN_1453882f0(param_1 + 0x98,(undefined8 *)(param_1 + 0x60),param_1 + 0x108);
    } while (iVar3 == 0x2d);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
LAB_145545a20:
  iVar3 = (uint)*(ushort *)(param_1 + 0x70) + (uint)*(ushort *)(param_1 + 0x70) * 2;
  uVar5 = iVar3 * 4;
  if ((((*(byte *)(param_1 + 0x267) & 1) == 0) && ((*(byte *)(param_1 + 0x267) & 2) != 0)) &&
     (uVar5 <= (uint)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x144)))) {
    memset((void *)(*(longlong *)(param_1 + 0x130) + (ulonglong)*(uint *)(param_1 + 0x140) * 4),0,
           (ulonglong)(uint)(iVar3 * 0x10));
    *(uint *)(param_1 + 0x140) = (*(int *)(param_1 + 0x140) + uVar5) % *(uint *)(param_1 + 0x138);
    LOCK();
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + uVar5;
    UNLOCK();
    if (*(int *)(param_1 + 0x244) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
      lVar4 = *(longlong *)(param_1 + 0x208);
      if (lVar4 != (ulonglong)*(uint *)(param_1 + 0x210) * 0x38 + lVar4) {
        do {
          if (*(int *)(lVar4 + 0x2c) != 0x11) {
            *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
            *(undefined4 *)(lVar4 + 0x2c) = 0x11;
          }
          lVar4 = lVar4 + 0x38;
        } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x210) * 0x38 +
                          *(longlong *)(param_1 + 0x208));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
    }
  }
  *(byte *)(param_1 + 0x267) = *(byte *)(param_1 + 0x267) & 0xfe;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) != '\0')) {
    *(undefined1 *)(param_1 + 0x265) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x18) = 0;
  }
  return;
}



// FUNCTION 145545b90 FUN_145545b90 body=1559 status=ok
// SIG undefined FUN_145545b90(void)

void FUN_145545b90(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  undefined1 local_d8 [8];
  void *local_d0;
  longlong local_c8 [17];
  
  CoInitializeEx((LPVOID)0x0,0);
  cVar2 = *(char *)(param_1 + 0x264);
  while (cVar2 != '\0') {
    DVar4 = WaitForSingleObject(*(HANDLE *)(param_1 + 600),0x32);
    if (DVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                        (*(longlong **)(param_1 + 0x128),local_d8,local_res18);
      if (iVar5 == 0) {
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x144) / 0xc;
        uVar7 = (uint)uVar9;
        uVar16 = (ulonglong)local_res18[0];
        if (uVar7 < local_res18[0]) {
          uVar16 = uVar9;
        }
        iVar5 = (int)uVar16;
        local_res20 = local_res18[0] - iVar5;
        if (uVar7 < local_res18[0]) {
          *(undefined1 *)(param_1 + 0x266) = 1;
        }
        local_res10[0] = 0;
        plVar8 = local_c8;
        bVar17 = true;
        plVar13 = local_c8;
        puVar18 = (undefined8 *)(param_1 + 0x150);
        lVar11 = 0xc;
        do {
          iVar6 = (**(code **)(*(longlong *)*puVar18 + 0x18))
                            ((longlong *)*puVar18,plVar13,local_res10);
          if ((iVar6 != 0) || (*plVar8 == 0)) {
            bVar17 = false;
          }
          plVar13 = plVar13 + 1;
          puVar18 = puVar18 + 2;
          plVar8 = plVar8 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if (bVar17) {
          if (0 < iVar5) {
            do {
              lVar11 = 0;
              puVar15 = (undefined4 *)
                        (*(longlong *)(param_1 + 0x130) + (ulonglong)*(uint *)(param_1 + 0x13c) * 4)
              ;
              do {
                *(undefined4 *)local_c8[lVar11] = *puVar15;
                local_c8[lVar11] = local_c8[lVar11] + 4;
                *(undefined4 *)local_c8[lVar11 + 1] = puVar15[1];
                local_c8[lVar11 + 1] = local_c8[lVar11 + 1] + 4;
                *(undefined4 *)local_c8[lVar11 + 2] = puVar15[2];
                local_c8[lVar11 + 2] = local_c8[lVar11 + 2] + 4;
                puVar1 = puVar15 + 3;
                puVar15 = puVar15 + 4;
                *(undefined4 *)local_c8[lVar11 + 3] = *puVar1;
                local_c8[lVar11 + 3] = local_c8[lVar11 + 3] + 4;
                lVar11 = lVar11 + 4;
              } while (lVar11 < 9);
              for (; lVar11 < 0xc; lVar11 = lVar11 + 1) {
                uVar3 = *puVar15;
                puVar15 = puVar15 + 1;
                *(undefined4 *)local_c8[lVar11] = uVar3;
                local_c8[lVar11] = local_c8[lVar11] + 4;
              }
              *(uint *)(param_1 + 0x13c) =
                   (*(int *)(param_1 + 0x13c) + 0xcU) % *(uint *)(param_1 + 0x138);
              LOCK();
              *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -0xc;
              UNLOCK();
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          if (local_res20 != 0) {
            lVar11 = 0;
            uVar7 = local_res20 * 4;
            do {
              memset((void *)local_c8[lVar11],0,(ulonglong)uVar7);
              lVar11 = lVar11 + 1;
            } while (lVar11 < 0xc);
          }
        }
        plVar8 = *(longlong **)(param_1 + 0x208);
        if (plVar8 != plVar8 + (ulonglong)*(uint *)(param_1 + 0x210) * 7) {
          puVar12 = (uint *)((longlong)plVar8 + 0x14);
          do {
            iVar6 = (**(code **)(**(longlong **)(puVar12 + 7) + 0x18))
                              (*(longlong **)(puVar12 + 7),&local_d0,local_res10);
            if ((iVar6 == 0) && (local_d0 != (void *)0x0)) {
              if ((*plVar8 == -1) && (puVar12[6] == 0x11)) {
                (**(code **)(**(longlong **)(puVar12 + 7) + 0x40))(*(longlong **)(puVar12 + 7),0);
                (**(code **)(**(longlong **)(puVar12 + 7) + 0x38))
                          (*(longlong **)(puVar12 + 7),0,0,0);
                memset(local_d0,0,(ulonglong)(uint)(iVar5 * 4));
              }
              else {
                (**(code **)(**(longlong **)(puVar12 + 7) + 0x40))
                          (*(longlong **)(puVar12 + 7),0x3f800000);
                fVar19 = 1.0 / *(float *)(param_1 + 0x260);
                (**(code **)(**(longlong **)(puVar12 + 7) + 0x38))
                          (*(longlong **)(puVar12 + 7),fVar19 * (float)puVar12[3],
                           fVar19 * (float)puVar12[4],-(fVar19 * (float)puVar12[5]));
                uVar7 = puVar12[2];
                if (local_res18[0] < puVar12[2]) {
                  uVar7 = local_res18[0];
                }
                uVar10 = puVar12[-1] - *puVar12;
                local_res20 = local_res18[0] - uVar7;
                uVar9 = (ulonglong)uVar10;
                if (uVar7 < uVar10) {
                  uVar9 = (ulonglong)uVar7;
                }
                memcpy(local_d0,(void *)(*(longlong *)(puVar12 + -3) + (ulonglong)*puVar12 * 4),
                       uVar9 * 4);
                iVar6 = (int)uVar9;
                *puVar12 = (*puVar12 + iVar6) % puVar12[-1];
                LOCK();
                puVar12[2] = puVar12[2] - iVar6;
                UNLOCK();
                uVar10 = uVar7 - iVar6;
                memcpy((void *)((longlong)local_d0 + uVar9 * 4),
                       (void *)(*(longlong *)(puVar12 + -3) + (ulonglong)*puVar12 * 4),
                       (ulonglong)uVar10 << 2);
                *puVar12 = (*puVar12 + uVar10) % puVar12[-1];
                LOCK();
                puVar12[2] = puVar12[2] - uVar10;
                UNLOCK();
                if (local_res20 != 0) {
                  memset((void *)((longlong)local_d0 + (ulonglong)uVar7 * 4),0,
                         (ulonglong)(uint)(local_res20 * 4));
                }
                if ((puVar12[6] == 0x11) && (puVar12[2] == 0)) {
                  *plVar8 = -1;
                  puVar12[6] = 0x11;
                  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
                }
              }
            }
            plVar8 = plVar8 + 7;
            puVar12 = puVar12 + 0xe;
          } while (plVar8 != (longlong *)
                             ((ulonglong)*(uint *)(param_1 + 0x210) * 0x38 +
                             *(longlong *)(param_1 + 0x208)));
        }
        puVar12 = (uint *)(param_1 + 0x210);
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x48))();
        if (iVar5 != 0) {
          *(undefined1 *)(param_1 + 0x265) = 1;
        }
        uVar9 = *(ulonglong *)(param_1 + 0x208);
        if (uVar9 != (ulonglong)*puVar12 * 0x38 + uVar9) {
          lVar11 = uVar9 + 0x14;
          do {
            if ((*(longlong *)(lVar11 + 0x1c) == 0) && (*(int *)(lVar11 + 8) == 0)) {
              *(undefined8 *)(lVar11 + -4) = 0;
              *(undefined4 *)(lVar11 + 4) = 0;
              *(undefined4 *)(lVar11 + 8) = 0;
              if (*(void **)(lVar11 + -0xc) != (void *)0x0) {
                AK::MemoryMgr::Free(0,*(void **)(lVar11 + -0xc));
                *(undefined8 *)(lVar11 + -0xc) = 0;
              }
              if (uVar9 < *(longlong *)(param_1 + 0x208) + -0x38 + (ulonglong)*puVar12 * 0x38) {
                FUN_145547320();
              }
              lVar14 = (ulonglong)*puVar12 * 0x38 + *(longlong *)(param_1 + 0x208);
              *(undefined8 *)(lVar14 + -0x28) = 0;
              *(undefined4 *)(lVar14 + -0x20) = 0;
              *(undefined4 *)(lVar14 + -0x1c) = 0;
              if (*(void **)(lVar14 + -0x30) != (void *)0x0) {
                AK::MemoryMgr::Free(0,*(void **)(lVar14 + -0x30));
                *(undefined8 *)(lVar14 + -0x30) = 0;
              }
              plVar8 = *(longlong **)(lVar14 + -8);
              if (plVar8 != (longlong *)0x0) {
                *(undefined8 *)(lVar14 + -8) = 0;
                (**(code **)(*plVar8 + 0x10))();
              }
              *puVar12 = *puVar12 - 1;
            }
            else {
              uVar9 = uVar9 + 0x38;
              lVar11 = lVar11 + 0x38;
            }
          } while (uVar9 != (ulonglong)*(uint *)(param_1 + 0x210) * 0x38 +
                            *(longlong *)(param_1 + 0x208));
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
        (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
      }
      else {
        *(undefined1 *)(param_1 + 0x265) = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x265) = 1;
    }
    cVar2 = *(char *)(param_1 + 0x264);
  }
                    /* WARNING: Could not recover jumptable at 0x0001455461a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}



// FUNCTION 1455461b0 FUN_1455461b0 body=748 status=ok
// SIG undefined FUN_1455461b0(void)

longlong * FUN_1455461b0(longlong param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  void *pvVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  int local_res8;
  float local_98;
  float fStack_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  short local_78;
  short local_76;
  
  lVar15 = 0;
  local_res8 = 0;
  plVar9 = (longlong *)(ulonglong)*(ushort *)(param_1 + 0x70);
  iVar14 = (uint)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x144)) / 0xc +
           (uint)*(ushort *)(param_1 + 0x70);
  if (0 < *param_2) {
    fStack_94 = (float)((ulonglong)param_3 >> 0x20);
    local_98 = (float)param_3;
    do {
      plVar13 = (longlong *)0x0;
      plVar5 = *(longlong **)(param_1 + 0x208);
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 2) + lVar15);
      plVar7 = *(longlong **)(*(longlong *)(param_2 + 4) + lVar15);
      plVar9 = plVar5 + (ulonglong)*(uint *)(param_1 + 0x210) * 7;
      if (plVar5 != plVar9) {
        plVar11 = plVar5;
        do {
          if ((*plVar11 == *plVar7) && (*(int *)((longlong)plVar11 + 0x2c) == 0x2d))
          goto LAB_14554638a;
          if ((plVar13 == (longlong *)0x0) &&
             ((*plVar11 == -1 && (*(int *)((longlong)plVar11 + 0x2c) == 0x11)))) {
            plVar13 = plVar11;
          }
          plVar11 = plVar11 + 7;
          plVar9 = plVar5 + (ulonglong)*(uint *)(param_1 + 0x210) * 7;
        } while (plVar11 != plVar9);
      }
      plVar11 = plVar13;
      uVar3 = *(ushort *)(param_1 + 0x70);
      uVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
      puVar1 = (uint *)((longlong)plVar11 + 0x14);
      iVar12 = (uVar8 & 0xffff) * (uint)uVar3;
      puVar2 = (uint *)(plVar11 + 3);
      *puVar1 = 0;
      *puVar2 = 0;
      if ((int)plVar11[2] == iVar12) {
        *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
LAB_14554632d:
        piVar16 = (int *)((longlong)plVar11 + 0x1c);
        *plVar11 = *plVar7;
        *(undefined4 *)((longlong)plVar11 + 0x2c) = 0x2d;
        memset((void *)(plVar11[1] + (ulonglong)*puVar2 * 4),0,(ulonglong)(uint)(iVar12 * 4));
        *puVar2 = (*puVar2 + iVar12) % *(uint *)(plVar11 + 2);
        LOCK();
        *piVar16 = *piVar16 + iVar12;
        UNLOCK();
        *puVar1 = (*puVar1 + iVar14) % *(uint *)(plVar11 + 2);
        uVar8 = -iVar14;
        plVar9 = (longlong *)(ulonglong)uVar8;
        LOCK();
        *piVar16 = *piVar16 + uVar8;
        UNLOCK();
LAB_14554638a:
        if (plVar11 != (longlong *)0x0) {
          iVar12 = *(int *)(lVar6 + 0xc);
          *(int *)((longlong)plVar11 + 0x2c) = iVar12;
          plVar11[4] = plVar7[4];
          plVar9 = (longlong *)(ulonglong)*(uint *)(plVar7 + 5);
          *(uint *)(plVar11 + 5) = *(uint *)(plVar7 + 5);
          if (iVar12 == 0x11) {
            *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
          }
          sVar4 = *(short *)(lVar6 + 0x12);
          if (sVar4 != 0) {
            local_80 = *(undefined4 *)(lVar6 + 8);
            local_88 = plVar11[1] + (ulonglong)*(uint *)(plVar11 + 3) * 4;
            local_7c = 0x2b;
            local_78 = sVar4;
            local_76 = sVar4;
            AkMixer::ApplyGainAndInterleave
                      (lVar6,&local_88,
                       CONCAT44(fStack_94 * *(float *)((longlong)plVar7 + 0x54),
                                local_98 * *(float *)(plVar7 + 10)),0);
            uVar3 = *(ushort *)(lVar6 + 0x12);
            uVar8 = (int)plVar11[3] + (uint)uVar3;
            plVar9 = (longlong *)((ulonglong)uVar8 / (ulonglong)*(uint *)(plVar11 + 2));
            *(uint *)(plVar11 + 3) = uVar8 % *(uint *)(plVar11 + 2);
            LOCK();
            *(int *)((longlong)plVar11 + 0x1c) = *(int *)((longlong)plVar11 + 0x1c) + (uint)uVar3;
            UNLOCK();
          }
        }
      }
      else {
        *(undefined4 *)(plVar11 + 2) = 0;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
        if ((void *)plVar11[1] != (void *)0x0) {
          AK::MemoryMgr::Free(0,(void *)plVar11[1]);
          plVar11[1] = 0;
        }
        *(int *)(plVar11 + 2) = iVar12;
        *puVar1 = 0;
        *puVar2 = 0;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
        pvVar10 = AK::MemoryMgr::Malloc(0,(ulonglong)*(uint *)(plVar11 + 2) << 2);
        plVar11[1] = (longlong)pvVar10;
        plVar9 = (longlong *)0x0;
        if (pvVar10 != (void *)0x0) goto LAB_14554632d;
      }
      lVar15 = lVar15 + 8;
      local_res8 = local_res8 + 1;
    } while (local_res8 < *param_2);
  }
  return plVar9;
}



// FUNCTION 1455464a0 FUN_1455464a0 body=1322 status=ok
// SIG undefined FUN_1455464a0(void)

ulonglong FUN_1455464a0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong *local_res8;
  longlong *local_res20;
  longlong *local_b8;
  undefined8 local_b0;
  uint local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [4];
  uint uStack_8c;
  int iStack_88;
  ushort uStack_84;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                    (*(longlong **)(param_1 + 0x20),&DAT_149da9c08,0x17,0,puVar1);
  uVar15 = 2;
  if (iVar7 != 0) {
    return 2;
  }
  local_b8 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
            (*(longlong **)(param_1 + 0x20),&DAT_14b4ac4c8,0x17,0,&local_b8);
  if (local_b8 != (longlong *)0x0) {
    local_res8 = (longlong *)0x0;
    local_b0 = (longlong *)0x0;
    (**(code **)(*local_b8 + 0x18))(local_b8,0,0,&local_res8);
    (**(code **)(*local_b8 + 0x10))();
    if (local_res8 != (longlong *)0x0) {
      (**(code **)*local_res8)(local_res8,&DAT_14b4ac4d8,&local_b0);
      (**(code **)(*local_res8 + 0x10))();
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x80))(local_b0,1);
        (**(code **)(*local_b0 + 0x10))();
      }
    }
  }
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar7 = FUN_1455469d0(param_1,param_2,local_90,&local_res8);
  if (iVar7 == 2) {
    return 2;
  }
  local_res20 = (longlong *)0x0;
  iVar7 = (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&DAT_149da9c18,&local_res20);
  if ((iVar7 == 0) && (local_res20 != (longlong *)0x0)) {
    local_a8 = 6;
    if (*(int *)(param_1 + 0x10) - 0xb0U < 2) {
      local_a8 = 8;
    }
    else if (*(int *)(param_1 + 0x10) == 0xaf) {
      local_a8 = 7;
    }
    local_b0 = (longlong *)0x0;
    (**(code **)(*local_res20 + 0x78))(local_res20,local_a8,(longlong)&local_b0 + 4);
    local_b0 = (longlong *)CONCAT44(local_b0._4_4_,0xc);
    iVar7 = (**(code **)(*local_res20 + 0x80))(local_res20,&local_b0);
    if (iVar7 < 0) {
      (**(code **)(*local_res20 + 0x10))();
      return 2;
    }
    (**(code **)(*local_res20 + 0x10))();
  }
  iVar7 = (**(code **)(*(longlong *)*puVar1 + 0x48))((longlong *)*puVar1,&local_a0,local_98);
  if ((iVar7 < 0) || (local_a0 < 1)) {
    return 0x43;
  }
  uVar10 = ((ulonglong)DAT_14c72f434 * 10000000) / (ulonglong)DAT_14c72f42c;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  lVar12 = uVar5 * uVar10;
  for (lVar13 = local_a0 * 2; lVar13 < (longlong)uVar10; lVar13 = lVar13 + local_a0) {
  }
  lVar13 = lVar13 + uVar10;
  if (lVar12 - lVar13 != 0 && lVar13 <= lVar12) {
    lVar13 = lVar12;
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  uVar3 = _iStack_88;
  uVar2 = _local_90;
  if (cVar4 == '\0') {
    lVar13 = lVar13 + (local_a0 * 6) / 5;
  }
  uVar14 = 0x40000;
  bVar16 = uStack_8c == DAT_14c72f42c;
  if (bVar16) {
LAB_145546791:
    if (!bVar16) goto LAB_1455467c2;
  }
  else {
    _local_90 = CONCAT44(DAT_14c72f42c,local_90);
    uVar14 = 0x88040000;
    uVar8 = (uint)uStack_84;
    _iStack_88 = CONCAT44(_uStack_84,uVar8 * DAT_14c72f42c);
    iVar7 = (**(code **)(*(longlong *)*puVar1 + 0x18))
                      ((longlong *)*puVar1,0,0x88040000,lVar13,0,local_90,0);
    if (-1 < iVar7) goto LAB_145546791;
    uVar14 = 0x40000;
    _local_90 = uVar2;
    _iStack_88 = uVar3;
  }
  iVar7 = (**(code **)(*(longlong *)*puVar1 + 0x18))
                    ((longlong *)*puVar1,0,uVar14,lVar13,0,local_90,0);
  if (iVar7 != 0) {
    return 2;
  }
LAB_1455467c2:
  iVar7 = (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,DAT_14c79c0c0);
  if (iVar7 == 0) {
    iVar7 = (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,param_1 + 0x90);
    if ((iVar7 == 0) && ((uint)DAT_14c72f434 <= *(uint *)(param_1 + 0x90))) {
      uVar8 = (uint)local_res8;
      if (uStack_8c != DAT_14c72f42c) {
        local_b0 = (longlong *)CONCAT44((uint)local_res8,DAT_14c72f42c);
        local_a8 = ((uint)local_res8 & 0xff) << 8 | local_a8 & 0xfffd0020 | 0x50020;
        iVar7 = FUN_145387e70(param_1 + 0x98);
        if (iVar7 != 1) {
          return 2;
        }
        FUN_145388420(param_1 + 0x98,0,0);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
        *(uint *)(param_1 + 0x110) = uVar8;
        *(short *)(param_1 + 0x118) = (short)(*(uint *)(param_1 + 0x90) / (uint)uVar5);
        uVar9 = FUN_145071750(param_1 + 0x108);
        if (uVar9 != 1) {
          FUN_1453880c0(param_1 + 0x98);
          return (ulonglong)uVar9;
        }
        memset(*(void **)(param_1 + 0x108),0,
               (ulonglong)
               ((uint)*(byte *)(param_1 + 0x110) * (uint)*(ushort *)(param_1 + 0x118) * 4));
        *(uint *)(param_1 + 0xdc) = (uint)*(ushort *)(param_1 + 0x118);
      }
      iVar7 = (**(code **)(*(longlong *)*puVar1 + 0x70))
                        ((longlong *)*puVar1,&DAT_14ab44260,param_1 + 0x58);
      if (iVar7 == 0) {
        local_res8 = (longlong *)0x0;
        iVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                          (*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x90),
                           &local_res8);
        if ((iVar7 == 0) &&
           (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                              (*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x90),2),
           iVar7 == 0)) {
          DAT_14c72f430 = (((uint)DAT_14c72f434 * 1000) / DAT_14c72f42c) * 2;
          plVar11 = (longlong *)
                    (**(code **)(**(longlong **)(param_1 + 8) + 8))
                              (*(longlong **)(param_1 + 8),
                               (ulonglong)((uint)DAT_14c72f434 * 1000) % (ulonglong)DAT_14c72f42c);
          uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11);
          *(uint *)(param_1 + 0x68) = uVar8;
          *(undefined2 *)(param_1 + 0x70) = uVar6;
          uVar15 = FUN_145071750(param_1 + 0x60);
          if ((int)uVar15 == 1) {
            memset(*(void **)(param_1 + 0x60),0,
                   (ulonglong)
                   ((uint)*(byte *)(param_1 + 0x68) * (uint)*(ushort *)(param_1 + 0x70) * 4));
            uVar15 = 1;
          }
        }
      }
    }
    else {
      uVar15 = 0x5a;
    }
  }
  return uVar15;
}



// FUNCTION 1455469d0 FUN_1455469d0 body=531 status=ok
// SIG undefined FUN_1455469d0(void)

undefined8 FUN_1455469d0(longlong param_1,uint param_2,undefined8 *param_3,uint *param_4)

{
  LPVOID pv;
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_res8 [8];
  LPVOID local_78;
  undefined2 local_70;
  ushort uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined4 local_4e;
  undefined2 local_4a;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined2 uStack_36;
  uint uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  iVar5 = 0;
  local_78 = (LPVOID)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x40))
                    (*(longlong **)(param_1 + 0x50),&local_78);
  if ((iVar2 != 0) || (local_78 == (LPVOID)0x0)) {
    return 2;
  }
  local_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_60 = 0;
  local_4e = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_4a = 0;
  FUN_145547700(local_78,&local_70);
  CoTaskMemFree(local_78);
  local_78 = (LPVOID)0x0;
  if (((param_2 & 0xf00) < 0x301) && (((char)param_2 != '\0' || ((param_2 & 0xf00) == 0x300)))) {
    uVar1 = (ushort)param_2;
    if ((uVar1 & 0xff) != uStack_6e) {
      local_38 = uStack_60;
      uStack_36 = uStack_5e;
      uStack_30 = uStack_58;
      uStack_2e = uStack_56;
      uStack_34 = param_2 >> 0xc;
      local_28 = CONCAT26(local_4a,CONCAT42(local_4e,uStack_50));
      uStack_2c = uStack_54;
      local_48 = CONCAT44(uStack_6c,CONCAT22(uVar1,local_70)) & 0xffffffff00ffffff;
      uVar1 = (uVar1 & 0xff) << 2;
      uStack_3c._2_2_ = (undefined2)((uint6)uStack_66 >> 0x20);
      _iStack_40 = CONCAT44(CONCAT22(uStack_3c._2_2_,uVar1),(uint)uVar1 * local_48._4_4_);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))
                        (*(longlong **)(param_1 + 0x50),0,&local_48,&local_78);
      pv = local_78;
      if (iVar2 != 0) {
        if ((iVar2 == 1) && (local_78 != (LPVOID)0x0)) {
          FUN_145547700(local_78,&local_70);
          CoTaskMemFree(pv);
          local_78 = (LPVOID)0x0;
        }
        puVar3 = (uint *)FUN_145547640(local_res8,&local_70);
        uVar4 = *puVar3;
        goto LAB_145546b9c;
      }
      local_70 = (undefined2)local_48;
      uStack_6e = (ushort)(local_48 >> 0x10);
      uStack_6c = (undefined4)(local_48 >> 0x20);
      uStack_68 = (undefined2)_iStack_40;
      uStack_66 = (undefined6)((ulonglong)_iStack_40 >> 0x10);
      uStack_50 = (undefined2)local_28;
      local_4e = (undefined4)((ulonglong)local_28 >> 0x10);
      local_4a = (undefined2)((ulonglong)local_28 >> 0x30);
      uStack_60 = local_38;
      uStack_5e = uStack_36;
      uStack_5c = uStack_34;
      uStack_58 = uStack_30;
      uStack_56 = uStack_2e;
      uStack_54 = uStack_2c;
    }
    *param_4 = param_2;
  }
  else {
    switch(uStack_6e) {
    case 1:
      iVar5 = 4;
      break;
    case 2:
      iVar5 = 3;
      break;
    case 3:
      iVar5 = 0xb;
      break;
    case 4:
      iVar5 = 0x603;
      break;
    case 5:
      iVar5 = 0x607;
      break;
    case 6:
      iVar5 = 0x60f;
      break;
    case 7:
      iVar5 = 0x637;
      break;
    case 8:
      iVar5 = 0x63f;
    }
    uVar4 = -(uint)(iVar5 != 0) & 0x100 | uStack_6e & 0xff | iVar5 << 0xc;
LAB_145546b9c:
    *param_4 = uVar4;
  }
  *param_3 = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
  param_3[1] = CONCAT62(uStack_66,uStack_68);
  param_3[2] = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
  param_3[3] = CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58));
  param_3[4] = CONCAT26(local_4a,CONCAT42(local_4e,uStack_50));
  return 1;
}



// FUNCTION 145546c10 FUN_145546c10 body=1374 status=ok
// SIG undefined FUN_145546c10(void)

undefined4 FUN_145546c10(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  HRESULT HVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  int iVar16;
  uint local_res8;
  uint local_res20 [2];
  longlong *local_b8;
  int local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  GUID local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  HANDLE local_48;
  undefined8 local_40;
  
  plVar10 = (longlong *)(param_1 + 0x150);
  lVar14 = 0xc;
  do {
    plVar9 = (longlong *)*plVar10;
    if (plVar9 != (longlong *)0x0) {
      *plVar10 = 0;
      (**(code **)(*plVar9 + 0x10))();
    }
    plVar10 = plVar10 + 2;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(undefined4 *)(param_1 + 0x158) = 4;
  *(undefined4 *)(param_1 + 0x168) = 8;
  uVar15 = 2;
  *(undefined4 *)(param_1 + 0x148) = 2;
  *(undefined4 *)(param_1 + 0x178) = 0x10;
  *(undefined4 *)(param_1 + 0x188) = 0x80;
  *(undefined4 *)(param_1 + 0x198) = 0x100;
  *(undefined4 *)(param_1 + 0x1a8) = 0x20;
  *(undefined4 *)(param_1 + 0x1b8) = 0x40;
  *(undefined4 *)(param_1 + 0x1c8) = 0x200;
  *(undefined4 *)(param_1 + 0x1d8) = 0x400;
  *(undefined4 *)(param_1 + 0x1e8) = 0x800;
  *(undefined4 *)(param_1 + 0x1f8) = 0x1000;
  local_88.Data1 = 0;
  local_88.Data2 = 0;
  local_88.Data3 = 0;
  local_88.Data4[0] = '\0';
  local_88.Data4[1] = '\0';
  local_88.Data4[2] = '\0';
  local_88.Data4[3] = '\0';
  local_88.Data4[4] = '\0';
  local_88.Data4[5] = '\0';
  local_88.Data4[6] = '\0';
  local_88.Data4[7] = '\0';
  HVar6 = CoCreateGuid(&local_88);
  if (HVar6 < 0) {
    local_88.Data1 = 0;
    local_88.Data2 = 0;
    local_88.Data3 = 0;
    local_88.Data4[0] = '\0';
    local_88.Data4[1] = '\0';
    local_88.Data4[2] = '\0';
    local_88.Data4[3] = '\0';
    local_88.Data4[4] = '\0';
    local_88.Data4[5] = '\0';
    local_88.Data4[6] = '\0';
    local_88.Data4[7] = '\0';
  }
  local_90 = CoTaskMemAlloc(0x30);
  if (local_90 == (undefined8 *)0x0) {
    return 0x34;
  }
  plVar10 = (longlong *)(param_1 + 0x120);
  *local_90 = CONCAT44(local_88._4_4_,local_88.Data1);
  local_90[1] = CONCAT44(local_88.Data4._4_4_,local_88.Data4._0_4_);
  *(undefined4 *)(local_90 + 2) = 0xc6b5673c;
  *(undefined4 *)((longlong)local_90 + 0x14) = 0x4d24f8d9;
  *(undefined4 *)(local_90 + 3) = 0x37ebc29a;
  *(undefined4 *)((longlong)local_90 + 0x1c) = 0xe06ea3fb;
  *(undefined4 *)(local_90 + 4) = 0x7e6;
  *(undefined4 *)((longlong)local_90 + 0x24) = 1;
  local_90[5] = 0x12;
  local_a0 = 0x41;
  plVar9 = (longlong *)*plVar10;
  uStack_98 = 0x30;
  if (plVar9 != (longlong *)0x0) {
    *plVar10 = 0;
    (**(code **)(*plVar9 + 0x10))();
  }
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                    (*(longlong **)(param_1 + 0x20),&DAT_149c268d0,1,&local_a0,plVar10);
  PropVariantClear((PROPVARIANT *)&local_a0);
  if (iVar7 < 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  iVar7 = (**(code **)(*(longlong *)*plVar10 + 0x28))((longlong *)*plVar10,local_res20);
  uVar13 = 0;
  if (-1 < iVar7) {
    uVar13 = local_res20[0];
  }
  *(uint *)(param_1 + 0x244) = uVar13;
  if (uVar13 == 0) {
    return 0x5a;
  }
  if (uVar13 < param_2) {
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x14) != '\0') {
      plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
      (**(code **)(*plVar9 + 0x88))();
    }
    uVar13 = 0;
  }
  if (uVar13 < param_3) {
    param_3 = uVar13;
  }
  *(uint *)(param_1 + 0x244) = param_3;
  local_b8 = (longlong *)0x0;
  iVar7 = (**(code **)(*(longlong *)*plVar10 + 0x30))((longlong *)*plVar10,&local_b8);
  if (iVar7 == 0) {
    local_a8 = 0;
    iVar7 = (**(code **)(*local_b8 + 0x18))(local_b8,local_b0);
    if (((iVar7 == 0) && (local_b0[0] != 0)) &&
       (iVar7 = (**(code **)(*local_b8 + 0x20))(local_b8,0,&local_a8), iVar7 == 0)) {
      local_48 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      plVar9 = (longlong *)(param_1 + 0x128);
      plVar10 = (longlong *)*plVar10;
      *(HANDLE *)(param_1 + 600) = local_48;
      local_60 = local_a8;
      local_50 = *(undefined4 *)(param_1 + 0x244);
      plVar1 = (longlong *)*plVar9;
      local_78 = 0x41;
      local_68 = &local_60;
      local_58 = 0x1ffe;
      local_4c = 6;
      local_40 = 0;
      uStack_70 = 0x28;
      if (plVar1 != (longlong *)0x0) {
        *plVar9 = 0;
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar7 = (**(code **)(*plVar10 + 0x50))(plVar10,&local_78,&DAT_149da9c28,plVar9);
      if (iVar7 == 0) {
        if (*(int *)(param_1 + 0x244) != 0) {
          iVar7 = (**(code **)(*(longlong *)*plVar9 + 0x18))();
          if (iVar7 != 0) goto LAB_1455470e6;
          plVar10 = (longlong *)(param_1 + 0x208);
          iVar7 = 0;
          if (((local_res8 <= *(uint *)(param_1 + 0x214)) ||
              (cVar3 = FUN_1455473a0(plVar10), cVar3 != '\0')) &&
             (iVar16 = 0, iVar8 = 0, 0 < (int)local_res8)) {
            do {
              iVar7 = iVar8;
              uVar13 = *(uint *)(param_1 + 0x210);
              if (((uVar13 < *(uint *)(param_1 + 0x214)) ||
                  (cVar3 = FUN_1455473a0(plVar10), cVar3 != '\0')) &&
                 (uVar13 < *(uint *)(param_1 + 0x214))) {
                uVar13 = *(uint *)(param_1 + 0x210);
                *(uint *)(param_1 + 0x210) = uVar13 + 1;
                puVar12 = (undefined8 *)((ulonglong)uVar13 * 0x38 + *plVar10);
                if (puVar12 != (undefined8 *)0x0) {
                  puVar12[1] = 0;
                  puVar12[2] = 0;
                  *(undefined4 *)(puVar12 + 3) = 0;
                  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
                  puVar12[6] = 0;
                  *puVar12 = 0xffffffffffffffff;
                  *(undefined4 *)((longlong)puVar12 + 0x2c) = 0x11;
                }
              }
              else {
                puVar12 = (undefined8 *)0x0;
              }
              plVar1 = (longlong *)*plVar9;
              plVar2 = (longlong *)puVar12[6];
              if (plVar2 != (longlong *)0x0) {
                puVar12[6] = 0;
                (**(code **)(*plVar2 + 0x10))();
              }
              iVar8 = (**(code **)(*plVar1 + 0x50))(plVar1,1,puVar12 + 6);
              if (iVar8 < 0) {
                lVar14 = (ulonglong)*(uint *)(param_1 + 0x210) * 0x38 +
                         *(longlong *)(param_1 + 0x208);
                *(undefined8 *)(lVar14 + -0x28) = 0;
                *(undefined4 *)(lVar14 + -0x20) = 0;
                *(undefined4 *)(lVar14 + -0x1c) = 0;
                if (*(void **)(lVar14 + -0x30) != (void *)0x0) {
                  AK::MemoryMgr::Free(0,*(void **)(lVar14 + -0x30));
                  *(undefined8 *)(lVar14 + -0x30) = 0;
                }
                plVar10 = *(longlong **)(lVar14 + -8);
                if (plVar10 != (longlong *)0x0) {
                  *(undefined8 *)(lVar14 + -8) = 0;
                  (**(code **)(*plVar10 + 0x10))();
                }
                *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
                break;
              }
              iVar7 = iVar7 + 1;
              iVar16 = iVar16 + 1;
              iVar8 = iVar7;
            } while (iVar16 < (int)local_res8);
          }
          LOCK();
          *(int *)(param_1 + 0x248) = iVar7;
          UNLOCK();
        }
        uVar13 = 0;
        uVar15 = 2;
        plVar10 = (longlong *)(param_1 + 0x150);
        do {
          if ((*plVar10 == 0) &&
             (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x50))
                                (*(longlong **)(param_1 + 0x128),(int)plVar10[-1],plVar10),
             iVar7 < 0)) goto LAB_1455470e6;
          uVar13 = uVar13 + 1;
          plVar10 = plVar10 + 2;
        } while (uVar13 < 0xc);
        plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
        uVar4 = (**(code **)(*plVar10 + 0x10))(plVar10);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
        *(undefined8 *)(param_1 + 0x13c) = 0;
        *(uint *)(param_1 + 0x138) = (uint)uVar5 * (uint)uVar4 * 0xc;
        *(undefined4 *)(param_1 + 0x144) = 0;
        pvVar11 = AK::MemoryMgr::Malloc(0,(ulonglong)*(uint *)(param_1 + 0x138) << 2);
        *(void **)(param_1 + 0x130) = pvVar11;
        uVar15 = 1;
        if (pvVar11 == (void *)0x0) {
          uVar15 = 0x34;
        }
      }
    }
  }
LAB_1455470e6:
  plVar10 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    (**(code **)(*plVar10 + 0x10))();
  }
  return uVar15;
}



// FUNCTION 145547170 FUN_145547170 body=266 status=ok
// SIG undefined FUN_145547170(void)

void FUN_145547170(longlong param_1,AkAudioBuffer *param_2,longlong param_3,AkRamp *param_4,
                  float *param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar3 = (undefined4)*(undefined8 *)param_4;
  uVar4 = (undefined4)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  uStack_40._4_4_ = 0x2b;
  if (param_5 == (float *)0x0) {
    local_48 = *(undefined8 *)param_2;
    uStack_40 = *(undefined8 *)(param_2 + 8);
    local_38 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    uVar2 = *(uint *)(param_3 + 8);
    memset(*(void **)(param_1 + 0x48),0,
           (ulonglong)((uVar2 & 0xff) * (uint)*(ushort *)(param_2 + 0x12) * 4));
    local_48 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(ushort *)(param_2 + 0x12);
    local_38._0_4_ = CONCAT22(uVar1,uVar1);
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
    AkMixer::MixNinNChannels
              (param_2,(AkAudioBuffer *)&local_48,param_4,param_5,param_5,1.0 / (float)uVar1,
               (uint)uVar1);
    uVar3 = 0x3f800000;
    uVar4 = 0x3f800000;
  }
  AkMixer::ApplyGainAndInterleave(&local_48,param_3,CONCAT44(uVar4,uVar3),0);
  return;
}



// FUNCTION 145547280 FUN_145547280 body=150 status=ok
// SIG undefined FUN_145547280(void)

void FUN_145547280(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                    (*(longlong **)(param_1 + 0x58),*(undefined2 *)((longlong)param_2 + 0x12),
                     &local_res8);
  if (iVar2 == 0) {
    if (local_res8 != (void *)0x0) {
      memcpy(local_res8,(void *)*param_2,
             (ulonglong)
             ((uint)*(byte *)(param_2 + 1) * (uint)*(ushort *)((longlong)param_2 + 0x12) * 4));
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                (*(longlong **)(param_1 + 0x58),*(undefined2 *)((longlong)param_2 + 0x12),0);
      return;
    }
  }
  else if ((iVar2 == -0x7776fffa) &&
          (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(), cVar1 == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x265) = 1;
  return;
}



// FUNCTION 145547320 FUN_145547320 body=116 status=ok
// SIG undefined FUN_145547320(void)

undefined8 * FUN_145547320(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  plVar1 = (longlong *)param_2[6];
  if ((longlong *)param_1[6] != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar2 = (longlong *)param_1[6];
    param_1[6] = plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 1455473a0 FUN_1455473a0 body=341 status=ok
// SIG undefined FUN_1455473a0(void)

undefined8 FUN_1455473a0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *pvVar3;
  __uint64 _Var4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var4 = (ulonglong)uVar8 * 0x38;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(5,_Var4);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar6 != 0) {
        lVar5 = (longlong)pvVar3 + 0x14;
        do {
          puVar1 = (undefined8 *)(lVar5 + -0x14);
          if (puVar1 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar5 + -0xc) = 0;
            *(undefined8 *)(lVar5 + -4) = 0;
            *(undefined4 *)(lVar5 + 4) = 0;
            *(undefined4 *)(lVar5 + 8) = 0;
            *(undefined8 *)(lVar5 + 0x1c) = 0;
            *puVar1 = 0xffffffffffffffff;
            *(undefined4 *)(lVar5 + 0x18) = 0x11;
          }
          lVar7 = (-0x14 - (longlong)pvVar3) + lVar5;
          FUN_145547320(puVar1,*param_1 + lVar7);
          lVar7 = lVar7 + *param_1;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(undefined4 *)(lVar7 + 0x1c) = 0;
          if (*(void **)(lVar7 + 8) != (void *)0x0) {
            AK::MemoryMgr::Free(0,*(void **)(lVar7 + 8));
            *(undefined8 *)(lVar7 + 8) = 0;
          }
          plVar2 = *(longlong **)(lVar7 + 0x30);
          if (plVar2 != (longlong *)0x0) {
            *(undefined8 *)(lVar7 + 0x30) = 0;
            (**(code **)(*plVar2 + 0x10))();
          }
          lVar5 = lVar5 + 0x38;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(5,(void *)*param_1);
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(5,(void *)*param_1,_Var4);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 145547500 FUN_145547500 body=234 status=ok
// SIG undefined FUN_145547500(void)

undefined8 * FUN_145547500(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  puVar2 = param_1 + 0x42;
  lVar3 = 0xc;
  do {
    plVar1 = (longlong *)puVar2[-2];
    puVar2 = puVar2 + -2;
    lVar3 = lVar3 + -1;
    if (plVar1 != (longlong *)0x0) {
      *puVar2 = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
  } while (lVar3 != 0);
  plVar1 = (longlong *)param_1[0x25];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x25] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x24];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x24] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145387ca0(param_1 + 0x13);
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1455475f0 FUN_1455475f0 body=16 status=ok
// SIG undefined FUN_1455475f0(void)

undefined8 FUN_1455475f0(void)

{
  FUN_145545b90();
  return 0;
}



// FUNCTION 145547600 FUN_145547600 body=50 status=ok
// SIG undefined FUN_145547600(void)

void FUN_145547600(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x268,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Win32\\AkSinkCoreAudio.cpp"
                     ,0x7a);
  if (lVar1 != 0) {
    FUN_145544830(lVar1);
    return;
  }
  return;
}



// FUNCTION 145547640 FUN_145547640 body=146 status=ok
// SIG undefined FUN_145547640(void)

uint * FUN_145547640(uint *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    iVar1 = 4;
    break;
  case 2:
    iVar1 = 3;
    break;
  case 3:
    iVar1 = 0xb;
    break;
  case 4:
    iVar1 = 0x603;
    break;
  case 5:
    iVar1 = 0x607;
    break;
  case 6:
    iVar1 = 0x60f;
    break;
  case 7:
    iVar1 = 0x637;
    break;
  case 8:
    iVar1 = 0x63f;
  }
  *(char *)param_1 = (char)*(undefined2 *)(param_2 + 2);
  *param_1 = *param_1 & 0xff;
  *param_1 = -(uint)(iVar1 != 0) & 0x100 | *param_1 & 0xfff | iVar1 << 0xc;
  return param_1;
}



// FUNCTION 145547700 FUN_145547700 body=157 status=ok
// SIG undefined FUN_145547700(void)

void FUN_145547700(short *param_1,undefined8 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 local_res8 [32];
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  sVar1 = *param_1;
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if (sVar1 == -2) {
    uVar5 = *(undefined8 *)(param_1 + 0xc);
    param_2[2] = *(undefined8 *)(param_1 + 8);
    param_2[3] = uVar5;
    param_2[4] = *(undefined8 *)(param_1 + 0x10);
    return;
  }
  *(undefined2 *)param_2 = 0xfffe;
  *(undefined4 *)(param_2 + 2) = 0x200016;
  puVar6 = (uint *)FUN_145547640(local_res8,param_2);
  *(uint *)((longlong)param_2 + 0x14) = *puVar6 >> 0xc;
  param_2[3] = 0x10000000000003;
  param_2[4] = 0x719b3800aa000080;
  return;
}



// FUNCTION 1455477a0 FUN_1455477a0 body=415 status=ok
// SIG undefined FUN_1455477a0(void)

void FUN_1455477a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_3;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  bVar2 = *(byte *)(param_2 + 1);
  uVar14 = (ulonglong)bVar2;
  uVar12 = (ulonglong)*(ushort *)(param_1 + 2);
  uVar3 = *(ushort *)(param_1 + 2) >> 2;
  if (local_res8 == fStackX_c) {
    if (bVar2 != 0) {
      lVar16 = 0;
      do {
        if (uVar3 != 0) {
          uVar11 = (ulonglong)((uVar3 - 1 >> 1) + 1);
          pfVar13 = (float *)(*param_1 + uVar12 * lVar16 * 4);
          pfVar15 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar16 * 4);
          do {
            fVar21 = pfVar13[1];
            fVar29 = pfVar13[2];
            fVar30 = pfVar13[3];
            fVar31 = pfVar13[4];
            fVar32 = pfVar13[5];
            fVar33 = pfVar13[6];
            fVar34 = pfVar13[7];
            *pfVar15 = local_res8 * *pfVar13;
            pfVar15[1] = local_res8 * fVar21;
            pfVar15[2] = local_res8 * fVar29;
            pfVar15[3] = local_res8 * fVar30;
            pfVar15[4] = fVar31 * local_res8;
            pfVar15[5] = fVar32 * local_res8;
            pfVar15[6] = fVar33 * local_res8;
            pfVar15[7] = fVar34 * local_res8;
            uVar11 = uVar11 - 1;
            pfVar13 = pfVar13 + 8;
            pfVar15 = pfVar15 + 8;
          } while (uVar11 != 0);
          uVar12 = (ulonglong)*(ushort *)(param_1 + 2);
        }
        lVar16 = lVar16 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      return;
    }
  }
  else {
    fVar21 = (fStackX_c - local_res8) / (float)uVar12;
    fVar29 = fVar21 * 4.0;
    fVar30 = fVar21 * 4.0;
    fVar31 = fVar21 * 4.0;
    fVar32 = fVar21 * 4.0;
    fVar33 = fVar21 * 1.0 + local_res8;
    fVar34 = fVar21 * 2.0 + local_res8;
    fVar35 = fVar21 * 3.0 + local_res8;
    local_res8 = fVar21 * 4.0 + local_res8;
    if (bVar2 != 0) {
      lVar16 = 0;
      do {
        pfVar13 = (float *)(*param_1 + uVar12 * lVar16 * 4);
        pfVar15 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar16 * 4);
        if (uVar3 != 0) {
          uVar12 = (ulonglong)((uVar3 - 1 >> 1) + 1);
          fVar21 = fVar33;
          fVar22 = fVar34;
          fVar23 = fVar35;
          fVar24 = local_res8;
          fVar25 = fVar29 + fVar33;
          fVar26 = fVar30 + fVar34;
          fVar27 = fVar31 + fVar35;
          fVar28 = fVar32 + local_res8;
          do {
            fVar4 = *pfVar13;
            fVar5 = pfVar13[1];
            fVar6 = pfVar13[2];
            fVar7 = pfVar13[3];
            pfVar1 = pfVar13 + 4;
            pfVar8 = pfVar13 + 5;
            pfVar9 = pfVar13 + 6;
            pfVar10 = pfVar13 + 7;
            pfVar13 = pfVar13 + 8;
            fVar17 = *pfVar1 * fVar25;
            fVar18 = *pfVar8 * fVar26;
            fVar19 = *pfVar9 * fVar27;
            fVar20 = *pfVar10 * fVar28;
            fVar25 = fVar25 + fVar29 + fVar29;
            fVar26 = fVar26 + fVar30 + fVar30;
            fVar27 = fVar27 + fVar31 + fVar31;
            fVar28 = fVar28 + fVar32 + fVar32;
            *pfVar15 = fVar21 * fVar4;
            pfVar15[1] = fVar22 * fVar5;
            pfVar15[2] = fVar23 * fVar6;
            pfVar15[3] = fVar24 * fVar7;
            pfVar15[4] = fVar17;
            pfVar15[5] = fVar18;
            pfVar15[6] = fVar19;
            pfVar15[7] = fVar20;
            pfVar15 = pfVar15 + 8;
            uVar12 = uVar12 - 1;
            fVar21 = fVar21 + fVar29 + fVar29;
            fVar22 = fVar22 + fVar30 + fVar30;
            fVar23 = fVar23 + fVar31 + fVar31;
            fVar24 = fVar24 + fVar32 + fVar32;
          } while (uVar12 != 0);
          uVar12 = (ulonglong)*(ushort *)(param_1 + 2);
        }
        lVar16 = lVar16 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}



// FUNCTION 145547940 FUN_145547940 body=328 status=ok
// SIG undefined FUN_145547940(void)

void FUN_145547940(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_res8;
  float fStackX_c;
  
  pauVar14 = (undefined1 (*) [16])*param_2;
  bVar2 = *(byte *)(param_2 + 1);
  uVar11 = (ulonglong)bVar2;
  uVar3 = *(ushort *)(param_1 + 2);
  local_res8 = (float)param_3;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  pfVar13 = (float *)*param_1;
  fVar19 = local_res8 * 32767.0;
  if (local_res8 == fStackX_c) {
    if ((uint)uVar3 * (uint)bVar2 >> 2 != 0) {
      uVar11 = (ulonglong)((((uint)uVar3 * (uint)bVar2 >> 2) - 1 >> 1) + 1);
      do {
        fVar24 = *pfVar13;
        pfVar5 = pfVar13 + 1;
        pfVar6 = pfVar13 + 2;
        pfVar7 = pfVar13 + 3;
        pfVar1 = pfVar13 + 4;
        pfVar8 = pfVar13 + 5;
        pfVar9 = pfVar13 + 6;
        pfVar10 = pfVar13 + 7;
        pfVar13 = pfVar13 + 8;
        auVar25._0_4_ = (int)(fVar24 * fVar19);
        auVar25._4_4_ = (int)(*pfVar5 * fVar19);
        auVar25._8_4_ = (int)(*pfVar6 * fVar19);
        auVar25._12_4_ = (int)(*pfVar7 * fVar19);
        auVar4._4_4_ = (int)(*pfVar8 * fVar19);
        auVar4._0_4_ = (int)(*pfVar1 * fVar19);
        auVar4._8_4_ = (int)(*pfVar9 * fVar19);
        auVar4._12_4_ = (int)(*pfVar10 * fVar19);
        auVar26 = packssdw(auVar25,auVar4);
        *pauVar14 = auVar26;
        uVar11 = uVar11 - 1;
        pauVar14 = pauVar14 + 1;
      } while (uVar11 != 0);
      return;
    }
  }
  else {
    fVar24 = (fStackX_c * 32767.0 - fVar19) / (float)uVar3;
    fVar35 = fVar24 * 4.0;
    fVar36 = fVar24 * 4.0;
    fVar37 = fVar24 * 4.0;
    fVar38 = fVar24 * 4.0;
    fVar39 = fVar24 * 1.0 + fVar19;
    fVar40 = fVar24 * 2.0 + fVar19;
    fVar41 = fVar24 * 3.0 + fVar19;
    fVar19 = fVar24 * 4.0 + fVar19;
    if (bVar2 != 0) {
      do {
        if (uVar3 >> 2 != 0) {
          uVar12 = (ulonglong)(((uVar3 >> 2) - 1 >> 1) + 1);
          fVar24 = fVar39;
          fVar28 = fVar40;
          fVar29 = fVar41;
          fVar30 = fVar19;
          fVar31 = fVar35 + fVar39;
          fVar32 = fVar36 + fVar40;
          fVar33 = fVar37 + fVar41;
          fVar34 = fVar38 + fVar19;
          do {
            fVar15 = *pfVar13;
            pfVar5 = pfVar13 + 1;
            pfVar6 = pfVar13 + 2;
            pfVar7 = pfVar13 + 3;
            pfVar1 = pfVar13 + 4;
            pfVar8 = pfVar13 + 5;
            pfVar9 = pfVar13 + 6;
            pfVar10 = pfVar13 + 7;
            pfVar13 = pfVar13 + 8;
            fVar15 = fVar15 * fVar24;
            fVar16 = *pfVar5 * fVar28;
            fVar17 = *pfVar6 * fVar29;
            fVar18 = *pfVar7 * fVar30;
            fVar24 = fVar24 + fVar35 + fVar35;
            fVar28 = fVar28 + fVar36 + fVar36;
            fVar29 = fVar29 + fVar37 + fVar37;
            fVar30 = fVar30 + fVar38 + fVar38;
            fVar20 = *pfVar1 * fVar31;
            fVar21 = *pfVar8 * fVar32;
            fVar22 = *pfVar9 * fVar33;
            fVar23 = *pfVar10 * fVar34;
            fVar31 = fVar31 + fVar35 + fVar35;
            fVar32 = fVar32 + fVar36 + fVar36;
            fVar33 = fVar33 + fVar37 + fVar37;
            fVar34 = fVar34 + fVar38 + fVar38;
            auVar27._0_4_ = (int)fVar15;
            auVar27._4_4_ = (int)fVar16;
            auVar27._8_4_ = (int)fVar17;
            auVar27._12_4_ = (int)fVar18;
            auVar26._4_4_ = (int)fVar21;
            auVar26._0_4_ = (int)fVar20;
            auVar26._8_4_ = (int)fVar22;
            auVar26._12_4_ = (int)fVar23;
            auVar26 = packssdw(auVar27,auVar26);
            *pauVar14 = auVar26;
            pauVar14 = pauVar14 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  return;
}



// FUNCTION 145547bf0 FUN_145547bf0 body=186 status=ok
// SIG undefined FUN_145547bf0(void)

void FUN_145547bf0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res8;
  float fStackX_c;
  
  uVar1 = *(ushort *)(param_1 + 2);
  pfVar8 = (float *)*param_1;
  pfVar9 = pfVar8 + uVar1;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res8 = (float)param_3;
  pauVar10 = (undefined1 (*) [16])*param_2;
  uVar11 = (uint)(uVar1 >> 2);
  fVar25 = (fStackX_c - local_res8) / (float)uVar1;
  fVar22 = fVar25 * 1.0 + local_res8;
  fVar23 = fVar25 * 2.0 + local_res8;
  fVar24 = fVar25 * 3.0 + local_res8;
  local_res8 = fVar25 * 4.0 + local_res8;
  if (uVar1 >> 2 != 0) {
    do {
      fVar18 = *pfVar8;
      pfVar2 = pfVar8 + 1;
      pfVar3 = pfVar8 + 2;
      pfVar4 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      fVar14 = *pfVar9;
      pfVar5 = pfVar9 + 1;
      pfVar6 = pfVar9 + 2;
      pfVar7 = pfVar9 + 3;
      pfVar9 = pfVar9 + 4;
      fVar18 = fVar18 * fVar22;
      fVar19 = *pfVar2 * fVar23;
      fVar20 = *pfVar3 * fVar24;
      fVar21 = *pfVar4 * local_res8;
      fVar14 = fVar14 * fVar22;
      fVar15 = *pfVar5 * fVar23;
      fVar16 = *pfVar6 * fVar24;
      fVar17 = *pfVar7 * local_res8;
      fVar22 = fVar22 + fVar25 * 4.0;
      fVar23 = fVar23 + fVar25 * 4.0;
      fVar24 = fVar24 + fVar25 * 4.0;
      local_res8 = local_res8 + fVar25 * 4.0;
      auVar12._0_4_ = (int)(fVar18 * 32767.0);
      auVar12._4_4_ = (int)(fVar14 * 32767.0);
      auVar12._8_4_ = (int)(fVar19 * 32767.0);
      auVar12._12_4_ = (int)(fVar15 * 32767.0);
      auVar13._0_4_ = (int)(fVar20 * 32767.0);
      auVar13._4_4_ = (int)(fVar16 * 32767.0);
      auVar13._8_4_ = (int)(fVar21 * 32767.0);
      auVar13._12_4_ = (int)(fVar17 * 32767.0);
      auVar13 = packssdw(auVar12,auVar13);
      *pauVar10 = auVar13;
      pauVar10 = pauVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 145547cb0 FUN_145547cb0 body=437 status=ok
// SIG undefined FUN_145547cb0(void)

void FUN_145547cb0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  uint uVar24;
  ulonglong uVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float local_res8;
  float fStackX_c;
  
  pfVar26 = (float *)*param_1;
  uVar1 = *(ushort *)(param_1 + 2);
  uVar25 = (ulonglong)uVar1;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res8 = (float)param_3;
  pfVar22 = pfVar26 + uVar25 * 5;
  pfVar27 = pfVar26 + uVar25;
  pfVar21 = pfVar26 + uVar25 * 4;
  pfVar28 = pfVar26 + uVar25 * 2;
  uVar24 = (uint)(uVar1 >> 2);
  pfVar23 = pfVar26 + uVar25 * 3;
  pfVar20 = (float *)*param_2;
  fVar56 = (fStackX_c - local_res8) / (float)uVar1;
  fVar53 = fVar56 * 1.0 + local_res8;
  fVar54 = fVar56 * 2.0 + local_res8;
  fVar55 = fVar56 * 3.0 + local_res8;
  local_res8 = fVar56 * 4.0 + local_res8;
  if (uVar1 >> 2 != 0) {
    do {
      fVar49 = *pfVar26;
      pfVar2 = pfVar26 + 1;
      pfVar3 = pfVar26 + 2;
      pfVar4 = pfVar26 + 3;
      pfVar26 = pfVar26 + 4;
      fVar41 = *pfVar23;
      pfVar5 = pfVar23 + 1;
      pfVar6 = pfVar23 + 2;
      pfVar7 = pfVar23 + 3;
      pfVar23 = pfVar23 + 4;
      fVar37 = *pfVar27;
      pfVar8 = pfVar27 + 1;
      pfVar9 = pfVar27 + 2;
      pfVar10 = pfVar27 + 3;
      pfVar27 = pfVar27 + 4;
      fVar45 = *pfVar28;
      pfVar11 = pfVar28 + 1;
      pfVar12 = pfVar28 + 2;
      pfVar13 = pfVar28 + 3;
      pfVar28 = pfVar28 + 4;
      fVar29 = *pfVar21;
      pfVar14 = pfVar21 + 1;
      pfVar15 = pfVar21 + 2;
      pfVar16 = pfVar21 + 3;
      pfVar21 = pfVar21 + 4;
      fVar33 = *pfVar22;
      pfVar17 = pfVar22 + 1;
      pfVar18 = pfVar22 + 2;
      pfVar19 = pfVar22 + 3;
      pfVar22 = pfVar22 + 4;
      fVar45 = fVar45 * fVar53;
      fVar46 = *pfVar11 * fVar54;
      fVar47 = *pfVar12 * fVar55;
      fVar48 = *pfVar13 * local_res8;
      fVar49 = fVar49 * fVar53;
      fVar50 = *pfVar2 * fVar54;
      fVar51 = *pfVar3 * fVar55;
      fVar52 = *pfVar4 * local_res8;
      fVar41 = fVar41 * fVar53;
      fVar42 = *pfVar5 * fVar54;
      fVar43 = *pfVar6 * fVar55;
      fVar44 = *pfVar7 * local_res8;
      fVar37 = fVar37 * fVar53;
      fVar38 = *pfVar8 * fVar54;
      fVar39 = *pfVar9 * fVar55;
      fVar40 = *pfVar10 * local_res8;
      fVar29 = fVar29 * fVar53;
      fVar30 = *pfVar14 * fVar54;
      fVar31 = *pfVar15 * fVar55;
      fVar32 = *pfVar16 * local_res8;
      fVar33 = fVar33 * fVar53;
      fVar34 = *pfVar17 * fVar54;
      fVar35 = *pfVar18 * fVar55;
      fVar36 = *pfVar19 * local_res8;
      fVar53 = fVar53 + fVar56 * 4.0;
      fVar54 = fVar54 + fVar56 * 4.0;
      fVar55 = fVar55 + fVar56 * 4.0;
      local_res8 = local_res8 + fVar56 * 4.0;
      *pfVar20 = fVar49;
      pfVar20[1] = fVar37;
      pfVar20[2] = fVar45;
      pfVar20[3] = fVar33;
      pfVar20[4] = fVar41;
      pfVar20[5] = fVar29;
      pfVar20[6] = fVar50;
      pfVar20[7] = fVar38;
      pfVar20[8] = fVar46;
      pfVar20[9] = fVar34;
      pfVar20[10] = fVar42;
      pfVar20[0xb] = fVar30;
      pfVar20[0xc] = fVar51;
      pfVar20[0xd] = fVar39;
      pfVar20[0xe] = fVar47;
      pfVar20[0xf] = fVar35;
      pfVar20[0x10] = fVar43;
      pfVar20[0x11] = fVar31;
      pfVar20[0x12] = fVar52;
      pfVar20[0x13] = fVar40;
      pfVar20[0x14] = fVar48;
      pfVar20[0x15] = fVar36;
      pfVar20[0x16] = fVar44;
      pfVar20[0x17] = fVar32;
      pfVar20 = pfVar20 + 0x18;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  return;
}



// FUNCTION 145547e70 FUN_145547e70 body=222 status=ok
// SIG undefined FUN_145547e70(void)

void FUN_145547e70(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  float fStackX_c;
  
  pfVar11 = (float *)*param_1;
  puVar8 = (undefined8 *)*param_2;
  uVar1 = *(ushort *)(param_1 + 2);
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  pfVar9 = pfVar11 + uVar1;
  local_res8 = (float)param_3;
  uVar10 = (uint)(uVar1 >> 2);
  fVar23 = (fStackX_c - local_res8) / (float)uVar1;
  fVar20 = fVar23 * 1.0 + local_res8;
  fVar21 = fVar23 * 2.0 + local_res8;
  fVar22 = fVar23 * 3.0 + local_res8;
  local_res8 = fVar23 * 4.0 + local_res8;
  if (uVar1 >> 2 != 0) {
    do {
      fVar16 = *pfVar11;
      pfVar2 = pfVar11 + 1;
      pfVar3 = pfVar11 + 2;
      pfVar4 = pfVar11 + 3;
      pfVar11 = pfVar11 + 4;
      fVar12 = *pfVar9;
      pfVar5 = pfVar9 + 1;
      pfVar6 = pfVar9 + 2;
      pfVar7 = pfVar9 + 3;
      pfVar9 = pfVar9 + 4;
      fVar16 = fVar16 * fVar20;
      fVar17 = *pfVar2 * fVar21;
      fVar18 = *pfVar3 * fVar22;
      fVar19 = *pfVar4 * local_res8;
      fVar12 = fVar12 * fVar20;
      fVar13 = *pfVar5 * fVar21;
      fVar14 = *pfVar6 * fVar22;
      fVar15 = *pfVar7 * local_res8;
      fVar20 = fVar20 + fVar23 * 4.0;
      fVar21 = fVar21 + fVar23 * 4.0;
      fVar22 = fVar22 + fVar23 * 4.0;
      local_res8 = local_res8 + fVar23 * 4.0;
      *puVar8 = CONCAT44(fVar12,fVar16);
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = CONCAT44(fVar13,fVar17);
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = CONCAT44(fVar14,fVar18);
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = CONCAT44(fVar15,fVar19);
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8 = puVar8 + 0xc;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 145547f50 FUN_145547f50 body=572 status=ok
// SIG undefined FUN_145547f50(void)

void FUN_145547f50(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  uint uVar32;
  ulonglong uVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float local_res8;
  float fStackX_c;
  
  pfVar34 = (float *)*param_1;
  uVar1 = *(ushort *)(param_1 + 2);
  uVar33 = (ulonglong)uVar1;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res8 = (float)param_3;
  pfVar31 = pfVar34 + uVar33 * 3;
  pfVar30 = pfVar34 + uVar33 * 5;
  pfVar27 = pfVar34 + uVar33 * 4;
  pfVar36 = pfVar34 + uVar33;
  fVar72 = (fStackX_c - local_res8) / (float)uVar1;
  pfVar28 = pfVar34 + uVar33 * 2;
  uVar32 = (uint)(uVar1 >> 2);
  pfVar29 = pfVar34 + uVar33 * 6;
  pfVar26 = (float *)*param_2;
  pfVar35 = pfVar34 + uVar33 * 7;
  fVar69 = fVar72 * 1.0 + local_res8;
  fVar70 = fVar72 * 2.0 + local_res8;
  fVar71 = fVar72 * 3.0 + local_res8;
  local_res8 = fVar72 * 4.0 + local_res8;
  if (uVar1 >> 2 != 0) {
    do {
      fVar65 = *pfVar34;
      pfVar2 = pfVar34 + 1;
      pfVar3 = pfVar34 + 2;
      pfVar4 = pfVar34 + 3;
      pfVar34 = pfVar34 + 4;
      fVar57 = *pfVar31;
      pfVar5 = pfVar31 + 1;
      pfVar6 = pfVar31 + 2;
      pfVar7 = pfVar31 + 3;
      pfVar31 = pfVar31 + 4;
      fVar49 = *pfVar36;
      pfVar8 = pfVar36 + 1;
      pfVar9 = pfVar36 + 2;
      pfVar10 = pfVar36 + 3;
      pfVar36 = pfVar36 + 4;
      fVar61 = *pfVar28;
      pfVar11 = pfVar28 + 1;
      pfVar12 = pfVar28 + 2;
      pfVar13 = pfVar28 + 3;
      pfVar28 = pfVar28 + 4;
      fVar41 = *pfVar27;
      pfVar14 = pfVar27 + 1;
      pfVar15 = pfVar27 + 2;
      pfVar16 = pfVar27 + 3;
      pfVar27 = pfVar27 + 4;
      fVar53 = *pfVar30;
      pfVar17 = pfVar30 + 1;
      pfVar18 = pfVar30 + 2;
      pfVar19 = pfVar30 + 3;
      pfVar30 = pfVar30 + 4;
      fVar45 = *pfVar35;
      pfVar20 = pfVar35 + 1;
      pfVar21 = pfVar35 + 2;
      pfVar22 = pfVar35 + 3;
      pfVar35 = pfVar35 + 4;
      fVar37 = *pfVar29;
      pfVar23 = pfVar29 + 1;
      pfVar24 = pfVar29 + 2;
      pfVar25 = pfVar29 + 3;
      pfVar29 = pfVar29 + 4;
      fVar65 = fVar65 * fVar69;
      fVar66 = *pfVar2 * fVar70;
      fVar67 = *pfVar3 * fVar71;
      fVar68 = *pfVar4 * local_res8;
      fVar57 = fVar57 * fVar69;
      fVar58 = *pfVar5 * fVar70;
      fVar59 = *pfVar6 * fVar71;
      fVar60 = *pfVar7 * local_res8;
      fVar49 = fVar49 * fVar69;
      fVar50 = *pfVar8 * fVar70;
      fVar51 = *pfVar9 * fVar71;
      fVar52 = *pfVar10 * local_res8;
      fVar61 = fVar61 * fVar69;
      fVar62 = *pfVar11 * fVar70;
      fVar63 = *pfVar12 * fVar71;
      fVar64 = *pfVar13 * local_res8;
      fVar41 = fVar41 * fVar69;
      fVar42 = *pfVar14 * fVar70;
      fVar43 = *pfVar15 * fVar71;
      fVar44 = *pfVar16 * local_res8;
      fVar53 = fVar53 * fVar69;
      fVar54 = *pfVar17 * fVar70;
      fVar55 = *pfVar18 * fVar71;
      fVar56 = *pfVar19 * local_res8;
      fVar45 = fVar45 * fVar69;
      fVar46 = *pfVar20 * fVar70;
      fVar47 = *pfVar21 * fVar71;
      fVar48 = *pfVar22 * local_res8;
      fVar37 = fVar37 * fVar69;
      fVar38 = *pfVar23 * fVar70;
      fVar39 = *pfVar24 * fVar71;
      fVar40 = *pfVar25 * local_res8;
      fVar69 = fVar69 + fVar72 * 4.0;
      fVar70 = fVar70 + fVar72 * 4.0;
      fVar71 = fVar71 + fVar72 * 4.0;
      local_res8 = local_res8 + fVar72 * 4.0;
      *pfVar26 = fVar65;
      pfVar26[1] = fVar49;
      pfVar26[2] = fVar61;
      pfVar26[3] = fVar45;
      pfVar26[4] = fVar57;
      pfVar26[5] = fVar41;
      pfVar26[6] = fVar53;
      pfVar26[7] = fVar37;
      pfVar26[8] = fVar66;
      pfVar26[9] = fVar50;
      pfVar26[10] = fVar62;
      pfVar26[0xb] = fVar46;
      pfVar26[0xc] = fVar58;
      pfVar26[0xd] = fVar42;
      pfVar26[0xe] = fVar54;
      pfVar26[0xf] = fVar38;
      pfVar26[0x10] = fVar67;
      pfVar26[0x11] = fVar51;
      pfVar26[0x12] = fVar63;
      pfVar26[0x13] = fVar47;
      pfVar26[0x14] = fVar59;
      pfVar26[0x15] = fVar43;
      pfVar26[0x16] = fVar55;
      pfVar26[0x17] = fVar39;
      pfVar26[0x18] = fVar68;
      pfVar26[0x19] = fVar52;
      pfVar26[0x1a] = fVar64;
      pfVar26[0x1b] = fVar48;
      pfVar26[0x1c] = fVar60;
      pfVar26[0x1d] = fVar44;
      pfVar26[0x1e] = fVar56;
      pfVar26[0x1f] = fVar40;
      pfVar26 = pfVar26 + 0x20;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  return;
}



// FUNCTION 145548190 FUN_145548190 body=482 status=ok
// SIG undefined FUN_145548190(void)

void FUN_145548190(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  uint uVar24;
  ulonglong uVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float local_res8;
  float fStackX_c;
  
  pfVar26 = (float *)*param_1;
  uVar1 = *(ushort *)(param_1 + 2);
  uVar25 = (ulonglong)uVar1;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res8 = (float)param_3;
  pfVar22 = pfVar26 + uVar25 * 5;
  pfVar27 = pfVar26 + uVar25;
  pfVar21 = pfVar26 + uVar25 * 4;
  pfVar28 = pfVar26 + uVar25 * 2;
  uVar24 = (uint)(uVar1 >> 2);
  pfVar23 = pfVar26 + uVar25 * 3;
  pfVar20 = (float *)*param_2;
  fVar56 = (fStackX_c - local_res8) / (float)uVar1;
  fVar53 = fVar56 * 1.0 + local_res8;
  fVar54 = fVar56 * 2.0 + local_res8;
  fVar55 = fVar56 * 3.0 + local_res8;
  local_res8 = fVar56 * 4.0 + local_res8;
  if (uVar1 >> 2 != 0) {
    do {
      fVar49 = *pfVar26;
      pfVar2 = pfVar26 + 1;
      pfVar3 = pfVar26 + 2;
      pfVar4 = pfVar26 + 3;
      pfVar26 = pfVar26 + 4;
      fVar41 = *pfVar23;
      pfVar5 = pfVar23 + 1;
      pfVar6 = pfVar23 + 2;
      pfVar7 = pfVar23 + 3;
      pfVar23 = pfVar23 + 4;
      fVar37 = *pfVar27;
      pfVar8 = pfVar27 + 1;
      pfVar9 = pfVar27 + 2;
      pfVar10 = pfVar27 + 3;
      pfVar27 = pfVar27 + 4;
      fVar45 = *pfVar28;
      pfVar11 = pfVar28 + 1;
      pfVar12 = pfVar28 + 2;
      pfVar13 = pfVar28 + 3;
      pfVar28 = pfVar28 + 4;
      fVar29 = *pfVar21;
      pfVar14 = pfVar21 + 1;
      pfVar15 = pfVar21 + 2;
      pfVar16 = pfVar21 + 3;
      pfVar21 = pfVar21 + 4;
      fVar33 = *pfVar22;
      pfVar17 = pfVar22 + 1;
      pfVar18 = pfVar22 + 2;
      pfVar19 = pfVar22 + 3;
      pfVar22 = pfVar22 + 4;
      fVar49 = fVar49 * fVar53;
      fVar50 = *pfVar2 * fVar54;
      fVar51 = *pfVar3 * fVar55;
      fVar52 = *pfVar4 * local_res8;
      fVar41 = fVar41 * fVar53;
      fVar42 = *pfVar5 * fVar54;
      fVar43 = *pfVar6 * fVar55;
      fVar44 = *pfVar7 * local_res8;
      fVar37 = fVar37 * fVar53;
      fVar38 = *pfVar8 * fVar54;
      fVar39 = *pfVar9 * fVar55;
      fVar40 = *pfVar10 * local_res8;
      fVar45 = fVar45 * fVar53;
      fVar46 = *pfVar11 * fVar54;
      fVar47 = *pfVar12 * fVar55;
      fVar48 = *pfVar13 * local_res8;
      fVar29 = fVar29 * fVar53;
      fVar30 = *pfVar14 * fVar54;
      fVar31 = *pfVar15 * fVar55;
      fVar32 = *pfVar16 * local_res8;
      fVar33 = fVar33 * fVar53;
      fVar34 = *pfVar17 * fVar54;
      fVar35 = *pfVar18 * fVar55;
      fVar36 = *pfVar19 * local_res8;
      fVar53 = fVar53 + fVar56 * 4.0;
      fVar54 = fVar54 + fVar56 * 4.0;
      fVar55 = fVar55 + fVar56 * 4.0;
      local_res8 = local_res8 + fVar56 * 4.0;
      *pfVar20 = fVar49;
      pfVar20[1] = fVar37;
      pfVar20[2] = fVar45;
      pfVar20[3] = fVar33;
      *(ulonglong *)(pfVar20 + 4) = CONCAT44(fVar29,fVar41);
      pfVar20[6] = 0.0;
      pfVar20[7] = 0.0;
      pfVar20[8] = fVar50;
      pfVar20[9] = fVar38;
      pfVar20[10] = fVar46;
      pfVar20[0xb] = fVar34;
      *(ulonglong *)(pfVar20 + 0xc) = CONCAT44(fVar30,fVar42);
      pfVar20[0xe] = 0.0;
      pfVar20[0xf] = 0.0;
      pfVar20[0x10] = fVar51;
      pfVar20[0x11] = fVar39;
      pfVar20[0x12] = fVar47;
      pfVar20[0x13] = fVar35;
      *(ulonglong *)(pfVar20 + 0x14) = CONCAT44(fVar31,fVar43);
      pfVar20[0x16] = 0.0;
      pfVar20[0x17] = 0.0;
      pfVar20[0x18] = fVar52;
      pfVar20[0x19] = fVar40;
      pfVar20[0x1a] = fVar48;
      pfVar20[0x1b] = fVar36;
      *(ulonglong *)(pfVar20 + 0x1c) = CONCAT44(fVar32,fVar44);
      pfVar20[0x1e] = 0.0;
      pfVar20[0x1f] = 0.0;
      pfVar20 = pfVar20 + 0x20;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  return;
}



// FUNCTION 145548380 FUN_145548380 body=219 status=ok
// SIG undefined FUN_145548380(void)

void FUN_145548380(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  float fStackX_c;
  
  pfVar11 = (float *)*param_1;
  puVar8 = (undefined8 *)*param_2;
  uVar1 = *(ushort *)(param_1 + 2);
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res8 = (float)param_3;
  pfVar9 = pfVar11 + uVar1;
  uVar10 = (uint)(uVar1 >> 2);
  fVar23 = (fStackX_c - local_res8) / (float)uVar1;
  fVar20 = fVar23 * 1.0 + local_res8;
  fVar21 = fVar23 * 2.0 + local_res8;
  fVar22 = fVar23 * 3.0 + local_res8;
  local_res8 = fVar23 * 4.0 + local_res8;
  if (uVar1 >> 2 != 0) {
    do {
      fVar16 = *pfVar11;
      pfVar2 = pfVar11 + 1;
      pfVar3 = pfVar11 + 2;
      pfVar4 = pfVar11 + 3;
      pfVar11 = pfVar11 + 4;
      fVar12 = *pfVar9;
      pfVar5 = pfVar9 + 1;
      pfVar6 = pfVar9 + 2;
      pfVar7 = pfVar9 + 3;
      pfVar9 = pfVar9 + 4;
      fVar16 = fVar16 * fVar20;
      fVar17 = *pfVar2 * fVar21;
      fVar18 = *pfVar3 * fVar22;
      fVar19 = *pfVar4 * local_res8;
      fVar12 = fVar12 * fVar20;
      fVar13 = *pfVar5 * fVar21;
      fVar14 = *pfVar6 * fVar22;
      fVar15 = *pfVar7 * local_res8;
      fVar20 = fVar20 + fVar23 * 4.0;
      fVar21 = fVar21 + fVar23 * 4.0;
      fVar22 = fVar22 + fVar23 * 4.0;
      local_res8 = local_res8 + fVar23 * 4.0;
      *puVar8 = CONCAT44(fVar12,fVar16);
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = CONCAT44(fVar13,fVar17);
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = CONCAT44(fVar14,fVar18);
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = CONCAT44(fVar15,fVar19);
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8 = puVar8 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 145548460 FUN_145548460 body=837 status=ok
// SIG undefined FUN_145548460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145548460(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,uint param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 auStack_c0 [5];
  longlong lStack_98;
  uint auStack_90 [6];
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  
  uVar16 = *(uint *)(param_2 + 1);
  bVar4 = *(byte *)(param_1 + 1);
  uVar17 = (ulonglong)bVar4 * 8;
  uVar18 = uVar16 & 0xff;
  uVar12 = uVar17 + 0xf;
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_c0[0] = 0x1455484b9;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar17 + 0xf;
  plVar21 = (longlong *)((longlong)&local_78 + lVar7);
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  local_68 = plVar21;
  *(undefined8 *)((longlong)auStack_c0 + lVar7) = 0x1455484da;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar17 + 0xf;
  lVar20 = (longlong)&local_78 + lVar8 + lVar7;
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  local_70 = lVar20;
  *(undefined8 *)((longlong)auStack_c0 + lVar8 + lVar7) = 0x1455484fb;
  lVar9 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar17 + 0xf;
  lVar3 = (longlong)&local_78 + lVar9 + lVar8 + lVar7;
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar9 + lVar8 + lVar7) = 0x14554851f;
  lVar10 = -(uVar12 & 0xfffffffffffffff0);
  uVar5 = *(ushort *)(param_1 + 2);
  uVar19 = 0;
  lVar6 = *param_1;
  local_78 = (longlong)&local_78 + lVar10 + lVar9 + lVar8 + lVar7;
  if (bVar4 != 0) {
    uStackX_c = (undefined4)((ulonglong)*param_3 >> 0x20);
    local_res8 = (undefined4)*param_3;
    lVar20 = lVar20 - (longlong)plVar21;
    lVar22 = local_78 - (longlong)plVar21;
    plVar13 = plVar21;
    do {
      plVar1 = plVar13 + 1;
      uVar11 = (uVar18 + 7 & 0xfffffff8) * uVar19;
      *plVar13 = (ulonglong)(uVar19 * uVar5) * 4 + lVar6;
      uVar19 = uVar19 + 1;
      *(undefined4 *)((longlong)plVar13 + lVar20) = local_res8;
      *(undefined4 *)(lVar20 + -4 + (longlong)plVar1) = uStackX_c;
      lVar2 = (ulonglong)uVar11 * 4;
      *(longlong *)((lVar3 - (longlong)plVar21) + -8 + (longlong)plVar1) = lVar2 + param_4;
      *(longlong *)(lVar22 + -8 + (longlong)plVar1) = lVar2 + param_5;
      plVar13 = plVar1;
    } while (uVar19 < bVar4);
  }
  uVar17 = 0;
  uVar12 = (ulonglong)uVar18 * 8 + 0xf;
  if (uVar12 <= (ulonglong)uVar18 * 8) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14554861a;
  uVar5 = *(ushort *)(param_2 + 2);
  lVar22 = -(uVar12 & 0xfffffffffffffff0);
  lVar6 = *param_2;
  lVar20 = (longlong)&local_78 + lVar22 + lVar10 + lVar9 + lVar8 + lVar7;
  uVar12 = CONCAT26(0,CONCAT24(uVar5,(uint)uVar5));
  if (uVar18 != 0) {
    if ((7 < uVar18) && (1 < DAT_14c707900)) {
      uVar19 = 4;
      do {
        iVar14 = (int)uVar17;
        uVar11 = uVar19 - 2;
        auVar27._4_4_ = iVar14 + 1;
        auVar27._0_4_ = iVar14;
        auVar27._8_4_ = iVar14;
        auVar27._12_4_ = iVar14;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar12;
        auVar23 = pmulld(auVar27,auVar23);
        auVar23 = pmovzxdq(in_XMM2,auVar23);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar12;
        auVar31._0_8_ = auVar23._0_8_ * 4 + lVar6;
        auVar31._8_8_ = auVar23._8_8_ * 4 + lVar6;
        *(undefined1 (*) [16])(lVar20 + uVar17 * 8) = auVar31;
        uVar15 = iVar14 + 8;
        uVar17 = (ulonglong)uVar15;
        auVar28._4_4_ = uVar19 - 1;
        auVar28._0_4_ = uVar11;
        auVar28._8_4_ = uVar11;
        auVar28._12_4_ = uVar11;
        auVar23 = pmulld(auVar28,auVar24);
        auVar23 = pmovzxdq(auVar31,auVar23);
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar12;
        auVar32._0_8_ = auVar23._0_8_ * 4 + lVar6;
        auVar32._8_8_ = auVar23._8_8_ * 4 + lVar6;
        *(undefined1 (*) [16])(lVar20 + (ulonglong)uVar11 * 8) = auVar32;
        auVar29._4_4_ = uVar19 + 1;
        auVar29._0_4_ = uVar19;
        auVar29._8_4_ = uVar19;
        auVar29._12_4_ = uVar19;
        auVar23 = pmulld(auVar29,auVar25);
        auVar23 = pmovzxdq(auVar32,auVar23);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar12;
        auVar33._0_8_ = auVar23._0_8_ * 4 + lVar6;
        auVar33._8_8_ = auVar23._8_8_ * 4 + lVar6;
        *(undefined1 (*) [16])(lVar20 + (ulonglong)uVar19 * 8) = auVar33;
        uVar11 = uVar19 + 2;
        auVar30._4_4_ = uVar19 + 3;
        auVar30._0_4_ = uVar11;
        auVar30._8_4_ = uVar11;
        auVar30._12_4_ = uVar11;
        auVar23 = pmulld(auVar30,auVar26);
        auVar23 = pmovzxdq(auVar33,auVar23);
        in_XMM2._0_8_ = auVar23._0_8_ * 4 + lVar6;
        in_XMM2._8_8_ = auVar23._8_8_ * 4 + lVar6;
        *(undefined1 (*) [16])(lVar20 + (ulonglong)uVar11 * 8) = in_XMM2;
        uVar19 = uVar19 + 8;
      } while (uVar15 < (uVar16 & 0xf8));
      if (uVar18 <= uVar15) goto LAB_145548758;
    }
    plVar21 = (longlong *)(lVar20 + uVar17 * 8);
    do {
      iVar14 = (int)uVar17;
      uVar16 = iVar14 + 1;
      uVar17 = (ulonglong)uVar16;
      *plVar21 = lVar6 + (ulonglong)(iVar14 * (uint)uVar5) * 4;
      plVar21 = plVar21 + 1;
    } while (uVar16 < uVar18);
  }
LAB_145548758:
  plVar21 = local_68;
  lVar2 = local_70;
  lVar6 = local_78;
  *(uint *)((longlong)auStack_90 + lVar22 + lVar10 + lVar9 + lVar8 + lVar7 + 0x10) = uVar18;
  *(uint *)((longlong)auStack_90 + lVar22 + lVar10 + lVar9 + lVar8 + lVar7 + 8) = (uint)bVar4;
  *(uint *)((longlong)auStack_90 + lVar22 + lVar10 + lVar9 + lVar8 + lVar7) = param_7;
  *(longlong *)((longlong)&lStack_98 + lVar22 + lVar10 + lVar9 + lVar8 + lVar7) = lVar6;
  *(undefined8 *)((longlong)auStack_c0 + lVar22 + lVar10 + lVar9 + lVar8 + lVar7) = 0x145548780;
  FUN_1455489e0(plVar21,lVar20,lVar2,lVar3);
  if ((ushort)param_7 <= *(ushort *)((longlong)param_2 + 0x12)) {
    param_7 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  }
  *(short *)((longlong)param_2 + 0x12) = (short)param_7;
  return;
}



// FUNCTION 1455487b0 FUN_1455487b0 body=472 status=ok
// SIG undefined FUN_1455487b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455487b0(undefined8 param_1,longlong *param_2,byte param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uVar23;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 auStack_60 [5];
  longlong lStack_38;
  uint auStack_30 [6];
  longlong local_18 [2];
  
  local_res10 = *param_4;
  local_res8 = param_5;
  param_5 = param_6;
  uVar9 = (ulonglong)param_3 * 8 + 0xf;
  if (uVar9 <= (ulonglong)param_3 * 8) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x14554880b;
  uVar3 = *(ushort *)(param_2 + 2);
  lVar5 = -(uVar9 & 0xfffffffffffffff0);
  lVar4 = *param_2;
  uVar9 = 0;
  lVar2 = (longlong)local_18 + lVar5;
  uVar23 = CONCAT26(0,CONCAT24(uVar3,(uint)uVar3));
  uVar11 = (uint)param_3;
  if (param_3 != 0) {
    if ((7 < param_3) && (1 < DAT_14c707900)) {
      uVar8 = 4;
      do {
        iVar6 = (int)uVar9;
        uVar1 = uVar8 - 2;
        auVar16._4_4_ = iVar6 + 1;
        auVar16._0_4_ = iVar6;
        auVar16._8_4_ = iVar6;
        auVar16._12_4_ = iVar6;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar23;
        auVar12 = pmulld(auVar16,auVar12);
        auVar12 = pmovzxdq(in_XMM2,auVar12);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar23;
        auVar20._0_8_ = auVar12._0_8_ * 4 + lVar4;
        auVar20._8_8_ = auVar12._8_8_ * 4 + lVar4;
        *(undefined1 (*) [16])(lVar2 + uVar9 * 8) = auVar20;
        uVar7 = iVar6 + 8;
        uVar9 = (ulonglong)uVar7;
        auVar17._4_4_ = uVar8 - 1;
        auVar17._0_4_ = uVar1;
        auVar17._8_4_ = uVar1;
        auVar17._12_4_ = uVar1;
        auVar12 = pmulld(auVar17,auVar13);
        auVar12 = pmovzxdq(auVar20,auVar12);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar23;
        auVar21._0_8_ = auVar12._0_8_ * 4 + lVar4;
        auVar21._8_8_ = auVar12._8_8_ * 4 + lVar4;
        *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 8) = auVar21;
        auVar18._4_4_ = uVar8 + 1;
        auVar18._0_4_ = uVar8;
        auVar18._8_4_ = uVar8;
        auVar18._12_4_ = uVar8;
        auVar12 = pmulld(auVar18,auVar14);
        auVar12 = pmovzxdq(auVar21,auVar12);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar23;
        auVar22._0_8_ = auVar12._0_8_ * 4 + lVar4;
        auVar22._8_8_ = auVar12._8_8_ * 4 + lVar4;
        *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar8 * 8) = auVar22;
        uVar1 = uVar8 + 2;
        auVar19._4_4_ = uVar8 + 3;
        auVar19._0_4_ = uVar1;
        auVar19._8_4_ = uVar1;
        auVar19._12_4_ = uVar1;
        auVar12 = pmulld(auVar19,auVar15);
        auVar12 = pmovzxdq(auVar22,auVar12);
        in_XMM2._0_8_ = auVar12._0_8_ * 4 + lVar4;
        in_XMM2._8_8_ = auVar12._8_8_ * 4 + lVar4;
        *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 8) = in_XMM2;
        uVar8 = uVar8 + 8;
      } while (uVar7 < (uVar11 & 0xfffffff8));
      if (uVar11 <= uVar7) goto LAB_145548949;
    }
    plVar10 = (longlong *)(lVar2 + uVar9 * 8);
    do {
      iVar6 = (int)uVar9;
      uVar8 = iVar6 + 1;
      uVar9 = (ulonglong)uVar8;
      *plVar10 = lVar4 + (ulonglong)(iVar6 * (uint)uVar3) * 4;
      plVar10 = plVar10 + 1;
    } while (uVar8 < uVar11);
  }
LAB_145548949:
  *(uint *)((longlong)auStack_30 + lVar5 + 0x10) = uVar11;
  *(undefined4 *)((longlong)auStack_30 + lVar5 + 8) = 1;
  *(undefined4 *)((longlong)auStack_30 + lVar5) = param_8;
  *(undefined8 **)((longlong)&lStack_38 + lVar5) = &param_5;
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14554897a;
  local_res20 = param_1;
  FUN_1455489e0(&local_res20,lVar2,&local_res10,&local_res8);
  return;
}



// FUNCTION 145548990 FUN_145548990 body=69 status=ok
// SIG undefined FUN_145548990(void)

void FUN_145548990(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined4 param_5)

{
  if (1.1920929e-07 <= ABS(param_4)) {
    FUN_14554a040(param_2,param_1);
    return;
  }
  if (1.1920929e-07 <= ABS(param_3)) {
    FUN_145549f90(param_2,param_1,param_2,param_5);
    return;
  }
  return;
}



// FUNCTION 1455489e0 FUN_1455489e0 body=1153 status=ok
// SIG undefined FUN_1455489e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455489e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint param_6,uint param_7,uint param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ushort uVar26;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 auStack_100 [5];
  undefined8 local_d8;
  float afStack_d0 [38];
  ulonglong uVar27;
  
  uVar28 = param_8 + 3 & 0xfffffffc;
  uVar25 = (ulonglong)uVar28 * 4;
  uVar23 = uVar25 + 0xf;
  if (uVar23 <= uVar25) {
    uVar23 = 0xffffffffffffff0;
  }
  lVar9 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = uVar25 + 0xf;
  if (uVar23 <= uVar25) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar9) = 0x145548a98;
  lVar10 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = uVar25 + 0xf;
  lVar21 = lVar10 + lVar9 + -0xd8;
  fVar64 = 1.0 / (float)param_6;
  if (uVar23 <= uVar25) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar10 + lVar9) = 0x145548adf;
  local_d8 = (ulonglong)param_7;
  lVar22 = -(uVar23 & 0xfffffffffffffff0) + lVar10 + lVar9 + -0xd8;
  if (param_7 != 0) {
    param_3 = param_3 - (longlong)param_1;
    param_4 = param_4 - (longlong)param_1;
    param_5 = param_5 - (longlong)param_1;
    do {
      uVar27 = 0;
      fVar5 = *(float *)((longlong)param_1 + param_3);
      fVar63 = *(float *)(param_3 + 4 + (longlong)param_1);
      lVar6 = *param_1;
      lVar7 = *(longlong *)(param_4 + (longlong)param_1);
      lVar8 = *(longlong *)(param_5 + (longlong)param_1);
      uVar25 = uVar27;
      if (uVar28 != 0) {
        do {
          uVar24 = (int)uVar25 + 4;
          pfVar1 = (float *)(lVar7 + uVar25 * 4);
          pfVar2 = (float *)(lVar8 + uVar25 * 4);
          fVar42 = *pfVar2;
          fVar44 = pfVar2[1];
          fVar46 = pfVar2[2];
          fVar48 = pfVar2[3];
          fVar34 = *pfVar1 * fVar5;
          fVar36 = pfVar1[1] * fVar5;
          fVar38 = pfVar1[2] * fVar5;
          fVar40 = pfVar1[3] * fVar5;
          pfVar1 = (float *)((longlong)afStack_d0 + uVar25 * 4 + lVar9 + -8);
          *pfVar1 = fVar34;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar38;
          pfVar1[3] = fVar40;
          fVar42 = fVar42 * fVar63 - fVar34;
          fVar44 = fVar44 * fVar63 - fVar36;
          fVar46 = fVar46 * fVar63 - fVar38;
          fVar48 = fVar48 * fVar63 - fVar40;
          pfVar1 = (float *)((longlong)afStack_d0 + uVar25 * 4 + lVar21 + 0xd0);
          *pfVar1 = fVar42 * fVar64;
          pfVar1[1] = fVar44 * fVar64;
          pfVar1[2] = fVar46 * fVar64;
          pfVar1[3] = fVar48 * fVar64;
          puVar3 = (uint *)((longlong)afStack_d0 + uVar25 * 4 + lVar22 + 0xd0);
          *puVar3 = -(uint)(1.1920929e-07 < ABS(fVar42)) >> 0x10 |
                    (uint)(1.1920929e-07 < ABS(fVar34)) * -0x10000;
          puVar3[1] = -(uint)(1.1920929e-07 < ABS(fVar44)) >> 0x10 |
                      (uint)(1.1920929e-07 < ABS(fVar36)) * -0x10000;
          puVar3[2] = -(uint)(1.1920929e-07 < ABS(fVar46)) >> 0x10 |
                      (uint)(1.1920929e-07 < ABS(fVar38)) * -0x10000;
          puVar3[3] = -(uint)(1.1920929e-07 < ABS(fVar48)) >> 0x10 |
                      (uint)(1.1920929e-07 < ABS(fVar40)) * -0x10000;
          uVar25 = (ulonglong)uVar24;
        } while (uVar24 < uVar28);
      }
      if (param_8 != 0) {
        uVar29 = 0;
        uVar24 = uVar29;
        do {
          if (*(short *)((longlong)afStack_d0 + (ulonglong)(uVar24 * 2) * 2 + lVar22 + 0xd0) == 0) {
            if (*(short *)((longlong)afStack_d0 +
                          (ulonglong)(uVar24 * 2) * 2 +
                          -(uVar23 & 0xfffffffffffffff0) + lVar10 + lVar9 + -6) != 0) {
              fVar5 = *(float *)((longlong)afStack_d0 + uVar27 * 4 + lVar9 + -8);
              lVar7 = *(longlong *)(param_2 + uVar27 * 8);
              uVar24 = uVar29;
              if ((param_6 & 0xfffffff0) != 0) {
                do {
                  uVar25 = (ulonglong)uVar24;
                  uVar24 = uVar24 + 0x10;
                  pfVar1 = (float *)(lVar6 + uVar25 * 4);
                  fVar63 = pfVar1[1];
                  fVar42 = pfVar1[2];
                  fVar44 = pfVar1[3];
                  pfVar2 = (float *)(lVar6 + 0x10 + uVar25 * 4);
                  fVar46 = *pfVar2;
                  fVar48 = pfVar2[1];
                  fVar34 = pfVar2[2];
                  fVar36 = pfVar2[3];
                  pfVar2 = (float *)(lVar6 + 0x20 + uVar25 * 4);
                  fVar38 = *pfVar2;
                  fVar40 = pfVar2[1];
                  fVar54 = pfVar2[2];
                  fVar55 = pfVar2[3];
                  pfVar2 = (float *)(lVar6 + 0x30 + uVar25 * 4);
                  fVar56 = *pfVar2;
                  fVar57 = pfVar2[1];
                  fVar58 = pfVar2[2];
                  fVar59 = pfVar2[3];
                  pfVar2 = (float *)(lVar7 + uVar25 * 4);
                  fVar60 = pfVar2[1];
                  fVar61 = pfVar2[2];
                  fVar62 = pfVar2[3];
                  pfVar4 = (float *)(lVar7 + 0x10 + uVar25 * 4);
                  fVar11 = *pfVar4;
                  fVar12 = pfVar4[1];
                  fVar13 = pfVar4[2];
                  fVar14 = pfVar4[3];
                  pfVar4 = (float *)(lVar7 + 0x20 + uVar25 * 4);
                  fVar15 = *pfVar4;
                  fVar16 = pfVar4[1];
                  fVar17 = pfVar4[2];
                  fVar18 = pfVar4[3];
                  pfVar4 = (float *)(lVar7 + uVar25 * 4);
                  *pfVar4 = *pfVar1 * fVar5 + *pfVar2;
                  pfVar4[1] = fVar63 * fVar5 + fVar60;
                  pfVar4[2] = fVar42 * fVar5 + fVar61;
                  pfVar4[3] = fVar44 * fVar5 + fVar62;
                  pfVar1 = (float *)(lVar7 + 0x30 + uVar25 * 4);
                  fVar63 = *pfVar1;
                  fVar42 = pfVar1[1];
                  fVar44 = pfVar1[2];
                  fVar60 = pfVar1[3];
                  pfVar1 = (float *)(lVar7 + 0x10 + uVar25 * 4);
                  *pfVar1 = fVar46 * fVar5 + fVar11;
                  pfVar1[1] = fVar48 * fVar5 + fVar12;
                  pfVar1[2] = fVar34 * fVar5 + fVar13;
                  pfVar1[3] = fVar36 * fVar5 + fVar14;
                  pfVar1 = (float *)(lVar7 + 0x20 + uVar25 * 4);
                  *pfVar1 = fVar38 * fVar5 + fVar15;
                  pfVar1[1] = fVar40 * fVar5 + fVar16;
                  pfVar1[2] = fVar54 * fVar5 + fVar17;
                  pfVar1[3] = fVar55 * fVar5 + fVar18;
                  pfVar1 = (float *)(lVar7 + 0x30 + uVar25 * 4);
                  *pfVar1 = fVar56 * fVar5 + fVar63;
                  pfVar1[1] = fVar57 * fVar5 + fVar42;
                  pfVar1[2] = fVar58 * fVar5 + fVar44;
                  pfVar1[3] = fVar59 * fVar5 + fVar60;
                } while (uVar24 < (param_6 & 0xfffffff0));
              }
              for (; uVar24 < param_6; uVar24 = uVar24 + 4) {
                uVar25 = (ulonglong)uVar24;
                pfVar1 = (float *)(lVar6 + uVar25 * 4);
                fVar63 = pfVar1[1];
                fVar42 = pfVar1[2];
                fVar44 = pfVar1[3];
                pfVar2 = (float *)(lVar7 + uVar25 * 4);
                fVar46 = pfVar2[1];
                fVar48 = pfVar2[2];
                fVar34 = pfVar2[3];
                pfVar4 = (float *)(lVar7 + uVar25 * 4);
                *pfVar4 = *pfVar1 * fVar5 + *pfVar2;
                pfVar4[1] = fVar63 * fVar5 + fVar46;
                pfVar4[2] = fVar42 * fVar5 + fVar48;
                pfVar4[3] = fVar44 * fVar5 + fVar34;
              }
            }
          }
          else {
            fVar5 = *(float *)((longlong)afStack_d0 + uVar27 * 4 + lVar21 + 0xd0);
            fVar63 = *(float *)((longlong)afStack_d0 + uVar27 * 4 + lVar9 + -8);
            lVar7 = *(longlong *)(param_2 + uVar27 * 8);
            fVar34 = fVar5 * 16.0;
            fVar42 = fVar5 * 1.0 + fVar63;
            fVar44 = fVar5 * 2.0 + fVar63;
            fVar46 = fVar5 * 3.0 + fVar63;
            fVar48 = fVar5 * 4.0 + fVar63;
            fVar36 = fVar5 * 4.0;
            fVar38 = fVar5 * 5.0 + fVar63;
            fVar40 = fVar5 * 6.0 + fVar63;
            fVar54 = fVar5 * 7.0 + fVar63;
            fVar55 = fVar5 * 8.0 + fVar63;
            fVar56 = fVar5 * 9.0 + fVar63;
            fVar57 = fVar5 * 10.0 + fVar63;
            fVar58 = fVar5 * 11.0 + fVar63;
            fVar59 = fVar5 * 12.0 + fVar63;
            fVar60 = fVar5 * 13.0 + fVar63;
            fVar61 = fVar5 * 14.0 + fVar63;
            fVar62 = fVar5 * 15.0 + fVar63;
            fVar63 = fVar5 * 16.0 + fVar63;
            uVar24 = uVar29;
            if ((param_6 & 0xfffffff0) != 0) {
              do {
                uVar25 = (ulonglong)uVar24;
                uVar24 = uVar24 + 0x10;
                pfVar1 = (float *)(lVar6 + uVar25 * 4);
                pfVar2 = (float *)(lVar6 + 0x10 + uVar25 * 4);
                fVar50 = *pfVar1 * fVar42;
                fVar51 = pfVar1[1] * fVar44;
                fVar52 = pfVar1[2] * fVar46;
                fVar53 = pfVar1[3] * fVar48;
                fVar42 = fVar42 + fVar34;
                fVar44 = fVar44 + fVar34;
                fVar46 = fVar46 + fVar34;
                fVar48 = fVar48 + fVar34;
                fVar43 = *pfVar2 * fVar38;
                fVar45 = pfVar2[1] * fVar40;
                fVar47 = pfVar2[2] * fVar54;
                fVar49 = pfVar2[3] * fVar55;
                fVar38 = fVar38 + fVar34;
                fVar40 = fVar40 + fVar34;
                fVar54 = fVar54 + fVar34;
                fVar55 = fVar55 + fVar34;
                pfVar1 = (float *)(lVar6 + 0x20 + uVar25 * 4);
                pfVar2 = (float *)(lVar6 + 0x30 + uVar25 * 4);
                fVar35 = *pfVar1 * fVar56;
                fVar37 = pfVar1[1] * fVar57;
                fVar39 = pfVar1[2] * fVar58;
                fVar41 = pfVar1[3] * fVar59;
                fVar56 = fVar56 + fVar34;
                fVar57 = fVar57 + fVar34;
                fVar58 = fVar58 + fVar34;
                fVar59 = fVar59 + fVar34;
                fVar30 = *pfVar2 * fVar60;
                fVar31 = pfVar2[1] * fVar61;
                fVar32 = pfVar2[2] * fVar62;
                fVar33 = pfVar2[3] * fVar63;
                fVar60 = fVar60 + fVar34;
                fVar61 = fVar61 + fVar34;
                fVar62 = fVar62 + fVar34;
                fVar63 = fVar63 + fVar34;
                pfVar1 = (float *)(lVar7 + uVar25 * 4);
                fVar5 = pfVar1[1];
                fVar11 = pfVar1[2];
                fVar12 = pfVar1[3];
                pfVar2 = (float *)(lVar7 + 0x10 + uVar25 * 4);
                fVar13 = *pfVar2;
                fVar14 = pfVar2[1];
                fVar15 = pfVar2[2];
                fVar16 = pfVar2[3];
                pfVar2 = (float *)(lVar7 + 0x20 + uVar25 * 4);
                fVar17 = *pfVar2;
                fVar18 = pfVar2[1];
                fVar19 = pfVar2[2];
                fVar20 = pfVar2[3];
                pfVar2 = (float *)(lVar7 + uVar25 * 4);
                *pfVar2 = fVar50 + *pfVar1;
                pfVar2[1] = fVar51 + fVar5;
                pfVar2[2] = fVar52 + fVar11;
                pfVar2[3] = fVar53 + fVar12;
                pfVar1 = (float *)(lVar7 + 0x30 + uVar25 * 4);
                fVar5 = *pfVar1;
                fVar11 = pfVar1[1];
                fVar12 = pfVar1[2];
                fVar50 = pfVar1[3];
                pfVar1 = (float *)(lVar7 + 0x10 + uVar25 * 4);
                *pfVar1 = fVar43 + fVar13;
                pfVar1[1] = fVar45 + fVar14;
                pfVar1[2] = fVar47 + fVar15;
                pfVar1[3] = fVar49 + fVar16;
                pfVar1 = (float *)(lVar7 + 0x20 + uVar25 * 4);
                *pfVar1 = fVar35 + fVar17;
                pfVar1[1] = fVar37 + fVar18;
                pfVar1[2] = fVar39 + fVar19;
                pfVar1[3] = fVar41 + fVar20;
                pfVar1 = (float *)(lVar7 + 0x30 + uVar25 * 4);
                *pfVar1 = fVar30 + fVar5;
                pfVar1[1] = fVar31 + fVar11;
                pfVar1[2] = fVar32 + fVar12;
                pfVar1[3] = fVar33 + fVar50;
              } while (uVar24 < (param_6 & 0xfffffff0));
            }
            for (; uVar24 < param_6; uVar24 = uVar24 + 4) {
              uVar25 = (ulonglong)uVar24;
              pfVar1 = (float *)(lVar6 + uVar25 * 4);
              pfVar2 = (float *)(lVar7 + uVar25 * 4);
              fVar5 = pfVar2[1];
              fVar63 = pfVar2[2];
              fVar34 = pfVar2[3];
              fVar38 = *pfVar1 * fVar42;
              fVar40 = pfVar1[1] * fVar44;
              fVar54 = pfVar1[2] * fVar46;
              fVar55 = pfVar1[3] * fVar48;
              fVar42 = fVar42 + fVar36;
              fVar44 = fVar44 + fVar36;
              fVar46 = fVar46 + fVar36;
              fVar48 = fVar48 + fVar36;
              pfVar1 = (float *)(lVar7 + uVar25 * 4);
              *pfVar1 = fVar38 + *pfVar2;
              pfVar1[1] = fVar40 + fVar5;
              pfVar1[2] = fVar54 + fVar63;
              pfVar1[3] = fVar55 + fVar34;
            }
          }
          uVar26 = (short)uVar27 + 1;
          uVar27 = (ulonglong)uVar26;
          uVar24 = (uint)uVar26;
        } while (uVar24 < param_8);
      }
      param_1 = param_1 + 1;
      local_d8 = local_d8 - 1;
    } while (local_d8 != 0);
  }
  return;
}



// FUNCTION 145548e70 FUN_145548e70 body=235 status=ok
// SIG undefined FUN_145548e70(void)

void FUN_145548e70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_6;
  while (3 < uVar1) {
    FUN_14554af90(param_1,param_2,param_3,param_4,param_5);
    iVar2 = iVar2 + 4;
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
    param_4 = param_4 + 0x20;
    uVar1 = param_6 - iVar2;
  }
  iVar2 = param_6 - iVar2;
  if (iVar2 == 1) {
    FUN_14554ac70(param_1,param_2,param_3,param_4,param_5);
  }
  else if (iVar2 == 2) {
    FUN_14554a1a0(param_1,param_2,param_3,param_4,param_5);
  }
  else if (iVar2 == 3) {
    FUN_14554b360(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 145548f60 FUN_145548f60 body=777 status=ok
// SIG undefined FUN_145548f60(void)

void FUN_145548f60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint *param_5
                  ,uint param_6,uint param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint local_f8;
  longlong local_d8 [8];
  longlong local_98 [11];
  
  if (param_6 == 1) {
    FUN_145548e70();
    return;
  }
  uVar8 = 0;
  local_f8 = 0;
  if (param_7 != 0) {
    do {
      uVar13 = param_7 - (int)uVar8;
      if (8 < uVar13) {
        uVar13 = 8;
      }
      memcpy(local_d8,(void *)(param_1 + uVar8 * 8),(ulonglong)(uVar13 * 8));
      memcpy(local_98,(void *)(uVar8 * 8 + param_2),(ulonglong)(uVar13 * 8));
      uVar14 = 0;
      if (param_6 != 0) {
        puVar7 = param_5;
        do {
          uVar1 = *puVar7;
          plVar9 = local_d8;
          plVar10 = local_98;
          lVar11 = param_3 + (uVar14 * param_7 + uVar8) * 8;
          iVar15 = 0;
          lVar12 = param_4 + uVar8 * 8;
          uVar6 = uVar13;
          while (3 < uVar6) {
            FUN_14554af90(plVar9,plVar10,lVar11,lVar12,uVar1);
            iVar15 = iVar15 + 4;
            plVar9 = plVar9 + 4;
            plVar10 = plVar10 + 4;
            lVar11 = lVar11 + 0x20;
            lVar12 = lVar12 + 0x20;
            uVar6 = uVar13 - iVar15;
          }
          iVar15 = uVar13 - iVar15;
          if (iVar15 == 1) {
            FUN_14554ac70(plVar9,plVar10,lVar11,lVar12,uVar1);
          }
          else if (iVar15 == 2) {
            FUN_14554a1a0(plVar9,plVar10,lVar11,lVar12,uVar1);
          }
          else if (iVar15 == 3) {
            FUN_14554b360(plVar9,plVar10,lVar11,lVar12,uVar1);
          }
          lVar16 = (ulonglong)uVar1 * 4;
          lVar17 = (ulonglong)uVar1 * 4;
          lVar12 = 2;
          lVar11 = 0;
          do {
            lVar2 = *(longlong *)((longlong)local_98 + lVar11);
            lVar3 = *(longlong *)((longlong)local_98 + lVar11 + 8);
            *(longlong *)((longlong)local_d8 + lVar11) =
                 lVar16 + *(longlong *)((longlong)local_d8 + lVar11);
            *(longlong *)((longlong)local_d8 + lVar11 + 8) =
                 lVar17 + *(longlong *)((longlong)local_d8 + lVar11 + 8);
            lVar4 = *(longlong *)((longlong)local_d8 + lVar11 + 0x10);
            lVar5 = *(longlong *)((longlong)local_d8 + lVar11 + 0x18);
            *(longlong *)((longlong)local_98 + lVar11) = lVar16 + lVar2;
            *(longlong *)((longlong)local_98 + lVar11 + 8) = lVar17 + lVar3;
            *(longlong *)((longlong)local_d8 + lVar11 + 0x10) = lVar4 + lVar16;
            *(longlong *)((longlong)local_d8 + lVar11 + 0x18) = lVar5 + lVar17;
            *(longlong *)((longlong)local_98 + lVar11 + 0x10) =
                 *(longlong *)((longlong)local_98 + lVar11 + 0x10) + lVar16;
            *(longlong *)((longlong)local_98 + lVar11 + 0x18) =
                 *(longlong *)((longlong)local_98 + lVar11 + 0x18) + lVar17;
            lVar12 = lVar12 + -1;
            lVar11 = lVar11 + 0x20;
          } while (lVar12 != 0);
          uVar14 = uVar14 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar14 < param_6);
      }
      local_f8 = local_f8 + 8;
      uVar8 = (ulonglong)local_f8;
    } while (local_f8 < param_7);
  }
  return;
}



// FUNCTION 145549270 FUN_145549270 body=1240 status=ok
// SIG undefined FUN_145549270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145549270(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7,uint *param_8,uint param_9,
                  uint param_10,undefined4 param_11)

{
  uint *puVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lVar29;
  undefined1 in_XMM2 [16];
  longlong lVar30;
  undefined8 auStack_190 [5];
  uint auStack_168 [8];
  uint local_148;
  uint local_144;
  uint local_140;
  uint *local_138;
  ulonglong local_130;
  longlong local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8 [2];
  longlong local_c8 [4];
  undefined1 local_a8 [16];
  longlong local_98 [11];
  
  uVar10 = 0;
  local_148 = 0;
  if (7 < param_9) {
    iVar21 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    auVar17 = ZEXT816(0);
    do {
      puVar1 = param_8 + uVar10;
      iVar2 = (int)uVar10;
      uVar16 = iVar2 + 8;
      uVar10 = (ulonglong)uVar16;
      in_XMM2._0_4_ = auVar17._0_4_ + *puVar1;
      in_XMM2._4_4_ = auVar17._4_4_ + puVar1[1];
      in_XMM2._8_4_ = auVar17._8_4_ + puVar1[2];
      in_XMM2._12_4_ = auVar17._12_4_ + puVar1[3];
      puVar1 = param_8 + (iVar2 + 4);
      iVar21 = iVar21 + *puVar1;
      iVar26 = iVar26 + puVar1[1];
      iVar27 = iVar27 + puVar1[2];
      iVar28 = iVar28 + puVar1[3];
      auVar17 = in_XMM2;
    } while (uVar16 < (param_9 & 0xfffffff8));
    local_148 = iVar21 + in_XMM2._0_4_ + iVar27 + in_XMM2._8_4_ +
                iVar26 + in_XMM2._4_4_ + iVar28 + in_XMM2._12_4_;
  }
  iVar21 = 0;
  iVar26 = 0;
  uVar16 = (uint)uVar10;
  if (param_9 <= uVar16) goto LAB_145549363;
  if (param_9 - uVar16 < 2) {
LAB_145549357:
    local_148 = local_148 + param_8[uVar10];
  }
  else {
    uVar8 = ((param_9 - uVar16) - 2 >> 1) + 1;
    uVar15 = (ulonglong)uVar8;
    do {
      iVar21 = iVar21 + param_8[uVar10];
      iVar26 = iVar26 + param_8[uVar10 + 1];
      uVar10 = uVar10 + 2;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (uVar16 + uVar8 * 2 < param_9) goto LAB_145549357;
  }
  local_148 = local_148 + iVar26 + iVar21;
LAB_145549363:
  uVar15 = CONCAT44(local_148,local_148);
  uVar10 = (ulonglong)local_148 * 0x20 + 0xf;
  if (uVar10 <= (ulonglong)local_148 * 0x20) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_190[0] = 0x145549391;
  lVar3 = -(uVar10 & 0xfffffffffffffff0);
  uVar16 = 0;
  if (DAT_14c707900 < 2) {
    plVar14 = (longlong *)local_118;
    do {
      uVar8 = uVar16 * local_148;
      uVar16 = uVar16 + 1;
      *plVar14 = (longlong)&local_148 + (ulonglong)uVar8 * 4 + lVar3;
      plVar14 = plVar14 + 1;
    } while (uVar16 < 8);
  }
  else {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar15;
    auVar17 = pmulld(_DAT_1499314d0,auVar17);
    auVar17 = pmovzxdq(in_XMM2,auVar17);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar15;
    iVar21 = (int)DAT_1499314d0;
    auVar22._0_4_ = iVar21 + 2;
    iVar26 = DAT_1499314d0._4_4_;
    auVar22._4_4_ = iVar26 + 2;
    iVar27 = DAT_1499314d0._8_4_;
    auVar22._8_4_ = iVar27 + 2;
    iVar28 = DAT_1499314d0._12_4_;
    auVar22._12_4_ = iVar28 + 2;
    local_118._0_8_ = (longlong)&local_148 + auVar17._0_8_ * 4 + lVar3;
    local_118._8_8_ = (longlong)&local_148 + auVar17._8_8_ * 4 + lVar3;
    auVar17 = pmulld(auVar22,auVar18);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar15;
    auVar17 = pmovzxdq(local_118,auVar17);
    auVar23._0_4_ = iVar21 + 4;
    auVar23._4_4_ = iVar26 + 4;
    auVar23._8_4_ = iVar27 + 4;
    auVar23._12_4_ = iVar28 + 4;
    local_108._0_8_ = (longlong)&local_148 + auVar17._0_8_ * 4 + lVar3;
    local_108._8_8_ = (longlong)&local_148 + auVar17._8_8_ * 4 + lVar3;
    auVar17 = pmulld(auVar23,auVar19);
    auVar17 = pmovzxdq(local_108,auVar17);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar15;
    auVar24._0_4_ = iVar21 + 6;
    auVar24._4_4_ = iVar26 + 6;
    auVar24._8_4_ = iVar27 + 6;
    auVar24._12_4_ = iVar28 + 6;
    local_f8._0_8_ = (longlong)&local_148 + auVar17._0_8_ * 4 + lVar3;
    local_f8._8_8_ = (longlong)&local_148 + auVar17._8_8_ * 4 + lVar3;
    auVar17 = pmulld(auVar24,auVar20);
    auVar17 = pmovzxdq(local_f8,auVar17);
    local_e8 = (longlong)&local_148 + auVar17._0_8_ * 4 + lVar3;
    lStack_e0 = (longlong)&local_148 + auVar17._8_8_ * 4 + lVar3;
  }
  local_140 = 0;
  if (param_10 != 0) {
    do {
      uVar10 = (ulonglong)local_140;
      uVar16 = param_10 - local_140;
      if (8 < param_10 - local_140) {
        uVar16 = 8;
      }
      _Src = (void *)(param_1 + uVar10 * 8);
      local_130 = uVar10;
      if (param_9 == 1) {
        uVar8 = *param_8;
        *(uint *)((longlong)auStack_168 + lVar3 + 8) = uVar16;
        *(uint *)((longlong)auStack_168 + lVar3) = uVar8;
        *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x1455494d1;
        FUN_145548e70(_Src,local_118,param_2 + uVar10 * 8,param_3 + uVar10 * 8);
      }
      else {
        *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x1455494ed;
        memcpy(local_98,_Src,(ulonglong)(uVar16 * 8));
        local_d8[0] = local_118._0_8_;
        local_d8[1] = local_118._8_8_;
        local_c8[0] = local_108._0_8_;
        local_c8[1] = local_108._8_8_;
        local_a8._8_8_ = lStack_e0;
        local_a8._0_8_ = local_e8;
        local_c8[2] = local_f8._0_8_;
        local_c8[3] = local_f8._8_8_;
        local_144 = 0;
        if (param_9 != 0) {
          local_128 = param_3 + uVar10 * 8;
          local_138 = param_8;
          do {
            uVar8 = *local_138;
            plVar11 = local_98;
            plVar14 = local_d8;
            lVar12 = param_2 + (local_144 * param_10 + uVar10) * 8;
            iVar21 = 0;
            lVar13 = local_128;
            uVar9 = uVar16;
            while (3 < uVar9) {
                    /* WARNING: Read-only address (ram,0x0001499314d0) is written */
              *(uint *)((longlong)auStack_168 + lVar3) = uVar8;
              *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x145549586;
              FUN_14554af90(plVar11,plVar14,lVar12,lVar13);
              iVar21 = iVar21 + 4;
              plVar11 = plVar11 + 4;
              plVar14 = plVar14 + 4;
              lVar12 = lVar12 + 0x20;
              lVar13 = lVar13 + 0x20;
              uVar9 = uVar16 - iVar21;
            }
                    /* WARNING: Read-only address (ram,0x0001499314d0) is written */
            iVar21 = uVar16 - iVar21;
            if (iVar21 == 1) {
              *(uint *)((longlong)auStack_168 + lVar3) = uVar8;
              *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x145549600;
              FUN_14554ac70(plVar11,plVar14,lVar12,lVar13);
            }
            else if (iVar21 == 2) {
              *(uint *)((longlong)auStack_168 + lVar3) = uVar8;
              *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x1455495e8;
              FUN_14554a1a0(plVar11,plVar14,lVar12,lVar13);
            }
            else if (iVar21 == 3) {
              *(uint *)((longlong)auStack_168 + lVar3) = uVar8;
              *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x1455495d0;
              FUN_14554b360(plVar11,plVar14,lVar12,lVar13);
            }
            lVar29 = (ulonglong)uVar8 * 4;
            lVar30 = (ulonglong)uVar8 * 4;
            lVar13 = 2;
            lVar12 = 0;
            do {
              lVar4 = *(longlong *)((longlong)local_d8 + lVar12);
              lVar5 = *(longlong *)((longlong)local_d8 + lVar12 + 8);
              *(longlong *)((longlong)local_98 + lVar12) =
                   lVar29 + *(longlong *)((longlong)local_98 + lVar12);
              *(longlong *)((longlong)local_98 + lVar12 + 8) =
                   lVar30 + *(longlong *)((longlong)local_98 + lVar12 + 8);
              lVar6 = *(longlong *)((longlong)local_98 + lVar12 + 0x10);
              lVar7 = *(longlong *)((longlong)local_98 + lVar12 + 0x18);
              *(longlong *)((longlong)local_d8 + lVar12) = lVar29 + lVar4;
              *(longlong *)((longlong)local_d8 + lVar12 + 8) = lVar30 + lVar5;
              lVar4 = *(longlong *)((longlong)local_c8 + lVar12);
              lVar5 = *(longlong *)((longlong)local_c8 + lVar12 + 8);
              *(longlong *)((longlong)local_98 + lVar12 + 0x10) = lVar29 + lVar6;
              *(longlong *)((longlong)local_98 + lVar12 + 0x18) = lVar30 + lVar7;
              auVar25._0_8_ = lVar29 + lVar4;
              auVar25._8_8_ = lVar30 + lVar5;
              *(undefined1 (*) [16])((longlong)local_c8 + lVar12) = auVar25;
              lVar13 = lVar13 + -1;
              lVar12 = lVar12 + 0x20;
            } while (lVar13 != 0);
            local_144 = local_144 + 1;
            local_138 = local_138 + 1;
            uVar10 = local_130;
          } while (local_144 < param_9);
        }
      }
      *(undefined4 *)((longlong)auStack_168 + lVar3 + 0x18) = param_11;
      uVar8 = local_148;
      *(uint *)((longlong)auStack_168 + lVar3 + 0x10) = uVar16;
      *(uint *)((longlong)auStack_168 + lVar3 + 8) = uVar8;
      *(ulonglong *)((longlong)auStack_168 + lVar3) = param_7 + uVar10 * 8;
      *(undefined8 *)((longlong)auStack_190 + lVar3) = 0x145549710;
      FUN_1455489e0(local_118,param_4,param_5 + uVar10 * 8,param_6 + uVar10 * 8);
      local_140 = local_140 + 8;
    } while (local_140 < param_10);
  }
  return;
}



// FUNCTION 145549750 FUN_145549750 body=349 status=ok
// SIG undefined FUN_145549750(void)

void FUN_145549750(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined4 param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_8;
  while (3 < uVar1) {
    FUN_14554b700(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    iVar2 = iVar2 + 4;
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
    param_4 = param_4 + 0x20;
    param_5 = param_5 + 0x20;
    param_6 = param_6 + 0x20;
    uVar1 = param_8 - iVar2;
  }
  iVar2 = param_8 - iVar2;
  if (iVar2 == 1) {
    FUN_14554ac70(param_1,param_2,param_3,param_4,param_7);
    FUN_14554ac70(param_2,param_2,param_5,param_6,param_7);
  }
  else if (iVar2 == 2) {
    FUN_14554a1a0(param_1,param_2,param_3,param_4,param_7);
    FUN_14554a1a0(param_2,param_2,param_5,param_6,param_7);
  }
  else if (iVar2 == 3) {
    FUN_14554bdc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 1455498b0 FUN_1455498b0 body=630 status=ok
// SIG undefined FUN_1455498b0(void)

void FUN_1455498b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,uint *param_7,uint param_8,uint param_9)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_d8 [8];
  longlong local_98 [11];
  
  uVar6 = param_8;
  if (param_8 != 1) {
    uVar12 = 0;
    param_8 = 0;
    if (param_9 != 0) {
      do {
        uVar10 = param_9 - (int)uVar12;
        if (8 < uVar10) {
          uVar10 = 8;
        }
        memcpy(local_d8,(void *)(param_1 + uVar12 * 8),(ulonglong)(uVar10 * 8));
        memcpy(local_98,(void *)(uVar12 * 8 + param_2),(ulonglong)(uVar10 * 8));
        uVar9 = 0;
        if (uVar6 != 0) {
          puVar11 = param_7;
          do {
            uVar1 = *puVar11;
            lVar7 = uVar9 * param_9 + uVar12;
            FUN_145549750(local_d8,local_98,param_3 + lVar7 * 8,param_4 + uVar12 * 8,
                          param_5 + lVar7 * 8,param_6 + uVar12 * 8,uVar1,uVar10);
            lVar13 = (ulonglong)uVar1 * 4;
            lVar14 = (ulonglong)uVar1 * 4;
            lVar8 = 2;
            lVar7 = 0;
            do {
              lVar2 = *(longlong *)((longlong)local_98 + lVar7);
              lVar3 = *(longlong *)((longlong)local_98 + lVar7 + 8);
              *(longlong *)((longlong)local_d8 + lVar7) =
                   lVar13 + *(longlong *)((longlong)local_d8 + lVar7);
              *(longlong *)((longlong)local_d8 + lVar7 + 8) =
                   lVar14 + *(longlong *)((longlong)local_d8 + lVar7 + 8);
              lVar4 = *(longlong *)((longlong)local_d8 + lVar7 + 0x10);
              lVar5 = *(longlong *)((longlong)local_d8 + lVar7 + 0x18);
              *(longlong *)((longlong)local_98 + lVar7) = lVar13 + lVar2;
              *(longlong *)((longlong)local_98 + lVar7 + 8) = lVar14 + lVar3;
              *(longlong *)((longlong)local_d8 + lVar7 + 0x10) = lVar4 + lVar13;
              *(longlong *)((longlong)local_d8 + lVar7 + 0x18) = lVar5 + lVar14;
              *(longlong *)((longlong)local_98 + lVar7 + 0x10) =
                   *(longlong *)((longlong)local_98 + lVar7 + 0x10) + lVar13;
              *(longlong *)((longlong)local_98 + lVar7 + 0x18) =
                   *(longlong *)((longlong)local_98 + lVar7 + 0x18) + lVar14;
              lVar8 = lVar8 + -1;
              lVar7 = lVar7 + 0x20;
            } while (lVar8 != 0);
            uVar9 = uVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 < uVar6);
          uVar12 = (ulonglong)param_8;
        }
        param_8 = (int)uVar12 + 8;
        uVar12 = (ulonglong)param_8;
      } while (param_8 < param_9);
    }
    return;
  }
  FUN_145549750();
  return;
}



// FUNCTION 145549b30 FUN_145549b30 body=1119 status=ok
// SIG undefined FUN_145549b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_145549b30(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,undefined8 param_6,longlong param_7,longlong param_8,
                       longlong param_9,uint *param_10,uint param_11,uint param_12,
                       undefined4 param_13)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM2 [16];
  longlong lVar28;
  longlong lVar29;
  undefined8 auStack_180 [5];
  longlong lStack_158;
  uint auStack_150 [6];
  uint local_138 [2];
  longlong local_130;
  longlong local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8 [2];
  longlong local_c8 [4];
  undefined1 local_a8 [16];
  longlong local_98 [11];
  
  uVar8 = 0;
  local_138[0] = 0;
  if (7 < param_11) {
    iVar20 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    auVar16 = ZEXT816(0);
    do {
      puVar12 = param_10 + uVar8;
      iVar1 = (int)uVar8;
      uVar15 = iVar1 + 8;
      uVar8 = (ulonglong)uVar15;
      in_XMM2._0_4_ = auVar16._0_4_ + *puVar12;
      in_XMM2._4_4_ = auVar16._4_4_ + puVar12[1];
      in_XMM2._8_4_ = auVar16._8_4_ + puVar12[2];
      in_XMM2._12_4_ = auVar16._12_4_ + puVar12[3];
      puVar12 = param_10 + (iVar1 + 4);
      iVar20 = iVar20 + *puVar12;
      iVar25 = iVar25 + puVar12[1];
      iVar26 = iVar26 + puVar12[2];
      iVar27 = iVar27 + puVar12[3];
      auVar16 = in_XMM2;
    } while (uVar15 < (param_11 & 0xfffffff8));
    local_138[0] = iVar20 + in_XMM2._0_4_ + iVar26 + in_XMM2._8_4_ +
                   iVar25 + in_XMM2._4_4_ + iVar27 + in_XMM2._12_4_;
  }
  iVar20 = 0;
  iVar25 = 0;
  uVar15 = (uint)uVar8;
  if (param_11 <= uVar15) goto LAB_145549c27;
  if (param_11 - uVar15 < 2) {
LAB_145549c1a:
    local_138[0] = local_138[0] + param_10[uVar8];
  }
  else {
    uVar7 = ((param_11 - uVar15) - 2 >> 1) + 1;
    uVar14 = (ulonglong)uVar7;
    do {
      iVar20 = iVar20 + param_10[uVar8];
      iVar25 = iVar25 + param_10[uVar8 + 1];
      uVar8 = uVar8 + 2;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    if (uVar15 + uVar7 * 2 < param_11) goto LAB_145549c1a;
  }
  local_138[0] = local_138[0] + iVar25 + iVar20;
LAB_145549c27:
  uVar14 = CONCAT44(local_138[0],local_138[0]);
  uVar8 = (ulonglong)local_138[0] * 0x20 + 0xf;
  if (uVar8 <= (ulonglong)local_138[0] * 0x20) {
    uVar8 = 0xffffffffffffff0;
  }
  uVar8 = uVar8 & 0xfffffffffffffff0;
  auStack_180[0] = 0x145549c55;
  lVar2 = -uVar8;
  uVar15 = 0;
  if (DAT_14c707900 < 2) {
    plVar13 = (longlong *)local_118;
    do {
      uVar8 = (ulonglong)(uVar15 * local_138[0]);
      uVar15 = uVar15 + 1;
      *plVar13 = (longlong)local_138 + uVar8 * 4 + lVar2;
      plVar13 = plVar13 + 1;
    } while (uVar15 < 8);
  }
  else {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar14;
    auVar16 = pmulld(_DAT_1499314d0,auVar16);
    auVar16 = pmovzxdq(in_XMM2,auVar16);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar14;
    iVar20 = (int)DAT_1499314d0;
    auVar21._0_4_ = iVar20 + 2;
    iVar25 = DAT_1499314d0._4_4_;
    auVar21._4_4_ = iVar25 + 2;
    iVar26 = DAT_1499314d0._8_4_;
    auVar21._8_4_ = iVar26 + 2;
    iVar27 = DAT_1499314d0._12_4_;
    auVar21._12_4_ = iVar27 + 2;
    local_118._0_8_ = (longlong)local_138 + auVar16._0_8_ * 4 + lVar2;
    local_118._8_8_ = (longlong)local_138 + auVar16._8_8_ * 4 + lVar2;
    auVar16 = pmulld(auVar21,auVar17);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar14;
    auVar16 = pmovzxdq(local_118,auVar16);
    auVar22._0_4_ = iVar20 + 4;
    auVar22._4_4_ = iVar25 + 4;
    auVar22._8_4_ = iVar26 + 4;
    auVar22._12_4_ = iVar27 + 4;
    local_108._0_8_ = (longlong)local_138 + auVar16._0_8_ * 4 + lVar2;
    local_108._8_8_ = (longlong)local_138 + auVar16._8_8_ * 4 + lVar2;
    auVar16 = pmulld(auVar22,auVar18);
    auVar16 = pmovzxdq(local_108,auVar16);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar14;
    auVar23._0_4_ = iVar20 + 6;
    auVar23._4_4_ = iVar25 + 6;
    auVar23._8_4_ = iVar26 + 6;
    auVar23._12_4_ = iVar27 + 6;
    local_f8._0_8_ = (longlong)local_138 + auVar16._0_8_ * 4 + lVar2;
    local_f8._8_8_ = (longlong)local_138 + auVar16._8_8_ * 4 + lVar2;
    auVar16 = pmulld(auVar23,auVar19);
    auVar16 = pmovzxdq(local_f8,auVar16);
    local_e8 = (longlong)local_138 + auVar16._0_8_ * 4 + lVar2;
    lStack_e0 = (longlong)local_138 + auVar16._8_8_ * 4 + lVar2;
  }
  uVar14 = 0;
  uVar15 = local_138[0];
  if (param_12 != 0) {
    do {
      uVar7 = param_12 - (int)uVar14;
      if (8 < uVar7) {
        uVar7 = 8;
      }
      _Src = (void *)(param_1 + uVar14 * 8);
      if (param_11 == 1) {
        *(uint *)((longlong)auStack_150 + lVar2 + 0x10) = uVar7;
        *(uint *)((longlong)auStack_150 + lVar2 + 8) = *param_10;
        *(ulonglong *)((longlong)auStack_150 + lVar2) = param_5 + uVar14 * 8;
        *(ulonglong *)((longlong)&lStack_158 + lVar2) = param_4 + uVar14 * 8;
        *(undefined8 *)((longlong)auStack_180 + lVar2) = 0x145549dba;
        FUN_145549750(_Src,local_118,param_2 + uVar14 * 8,param_3 + uVar14 * 8);
      }
      else {
        *(undefined8 *)((longlong)auStack_180 + lVar2) = 0x145549dd6;
        memcpy(local_98,_Src,(ulonglong)(uVar7 * 8));
        uVar11 = 0;
        local_d8[0] = local_118._0_8_;
        local_d8[1] = local_118._8_8_;
        local_c8[0] = local_108._0_8_;
        local_c8[1] = local_108._8_8_;
        local_a8._8_8_ = lStack_e0;
        local_a8._0_8_ = local_e8;
        local_c8[2] = local_f8._0_8_;
        local_c8[3] = local_f8._8_8_;
        if (param_11 != 0) {
          local_130 = param_5 + uVar14 * 8;
          local_128 = param_3 + uVar14 * 8;
          puVar12 = param_10;
          do {
            lVar10 = local_128;
            lVar9 = local_130;
            uVar15 = *puVar12;
            *(uint *)((longlong)auStack_150 + lVar2 + 0x10) = uVar7;
            *(uint *)((longlong)auStack_150 + lVar2 + 8) = uVar15;
            *(longlong *)((longlong)auStack_150 + lVar2) = lVar9;
            lVar9 = uVar11 * param_12 + uVar14;
            *(longlong *)((longlong)&lStack_158 + lVar2) = param_4 + lVar9 * 8;
            *(undefined8 *)((longlong)auStack_180 + lVar2) = 0x145549e7f;
            FUN_145549750(local_98,local_d8,param_2 + lVar9 * 8,lVar10);
            lVar28 = (ulonglong)uVar15 * 4;
            lVar29 = (ulonglong)uVar15 * 4;
            lVar10 = 2;
            lVar9 = 0;
            do {
              lVar3 = *(longlong *)((longlong)local_d8 + lVar9);
              lVar4 = *(longlong *)((longlong)local_d8 + lVar9 + 8);
              *(longlong *)((longlong)local_98 + lVar9) =
                   lVar28 + *(longlong *)((longlong)local_98 + lVar9);
              *(longlong *)((longlong)local_98 + lVar9 + 8) =
                   lVar29 + *(longlong *)((longlong)local_98 + lVar9 + 8);
              lVar5 = *(longlong *)((longlong)local_98 + lVar9 + 0x10);
              lVar6 = *(longlong *)((longlong)local_98 + lVar9 + 0x18);
              *(longlong *)((longlong)local_d8 + lVar9) = lVar28 + lVar3;
              *(longlong *)((longlong)local_d8 + lVar9 + 8) = lVar29 + lVar4;
              lVar3 = *(longlong *)((longlong)local_c8 + lVar9);
              lVar4 = *(longlong *)((longlong)local_c8 + lVar9 + 8);
              *(longlong *)((longlong)local_98 + lVar9 + 0x10) = lVar28 + lVar5;
              *(longlong *)((longlong)local_98 + lVar9 + 0x18) = lVar29 + lVar6;
              auVar24._0_8_ = lVar28 + lVar3;
              auVar24._8_8_ = lVar29 + lVar4;
              *(undefined1 (*) [16])((longlong)local_c8 + lVar9) = auVar24;
              lVar10 = lVar10 + -1;
              lVar9 = lVar9 + 0x20;
            } while (lVar10 != 0);
            uVar11 = uVar11 + 1;
            puVar12 = puVar12 + 1;
            uVar15 = local_138[0];
          } while (uVar11 < param_11);
        }
      }
      *(undefined4 *)((longlong)auStack_150 + lVar2 + 0x10) = param_13;
      *(uint *)((longlong)auStack_150 + lVar2 + 8) = uVar7;
      *(uint *)((longlong)auStack_150 + lVar2) = uVar15;
      *(ulonglong *)((longlong)&lStack_158 + lVar2) = param_9 + uVar14 * 8;
      *(undefined8 *)((longlong)auStack_180 + lVar2) = 0x145549f62;
      uVar8 = FUN_1455489e0(local_118,param_6,param_7 + uVar14 * 8,param_8 + uVar14 * 8);
      uVar7 = (int)uVar14 + 8;
      uVar14 = (ulonglong)uVar7;
    } while (uVar7 < param_12);
  }
  return uVar8;
}



// FUNCTION 145549f90 FUN_145549f90 body=173 status=ok
// SIG undefined FUN_145549f90(void)

void FUN_145549f90(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  ulonglong uVar35;
  
  uVar35 = 0;
  if ((param_4 & 0xfffffff0) != 0) {
    do {
      pfVar1 = (float *)(param_1 + uVar35 * 4);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar35 * 4);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_2 + 0x10 + uVar35 * 4);
      fVar10 = *pfVar3;
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      fVar13 = pfVar3[3];
      pfVar3 = (float *)(param_2 + 0x20 + uVar35 * 4);
      fVar14 = *pfVar3;
      fVar15 = pfVar3[1];
      fVar16 = pfVar3[2];
      fVar17 = pfVar3[3];
      pfVar3 = (float *)(param_2 + 0x30 + uVar35 * 4);
      fVar18 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar20 = pfVar3[2];
      fVar21 = pfVar3[3];
      pfVar3 = (float *)(param_1 + 0x10 + uVar35 * 4);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[1];
      fVar24 = pfVar3[2];
      fVar25 = pfVar3[3];
      pfVar3 = (float *)(param_1 + 0x20 + uVar35 * 4);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      pfVar3 = (float *)(param_1 + 0x30 + uVar35 * 4);
      fVar30 = *pfVar3;
      fVar31 = pfVar3[1];
      fVar32 = pfVar3[2];
      fVar33 = pfVar3[3];
      pfVar3 = (float *)(param_1 + uVar35 * 4);
      *pfVar3 = *pfVar2 * param_3 + *pfVar1;
      pfVar3[1] = fVar7 * param_3 + fVar4;
      pfVar3[2] = fVar8 * param_3 + fVar5;
      pfVar3[3] = fVar9 * param_3 + fVar6;
      pfVar1 = (float *)(param_1 + 0x10 + uVar35 * 4);
      *pfVar1 = fVar10 * param_3 + fVar22;
      pfVar1[1] = fVar11 * param_3 + fVar23;
      pfVar1[2] = fVar12 * param_3 + fVar24;
      pfVar1[3] = fVar13 * param_3 + fVar25;
      pfVar1 = (float *)(param_1 + 0x20 + uVar35 * 4);
      *pfVar1 = fVar14 * param_3 + fVar26;
      pfVar1[1] = fVar15 * param_3 + fVar27;
      pfVar1[2] = fVar16 * param_3 + fVar28;
      pfVar1[3] = fVar17 * param_3 + fVar29;
      pfVar1 = (float *)(param_1 + 0x30 + uVar35 * 4);
      *pfVar1 = fVar18 * param_3 + fVar30;
      pfVar1[1] = fVar19 * param_3 + fVar31;
      pfVar1[2] = fVar20 * param_3 + fVar32;
      pfVar1[3] = fVar21 * param_3 + fVar33;
      uVar34 = (int)uVar35 + 0x10;
      uVar35 = (ulonglong)uVar34;
    } while (uVar34 < (param_4 & 0xfffffff0));
  }
  uVar34 = (uint)uVar35;
  while (uVar34 < param_4) {
    pfVar1 = (float *)(param_2 + uVar35 * 4);
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
    fVar6 = pfVar1[3];
    pfVar2 = (float *)(param_1 + uVar35 * 4);
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
    fVar9 = pfVar2[3];
    pfVar3 = (float *)(param_1 + uVar35 * 4);
    *pfVar3 = *pfVar1 * param_3 + *pfVar2;
    pfVar3[1] = fVar4 * param_3 + fVar7;
    pfVar3[2] = fVar5 * param_3 + fVar8;
    pfVar3[3] = fVar6 * param_3 + fVar9;
    uVar34 = (int)uVar35 + 4;
    uVar35 = (ulonglong)uVar34;
  }
  return;
}



// FUNCTION 14554a040 FUN_14554a040 body=351 status=ok
// SIG undefined FUN_14554a040(void)

void FUN_14554a040(longlong param_1,longlong param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  uVar22 = 0;
  fVar31 = param_4 * 16.0;
  fVar44 = param_4 * 4.0;
  fVar52 = param_4 * 13.0 + param_3;
  fVar53 = param_4 * 14.0 + param_3;
  fVar54 = param_4 * 15.0 + param_3;
  fVar55 = param_4 * 16.0 + param_3;
  fVar40 = param_4 * 1.0 + param_3;
  fVar41 = param_4 * 2.0 + param_3;
  fVar42 = param_4 * 3.0 + param_3;
  fVar43 = param_4 * 4.0 + param_3;
  fVar45 = param_4 * 5.0 + param_3;
  fVar46 = param_4 * 6.0 + param_3;
  fVar47 = param_4 * 7.0 + param_3;
  fVar48 = param_4 * 8.0 + param_3;
  fVar49 = param_4 * 9.0 + param_3;
  fVar50 = param_4 * 10.0 + param_3;
  fVar51 = param_4 * 11.0 + param_3;
  param_3 = param_4 * 12.0 + param_3;
  if ((param_5 & 0xfffffff0) != 0) {
    do {
      pfVar1 = (float *)(param_1 + uVar22 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar22 * 4);
      pfVar3 = (float *)(param_2 + 0x10 + uVar22 * 4);
      pfVar4 = (float *)(param_2 + 0x20 + uVar22 * 4);
      pfVar5 = (float *)(param_2 + 0x30 + uVar22 * 4);
      fVar36 = *pfVar2 * fVar40;
      fVar37 = pfVar2[1] * fVar41;
      fVar38 = pfVar2[2] * fVar42;
      fVar39 = pfVar2[3] * fVar43;
      fVar40 = fVar40 + fVar31;
      fVar41 = fVar41 + fVar31;
      fVar42 = fVar42 + fVar31;
      fVar43 = fVar43 + fVar31;
      fVar32 = *pfVar3 * fVar45;
      fVar33 = pfVar3[1] * fVar46;
      fVar34 = pfVar3[2] * fVar47;
      fVar35 = pfVar3[3] * fVar48;
      fVar45 = fVar45 + fVar31;
      fVar46 = fVar46 + fVar31;
      fVar47 = fVar47 + fVar31;
      fVar48 = fVar48 + fVar31;
      fVar27 = *pfVar4 * fVar49;
      fVar28 = pfVar4[1] * fVar50;
      fVar29 = pfVar4[2] * fVar51;
      fVar30 = pfVar4[3] * param_3;
      fVar49 = fVar49 + fVar31;
      fVar50 = fVar50 + fVar31;
      fVar51 = fVar51 + fVar31;
      param_3 = param_3 + fVar31;
      fVar23 = *pfVar5 * fVar52;
      fVar24 = pfVar5[1] * fVar53;
      fVar25 = pfVar5[2] * fVar54;
      fVar26 = pfVar5[3] * fVar55;
      pfVar2 = (float *)(param_1 + 0x10 + uVar22 * 4);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      fVar52 = fVar52 + fVar31;
      fVar53 = fVar53 + fVar31;
      fVar54 = fVar54 + fVar31;
      fVar55 = fVar55 + fVar31;
      pfVar2 = (float *)(param_1 + 0x20 + uVar22 * 4);
      fVar13 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x30 + uVar22 * 4);
      fVar17 = *pfVar2;
      fVar18 = pfVar2[1];
      fVar19 = pfVar2[2];
      fVar20 = pfVar2[3];
      pfVar2 = (float *)(param_1 + uVar22 * 4);
      *pfVar2 = fVar36 + *pfVar1;
      pfVar2[1] = fVar37 + fVar6;
      pfVar2[2] = fVar38 + fVar7;
      pfVar2[3] = fVar39 + fVar8;
      pfVar1 = (float *)(param_1 + 0x10 + uVar22 * 4);
      *pfVar1 = fVar32 + fVar9;
      pfVar1[1] = fVar33 + fVar10;
      pfVar1[2] = fVar34 + fVar11;
      pfVar1[3] = fVar35 + fVar12;
      pfVar1 = (float *)(param_1 + 0x20 + uVar22 * 4);
      *pfVar1 = fVar27 + fVar13;
      pfVar1[1] = fVar28 + fVar14;
      pfVar1[2] = fVar29 + fVar15;
      pfVar1[3] = fVar30 + fVar16;
      pfVar1 = (float *)(param_1 + 0x30 + uVar22 * 4);
      *pfVar1 = fVar23 + fVar17;
      pfVar1[1] = fVar24 + fVar18;
      pfVar1[2] = fVar25 + fVar19;
      pfVar1[3] = fVar26 + fVar20;
      uVar21 = (int)uVar22 + 0x10;
      uVar22 = (ulonglong)uVar21;
    } while (uVar21 < (param_5 & 0xfffffff0));
  }
  uVar21 = (uint)uVar22;
  while (uVar21 < param_5) {
    pfVar1 = (float *)(param_2 + uVar22 * 4);
    pfVar2 = (float *)(param_1 + uVar22 * 4);
    fVar31 = pfVar2[1];
    fVar45 = pfVar2[2];
    fVar46 = pfVar2[3];
    fVar47 = *pfVar1 * fVar40;
    fVar48 = pfVar1[1] * fVar41;
    fVar49 = pfVar1[2] * fVar42;
    fVar50 = pfVar1[3] * fVar43;
    fVar40 = fVar40 + fVar44;
    fVar41 = fVar41 + fVar44;
    fVar42 = fVar42 + fVar44;
    fVar43 = fVar43 + fVar44;
    pfVar1 = (float *)(param_1 + uVar22 * 4);
    *pfVar1 = fVar47 + *pfVar2;
    pfVar1[1] = fVar48 + fVar31;
    pfVar1[2] = fVar49 + fVar45;
    pfVar1[3] = fVar50 + fVar46;
    uVar21 = (int)uVar22 + 4;
    uVar22 = (ulonglong)uVar21;
  }
  return;
}



// FUNCTION 14554a1a0 FUN_14554a1a0 body=2762 status=ok
// SIG undefined FUN_14554a1a0(void)

void FUN_14554a1a0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  longlong lVar38;
  longlong lVar39;
  float *pfVar40;
  longlong lVar41;
  longlong lVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  ulonglong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fStack_180;
  float fStack_17c;
  
  lVar38 = *param_2;
  lVar39 = param_2[1];
  pfVar40 = (float *)*param_3;
  lVar41 = *param_1;
  lVar42 = param_1[1];
  pfVar43 = (float *)param_3[1];
  fVar1 = pfVar43[3];
  fVar66 = pfVar43[4];
  fVar2 = pfVar43[1];
  fVar64 = -fVar1;
  fVar83 = pfVar40[4];
  fVar3 = *pfVar43;
  fVar4 = *pfVar40;
  fVar52 = -fVar83;
  fVar5 = pfVar40[3];
  fVar76 = -fVar5;
  fVar53 = -fVar66;
  fVar63 = fVar2 - fVar3 * fVar1;
  fVar54 = pfVar40[1] - fVar5 * fVar4;
  fVar55 = -(fVar2 * fVar66);
  fVar6 = pfVar43[2];
  fVar77 = fVar66 * fVar1;
  fVar56 = fVar77 * fVar3;
  fVar79 = fVar1 * fVar1;
  fVar7 = pfVar40[2];
  fVar65 = fVar79 * fVar3;
  fVar66 = fVar3 * fVar66;
  fVar57 = -(fVar79 * fVar1);
  fVar8 = pfVar40[1];
  fVar67 = -(fVar2 * fVar1);
  fVar87 = fVar5 * fVar5;
  fVar9 = pfVar43[2];
  fVar68 = -(fVar83 * pfVar40[1]);
  fVar90 = fVar83 * fVar4;
  fVar69 = -(fVar87 * fVar5);
  fVar83 = fVar83 * fVar5;
  fVar100 = fVar87 * fVar4;
  fVar73 = fVar83 * fVar4;
  fVar95 = -(pfVar40[1] * pfVar40[3]);
  fVar10 = pfVar40[2];
  fVar11 = pfVar43[2];
  fVar12 = pfVar43[3];
  fVar101 = pfVar43[1] * fVar77;
  fVar13 = pfVar43[4];
  fVar74 = fVar79 - fVar13;
  fVar14 = pfVar40[2];
  fVar15 = pfVar40[4];
  fVar70 = fVar87 - fVar15;
  fVar16 = pfVar40[3];
  fVar75 = -(fVar77 * fVar12);
  fVar71 = fVar13 * fVar13;
  fVar17 = pfVar43[2];
  fVar18 = pfVar43[4];
  fVar78 = -(fVar83 * pfVar40[3]);
  fVar102 = fVar75 * fVar3;
  fVar19 = pfVar40[4];
  fVar80 = fVar19 * fVar19;
  fVar20 = pfVar43[2];
  fVar21 = pfVar40[3];
  fVar22 = *pfVar43;
  fVar89 = fVar78 * *pfVar40;
  fVar23 = *pfVar40;
  fVar88 = pfVar40[1] * fVar83;
  fVar24 = pfVar43[1];
  fVar25 = *pfVar40;
  fVar26 = *pfVar43;
  fVar27 = *pfVar40;
  fVar28 = pfVar40[4];
  fVar29 = pfVar43[2];
  fVar30 = pfVar40[2];
  fVar31 = pfVar43[1];
  fVar32 = pfVar40[2];
  fVar33 = pfVar40[1];
  fVar34 = pfVar40[1];
  fVar35 = pfVar40[2];
  fVar36 = pfVar43[2];
  fVar37 = pfVar40[2];
  fVar84 = fVar75 + fVar71;
  fVar58 = (pfVar43[3] + pfVar43[3]) * pfVar43[4] + fVar57;
  pfVar44 = (float *)*param_4;
  fVar85 = pfVar44[1];
  fVar86 = pfVar44[3];
  pfVar45 = (float *)param_4[1];
  fVar81 = pfVar45[1];
  fVar82 = pfVar45[3];
  fVar72 = (pfVar40[3] + pfVar40[3]) * pfVar40[4] + fVar69;
  uVar51 = 0;
  fVar91 = fVar85 * fVar52 + fVar86 * fVar37;
  fVar92 = fVar85 * fVar52 + fVar86 * fVar37;
  fVar93 = fVar81 * fVar53 + fVar82 * fVar36;
  fVar94 = fVar81 * fVar53 + fVar82 * fVar36;
  fVar96 = fVar76 * fVar85 + pfVar40[1] * fVar86 + *pfVar44 * fVar52 + pfVar44[2] * fVar37;
  fVar97 = fVar76 * fVar85 + pfVar40[1] * fVar86 + *pfVar44 * fVar52 + pfVar44[2] * fVar37;
  fVar98 = fVar64 * fVar81 + pfVar43[1] * fVar82 + *pfVar45 * fVar53 + pfVar45[2] * fVar36;
  fVar99 = fVar64 * fVar81 + pfVar43[1] * fVar82 + *pfVar45 * fVar53 + pfVar45[2] * fVar36;
  fVar81 = fVar72;
  fVar82 = fVar80 + fVar78;
  fVar52 = fVar58;
  fVar53 = fVar84;
  fVar85 = fVar58;
  fVar86 = fVar84;
  if (param_5 != 0) {
    do {
      pfVar40 = (float *)(lVar41 + uVar51 * 4);
      fVar46 = *pfVar40;
      fVar47 = pfVar40[1];
      fVar85 = pfVar40[2];
      fVar86 = pfVar40[3];
      pfVar40 = (float *)(lVar42 + uVar51 * 4);
      fVar48 = *pfVar40;
      fVar49 = pfVar40[1];
      fStack_180 = pfVar40[2];
      fStack_17c = pfVar40[3];
      fVar61 = fVar96 * 1.0;
      fVar62 = fVar98 * 1.0;
      fVar59 = fVar91 * 0.0;
      fVar60 = fVar93 * 0.0;
      fVar81 = fVar47 * fVar54 + fVar46 * (((fVar100 + fVar10) - fVar90) + fVar95) + fVar85 * fVar4
               + fVar86 * 0.0 + fVar96 * fVar70 + fVar91 * fVar76;
      fVar82 = fVar47 * (((fVar95 + fVar100) - fVar90) + fVar14) +
               fVar46 * (fVar73 + fVar69 * fVar4 + fVar8 * fVar87 +
                        fVar68 + fVar73 + -(fVar7 * fVar5)) + fVar85 * fVar54 + fVar86 * fVar4 +
               fVar97 * (fVar15 - fVar70) * fVar16 + fVar92 * fVar70;
      fVar52 = fVar49 * fVar63 + fVar48 * (((fVar9 + fVar65) - fVar66) + fVar67) +
               fStack_180 * fVar3 + fStack_17c * 0.0 + fVar98 * fVar74 + fVar93 * fVar64;
      fVar53 = fVar49 * (((fVar65 + fVar67) - fVar66) + fVar11) +
               fVar48 * (-(fVar6 * fVar1) + fVar56 + fVar55 +
                        fVar57 * fVar3 + fVar56 + fVar2 * fVar79) + fStack_180 * fVar63 +
               fStack_17c * fVar3 + fVar99 * (fVar13 - fVar74) * fVar12 + fVar94 * fVar74;
      fVar96 = fVar47 * (fVar73 + fVar8 * fVar87 + fVar69 * fVar4 +
                        fVar68 + fVar73 + -(fVar7 * fVar5)) +
               fVar46 * (((fVar76 * fVar69 + -(fVar19 * fVar87)) * fVar25 + fVar34 * fVar69 +
                          fVar87 * fVar35 + fVar89 + fVar89 + fVar88 + fVar80 * fVar27 + fVar88) -
                        fVar28 * fVar30) + fVar85 * (fVar95 + (fVar37 - fVar90) + fVar100) +
               fVar86 * fVar54 +
               fVar96 * (fVar78 + fVar80 + fVar78 + fVar76 * fVar69 + -(fVar19 * fVar87)) +
               fVar91 * fVar72;
      fVar91 = fVar47 * ((fVar89 + fVar88 + fVar80 * fVar27) - fVar28 * fVar30) +
               fVar46 * ((fVar76 * fVar78 + -(fVar83 * fVar19) + -(fVar80 * fVar21)) * fVar23 +
                         (fVar80 + fVar78) * fVar33 + fVar83 * fVar32) + fVar85 * (fVar68 + fVar73)
               + fVar86 * (fVar37 - fVar90) +
               fVar97 * (fVar76 * fVar78 + -(fVar83 * fVar19) + -(fVar80 * fVar21)) +
               fVar92 * (fVar80 + fVar78);
      fVar98 = fVar49 * (fVar55 + fVar56 + -(fVar6 * fVar1) +
                        fVar2 * fVar79 + fVar56 + fVar57 * fVar3) +
               fVar48 * (((fVar64 * fVar57 + -(fVar79 * fVar13)) * fVar22 + fVar31 * fVar57 +
                          fVar20 * fVar79 + fVar102 + fVar71 * fVar3 + fVar101 + fVar102 + fVar101)
                        - fVar17 * fVar18) + fStack_180 * (fVar67 + (fVar36 - fVar66) + fVar65) +
               fStack_17c * fVar63 +
               fVar98 * (fVar75 + fVar71 + fVar75 + fVar64 * fVar57 + -(fVar79 * fVar13)) +
               fVar93 * fVar58;
      fVar93 = fVar49 * ((fVar102 + fVar101 + fVar71 * fVar3) - fVar17 * fVar18) +
               fVar48 * ((-(fVar77 * fVar13) + fVar64 * fVar75 + -(fVar71 * fVar12)) * fVar26 +
                         (fVar75 + fVar71) * fVar24 + fVar29 * fVar77) +
               fStack_180 * (fVar56 + fVar55) + fStack_17c * (fVar36 - fVar66) +
               fVar99 * (-(fVar77 * fVar13) + fVar64 * fVar75 + -(fVar71 * fVar12)) +
               fVar94 * fVar84;
      pfVar40 = (float *)(lVar38 + uVar51 * 4);
      *pfVar40 = fVar46 * fVar4 + fVar47 * 0.0 + fVar61 + fVar59;
      pfVar40[1] = fVar46 * fVar54 + fVar47 * fVar4 + fVar97 * -fVar5 + fVar92 * 1.0;
      pfVar40[2] = fVar81;
      pfVar40[3] = fVar82;
      pfVar40 = (float *)(lVar39 + uVar51 * 4);
      *pfVar40 = fVar48 * fVar3 + fVar49 * 0.0 + fVar62 + fVar60;
      pfVar40[1] = fVar48 * fVar63 + fVar49 * fVar3 + fVar99 * fVar64 + fVar94 * 1.0;
      pfVar40[2] = fVar52;
      pfVar40[3] = fVar53;
      uVar50 = (int)uVar51 + 4;
      uVar51 = (ulonglong)uVar50;
      fVar92 = fVar91;
      fVar94 = fVar93;
      fVar97 = fVar96;
      fVar99 = fVar98;
    } while (uVar50 < param_5);
  }
  pfVar40 = (float *)*param_4;
  *pfVar40 = fVar81;
  pfVar40[1] = fVar82;
  pfVar40[2] = fVar85;
  pfVar40[3] = fVar86;
  pfVar40 = (float *)param_4[1];
  *pfVar40 = fVar52;
  pfVar40[1] = fVar53;
  pfVar40[2] = fStack_180;
  pfVar40[3] = fStack_17c;
  return;
}



// FUNCTION 14554ac70 FUN_14554ac70 body=800 status=ok
// SIG undefined FUN_14554ac70(void)

void FUN_14554ac70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  pfVar3 = (float *)*param_3;
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  fVar6 = pfVar3[2];
  fVar30 = -pfVar3[4];
  fVar31 = -pfVar3[3];
  fVar25 = fVar30 * fVar5;
  fVar26 = fVar31 * fVar4 + fVar5;
  fVar27 = fVar30 * fVar31;
  fVar20 = fVar26 * fVar31 + fVar6 + fVar30 * fVar4;
  fVar11 = fVar31 * fVar5 + fVar6;
  fVar21 = fVar11 * fVar31 + fVar25;
  fVar22 = fVar31 * fVar6 * fVar31;
  pfVar3 = (float *)*param_4;
  fVar12 = fVar31 * fVar31;
  uVar10 = 0;
  fVar23 = *pfVar3;
  fVar24 = pfVar3[1];
  fVar28 = pfVar3[2];
  fVar16 = pfVar3[3];
  fVar18 = fVar16;
  fVar29 = fVar28;
  if (param_5 != 0) {
    do {
      pfVar3 = (float *)(lVar1 + uVar10 * 4);
      fVar7 = *pfVar3;
      fVar8 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar16 = pfVar3[3];
      fVar15 = fVar30 * fVar23;
      fVar17 = fVar27 * fVar23;
      fVar19 = ((fVar30 + fVar30) * fVar30 + fVar27 * fVar31) * fVar31 * fVar23;
      fVar13 = fVar31 * fVar24;
      fVar14 = (fVar12 + fVar30) * fVar24;
      fVar23 = (fVar22 + fVar30 * fVar6) * fVar29 + fVar21 * fVar18 + fVar4 * fVar28 + fVar28 * 0.0
               + fVar8 * fVar26 + fVar7 * fVar20 + (fVar30 + fVar30 + fVar12) * fVar31 * fVar24 +
               (fVar27 * fVar31 + fVar30 * fVar30) * fVar23;
      fVar24 = ((fVar6 + fVar6) * fVar30 + fVar22) * fVar31 * fVar29 +
               ((fVar21 + fVar25) * fVar31 + fVar30 * fVar6) * fVar18 + fVar4 * fVar16 +
               fVar26 * fVar28 + fVar8 * fVar20 +
               fVar7 * (fVar20 * fVar31 + fVar27 * fVar4 + fVar25) +
               ((fVar30 * 3.0 + fVar12) * fVar31 * fVar31 + fVar30 * fVar30) * fVar24 + fVar19;
      pfVar3 = (float *)(lVar2 + uVar10 * 4);
      *pfVar3 = fVar6 * fVar29 + fVar5 * fVar18 + fVar4 * fVar7 + fVar28 * 0.0 + fVar8 * 0.0 +
                fVar7 * 0.0 + fVar13 + fVar15;
      pfVar3[1] = fVar31 * fVar6 * fVar29 + fVar11 * fVar18 + fVar4 * fVar8 + fVar28 * 0.0 +
                  fVar8 * 0.0 + fVar7 * fVar26 + fVar14 + fVar17;
      pfVar3[2] = fVar23;
      pfVar3[3] = fVar24;
      uVar9 = (int)uVar10 + 4;
      uVar10 = (ulonglong)uVar9;
      fVar18 = fVar16;
      fVar29 = fVar28;
    } while (uVar9 < param_5);
  }
  pfVar3 = (float *)*param_4;
  *pfVar3 = fVar23;
  pfVar3[1] = fVar24;
  pfVar3[2] = fVar28;
  pfVar3[3] = fVar16;
  return;
}



// FUNCTION 14554af90 FUN_14554af90 body=961 status=ok
// SIG undefined FUN_14554af90(void)

void FUN_14554af90(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  
  lVar23 = *param_1;
  lVar24 = param_1[1];
  pfVar1 = (float *)param_3[3];
  lVar25 = param_1[2];
  lVar26 = param_1[3];
  pfVar2 = (float *)*param_3;
  pfVar3 = (float *)param_3[2];
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  lVar27 = *param_2;
  lVar28 = param_2[1];
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar14 = pfVar2[2];
  lVar29 = param_2[2];
  lVar30 = param_2[3];
  pfVar4 = (float *)param_3[1];
  fVar15 = *pfVar3;
  fVar16 = pfVar3[1];
  fVar17 = pfVar3[2];
  fVar18 = *pfVar4;
  fVar19 = pfVar4[1];
  fVar20 = pfVar4[2];
  pfVar5 = (float *)*param_4;
  pfVar6 = (float *)param_4[1];
  pfVar7 = (float *)param_4[2];
  fVar57 = -pfVar2[3];
  fVar58 = -pfVar4[3];
  fVar59 = -pfVar3[3];
  fVar60 = -pfVar1[3];
  pfVar8 = (float *)param_4[3];
  fVar65 = -pfVar2[4];
  fVar66 = -pfVar4[4];
  fVar67 = -pfVar3[4];
  fVar68 = -pfVar1[4];
  fVar69 = pfVar5[1] * fVar65 + pfVar5[3] * fVar14;
  fVar70 = pfVar6[1] * fVar66 + pfVar6[3] * fVar20;
  fVar71 = pfVar7[1] * fVar67 + pfVar7[3] * fVar17;
  fVar72 = pfVar8[1] * fVar68 + pfVar8[3] * fVar11;
  fVar53 = *pfVar5 * fVar65 + pfVar5[2] * fVar14 + pfVar5[3] * fVar13 + pfVar5[1] * fVar57;
  fVar54 = *pfVar6 * fVar66 + pfVar6[2] * fVar20 + pfVar6[3] * fVar19 + pfVar6[1] * fVar58;
  fVar55 = *pfVar7 * fVar67 + pfVar7[2] * fVar17 + pfVar7[3] * fVar16 + pfVar7[1] * fVar59;
  fVar56 = *pfVar8 * fVar68 + pfVar8[2] * fVar11 + pfVar8[3] * fVar10 + pfVar8[1] * fVar60;
  uVar32 = 0;
  fVar41 = fVar12;
  fVar42 = fVar18;
  fVar43 = fVar15;
  fVar44 = fVar9;
  fVar45 = fVar12;
  fVar46 = fVar18;
  fVar47 = fVar15;
  fVar48 = fVar9;
  fVar49 = fVar12;
  fVar50 = fVar18;
  fVar51 = fVar15;
  fVar52 = fVar9;
  fVar61 = fVar12;
  fVar62 = fVar18;
  fVar63 = fVar15;
  fVar64 = fVar9;
  if (param_5 != 0) {
    do {
      pfVar1 = (float *)(lVar23 + uVar32 * 4);
      fVar41 = *pfVar1;
      fVar42 = pfVar1[1];
      fVar61 = pfVar1[2];
      fVar45 = pfVar1[3];
      pfVar1 = (float *)(lVar25 + uVar32 * 4);
      fVar43 = *pfVar1;
      fVar44 = pfVar1[1];
      fVar63 = pfVar1[2];
      fVar47 = pfVar1[3];
      pfVar1 = (float *)(lVar24 + uVar32 * 4);
      fVar50 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar62 = pfVar1[2];
      fVar46 = pfVar1[3];
      pfVar1 = (float *)(lVar26 + uVar32 * 4);
      fVar52 = *pfVar1;
      fVar22 = pfVar1[1];
      fVar64 = pfVar1[2];
      fVar48 = pfVar1[3];
      fVar33 = fVar12 * fVar41 + fVar53;
      fVar34 = fVar18 * fVar50 + fVar54;
      fVar35 = fVar15 * fVar43 + fVar55;
      fVar36 = fVar9 * fVar52 + fVar56;
      fVar37 = fVar13 * fVar41 + fVar69 + fVar12 * fVar42 + fVar33 * fVar57;
      fVar38 = fVar19 * fVar50 + fVar70 + fVar18 * fVar21 + fVar34 * fVar58;
      fVar39 = fVar16 * fVar43 + fVar71 + fVar15 * fVar44 + fVar35 * fVar59;
      fVar40 = fVar10 * fVar52 + fVar72 + fVar9 * fVar22 + fVar36 * fVar60;
      fVar49 = fVar14 * fVar41 + fVar13 * fVar42 + fVar12 * fVar61 + fVar65 * fVar33 +
               fVar37 * fVar57;
      fVar50 = fVar20 * fVar50 + fVar19 * fVar21 + fVar18 * fVar62 + fVar66 * fVar34 +
               fVar38 * fVar58;
      fVar51 = fVar17 * fVar43 + fVar16 * fVar44 + fVar15 * fVar63 + fVar67 * fVar35 +
               fVar39 * fVar59;
      fVar52 = fVar11 * fVar52 + fVar10 * fVar22 + fVar9 * fVar64 + fVar68 * fVar36 +
               fVar40 * fVar60;
      fVar41 = fVar14 * fVar42 + fVar13 * fVar61 + fVar12 * fVar45 + fVar65 * fVar37 +
               fVar49 * fVar57;
      fVar42 = fVar20 * fVar21 + fVar19 * fVar62 + fVar18 * fVar46 + fVar66 * fVar38 +
               fVar50 * fVar58;
      fVar43 = fVar17 * fVar44 + fVar16 * fVar63 + fVar15 * fVar47 + fVar67 * fVar39 +
               fVar51 * fVar59;
      fVar44 = fVar11 * fVar22 + fVar10 * fVar64 + fVar9 * fVar48 + fVar68 * fVar40 +
               fVar52 * fVar60;
      fVar53 = fVar14 * fVar61 + fVar13 * fVar45 + fVar65 * fVar49 + fVar41 * fVar57;
      fVar54 = fVar20 * fVar62 + fVar19 * fVar46 + fVar66 * fVar50 + fVar42 * fVar58;
      fVar55 = fVar17 * fVar63 + fVar16 * fVar47 + fVar67 * fVar51 + fVar43 * fVar59;
      fVar56 = fVar11 * fVar64 + fVar10 * fVar48 + fVar68 * fVar52 + fVar44 * fVar60;
      fVar69 = fVar65 * fVar41 + fVar14 * fVar45;
      fVar70 = fVar66 * fVar42 + fVar20 * fVar46;
      fVar71 = fVar67 * fVar43 + fVar17 * fVar47;
      fVar72 = fVar68 * fVar44 + fVar11 * fVar48;
      pfVar1 = (float *)(lVar27 + uVar32 * 4);
      *pfVar1 = fVar33;
      pfVar1[1] = fVar37;
      pfVar1[2] = fVar49;
      pfVar1[3] = fVar41;
      pfVar1 = (float *)(lVar28 + uVar32 * 4);
      *pfVar1 = fVar34;
      pfVar1[1] = fVar38;
      pfVar1[2] = fVar50;
      pfVar1[3] = fVar42;
      pfVar1 = (float *)(lVar29 + uVar32 * 4);
      *pfVar1 = fVar35;
      pfVar1[1] = fVar39;
      pfVar1[2] = fVar51;
      pfVar1[3] = fVar43;
      pfVar1 = (float *)(lVar30 + uVar32 * 4);
      *pfVar1 = fVar36;
      pfVar1[1] = fVar40;
      pfVar1[2] = fVar52;
      pfVar1[3] = fVar44;
      uVar31 = (int)uVar32 + 4;
      uVar32 = (ulonglong)uVar31;
    } while (uVar31 < param_5);
  }
  pfVar1 = (float *)*param_4;
  *pfVar1 = fVar49;
  pfVar1[1] = fVar41;
  pfVar1[2] = fVar61;
  pfVar1[3] = fVar45;
  pfVar1 = (float *)param_4[1];
  *pfVar1 = fVar50;
  pfVar1[1] = fVar42;
  pfVar1[2] = fVar62;
  pfVar1[3] = fVar46;
  pfVar1 = (float *)param_4[2];
  *pfVar1 = fVar51;
  pfVar1[1] = fVar43;
  pfVar1[2] = fVar63;
  pfVar1[3] = fVar47;
  pfVar1 = (float *)param_4[3];
  *pfVar1 = fVar52;
  pfVar1[1] = fVar44;
  pfVar1[2] = fVar64;
  pfVar1[3] = fVar48;
  return;
}



// FUNCTION 14554b360 FUN_14554b360 body=903 status=ok
// SIG undefined FUN_14554b360(void)

void FUN_14554b360(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_138;
  float fStack_134;
  float fStack_130;
  
  lVar20 = *param_1;
  lVar21 = param_1[1];
  pfVar3 = (float *)param_3[2];
  uVar25 = 0;
  lVar1 = param_1[2];
  pfVar4 = (float *)param_3[1];
  lVar22 = *param_2;
  lVar23 = param_2[1];
  lVar2 = param_2[2];
  pfVar5 = (float *)*param_3;
  fVar8 = *pfVar5;
  fVar9 = pfVar5[1];
  fVar10 = pfVar5[2];
  fVar11 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar13 = pfVar4[2];
  fVar14 = *pfVar3;
  fVar15 = pfVar3[1];
  fVar16 = pfVar3[2];
  pfVar6 = (float *)*param_4;
  fVar47 = -pfVar5[3];
  fVar48 = -pfVar4[3];
  fVar49 = -pfVar3[3];
  pfVar7 = (float *)param_4[1];
  fVar50 = -pfVar5[4];
  fVar51 = -pfVar4[4];
  fVar52 = -pfVar3[4];
  pfVar3 = (float *)param_4[2];
  fVar35 = fVar10 * pfVar6[3] + fVar50 * pfVar6[1];
  fVar37 = fVar13 * pfVar7[3] + fVar51 * pfVar7[1];
  fVar39 = fVar16 * pfVar3[3] + fVar52 * pfVar3[1];
  fVar41 = pfVar6[2] * fVar10 + *pfVar6 * fVar50 + fVar9 * pfVar6[3] + fVar47 * pfVar6[1];
  fVar42 = pfVar7[2] * fVar13 + *pfVar7 * fVar51 + fVar12 * pfVar7[3] + fVar48 * pfVar7[1];
  fVar43 = pfVar3[2] * fVar16 + *pfVar3 * fVar52 + fVar15 * pfVar3[3] + fVar49 * pfVar3[1];
  if (param_5 == 0) {
    local_138 = (float)lVar20;
    fStack_134 = (float)((ulonglong)lVar20 >> 0x20);
    fStack_130 = (float)lVar21;
    fVar32 = local_138;
    fVar33 = fStack_134;
    fVar34 = fStack_130;
    fVar36 = local_138;
    fVar38 = fStack_134;
    fVar40 = fStack_130;
    fVar44 = local_138;
    fVar45 = fStack_134;
    fVar46 = fStack_130;
  }
  else {
    do {
      pfVar3 = (float *)(lVar20 + uVar25 * 4);
      fVar36 = *pfVar3;
      fVar17 = pfVar3[1];
      fVar44 = pfVar3[2];
      fVar32 = pfVar3[3];
      pfVar3 = (float *)(lVar1 + uVar25 * 4);
      fVar40 = *pfVar3;
      fVar18 = pfVar3[1];
      fVar46 = pfVar3[2];
      fVar34 = pfVar3[3];
      pfVar3 = (float *)(lVar21 + uVar25 * 4);
      fVar38 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar45 = pfVar3[2];
      fVar33 = pfVar3[3];
      fVar26 = fVar8 * fVar36 + fVar41;
      fVar27 = fVar11 * fVar38 + fVar42;
      fVar28 = fVar14 * fVar40 + fVar43;
      fVar29 = fVar9 * fVar36 + fVar35 + fVar8 * fVar17 + fVar26 * fVar47;
      fVar30 = fVar12 * fVar38 + fVar37 + fVar11 * fVar19 + fVar27 * fVar48;
      fVar31 = fVar15 * fVar40 + fVar39 + fVar14 * fVar18 + fVar28 * fVar49;
      fVar36 = fVar10 * fVar36 + fVar9 * fVar17 + fVar8 * fVar44 + fVar50 * fVar26 + fVar29 * fVar47
      ;
      fVar38 = fVar13 * fVar38 + fVar12 * fVar19 + fVar11 * fVar45 + fVar51 * fVar27 +
               fVar30 * fVar48;
      fVar40 = fVar16 * fVar40 + fVar15 * fVar18 + fVar14 * fVar46 + fVar52 * fVar28 +
               fVar31 * fVar49;
      local_138 = fVar10 * fVar17 + fVar9 * fVar44 + fVar8 * fVar32 + fVar50 * fVar29 +
                  fVar36 * fVar47;
      fStack_134 = fVar13 * fVar19 + fVar12 * fVar45 + fVar11 * fVar33 + fVar51 * fVar30 +
                   fVar38 * fVar48;
      fStack_130 = fVar16 * fVar18 + fVar15 * fVar46 + fVar14 * fVar34 + fVar52 * fVar31 +
                   fVar40 * fVar49;
      fVar41 = fVar10 * fVar44 + fVar9 * fVar32 + fVar50 * fVar36 + local_138 * fVar47;
      fVar42 = fVar13 * fVar45 + fVar12 * fVar33 + fVar51 * fVar38 + fStack_134 * fVar48;
      fVar43 = fVar16 * fVar46 + fVar15 * fVar34 + fVar52 * fVar40 + fStack_130 * fVar49;
      fVar35 = fVar50 * local_138 + fVar10 * fVar32;
      fVar37 = fVar51 * fStack_134 + fVar13 * fVar33;
      fVar39 = fVar52 * fStack_130 + fVar16 * fVar34;
      pfVar3 = (float *)(lVar22 + uVar25 * 4);
      *pfVar3 = fVar26;
      pfVar3[1] = fVar29;
      pfVar3[2] = fVar36;
      pfVar3[3] = local_138;
      pfVar3 = (float *)(lVar23 + uVar25 * 4);
      *pfVar3 = fVar27;
      pfVar3[1] = fVar30;
      pfVar3[2] = fVar38;
      pfVar3[3] = fStack_134;
      pfVar3 = (float *)(lVar2 + uVar25 * 4);
      *pfVar3 = fVar28;
      pfVar3[1] = fVar31;
      pfVar3[2] = fVar40;
      pfVar3[3] = fStack_130;
      uVar24 = (int)uVar25 + 4;
      uVar25 = (ulonglong)uVar24;
    } while (uVar24 < param_5);
  }
  pfVar3 = (float *)*param_4;
  *pfVar3 = fVar36;
  pfVar3[1] = local_138;
  pfVar3[2] = fVar44;
  pfVar3[3] = fVar32;
  pfVar3 = (float *)param_4[1];
  *pfVar3 = fVar38;
  pfVar3[1] = fStack_134;
  pfVar3[2] = fVar45;
  pfVar3[3] = fVar33;
  pfVar3 = (float *)param_4[2];
  *pfVar3 = fVar40;
  pfVar3[1] = fStack_130;
  pfVar3[2] = fVar46;
  pfVar3[3] = fVar34;
  return;
}



// FUNCTION 14554b700 FUN_14554b700 body=1728 status=ok
// SIG undefined FUN_14554b700(void)

void FUN_14554b700(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  ulonglong uVar59;
  uint uVar60;
  ulonglong uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  lVar9 = param_1[3];
  pfVar10 = (float *)*param_3;
  pfVar11 = (float *)param_3[2];
  lVar4 = param_2[2];
  lVar3 = param_2[3];
  lVar1 = *param_2;
  lVar2 = param_2[1];
  pfVar12 = (float *)param_3[1];
  uVar59 = (ulonglong)(param_7 - 4);
  lVar5 = lVar6 + uVar59 * 4;
  fVar19 = *(float *)(lVar5 + 8);
  fVar20 = *(float *)(lVar5 + 0xc);
  uVar61 = (ulonglong)(param_7 - 4);
  lVar5 = lVar7 + uVar59 * 4;
  fVar21 = *(float *)(lVar5 + 8);
  fVar22 = *(float *)(lVar5 + 0xc);
  lVar5 = lVar9 + uVar59 * 4;
  fVar23 = *(float *)(lVar5 + 8);
  fVar24 = *(float *)(lVar5 + 0xc);
  fVar25 = *pfVar12;
  fVar26 = pfVar12[1];
  fVar27 = pfVar12[2];
  lVar5 = lVar8 + uVar59 * 4;
  fVar28 = *(float *)(lVar5 + 8);
  fVar29 = *(float *)(lVar5 + 0xc);
  pfVar13 = (float *)param_3[3];
  fVar30 = *pfVar13;
  fVar31 = pfVar13[1];
  fVar32 = pfVar13[2];
  fVar33 = *pfVar10;
  fVar34 = pfVar10[1];
  fVar35 = pfVar10[2];
  fVar36 = *pfVar11;
  fVar37 = pfVar11[1];
  fVar38 = pfVar11[2];
  fVar102 = -pfVar10[3];
  fVar103 = -pfVar12[3];
  fVar104 = -pfVar11[3];
  fVar105 = -pfVar13[3];
  pfVar14 = (float *)*param_4;
  fVar106 = -pfVar10[4];
  fVar107 = -pfVar12[4];
  fVar108 = -pfVar11[4];
  fVar109 = -pfVar13[4];
  pfVar10 = (float *)param_4[1];
  pfVar11 = (float *)param_4[2];
  pfVar12 = (float *)param_4[3];
  pfVar13 = (float *)param_5[3];
  pfVar15 = (float *)*param_5;
  pfVar16 = (float *)param_5[1];
  pfVar17 = (float *)param_5[2];
  fVar39 = *pfVar16;
  fVar40 = pfVar16[1];
  fVar41 = pfVar16[2];
  fVar42 = *pfVar13;
  fVar43 = pfVar13[1];
  fVar44 = pfVar13[2];
  fVar45 = *pfVar15;
  fVar46 = pfVar15[1];
  fVar47 = pfVar15[2];
  fVar118 = pfVar14[1] * fVar106 + pfVar14[3] * fVar35;
  fVar119 = pfVar10[1] * fVar107 + pfVar10[3] * fVar27;
  fVar120 = pfVar11[1] * fVar108 + pfVar11[3] * fVar38;
  fVar121 = pfVar12[1] * fVar109 + pfVar12[3] * fVar32;
  fVar110 = *pfVar14 * fVar106 + pfVar14[2] * fVar35 + pfVar14[1] * fVar102 + pfVar14[3] * fVar34;
  fVar111 = *pfVar10 * fVar107 + pfVar10[2] * fVar27 + pfVar10[1] * fVar103 + pfVar10[3] * fVar26;
  fVar112 = *pfVar11 * fVar108 + pfVar11[2] * fVar38 + pfVar11[1] * fVar104 + pfVar11[3] * fVar37;
  fVar113 = *pfVar12 * fVar109 + pfVar12[2] * fVar32 + pfVar12[1] * fVar105 + pfVar12[3] * fVar31;
  fVar48 = *pfVar17;
  fVar49 = pfVar17[1];
  fVar50 = pfVar17[2];
  fVar90 = -pfVar15[3];
  fVar91 = -pfVar16[3];
  fVar92 = -pfVar17[3];
  fVar93 = -pfVar13[3];
  fVar94 = -pfVar15[4];
  fVar96 = -pfVar16[4];
  fVar98 = -pfVar17[4];
  fVar100 = -pfVar13[4];
  pfVar10 = (float *)*param_6;
  pfVar11 = (float *)param_6[1];
  pfVar12 = (float *)param_6[2];
  pfVar13 = (float *)param_6[3];
  uVar59 = 0;
  fVar114 = *pfVar10 * fVar94 + pfVar10[2] * fVar47 + pfVar10[3] * fVar46 + pfVar10[1] * fVar90;
  fVar115 = *pfVar11 * fVar96 + pfVar11[2] * fVar41 + pfVar11[3] * fVar40 + pfVar11[1] * fVar91;
  fVar116 = *pfVar12 * fVar98 + pfVar12[2] * fVar50 + pfVar12[3] * fVar49 + pfVar12[1] * fVar92;
  fVar117 = *pfVar13 * fVar100 + pfVar13[2] * fVar44 + pfVar13[3] * fVar43 + pfVar13[1] * fVar93;
  fVar74 = pfVar10[3] * fVar47 + pfVar10[1] * fVar94;
  fVar76 = pfVar11[3] * fVar41 + pfVar11[1] * fVar96;
  fVar78 = pfVar12[3] * fVar50 + pfVar12[1] * fVar98;
  fVar80 = pfVar13[3] * fVar44 + pfVar13[1] * fVar100;
  fVar95 = local_f8;
  fVar97 = fStack_f4;
  fVar99 = fStack_f0;
  fVar101 = fStack_ec;
  fVar66 = local_e8;
  fVar67 = fStack_e4;
  fVar68 = fStack_e0;
  fVar69 = fStack_dc;
  if (param_7 != 0) {
    do {
      pfVar10 = (float *)(lVar6 + uVar59 * 4);
      fVar95 = *pfVar10;
      fVar66 = pfVar10[1];
      fVar67 = pfVar10[2];
      fVar68 = pfVar10[3];
      pfVar10 = (float *)(lVar8 + uVar59 * 4);
      fVar99 = *pfVar10;
      fVar69 = pfVar10[1];
      fVar70 = pfVar10[2];
      fVar71 = pfVar10[3];
      pfVar10 = (float *)(lVar7 + uVar59 * 4);
      fVar97 = *pfVar10;
      fVar72 = pfVar10[1];
      fVar73 = pfVar10[2];
      fVar75 = pfVar10[3];
      pfVar10 = (float *)(lVar9 + uVar59 * 4);
      fVar101 = *pfVar10;
      fVar77 = pfVar10[1];
      fVar79 = pfVar10[2];
      fVar81 = pfVar10[3];
      fVar62 = fVar95 * fVar33 + fVar110;
      fVar63 = fVar97 * fVar25 + fVar111;
      fVar64 = fVar99 * fVar36 + fVar112;
      fVar65 = fVar101 * fVar30 + fVar113;
      fVar86 = fVar95 * fVar34 + fVar118 + fVar66 * fVar33 + fVar62 * fVar102;
      fVar87 = fVar97 * fVar26 + fVar119 + fVar72 * fVar25 + fVar63 * fVar103;
      fVar88 = fVar99 * fVar37 + fVar120 + fVar69 * fVar36 + fVar64 * fVar104;
      fVar89 = fVar101 * fVar31 + fVar121 + fVar77 * fVar30 + fVar65 * fVar105;
      fVar95 = fVar95 * fVar35 + fVar66 * fVar34 + fVar67 * fVar33 + fVar62 * fVar106 +
               fVar86 * fVar102;
      fVar97 = fVar97 * fVar27 + fVar72 * fVar26 + fVar73 * fVar25 + fVar63 * fVar107 +
               fVar87 * fVar103;
      fVar99 = fVar99 * fVar38 + fVar69 * fVar37 + fVar70 * fVar36 + fVar64 * fVar108 +
               fVar88 * fVar104;
      fVar101 = fVar101 * fVar32 + fVar77 * fVar31 + fVar79 * fVar30 + fVar65 * fVar109 +
                fVar89 * fVar105;
      local_f8 = fVar66 * fVar35 + fVar67 * fVar34 + fVar68 * fVar33 + fVar86 * fVar106 +
                 fVar95 * fVar102;
      fStack_f4 = fVar72 * fVar27 + fVar73 * fVar26 + fVar75 * fVar25 + fVar87 * fVar107 +
                  fVar97 * fVar103;
      fStack_f0 = fVar69 * fVar38 + fVar70 * fVar37 + fVar71 * fVar36 + fVar88 * fVar108 +
                  fVar99 * fVar104;
      fStack_ec = fVar77 * fVar32 + fVar79 * fVar31 + fVar81 * fVar30 + fVar89 * fVar109 +
                  fVar101 * fVar105;
      fVar110 = fVar67 * fVar35 + fVar68 * fVar34 + fVar95 * fVar106 + local_f8 * fVar102;
      fVar111 = fVar73 * fVar27 + fVar75 * fVar26 + fVar97 * fVar107 + fStack_f4 * fVar103;
      fVar112 = fVar70 * fVar38 + fVar71 * fVar37 + fVar99 * fVar108 + fStack_f0 * fVar104;
      fVar113 = fVar79 * fVar32 + fVar81 * fVar31 + fVar101 * fVar109 + fStack_ec * fVar105;
      fVar118 = fVar68 * fVar35 + fVar106 * local_f8;
      fVar119 = fVar75 * fVar27 + fVar107 * fStack_f4;
      fVar120 = fVar71 * fVar38 + fVar108 * fStack_f0;
      fVar121 = fVar81 * fVar32 + fVar109 * fStack_ec;
      fVar75 = fVar62 * fVar45 + fVar114;
      fVar77 = fVar63 * fVar39 + fVar115;
      fVar79 = fVar64 * fVar48 + fVar116;
      fVar81 = fVar65 * fVar42 + fVar117;
      fVar82 = fVar62 * fVar46 + fVar74 + fVar45 * fVar86 + fVar75 * fVar90;
      fVar83 = fVar63 * fVar40 + fVar76 + fVar39 * fVar87 + fVar77 * fVar91;
      fVar84 = fVar64 * fVar49 + fVar78 + fVar48 * fVar88 + fVar79 * fVar92;
      fVar85 = fVar65 * fVar43 + fVar80 + fVar42 * fVar89 + fVar81 * fVar93;
      fVar70 = fVar46 * fVar86 + fVar62 * fVar47 + fVar45 * fVar95 + fVar75 * fVar94 +
               fVar82 * fVar90;
      fVar71 = fVar40 * fVar87 + fVar63 * fVar41 + fVar39 * fVar97 + fVar77 * fVar96 +
               fVar83 * fVar91;
      fVar72 = fVar49 * fVar88 + fVar64 * fVar50 + fVar48 * fVar99 + fVar79 * fVar98 +
               fVar84 * fVar92;
      fVar73 = fVar43 * fVar89 + fVar65 * fVar44 + fVar42 * fVar101 + fVar81 * fVar100 +
               fVar85 * fVar93;
      fVar66 = fVar47 * fVar86 + fVar46 * fVar95 + fVar45 * local_f8 + fVar82 * fVar94 +
               fVar70 * fVar90;
      fVar67 = fVar41 * fVar87 + fVar40 * fVar97 + fVar39 * fStack_f4 + fVar83 * fVar96 +
               fVar71 * fVar91;
      fVar68 = fVar50 * fVar88 + fVar49 * fVar99 + fVar48 * fStack_f0 + fVar84 * fVar98 +
               fVar72 * fVar92;
      fVar69 = fVar44 * fVar89 + fVar43 * fVar101 + fVar42 * fStack_ec + fVar85 * fVar100 +
               fVar73 * fVar93;
      fVar114 = fVar47 * fVar95 + fVar46 * local_f8 + fVar70 * fVar94 + fVar66 * fVar90;
      fVar115 = fVar41 * fVar97 + fVar40 * fStack_f4 + fVar71 * fVar96 + fVar67 * fVar91;
      fVar116 = fVar50 * fVar99 + fVar49 * fStack_f0 + fVar72 * fVar98 + fVar68 * fVar92;
      fVar117 = fVar44 * fVar101 + fVar43 * fStack_ec + fVar73 * fVar100 + fVar69 * fVar93;
      fVar74 = fVar47 * local_f8 + fVar94 * fVar66;
      fVar76 = fVar41 * fStack_f4 + fVar96 * fVar67;
      fVar78 = fVar50 * fStack_f0 + fVar98 * fVar68;
      fVar80 = fVar44 * fStack_ec + fVar100 * fVar69;
      pfVar10 = (float *)(lVar1 + uVar59 * 4);
      *pfVar10 = fVar75;
      pfVar10[1] = fVar82;
      pfVar10[2] = fVar70;
      pfVar10[3] = fVar66;
      pfVar10 = (float *)(lVar2 + uVar59 * 4);
      *pfVar10 = fVar77;
      pfVar10[1] = fVar83;
      pfVar10[2] = fVar71;
      pfVar10[3] = fVar67;
      pfVar10 = (float *)(lVar4 + uVar59 * 4);
      *pfVar10 = fVar79;
      pfVar10[1] = fVar84;
      pfVar10[2] = fVar72;
      pfVar10[3] = fVar68;
      pfVar10 = (float *)(lVar3 + uVar59 * 4);
      *pfVar10 = fVar81;
      pfVar10[1] = fVar85;
      pfVar10[2] = fVar73;
      pfVar10[3] = fVar69;
      uVar60 = (int)uVar59 + 4;
      uVar59 = (ulonglong)uVar60;
      local_e8 = local_f8;
      fStack_e4 = fStack_f4;
      fStack_e0 = fStack_f0;
      fStack_dc = fStack_ec;
      fVar66 = fVar95;
      fVar67 = fVar97;
      fVar68 = fVar99;
      fVar69 = fVar101;
    } while (uVar60 < param_7);
  }
  lVar1 = lVar1 + uVar61 * 4;
  uVar51 = *(undefined4 *)(lVar1 + 8);
  uVar52 = *(undefined4 *)(lVar1 + 0xc);
  pfVar10 = (float *)*param_4;
  lVar2 = lVar2 + uVar61 * 4;
  uVar53 = *(undefined4 *)(lVar2 + 8);
  uVar54 = *(undefined4 *)(lVar2 + 0xc);
  lVar3 = lVar3 + uVar61 * 4;
  uVar55 = *(undefined4 *)(lVar3 + 8);
  uVar56 = *(undefined4 *)(lVar3 + 0xc);
  lVar4 = lVar4 + uVar61 * 4;
  uVar57 = *(undefined4 *)(lVar4 + 8);
  uVar58 = *(undefined4 *)(lVar4 + 0xc);
  *pfVar10 = fVar95;
  pfVar10[1] = local_f8;
  pfVar10[2] = fVar19;
  pfVar10[3] = fVar20;
  pfVar10 = (float *)param_4[1];
  *pfVar10 = fVar97;
  pfVar10[1] = fStack_f4;
  pfVar10[2] = fVar21;
  pfVar10[3] = fVar22;
  pfVar10 = (float *)param_4[2];
  *pfVar10 = fVar99;
  pfVar10[1] = fStack_f0;
  pfVar10[2] = fVar28;
  pfVar10[3] = fVar29;
  pfVar10 = (float *)param_4[3];
  *pfVar10 = fVar101;
  pfVar10[1] = fStack_ec;
  pfVar10[2] = fVar23;
  pfVar10[3] = fVar24;
  puVar18 = (undefined4 *)*param_6;
  *puVar18 = uVar51;
  puVar18[1] = uVar52;
  puVar18[2] = fVar66;
  puVar18[3] = local_e8;
  puVar18 = (undefined4 *)param_6[1];
  *puVar18 = uVar53;
  puVar18[1] = uVar54;
  puVar18[2] = fVar67;
  puVar18[3] = fStack_e4;
  puVar18 = (undefined4 *)param_6[2];
  *puVar18 = uVar57;
  puVar18[1] = uVar58;
  puVar18[2] = fVar68;
  puVar18[3] = fStack_e0;
  puVar18 = (undefined4 *)param_6[3];
  *puVar18 = uVar55;
  puVar18[1] = uVar56;
  puVar18[2] = fVar69;
  puVar18[3] = fStack_dc;
  return;
}



// FUNCTION 14554bdc0 FUN_14554bdc0 body=1680 status=ok
// SIG undefined FUN_14554bdc0(void)

void FUN_14554bdc0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  ulonglong uVar45;
  uint uVar46;
  ulonglong uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float local_188;
  float fStack_184;
  float fStack_180;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  
  lVar4 = param_1[2];
  lVar6 = *param_1;
  lVar7 = param_1[1];
  pfVar8 = (float *)param_3[1];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  fVar15 = *pfVar8;
  fVar16 = pfVar8[1];
  fVar17 = pfVar8[2];
  lVar5 = param_2[2];
  pfVar9 = (float *)*param_3;
  uVar45 = (ulonglong)(param_7 - 4);
  lVar1 = lVar6 + uVar45 * 4;
  fVar18 = *(float *)(lVar1 + 8);
  fVar19 = *(float *)(lVar1 + 0xc);
  uVar47 = (ulonglong)(param_7 - 4);
  lVar1 = lVar7 + uVar45 * 4;
  fVar20 = *(float *)(lVar1 + 8);
  fVar21 = *(float *)(lVar1 + 0xc);
  lVar1 = lVar4 + uVar45 * 4;
  fVar22 = *(float *)(lVar1 + 8);
  fVar23 = *(float *)(lVar1 + 0xc);
  pfVar10 = (float *)param_3[2];
  fVar24 = *pfVar9;
  fVar25 = pfVar9[1];
  fVar26 = pfVar9[2];
  fVar27 = *pfVar10;
  fVar28 = pfVar10[1];
  fVar29 = pfVar10[2];
  fVar66 = -pfVar9[3];
  fVar68 = -pfVar8[3];
  fVar70 = -pfVar10[3];
  pfVar11 = (float *)*param_4;
  pfVar12 = (float *)param_4[1];
  fVar78 = -pfVar9[4];
  fVar79 = -pfVar8[4];
  fVar80 = -pfVar10[4];
  pfVar8 = (float *)param_4[2];
  pfVar9 = (float *)param_5[2];
  pfVar10 = (float *)*param_5;
  pfVar13 = (float *)param_5[1];
  fVar30 = *pfVar13;
  fVar31 = pfVar13[1];
  fVar32 = pfVar13[2];
  fVar33 = *pfVar10;
  fVar34 = pfVar10[1];
  fVar35 = pfVar10[2];
  local_1b8 = pfVar11[3] * fVar26 + pfVar11[1] * fVar78;
  fStack_1b4 = pfVar12[3] * fVar17 + pfVar12[1] * fVar79;
  fStack_1b0 = pfVar8[3] * fVar29 + pfVar8[1] * fVar80;
  fVar81 = pfVar11[2] * fVar26 + *pfVar11 * fVar78 + pfVar11[1] * fVar66 + pfVar11[3] * fVar25;
  fVar82 = pfVar12[2] * fVar17 + *pfVar12 * fVar79 + pfVar12[1] * fVar68 + pfVar12[3] * fVar16;
  fVar83 = pfVar8[2] * fVar29 + *pfVar8 * fVar80 + pfVar8[1] * fVar70 + pfVar8[3] * fVar28;
  fVar36 = *pfVar9;
  fVar37 = pfVar9[1];
  fVar38 = pfVar9[2];
  fVar67 = -pfVar10[3];
  fVar69 = -pfVar13[3];
  fVar71 = -pfVar9[3];
  fVar72 = -pfVar10[4];
  fVar74 = -pfVar13[4];
  fVar76 = -pfVar9[4];
  pfVar8 = (float *)*param_6;
  pfVar9 = (float *)param_6[1];
  pfVar10 = (float *)param_6[2];
  fVar84 = pfVar8[2] * fVar35 + *pfVar8 * fVar72 + fVar34 * pfVar8[3] + fVar67 * pfVar8[1];
  fVar85 = pfVar9[2] * fVar32 + *pfVar9 * fVar74 + fVar31 * pfVar9[3] + fVar69 * pfVar9[1];
  fVar86 = pfVar10[2] * fVar38 + *pfVar10 * fVar76 + fVar37 * pfVar10[3] + fVar71 * pfVar10[1];
  local_188 = fVar72 * pfVar8[1] + fVar35 * pfVar8[3];
  fStack_184 = fVar74 * pfVar9[1] + fVar32 * pfVar9[3];
  fStack_180 = fVar76 * pfVar10[1] + fVar38 * pfVar10[3];
  uVar45 = 0;
  if (param_7 == 0) {
    local_118 = (float)lVar5;
    fStack_114 = (float)((ulonglong)lVar5 >> 0x20);
    fVar73 = local_128;
    fVar75 = fStack_124;
    fVar77 = fStack_120;
    fVar51 = local_118;
    fVar52 = fStack_114;
    fVar53 = fStack_110;
  }
  else {
    do {
      pfVar8 = (float *)(lVar6 + uVar45 * 4);
      fVar73 = *pfVar8;
      fVar51 = pfVar8[1];
      fVar52 = pfVar8[2];
      fVar53 = pfVar8[3];
      pfVar8 = (float *)(lVar4 + uVar45 * 4);
      fVar77 = *pfVar8;
      fVar54 = pfVar8[1];
      fVar55 = pfVar8[2];
      fVar56 = pfVar8[3];
      pfVar8 = (float *)(lVar7 + uVar45 * 4);
      fVar75 = *pfVar8;
      fVar57 = pfVar8[1];
      fVar58 = pfVar8[2];
      fVar59 = pfVar8[3];
      fVar48 = fVar24 * fVar73 + fVar81;
      fVar49 = fVar15 * fVar75 + fVar82;
      fVar50 = fVar27 * fVar77 + fVar83;
      fVar63 = fVar25 * fVar73 + local_1b8 + fVar24 * fVar51 + fVar48 * fVar66;
      fVar64 = fVar16 * fVar75 + fStack_1b4 + fVar15 * fVar57 + fVar49 * fVar68;
      fVar65 = fVar28 * fVar77 + fStack_1b0 + fVar27 * fVar54 + fVar50 * fVar70;
      fVar73 = fVar26 * fVar73 + fVar25 * fVar51 + fVar24 * fVar52 + fVar48 * fVar78 +
               fVar63 * fVar66;
      fVar75 = fVar17 * fVar75 + fVar16 * fVar57 + fVar15 * fVar58 + fVar49 * fVar79 +
               fVar64 * fVar68;
      fVar77 = fVar29 * fVar77 + fVar28 * fVar54 + fVar27 * fVar55 + fVar50 * fVar80 +
               fVar65 * fVar70;
      local_128 = fVar26 * fVar51 + fVar25 * fVar52 + fVar24 * fVar53 + fVar63 * fVar78 +
                  fVar73 * fVar66;
      fStack_124 = fVar17 * fVar57 + fVar16 * fVar58 + fVar15 * fVar59 + fVar64 * fVar79 +
                   fVar75 * fVar68;
      fStack_120 = fVar29 * fVar54 + fVar28 * fVar55 + fVar27 * fVar56 + fVar65 * fVar80 +
                   fVar77 * fVar70;
      fVar81 = fVar26 * fVar52 + fVar25 * fVar53 + fVar73 * fVar78 + local_128 * fVar66;
      fVar82 = fVar17 * fVar58 + fVar16 * fVar59 + fVar75 * fVar79 + fStack_124 * fVar68;
      fVar83 = fVar29 * fVar55 + fVar28 * fVar56 + fVar77 * fVar80 + fStack_120 * fVar70;
      local_1b8 = fVar26 * fVar53 + fVar78 * local_128;
      fStack_1b4 = fVar17 * fVar59 + fVar79 * fStack_124;
      fStack_1b0 = fVar29 * fVar56 + fVar80 * fStack_120;
      fVar57 = fVar48 * fVar33 + fVar84;
      fVar58 = fVar49 * fVar30 + fVar85;
      fVar59 = fVar50 * fVar36 + fVar86;
      fVar60 = fVar48 * fVar34 + local_188 + fVar33 * fVar63 + fVar57 * fVar67;
      fVar61 = fVar49 * fVar31 + fStack_184 + fVar30 * fVar64 + fVar58 * fVar69;
      fVar62 = fVar50 * fVar37 + fStack_180 + fVar36 * fVar65 + fVar59 * fVar71;
      fVar54 = fVar34 * fVar63 + fVar48 * fVar35 + fVar33 * fVar73 + fVar57 * fVar72 +
               fVar60 * fVar67;
      fVar55 = fVar31 * fVar64 + fVar49 * fVar32 + fVar30 * fVar75 + fVar58 * fVar74 +
               fVar61 * fVar69;
      fVar56 = fVar37 * fVar65 + fVar50 * fVar38 + fVar36 * fVar77 + fVar59 * fVar76 +
               fVar62 * fVar71;
      fVar51 = fVar35 * fVar63 + fVar34 * fVar73 + fVar33 * local_128 + fVar60 * fVar72 +
               fVar54 * fVar67;
      fVar52 = fVar32 * fVar64 + fVar31 * fVar75 + fVar30 * fStack_124 + fVar61 * fVar74 +
               fVar55 * fVar69;
      fVar53 = fVar38 * fVar65 + fVar37 * fVar77 + fVar36 * fStack_120 + fVar62 * fVar76 +
               fVar56 * fVar71;
      fVar84 = fVar35 * fVar73 + fVar34 * local_128 + fVar54 * fVar72 + fVar51 * fVar67;
      fVar85 = fVar32 * fVar75 + fVar31 * fStack_124 + fVar55 * fVar74 + fVar52 * fVar69;
      fVar86 = fVar38 * fVar77 + fVar37 * fStack_120 + fVar56 * fVar76 + fVar53 * fVar71;
      local_188 = fVar35 * local_128 + fVar72 * fVar51;
      fStack_184 = fVar32 * fStack_124 + fVar74 * fVar52;
      fStack_180 = fVar38 * fStack_120 + fVar76 * fVar53;
      pfVar8 = (float *)(lVar2 + uVar45 * 4);
      *pfVar8 = fVar57;
      pfVar8[1] = fVar60;
      pfVar8[2] = fVar54;
      pfVar8[3] = fVar51;
      pfVar8 = (float *)(lVar3 + uVar45 * 4);
      *pfVar8 = fVar58;
      pfVar8[1] = fVar61;
      pfVar8[2] = fVar55;
      pfVar8[3] = fVar52;
      pfVar8 = (float *)(lVar5 + uVar45 * 4);
      *pfVar8 = fVar59;
      pfVar8[1] = fVar62;
      pfVar8[2] = fVar56;
      pfVar8[3] = fVar53;
      uVar46 = (int)uVar45 + 4;
      uVar45 = (ulonglong)uVar46;
      local_118 = local_128;
      fStack_114 = fStack_124;
      fStack_110 = fStack_120;
      fVar51 = fVar73;
      fVar52 = fVar75;
      fVar53 = fVar77;
    } while (uVar46 < param_7);
  }
  lVar2 = lVar2 + uVar47 * 4;
  uVar39 = *(undefined4 *)(lVar2 + 8);
  uVar40 = *(undefined4 *)(lVar2 + 0xc);
  pfVar8 = (float *)*param_4;
  lVar3 = lVar3 + uVar47 * 4;
  uVar41 = *(undefined4 *)(lVar3 + 8);
  uVar42 = *(undefined4 *)(lVar3 + 0xc);
  lVar5 = lVar5 + uVar47 * 4;
  uVar43 = *(undefined4 *)(lVar5 + 8);
  uVar44 = *(undefined4 *)(lVar5 + 0xc);
  *pfVar8 = fVar73;
  pfVar8[1] = local_128;
  pfVar8[2] = fVar18;
  pfVar8[3] = fVar19;
  pfVar8 = (float *)param_4[1];
  *pfVar8 = fVar75;
  pfVar8[1] = fStack_124;
  pfVar8[2] = fVar20;
  pfVar8[3] = fVar21;
  pfVar8 = (float *)param_4[2];
  *pfVar8 = fVar77;
  pfVar8[1] = fStack_120;
  pfVar8[2] = fVar22;
  pfVar8[3] = fVar23;
  puVar14 = (undefined4 *)*param_6;
  *puVar14 = uVar39;
  puVar14[1] = uVar40;
  puVar14[2] = fVar51;
  puVar14[3] = local_118;
  puVar14 = (undefined4 *)param_6[1];
  *puVar14 = uVar41;
  puVar14[1] = uVar42;
  puVar14[2] = fVar52;
  puVar14[3] = fStack_114;
  puVar14 = (undefined4 *)param_6[2];
  *puVar14 = uVar43;
  puVar14[1] = uVar44;
  puVar14[2] = fVar53;
  puVar14[3] = fStack_110;
  return;
}



// FUNCTION 14554c460 FUN_14554c460 body=684 status=ok
// SIG undefined FUN_14554c460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14554c460(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *_Dst;
  float fVar13;
  float local_res10;
  float fStackX_14;
  undefined8 auStack_80 [5];
  uint local_58 [8];
  
  lVar5 = *param_1;
  _Dst = (float *)*param_2;
  uVar3 = *(uint *)(param_2 + 1);
  uVar4 = *(uint *)(param_1 + 1);
  uVar12 = (ulonglong)(uVar4 & 0xff);
  uVar2 = *(ushort *)(param_1 + 2);
  uVar10 = (ulonglong)uVar2;
  uVar7 = uVar12 * 8 + 0xf;
  if (uVar7 <= uVar12 * 8) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x14554c4c6;
  lVar6 = -(uVar7 & 0xfffffffffffffff0);
  lVar1 = (longlong)local_58 + lVar6;
  *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x14554c4dd;
  FUN_14554ca80(uVar10,uVar4,lVar1);
  local_res10 = (float)param_3;
  fStackX_14 = (float)((ulonglong)param_3 >> 0x20);
  fVar13 = (fStackX_14 - local_res10) / (float)uVar2;
  if ((char)uVar3 == (char)uVar4) {
    uVar7 = 0;
    if (uVar10 != 0) {
      do {
        uVar8 = 0;
        local_res10 = local_res10 + fVar13;
        if (3 < uVar12) {
          lVar11 = (uVar12 - 4 >> 2) + 1;
          uVar8 = lVar11 * 4;
          puVar9 = (uint *)((longlong)local_58 + lVar6 + 8);
          do {
            uVar3 = puVar9[-1];
            *_Dst = local_res10 * *(float *)(lVar5 + (puVar9[-2] + uVar7) * 4);
            uVar4 = *puVar9;
            _Dst[1] = local_res10 * *(float *)(lVar5 + (uVar3 + uVar7) * 4);
            uVar3 = puVar9[1];
            _Dst[2] = local_res10 * *(float *)(lVar5 + (uVar4 + uVar7) * 4);
            _Dst[3] = local_res10 * *(float *)(lVar5 + (uVar3 + uVar7) * 4);
            _Dst = _Dst + 4;
            lVar11 = lVar11 + -1;
            puVar9 = puVar9 + 4;
          } while (lVar11 != 0);
        }
        for (; uVar8 < uVar12; uVar8 = uVar8 + 1) {
          *_Dst = local_res10 * *(float *)(lVar5 + (*(uint *)(lVar1 + uVar8 * 4) + uVar7) * 4);
          _Dst = _Dst + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar10);
    }
  }
  else {
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar10 = (ulonglong)(uVar3 & 0xff);
      do {
        uVar8 = 0;
        local_res10 = local_res10 + fVar13;
        if (3 < uVar12) {
          lVar11 = (uVar12 - 4 >> 2) + 1;
          uVar8 = lVar11 * 4;
          puVar9 = (uint *)((longlong)local_58 + lVar6 + 8);
          do {
            uVar3 = puVar9[-1];
            *_Dst = local_res10 * *(float *)(lVar5 + (puVar9[-2] + uVar7) * 4);
            uVar4 = *puVar9;
            _Dst[1] = local_res10 * *(float *)(lVar5 + (uVar3 + uVar7) * 4);
            uVar3 = puVar9[1];
            _Dst[2] = local_res10 * *(float *)(lVar5 + (uVar4 + uVar7) * 4);
            _Dst[3] = local_res10 * *(float *)(lVar5 + (uVar3 + uVar7) * 4);
            _Dst = _Dst + 4;
            lVar11 = lVar11 + -1;
            puVar9 = puVar9 + 4;
          } while (lVar11 != 0);
        }
        for (; uVar8 < uVar12; uVar8 = uVar8 + 1) {
          *_Dst = local_res10 * *(float *)(lVar5 + (*(uint *)(lVar1 + uVar8 * 4) + uVar7) * 4);
          _Dst = _Dst + 1;
        }
        if (uVar8 < uVar10) {
          lVar11 = uVar10 - uVar8;
          *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x14554c6dc;
          memset(_Dst,0,lVar11 * 4);
          _Dst = _Dst + lVar11;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
  }
  return;
}



// FUNCTION 14554c710 FUN_14554c710 body=873 status=ok
// SIG undefined FUN_14554c710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14554c710(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float local_res10;
  float fStackX_14;
  undefined8 auStack_60 [5];
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar16 = (ulonglong)uVar1;
  lVar4 = *param_1;
  puVar15 = (undefined2 *)*param_2;
  uVar14 = (ulonglong)(uVar2 & 0xff);
  uVar3 = *(uint *)(param_2 + 1);
  uVar6 = uVar14 * 8 + 0xf;
  if (uVar6 <= uVar14 * 8) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x14554c769;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14554c77f;
  FUN_14554ca80(uVar16,uVar2);
  local_res10 = (float)param_3;
  fStackX_14 = (float)((ulonglong)param_3 >> 0x20);
  uVar6 = 0;
  fVar18 = (fStackX_14 - local_res10) / (float)uVar1;
  if ((char)uVar3 == (char)uVar2) {
    uVar10 = uVar6;
    if (uVar16 != 0) {
      do {
        local_res10 = local_res10 + fVar18;
        uVar13 = uVar6;
        if (3 < uVar14) {
          puVar7 = (uint *)(&stack0xffffffffffffffd0 + lVar5);
          lVar12 = (uVar14 - 4 >> 2) + 1;
          uVar13 = lVar12 * 4;
          do {
            fVar17 = local_res10 * *(float *)(lVar4 + (puVar7[-2] + uVar10) * 4) * 32767.0;
            if (32767.0 <= fVar17) {
              fVar17 = 32767.0;
            }
            if (fVar17 <= -32768.0) {
              fVar17 = -32768.0;
            }
            *puVar15 = (short)(int)fVar17;
            fVar17 = local_res10 * *(float *)(lVar4 + (puVar7[-1] + uVar10) * 4) * 32767.0;
            if (32767.0 <= fVar17) {
              fVar17 = 32767.0;
            }
            if (fVar17 <= -32768.0) {
              fVar17 = -32768.0;
            }
            puVar15[1] = (short)(int)fVar17;
            fVar17 = local_res10 * *(float *)(lVar4 + (*puVar7 + uVar10) * 4) * 32767.0;
            if (32767.0 <= fVar17) {
              fVar17 = 32767.0;
            }
            if (fVar17 <= -32768.0) {
              fVar17 = -32768.0;
            }
            puVar15[2] = (short)(int)fVar17;
            fVar17 = local_res10 * *(float *)(lVar4 + (puVar7[1] + uVar10) * 4) * 32767.0;
            if (32767.0 <= fVar17) {
              fVar17 = 32767.0;
            }
            if (fVar17 <= -32768.0) {
              fVar17 = -32768.0;
            }
            puVar7 = puVar7 + 4;
            puVar15[3] = (short)(int)fVar17;
            puVar15 = puVar15 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        for (; uVar13 < uVar14; uVar13 = uVar13 + 1) {
          fVar17 = local_res10 *
                   *(float *)(lVar4 + (*(uint *)(&stack0xffffffffffffffc8 + uVar13 * 4 + lVar5) +
                                      uVar10) * 4) * 32767.0;
          if (32767.0 <= fVar17) {
            fVar17 = 32767.0;
          }
          if (fVar17 <= -32768.0) {
            fVar17 = -32768.0;
          }
          *puVar15 = (short)(int)fVar17;
          puVar15 = puVar15 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar16);
    }
  }
  else if (uVar16 != 0) {
    uVar13 = (ulonglong)(uVar3 & 0xff);
    uVar10 = uVar6;
    do {
      local_res10 = local_res10 + fVar18;
      uVar9 = uVar6;
      if (3 < uVar14) {
        puVar7 = (uint *)(&stack0xffffffffffffffd0 + lVar5);
        lVar12 = (uVar14 - 4 >> 2) + 1;
        uVar9 = lVar12 * 4;
        do {
          fVar17 = local_res10 * *(float *)(lVar4 + (puVar7[-2] + uVar10) * 4) * 32767.0;
          if (32767.0 <= fVar17) {
            fVar17 = 32767.0;
          }
          if (fVar17 <= -32768.0) {
            fVar17 = -32768.0;
          }
          *puVar15 = (short)(int)fVar17;
          fVar17 = local_res10 * *(float *)(lVar4 + (puVar7[-1] + uVar10) * 4) * 32767.0;
          if (32767.0 <= fVar17) {
            fVar17 = 32767.0;
          }
          if (fVar17 <= -32768.0) {
            fVar17 = -32768.0;
          }
          puVar15[1] = (short)(int)fVar17;
          fVar17 = local_res10 * *(float *)(lVar4 + (*puVar7 + uVar10) * 4) * 32767.0;
          if (32767.0 <= fVar17) {
            fVar17 = 32767.0;
          }
          if (fVar17 <= -32768.0) {
            fVar17 = -32768.0;
          }
          puVar15[2] = (short)(int)fVar17;
          fVar17 = local_res10 * *(float *)(lVar4 + (puVar7[1] + uVar10) * 4) * 32767.0;
          if (32767.0 <= fVar17) {
            fVar17 = 32767.0;
          }
          if (fVar17 <= -32768.0) {
            fVar17 = -32768.0;
          }
          puVar7 = puVar7 + 4;
          puVar15[3] = (short)(int)fVar17;
          puVar15 = puVar15 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      for (; uVar9 < uVar14; uVar9 = uVar9 + 1) {
        fVar17 = local_res10 *
                 *(float *)(lVar4 + (*(uint *)(&stack0xffffffffffffffc8 + uVar9 * 4 + lVar5) +
                                    uVar10) * 4) * 32767.0;
        if (32767.0 <= fVar17) {
          fVar17 = 32767.0;
        }
        if (fVar17 <= -32768.0) {
          fVar17 = -32768.0;
        }
        *puVar15 = (short)(int)fVar17;
        puVar15 = puVar15 + 1;
      }
      if (uVar9 < uVar13) {
        uVar9 = uVar13 - uVar9;
        puVar11 = puVar15;
        for (uVar8 = uVar9 & 0x7fffffffffffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar15 = puVar15 + uVar9;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar16);
  }
  return;
}



// FUNCTION 14554ca80 FUN_14554ca80 body=594 status=ok
// SIG undefined FUN_14554ca80(void)

void FUN_14554ca80(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar19._4_4_ = param_1;
  auVar19._0_4_ = param_1;
  auVar19._8_4_ = param_1;
  auVar19._12_4_ = param_1;
  if ((param_2 >> 0xc & 8) == 0) {
    uVar5 = param_2 & 0xff;
    if ((char)param_2 != '\0') {
      uVar6 = 0;
      if ((0xf < uVar5) && (uVar6 = 0, 1 < DAT_14c707900)) {
        uVar1 = 8;
        uVar9 = 0;
        do {
          uVar6 = uVar9 + 0x10;
          auVar12._4_4_ = uVar9 + 1;
          auVar12._0_4_ = uVar9;
          auVar12._8_4_ = uVar9 + 2;
          auVar12._12_4_ = uVar9 + 3;
          auVar12 = pmulld(auVar12,auVar19);
          *(undefined1 (*) [16])(param_3 + uVar9) = auVar12;
          auVar16._4_4_ = uVar1 - 3;
          auVar16._0_4_ = uVar1 - 4;
          auVar16._8_4_ = uVar1 - 2;
          auVar16._12_4_ = uVar1 - 1;
          auVar12 = pmulld(auVar16,auVar19);
          *(undefined1 (*) [16])(param_3 + (uVar1 - 4)) = auVar12;
          auVar14._4_4_ = uVar1 + 1;
          auVar14._0_4_ = uVar1;
          auVar14._8_4_ = uVar1 + 2;
          auVar14._12_4_ = uVar1 + 3;
          auVar12 = pmulld(auVar14,auVar19);
          *(undefined1 (*) [16])(param_3 + uVar1) = auVar12;
          auVar17._4_4_ = uVar1 + 5;
          auVar17._0_4_ = uVar1 + 4;
          auVar17._8_4_ = uVar1 + 6;
          auVar17._12_4_ = uVar1 + 7;
          auVar12 = pmulld(auVar17,auVar19);
          *(undefined1 (*) [16])(param_3 + (uVar1 + 4)) = auVar12;
          uVar1 = uVar1 + 0x10;
          uVar9 = uVar6;
        } while (uVar6 < (param_2 & 0xf0));
        if (uVar5 <= uVar6) {
          return;
        }
      }
      iVar3 = uVar6 * param_1;
      uVar2 = (ulonglong)(uVar5 - uVar6);
      param_3 = param_3 + uVar6;
      do {
        *param_3 = iVar3;
        param_3 = param_3 + 1;
        iVar3 = iVar3 + param_1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      return;
    }
  }
  else {
    uVar5 = param_2 >> 0xc & 4;
    iVar3 = 0;
    lVar10 = (ulonglong)(uVar5 != 0) + 2;
    piVar8 = param_3;
    do {
      *piVar8 = iVar3;
      piVar8 = piVar8 + 1;
      iVar3 = iVar3 + param_1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    param_2 = param_2 & 0xff;
    lVar10 = 8;
    if (uVar5 != 0) {
      lVar10 = 0xc;
    }
    uVar6 = (uint)(uVar5 != 0);
    uVar5 = uVar6 + 3;
    uVar2 = (ulonglong)uVar5;
    *(uint *)(lVar10 + (longlong)param_3) = (param_2 - 1) * param_1;
    if (uVar5 < param_2) {
      if ((0xf < param_2 - uVar5) && (1 < DAT_14c707900)) {
        uVar6 = uVar6 + 0xb;
        do {
          iVar3 = (int)uVar2;
          uVar9 = uVar6 + 4;
          auVar11._0_4_ = iVar3 + -1;
          auVar11._4_4_ = iVar3;
          auVar11._8_4_ = iVar3 + 1;
          auVar11._12_4_ = iVar3 + 2;
          auVar12 = pmulld(auVar11,auVar19);
          *(undefined1 (*) [16])(param_3 + uVar2) = auVar12;
          iVar4 = uVar6 + 5;
          uVar1 = iVar3 + 0x10;
          uVar2 = (ulonglong)uVar1;
          iVar7 = uVar6 + 3;
          auVar15._0_4_ = uVar6 - 5;
          auVar15._4_4_ = uVar6 - 4;
          auVar15._8_4_ = uVar6 - 3;
          auVar15._12_4_ = uVar6 - 2;
          auVar13._0_4_ = uVar6 - 1;
          auVar13._4_4_ = uVar6;
          auVar13._8_4_ = uVar6 + 1;
          auVar13._12_4_ = uVar6 + 2;
          auVar12 = pmulld(auVar15,auVar19);
          *(undefined1 (*) [16])(param_3 + (uVar6 - 4)) = auVar12;
          iVar3 = uVar6 + 6;
          auVar12 = pmulld(auVar13,auVar19);
          *(undefined1 (*) [16])(param_3 + uVar6) = auVar12;
          uVar6 = uVar6 + 0x10;
          auVar18._4_4_ = uVar9;
          auVar18._0_4_ = iVar7;
          auVar18._12_4_ = iVar3;
          auVar18._8_4_ = iVar4;
          auVar12 = pmulld(auVar18,auVar19);
          *(undefined1 (*) [16])(param_3 + uVar9) = auVar12;
        } while (uVar1 < param_2 - (param_2 - uVar5 & 0xf));
        if (param_2 <= uVar1) {
          return;
        }
      }
      iVar3 = ((int)uVar2 + -1) * param_1;
      param_3 = param_3 + uVar2;
      uVar2 = (ulonglong)(param_2 - (int)uVar2);
      do {
        *param_3 = iVar3;
        param_3 = param_3 + 1;
        iVar3 = iVar3 + param_1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}



// FUNCTION 14554cce0 FUN_14554cce0 body=856 status=ok
// SIG undefined FUN_14554cce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14554cce0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,uint param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined8 auStack_110 [5];
  longlong lStack_e8;
  uint auStack_e0 [6];
  longlong local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  bVar4 = *(byte *)(param_1 + 1);
  uVar21 = *(uint *)(param_2 + 1) & 0xff;
  uVar19 = (ulonglong)bVar4 * 8;
  uVar15 = uVar19 + 0xf;
  if (uVar15 <= uVar19) {
    uVar15 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x14554cd52;
  lVar7 = -(uVar15 & 0xfffffffffffffff0);
  uVar15 = uVar19 + 0xf;
  plVar16 = (longlong *)((longlong)&local_c8 + lVar7);
  if (uVar15 <= uVar19) {
    uVar15 = 0xffffffffffffff0;
  }
  local_c0 = uVar21;
  local_98 = plVar16;
  *(undefined8 *)((longlong)auStack_110 + lVar7) = 0x14554cd73;
  lVar8 = -(uVar15 & 0xfffffffffffffff0);
  local_a0 = (longlong)&local_c8 + lVar8 + lVar7;
  uVar15 = uVar19 + 0xf;
  if (uVar15 <= uVar19) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7) = 0x14554cd94;
  lVar9 = -(uVar15 & 0xfffffffffffffff0);
  local_a8 = (longlong)&local_c8 + lVar9 + lVar8 + lVar7;
  uVar15 = uVar19 + 0xf;
  if (uVar15 <= uVar19) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar9 + lVar8 + lVar7) = 0x14554cdb5;
  uVar3 = *param_3;
  uVar5 = *(ushort *)(param_1 + 2);
  lVar10 = -(uVar15 & 0xfffffffffffffff0);
  lVar6 = *param_1;
  uVar22 = 0;
  local_b0 = (longlong)&local_c8 + lVar10 + lVar9 + lVar8 + lVar7;
  uVar14 = uVar21;
  local_b8 = uVar3;
  if (bVar4 != 0) {
    lVar23 = local_a0 - (longlong)plVar16;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar13 = local_b8._4_4_;
    local_b8._0_4_ = (undefined4)uVar3;
    uVar12 = (undefined4)local_b8;
    lVar24 = local_a8 - (longlong)plVar16;
    lVar20 = local_b0 - (longlong)plVar16;
    do {
      plVar1 = plVar16 + 1;
      *plVar16 = lVar6 + (ulonglong)(uVar22 * uVar5) * 4;
      uVar14 = (uVar21 + 7 & 0xfffffff8) * uVar22;
      uVar22 = uVar22 + 1;
      *(undefined4 *)((longlong)plVar16 + lVar23) = uVar12;
      *(undefined4 *)(lVar23 + -4 + (longlong)plVar1) = uVar13;
      lVar2 = (ulonglong)uVar14 * 4;
      *(longlong *)(lVar24 + -8 + (longlong)plVar1) = lVar2 + param_4;
      *(longlong *)(lVar20 + -8 + (longlong)plVar1) = lVar2 + param_5;
      plVar16 = plVar1;
      uVar14 = local_c0;
    } while (uVar22 < bVar4);
  }
  lVar6 = local_b0;
  uVar19 = 0;
  uVar15 = (ulonglong)uVar14 * 8 + 0xf;
  if (uVar15 <= (ulonglong)uVar14 * 8) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14554cea2;
  uVar5 = *(ushort *)(param_2 + 2);
  lVar24 = -(uVar15 & 0xfffffffffffffff0);
  lVar23 = *param_2;
  lVar20 = (longlong)&local_c8 + lVar24 + lVar10 + lVar9 + lVar8 + lVar7;
  auVar30._4_2_ = uVar5;
  auVar30._0_4_ = CONCAT22(0,uVar5);
  auVar30._6_2_ = 0;
  auVar30._8_2_ = uVar5;
  auVar30._10_2_ = 0;
  auVar30._12_2_ = uVar5;
  auVar30._14_2_ = 0;
  auVar31._8_8_ = lVar23;
  auVar31._0_8_ = lVar23;
  auVar31._16_8_ = lVar23;
  auVar31._24_8_ = lVar23;
  if (uVar14 != 0) {
    if (0xf < uVar14) {
      local_80 = 0x100000000;
      uStack_78 = 0x300000002;
      uStack_70 = 0x500000004;
      uStack_68 = 0x700000006;
      auVar11._8_8_ = 0x300000002;
      auVar11._0_8_ = 0x100000000;
      uVar21 = 8;
      do {
        uVar22 = uVar21 - 4;
        iVar17 = (int)uVar19;
        auVar25._4_4_ = iVar17;
        auVar25._0_4_ = iVar17;
        auVar25._8_4_ = iVar17;
        auVar25._12_4_ = iVar17;
        auVar25 = vpaddd_avx(auVar25,auVar11);
        auVar25 = vpmulld_avx(auVar25,auVar30);
        auVar29 = vpmovzxdq_avx2(auVar25);
        auVar29 = vpsllq_avx2(auVar29,2);
        auVar29 = vpaddq_avx2(auVar29,auVar31);
        *(undefined1 (*) [32])(lVar20 + uVar19 * 8) = auVar29;
        auVar28._4_4_ = uVar22;
        auVar28._0_4_ = uVar22;
        auVar28._8_4_ = uVar22;
        auVar28._12_4_ = uVar22;
        auVar25 = vpaddd_avx(auVar28,auVar11);
        auVar25 = vpmulld_avx(auVar25,auVar30);
        auVar29 = vpmovzxdq_avx2(auVar25);
        auVar29 = vpsllq_avx2(auVar29,2);
        auVar29 = vpaddq_avx2(auVar29,auVar31);
        *(undefined1 (*) [32])(lVar20 + (ulonglong)uVar22 * 8) = auVar29;
        uVar18 = iVar17 + 0x10;
        uVar19 = (ulonglong)uVar18;
        auVar26._4_4_ = uVar21;
        auVar26._0_4_ = uVar21;
        auVar26._8_4_ = uVar21;
        auVar26._12_4_ = uVar21;
        auVar25 = vpaddd_avx(auVar26,auVar11);
        auVar25 = vpmulld_avx(auVar25,auVar30);
        auVar29 = vpmovzxdq_avx2(auVar25);
        auVar29 = vpsllq_avx2(auVar29,2);
        auVar29 = vpaddq_avx2(auVar29,auVar31);
        *(undefined1 (*) [32])(lVar20 + (ulonglong)uVar21 * 8) = auVar29;
        uVar22 = uVar21 + 4;
        uVar21 = uVar21 + 0x10;
        auVar27._4_4_ = uVar22;
        auVar27._0_4_ = uVar22;
        auVar27._8_4_ = uVar22;
        auVar27._12_4_ = uVar22;
        auVar25 = vpaddd_avx(auVar27,auVar11);
        auVar25 = vpmulld_avx(auVar25,auVar30);
        auVar29 = vpmovzxdq_avx2(auVar25);
        auVar29 = vpsllq_avx2(auVar29,2);
        auVar29 = vpaddq_avx2(auVar29,auVar31);
        *(undefined1 (*) [32])(lVar20 + (ulonglong)uVar22 * 8) = auVar29;
      } while (uVar18 < (uVar14 & 0xfffffff0));
      if (uVar14 <= uVar18) goto LAB_14554cfd8;
    }
    plVar16 = (longlong *)(lVar20 + uVar19 * 8);
    do {
      iVar17 = (int)uVar19;
      uVar21 = iVar17 + 1;
      uVar19 = (ulonglong)uVar21;
      *plVar16 = lVar23 + (ulonglong)(iVar17 * CONCAT22(0,uVar5)) * 4;
      plVar16 = plVar16 + 1;
    } while (uVar21 < uVar14);
  }
LAB_14554cfd8:
  plVar16 = local_98;
  lVar23 = local_a0;
  *(uint *)((longlong)auStack_e0 + lVar24 + lVar10 + lVar9 + lVar8 + lVar7 + 0x10) = uVar14;
  *(uint *)((longlong)auStack_e0 + lVar24 + lVar10 + lVar9 + lVar8 + lVar7 + 8) = (uint)bVar4;
  *(uint *)((longlong)auStack_e0 + lVar24 + lVar10 + lVar9 + lVar8 + lVar7) = param_7;
  *(longlong *)((longlong)&lStack_e8 + lVar24 + lVar10 + lVar9 + lVar8 + lVar7) = lVar6;
  lVar6 = local_a8;
  *(undefined8 *)((longlong)auStack_110 + lVar24 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14554d005;
  FUN_14554d280(plVar16,lVar20,lVar23,lVar6);
  if ((ushort)param_7 <= *(ushort *)((longlong)param_2 + 0x12)) {
    param_7 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  }
  *(short *)((longlong)param_2 + 0x12) = (short)param_7;
  return;
}



// FUNCTION 14554d040 FUN_14554d040 body=496 status=ok
// SIG undefined FUN_14554d040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_14554d040(undefined8 param_1,longlong *param_2,byte param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined8 auStack_d0 [5];
  longlong lStack_a8;
  uint auStack_a0 [6];
  longlong local_88 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_88[3] = *param_4;
  local_88[2] = param_5;
  local_88[1] = param_6;
  uVar9 = (ulonglong)param_3 * 8 + 0xf;
  if (uVar9 <= (ulonglong)param_3 * 8) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14554d0ad;
  uVar3 = *(ushort *)(param_2 + 2);
  lVar5 = -(uVar9 & 0xfffffffffffffff0);
  lVar4 = *param_2;
  uVar9 = 0;
  lVar2 = (longlong)local_88 + lVar5;
  auVar18._4_2_ = uVar3;
  auVar18._0_4_ = CONCAT22(0,uVar3);
  auVar18._6_2_ = 0;
  auVar18._8_2_ = uVar3;
  auVar18._10_2_ = 0;
  auVar18._12_2_ = uVar3;
  auVar18._14_2_ = 0;
  auVar19._8_8_ = lVar4;
  auVar19._0_8_ = lVar4;
  auVar19._16_8_ = lVar4;
  auVar19._24_8_ = lVar4;
  uVar12 = (uint)param_3;
  uStack_68 = param_1;
  if (param_3 != 0) {
    if (0xf < param_3) {
      uStack_60 = 0x100000000;
      uStack_58 = 0x300000002;
      uStack_50 = 0x500000004;
      uStack_48 = 0x700000006;
      auVar6._8_8_ = 0x300000002;
      auVar6._0_8_ = 0x100000000;
      uVar10 = 8;
      do {
        uVar1 = uVar10 - 4;
        iVar7 = (int)uVar9;
        auVar13._4_4_ = iVar7;
        auVar13._0_4_ = iVar7;
        auVar13._8_4_ = iVar7;
        auVar13._12_4_ = iVar7;
        auVar13 = vpaddd_avx(auVar13,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + uVar9 * 8) = auVar17;
        auVar16._4_4_ = uVar1;
        auVar16._0_4_ = uVar1;
        auVar16._8_4_ = uVar1;
        auVar16._12_4_ = uVar1;
        auVar13 = vpaddd_avx(auVar16,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + (ulonglong)uVar1 * 8) = auVar17;
        uVar8 = iVar7 + 0x10;
        uVar9 = (ulonglong)uVar8;
        auVar14._4_4_ = uVar10;
        auVar14._0_4_ = uVar10;
        auVar14._8_4_ = uVar10;
        auVar14._12_4_ = uVar10;
        auVar13 = vpaddd_avx(auVar14,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + (ulonglong)uVar10 * 8) = auVar17;
        uVar1 = uVar10 + 4;
        uVar10 = uVar10 + 0x10;
        auVar15._4_4_ = uVar1;
        auVar15._0_4_ = uVar1;
        auVar15._8_4_ = uVar1;
        auVar15._12_4_ = uVar1;
        auVar13 = vpaddd_avx(auVar15,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + (ulonglong)uVar1 * 8) = auVar17;
      } while (uVar8 < (uVar12 & 0xfffffff0));
      if (uVar12 <= uVar8) goto LAB_14554d1e9;
    }
    plVar11 = (longlong *)(lVar2 + uVar9 * 8);
    do {
      iVar7 = (int)uVar9;
      uVar10 = iVar7 + 1;
      uVar9 = (ulonglong)uVar10;
      *plVar11 = lVar4 + (ulonglong)(iVar7 * CONCAT22(0,uVar3)) * 4;
      plVar11 = plVar11 + 1;
    } while (uVar10 < uVar12);
  }
LAB_14554d1e9:
  *(uint *)((longlong)auStack_a0 + lVar5 + 0x10) = uVar12;
  *(undefined4 *)((longlong)auStack_a0 + lVar5 + 8) = 1;
  *(undefined4 *)((longlong)auStack_a0 + lVar5) = param_8;
  *(longlong **)((longlong)&lStack_a8 + lVar5) = local_88 + 1;
  *(undefined8 *)((longlong)auStack_d0 + lVar5) = 0x14554d221;
  FUN_14554d280(&uStack_68,lVar2,local_88 + 3,local_88 + 2);
  return;
}



// FUNCTION 14554d280 FUN_14554d280 body=670 status=ok
// SIG undefined FUN_14554d280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14554d280(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint param_6,uint param_7,uint param_8)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 in_ZMM6 [64];
  undefined8 auStack_e0 [5];
  uint auStack_b8 [4];
  short local_a8 [4];
  uint local_a0;
  ulonglong local_98;
  longlong local_90;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  uVar18 = param_8 + 7 & 0xfffffff8;
  uVar16 = (ulonglong)uVar18 * 4;
  local_a0 = uVar18;
  uVar14 = uVar16 + 0xf;
  if (uVar14 <= uVar16) {
    uVar14 = 0xffffffffffffff0;
  }
  auStack_e0[0] = 0x14554d2f2;
  lVar10 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar16 + 0xf;
  if (uVar14 <= uVar16) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar10) = 0x14554d30f;
  lVar11 = -(uVar14 & 0xfffffffffffffff0);
  fVar20 = 1.0 / (float)param_6;
  uVar14 = uVar16 + 0xf;
  lVar19 = (longlong)local_a8 + lVar11 + lVar10;
  local_90 = lVar19;
  local_80 = fVar20;
  fStack_7c = fVar20;
  fStack_78 = fVar20;
  fStack_74 = fVar20;
  fStack_70 = fVar20;
  fStack_6c = fVar20;
  fStack_68 = fVar20;
  fStack_64 = fVar20;
  if (uVar14 <= uVar16) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x14554d35e;
  lVar12 = -(uVar14 & 0xfffffffffffffff0);
  local_98 = (ulonglong)param_7;
  lVar13 = lVar12 + lVar11 + lVar10 + -0xa8;
  if (param_7 != 0) {
    param_3 = param_3 - (longlong)param_1;
    param_4 = param_4 - (longlong)param_1;
    param_5 = param_5 - (longlong)param_1;
    fVar21 = fVar20;
    fVar22 = fVar20;
    fVar23 = fVar20;
    fVar24 = fVar20;
    fVar25 = fVar20;
    fVar26 = fVar20;
    fVar27 = fVar20;
    do {
      uVar16 = 0;
      uVar4 = *param_1;
      fVar2 = *(float *)((longlong)param_1 + param_3);
      uVar3 = *(undefined4 *)(param_3 + 4 + (longlong)param_1);
      auVar29._4_4_ = uVar3;
      auVar29._0_4_ = uVar3;
      auVar29._8_4_ = uVar3;
      auVar29._12_4_ = uVar3;
      auVar29._16_4_ = uVar3;
      auVar29._20_4_ = uVar3;
      auVar29._24_4_ = uVar3;
      auVar29._28_4_ = uVar3;
      lVar5 = *(longlong *)(param_4 + (longlong)param_1);
      lVar6 = *(longlong *)(param_5 + (longlong)param_1);
      uVar14 = uVar16;
      if (uVar18 != 0) {
        do {
          uVar15 = (int)uVar14 + 8;
          pfVar1 = (float *)(lVar5 + uVar14 * 4);
          auVar28._0_4_ = fVar2 * *pfVar1;
          auVar28._4_4_ = fVar2 * pfVar1[1];
          auVar28._8_4_ = fVar2 * pfVar1[2];
          auVar28._12_4_ = fVar2 * pfVar1[3];
          auVar28._16_4_ = fVar2 * pfVar1[4];
          auVar28._20_4_ = fVar2 * pfVar1[5];
          auVar28._24_4_ = fVar2 * pfVar1[6];
          auVar28._28_4_ = fVar2 * pfVar1[7];
          auVar9 = vfmsub231ps_fma(auVar28,auVar29,*(undefined1 (*) [32])(lVar6 + uVar14 * 4));
          *(undefined1 (*) [32])((longlong)local_a8 + uVar14 * 4 + lVar10) = auVar28;
          pfVar1 = (float *)(lVar19 + uVar14 * 4);
          *pfVar1 = auVar9._0_4_ * fVar20;
          pfVar1[1] = auVar9._4_4_ * fVar21;
          pfVar1[2] = auVar9._8_4_ * fVar22;
          pfVar1[3] = auVar9._12_4_ * fVar23;
          pfVar1[4] = fVar24 * 0.0;
          pfVar1[5] = fVar25 * 0.0;
          pfVar1[6] = fVar26 * 0.0;
          pfVar1[7] = fVar27 * 0.0;
          fVar27 = fStack_64;
          fVar26 = fStack_68;
          fVar25 = fStack_6c;
          fVar24 = fStack_70;
          fVar23 = fStack_74;
          fVar22 = fStack_78;
          fVar21 = fStack_7c;
          fVar20 = local_80;
          auVar28 = vandnps_avx(_DAT_149931820,auVar28);
          auVar8 = vcmpps_avx(auVar28,_DAT_149da9ca0,0xe);
          auVar28 = vandnps_avx(_DAT_149931820,ZEXT1632(auVar9));
          auVar28 = vcmpps_avx(auVar28,_DAT_149da9ca0,0xe);
          auVar28 = vpblendw_avx2(auVar8,auVar28,0x55);
          *(undefined1 (*) [32])((longlong)local_a8 + uVar14 * 4 + lVar13 + 0xa8) = auVar28;
          uVar14 = (ulonglong)uVar15;
        } while (uVar15 < uVar18);
      }
      uVar17 = 0;
      if (param_8 != 0) {
        do {
          uVar14 = (ulonglong)(uint)((int)uVar16 * 2);
          if (*(short *)((longlong)local_a8 + uVar14 * 2 + lVar13 + 0xa8) == 0) {
            if (*(short *)((longlong)local_a8 + uVar14 * 2 + lVar12 + lVar11 + lVar10 + 2) != 0) {
              uVar7 = *(undefined8 *)(param_2 + (ulonglong)uVar17 * 8);
              *(undefined8 *)((longlong)auStack_e0 + lVar12 + lVar11 + lVar10) = 0x14554d49f;
              FUN_14554e4b0(uVar7,uVar4,lVar19,param_6);
              lVar19 = local_90;
            }
          }
          else {
            *(uint *)((longlong)auStack_b8 + lVar12 + lVar11 + lVar10) = param_6;
            uVar7 = *(undefined8 *)(param_2 + (ulonglong)uVar17 * 8);
            *(undefined8 *)((longlong)auStack_e0 + lVar12 + lVar11 + lVar10) = 0x14554d47b;
            FUN_14554e560(uVar7,uVar4);
            lVar19 = local_90;
          }
          uVar17 = uVar17 + 1;
          uVar16 = (ulonglong)uVar17;
        } while (uVar17 < param_8);
      }
      param_1 = param_1 + 1;
      local_98 = local_98 - 1;
      uVar18 = local_a0;
      fVar20 = local_80;
      fVar21 = fStack_7c;
      fVar22 = fStack_78;
      fVar23 = fStack_74;
      fVar24 = fStack_70;
      fVar25 = fStack_6c;
      fVar26 = fStack_68;
      fVar27 = fStack_64;
    } while (local_98 != 0);
  }
  return;
}



// FUNCTION 14554d520 FUN_14554d520 body=353 status=ok
// SIG undefined FUN_14554d520(void)

void FUN_14554d520(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_6;
  while (7 < uVar1) {
    FUN_14554f310(param_1,param_2,param_3,param_4,param_5);
    iVar2 = iVar2 + 8;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = param_4 + 0x40;
    uVar1 = param_6 - iVar2;
  }
  switch(param_6 - iVar2) {
  case 1:
    FUN_14554f050(param_1,param_2,param_3,param_4,param_5);
    break;
  case 2:
    FUN_14554e6b0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 3:
    FUN_145550fb0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 4:
    FUN_145550af0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 5:
    FUN_1455505b0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 6:
    FUN_14554ffe0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 7:
    FUN_14554f990(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 14554d6a0 FUN_14554d6a0 body=549 status=ok
// SIG undefined FUN_14554d6a0(void)

void FUN_14554d6a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5,uint param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  
  uVar2 = param_6;
  if (param_6 != 1) {
    uVar3 = 0;
    param_6 = 0;
    if (param_7 != 0) {
      do {
        uVar4 = param_7 - (int)uVar3;
        if (8 < uVar4) {
          uVar4 = 8;
        }
        memcpy(local_c8,(void *)(param_1 + uVar3 * 8),(ulonglong)(uVar4 * 8));
        memcpy(local_88,(void *)(param_2 + uVar3 * 8),(ulonglong)(uVar4 * 8));
        uVar5 = 0;
        if (uVar2 != 0) {
          puVar6 = param_5;
          do {
            uVar1 = *puVar6;
            auVar8 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
            FUN_14554d520(local_c8,local_88,param_3 + (uVar5 * param_7 + uVar3) * 8,
                          param_4 + uVar3 * 8,uVar1,uVar4);
            auVar7 = vpmovzxdq_avx2(auVar8._0_16_);
            auVar7 = vpsllq_avx2(auVar7,2);
            local_c8 = vpaddq_avx2(auVar7,local_c8);
            local_88 = vpaddq_avx2(auVar7,local_88);
            local_a8 = vpaddq_avx2(auVar7,local_a8);
            local_68 = vpaddq_avx2(auVar7,local_68);
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar5 < uVar2);
          uVar3 = (ulonglong)param_6;
        }
        param_6 = (int)uVar3 + 8;
        uVar3 = (ulonglong)param_6;
      } while (param_6 < param_7);
    }
    return;
  }
  FUN_14554d520(param_1,param_2,param_3,param_4,*param_5,param_7);
  return;
}



// FUNCTION 14554d8d0 FUN_14554d8d0 body=908 status=ok
// SIG undefined FUN_14554d8d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14554d8d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined4 *param_8,
                  uint param_9,uint param_10,undefined4 param_11)

{
  void *_Src;
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [32];
  undefined1 auVar16 [64];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined8 auStack_1a0 [5];
  longlong lStack_178;
  uint auStack_170 [6];
  undefined1 local_158 [24];
  uint local_140;
  longlong local_138;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined8 local_a0 [4];
  undefined1 local_80 [32];
  
  uVar6 = 0;
  local_140 = 0;
  if (0xf < param_9) {
    auVar14 = ZEXT1664((undefined1  [16])0x0);
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar15 = vpaddd_avx2(auVar14._0_32_,*(undefined1 (*) [32])(param_8 + uVar6));
      auVar14 = ZEXT3264(auVar15);
      iVar8 = (int)uVar6;
      uVar11 = iVar8 + 0x10;
      uVar6 = (ulonglong)uVar11;
      auVar17 = vpaddd_avx2(auVar16._0_32_,*(undefined1 (*) [32])(param_8 + (iVar8 + 8)));
      auVar16 = ZEXT3264(auVar17);
    } while (uVar11 < (param_9 & 0xfffffff0));
    auVar15 = vpaddd_avx2(auVar17,auVar15);
    auVar15 = vphaddd_avx2(auVar15,auVar15);
    auVar15 = vphaddd_avx2(auVar15,auVar15);
    auVar18 = vpaddd_avx(auVar15._0_16_,auVar15._16_16_);
    local_140 = auVar18._0_4_;
  }
  iVar8 = 0;
  iVar9 = 0;
  uVar11 = (uint)uVar6;
  if (param_9 <= uVar11) goto LAB_14554d9dd;
  if (param_9 - uVar11 < 2) {
LAB_14554d9c7:
    local_140 = local_140 + param_8[uVar6];
  }
  else {
    uVar5 = ((param_9 - uVar11) - 2 >> 1) + 1;
    uVar10 = (ulonglong)uVar5;
    do {
      iVar8 = iVar8 + param_8[uVar6];
      iVar9 = iVar9 + param_8[uVar6 + 1];
      uVar6 = uVar6 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (uVar11 + uVar5 * 2 < param_9) goto LAB_14554d9c7;
  }
  local_140 = local_140 + iVar9 + iVar8;
LAB_14554d9dd:
  auVar18._4_4_ = local_140;
  auVar18._0_4_ = local_140;
  auVar18._8_4_ = local_140;
  auVar18._12_4_ = local_140;
  uVar6 = (ulonglong)local_140 * 0x20 + 0xf;
  if (uVar6 <= (ulonglong)local_140 * 0x20) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x14554da0d;
  lVar3 = -(uVar6 & 0xfffffffffffffff0);
  pauVar7 = (undefined1 (*) [32])local_a0;
  local_120._8_8_ = 0x300000002;
  local_120._0_8_ = 0x100000000;
  local_120._16_8_ = 0x500000004;
  local_120._24_8_ = 0x700000006;
  puVar1 = local_158 + lVar3;
  auVar15._8_8_ = puVar1;
  auVar15._0_8_ = puVar1;
  auVar15._16_8_ = puVar1;
  auVar15._24_8_ = puVar1;
  uVar11 = 0;
  do {
    auVar13._4_4_ = uVar11;
    auVar13._0_4_ = uVar11;
    auVar13._8_4_ = uVar11;
    auVar13._12_4_ = uVar11;
    auVar13 = vpaddd_avx(auVar13,local_120._0_16_);
    auVar13 = vpmulld_avx(auVar13,auVar18);
    auVar17 = vpmovzxdq_avx2(auVar13);
    auVar17 = vpsllq_avx2(auVar17,2);
    auVar17 = vpaddq_avx2(auVar17,auVar15);
    uVar11 = uVar11 + 4;
    *pauVar7 = auVar17;
    pauVar7 = pauVar7 + 1;
  } while (uVar11 < 8);
  uVar6 = 0;
  if (param_10 != 0) {
    do {
      uVar11 = param_10 - (int)uVar6;
      if (8 < uVar11) {
        uVar11 = 8;
      }
      _Src = (void *)(param_1 + uVar6 * 8);
      if (param_9 == 1) {
        uVar2 = *param_8;
        *(uint *)((longlong)auStack_170 + lVar3) = uVar11;
        *(undefined4 *)((longlong)&lStack_178 + lVar3) = uVar2;
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554dad0;
        FUN_14554d520(_Src,local_a0,param_2 + uVar6 * 8,param_3 + uVar6 * 8);
      }
      else {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554daec;
        memcpy(local_e0,_Src,(ulonglong)(uVar11 * 8));
        uVar5 = 0;
        local_120._8_8_ = local_a0[1];
        local_120._0_8_ = local_a0[0];
        local_120._16_8_ = local_a0[2];
        local_120._24_8_ = local_a0[3];
        local_100 = local_80;
        if (param_9 != 0) {
          local_138 = param_3 + uVar6 * 8;
          puVar12 = param_8;
          do {
            lVar4 = local_138;
            uVar2 = *puVar12;
            *(uint *)((longlong)auStack_170 + lVar3) = uVar11;
            *(undefined4 *)((longlong)&lStack_178 + lVar3) = uVar2;
            auVar14 = ZEXT1664(CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))));
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554db6d;
            FUN_14554d520(local_e0,local_120,param_2 + (uVar5 * param_10 + uVar6) * 8,lVar4);
            puVar12 = puVar12 + 1;
            auVar15 = vpmovzxdq_avx2(auVar14._0_16_);
            auVar15 = vpsllq_avx2(auVar15,2);
            local_e0 = vpaddq_avx2(auVar15,local_e0);
            local_120 = vpaddq_avx2(auVar15,local_120);
            local_c0 = vpaddq_avx2(auVar15,local_c0);
            local_100 = vpaddq_avx2(auVar15,local_100);
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_9);
        }
      }
      *(undefined4 *)((longlong)auStack_170 + lVar3 + 0x10) = param_11;
      uVar5 = local_140;
      *(uint *)((longlong)auStack_170 + lVar3 + 8) = uVar11;
      *(uint *)((longlong)auStack_170 + lVar3) = uVar5;
      *(ulonglong *)((longlong)&lStack_178 + lVar3) = param_7 + uVar6 * 8;
      *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554dc1c;
      FUN_14554d280(local_a0,param_4,param_5 + uVar6 * 8,param_6 + uVar6 * 8);
      uVar11 = (int)uVar6 + 8;
      uVar6 = (ulonglong)uVar11;
    } while (uVar11 < param_10);
  }
  return;
}



// FUNCTION 14554dc60 FUN_14554dc60 body=495 status=ok
// SIG undefined FUN_14554dc60(void)

void FUN_14554dc60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined4 param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_8;
  while (7 < uVar1) {
    FUN_145551450(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    iVar2 = iVar2 + 8;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = param_4 + 0x40;
    param_5 = param_5 + 0x40;
    param_6 = param_6 + 0x40;
    uVar1 = param_8 - iVar2;
  }
  switch(param_8 - iVar2) {
  case 1:
    FUN_14554f050(param_1,param_2,param_3,param_4,param_7);
    FUN_14554f050(param_2,param_2,param_5,param_6,param_7);
    break;
  case 2:
    FUN_14554e6b0(param_1,param_2,param_3,param_4,param_7);
    FUN_14554e6b0(param_2,param_2,param_5,param_6,param_7);
    break;
  case 3:
    FUN_1455540b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    break;
  case 4:
    FUN_145553910(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    break;
  case 5:
    FUN_1455530d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    break;
  case 6:
    FUN_1455527e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    break;
  case 7:
    FUN_145551e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 14554de70 FUN_14554de70 body=605 status=ok
// SIG undefined FUN_14554de70(void)

void FUN_14554de70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined4 *param_7,uint param_8,uint param_9)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [64];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  
  uVar2 = param_8;
  if (param_8 != 1) {
    uVar5 = 0;
    param_8 = 0;
    if (param_9 != 0) {
      do {
        uVar4 = param_9 - (int)uVar5;
        if (8 < uVar4) {
          uVar4 = 8;
        }
        memcpy(local_c8,(void *)(param_1 + uVar5 * 8),(ulonglong)(uVar4 * 8));
        memcpy(local_88,(void *)(param_2 + uVar5 * 8),(ulonglong)(uVar4 * 8));
        uVar6 = 0;
        if (uVar2 != 0) {
          puVar7 = param_7;
          do {
            uVar1 = *puVar7;
            lVar3 = uVar6 * param_9 + uVar5;
            auVar9 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
            FUN_14554dc60(local_c8,local_88,param_3 + lVar3 * 8,param_4 + uVar5 * 8,
                          param_5 + lVar3 * 8,param_6 + uVar5 * 8,uVar1,uVar4);
            puVar7 = puVar7 + 1;
            auVar8 = vpmovzxdq_avx2(auVar9._0_16_);
            auVar8 = vpsllq_avx2(auVar8,2);
            local_c8 = vpaddq_avx2(auVar8,local_c8);
            local_88 = vpaddq_avx2(auVar8,local_88);
            local_a8 = vpaddq_avx2(auVar8,local_a8);
            local_68 = vpaddq_avx2(auVar8,local_68);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar2);
          uVar5 = (ulonglong)param_8;
        }
        param_8 = (int)uVar5 + 8;
        uVar5 = (ulonglong)param_8;
      } while (param_8 < param_9);
    }
    return;
  }
  FUN_14554dc60(param_1,param_2,param_3,param_4,param_5,param_6,*param_7,param_9);
  return;
}



// FUNCTION 14554e0d0 FUN_14554e0d0 body=986 status=ok
// SIG undefined FUN_14554e0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14554e0d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,longlong param_8,
                  longlong param_9,undefined4 *param_10,uint param_11,uint param_12,
                  undefined4 param_13)

{
  void *_Src;
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [32];
  undefined1 auVar18 [64];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined8 auStack_1a0 [5];
  longlong lStack_178;
  uint auStack_170 [6];
  undefined1 local_158 [24];
  uint local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined8 local_a0 [4];
  undefined1 local_80 [32];
  
  uVar7 = 0;
  local_140 = 0;
  if (0xf < param_11) {
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    auVar18 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar17 = vpaddd_avx2(auVar16._0_32_,*(undefined1 (*) [32])(param_10 + uVar7));
      auVar16 = ZEXT3264(auVar17);
      iVar10 = (int)uVar7;
      uVar13 = iVar10 + 0x10;
      uVar7 = (ulonglong)uVar13;
      auVar19 = vpaddd_avx2(auVar18._0_32_,*(undefined1 (*) [32])(param_10 + (iVar10 + 8)));
      auVar18 = ZEXT3264(auVar19);
    } while (uVar13 < (param_11 & 0xfffffff0));
    auVar17 = vpaddd_avx2(auVar19,auVar17);
    auVar17 = vphaddd_avx2(auVar17,auVar17);
    auVar17 = vphaddd_avx2(auVar17,auVar17);
    auVar20 = vpaddd_avx(auVar17._0_16_,auVar17._16_16_);
    local_140 = auVar20._0_4_;
  }
  iVar10 = 0;
  iVar11 = 0;
  uVar13 = (uint)uVar7;
  if (param_11 <= uVar13) goto LAB_14554e1dc;
  if (param_11 - uVar13 < 2) {
LAB_14554e1c6:
    local_140 = local_140 + param_10[uVar7];
  }
  else {
    uVar6 = ((param_11 - uVar13) - 2 >> 1) + 1;
    uVar12 = (ulonglong)uVar6;
    do {
      iVar10 = iVar10 + param_10[uVar7];
      iVar11 = iVar11 + param_10[uVar7 + 1];
      uVar7 = uVar7 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (uVar13 + uVar6 * 2 < param_11) goto LAB_14554e1c6;
  }
  local_140 = local_140 + iVar11 + iVar10;
LAB_14554e1dc:
  auVar20._4_4_ = local_140;
  auVar20._0_4_ = local_140;
  auVar20._8_4_ = local_140;
  auVar20._12_4_ = local_140;
  uVar7 = (ulonglong)local_140 * 0x20 + 0xf;
  if (uVar7 <= (ulonglong)local_140 * 0x20) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x14554e20c;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  pauVar8 = (undefined1 (*) [32])local_a0;
  local_120._8_8_ = 0x300000002;
  local_120._0_8_ = 0x100000000;
  local_120._16_8_ = 0x500000004;
  local_120._24_8_ = 0x700000006;
  puVar1 = local_158 + lVar3;
  auVar17._8_8_ = puVar1;
  auVar17._0_8_ = puVar1;
  auVar17._16_8_ = puVar1;
  auVar17._24_8_ = puVar1;
  uVar13 = 0;
  do {
    auVar15._4_4_ = uVar13;
    auVar15._0_4_ = uVar13;
    auVar15._8_4_ = uVar13;
    auVar15._12_4_ = uVar13;
    auVar15 = vpaddd_avx(auVar15,local_120._0_16_);
    auVar15 = vpmulld_avx(auVar15,auVar20);
    auVar19 = vpmovzxdq_avx2(auVar15);
    auVar19 = vpsllq_avx2(auVar19,2);
    auVar19 = vpaddq_avx2(auVar19,auVar17);
    uVar13 = uVar13 + 4;
    *pauVar8 = auVar19;
    pauVar8 = pauVar8 + 1;
  } while (uVar13 < 8);
  uVar7 = 0;
  if (param_12 != 0) {
    do {
      uVar13 = param_12 - (int)uVar7;
      if (8 < uVar13) {
        uVar13 = 8;
      }
      _Src = (void *)(param_1 + uVar7 * 8);
      if (param_11 == 1) {
        *(uint *)((longlong)auStack_170 + lVar3 + 0x10) = uVar13;
        *(undefined4 *)((longlong)auStack_170 + lVar3 + 8) = *param_10;
        *(ulonglong *)((longlong)auStack_170 + lVar3) = param_5 + uVar7 * 8;
        *(ulonglong *)((longlong)&lStack_178 + lVar3) = param_4 + uVar7 * 8;
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e2ef;
        FUN_14554dc60(_Src,local_a0,param_2 + uVar7 * 8,param_3 + uVar7 * 8);
      }
      else {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e30b;
        memcpy(local_e0,_Src,(ulonglong)(uVar13 * 8));
        uVar6 = 0;
        local_120._8_8_ = local_a0[1];
        local_120._0_8_ = local_a0[0];
        local_120._16_8_ = local_a0[2];
        local_120._24_8_ = local_a0[3];
        local_100 = local_80;
        if (param_11 != 0) {
          local_138 = param_5 + uVar7 * 8;
          local_130 = param_3 + uVar7 * 8;
          puVar14 = param_10;
          do {
            lVar5 = local_130;
            lVar4 = local_138;
            uVar2 = *puVar14;
            *(uint *)((longlong)auStack_170 + lVar3 + 0x10) = uVar13;
            lVar9 = uVar6 * param_12 + uVar7;
            *(undefined4 *)((longlong)auStack_170 + lVar3 + 8) = uVar2;
            *(longlong *)((longlong)auStack_170 + lVar3) = lVar4;
            *(longlong *)((longlong)&lStack_178 + lVar3) = param_4 + lVar9 * 8;
            auVar16 = ZEXT1664(CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))));
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e3b6;
            FUN_14554dc60(local_e0,local_120,param_2 + lVar9 * 8,lVar5);
            puVar14 = puVar14 + 1;
            uVar6 = uVar6 + 1;
            auVar17 = vpmovzxdq_avx2(auVar16._0_16_);
            auVar17 = vpsllq_avx2(auVar17,2);
            local_e0 = vpaddq_avx2(auVar17,local_e0);
            local_120 = vpaddq_avx2(auVar17,local_120);
            local_c0 = vpaddq_avx2(auVar17,local_c0);
            local_100 = vpaddq_avx2(auVar17,local_100);
          } while (uVar6 < param_11);
        }
      }
      *(undefined4 *)((longlong)auStack_170 + lVar3 + 0x10) = param_13;
      uVar6 = local_140;
      *(uint *)((longlong)auStack_170 + lVar3 + 8) = uVar13;
      *(uint *)((longlong)auStack_170 + lVar3) = uVar6;
      *(ulonglong *)((longlong)&lStack_178 + lVar3) = param_9 + uVar7 * 8;
      *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e46a;
      FUN_14554d280(local_a0,param_6,param_7 + uVar7 * 8,param_8 + uVar7 * 8);
      uVar13 = (int)uVar7 + 8;
      uVar7 = (ulonglong)uVar13;
    } while (uVar13 < param_12);
  }
  return;
}



// FUNCTION 14554e4b0 FUN_14554e4b0 body=162 status=ok
// SIG undefined FUN_14554e4b0(void)

void FUN_14554e4b0(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [32];
  
  uVar6 = 0;
  auVar7._4_4_ = param_3;
  auVar7._0_4_ = param_3;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = param_3;
  auVar7._16_4_ = param_3;
  auVar7._20_4_ = param_3;
  auVar7._24_4_ = param_3;
  auVar7._28_4_ = param_3;
  if ((param_4 & 0xffffffe0) != 0) {
    do {
      auVar1 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + uVar6 * 4),auVar7,
                               *(undefined1 (*) [32])(param_1 + uVar6 * 4));
      auVar2 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + 0x20 + uVar6 * 4),auVar7,
                               *(undefined1 (*) [32])(param_1 + 0x20 + uVar6 * 4));
      auVar3 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + 0x40 + uVar6 * 4),auVar7,
                               *(undefined1 (*) [32])(param_1 + 0x40 + uVar6 * 4));
      auVar4 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + 0x60 + uVar6 * 4),auVar7,
                               *(undefined1 (*) [32])(param_1 + 0x60 + uVar6 * 4));
      *(undefined1 (*) [32])(param_1 + uVar6 * 4) = ZEXT1632(auVar1);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar6 * 4) = ZEXT1632(auVar2);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar6 * 4) = ZEXT1632(auVar3);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar6 * 4) = ZEXT1632(auVar4);
      uVar5 = (int)uVar6 + 0x20;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < (param_4 & 0xffffffe0));
  }
  uVar5 = (uint)uVar6;
  while (uVar5 < param_4) {
    auVar1 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + uVar6 * 4),auVar7,
                             *(undefined1 (*) [32])(param_1 + uVar6 * 4));
    *(undefined1 (*) [32])(param_1 + uVar6 * 4) = ZEXT1632(auVar1);
    uVar5 = (int)uVar6 + 8;
    uVar6 = (ulonglong)uVar5;
  }
  return;
}



// FUNCTION 14554e560 FUN_14554e560 body=325 status=ok
// SIG undefined FUN_14554e560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14554e560(longlong param_1,longlong param_2,undefined4 param_3,float param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  auVar5 = _DAT_149da9ce0;
  auVar9._4_4_ = param_4;
  auVar9._0_4_ = param_4;
  auVar9._8_4_ = param_4;
  auVar9._12_4_ = param_4;
  auVar9._16_4_ = param_4;
  auVar9._20_4_ = param_4;
  auVar9._24_4_ = param_4;
  auVar9._28_4_ = param_4;
  fVar14 = param_4 * 32.0;
  fVar15 = param_4 * 32.0;
  fVar16 = param_4 * 32.0;
  fVar17 = param_4 * 32.0;
  fVar18 = param_4 * 32.0;
  fVar19 = param_4 * 32.0;
  fVar20 = param_4 * 32.0;
  param_4 = param_4 * 32.0;
  auVar10._4_4_ = param_3;
  auVar10._0_4_ = param_3;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = param_3;
  auVar10._16_4_ = param_3;
  auVar10._20_4_ = param_3;
  auVar10._24_4_ = param_3;
  auVar10._28_4_ = param_3;
  auVar4 = vfmadd231ps_fma(auVar10,auVar9,_DAT_149da9cc0);
  auVar8 = ZEXT1664(auVar4);
  auVar4 = vfmadd231ps_fma(auVar10,auVar9,_DAT_149da9d00);
  auVar12 = ZEXT1664(auVar4);
  auVar4 = vfmadd231ps_fma(auVar10,auVar9,_DAT_149da9d20);
  auVar13 = ZEXT1664(auVar4);
  auVar4 = vfmadd231ps_fma(auVar10,auVar9,_DAT_149da9d40);
  auVar11 = ZEXT1664(auVar4);
  uVar7 = 0;
  if ((param_5 & 0xffffffe0) != 0) {
    do {
      auVar4 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + uVar7 * 4),auVar8._0_32_,
                               *(undefined1 (*) [32])(param_1 + uVar7 * 4));
      auVar1 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 4),auVar12._0_32_,
                               *(undefined1 (*) [32])(param_1 + 0x20 + uVar7 * 4));
      auVar2 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 4),auVar13._0_32_,
                               *(undefined1 (*) [32])(param_1 + 0x40 + uVar7 * 4));
      auVar3 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + 0x60 + uVar7 * 4),auVar11._0_32_,
                               *(undefined1 (*) [32])(param_1 + 0x60 + uVar7 * 4));
      *(undefined1 (*) [32])(param_1 + uVar7 * 4) = ZEXT1632(auVar4);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar7 * 4) = ZEXT1632(auVar1);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar7 * 4) = ZEXT1632(auVar2);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar7 * 4) = ZEXT1632(auVar3);
      uVar6 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uVar6;
      auVar8 = ZEXT3264(CONCAT428(auVar8._28_4_ + param_4,
                                  CONCAT424(auVar8._24_4_ + fVar20,
                                            CONCAT420(auVar8._20_4_ + fVar19,
                                                      CONCAT416(auVar8._16_4_ + fVar18,
                                                                CONCAT412(auVar8._12_4_ + fVar17,
                                                                          CONCAT48(auVar8._8_4_ +
                                                                                   fVar16,CONCAT44(
                                                  auVar8._4_4_ + fVar15,auVar8._0_4_ + fVar14)))))))
                       );
      auVar12 = ZEXT3264(CONCAT428(auVar12._28_4_ + param_4,
                                   CONCAT424(auVar12._24_4_ + fVar20,
                                             CONCAT420(auVar12._20_4_ + fVar19,
                                                       CONCAT416(auVar12._16_4_ + fVar18,
                                                                 CONCAT412(auVar12._12_4_ + fVar17,
                                                                           CONCAT48(auVar12._8_4_ +
                                                                                    fVar16,CONCAT44(
                                                  auVar12._4_4_ + fVar15,auVar12._0_4_ + fVar14)))))
                                            )));
      auVar13 = ZEXT3264(CONCAT428(auVar13._28_4_ + param_4,
                                   CONCAT424(auVar13._24_4_ + fVar20,
                                             CONCAT420(auVar13._20_4_ + fVar19,
                                                       CONCAT416(auVar13._16_4_ + fVar18,
                                                                 CONCAT412(auVar13._12_4_ + fVar17,
                                                                           CONCAT48(auVar13._8_4_ +
                                                                                    fVar16,CONCAT44(
                                                  auVar13._4_4_ + fVar15,auVar13._0_4_ + fVar14)))))
                                            )));
      auVar11 = ZEXT3264(CONCAT428(auVar11._28_4_ + param_4,
                                   CONCAT424(auVar11._24_4_ + fVar20,
                                             CONCAT420(auVar11._20_4_ + fVar19,
                                                       CONCAT416(auVar11._16_4_ + fVar18,
                                                                 CONCAT412(auVar11._12_4_ + fVar17,
                                                                           CONCAT48(auVar11._8_4_ +
                                                                                    fVar16,CONCAT44(
                                                  auVar11._4_4_ + fVar15,auVar11._0_4_ + fVar14)))))
                                            )));
    } while (uVar6 < (param_5 & 0xffffffe0));
  }
  uVar6 = (uint)uVar7;
  while (uVar6 < param_5) {
                    /* WARNING: Read-only address (ram,0x000149da9cc0) is written */
                    /* WARNING: Read-only address (ram,0x000149da9ce0) is written */
                    /* WARNING: Read-only address (ram,0x000149da9d00) is written */
                    /* WARNING: Read-only address (ram,0x000149da9d20) is written */
                    /* WARNING: Read-only address (ram,0x000149da9d40) is written */
    auVar4 = vfmadd213ps_fma(*(undefined1 (*) [32])(param_2 + uVar7 * 4),auVar8._0_32_,
                             *(undefined1 (*) [32])(param_1 + uVar7 * 4));
    *(undefined1 (*) [32])(param_1 + uVar7 * 4) = ZEXT1632(auVar4);
    uVar6 = (int)uVar7 + 8;
    uVar7 = (ulonglong)uVar6;
    auVar4 = vfmadd231ps_fma(auVar8._0_32_,auVar9,auVar5);
    auVar8 = ZEXT1664(auVar4);
  }
                    /* WARNING: Read-only address (ram,0x000149da9cc0) is written */
                    /* WARNING: Read-only address (ram,0x000149da9ce0) is written */
                    /* WARNING: Read-only address (ram,0x000149da9d00) is written */
                    /* WARNING: Read-only address (ram,0x000149da9d20) is written */
                    /* WARNING: Read-only address (ram,0x000149da9d40) is written */
  return;
}



// FUNCTION 14554e6b0 FUN_14554e6b0 body=2464 status=ok
// SIG undefined FUN_14554e6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14554e6b0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_178 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  lVar3 = *param_2;
  lVar4 = param_2[1];
  pfVar5 = (float *)*param_3;
  lVar6 = *param_1;
  lVar7 = param_1[1];
  pfVar8 = (float *)param_3[1];
  fVar42 = *pfVar8;
  fVar44 = pfVar8[4];
  fVar45 = pfVar8[3];
  fVar46 = *pfVar5;
  fVar1 = pfVar5[4];
  fVar2 = pfVar5[3];
  auVar33 = vfnmadd231ss_fma(ZEXT416((uint)pfVar5[1]),ZEXT416((uint)fVar46),ZEXT416((uint)fVar2));
  auVar34 = vfnmadd231ss_fma(ZEXT416((uint)pfVar8[1]),ZEXT416((uint)fVar45),ZEXT416((uint)fVar42));
  fVar55 = -fVar2;
  fVar50 = -fVar45;
  fVar17 = fVar45 * fVar45;
  auVar54 = vinsertps_avx(ZEXT416((uint)fVar46),auVar33,0x10);
  auVar9 = vinsertps_avx(ZEXT816(0) << 0x20,ZEXT416((uint)fVar46),0x10);
  auVar9 = vinsertps_avx(auVar9,ZEXT416((uint)fVar42),0x30);
  auVar10 = vinsertps_avx(_DAT_149c27cd0,ZEXT416((uint)fVar55),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416((uint)fVar50),0x30);
  fVar37 = -(fVar44 * pfVar8[1]);
  fVar38 = -(fVar45 * fVar17);
  fVar18 = fVar17 * fVar42;
  fVar39 = -(fVar45 * pfVar8[1]);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)fVar42),0x20);
  auVar11 = vinsertps_avx(auVar54,auVar34,0x30);
  fVar40 = -(fVar1 * pfVar5[1]);
  fVar19 = fVar45 * fVar44;
  fVar20 = fVar2 * fVar1;
  fVar21 = fVar20 * fVar46;
  fVar22 = fVar19 * fVar42;
  fVar23 = fVar2 * fVar2;
  fVar41 = -(fVar23 * pfVar5[3]);
  fVar24 = fVar23 * fVar46;
  fVar58 = -(pfVar5[3] * pfVar5[1]);
  auVar54 = vinsertps_avx(ZEXT416((uint)(((fVar24 + pfVar5[2]) - fVar1 * fVar46) + fVar58)),
                          ZEXT416((uint)(fVar21 + fVar40 + -(fVar2 * pfVar5[2]) +
                                        fVar41 * fVar46 + fVar21 + fVar23 * pfVar5[1])),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)(((fVar18 + pfVar8[2]) - *pfVar8 * pfVar8[4]) +
                                                fVar39)),0x20);
  auVar12 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar22 + -(fVar45 * pfVar8[2]) + fVar37 +
                                                fVar22 + fVar38 * fVar42 + fVar17 * pfVar8[1])),0x30
                         );
  fVar42 = pfVar8[3];
  auVar54 = vinsertps_avx(ZEXT416(auVar33._0_4_),
                          ZEXT416((uint)(((fVar58 + fVar24) - fVar1 * fVar46) + pfVar5[2])),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(auVar34._0_4_),0x20);
  fVar28 = fVar23 - pfVar5[4];
  auVar13 = vinsertps_avx(auVar54,ZEXT416((uint)(((fVar39 + fVar18) - *pfVar8 * pfVar8[4]) +
                                                pfVar8[2])),0x30);
  fVar46 = pfVar8[4];
  fVar29 = fVar17 - fVar46;
  auVar54 = vinsertps_avx(ZEXT416((uint)fVar28),ZEXT416((uint)((pfVar5[4] - fVar28) * pfVar5[3])),
                          0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)fVar29),0x20);
  auVar14 = vinsertps_avx(auVar54,ZEXT416((uint)((fVar46 - fVar29) * fVar42)),0x30);
  auVar54 = vinsertps_avx(ZEXT416((uint)fVar55),ZEXT416((uint)fVar28),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)-fVar42),0x20);
  auVar15 = vinsertps_avx(auVar54,ZEXT416((uint)fVar29),0x30);
  fVar52 = -(fVar42 * fVar19);
  fVar29 = fVar19 * pfVar8[1];
  fVar25 = fVar20 * pfVar5[1];
  fVar47 = -(fVar46 * fVar46 * fVar42);
  fVar26 = fVar52 * *pfVar8;
  fVar53 = -(fVar20 * pfVar5[3]);
  fVar27 = fVar53 * *pfVar5;
  fVar59 = -(fVar1 * fVar1 * pfVar5[3]);
  auVar60._0_4_ = -(fVar23 * fVar1);
  auVar60._4_4_ = 0x80000000;
  auVar60._8_4_ = 0x80000000;
  auVar60._12_4_ = 0x80000000;
  auVar54 = vfmadd231ss_fma(ZEXT416((uint)(pfVar8[4] * pfVar8[4] * pfVar8[1])),
                            ZEXT416((uint)(fVar52 * fVar50)),ZEXT416((uint)*pfVar8));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)-(fVar46 * fVar19)),ZEXT416((uint)*pfVar8));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)(pfVar8[4] * pfVar8[3])),ZEXT416((uint)pfVar8[2]))
  ;
  fVar28 = *pfVar8;
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)fVar28),ZEXT416((uint)fVar47));
  auVar30 = vfmadd231ss_fma(auVar54,ZEXT416((uint)pfVar8[1]),ZEXT416((uint)fVar52));
  auVar54 = vfmadd231ss_fma(ZEXT416((uint)(pfVar8[1] * fVar38)),ZEXT416((uint)fVar28),
                            ZEXT416((uint)(-fVar42 * fVar38)));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)fVar28),ZEXT416((uint)-(fVar46 * fVar17)));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)(pfVar8[3] * pfVar8[3])),ZEXT416((uint)pfVar8[2]))
  ;
  fVar42 = pfVar5[4];
  auVar31 = vfmadd231ss_fma(ZEXT416((uint)(auVar54._0_4_ + fVar26 + fVar26 + fVar29 + fVar29)),
                            ZEXT416((uint)fVar28),ZEXT416((uint)(pfVar8[4] * pfVar8[4])));
  fVar28 = *pfVar5;
  auVar54 = vfmadd231ss_fma(ZEXT416((uint)(fVar42 * fVar42 * pfVar5[1])),ZEXT416((uint)fVar28),
                            ZEXT416((uint)(fVar53 * fVar55)));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)fVar28),ZEXT416((uint)-(fVar20 * fVar1)));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)(fVar42 * pfVar5[3])),ZEXT416((uint)pfVar5[2]));
  auVar48 = ZEXT416((uint)fVar28);
  auVar54 = vfmadd231ss_fma(auVar54,auVar48,ZEXT416((uint)fVar59));
  auVar54 = vfmadd231ss_fma(auVar54,ZEXT416((uint)fVar53),ZEXT416((uint)pfVar5[1]));
  auVar32 = vfmadd231ss_fma(ZEXT416((uint)(fVar41 * pfVar5[1])),auVar48,
                            ZEXT416((uint)(fVar41 * fVar55)));
  auVar32 = vfmadd231ss_fma(auVar32,auVar48,auVar60);
  auVar32 = vfmadd231ss_fma(auVar32,ZEXT416((uint)(pfVar5[3] * pfVar5[3])),ZEXT416((uint)pfVar5[2]))
  ;
  auVar32 = vfmadd231ss_fma(ZEXT416((uint)(auVar32._0_4_ + fVar27 + fVar27 + fVar25 + fVar25)),
                            ZEXT416((uint)(pfVar5[4] * pfVar5[4])),ZEXT416((uint)*pfVar5));
  auVar54 = vinsertps_avx(ZEXT416((uint)(auVar32._0_4_ - fVar1 * pfVar5[2])),auVar54,0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)(auVar31._0_4_ - fVar46 * pfVar8[2])),0x20);
  auVar30 = vinsertps_avx(auVar54,auVar30,0x30);
  fVar42 = pfVar8[4] * pfVar8[4];
  auVar31 = vfmadd231ss_fma(ZEXT416((uint)(fVar29 + fVar26)),ZEXT416((uint)fVar42),
                            ZEXT416((uint)*pfVar8));
  fVar28 = pfVar5[4] * pfVar5[4];
  auVar54 = vfmadd231ss_fma(ZEXT416((uint)(fVar27 + fVar25)),ZEXT416((uint)fVar28),
                            ZEXT416((uint)*pfVar5));
  auVar54 = vinsertps_avx(ZEXT416((uint)(fVar21 + fVar40 + -(fVar2 * pfVar5[2]) +
                                        fVar21 + fVar23 * pfVar5[1] + fVar41 * *pfVar5)),
                          ZEXT416((uint)(auVar54._0_4_ - fVar1 * pfVar5[2])),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar22 + fVar37 + -(fVar45 * pfVar8[2]) +
                                                fVar22 + fVar17 * pfVar8[1] + *pfVar8 * fVar38)),
                          0x20);
  auVar31 = vinsertps_avx(auVar54,ZEXT416((uint)(auVar31._0_4_ - fVar46 * pfVar8[2])),0x30);
  fVar45 = pfVar8[2] - *pfVar8 * pfVar8[4];
  fVar2 = pfVar5[2] - *pfVar5 * pfVar5[4];
  auVar54 = vinsertps_avx(ZEXT416((uint)(fVar2 + fVar58 + fVar24)),ZEXT416((uint)(fVar21 + fVar40)),
                          0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar45 + fVar39 + fVar18)),0x20);
  auVar32 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar22 + fVar37)),0x30);
  auVar54 = vinsertps_avx(ZEXT416(auVar33._0_4_),ZEXT416((uint)fVar2),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(auVar34._0_4_),0x20);
  auVar33 = vinsertps_avx(auVar54,ZEXT416((uint)fVar45),0x30);
  auVar54 = vinsertps_avx(ZEXT416((uint)(fVar53 + fVar28 + fVar53 + auVar60._0_4_ + fVar55 * fVar41)
                                 ),ZEXT416((uint)(fVar53 * fVar55 + -(fVar20 * fVar1) + fVar59)),
                          0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar52 + fVar42 + fVar52 +
                                                fVar50 * fVar38 + -(fVar46 * fVar17))),0x20);
  auVar34 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar50 * fVar52 + -(fVar46 * fVar19) + fVar47)),
                          0x30);
  auVar48 = vfmadd231ss_fma(ZEXT416((uint)fVar38),ZEXT416((uint)(pfVar8[3] + pfVar8[3])),
                            ZEXT416((uint)pfVar8[4]));
  auVar54 = vfmadd231ss_fma(ZEXT416((uint)fVar41),ZEXT416((uint)(pfVar5[3] + pfVar5[3])),
                            ZEXT416((uint)pfVar5[4]));
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar28 + fVar53)),0x10);
  auVar54 = vinsertps_avx(auVar54,auVar48,0x20);
  auVar48 = vinsertps_avx(auVar54,ZEXT416((uint)(fVar42 + fVar52)),0x30);
  auVar54 = *(undefined1 (*) [16])*param_4;
  auVar57 = vmovhlps_avx(auVar54,auVar54);
  auVar16 = vmovlhps_avx(auVar54,auVar54);
  auVar60 = vinsertps_avx(ZEXT416((uint)-fVar1),ZEXT416((uint)-fVar1),0x10);
  auVar54 = *(undefined1 (*) [16])param_4[1];
  auVar60 = vinsertps_avx(auVar60,ZEXT416((uint)-fVar44),0x20);
  auVar60 = vinsertps_avx(auVar60,ZEXT416((uint)-fVar44),0x30);
  auVar56 = vmovlhps_avx(auVar54,auVar54);
  auVar49 = vshufps_avx(auVar16,auVar56,0xdd);
  auVar43 = vmovhlps_avx(auVar54,auVar54);
  auVar54 = vshufps_avx(auVar16,auVar56,0x88);
  auVar56._0_4_ = auVar54._0_4_ * auVar60._0_4_;
  auVar56._4_4_ = auVar54._4_4_ * auVar60._4_4_;
  auVar56._8_4_ = auVar54._8_4_ * auVar60._8_4_;
  auVar56._12_4_ = auVar54._12_4_ * auVar60._12_4_;
  auVar54 = vinsertps_avx(ZEXT416((uint)pfVar5[2]),ZEXT416((uint)pfVar5[2]),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)pfVar8[2]),0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)pfVar8[2]),0x30);
  auVar16 = vshufps_avx(auVar57,auVar43,0x88);
  auVar56 = vfmadd231ps_fma(auVar56,auVar54,auVar16);
  auVar16 = vinsertps_avx(ZEXT416((uint)pfVar5[1]),ZEXT416((uint)pfVar5[1]),0x10);
  auVar16 = vinsertps_avx(auVar16,ZEXT416((uint)pfVar8[1]),0x20);
  auVar16 = vinsertps_avx(auVar16,ZEXT416((uint)pfVar8[1]),0x30);
  auVar43 = vshufps_avx(auVar57,auVar43,0xdd);
  auVar57 = vinsertps_avx(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55),0x10);
  auVar57 = vinsertps_avx(auVar57,ZEXT416((uint)fVar50),0x20);
  uVar36 = 0;
  auVar56 = vfmadd231ps_fma(auVar56,auVar16,auVar43);
  auVar16 = vinsertps_avx(auVar57,ZEXT416((uint)fVar50),0x30);
  auVar57._0_4_ = auVar49._0_4_ * auVar60._0_4_;
  auVar57._4_4_ = auVar49._4_4_ * auVar60._4_4_;
  auVar57._8_4_ = auVar49._8_4_ * auVar60._8_4_;
  auVar57._12_4_ = auVar49._12_4_ * auVar60._12_4_;
  auVar60 = vfmadd231ps_fma(auVar56,auVar16,auVar49);
  auVar16 = vfmadd231ps_fma(auVar57,auVar54,auVar43);
  auVar54 = auVar48;
  auVar57 = auVar48;
  if (param_5 != 0) {
    local_198 = auVar12._0_4_;
    fStack_194 = auVar12._4_4_;
    fStack_190 = auVar12._8_4_;
    fStack_18c = auVar12._12_4_;
    do {
      auVar54 = *(undefined1 (*) [16])(lVar6 + uVar36 * 4);
      local_178 = *(undefined1 (*) [16])(lVar7 + uVar36 * 4);
      auVar12 = vshufps_avx(auVar54,local_178,0x55);
      auVar57 = vshufps_avx(auVar54,local_178,0);
      fVar42 = auVar57._0_4_;
      auVar51._0_4_ = fVar42 * local_198;
      fVar44 = auVar57._4_4_;
      auVar51._4_4_ = fVar44 * fStack_194;
      fVar45 = auVar57._8_4_;
      auVar51._8_4_ = fVar45 * fStack_190;
      fVar46 = auVar57._12_4_;
      auVar51._12_4_ = fVar46 * fStack_18c;
      auVar49._0_4_ = fVar42 * auVar11._0_4_;
      auVar49._4_4_ = fVar44 * auVar11._4_4_;
      auVar49._8_4_ = fVar45 * auVar11._8_4_;
      auVar49._12_4_ = fVar46 * auVar11._12_4_;
      local_108 = auVar30._0_4_;
      fStack_104 = auVar30._4_4_;
      fStack_100 = auVar30._8_4_;
      fStack_fc = auVar30._12_4_;
      auVar43._0_4_ = fVar42 * local_108;
      auVar43._4_4_ = fVar44 * fStack_104;
      auVar43._8_4_ = fVar45 * fStack_100;
      auVar43._12_4_ = fVar46 * fStack_fc;
      auVar57 = vfmadd231ps_fma(auVar43,auVar12,auVar31);
      auVar43 = vfmadd231ps_fma(auVar51,auVar13,auVar12);
      auVar12 = vfmadd231ps_fma(auVar49,auVar9,auVar12);
      auVar12 = vfmadd231ps_fma(auVar12,auVar60,auVar10);
      auVar56 = vfmadd231ps_fma(auVar12,auVar16,_DAT_149c0f370);
      auVar12 = vshufps_avx(auVar54,local_178,0xaa);
      auVar57 = vfmadd231ps_fma(auVar57,auVar12,auVar32);
      auVar43 = vfmadd231ps_fma(auVar43,auVar11,auVar12);
      auVar12 = vshufps_avx(auVar54,local_178,0xff);
      auVar57 = vfmadd231ps_fma(auVar57,auVar12,auVar33);
      auVar57 = vfmadd231ps_fma(auVar57,auVar60,auVar34);
      auVar49 = vfmadd231ps_fma(auVar57,auVar16,auVar48);
      auVar12 = vfmadd231ps_fma(auVar43,auVar9,auVar12);
      auVar12 = vfmadd231ps_fma(auVar12,auVar14,auVar60);
      auVar57 = vfmadd231ps_fma(auVar12,auVar15,auVar16);
      auVar60 = vpermilps_avx(auVar49,0xa0);
      auVar16 = vpermilps_avx(auVar49,0xf5);
      auVar12 = vshufps_avx(auVar56,auVar57,0x44);
      *(undefined1 (*) [16])(lVar3 + uVar36 * 4) = auVar12;
      auVar12 = vshufps_avx(auVar56,auVar57,0xee);
      *(undefined1 (*) [16])(lVar4 + uVar36 * 4) = auVar12;
      uVar35 = (int)uVar36 + 4;
      uVar36 = (ulonglong)uVar35;
    } while (uVar35 < param_5);
  }
  auVar54 = vshufps_avx(auVar54,local_178,0xee);
  auVar9 = vshufps_avx(auVar57,auVar54,0x44);
  *(undefined1 (*) [16])*param_4 = auVar9;
  auVar54 = vshufps_avx(auVar57,auVar54,0xee);
  *(undefined1 (*) [16])param_4[1] = auVar54;
  return;
}



// FUNCTION 14554f050 FUN_14554f050 body=704 status=ok
// SIG undefined FUN_14554f050(void)

void FUN_14554f050(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  uint param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar16 [64];
  undefined1 auVar25 [16];
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  auVar26._0_12_ = ZEXT812(0);
  auVar26._12_4_ = 0;
  auVar1 = *(undefined1 (*) [16])*param_3;
  auVar7 = vshufps_avx(auVar1,auVar1,0x55);
  auVar8 = vshufps_avx(auVar1,auVar1,0xaa);
  auVar9 = vshufps_avx(auVar1,auVar1,0xff);
  fVar24 = -auVar9._0_4_;
  auVar25._0_8_ = auVar9._0_8_ ^ 0x8000000080000000;
  auVar25._8_4_ = auVar9._8_4_ ^ 0x80000000;
  auVar25._12_4_ = auVar9._12_4_ ^ 0x80000000;
  auVar23._0_4_ = -*(float *)((undefined1 (*) [16])*param_3)[1];
  auVar23._4_4_ = 0x80000000;
  auVar23._8_4_ = 0x80000000;
  auVar23._12_4_ = 0x80000000;
  fVar5 = auVar23._0_4_ * auVar7._0_4_;
  auVar10 = vfmadd231ss_fma(auVar7,auVar1,auVar25);
  auVar9 = vinsertps_avx(ZEXT816(0),auVar10,0x30);
  auVar11 = vfmadd231ss_fma(auVar8,auVar25,auVar10);
  auVar12 = vfmadd231ss_fma(auVar11,auVar1,auVar23);
  auVar11 = vinsertps_avx(auVar26,auVar10,0x10);
  auVar11 = vinsertps_avx(auVar11,auVar12,0x20);
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  auVar10 = vinsertps_avx(auVar27,auVar10,0x20);
  auVar26 = vfmadd231ss_fma(auVar8,auVar7,auVar25);
  auVar10 = vinsertps_avx(auVar10,auVar12,0x30);
  fVar6 = auVar23._0_4_ * fVar24;
  fVar19 = auVar1._0_4_;
  auVar1 = vfmadd231ss_fma(ZEXT416((uint)(fVar6 * fVar19)),auVar25,auVar12);
  auVar11 = vinsertps_avx(auVar11,ZEXT416((uint)(auVar1._0_4_ + fVar5)),0x30);
  auVar12 = vfmadd231ss_fma(ZEXT416((uint)fVar5),auVar25,auVar26);
  fVar22 = auVar8._0_4_;
  auVar28._4_4_ = fVar19;
  auVar28._0_4_ = fVar19;
  auVar28._8_4_ = fVar19;
  auVar28._12_4_ = fVar19;
  auVar27 = vfmadd231ss_fma(ZEXT416((uint)(auVar23._0_4_ * fVar22)),auVar25,
                            ZEXT416((uint)(fVar5 + auVar12._0_4_)));
  auVar1 = vinsertps_avx(auVar8,ZEXT416((uint)(fVar24 * fVar22)),0x10);
  auVar7 = vinsertps_avx(auVar7,auVar26,0x10);
  fVar5 = fVar24 * fVar22 * fVar24;
  auVar7 = vinsertps_avx(auVar7,auVar12,0x20);
  auVar7 = vinsertps_avx(auVar7,auVar27,0x30);
  auVar12 = vfmadd231ss_fma(ZEXT416((uint)fVar5),auVar23,ZEXT416((uint)(fVar22 + fVar22)));
  auVar1 = vinsertps_avx(auVar1,ZEXT416((uint)(fVar5 + auVar23._0_4_ * fVar22)),0x20);
  fVar5 = fVar24 * fVar24;
  auVar8 = vfmadd231ss_fma(ZEXT416((uint)fVar5),auVar23,ZEXT416(0x40400000));
  auVar26 = vfmadd231ss_fma(ZEXT416((uint)(auVar23._0_4_ * auVar23._0_4_)),auVar25,
                            ZEXT416((uint)(auVar8._0_4_ * fVar24)));
  auVar8 = vinsertps_avx(auVar25,ZEXT416((uint)(fVar5 + auVar23._0_4_)),0x10);
  auVar12 = vinsertps_avx(auVar1,ZEXT416((uint)(auVar12._0_4_ * fVar24)),0x30);
  auVar1 = vinsertps_avx(auVar8,ZEXT416((uint)((auVar23._0_4_ + auVar23._0_4_ + fVar5) * fVar24)),
                         0x20);
  auVar8 = vinsertps_avx(auVar1,auVar26,0x30);
  uVar14 = 0;
  auVar27 = vfmadd231ss_fma(ZEXT416((uint)(fVar6 * fVar24)),auVar23,
                            ZEXT416((uint)(auVar23._0_4_ + auVar23._0_4_)));
  auVar1 = vinsertps_avx(auVar23,ZEXT416((uint)fVar6),0x10);
  auVar26 = vinsertps_avx(auVar1,ZEXT416((uint)(fVar6 * fVar24 + auVar23._0_4_ * auVar23._0_4_)),
                          0x20);
  auVar1 = *(undefined1 (*) [16])*param_4;
  auVar26 = vinsertps_avx(auVar26,ZEXT416((uint)(auVar27._0_4_ * fVar24)),0x30);
  auVar27 = vshufps_avx(auVar1,auVar1,0x55);
  auVar23 = vshufps_avx(auVar1,auVar1,0xaa);
  auVar25 = vshufps_avx(auVar1,auVar1,0xff);
  uVar15 = auVar1._0_4_;
  auVar20 = ZEXT1664(CONCAT412(uVar15,CONCAT48(uVar15,CONCAT44(uVar15,uVar15))));
  uVar15 = auVar27._0_4_;
  auVar21 = ZEXT1664(CONCAT412(uVar15,CONCAT48(uVar15,CONCAT44(uVar15,uVar15))));
  uVar15 = auVar23._0_4_;
  auVar16 = ZEXT1664(CONCAT412(uVar15,CONCAT48(uVar15,CONCAT44(uVar15,uVar15))));
  uVar15 = auVar25._0_4_;
  auVar18 = ZEXT1664(CONCAT412(uVar15,CONCAT48(uVar15,CONCAT44(uVar15,uVar15))));
  if (param_5 != 0) {
    do {
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar14 * 4);
      auVar17._0_4_ = auVar7._0_4_ * auVar18._0_4_;
      auVar17._4_4_ = auVar7._4_4_ * auVar18._4_4_;
      auVar17._8_4_ = auVar7._8_4_ * auVar18._8_4_;
      auVar17._12_4_ = auVar7._12_4_ * auVar18._12_4_;
      auVar27 = vfmadd231ps_fma(auVar17,auVar16._0_16_,auVar12);
      auVar23 = vfmadd231ps_fma(auVar27,auVar1,auVar28);
      auVar27 = vpermilps_avx(auVar1,0xaa);
      auVar25 = vfmadd231ps_fma(auVar23,auVar27,auVar9);
      auVar23 = vpermilps_avx(auVar1,0x55);
      auVar25 = vfmadd231ps_fma(auVar25,auVar23,auVar10);
      auVar23 = vpermilps_avx(auVar1,0);
      auVar23 = vfmadd231ps_fma(auVar25,auVar23,auVar11);
      auVar23 = vfmadd231ps_fma(auVar23,auVar21._0_16_,auVar8);
      auVar25 = vfmadd231ps_fma(auVar23,auVar20._0_16_,auVar26);
      *(undefined1 (*) [16])(lVar3 + uVar14 * 4) = auVar25;
      uVar13 = (int)uVar14 + 4;
      uVar14 = (ulonglong)uVar13;
      auVar23 = vpermilps_avx(auVar25,0xff);
      auVar21 = ZEXT1664(auVar23);
      auVar23 = vpermilps_avx(auVar25,0xaa);
      auVar20 = ZEXT1664(auVar23);
      auVar1 = vpermilps_avx(auVar1,0xff);
      auVar18 = ZEXT1664(auVar1);
      auVar16 = ZEXT1664(auVar27);
    } while (uVar13 < param_5);
  }
  puVar4 = (undefined4 *)*param_4;
  *puVar4 = auVar20._0_4_;
  puVar4[1] = auVar21._0_4_;
  puVar4[2] = auVar16._0_4_;
  puVar4[3] = auVar18._0_4_;
  return;
}



// FUNCTION 14554f310 FUN_14554f310 body=1642 status=ok
// SIG undefined FUN_14554f310(void)

void FUN_14554f310(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  uint local_260;
  undefined1 local_240 [32];
  
  lVar19 = *param_1;
  lVar20 = param_1[1];
  lVar21 = param_1[2];
  lVar22 = param_1[3];
  lVar23 = param_1[4];
  lVar24 = param_1[5];
  lVar25 = param_1[6];
  lVar26 = param_1[7];
  lVar27 = *param_2;
  lVar28 = param_2[1];
  lVar29 = param_2[2];
  lVar30 = param_2[3];
  auVar47._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar47._0_16_ = *(undefined1 (*) [16])*param_3;
  auVar45._16_16_ = *(undefined1 (*) [16])param_3[5];
  auVar45._0_16_ = *(undefined1 (*) [16])param_3[1];
  auVar42._16_16_ = *(undefined1 (*) [16])param_3[6];
  auVar42._0_16_ = *(undefined1 (*) [16])param_3[2];
  lVar31 = param_2[4];
  lVar32 = param_2[5];
  lVar33 = param_2[6];
  lVar34 = param_2[7];
  auVar11 = vshufps_avx(auVar47,auVar45,0x44);
  auVar45 = vshufps_avx(auVar47,auVar45,0xee);
  auVar37._16_16_ = *(undefined1 (*) [16])param_3[7];
  auVar37._0_16_ = *(undefined1 (*) [16])param_3[3];
  auVar47 = vshufps_avx(auVar42,auVar37,0x44);
  auVar12 = vshufps_avx(auVar11,auVar47,0x88);
  auVar11 = vshufps_avx(auVar11,auVar47,0xdd);
  auVar47 = vshufps_avx(auVar42,auVar37,0xee);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar37 = vshufps_avx(auVar45,auVar47,0xdd);
  auVar58._0_8_ = auVar37._0_8_ ^ 0x8000000080000000;
  auVar58._8_4_ = auVar37._8_4_ ^ 0x80000000;
  auVar58._12_4_ = auVar37._12_4_ ^ 0x80000000;
  auVar58._16_4_ = auVar37._16_4_ ^ 0x80000000;
  auVar58._20_4_ = auVar37._20_4_ ^ 0x80000000;
  auVar58._24_4_ = auVar37._24_4_ ^ 0x80000000;
  auVar58._28_4_ = auVar37._28_4_ ^ 0x80000000;
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_3[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[5])[1]),0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[6])[1]),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[7])[1]),0x30);
  auVar63._0_8_ = auVar1._0_8_ ^ 0x8000000080000000;
  auVar63._8_4_ = -auVar1._8_4_;
  auVar63._12_4_ = -auVar1._12_4_;
  auVar63._16_4_ = -auVar2._0_4_;
  auVar63._20_4_ = -auVar2._4_4_;
  auVar63._24_4_ = -auVar2._8_4_;
  auVar63._28_4_ = -auVar2._12_4_;
  auVar45 = vshufps_avx(auVar45,auVar47,0x88);
  auVar48._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar48._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar46._16_16_ = *(undefined1 (*) [16])param_4[5];
  auVar46._0_16_ = *(undefined1 (*) [16])param_4[1];
  auVar47 = vshufps_avx(auVar48,auVar46,0x44);
  auVar39._16_16_ = *(undefined1 (*) [16])param_4[6];
  auVar39._0_16_ = *(undefined1 (*) [16])param_4[2];
  auVar37 = vshufps_avx(auVar48,auVar46,0xee);
  uVar35 = 0;
  auVar38._16_16_ = *(undefined1 (*) [16])param_4[7];
  auVar38._0_16_ = *(undefined1 (*) [16])param_4[3];
  auVar42 = vshufps_avx(auVar39,auVar38,0x44);
  auVar46 = vshufps_avx(auVar47,auVar42,0xdd);
  auVar38 = vshufps_avx(auVar39,auVar38,0xee);
  auVar39 = vshufps_avx(auVar37,auVar38,0xdd);
  auVar47 = vshufps_avx(auVar47,auVar42,0x88);
  auVar60._0_4_ = auVar47._0_4_ * -auVar1._0_4_;
  auVar60._4_4_ = auVar47._4_4_ * -auVar1._4_4_;
  auVar60._8_4_ = auVar47._8_4_ * auVar63._8_4_;
  auVar60._12_4_ = auVar47._12_4_ * auVar63._12_4_;
  auVar60._16_4_ = auVar47._16_4_ * auVar63._16_4_;
  auVar60._20_4_ = auVar47._20_4_ * auVar63._20_4_;
  auVar60._24_4_ = auVar47._24_4_ * auVar63._24_4_;
  auVar60._28_4_ = auVar47._28_4_ * auVar63._28_4_;
  auVar47 = vshufps_avx(auVar37,auVar38,0x88);
  auVar2 = vfmadd231ps_fma(auVar60,auVar47,auVar45);
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar46,auVar58);
  auVar56._0_4_ = auVar46._0_4_ * -auVar1._0_4_;
  auVar56._4_4_ = auVar46._4_4_ * -auVar1._4_4_;
  auVar56._8_4_ = auVar46._8_4_ * auVar63._8_4_;
  auVar56._12_4_ = auVar46._12_4_ * auVar63._12_4_;
  auVar56._16_4_ = auVar46._16_4_ * auVar63._16_4_;
  auVar56._20_4_ = auVar46._20_4_ * auVar63._20_4_;
  auVar56._24_4_ = auVar46._24_4_ * auVar63._24_4_;
  auVar56._28_4_ = auVar46._28_4_ * auVar63._28_4_;
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar39,auVar11);
  auVar2 = vfmadd231ps_fma(auVar56,auVar39,auVar45);
  local_260 = 0;
  auVar47 = local_240;
  auVar37 = local_240;
  auVar42 = local_240;
  if (param_5 != 0) {
    do {
      auVar51._16_16_ = *(undefined1 (*) [16])(lVar23 + uVar35 * 4);
      auVar51._0_16_ = *(undefined1 (*) [16])(lVar19 + uVar35 * 4);
      auVar43._16_16_ = *(undefined1 (*) [16])(lVar24 + uVar35 * 4);
      auVar43._0_16_ = *(undefined1 (*) [16])(lVar20 + uVar35 * 4);
      auVar49._16_16_ = *(undefined1 (*) [16])(lVar25 + uVar35 * 4);
      auVar49._0_16_ = *(undefined1 (*) [16])(lVar21 + uVar35 * 4);
      auVar40._16_16_ = *(undefined1 (*) [16])(lVar26 + uVar35 * 4);
      auVar40._0_16_ = *(undefined1 (*) [16])(lVar22 + uVar35 * 4);
      auVar47 = vshufps_avx(auVar51,auVar43,0x44);
      auVar37 = vshufps_avx(auVar51,auVar43,0xee);
      auVar42 = vshufps_avx(auVar49,auVar40,0xee);
      auVar46 = vshufps_avx(auVar37,auVar42,0xdd);
      auVar37 = vshufps_avx(auVar37,auVar42,0x88);
      auVar42 = vshufps_avx(auVar49,auVar40,0x44);
      auVar38 = vshufps_avx(auVar47,auVar42,0x88);
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar12,auVar38);
      auVar47 = vshufps_avx(auVar47,auVar42,0xdd);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar11,auVar38);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar12,auVar47);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar58,ZEXT1632(auVar13));
      fVar3 = auVar45._0_4_;
      auVar59._0_4_ = auVar38._0_4_ * fVar3;
      fVar4 = auVar45._4_4_;
      auVar59._4_4_ = auVar38._4_4_ * fVar4;
      fVar5 = auVar45._8_4_;
      auVar59._8_4_ = auVar38._8_4_ * fVar5;
      fVar6 = auVar45._12_4_;
      auVar59._12_4_ = auVar38._12_4_ * fVar6;
      fVar7 = auVar45._16_4_;
      auVar59._16_4_ = auVar38._16_4_ * fVar7;
      fVar8 = auVar45._20_4_;
      auVar59._20_4_ = auVar38._20_4_ * fVar8;
      fVar9 = auVar45._24_4_;
      auVar59._24_4_ = auVar38._24_4_ * fVar9;
      fVar10 = auVar45._28_4_;
      auVar59._28_4_ = auVar38._28_4_ * fVar10;
      auVar2 = vfmadd231ps_fma(auVar59,auVar11,auVar47);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar12,auVar37);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar63,ZEXT1632(auVar13));
      auVar14 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar58,ZEXT1632(auVar1));
      auVar56 = ZEXT1632(auVar1);
      auVar57._0_4_ = auVar47._0_4_ * fVar3;
      auVar57._4_4_ = auVar47._4_4_ * fVar4;
      auVar57._8_4_ = auVar47._8_4_ * fVar5;
      auVar57._12_4_ = auVar47._12_4_ * fVar6;
      auVar57._16_4_ = auVar47._16_4_ * fVar7;
      auVar57._20_4_ = auVar47._20_4_ * fVar8;
      auVar57._24_4_ = auVar47._24_4_ * fVar9;
      auVar57._28_4_ = auVar47._28_4_ * fVar10;
      auVar1 = vfmadd231ps_fma(auVar57,auVar11,auVar37);
      auVar52._16_16_ = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar35 * 4);
      auVar52._0_16_ = *(undefined1 (*) [16])(lVar19 + 0x10 + uVar35 * 4);
      auVar50._16_16_ = *(undefined1 (*) [16])(lVar25 + 0x10 + uVar35 * 4);
      auVar50._0_16_ = *(undefined1 (*) [16])(lVar21 + 0x10 + uVar35 * 4);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar12,auVar46);
      auVar44._16_16_ = *(undefined1 (*) [16])(lVar24 + 0x10 + uVar35 * 4);
      auVar44._0_16_ = *(undefined1 (*) [16])(lVar20 + 0x10 + uVar35 * 4);
      auVar41._16_16_ = *(undefined1 (*) [16])(lVar26 + 0x10 + uVar35 * 4);
      auVar41._0_16_ = *(undefined1 (*) [16])(lVar22 + 0x10 + uVar35 * 4);
      auVar47 = vshufps_avx(auVar52,auVar44,0x44);
      auVar54._0_4_ = auVar37._0_4_ * fVar3;
      auVar54._4_4_ = auVar37._4_4_ * fVar4;
      auVar54._8_4_ = auVar37._8_4_ * fVar5;
      auVar54._12_4_ = auVar37._12_4_ * fVar6;
      auVar54._16_4_ = auVar37._16_4_ * fVar7;
      auVar54._20_4_ = auVar37._20_4_ * fVar8;
      auVar54._24_4_ = auVar37._24_4_ * fVar9;
      auVar54._28_4_ = auVar37._28_4_ * fVar10;
      auVar37 = vshufps_avx(auVar52,auVar44,0xee);
      auVar53._0_4_ = auVar46._0_4_ * fVar3;
      auVar53._4_4_ = auVar46._4_4_ * fVar4;
      auVar53._8_4_ = auVar46._8_4_ * fVar5;
      auVar53._12_4_ = auVar46._12_4_ * fVar6;
      auVar53._16_4_ = auVar46._16_4_ * fVar7;
      auVar53._20_4_ = auVar46._20_4_ * fVar8;
      auVar53._24_4_ = auVar46._24_4_ * fVar9;
      auVar53._28_4_ = auVar46._28_4_ * fVar10;
      auVar42 = vshufps_avx(auVar50,auVar41,0xee);
      auVar38 = vshufps_avx(auVar50,auVar41,0x44);
      auVar39 = vshufps_avx(auVar47,auVar38,0x88);
      auVar38 = vshufps_avx(auVar47,auVar38,0xdd);
      auVar2 = vfmadd231ps_fma(auVar54,auVar11,auVar46);
      local_240 = vshufps_avx(auVar37,auVar42,0xdd);
      auVar55._0_4_ = auVar39._0_4_ * fVar3;
      auVar55._4_4_ = auVar39._4_4_ * fVar4;
      auVar55._8_4_ = auVar39._8_4_ * fVar5;
      auVar55._12_4_ = auVar39._12_4_ * fVar6;
      auVar55._16_4_ = auVar39._16_4_ * fVar7;
      auVar55._20_4_ = auVar39._20_4_ * fVar8;
      auVar55._24_4_ = auVar39._24_4_ * fVar9;
      auVar55._28_4_ = auVar39._28_4_ * fVar10;
      auVar62._0_4_ = auVar38._0_4_ * fVar3;
      auVar62._4_4_ = auVar38._4_4_ * fVar4;
      auVar62._8_4_ = auVar38._8_4_ * fVar5;
      auVar62._12_4_ = auVar38._12_4_ * fVar6;
      auVar62._16_4_ = auVar38._16_4_ * fVar7;
      auVar62._20_4_ = auVar38._20_4_ * fVar8;
      auVar62._24_4_ = auVar38._24_4_ * fVar9;
      auVar62._28_4_ = auVar38._28_4_ * fVar10;
      auVar15 = vfmadd231ps_fma(auVar53,auVar11,auVar39);
      auVar16 = vfmadd231ps_fma(auVar55,auVar11,auVar38);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar63,auVar56);
      auVar17 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar58,ZEXT1632(auVar14));
      auVar47 = vshufps_avx(auVar37,auVar42,0x88);
      auVar1 = vfmadd231ps_fma(auVar62,auVar11,auVar47);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar12,local_240);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar12,auVar39);
      auVar15 = vfmadd231ps_fma(ZEXT1632(auVar15),auVar12,auVar38);
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar12,auVar47);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar63,ZEXT1632(auVar14));
      auVar18 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar58,ZEXT1632(auVar17));
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar15),auVar63,ZEXT1632(auVar17));
      auVar15 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar58,ZEXT1632(auVar18));
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar63,ZEXT1632(auVar18));
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar58,ZEXT1632(auVar15));
      auVar37 = ZEXT1632(auVar16);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar63,ZEXT1632(auVar15));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar58,ZEXT1632(auVar16));
      auVar42 = ZEXT1632(auVar1);
      auVar61._0_4_ = auVar47._0_4_ * fVar3;
      auVar61._4_4_ = auVar47._4_4_ * fVar4;
      auVar61._8_4_ = auVar47._8_4_ * fVar5;
      auVar61._12_4_ = auVar47._12_4_ * fVar6;
      auVar61._16_4_ = auVar47._16_4_ * fVar7;
      auVar61._20_4_ = auVar47._20_4_ * fVar8;
      auVar61._24_4_ = auVar47._24_4_ * fVar9;
      auVar61._28_4_ = auVar47._28_4_ * fVar10;
      auVar2 = vfmadd231ps_fma(auVar61,auVar11,local_240);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar63,ZEXT1632(auVar16));
      auVar60 = ZEXT1632(auVar1);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar60,auVar58);
      auVar36._0_4_ = local_240._0_4_ * fVar3;
      auVar36._4_4_ = local_240._4_4_ * fVar4;
      auVar36._8_4_ = local_240._8_4_ * fVar5;
      auVar36._12_4_ = local_240._12_4_ * fVar6;
      auVar36._16_4_ = local_240._16_4_ * fVar7;
      auVar36._20_4_ = local_240._20_4_ * fVar8;
      auVar36._24_4_ = local_240._24_4_ * fVar9;
      auVar36._28_4_ = local_240._28_4_ * fVar10;
      auVar2 = vfmadd231ps_fma(auVar36,auVar63,auVar60);
      auVar46 = vshufps_avx(ZEXT1632(auVar13),auVar56,0x44);
      auVar38 = vshufps_avx(ZEXT1632(auVar14),ZEXT1632(auVar17),0xee);
      auVar39 = vshufps_avx(ZEXT1632(auVar14),ZEXT1632(auVar17),0x44);
      auVar48 = vshufps_avx(auVar46,auVar39,0x88);
      *(undefined1 (*) [16])(lVar27 + uVar35 * 4) = auVar48._0_16_;
      auVar46 = vshufps_avx(auVar46,auVar39,0xdd);
      *(undefined1 (*) [16])(lVar28 + uVar35 * 4) = auVar46._0_16_;
      auVar39 = vshufps_avx(ZEXT1632(auVar13),auVar56,0xee);
      auVar56 = vshufps_avx(auVar39,auVar38,0x88);
      *(undefined1 (*) [16])(lVar29 + uVar35 * 4) = auVar56._0_16_;
      auVar38 = vshufps_avx(auVar39,auVar38,0xdd);
      auVar39 = vshufps_avx(ZEXT1632(auVar16),auVar60,0x44);
      auVar60 = vshufps_avx(ZEXT1632(auVar16),auVar60,0xee);
      *(undefined1 (*) [16])(lVar30 + uVar35 * 4) = auVar38._0_16_;
      *(undefined1 (*) [16])(lVar31 + uVar35 * 4) = auVar48._16_16_;
      *(undefined1 (*) [16])(lVar32 + uVar35 * 4) = auVar46._16_16_;
      *(undefined1 (*) [16])(lVar33 + uVar35 * 4) = auVar56._16_16_;
      *(undefined1 (*) [16])(lVar34 + uVar35 * 4) = auVar38._16_16_;
      auVar46 = vshufps_avx(ZEXT1632(auVar18),ZEXT1632(auVar15),0x44);
      auVar38 = vshufps_avx(auVar46,auVar39,0x88);
      *(undefined1 (*) [16])(lVar27 + 0x10 + uVar35 * 4) = auVar38._0_16_;
      auVar46 = vshufps_avx(auVar46,auVar39,0xdd);
      *(undefined1 (*) [16])(lVar28 + 0x10 + uVar35 * 4) = auVar46._0_16_;
      auVar39 = vshufps_avx(ZEXT1632(auVar18),ZEXT1632(auVar15),0xee);
      auVar48 = vshufps_avx(auVar39,auVar60,0x88);
      auVar39 = vshufps_avx(auVar39,auVar60,0xdd);
      *(undefined1 (*) [16])(lVar29 + 0x10 + uVar35 * 4) = auVar48._0_16_;
      *(undefined1 (*) [16])(lVar30 + 0x10 + uVar35 * 4) = auVar39._0_16_;
      *(undefined1 (*) [16])(lVar31 + 0x10 + uVar35 * 4) = auVar38._16_16_;
      *(undefined1 (*) [16])(lVar32 + 0x10 + uVar35 * 4) = auVar46._16_16_;
      *(undefined1 (*) [16])(lVar33 + 0x10 + uVar35 * 4) = auVar48._16_16_;
      *(undefined1 (*) [16])(lVar34 + 0x10 + uVar35 * 4) = auVar39._16_16_;
      local_260 = local_260 + 8;
      uVar35 = (ulonglong)local_260;
    } while (local_260 < param_5);
  }
  auVar11 = vshufps_avx(auVar47,local_240,0x44);
  auVar45 = vshufps_avx(auVar47,local_240,0xee);
  auVar47 = vshufps_avx(auVar37,auVar42,0x44);
  auVar12 = vshufps_avx(auVar47,auVar11,0xdd);
  auVar11 = vshufps_avx(auVar47,auVar11,0x88);
  *(undefined1 (*) [16])*param_4 = auVar11._0_16_;
  auVar47 = vshufps_avx(auVar37,auVar42,0xee);
  auVar37 = vshufps_avx(auVar47,auVar45,0x88);
  auVar45 = vshufps_avx(auVar47,auVar45,0xdd);
  *(undefined1 (*) [16])param_4[1] = auVar12._0_16_;
  *(undefined1 (*) [16])param_4[2] = auVar37._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar45._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar11._16_16_;
  *(undefined1 (*) [16])param_4[5] = auVar12._16_16_;
  *(undefined1 (*) [16])param_4[6] = auVar37._16_16_;
  *(undefined1 (*) [16])param_4[7] = auVar45._16_16_;
  return;
}



// FUNCTION 14554f990 FUN_14554f990 body=1594 status=ok
// SIG undefined FUN_14554f990(void)

void FUN_14554f990(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar52 [32];
  uint local_280;
  undefined1 local_260 [32];
  
  lVar16 = *param_1;
  lVar17 = param_1[1];
  lVar18 = param_1[2];
  lVar19 = param_1[3];
  lVar12 = param_1[4];
  lVar13 = param_1[5];
  lVar1 = param_1[6];
  lVar14 = param_2[4];
  lVar15 = param_2[5];
  auVar34._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar34._0_16_ = *(undefined1 (*) [16])*param_3;
  lVar20 = *param_2;
  lVar21 = param_2[1];
  lVar22 = param_2[2];
  lVar23 = param_2[3];
  lVar2 = param_2[6];
  auVar40._0_12_ = ZEXT812(0);
  auVar40._12_4_ = 0;
  auVar32._16_16_ = *(undefined1 (*) [16])param_3[5];
  auVar32._0_16_ = *(undefined1 (*) [16])param_3[1];
  auVar29._16_16_ = *(undefined1 (*) [16])param_3[6];
  auVar29._0_16_ = *(undefined1 (*) [16])param_3[2];
  auVar26 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar5 = vshufps_avx(auVar29,auVar26,0x44);
  auVar26 = vshufps_avx(auVar29,auVar26,0xee);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar29 = vshufps_avx(auVar34,auVar32,0x44);
  auVar6 = vshufps_avx(auVar29,auVar5,0x88);
  auVar5 = vshufps_avx(auVar29,auVar5,0xdd);
  auVar29 = vshufps_avx(auVar34,auVar32,0xee);
  auVar32 = vshufps_avx(auVar29,auVar26,0xdd);
  auVar47._0_8_ = auVar32._0_8_ ^ 0x8000000080000000;
  auVar47._8_4_ = auVar32._8_4_ ^ 0x80000000;
  auVar47._12_4_ = auVar32._12_4_ ^ 0x80000000;
  auVar47._16_4_ = auVar32._16_4_ ^ 0x80000000;
  auVar47._20_4_ = auVar32._20_4_ ^ 0x80000000;
  auVar47._24_4_ = auVar32._24_4_ ^ 0x80000000;
  auVar47._28_4_ = auVar32._28_4_ ^ 0x80000000;
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_3[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[5])[1]),0x10);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[6])[1]),0x20);
  auVar43._0_8_ = auVar3._0_8_ ^ 0x8000000080000000;
  auVar43._8_4_ = -auVar3._8_4_;
  auVar43._12_4_ = -auVar3._12_4_;
  auVar43._16_4_ = -auVar4._0_4_;
  auVar43._20_4_ = -auVar4._4_4_;
  auVar43._24_4_ = -auVar4._8_4_;
  auVar43._28_4_ = -auVar4._12_4_;
  auVar35._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar35._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar26 = vshufps_avx(auVar29,auVar26,0x88);
  auVar33._16_16_ = *(undefined1 (*) [16])param_4[5];
  auVar33._0_16_ = *(undefined1 (*) [16])param_4[1];
  auVar29 = vshufps_avx(auVar35,auVar33,0x44);
  auVar32 = vshufps_avx(auVar35,auVar33,0xee);
  auVar28._16_16_ = *(undefined1 (*) [16])param_4[6];
  auVar28._0_16_ = *(undefined1 (*) [16])param_4[2];
  auVar33 = vshufps_avx(auVar28,ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar34 = vshufps_avx(auVar29,auVar33,0xdd);
  auVar28 = vshufps_avx(auVar28,ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar35 = vshufps_avx(auVar32,auVar28,0xdd);
  auVar29 = vshufps_avx(auVar29,auVar33,0x88);
  auVar49._0_4_ = auVar29._0_4_ * -auVar3._0_4_;
  auVar49._4_4_ = auVar29._4_4_ * -auVar3._4_4_;
  auVar49._8_4_ = auVar29._8_4_ * auVar43._8_4_;
  auVar49._12_4_ = auVar29._12_4_ * auVar43._12_4_;
  auVar49._16_4_ = auVar29._16_4_ * auVar43._16_4_;
  auVar49._20_4_ = auVar29._20_4_ * auVar43._20_4_;
  auVar49._24_4_ = auVar29._24_4_ * auVar43._24_4_;
  auVar49._28_4_ = auVar29._28_4_ * auVar43._28_4_;
  auVar29 = vshufps_avx(auVar32,auVar28,0x88);
  auVar4 = vfmadd231ps_fma(auVar49,auVar29,auVar26);
  auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar34,auVar47);
  auVar45._0_4_ = auVar34._0_4_ * -auVar3._0_4_;
  auVar45._4_4_ = auVar34._4_4_ * -auVar3._4_4_;
  auVar45._8_4_ = auVar34._8_4_ * auVar43._8_4_;
  auVar45._12_4_ = auVar34._12_4_ * auVar43._12_4_;
  auVar45._16_4_ = auVar34._16_4_ * auVar43._16_4_;
  auVar45._20_4_ = auVar34._20_4_ * auVar43._20_4_;
  auVar45._24_4_ = auVar34._24_4_ * auVar43._24_4_;
  auVar45._28_4_ = auVar34._28_4_ * auVar43._28_4_;
  uVar24 = 0;
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar35,auVar5);
  auVar4 = vfmadd231ps_fma(auVar45,auVar35,auVar26);
  local_280 = 0;
  auVar29 = local_260;
  auVar32 = local_260;
  auVar33 = local_260;
  if (param_5 != 0) {
    do {
      auVar38._16_16_ = *(undefined1 (*) [16])(lVar12 + uVar24 * 4);
      auVar38._0_16_ = *(undefined1 (*) [16])(lVar16 + uVar24 * 4);
      auVar30._16_16_ = *(undefined1 (*) [16])(lVar13 + uVar24 * 4);
      auVar30._0_16_ = *(undefined1 (*) [16])(lVar17 + uVar24 * 4);
      auVar36._16_16_ = *(undefined1 (*) [16])(lVar1 + uVar24 * 4);
      auVar36._0_16_ = *(undefined1 (*) [16])(lVar18 + uVar24 * 4);
      auVar27._16_16_ = auVar40;
      auVar27._0_16_ = *(undefined1 (*) [16])(lVar19 + uVar24 * 4);
      auVar29 = vshufps_avx(auVar38,auVar30,0x44);
      auVar32 = vshufps_avx(auVar36,auVar27,0xee);
      auVar33 = vshufps_avx(auVar36,auVar27,0x44);
      auVar34 = vshufps_avx(auVar29,auVar33,0x88);
      auVar29 = vshufps_avx(auVar29,auVar33,0xdd);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar5,auVar34);
      fVar51 = auVar26._0_4_;
      auVar48._0_4_ = fVar51 * auVar34._0_4_;
      fVar53 = auVar26._4_4_;
      auVar48._4_4_ = fVar53 * auVar34._4_4_;
      fVar54 = auVar26._8_4_;
      auVar48._8_4_ = fVar54 * auVar34._8_4_;
      fVar55 = auVar26._12_4_;
      auVar48._12_4_ = fVar55 * auVar34._12_4_;
      fVar56 = auVar26._16_4_;
      auVar48._16_4_ = fVar56 * auVar34._16_4_;
      fVar57 = auVar26._20_4_;
      auVar48._20_4_ = fVar57 * auVar34._20_4_;
      fVar58 = auVar26._24_4_;
      auVar48._24_4_ = fVar58 * auVar34._24_4_;
      fVar59 = auVar26._28_4_;
      auVar48._28_4_ = fVar59 * auVar34._28_4_;
      auVar40 = vfmadd231ps_fma(auVar48,auVar5,auVar29);
      auVar33 = vshufps_avx(auVar38,auVar30,0xee);
      auVar28 = vshufps_avx(auVar33,auVar32,0x88);
      auVar32 = vshufps_avx(auVar33,auVar32,0xdd);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar6,auVar34);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar6,auVar29);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar47,ZEXT1632(auVar7));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar40),auVar6,auVar28);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar43,ZEXT1632(auVar7));
      auVar40 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar47,ZEXT1632(auVar3));
      auVar45 = ZEXT1632(auVar3);
      auVar46._0_4_ = fVar51 * auVar29._0_4_;
      auVar46._4_4_ = fVar53 * auVar29._4_4_;
      auVar46._8_4_ = fVar54 * auVar29._8_4_;
      auVar46._12_4_ = fVar55 * auVar29._12_4_;
      auVar46._16_4_ = fVar56 * auVar29._16_4_;
      auVar46._20_4_ = fVar57 * auVar29._20_4_;
      auVar46._24_4_ = fVar58 * auVar29._24_4_;
      auVar46._28_4_ = fVar59 * auVar29._28_4_;
      auVar3 = vfmadd231ps_fma(auVar46,auVar5,auVar28);
      auVar39._16_16_ = *(undefined1 (*) [16])(lVar12 + 0x10 + uVar24 * 4);
      auVar39._0_16_ = *(undefined1 (*) [16])(lVar16 + 0x10 + uVar24 * 4);
      auVar37._16_16_ = *(undefined1 (*) [16])(lVar1 + 0x10 + uVar24 * 4);
      auVar37._0_16_ = *(undefined1 (*) [16])(lVar18 + 0x10 + uVar24 * 4);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar6,auVar32);
      auVar31._16_16_ = *(undefined1 (*) [16])(lVar13 + 0x10 + uVar24 * 4);
      auVar31._0_16_ = *(undefined1 (*) [16])(lVar17 + 0x10 + uVar24 * 4);
      auVar29 = vshufps_avx(auVar39,auVar31,0x44);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar43,auVar45);
      auVar44._0_4_ = fVar51 * auVar28._0_4_;
      auVar44._4_4_ = fVar53 * auVar28._4_4_;
      auVar44._8_4_ = fVar54 * auVar28._8_4_;
      auVar44._12_4_ = fVar55 * auVar28._12_4_;
      auVar44._16_4_ = fVar56 * auVar28._16_4_;
      auVar44._20_4_ = fVar57 * auVar28._20_4_;
      auVar44._24_4_ = fVar58 * auVar28._24_4_;
      auVar44._28_4_ = fVar59 * auVar28._28_4_;
      auVar41._0_4_ = fVar51 * auVar32._0_4_;
      auVar41._4_4_ = fVar53 * auVar32._4_4_;
      auVar41._8_4_ = fVar54 * auVar32._8_4_;
      auVar41._12_4_ = fVar55 * auVar32._12_4_;
      auVar41._16_4_ = fVar56 * auVar32._16_4_;
      auVar41._20_4_ = fVar57 * auVar32._20_4_;
      auVar41._24_4_ = fVar58 * auVar32._24_4_;
      auVar41._28_4_ = fVar59 * auVar32._28_4_;
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar47,ZEXT1632(auVar40));
      auVar28 = ZEXT1632(*(undefined1 (*) [16])(lVar19 + 0x10 + uVar24 * 4));
      auVar33 = vshufps_avx(auVar37,auVar28,0xee);
      auVar34 = vshufps_avx(auVar39,auVar31,0xee);
      auVar28 = vshufps_avx(auVar37,auVar28,0x44);
      auVar35 = vshufps_avx(auVar29,auVar28,0x88);
      auVar28 = vshufps_avx(auVar29,auVar28,0xdd);
      auVar3 = vfmadd231ps_fma(auVar44,auVar5,auVar32);
      auVar29 = vshufps_avx(auVar34,auVar33,0x88);
      auVar42._0_4_ = fVar51 * auVar35._0_4_;
      auVar42._4_4_ = fVar53 * auVar35._4_4_;
      auVar42._8_4_ = fVar54 * auVar35._8_4_;
      auVar42._12_4_ = fVar55 * auVar35._12_4_;
      auVar42._16_4_ = fVar56 * auVar35._16_4_;
      auVar42._20_4_ = fVar57 * auVar35._20_4_;
      auVar42._24_4_ = fVar58 * auVar35._24_4_;
      auVar42._28_4_ = fVar59 * auVar35._28_4_;
      local_260 = vshufps_avx(auVar34,auVar33,0xdd);
      auVar52._0_4_ = fVar51 * auVar28._0_4_;
      auVar52._4_4_ = fVar53 * auVar28._4_4_;
      auVar52._8_4_ = fVar54 * auVar28._8_4_;
      auVar52._12_4_ = fVar55 * auVar28._12_4_;
      auVar52._16_4_ = fVar56 * auVar28._16_4_;
      auVar52._20_4_ = fVar57 * auVar28._20_4_;
      auVar52._24_4_ = fVar58 * auVar28._24_4_;
      auVar52._28_4_ = fVar59 * auVar28._28_4_;
      auVar4 = vfmadd231ps_fma(auVar52,auVar5,auVar29);
      auVar9 = vfmadd231ps_fma(auVar41,auVar5,auVar35);
      auVar10 = vfmadd231ps_fma(auVar42,auVar5,auVar28);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar6,auVar29);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar6,auVar35);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar6,auVar28);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar6,local_260);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar43,ZEXT1632(auVar40));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar47,ZEXT1632(auVar8));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar43,ZEXT1632(auVar8));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar47,ZEXT1632(auVar11));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar43,ZEXT1632(auVar11));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar47,ZEXT1632(auVar9));
      auVar32 = ZEXT1632(auVar10);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar43,ZEXT1632(auVar9));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar47,ZEXT1632(auVar10));
      auVar33 = ZEXT1632(auVar3);
      auVar50._0_4_ = auVar29._0_4_ * fVar51;
      auVar50._4_4_ = auVar29._4_4_ * fVar53;
      auVar50._8_4_ = auVar29._8_4_ * fVar54;
      auVar50._12_4_ = auVar29._12_4_ * fVar55;
      auVar50._16_4_ = auVar29._16_4_ * fVar56;
      auVar50._20_4_ = auVar29._20_4_ * fVar57;
      auVar50._24_4_ = auVar29._24_4_ * fVar58;
      auVar50._28_4_ = auVar29._28_4_ * fVar59;
      auVar4 = vfmadd231ps_fma(auVar50,auVar5,local_260);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar43,ZEXT1632(auVar10));
      auVar27 = ZEXT1632(auVar3);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar27,auVar47);
      auVar25._0_4_ = local_260._0_4_ * fVar51;
      auVar25._4_4_ = local_260._4_4_ * fVar53;
      auVar25._8_4_ = local_260._8_4_ * fVar54;
      auVar25._12_4_ = local_260._12_4_ * fVar55;
      auVar25._16_4_ = local_260._16_4_ * fVar56;
      auVar25._20_4_ = local_260._20_4_ * fVar57;
      auVar25._24_4_ = local_260._24_4_ * fVar58;
      auVar25._28_4_ = local_260._28_4_ * fVar59;
      auVar4 = vfmadd231ps_fma(auVar25,auVar43,auVar27);
      auVar34 = vshufps_avx(ZEXT1632(auVar40),ZEXT1632(auVar8),0x44);
      auVar28 = vshufps_avx(ZEXT1632(auVar7),auVar45,0x44);
      auVar35 = vshufps_avx(auVar28,auVar34,0x88);
      *(undefined1 (*) [16])(lVar20 + uVar24 * 4) = auVar35._0_16_;
      auVar34 = vshufps_avx(auVar28,auVar34,0xdd);
      auVar28 = vshufps_avx(ZEXT1632(auVar7),auVar45,0xee);
      *(undefined1 (*) [16])(lVar21 + uVar24 * 4) = auVar34._0_16_;
      auVar45 = vshufps_avx(ZEXT1632(auVar40),ZEXT1632(auVar8),0xee);
      auVar49 = vshufps_avx(auVar28,auVar45,0x88);
      *(undefined1 (*) [16])(lVar22 + uVar24 * 4) = auVar49._0_16_;
      auVar28 = vshufps_avx(auVar28,auVar45,0xdd);
      *(undefined1 (*) [16])(lVar23 + uVar24 * 4) = auVar28._0_16_;
      *(undefined1 (*) [16])(lVar14 + uVar24 * 4) = auVar35._16_16_;
      *(undefined1 (*) [16])(lVar15 + uVar24 * 4) = auVar34._16_16_;
      *(undefined1 (*) [16])(lVar2 + uVar24 * 4) = auVar49._16_16_;
      auVar34 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar9),0x44);
      auVar28 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar9),0xee);
      auVar35 = vshufps_avx(ZEXT1632(auVar10),auVar27,0x44);
      auVar45 = vshufps_avx(auVar34,auVar35,0x88);
      *(undefined1 (*) [16])(lVar20 + 0x10 + uVar24 * 4) = auVar45._0_16_;
      auVar34 = vshufps_avx(auVar34,auVar35,0xdd);
      *(undefined1 (*) [16])(lVar21 + 0x10 + uVar24 * 4) = auVar34._0_16_;
      auVar35 = vshufps_avx(ZEXT1632(auVar10),auVar27,0xee);
      auVar49 = vshufps_avx(auVar28,auVar35,0x88);
      *(undefined1 (*) [16])(lVar22 + 0x10 + uVar24 * 4) = auVar49._0_16_;
      auVar28 = vshufps_avx(auVar28,auVar35,0xdd);
      *(undefined1 (*) [16])(lVar23 + 0x10 + uVar24 * 4) = auVar28._0_16_;
      *(undefined1 (*) [16])(lVar14 + 0x10 + uVar24 * 4) = auVar45._16_16_;
      *(undefined1 (*) [16])(lVar15 + 0x10 + uVar24 * 4) = auVar34._16_16_;
      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar24 * 4) = auVar49._16_16_;
      local_280 = local_280 + 8;
      uVar24 = (ulonglong)local_280;
      auVar40 = ZEXT816(0) << 0x20;
    } while (local_280 < param_5);
  }
  auVar5 = vshufps_avx(auVar29,local_260,0x44);
  auVar26 = vshufps_avx(auVar32,auVar33,0x44);
  auVar6 = vshufps_avx(auVar26,auVar5,0xdd);
  auVar29 = vshufps_avx(auVar29,local_260,0xee);
  auVar5 = vshufps_avx(auVar26,auVar5,0x88);
  *(undefined1 (*) [16])*param_4 = auVar5._0_16_;
  auVar26 = vshufps_avx(auVar32,auVar33,0xee);
  auVar32 = vshufps_avx(auVar26,auVar29,0x88);
  auVar26 = vshufps_avx(auVar26,auVar29,0xdd);
  *(undefined1 (*) [16])param_4[1] = auVar6._0_16_;
  *(undefined1 (*) [16])param_4[2] = auVar32._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar26._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar5._16_16_;
  *(undefined1 (*) [16])param_4[5] = auVar6._16_16_;
  *(undefined1 (*) [16])param_4[6] = auVar32._16_16_;
  return;
}



// FUNCTION 14554ffe0 FUN_14554ffe0 body=1478 status=ok
// SIG undefined FUN_14554ffe0(void)

void FUN_14554ffe0(undefined1 (*param_1) [32],longlong *param_2,undefined8 *param_3,
                  undefined8 *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [24];
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar42 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  uint local_240;
  undefined1 local_220 [32];
  undefined1 local_120 [32];
  
  lVar12 = *(longlong *)param_1[1];
  lVar13 = *(longlong *)(param_1[1] + 8);
  auVar21 = *(undefined1 (*) [24])*param_1;
  lVar16 = *(longlong *)(*param_1 + 0x18);
  auVar26 = *param_1;
  lVar17 = *param_2;
  lVar18 = param_2[1];
  lVar19 = param_2[2];
  lVar20 = param_2[3];
  auVar32._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar32._0_16_ = *(undefined1 (*) [16])*param_3;
  lVar14 = param_2[4];
  lVar15 = param_2[5];
  auVar54._0_12_ = ZEXT812(0);
  auVar54._12_4_ = 0;
  auVar30._16_16_ = *(undefined1 (*) [16])param_3[5];
  auVar30._0_16_ = *(undefined1 (*) [16])param_3[1];
  auVar25 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar23 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar3 = vshufps_avx(auVar23,auVar25,0x44);
  auVar25 = vshufps_avx(auVar23,auVar25,0xee);
  auVar23 = vshufps_avx(auVar32,auVar30,0x44);
  auVar4 = vshufps_avx(auVar23,auVar3,0x88);
  auVar3 = vshufps_avx(auVar23,auVar3,0xdd);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar23 = vshufps_avx(auVar32,auVar30,0xee);
  auVar30 = vshufps_avx(auVar23,auVar25,0xdd);
  auVar50._0_8_ = auVar30._0_8_ ^ 0x8000000080000000;
  auVar50._8_4_ = auVar30._8_4_ ^ 0x80000000;
  auVar50._12_4_ = auVar30._12_4_ ^ 0x80000000;
  auVar50._16_4_ = auVar30._16_4_ ^ 0x80000000;
  auVar50._20_4_ = auVar30._20_4_ ^ 0x80000000;
  auVar50._24_4_ = auVar30._24_4_ ^ 0x80000000;
  auVar50._28_4_ = auVar30._28_4_ ^ 0x80000000;
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_3[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[5])[1]),0x10);
  auVar56._0_8_ = auVar1._0_8_ ^ 0x8000000080000000;
  auVar56._8_4_ = -auVar1._8_4_;
  auVar56._12_4_ = -auVar1._12_4_;
  auVar56._16_4_ = -auVar2._0_4_;
  auVar56._20_4_ = -auVar2._4_4_;
  auVar56._24_4_ = -auVar2._8_4_;
  auVar56._28_4_ = -auVar2._12_4_;
  auVar25 = vshufps_avx(auVar23,auVar25,0x88);
  auVar33._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar33._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar31._16_16_ = *(undefined1 (*) [16])param_4[5];
  auVar31._0_16_ = *(undefined1 (*) [16])param_4[1];
  auVar23 = vshufps_avx(auVar33,auVar31,0x44);
  auVar30 = vshufps_avx(auVar33,auVar31,0xee);
  auVar31 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar32 = vshufps_avx(auVar23,auVar31,0xdd);
  auVar23 = vshufps_avx(auVar23,auVar31,0x88);
  auVar52._0_4_ = auVar23._0_4_ * -auVar1._0_4_;
  auVar52._4_4_ = auVar23._4_4_ * -auVar1._4_4_;
  auVar52._8_4_ = auVar23._8_4_ * auVar56._8_4_;
  auVar52._12_4_ = auVar23._12_4_ * auVar56._12_4_;
  auVar52._16_4_ = auVar23._16_4_ * auVar56._16_4_;
  auVar52._20_4_ = auVar23._20_4_ * auVar56._20_4_;
  auVar52._24_4_ = auVar23._24_4_ * auVar56._24_4_;
  auVar52._28_4_ = auVar23._28_4_ * auVar56._28_4_;
  auVar23 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar31 = vshufps_avx(auVar30,auVar23,0xdd);
  uVar22 = 0;
  local_240 = 0;
  auVar23 = vshufps_avx(auVar30,auVar23,0x88);
  auVar2 = vfmadd231ps_fma(auVar52,auVar23,auVar25);
  auVar23._0_4_ = auVar32._0_4_ * -auVar1._0_4_;
  auVar23._4_4_ = auVar32._4_4_ * -auVar1._4_4_;
  auVar23._8_4_ = auVar32._8_4_ * auVar56._8_4_;
  auVar23._12_4_ = auVar32._12_4_ * auVar56._12_4_;
  auVar23._16_4_ = auVar32._16_4_ * auVar56._16_4_;
  auVar23._20_4_ = auVar32._20_4_ * auVar56._20_4_;
  auVar23._24_4_ = auVar32._24_4_ * auVar56._24_4_;
  auVar23._28_4_ = auVar32._28_4_ * auVar56._28_4_;
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar32,auVar50);
  auVar2 = vfmadd231ps_fma(auVar23,auVar31,auVar25);
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar31,auVar3);
  auVar30 = auVar26;
  auVar31 = auVar26;
  auVar23 = auVar26;
  if (param_5 != 0) {
    local_220._16_8_ = auVar21._16_8_;
    local_220._8_8_ = auVar21._8_8_;
    local_220._0_8_ = auVar21._0_8_;
    while( true ) {
      local_120 = ZEXT1632(auVar2);
      auVar36._16_16_ = *(undefined1 (*) [16])(lVar12 + uVar22 * 4);
      auVar36._0_16_ = *(undefined1 (*) [16])(local_220._0_8_ + uVar22 * 4);
      auVar28._16_16_ = *(undefined1 (*) [16])(lVar13 + uVar22 * 4);
      auVar28._0_16_ = *(undefined1 (*) [16])(local_220._8_8_ + uVar22 * 4);
      auVar34._16_16_ = auVar54;
      auVar34._0_16_ = *(undefined1 (*) [16])(local_220._16_8_ + uVar22 * 4);
      auVar26._16_16_ = auVar54;
      auVar26._0_16_ = *(undefined1 (*) [16])(lVar16 + uVar22 * 4);
      auVar23 = vshufps_avx(auVar36,auVar28,0x44);
      auVar30 = vshufps_avx(auVar36,auVar28,0xee);
      auVar31 = vshufps_avx(auVar34,auVar26,0xee);
      auVar32 = vshufps_avx(auVar30,auVar31,0xdd);
      auVar30 = vshufps_avx(auVar30,auVar31,0x88);
      auVar31 = vshufps_avx(auVar34,auVar26,0x44);
      auVar26 = vshufps_avx(auVar23,auVar31,0x88);
      auVar23 = vshufps_avx(auVar23,auVar31,0xdd);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar4,auVar26);
      auVar1 = vfmadd231ps_fma(local_120,auVar3,auVar26);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar4,auVar23);
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar50,ZEXT1632(auVar5));
      fVar41 = auVar25._0_4_;
      auVar51._0_4_ = fVar41 * auVar26._0_4_;
      fVar43 = auVar25._4_4_;
      auVar51._4_4_ = fVar43 * auVar26._4_4_;
      fVar44 = auVar25._8_4_;
      auVar51._8_4_ = fVar44 * auVar26._8_4_;
      fVar45 = auVar25._12_4_;
      auVar51._12_4_ = fVar45 * auVar26._12_4_;
      fVar46 = auVar25._16_4_;
      auVar51._16_4_ = fVar46 * auVar26._16_4_;
      fVar47 = auVar25._20_4_;
      auVar51._20_4_ = fVar47 * auVar26._20_4_;
      fVar48 = auVar25._24_4_;
      auVar51._24_4_ = fVar48 * auVar26._24_4_;
      fVar49 = auVar25._28_4_;
      auVar51._28_4_ = fVar49 * auVar26._28_4_;
      auVar1 = vfmadd231ps_fma(auVar51,auVar3,auVar23);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar4,auVar30);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar56,ZEXT1632(auVar5));
      auVar42._0_4_ = fVar41 * auVar23._0_4_;
      auVar42._4_4_ = fVar43 * auVar23._4_4_;
      auVar42._8_4_ = fVar44 * auVar23._8_4_;
      auVar42._12_4_ = fVar45 * auVar23._12_4_;
      auVar42._16_4_ = fVar46 * auVar23._16_4_;
      auVar42._20_4_ = fVar47 * auVar23._20_4_;
      auVar42._24_4_ = fVar48 * auVar23._24_4_;
      auVar42._28_4_ = fVar49 * auVar23._28_4_;
      auVar2 = vfmadd231ps_fma(auVar42,auVar3,auVar30);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar4,auVar32);
      auVar29._16_16_ = *(undefined1 (*) [16])(lVar13 + 0x10 + uVar22 * 4);
      auVar29._0_16_ = *(undefined1 (*) [16])(local_220._8_8_ + 0x10 + uVar22 * 4);
      auVar27._16_16_ = auVar54;
      auVar27._0_16_ = *(undefined1 (*) [16])(lVar16 + 0x10 + uVar22 * 4);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar56,ZEXT1632(auVar6));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar50,ZEXT1632(auVar6));
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar50,ZEXT1632(auVar7));
      auVar37._16_16_ = *(undefined1 (*) [16])(lVar12 + 0x10 + uVar22 * 4);
      auVar37._0_16_ = *(undefined1 (*) [16])(local_220._0_8_ + 0x10 + uVar22 * 4);
      auVar35._16_16_ = auVar54;
      auVar35._0_16_ = *(undefined1 (*) [16])(local_220._16_8_ + 0x10 + uVar22 * 4);
      auVar23 = vshufps_avx(auVar37,auVar29,0x44);
      auVar31 = vshufps_avx(auVar37,auVar29,0xee);
      auVar33 = vshufps_avx(auVar35,auVar27,0xee);
      auVar26 = vshufps_avx(auVar31,auVar33,0x88);
      auVar52 = vshufps_avx(auVar35,auVar27,0x44);
      auVar24 = vshufps_avx(auVar23,auVar52,0x88);
      auVar52 = vshufps_avx(auVar23,auVar52,0xdd);
      auVar23 = vshufps_avx(auVar31,auVar33,0xdd);
      auVar38._0_4_ = fVar41 * auVar32._0_4_;
      auVar38._4_4_ = fVar43 * auVar32._4_4_;
      auVar38._8_4_ = fVar44 * auVar32._8_4_;
      auVar38._12_4_ = fVar45 * auVar32._12_4_;
      auVar38._16_4_ = fVar46 * auVar32._16_4_;
      auVar38._20_4_ = fVar47 * auVar32._20_4_;
      auVar38._24_4_ = fVar48 * auVar32._24_4_;
      auVar38._28_4_ = fVar49 * auVar32._28_4_;
      auVar39._0_4_ = fVar41 * auVar30._0_4_;
      auVar39._4_4_ = fVar43 * auVar30._4_4_;
      auVar39._8_4_ = fVar44 * auVar30._8_4_;
      auVar39._12_4_ = fVar45 * auVar30._12_4_;
      auVar39._16_4_ = fVar46 * auVar30._16_4_;
      auVar39._20_4_ = fVar47 * auVar30._20_4_;
      auVar39._24_4_ = fVar48 * auVar30._24_4_;
      auVar39._28_4_ = fVar49 * auVar30._28_4_;
      auVar1 = vfmadd231ps_fma(auVar39,auVar3,auVar32);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar4,auVar24);
      auVar2 = vfmadd231ps_fma(auVar38,auVar3,auVar24);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar4,auVar52);
      auVar40._0_4_ = fVar41 * auVar24._0_4_;
      auVar40._4_4_ = fVar43 * auVar24._4_4_;
      auVar40._8_4_ = fVar44 * auVar24._8_4_;
      auVar40._12_4_ = fVar45 * auVar24._12_4_;
      auVar40._16_4_ = fVar46 * auVar24._16_4_;
      auVar40._20_4_ = fVar47 * auVar24._20_4_;
      auVar40._24_4_ = fVar48 * auVar24._24_4_;
      auVar40._28_4_ = fVar49 * auVar24._28_4_;
      auVar54 = vfmadd231ps_fma(auVar40,auVar3,auVar52);
      auVar54 = vfmadd231ps_fma(ZEXT1632(auVar54),auVar4,auVar26);
      auVar55._0_4_ = fVar41 * auVar52._0_4_;
      auVar55._4_4_ = fVar43 * auVar52._4_4_;
      auVar55._8_4_ = fVar44 * auVar52._8_4_;
      auVar55._12_4_ = fVar45 * auVar52._12_4_;
      auVar55._16_4_ = fVar46 * auVar52._16_4_;
      auVar55._20_4_ = fVar47 * auVar52._20_4_;
      auVar55._24_4_ = fVar48 * auVar52._24_4_;
      auVar55._28_4_ = fVar49 * auVar52._28_4_;
      auVar9 = vfmadd231ps_fma(auVar55,auVar3,auVar26);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar23,auVar4);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar56,ZEXT1632(auVar7));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar50,ZEXT1632(auVar8));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar56,ZEXT1632(auVar8));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar50,ZEXT1632(auVar10));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar54),auVar56,ZEXT1632(auVar10));
      auVar54 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar50,ZEXT1632(auVar11));
      auVar30 = ZEXT1632(auVar54);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar56,ZEXT1632(auVar11));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar50,ZEXT1632(auVar54));
      auVar31 = ZEXT1632(auVar1);
      auVar53._0_4_ = fVar41 * auVar26._0_4_;
      auVar53._4_4_ = fVar43 * auVar26._4_4_;
      auVar53._8_4_ = fVar44 * auVar26._8_4_;
      auVar53._12_4_ = fVar45 * auVar26._12_4_;
      auVar53._16_4_ = fVar46 * auVar26._16_4_;
      auVar53._20_4_ = fVar47 * auVar26._20_4_;
      auVar53._24_4_ = fVar48 * auVar26._24_4_;
      auVar53._28_4_ = fVar49 * auVar26._28_4_;
      auVar2 = vfmadd231ps_fma(auVar53,auVar3,auVar23);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar56,ZEXT1632(auVar54));
      auVar28 = ZEXT1632(auVar1);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar28,auVar50);
      auVar24._0_4_ = fVar41 * auVar23._0_4_;
      auVar24._4_4_ = fVar43 * auVar23._4_4_;
      auVar24._8_4_ = fVar44 * auVar23._8_4_;
      auVar24._12_4_ = fVar45 * auVar23._12_4_;
      auVar24._16_4_ = fVar46 * auVar23._16_4_;
      auVar24._20_4_ = fVar47 * auVar23._20_4_;
      auVar24._24_4_ = fVar48 * auVar23._24_4_;
      auVar24._28_4_ = fVar49 * auVar23._28_4_;
      auVar2 = vfmadd231ps_fma(auVar24,auVar56,auVar28);
      auVar32 = vshufps_avx(ZEXT1632(auVar7),ZEXT1632(auVar8),0x44);
      auVar33 = vshufps_avx(ZEXT1632(auVar5),ZEXT1632(auVar6),0x44);
      auVar52 = vshufps_avx(auVar33,auVar32,0x88);
      *(undefined1 (*) [16])(lVar17 + uVar22 * 4) = auVar52._0_16_;
      auVar32 = vshufps_avx(auVar33,auVar32,0xdd);
      *(undefined1 (*) [16])(lVar18 + uVar22 * 4) = auVar32._0_16_;
      auVar33 = vshufps_avx(ZEXT1632(auVar5),ZEXT1632(auVar6),0xee);
      auVar24 = vshufps_avx(ZEXT1632(auVar7),ZEXT1632(auVar8),0xee);
      auVar27 = vshufps_avx(auVar33,auVar24,0x88);
      *(undefined1 (*) [16])(lVar19 + uVar22 * 4) = auVar27._0_16_;
      auVar33 = vshufps_avx(auVar33,auVar24,0xdd);
      *(undefined1 (*) [16])(lVar20 + uVar22 * 4) = auVar33._0_16_;
      *(undefined1 (*) [16])(lVar14 + uVar22 * 4) = auVar52._16_16_;
      *(undefined1 (*) [16])(lVar15 + uVar22 * 4) = auVar32._16_16_;
      auVar32 = vshufps_avx(ZEXT1632(auVar54),auVar28,0x44);
      auVar33 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar11),0x44);
      auVar52 = vshufps_avx(auVar33,auVar32,0x88);
      *(undefined1 (*) [16])(lVar17 + 0x10 + uVar22 * 4) = auVar52._0_16_;
      auVar32 = vshufps_avx(auVar33,auVar32,0xdd);
      *(undefined1 (*) [16])(lVar18 + 0x10 + uVar22 * 4) = auVar32._0_16_;
      auVar33 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar11),0xee);
      auVar24 = vshufps_avx(ZEXT1632(auVar54),auVar28,0xee);
      auVar27 = vshufps_avx(auVar33,auVar24,0x88);
      *(undefined1 (*) [16])(lVar19 + 0x10 + uVar22 * 4) = auVar27._0_16_;
      auVar33 = vshufps_avx(auVar33,auVar24,0xdd);
      *(undefined1 (*) [16])(lVar20 + 0x10 + uVar22 * 4) = auVar33._0_16_;
      *(undefined1 (*) [16])(lVar14 + 0x10 + uVar22 * 4) = auVar52._16_16_;
      *(undefined1 (*) [16])(lVar15 + 0x10 + uVar22 * 4) = auVar32._16_16_;
      local_240 = local_240 + 8;
      uVar22 = (ulonglong)local_240;
      if (param_5 <= local_240) break;
      auVar54 = ZEXT816(0) << 0x20;
    }
  }
  local_220 = auVar23;
  auVar3 = vshufps_avx(auVar26,local_220,0x44);
  auVar25 = vshufps_avx(auVar30,auVar31,0x44);
  auVar23 = vshufps_avx(auVar25,auVar3,0x88);
  *(undefined1 (*) [16])*param_4 = auVar23._0_16_;
  auVar3 = vshufps_avx(auVar25,auVar3,0xdd);
  auVar25 = vshufps_avx(auVar30,auVar31,0xee);
  auVar4 = vshufps_avx(auVar26,local_220,0xee);
  *(undefined1 (*) [16])param_4[1] = auVar3._0_16_;
  auVar30 = vshufps_avx(auVar25,auVar4,0x88);
  auVar25 = vshufps_avx(auVar25,auVar4,0xdd);
  *(undefined1 (*) [16])param_4[2] = auVar30._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar25._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar23._16_16_;
  *(undefined1 (*) [16])param_4[5] = auVar3._16_16_;
  return;
}



// FUNCTION 1455505b0 FUN_1455505b0 body=1329 status=ok
// SIG undefined FUN_1455505b0(void)

void FUN_1455505b0(undefined1 (*param_1) [32],longlong *param_2,undefined8 *param_3,
                  undefined8 *param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [24];
  uint uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 local_220 [32];
  undefined1 local_120 [32];
  
  lVar1 = *(longlong *)param_1[1];
  auVar20 = *(undefined1 (*) [24])*param_1;
  lVar15 = *(longlong *)(*param_1 + 0x18);
  auVar29 = *param_1;
  uVar22 = 0;
  lVar16 = *param_2;
  lVar17 = param_2[1];
  lVar18 = param_2[2];
  lVar19 = param_2[3];
  auVar28._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar28._0_16_ = *(undefined1 (*) [16])*param_3;
  lVar2 = param_2[4];
  auVar26 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar27 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar4 = vshufps_avx(auVar27,auVar26,0x44);
  auVar23 = ZEXT1632(*(undefined1 (*) [16])param_3[1]);
  auVar5 = vshufps_avx(auVar28,auVar23,0x44);
  auVar6 = vshufps_avx(auVar5,auVar4,0xdd);
  auVar23 = vshufps_avx(auVar28,auVar23,0xee);
  auVar26 = vshufps_avx(auVar27,auVar26,0xee);
  auVar4 = vshufps_avx(auVar5,auVar4,0x88);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar5 = vshufps_avx(auVar23,auVar26,0xdd);
  auVar42._0_8_ = auVar5._0_8_ ^ 0x8000000080000000;
  auVar42._8_4_ = auVar5._8_4_ ^ 0x80000000;
  auVar42._12_4_ = auVar5._12_4_ ^ 0x80000000;
  auVar42._16_4_ = auVar5._16_4_ ^ 0x80000000;
  auVar42._20_4_ = auVar5._20_4_ ^ 0x80000000;
  auVar42._24_4_ = auVar5._24_4_ ^ 0x80000000;
  auVar42._28_4_ = auVar5._28_4_ ^ 0x80000000;
  auVar46._0_8_ = auVar3._0_8_ ^ 0x8000000080000000;
  auVar46._8_4_ = -auVar3._8_4_;
  auVar46._12_4_ = -auVar3._12_4_;
  auVar46._16_4_ = -*(float *)((undefined1 (*) [16])param_3[4])[1];
  auVar46._20_4_ = 0x80000000;
  auVar46._24_4_ = 0x80000000;
  auVar46._28_4_ = 0x80000000;
  auVar5 = vshufps_avx(auVar23,auVar26,0x88);
  auVar26._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar26._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar23 = vshufps_avx(auVar26,ZEXT1632(*(undefined1 (*) [16])param_4[1]),0x44);
  auVar26 = vshufps_avx(auVar26,ZEXT1632(*(undefined1 (*) [16])param_4[1]),0xee);
  auVar27 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar28 = vshufps_avx(auVar23,auVar27,0xdd);
  auVar23 = vshufps_avx(auVar23,auVar27,0x88);
  auVar44._0_4_ = auVar23._0_4_ * -auVar3._0_4_;
  auVar44._4_4_ = auVar23._4_4_ * -auVar3._4_4_;
  auVar44._8_4_ = auVar23._8_4_ * auVar46._8_4_;
  auVar44._12_4_ = auVar23._12_4_ * auVar46._12_4_;
  auVar44._16_4_ = auVar23._16_4_ * auVar46._16_4_;
  auVar44._20_4_ = auVar23._20_4_ * -0.0;
  auVar44._24_4_ = auVar23._24_4_ * -0.0;
  auVar44._28_4_ = auVar23._28_4_ * -0.0;
  auVar23 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar27 = vshufps_avx(auVar26,auVar23,0xdd);
  auVar23 = vshufps_avx(auVar26,auVar23,0x88);
  auVar7 = vfmadd231ps_fma(auVar44,auVar23,auVar5);
  auVar23._0_4_ = auVar28._0_4_ * -auVar3._0_4_;
  auVar23._4_4_ = auVar28._4_4_ * -auVar3._4_4_;
  auVar23._8_4_ = auVar28._8_4_ * auVar46._8_4_;
  auVar23._12_4_ = auVar28._12_4_ * auVar46._12_4_;
  auVar23._16_4_ = auVar28._16_4_ * auVar46._16_4_;
  auVar23._20_4_ = auVar28._20_4_ * -0.0;
  auVar23._24_4_ = auVar28._24_4_ * -0.0;
  auVar23._28_4_ = auVar28._28_4_ * -0.0;
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar28,auVar42);
  auVar7 = vfmadd231ps_fma(auVar23,auVar27,auVar5);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar27,auVar6);
  auVar26 = auVar29;
  auVar27 = auVar29;
  auVar23 = auVar29;
  if (param_5 != 0) {
    local_220._16_8_ = auVar20._16_8_;
    local_220._8_8_ = auVar20._8_8_;
    local_220._0_8_ = auVar20._0_8_;
    do {
      local_120 = ZEXT1632(auVar7);
      auVar24._16_16_ = *(undefined1 (*) [16])(lVar1 + uVar22 * 4);
      auVar24._0_16_ = *(undefined1 (*) [16])(local_220._0_8_ + uVar22 * 4);
      auVar27 = ZEXT1632(*(undefined1 (*) [16])(lVar15 + uVar22 * 4));
      auVar28 = ZEXT1632(*(undefined1 (*) [16])(local_220._16_8_ + uVar22 * 4));
      auVar23 = vshufps_avx(auVar28,auVar27,0xee);
      auVar29 = ZEXT1632(*(undefined1 (*) [16])(local_220._8_8_ + uVar22 * 4));
      auVar26 = vshufps_avx(auVar24,auVar29,0x44);
      auVar27 = vshufps_avx(auVar28,auVar27,0x44);
      auVar28 = vshufps_avx(auVar26,auVar27,0x88);
      auVar26 = vshufps_avx(auVar26,auVar27,0xdd);
      auVar27 = vshufps_avx(auVar24,auVar29,0xee);
      auVar44 = vshufps_avx(auVar27,auVar23,0xdd);
      auVar27 = vshufps_avx(auVar27,auVar23,0x88);
      auVar7 = vfmadd231ps_fma(local_120,auVar6,auVar28);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar4,auVar26);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar4,auVar28);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar42,ZEXT1632(auVar8));
      fVar34 = auVar5._0_4_;
      auVar43._0_4_ = fVar34 * auVar28._0_4_;
      fVar35 = auVar5._4_4_;
      auVar43._4_4_ = fVar35 * auVar28._4_4_;
      fVar36 = auVar5._8_4_;
      auVar43._8_4_ = fVar36 * auVar28._8_4_;
      fVar37 = auVar5._12_4_;
      auVar43._12_4_ = fVar37 * auVar28._12_4_;
      fVar38 = auVar5._16_4_;
      auVar43._16_4_ = fVar38 * auVar28._16_4_;
      fVar39 = auVar5._20_4_;
      auVar43._20_4_ = fVar39 * auVar28._20_4_;
      fVar40 = auVar5._24_4_;
      auVar43._24_4_ = fVar40 * auVar28._24_4_;
      fVar41 = auVar5._28_4_;
      auVar43._28_4_ = fVar41 * auVar28._28_4_;
      auVar7 = vfmadd231ps_fma(auVar43,auVar6,auVar26);
      auVar29._0_4_ = fVar34 * auVar26._0_4_;
      auVar29._4_4_ = fVar35 * auVar26._4_4_;
      auVar29._8_4_ = fVar36 * auVar26._8_4_;
      auVar29._12_4_ = fVar37 * auVar26._12_4_;
      auVar29._16_4_ = fVar38 * auVar26._16_4_;
      auVar29._20_4_ = fVar39 * auVar26._20_4_;
      auVar29._24_4_ = fVar40 * auVar26._24_4_;
      auVar29._28_4_ = fVar41 * auVar26._28_4_;
      auVar9 = vfmadd231ps_fma(auVar29,auVar6,auVar27);
      auVar28 = ZEXT1632(*(undefined1 (*) [16])(lVar15 + 0x10 + uVar22 * 4));
      auVar25 = ZEXT1632(*(undefined1 (*) [16])(local_220._16_8_ + 0x10 + uVar22 * 4));
      auVar26 = vshufps_avx(auVar25,auVar28,0xee);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar4,auVar27);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar4,auVar44);
      auVar24 = ZEXT1632(auVar3);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar46,auVar24);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar46,ZEXT1632(auVar8));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar42,ZEXT1632(auVar3));
      auVar30._16_16_ = *(undefined1 (*) [16])(lVar1 + 0x10 + uVar22 * 4);
      auVar30._0_16_ = *(undefined1 (*) [16])(local_220._0_8_ + 0x10 + uVar22 * 4);
      auVar29 = ZEXT1632(*(undefined1 (*) [16])(local_220._8_8_ + 0x10 + uVar22 * 4));
      auVar23 = vshufps_avx(auVar30,auVar29,0x44);
      auVar28 = vshufps_avx(auVar25,auVar28,0x44);
      auVar25 = vshufps_avx(auVar23,auVar28,0x88);
      auVar28 = vshufps_avx(auVar23,auVar28,0xdd);
      auVar29 = vshufps_avx(auVar30,auVar29,0xee);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar42,ZEXT1632(auVar10));
      auVar23 = vshufps_avx(auVar29,auVar26,0xdd);
      auVar29 = vshufps_avx(auVar29,auVar26,0x88);
      auVar31._0_4_ = fVar34 * auVar44._0_4_;
      auVar31._4_4_ = fVar35 * auVar44._4_4_;
      auVar31._8_4_ = fVar36 * auVar44._8_4_;
      auVar31._12_4_ = fVar37 * auVar44._12_4_;
      auVar31._16_4_ = fVar38 * auVar44._16_4_;
      auVar31._20_4_ = fVar39 * auVar44._20_4_;
      auVar31._24_4_ = fVar40 * auVar44._24_4_;
      auVar31._28_4_ = fVar41 * auVar44._28_4_;
      auVar32._0_4_ = fVar34 * auVar27._0_4_;
      auVar32._4_4_ = fVar35 * auVar27._4_4_;
      auVar32._8_4_ = fVar36 * auVar27._8_4_;
      auVar32._12_4_ = fVar37 * auVar27._12_4_;
      auVar32._16_4_ = fVar38 * auVar27._16_4_;
      auVar32._20_4_ = fVar39 * auVar27._20_4_;
      auVar32._24_4_ = fVar40 * auVar27._24_4_;
      auVar32._28_4_ = fVar41 * auVar27._28_4_;
      auVar3 = vfmadd231ps_fma(auVar32,auVar6,auVar44);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar25,auVar4);
      auVar7 = vfmadd231ps_fma(auVar31,auVar6,auVar25);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar28,auVar4);
      auVar33._0_4_ = fVar34 * auVar25._0_4_;
      auVar33._4_4_ = fVar35 * auVar25._4_4_;
      auVar33._8_4_ = fVar36 * auVar25._8_4_;
      auVar33._12_4_ = fVar37 * auVar25._12_4_;
      auVar33._16_4_ = fVar38 * auVar25._16_4_;
      auVar33._20_4_ = fVar39 * auVar25._20_4_;
      auVar33._24_4_ = fVar40 * auVar25._24_4_;
      auVar33._28_4_ = fVar41 * auVar25._28_4_;
      auVar11 = vfmadd231ps_fma(auVar33,auVar6,auVar28);
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar29,auVar4);
      auVar27._0_4_ = fVar34 * auVar28._0_4_;
      auVar27._4_4_ = fVar35 * auVar28._4_4_;
      auVar27._8_4_ = fVar36 * auVar28._8_4_;
      auVar27._12_4_ = fVar37 * auVar28._12_4_;
      auVar27._16_4_ = fVar38 * auVar28._16_4_;
      auVar27._20_4_ = fVar39 * auVar28._20_4_;
      auVar27._24_4_ = fVar40 * auVar28._24_4_;
      auVar27._28_4_ = fVar41 * auVar28._28_4_;
      auVar12 = vfmadd231ps_fma(auVar27,auVar6,auVar29);
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar23,auVar4);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar46,ZEXT1632(auVar10));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar42,ZEXT1632(auVar9));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar46,ZEXT1632(auVar9));
      auVar14 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar42,ZEXT1632(auVar13));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar46,ZEXT1632(auVar13));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar42,ZEXT1632(auVar14));
      auVar27 = ZEXT1632(auVar11);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar46,ZEXT1632(auVar14));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar42,ZEXT1632(auVar11));
      auVar26 = ZEXT1632(auVar12);
      auVar45._0_4_ = fVar34 * auVar29._0_4_;
      auVar45._4_4_ = fVar35 * auVar29._4_4_;
      auVar45._8_4_ = fVar36 * auVar29._8_4_;
      auVar45._12_4_ = fVar37 * auVar29._12_4_;
      auVar45._16_4_ = fVar38 * auVar29._16_4_;
      auVar45._20_4_ = fVar39 * auVar29._20_4_;
      auVar45._24_4_ = fVar40 * auVar29._24_4_;
      auVar45._28_4_ = fVar41 * auVar29._28_4_;
      auVar3 = vfmadd231ps_fma(auVar45,auVar6,auVar23);
      auVar25._0_4_ = fVar34 * auVar23._0_4_;
      auVar25._4_4_ = fVar35 * auVar23._4_4_;
      auVar25._8_4_ = fVar36 * auVar23._8_4_;
      auVar25._12_4_ = fVar37 * auVar23._12_4_;
      auVar25._16_4_ = fVar38 * auVar23._16_4_;
      auVar25._20_4_ = fVar39 * auVar23._20_4_;
      auVar25._24_4_ = fVar40 * auVar23._24_4_;
      auVar25._28_4_ = fVar41 * auVar23._28_4_;
      auVar7 = vfmadd231ps_fma(auVar25,auVar46,ZEXT1632(auVar12));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar46,ZEXT1632(auVar11));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),ZEXT1632(auVar12),auVar42);
      auVar28 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar9),0x44);
      auVar44 = vshufps_avx(ZEXT1632(auVar8),auVar24,0x44);
      auVar25 = vshufps_avx(ZEXT1632(auVar8),auVar24,0xee);
      auVar24 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar9),0xee);
      auVar30 = vshufps_avx(auVar44,auVar28,0x88);
      *(undefined1 (*) [16])(lVar16 + uVar22 * 4) = auVar30._0_16_;
      auVar28 = vshufps_avx(auVar44,auVar28,0xdd);
      *(undefined1 (*) [16])(lVar17 + uVar22 * 4) = auVar28._0_16_;
      auVar28 = vshufps_avx(auVar25,auVar24,0x88);
      *(undefined1 (*) [16])(lVar18 + uVar22 * 4) = auVar28._0_16_;
      auVar28 = vshufps_avx(auVar25,auVar24,0xdd);
      *(undefined1 (*) [16])(lVar19 + uVar22 * 4) = auVar28._0_16_;
      *(undefined1 (*) [16])(lVar2 + uVar22 * 4) = auVar30._16_16_;
      auVar28 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar14),0x44);
      auVar44 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar12),0x44);
      auVar25 = vshufps_avx(auVar28,auVar44,0x88);
      *(undefined1 (*) [16])(lVar16 + 0x10 + uVar22 * 4) = auVar25._0_16_;
      auVar28 = vshufps_avx(auVar28,auVar44,0xdd);
      *(undefined1 (*) [16])(lVar17 + 0x10 + uVar22 * 4) = auVar28._0_16_;
      auVar28 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar14),0xee);
      auVar44 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar12),0xee);
      auVar24 = vshufps_avx(auVar28,auVar44,0x88);
      *(undefined1 (*) [16])(lVar18 + 0x10 + uVar22 * 4) = auVar24._0_16_;
      auVar28 = vshufps_avx(auVar28,auVar44,0xdd);
      *(undefined1 (*) [16])(lVar19 + 0x10 + uVar22 * 4) = auVar28._0_16_;
      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar22 * 4) = auVar25._16_16_;
      uVar21 = (int)uVar22 + 8;
      uVar22 = (ulonglong)uVar21;
    } while (uVar21 < param_5);
  }
  local_220 = auVar23;
  auVar4 = vshufps_avx(auVar29,local_220,0x44);
  auVar5 = vshufps_avx(auVar27,auVar26,0x44);
  auVar6 = vshufps_avx(auVar5,auVar4,0x88);
  *(undefined1 (*) [16])*param_4 = auVar6._0_16_;
  auVar4 = vshufps_avx(auVar5,auVar4,0xdd);
  auVar5 = vshufps_avx(auVar27,auVar26,0xee);
  auVar23 = vshufps_avx(auVar29,local_220,0xee);
  *(undefined1 (*) [16])param_4[1] = auVar4._0_16_;
  auVar4 = vshufps_avx(auVar5,auVar23,0xdd);
  auVar5 = vshufps_avx(auVar5,auVar23,0x88);
  *(undefined1 (*) [16])param_4[2] = auVar5._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar4._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar6._16_16_;
  return;
}



// FUNCTION 145550af0 FUN_145550af0 body=1205 status=ok
// SIG undefined FUN_145550af0(void)

void FUN_145550af0(undefined1 (*param_1) [32],longlong *param_2,undefined8 *param_3,
                  undefined8 *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [24];
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 local_200 [32];
  undefined1 local_140 [32];
  
  auVar18 = *(undefined1 (*) [24])*param_1;
  lVar13 = *(longlong *)(*param_1 + 0x18);
  auVar26 = *param_1;
  lVar14 = *param_2;
  lVar15 = param_2[1];
  lVar16 = param_2[2];
  lVar17 = param_2[3];
  uVar20 = 0;
  auVar21 = ZEXT1632(*(undefined1 (*) [16])param_3[1]);
  auVar23 = ZEXT1632(*(undefined1 (*) [16])*param_3);
  auVar2 = vshufps_avx(auVar23,auVar21,0x44);
  auVar24 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar25 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar3 = vshufps_avx(auVar25,auVar24,0x44);
  auVar4 = vshufps_avx(auVar2,auVar3,0xdd);
  auVar21 = vshufps_avx(auVar23,auVar21,0xee);
  auVar24 = vshufps_avx(auVar25,auVar24,0xee);
  auVar2 = vshufps_avx(auVar2,auVar3,0x88);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar3 = vshufps_avx(auVar21,auVar24,0x88);
  auVar21 = vshufps_avx(auVar21,auVar24,0xdd);
  auVar40._0_8_ = auVar21._0_8_ ^ 0x8000000080000000;
  auVar40._8_4_ = auVar21._8_4_ ^ 0x80000000;
  auVar40._12_4_ = auVar21._12_4_ ^ 0x80000000;
  auVar40._16_4_ = auVar21._16_4_ ^ 0x80000000;
  auVar40._20_4_ = auVar21._20_4_ ^ 0x80000000;
  auVar40._24_4_ = auVar21._24_4_ ^ 0x80000000;
  auVar40._28_4_ = auVar21._28_4_ ^ 0x80000000;
  auVar41._0_8_ = auVar1._0_8_ ^ 0x8000000080000000;
  auVar41._8_4_ = -auVar1._8_4_;
  auVar41._12_4_ = -auVar1._12_4_;
  auVar41._16_4_ = 0x80000000;
  auVar41._20_4_ = 0x80000000;
  auVar41._24_4_ = 0x80000000;
  auVar41._28_4_ = 0x80000000;
  auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0x44);
  auVar24 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0xee);
  auVar25 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar23 = vshufps_avx(auVar21,auVar25,0xdd);
  auVar21 = vshufps_avx(auVar21,auVar25,0x88);
  auVar28._0_4_ = auVar21._0_4_ * -auVar1._0_4_;
  auVar28._4_4_ = auVar21._4_4_ * -auVar1._4_4_;
  auVar28._8_4_ = auVar21._8_4_ * auVar41._8_4_;
  auVar28._12_4_ = auVar21._12_4_ * auVar41._12_4_;
  auVar28._16_4_ = auVar21._16_4_ * -0.0;
  auVar28._20_4_ = auVar21._20_4_ * -0.0;
  auVar28._24_4_ = auVar21._24_4_ * -0.0;
  auVar28._28_4_ = auVar21._28_4_ * -0.0;
  auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar25 = vshufps_avx(auVar24,auVar21,0xdd);
  auVar21 = vshufps_avx(auVar24,auVar21,0x88);
  auVar5 = vfmadd231ps_fma(auVar28,auVar21,auVar3);
  auVar21._0_4_ = auVar23._0_4_ * -auVar1._0_4_;
  auVar21._4_4_ = auVar23._4_4_ * -auVar1._4_4_;
  auVar21._8_4_ = auVar23._8_4_ * auVar41._8_4_;
  auVar21._12_4_ = auVar23._12_4_ * auVar41._12_4_;
  auVar21._16_4_ = auVar23._16_4_ * -0.0;
  auVar21._20_4_ = auVar23._20_4_ * -0.0;
  auVar21._24_4_ = auVar23._24_4_ * -0.0;
  auVar21._28_4_ = auVar23._28_4_ * -0.0;
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar23,auVar40);
  auVar5 = vfmadd231ps_fma(auVar21,auVar25,auVar3);
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar25,auVar4);
  auVar24 = auVar26;
  auVar25 = auVar26;
  auVar21 = auVar26;
  if (param_5 != 0) {
    local_200._16_8_ = auVar18._16_8_;
    local_200._8_8_ = auVar18._8_8_;
    local_200._0_8_ = auVar18._0_8_;
    do {
      local_140 = ZEXT1632(auVar5);
      auVar26 = ZEXT1632(*(undefined1 (*) [16])(local_200._8_8_ + uVar20 * 4));
      auVar28 = ZEXT1632(*(undefined1 (*) [16])(local_200._0_8_ + uVar20 * 4));
      auVar21 = vshufps_avx(auVar28,auVar26,0x44);
      auVar25 = ZEXT1632(*(undefined1 (*) [16])(lVar13 + uVar20 * 4));
      auVar23 = ZEXT1632(*(undefined1 (*) [16])(local_200._16_8_ + uVar20 * 4));
      auVar24 = vshufps_avx(auVar23,auVar25,0xee);
      auVar25 = vshufps_avx(auVar23,auVar25,0x44);
      auVar23 = vshufps_avx(auVar21,auVar25,0x88);
      auVar21 = vshufps_avx(auVar21,auVar25,0xdd);
      auVar25 = vshufps_avx(auVar28,auVar26,0xee);
      auVar28 = vshufps_avx(auVar25,auVar24,0xdd);
      auVar24 = vshufps_avx(auVar25,auVar24,0x88);
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar2,auVar23);
      auVar1 = vfmadd231ps_fma(local_140,auVar4,auVar23);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar2,auVar21);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar40,ZEXT1632(auVar6));
      fVar32 = auVar3._0_4_;
      auVar27._0_4_ = fVar32 * auVar23._0_4_;
      fVar33 = auVar3._4_4_;
      auVar27._4_4_ = fVar33 * auVar23._4_4_;
      fVar34 = auVar3._8_4_;
      auVar27._8_4_ = fVar34 * auVar23._8_4_;
      fVar35 = auVar3._12_4_;
      auVar27._12_4_ = fVar35 * auVar23._12_4_;
      fVar36 = auVar3._16_4_;
      auVar27._16_4_ = fVar36 * auVar23._16_4_;
      fVar37 = auVar3._20_4_;
      auVar27._20_4_ = fVar37 * auVar23._20_4_;
      fVar38 = auVar3._24_4_;
      auVar27._24_4_ = fVar38 * auVar23._24_4_;
      fVar39 = auVar3._28_4_;
      auVar27._28_4_ = fVar39 * auVar23._28_4_;
      auVar5 = vfmadd231ps_fma(auVar27,auVar4,auVar21);
      auVar26._0_4_ = fVar32 * auVar21._0_4_;
      auVar26._4_4_ = fVar33 * auVar21._4_4_;
      auVar26._8_4_ = fVar34 * auVar21._8_4_;
      auVar26._12_4_ = fVar35 * auVar21._12_4_;
      auVar26._16_4_ = fVar36 * auVar21._16_4_;
      auVar26._20_4_ = fVar37 * auVar21._20_4_;
      auVar26._24_4_ = fVar38 * auVar21._24_4_;
      auVar26._28_4_ = fVar39 * auVar21._28_4_;
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar2,auVar24);
      auVar7 = vfmadd231ps_fma(auVar26,auVar4,auVar24);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar2,auVar28);
      auVar23 = ZEXT1632(*(undefined1 (*) [16])(local_200._8_8_ + 0x10 + uVar20 * 4));
      auVar29 = ZEXT1632(*(undefined1 (*) [16])(local_200._0_8_ + 0x10 + uVar20 * 4));
      auVar21 = vshufps_avx(auVar29,auVar23,0x44);
      auVar26 = ZEXT1632(*(undefined1 (*) [16])(lVar13 + 0x10 + uVar20 * 4));
      auVar27 = ZEXT1632(*(undefined1 (*) [16])(local_200._16_8_ + 0x10 + uVar20 * 4));
      auVar25 = vshufps_avx(auVar27,auVar26,0xee);
      auVar23 = vshufps_avx(auVar29,auVar23,0xee);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar41,ZEXT1632(auVar6));
      auVar22 = ZEXT1632(auVar1);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar40,auVar22);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar41,ZEXT1632(auVar1));
      auVar26 = vshufps_avx(auVar27,auVar26,0x44);
      auVar27 = vshufps_avx(auVar21,auVar26,0x88);
      auVar29 = vshufps_avx(auVar21,auVar26,0xdd);
      auVar21 = vshufps_avx(auVar23,auVar25,0xdd);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar40,ZEXT1632(auVar8));
      auVar26 = vshufps_avx(auVar23,auVar25,0x88);
      auVar25._0_4_ = fVar32 * auVar28._0_4_;
      auVar25._4_4_ = fVar33 * auVar28._4_4_;
      auVar25._8_4_ = fVar34 * auVar28._8_4_;
      auVar25._12_4_ = fVar35 * auVar28._12_4_;
      auVar25._16_4_ = fVar36 * auVar28._16_4_;
      auVar25._20_4_ = fVar37 * auVar28._20_4_;
      auVar25._24_4_ = fVar38 * auVar28._24_4_;
      auVar25._28_4_ = fVar39 * auVar28._28_4_;
      auVar30._0_4_ = fVar32 * auVar24._0_4_;
      auVar30._4_4_ = fVar33 * auVar24._4_4_;
      auVar30._8_4_ = fVar34 * auVar24._8_4_;
      auVar30._12_4_ = fVar35 * auVar24._12_4_;
      auVar30._16_4_ = fVar36 * auVar24._16_4_;
      auVar30._20_4_ = fVar37 * auVar24._20_4_;
      auVar30._24_4_ = fVar38 * auVar24._24_4_;
      auVar30._28_4_ = fVar39 * auVar24._28_4_;
      auVar1 = vfmadd231ps_fma(auVar30,auVar4,auVar28);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar27,auVar2);
      auVar5 = vfmadd231ps_fma(auVar25,auVar4,auVar27);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar29,auVar2);
      auVar31._0_4_ = fVar32 * auVar27._0_4_;
      auVar31._4_4_ = fVar33 * auVar27._4_4_;
      auVar31._8_4_ = fVar34 * auVar27._8_4_;
      auVar31._12_4_ = fVar35 * auVar27._12_4_;
      auVar31._16_4_ = fVar36 * auVar27._16_4_;
      auVar31._20_4_ = fVar37 * auVar27._20_4_;
      auVar31._24_4_ = fVar38 * auVar27._24_4_;
      auVar31._28_4_ = fVar39 * auVar27._28_4_;
      auVar9 = vfmadd231ps_fma(auVar31,auVar4,auVar29);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar26,auVar2);
      auVar24._0_4_ = fVar32 * auVar29._0_4_;
      auVar24._4_4_ = fVar33 * auVar29._4_4_;
      auVar24._8_4_ = fVar34 * auVar29._8_4_;
      auVar24._12_4_ = fVar35 * auVar29._12_4_;
      auVar24._16_4_ = fVar36 * auVar29._16_4_;
      auVar24._20_4_ = fVar37 * auVar29._20_4_;
      auVar24._24_4_ = fVar38 * auVar29._24_4_;
      auVar24._28_4_ = fVar39 * auVar29._28_4_;
      auVar10 = vfmadd231ps_fma(auVar24,auVar4,auVar26);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar21,auVar2);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar41,ZEXT1632(auVar8));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar40,ZEXT1632(auVar7));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar41,ZEXT1632(auVar7));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar40,ZEXT1632(auVar11));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar41,ZEXT1632(auVar11));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar40,ZEXT1632(auVar12));
      auVar25 = ZEXT1632(auVar9);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar41,ZEXT1632(auVar12));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar40,ZEXT1632(auVar9));
      auVar24 = ZEXT1632(auVar10);
      auVar29._0_4_ = fVar32 * auVar26._0_4_;
      auVar29._4_4_ = fVar33 * auVar26._4_4_;
      auVar29._8_4_ = fVar34 * auVar26._8_4_;
      auVar29._12_4_ = fVar35 * auVar26._12_4_;
      auVar29._16_4_ = fVar36 * auVar26._16_4_;
      auVar29._20_4_ = fVar37 * auVar26._20_4_;
      auVar29._24_4_ = fVar38 * auVar26._24_4_;
      auVar29._28_4_ = fVar39 * auVar26._28_4_;
      auVar1 = vfmadd231ps_fma(auVar29,auVar4,auVar21);
      auVar23._0_4_ = fVar32 * auVar21._0_4_;
      auVar23._4_4_ = fVar33 * auVar21._4_4_;
      auVar23._8_4_ = fVar34 * auVar21._8_4_;
      auVar23._12_4_ = fVar35 * auVar21._12_4_;
      auVar23._16_4_ = fVar36 * auVar21._16_4_;
      auVar23._20_4_ = fVar37 * auVar21._20_4_;
      auVar23._24_4_ = fVar38 * auVar21._24_4_;
      auVar23._28_4_ = fVar39 * auVar21._28_4_;
      auVar5 = vfmadd231ps_fma(auVar23,auVar41,ZEXT1632(auVar10));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar41,ZEXT1632(auVar9));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),ZEXT1632(auVar10),auVar40);
      auVar23 = vshufps_avx(ZEXT1632(auVar6),auVar22,0x44);
      auVar28 = vshufps_avx(ZEXT1632(auVar8),ZEXT1632(auVar7),0x44);
      auVar27 = vshufps_avx(auVar23,auVar28,0x88);
      *(undefined1 (*) [16])(lVar14 + uVar20 * 4) = auVar27._0_16_;
      auVar27 = vshufps_avx(ZEXT1632(auVar6),auVar22,0xee);
      auVar29 = vshufps_avx(ZEXT1632(auVar8),ZEXT1632(auVar7),0xee);
      auVar23 = vshufps_avx(auVar23,auVar28,0xdd);
      *(undefined1 (*) [16])(lVar15 + uVar20 * 4) = auVar23._0_16_;
      auVar23 = vshufps_avx(auVar27,auVar29,0x88);
      *(undefined1 (*) [16])(lVar16 + uVar20 * 4) = auVar23._0_16_;
      auVar23 = vshufps_avx(auVar27,auVar29,0xdd);
      *(undefined1 (*) [16])(lVar17 + uVar20 * 4) = auVar23._0_16_;
      auVar23 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar10),0x44);
      auVar28 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar12),0x44);
      auVar27 = vshufps_avx(auVar28,auVar23,0x88);
      *(undefined1 (*) [16])(lVar14 + 0x10 + uVar20 * 4) = auVar27._0_16_;
      auVar23 = vshufps_avx(auVar28,auVar23,0xdd);
      *(undefined1 (*) [16])(lVar15 + 0x10 + uVar20 * 4) = auVar23._0_16_;
      auVar23 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar12),0xee);
      auVar28 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar10),0xee);
      auVar27 = vshufps_avx(auVar23,auVar28,0x88);
      *(undefined1 (*) [16])(lVar16 + 0x10 + uVar20 * 4) = auVar27._0_16_;
      auVar23 = vshufps_avx(auVar23,auVar28,0xdd);
      *(undefined1 (*) [16])(lVar17 + 0x10 + uVar20 * 4) = auVar23._0_16_;
      uVar19 = (int)uVar20 + 8;
      uVar20 = (ulonglong)uVar19;
    } while (uVar19 < param_5);
  }
  local_200 = auVar21;
  auVar2 = vshufps_avx(auVar26,local_200,0x44);
  auVar3 = vshufps_avx(auVar26,local_200,0xee);
  auVar4 = vshufps_avx(auVar25,auVar24,0x44);
  auVar21 = vshufps_avx(auVar4,auVar2,0x88);
  *(undefined1 (*) [16])*param_4 = auVar21._0_16_;
  auVar2 = vshufps_avx(auVar4,auVar2,0xdd);
  auVar4 = vshufps_avx(auVar25,auVar24,0xee);
  auVar21 = vshufps_avx(auVar4,auVar3,0x88);
  *(undefined1 (*) [16])param_4[1] = auVar2._0_16_;
  auVar2 = vshufps_avx(auVar4,auVar3,0xdd);
  *(undefined1 (*) [16])param_4[2] = auVar21._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar2._0_16_;
  return;
}



// FUNCTION 145550fb0 FUN_145550fb0 body=1163 status=ok
// SIG undefined FUN_145550fb0(void)

void FUN_145550fb0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 local_180 [32];
  undefined1 auVar42 [64];
  
  lVar14 = *param_1;
  lVar15 = param_1[1];
  lVar1 = param_1[2];
  uVar19 = 0;
  auVar40._0_12_ = ZEXT812(0);
  auVar40._12_4_ = 0;
  auVar42 = ZEXT1664(auVar40);
  lVar16 = *param_2;
  lVar17 = param_2[1];
  lVar2 = param_2[2];
  auVar25 = ZEXT1632(*(undefined1 (*) [16])param_3[1]);
  auVar26 = ZEXT1632(*(undefined1 (*) [16])*param_3);
  auVar5 = vshufps_avx(auVar26,auVar25,0x44);
  auVar24 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar20 = vshufps_avx(auVar24,ZEXT1632(auVar40),0xee);
  auVar24 = vshufps_avx(auVar24,ZEXT1632(auVar40),0x44);
  auVar6 = vshufps_avx(auVar5,auVar24,0x88);
  auVar5 = vshufps_avx(auVar5,auVar24,0xdd);
  auVar24 = vshufps_avx(auVar26,auVar25,0xee);
  auVar25 = vshufps_avx(auVar24,auVar20,0x88);
  auVar20 = vshufps_avx(auVar24,auVar20,0xdd);
  auVar29._0_8_ = auVar20._0_8_ ^ 0x8000000080000000;
  auVar29._8_4_ = auVar20._8_4_ ^ 0x80000000;
  auVar29._12_4_ = auVar20._12_4_ ^ 0x80000000;
  auVar29._16_4_ = auVar20._16_4_ ^ 0x80000000;
  auVar29._20_4_ = auVar20._20_4_ ^ 0x80000000;
  auVar29._24_4_ = auVar20._24_4_ ^ 0x80000000;
  auVar29._28_4_ = auVar20._28_4_ ^ 0x80000000;
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar4 = vshufps_avx(auVar3,auVar3,0xff);
  auVar43._0_8_ = auVar3._0_8_ ^ 0x8000000080000000;
  auVar43._8_4_ = -auVar3._8_4_;
  auVar43._12_4_ = -auVar3._12_4_;
  auVar43._16_4_ = -auVar4._0_4_;
  auVar43._20_4_ = -auVar4._4_4_;
  auVar43._24_4_ = -auVar4._8_4_;
  auVar43._28_4_ = -auVar4._12_4_;
  auVar41 = ZEXT1632(auVar40);
  auVar20 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0x44);
  auVar24 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0xee);
  auVar26 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),auVar41,0x44);
  auVar27 = vshufps_avx(auVar20,auVar26,0xdd);
  auVar20 = vshufps_avx(auVar20,auVar26,0x88);
  auVar22._0_4_ = auVar20._0_4_ * -auVar3._0_4_;
  auVar22._4_4_ = auVar20._4_4_ * -auVar3._4_4_;
  auVar22._8_4_ = auVar20._8_4_ * auVar43._8_4_;
  auVar22._12_4_ = auVar20._12_4_ * auVar43._12_4_;
  auVar22._16_4_ = auVar20._16_4_ * auVar43._16_4_;
  auVar22._20_4_ = auVar20._20_4_ * auVar43._20_4_;
  auVar22._24_4_ = auVar20._24_4_ * auVar43._24_4_;
  auVar22._28_4_ = auVar20._28_4_ * auVar43._28_4_;
  auVar20 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),auVar41,0xee);
  auVar26 = vshufps_avx(auVar24,auVar20,0xdd);
  auVar20 = vshufps_avx(auVar24,auVar20,0x88);
  auVar4 = vfmadd231ps_fma(auVar22,auVar20,auVar25);
  auVar20._0_4_ = auVar27._0_4_ * -auVar3._0_4_;
  auVar20._4_4_ = auVar27._4_4_ * -auVar3._4_4_;
  auVar20._8_4_ = auVar27._8_4_ * auVar43._8_4_;
  auVar20._12_4_ = auVar27._12_4_ * auVar43._12_4_;
  auVar20._16_4_ = auVar27._16_4_ * auVar43._16_4_;
  auVar20._20_4_ = auVar27._20_4_ * auVar43._20_4_;
  auVar20._24_4_ = auVar27._24_4_ * auVar43._24_4_;
  auVar20._28_4_ = auVar27._28_4_ * auVar43._28_4_;
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar27,auVar29);
  auVar4 = vfmadd231ps_fma(auVar20,auVar26,auVar25);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar26,auVar5);
  auVar20 = auVar41;
  auVar24 = auVar41;
  auVar26 = auVar41;
  auVar27 = auVar41;
  if (param_5 != 0) {
    while( true ) {
      local_180 = ZEXT1632(auVar4);
      auVar24 = ZEXT1632(*(undefined1 (*) [16])(lVar15 + uVar19 * 4));
      auVar26 = ZEXT1632(*(undefined1 (*) [16])(lVar14 + uVar19 * 4));
      auVar20 = vshufps_avx(auVar26,auVar24,0xee);
      auVar24 = vshufps_avx(auVar26,auVar24,0x44);
      auVar22 = ZEXT1632(*(undefined1 (*) [16])(lVar1 + uVar19 * 4));
      auVar28 = auVar42._0_32_;
      auVar26 = vshufps_avx(auVar22,auVar28,0xee);
      auVar27 = vshufps_avx(auVar20,auVar26,0x88);
      auVar26 = vshufps_avx(auVar20,auVar26,0xdd);
      auVar20 = vshufps_avx(auVar22,auVar28,0x44);
      auVar22 = vshufps_avx(auVar24,auVar20,0x88);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar6,auVar22);
      auVar20 = vshufps_avx(auVar24,auVar20,0xdd);
      auVar4 = vfmadd231ps_fma(local_180,auVar5,auVar22);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar6,auVar20);
      auVar40 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar3));
      fVar30 = auVar25._0_4_;
      auVar38._0_4_ = fVar30 * auVar22._0_4_;
      fVar31 = auVar25._4_4_;
      auVar38._4_4_ = fVar31 * auVar22._4_4_;
      fVar32 = auVar25._8_4_;
      auVar38._8_4_ = fVar32 * auVar22._8_4_;
      fVar33 = auVar25._12_4_;
      auVar38._12_4_ = fVar33 * auVar22._12_4_;
      fVar34 = auVar25._16_4_;
      auVar38._16_4_ = fVar34 * auVar22._16_4_;
      fVar35 = auVar25._20_4_;
      auVar38._20_4_ = fVar35 * auVar22._20_4_;
      fVar36 = auVar25._24_4_;
      auVar38._24_4_ = fVar36 * auVar22._24_4_;
      fVar37 = auVar25._28_4_;
      auVar38._28_4_ = fVar37 * auVar22._28_4_;
      auVar4 = vfmadd231ps_fma(auVar38,auVar20,auVar5);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar6,auVar27);
      auVar24._0_4_ = fVar30 * auVar20._0_4_;
      auVar24._4_4_ = fVar31 * auVar20._4_4_;
      auVar24._8_4_ = fVar32 * auVar20._8_4_;
      auVar24._12_4_ = fVar33 * auVar20._12_4_;
      auVar24._16_4_ = fVar34 * auVar20._16_4_;
      auVar24._20_4_ = fVar35 * auVar20._20_4_;
      auVar24._24_4_ = fVar36 * auVar20._24_4_;
      auVar24._28_4_ = fVar37 * auVar20._28_4_;
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar43,ZEXT1632(auVar3));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar40));
      auVar4 = vfmadd231ps_fma(auVar24,auVar5,auVar27);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar6,auVar26);
      auVar20 = ZEXT1632(*(undefined1 (*) [16])(lVar15 + 0x10 + uVar19 * 4));
      auVar22 = ZEXT1632(*(undefined1 (*) [16])(lVar14 + 0x10 + uVar19 * 4));
      auVar24 = vshufps_avx(auVar22,auVar20,0xee);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar43,ZEXT1632(auVar40));
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar7));
      auVar20 = vshufps_avx(auVar22,auVar20,0x44);
      auVar23 = ZEXT1632(*(undefined1 (*) [16])(lVar1 + 0x10 + uVar19 * 4));
      auVar22 = vshufps_avx(auVar23,auVar28,0x44);
      auVar21 = vshufps_avx(auVar20,auVar22,0x88);
      auVar23 = vshufps_avx(auVar23,auVar28,0xee);
      auVar22 = vshufps_avx(auVar20,auVar22,0xdd);
      auVar20 = vshufps_avx(auVar24,auVar23,0x88);
      auVar24 = vshufps_avx(auVar24,auVar23,0xdd);
      auVar23._0_4_ = fVar30 * auVar27._0_4_;
      auVar23._4_4_ = fVar31 * auVar27._4_4_;
      auVar23._8_4_ = fVar32 * auVar27._8_4_;
      auVar23._12_4_ = fVar33 * auVar27._12_4_;
      auVar23._16_4_ = fVar34 * auVar27._16_4_;
      auVar23._20_4_ = fVar35 * auVar27._20_4_;
      auVar23._24_4_ = fVar36 * auVar27._24_4_;
      auVar23._28_4_ = fVar37 * auVar27._28_4_;
      auVar4 = vfmadd231ps_fma(auVar23,auVar5,auVar26);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar6,auVar21);
      auVar27._0_4_ = fVar30 * auVar26._0_4_;
      auVar27._4_4_ = fVar31 * auVar26._4_4_;
      auVar27._8_4_ = fVar32 * auVar26._8_4_;
      auVar27._12_4_ = fVar33 * auVar26._12_4_;
      auVar27._16_4_ = fVar34 * auVar26._16_4_;
      auVar27._20_4_ = fVar35 * auVar26._20_4_;
      auVar27._24_4_ = fVar36 * auVar26._24_4_;
      auVar27._28_4_ = fVar37 * auVar26._28_4_;
      auVar9 = vfmadd231ps_fma(auVar27,auVar5,auVar21);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar6,auVar22);
      auVar26._0_4_ = fVar30 * auVar21._0_4_;
      auVar26._4_4_ = fVar31 * auVar21._4_4_;
      auVar26._8_4_ = fVar32 * auVar21._8_4_;
      auVar26._12_4_ = fVar33 * auVar21._12_4_;
      auVar26._16_4_ = fVar34 * auVar21._16_4_;
      auVar26._20_4_ = fVar35 * auVar21._20_4_;
      auVar26._24_4_ = fVar36 * auVar21._24_4_;
      auVar26._28_4_ = fVar37 * auVar21._28_4_;
      auVar10 = vfmadd231ps_fma(auVar26,auVar5,auVar22);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar6,auVar20);
      auVar28._0_4_ = fVar30 * auVar22._0_4_;
      auVar28._4_4_ = fVar31 * auVar22._4_4_;
      auVar28._8_4_ = fVar32 * auVar22._8_4_;
      auVar28._12_4_ = fVar33 * auVar22._12_4_;
      auVar28._16_4_ = fVar34 * auVar22._16_4_;
      auVar28._20_4_ = fVar35 * auVar22._20_4_;
      auVar28._24_4_ = fVar36 * auVar22._24_4_;
      auVar28._28_4_ = fVar37 * auVar22._28_4_;
      auVar11 = vfmadd231ps_fma(auVar28,auVar5,auVar20);
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar24,auVar6);
      auVar39._0_4_ = fVar30 * auVar20._0_4_;
      auVar39._4_4_ = fVar31 * auVar20._4_4_;
      auVar39._8_4_ = fVar32 * auVar20._8_4_;
      auVar39._12_4_ = fVar33 * auVar20._12_4_;
      auVar39._16_4_ = fVar34 * auVar20._16_4_;
      auVar39._20_4_ = fVar35 * auVar20._20_4_;
      auVar39._24_4_ = fVar36 * auVar20._24_4_;
      auVar39._28_4_ = fVar37 * auVar20._28_4_;
      auVar12 = vfmadd231ps_fma(auVar39,auVar24,auVar5);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar43,ZEXT1632(auVar7));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar4),ZEXT1632(auVar8),auVar29);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar43,ZEXT1632(auVar8));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar43,ZEXT1632(auVar13));
      auVar21._0_4_ = fVar30 * auVar24._0_4_;
      auVar21._4_4_ = fVar31 * auVar24._4_4_;
      auVar21._8_4_ = fVar32 * auVar24._8_4_;
      auVar21._12_4_ = fVar33 * auVar24._12_4_;
      auVar21._16_4_ = fVar34 * auVar24._16_4_;
      auVar21._20_4_ = fVar35 * auVar24._20_4_;
      auVar21._24_4_ = fVar36 * auVar24._24_4_;
      auVar21._28_4_ = fVar37 * auVar24._28_4_;
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar13));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar43,ZEXT1632(auVar10));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar29,ZEXT1632(auVar10));
      auVar26 = ZEXT1632(auVar9);
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar43,ZEXT1632(auVar9));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar9));
      auVar27 = ZEXT1632(auVar12);
      auVar4 = vfmadd231ps_fma(auVar21,auVar43,ZEXT1632(auVar12));
      auVar22 = vshufps_avx(ZEXT1632(auVar3),ZEXT1632(auVar40),0x44);
      auVar21 = vshufps_avx(ZEXT1632(auVar7),ZEXT1632(auVar8),0x44);
      auVar23 = vshufps_avx(auVar22,auVar21,0x88);
      auVar22 = vshufps_avx(auVar22,auVar21,0xdd);
      *(undefined1 (*) [16])(lVar16 + uVar19 * 4) = auVar23._0_16_;
      *(undefined1 (*) [16])(lVar17 + uVar19 * 4) = auVar22._0_16_;
      auVar22 = vshufps_avx(ZEXT1632(auVar3),ZEXT1632(auVar40),0xee);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar29,ZEXT1632(auVar12));
      auVar21 = vshufps_avx(ZEXT1632(auVar7),ZEXT1632(auVar8),0xee);
      auVar22 = vshufps_avx(auVar22,auVar21,0x88);
      *(undefined1 (*) [16])(lVar2 + uVar19 * 4) = auVar22._0_16_;
      auVar22 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar10),0x44);
      auVar21 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar12),0x44);
      auVar23 = vshufps_avx(auVar22,auVar21,0x88);
      *(undefined1 (*) [16])(lVar16 + 0x10 + uVar19 * 4) = auVar23._0_16_;
      auVar22 = vshufps_avx(auVar22,auVar21,0xdd);
      *(undefined1 (*) [16])(lVar17 + 0x10 + uVar19 * 4) = auVar22._0_16_;
      auVar22 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar10),0xee);
      auVar21 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar12),0xee);
      auVar22 = vshufps_avx(auVar22,auVar21,0x88);
      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar19 * 4) = auVar22._0_16_;
      uVar18 = (int)uVar19 + 8;
      uVar19 = (ulonglong)uVar18;
      if (param_5 <= uVar18) break;
      auVar42 = ZEXT3264(auVar41);
    }
  }
  auVar5 = vshufps_avx(auVar26,auVar27,0x44);
  auVar6 = vshufps_avx(auVar20,auVar24,0x44);
  auVar25 = vshufps_avx(auVar5,auVar6,0x88);
  *(undefined1 (*) [16])*param_4 = auVar25._0_16_;
  auVar5 = vshufps_avx(auVar5,auVar6,0xdd);
  auVar6 = vshufps_avx(auVar26,auVar27,0xee);
  *(undefined1 (*) [16])param_4[1] = auVar5._0_16_;
  auVar5 = vshufps_avx(auVar20,auVar24,0xee);
  auVar5 = vshufps_avx(auVar6,auVar5,0x88);
  *(undefined1 (*) [16])param_4[2] = auVar5._0_16_;
  return;
}



// FUNCTION 145551450 FUN_145551450 body=2526 status=ok
// SIG undefined FUN_145551450(void)

void FUN_145551450(longlong *param_1,undefined1 (*param_2) [32],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [32];
  ulonglong uVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  float fVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar68 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  float fVar89;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  uint local_380;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  
  lVar16 = *param_1;
  lVar17 = param_1[1];
  lVar18 = param_1[2];
  lVar19 = param_1[3];
  lVar20 = param_1[4];
  lVar21 = param_1[5];
  lVar22 = param_1[6];
  lVar23 = param_1[7];
  lVar24 = *(longlong *)*param_2;
  lVar25 = *(longlong *)(*param_2 + 8);
  lVar26 = *(longlong *)(*param_2 + 0x10);
  lVar27 = *(longlong *)(*param_2 + 0x18);
  auVar52 = *param_2;
  auVar51 = *param_2;
  auVar46 = *param_2;
  auVar45 = *param_2;
  auVar59._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar59._0_16_ = *(undefined1 (*) [16])*param_3;
  auVar53._16_16_ = *(undefined1 (*) [16])param_3[5];
  auVar53._0_16_ = *(undefined1 (*) [16])param_3[1];
  auVar47._16_16_ = *(undefined1 (*) [16])param_3[6];
  auVar47._0_16_ = *(undefined1 (*) [16])param_3[2];
  pauVar1 = param_2 + 1;
  lVar28 = *(longlong *)*pauVar1;
  lVar29 = *(longlong *)(param_2[1] + 8);
  lVar30 = *(longlong *)(param_2[1] + 0x10);
  lVar31 = *(longlong *)(param_2[1] + 0x18);
  auVar36 = *pauVar1;
  auVar35 = *pauVar1;
  auVar91 = *pauVar1;
  auVar88 = *pauVar1;
  auVar4 = vshufps_avx(auVar59,auVar53,0x44);
  auVar53 = vshufps_avx(auVar59,auVar53,0xee);
  auVar38._16_16_ = *(undefined1 (*) [16])param_3[7];
  auVar38._0_16_ = *(undefined1 (*) [16])param_3[3];
  auVar34 = vshufps_avx(auVar47,auVar38,0x44);
  auVar59 = vshufps_avx(auVar4,auVar34,0x88);
  auVar4 = vshufps_avx(auVar4,auVar34,0xdd);
  auVar34 = vshufps_avx(auVar47,auVar38,0xee);
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar38 = vshufps_avx(auVar53,auVar34,0xdd);
  auVar53 = vshufps_avx(auVar53,auVar34,0x88);
  auVar78._0_8_ = auVar38._0_8_ ^ 0x8000000080000000;
  auVar78._8_4_ = auVar38._8_4_ ^ 0x80000000;
  auVar78._12_4_ = auVar38._12_4_ ^ 0x80000000;
  auVar78._16_4_ = auVar38._16_4_ ^ 0x80000000;
  auVar78._20_4_ = auVar38._20_4_ ^ 0x80000000;
  auVar78._24_4_ = auVar38._24_4_ ^ 0x80000000;
  auVar78._28_4_ = auVar38._28_4_ ^ 0x80000000;
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_3[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[5])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[6])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[7])[1]),0x30);
  auVar84._0_8_ = auVar2._0_8_ ^ 0x8000000080000000;
  auVar84._8_4_ = auVar2._8_4_ ^ 0x80000000;
  auVar84._12_4_ = auVar2._12_4_ ^ 0x80000000;
  auVar84._16_4_ = auVar3._0_4_ ^ 0x80000000;
  auVar84._20_4_ = auVar3._4_4_ ^ 0x80000000;
  auVar84._24_4_ = auVar3._8_4_ ^ 0x80000000;
  auVar84._28_4_ = auVar3._12_4_ ^ 0x80000000;
  auVar54._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar54._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar43._16_16_ = *(undefined1 (*) [16])param_4[5];
  auVar43._0_16_ = *(undefined1 (*) [16])param_4[1];
  auVar34 = vshufps_avx(auVar54,auVar43,0x44);
  auVar38 = vshufps_avx(auVar54,auVar43,0xee);
  auVar48._16_16_ = *(undefined1 (*) [16])param_4[6];
  auVar48._0_16_ = *(undefined1 (*) [16])param_4[2];
  auVar39._16_16_ = *(undefined1 (*) [16])param_4[7];
  auVar39._0_16_ = *(undefined1 (*) [16])param_4[3];
  auVar40 = vshufps_avx(auVar48,auVar39,0xee);
  auVar39 = vshufps_avx(auVar48,auVar39,0x44);
  auVar43 = vshufps_avx(auVar38,auVar40,0xdd);
  auVar47 = vshufps_avx(auVar34,auVar39,0xdd);
  auVar82._0_4_ = auVar43._0_4_ * auVar4._0_4_;
  auVar82._4_4_ = auVar43._4_4_ * auVar4._4_4_;
  auVar82._8_4_ = auVar43._8_4_ * auVar4._8_4_;
  auVar82._12_4_ = auVar43._12_4_ * auVar4._12_4_;
  auVar82._16_4_ = auVar43._16_4_ * auVar4._16_4_;
  auVar82._20_4_ = auVar43._20_4_ * auVar4._20_4_;
  auVar82._24_4_ = auVar43._24_4_ * auVar4._24_4_;
  auVar82._28_4_ = auVar43._28_4_ * auVar4._28_4_;
  auVar2 = vfmadd231ps_fma(auVar82,auVar47,auVar78);
  auVar38 = vshufps_avx(auVar38,auVar40,0x88);
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar38,auVar53);
  auVar34 = vshufps_avx(auVar34,auVar39,0x88);
  fVar89 = auVar53._0_4_;
  auVar86._0_4_ = fVar89 * auVar43._0_4_;
  fVar92 = auVar53._4_4_;
  auVar86._4_4_ = fVar92 * auVar43._4_4_;
  fVar93 = auVar53._8_4_;
  auVar86._8_4_ = fVar93 * auVar43._8_4_;
  fVar94 = auVar53._12_4_;
  auVar86._12_4_ = fVar94 * auVar43._12_4_;
  fVar95 = auVar53._16_4_;
  auVar86._16_4_ = fVar95 * auVar43._16_4_;
  fVar96 = auVar53._20_4_;
  auVar86._20_4_ = fVar96 * auVar43._20_4_;
  fVar97 = auVar53._24_4_;
  auVar86._24_4_ = fVar97 * auVar43._24_4_;
  fVar98 = auVar53._28_4_;
  auVar86._28_4_ = fVar98 * auVar43._28_4_;
  auVar5 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar34,auVar84);
  auVar6 = vfmadd231ps_fma(auVar86,auVar47,auVar84);
  auVar60._16_16_ = *(undefined1 (*) [16])param_5[4];
  auVar60._0_16_ = *(undefined1 (*) [16])*param_5;
  auVar55._16_16_ = *(undefined1 (*) [16])param_5[5];
  auVar55._0_16_ = *(undefined1 (*) [16])param_5[1];
  auVar49._16_16_ = *(undefined1 (*) [16])param_5[6];
  auVar49._0_16_ = *(undefined1 (*) [16])param_5[2];
  auVar40._16_16_ = *(undefined1 (*) [16])param_5[7];
  auVar40._0_16_ = *(undefined1 (*) [16])param_5[3];
  auVar53 = vshufps_avx(auVar49,auVar40,0x44);
  auVar34 = vshufps_avx(auVar49,auVar40,0xee);
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_5)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[1])[1]),0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[2])[1]),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[3])[1]),0x30);
  auVar38 = vshufps_avx(auVar60,auVar55,0x44);
  auVar40 = vshufps_avx(auVar38,auVar53,0x88);
  auVar39 = vshufps_avx(auVar60,auVar55,0xee);
  auVar43 = vshufps_avx(auVar39,auVar34,0x88);
  auVar53 = vshufps_avx(auVar38,auVar53,0xdd);
  auVar34 = vshufps_avx(auVar39,auVar34,0xdd);
  auVar80._0_8_ = auVar34._0_8_ ^ 0x8000000080000000;
  auVar80._8_4_ = auVar34._8_4_ ^ 0x80000000;
  auVar80._12_4_ = auVar34._12_4_ ^ 0x80000000;
  auVar80._16_4_ = auVar34._16_4_ ^ 0x80000000;
  auVar80._20_4_ = auVar34._20_4_ ^ 0x80000000;
  auVar80._24_4_ = auVar34._24_4_ ^ 0x80000000;
  auVar80._28_4_ = auVar34._28_4_ ^ 0x80000000;
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_5[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[5])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[6])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[7])[1]),0x30);
  fVar67 = -auVar2._0_4_;
  fVar69 = -auVar2._4_4_;
  fVar70 = -auVar2._8_4_;
  fVar71 = -auVar2._12_4_;
  fVar72 = -auVar3._0_4_;
  fVar73 = -auVar3._4_4_;
  fVar74 = -auVar3._8_4_;
  fVar75 = -auVar3._12_4_;
  auVar61._16_16_ = *(undefined1 (*) [16])param_6[4];
  auVar61._0_16_ = *(undefined1 (*) [16])*param_6;
  auVar56._16_16_ = *(undefined1 (*) [16])param_6[5];
  auVar56._0_16_ = *(undefined1 (*) [16])param_6[1];
  auVar34 = vshufps_avx(auVar61,auVar56,0x44);
  auVar38 = vshufps_avx(auVar61,auVar56,0xee);
  auVar44._16_16_ = *(undefined1 (*) [16])param_6[6];
  auVar44._0_16_ = *(undefined1 (*) [16])param_6[2];
  auVar41._16_16_ = *(undefined1 (*) [16])param_6[7];
  auVar41._0_16_ = *(undefined1 (*) [16])param_6[3];
  auVar39 = vshufps_avx(auVar44,auVar41,0x44);
  auVar47 = vshufps_avx(auVar34,auVar39,0xdd);
  auVar34 = vshufps_avx(auVar34,auVar39,0x88);
  auVar50._0_4_ = auVar34._0_4_ * fVar67;
  auVar50._4_4_ = auVar34._4_4_ * fVar69;
  auVar50._8_4_ = auVar34._8_4_ * fVar70;
  auVar50._12_4_ = auVar34._12_4_ * fVar71;
  auVar50._16_4_ = auVar34._16_4_ * fVar72;
  auVar50._20_4_ = auVar34._20_4_ * fVar73;
  auVar50._24_4_ = auVar34._24_4_ * fVar74;
  auVar50._28_4_ = auVar34._28_4_ * fVar75;
  auVar34 = vshufps_avx(auVar44,auVar41,0xee);
  auVar39 = vshufps_avx(auVar38,auVar34,0xdd);
  uVar33 = 0;
  auVar34 = vshufps_avx(auVar38,auVar34,0x88);
  auVar2 = vfmadd231ps_fma(auVar50,auVar34,auVar43);
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar47,auVar80);
  auVar34._0_4_ = fVar67 * auVar47._0_4_;
  auVar34._4_4_ = fVar69 * auVar47._4_4_;
  auVar34._8_4_ = fVar70 * auVar47._8_4_;
  auVar34._12_4_ = fVar71 * auVar47._12_4_;
  auVar34._16_4_ = fVar72 * auVar47._16_4_;
  auVar34._20_4_ = fVar73 * auVar47._20_4_;
  auVar34._24_4_ = fVar74 * auVar47._24_4_;
  auVar34._28_4_ = fVar75 * auVar47._28_4_;
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar53,auVar39);
  auVar3 = vfmadd231ps_fma(auVar34,auVar39,auVar43);
  local_380 = 0;
  if (param_7 != 0) {
    do {
      local_1a0 = ZEXT1632(auVar3);
      local_1c0 = ZEXT1632(auVar2);
      auVar64._16_16_ = *(undefined1 (*) [16])(lVar20 + uVar33 * 4);
      auVar64._0_16_ = *(undefined1 (*) [16])(lVar16 + uVar33 * 4);
      auVar51._16_16_ = *(undefined1 (*) [16])(lVar21 + uVar33 * 4);
      auVar51._0_16_ = *(undefined1 (*) [16])(lVar17 + uVar33 * 4);
      auVar62._16_16_ = *(undefined1 (*) [16])(lVar22 + uVar33 * 4);
      auVar62._0_16_ = *(undefined1 (*) [16])(lVar18 + uVar33 * 4);
      auVar45._16_16_ = *(undefined1 (*) [16])(lVar23 + uVar33 * 4);
      auVar45._0_16_ = *(undefined1 (*) [16])(lVar19 + uVar33 * 4);
      auVar34 = vshufps_avx(auVar64,auVar51,0x44);
      auVar38 = vshufps_avx(auVar62,auVar45,0xee);
      auVar39 = vshufps_avx(auVar64,auVar51,0xee);
      auVar47 = vshufps_avx(auVar39,auVar38,0x88);
      auVar38 = vshufps_avx(auVar39,auVar38,0xdd);
      auVar39 = vshufps_avx(auVar62,auVar45,0x44);
      auVar45 = vshufps_avx(auVar34,auVar39,0x88);
      auVar34 = vshufps_avx(auVar34,auVar39,0xdd);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar6),auVar4,auVar45);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar59,auVar45);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar59,auVar34);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar78,ZEXT1632(auVar3));
      auVar81._0_4_ = auVar45._0_4_ * fVar89;
      auVar81._4_4_ = auVar45._4_4_ * fVar92;
      auVar81._8_4_ = auVar45._8_4_ * fVar93;
      auVar81._12_4_ = auVar45._12_4_ * fVar94;
      auVar81._16_4_ = auVar45._16_4_ * fVar95;
      auVar81._20_4_ = auVar45._20_4_ * fVar96;
      auVar81._24_4_ = auVar45._24_4_ * fVar97;
      auVar81._28_4_ = auVar45._28_4_ * fVar98;
      auVar5 = vfmadd231ps_fma(auVar81,auVar4,auVar34);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar59,auVar47);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar84,ZEXT1632(auVar3));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,ZEXT1632(auVar2));
      auVar83._0_4_ = auVar34._0_4_ * fVar89;
      auVar83._4_4_ = auVar34._4_4_ * fVar92;
      auVar83._8_4_ = auVar34._8_4_ * fVar93;
      auVar83._12_4_ = auVar34._12_4_ * fVar94;
      auVar83._16_4_ = auVar34._16_4_ * fVar95;
      auVar83._20_4_ = auVar34._20_4_ * fVar96;
      auVar83._24_4_ = auVar34._24_4_ * fVar97;
      auVar83._28_4_ = auVar34._28_4_ * fVar98;
      auVar5 = vfmadd231ps_fma(auVar83,auVar4,auVar47);
      auVar65._16_16_ = *(undefined1 (*) [16])(lVar20 + 0x10 + uVar33 * 4);
      auVar65._0_16_ = *(undefined1 (*) [16])(lVar16 + 0x10 + uVar33 * 4);
      auVar63._16_16_ = *(undefined1 (*) [16])(lVar22 + 0x10 + uVar33 * 4);
      auVar63._0_16_ = *(undefined1 (*) [16])(lVar18 + 0x10 + uVar33 * 4);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar59,auVar38);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar84,ZEXT1632(auVar2));
      auVar85._0_4_ = auVar47._0_4_ * fVar89;
      auVar85._4_4_ = auVar47._4_4_ * fVar92;
      auVar85._8_4_ = auVar47._8_4_ * fVar93;
      auVar85._12_4_ = auVar47._12_4_ * fVar94;
      auVar85._16_4_ = auVar47._16_4_ * fVar95;
      auVar85._20_4_ = auVar47._20_4_ * fVar96;
      auVar85._24_4_ = auVar47._24_4_ * fVar97;
      auVar85._28_4_ = auVar47._28_4_ * fVar98;
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,ZEXT1632(auVar7));
      auVar52._16_16_ = *(undefined1 (*) [16])(lVar21 + 0x10 + uVar33 * 4);
      auVar52._0_16_ = *(undefined1 (*) [16])(lVar17 + 0x10 + uVar33 * 4);
      auVar46._16_16_ = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar33 * 4);
      auVar46._0_16_ = *(undefined1 (*) [16])(lVar19 + 0x10 + uVar33 * 4);
      auVar34 = vshufps_avx(auVar65,auVar52,0x44);
      auVar39 = vshufps_avx(auVar63,auVar46,0xee);
      auVar47 = vshufps_avx(auVar65,auVar52,0xee);
      auVar45 = vshufps_avx(auVar63,auVar46,0x44);
      auVar88 = vshufps_avx(auVar34,auVar45,0x88);
      auVar34 = vshufps_avx(auVar34,auVar45,0xdd);
      auVar5 = vfmadd231ps_fma(auVar85,auVar4,auVar38);
      auVar76._0_4_ = auVar38._0_4_ * fVar89;
      auVar76._4_4_ = auVar38._4_4_ * fVar92;
      auVar76._8_4_ = auVar38._8_4_ * fVar93;
      auVar76._12_4_ = auVar38._12_4_ * fVar94;
      auVar76._16_4_ = auVar38._16_4_ * fVar95;
      auVar76._20_4_ = auVar38._20_4_ * fVar96;
      auVar76._24_4_ = auVar38._24_4_ * fVar97;
      auVar76._28_4_ = auVar38._28_4_ * fVar98;
      auVar45 = vshufps_avx(auVar47,auVar39,0x88);
      auVar87._0_4_ = auVar88._0_4_ * fVar89;
      auVar87._4_4_ = auVar88._4_4_ * fVar92;
      auVar87._8_4_ = auVar88._8_4_ * fVar93;
      auVar87._12_4_ = auVar88._12_4_ * fVar94;
      auVar87._16_4_ = auVar88._16_4_ * fVar95;
      auVar87._20_4_ = auVar88._20_4_ * fVar96;
      auVar87._24_4_ = auVar88._24_4_ * fVar97;
      auVar87._28_4_ = auVar88._28_4_ * fVar98;
      auVar46 = vshufps_avx(auVar47,auVar39,0xdd);
      auVar90._0_4_ = auVar34._0_4_ * fVar89;
      auVar90._4_4_ = auVar34._4_4_ * fVar92;
      auVar90._8_4_ = auVar34._8_4_ * fVar93;
      auVar90._12_4_ = auVar34._12_4_ * fVar94;
      auVar90._16_4_ = auVar34._16_4_ * fVar95;
      auVar90._20_4_ = auVar34._20_4_ * fVar96;
      auVar90._24_4_ = auVar34._24_4_ * fVar97;
      auVar90._28_4_ = auVar34._28_4_ * fVar98;
      auVar6 = vfmadd231ps_fma(auVar90,auVar4,auVar45);
      auVar9 = vfmadd231ps_fma(auVar76,auVar4,auVar88);
      auVar10 = vfmadd231ps_fma(auVar87,auVar4,auVar34);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar59,auVar45);
      auVar35._0_4_ = auVar45._0_4_ * fVar89;
      auVar35._4_4_ = auVar45._4_4_ * fVar92;
      auVar35._8_4_ = auVar45._8_4_ * fVar93;
      auVar35._12_4_ = auVar45._12_4_ * fVar94;
      auVar35._16_4_ = auVar45._16_4_ * fVar95;
      auVar35._20_4_ = auVar45._20_4_ * fVar96;
      auVar35._24_4_ = auVar45._24_4_ * fVar97;
      auVar35._28_4_ = auVar45._28_4_ * fVar98;
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar59,auVar88);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar59,auVar34);
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar6),auVar59,auVar46);
      auVar11 = vfmadd231ps_fma(auVar35,auVar4,auVar46);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar84,ZEXT1632(auVar7));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,ZEXT1632(auVar8));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar84,ZEXT1632(auVar8));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,ZEXT1632(auVar12));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar84,ZEXT1632(auVar12));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,ZEXT1632(auVar9));
      auVar51 = ZEXT1632(auVar10);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar6),auVar84,ZEXT1632(auVar9));
      auVar35 = ZEXT1632(auVar10);
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,auVar35);
      auVar52 = ZEXT1632(auVar13);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar84,auVar35);
      auVar41 = ZEXT1632(auVar13);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar78,auVar41);
      auVar57._0_4_ = auVar46._0_4_ * fVar89;
      auVar57._4_4_ = auVar46._4_4_ * fVar92;
      auVar57._8_4_ = auVar46._8_4_ * fVar93;
      auVar57._12_4_ = auVar46._12_4_ * fVar94;
      auVar57._16_4_ = auVar46._16_4_ * fVar95;
      auVar57._20_4_ = auVar46._20_4_ * fVar96;
      auVar57._24_4_ = auVar46._24_4_ * fVar97;
      auVar57._28_4_ = auVar46._28_4_ * fVar98;
      local_240 = auVar43._0_4_;
      fStack_23c = auVar43._4_4_;
      fStack_238 = auVar43._8_4_;
      fStack_234 = auVar43._12_4_;
      fStack_230 = auVar43._16_4_;
      fStack_22c = auVar43._20_4_;
      fStack_228 = auVar43._24_4_;
      fStack_224 = auVar43._28_4_;
      auVar42._0_4_ = auVar2._0_4_ * local_240;
      auVar42._4_4_ = auVar2._4_4_ * fStack_23c;
      auVar42._8_4_ = auVar2._8_4_ * fStack_238;
      auVar42._12_4_ = auVar2._12_4_ * fStack_234;
      auVar42._16_4_ = fStack_230 * 0.0;
      auVar42._20_4_ = fStack_22c * 0.0;
      auVar42._24_4_ = fStack_228 * 0.0;
      auVar42._28_4_ = fStack_224 * 0.0;
      auVar6 = vfmadd231ps_fma(auVar57,auVar84,auVar41);
      auVar11 = vfmadd231ps_fma(local_1a0,auVar53,ZEXT1632(auVar3));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar40,ZEXT1632(auVar2));
      auVar14 = vfmadd231ps_fma(local_1c0,auVar40,ZEXT1632(auVar3));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar80,ZEXT1632(auVar14));
      auVar34 = vshufps_avx(ZEXT1632(auVar14),ZEXT1632(auVar11),0x44);
      auVar15 = vfmadd231ps_fma(auVar42,auVar53,ZEXT1632(auVar7));
      auVar15 = vfmadd231ps_fma(ZEXT1632(auVar15),auVar40,ZEXT1632(auVar8));
      auVar88._4_4_ = fVar69;
      auVar88._0_4_ = fVar67;
      auVar88._8_4_ = fVar70;
      auVar88._12_4_ = fVar71;
      auVar88._16_4_ = fVar72;
      auVar88._20_4_ = fVar73;
      auVar88._24_4_ = fVar74;
      auVar88._28_4_ = fVar75;
      auVar15 = vfmadd231ps_fma(ZEXT1632(auVar15),ZEXT1632(auVar11),auVar88);
      auVar58._0_4_ = auVar3._0_4_ * local_240;
      auVar58._4_4_ = auVar3._4_4_ * fStack_23c;
      auVar58._8_4_ = auVar3._8_4_ * fStack_238;
      auVar58._12_4_ = auVar3._12_4_ * fStack_234;
      auVar58._16_4_ = fStack_230 * 0.0;
      auVar58._20_4_ = fStack_22c * 0.0;
      auVar58._24_4_ = fStack_228 * 0.0;
      auVar58._28_4_ = fStack_224 * 0.0;
      auVar2 = vfmadd231ps_fma(auVar58,auVar53,ZEXT1632(auVar2));
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar40,ZEXT1632(auVar7));
      auVar91._4_4_ = fVar69;
      auVar91._0_4_ = fVar67;
      auVar91._8_4_ = fVar70;
      auVar91._12_4_ = fVar71;
      auVar91._16_4_ = fVar72;
      auVar91._20_4_ = fVar73;
      auVar91._24_4_ = fVar74;
      auVar91._28_4_ = fVar75;
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),ZEXT1632(auVar14),auVar91);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar80,ZEXT1632(auVar11));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar15),auVar80,ZEXT1632(auVar2));
      auVar38 = vshufps_avx(ZEXT1632(auVar14),ZEXT1632(auVar11),0xee);
      auVar39 = vshufps_avx(ZEXT1632(auVar2),ZEXT1632(auVar3),0x44);
      auVar68._0_4_ = local_240 * auVar7._0_4_;
      auVar68._4_4_ = fStack_23c * auVar7._4_4_;
      auVar68._8_4_ = fStack_238 * auVar7._8_4_;
      auVar68._12_4_ = fStack_234 * auVar7._12_4_;
      auVar68._16_4_ = fStack_230 * 0.0;
      auVar68._20_4_ = fStack_22c * 0.0;
      auVar68._24_4_ = fStack_228 * 0.0;
      auVar68._28_4_ = fStack_224 * 0.0;
      auVar32._4_4_ = fVar69;
      auVar32._0_4_ = fVar67;
      auVar32._8_4_ = fVar70;
      auVar32._12_4_ = fVar71;
      auVar32._16_4_ = fVar72;
      auVar32._20_4_ = fVar73;
      auVar32._24_4_ = fVar74;
      auVar32._28_4_ = fVar75;
      auVar7 = vfmadd231ps_fma(auVar68,auVar53,ZEXT1632(auVar8));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),ZEXT1632(auVar12),auVar40);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar32,ZEXT1632(auVar2));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar80,ZEXT1632(auVar3));
      auVar66._0_4_ = local_240 * auVar8._0_4_;
      auVar66._4_4_ = fStack_23c * auVar8._4_4_;
      auVar66._8_4_ = fStack_238 * auVar8._8_4_;
      auVar66._12_4_ = fStack_234 * auVar8._12_4_;
      auVar66._16_4_ = fStack_230 * 0.0;
      auVar66._20_4_ = fStack_22c * 0.0;
      auVar66._24_4_ = fStack_228 * 0.0;
      auVar66._28_4_ = fStack_224 * 0.0;
      auVar8 = vfmadd231ps_fma(auVar66,auVar53,ZEXT1632(auVar12));
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),ZEXT1632(auVar9),auVar40);
      auVar47 = vshufps_avx(auVar34,auVar39,0xdd);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar32,ZEXT1632(auVar3));
      auVar88 = vshufps_avx(ZEXT1632(auVar2),ZEXT1632(auVar3),0xee);
      auVar34 = vshufps_avx(auVar34,auVar39,0x88);
      *(undefined1 (*) [16])(lVar24 + uVar33 * 4) = auVar34._0_16_;
      auVar39 = vshufps_avx(auVar38,auVar88,0x88);
      *(undefined1 (*) [16])(lVar25 + uVar33 * 4) = auVar47._0_16_;
      auVar38 = vshufps_avx(auVar38,auVar88,0xdd);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar80,ZEXT1632(auVar7));
      *(undefined1 (*) [16])(lVar26 + uVar33 * 4) = auVar39._0_16_;
      *(undefined1 (*) [16])(lVar27 + uVar33 * 4) = auVar38._0_16_;
      *(undefined1 (*) [16])(lVar28 + uVar33 * 4) = auVar34._16_16_;
      auVar79._0_4_ = local_240 * auVar12._0_4_;
      auVar79._4_4_ = fStack_23c * auVar12._4_4_;
      auVar79._8_4_ = fStack_238 * auVar12._8_4_;
      auVar79._12_4_ = fStack_234 * auVar12._12_4_;
      auVar79._16_4_ = fStack_230 * 0.0;
      auVar79._20_4_ = fStack_22c * 0.0;
      auVar79._24_4_ = fStack_228 * 0.0;
      auVar79._28_4_ = fStack_224 * 0.0;
      auVar2 = vfmadd231ps_fma(auVar79,auVar53,ZEXT1632(auVar9));
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar35,auVar40);
      auVar77._0_4_ = local_240 * auVar9._0_4_;
      auVar77._4_4_ = fStack_23c * auVar9._4_4_;
      auVar77._8_4_ = fStack_238 * auVar9._8_4_;
      auVar77._12_4_ = fStack_234 * auVar9._12_4_;
      auVar77._16_4_ = fStack_230 * 0.0;
      auVar77._20_4_ = fStack_22c * 0.0;
      auVar77._24_4_ = fStack_228 * 0.0;
      auVar77._28_4_ = fStack_224 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar77,auVar53,auVar35);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar41,auVar40);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar32,ZEXT1632(auVar7));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar80,ZEXT1632(auVar8));
      auVar35 = ZEXT1632(auVar9);
      auVar36._0_4_ = auVar10._0_4_ * local_240;
      auVar36._4_4_ = auVar10._4_4_ * fStack_23c;
      auVar36._8_4_ = auVar10._8_4_ * fStack_238;
      auVar36._12_4_ = auVar10._12_4_ * fStack_234;
      auVar36._16_4_ = fStack_230 * 0.0;
      auVar36._20_4_ = fStack_22c * 0.0;
      auVar36._24_4_ = fStack_228 * 0.0;
      auVar36._28_4_ = fStack_224 * 0.0;
      auVar2 = vfmadd231ps_fma(auVar36,auVar53,auVar41);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar32,ZEXT1632(auVar9));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar32,ZEXT1632(auVar8));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar80,ZEXT1632(auVar9));
      auVar36 = ZEXT1632(auVar11);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar80,ZEXT1632(auVar11));
      auVar37._0_4_ = auVar13._0_4_ * local_240;
      auVar37._4_4_ = auVar13._4_4_ * fStack_23c;
      auVar37._8_4_ = auVar13._8_4_ * fStack_238;
      auVar37._12_4_ = auVar13._12_4_ * fStack_234;
      auVar37._16_4_ = fStack_230 * 0.0;
      auVar37._20_4_ = fStack_22c * 0.0;
      auVar37._24_4_ = fStack_228 * 0.0;
      auVar37._28_4_ = fStack_224 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar37,auVar32,ZEXT1632(auVar11));
      *(undefined1 (*) [16])(lVar29 + uVar33 * 4) = auVar47._16_16_;
      *(undefined1 (*) [16])(lVar30 + uVar33 * 4) = auVar39._16_16_;
      auVar34 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar11),0x44);
      auVar39 = vshufps_avx(ZEXT1632(auVar7),ZEXT1632(auVar8),0x44);
      *(undefined1 (*) [16])(lVar31 + uVar33 * 4) = auVar38._16_16_;
      auVar38 = vshufps_avx(auVar39,auVar34,0x88);
      auVar88 = ZEXT1632(auVar10);
      auVar91 = ZEXT1632(auVar13);
      auVar47 = vshufps_avx(ZEXT1632(auVar7),ZEXT1632(auVar8),0xee);
      auVar41 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar11),0xee);
      *(undefined1 (*) [16])(lVar24 + 0x10 + uVar33 * 4) = auVar38._0_16_;
      auVar34 = vshufps_avx(auVar39,auVar34,0xdd);
      auVar39 = vshufps_avx(auVar47,auVar41,0x88);
      auVar47 = vshufps_avx(auVar47,auVar41,0xdd);
      *(undefined1 (*) [16])(lVar25 + 0x10 + uVar33 * 4) = auVar34._0_16_;
      *(undefined1 (*) [16])(lVar26 + 0x10 + uVar33 * 4) = auVar39._0_16_;
      *(undefined1 (*) [16])(lVar27 + 0x10 + uVar33 * 4) = auVar47._0_16_;
      *(undefined1 (*) [16])(lVar28 + 0x10 + uVar33 * 4) = auVar38._16_16_;
      *(undefined1 (*) [16])(lVar29 + 0x10 + uVar33 * 4) = auVar34._16_16_;
      *(undefined1 (*) [16])(lVar30 + 0x10 + uVar33 * 4) = auVar39._16_16_;
      *(undefined1 (*) [16])(lVar31 + 0x10 + uVar33 * 4) = auVar47._16_16_;
      local_380 = local_380 + 8;
      uVar33 = (ulonglong)local_380;
    } while (local_380 < param_7);
  }
  auVar4 = vshufps_avx(auVar45,auVar46,0x44);
  auVar53 = vshufps_avx(auVar45,auVar46,0xee);
  auVar34 = vshufps_avx(auVar51,auVar52,0x44);
  auVar59 = vshufps_avx(auVar34,auVar4,0xdd);
  auVar4 = vshufps_avx(auVar34,auVar4,0x88);
  *(undefined1 (*) [16])*param_4 = auVar4._0_16_;
  auVar34 = vshufps_avx(auVar51,auVar52,0xee);
  auVar38 = vshufps_avx(auVar34,auVar53,0x88);
  *(undefined1 (*) [16])param_4[1] = auVar59._0_16_;
  auVar53 = vshufps_avx(auVar34,auVar53,0xdd);
  *(undefined1 (*) [16])param_4[2] = auVar38._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar53._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar4._16_16_;
  auVar4 = vshufps_avx(auVar35,auVar36,0x44);
  *(undefined1 (*) [16])param_4[5] = auVar59._16_16_;
  auVar34 = vshufps_avx(auVar35,auVar36,0xee);
  *(undefined1 (*) [16])param_4[6] = auVar38._16_16_;
  auVar59 = vshufps_avx(auVar88,auVar91,0x44);
  auVar38 = vshufps_avx(auVar4,auVar59,0xdd);
  auVar4 = vshufps_avx(auVar4,auVar59,0x88);
  *(undefined1 (*) [16])param_4[7] = auVar53._16_16_;
  auVar53 = vshufps_avx(auVar88,auVar91,0xee);
  auVar59 = vshufps_avx(auVar34,auVar53,0x88);
  auVar53 = vshufps_avx(auVar34,auVar53,0xdd);
  *(undefined1 (*) [16])*param_6 = auVar4._0_16_;
  *(undefined1 (*) [16])param_6[1] = auVar38._0_16_;
  *(undefined1 (*) [16])param_6[2] = auVar59._0_16_;
  *(undefined1 (*) [16])param_6[3] = auVar53._0_16_;
  *(undefined1 (*) [16])param_6[4] = auVar4._16_16_;
  *(undefined1 (*) [16])param_6[5] = auVar38._16_16_;
  *(undefined1 (*) [16])param_6[6] = auVar59._16_16_;
  *(undefined1 (*) [16])param_6[7] = auVar53._16_16_;
  return;
}



// FUNCTION 145551e40 FUN_145551e40 body=2445 status=ok
// SIG undefined FUN_145551e40(void)

void FUN_145551e40(longlong *param_1,undefined1 (*param_2) [32],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [32];
  ulonglong uVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar62 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar80;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar81 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  uint local_3a0;
  undefined8 uStack_348;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  
  lVar21 = *param_1;
  lVar22 = param_1[1];
  lVar23 = param_1[2];
  lVar24 = param_1[3];
  lVar17 = param_1[4];
  lVar18 = param_1[5];
  lVar2 = param_1[6];
  pauVar1 = param_2 + 1;
  lVar19 = *(longlong *)*pauVar1;
  lVar20 = *(longlong *)(param_2[1] + 8);
  auVar54._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar54._0_16_ = *(undefined1 (*) [16])*param_3;
  lVar25 = *(longlong *)*param_2;
  lVar26 = *(longlong *)(*param_2 + 8);
  lVar27 = *(longlong *)(*param_2 + 0x10);
  lVar28 = *(longlong *)(*param_2 + 0x18);
  auVar32 = *param_2;
  auVar47 = *param_2;
  auVar41 = *param_2;
  lVar3 = *(longlong *)(param_2[1] + 0x10);
  auVar70._0_12_ = ZEXT812(0);
  auVar70._12_4_ = 0;
  auVar50._16_16_ = *(undefined1 (*) [16])param_3[5];
  auVar50._0_16_ = *(undefined1 (*) [16])param_3[1];
  auVar37._16_16_ = *(undefined1 (*) [16])param_3[6];
  auVar37._0_16_ = *(undefined1 (*) [16])param_3[2];
  auVar36 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar6 = vshufps_avx(auVar37,auVar36,0x44);
  auVar36 = vshufps_avx(auVar37,auVar36,0xee);
  auVar37 = vshufps_avx(auVar54,auVar50,0x44);
  auVar7 = vshufps_avx(auVar37,auVar6,0x88);
  auVar6 = vshufps_avx(auVar37,auVar6,0xdd);
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar37 = vshufps_avx(auVar54,auVar50,0xee);
  auVar31 = vshufps_avx(auVar37,auVar36,0xdd);
  auVar91._0_8_ = auVar31._0_8_ ^ 0x8000000080000000;
  auVar91._8_4_ = auVar31._8_4_ ^ 0x80000000;
  auVar91._12_4_ = auVar31._12_4_ ^ 0x80000000;
  auVar91._16_4_ = auVar31._16_4_ ^ 0x80000000;
  auVar91._20_4_ = auVar31._20_4_ ^ 0x80000000;
  auVar91._24_4_ = auVar31._24_4_ ^ 0x80000000;
  auVar91._28_4_ = auVar31._28_4_ ^ 0x80000000;
  auVar5 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_3[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[5])[1]),0x10);
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[6])[1]),0x20);
  auVar89._0_8_ = auVar4._0_8_ ^ 0x8000000080000000;
  auVar89._8_4_ = auVar4._8_4_ ^ 0x80000000;
  auVar89._12_4_ = auVar4._12_4_ ^ 0x80000000;
  auVar89._16_4_ = auVar5._0_4_ ^ 0x80000000;
  auVar89._20_4_ = auVar5._4_4_ ^ 0x80000000;
  auVar89._24_4_ = auVar5._8_4_ ^ 0x80000000;
  auVar89._28_4_ = auVar5._12_4_ ^ 0x80000000;
  auVar51._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar51._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar36 = vshufps_avx(auVar37,auVar36,0x88);
  auVar44._16_16_ = *(undefined1 (*) [16])param_4[5];
  auVar44._0_16_ = *(undefined1 (*) [16])param_4[1];
  auVar37 = vshufps_avx(auVar51,auVar44,0x44);
  auVar31 = vshufps_avx(auVar51,auVar44,0xee);
  auVar39._16_16_ = *(undefined1 (*) [16])param_4[6];
  auVar39._0_16_ = *(undefined1 (*) [16])param_4[2];
  auVar44 = vshufps_avx(auVar39,ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar39 = vshufps_avx(auVar39,ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar45 = vshufps_avx(auVar31,auVar44,0xdd);
  auVar50 = vshufps_avx(auVar37,auVar39,0xdd);
  auVar78._0_4_ = auVar45._0_4_ * auVar6._0_4_;
  auVar78._4_4_ = auVar45._4_4_ * auVar6._4_4_;
  auVar78._8_4_ = auVar45._8_4_ * auVar6._8_4_;
  auVar78._12_4_ = auVar45._12_4_ * auVar6._12_4_;
  auVar78._16_4_ = auVar45._16_4_ * auVar6._16_4_;
  auVar78._20_4_ = auVar45._20_4_ * auVar6._20_4_;
  auVar78._24_4_ = auVar45._24_4_ * auVar6._24_4_;
  auVar78._28_4_ = auVar45._28_4_ * auVar6._28_4_;
  auVar4 = vfmadd231ps_fma(auVar78,auVar50,auVar91);
  auVar31 = vshufps_avx(auVar31,auVar44,0x88);
  auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar31,auVar36);
  auVar37 = vshufps_avx(auVar37,auVar39,0x88);
  fVar80 = auVar36._0_4_;
  auVar92._0_4_ = fVar80 * auVar45._0_4_;
  fVar82 = auVar36._4_4_;
  auVar92._4_4_ = fVar82 * auVar45._4_4_;
  fVar83 = auVar36._8_4_;
  auVar92._8_4_ = fVar83 * auVar45._8_4_;
  fVar84 = auVar36._12_4_;
  auVar92._12_4_ = fVar84 * auVar45._12_4_;
  fVar85 = auVar36._16_4_;
  auVar92._16_4_ = fVar85 * auVar45._16_4_;
  fVar86 = auVar36._20_4_;
  auVar92._20_4_ = fVar86 * auVar45._20_4_;
  fVar87 = auVar36._24_4_;
  auVar92._24_4_ = fVar87 * auVar45._24_4_;
  fVar88 = auVar36._28_4_;
  auVar92._28_4_ = fVar88 * auVar45._28_4_;
  auVar8 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar37,auVar89);
  auVar9 = vfmadd231ps_fma(auVar92,auVar50,auVar89);
  auVar55._16_16_ = *(undefined1 (*) [16])param_5[4];
  auVar55._0_16_ = *(undefined1 (*) [16])*param_5;
  auVar52._16_16_ = *(undefined1 (*) [16])param_5[5];
  auVar52._0_16_ = *(undefined1 (*) [16])param_5[1];
  auVar45._16_16_ = *(undefined1 (*) [16])param_5[6];
  auVar45._0_16_ = *(undefined1 (*) [16])param_5[2];
  auVar37 = ZEXT1632(*(undefined1 (*) [16])param_5[3]);
  auVar36 = vshufps_avx(auVar45,auVar37,0x44);
  auVar37 = vshufps_avx(auVar45,auVar37,0xee);
  auVar31 = vshufps_avx(auVar55,auVar52,0x44);
  auVar44 = vshufps_avx(auVar31,auVar36,0x88);
  auVar36 = vshufps_avx(auVar31,auVar36,0xdd);
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_5)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[1])[1]),0x10);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[2])[1]),0x20);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[3])[1]),0x30);
  auVar31 = vshufps_avx(auVar55,auVar52,0xee);
  auVar39 = vshufps_avx(auVar31,auVar37,0xdd);
  auVar74._0_8_ = auVar39._0_8_ ^ 0x8000000080000000;
  auVar74._8_4_ = auVar39._8_4_ ^ 0x80000000;
  auVar74._12_4_ = auVar39._12_4_ ^ 0x80000000;
  auVar74._16_4_ = auVar39._16_4_ ^ 0x80000000;
  auVar74._20_4_ = auVar39._20_4_ ^ 0x80000000;
  auVar74._24_4_ = auVar39._24_4_ ^ 0x80000000;
  auVar74._28_4_ = auVar39._28_4_ ^ 0x80000000;
  auVar5 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_5[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[5])[1]),0x10);
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[6])[1]),0x20);
  fVar61 = -auVar4._0_4_;
  fVar63 = -auVar4._4_4_;
  fVar64 = -auVar4._8_4_;
  fVar65 = -auVar4._12_4_;
  fVar66 = -auVar5._0_4_;
  fVar67 = -auVar5._4_4_;
  fVar68 = -auVar5._8_4_;
  fVar69 = -auVar5._12_4_;
  auVar37 = vshufps_avx(auVar31,auVar37,0x88);
  auVar56._16_16_ = *(undefined1 (*) [16])param_6[4];
  auVar56._0_16_ = *(undefined1 (*) [16])*param_6;
  auVar53._16_16_ = *(undefined1 (*) [16])param_6[5];
  auVar53._0_16_ = *(undefined1 (*) [16])param_6[1];
  auVar31 = vshufps_avx(auVar56,auVar53,0x44);
  auVar40._16_16_ = *(undefined1 (*) [16])param_6[6];
  auVar40._0_16_ = *(undefined1 (*) [16])param_6[2];
  auVar39 = vshufps_avx(auVar56,auVar53,0xee);
  auVar45 = vshufps_avx(auVar40,ZEXT1632(*(undefined1 (*) [16])param_6[3]),0x44);
  auVar50 = vshufps_avx(auVar31,auVar45,0xdd);
  auVar31 = vshufps_avx(auVar31,auVar45,0x88);
  auVar46._0_4_ = auVar31._0_4_ * fVar61;
  auVar46._4_4_ = auVar31._4_4_ * fVar63;
  auVar46._8_4_ = auVar31._8_4_ * fVar64;
  auVar46._12_4_ = auVar31._12_4_ * fVar65;
  auVar46._16_4_ = auVar31._16_4_ * fVar66;
  auVar46._20_4_ = auVar31._20_4_ * fVar67;
  auVar46._24_4_ = auVar31._24_4_ * fVar68;
  auVar46._28_4_ = auVar31._28_4_ * fVar69;
  auVar31 = vshufps_avx(auVar40,ZEXT1632(*(undefined1 (*) [16])param_6[3]),0xee);
  auVar45 = vshufps_avx(auVar39,auVar31,0xdd);
  uVar30 = 0;
  auVar31 = vshufps_avx(auVar39,auVar31,0x88);
  auVar4 = vfmadd231ps_fma(auVar46,auVar31,auVar37);
  auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar50,auVar74);
  auVar31._0_4_ = auVar50._0_4_ * fVar61;
  auVar31._4_4_ = auVar50._4_4_ * fVar63;
  auVar31._8_4_ = auVar50._8_4_ * fVar64;
  auVar31._12_4_ = auVar50._12_4_ * fVar65;
  auVar31._16_4_ = auVar50._16_4_ * fVar66;
  auVar31._20_4_ = auVar50._20_4_ * fVar67;
  auVar31._24_4_ = auVar50._24_4_ * fVar68;
  auVar31._28_4_ = auVar50._28_4_ * fVar69;
  auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar36,auVar45);
  auVar5 = vfmadd231ps_fma(auVar31,auVar45,auVar37);
  local_3a0 = 0;
  if (param_7 == 0) {
    auVar94._24_8_ = uStack_348;
    auVar94._0_24_ = *(undefined1 (*) [24])*pauVar1;
    auVar33._24_8_ = uStack_348;
    auVar33._0_24_ = *(undefined1 (*) [24])*pauVar1;
    auVar73._24_8_ = uStack_348;
    auVar73._0_24_ = *(undefined1 (*) [24])*pauVar1;
    auVar77._24_8_ = uStack_348;
    auVar77._0_24_ = *(undefined1 (*) [24])*pauVar1;
    auVar31 = *param_2;
  }
  else {
    do {
      local_1a0 = ZEXT1632(auVar5);
      local_1c0 = ZEXT1632(auVar4);
      auVar59._16_16_ = *(undefined1 (*) [16])(lVar17 + uVar30 * 4);
      auVar59._0_16_ = *(undefined1 (*) [16])(lVar21 + uVar30 * 4);
      auVar47._16_16_ = *(undefined1 (*) [16])(lVar18 + uVar30 * 4);
      auVar47._0_16_ = *(undefined1 (*) [16])(lVar22 + uVar30 * 4);
      auVar57._16_16_ = *(undefined1 (*) [16])(lVar2 + uVar30 * 4);
      auVar57._0_16_ = *(undefined1 (*) [16])(lVar23 + uVar30 * 4);
      auVar41._16_16_ = auVar70;
      auVar41._0_16_ = *(undefined1 (*) [16])(lVar24 + uVar30 * 4);
      auVar31 = vshufps_avx(auVar59,auVar47,0x44);
      auVar39 = vshufps_avx(auVar57,auVar41,0xee);
      auVar45 = vshufps_avx(auVar59,auVar47,0xee);
      auVar50 = vshufps_avx(auVar45,auVar39,0x88);
      auVar39 = vshufps_avx(auVar45,auVar39,0xdd);
      auVar45 = vshufps_avx(auVar57,auVar41,0x44);
      auVar41 = vshufps_avx(auVar31,auVar45,0x88);
      auVar31 = vshufps_avx(auVar31,auVar45,0xdd);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar6,auVar41);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar7,auVar41);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar7,auVar31);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar91,ZEXT1632(auVar5));
      auVar75._0_4_ = auVar41._0_4_ * fVar80;
      auVar75._4_4_ = auVar41._4_4_ * fVar82;
      auVar75._8_4_ = auVar41._8_4_ * fVar83;
      auVar75._12_4_ = auVar41._12_4_ * fVar84;
      auVar75._16_4_ = auVar41._16_4_ * fVar85;
      auVar75._20_4_ = auVar41._20_4_ * fVar86;
      auVar75._24_4_ = auVar41._24_4_ * fVar87;
      auVar75._28_4_ = auVar41._28_4_ * fVar88;
      auVar8 = vfmadd231ps_fma(auVar75,auVar6,auVar31);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar7,auVar50);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar89,ZEXT1632(auVar5));
      auVar70 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar91,ZEXT1632(auVar4));
      auVar79._0_4_ = auVar31._0_4_ * fVar80;
      auVar79._4_4_ = auVar31._4_4_ * fVar82;
      auVar79._8_4_ = auVar31._8_4_ * fVar83;
      auVar79._12_4_ = auVar31._12_4_ * fVar84;
      auVar79._16_4_ = auVar31._16_4_ * fVar85;
      auVar79._20_4_ = auVar31._20_4_ * fVar86;
      auVar79._24_4_ = auVar31._24_4_ * fVar87;
      auVar79._28_4_ = auVar31._28_4_ * fVar88;
      auVar8 = vfmadd231ps_fma(auVar79,auVar6,auVar50);
      auVar60._16_16_ = *(undefined1 (*) [16])(lVar17 + 0x10 + uVar30 * 4);
      auVar60._0_16_ = *(undefined1 (*) [16])(lVar21 + 0x10 + uVar30 * 4);
      auVar58._16_16_ = *(undefined1 (*) [16])(lVar2 + 0x10 + uVar30 * 4);
      auVar58._0_16_ = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar30 * 4);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar7,auVar39);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar89,ZEXT1632(auVar4));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar91,ZEXT1632(auVar70));
      auVar48._16_16_ = *(undefined1 (*) [16])(lVar18 + 0x10 + uVar30 * 4);
      auVar48._0_16_ = *(undefined1 (*) [16])(lVar22 + 0x10 + uVar30 * 4);
      auVar31 = vshufps_avx(auVar60,auVar48,0x44);
      auVar41 = ZEXT1632(*(undefined1 (*) [16])(lVar24 + 0x10 + uVar30 * 4));
      auVar45 = vshufps_avx(auVar58,auVar41,0xee);
      auVar41 = vshufps_avx(auVar58,auVar41,0x44);
      auVar32 = vshufps_avx(auVar31,auVar41,0x88);
      auVar31 = vshufps_avx(auVar31,auVar41,0xdd);
      auVar47 = vshufps_avx(auVar60,auVar48,0xee);
      auVar41 = vshufps_avx(auVar47,auVar45,0x88);
      auVar47 = vshufps_avx(auVar47,auVar45,0xdd);
      auVar81._0_4_ = auVar50._0_4_ * fVar80;
      auVar81._4_4_ = auVar50._4_4_ * fVar82;
      auVar81._8_4_ = auVar50._8_4_ * fVar83;
      auVar81._12_4_ = auVar50._12_4_ * fVar84;
      auVar81._16_4_ = auVar50._16_4_ * fVar85;
      auVar81._20_4_ = auVar50._20_4_ * fVar86;
      auVar81._24_4_ = auVar50._24_4_ * fVar87;
      auVar81._28_4_ = auVar50._28_4_ * fVar88;
      auVar8 = vfmadd231ps_fma(auVar81,auVar6,auVar39);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar7,auVar32);
      auVar90._0_4_ = auVar39._0_4_ * fVar80;
      auVar90._4_4_ = auVar39._4_4_ * fVar82;
      auVar90._8_4_ = auVar39._8_4_ * fVar83;
      auVar90._12_4_ = auVar39._12_4_ * fVar84;
      auVar90._16_4_ = auVar39._16_4_ * fVar85;
      auVar90._20_4_ = auVar39._20_4_ * fVar86;
      auVar90._24_4_ = auVar39._24_4_ * fVar87;
      auVar90._28_4_ = auVar39._28_4_ * fVar88;
      auVar9 = vfmadd231ps_fma(auVar90,auVar6,auVar32);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar7,auVar31);
      auVar93._0_4_ = auVar32._0_4_ * fVar80;
      auVar93._4_4_ = auVar32._4_4_ * fVar82;
      auVar93._8_4_ = auVar32._8_4_ * fVar83;
      auVar93._12_4_ = auVar32._12_4_ * fVar84;
      auVar93._16_4_ = auVar32._16_4_ * fVar85;
      auVar93._20_4_ = auVar32._20_4_ * fVar86;
      auVar93._24_4_ = auVar32._24_4_ * fVar87;
      auVar93._28_4_ = auVar32._28_4_ * fVar88;
      auVar11 = vfmadd231ps_fma(auVar93,auVar6,auVar31);
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar7,auVar41);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar89,ZEXT1632(auVar70));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar8),ZEXT1632(auVar10),auVar91);
      auVar32._0_4_ = auVar31._0_4_ * fVar80;
      auVar32._4_4_ = auVar31._4_4_ * fVar82;
      auVar32._8_4_ = auVar31._8_4_ * fVar83;
      auVar32._12_4_ = auVar31._12_4_ * fVar84;
      auVar32._16_4_ = auVar31._16_4_ * fVar85;
      auVar32._20_4_ = auVar31._20_4_ * fVar86;
      auVar32._24_4_ = auVar31._24_4_ * fVar87;
      auVar32._28_4_ = auVar31._28_4_ * fVar88;
      auVar8 = vfmadd231ps_fma(auVar32,auVar6,auVar41);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar47,auVar7);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar89,ZEXT1632(auVar10));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar91,ZEXT1632(auVar12));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar89,ZEXT1632(auVar12));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar91,ZEXT1632(auVar13));
      auVar32 = ZEXT1632(auVar11);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar89,ZEXT1632(auVar13));
      auVar38._0_4_ = auVar41._0_4_ * fVar80;
      auVar38._4_4_ = auVar41._4_4_ * fVar82;
      auVar38._8_4_ = auVar41._8_4_ * fVar83;
      auVar38._12_4_ = auVar41._12_4_ * fVar84;
      auVar38._16_4_ = auVar41._16_4_ * fVar85;
      auVar38._20_4_ = auVar41._20_4_ * fVar86;
      auVar38._24_4_ = auVar41._24_4_ * fVar87;
      auVar38._28_4_ = auVar41._28_4_ * fVar88;
      auVar9 = vfmadd231ps_fma(auVar38,auVar47,auVar6);
      auVar46 = ZEXT1632(auVar11);
      auVar14 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar91,auVar46);
      auVar33 = ZEXT1632(auVar14);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar89,auVar46);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar91,auVar33);
      auVar42._0_4_ = auVar47._0_4_ * fVar80;
      auVar42._4_4_ = auVar47._4_4_ * fVar82;
      auVar42._8_4_ = auVar47._8_4_ * fVar83;
      auVar42._12_4_ = auVar47._12_4_ * fVar84;
      auVar42._16_4_ = auVar47._16_4_ * fVar85;
      auVar42._20_4_ = auVar47._20_4_ * fVar86;
      auVar42._24_4_ = auVar47._24_4_ * fVar87;
      auVar42._28_4_ = auVar47._28_4_ * fVar88;
      local_280 = auVar37._0_4_;
      fStack_27c = auVar37._4_4_;
      fStack_278 = auVar37._8_4_;
      fStack_274 = auVar37._12_4_;
      fStack_270 = auVar37._16_4_;
      fStack_26c = auVar37._20_4_;
      fStack_268 = auVar37._24_4_;
      fStack_264 = auVar37._28_4_;
      auVar49._0_4_ = auVar5._0_4_ * local_280;
      auVar49._4_4_ = auVar5._4_4_ * fStack_27c;
      auVar49._8_4_ = auVar5._8_4_ * fStack_278;
      auVar49._12_4_ = auVar5._12_4_ * fStack_274;
      auVar49._16_4_ = fStack_270 * 0.0;
      auVar49._20_4_ = fStack_26c * 0.0;
      auVar49._24_4_ = fStack_268 * 0.0;
      auVar49._28_4_ = fStack_264 * 0.0;
      auVar9 = vfmadd231ps_fma(auVar42,auVar89,ZEXT1632(auVar14));
      auVar15 = vfmadd231ps_fma(local_1c0,auVar44,ZEXT1632(auVar5));
      auVar16 = vfmadd231ps_fma(auVar49,auVar36,ZEXT1632(auVar4));
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar44,ZEXT1632(auVar70));
      auVar5 = vfmadd231ps_fma(local_1a0,auVar36,ZEXT1632(auVar5));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar44,ZEXT1632(auVar4));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar74,ZEXT1632(auVar15));
      auVar43._0_4_ = local_280 * auVar4._0_4_;
      auVar43._4_4_ = fStack_27c * auVar4._4_4_;
      auVar43._8_4_ = fStack_278 * auVar4._8_4_;
      auVar43._12_4_ = fStack_274 * auVar4._12_4_;
      auVar43._16_4_ = fStack_270 * 0.0;
      auVar43._20_4_ = fStack_26c * 0.0;
      auVar43._24_4_ = fStack_268 * 0.0;
      auVar43._28_4_ = fStack_264 * 0.0;
      auVar4 = vfmadd231ps_fma(auVar43,auVar36,ZEXT1632(auVar70));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar44,ZEXT1632(auVar10));
      auVar71._0_4_ = local_280 * auVar70._0_4_;
      auVar71._4_4_ = fStack_27c * auVar70._4_4_;
      auVar71._8_4_ = fStack_278 * auVar70._8_4_;
      auVar71._12_4_ = fStack_274 * auVar70._12_4_;
      auVar71._16_4_ = fStack_270 * 0.0;
      auVar71._20_4_ = fStack_26c * 0.0;
      auVar71._24_4_ = fStack_268 * 0.0;
      auVar71._28_4_ = fStack_264 * 0.0;
      auVar70 = vfmadd231ps_fma(auVar71,auVar36,ZEXT1632(auVar10));
      auVar70 = vfmadd231ps_fma(ZEXT1632(auVar70),auVar44,ZEXT1632(auVar12));
      auVar29._4_4_ = fVar63;
      auVar29._0_4_ = fVar61;
      auVar29._8_4_ = fVar64;
      auVar29._12_4_ = fVar65;
      auVar29._16_4_ = fVar66;
      auVar29._20_4_ = fVar67;
      auVar29._24_4_ = fVar68;
      auVar29._28_4_ = fVar69;
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar29,ZEXT1632(auVar15));
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar74,ZEXT1632(auVar5));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar5));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar74,ZEXT1632(auVar16));
      auVar70 = vfmadd231ps_fma(ZEXT1632(auVar70),auVar29,ZEXT1632(auVar16));
      auVar70 = vfmadd231ps_fma(ZEXT1632(auVar70),auVar74,ZEXT1632(auVar4));
      auVar62._0_4_ = local_280 * auVar10._0_4_;
      auVar62._4_4_ = fStack_27c * auVar10._4_4_;
      auVar62._8_4_ = fStack_278 * auVar10._8_4_;
      auVar62._12_4_ = fStack_274 * auVar10._12_4_;
      auVar62._16_4_ = fStack_270 * 0.0;
      auVar62._20_4_ = fStack_26c * 0.0;
      auVar62._24_4_ = fStack_268 * 0.0;
      auVar62._28_4_ = fStack_264 * 0.0;
      auVar10 = vfmadd231ps_fma(auVar62,auVar36,ZEXT1632(auVar12));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),ZEXT1632(auVar13),auVar44);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar29,ZEXT1632(auVar4));
      auVar31 = vshufps_avx(ZEXT1632(auVar15),ZEXT1632(auVar5),0x44);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar74,ZEXT1632(auVar70));
      auVar39 = vshufps_avx(ZEXT1632(auVar15),ZEXT1632(auVar5),0xee);
      auVar45 = vshufps_avx(ZEXT1632(auVar16),ZEXT1632(auVar4),0x44);
      auVar50 = vshufps_avx(auVar31,auVar45,0xdd);
      auVar40 = vshufps_avx(ZEXT1632(auVar16),ZEXT1632(auVar4),0xee);
      auVar31 = vshufps_avx(auVar31,auVar45,0x88);
      *(undefined1 (*) [16])(lVar25 + uVar30 * 4) = auVar31._0_16_;
      auVar45 = vshufps_avx(auVar39,auVar40,0x88);
      auVar39 = vshufps_avx(auVar39,auVar40,0xdd);
      *(undefined1 (*) [16])(lVar26 + uVar30 * 4) = auVar50._0_16_;
      *(undefined1 (*) [16])(lVar27 + uVar30 * 4) = auVar45._0_16_;
      *(undefined1 (*) [16])(lVar28 + uVar30 * 4) = auVar39._0_16_;
      auVar34._0_4_ = auVar11._0_4_ * local_280;
      auVar34._4_4_ = auVar11._4_4_ * fStack_27c;
      auVar34._8_4_ = auVar11._8_4_ * fStack_278;
      auVar34._12_4_ = auVar11._12_4_ * fStack_274;
      auVar34._16_4_ = fStack_270 * 0.0;
      auVar34._20_4_ = fStack_26c * 0.0;
      auVar34._24_4_ = fStack_268 * 0.0;
      auVar34._28_4_ = fStack_264 * 0.0;
      *(undefined1 (*) [16])(lVar19 + uVar30 * 4) = auVar31._16_16_;
      auVar72._0_4_ = local_280 * auVar12._0_4_;
      auVar72._4_4_ = fStack_27c * auVar12._4_4_;
      auVar72._8_4_ = fStack_278 * auVar12._8_4_;
      auVar72._12_4_ = fStack_274 * auVar12._12_4_;
      auVar72._16_4_ = fStack_270 * 0.0;
      auVar72._20_4_ = fStack_26c * 0.0;
      auVar72._24_4_ = fStack_268 * 0.0;
      auVar72._28_4_ = fStack_264 * 0.0;
      auVar4 = vfmadd231ps_fma(auVar72,auVar36,ZEXT1632(auVar13));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,auVar44);
      auVar76._0_4_ = local_280 * auVar13._0_4_;
      auVar76._4_4_ = fStack_27c * auVar13._4_4_;
      auVar76._8_4_ = fStack_278 * auVar13._8_4_;
      auVar76._12_4_ = fStack_274 * auVar13._12_4_;
      auVar76._16_4_ = fStack_270 * 0.0;
      auVar76._20_4_ = fStack_26c * 0.0;
      auVar76._24_4_ = fStack_268 * 0.0;
      auVar76._28_4_ = fStack_264 * 0.0;
      auVar5 = vfmadd231ps_fma(auVar34,auVar36,auVar33);
      auVar12 = vfmadd231ps_fma(auVar76,auVar36,auVar46);
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar33,auVar44);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar29,ZEXT1632(auVar70));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar74,ZEXT1632(auVar10));
      auVar73 = ZEXT1632(auVar13);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar29,ZEXT1632(auVar13));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar29,ZEXT1632(auVar10));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar74,ZEXT1632(auVar13));
      auVar77 = ZEXT1632(auVar12);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar74,ZEXT1632(auVar12));
      auVar35._0_4_ = auVar14._0_4_ * local_280;
      auVar35._4_4_ = auVar14._4_4_ * fStack_27c;
      auVar35._8_4_ = auVar14._8_4_ * fStack_278;
      auVar35._12_4_ = auVar14._12_4_ * fStack_274;
      auVar35._16_4_ = fStack_270 * 0.0;
      auVar35._20_4_ = fStack_26c * 0.0;
      auVar35._24_4_ = fStack_268 * 0.0;
      auVar35._28_4_ = fStack_264 * 0.0;
      auVar5 = vfmadd231ps_fma(auVar35,auVar29,ZEXT1632(auVar12));
      auVar31 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar12),0x44);
      auVar39 = vshufps_avx(ZEXT1632(auVar70),ZEXT1632(auVar10),0x44);
      *(undefined1 (*) [16])(lVar20 + uVar30 * 4) = auVar50._16_16_;
      auVar50 = vshufps_avx(auVar39,auVar31,0x88);
      *(undefined1 (*) [16])(lVar3 + uVar30 * 4) = auVar45._16_16_;
      auVar94 = ZEXT1632(auVar11);
      auVar45 = vshufps_avx(ZEXT1632(auVar70),ZEXT1632(auVar10),0xee);
      auVar40 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar12),0xee);
      *(undefined1 (*) [16])(lVar25 + 0x10 + uVar30 * 4) = auVar50._0_16_;
      auVar31 = vshufps_avx(auVar39,auVar31,0xdd);
      *(undefined1 (*) [16])(lVar26 + 0x10 + uVar30 * 4) = auVar31._0_16_;
      auVar39 = vshufps_avx(auVar45,auVar40,0x88);
      *(undefined1 (*) [16])(lVar27 + 0x10 + uVar30 * 4) = auVar39._0_16_;
      auVar45 = vshufps_avx(auVar45,auVar40,0xdd);
      *(undefined1 (*) [16])(lVar28 + 0x10 + uVar30 * 4) = auVar45._0_16_;
      *(undefined1 (*) [16])(lVar19 + 0x10 + uVar30 * 4) = auVar50._16_16_;
      *(undefined1 (*) [16])(lVar20 + 0x10 + uVar30 * 4) = auVar31._16_16_;
      *(undefined1 (*) [16])(lVar3 + 0x10 + uVar30 * 4) = auVar39._16_16_;
      local_3a0 = local_3a0 + 8;
      uVar30 = (ulonglong)local_3a0;
      auVar70 = ZEXT816(0) << 0x20;
      auVar31 = auVar33;
    } while (local_3a0 < param_7);
  }
  auVar6 = vshufps_avx(auVar41,auVar47,0x44);
  auVar36 = vshufps_avx(auVar41,auVar47,0xee);
  auVar37 = vshufps_avx(auVar32,auVar31,0x44);
  auVar7 = vshufps_avx(auVar37,auVar6,0x88);
  *(undefined1 (*) [16])*param_4 = auVar7._0_16_;
  auVar6 = vshufps_avx(auVar37,auVar6,0xdd);
  auVar37 = vshufps_avx(auVar32,auVar31,0xee);
  auVar31 = vshufps_avx(auVar37,auVar36,0x88);
  *(undefined1 (*) [16])param_4[1] = auVar6._0_16_;
  auVar36 = vshufps_avx(auVar37,auVar36,0xdd);
  auVar37 = vshufps_avx(auVar73,auVar77,0xee);
  *(undefined1 (*) [16])param_4[2] = auVar31._0_16_;
  auVar44 = vshufps_avx(auVar94,auVar33,0xee);
  *(undefined1 (*) [16])param_4[3] = auVar36._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar7._16_16_;
  auVar36 = vshufps_avx(auVar37,auVar44,0x88);
  *(undefined1 (*) [16])param_4[5] = auVar6._16_16_;
  auVar6 = vshufps_avx(auVar73,auVar77,0x44);
  *(undefined1 (*) [16])param_4[6] = auVar31._16_16_;
  auVar7 = vshufps_avx(auVar94,auVar33,0x44);
  auVar31 = vshufps_avx(auVar6,auVar7,0x88);
  auVar6 = vshufps_avx(auVar6,auVar7,0xdd);
  *(undefined1 (*) [16])*param_6 = auVar31._0_16_;
  auVar37 = vshufps_avx(auVar37,auVar44,0xdd);
  *(undefined1 (*) [16])param_6[1] = auVar6._0_16_;
  *(undefined1 (*) [16])param_6[2] = auVar36._0_16_;
  *(undefined1 (*) [16])param_6[3] = auVar37._0_16_;
  *(undefined1 (*) [16])param_6[4] = auVar31._16_16_;
  *(undefined1 (*) [16])param_6[5] = auVar6._16_16_;
  *(undefined1 (*) [16])param_6[6] = auVar36._16_16_;
  return;
}



// FUNCTION 1455527e0 FUN_1455527e0 body=2279 status=ok
// SIG undefined FUN_1455527e0(void)

void FUN_1455527e0(undefined1 (*param_1) [32],undefined1 (*param_2) [24],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [24];
  undefined1 auVar25 [24];
  uint uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  float fVar52;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar53 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar70;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 local_340 [32];
  undefined1 auStack_310 [16];
  longlong local_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  undefined1 local_1c0 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  
  pauVar1 = param_1 + 1;
  lVar17 = *(longlong *)*pauVar1;
  lVar18 = *(longlong *)(param_1[1] + 8);
  auVar24 = *(undefined1 (*) [24])*param_1;
  lVar21 = *(longlong *)(*param_1 + 0x18);
  auVar37 = *param_1;
  auVar25 = *param_2;
  lVar22 = *(longlong *)param_2[1];
  auVar29._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar29._0_16_ = *(undefined1 (*) [16])*param_3;
  lVar19 = *(longlong *)(param_2[1] + 8);
  lVar20 = *(longlong *)(param_2[1] + 0x10);
  auVar44._16_16_ = *(undefined1 (*) [16])param_3[5];
  auVar44._0_16_ = *(undefined1 (*) [16])param_3[1];
  auVar34 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar28 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar4 = vshufps_avx(auVar28,auVar34,0x44);
  auVar5 = vshufps_avx(auVar29,auVar44,0x44);
  auVar6 = vshufps_avx(auVar5,auVar4,0x88);
  auVar4 = vshufps_avx(auVar5,auVar4,0xdd);
  auVar5 = vshufps_avx(auVar29,auVar44,0xee);
  auVar34 = vshufps_avx(auVar28,auVar34,0xee);
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar28 = vshufps_avx(auVar5,auVar34,0xdd);
  auVar62._0_8_ = auVar28._0_8_ ^ 0x8000000080000000;
  auVar62._8_4_ = auVar28._8_4_ ^ 0x80000000;
  auVar62._12_4_ = auVar28._12_4_ ^ 0x80000000;
  auVar62._16_4_ = auVar28._16_4_ ^ 0x80000000;
  auVar62._20_4_ = auVar28._20_4_ ^ 0x80000000;
  auVar62._24_4_ = auVar28._24_4_ ^ 0x80000000;
  auVar62._28_4_ = auVar28._28_4_ ^ 0x80000000;
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_3[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[5])[1]),0x10);
  auVar5 = vshufps_avx(auVar5,auVar34,0x88);
  auVar80._0_8_ = auVar2._0_8_ ^ 0x8000000080000000;
  auVar80._8_4_ = auVar2._8_4_ ^ 0x80000000;
  auVar80._12_4_ = auVar2._12_4_ ^ 0x80000000;
  auVar80._16_4_ = auVar3._0_4_ ^ 0x80000000;
  auVar80._20_4_ = auVar3._4_4_ ^ 0x80000000;
  auVar80._24_4_ = auVar3._8_4_ ^ 0x80000000;
  auVar80._28_4_ = auVar3._12_4_ ^ 0x80000000;
  auVar45._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar45._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar31._16_16_ = *(undefined1 (*) [16])param_4[5];
  auVar31._0_16_ = *(undefined1 (*) [16])param_4[1];
  auVar34 = vshufps_avx(auVar45,auVar31,0x44);
  auVar28 = vshufps_avx(auVar45,auVar31,0xee);
  auVar31 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar39 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar44 = vshufps_avx(auVar28,auVar31,0xdd);
  auVar28 = vshufps_avx(auVar28,auVar31,0x88);
  auVar31 = vshufps_avx(auVar34,auVar39,0xdd);
  auVar34 = vshufps_avx(auVar34,auVar39,0x88);
  auVar69._0_4_ = auVar44._0_4_ * auVar4._0_4_;
  auVar69._4_4_ = auVar44._4_4_ * auVar4._4_4_;
  auVar69._8_4_ = auVar44._8_4_ * auVar4._8_4_;
  auVar69._12_4_ = auVar44._12_4_ * auVar4._12_4_;
  auVar69._16_4_ = auVar44._16_4_ * auVar4._16_4_;
  auVar69._20_4_ = auVar44._20_4_ * auVar4._20_4_;
  auVar69._24_4_ = auVar44._24_4_ * auVar4._24_4_;
  auVar69._28_4_ = auVar44._28_4_ * auVar4._28_4_;
  auVar2 = vfmadd231ps_fma(auVar69,auVar31,auVar62);
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar28,auVar5);
  auVar7 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar34,auVar80);
  fVar70 = auVar5._0_4_;
  auVar34._0_4_ = fVar70 * auVar44._0_4_;
  fVar73 = auVar5._4_4_;
  auVar34._4_4_ = fVar73 * auVar44._4_4_;
  fVar74 = auVar5._8_4_;
  auVar34._8_4_ = fVar74 * auVar44._8_4_;
  fVar75 = auVar5._12_4_;
  auVar34._12_4_ = fVar75 * auVar44._12_4_;
  fVar76 = auVar5._16_4_;
  auVar34._16_4_ = fVar76 * auVar44._16_4_;
  fVar77 = auVar5._20_4_;
  auVar34._20_4_ = fVar77 * auVar44._20_4_;
  fVar78 = auVar5._24_4_;
  auVar34._24_4_ = fVar78 * auVar44._24_4_;
  fVar79 = auVar5._28_4_;
  auVar34._28_4_ = fVar79 * auVar44._28_4_;
  auVar8 = vfmadd231ps_fma(auVar34,auVar31,auVar80);
  auVar47._16_16_ = *(undefined1 (*) [16])param_5[4];
  auVar47._0_16_ = *(undefined1 (*) [16])*param_5;
  auVar39._16_16_ = *(undefined1 (*) [16])param_5[5];
  auVar39._0_16_ = *(undefined1 (*) [16])param_5[1];
  auVar5 = vshufps_avx(auVar47,auVar39,0x44);
  auVar34 = vshufps_avx(auVar47,auVar39,0xee);
  auVar31 = ZEXT1632(*(undefined1 (*) [16])param_5[3]);
  auVar39 = ZEXT1632(*(undefined1 (*) [16])param_5[2]);
  auVar28 = vshufps_avx(auVar39,auVar31,0xee);
  auVar31 = vshufps_avx(auVar39,auVar31,0x44);
  auVar39 = vshufps_avx(auVar5,auVar31,0x88);
  auVar5 = vshufps_avx(auVar5,auVar31,0xdd);
  auVar31 = vshufps_avx(auVar34,auVar28,0xdd);
  auVar65._0_8_ = auVar31._0_8_ ^ 0x8000000080000000;
  auVar65._8_4_ = auVar31._8_4_ ^ 0x80000000;
  auVar65._12_4_ = auVar31._12_4_ ^ 0x80000000;
  auVar65._16_4_ = auVar31._16_4_ ^ 0x80000000;
  auVar65._20_4_ = auVar31._20_4_ ^ 0x80000000;
  auVar65._24_4_ = auVar31._24_4_ ^ 0x80000000;
  auVar65._28_4_ = auVar31._28_4_ ^ 0x80000000;
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])param_5[4])[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[5])[1]),0x10);
  auVar34 = vshufps_avx(auVar34,auVar28,0x88);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_5)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[2])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[3])[1]),0x30);
  fVar52 = -auVar3._0_4_;
  fVar54 = -auVar3._4_4_;
  fVar55 = -auVar3._8_4_;
  fVar56 = -auVar3._12_4_;
  fVar57 = -auVar2._0_4_;
  fVar58 = -auVar2._4_4_;
  fVar59 = -auVar2._8_4_;
  fVar60 = -auVar2._12_4_;
  auVar48._16_16_ = *(undefined1 (*) [16])param_6[4];
  auVar48._0_16_ = *(undefined1 (*) [16])*param_6;
  auVar46._16_16_ = *(undefined1 (*) [16])param_6[5];
  auVar46._0_16_ = *(undefined1 (*) [16])param_6[1];
  auVar28 = vshufps_avx(auVar48,auVar46,0x44);
  auVar31 = vshufps_avx(auVar48,auVar46,0xee);
  auVar44 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_6[3]),0x44);
  auVar45 = vshufps_avx(auVar28,auVar44,0xdd);
  auVar28 = vshufps_avx(auVar28,auVar44,0x88);
  auVar40._0_4_ = auVar28._0_4_ * fVar52;
  auVar40._4_4_ = auVar28._4_4_ * fVar54;
  auVar40._8_4_ = auVar28._8_4_ * fVar55;
  auVar40._12_4_ = auVar28._12_4_ * fVar56;
  auVar40._16_4_ = auVar28._16_4_ * fVar57;
  auVar40._20_4_ = auVar28._20_4_ * fVar58;
  auVar40._24_4_ = auVar28._24_4_ * fVar59;
  auVar40._28_4_ = auVar28._28_4_ * fVar60;
  auVar28 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_6[3]),0xee);
  auVar44 = vshufps_avx(auVar31,auVar28,0xdd);
  auVar28 = vshufps_avx(auVar31,auVar28,0x88);
  auVar2 = vfmadd231ps_fma(auVar40,auVar28,auVar34);
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar45,auVar65);
  auVar28._0_4_ = auVar45._0_4_ * fVar52;
  auVar28._4_4_ = auVar45._4_4_ * fVar54;
  auVar28._8_4_ = auVar45._8_4_ * fVar55;
  auVar28._12_4_ = auVar45._12_4_ * fVar56;
  auVar28._16_4_ = auVar45._16_4_ * fVar57;
  auVar28._20_4_ = auVar45._20_4_ * fVar58;
  auVar28._24_4_ = auVar45._24_4_ * fVar59;
  auVar28._28_4_ = auVar45._28_4_ * fVar60;
  auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar5,auVar44);
  auVar3 = vfmadd231ps_fma(auVar28,auVar44,auVar34);
  if (param_7 == 0) {
    auVar82._16_16_ = auStack_310;
    auVar82._0_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar72._16_16_ = auStack_310;
    auVar72._0_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar64._16_16_ = auStack_310;
    auVar64._0_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar67._16_16_ = auStack_310;
    auVar67._0_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar31 = auVar37;
    auVar44 = auVar37;
    auVar28 = auVar37;
  }
  else {
    uVar27 = 0;
    local_340._16_8_ = auVar24._16_8_;
    local_340._8_8_ = auVar24._8_8_;
    local_340._0_8_ = auVar24._0_8_;
    lStack_2f0 = auVar25._16_8_;
    lStack_2f8 = auVar25._8_8_;
    local_300 = auVar25._0_8_;
    do {
      local_140 = ZEXT1632(auVar3);
      local_160 = ZEXT1632(auVar2);
      local_1c0 = ZEXT1632(auVar8);
      auVar49._16_16_ = *(undefined1 (*) [16])(lVar17 + uVar27 * 4);
      auVar49._0_16_ = *(undefined1 (*) [16])(local_340._0_8_ + uVar27 * 4);
      auVar41._16_16_ = *(undefined1 (*) [16])(lVar18 + uVar27 * 4);
      auVar41._0_16_ = *(undefined1 (*) [16])(local_340._8_8_ + uVar27 * 4);
      auVar28 = vshufps_avx(auVar49,auVar41,0x44);
      auVar37 = ZEXT1632(*(undefined1 (*) [16])(lVar21 + uVar27 * 4));
      auVar40 = ZEXT1632(*(undefined1 (*) [16])(local_340._16_8_ + uVar27 * 4));
      auVar31 = vshufps_avx(auVar40,auVar37,0xee);
      auVar44 = vshufps_avx(auVar49,auVar41,0xee);
      auVar45 = vshufps_avx(auVar44,auVar31,0x88);
      auVar31 = vshufps_avx(auVar44,auVar31,0xdd);
      auVar44 = vshufps_avx(auVar40,auVar37,0x44);
      auVar37 = vshufps_avx(auVar28,auVar44,0x88);
      auVar28 = vshufps_avx(auVar28,auVar44,0xdd);
      auVar2 = vfmadd231ps_fma(local_1c0,auVar4,auVar37);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar6,auVar28);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar6,auVar37);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar62,ZEXT1632(auVar3));
      auVar68._0_4_ = auVar37._0_4_ * fVar70;
      auVar68._4_4_ = auVar37._4_4_ * fVar73;
      auVar68._8_4_ = auVar37._8_4_ * fVar74;
      auVar68._12_4_ = auVar37._12_4_ * fVar75;
      auVar68._16_4_ = auVar37._16_4_ * fVar76;
      auVar68._20_4_ = auVar37._20_4_ * fVar77;
      auVar68._24_4_ = auVar37._24_4_ * fVar78;
      auVar68._28_4_ = auVar37._28_4_ * fVar79;
      auVar7 = vfmadd231ps_fma(auVar68,auVar4,auVar28);
      auVar29 = ZEXT1632(auVar2);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar6,auVar45);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar80,ZEXT1632(auVar3));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar62,auVar29);
      auVar37._0_4_ = auVar28._0_4_ * fVar70;
      auVar37._4_4_ = auVar28._4_4_ * fVar73;
      auVar37._8_4_ = auVar28._8_4_ * fVar74;
      auVar37._12_4_ = auVar28._12_4_ * fVar75;
      auVar37._16_4_ = auVar28._16_4_ * fVar76;
      auVar37._20_4_ = auVar28._20_4_ * fVar77;
      auVar37._24_4_ = auVar28._24_4_ * fVar78;
      auVar37._28_4_ = auVar28._28_4_ * fVar79;
      auVar7 = vfmadd231ps_fma(auVar37,auVar4,auVar45);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar6,auVar31);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar80,ZEXT1632(auVar2));
      auVar50._16_16_ = *(undefined1 (*) [16])(lVar17 + 0x10 + uVar27 * 4);
      auVar50._0_16_ = *(undefined1 (*) [16])(local_340._0_8_ + 0x10 + uVar27 * 4);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar62,ZEXT1632(auVar9));
      auVar42._16_16_ = *(undefined1 (*) [16])(lVar18 + 0x10 + uVar27 * 4);
      auVar42._0_16_ = *(undefined1 (*) [16])(local_340._8_8_ + 0x10 + uVar27 * 4);
      auVar28 = vshufps_avx(auVar50,auVar42,0x44);
      auVar37 = ZEXT1632(*(undefined1 (*) [16])(lVar21 + 0x10 + uVar27 * 4));
      auVar40 = ZEXT1632(*(undefined1 (*) [16])(local_340._16_8_ + 0x10 + uVar27 * 4));
      auVar44 = vshufps_avx(auVar40,auVar37,0xee);
      auVar37 = vshufps_avx(auVar40,auVar37,0x44);
      auVar40 = vshufps_avx(auVar28,auVar37,0x88);
      auVar46 = vshufps_avx(auVar28,auVar37,0xdd);
      auVar28 = vshufps_avx(auVar50,auVar42,0xee);
      auVar37 = vshufps_avx(auVar28,auVar44,0x88);
      auVar28 = vshufps_avx(auVar28,auVar44,0xdd);
      auVar71._0_4_ = auVar45._0_4_ * fVar70;
      auVar71._4_4_ = auVar45._4_4_ * fVar73;
      auVar71._8_4_ = auVar45._8_4_ * fVar74;
      auVar71._12_4_ = auVar45._12_4_ * fVar75;
      auVar71._16_4_ = auVar45._16_4_ * fVar76;
      auVar71._20_4_ = auVar45._20_4_ * fVar77;
      auVar71._24_4_ = auVar45._24_4_ * fVar78;
      auVar71._28_4_ = auVar45._28_4_ * fVar79;
      auVar7 = vfmadd231ps_fma(auVar71,auVar4,auVar31);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar40,auVar6);
      auVar61._0_4_ = auVar31._0_4_ * fVar70;
      auVar61._4_4_ = auVar31._4_4_ * fVar73;
      auVar61._8_4_ = auVar31._8_4_ * fVar74;
      auVar61._12_4_ = auVar31._12_4_ * fVar75;
      auVar61._16_4_ = auVar31._16_4_ * fVar76;
      auVar61._20_4_ = auVar31._20_4_ * fVar77;
      auVar61._24_4_ = auVar31._24_4_ * fVar78;
      auVar61._28_4_ = auVar31._28_4_ * fVar79;
      auVar8 = vfmadd231ps_fma(auVar61,auVar4,auVar40);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar46,auVar6);
      auVar81._0_4_ = auVar40._0_4_ * fVar70;
      auVar81._4_4_ = auVar40._4_4_ * fVar73;
      auVar81._8_4_ = auVar40._8_4_ * fVar74;
      auVar81._12_4_ = auVar40._12_4_ * fVar75;
      auVar81._16_4_ = auVar40._16_4_ * fVar76;
      auVar81._20_4_ = auVar40._20_4_ * fVar77;
      auVar81._24_4_ = auVar40._24_4_ * fVar78;
      auVar81._28_4_ = auVar40._28_4_ * fVar79;
      auVar11 = vfmadd231ps_fma(auVar81,auVar4,auVar46);
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar37,auVar6);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar80,ZEXT1632(auVar9));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar62,ZEXT1632(auVar10));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar80,ZEXT1632(auVar10));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar62,ZEXT1632(auVar12));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar80,ZEXT1632(auVar12));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar62,ZEXT1632(auVar13));
      auVar44 = ZEXT1632(auVar11);
      auVar30._0_4_ = auVar46._0_4_ * fVar70;
      auVar30._4_4_ = auVar46._4_4_ * fVar73;
      auVar30._8_4_ = auVar46._8_4_ * fVar74;
      auVar30._12_4_ = auVar46._12_4_ * fVar75;
      auVar30._16_4_ = auVar46._16_4_ * fVar76;
      auVar30._20_4_ = auVar46._20_4_ * fVar77;
      auVar30._24_4_ = auVar46._24_4_ * fVar78;
      auVar30._28_4_ = auVar46._28_4_ * fVar79;
      auVar7 = vfmadd231ps_fma(auVar30,auVar4,auVar37);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar28,auVar6);
      auVar35._0_4_ = auVar37._0_4_ * fVar70;
      auVar35._4_4_ = auVar37._4_4_ * fVar73;
      auVar35._8_4_ = auVar37._8_4_ * fVar74;
      auVar35._12_4_ = auVar37._12_4_ * fVar75;
      auVar35._16_4_ = auVar37._16_4_ * fVar76;
      auVar35._20_4_ = auVar37._20_4_ * fVar77;
      auVar35._24_4_ = auVar37._24_4_ * fVar78;
      auVar35._28_4_ = auVar37._28_4_ * fVar79;
      auVar8 = vfmadd231ps_fma(auVar35,auVar28,auVar4);
      auVar48 = ZEXT1632(auVar11);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar80,auVar48);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar80,ZEXT1632(auVar13));
      auVar14 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar48,auVar62);
      auVar31 = ZEXT1632(auVar14);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar31,auVar62);
      auVar36._0_4_ = auVar28._0_4_ * fVar70;
      auVar36._4_4_ = auVar28._4_4_ * fVar73;
      auVar36._8_4_ = auVar28._8_4_ * fVar74;
      auVar36._12_4_ = auVar28._12_4_ * fVar75;
      auVar36._16_4_ = auVar28._16_4_ * fVar76;
      auVar36._20_4_ = auVar28._20_4_ * fVar77;
      auVar36._24_4_ = auVar28._24_4_ * fVar78;
      auVar36._28_4_ = auVar28._28_4_ * fVar79;
      auVar23._4_4_ = fVar54;
      auVar23._0_4_ = fVar52;
      auVar23._8_4_ = fVar55;
      auVar23._12_4_ = fVar56;
      auVar23._16_4_ = fVar57;
      auVar23._20_4_ = fVar58;
      auVar23._24_4_ = fVar59;
      auVar23._28_4_ = fVar60;
      auVar8 = vfmadd231ps_fma(auVar36,auVar80,ZEXT1632(auVar14));
      auVar15 = vfmadd231ps_fma(local_160,auVar39,ZEXT1632(auVar3));
      auVar16 = vfmadd231ps_fma(local_140,auVar5,ZEXT1632(auVar3));
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar39,auVar29);
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),ZEXT1632(auVar15),auVar65);
      local_1a0 = auVar34._0_4_;
      fStack_19c = auVar34._4_4_;
      fStack_198 = auVar34._8_4_;
      fStack_194 = auVar34._12_4_;
      fStack_190 = auVar34._16_4_;
      fStack_18c = auVar34._20_4_;
      fStack_188 = auVar34._24_4_;
      fStack_184 = auVar34._28_4_;
      auVar38._0_4_ = local_1a0 * auVar2._0_4_;
      auVar38._4_4_ = fStack_19c * auVar2._4_4_;
      auVar38._8_4_ = fStack_198 * auVar2._8_4_;
      auVar38._12_4_ = fStack_194 * auVar2._12_4_;
      auVar38._16_4_ = fStack_190 * 0.0;
      auVar38._20_4_ = fStack_18c * 0.0;
      auVar38._24_4_ = fStack_188 * 0.0;
      auVar38._28_4_ = fStack_184 * 0.0;
      auVar2 = vfmadd231ps_fma(auVar38,auVar5,ZEXT1632(auVar9));
      auVar43._0_4_ = local_1a0 * auVar3._0_4_;
      auVar43._4_4_ = fStack_19c * auVar3._4_4_;
      auVar43._8_4_ = fStack_198 * auVar3._8_4_;
      auVar43._12_4_ = fStack_194 * auVar3._12_4_;
      auVar43._16_4_ = fStack_190 * 0.0;
      auVar43._20_4_ = fStack_18c * 0.0;
      auVar43._24_4_ = fStack_188 * 0.0;
      auVar43._28_4_ = fStack_184 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar43,auVar5,auVar29);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar39,ZEXT1632(auVar9));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar23,ZEXT1632(auVar15));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),ZEXT1632(auVar16),auVar65);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar39,ZEXT1632(auVar10));
      auVar53._0_4_ = local_1a0 * auVar9._0_4_;
      auVar53._4_4_ = fStack_19c * auVar9._4_4_;
      auVar53._8_4_ = fStack_198 * auVar9._8_4_;
      auVar53._12_4_ = fStack_194 * auVar9._12_4_;
      auVar53._16_4_ = fStack_190 * 0.0;
      auVar53._20_4_ = fStack_18c * 0.0;
      auVar53._24_4_ = fStack_188 * 0.0;
      auVar53._28_4_ = fStack_184 * 0.0;
      auVar9 = vfmadd231ps_fma(auVar53,auVar5,ZEXT1632(auVar10));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),ZEXT1632(auVar12),auVar39);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar23,ZEXT1632(auVar16));
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar65,ZEXT1632(auVar3));
      auVar51._0_4_ = local_1a0 * auVar10._0_4_;
      auVar51._4_4_ = fStack_19c * auVar10._4_4_;
      auVar51._8_4_ = fStack_198 * auVar10._8_4_;
      auVar51._12_4_ = fStack_194 * auVar10._12_4_;
      auVar51._16_4_ = fStack_190 * 0.0;
      auVar51._20_4_ = fStack_18c * 0.0;
      auVar51._24_4_ = fStack_188 * 0.0;
      auVar51._28_4_ = fStack_184 * 0.0;
      auVar10 = vfmadd231ps_fma(auVar51,ZEXT1632(auVar12),auVar5);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),ZEXT1632(auVar13),auVar39);
      auVar45 = vshufps_avx(ZEXT1632(auVar15),ZEXT1632(auVar16),0x44);
      auVar40 = vshufps_avx(ZEXT1632(auVar15),ZEXT1632(auVar16),0xee);
      auVar46 = vshufps_avx(ZEXT1632(auVar3),ZEXT1632(auVar2),0x44);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar23,ZEXT1632(auVar3));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar65,ZEXT1632(auVar2));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar23,ZEXT1632(auVar2));
      auVar29 = vshufps_avx(auVar45,auVar46,0xdd);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar65,ZEXT1632(auVar9));
      auVar47 = vshufps_avx(ZEXT1632(auVar3),ZEXT1632(auVar2),0xee);
      auVar45 = vshufps_avx(auVar45,auVar46,0x88);
      *(undefined1 (*) [16])(local_300 + uVar27 * 4) = auVar45._0_16_;
      *(undefined1 (*) [16])(lStack_2f8 + uVar27 * 4) = auVar29._0_16_;
      auVar46 = vshufps_avx(auVar40,auVar47,0x88);
      *(undefined1 (*) [16])(lStack_2f0 + uVar27 * 4) = auVar46._0_16_;
      auVar40 = vshufps_avx(auVar40,auVar47,0xdd);
      *(undefined1 (*) [16])(lVar22 + uVar27 * 4) = auVar40._0_16_;
      *(undefined1 (*) [16])(lVar19 + uVar27 * 4) = auVar45._16_16_;
      *(undefined1 (*) [16])(lVar20 + uVar27 * 4) = auVar29._16_16_;
      auVar63._0_4_ = local_1a0 * auVar12._0_4_;
      auVar63._4_4_ = fStack_19c * auVar12._4_4_;
      auVar63._8_4_ = fStack_198 * auVar12._8_4_;
      auVar63._12_4_ = fStack_194 * auVar12._12_4_;
      auVar63._16_4_ = fStack_190 * 0.0;
      auVar63._20_4_ = fStack_18c * 0.0;
      auVar63._24_4_ = fStack_188 * 0.0;
      auVar63._28_4_ = fStack_184 * 0.0;
      auVar2 = vfmadd231ps_fma(auVar63,auVar5,ZEXT1632(auVar13));
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar48,auVar39);
      auVar32._0_4_ = local_1a0 * auVar11._0_4_;
      auVar32._4_4_ = fStack_19c * auVar11._4_4_;
      auVar32._8_4_ = fStack_198 * auVar11._8_4_;
      auVar32._12_4_ = fStack_194 * auVar11._12_4_;
      auVar32._16_4_ = fStack_190 * 0.0;
      auVar32._20_4_ = fStack_18c * 0.0;
      auVar32._24_4_ = fStack_188 * 0.0;
      auVar32._28_4_ = fStack_184 * 0.0;
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar23,ZEXT1632(auVar9));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar65,ZEXT1632(auVar10));
      auVar64 = ZEXT1632(auVar12);
      auVar66._0_4_ = local_1a0 * auVar13._0_4_;
      auVar66._4_4_ = fStack_19c * auVar13._4_4_;
      auVar66._8_4_ = fStack_198 * auVar13._8_4_;
      auVar66._12_4_ = fStack_194 * auVar13._12_4_;
      auVar66._16_4_ = fStack_190 * 0.0;
      auVar66._20_4_ = fStack_18c * 0.0;
      auVar66._24_4_ = fStack_188 * 0.0;
      auVar66._28_4_ = fStack_184 * 0.0;
      auVar2 = vfmadd231ps_fma(auVar32,auVar5,auVar31);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),auVar23,ZEXT1632(auVar12));
      auVar82 = ZEXT1632(auVar11);
      auVar3 = vfmadd231ps_fma(auVar66,auVar5,auVar82);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar31,auVar39);
      auVar45 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar10),0x44);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar23,ZEXT1632(auVar10));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar3),ZEXT1632(auVar12),auVar65);
      auVar67 = ZEXT1632(auVar11);
      auVar2 = vfmadd231ps_fma(ZEXT1632(auVar2),ZEXT1632(auVar11),auVar65);
      auVar33._0_4_ = local_1a0 * auVar14._0_4_;
      auVar33._4_4_ = fStack_19c * auVar14._4_4_;
      auVar33._8_4_ = fStack_198 * auVar14._8_4_;
      auVar33._12_4_ = fStack_194 * auVar14._12_4_;
      auVar33._16_4_ = fStack_190 * 0.0;
      auVar33._20_4_ = fStack_18c * 0.0;
      auVar33._24_4_ = fStack_188 * 0.0;
      auVar33._28_4_ = fStack_184 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar33,auVar23,ZEXT1632(auVar11));
      auVar40 = vshufps_avx(ZEXT1632(auVar12),ZEXT1632(auVar11),0x44);
      auVar46 = vshufps_avx(auVar45,auVar40,0x88);
      auVar45 = vshufps_avx(auVar45,auVar40,0xdd);
      *(undefined1 (*) [16])(local_300 + 0x10 + uVar27 * 4) = auVar46._0_16_;
      auVar40 = vshufps_avx(ZEXT1632(auVar9),ZEXT1632(auVar10),0xee);
      auVar29 = vshufps_avx(ZEXT1632(auVar12),ZEXT1632(auVar11),0xee);
      auVar47 = vshufps_avx(auVar40,auVar29,0x88);
      *(undefined1 (*) [16])(lStack_2f8 + 0x10 + uVar27 * 4) = auVar45._0_16_;
      *(undefined1 (*) [16])(lStack_2f0 + 0x10 + uVar27 * 4) = auVar47._0_16_;
      auVar40 = vshufps_avx(auVar40,auVar29,0xdd);
      *(undefined1 (*) [16])(lVar22 + 0x10 + uVar27 * 4) = auVar40._0_16_;
      *(undefined1 (*) [16])(lVar19 + 0x10 + uVar27 * 4) = auVar46._16_16_;
      *(undefined1 (*) [16])(lVar20 + 0x10 + uVar27 * 4) = auVar45._16_16_;
      uVar26 = (int)uVar27 + 8;
      uVar27 = (ulonglong)uVar26;
      auVar72 = auVar31;
    } while (uVar26 < param_7);
  }
  local_340 = auVar28;
  auVar4 = vshufps_avx(auVar37,local_340,0x44);
  auVar5 = vshufps_avx(auVar37,local_340,0xee);
  auVar6 = vshufps_avx(auVar44,auVar31,0x44);
  auVar34 = vshufps_avx(auVar6,auVar4,0x88);
  *(undefined1 (*) [16])*param_4 = auVar34._0_16_;
  auVar4 = vshufps_avx(auVar6,auVar4,0xdd);
  auVar6 = vshufps_avx(auVar44,auVar31,0xee);
  auVar28 = vshufps_avx(auVar6,auVar5,0x88);
  *(undefined1 (*) [16])param_4[1] = auVar4._0_16_;
  auVar5 = vshufps_avx(auVar6,auVar5,0xdd);
  auVar6 = vshufps_avx(auVar64,auVar67,0x44);
  auVar31 = vshufps_avx(auVar64,auVar67,0xee);
  *(undefined1 (*) [16])param_4[2] = auVar28._0_16_;
  *(undefined1 (*) [16])param_4[3] = auVar5._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar34._16_16_;
  auVar5 = vshufps_avx(auVar82,auVar72,0x44);
  auVar34 = vshufps_avx(auVar6,auVar5,0xdd);
  auVar5 = vshufps_avx(auVar6,auVar5,0x88);
  *(undefined1 (*) [16])param_4[5] = auVar4._16_16_;
  auVar4 = vshufps_avx(auVar82,auVar72,0xee);
  auVar6 = vshufps_avx(auVar31,auVar4,0x88);
  auVar4 = vshufps_avx(auVar31,auVar4,0xdd);
  *(undefined1 (*) [16])*param_6 = auVar5._0_16_;
  *(undefined1 (*) [16])param_6[1] = auVar34._0_16_;
  *(undefined1 (*) [16])param_6[2] = auVar6._0_16_;
  *(undefined1 (*) [16])param_6[3] = auVar4._0_16_;
  *(undefined1 (*) [16])param_6[4] = auVar5._16_16_;
  *(undefined1 (*) [16])param_6[5] = auVar34._16_16_;
  return;
}



// FUNCTION 1455530d0 FUN_1455530d0 body=2103 status=ok
// SIG undefined FUN_1455530d0(void)

void FUN_1455530d0(undefined1 (*param_1) [32],undefined1 (*param_2) [24],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [24];
  undefined1 auVar23 [24];
  uint uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  float fVar45;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar63;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 local_320 [32];
  undefined1 auStack_2f8 [24];
  longlong local_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined1 local_1c0 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  
  lVar1 = *(longlong *)param_1[1];
  auVar22 = *(undefined1 (*) [24])*param_1;
  lVar18 = *(longlong *)(*param_1 + 0x18);
  auVar34 = *param_1;
  auVar23 = *param_2;
  lVar19 = *(longlong *)param_2[1];
  auVar37._16_16_ = *(undefined1 (*) [16])param_3[4];
  auVar37._0_16_ = *(undefined1 (*) [16])*param_3;
  lVar2 = *(longlong *)(param_2[1] + 8);
  auVar33 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar27 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar4 = vshufps_avx(auVar27,auVar33,0x44);
  auVar26 = ZEXT1632(*(undefined1 (*) [16])param_3[1]);
  auVar5 = vshufps_avx(auVar37,auVar26,0x44);
  auVar6 = vshufps_avx(auVar5,auVar4,0x88);
  auVar4 = vshufps_avx(auVar5,auVar4,0xdd);
  auVar5 = vshufps_avx(auVar37,auVar26,0xee);
  auVar33 = vshufps_avx(auVar27,auVar33,0xee);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar26 = vshufps_avx(auVar5,auVar33,0xdd);
  auVar55._0_8_ = auVar26._0_8_ ^ 0x8000000080000000;
  auVar55._8_4_ = auVar26._8_4_ ^ 0x80000000;
  auVar55._12_4_ = auVar26._12_4_ ^ 0x80000000;
  auVar55._16_4_ = auVar26._16_4_ ^ 0x80000000;
  auVar55._20_4_ = auVar26._20_4_ ^ 0x80000000;
  auVar55._24_4_ = auVar26._24_4_ ^ 0x80000000;
  auVar55._28_4_ = auVar26._28_4_ ^ 0x80000000;
  auVar5 = vshufps_avx(auVar5,auVar33,0x88);
  auVar59._0_8_ = auVar3._0_8_ ^ 0x8000000080000000;
  auVar59._8_4_ = auVar3._8_4_ ^ 0x80000000;
  auVar59._12_4_ = auVar3._12_4_ ^ 0x80000000;
  auVar59._16_4_ = *(uint *)((undefined1 (*) [16])param_3[4])[1] ^ 0x80000000;
  auVar59._20_4_ = 0x80000000;
  auVar59._24_4_ = 0x80000000;
  auVar59._28_4_ = 0x80000000;
  auVar39._16_16_ = *(undefined1 (*) [16])param_4[4];
  auVar39._0_16_ = *(undefined1 (*) [16])*param_4;
  auVar33 = vshufps_avx(auVar39,ZEXT1632(*(undefined1 (*) [16])param_4[1]),0x44);
  auVar26 = vshufps_avx(auVar39,ZEXT1632(*(undefined1 (*) [16])param_4[1]),0xee);
  auVar27 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar39 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar37 = vshufps_avx(auVar26,auVar39,0xdd);
  auVar26 = vshufps_avx(auVar26,auVar39,0x88);
  auVar39 = vshufps_avx(auVar33,auVar27,0xdd);
  auVar33 = vshufps_avx(auVar33,auVar27,0x88);
  auVar28._0_4_ = auVar37._0_4_ * auVar4._0_4_;
  auVar28._4_4_ = auVar37._4_4_ * auVar4._4_4_;
  auVar28._8_4_ = auVar37._8_4_ * auVar4._8_4_;
  auVar28._12_4_ = auVar37._12_4_ * auVar4._12_4_;
  auVar28._16_4_ = auVar37._16_4_ * auVar4._16_4_;
  auVar28._20_4_ = auVar37._20_4_ * auVar4._20_4_;
  auVar28._24_4_ = auVar37._24_4_ * auVar4._24_4_;
  auVar28._28_4_ = auVar37._28_4_ * auVar4._28_4_;
  auVar3 = vfmadd231ps_fma(auVar28,auVar39,auVar55);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar26,auVar5);
  fVar63 = auVar5._0_4_;
  auVar26._0_4_ = fVar63 * auVar37._0_4_;
  fVar66 = auVar5._4_4_;
  auVar26._4_4_ = fVar66 * auVar37._4_4_;
  fVar67 = auVar5._8_4_;
  auVar26._8_4_ = fVar67 * auVar37._8_4_;
  fVar68 = auVar5._12_4_;
  auVar26._12_4_ = fVar68 * auVar37._12_4_;
  fVar69 = auVar5._16_4_;
  auVar26._16_4_ = fVar69 * auVar37._16_4_;
  fVar70 = auVar5._20_4_;
  auVar26._20_4_ = fVar70 * auVar37._20_4_;
  fVar71 = auVar5._24_4_;
  auVar26._24_4_ = fVar71 * auVar37._24_4_;
  fVar72 = auVar5._28_4_;
  auVar26._28_4_ = fVar72 * auVar37._28_4_;
  auVar7 = vfmadd231ps_fma(auVar26,auVar39,auVar59);
  auVar40._16_16_ = *(undefined1 (*) [16])param_5[4];
  auVar40._0_16_ = *(undefined1 (*) [16])*param_5;
  auVar26 = ZEXT1632(*(undefined1 (*) [16])param_5[1]);
  auVar5 = vshufps_avx(auVar40,auVar26,0x44);
  auVar8 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar33,auVar59);
  auVar33 = vshufps_avx(auVar40,auVar26,0xee);
  auVar27 = ZEXT1632(*(undefined1 (*) [16])param_5[3]);
  auVar39 = ZEXT1632(*(undefined1 (*) [16])param_5[2]);
  auVar26 = vshufps_avx(auVar39,auVar27,0xee);
  auVar27 = vshufps_avx(auVar39,auVar27,0x44);
  auVar39 = vshufps_avx(auVar5,auVar27,0x88);
  auVar5 = vshufps_avx(auVar5,auVar27,0xdd);
  auVar27 = vshufps_avx(auVar33,auVar26,0xdd);
  auVar56._0_8_ = auVar27._0_8_ ^ 0x8000000080000000;
  auVar56._8_4_ = auVar27._8_4_ ^ 0x80000000;
  auVar56._12_4_ = auVar27._12_4_ ^ 0x80000000;
  auVar56._16_4_ = auVar27._16_4_ ^ 0x80000000;
  auVar56._20_4_ = auVar27._20_4_ ^ 0x80000000;
  auVar56._24_4_ = auVar27._24_4_ ^ 0x80000000;
  auVar56._28_4_ = auVar27._28_4_ ^ 0x80000000;
  auVar33 = vshufps_avx(auVar33,auVar26,0x88);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_5)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[2])[1]),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[3])[1]),0x30);
  fVar45 = -auVar3._0_4_;
  fVar48 = -auVar3._4_4_;
  fVar49 = -auVar3._8_4_;
  fVar50 = -auVar3._12_4_;
  fVar51 = -*(float *)((undefined1 (*) [16])param_5[4])[1];
  auVar41._16_16_ = *(undefined1 (*) [16])param_6[4];
  auVar41._0_16_ = *(undefined1 (*) [16])*param_6;
  auVar26 = vshufps_avx(auVar41,ZEXT1632(*(undefined1 (*) [16])param_6[1]),0x44);
  auVar27 = vshufps_avx(auVar41,ZEXT1632(*(undefined1 (*) [16])param_6[1]),0xee);
  auVar37 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_6[3]),0x44);
  auVar40 = vshufps_avx(auVar26,auVar37,0xdd);
  auVar26 = vshufps_avx(auVar26,auVar37,0x88);
  auVar36._0_4_ = auVar26._0_4_ * fVar45;
  auVar36._4_4_ = auVar26._4_4_ * fVar48;
  auVar36._8_4_ = auVar26._8_4_ * fVar49;
  auVar36._12_4_ = auVar26._12_4_ * fVar50;
  auVar36._16_4_ = auVar26._16_4_ * fVar51;
  auVar36._20_4_ = auVar26._20_4_ * -0.0;
  auVar36._24_4_ = auVar26._24_4_ * -0.0;
  auVar36._28_4_ = auVar26._28_4_ * -0.0;
  auVar26 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_6[3]),0xee);
  auVar37 = vshufps_avx(auVar27,auVar26,0xdd);
  auVar26 = vshufps_avx(auVar27,auVar26,0x88);
  auVar3 = vfmadd231ps_fma(auVar36,auVar26,auVar33);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar40,auVar56);
  auVar27._0_4_ = auVar40._0_4_ * fVar45;
  auVar27._4_4_ = auVar40._4_4_ * fVar48;
  auVar27._8_4_ = auVar40._8_4_ * fVar49;
  auVar27._12_4_ = auVar40._12_4_ * fVar50;
  auVar27._16_4_ = auVar40._16_4_ * fVar51;
  auVar27._20_4_ = auVar40._20_4_ * -0.0;
  auVar27._24_4_ = auVar40._24_4_ * -0.0;
  auVar27._28_4_ = auVar40._28_4_ * -0.0;
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar5,auVar37);
  auVar9 = vfmadd231ps_fma(auVar27,auVar37,auVar33);
  if (param_7 == 0) {
    auVar62._8_24_ = auStack_2f8;
    auVar62._0_8_ = lVar1;
    auVar61._8_24_ = auStack_2f8;
    auVar61._0_8_ = lVar1;
    auVar65._8_24_ = auStack_2f8;
    auVar65._0_8_ = lVar1;
    auVar54._8_24_ = auStack_2f8;
    auVar54._0_8_ = lVar1;
    auVar27 = auVar34;
    auVar37 = auVar34;
    auVar26 = auVar34;
  }
  else {
    uVar25 = 0;
    local_320._16_8_ = auVar22._16_8_;
    local_320._8_8_ = auVar22._8_8_;
    local_320._0_8_ = auVar22._0_8_;
    lStack_2d0 = auVar23._16_8_;
    lStack_2d8 = auVar23._8_8_;
    local_2e0 = auVar23._0_8_;
    do {
      local_120 = ZEXT1632(auVar9);
      local_140 = ZEXT1632(auVar3);
      local_1c0 = ZEXT1632(auVar7);
      auVar34._16_16_ = *(undefined1 (*) [16])(lVar1 + uVar25 * 4);
      auVar34._0_16_ = *(undefined1 (*) [16])(local_320._0_8_ + uVar25 * 4);
      auVar27 = ZEXT1632(*(undefined1 (*) [16])(local_320._8_8_ + uVar25 * 4));
      auVar26 = vshufps_avx(auVar34,auVar27,0x44);
      auVar27 = vshufps_avx(auVar34,auVar27,0xee);
      auVar34 = ZEXT1632(*(undefined1 (*) [16])(lVar18 + uVar25 * 4));
      auVar36 = ZEXT1632(*(undefined1 (*) [16])(local_320._16_8_ + uVar25 * 4));
      auVar37 = vshufps_avx(auVar36,auVar34,0xee);
      auVar40 = vshufps_avx(auVar27,auVar37,0x88);
      auVar27 = vshufps_avx(auVar27,auVar37,0xdd);
      auVar37 = vshufps_avx(auVar36,auVar34,0x44);
      auVar34 = vshufps_avx(auVar26,auVar37,0x88);
      auVar26 = vshufps_avx(auVar26,auVar37,0xdd);
      auVar3 = vfmadd231ps_fma(local_1c0,auVar4,auVar34);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar6,auVar26);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar6,auVar34);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar55,ZEXT1632(auVar9));
      auVar28 = ZEXT1632(auVar3);
      auVar57._0_4_ = auVar34._0_4_ * fVar63;
      auVar57._4_4_ = auVar34._4_4_ * fVar66;
      auVar57._8_4_ = auVar34._8_4_ * fVar67;
      auVar57._12_4_ = auVar34._12_4_ * fVar68;
      auVar57._16_4_ = auVar34._16_4_ * fVar69;
      auVar57._20_4_ = auVar34._20_4_ * fVar70;
      auVar57._24_4_ = auVar34._24_4_ * fVar71;
      auVar57._28_4_ = auVar34._28_4_ * fVar72;
      auVar8 = vfmadd231ps_fma(auVar57,auVar4,auVar26);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar6,auVar40);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar59,ZEXT1632(auVar9));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar55,auVar28);
      auVar58._0_4_ = auVar26._0_4_ * fVar63;
      auVar58._4_4_ = auVar26._4_4_ * fVar66;
      auVar58._8_4_ = auVar26._8_4_ * fVar67;
      auVar58._12_4_ = auVar26._12_4_ * fVar68;
      auVar58._16_4_ = auVar26._16_4_ * fVar69;
      auVar58._20_4_ = auVar26._20_4_ * fVar70;
      auVar58._24_4_ = auVar26._24_4_ * fVar71;
      auVar58._28_4_ = auVar26._28_4_ * fVar72;
      auVar8 = vfmadd231ps_fma(auVar58,auVar4,auVar40);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar6,auVar27);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar59,ZEXT1632(auVar3));
      auVar43._16_16_ = *(undefined1 (*) [16])(lVar1 + 0x10 + uVar25 * 4);
      auVar43._0_16_ = *(undefined1 (*) [16])(local_320._0_8_ + 0x10 + uVar25 * 4);
      auVar46._0_4_ = auVar40._0_4_ * fVar63;
      auVar46._4_4_ = auVar40._4_4_ * fVar66;
      auVar46._8_4_ = auVar40._8_4_ * fVar67;
      auVar46._12_4_ = auVar40._12_4_ * fVar68;
      auVar46._16_4_ = auVar40._16_4_ * fVar69;
      auVar46._20_4_ = auVar40._20_4_ * fVar70;
      auVar46._24_4_ = auVar40._24_4_ * fVar71;
      auVar46._28_4_ = auVar40._28_4_ * fVar72;
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar55,ZEXT1632(auVar10));
      auVar37 = ZEXT1632(*(undefined1 (*) [16])(local_320._8_8_ + 0x10 + uVar25 * 4));
      auVar26 = vshufps_avx(auVar43,auVar37,0x44);
      auVar37 = vshufps_avx(auVar43,auVar37,0xee);
      auVar34 = ZEXT1632(*(undefined1 (*) [16])(lVar18 + 0x10 + uVar25 * 4));
      auVar36 = ZEXT1632(*(undefined1 (*) [16])(local_320._16_8_ + 0x10 + uVar25 * 4));
      auVar40 = vshufps_avx(auVar36,auVar34,0xee);
      auVar34 = vshufps_avx(auVar36,auVar34,0x44);
      auVar36 = vshufps_avx(auVar26,auVar34,0x88);
      auVar41 = vshufps_avx(auVar26,auVar34,0xdd);
      auVar8 = vfmadd231ps_fma(auVar46,auVar4,auVar27);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar36,auVar6);
      auVar52._0_4_ = auVar27._0_4_ * fVar63;
      auVar52._4_4_ = auVar27._4_4_ * fVar66;
      auVar52._8_4_ = auVar27._8_4_ * fVar67;
      auVar52._12_4_ = auVar27._12_4_ * fVar68;
      auVar52._16_4_ = auVar27._16_4_ * fVar69;
      auVar52._20_4_ = auVar27._20_4_ * fVar70;
      auVar52._24_4_ = auVar27._24_4_ * fVar71;
      auVar52._28_4_ = auVar27._28_4_ * fVar72;
      auVar34 = vshufps_avx(auVar37,auVar40,0x88);
      auVar60._0_4_ = auVar36._0_4_ * fVar63;
      auVar60._4_4_ = auVar36._4_4_ * fVar66;
      auVar60._8_4_ = auVar36._8_4_ * fVar67;
      auVar60._12_4_ = auVar36._12_4_ * fVar68;
      auVar60._16_4_ = auVar36._16_4_ * fVar69;
      auVar60._20_4_ = auVar36._20_4_ * fVar70;
      auVar60._24_4_ = auVar36._24_4_ * fVar71;
      auVar60._28_4_ = auVar36._28_4_ * fVar72;
      auVar26 = vshufps_avx(auVar37,auVar40,0xdd);
      auVar64._0_4_ = auVar41._0_4_ * fVar63;
      auVar64._4_4_ = auVar41._4_4_ * fVar66;
      auVar64._8_4_ = auVar41._8_4_ * fVar67;
      auVar64._12_4_ = auVar41._12_4_ * fVar68;
      auVar64._16_4_ = auVar41._16_4_ * fVar69;
      auVar64._20_4_ = auVar41._20_4_ * fVar70;
      auVar64._24_4_ = auVar41._24_4_ * fVar71;
      auVar64._28_4_ = auVar41._28_4_ * fVar72;
      auVar7 = vfmadd231ps_fma(auVar64,auVar4,auVar34);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar26,auVar6);
      auVar12 = vfmadd231ps_fma(auVar52,auVar4,auVar36);
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar41,auVar6);
      auVar13 = vfmadd231ps_fma(auVar60,auVar4,auVar41);
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar34,auVar6);
      auVar29._0_4_ = auVar34._0_4_ * fVar63;
      auVar29._4_4_ = auVar34._4_4_ * fVar66;
      auVar29._8_4_ = auVar34._8_4_ * fVar67;
      auVar29._12_4_ = auVar34._12_4_ * fVar68;
      auVar29._16_4_ = auVar34._16_4_ * fVar69;
      auVar29._20_4_ = auVar34._20_4_ * fVar70;
      auVar29._24_4_ = auVar34._24_4_ * fVar71;
      auVar29._28_4_ = auVar34._28_4_ * fVar72;
      auVar14 = vfmadd231ps_fma(auVar29,auVar4,auVar26);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar59,ZEXT1632(auVar10));
      auVar15 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar55,ZEXT1632(auVar11));
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar59,ZEXT1632(auVar11));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar55,ZEXT1632(auVar15));
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar59,ZEXT1632(auVar15));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar55,ZEXT1632(auVar12));
      auVar27 = ZEXT1632(auVar13);
      auVar61 = ZEXT1632(auVar13);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar14),auVar59,auVar61);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar59,ZEXT1632(auVar12));
      auVar14 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar55,auVar61);
      auVar37 = ZEXT1632(auVar14);
      auVar65 = ZEXT1632(auVar14);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar55,auVar65);
      auVar30._0_4_ = auVar26._0_4_ * fVar63;
      auVar30._4_4_ = auVar26._4_4_ * fVar66;
      auVar30._8_4_ = auVar26._8_4_ * fVar67;
      auVar30._12_4_ = auVar26._12_4_ * fVar68;
      auVar30._16_4_ = auVar26._16_4_ * fVar69;
      auVar30._20_4_ = auVar26._20_4_ * fVar70;
      auVar30._24_4_ = auVar26._24_4_ * fVar71;
      auVar30._28_4_ = auVar26._28_4_ * fVar72;
      auVar7 = vfmadd231ps_fma(auVar30,auVar59,auVar65);
      local_1a0 = auVar33._0_4_;
      fStack_19c = auVar33._4_4_;
      fStack_198 = auVar33._8_4_;
      fStack_194 = auVar33._12_4_;
      fStack_190 = auVar33._16_4_;
      fStack_18c = auVar33._20_4_;
      fStack_188 = auVar33._24_4_;
      fStack_184 = auVar33._28_4_;
      auVar38._0_4_ = auVar9._0_4_ * local_1a0;
      auVar38._4_4_ = auVar9._4_4_ * fStack_19c;
      auVar38._8_4_ = auVar9._8_4_ * fStack_198;
      auVar38._12_4_ = auVar9._12_4_ * fStack_194;
      auVar38._16_4_ = fStack_190 * 0.0;
      auVar38._20_4_ = fStack_18c * 0.0;
      auVar38._24_4_ = fStack_188 * 0.0;
      auVar38._28_4_ = fStack_184 * 0.0;
      auVar16 = vfmadd231ps_fma(local_140,auVar39,ZEXT1632(auVar9));
      auVar17 = vfmadd231ps_fma(auVar38,auVar5,auVar28);
      auVar9 = vfmadd231ps_fma(local_120,auVar5,ZEXT1632(auVar9));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar39,auVar28);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),ZEXT1632(auVar16),auVar56);
      auVar17 = vfmadd231ps_fma(ZEXT1632(auVar17),auVar39,ZEXT1632(auVar10));
      auVar20._4_4_ = fVar48;
      auVar20._0_4_ = fVar45;
      auVar20._8_4_ = fVar49;
      auVar20._12_4_ = fVar50;
      auVar20._16_4_ = fVar51;
      auVar20._20_4_ = 0x80000000;
      auVar20._24_4_ = 0x80000000;
      auVar20._28_4_ = 0x80000000;
      auVar17 = vfmadd231ps_fma(ZEXT1632(auVar17),ZEXT1632(auVar16),auVar20);
      auVar17 = vfmadd231ps_fma(ZEXT1632(auVar17),auVar56,ZEXT1632(auVar9));
      auVar35._0_4_ = local_1a0 * auVar3._0_4_;
      auVar35._4_4_ = fStack_19c * auVar3._4_4_;
      auVar35._8_4_ = fStack_198 * auVar3._8_4_;
      auVar35._12_4_ = fStack_194 * auVar3._12_4_;
      auVar35._16_4_ = fStack_190 * 0.0;
      auVar35._20_4_ = fStack_18c * 0.0;
      auVar35._24_4_ = fStack_188 * 0.0;
      auVar35._28_4_ = fStack_184 * 0.0;
      auVar21._4_4_ = fVar48;
      auVar21._0_4_ = fVar45;
      auVar21._8_4_ = fVar49;
      auVar21._12_4_ = fVar50;
      auVar21._16_4_ = fVar51;
      auVar21._20_4_ = 0x80000000;
      auVar21._24_4_ = 0x80000000;
      auVar21._28_4_ = 0x80000000;
      auVar3 = vfmadd231ps_fma(auVar35,auVar5,ZEXT1632(auVar10));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar39,ZEXT1632(auVar11));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar21,ZEXT1632(auVar9));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar56,ZEXT1632(auVar17));
      auVar44._0_4_ = local_1a0 * auVar10._0_4_;
      auVar44._4_4_ = fStack_19c * auVar10._4_4_;
      auVar44._8_4_ = fStack_198 * auVar10._8_4_;
      auVar44._12_4_ = fStack_194 * auVar10._12_4_;
      auVar44._16_4_ = fStack_190 * 0.0;
      auVar44._20_4_ = fStack_18c * 0.0;
      auVar44._24_4_ = fStack_188 * 0.0;
      auVar44._28_4_ = fStack_184 * 0.0;
      auVar10 = vfmadd231ps_fma(auVar44,auVar5,ZEXT1632(auVar11));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),ZEXT1632(auVar15),auVar39);
      auVar42._0_4_ = local_1a0 * auVar11._0_4_;
      auVar42._4_4_ = fStack_19c * auVar11._4_4_;
      auVar42._8_4_ = fStack_198 * auVar11._8_4_;
      auVar42._12_4_ = fStack_194 * auVar11._12_4_;
      auVar42._16_4_ = fStack_190 * 0.0;
      auVar42._20_4_ = fStack_18c * 0.0;
      auVar42._24_4_ = fStack_188 * 0.0;
      auVar42._28_4_ = fStack_184 * 0.0;
      auVar11 = vfmadd231ps_fma(auVar42,auVar5,ZEXT1632(auVar15));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar39,ZEXT1632(auVar12));
      auVar47._0_4_ = local_1a0 * auVar15._0_4_;
      auVar47._4_4_ = fStack_19c * auVar15._4_4_;
      auVar47._8_4_ = fStack_198 * auVar15._8_4_;
      auVar47._12_4_ = fStack_194 * auVar15._12_4_;
      auVar47._16_4_ = fStack_190 * 0.0;
      auVar47._20_4_ = fStack_18c * 0.0;
      auVar47._24_4_ = fStack_188 * 0.0;
      auVar47._28_4_ = fStack_184 * 0.0;
      auVar15 = vfmadd231ps_fma(auVar47,auVar5,ZEXT1632(auVar12));
      auVar53._0_4_ = local_1a0 * auVar12._0_4_;
      auVar53._4_4_ = fStack_19c * auVar12._4_4_;
      auVar53._8_4_ = fStack_198 * auVar12._8_4_;
      auVar53._12_4_ = fStack_194 * auVar12._12_4_;
      auVar53._16_4_ = fStack_190 * 0.0;
      auVar53._20_4_ = fStack_18c * 0.0;
      auVar53._24_4_ = fStack_188 * 0.0;
      auVar53._28_4_ = fStack_184 * 0.0;
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar21,ZEXT1632(auVar17));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar56,ZEXT1632(auVar3));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar21,ZEXT1632(auVar3));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar56,ZEXT1632(auVar10));
      auVar40 = vshufps_avx(ZEXT1632(auVar16),ZEXT1632(auVar9),0x44);
      auVar36 = vshufps_avx(ZEXT1632(auVar16),ZEXT1632(auVar9),0xee);
      auVar41 = vshufps_avx(ZEXT1632(auVar17),ZEXT1632(auVar3),0x44);
      auVar28 = vshufps_avx(ZEXT1632(auVar17),ZEXT1632(auVar3),0xee);
      auVar62 = vshufps_avx(auVar40,auVar41,0x88);
      auVar40 = vshufps_avx(auVar40,auVar41,0xdd);
      *(undefined1 (*) [16])(local_2e0 + uVar25 * 4) = auVar62._0_16_;
      *(undefined1 (*) [16])(lStack_2d8 + uVar25 * 4) = auVar40._0_16_;
      auVar40 = vshufps_avx(auVar36,auVar28,0x88);
      *(undefined1 (*) [16])(lStack_2d0 + uVar25 * 4) = auVar40._0_16_;
      auVar40 = vshufps_avx(auVar36,auVar28,0xdd);
      *(undefined1 (*) [16])(lVar19 + uVar25 * 4) = auVar40._0_16_;
      *(undefined1 (*) [16])(lVar2 + uVar25 * 4) = auVar62._16_16_;
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar15),auVar39,auVar61);
      auVar9 = vfmadd231ps_fma(auVar53,auVar5,auVar61);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar39,auVar65);
      auVar62 = ZEXT1632(auVar13);
      auVar31._0_4_ = local_1a0 * auVar13._0_4_;
      auVar31._4_4_ = fStack_19c * auVar13._4_4_;
      auVar31._8_4_ = fStack_198 * auVar13._8_4_;
      auVar31._12_4_ = fStack_194 * auVar13._12_4_;
      auVar31._16_4_ = fStack_190 * 0.0;
      auVar31._20_4_ = fStack_18c * 0.0;
      auVar31._24_4_ = fStack_188 * 0.0;
      auVar31._28_4_ = fStack_184 * 0.0;
      auVar12 = vfmadd231ps_fma(auVar31,auVar5,auVar65);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar21,ZEXT1632(auVar10));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar56,ZEXT1632(auVar11));
      auVar65 = ZEXT1632(auVar13);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar12),auVar21,ZEXT1632(auVar13));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar21,ZEXT1632(auVar11));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar56,ZEXT1632(auVar13));
      auVar54 = ZEXT1632(auVar12);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar56,ZEXT1632(auVar12));
      auVar40 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar11),0x44);
      auVar61 = ZEXT1632(auVar14);
      auVar32._0_4_ = local_1a0 * auVar14._0_4_;
      auVar32._4_4_ = fStack_19c * auVar14._4_4_;
      auVar32._8_4_ = fStack_198 * auVar14._8_4_;
      auVar32._12_4_ = fStack_194 * auVar14._12_4_;
      auVar32._16_4_ = fStack_190 * 0.0;
      auVar32._20_4_ = fStack_18c * 0.0;
      auVar32._24_4_ = fStack_188 * 0.0;
      auVar32._28_4_ = fStack_184 * 0.0;
      auVar9 = vfmadd231ps_fma(auVar32,auVar21,ZEXT1632(auVar12));
      auVar36 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar12),0x44);
      auVar41 = vshufps_avx(auVar40,auVar36,0x88);
      *(undefined1 (*) [16])(local_2e0 + 0x10 + uVar25 * 4) = auVar41._0_16_;
      auVar40 = vshufps_avx(auVar40,auVar36,0xdd);
      *(undefined1 (*) [16])(lStack_2d8 + 0x10 + uVar25 * 4) = auVar40._0_16_;
      auVar40 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar11),0xee);
      auVar36 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar12),0xee);
      auVar28 = vshufps_avx(auVar40,auVar36,0x88);
      *(undefined1 (*) [16])(lStack_2d0 + 0x10 + uVar25 * 4) = auVar28._0_16_;
      auVar40 = vshufps_avx(auVar40,auVar36,0xdd);
      *(undefined1 (*) [16])(lVar19 + 0x10 + uVar25 * 4) = auVar40._0_16_;
      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar25 * 4) = auVar41._16_16_;
      uVar24 = (int)uVar25 + 8;
      uVar25 = (ulonglong)uVar24;
    } while (uVar24 < param_7);
  }
  local_320 = auVar26;
  auVar4 = vshufps_avx(auVar34,local_320,0x44);
  auVar5 = vshufps_avx(auVar34,local_320,0xee);
  auVar6 = vshufps_avx(auVar27,auVar37,0x44);
  auVar33 = vshufps_avx(auVar6,auVar4,0x88);
  *(undefined1 (*) [16])*param_4 = auVar33._0_16_;
  auVar4 = vshufps_avx(auVar6,auVar4,0xdd);
  auVar6 = vshufps_avx(auVar27,auVar37,0xee);
  auVar26 = vshufps_avx(auVar6,auVar5,0x88);
  *(undefined1 (*) [16])param_4[1] = auVar4._0_16_;
  auVar4 = vshufps_avx(auVar6,auVar5,0xdd);
  auVar5 = vshufps_avx(auVar65,auVar54,0xee);
  auVar6 = vshufps_avx(auVar62,auVar61,0xee);
  *(undefined1 (*) [16])param_4[2] = auVar26._0_16_;
  auVar26 = vshufps_avx(auVar65,auVar54,0x44);
  *(undefined1 (*) [16])param_4[3] = auVar4._0_16_;
  *(undefined1 (*) [16])param_4[4] = auVar33._16_16_;
  auVar4 = vshufps_avx(auVar62,auVar61,0x44);
  auVar33 = vshufps_avx(auVar26,auVar4,0x88);
  auVar4 = vshufps_avx(auVar26,auVar4,0xdd);
  *(undefined1 (*) [16])*param_6 = auVar33._0_16_;
  auVar26 = vshufps_avx(auVar5,auVar6,0x88);
  *(undefined1 (*) [16])param_6[1] = auVar4._0_16_;
  auVar4 = vshufps_avx(auVar5,auVar6,0xdd);
  *(undefined1 (*) [16])param_6[2] = auVar26._0_16_;
  *(undefined1 (*) [16])param_6[3] = auVar4._0_16_;
  *(undefined1 (*) [16])param_6[4] = auVar33._16_16_;
  return;
}



// FUNCTION 145553910 FUN_145553910 body=1937 status=ok
// SIG undefined FUN_145553910(void)

void FUN_145553910(undefined1 (*param_1) [32],undefined1 (*param_2) [24],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [24];
  undefined1 auVar18 [24];
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  float fVar50;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  longlong local_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined1 local_1c0 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  
  auVar17 = *param_2;
  lVar14 = *(longlong *)param_2[1];
  auVar18 = *(undefined1 (*) [24])*param_1;
  lVar15 = *(longlong *)(*param_1 + 0x18);
  auVar28 = *param_1;
  auVar21 = ZEXT1632(*(undefined1 (*) [16])param_3[1]);
  auVar29 = ZEXT1632(*(undefined1 (*) [16])*param_3);
  auVar2 = vshufps_avx(auVar29,auVar21,0x44);
  auVar21 = vshufps_avx(auVar29,auVar21,0xee);
  auVar24 = ZEXT1632(*(undefined1 (*) [16])param_3[3]);
  auVar33 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar29 = vshufps_avx(auVar33,auVar24,0xee);
  auVar22 = vshufps_avx(auVar21,auVar29,0x88);
  auVar24 = vshufps_avx(auVar33,auVar24,0x44);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[3])[1]),0x30);
  auVar33 = vshufps_avx(auVar2,auVar24,0xdd);
  auVar2 = vshufps_avx(auVar2,auVar24,0x88);
  auVar21 = vshufps_avx(auVar21,auVar29,0xdd);
  auVar46._0_8_ = auVar21._0_8_ ^ 0x8000000080000000;
  auVar46._8_4_ = auVar21._8_4_ ^ 0x80000000;
  auVar46._12_4_ = auVar21._12_4_ ^ 0x80000000;
  auVar46._16_4_ = auVar21._16_4_ ^ 0x80000000;
  auVar46._20_4_ = auVar21._20_4_ ^ 0x80000000;
  auVar46._24_4_ = auVar21._24_4_ ^ 0x80000000;
  auVar46._28_4_ = auVar21._28_4_ ^ 0x80000000;
  auVar48._0_8_ = auVar1._0_8_ ^ 0x8000000080000000;
  auVar48._8_4_ = auVar1._8_4_ ^ 0x80000000;
  auVar48._12_4_ = auVar1._12_4_ ^ 0x80000000;
  auVar48._16_4_ = 0x80000000;
  auVar48._20_4_ = 0x80000000;
  auVar48._24_4_ = 0x80000000;
  auVar48._28_4_ = 0x80000000;
  auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0x44);
  auVar29 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0xee);
  auVar24 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0x44);
  auVar34 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_4[3]),0xee);
  auVar31 = vshufps_avx(auVar29,auVar34,0xdd);
  auVar29 = vshufps_avx(auVar29,auVar34,0x88);
  auVar34 = vshufps_avx(auVar21,auVar24,0xdd);
  auVar36._0_4_ = auVar31._0_4_ * auVar33._0_4_;
  auVar36._4_4_ = auVar31._4_4_ * auVar33._4_4_;
  auVar36._8_4_ = auVar31._8_4_ * auVar33._8_4_;
  auVar36._12_4_ = auVar31._12_4_ * auVar33._12_4_;
  auVar36._16_4_ = auVar31._16_4_ * auVar33._16_4_;
  auVar36._20_4_ = auVar31._20_4_ * auVar33._20_4_;
  auVar36._24_4_ = auVar31._24_4_ * auVar33._24_4_;
  auVar36._28_4_ = auVar31._28_4_ * auVar33._28_4_;
  auVar1 = vfmadd231ps_fma(auVar36,auVar34,auVar46);
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar29,auVar22);
  auVar21 = vshufps_avx(auVar21,auVar24,0x88);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar21,auVar48);
  fVar50 = auVar22._0_4_;
  auVar21._0_4_ = fVar50 * auVar31._0_4_;
  fVar53 = auVar22._4_4_;
  auVar21._4_4_ = fVar53 * auVar31._4_4_;
  fVar54 = auVar22._8_4_;
  auVar21._8_4_ = fVar54 * auVar31._8_4_;
  fVar55 = auVar22._12_4_;
  auVar21._12_4_ = fVar55 * auVar31._12_4_;
  fVar56 = auVar22._16_4_;
  auVar21._16_4_ = fVar56 * auVar31._16_4_;
  fVar57 = auVar22._20_4_;
  auVar21._20_4_ = fVar57 * auVar31._20_4_;
  fVar58 = auVar22._24_4_;
  auVar21._24_4_ = fVar58 * auVar31._24_4_;
  fVar59 = auVar22._28_4_;
  auVar21._28_4_ = fVar59 * auVar31._28_4_;
  auVar4 = vfmadd231ps_fma(auVar21,auVar34,auVar48);
  auVar29 = ZEXT1632(*(undefined1 (*) [16])param_5[1]);
  auVar22 = ZEXT1632(*(undefined1 (*) [16])*param_5);
  auVar21 = vshufps_avx(auVar22,auVar29,0x44);
  auVar29 = vshufps_avx(auVar22,auVar29,0xee);
  auVar24 = ZEXT1632(*(undefined1 (*) [16])param_5[3]);
  auVar34 = ZEXT1632(*(undefined1 (*) [16])param_5[2]);
  auVar22 = vshufps_avx(auVar34,auVar24,0xee);
  auVar24 = vshufps_avx(auVar34,auVar24,0x44);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_5)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[1])[1]),0x10);
  auVar34 = vshufps_avx(auVar21,auVar24,0x88);
  auVar21 = vshufps_avx(auVar21,auVar24,0xdd);
  auVar24 = vshufps_avx(auVar29,auVar22,0xdd);
  auVar47._0_8_ = auVar24._0_8_ ^ 0x8000000080000000;
  auVar47._8_4_ = auVar24._8_4_ ^ 0x80000000;
  auVar47._12_4_ = auVar24._12_4_ ^ 0x80000000;
  auVar47._16_4_ = auVar24._16_4_ ^ 0x80000000;
  auVar47._20_4_ = auVar24._20_4_ ^ 0x80000000;
  auVar47._24_4_ = auVar24._24_4_ ^ 0x80000000;
  auVar47._28_4_ = auVar24._28_4_ ^ 0x80000000;
  auVar29 = vshufps_avx(auVar29,auVar22,0x88);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[2])[1]),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[3])[1]),0x30);
  uVar20 = 0;
  fVar38 = -auVar1._0_4_;
  fVar41 = -auVar1._4_4_;
  fVar42 = -auVar1._8_4_;
  fVar43 = -auVar1._12_4_;
  auVar22 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_6),
                        ZEXT1632(*(undefined1 (*) [16])param_6[1]),0x44);
  auVar24 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_6),
                        ZEXT1632(*(undefined1 (*) [16])param_6[1]),0xee);
  auVar31 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_6[3]),0x44);
  auVar36 = vshufps_avx(auVar22,auVar31,0xdd);
  auVar22 = vshufps_avx(auVar22,auVar31,0x88);
  auVar30._0_4_ = auVar22._0_4_ * fVar38;
  auVar30._4_4_ = auVar22._4_4_ * fVar41;
  auVar30._8_4_ = auVar22._8_4_ * fVar42;
  auVar30._12_4_ = auVar22._12_4_ * fVar43;
  auVar30._16_4_ = auVar22._16_4_ * -0.0;
  auVar30._20_4_ = auVar22._20_4_ * -0.0;
  auVar30._24_4_ = auVar22._24_4_ * -0.0;
  auVar30._28_4_ = auVar22._28_4_ * -0.0;
  auVar22 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),
                        ZEXT1632(*(undefined1 (*) [16])param_6[3]),0xee);
  auVar31 = vshufps_avx(auVar24,auVar22,0xdd);
  auVar22 = vshufps_avx(auVar24,auVar22,0x88);
  auVar1 = vfmadd231ps_fma(auVar30,auVar22,auVar29);
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar36,auVar47);
  auVar22._0_4_ = auVar36._0_4_ * fVar38;
  auVar22._4_4_ = auVar36._4_4_ * fVar41;
  auVar22._8_4_ = auVar36._8_4_ * fVar42;
  auVar22._12_4_ = auVar36._12_4_ * fVar43;
  auVar22._16_4_ = auVar36._16_4_ * -0.0;
  auVar22._20_4_ = auVar36._20_4_ * -0.0;
  auVar22._24_4_ = auVar36._24_4_ * -0.0;
  auVar22._28_4_ = auVar36._28_4_ * -0.0;
  auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar21,auVar31);
  auVar5 = vfmadd231ps_fma(auVar22,auVar31,auVar29);
  auVar24 = auVar28;
  auVar31 = auVar28;
  auVar36 = local_2e0;
  auVar30 = local_2e0;
  auVar52 = local_2e0;
  auVar22 = auVar28;
  if (param_7 != 0) {
    local_300._16_8_ = auVar18._16_8_;
    local_300._8_8_ = auVar18._8_8_;
    local_300._0_8_ = auVar18._0_8_;
    lStack_270 = auVar17._16_8_;
    lStack_278 = auVar17._8_8_;
    local_280 = auVar17._0_8_;
    do {
      local_100 = ZEXT1632(auVar5);
      local_120 = ZEXT1632(auVar1);
      local_1c0 = ZEXT1632(auVar4);
      auVar24 = ZEXT1632(*(undefined1 (*) [16])(local_300._8_8_ + uVar20 * 4));
      auVar31 = ZEXT1632(*(undefined1 (*) [16])(local_300._0_8_ + uVar20 * 4));
      auVar22 = vshufps_avx(auVar31,auVar24,0x44);
      auVar24 = vshufps_avx(auVar31,auVar24,0xee);
      auVar28 = ZEXT1632(*(undefined1 (*) [16])(lVar15 + uVar20 * 4));
      auVar30 = ZEXT1632(*(undefined1 (*) [16])(local_300._16_8_ + uVar20 * 4));
      auVar31 = vshufps_avx(auVar30,auVar28,0xee);
      auVar36 = vshufps_avx(auVar24,auVar31,0x88);
      auVar24 = vshufps_avx(auVar24,auVar31,0xdd);
      auVar31 = vshufps_avx(auVar30,auVar28,0x44);
      auVar28 = vshufps_avx(auVar22,auVar31,0x88);
      auVar22 = vshufps_avx(auVar22,auVar31,0xdd);
      auVar1 = vfmadd231ps_fma(local_1c0,auVar33,auVar28);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar2,auVar22);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar2,auVar28);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar46,ZEXT1632(auVar5));
      auVar31._0_4_ = auVar28._0_4_ * fVar50;
      auVar31._4_4_ = auVar28._4_4_ * fVar53;
      auVar31._8_4_ = auVar28._8_4_ * fVar54;
      auVar31._12_4_ = auVar28._12_4_ * fVar55;
      auVar31._16_4_ = auVar28._16_4_ * fVar56;
      auVar31._20_4_ = auVar28._20_4_ * fVar57;
      auVar31._24_4_ = auVar28._24_4_ * fVar58;
      auVar31._28_4_ = auVar28._28_4_ * fVar59;
      auVar4 = vfmadd231ps_fma(auVar31,auVar33,auVar22);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar2,auVar36);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar48,ZEXT1632(auVar5));
      auVar23 = ZEXT1632(auVar1);
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,auVar23);
      auVar28._0_4_ = auVar22._0_4_ * fVar50;
      auVar28._4_4_ = auVar22._4_4_ * fVar53;
      auVar28._8_4_ = auVar22._8_4_ * fVar54;
      auVar28._12_4_ = auVar22._12_4_ * fVar55;
      auVar28._16_4_ = auVar22._16_4_ * fVar56;
      auVar28._20_4_ = auVar22._20_4_ * fVar57;
      auVar28._24_4_ = auVar22._24_4_ * fVar58;
      auVar28._28_4_ = auVar22._28_4_ * fVar59;
      auVar4 = vfmadd231ps_fma(auVar28,auVar33,auVar36);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar2,auVar24);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar48,ZEXT1632(auVar1));
      auVar39._0_4_ = auVar36._0_4_ * fVar50;
      auVar39._4_4_ = auVar36._4_4_ * fVar53;
      auVar39._8_4_ = auVar36._8_4_ * fVar54;
      auVar39._12_4_ = auVar36._12_4_ * fVar55;
      auVar39._16_4_ = auVar36._16_4_ * fVar56;
      auVar39._20_4_ = auVar36._20_4_ * fVar57;
      auVar39._24_4_ = auVar36._24_4_ * fVar58;
      auVar39._28_4_ = auVar36._28_4_ * fVar59;
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,ZEXT1632(auVar6));
      auVar31 = ZEXT1632(*(undefined1 (*) [16])(local_300._8_8_ + 0x10 + uVar20 * 4));
      auVar36 = ZEXT1632(*(undefined1 (*) [16])(local_300._0_8_ + 0x10 + uVar20 * 4));
      auVar22 = vshufps_avx(auVar36,auVar31,0x44);
      auVar31 = vshufps_avx(auVar36,auVar31,0xee);
      auVar28 = ZEXT1632(*(undefined1 (*) [16])(lVar15 + 0x10 + uVar20 * 4));
      auVar30 = ZEXT1632(*(undefined1 (*) [16])(local_300._16_8_ + 0x10 + uVar20 * 4));
      auVar36 = vshufps_avx(auVar30,auVar28,0xee);
      auVar28 = vshufps_avx(auVar30,auVar28,0x44);
      auVar30 = vshufps_avx(auVar22,auVar28,0x88);
      auVar52 = vshufps_avx(auVar22,auVar28,0xdd);
      auVar4 = vfmadd231ps_fma(auVar39,auVar33,auVar24);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar30,auVar2);
      auVar44._0_4_ = auVar24._0_4_ * fVar50;
      auVar44._4_4_ = auVar24._4_4_ * fVar53;
      auVar44._8_4_ = auVar24._8_4_ * fVar54;
      auVar44._12_4_ = auVar24._12_4_ * fVar55;
      auVar44._16_4_ = auVar24._16_4_ * fVar56;
      auVar44._20_4_ = auVar24._20_4_ * fVar57;
      auVar44._24_4_ = auVar24._24_4_ * fVar58;
      auVar44._28_4_ = auVar24._28_4_ * fVar59;
      auVar28 = vshufps_avx(auVar31,auVar36,0x88);
      auVar22 = vshufps_avx(auVar31,auVar36,0xdd);
      auVar49._0_4_ = auVar30._0_4_ * fVar50;
      auVar49._4_4_ = auVar30._4_4_ * fVar53;
      auVar49._8_4_ = auVar30._8_4_ * fVar54;
      auVar49._12_4_ = auVar30._12_4_ * fVar55;
      auVar49._16_4_ = auVar30._16_4_ * fVar56;
      auVar49._20_4_ = auVar30._20_4_ * fVar57;
      auVar49._24_4_ = auVar30._24_4_ * fVar58;
      auVar49._28_4_ = auVar30._28_4_ * fVar59;
      auVar3 = vfmadd231ps_fma(auVar44,auVar33,auVar30);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar52,auVar2);
      auVar8 = vfmadd231ps_fma(auVar49,auVar33,auVar52);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar28,auVar2);
      auVar51._0_4_ = auVar52._0_4_ * fVar50;
      auVar51._4_4_ = auVar52._4_4_ * fVar53;
      auVar51._8_4_ = auVar52._8_4_ * fVar54;
      auVar51._12_4_ = auVar52._12_4_ * fVar55;
      auVar51._16_4_ = auVar52._16_4_ * fVar56;
      auVar51._20_4_ = auVar52._20_4_ * fVar57;
      auVar51._24_4_ = auVar52._24_4_ * fVar58;
      auVar51._28_4_ = auVar52._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(auVar51,auVar33,auVar28);
      auVar24._0_4_ = auVar28._0_4_ * fVar50;
      auVar24._4_4_ = auVar28._4_4_ * fVar53;
      auVar24._8_4_ = auVar28._8_4_ * fVar54;
      auVar24._12_4_ = auVar28._12_4_ * fVar55;
      auVar24._16_4_ = auVar28._16_4_ * fVar56;
      auVar24._20_4_ = auVar28._20_4_ * fVar57;
      auVar24._24_4_ = auVar28._24_4_ * fVar58;
      auVar24._28_4_ = auVar28._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar22,auVar2);
      auVar10 = vfmadd231ps_fma(auVar24,auVar33,auVar22);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar48,ZEXT1632(auVar6));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,ZEXT1632(auVar7));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar48,ZEXT1632(auVar7));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,ZEXT1632(auVar11));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar48,ZEXT1632(auVar11));
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,ZEXT1632(auVar12));
      auVar24 = ZEXT1632(auVar8);
      auVar26 = ZEXT1632(auVar8);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar48,auVar26);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar48,ZEXT1632(auVar12));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar46,auVar26);
      auVar31 = ZEXT1632(auVar9);
      auVar27 = ZEXT1632(auVar9);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar46,auVar27);
      auVar25._0_4_ = auVar22._0_4_ * fVar50;
      auVar25._4_4_ = auVar22._4_4_ * fVar53;
      auVar25._8_4_ = auVar22._8_4_ * fVar54;
      auVar25._12_4_ = auVar22._12_4_ * fVar55;
      auVar25._16_4_ = auVar22._16_4_ * fVar56;
      auVar25._20_4_ = auVar22._20_4_ * fVar57;
      auVar25._24_4_ = auVar22._24_4_ * fVar58;
      auVar25._28_4_ = auVar22._28_4_ * fVar59;
      auVar4 = vfmadd231ps_fma(auVar25,auVar48,auVar27);
      auVar10 = vfmadd231ps_fma(local_120,auVar34,ZEXT1632(auVar5));
      local_1a0 = auVar29._0_4_;
      fStack_19c = auVar29._4_4_;
      fStack_198 = auVar29._8_4_;
      fStack_194 = auVar29._12_4_;
      fStack_190 = auVar29._16_4_;
      fStack_18c = auVar29._20_4_;
      fStack_188 = auVar29._24_4_;
      fStack_184 = auVar29._28_4_;
      auVar32._0_4_ = auVar5._0_4_ * local_1a0;
      auVar32._4_4_ = auVar5._4_4_ * fStack_19c;
      auVar32._8_4_ = auVar5._8_4_ * fStack_198;
      auVar32._12_4_ = auVar5._12_4_ * fStack_194;
      auVar32._16_4_ = fStack_190 * 0.0;
      auVar32._20_4_ = fStack_18c * 0.0;
      auVar32._24_4_ = fStack_188 * 0.0;
      auVar32._28_4_ = fStack_184 * 0.0;
      auVar13 = vfmadd231ps_fma(auVar32,auVar21,auVar23);
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar34,ZEXT1632(auVar6));
      auVar52._4_4_ = fVar41;
      auVar52._0_4_ = fVar38;
      auVar52._8_4_ = fVar42;
      auVar52._12_4_ = fVar43;
      auVar52._16_4_ = 0x80000000;
      auVar52._20_4_ = 0x80000000;
      auVar52._24_4_ = 0x80000000;
      auVar52._28_4_ = 0x80000000;
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar13),ZEXT1632(auVar10),auVar52);
      auVar5 = vfmadd231ps_fma(local_100,auVar21,ZEXT1632(auVar5));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar34,auVar23);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar47,ZEXT1632(auVar10));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar47,ZEXT1632(auVar5));
      auVar23._0_4_ = auVar1._0_4_ * local_1a0;
      auVar23._4_4_ = auVar1._4_4_ * fStack_19c;
      auVar23._8_4_ = auVar1._8_4_ * fStack_198;
      auVar23._12_4_ = auVar1._12_4_ * fStack_194;
      auVar23._16_4_ = fStack_190 * 0.0;
      auVar23._20_4_ = fStack_18c * 0.0;
      auVar23._24_4_ = fStack_188 * 0.0;
      auVar23._28_4_ = fStack_184 * 0.0;
      auVar16._4_4_ = fVar41;
      auVar16._0_4_ = fVar38;
      auVar16._8_4_ = fVar42;
      auVar16._12_4_ = fVar43;
      auVar16._16_4_ = 0x80000000;
      auVar16._20_4_ = 0x80000000;
      auVar16._24_4_ = 0x80000000;
      auVar16._28_4_ = 0x80000000;
      auVar1 = vfmadd231ps_fma(auVar23,auVar21,ZEXT1632(auVar6));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar34,ZEXT1632(auVar7));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar16,ZEXT1632(auVar5));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar47,ZEXT1632(auVar13));
      auVar37._0_4_ = local_1a0 * auVar6._0_4_;
      auVar37._4_4_ = fStack_19c * auVar6._4_4_;
      auVar37._8_4_ = fStack_198 * auVar6._8_4_;
      auVar37._12_4_ = fStack_194 * auVar6._12_4_;
      auVar37._16_4_ = fStack_190 * 0.0;
      auVar37._20_4_ = fStack_18c * 0.0;
      auVar37._24_4_ = fStack_188 * 0.0;
      auVar37._28_4_ = fStack_184 * 0.0;
      auVar6 = vfmadd231ps_fma(auVar37,auVar21,ZEXT1632(auVar7));
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar6),ZEXT1632(auVar11),auVar34);
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar6),auVar16,ZEXT1632(auVar13));
      auVar6 = vfmadd231ps_fma(ZEXT1632(auVar6),auVar47,ZEXT1632(auVar1));
      auVar35._0_4_ = local_1a0 * auVar7._0_4_;
      auVar35._4_4_ = fStack_19c * auVar7._4_4_;
      auVar35._8_4_ = fStack_198 * auVar7._8_4_;
      auVar35._12_4_ = fStack_194 * auVar7._12_4_;
      auVar35._16_4_ = fStack_190 * 0.0;
      auVar35._20_4_ = fStack_18c * 0.0;
      auVar35._24_4_ = fStack_188 * 0.0;
      auVar35._28_4_ = fStack_184 * 0.0;
      auVar7 = vfmadd231ps_fma(auVar35,auVar21,ZEXT1632(auVar11));
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),ZEXT1632(auVar12),auVar34);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar16,ZEXT1632(auVar1));
      auVar36 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar5),0x44);
      auVar30 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar5),0xee);
      auVar52 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar1),0x44);
      auVar23 = vshufps_avx(ZEXT1632(auVar13),ZEXT1632(auVar1),0xee);
      auVar25 = vshufps_avx(auVar36,auVar52,0x88);
      *(undefined1 (*) [16])(local_280 + uVar20 * 4) = auVar25._0_16_;
      auVar36 = vshufps_avx(auVar36,auVar52,0xdd);
      *(undefined1 (*) [16])(lStack_278 + uVar20 * 4) = auVar36._0_16_;
      auVar40._0_4_ = local_1a0 * auVar11._0_4_;
      auVar40._4_4_ = fStack_19c * auVar11._4_4_;
      auVar40._8_4_ = fStack_198 * auVar11._8_4_;
      auVar40._12_4_ = fStack_194 * auVar11._12_4_;
      auVar40._16_4_ = fStack_190 * 0.0;
      auVar40._20_4_ = fStack_18c * 0.0;
      auVar40._24_4_ = fStack_188 * 0.0;
      auVar40._28_4_ = fStack_184 * 0.0;
      auVar1 = vfmadd231ps_fma(auVar40,auVar21,ZEXT1632(auVar12));
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar26,auVar34);
      auVar45._0_4_ = local_1a0 * auVar12._0_4_;
      auVar45._4_4_ = fStack_19c * auVar12._4_4_;
      auVar45._8_4_ = fStack_198 * auVar12._8_4_;
      auVar45._12_4_ = fStack_194 * auVar12._12_4_;
      auVar45._16_4_ = fStack_190 * 0.0;
      auVar45._20_4_ = fStack_18c * 0.0;
      auVar45._24_4_ = fStack_188 * 0.0;
      auVar45._28_4_ = fStack_184 * 0.0;
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar47,ZEXT1632(auVar6));
      auVar36 = vshufps_avx(auVar30,auVar23,0x88);
      *(undefined1 (*) [16])(lStack_270 + uVar20 * 4) = auVar36._0_16_;
      auVar36 = vshufps_avx(auVar30,auVar23,0xdd);
      *(undefined1 (*) [16])(lVar14 + uVar20 * 4) = auVar36._0_16_;
      auVar5 = vfmadd231ps_fma(auVar45,auVar21,auVar26);
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar27,auVar34);
      auVar26._0_4_ = auVar8._0_4_ * local_1a0;
      auVar26._4_4_ = auVar8._4_4_ * fStack_19c;
      auVar26._8_4_ = auVar8._8_4_ * fStack_198;
      auVar26._12_4_ = auVar8._12_4_ * fStack_194;
      auVar26._16_4_ = fStack_190 * 0.0;
      auVar26._20_4_ = fStack_18c * 0.0;
      auVar26._24_4_ = fStack_188 * 0.0;
      auVar26._28_4_ = fStack_184 * 0.0;
      auVar10 = vfmadd231ps_fma(auVar26,auVar21,auVar27);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar16,ZEXT1632(auVar6));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar47,ZEXT1632(auVar7));
      local_2e0 = ZEXT1632(auVar11);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar16,ZEXT1632(auVar11));
      auVar5 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar16,ZEXT1632(auVar7));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar5),auVar47,ZEXT1632(auVar11));
      auVar36 = ZEXT1632(auVar10);
      auVar1 = vfmadd231ps_fma(ZEXT1632(auVar1),auVar47,ZEXT1632(auVar10));
      auVar52 = ZEXT1632(auVar9);
      auVar27._0_4_ = local_1a0 * auVar9._0_4_;
      auVar27._4_4_ = fStack_19c * auVar9._4_4_;
      auVar27._8_4_ = fStack_198 * auVar9._8_4_;
      auVar27._12_4_ = fStack_194 * auVar9._12_4_;
      auVar27._16_4_ = fStack_190 * 0.0;
      auVar27._20_4_ = fStack_18c * 0.0;
      auVar27._24_4_ = fStack_188 * 0.0;
      auVar27._28_4_ = fStack_184 * 0.0;
      auVar5 = vfmadd231ps_fma(auVar27,auVar16,ZEXT1632(auVar10));
      auVar30 = vshufps_avx(ZEXT1632(auVar6),ZEXT1632(auVar7),0x44);
      auVar23 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar10),0x44);
      auVar25 = vshufps_avx(auVar30,auVar23,0x88);
      *(undefined1 (*) [16])(local_280 + 0x10 + uVar20 * 4) = auVar25._0_16_;
      auVar30 = vshufps_avx(auVar30,auVar23,0xdd);
      *(undefined1 (*) [16])(lStack_278 + 0x10 + uVar20 * 4) = auVar30._0_16_;
      auVar30 = vshufps_avx(ZEXT1632(auVar6),ZEXT1632(auVar7),0xee);
      auVar23 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar10),0xee);
      auVar25 = vshufps_avx(auVar30,auVar23,0x88);
      *(undefined1 (*) [16])(lStack_270 + 0x10 + uVar20 * 4) = auVar25._0_16_;
      auVar30 = vshufps_avx(auVar30,auVar23,0xdd);
      *(undefined1 (*) [16])(lVar14 + 0x10 + uVar20 * 4) = auVar30._0_16_;
      uVar19 = (int)uVar20 + 8;
      uVar20 = (ulonglong)uVar19;
      auVar30 = ZEXT1632(auVar8);
    } while (uVar19 < param_7);
  }
  local_300 = auVar22;
  auVar2 = vshufps_avx(auVar28,local_300,0x44);
  auVar21 = vshufps_avx(auVar28,local_300,0xee);
  auVar29 = vshufps_avx(auVar24,auVar31,0x44);
  auVar22 = vshufps_avx(auVar29,auVar2,0x88);
  *(undefined1 (*) [16])*param_4 = auVar22._0_16_;
  auVar2 = vshufps_avx(auVar29,auVar2,0xdd);
  auVar29 = vshufps_avx(auVar24,auVar31,0xee);
  auVar22 = vshufps_avx(auVar29,auVar21,0x88);
  *(undefined1 (*) [16])param_4[1] = auVar2._0_16_;
  auVar2 = vshufps_avx(auVar29,auVar21,0xdd);
  auVar21 = vshufps_avx(local_2e0,auVar36,0x44);
  auVar29 = vshufps_avx(local_2e0,auVar36,0xee);
  *(undefined1 (*) [16])param_4[2] = auVar22._0_16_;
  auVar22 = vshufps_avx(auVar30,auVar52,0xee);
  *(undefined1 (*) [16])param_4[3] = auVar2._0_16_;
  auVar2 = vshufps_avx(auVar30,auVar52,0x44);
  auVar24 = vshufps_avx(auVar21,auVar2,0x88);
  auVar2 = vshufps_avx(auVar21,auVar2,0xdd);
  *(undefined1 (*) [16])*param_6 = auVar24._0_16_;
  auVar21 = vshufps_avx(auVar29,auVar22,0x88);
  *(undefined1 (*) [16])param_6[1] = auVar2._0_16_;
  auVar2 = vshufps_avx(auVar29,auVar22,0xdd);
  *(undefined1 (*) [16])param_6[2] = auVar21._0_16_;
  *(undefined1 (*) [16])param_6[3] = auVar2._0_16_;
  return;
}



// FUNCTION 1455540b0 FUN_1455540b0 body=1913 status=ok
// SIG undefined FUN_1455540b0(void)

void FUN_1455540b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  longlong local_1e0;
  longlong lStack_1d8;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  
  auVar10 = *param_1;
  lVar1 = *(longlong *)param_1[1];
  auVar60._0_12_ = ZEXT812(0);
  auVar60._12_4_ = 0;
  local_320._16_8_ = lVar1;
  lVar2 = *(longlong *)param_2[1];
  local_320._0_16_ = auVar10;
  auVar32 = ZEXT1632(*(undefined1 (*) [16])param_3[2]);
  auVar24 = vshufps_avx(auVar32,ZEXT1632(auVar60),0xee);
  auVar19 = ZEXT1632(*(undefined1 (*) [16])param_3[1]);
  auVar33 = ZEXT1632(*(undefined1 (*) [16])*param_3);
  auVar5 = vshufps_avx(auVar33,auVar19,0x44);
  auVar19 = vshufps_avx(auVar33,auVar19,0xee);
  auVar33 = vshufps_avx(auVar19,auVar24,0x88);
  auVar32 = vshufps_avx(auVar32,ZEXT1632(auVar60),0x44);
  auVar6 = vshufps_avx(auVar5,auVar32,0xdd);
  auVar5 = vshufps_avx(auVar5,auVar32,0x88);
  auVar24 = vshufps_avx(auVar19,auVar24,0xdd);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_3)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_3[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_3[2])[1]),0x20);
  auVar49._0_8_ = auVar24._0_8_ ^ 0x8000000080000000;
  auVar49._8_4_ = auVar24._8_4_ ^ 0x80000000;
  auVar49._12_4_ = auVar24._12_4_ ^ 0x80000000;
  auVar49._16_4_ = auVar24._16_4_ ^ 0x80000000;
  auVar49._20_4_ = auVar24._20_4_ ^ 0x80000000;
  auVar49._24_4_ = auVar24._24_4_ ^ 0x80000000;
  auVar49._28_4_ = auVar24._28_4_ ^ 0x80000000;
  auVar4 = vshufps_avx(auVar3,auVar3,0xff);
  auVar62._0_8_ = auVar3._0_8_ ^ 0x8000000080000000;
  auVar62._8_4_ = auVar3._8_4_ ^ 0x80000000;
  auVar62._12_4_ = auVar3._12_4_ ^ 0x80000000;
  auVar62._16_4_ = auVar4._0_4_ ^ 0x80000000;
  auVar62._20_4_ = auVar4._4_4_ ^ 0x80000000;
  auVar62._24_4_ = auVar4._8_4_ ^ 0x80000000;
  auVar62._28_4_ = auVar4._12_4_ ^ 0x80000000;
  auVar24 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0x44);
  auVar19 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_4),
                        ZEXT1632(*(undefined1 (*) [16])param_4[1]),0xee);
  auVar25 = ZEXT1632(auVar60);
  auVar32 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),auVar25,0xee);
  auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_4[2]),auVar25,0x44);
  auVar7 = vshufps_avx(auVar19,auVar32,0xdd);
  auVar30._0_4_ = auVar7._0_4_ * auVar6._0_4_;
  auVar30._4_4_ = auVar7._4_4_ * auVar6._4_4_;
  auVar30._8_4_ = auVar7._8_4_ * auVar6._8_4_;
  auVar30._12_4_ = auVar7._12_4_ * auVar6._12_4_;
  auVar30._16_4_ = auVar7._16_4_ * auVar6._16_4_;
  auVar30._20_4_ = auVar7._20_4_ * auVar6._20_4_;
  auVar30._24_4_ = auVar7._24_4_ * auVar6._24_4_;
  auVar30._28_4_ = auVar7._28_4_ * auVar6._28_4_;
  auVar29 = vshufps_avx(auVar24,auVar21,0xdd);
  auVar3 = vfmadd231ps_fma(auVar30,auVar29,auVar49);
  auVar19 = vshufps_avx(auVar19,auVar32,0x88);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar19,auVar33);
  auVar24 = vshufps_avx(auVar24,auVar21,0x88);
  auVar8 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar24,auVar62);
  fVar52 = auVar33._0_4_;
  auVar24._0_4_ = fVar52 * auVar7._0_4_;
  fVar53 = auVar33._4_4_;
  auVar24._4_4_ = fVar53 * auVar7._4_4_;
  fVar54 = auVar33._8_4_;
  auVar24._8_4_ = fVar54 * auVar7._8_4_;
  fVar55 = auVar33._12_4_;
  auVar24._12_4_ = fVar55 * auVar7._12_4_;
  fVar56 = auVar33._16_4_;
  auVar24._16_4_ = fVar56 * auVar7._16_4_;
  fVar57 = auVar33._20_4_;
  auVar24._20_4_ = fVar57 * auVar7._20_4_;
  fVar58 = auVar33._24_4_;
  auVar24._24_4_ = fVar58 * auVar7._24_4_;
  fVar59 = auVar33._28_4_;
  auVar24._28_4_ = fVar59 * auVar7._28_4_;
  auVar9 = vfmadd231ps_fma(auVar24,auVar29,auVar62);
  auVar19 = ZEXT1632(*(undefined1 (*) [16])param_5[1]);
  auVar33 = ZEXT1632(*(undefined1 (*) [16])*param_5);
  auVar24 = vshufps_avx(auVar33,auVar19,0x44);
  auVar19 = vshufps_avx(auVar33,auVar19,0xee);
  auVar21 = ZEXT1632(*(undefined1 (*) [16])param_5[2]);
  auVar33 = vshufps_avx(auVar21,auVar25,0xee);
  auVar32 = vshufps_avx(auVar19,auVar33,0x88);
  auVar21 = vshufps_avx(auVar21,auVar25,0x44);
  auVar7 = vshufps_avx(auVar24,auVar21,0x88);
  auVar24 = vshufps_avx(auVar24,auVar21,0xdd);
  auVar19 = vshufps_avx(auVar19,auVar33,0xdd);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)((undefined1 (*) [16])*param_5)[1]),
                         ZEXT416(*(uint *)((undefined1 (*) [16])param_5[1])[1]),0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)((undefined1 (*) [16])param_5[2])[1]),0x20);
  auVar50._0_8_ = auVar19._0_8_ ^ 0x8000000080000000;
  auVar50._8_4_ = auVar19._8_4_ ^ 0x80000000;
  auVar50._12_4_ = auVar19._12_4_ ^ 0x80000000;
  auVar50._16_4_ = auVar19._16_4_ ^ 0x80000000;
  auVar50._20_4_ = auVar19._20_4_ ^ 0x80000000;
  auVar50._24_4_ = auVar19._24_4_ ^ 0x80000000;
  auVar50._28_4_ = auVar19._28_4_ ^ 0x80000000;
  uVar18 = 0;
  auVar4 = vshufps_avx(auVar3,auVar3,0xff);
  fVar38 = -auVar3._0_4_;
  fVar41 = -auVar3._4_4_;
  fVar42 = -auVar3._8_4_;
  fVar43 = -auVar3._12_4_;
  fVar44 = -auVar4._0_4_;
  fVar45 = -auVar4._4_4_;
  fVar46 = -auVar4._8_4_;
  fVar47 = -auVar4._12_4_;
  auVar19 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_6),
                        ZEXT1632(*(undefined1 (*) [16])param_6[1]),0x44);
  auVar33 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])*param_6),
                        ZEXT1632(*(undefined1 (*) [16])param_6[1]),0xee);
  auVar61 = ZEXT1632(auVar60);
  auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),auVar61,0x44);
  auVar29 = vshufps_avx(auVar19,auVar21,0xdd);
  auVar19 = vshufps_avx(auVar19,auVar21,0x88);
  auVar25._0_4_ = auVar19._0_4_ * fVar38;
  auVar25._4_4_ = auVar19._4_4_ * fVar41;
  auVar25._8_4_ = auVar19._8_4_ * fVar42;
  auVar25._12_4_ = auVar19._12_4_ * fVar43;
  auVar25._16_4_ = auVar19._16_4_ * fVar44;
  auVar25._20_4_ = auVar19._20_4_ * fVar45;
  auVar25._24_4_ = auVar19._24_4_ * fVar46;
  auVar25._28_4_ = auVar19._28_4_ * fVar47;
  auVar19 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])param_6[2]),auVar61,0xee);
  auVar21 = vshufps_avx(auVar33,auVar19,0xdd);
  auVar19 = vshufps_avx(auVar33,auVar19,0x88);
  auVar3 = vfmadd231ps_fma(auVar25,auVar19,auVar32);
  auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar29,auVar50);
  auVar19._0_4_ = auVar29._0_4_ * fVar38;
  auVar19._4_4_ = auVar29._4_4_ * fVar41;
  auVar19._8_4_ = auVar29._8_4_ * fVar42;
  auVar19._12_4_ = auVar29._12_4_ * fVar43;
  auVar19._16_4_ = auVar29._16_4_ * fVar44;
  auVar19._20_4_ = auVar29._20_4_ * fVar45;
  auVar19._24_4_ = auVar29._24_4_ * fVar46;
  auVar19._28_4_ = auVar29._28_4_ * fVar47;
  auVar4 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar24,auVar21);
  auVar3 = vfmadd231ps_fma(auVar19,auVar21,auVar32);
  auVar19 = local_320;
  auVar21 = local_320;
  auVar29 = local_320;
  auVar25 = local_300;
  auVar30 = local_300;
  auVar26 = local_300;
  auVar33 = local_320;
  if (param_7 != 0) {
    local_320._8_8_ = auVar10._8_8_;
    local_320._0_8_ = auVar10._0_8_;
    lStack_1d8 = SUB168(*param_2,8);
    local_1e0 = SUB168(*param_2,0);
    do {
      local_260 = ZEXT1632(auVar9);
      local_280 = ZEXT1632(auVar3);
      local_2a0 = ZEXT1632(auVar4);
      auVar21 = ZEXT1632(*(undefined1 (*) [16])(local_320._8_8_ + uVar18 * 4));
      auVar29 = ZEXT1632(*(undefined1 (*) [16])(local_320._0_8_ + uVar18 * 4));
      auVar19 = vshufps_avx(auVar29,auVar21,0xee);
      auVar25 = ZEXT1632(*(undefined1 (*) [16])(lVar1 + uVar18 * 4));
      auVar33 = vshufps_avx(auVar25,auVar61,0x44);
      auVar21 = vshufps_avx(auVar29,auVar21,0x44);
      auVar29 = vshufps_avx(auVar21,auVar33,0x88);
      auVar25 = vshufps_avx(auVar25,auVar61,0xee);
      auVar33 = vshufps_avx(auVar21,auVar33,0xdd);
      auVar21 = vshufps_avx(auVar19,auVar25,0x88);
      auVar25 = vshufps_avx(auVar19,auVar25,0xdd);
      auVar3 = vfmadd231ps_fma(local_260,auVar6,auVar29);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar5,auVar33);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar5,auVar29);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar49,ZEXT1632(auVar4));
      auVar20 = ZEXT1632(auVar3);
      auVar51._0_4_ = auVar29._0_4_ * fVar52;
      auVar51._4_4_ = auVar29._4_4_ * fVar53;
      auVar51._8_4_ = auVar29._8_4_ * fVar54;
      auVar51._12_4_ = auVar29._12_4_ * fVar55;
      auVar51._16_4_ = auVar29._16_4_ * fVar56;
      auVar51._20_4_ = auVar29._20_4_ * fVar57;
      auVar51._24_4_ = auVar29._24_4_ * fVar58;
      auVar51._28_4_ = auVar29._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(auVar51,auVar6,auVar33);
      auVar29._0_4_ = auVar33._0_4_ * fVar52;
      auVar29._4_4_ = auVar33._4_4_ * fVar53;
      auVar29._8_4_ = auVar33._8_4_ * fVar54;
      auVar29._12_4_ = auVar33._12_4_ * fVar55;
      auVar29._16_4_ = auVar33._16_4_ * fVar56;
      auVar29._20_4_ = auVar33._20_4_ * fVar57;
      auVar29._24_4_ = auVar33._24_4_ * fVar58;
      auVar29._28_4_ = auVar33._28_4_ * fVar59;
      auVar8 = vfmadd231ps_fma(auVar29,auVar6,auVar21);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar5,auVar25);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar62,auVar20);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar5,auVar21);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar62,ZEXT1632(auVar4));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar49,ZEXT1632(auVar3));
      auVar26 = ZEXT1632(*(undefined1 (*) [16])(lVar1 + 0x10 + uVar18 * 4));
      auVar19 = vshufps_avx(auVar26,auVar61,0x44);
      auVar29 = ZEXT1632(*(undefined1 (*) [16])(local_320._8_8_ + 0x10 + uVar18 * 4));
      auVar30 = ZEXT1632(*(undefined1 (*) [16])(local_320._0_8_ + 0x10 + uVar18 * 4));
      auVar33 = vshufps_avx(auVar30,auVar29,0xee);
      auVar60 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar49,ZEXT1632(auVar10));
      auVar29 = vshufps_avx(auVar30,auVar29,0x44);
      auVar30 = vshufps_avx(auVar29,auVar19,0x88);
      auVar26 = vshufps_avx(auVar26,auVar61,0xee);
      auVar29 = vshufps_avx(auVar29,auVar19,0xdd);
      auVar19 = vshufps_avx(auVar33,auVar26,0x88);
      auVar33 = vshufps_avx(auVar33,auVar26,0xdd);
      auVar48._0_4_ = auVar21._0_4_ * fVar52;
      auVar48._4_4_ = auVar21._4_4_ * fVar53;
      auVar48._8_4_ = auVar21._8_4_ * fVar54;
      auVar48._12_4_ = auVar21._12_4_ * fVar55;
      auVar48._16_4_ = auVar21._16_4_ * fVar56;
      auVar48._20_4_ = auVar21._20_4_ * fVar57;
      auVar48._24_4_ = auVar21._24_4_ * fVar58;
      auVar48._28_4_ = auVar21._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(auVar48,auVar6,auVar25);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar30,auVar5);
      auVar39._0_4_ = auVar25._0_4_ * fVar52;
      auVar39._4_4_ = auVar25._4_4_ * fVar53;
      auVar39._8_4_ = auVar25._8_4_ * fVar54;
      auVar39._12_4_ = auVar25._12_4_ * fVar55;
      auVar39._16_4_ = auVar25._16_4_ * fVar56;
      auVar39._20_4_ = auVar25._20_4_ * fVar57;
      auVar39._24_4_ = auVar25._24_4_ * fVar58;
      auVar39._28_4_ = auVar25._28_4_ * fVar59;
      auVar8 = vfmadd231ps_fma(auVar39,auVar6,auVar30);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar29,auVar5);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar62,ZEXT1632(auVar10));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar9),ZEXT1632(auVar60),auVar49);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar62,ZEXT1632(auVar60));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar9),ZEXT1632(auVar11),auVar49);
      auVar63._0_4_ = auVar30._0_4_ * fVar52;
      auVar63._4_4_ = auVar30._4_4_ * fVar53;
      auVar63._8_4_ = auVar30._8_4_ * fVar54;
      auVar63._12_4_ = auVar30._12_4_ * fVar55;
      auVar63._16_4_ = auVar30._16_4_ * fVar56;
      auVar63._20_4_ = auVar30._20_4_ * fVar57;
      auVar63._24_4_ = auVar30._24_4_ * fVar58;
      auVar63._28_4_ = auVar30._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(auVar63,auVar29,auVar6);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar19,auVar5);
      auVar21._0_4_ = auVar29._0_4_ * fVar52;
      auVar21._4_4_ = auVar29._4_4_ * fVar53;
      auVar21._8_4_ = auVar29._8_4_ * fVar54;
      auVar21._12_4_ = auVar29._12_4_ * fVar55;
      auVar21._16_4_ = auVar29._16_4_ * fVar56;
      auVar21._20_4_ = auVar29._20_4_ * fVar57;
      auVar21._24_4_ = auVar29._24_4_ * fVar58;
      auVar21._28_4_ = auVar29._28_4_ * fVar59;
      auVar8 = vfmadd231ps_fma(auVar21,auVar19,auVar6);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar33,auVar5);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar62,ZEXT1632(auVar12));
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar62,ZEXT1632(auVar11));
      auVar13 = vfmadd231ps_fma(ZEXT1632(auVar9),ZEXT1632(auVar12),auVar49);
      auVar29 = ZEXT1632(auVar13);
      auVar22 = ZEXT1632(auVar13);
      auVar14 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar22,auVar49);
      auVar21 = ZEXT1632(auVar14);
      auVar27._0_4_ = auVar19._0_4_ * fVar52;
      auVar27._4_4_ = auVar19._4_4_ * fVar53;
      auVar27._8_4_ = auVar19._8_4_ * fVar54;
      auVar27._12_4_ = auVar19._12_4_ * fVar55;
      auVar27._16_4_ = auVar19._16_4_ * fVar56;
      auVar27._20_4_ = auVar19._20_4_ * fVar57;
      auVar27._24_4_ = auVar19._24_4_ * fVar58;
      auVar27._28_4_ = auVar19._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(auVar27,auVar33,auVar6);
      auVar9 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar62,auVar22);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar9),auVar21,auVar49);
      auVar28._0_4_ = auVar33._0_4_ * fVar52;
      auVar28._4_4_ = auVar33._4_4_ * fVar53;
      auVar28._8_4_ = auVar33._8_4_ * fVar54;
      auVar28._12_4_ = auVar33._12_4_ * fVar55;
      auVar28._16_4_ = auVar33._16_4_ * fVar56;
      auVar28._20_4_ = auVar33._20_4_ * fVar57;
      auVar28._24_4_ = auVar33._24_4_ * fVar58;
      auVar28._28_4_ = auVar33._28_4_ * fVar59;
      auVar9 = vfmadd231ps_fma(auVar28,auVar62,ZEXT1632(auVar14));
      auVar15 = vfmadd231ps_fma(local_2a0,auVar7,ZEXT1632(auVar4));
      local_180 = auVar32._0_4_;
      fStack_17c = auVar32._4_4_;
      fStack_178 = auVar32._8_4_;
      fStack_174 = auVar32._12_4_;
      fStack_170 = auVar32._16_4_;
      fStack_16c = auVar32._20_4_;
      fStack_168 = auVar32._24_4_;
      fStack_164 = auVar32._28_4_;
      auVar34._0_4_ = auVar4._0_4_ * local_180;
      auVar34._4_4_ = auVar4._4_4_ * fStack_17c;
      auVar34._8_4_ = auVar4._8_4_ * fStack_178;
      auVar34._12_4_ = auVar4._12_4_ * fStack_174;
      auVar34._16_4_ = fStack_170 * 0.0;
      auVar34._20_4_ = fStack_16c * 0.0;
      auVar34._24_4_ = fStack_168 * 0.0;
      auVar34._28_4_ = fStack_164 * 0.0;
      auVar16 = vfmadd231ps_fma(auVar34,auVar24,auVar20);
      auVar4 = vfmadd231ps_fma(local_280,auVar24,ZEXT1632(auVar4));
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar7,ZEXT1632(auVar10));
      auVar26._4_4_ = fVar41;
      auVar26._0_4_ = fVar38;
      auVar26._8_4_ = fVar42;
      auVar26._12_4_ = fVar43;
      auVar26._16_4_ = fVar44;
      auVar26._20_4_ = fVar45;
      auVar26._24_4_ = fVar46;
      auVar26._28_4_ = fVar47;
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),ZEXT1632(auVar15),auVar26);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar7,auVar20);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),ZEXT1632(auVar15),auVar50);
      auVar16 = vfmadd231ps_fma(ZEXT1632(auVar16),auVar50,ZEXT1632(auVar4));
      auVar31._0_4_ = local_180 * auVar3._0_4_;
      auVar31._4_4_ = fStack_17c * auVar3._4_4_;
      auVar31._8_4_ = fStack_178 * auVar3._8_4_;
      auVar31._12_4_ = fStack_174 * auVar3._12_4_;
      auVar31._16_4_ = fStack_170 * 0.0;
      auVar31._20_4_ = fStack_16c * 0.0;
      auVar31._24_4_ = fStack_168 * 0.0;
      auVar31._28_4_ = fStack_164 * 0.0;
      auVar20._4_4_ = fVar41;
      auVar20._0_4_ = fVar38;
      auVar20._8_4_ = fVar42;
      auVar20._12_4_ = fVar43;
      auVar20._16_4_ = fVar44;
      auVar20._20_4_ = fVar45;
      auVar20._24_4_ = fVar46;
      auVar20._28_4_ = fVar47;
      auVar3 = vfmadd231ps_fma(auVar31,auVar24,ZEXT1632(auVar10));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar7,ZEXT1632(auVar60));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar20,ZEXT1632(auVar4));
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar50,ZEXT1632(auVar16));
      auVar25 = vshufps_avx(ZEXT1632(auVar15),ZEXT1632(auVar4),0x44);
      auVar37._0_4_ = auVar10._0_4_ * local_180;
      auVar37._4_4_ = auVar10._4_4_ * fStack_17c;
      auVar37._8_4_ = auVar10._8_4_ * fStack_178;
      auVar37._12_4_ = auVar10._12_4_ * fStack_174;
      auVar37._16_4_ = fStack_170 * 0.0;
      auVar37._20_4_ = fStack_16c * 0.0;
      auVar37._24_4_ = fStack_168 * 0.0;
      auVar37._28_4_ = fStack_164 * 0.0;
      auVar10 = vfmadd231ps_fma(auVar37,auVar24,ZEXT1632(auVar60));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),ZEXT1632(auVar11),auVar7);
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar20,ZEXT1632(auVar16));
      auVar10 = vfmadd231ps_fma(ZEXT1632(auVar10),auVar50,ZEXT1632(auVar3));
      auVar36._0_4_ = local_180 * auVar60._0_4_;
      auVar36._4_4_ = fStack_17c * auVar60._4_4_;
      auVar36._8_4_ = fStack_178 * auVar60._8_4_;
      auVar36._12_4_ = fStack_174 * auVar60._12_4_;
      auVar36._16_4_ = fStack_170 * 0.0;
      auVar36._20_4_ = fStack_16c * 0.0;
      auVar36._24_4_ = fStack_168 * 0.0;
      auVar36._28_4_ = fStack_164 * 0.0;
      auVar60 = vfmadd231ps_fma(auVar36,auVar24,ZEXT1632(auVar11));
      auVar60 = vfmadd231ps_fma(ZEXT1632(auVar60),auVar7,ZEXT1632(auVar12));
      auVar60 = vfmadd231ps_fma(ZEXT1632(auVar60),auVar20,ZEXT1632(auVar3));
      auVar60 = vfmadd231ps_fma(ZEXT1632(auVar60),auVar50,ZEXT1632(auVar10));
      auVar30 = vshufps_avx(ZEXT1632(auVar16),ZEXT1632(auVar3),0x44);
      auVar26 = vshufps_avx(auVar25,auVar30,0x88);
      *(undefined1 (*) [16])(local_1e0 + uVar18 * 4) = auVar26._0_16_;
      auVar25 = vshufps_avx(auVar25,auVar30,0xdd);
      *(undefined1 (*) [16])(lStack_1d8 + uVar18 * 4) = auVar25._0_16_;
      auVar25 = vshufps_avx(ZEXT1632(auVar16),ZEXT1632(auVar3),0xee);
      auVar30 = vshufps_avx(ZEXT1632(auVar15),ZEXT1632(auVar4),0xee);
      auVar25 = vshufps_avx(auVar30,auVar25,0x88);
      *(undefined1 (*) [16])(lVar2 + uVar18 * 4) = auVar25._0_16_;
      auVar35._0_4_ = local_180 * auVar11._0_4_;
      auVar35._4_4_ = fStack_17c * auVar11._4_4_;
      auVar35._8_4_ = fStack_178 * auVar11._8_4_;
      auVar35._12_4_ = fStack_174 * auVar11._12_4_;
      auVar35._16_4_ = fStack_170 * 0.0;
      auVar35._20_4_ = fStack_16c * 0.0;
      auVar35._24_4_ = fStack_168 * 0.0;
      auVar35._28_4_ = fStack_164 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar35,auVar24,ZEXT1632(auVar12));
      auVar40._0_4_ = local_180 * auVar12._0_4_;
      auVar40._4_4_ = fStack_17c * auVar12._4_4_;
      auVar40._8_4_ = fStack_178 * auVar12._8_4_;
      auVar40._12_4_ = fStack_174 * auVar12._12_4_;
      auVar40._16_4_ = fStack_170 * 0.0;
      auVar40._20_4_ = fStack_16c * 0.0;
      auVar40._24_4_ = fStack_168 * 0.0;
      auVar40._28_4_ = fStack_164 * 0.0;
      auVar4 = vfmadd231ps_fma(auVar40,auVar24,auVar22);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar7,auVar22);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar7,auVar21);
      auVar26 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar60),0x44);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar20,ZEXT1632(auVar10));
      auVar11 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar50,ZEXT1632(auVar60));
      local_300 = ZEXT1632(auVar11);
      auVar30 = ZEXT1632(auVar13);
      auVar22._0_4_ = local_180 * auVar13._0_4_;
      auVar22._4_4_ = fStack_17c * auVar13._4_4_;
      auVar22._8_4_ = fStack_178 * auVar13._8_4_;
      auVar22._12_4_ = fStack_174 * auVar13._12_4_;
      auVar22._16_4_ = fStack_170 * 0.0;
      auVar22._20_4_ = fStack_16c * 0.0;
      auVar22._24_4_ = fStack_168 * 0.0;
      auVar22._28_4_ = fStack_164 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar22,auVar24,auVar21);
      auVar3 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar20,ZEXT1632(auVar11));
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar20,ZEXT1632(auVar60));
      auVar12 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar50,ZEXT1632(auVar11));
      auVar25 = ZEXT1632(auVar12);
      auVar4 = vfmadd231ps_fma(ZEXT1632(auVar3),auVar50,ZEXT1632(auVar12));
      auVar23._0_4_ = local_180 * auVar14._0_4_;
      auVar23._4_4_ = fStack_17c * auVar14._4_4_;
      auVar23._8_4_ = fStack_178 * auVar14._8_4_;
      auVar23._12_4_ = fStack_174 * auVar14._12_4_;
      auVar23._16_4_ = fStack_170 * 0.0;
      auVar23._20_4_ = fStack_16c * 0.0;
      auVar23._24_4_ = fStack_168 * 0.0;
      auVar23._28_4_ = fStack_164 * 0.0;
      auVar3 = vfmadd231ps_fma(auVar23,auVar20,ZEXT1632(auVar12));
      auVar20 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar12),0x44);
      auVar22 = vshufps_avx(auVar26,auVar20,0x88);
      *(undefined1 (*) [16])(local_1e0 + 0x10 + uVar18 * 4) = auVar22._0_16_;
      auVar26 = vshufps_avx(auVar26,auVar20,0xdd);
      *(undefined1 (*) [16])(lStack_1d8 + 0x10 + uVar18 * 4) = auVar26._0_16_;
      auVar26 = vshufps_avx(ZEXT1632(auVar10),ZEXT1632(auVar60),0xee);
      auVar20 = vshufps_avx(ZEXT1632(auVar11),ZEXT1632(auVar12),0xee);
      auVar26 = vshufps_avx(auVar26,auVar20,0x88);
      *(undefined1 (*) [16])(lVar2 + 0x10 + uVar18 * 4) = auVar26._0_16_;
      uVar17 = (int)uVar18 + 8;
      uVar18 = (ulonglong)uVar17;
      auVar26 = auVar21;
    } while (uVar17 < param_7);
  }
  local_320 = auVar33;
  auVar24 = vshufps_avx(auVar29,auVar21,0x44);
  auVar5 = vshufps_avx(auVar19,local_320,0x44);
  auVar33 = vshufps_avx(auVar24,auVar5,0x88);
  *(undefined1 (*) [16])*param_4 = auVar33._0_16_;
  auVar24 = vshufps_avx(auVar24,auVar5,0xdd);
  auVar5 = vshufps_avx(auVar29,auVar21,0xee);
  auVar33 = vshufps_avx(local_300,auVar25,0x44);
  *(undefined1 (*) [16])param_4[1] = auVar24._0_16_;
  auVar24 = vshufps_avx(auVar19,local_320,0xee);
  auVar24 = vshufps_avx(auVar5,auVar24,0x88);
  auVar5 = vshufps_avx(auVar30,auVar26,0x44);
  *(undefined1 (*) [16])param_4[2] = auVar24._0_16_;
  auVar24 = vshufps_avx(auVar33,auVar5,0x88);
  auVar5 = vshufps_avx(auVar33,auVar5,0xdd);
  *(undefined1 (*) [16])*param_6 = auVar24._0_16_;
  auVar24 = vshufps_avx(local_300,auVar25,0xee);
  *(undefined1 (*) [16])param_6[1] = auVar5._0_16_;
  auVar5 = vshufps_avx(auVar30,auVar26,0xee);
  auVar24 = vshufps_avx(auVar24,auVar5,0x88);
  *(undefined1 (*) [16])param_6[2] = auVar24._0_16_;
  return;
}



// FUNCTION 145554830 FUN_145554830 body=396 status=ok
// SIG undefined FUN_145554830(void)

undefined8 FUN_145554830(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  int iVar20;
  undefined1 auVar23 [12];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  lVar4 = *param_1;
  uVar10 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar3 = *(uint *)(param_4 + 0x28);
  uVar5 = (uint)uVar2;
  if (uVar10 < uVar2) {
    uVar5 = uVar10;
  }
  pfVar13 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar12 = uVar5 - (uVar5 & 0xfffffff0);
  for (pauVar11 = (undefined1 (*) [16])(lVar4 + (ulonglong)uVar3 * 2);
      pauVar11 <
      (undefined1 (*) [16])(lVar4 + ((ulonglong)(uVar5 & 0xfffffff0) + (ulonglong)uVar3) * 2);
      pauVar11 = pauVar11 + 2) {
    auVar17 = *pauVar11;
    auVar1 = pauVar11[1];
    auVar16._0_12_ = auVar17._0_12_;
    auVar16._12_2_ = auVar17._6_2_;
    auVar16._14_2_ = -(ushort)(auVar17._6_2_ < 0);
    auVar15._12_4_ = auVar16._12_4_;
    auVar15._0_10_ = auVar17._0_10_;
    auVar15._10_2_ = -(ushort)(auVar17._4_2_ < 0);
    auVar14._10_6_ = auVar15._10_6_;
    auVar14._0_8_ = auVar17._0_8_;
    auVar14._8_2_ = auVar17._4_2_;
    auVar6._4_8_ = auVar14._8_8_;
    auVar6._2_2_ = -(ushort)(auVar17._2_2_ < 0);
    auVar6._0_2_ = auVar17._2_2_;
    iVar20 = CONCAT22(-(ushort)(auVar17._8_2_ < 0),auVar17._8_2_);
    auVar21._0_8_ = CONCAT26(-(ushort)(auVar17._10_2_ < 0),CONCAT24(auVar17._10_2_,iVar20));
    auVar21._8_2_ = auVar17._12_2_;
    auVar21._10_2_ = -(ushort)(auVar17._12_2_ < 0);
    auVar22._12_2_ = auVar17._14_2_;
    auVar22._0_12_ = auVar21;
    auVar22._14_2_ = -(ushort)(auVar17._14_2_ < 0);
    *pfVar13 = (float)CONCAT22(-(ushort)(auVar17._0_2_ < 0),auVar17._0_2_) * 3.0517578e-05;
    pfVar13[1] = (float)auVar6._0_4_ * 3.0517578e-05;
    pfVar13[2] = (float)auVar14._8_4_ * 3.0517578e-05;
    pfVar13[3] = (float)auVar15._12_4_ * 3.0517578e-05;
    pfVar13[4] = (float)iVar20 * 3.0517578e-05;
    pfVar13[5] = (float)(int)((ulonglong)auVar21._0_8_ >> 0x20) * 3.0517578e-05;
    pfVar13[6] = (float)auVar21._8_4_ * 3.0517578e-05;
    pfVar13[7] = (float)auVar22._12_4_ * 3.0517578e-05;
    iVar20 = CONCAT22(-(ushort)(auVar1._8_2_ < 0),auVar1._8_2_);
    auVar23._0_8_ = CONCAT26(-(ushort)(auVar1._10_2_ < 0),CONCAT24(auVar1._10_2_,iVar20));
    auVar23._8_2_ = auVar1._12_2_;
    auVar23._10_2_ = -(ushort)(auVar1._12_2_ < 0);
    auVar24._12_2_ = auVar1._14_2_;
    auVar24._0_12_ = auVar23;
    auVar24._14_2_ = -(ushort)(auVar1._14_2_ < 0);
    auVar19._0_12_ = auVar1._0_12_;
    auVar19._12_2_ = auVar1._6_2_;
    auVar19._14_2_ = -(ushort)(auVar1._6_2_ < 0);
    auVar18._12_4_ = auVar19._12_4_;
    auVar18._0_10_ = auVar1._0_10_;
    auVar18._10_2_ = -(ushort)(auVar1._4_2_ < 0);
    auVar17._10_6_ = auVar18._10_6_;
    auVar17._0_8_ = auVar1._0_8_;
    auVar17._8_2_ = auVar1._4_2_;
    auVar7._4_8_ = auVar17._8_8_;
    auVar7._2_2_ = -(ushort)(auVar1._2_2_ < 0);
    auVar7._0_2_ = auVar1._2_2_;
    pfVar13[8] = (float)CONCAT22(-(ushort)(auVar1._0_2_ < 0),auVar1._0_2_) * 3.0517578e-05;
    pfVar13[9] = (float)auVar7._0_4_ * 3.0517578e-05;
    pfVar13[10] = (float)auVar17._8_4_ * 3.0517578e-05;
    pfVar13[0xb] = (float)auVar18._12_4_ * 3.0517578e-05;
    pfVar13[0xc] = (float)iVar20 * 3.0517578e-05;
    pfVar13[0xd] = (float)(int)((ulonglong)auVar23._0_8_ >> 0x20) * 3.0517578e-05;
    pfVar13[0xe] = (float)auVar23._8_4_ * 3.0517578e-05;
    pfVar13[0xf] = (float)auVar24._12_4_ * 3.0517578e-05;
    pfVar13 = pfVar13 + 0x10;
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar8 = *pauVar11;
    pauVar11 = (undefined1 (*) [16])(*pauVar11 + 2);
    *pfVar13 = (float)(int)*(short *)puVar8 * 3.0517578e-05;
    pfVar13 = pfVar13 + 1;
  }
  **(undefined2 **)(param_4 + 0x20) = *(undefined2 *)(pauVar11[-1] + 0xe);
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar5;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar5 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar5 == uVar2) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar5;
  }
  if (uVar5 == uVar10) {
    uVar9 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar5;
    uVar9 = 0x2b;
  }
  return uVar9;
}



// FUNCTION 1455549c0 FUN_1455549c0 body=541 status=ok
// SIG undefined FUN_1455549c0(void)

undefined8 FUN_1455549c0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  float *pfVar20;
  int *piVar21;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar19 = param_3 - *(uint *)(param_4 + 0x2c);
  lVar4 = *param_1;
  uVar5 = (uint)uVar2;
  if (uVar19 < uVar2) {
    uVar5 = uVar19;
  }
  uVar6 = *(int *)(param_4 + 0x28) * 2;
  pfVar20 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  lVar18 = (longlong)(int)((uVar5 - 1) * 2) + (ulonglong)uVar6;
  **(undefined2 **)(param_4 + 0x20) = *(undefined2 *)(lVar4 + lVar18 * 2);
  *(undefined2 *)(*(longlong *)(param_4 + 0x20) + 2) = *(undefined2 *)(lVar4 + 2 + lVar18 * 2);
  iVar17 = uVar5 + (uVar5 >> 4) * -0x10;
  uVar16 = (ulonglong)*(ushort *)(param_2 + 2);
  for (piVar21 = (int *)(lVar4 + (ulonglong)uVar6 * 2);
      piVar21 < (int *)(lVar4 + ((ulonglong)((uVar5 >> 4) << 5) + (ulonglong)uVar6) * 2);
      piVar21 = piVar21 + 0x10) {
    iVar7 = *piVar21;
    iVar8 = piVar21[1];
    iVar9 = piVar21[2];
    iVar10 = piVar21[3];
    iVar11 = piVar21[4];
    iVar12 = piVar21[5];
    iVar13 = piVar21[6];
    iVar14 = piVar21[7];
    *pfVar20 = (float)(int)(short)iVar7 * 3.0517578e-05;
    pfVar20[1] = (float)(int)(short)iVar8 * 3.0517578e-05;
    pfVar20[2] = (float)(int)(short)iVar9 * 3.0517578e-05;
    pfVar20[3] = (float)(int)(short)iVar10 * 3.0517578e-05;
    pfVar1 = pfVar20 + uVar16;
    *pfVar1 = (float)(iVar7 >> 0x10) * 3.0517578e-05;
    pfVar1[1] = (float)(iVar8 >> 0x10) * 3.0517578e-05;
    pfVar1[2] = (float)(iVar9 >> 0x10) * 3.0517578e-05;
    pfVar1[3] = (float)(iVar10 >> 0x10) * 3.0517578e-05;
    pfVar20[4] = (float)(int)(short)iVar11 * 3.0517578e-05;
    pfVar20[5] = (float)(int)(short)iVar12 * 3.0517578e-05;
    pfVar20[6] = (float)(int)(short)iVar13 * 3.0517578e-05;
    pfVar20[7] = (float)(int)(short)iVar14 * 3.0517578e-05;
    iVar7 = piVar21[8];
    iVar8 = piVar21[9];
    iVar9 = piVar21[10];
    iVar10 = piVar21[0xb];
    pfVar1 = pfVar20 + uVar16 + 4;
    *pfVar1 = (float)(iVar11 >> 0x10) * 3.0517578e-05;
    pfVar1[1] = (float)(iVar12 >> 0x10) * 3.0517578e-05;
    pfVar1[2] = (float)(iVar13 >> 0x10) * 3.0517578e-05;
    pfVar1[3] = (float)(iVar14 >> 0x10) * 3.0517578e-05;
    pfVar20[8] = (float)(int)(short)iVar7 * 3.0517578e-05;
    pfVar20[9] = (float)(int)(short)iVar8 * 3.0517578e-05;
    pfVar20[10] = (float)(int)(short)iVar9 * 3.0517578e-05;
    pfVar20[0xb] = (float)(int)(short)iVar10 * 3.0517578e-05;
    iVar11 = piVar21[0xc];
    iVar12 = piVar21[0xd];
    iVar13 = piVar21[0xe];
    iVar14 = piVar21[0xf];
    pfVar1 = pfVar20 + uVar16 + 8;
    *pfVar1 = (float)(iVar7 >> 0x10) * 3.0517578e-05;
    pfVar1[1] = (float)(iVar8 >> 0x10) * 3.0517578e-05;
    pfVar1[2] = (float)(iVar9 >> 0x10) * 3.0517578e-05;
    pfVar1[3] = (float)(iVar10 >> 0x10) * 3.0517578e-05;
    pfVar20[0xc] = (float)(int)(short)iVar11 * 3.0517578e-05;
    pfVar20[0xd] = (float)(int)(short)iVar12 * 3.0517578e-05;
    pfVar20[0xe] = (float)(int)(short)iVar13 * 3.0517578e-05;
    pfVar20[0xf] = (float)(int)(short)iVar14 * 3.0517578e-05;
    pfVar1 = pfVar20 + uVar16 + 0xc;
    *pfVar1 = (float)(iVar11 >> 0x10) * 3.0517578e-05;
    pfVar1[1] = (float)(iVar12 >> 0x10) * 3.0517578e-05;
    pfVar1[2] = (float)(iVar13 >> 0x10) * 3.0517578e-05;
    pfVar1[3] = (float)(iVar14 >> 0x10) * 3.0517578e-05;
    pfVar20 = pfVar20 + 0x10;
  }
  for (; iVar17 != 0; iVar17 = iVar17 + -1) {
    sVar3 = *(short *)((longlong)piVar21 + 2);
    *pfVar20 = (float)(int)(short)*piVar21 * 3.0517578e-05;
    pfVar20[uVar16] = (float)(int)sVar3 * 3.0517578e-05;
    pfVar20 = pfVar20 + 1;
    piVar21 = piVar21 + 1;
  }
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar5;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar5 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar5 == uVar2) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar5;
  }
  if (uVar5 == uVar19) {
    uVar15 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar5;
    uVar15 = 0x2b;
  }
  return uVar15;
}



// FUNCTION 145554be0 FUN_145554be0 body=1013 status=ok
// SIG undefined FUN_145554be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145554be0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  short *psVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint local_58 [2];
  longlong alStack_50 [2];
  
  uVar20 = *(uint *)(param_4 + 0x2c);
  uVar13 = param_3 - uVar20;
  uVar4 = *(ushort *)((longlong)param_1 + 0x12);
  local_58[0] = (uint)uVar4;
  uVar11 = (uint)uVar4;
  if (uVar13 < uVar4) {
    uVar11 = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 1);
  uVar25 = uVar14 & 0xff;
  uVar24 = (ulonglong)uVar25;
  psVar18 = (short *)(*param_1 + (ulonglong)(uVar25 * *(int *)(param_4 + 0x28)) * 2);
  uVar16 = uVar24 * 8 + 0xf;
  if (uVar16 <= uVar24 * 8) {
    uVar16 = 0xffffffffffffff0;
  }
  plVar2 = (longlong *)((longlong)local_58 + -(uVar16 & 0xfffffffffffffff0));
  if (uVar25 != 0) {
    lVar19 = *param_2;
    uVar4 = *(ushort *)(param_2 + 2);
    pbVar23 = *(byte **)(param_4 + 0x50);
    plVar17 = plVar2;
    uVar26 = uVar24;
    do {
      bVar3 = *pbVar23;
      pbVar23 = pbVar23 + 1;
      *plVar17 = lVar19 + ((ulonglong)bVar3 * (ulonglong)uVar4 + (ulonglong)uVar20) * 4;
      uVar26 = uVar26 - 1;
      plVar17 = plVar17 + 1;
    } while (uVar26 != 0);
  }
  uVar20 = uVar11 >> 2;
  uVar27 = uVar11 & 3;
  if (uVar20 != 0) {
    do {
      uVar20 = uVar20 - 1;
      uVar26 = 0;
      if (uVar25 != 0) {
        do {
          iVar6 = *(int *)(psVar18 + uVar26);
          iVar7 = *(int *)(psVar18 + uVar26 + uVar24);
          iVar8 = *(int *)(psVar18 + uVar26 + uVar25 * 2);
          iVar9 = *(int *)(psVar18 + uVar26 + uVar25 * 3);
          auVar28._0_4_ = (float)(int)(short)iVar6 * 3.0517578e-05;
          auVar28._4_4_ = (float)(int)(short)iVar7 * 3.0517578e-05;
          auVar28._8_4_ = (float)(int)(short)iVar8 * 3.0517578e-05;
          auVar28._12_4_ = (float)(int)(short)iVar9 * 3.0517578e-05;
          *(undefined1 (*) [16])plVar2[uVar26] = auVar28;
          iVar12 = (int)uVar26;
          pfVar10 = (float *)plVar2[iVar12 + 1];
          *pfVar10 = (float)(iVar6 >> 0x10) * 3.0517578e-05;
          pfVar10[1] = (float)(iVar7 >> 0x10) * 3.0517578e-05;
          pfVar10[2] = (float)(iVar8 >> 0x10) * 3.0517578e-05;
          pfVar10[3] = (float)(iVar9 >> 0x10) * 3.0517578e-05;
          uVar21 = iVar12 + (iVar12 != uVar25 - 3) + 1;
          uVar26 = (ulonglong)uVar21;
        } while (uVar21 < uVar25);
        uVar26 = 0;
        if (7 < uVar25) {
          uVar21 = 4;
          do {
            lVar19 = (plVar2 + uVar26)[1];
            plVar2[uVar26] = plVar2[uVar26] + 0x10;
            (plVar2 + uVar26)[1] = lVar19 + 0x10;
            uVar22 = (int)uVar26 + 8;
            uVar26 = (ulonglong)uVar22;
            lVar19 = (plVar2 + (uVar21 - 2))[1];
            plVar2[uVar21 - 2] = plVar2[uVar21 - 2] + 0x10;
            (plVar2 + (uVar21 - 2))[1] = lVar19 + 0x10;
            lVar19 = (plVar2 + uVar21)[1];
            plVar2[uVar21] = plVar2[uVar21] + 0x10;
            (plVar2 + uVar21)[1] = lVar19 + 0x10;
            uVar1 = uVar21 + 2;
            uVar21 = uVar21 + 8;
            auVar29._0_8_ = plVar2[uVar1] + 0x10;
            auVar29._8_8_ = (plVar2 + uVar1)[1] + 0x10;
            *(undefined1 (*) [16])(plVar2 + uVar1) = auVar29;
          } while (uVar22 < (uVar14 & 0xf8));
          if (uVar25 <= uVar22) goto LAB_145554e1e;
        }
        plVar17 = plVar2 + uVar26;
        uVar26 = (ulonglong)(uVar25 - (int)uVar26);
        do {
          *plVar17 = *plVar17 + 0x10;
          plVar17 = plVar17 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
LAB_145554e1e:
      psVar18 = psVar18 + uVar25 * 4;
    } while (uVar20 != 0);
  }
joined_r0x000145554e33:
  do {
    if (uVar27 == 0) {
      if (uVar25 != 0) {
        lVar19 = 0;
        do {
          *(undefined2 *)(lVar19 + *(longlong *)(param_4 + 0x20)) =
               *(undefined2 *)((longlong)psVar18 + lVar19 + (ulonglong)uVar25 * -2);
          uVar24 = uVar24 - 1;
          lVar19 = lVar19 + 2;
        } while (uVar24 != 0);
      }
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar11;
      *(short *)((longlong)param_2 + 0x12) = (short)uVar11 + *(short *)(param_4 + 0x2c);
      *(undefined4 *)(param_4 + 0x30) = 0x10000;
      if (uVar11 == local_58[0]) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar11;
      }
      if (uVar11 == uVar13) {
        uVar15 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar11;
        uVar15 = 0x2b;
      }
      return uVar15;
    }
    uVar27 = uVar27 - 1;
    uVar20 = 0;
    if (uVar25 < 4) goto LAB_145554f04;
    uVar14 = (uVar25 - 4 >> 2) + 1;
    uVar26 = (ulonglong)uVar14;
    uVar20 = uVar14 * 4;
    lVar19 = (ulonglong)uVar14 * 4;
    plVar17 = (longlong *)((longlong)alStack_50 + -(uVar16 & 0xfffffffffffffff0) + 8);
    do {
      sVar5 = *psVar18;
      pfVar10 = (float *)plVar17[-2];
      plVar17[-2] = (longlong)(pfVar10 + 1);
      *pfVar10 = (float)(int)sVar5 * 3.0517578e-05;
      sVar5 = psVar18[1];
      pfVar10 = (float *)plVar17[-1];
      plVar17[-1] = (longlong)(pfVar10 + 1);
      *pfVar10 = (float)(int)sVar5 * 3.0517578e-05;
      sVar5 = psVar18[2];
      pfVar10 = (float *)*plVar17;
      *plVar17 = (longlong)(pfVar10 + 1);
      *pfVar10 = (float)(int)sVar5 * 3.0517578e-05;
      sVar5 = psVar18[3];
      psVar18 = psVar18 + 4;
      pfVar10 = (float *)plVar17[1];
      plVar17[1] = (longlong)(pfVar10 + 1);
      *pfVar10 = (float)(int)sVar5 * 3.0517578e-05;
      uVar26 = uVar26 - 1;
      plVar17 = plVar17 + 4;
    } while (uVar26 != 0);
  } while (uVar25 <= uVar20);
  goto LAB_145554f0b;
LAB_145554f04:
  if (uVar25 != 0) {
    lVar19 = 0;
LAB_145554f0b:
    uVar26 = (ulonglong)(uVar25 - uVar20);
    plVar17 = plVar2 + lVar19;
    do {
      sVar5 = *psVar18;
      psVar18 = psVar18 + 1;
      pfVar10 = (float *)*plVar17;
      *plVar17 = (longlong)(pfVar10 + 1);
      *pfVar10 = (float)(int)sVar5 * 3.0517578e-05;
      uVar26 = uVar26 - 1;
      plVar17 = plVar17 + 1;
    } while (uVar26 != 0);
  }
  goto joined_r0x000145554e33;
}



// FUNCTION 145554fe0 FUN_145554fe0 body=918 status=ok
// SIG undefined FUN_145554fe0(void)

undefined8 FUN_145554fe0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar13;
  
  uVar12 = *(uint *)(param_4 + 0x34);
  uVar17 = *(uint *)(param_4 + 0x30);
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar20 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar10 = (ulonglong)((uVar12 - uVar17) + 0xffff) / (ulonglong)uVar12;
  psVar7 = *(short **)(param_4 + 0x20);
  if (uVar20 < (uint)uVar10) {
    uVar10 = (ulonglong)uVar20;
  }
  psVar1 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 2);
  iVar19 = (int)uVar10;
  pfVar16 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  if (iVar19 != 0) {
    iVar11 = (int)*psVar7;
    sVar3 = *psVar1;
    do {
      uVar15 = uVar17 & 0xffff;
      uVar17 = uVar17 + uVar12;
      *pfVar16 = (float)(int)((sVar3 - iVar11) * uVar15 + iVar11 * 0x10000) * 4.656613e-10;
      pfVar16 = pfVar16 + 1;
      uVar15 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar15;
    } while (uVar15 != 0);
  }
  auVar25._4_4_ = uVar12;
  auVar25._0_4_ = uVar12;
  auVar25._8_4_ = uVar12;
  auVar25._12_4_ = uVar12;
  uVar10 = (ulonglong)(((uint)uVar2 * 0x10000 - uVar17) + -1 + uVar12) / (ulonglong)uVar12;
  uVar18 = (ulonglong)(uVar20 - iVar19);
  if ((uint)uVar10 <= uVar20 - iVar19) {
    uVar18 = uVar10;
  }
  iVar11 = uVar12 * 4;
  uVar10 = uVar18 >> 2;
  uVar14 = (uint)uVar18 & 3;
  uVar30 = uVar12 + uVar17;
  uVar31 = (int)((auVar25._8_8_ & 0xffffffff) * 2) + uVar17;
  uVar32 = uVar12 * 3 + uVar17;
  uVar15 = uVar17;
  if ((int)uVar10 != 0) {
    do {
      uVar8 = uVar15 >> 0x10;
      iVar4 = *(int *)(psVar1 + ((ulonglong)(uVar12 + uVar15 >> 0x10) - 1));
      iVar5 = *(int *)(psVar1 + ((ulonglong)(uVar12 * 2 + uVar15 >> 0x10) - 1));
      uVar21 = uVar12 * 3 + uVar15;
      uVar15 = uVar15 + uVar12 * 4;
      iVar6 = *(int *)(psVar1 + ((ulonglong)(uVar21 >> 0x10) - 1));
      uVar21 = uVar17 & 0xffff;
      uVar22 = uVar30 & 0xffff;
      uVar23 = uVar31 & 0xffff;
      uVar24 = uVar32 & 0xffff;
      uVar17 = uVar17 + iVar11;
      uVar30 = uVar30 + iVar11;
      uVar31 = uVar31 + iVar11;
      uVar32 = uVar32 + iVar11;
      iVar26 = (int)(short)*(int *)(psVar1 + ((ulonglong)uVar8 - 1));
      iVar27 = (int)(short)iVar4;
      iVar28 = (int)(short)iVar5;
      iVar29 = (int)(short)iVar6;
      *pfVar16 = ((float)((*(int *)(psVar1 + ((ulonglong)uVar8 - 1)) >> 0x10) - iVar26) *
                  (float)uVar21 * 1.5258789e-05 + (float)iVar26) * 3.0517578e-05;
      pfVar16[1] = ((float)((iVar4 >> 0x10) - iVar27) * (float)uVar22 * 1.5258789e-05 +
                   (float)iVar27) * 3.0517578e-05;
      pfVar16[2] = ((float)((iVar5 >> 0x10) - iVar28) * (float)uVar23 * 1.5258789e-05 +
                   (float)iVar28) * 3.0517578e-05;
      pfVar16[3] = ((float)((iVar6 >> 0x10) - iVar29) * (float)uVar24 * 1.5258789e-05 +
                   (float)iVar29) * 3.0517578e-05;
      pfVar16 = pfVar16 + 4;
      uVar21 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar21;
    } while (uVar21 != 0);
  }
  uVar17 = (uint)uVar2;
  uVar10 = (ulonglong)(uVar15 >> 0x10);
  if ((uVar18 & 3) != 0) {
    do {
      lVar9 = uVar10 - 1;
      iVar11 = (int)uVar10;
      uVar30 = uVar15 & 0xffff;
      uVar15 = uVar15 + uVar12;
      uVar10 = (ulonglong)(uVar15 >> 0x10);
      *pfVar16 = (float)(int)(((int)psVar1[(ulonglong)(iVar11 + 1) - 1] - (int)psVar1[lVar9]) *
                              uVar30 + psVar1[lVar9] * 0x10000) * 4.656613e-10;
      uVar14 = uVar14 - 1;
      pfVar16 = pfVar16 + 1;
    } while (uVar14 != 0);
  }
  uVar13 = (ulonglong)uVar17;
  if ((uint)uVar10 < uVar17) {
    uVar13 = uVar10;
  }
  uVar12 = (uint)uVar13;
  if (uVar12 != 0) {
    *psVar7 = psVar1[uVar13 - 1];
  }
  uVar14 = iVar19 + (uint)uVar18;
  *(uint *)(param_4 + 0x30) = uVar15 + uVar12 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar13;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar14 + *(short *)(param_4 + 0x2c);
  if (uVar12 == uVar17) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar12;
  }
  if (uVar14 != uVar20) {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar14;
    return 0x2b;
  }
  return 0x2d;
}



// FUNCTION 145555380 FUN_145555380 body=1099 status=ok
// SIG undefined FUN_145555380(void)

undefined8 FUN_145555380(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  uVar15 = *(uint *)(param_4 + 0x30);
  uVar10 = *(uint *)(param_4 + 0x34);
  uVar20 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar7 = *(ushort *)(param_2 + 2);
  uVar11 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar12 = (ulonglong)((uVar10 - uVar15) + 0xffff) / (ulonglong)uVar10;
  if (uVar20 < (uint)uVar12) {
    uVar12 = (ulonglong)uVar20;
  }
  iVar19 = (int)uVar12;
  psVar1 = (short *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  pfVar18 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  if (iVar19 != 0) {
    iVar13 = (int)**(short **)(param_4 + 0x20);
    iVar16 = (int)(*(short **)(param_4 + 0x20))[1];
    sVar8 = *psVar1;
    sVar9 = psVar1[1];
    do {
      uVar14 = uVar15 & 0xffff;
      uVar15 = uVar15 + uVar10;
      *pfVar18 = (float)(int)((sVar8 - iVar13) * uVar14 + iVar13 * 0x10000) * 4.656613e-10;
      pfVar18[uVar7] = (float)(int)((sVar9 - iVar16) * uVar14 + iVar16 * 0x10000) * 4.656613e-10;
      pfVar18 = pfVar18 + 1;
      uVar14 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar14;
    } while (uVar14 != 0);
  }
  auVar27._4_4_ = uVar10;
  auVar27._0_4_ = uVar10;
  auVar27._8_4_ = uVar10;
  auVar27._12_4_ = uVar10;
  uVar12 = (ulonglong)((uVar11 * 0x10000 - uVar15) + -1 + uVar10) / (ulonglong)uVar10;
  uVar22 = (ulonglong)(uVar20 - iVar19);
  if ((uint)uVar12 <= uVar20 - iVar19) {
    uVar22 = uVar12;
  }
  iVar13 = uVar10 * 4;
  uVar17 = (uint)uVar22 & 3;
  uVar12 = uVar22 >> 2;
  uVar35 = uVar10 + uVar15;
  uVar36 = (int)((auVar27._8_8_ & 0xffffffff) * 2) + uVar15;
  uVar37 = uVar10 * 3 + uVar15;
  uVar14 = uVar15;
  if ((int)uVar12 != 0) {
    uVar23 = uVar15;
    uVar21 = uVar10 * 2 + uVar15;
    do {
      uVar3 = *(undefined8 *)(psVar1 + ((ulonglong)((uVar21 - uVar10 >> 0x10) * 2) - 2));
      uVar14 = uVar23 + iVar13;
      uVar4 = *(undefined8 *)(psVar1 + ((ulonglong)((uVar23 >> 0x10) * 2) - 2));
      uVar5 = *(undefined8 *)(psVar1 + ((ulonglong)((uVar10 + uVar21 >> 0x10) * 2) - 2));
      uVar6 = *(undefined8 *)(psVar1 + ((ulonglong)((uVar21 >> 0x10) * 2) - 2));
      uVar23 = uVar15 & 0xffff;
      uVar24 = uVar35 & 0xffff;
      uVar25 = uVar36 & 0xffff;
      uVar26 = uVar37 & 0xffff;
      uVar15 = uVar15 + iVar13;
      uVar35 = uVar35 + iVar13;
      uVar36 = uVar36 + iVar13;
      uVar37 = uVar37 + iVar13;
      fVar28 = (float)uVar23 * 1.5258789e-05;
      fVar29 = (float)uVar24 * 1.5258789e-05;
      fVar30 = (float)uVar25 * 1.5258789e-05;
      fVar31 = (float)uVar26 * 1.5258789e-05;
      iVar16 = (int)uVar4 >> 0x10;
      iVar32 = (int)uVar3 >> 0x10;
      iVar33 = (int)uVar6 >> 0x10;
      iVar34 = (int)uVar5 >> 0x10;
      *pfVar18 = ((float)((int)(short)((ulonglong)uVar4 >> 0x20) - (int)(short)uVar4) * fVar28 +
                 (float)(int)(short)uVar4) * 3.0517578e-05;
      pfVar18[1] = ((float)((int)(short)((ulonglong)uVar3 >> 0x20) - (int)(short)uVar3) * fVar29 +
                   (float)(int)(short)uVar3) * 3.0517578e-05;
      pfVar18[2] = ((float)((int)(short)((ulonglong)uVar6 >> 0x20) - (int)(short)uVar6) * fVar30 +
                   (float)(int)(short)uVar6) * 3.0517578e-05;
      pfVar18[3] = ((float)((int)(short)((ulonglong)uVar5 >> 0x20) - (int)(short)uVar5) * fVar31 +
                   (float)(int)(short)uVar5) * 3.0517578e-05;
      pfVar2 = pfVar18 + uVar7;
      *pfVar2 = ((float)((int)((longlong)uVar4 >> 0x30) - iVar16) * fVar28 + (float)iVar16) *
                3.0517578e-05;
      pfVar2[1] = ((float)((int)((longlong)uVar3 >> 0x30) - iVar32) * fVar29 + (float)iVar32) *
                  3.0517578e-05;
      pfVar2[2] = ((float)((int)((longlong)uVar6 >> 0x30) - iVar33) * fVar30 + (float)iVar33) *
                  3.0517578e-05;
      pfVar2[3] = ((float)((int)((longlong)uVar5 >> 0x30) - iVar34) * fVar31 + (float)iVar34) *
                  3.0517578e-05;
      pfVar18 = pfVar18 + 4;
      uVar24 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar24;
      uVar23 = uVar14;
      uVar21 = uVar21 + iVar13;
    } while (uVar24 != 0);
  }
  uVar15 = uVar14 >> 0x10;
  if ((uVar22 & 3) != 0) {
    do {
      uVar35 = uVar14 & 0xffff;
      uVar15 = uVar15 * 2;
      uVar14 = uVar14 + uVar10;
      sVar8 = psVar1[(ulonglong)(uVar15 + 1) - 2];
      sVar9 = psVar1[(ulonglong)(uVar15 + 3) - 2];
      *pfVar18 = (float)(int)(((int)psVar1[(ulonglong)(uVar15 + 2) - 2] -
                              (int)psVar1[(ulonglong)uVar15 - 2]) * uVar35 +
                             psVar1[(ulonglong)uVar15 - 2] * 0x10000) * 4.656613e-10;
      uVar15 = uVar14 >> 0x10;
      pfVar18[uVar7] =
           (float)(int)(((int)sVar9 - (int)sVar8) * uVar35 + sVar8 * 0x10000) * 4.656613e-10;
      uVar17 = uVar17 - 1;
      pfVar18 = pfVar18 + 1;
    } while (uVar17 != 0);
  }
  uVar10 = uVar11;
  if (uVar15 < uVar11) {
    uVar10 = uVar15;
  }
  if (uVar10 != 0) {
    **(short **)(param_4 + 0x20) = psVar1[(ulonglong)(uVar10 * 2) - 2];
    *(short *)(*(longlong *)(param_4 + 0x20) + 2) = psVar1[(ulonglong)(uVar10 * 2 + 1) - 2];
  }
  uVar15 = (uint)uVar22 + iVar19;
  *(uint *)(param_4 + 0x30) = uVar14 + uVar10 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar15 + *(short *)(param_4 + 0x2c);
  if (uVar10 == uVar11) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar10;
  }
  if (uVar15 != uVar20) {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar15;
    return 0x2b;
  }
  return 0x2d;
}



// FUNCTION 1455557d0 FUN_1455557d0 body=2124 status=ok
// SIG undefined FUN_1455557d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455557d0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong *plVar27;
  ulonglong uVar28;
  short *psVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uVar26;
  
  local_cc = (uint)*(ushort *)((longlong)param_1 + 0x12);
  local_d8 = *(uint *)(param_4 + 0x34);
  uVar30 = *(uint *)(param_4 + 0x30);
  uVar19 = *(uint *)(param_4 + 0x2c);
  uVar23 = (ulonglong)((local_d8 - uVar30) + 0xffff) / (ulonglong)local_d8;
  uVar24 = param_3 - uVar19;
  if (uVar24 < (uint)uVar23) {
    uVar23 = (ulonglong)uVar24;
  }
  uVar12 = *(uint *)(param_1 + 1);
  uVar25 = uVar12 & 0xff;
  uVar26 = (ulonglong)uVar25;
  local_d0 = (uint)uVar23;
  lVar1 = *param_1 + (uVar25 * *(int *)(param_4 + 0x28) - uVar26) * 2;
  uVar13 = uVar26 * 8 + 0xf;
  if (uVar13 <= uVar26 * 8) {
    uVar13 = 0xffffffffffffff0;
  }
  plVar27 = (longlong *)((longlong)&local_d8 - (uVar13 & 0xfffffffffffffff0));
  uStack_c0 = plVar27;
  if (uVar25 != 0) {
    lVar22 = *param_2;
    uVar3 = *(ushort *)(param_2 + 2);
    pbVar16 = *(byte **)(param_4 + 0x50);
    plVar14 = plVar27;
    uVar23 = uVar26;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 1;
      *plVar14 = lVar22 + ((ulonglong)bVar2 * (ulonglong)uVar3 + (ulonglong)uVar19) * 4;
      uVar23 = uVar23 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar23 != 0);
    uVar23 = (ulonglong)local_d0;
  }
  local_d4 = (uint)uVar23;
  uVar19 = local_d8;
  while (local_d4 != 0) {
    uVar31 = uVar30 & 0xffff;
    local_d4 = (int)uVar23 - 1;
    uVar17 = 0;
    if (uVar25 < 4) {
      if (uVar25 != 0) {
        lVar22 = 0;
        goto LAB_145555a43;
      }
    }
    else {
      lVar22 = 0;
      uVar17 = (uVar25 - 4 >> 2) + 1;
      uVar19 = uVar25 + 2;
      uVar23 = (ulonglong)uVar17;
      uVar17 = uVar17 * 4;
      plVar27 = plVar27 + 2;
      do {
        pfVar10 = (float *)plVar27[-2];
        iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + lVar22 * 2);
        sVar4 = *(short *)(lVar1 + (ulonglong)(uVar19 - 2) * 2);
        plVar27[-2] = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)((sVar4 - iVar15) * uVar31 + iVar15 * 0x10000) * 4.656613e-10;
        pfVar10 = (float *)plVar27[-1];
        iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + 2 + lVar22 * 2);
        sVar4 = *(short *)(lVar1 + (ulonglong)(uVar19 - 1) * 2);
        plVar27[-1] = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)((sVar4 - iVar15) * uVar31 + iVar15 * 0x10000) * 4.656613e-10;
        pfVar10 = (float *)*plVar27;
        sVar4 = *(short *)(lVar1 + (ulonglong)uVar19 * 2);
        iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + 4 + lVar22 * 2);
        *plVar27 = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)((sVar4 - iVar15) * uVar31 + iVar15 * 0x10000) * 4.656613e-10;
        pfVar10 = (float *)plVar27[1];
        iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + 6 + lVar22 * 2);
        sVar4 = *(short *)(lVar1 + (ulonglong)(uVar19 + 1) * 2);
        uVar19 = uVar19 + 4;
        lVar22 = lVar22 + 4;
        plVar27[1] = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)((sVar4 - iVar15) * uVar31 + iVar15 * 0x10000) * 4.656613e-10;
        uVar23 = uVar23 - 1;
        plVar27 = plVar27 + 4;
      } while (uVar23 != 0);
      plVar27 = uStack_c0;
      uVar19 = local_d8;
      if (uVar17 < uVar25) {
LAB_145555a43:
        lVar20 = lVar22 * 2;
        plVar14 = plVar27 + lVar22;
        do {
          pfVar10 = (float *)*plVar14;
          iVar15 = (int)*(short *)(lVar20 + *(longlong *)(param_4 + 0x20));
          sVar4 = *(short *)(lVar1 + (ulonglong)(uVar17 + uVar25) * 2);
          uVar17 = uVar17 + 1;
          *plVar14 = (longlong)(pfVar10 + 1);
          *pfVar10 = (float)(int)((sVar4 - iVar15) * uVar31 + iVar15 * 0x10000) * 4.656613e-10;
          lVar20 = lVar20 + 2;
          plVar14 = plVar14 + 1;
          uVar19 = local_d8;
        } while (uVar17 < uVar25);
      }
    }
    uVar23 = (ulonglong)local_d4;
    uVar30 = uVar30 + uVar19;
  }
  auVar37._4_4_ = uVar19;
  auVar37._0_4_ = uVar19;
  auVar37._8_4_ = uVar19;
  auVar37._12_4_ = uVar19;
  uVar31 = ((local_cc * 0x10000 - uVar30) + -1 + uVar19) / uVar19;
  uVar17 = uVar24 - local_d0;
  if (uVar31 <= uVar24 - local_d0) {
    uVar17 = uVar31;
  }
  uVar18 = uVar17 >> 2;
  uVar23 = (ulonglong)uStack_c0 >> 0x20;
  uStack_c0 = (longlong *)CONCAT44((int)uVar23,uVar17);
  local_d4 = uVar17 & 3;
  uVar50 = uVar19 + uVar30;
  uVar51 = (int)((auVar37._8_8_ & 0xffffffff) * 2) + uVar30;
  uVar52 = uVar19 * 3 + uVar30;
  uVar31 = uVar30;
  if (uVar17 >> 2 != 0) {
    iVar15 = uVar19 * 4;
    iVar39 = uVar19 * 4;
    local_c8 = CONCAT44(local_c8._4_4_,iVar15);
    do {
      uVar18 = uVar18 - 1;
      uVar33 = uVar30 & 0xffff;
      uVar34 = uVar50 & 0xffff;
      uVar35 = uVar51 & 0xffff;
      uVar36 = uVar52 & 0xffff;
      uVar23 = 0;
      uVar30 = uVar30 + iVar15;
      uVar50 = uVar50 + iVar15;
      uVar51 = uVar51 + iVar15;
      uVar52 = uVar52 + iVar15;
      fVar46 = (float)uVar33 * 1.5258789e-05;
      fVar47 = (float)uVar34 * 1.5258789e-05;
      fVar48 = (float)uVar35 * 1.5258789e-05;
      fVar49 = (float)uVar36 * 1.5258789e-05;
      if (uVar25 != 0) {
        uVar32 = (ulonglong)((uVar19 * 2 + uVar31 >> 0x10) * uVar25);
        uVar28 = (ulonglong)((uVar31 >> 0x10) * uVar25);
        uVar21 = (ulonglong)((uVar19 + uVar31 >> 0x10) * uVar25);
        uVar13 = (ulonglong)((uVar19 * 3 + uVar31 >> 0x10) * uVar25);
        local_b8 = uVar26 * 2;
        do {
          lVar22 = lVar1 + uVar23 * 2;
          iVar39 = *(int *)(lVar22 + uVar21 * 2);
          iVar38 = *(int *)(lVar22 + uVar28 * 2);
          iVar40 = *(int *)(lVar22 + uVar32 * 2);
          iVar41 = *(int *)(lVar22 + uVar13 * 2);
          lVar22 = lVar22 + uVar26 * 2;
          iVar6 = *(int *)(lVar22 + uVar21 * 2);
          iVar7 = *(int *)(lVar22 + uVar28 * 2);
          iVar8 = *(int *)(lVar22 + uVar32 * 2);
          iVar9 = *(int *)(lVar22 + uVar13 * 2);
          pfVar10 = (float *)plVar27[uVar23];
          iVar42 = iVar38 >> 0x10;
          iVar43 = iVar39 >> 0x10;
          iVar44 = iVar40 >> 0x10;
          iVar45 = iVar41 >> 0x10;
          iVar38 = (int)(short)iVar38;
          iVar39 = (int)(short)iVar39;
          iVar40 = (int)(short)iVar40;
          iVar41 = (int)(short)iVar41;
          *pfVar10 = ((float)((short)iVar7 - iVar38) * fVar46 + (float)iVar38) * 3.0517578e-05;
          pfVar10[1] = ((float)((short)iVar6 - iVar39) * fVar47 + (float)iVar39) * 3.0517578e-05;
          pfVar10[2] = ((float)((short)iVar8 - iVar40) * fVar48 + (float)iVar40) * 3.0517578e-05;
          pfVar10[3] = ((float)((short)iVar9 - iVar41) * fVar49 + (float)iVar41) * 3.0517578e-05;
          iVar39 = (int)uVar23;
          pfVar10 = (float *)plVar27[iVar39 + 1];
          *pfVar10 = ((float)((iVar7 >> 0x10) - iVar42) * fVar46 + (float)iVar42) * 3.0517578e-05;
          pfVar10[1] = ((float)((iVar6 >> 0x10) - iVar43) * fVar47 + (float)iVar43) * 3.0517578e-05;
          pfVar10[2] = ((float)((iVar8 >> 0x10) - iVar44) * fVar48 + (float)iVar44) * 3.0517578e-05;
          pfVar10[3] = ((float)((iVar9 >> 0x10) - iVar45) * fVar49 + (float)iVar45) * 3.0517578e-05;
          uVar19 = iVar39 + (iVar39 != uVar25 - 3) + 1;
          uVar23 = (ulonglong)uVar19;
        } while (uVar19 < uVar25);
        uVar23 = 0;
        if (uVar25 < 8) {
LAB_145555d20:
          plVar14 = plVar27 + uVar23;
          uVar23 = (ulonglong)(uVar25 - (int)uVar23);
          do {
            *plVar14 = *plVar14 + 0x10;
            plVar14 = plVar14 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        else {
          uVar19 = 4;
          do {
            lVar22 = (plVar27 + uVar23)[1];
            plVar27[uVar23] = plVar27[uVar23] + 0x10;
            (plVar27 + uVar23)[1] = lVar22 + 0x10;
            uVar34 = (int)uVar23 + 8;
            uVar23 = (ulonglong)uVar34;
            lVar22 = (plVar27 + (uVar19 - 2))[1];
            plVar27[uVar19 - 2] = plVar27[uVar19 - 2] + 0x10;
            (plVar27 + (uVar19 - 2))[1] = lVar22 + 0x10;
            lVar22 = (plVar27 + uVar19)[1];
            plVar27[uVar19] = plVar27[uVar19] + 0x10;
            (plVar27 + uVar19)[1] = lVar22 + 0x10;
            uVar33 = uVar19 + 2;
            uVar19 = uVar19 + 8;
            lVar22 = (plVar27 + uVar33)[1];
            plVar27[uVar33] = plVar27[uVar33] + 0x10;
            (plVar27 + uVar33)[1] = lVar22 + 0x10;
          } while (uVar34 < (uVar12 & 0xf8));
          if (uVar34 < uVar25) goto LAB_145555d20;
        }
        iVar39 = (int)local_c8;
      }
      uVar31 = uVar31 + iVar39;
      uVar19 = local_d8;
    } while (uVar18 != 0);
  }
  uVar30 = local_d4;
  uVar12 = uVar17 & 3;
  do {
    if (uVar12 == 0) {
      uVar30 = local_cc;
      if (uVar31 >> 0x10 < local_cc) {
        uVar30 = uVar31 >> 0x10;
      }
      if ((uVar30 != 0) && (uVar19 = 0, uVar25 != 0)) {
        lVar22 = 0;
        do {
          uVar12 = uVar19 + uVar30 * uVar25;
          uVar19 = uVar19 + 1;
          *(undefined2 *)(lVar22 + *(longlong *)(param_4 + 0x20)) =
               *(undefined2 *)(lVar1 + (ulonglong)uVar12 * 2);
          lVar22 = lVar22 + 2;
        } while (uVar19 < uVar25);
      }
      local_d0 = local_d0 + (int)uStack_c0;
      *(uint *)(param_4 + 0x30) = uVar31 + uVar30 * -0x10000;
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar30;
      *(short *)((longlong)param_2 + 0x12) = (short)local_d0 + *(short *)(param_4 + 0x2c);
      if (uVar30 == local_cc) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar30;
      }
      if (local_d0 == uVar24) {
        uVar11 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + local_d0;
        uVar11 = 0x2b;
      }
      return uVar11;
    }
    uVar12 = uVar31 >> 0x10;
    uVar17 = uVar31 & 0xffff;
    uVar30 = uVar30 - 1;
    local_d4 = 0;
    if (uVar25 < 4) {
      if (uVar25 != 0) {
        local_c8 = 0;
        uVar18 = uVar12 * uVar25;
        goto LAB_145555eb2;
      }
    }
    else {
      uVar19 = uVar25 * uVar12;
      local_b8 = (ulonglong)uVar19;
      lVar22 = (ulonglong)((uVar12 + 1) * uVar25) - (ulonglong)uVar19;
      uVar18 = (uVar25 - 4 >> 2) + 1;
      uVar23 = (ulonglong)uVar18;
      local_d4 = uVar18 * 4;
      local_c8 = uVar23 * 4;
      plVar14 = plVar27 + 2;
      psVar29 = (short *)(lVar1 + 2 + (ulonglong)uVar19 * 2);
      do {
        sVar4 = psVar29[-1];
        sVar5 = psVar29[lVar22 + -1];
        pfVar10 = (float *)plVar14[-2];
        plVar14[-2] = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar17 + sVar4 * 0x10000) * 4.656613e-10
        ;
        sVar4 = *psVar29;
        sVar5 = psVar29[lVar22];
        pfVar10 = (float *)plVar14[-1];
        plVar14[-1] = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar17 + sVar4 * 0x10000) * 4.656613e-10
        ;
        sVar4 = psVar29[1];
        pfVar10 = (float *)*plVar14;
        sVar5 = psVar29[lVar22 + 1];
        *plVar14 = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar17 + sVar4 * 0x10000) * 4.656613e-10
        ;
        sVar4 = psVar29[2];
        pfVar10 = (float *)plVar14[1];
        sVar5 = psVar29[lVar22 + 2];
        plVar14[1] = (longlong)(pfVar10 + 1);
        *pfVar10 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar17 + sVar4 * 0x10000) * 4.656613e-10
        ;
        uVar23 = uVar23 - 1;
        plVar14 = plVar14 + 4;
        psVar29 = psVar29 + 4;
      } while (uVar23 != 0);
      uVar19 = local_d8;
      if (local_d4 < uVar25) {
        uVar18 = (uint)local_b8;
LAB_145555eb2:
        psVar29 = (short *)(lVar1 + (local_c8 + (ulonglong)uVar18) * 2);
        uVar23 = (ulonglong)(uVar25 - local_d4);
        plVar14 = plVar27 + local_c8;
        do {
          sVar4 = *psVar29;
          pfVar10 = (float *)*plVar14;
          sVar5 = psVar29[(ulonglong)((uVar12 + 1) * uVar25) - (ulonglong)uVar18];
          psVar29 = psVar29 + 1;
          *plVar14 = (longlong)(pfVar10 + 1);
          *pfVar10 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar17 + sVar4 * 0x10000) *
                     4.656613e-10;
          uVar23 = uVar23 - 1;
          plVar14 = plVar14 + 1;
          uVar19 = local_d8;
        } while (uVar23 != 0);
      }
    }
    uVar31 = uVar31 + uVar19;
    uVar12 = uVar30;
  } while( true );
}



// FUNCTION 145556020 FUN_145556020 body=820 status=ok
// SIG undefined FUN_145556020(void)

undefined8 FUN_145556020(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar10;
  
  uVar9 = *(uint *)(param_4 + 0x34);
  uVar13 = *(uint *)(param_4 + 0x30);
  uVar17 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar18 = (uint)uVar6;
  uVar8 = (ulonglong)((uVar9 - uVar13) + 0xffff) / (ulonglong)uVar9;
  if (uVar17 < (uint)uVar8) {
    uVar8 = (ulonglong)uVar17;
  }
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  pfVar14 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar11 = (int)uVar8;
  if (iVar11 != 0) {
    fVar23 = *pfVar1;
    fVar25 = **(float **)(param_4 + 0x20);
    do {
      uVar12 = uVar13 & 0xffff;
      uVar13 = uVar13 + uVar9;
      *pfVar14 = (float)uVar12 * (fVar23 - fVar25) * 1.5258789e-05 + fVar25;
      pfVar14 = pfVar14 + 1;
      uVar12 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar12;
    } while (uVar12 != 0);
  }
  auVar24._4_4_ = uVar9;
  auVar24._0_4_ = uVar9;
  auVar24._8_4_ = uVar9;
  auVar24._12_4_ = uVar9;
  uVar8 = (ulonglong)((uVar18 * 0x10000 - uVar13) + -1 + uVar9) / (ulonglong)uVar9;
  uVar16 = (ulonglong)(uVar17 - iVar11);
  if ((uint)uVar8 <= uVar17 - iVar11) {
    uVar16 = uVar8;
  }
  uVar8 = uVar16 >> 2;
  iVar15 = (int)uVar16 + (int)uVar8 * -4;
  iVar2 = uVar9 * 4;
  uVar28 = uVar9 + uVar13;
  uVar29 = (int)((auVar24._8_8_ & 0xffffffff) * 2) + uVar13;
  uVar30 = uVar9 * 3 + uVar13;
  uVar12 = uVar13;
  if ((int)uVar8 != 0) {
    do {
      uVar19 = uVar12 + uVar9 * 3;
      uVar7 = uVar12 >> 0x10;
      uVar3 = *(undefined8 *)(pfVar1 + ((ulonglong)(uVar9 + uVar12 >> 0x10) - 1));
      uVar20 = uVar9 * 2 + uVar12;
      fVar26 = (float)*(undefined8 *)(pfVar1 + ((ulonglong)uVar7 - 1));
      uVar12 = uVar12 + uVar9 * 4;
      fVar27 = (float)uVar3;
      uVar4 = *(undefined8 *)(pfVar1 + ((ulonglong)(uVar19 >> 0x10) - 1));
      uVar5 = *(undefined8 *)(pfVar1 + ((ulonglong)(uVar20 >> 0x10) - 1));
      fVar23 = (float)uVar5;
      fVar25 = (float)uVar4;
      uVar19 = uVar13 & 0xffff;
      uVar20 = uVar28 & 0xffff;
      uVar21 = uVar29 & 0xffff;
      uVar22 = uVar30 & 0xffff;
      uVar13 = uVar13 + iVar2;
      uVar28 = uVar28 + iVar2;
      uVar29 = uVar29 + iVar2;
      uVar30 = uVar30 + iVar2;
      *pfVar14 = ((float)((ulonglong)*(undefined8 *)(pfVar1 + ((ulonglong)uVar7 - 1)) >> 0x20) -
                 fVar26) * (float)uVar19 * 1.5258789e-05 + fVar26;
      pfVar14[1] = ((float)((ulonglong)uVar3 >> 0x20) - fVar27) * (float)uVar20 * 1.5258789e-05 +
                   fVar27;
      pfVar14[2] = ((float)((ulonglong)uVar5 >> 0x20) - fVar23) * (float)uVar21 * 1.5258789e-05 +
                   fVar23;
      pfVar14[3] = ((float)((ulonglong)uVar4 >> 0x20) - fVar25) * (float)uVar22 * 1.5258789e-05 +
                   fVar25;
      pfVar14 = pfVar14 + 4;
      uVar19 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar19;
    } while (uVar19 != 0);
  }
  while( true ) {
    uVar13 = uVar12 >> 0x10;
    uVar8 = (ulonglong)uVar13;
    if (iVar15 == 0) break;
    *pfVar14 = (pfVar1[(ulonglong)(uVar13 + 1) - 1] - pfVar1[uVar8 - 1]) * (float)(uVar12 & 0xffff)
               * 1.5258789e-05 + pfVar1[uVar8 - 1];
    pfVar14 = pfVar14 + 1;
    iVar15 = iVar15 + -1;
    uVar12 = uVar12 + uVar9;
  }
  uVar10 = (ulonglong)uVar18;
  if (uVar13 < uVar6) {
    uVar10 = uVar8;
  }
  uVar9 = (uint)uVar10;
  if (uVar9 != 0) {
    **(float **)(param_4 + 0x20) = pfVar1[uVar10 - 1];
  }
  *(uint *)(param_4 + 0x30) = uVar12 + uVar9 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  uVar13 = (int)uVar16 + iVar11;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar13 + *(short *)(param_4 + 0x2c);
  if (uVar9 == uVar18) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar9;
  }
  if (uVar13 == uVar17) {
    return 0x2d;
  }
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar13;
  return 0x2b;
}



// FUNCTION 145556360 FUN_145556360 body=1235 status=ok
// SIG undefined FUN_145556360(void)

undefined8 FUN_145556360(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  
  uVar21 = *(uint *)(param_4 + 0x2c);
  uVar23 = *(uint *)(param_4 + 0x30);
  uVar19 = param_3 - uVar21;
  uVar12 = *(uint *)(param_4 + 0x34);
  uVar14 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar15 = (ulonglong)((uVar12 - uVar23) + 0xffff) / (ulonglong)uVar12;
  uVar46 = *(uint *)(param_4 + 0x28);
  lVar13 = *param_1;
  if (uVar19 < (uint)uVar15) {
    uVar15 = (ulonglong)uVar19;
  }
  lVar1 = lVar13 + ((ulonglong)uVar46 - 1) * 4;
  lVar2 = lVar1 + (ulonglong)*(ushort *)(param_1 + 2) * 4;
  uVar17 = (uint)uVar15;
  pfVar43 = (float *)(*param_2 + (ulonglong)uVar21 * 4);
  pfVar45 = (float *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) + (ulonglong)uVar21) * 4);
  uVar21 = uVar17;
  while (uVar21 != 0) {
    uVar21 = uVar23 & 0xffff;
    fVar29 = *(float *)(lVar2 + 4);
    uVar23 = uVar23 + uVar12;
    fVar30 = **(float **)(param_4 + 0x20);
    fVar31 = (*(float **)(param_4 + 0x20))[1];
    fVar32 = (float)uVar21 * 1.5258789e-05;
    *pfVar43 = (*(float *)(lVar13 + (ulonglong)uVar46 * 4) - fVar30) * fVar32 + fVar30;
    *pfVar45 = fVar32 * (fVar29 - fVar31) + fVar31;
    uVar21 = (int)uVar15 - 1;
    uVar15 = (ulonglong)uVar21;
    pfVar43 = pfVar43 + 1;
    pfVar45 = pfVar45 + 1;
  }
  auVar33._4_4_ = uVar12;
  auVar33._0_4_ = uVar12;
  auVar33._8_4_ = uVar12;
  auVar33._12_4_ = uVar12;
  uVar15 = (ulonglong)((uVar14 * 0x10000 - uVar23) + -1 + uVar12) / (ulonglong)uVar12;
  uVar24 = (ulonglong)(uVar19 - uVar17);
  if ((uint)uVar15 <= uVar19 - uVar17) {
    uVar24 = uVar15;
  }
  uVar15 = uVar24 >> 2;
  iVar20 = (int)uVar24 + (int)uVar15 * -4;
  iVar3 = uVar12 * 4;
  uVar46 = uVar12 + uVar23;
  uVar47 = (int)((auVar33._8_8_ & 0xffffffff) * 2) + uVar23;
  uVar48 = uVar12 * 3 + uVar23;
  uVar21 = uVar23;
  if ((int)uVar15 != 0) {
    pfVar42 = pfVar43;
    pfVar44 = pfVar45;
    do {
      uVar22 = (ulonglong)(uVar12 + uVar21 >> 0x10);
      uVar25 = uVar21 >> 0x10;
      uVar18 = (ulonglong)(uVar12 * 3 + uVar21 >> 0x10);
      pfVar43 = pfVar42 + 4;
      pfVar45 = pfVar44 + 4;
      uVar16 = (ulonglong)(uVar21 + uVar12 * 2 >> 0x10);
      uVar21 = uVar21 + uVar12 * 4;
      uVar4 = *(undefined8 *)(lVar1 + uVar22 * 4);
      uVar5 = *(undefined8 *)(lVar1 + (ulonglong)uVar25 * 4);
      fVar40 = (float)uVar5;
      uVar6 = *(undefined8 *)(lVar2 + (ulonglong)uVar25 * 4);
      fVar38 = (float)uVar6;
      uVar7 = *(undefined8 *)(lVar1 + uVar16 * 4);
      uVar8 = *(undefined8 *)(lVar2 + uVar16 * 4);
      fVar41 = (float)uVar4;
      uVar9 = *(undefined8 *)(lVar1 + uVar18 * 4);
      uVar10 = *(undefined8 *)(lVar2 + uVar22 * 4);
      fVar39 = (float)uVar10;
      uVar11 = *(undefined8 *)(lVar2 + uVar18 * 4);
      fVar34 = (float)uVar7;
      fVar35 = (float)uVar9;
      uVar25 = uVar23 & 0xffff;
      uVar26 = uVar46 & 0xffff;
      uVar27 = uVar47 & 0xffff;
      uVar28 = uVar48 & 0xffff;
      fVar36 = (float)uVar8;
      fVar37 = (float)uVar11;
      uVar23 = uVar23 + iVar3;
      uVar46 = uVar46 + iVar3;
      uVar47 = uVar47 + iVar3;
      uVar48 = uVar48 + iVar3;
      fVar29 = (float)uVar25 * 1.5258789e-05;
      fVar30 = (float)uVar26 * 1.5258789e-05;
      fVar31 = (float)uVar27 * 1.5258789e-05;
      fVar32 = (float)uVar28 * 1.5258789e-05;
      *pfVar42 = ((float)((ulonglong)uVar5 >> 0x20) - fVar40) * fVar29 + fVar40;
      pfVar42[1] = ((float)((ulonglong)uVar4 >> 0x20) - fVar41) * fVar30 + fVar41;
      pfVar42[2] = ((float)((ulonglong)uVar7 >> 0x20) - fVar34) * fVar31 + fVar34;
      pfVar42[3] = ((float)((ulonglong)uVar9 >> 0x20) - fVar35) * fVar32 + fVar35;
      *pfVar44 = ((float)((ulonglong)uVar6 >> 0x20) - fVar38) * fVar29 + fVar38;
      pfVar44[1] = ((float)((ulonglong)uVar10 >> 0x20) - fVar39) * fVar30 + fVar39;
      pfVar44[2] = ((float)((ulonglong)uVar8 >> 0x20) - fVar36) * fVar31 + fVar36;
      pfVar44[3] = ((float)((ulonglong)uVar11 >> 0x20) - fVar37) * fVar32 + fVar37;
      uVar25 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar25;
      pfVar42 = pfVar43;
      pfVar44 = pfVar45;
    } while (uVar25 != 0);
  }
  while( true ) {
    uVar23 = uVar21 >> 0x10;
    uVar15 = (ulonglong)uVar23;
    if (iVar20 == 0) break;
    fVar29 = *(float *)(lVar1 + uVar15 * 4);
    fVar30 = *(float *)(lVar2 + uVar15 * 4);
    fVar31 = *(float *)(lVar2 + (ulonglong)(uVar23 + 1) * 4);
    fVar32 = (float)(uVar21 & 0xffff) * 1.5258789e-05;
    *pfVar43 = (*(float *)(lVar1 + (ulonglong)(uVar23 + 1) * 4) - fVar29) * fVar32 + fVar29;
    *pfVar45 = (fVar31 - fVar30) * fVar32 + fVar30;
    iVar20 = iVar20 + -1;
    uVar21 = uVar21 + uVar12;
    pfVar43 = pfVar43 + 1;
    pfVar45 = pfVar45 + 1;
  }
  uVar16 = (ulonglong)uVar14;
  if (uVar23 < uVar14) {
    uVar16 = uVar15;
  }
  uVar23 = (uint)uVar16;
  if (uVar23 != 0) {
    **(undefined4 **)(param_4 + 0x20) = *(undefined4 *)(lVar1 + uVar16 * 4);
    *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 4) = *(undefined4 *)(lVar2 + uVar16 * 4);
  }
  uVar17 = uVar17 + (int)uVar24;
  *(uint *)(param_4 + 0x30) = uVar21 + uVar23 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar16;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar17 + *(short *)(param_4 + 0x2c);
  if (uVar23 == uVar14) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar23;
  }
  if (uVar17 == uVar19) {
    return 0x2d;
  }
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar17;
  return 0x2b;
}



// FUNCTION 145556840 FUN_145556840 body=3044 status=ok
// SIG undefined FUN_145556840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145556840(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar40;
  uint uVar41;
  undefined1 auVar39 [16];
  uint uVar42;
  float fVar43;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  uint uVar58;
  undefined1 unaff_XMM6 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar59 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar60 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar61 [16];
  undefined8 auStack_110 [5];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined8 local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong local_b0;
  
  uVar34 = *(uint *)(param_4 + 0x34);
  uVar26 = *(uint *)(param_4 + 0x30);
  uVar15 = *(uint *)(param_1 + 1);
  uVar37 = *(uint *)(param_4 + 0x2c);
  local_dc = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar27 = param_3 - uVar37;
  local_e0 = ((uVar34 - uVar26) + 0xffff) / uVar34;
  uVar23 = uVar15 & 0xff;
  if (uVar27 < local_e0) {
    local_e0 = uVar27;
  }
  uVar19 = (ulonglong)uVar23 * 8;
  local_e8 = uVar26;
  uVar16 = uVar19 + 0xf;
  local_e4 = uVar34;
  if (uVar16 <= uVar19) {
    uVar16 = 0xffffffffffffff0;
  }
  lVar33 = -(uVar16 & 0xfffffffffffffff0);
  uVar16 = uVar19 + 0xf;
  lVar30 = (longlong)&local_e8 + lVar33;
  lStack_d0 = lVar30;
  if (uVar16 <= uVar19) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar33) = 0x145556919;
  lVar13 = -(uVar16 & 0xfffffffffffffff0);
  uVar16 = 0;
  lVar1 = (longlong)&local_e8 + lVar13 + lVar33;
  lVar17 = lVar30;
  uVar58 = uVar26;
  if (uVar23 != 0) {
    if ((3 < uVar23) && (5 < DAT_14c707900)) {
      uVar8 = *(undefined4 *)(param_4 + 0x28);
      lVar32 = *param_1;
      lVar25 = *param_2;
      lVar9 = *(longlong *)(param_4 + 0x50);
      auVar54 = pshuflw(ZEXT416((uint)(int)(short)param_1[2]),ZEXT416((uint)(int)(short)param_1[2]),
                        0);
      auVar59._4_4_ = uVar8;
      auVar59._0_4_ = uVar8;
      auVar59._8_4_ = uVar8;
      auVar59._12_4_ = uVar8;
      auVar44 = pshuflw(ZEXT416((uint)(int)(short)param_2[2]),ZEXT416((uint)(int)(short)param_2[2]),
                        0);
      auVar61._4_4_ = uVar37;
      auVar61._0_4_ = uVar37;
      auVar61._8_4_ = uVar37;
      auVar61._12_4_ = uVar37;
      auVar60 = pmovzxwq(unaff_XMM9,auVar44);
      auVar44 = pmovzxwq(unaff_XMM6,auVar54);
      auVar59 = pmovzxdq(unaff_XMM7,auVar59);
      auVar61 = pmovzxdq(unaff_XMM10,auVar61);
      do {
        uVar7 = *(ushort *)(lVar9 + uVar16);
        iVar28 = (int)uVar16;
        auVar54._4_4_ = iVar28 + 1;
        auVar54._0_4_ = iVar28;
        auVar54._8_4_ = iVar28;
        auVar54._12_4_ = iVar28;
        auVar54 = pmovzxdq(auVar54,auVar54);
        auVar54 = vpmullq_avx512vl(auVar44,auVar54);
        uVar14 = iVar28 + 2;
        auVar45._0_8_ = (auVar54._0_8_ + auVar59._0_8_) * 4 + -4 + lVar32;
        auVar45._8_8_ = (auVar54._8_8_ + auVar59._8_8_) * 4 + -4 + lVar32;
        *(undefined1 (*) [16])(lVar30 + uVar16 * 8) = auVar45;
        auVar54 = pmovzxbq(auVar45,ZEXT216(uVar7));
        auVar54 = vpmullq_avx512vl(auVar54,auVar60);
        plVar22 = (longlong *)(lVar1 + uVar16 * 8);
        *plVar22 = (auVar54._0_8_ + auVar61._0_8_) * 4 + lVar25;
        plVar22[1] = (auVar54._8_8_ + auVar61._8_8_) * 4 + lVar25;
        uVar29 = iVar28 + 4;
        uVar16 = (ulonglong)uVar29;
        auVar39._4_4_ = iVar28 + 3;
        auVar39._0_4_ = uVar14;
        auVar39._8_4_ = uVar14;
        auVar39._12_4_ = uVar14;
        auVar54 = pmovzxdq(auVar39,auVar39);
        auVar54 = vpmullq_avx512vl(auVar44,auVar54);
        auVar46._0_8_ = (auVar54._0_8_ + auVar59._0_8_) * 4 + -4 + lVar32;
        auVar46._8_8_ = (auVar54._8_8_ + auVar59._8_8_) * 4 + -4 + lVar32;
        *(undefined1 (*) [16])(lVar30 + (ulonglong)uVar14 * 8) = auVar46;
        auVar54 = pmovzxbq(auVar46,ZEXT216(*(ushort *)(lVar9 + (ulonglong)uVar14)));
        auVar54 = vpmullq_avx512vl(auVar54,auVar60);
        auVar51._0_8_ = (auVar54._0_8_ + auVar61._0_8_) * 4 + lVar25;
        auVar51._8_8_ = (auVar54._8_8_ + auVar61._8_8_) * 4 + lVar25;
        *(undefined1 (*) [16])(lVar1 + (ulonglong)uVar14 * 8) = auVar51;
      } while (uVar29 < (uVar15 & 0xfc));
      if (uVar23 <= uVar29) goto LAB_145556b44;
    }
    lVar25 = *(longlong *)(param_4 + 0x50);
    uStack_c0 = lVar25;
    local_b0 = (ulonglong)*(ushort *)(param_2 + 2);
    lVar9 = *param_2;
    lVar32 = (ulonglong)*(ushort *)(param_1 + 2) * 4;
    local_c8 = (ulonglong)uVar37;
    local_d8 = lVar9;
    local_b8 = lVar32;
    lVar10 = *param_1;
    lVar20 = (*(ushort *)(param_1 + 2) * uVar16 + (ulonglong)*(uint *)(param_4 + 0x28)) * 4;
    uVar19 = (ulonglong)(uVar23 - (int)uVar16);
    plVar22 = (longlong *)(lVar1 + uVar16 * 8);
    do {
      lVar17 = lVar10 + -4 + lVar20;
      lVar20 = lVar20 + lVar32;
      *(longlong *)((lVar30 - lVar1) + (longlong)plVar22) = lVar17;
      pbVar2 = (byte *)(uVar16 + lVar25);
      uVar16 = uVar16 + 1;
      *plVar22 = lVar9 + (*pbVar2 * local_b0 + local_c8) * 4;
      uVar19 = uVar19 - 1;
      plVar22 = plVar22 + 1;
      lVar17 = lStack_d0;
      uVar34 = local_e4;
      uVar58 = local_e8;
    } while (uVar19 != 0);
  }
LAB_145556b44:
  uVar37 = local_e0;
  while (uVar37 != 0) {
    uVar37 = uVar37 - 1;
    uVar14 = 0;
    if (uVar23 < 4) {
      if (uVar23 != 0) {
        lVar32 = 0;
        lVar30 = lVar17 - lVar1;
        goto LAB_145556c91;
      }
    }
    else {
      plVar22 = (longlong *)((longlong)&local_e0 + lVar13 + lVar33);
      lVar32 = 0;
      lVar30 = lVar17 - lVar1;
      uVar14 = (uVar23 - 4 >> 2) + 1;
      uVar16 = (ulonglong)uVar14;
      uVar14 = uVar14 * 4;
      fVar49 = (float)(uVar26 & 0xffff) * 1.5258789e-05;
      do {
        pfVar11 = (float *)plVar22[-1];
        fVar55 = *(float *)(*(longlong *)(param_4 + 0x20) + lVar32 * 4);
        fVar56 = *(float *)(*(longlong *)(lVar30 + -8 + (longlong)plVar22) + 4);
        plVar22[-1] = (longlong)(pfVar11 + 1);
        *pfVar11 = (fVar56 - fVar55) * fVar49 + fVar55;
        pfVar11 = (float *)*plVar22;
        fVar55 = *(float *)(*(longlong *)(param_4 + 0x20) + 4 + lVar32 * 4);
        fVar56 = *(float *)(*(longlong *)(lVar30 + (longlong)plVar22) + 4);
        *plVar22 = (longlong)(pfVar11 + 1);
        *pfVar11 = (fVar56 - fVar55) * fVar49 + fVar55;
        pfVar11 = (float *)plVar22[1];
        fVar55 = *(float *)(*(longlong *)(param_4 + 0x20) + 8 + lVar32 * 4);
        fVar56 = *(float *)(*(longlong *)(lVar30 + 8 + (longlong)plVar22) + 4);
        plVar22[1] = (longlong)(pfVar11 + 1);
        *pfVar11 = (fVar56 - fVar55) * fVar49 + fVar55;
        pfVar11 = (float *)plVar22[2];
        fVar55 = *(float *)(*(longlong *)(param_4 + 0x20) + 0xc + lVar32 * 4);
        lVar32 = lVar32 + 4;
        fVar56 = *(float *)(*(longlong *)(lVar30 + 0x10 + (longlong)plVar22) + 4);
        plVar22[2] = (longlong)(pfVar11 + 1);
        plVar22 = plVar22 + 4;
        *pfVar11 = (fVar56 - fVar55) * fVar49 + fVar55;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      lVar17 = lStack_d0;
      if (uVar14 < uVar23) {
LAB_145556c91:
        lVar25 = lVar32 * 4;
        plVar22 = (longlong *)(lVar1 + lVar32 * 8);
        uVar16 = (ulonglong)(uVar23 - uVar14);
        do {
          pfVar11 = (float *)*plVar22;
          fVar49 = *(float *)(lVar25 + *(longlong *)(param_4 + 0x20));
          lVar25 = lVar25 + 4;
          fVar55 = *(float *)(*(longlong *)((longlong)plVar22 + lVar30) + 4);
          *plVar22 = (longlong)(pfVar11 + 1);
          plVar22 = plVar22 + 1;
          *pfVar11 = (fVar55 - fVar49) * (float)(uVar26 & 0xffff) * 1.5258789e-05 + fVar49;
          uVar16 = uVar16 - 1;
          lVar17 = lStack_d0;
        } while (uVar16 != 0);
      }
    }
    uVar26 = uVar58 + uVar34;
    uVar58 = uVar26;
  }
  auVar44._4_4_ = uVar34;
  auVar44._0_4_ = uVar34;
  auVar44._8_4_ = uVar34;
  auVar44._12_4_ = uVar34;
  uVar16 = (ulonglong)((local_dc * 0x10000 - uVar58) + -1 + uVar34) / (ulonglong)uVar34;
  uVar19 = (ulonglong)(uVar27 - local_e0);
  if ((uint)uVar16 <= uVar27 - local_e0) {
    uVar19 = uVar16;
  }
  uVar16 = uVar19 >> 2;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uVar19);
  local_e4 = (uint)uVar16;
  iVar28 = uVar34 * 4;
  uVar26 = uVar34 + uVar58;
  uVar37 = (int)((auVar44._8_8_ & 0xffffffff) * 2) + uVar58;
  uVar14 = uVar34 * 3 + uVar58;
  local_e8 = (int)uVar19 + local_e4 * -4;
  uVar29 = uVar58;
  lVar30 = lStack_d0;
  while (local_e4 != 0) {
    local_e4 = (int)uVar16 - 1;
    uVar38 = uVar58 & 0xffff;
    uVar40 = uVar26 & 0xffff;
    uVar41 = uVar37 & 0xffff;
    uVar42 = uVar14 & 0xffff;
    uVar24 = 0;
    uVar58 = uVar58 + iVar28;
    uVar26 = uVar26 + iVar28;
    uVar37 = uVar37 + iVar28;
    uVar14 = uVar14 + iVar28;
    fVar49 = (float)uVar38 * 1.5258789e-05;
    fVar55 = (float)uVar40 * 1.5258789e-05;
    fVar56 = (float)uVar41 * 1.5258789e-05;
    fVar57 = (float)uVar42 * 1.5258789e-05;
    lStack_d0 = lVar30;
    if (uVar23 < 4) {
      if (uVar23 != 0) {
        local_c8 = 0;
        lVar17 = lVar17 - lVar1;
        goto LAB_145556f50;
      }
LAB_145556fd3:
      if (uVar23 != 0) goto LAB_145556fdd;
    }
    else {
      uVar31 = (ulonglong)(uVar29 >> 0x10);
      uVar36 = (ulonglong)(uVar34 * 3 + uVar29 >> 0x10);
      uVar35 = (ulonglong)(uVar34 * 2 + uVar29 >> 0x10);
      lVar17 = lVar17 - lVar1;
      uVar16 = (ulonglong)(uVar34 + uVar29 >> 0x10);
      plVar22 = (longlong *)((longlong)&local_e0 + lVar13 + lVar33);
      uVar38 = (uVar23 - 4 >> 2) + 1;
      uVar19 = (ulonglong)uVar38;
      uVar24 = uVar38 * 4;
      local_c8 = (ulonglong)uVar38 * 4;
      do {
        lVar30 = *(longlong *)((longlong)plVar22 + lVar17 + -8);
        uVar18 = *(undefined8 *)(lVar30 + uVar16 * 4);
        uVar4 = *(undefined8 *)(lVar30 + uVar31 * 4);
        uVar5 = *(undefined8 *)(lVar30 + uVar35 * 4);
        uVar6 = *(undefined8 *)(lVar30 + uVar36 * 4);
        pfVar11 = (float *)plVar22[-1];
        fVar50 = (float)uVar4;
        fVar53 = (float)uVar18;
        fVar43 = (float)uVar5;
        fVar48 = (float)uVar6;
        *pfVar11 = ((float)((ulonglong)uVar4 >> 0x20) - fVar50) * fVar49 + fVar50;
        pfVar11[1] = ((float)((ulonglong)uVar18 >> 0x20) - fVar53) * fVar55 + fVar53;
        pfVar11[2] = ((float)((ulonglong)uVar5 >> 0x20) - fVar43) * fVar56 + fVar43;
        pfVar11[3] = ((float)((ulonglong)uVar6 >> 0x20) - fVar48) * fVar57 + fVar48;
        lVar30 = *(longlong *)((longlong)plVar22 + lVar17);
        uVar18 = *(undefined8 *)(lVar30 + uVar16 * 4);
        uVar4 = *(undefined8 *)(lVar30 + uVar31 * 4);
        uVar5 = *(undefined8 *)(lVar30 + uVar35 * 4);
        uVar6 = *(undefined8 *)(lVar30 + uVar36 * 4);
        pfVar11 = (float *)*plVar22;
        fVar50 = (float)uVar4;
        fVar53 = (float)uVar18;
        fVar43 = (float)uVar5;
        fVar48 = (float)uVar6;
        *pfVar11 = ((float)((ulonglong)uVar4 >> 0x20) - fVar50) * fVar49 + fVar50;
        pfVar11[1] = ((float)((ulonglong)uVar18 >> 0x20) - fVar53) * fVar55 + fVar53;
        pfVar11[2] = ((float)((ulonglong)uVar5 >> 0x20) - fVar43) * fVar56 + fVar43;
        pfVar11[3] = ((float)((ulonglong)uVar6 >> 0x20) - fVar48) * fVar57 + fVar48;
        lVar30 = *(longlong *)((longlong)plVar22 + lVar17 + 8);
        uVar18 = *(undefined8 *)(lVar30 + uVar16 * 4);
        uVar4 = *(undefined8 *)(lVar30 + uVar31 * 4);
        uVar5 = *(undefined8 *)(lVar30 + uVar35 * 4);
        uVar6 = *(undefined8 *)(lVar30 + uVar36 * 4);
        pfVar11 = (float *)plVar22[1];
        fVar50 = (float)uVar4;
        fVar53 = (float)uVar18;
        fVar43 = (float)uVar5;
        fVar48 = (float)uVar6;
        *pfVar11 = ((float)((ulonglong)uVar4 >> 0x20) - fVar50) * fVar49 + fVar50;
        pfVar11[1] = ((float)((ulonglong)uVar18 >> 0x20) - fVar53) * fVar55 + fVar53;
        pfVar11[2] = ((float)((ulonglong)uVar5 >> 0x20) - fVar43) * fVar56 + fVar43;
        pfVar11[3] = ((float)((ulonglong)uVar6 >> 0x20) - fVar48) * fVar57 + fVar48;
        lVar30 = *(longlong *)((longlong)plVar22 + lVar17 + 0x10);
        uVar18 = *(undefined8 *)(lVar30 + uVar16 * 4);
        uVar4 = *(undefined8 *)(lVar30 + uVar31 * 4);
        uVar5 = *(undefined8 *)(lVar30 + uVar35 * 4);
        uVar6 = *(undefined8 *)(lVar30 + uVar36 * 4);
        plVar3 = plVar22 + 2;
        plVar22 = plVar22 + 4;
        fVar50 = (float)uVar4;
        fVar53 = (float)uVar18;
        fVar43 = (float)uVar5;
        fVar48 = (float)uVar6;
        auVar60._0_4_ = ((float)((ulonglong)uVar4 >> 0x20) - fVar50) * fVar49 + fVar50;
        auVar60._4_4_ = ((float)((ulonglong)uVar18 >> 0x20) - fVar53) * fVar55 + fVar53;
        auVar60._8_4_ = ((float)((ulonglong)uVar5 >> 0x20) - fVar43) * fVar56 + fVar43;
        auVar60._12_4_ = ((float)((ulonglong)uVar6 >> 0x20) - fVar48) * fVar57 + fVar48;
        *(undefined1 (*) [16])*plVar3 = auVar60;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      if (uVar24 < uVar23) {
LAB_145556f50:
        puVar21 = (undefined8 *)(lVar1 + local_c8 * 8);
        uVar16 = (ulonglong)(uVar23 - uVar24);
        do {
          lVar30 = *(longlong *)(lVar17 + (longlong)puVar21);
          uVar18 = *(undefined8 *)(lVar30 + (ulonglong)(uVar34 + uVar29 >> 0x10) * 4);
          uVar4 = *(undefined8 *)(lVar30 + (ulonglong)(uVar29 >> 0x10) * 4);
          uVar5 = *(undefined8 *)(lVar30 + (ulonglong)(uVar34 * 2 + uVar29 >> 0x10) * 4);
          uVar6 = *(undefined8 *)(lVar30 + (ulonglong)(uVar34 * 3 + uVar29 >> 0x10) * 4);
          pauVar12 = (undefined1 (*) [16])*puVar21;
          puVar21 = puVar21 + 1;
          fVar50 = (float)uVar4;
          fVar53 = (float)uVar18;
          fVar43 = (float)uVar5;
          fVar48 = (float)uVar6;
          auVar52._0_4_ = ((float)((ulonglong)uVar4 >> 0x20) - fVar50) * fVar49 + fVar50;
          auVar52._4_4_ = ((float)((ulonglong)uVar18 >> 0x20) - fVar53) * fVar55 + fVar53;
          auVar52._8_4_ = ((float)((ulonglong)uVar5 >> 0x20) - fVar43) * fVar56 + fVar43;
          auVar52._12_4_ = ((float)((ulonglong)uVar6 >> 0x20) - fVar48) * fVar57 + fVar48;
          *pauVar12 = auVar52;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        goto LAB_145556fd3;
      }
LAB_145556fdd:
      uVar16 = 0;
      if (7 < uVar23) {
        uVar16 = 0;
        uVar24 = 4;
        do {
          plVar22 = (longlong *)(lVar1 + uVar16 * 8);
          lVar30 = plVar22[1];
          lVar17 = (longlong)DAT_14996b6f0;
          lVar32 = DAT_14996b6f0._8_8_;
          plVar3 = (longlong *)(lVar1 + uVar16 * 8);
          *plVar3 = lVar17 + *plVar22;
          plVar3[1] = lVar32 + lVar30;
          uVar40 = (int)uVar16 + 8;
          uVar16 = (ulonglong)uVar40;
          plVar22 = (longlong *)(lVar1 + (ulonglong)(uVar24 - 2) * 8);
          lVar30 = plVar22[1];
          plVar3 = (longlong *)(lVar1 + (ulonglong)(uVar24 - 2) * 8);
          *plVar3 = lVar17 + *plVar22;
          plVar3[1] = lVar32 + lVar30;
          plVar22 = (longlong *)(lVar1 + (ulonglong)uVar24 * 8);
          lVar30 = plVar22[1];
          plVar3 = (longlong *)(lVar1 + (ulonglong)uVar24 * 8);
          *plVar3 = *plVar22 + lVar17;
          plVar3[1] = lVar30 + lVar32;
          uVar38 = uVar24 + 2;
          uVar24 = uVar24 + 8;
          auVar61 = *(undefined1 (*) [16])(lVar1 + (ulonglong)uVar38 * 8);
          auVar47._0_8_ = lVar17 + auVar61._0_8_;
          auVar47._8_8_ = lVar32 + auVar61._8_8_;
          *(undefined1 (*) [16])(lVar1 + (ulonglong)uVar38 * 8) = auVar47;
        } while (uVar40 < (uVar15 & 0xf8));
        if (uVar23 <= uVar40) goto LAB_14555708a;
      }
      plVar22 = (longlong *)(lVar1 + uVar16 * 8);
      uVar16 = (ulonglong)(uVar23 - (int)uVar16);
      do {
        *plVar22 = *plVar22 + 0x10;
        plVar22 = plVar22 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
LAB_14555708a:
    uVar16 = (ulonglong)local_e4;
    uVar29 = uVar29 + uVar34 * 4;
    lVar17 = lStack_d0;
    lVar30 = lStack_d0;
  }
  uVar26 = local_e8;
  while (uVar26 != 0) {
    uVar15 = uVar29 >> 0x10;
    uVar26 = uVar26 - 1;
    uVar37 = 0;
    if (uVar23 < 4) {
      if (uVar23 != 0) {
        local_c8 = 0;
        uVar58 = uVar15 + 1;
        fVar49 = (float)(uVar29 & 0xffff);
        lVar17 = lVar30 - lVar1;
        goto LAB_1455571df;
      }
    }
    else {
      uVar19 = (ulonglong)uVar15;
      uVar16 = (ulonglong)local_d8 >> 0x20;
      local_d8 = CONCAT44((int)uVar16,uVar15 + 1);
      fVar49 = (float)(uVar29 & 0xffff);
      uVar16 = (ulonglong)(uVar15 + 1);
      lVar17 = lVar30 - lVar1;
      plVar22 = (longlong *)((longlong)&local_e0 + lVar13 + lVar33);
      uVar58 = (uVar23 - 4 >> 2) + 1;
      uVar31 = (ulonglong)uVar58;
      uVar37 = uVar58 * 4;
      fVar55 = fVar49 * 1.5258789e-05;
      local_c8 = (ulonglong)uVar58 * 4;
      do {
        lVar32 = *(longlong *)((longlong)plVar22 + lVar17 + -8);
        pfVar11 = (float *)plVar22[-1];
        fVar56 = *(float *)(lVar32 + uVar16 * 4);
        fVar57 = *(float *)(lVar32 + uVar19 * 4);
        fVar43 = *(float *)(lVar32 + uVar19 * 4);
        plVar22[-1] = (longlong)(pfVar11 + 1);
        lVar32 = *(longlong *)((longlong)plVar22 + lVar17);
        *pfVar11 = (fVar56 - fVar57) * fVar55 + fVar43;
        pfVar11 = (float *)*plVar22;
        fVar56 = *(float *)(lVar32 + uVar16 * 4);
        fVar57 = *(float *)(lVar32 + uVar19 * 4);
        fVar43 = *(float *)(lVar32 + uVar19 * 4);
        *plVar22 = (longlong)(pfVar11 + 1);
        lVar32 = *(longlong *)((longlong)plVar22 + lVar17 + 8);
        *pfVar11 = (fVar56 - fVar57) * fVar55 + fVar43;
        pfVar11 = (float *)plVar22[1];
        fVar56 = *(float *)(lVar32 + uVar16 * 4);
        fVar57 = *(float *)(lVar32 + uVar19 * 4);
        fVar43 = *(float *)(lVar32 + uVar19 * 4);
        plVar22[1] = (longlong)(pfVar11 + 1);
        lVar32 = *(longlong *)((longlong)plVar22 + lVar17 + 0x10);
        *pfVar11 = (fVar56 - fVar57) * fVar55 + fVar43;
        pfVar11 = (float *)plVar22[2];
        fVar56 = *(float *)(lVar32 + uVar16 * 4);
        fVar57 = *(float *)(lVar32 + uVar19 * 4);
        fVar43 = *(float *)(lVar32 + uVar19 * 4);
        plVar22[2] = (longlong)(pfVar11 + 1);
        plVar22 = plVar22 + 4;
        *pfVar11 = (fVar56 - fVar57) * fVar55 + fVar43;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
      if (uVar37 < uVar23) {
        uVar58 = (uint)local_d8;
LAB_1455571df:
        plVar22 = (longlong *)(lVar1 + local_c8 * 8);
        uVar16 = (ulonglong)(uVar23 - uVar37);
        do {
          lVar32 = *(longlong *)((longlong)plVar22 + lVar17);
          pfVar11 = (float *)*plVar22;
          fVar55 = *(float *)(lVar32 + (ulonglong)uVar58 * 4);
          fVar56 = *(float *)(lVar32 + (ulonglong)uVar15 * 4);
          fVar57 = *(float *)(lVar32 + (ulonglong)uVar15 * 4);
          *plVar22 = (longlong)(pfVar11 + 1);
          plVar22 = plVar22 + 1;
          *pfVar11 = (fVar55 - fVar56) * fVar49 * 1.5258789e-05 + fVar57;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    uVar29 = uVar29 + uVar34;
  }
  uVar34 = local_dc;
  if (uVar29 >> 0x10 < local_dc) {
    uVar34 = uVar29 >> 0x10;
  }
  if (uVar34 != 0) {
    uVar26 = 0;
    if (uVar23 < 4) {
      if (uVar23 == 0) goto LAB_14555739a;
      lVar30 = 0;
    }
    else {
      uVar16 = (ulonglong)uVar34;
      lVar33 = 2;
      lVar30 = 0;
      uVar26 = (uVar23 - 4 >> 2) + 1;
      uVar19 = (ulonglong)uVar26;
      uVar26 = uVar26 * 4;
      do {
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar30 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar30 + uVar16) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 4 + lVar30 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * (lVar33 + -1) + uVar16) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 8 + lVar30 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar33 + uVar16) * 4);
        lVar1 = lVar33 + 1;
        lVar33 = lVar33 + 4;
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 0xc + lVar30 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar1 + uVar16) * 4);
        lVar30 = lVar30 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      if (uVar23 <= uVar26) goto LAB_14555739a;
    }
    uVar16 = (ulonglong)(uVar23 - uVar26);
    do {
      *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar30 * 4) =
           *(undefined4 *)
            (*param_1 + -4 +
            ((ulonglong)*(uint *)(param_4 + 0x28) +
            (ulonglong)*(ushort *)(param_1 + 2) * lVar30 + (ulonglong)uVar34) * 4);
      lVar30 = lVar30 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
LAB_14555739a:
  local_e0 = (int)uStack_c0 + local_e0;
  *(uint *)(param_4 + 0x30) = uVar29 + uVar34 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar34;
  *(short *)((longlong)param_2 + 0x12) = (short)local_e0 + *(short *)(param_4 + 0x2c);
  if (uVar34 == local_dc) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar34;
  }
  if (local_e0 == uVar27) {
    uVar18 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + local_e0;
    uVar18 = 0x2b;
  }
  return uVar18;
}



// FUNCTION 145557430 FUN_145557430 body=580 status=ok
// SIG undefined FUN_145557430(void)

undefined8 FUN_145557430(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  float *pfVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar19 = *(uint *)(param_4 + 0x30);
  uVar11 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar20 = *(uint *)(param_4 + 0x40);
  psVar1 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 2);
  uVar16 = (ulonglong)(uVar19 >> 0x10);
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar12 = *(int *)(param_4 + 0x3c);
  iVar14 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar5 = *(int *)(param_4 + 0x34) * 0x400;
  psVar4 = *(short **)(param_4 + 0x20);
  uVar13 = uVar19 & 0xffff;
  iVar21 = (int)*psVar4;
  uVar10 = (ulonglong)(0x400 - iVar12) / (ulonglong)uVar20;
  pfVar17 = pfVar2;
  if (uVar19 >> 0x10 == 0) {
    if (uVar11 < (uint)uVar10) {
      uVar10 = (ulonglong)uVar11;
    }
    uVar9 = iVar14 * iVar12 + iVar5;
    do {
      iVar7 = (int)uVar10;
      uVar10 = (ulonglong)(iVar7 - 1);
      if (iVar7 == 0) break;
      uVar9 = uVar9 + iVar14 * uVar20;
      iVar12 = iVar12 + uVar20;
      iVar7 = (*psVar1 - iVar21) * uVar13;
      uVar19 = uVar19 + (uVar9 >> 10);
      uVar13 = uVar19 & 0xffff;
      uVar16 = (ulonglong)(uVar19 >> 0x10);
      *pfVar17 = (float)(iVar7 + iVar21 * 0x10000) * 4.656613e-10;
      pfVar17 = pfVar17 + 1;
    } while (uVar19 >> 0x10 == 0);
  }
  uVar9 = uVar3 - 1;
  uVar8 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar11 * 4 - (longlong)pfVar17)) >> 2;
  uVar10 = (ulonglong)(0x400 - iVar12) / (ulonglong)uVar20;
  if ((uint)uVar16 <= uVar9) {
    if ((uint)uVar8 < (uint)uVar10) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 & 0xffffffff;
    uVar15 = iVar14 * iVar12 + iVar5;
    do {
      iVar5 = (int)uVar10;
      uVar10 = (ulonglong)(iVar5 - 1);
      if (iVar5 == 0) break;
      lVar18 = uVar16 - 1;
      uVar15 = uVar15 + iVar14 * uVar20;
      iVar12 = iVar12 + uVar20;
      iVar5 = ((int)psVar1[(ulonglong)((int)uVar16 + 1) - 1] - (int)psVar1[lVar18]) * uVar13;
      uVar19 = uVar19 + (uVar15 >> 10);
      uVar13 = uVar19 & 0xffff;
      uVar16 = (ulonglong)(uVar19 >> 0x10);
      *pfVar17 = (float)(iVar5 + psVar1[lVar18] * 0x10000) * 4.656613e-10;
      pfVar17 = pfVar17 + 1;
    } while (uVar19 >> 0x10 <= uVar9);
  }
  uVar20 = (uint)uVar3;
  *(int *)(param_4 + 0x3c) = iVar12;
  uVar10 = (ulonglong)uVar20;
  if ((uint)uVar16 < uVar20) {
    uVar10 = uVar16;
  }
  uVar13 = (uint)uVar10;
  if (uVar13 != 0) {
    *psVar4 = psVar1[uVar10 - 1];
  }
  lVar18 = (longlong)pfVar17 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar19 + uVar13 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar18 + *(short *)(param_4 + 0x2c);
  if (uVar13 == uVar20) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar13;
  }
  uVar19 = (uint)lVar18;
  if (uVar19 == uVar11) {
    uVar6 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar19;
    uVar6 = 0x2b;
  }
  return uVar6;
}



// FUNCTION 145557680 FUN_145557680 body=735 status=ok
// SIG undefined FUN_145557680(void)

undefined8 FUN_145557680(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  float *pfVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar6 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar20 = param_3 - *(uint *)(param_4 + 0x2c);
  iVar11 = *(int *)(param_4 + 0x3c);
  uVar13 = *(uint *)(param_4 + 0x40);
  uVar18 = *(uint *)(param_4 + 0x30);
  uVar12 = uVar18 >> 0x10;
  uVar21 = uVar18 & 0xffff;
  psVar1 = (short *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  iVar10 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar8 = *(int *)(param_4 + 0x34) * 0x400;
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  psVar5 = *(short **)(param_4 + 0x20);
  uVar17 = (ulonglong)(0x400 - iVar11) / (ulonglong)uVar13;
  pfVar14 = pfVar2;
  if (uVar18 >> 0x10 == 0) {
    if (uVar20 < (uint)uVar17) {
      uVar17 = (ulonglong)uVar20;
    }
    uVar9 = iVar10 * iVar11 + iVar8;
    do {
      iVar16 = (int)uVar17;
      uVar17 = (ulonglong)(iVar16 - 1);
      if (iVar16 == 0) break;
      uVar9 = uVar9 + iVar10 * uVar13;
      iVar11 = iVar11 + uVar13;
      sVar3 = psVar5[1];
      sVar4 = psVar1[1];
      *pfVar14 = (float)(int)(((int)*psVar1 - (int)*psVar5) * uVar21 + *psVar5 * 0x10000) *
                 4.656613e-10;
      pfVar14[*(ushort *)(param_2 + 2)] =
           (float)(int)(((int)sVar4 - (int)sVar3) * uVar21 + sVar3 * 0x10000) * 4.656613e-10;
      pfVar14 = pfVar14 + 1;
      uVar18 = uVar18 + (uVar9 >> 10);
      uVar21 = uVar18 & 0xffff;
      uVar12 = uVar18 >> 0x10;
    } while (uVar18 >> 0x10 == 0);
  }
  uVar19 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar20 * 4 - (longlong)pfVar14)) >> 2;
  uVar17 = (ulonglong)(0x400 - iVar11) / (ulonglong)uVar13;
  if (uVar12 <= uVar6 - 1) {
    if ((uint)uVar19 < (uint)uVar17) {
      uVar17 = uVar19;
    }
    uVar17 = uVar17 & 0xffffffff;
    uVar9 = iVar10 * iVar11 + iVar8;
    do {
      iVar8 = (int)uVar17;
      uVar17 = (ulonglong)(iVar8 - 1);
      if (iVar8 == 0) break;
      uVar12 = uVar12 * 2;
      uVar9 = uVar9 + iVar10 * uVar13;
      iVar11 = iVar11 + uVar13;
      sVar3 = psVar1[(ulonglong)(uVar12 + 1) - 2];
      sVar4 = psVar1[(ulonglong)(uVar12 + 3) - 2];
      *pfVar14 = (float)(int)(((int)psVar1[(ulonglong)(uVar12 + 2) - 2] -
                              (int)psVar1[(ulonglong)uVar12 - 2]) * uVar21 +
                             psVar1[(ulonglong)uVar12 - 2] * 0x10000) * 4.656613e-10;
      pfVar14[*(ushort *)(param_2 + 2)] =
           (float)(int)(((int)sVar4 - (int)sVar3) * uVar21 + sVar3 * 0x10000) * 4.656613e-10;
      pfVar14 = pfVar14 + 1;
      uVar18 = uVar18 + (uVar9 >> 10);
      uVar21 = uVar18 & 0xffff;
      uVar12 = uVar18 >> 0x10;
    } while (uVar12 <= uVar6 - 1);
  }
  *(int *)(param_4 + 0x3c) = iVar11;
  uVar13 = uVar6;
  if (uVar12 < uVar6) {
    uVar13 = uVar12;
  }
  if (uVar13 != 0) {
    *psVar5 = psVar1[(ulonglong)(uVar13 * 2) - 2];
    *(short *)(*(longlong *)(param_4 + 0x20) + 2) = psVar1[(ulonglong)(uVar13 * 2 + 1) - 2];
  }
  lVar15 = (longlong)pfVar14 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar18 + uVar13 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar13;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar15 + *(short *)(param_4 + 0x2c);
  if (uVar13 == uVar6) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar13;
  }
  uVar13 = (uint)lVar15;
  if (uVar13 == uVar20) {
    uVar7 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar13;
    uVar7 = 0x2b;
  }
  return uVar7;
}



// FUNCTION 145557960 FUN_145557960 body=569 status=ok
// SIG undefined FUN_145557960(void)

undefined8 FUN_145557960(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  float *pfVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  
  uVar6 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar20 = param_3 - *(uint *)(param_4 + 0x2c);
  iVar13 = *(int *)(param_4 + 0x3c);
  uVar12 = *(uint *)(param_4 + 0x40);
  uVar19 = *(uint *)(param_4 + 0x30);
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  uVar16 = (ulonglong)(uVar19 >> 0x10);
  uVar14 = uVar19 & 0xffff;
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar15 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar7 = *(int *)(param_4 + 0x34) * 0x400;
  pfVar4 = *(float **)(param_4 + 0x20);
  fVar3 = *pfVar4;
  uVar10 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar12;
  pfVar17 = pfVar2;
  if (uVar19 >> 0x10 == 0) {
    if (uVar20 < (uint)uVar10) {
      uVar10 = (ulonglong)uVar20;
    }
    uVar11 = iVar15 * iVar13 + iVar7;
    do {
      iVar9 = (int)uVar10;
      uVar10 = (ulonglong)(iVar9 - 1);
      if (iVar9 == 0) break;
      uVar11 = uVar11 + iVar15 * uVar12;
      uVar21 = (ulonglong)uVar14;
      iVar13 = iVar13 + uVar12;
      uVar19 = uVar19 + (uVar11 >> 10);
      uVar14 = uVar19 & 0xffff;
      uVar16 = (ulonglong)(uVar19 >> 0x10);
      *pfVar17 = (*pfVar1 - fVar3) * (float)uVar21 * 1.5258789e-05 + fVar3;
      pfVar17 = pfVar17 + 1;
    } while (uVar19 >> 0x10 == 0);
  }
  uVar10 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar12;
  uVar21 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar20 * 4 - (longlong)pfVar17)) >> 2;
  if ((uint)uVar16 <= uVar6 - 1) {
    if ((uint)uVar21 < (uint)uVar10) {
      uVar10 = uVar21;
    }
    uVar10 = uVar10 & 0xffffffff;
    uVar11 = iVar15 * iVar13 + iVar7;
    do {
      iVar7 = (int)uVar10;
      uVar10 = (ulonglong)(iVar7 - 1);
      if (iVar7 == 0) break;
      iVar7 = (int)uVar16;
      uVar11 = uVar11 + iVar15 * uVar12;
      lVar18 = uVar16 - 1;
      uVar21 = (ulonglong)uVar14;
      iVar13 = iVar13 + uVar12;
      uVar19 = uVar19 + (uVar11 >> 10);
      uVar14 = uVar19 & 0xffff;
      lVar5 = uVar16 - 1;
      uVar16 = (ulonglong)(uVar19 >> 0x10);
      *pfVar17 = (pfVar1[(ulonglong)(iVar7 + 1) - 1] - pfVar1[lVar18]) * (float)uVar21 *
                 1.5258789e-05 + pfVar1[lVar5];
      pfVar17 = pfVar17 + 1;
    } while (uVar19 >> 0x10 <= uVar6 - 1);
  }
  *(int *)(param_4 + 0x3c) = iVar13;
  uVar10 = (ulonglong)uVar6;
  if ((uint)uVar16 < uVar6) {
    uVar10 = uVar16;
  }
  uVar12 = (uint)uVar10;
  if (uVar12 != 0) {
    *pfVar4 = pfVar1[uVar10 - 1];
  }
  lVar18 = (longlong)pfVar17 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar19 + uVar12 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar18 + *(short *)(param_4 + 0x2c);
  if (uVar12 == uVar6) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar12;
  }
  uVar12 = (uint)lVar18;
  if (uVar12 == uVar20) {
    uVar8 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar12;
    uVar8 = 0x2b;
  }
  return uVar8;
}



// FUNCTION 145557ba0 FUN_145557ba0 body=797 status=ok
// SIG undefined FUN_145557ba0(void)

undefined8 FUN_145557ba0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  
  uVar23 = *(uint *)(param_4 + 0x30);
  uVar8 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar16 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar21 = *(uint *)(param_4 + 0x40);
  uVar20 = (ulonglong)(uVar23 >> 0x10);
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  uVar24 = uVar23 & 0xffff;
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar17 = *(int *)(param_4 + 0x3c);
  pfVar3 = pfVar1 + *(ushort *)(param_1 + 2);
  pfVar25 = pfVar2 + *(ushort *)(param_2 + 2);
  iVar15 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar9 = *(int *)(param_4 + 0x34) * 0x400;
  fVar4 = **(float **)(param_4 + 0x20);
  fVar5 = (*(float **)(param_4 + 0x20))[1];
  uVar22 = (ulonglong)(0x400 - iVar17) / (ulonglong)uVar21;
  if (uVar16 < (uint)uVar22) {
    uVar22 = (ulonglong)uVar16;
  }
  pfVar18 = pfVar2;
  if (uVar23 >> 0x10 == 0) {
    uVar14 = iVar15 * iVar17 + iVar9;
    do {
      iVar12 = (int)uVar22;
      uVar22 = (ulonglong)(iVar12 - 1);
      if (iVar12 == 0) break;
      fVar6 = *pfVar3;
      uVar13 = (ulonglong)uVar24;
      uVar14 = uVar14 + iVar15 * uVar21;
      iVar17 = iVar17 + uVar21;
      uVar23 = uVar23 + (uVar14 >> 10);
      uVar24 = uVar23 & 0xffff;
      uVar20 = (ulonglong)(uVar23 >> 0x10);
      *pfVar18 = (*pfVar1 - fVar4) * (float)uVar13 * 1.5258789e-05 + fVar4;
      *pfVar25 = (float)uVar13 * 1.5258789e-05 * (fVar6 - fVar5) + fVar5;
      pfVar18 = pfVar18 + 1;
      pfVar25 = pfVar25 + 1;
    } while (uVar23 >> 0x10 == 0);
  }
  uVar22 = (ulonglong)(0x400 - iVar17) / (ulonglong)uVar21;
  uVar13 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar16 * 4 - (longlong)pfVar18)) >> 2;
  if ((uint)uVar20 <= uVar8 - 1) {
    if ((uint)uVar13 < (uint)uVar22) {
      uVar22 = uVar13;
    }
    uVar22 = uVar22 & 0xffffffff;
    uVar14 = iVar15 * iVar17 + iVar9;
    do {
      iVar9 = (int)uVar22;
      uVar22 = (ulonglong)(iVar9 - 1);
      if (iVar9 == 0) break;
      fVar4 = pfVar3[uVar20 - 1];
      uVar10 = (int)uVar20 + 1;
      fVar5 = pfVar3[(ulonglong)uVar10 - 1];
      uVar13 = (ulonglong)uVar24;
      uVar14 = uVar14 + iVar15 * uVar21;
      iVar17 = iVar17 + uVar21;
      lVar19 = uVar20 - 1;
      uVar23 = uVar23 + (uVar14 >> 10);
      uVar24 = uVar23 & 0xffff;
      lVar7 = uVar20 - 1;
      uVar20 = (ulonglong)(uVar23 >> 0x10);
      *pfVar18 = (pfVar1[(ulonglong)uVar10 - 1] - pfVar1[lVar19]) * (float)uVar13 * 1.5258789e-05 +
                 pfVar1[lVar7];
      *pfVar25 = (float)uVar13 * 1.5258789e-05 * (fVar5 - fVar4) + fVar4;
      pfVar18 = pfVar18 + 1;
      pfVar25 = pfVar25 + 1;
    } while (uVar23 >> 0x10 <= uVar8 - 1);
  }
  *(int *)(param_4 + 0x3c) = iVar17;
  uVar22 = (ulonglong)uVar8;
  if ((uint)uVar20 < uVar8) {
    uVar22 = uVar20;
  }
  uVar21 = (uint)uVar22;
  if (uVar21 != 0) {
    **(float **)(param_4 + 0x20) = pfVar1[uVar22 - 1];
    *(float *)(*(longlong *)(param_4 + 0x20) + 4) = pfVar3[uVar22 - 1];
  }
  lVar19 = (longlong)pfVar18 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar23 + uVar21 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar22;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar19 + *(short *)(param_4 + 0x2c);
  if (uVar21 == uVar8) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar21;
  }
  uVar23 = (uint)lVar19;
  if (uVar23 == uVar16) {
    uVar11 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar23;
    uVar11 = 0x2b;
  }
  return uVar11;
}



// FUNCTION 145557ec0 FUN_145557ec0 body=360 status=ok
// SIG undefined FUN_145557ec0(void)

undefined8 FUN_145557ec0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  float *pfVar9;
  int iVar10;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x12);
  uVar8 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar4 = (uint)uVar1;
  if (uVar8 < uVar1) {
    uVar4 = uVar8;
  }
  pauVar7 = (undefined1 (*) [16])(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 2);
  pfVar9 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar10 = uVar4 - (uVar4 & 0xffffffe0);
  puVar5 = *pauVar7;
  for (; pauVar7 < (undefined1 (*) [16])(puVar5 + (ulonglong)(uVar4 & 0xffffffe0) * 2);
      pauVar7 = pauVar7 + 4) {
    auVar2 = vpmovsxwd_avx2(*pauVar7);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar3 = vpmovsxwd_avx2(pauVar7[1]);
    *pfVar9 = auVar2._0_4_ * 3.0517578e-05;
    pfVar9[1] = auVar2._4_4_ * 3.0517578e-05;
    pfVar9[2] = auVar2._8_4_ * 3.0517578e-05;
    pfVar9[3] = auVar2._12_4_ * 3.0517578e-05;
    pfVar9[4] = auVar2._16_4_ * 3.0517578e-05;
    pfVar9[5] = auVar2._20_4_ * 3.0517578e-05;
    pfVar9[6] = auVar2._24_4_ * 3.0517578e-05;
    pfVar9[7] = auVar2._28_4_ * 3.0517578e-05;
    auVar2 = vcvtdq2ps_avx(auVar3);
    auVar3 = vpmovsxwd_avx2(pauVar7[2]);
    pfVar9[8] = auVar2._0_4_ * 3.0517578e-05;
    pfVar9[9] = auVar2._4_4_ * 3.0517578e-05;
    pfVar9[10] = auVar2._8_4_ * 3.0517578e-05;
    pfVar9[0xb] = auVar2._12_4_ * 3.0517578e-05;
    pfVar9[0xc] = auVar2._16_4_ * 3.0517578e-05;
    pfVar9[0xd] = auVar2._20_4_ * 3.0517578e-05;
    pfVar9[0xe] = auVar2._24_4_ * 3.0517578e-05;
    pfVar9[0xf] = auVar2._28_4_ * 3.0517578e-05;
    auVar2 = vcvtdq2ps_avx(auVar3);
    auVar3 = vpmovsxwd_avx2(pauVar7[3]);
    pfVar9[0x10] = auVar2._0_4_ * 3.0517578e-05;
    pfVar9[0x11] = auVar2._4_4_ * 3.0517578e-05;
    pfVar9[0x12] = auVar2._8_4_ * 3.0517578e-05;
    pfVar9[0x13] = auVar2._12_4_ * 3.0517578e-05;
    pfVar9[0x14] = auVar2._16_4_ * 3.0517578e-05;
    pfVar9[0x15] = auVar2._20_4_ * 3.0517578e-05;
    pfVar9[0x16] = auVar2._24_4_ * 3.0517578e-05;
    pfVar9[0x17] = auVar2._28_4_ * 3.0517578e-05;
    auVar2 = vcvtdq2ps_avx(auVar3);
    pfVar9[0x18] = auVar2._0_4_ * 3.0517578e-05;
    pfVar9[0x19] = auVar2._4_4_ * 3.0517578e-05;
    pfVar9[0x1a] = auVar2._8_4_ * 3.0517578e-05;
    pfVar9[0x1b] = auVar2._12_4_ * 3.0517578e-05;
    pfVar9[0x1c] = auVar2._16_4_ * 3.0517578e-05;
    pfVar9[0x1d] = auVar2._20_4_ * 3.0517578e-05;
    pfVar9[0x1e] = auVar2._24_4_ * 3.0517578e-05;
    pfVar9[0x1f] = auVar2._28_4_ * 3.0517578e-05;
    pfVar9 = pfVar9 + 0x20;
  }
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = *pauVar7;
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 2);
    *pfVar9 = (float)(int)*(short *)puVar5 * 3.0517578e-05;
    pfVar9 = pfVar9 + 1;
  }
  **(undefined2 **)(param_4 + 0x20) = *(undefined2 *)(pauVar7[-1] + 0xe);
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar4;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar4 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar4 == uVar1) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar4;
  }
  if (uVar4 == uVar8) {
    uVar6 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar4;
    uVar6 = 0x2b;
  }
  return uVar6;
}



// FUNCTION 145558030 FUN_145558030 body=629 status=ok
// SIG undefined FUN_145558030(void)

undefined8 FUN_145558030(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  ushort uVar2;
  short sVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  float *pfVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar11 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar10 = (uint)uVar2;
  if (uVar11 < uVar2) {
    uVar10 = uVar11;
  }
  pauVar12 = (undefined1 (*) [32])(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  pfVar13 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  lVar9 = (longlong)(int)((uVar10 - 1) * 2);
  **(undefined2 **)(param_4 + 0x20) = *(undefined2 *)(*pauVar12 + lVar9 * 2);
  *(undefined2 *)(*(longlong *)(param_4 + 0x20) + 2) = *(undefined2 *)(*pauVar12 + lVar9 * 2 + 2);
  uVar7 = uVar10 + (uVar10 >> 5) * -0x20;
  uVar8 = uVar7 & 7;
  puVar4 = *pauVar12;
  uVar6 = (ulonglong)*(ushort *)(param_2 + 2);
  for (; pauVar12 < (undefined1 (*) [32])(puVar4 + (ulonglong)((uVar10 >> 5) << 6) * 2);
      pauVar12 = pauVar12 + 4) {
    auVar15 = *pauVar12;
    auVar14 = vpslld_avx2(auVar15,0x10);
    auVar14 = vpsrad_avx2(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    *pfVar13 = auVar14._0_4_ * 3.0517578e-05;
    pfVar13[1] = auVar14._4_4_ * 3.0517578e-05;
    pfVar13[2] = auVar14._8_4_ * 3.0517578e-05;
    pfVar13[3] = auVar14._12_4_ * 3.0517578e-05;
    pfVar13[4] = auVar14._16_4_ * 3.0517578e-05;
    pfVar13[5] = auVar14._20_4_ * 3.0517578e-05;
    pfVar13[6] = auVar14._24_4_ * 3.0517578e-05;
    pfVar13[7] = auVar14._28_4_ * 3.0517578e-05;
    auVar14 = vpsrad_avx2(auVar15,0x10);
    auVar15 = pauVar12[1];
    auVar14 = vcvtdq2ps_avx(auVar14);
    pfVar1 = pfVar13 + uVar6;
    *pfVar1 = auVar14._0_4_ * 3.0517578e-05;
    pfVar1[1] = auVar14._4_4_ * 3.0517578e-05;
    pfVar1[2] = auVar14._8_4_ * 3.0517578e-05;
    pfVar1[3] = auVar14._12_4_ * 3.0517578e-05;
    pfVar1[4] = auVar14._16_4_ * 3.0517578e-05;
    pfVar1[5] = auVar14._20_4_ * 3.0517578e-05;
    pfVar1[6] = auVar14._24_4_ * 3.0517578e-05;
    pfVar1[7] = auVar14._28_4_ * 3.0517578e-05;
    auVar14 = vpslld_avx2(auVar15,0x10);
    auVar14 = vpsrad_avx2(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    pfVar13[8] = auVar14._0_4_ * 3.0517578e-05;
    pfVar13[9] = auVar14._4_4_ * 3.0517578e-05;
    pfVar13[10] = auVar14._8_4_ * 3.0517578e-05;
    pfVar13[0xb] = auVar14._12_4_ * 3.0517578e-05;
    pfVar13[0xc] = auVar14._16_4_ * 3.0517578e-05;
    pfVar13[0xd] = auVar14._20_4_ * 3.0517578e-05;
    pfVar13[0xe] = auVar14._24_4_ * 3.0517578e-05;
    pfVar13[0xf] = auVar14._28_4_ * 3.0517578e-05;
    auVar14 = vpsrad_avx2(auVar15,0x10);
    auVar15 = pauVar12[2];
    auVar14 = vcvtdq2ps_avx(auVar14);
    pfVar1 = pfVar13 + uVar6 + 8;
    *pfVar1 = auVar14._0_4_ * 3.0517578e-05;
    pfVar1[1] = auVar14._4_4_ * 3.0517578e-05;
    pfVar1[2] = auVar14._8_4_ * 3.0517578e-05;
    pfVar1[3] = auVar14._12_4_ * 3.0517578e-05;
    pfVar1[4] = auVar14._16_4_ * 3.0517578e-05;
    pfVar1[5] = auVar14._20_4_ * 3.0517578e-05;
    pfVar1[6] = auVar14._24_4_ * 3.0517578e-05;
    pfVar1[7] = auVar14._28_4_ * 3.0517578e-05;
    auVar14 = vpslld_avx2(auVar15,0x10);
    auVar14 = vpsrad_avx2(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    pfVar13[0x10] = auVar14._0_4_ * 3.0517578e-05;
    pfVar13[0x11] = auVar14._4_4_ * 3.0517578e-05;
    pfVar13[0x12] = auVar14._8_4_ * 3.0517578e-05;
    pfVar13[0x13] = auVar14._12_4_ * 3.0517578e-05;
    pfVar13[0x14] = auVar14._16_4_ * 3.0517578e-05;
    pfVar13[0x15] = auVar14._20_4_ * 3.0517578e-05;
    pfVar13[0x16] = auVar14._24_4_ * 3.0517578e-05;
    pfVar13[0x17] = auVar14._28_4_ * 3.0517578e-05;
    auVar14 = vpsrad_avx2(auVar15,0x10);
    auVar15 = pauVar12[3];
    auVar14 = vcvtdq2ps_avx(auVar14);
    pfVar1 = pfVar13 + uVar6 + 0x10;
    *pfVar1 = auVar14._0_4_ * 3.0517578e-05;
    pfVar1[1] = auVar14._4_4_ * 3.0517578e-05;
    pfVar1[2] = auVar14._8_4_ * 3.0517578e-05;
    pfVar1[3] = auVar14._12_4_ * 3.0517578e-05;
    pfVar1[4] = auVar14._16_4_ * 3.0517578e-05;
    pfVar1[5] = auVar14._20_4_ * 3.0517578e-05;
    pfVar1[6] = auVar14._24_4_ * 3.0517578e-05;
    pfVar1[7] = auVar14._28_4_ * 3.0517578e-05;
    auVar14 = vpslld_avx2(auVar15,0x10);
    auVar14 = vpsrad_avx2(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    pfVar13[0x18] = auVar14._0_4_ * 3.0517578e-05;
    pfVar13[0x19] = auVar14._4_4_ * 3.0517578e-05;
    pfVar13[0x1a] = auVar14._8_4_ * 3.0517578e-05;
    pfVar13[0x1b] = auVar14._12_4_ * 3.0517578e-05;
    pfVar13[0x1c] = auVar14._16_4_ * 3.0517578e-05;
    pfVar13[0x1d] = auVar14._20_4_ * 3.0517578e-05;
    pfVar13[0x1e] = auVar14._24_4_ * 3.0517578e-05;
    pfVar13[0x1f] = auVar14._28_4_ * 3.0517578e-05;
    auVar15 = vpsrad_avx2(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    pfVar1 = pfVar13 + uVar6 + 0x18;
    *pfVar1 = auVar15._0_4_ * 3.0517578e-05;
    pfVar1[1] = auVar15._4_4_ * 3.0517578e-05;
    pfVar1[2] = auVar15._8_4_ * 3.0517578e-05;
    pfVar1[3] = auVar15._12_4_ * 3.0517578e-05;
    pfVar1[4] = auVar15._16_4_ * 3.0517578e-05;
    pfVar1[5] = auVar15._20_4_ * 3.0517578e-05;
    pfVar1[6] = auVar15._24_4_ * 3.0517578e-05;
    pfVar1[7] = auVar15._28_4_ * 3.0517578e-05;
    pfVar13 = pfVar13 + 0x20;
  }
  for (uVar7 = uVar7 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    auVar15 = *pauVar12;
    auVar14 = vpslld_avx2(auVar15,0x10);
    auVar14 = vpsrad_avx2(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    *pfVar13 = auVar14._0_4_ * 3.0517578e-05;
    pfVar13[1] = auVar14._4_4_ * 3.0517578e-05;
    pfVar13[2] = auVar14._8_4_ * 3.0517578e-05;
    pfVar13[3] = auVar14._12_4_ * 3.0517578e-05;
    pfVar13[4] = auVar14._16_4_ * 3.0517578e-05;
    pfVar13[5] = auVar14._20_4_ * 3.0517578e-05;
    pfVar13[6] = auVar14._24_4_ * 3.0517578e-05;
    pfVar13[7] = auVar14._28_4_ * 3.0517578e-05;
    auVar15 = vpsrad_avx2(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    pfVar1 = pfVar13 + uVar6;
    *pfVar1 = auVar15._0_4_ * 3.0517578e-05;
    pfVar1[1] = auVar15._4_4_ * 3.0517578e-05;
    pfVar1[2] = auVar15._8_4_ * 3.0517578e-05;
    pfVar1[3] = auVar15._12_4_ * 3.0517578e-05;
    pfVar1[4] = auVar15._16_4_ * 3.0517578e-05;
    pfVar1[5] = auVar15._20_4_ * 3.0517578e-05;
    pfVar1[6] = auVar15._24_4_ * 3.0517578e-05;
    pfVar1[7] = auVar15._28_4_ * 3.0517578e-05;
    pfVar13 = pfVar13 + 8;
    pauVar12 = pauVar12 + 1;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    sVar3 = *(short *)(*pauVar12 + 2);
    *pfVar13 = (float)(int)*(short *)*pauVar12 * 3.0517578e-05;
    pfVar13[uVar6] = (float)(int)sVar3 * 3.0517578e-05;
    pauVar12 = (undefined1 (*) [32])(*pauVar12 + 4);
    pfVar13 = pfVar13 + 1;
  }
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar10 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar10 == uVar2) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar10;
  }
  if (uVar10 == uVar11) {
    uVar5 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar10;
    uVar5 = 0x2b;
  }
  return uVar5;
}



// FUNCTION 1455582b0 FUN_1455582b0 body=1117 status=ok
// SIG undefined FUN_1455582b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1455582b0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  longlong lStack_90;
  
  uVar19 = *(uint *)(param_4 + 0x2c);
  uVar11 = param_3 - uVar19;
  uVar4 = *(ushort *)((longlong)param_1 + 0x12);
  uStack_94 = (uint)uVar4;
  uVar20 = (uint)uVar4;
  if (uVar11 < uVar4) {
    uVar20 = uVar11;
  }
  uVar18 = *(uint *)(param_1 + 1);
  uVar24 = uVar18 & 0xff;
  uVar23 = (ulonglong)uVar24;
  local_98 = uVar20;
  psVar17 = (short *)(*param_1 + (ulonglong)(uVar24 * *(int *)(param_4 + 0x28)) * 2);
  uVar15 = uVar23 * 8 + 0xf;
  if (uVar15 <= uVar23 * 8) {
    uVar15 = 0xffffffffffffff0;
  }
  plVar2 = (longlong *)((longlong)&local_a8 + -(uVar15 & 0xfffffffffffffff0));
  if (uVar24 != 0) {
    lVar13 = *param_2;
    uVar4 = *(ushort *)(param_2 + 2);
    pbVar22 = *(byte **)(param_4 + 0x50);
    plVar16 = plVar2;
    uVar25 = uVar23;
    do {
      bVar3 = *pbVar22;
      pbVar22 = pbVar22 + 1;
      *plVar16 = lVar13 + ((ulonglong)bVar3 * (ulonglong)uVar4 + (ulonglong)uVar19) * 4;
      uVar25 = uVar25 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar25 != 0);
  }
  local_9c = uVar20 & 7;
  uVar19 = uVar20 >> 3;
  if (uVar19 != 0) {
    lVar13 = (ulonglong)(uVar24 * 8) * 2;
    lStack_90 = lVar13;
    do {
      uVar19 = uVar19 - 1;
      uVar25 = 0;
      local_a0 = uVar19;
      if (uVar24 != 0) {
        do {
          psVar1 = psVar17 + uVar25;
          auVar8 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(psVar1 + uVar24 * 4),0);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(psVar1 + uVar24 * 5),1);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(psVar1 + uVar24 * 6),2);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(psVar1 + uVar24 * 7),3);
          auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)psVar1,0);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(psVar1 + uVar23),1);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(psVar1 + uVar24 * 2),2);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(psVar1 + uVar24 * 3),3);
          pfVar6 = (float *)plVar2[uVar25];
          auVar27._16_16_ = auVar8;
          auVar27._0_16_ = auVar9;
          auVar26 = vpslld_avx2(auVar27,0x10);
          auVar26 = vpsrad_avx2(auVar26,0x10);
          auVar26 = vcvtdq2ps_avx(auVar26);
          *pfVar6 = auVar26._0_4_ * 3.0517578e-05;
          pfVar6[1] = auVar26._4_4_ * 3.0517578e-05;
          pfVar6[2] = auVar26._8_4_ * 3.0517578e-05;
          pfVar6[3] = auVar26._12_4_ * 3.0517578e-05;
          pfVar6[4] = auVar26._16_4_ * 3.0517578e-05;
          pfVar6[5] = auVar26._20_4_ * 3.0517578e-05;
          pfVar6[6] = auVar26._24_4_ * 3.0517578e-05;
          pfVar6[7] = auVar26._28_4_ * 3.0517578e-05;
          iVar10 = (int)uVar25;
          pfVar6 = (float *)plVar2[iVar10 + 1];
          auVar26 = vpsrad_avx2(auVar27,0x10);
          auVar26 = vcvtdq2ps_avx(auVar26);
          *pfVar6 = auVar26._0_4_ * 3.0517578e-05;
          pfVar6[1] = auVar26._4_4_ * 3.0517578e-05;
          pfVar6[2] = auVar26._8_4_ * 3.0517578e-05;
          pfVar6[3] = auVar26._12_4_ * 3.0517578e-05;
          pfVar6[4] = auVar26._16_4_ * 3.0517578e-05;
          pfVar6[5] = auVar26._20_4_ * 3.0517578e-05;
          pfVar6[6] = auVar26._24_4_ * 3.0517578e-05;
          pfVar6[7] = auVar26._28_4_ * 3.0517578e-05;
          uVar20 = iVar10 + (iVar10 != uVar24 - 3) + 1;
          uVar25 = (ulonglong)uVar20;
        } while (uVar20 < uVar24);
        uVar25 = 0;
        if (0xf < uVar24) {
          uVar20 = 8;
          do {
            auVar26 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar2 + uVar25));
            *(undefined1 (*) [32])(plVar2 + uVar25) = auVar26;
            uVar21 = (int)uVar25 + 0x10;
            uVar25 = (ulonglong)uVar21;
            auVar26 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar2 + (uVar20 - 4)));
            *(undefined1 (*) [32])(plVar2 + (uVar20 - 4)) = auVar26;
            auVar26 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar2 + uVar20));
            *(undefined1 (*) [32])(plVar2 + uVar20) = auVar26;
            uVar12 = uVar20 + 4;
            uVar20 = uVar20 + 0x10;
            auVar26 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar2 + uVar12));
            *(undefined1 (*) [32])(plVar2 + uVar12) = auVar26;
          } while (uVar21 < (uVar18 & 0xf0));
          lVar13 = lStack_90;
          if (uVar24 <= uVar21) goto LAB_145558532;
        }
        plVar16 = plVar2 + uVar25;
        uVar25 = (ulonglong)(uVar24 - (int)uVar25);
        do {
          *plVar16 = *plVar16 + 0x20;
          plVar16 = plVar16 + 1;
          uVar25 = uVar25 - 1;
          lVar13 = lStack_90;
        } while (uVar25 != 0);
      }
LAB_145558532:
      psVar17 = (short *)((longlong)psVar17 + lVar13);
      uVar20 = local_98;
    } while (uVar19 != 0);
  }
  uVar19 = local_9c;
joined_r0x000145558550:
  do {
    if (uVar19 == 0) {
      if (uVar24 != 0) {
        lVar13 = 0;
        do {
          *(undefined2 *)(lVar13 + *(longlong *)(param_4 + 0x20)) =
               *(undefined2 *)((longlong)psVar17 + lVar13 + (ulonglong)uVar24 * -2);
          uVar23 = uVar23 - 1;
          lVar13 = lVar13 + 2;
        } while (uVar23 != 0);
      }
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar20;
      *(short *)((longlong)param_2 + 0x12) = (short)uVar20 + *(short *)(param_4 + 0x2c);
      *(undefined4 *)(param_4 + 0x30) = 0x10000;
      if (uVar20 == uStack_94) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar20;
      }
      if (uVar20 == uVar11) {
        uVar14 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar20;
        uVar14 = 0x2b;
      }
      return uVar14;
    }
    uVar19 = uVar19 - 1;
    uVar18 = 0;
    if (uVar24 < 4) goto LAB_145558628;
    uVar12 = (uVar24 - 4 >> 2) + 1;
    uVar25 = (ulonglong)uVar12;
    uVar18 = uVar12 * 4;
    lVar13 = (ulonglong)uVar12 * 4;
    plVar16 = (longlong *)((longlong)&local_98 + -(uVar15 & 0xfffffffffffffff0));
    do {
      pfVar6 = (float *)plVar16[-2];
      *pfVar6 = (float)(int)*psVar17 * 3.0517578e-05;
      pfVar7 = (float *)plVar16[-1];
      plVar16[-2] = (longlong)(pfVar6 + 1);
      *pfVar7 = (float)(int)psVar17[1] * 3.0517578e-05;
      pfVar6 = (float *)*plVar16;
      plVar16[-1] = (longlong)(pfVar7 + 1);
      *pfVar6 = (float)(int)psVar17[2] * 3.0517578e-05;
      pfVar7 = (float *)plVar16[1];
      *plVar16 = (longlong)(pfVar6 + 1);
      sVar5 = psVar17[3];
      psVar17 = psVar17 + 4;
      plVar16[1] = (longlong)(pfVar7 + 1);
      *pfVar7 = (float)(int)sVar5 * 3.0517578e-05;
      uVar25 = uVar25 - 1;
      plVar16 = plVar16 + 4;
    } while (uVar25 != 0);
  } while (uVar24 <= uVar18);
  goto LAB_14555862f;
LAB_145558628:
  if (uVar24 != 0) {
    lVar13 = 0;
LAB_14555862f:
    uVar25 = (ulonglong)(uVar24 - uVar18);
    plVar16 = plVar2 + lVar13;
    do {
      pfVar6 = (float *)*plVar16;
      sVar5 = *psVar17;
      psVar17 = psVar17 + 1;
      *plVar16 = (longlong)(pfVar6 + 1);
      *pfVar6 = (float)(int)sVar5 * 3.0517578e-05;
      uVar25 = uVar25 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar25 != 0);
  }
  goto joined_r0x000145558550;
}



// FUNCTION 145558710 FUN_145558710 body=1031 status=ok
// SIG undefined FUN_145558710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145558710(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  uint uVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  short *psVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined1 auVar9 [32];
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  ulonglong uVar14;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar13 = *(uint *)(param_4 + 0x34);
  uVar18 = *(uint *)(param_4 + 0x30);
  uVar20 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar11 = (ulonglong)((uVar13 - uVar18) + 0xffff) / (ulonglong)uVar13;
  psVar5 = *(short **)(param_4 + 0x20);
  if (uVar20 < (uint)uVar11) {
    uVar11 = (ulonglong)uVar20;
  }
  psVar2 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 2);
  iVar19 = (int)uVar11;
  pfVar17 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  if (iVar19 != 0) {
    iVar12 = (int)*psVar5;
    sVar4 = *psVar2;
    do {
      uVar15 = uVar18 & 0xffff;
      uVar18 = uVar18 + uVar13;
      *pfVar17 = (float)(int)((sVar4 - iVar12) * uVar15 + iVar12 * 0x10000) * 4.656613e-10;
      pfVar17 = pfVar17 + 1;
      uVar15 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar15;
    } while (uVar15 != 0);
  }
  auVar9 = _DAT_149931da0;
  uVar11 = (ulonglong)(((uint)uVar3 * 0x10000 - uVar18) + -1 + uVar13) / (ulonglong)uVar13;
  uVar22 = (ulonglong)(uVar20 - iVar19);
  if ((uint)uVar11 <= uVar20 - iVar19) {
    uVar22 = uVar11;
  }
  iVar12 = uVar13 * 8;
  iVar21 = (int)(uVar22 >> 3);
  uVar15 = (uint)uVar22 & 7;
  auVar25._4_4_ = uVar13;
  auVar25._0_4_ = uVar13;
  auVar25._8_4_ = uVar13;
  auVar25._12_4_ = uVar13;
  auVar25._16_4_ = uVar13;
  auVar25._20_4_ = uVar13;
  auVar25._24_4_ = uVar13;
  auVar25._28_4_ = uVar13;
  auVar25 = vpmulld_avx2(auVar25,_DAT_149931240);
  auVar24._4_4_ = uVar18;
  auVar24._0_4_ = uVar18;
  auVar24._8_4_ = uVar18;
  auVar24._12_4_ = uVar18;
  auVar24._16_4_ = uVar18;
  auVar24._20_4_ = uVar18;
  auVar24._24_4_ = uVar18;
  auVar24._28_4_ = uVar18;
  auVar29._4_4_ = iVar12;
  auVar29._0_4_ = iVar12;
  auVar29._8_4_ = iVar12;
  auVar29._12_4_ = iVar12;
  auVar29._16_4_ = iVar12;
  auVar29._20_4_ = iVar12;
  auVar29._24_4_ = iVar12;
  auVar29._28_4_ = iVar12;
  auVar25 = vpaddd_avx2(auVar25,auVar24);
  if (uVar22 >> 3 != 0) {
    do {
      auVar6 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)(psVar2 + ((ulonglong)(uVar13 * 4 + uVar18 >> 0x10) - 1)),
                           0);
      auVar6 = vpinsrd_avx(auVar6,*(undefined4 *)
                                   (psVar2 + ((ulonglong)(uVar13 * 5 + uVar18 >> 0x10) - 1)),1);
      auVar6 = vpinsrd_avx(auVar6,*(undefined4 *)
                                   (psVar2 + ((ulonglong)(uVar13 * 6 + uVar18 >> 0x10) - 1)),2);
      auVar6 = vpinsrd_avx(auVar6,*(undefined4 *)
                                   (psVar2 + ((ulonglong)(uVar18 + uVar13 * 7 >> 0x10) - 1)),3);
      auVar7 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)(psVar2 + ((ulonglong)(uVar18 >> 0x10) - 1)),0);
      uVar16 = uVar13 + uVar18;
      uVar10 = uVar13 * 2 + uVar18;
      uVar1 = uVar13 * 3 + uVar18;
      uVar18 = uVar18 + uVar13 * 8;
      auVar7 = vpinsrd_avx(auVar7,*(undefined4 *)(psVar2 + ((ulonglong)(uVar16 >> 0x10) - 1)),1);
      auVar7 = vpinsrd_avx(auVar7,*(undefined4 *)(psVar2 + ((ulonglong)(uVar10 >> 0x10) - 1)),2);
      auVar7 = vpinsrd_avx(auVar7,*(undefined4 *)(psVar2 + ((ulonglong)(uVar1 >> 0x10) - 1)),3);
      auVar28._16_16_ = auVar6;
      auVar28._0_16_ = auVar7;
      auVar24 = vpand_avx2(auVar9,auVar25);
      auVar23 = vpslld_avx2(auVar28,0x10);
      auVar26 = vpsrad_avx2(auVar23,0x10);
      auVar24 = vcvtdq2ps_avx(auVar24);
      auVar27._0_4_ = auVar24._0_4_ * 1.5258789e-05;
      auVar27._4_4_ = auVar24._4_4_ * 1.5258789e-05;
      auVar27._8_4_ = auVar24._8_4_ * 1.5258789e-05;
      auVar27._12_4_ = auVar24._12_4_ * 1.5258789e-05;
      auVar27._16_4_ = auVar24._16_4_ * 1.5258789e-05;
      auVar27._20_4_ = auVar24._20_4_ * 1.5258789e-05;
      auVar27._24_4_ = auVar24._24_4_ * 1.5258789e-05;
      auVar27._28_4_ = auVar24._28_4_ * 1.5258789e-05;
      auVar24 = vpsrad_avx2(auVar28,0x10);
      auVar23 = vpsubd_avx2(auVar24,auVar26);
      auVar24 = vcvtdq2ps_avx(auVar26);
      auVar23 = vcvtdq2ps_avx(auVar23);
      auVar6 = vfmadd231ps_fma(auVar24,auVar23,auVar27);
      *pfVar17 = auVar6._0_4_ * 3.0517578e-05;
      pfVar17[1] = auVar6._4_4_ * 3.0517578e-05;
      pfVar17[2] = auVar6._8_4_ * 3.0517578e-05;
      pfVar17[3] = auVar6._12_4_ * 3.0517578e-05;
      pfVar17[4] = 0.0;
      pfVar17[5] = 0.0;
      pfVar17[6] = 0.0;
      pfVar17[7] = 0.0;
      pfVar17 = pfVar17 + 8;
      auVar25 = vpaddd_avx2(auVar25,auVar29);
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  uVar16 = (uint)uVar3;
  uVar11 = (ulonglong)(uVar18 >> 0x10);
  if ((uVar22 & 7) != 0) {
    do {
      lVar8 = uVar11 - 1;
      iVar12 = (int)uVar11;
      uVar10 = uVar18 & 0xffff;
      uVar18 = uVar18 + uVar13;
      uVar11 = (ulonglong)(uVar18 >> 0x10);
      *pfVar17 = (float)(int)(((int)psVar2[(ulonglong)(iVar12 + 1) - 1] - (int)psVar2[lVar8]) *
                              uVar10 + psVar2[lVar8] * 0x10000) * 4.656613e-10;
      uVar15 = uVar15 - 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar15 != 0);
  }
  uVar14 = (ulonglong)uVar16;
  if ((uint)uVar11 < uVar16) {
    uVar14 = uVar11;
  }
  uVar13 = (uint)uVar14;
  if (uVar13 != 0) {
    *psVar5 = psVar2[uVar14 - 1];
  }
  uVar15 = (uint)uVar22 + iVar19;
  *(uint *)(param_4 + 0x30) = uVar18 + uVar13 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar14;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar15 + *(short *)(param_4 + 0x2c);
  if (uVar13 == uVar16) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar13;
  }
  if (uVar15 == uVar20) {
    return 0x2d;
  }
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar15;
  return 0x2b;
}



// FUNCTION 145558b20 FUN_145558b20 body=1313 status=ok
// SIG undefined FUN_145558b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145558b20(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  float *pfVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  float *pfVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  
  uVar11 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar19 = *(uint *)(param_4 + 0x30);
  uVar3 = *(ushort *)(param_2 + 2);
  uVar21 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar17 = *(uint *)(param_4 + 0x34);
  uVar15 = (ulonglong)((uVar17 - uVar19) + 0xffff) / (ulonglong)uVar17;
  if (uVar21 < (uint)uVar15) {
    uVar15 = (ulonglong)uVar21;
  }
  iVar24 = (int)uVar15;
  psVar1 = (short *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  pfVar22 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  if (iVar24 != 0) {
    iVar16 = (int)**(short **)(param_4 + 0x20);
    iVar20 = (int)(*(short **)(param_4 + 0x20))[1];
    sVar4 = *psVar1;
    sVar5 = psVar1[1];
    do {
      uVar18 = uVar19 & 0xffff;
      uVar19 = uVar19 + uVar17;
      *pfVar22 = (float)(int)((sVar4 - iVar16) * uVar18 + iVar16 * 0x10000) * 4.656613e-10;
      pfVar22[uVar3] = (float)(int)((sVar5 - iVar20) * uVar18 + iVar20 * 0x10000) * 4.656613e-10;
      pfVar22 = pfVar22 + 1;
      uVar18 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar18;
    } while (uVar18 != 0);
  }
  auVar10 = _DAT_149da9e00;
  auVar9 = _DAT_149da9de0;
  auVar8 = _DAT_149931da0;
  uVar15 = (ulonglong)((uVar11 * 0x10000 - uVar19) + -1 + uVar17) / (ulonglong)uVar17;
  uVar23 = (ulonglong)(uVar21 - iVar24);
  if ((uint)uVar15 <= uVar21 - iVar24) {
    uVar23 = uVar15;
  }
  iVar16 = uVar17 * 8;
  uVar18 = (uint)uVar23 & 7;
  auVar26._4_4_ = uVar17;
  auVar26._0_4_ = uVar17;
  auVar26._8_4_ = uVar17;
  auVar26._12_4_ = uVar17;
  auVar26._16_4_ = uVar17;
  auVar26._20_4_ = uVar17;
  auVar26._24_4_ = uVar17;
  auVar26._28_4_ = uVar17;
  auVar26 = vpmulld_avx2(auVar26,_DAT_149931240);
  uVar15 = uVar23 >> 3;
  auVar28._4_4_ = uVar19;
  auVar28._0_4_ = uVar19;
  auVar28._8_4_ = uVar19;
  auVar28._12_4_ = uVar19;
  auVar28._16_4_ = uVar19;
  auVar28._20_4_ = uVar19;
  auVar28._24_4_ = uVar19;
  auVar28._28_4_ = uVar19;
  auVar34._4_4_ = iVar16;
  auVar34._0_4_ = iVar16;
  auVar34._8_4_ = iVar16;
  auVar34._12_4_ = iVar16;
  auVar34._16_4_ = iVar16;
  auVar34._20_4_ = iVar16;
  auVar34._24_4_ = iVar16;
  auVar34._28_4_ = iVar16;
  auVar26 = vpaddd_avx2(auVar26,auVar28);
  if ((int)uVar15 != 0) {
    uVar25 = uVar17 * 4 + uVar19;
    uVar12 = uVar19;
    do {
      auVar6 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(psVar1 + ((ulonglong)((uVar25 >> 0x10) * 2) - 2)),0);
      auVar6 = vpinsrq_avx(auVar6,*(undefined8 *)
                                   (psVar1 + ((ulonglong)((uVar25 + uVar17 >> 0x10) * 2) - 2)),1);
      uVar19 = uVar12 + iVar16;
      auVar7 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(psVar1 + ((ulonglong)((uVar12 >> 0x10) * 2) - 2)),0);
      auVar7 = vpinsrq_avx(auVar7,*(undefined8 *)
                                   (psVar1 + ((ulonglong)((uVar25 + uVar17 * -3 >> 0x10) * 2) - 2)),
                           1);
      auVar31._16_16_ = auVar6;
      auVar31._0_16_ = auVar7;
      auVar6 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)
                            (psVar1 + ((ulonglong)((uVar25 + uVar17 * 2 >> 0x10) * 2) - 2)),0);
      auVar6 = vpinsrq_avx(auVar6,*(undefined8 *)
                                   (psVar1 + ((ulonglong)((uVar25 + uVar17 * 3 >> 0x10) * 2) - 2)),1
                          );
      uVar12 = uVar25 - uVar17;
      uVar13 = uVar25 + uVar17 * -2;
      uVar25 = uVar25 + iVar16;
      auVar7 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(psVar1 + ((ulonglong)((uVar13 >> 0x10) * 2) - 2)),0);
      auVar7 = vpinsrq_avx(auVar7,*(undefined8 *)(psVar1 + ((ulonglong)((uVar12 >> 0x10) * 2) - 2)),
                           1);
      auVar30._16_16_ = auVar6;
      auVar30._0_16_ = auVar7;
      auVar28 = vpshufb_avx2(auVar30,auVar9);
      auVar27 = vpshufb_avx2(auVar31,auVar9);
      auVar28 = vpblendw_avx2(auVar27,auVar28,0xf0);
      auVar27 = vpslld_avx2(auVar28,0x10);
      auVar29 = vpsrad_avx2(auVar27,0x10);
      auVar27 = vpshufb_avx2(auVar30,auVar10);
      auVar33 = vpsrad_avx2(auVar28,0x10);
      auVar28 = vcvtdq2ps_avx(auVar29);
      auVar30 = vpshufb_avx2(auVar31,auVar10);
      auVar30 = vpblendw_avx2(auVar30,auVar27,0xf0);
      auVar27 = vpand_avx2(auVar8,auVar26);
      auVar27 = vcvtdq2ps_avx(auVar27);
      auVar32._0_4_ = auVar27._0_4_ * 1.5258789e-05;
      auVar32._4_4_ = auVar27._4_4_ * 1.5258789e-05;
      auVar32._8_4_ = auVar27._8_4_ * 1.5258789e-05;
      auVar32._12_4_ = auVar27._12_4_ * 1.5258789e-05;
      auVar32._16_4_ = auVar27._16_4_ * 1.5258789e-05;
      auVar32._20_4_ = auVar27._20_4_ * 1.5258789e-05;
      auVar32._24_4_ = auVar27._24_4_ * 1.5258789e-05;
      auVar32._28_4_ = auVar27._28_4_ * 1.5258789e-05;
      auVar27 = vpslld_avx2(auVar30,0x10);
      auVar27 = vpsrad_avx2(auVar27,0x10);
      auVar27 = vpsubd_avx2(auVar27,auVar29);
      auVar27 = vcvtdq2ps_avx(auVar27);
      auVar6 = vfmadd231ps_fma(auVar28,auVar27,auVar32);
      *pfVar22 = auVar6._0_4_ * 3.0517578e-05;
      pfVar22[1] = auVar6._4_4_ * 3.0517578e-05;
      pfVar22[2] = auVar6._8_4_ * 3.0517578e-05;
      pfVar22[3] = auVar6._12_4_ * 3.0517578e-05;
      pfVar22[4] = 0.0;
      pfVar22[5] = 0.0;
      pfVar22[6] = 0.0;
      pfVar22[7] = 0.0;
      auVar28 = vpsrad_avx2(auVar30,0x10);
      auVar28 = vpsubd_avx2(auVar28,auVar33);
      auVar28 = vcvtdq2ps_avx(auVar28);
      auVar27 = vcvtdq2ps_avx(auVar33);
      auVar6 = vfmadd231ps_fma(auVar27,auVar28,auVar32);
      pfVar2 = pfVar22 + uVar3;
      *pfVar2 = auVar6._0_4_ * 3.0517578e-05;
      pfVar2[1] = auVar6._4_4_ * 3.0517578e-05;
      pfVar2[2] = auVar6._8_4_ * 3.0517578e-05;
      pfVar2[3] = auVar6._12_4_ * 3.0517578e-05;
      pfVar2[4] = 0.0;
      pfVar2[5] = 0.0;
      pfVar2[6] = 0.0;
      pfVar2[7] = 0.0;
      pfVar22 = pfVar22 + 8;
      auVar26 = vpaddd_avx2(auVar26,auVar34);
      uVar13 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar13;
      uVar12 = uVar19;
    } while (uVar13 != 0);
    uVar17 = *(uint *)(param_4 + 0x34);
  }
  uVar25 = uVar19 >> 0x10;
  if ((uVar23 & 7) != 0) {
    do {
      uVar12 = uVar19 & 0xffff;
      uVar25 = uVar25 * 2;
      uVar19 = uVar19 + uVar17;
      sVar4 = psVar1[(ulonglong)(uVar25 + 1) - 2];
      sVar5 = psVar1[(ulonglong)(uVar25 + 3) - 2];
      *pfVar22 = (float)(int)(((int)psVar1[(ulonglong)(uVar25 + 2) - 2] -
                              (int)psVar1[(ulonglong)uVar25 - 2]) * uVar12 +
                             psVar1[(ulonglong)uVar25 - 2] * 0x10000) * 4.656613e-10;
      uVar25 = uVar19 >> 0x10;
      pfVar22[uVar3] =
           (float)(int)(((int)sVar5 - (int)sVar4) * uVar12 + sVar4 * 0x10000) * 4.656613e-10;
      uVar18 = uVar18 - 1;
      pfVar22 = pfVar22 + 1;
    } while (uVar18 != 0);
  }
  uVar17 = uVar11;
  if (uVar25 < uVar11) {
    uVar17 = uVar25;
  }
  if (uVar17 != 0) {
    **(short **)(param_4 + 0x20) = psVar1[(ulonglong)(uVar17 * 2) - 2];
    *(short *)(*(longlong *)(param_4 + 0x20) + 2) = psVar1[(ulonglong)(uVar17 * 2 + 1) - 2];
  }
  uVar18 = (uint)uVar23 + iVar24;
  *(uint *)(param_4 + 0x30) = uVar19 + uVar17 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar17;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar18 + *(short *)(param_4 + 0x2c);
  if (uVar17 == uVar11) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar17;
  }
  if (uVar18 == uVar21) {
    uVar14 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar18;
    uVar14 = 0x2b;
  }
  return uVar14;
}



// FUNCTION 145559050 FUN_145559050 body=2480 status=ok
// SIG undefined FUN_145559050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145559050(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  short *psVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  longlong local_158 [3];
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  ulonglong local_128;
  uint local_120;
  longlong *local_118;
  uint local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_120 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar11 = *(uint *)(param_4 + 0x34);
  uVar25 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar29 = *(uint *)(param_4 + 0x30);
  uStack_130 = *(uint *)(param_1 + 1) & 0xff;
  uVar18 = (ulonglong)uStack_130;
  uVar30 = uVar29 & 0xffff;
  uVar21 = (ulonglong)((uVar11 - uVar29) + 0xffff) / (ulonglong)uVar11;
  uStack_138 = uVar29;
  uStack_140 = uVar11;
  if (uVar25 < (uint)uVar21) {
    uVar21 = (ulonglong)uVar25;
  }
  uStack_134 = uVar30;
  uStack_12c = (uint)uVar21;
  lVar1 = *param_1 + (uStack_130 * *(int *)(param_4 + 0x28) - uVar18) * 2;
  uVar13 = uVar18 * 8 + 0xf;
  if (uVar13 <= uVar18 * 8) {
    uVar13 = 0xffffffffffffff0;
  }
  plVar22 = (longlong *)((longlong)local_158 - (uVar13 & 0xfffffffffffffff0));
  local_118 = plVar22;
  if (uStack_130 != 0) {
    pbVar17 = *(byte **)(param_4 + 0x50);
    local_128 = (ulonglong)*(uint *)(param_4 + 0x2c);
    lVar19 = *param_2;
    uVar3 = *(ushort *)(param_2 + 2);
    plVar14 = plVar22;
    uVar21 = uVar18;
    do {
      bVar2 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      *plVar14 = lVar19 + ((ulonglong)bVar2 * (ulonglong)uVar3 + local_128) * 4;
      uVar21 = uVar21 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar21 != 0);
    uVar21 = (ulonglong)uStack_12c;
  }
  uVar26 = 0;
  if ((int)uVar21 != 0) {
    do {
      uStack_138 = (int)uVar21 - 1;
      uVar26 = 0;
      uVar27 = (uint)uVar18;
      if (uVar27 < 4) {
        if (uVar27 != 0) {
          lVar19 = 0;
          goto LAB_145559330;
        }
      }
      else {
        uVar11 = uVar27 + 2;
        lVar19 = 0;
        uStack_13c = uVar11;
        uVar26 = (uVar27 - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar26;
        uVar26 = uVar26 * 4;
        plVar22 = plVar22 + 2;
        do {
          pfVar6 = (float *)plVar22[-2];
          iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + lVar19 * 2);
          *pfVar6 = (float)(int)((*(short *)(lVar1 + (ulonglong)(uVar11 - 2) * 2) - iVar15) * uVar30
                                + iVar15 * 0x10000) * 4.656613e-10;
          pfVar7 = (float *)plVar22[-1];
          plVar22[-2] = (longlong)(pfVar6 + 1);
          iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + 2 + lVar19 * 2);
          *pfVar7 = (float)(int)((*(short *)(lVar1 + (ulonglong)(uVar11 - 1) * 2) - iVar15) * uVar30
                                + iVar15 * 0x10000) * 4.656613e-10;
          pfVar6 = (float *)*plVar22;
          plVar22[-1] = (longlong)(pfVar7 + 1);
          iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + 4 + lVar19 * 2);
          sVar4 = *(short *)(lVar1 + (ulonglong)uVar11 * 2);
          *plVar22 = (longlong)(pfVar6 + 1);
          *pfVar6 = (float)(int)((sVar4 - iVar15) * uVar30 + iVar15 * 0x10000) * 4.656613e-10;
          pfVar6 = (float *)plVar22[1];
          iVar15 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + 6 + lVar19 * 2);
          sVar4 = *(short *)(lVar1 + (ulonglong)(uVar11 + 1) * 2);
          lVar19 = lVar19 + 4;
          uVar11 = uVar11 + 4;
          plVar22[1] = (longlong)(pfVar6 + 1);
          *pfVar6 = (float)(int)((sVar4 - iVar15) * uVar30 + iVar15 * 0x10000) * 4.656613e-10;
          uVar21 = uVar21 - 1;
          plVar22 = plVar22 + 4;
        } while (uVar21 != 0);
        uVar18 = (ulonglong)uStack_130;
        plVar22 = local_118;
        uVar11 = uStack_140;
        if (uVar26 < uStack_130) {
LAB_145559330:
          plVar14 = plVar22 + lVar19;
          lVar19 = lVar19 * 2;
          do {
            pfVar6 = (float *)*plVar14;
            iVar15 = (int)*(short *)(lVar19 + *(longlong *)(param_4 + 0x20));
            sVar4 = *(short *)(lVar1 + (ulonglong)(uVar26 + (uint)uVar18) * 2);
            uVar26 = uVar26 + 1;
            *plVar14 = (longlong)(pfVar6 + 1);
            *pfVar6 = (float)(int)((sVar4 - iVar15) * uStack_134 + iVar15 * 0x10000) * 4.656613e-10;
            plVar14 = plVar14 + 1;
            lVar19 = lVar19 + 2;
            uVar11 = uStack_140;
          } while (uVar26 < (uint)uVar18);
        }
      }
      uVar21 = (ulonglong)uStack_138;
      uVar29 = uVar29 + uVar11;
      uVar30 = uVar29 & 0xffff;
      uStack_134 = uVar30;
    } while (uStack_138 != 0);
    uStack_138 = uVar29;
    uVar26 = uStack_12c;
  }
  auVar10 = _DAT_149931da0;
  uVar30 = ((local_120 * 0x10000 - uVar29) + -1 + uVar11) / uVar11;
  local_110 = uVar25 - uVar26;
  if (uVar30 <= uVar25 - uVar26) {
    local_110 = uVar30;
  }
  uVar26 = local_110 >> 3;
  uStack_13c = local_110 & 7;
  auVar33._4_4_ = uVar11;
  auVar33._0_4_ = uVar11;
  auVar33._8_4_ = uVar11;
  auVar33._12_4_ = uVar11;
  auVar33._16_4_ = uVar11;
  auVar33._20_4_ = uVar11;
  auVar33._24_4_ = uVar11;
  auVar33._28_4_ = uVar11;
  auVar33 = vpmulld_avx2(auVar33,_DAT_149931240);
  auVar31._4_4_ = uVar29;
  auVar31._0_4_ = uVar29;
  auVar31._8_4_ = uVar29;
  auVar31._12_4_ = uVar29;
  auVar31._16_4_ = uVar29;
  auVar31._20_4_ = uVar29;
  auVar31._24_4_ = uVar29;
  auVar31._28_4_ = uVar29;
  auVar33 = vpaddd_avx2(auVar33,auVar31);
  uVar30 = (uint)uVar18;
  if (uVar26 != 0) {
    uStack_134 = uVar11 * 8;
    auVar38._4_4_ = uStack_134;
    auVar38._0_4_ = uStack_134;
    auVar38._8_4_ = uStack_134;
    auVar38._12_4_ = uStack_134;
    auVar38._16_4_ = uStack_134;
    auVar38._20_4_ = uStack_134;
    auVar38._24_4_ = uStack_134;
    auVar38._28_4_ = uStack_134;
    uVar27 = uVar11 * 8;
    do {
      uVar26 = uVar26 - 1;
      uVar21 = 0;
      uStack_130 = uVar26;
      auVar31 = vpand_avx2(auVar10,auVar33);
      auVar31 = vcvtdq2ps_avx(auVar31);
      auVar37._0_4_ = auVar31._0_4_ * 1.5258789e-05;
      auVar37._4_4_ = auVar31._4_4_ * 1.5258789e-05;
      auVar37._8_4_ = auVar31._8_4_ * 1.5258789e-05;
      auVar37._12_4_ = auVar31._12_4_ * 1.5258789e-05;
      auVar37._16_4_ = auVar31._16_4_ * 1.5258789e-05;
      auVar37._20_4_ = auVar31._20_4_ * 1.5258789e-05;
      auVar37._24_4_ = auVar31._24_4_ * 1.5258789e-05;
      auVar37._28_4_ = auVar31._28_4_ * 1.5258789e-05;
      if (uVar30 != 0) {
        local_f8 = (ulonglong)((uVar29 + uVar11 * 4 >> 0x10) * uVar30);
        local_108 = (ulonglong)((uVar29 + uVar11 * 2 >> 0x10) * uVar30);
        local_100 = (ulonglong)((uVar29 + uVar11 * 5 >> 0x10) * uVar30);
        local_f0 = (ulonglong)((uVar29 + uVar11 * 3 >> 0x10) * uVar30);
        uVar28 = (ulonglong)((uVar29 >> 0x10) * uVar30);
        uVar20 = (ulonglong)((uVar11 + uVar29 >> 0x10) * uVar30);
        local_118 = (longlong *)(ulonglong)((uVar29 + uVar11 * 6 >> 0x10) * uVar30);
        local_128 = (ulonglong)((uVar11 * 7 + uVar29 >> 0x10) * uVar30);
        uVar13 = local_128;
        plVar14 = local_118;
        uVar23 = local_f0;
        do {
          iVar15 = (int)uVar21;
          auVar8 = vpinsrd_avx((undefined1  [16])0x0,
                               *(undefined4 *)(lVar1 + (local_f8 + uVar21) * 2),0);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(lVar1 + (local_100 + uVar21) * 2),1);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(lVar1 + ((longlong)plVar14 + uVar21) * 2),2);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(lVar1 + (uVar13 + uVar21) * 2),3);
          lVar19 = uVar18 + uVar21;
          auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar1 + (uVar21 + uVar28) * 2),
                               0);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(lVar1 + (uVar21 + uVar20) * 2),1);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(lVar1 + (uVar21 + local_108) * 2),2);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(lVar1 + (uVar21 + uVar23) * 2),3);
          auVar32._16_16_ = auVar8;
          auVar32._0_16_ = auVar9;
          auVar8 = vpinsrd_avx((undefined1  [16])0x0,
                               *(undefined4 *)(lVar1 + (local_f8 + lVar19) * 2),0);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(lVar1 + (local_100 + lVar19) * 2),1);
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(lVar1 + ((longlong)local_118 + lVar19) * 2),2)
          ;
          auVar8 = vpinsrd_avx(auVar8,*(undefined4 *)(lVar1 + (local_128 + lVar19) * 2),3);
          auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(lVar1 + (lVar19 + uVar28) * 2),
                               0);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(lVar1 + (uVar20 + lVar19) * 2),1);
          pfVar6 = (float *)plVar22[uVar21];
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(lVar1 + (local_108 + lVar19) * 2),2);
          auVar31 = vpslld_avx2(auVar32,0x10);
          auVar35 = vpsrad_avx2(auVar32,0x10);
          auVar9 = vpinsrd_avx(auVar9,*(undefined4 *)(lVar1 + (local_f0 + lVar19) * 2),3);
          auVar36._16_16_ = auVar8;
          auVar36._0_16_ = auVar9;
          auVar34 = vpsrad_avx2(auVar31,0x10);
          auVar31 = vcvtdq2ps_avx(auVar34);
          auVar32 = vpslld_avx2(auVar36,0x10);
          auVar32 = vpsrad_avx2(auVar32,0x10);
          auVar32 = vpsubd_avx2(auVar32,auVar34);
          auVar32 = vcvtdq2ps_avx(auVar32);
          auVar8 = vfmadd231ps_fma(auVar31,auVar32,auVar37);
          *pfVar6 = auVar8._0_4_ * 3.0517578e-05;
          pfVar6[1] = auVar8._4_4_ * 3.0517578e-05;
          pfVar6[2] = auVar8._8_4_ * 3.0517578e-05;
          pfVar6[3] = auVar8._12_4_ * 3.0517578e-05;
          pfVar6[4] = 0.0;
          pfVar6[5] = 0.0;
          pfVar6[6] = 0.0;
          pfVar6[7] = 0.0;
          auVar31 = vpsrad_avx2(auVar36,0x10);
          auVar31 = vpsubd_avx2(auVar31,auVar35);
          auVar31 = vcvtdq2ps_avx(auVar31);
          auVar32 = vcvtdq2ps_avx(auVar35);
          auVar8 = vfmadd231ps_fma(auVar32,auVar31,auVar37);
          *(undefined1 (*) [32])plVar22[iVar15 + 1] =
               ZEXT1632(CONCAT412(auVar8._12_4_ * 3.0517578e-05,
                                  CONCAT48(auVar8._8_4_ * 3.0517578e-05,
                                           CONCAT44(auVar8._4_4_ * 3.0517578e-05,
                                                    auVar8._0_4_ * 3.0517578e-05))));
          uVar11 = iVar15 + (iVar15 != uVar30 - 3) + 1;
          uVar21 = (ulonglong)uVar11;
          uVar13 = local_128;
          plVar14 = local_118;
          uVar23 = local_f0;
        } while (uVar11 < uVar30);
        uVar21 = 0;
        uVar29 = uStack_138;
        if (0xf < uVar30) {
          uVar11 = 8;
          do {
            auVar31 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar22 + uVar21));
            *(undefined1 (*) [32])(plVar22 + uVar21) = auVar31;
            uVar16 = (int)uVar21 + 0x10;
            uVar21 = (ulonglong)uVar16;
            auVar31 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar22 + (uVar11 - 4)));
            *(undefined1 (*) [32])(plVar22 + (uVar11 - 4)) = auVar31;
            auVar31 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar22 + uVar11));
            *(undefined1 (*) [32])(plVar22 + uVar11) = auVar31;
            uVar27 = uVar11 + 4;
            uVar11 = uVar11 + 0x10;
            auVar31 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(plVar22 + uVar27));
            *(undefined1 (*) [32])(plVar22 + uVar27) = auVar31;
          } while (uVar16 < (uVar30 & 0xfffffff0));
          uVar11 = uStack_140;
          uVar27 = uStack_134;
          if (uVar30 <= uVar16) goto LAB_1455596d5;
        }
        plVar14 = plVar22 + uVar21;
        uVar21 = (ulonglong)(uVar30 - (int)uVar21);
        do {
          *plVar14 = *plVar14 + 0x20;
          plVar14 = plVar14 + 1;
          uVar21 = uVar21 - 1;
          uVar11 = uStack_140;
          uVar27 = uStack_134;
        } while (uVar21 != 0);
      }
LAB_1455596d5:
      uVar29 = uVar29 + uVar27;
      uStack_138 = uVar29;
      auVar33 = vpaddd_avx2(auVar38,auVar33);
    } while (uVar26 != 0);
  }
  do {
    if (uStack_13c == 0) {
      uVar11 = local_120;
      if (uVar29 >> 0x10 < local_120) {
        uVar11 = uVar29 >> 0x10;
      }
      if ((uVar11 != 0) && (uVar26 = 0, uVar30 != 0)) {
        lVar19 = 0;
        do {
          uVar27 = uVar11 * uVar30 + uVar26;
          uVar26 = uVar26 + 1;
          *(undefined2 *)(lVar19 + *(longlong *)(param_4 + 0x20)) =
               *(undefined2 *)(lVar1 + (ulonglong)uVar27 * 2);
          lVar19 = lVar19 + 2;
        } while (uVar26 < uVar30);
      }
      uStack_12c = uStack_12c + local_110;
      *(uint *)(param_4 + 0x30) = uVar29 + uVar11 * -0x10000;
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar11;
      *(short *)((longlong)param_2 + 0x12) = (short)uStack_12c + *(short *)(param_4 + 0x2c);
      if (uVar11 == local_120) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar11;
      }
      if (uStack_12c == uVar25) {
        uVar12 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uStack_12c;
        uVar12 = 0x2b;
      }
      return uVar12;
    }
    uVar26 = uVar29 >> 0x10;
    uVar27 = uVar29 & 0xffff;
    uVar16 = uStack_13c - 1;
    uStack_130 = 0;
    if (uVar30 < 4) {
      if (uVar30 != 0) {
        local_128 = 0;
        uStack_13c = uVar26 + 1;
        uVar26 = uVar26 * uVar30;
        goto LAB_14555985c;
      }
    }
    else {
      uVar11 = uVar30 * uVar26;
      local_108 = (ulonglong)uVar11;
      uStack_13c = uVar26 + 1;
      lVar19 = (ulonglong)((uVar26 + 1) * uVar30) - (ulonglong)uVar11;
      uVar26 = (uVar30 - 4 >> 2) + 1;
      uVar21 = (ulonglong)uVar26;
      uStack_130 = uVar26 * 4;
      local_128 = uVar21 * 4;
      plVar14 = plVar22 + 2;
      psVar24 = (short *)(lVar1 + 2 + (ulonglong)uVar11 * 2);
      do {
        sVar4 = psVar24[-1];
        sVar5 = psVar24[lVar19 + -1];
        pfVar6 = (float *)plVar14[-2];
        plVar14[-2] = (longlong)(pfVar6 + 1);
        *pfVar6 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar27 + sVar4 * 0x10000) * 4.656613e-10;
        sVar4 = *psVar24;
        sVar5 = psVar24[lVar19];
        pfVar6 = (float *)plVar14[-1];
        plVar14[-1] = (longlong)(pfVar6 + 1);
        *pfVar6 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar27 + sVar4 * 0x10000) * 4.656613e-10;
        pfVar6 = (float *)*plVar14;
        *pfVar6 = (float)(int)(((int)psVar24[lVar19 + 1] - (int)psVar24[1]) * uVar27 +
                              psVar24[1] * 0x10000) * 4.656613e-10;
        pfVar7 = (float *)plVar14[1];
        sVar4 = psVar24[lVar19 + 2];
        *plVar14 = (longlong)(pfVar6 + 1);
        sVar5 = psVar24[2];
        plVar14[1] = (longlong)(pfVar7 + 1);
        *pfVar7 = (float)(int)(((int)sVar4 - (int)sVar5) * uVar27 + sVar5 * 0x10000) * 4.656613e-10;
        uVar21 = uVar21 - 1;
        plVar14 = plVar14 + 4;
        psVar24 = psVar24 + 4;
      } while (uVar21 != 0);
      uVar11 = uStack_140;
      if (uStack_130 < uVar30) {
        uVar26 = (uint)local_108;
LAB_14555985c:
        psVar24 = (short *)(lVar1 + (uVar26 + local_128) * 2);
        uVar21 = (ulonglong)(uVar30 - uStack_130);
        plVar14 = plVar22 + local_128;
        do {
          sVar4 = *psVar24;
          pfVar6 = (float *)*plVar14;
          sVar5 = psVar24[(ulonglong)(uStack_13c * uVar30) - (ulonglong)uVar26];
          psVar24 = psVar24 + 1;
          *plVar14 = (longlong)(pfVar6 + 1);
          *pfVar6 = (float)(int)(((int)sVar5 - (int)sVar4) * uVar27 + sVar4 * 0x10000) *
                    4.656613e-10;
          uVar21 = uVar21 - 1;
          plVar14 = plVar14 + 1;
          uVar11 = uStack_140;
        } while (uVar21 != 0);
      }
    }
    uVar29 = uVar29 + uVar11;
    uStack_13c = uVar16;
  } while( true );
}



// FUNCTION 145559a00 FUN_145559a00 body=1122 status=ok
// SIG undefined FUN_145559a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145559a00(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [64];
  undefined1 auVar33 [32];
  ulonglong uVar16;
  
  uVar5 = *(ushort *)((longlong)param_1 + 0x12);
  uVar15 = *(uint *)(param_4 + 0x34);
  uVar19 = *(uint *)(param_4 + 0x30);
  uVar10 = ((uVar15 - uVar19) + 0xffff) / uVar15;
  uVar22 = param_3 - *(uint *)(param_4 + 0x2c);
  pfVar6 = *(float **)(param_4 + 0x20);
  if (uVar22 < uVar10) {
    uVar10 = uVar22;
  }
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  fVar3 = *pfVar6;
  pauVar20 = (undefined1 (*) [32])(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  if (uVar10 != 0) {
    fVar4 = *pfVar1;
    uVar13 = uVar10;
    do {
      uVar17 = uVar19 & 0xffff;
      uVar19 = uVar19 + uVar15;
      auVar8 = vfmadd231ss_fma(ZEXT416((uint)fVar3),ZEXT416((uint)((float)uVar17 * (fVar4 - fVar3)))
                               ,SUB6416(ZEXT464(0x37800000),0));
      *(int *)*pauVar20 = auVar8._0_4_;
      pauVar20 = (undefined1 (*) [32])(*pauVar20 + 4);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  auVar9 = _DAT_149931da0;
  iVar2 = uVar15 * 8;
  uVar16 = (ulonglong)(((uint)uVar5 * 0x10000 - uVar19) + -1 + uVar15) / (ulonglong)uVar15;
  uVar23 = (ulonglong)(uVar22 - uVar10);
  if ((uint)uVar16 <= uVar22 - uVar10) {
    uVar23 = uVar16;
  }
  uVar16 = uVar23 >> 3;
  auVar24._4_4_ = uVar15;
  auVar24._0_4_ = uVar15;
  auVar24._8_4_ = uVar15;
  auVar24._12_4_ = uVar15;
  auVar24._16_4_ = uVar15;
  auVar24._20_4_ = uVar15;
  auVar24._24_4_ = uVar15;
  auVar24._28_4_ = uVar15;
  auVar24 = vpmulld_avx2(auVar24,_DAT_149931240);
  uVar13 = (uint)uVar16;
  iVar18 = (int)uVar23 + uVar13 * -8;
  auVar25._4_4_ = uVar19;
  auVar25._0_4_ = uVar19;
  auVar25._8_4_ = uVar19;
  auVar25._12_4_ = uVar19;
  auVar25._16_4_ = uVar19;
  auVar25._20_4_ = uVar19;
  auVar25._24_4_ = uVar19;
  auVar25._28_4_ = uVar19;
  auVar33._4_4_ = iVar2;
  auVar33._0_4_ = iVar2;
  auVar33._8_4_ = iVar2;
  auVar33._12_4_ = iVar2;
  auVar33._16_4_ = iVar2;
  auVar33._20_4_ = iVar2;
  auVar33._24_4_ = iVar2;
  auVar33._28_4_ = iVar2;
  auVar24 = vpaddd_avx2(auVar24,auVar25);
  auVar32 = ZEXT3264(auVar24);
  if (uVar15 < 0x10000) {
    if (uVar19 + 0x40000 < (uint)uVar5 * 0x10000) {
      uVar17 = (((uint)uVar5 * 0x10000 - (uVar19 + 0x40000)) + -1 + uVar15) / uVar15;
    }
    else {
      uVar17 = 0;
    }
    uVar21 = (ulonglong)(uVar17 >> 3);
    if (uVar13 <= uVar17 >> 3) {
      uVar21 = uVar16;
    }
    uVar16 = (ulonglong)(uVar13 - (int)uVar21);
    if ((int)uVar21 != 0) {
      do {
        auVar29 = auVar32._0_32_;
        auVar25 = vpsrad_avx2(auVar29,0x10);
        auVar24 = vshufps_avx(auVar25,auVar25,0);
        auVar28 = vpsubd_avx2(auVar25,auVar24);
        uVar13 = uVar15 * 4 + uVar19;
        uVar17 = uVar19 >> 0x10;
        uVar19 = uVar19 + iVar2;
        uVar14 = (ulonglong)(uVar13 >> 0x10);
        auVar26._16_16_ = *(undefined1 (*) [16])(pfVar1 + (uVar14 - 1));
        auVar26._0_16_ = *(undefined1 (*) [16])(pfVar1 + ((ulonglong)uVar17 - 1));
        auVar25 = vpermilps_avx(auVar26,auVar28);
        auVar24 = vpand_avx2(auVar9,auVar29);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar30._0_4_ = auVar24._0_4_ * 1.5258789e-05;
        auVar30._4_4_ = auVar24._4_4_ * 1.5258789e-05;
        auVar30._8_4_ = auVar24._8_4_ * 1.5258789e-05;
        auVar30._12_4_ = auVar24._12_4_ * 1.5258789e-05;
        auVar30._16_4_ = auVar24._16_4_ * 1.5258789e-05;
        auVar30._20_4_ = auVar24._20_4_ * 1.5258789e-05;
        auVar30._24_4_ = auVar24._24_4_ * 1.5258789e-05;
        auVar30._28_4_ = auVar24._28_4_ * 1.5258789e-05;
        auVar27._16_16_ = *(undefined1 (*) [16])(pfVar1 + uVar14);
        auVar27._0_16_ = *(undefined1 (*) [16])(pfVar1 + uVar17);
        auVar24 = vpermilps_avx(auVar27,auVar28);
        auVar24 = vsubps_avx(auVar24,auVar25);
        auVar8 = vfmadd231ps_fma(auVar25,auVar24,auVar30);
        *pauVar20 = ZEXT1632(auVar8);
        pauVar20 = pauVar20 + 1;
        auVar24 = vpaddd_avx2(auVar29,auVar33);
        auVar32 = ZEXT3264(auVar24);
        uVar13 = (int)uVar21 - 1;
        uVar21 = (ulonglong)uVar13;
      } while (uVar13 != 0);
    }
  }
  auVar9 = _DAT_149931da0;
  if ((int)uVar16 != 0) {
    do {
      auVar8 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(pfVar1 + ((ulonglong)(uVar15 * 4 + uVar19 >> 0x10) - 1)),
                           0);
      auVar8 = vpinsrq_avx(auVar8,*(undefined8 *)
                                   (pfVar1 + ((ulonglong)(uVar15 * 5 + uVar19 >> 0x10) - 1)),1);
      auVar7 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(pfVar1 + ((ulonglong)(uVar19 >> 0x10) - 1)),0);
      auVar7 = vpinsrq_avx(auVar7,*(undefined8 *)
                                   (pfVar1 + ((ulonglong)(uVar15 + uVar19 >> 0x10) - 1)),1);
      auVar31._16_16_ = auVar8;
      auVar31._0_16_ = auVar7;
      auVar8 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(pfVar1 + ((ulonglong)(uVar15 * 6 + uVar19 >> 0x10) - 1)),
                           0);
      auVar8 = vpinsrq_avx(auVar8,*(undefined8 *)
                                   (pfVar1 + ((ulonglong)(uVar15 * 7 + uVar19 >> 0x10) - 1)),1);
      uVar13 = uVar15 * 2 + uVar19;
      uVar17 = uVar15 * 3 + uVar19;
      uVar19 = uVar19 + iVar2;
      auVar7 = vpinsrq_avx((undefined1  [16])0x0,
                           *(undefined8 *)(pfVar1 + ((ulonglong)(uVar13 >> 0x10) - 1)),0);
      auVar7 = vpinsrq_avx(auVar7,*(undefined8 *)(pfVar1 + ((ulonglong)(uVar17 >> 0x10) - 1)),1);
      auVar29._16_16_ = auVar8;
      auVar29._0_16_ = auVar7;
      auVar24 = vpand_avx2(auVar9,auVar32._0_32_);
      auVar24 = vcvtdq2ps_avx(auVar24);
      auVar25 = vshufps_avx(auVar31,auVar29,0x88);
      auVar28._0_4_ = auVar24._0_4_ * 1.5258789e-05;
      auVar28._4_4_ = auVar24._4_4_ * 1.5258789e-05;
      auVar28._8_4_ = auVar24._8_4_ * 1.5258789e-05;
      auVar28._12_4_ = auVar24._12_4_ * 1.5258789e-05;
      auVar28._16_4_ = auVar24._16_4_ * 1.5258789e-05;
      auVar28._20_4_ = auVar24._20_4_ * 1.5258789e-05;
      auVar28._24_4_ = auVar24._24_4_ * 1.5258789e-05;
      auVar28._28_4_ = auVar24._28_4_ * 1.5258789e-05;
      auVar24 = vshufps_avx(auVar31,auVar29,0xdd);
      auVar24 = vsubps_avx(auVar24,auVar25);
      auVar8 = vfmadd231ps_fma(auVar25,auVar24,auVar28);
      *pauVar20 = ZEXT1632(auVar8);
      pauVar20 = pauVar20 + 1;
      auVar24 = vpaddd_avx2(auVar32._0_32_,auVar33);
      auVar32 = ZEXT3264(auVar24);
      uVar13 = (int)uVar16 - 1;
      uVar16 = (ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  uVar13 = (uint)uVar5;
  while( true ) {
    uVar17 = uVar19 >> 0x10;
    if (iVar18 == 0) break;
    uVar11 = uVar19 & 0xffff;
    uVar19 = uVar19 + uVar15;
    auVar8 = vfmadd231ss_fma(ZEXT416((uint)pfVar1[(ulonglong)uVar17 - 1]),
                             ZEXT416((uint)((pfVar1[(ulonglong)(uVar17 + 1) - 1] -
                                            pfVar1[(ulonglong)uVar17 - 1]) * (float)uVar11)),
                             SUB6416(ZEXT464(0x37800000),0));
    *(int *)*pauVar20 = auVar8._0_4_;
    iVar18 = iVar18 + -1;
    pauVar20 = (undefined1 (*) [32])(*pauVar20 + 4);
  }
  uVar16 = (ulonglong)uVar13;
  if (uVar17 < uVar13) {
    uVar16 = (ulonglong)uVar17;
  }
  uVar15 = (uint)uVar16;
  if (uVar15 != 0) {
    *pfVar6 = pfVar1[uVar16 - 1];
  }
  uVar10 = uVar10 + (int)uVar23;
  *(uint *)(param_4 + 0x30) = uVar19 + uVar15 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar16;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar10 + *(short *)(param_4 + 0x2c);
  if (uVar15 == uVar13) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar15;
  }
  if (uVar10 == uVar22) {
    uVar12 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar10;
    uVar12 = 0x2b;
  }
  return uVar12;
}



// FUNCTION 145559e70 FUN_145559e70 body=1588 status=ok
// SIG undefined FUN_145559e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145559e70(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 (*pauVar29) [32];
  undefined1 (*pauVar30) [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [32];
  
  auVar9 = _DAT_149934d20;
  uVar24 = *(uint *)(param_4 + 0x34);
  uVar19 = *(uint *)(param_4 + 0x30);
  uVar26 = *(uint *)(param_4 + 0x2c);
  lVar7 = *param_1;
  uVar20 = param_3 - uVar26;
  uVar12 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar14 = (ulonglong)((uVar24 - uVar19) + 0xffff) / (ulonglong)uVar24;
  uVar23 = *(uint *)(param_4 + 0x28);
  pauVar29 = (undefined1 (*) [32])(*param_2 + (ulonglong)uVar26 * 4);
  if (uVar20 < (uint)uVar14) {
    uVar14 = (ulonglong)uVar20;
  }
  uVar15 = (uint)uVar14;
  lVar1 = lVar7 + ((ulonglong)uVar23 - 1) * 4;
  lVar2 = lVar1 + (ulonglong)*(ushort *)(param_1 + 2) * 4;
  pauVar30 = (undefined1 (*) [32])
             (*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) + (ulonglong)uVar26) * 4);
  auVar8._8_8_ = pauVar30;
  auVar8._0_8_ = pauVar29;
  fVar4 = **(float **)(param_4 + 0x20);
  fVar5 = (*(float **)(param_4 + 0x20))[1];
  auVar39 = _DAT_149da9d80;
  auVar11 = _DAT_149931da0;
  uVar26 = uVar15;
  while (auVar45 = ZEXT1664(auVar8), _DAT_149931da0 = auVar11, _DAT_149da9d80 = auVar39, uVar26 != 0
        ) {
    uVar26 = uVar19 & 0xffff;
    fVar6 = *(float *)(lVar2 + 4);
    uVar19 = uVar19 + uVar24;
    auVar8 = vpaddq_avx(auVar8,auVar9);
    auVar38 = ZEXT416((uint)((float)uVar26 * 1.5258789e-05));
    auVar39 = vfmadd231ss_fma(ZEXT416((uint)fVar4),auVar38,
                              ZEXT416((uint)(*(float *)(lVar7 + (ulonglong)uVar23 * 4) - fVar4)));
    *(int *)*pauVar29 = auVar39._0_4_;
    auVar39 = vfmadd231ss_fma(ZEXT416((uint)fVar5),ZEXT416((uint)(fVar6 - fVar5)),auVar38);
    *(int *)*pauVar30 = auVar39._0_4_;
    pauVar30 = (undefined1 (*) [32])vpextrq_avx(auVar8,1);
    pauVar29 = auVar8._0_8_;
    uVar26 = (int)uVar14 - 1;
    uVar14 = (ulonglong)uVar26;
    auVar39 = _DAT_149da9d80;
    auVar11 = _DAT_149931da0;
  }
  uVar14 = (ulonglong)((uVar12 * 0x10000 - uVar19) + -1 + uVar24) / (ulonglong)uVar24;
  uVar18 = (ulonglong)(uVar20 - uVar15);
  if ((uint)uVar14 <= uVar20 - uVar15) {
    uVar18 = uVar14;
  }
  uVar14 = uVar18 >> 3;
  auVar31._4_4_ = uVar24;
  auVar31._0_4_ = uVar24;
  auVar31._8_4_ = uVar24;
  auVar31._12_4_ = uVar24;
  auVar31._16_4_ = uVar24;
  auVar31._20_4_ = uVar24;
  auVar31._24_4_ = uVar24;
  auVar31._28_4_ = uVar24;
  auVar31 = vpmulld_avx2(auVar31,_DAT_149931240);
  auVar32._4_4_ = uVar19;
  auVar32._0_4_ = uVar19;
  auVar32._8_4_ = uVar19;
  auVar32._12_4_ = uVar19;
  auVar32._16_4_ = uVar19;
  auVar32._20_4_ = uVar19;
  auVar32._24_4_ = uVar19;
  auVar32._28_4_ = uVar19;
  uVar26 = (uint)uVar14;
  iVar27 = (int)uVar18 + uVar26 * -8;
  iVar3 = uVar24 * 8;
  auVar47._4_4_ = iVar3;
  auVar47._0_4_ = iVar3;
  auVar47._8_4_ = iVar3;
  auVar47._12_4_ = iVar3;
  auVar47._16_4_ = iVar3;
  auVar47._20_4_ = iVar3;
  auVar47._24_4_ = iVar3;
  auVar47._28_4_ = iVar3;
  auVar31 = vpaddd_avx2(auVar31,auVar32);
  auVar46 = ZEXT3264(auVar31);
  if (uVar24 < 0x10000) {
    if (uVar19 + 0x40000 < uVar12 * 0x10000) {
      uVar23 = ((uVar12 * 0x10000 - (uVar19 + 0x40000)) + -1 + uVar24) / uVar24;
    }
    else {
      uVar23 = 0;
    }
    uVar17 = (ulonglong)(uVar23 >> 3);
    if (uVar26 <= uVar23 >> 3) {
      uVar17 = uVar14;
    }
    uVar26 = uVar26 - (int)uVar17;
    uVar14 = (ulonglong)uVar26;
    if ((int)uVar17 != 0) {
      do {
        auVar33 = auVar46._0_32_;
        auVar32 = vpsrad_avx2(auVar33,0x10);
        auVar31 = vshufps_avx(auVar32,auVar32,0);
        auVar37 = vpsubd_avx2(auVar32,auVar31);
        auVar43 = vpand_avx2(auVar11,auVar33);
        uVar23 = uVar24 * 4 + uVar19;
        uVar16 = (ulonglong)(uVar19 >> 0x10);
        uVar19 = uVar19 + uVar24 * 8;
        uVar14 = (ulonglong)(uVar23 >> 0x10);
        auVar9 = vpaddq_avx(auVar45._0_16_,auVar39);
        auVar45 = ZEXT1664(auVar9);
        auVar31 = vpaddd_avx2(auVar33,auVar47);
        auVar46 = ZEXT3264(auVar31);
        auVar33._16_16_ = *(undefined1 (*) [16])(lVar1 + uVar14 * 4);
        auVar33._0_16_ = *(undefined1 (*) [16])(lVar1 + uVar16 * 4);
        auVar32 = vpermilps_avx(auVar33,auVar37);
        auVar34._16_16_ = *(undefined1 (*) [16])(lVar2 + uVar14 * 4);
        auVar34._0_16_ = *(undefined1 (*) [16])(lVar2 + uVar16 * 4);
        auVar31 = vcvtdq2ps_avx(auVar43);
        auVar40._0_4_ = auVar31._0_4_ * 1.5258789e-05;
        auVar40._4_4_ = auVar31._4_4_ * 1.5258789e-05;
        auVar40._8_4_ = auVar31._8_4_ * 1.5258789e-05;
        auVar40._12_4_ = auVar31._12_4_ * 1.5258789e-05;
        auVar40._16_4_ = auVar31._16_4_ * 1.5258789e-05;
        auVar40._20_4_ = auVar31._20_4_ * 1.5258789e-05;
        auVar40._24_4_ = auVar31._24_4_ * 1.5258789e-05;
        auVar40._28_4_ = auVar31._28_4_ * 1.5258789e-05;
        auVar43 = vpermilps_avx(auVar34,auVar37);
        auVar35._16_16_ = *(undefined1 (*) [16])(lVar1 + 4 + uVar14 * 4);
        auVar35._0_16_ = *(undefined1 (*) [16])(lVar1 + 4 + uVar16 * 4);
        auVar31 = vpermilps_avx(auVar35,auVar37);
        auVar36._16_16_ = *(undefined1 (*) [16])(lVar2 + 4 + uVar14 * 4);
        auVar36._0_16_ = *(undefined1 (*) [16])(lVar2 + 4 + uVar16 * 4);
        auVar31 = vsubps_avx(auVar31,auVar32);
        auVar8 = vfmadd231ps_fma(auVar32,auVar31,auVar40);
        *pauVar29 = ZEXT1632(auVar8);
        auVar31 = vpermilps_avx(auVar36,auVar37);
        auVar31 = vsubps_avx(auVar31,auVar43);
        auVar8 = vfmadd231ps_fma(auVar43,auVar31,auVar40);
        *pauVar30 = ZEXT1632(auVar8);
        pauVar30 = (undefined1 (*) [32])vpextrq_avx(auVar9,1);
        pauVar29 = auVar9._0_8_;
        uVar23 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar23;
      } while (uVar23 != 0);
      uVar14 = (ulonglong)uVar26;
    }
  }
  auVar9 = _DAT_149da9d80;
  auVar11 = _DAT_149931da0;
  if ((int)uVar14 != 0) {
    do {
      uVar26 = (int)uVar14 - 1;
      uVar28 = (ulonglong)(uVar24 * 4 + uVar19 >> 0x10);
      uVar14 = (ulonglong)(uVar24 * 7 + uVar19 >> 0x10);
      uVar16 = (ulonglong)(uVar24 + uVar19 >> 0x10);
      auVar8 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar1 + uVar28 * 4),0);
      uVar25 = (ulonglong)(uVar24 * 5 + uVar19 >> 0x10);
      auVar39 = vpinsrq_avx((undefined1  [16])0x0,
                            *(undefined8 *)(lVar1 + (ulonglong)(uVar19 >> 0x10) * 4),0);
      auVar39 = vpinsrq_avx(auVar39,*(undefined8 *)(lVar1 + uVar16 * 4),1);
      uVar22 = (ulonglong)(uVar24 * 2 + uVar19 >> 0x10);
      auVar8 = vpinsrq_avx(auVar8,*(undefined8 *)(lVar1 + uVar25 * 4),1);
      auVar44._16_16_ = auVar8;
      auVar44._0_16_ = auVar39;
      uVar17 = (ulonglong)(uVar24 * 6 + uVar19 >> 0x10);
      auVar8 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar1 + uVar22 * 4),0);
      uVar21 = (ulonglong)(uVar24 * 3 + uVar19 >> 0x10);
      auVar39 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar1 + uVar17 * 4),0);
      auVar39 = vpinsrq_avx(auVar39,*(undefined8 *)(lVar1 + uVar14 * 4),1);
      auVar38 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar2 + uVar28 * 4),0);
      auVar8 = vpinsrq_avx(auVar8,*(undefined8 *)(lVar1 + uVar21 * 4),1);
      auVar10 = vpinsrq_avx((undefined1  [16])0x0,
                            *(undefined8 *)(lVar2 + (ulonglong)(uVar19 >> 0x10) * 4),0);
      auVar43._16_16_ = auVar39;
      auVar43._0_16_ = auVar8;
      auVar8 = vpinsrq_avx(auVar10,*(undefined8 *)(lVar2 + uVar16 * 4),1);
      auVar39 = vpinsrq_avx(auVar38,*(undefined8 *)(lVar2 + uVar25 * 4),1);
      auVar38 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar2 + uVar17 * 4),0);
      auVar10 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar2 + uVar22 * 4),0);
      auVar42._16_16_ = auVar39;
      auVar42._0_16_ = auVar8;
      auVar8 = vpinsrq_avx(auVar38,*(undefined8 *)(lVar2 + uVar14 * 4),1);
      auVar39 = vpinsrq_avx(auVar10,*(undefined8 *)(lVar2 + uVar21 * 4),1);
      uVar14 = (ulonglong)uVar26;
      uVar19 = uVar19 + uVar24 * 8;
      auVar41._16_16_ = auVar8;
      auVar41._0_16_ = auVar39;
      auVar31 = vpand_avx2(auVar11,auVar46._0_32_);
      auVar31 = vcvtdq2ps_avx(auVar31);
      auVar37._0_4_ = auVar31._0_4_ * 1.5258789e-05;
      auVar37._4_4_ = auVar31._4_4_ * 1.5258789e-05;
      auVar37._8_4_ = auVar31._8_4_ * 1.5258789e-05;
      auVar37._12_4_ = auVar31._12_4_ * 1.5258789e-05;
      auVar37._16_4_ = auVar31._16_4_ * 1.5258789e-05;
      auVar37._20_4_ = auVar31._20_4_ * 1.5258789e-05;
      auVar37._24_4_ = auVar31._24_4_ * 1.5258789e-05;
      auVar37._28_4_ = auVar31._28_4_ * 1.5258789e-05;
      auVar31 = vshufps_avx(auVar44,auVar43,0xdd);
      auVar32 = vshufps_avx(auVar44,auVar43,0x88);
      auVar43 = vsubps_avx(auVar31,auVar32);
      auVar31 = vshufps_avx(auVar42,auVar41,0x88);
      auVar8 = vfmadd231ps_fma(auVar32,auVar43,auVar37);
      *pauVar29 = ZEXT1632(auVar8);
      auVar8 = vpaddq_avx(auVar45._0_16_,auVar9);
      auVar45 = ZEXT1664(auVar8);
      auVar32 = vshufps_avx(auVar42,auVar41,0xdd);
      auVar32 = vsubps_avx(auVar32,auVar31);
      auVar39 = vfmadd231ps_fma(auVar31,auVar32,auVar37);
      *pauVar30 = ZEXT1632(auVar39);
      pauVar30 = (undefined1 (*) [32])vpextrq_avx(auVar8,1);
      auVar31 = vpaddd_avx2(auVar46._0_32_,auVar47);
      auVar46 = ZEXT3264(auVar31);
      pauVar29 = auVar8._0_8_;
    } while (uVar26 != 0);
  }
  auVar9 = _DAT_149934d20;
  uVar14 = (ulonglong)(uVar19 >> 0x10);
  if (iVar27 != 0) {
    while( true ) {
      uVar23 = uVar19 & 0xffff;
      fVar4 = *(float *)(lVar1 + uVar14 * 4);
      fVar5 = *(float *)(lVar2 + uVar14 * 4);
      uVar26 = (int)uVar14 + 1;
      uVar19 = uVar19 + uVar24;
      auVar39 = ZEXT416((uint)((float)uVar23 * 1.5258789e-05));
      auVar8 = vfmadd231ss_fma(ZEXT416((uint)fVar4),auVar39,
                               ZEXT416((uint)(*(float *)(lVar1 + (ulonglong)uVar26 * 4) - fVar4)));
      uVar14 = (ulonglong)(uVar19 >> 0x10);
      auVar39 = vfmadd231ss_fma(ZEXT416((uint)fVar5),
                                ZEXT416((uint)(*(float *)(lVar2 + (ulonglong)uVar26 * 4) - fVar5)),
                                auVar39);
      *(int *)*pauVar29 = auVar8._0_4_;
      *(int *)*pauVar30 = auVar39._0_4_;
      auVar8 = vpaddq_avx(auVar45._0_16_,auVar9);
      auVar45 = ZEXT1664(auVar8);
      iVar27 = iVar27 + -1;
      if (iVar27 == 0) break;
      pauVar30 = (undefined1 (*) [32])vpextrq_avx(auVar8,1);
      pauVar29 = auVar8._0_8_;
    }
  }
  uVar17 = (ulonglong)uVar12;
  if ((uint)uVar14 < uVar12) {
    uVar17 = uVar14;
  }
  uVar24 = (uint)uVar17;
  if (uVar24 != 0) {
    **(undefined4 **)(param_4 + 0x20) = *(undefined4 *)(lVar1 + uVar17 * 4);
    *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 4) = *(undefined4 *)(lVar2 + uVar17 * 4);
  }
  uVar15 = (int)uVar18 + uVar15;
  *(uint *)(param_4 + 0x30) = uVar19 + uVar24 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar17;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar15 + *(short *)(param_4 + 0x2c);
  if (uVar24 == uVar12) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar24;
  }
  if (uVar15 == uVar20) {
    uVar13 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar15;
    uVar13 = 0x2b;
  }
  return uVar13;
}



// FUNCTION 14555a4b0 FUN_14555a4b0 body=3162 status=ok
// SIG undefined FUN_14555a4b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14555a4b0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  undefined8 *puVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  uint uVar36;
  undefined1 auVar37 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar53 [32];
  undefined1 auVar54 [64];
  undefined1 auVar55 [32];
  undefined8 auStack_1a0 [5];
  longlong local_178 [3];
  uint uStack_160;
  longlong lStack_158;
  uint uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  uint local_140;
  undefined8 local_138;
  undefined8 local_130;
  uint local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 *local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  uVar15 = *(uint *)(param_4 + 0x34);
  uVar26 = *(uint *)(param_4 + 0x30);
  uVar36 = *(uint *)(param_4 + 0x2c);
  uStack_14c = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar29 = param_3 - uVar36;
  uStack_160 = uVar15;
  uStack_150 = ((uVar15 - uVar26) + 0xffff) / uVar15;
  if (uVar29 < uStack_150) {
    uStack_150 = uVar29;
  }
  uVar16 = *(uint *)(param_1 + 1);
  uVar31 = uVar16 & 0xff;
  uVar35 = (ulonglong)uVar31;
  local_140 = uVar16;
  local_128 = uVar31;
  local_108 = uVar35;
  uVar25 = uVar35 * 8;
  uVar17 = uVar25 + 0xf;
  if (uVar17 <= uVar25) {
    uVar17 = 0xffffffffffffff0;
  }
  lVar33 = -(uVar17 & 0xfffffffffffffff0);
  lStack_158 = (longlong)local_178 + lVar33;
  uVar17 = uVar25 + 0xf;
  if (uVar17 <= uVar25) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1a0 + lVar33) = 0x14555a5bd;
  lVar24 = lStack_158;
  uVar25 = 0;
  puVar30 = (undefined8 *)((longlong)local_178 + (lVar33 - (uVar17 & 0xfffffffffffffff0)));
  local_110 = puVar30;
  if (uVar31 != 0) {
    if ((7 < uVar31) && (5 < DAT_14c707900)) {
      uVar6 = (undefined2)param_1[2];
      uVar3 = *(undefined4 *)(param_4 + 0x28);
      auVar45._4_4_ = uVar3;
      auVar45._0_4_ = uVar3;
      auVar45._8_4_ = uVar3;
      auVar45._12_4_ = uVar3;
      lVar33 = *param_1;
      auVar50._8_8_ = lVar33;
      auVar50._0_8_ = lVar33;
      auVar50._16_8_ = lVar33;
      auVar50._24_8_ = lVar33;
      lVar8 = *(longlong *)(param_4 + 0x50);
      lVar33 = *param_2;
      auVar51._8_8_ = lVar33;
      auVar51._0_8_ = lVar33;
      auVar51._16_8_ = lVar33;
      auVar51._24_8_ = lVar33;
      local_e0 = 0x100000000;
      uStack_d8 = 0x300000002;
      uStack_d0 = 0x500000004;
      uStack_c8 = 0x700000006;
      auVar14._8_8_ = 0x300000002;
      auVar14._0_8_ = 0x100000000;
      uVar7 = (undefined2)param_2[2];
      auVar42._2_2_ = uVar7;
      auVar42._0_2_ = uVar7;
      auVar42._4_2_ = uVar7;
      auVar42._6_2_ = uVar7;
      auVar42._8_2_ = uVar7;
      auVar42._10_2_ = uVar7;
      auVar42._12_2_ = uVar7;
      auVar42._14_2_ = uVar7;
      auVar49._2_2_ = uVar6;
      auVar49._0_2_ = uVar6;
      auVar49._4_2_ = uVar6;
      auVar49._6_2_ = uVar6;
      auVar49._8_2_ = uVar6;
      auVar49._10_2_ = uVar6;
      auVar49._12_2_ = uVar6;
      auVar49._14_2_ = uVar6;
      auVar38._4_4_ = uVar36;
      auVar38._0_4_ = uVar36;
      auVar38._8_4_ = uVar36;
      auVar38._12_4_ = uVar36;
      auVar13 = vpmovzxwq_avx2(auVar42);
      auVar44 = vpmovzxdq_avx2(auVar45);
      auVar43 = vpmovzxwq_avx2(auVar49);
      auVar55 = vpmovzxdq_avx2(auVar38);
      do {
        iVar27 = (int)uVar25;
        uVar15 = iVar27 + 4;
        uVar17 = (ulonglong)uVar15;
        auVar39._4_4_ = iVar27;
        auVar39._0_4_ = iVar27;
        auVar39._8_4_ = iVar27;
        auVar39._12_4_ = iVar27;
        auVar38 = vpaddd_avx(auVar39,auVar14);
        auVar37 = vpmovzxdq_avx2(auVar38);
        auVar37 = vpmullq_avx512vl(auVar43,auVar37);
        auVar37 = vpaddq_avx2(auVar37,auVar44);
        auVar37 = vpsllq_avx2(auVar37,2);
        auVar37 = vpsubq_avx2(auVar37,_DAT_149da9da0);
        auVar37 = vpaddq_avx2(auVar37,auVar50);
        auVar46 = vpmovzxbq_avx2(ZEXT416(*(uint *)(uVar25 + lVar8)));
        *(undefined1 (*) [32])(lVar24 + uVar25 * 8) = auVar37;
        auVar37 = vpmullq_avx512vl(auVar46,auVar13);
        auVar37 = vpaddq_avx2(auVar37,auVar55);
        auVar37 = vpsllq_avx2(auVar37,2);
        auVar37 = vpaddq_avx2(auVar37,auVar51);
        *(undefined1 (*) [32])(puVar30 + uVar25) = auVar37;
        auVar40._4_4_ = uVar15;
        auVar40._0_4_ = uVar15;
        auVar40._8_4_ = uVar15;
        auVar40._12_4_ = uVar15;
        auVar38 = vpaddd_avx(auVar40,auVar14);
        auVar37 = vpmovzxdq_avx2(auVar38);
        auVar37 = vpmullq_avx512vl(auVar43,auVar37);
        auVar37 = vpaddq_avx2(auVar37,auVar44);
        auVar37 = vpsllq_avx2(auVar37,2);
        auVar37 = vpsubq_avx2(auVar37,_DAT_149da9da0);
        auVar37 = vpaddq_avx2(auVar37,auVar50);
        auVar46 = vpmovzxbq_avx2(ZEXT416(*(uint *)(uVar17 + lVar8)));
        *(undefined1 (*) [32])(lVar24 + uVar17 * 8) = auVar37;
        auVar37 = vpmullq_avx512vl(auVar46,auVar13);
        auVar37 = vpaddq_avx2(auVar37,auVar55);
        auVar37 = vpsllq_avx2(auVar37,2);
        uVar32 = iVar27 + 8;
        uVar25 = (ulonglong)uVar32;
        auVar37 = vpaddq_avx2(auVar37,auVar51);
        *(undefined1 (*) [32])(puVar30 + uVar17) = auVar37;
      } while (uVar32 < (uVar16 & 0xf8));
      uVar15 = uStack_160;
      if (uVar31 <= uVar32) goto LAB_14555a7d2;
    }
    lVar24 = *(longlong *)(param_4 + 0x50);
    lVar8 = *param_1;
    local_148 = (ulonglong)uVar36;
    lVar33 = (ulonglong)*(ushort *)(param_1 + 2) * 4;
    local_130 = lVar33;
    local_138 = (ulonglong)*(ushort *)(param_2 + 2);
    lVar28 = lStack_158 - (longlong)puVar30;
    lVar9 = *param_2;
    local_120 = lVar9;
    lVar20 = (*(ushort *)(param_1 + 2) * uVar25 + (ulonglong)*(uint *)(param_4 + 0x28)) * 4;
    uVar17 = (ulonglong)(uVar31 - (int)uVar25);
    plVar22 = puVar30 + uVar25;
    do {
      lVar18 = lVar8 + -4 + lVar20;
      lVar20 = lVar20 + lVar33;
      *(longlong *)(lVar28 + (longlong)plVar22) = lVar18;
      pbVar2 = (byte *)(uVar25 + lVar24);
      uVar25 = uVar25 + 1;
      *plVar22 = lVar9 + (*pbVar2 * local_138 + local_148) * 4;
      uVar17 = uVar17 - 1;
      plVar22 = plVar22 + 1;
      puVar30 = local_110;
      uVar15 = uStack_160;
    } while (uVar17 != 0);
  }
LAB_14555a7d2:
  lVar33 = lStack_158;
  uVar36 = uStack_150;
  uVar16 = local_140;
  auVar13 = _DAT_149931da0;
  while (_DAT_149931da0 = auVar13, lStack_158 = lVar33, local_140 = uVar16, uVar36 != 0) {
    uVar36 = uVar36 - 1;
    uVar16 = 0;
    if (uVar31 < 4) {
      if (uVar31 != 0) {
        lVar24 = 0;
        lVar33 = lVar33 - (longlong)puVar30;
        fVar48 = (float)(uVar26 & 0xffff);
        goto LAB_14555a916;
      }
    }
    else {
      lVar24 = 0;
      fVar48 = (float)(uVar26 & 0xffff);
      lVar33 = lVar33 - (longlong)puVar30;
      uVar16 = (uVar31 - 4 >> 2) + 1;
      fVar12 = fVar48 * 1.5258789e-05;
      uVar17 = (ulonglong)uVar16;
      uVar16 = uVar16 * 4;
      plVar22 = puVar30 + 1;
      do {
        puVar10 = (undefined4 *)plVar22[-1];
        plVar1 = plVar22 + 4;
        fVar4 = *(float *)(*(longlong *)(param_4 + 0x20) + lVar24 * 4);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(*(float *)(*(longlong *)
                                                             (lVar33 + -0x28 + (longlong)plVar1) + 4
                                                           ) - fVar4)));
        *puVar10 = auVar14._0_4_;
        puVar11 = (undefined4 *)*plVar22;
        plVar22[-1] = (longlong)(puVar10 + 1);
        fVar4 = *(float *)(*(longlong *)(param_4 + 0x20) + 4 + lVar24 * 4);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(*(float *)(*(longlong *)
                                                             ((longlong)plVar22 + lVar33) + 4) -
                                                fVar4)));
        *puVar11 = auVar14._0_4_;
        puVar10 = (undefined4 *)plVar22[1];
        *plVar22 = (longlong)(puVar11 + 1);
        fVar4 = *(float *)(*(longlong *)(param_4 + 0x20) + 8 + lVar24 * 4);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(*(float *)(*(longlong *)
                                                             (lVar33 + -0x18 + (longlong)plVar1) + 4
                                                           ) - fVar4)));
        *puVar10 = auVar14._0_4_;
        puVar11 = (undefined4 *)plVar22[2];
        plVar22[1] = (longlong)(puVar10 + 1);
        fVar4 = *(float *)(*(longlong *)(param_4 + 0x20) + 0xc + lVar24 * 4);
        lVar24 = lVar24 + 4;
        fVar5 = *(float *)(*(longlong *)(lVar33 + -0x10 + (longlong)plVar1) + 4);
        plVar22[2] = (longlong)(puVar11 + 1);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(fVar5 - fVar4)));
        *puVar11 = auVar14._0_4_;
        uVar17 = uVar17 - 1;
        plVar22 = plVar1;
      } while (uVar17 != 0);
      if (uVar16 < uVar31) {
LAB_14555a916:
        uVar17 = (ulonglong)(uVar31 - uVar16);
        plVar22 = puVar30 + lVar24;
        lVar24 = lVar24 * 4;
        do {
          puVar10 = (undefined4 *)*plVar22;
          fVar12 = *(float *)(lVar24 + *(longlong *)(param_4 + 0x20));
          fVar4 = *(float *)(*(longlong *)((longlong)plVar22 + lVar33) + 4);
          *plVar22 = (longlong)(puVar10 + 1);
          auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar12),ZEXT416((uint)(fVar48 * 1.5258789e-05)),
                                    ZEXT416((uint)(fVar4 - fVar12)));
          *puVar10 = auVar14._0_4_;
          uVar17 = uVar17 - 1;
          plVar22 = plVar22 + 1;
          lVar24 = lVar24 + 4;
        } while (uVar17 != 0);
      }
    }
    uVar26 = uVar26 + uVar15;
    lVar33 = lStack_158;
    uVar16 = local_140;
    auVar13 = _DAT_149931da0;
  }
  uVar32 = ((uStack_14c * 0x10000 - uVar26) + -1 + uVar15) / uVar15;
  uVar36 = uVar29 - uStack_150;
  if (uVar32 <= uVar29 - uStack_150) {
    uVar36 = uVar32;
  }
  local_120 = CONCAT44(local_120._4_4_,uVar36);
  uVar32 = uVar36 >> 3;
  auVar43._4_4_ = uVar15;
  auVar43._0_4_ = uVar15;
  auVar43._8_4_ = uVar15;
  auVar43._12_4_ = uVar15;
  auVar43._16_4_ = uVar15;
  auVar43._20_4_ = uVar15;
  auVar43._24_4_ = uVar15;
  auVar43._28_4_ = uVar15;
  auVar43 = vpmulld_avx2(auVar43,_DAT_149931240);
  auVar44._4_4_ = uVar26;
  auVar44._0_4_ = uVar26;
  auVar44._8_4_ = uVar26;
  auVar44._12_4_ = uVar26;
  auVar44._16_4_ = uVar26;
  auVar44._20_4_ = uVar26;
  auVar44._24_4_ = uVar26;
  auVar44._28_4_ = uVar26;
  iVar27 = uVar15 * 8;
  local_130 = CONCAT44(local_130._4_4_,uVar36 + uVar32 * -8);
  local_138 = CONCAT44(local_138._4_4_,iVar27);
  auVar55._4_4_ = iVar27;
  auVar55._0_4_ = iVar27;
  auVar55._8_4_ = iVar27;
  auVar55._12_4_ = iVar27;
  auVar55._16_4_ = iVar27;
  auVar55._20_4_ = iVar27;
  auVar55._24_4_ = iVar27;
  auVar55._28_4_ = iVar27;
  auVar43 = vpaddd_avx2(auVar43,auVar44);
  auVar54 = ZEXT3264(auVar43);
  if (uVar15 < 0x10000) {
    if (uVar26 + 0x40000 < uStack_14c * 0x10000) {
      uVar36 = ((uStack_14c * 0x10000 - (uVar26 + 0x40000)) + -1 + uVar15) / uVar15;
    }
    else {
      uVar36 = 0;
    }
    uVar34 = uVar32;
    if (uVar36 >> 3 < uVar32) {
      uVar34 = uVar36 >> 3;
    }
    local_148._4_4_ = (undefined4)(local_148 >> 0x20);
    local_148 = CONCAT44(local_148._4_4_,uVar32 - uVar34);
    uVar32 = uVar32 - uVar34;
    if (uVar34 != 0) {
      do {
        auVar50 = auVar54._0_32_;
        auVar44 = vpsrad_avx2(auVar50,0x10);
        auVar43 = vshufps_avx(auVar44,auVar44,0);
        auVar44 = vpsubd_avx2(auVar44,auVar43);
        auVar43 = vpand_avx2(auVar13,auVar50);
        uVar34 = uVar34 - 1;
        auVar43 = vcvtdq2ps_avx(auVar43);
        auVar37._0_4_ = auVar43._0_4_ * 1.5258789e-05;
        auVar37._4_4_ = auVar43._4_4_ * 1.5258789e-05;
        auVar37._8_4_ = auVar43._8_4_ * 1.5258789e-05;
        auVar37._12_4_ = auVar43._12_4_ * 1.5258789e-05;
        auVar37._16_4_ = auVar43._16_4_ * 1.5258789e-05;
        auVar37._20_4_ = auVar43._20_4_ * 1.5258789e-05;
        auVar37._24_4_ = auVar43._24_4_ * 1.5258789e-05;
        auVar37._28_4_ = auVar43._28_4_ * 1.5258789e-05;
        auVar43 = vpaddd_avx2(auVar50,auVar55);
        auVar54 = ZEXT3264(auVar43);
        if (uVar31 != 0) {
          uVar25 = (ulonglong)(uVar26 + uVar15 * 4 >> 0x10);
          puVar21 = puVar30;
          uVar17 = uVar35;
          do {
            lVar24 = *(longlong *)((longlong)puVar21 + (lVar33 - (longlong)puVar30));
            auVar46._16_16_ = *(undefined1 (*) [16])(lVar24 + uVar25 * 4);
            auVar46._0_16_ = *(undefined1 (*) [16])(lVar24 + (ulonglong)(uVar26 >> 0x10) * 4);
            auVar50 = vpermilps_avx(auVar46,auVar44);
            auVar47._16_16_ = *(undefined1 (*) [16])(lVar24 + 4 + uVar25 * 4);
            auVar47._0_16_ = *(undefined1 (*) [16])(lVar24 + 4 + (ulonglong)(uVar26 >> 0x10) * 4);
            auVar43 = vpermilps_avx(auVar47,auVar44);
            auVar43 = vsubps_avx(auVar43,auVar50);
            auVar14 = vfmadd231ps_fma(auVar50,auVar43,auVar37);
            *(undefined1 (*) [32])*puVar21 = ZEXT1632(auVar14);
            uVar17 = uVar17 - 1;
            puVar21 = puVar21 + 1;
          } while (uVar17 != 0);
          uVar17 = 0;
          if (0xf < uVar31) {
            uVar36 = 8;
            do {
              auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(puVar30 + uVar17));
              *(undefined1 (*) [32])(puVar30 + uVar17) = auVar43;
              uVar23 = (int)uVar17 + 0x10;
              uVar17 = (ulonglong)uVar23;
              auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(puVar30 + (uVar36 - 4)));
              *(undefined1 (*) [32])(puVar30 + (uVar36 - 4)) = auVar43;
              auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(puVar30 + uVar36));
              *(undefined1 (*) [32])(puVar30 + uVar36) = auVar43;
              uVar32 = uVar36 + 4;
              uVar36 = uVar36 + 0x10;
              auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(puVar30 + uVar32));
              *(undefined1 (*) [32])(puVar30 + uVar32) = auVar43;
            } while (uVar23 < (uVar16 & 0xf0));
            if (uVar31 <= uVar23) goto LAB_14555ab96;
          }
          plVar22 = puVar30 + uVar17;
          uVar17 = (ulonglong)(uVar31 - (int)uVar17);
          do {
            *plVar22 = *plVar22 + 0x20;
            plVar22 = plVar22 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
LAB_14555ab96:
        uVar26 = uVar26 + uVar15 * 8;
      } while (uVar34 != 0);
      uVar32 = (uint)local_148;
    }
  }
  auVar13 = _DAT_149931da0;
  iVar27 = uVar15 * 8;
  while (uVar32 != 0) {
    auVar43 = vpand_avx2(auVar13,auVar54._0_32_);
    uVar32 = uVar32 - 1;
    local_148._4_4_ = (undefined4)(local_148 >> 0x20);
    local_148 = CONCAT44(local_148._4_4_,uVar32);
    auVar43 = vcvtdq2ps_avx(auVar43);
    auVar53._0_4_ = auVar43._0_4_ * 1.5258789e-05;
    auVar53._4_4_ = auVar43._4_4_ * 1.5258789e-05;
    auVar53._8_4_ = auVar43._8_4_ * 1.5258789e-05;
    auVar53._12_4_ = auVar43._12_4_ * 1.5258789e-05;
    auVar53._16_4_ = auVar43._16_4_ * 1.5258789e-05;
    auVar53._20_4_ = auVar43._20_4_ * 1.5258789e-05;
    auVar53._24_4_ = auVar43._24_4_ * 1.5258789e-05;
    auVar53._28_4_ = auVar43._28_4_ * 1.5258789e-05;
    auVar43 = vpaddd_avx2(auVar54._0_32_,auVar55);
    auVar54 = ZEXT3264(auVar43);
    if ((int)uVar35 != 0) {
      local_100 = (ulonglong)(uVar26 + uStack_160 * 6 >> 0x10);
      local_f8 = (ulonglong)(uStack_160 * 7 + uVar26 >> 0x10);
      puVar21 = puVar30;
      uVar17 = local_108;
      do {
        lVar33 = *(longlong *)((lStack_158 - (longlong)puVar30) + (longlong)puVar21);
        auVar14 = vpinsrq_avx((undefined1  [16])0x0,
                              *(undefined8 *)(lVar33 + (ulonglong)(uVar26 + uVar15 * 4 >> 0x10) * 4)
                              ,0);
        auVar14 = vpinsrq_avx(auVar14,*(undefined8 *)
                                       (lVar33 + (ulonglong)(uVar26 + uVar15 * 5 >> 0x10) * 4),1);
        auVar38 = vpinsrq_avx((undefined1  [16])0x0,
                              *(undefined8 *)(lVar33 + (ulonglong)(uVar26 >> 0x10) * 4),0);
        auVar38 = vpinsrq_avx(auVar38,*(undefined8 *)
                                       (lVar33 + (ulonglong)(uVar15 + uVar26 >> 0x10) * 4),1);
        auVar42 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(lVar33 + local_100 * 4),0);
        auVar45 = vpinsrq_avx((undefined1  [16])0x0,
                              *(undefined8 *)(lVar33 + (ulonglong)(uVar26 + uVar15 * 2 >> 0x10) * 4)
                              ,0);
        auVar52._16_16_ = auVar14;
        auVar52._0_16_ = auVar38;
        auVar14 = vpinsrq_avx(auVar42,*(undefined8 *)(lVar33 + local_f8 * 4),1);
        auVar38 = vpinsrq_avx(auVar45,*(undefined8 *)
                                       (lVar33 + (ulonglong)(uVar26 + uVar15 * 3 >> 0x10) * 4),1);
        auVar41._16_16_ = auVar14;
        auVar41._0_16_ = auVar38;
        auVar43 = vshufps_avx(auVar52,auVar41,0x88);
        auVar44 = vshufps_avx(auVar52,auVar41,0xdd);
        auVar44 = vsubps_avx(auVar44,auVar43);
        auVar14 = vfmadd231ps_fma(auVar43,auVar44,auVar53);
        *(undefined1 (*) [32])*puVar21 = ZEXT1632(auVar14);
        uVar17 = uVar17 - 1;
        puVar21 = puVar21 + 1;
      } while (uVar17 != 0);
      uVar35 = (ulonglong)local_128;
      uVar17 = 0;
      if (local_128 < 0x10) {
LAB_14555ad4c:
        plVar22 = local_110 + uVar17;
        uVar17 = (ulonglong)(local_128 - (int)uVar17);
        do {
          *plVar22 = *plVar22 + 0x20;
          plVar22 = plVar22 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      else {
        uVar15 = 8;
        uVar17 = 0;
        do {
          auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(local_110 + uVar17));
          *(undefined1 (*) [32])(local_110 + uVar17) = auVar43;
          uVar16 = (int)uVar17 + 0x10;
          uVar17 = (ulonglong)uVar16;
          auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(local_110 + (uVar15 - 4)));
          *(undefined1 (*) [32])(local_110 + (uVar15 - 4)) = auVar43;
          auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(local_110 + uVar15));
          *(undefined1 (*) [32])(local_110 + uVar15) = auVar43;
          uVar36 = uVar15 + 4;
          uVar15 = uVar15 + 0x10;
          auVar43 = vpaddq_avx2(_DAT_149da9dc0,*(undefined1 (*) [32])(local_110 + uVar36));
          *(undefined1 (*) [32])(local_110 + uVar36) = auVar43;
        } while (uVar16 < (local_140 & 0xf0));
        if (uVar16 < local_128) goto LAB_14555ad4c;
      }
      puVar30 = local_110;
      uVar15 = uStack_160;
      iVar27 = (int)local_138;
    }
    uVar31 = (uint)uVar35;
    uVar26 = uVar26 + iVar27;
  }
  iVar27 = (int)local_130;
  while (iVar27 != 0) {
    uVar36 = uVar26 >> 0x10;
    iVar27 = iVar27 + -1;
    uVar16 = 0;
    if (uVar31 < 4) {
      if (uVar31 != 0) {
        uVar17 = (ulonglong)(uVar36 + 1);
        local_118 = 0;
        fVar48 = (float)(uVar26 & 0xffff);
        lVar33 = lStack_158 - (longlong)puVar30;
        goto LAB_14555aeac;
      }
    }
    else {
      uVar17 = (ulonglong)(uVar36 + 1);
      uVar25 = (ulonglong)uVar36;
      lVar33 = lStack_158 - (longlong)puVar30;
      uVar16 = (uVar31 - 4 >> 2) + 1;
      fVar48 = (float)(uVar26 & 0xffff);
      fVar12 = fVar48 * 1.5258789e-05;
      uVar35 = (ulonglong)uVar16;
      local_118 = (ulonglong)uVar16 * 4;
      uVar16 = uVar16 * 4;
      plVar22 = puVar30 + 1;
      do {
        puVar10 = (undefined4 *)plVar22[-1];
        lVar24 = *(longlong *)(lVar33 + -8 + (longlong)plVar22);
        plVar1 = plVar22 + 4;
        fVar4 = *(float *)(lVar24 + uVar25 * 4);
        fVar5 = *(float *)(lVar24 + uVar17 * 4);
        plVar22[-1] = (longlong)(puVar10 + 1);
        lVar24 = *(longlong *)((longlong)plVar22 + lVar33);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(fVar5 - fVar4)));
        *puVar10 = auVar14._0_4_;
        puVar10 = (undefined4 *)*plVar22;
        fVar4 = *(float *)(lVar24 + uVar25 * 4);
        fVar5 = *(float *)(lVar24 + uVar17 * 4);
        *plVar22 = (longlong)(puVar10 + 1);
        lVar24 = *(longlong *)(lVar33 + -0x18 + (longlong)plVar1);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(fVar5 - fVar4)));
        *puVar10 = auVar14._0_4_;
        puVar10 = (undefined4 *)plVar22[1];
        fVar4 = *(float *)(lVar24 + uVar25 * 4);
        fVar5 = *(float *)(lVar24 + uVar17 * 4);
        plVar22[1] = (longlong)(puVar10 + 1);
        lVar24 = *(longlong *)(lVar33 + -0x10 + (longlong)plVar1);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(fVar5 - fVar4)));
        *puVar10 = auVar14._0_4_;
        puVar10 = (undefined4 *)plVar22[2];
        fVar4 = *(float *)(lVar24 + uVar25 * 4);
        fVar5 = *(float *)(lVar24 + uVar17 * 4);
        plVar22[2] = (longlong)(puVar10 + 1);
        auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar4),ZEXT416((uint)fVar12),
                                  ZEXT416((uint)(fVar5 - fVar4)));
        *puVar10 = auVar14._0_4_;
        uVar35 = uVar35 - 1;
        plVar22 = plVar1;
      } while (uVar35 != 0);
      uVar15 = uStack_160;
      if (uVar16 < uVar31) {
LAB_14555aeac:
        uVar25 = (ulonglong)(uVar31 - uVar16);
        plVar22 = puVar30 + local_118;
        do {
          puVar10 = (undefined4 *)*plVar22;
          fVar12 = *(float *)(*(longlong *)((longlong)plVar22 + lVar33) + (ulonglong)uVar36 * 4);
          fVar4 = *(float *)(*(longlong *)((longlong)plVar22 + lVar33) + uVar17 * 4);
          *plVar22 = (longlong)(puVar10 + 1);
          auVar14 = vfmadd231ss_fma(ZEXT416((uint)fVar12),ZEXT416((uint)(fVar48 * 1.5258789e-05)),
                                    ZEXT416((uint)(fVar4 - fVar12)));
          *puVar10 = auVar14._0_4_;
          uVar25 = uVar25 - 1;
          plVar22 = plVar22 + 1;
          uVar15 = uStack_160;
        } while (uVar25 != 0);
      }
    }
    uVar26 = uVar26 + uVar15;
  }
  uVar15 = uStack_14c;
  if (uVar26 >> 0x10 < uStack_14c) {
    uVar15 = uVar26 >> 0x10;
  }
  if (uVar15 != 0) {
    uVar36 = 0;
    if (uVar31 < 4) {
      if (uVar31 == 0) goto LAB_14555b063;
      lVar33 = 0;
    }
    else {
      uVar17 = (ulonglong)uVar15;
      lVar24 = 2;
      lVar33 = 0;
      uVar36 = (uVar31 - 4 >> 2) + 1;
      uVar25 = (ulonglong)uVar36;
      uVar36 = uVar36 * 4;
      do {
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar33 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar33 + uVar17) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 4 + lVar33 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * (lVar24 + -1) + uVar17) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 8 + lVar33 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar24 + uVar17) * 4);
        lVar8 = lVar24 + 1;
        lVar24 = lVar24 + 4;
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 0xc + lVar33 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar8 + uVar17) * 4);
        lVar33 = lVar33 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      if (uVar31 <= uVar36) goto LAB_14555b063;
    }
    uVar17 = (ulonglong)(uVar31 - uVar36);
    do {
      *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar33 * 4) =
           *(undefined4 *)
            (*param_1 + -4 +
            ((ulonglong)*(uint *)(param_4 + 0x28) +
            (ulonglong)*(ushort *)(param_1 + 2) * lVar33 + (ulonglong)uVar15) * 4);
      lVar33 = lVar33 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_14555b063:
  uStack_150 = (int)local_120 + uStack_150;
  *(uint *)(param_4 + 0x30) = uVar26 + uVar15 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar15;
  *(short *)((longlong)param_2 + 0x12) = (short)uStack_150 + *(short *)(param_4 + 0x2c);
  if (uVar15 == uStack_14c) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar15;
  }
  if (uStack_150 == uVar29) {
    uVar19 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uStack_150;
    uVar19 = 0x2b;
  }
  return uVar19;
}



// FUNCTION 14555b110 FUN_14555b110 body=389 status=ok
// SIG undefined FUN_14555b110(void)

undefined8 FUN_14555b110(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  uint *puVar1;
  void *_Src;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong local_68;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  puVar1 = (uint *)(param_4 + 0x28);
  uVar5 = param_3 - *(int *)(param_4 + 0x2c);
  local_68 = (ulonglong)*(byte *)(param_1 + 1);
  uVar3 = (uint)uVar2;
  if (uVar5 < uVar2) {
    uVar3 = uVar5;
  }
  if (*(byte *)(param_1 + 1) != 0) {
    lVar6 = 0;
    lVar4 = 0;
    do {
      _Src = (void *)(*param_1 +
                     ((ulonglong)*(ushort *)(param_1 + 2) * lVar6 + (ulonglong)*puVar1) * 4);
      memcpy((void *)(*param_2 +
                     ((ulonglong)*(byte *)(lVar4 + *(longlong *)(param_4 + 0x50)) *
                      (ulonglong)*(ushort *)(param_2 + 2) + (ulonglong)*(uint *)(param_4 + 0x2c)) *
                     4),_Src,(ulonglong)(uVar3 * 4));
      lVar4 = lVar4 + 1;
      *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar6 * 4) =
           *(undefined4 *)((longlong)_Src + (longlong)(int)(uVar3 - 1) * 4);
      lVar6 = lVar6 + 1;
      local_68 = local_68 - 1;
    } while (local_68 != 0);
  }
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar3;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar3 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar3 == uVar2) {
    *puVar1 = 0;
  }
  else {
    *puVar1 = *puVar1 + uVar3;
  }
  if (uVar3 != uVar5) {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar3;
    return 0x2b;
  }
  return 0x2d;
}



// FUNCTION 14555b2a0 FUN_14555b2a0 body=820 status=ok
// SIG undefined FUN_14555b2a0(void)

undefined8 FUN_14555b2a0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint local_98;
  uint local_88;
  
  bVar2 = *(byte *)(param_1 + 1);
  uVar14 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar15 = *(uint *)(param_4 + 0x30);
  uVar18 = param_3 - *(int *)(param_4 + 0x2c);
  uVar8 = *(uint *)(param_4 + 0x40);
  iVar11 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar3 = *(int *)(param_4 + 0x34) * 0x400;
  lVar17 = *param_1 + ((ulonglong)((uint)bVar2 * *(int *)(param_4 + 0x28)) - (ulonglong)bVar2) * 2;
  uVar4 = 0;
  uVar20 = uVar15 >> 0x10;
  local_88 = 0;
  do {
    iVar9 = *(int *)(param_4 + 0x3c);
    lVar13 = lVar17 + uVar4 * 2;
    pfVar1 = (float *)(*param_2 +
                      ((ulonglong)*(byte *)(uVar4 + *(longlong *)(param_4 + 0x50)) *
                       (ulonglong)*(ushort *)(param_2 + 2) + (ulonglong)*(uint *)(param_4 + 0x2c)) *
                      4);
    iVar22 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + uVar4 * 2);
    uVar4 = (ulonglong)(0x400 - iVar9) / (ulonglong)uVar8;
    pfVar16 = pfVar1;
    uVar21 = uVar20;
    local_98 = uVar15 & 0xffff;
    uVar19 = uVar15;
    if (uVar20 == 0) {
      if (uVar18 < (uint)uVar4) {
        uVar4 = (ulonglong)uVar18;
      }
      uVar7 = iVar11 * iVar9 + iVar3;
      do {
        iVar6 = (int)uVar4;
        uVar4 = (ulonglong)(iVar6 - 1);
        if (iVar6 == 0) break;
        uVar7 = uVar7 + iVar11 * uVar8;
        iVar9 = iVar9 + uVar8;
        iVar6 = (*(short *)(lVar13 + (ulonglong)bVar2 * 2) - iVar22) * local_98;
        uVar19 = uVar19 + (uVar7 >> 10);
        local_98 = uVar19 & 0xffff;
        uVar21 = uVar19 >> 0x10;
        *pfVar16 = (float)(iVar6 + iVar22 * 0x10000) * 4.656613e-10;
        pfVar16 = pfVar16 + 1;
      } while (uVar19 >> 0x10 == 0);
    }
    uVar10 = (longlong)((longlong)pfVar1 + ((ulonglong)uVar18 * 4 - (longlong)pfVar16)) >> 2;
    uVar4 = (ulonglong)(0x400 - iVar9) / (ulonglong)uVar8;
    uVar7 = (uint)bVar2;
    if (uVar21 <= uVar14 - 1) {
      if ((uint)uVar10 < (uint)uVar4) {
        uVar4 = uVar10;
      }
      uVar4 = uVar4 & 0xffffffff;
      uVar12 = iVar11 * iVar9 + iVar3;
      do {
        iVar22 = (int)uVar4;
        uVar4 = (ulonglong)(iVar22 - 1);
        if (iVar22 == 0) break;
        uVar12 = uVar12 + iVar11 * uVar8;
        iVar9 = iVar9 + uVar8;
        iVar6 = (int)*(short *)(lVar13 + (ulonglong)(uVar7 * uVar21) * 2);
        iVar22 = (*(short *)(lVar13 + (ulonglong)(uVar7 * uVar21 + uVar7) * 2) - iVar6) * local_98;
        uVar19 = uVar19 + (uVar12 >> 10);
        local_98 = uVar19 & 0xffff;
        uVar21 = uVar19 >> 0x10;
        *pfVar16 = (float)(iVar22 + iVar6 * 0x10000) * 4.656613e-10;
        pfVar16 = pfVar16 + 1;
      } while (uVar21 <= uVar14 - 1);
    }
    local_88 = local_88 + 1;
    uVar4 = (ulonglong)local_88;
    if (uVar7 <= local_88) {
      *(int *)(param_4 + 0x3c) = iVar9;
      uVar15 = uVar19 >> 0x10;
      if (uVar14 <= uVar19 >> 0x10) {
        uVar15 = uVar14;
      }
      if ((uVar15 != 0) && (uVar8 = 0, uVar7 != 0)) {
        lVar13 = 0;
        do {
          uVar20 = uVar15 * uVar7 + uVar8;
          uVar8 = uVar8 + 1;
          *(undefined2 *)(lVar13 + *(longlong *)(param_4 + 0x20)) =
               *(undefined2 *)(lVar17 + (ulonglong)uVar20 * 2);
          lVar13 = lVar13 + 2;
        } while (uVar8 < uVar7);
      }
      lVar17 = (longlong)pfVar16 - (longlong)pfVar1 >> 2;
      *(uint *)(param_4 + 0x30) = uVar19 + uVar15 * -0x10000;
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar15;
      *(short *)((longlong)param_2 + 0x12) = (short)lVar17 + *(short *)(param_4 + 0x2c);
      if (uVar15 == uVar14) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar15;
      }
      uVar15 = (uint)lVar17;
      if (uVar15 == uVar18) {
        uVar5 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar15;
        uVar5 = 0x2b;
      }
      return uVar5;
    }
  } while( true );
}



// FUNCTION 14555b5e0 FUN_14555b5e0 body=1002 status=ok
// SIG undefined FUN_14555b5e0(void)

undefined8 FUN_14555b5e0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint local_74;
  
  uVar14 = param_3 - *(int *)(param_4 + 0x2c);
  uVar19 = *(uint *)(param_4 + 0x40);
  uVar24 = *(uint *)(param_4 + 0x30);
  bVar5 = *(byte *)(param_1 + 1);
  iVar16 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar6 = *(int *)(param_4 + 0x34) * 0x400;
  uVar8 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  local_74 = 0;
  do {
    uVar18 = (ulonglong)uVar24;
    iVar13 = *(int *)(param_4 + 0x3c);
    uVar12 = (ulonglong)local_74;
    uVar23 = (ulonglong)(uVar24 >> 0x10);
    pfVar2 = (float *)(*param_1 +
                      (*(ushort *)(param_1 + 2) * uVar12 + (ulonglong)*(uint *)(param_4 + 0x28)) * 4
                      );
    pfVar3 = (float *)(*param_2 +
                      ((ulonglong)*(byte *)(uVar12 + *(longlong *)(param_4 + 0x50)) *
                       (ulonglong)*(ushort *)(param_2 + 2) + (ulonglong)*(uint *)(param_4 + 0x2c)) *
                      4);
    fVar4 = *(float *)(*(longlong *)(param_4 + 0x20) + uVar12 * 4);
    uVar12 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar19;
    if (uVar14 < (uint)uVar12) {
      uVar12 = (ulonglong)uVar14;
    }
    pfVar20 = pfVar3;
    uVar21 = uVar24 & 0xffff;
    if (uVar24 >> 0x10 == 0) {
      uVar10 = iVar16 * iVar13 + iVar6;
      do {
        iVar9 = (int)uVar12;
        uVar12 = (ulonglong)(iVar9 - 1);
        if (iVar9 == 0) break;
        uVar10 = uVar10 + iVar16 * uVar19;
        iVar13 = iVar13 + uVar19;
        uVar22 = (ulonglong)uVar21;
        uVar17 = (int)uVar18 + (uVar10 >> 10);
        uVar18 = (ulonglong)uVar17;
        uVar21 = uVar17 & 0xffff;
        uVar23 = (ulonglong)(uVar17 >> 0x10);
        *pfVar20 = (*pfVar2 - fVar4) * (float)uVar22 * 1.5258789e-05 + fVar4;
        pfVar20 = pfVar20 + 1;
      } while (uVar17 >> 0x10 == 0);
    }
    uVar12 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar19;
    uVar22 = (longlong)((longlong)pfVar3 + ((ulonglong)uVar14 * 4 - (longlong)pfVar20)) >> 2;
    if ((uint)uVar23 <= uVar8 - 1) {
      if ((uint)uVar22 < (uint)uVar12) {
        uVar12 = uVar22;
      }
      uVar12 = uVar12 & 0xffffffff;
      uVar10 = iVar16 * iVar13 + iVar6;
      do {
        iVar9 = (int)uVar12;
        uVar12 = (ulonglong)(iVar9 - 1);
        if (iVar9 == 0) break;
        uVar10 = uVar10 + iVar16 * uVar19;
        iVar13 = iVar13 + uVar19;
        lVar15 = uVar23 - 1;
        iVar9 = (int)uVar23;
        uVar22 = (ulonglong)uVar21;
        uVar17 = (int)uVar18 + (uVar10 >> 10);
        uVar18 = (ulonglong)uVar17;
        uVar21 = uVar17 & 0xffff;
        uVar23 = (ulonglong)(uVar17 >> 0x10);
        *pfVar20 = (pfVar2[(ulonglong)(iVar9 + 1) - 1] - pfVar2[lVar15]) * (float)uVar22 *
                   1.5258789e-05 + pfVar2[lVar15];
        pfVar20 = pfVar20 + 1;
      } while (uVar17 >> 0x10 <= uVar8 - 1);
    }
    uVar21 = (uint)bVar5;
    local_74 = local_74 + 1;
  } while (local_74 < uVar21);
  *(int *)(param_4 + 0x3c) = iVar13;
  uVar19 = (uint)(uVar18 >> 0x10);
  if (uVar8 <= uVar19) {
    uVar19 = uVar8;
  }
  if (uVar19 != 0) {
    uVar24 = 0;
    if (uVar21 < 4) {
      if (uVar21 == 0) goto LAB_14555b96e;
      lVar15 = 0;
    }
    else {
      uVar12 = (ulonglong)uVar19;
      lVar11 = 2;
      lVar15 = 0;
      uVar24 = (uVar21 - 4 >> 2) + 1;
      uVar23 = (ulonglong)uVar24;
      uVar24 = uVar24 * 4;
      do {
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar15 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar15 + uVar12) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 4 + lVar15 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * (lVar11 + -1) + uVar12) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 8 + lVar15 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar11 + uVar12) * 4);
        lVar1 = lVar11 + 1;
        lVar11 = lVar11 + 4;
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 0xc + lVar15 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar1 + uVar12) * 4);
        lVar15 = lVar15 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      if (uVar21 <= uVar24) goto LAB_14555b96e;
    }
    uVar12 = (ulonglong)(uVar21 - uVar24);
    do {
      *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar15 * 4) =
           *(undefined4 *)
            (*param_1 + -4 +
            ((ulonglong)*(uint *)(param_4 + 0x28) +
            (ulonglong)*(ushort *)(param_1 + 2) * lVar15 + (ulonglong)uVar19) * 4);
      lVar15 = lVar15 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_14555b96e:
  lVar15 = (longlong)pfVar20 - (longlong)pfVar3 >> 2;
  *(uint *)(param_4 + 0x30) = (int)uVar18 + uVar19 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar19;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar15 + *(short *)(param_4 + 0x2c);
  if (uVar19 == uVar8) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar19;
  }
  uVar19 = (uint)lVar15;
  if (uVar19 == uVar14) {
    uVar7 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar19;
    uVar7 = 0x2b;
  }
  return uVar7;
}



// FUNCTION 14555b9e0 FUN_14555b9e0 body=279 status=ok
// SIG undefined FUN_14555b9e0(void)

void FUN_14555b9e0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar11 = *(uint *)(param_1 + 1);
  uVar1 = *(ushort *)((longlong)param_1 + 0x12);
  uVar8 = uVar11 & 0xff;
  uVar13 = 0;
  if ((char)uVar11 == '\0') {
    *(ushort *)((longlong)param_2 + 0x12) = uVar1;
    return;
  }
  lVar7 = 0;
  do {
    uVar12 = uVar11;
    uVar5 = uVar13;
    if ((uVar11 >> 0xc & 8) != 0) {
      uVar9 = 0;
      uVar4 = uVar11 >> 0xc & 7;
      if (uVar4 != 0) {
        do {
          uVar9 = uVar9 + 1;
          uVar4 = uVar4 & uVar4 - 1;
        } while (uVar4 != 0);
        uVar12 = *(uint *)(param_1 + 1);
      }
      if (uVar13 == uVar9) {
        uVar5 = (uVar11 & 0xff) - 1;
      }
      else if (uVar9 < uVar13) {
        uVar5 = uVar13 - 1;
      }
    }
    puVar6 = (undefined4 *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar5 * 4);
    puVar3 = (undefined4 *)(*param_2 + lVar7);
    uVar10 = (ulonglong)uVar1;
    uVar11 = uVar12;
    if (uVar1 != 0) {
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + uVar8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar11 = *(uint *)(param_1 + 1);
    }
    uVar13 = uVar13 + 1;
    lVar7 = lVar7 + 4;
  } while (uVar13 < uVar8);
  *(ushort *)((longlong)param_2 + 0x12) = uVar1;
  return;
}



// FUNCTION 14555bb00 FUN_14555bb00 body=230 status=ok
// SIG undefined FUN_14555bb00(void)

undefined8 * FUN_14555bb00(undefined8 *param_1)

{
  FUN_145389140();
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xff;
  *param_1 = &PTR_FUN_149da9e98;
  param_1[10] = 0;
  param_1[5] = &PTR_LAB_149da9fa8;
  param_1[6] = &PTR_LAB_149daa050;
  param_1[7] = &PTR_LAB_149daa0a8;
  param_1[0xc] = &PTR_FUN_149da9e60;
  param_1[0xd] = &PTR_LAB_149da9e88;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 14555bbf0 FUN_14555bbf0 body=654 status=ok
// SIG undefined FUN_14555bbf0(void)

int FUN_14555bbf0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_res20;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  
  lVar5 = DAT_14c791060;
  plVar9 = (longlong *)0x0;
  local_res20 = 0;
  local_38[0] = 0;
  iVar4 = 2;
  local_34 = 0;
  local_2a = 0;
  local_30 = 1;
  local_2c = 0x100;
  uVar2 = **(uint **)(param_1[3] + 0x2a0);
  do {
    while (iVar3 = *(int *)(lVar5 + 0x370), iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
      if (*(int *)(lVar5 + 0x370) < 0) goto LAB_14555bc57;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
    }
    LOCK();
    bVar10 = iVar3 == *(int *)(lVar5 + 0x370);
    if (bVar10) {
      *(int *)(lVar5 + 0x370) = iVar3 + 1;
    }
    UNLOCK();
  } while (!bVar10);
LAB_14555bc57:
  plVar6 = plVar9;
  if (*(uint *)(lVar5 + 0x3b8) != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar5 + 0x3b0) +
                   ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar5 + 0x3b8)) * 8);
        (plVar6 = plVar9, plVar7 != (longlong *)0x0 &&
        (plVar6 = plVar7, *(uint *)(plVar7 + 2) != uVar2)); plVar7 = (longlong *)plVar7[1]) {
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(lVar5 + 0x370);
  while (-1 < iVar3) {
    LOCK();
    bVar10 = iVar3 == *(int *)(lVar5 + 0x370);
    if (bVar10) {
      *(int *)(lVar5 + 0x370) = iVar3 + -1;
    }
    UNLOCK();
    if (bVar10) {
      if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar5 + 0x3a0))) {
        SetEvent(*(HANDLE *)(lVar5 + 0x3a8));
      }
      goto LAB_14555bcf8;
    }
    iVar3 = *(int *)(lVar5 + 0x370);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x378));
LAB_14555bcf8:
  if (plVar6 != (longlong *)0x0) {
    lVar5 = plVar6[7];
    *(int *)(param_1 + 0x1d) = (int)lVar5;
    iVar4 = FUN_145089070((int)lVar5,&local_res20,local_38);
    if (iVar4 == 1) {
      param_1[0x1e] = local_res20;
      iVar4 = FUN_1450894a0((int)param_1[0x1d],2,local_38);
      if (iVar4 == 0) {
        plVar7 = (longlong *)(param_1[3] + 0x18);
        if (param_1[3] == 0) {
          plVar7 = plVar9;
        }
        lVar5 = FUN_14536b830(param_1 + 0xc,plVar6,plVar7);
        if (lVar5 != 0) {
          plVar7 = param_1 + 8;
          *(undefined4 *)plVar7 = DAT_14c72f42c;
          *(undefined4 *)((longlong)param_1 + 0x44) = 0x4101;
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffd0120 | 0x50120;
          plVar8 = param_1 + 5;
          if (param_1 == (longlong *)0x0) {
            plVar8 = plVar9;
          }
          iVar4 = (**(code **)(*(longlong *)param_1[0x1e] + 0x30))
                            ((longlong *)param_1[0x1e],&PTR_PTR_14c72f458,plVar8,param_1[0x16],
                             plVar7);
          if (iVar4 == 1) {
            uVar2 = *(uint *)(param_1 + 9);
            if ((uVar2 >> 0x12 & 1) != 0) {
              *(uint *)(param_1 + 9) =
                   (*(int *)((longlong)param_1 + 0x44) << 8 ^ uVar2) & 0xffc0 ^ uVar2;
            }
            iVar4 = (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
            if (iVar4 == 1) {
              lVar5 = param_1[3];
              *(longlong *)(lVar5 + 0x2b0) = *plVar7;
              *(int *)(lVar5 + 0x2b8) = (int)param_1[9];
              goto LAB_14555be53;
            }
          }
          goto LAB_14555be45;
        }
      }
      iVar4 = 2;
    }
  }
LAB_14555be45:
  (**(code **)(*param_1 + 0x70))(param_1);
  if (plVar6 == (longlong *)0x0) {
    return iVar4;
  }
LAB_14555be53:
  LOCK();
  piVar1 = (int *)((longlong)plVar6 + 0x14);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return iVar4;
}



// FUNCTION 14555be80 FUN_14555be80 body=32 status=ok
// SIG undefined FUN_14555be80(void)

void FUN_14555be80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014555be9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0xc] + 0x20))(param_1 + 0xc);
  return;
}



// FUNCTION 14555bea0 FUN_14555bea0 body=266 status=ok
// SIG undefined FUN_14555bea0(void)

void FUN_14555bea0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2b;
    *param_2 = 0;
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    *(undefined2 *)(param_2 + 2) = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 1;
    *(undefined4 *)(param_2 + 6) = 2;
    return;
  }
  if (*(ushort *)(param_2 + 2) == 0) {
    *(undefined4 *)(param_2 + 6) = 0x11;
    return;
  }
  pvVar2 = *(void **)(param_1 + 0xf8);
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malign
                       (5,(ulonglong)
                          ((uint)*(ushort *)(param_2 + 2) * (*(uint *)(param_1 + 0x48) >> 6 & 0x3ff)
                          ),0x10);
    *(void **)(param_1 + 0xf8) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(param_2 + 6) = 2;
      return;
    }
  }
  *param_2 = (longlong)pvVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x2b;
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x60))(*(longlong **)(param_1 + 0xf0),param_2);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)((longlong)param_2 + 0xc);
  return;
}



// FUNCTION 14555bfb0 FUN_14555bfb0 body=48 status=ok
// SIG undefined FUN_14555bfb0(void)

void FUN_14555bfb0(longlong param_1)

{
  if (*(void **)(param_1 + 0xf8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 14555bfe0 FUN_14555bfe0 body=65 status=ok
// SIG undefined FUN_14555bfe0(void)

undefined8 FUN_14555bfe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x2d;
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x58))();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_145389010(param_1,param_2);
    }
  }
  return uVar1;
}



// FUNCTION 14555c090 FUN_14555c090 body=134 status=ok
// SIG undefined FUN_14555c090(void)

undefined8 FUN_14555c090(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != lVar2 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x28) {
    do {
      if (*(longlong *)(lVar2 + 8) == param_2) {
        cVar1 = FUN_14538bc90(lVar2 + 8,*(undefined8 *)(param_1 + 0xf0));
        if (cVar1 == '\0') {
          return 1;
        }
      }
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != *(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 0x28);
  }
  return 0;
}



// FUNCTION 14555c120 FUN_14555c120 body=132 status=ok
// SIG undefined FUN_14555c120(void)

undefined8 FUN_14555c120(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != lVar2 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x28) {
    do {
      if ((*(longlong *)(lVar2 + 0x10) == param_2) &&
         ((param_3 == '\0' ||
          (cVar1 = FUN_14538bc90(lVar2 + 8,*(undefined8 *)(param_1 + 0xf0)), cVar1 == '\0')))) {
        return 1;
      }
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != *(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 0x28);
  }
  return 0;
}



// FUNCTION 14555c1b0 FUN_14555c1b0 body=162 status=ok
// SIG undefined FUN_14555c1b0(void)

void FUN_14555c1b0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar3 + 0x2b0);
  if (*(char *)(lVar3 + 0x315) < '\0') {
    fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x38))();
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar2 = (ulonglong)(fVar4 * *(float *)(lVar3 + 0x30c) * (float)uVar1 * 0.001);
  }
  else {
    uVar2 = ((ulonglong)*(uint *)(lVar3 + 0x30c) * (ulonglong)uVar1) / (ulonglong)DAT_14c72f42c &
            0xffffffff;
  }
  *(byte *)(lVar3 + 0x315) = *(byte *)(lVar3 + 0x315) & 0x3f;
  *(byte *)(lVar3 + 0x316) = *(byte *)(lVar3 + 0x316) & 0xfe;
  *(undefined4 *)(lVar3 + 0x30c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014555c24e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x50))(*(longlong **)(param_1 + 0xf0),uVar2);
  return;
}



// FUNCTION 14555c260 FUN_14555c260 body=173 status=ok
// SIG undefined FUN_14555c260(void)

void FUN_14555c260(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
    return;
  }
  return;
}



// FUNCTION 14555c310 FUN_14555c310 body=87 status=ok
// SIG undefined FUN_14555c310(void)

undefined8 FUN_14555c310(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x2a8) + 0x38);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      piVar1 = (int *)(lVar3 + 0x194);
      lVar3 = *(longlong *)(lVar3 + 0x20);
      iVar2 = iVar5 + 1;
      if (*piVar1 != 0) {
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
    } while (lVar3 != 0);
    if (iVar5 != 0) {
      uVar4 = FUN_145389380();
      uVar4 = FUN_145355800(uVar4);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14555c390 FUN_14555c390 body=103 status=ok
// SIG undefined FUN_14555c390(void)

void FUN_14555c390(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x70))();
  lVar2 = param_1[10];
  lVar1 = lVar2 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_14538ba90(lVar2 + 8);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014555c3f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,0,0);
  return;
}



// FUNCTION 14555c490 FUN_14555c490 body=455 status=ok
// SIG undefined FUN_14555c490(void)

ulonglong FUN_14555c490(longlong param_1,uint param_2,ulonglong *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  
  lVar3 = DAT_14c791060;
  puVar8 = *(uint **)(param_1 + 0x28);
  puVar2 = puVar8 + (ulonglong)*(uint *)(param_1 + 0x30) * 10;
  for (; (puVar8 != puVar2 && (*puVar8 != param_2)); puVar8 = puVar8 + 10) {
  }
  puVar9 = (uint *)0x0;
  puVar6 = puVar8 + 2;
  if (puVar8 == puVar2) {
    puVar6 = puVar9;
  }
  if (puVar6 == (uint *)0x0) {
    uVar4 = **(uint **)(*(longlong *)(param_1 + -0x10) + 0x2a0);
    do {
      while (iVar7 = *(int *)(lVar3 + 0x370), iVar7 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x378));
        if (*(int *)(lVar3 + 0x370) < 0) goto LAB_14555c527;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x378));
      }
      LOCK();
      bVar10 = iVar7 == *(int *)(lVar3 + 0x370);
      if (bVar10) {
        *(int *)(lVar3 + 0x370) = iVar7 + 1;
      }
      UNLOCK();
    } while (!bVar10);
LAB_14555c527:
    if (*(uint *)(lVar3 + 0x3b8) != 0) {
      for (puVar2 = *(uint **)(*(longlong *)(lVar3 + 0x3b0) +
                              ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar3 + 0x3b8)) * 8);
          (puVar8 = puVar9, puVar2 != (uint *)0x0 && (puVar8 = puVar2, puVar2[4] != uVar4));
          puVar2 = *(uint **)(puVar2 + 2)) {
      }
      puVar9 = puVar8;
      if (puVar8 != (uint *)0x0) {
        LOCK();
        puVar8[5] = puVar8[5] + 1;
        UNLOCK();
      }
    }
    uVar4 = *(uint *)(lVar3 + 0x370);
    while (-1 < (int)uVar4) {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 0x370);
      bVar10 = uVar4 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 0x370) = uVar4 - 1;
        uVar1 = uVar4;
      }
      uVar5 = (ulonglong)uVar1;
      UNLOCK();
      if (bVar10) {
        if ((uVar4 - 1 == 0) &&
           (uVar5 = (ulonglong)*(uint *)(lVar3 + 0x3a0), 0 < (int)*(uint *)(lVar3 + 0x3a0))) {
          uVar4 = SetEvent(*(HANDLE *)(lVar3 + 0x3a8));
          uVar5 = (ulonglong)uVar4;
        }
        goto LAB_14555c5c4;
      }
      uVar4 = *(uint *)(lVar3 + 0x370);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x378));
    uVar5 = extraout_RAX;
LAB_14555c5c4:
    iVar7 = 0;
    if (puVar9 != (uint *)0x0) {
      if (param_2 < puVar9[0x14]) {
        iVar7 = *(int *)(*(longlong *)(puVar9 + 0x12) + (ulonglong)param_2 * 4);
      }
      LOCK();
      puVar2 = puVar9 + 5;
      uVar4 = *puVar2;
      uVar5 = (ulonglong)uVar4;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar4 == 1) {
        uVar5 = (**(code **)(*(longlong *)puVar9 + 0x18))(puVar9);
      }
      if (iVar7 != -1) {
        puVar6 = (uint *)FUN_14538bd40(param_1 + 0x28,(ulonglong)param_2,iVar7);
        uVar5 = 0;
        if (puVar6 != (uint *)0x0) goto LAB_14555c62a;
      }
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
LAB_14555c62a:
    *param_4 = puVar6[4];
    uVar5 = *(ulonglong *)(puVar6 + 2);
    *param_3 = uVar5;
  }
  return uVar5;
}



// FUNCTION 14555c6c0 FUN_14555c6c0 body=60 status=ok
// SIG undefined FUN_14555c6c0(void)

undefined8 FUN_14555c6c0(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  *(undefined1 *)param_2 = 0;
  *param_2 = *param_2 & 0xff;
  *param_3 = 0;
  param_3[1] = 0;
  return 2;
}



// FUNCTION 14555c830 FUN_14555c830 body=128 status=ok
// SIG undefined FUN_14555c830(void)

bool FUN_14555c830(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_1450d2460(*(undefined8 *)(*(longlong *)(param_1 + -0x18) + 0x20));
  uVar4 = *(uint *)(lVar2 + 0x18);
  if (param_2 != 0) {
    if (*param_3 <= uVar4) {
      uVar4 = *param_3;
    }
    uVar5 = 0;
    *param_3 = uVar4;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar5 * 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined8 *)(lVar1 + param_2) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x10));
        uVar3 = *param_3;
      } while (uVar4 < uVar3);
    }
    return uVar3 == *(uint *)(lVar2 + 0x18);
  }
  *param_3 = uVar4;
  return true;
}



// FUNCTION 14555c8d0 FUN_14555c8d0 body=58 status=ok
// SIG undefined FUN_14555c8d0(void)

void FUN_14555c8d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_14c72f458);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_14536b6e0(param_1);
  return;
}



// FUNCTION 14555c910 FUN_14555c910 body=52 status=ok
// SIG undefined FUN_14555c910(void)

undefined8 FUN_14555c910(undefined8 param_1,ulonglong param_2)

{
  FUN_14509daa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14555c950 FUN_14555c950 body=206 status=ok
// SIG undefined FUN_14555c950(void)

undefined8 * FUN_14555c950(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da9e98;
  param_1[5] = &PTR_LAB_149da9fa8;
  param_1[6] = &PTR_LAB_149daa050;
  param_1[7] = &PTR_LAB_149daa0a8;
  if ((void *)param_1[0x1f] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  (**(code **)(param_1[0xc] + 0x20))(param_1 + 0xc);
  FUN_14509daa0(param_1 + 0xc);
  FUN_14538bc00(param_1 + 10);
  param_1[7] = &PTR_FUN_149c277c0;
  param_1[6] = &PTR_FUN_149c27768;
  param_1[5] = &PTR_FUN_149c26410;
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14555ca50 FUN_14555ca50 body=55 status=ok
// SIG undefined FUN_14555ca50(void)

undefined8 * FUN_14555ca50(undefined8 *param_1)

{
  FUN_1453b0800();
  *param_1 = &PTR_FUN_149daa0c8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14555ca90 FUN_14555ca90 body=1329 status=ok
// SIG undefined FUN_14555ca90(void)

void FUN_14555ca90(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  int local_res18 [2];
  uint local_res20;
  undefined8 local_60;
  undefined4 *local_58 [3];
  
  iVar12 = 0x2d;
  iVar5 = iVar12;
  if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
    if (DAT_14c790ff5 == '\0') goto LAB_14555cb1a;
LAB_14555cb15:
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
  }
  else {
    if (DAT_14c790ff5 != '\0') goto LAB_14555cb15;
    plVar17 = *(longlong **)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar5 = (**(code **)(*plVar17 + 0x50))(plVar17);
    if (iVar5 - 0x2dU < 2) {
      uVar7 = (**(code **)(*plVar17 + 0x58))(plVar17);
      if (uVar7 <= local_res20 + iVar6) goto LAB_14555caff;
      iVar5 = 0x2e;
    }
    else if (iVar5 == 0x11) {
LAB_14555caff:
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
      iVar5 = iVar12;
    }
  }
LAB_14555cb1a:
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x400000) != 0) {
    plVar17 = *(longlong **)(param_1 + 0x58);
    iVar12 = *(int *)(param_1 + 0x68);
    iVar6 = (**(code **)(*plVar17 + 0x50))(plVar17,local_res18);
    local_60 = (void *)((ulonglong)local_60 & 0xffffffff00000000);
    if (iVar6 == 2) {
      local_60 = (void *)0x200000000;
    }
    else {
      (**(code **)(*plVar17 + 0x20))(plVar17,local_58);
      local_60 = (void *)CONCAT44(local_60._4_4_,
                                  (int)(longlong)
                                       ((float)(uint)(local_res18[0] + iVar12) / local_58[0]._0_4_))
      ;
      if ((iVar6 == 0x11) ||
         (uVar7 = (**(code **)(*plVar17 + 0x58))(plVar17), uVar7 <= (uint)(local_res18[0] + iVar12))
         ) {
        local_60 = (void *)CONCAT44(0x11,(undefined4)local_60);
      }
      else {
        local_60 = (void *)CONCAT44(1,(undefined4)local_60);
      }
    }
    FUN_1450c93d0(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),param_1,
                  &local_60);
  }
  uVar7 = 0;
  if (iVar5 != 0x2d) {
    *(int *)(param_2 + 0x30) = iVar5;
    return;
  }
  if ((*(int *)(param_1 + 0x68) == 0) && (iVar5 = FUN_1453b0bf0(param_1), iVar5 != 0x2d)) {
    *(int *)(param_2 + 0x30) = iVar5;
    return;
  }
  local_60 = *(void **)(param_1 + 0x90);
  lVar8 = *(longlong *)(param_1 + 0x18);
  uVar15 = (ulonglong)(uint)DAT_14c72f434;
  local_58[0] = (undefined4 *)(lVar8 + 0x2b0);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,DAT_14c72f434);
  bVar1 = *(byte *)(lVar8 + 0x2b4);
  uVar11 = *(uint *)(lVar8 + 0x2b8) >> 6 & 0x3ff;
  if (local_60 == (void *)0x0) {
    local_60 = AK::MemoryMgr::Malign(5,(ulonglong)(DAT_14c72f434 * uVar11),0x10);
    *(void **)(param_1 + 0x90) = local_60;
    if (local_60 == (void *)0x0) goto LAB_14555cf1b;
    uVar15 = (ulonglong)(ushort)local_res18[0];
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0xa2);
  local_res20 = uVar10 * uVar11;
  puVar18 = (uint *)(param_1 + 0x88);
  uVar14 = *puVar18;
  uVar16 = uVar14 / bVar1;
  uVar2 = *(ushort *)(param_1 + 0xa0);
  uVar13 = (uint)bVar1;
  if (uVar2 != 0) {
    memcpy((void *)((ulonglong)(uint)uVar2 + *(longlong *)(param_1 + 0x98)),
           *(void **)(param_1 + 0x60),(ulonglong)(uVar14 - uVar2));
    if (*(short *)(param_1 + 0xa4) == 2) {
      pvVar9 = local_60;
      if (bVar1 != 0) {
        do {
          FUN_1455e5c90((ulonglong)(uVar7 * uVar16) + *(longlong *)(param_1 + 0x98),pvVar9,1,
                        *puVar18,uVar13);
          uVar7 = uVar7 + 1;
          pvVar9 = (void *)((longlong)pvVar9 + 2);
        } while (uVar7 < uVar13);
      }
    }
    else {
      pvVar9 = local_60;
      if (uVar13 != 0) {
        do {
          FUN_1455e5ed0(pvVar9,(ulonglong)(uVar7 * uVar16) + *(longlong *)(param_1 + 0x98),
                        *(ushort *)(param_1 + 0xa2),*puVar18,uVar13);
          uVar7 = uVar7 + 1;
          pvVar9 = (void *)((longlong)pvVar9 + 2);
        } while (uVar7 < uVar13);
      }
    }
    uVar14 = *(uint *)(param_1 + 0x88);
    uVar7 = uVar14 - *(ushort *)(param_1 + 0xa0);
    *(ushort *)(param_1 + 0xa0) = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar7;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar7;
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar7;
    local_60 = (void *)((ulonglong)local_res20 + (longlong)local_60);
    uVar10 = (uint)*(ushort *)(param_1 + 0xa2);
    uVar15 = (ulonglong)(ushort)((ushort)local_res18[0] - *(ushort *)(param_1 + 0xa2));
  }
  uVar7 = 0;
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x68) / (ulonglong)uVar14;
  uVar4 = uVar15 / uVar10;
  if ((uint)uVar3 < (uint)(uVar15 / uVar10)) {
    uVar4 = uVar3;
  }
  iVar5 = (int)uVar4;
  local_res18[0] = iVar5;
  if (*(short *)(param_1 + 0xa4) == 2) {
    pvVar9 = local_60;
    if (uVar13 != 0) {
      do {
        FUN_1455e5c90((ulonglong)(uVar7 * uVar16) + *(longlong *)(param_1 + 0x60),pvVar9,uVar4,
                      *(undefined4 *)(param_1 + 0x88),uVar13);
        uVar7 = uVar7 + 1;
        pvVar9 = (void *)((longlong)pvVar9 + 2);
      } while (uVar7 < uVar13);
    }
  }
  else {
    pvVar9 = local_60;
    if (uVar13 != 0) {
      do {
        FUN_1455e5ed0(pvVar9,(ulonglong)(uVar7 * uVar16) + *(longlong *)(param_1 + 0x60),
                      (uint)*(ushort *)(param_1 + 0xa2) * iVar5,*(undefined4 *)(param_1 + 0x88),
                      uVar13);
        uVar7 = uVar7 + 1;
        pvVar9 = (void *)((longlong)pvVar9 + 2);
      } while (uVar7 < uVar13);
    }
  }
  puVar18 = (uint *)(param_1 + 0x68);
  plVar17 = (longlong *)(param_1 + 0x60);
  uVar7 = *(uint *)(param_1 + 0x88);
  uVar14 = uVar7 * local_res18[0];
  lVar8 = ((ulonglong)(local_res18[0] * local_res20) - *(longlong *)(param_1 + 0x90)) +
          (longlong)local_60;
  *puVar18 = *puVar18 - uVar14;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar14;
  *plVar17 = *plVar17 + (ulonglong)uVar14;
  if (*puVar18 < uVar7) {
    pvVar9 = *(void **)(param_1 + 0x98);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = AK::MemoryMgr::Malloc(5,(ulonglong)uVar7);
      *(void **)(param_1 + 0x98) = pvVar9;
      if (pvVar9 == (void *)0x0) {
LAB_14555cf1b:
        *(undefined4 *)(param_2 + 0x30) = 2;
        return;
      }
    }
    *(ushort *)(param_1 + 0xa0) = *(ushort *)puVar18;
    memcpy(pvVar9,(void *)*plVar17,(ulonglong)*(ushort *)puVar18);
    *plVar17 = *plVar17 + (ulonglong)*puVar18;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *puVar18;
    *puVar18 = 0;
    if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
  }
  FUN_1453ae780(param_1,*(undefined8 *)(param_1 + 0x90),lVar8 / (longlong)(ulonglong)uVar11 & 0xffff
                ,*local_58[0],local_58[0][1],param_2);
  return;
}



// FUNCTION 14555cfd0 FUN_14555cfd0 body=45 status=ok
// SIG undefined FUN_14555cfd0(void)

void FUN_14555cfd0(longlong param_1,uint param_2)

{
  FUN_1453b09d0();
  if (param_2 < 2) {
    *(undefined2 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14555d000 FUN_14555d000 body=55 status=ok
// SIG undefined FUN_14555d000(void)

void FUN_14555d000(longlong param_1)

{
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_1453b08e0(param_1);
  return;
}



// FUNCTION 14555d050 FUN_14555d050 body=618 status=ok
// SIG undefined FUN_14555d050(void)

undefined8 FUN_14555d050(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint local_50;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3b;
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [8];
  short *local_20;
  
  local_38[0] = 0;
  local_30 = 0;
  puVar1 = (uint *)(param_1 + 0x3c);
  puVar2 = (uint *)(param_1 + 0x38);
  uVar9 = FUN_1450731d0(param_2,*(undefined4 *)(param_1 + 0x68),local_28,param_1 + 0x40,puVar2,
                        puVar1,(uint *)(param_1 + 0x30),(int *)(param_1 + 0x34),local_38,0,0);
  if ((int)uVar9 != 1) {
    return uVar9;
  }
  sVar4 = *local_20;
  *(short *)(param_1 + 0xa4) = sVar4;
  if ((sVar4 == 2) || (sVar4 == -0x7cef)) {
    uVar5 = local_20[1];
    lVar8 = *(longlong *)(param_1 + 0x18);
    *(ulonglong *)(lVar8 + 0x2b0) =
         CONCAT44(*(undefined4 *)(local_20 + 10),*(undefined4 *)(local_20 + 2));
    *(uint *)(lVar8 + 0x2b8) = (uVar5 & 0x1ff) << 7 | local_50 & 0xfff80010 | 0x10;
    if (local_38[0] != 0) {
      FUN_1453b14f0(param_1);
    }
    uVar5 = local_20[6];
    *(uint *)(param_1 + 0x88) = (uint)uVar5;
    *(undefined2 *)(param_1 + 0xa2) = 0x40;
    uVar10 = *(uint *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x34);
    uVar7 = *puVar1;
    uVar3 = iVar6 + uVar10;
    *(uint *)(param_1 + 0x28) = (uVar10 << 6) / (uint)(ushort)local_20[6];
    if ((uVar7 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
      *(int *)(param_1 + 0x78) = iVar6;
      *(uint *)(param_1 + 0x7c) = uVar3;
      *puVar1 = (uVar10 / uVar5) * 0x40 - 1;
    }
    else {
      uVar10 = (*puVar2 >> 6) * (uint)uVar5 + iVar6;
      uVar11 = (uVar7 + 1 >> 6) * (uint)uVar5 + iVar6;
      *(uint *)(param_1 + 0x78) = uVar10;
      *(uint *)(param_1 + 0x7c) = uVar11;
      if (((uVar7 < *puVar2) || (uVar3 < uVar10)) || (uVar3 < uVar11)) goto LAB_14555d1c0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),&local_48);
    if (((*puVar2 < *puVar1) && (*puVar2 <= *(uint *)(param_1 + 0x28))) &&
       (*puVar1 < *(uint *)(param_1 + 0x28))) {
      local_48 = (float)*(uint *)(local_20 + 2) * (float)(ushort)local_20[6] *
                 (0.001 / (float)*(ushort *)(param_1 + 0xa2));
      if (*(short *)(param_1 + 0x54) != 1) {
        local_44 = *(undefined4 *)(param_1 + 0x78);
        local_40 = *(undefined4 *)(param_1 + 0x7c);
      }
      local_3b = (undefined1)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 800);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
                (*(longlong **)(param_1 + 0x58),&local_48);
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                        (*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x88));
    }
    else {
      uVar9 = 2;
    }
  }
  else {
LAB_14555d1c0:
    uVar9 = 7;
  }
  return uVar9;
}



// FUNCTION 14555d2f0 FUN_14555d2f0 body=121 status=ok
// SIG undefined FUN_14555d2f0(void)

undefined8 * FUN_14555d2f0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149daa0c8;
  if ((void *)param_1[0x13] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[0x13]);
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  FUN_1453b0850(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14555d370 FUN_14555d370 body=145 status=ok
// SIG undefined FUN_14555d370(void)

undefined8 FUN_14555d370(ulonglong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int iVar4;
  
  iVar4 = 0;
  LOCK();
  *param_1 = 0;
  UNLOCK();
  if (0 < param_2) {
    do {
      puVar3 = AK::MemoryMgr::Malloc(param_3,0x10);
      if (puVar3 == (ulonglong *)0x0) {
        return 0x34;
      }
      puVar3[1] = 0;
      do {
        uVar2 = *param_1;
        LOCK();
        *puVar3 = uVar2 | 1;
        UNLOCK();
        LOCK();
        uVar1 = *param_1;
        if (uVar2 == uVar1) {
          *param_1 = (ulonglong)puVar3;
        }
        UNLOCK();
      } while (uVar2 != uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return 1;
}



// FUNCTION 14555d410 FUN_14555d410 body=91 status=ok
// SIG undefined FUN_14555d410(void)

void FUN_14555d410(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)*param_1;
  if (puVar2 == (ulonglong *)0x0) {
    *param_1 = 0;
    return;
  }
  do {
    uVar1 = *puVar2;
    AK::MemoryMgr::Free(param_2,puVar2);
    puVar2 = (ulonglong *)(uVar1 & 0xfffffffffffffffc);
  } while ((ulonglong *)(uVar1 & 0xfffffffffffffffc) != (ulonglong *)0x0);
  *param_1 = 0;
  return;
}



// FUNCTION 14555d470 FUN_14555d470 body=174 status=ok
// SIG undefined FUN_14555d470(void)

undefined4 FUN_14555d470(longlong *param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  puVar7 = (ulonglong *)*param_1;
  do {
    if (puVar7 == (ulonglong *)0x0) {
      plVar5 = AK::MemoryMgr::Malloc(param_3,0x10);
      if (plVar5 == (longlong *)0x0) {
        return 0x34;
      }
      plVar5[1] = param_2;
      do {
        lVar4 = *param_1;
        *plVar5 = lVar4;
        LOCK();
        lVar2 = *param_1;
        if (lVar4 == lVar2) {
          *param_1 = (longlong)plVar5;
        }
        UNLOCK();
      } while (lVar4 != lVar2);
      return 1;
    }
    uVar3 = *puVar7;
    while ((uVar3 & 1) != 0) {
      uVar6 = uVar3 & 0xfffffffffffffffe | 2;
      LOCK();
      uVar1 = *puVar7;
      if (uVar3 == uVar1) {
        *puVar7 = uVar6;
      }
      UNLOCK();
      if (uVar3 == uVar1) {
        puVar7[1] = param_2;
        do {
          LOCK();
          uVar1 = *puVar7;
          if (uVar6 == uVar1) {
            *puVar7 = uVar3 & 0xfffffffffffffffc;
          }
          UNLOCK();
        } while (uVar6 != uVar1);
        return 1;
      }
      uVar3 = *puVar7;
    }
    puVar7 = (ulonglong *)(*puVar7 & 0xfffffffffffffffc);
  } while( true );
}



// FUNCTION 14555d520 FUN_14555d520 body=60 status=ok
// SIG undefined FUN_14555d520(void)

void FUN_14555d520(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar3 = (ulonglong *)*param_1;
  do {
    if (puVar3 == (ulonglong *)0x0) {
      return;
    }
    uVar2 = *puVar3;
    while (((uVar2 & 3) == 0 && (puVar3[1] == param_2))) {
      LOCK();
      uVar1 = *puVar3;
      if (uVar2 == uVar1) {
        *puVar3 = uVar2 | 1;
      }
      UNLOCK();
      if (uVar2 == uVar1) {
        return;
      }
      uVar2 = *puVar3;
    }
    puVar3 = (ulonglong *)(*puVar3 & 0xfffffffffffffffc);
  } while( true );
}



// FUNCTION 14555d5a0 FUN_14555d5a0 body=34 status=ok
// SIG undefined FUN_14555d5a0(void)

ulonglong * FUN_14555d5a0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)*param_1;
  while( true ) {
    if (puVar1 == (ulonglong *)0x0) {
      return (ulonglong *)0x0;
    }
    if (((*puVar1 & 3) == 0) && (puVar1[1] == param_2)) break;
    puVar1 = (ulonglong *)(*puVar1 & 0xfffffffffffffffc);
  }
  return puVar1;
}



// FUNCTION 14555d5d0 FUN_14555d5d0 body=37 status=ok
// SIG undefined FUN_14555d5d0(void)

longlong FUN_14555d5d0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145076e80(DAT_14c790ff8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
  }
  return lVar2;
}



// FUNCTION 14555d600 FUN_14555d600 body=86 status=ok
// SIG undefined FUN_14555d600(void)

undefined4 FUN_14555d600(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_145076e80(DAT_14c790ff8);
  if (lVar1 == 0) {
    return 2;
  }
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    *(longlong *)(lVar1 + 0x28) = param_1;
    *(longlong *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(param_1 + 8) = 0;
    return 1;
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(lVar1 + 0x28);
  *(longlong *)(lVar1 + 0x28) = param_1;
  return 1;
}



// FUNCTION 14555d660 FUN_14555d660 body=98 status=ok
// SIG undefined FUN_14555d660(void)

void FUN_14555d660(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_145076e80();
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(lVar3 + 0x28);
    lVar4 = 0;
    lVar5 = lVar2;
    if (lVar2 != 0) {
      while (lVar5 != param_1) {
        plVar1 = (longlong *)(lVar5 + 8);
        lVar4 = lVar5;
        lVar5 = *plVar1;
        if (*plVar1 == 0) {
          return;
        }
      }
      if (lVar5 == lVar2) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar5 + 8);
      }
      else {
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 8);
      }
      if (lVar5 == *(longlong *)(lVar3 + 0x20)) {
        *(longlong *)(lVar3 + 0x20) = lVar4;
      }
    }
  }
  return;
}



// FUNCTION 14555d6d0 FUN_14555d6d0 body=125 status=ok
// SIG undefined FUN_14555d6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14555d6d0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149daa208;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c79c300) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c79c300;
  }
  DAT_14c79c300 = puVar2;
  if (param_1 == DAT_14c79c2f8) {
    DAT_14c79c2f8 = puVar1;
  }
  _DAT_14c79c2f0 = _DAT_14c79c2f0 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14555d750 FUN_14555d750 body=256 status=ok
// SIG undefined FUN_14555d750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14555d750(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149daa208;
  param_1[3] = DAT_14c79c2f8;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_14c79c300 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14c79c2f8 + 0x10) = param_1;
    puVar1 = DAT_14c79c300;
  }
  DAT_14c79c300 = puVar1;
  _DAT_14c79c2f0 = _DAT_14c79c2f0 + 1;
  DAT_14c79c2f8 = param_1;
  *param_1 = &PTR_FUN_149daa218;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x101;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 14555d850 FUN_14555d850 body=200 status=ok
// SIG undefined FUN_14555d850(void)

void FUN_14555d850(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  *(char *)((longlong)param_2 + 0x1c) = cVar1;
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  }
  *(char *)((longlong)param_2 + 0x1d) = cVar1;
  cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  }
  *(char *)((longlong)param_2 + 0x1e) = cVar1;
  iVar2 = FUN_1453a2100(param_2);
  if (iVar2 != 0) {
    lVar3 = FUN_14555e0a0(param_1 + 0x20,iVar2,local_res8);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      *(undefined1 *)(lVar3 + 8) = 1;
    }
    *(int *)(param_2 + 3) = iVar2;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    *(longlong **)(param_1 + 0xa8) = param_2;
    param_2[2] = 0;
  }
  else {
    param_2[2] = *(longlong *)(param_1 + 0xa8);
    *(longlong **)(param_1 + 0xa8) = param_2;
  }
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(undefined2 *)(param_1 + 0xcf) = 0x101;
  return;
}



// FUNCTION 14555d920 FUN_14555d920 body=213 status=ok
// SIG undefined FUN_14555d920(void)

void FUN_14555d920(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_2 + 0x1c) != '\0') {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  if (*(char *)(param_2 + 0x1d) != '\0') {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  }
  *(undefined1 *)(param_2 + 0x1d) = 0;
  if (*(char *)(param_2 + 0x1e) != '\0') {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x1e) = 0;
  if (iVar2 != 0) {
    lVar5 = FUN_14555dff0(param_1 + 0x20,iVar2);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14555e1e0(param_1 + 0x20,iVar2);
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xa8);
  lVar5 = 0;
  do {
    lVar3 = lVar4;
    if (lVar3 == 0) {
LAB_14555d9de:
      *(undefined1 *)(param_1 + 0xd0) = 1;
      return;
    }
    if (lVar3 == param_2) {
      if (lVar3 == *(longlong *)(param_1 + 0xa8)) {
        *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar3 + 0x10);
      }
      else {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      }
      goto LAB_14555d9de;
    }
    lVar4 = *(longlong *)(lVar3 + 0x10);
    lVar5 = lVar3;
  } while( true );
}



// FUNCTION 14555da00 FUN_14555da00 body=326 status=ok
// SIG undefined FUN_14555da00(void)

void FUN_14555da00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar2 == '\0') {
    if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    }
  }
  else if (*(char *)((longlong)param_2 + 0x1c) == '\0') {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  *(char *)((longlong)param_2 + 0x1c) = cVar2;
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar2 == '\0') {
    if (*(char *)((longlong)param_2 + 0x1d) != '\0') {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
    }
  }
  else if (*(char *)((longlong)param_2 + 0x1d) == '\0') {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  }
  *(char *)((longlong)param_2 + 0x1d) = cVar2;
  cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar2 == '\0') {
    if (*(char *)((longlong)param_2 + 0x1e) != '\0') {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    }
  }
  else if (*(char *)((longlong)param_2 + 0x1e) == '\0') {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  }
  iVar4 = (int)param_2[3];
  *(char *)((longlong)param_2 + 0x1e) = cVar2;
  iVar3 = FUN_1453a2100(param_2);
  if (iVar3 != iVar4) {
    lVar6 = param_1 + 0x20;
    if (iVar4 != 0) {
      lVar5 = FUN_14555dff0(lVar6,iVar4);
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14555e1e0(lVar6,iVar4);
        }
      }
      *(undefined4 *)(param_2 + 3) = 0;
    }
    iVar4 = FUN_1453a2100(param_2);
    if (iVar4 != 0) {
      lVar6 = FUN_14555e0a0(lVar6,iVar4,local_res8);
      if (lVar6 != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        *(undefined1 *)(lVar6 + 8) = 1;
      }
      *(int *)(param_2 + 3) = iVar4;
    }
    *(undefined1 *)(param_1 + 0xcc) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}



// FUNCTION 14555db50 FUN_14555db50 body=57 status=ok
// SIG undefined FUN_14555db50(void)

void FUN_14555db50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res18 [16];
  
  iVar1 = FUN_1453a2290(param_2);
  if (iVar1 != 0) {
    lVar2 = FUN_14555e0a0(param_1 + 0x20,iVar1,local_res18);
    if (lVar2 != 0) {
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
  }
  return;
}



// FUNCTION 14555db90 FUN_14555db90 body=87 status=ok
// SIG undefined FUN_14555db90(void)

void FUN_14555db90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_1453a2290(param_2);
  if ((iVar2 != 0) && (lVar3 = FUN_14555dff0(param_1 + 0x20,iVar2), lVar3 != 0)) {
    piVar1 = (int *)(lVar3 + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14555e1e0(param_1 + 0x20,iVar2);
    }
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  }
  return;
}



// FUNCTION 14555dbf0 FUN_14555dbf0 body=337 status=ok
// SIG undefined FUN_14555dbf0(void)

void FUN_14555dbf0(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffc;
  if (*(longlong *)(param_1 + 0x68) != -1) {
    uVar7 = *(undefined8 *)(param_1 + 0x68);
  }
  if ((((*(int *)(param_1 + 0x70) != 0) && (0.0 < *(float *)(param_1 + 0x74))) &&
      ((uVar2 = *(uint *)(param_2 + 1), uVar2 < *(uint *)((longlong)param_2 + 0xc) ||
       (cVar3 = FUN_1450d1940(param_2), cVar3 != '\0')))) &&
     (uVar2 < *(uint *)((longlong)param_2 + 0xc))) {
    uVar2 = *(uint *)(param_2 + 1);
    *(uint *)(param_2 + 1) = uVar2 + 1;
    puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x20 + *param_2);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 0x70);
      fVar1 = *(float *)(param_1 + 0x74);
      *puVar4 = uVar7;
      *(undefined4 *)((longlong)puVar4 + 0x14) = param_4;
      *(undefined4 *)(puVar4 + 2) = 1;
      *(float *)((longlong)puVar4 + 0xc) = param_3 * fVar1;
      *(undefined4 *)(puVar4 + 3) = param_5;
    }
  }
  lVar6 = -4;
  if (*(longlong *)(param_1 + 0x80) != -1) {
    lVar6 = *(longlong *)(param_1 + 0x80);
  }
  if ((*(int *)(param_1 + 0x88) != 0) && (0.0 < *(float *)(param_1 + 0x8c))) {
    uVar2 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_2 + 0xc) <= uVar2) {
      cVar3 = FUN_1450d1940(param_2);
      if (cVar3 == '\0') {
        return;
      }
      if (*(uint *)((longlong)param_2 + 0xc) <= uVar2) {
        return;
      }
    }
    uVar2 = *(uint *)(param_2 + 1);
    *(uint *)(param_2 + 1) = uVar2 + 1;
    plVar5 = (longlong *)((ulonglong)uVar2 * 0x20 + *param_2);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(param_1 + 0x88);
      fVar1 = *(float *)(param_1 + 0x8c);
      *plVar5 = lVar6;
      *(undefined8 *)((longlong)plVar5 + 0x14) = 0;
      *(undefined4 *)(plVar5 + 2) = 1;
      *(float *)((longlong)plVar5 + 0xc) = param_3 * fVar1;
    }
  }
  return;
}



// FUNCTION 14555dd50 FUN_14555dd50 body=362 status=ok
// SIG undefined FUN_14555dd50(void)

void FUN_14555dd50(longlong param_1,longlong *param_2,int param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
  iVar8 = param_3;
  if (param_3 == 0) {
    iVar8 = *(int *)(param_1 + 0x60);
  }
  if ((((*(char *)(param_1 + 0xce) != '\0') && (iVar8 != 0)) &&
      ((uVar2 = *(uint *)(param_2 + 1), uVar2 < *(uint *)((longlong)param_2 + 0xc) ||
       (cVar5 = FUN_1450d1940(param_2), cVar5 != '\0')))) &&
     (uVar2 < *(uint *)((longlong)param_2 + 0xc))) {
    uVar2 = *(uint *)(param_2 + 1);
    *(uint *)(param_2 + 1) = uVar2 + 1;
    puVar6 = (undefined8 *)((ulonglong)uVar2 * 0x20 + *param_2);
    if (puVar6 != (undefined8 *)0x0) {
      *(int *)(puVar6 + 1) = iVar8;
      fVar1 = *(float *)(param_1 + 100);
      *puVar6 = uVar3;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      *(undefined4 *)(puVar6 + 2) = 3;
      *(float *)((longlong)puVar6 + 0xc) = param_4 * fVar1;
    }
  }
  piVar7 = *(int **)(param_1 + 0x30);
  if (piVar7 != piVar7 + *(uint *)(param_1 + 0x38)) {
    do {
      iVar4 = *piVar7;
      if (*piVar7 == 0) {
        iVar4 = param_3;
      }
      if ((((*(char *)(param_1 + 0xce) == '\0') || (iVar8 == 0)) || (iVar4 != iVar8)) &&
         ((iVar4 != 0 &&
          ((uVar2 = *(uint *)(param_2 + 1), uVar2 < *(uint *)((longlong)param_2 + 0xc) ||
           ((cVar5 = FUN_1450d1940(param_2), cVar5 != '\0' &&
            (uVar2 < *(uint *)((longlong)param_2 + 0xc))))))))) {
        uVar2 = *(uint *)(param_2 + 1);
        *(uint *)(param_2 + 1) = uVar2 + 1;
        puVar6 = (undefined8 *)((ulonglong)uVar2 * 0x20 + *param_2);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = uVar3;
          *(int *)(puVar6 + 1) = iVar4;
          fVar1 = *(float *)(param_1 + 100);
          *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
          *(undefined4 *)(puVar6 + 2) = 3;
          *(float *)((longlong)puVar6 + 0xc) = param_4 * fVar1;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)(*(longlong *)(param_1 + 0x30) +
                              (ulonglong)*(uint *)(param_1 + 0x38) * 4));
  }
  return;
}


