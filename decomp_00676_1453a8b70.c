// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1453a8b70 FUN_1453a8b70 body=328 status=ok
// SIG undefined FUN_1453a8b70(void)

void FUN_1453a8b70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1453a8b70();
  }
  plVar3 = *(longlong **)(param_1 + 0x120);
  if ((plVar3 != (longlong *)0x0) &&
     (piVar10 = (int *)*plVar3, piVar10 != piVar10 + (ulonglong)*(uint *)(plVar3 + 1) * 6)) {
    do {
      piVar7 = (int *)*param_2;
      uVar11 = *(uint *)(param_2 + 1);
      uVar12 = (ulonglong)uVar11;
      piVar8 = piVar7;
      if (piVar7 != piVar7 + uVar12 * 6) {
        do {
          uVar11 = (uint)uVar12;
          if (*piVar7 == *piVar10) {
            piVar1 = piVar8 + (uVar12 * 3 + -3) * 2;
            if (piVar7 < piVar1) {
              iVar9 = piVar1[1];
              iVar4 = piVar1[2];
              iVar5 = piVar1[3];
              *piVar7 = *piVar1;
              piVar7[1] = iVar9;
              piVar7[2] = iVar4;
              piVar7[3] = iVar5;
              *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar1 + 4);
              piVar8 = (int *)*param_2;
            }
            *(int *)(param_2 + 1) = (int)param_2[1] + -1;
            uVar11 = *(uint *)(param_2 + 1);
          }
          else {
            piVar7 = piVar7 + 6;
          }
          uVar12 = (ulonglong)uVar11;
        } while (piVar7 != piVar8 + (ulonglong)uVar11 * 6);
      }
      uVar2 = *(uint *)((longlong)param_2 + 0xc);
      if (uVar11 < uVar2) {
LAB_1453a8c53:
        if (uVar11 < *(uint *)((longlong)param_2 + 0xc)) {
          uVar11 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar11 + 1;
          piVar7 = (int *)(*param_2 + (ulonglong)uVar11 * 0x18);
          if (piVar7 != (int *)0x0) {
            iVar9 = piVar10[1];
            iVar4 = piVar10[2];
            iVar5 = piVar10[3];
            *piVar7 = *piVar10;
            piVar7[1] = iVar9;
            piVar7[2] = iVar4;
            piVar7[3] = iVar5;
            *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar10 + 4);
          }
        }
      }
      else {
        iVar9 = (uVar2 >> 1) + uVar2;
        if (uVar2 == 0) {
          iVar9 = 1;
        }
        cVar6 = FUN_1453a8970(param_2,iVar9);
        if (cVar6 != '\0') goto LAB_1453a8c53;
      }
      piVar10 = piVar10 + 6;
    } while (piVar10 != (int *)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 0x18));
  }
  return;
}



// FUNCTION 1453a8cc0 FUN_1453a8cc0 body=52 status=ok
// SIG undefined FUN_1453a8cc0(void)

longlong FUN_1453a8cc0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x11c) & 4) == 0) {
    while (lVar1 = *(longlong *)(param_1 + 0x78), lVar1 != 0) {
      param_1 = lVar1;
      if ((*(byte *)(lVar1 + 0x11c) & 4) != 0) {
        return lVar1 + 0x108;
      }
    }
  }
  return param_1 + 0x108;
}



// FUNCTION 1453a8d00 FUN_1453a8d00 body=144 status=ok
// SIG undefined FUN_1453a8d00(void)

void FUN_1453a8d00(longlong param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_res8 [8];
  
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0x11c) >> 1 & 1;
  pbVar1 = *(byte **)(param_1 + 0x90);
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar4;
    do {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x38) {
        pbVar4 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar2 = (byte *)(ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  *param_3 = *(undefined4 *)pbVar1;
  *param_4 = *(byte *)(param_1 + 0x11c) >> 3 & 1;
  return;
}



// FUNCTION 1453a8d90 FUN_1453a8d90 body=110 status=ok
// SIG undefined FUN_1453a8d90(void)

/* WARNING: Removing unreachable block (ram,0x0001453a8dcf) */

void FUN_1453a8d90(longlong param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte local_res8 [32];
  
  pbVar2 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0x11c) & 1;
  pbVar1 = *(byte **)(param_1 + 0x90);
  if (pbVar1 != (byte *)0x0) {
    while( true ) {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x37) break;
      pbVar2 = (byte *)(ulonglong)uVar3;
      if (*pbVar1 <= uVar3) {
        *param_3 = 0;
        return;
      }
    }
    pbVar2 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
  }
  pbVar1 = local_res8;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_3 = *(undefined4 *)pbVar1;
  return;
}



// FUNCTION 1453a8e00 FUN_1453a8e00 body=46 status=ok
// SIG undefined FUN_1453a8e00(void)

void FUN_1453a8e00(longlong param_1,byte *param_2,undefined4 *param_3)

{
  *param_2 = *(byte *)(param_1 + 0x11c) >> 2 & 1;
  if ((*(byte *)(param_1 + 0x11c) & 4) != 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x108);
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1453a8e30 FUN_1453a8e30 body=116 status=ok
// SIG undefined FUN_1453a8e30(void)

undefined8 * FUN_1453a8e30(undefined8 *param_1)

{
  FUN_14536d5e0();
  *(byte *)((longlong)param_1 + 0x11c) = *(byte *)((longlong)param_1 + 0x11c) & 0xf0;
  *param_1 = &PTR_FUN_149d45f00;
  param_1[1] = &PTR_FUN_149d46198;
  param_1[2] = &PTR_LAB_149d461a0;
  param_1[5] = &PTR_LAB_149d461c8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 1453a8eb0 FUN_1453a8eb0 body=113 status=ok
// SIG undefined FUN_1453a8eb0(void)

void FUN_1453a8eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d45f00;
  param_1[1] = &PTR_FUN_149d46198;
  param_1[2] = &PTR_LAB_149d461a0;
  param_1[5] = &PTR_LAB_149d461c8;
  FUN_1453a8f30();
  *param_1 = &PTR_FUN_149d44280;
  param_1[1] = &PTR_FUN_149d444f8;
  param_1[2] = &PTR_LAB_149d44500;
  param_1[5] = &PTR_LAB_149d44528;
  FUN_145391e70(param_1);
  return;
}



// FUNCTION 1453a8f30 FUN_1453a8f30 body=102 status=ok
// SIG undefined FUN_1453a8f30(void)

void FUN_1453a8f30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x120);
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(2,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    if (*(void **)(param_1 + 0x120) != (void *)0x0) {
      AK::MemoryMgr::Free(2,*(void **)(param_1 + 0x120));
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1453a8fa0 FUN_1453a8fa0 body=191 status=ok
// SIG undefined FUN_1453a8fa0(void)

ulonglong FUN_1453a8fa0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x288))();
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  puVar3 = (undefined8 *)param_1[0x1f];
  uVar2 = uVar2 & 0xffffffff;
  if (puVar3 != puVar3 + *(uint *)(param_1 + 0x20)) {
    while( true ) {
      uVar1 = (**(code **)(*(longlong *)*puVar3 + 0x128))();
      uVar2 = (ulonglong)uVar1;
      if (uVar1 != 1) break;
      puVar3 = puVar3 + 1;
      if (puVar3 == (undefined8 *)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x20) * 8)) {
        return 1;
      }
    }
    puVar4 = (undefined8 *)param_1[0x1f];
    if (puVar4 != puVar3) {
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x130))();
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar3);
      goto LAB_1453a903c;
    }
  }
  if ((int)uVar2 == 1) {
    return uVar2;
  }
LAB_1453a903c:
  (**(code **)(*param_1 + 0x290))(param_1);
  return uVar2;
}



// FUNCTION 1453a9060 FUN_1453a9060 body=96 status=ok
// SIG undefined FUN_1453a9060(void)

void FUN_1453a9060(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x1f];
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x20)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x130))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x20) * 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0001453a90b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))(param_1);
  return;
}



// FUNCTION 1453a90c0 FUN_1453a90c0 body=177 status=ok
// SIG undefined FUN_1453a90c0(void)

ulonglong FUN_1453a90c0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  lVar4 = *plVar1;
  if (lVar4 != lVar4 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18) {
    do {
      uVar2 = FUN_1450d5430(*(undefined4 *)(lVar4 + 4));
      if ((int)uVar2 != 1) {
        lVar3 = *plVar1;
        if (lVar3 == lVar4) {
          return uVar2;
        }
        do {
          FUN_1450d5550(*(undefined4 *)(lVar3 + 4));
          lVar3 = lVar3 + 0x18;
        } while (lVar3 != lVar4);
        return uVar2 & 0xffffffff;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != *plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18);
    return uVar2 & 0xffffffff;
  }
  return 1;
}



// FUNCTION 1453a9180 FUN_1453a9180 body=90 status=ok
// SIG undefined FUN_1453a9180(void)

void FUN_1453a9180(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x120);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar2 = *plVar1, lVar2 != lVar2 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18)) {
    do {
      FUN_1450d5550(*(undefined4 *)(lVar2 + 4));
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 0x18);
  }
  return;
}



// FUNCTION 1453a91e0 FUN_1453a91e0 body=146 status=ok
// SIG undefined FUN_1453a91e0(void)

undefined8 * FUN_1453a91e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45f00;
  param_1[1] = &PTR_FUN_149d46198;
  param_1[2] = &PTR_LAB_149d461a0;
  param_1[5] = &PTR_LAB_149d461c8;
  FUN_1453a8f30();
  *param_1 = &PTR_FUN_149d44280;
  param_1[1] = &PTR_FUN_149d444f8;
  param_1[2] = &PTR_LAB_149d44500;
  param_1[5] = &PTR_LAB_149d44528;
  FUN_145391e70(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1453a9290 FUN_1453a9290 body=178 status=ok
// SIG undefined FUN_1453a9290(void)

longlong * FUN_1453a9290(void)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(2,0x140);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  FUN_1453a8e30(plVar3);
  *plVar3 = (longlong)&PTR_FUN_149d46248;
  plVar3[1] = (longlong)&PTR_FUN_149d464e0;
  plVar3[2] = (longlong)&PTR_LAB_149d464e8;
  plVar3[5] = (longlong)&PTR_LAB_149d46510;
  plVar3[0x25] = 0;
  plVar3[0x26] = 0;
  *(undefined4 *)(plVar3 + 0x27) = 0;
  if (*(code **)(*plVar3 + 0x70) != FUN_1453a96d0) {
    iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
      goto LAB_1453a9321;
    }
  }
  bVar1 = 0;
LAB_1453a9321:
  *(byte *)((longlong)plVar3 + 0xd4) = *(byte *)((longlong)plVar3 + 0xd4) & 0x7f | bVar1;
  return plVar3;
}



// FUNCTION 1453a9350 FUN_1453a9350 body=890 status=ok
// SIG undefined FUN_1453a9350(void)

ulonglong FUN_1453a9350(longlong *param_1,double *param_2,undefined4 param_3)

{
  double *pdVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong *plVar10;
  char *_Src;
  char *pcVar11;
  void *_Dst;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  double dVar18;
  double *local_res10;
  undefined4 local_res18 [4];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar6 = (**(code **)(*param_1 + 0x70))();
  if (iVar6 != 7) {
    lVar4 = param_1[4];
    uVar7 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar4,7,uVar7);
    return 0x5b;
  }
  uVar8 = FUN_1453a7dd0(param_1,&local_res10,local_res18,0);
  if ((int)uVar8 == 1) {
    pdVar1 = local_res10 + 1;
    dVar18 = (double)DAT_14c72f42c * *local_res10 * 0.001;
    if (dVar18 <= 0.0) {
      lVar4 = 0xbfe00000;
    }
    else {
      lVar4 = 0x3fe00000;
    }
    *(int *)(param_1 + 0x27) = (int)((double)(lVar4 << 0x20) + dVar18);
    local_res10 = (double *)((longlong)local_res10 + 0xc);
    uVar2 = *(uint *)pdVar1;
    uVar16 = (ulonglong)uVar2;
    uVar8 = uVar8 & 0xffffffff;
    if (uVar2 != 0) {
      pvVar9 = AK::MemoryMgr::Malloc(2,uVar16 * 0x18);
      if (pvVar9 == (void *)0x0) {
        uVar8 = 0x34;
      }
      else {
        puVar14 = (undefined8 *)0x0;
        if (uVar2 != 0) {
          plVar17 = (longlong *)((longlong)pvVar9 + 0x10);
          plVar10 = plVar17;
          uVar8 = uVar16;
          do {
            *plVar10 = 0;
            plVar10 = plVar10 + 3;
            uVar8 = uVar8 - 1;
            puVar13 = puVar14;
          } while (uVar8 != 0);
          do {
            *(undefined4 *)(plVar17 + -2) = *(undefined4 *)local_res10;
            _Src = (char *)((longlong)local_res10 + 0xc);
            plVar17[-1] = *(longlong *)((longlong)local_res10 + 4);
            cVar5 = *_Src;
            pcVar11 = _Src;
            puVar12 = puVar14;
            while (iVar6 = (int)puVar12, cVar5 != '\0') {
              pcVar11 = pcVar11 + 1;
              puVar12 = (undefined8 *)(ulonglong)(iVar6 + 1);
              cVar5 = *pcVar11;
            }
            local_res10 = (double *)(pcVar11 + 1);
            if (iVar6 != 0) {
              _Dst = AK::MemoryMgr::Malloc(2,(ulonglong)(iVar6 + 1));
              *plVar17 = (longlong)_Dst;
              if (_Dst == (void *)0x0) {
                uVar8 = 0x34;
                goto LAB_1453a95cd;
              }
              memcpy(_Dst,_Src,(size_t)puVar12);
              *(undefined1 *)((longlong)puVar12 + *plVar17) = 0;
            }
            uVar15 = (int)puVar13 + 1;
            plVar17 = plVar17 + 3;
            puVar13 = (undefined8 *)(ulonglong)uVar15;
          } while (uVar15 < uVar2);
        }
        plVar17 = param_1 + 0x25;
        FUN_1453aa470(plVar17);
        if ((*(uint *)((longlong)param_1 + 0x134) < uVar2) &&
           ((*(uint *)((longlong)param_1 + 0x134) != 0 ||
            (cVar5 = FUN_1453aa4f0(plVar17,uVar2), cVar5 == '\0')))) {
          uVar8 = 2;
          if (uVar2 != 0) {
LAB_1453a95cd:
            puVar14 = (undefined8 *)((longlong)pvVar9 + 0x10);
            do {
              if ((void *)*puVar14 != (void *)0x0) {
                AK::MemoryMgr::Free(2,(void *)*puVar14);
              }
              puVar14 = puVar14 + 3;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        else {
          if (uVar2 != 0) {
            puVar13 = (undefined8 *)((longlong)pvVar9 + 0x10);
            do {
              uVar2 = *(uint *)(param_1 + 0x26);
              puVar12 = puVar14;
              if (uVar2 < *(uint *)((longlong)param_1 + 0x134)) {
                *(uint *)(param_1 + 0x26) = uVar2 + 1;
                puVar12 = (undefined8 *)((ulonglong)uVar2 * 0x10 + *plVar17);
                if (puVar12 != (undefined8 *)0x0) {
                  *puVar12 = 0;
                  puVar12[1] = 0;
                }
              }
              *(undefined4 *)puVar12 = *(undefined4 *)(puVar13 + -2);
              dVar18 = (double)DAT_14c72f42c * (double)puVar13[-1] * 0.001;
              if (dVar18 <= 0.0) {
                lVar4 = 0xbfe00000;
              }
              else {
                lVar4 = 0x3fe00000;
              }
              *(int *)((longlong)puVar12 + 4) = (int)((double)(lVar4 << 0x20) + dVar18);
              uVar3 = *puVar13;
              puVar13 = puVar13 + 3;
              puVar12[1] = uVar3;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          uVar8 = 1;
        }
        AK::MemoryMgr::Free(2,pvVar9);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1453a96d0 FUN_1453a96d0 body=6 status=ok
// SIG undefined FUN_1453a96d0(void)

undefined8 FUN_1453a96d0(void)

{
  return 7;
}



// FUNCTION 1453a96e0 FUN_1453a96e0 body=159 status=ok
// SIG undefined FUN_1453a96e0(void)

undefined4 FUN_1453a96e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 == 6) {
    if (param_2[0xf] == 0) {
      lVar1 = param_2[4];
      lVar5 = FUN_14508a500(param_1 + 0x1e,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[4] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1453a9780 FUN_1453a9780 body=106 status=ok
// SIG undefined FUN_1453a9780(void)

void FUN_1453a9780(undefined4 param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  
  if (*param_2 != 4) {
    FUN_1453a8160();
    return;
  }
  bVar2 = *(byte *)(param_2 + 0xf);
  if ((bVar2 & 1) != 0) {
    fVar1 = (float)param_2[0xe];
    fVar3 = 0.0;
    if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 <= fVar1)) {
      fVar3 = 1.0;
    }
    FUN_144d52780(fVar1,*(undefined8 *)(param_2 + 2),param_2[4],fVar3,bVar2 >> 1 & 1);
    return;
  }
  FUN_144d526c0(param_1,*(undefined8 *)(param_2 + 2),param_2[4],param_2[0xe],bVar2 >> 1 & 1);
  return;
}



// FUNCTION 1453a97f0 FUN_1453a97f0 body=106 status=ok
// SIG undefined FUN_1453a97f0(void)

void FUN_1453a97f0(undefined4 param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  
  if (*param_2 != 4) {
    FUN_1453a8340();
    return;
  }
  bVar2 = *(byte *)(param_2 + 0xf);
  if ((bVar2 & 1) != 0) {
    fVar1 = (float)param_2[0xe];
    fVar3 = 0.0;
    if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 <= fVar1)) {
      fVar3 = 1.0;
    }
    FUN_144d52780(fVar1,*(undefined8 *)(param_2 + 2),param_2[4],fVar3,bVar2 >> 1 & 1);
    return;
  }
  FUN_144d526c0(param_1,*(undefined8 *)(param_2 + 2),param_2[4],param_2[0xe],bVar2 >> 1 & 1);
  return;
}



// FUNCTION 1453a9860 FUN_1453a9860 body=126 status=ok
// SIG undefined FUN_1453a9860(void)

undefined8 FUN_1453a9860(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = FUN_1453a98f0(param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                        *(byte *)(param_2 + 0x310) >> 2 & 1);
  if (lVar1 != 0) {
    local_18 = **(undefined4 **)(param_2 + 0x18);
    local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
    local_10 = FUN_1450ef150(lVar1);
    FUN_1450ed630(lVar1,&local_18);
    return 1;
  }
  return 2;
}



// FUNCTION 1453a98f0 FUN_1453a98f0 body=161 status=ok
// SIG undefined FUN_1453a98f0(void)

longlong FUN_1453a98f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    return 0;
  }
  pvVar2 = AK::MemoryMgr::Malloc(0,0xa0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_14555f650(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = FUN_14555f6b0(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      FUN_1450ed1a0();
      return lVar3;
    }
    FUN_1450ed8c0(lVar3);
    FUN_1450ed1a0(lVar3);
  }
  return 0;
}



// FUNCTION 1453a99a0 FUN_1453a99a0 body=154 status=ok
// SIG undefined FUN_1453a99a0(void)

longlong FUN_1453a99a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    return 0;
  }
  pvVar2 = AK::MemoryMgr::Malloc(0,0xb0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_1453a6d20(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = FUN_1453a6db0(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      return lVar3;
    }
    FUN_1450ed8c0(lVar3);
    FUN_1450ed1a0(lVar3);
  }
  return 0;
}



// FUNCTION 1453a9a40 FUN_1453a9a40 body=29 status=ok
// SIG undefined FUN_1453a9a40(void)

undefined8 FUN_1453a9a40(longlong param_1,ushort param_2)

{
  if ((uint)param_2 < *(uint *)(param_1 + 0x100)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1453a9a60 FUN_1453a9a60 body=784 status=ok
// SIG undefined FUN_1453a9a60(void)

char FUN_1453a9a60(longlong param_1,uint param_2,undefined4 param_3,int *param_4,char param_5,
                  uint *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  
  piVar4 = *(int **)(param_1 + 0x128);
  cVar11 = '\x02';
  iVar1 = piVar4[1];
  uVar12 = (piVar4 + (ulonglong)*(uint *)(param_1 + 0x130) * 4)[-3] - iVar1;
  if (uVar12 < param_2) {
    return '\x02';
  }
  switch(param_3) {
  case 0:
    *param_4 = 0;
    *param_6 = param_2;
    break;
  case 1:
    lVar7 = FUN_1453a8cc0(param_1);
    iVar1 = *(int *)(lVar7 + 0xc);
    uVar12 = param_2 + 1;
    if (param_5 == '\0') {
      uVar12 = param_2;
    }
    uVar5 = *(uint *)(lVar7 + 0x10);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                    (ulonglong)*(uint *)(param_1 + 0x130) * 0x10);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x128) + 4);
    *param_6 = uVar5;
    if (iVar1 == 0) {
      uVar5 = uVar12 + 1;
      *param_6 = uVar5;
    }
    else {
      while (uVar5 < uVar12) {
        uVar5 = uVar5 + iVar1;
        *param_6 = uVar5;
      }
    }
    *param_4 = 0;
    return ((uint)(iVar2 - iVar3) < uVar5) + '\x01';
  case 2:
    lVar7 = FUN_1453a8cc0(param_1);
    iVar1 = *(int *)(lVar7 + 8);
    uVar12 = param_2 + 1;
    if (param_5 == '\0') {
      uVar12 = param_2;
    }
    uVar5 = 0;
    uVar10 = *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                     (ulonglong)*(uint *)(param_1 + 0x130) * 0x10) -
             *(int *)(*(longlong *)(param_1 + 0x128) + 4);
    uVar6 = 0;
    *param_6 = 0;
    if (iVar1 != 0) {
      if (uVar12 != 0) {
        do {
          uVar5 = uVar5 + iVar1;
          *param_6 = uVar5;
        } while (uVar5 < uVar12);
        *param_4 = 0;
        return (uVar10 < uVar5) + '\x01';
      }
      goto LAB_1453a9bc0;
    }
    goto LAB_1453a9bbb;
  case 3:
    lVar7 = FUN_1453a8cc0(param_1);
    iVar1 = *(int *)(lVar7 + 4);
    uVar12 = param_2 + 1;
    if (param_5 == '\0') {
      uVar12 = param_2;
    }
    uVar5 = 0;
    uVar10 = *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                     (ulonglong)*(uint *)(param_1 + 0x130) * 0x10) -
             *(int *)(*(longlong *)(param_1 + 0x128) + 4);
    uVar6 = 0;
    *param_6 = 0;
    if (iVar1 != 0) {
      if (uVar12 != 0) {
        do {
          uVar5 = uVar5 + iVar1;
          *param_6 = uVar5;
        } while (uVar5 < uVar12);
        *param_4 = 0;
        return (uVar10 < uVar5) + '\x01';
      }
      goto LAB_1453a9bc0;
    }
LAB_1453a9bbb:
    uVar6 = uVar12 + 1;
    *param_6 = uVar6;
LAB_1453a9bc0:
    *param_4 = 0;
    return (uVar10 < uVar6) + '\x01';
  case 4:
    piVar8 = piVar4;
    if (param_5 != '\0') {
      piVar8 = piVar4 + 4;
    }
    for (; piVar8 != piVar4 + (ulonglong)*(uint *)(param_1 + 0x130) * 4; piVar8 = piVar8 + 4) {
      if ((iVar1 + param_2 <= (uint)piVar8[1]) && ((*param_4 == 0 || (*piVar8 == *param_4)))) {
        *param_4 = *piVar8;
        *param_6 = piVar8[1] - *(int *)(*(longlong *)(param_1 + 0x128) + 4);
        goto LAB_1453a9d4c;
      }
    }
    *param_4 = piVar4[(ulonglong)*(uint *)(param_1 + 0x130) * 4 + -4];
    *param_6 = *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                       (ulonglong)*(uint *)(param_1 + 0x130) * 0x10) -
               *(int *)(*(longlong *)(param_1 + 0x128) + 4);
    break;
  case 5:
    uVar12 = 1;
    if (*(int *)(param_1 + 0x130) == 2) {
      return '\x02';
    }
    while ((uVar9 = (ulonglong)uVar12, (uint)piVar4[uVar9 * 4 + 1] <= iVar1 + param_2 ||
           ((*param_4 != 0 && (piVar4[uVar9 * 4] != *param_4))))) {
      uVar12 = uVar12 + 1;
      if (*(int *)(param_1 + 0x130) - 2U < uVar12) {
        return '\x02';
      }
    }
    *param_4 = piVar4[uVar9 * 4];
    *param_6 = *(int *)(*(longlong *)(param_1 + 0x128) + 4 + uVar9 * 0x10) -
               *(int *)(*(longlong *)(param_1 + 0x128) + 4);
    break;
  case 6:
    if (param_2 != 0) {
      return '\x02';
    }
    if (param_5 != '\0') {
      return '\x02';
    }
    *param_4 = *piVar4;
    *param_6 = 0;
    break;
  case 7:
    *param_6 = uVar12;
    *param_4 = *(int *)(*(longlong *)(param_1 + 0x128) + -0x10 +
                       (ulonglong)*(uint *)(param_1 + 0x130) * 0x10);
    break;
  default:
    goto switchD_1453a9ad4_default;
  }
LAB_1453a9d4c:
  cVar11 = '\x01';
switchD_1453a9ad4_default:
  return cVar11;
}



// FUNCTION 1453a9d90 FUN_1453a9d90 body=129 status=ok
// SIG undefined FUN_1453a9d90(void)

void FUN_1453a9d90(longlong param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined4 *param_5,int *param_6)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  
  *param_6 = param_3;
  *param_5 = 0;
  uVar2 = *(ushort *)(param_2 + 0x14) & 0x38;
  if (uVar2 == 0) {
    if (param_3 == 0) {
      *param_5 = **(undefined4 **)(param_1 + 0x128);
      return;
    }
  }
  else {
    cVar4 = (char)*(ushort *)(param_2 + 0x14);
    if (uVar2 == 0x10) {
      if (-1 < cVar4) {
        param_4 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar3 = 0;
    }
    else {
      if (uVar2 != 0x18) {
        return;
      }
      if (-1 < cVar4) {
        param_4 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar3 = 1;
    }
    iVar1 = FUN_1453a9fa0(param_1,*param_6,param_4,uVar3,param_5);
    *param_6 = iVar1;
  }
  return;
}



// FUNCTION 1453a9e20 FUN_1453a9e20 body=11 status=ok
// SIG undefined FUN_1453a9e20(void)

undefined4 FUN_1453a9e20(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 4);
}



// FUNCTION 1453a9e30 FUN_1453a9e30 body=29 status=ok
// SIG undefined FUN_1453a9e30(void)

int FUN_1453a9e30(longlong param_1)

{
  return *(int *)(param_1 + 0x138) -
         *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                 (ulonglong)*(uint *)(param_1 + 0x130) * 0x10);
}



// FUNCTION 1453a9e50 FUN_1453a9e50 body=24 status=ok
// SIG undefined FUN_1453a9e50(void)

int FUN_1453a9e50(longlong param_1)

{
  return *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                 (ulonglong)*(uint *)(param_1 + 0x130) * 0x10) -
         *(int *)(*(longlong *)(param_1 + 0x128) + 4);
}



// FUNCTION 1453a9e70 FUN_1453a9e70 body=149 status=ok
// SIG undefined FUN_1453a9e70(void)

int FUN_1453a9e70(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x128);
  uVar3 = 0;
  piVar7 = (int *)(lVar2 + 4);
  iVar1 = *piVar7;
  uVar6 = uVar3;
  uVar8 = uVar3;
  if (*(int *)(param_1 + 0x130) != 1) {
    do {
      uVar4 = *piVar7 - (param_2 + iVar1);
      uVar5 = -uVar4;
      if ((int)uVar5 < 0) {
        uVar5 = uVar4;
      }
      if ((uVar3 == 0) || ((int)uVar5 < (int)uVar8)) {
        uVar8 = (ulonglong)uVar5;
        uVar3 = uVar6 * 0x10 + lVar2;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      piVar7 = piVar7 + 4;
    } while (uVar5 < *(int *)(param_1 + 0x130) - 1U);
  }
  if (uVar3 != 0) {
    return *(int *)(uVar3 + 4) - *(int *)(lVar2 + 4);
  }
  return (param_2 + iVar1) - *(int *)(lVar2 + 4);
}



// FUNCTION 1453a9f10 FUN_1453a9f10 body=134 status=ok
// SIG undefined FUN_1453a9f10(void)

undefined8 FUN_1453a9f10(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar3 != puVar3 + *(uint *)(param_1 + 0x100)) {
    do {
      cVar1 = FUN_1453ad5a0(*puVar3,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8));
  }
  uVar2 = FUN_1450d71c0(param_1,param_2,param_3,0);
  return uVar2;
}



// FUNCTION 1453a9fa0 FUN_1453a9fa0 body=295 status=ok
// SIG undefined FUN_1453a9fa0(void)

int FUN_1453a9fa0(longlong param_1,int param_2,int param_3,byte param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0x128);
  uVar6 = (ulonglong)param_4;
  uVar7 = *(int *)(param_1 + 0x130) - 1;
  uVar5 = (uint)param_4;
  while ((iVar4 = (int)uVar6, uVar5 < uVar7 &&
         ((uint)puVar1[uVar6 * 4 + 1] < (uint)(param_2 + puVar1[1])))) {
    uVar5 = iVar4 + 1;
    uVar6 = (ulonglong)uVar5;
  }
  if (param_3 == 0) {
    uVar7 = uVar7 - iVar4;
  }
  else {
    uVar7 = FUN_1453aa0d0();
  }
  if (uVar7 == 0) {
    *param_5 = *puVar1;
    return 0;
  }
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  uVar3 = (DAT_14c791078 >> 0x21) % (ulonglong)uVar7;
  iVar2 = (int)uVar3;
  if (param_3 == 0) {
    uVar6 = (ulonglong)(uint)(iVar2 + iVar4);
    goto LAB_1453aa081;
  }
  if (iVar4 == 0) {
    if (iVar2 != 0) {
      uVar3 = (ulonglong)(iVar2 - 1);
      uVar6 = 1;
      goto LAB_1453aa04f;
    }
  }
  else {
LAB_1453aa04f:
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x128) + uVar6 * 0x10) == param_3) {
        if ((int)uVar3 == 0) goto LAB_1453aa081;
        uVar3 = (ulonglong)((int)uVar3 - 1);
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x130));
  }
  uVar6 = 0;
LAB_1453aa081:
  *param_5 = *(undefined4 *)(*(longlong *)(param_1 + 0x128) + uVar6 * 0x10);
  return *(int *)(*(longlong *)(param_1 + 0x128) + 4 + uVar6 * 0x10) -
         *(int *)(*(longlong *)(param_1 + 0x128) + 4);
}



// FUNCTION 1453aa0d0 FUN_1453aa0d0 body=403 status=ok
// SIG undefined FUN_1453aa0d0(void)

uint FUN_1453aa0d0(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  uVar10 = *(int *)(param_1 + 0x130) - 1;
  uVar7 = (uint)(param_2 == 0);
  uVar9 = 1;
  if (param_2 != 0) {
    uVar9 = (ulonglong)param_2;
  }
  uVar8 = (uint)uVar9;
  if (uVar8 < uVar10) {
    if (uVar10 - uVar8 < 8) goto LAB_1453aa21e;
    lVar6 = *(longlong *)(param_1 + 0x128);
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    uVar7 = uVar8 + 2;
    uVar12 = uVar9;
    do {
      uVar11 = (int)uVar12 + 8;
      uVar9 = (ulonglong)uVar11;
      uVar1 = uVar7 + 4;
      uVar2 = uVar7 + 3;
      uVar3 = uVar7 + 2;
      uVar4 = uVar7 + 5;
      iVar17 = iVar17 + (uint)(*(int *)(lVar6 + uVar12 * 0x10) == param_3);
      iVar18 = iVar18 + (uint)(*(int *)(lVar6 + (ulonglong)(uVar7 - 1) * 0x10) == param_3);
      iVar19 = iVar19 + (uint)(*(int *)(lVar6 + (ulonglong)uVar7 * 0x10) == param_3);
      iVar20 = iVar20 + (uint)(*(int *)(lVar6 + (ulonglong)(uVar7 + 1) * 0x10) == param_3);
      uVar7 = uVar7 + 8;
      iVar13 = iVar13 + (uint)(*(int *)(lVar6 + (ulonglong)uVar3 * 0x10) == param_3);
      iVar14 = iVar14 + (uint)(*(int *)(lVar6 + (ulonglong)uVar2 * 0x10) == param_3);
      iVar15 = iVar15 + (uint)(*(int *)(lVar6 + (ulonglong)uVar1 * 0x10) == param_3);
      iVar16 = iVar16 + (uint)(*(int *)(lVar6 + (ulonglong)uVar4 * 0x10) == param_3);
      uVar12 = uVar9;
    } while (uVar11 < uVar10 - (uVar10 - uVar8 & 7));
    uVar7 = iVar13 + iVar17 + iVar15 + iVar19 + iVar14 + iVar18 + iVar16 + iVar20 +
            (uint)(param_2 == 0);
  }
  if (uVar10 <= (uint)uVar9) {
    return uVar7;
  }
LAB_1453aa21e:
  lVar6 = uVar9 << 4;
  uVar9 = (ulonglong)(uVar10 - (int)uVar9);
  do {
    piVar5 = (int *)(lVar6 + *(longlong *)(param_1 + 0x128));
    lVar6 = lVar6 + 0x10;
    uVar10 = uVar7 + 1;
    if (*piVar5 != param_3) {
      uVar10 = uVar7;
    }
    uVar9 = uVar9 - 1;
    uVar7 = uVar10;
  } while (uVar9 != 0);
  return uVar10;
}



// FUNCTION 1453aa270 FUN_1453aa270 body=181 status=ok
// SIG undefined FUN_1453aa270(void)

void FUN_1453aa270(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = param_4 + *(int *)(*(longlong *)(param_1 + 0x128) + 4);
  uVar1 = uVar5 + param_5;
  if ((int)uVar5 < 0) {
    if ((int)uVar1 < 1) {
      return;
    }
    uVar5 = 0;
  }
  uVar4 = 1;
  iVar2 = *(int *)(param_1 + 0x130);
  if (iVar2 != 2) {
    do {
      lVar6 = (ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0x128);
      uVar3 = *(uint *)(lVar6 + 4);
      if (uVar5 <= uVar3) {
        if (uVar1 <= uVar3) {
          return;
        }
        FUN_1450b34a0(DAT_14c790fc0,param_2,param_3,*(undefined8 *)(lVar6 + 8));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= iVar2 - 2U);
  }
  return;
}



// FUNCTION 1453aa330 FUN_1453aa330 body=308 status=ok
// SIG undefined FUN_1453aa330(void)

void FUN_1453aa330(longlong param_1,uint param_2,uint param_3,int *param_4,int *param_5,
                  uint *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  if ((int)param_2 < 0) {
    if (-param_2 < param_3) {
      param_3 = param_3 + param_2;
      param_2 = uVar3;
      goto LAB_1453aa376;
    }
LAB_1453aa35c:
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0;
  }
  else {
LAB_1453aa376:
    uVar4 = *(int *)(*(longlong *)(param_1 + 0x128) + -0xc +
                    (ulonglong)*(uint *)(param_1 + 0x130) * 0x10) -
            *(int *)(*(longlong *)(param_1 + 0x128) + 4);
    if (uVar4 < param_2 + param_3) {
      if (uVar4 <= param_2) goto LAB_1453aa35c;
      param_3 = uVar4 - param_2;
    }
    lVar1 = FUN_1453a8cc0(param_1);
    uVar4 = *(uint *)(lVar1 + 8);
    iVar6 = 0;
    iVar5 = iVar6;
    if (uVar4 != 0) {
      uVar2 = (uVar4 - 1) + (uVar4 + param_2) % uVar4;
      iVar5 = (uVar2 + param_3) / uVar4 - uVar2 / uVar4;
    }
    *param_4 = iVar5;
    uVar4 = *(uint *)(lVar1 + 4);
    if (uVar4 != 0) {
      uVar2 = (uVar4 - 1) + (uVar4 + param_2) % uVar4;
      iVar6 = (uVar2 + param_3) / uVar4 - uVar2 / uVar4;
    }
    *param_5 = iVar6;
    uVar4 = *(uint *)(lVar1 + 0xc);
    if (uVar4 != 0) {
      uVar3 = (uVar4 - 1) + ((uVar4 - *(int *)(lVar1 + 0x10)) + param_2) % uVar4;
      uVar3 = (uVar3 + param_3) / uVar4 - uVar3 / uVar4;
    }
    *param_6 = uVar3;
  }
  return;
}



// FUNCTION 1453aa470 FUN_1453aa470 body=113 status=ok
// SIG undefined FUN_1453aa470(void)

void FUN_1453aa470(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 1) * 0x10 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
      if (*(void **)(lVar1 + 8) != (void *)0x0) {
        AK::MemoryMgr::Free(2,*(void **)(lVar1 + 8));
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1453aa4f0 FUN_1453aa4f0 body=234 status=ok
// SIG undefined FUN_1453aa4f0(void)

undefined8 FUN_1453aa4f0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  _Var6 = (ulonglong)uVar8 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(0,_Var6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (puVar4 = puVar5, (undefined8 *)*param_1 != puVar5)) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        puVar1 = (undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)puVar5));
        uVar3 = puVar1[1];
        *puVar4 = *puVar1;
        puVar4[1] = uVar3;
        pvVar2 = *(void **)((longlong)puVar4 + *param_1 + (8 - (longlong)puVar5));
        if (pvVar2 != (void *)0x0) {
          AK::MemoryMgr::Free(2,pvVar2);
        }
        puVar4 = puVar4 + 2;
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    puVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)puVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 1453aa5e0 FUN_1453aa5e0 body=110 status=ok
// SIG undefined FUN_1453aa5e0(void)

undefined8 * FUN_1453aa5e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d46248;
  param_1[1] = &PTR_FUN_149d464e0;
  param_1[2] = &PTR_LAB_149d464e8;
  param_1[5] = &PTR_LAB_149d46510;
  FUN_1453aa470(param_1 + 0x25);
  FUN_1453a8eb0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1453aa680 FUN_1453aa680 body=43 status=ok
// SIG undefined FUN_1453aa680(void)

undefined8 * FUN_1453aa680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d46590;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1453aa6b0 FUN_1453aa6b0 body=186 status=ok
// SIG undefined FUN_1453aa6b0(void)

undefined8 FUN_1453aa6b0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453aa74d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1453aa74d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1453aa770 FUN_1453aa770 body=52 status=ok
// SIG undefined FUN_1453aa770(void)

undefined8 FUN_1453aa770(undefined8 param_1,ulonglong param_2)

{
  FUN_14555fd70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1453aa7c0 FUN_1453aa7c0 body=43 status=ok
// SIG undefined FUN_1453aa7c0(void)

undefined8 * FUN_1453aa7c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d46590;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453aa7f0 FUN_1453aa7f0 body=268 status=ok
// SIG undefined FUN_1453aa7f0(void)

longlong * FUN_1453aa7f0(void)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(2,0x188);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  FUN_1450f2880(plVar3);
  *plVar3 = (longlong)&PTR_FUN_149d465c0;
  *(undefined4 *)((longlong)plVar3 + 0x14c) = 1;
  plVar3[1] = (longlong)&PTR_FUN_149d46858;
  plVar3[2] = (longlong)&PTR_LAB_149d46860;
  plVar3[5] = (longlong)&PTR_LAB_149d46888;
  plVar3[0x28] = 0;
  *(undefined4 *)(plVar3 + 0x29) = 0;
  *(undefined2 *)(plVar3 + 0x2a) = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  *(undefined4 *)(plVar3 + 0x2d) = 0;
  *(undefined1 *)((longlong)plVar3 + 0x16e) = 0;
  *(undefined2 *)(plVar3 + 0x2e) = 0;
  plVar3[0x2f] = 0;
  plVar3[0x30] = 0;
  *(undefined4 *)((longlong)plVar3 + 0x154) = 50000;
  plVar3[0x27] = (longlong)&PTR_FUN_149d465a0;
  *(undefined2 *)((longlong)plVar3 + 0x16c) = 0x100;
  if (*(code **)(*plVar3 + 0x70) != FUN_1453aaad0) {
    iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
      goto LAB_1453aa8db;
    }
  }
  bVar1 = 0;
LAB_1453aa8db:
  *(byte *)((longlong)plVar3 + 0xd4) = *(byte *)((longlong)plVar3 + 0xd4) & 0x7f | bVar1;
  return plVar3;
}



// FUNCTION 1453aa900 FUN_1453aa900 body=455 status=ok
// SIG undefined FUN_1453aa900(void)

undefined8 FUN_1453aa900(longlong *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  char *pcVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *local_res10;
  undefined4 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar3 = (**(code **)(*param_1 + 0x70))();
  if (iVar3 != 8) {
    lVar2 = param_1[4];
    uVar4 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar2,8,uVar4);
    return 0x5b;
  }
  uVar5 = FUN_1450f2950(param_1,&local_res10,local_res18,0);
  if ((int)uVar5 == 1) {
    uVar1 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar1 != 0) {
      uVar9 = (ulonglong)uVar1;
      pvVar6 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar1 << 5);
      if (pvVar6 == (void *)0x0) {
        return 0x34;
      }
      if (uVar1 != 0) {
        puVar8 = (uint *)((longlong)pvVar6 + 8);
        do {
          puVar8[-2] = *local_res10;
          puVar8[-1] = local_res10[1];
          *puVar8 = local_res10[2];
          puVar8[1] = local_res10[3];
          *(short *)(puVar8 + 2) = (short)local_res10[4];
          *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)((longlong)local_res10 + 0x12);
          *(short *)(puVar8 + 3) = (short)local_res10[5];
          puVar8[4] = *(uint *)((longlong)local_res10 + 0x16);
          *(undefined2 *)(puVar8 + 5) = *(undefined2 *)((longlong)local_res10 + 0x1a);
          pcVar7 = (char *)((longlong)local_res10 + 0x1d);
          *(bool *)((longlong)puVar8 + 0x16) = (char)local_res10[7] != '\0';
          local_res10 = (uint *)((longlong)local_res10 + 0x1e);
          *(bool *)((longlong)puVar8 + 0x17) = *pcVar7 != '\0';
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 8;
        } while (uVar9 != 0);
      }
      FUN_1453aacd0(param_1,pvVar6);
      AK::MemoryMgr::Free(0,pvVar6);
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1453aaad0 FUN_1453aaad0 body=6 status=ok
// SIG undefined FUN_1453aaad0(void)

undefined8 FUN_1453aaad0(void)

{
  return 8;
}



// FUNCTION 1453aaaf0 FUN_1453aaaf0 body=159 status=ok
// SIG undefined FUN_1453aaaf0(void)

undefined4 FUN_1453aaaf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 == 7) {
    if (param_2[0xf] == 0) {
      lVar1 = param_2[4];
      lVar5 = FUN_14508a500(param_1 + 0x1e,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[4] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1453aaba0 FUN_1453aaba0 body=148 status=ok
// SIG undefined FUN_1453aaba0(void)

longlong FUN_1453aaba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = AK::MemoryMgr::Malloc(0,0x100);
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_145562620(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = FUN_145562690(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      FUN_1450ed1a0();
      return lVar3;
    }
    FUN_1450ed8c0(lVar3);
    FUN_1450ed1a0(lVar3);
  }
  return 0;
}



// FUNCTION 1453aac40 FUN_1453aac40 body=135 status=ok
// SIG undefined FUN_1453aac40(void)

undefined8 FUN_1453aac40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = (longlong *)
           FUN_1453aaba0(param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                         *(byte *)(param_2 + 0x310) >> 2 & 1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1);
    local_18 = **(undefined4 **)(param_2 + 0x18);
    local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
    local_10 = FUN_1450ef150(plVar1);
    FUN_1450ed630(plVar1,&local_18);
    return 1;
  }
  return 2;
}



// FUNCTION 1453aacd0 FUN_1453aacd0 body=175 status=ok
// SIG undefined FUN_1453aacd0(void)

undefined8 FUN_1453aacd0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1453ab140();
  *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(local_res10[0] + 0x1c);
  uVar1 = *(undefined2 *)(local_res10[0] + 0x14);
  uVar2 = *(undefined2 *)(local_res10[0] + 0x12);
  *(undefined2 *)(param_1 + 0x14c) = *(undefined2 *)(local_res10[0] + 0x10);
  *(undefined2 *)(param_1 + 0x14e) = uVar2;
  *(undefined2 *)(param_1 + 0x150) = uVar1;
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(local_res10[0] + 0x18);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(local_res10[0] + 0xc);
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x16d) = *(undefined1 *)(local_res10[0] + 0x1f);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(local_res10[0] + 4);
  if (*(int *)(local_res10[0] + 8) != 0) {
    local_res10[0] = local_res10[0] + 0x20;
    uVar3 = FUN_1453aad80(param_1,param_1 + 0x138,local_res10);
    return uVar3;
  }
  return 1;
}



// FUNCTION 1453aad80 FUN_1453aad80 body=623 status=ok
// SIG undefined FUN_1453aad80(void)

undefined8 FUN_1453aad80(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      piVar4 = (int *)*param_3;
      *param_3 = (longlong)(piVar4 + 8);
      if (*piVar4 == 0) {
        puVar8 = AK::MemoryMgr::Malloc(2,0x40);
        if (puVar8 == (undefined8 *)0x0) {
          return 2;
        }
        puVar8[1] = param_2;
        *(undefined4 *)(puVar8 + 2) = 0;
        *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
        *(undefined2 *)(puVar8 + 3) = 0;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = 50000;
        *puVar8 = &PTR_FUN_149d465a0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined4 *)(puVar8 + 6) = 0;
        *(undefined2 *)((longlong)puVar8 + 0x34) = 0x100;
        *(undefined1 *)((longlong)puVar8 + 0x36) = 0;
        *(undefined2 *)(puVar8 + 7) = 0;
        uVar3 = *(uint *)(param_2 + 0x28);
        if ((uVar3 < *(uint *)(param_2 + 0x2c)) ||
           ((cVar6 = FUN_1453aa6b0(param_2 + 0x20), cVar6 != '\0' &&
            (uVar3 < *(uint *)(param_2 + 0x2c))))) {
          uVar3 = *(uint *)(param_2 + 0x28);
          *(uint *)(param_2 + 0x28) = uVar3 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar3 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = puVar8;
            *(short *)(puVar8 + 7) = (short)piVar4[7];
            iVar7 = piVar4[5];
            uVar2 = *(undefined2 *)((longlong)piVar4 + 0x12);
            *(short *)((longlong)puVar8 + 0x14) = (short)piVar4[4];
            *(undefined2 *)((longlong)puVar8 + 0x16) = uVar2;
            *(short *)(puVar8 + 3) = (short)iVar7;
            *(int *)((longlong)puVar8 + 0x1c) = piVar4[6];
            *(int *)(puVar8 + 6) = piVar4[3];
            *(undefined1 *)((longlong)puVar8 + 0x34) = 0;
            *(undefined1 *)((longlong)puVar8 + 0x35) = *(undefined1 *)((longlong)piVar4 + 0x1f);
            *(int *)(puVar8 + 2) = piVar4[1];
            if ((piVar4[2] != 0) && (iVar7 = FUN_1453aad80(param_1,puVar8,param_3), iVar7 != 1)) {
              return 2;
            }
            goto LAB_1453aaf82;
          }
        }
        (**(code **)*puVar8)(puVar8,0);
        goto LAB_1453aafa9;
      }
      puVar8 = AK::MemoryMgr::Malloc(2,0x28);
      if (puVar8 == (undefined8 *)0x0) {
        return 2;
      }
      puVar8[1] = param_2;
      *(undefined4 *)(puVar8 + 2) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
      *(undefined2 *)(puVar8 + 3) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = 50000;
      *puVar8 = &PTR_FUN_149d465b0;
      uVar3 = *(uint *)(param_2 + 0x28);
      if ((*(uint *)(param_2 + 0x2c) <= uVar3) &&
         ((cVar6 = FUN_1453aa6b0(param_2 + 0x20), cVar6 == '\0' ||
          (*(uint *)(param_2 + 0x2c) <= uVar3)))) {
LAB_1453aafbd:
        (**(code **)*puVar8)(puVar8,0);
LAB_1453aafa9:
        AK::MemoryMgr::Free(2,puVar8);
        return 2;
      }
      uVar3 = *(uint *)(param_2 + 0x28);
      *(uint *)(param_2 + 0x28) = uVar3 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar3 * 8);
      if (puVar1 == (undefined8 *)0x0) goto LAB_1453aafbd;
      *puVar1 = puVar8;
      iVar7 = piVar4[4];
      iVar5 = piVar4[5];
      *(undefined2 *)((longlong)puVar8 + 0x16) = *(undefined2 *)((longlong)piVar4 + 0x12);
      *(short *)((longlong)puVar8 + 0x14) = (short)iVar7;
      *(short *)(puVar8 + 3) = (short)iVar5;
      *(int *)((longlong)puVar8 + 0x1c) = piVar4[6];
      *(int *)(puVar8 + 4) = *piVar4;
      *(int *)(puVar8 + 2) = piVar4[1];
      FUN_14555fe10(param_2);
LAB_1453aaf82:
      if (piVar4[6] != 50000) {
        *(undefined1 *)(param_2 + 0x34) = 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_4);
  }
  return 1;
}



// FUNCTION 1453aaff0 FUN_1453aaff0 body=69 status=ok
// SIG undefined FUN_1453aaff0(void)

undefined8 FUN_1453aaff0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x178);
  piVar2 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x180) * 4;
  for (; (piVar3 != piVar2 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  piVar1 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined8 *)piVar1;
}



// FUNCTION 1453ab040 FUN_1453ab040 body=242 status=ok
// SIG undefined FUN_1453ab040(void)

undefined8 FUN_1453ab040(longlong param_1,int param_2,longlong *param_3,undefined2 param_4)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3,param_4);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  plVar9 = (longlong *)(param_1 + 0x178);
  piVar6 = (int *)*plVar9;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x180);
  piVar5 = piVar6 + uVar8 * 4;
  for (; (piVar6 != piVar5 && (*piVar6 != param_2)); piVar6 = piVar6 + 4) {
  }
  plVar7 = (longlong *)(piVar6 + 2);
  if (piVar6 == piVar5) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    if (((uVar8 < *(uint *)(param_1 + 0x184)) || (cVar2 = FUN_1453ab200(plVar9), cVar2 != '\0')) &&
       (uVar8 < *(uint *)(param_1 + 0x184))) {
      uVar1 = *(uint *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = uVar1 + 1;
      piVar6 = (int *)((ulonglong)uVar1 * 0x10 + *plVar9);
      if (piVar6 != (int *)0x0) {
        piVar6[2] = 0;
        piVar6[3] = 0;
        plVar7 = (longlong *)(piVar6 + 2);
        *piVar6 = param_2;
        if (plVar7 != (longlong *)0x0) goto LAB_1453ab0fa;
      }
    }
    (**(code **)(*plVar3 + 8))(plVar3);
    uVar4 = 0;
  }
  else {
LAB_1453ab0fa:
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar7 + 8))();
    }
    *plVar7 = (longlong)plVar3;
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1453ab140 FUN_1453ab140 body=188 status=ok
// SIG undefined FUN_1453ab140(void)

void FUN_1453ab140(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x158);
  if (puVar2 != puVar2 + *(uint *)(param_1 + 0x160)) {
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        AK::MemoryMgr::Free(2,puVar1);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)
                       (*(longlong *)(param_1 + 0x158) + (ulonglong)*(uint *)(param_1 + 0x160) * 8))
    ;
  }
  lVar3 = *(longlong *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (lVar3 != (ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + lVar3) {
    do {
      (**(code **)(**(longlong **)(lVar3 + 8) + 8))();
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != (ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + *(longlong *)(param_1 + 0x178))
    ;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 1453ab200 FUN_1453ab200 body=202 status=ok
// SIG undefined FUN_1453ab200(void)

undefined8 FUN_1453ab200(longlong *param_1)

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
            puVar5[1] = 0;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *puVar5 = *puVar1;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 2;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453ab2ad;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (undefined8 *)0x0) {
LAB_1453ab2ad:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1453ab2d0 FUN_1453ab2d0 body=166 status=ok
// SIG undefined FUN_1453ab2d0(void)

undefined8 * FUN_1453ab2d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d465c0;
  param_1[1] = &PTR_FUN_149d46858;
  param_1[2] = &PTR_LAB_149d46860;
  param_1[5] = &PTR_LAB_149d46888;
  FUN_1453ab140();
  if ((void *)param_1[0x2f] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x2f]);
    param_1[0x2f] = 0;
    *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  }
  FUN_14555fd70(param_1 + 0x27);
  FUN_1450f28e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 1453ab390 FUN_1453ab390 body=265 status=ok
// SIG undefined FUN_1453ab390(void)

longlong * FUN_1453ab390(void)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  undefined1 local_res8 [32];
  
  FUN_1450719c0(local_res8);
  plVar2 = AK::MemoryMgr::Malloc(2,0x180);
  if (plVar2 == (longlong *)0x0) {
    FUN_1450719f0(local_res8);
    return (longlong *)0x0;
  }
  FUN_1450f2880(plVar2);
  plVar2[0x28] = 0;
  *plVar2 = (longlong)&PTR_FUN_149d46908;
  *(undefined4 *)(plVar2 + 0x29) = 0;
  plVar2[1] = (longlong)&PTR_FUN_149d46ba0;
  plVar2[2] = (longlong)&PTR_LAB_149d46ba8;
  plVar2[5] = (longlong)&PTR_LAB_149d46bd0;
  plVar2[0x27] = (longlong)&PTR_FUN_149d46c50;
  FUN_1450af8e0();
  *(undefined1 *)(plVar2 + 0x2d) = 1;
  plVar2[0x2e] = 0;
  plVar2[0x2f] = 0;
  if (*(code **)(*plVar2 + 0x70) != FUN_1453ab6d0) {
    iVar1 = (**(code **)(*plVar2 + 0x70))();
    if ((iVar1 == 0) || (iVar1 == 10)) {
      bVar3 = 0x80;
      goto LAB_1453ab461;
    }
  }
  bVar3 = 0;
LAB_1453ab461:
  *(byte *)((longlong)plVar2 + 0xd4) = *(byte *)((longlong)plVar2 + 0xd4) & 0x7f | bVar3;
  FUN_1450719f0(local_res8);
  return plVar2;
}



// FUNCTION 1453ab4a0 FUN_1453ab4a0 body=510 status=ok
// SIG undefined FUN_1453ab4a0(void)

ulonglong FUN_1453ab4a0(longlong *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  char *local_res10;
  undefined4 local_res18 [4];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar2 = (**(code **)(*param_1 + 0x70))();
  if (iVar2 != 9) {
    lVar8 = param_1[4];
    uVar3 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar8,9,uVar3);
    return 0x5b;
  }
  uVar5 = FUN_1450f2950(param_1,&local_res10,local_res18,0);
  if ((int)uVar5 == 1) {
    *(bool *)(param_1 + 0x2d) = *local_res10 != '\0';
    pcVar7 = local_res10 + 5;
    lVar8 = 0;
    uVar11 = *(uint *)(local_res10 + 1);
    uVar5 = (ulonglong)uVar11;
    uVar4 = uVar11 * 4;
    pcVar10 = pcVar7 + uVar4;
    local_res10 = pcVar7;
    if ((void *)param_1[0x2e] != (void *)0x0) {
      AK::MemoryMgr::Free(2,(void *)param_1[0x2e]);
      param_1[0x2e] = 0;
    }
    if ((void *)param_1[0x2f] != (void *)0x0) {
      AK::MemoryMgr::Free(2,(void *)param_1[0x2f]);
      param_1[0x2f] = 0;
    }
    pvVar6 = AK::MemoryMgr::Malloc(2,(ulonglong)uVar4);
    param_1[0x2e] = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) {
      if (uVar11 != 0) {
        return 0x34;
      }
    }
    else {
      memcpy(pvVar6,pcVar7,(ulonglong)uVar4);
      pvVar6 = AK::MemoryMgr::Malloc(2,uVar5);
      param_1[0x2f] = (longlong)pvVar6;
      if (pvVar6 == (void *)0x0) {
        uVar9 = 0x34;
      }
      else {
        uVar9 = 1;
        uVar12 = uVar5;
        if (uVar11 != 0) {
          do {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            *(char *)(lVar8 + param_1[0x2f]) = (cVar1 == '\x01') + '\x02';
            uVar12 = uVar12 - 1;
            lVar8 = lVar8 + 1;
            uVar9 = 1;
          } while (uVar12 != 0);
        }
      }
      if ((int)uVar9 != 1) {
        return uVar9;
      }
    }
    pcVar7 = local_res10 + uVar11 * 5;
    uVar3 = *(undefined4 *)pcVar7;
    local_res10 = pcVar7 + 5;
    *(char *)((longlong)param_1 + 0x162) = pcVar7[4];
    uVar4 = FUN_1450af920(param_1 + 0x2a,local_res10,uVar3,uVar5);
    uVar11 = 1;
    if (uVar4 != 1) {
      uVar11 = uVar4;
    }
    uVar5 = (ulonglong)uVar11;
  }
  return uVar5;
}



// FUNCTION 1453ab6d0 FUN_1453ab6d0 body=6 status=ok
// SIG undefined FUN_1453ab6d0(void)

undefined8 FUN_1453ab6d0(void)

{
  return 9;
}



// FUNCTION 1453ab6e0 FUN_1453ab6e0 body=82 status=ok
// SIG undefined FUN_1453ab6e0(void)

void FUN_1453ab6e0(undefined8 param_1,int *param_2)

{
  if (*param_2 != 4) {
    FUN_1453a8160();
    return;
  }
  if ((*(byte *)(param_2 + 0xf) & 1) != 0) {
    FUN_144d52780(param_1,*(undefined8 *)(param_2 + 2),param_2[4],param_2[0xe]);
    return;
  }
  FUN_144d526c0(param_1,*(undefined8 *)(param_2 + 2),param_2[4],param_2[0xe],
                *(byte *)(param_2 + 0xf) >> 1 & 1);
  return;
}



// FUNCTION 1453ab740 FUN_1453ab740 body=162 status=ok
// SIG undefined FUN_1453ab740(void)

undefined4 FUN_1453ab740(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 - 7U < 3) {
    if (param_2[0xf] == 0) {
      lVar1 = param_2[4];
      lVar5 = FUN_14508a500(param_1 + 0x1e,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[4] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1453ab7f0 FUN_1453ab7f0 body=148 status=ok
// SIG undefined FUN_1453ab7f0(void)

longlong FUN_1453ab7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = AK::MemoryMgr::Malloc(0,0xd0);
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_145563610(pvVar2,param_1,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    iVar1 = FUN_1455636b0(lVar3,param_3,param_4,param_5);
    if (iVar1 == 1) {
      FUN_1450ed1a0();
      return lVar3;
    }
    FUN_1450ed8c0(lVar3);
    FUN_1450ed1a0(lVar3);
  }
  return 0;
}



// FUNCTION 1453ab890 FUN_1453ab890 body=140 status=ok
// SIG undefined FUN_1453ab890(void)

undefined8 FUN_1453ab890(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = (longlong *)
           (**(code **)(*param_1 + 0x278))
                     (param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                      *(byte *)(param_2 + 0x310) >> 2 & 1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1);
    local_18 = **(undefined4 **)(param_2 + 0x18);
    local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
    local_10 = FUN_1450ef150(plVar1);
    FUN_1450ed630(plVar1,&local_18);
    return 1;
  }
  return 2;
}



// FUNCTION 1453ab920 FUN_1453ab920 body=66 status=ok
// SIG undefined FUN_1453ab920(void)

undefined8 FUN_1453ab920(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x18) == 1)) {
    iVar1 = FUN_1450afbe0();
    if (iVar1 != 0) {
      if (param_3 != '\0') {
        uVar2 = FUN_1450d5430();
        return uVar2;
      }
      FUN_1450d5550(iVar1);
    }
  }
  return 1;
}



// FUNCTION 1453ab970 FUN_1453ab970 body=551 status=ok
// SIG undefined FUN_1453ab970(void)

ulonglong FUN_1453ab970(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  int *local_38;
  ulonglong local_30;
  
  if ((DAT_14c791090 == '\0') || ((int)param_1[0x2a] != 1)) {
    uVar6 = FUN_1453a8fa0();
    return uVar6;
  }
  uVar6 = 1;
  if ((int)param_1[0x29] == 0) {
    uVar2 = (**(code **)(*param_1 + 0x288))();
    uVar6 = (ulonglong)uVar2;
    if (uVar2 == 1) {
      bVar9 = false;
      uVar8 = 0;
      if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)param_1[0x2e];
      }
      if ((char *)param_1[0x2f] != (char *)0x0) {
        bVar9 = *(char *)param_1[0x2f] != '\x02';
      }
      puVar3 = (undefined8 *)FUN_14555d5d0(param_1 + 0x27,uVar8,bVar9);
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0x34;
      }
      else {
        local_38 = (int *)0x0;
        local_30 = 0;
        FUN_1450afad0(param_1 + 0x2a,&local_38);
        piVar5 = local_38;
        piVar7 = local_38;
        if (local_38 != local_38 + (local_30 & 0xffffffff) * 2) {
          do {
            if (*piVar7 == 0) {
LAB_1453aba7f:
              uVar2 = FUN_1450d5430(piVar7[1]);
              uVar6 = (ulonglong)uVar2;
              piVar5 = local_38;
            }
            else {
              piVar4 = (int *)*puVar3;
              piVar1 = piVar4 + *(uint *)(puVar3 + 1);
              for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
                if (*piVar4 == *piVar7) goto LAB_1453aba7f;
              }
            }
            piVar1 = piVar5;
            if ((int)uVar6 != 1) {
              for (; piVar1 != piVar7; piVar1 = piVar1 + 2) {
                piVar4 = (int *)*puVar3;
                piVar5 = piVar4 + *(uint *)(puVar3 + 1);
                for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
                  if (*piVar4 == *piVar1) {
                    FUN_1450d5550(piVar7[1]);
                    break;
                  }
                }
                piVar5 = local_38;
              }
            }
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar5 + (local_30 & 0xffffffff) * 2);
        }
        if (piVar5 != (int *)0x0) {
          local_30 = local_30 & 0xffffffff00000000;
          AK::MemoryMgr::Free(0,piVar5);
          local_38 = (int *)0x0;
          local_30 = local_30 & 0xffffffff;
        }
        if ((int)uVar6 == 1) {
          *(int *)(param_1 + 0x29) = (int)param_1[0x29] + 1;
          uVar2 = FUN_14555d600(param_1 + 0x27,uVar8,bVar9);
          if (uVar2 == 1) {
            return 1;
          }
          (**(code **)(*param_1 + 0x130))(param_1);
          (**(code **)(*param_1 + 0x290))(param_1);
          return (ulonglong)uVar2;
        }
      }
      (**(code **)(*param_1 + 0x290))(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x29) = (int)param_1[0x29] + 1;
  }
  return uVar6;
}



// FUNCTION 1453abba0 FUN_1453abba0 body=383 status=ok
// SIG undefined FUN_1453abba0(void)

void FUN_1453abba0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int *local_28;
  ulonglong local_20;
  
  if ((DAT_14c791090 == '\0') || ((int)param_1[0x2a] != 1)) {
    FUN_1453a9060();
  }
  else if (((int)param_1[0x29] != 0) &&
          (iVar2 = (int)param_1[0x29] + -1, *(int *)(param_1 + 0x29) = iVar2, iVar2 == 0)) {
    uVar8 = 0;
    uVar9 = uVar8;
    if ((uint *)param_1[0x2e] != (uint *)0x0) {
      uVar9 = *(uint *)param_1[0x2e];
    }
    if ((char *)param_1[0x2f] != (char *)0x0) {
      uVar8 = (uint)(*(char *)param_1[0x2f] != '\x02');
    }
    puVar3 = (undefined8 *)FUN_14555d5d0(param_1 + 0x27,uVar9,uVar8);
    if (puVar3 != (undefined8 *)0x0) {
      local_28 = (int *)0x0;
      local_20 = 0;
      FUN_1450afad0(param_1 + 0x2a,&local_28);
      uVar7 = local_20 & 0xffffffff;
      piVar5 = local_28;
      piVar6 = local_28;
      if (local_28 != local_28 + uVar7 * 2) {
        do {
          if (*piVar5 == 0) {
LAB_1453abc9f:
            FUN_1450d5550(piVar5[1]);
            uVar7 = local_20 & 0xffffffff;
            piVar6 = local_28;
          }
          else {
            piVar4 = (int *)*puVar3;
            piVar1 = piVar4 + *(uint *)(puVar3 + 1);
            for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
              if (*piVar4 == *piVar5) goto LAB_1453abc9f;
            }
          }
          piVar5 = piVar5 + 2;
        } while (piVar5 != piVar6 + uVar7 * 2);
      }
      if (piVar6 != (int *)0x0) {
        local_20 = local_20 & 0xffffffff00000000;
        AK::MemoryMgr::Free(0,piVar6);
      }
    }
    FUN_14555d660(param_1 + 0x27,uVar9,uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001453abd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x290))(param_1);
    return;
  }
  return;
}



// FUNCTION 1453abd20 FUN_1453abd20 body=850 status=ok
// SIG undefined FUN_1453abd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453abd20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  HANDLE hEvent;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  char acStack_a8 [8];
  undefined8 uStack_a0;
  int local_98 [4];
  uint local_88 [3];
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  
  lVar15 = 0;
  uVar9 = 0;
  puVar14 = auStack_c8;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_5 != '\0') {
    local_88[0] = *(uint *)(param_1 + 0x150);
    uVar18 = (ulonglong)local_88[0];
    uVar11 = (ulonglong)local_88[0] * 4 + 0xf;
    if (uVar11 <= (ulonglong)local_88[0] * 4) {
      uVar11 = 0xffffffffffffff0;
    }
    uStack_d0 = 0x1453abd90;
    lVar6 = -(uVar11 & 0xfffffffffffffff0);
    puVar14 = auStack_c8 + lVar6;
    lVar16 = lVar15;
    if (local_88[0] != 0) {
      do {
        uStack_7c = CONCAT31(uStack_7c._1_3_,
                             *(undefined1 *)(lVar15 + *(longlong *)(param_1 + 0x178)));
        iVar4 = *(int *)(lVar16 + *(longlong *)(param_1 + 0x170));
        uVar7 = CONCAT44(uStack_7c,iVar4);
        local_88[2] = iVar4;
        *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abde3;
        puVar10 = (undefined8 *)FUN_145392420(local_res20,uVar7,local_res8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = uVar7;
        }
        uVar8 = param_8;
        if (iVar4 != param_7) {
          local_70 = 0;
          local_68 = 0;
          local_50 = 0;
          local_78 = param_6;
          local_60 = 0xff;
          local_58 = 0xff;
          *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abe29;
          uVar8 = FUN_14507fe40(g_pGameSyncMgr,&local_78,uVar7);
        }
        *(undefined4 *)(lVar16 + (longlong)local_88 + lVar6) = uVar8;
        lVar15 = lVar15 + 1;
        uVar18 = uVar18 - 1;
        lVar16 = lVar16 + 4;
      } while (uVar18 != 0);
    }
    uVar9 = local_88[0];
    plVar13 = (longlong *)0x0;
    *(undefined8 *)((longlong)local_98 + lVar6) = 0;
    *(undefined8 *)((longlong)&uStack_a0 + lVar6) = 0;
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    pcVar2 = acStack_a8 + lVar6;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abe78;
    uVar9 = FUN_1450af9b0(param_1 + 0x150,uVar8,(longlong)local_88 + lVar6,uVar9);
    piVar1 = DAT_14c791060;
    if (uVar9 != 0) {
      do {
        while (iVar4 = *piVar1, iVar4 < 0) {
          *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abee6;
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_1453abe9f;
          *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abef6;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar3 = *piVar1;
        if (iVar4 == iVar3) {
          *piVar1 = iVar4 + 1;
        }
        UNLOCK();
      } while (iVar4 != iVar3);
LAB_1453abe9f:
      plVar17 = plVar13;
      if (piVar1[0x12] != 0) {
        for (plVar12 = *(longlong **)
                        (*(longlong *)(piVar1 + 0x10) +
                        ((ulonglong)uVar9 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (plVar17 = plVar13, plVar12 != (longlong *)0x0 &&
            (plVar17 = plVar12, *(uint *)(plVar12 + 2) != uVar9)); plVar12 = (longlong *)plVar12[1])
        {
        }
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar17 + 0x14) = *(int *)((longlong)plVar17 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = *piVar1;
      while (-1 < iVar4) {
        LOCK();
        iVar3 = *piVar1;
        if (iVar4 == iVar3) {
          *piVar1 = iVar4 + -1;
        }
        UNLOCK();
        if (iVar4 == iVar3) {
          if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
            hEvent = *(HANDLE *)(piVar1 + 0xe);
            *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abfb1;
            SetEvent(hEvent);
          }
          goto LAB_1453abf1e;
        }
        iVar4 = *piVar1;
      }
      *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abf1e;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1453abf1e:
      plVar12 = plVar17 + -2;
      if (plVar17 == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      puVar14 = auStack_c8 + lVar6;
      if (plVar12 != (longlong *)0x0) {
        lVar15 = *plVar12;
        *(undefined4 *)((longlong)local_98 + lVar6 + 8) = param_8;
        *(int *)((longlong)local_98 + lVar6) = param_7;
        *(undefined8 *)((longlong)&uStack_a0 + lVar6) = param_6;
        acStack_a8[lVar6] = param_5;
        pcVar5 = *(code **)(lVar15 + 0x68);
        *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abf7d;
        (*pcVar5)(plVar12,local_res10,local_res18,local_res20);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar14 = auStack_c8 + lVar6;
        if (iVar4 == 1) {
          pcVar5 = *(code **)(plVar12[2] + 0x18);
          *(undefined8 *)(auStack_c8 + lVar6 + -8) = 0x1453abf96;
          (*pcVar5)();
          puVar14 = auStack_c8 + lVar6;
        }
      }
    }
  }
  plVar13 = *(longlong **)(param_1 + 0xf8);
  if (plVar13 != plVar13 + *(uint *)(param_1 + 0x100)) {
    do {
      plVar17 = (longlong *)*plVar13;
      if (*(uint *)(plVar17 + 4) != uVar9) {
        lVar15 = *plVar17;
        *(undefined4 *)(puVar14 + 0x38) = param_8;
        *(int *)(puVar14 + 0x30) = param_7;
        *(undefined8 *)(puVar14 + 0x28) = param_6;
        puVar14[0x20] = 0;
        pcVar5 = *(code **)(lVar15 + 0x68);
        *(undefined8 *)(puVar14 + -8) = 0x1453ac031;
        (*pcVar5)(plVar17,local_res10,local_res18,local_res20);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 !=
             (longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8)
            );
  }
  return;
}



// FUNCTION 1453ac080 FUN_1453ac080 body=191 status=ok
// SIG undefined FUN_1453ac080(void)

undefined8 * FUN_1453ac080(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149d46908;
  param_1[1] = &PTR_FUN_149d46ba0;
  param_1[2] = &PTR_LAB_149d46ba8;
  param_1[5] = &PTR_LAB_149d46bd0;
  param_1[0x27] = &PTR_FUN_149d46c50;
  if ((void *)param_1[0x2e] != (void *)0x0) {
    AK::MemoryMgr::Free(2,(void *)param_1[0x2e]);
    param_1[0x2e] = 0;
  }
  if ((void *)param_1[0x2f] != (void *)0x0) {
    AK::MemoryMgr::Free(2,(void *)param_1[0x2f]);
    param_1[0x2f] = 0;
  }
  FUN_1450af900(param_1 + 0x2a);
  FUN_1450f28e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 1453ac160 FUN_1453ac160 body=502 status=ok
// SIG undefined FUN_1453ac160(void)

undefined4
FUN_1453ac160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  double dVar6;
  
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 2));
  }
  uVar3 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_5 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0x1f;
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      AK::MemoryMgr::Free(0,*(void **)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 1;
    if (param_4 != (void *)0x0) {
      param_1[6] = 1;
      param_1[4] = param_5 + 2;
      pvVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)(uint)((param_5 + 2) * 0x14));
      *(void **)(param_1 + 2) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        uVar5 = 0x34;
        param_1[4] = 0;
      }
      else {
        param_1[5] = 0;
        memcpy((void *)((longlong)pvVar4 + 0xc),param_4,(ulonglong)(uint)(param_5 * 0xc));
        *(undefined4 *)(*(longlong *)(param_1 + 2) + 8) = 9;
        **(undefined4 **)(param_1 + 2) = 0xff7fffff;
        *(undefined4 *)(*(longlong *)(param_1 + 2) + 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 2) + 0x10);
        *(undefined4 *)(*(longlong *)(param_1 + 2) + 8 + (ulonglong)(param_1[4] - 1) * 0xc) = 9;
        *(undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_1[4] - 1) * 0xc) = 0x7f7fffff
        ;
        *(undefined4 *)(*(longlong *)(param_1 + 2) + 4 + (ulonglong)(param_1[4] - 1) * 0xc) =
             *(undefined4 *)(*(longlong *)(param_1 + 2) + 4 + (ulonglong)(param_1[4] - 2) * 0xc);
        FUN_1450c8860(param_1 + 2);
        while( true ) {
          uVar2 = param_1[4] - 2;
          if (param_1[4] == 0) {
            uVar2 = 0;
          }
          if (uVar2 <= uVar3) break;
          uVar3 = uVar3 + 1;
          dVar6 = (double)DAT_14c72f42c *
                  (double)*(float *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 0xc);
          if (dVar6 <= 0.0) {
            lVar1 = 0xbfe00000;
          }
          else {
            lVar1 = 0x3fe00000;
          }
          *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 0xc) =
               (float)(int)((double)(lVar1 << 0x20) + dVar6);
        }
        FUN_1450c8860(param_1 + 2);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1453ac360 FUN_1453ac360 body=607 status=ok
// SIG undefined FUN_1453ac360(void)

undefined8 FUN_1453ac360(undefined4 *param_1,undefined8 *param_2)

{
  size_t _Size;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *_Src;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  longlong *_Dst;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  
  cVar1 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  *(char *)(param_1 + 2) = (cVar1 == '\x01') + '\x02';
  uVar2 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  param_1[1] = uVar2;
  uVar2 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *param_1 = uVar2;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    param_1[6] = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[7] = 0;
  }
  uVar3 = *(uint *)*param_2;
  uVar13 = (ulonglong)uVar3;
  *param_2 = (uint *)*param_2 + 1;
  if (uVar3 <= (uint)param_1[7]) goto LAB_1453ac489;
  uVar12 = param_1[6];
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    pvVar6 = AK::MemoryMgr::Malloc(0,uVar13 << 2);
    bVar5 = false;
    if (pvVar6 != (void *)0x0) {
      if ((*(void **)(param_1 + 4) != (void *)0x0) && (*(void **)(param_1 + 4) != pvVar6)) {
        uVar9 = 0;
        if ((ulonglong)uVar12 != 0) {
          do {
            *(undefined4 *)((longlong)pvVar6 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar9 * 4);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar12);
        }
        AK::MemoryMgr::Free(0,*(void **)(param_1 + 4));
      }
      goto LAB_1453ac46d;
    }
  }
  else {
    pvVar6 = AK::MemoryMgr::Realloc(0,*(void **)(param_1 + 4),uVar13 << 2);
    if (pvVar6 == (void *)0x0) {
      bVar5 = false;
    }
    else {
LAB_1453ac46d:
      *(void **)(param_1 + 4) = pvVar6;
      bVar5 = true;
      param_1[7] = uVar3;
    }
  }
  if (!bVar5) {
    return 2;
  }
LAB_1453ac489:
  plVar10 = (longlong *)(param_1 + 4);
  if (uVar3 != 0) {
    do {
      uVar3 = param_1[6];
      uVar9 = (ulonglong)uVar3;
      uVar12 = param_1[7];
      if (uVar3 < uVar12) {
LAB_1453ac5aa:
        uVar3 = param_1[6];
        param_1[6] = uVar3 + 1;
        puVar7 = (undefined4 *)(*plVar10 + (ulonglong)uVar3 * 4);
      }
      else {
        iVar4 = (uVar12 >> 1) + uVar12;
        if (uVar12 == 0) {
          iVar4 = 1;
        }
        uVar12 = iVar4 + uVar12;
        if ((void *)*plVar10 == (void *)0x0) {
          _Dst = AK::MemoryMgr::Malloc(0,(ulonglong)uVar12 << 2);
          if (_Dst == (longlong *)0x0) goto LAB_1453ac4eb;
          _Src = (longlong *)*plVar10;
          if ((_Src == (longlong *)0x0) || (_Src == _Dst)) goto LAB_1453ac59b;
          uVar8 = 0;
          if (uVar3 < 4) {
LAB_1453ac57b:
            if (uVar9 != 0) {
              do {
                *(undefined4 *)((longlong)_Dst + uVar8 * 4) = *(undefined4 *)(*plVar10 + uVar8 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar9);
            }
          }
          else {
            _Size = uVar9 * 4;
            plVar11 = (longlong *)((_Size - 4) + (longlong)_Dst);
            if (((_Dst <= (longlong *)((_Size - 4) + (longlong)_Src)) && (_Src <= plVar11)) ||
               ((_Dst <= plVar10 && (plVar10 <= plVar11)))) goto LAB_1453ac57b;
            memcpy(_Dst,_Src,_Size);
          }
          AK::MemoryMgr::Free(0,(void *)*plVar10);
LAB_1453ac59b:
          *plVar10 = (longlong)_Dst;
          param_1[7] = uVar12;
          if (uVar3 < uVar12) goto LAB_1453ac5aa;
        }
        else {
          _Dst = AK::MemoryMgr::Realloc(0,(void *)*plVar10,(ulonglong)uVar12 << 2);
          if (_Dst != (longlong *)0x0) goto LAB_1453ac59b;
        }
LAB_1453ac4eb:
        puVar7 = (undefined4 *)0x0;
      }
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (undefined4 *)*param_2 + 1;
      *puVar7 = uVar2;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return 1;
}



// FUNCTION 1453ac5c0 FUN_1453ac5c0 body=243 status=ok
// SIG undefined FUN_1453ac5c0(void)

longlong * FUN_1453ac5c0(void)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(2,0x158);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  FUN_1450ee3a0(plVar3);
  *(byte *)(plVar3 + 0x28) = *(byte *)(plVar3 + 0x28) & 0xfc;
  *plVar3 = (longlong)&PTR_FUN_149d46c58;
  plVar3[1] = (longlong)&PTR_FUN_149d46ec0;
  plVar3[2] = (longlong)&PTR_LAB_149d46ec8;
  plVar3[5] = (longlong)&PTR_LAB_149d46ef0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  plVar3[0x21] = 0;
  *(undefined4 *)(plVar3 + 0x22) = 0;
  plVar3[0x23] = 0;
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  plVar3[0x27] = 0;
  plVar3[0x2a] = 0;
  *(undefined2 *)(plVar3 + 0x26) = 0xffff;
  if (*(code **)(*plVar3 + 0x70) != FUN_1453ad120) {
    iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
      goto LAB_1453ac692;
    }
  }
  bVar1 = 0;
LAB_1453ac692:
  *(byte *)((longlong)plVar3 + 0xd4) = *(byte *)((longlong)plVar3 + 0xd4) & 0x7f | bVar1;
  return plVar3;
}



// FUNCTION 1453ac6c0 FUN_1453ac6c0 body=2646 status=ok
// SIG undefined FUN_1453ac6c0(void)

/* WARNING: Removing unreachable block (ram,0x0001453acc49) */
/* WARNING: Removing unreachable block (ram,0x0001453acc5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1453ac6c0(longlong *param_1,uint *param_2,uint param_3,undefined8 param_4,char param_5
                       )

{
  ulonglong uVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  uint *puVar15;
  void *pvVar16;
  undefined8 *puVar17;
  longlong lVar18;
  byte bVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint local_res8 [2];
  uint *local_res10;
  uint local_res18 [2];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar10 = (**(code **)(*param_1 + 0x70))();
  if (iVar10 != 6) {
    lVar18 = param_1[4];
    uVar11 = (**(code **)(*param_1 + 0x70))(param_1);
    FUN_1450b8920(DAT_14c790fe0,(int)lVar18,6,uVar11);
    return 0x5b;
  }
  uVar22 = 0;
  uVar24 = 1;
  if (param_5 != '\0') {
    local_res8[0] = local_res18[0];
    uVar20 = *(uint *)((longlong)local_res10 + 5);
    local_88[0] = (longlong)local_res10 + 9;
    if (uVar20 == 0) {
      return 1;
    }
    do {
      if ((int)uVar24 == 1) {
        uVar12 = FUN_1450b6c70(local_88,local_res8,local_68);
        if (uVar12 != 1) {
          return (ulonglong)uVar12;
        }
        if (local_50 == 0) {
          local_78 = local_60;
          uStack_74 = uStack_5c;
          uStack_70 = uStack_58;
          uStack_6c = uStack_54;
          uVar12 = FUN_1453ad3a0(param_1,local_60,local_64,&local_78);
        }
        else {
          uVar12 = FUN_1453ad4b0(param_1,local_60);
        }
        uVar24 = (ulonglong)uVar12;
        if (uVar12 != 1) {
          return uVar24;
        }
      }
      uVar12 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar12;
      if (uVar20 <= uVar12) {
        return uVar24;
      }
    } while( true );
  }
  uVar12 = 1;
  uVar25 = 0;
  bVar3 = (byte)local_res10[1];
  bVar19 = (*(byte *)(param_1 + 0x28) ^ bVar3) & 2 ^ *(byte *)(param_1 + 0x28);
  bVar19 = (bVar3 >> 2 ^ bVar19) & 1 ^ bVar19;
  *(byte *)(param_1 + 0x28) = (bVar3 >> 1 ^ bVar19) & 4 ^ bVar19;
  uVar20 = *(uint *)((longlong)local_res10 + 5);
  local_res10 = (uint *)((longlong)local_res10 + 9);
  uVar23 = 1;
  uVar24 = uVar22;
  if (uVar20 != 0) {
    do {
      if (uVar12 == 1) {
        uVar13 = FUN_1450b6c70(&local_res10,local_res18,local_68);
        if ((int)uVar13 != 1) {
          return uVar13;
        }
        if (local_50 == 0) {
          local_78 = local_60;
          uStack_74 = uStack_5c;
          uStack_70 = uStack_58;
          uStack_6c = uStack_54;
          uVar12 = FUN_1453ad3a0(param_1,local_60,local_64,&local_78);
        }
        else {
          uVar12 = FUN_1453ad4b0(param_1,local_60);
        }
        if (uVar12 != 1) {
          return (ulonglong)uVar12;
        }
      }
      uVar27 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar27;
    } while (uVar27 < uVar20);
  }
  uVar20 = *local_res10;
  uVar24 = (ulonglong)uVar20;
  local_res10 = local_res10 + 1;
  uVar27 = 1;
  if (uVar20 != 0) {
    pvVar14 = AK::MemoryMgr::Malloc(0,uVar24 * 0x30);
    if (pvVar14 == (void *)0x0) {
      return 0x34;
    }
    if (uVar20 < 4) {
      uVar13 = uVar22;
      if (uVar20 != 0) goto LAB_1453acb41;
    }
    else {
      uVar12 = (uVar20 - 4 >> 2) + 1;
      uVar13 = (ulonglong)uVar12;
      uVar25 = uVar12 * 4;
      puVar21 = (uint *)((longlong)pvVar14 + 8);
      do {
        puVar21[-2] = *local_res10;
        puVar21[-1] = local_res10[1];
        *puVar21 = local_res10[2];
        *(undefined8 *)(puVar21 + 2) = *(undefined8 *)(local_res10 + 3);
        *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(local_res10 + 5);
        *(undefined8 *)(puVar21 + 6) = *(undefined8 *)(local_res10 + 7);
        *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(local_res10 + 9);
        puVar21[10] = local_res10[0xb];
        puVar21[0xb] = local_res10[0xc];
        puVar21[0xc] = local_res10[0xd];
        *(undefined8 *)(puVar21 + 0xe) = *(undefined8 *)(local_res10 + 0xe);
        *(undefined8 *)(puVar21 + 0x10) = *(undefined8 *)(local_res10 + 0x10);
        *(undefined8 *)(puVar21 + 0x12) = *(undefined8 *)(local_res10 + 0x12);
        *(undefined8 *)(puVar21 + 0x14) = *(undefined8 *)(local_res10 + 0x14);
        puVar21[0x16] = local_res10[0x16];
        puVar21[0x17] = local_res10[0x17];
        puVar21[0x18] = local_res10[0x18];
        *(undefined8 *)(puVar21 + 0x1a) = *(undefined8 *)(local_res10 + 0x19);
        *(undefined8 *)(puVar21 + 0x1c) = *(undefined8 *)(local_res10 + 0x1b);
        *(undefined8 *)(puVar21 + 0x1e) = *(undefined8 *)(local_res10 + 0x1d);
        *(undefined8 *)(puVar21 + 0x20) = *(undefined8 *)(local_res10 + 0x1f);
        puVar21[0x22] = local_res10[0x21];
        puVar21[0x23] = local_res10[0x22];
        puVar21[0x24] = local_res10[0x23];
        *(undefined8 *)(puVar21 + 0x26) = *(undefined8 *)(local_res10 + 0x24);
        *(undefined8 *)(puVar21 + 0x28) = *(undefined8 *)(local_res10 + 0x26);
        puVar15 = local_res10 + 0x2a;
        *(undefined8 *)(puVar21 + 0x2a) = *(undefined8 *)(local_res10 + 0x28);
        local_res10 = local_res10 + 0x2c;
        *(undefined8 *)(puVar21 + 0x2c) = *(undefined8 *)puVar15;
        uVar13 = uVar13 - 1;
        puVar21 = puVar21 + 0x30;
      } while (uVar13 != 0);
      uVar13 = (ulonglong)uVar12 * 4;
      if (uVar25 < uVar20) {
LAB_1453acb41:
        uVar26 = (ulonglong)(uVar20 - uVar25);
        puVar21 = (uint *)(uVar13 * 0x30 + 8 + (longlong)pvVar14);
        do {
          puVar21[-2] = *local_res10;
          puVar21[-1] = local_res10[1];
          *puVar21 = local_res10[2];
          *(undefined8 *)(puVar21 + 2) = *(undefined8 *)(local_res10 + 3);
          *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(local_res10 + 5);
          puVar15 = local_res10 + 9;
          *(undefined8 *)(puVar21 + 6) = *(undefined8 *)(local_res10 + 7);
          local_res10 = local_res10 + 0xb;
          *(undefined8 *)(puVar21 + 8) = *(undefined8 *)puVar15;
          uVar26 = uVar26 - 1;
          puVar21 = puVar21 + 0xc;
        } while (uVar26 != 0);
      }
    }
    uVar12 = *local_res10;
    local_res10 = local_res10 + 1;
    if ((void *)param_1[0x23] != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      AK::MemoryMgr::Free(0,(void *)param_1[0x23]);
      param_1[0x23] = 0;
      *(undefined4 *)((longlong)param_1 + 0x124) = 0;
    }
    *(uint *)(param_1 + 0x22) = uVar12;
    if (*(uint *)((longlong)param_1 + 0x124) < uVar20) {
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x24);
      pvVar16 = AK::MemoryMgr::Malloc(0,uVar24 * 0x1c);
      bVar8 = false;
      if (pvVar16 != (void *)0x0) {
        if (((void *)param_1[0x23] != (void *)0x0) &&
           (uVar26 = uVar22, (void *)param_1[0x23] != pvVar16)) {
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            lVar18 = param_1[0x23];
            uVar1 = uVar26 + 0x1c;
            puVar17 = (undefined8 *)(lVar18 + -0x1c + uVar1);
            uVar7 = puVar17[1];
            *(undefined8 *)((longlong)pvVar16 + uVar26) = *puVar17;
            ((undefined8 *)((longlong)pvVar16 + uVar26))[1] = uVar7;
            *(undefined8 *)((longlong)pvVar16 + uVar26 + 0x10) =
                 *(undefined8 *)(lVar18 + -0xc + uVar1);
            *(undefined4 *)((longlong)pvVar16 + uVar26 + 0x18) =
                 *(undefined4 *)(lVar18 + -4 + uVar1);
            uVar26 = uVar1;
          }
          AK::MemoryMgr::Free(0,(void *)param_1[0x23]);
        }
        param_1[0x23] = (longlong)pvVar16;
        bVar8 = true;
        *(uint *)((longlong)param_1 + 0x124) = uVar20;
      }
      if (bVar8) goto LAB_1453acced;
      uVar12 = 2;
    }
    else {
LAB_1453acced:
      pvVar16 = pvVar14;
      uVar12 = uVar27;
      if (uVar20 != 0) {
        do {
          FUN_1453ad1d0(param_1,pvVar16);
          uVar24 = uVar24 - 1;
          pvVar16 = (void *)((longlong)pvVar16 + 0x30);
        } while (uVar24 != 0);
      }
    }
    AK::MemoryMgr::Free(0,pvVar14);
  }
  if (uVar12 == 1) {
    plVar2 = param_1 + 0x20;
    FUN_1453ae110(plVar2);
    uVar20 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar20 != 0) {
      if ((*(uint *)((longlong)param_1 + 0x10c) < uVar20) &&
         (cVar9 = FUN_1453ae030(plVar2,uVar20 - *(uint *)((longlong)param_1 + 0x10c)), cVar9 == '\0'
         )) {
        return 2;
      }
      uVar24 = uVar22;
      if (uVar20 != 0) {
        do {
          uVar12 = *(uint *)(param_1 + 0x21);
          uVar25 = *(uint *)((longlong)param_1 + 0x10c);
          uVar13 = uVar22;
          if (uVar12 < uVar25) {
LAB_1453acda8:
            if (uVar12 < *(uint *)((longlong)param_1 + 0x10c)) {
              uVar12 = *(uint *)(param_1 + 0x21);
              *(uint *)(param_1 + 0x21) = uVar12 + 1;
              uVar13 = (ulonglong)uVar12 * 0x20 + *plVar2;
              if (uVar13 != 0) {
                *(undefined8 *)(uVar13 + 8) = 0;
                *(undefined8 *)(uVar13 + 0x10) = 0;
                *(undefined4 *)(uVar13 + 0x18) = 1;
              }
            }
          }
          else {
            uVar4 = (uVar25 >> 1) + uVar25;
            if (uVar25 == 0) {
              uVar4 = uVar27;
            }
            cVar9 = FUN_1453ae030(plVar2,uVar4);
            if (cVar9 != '\0') goto LAB_1453acda8;
          }
          uVar12 = *local_res10;
          puVar15 = local_res10 + 1;
          puVar21 = local_res10 + 2;
          local_res10 = local_res10 + 3;
          uVar25 = *puVar21;
          if (uVar25 != 0) {
            iVar10 = FUN_1453ac160(uVar13,uVar12,*puVar15,local_res10,uVar25);
            if (iVar10 != 1) {
              return 2;
            }
            local_res10 = local_res10 + (ulonglong)uVar25 * 3;
          }
          uVar12 = (int)uVar24 + 1;
          uVar24 = (ulonglong)uVar12;
        } while (uVar12 < uVar20);
      }
    }
    uVar12 = FUN_1450d7ad0(param_1,&local_res10,local_res18,0);
    if (uVar12 == 1) {
      uVar20 = *local_res10;
      local_res10 = (uint *)((longlong)local_res10 + 1);
      local_res8[0] = (uint)(byte)uVar20;
      uVar12 = uVar23;
      uVar20 = *(uint *)((longlong)param_1 + 300);
      if (local_res8[0] != *(uint *)((longlong)param_1 + 300)) {
        pvVar14 = (void *)param_1[0x27];
        if (pvVar14 != (void *)0x0) {
          if (*(void **)((longlong)pvVar14 + 0x10) != (void *)0x0) {
            *(undefined4 *)((longlong)pvVar14 + 0x18) = 0;
            AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar14 + 0x10));
            *(undefined8 *)((longlong)pvVar14 + 0x10) = 0;
            *(undefined4 *)((longlong)pvVar14 + 0x1c) = 0;
          }
          AK::MemoryMgr::Free(2,pvVar14);
          param_1[0x27] = 0;
        }
        if (local_res8[0] == 3) {
          puVar17 = AK::MemoryMgr::Malloc(2,0x40);
          if (puVar17 == (undefined8 *)0x0) {
            param_1[0x27] = 0;
            uVar12 = 0x34;
          }
          else {
            *(uint *)(puVar17 + 4) = *(uint *)(puVar17 + 4) & 0xffffffe8;
            *(uint *)(puVar17 + 4) = *(uint *)(puVar17 + 4) | 8;
            *puVar17 = 0;
            *(undefined1 *)(puVar17 + 1) = 2;
            puVar17[2] = 0;
            puVar17[3] = 0;
            param_1[0x27] = (longlong)puVar17;
          }
        }
        *(uint *)((longlong)param_1 + 300) = local_res8[0];
        uVar20 = local_res8[0];
        if (uVar12 != 1) goto LAB_1453ad0e0;
      }
      if (uVar20 == 3) {
        uVar12 = FUN_1453ac360(param_1[0x27],&local_res10,local_res18);
        if (uVar12 != 1) goto LAB_1453ad0e0;
        lVar18 = param_1[0x27];
        *(uint *)(lVar18 + 0x28) = *local_res10;
        *(uint *)(lVar18 + 0x2c) = local_res10[1];
        *(int *)(lVar18 + 0x30) =
             (int)((longlong)((longlong)(int)local_res10[2] * (ulonglong)DAT_14c72f42c) / 1000);
        *(uint *)(lVar18 + 0x20) =
             *(uint *)(lVar18 + 0x20) ^ (*(uint *)(lVar18 + 0x20) ^ local_res10[3]) & 0x1f;
        *(uint *)(lVar18 + 0x24) = local_res10[4];
        *(uint *)(lVar18 + 0x34) = local_res10[5];
        puVar21 = local_res10 + 7;
        *(uint *)(lVar18 + 0x38) = local_res10[6];
        local_res10 = local_res10 + 8;
        *(int *)(lVar18 + 0x3c) =
             (int)((longlong)((longlong)(int)*puVar21 * (ulonglong)DAT_14c72f42c) / 1000);
        uVar12 = uVar27;
      }
      fVar5 = (float)(int)*local_res10 * _DAT_14c7915e0 * (float)DAT_14c72f42c * 0.001;
      if (fVar5 <= 0.0) {
        fVar6 = -0.5;
      }
      else {
        fVar6 = 0.5;
      }
      *(int *)(param_1 + 0x25) = (int)(fVar6 + fVar5);
      lVar18 = param_1[0x1e];
      if (lVar18 != (ulonglong)*(uint *)(param_1 + 0x1f) * 0x10 + lVar18) {
        do {
          if (*(short *)(*(longlong *)(lVar18 + 8) + 0x1a) != 0x10) {
            *(int *)(*(longlong *)(lVar18 + 8) + 0x28) = (int)param_1[0x25];
          }
          lVar18 = lVar18 + 0x10;
        } while (lVar18 != (ulonglong)*(uint *)(param_1 + 0x1f) * 0x10 + param_1[0x1e]);
      }
    }
  }
LAB_1453ad0e0:
  return (ulonglong)uVar12;
}



// FUNCTION 1453ad120 FUN_1453ad120 body=6 status=ok
// SIG undefined FUN_1453ad120(void)

undefined8 FUN_1453ad120(void)

{
  return 6;
}



// FUNCTION 1453ad1d0 FUN_1453ad1d0 body=462 status=ok
// SIG undefined FUN_1453ad1d0(void)

undefined8 FUN_1453ad1d0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  
  dVar11 = (*(double *)(param_2 + 10) + *(double *)(param_2 + 8)) - *(double *)(param_2 + 6);
  if (((0.0 < *(double *)(param_2 + 10)) && (0.0 < dVar11)) || (param_2[2] != 0)) {
    uVar1 = *(uint *)(param_1 + 0x120);
    uVar10 = *(uint *)(param_1 + 0x124);
    if (uVar1 < uVar10) {
LAB_1453ad24d:
      if (uVar1 < *(uint *)(param_1 + 0x124)) {
        uVar1 = *(uint *)(param_1 + 0x120);
        *(uint *)(param_1 + 0x120) = uVar1 + 1;
        puVar4 = (undefined4 *)((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x118));
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *param_2;
          puVar4[1] = param_2[1];
          puVar4[2] = param_2[2];
          dVar7 = 0.5;
          dVar9 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 4)) * (double)DAT_14c72f42c *
                  0.001;
          uVar8 = 0x3fe00000;
          uVar10 = 0xbfe00000;
          uVar1 = uVar10;
          if (0.0 < dVar9) {
            uVar1 = uVar8;
          }
          puVar4[3] = (int)((double)((ulonglong)uVar1 << 0x20) + dVar9);
          dVar11 = (double)DAT_14c72f42c * dVar11 * 0.001;
          uVar1 = uVar10;
          if (0.0 < dVar11) {
            uVar1 = uVar8;
          }
          puVar4[4] = (int)((double)((ulonglong)uVar1 << 0x20) + dVar11);
          dVar11 = (double)DAT_14c72f42c * *(double *)(param_2 + 10) * 0.001;
          if (0.0 < dVar11) {
            uVar10 = uVar8;
          }
          iVar5 = (int)((double)((ulonglong)uVar10 << 0x20) + dVar11);
          puVar4[5] = iVar5;
          dVar11 = (double)DAT_14c72f42c * *(double *)(param_2 + 6) * 0.001;
          if (dVar11 <= 0.0) {
            dVar7 = -0.5;
          }
          if (iVar5 == 0) {
            puVar4[6] = 0;
          }
          else {
            iVar6 = (int)(dVar7 + dVar11) % iVar5;
            puVar4[6] = iVar6;
            if (iVar6 < 0) {
              puVar4[6] = iVar5 + iVar6;
            }
          }
          goto LAB_1453ad36d;
        }
      }
    }
    else {
      iVar5 = (uVar10 >> 1) + uVar10;
      if (uVar10 == 0) {
        iVar5 = 1;
      }
      cVar2 = FUN_1453ae190((longlong *)(param_1 + 0x118),iVar5);
      if (cVar2 != '\0') goto LAB_1453ad24d;
    }
    uVar3 = 2;
  }
  else {
LAB_1453ad36d:
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1453ad3a0 FUN_1453ad3a0 body=270 status=ok
// SIG undefined FUN_1453ad3a0(void)

undefined8 FUN_1453ad3a0(longlong param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *piVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar1 = *(int **)(param_1 + 0xf0);
  piVar5 = piVar1 + (ulonglong)*(uint *)(param_1 + 0xf8) * 4;
  for (; (piVar1 != piVar5 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  plVar4 = (longlong *)0x0;
  plVar2 = (longlong *)(piVar1 + 2);
  if (piVar1 == piVar5) {
    plVar2 = plVar4;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_1453adf20(param_1 + 0xf0);
    if (plVar2 == (longlong *)0x0) {
      return 0x34;
    }
    plVar3 = AK::MemoryMgr::Malloc(2,0x30);
    if (plVar3 != (longlong *)0x0) {
      FUN_14536d0d0(plVar3);
      *(int *)(plVar3 + 5) = 0;
      plVar4 = plVar3;
    }
    *plVar2 = (longlong)plVar4;
  }
  if (*plVar2 == 0) {
    FUN_1453adfd0(param_1 + 0xf0,param_2);
  }
  else {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    FUN_14536d280(*plVar2,param_3,&local_38);
    if (*(short *)(*plVar2 + 0x1a) != 0x10) {
      *(undefined4 *)(*plVar2 + 0x28) = *(undefined4 *)(param_1 + 0x128);
    }
  }
  if (*plVar2 == 0) {
    return 0x34;
  }
  return 1;
}



// FUNCTION 1453ad4b0 FUN_1453ad4b0 body=150 status=ok
// SIG undefined FUN_1453ad4b0(void)

undefined8 FUN_1453ad4b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  void *pvVar2;
  
  plVar1 = (longlong *)FUN_1453adf20(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(2,0x30);
    if (pvVar2 == (void *)0x0) {
      *plVar1 = 0;
      FUN_1453adfd0(param_1 + 0xf0,param_2);
    }
    else {
      FUN_14536d0d0(pvVar2);
      *(undefined4 *)((longlong)pvVar2 + 0x28) = 0;
      *plVar1 = (longlong)pvVar2;
      FUN_14536d350(pvVar2,param_2);
    }
    if (*plVar1 != 0) {
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 1453ad550 FUN_1453ad550 body=62 status=ok
// SIG undefined FUN_1453ad550(void)

ulonglong FUN_1453ad550(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0xf0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + uVar1;
  while( true ) {
    if (uVar1 == uVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    if ((*(uint *)(*(longlong *)(uVar1 + 8) + 0xc) >> 7 & 1) != 0) break;
    uVar1 = uVar1 + 0x10;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1453ad5a0 FUN_1453ad5a0 body=115 status=ok
// SIG undefined FUN_1453ad5a0(void)

bool FUN_1453ad5a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_145354810(param_1 + 0x28);
  if (cVar1 != '\0') {
    return true;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_14508e5f0(*(longlong *)(param_1 + 0x80),param_2,param_3);
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 1453ad620 FUN_1453ad620 body=69 status=ok
// SIG undefined FUN_1453ad620(void)

undefined8 FUN_1453ad620(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xf0);
  piVar2 = piVar3 + (ulonglong)*(uint *)(param_1 + 0xf8) * 4;
  for (; (piVar3 != piVar2 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  piVar1 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined8 *)piVar1;
}



// FUNCTION 1453ad670 FUN_1453ad670 body=120 status=ok
// SIG undefined FUN_1453ad670(void)

ulonglong FUN_1453ad670(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_1 + 300);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x110) != 0) {
        DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
        return (DAT_14c791078 >> 0x21) % (ulonglong)*(uint *)(param_1 + 0x110) & 0xffff;
      }
    }
    else if (iVar1 == 2) {
      uVar2 = *(short *)(param_1 + 0x130) + 1;
      *(ushort *)(param_1 + 0x130) = uVar2;
      if ((uint)uVar2 < *(uint *)(param_1 + 0x110)) {
        return (ulonglong)uVar2;
      }
      *(undefined2 *)(param_1 + 0x130) = 0;
    }
  }
  return 0;
}



// FUNCTION 1453ad6f0 FUN_1453ad6f0 body=136 status=ok
// SIG undefined FUN_1453ad6f0(void)

void FUN_1453ad6f0(longlong param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_res8 [8];
  
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0x140) & 1;
  pbVar1 = *(byte **)(param_1 + 0x90);
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar4;
    do {
      uVar2 = (int)pbVar3 + 1;
      if (pbVar1[uVar2] == 0x38) {
        pbVar4 = pbVar1 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar3 = (byte *)(ulonglong)uVar2;
    } while (uVar2 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  *param_3 = *(undefined4 *)pbVar1;
  *param_4 = *(byte *)(param_1 + 0x140) >> 2 & 1;
  return;
}



// FUNCTION 1453ad780 FUN_1453ad780 body=120 status=ok
// SIG undefined FUN_1453ad780(void)

/* WARNING: Removing unreachable block (ram,0x0001453ad7c9) */

void FUN_1453ad780(longlong param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte local_res8 [32];
  
  pbVar2 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  *param_2 = *(byte *)(param_1 + 0x140) >> 1 & 1;
  pbVar1 = *(byte **)(param_1 + 0x90);
  if (pbVar1 != (byte *)0x0) {
    while( true ) {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x37) break;
      pbVar2 = (byte *)(ulonglong)uVar3;
      if (*pbVar1 <= uVar3) {
        *param_3 = 0;
        return;
      }
    }
    pbVar2 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
  }
  pbVar1 = local_res8;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_3 = *(undefined4 *)pbVar1;
  return;
}



// FUNCTION 1453ad800 FUN_1453ad800 body=16 status=ok
// SIG undefined FUN_1453ad800(void)

undefined4 FUN_1453ad800(longlong param_1)

{
  if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0x138);
  }
  return 0;
}



// FUNCTION 1453ad810 FUN_1453ad810 body=479 status=ok
// SIG undefined FUN_1453ad810(void)

ulonglong FUN_1453ad810(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uStack_9c;
  uint7 uStack_8f;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar3 = *(longlong *)(param_1 + 0xf0);
  uVar4 = 1;
  if (lVar3 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + lVar3) {
    do {
      uVar2 = FUN_14536d490(*(undefined8 *)(lVar3 + 8));
      uVar4 = uVar2 & 0xffffffff;
      if ((int)uVar2 != 1) {
        for (lVar5 = *(longlong *)(param_1 + 0xf0); lVar5 != lVar3; lVar5 = lVar5 + 0x10) {
          FUN_14536d4c0(*(undefined8 *)(lVar5 + 8));
          uVar2 = uVar4;
        }
        return uVar2;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != (ulonglong)*(uint *)(param_1 + 0x120) * 0x1c + lVar3) {
    do {
      if (*(int *)(lVar3 + 8) != 0) {
        lStack_50 = (ulonglong)uStack_9c << 0x20;
        local_58 = 2;
        lStack_40 = (ulonglong)uStack_8f << 8;
        local_48 = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uVar1 = FUN_1450b9270(DAT_14c790fe0,&local_58);
        uVar4 = (ulonglong)uVar1;
        if (uVar1 != 1) {
          for (lVar5 = *(longlong *)(param_1 + 0x118); lVar5 != lVar3; lVar5 = lVar5 + 0x1c) {
            FUN_1450b93e0(DAT_14c790fe0,*(undefined4 *)(lVar5 + 8));
          }
          lVar3 = *(longlong *)(param_1 + 0xf0);
          if (lVar3 == (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + lVar3) {
            return uVar4;
          }
          do {
            FUN_14536d4c0(*(undefined8 *)(lVar3 + 8));
            lVar3 = lVar3 + 0x10;
          } while (lVar3 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 +
                            *(longlong *)(param_1 + 0xf0));
          return uVar4;
        }
      }
      lVar3 = lVar3 + 0x1c;
    } while (lVar3 != (ulonglong)*(uint *)(param_1 + 0x120) * 0x1c + *(longlong *)(param_1 + 0x118))
    ;
  }
  return uVar4;
}



// FUNCTION 1453ad9f0 FUN_1453ad9f0 body=154 status=ok
// SIG undefined FUN_1453ad9f0(void)

void FUN_1453ad9f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + lVar1) {
    do {
      FUN_14536d4c0(*(undefined8 *)(lVar1 + 8));
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != (ulonglong)*(uint *)(param_1 + 0x120) * 0x1c + lVar1) {
    do {
      if (*(int *)(lVar1 + 8) != 0) {
        FUN_1450b93e0(DAT_14c790fe0);
      }
      lVar1 = lVar1 + 0x1c;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0x120) * 0x1c + *(longlong *)(param_1 + 0x118))
    ;
  }
  return;
}



// FUNCTION 1453ada90 FUN_1453ada90 body=255 status=ok
// SIG undefined FUN_1453ada90(void)

void FUN_1453ada90(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0xf0);
  if (lVar7 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + lVar7) {
    do {
      lVar4 = *(longlong *)(lVar7 + 8);
      if (((byte)*(undefined4 *)(lVar4 + 0xc) & 0x7c) == 4) {
        if (param_5 == '\0') {
          uVar3 = *(uint *)(param_3 + 1);
          if ((uVar3 < *(uint *)((longlong)param_3 + 0xc)) ||
             ((cVar5 = FUN_145370c10(param_3), cVar5 != '\0' &&
              (uVar3 < *(uint *)((longlong)param_3 + 0xc))))) {
            uVar3 = *(uint *)(param_3 + 1);
            *(uint *)(param_3 + 1) = uVar3 + 1;
            lVar6 = *param_3;
            goto LAB_1453adb47;
          }
        }
        else {
          uVar2 = *(uint *)(param_2 + 1);
          uVar3 = uVar2;
          if ((uVar2 < *(uint *)((longlong)param_2 + 0xc)) ||
             ((cVar5 = FUN_145370c10(param_2), cVar5 != '\0' &&
              (uVar3 = *(uint *)(param_2 + 1), uVar2 < *(uint *)((longlong)param_2 + 0xc))))) {
            *(uint *)(param_2 + 1) = uVar3 + 1;
            lVar6 = *param_2;
LAB_1453adb47:
            plVar1 = (longlong *)(lVar6 + (ulonglong)uVar3 * 8);
            if (plVar1 != (longlong *)0x0) {
              *plVar1 = lVar4;
            }
          }
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  return;
}



// FUNCTION 1453adb90 FUN_1453adb90 body=231 status=ok
// SIG undefined FUN_1453adb90(void)

longlong * FUN_1453adb90(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  
  lVar8 = *(longlong *)(param_1 + 0x118);
  plVar11 = (longlong *)0x0;
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x120) * 0x1c + lVar8;
  plVar6 = plVar11;
  if (lVar8 != lVar7) {
    piVar3 = *(int **)(param_1 + 0xf0) + (ulonglong)*(uint *)(param_1 + 0xf8) * 4;
    do {
      for (piVar2 = *(int **)(param_1 + 0xf0);
          (piVar2 != piVar3 && (*piVar2 != *(int *)(lVar8 + 4))); piVar2 = piVar2 + 4) {
      }
      plVar5 = (longlong *)(piVar2 + 2);
      if (piVar2 == piVar3) {
        plVar5 = plVar11;
      }
      if ((plVar5 != (longlong *)0x0) && (lVar1 = *plVar5, lVar1 != 0)) {
        iVar9 = *(int *)(lVar8 + 0xc) - param_2;
        iVar10 = 0;
        if ((((byte)*(uint *)(lVar1 + 0xc) & 0x7c) == 4) &&
           ((((*(uint *)(lVar1 + 0xc) >> 1 & 1) == 0 || (iVar9 < 0)) ||
            (iVar10 = 0, *(int *)(lVar8 + 0x18) != 0)))) {
          iVar10 = *(int *)(lVar1 + 0x28);
        }
        iVar4 = 0;
        if (-1 < iVar9) {
          iVar4 = iVar9;
        }
        if ((int)plVar6 < iVar10 - iVar4) {
          plVar6 = (longlong *)(ulonglong)(uint)(iVar10 - iVar4);
        }
      }
      lVar8 = lVar8 + 0x1c;
    } while (lVar8 != lVar7);
  }
  return plVar6;
}



// FUNCTION 1453adc80 FUN_1453adc80 body=136 status=ok
// SIG undefined FUN_1453adc80(void)

void FUN_1453adc80(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 == '\0') {
    for (lVar1 = *(longlong *)(param_1 + 0x150); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x198)) {
      FUN_1453a5f70(lVar1,param_2,param_3,0);
    }
  }
  FUN_1450edd20(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1453add10 FUN_1453add10 body=153 status=ok
// SIG undefined FUN_1453add10(void)

void FUN_1453add10(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_1 + 0x150); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x198)) {
    if (*(longlong *)(lVar1 + 0x10) == param_3) {
      FUN_1453a5f70(lVar1,param_2,param_4,param_5);
    }
  }
  FUN_1450edd80(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1453addb0 FUN_1453addb0 body=169 status=ok
// SIG undefined FUN_1453addb0(void)

void FUN_1453addb0(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (lVar2 == (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + lVar2) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    return;
  }
  do {
    pvVar1 = *(void **)(lVar2 + 8);
    if (pvVar1 != (void *)0x0) {
      FUN_14536d100(pvVar1);
      AK::MemoryMgr::Free(2,pvVar1);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0xf8) * 0x10 + *(longlong *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 1453ade60 FUN_1453ade60 body=190 status=ok
// SIG undefined FUN_1453ade60(void)

undefined8 FUN_1453ade60(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var6 = (ulonglong)(iVar2 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar5 + *param_1))[1];
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
            ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453adf01;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1453adf01:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1453adf20 FUN_1453adf20 body=172 status=ok
// SIG undefined FUN_1453adf20(void)

int * FUN_1453adf20(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar5 = piVar3 + (ulonglong)uVar1 * 4;
  for (; (piVar3 != piVar5 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  piVar6 = (int *)0x0;
  piVar4 = piVar3 + 2;
  if (piVar3 == piVar5) {
    piVar4 = piVar6;
  }
  if ((piVar4 == (int *)0x0) &&
     (((uVar1 < *(uint *)((longlong)param_1 + 0xc) || (cVar2 = FUN_1453ade60(), cVar2 != '\0')) &&
      (piVar4 = piVar6, uVar1 < *(uint *)((longlong)param_1 + 0xc))))) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    piVar3 = (int *)((ulonglong)uVar1 * 0x10 + *param_1);
    if (piVar3 != (int *)0x0) {
      *piVar3 = param_2;
      piVar4 = piVar3 + 2;
    }
  }
  return piVar4;
}



// FUNCTION 1453adfd0 FUN_1453adfd0 body=96 status=ok
// SIG undefined FUN_1453adfd0(void)

void FUN_1453adfd0(undefined8 *param_1,int param_2)

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



// FUNCTION 1453ae030 FUN_1453ae030 body=223 status=ok
// SIG undefined FUN_1453ae030(void)

undefined8 FUN_1453ae030(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  __uint64 _Var5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  _Var5 = (ulonglong)uVar6 << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      if (uVar7 != 0) {
        lVar3 = (longlong)pvVar2 + 0x14;
        do {
          if (lVar3 != 0x14) {
            *(undefined8 *)(lVar3 + -0xc) = 0;
            *(undefined8 *)(lVar3 + -4) = 0;
            *(undefined4 *)(lVar3 + 4) = 1;
          }
          puVar4 = (undefined8 *)((-0x14 - (longlong)pvVar2) + lVar3 + *param_1);
          uVar1 = puVar4[1];
          *(undefined8 *)(lVar3 + -0x14) = *puVar4;
          *(undefined8 *)(lVar3 + -0xc) = uVar1;
          uVar1 = puVar4[3];
          *(undefined8 *)(lVar3 + -4) = puVar4[2];
          *(undefined8 *)(lVar3 + 4) = uVar1;
          lVar3 = lVar3 + 0x20;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  return 1;
}



// FUNCTION 1453ae110 FUN_1453ae110 body=126 status=ok
// SIG undefined FUN_1453ae110(void)

void FUN_1453ae110(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 1) * 0x20 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      if (*(void **)(lVar1 + 8) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)(lVar1 + 8));
      }
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x18) = 1;
    }
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1453ae190 FUN_1453ae190 body=194 status=ok
// SIG undefined FUN_1453ae190(void)

undefined8 FUN_1453ae190(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  __uint64 _Var5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var5 = (ulonglong)uVar6 * 0x1c;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar7 != 0) {
        lVar4 = 0;
        do {
          lVar1 = *param_1;
          uVar2 = ((undefined8 *)(lVar4 + lVar1))[1];
          *(undefined8 *)(lVar4 + (longlong)pvVar3) = *(undefined8 *)(lVar4 + lVar1);
          ((undefined8 *)(lVar4 + (longlong)pvVar3))[1] = uVar2;
          *(undefined8 *)(lVar4 + 0x10 + (longlong)pvVar3) = *(undefined8 *)(lVar4 + 0x10 + lVar1);
          *(undefined4 *)(lVar4 + 0x18 + (longlong)pvVar3) = *(undefined4 *)(lVar4 + 0x18 + lVar1);
          uVar7 = uVar7 - 1;
          lVar4 = lVar4 + 0x1c;
        } while (uVar7 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  return 1;
}



// FUNCTION 1453ae260 FUN_1453ae260 body=272 status=ok
// SIG undefined FUN_1453ae260(void)

undefined8 * FUN_1453ae260(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_149d46c58;
  param_1[0x2a] = 0;
  param_1[1] = &PTR_FUN_149d46ec0;
  param_1[2] = &PTR_LAB_149d46ec8;
  param_1[5] = &PTR_LAB_149d46ef0;
  FUN_1453addb0();
  if ((void *)param_1[0x1e] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x1e]);
    param_1[0x1e] = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x23]);
    param_1[0x23] = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  FUN_1453ae110();
  pvVar1 = (void *)param_1[0x27];
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
      AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 0x10));
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
    }
    AK::MemoryMgr::Free(2,pvVar1);
  }
  FUN_1450ee3f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 1453ae390 FUN_1453ae390 body=108 status=ok
// SIG undefined FUN_1453ae390(void)

undefined8 * FUN_1453ae390(undefined8 *param_1)

{
  FUN_145389140();
  *param_1 = &PTR__scalar_deleting_destructor__149d46f70;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_145351c40(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[3] != 0) {
    *(undefined2 *)((longlong)param_1 + 0x54) = *(undefined2 *)(param_1[3] + 0x310);
    return param_1;
  }
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  return param_1;
}



// FUNCTION 1453ae400 FUN_1453ae400 body=44 status=ok
// SIG undefined FUN_1453ae400(void)

void FUN_1453ae400(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__149d46f70;
  FUN_145351c50(param_1 + 8);
  *param_1 = &PTR_FUN_149c277e0;
  return;
}



// FUNCTION 1453ae430 FUN_1453ae430 body=9 status=ok
// SIG undefined FUN_1453ae430(void)

void FUN_1453ae430(longlong param_1)

{
  FUN_145351d30(param_1 + 0x40);
  return;
}



// FUNCTION 1453ae440 FUN_1453ae440 body=10 status=ok
// SIG undefined FUN_1453ae440(void)

void FUN_1453ae440(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x54) = 1;
  return;
}



// FUNCTION 1453ae450 FUN_1453ae450 body=215 status=ok
// SIG undefined FUN_1453ae450(void)

undefined8 FUN_1453ae450(longlong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int local_18 [3];
  undefined4 local_c;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar5 = 0x2d;
  uVar6 = *param_2 + iVar2;
  *(uint *)(param_1 + 0x2c) = uVar6;
  sVar1 = *(short *)(param_1 + 0x54);
  if (sVar1 == 1) {
    if (*(uint *)(param_1 + 0x28) <= uVar6) {
      uVar5 = 0x11;
      *param_2 = *(uint *)(param_1 + 0x28) - iVar2;
    }
  }
  else if (*(uint *)(param_1 + 0x3c) < uVar6) {
    if (sVar1 != 0) {
      *(short *)(param_1 + 0x54) = sVar1 + -1;
    }
    *param_2 = (*(uint *)(param_1 + 0x3c) - iVar2) + 1;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x38);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  FUN_145351f70(param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),iVar2,*param_2 + iVar2);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((*(uint *)(lVar4 + 8) & 0x100000) != 0) {
    local_c = *(undefined4 *)(lVar4 + 0x2b0);
    local_18[1] = 0x3f800000;
    local_18[0] = iVar2;
    local_18[2] = uVar3;
    FUN_1450c8f80(DAT_14c791050,*(undefined4 *)(lVar4 + 0x280),local_18,param_1);
  }
  return uVar5;
}



// FUNCTION 1453ae530 FUN_1453ae530 body=122 status=ok
// SIG undefined FUN_1453ae530(void)

void FUN_1453ae530(longlong *param_1)

{
  if (*(short *)(param_1[3] + 0x310) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x110))();
  return;
}



// FUNCTION 1453ae5b0 FUN_1453ae5b0 body=110 status=ok
// SIG undefined FUN_1453ae5b0(void)

ulonglong FUN_1453ae5b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = FUN_1453890b0();
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(uint *)(lVar1 + 8) & 0x100000) != 0) {
    local_c = *(undefined4 *)(lVar1 + 0x2b0);
    local_18 = *(undefined4 *)(param_1 + 0x2c);
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_14 = 0;
    FUN_1450c8f80(DAT_14c791050,*(undefined4 *)(lVar1 + 0x280),&local_18,param_1);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 1453ae630 FUN_1453ae630 body=316 status=ok
// SIG undefined FUN_1453ae630(void)

undefined8 FUN_1453ae630(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 == 0) || (*(uint *)(lVar4 + 8) == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  puVar7 = (uint *)(lVar4 + (ulonglong)uVar2 * 6 + 0x10);
  uVar8 = *(int *)(param_1 + 0x2c) - param_2;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    uVar8 = 0;
  }
  uVar6 = uVar2 + 1;
  uVar10 = (ulonglong)uVar2;
  do {
    uVar9 = (uint)uVar10;
    uVar5 = (ushort)puVar7[1];
    uVar2 = *puVar7;
    for (; uVar6 < *(uint *)(lVar4 + 8); uVar6 = uVar6 + 1) {
      lVar1 = (ulonglong)uVar6 * 3 + 8;
      uVar3 = *(uint *)(lVar4 + lVar1 * 2);
      puVar7 = (uint *)(lVar4 + lVar1 * 2);
      if ((uVar2 <= uVar8) && (uVar8 < uVar3)) {
        *(int *)(param_1 + 0x50) = (int)uVar10;
        fVar11 = (((float)(ushort)puVar7[1] - (float)uVar5) * (float)(uVar8 - uVar2)) /
                 (float)(uVar3 - uVar2) + (float)uVar5;
        goto LAB_1453ae725;
      }
      uVar5 = (ushort)puVar7[1];
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar2 = uVar3;
    }
    if (*puVar7 <= uVar8) {
      *(uint *)(param_1 + 0x50) = uVar9;
      fVar11 = (float)(ushort)puVar7[1];
LAB_1453ae725:
      auVar12._0_4_ = -fVar11;
      auVar12._4_4_ = 0x80000000;
      auVar12._8_4_ = 0x80000000;
      auVar12._12_4_ = 0x80000000;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = auVar12._0_4_ - *(float *)(lVar4 + 0xc);
      return auVar13._0_8_;
    }
    puVar7 = (uint *)(lVar4 + 0x10);
    uVar6 = 1;
    uVar10 = 0;
  } while( true );
}



// FUNCTION 1453ae780 FUN_1453ae780 body=220 status=ok
// SIG undefined FUN_1453ae780(void)

void FUN_1453ae780(longlong *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    *(undefined2 *)((longlong)param_6 + 0x12) = 0;
    *(undefined4 *)(param_6 + 6) = 0x2e;
    return;
  }
  *(undefined4 *)(param_6 + 1) = param_5;
  *param_6 = param_2;
  *(ushort *)(param_6 + 2) = param_3;
  *(ushort *)((longlong)param_6 + 0x12) = param_3;
  lVar1 = param_1[3];
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x2a8) != 0)) {
    FUN_145351e60(param_1 + 8,*(longlong *)(lVar1 + 0x2a8) + 0x108,lVar1,param_6,
                  *(undefined4 *)((longlong)param_1 + 0x2c),(uint)param_3);
  }
  *(undefined4 *)((longlong)param_6 + 0x2c) = param_4;
  *(undefined4 *)(param_6 + 4) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(param_6 + 5) = (int)param_1[5];
  uVar2 = 0x2d;
  uVar3 = (uint)param_3 + *(int *)((longlong)param_1 + 0x2c);
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  if (*(short *)((longlong)param_1 + 0x54) == 1) {
    if (uVar3 < *(uint *)(param_1 + 5)) goto LAB_1453ae844;
    uVar4 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  }
  else {
    if (uVar3 <= *(uint *)((longlong)param_1 + 0x3c)) goto LAB_1453ae844;
    uVar4 = 0;
    *(int *)((longlong)param_1 + 0x2c) = (int)param_1[7];
  }
  uVar2 = (**(code **)(*param_1 + 0x118))(param_1,uVar4);
LAB_1453ae844:
  *(undefined4 *)(param_6 + 6) = uVar2;
  return;
}



// FUNCTION 1453ae860 FUN_1453ae860 body=561 status=ok
// SIG undefined FUN_1453ae860(void)

ulonglong FUN_1453ae860(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  short sVar9;
  uint uVar10;
  float fVar11;
  
  if (*(char *)(param_1[3] + 0x315) < '\0') {
    if (*(short *)(param_1[3] + 0x310) == 0) {
      uVar3 = *(uint *)(param_1 + 5);
      uVar4 = (**(code **)(*param_1 + 0x110))();
      fVar11 = ((float)uVar3 * 1000.0) / (float)uVar4;
    }
    else {
      fVar11 = (float)(**(code **)(*param_1 + 0x80))();
    }
    uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
    lVar5 = param_1[3];
    uVar8 = (ulonglong)(fVar11 * *(float *)(lVar5 + 0x30c) * (float)uVar3 * 0.001);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x110))();
    lVar5 = param_1[3];
    uVar8 = ((ulonglong)uVar3 * (ulonglong)*(uint *)(lVar5 + 0x30c)) / (ulonglong)DAT_14c72f42c &
            0xffffffff;
  }
  bVar1 = *(byte *)(lVar5 + 0x316);
  uVar2 = *(ushort *)(lVar5 + 0x310);
  uVar3 = *(uint *)((longlong)param_1 + 0x3c);
  sVar9 = 0;
  sVar6 = 0;
  uVar4 = *(uint *)(param_1 + 7);
  *(ushort *)((longlong)param_1 + 0x54) = uVar2;
  if ((((uVar2 != 0) && (uVar2 < 2)) || (uVar7 = (uint)uVar8, uVar7 <= uVar3)) || (uVar3 <= uVar4))
  goto LAB_1453ae9dd;
  uVar10 = (uVar3 - uVar4) + 1;
  uVar3 = (uVar7 - uVar4) / uVar10;
  if (uVar3 < uVar2) {
    if (uVar2 != 0) {
      sVar9 = uVar2 - (short)uVar3;
    }
LAB_1453ae9c5:
    uVar7 = uVar4 + (uVar7 - uVar4) % uVar10;
  }
  else {
    if (uVar2 == 0) goto LAB_1453ae9c5;
    sVar9 = 1;
    uVar7 = uVar7 - (uVar2 - 1) * uVar10;
  }
  uVar8 = (ulonglong)uVar7;
  *(short *)((longlong)param_1 + 0x54) = sVar9;
LAB_1453ae9dd:
  if (((bVar1 & 1) == 0) || (lVar5 = FUN_145352000(param_1 + 8), lVar5 == 0)) {
    uVar8 = uVar8 & 0xffffffff;
  }
  else {
    uVar2 = *(ushort *)((longlong)param_1 + 0x54);
    uVar4 = *(uint *)((longlong)param_1 + 0x3c);
    uVar7 = *(uint *)(param_1 + 7);
    uVar3 = *(uint *)(lVar5 + 4);
    *(ushort *)((longlong)param_1 + 0x54) = uVar2;
    if (((uVar2 != 1) && (uVar4 < uVar3)) && (uVar7 < uVar4)) {
      uVar10 = (uVar4 - uVar7) + 1;
      uVar4 = (uVar3 - uVar7) / uVar10;
      if (uVar4 < uVar2) {
        if (uVar2 != 0) {
          sVar6 = uVar2 - (short)uVar4;
        }
      }
      else {
        sVar6 = 0;
        if (uVar2 != 0) {
          *(undefined2 *)((longlong)param_1 + 0x54) = 1;
          return (ulonglong)(uVar3 - (uVar2 - 1) * uVar10);
        }
      }
      *(short *)((longlong)param_1 + 0x54) = sVar6;
      uVar3 = uVar7 + (uVar3 - uVar7) % uVar10;
    }
    uVar8 = (ulonglong)uVar3;
  }
  return uVar8;
}



// FUNCTION 1453aeaa0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__149d46f70;
  FUN_145351c50(this + 0x40);
  *(undefined ***)this = &PTR_FUN_149c277e0;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x58);
  }
  return this;
}



// FUNCTION 1453aeaf0 FUN_1453aeaf0 body=249 status=ok
// SIG undefined FUN_1453aeaf0(void)

undefined8 FUN_1453aeaf0(longlong param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = (longlong)param_2;
  *(int *)(param_1 + 0x10) = param_2;
  pvVar2 = AK::MemoryMgr::Malign(5,lVar4 << 4,0x10);
  *(void **)(param_1 + 0x20) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x28) = (void *)((longlong)pvVar2 + lVar4 * 8);
    FUN_145567d50();
    lVar3 = 0;
    **(undefined8 **)(param_1 + 0x20) = 0;
    **(undefined8 **)(param_1 + 0x28) = 0;
    uVar1 = (*(int *)(*(longlong *)(param_1 + 0x18) + 4) >> 2) * *(int *)(param_1 + 0x10) * 4 + 0xf;
    uVar5 = uVar1 & 0xfffffff0;
    pvVar2 = AK::MemoryMgr::Malign(5,(longlong)(int)uVar5,0x10);
    **(undefined8 **)(param_1 + 0x28) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      memset(pvVar2,0,(ulonglong)uVar5);
      *(undefined1 *)(param_1 + 0x48) = 1;
      if (0 < param_2) {
        do {
          *(void **)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) = pvVar2;
          pvVar2 = (void *)((longlong)pvVar2 +
                           (longlong)
                           (int)((longlong)((longlong)(int)uVar1 & 0xfffffffffffffff0U) /
                                (longlong)param_2));
          lVar3 = lVar3 + 1;
        } while (lVar3 < lVar4);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1453aebf0 FUN_1453aebf0 body=85 status=ok
// SIG undefined FUN_1453aebf0(void)

void FUN_1453aebf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if ((void *)**(undefined8 **)(param_1 + 0x28) != (void *)0x0) {
      AK::MemoryMgr::Free(5,(void *)**(undefined8 **)(param_1 + 0x28));
      **(undefined8 **)(param_1 + 0x28) = 0;
    }
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1453aec50 FUN_1453aec50 body=18 status=ok
// SIG undefined FUN_1453aec50(void)

undefined8 FUN_1453aec50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  return 0;
}



// FUNCTION 1453aec70 FUN_1453aec70 body=479 status=ok
// SIG undefined FUN_1453aec70(void)

void FUN_1453aec70(undefined8 *param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  
  uVar7 = 0;
  iVar2 = *(int *)(param_1 + 2);
  if (0 < iVar2) {
    uVar6 = uVar7;
    uVar8 = uVar7;
    do {
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      *(longlong *)(uVar6 + param_1[4]) = param_3;
      param_3 = param_3 + param_4 / iVar2;
      uVar6 = uVar6 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 2));
  }
  lVar3 = param_1[3];
  *(undefined1 *)(param_1 + 1) = 0;
  pbVar4 = (byte *)*param_2;
  *param_1 = pbVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  bVar1 = *pbVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  uVar6 = (ulonglong)(bVar1 & 1);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  *(int *)(param_1 + 7) = iVar2;
  *(uint *)((longlong)param_1 + 0x3c) = (uint)*(byte *)(*(longlong *)(lVar3 + 0x20) + uVar6 * 2);
  iVar2 = *(int *)(lVar3 + (longlong)iVar2 * 4);
  if (*(char *)(param_1 + 9) == '\0') {
    iVar5 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
    uVar8 = uVar7;
    do {
      memcpy(*(void **)(uVar8 + param_1[5]),
             (void *)(*(longlong *)(uVar8 + param_1[4]) + (longlong)iVar5 * 4),
             (ulonglong)(uint)(iVar5 * 4));
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
      uVar8 = uVar8 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 2));
    *(undefined1 *)(param_1 + 9) = 1;
  }
  iVar5 = *(int *)(param_1 + 6);
  *(undefined4 *)(param_1 + 6) = 0;
  if (iVar5 == -1) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    if ((uint)(*(int *)(lVar3 + 4) / 2) <= *(uint *)(param_1 + 8)) {
      return;
    }
  }
  else {
    iVar5 = *(int *)(lVar3 + (longlong)*(int *)((longlong)param_1 + 0x3c) * 4);
    iVar9 = ((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) + ((int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2);
    iVar2 = *(int *)(param_1 + 8);
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    iVar5 = 0;
    if (iVar2 != 0) {
      *(int *)(param_1 + 6) = iVar2;
      if (iVar9 < iVar2) {
        *(int *)(param_1 + 6) = iVar9;
        *(int *)(param_1 + 8) = iVar2 - iVar9;
        iVar5 = iVar9;
        if ((uint)(*(int *)(lVar3 + 4) / 2) <= (uint)(iVar2 - iVar9)) {
          return;
        }
      }
      else {
        *(undefined4 *)(param_1 + 8) = 0;
        iVar5 = iVar2;
      }
    }
    if ((*(char *)(param_2 + 2) != '\0') &&
       (iVar9 = iVar9 - *(int *)((longlong)param_1 + 0x44),
       *(int *)((longlong)param_1 + 0x34) = iVar9, iVar9 < iVar5)) {
      *(int *)((longlong)param_1 + 0x34) = iVar5;
    }
  }
  FUN_145566bb0(param_1,*(longlong *)(lVar3 + 0x28) +
                        (ulonglong)*(byte *)(*(longlong *)(lVar3 + 0x20) + 1 + uVar6 * 2) * 0x28);
  return;
}



// FUNCTION 1453aee50 FUN_1453aee50 body=376 status=ok
// SIG undefined FUN_1453aee50(void)

int FUN_1453aee50(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    iVar7 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
    if (param_2 != 0) {
      if (param_3 < iVar7) {
        iVar7 = param_3;
      }
      piVar1 = *(int **)(param_1 + 0x18);
      uVar3 = FUN_1453af050(*piVar1 >> 1);
      uVar8 = uVar3;
      uVar4 = FUN_1453af050(piVar1[1] >> 1);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar6 = 0;
      lVar9 = 0;
      do {
        if (param_4 < iVar6) {
          iVar2 = iVar6 + -1;
        }
        else {
          iVar2 = iVar6;
          if (iVar6 == param_4) {
            iVar2 = iVar5 + -1;
          }
        }
        FUN_145569d20(*piVar1,piVar1[1],*(undefined4 *)(param_1 + 0x38),
                      *(undefined4 *)(param_1 + 0x3c),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar9),
                      *(undefined8 *)(lVar9 + *(longlong *)(param_1 + 0x28)),uVar8,uVar4,
                      param_2 + (longlong)(iVar2 * param_3) * 4,iVar5,*(int *)(param_1 + 0x30),
                      *(int *)(param_1 + 0x30) + iVar7);
        iVar5 = piVar1[*(int *)(param_1 + 0x3c)];
        if (iVar5 < 0) {
          iVar5 = iVar5 + 3;
        }
        memcpy(*(void **)(lVar9 + *(longlong *)(param_1 + 0x28)),
               (void *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) +
                       (longlong)(iVar5 >> 2) * 4),(ulonglong)(uint)((iVar5 >> 2) * 4));
        iVar5 = *(int *)(param_1 + 0x10);
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 8;
        uVar8 = uVar3;
      } while (iVar6 < iVar5);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar7;
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    return iVar7;
  }
  return 0;
}



// FUNCTION 1453aefd0 FUN_1453aefd0 body=122 status=ok
// SIG undefined FUN_1453aefd0(void)

void FUN_1453aefd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  do {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x3c) * 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    memcpy(*(void **)(lVar3 + *(longlong *)(param_1 + 0x28)),
           (void *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3) +
                   (longlong)(iVar1 >> 2) * 4),(ulonglong)(uint)((iVar1 >> 2) * 4));
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 8;
  } while (iVar2 < *(int *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



// FUNCTION 1453af050 FUN_1453af050 body=84 status=ok
// SIG undefined FUN_1453af050(void)

undefined * FUN_1453af050(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0x80) {
    return &DAT_14c7389f0;
  }
  if (param_1 == 0x100) {
    return &DAT_14c738bf0;
  }
  if (param_1 == 0x200) {
    return &DAT_14c738ff0;
  }
  if (param_1 != 0x400) {
    puVar1 = &DAT_14c73a7f0;
    if (param_1 != 0x800) {
      puVar1 = (undefined *)0x0;
    }
    return puVar1;
  }
  return &DAT_14c7397f0;
}



// FUNCTION 1453af0b0 FUN_1453af0b0 body=236 status=ok
// SIG undefined FUN_1453af0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453af0b0(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStack_48 [48];
  ulonglong uVar5;
  
  puVar3 = auStack_48;
  uVar4 = (*(int *)(*(longlong *)(param_1 + 0x28) + 4) >> 1) * *(int *)(param_1 + 0x20) * 4 + 0xfU &
          0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 < DAT_14c79bff0 >> 2) {
    uVar1 = uVar5 + 0xf;
    if (uVar1 <= uVar5) {
      uVar1 = 0xffffffffffffff0;
    }
    puVar3 = auStack_48 + -(uVar1 & 0xfffffffffffffff0);
    puVar2 = &stack0xffffffffffffffe8 + -(uVar1 & 0xfffffffffffffff0);
  }
  else {
    puVar2 = AK::MemoryMgr::Malign(5,uVar5,0x10);
    if (puVar2 == (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 4) = 2;
      return;
    }
  }
  *(undefined1 **)(puVar3 + 0x28) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + -8) = 0x1453af14a;
  FUN_1453af1a0(param_1,param_2,param_3,param_4);
  if (DAT_14c79bff0 >> 2 <= uVar4) {
    *(undefined8 *)(puVar3 + -8) = 0x1453af164;
    AK::MemoryMgr::Free(5,puVar2);
  }
  return;
}



// FUNCTION 1453af1a0 FUN_1453af1a0 body=729 status=ok
// SIG undefined FUN_1453af1a0(void)

void FUN_1453af1a0(int *param_1,ushort param_2,longlong param_3,undefined8 *param_4,uint *param_5,
                  undefined8 param_6)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  void *pvVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  void *_Src;
  void *local_68;
  uint local_60;
  undefined1 local_58;
  
  pvVar9 = (void *)0x0;
  *param_1 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 10) + 4);
  iVar3 = param_1[8];
  uVar11 = param_1[0x1a];
  _Dst = pvVar9;
  pvVar5 = pvVar9;
  do {
    iVar8 = param_1[0x1b];
    if ((ulonglong)uVar11 < (longlong)pvVar5 + 2U) goto LAB_1453af419;
    if (_Dst != (void *)0x0) {
      AK::MemoryMgr::Free(5,_Dst);
      _Dst = pvVar9;
    }
    uVar2 = *(ushort *)((longlong)pvVar5 + param_3);
    _Src = (void *)((longlong)pvVar5 + param_3 + 2);
    if (param_2 < uVar2) {
LAB_1453af40a:
      *param_1 = 0;
      param_1[1] = 2;
      goto LAB_1453af435;
    }
    if (param_1[2] == 4) {
LAB_1453af419:
      param_1[1] = 0x2e;
      param_1[3] = (int)pvVar5;
      if (**(longlong **)(param_1 + 0xc) != 0) {
        FUN_1453aefd0(param_1 + 4);
      }
      goto LAB_1453af435;
    }
    uVar7 = (uint)uVar2;
    if ((ulonglong)uVar11 < (ulonglong)uVar2 + 2 + (longlong)pvVar5) goto LAB_1453af419;
    if ((ulonglong)uVar11 < (longlong)pvVar5 + (ulonglong)uVar2 + 10) {
      _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)(uVar2 + 8));
      if (_Dst == (void *)0x0) goto LAB_1453af40a;
      memcpy(_Dst,_Src,(ulonglong)uVar7);
      _Src = _Dst;
    }
    local_68 = _Src;
    uVar10 = (int)pvVar5 + 2 + uVar7;
    pvVar5 = (void *)(ulonglong)uVar10;
    if ((uVar10 == uVar11) && ((char)iVar8 != '\0')) {
      local_58 = 1;
      param_1[2] = 4;
    }
    else {
      local_58 = 0;
    }
    piVar1 = param_1 + 4;
    local_60 = uVar7;
    FUN_1453aec70(piVar1,&local_68,param_6,(iVar4 >> 1) * iVar3 * 4 + 0xfU & 0xfffffff0);
    iVar8 = param_1[0x11] - param_1[0x10];
  } while (iVar8 == 0);
  param_1[3] = uVar10;
  uVar11 = iVar8 * param_1[8] * 4;
  if ((void *)*param_4 == (void *)0x0) {
LAB_1453af36d:
    pvVar5 = AK::MemoryMgr::Malign(5,(ulonglong)uVar11,0x10);
    *param_4 = pvVar5;
    if (pvVar5 == (void *)0x0) {
      param_1[1] = 2;
      param_1[0x19] = 0;
      goto LAB_1453af435;
    }
    *param_5 = uVar11;
  }
  else if (*param_5 < uVar11) {
    AK::MemoryMgr::Free(5,(void *)*param_4);
    goto LAB_1453af36d;
  }
  pvVar5 = (void *)(ulonglong)(param_1[8] + 1);
  if ((param_1[0x18] & 0x8000U) != 0) {
    pvVar5 = pvVar9;
    do {
      bVar6 = (byte)pvVar9;
      uVar11 = (int)pvVar9 + 1;
      pvVar9 = (void *)(ulonglong)uVar11;
      pvVar5 = (void *)(ulonglong)
                       ((int)pvVar5 + (((uint)param_1[0x18] >> 0xc) >> (bVar6 & 0x1f) & 1));
    } while (uVar11 < 3);
  }
  FUN_1453aee50(piVar1,*param_4,iVar8,pvVar5);
  param_1[0x19] = iVar8;
  *param_1 = iVar8;
  if ((param_1[2] == 4) && (iVar4 = FUN_1453aee50(piVar1,0,0,0), iVar4 == 0)) {
    param_1[1] = 0x11;
  }
  else {
    param_1[1] = 0x2e - (uint)(*param_1 != 0);
  }
LAB_1453af435:
  if (_Dst != (void *)0x0) {
    AK::MemoryMgr::Free(5,_Dst);
  }
  return;
}



// FUNCTION 1453af480 FUN_1453af480 body=189 status=ok
// SIG undefined FUN_1453af480(void)

void FUN_1453af480(longlong param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    uVar4 = uVar2;
    if (0 < *(int *)(param_1 + 0x90)) {
      do {
        pvVar1 = *(void **)(uVar4 + *(longlong *)(param_1 + 0xb8));
        if (pvVar1 != (void *)0x0) {
          AK::MemoryMgr::Free(5,pvVar1);
        }
        pvVar1 = *(void **)(*(longlong *)(param_1 + 0xb8) + 0x10 + uVar4);
        if (pvVar1 != (void *)0x0) {
          AK::MemoryMgr::Free(5,pvVar1);
        }
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
        uVar4 = uVar4 + 0x20;
      } while ((int)uVar3 < *(int *)(param_1 + 0x90));
    }
    if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xb8));
    }
  }
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1453af540 FUN_1453af540 body=576 status=ok
// SIG undefined FUN_1453af540(void)

uint * FUN_1453af540(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  puVar7 = (uint *)0x0;
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar5 = *(uint **)(*param_1 +
                            ((ulonglong)*(uint *)(param_2 + 0x90) %
                            (ulonglong)*(uint *)(param_1 + 1)) * 8);
        (puVar6 = puVar7, puVar5 != (uint *)0x0 &&
        (puVar6 = puVar5, *puVar5 != *(uint *)(param_2 + 0x90))); puVar5 = *(uint **)(puVar5 + 2)) {
    }
    if (puVar6 != (uint *)0x0) {
      puVar6[0x1c] = puVar6[0x1c] + 1;
      puVar7 = puVar6 + 0x1e;
      goto LAB_1453af756;
    }
  }
  puVar5 = AK::MemoryMgr::Malloc(5,0xc0);
  if (puVar5 != (uint *)0x0) {
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x2e] = 0;
    puVar5[0x2f] = 0;
    puVar5[0x24] = 0;
    puVar5[0x19] = *(uint *)(param_2 + 0x8c);
    uVar1 = *(undefined1 *)(param_2 + 0x60);
    iVar3 = FUN_14556a310(puVar5 + 0x1e,*(undefined1 *)(param_2 + 0x94),
                          *(undefined1 *)(param_2 + 0x95));
    if (iVar3 == 0) {
      local_38 = *param_3;
      local_2c = *(undefined4 *)(param_3 + 1);
      local_30 = 0;
      iVar3 = FUN_14556a370(puVar5,uVar1,&local_38);
      if (iVar3 == 0) {
        puVar5[0x1c] = puVar5[0x1c] + 1;
        puVar6 = (uint *)(param_1 + 2);
        *puVar5 = *(uint *)(param_2 + 0x90);
        if ((*(uint *)(param_1 + 1) == 0) || (0.9 < (float)*puVar6 / (float)*(uint *)(param_1 + 1)))
        {
          FUN_1453af8c0(param_1);
        }
        if (*(uint *)(param_1 + 1) != 0) {
          puVar7 = puVar5 + 0x1e;
          uVar2 = (ulonglong)*puVar5 % (ulonglong)*(uint *)(param_1 + 1);
          *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(*param_1 + uVar2 * 8);
          *(uint **)(*param_1 + uVar2 * 8) = puVar5;
          *puVar6 = *puVar6 + 1;
          goto LAB_1453af756;
        }
        uVar4 = 0x4a;
      }
      else {
        uVar4 = 0x10;
        if (iVar3 == -0x8b) {
          uVar4 = 0x4a;
        }
      }
    }
    else {
      uVar4 = 0x10;
    }
    *param_4 = uVar4;
    FUN_1453af480(puVar5);
    if (*(void **)(puVar5 + 0x10) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(puVar5 + 0x10));
    }
    if (*(void **)(puVar5 + 0xc) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(puVar5 + 0xc));
    }
    if (*(void **)(puVar5 + 8) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(puVar5 + 8));
    }
    if (*(void **)(puVar5 + 4) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(puVar5 + 4));
    }
    AK::MemoryMgr::Free(5,puVar5);
  }
LAB_1453af756:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return puVar7;
}



// FUNCTION 1453af780 FUN_1453af780 body=310 status=ok
// SIG undefined FUN_1453af780(void)

void FUN_1453af780(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x90) % (ulonglong)*(uint *)(param_1 + 1);
    puVar4 = *(uint **)(*param_1 + uVar1 * 8);
    puVar3 = (uint *)0x0;
    while (puVar2 = puVar4, puVar2 != (uint *)0x0) {
      if (*puVar2 == *(uint *)(param_2 + 0x90)) {
        if (puVar2 != (uint *)0x0) {
          puVar2[0x1c] = puVar2[0x1c] - 1;
          if ((int)puVar2[0x1c] < 1) {
            if (puVar3 == (uint *)0x0) {
              *(undefined8 *)(*param_1 + uVar1 * 8) = *(undefined8 *)(puVar2 + 2);
            }
            else {
              *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
            }
            *(int *)(param_1 + 2) = (int)param_1[2] + -1;
            FUN_1453af480(puVar2);
            if (*(void **)(puVar2 + 0x10) != (void *)0x0) {
              AK::MemoryMgr::Free(5,*(void **)(puVar2 + 0x10));
            }
            if (*(void **)(puVar2 + 0xc) != (void *)0x0) {
              AK::MemoryMgr::Free(5,*(void **)(puVar2 + 0xc));
            }
            if (*(void **)(puVar2 + 8) != (void *)0x0) {
              AK::MemoryMgr::Free(5,*(void **)(puVar2 + 8));
            }
            if (*(void **)(puVar2 + 4) != (void *)0x0) {
              AK::MemoryMgr::Free(5,*(void **)(puVar2 + 4));
            }
            AK::MemoryMgr::Free(5,puVar2);
          }
          if (((int)param_1[2] == 0) && ((void *)*param_1 != (void *)0x0)) {
            *(undefined4 *)(param_1 + 1) = 0;
            AK::MemoryMgr::Free(0,(void *)*param_1);
            *param_1 = 0;
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          }
        }
        break;
      }
      puVar3 = puVar2;
      puVar4 = *(uint **)(puVar2 + 2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001453af8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1453af8c0 FUN_1453af8c0 body=378 status=ok
// SIG undefined FUN_1453af8c0(void)

undefined8 FUN_1453af8c0(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  puVar12 = &DAT_149d47090;
  do {
    uVar1 = *puVar12;
    uVar10 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar9 = *(uint *)(param_1 + 1);
      uVar14 = (ulonglong)uVar9;
      puVar4 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar7 = AK::MemoryMgr::Malloc(0,uVar10 * 8);
      pvVar5 = (void *)*param_1;
      if (pvVar7 == (void *)0x0) {
        if (pvVar5 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar5);
        }
        *param_1 = (longlong)puVar4;
        uVar8 = 2;
        *(uint *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar7)) {
          AK::MemoryMgr::Free(0,pvVar5);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar11 = uVar10;
        do {
          uVar3 = *(uint *)(param_1 + 1);
          if (uVar3 < (uint)uVar10) {
            *(uint *)(param_1 + 1) = uVar3 + 1;
            puVar13 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
              uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        puVar13 = puVar4;
        if (uVar9 != 0) {
          do {
            puVar12 = (uint *)*puVar13;
            while (puVar12 != (uint *)0x0) {
              puVar6 = *(uint **)(puVar12 + 2);
              *(undefined8 *)(puVar12 + 2) =
                   *(undefined8 *)(*param_1 + ((ulonglong)*puVar12 % (ulonglong)uVar1) * 8);
              *(uint **)(*param_1 + ((ulonglong)*puVar12 % (ulonglong)uVar1) * 8) = puVar12;
              puVar12 = puVar6;
            }
            uVar14 = uVar14 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (puVar4 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar4);
        }
        uVar8 = 1;
      }
      return uVar8;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x1b);
  return 2;
}



// FUNCTION 1453afa40 FUN_1453afa40 body=589 status=ok
// SIG undefined FUN_1453afa40(void)

ulonglong FUN_1453afa40(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_28;
  byte local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = *param_2;
  if (((((byte)*(undefined4 *)(lVar1 + 0xc) & 0x7c) == 4) && (*(longlong *)(lVar1 + 0x10) == 0)) &&
     (*(int *)(lVar1 + 4) == -1)) {
    uVar2 = 2;
  }
  else {
    local_3b = *(undefined1 *)((longlong)param_2 + 10);
    *(short *)(param_1 + 8) = (short)param_2[1];
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)((longlong)param_2 + 10);
    bVar4 = 0;
    local_3c = 0;
    local_48 = 0x3f800000;
    local_40 = 0;
    local_58 = 0;
    local_54 = 0x800;
    uVar5 = *(uint *)(lVar1 + 0xc) & 0x7c;
    if (uVar5 == 0xc) {
      bVar4 = 2;
    }
    *(byte *)((longlong)param_1 + 0x42) = bVar4 | *(byte *)((longlong)param_1 + 0x42) & 0xfd;
    if (uVar5 == 0xc) {
      if (param_2[2] == 0) {
        return 0x2e;
      }
      uVar5 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x28))
                        (AK::IAkStreamMgr::m_pStreamMgr,param_2[2],(int)param_2[3],&local_48,param_1
                        );
    }
    else {
      uVar5 = *(uint *)(lVar1 + 0xc);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 & 0x500) == 0) {
          uVar6 = *(undefined4 *)(lVar1 + 4);
        }
        local_14 = *(undefined4 *)(lVar1 + 4);
        local_34 = (uint)*(ushort *)(lVar1 + 0x1a);
        local_20 = (byte)uVar5 & 1;
        local_30 = 0;
        local_28 = 0;
        local_18 = 0;
        local_38 = (uint)((uVar5 >> 8 & 1) != 0);
        local_1c = uVar6;
        uVar5 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x30))
                          (AK::IAkStreamMgr::m_pStreamMgr,local_14,&local_38,&local_48,&local_58,
                           param_1,DAT_14c790ff5);
      }
      else {
        if ((uVar5 & 0x500) == 0) {
          uVar6 = *(undefined4 *)(lVar1 + 4);
        }
        local_34 = (uint)*(ushort *)(lVar1 + 0x1a);
        local_20 = (byte)uVar5 & 1;
        local_30 = 0;
        local_14 = *(undefined4 *)(lVar1 + 4);
        local_28 = 0;
        local_18 = 0;
        local_38 = (uint)((uVar5 >> 8 & 1) != 0);
        local_1c = uVar6;
        uVar5 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x38))
                          (AK::IAkStreamMgr::m_pStreamMgr,*(undefined8 *)(lVar1 + 0x10),&local_38,
                           &local_48,&local_58,param_1,DAT_14c790ff5);
      }
    }
    uVar2 = (ulonglong)uVar5;
    if (uVar5 == 1) {
      bVar4 = *(byte *)((longlong)param_1 + 0x42);
      if ((((bVar4 & 2) == 0) && (param_2[2] != 0)) && ((int)param_2[3] != 0)) {
        param_1[2] = param_2[2];
        lVar1 = param_2[3];
        *(byte *)((longlong)param_1 + 0x42) = bVar4 & 0xcf | 8;
        *(int *)((longlong)param_1 + 0x24) = (int)lVar1;
      }
      else {
        *(byte *)((longlong)param_1 + 0x42) = bVar4 & 199;
        uVar3 = (**(code **)(*(longlong *)*param_1 + 0x60))();
        uVar2 = uVar3 & 0xffffffff;
        if ((int)uVar3 != 1) {
          return uVar3;
        }
      }
      *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0x3f;
    }
  }
  return uVar2;
}



// FUNCTION 1453afc90 FUN_1453afc90 body=36 status=ok
// SIG undefined FUN_1453afc90(void)

void FUN_1453afc90(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1453afcc0 FUN_1453afcc0 body=222 status=ok
// SIG undefined FUN_1453afcc0(void)

undefined8 FUN_1453afcc0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int local_res8 [2];
  longlong local_res10 [3];
  undefined1 local_18 [13];
  undefined1 local_b;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    local_res10[0] = 0;
    local_res8[0] = 0;
    param_1[3] = 0;
    if ((*(byte *)((longlong)param_1 + 0x42) & 0x38) == 8) {
      local_res10[0] = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) + param_1[2];
      local_res8[0] = *(int *)((longlong)param_1 + 0x24) - *(uint *)((longlong)param_1 + 0x2c);
      *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0xd7 | 0x10;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
      local_b = (undefined1)param_1[1];
      (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_18);
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0x80))
                        ((longlong *)*param_1,local_res10,local_res8,DAT_14c790ff5);
      if (((int)uVar2 != 0x2d) && ((int)uVar2 != 0x11)) {
        return uVar2;
      }
    }
    *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0xfb;
    if (local_res8[0] != 0) {
      uVar2 = FUN_1453b00e0(param_1,local_res10[0]);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      return 0x2d;
    }
  }
  return 2;
}



// FUNCTION 1453afda0 FUN_1453afda0 body=143 status=ok
// SIG undefined FUN_1453afda0(void)

undefined8 FUN_1453afda0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  *(undefined2 *)(param_1 + 8) = 1;
  if (((*(byte *)((longlong)param_1 + 0x42) & 6) == 6) && (*param_1 != 0)) {
    iVar2 = FUN_1453affd0(param_1,*(undefined4 *)((longlong)param_1 + 0x3c));
    if (iVar2 != 1) {
      return 2;
    }
    *(byte *)((longlong)param_1 + 0x42) =
         *(int *)((longlong)param_1 + 0x3c) == *(int *)((longlong)param_1 + 0x34) |
         *(byte *)((longlong)param_1 + 0x42) & 0xfa;
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
    local_10 = 0;
    (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_18);
  }
  return 1;
}



// FUNCTION 1453afe30 FUN_1453afe30 body=297 status=ok
// SIG undefined FUN_1453afe30(void)

int FUN_1453afe30(undefined8 *param_1,uint param_2,short param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  undefined1 local_18 [4];
  undefined8 local_14;
  
  if ((((param_1[3] != 0) && (uVar2 = *(uint *)(param_1 + 5), uVar2 <= param_2)) &&
      (param_2 < *(int *)(param_1 + 4) + uVar2)) &&
     (((*(byte *)((longlong)param_1 + 0x42) & 4) == 0 && (param_3 == *(short *)(param_1 + 8))))) {
    *(uint *)(param_1 + 5) = param_2;
    iVar3 = 3;
    param_1[3] = (ulonglong)(param_2 - uVar2) + param_1[3];
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - (param_2 - uVar2);
    goto LAB_1453afef2;
  }
  if (param_1[2] == 0) {
LAB_1453afebc:
    iVar3 = (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,param_2,0,local_res8);
    if (iVar3 != 1) {
      return 2;
    }
    *(int *)((longlong)param_1 + 0x2c) = local_res8[0];
    local_res8[0] = param_2 - local_res8[0];
  }
  else {
    bVar1 = *(byte *)((longlong)param_1 + 0x42);
    if (*(uint *)((longlong)param_1 + 0x24) <= param_2) {
      if ((bVar1 & 0x38) != 0) {
        *(byte *)((longlong)param_1 + 0x42) = bVar1 & 0xdf | 0x18;
      }
      goto LAB_1453afebc;
    }
    *(uint *)((longlong)param_1 + 0x2c) = param_2;
    *(byte *)((longlong)param_1 + 0x42) = bVar1 & 7 | 8;
    local_res8[0] = 0;
  }
  *(int *)(param_1 + 6) = local_res8[0];
  iVar3 = 1;
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0xfa;
LAB_1453afef2:
  *(short *)(param_1 + 8) = param_3;
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_18);
  if (*(short *)(param_1 + 8) == 1) {
    local_14 = 0;
  }
  else {
    local_14 = param_1[7];
  }
  (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_18);
  iVar4 = (**(code **)(*(longlong *)*param_1 + 0x60))();
  if (iVar4 != 1) {
    iVar3 = iVar4;
  }
  return iVar3;
}



// FUNCTION 1453aff60 FUN_1453aff60 body=20 status=ok
// SIG undefined FUN_1453aff60(void)

undefined8 FUN_1453aff60(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x42) & 2) == 0) && ((*(byte *)(param_1 + 0x42) & 0xc0) != 0x40)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1453affd0 FUN_1453affd0 body=84 status=ok
// SIG undefined FUN_1453affd0(void)

undefined8 FUN_1453affd0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int local_res8 [2];
  
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,param_2,0,local_res8);
  if (iVar1 != 1) {
    return 2;
  }
  *(int *)((longlong)param_1 + 0x2c) = local_res8[0];
  *(int *)(param_1 + 6) = param_2 - local_res8[0];
  return 1;
}



// FUNCTION 1453b0030 FUN_1453b0030 body=174 status=ok
// SIG undefined FUN_1453b0030(void)

undefined8 FUN_1453b0030(undefined8 *param_1,longlong *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [13];
  undefined1 local_b;
  
  if ((*(byte *)((longlong)param_1 + 0x42) & 0x38) == 8) {
    *param_2 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) + param_1[2];
    *param_3 = *(int *)((longlong)param_1 + 0x24) - *(int *)((longlong)param_1 + 0x2c);
    *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0xd7;
    *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x10;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return 0x2d;
  }
  param_1[3] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_18);
  local_b = *(undefined1 *)(param_1 + 1);
  (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_18);
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x80))
                    ((longlong *)*param_1,param_2,param_3,DAT_14c790ff5);
  return uVar1;
}



// FUNCTION 1453b00e0 FUN_1453b00e0 body=344 status=ok
// SIG undefined FUN_1453b00e0(void)

undefined8 FUN_1453b00e0(undefined8 *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  uVar2 = *(uint *)(param_1 + 6);
  iVar5 = *(int *)((longlong)param_1 + 0x2c);
  param_1[3] = param_2 + (ulonglong)uVar2;
  uVar7 = iVar5 + param_3;
  *(uint *)((longlong)param_1 + 0x2c) = uVar7;
  *(uint *)(param_1 + 5) = iVar5 + uVar2;
  *(uint *)(param_1 + 4) = param_3 - uVar2;
  bVar1 = *(byte *)((longlong)param_1 + 0x42);
  if (((bVar1 & 0x38) == 0x10) && (bVar1 < 0x40)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (*(short *)(param_1 + 8) == 1) {
    uVar4 = *(uint *)((longlong)param_1 + 0x34);
  }
  else {
    uVar4 = *(uint *)((longlong)param_1 + 0x3c);
  }
  if (uVar7 < uVar4) {
    if (!bVar3) {
      *(undefined4 *)(param_1 + 6) = 0;
      goto LAB_1453b0212;
    }
    iVar5 = FUN_1453affd0(param_1,uVar7);
    if (iVar5 != 1) {
      return 2;
    }
  }
  else {
    *(uint *)(param_1 + 4) = ((param_3 - uVar2) - uVar7) + uVar4;
    if (*(short *)(param_1 + 8) == 1) {
      *(byte *)((longlong)param_1 + 0x42) = bVar1 | 1;
    }
    else {
      iVar5 = FUN_1453affd0(param_1,*(undefined4 *)(param_1 + 7));
      if (iVar5 != 1) {
        return 2;
      }
      if (*(short *)(param_1 + 8) == 0) {
        *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 4;
        *(undefined2 *)(param_1 + 8) = 0;
      }
      else {
        *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 4;
        sVar6 = *(short *)(param_1 + 8) + -1;
        *(short *)(param_1 + 8) = sVar6;
        if (sVar6 == 1) {
          (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_18);
          local_10 = 0;
          (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_18);
        }
      }
    }
    if (!bVar3) {
LAB_1453b0212:
      if ((*(byte *)((longlong)param_1 + 0x42) & 0xc0) == 0x40) {
        *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0x3f | 0x80;
      }
      return 1;
    }
  }
  iVar5 = (**(code **)(*(longlong *)*param_1 + 0x60))();
  if (iVar5 != 1) {
    return 2;
  }
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) & 0x3f | 0x40;
  return 1;
}



// FUNCTION 1453b0240 FUN_1453b0240 body=38 status=ok
// SIG undefined FUN_1453b0240(void)

void FUN_1453b0240(undefined4 *param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  *param_1 = *(undefined4 *)(param_3 + 0x10);
  param_1[1] = 0;
  param_1[2] = *(undefined4 *)(param_3 + 0x14);
  param_1[3] = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 5) = param_4;
  return;
}



// FUNCTION 1453b0270 FUN_1453b0270 body=75 status=ok
// SIG undefined FUN_1453b0270(void)

float FUN_1453b0270(uint *param_1,ushort param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (param_2 != 0) {
    fVar1 = (((float)((param_1[4] - param_1[3]) + 1) * (float)(int)(param_2 - 1) + (float)param_1[2]
             ) * 1000.0) / (float)*param_1;
  }
  return fVar1;
}



// FUNCTION 1453b02c0 FUN_1453b02c0 body=25 status=ok
// SIG undefined FUN_1453b02c0(void)

undefined4 * FUN_1453b02c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  param_1[3] = *param_2;
  *param_1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 1453b02e0 FUN_1453b02e0 body=88 status=ok
// SIG undefined FUN_1453b02e0(void)

char FUN_1453b02e0(longlong param_1,int param_2,undefined1 *param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  
  *param_3 = 0;
  uVar3 = *(int *)(param_1 + 4) + param_2;
  *(uint *)(param_1 + 4) = uVar3;
  uVar1 = *(ushort *)(param_1 + 0x14);
  cVar2 = (param_2 == 0) + '-';
  if (uVar1 == 1) {
    if (*(uint *)(param_1 + 8) <= uVar3) {
      cVar2 = '\x11';
    }
  }
  else if (*(uint *)(param_1 + 0x10) < uVar3) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
    if (1 < uVar1) {
      *(ushort *)(param_1 + 0x14) = uVar1 - 1;
    }
    *param_3 = 1;
    return cVar2;
  }
  return cVar2;
}



// FUNCTION 1453b0340 FUN_1453b0340 body=46 status=ok
// SIG undefined FUN_1453b0340(void)

void FUN_1453b0340(double *param_1,uint *param_2,uint param_3)

{
  *param_1 = (double)param_2[1];
  param_1[1] = (double)*param_2 / (double)param_3;
  return;
}



// FUNCTION 1453b0370 FUN_1453b0370 body=258 status=ok
// SIG undefined FUN_1453b0370(void)

int * FUN_1453b0370(int *param_1,double *param_2,uint param_3,longlong param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  
  iVar7 = *(int *)(param_4 + 4);
  param_1[2] = param_3;
  uVar1 = *(ushort *)(param_4 + 0x14);
  dVar8 = (double)param_3 * param_2[1] + *param_2;
  uVar5 = (uint)(longlong)dVar8;
  uVar6 = uVar5 - iVar7;
  param_1[1] = uVar6;
  if (uVar1 == 1) {
    uVar4 = *(uint *)(param_4 + 8) - iVar7;
    if (uVar5 <= *(uint *)(param_4 + 8)) {
      uVar4 = uVar6;
    }
    uVar5 = iVar7 + uVar4;
    bVar2 = false;
    *(uint *)(param_4 + 4) = uVar5;
    iVar7 = (uVar4 == 0) + 0x2d;
    if (*(uint *)(param_4 + 8) <= uVar5) {
      *param_1 = 0x11;
      goto LAB_1453b040d;
    }
  }
  else {
    uVar3 = *(int *)(param_4 + 0x10) + 1;
    uVar4 = uVar3 - iVar7;
    if (uVar5 <= uVar3) {
      uVar4 = uVar6;
    }
    uVar5 = uVar4 + iVar7;
    bVar2 = false;
    *(uint *)(param_4 + 4) = uVar5;
    iVar7 = (uVar4 == 0) + 0x2d;
    if (*(uint *)(param_4 + 0x10) < uVar5) {
      uVar5 = *(uint *)(param_4 + 0xc);
      *(uint *)(param_4 + 4) = uVar5;
      if (1 < uVar1) {
        *(ushort *)(param_4 + 0x14) = uVar1 - 1;
      }
      bVar2 = true;
    }
  }
  *param_1 = iVar7;
  if (bVar2) {
    dVar8 = (double)uVar5;
  }
LAB_1453b040d:
  *param_2 = dVar8;
  if (uVar4 != param_1[1]) {
    param_1[1] = uVar4;
    param_1[2] = (int)(longlong)((double)uVar4 / param_2[1]);
  }
  return param_1;
}



// FUNCTION 1453b0480 FUN_1453b0480 body=280 status=ok
// SIG undefined FUN_1453b0480(void)

undefined8 FUN_1453b0480(uint *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_2 == 0) || (uVar1 = *(uint *)(param_2 + 8), uVar1 == 0)) {
    return 0;
  }
  uVar4 = *param_1;
  uVar8 = (ulonglong)uVar4;
  puVar9 = (uint *)(param_2 + uVar8 * 6 + 0x10);
  do {
    uVar4 = uVar4 + 1;
    uVar7 = (uint)uVar8;
    uVar5 = (ushort)puVar9[1];
    if (uVar4 < uVar1) {
      puVar3 = (uint *)(param_2 + ((ulonglong)uVar4 * 3 + 8) * 2);
      uVar6 = *puVar9;
      do {
        puVar9 = puVar3;
        uVar2 = *puVar9;
        if ((uVar6 <= param_3) && (param_3 < uVar2)) {
          *param_1 = (uint)uVar8;
          fVar10 = (((float)(ushort)puVar9[1] - (float)uVar5) * (float)(param_3 - uVar6)) /
                   (float)(uVar2 - uVar6) + (float)uVar5;
          goto LAB_1453b0559;
        }
        uVar5 = (ushort)puVar9[1];
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar4 = uVar4 + 1;
        puVar3 = (uint *)((longlong)puVar9 + 6);
        uVar6 = uVar2;
      } while (uVar4 < uVar1);
    }
    if (*puVar9 <= param_3) {
      *param_1 = uVar7;
      fVar10 = (float)(ushort)puVar9[1];
LAB_1453b0559:
      auVar11._0_4_ = -fVar10;
      auVar11._4_4_ = 0x80000000;
      auVar11._8_4_ = 0x80000000;
      auVar11._12_4_ = 0x80000000;
      auVar12._4_12_ = auVar11._4_12_;
      auVar12._0_4_ = auVar11._0_4_ - *(float *)(param_2 + 0xc);
      return auVar12._0_8_;
    }
    uVar8 = 0;
    puVar9 = (uint *)(param_2 + 0x10);
    uVar4 = 0;
  } while( true );
}



// FUNCTION 1453b05a0 FUN_1453b05a0 body=143 status=ok
// SIG undefined FUN_1453b05a0(void)

void FUN_1453b05a0(uint param_1,uint param_2,uint param_3,ushort param_4,uint *param_5,
                  ushort *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  *param_6 = param_4;
  if (((param_4 != 1) && (param_3 < param_1)) && (param_2 < param_3)) {
    uVar1 = (param_3 - param_2) + 1;
    uVar2 = (param_1 - param_2) / uVar1;
    if (uVar2 < param_4) {
      if (param_4 != 0) {
        uVar3 = param_4 - (short)uVar2;
      }
    }
    else {
      uVar3 = 0;
      if (param_4 != 0) {
        *param_5 = param_1 - (param_4 - 1) * uVar1;
        *param_6 = 1;
        return;
      }
    }
    *param_6 = uVar3;
    *param_5 = (param_1 - param_2) % uVar1 + param_2;
    return;
  }
  *param_5 = param_1;
  return;
}



// FUNCTION 1453b0630 FUN_1453b0630 body=124 status=ok
// SIG undefined FUN_1453b0630(void)

undefined8 FUN_1453b0630(uint *param_1,uint param_2,void *param_3,undefined2 param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)param_2 * 2);
  *(void **)(param_1 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    uVar1 = 0x34;
  }
  else {
    *param_1 = param_2;
    *(undefined2 *)(param_1 + 4) = param_4;
    memcpy(_Dst,param_3,(ulonglong)param_2 * 2);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1453b06b0 FUN_1453b06b0 body=56 status=ok
// SIG undefined FUN_1453b06b0(void)

void FUN_1453b06b0(undefined4 *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 1453b06f0 FUN_1453b06f0 body=11 status=ok
// SIG undefined FUN_1453b06f0(void)

undefined2 FUN_1453b06f0(longlong param_1,uint param_2)

{
  return *(undefined2 *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 2);
}



// FUNCTION 1453b0700 FUN_1453b0700 body=247 status=ok
// SIG undefined FUN_1453b0700(void)

int FUN_1453b0700(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar11 = 0;
  iVar10 = 0;
  iVar15 = 0;
  uVar8 = 0;
  if (7 < param_2) {
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    do {
      iVar12 = (int)uVar8;
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar8 * 2);
      auVar2._8_4_ = 0;
      auVar2._0_8_ = uVar14;
      auVar2._12_2_ = (short)(uVar14 >> 0x30);
      auVar4._8_2_ = (short)(uVar14 >> 0x20);
      auVar4._0_8_ = uVar14;
      auVar4._10_4_ = auVar2._10_4_;
      auVar6._6_8_ = 0;
      auVar6._0_6_ = auVar4._8_6_;
      uVar13 = iVar12 + 8;
      uVar8 = (ulonglong)uVar13;
      iVar19 = iVar19 + (uint)(ushort)uVar14;
      iVar20 = iVar20 + (int)CONCAT82(SUB148(auVar6 << 0x40,6),(short)(uVar14 >> 0x10));
      iVar21 = iVar21 + auVar4._8_4_;
      iVar22 = iVar22 + (auVar2._10_4_ >> 0x10);
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)(iVar12 + 4) * 2);
      auVar3._8_4_ = 0;
      auVar3._0_8_ = uVar14;
      auVar3._12_2_ = (short)(uVar14 >> 0x30);
      auVar5._8_2_ = (short)(uVar14 >> 0x20);
      auVar5._0_8_ = uVar14;
      auVar5._10_4_ = auVar3._10_4_;
      auVar7._6_8_ = 0;
      auVar7._0_6_ = auVar5._8_6_;
      iVar15 = iVar15 + (uint)(ushort)uVar14;
      iVar16 = iVar16 + (int)CONCAT82(SUB148(auVar7 << 0x40,6),(short)(uVar14 >> 0x10));
      iVar17 = iVar17 + auVar5._8_4_;
      iVar18 = iVar18 + (auVar3._10_4_ >> 0x10);
    } while (uVar13 < (param_2 & 0xfffffff8));
    iVar15 = iVar15 + iVar19 + iVar17 + iVar21 + iVar16 + iVar20 + iVar18 + iVar22;
  }
  uVar13 = (uint)uVar8;
  if (param_2 <= uVar13) {
    return iVar15;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (1 < param_2 - uVar13) {
    uVar9 = ((param_2 - uVar13) - 2 >> 1) + 1;
    uVar14 = (ulonglong)uVar9;
    do {
      iVar11 = iVar11 + (uint)*(ushort *)(lVar1 + uVar8 * 2);
      iVar10 = iVar10 + (uint)*(ushort *)(lVar1 + 2 + uVar8 * 2);
      uVar8 = uVar8 + 2;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    if (param_2 <= uVar13 + uVar9 * 2) goto LAB_1453b07d7;
  }
  iVar15 = iVar15 + (uint)*(ushort *)(lVar1 + uVar8 * 2);
LAB_1453b07d7:
  return iVar10 + iVar11 + iVar15;
}



// FUNCTION 1453b0800 FUN_1453b0800 body=73 status=ok
// SIG undefined FUN_1453b0800(void)

undefined8 * FUN_1453b0800(undefined8 *param_1)

{
  FUN_1453ae390();
  *param_1 = &PTR_FUN_149d47100;
  *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0x80;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)((longlong)param_1 + 0x54);
  return param_1;
}



// FUNCTION 1453b0850 FUN_1453b0850 body=91 status=ok
// SIG undefined FUN_1453b0850(void)

void FUN_1453b0850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d47100;
  if (((void *)param_1[2] != (void *)0x0) && ((*(byte *)((longlong)param_1 + 0x82) & 0x10) == 0)) {
    AK::MemoryMgr::Free(5,(void *)param_1[2]);
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 8))();
    param_1[0xb] = 0;
    FUN_1453ae430(param_1);
  }
  FUN_1453ae400(param_1);
  return;
}



// FUNCTION 1453b08b0 FUN_1453b08b0 body=34 status=ok
// SIG undefined FUN_1453b08b0(void)

void FUN_1453b08b0(undefined8 param_1)

{
  undefined4 local_18;
  undefined8 local_14;
  
  local_14 = 0x800;
  local_18 = 0;
  FUN_1453b0cb0(param_1,&local_18);
  return;
}



// FUNCTION 1453b08e0 FUN_1453b08e0 body=45 status=ok
// SIG undefined FUN_1453b08e0(void)

void FUN_1453b08e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_1453ae430(param_1);
  return;
}



// FUNCTION 1453b0910 FUN_1453b0910 body=179 status=ok
// SIG undefined FUN_1453b0910(void)

undefined8 FUN_1453b0910(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  FUN_1453ae440();
  *(undefined2 *)(param_1 + 0x80) = 1;
  if ((*(byte *)(param_1 + 0x82) & 0x40) != 0) {
    if (((*(byte *)(param_1 + 0x82) & 0x20) == 0) || (*(longlong *)(param_1 + 0x58) == 0)) {
      *(undefined2 *)(param_1 + 0x54) = 2;
    }
    else {
      iVar2 = FUN_1453b1410(param_1,*(undefined4 *)(param_1 + 0x7c));
      if (iVar2 != 1) {
        return 2;
      }
      *(byte *)(param_1 + 0x82) =
           *(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30) |
           *(byte *)(param_1 + 0x82) & 0xbe;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
    local_10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18);
  }
  return 1;
}



// FUNCTION 1453b09d0 FUN_1453b09d0 body=97 status=ok
// SIG undefined FUN_1453b09d0(void)

void FUN_1453b09d0(longlong param_1,uint param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x68))();
  if ((param_2 < 2) && (*(int *)(param_1 + 0x68) != 0)) {
    if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_1450f7170(param_1);
  return;
}



// FUNCTION 1453b0a40 FUN_1453b0a40 body=205 status=ok
// SIG undefined FUN_1453b0a40(void)

void FUN_1453b0a40(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2 == 1) {
    if (param_3 == '\0') {
      iVar1 = (**(code **)(*param_1 + 0x138))
                        (param_1,*(undefined4 *)((longlong)param_1 + 0x2c),(longlong)param_1 + 0x2c)
      ;
      if (iVar1 == 1) goto LAB_1453b0af8;
      iVar1 = (**(code **)(*param_1 + 0x138))(param_1,0,(longlong)param_1 + 0x2c);
    }
    else {
      iVar1 = FUN_1453b1140();
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (param_1[3] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined2 *)(param_1[3] + 0x310);
    }
    *(undefined2 *)((longlong)param_1 + 0x54) = uVar2;
    iVar1 = (**(code **)(*param_1 + 0x138))(param_1,0);
    if (iVar1 != 1) {
      return;
    }
  }
  else if (param_2 == 2) {
    *(byte *)(param_1 + 4) =
         *(byte *)(param_1 + 4) ^ (*(byte *)(param_1[3] + 0x315) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
  }
LAB_1453b0af8:
                    /* WARNING: Could not recover jumptable at 0x0001453b0b09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0xb] + 0x60))();
  return;
}



// FUNCTION 1453b0b10 FUN_1453b0b10 body=102 status=ok
// SIG undefined FUN_1453b0b10(void)

undefined8 FUN_1453b0b10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1453b1140();
  if (iVar1 != 1) {
    return 2;
  }
  if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    return 1;
  }
  *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}



// FUNCTION 1453b0bf0 FUN_1453b0bf0 body=186 status=ok
// SIG undefined FUN_1453b0bf0(void)

undefined8 FUN_1453b0bf0(longlong *param_1)

{
  undefined8 uVar1;
  int local_res8 [2];
  undefined8 local_res10 [3];
  undefined1 local_18 [13];
  undefined1 local_b;
  
  param_1[0xc] = 0;
  (**(code **)(*(longlong *)param_1[0xb] + 0x20))((longlong *)param_1[0xb],local_18);
  local_b = (undefined1)(int)*(float *)(param_1[3] + 800);
  (**(code **)(*(longlong *)param_1[0xb] + 0x28))((longlong *)param_1[0xb],local_18);
  local_res10[0] = 0;
  local_res8[0] = 0;
  uVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x80))
                    ((longlong *)param_1[0xb],local_res10,local_res8,DAT_14c790ff5);
  if (((int)uVar1 == 0x2d) || ((int)uVar1 == 0x11)) {
    *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xbf;
    if (local_res8[0] == 0) {
      uVar1 = 2;
    }
    else {
      *(int *)(param_1 + 0xd) = local_res8[0];
      uVar1 = (**(code **)(*param_1 + 0x130))(param_1,local_res10[0],0);
      if ((int)uVar1 == 1) {
        return 0x2d;
      }
    }
  }
  return uVar1;
}



// FUNCTION 1453b0cb0 FUN_1453b0cb0 body=299 status=ok
// SIG undefined FUN_1453b0cb0(void)

void FUN_1453b0cb0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  
  if ((*(byte *)((longlong)param_1 + 0x82) & 4) != 0) {
LAB_1453b0cda:
    FUN_1450f7250(param_1);
    return;
  }
  if (param_1[0xb] == 0) {
    iVar5 = FUN_1453b0de0(param_1,param_2,0);
    if (iVar5 == 1) {
      lVar2 = param_1[3];
      bVar4 = false;
      if (((*(uint *)(*(longlong *)(lVar2 + 0x2a0) + 0xc) >> 1 & 1) != 0) &&
         ((*(byte *)(lVar2 + 0x315) & 0x40) == 0)) {
        lVar3 = *(longlong *)(lVar2 + 0x348);
        iVar5 = *(int *)(lVar2 + 0x350);
        *(int *)(param_1 + 0xd) = iVar5;
        if ((lVar3 == 0) || (iVar5 == 0)) {
          *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
        }
        else {
          *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 0x12;
          bVar4 = true;
          iVar5 = (**(code **)(*param_1 + 0x120))(param_1,lVar3);
          if (iVar5 != 1) {
            return;
          }
          iVar5 = (**(code **)(*param_1 + 0x130))(param_1,lVar3,1);
          if (iVar5 != 1) {
            return;
          }
          if (((*(byte *)((longlong)param_1 + 0x82) & 0x40) == 0) &&
             (iVar5 = FUN_1453b1410(param_1,(int)param_1[0xd]), iVar5 != 1)) {
            return;
          }
          uVar1 = *(uint *)((longlong)param_1 + 0x34);
          param_1[0xc] = param_1[0xc] + (ulonglong)uVar1;
          *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar1;
          *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + uVar1;
        }
      }
      iVar5 = (**(code **)(*(longlong *)param_1[0xb] + 0x60))();
      if (((iVar5 == 1) && (!bVar4)) && (iVar5 = FUN_1453b1280(param_1), iVar5 == 1)) {
        FUN_1450f7250(param_1);
      }
    }
  }
  else {
    iVar5 = FUN_1453b1280();
    if (iVar5 == 1) goto LAB_1453b0cda;
  }
  return;
}



// FUNCTION 1453b0de0 FUN_1453b0de0 body=487 status=ok
// SIG undefined FUN_1453b0de0(void)

int FUN_1453b0de0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_28;
  byte local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_1c = 0xffffffff;
  lVar2 = *(longlong *)(lVar1 + 0x2a0);
  if (((((byte)*(undefined4 *)(lVar2 + 0xc) & 0x7c) == 4) && (*(longlong *)(lVar2 + 0x10) == 0)) &&
     (*(int *)(lVar2 + 4) == -1)) {
    iVar4 = 2;
  }
  else {
    local_40 = 0;
    bVar5 = 0;
    local_48 = 0x3f800000;
    local_3b = (undefined1)(int)*(float *)(lVar1 + 800);
    uVar6 = *(uint *)(lVar2 + 0xc) & 0x7c;
    if (uVar6 == 0xc) {
      bVar5 = 0x20;
    }
    *(byte *)(param_1 + 0x82) = bVar5 | *(byte *)(param_1 + 0x82) & 0xdf;
    local_3c = param_3;
    if (uVar6 == 0xc) {
      if (*(longlong *)(lVar1 + 0x348) == 0) {
        return 0x2e;
      }
      iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x28))
                        (AK::IAkStreamMgr::m_pStreamMgr,*(longlong *)(lVar1 + 0x348),
                         *(undefined4 *)(lVar1 + 0x350),&local_48,param_1 + 0x58);
    }
    else {
      uVar6 = *(uint *)(lVar2 + 0xc);
      if ((uVar6 >> 9 & 1) == 0) {
        if ((uVar6 & 0x500) == 0) {
          local_1c = *(undefined4 *)(lVar2 + 4);
        }
        local_34 = (uint)*(ushort *)(lVar2 + 0x1a);
        local_20 = (byte)uVar6 & 1;
        local_30 = 0;
        local_28 = 0;
        local_18 = 0;
        local_38 = (uint)((uVar6 >> 8 & 1) != 0);
        iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x30))
                          (AK::IAkStreamMgr::m_pStreamMgr,*(undefined4 *)(lVar2 + 4),&local_38,
                           &local_48,param_2,param_1 + 0x58,DAT_14c790ff5);
      }
      else {
        if ((uVar6 & 0x500) == 0) {
          local_1c = *(undefined4 *)(lVar2 + 4);
        }
        local_34 = (uint)*(ushort *)(lVar2 + 0x1a);
        local_30 = 0;
        local_20 = (byte)uVar6 & 1;
        local_28 = 0;
        local_18 = 0;
        local_38 = (uint)((uVar6 >> 8 & 1) != 0);
        iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x38))
                          (AK::IAkStreamMgr::m_pStreamMgr,*(undefined8 *)(lVar2 + 0x10),&local_38,
                           &local_48,param_2,param_1 + 0x58,DAT_14c790ff5);
      }
    }
    iVar4 = 1;
    if (iVar3 != 1) {
      iVar4 = iVar3;
    }
  }
  return iVar4;
}



// FUNCTION 1453b0fd0 FUN_1453b0fd0 body=330 status=ok
// SIG undefined FUN_1453b0fd0(void)

undefined8 FUN_1453b0fd0(longlong param_1,longlong param_2,char param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  iVar3 = *(int *)(param_1 + 0x70);
  bVar6 = *(byte *)(param_1 + 0x82) & 0xf7 | param_3 << 3;
  uVar4 = *(int *)(param_1 + 0x68) + iVar3;
  *(byte *)(param_1 + 0x82) = bVar6;
  *(uint *)(param_1 + 0x70) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x74);
  iVar5 = *(int *)(param_1 + 0x68) - uVar2;
  *(int *)(param_1 + 0x68) = iVar5;
  *(ulonglong *)(param_1 + 0x60) = param_2 + (ulonglong)uVar2;
  *(uint *)(param_1 + 0x6c) = iVar3 + uVar2;
  if (*(short *)(param_1 + 0x80) == 1) {
    uVar2 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7c);
  }
  if (uVar4 < uVar2) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    *(uint *)(param_1 + 0x68) = (iVar5 - uVar4) + uVar2;
    if (*(short *)(param_1 + 0x80) == 1) {
      *(byte *)(param_1 + 0x82) = bVar6 | 1;
      return 1;
    }
    iVar3 = FUN_1453b1410(param_1,*(undefined4 *)(param_1 + 0x78));
    if (iVar3 != 1) {
      return 2;
    }
    if (*(short *)(param_1 + 0x80) == 0) {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 0x40;
      *(undefined2 *)(param_1 + 0x80) = 0;
      return 1;
    }
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 0x40;
    sVar1 = *(short *)(param_1 + 0x80) + -1;
    *(short *)(param_1 + 0x80) = sVar1;
    if (sVar1 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),local_18)
      ;
      local_10 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18)
      ;
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1453b1120 FUN_1453b1120 body=26 status=ok
// SIG undefined FUN_1453b1120(void)

void FUN_1453b1120(longlong param_1,char param_2,longlong param_3)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x7c);
    return;
  }
  *(undefined8 *)(param_3 + 4) = 0;
  return;
}



// FUNCTION 1453b1140 FUN_1453b1140 body=118 status=ok
// SIG undefined FUN_1453b1140(void)

undefined8 FUN_1453b1140(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1453ae860();
  iVar3 = (**(code **)(*param_1 + 0x138))(param_1,iVar2,(longlong)param_1 + 0x2c);
  if (iVar3 != 1) {
    return 2;
  }
  lVar1 = param_1[3];
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  *(byte *)(lVar1 + 0x315) = *(byte *)(lVar1 + 0x315) & 0x3f;
  *(byte *)(lVar1 + 0x316) = *(byte *)(lVar1 + 0x316) & 0xfe;
  *(int *)(lVar1 + 0x30c) = iVar2 - iVar3;
  return 1;
}



// FUNCTION 1453b11c0 FUN_1453b11c0 body=181 status=ok
// SIG undefined FUN_1453b11c0(void)

undefined8 FUN_1453b11c0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined4 local_res10;
  undefined1 local_18 [4];
  longlong local_14;
  
  if (param_2 < *(uint *)(param_1 + 5)) {
    iVar1 = (**(code **)(*param_1 + 0x128))();
    if (iVar1 == 1) {
      iVar1 = FUN_1453b1410(param_1,local_res10);
      if (iVar1 == 1) {
        *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)((longlong)param_1 + 0x54);
        (**(code **)(*(longlong *)param_1[0xb] + 0x20))((longlong *)param_1[0xb],local_18);
        if (*(short *)((longlong)param_1 + 0x54) == 1) {
          local_14 = 0;
        }
        else {
          local_14 = param_1[0xf];
        }
        (**(code **)(*(longlong *)param_1[0xb] + 0x28))((longlong *)param_1[0xb],local_18);
        *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xbe;
        *(byte *)(param_1 + 4) =
             *(byte *)(param_1 + 4) ^
             (*(byte *)(param_1[3] + 0x315) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1453b1280 FUN_1453b1280 body=400 status=ok
// SIG undefined FUN_1453b1280(void)

ulonglong FUN_1453b1280(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_1[3] + 0x315) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
  while( true ) {
    iVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x80))
                      ((longlong *)param_1[0xb],&local_res8,param_1 + 0xd,DAT_14c790ff5);
    if (iVar1 == 0x2e) {
      return 0x3f;
    }
    if (((iVar1 != 0x2d) && (iVar1 != 0x11)) || (local_res8 == 0)) break;
    uVar4 = (**(code **)(*param_1 + 0x120))(param_1);
    if ((int)uVar4 != 0x3f) {
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      if ((*(byte *)(param_1[3] + 0x315) & 0x40) == 0) {
        iVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x70))((longlong *)param_1[0xb],0);
        iVar1 = *(int *)((longlong)param_1 + 0x74);
        uVar2 = (**(code **)(*param_1 + 0x130))(param_1,local_res8,0);
        uVar4 = (ulonglong)uVar2;
        uVar2 = *(int *)((longlong)param_1 + 0x34) - (iVar1 + iVar3);
        *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar2;
        param_1[0xc] = param_1[0xc] + (ulonglong)uVar2;
        *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + uVar2;
      }
      else {
        uVar2 = FUN_1453b1140(param_1);
        uVar4 = (ulonglong)uVar2;
        if ((int)param_1[0xd] != 0) {
          if ((*(byte *)((longlong)param_1 + 0x82) & 2) != 0) {
            *(undefined4 *)(param_1 + 0xd) = 0;
            *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
            *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
            return uVar4;
          }
          (**(code **)(*(longlong *)param_1[0xb] + 0x88))();
          *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
          *(undefined4 *)(param_1 + 0xd) = 0;
          return uVar4;
        }
      }
      *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
      return uVar4;
    }
  }
  return 2;
}



// FUNCTION 1453b1410 FUN_1453b1410 body=85 status=ok
// SIG undefined FUN_1453b1410(void)

undefined8 FUN_1453b1410(longlong param_1,int param_2)

{
  int iVar1;
  int local_res8 [2];
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
                    (*(longlong **)(param_1 + 0x58),param_2,0,local_res8);
  if (iVar1 != 1) {
    return 2;
  }
  *(int *)(param_1 + 0x70) = local_res8[0];
  *(int *)(param_1 + 0x74) = param_2 - local_res8[0];
  return 1;
}



// FUNCTION 1453b1470 FUN_1453b1470 body=116 status=ok
// SIG undefined FUN_1453b1470(void)

void FUN_1453b1470(longlong param_1)

{
  undefined1 local_18 [4];
  undefined8 local_14;
  
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_1 + 0x54);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),local_18);
  if (*(short *)(param_1 + 0x54) == 1) {
    local_14 = 0;
  }
  else {
    local_14 = *(undefined8 *)(param_1 + 0x78);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18);
  *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xbe;
  *(byte *)(param_1 + 0x20) =
       *(byte *)(param_1 + 0x20) ^
       (*(byte *)(*(longlong *)(param_1 + 0x18) + 0x315) >> 4 ^ *(byte *)(param_1 + 0x20)) & 2;
  return;
}



// FUNCTION 1453b14f0 FUN_1453b14f0 body=117 status=ok
// SIG undefined FUN_1453b14f0(void)

undefined8 FUN_1453b14f0(longlong param_1,uint *param_2)

{
  void *_Dst;
  
  if ((*(byte *)(param_1 + 0x82) & 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
    return 1;
  }
  _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)*param_2);
  *(void **)(param_1 + 0x10) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  memcpy(_Dst,*(void **)(param_2 + 2),(ulonglong)*param_2);
  return 1;
}



// FUNCTION 1453b1570 FUN_1453b1570 body=125 status=ok
// SIG undefined FUN_1453b1570(void)

undefined8 * FUN_1453b1570(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149d47100;
  if (((void *)param_1[2] != (void *)0x0) && ((*(byte *)((longlong)param_1 + 0x82) & 0x10) == 0)) {
    AK::MemoryMgr::Free(5,(void *)param_1[2]);
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 8))();
    param_1[0xb] = 0;
    FUN_1453ae430(param_1);
  }
  FUN_1453ae400(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1453b15f0 FUN_1453b15f0 body=18 status=ok
// SIG undefined FUN_1453b15f0(void)

undefined8 FUN_1453b15f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 0;
}



// FUNCTION 1453b1610 FUN_1453b1610 body=45 status=ok
// SIG undefined FUN_1453b1610(void)

undefined8 FUN_1453b1610(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      FUN_144d539c0();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 0;
}



// FUNCTION 1453b1640 FUN_1453b1640 body=26 status=ok
// SIG undefined FUN_1453b1640(void)

undefined8 FUN_1453b1640(longlong param_1)

{
  if (*(int *)(param_1 + 8) < 0) {
    return 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}



// FUNCTION 1453b1660 FUN_1453b1660 body=208 status=ok
// SIG undefined FUN_1453b1660(void)

longlong FUN_1453b1660(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  if (iVar4 < 0) {
    return 0;
  }
  iVar1 = (int)param_1[2];
  if (iVar1 != 0) {
    iVar3 = *(int *)((longlong)param_1 + 0xc) - iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if (0 < iVar3) {
      memmove((void *)*param_1,(void *)(*param_1 + (longlong)iVar1),(longlong)iVar3);
      iVar4 = (int)param_1[1];
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (iVar4 - *(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar4 = param_2 + 0x1000 + *(int *)((longlong)param_1 + 0xc);
    if (*param_1 == 0) {
      lVar2 = FUN_144d539a0((longlong)iVar4);
    }
    else {
      lVar2 = FUN_144d539b0(*param_1,(longlong)iVar4);
    }
    if (lVar2 == 0) {
      if (*param_1 != 0) {
        FUN_144d539c0();
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      return 0;
    }
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = iVar4;
  }
  return (longlong)*(int *)((longlong)param_1 + 0xc) + *param_1;
}



// FUNCTION 1453b1730 FUN_1453b1730 body=29 status=ok
// SIG undefined FUN_1453b1730(void)

undefined8 FUN_1453b1730(longlong param_1,int param_2)

{
  if ((-1 < *(int *)(param_1 + 8)) &&
     (param_2 = param_2 + *(int *)(param_1 + 0xc), param_2 <= *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 0xc) = param_2;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 1453b1750 FUN_1453b1750 body=391 status=ok
// SIG undefined FUN_1453b1750(void)

int FUN_1453b1750(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  longlong *plVar10;
  int *local_38;
  int local_30;
  longlong local_28;
  undefined4 local_20;
  
  lVar5 = *param_1;
  iVar7 = *(int *)((longlong)param_1 + 0xc) - (int)param_1[2];
  piVar1 = (int *)(lVar5 + (int)param_1[2]);
  if (-1 < (int)param_1[1]) {
    iVar9 = (int)param_1[3];
    if (iVar9 == 0) {
      if (iVar7 < 0x1b) {
        return 0;
      }
      if (*piVar1 != 0x5367674f) goto LAB_1453b1845;
      iVar9 = *(byte *)((longlong)piVar1 + 0x1a) + 0x1b;
      if (iVar7 < iVar9) {
        return 0;
      }
      iVar4 = 0;
      if (*(byte *)((longlong)piVar1 + 0x1a) != 0) {
        iVar6 = *(int *)((longlong)param_1 + 0x1c);
        pbVar8 = (byte *)((longlong)piVar1 + 0x1b);
        do {
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 + (uint)bVar2;
          iVar4 = iVar4 + 1;
          *(int *)((longlong)param_1 + 0x1c) = iVar6;
        } while (iVar4 < (int)(uint)*(byte *)((longlong)piVar1 + 0x1a));
      }
      *(int *)(param_1 + 3) = iVar9;
    }
    plVar10 = param_1 + 3;
    if (*(int *)((longlong)param_1 + 0x1c) + iVar9 <= iVar7) {
      iVar9 = *(int *)((longlong)piVar1 + 0x16);
      *(undefined4 *)((longlong)piVar1 + 0x16) = 0;
      local_30 = (int)*plVar10;
      local_28 = (longlong)piVar1 + (longlong)local_30;
      local_20 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_38 = piVar1;
      FUN_1453b1e40(&local_38);
      if (iVar9 == *(int *)((longlong)piVar1 + 0x16)) {
        lVar5 = (longlong)(int)param_1[2] + *param_1;
        if (param_2 != (longlong *)0x0) {
          *param_2 = lVar5;
          *(int *)(param_2 + 1) = (int)*plVar10;
          param_2[2] = (int)*plVar10 + lVar5;
          *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_1 + 0x1c);
        }
        iVar7 = (int)*plVar10 + *(int *)((longlong)param_1 + 0x1c);
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar7;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        *(int *)plVar10 = 0;
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
        return iVar7;
      }
      *(int *)((longlong)piVar1 + 0x16) = iVar9;
      lVar5 = *param_1;
LAB_1453b1845:
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      pvVar3 = memchr((void *)((longlong)piVar1 + 1),0x4f,(longlong)(iVar7 + -1));
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)(*(int *)((longlong)param_1 + 0xc) + lVar5);
      }
      *(int *)(param_1 + 2) = (int)pvVar3 - (int)lVar5;
      return (int)piVar1 - (int)pvVar3;
    }
  }
  return 0;
}



// FUNCTION 1453b18e0 FUN_1453b18e0 body=895 status=ok
// SIG undefined FUN_1453b18e0(void)

undefined8 FUN_1453b18e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  byte *pbVar18;
  byte bVar19;
  void *_Src;
  
  lVar7 = *param_2;
  _Src = (void *)param_2[2];
  iVar15 = 0;
  iVar16 = (int)param_2[3];
  bVar3 = *(byte *)(lVar7 + 5);
  cVar4 = *(char *)(lVar7 + 4);
  uVar9 = *(undefined8 *)(lVar7 + 6);
  iVar12 = *(int *)(lVar7 + 0xe);
  iVar8 = *(int *)(lVar7 + 0x12);
  bVar19 = *(byte *)(lVar7 + 0x1a);
  if ((param_1 != (longlong *)0x0) && (_Dst = (void *)*param_1, _Dst != (void *)0x0)) {
    iVar11 = (int)param_1[2];
    iVar6 = *(int *)((longlong)param_1 + 0x34);
    if (iVar11 != 0) {
      iVar10 = *(int *)((longlong)param_1 + 0xc) - iVar11;
      *(int *)((longlong)param_1 + 0xc) = iVar10;
      if (iVar10 != 0) {
        memmove(_Dst,(void *)((longlong)iVar11 + (longlong)_Dst),(longlong)iVar10);
      }
      *(undefined4 *)(param_1 + 2) = 0;
    }
    if (iVar6 != 0) {
      iVar11 = *(int *)((longlong)param_1 + 0x2c) - iVar6;
      if (iVar11 != 0) {
        memmove((void *)param_1[3],(void *)(param_1[3] + (longlong)iVar6 * 4),(longlong)iVar11 << 2)
        ;
        memmove((void *)param_1[4],(void *)(param_1[4] + (longlong)iVar6 * 8),
                (longlong)(*(int *)((longlong)param_1 + 0x2c) - iVar6) << 3);
      }
      *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) - iVar6;
      *(int *)(param_1 + 6) = (int)param_1[6] - iVar6;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    if ((iVar12 == (int)param_1[0x2c]) && (cVar4 == '\0')) {
      lVar17 = (longlong)(int)(uint)bVar19;
      iVar12 = FUN_1453b20a0(param_1);
      if (iVar12 == 0) {
        if (iVar8 != *(int *)((longlong)param_1 + 0x164)) {
          iVar12 = (int)param_1[6];
          if (iVar12 < *(int *)((longlong)param_1 + 0x2c)) {
            iVar11 = *(int *)((longlong)param_1 + 0xc);
            uVar13 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x2c) - iVar12);
            pbVar18 = (byte *)(param_1[3] + (longlong)iVar12 * 4);
            do {
              bVar19 = *pbVar18;
              pbVar18 = pbVar18 + 4;
              iVar11 = iVar11 - (uint)bVar19;
              *(int *)((longlong)param_1 + 0xc) = iVar11;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          piVar1 = (int *)((longlong)param_1 + 0x2c);
          *piVar1 = (int)param_1[6];
          if (*(int *)((longlong)param_1 + 0x164) != -1) {
            *(undefined4 *)(param_1[3] + (longlong)(int)param_1[6] * 4) = 0x400;
            *piVar1 = *piVar1 + 1;
            *(int *)(param_1 + 6) = (int)param_1[6] + 1;
          }
        }
        iVar12 = iVar15;
        bVar19 = bVar3 & 2;
        if (((bVar3 & 1) != 0) &&
           (((iVar12 = 0, *(int *)((longlong)param_1 + 0x2c) < 1 ||
             (iVar11 = *(int *)(param_1[3] + -4 + (longlong)*(int *)((longlong)param_1 + 0x2c) * 4),
             (char)iVar11 != -1)) || (iVar11 == 0x400)))) {
          bVar19 = 0;
          if (lVar17 != 0) {
            lVar14 = 0;
            do {
              bVar5 = *(byte *)(lVar14 + 0x1b + lVar7);
              _Src = (void *)((longlong)_Src + (ulonglong)bVar5);
              iVar16 = iVar16 - (uint)bVar5;
              iVar15 = iVar15 + 1;
              iVar12 = iVar15;
              bVar19 = 0;
              if (bVar5 < 0xff) break;
              lVar14 = lVar14 + 1;
            } while (lVar14 < lVar17);
          }
        }
        if (iVar16 != 0) {
          iVar15 = FUN_1453b1ff0(param_1,iVar16);
          if (iVar15 != 0) {
            return 0xffffffff;
          }
          memcpy((void *)((longlong)*(int *)((longlong)param_1 + 0xc) + *param_1),_Src,
                 (longlong)iVar16);
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar16;
        }
        lVar14 = (longlong)iVar12;
        iVar16 = -1;
        if (lVar14 < lVar17) {
          do {
            bVar5 = *(byte *)(lVar14 + 0x1b + lVar7);
            *(uint *)(param_1[3] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 4) = (uint)bVar5;
            *(undefined8 *)(param_1[4] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 8) =
                 0xffffffffffffffff;
            if (bVar19 != 0) {
              puVar2 = (uint *)(param_1[3] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 4);
              *puVar2 = *puVar2 | 0x100;
              bVar19 = 0;
            }
            if (bVar5 == 0xff) {
              *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
            }
            else {
              iVar16 = *(int *)((longlong)param_1 + 0x2c);
              *(int *)((longlong)param_1 + 0x2c) = iVar16 + 1;
              *(int *)(param_1 + 6) = iVar16 + 1;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar17);
          if (iVar16 != -1) {
            *(undefined8 *)(param_1[4] + (longlong)iVar16 * 8) = uVar9;
          }
        }
        if ((bVar3 & 4) != 0) {
          *(undefined4 *)(param_1 + 0x2b) = 1;
          if (0 < *(int *)((longlong)param_1 + 0x2c)) {
            puVar2 = (uint *)(param_1[3] + -4 + (longlong)*(int *)((longlong)param_1 + 0x2c) * 4);
            *puVar2 = *puVar2 | 0x200;
          }
        }
        *(int *)((longlong)param_1 + 0x164) = iVar8 + 1;
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1453b1c60 FUN_1453b1c60 body=25 status=ok
// SIG undefined FUN_1453b1c60(void)

undefined8 FUN_1453b1c60(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_1453b2180(param_1,param_2,1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453b1c80 FUN_1453b1c80 body=202 status=ok
// SIG undefined FUN_1453b1c80(void)

undefined8 FUN_1453b1c80(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    memset(param_1,0,0x178);
    *(undefined4 *)(param_1 + 1) = 0x4000;
    *(undefined4 *)(param_1 + 5) = 0x400;
    lVar1 = FUN_144d539a0(0x4000);
    *param_1 = lVar1;
    lVar1 = FUN_144d539a0((longlong)(int)param_1[5] << 2);
    param_1[3] = lVar1;
    lVar1 = FUN_144d539a0((longlong)(int)param_1[5] << 3);
    param_1[4] = lVar1;
    if (*param_1 != 0) {
      if ((param_1[3] != 0) && (lVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x2c) = param_2;
        return 0;
      }
      FUN_144d539c0();
    }
    if (param_1[3] != 0) {
      FUN_144d539c0();
    }
    if (param_1[4] != 0) {
      FUN_144d539c0();
    }
    memset(param_1,0,0x178);
  }
  return 0xffffffff;
}



// FUNCTION 1453b1d50 FUN_1453b1d50 body=79 status=ok
// SIG undefined FUN_1453b1d50(void)

undefined8 FUN_1453b1d50(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      FUN_144d539c0();
    }
    if (param_1[3] != 0) {
      FUN_144d539c0();
    }
    if (param_1[4] != 0) {
      FUN_144d539c0();
    }
    memset(param_1,0,0x178);
  }
  return 0;
}



// FUNCTION 1453b1da0 FUN_1453b1da0 body=68 status=ok
// SIG undefined FUN_1453b1da0(void)

undefined8 FUN_1453b1da0(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x154) = 0;
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 1453b1df0 FUN_1453b1df0 body=74 status=ok
// SIG undefined FUN_1453b1df0(void)

undefined8 FUN_1453b1df0(longlong *param_1,undefined4 param_2)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x154) = 0;
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 1453b1e40 FUN_1453b1e40 body=202 status=ok
// SIG undefined FUN_1453b1e40(void)

void FUN_1453b1e40(longlong *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar4 = 0;
    *(undefined1 *)(*param_1 + 0x16) = 0;
    *(undefined1 *)(*param_1 + 0x17) = 0;
    *(undefined1 *)(*param_1 + 0x18) = 0;
    *(undefined1 *)(*param_1 + 0x19) = 0;
    uVar3 = uVar4;
    if (0 < (longlong)(int)param_1[1]) {
      uVar5 = uVar4;
      do {
        pbVar1 = (byte *)(*param_1 + uVar5);
        uVar5 = uVar5 + 1;
        uVar3 = (ulonglong)
                ((int)uVar3 << 8 ^
                *(uint *)(&DAT_149d47240 + ((ulonglong)*pbVar1 ^ uVar3 >> 0x18) * 4));
      } while ((longlong)uVar5 < (longlong)(int)param_1[1]);
    }
    uVar2 = (uint)uVar3;
    if (0 < (longlong)(int)param_1[3]) {
      do {
        pbVar1 = (byte *)(param_1[2] + uVar4);
        uVar4 = uVar4 + 1;
        uVar2 = (int)uVar3 << 8 ^
                *(uint *)(&DAT_149d47240 + ((ulonglong)*pbVar1 ^ uVar3 >> 0x18) * 4);
        uVar3 = (ulonglong)uVar2;
      } while ((longlong)uVar4 < (longlong)(int)param_1[3]);
    }
    *(char *)(*param_1 + 0x16) = (char)uVar2;
    *(char *)(*param_1 + 0x17) = (char)(uVar2 >> 8);
    *(char *)(*param_1 + 0x18) = (char)(uVar2 >> 0x10);
    *(char *)(*param_1 + 0x19) = (char)(uVar2 >> 0x18);
  }
  return;
}



// FUNCTION 1453b1f10 FUN_1453b1f10 body=11 status=ok
// SIG undefined FUN_1453b1f10(void)

byte FUN_1453b1f10(longlong *param_1)

{
  return *(byte *)(*param_1 + 5) & 2;
}



// FUNCTION 1453b1f20 FUN_1453b1f20 body=86 status=ok
// SIG undefined FUN_1453b1f20(void)

undefined8 FUN_1453b1f20(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 6);
}



// FUNCTION 1453b1f80 FUN_1453b1f80 body=35 status=ok
// SIG undefined FUN_1453b1f80(void)

undefined4 FUN_1453b1f80(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0xe);
}



// FUNCTION 1453b1fb0 FUN_1453b1fb0 body=54 status=ok
// SIG undefined FUN_1453b1fb0(void)

int FUN_1453b1fb0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  iVar3 = 0;
  uVar5 = (ulonglong)*(byte *)(*param_1 + 0x1a);
  if (uVar5 != 0) {
    pcVar4 = (char *)(*param_1 + 0x1b);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar3 + 1;
      if (cVar1 == -1) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return iVar3;
}



// FUNCTION 1453b1ff0 FUN_1453b1ff0 body=161 status=ok
// SIG undefined FUN_1453b1ff0(void)

undefined8 FUN_1453b1ff0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (int)param_1[1];
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 - param_2) {
    return 0;
  }
  if (iVar1 <= 0x7fffffff - param_2) {
    iVar1 = iVar1 + param_2;
    iVar3 = iVar1 + 0x400;
    if (0x7ffffbfe < iVar1) {
      iVar3 = iVar1;
    }
    lVar2 = FUN_144d539b0(*param_1);
    if (lVar2 != 0) {
      *(int *)(param_1 + 1) = iVar3;
      *param_1 = lVar2;
      return 0;
    }
  }
  if (*param_1 != 0) {
    FUN_144d539c0();
  }
  if (param_1[3] != 0) {
    FUN_144d539c0();
  }
  if (param_1[4] != 0) {
    FUN_144d539c0();
  }
  memset(param_1,0,0x178);
  return 0xffffffff;
}



// FUNCTION 1453b20a0 FUN_1453b20a0 body=213 status=ok
// SIG undefined FUN_1453b20a0(void)

undefined8 FUN_1453b20a0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (int)param_1[5];
  if (*(int *)((longlong)param_1 + 0x2c) < iVar1 - param_2) {
    return 0;
  }
  if (iVar1 <= 0x7fffffff - param_2) {
    iVar1 = iVar1 + param_2;
    iVar3 = iVar1 + 0x20;
    if (0x7fffffde < iVar1) {
      iVar3 = iVar1;
    }
    lVar2 = FUN_144d539b0(param_1[3]);
    if (lVar2 != 0) {
      param_1[3] = lVar2;
      lVar2 = FUN_144d539b0(param_1[4]);
      if (lVar2 != 0) {
        param_1[4] = lVar2;
        *(int *)(param_1 + 5) = iVar3;
        return 0;
      }
    }
  }
  if (*param_1 != 0) {
    FUN_144d539c0();
  }
  if (param_1[3] != 0) {
    FUN_144d539c0();
  }
  if (param_1[4] != 0) {
    FUN_144d539c0();
  }
  memset(param_1,0,0x178);
  return 0xffffffff;
}



// FUNCTION 1453b2180 FUN_1453b2180 body=270 status=ok
// SIG undefined FUN_1453b2180(void)

undefined8 FUN_1453b2180(longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  uVar6 = *(uint *)((longlong)param_1 + 0x34);
  uVar7 = (ulonglong)(int)uVar6;
  if ((int)param_1[6] <= (int)uVar6) {
    return 0;
  }
  puVar8 = (uint *)(param_1[3] + uVar7 * 4);
  uVar2 = *puVar8;
  if ((uVar2 >> 10 & 1) != 0) {
    param_1[0x2d] = param_1[0x2d] + 1;
    *(uint *)((longlong)param_1 + 0x34) = uVar6 + 1;
    return 0xffffffff;
  }
  if ((param_2 != (longlong *)0x0) || (param_3 != 0)) {
    uVar5 = uVar2 & 0xff;
    uVar4 = uVar2 & 0x200;
    if (uVar5 == 0xff) {
      uVar5 = 0xff;
      do {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar3 = *puVar1 & 0xff;
        if ((*puVar1 & 0x200) != 0) {
          uVar4 = 0x200;
        }
        uVar5 = uVar5 + uVar3;
      } while (uVar3 == 0xff);
    }
    if (param_2 != (longlong *)0x0) {
      *(uint *)(param_2 + 2) = uVar4;
      *(uint *)((longlong)param_2 + 0xc) = uVar2 & 0x100;
      *param_2 = (longlong)(int)param_1[2] + *param_1;
      param_2[4] = param_1[0x2d];
      param_2[3] = *(longlong *)(param_1[4] + (longlong)(int)uVar6 * 8);
      *(uint *)(param_2 + 1) = uVar5;
    }
    if (param_3 != 0) {
      *(uint *)(param_1 + 2) = (int)param_1[2] + uVar5;
      param_1[0x2d] = param_1[0x2d] + 1;
      *(uint *)((longlong)param_1 + 0x34) = uVar6 + 1;
    }
  }
  return 1;
}



// FUNCTION 1453b2290 FUN_1453b2290 body=240 status=ok
// SIG undefined FUN_1453b2290(void)

longlong FUN_1453b2290(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [24];
  code *local_10;
  
  lVar2 = FUN_14556d6b0(local_28,param_1,param_2);
  if (lVar2 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = -0x81;
    }
    return 0;
  }
  lVar3 = FUN_144d539a0(0x2b40);
  iVar1 = -0x81;
  if (lVar3 != 0) {
    iVar1 = FUN_1453b4af0(lVar3,lVar2,local_28,0,0);
    if (-1 < iVar1) {
      if (param_3 != (int *)0x0) {
        *param_3 = 0;
      }
      iVar1 = FUN_1453b4d10(lVar3);
      if (-1 < iVar1) {
        return lVar3;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar1;
      }
      FUN_144d539c0(lVar3);
      goto LAB_1453b235e;
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1453b4a10(lVar3);
    FUN_144d539c0(lVar3);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
LAB_1453b235e:
  (*local_10)(lVar2);
  return 0;
}



// FUNCTION 1453b2380 FUN_1453b2380 body=32 status=ok
// SIG undefined FUN_1453b2380(void)

void FUN_1453b2380(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1453b4a10();
    FUN_144d539c0(param_1);
  }
  return;
}



// FUNCTION 1453b23a0 FUN_1453b23a0 body=983 status=ok
// SIG undefined FUN_1453b23a0(void)

undefined1 * FUN_1453b23a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong local_res10;
  longlong local_res18;
  
  iVar9 = *(int *)(param_1 + 0x78);
  if (iVar9 < 2) {
    return (undefined1 *)0xffffff7d;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return (undefined1 *)0xffffff76;
  }
  if (param_2 < 0) {
    return (undefined1 *)0xffffff7d;
  }
  uVar18 = 0;
  iVar11 = *(int *)(param_1 + 0x2c);
  uVar14 = uVar18;
  do {
    iVar13 = (int)uVar14;
    iVar5 = (iVar11 - iVar13 >> 1) + iVar13;
    iVar6 = iVar5;
    if (param_2 < *(longlong *)((longlong)iVar5 * 0x178 + 0x18 + *(longlong *)(param_1 + 0x30))) {
      iVar6 = iVar13;
      iVar11 = iVar5;
    }
    uVar14 = (ulonglong)iVar6;
  } while (1 < iVar11 - iVar6);
  lVar17 = uVar14 * 0x178 + *(longlong *)(param_1 + 0x30);
  lVar1 = *(longlong *)(lVar17 + 0x28);
  lVar8 = *(longlong *)(lVar17 + 0x20);
  lVar10 = param_2 - *(longlong *)(lVar17 + 0x18);
  uVar16 = (uint)((ulonglong)lVar1 >> 0x3f);
  uVar12 = -(int)(lVar8 >> 0x3f);
  if (uVar16 == uVar12) {
    lVar3 = lVar8 - lVar1;
  }
  else {
    lVar3 = param_1;
    if (uVar12 == 0) {
      if (lVar1 <= lVar8 + -0x8000000000000000) {
        lVar3 = ((lVar8 + -0x8000000000000000) - lVar1) + -0x8000000000000000;
      }
    }
    else if (0x7fffffffffffffff - lVar1 <= -lVar8 + -2) {
      lVar3 = (0x7fffffffffffffff - lVar1) - (-lVar8 + 0x7fffffffffffffff);
    }
  }
  if (lVar3 - *(int *)(lVar17 + 0x3c) <= lVar10) {
    return (undefined1 *)0xffffff7d;
  }
  lVar10 = lVar10 + *(int *)(lVar17 + 0x3c);
  lVar8 = lVar1;
  if (0x7fffffffffffffff - lVar10 < lVar1) {
    lVar10 = lVar10 + -0x8000000000000000 + lVar1;
    lVar8 = -0x8000000000000000;
  }
  lVar8 = lVar8 + lVar10;
  if (lVar8 == -1) {
    return (undefined1 *)0xffffff7d;
  }
  local_res10 = param_2;
  FUN_1453b3380(&local_res10,lVar8,lVar1);
  if ((((int)uVar14 != *(int *)(param_1 + 0x7c)) || (iVar9 < 4)) ||
     (local_res18 = *(longlong *)(param_1 + 0x88), local_res18 == -1)) goto LAB_1453b25bb;
  iVar9 = *(int *)(param_1 + 0x2b34) - *(int *)(param_1 + 0x2b30);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  FUN_1453b32e0(&local_res18,local_res18,-iVar9);
  uVar12 = -(int)(lVar8 >> 0x3f);
  if (local_res18 < 0 == uVar12) {
    uVar4 = lVar8 - local_res18;
  }
  else if (uVar12 == 0) {
    if (lVar8 + -0x8000000000000000 < -0x8000000000000000 - (-0x8000000000000000 - local_res18))
    goto LAB_1453b25bb;
    uVar4 = (-0x8000000000000000 - local_res18) + lVar8 + -0x8000000000000000;
  }
  else {
    if (-lVar8 + -2 < 0x7fffffffffffffff - local_res18) goto LAB_1453b25bb;
    uVar4 = (0x7fffffffffffffff - local_res18) - (-lVar8 + 0x7fffffffffffffff);
  }
  if (uVar4 < 0x10e0) {
    *(int *)(param_1 + 0x80) = (int)uVar4;
    return (undefined1 *)0x0;
  }
LAB_1453b25bb:
  puVar2 = (undefined1 *)FUN_1453b5790(param_1,lVar8,uVar14 & 0xffffffff);
  if ((int)puVar2 < 0) {
    return puVar2;
  }
  lVar8 = param_1;
  if (((longlong)(ulonglong)*(uint *)(lVar17 + 0x3c) < local_res10) &&
     (0 < (longlong)(local_res10 - 0xf00U))) {
    uVar18 = local_res10 - 0xf00U;
  }
  do {
    iVar9 = *(int *)(param_1 + 0x29fc);
    uVar12 = *(uint *)(param_1 + 0x29f8);
    uVar14 = (ulonglong)(int)uVar12;
    lVar10 = *(longlong *)(param_1 + 0x88);
    if ((longlong)uVar14 < (longlong)iVar9) {
      plVar15 = (longlong *)(param_1 + (uVar14 * 5 + 0x47) * 8);
      uVar4 = uVar14;
      do {
        uVar12 = (uint)uVar4;
        lVar17 = *plVar15;
        uVar7 = -(int)(lVar17 >> 0x3f);
        if (uVar7 == uVar16) {
          lVar8 = lVar17 - lVar1;
LAB_1453b268c:
          if ((longlong)uVar18 < lVar8) break;
        }
        else if (uVar7 == 0) {
          if (lVar1 <= lVar17 + -0x8000000000000000) {
            lVar8 = ((lVar17 + -0x8000000000000000) - lVar1) + -0x8000000000000000;
            goto LAB_1453b268c;
          }
        }
        else if (0x7fffffffffffffff - lVar1 <= -lVar17 + -2) {
          lVar8 = (0x7fffffffffffffff - lVar1) - (-lVar17 + 0x7fffffffffffffff);
          goto LAB_1453b268c;
        }
        uVar12 = uVar12 + 1;
        uVar4 = (ulonglong)uVar12;
        uVar14 = uVar14 + 1;
        plVar15 = plVar15 + 5;
        lVar10 = lVar17;
      } while ((longlong)uVar14 < (longlong)iVar9);
      iVar9 = *(int *)(param_1 + 0x29fc);
    }
    *(longlong *)(param_1 + 0x88) = lVar10;
    *(uint *)(param_1 + 0x29f8) = uVar12;
    if ((int)uVar12 < iVar9) {
      uVar12 = -(int)(lVar10 >> 0x3f);
      if (uVar16 == uVar12) {
        lVar8 = lVar10 - lVar1;
      }
      else if (uVar12 == 0) {
        if (lVar1 <= lVar10 + -0x8000000000000000) {
          lVar8 = ((lVar10 + -0x8000000000000000) - lVar1) + -0x8000000000000000;
        }
      }
      else if (0x7fffffffffffffff - lVar1 <= -lVar10 + -2) {
        lVar8 = (0x7fffffffffffffff - lVar1) - (-lVar10 + 0x7fffffffffffffff);
      }
      if (lVar8 <= (longlong)uVar18) {
        *(int *)(param_1 + 0x80) = (int)local_res10 - (int)lVar8;
        return (undefined1 *)0x0;
      }
      goto LAB_1453b26e3;
    }
    iVar9 = FUN_1453b4d80(param_1,0,0xffffffffffffffff,0,1);
    if (iVar9 < 0) {
LAB_1453b26e3:
      return &DAT_ffffff77;
    }
  } while( true );
}



// FUNCTION 1453b2780 FUN_1453b2780 body=680 status=ok
// SIG undefined FUN_1453b2780(void)

ulonglong FUN_1453b2780(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x78) < 2) {
    return 0xffffff7d;
  }
LAB_1453b27d0:
  do {
    if (3 < *(int *)(param_1 + 0x78)) {
      if (*(int *)(param_1 + 0x28) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x7c);
      }
      iVar6 = *(int *)(param_1 + 0x29f8);
      iVar5 = *(int *)((longlong)iVar5 * 0x178 + 0x38 + *(longlong *)(param_1 + 0x30));
      if (iVar6 < *(int *)(param_1 + 0x29fc)) {
        iVar2 = *(int *)(param_1 + 0x80);
        lVar1 = param_1 + (longlong)iVar6 * 0x28;
        *(int *)(param_1 + 0x29f8) = iVar6 + 1;
        uVar3 = *(undefined8 *)(lVar1 + 0x220);
        iVar6 = FUN_14556b9f0(uVar3,*(undefined4 *)(lVar1 + 0x228));
        if (iVar6 < 0) {
          iVar7 = -0x88;
        }
        else {
          iVar7 = FUN_14556a890(uVar3,48000);
          iVar7 = iVar7 * iVar6;
          if (0x1680 < iVar7) {
            iVar7 = -0x88;
          }
        }
        iVar6 = iVar7;
        if (*(int *)(lVar1 + 0x230) != 0) {
          lVar10 = *(longlong *)(lVar1 + 0x238);
          lVar4 = *(longlong *)(param_1 + 0x88);
          if (lVar10 < 0) {
            if (lVar4 < 0) {
LAB_1453b2894:
              if ((int)((uint)(lVar4 < lVar10) - (uint)(lVar10 < lVar4)) < 1) goto LAB_1453b291d;
            }
            uVar11 = -(int)(lVar10 >> 0x3f);
            if ((uint)((ulonglong)lVar4 >> 0x3f) == uVar11) {
              if (lVar10 - lVar4 < (longlong)iVar7) {
                iVar6 = (int)(lVar10 - lVar4);
              }
            }
            else if (uVar11 == 0) {
              if ((lVar4 <= lVar10 + -0x8000000000000000) &&
                 (lVar10 = ((lVar10 + -0x8000000000000000) - lVar4) + -0x8000000000000000,
                 lVar10 < iVar7)) {
                iVar6 = (int)lVar10;
              }
            }
            else if ((0x7fffffffffffffff - lVar4 <= -lVar10 + -2) &&
                    (lVar10 = (0x7fffffffffffffff - lVar4) - (-lVar10 + 0x7fffffffffffffff),
                    lVar10 < iVar7)) {
              iVar6 = (int)lVar10;
            }
          }
          else {
            if (-1 < lVar4) goto LAB_1453b2894;
LAB_1453b291d:
            iVar6 = 0;
          }
        }
        lVar10 = *(longlong *)(param_1 + 0x2b28);
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x238);
        if (lVar10 == 0) {
          uVar8 = FUN_1453b62f0(param_1);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          lVar10 = *(longlong *)(param_1 + 0x2b28);
        }
        uVar8 = FUN_1453b6470(param_1,lVar10,lVar1 + 0x220,iVar7,iVar5);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        *(int *)(param_1 + 0x2b34) = iVar6;
        iVar9 = iVar2;
        if (iVar6 < iVar2) {
          iVar9 = iVar6;
        }
        *(int *)(param_1 + 0x2b30) = iVar9;
        uVar11 = iVar6 - iVar9;
        *(int *)(param_1 + 0x80) = iVar2 - iVar9;
        *(longlong *)(param_1 + 0x98) =
             *(longlong *)(param_1 + 0x98) + (longlong)*(int *)(lVar1 + 0x228);
        *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (longlong)(int)uVar11;
        if (0 < (int)uVar11) {
          *param_2 = lVar10 + (longlong)(iVar9 * iVar5) * 4;
          *param_3 = iVar7;
          return (ulonglong)uVar11;
        }
        goto LAB_1453b27d0;
      }
    }
    uVar8 = FUN_1453b4d80(param_1,0,0xffffffffffffffff,1,0);
    if ((int)uVar8 == -2) {
      return 0;
    }
    if ((int)uVar8 < 0) {
      return uVar8;
    }
  } while( true );
}



// FUNCTION 1453b2a30 FUN_1453b2a30 body=200 status=ok
// SIG undefined FUN_1453b2a30(void)

longlong FUN_1453b2a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      int *param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144d539a0(0x2b40);
  iVar1 = -0x81;
  if ((lVar2 != 0) && (iVar1 = FUN_1453b4af0(lVar2,param_1,param_2,param_3,param_4), -1 < iVar1)) {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
      iVar1 = FUN_1453b4d10(lVar2);
      *param_5 = iVar1;
      return lVar2;
    }
    FUN_1453b4d10(lVar2);
    return lVar2;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
  }
  if ((iVar1 != -0x80) && (lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1453b4a10(lVar2);
    FUN_144d539c0(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1453b2b00 FUN_1453b2b00 body=88 status=ok
// SIG undefined FUN_1453b2b00(void)

ulonglong FUN_1453b2b00(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_28 [32];
  
  uVar1 = FUN_1453b3540(param_1,*(undefined8 *)(param_1 + 0x30),local_28);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    uVar2 = FUN_1453b4d10(param_1);
    uVar1 = (uint)uVar2;
    if (uVar1 == 0) {
      return uVar2;
    }
  }
  if (uVar1 != 0xffffff80) {
    FUN_1453b4a10(param_1);
    FUN_144d539c0(param_1);
  }
  return (ulonglong)uVar1;
}



// FUNCTION 1453b2b60 FUN_1453b2b60 body=92 status=ok
// SIG undefined FUN_1453b2b60(void)

void FUN_1453b2b60(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x29fc) = 0;
  *(undefined4 *)(param_1 + 0x2b34) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_14556d190(*(longlong *)(param_1 + 0x30) + 0x158);
    *(undefined4 *)(param_1 + 0x78) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 2;
  return;
}



// FUNCTION 1453b2bc0 FUN_1453b2bc0 body=86 status=ok
// SIG undefined FUN_1453b2bc0(void)

undefined8 FUN_1453b2bc0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == *(longlong *)(param_1 + 0x48)) {
    return 0;
  }
  if ((*(code **)(param_1 + 8) != (code *)0x0) &&
     (iVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),param_2,0), iVar1 == 0)) {
    *(longlong *)(param_1 + 0x48) = param_2;
    FUN_1453b1640(param_1 + 0x58);
    return 0;
  }
  return 0xffffff80;
}



// FUNCTION 1453b2c20 FUN_1453b2c20 body=275 status=ok
// SIG undefined FUN_1453b2c20(void)

longlong FUN_1453b2c20(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  while( true ) {
    while( true ) {
      plVar3 = param_1 + 9;
      if ((0 < param_3) && (param_3 <= *plVar3)) {
        return -1;
      }
      plVar4 = param_1 + 9;
      iVar1 = FUN_1453b1750(param_1 + 0xb,param_2);
      if (-1 < iVar1) break;
      *plVar3 = *plVar3 - (longlong)iVar1;
    }
    if (iVar1 != 0) {
      lVar2 = *plVar4;
      *plVar4 = iVar1 + lVar2;
      return lVar2;
    }
    if (param_3 == 0) {
      return -1;
    }
    if (param_3 < 0) {
      iVar1 = 0x800;
    }
    else {
      lVar2 = ((longlong)*(int *)((longlong)param_1 + 100) - (longlong)*(int *)(param_1 + 0xd)) +
              *plVar4;
      if (param_3 <= lVar2) {
        return -1;
      }
      iVar1 = 0x800;
      if (param_3 - lVar2 < 0x800) {
        iVar1 = (int)param_3 - (int)lVar2;
      }
    }
    lVar2 = FUN_1453b1660(param_1 + 0xb,iVar1);
    if (lVar2 == 0) goto LAB_1453b2cfe;
    iVar1 = (*(code *)*param_1)(param_1[4],lVar2,iVar1);
    if (iVar1 < 1) break;
    FUN_1453b1730(param_1 + 0xb,iVar1);
  }
  if (iVar1 < 0) {
LAB_1453b2cfe:
    lVar2 = -0x80;
  }
  else {
    lVar2 = (ulonglong)((uint)(param_3 >> 0x3f) & 0x88) - 0x89;
  }
  return lVar2;
}



// FUNCTION 1453b2d40 FUN_1453b2d40 body=555 status=ok
// SIG undefined FUN_1453b2d40(void)

undefined1 *
FUN_1453b2d40(longlong param_1,longlong *param_2,undefined1 *param_3,int param_4,longlong param_5,
             int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res8;
  undefined1 *local_90;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uVar7;
  
  uVar10 = 0;
  local_90 = (undefined1 *)0xffffffffffffffff;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_78 = local_58;
  lStack_70 = lStack_50;
  local_res8 = 0x10000;
  puVar8 = param_3;
  puVar9 = param_3;
  do {
    puVar8 = puVar8 + -(longlong)local_res8;
    if ((longlong)puVar8 < 1) {
      puVar8 = (undefined1 *)0x0;
    }
    if (puVar8 != *(undefined1 **)(param_1 + 0x48)) {
      if ((*(code **)(param_1 + 8) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),puVar8), iVar2 != 0)) {
        return &DAT_ffffff80;
      }
      *(undefined1 **)(param_1 + 0x48) = puVar8;
      FUN_1453b1640(param_1 + 0x58);
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    puVar1 = puVar8;
    while (lVar4 < (longlong)puVar9) {
      puVar3 = (undefined1 *)FUN_1453b2c20(param_1,&local_58);
      if ((longlong)puVar3 < -1) {
        return puVar3;
      }
      if (puVar3 == (undefined1 *)0xffffffffffffffff) break;
      iVar2 = FUN_1453b1f80(&local_58);
      *(int *)((longlong)param_2 + 0x14) = iVar2;
      *param_2 = (longlong)puVar1;
      param_2[1] = (longlong)puVar3;
      *(int *)(param_2 + 2) = *(int *)(param_1 + 0x48) - (int)puVar3;
      lVar4 = FUN_1453b1f20(&local_58);
      param_2[3] = lVar4;
      if (iVar2 == param_4) {
        local_78 = *param_2;
        lStack_70 = param_2[1];
        uVar10 = 1;
        local_68 = (undefined4)param_2[2];
        uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_60 = (undefined4)param_2[3];
        uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
      }
      uVar11 = 0;
      uVar6 = 0;
      uVar5 = uVar11;
      uVar7 = uVar11;
      if (0 < (longlong)param_6) {
        do {
          uVar6 = (uint)uVar7;
          if (*(int *)(param_5 + uVar5 * 4) == iVar2) break;
          uVar6 = uVar6 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < (longlong)param_6);
      }
      puVar1 = puVar3 + 1;
      if ((int)uVar6 < param_6) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11;
      local_90 = puVar3;
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    if ((puVar8 == (undefined1 *)0x0) && ((longlong)local_90 < 0)) {
      return &DAT_ffffff77;
    }
    iVar2 = local_res8 * 2;
    local_res8 = 0x100000;
    if (iVar2 < 0x100000) {
      local_res8 = iVar2;
    }
    puVar9 = param_3;
    if ((longlong)(puVar8 + 0xff1a) < (longlong)param_3) {
      puVar9 = puVar8 + 0xff1a;
    }
    if (-1 < (longlong)local_90) {
      if ((int)uVar10 != 0) {
        *param_2 = local_78;
        param_2[1] = lStack_70;
        param_2[2] = CONCAT44(uStack_64,local_68);
        param_2[3] = CONCAT44(uStack_5c,uStack_60);
      }
      return (undefined1 *)0x0;
    }
  } while( true );
}



// FUNCTION 1453b2f70 FUN_1453b2f70 body=870 status=ok
// SIG undefined FUN_1453b2f70(void)

undefined1 *
FUN_1453b2f70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,int *param_5,
             int *param_6,longlong *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_88 [4];
  undefined8 local_68;
  int local_60;
  
  if (param_7 == (longlong *)0x0) {
    lVar4 = 0x7ffffffffffeffff;
    if (*(longlong *)(param_1 + 0x48) < 0x7ffffffffffeffff) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    lVar4 = FUN_1453b2c20(param_1,local_88,lVar4 + 0x10000);
    if (lVar4 < 0) {
      return (undefined1 *)0xffffff7c;
    }
    param_7 = local_88;
  }
  *(undefined4 *)(param_1 + 0x78) = 2;
  if (param_4 != (longlong *)0x0) {
    *param_5 = 0;
  }
  iVar1 = FUN_1453b1f10(param_7);
  while (iVar1 != 0) {
    uVar6 = 0;
    if (param_4 != (longlong *)0x0) {
      iVar1 = *param_5;
      lVar4 = *param_4;
      iVar2 = FUN_1453b1f80(param_7);
      uVar7 = uVar6;
      if (0 < iVar1) {
        do {
          if (*(int *)(lVar4 + uVar6 * 4) == iVar2) break;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)iVar1);
      }
      if ((int)uVar7 < iVar1) goto LAB_1453b32b0;
      uVar3 = FUN_1453b1f80(param_7);
      iVar2 = *param_5;
      iVar1 = *param_6;
      lVar4 = *param_4;
      if (iVar1 <= iVar2) {
        if (iVar1 < 0x10000000) {
          iVar1 = iVar1 * 2 + 1;
          lVar4 = FUN_144d539b0(lVar4,(longlong)iVar1 << 2);
          if (lVar4 != 0) goto LAB_1453b30a0;
        }
        puVar5 = &DAT_ffffff7f;
        goto LAB_1453b32b5;
      }
LAB_1453b30a0:
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 4) = uVar3;
      *param_4 = lVar4;
      *param_5 = iVar2 + 1;
      *param_6 = iVar1;
    }
    if (*(int *)(param_1 + 0x78) < 3) {
      uVar3 = FUN_1453b1f80(param_7);
      FUN_1453b1df0(param_1 + 0xa8,uVar3);
      FUN_1453b18e0(param_1 + 0xa8,param_7);
      iVar1 = FUN_1453b1c60(param_1 + 0xa8,&local_68);
      if (0 < iVar1) {
        puVar5 = (undefined1 *)FUN_14556ceb0(param_2,local_68,(longlong)local_60);
        if ((int)puVar5 < 0) {
          if ((int)puVar5 != -0x84) goto LAB_1453b32b5;
        }
        else {
          *(undefined4 *)(param_1 + 0x78) = 3;
        }
      }
    }
    lVar4 = 0x7ffffffffffeffff;
    if (*(longlong *)(param_1 + 0x48) < 0x7ffffffffffeffff) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    lVar4 = FUN_1453b2c20(param_1,param_7,lVar4 + 0x10000);
    if (lVar4 < 0) {
      puVar5 = (undefined1 *)(ulonglong)((*(int *)(param_1 + 0x78) < 3) - 0x85);
      goto LAB_1453b32b5;
    }
    iVar1 = FUN_1453b1f10(param_7);
  }
  if (*(int *)(param_1 + 0x78) == 3) {
    iVar1 = FUN_1453b1f80(param_7);
    if (*(int *)(param_1 + 0x208) == iVar1) {
      FUN_1453b18e0(param_1 + 0xa8,param_7);
    }
    iVar1 = FUN_1453b1c60(param_1 + 0xa8,&local_68);
    if (iVar1 != -1) {
      while (iVar1 == 0) {
        while( true ) {
          lVar4 = 0x7ffffffffffeffff;
          if (*(longlong *)(param_1 + 0x48) < 0x7ffffffffffeffff) {
            lVar4 = *(longlong *)(param_1 + 0x48);
          }
          lVar4 = FUN_1453b2c20(param_1,param_7,lVar4 + 0x10000);
          if (lVar4 < 0) goto LAB_1453b32b0;
          iVar1 = FUN_1453b1f80(param_7);
          if (*(int *)(param_1 + 0x208) == iVar1) break;
          iVar1 = FUN_1453b1f10(param_7);
          if (iVar1 != 0) goto LAB_1453b32b0;
        }
        FUN_1453b18e0(param_1 + 0xa8,param_7);
        iVar1 = FUN_1453b1c60(param_1 + 0xa8,&local_68);
        if (iVar1 == -1) goto LAB_1453b32b0;
      }
      puVar5 = (undefined1 *)FUN_14556d090(param_3,local_68,(longlong)local_60);
      if ((int)puVar5 < 0) goto LAB_1453b32b5;
      iVar1 = FUN_1453b1c60(param_1 + 0xa8,&local_68);
      if ((iVar1 == 0) && (*(char *)((longlong)(int)param_7[1] + -1 + *param_7) != -1)) {
        return (undefined1 *)0x0;
      }
      FUN_14556d190(param_3);
    }
LAB_1453b32b0:
    puVar5 = (undefined1 *)0xffffff7b;
  }
  else {
    puVar5 = (undefined1 *)0xffffff7c;
  }
LAB_1453b32b5:
  *(undefined4 *)(param_1 + 0x78) = 2;
  return puVar5;
}



// FUNCTION 1453b32e0 FUN_1453b32e0 body=151 status=ok
// SIG undefined FUN_1453b32e0(void)

undefined8 FUN_1453b32e0(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_3) {
    if ((param_2 < 0) && ((int)~param_3 <= param_2)) {
      return 0xffffff7d;
    }
    lVar1 = (longlong)(int)param_3;
    if (0x7fffffffffffffff - lVar1 < param_2) {
      param_3 = param_3 + (int)param_2;
    }
    lVar2 = -0x8000000000000000;
    if (param_2 <= 0x7fffffffffffffff - lVar1) {
      lVar2 = param_2;
    }
    *param_1 = (int)param_3 + lVar2;
    return 0;
  }
  if ((int)param_3 < 0) {
    if ((-1 < param_2) && (param_2 < (int)-param_3)) {
      return 0xffffff7d;
    }
    if (param_2 < -0x8000000000000000 - (longlong)(int)param_3) {
      param_3 = param_3 + (int)param_2 + 1;
      param_2 = 0x7fffffffffffffff;
    }
  }
  *param_1 = (int)param_3 + param_2;
  return 0;
}



// FUNCTION 1453b3380 FUN_1453b3380 body=108 status=ok
// SIG undefined FUN_1453b3380(void)

undefined8 FUN_1453b3380(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = -(int)(param_2 >> 0x3f);
  if ((uint)((ulonglong)param_3 >> 0x3f) == uVar1) {
    *param_1 = param_2 - param_3;
    return 0;
  }
  if (uVar1 == 0) {
    if (param_3 <= param_2 + -0x8000000000000000) {
      *param_1 = ((param_2 + -0x8000000000000000) - param_3) + -0x8000000000000000;
      return 0;
    }
  }
  else if (0x7fffffffffffffff - param_3 <= -param_2 + -2) {
    *param_1 = (0x7fffffffffffffff - param_3) - (-param_2 + 0x7fffffffffffffff);
    return 0;
  }
  return 0xffffff7d;
}



// FUNCTION 1453b33f0 FUN_1453b33f0 body=80 status=ok
// SIG undefined FUN_1453b33f0(void)

int FUN_1453b33f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14556b9f0();
  if (-1 < iVar1) {
    iVar2 = FUN_14556a890(param_1,48000);
    iVar2 = iVar2 * iVar1;
    if (0x1680 < iVar2) {
      iVar2 = -0x88;
    }
    return iVar2;
  }
  return -0x88;
}



// FUNCTION 1453b3440 FUN_1453b3440 body=248 status=ok
// SIG undefined FUN_1453b3440(void)

int FUN_1453b3440(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  iVar2 = FUN_1453b1c60(param_1 + 0xa8,param_1 + 0x220);
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x228);
    do {
      if (iVar2 < 0) {
        iVar5 = -3;
        break;
      }
      uVar1 = *(undefined8 *)(puVar4 + -2);
      iVar2 = FUN_14556b9f0(uVar1,*puVar4);
      if (iVar2 < 0) {
LAB_1453b34ca:
        *param_2 = -0x88;
LAB_1453b34d0:
        if (0 < iVar6) {
          *(undefined8 *)(puVar4 + -6) = *(undefined8 *)(puVar4 + 4);
        }
      }
      else {
        iVar3 = FUN_14556a890(uVar1,48000);
        iVar3 = iVar3 * iVar2;
        if (0x1680 < iVar3) goto LAB_1453b34ca;
        *param_2 = iVar3;
        if (iVar3 < 1) goto LAB_1453b34d0;
        iVar5 = iVar5 + iVar3;
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 10;
      }
      iVar2 = FUN_1453b1c60(param_1 + 0xa8,(longlong)iVar6 * 0x28 + 0x220 + param_1);
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x29f8) = 0;
  *(int *)(param_1 + 0x29fc) = iVar6;
  return iVar5;
}



// FUNCTION 1453b3540 FUN_1453b3540 body=781 status=ok
// SIG undefined FUN_1453b3540(void)

longlong FUN_1453b3540(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined4 uStackX_c;
  ulonglong local_res18;
  longlong local_res20;
  undefined1 local_470 [40];
  int local_448 [258];
  
  iVar1 = *(int *)(param_1 + 0x208);
  puVar7 = local_470;
  if (param_3 != (undefined1 *)0x0) {
    puVar7 = param_3;
  }
  uVar6 = 0;
  uVar8 = uVar6;
  uVar11 = uVar6;
  do {
    lVar5 = FUN_1453b2c20(param_1,puVar7,*(undefined8 *)(param_1 + 0x50));
    if (lVar5 < 0) {
      if (lVar5 < -1) {
        return lVar5;
      }
      if (*(int *)(param_2 + 0x3c) == 0) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        return 0;
      }
      goto LAB_1453b370c;
    }
    iVar2 = FUN_1453b1f10(puVar7);
    if (iVar2 != 0) {
      if (*(int *)(param_2 + 0x3c) == 0) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        return 1;
      }
      goto LAB_1453b370c;
    }
    iVar2 = FUN_1453b1f80(puVar7);
    if (iVar1 == iVar2) {
      FUN_1453b18e0(param_1 + 0xa8,puVar7);
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)*(int *)(puVar7 + 8)
      ;
      do {
        uVar3 = FUN_1453b3440(param_1,local_448);
        uVar8 = (ulonglong)uVar3;
      } while ((int)uVar3 < 0);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x29fc);
    }
    iVar2 = (int)uVar11;
  } while (iVar2 < 1);
  local_res20 = (longlong)iVar2;
  uVar11 = *(ulonglong *)(param_1 + 0x210 + local_res20 * 0x28);
  if (uVar11 == 0xffffffffffffffff) {
LAB_1453b370c:
    lVar10 = 0xffffff75;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x208 + local_res20 * 0x28);
    if (iVar1 == 0) {
      iVar4 = FUN_1453b32e0(&local_res18,uVar11,-(int)uVar8);
joined_r0x0001453b3706:
      uVar8 = local_res18;
      if (iVar4 < 0) goto LAB_1453b370c;
    }
    else {
      iVar4 = FUN_1453b32e0(&local_res18,uVar11,-(int)uVar8);
      uVar8 = local_res18;
      if ((iVar4 < 0) && (uVar8 = uVar6, -1 < (longlong)uVar11)) {
        iVar4 = (uint)((longlong)(ulonglong)*(uint *)(param_2 + 0x3c) < (longlong)uVar11) -
                (uint)((longlong)uVar11 < (longlong)(ulonglong)*(uint *)(param_2 + 0x3c));
        local_res18 = uVar6;
        goto joined_r0x0001453b3706;
      }
    }
    iVar4 = 0;
    if (0 < iVar2) {
      lVar10 = CONCAT44(uStackX_c,iVar1);
      puVar12 = (ulonglong *)(param_1 + 0x238);
      lVar9 = 0;
      uVar6 = uVar8;
      do {
        if (iVar1 == 0) {
LAB_1453b3777:
          FUN_1453b32e0(param_1 + ((longlong)iVar4 * 5 + 0x47) * 8,uVar6,local_448[lVar9]);
          uVar6 = *puVar12;
        }
        else {
          uVar3 = -(int)((longlong)uVar11 >> 0x3f);
          if ((uint)(uVar6 >> 0x3f) == uVar3) {
            lVar10 = uVar11 - uVar6;
          }
          else if (uVar3 == 0) {
            if ((longlong)uVar6 <= (longlong)(uVar11 + 0x8000000000000000)) {
              lVar10 = ((uVar11 + 0x8000000000000000) - uVar6) + -0x8000000000000000;
            }
          }
          else if ((longlong)(0x7fffffffffffffff - uVar6) <= (longlong)(-uVar11 + -2)) {
            lVar10 = (0x7fffffffffffffff - uVar6) - (-uVar11 + 0x7fffffffffffffff);
          }
          lVar10 = local_448[lVar9] - lVar10;
          if (lVar10 < 1) goto LAB_1453b3777;
          if (local_448[lVar9] < lVar10) break;
          *puVar12 = uVar11;
          *(undefined4 *)(puVar12 + -1) = 1;
          uVar6 = uVar11;
        }
        iVar4 = iVar4 + 1;
        lVar9 = lVar9 + 1;
        puVar12 = puVar12 + 5;
      } while (lVar9 < local_res20);
    }
    *(int *)(param_1 + 0x29fc) = iVar4;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x3c);
    lVar10 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(ulonglong *)(param_2 + 0x28) = uVar8;
    *(ulonglong *)(param_1 + 0x88) = uVar8;
    *(longlong *)(param_1 + 0x90) = lVar5;
  }
  return lVar10;
}



// FUNCTION 1453b3850 FUN_1453b3850 body=629 status=ok
// SIG undefined FUN_1453b3850(void)

ulonglong FUN_1453b3850(longlong param_1,longlong param_2,int param_3,longlong param_4,
                       ulonglong param_5,int param_6,longlong param_7,longlong *param_8)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_58 [32];
  
  iVar1 = *(int *)(param_4 + 0x30);
  if ((param_6 != iVar1) || (uVar9 = param_5, param_7 == -1)) {
    param_7 = -1;
    param_6 = 0x10000;
    uVar9 = 0xffffffffffffffff;
    uVar7 = param_5;
    uVar10 = param_5;
    do {
      uVar8 = 0;
      uVar7 = uVar7 - (longlong)param_6;
      if ((longlong)uVar7 < 1) {
        uVar7 = uVar8;
      }
      if (uVar7 != *(ulonglong *)(param_1 + 0x48)) {
        if ((*(code **)(param_1 + 8) == (code *)0x0) ||
           (iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),uVar7,0), iVar2 != 0)
           ) {
          return 0xffffff80;
        }
        *(ulonglong *)(param_1 + 0x48) = uVar7;
        FUN_1453b1640(param_1 + 0x58);
      }
      if (*(longlong *)(param_1 + 0x48) < (longlong)uVar10) {
        do {
          iVar2 = (int)uVar8;
          uVar3 = FUN_1453b2c20(param_1,local_58);
          if ((longlong)uVar3 < -1) goto LAB_1453b3a11;
          if (uVar3 == 0xffffffffffffffff) break;
          iVar2 = FUN_1453b1f80(local_58);
          if (iVar2 == iVar1) {
            lVar6 = FUN_1453b1f20(local_58);
            if (lVar6 != -1) {
              uVar9 = uVar3;
              param_7 = lVar6;
            }
          }
          else {
            uVar4 = 0;
            uVar5 = 0;
            uVar3 = uVar4;
            if (0 < (longlong)param_3) {
              do {
                uVar5 = (uint)uVar3;
                if (*(int *)(param_2 + uVar4 * 4) == iVar2) break;
                uVar5 = uVar5 + 1;
                uVar3 = (ulonglong)uVar5;
                uVar4 = uVar4 + 1;
              } while ((longlong)uVar4 < (longlong)param_3);
            }
            if (param_3 <= (int)uVar5) {
              uVar8 = 1;
            }
          }
          iVar2 = (int)uVar8;
        } while (*(longlong *)(param_1 + 0x48) < (longlong)uVar10);
        if (iVar2 == 0) goto LAB_1453b399f;
LAB_1453b39a4:
        if ((longlong)uVar9 < 0) {
          uVar3 = 0xffffffffffffff77;
LAB_1453b3a11:
          return uVar3 & 0xffffffff;
        }
      }
      else {
LAB_1453b399f:
        if (uVar7 == 0) goto LAB_1453b39a4;
      }
      iVar2 = param_6 * 2;
      param_6 = 0x100000;
      if (iVar2 < 0x100000) {
        param_6 = iVar2;
      }
      uVar10 = param_5;
      if ((longlong)(uVar7 + 0xff1a) < (longlong)param_5) {
        uVar10 = uVar7 + 0xff1a;
      }
    } while ((longlong)uVar9 < 0);
  }
  if ((longlong)uVar9 < *(longlong *)(param_4 + 8)) {
    return 0xffffffffffffff77;
  }
  lVar6 = *(longlong *)(param_4 + 0x28);
  uVar5 = -(int)(param_7 >> 0x3f);
  if ((uint)((ulonglong)lVar6 >> 0x3f) == uVar5) {
    lVar6 = param_7 - lVar6;
  }
  else if (uVar5 == 0) {
    if (param_7 + -0x8000000000000000 < lVar6) {
      return 0xffffff75;
    }
    lVar6 = ((param_7 + -0x8000000000000000) - lVar6) + -0x8000000000000000;
  }
  else {
    if (-param_7 + -2 < 0x7fffffffffffffff - lVar6) {
      return 0xffffff75;
    }
    lVar6 = (0x7fffffffffffffff - lVar6) - (-param_7 + 0x7fffffffffffffff);
  }
  if ((longlong)(ulonglong)*(uint *)(param_4 + 0x3c) <= lVar6) {
    lVar6 = lVar6 - (ulonglong)*(uint *)(param_4 + 0x3c);
    if (*param_8 <= 0x7fffffffffffffff - lVar6) {
      *param_8 = *param_8 + lVar6;
      *(longlong *)(param_4 + 0x20) = param_7;
      *(ulonglong *)(param_4 + 0x10) = uVar9;
      return 0;
    }
  }
  return 0xffffff75;
}



// FUNCTION 1453b3ad0 FUN_1453b3ad0 body=147 status=ok
// SIG undefined FUN_1453b3ad0(void)

ulonglong FUN_1453b3ad0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 <= param_1) {
    return param_3;
  }
  if (0 < param_1) {
    lVar5 = 0x3f;
    lVar2 = 0x3f;
    uVar1 = 0;
    do {
      uVar1 = uVar1 * 2;
      if (param_1 < param_2 >> 1) {
        param_1 = param_1 * 2;
      }
      else {
        param_1 = param_1 * 2 - param_2;
        uVar1 = uVar1 | 1;
      }
      lVar2 = lVar2 + -1;
      uVar3 = 0;
    } while (lVar2 != 0);
    do {
      uVar4 = (longlong)uVar3 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar4 = uVar4 + ((uint)uVar3 & (uint)param_3 & 1) + ((longlong)param_3 >> 1);
      }
      uVar1 = (longlong)uVar1 >> 1;
      lVar5 = lVar5 + -1;
      uVar3 = uVar4;
    } while (lVar5 != 0);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1453b3b70 FUN_1453b3b70 body=2178 status=ok
// SIG undefined FUN_1453b3b70(void)

undefined1 *
FUN_1453b3b70(longlong param_1,undefined1 *param_2,longlong param_3,int param_4,longlong *param_5,
             int *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *local_res10;
  uint local_104;
  int local_100;
  uint local_f4;
  longlong local_f0;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [32];
  
  local_f0 = *(longlong *)(param_1 + 0x30);
  local_88 = (longlong)param_4;
  uVar10 = *(uint *)(param_1 + 0x2c);
  uVar12 = (ulonglong)(int)uVar10;
  lVar26 = uVar12 * 0x178;
  local_a0 = 0;
  local_104 = 1;
  local_f4 = uVar10;
  do {
    lVar18 = *param_5;
    iVar5 = *param_6;
    lVar16 = (longlong)iVar5;
    iVar4 = (int)uVar12;
    local_60 = lVar18;
    if (iVar4 <= (int)uVar10) {
      if (0x3fffffff < iVar4) {
LAB_1453b430a:
        return &DAT_ffffff7f;
      }
      local_f4 = iVar4 * 2 + 1;
      local_f0 = FUN_144d539b0(local_f0);
      if (local_f0 == 0) goto LAB_1453b430a;
      *(longlong *)(param_1 + 0x30) = local_f0;
    }
    uVar12 = 0;
    local_68 = lVar16;
    if ((int)local_104 < 1) {
LAB_1453b431e:
      lVar26 = (longlong)(int)uVar10 * 0x178;
      if ((*(longlong *)((longlong)(int)uVar10 * 0x178 + -0x158 + local_f0) != -1) ||
         (puVar8 = (undefined1 *)
                   FUN_1453b3850(param_1,lVar18,iVar5,lVar26 + -0x178 + local_f0,
                                 *(undefined8 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x14),
                                 *(undefined8 *)(param_3 + 0x18),&local_a0), -1 < (int)puVar8)) {
        lVar26 = FUN_144d539b0(local_f0,lVar26);
        if (lVar26 != 0) {
          *(longlong *)(param_1 + 0x30) = lVar26;
        }
        FUN_144d539c0(*param_5);
        *param_5 = 0;
        *param_6 = 0;
        *param_7 = 0;
        puVar8 = (undefined1 *)0x0;
      }
      return puVar8;
    }
    piVar19 = (int *)(param_3 + 0x14);
    uVar23 = uVar12;
    do {
      uVar21 = (uint)uVar12;
      uVar12 = 0;
      uVar9 = 0;
      if (0 < iVar5) {
        uVar11 = uVar12;
        do {
          uVar9 = (uint)uVar11;
          if (*(int *)(lVar18 + uVar12 * 4) == *piVar19) break;
          uVar9 = uVar9 + 1;
          uVar11 = (ulonglong)uVar9;
          uVar12 = uVar12 + 1;
        } while ((longlong)uVar12 < lVar16);
      }
      if ((int)uVar9 < iVar5) break;
      uVar21 = uVar21 + 1;
      uVar12 = (ulonglong)uVar21;
      uVar23 = uVar23 + 1;
      piVar19 = piVar19 + 8;
    } while ((longlong)uVar23 < (longlong)(int)local_104);
    if ((int)uVar21 < 1) goto LAB_1453b431e;
    local_d8 = -1;
    puVar15 = (undefined1 *)0xffffffffffffffff;
    lVar20 = uVar23 * 0x20 + param_3;
    puVar8 = *(undefined1 **)(lVar20 + -0x20);
    local_a8 = *(undefined1 **)(lVar20 + -0x18);
    local_res10 = param_2;
    if ((int)uVar21 < (int)local_104) {
      local_res10 = *(undefined1 **)(lVar20 + 8) + *(int *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x14) == *(int *)(lVar26 + -0x148 + local_f0)) {
        local_d8 = *(longlong *)(lVar20 + 0x18);
        local_b0 = *(undefined1 **)(lVar20 + 8);
      }
    }
    puVar27 = (undefined1 *)0xffffffffffffffff;
    if (1 < (int)uVar10) {
      lVar2 = *(longlong *)(lVar26 + -0x178 + local_f0);
      lVar6 = lVar2 / (longlong)(int)(uVar10 - 1);
      if ((((longlong)local_res10 - lVar6 < lVar2) &&
          (lVar2 < (longlong)(puVar8 + (-0x10000 - lVar6)))) &&
         (puVar27 = (undefined1 *)(lVar6 + lVar2),
         (longlong)puVar27 < (longlong)(puVar8 + (-0x10000 - lVar6)))) {
        puVar27 = puVar27 + lVar6;
      }
    }
    local_104 = uVar21;
    if ((longlong)local_res10 < (longlong)puVar8) {
      plVar14 = (longlong *)(lVar20 + 8);
      local_c8 = uVar23;
      local_c0 = puVar8;
      local_90 = plVar14;
      do {
        if (puVar27 == (undefined1 *)0xffffffffffffffff) {
          puVar27 = local_res10 + ((longlong)puVar8 - (longlong)local_res10 >> 1);
        }
        puVar28 = local_res10;
        if (0xffff < (longlong)puVar27 - (longlong)local_res10) {
          local_d8 = -1;
          puVar28 = puVar27;
        }
        if (puVar28 != *(undefined1 **)(param_1 + 0x48)) {
          if (*(code **)(param_1 + 8) == (code *)0x0) {
            return (undefined1 *)0xffffff80;
          }
          iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),puVar28,0);
          if (iVar4 != 0) {
            return (undefined1 *)0xffffff80;
          }
          *(undefined1 **)(param_1 + 0x48) = puVar28;
          FUN_1453b1640(param_1 + 0x58);
        }
        puVar15 = (undefined1 *)FUN_1453b2c20(param_1,local_58);
        if ((longlong)puVar15 < -1) {
          return puVar15;
        }
        local_78 = puVar15;
        if (puVar15 == (undefined1 *)0xffffffffffffffff) {
          local_e0 = 0;
          puVar8 = puVar28;
          local_c0 = puVar28;
        }
        else {
          iVar4 = FUN_1453b1f80(local_58);
          lVar20 = FUN_1453b1f20(local_58);
          uVar11 = 0;
          uVar9 = 0;
          uVar12 = uVar11;
          if (0 < lVar16) {
            do {
              uVar9 = (uint)uVar12;
              if (*(int *)(lVar18 + uVar11 * 4) == iVar4) break;
              uVar9 = uVar9 + 1;
              uVar11 = uVar11 + 1;
              uVar12 = (ulonglong)uVar9;
            } while ((longlong)uVar11 < lVar16);
          }
          if ((int)uVar9 < iVar5) {
            local_e0 = 0x10000;
            local_res10 = *(undefined1 **)(param_1 + 0x48);
            if (iVar4 == *(int *)(lVar26 + -0x148 + local_f0)) {
              local_e0 = 0x10000;
              local_d8 = lVar20;
              local_b0 = puVar15;
            }
          }
          else {
            if ((longlong)uVar23 < local_88) {
              uVar23 = uVar23 + 1;
              local_104 = local_104 + 1;
              plVar14[-1] = (longlong)puVar28;
              *plVar14 = (longlong)puVar15;
              iVar1 = *(int *)(param_1 + 0x48);
              *(int *)((longlong)plVar14 + 0xc) = iVar4;
              *(int *)(plVar14 + 1) = iVar1 - (int)puVar15;
              plVar14[2] = lVar20;
              plVar14 = plVar14 + 4;
              local_c8 = uVar23;
              local_90 = plVar14;
            }
            local_e0 = 0;
            puVar8 = puVar28;
            local_c0 = puVar28;
            local_a8 = puVar15;
          }
        }
        puVar27 = puVar8 + -0x10000;
        local_70 = puVar27;
        if ((longlong)local_res10 < (longlong)puVar27) {
          local_100 = 0;
          if (0 < (longlong)uVar23) {
            piVar19 = (int *)(param_3 + 0x14);
            puVar8 = puVar27;
            local_98 = uVar23;
            do {
              lVar18 = *(longlong *)(piVar19 + 1);
              puVar27 = puVar8;
              if (-1 < lVar18) {
                iVar4 = 48000;
                lVar16 = lVar18;
                if (0x7fffffffffff447f < lVar18) {
                  iVar4 = (int)lVar18 + 48000;
                  lVar16 = -0x8000000000000000;
                }
                local_80 = *(longlong *)(piVar19 + -3);
                iVar1 = *piVar19;
                piVar3 = piVar19;
                lVar20 = local_80;
                iVar24 = local_100;
                do {
                  do {
                    do {
                      piVar13 = piVar3;
                      piVar3 = piVar13 + -8;
                      iVar25 = iVar24 + -1;
                      puVar27 = puVar8;
                      if (iVar24 < 1) goto LAB_1453b40ab;
                      lVar2 = *(longlong *)(piVar13 + -7);
                      iVar24 = iVar25;
                    } while ((lVar2 < iVar4 + lVar16) || (*piVar3 != iVar1));
                    lVar6 = *(longlong *)(piVar13 + -0xb);
                    lVar22 = lVar2 - lVar18;
                    lVar7 = lVar2 / lVar22;
                    lVar17 = lVar6 - lVar20;
                  } while ((0 < lVar7) && ((lVar6 - (longlong)local_res10) / lVar7 < lVar17));
                  lVar20 = FUN_1453b3ad0(lVar2 - lVar7 * lVar22,lVar22,lVar17);
                  puVar27 = (undefined1 *)(lVar6 + ((local_e0 - lVar17 * lVar7) - lVar20));
                  lVar20 = local_80;
                } while ((longlong)puVar27 < (longlong)local_res10);
                if ((longlong)puVar8 < (longlong)puVar27) {
                  puVar27 = puVar8;
                }
              }
LAB_1453b40ab:
              local_100 = local_100 + 1;
              piVar19 = piVar19 + 8;
              local_98 = local_98 - 1;
              puVar8 = puVar27;
            } while (local_98 != 0);
            local_98 = 0;
            puVar15 = local_78;
            plVar14 = local_90;
            lVar16 = local_68;
            uVar23 = local_c8;
            puVar8 = local_c0;
            lVar18 = local_60;
          }
          if ((longlong)local_70 <= (longlong)puVar27) {
            puVar27 = (undefined1 *)0xffffffffffffffff;
          }
        }
        else {
          puVar27 = (undefined1 *)0xffffffffffffffff;
        }
      } while ((longlong)local_res10 < (longlong)puVar8);
    }
    if (*(longlong *)(lVar26 + -0x158 + local_f0) == -1) {
      if (local_d8 == -1) {
        puVar15 = (undefined1 *)0xffffffffffffffff;
        local_b0 = local_a8;
      }
      puVar8 = (undefined1 *)
               FUN_1453b3850(param_1,lVar18,iVar5,(longlong)(int)uVar10 * 0x178 + -0x178 + local_f0,
                             local_b0,*(undefined4 *)(lVar26 + -0x148 + local_f0),local_d8,&local_a0
                            );
      if ((int)puVar8 < 0) {
        return puVar8;
      }
    }
    plVar14 = (longlong *)(param_1 + 0x48);
    if ((puVar15 != local_a8) && (local_a8 != (undefined1 *)*plVar14)) {
      if ((*(code **)(param_1 + 8) == (code *)0x0) ||
         (iVar5 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),local_a8,0), iVar5 != 0
         )) {
        return (undefined1 *)0xffffff80;
      }
      *plVar14 = (longlong)local_a8;
      FUN_1453b1640(param_1 + 0x58);
    }
    puVar8 = local_58;
    lVar18 = (longlong)(int)uVar10 * 0x178 + local_f0;
    if (puVar15 != local_a8) {
      puVar8 = (undefined1 *)0x0;
    }
    puVar8 = (undefined1 *)
             FUN_1453b2f70(param_1,lVar18 + 0x34,lVar18 + 0x158,param_5,param_6,param_7,puVar8);
    if ((int)puVar8 < 0) {
      return puVar8;
    }
    *(undefined1 **)(lVar26 + local_f0) = local_a8;
    *(longlong *)(lVar26 + 8 + local_f0) = *plVar14;
    *(undefined4 *)(lVar26 + 0x30 + local_f0) = *(undefined4 *)(param_1 + 0x208);
    *(undefined8 *)(lVar26 + 0x20 + local_f0) = 0xffffffffffffffff;
    puVar8 = (undefined1 *)FUN_1453b3540(param_1,lVar18,0);
    if ((int)puVar8 < 0) {
      return puVar8;
    }
    uVar10 = uVar10 + 1;
    uVar12 = (ulonglong)local_f4;
    *(undefined8 *)(lVar26 + 0x18 + local_f0) = local_a0;
    lVar26 = lVar26 + 0x178;
    param_2 = *(undefined1 **)(param_1 + 0x48);
    *(uint *)(param_1 + 0x2c) = uVar10;
  } while( true );
}



// FUNCTION 1453b4400 FUN_1453b4400 body=210 status=ok
// SIG undefined FUN_1453b4400(void)

void FUN_1453b4400(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_res8 [2];
  
  if (3 < *(int *)(param_1 + 0x78)) {
    iVar3 = *(int *)(param_1 + 0x2b3c);
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x7c);
    }
    lVar2 = (longlong)iVar1 * 0x178 + *(longlong *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x2b38);
    if (iVar1 == 0) {
      iVar3 = iVar3 + *(int *)(lVar2 + 0x44);
    }
    else if (iVar1 == 0xbbf) {
      local_res8[0] = 0;
      FUN_14556d150(lVar2 + 0x158,local_res8);
      iVar3 = iVar3 + *(int *)(lVar2 + 0x44) + local_res8[0];
    }
    else if (iVar1 == 0xbc0) {
      local_res8[0] = 0;
      FUN_14556d170(lVar2 + 0x158,local_res8);
      iVar3 = iVar3 + *(int *)(lVar2 + 0x44) + local_res8[0];
    }
    iVar1 = 0x7fff;
    if (iVar3 < 0x7fff) {
      iVar1 = iVar3;
    }
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    FUN_1453b6900(*(undefined8 *)(param_1 + 0x2a00),0xfc2,iVar1);
  }
  return;
}



// FUNCTION 1453b44e0 FUN_1453b44e0 body=333 status=ok
// SIG undefined FUN_1453b44e0(void)

undefined1 * FUN_1453b44e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  if (3 < *(int *)(param_1 + 0x78)) {
    return (undefined1 *)0x0;
  }
  if (*(int *)(param_1 + 0x78) < 3) {
LAB_1453b460e:
    puVar6 = &DAT_ffffff7f;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    lVar7 = (longlong)iVar3 * 0x178 + *(longlong *)(param_1 + 0x30);
    iVar3 = *(int *)(lVar7 + 0x4c);
    iVar1 = *(int *)(lVar7 + 0x50);
    iVar2 = *(int *)(lVar7 + 0x38);
    if ((((*(longlong *)(param_1 + 0x2a00) == 0) || (*(int *)(param_1 + 0x2a18) != iVar3)) ||
        (*(int *)(param_1 + 0x2a1c) != iVar1)) || (*(int *)(param_1 + 0x2a20) != iVar2)) {
LAB_1453b4583:
      free(*(void **)(param_1 + 0x2a00));
      lVar5 = FUN_1453b6590(48000,iVar2,iVar3,iVar1,(void *)(lVar7 + 0x54),local_res8);
      *(longlong *)(param_1 + 0x2a00) = lVar5;
      if (lVar5 == 0) goto LAB_1453b460e;
      *(int *)(param_1 + 0x2a18) = iVar3;
      *(int *)(param_1 + 0x2a1c) = iVar1;
      *(int *)(param_1 + 0x2a20) = iVar2;
      memcpy((void *)(param_1 + 0x2a24),(void *)(lVar7 + 0x54),(longlong)iVar2);
    }
    else {
      iVar4 = memcmp((void *)(param_1 + 0x2a24),(void *)(lVar7 + 0x54),(longlong)iVar2);
      if (iVar4 != 0) goto LAB_1453b4583;
      FUN_1453b6900(*(undefined8 *)(param_1 + 0x2a00),0xfbc);
    }
    *(undefined4 *)(param_1 + 0x78) = 4;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_1453b4400(param_1);
    puVar6 = (undefined1 *)0x0;
  }
  return puVar6;
}



// FUNCTION 1453b4630 FUN_1453b4630 body=992 status=ok
// SIG undefined FUN_1453b4630(void)

uint FUN_1453b4630(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  void *_Dst;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  size_t _Size;
  longlong lVar19;
  undefined8 in_stack_fffffffffffff600;
  undefined4 uVar20;
  undefined8 local_9c8 [48];
  undefined1 local_848 [8];
  longlong local_840;
  int local_838;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffff600 >> 0x20);
  iVar14 = *(int *)(param_1 + 0x29fc);
  _Size = (longlong)iVar14 * 0x28;
  _Dst = (void *)FUN_144d539a0(_Size);
  if (_Dst == (void *)0x0) {
    return 0xffffff7f;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  lVar19 = 2;
  lVar18 = 2;
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  puVar12 = puVar1;
  puVar16 = local_9c8;
  do {
    puVar17 = puVar16;
    puVar15 = puVar12;
    uVar2 = puVar15[1];
    uVar3 = puVar15[2];
    uVar9 = puVar15[3];
    *puVar17 = *puVar15;
    puVar17[1] = uVar2;
    uVar2 = puVar15[4];
    uVar10 = puVar15[5];
    puVar17[2] = uVar3;
    puVar17[3] = uVar9;
    uVar3 = puVar15[6];
    uVar9 = puVar15[7];
    puVar17[4] = uVar2;
    puVar17[5] = uVar10;
    uVar2 = puVar15[8];
    uVar10 = puVar15[9];
    puVar17[6] = uVar3;
    puVar17[7] = uVar9;
    uVar3 = puVar15[10];
    uVar9 = puVar15[0xb];
    puVar17[8] = uVar2;
    puVar17[9] = uVar10;
    uVar2 = puVar15[0xc];
    uVar10 = puVar15[0xd];
    puVar17[10] = uVar3;
    puVar17[0xb] = uVar9;
    uVar3 = puVar15[0xe];
    uVar9 = puVar15[0xf];
    puVar17[0xc] = uVar2;
    puVar17[0xd] = uVar10;
    puVar17[0xe] = uVar3;
    puVar17[0xf] = uVar9;
    lVar18 = lVar18 + -1;
    puVar12 = puVar15 + 0x10;
    puVar16 = puVar17 + 0x10;
  } while (lVar18 != 0);
  uVar2 = puVar15[0x11];
  uVar3 = puVar15[0x12];
  uVar9 = puVar15[0x13];
  puVar17[0x10] = puVar15[0x10];
  puVar17[0x11] = uVar2;
  uVar2 = puVar15[0x14];
  uVar10 = puVar15[0x15];
  puVar17[0x12] = uVar3;
  puVar17[0x13] = uVar9;
  uVar3 = puVar15[0x16];
  uVar9 = puVar15[0x17];
  puVar17[0x14] = uVar2;
  puVar17[0x15] = uVar10;
  uVar2 = puVar15[0x18];
  uVar10 = puVar15[0x19];
  puVar17[0x16] = uVar3;
  puVar17[0x17] = uVar9;
  uVar3 = puVar15[0x1a];
  uVar9 = puVar15[0x1b];
  puVar17[0x18] = uVar2;
  puVar17[0x19] = uVar10;
  uVar10 = puVar15[0x1c];
  uVar11 = puVar15[0x1d];
  uVar2 = puVar15[0x1e];
  puVar17[0x1a] = uVar3;
  puVar17[0x1b] = uVar9;
  puVar17[0x1c] = uVar10;
  puVar17[0x1d] = uVar11;
  puVar17[0x1e] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  memcpy(_Dst,(void *)(param_1 + 0x220),_Size);
  FUN_1453b15f0(param_1 + 0x58);
  FUN_1453b1c80(puVar1,0xffffffff);
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),0,2);
  lVar18 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x20));
  *(longlong *)(param_1 + 0x50) = lVar18;
  *(longlong *)(param_1 + 0x48) = lVar18;
  if (lVar18 < 0) {
    uVar13 = 0xffffff80;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (lVar18 < lVar4) {
      uVar13 = 0xffffff77;
    }
    else {
      uVar13 = FUN_1453b2d40(param_1,local_848,lVar18,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x30),
                             *(undefined8 *)(param_1 + 0x40),
                             CONCAT44(uVar20,*(undefined4 *)(param_1 + 0x38)));
      if (-1 < (int)uVar13) {
        *(longlong *)(param_1 + 0x50) = local_838 + local_840;
        if (local_838 + local_840 < lVar4) {
          uVar13 = 0xffffff77;
        }
        else {
          uVar13 = FUN_1453b3b70(param_1,lVar4,local_848,0x40,param_1 + 0x40,param_1 + 0x38,
                                 param_1 + 0x3c);
        }
      }
    }
  }
  FUN_1453b1d50(puVar1);
  FUN_1453b1610(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  puVar12 = local_9c8;
  do {
    puVar15 = puVar1;
    puVar16 = puVar12;
    uVar5 = puVar16[1];
    uVar6 = puVar16[2];
    uVar7 = puVar16[3];
    *puVar15 = *puVar16;
    puVar15[1] = uVar5;
    uVar5 = puVar16[4];
    uVar8 = puVar16[5];
    puVar15[2] = uVar6;
    puVar15[3] = uVar7;
    uVar6 = puVar16[6];
    uVar7 = puVar16[7];
    puVar15[4] = uVar5;
    puVar15[5] = uVar8;
    uVar5 = puVar16[8];
    uVar8 = puVar16[9];
    puVar15[6] = uVar6;
    puVar15[7] = uVar7;
    uVar6 = puVar16[10];
    uVar7 = puVar16[0xb];
    puVar15[8] = uVar5;
    puVar15[9] = uVar8;
    uVar5 = puVar16[0xc];
    uVar8 = puVar16[0xd];
    puVar15[10] = uVar6;
    puVar15[0xb] = uVar7;
    uVar6 = puVar16[0xe];
    uVar7 = puVar16[0xf];
    puVar15[0xc] = uVar5;
    puVar15[0xd] = uVar8;
    puVar15[0xe] = uVar6;
    puVar15[0xf] = uVar7;
    lVar19 = lVar19 + -1;
    puVar12 = puVar16 + 0x10;
    puVar1 = puVar15 + 0x10;
  } while (lVar19 != 0);
  uVar5 = puVar16[0x11];
  uVar6 = puVar16[0x12];
  uVar7 = puVar16[0x13];
  puVar15[0x10] = puVar16[0x10];
  puVar15[0x11] = uVar5;
  uVar5 = puVar16[0x14];
  uVar8 = puVar16[0x15];
  puVar15[0x12] = uVar6;
  puVar15[0x13] = uVar7;
  uVar6 = puVar16[0x16];
  uVar7 = puVar16[0x17];
  puVar15[0x14] = uVar5;
  puVar15[0x15] = uVar8;
  uVar5 = puVar16[0x18];
  uVar8 = puVar16[0x19];
  puVar15[0x16] = uVar6;
  puVar15[0x17] = uVar7;
  uVar6 = puVar16[0x1a];
  uVar7 = puVar16[0x1b];
  puVar15[0x18] = uVar5;
  puVar15[0x19] = uVar8;
  uVar8 = puVar16[0x1c];
  uVar9 = puVar16[0x1d];
  uVar5 = puVar16[0x1e];
  puVar15[0x1a] = uVar6;
  puVar15[0x1b] = uVar7;
  puVar15[0x1c] = uVar8;
  puVar15[0x1d] = uVar9;
  puVar15[0x1e] = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(int *)(param_1 + 0x29fc) = iVar14;
  memcpy((void *)(param_1 + 0x220),_Dst,_Size);
  FUN_144d539c0(_Dst);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x3c);
  if ((int)uVar13 < 0) {
    return uVar13;
  }
  iVar14 = (**(code **)(param_1 + 8))
                     (*(undefined8 *)(param_1 + 0x20),
                      ((longlong)*(int *)(param_1 + 100) - (longlong)*(int *)(param_1 + 0x68)) +
                      *(longlong *)(param_1 + 0x48),0);
  return iVar14 >> 0x1f & 0xffffff80;
}



// FUNCTION 1453b4a10 FUN_1453b4a10 body=213 status=ok
// SIG undefined FUN_1453b4a10(void)

void FUN_1453b4a10(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_144d539c0(*(undefined8 *)(param_1 + 0x2b28));
  if (*(void **)(param_1 + 0x2a00) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2a00));
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) == 0) {
    if ((2 < *(int *)(param_1 + 0x78)) || (*(int *)(param_1 + 0x78) == 1)) {
      FUN_14556d190(lVar1 + 0x158);
    }
  }
  else if ((lVar1 != 0) && (0 < (int)*(uint *)(param_1 + 0x2c))) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
    lVar3 = lVar1 + 0x158;
    do {
      FUN_14556d190(lVar3);
      lVar3 = lVar3 + 0x178;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_144d539c0(lVar1);
  FUN_144d539c0(*(undefined8 *)(param_1 + 0x40));
  FUN_1453b1d50(param_1 + 0xa8);
  FUN_1453b1610(param_1 + 0x58);
  if (*(code **)(param_1 + 0x18) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001453b4adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1453b4af0 FUN_1453b4af0 body=536 status=ok
// SIG undefined FUN_1453b4af0(void)

undefined1 *
FUN_1453b4af0(longlong *param_1,longlong param_2,undefined4 *param_3,void *param_4,ulonglong param_5
             )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_38 [32];
  
  memset(param_1,0,0x2b40);
  if (param_5 < 0x80000000) {
    param_1[10] = -1;
    param_1[4] = param_2;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)param_1 = *param_3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    *(undefined4 *)(param_1 + 2) = param_3[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    if (*param_1 == 0) {
      return &DAT_ffffff80;
    }
    FUN_1453b15f0(param_1 + 0xb);
    if (param_5 != 0) {
      _Dst = (void *)FUN_1453b1660(param_1 + 0xb,param_5 & 0xffffffff);
      memcpy(_Dst,param_4,param_5);
      FUN_1453b1730(param_1 + 0xb,param_5 & 0xffffffff);
    }
    iVar8 = 0;
    if ((*(code **)(param_3 + 2) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_3 + 2))(param_2,0,1), iVar4 != -1)) {
      if ((code *)param_1[2] == (code *)0x0) {
        return (undefined1 *)0xffffff7d;
      }
      iVar8 = 1;
      uVar5 = (*(code *)param_1[2])(param_1[4]);
      if (uVar5 != param_5) {
        return (undefined1 *)0xffffff7d;
      }
    }
    *(int *)(param_1 + 5) = iVar8;
    lVar6 = FUN_144d539a0(0x178);
    param_1[6] = lVar6;
    if (lVar6 != 0) {
      FUN_1453b1c80(param_1 + 0x15,0xffffffff);
      puVar7 = (undefined1 *)
               FUN_1453b2f70(param_1,param_1[6] + 0x34,param_1[6] + 0x158,param_1 + 8,param_1 + 7,
                             (longlong)param_1 + 0x3c,0);
      iVar4 = (int)puVar7;
      while( true ) {
        if (iVar4 < 0) {
          return puVar7;
        }
        *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
        *(undefined8 *)param_1[6] = 0;
        *(longlong *)(param_1[6] + 8) = param_1[9];
        *(undefined8 *)(param_1[6] + 0x20) = 0xffffffffffffffff;
        *(int *)(param_1[6] + 0x30) = (int)param_1[0x41];
        puVar7 = (undefined1 *)FUN_1453b3540(param_1,param_1[6],local_38);
        if ((iVar8 != 0) || ((int)puVar7 < 1)) break;
        FUN_14556d190(param_1[6] + 0x158);
        *(int *)((longlong)param_1 + 0x7c) = *(int *)((longlong)param_1 + 0x7c) + 1;
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        puVar7 = (undefined1 *)
                 FUN_1453b2f70(param_1,param_1[6] + 0x34,param_1[6] + 0x158,param_1 + 8,param_1 + 7,
                               (longlong)param_1 + 0x3c,local_38);
        iVar4 = (int)puVar7;
      }
      if (-1 < (int)puVar7) {
        *(undefined4 *)(param_1 + 0xf) = 1;
        return puVar7;
      }
      return puVar7;
    }
  }
  return &DAT_ffffff7f;
}



// FUNCTION 1453b4d10 FUN_1453b4d10 body=100 status=ok
// SIG undefined FUN_1453b4d10(void)

int FUN_1453b4d10(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 2;
    iVar1 = FUN_1453b4630();
    if (iVar1 < 0) goto LAB_1453b4d57;
  }
  *(undefined4 *)(param_1 + 0x78) = 3;
  iVar1 = FUN_1453b44e0(param_1);
  if (-1 < iVar1) {
    return 0;
  }
LAB_1453b4d57:
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1453b4a10(param_1);
  return iVar1;
}



// FUNCTION 1453b4d80 FUN_1453b4d80 body=2574 status=ok
// SIG undefined FUN_1453b4d80(void)

undefined1 *
FUN_1453b4d80(longlong param_1,undefined4 *param_2,ulonglong param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *local_res10;
  ulonglong local_res18;
  int local_484;
  int local_480;
  int local_47c;
  undefined4 local_468;
  undefined4 uStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  uint local_448 [258];
  
  iVar1 = *(int *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (iVar1 == 0) {
    iVar22 = 0;
  }
  else {
    iVar22 = *(int *)(param_1 + 0x7c);
  }
  local_480 = param_5;
  local_47c = *(int *)((longlong)iVar22 * 0x178 + 0x30 + lVar2);
  local_res10 = param_2;
  local_res18 = param_3;
  local_484 = iVar22;
LAB_1453b4e10:
  puVar24 = local_res10;
  if (local_res10 == (undefined4 *)0x0) {
    param_3 = FUN_1453b2c20(param_1,&local_468,*(undefined8 *)(param_1 + 0x50));
    local_res18 = param_3;
  }
  else {
    local_468 = *local_res10;
    uStack_464 = local_res10[1];
    iStack_460 = local_res10[2];
    uStack_45c = local_res10[3];
    local_res10 = (undefined4 *)0x0;
    local_458 = *(undefined8 *)(puVar24 + 4);
    uStack_450 = *(undefined8 *)(puVar24 + 6);
  }
  if ((longlong)param_3 < 0) {
    if ((longlong)param_3 < -1) {
      return (undefined1 *)(param_3 & 0xffffffff);
    }
    return (undefined1 *)0xfffffffe;
  }
  if ((*(int *)(param_1 + 0x78) < 3) || (iVar6 = FUN_1453b1f80(&local_468), local_47c == iVar6)) {
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)iStack_460;
  }
  else {
    iVar6 = FUN_1453b1f10(&local_468);
    if (iVar6 == 0) goto LAB_1453b4e10;
    if (param_4 == 0) {
      return (undefined1 *)0xfffffffe;
    }
    if (3 < *(int *)(param_1 + 0x78)) {
      *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x29fc) = 0;
      *(undefined4 *)(param_1 + 0x2b34) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_14556d190(*(longlong *)(param_1 + 0x30) + 0x158);
      }
      *(undefined4 *)(param_1 + 0x78) = 2;
    }
  }
  if (*(int *)(param_1 + 0x78) < 3) {
    if (iVar1 == 0) {
      do {
        puVar9 = (undefined1 *)FUN_1453b2f70(param_1,lVar2 + 0x34,lVar2 + 0x158,0,0,0,&local_468);
        if ((int)puVar9 < 0) {
          return puVar9;
        }
        puVar9 = (undefined1 *)FUN_1453b3540(param_1,lVar2,&local_468);
        if ((int)puVar9 < 0) {
          return puVar9;
        }
        local_47c = *(int *)(param_1 + 0x208);
        *(int *)(*(longlong *)(param_1 + 0x30) + 0x30) = local_47c;
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      } while (0 < (int)puVar9);
      if (0 < *(int *)(param_1 + 0x29fc)) {
        puVar9 = (undefined1 *)FUN_1453b44e0(param_1);
        if (-1 < (int)puVar9) {
          return (undefined1 *)0x0;
        }
        return puVar9;
      }
      goto LAB_1453b4e10;
    }
    iVar6 = FUN_1453b1f80(&local_468);
    iVar21 = iVar22;
    iVar12 = local_484;
    if (*(int *)((longlong)iVar22 * 0x178 + 0x30 + lVar2) != iVar6) {
      iVar11 = *(int *)(param_1 + 0x2c);
      iVar21 = iVar22 + 1;
      lVar10 = (longlong)iVar22 + 1;
      if ((iVar11 <= iVar21) || (iVar12 = iVar21, *(int *)(lVar10 * 0x178 + 0x30 + lVar2) != iVar6))
      {
        lVar3 = *(longlong *)(param_1 + 0x30);
        iVar12 = iVar22;
        iVar8 = 0;
        if ((iVar11 <= iVar21) || (*(longlong *)(lVar10 * 0x178 + lVar3) <= (longlong)param_3)) {
          iVar21 = iVar11;
        }
        do {
          iVar11 = iVar12;
          if ((longlong)param_3 < *(longlong *)((longlong)iVar12 * 0x178 + lVar3)) {
            iVar11 = iVar8;
            iVar21 = iVar12;
          }
          iVar12 = (iVar21 - iVar11 >> 1) + iVar11;
          iVar8 = iVar11;
        } while (1 < iVar21 - iVar11);
        if ((*(int *)((longlong)iVar12 * 0x178 + 0x30 + lVar3) != iVar6) ||
           (iVar21 = iVar12, iVar12 < 0)) goto LAB_1453b4e10;
      }
    }
    local_484 = iVar12;
    iVar22 = iVar21;
    *(int *)(param_1 + 0x7c) = iVar22;
    FUN_1453b1df0(param_1 + 0xa8,iVar6);
    lVar10 = (longlong)iVar22 * 0x178;
    *(undefined4 *)(param_1 + 0x78) = 3;
    if ((longlong)param_3 <= *(longlong *)(lVar10 + 8 + lVar2)) {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar10 + 0x28 + lVar2);
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar10 + 0x3c + lVar2);
      local_480 = 1;
    }
LAB_1453b50e4:
    puVar9 = (undefined1 *)FUN_1453b44e0(param_1);
    local_47c = iVar6;
    if ((int)puVar9 < 0) {
      return puVar9;
    }
  }
  else {
    iVar6 = local_47c;
    local_484 = iVar22;
    if (*(int *)(param_1 + 0x78) == 3) goto LAB_1453b50e4;
  }
  FUN_1453b18e0(param_1 + 0xa8,&local_468);
  if (3 < *(int *)(param_1 + 0x78)) {
    bVar5 = false;
    uVar7 = FUN_1453b3440(param_1,local_448);
    bVar4 = false;
    if (((int)uVar7 < 0) &&
       (uVar7 = FUN_1453b3440(param_1,local_448), bVar4 = false, local_480 == 0)) {
      bVar4 = true;
      *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
      bVar5 = true;
    }
    uVar14 = *(uint *)(param_1 + 0x29fc);
    uVar16 = (ulonglong)uVar14;
    uVar23 = uVar14;
    param_3 = local_res18;
    if ((int)uVar14 < 1) {
LAB_1453b574b:
      if (bVar4) goto LAB_1453b5768;
      if (0 < (int)uVar23) {
        return (undefined1 *)0x0;
      }
    }
    else {
      puVar24 = *(undefined4 **)(param_1 + 0x88);
      puVar17 = *(undefined4 **)(param_1 + 0x238 + ((longlong)(int)uVar14 + -1) * 0x28);
      iVar6 = *(int *)(param_1 + 0x230 + ((longlong)(int)uVar14 + -1) * 0x28);
      if (puVar24 != (undefined4 *)0xffffffffffffffff) {
LAB_1453b52f7:
        if (puVar17 == (undefined4 *)0xffffffffffffffff) {
          puVar17 = puVar24;
          uVar13 = uVar7;
          if ((int)uVar7 < 1) {
            if ((int)uVar7 < 0) {
              if ((-1 < (longlong)puVar24) && ((longlong)puVar24 < (longlong)(int)-uVar7))
              goto LAB_1453b5351;
              if ((longlong)puVar24 < -0x8000000000000000 - (longlong)(int)uVar7) {
                puVar17 = (undefined4 *)0x7fffffffffffffff;
                uVar13 = uVar7 + 1 + (int)puVar24;
              }
            }
          }
          else {
            if (((longlong)puVar24 < 0) && ((longlong)(int)~uVar7 <= (longlong)puVar24)) {
LAB_1453b5351:
              puVar17 = *(undefined4 **)((longlong)iVar22 * 0x178 + 0x20 + lVar2);
              goto LAB_1453b5392;
            }
            if (0x7fffffffffffffff - (longlong)(int)uVar7 < (longlong)puVar24) {
              puVar17 = (undefined4 *)&DAT_8000000000000000;
              uVar13 = (int)puVar24 + uVar7;
            }
          }
          puVar17 = (undefined4 *)((longlong)(int)uVar13 + (longlong)puVar17);
        }
LAB_1453b5392:
        if (iVar6 == 0) goto LAB_1453b5563;
        iVar22 = (int)((longlong)puVar17 >> 0x3f);
        uVar13 = -iVar22;
        if ((uint)((ulonglong)puVar24 >> 0x3f) == uVar13) {
          puVar9 = (undefined1 *)((longlong)puVar17 - (longlong)puVar24);
LAB_1453b5407:
          if ((longlong)(int)uVar7 <= (longlong)puVar9) goto LAB_1453b5563;
          uVar23 = 0;
          puVar15 = local_448;
          puVar20 = (undefined8 *)(param_1 + 0x238);
          param_2 = puVar24;
          do {
            if (((longlong)puVar9 < 0) &&
               (uVar7 = *puVar15, (longlong)(puVar9 + 0x7fffffffffffffff) < (longlong)(int)uVar7)) {
              puVar9 = (undefined1 *)(longlong)(int)(uVar7 + 1);
            }
            else {
              uVar7 = *puVar15;
              puVar9 = (undefined1 *)((longlong)(int)uVar7 - (longlong)puVar9);
            }
            if ((longlong)puVar9 < 1) {
              if ((int)uVar7 < 1) {
                if ((int)uVar7 < 0) {
                  if ((-1 < (longlong)param_2) && ((longlong)param_2 < (longlong)(int)-uVar7))
                  goto LAB_1453b54ed;
                  if ((longlong)param_2 < -0x8000000000000000 - (longlong)(int)uVar7) {
                    uVar7 = uVar7 + 1;
                    puVar19 = (undefined4 *)0x7fffffffffffffff;
                    goto LAB_1453b54e4;
                  }
                }
              }
              else {
                if (((longlong)param_2 < 0) && ((longlong)(int)~uVar7 <= (longlong)param_2))
                goto LAB_1453b54ed;
                if (0x7fffffffffffffff - (longlong)(int)uVar7 < (longlong)param_2) {
                  puVar19 = (undefined4 *)&DAT_8000000000000000;
LAB_1453b54e4:
                  uVar7 = uVar7 + (int)param_2;
                  param_2 = puVar19;
                }
              }
              param_2 = (undefined4 *)((longlong)(int)uVar7 + (longlong)param_2);
            }
            else {
              if ((longlong)(int)uVar7 < (longlong)puVar9) break;
              *(undefined4 *)(puVar20 + -1) = 1;
              param_2 = puVar17;
            }
LAB_1453b54ed:
            *puVar20 = param_2;
            uVar7 = -iVar22;
            if ((uint)((ulonglong)param_2 >> 0x3f) == uVar7) {
              puVar9 = (undefined1 *)((longlong)puVar17 - (longlong)param_2);
            }
            else if (uVar7 == 0) {
              if ((longlong)param_2 <= (longlong)(puVar17 + -0x2000000000000000)) {
                puVar9 = (undefined1 *)
                         ((longlong)(puVar17 + -0x2000000000000000) +
                         (-0x8000000000000000 - (longlong)param_2));
              }
            }
            else if (0x7fffffffffffffff - (longlong)param_2 <= -(longlong)puVar17 + -2) {
              puVar9 = (undefined1 *)
                       ((0x7fffffffffffffff - (longlong)param_2) -
                       (-(longlong)puVar17 + 0x7fffffffffffffff));
            }
            uVar23 = uVar23 + 1;
            puVar15 = puVar15 + 1;
            puVar20 = puVar20 + 5;
          } while ((int)uVar23 < (int)uVar14);
        }
        else {
          if (uVar13 == 0) {
            if ((longlong)puVar24 <= (longlong)(puVar17 + -0x2000000000000000)) {
              puVar9 = (undefined1 *)
                       ((longlong)(puVar17 + -0x2000000000000000) +
                       (-0x8000000000000000 - (longlong)puVar24));
              goto LAB_1453b5407;
            }
          }
          else if (0x7fffffffffffffff - (longlong)puVar24 <= -(longlong)puVar17 + -2) {
            puVar9 = (undefined1 *)
                     ((0x7fffffffffffffff - (longlong)puVar24) -
                     (-(longlong)puVar17 + 0x7fffffffffffffff));
            goto LAB_1453b5407;
          }
LAB_1453b5563:
          uVar14 = -uVar7;
          iVar22 = (int)puVar17;
          puVar24 = puVar17;
          if ((int)uVar14 < 1) {
            if ((int)uVar14 < 0) {
              if ((-1 < (longlong)puVar17) && ((longlong)puVar17 < (longlong)(int)uVar7)) {
                puVar24 = (undefined4 *)0x0;
                goto LAB_1453b5611;
              }
              if ((longlong)puVar17 < -0x8000000000000000 - (longlong)(int)uVar14) {
                uVar14 = uVar14 + 1 + iVar22;
                puVar24 = (undefined4 *)0x7fffffffffffffff;
              }
            }
LAB_1453b560b:
            puVar24 = (undefined4 *)((longlong)(int)uVar14 + (longlong)puVar24);
          }
          else {
            if ((-1 < (longlong)puVar17) || ((longlong)puVar17 < (longlong)(int)~uVar14)) {
              if (0x7fffffffffffffff - (longlong)(int)uVar14 < (longlong)puVar17) {
                uVar14 = uVar14 + iVar22;
                puVar24 = (undefined4 *)&DAT_8000000000000000;
              }
              goto LAB_1453b560b;
            }
            puVar24 = (undefined4 *)0x0;
          }
LAB_1453b5611:
          puVar20 = (undefined8 *)(param_1 + 0x238);
          puVar15 = local_448;
          do {
            uVar14 = -uVar7;
            puVar19 = param_2;
            puVar18 = puVar17;
            if ((int)uVar14 < 1) {
              if ((int)uVar14 < 0) {
                if ((-1 < (longlong)puVar17) && ((longlong)puVar17 < (longlong)(int)uVar7)) {
                  iVar6 = -0x83;
                  goto LAB_1453b5699;
                }
                if ((longlong)puVar17 < -0x8000000000000000 - (longlong)(int)uVar14) {
                  uVar14 = uVar14 + 1;
                  puVar18 = (undefined4 *)0x7fffffffffffffff;
                  goto LAB_1453b568e;
                }
              }
LAB_1453b5691:
              iVar6 = 0;
              puVar19 = (undefined4 *)((longlong)(int)uVar14 + (longlong)puVar18);
            }
            else {
              if ((-1 < (longlong)puVar17) || ((longlong)puVar17 < (longlong)(int)~uVar14)) {
                if (0x7fffffffffffffff - (longlong)(int)uVar14 < (longlong)puVar17) {
                  puVar18 = (undefined4 *)&DAT_8000000000000000;
LAB_1453b568e:
                  uVar14 = uVar14 + iVar22;
                }
                goto LAB_1453b5691;
              }
              iVar6 = -0x83;
            }
LAB_1453b5699:
            uVar14 = *puVar15;
            param_2 = (undefined4 *)0x0;
            if (-1 < iVar6) {
              param_2 = puVar19;
            }
            uVar7 = uVar7 - uVar14;
            if ((int)uVar14 < 1) {
              if ((int)uVar14 < 0) {
                if ((-1 < (longlong)param_2) && ((longlong)param_2 < (longlong)(int)-uVar14))
                goto LAB_1453b56ff;
                if ((longlong)param_2 < -0x8000000000000000 - (longlong)(int)uVar14) {
                  uVar14 = uVar14 + (int)param_2 + 1;
                  param_2 = (undefined4 *)0x7fffffffffffffff;
                }
              }
LAB_1453b56f9:
              param_2 = (undefined4 *)((longlong)(int)uVar14 + (longlong)param_2);
            }
            else if ((-1 < (longlong)param_2) || ((longlong)param_2 < (longlong)(int)~uVar14)) {
              if (0x7fffffffffffffff - (longlong)(int)uVar14 < (longlong)param_2) {
                uVar14 = uVar14 + (int)param_2;
                param_2 = (undefined4 *)&DAT_8000000000000000;
              }
              goto LAB_1453b56f9;
            }
LAB_1453b56ff:
            *puVar20 = param_2;
            puVar15 = puVar15 + 1;
            puVar20 = puVar20 + 5;
            uVar16 = uVar16 - 1;
            bVar4 = bVar5;
          } while (uVar16 != 0);
        }
        *(undefined4 **)(param_1 + 0x88) = puVar24;
        *(uint *)(param_1 + 0x29fc) = uVar23;
        *(ulonglong *)(param_1 + 0x90) = local_res18;
        iVar22 = local_484;
        goto LAB_1453b574b;
      }
      if (iVar6 == 0) {
        iVar21 = 0xf00;
        puVar19 = *(undefined4 **)((longlong)iVar22 * 0x178 + 0x28 + lVar2);
        puVar24 = puVar19;
        if (puVar17 != (undefined4 *)0xffffffffffffffff) {
          uVar13 = -uVar7;
          puVar18 = puVar17;
          if ((int)uVar13 < 1) {
            if ((int)uVar13 < 0) {
              if ((-1 < (longlong)puVar17) && ((longlong)puVar17 < (longlong)(int)uVar7))
              goto LAB_1453b5267;
              if ((longlong)puVar17 < -0x8000000000000000 - (longlong)(int)uVar13) {
                uVar13 = uVar13 + 1;
                puVar18 = (undefined4 *)0x7fffffffffffffff;
                goto LAB_1453b5259;
              }
            }
          }
          else {
            if (((longlong)puVar17 < 0) && ((longlong)(int)~uVar13 <= (longlong)puVar17))
            goto LAB_1453b5267;
            if (0x7fffffffffffffff - (longlong)(int)uVar13 < (longlong)puVar17) {
              puVar18 = (undefined4 *)&DAT_8000000000000000;
LAB_1453b5259:
              uVar13 = uVar13 + (int)puVar17;
            }
          }
          puVar24 = (undefined4 *)((longlong)(int)uVar13 + (longlong)puVar18);
        }
LAB_1453b5267:
        uVar13 = -(int)((longlong)puVar24 >> 0x3f);
        if ((uint)((ulonglong)puVar19 >> 0x3f) == uVar13) {
          puVar9 = (undefined1 *)((longlong)puVar24 - (longlong)puVar19);
LAB_1453b52c1:
          iVar12 = *(int *)((longlong)iVar22 * 0x178 + 0x3c + lVar2);
          if (-1 < (longlong)puVar9) {
            iVar11 = iVar12 + -0xf00;
            iVar8 = 0;
            if (-1 < iVar11) {
              iVar8 = iVar11;
            }
            if ((longlong)puVar9 <= (longlong)iVar8) {
              iVar21 = iVar12 - (int)puVar9;
            }
          }
        }
        else if (uVar13 == 0) {
          if ((longlong)puVar19 <= (longlong)(puVar24 + -0x2000000000000000)) {
            puVar9 = (undefined1 *)
                     ((longlong)(puVar24 + -0x2000000000000000) +
                     (-0x8000000000000000 - (longlong)puVar19));
            goto LAB_1453b52c1;
          }
        }
        else if (0x7fffffffffffffff - (longlong)puVar19 <= -(longlong)puVar24 + -2) {
          puVar9 = (undefined1 *)
                   ((0x7fffffffffffffff - (longlong)puVar19) -
                   (-(longlong)puVar24 + 0x7fffffffffffffff));
          goto LAB_1453b52c1;
        }
        *(int *)(param_1 + 0x80) = iVar21;
        goto LAB_1453b52f7;
      }
      *(undefined4 *)(param_1 + 0x29fc) = 0;
      if (bVar4) {
LAB_1453b5768:
        return &DAT_fffffffd;
      }
    }
  }
  goto LAB_1453b4e10;
}



// FUNCTION 1453b5790 FUN_1453b5790 body=2900 status=ok
// SIG undefined FUN_1453b5790(void)

undefined1 * FUN_1453b5790(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int local_res8;
  int iStackX_c;
  int local_res10;
  uint local_res18;
  longlong local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0 [4];
  longlong local_80;
  undefined1 local_78 [56];
  
  bVar1 = false;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  bVar2 = false;
  local_80 = (longlong)param_3 * 0x178 + *(longlong *)(param_1 + 0x30);
  local_res10 = *(int *)(local_80 + 0x30);
  local_f0 = *(undefined1 **)(local_80 + 8);
  local_d8 = *(longlong *)(local_80 + 0x28);
  lVar16 = *(longlong *)(local_80 + 0x20);
  local_e8 = (undefined1 *)0xffffffffffffffff;
  iVar5 = -0xf00;
  if (param_2 < 0) {
    if (param_2 < -0x7ffffffffffff100) {
      iVar5 = (int)param_2 + -0xeff;
      param_2 = 0x7fffffffffffffff;
    }
LAB_1453b583e:
    local_e0 = iVar5 + param_2;
    if (-1 < local_e0) {
      if (-1 < local_d8) goto LAB_1453b5857;
      goto LAB_1453b586a;
    }
    if (local_d8 < 0) {
LAB_1453b5857:
      if ((int)((uint)(local_d8 < local_e0) - (uint)(local_e0 < local_d8)) < 0) goto LAB_1453b586a;
    }
  }
  else {
    if (0xeff < param_2) goto LAB_1453b583e;
LAB_1453b586a:
    local_e0 = local_d8;
  }
  uVar8 = *(uint *)(local_80 + 0x3c);
  lVar13 = local_d8;
  if ((int)uVar8 < 1) {
    if ((int)uVar8 < 0) {
      if ((-1 < local_d8) && (local_d8 < (int)-uVar8)) goto LAB_1453b58b9;
      if (local_d8 < -0x8000000000000000 - (longlong)(int)uVar8) {
        uVar8 = uVar8 + 1;
        lVar13 = 0x7fffffffffffffff;
        goto LAB_1453b58d3;
      }
    }
LAB_1453b58d6:
    lVar13 = (int)uVar8 + lVar13;
  }
  else {
    if ((-1 < local_d8) || (local_d8 < (int)~uVar8)) {
      if (0x7fffffffffffffff - (longlong)(int)uVar8 < local_d8) {
        lVar13 = -0x8000000000000000;
LAB_1453b58d3:
        uVar8 = uVar8 + (int)local_d8;
      }
      goto LAB_1453b58d6;
    }
LAB_1453b58b9:
    lVar13 = CONCAT44(iStackX_c,local_res8);
  }
  uVar8 = (uint)((ulonglong)local_e0 >> 0x20);
  local_108 = lVar16;
  local_c8 = local_f0;
  if (local_e0 < 0) {
    if (lVar13 < 0) {
LAB_1453b58f1:
      if ((int)((uint)(lVar13 < local_e0) - (uint)(local_e0 < lVar13)) < 0) goto LAB_1453b5b28;
    }
    puVar7 = *(undefined1 **)(local_80 + 0x10);
    local_f8 = puVar7;
    if ((param_3 == *(int *)(param_1 + 0x7c)) && (3 < *(int *)(param_1 + 0x78))) {
      puVar6 = *(undefined1 **)(param_1 + 0x48);
      if ((0 < *(int *)(param_1 + 0x29fc)) &&
         (((longlong)puVar6 <= (longlong)puVar7 &&
          (lVar14 = *(longlong *)(param_1 + 0x210 + (longlong)*(int *)(param_1 + 0x29fc) * 0x28),
          lVar14 != -1)))) {
        if (local_d8 < 0) {
          if (lVar14 < 0) goto LAB_1453b5961;
        }
        else {
          if (-1 < lVar14) {
LAB_1453b5961:
            if (-1 < (int)((uint)(lVar14 < local_d8) - (uint)(local_d8 < lVar14)))
            goto LAB_1453b594c;
          }
          if (lVar16 < 0) {
            if (lVar14 < 0) goto LAB_1453b5985;
LAB_1453b599a:
            uVar3 = -(int)(lVar14 >> 0x3f);
            if (uVar8 >> 0x1f == uVar3) {
              lVar13 = lVar14 - local_e0;
            }
            else if (uVar3 == 0) {
              if (lVar14 + -0x8000000000000000 < local_e0) goto LAB_1453b59ed;
              lVar13 = ((lVar14 + -0x8000000000000000) - local_e0) + -0x8000000000000000;
            }
            else if (-lVar14 + -2 < 0x7fffffffffffffff - local_e0) {
LAB_1453b59ed:
              lVar13 = CONCAT44(iStackX_c,local_res8);
            }
            else {
              lVar13 = (0x7fffffffffffffff - local_e0) - (-lVar14 + 0x7fffffffffffffff);
            }
            if (lVar13 < 0) {
              if (((longlong)puVar7 - (longlong)local_f0 >> 1 <=
                   (longlong)puVar6 - (longlong)local_f0) || (-0x57e400 < lVar13)) {
                local_d8 = lVar14;
                local_c8 = puVar6;
                if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0xb4)) {
                  local_f0 = *(undefined1 **)(param_1 + 0x90);
                  bVar1 = true;
                }
                else {
                  local_f0 = puVar6;
                  bVar1 = true;
                }
              }
              goto LAB_1453b5b3f;
            }
            iVar5 = FUN_1453b33f0(*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228))
            ;
            FUN_1453b32e0(&local_res8,*(undefined8 *)(param_1 + 0x238),-iVar5);
            lVar15 = CONCAT44(iStackX_c,local_res8);
            if (iStackX_c < 0) {
              if (local_e0 < 0) goto LAB_1453b5ab2;
            }
            else {
              if (local_e0 < 0) goto LAB_1453b5aff;
LAB_1453b5ab2:
              if ((int)((uint)(local_e0 < lVar15) - (uint)(lVar15 < local_e0)) < 1) {
LAB_1453b5aff:
                *(undefined4 *)(param_1 + 0x29f8) = 0;
                *(undefined4 *)(param_1 + 0x2b34) = 0;
                *(longlong *)(param_1 + 0x88) = lVar15;
                *(undefined4 *)(param_1 + 0x78) = 3;
                puVar7 = (undefined1 *)FUN_1453b44e0(param_1);
                return puVar7;
              }
            }
            local_108 = lVar14;
            local_f8 = puVar6;
            bVar1 = bVar2;
            if (((longlong)puVar7 - (longlong)local_f0 >> 1 < (longlong)puVar6 - (longlong)local_f0)
               && (0x57e3ff < lVar13)) {
              local_108 = lVar16;
              local_f8 = puVar7;
            }
            goto LAB_1453b5b3f;
          }
          if (-1 < lVar14) {
LAB_1453b5985:
            if (0 < (int)((uint)(lVar14 < lVar16) - (uint)(lVar16 < lVar14))) goto LAB_1453b599a;
          }
        }
      }
    }
LAB_1453b594c:
    lVar13 = CONCAT44(iStackX_c,local_res8);
  }
  else {
    if (-1 < lVar13) goto LAB_1453b58f1;
LAB_1453b5b28:
    lVar13 = CONCAT44(iStackX_c,local_res8);
    local_f8 = local_f0;
    bVar1 = bVar2;
  }
LAB_1453b5b3f:
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x29fc) = 0;
  *(undefined4 *)(param_1 + 0x2b34) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_14556d190(*(longlong *)(param_1 + 0x30) + 0x158);
  }
  *(undefined4 *)(param_1 + 0x78) = 2;
  if (!bVar1) {
    FUN_1453b1df0(param_1 + 0xa8,local_res10);
  }
  local_b8 = (longlong)local_f8 - (longlong)local_c8;
  *(int *)(param_1 + 0x7c) = param_3;
  *(undefined4 *)(param_1 + 0x78) = 3;
  local_res18 = 0;
  if ((longlong)local_c8 < (longlong)local_f8) {
    local_100 = local_f8;
    puVar7 = local_c8;
    lVar16 = local_d8;
    local_b0 = local_b8;
    local_a8 = local_b8;
    do {
      lVar14 = (longlong)local_f8 - (longlong)puVar7;
      iVar5 = (int)uVar8 >> 0x1f;
      puVar6 = puVar7;
      if (0xffff < lVar14) {
        lVar15 = local_b0 >> 1;
        local_b0 = lVar14 >> 1;
        local_b8 = local_a8 >> 1;
        if (local_res18 == 0) {
          uVar12 = (uint)((ulonglong)lVar16 >> 0x3f);
          uVar3 = -iVar5;
          if (uVar12 == uVar3) {
            lVar13 = local_e0 - lVar16;
          }
          else if (uVar3 == 0) {
            if (lVar16 <= local_e0 + -0x8000000000000000) {
              lVar13 = ((local_e0 + -0x8000000000000000) - lVar16) + -0x8000000000000000;
            }
          }
          else if (0x7fffffffffffffff - lVar16 <= -local_e0 + -2) {
            lVar13 = (0x7fffffffffffffff - lVar16) - (-local_e0 + 0x7fffffffffffffff);
          }
          uVar3 = -(int)(local_108 >> 0x3f);
          if (uVar12 == uVar3) {
            local_d0 = local_108 - lVar16;
          }
          else if (uVar3 == 0) {
            if (lVar16 <= local_108 + -0x8000000000000000) {
              local_d0 = ((local_108 + -0x8000000000000000) - lVar16) + -0x8000000000000000;
            }
          }
          else if (0x7fffffffffffffff - lVar16 <= -local_108 + -2) {
            local_d0 = (0x7fffffffffffffff - lVar16) - (-local_108 + 0x7fffffffffffffff);
          }
          lVar14 = FUN_1453b3ad0(lVar13,local_d0,lVar14);
          puVar6 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + -0x10000);
          if ((longlong)(puVar7 + lVar14) <= (longlong)puVar6) {
            puVar6 = puVar7 + lVar14 + -0x10000;
          }
        }
        else {
          puVar6 = puVar7 + local_b0;
        }
        local_res18 = 0;
        local_a8 = lVar15;
        if ((longlong)puVar6 < (longlong)puVar7) {
          puVar6 = puVar7;
        }
      }
      if (puVar6 != *(undefined1 **)(param_1 + 0x48)) {
        if (bVar1) {
          FUN_1453b1da0(param_1 + 0xa8);
        }
        local_e8 = (undefined1 *)0xffffffffffffffff;
        bVar1 = false;
        if (puVar6 != *(undefined1 **)(param_1 + 0x48)) {
          if ((*(code **)(param_1 + 8) == (code *)0x0) ||
             (iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),puVar6,0),
             iVar4 != 0)) goto LAB_1453b628d;
          *(undefined1 **)(param_1 + 0x48) = puVar6;
          FUN_1453b1640(param_1 + 0x58);
        }
      }
      local_res8 = 0x10000;
      puVar10 = local_100;
      do {
        while( true ) {
          do {
            while( true ) {
              if ((longlong)local_f8 <= (longlong)puVar7) goto LAB_1453b618d;
              local_e8 = (undefined1 *)FUN_1453b2c20(param_1,local_a0,local_100);
              if (-1 < (longlong)local_e8) break;
              if ((longlong)local_e8 < -1) {
                return local_e8;
              }
              if ((longlong)puVar6 <= (longlong)(puVar7 + 1)) goto LAB_1453b618d;
              if (bVar1) {
                FUN_1453b1da0(param_1 + 0xa8);
              }
              puVar11 = puVar7;
              if ((longlong)puVar7 < (longlong)(puVar6 + -(longlong)local_res8)) {
                puVar11 = puVar6 + -(longlong)local_res8;
              }
              if (puVar11 != *(undefined1 **)(param_1 + 0x48)) {
                if ((*(code **)(param_1 + 8) == (code *)0x0) ||
                   (iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),puVar11,0),
                   iVar4 != 0)) goto LAB_1453b628d;
                *(undefined1 **)(param_1 + 0x48) = puVar11;
                FUN_1453b1640(param_1 + 0x58);
              }
              iVar4 = local_res8 * 2;
              puVar6 = puVar11;
              local_res8 = 0x100000;
              local_100 = puVar10;
              bVar1 = false;
              if (iVar4 < 0x100000) {
                local_res8 = iVar4;
              }
            }
            if ((longlong)local_e8 < (longlong)puVar10) {
              puVar10 = local_e8;
            }
            iVar4 = FUN_1453b1f80(local_a0);
          } while (local_res10 != iVar4);
          iVar4 = FUN_1453b1fb0(local_a0);
          if ((0 < iVar4) && (lVar14 = FUN_1453b1f20(local_a0), lVar14 != -1)) break;
          if (bVar1) {
            if (iVar4 < 1) {
              FUN_1453b18e0(param_1 + 0xa8,local_a0);
            }
            else {
              FUN_1453b1da0(param_1 + 0xa8);
              bVar1 = false;
            }
          }
        }
        if (lVar14 < 0) {
          if (local_e0 < 0) goto LAB_1453b5f54;
LAB_1453b5ef7:
          if ((longlong)puVar6 <= (longlong)(puVar7 + 1)) goto LAB_1453b618d;
          local_res18 = (uint)(local_b8 * 2 < (longlong)puVar6 - (longlong)puVar7);
          local_100 = puVar10;
          local_f8 = puVar6;
          if (local_108 < 0) {
            if (lVar14 < 0) goto LAB_1453b6130;
          }
          else {
            if (lVar14 < 0) break;
LAB_1453b6130:
            if ((int)((uint)(lVar14 < local_108) - (uint)(local_108 < lVar14)) < 1) break;
          }
          if (lVar16 < 0) {
            if (-1 < lVar14) break;
LAB_1453b615b:
            if (0 < (int)((uint)(lVar14 < lVar16) - (uint)(lVar16 < lVar14))) break;
          }
          else if (-1 < lVar14) goto LAB_1453b615b;
          local_108 = lVar14;
          break;
        }
        if (-1 < local_e0) {
LAB_1453b5f54:
          if (-1 < (int)((uint)(local_e0 < lVar14) - (uint)(lVar14 < local_e0))) goto LAB_1453b5ef7;
        }
        puVar7 = *(undefined1 **)(param_1 + 0x48);
        if (lVar16 < 0) {
          if (-1 < lVar14) break;
LAB_1453b5fb0:
          if (0 < (int)((uint)(lVar14 < lVar16) - (uint)(lVar16 < lVar14))) break;
        }
        else if (-1 < lVar14) goto LAB_1453b5fb0;
        if (local_108 < 0) {
          if (lVar14 < 0) goto LAB_1453b5fd9;
        }
        else {
          if (lVar14 < 0) break;
LAB_1453b5fd9:
          if ((int)((uint)(lVar14 < local_108) - (uint)(local_108 < lVar14)) < 0) break;
        }
        if (bVar1) {
          FUN_1453b1da0(param_1 + 0xa8,0);
        }
        local_f0 = puVar7;
        if (*(char *)((ulonglong)*(byte *)(local_a0[0] + 0x1a) + 0x1a + local_a0[0]) == -1) {
          FUN_1453b18e0(param_1 + 0xa8,local_a0);
          do {
            iVar4 = FUN_1453b1c60(param_1 + 0xa8,local_78);
            local_f0 = local_e8;
          } while (iVar4 != 0);
        }
        bVar1 = true;
        uVar3 = -iVar5;
        if ((uint)((ulonglong)lVar14 >> 0x3f) == uVar3) {
          lVar13 = local_e0 - lVar14;
        }
        else if (uVar3 == 0) {
          if (lVar14 <= local_e0 + -0x8000000000000000) {
            lVar13 = ((local_e0 + -0x8000000000000000) - lVar14) + -0x8000000000000000;
          }
        }
        else if (0x7fffffffffffffff - lVar14 <= -local_e0 + -2) {
          lVar13 = (0x7fffffffffffffff - lVar14) - (-local_e0 + 0x7fffffffffffffff);
        }
        lVar16 = lVar14;
        local_d8 = lVar14;
        local_c8 = puVar7;
        puVar6 = puVar7;
      } while (lVar13 < 0xbb81);
    } while ((longlong)puVar7 < (longlong)local_f8);
  }
LAB_1453b618d:
  if (!bVar1) {
    if (local_f0 != local_e8) {
      local_e8 = (undefined1 *)0xffffffffffffffff;
      puVar7 = (undefined1 *)FUN_1453b2bc0(param_1,local_f0);
      if ((int)puVar7 < 0) {
        return puVar7;
      }
    }
    if ((longlong)local_f0 < (longlong)local_c8) {
      if ((longlong)local_e8 < 0) {
        puVar7 = (undefined1 *)FUN_1453b2c20(param_1,local_a0,*(undefined8 *)(local_80 + 0x10));
        if ((longlong)puVar7 < -1) {
          return puVar7;
        }
        if (puVar7 != local_f0) goto LAB_1453b62a5;
      }
      FUN_1453b18e0(param_1 + 0xa8,local_a0);
      do {
        iVar5 = FUN_1453b1c60(param_1 + 0xa8,local_78);
      } while (iVar5 != 0);
      local_e8 = (undefined1 *)0xffffffffffffffff;
    }
  }
  *(longlong *)(param_1 + 0x88) = local_d8;
  *(undefined1 **)(param_1 + 0x90) = local_f0;
  plVar9 = local_a0;
  if ((longlong)local_e8 < 0) {
    plVar9 = (longlong *)0x0;
  }
  iVar5 = FUN_1453b4d80(param_1,plVar9,local_e8,0,1);
  if (iVar5 == -0x80) {
LAB_1453b628d:
    return &DAT_ffffff80;
  }
  if (iVar5 < 0) {
LAB_1453b62a5:
    return &DAT_ffffff77;
  }
  lVar16 = *(longlong *)(param_1 + 0x88);
  if (lVar16 < 0) {
    if (-1 < local_e0) goto LAB_1453b62a5;
  }
  else if (local_e0 < 0) {
    return (undefined1 *)0x0;
  }
  if ((int)((uint)(local_e0 < lVar16) - (uint)(lVar16 < local_e0)) < 1) {
    return (undefined1 *)0x0;
  }
  return &DAT_ffffff77;
}



// FUNCTION 1453b62f0 FUN_1453b62f0 body=379 status=ok
// SIG undefined FUN_1453b62f0(void)

undefined1 * FUN_1453b62f0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar15;
  
  puVar13 = (undefined1 *)0x0;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar9 = 0xff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2c);
    uVar9 = 1;
    uVar14 = 0;
    if (((0 < (int)uVar1) && (7 < uVar1)) && (1 < DAT_14c707900)) {
      uVar17 = 1;
      uVar18 = 1;
      uVar19 = 1;
      uVar20 = 1;
      uVar9 = uVar1 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      piVar10 = (int *)(*(longlong *)(param_1 + 0x30) + 0x328);
      puVar11 = puVar13;
      puVar15 = puVar13;
      uVar21 = uVar17;
      uVar22 = uVar18;
      uVar23 = uVar19;
      uVar24 = uVar20;
      do {
        iVar2 = piVar10[0x5e];
        uVar14 = (int)puVar15 + 8;
        puVar15 = (undefined1 *)(ulonglong)uVar14;
        iVar3 = piVar10[-0x5e];
        puVar11 = puVar11 + 8;
        iVar4 = *piVar10;
        iVar5 = piVar10[-0xbc];
        iVar6 = piVar10[0x11a];
        iVar7 = piVar10[0x1d6];
        iVar8 = piVar10[0x178];
        uVar17 = (uint)((int)uVar17 < iVar5) * iVar5 | ((int)uVar17 >= iVar5) * uVar17;
        uVar18 = (uint)((int)uVar18 < iVar3) * iVar3 | ((int)uVar18 >= iVar3) * uVar18;
        uVar19 = (uint)((int)uVar19 < iVar4) * iVar4 | ((int)uVar19 >= iVar4) * uVar19;
        uVar20 = (uint)((int)uVar20 < iVar2) * iVar2 | ((int)uVar20 >= iVar2) * uVar20;
        iVar2 = piVar10[0xbc];
        uVar21 = (uint)((int)uVar21 < iVar2) * iVar2 | ((int)uVar21 >= iVar2) * uVar21;
        uVar22 = (uint)((int)uVar22 < iVar6) * iVar6 | ((int)uVar22 >= iVar6) * uVar22;
        uVar23 = (uint)((int)uVar23 < iVar8) * iVar8 | ((int)uVar23 >= iVar8) * uVar23;
        uVar24 = (uint)((int)uVar24 < iVar7) * iVar7 | ((int)uVar24 >= iVar7) * uVar24;
        piVar10 = piVar10 + 0x2f0;
      } while ((longlong)puVar11 < (longlong)(int)(uVar1 - uVar9));
      uVar9 = ((int)uVar17 < (int)uVar21) * uVar21 | ((int)uVar17 >= (int)uVar21) * uVar17;
      uVar17 = ((int)uVar18 < (int)uVar22) * uVar22 | ((int)uVar18 >= (int)uVar22) * uVar18;
      uVar18 = ((int)uVar19 < (int)uVar23) * uVar23 | ((int)uVar19 >= (int)uVar23) * uVar19;
      uVar19 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
      uVar9 = ((int)uVar9 < (int)uVar18) * uVar18 | ((int)uVar9 >= (int)uVar18) * uVar9;
      uVar17 = ((int)uVar17 < (int)uVar19) * uVar19 | ((int)uVar17 >= (int)uVar19) * uVar17;
      uVar9 = ((int)uVar9 < (int)uVar17) * uVar17 | ((int)uVar9 >= (int)uVar17) * uVar9;
    }
    lVar16 = (longlong)(int)uVar14;
    if (lVar16 < (int)uVar1) {
      puVar12 = (uint *)(lVar16 * 0x178 + 0x38 + *(longlong *)(param_1 + 0x30));
      lVar16 = (int)uVar1 - lVar16;
      do {
        uVar1 = *puVar12;
        puVar12 = puVar12 + 0x5e;
        if ((int)uVar1 < (int)uVar9) {
          uVar1 = uVar9;
        }
        uVar9 = uVar1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  lVar16 = FUN_144d539a0((longlong)(int)uVar9 * 0x5a00);
  *(longlong *)(param_1 + 0x2b28) = lVar16;
  if (lVar16 == 0) {
    puVar13 = &DAT_ffffff7f;
  }
  return puVar13;
}



// FUNCTION 1453b6470 FUN_1453b6470 body=174 status=ok
// SIG undefined FUN_1453b6470(void)

int FUN_1453b6470(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if ((*(code **)(param_1 + 0x2a08) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x2a08))
                        (*(undefined8 *)(param_1 + 0x2a10),*(undefined8 *)(param_1 + 0x2a00),param_2
                         ,param_3,param_4,param_5,0x1b80,*(undefined4 *)(param_1 + 0x7c)),
     iVar1 == 0x1a40)) {
    iVar1 = FUN_1453b68c0(*(undefined8 *)(param_1 + 0x2a00),*param_3,*(undefined4 *)(param_3 + 1),
                          param_2,param_4,0);
  }
  else if (0 < iVar1) {
    return -0x88;
  }
  if (iVar1 < 0) {
    iVar1 = -0x88;
  }
  return iVar1;
}



// FUNCTION 1453b6520 FUN_1453b6520 body=112 status=ok
// SIG undefined FUN_1453b6520(void)

int FUN_1453b6520(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((0 < param_1) && (param_2 <= param_1)) && (-1 < param_2)) {
    iVar1 = FUN_14556b620(2);
    iVar2 = FUN_14556b620(1);
    return ((iVar2 + 7U >> 3) * (param_1 - param_2) + (iVar1 + 7U >> 3) * param_2) * 8 + 0x110;
  }
  return 0;
}



// FUNCTION 1453b6590 FUN_1453b6590 body=469 status=ok
// SIG undefined FUN_1453b6590(void)

int * FUN_1453b6590(undefined4 param_1,int param_2,int param_3,int param_4,undefined1 *param_5,
                   int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *_Memory;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  
  if ((((param_2 - 1U < 0xff) && (param_4 <= param_3)) && (0 < param_3)) &&
     ((-1 < param_4 && (param_3 <= 0xff - param_4)))) {
    iVar1 = FUN_14556b620(2);
    iVar2 = FUN_14556b620(1);
    _Memory = malloc((longlong)
                     (int)(((iVar2 + 7U >> 3) * (param_3 - param_4) + (iVar1 + 7U >> 3) * param_4) *
                           8 + 0x110));
    if (_Memory != (int *)0x0) {
      iVar1 = 0;
      *_Memory = param_2;
      _Memory[1] = param_3;
      _Memory[2] = param_4;
      if (0 < param_2) {
        puVar4 = param_5;
        do {
          iVar1 = iVar1 + 1;
          puVar4[(longlong)_Memory + (0xc - (longlong)param_5)] = *puVar4;
          puVar4 = puVar4 + 1;
        } while (iVar1 < *_Memory);
      }
      iVar1 = FUN_14556d990(_Memory);
      if (iVar1 == 0) {
        iVar3 = -1;
      }
      else {
        piVar6 = _Memory + 0x44;
        iVar1 = FUN_14556b620(2);
        iVar2 = FUN_14556b620(1);
        iVar5 = 0;
        if (0 < _Memory[2]) {
          do {
            iVar3 = FUN_14556b670(piVar6,param_1,2);
            if (iVar3 != 0) goto LAB_1453b671a;
            iVar5 = iVar5 + 1;
            piVar6 = (int *)((longlong)piVar6 + (longlong)(int)(iVar1 + 7U & 0xfffffff8));
          } while (iVar5 < _Memory[2]);
        }
        if (iVar5 < _Memory[1]) {
          do {
            iVar3 = FUN_14556b670(piVar6,param_1,1);
            if (iVar3 != 0) goto LAB_1453b671a;
            iVar5 = iVar5 + 1;
            piVar6 = (int *)((longlong)piVar6 + (longlong)(int)(iVar2 + 7U & 0xfffffff8));
          } while (iVar5 < _Memory[1]);
        }
        iVar3 = 0;
      }
LAB_1453b671a:
      if (param_6 != (int *)0x0) {
        *param_6 = iVar3;
      }
      if (iVar3 == 0) {
        return _Memory;
      }
      free(_Memory);
      return (int *)0x0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = -7;
    }
  }
  else if (param_6 != (int *)0x0) {
    *param_6 = -1;
  }
  return (int *)0x0;
}



// FUNCTION 1453b6770 FUN_1453b6770 body=333 status=ok
// SIG undefined FUN_1453b6770(void)

undefined8
FUN_1453b6770(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
             undefined1 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if ((((param_3 - 1U < 0xff) && (param_5 <= param_4)) && (0 < param_4)) &&
     ((-1 < param_5 && (param_4 <= 0xff - param_5)))) {
    iVar5 = 0;
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = param_5;
    if (0 < param_3) {
      puVar3 = param_6;
      iVar4 = iVar5;
      do {
        iVar4 = iVar4 + 1;
        puVar3[(longlong)param_1 + (0xc - (longlong)param_6)] = *puVar3;
        puVar3 = puVar3 + 1;
      } while (iVar4 < *param_1);
    }
    iVar4 = FUN_14556d990(param_1);
    if (iVar4 != 0) {
      piVar6 = param_1 + 0x44;
      iVar4 = FUN_14556b620(2);
      iVar1 = FUN_14556b620(1);
      if (0 < param_1[2]) {
        do {
          uVar2 = FUN_14556b670(piVar6,param_2,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((longlong)piVar6 + (longlong)(int)(iVar4 + 7U & 0xfffffff8));
        } while (iVar5 < param_1[2]);
      }
      if (iVar5 < param_1[1]) {
        do {
          uVar2 = FUN_14556b670(piVar6,param_2,1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((longlong)piVar6 + (longlong)(int)(iVar1 + 7U & 0xfffffff8));
        } while (iVar5 < param_1[1]);
      }
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1453b68c0 FUN_1453b68c0 body=59 status=ok
// SIG undefined FUN_1453b68c0(void)

void FUN_1453b68c0(void)

{
  FUN_1453b6940();
  return;
}



// FUNCTION 1453b6900 FUN_1453b6900 body=33 status=ok
// SIG undefined FUN_1453b6900(void)

void FUN_1453b6900(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1453b6d70(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 1453b6930 free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001453b6930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 1453b6940 FUN_1453b6940 body=1065 status=ok
// SIG undefined FUN_1453b6940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
FUN_1453b6940(int *param_1,longlong param_2,int param_3,undefined8 param_4,code *param_5,
             uint param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong local_res10;
  int local_res18;
  undefined8 auStack_120 [5];
  undefined8 uStack_f8;
  longlong lStack_f0;
  uint local_e8 [2];
  longlong local_e0;
  undefined4 local_d8 [4];
  int local_c8;
  int local_c4;
  int local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a0;
  undefined1 local_98 [96];
  
  uVar2 = param_6;
  if (0 < (int)param_6) {
    auStack_120[0] = 0x1453b6998;
    local_a8 = param_3;
    iVar6 = FUN_1453b6900(param_1,0xfbd,&local_c8);
    if (iVar6 != 0) {
LAB_1453b6d49:
      return &DAT_fffffffd;
    }
    uVar14 = (local_c8 / 0x19) * 3;
    if ((int)uVar14 <= (int)uVar2) {
      uVar2 = uVar14;
    }
    puVar15 = (undefined1 *)(ulonglong)uVar2;
    uVar10 = (longlong)(int)(uVar2 * 2) * 4;
    uVar8 = uVar10 + 0xf;
    if (uVar8 <= uVar10) {
      uVar8 = 0xffffffffffffff0;
    }
    auStack_120[0] = 0x1453b69e3;
    lVar3 = -(uVar8 & 0xfffffffffffffff0);
    local_a0 = param_1 + 0x44;
    local_b8 = (longlong)&local_c8 + lVar3;
    *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6a04;
    local_ac = FUN_14556b620(2);
    *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6a11;
    local_c0 = FUN_14556b620(1);
    if (-1 < param_3) {
      lVar16 = (longlong)&local_c8 + lVar3;
      if (param_3 != 0) {
        iVar6 = param_1[1];
        if (param_3 < iVar6 * 2 + -1) {
          return (undefined1 *)0xfffffffc;
        }
        uVar7 = 0;
        iVar13 = 0;
        local_b0 = local_c8;
        lVar16 = param_2;
        iVar11 = param_3;
        uVar14 = uVar7;
        if (0 < iVar6) {
          do {
            if (iVar11 < 1) {
              return (undefined1 *)0xfffffffc;
            }
            *(int **)((longlong)&local_e0 + lVar3) = &local_c4;
            *(undefined8 *)((longlong)local_e8 + lVar3) = 0;
            *(undefined1 **)((longlong)&lStack_f0 + lVar3) = local_98;
            *(undefined8 *)((longlong)&uStack_f8 + lVar3) = 0;
            *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6aa6;
            puVar9 = (undefined1 *)FUN_14556b1b0(lVar16,iVar11,iVar13 != iVar6 + -1,&param_6);
            iVar5 = local_b0;
            iVar1 = local_c4;
            if ((int)puVar9 < 0) {
              return puVar9;
            }
            *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6abd;
            uVar7 = FUN_14556ba30(lVar16,iVar1,iVar5);
            if ((iVar13 != 0) && (uVar14 != uVar7)) {
              return (undefined1 *)0xfffffffc;
            }
            iVar13 = iVar13 + 1;
            lVar16 = lVar16 + local_c4;
            iVar11 = iVar11 - local_c4;
            uVar14 = uVar7;
          } while (iVar13 < iVar6);
        }
        if ((int)uVar7 < 0) {
          return (undefined1 *)(ulonglong)uVar7;
        }
        lVar16 = local_b8;
        if ((int)uVar2 < (int)uVar7) {
          return (undefined1 *)0xfffffffe;
        }
      }
      uVar4 = param_9;
      iVar6 = param_1[1];
      iVar11 = 0;
      local_res10 = param_2;
      local_res18 = param_3;
      if (0 < iVar6) {
        do {
          piVar12 = local_a0;
          iVar13 = local_c0;
          if (iVar11 < param_1[2]) {
            iVar13 = local_ac;
          }
          local_a0 = (int *)((longlong)local_a0 + (longlong)(int)(iVar13 + 7U & 0xfffffff8));
          if ((local_a8 != 0) && (local_res18 < 1)) goto LAB_1453b6d49;
          param_6 = 0;
          *(undefined4 *)((longlong)local_d8 + lVar3) = param_8;
          *(uint **)((longlong)&local_e0 + lVar3) = &param_6;
          *(uint *)((longlong)local_e8 + lVar3) = (uint)(iVar11 != iVar6 + -1);
          *(undefined4 *)((longlong)&lStack_f0 + lVar3) = param_7;
          *(int *)((longlong)&uStack_f8 + lVar3) = (int)puVar15;
          *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6bbe;
          puVar9 = (undefined1 *)FUN_14556bac0(piVar12,local_res10,local_res18,lVar16);
          iVar6 = (int)puVar9;
          puVar15 = (undefined1 *)((ulonglong)puVar9 & 0xffffffff);
          local_res18 = local_res18 - param_6;
          local_res10 = local_res10 + (int)param_6;
          if (iVar6 < 1) {
            return puVar9;
          }
          if (iVar11 < param_1[2]) {
            *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6bf9;
            iVar13 = FUN_14556d9d0();
            lVar16 = local_b8;
            while (local_b8 = lVar16, iVar13 != -1) {
              iVar1 = *param_1;
              *(undefined8 *)((longlong)local_e8 + lVar3) = uVar4;
              *(int *)((longlong)&lStack_f0 + lVar3) = iVar6;
              *(undefined4 *)((longlong)&uStack_f8 + lVar3) = 2;
              *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6c21;
              (*param_5)(param_4,iVar1,iVar13,lVar16);
              *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6c2e;
              iVar13 = FUN_14556d9d0(param_1,iVar11,iVar13);
              lVar16 = local_b8;
            }
            *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6c45;
            iVar13 = FUN_14556da10(param_1,iVar11,0xffffffff);
            lVar16 = local_b8;
            for (; iVar13 != -1; iVar13 = FUN_14556da10(param_1,iVar11,iVar13)) {
              iVar1 = *param_1;
              *(undefined8 *)((longlong)local_e8 + lVar3) = uVar4;
              *(int *)((longlong)&lStack_f0 + lVar3) = iVar6;
              *(undefined4 *)((longlong)&uStack_f8 + lVar3) = 2;
              *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6c85;
              (*param_5)(param_4,iVar1,iVar13,lVar16 + 4);
              *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6c92;
            }
          }
          else {
            *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6ca0;
            iVar13 = FUN_14556da60(param_1,iVar11,0xffffffff);
            lVar16 = local_b8;
            while (local_b8 = lVar16, iVar13 != -1) {
              iVar1 = *param_1;
              *(undefined8 *)((longlong)local_e8 + lVar3) = uVar4;
              *(int *)((longlong)&lStack_f0 + lVar3) = iVar6;
              *(undefined4 *)((longlong)&uStack_f8 + lVar3) = 1;
              *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6cd1;
              (*param_5)(param_4,iVar1,iVar13,lVar16);
              *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6cde;
              iVar13 = FUN_14556da60(param_1,iVar11,iVar13);
              lVar16 = local_b8;
            }
          }
          iVar6 = param_1[1];
          iVar11 = iVar11 + 1;
          lVar16 = local_b8;
        } while (iVar11 < iVar6);
      }
      iVar6 = *param_1;
      iVar11 = 0;
      if (0 < iVar6) {
        piVar12 = param_1 + 3;
        do {
          if ((char)*piVar12 == -1) {
            *(undefined8 *)((longlong)local_e8 + lVar3) = uVar4;
            *(int *)((longlong)&lStack_f0 + lVar3) = (int)puVar15;
            *(undefined4 *)((longlong)&uStack_f8 + lVar3) = 0;
            *(undefined8 *)((longlong)auStack_120 + lVar3) = 0x1453b6d39;
            (*param_5)(param_4,iVar6,iVar11,0);
          }
          iVar6 = *param_1;
          iVar11 = iVar11 + 1;
          piVar12 = (int *)((longlong)piVar12 + 1);
        } while (iVar11 < iVar6);
        return puVar15;
      }
      return puVar15;
    }
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 1453b6d70 FUN_1453b6d70 body=561 status=ok
// SIG undefined FUN_1453b6d70(void)

int FUN_1453b6d70(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint local_res10 [2];
  
  iVar5 = 0;
  iVar7 = 0;
  iVar2 = FUN_14556b620(2);
  iVar3 = FUN_14556b620(1);
  lVar6 = param_1 + 0x110;
  if (param_2 < 0xfc8) {
    if ((param_2 != 0xfc7) && (param_2 != 0xfa9)) {
      if (param_2 == 0xfbc) {
        if (*(int *)(param_1 + 4) < 1) {
          return 0;
        }
        while( true ) {
          iVar7 = iVar2;
          if (*(int *)(param_1 + 8) <= iVar5) {
            iVar7 = iVar3;
          }
          iVar4 = FUN_14556b7c0(lVar6,0xfbc);
          if (iVar4 != 0) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + (int)(iVar7 + 7U & 0xfffffff8);
          if (*(int *)(param_1 + 4) <= iVar5) {
            return 0;
          }
        }
        return iVar4;
      }
      if (param_2 != 0xfbd) {
        if (param_2 == 0xfbf) {
          param_3 = *(uint **)param_3;
          if (param_3 == (uint *)0x0) {
            return -1;
          }
          *param_3 = 0;
          if (0 < *(int *)(param_1 + 4)) {
            while( true ) {
              iVar7 = iVar2;
              if (*(int *)(param_1 + 8) <= iVar5) {
                iVar7 = iVar3;
              }
              iVar4 = FUN_14556b7c0(lVar6,0xfbf,local_res10);
              if (iVar4 != 0) break;
              iVar5 = iVar5 + 1;
              *param_3 = *param_3 ^ local_res10[0];
              lVar6 = lVar6 + (int)(iVar7 + 7U & 0xfffffff8);
              if (*(int *)(param_1 + 4) <= iVar5) {
                return 0;
              }
            }
            return iVar4;
          }
          return 0;
        }
        if (param_2 != 0xfc2) {
          return -5;
        }
LAB_1453b6df1:
        local_res10[0] = *param_3;
        if (*(int *)(param_1 + 4) < 1) {
          return 0;
        }
        while( true ) {
          iVar7 = iVar2;
          if (*(int *)(param_1 + 8) <= iVar5) {
            iVar7 = iVar3;
          }
          iVar4 = FUN_14556b7c0(lVar6,param_2,local_res10[0]);
          if (iVar4 != 0) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + (int)(iVar7 + 7U & 0xfffffff8);
          if (*(int *)(param_1 + 4) <= iVar5) {
            return 0;
          }
        }
        return iVar4;
      }
    }
  }
  else if (param_2 != 0xfcd) {
    if (param_2 == 0xfce) goto LAB_1453b6df1;
    if (param_2 != 0xfcf) {
      if (param_2 != 0x1402) {
        return -5;
      }
      uVar1 = *param_3;
      if (((int)uVar1 < 0) || (*(int *)(param_1 + 4) <= (int)uVar1)) {
        iVar7 = -1;
      }
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0) {
        return -1;
      }
      if (0 < (int)uVar1) {
        do {
          iVar4 = iVar2;
          if (*(int *)(param_1 + 8) <= iVar5) {
            iVar4 = iVar3;
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + (int)(iVar4 + 7U & 0xfffffff8);
        } while (iVar5 < (int)uVar1);
      }
      **(longlong **)(param_3 + 2) = lVar6;
      return iVar7;
    }
  }
  iVar2 = FUN_14556b7c0(lVar6,param_2,*(undefined8 *)param_3);
  return iVar2;
}



// FUNCTION 1453b6fb0 FUN_1453b6fb0 body=438 status=ok
// SIG undefined FUN_1453b6fb0(void)

void FUN_1453b6fb0(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,
                  uint param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  
  uVar4 = (ulonglong)param_6;
  if (param_4 == 0) {
    if (0 < (int)param_6) {
      puVar5 = (undefined4 *)(param_1 + (longlong)param_3 * 4);
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + param_2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return;
    }
  }
  else {
    iVar9 = 0;
    if (3 < (int)param_6) {
      lVar8 = (longlong)(param_5 * 2);
      lVar6 = (longlong)(param_3 + param_2 * 2);
      puVar5 = (undefined4 *)(param_4 + lVar8 * 4);
      puVar7 = (undefined4 *)(param_1 + lVar6 * 4);
      uVar3 = (param_6 - 4 >> 2) + 1;
      uVar4 = (ulonglong)uVar3;
      iVar9 = uVar3 * 4;
      do {
        puVar7[param_3 - lVar6] = puVar5[-lVar8];
        puVar7[(param_2 + param_3) - lVar6] = puVar5[param_5 - lVar8];
        *puVar7 = *puVar5;
        puVar1 = puVar5 + (param_5 * 3 - lVar8);
        puVar5 = puVar5 + param_5 * 4;
        puVar7[(param_3 + param_2 * 3) - lVar6] = *puVar1;
        puVar7 = puVar7 + param_2 * 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (iVar9 < (int)param_6) {
      puVar5 = (undefined4 *)(param_4 + (longlong)(iVar9 * param_5) * 4);
      uVar4 = (ulonglong)(param_6 - iVar9);
      puVar7 = (undefined4 *)(param_1 + (longlong)(iVar9 * param_2 + param_3) * 4);
      do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + param_5;
        *puVar7 = uVar2;
        puVar7 = puVar7 + param_2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1453b7170 FUN_1453b7170 body=128 status=ok
// SIG undefined FUN_1453b7170(void)

uint FUN_1453b7170(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  cVar3 = -1;
  if ((uVar1 & 0xf00) != 0x100) goto LAB_1453b71c9;
  uVar2 = uVar1 >> 0xc;
  if (uVar2 < 0x604) {
    if (uVar2 != 0x603) {
      if ((uVar2 == 3) || (uVar2 == 4)) {
        cVar3 = '\0';
        goto LAB_1453b71c9;
      }
      if (uVar2 != 7) goto LAB_1453b71c9;
    }
  }
  else if (((uVar2 != 0x607) && (uVar2 != 0x60f)) && (uVar2 != 0x63f)) goto LAB_1453b71c9;
  cVar3 = '\x01';
LAB_1453b71c9:
  if (((*(char *)(param_1 + 0x22) == '\x01') && (*(ushort *)(param_1 + 2) == (ushort)(byte)uVar1))
     && ((uVar1 = 0, *(char *)(param_1 + 0x23) == cVar3 && (*(int *)(param_1 + 0x1c) != 0)))) {
    return 1;
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 1453b71f0 FUN_1453b71f0 body=170 status=ok
// SIG undefined FUN_1453b71f0(void)

void FUN_1453b71f0(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  
  *param_2 = 0xff;
  *param_3 = 0;
  if ((*param_1 & 0xf00) != 0x100) {
    return;
  }
  uVar1 = *param_1 >> 0xc;
  if (uVar1 < 0x604) {
    if (uVar1 == 0x603) {
LAB_1453b724a:
      *param_2 = 1;
      goto LAB_1453b7250;
    }
    if ((uVar1 == 3) || (uVar1 == 4)) {
      *param_2 = 0;
    }
    else if (uVar1 == 7) goto LAB_1453b724a;
  }
  else {
    if (((uVar1 == 0x607) || (uVar1 == 0x60f)) || (uVar1 == 0x63f)) goto LAB_1453b724a;
LAB_1453b7250:
    if (0x607 < uVar1) {
      if (uVar1 == 0x60f) goto LAB_1453b726f;
      if (uVar1 == 0x63f) {
        *param_3 = 3;
        return;
      }
      goto LAB_1453b728e;
    }
    if (uVar1 == 0x607) goto LAB_1453b726f;
  }
  if ((uVar1 - 3 & 0xfffffffb) == 0) {
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x603) {
LAB_1453b726f:
    *param_3 = 2;
    return;
  }
LAB_1453b728e:
  *param_3 = 0;
  return;
}



// FUNCTION 1453b72a0 FUN_1453b72a0 body=93 status=ok
// SIG undefined FUN_1453b72a0(void)

void FUN_1453b72a0(uint param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = 0;
    puVar2 = param_3;
    if (0 < (int)param_1) {
      do {
        *puVar2 = (char)iVar1;
        param_2 = puVar2 + 1;
        iVar1 = iVar1 + 1;
        puVar2 = param_2;
      } while (iVar1 < (int)param_1);
    }
  }
  else {
    memcpy(param_3,param_2,(ulonglong)param_1);
  }
  if ((int)param_1 < 0xff) {
    memset(param_3 + (int)param_1,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),
           (longlong)(int)(0xff - param_1));
  }
  return;
}



// FUNCTION 1453b7300 FUN_1453b7300 body=268 status=ok
// SIG undefined FUN_1453b7300(void)

undefined8 * FUN_1453b7300(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)((longlong)param_1 + 0x394) = 0xff00;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  memset(param_1 + 0x18,0,0x1b0);
  return param_1;
}



// FUNCTION 1453b7410 FUN_1453b7410 body=3 status=ok
// SIG undefined FUN_1453b7410(void)

void FUN_1453b7410(void)

{
  return;
}



// FUNCTION 1453b7420 FUN_1453b7420 body=452 status=ok
// SIG undefined FUN_1453b7420(void)

void FUN_1453b7420(float *param_1,longlong param_2,longlong *param_3,float param_4,
                  undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  float *pfVar7;
  float fVar8;
  
  *(longlong **)(param_1 + 0xe8) = param_3;
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 5) = cVar1;
  *param_1 = param_4;
  param_1[1] = 1.0 / param_4;
  iVar2 = 1;
  if (cVar1 != '\0') {
    iVar2 = 4;
  }
  param_1[2] = (float)iVar2 * param_4;
  param_1[3] = 1.0 / ((float)iVar2 * param_4);
  fVar8 = param_4 * 0.5;
  if (20000.0 <= param_4 * 0.5) {
    fVar8 = 20000.0;
  }
  param_1[4] = fVar8;
  *(undefined8 *)(param_1 + 0xe5) = *param_5;
  param_1[0xe7] = *(float *)(param_5 + 1);
  cVar1 = *(char *)(param_1 + 0xe5);
  if ((cVar1 == '\0') ||
     ((((cVar1 != -0x70 || (*(char *)((longlong)param_1 + 0x399) == '\0')) && (cVar1 != -0x80)) &&
      ((cVar1 != -0x70 || (*(char *)((longlong)param_1 + 0x399) != '\0')))))) {
    *(undefined1 *)(param_1 + 0xe5) = 0x80;
    *(undefined2 *)(param_1 + 0xe6) = 0x30;
  }
  param_1[0x9c] = *(float *)(param_2 + 0x18);
  plVar4 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  fVar8 = param_1[0x9c];
  uVar6 = 0;
  if (fVar8 != 0.0) {
    if (fVar8 == 1.4013e-45) {
      uVar6 = 1;
    }
    else if (fVar8 == 2.8026e-45) {
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
      if (fVar8 == 4.2039e-45) {
        uVar6 = 3;
      }
    }
  }
  uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  FUN_14556db90(param_1 + 0xa0,uVar6,(longlong)*param_1,uVar3);
  pfVar7 = param_1 + 0x34;
  lVar5 = 3;
  do {
    FUN_145121e70(pfVar7,3,param_1[2],*param_1 * 0.375,0,0x3f800000);
    pfVar7 = pfVar7 + 0x24;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 1453b75f0 FUN_1453b75f0 body=685 status=ok
// SIG undefined FUN_1453b75f0(void)

void FUN_1453b75f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_2 != 0) {
    fVar5 = *(float *)(param_2 + 0x34);
    if (-96.0 <= fVar5) {
      if (24.0 <= fVar5) {
        fVar5 = 24.0;
      }
    }
    else {
      fVar5 = -96.0;
    }
    fVar5 = powf(10.0,fVar5 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x40) = fVar5;
      *(float *)(param_1 + 0x44) = fVar5;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x48);
    if (-96.0 <= fVar5) {
      if (24.0 <= fVar5) {
        fVar5 = 24.0;
      }
    }
    else {
      fVar5 = -96.0;
    }
    fVar5 = powf(10.0,fVar5 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0x80)) {
      *(float *)(param_1 + 0x80) = fVar5;
      *(float *)(param_1 + 0x84) = fVar5;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x1c);
    if (-96.0 <= fVar5) {
      if (24.0 <= fVar5) {
        fVar5 = 24.0;
      }
    }
    else {
      fVar5 = -96.0;
    }
    fVar5 = powf(10.0,fVar5 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0x9c)) {
      *(float *)(param_1 + 0x9c) = fVar5;
      *(float *)(param_1 + 0xa0) = fVar5;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x14);
    fVar6 = -96.0;
    if ((-96.0 <= fVar5) && (fVar6 = fVar5, 24.0 <= fVar5)) {
      fVar6 = 24.0;
    }
    fVar5 = powf(10.0,fVar6 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0xa8)) {
      *(float *)(param_1 + 0xa8) = fVar5;
      *(float *)(param_1 + 0xac) = fVar5;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    iVar4 = -0xe10;
    if ((-0xe11 < iVar1) && (iVar4 = iVar1, 0xe10 < iVar1)) {
      iVar4 = 0xe10;
    }
    fVar5 = powf(2.0,(float)iVar4 * 0.00083333335);
    if (fVar5 != *(float *)(param_1 + 0x34)) {
      *(float *)(param_1 + 0x34) = fVar5;
      *(float *)(param_1 + 0x38) = fVar5;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x44);
    iVar4 = -0xe10;
    if ((-0xe11 < iVar1) && (iVar4 = iVar1, 0xe10 < iVar1)) {
      iVar4 = 0xe10;
    }
    fVar5 = powf(2.0,(float)iVar4 * 0.00083333335);
    if (fVar5 != *(float *)(param_1 + 0x74)) {
      *(float *)(param_1 + 0x74) = fVar5;
      *(float *)(param_1 + 0x78) = fVar5;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x38);
    if (fVar5 != *(float *)(param_1 + 0x4c)) {
      *(float *)(param_1 + 0x4c) = fVar5;
      *(float *)(param_1 + 0x50) = fVar5;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x4c);
    if (fVar5 != *(float *)(param_1 + 0x8c)) {
      *(float *)(param_1 + 0x8c) = fVar5;
      *(float *)(param_1 + 0x90) = fVar5;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x20);
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 100.0 <= fVar5)) {
      fVar6 = 100.0;
    }
    if (fVar6 != *(float *)(param_1 + 0xb4)) {
      *(float *)(param_1 + 0xb4) = fVar6;
      *(float *)(param_1 + 0xb8) = fVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  lVar2 = 3;
  puVar3 = (undefined8 *)(param_1 + 0xc0);
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 0x12;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1453b78a0 FUN_1453b78a0 body=439 status=ok
// SIG undefined FUN_1453b78a0(void)

void FUN_1453b78a0(float *param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  
  if (param_2 == 0) {
    return;
  }
  param_1[0xe4] = 8.0;
  if (*(int *)(param_2 + 0xc) == 0) {
    fVar6 = *(float *)(param_2 + 0x10);
    if (8.0 <= fVar6) {
      if (20000.0 <= fVar6) {
        fVar6 = 20000.0;
      }
    }
    else {
      fVar6 = 8.0;
    }
LAB_1453b794a:
    param_1[0xe4] = fVar6;
    if (fVar6 < 8.0) {
      param_1[0xe4] = 8.0;
      goto LAB_1453b797f;
    }
  }
  else {
    if (*(int *)(param_2 + 0xc) == 1) {
      fVar6 = powf(2.0,((float)*(byte *)(param_1 + 0xe6) - 69.0) * 0.083333336);
      fVar6 = fVar6 * 440.0;
      goto LAB_1453b794a;
    }
    fVar6 = 8.0;
  }
  if (param_1[4] <= fVar6) {
    param_1[0xe4] = param_1[4] - 1.0;
  }
LAB_1453b797f:
  *(bool *)((longlong)param_1 + 0x15) = *(int *)(param_2 + 8) == 0;
  cVar5 = *(char *)(param_2 + 0x2c);
  if (*(int *)(param_2 + 0x28) == 3) {
    cVar5 = cVar5 == '\0';
  }
  *(char *)(param_1 + 0x15) = cVar5;
  cVar5 = *(char *)(param_2 + 0x40);
  if (*(int *)(param_2 + 0x3c) == 3) {
    cVar5 = cVar5 == '\0';
  }
  *(char *)(param_1 + 0x25) = cVar5;
  param_1[10] = *(float *)(param_2 + 0x28);
  param_1[0x1a] = *(float *)(param_2 + 0x3c);
  FUN_1453b7a60(param_1,param_2,param_3);
  fVar6 = *param_1;
  if (*(float *)(param_2 + 0x18) != param_1[0x9c]) {
    param_1[0x9c] = *(float *)(param_2 + 0x18);
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 8))();
    fVar1 = param_1[0x9c];
    uVar4 = 0;
    if (fVar1 != 0.0) {
      if (fVar1 == 1.4013e-45) {
        uVar4 = 1;
      }
      else if (fVar1 == 2.8026e-45) {
        uVar4 = 2;
      }
      else {
        uVar4 = 0;
        if (fVar1 == 4.2039e-45) {
          uVar4 = 3;
        }
      }
    }
    uVar2 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_14556db90(param_1 + 0xa0,uVar4,(longlong)fVar6,uVar2);
  }
  return;
}



// FUNCTION 1453b7a60 FUN_1453b7a60 body=1064 status=ok
// SIG undefined FUN_1453b7a60(void)

void FUN_1453b7a60(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 0x1c);
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
  }
  else {
    fVar3 = -96.0;
  }
  fVar3 = powf(10.0,fVar3 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0x9c)) {
    *(float *)(param_1 + 0x9c) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xa0) = fVar3;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0xa0);
      *(float *)(param_1 + 0xa0) = fVar4;
      *(float *)(param_1 + 0x98) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x14);
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
  }
  else {
    fVar3 = -96.0;
  }
  fVar3 = powf(10.0,fVar3 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0xa8)) {
    *(float *)(param_1 + 0xa8) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xac) = fVar3;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0xac);
      *(float *)(param_1 + 0xac) = fVar4;
      *(float *)(param_1 + 0xa4) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x34);
  iVar2 = 1;
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar2 = 4;
  }
  param_3 = iVar2 * param_3;
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
  }
  else {
    fVar3 = -96.0;
  }
  fVar3 = powf(10.0,fVar3 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0x40)) {
    *(float *)(param_1 + 0x40) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x44) = fVar3;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x44) = fVar4;
      *(float *)(param_1 + 0x3c) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x48);
  fVar4 = -96.0;
  if ((-96.0 <= fVar3) && (fVar4 = fVar3, 24.0 <= fVar3)) {
    fVar4 = 24.0;
  }
  fVar3 = powf(10.0,fVar4 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0x80)) {
    *(float *)(param_1 + 0x80) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x84) = fVar3;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x84) = fVar4;
      *(float *)(param_1 + 0x7c) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  iVar2 = *(int *)(param_2 + 0x30);
  iVar1 = -0xe10;
  if ((-0xe11 < iVar2) && (iVar1 = iVar2, 0xe10 < iVar2)) {
    iVar1 = 0xe10;
  }
  fVar3 = powf(2.0,(float)iVar1 * 0.00083333335);
  if (fVar3 != *(float *)(param_1 + 0x34)) {
    *(float *)(param_1 + 0x34) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x38) = fVar3;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x38) = fVar4;
      *(float *)(param_1 + 0x30) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  iVar2 = *(int *)(param_2 + 0x44);
  iVar1 = -0xe10;
  if ((-0xe11 < iVar2) && (iVar1 = iVar2, 0xe10 < iVar2)) {
    iVar1 = 0xe10;
  }
  fVar3 = powf(2.0,(float)iVar1 * 0.00083333335);
  if (fVar3 != *(float *)(param_1 + 0x74)) {
    *(float *)(param_1 + 0x74) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x78) = fVar3;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x78);
      *(float *)(param_1 + 0x78) = fVar4;
      *(float *)(param_1 + 0x70) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x38);
  if (fVar3 != *(float *)(param_1 + 0x4c)) {
    *(float *)(param_1 + 0x4c) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x50) = fVar3;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x50) = fVar4;
      *(float *)(param_1 + 0x48) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x4c);
  if (fVar3 != *(float *)(param_1 + 0x8c)) {
    *(float *)(param_1 + 0x8c) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x90) = fVar3;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x90);
      *(float *)(param_1 + 0x90) = fVar4;
      *(float *)(param_1 + 0x88) = (fVar3 - fVar4) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = 0.0;
  if ((0.0 <= fVar3) && (fVar4 = fVar3, 100.0 <= fVar3)) {
    fVar4 = 100.0;
  }
  if (fVar4 != *(float *)(param_1 + 0xb4)) {
    *(float *)(param_1 + 0xb4) = fVar4;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xb8) = fVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    else {
      fVar3 = *(float *)(param_1 + 0xb8);
      *(float *)(param_1 + 0xb8) = fVar3;
      *(float *)(param_1 + 0xb0) = (fVar4 - fVar3) / (float)param_3;
    }
  }
  return;
}



// FUNCTION 1453b7e90 FUN_1453b7e90 body=170 status=ok
// SIG undefined FUN_1453b7e90(void)

undefined1 FUN_1453b7e90(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    uVar1 = FUN_1453b88d0();
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return uVar1;
}



// FUNCTION 1453b7f40 FUN_1453b7f40 body=169 status=ok
// SIG undefined FUN_1453b7f40(void)

void FUN_1453b7f40(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  FUN_1453b8b50(param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,
                param_7,lVar1,param_5);
  FUN_1453b89b0(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  FUN_1453b8ab0(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 1453b7ff0 FUN_1453b7ff0 body=169 status=ok
// SIG undefined FUN_1453b7ff0(void)

void FUN_1453b7ff0(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  FUN_1453b8d20(param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,
                param_7,lVar1,param_5);
  FUN_1453b89b0(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  FUN_1453b8ab0(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 1453b80a0 FUN_1453b80a0 body=169 status=ok
// SIG undefined FUN_1453b80a0(void)

void FUN_1453b80a0(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  FUN_1453b9000(param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,
                param_7,lVar1,param_5);
  FUN_1453b89b0(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  FUN_1453b8ab0(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 1453b8150 FUN_1453b8150 body=169 status=ok
// SIG undefined FUN_1453b8150(void)

void FUN_1453b8150(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  FUN_1453b92c0(param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,
                param_7,lVar1,param_5);
  FUN_1453b89b0(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  FUN_1453b8ab0(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 1453b8200 FUN_1453b8200 body=104 status=ok
// SIG undefined FUN_1453b8200(void)

code * FUN_1453b8200(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  
  if ((*param_2 == 0) &&
     ((*(float *)(param_1 + 0xb8) != 0.0 || (*(float *)(param_1 + 0xb4) != 0.0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((float)param_2[0xd] == (float)param_2[0xe]) && ((float)param_2[0xd] == 50.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar1) {
    pcVar3 = FUN_1453b80a0;
    if (!bVar2) {
      pcVar3 = FUN_1453b7f40;
    }
    return pcVar3;
  }
  pcVar3 = FUN_1453b8150;
  if (!bVar2) {
    pcVar3 = FUN_1453b7ff0;
  }
  return pcVar3;
}



// FUNCTION 1453b8270 FUN_1453b8270 body=936 status=ok
// SIG undefined FUN_1453b8270(void)

void FUN_1453b8270(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  code *pcVar14;
  code *pcVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
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
  longlong local_res18;
  
  uVar4 = param_2 * 4;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar4 = param_2;
  }
  uVar21 = (ulonglong)uVar4;
  lVar1 = param_4 + (ulonglong)uVar4 * 4 + uVar21 * 4;
  local_res18 = param_3;
  pcVar14 = (code *)FUN_1453b8200(param_1,param_1 + 0x18);
  pcVar15 = (code *)FUN_1453b8200(param_1,param_1 + 0x58);
  uVar22 = 0;
  (*pcVar15)(param_1,uVar21,*(undefined4 *)(param_1 + 0x390),param_1 + 0x58,param_4,0,lVar1);
  (*pcVar14)(param_1,uVar4,*(undefined4 *)(param_1 + 0x390),param_1 + 0x18,param_4 + uVar21 * 4,
             param_4,lVar1);
  lVar13 = local_res18;
  fVar23 = *(float *)(param_1 + 0x3c);
  fVar25 = *(float *)(param_1 + 0x44) + fVar23;
  lVar19 = local_res18;
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar19 = lVar1;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    fVar26 = fVar25 + fVar23;
    fVar27 = fVar26 + fVar23;
    fVar31 = fVar23 * 4.0;
    fVar23 = fVar23 + fVar27;
    fVar24 = *(float *)(param_1 + 0x7c);
    fVar28 = fVar24 + *(float *)(param_1 + 0x84);
    fVar29 = fVar28 + fVar24;
    fVar30 = fVar29 + fVar24;
    fVar32 = fVar24 * 4.0;
    fVar24 = fVar24 + fVar30;
    if (uVar4 != 0) {
      lVar1 = param_4 + uVar21 * 4;
      uVar21 = uVar22;
      do {
        uVar16 = (ulonglong)((int)uVar21 + 4);
        pfVar2 = (float *)(lVar1 + uVar16 * 4);
        fVar5 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar8 = pfVar2[3];
        uVar20 = (int)uVar21 + 8;
        pfVar2 = (float *)(param_4 + uVar16 * 4);
        fVar9 = *pfVar2;
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar2 = (float *)(lVar1 + uVar21 * 4);
        pfVar3 = (float *)(param_4 + uVar21 * 4);
        fVar37 = *pfVar2 * fVar25;
        fVar38 = pfVar2[1] * fVar26;
        fVar39 = pfVar2[2] * fVar27;
        fVar40 = pfVar2[3] * fVar23;
        fVar41 = fVar25 + fVar31;
        fVar42 = fVar26 + fVar31;
        fVar43 = fVar27 + fVar31;
        fVar44 = fVar23 + fVar31;
        fVar33 = *pfVar3 * fVar28;
        fVar34 = pfVar3[1] * fVar29;
        fVar35 = pfVar3[2] * fVar30;
        fVar36 = pfVar3[3] * fVar24;
        fVar45 = fVar28 + fVar32;
        fVar46 = fVar29 + fVar32;
        fVar47 = fVar30 + fVar32;
        fVar48 = fVar24 + fVar32;
        fVar25 = fVar41 + fVar31;
        fVar26 = fVar42 + fVar31;
        fVar27 = fVar43 + fVar31;
        fVar23 = fVar44 + fVar31;
        fVar28 = fVar45 + fVar32;
        fVar29 = fVar46 + fVar32;
        fVar30 = fVar47 + fVar32;
        fVar24 = fVar48 + fVar32;
        pfVar2 = (float *)(lVar19 + uVar21 * 4);
        *pfVar2 = fVar33 * fVar37;
        pfVar2[1] = fVar34 * fVar38;
        pfVar2[2] = fVar35 * fVar39;
        pfVar2[3] = fVar36 * fVar40;
        pfVar2 = (float *)(lVar19 + uVar16 * 4);
        *pfVar2 = fVar9 * fVar45 * fVar5 * fVar41;
        pfVar2[1] = fVar10 * fVar46 * fVar6 * fVar42;
        pfVar2[2] = fVar11 * fVar47 * fVar7 * fVar43;
        pfVar2[3] = fVar12 * fVar48 * fVar8 * fVar44;
        uVar21 = (ulonglong)uVar20;
      } while (uVar20 < uVar4);
    }
  }
  else {
    fVar26 = fVar25 + fVar23;
    fVar27 = fVar26 + fVar23;
    fVar31 = fVar23 * 4.0;
    fVar23 = fVar23 + fVar27;
    fVar24 = *(float *)(param_1 + 0x7c);
    fVar28 = fVar24 + *(float *)(param_1 + 0x84);
    fVar29 = fVar28 + fVar24;
    fVar30 = fVar29 + fVar24;
    fVar32 = fVar24 * 4.0;
    fVar24 = fVar24 + fVar30;
    if (uVar4 != 0) {
      lVar1 = param_4 + uVar21 * 4;
      uVar21 = uVar22;
      do {
        uVar16 = (ulonglong)((int)uVar21 + 4);
        pfVar2 = (float *)(lVar1 + uVar16 * 4);
        fVar5 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar8 = pfVar2[3];
        uVar20 = (int)uVar21 + 8;
        pfVar2 = (float *)(param_4 + uVar16 * 4);
        fVar9 = *pfVar2;
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar2 = (float *)(lVar1 + uVar21 * 4);
        pfVar3 = (float *)(param_4 + uVar21 * 4);
        fVar37 = *pfVar2 * fVar25;
        fVar38 = pfVar2[1] * fVar26;
        fVar39 = pfVar2[2] * fVar27;
        fVar40 = pfVar2[3] * fVar23;
        fVar41 = fVar25 + fVar31;
        fVar42 = fVar26 + fVar31;
        fVar43 = fVar27 + fVar31;
        fVar44 = fVar23 + fVar31;
        fVar33 = *pfVar3 * fVar28;
        fVar34 = pfVar3[1] * fVar29;
        fVar35 = pfVar3[2] * fVar30;
        fVar36 = pfVar3[3] * fVar24;
        fVar45 = fVar28 + fVar32;
        fVar46 = fVar29 + fVar32;
        fVar47 = fVar30 + fVar32;
        fVar48 = fVar24 + fVar32;
        fVar25 = fVar41 + fVar31;
        fVar26 = fVar42 + fVar31;
        fVar27 = fVar43 + fVar31;
        fVar23 = fVar44 + fVar31;
        fVar28 = fVar45 + fVar32;
        fVar29 = fVar46 + fVar32;
        fVar30 = fVar47 + fVar32;
        fVar24 = fVar48 + fVar32;
        pfVar2 = (float *)(lVar19 + uVar21 * 4);
        *pfVar2 = fVar33 + fVar37;
        pfVar2[1] = fVar34 + fVar38;
        pfVar2[2] = fVar35 + fVar39;
        pfVar2[3] = fVar36 + fVar40;
        pfVar2 = (float *)(lVar19 + uVar16 * 4);
        *pfVar2 = fVar9 * fVar45 + fVar5 * fVar41;
        pfVar2[1] = fVar10 * fVar46 + fVar6 * fVar42;
        pfVar2[2] = fVar11 * fVar47 + fVar7 * fVar43;
        pfVar2[3] = fVar12 * fVar48 + fVar8 * fVar44;
        uVar21 = (ulonglong)uVar20;
      } while (uVar20 < uVar4);
    }
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    local_res18 = lVar19;
    FUN_145129ce0(&local_res18,uVar4,0,param_1 + 0xd0,param_1 + 0xc0);
    local_res18 = lVar19;
    FUN_145129ce0(&local_res18,uVar4,0,param_1 + 0x160,param_1 + 0x150);
    local_res18 = lVar19;
    FUN_145129ce0(&local_res18,uVar4,0,param_1 + 0x1f0,param_1 + 0x1e0);
    if (uVar4 != 0) {
      puVar17 = (undefined4 *)(lVar13 + 8);
      puVar18 = (undefined4 *)(lVar19 + 0x1c);
      do {
        uVar20 = (int)uVar22 + 0x10;
        uVar22 = (ulonglong)uVar20;
        puVar17[-2] = puVar18[-4];
        puVar17[-1] = *puVar18;
        *puVar17 = puVar18[4];
        puVar17[1] = puVar18[8];
        puVar17 = puVar17 + 4;
        puVar18 = puVar18 + 0x10;
      } while (uVar20 < uVar4);
    }
  }
  return;
}



// FUNCTION 1453b8620 FUN_1453b8620 body=84 status=ok
// SIG undefined FUN_1453b8620(void)

void FUN_1453b8620(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x380);
  param_1 = param_1 + 0x280;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_14556dce0(param_1,param_3,param_2);
      return;
    }
    if (iVar1 == 2) {
      FUN_14556df00(param_1,param_3,param_2);
      return;
    }
    if (iVar1 == 3) {
      FUN_14556dff0(param_1,param_3,param_2);
      return;
    }
  }
  FUN_14556dab0(param_1,param_3,param_2);
  return;
}



// FUNCTION 1453b8680 FUN_1453b8680 body=219 status=ok
// SIG undefined FUN_1453b8680(void)

void FUN_1453b8680(longlong param_1,int param_2,float *param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
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
  
  fVar3 = *(float *)(param_1 + 0xa4);
  fVar9 = fVar3 + *(float *)(param_1 + 0xac);
  fVar10 = fVar9 + fVar3;
  fVar11 = fVar10 + fVar3;
  fVar15 = fVar3 * 4.0;
  fVar3 = fVar3 + fVar11;
  fVar4 = *(float *)(param_1 + 0x98);
  fVar12 = fVar4 + *(float *)(param_1 + 0xa0);
  fVar13 = fVar12 + fVar4;
  fVar14 = fVar13 + fVar4;
  fVar16 = fVar4 * 4.0;
  fVar4 = fVar4 + fVar14;
  if (param_2 != 0) {
    param_4 = param_4 - (longlong)param_3;
    uVar2 = (ulonglong)((param_2 - 1U >> 2) + 1);
    do {
      pfVar1 = (float *)(param_4 + (longlong)param_3);
      fVar5 = *pfVar1 * fVar12;
      fVar6 = pfVar1[1] * fVar13;
      fVar7 = pfVar1[2] * fVar14;
      fVar8 = pfVar1[3] * fVar4;
      fVar12 = fVar12 + fVar16;
      fVar13 = fVar13 + fVar16;
      fVar14 = fVar14 + fVar16;
      fVar4 = fVar4 + fVar16;
      fVar5 = (*param_3 + fVar5) * fVar9;
      fVar6 = (param_3[1] + fVar6) * fVar10;
      fVar7 = (param_3[2] + fVar7) * fVar11;
      fVar8 = (param_3[3] + fVar8) * fVar3;
      fVar9 = fVar9 + fVar15;
      fVar10 = fVar10 + fVar15;
      fVar11 = fVar11 + fVar15;
      fVar3 = fVar3 + fVar15;
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = fVar7;
      param_3[3] = fVar8;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1453b8760 FUN_1453b8760 body=367 status=ok
// SIG undefined FUN_1453b8760(void)

void FUN_1453b8760(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  if ((1.6e-05 < *(float *)(param_1 + 0xa0)) || (1.6e-05 < *(float *)(param_1 + 0x98))) {
    FUN_1453b8620(0x378637bd,param_2,param_4);
    FUN_1453b8680(param_1,param_2 & 0xffffffff,param_3,param_4);
  }
  else {
    fVar15 = *(float *)(param_1 + 0xa4);
    fVar20 = fVar15 + *(float *)(param_1 + 0xac);
    fVar21 = fVar20 + fVar15;
    fVar22 = fVar21 + fVar15;
    fVar6 = fVar15 * 4.0;
    fVar15 = fVar15 + fVar22;
    fVar27 = fVar6 + fVar6;
    fVar28 = fVar6 + fVar6;
    fVar29 = fVar6 + fVar6;
    fVar30 = fVar6 + fVar6;
    fVar31 = fVar6 + fVar20;
    fVar32 = fVar6 + fVar21;
    fVar33 = fVar6 + fVar22;
    fVar6 = fVar6 + fVar15;
    fVar34 = fVar27 + fVar20;
    fVar35 = fVar28 + fVar21;
    fVar36 = fVar29 + fVar22;
    fVar37 = fVar30 + fVar15;
    fVar38 = fVar31 + fVar27;
    fVar39 = fVar32 + fVar28;
    fVar40 = fVar33 + fVar29;
    fVar41 = fVar6 + fVar30;
    fVar27 = fVar27 + fVar27;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    if ((uint)param_2 != 0) {
      uVar5 = 8;
      do {
        pfVar2 = (float *)(param_3 + (ulonglong)(uVar5 - 8) * 4);
        pfVar3 = (float *)(param_3 + (ulonglong)(uVar5 - 4) * 4);
        pfVar4 = (float *)(param_3 + (ulonglong)(uVar5 + 4) * 4);
        fVar7 = *pfVar4;
        fVar8 = pfVar4[1];
        fVar9 = pfVar4[2];
        fVar10 = pfVar4[3];
        pfVar4 = (float *)(param_3 + (ulonglong)uVar5 * 4);
        fVar23 = *pfVar2 * fVar20;
        fVar24 = pfVar2[1] * fVar21;
        fVar25 = pfVar2[2] * fVar22;
        fVar26 = pfVar2[3] * fVar15;
        fVar20 = fVar20 + fVar27;
        fVar21 = fVar21 + fVar28;
        fVar22 = fVar22 + fVar29;
        fVar15 = fVar15 + fVar30;
        fVar16 = *pfVar3 * fVar31;
        fVar17 = pfVar3[1] * fVar32;
        fVar18 = pfVar3[2] * fVar33;
        fVar19 = pfVar3[3] * fVar6;
        fVar31 = fVar31 + fVar27;
        fVar32 = fVar32 + fVar28;
        fVar33 = fVar33 + fVar29;
        fVar6 = fVar6 + fVar30;
        fVar11 = *pfVar4 * fVar34;
        fVar12 = pfVar4[1] * fVar35;
        fVar13 = pfVar4[2] * fVar36;
        fVar14 = pfVar4[3] * fVar37;
        fVar34 = fVar34 + fVar27;
        fVar35 = fVar35 + fVar28;
        fVar36 = fVar36 + fVar29;
        fVar37 = fVar37 + fVar30;
        pfVar2 = (float *)(param_3 + (ulonglong)(uVar5 - 8) * 4);
        *pfVar2 = fVar23;
        pfVar2[1] = fVar24;
        pfVar2[2] = fVar25;
        pfVar2[3] = fVar26;
        fVar7 = fVar7 * fVar38;
        fVar8 = fVar8 * fVar39;
        fVar9 = fVar9 * fVar40;
        fVar10 = fVar10 * fVar41;
        fVar38 = fVar38 + fVar27;
        fVar39 = fVar39 + fVar28;
        fVar40 = fVar40 + fVar29;
        fVar41 = fVar41 + fVar30;
        pfVar2 = (float *)(param_3 + (ulonglong)(uVar5 - 4) * 4);
        *pfVar2 = fVar16;
        pfVar2[1] = fVar17;
        pfVar2[2] = fVar18;
        pfVar2[3] = fVar19;
        pfVar2 = (float *)(param_3 + (ulonglong)uVar5 * 4);
        *pfVar2 = fVar11;
        pfVar2[1] = fVar12;
        pfVar2[2] = fVar13;
        pfVar2[3] = fVar14;
        pfVar2 = (float *)(param_3 + (ulonglong)(uVar5 + 4) * 4);
        *pfVar2 = fVar7;
        pfVar2[1] = fVar8;
        pfVar2[2] = fVar9;
        pfVar2[3] = fVar10;
        uVar1 = uVar5 + 8;
        uVar5 = uVar5 + 0x10;
      } while (uVar1 < (uint)param_2);
    }
  }
  return;
}



// FUNCTION 1453b88d0 FUN_1453b88d0 body=218 status=ok
// SIG undefined FUN_1453b88d0(void)

undefined8 FUN_1453b88d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x20);
  if (iVar3 == 0) {
    *plVar1 = (longlong)&DAT_14c73c7f0;
  }
  else if (iVar3 == 1) {
    *plVar1 = (longlong)&DAT_14c73cff0;
  }
  else if (iVar3 == 2) {
    *plVar1 = (longlong)&DAT_14c73d7f0;
  }
  else if (iVar3 == 3) {
    *plVar1 = (longlong)&DAT_14c73dff0;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  plVar2 = (longlong *)(param_1 + 0x60);
  if (iVar3 == 0) {
    *plVar2 = (longlong)&DAT_14c73c7f0;
  }
  else if (iVar3 == 1) {
    *plVar2 = (longlong)&DAT_14c73cff0;
  }
  else if (iVar3 == 2) {
    *plVar2 = (longlong)&DAT_14c73d7f0;
  }
  else if (iVar3 == 3) {
    *plVar2 = (longlong)&DAT_14c73dff0;
  }
  if ((*plVar1 == 0) || (*plVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    FUN_1453b8270(param_1,param_2,param_3,param_4);
    FUN_1453b8760(param_1,param_2,param_3,param_4);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1453b89b0 FUN_1453b89b0 body=255 status=ok
// SIG undefined FUN_1453b89b0(void)

void FUN_1453b89b0(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    param_3 = param_3 - param_4;
    uVar3 = (ulonglong)((param_2 - 1U >> 3) + 1);
    piVar4 = (int *)(param_4 + 8);
    do {
      piVar1 = piVar4 + 8;
      *(undefined4 *)((longlong)piVar4 + param_3 + -8) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + -8) * 4);
      *(undefined4 *)((longlong)piVar4 + param_3 + -4) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + -4) * 4);
      *(undefined4 *)(param_3 + -0x20 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x20 + (longlong)piVar1) * 4);
      *(undefined4 *)((longlong)piVar4 + param_3 + 4) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + 4) * 4);
      *(undefined4 *)((longlong)piVar4 + param_3 + 8) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + 8) * 4);
      *(undefined4 *)((longlong)piVar4 + param_3 + 0xc) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + 0xc) * 4);
      *(undefined4 *)((longlong)piVar4 + param_3 + 0x10) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + 0x10) * 4);
      iVar2 = piVar4[-2];
      *(undefined4 *)((longlong)piVar4 + param_3 + 0x14) =
           *(undefined4 *)(param_1 + (longlong)*(int *)((longlong)piVar4 + param_3 + 0x14) * 4);
      piVar4[-2] = *(int *)(param_1 + (longlong)iVar2 * 4);
      piVar4[-1] = *(int *)(param_1 + (longlong)piVar4[-1] * 4);
      *piVar4 = *(int *)(param_1 + (longlong)*piVar4 * 4);
      piVar4[1] = *(int *)(param_1 + (longlong)piVar4[1] * 4);
      piVar4[2] = *(int *)(param_1 + (longlong)piVar4[2] * 4);
      piVar4[3] = *(int *)(param_1 + (longlong)piVar4[3] * 4);
      piVar4[4] = *(int *)(param_1 + (longlong)piVar4[4] * 4);
      piVar4[5] = *(int *)(param_1 + (longlong)piVar4[5] * 4);
      uVar3 = uVar3 - 1;
      piVar4 = piVar1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1453b8ab0 FUN_1453b8ab0 body=150 status=ok
// SIG undefined FUN_1453b8ab0(void)

void FUN_1453b8ab0(uint param_1,char param_2,longlong param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar29 = 1.0;
  fVar30 = 1.0;
  fVar31 = 1.0;
  fVar32 = 1.0;
  if (param_2 != '\0') {
    fVar29 = -1.0;
    fVar30 = -1.0;
    fVar31 = -1.0;
    fVar32 = -1.0;
  }
  uVar28 = 0;
  if (param_1 != 0) {
    do {
      pfVar1 = (float *)(param_3 + uVar28 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      uVar26 = (ulonglong)((int)uVar28 + 4);
      pfVar2 = (float *)(param_5 + uVar28 * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_4 + uVar28 * 4);
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      fVar13 = pfVar3[3];
      pfVar4 = (float *)(param_3 + uVar26 * 4);
      fVar14 = *pfVar4;
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar17 = pfVar4[3];
      pfVar4 = (float *)(param_5 + uVar26 * 4);
      fVar18 = *pfVar4;
      fVar19 = pfVar4[1];
      fVar20 = pfVar4[2];
      fVar21 = pfVar4[3];
      pfVar4 = (float *)(param_4 + uVar26 * 4);
      fVar22 = *pfVar4;
      fVar23 = pfVar4[1];
      fVar24 = pfVar4[2];
      fVar25 = pfVar4[3];
      pfVar4 = (float *)(param_6 + uVar28 * 4);
      *pfVar4 = ((*pfVar3 - *pfVar1) * *pfVar2 + *pfVar1) * fVar29;
      pfVar4[1] = ((fVar11 - fVar5) * fVar8 + fVar5) * fVar30;
      pfVar4[2] = ((fVar12 - fVar6) * fVar9 + fVar6) * fVar31;
      pfVar4[3] = ((fVar13 - fVar7) * fVar10 + fVar7) * fVar32;
      uVar27 = (int)uVar28 + 8;
      uVar28 = (ulonglong)uVar27;
      pfVar1 = (float *)(param_6 + uVar26 * 4);
      *pfVar1 = ((fVar22 - fVar14) * fVar18 + fVar14) * fVar29;
      pfVar1[1] = ((fVar23 - fVar15) * fVar19 + fVar15) * fVar30;
      pfVar1[2] = ((fVar24 - fVar16) * fVar20 + fVar16) * fVar31;
      pfVar1[3] = ((fVar25 - fVar17) * fVar21 + fVar17) * fVar32;
    } while (uVar27 < param_1);
  }
  return;
}



// FUNCTION 1453b8b50 FUN_1453b8b50 body=454 status=ok
// SIG undefined FUN_1453b8b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453b8b50(uint param_1,float param_2,float param_3,longlong param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,longlong param_8,longlong param_9)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
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
  
  fVar15 = fRam000000014c7fe01c;
  fVar14 = fRam000000014c7fe018;
  fVar13 = fRam000000014c7fe014;
  fVar12 = _DAT_14c7fe010;
  uVar11 = uRam000000014c7fdffc;
  uVar10 = uRam000000014c7fdff8;
  uVar9 = uRam000000014c7fdff4;
  uVar8 = _DAT_14c7fdff0;
  iVar7 = iRam000000014c7fdfec;
  iVar6 = iRam000000014c7fdfe8;
  iVar5 = iRam000000014c7fdfe4;
  iVar4 = _DAT_14c7fdfe0;
  uVar17 = 0;
  fVar37 = param_2 * *(float *)(param_4 + 0x18);
  fVar38 = *(float *)(param_4 + 0x14);
  fVar33 = param_2 * *(float *)(param_4 + 0x20) + fVar37;
  fVar40 = param_3 * 4.0;
  fVar39 = fVar37 * 4.0;
  fVar34 = fVar33 + fVar37;
  fVar35 = fVar34 + fVar37;
  fVar23 = fVar38 + fVar33 * param_3;
  fVar18 = fVar37 + fVar35;
  fVar24 = fVar23 + fVar34 * param_3;
  fVar37 = param_3 * 6.0 * fVar37;
  fVar36 = fVar35 * param_3 + fVar24;
  fVar38 = fVar38 - (float)(int)fVar38;
  fVar23 = fVar23 - (float)(int)fVar23;
  fVar24 = fVar24 - (float)(int)fVar24;
  fVar36 = fVar36 - (float)(int)fVar36;
  if (param_1 != 0) {
    do {
      fVar19 = fVar33 * fVar40;
      fVar20 = fVar34 * fVar40;
      fVar21 = fVar35 * fVar40;
      fVar22 = fVar18 * fVar40;
      fVar33 = fVar33 + fVar39;
      fVar34 = fVar34 + fVar39;
      fVar35 = fVar35 + fVar39;
      fVar18 = fVar18 + fVar39;
      fVar29 = fVar12 * fVar38;
      fVar30 = fVar13 * fVar23;
      fVar31 = fVar14 * fVar24;
      fVar32 = fVar15 * fVar36;
      fVar19 = fVar38 + fVar37 + fVar19;
      fVar20 = fVar23 + fVar37 + fVar20;
      fVar21 = fVar24 + fVar37 + fVar21;
      fVar22 = fVar36 + fVar37 + fVar22;
      iVar25 = (int)fVar29;
      iVar26 = (int)fVar30;
      iVar27 = (int)fVar31;
      iVar28 = (int)fVar32;
      piVar1 = (int *)(param_7 + uVar17 * 4);
      *piVar1 = iVar25;
      piVar1[1] = iVar26;
      piVar1[2] = iVar27;
      piVar1[3] = iVar28;
      fVar38 = fVar19 - (float)(int)fVar19;
      fVar23 = fVar20 - (float)(int)fVar20;
      fVar24 = fVar21 - (float)(int)fVar21;
      fVar36 = fVar22 - (float)(int)fVar22;
      puVar2 = (uint *)(param_8 + uVar17 * 4);
      *puVar2 = iVar4 + iVar25 & uVar8;
      puVar2[1] = iVar5 + iVar26 & uVar9;
      puVar2[2] = iVar6 + iVar27 & uVar10;
      puVar2[3] = iVar7 + iVar28 & uVar11;
      pfVar3 = (float *)(param_9 + uVar17 * 4);
      *pfVar3 = fVar29 - (float)iVar25;
      pfVar3[1] = fVar30 - (float)iVar26;
      pfVar3[2] = fVar31 - (float)iVar27;
      pfVar3[3] = fVar32 - (float)iVar28;
      uVar16 = (int)uVar17 + 4;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < param_1);
  }
  *(float *)(param_4 + 0x14) = fVar38;
  return;
}



// FUNCTION 1453b8d20 FUN_1453b8d20 body=734 status=ok
// SIG undefined FUN_1453b8d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453b8d20(uint param_1,float param_2,float param_3,longlong param_4,float *param_5,
                  longlong param_6,longlong param_7,longlong param_8,longlong param_9)

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  int iVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  uVar4 = 0;
  fVar37 = param_2 * *(float *)(param_4 + 0x18);
  fVar39 = *(float *)(param_4 + 0x14);
  fVar33 = param_2 * *(float *)(param_4 + 0x20) + fVar37;
  fVar40 = fVar37 * 4.0;
  fVar34 = fVar33 + fVar37;
  fVar41 = param_3 * 4.0;
  fVar15 = fVar39 + fVar33 * param_3;
  fVar35 = fVar34 + fVar37;
  fVar9 = fVar37 + fVar35;
  fVar16 = fVar15 + fVar34 * param_3;
  fVar10 = *param_5;
  fVar36 = fVar35 * param_3 + fVar16;
  fVar38 = param_3 * 20000.0;
  fVar39 = fVar39 - (float)(int)fVar39;
  fVar15 = fVar15 - (float)(int)fVar15;
  fVar16 = fVar16 - (float)(int)fVar16;
  fVar36 = fVar36 - (float)(int)fVar36;
  fVar17 = fVar10 + param_5[2];
  fVar37 = param_3 * 6.0 * fVar37;
  fVar18 = fVar17 + fVar10;
  fVar19 = fVar18 + fVar10;
  fVar20 = fVar10 * 4.0;
  fVar10 = fVar10 + fVar19;
  if (param_1 != 0) {
    do {
      pfVar1 = (float *)(param_6 + uVar4 * 4);
      fVar21 = fVar17 * 0.2;
      fVar24 = fVar18 * 0.2;
      fVar27 = fVar19 * 0.2;
      fVar30 = fVar10 * 0.2;
      fVar17 = fVar17 + fVar20;
      fVar18 = fVar18 + fVar20;
      fVar19 = fVar19 + fVar20;
      fVar10 = fVar10 + fVar20;
      fVar21 = (fVar38 - param_3 * fVar33) * *pfVar1 * fVar21 + fVar39;
      fVar24 = (fVar38 - param_3 * fVar34) * pfVar1[1] * fVar24 + fVar15;
      fVar27 = (fVar38 - param_3 * fVar35) * pfVar1[2] * fVar27 + fVar16;
      fVar30 = (fVar38 - param_3 * fVar9) * pfVar1[3] * fVar30 + fVar36;
      fVar21 = fVar21 - (float)(int)fVar21;
      fVar24 = fVar24 - (float)(int)fVar24;
      fVar27 = fVar27 - (float)(int)fVar27;
      fVar30 = fVar30 - (float)(int)fVar30;
      fVar22 = (float)(~-(uint)(0.0 <= fVar21) & (uint)(fVar21 + 1.0) |
                      -(uint)(0.0 <= fVar21) & (uint)fVar21);
      fVar25 = (float)(~-(uint)(0.0 <= fVar24) & (uint)(fVar24 + 1.0) |
                      -(uint)(0.0 <= fVar24) & (uint)fVar24);
      fVar28 = (float)(~-(uint)(0.0 <= fVar27) & (uint)(fVar27 + 1.0) |
                      -(uint)(0.0 <= fVar27) & (uint)fVar27);
      fVar31 = (float)(~-(uint)(0.0 <= fVar30) & (uint)(fVar30 + 1.0) |
                      -(uint)(0.0 <= fVar30) & (uint)fVar30);
      fVar21 = fVar22 - 1.0;
      fVar27 = fVar25 - 1.0;
      fVar11 = fVar28 - 1.0;
      fVar13 = fVar31 - 1.0;
      uVar5 = -(uint)(0.0 <= fVar21);
      uVar6 = -(uint)(0.0 <= fVar27);
      uVar7 = -(uint)(0.0 <= fVar11);
      uVar8 = -(uint)(0.0 <= fVar13);
      fVar24 = fVar33 * fVar41;
      fVar30 = fVar34 * fVar41;
      fVar12 = fVar35 * fVar41;
      fVar14 = fVar9 * fVar41;
      fVar21 = _DAT_14c7fe010 * (float)(uVar5 & (uint)fVar21 | ~uVar5 & (uint)fVar22);
      fVar27 = fRam000000014c7fe014 * (float)(uVar6 & (uint)fVar27 | ~uVar6 & (uint)fVar25);
      fVar11 = fRam000000014c7fe018 * (float)(uVar7 & (uint)fVar11 | ~uVar7 & (uint)fVar28);
      fVar13 = fRam000000014c7fe01c * (float)(uVar8 & (uint)fVar13 | ~uVar8 & (uint)fVar31);
      fVar33 = fVar33 + fVar40;
      fVar34 = fVar34 + fVar40;
      fVar35 = fVar35 + fVar40;
      fVar9 = fVar9 + fVar40;
      fVar24 = fVar39 + fVar37 + fVar24;
      fVar30 = fVar15 + fVar37 + fVar30;
      fVar12 = fVar16 + fVar37 + fVar12;
      fVar14 = fVar36 + fVar37 + fVar14;
      iVar23 = (int)fVar21;
      iVar26 = (int)fVar27;
      iVar29 = (int)fVar11;
      iVar32 = (int)fVar13;
      piVar2 = (int *)(param_7 + uVar4 * 4);
      *piVar2 = iVar23;
      piVar2[1] = iVar26;
      piVar2[2] = iVar29;
      piVar2[3] = iVar32;
      fVar39 = fVar24 - (float)(int)fVar24;
      fVar15 = fVar30 - (float)(int)fVar30;
      fVar16 = fVar12 - (float)(int)fVar12;
      fVar36 = fVar14 - (float)(int)fVar14;
      uVar5 = iRam000000014c7fdfe4 + iVar26 & uRam000000014c7fdff4;
      uVar6 = iRam000000014c7fdfe8 + iVar29 & uRam000000014c7fdff8;
      uVar7 = iRam000000014c7fdfec + iVar32 & uRam000000014c7fdffc;
      puVar3 = (uint *)(param_8 + uVar4 * 4);
      *puVar3 = _DAT_14c7fdfe0 + iVar23 & _DAT_14c7fdff0;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      pfVar1 = (float *)(param_9 + uVar4 * 4);
      *pfVar1 = fVar21 - (float)iVar23;
      pfVar1[1] = fVar27 - (float)iVar26;
      pfVar1[2] = fVar11 - (float)iVar29;
      pfVar1[3] = fVar13 - (float)iVar32;
      uVar5 = (int)uVar4 + 4;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < param_1);
  }
  *(float *)(param_4 + 0x14) = fVar39;
  return;
}



// FUNCTION 1453b9000 FUN_1453b9000 body=699 status=ok
// SIG undefined FUN_1453b9000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453b9000(uint param_1,float param_2,float param_3,longlong param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,longlong param_8,longlong param_9)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
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
  int iVar38;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  undefined1 auVar39 [16];
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  fVar15 = fRam000000014c7fe01c;
  fVar14 = fRam000000014c7fe018;
  fVar13 = fRam000000014c7fe014;
  fVar12 = _DAT_14c7fe010;
  fVar11 = fRam000000014c7fe00c;
  fVar10 = fRam000000014c7fe008;
  fVar9 = fRam000000014c7fe004;
  fVar8 = _DAT_14c7fe000;
  uVar16 = 0;
  fVar52 = param_2 * *(float *)(param_4 + 0x18);
  fVar53 = *(float *)(param_4 + 0x14);
  fVar46 = param_2 * *(float *)(param_4 + 0x20) + fVar52;
  fVar55 = param_3 * 4.0;
  fVar54 = fVar52 * 4.0;
  fVar47 = fVar46 + fVar52;
  fVar26 = fVar53 + fVar46 * param_3;
  fVar48 = fVar47 + fVar52;
  fVar21 = fVar52 + fVar48;
  fVar27 = fVar26 + fVar47 * param_3;
  fVar35 = *(float *)(param_4 + 0x30) * 0.01;
  fVar52 = param_3 * 6.0 * fVar52;
  fVar49 = fVar48 * param_3 + fVar27;
  fVar53 = fVar53 - (float)(int)fVar53;
  fVar26 = fVar26 - (float)(int)fVar26;
  fVar27 = fVar27 - (float)(int)fVar27;
  fVar49 = fVar49 - (float)(int)fVar49;
  fVar28 = *(float *)(param_4 + 0x38) * 0.01 + fVar35;
  fVar29 = fVar28 + fVar35;
  fVar30 = fVar29 + fVar35;
  fVar36 = fVar35 * 4.0;
  fVar35 = fVar35 + fVar30;
  if (param_1 != 0) {
    do {
      iVar7 = iRam000000014c7fdfec;
      iVar6 = iRam000000014c7fdfe8;
      iVar5 = iRam000000014c7fdfe4;
      iVar4 = _DAT_14c7fdfe0;
      uVar17 = -(uint)(fVar28 <= fVar53);
      uVar18 = -(uint)(fVar29 <= fVar26);
      uVar19 = -(uint)(fVar30 <= fVar27);
      uVar20 = -(uint)(fVar35 <= fVar49);
      fVar31 = fVar53 - fVar28;
      fVar32 = fVar26 - fVar29;
      fVar33 = fVar27 - fVar30;
      fVar34 = fVar49 - fVar35;
      uVar22 = ~uVar17 & (uint)fVar28;
      uVar23 = ~uVar18 & (uint)fVar29;
      uVar24 = ~uVar19 & (uint)fVar30;
      uVar25 = ~uVar20 & (uint)fVar35;
      fVar37 = 1.0 - fVar28;
      fVar40 = 1.0 - fVar29;
      fVar42 = 1.0 - fVar30;
      fVar44 = 1.0 - fVar35;
      fVar28 = fVar28 + fVar36;
      fVar29 = fVar29 + fVar36;
      fVar30 = fVar30 + fVar36;
      fVar35 = fVar35 + fVar36;
      auVar50._0_4_ = (float)(~uVar17 & (uint)fVar53 | (uint)fVar31 & uVar17) * fVar8;
      auVar50._4_4_ = (float)(~uVar18 & (uint)fVar26 | (uint)fVar32 & uVar18) * fVar9;
      auVar50._8_4_ = (float)(~uVar19 & (uint)fVar27 | (uint)fVar33 & uVar19) * fVar10;
      auVar50._12_4_ = (float)(~uVar20 & (uint)fVar49 | (uint)fVar34 & uVar20) * fVar11;
      auVar39._0_4_ = (uint)fVar37 & uVar17;
      auVar39._4_4_ = (uint)fVar40 & uVar18;
      auVar39._8_4_ = (uint)fVar42 & uVar19;
      auVar39._12_4_ = (uint)fVar44 & uVar20;
      auVar51._4_4_ = uVar23;
      auVar51._0_4_ = uVar22;
      auVar51._8_4_ = uVar24;
      auVar51._12_4_ = uVar25;
      fVar31 = fVar46 * fVar55;
      fVar32 = fVar47 * fVar55;
      fVar33 = fVar48 * fVar55;
      fVar34 = fVar21 * fVar55;
      fVar46 = fVar46 + fVar54;
      fVar47 = fVar47 + fVar54;
      fVar48 = fVar48 + fVar54;
      fVar21 = fVar21 + fVar54;
      auVar51 = divps(auVar50,auVar39 | auVar51);
      fVar31 = fVar53 + fVar52 + fVar31;
      fVar32 = fVar26 + fVar52 + fVar32;
      fVar33 = fVar27 + fVar52 + fVar33;
      fVar34 = fVar49 + fVar52 + fVar34;
      fVar53 = auVar51._0_4_ + (float)(uVar17 & (uint)fVar8);
      fVar26 = auVar51._4_4_ + (float)(uVar18 & (uint)fVar9);
      fVar27 = auVar51._8_4_ + (float)(uVar19 & (uint)fVar10);
      fVar49 = auVar51._12_4_ + (float)(uVar20 & (uint)fVar11);
      fVar37 = (float)(~-(uint)(1.0 <= fVar53) & (uint)fVar53) * fVar12;
      fVar40 = (float)(~-(uint)(1.0 <= fVar26) & (uint)fVar26) * fVar13;
      fVar42 = (float)(~-(uint)(1.0 <= fVar27) & (uint)fVar27) * fVar14;
      fVar44 = (float)(~-(uint)(1.0 <= fVar49) & (uint)fVar49) * fVar15;
      fVar53 = fVar31 - (float)(int)fVar31;
      fVar26 = fVar32 - (float)(int)fVar32;
      fVar27 = fVar33 - (float)(int)fVar33;
      fVar49 = fVar34 - (float)(int)fVar34;
      iVar38 = (int)fVar37;
      iVar41 = (int)fVar40;
      iVar43 = (int)fVar42;
      iVar45 = (int)fVar44;
      piVar1 = (int *)(param_7 + uVar16 * 4);
      *piVar1 = iVar38;
      piVar1[1] = iVar41;
      piVar1[2] = iVar43;
      piVar1[3] = iVar45;
      uVar17 = iVar5 + iVar41 & uRam000000014c7fdff4;
      uVar18 = iVar6 + iVar43 & uRam000000014c7fdff8;
      uVar19 = iVar7 + iVar45 & uRam000000014c7fdffc;
      puVar2 = (uint *)(param_8 + uVar16 * 4);
      *puVar2 = iVar4 + iVar38 & _DAT_14c7fdff0;
      puVar2[1] = uVar17;
      puVar2[2] = uVar18;
      puVar2[3] = uVar19;
      pfVar3 = (float *)(param_9 + uVar16 * 4);
      *pfVar3 = fVar37 - (float)iVar38;
      pfVar3[1] = fVar40 - (float)iVar41;
      pfVar3[2] = fVar42 - (float)iVar43;
      pfVar3[3] = fVar44 - (float)iVar45;
      uVar17 = (int)uVar16 + 4;
      uVar16 = (ulonglong)uVar17;
    } while (uVar17 < param_1);
  }
  *(float *)(param_4 + 0x14) = fVar53;
  return;
}



// FUNCTION 1453b92c0 FUN_1453b92c0 body=920 status=ok
// SIG undefined FUN_1453b92c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453b92c0(uint param_1,float param_2,float param_3,longlong param_4,float *param_5,
                  longlong param_6,longlong param_7,longlong param_8,longlong param_9)

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  int iVar28;
  float fVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar38;
  int iVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  fVar45 = param_2 * *(float *)(param_4 + 0x18);
  fVar47 = *(float *)(param_4 + 0x14);
  fVar41 = param_2 * *(float *)(param_4 + 0x20) + fVar45;
  fVar42 = fVar41 + fVar45;
  fVar43 = fVar42 + fVar45;
  fVar15 = fVar47 + fVar41 * param_3;
  fVar48 = fVar45 * 4.0;
  fVar49 = param_3 * 4.0;
  fVar9 = fVar45 + fVar43;
  fVar45 = param_3 * 6.0 * fVar45;
  fVar16 = fVar15 + fVar42 * param_3;
  fVar10 = *param_5;
  fVar44 = fVar43 * param_3 + fVar16;
  fVar47 = fVar47 - (float)(int)fVar47;
  fVar15 = fVar15 - (float)(int)fVar15;
  fVar16 = fVar16 - (float)(int)fVar16;
  fVar44 = fVar44 - (float)(int)fVar44;
  fVar17 = fVar10 + param_5[2];
  fVar18 = fVar17 + fVar10;
  fVar19 = fVar18 + fVar10;
  fVar23 = fVar10 * 4.0;
  fVar10 = fVar10 + fVar19;
  fVar24 = *(float *)(param_4 + 0x30) * 0.01;
  fVar20 = *(float *)(param_4 + 0x38) * 0.01 + fVar24;
  fVar21 = fVar20 + fVar24;
  fVar22 = fVar21 + fVar24;
  fVar25 = fVar24 * 4.0;
  uVar4 = 0;
  fVar46 = param_3 * 20000.0;
  fVar24 = fVar24 + fVar22;
  if (param_1 != 0) {
    do {
      pfVar1 = (float *)(param_6 + uVar4 * 4);
      fVar26 = fVar17 * 0.2;
      fVar31 = fVar18 * 0.2;
      fVar34 = fVar19 * 0.2;
      fVar37 = fVar10 * 0.2;
      fVar17 = fVar17 + fVar23;
      fVar18 = fVar18 + fVar23;
      fVar19 = fVar19 + fVar23;
      fVar10 = fVar10 + fVar23;
      fVar26 = (fVar46 - param_3 * fVar41) * *pfVar1 * fVar26 + fVar47;
      fVar31 = (fVar46 - param_3 * fVar42) * pfVar1[1] * fVar31 + fVar15;
      fVar34 = (fVar46 - param_3 * fVar43) * pfVar1[2] * fVar34 + fVar16;
      fVar37 = (fVar46 - param_3 * fVar9) * pfVar1[3] * fVar37 + fVar44;
      fVar26 = fVar26 - (float)(int)fVar26;
      fVar31 = fVar31 - (float)(int)fVar31;
      fVar34 = fVar34 - (float)(int)fVar34;
      fVar37 = fVar37 - (float)(int)fVar37;
      fVar27 = (float)(~-(uint)(0.0 <= fVar26) & (uint)(fVar26 + 1.0) |
                      -(uint)(0.0 <= fVar26) & (uint)fVar26);
      fVar32 = (float)(~-(uint)(0.0 <= fVar31) & (uint)(fVar31 + 1.0) |
                      -(uint)(0.0 <= fVar31) & (uint)fVar31);
      fVar35 = (float)(~-(uint)(0.0 <= fVar34) & (uint)(fVar34 + 1.0) |
                      -(uint)(0.0 <= fVar34) & (uint)fVar34);
      fVar38 = (float)(~-(uint)(0.0 <= fVar37) & (uint)(fVar37 + 1.0) |
                      -(uint)(0.0 <= fVar37) & (uint)fVar37);
      fVar26 = fVar27 - 1.0;
      fVar31 = fVar32 - 1.0;
      fVar34 = fVar35 - 1.0;
      fVar37 = fVar38 - 1.0;
      uVar5 = -(uint)(0.0 <= fVar26);
      uVar6 = -(uint)(0.0 <= fVar31);
      uVar7 = -(uint)(0.0 <= fVar34);
      uVar8 = -(uint)(0.0 <= fVar37);
      fVar27 = (float)(uVar5 & (uint)fVar26 | ~uVar5 & (uint)fVar27);
      fVar32 = (float)(uVar6 & (uint)fVar31 | ~uVar6 & (uint)fVar32);
      fVar35 = (float)(uVar7 & (uint)fVar34 | ~uVar7 & (uint)fVar35);
      fVar38 = (float)(uVar8 & (uint)fVar37 | ~uVar8 & (uint)fVar38);
      uVar5 = -(uint)(fVar20 <= fVar27);
      uVar6 = -(uint)(fVar21 <= fVar32);
      uVar7 = -(uint)(fVar22 <= fVar35);
      uVar8 = -(uint)(fVar24 <= fVar38);
      auVar40._0_4_ = (uint)(1.0 - fVar20) & uVar5;
      auVar40._4_4_ = (uint)(1.0 - fVar21) & uVar6;
      auVar40._8_4_ = (uint)(1.0 - fVar22) & uVar7;
      auVar40._12_4_ = (uint)(1.0 - fVar24) & uVar8;
      fVar26 = fVar27 - fVar20;
      fVar31 = fVar32 - fVar21;
      fVar34 = fVar35 - fVar22;
      fVar37 = fVar38 - fVar24;
      uVar11 = ~uVar5 & (uint)fVar20;
      uVar12 = ~uVar6 & (uint)fVar21;
      uVar13 = ~uVar7 & (uint)fVar22;
      uVar14 = ~uVar8 & (uint)fVar24;
      fVar20 = fVar20 + fVar25;
      fVar21 = fVar21 + fVar25;
      fVar22 = fVar22 + fVar25;
      fVar24 = fVar24 + fVar25;
      auVar30._4_4_ = uVar12;
      auVar30._0_4_ = uVar11;
      auVar30._8_4_ = uVar13;
      auVar30._12_4_ = uVar14;
      auVar29._0_4_ = (float)(~uVar5 & (uint)fVar27 | (uint)fVar26 & uVar5) * _DAT_14c7fe000;
      auVar29._4_4_ = (float)(~uVar6 & (uint)fVar32 | (uint)fVar31 & uVar6) * fRam000000014c7fe004;
      auVar29._8_4_ = (float)(~uVar7 & (uint)fVar35 | (uint)fVar34 & uVar7) * fRam000000014c7fe008;
      auVar29._12_4_ = (float)(~uVar8 & (uint)fVar38 | (uint)fVar37 & uVar8) * fRam000000014c7fe00c;
      auVar30 = divps(auVar29,auVar40 | auVar30);
      fVar27 = auVar30._0_4_ + (float)(uVar5 & (uint)_DAT_14c7fe000);
      fVar32 = auVar30._4_4_ + (float)(uVar6 & (uint)fRam000000014c7fe004);
      fVar35 = auVar30._8_4_ + (float)(uVar7 & (uint)fRam000000014c7fe008);
      fVar38 = auVar30._12_4_ + (float)(uVar8 & (uint)fRam000000014c7fe00c);
      fVar26 = fVar41 * fVar49;
      fVar31 = fVar42 * fVar49;
      fVar34 = fVar43 * fVar49;
      fVar37 = fVar9 * fVar49;
      fVar41 = fVar41 + fVar48;
      fVar42 = fVar42 + fVar48;
      fVar43 = fVar43 + fVar48;
      fVar9 = fVar9 + fVar48;
      fVar27 = _DAT_14c7fe010 * (float)(~-(uint)(1.0 <= fVar27) & (uint)fVar27);
      fVar32 = fRam000000014c7fe014 * (float)(~-(uint)(1.0 <= fVar32) & (uint)fVar32);
      fVar35 = fRam000000014c7fe018 * (float)(~-(uint)(1.0 <= fVar35) & (uint)fVar35);
      fVar38 = fRam000000014c7fe01c * (float)(~-(uint)(1.0 <= fVar38) & (uint)fVar38);
      fVar26 = fVar47 + fVar45 + fVar26;
      fVar31 = fVar15 + fVar45 + fVar31;
      fVar34 = fVar16 + fVar45 + fVar34;
      fVar37 = fVar44 + fVar45 + fVar37;
      iVar28 = (int)fVar27;
      iVar33 = (int)fVar32;
      iVar36 = (int)fVar35;
      iVar39 = (int)fVar38;
      piVar2 = (int *)(param_7 + uVar4 * 4);
      *piVar2 = iVar28;
      piVar2[1] = iVar33;
      piVar2[2] = iVar36;
      piVar2[3] = iVar39;
      fVar47 = fVar26 - (float)(int)fVar26;
      fVar15 = fVar31 - (float)(int)fVar31;
      fVar16 = fVar34 - (float)(int)fVar34;
      fVar44 = fVar37 - (float)(int)fVar37;
      uVar5 = iRam000000014c7fdfe4 + iVar33 & uRam000000014c7fdff4;
      uVar6 = iRam000000014c7fdfe8 + iVar36 & uRam000000014c7fdff8;
      uVar7 = iRam000000014c7fdfec + iVar39 & uRam000000014c7fdffc;
      puVar3 = (uint *)(param_8 + uVar4 * 4);
      *puVar3 = _DAT_14c7fdfe0 + iVar28 & _DAT_14c7fdff0;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      pfVar1 = (float *)(param_9 + uVar4 * 4);
      *pfVar1 = fVar27 - (float)iVar28;
      pfVar1[1] = fVar32 - (float)iVar33;
      pfVar1[2] = fVar35 - (float)iVar36;
      pfVar1[3] = fVar38 - (float)iVar39;
      uVar5 = (int)uVar4 + 4;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < param_1);
  }
  *(float *)(param_4 + 0x14) = fVar47;
  return;
}



// FUNCTION 1453b9660 FUN_1453b9660 body=4724 status=ok
// SIG undefined FUN_1453b9660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453b9660(undefined8 *param_1,undefined1 (*param_2) [32],uint param_3,uint param_4,
                  uint *param_5,float param_6,float param_7,uint param_8,uint param_9,float param_10
                  )

{
  undefined1 (*pauVar1) [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [28];
  float *pfVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  ulonglong uVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float *pfVar22;
  undefined1 (*pauVar23) [32];
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar46 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  float fVar52;
  float fVar53;
  float fVar62;
  float fVar64;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  float fVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar57 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  undefined1 auVar83 [16];
  undefined1 local_d8 [8];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [8];
  float fStack_c4;
  float fStack_c0;
  
  fVar7 = param_10 * param_10 * param_10;
  uVar14 = (ulonglong)param_4 & 0xfffffff8;
  auVar83 = vinsertps_avx(ZEXT416((uint)param_10),ZEXT416((uint)(param_10 * param_10)),0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416((uint)fVar7),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416((uint)(fVar7 * param_10)),0x30);
  fVar7 = 1.0 - param_10;
  fStack_c4 = fVar7 * param_10 * param_10;
  auStack_cc._0_4_ = 0;
  _local_d8 = ZEXT812(0);
  auStack_cc._4_4_ = fVar7 * param_10;
  pauVar1 = (undefined1 (*) [32])((longlong)*param_2 + (ulonglong)param_4 * 4);
  uVar25 = uVar14 * 4;
  fStack_c0 = fStack_c4 * param_10;
  auVar81 = ZEXT464(*param_5);
  uVar19 = param_5[1];
  auVar82 = ZEXT1664(CONCAT412(uVar19,CONCAT48(uVar19,CONCAT44(uVar19,uVar19))));
  pauVar23 = (undefined1 (*) [32])((longlong)*param_2 + uVar14 * 4);
  auVar9 = local_d8._16_12_;
  auStack_cc._0_4_ = fVar7;
  auVar10._16_12_ = auVar9;
  auVar10._0_16_ = _local_d8;
  auVar80._0_12_ = ZEXT812(0);
  auVar80._12_4_ = 0;
  if (param_2 < pauVar23) {
    _auStack_cc = auVar10._12_16_;
    auVar46 = _auStack_cc;
    _auStack_d0 = auVar10._8_16_;
    auVar26 = _auStack_d0;
    stack0xffffffffffffff2c = auVar10._4_16_;
    pauVar16 = param_2;
    if (0x3f < uVar25) {
      do {
        auVar29._0_4_ = *(float *)*pauVar16 + 1e-25;
        auVar29._4_4_ = *(float *)((longlong)*pauVar16 + 4) + 1e-25;
        auVar29._8_4_ = *(float *)((longlong)*pauVar16 + 8) + 1e-25;
        auVar29._12_4_ = *(float *)((longlong)*pauVar16 + 0xc) + 1e-25;
        auVar57 = vpermilps_avx(auVar29,0xff);
        auVar54._0_4_ = auVar57._0_4_ * 0.0;
        auVar54._4_4_ = auVar57._4_4_ * 0.0;
        auVar54._8_4_ = auVar57._8_4_ * 0.0;
        auVar54._12_4_ = auVar57._12_4_ * fVar7;
        auVar57 = vpermilps_avx(auVar29,0xaa);
        auVar54 = vfmadd231ps_fma(auVar54,auVar57,stack0xffffffffffffff2c);
        auVar57 = vpermilps_avx(auVar29,0x55);
        auVar54 = vfmadd231ps_fma(auVar54,auVar57,auVar26);
        auVar57 = vpermilps_avx(auVar29,0);
        auVar57 = vfmadd231ps_fma(auVar54,auVar57,auVar46);
        auVar54 = vfmadd231ps_fma(auVar57,auVar82._0_16_,auVar83);
        *(undefined1 (*) [16])*pauVar16 = auVar54;
        auVar28._0_4_ = *(float *)((longlong)*pauVar16 + 0x10) + 1e-25;
        auVar28._4_4_ = *(float *)((longlong)*pauVar16 + 0x14) + 1e-25;
        auVar28._8_4_ = *(float *)((longlong)*pauVar16 + 0x18) + 1e-25;
        auVar28._12_4_ = *(float *)((longlong)*pauVar16 + 0x1c) + 1e-25;
        auVar57 = vpermilps_avx(auVar28,0xff);
        auVar76._0_4_ = auVar57._0_4_ * 0.0;
        auVar76._4_4_ = auVar57._4_4_ * 0.0;
        auVar76._8_4_ = auVar57._8_4_ * 0.0;
        auVar76._12_4_ = auVar57._12_4_ * fVar7;
        auVar57 = vpermilps_avx(auVar28,0xaa);
        auVar29 = vfmadd231ps_fma(auVar76,auVar57,stack0xffffffffffffff2c);
        auVar57 = vpermilps_avx(auVar28,0x55);
        auVar29 = vfmadd231ps_fma(auVar29,auVar57,auVar26);
        auVar57 = vpermilps_avx(auVar54,0xff);
        auVar54 = vpermilps_avx(auVar28,0);
        auVar54 = vfmadd231ps_fma(auVar29,auVar54,auVar46);
        auVar54 = vfmadd231ps_fma(auVar54,auVar57,auVar83);
        *(undefined1 (*) [16])((longlong)*pauVar16 + 0x10) = auVar54;
        auVar27._0_4_ = *(float *)pauVar16[1] + 1e-25;
        auVar27._4_4_ = *(float *)((longlong)pauVar16[1] + 4) + 1e-25;
        auVar27._8_4_ = *(float *)((longlong)pauVar16[1] + 8) + 1e-25;
        auVar27._12_4_ = *(float *)((longlong)pauVar16[1] + 0xc) + 1e-25;
        auVar57 = vpermilps_avx(auVar27,0xff);
        auVar77._0_4_ = auVar57._0_4_ * 0.0;
        auVar77._4_4_ = auVar57._4_4_ * 0.0;
        auVar77._8_4_ = auVar57._8_4_ * 0.0;
        auVar77._12_4_ = auVar57._12_4_ * fVar7;
        auVar57 = vpermilps_avx(auVar27,0xaa);
        auVar29 = vfmadd231ps_fma(auVar77,auVar57,stack0xffffffffffffff2c);
        auVar57 = vpermilps_avx(auVar27,0x55);
        auVar29 = vfmadd231ps_fma(auVar29,auVar57,auVar26);
        auVar57 = vpermilps_avx(auVar27,0);
        auVar29 = vfmadd231ps_fma(auVar29,auVar57,auVar46);
        auVar57 = vpermilps_avx(auVar54,0xff);
        auVar54 = vfmadd231ps_fma(auVar29,auVar57,auVar83);
        *(undefined1 (*) [16])pauVar16[1] = auVar54;
        auVar44._0_4_ = *(float *)((longlong)pauVar16[1] + 0x10) + 1e-25;
        auVar44._4_4_ = *(float *)((longlong)pauVar16[1] + 0x14) + 1e-25;
        auVar44._8_4_ = *(float *)((longlong)pauVar16[1] + 0x18) + 1e-25;
        auVar44._12_4_ = *(float *)((longlong)pauVar16[1] + 0x1c) + 1e-25;
        auVar57 = vpermilps_avx(auVar44,0xff);
        auVar55._0_4_ = auVar57._0_4_ * 0.0;
        auVar55._4_4_ = auVar57._4_4_ * 0.0;
        auVar55._8_4_ = auVar57._8_4_ * 0.0;
        auVar55._12_4_ = auVar57._12_4_ * fVar7;
        auVar57 = vpermilps_avx(auVar44,0xaa);
        auVar29 = vfmadd231ps_fma(auVar55,auVar57,stack0xffffffffffffff2c);
        auVar57 = vpermilps_avx(auVar44,0x55);
        auVar29 = vfmadd231ps_fma(auVar29,auVar57,auVar26);
        auVar57 = vpermilps_avx(auVar44,0);
        auVar29 = vfmadd231ps_fma(auVar29,auVar57,auVar46);
        auVar57 = vpermilps_avx(auVar54,0xff);
        auVar57 = vfmadd231ps_fma(auVar29,auVar57,auVar83);
        *(undefined1 (*) [16])((longlong)pauVar16[1] + 0x10) = auVar57;
        pauVar16 = pauVar16 + 2;
        auVar57 = vpermilps_avx(auVar57,0xff);
        auVar82 = ZEXT1664(auVar57);
      } while (pauVar16 < (undefined1 (*) [32])((longlong)pauVar23[-2] + 0x10));
      if (pauVar23 <= pauVar16) goto LAB_1453b9929;
    }
    do {
      auVar45._0_4_ = *(float *)*pauVar16 + 1e-25;
      auVar45._4_4_ = *(float *)((longlong)*pauVar16 + 4) + 1e-25;
      auVar45._8_4_ = *(float *)((longlong)*pauVar16 + 8) + 1e-25;
      auVar45._12_4_ = *(float *)((longlong)*pauVar16 + 0xc) + 1e-25;
      auVar57 = vpermilps_avx(auVar45,0xff);
      auVar56._0_4_ = auVar57._0_4_ * 0.0;
      auVar56._4_4_ = auVar57._4_4_ * 0.0;
      auVar56._8_4_ = auVar57._8_4_ * 0.0;
      auVar56._12_4_ = auVar57._12_4_ * fVar7;
      auVar57 = vpermilps_avx(auVar45,0xaa);
      auVar54 = vfmadd231ps_fma(auVar56,auVar57,stack0xffffffffffffff2c);
      auVar57 = vpermilps_avx(auVar45,0x55);
      auVar54 = vfmadd231ps_fma(auVar54,auVar57,auVar26);
      auVar57 = vpermilps_avx(auVar45,0);
      auVar57 = vfmadd231ps_fma(auVar54,auVar57,auVar46);
      auVar57 = vfmadd231ps_fma(auVar57,auVar82._0_16_,auVar83);
      *(undefined1 (*) [16])*pauVar16 = auVar57;
      pfVar22 = (float *)*pauVar16;
      auVar57 = vpermilps_avx(auVar57,0xff);
      auVar82 = ZEXT1664(auVar57);
      pauVar16 = (undefined1 (*) [32])(pfVar22 + 4);
    } while ((undefined1 (*) [32])(pfVar22 + 4) < pauVar23);
LAB_1453b9935:
    auVar13 = _DAT_149d47760;
    auVar12 = _DAT_149d476a0;
    auVar43 = _DAT_149931400;
    pauVar16 = param_2;
    if (0x7f < uVar25) {
      auVar49._4_4_ = param_6;
      auVar49._0_4_ = param_6;
      auVar49._8_4_ = param_6;
      auVar49._12_4_ = param_6;
      auVar49._16_4_ = param_6;
      auVar49._20_4_ = param_6;
      auVar49._24_4_ = param_6;
      auVar49._28_4_ = param_6;
      auVar47 = _DAT_149d47820;
      do {
        auVar31 = _DAT_149d47820;
        auVar48 = vpand_avx2(auVar12,*pauVar16);
        auVar48 = vpaddd_avx2(auVar48,auVar43);
        fVar8 = auVar48._0_4_;
        fVar53 = auVar43._0_4_;
        fVar52 = fVar53 + fVar8;
        fVar21 = auVar48._4_4_;
        fVar63 = auVar43._4_4_;
        fVar62 = fVar63 + fVar21;
        fVar17 = auVar48._8_4_;
        fVar65 = auVar43._8_4_;
        fVar64 = fVar65 + fVar17;
        fVar2 = auVar48._12_4_;
        fVar67 = auVar43._12_4_;
        fVar66 = fVar67 + fVar2;
        fVar3 = auVar48._16_4_;
        fVar69 = auVar43._16_4_;
        fVar68 = fVar69 + fVar3;
        fVar4 = auVar48._20_4_;
        fVar71 = auVar43._20_4_;
        fVar70 = fVar71 + fVar4;
        fVar5 = auVar48._24_4_;
        fVar73 = auVar43._24_4_;
        fVar72 = fVar73 + fVar5;
        fVar6 = auVar48._28_4_;
        fVar75 = auVar43._28_4_;
        fVar74 = fVar75 + fVar6;
        auVar48._0_4_ = fVar8 * fVar8 * fVar8;
        auVar48._4_4_ = fVar21 * fVar21 * fVar21;
        auVar48._8_4_ = fVar17 * fVar17 * fVar17;
        auVar48._12_4_ = fVar2 * fVar2 * fVar2;
        auVar48._16_4_ = fVar3 * fVar3 * fVar3;
        auVar48._20_4_ = fVar4 * fVar4 * fVar4;
        auVar48._24_4_ = fVar5 * fVar5 * fVar5;
        auVar48._28_4_ = fVar6 * fVar6 * fVar6;
        auVar83 = vfmadd231ps_fma(auVar47,auVar48,auVar13);
        auVar47._0_4_ = fVar52 * fVar52 * fVar52;
        auVar47._4_4_ = fVar62 * fVar62 * fVar62;
        auVar47._8_4_ = fVar64 * fVar64 * fVar64;
        auVar47._12_4_ = fVar66 * fVar66 * fVar66;
        auVar47._16_4_ = fVar68 * fVar68 * fVar68;
        auVar47._20_4_ = fVar70 * fVar70 * fVar70;
        auVar47._24_4_ = fVar72 * fVar72 * fVar72;
        auVar47._28_4_ = fVar74 * fVar74 * fVar74;
        auVar48 = vdivps_avx(ZEXT1632(auVar83),auVar47);
        auVar47 = vpslld_avx2(*pauVar16,1);
        auVar47 = vpsrld_avx2(auVar47,0x18);
        auVar47 = vcvtdq2ps_avx(auVar47);
        auVar47 = vsubps_avx(auVar47,_DAT_149d477c0);
        auVar83 = vfmadd231ps_fma(auVar48,auVar47,_DAT_149d47700);
        auVar83 = vfnmadd231ps_fma(auVar49,ZEXT1632(auVar83),_DAT_149d47780);
        auVar47 = vmaxps_avx(ZEXT1632(auVar83),ZEXT832(0) << 0x20);
        *pauVar16 = auVar47;
        auVar33 = _DAT_149d47820;
        auVar47 = vpand_avx2(auVar12,pauVar16[1]);
        auVar47 = vpaddd_avx2(auVar47,auVar43);
        fVar8 = auVar47._0_4_;
        fVar52 = fVar53 + fVar8;
        fVar21 = auVar47._4_4_;
        fVar62 = fVar63 + fVar21;
        fVar17 = auVar47._8_4_;
        fVar64 = fVar65 + fVar17;
        fVar2 = auVar47._12_4_;
        fVar66 = fVar67 + fVar2;
        fVar3 = auVar47._16_4_;
        fVar68 = fVar69 + fVar3;
        fVar4 = auVar47._20_4_;
        fVar70 = fVar71 + fVar4;
        fVar5 = auVar47._24_4_;
        fVar72 = fVar73 + fVar5;
        fVar6 = auVar47._28_4_;
        fVar74 = fVar75 + fVar6;
        auVar30._0_4_ = fVar8 * fVar8 * fVar8;
        auVar30._4_4_ = fVar21 * fVar21 * fVar21;
        auVar30._8_4_ = fVar17 * fVar17 * fVar17;
        auVar30._12_4_ = fVar2 * fVar2 * fVar2;
        auVar30._16_4_ = fVar3 * fVar3 * fVar3;
        auVar30._20_4_ = fVar4 * fVar4 * fVar4;
        auVar30._24_4_ = fVar5 * fVar5 * fVar5;
        auVar30._28_4_ = fVar6 * fVar6 * fVar6;
        auVar83 = vfmadd231ps_fma(auVar31,auVar30,auVar13);
        auVar31._0_4_ = fVar52 * fVar52 * fVar52;
        auVar31._4_4_ = fVar62 * fVar62 * fVar62;
        auVar31._8_4_ = fVar64 * fVar64 * fVar64;
        auVar31._12_4_ = fVar66 * fVar66 * fVar66;
        auVar31._16_4_ = fVar68 * fVar68 * fVar68;
        auVar31._20_4_ = fVar70 * fVar70 * fVar70;
        auVar31._24_4_ = fVar72 * fVar72 * fVar72;
        auVar31._28_4_ = fVar74 * fVar74 * fVar74;
        auVar48 = vdivps_avx(ZEXT1632(auVar83),auVar31);
        auVar47 = vpslld_avx2(pauVar16[1],1);
        auVar47 = vpsrld_avx2(auVar47,0x18);
        auVar47 = vcvtdq2ps_avx(auVar47);
        auVar47 = vsubps_avx(auVar47,_DAT_149d477c0);
        auVar83 = vfmadd231ps_fma(auVar48,auVar47,_DAT_149d47700);
        auVar83 = vfnmadd231ps_fma(auVar49,ZEXT1632(auVar83),_DAT_149d47780);
        auVar47 = vmaxps_avx(ZEXT1632(auVar83),ZEXT832(0) << 0x20);
        pauVar16[1] = auVar47;
        auVar31 = _DAT_149d47820;
        auVar47 = vpand_avx2(auVar12,pauVar16[2]);
        auVar47 = vpaddd_avx2(auVar47,auVar43);
        fVar8 = auVar47._0_4_;
        fVar52 = fVar53 + fVar8;
        fVar21 = auVar47._4_4_;
        fVar62 = fVar63 + fVar21;
        fVar17 = auVar47._8_4_;
        fVar64 = fVar65 + fVar17;
        fVar2 = auVar47._12_4_;
        fVar66 = fVar67 + fVar2;
        fVar3 = auVar47._16_4_;
        fVar68 = fVar69 + fVar3;
        fVar4 = auVar47._20_4_;
        fVar70 = fVar71 + fVar4;
        fVar5 = auVar47._24_4_;
        fVar72 = fVar73 + fVar5;
        fVar6 = auVar47._28_4_;
        fVar74 = fVar75 + fVar6;
        auVar32._0_4_ = fVar8 * fVar8 * fVar8;
        auVar32._4_4_ = fVar21 * fVar21 * fVar21;
        auVar32._8_4_ = fVar17 * fVar17 * fVar17;
        auVar32._12_4_ = fVar2 * fVar2 * fVar2;
        auVar32._16_4_ = fVar3 * fVar3 * fVar3;
        auVar32._20_4_ = fVar4 * fVar4 * fVar4;
        auVar32._24_4_ = fVar5 * fVar5 * fVar5;
        auVar32._28_4_ = fVar6 * fVar6 * fVar6;
        auVar83 = vfmadd231ps_fma(auVar33,auVar32,auVar13);
        auVar33._0_4_ = fVar52 * fVar52 * fVar52;
        auVar33._4_4_ = fVar62 * fVar62 * fVar62;
        auVar33._8_4_ = fVar64 * fVar64 * fVar64;
        auVar33._12_4_ = fVar66 * fVar66 * fVar66;
        auVar33._16_4_ = fVar68 * fVar68 * fVar68;
        auVar33._20_4_ = fVar70 * fVar70 * fVar70;
        auVar33._24_4_ = fVar72 * fVar72 * fVar72;
        auVar33._28_4_ = fVar74 * fVar74 * fVar74;
        auVar48 = vdivps_avx(ZEXT1632(auVar83),auVar33);
        auVar47 = vpslld_avx2(pauVar16[2],1);
        auVar47 = vpsrld_avx2(auVar47,0x18);
        auVar47 = vcvtdq2ps_avx(auVar47);
        auVar47 = vsubps_avx(auVar47,_DAT_149d477c0);
        auVar83 = vfmadd231ps_fma(auVar48,auVar47,_DAT_149d47700);
        auVar83 = vfnmadd231ps_fma(auVar49,ZEXT1632(auVar83),_DAT_149d47780);
        auVar47 = vmaxps_avx(ZEXT1632(auVar83),ZEXT832(0) << 0x20);
        pauVar16[2] = auVar47;
        auVar47 = _DAT_149d47820;
        auVar48 = vpand_avx2(auVar12,pauVar16[3]);
        auVar48 = vpaddd_avx2(auVar48,auVar43);
        fVar8 = auVar48._0_4_;
        fVar53 = fVar53 + fVar8;
        fVar21 = auVar48._4_4_;
        fVar63 = fVar63 + fVar21;
        fVar17 = auVar48._8_4_;
        fVar65 = fVar65 + fVar17;
        fVar2 = auVar48._12_4_;
        fVar67 = fVar67 + fVar2;
        fVar3 = auVar48._16_4_;
        fVar69 = fVar69 + fVar3;
        fVar4 = auVar48._20_4_;
        fVar71 = fVar71 + fVar4;
        fVar5 = auVar48._24_4_;
        fVar73 = fVar73 + fVar5;
        fVar6 = auVar48._28_4_;
        fVar75 = fVar75 + fVar6;
        auVar34._0_4_ = fVar8 * fVar8 * fVar8;
        auVar34._4_4_ = fVar21 * fVar21 * fVar21;
        auVar34._8_4_ = fVar17 * fVar17 * fVar17;
        auVar34._12_4_ = fVar2 * fVar2 * fVar2;
        auVar34._16_4_ = fVar3 * fVar3 * fVar3;
        auVar34._20_4_ = fVar4 * fVar4 * fVar4;
        auVar34._24_4_ = fVar5 * fVar5 * fVar5;
        auVar34._28_4_ = fVar6 * fVar6 * fVar6;
        auVar83 = vfmadd231ps_fma(auVar31,auVar34,auVar13);
        auVar35._0_4_ = fVar53 * fVar53 * fVar53;
        auVar35._4_4_ = fVar63 * fVar63 * fVar63;
        auVar35._8_4_ = fVar65 * fVar65 * fVar65;
        auVar35._12_4_ = fVar67 * fVar67 * fVar67;
        auVar35._16_4_ = fVar69 * fVar69 * fVar69;
        auVar35._20_4_ = fVar71 * fVar71 * fVar71;
        auVar35._24_4_ = fVar73 * fVar73 * fVar73;
        auVar35._28_4_ = fVar75 * fVar75 * fVar75;
        auVar31 = vdivps_avx(ZEXT1632(auVar83),auVar35);
        auVar48 = vpslld_avx2(pauVar16[3],1);
        auVar48 = vpsrld_avx2(auVar48,0x18);
        auVar48 = vcvtdq2ps_avx(auVar48);
        auVar48 = vsubps_avx(auVar48,_DAT_149d477c0);
        auVar83 = vfmadd231ps_fma(auVar31,auVar48,_DAT_149d47700);
        auVar83 = vfnmadd231ps_fma(auVar49,ZEXT1632(auVar83),_DAT_149d47780);
        auVar48 = vmaxps_avx(ZEXT1632(auVar83),ZEXT832(0) << 0x20);
        pauVar16[3] = auVar48;
        pauVar16 = pauVar16 + 4;
      } while (pauVar16 < pauVar23 + -3);
      if (pauVar23 <= pauVar16) goto LAB_1453b9be4;
    }
    auVar47 = _DAT_149d47820;
    auVar13 = _DAT_149d47760;
    auVar12 = _DAT_149d476a0;
    auVar43 = _DAT_149931400;
    auVar78._4_4_ = param_6;
    auVar78._0_4_ = param_6;
    auVar78._8_4_ = param_6;
    auVar78._12_4_ = param_6;
    auVar78._16_4_ = param_6;
    auVar78._20_4_ = param_6;
    auVar78._24_4_ = param_6;
    auVar78._28_4_ = param_6;
    do {
      auVar49 = vpand_avx2(auVar12,*pauVar16);
      auVar49 = vpaddd_avx2(auVar49,auVar43);
      fVar8 = auVar49._0_4_;
      fVar52 = auVar43._0_4_ + fVar8;
      fVar21 = auVar49._4_4_;
      fVar53 = auVar43._4_4_ + fVar21;
      fVar17 = auVar49._8_4_;
      fVar62 = auVar43._8_4_ + fVar17;
      fVar2 = auVar49._12_4_;
      fVar63 = auVar43._12_4_ + fVar2;
      fVar3 = auVar49._16_4_;
      fVar64 = auVar43._16_4_ + fVar3;
      fVar4 = auVar49._20_4_;
      fVar65 = auVar43._20_4_ + fVar4;
      fVar5 = auVar49._24_4_;
      fVar66 = auVar43._24_4_ + fVar5;
      fVar6 = auVar49._28_4_;
      fVar67 = auVar43._28_4_ + fVar6;
      auVar36._0_4_ = fVar8 * fVar8 * fVar8;
      auVar36._4_4_ = fVar21 * fVar21 * fVar21;
      auVar36._8_4_ = fVar17 * fVar17 * fVar17;
      auVar36._12_4_ = fVar2 * fVar2 * fVar2;
      auVar36._16_4_ = fVar3 * fVar3 * fVar3;
      auVar36._20_4_ = fVar4 * fVar4 * fVar4;
      auVar36._24_4_ = fVar5 * fVar5 * fVar5;
      auVar36._28_4_ = fVar6 * fVar6 * fVar6;
      auVar83 = vfmadd231ps_fma(auVar47,auVar36,auVar13);
      auVar37._0_4_ = fVar52 * fVar52 * fVar52;
      auVar37._4_4_ = fVar53 * fVar53 * fVar53;
      auVar37._8_4_ = fVar62 * fVar62 * fVar62;
      auVar37._12_4_ = fVar63 * fVar63 * fVar63;
      auVar37._16_4_ = fVar64 * fVar64 * fVar64;
      auVar37._20_4_ = fVar65 * fVar65 * fVar65;
      auVar37._24_4_ = fVar66 * fVar66 * fVar66;
      auVar37._28_4_ = fVar67 * fVar67 * fVar67;
      auVar48 = vdivps_avx(ZEXT1632(auVar83),auVar37);
      auVar49 = vpslld_avx2(*pauVar16,1);
      auVar49 = vpsrld_avx2(auVar49,0x18);
      auVar49 = vcvtdq2ps_avx(auVar49);
      auVar49 = vsubps_avx(auVar49,_DAT_149d477c0);
      auVar83 = vfmadd231ps_fma(auVar48,auVar49,_DAT_149d47700);
      auVar83 = vfnmadd231ps_fma(auVar78,ZEXT1632(auVar83),_DAT_149d47780);
      auVar49 = vmaxps_avx(ZEXT1632(auVar83),ZEXT832(0) << 0x20);
      *pauVar16 = auVar49;
      pauVar16 = pauVar16 + 1;
      pauVar15 = param_2;
    } while (pauVar16 < pauVar23);
LAB_1453b9c01:
    do {
      auVar83 = *(undefined1 (*) [16])*pauVar15;
      auVar46 = ZEXT416((uint)(auVar81._0_4_ - auVar83._0_4_));
      auVar26 = vcmpss_avx(auVar80,auVar46,2);
      auVar26 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar26);
      auVar26 = vfmadd231ss_fma(auVar83,auVar46,auVar26);
      auVar79._0_8_ = auVar26._0_8_ ^ 0x80000000;
      auVar79._8_4_ = auVar26._8_4_;
      auVar79._12_4_ = auVar26._12_4_;
      auVar46 = vshufps_avx(auVar83,auVar83,0x55);
      auVar57 = ZEXT416((uint)(auVar26._0_4_ - auVar46._0_4_));
      auVar26 = vcmpss_avx(auVar80,auVar57,2);
      auVar26 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar26);
      auVar26 = vfmadd231ss_fma(auVar46,auVar57,auVar26);
      auVar57 = vshufps_avx(auVar83,auVar83,0xaa);
      auVar46._0_8_ = auVar26._0_8_ ^ 0x80000000;
      auVar46._8_4_ = auVar26._8_4_;
      auVar46._12_4_ = auVar26._12_4_;
      auVar29 = ZEXT416((uint)(auVar26._0_4_ - auVar57._0_4_));
      auVar26 = vcmpss_avx(auVar80,auVar29,2);
      auVar26 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar26);
      auVar54 = vshufps_avx(auVar83,auVar83,0xff);
      auVar46 = vinsertps_avx(auVar79,auVar46,0x10);
      auVar26 = vfmadd231ss_fma(auVar57,auVar29,auVar26);
      auVar57 = ZEXT416((uint)(auVar26._0_4_ - auVar54._0_4_));
      auVar83 = vcmpss_avx(auVar80,auVar57,2);
      auVar83 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar83);
      auVar83 = vfmadd231ss_fma(auVar54,auVar57,auVar83);
      auVar81 = ZEXT1664(auVar83);
      auVar57._0_8_ = auVar26._0_8_ ^ 0x80000000;
      auVar57._8_4_ = auVar26._8_4_;
      auVar57._12_4_ = auVar26._12_4_;
      auVar26._0_8_ = auVar83._0_8_ ^ 0x80000000;
      auVar26._8_4_ = auVar83._8_4_;
      auVar26._12_4_ = auVar83._12_4_;
      auVar83 = vinsertps_avx(auVar46,auVar57,0x20);
      auVar83 = vinsertps_avx(auVar83,auVar26,0x30);
      *(undefined1 (*) [16])*pauVar15 = auVar83;
      auVar13 = _DAT_149d47840;
      auVar12 = _DAT_149d477e0;
      auVar43 = _DAT_149d477a0;
      pfVar22 = (float *)*pauVar15;
      pauVar15 = (undefined1 (*) [32])(pfVar22 + 4);
    } while ((undefined1 (*) [32])(pfVar22 + 4) < pauVar23);
    pauVar16 = param_2;
    if (0x7f < uVar25) {
      auVar49 = _DAT_149d47800;
      auVar47 = _DAT_149935440;
      do {
        auVar50._0_4_ = param_7 * *(float *)*pauVar16 * 0.05;
        auVar50._4_4_ = param_7 * *(float *)((longlong)*pauVar16 + 4) * 0.05;
        auVar50._8_4_ = param_7 * *(float *)((longlong)*pauVar16 + 8) * 0.05;
        auVar50._12_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0xc) * 0.05;
        auVar50._16_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x10) * 0.05;
        auVar50._20_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x14) * 0.05;
        auVar50._24_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x18) * 0.05;
        auVar50._28_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x1c) * 0.05;
        auVar48 = vcmpps_avx(auVar50,auVar13,1);
        auVar31 = vcmpps_avx(auVar50,auVar43,0xe);
        auVar31 = vorps_avx(auVar48,auVar31);
        auVar48 = vblendvps_avx(auVar50,auVar13,auVar31);
        auVar83 = vfmadd231ps_fma(auVar49,auVar48,auVar12);
        auVar49 = vcvtps2dq_avx(ZEXT1632(auVar83));
        auVar48 = vpand_avx2(_DAT_149d476a0,auVar49);
        auVar48 = vpaddd_avx2(auVar48,_DAT_149931400);
        auVar47 = vpand_avx2(auVar47,auVar49);
        auVar38._0_4_ =
             ((auVar48._0_4_ * 0.32518977 + 0.020805772) * auVar48._0_4_ + 0.65304345) *
             auVar47._0_4_;
        auVar38._4_4_ =
             ((auVar48._4_4_ * 0.32518977 + 0.020805772) * auVar48._4_4_ + 0.65304345) *
             auVar47._4_4_;
        auVar38._8_4_ =
             ((auVar48._8_4_ * 0.32518977 + 0.020805772) * auVar48._8_4_ + 0.65304345) *
             auVar47._8_4_;
        auVar38._12_4_ =
             ((auVar48._12_4_ * 0.32518977 + 0.020805772) * auVar48._12_4_ + 0.65304345) *
             auVar47._12_4_;
        auVar38._16_4_ =
             ((auVar48._16_4_ * 0.32518977 + 0.020805772) * auVar48._16_4_ + 0.65304345) *
             auVar47._16_4_;
        auVar38._20_4_ =
             ((auVar48._20_4_ * 0.32518977 + 0.020805772) * auVar48._20_4_ + 0.65304345) *
             auVar47._20_4_;
        auVar38._24_4_ =
             ((auVar48._24_4_ * 0.32518977 + 0.020805772) * auVar48._24_4_ + 0.65304345) *
             auVar47._24_4_;
        auVar38._28_4_ =
             ((auVar48._28_4_ * 0.32518977 + 0.020805772) * auVar48._28_4_ + 0.65304345) *
             auVar47._28_4_;
        auVar47 = vblendvps_avx(auVar38,ZEXT432(0) << 0x20,auVar31);
        *pauVar16 = auVar47;
        auVar59._0_4_ = param_7 * *(float *)pauVar16[1] * 0.05;
        auVar59._4_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 4) * 0.05;
        auVar59._8_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 8) * 0.05;
        auVar59._12_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0xc) * 0.05;
        auVar59._16_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x10) * 0.05;
        auVar59._20_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x14) * 0.05;
        auVar59._24_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x18) * 0.05;
        auVar59._28_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x1c) * 0.05;
        auVar47 = vcmpps_avx(auVar59,auVar13,1);
        auVar49 = vcmpps_avx(auVar59,auVar43,0xe);
        auVar49 = vorps_avx(auVar47,auVar49);
        auVar47 = vblendvps_avx(auVar59,auVar13,auVar49);
        auVar83 = vfmadd231ps_fma(_DAT_149d47800,auVar47,auVar12);
        auVar47 = vcvtps2dq_avx(ZEXT1632(auVar83));
        auVar48 = vpand_avx2(_DAT_149d476a0,auVar47);
        auVar31 = vpand_avx2(_DAT_149935440,auVar47);
        auVar47 = vpaddd_avx2(auVar48,_DAT_149931400);
        auVar39._0_4_ =
             ((auVar47._0_4_ * 0.32518977 + 0.020805772) * auVar47._0_4_ + 0.65304345) *
             auVar31._0_4_;
        auVar39._4_4_ =
             ((auVar47._4_4_ * 0.32518977 + 0.020805772) * auVar47._4_4_ + 0.65304345) *
             auVar31._4_4_;
        auVar39._8_4_ =
             ((auVar47._8_4_ * 0.32518977 + 0.020805772) * auVar47._8_4_ + 0.65304345) *
             auVar31._8_4_;
        auVar39._12_4_ =
             ((auVar47._12_4_ * 0.32518977 + 0.020805772) * auVar47._12_4_ + 0.65304345) *
             auVar31._12_4_;
        auVar39._16_4_ =
             ((auVar47._16_4_ * 0.32518977 + 0.020805772) * auVar47._16_4_ + 0.65304345) *
             auVar31._16_4_;
        auVar39._20_4_ =
             ((auVar47._20_4_ * 0.32518977 + 0.020805772) * auVar47._20_4_ + 0.65304345) *
             auVar31._20_4_;
        auVar39._24_4_ =
             ((auVar47._24_4_ * 0.32518977 + 0.020805772) * auVar47._24_4_ + 0.65304345) *
             auVar31._24_4_;
        auVar39._28_4_ =
             ((auVar47._28_4_ * 0.32518977 + 0.020805772) * auVar47._28_4_ + 0.65304345) *
             auVar31._28_4_;
        auVar47 = vblendvps_avx(auVar39,ZEXT432(0) << 0x20,auVar49);
        pauVar16[1] = auVar47;
        auVar60._0_4_ = param_7 * *(float *)pauVar16[2] * 0.05;
        auVar60._4_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 4) * 0.05;
        auVar60._8_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 8) * 0.05;
        auVar60._12_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0xc) * 0.05;
        auVar60._16_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x10) * 0.05;
        auVar60._20_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x14) * 0.05;
        auVar60._24_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x18) * 0.05;
        auVar60._28_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x1c) * 0.05;
        auVar47 = vcmpps_avx(auVar60,auVar13,1);
        auVar49 = vcmpps_avx(auVar60,auVar43,0xe);
        auVar49 = vorps_avx(auVar47,auVar49);
        auVar47 = vblendvps_avx(auVar60,auVar13,auVar49);
        auVar83 = vfmadd231ps_fma(_DAT_149d47800,auVar47,auVar12);
        auVar47 = vcvtps2dq_avx(ZEXT1632(auVar83));
        auVar48 = vpand_avx2(_DAT_149935440,auVar47);
        auVar47 = vpand_avx2(_DAT_149d476a0,auVar47);
        auVar47 = vpaddd_avx2(auVar47,_DAT_149931400);
        auVar40._0_4_ =
             ((auVar47._0_4_ * 0.32518977 + 0.020805772) * auVar47._0_4_ + 0.65304345) *
             auVar48._0_4_;
        auVar40._4_4_ =
             ((auVar47._4_4_ * 0.32518977 + 0.020805772) * auVar47._4_4_ + 0.65304345) *
             auVar48._4_4_;
        auVar40._8_4_ =
             ((auVar47._8_4_ * 0.32518977 + 0.020805772) * auVar47._8_4_ + 0.65304345) *
             auVar48._8_4_;
        auVar40._12_4_ =
             ((auVar47._12_4_ * 0.32518977 + 0.020805772) * auVar47._12_4_ + 0.65304345) *
             auVar48._12_4_;
        auVar40._16_4_ =
             ((auVar47._16_4_ * 0.32518977 + 0.020805772) * auVar47._16_4_ + 0.65304345) *
             auVar48._16_4_;
        auVar40._20_4_ =
             ((auVar47._20_4_ * 0.32518977 + 0.020805772) * auVar47._20_4_ + 0.65304345) *
             auVar48._20_4_;
        auVar40._24_4_ =
             ((auVar47._24_4_ * 0.32518977 + 0.020805772) * auVar47._24_4_ + 0.65304345) *
             auVar48._24_4_;
        auVar40._28_4_ =
             ((auVar47._28_4_ * 0.32518977 + 0.020805772) * auVar47._28_4_ + 0.65304345) *
             auVar48._28_4_;
        auVar47 = vblendvps_avx(auVar40,ZEXT432(0) << 0x20,auVar49);
        pauVar16[2] = auVar47;
        auVar49 = _DAT_149d47800;
        auVar47 = _DAT_149935440;
        auVar61._0_4_ = param_7 * *(float *)pauVar16[3] * 0.05;
        auVar61._4_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 4) * 0.05;
        auVar61._8_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 8) * 0.05;
        auVar61._12_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0xc) * 0.05;
        auVar61._16_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x10) * 0.05;
        auVar61._20_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x14) * 0.05;
        auVar61._24_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x18) * 0.05;
        auVar61._28_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x1c) * 0.05;
        auVar48 = vcmpps_avx(auVar61,auVar13,1);
        auVar31 = vcmpps_avx(auVar61,auVar43,0xe);
        auVar31 = vorps_avx(auVar48,auVar31);
        auVar48 = vblendvps_avx(auVar61,auVar13,auVar31);
        auVar83 = vfmadd231ps_fma(_DAT_149d47800,auVar48,auVar12);
        auVar48 = vcvtps2dq_avx(ZEXT1632(auVar83));
        auVar33 = vpand_avx2(_DAT_149935440,auVar48);
        auVar48 = vpand_avx2(_DAT_149d476a0,auVar48);
        auVar48 = vpaddd_avx2(auVar48,_DAT_149931400);
        auVar41._0_4_ =
             ((auVar48._0_4_ * 0.32518977 + 0.020805772) * auVar48._0_4_ + 0.65304345) *
             auVar33._0_4_;
        auVar41._4_4_ =
             ((auVar48._4_4_ * 0.32518977 + 0.020805772) * auVar48._4_4_ + 0.65304345) *
             auVar33._4_4_;
        auVar41._8_4_ =
             ((auVar48._8_4_ * 0.32518977 + 0.020805772) * auVar48._8_4_ + 0.65304345) *
             auVar33._8_4_;
        auVar41._12_4_ =
             ((auVar48._12_4_ * 0.32518977 + 0.020805772) * auVar48._12_4_ + 0.65304345) *
             auVar33._12_4_;
        auVar41._16_4_ =
             ((auVar48._16_4_ * 0.32518977 + 0.020805772) * auVar48._16_4_ + 0.65304345) *
             auVar33._16_4_;
        auVar41._20_4_ =
             ((auVar48._20_4_ * 0.32518977 + 0.020805772) * auVar48._20_4_ + 0.65304345) *
             auVar33._20_4_;
        auVar41._24_4_ =
             ((auVar48._24_4_ * 0.32518977 + 0.020805772) * auVar48._24_4_ + 0.65304345) *
             auVar33._24_4_;
        auVar41._28_4_ =
             ((auVar48._28_4_ * 0.32518977 + 0.020805772) * auVar48._28_4_ + 0.65304345) *
             auVar33._28_4_;
        auVar48 = vblendvps_avx(auVar41,ZEXT432(0) << 0x20,auVar31);
        pauVar16[3] = auVar48;
        pauVar16 = pauVar16 + 4;
      } while (pauVar16 < pauVar23 + -3);
    }
    auVar49 = _DAT_149d47840;
    auVar47 = _DAT_149d47800;
    auVar13 = _DAT_149d477e0;
    auVar12 = _DAT_149d477a0;
    auVar43 = _DAT_149935440;
    if (pauVar16 < pauVar23) {
      fVar8 = param_7 * 0.05;
      auVar48 = _DAT_149931400;
      do {
        auVar32 = _DAT_149931400;
        auVar51._0_4_ = fVar8 * *(float *)*pauVar16;
        auVar51._4_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 4);
        auVar51._8_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 8);
        auVar51._12_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0xc);
        auVar51._16_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x10);
        auVar51._20_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x14);
        auVar51._24_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x18);
        auVar51._28_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x1c);
        auVar31 = vcmpps_avx(auVar51,auVar49,1);
        auVar33 = vcmpps_avx(auVar51,auVar12,0xe);
        auVar33 = vorps_avx(auVar31,auVar33);
        auVar31 = vblendvps_avx(auVar51,auVar49,auVar33);
        auVar83 = vfmadd231ps_fma(auVar47,auVar31,auVar13);
        auVar31 = vcvtps2dq_avx(ZEXT1632(auVar83));
        auVar30 = vpand_avx2(_DAT_149d476a0,auVar31);
        auVar48 = vpaddd_avx2(auVar30,auVar48);
        auVar31 = vpand_avx2(auVar43,auVar31);
        auVar42._0_4_ =
             ((auVar48._0_4_ * 0.32518977 + 0.020805772) * auVar48._0_4_ + 0.65304345) *
             auVar31._0_4_;
        auVar42._4_4_ =
             ((auVar48._4_4_ * 0.32518977 + 0.020805772) * auVar48._4_4_ + 0.65304345) *
             auVar31._4_4_;
        auVar42._8_4_ =
             ((auVar48._8_4_ * 0.32518977 + 0.020805772) * auVar48._8_4_ + 0.65304345) *
             auVar31._8_4_;
        auVar42._12_4_ =
             ((auVar48._12_4_ * 0.32518977 + 0.020805772) * auVar48._12_4_ + 0.65304345) *
             auVar31._12_4_;
        auVar42._16_4_ =
             ((auVar48._16_4_ * 0.32518977 + 0.020805772) * auVar48._16_4_ + 0.65304345) *
             auVar31._16_4_;
        auVar42._20_4_ =
             ((auVar48._20_4_ * 0.32518977 + 0.020805772) * auVar48._20_4_ + 0.65304345) *
             auVar31._20_4_;
        auVar42._24_4_ =
             ((auVar48._24_4_ * 0.32518977 + 0.020805772) * auVar48._24_4_ + 0.65304345) *
             auVar31._24_4_;
        auVar42._28_4_ =
             ((auVar48._28_4_ * 0.32518977 + 0.020805772) * auVar48._28_4_ + 0.65304345) *
             auVar31._28_4_;
        auVar48 = vblendvps_avx(auVar42,ZEXT432(0) << 0x20,auVar33);
        *pauVar16 = auVar48;
        pauVar16 = pauVar16 + 1;
        auVar48 = auVar32;
      } while (pauVar16 < pauVar23);
    }
  }
  else {
LAB_1453b9929:
    if (param_2 < pauVar23) goto LAB_1453b9935;
LAB_1453b9be4:
    pauVar15 = param_2;
    if (param_2 < pauVar23) goto LAB_1453b9c01;
  }
  auVar83 = ZEXT416((uint)param_10);
  if (pauVar23 < pauVar1) {
    auVar26 = SUB6416(ZEXT464(0x4bd49a78),0);
    auVar46 = SUB6416(ZEXT464(0x4e7e0000),0);
    auVar57 = SUB6416(ZEXT464(0x3ea67f46),0);
    auVar54 = SUB6416(ZEXT464(0x3caa70de),0);
    fVar8 = 0.0;
    if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar23) & 0xfffffffffffffffcU)) {
      do {
        auVar29 = vfmadd231ss_fma(ZEXT416((uint)(auVar82._0_4_ * param_10)),
                                  ZEXT416((uint)(*(float *)*pauVar23 + 1e-25)),ZEXT416((uint)fVar7))
        ;
        uVar19 = auVar29._0_4_;
        fVar17 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar58._0_4_ = 11.581186 / (fVar21 * fVar21 * fVar21);
        auVar58._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar29 = vfmsub231ss_fma(auVar58,auVar58,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar29 = vfmadd231ss_fma(auVar29,ZEXT416((uint)((float)(uVar19 >> 0x17 & 0xff) - 127.0)),
                                  ZEXT416(0x4040a8c2));
        auVar28 = vmaxss_avx(ZEXT416((uint)(param_6 - auVar29._0_4_)),auVar80);
        auVar29 = vcmpss_avx(auVar80,ZEXT416((uint)(auVar81._0_4_ - auVar28._0_4_)),2);
        auVar29 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar29);
        auVar28 = vfnmadd231ss_fma(auVar28,auVar28,auVar29);
        auVar29 = vfmadd231ss_fma(auVar28,auVar81._0_16_,auVar29);
        fVar21 = auVar29._0_4_ * param_7 * -0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar28 = vfmadd213ss_fma(auVar26,ZEXT416((uint)fVar21),auVar46);
          uVar20 = (uint)(longlong)auVar28._0_4_;
          uVar18 = (uVar20 & 0x7fffff) + 0x3f800000;
          auVar28 = vfmadd132ss_fma(auVar57,auVar54,ZEXT416(uVar18));
          auVar28 = vfmadd132ss_fma(auVar28,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar18));
          fVar17 = auVar28._0_4_ * (float)(uVar20 & 0xff800000);
        }
        auVar28 = ZEXT416((uint)(*(float *)((longlong)*pauVar23 + 4) + 1e-25));
        auVar28 = vfnmadd231ss_fma(auVar28,auVar28,auVar83);
        auVar44 = vfmadd231ss_fma(auVar28,auVar83,ZEXT416(uVar19));
        *(float *)*pauVar23 = fVar17;
        fVar17 = (float)((auVar44._0_4_ & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar28 = ZEXT416((uint)(11.581186 / (fVar21 * fVar21 * fVar21)));
        auVar28 = vfmsub231ss_fma(auVar28,auVar28,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar28 = vfmadd231ss_fma(auVar28,ZEXT416((uint)((float)(auVar44._0_4_ >> 0x17 & 0xff) -
                                                        127.0)),ZEXT416(0x4040a8c2));
        auVar27 = vmaxss_avx(ZEXT416((uint)(param_6 - auVar28._0_4_)),auVar80);
        auVar28 = vcmpss_avx(auVar80,ZEXT416((uint)(auVar29._0_4_ - auVar27._0_4_)),2);
        auVar28 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar28);
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar28);
        auVar29 = vfmadd231ss_fma(auVar27,auVar29,auVar28);
        fVar21 = auVar29._0_4_ * param_7 * -0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar28 = vfmadd213ss_fma(auVar26,ZEXT416((uint)fVar21),auVar46);
          uVar19 = (uint)(longlong)auVar28._0_4_;
          auVar27 = ZEXT416((uVar19 & 0x7fffff) + 0x3f800000);
          auVar28 = vfmadd132ss_fma(auVar57,auVar54,auVar27);
          auVar28 = vfmadd213ss_fma(auVar28,auVar27,ZEXT416(0x3f272ddb));
          fVar17 = auVar28._0_4_ * (float)(uVar19 & 0xff800000);
        }
        auVar28 = ZEXT416((uint)(*(float *)((longlong)*pauVar23 + 8) + 1e-25));
        auVar28 = vfnmadd231ss_fma(auVar28,auVar28,auVar83);
        *(float *)((longlong)*pauVar23 + 4) = fVar17;
        auVar44 = vfmadd231ss_fma(auVar28,auVar83,auVar44);
        fVar17 = (float)((auVar44._0_4_ & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar28 = ZEXT416((uint)(11.581186 / (fVar21 * fVar21 * fVar21)));
        auVar28 = vfmsub231ss_fma(auVar28,auVar28,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar28 = vfmadd231ss_fma(auVar28,ZEXT416((uint)((float)(auVar44._0_4_ >> 0x17 & 0xff) -
                                                        127.0)),ZEXT416(0x4040a8c2));
        auVar27 = vmaxss_avx(ZEXT416((uint)(param_6 - auVar28._0_4_)),auVar80);
        auVar28 = vcmpss_avx(auVar80,ZEXT416((uint)(auVar29._0_4_ - auVar27._0_4_)),2);
        auVar28 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar28);
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar28);
        auVar29 = vfmadd231ss_fma(auVar27,auVar29,auVar28);
        fVar21 = auVar29._0_4_ * param_7 * -0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar28 = vfmadd213ss_fma(auVar26,ZEXT416((uint)fVar21),auVar46);
          uVar19 = (uint)(longlong)auVar28._0_4_;
          uVar20 = (uVar19 & 0x7fffff) + 0x3f800000;
          auVar28 = vfmadd132ss_fma(auVar57,auVar54,ZEXT416(uVar20));
          auVar28 = vfmadd132ss_fma(auVar28,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar20));
          fVar17 = auVar28._0_4_ * (float)(uVar19 & 0xff800000);
        }
        *(float *)((longlong)*pauVar23 + 8) = fVar17;
        auVar28 = ZEXT416((uint)(*(float *)((longlong)*pauVar23 + 0xc) + 1e-25));
        auVar28 = vfnmadd231ss_fma(auVar28,auVar28,auVar83);
        auVar28 = vfmadd231ss_fma(auVar28,auVar83,auVar44);
        auVar82 = ZEXT1664(auVar28);
        fVar17 = (float)((auVar28._0_4_ & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar27 = ZEXT416((uint)(11.581186 / (fVar21 * fVar21 * fVar21)));
        auVar27 = vfmsub231ss_fma(auVar27,auVar27,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar28 = vfmadd231ss_fma(auVar27,ZEXT416((uint)((float)(auVar28._0_4_ >> 0x17 & 0xff) -
                                                        127.0)),ZEXT416(0x4040a8c2));
        auVar27 = vmaxss_avx(ZEXT416((uint)(param_6 - auVar28._0_4_)),auVar80);
        auVar28 = vcmpss_avx(auVar80,ZEXT416((uint)(auVar29._0_4_ - auVar27._0_4_)),2);
        auVar28 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar28);
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar28);
        auVar29 = vfmadd231ss_fma(auVar27,auVar29,auVar28);
        auVar81 = ZEXT1664(auVar29);
        fVar21 = auVar29._0_4_ * param_7 * -0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar29 = vfmadd213ss_fma(auVar26,ZEXT416((uint)fVar21),auVar46);
          uVar19 = (uint)(longlong)auVar29._0_4_;
          uVar20 = (uVar19 & 0x7fffff) + 0x3f800000;
          auVar29 = vfmadd132ss_fma(auVar57,auVar54,ZEXT416(uVar20));
          auVar29 = vfmadd132ss_fma(auVar29,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar20));
          fVar17 = auVar29._0_4_ * (float)(uVar19 & 0xff800000);
        }
        *(float *)((longlong)*pauVar23 + 0xc) = fVar17;
        pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 0x10);
      } while (pauVar23 < (undefined1 (*) [32])((longlong)pauVar1[-1] + 0x14));
      if (pauVar1 <= pauVar23) goto LAB_1453ba704;
    }
    do {
      auVar29 = ZEXT416((uint)(*(float *)*pauVar23 + 1e-25));
      auVar29 = vfnmadd231ss_fma(auVar29,auVar29,auVar83);
      auVar29 = vfmadd231ss_fma(auVar29,auVar83,auVar82._0_16_);
      auVar82 = ZEXT1664(auVar29);
      fVar21 = (float)((auVar29._0_4_ & 0x7fffff) + 0x3f800000);
      fVar7 = fVar21 + 1.0;
      auVar28 = ZEXT416((uint)(11.581186 / (fVar7 * fVar7 * fVar7)));
      auVar28 = vfmsub231ss_fma(auVar28,auVar28,ZEXT416((uint)(fVar21 * fVar21 * fVar21)));
      auVar29 = vfmadd231ss_fma(auVar28,ZEXT416((uint)((float)(auVar29._0_4_ >> 0x17 & 0xff) - 127.0
                                                      )),ZEXT416(0x4040a8c2));
      auVar28 = vmaxss_avx(ZEXT416((uint)(param_6 - auVar29._0_4_)),auVar80);
      auVar29 = vcmpss_avx(auVar80,ZEXT416((uint)(auVar81._0_4_ - auVar28._0_4_)),2);
      auVar29 = vblendvps_avx(ZEXT416(param_9),ZEXT416(param_8),auVar29);
      auVar28 = vfnmadd231ss_fma(auVar28,auVar28,auVar29);
      auVar29 = vfmadd231ss_fma(auVar28,auVar81._0_16_,auVar29);
      auVar81 = ZEXT1664(auVar29);
      fVar7 = auVar29._0_4_ * param_7 * -0.05;
      fVar21 = fVar8;
      if ((-37.0 <= fVar7) && (fVar7 <= 37.0)) {
        auVar29 = vfmadd213ss_fma(auVar26,ZEXT416((uint)fVar7),auVar46);
        uVar19 = (uint)(longlong)auVar29._0_4_;
        uVar20 = (uVar19 & 0x7fffff) + 0x3f800000;
        auVar29 = vfmadd132ss_fma(auVar57,auVar54,ZEXT416(uVar20));
        auVar29 = vfmadd132ss_fma(auVar29,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar20));
        fVar21 = auVar29._0_4_ * (float)(uVar19 & 0xff800000);
      }
      *(float *)*pauVar23 = fVar21;
      pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 4);
    } while (pauVar23 < pauVar1);
  }
LAB_1453ba704:
  *param_5 = auVar81._0_4_;
  param_5[1] = auVar82._0_4_;
  if (param_3 != 0) {
    uVar14 = (ulonglong)param_3;
    uVar25 = (ulonglong)((longlong)pauVar1 + (3 - (longlong)param_2)) >> 2;
    if (pauVar1 < param_2) {
      uVar25 = 0;
    }
    do {
      pfVar22 = (float *)*param_1;
      pauVar23 = param_2;
      if (((uVar25 != 0) && (0x1f < uVar25)) &&
         (((float *)((longlong)param_2[-1] + (uVar25 + 7) * 4) < pfVar22 ||
          ((undefined1 (*) [32])(pfVar22 + (uVar25 - 1)) < param_2)))) {
        uVar24 = 0;
        do {
          fVar7 = *(float *)((longlong)*pauVar23 + 4);
          fVar8 = *(float *)((longlong)*pauVar23 + 8);
          fVar21 = *(float *)((longlong)*pauVar23 + 0xc);
          fVar17 = *(float *)((longlong)*pauVar23 + 0x10);
          fVar2 = *(float *)((longlong)*pauVar23 + 0x14);
          fVar3 = *(float *)((longlong)*pauVar23 + 0x18);
          fVar4 = *(float *)((longlong)*pauVar23 + 0x1c);
          *pfVar22 = *(float *)*pauVar23 * *pfVar22;
          pfVar22[1] = fVar7 * pfVar22[1];
          pfVar22[2] = fVar8 * pfVar22[2];
          pfVar22[3] = fVar21 * pfVar22[3];
          pfVar22[4] = fVar17 * pfVar22[4];
          pfVar22[5] = fVar2 * pfVar22[5];
          pfVar22[6] = fVar3 * pfVar22[6];
          pfVar22[7] = fVar4 * pfVar22[7];
          fVar7 = *(float *)((longlong)pauVar23[1] + 4);
          fVar8 = *(float *)((longlong)pauVar23[1] + 8);
          fVar21 = *(float *)((longlong)pauVar23[1] + 0xc);
          fVar17 = *(float *)((longlong)pauVar23[1] + 0x10);
          fVar2 = *(float *)((longlong)pauVar23[1] + 0x14);
          fVar3 = *(float *)((longlong)pauVar23[1] + 0x18);
          fVar4 = *(float *)((longlong)pauVar23[1] + 0x1c);
          pfVar22[8] = *(float *)pauVar23[1] * pfVar22[8];
          pfVar22[9] = fVar7 * pfVar22[9];
          pfVar22[10] = fVar8 * pfVar22[10];
          pfVar22[0xb] = fVar21 * pfVar22[0xb];
          pfVar22[0xc] = fVar17 * pfVar22[0xc];
          pfVar22[0xd] = fVar2 * pfVar22[0xd];
          pfVar22[0xe] = fVar3 * pfVar22[0xe];
          pfVar22[0xf] = fVar4 * pfVar22[0xf];
          fVar7 = *(float *)((longlong)pauVar23[2] + 4);
          fVar8 = *(float *)((longlong)pauVar23[2] + 8);
          fVar21 = *(float *)((longlong)pauVar23[2] + 0xc);
          fVar17 = *(float *)((longlong)pauVar23[2] + 0x10);
          fVar2 = *(float *)((longlong)pauVar23[2] + 0x14);
          fVar3 = *(float *)((longlong)pauVar23[2] + 0x18);
          fVar4 = *(float *)((longlong)pauVar23[2] + 0x1c);
          pfVar22[0x10] = *(float *)pauVar23[2] * pfVar22[0x10];
          pfVar22[0x11] = fVar7 * pfVar22[0x11];
          pfVar22[0x12] = fVar8 * pfVar22[0x12];
          pfVar22[0x13] = fVar21 * pfVar22[0x13];
          pfVar22[0x14] = fVar17 * pfVar22[0x14];
          pfVar22[0x15] = fVar2 * pfVar22[0x15];
          pfVar22[0x16] = fVar3 * pfVar22[0x16];
          pfVar22[0x17] = fVar4 * pfVar22[0x17];
          auVar43._0_4_ = *(float *)pauVar23[3] * pfVar22[0x18];
          auVar43._4_4_ = *(float *)((longlong)pauVar23[3] + 4) * pfVar22[0x19];
          auVar43._8_4_ = *(float *)((longlong)pauVar23[3] + 8) * pfVar22[0x1a];
          auVar43._12_4_ = *(float *)((longlong)pauVar23[3] + 0xc) * pfVar22[0x1b];
          auVar43._16_4_ = *(float *)((longlong)pauVar23[3] + 0x10) * pfVar22[0x1c];
          auVar43._20_4_ = *(float *)((longlong)pauVar23[3] + 0x14) * pfVar22[0x1d];
          auVar43._24_4_ = *(float *)((longlong)pauVar23[3] + 0x18) * pfVar22[0x1e];
          auVar43._28_4_ = *(float *)((longlong)pauVar23[3] + 0x1c) * pfVar22[0x1f];
          *(undefined1 (*) [32])(pfVar22 + 0x18) = auVar43;
          pfVar22 = pfVar22 + 0x20;
          pauVar23 = pauVar23 + 4;
          uVar24 = uVar24 + 0x20;
        } while (uVar24 < (uVar25 & 0xffffffffffffffe0));
      }
      if (pauVar23 < pauVar1) {
        if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar23) & 0xfffffffffffffffcU)) {
          do {
            *pfVar22 = *(float *)*pauVar23 * *pfVar22;
            pfVar22[1] = *(float *)((longlong)*pauVar23 + 4) * pfVar22[1];
            pfVar22[2] = *(float *)((longlong)*pauVar23 + 8) * pfVar22[2];
            pfVar22[3] = *(float *)((longlong)*pauVar23 + 0xc) * pfVar22[3];
            pfVar22 = pfVar22 + 4;
            pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 0x10);
          } while (pauVar23 < (undefined1 (*) [32])((longlong)pauVar1[-1] + 0x14));
          if (pauVar1 <= pauVar23) goto LAB_1453ba8a9;
        }
        do {
          pfVar11 = (float *)*pauVar23;
          pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 4);
          *pfVar22 = *pfVar22 * *pfVar11;
          pfVar22 = pfVar22 + 1;
        } while (pauVar23 < pauVar1);
      }
LAB_1453ba8a9:
      param_1 = param_1 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 1453ba8e0 FUN_1453ba8e0 body=927 status=ok
// SIG undefined FUN_1453ba8e0(void)

void FUN_1453ba8e0(longlong *param_1,ulonglong param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar16 = param_2 & 0xffffffff;
  memset(param_4,0,(param_2 & 0xff) << 2);
  fVar3 = param_3[2];
  uVar10 = 0;
  uVar15 = (uint)param_2;
  if (fVar3 == 0.0) {
    uVar16 = uVar16 >> 0xc;
    uVar12 = uVar10;
    if ((uVar16 & 2) != 0) {
      uVar12 = 2;
      param_4[1] = param_3[1];
      if ((uVar16 & 4) != 0) {
        uVar12 = 3;
        param_4[2] = param_3[1] * 0.5;
      }
    }
    if ((uVar16 & 0x210) != 0) {
      iVar8 = (int)uVar12;
      param_4[uVar12] = 0.0;
      param_4[iVar8 + 1] = param_3[1];
      if (((uint)uVar16 & 0x210) == 0x210) {
        param_4[iVar8 + 2] = 0.0;
        param_4[iVar8 + 3] = param_3[1];
      }
    }
  }
  else if (fVar3 == 1.4013e-45) {
    if ((param_2 & 0x210000) != 0) {
      uVar7 = (uVar15 & 0x4000 | 0x8000) >> 0xe;
      param_4[uVar7] = param_3[1];
      param_4[uVar7 + 1] = param_3[1];
      if ((uVar15 & 0x210000) == 0x210000) {
        param_4[uVar7 + 2] = param_3[1] * 0.5;
        param_4[uVar7 + 3] = param_3[1] * 0.5;
      }
    }
  }
  else if (fVar3 == 2.8026e-45) {
    uVar16 = uVar16 >> 0xc;
    if ((uVar16 & 0x210) == 0) {
      if (((uVar16 & 3) != 0) && (param_4[1] = param_3[1], (uVar16 & 4) != 0)) {
        param_4[2] = param_3[1] * 0.5;
      }
    }
    else {
      lVar11 = 2;
      param_4[1] = param_3[1] * 0.5;
      if ((uVar16 & 4) != 0) {
        lVar11 = 3;
        param_4[2] = param_3[1] * 0.25;
      }
      iVar8 = (int)lVar11;
      param_4[lVar11] = param_3[1] * 0.5;
      param_4[iVar8 + 1] = param_3[1];
      if (((uint)uVar16 & 0x210) == 0x210) {
        param_4[iVar8 + 2] = param_3[1] * 0.25;
        param_4[iVar8 + 3] = param_3[1] * 0.75;
      }
    }
  }
  else if ((fVar3 == 4.2039e-45) && (uVar7 = uVar15 - ((uint)(uVar16 >> 0xf) & 1) & 0xff, 1 < uVar7)
          ) {
    uVar16 = (ulonglong)(uVar7 - 1);
    pfVar9 = param_4;
    do {
      pfVar9 = pfVar9 + 1;
      iVar8 = (**(code **)(*param_1 + 0xd8))(param_1);
      *pfVar9 = (float)iVar8 * param_3[1] * 4.656613e-10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar7 = uVar15 & 0xff;
  if ((param_2 & 0xff) != 0) {
    if (0xf < uVar7) {
      fVar3 = *param_3;
      if ((param_3 < param_4) || (param_4 + (uVar7 - 1) < param_3)) {
        uVar13 = 8;
        do {
          pfVar9 = param_4 + uVar10;
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + uVar10;
          *pfVar2 = *pfVar9 + fVar3;
          pfVar2[1] = fVar4 + fVar3;
          pfVar2[2] = fVar5 + fVar3;
          pfVar2[3] = fVar6 + fVar3;
          uVar14 = (int)uVar10 + 0x10;
          uVar10 = (ulonglong)uVar14;
          pfVar9 = param_4 + (uVar13 - 4);
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + (uVar13 - 4);
          *pfVar2 = *pfVar9 + fVar3;
          pfVar2[1] = fVar4 + fVar3;
          pfVar2[2] = fVar5 + fVar3;
          pfVar2[3] = fVar6 + fVar3;
          pfVar9 = param_4 + uVar13;
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + uVar13;
          *pfVar2 = fVar3 + *pfVar9;
          pfVar2[1] = fVar3 + fVar4;
          pfVar2[2] = fVar3 + fVar5;
          pfVar2[3] = fVar3 + fVar6;
          uVar1 = uVar13 + 4;
          uVar13 = uVar13 + 0x10;
          pfVar9 = param_4 + uVar1;
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + uVar1;
          *pfVar2 = fVar3 + *pfVar9;
          pfVar2[1] = fVar3 + fVar4;
          pfVar2[2] = fVar3 + fVar5;
          pfVar2[3] = fVar3 + fVar6;
        } while (uVar14 < (uVar15 & 0xf0));
      }
    }
    uVar15 = (uint)uVar10;
    if (uVar15 < uVar7) {
      uVar16 = uVar10;
      if (3 < uVar7 - uVar15) {
        pfVar9 = param_4 + uVar10 + 2;
        uVar13 = ((uVar7 - uVar15) - 4 >> 2) + 1;
        uVar12 = (ulonglong)uVar13;
        uVar15 = uVar15 + uVar13 * 4;
        uVar16 = (ulonglong)uVar15;
        uVar10 = uVar10 + (ulonglong)uVar13 * 4;
        do {
          pfVar9[-2] = *param_3 + pfVar9[-2];
          pfVar9[-1] = pfVar9[-1] + *param_3;
          *pfVar9 = *param_3 + *pfVar9;
          pfVar9[1] = pfVar9[1] + *param_3;
          pfVar9 = pfVar9 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if (uVar7 <= uVar15) {
          return;
        }
      }
      param_4 = param_4 + uVar10;
      uVar10 = (ulonglong)(uVar7 - (int)uVar16);
      do {
        *param_4 = *param_4 + *param_3;
        param_4 = param_4 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return;
}



// FUNCTION 1453bac80 FUN_1453bac80 body=668 status=ok
// SIG undefined FUN_1453bac80(void)

void FUN_1453bac80(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,float param_7,uint param_8)

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
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((param_5 == param_4) && (param_7 == param_6)) {
    pfVar1 = param_3 + param_8;
    if (param_3 < pfVar1) {
      if ((param_8 & 0x1f) == 0) {
        do {
          fVar19 = param_2[1];
          fVar20 = param_2[2];
          fVar13 = param_2[3];
          fVar14 = param_1[1];
          fVar15 = param_1[2];
          fVar16 = param_1[3];
          fVar17 = param_2[4];
          fVar18 = param_2[5];
          fVar4 = param_2[6];
          fVar5 = param_2[7];
          fVar6 = param_2[8];
          fVar7 = param_2[9];
          fVar8 = param_2[10];
          fVar9 = param_2[0xb];
          *param_3 = *param_1 * param_5 + param_7 * *param_2;
          param_3[1] = fVar14 * param_5 + param_7 * fVar19;
          param_3[2] = fVar15 * param_5 + param_7 * fVar20;
          param_3[3] = fVar16 * param_5 + param_7 * fVar13;
          fVar19 = param_1[5];
          fVar20 = param_1[6];
          fVar13 = param_1[7];
          fVar14 = param_2[0xc];
          fVar15 = param_2[0xd];
          fVar16 = param_2[0xe];
          fVar10 = param_2[0xf];
          param_3[4] = param_1[4] * param_5 + param_7 * fVar17;
          param_3[5] = fVar19 * param_5 + param_7 * fVar18;
          param_3[6] = fVar20 * param_5 + param_7 * fVar4;
          param_3[7] = fVar13 * param_5 + param_7 * fVar5;
          fVar19 = param_1[9];
          fVar20 = param_1[10];
          fVar13 = param_1[0xb];
          fVar17 = param_2[0x10];
          fVar18 = param_2[0x11];
          fVar4 = param_2[0x12];
          fVar5 = param_2[0x13];
          param_3[8] = param_1[8] * param_5 + param_7 * fVar6;
          param_3[9] = fVar19 * param_5 + param_7 * fVar7;
          param_3[10] = fVar20 * param_5 + param_7 * fVar8;
          param_3[0xb] = fVar13 * param_5 + param_7 * fVar9;
          fVar19 = param_1[0xd];
          fVar20 = param_1[0xe];
          fVar13 = param_1[0xf];
          fVar6 = param_2[0x14];
          fVar7 = param_2[0x15];
          fVar8 = param_2[0x16];
          fVar9 = param_2[0x17];
          param_3[0xc] = param_1[0xc] * param_5 + param_7 * fVar14;
          param_3[0xd] = fVar19 * param_5 + param_7 * fVar15;
          param_3[0xe] = fVar20 * param_5 + param_7 * fVar16;
          param_3[0xf] = fVar13 * param_5 + param_7 * fVar10;
          fVar19 = param_1[0x11];
          fVar20 = param_1[0x12];
          fVar13 = param_1[0x13];
          fVar14 = param_2[0x18];
          fVar15 = param_2[0x19];
          fVar16 = param_2[0x1a];
          fVar10 = param_2[0x1b];
          param_3[0x10] = param_1[0x10] * param_5 + param_7 * fVar17;
          param_3[0x11] = fVar19 * param_5 + param_7 * fVar18;
          param_3[0x12] = fVar20 * param_5 + param_7 * fVar4;
          param_3[0x13] = fVar13 * param_5 + param_7 * fVar5;
          fVar19 = param_1[0x15];
          fVar20 = param_1[0x16];
          fVar13 = param_1[0x17];
          fVar17 = param_2[0x1c];
          fVar18 = param_2[0x1d];
          fVar4 = param_2[0x1e];
          fVar5 = param_2[0x1f];
          param_2 = param_2 + 0x20;
          param_3[0x14] = param_1[0x14] * param_5 + param_7 * fVar6;
          param_3[0x15] = fVar19 * param_5 + param_7 * fVar7;
          param_3[0x16] = fVar20 * param_5 + param_7 * fVar8;
          param_3[0x17] = fVar13 * param_5 + param_7 * fVar9;
          fVar19 = param_1[0x19];
          fVar20 = param_1[0x1a];
          fVar13 = param_1[0x1b];
          param_3[0x18] = param_1[0x18] * param_5 + param_7 * fVar14;
          param_3[0x19] = fVar19 * param_5 + param_7 * fVar15;
          param_3[0x1a] = fVar20 * param_5 + param_7 * fVar16;
          param_3[0x1b] = fVar13 * param_5 + param_7 * fVar10;
          pfVar2 = param_1 + 0x1c;
          fVar19 = param_1[0x1d];
          fVar20 = param_1[0x1e];
          fVar13 = param_1[0x1f];
          param_1 = param_1 + 0x20;
          param_3[0x1c] = *pfVar2 * param_5 + param_7 * fVar17;
          param_3[0x1d] = fVar19 * param_5 + param_7 * fVar18;
          param_3[0x1e] = fVar20 * param_5 + param_7 * fVar4;
          param_3[0x1f] = fVar13 * param_5 + param_7 * fVar5;
          param_3 = param_3 + 0x20;
        } while (param_3 < pfVar1);
        return;
      }
      lVar12 = (longlong)param_2 - (longlong)param_3;
      do {
        pfVar2 = (float *)(lVar12 + (longlong)param_3);
        fVar19 = pfVar2[1];
        fVar20 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar3 = (float *)((longlong)param_1 + (longlong)param_3 + (lVar12 - (longlong)param_2));
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        *param_3 = *pfVar3 * param_5 + param_7 * *pfVar2;
        param_3[1] = fVar14 * param_5 + param_7 * fVar19;
        param_3[2] = fVar15 * param_5 + param_7 * fVar20;
        param_3[3] = fVar16 * param_5 + param_7 * fVar13;
        param_3 = param_3 + 4;
      } while (param_3 < pfVar1);
    }
    return;
  }
  uVar11 = (ulonglong)param_8;
  pfVar1 = param_3 + uVar11;
  fVar20 = (param_5 - param_4) * (1.0 / (float)uVar11);
  fVar19 = (param_7 - param_6) * (1.0 / (float)uVar11);
  if (param_3 < pfVar1) {
    if (3 < uVar11) {
      do {
        fVar15 = param_6 + fVar19 + fVar19;
        fVar13 = param_2[1];
        *param_3 = param_6 * *param_2 + param_4 * *param_1;
        fVar17 = param_4 + fVar20 + fVar20;
        fVar14 = param_2[2];
        fVar16 = fVar15 + fVar19;
        param_3[1] = (param_4 + fVar20) * param_1[1] + (param_6 + fVar19) * fVar13;
        fVar18 = fVar17 + fVar20;
        fVar13 = param_2[3];
        param_6 = fVar16 + fVar19;
        param_2 = param_2 + 4;
        param_3[2] = fVar17 * param_1[2] + fVar15 * fVar14;
        pfVar2 = param_1 + 3;
        param_4 = fVar18 + fVar20;
        param_1 = param_1 + 4;
        param_3[3] = fVar18 * *pfVar2 + fVar16 * fVar13;
        param_3 = param_3 + 4;
      } while (param_3 < pfVar1 + -3);
      if (pfVar1 <= param_3) {
        return;
      }
    }
    lVar12 = (longlong)param_1 - (longlong)param_2;
    do {
      fVar14 = param_4 * *(float *)((longlong)param_2 + lVar12);
      param_4 = param_4 + fVar20;
      fVar13 = param_6 * *param_2;
      param_6 = param_6 + fVar19;
      param_2 = param_2 + 1;
      *param_3 = fVar14 + fVar13;
      param_3 = param_3 + 1;
    } while (param_3 < pfVar1);
  }
  return;
}



// FUNCTION 1453baf30 FUN_1453baf30 body=318 status=ok
// SIG undefined FUN_1453baf30(void)

void FUN_1453baf30(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((param_4 == param_3) && (param_6 == param_5)) {
    FUN_1453bb070(param_1,param_2,param_4);
    return;
  }
  uVar3 = (ulonglong)param_7;
  pfVar2 = param_1 + uVar3;
  fVar10 = (param_4 - param_3) * (1.0 / (float)uVar3);
  fVar7 = (param_6 - param_5) * (1.0 / (float)uVar3);
  if (param_1 < pfVar2) {
    if (3 < uVar3) {
      do {
        fVar5 = param_3 + fVar10 + fVar10;
        *param_1 = param_3 * *param_1 + param_5 * *param_2;
        fVar8 = param_5 + fVar7 + fVar7;
        fVar6 = fVar5 + fVar10;
        param_1[1] = (param_5 + fVar7) * param_2[1] + (param_3 + fVar10) * param_1[1];
        fVar9 = fVar8 + fVar7;
        param_3 = fVar6 + fVar10;
        param_1[2] = fVar8 * param_2[2] + fVar5 * param_1[2];
        pfVar1 = param_2 + 3;
        param_5 = fVar9 + fVar7;
        param_2 = param_2 + 4;
        param_1[3] = fVar9 * *pfVar1 + fVar6 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar2 + -3);
      if (pfVar2 <= param_1) {
        return;
      }
    }
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      fVar5 = param_3 * *param_1;
      param_3 = param_3 + fVar10;
      fVar6 = param_5 * *(float *)(lVar4 + (longlong)param_1);
      param_5 = param_5 + fVar7;
      *param_1 = fVar6 + fVar5;
      param_1 = param_1 + 1;
    } while (param_1 < pfVar2);
  }
  return;
}



// FUNCTION 1453bb070 FUN_1453bb070 body=269 status=ok
// SIG undefined FUN_1453bb070(void)

void FUN_1453bb070(float *param_1,float *param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  
  pfVar1 = param_1 + param_5;
  if (param_1 < pfVar1) {
    if ((param_5 & 0x1f) == 0) {
      do {
        fVar3 = param_2[1];
        fVar4 = param_2[2];
        fVar5 = param_2[3];
        *param_1 = *param_2 * param_4 + *param_1 * param_3;
        param_1[1] = fVar3 * param_4 + param_1[1] * param_3;
        param_1[2] = fVar4 * param_4 + param_1[2] * param_3;
        param_1[3] = fVar5 * param_4 + param_1[3] * param_3;
        fVar3 = param_2[5];
        fVar4 = param_2[6];
        fVar5 = param_2[7];
        param_1[4] = param_2[4] * param_4 + param_1[4] * param_3;
        param_1[5] = fVar3 * param_4 + param_1[5] * param_3;
        param_1[6] = fVar4 * param_4 + param_1[6] * param_3;
        param_1[7] = fVar5 * param_4 + param_1[7] * param_3;
        fVar3 = param_2[9];
        fVar4 = param_2[10];
        fVar5 = param_2[0xb];
        param_1[8] = param_2[8] * param_4 + param_1[8] * param_3;
        param_1[9] = fVar3 * param_4 + param_1[9] * param_3;
        param_1[10] = fVar4 * param_4 + param_1[10] * param_3;
        param_1[0xb] = fVar5 * param_4 + param_1[0xb] * param_3;
        fVar3 = param_2[0xd];
        fVar4 = param_2[0xe];
        fVar5 = param_2[0xf];
        param_1[0xc] = param_2[0xc] * param_4 + param_1[0xc] * param_3;
        param_1[0xd] = fVar3 * param_4 + param_1[0xd] * param_3;
        param_1[0xe] = fVar4 * param_4 + param_1[0xe] * param_3;
        param_1[0xf] = fVar5 * param_4 + param_1[0xf] * param_3;
        fVar3 = param_2[0x11];
        fVar4 = param_2[0x12];
        fVar5 = param_2[0x13];
        param_1[0x10] = param_2[0x10] * param_4 + param_1[0x10] * param_3;
        param_1[0x11] = fVar3 * param_4 + param_1[0x11] * param_3;
        param_1[0x12] = fVar4 * param_4 + param_1[0x12] * param_3;
        param_1[0x13] = fVar5 * param_4 + param_1[0x13] * param_3;
        fVar3 = param_2[0x15];
        fVar4 = param_2[0x16];
        fVar5 = param_2[0x17];
        param_1[0x14] = param_2[0x14] * param_4 + param_1[0x14] * param_3;
        param_1[0x15] = fVar3 * param_4 + param_1[0x15] * param_3;
        param_1[0x16] = fVar4 * param_4 + param_1[0x16] * param_3;
        param_1[0x17] = fVar5 * param_4 + param_1[0x17] * param_3;
        fVar3 = param_2[0x19];
        fVar4 = param_2[0x1a];
        fVar5 = param_2[0x1b];
        param_1[0x18] = param_2[0x18] * param_4 + param_1[0x18] * param_3;
        param_1[0x19] = fVar3 * param_4 + param_1[0x19] * param_3;
        param_1[0x1a] = fVar4 * param_4 + param_1[0x1a] * param_3;
        param_1[0x1b] = fVar5 * param_4 + param_1[0x1b] * param_3;
        pfVar2 = param_2 + 0x1c;
        fVar3 = param_2[0x1d];
        fVar4 = param_2[0x1e];
        fVar5 = param_2[0x1f];
        param_2 = param_2 + 0x20;
        param_1[0x1c] = *pfVar2 * param_4 + param_1[0x1c] * param_3;
        param_1[0x1d] = fVar3 * param_4 + param_1[0x1d] * param_3;
        param_1[0x1e] = fVar4 * param_4 + param_1[0x1e] * param_3;
        param_1[0x1f] = fVar5 * param_4 + param_1[0x1f] * param_3;
        param_1 = param_1 + 0x20;
      } while (param_1 < pfVar1);
      return;
    }
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pfVar2 = (float *)(lVar6 + (longlong)param_1);
      fVar3 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      *param_1 = *pfVar2 * param_4 + *param_1 * param_3;
      param_1[1] = fVar3 * param_4 + param_1[1] * param_3;
      param_1[2] = fVar4 * param_4 + param_1[2] * param_3;
      param_1[3] = fVar5 * param_4 + param_1[3] * param_3;
      param_1 = param_1 + 4;
    } while (param_1 < pfVar1);
  }
  return;
}



// FUNCTION 1453bb180 FUN_1453bb180 body=346 status=ok
// SIG undefined FUN_1453bb180(void)

void FUN_1453bb180(float *param_1,float *param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar12 = 0;
  pfVar1 = param_1 + param_5;
  uVar10 = (ulonglong)param_5;
  if (pfVar1 < param_1) {
    uVar10 = uVar12;
  }
  if ((uVar10 != 0) && (0xf < uVar10)) {
    do {
      uVar12 = uVar12 + 0x10;
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      fVar4 = param_2[3];
      fVar5 = param_2[4];
      fVar6 = param_2[5];
      fVar7 = param_2[6];
      fVar8 = param_2[7];
      *param_1 = *param_1 * param_3 + *param_2 * param_4;
      param_1[1] = param_1[1] * param_3 + fVar2 * param_4;
      param_1[2] = param_1[2] * param_3 + fVar3 * param_4;
      param_1[3] = param_1[3] * param_3 + fVar4 * param_4;
      fVar2 = param_2[8];
      fVar3 = param_2[9];
      fVar4 = param_2[10];
      fVar9 = param_2[0xb];
      param_1[4] = param_1[4] * param_3 + fVar5 * param_4;
      param_1[5] = param_1[5] * param_3 + fVar6 * param_4;
      param_1[6] = param_1[6] * param_3 + fVar7 * param_4;
      param_1[7] = param_1[7] * param_3 + fVar8 * param_4;
      fVar5 = param_2[0xc];
      fVar6 = param_2[0xd];
      fVar7 = param_2[0xe];
      fVar8 = param_2[0xf];
      param_2 = param_2 + 0x10;
      param_1[8] = param_1[8] * param_3 + fVar2 * param_4;
      param_1[9] = param_1[9] * param_3 + fVar3 * param_4;
      param_1[10] = param_1[10] * param_3 + fVar4 * param_4;
      param_1[0xb] = param_1[0xb] * param_3 + fVar9 * param_4;
      param_1[0xc] = param_1[0xc] * param_3 + fVar5 * param_4;
      param_1[0xd] = param_1[0xd] * param_3 + fVar6 * param_4;
      param_1[0xe] = param_1[0xe] * param_3 + fVar7 * param_4;
      param_1[0xf] = param_1[0xf] * param_3 + fVar8 * param_4;
      param_1 = param_1 + 0x10;
    } while (uVar12 < (uVar10 & 0xfffffffffffffff0));
  }
  if (param_1 < pfVar1) {
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      do {
        fVar2 = param_2[1];
        *param_1 = param_3 * *param_1 + param_4 * *param_2;
        fVar3 = param_2[2];
        param_1[1] = param_4 * fVar2 + param_3 * param_1[1];
        fVar2 = param_2[3];
        param_2 = param_2 + 4;
        param_1[2] = param_4 * fVar3 + param_3 * param_1[2];
        param_1[3] = param_4 * fVar2 + param_3 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1 + -3);
      if (pfVar1 <= param_1) {
        return;
      }
    }
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      *param_1 = param_4 * *(float *)(lVar11 + (longlong)param_1) + param_3 * *param_1;
      param_1 = param_1 + 1;
    } while (param_1 < pfVar1);
  }
  return;
}


