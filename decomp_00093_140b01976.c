// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b01976 FUN_140b01976 body=789 status=ok
// SIG undefined FUN_140b01976(void)

ulonglong FUN_140b01976(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [40];
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_bc = *(float *)(param_1 + 0x10);
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + 0x10);
    plVar5 = (longlong *)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_2 + 0x20);
    }
    uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
    local_bc = (float)(*pcVar1)(uVar3);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    lVar2 = param_1 + 0x28;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa0);
    }
    if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
      fVar7 = 1.0;
      fVar11 = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      fVar8 = fVar7;
    }
    else {
      lVar4 = 0;
      fVar11 = 0.0;
      fVar10 = 0.0;
      fVar8 = 0.0;
      fVar7 = 1.0;
      fVar9 = 0.0;
      do {
        if (*(char *)(lVar2 + lVar4) == '\x05') {
          fVar12 = *(float *)(lVar2 + 8 + lVar4);
          if (((fVar12 == 1.0) && (!NAN(fVar12))) || (fVar12 <= 0.0001)) {
            if (ABS(fVar12) <= 1e-08) {
              fVar7 = 0.0;
            }
          }
          else if (fVar12 <= 1.0) {
            fVar12 = 1.0 - 1.0 / fVar12;
LAB_140b01bc8:
            fVar10 = fVar10 + fVar12;
          }
          else {
            fVar12 = fVar12 + -1.0;
LAB_140b01aac:
            fVar8 = fVar8 + fVar12;
          }
        }
        else {
          switch(*(char *)(lVar2 + lVar4)) {
          case '\x01':
            fVar12 = *(float *)(lVar2 + 8 + lVar4);
            if ((fVar12 != 0.0) || (NAN(fVar12))) {
              if (fVar12 <= 0.0) goto LAB_140b01bc8;
              goto LAB_140b01aac;
            }
            break;
          case '\x02':
            fVar12 = *(float *)(lVar2 + 8 + lVar4);
            if ((fVar12 != 0.0) || (NAN(fVar12))) {
              fVar11 = fVar11 + fVar12;
            }
            break;
          case '\x03':
            fVar12 = *(float *)(lVar2 + 8 + lVar4);
            if ((fVar12 != 0.0) || (NAN(fVar12))) {
              fVar9 = fVar9 + fVar12;
            }
            break;
          case '\x04':
            fVar12 = *(float *)(lVar2 + 8 + lVar4);
            if ((fVar12 != 1.0) || (NAN(fVar12))) {
              fVar7 = fVar7 * fVar12;
            }
          }
        }
        lVar4 = lVar4 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0xa8) * 0x18 != lVar4);
      fVar8 = fVar8 + 1.0;
    }
    fVar9 = fVar7 * (fVar8 / (1.0 - fVar10)) * (local_bc + fVar11) + fVar9;
    uVar6 = (ulonglong)(uint)fVar9;
    if (param_3 != 0) {
      pcVar1 = *(code **)(param_3 + 0x10);
      plVar5 = (longlong *)(param_3 + 0x30);
      if (*(longlong **)(param_3 + 0x20) != (longlong *)0x0) {
        plVar5 = *(longlong **)(param_3 + 0x20);
      }
      local_c0 = fVar9;
      local_b8 = param_4;
      uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      uVar6 = (*pcVar1)(uVar3,&local_c0,&local_b8);
    }
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x10);
  }
  if ((local_b0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140b01c92 FUN_140b01c92 body=57 status=ok
// SIG undefined FUN_140b01c92(void)

void FUN_140b01c92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb215f8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb215f8 = FUN_140002ddd(FUN_1464339ef,uVar1,L"GbxBrainAspectSettings_LockTarget");
  }
  return;
}



// FUNCTION 140b01ccc FUN_140b01ccc body=25 status=ok
// SIG undefined FUN_140b01ccc(void)

undefined8 FUN_140b01ccc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140b01ce6 FUN_140b01ce6 body=7186 status=ok
// SIG undefined FUN_140b01ce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b01ce6(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint *_Dst;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong *plVar23;
  longlong lVar24;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  uint local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  undefined8 *local_150;
  code *local_148;
  code *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  int local_114;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar23 = (longlong *)(param_1 + 0x38);
    uVar19 = 0;
    do {
      plVar15 = (longlong *)*plVar23;
      lVar4 = plVar15[(ulonglong)uVar19 * 2];
      if (lVar4 == 0) goto LAB_140b01de1;
      if (*(char *)(lVar4 + 0x88) == '\x01') {
        if (*(longlong *)(lVar4 + 0xf8) != 0) goto LAB_140b01de1;
        local_138 = (longlong *)(lVar4 + 0xe8);
        lVar21 = 0x58;
        local_130 = plVar23;
        local_120 = plVar15;
        if (*(int *)(lVar4 + 0xf0) == 0) {
LAB_140b0343e:
          FUN_1447f69b6(lVar4 + lVar21);
          plVar15 = local_120;
          plVar23 = local_130;
          goto LAB_140b03456;
        }
        if (*(int *)(lVar4 + 0xf0) < 1) {
LAB_140b02e51:
          local_d8._0_4_ = 0;
          iVar22 = 0;
          uVar9 = (uint)local_d8;
        }
        else {
          uVar9 = ((uint *)*local_138)[1];
          if (uVar9 == 0) goto LAB_140b02e51;
          uVar3 = *(uint *)*local_138;
          if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140b02e51;
          plVar23 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar23 == (longlong *)0x0) ||
             (((*(uint *)(plVar23 + 2) != uVar9 || ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) ||
              (*plVar23 == 0)))) goto LAB_140b02e51;
          uVar9 = *(uint *)(*plVar23 + 0xc);
          local_d8 = (code *)(ulonglong)uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          iVar22 = *(int *)(lVar21 + 0x10);
          if (*(int *)(lVar21 + 0x10) == 0) {
            LOCK();
            iVar22 = DAT_14c964868 + 1;
            UNLOCK();
            iVar20 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar22;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar20);
            }
            LOCK();
            iVar22 = *(int *)(lVar21 + 0x10);
            bVar25 = iVar22 == 0;
            if (bVar25) {
              *(int *)(lVar21 + 0x10) = iVar20;
              iVar22 = 0;
            }
            UNLOCK();
            uVar9 = (uint)local_d8;
            if (bVar25) {
              iVar22 = iVar20;
            }
          }
        }
        local_d8._0_4_ = uVar9;
        local_d8 = (code *)CONCAT44(iVar22,(uint)local_d8);
        iVar22 = *(int *)(lVar4 + 0xf0);
        if ((longlong)iVar22 < 1) {
          bVar25 = false;
        }
        else {
          iVar20 = -iVar22;
          bVar25 = false;
          uVar16 = (longlong)iVar22;
          do {
            lVar21 = *local_138 + uVar16 * 8;
            _Dst = (uint *)(lVar21 + -8);
            iVar22 = *(int *)(lVar21 + -4);
            if (iVar22 == 0) {
LAB_140b02e75:
              uVar9 = *(uint *)(lVar4 + 0xf0);
              if (uVar16 != uVar9) {
                iVar22 = iVar20 + uVar9;
                if (0 < iVar22) {
                  iVar22 = 1;
                }
                memmove(_Dst,(void *)(*local_138 + (longlong)(int)(uVar9 - iVar22) * 8),
                        (longlong)iVar22 << 3);
                uVar9 = *(uint *)(lVar4 + 0xf0);
              }
              *(uint *)(lVar4 + 0xf0) = uVar9 - 1;
LAB_140b02eb8:
              bVar25 = true;
            }
            else {
              uVar9 = *_Dst;
              if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_140b02e75;
              plVar23 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((plVar23 == (longlong *)0x0) ||
                  (((int)plVar23[2] != iVar22 || ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) ||
                 (lVar21 = *plVar23, lVar21 == 0)) goto LAB_140b02e75;
              cVar7 = FUN_140b03970(lVar21);
              if (cVar7 != '\0') {
                uVar9 = *(uint *)(lVar4 + 0xf0);
                if (uVar16 != uVar9) {
                  iVar22 = 1;
                  if ((int)(iVar20 + uVar9) < 1) {
                    iVar22 = iVar20 + uVar9;
                  }
                  memmove((void *)(*(longlong *)(lVar4 + 0xe8) + uVar16 * 8 + -8),
                          (void *)(*(longlong *)(lVar4 + 0xe8) + (longlong)(int)(uVar9 - iVar22) * 8
                                  ),(longlong)iVar22 << 3);
                  uVar9 = *(uint *)(lVar4 + 0xf0);
                }
                *(uint *)(lVar4 + 0xf0) = uVar9 - 1;
                FUN_140b069f4(lVar21,local_138);
                goto LAB_140b02eb8;
              }
            }
            iVar20 = iVar20 + 1;
            bVar26 = 1 < uVar16;
            uVar16 = uVar16 - 1;
          } while (bVar26);
          if (bVar25) {
            FUN_140367464(lVar4 + 0x10,local_138);
          }
          iVar22 = *(int *)(lVar4 + 0xf0);
        }
        if (iVar22 == 0) {
          lVar21 = 0x58;
          goto LAB_140b0343e;
        }
        if (iVar22 < 1) {
LAB_140b02e63:
          local_b8._0_4_ = 0;
          iVar22 = 0;
          uVar9 = (uint)local_b8;
        }
        else {
          uVar9 = ((uint *)*local_138)[1];
          if (uVar9 == 0) goto LAB_140b02e63;
          uVar3 = *(uint *)*local_138;
          if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140b02e63;
          plVar23 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar23 == (longlong *)0x0) ||
             (((*(uint *)(plVar23 + 2) != uVar9 || ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) ||
              (*plVar23 == 0)))) goto LAB_140b02e63;
          uVar9 = *(uint *)(*plVar23 + 0xc);
          local_b8 = (double)(ulonglong)uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          iVar22 = *(int *)(lVar21 + 0x10);
          if (*(int *)(lVar21 + 0x10) == 0) {
            LOCK();
            iVar22 = DAT_14c964868 + 1;
            UNLOCK();
            iVar20 = DAT_14c964868 + 1;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar22;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar20);
            }
            LOCK();
            iVar22 = *(int *)(lVar21 + 0x10);
            bVar26 = iVar22 == 0;
            if (bVar26) {
              *(int *)(lVar21 + 0x10) = iVar20;
              iVar22 = 0;
            }
            UNLOCK();
            uVar9 = (uint)local_b8;
            if (bVar26) {
              iVar22 = iVar20;
            }
          }
        }
        local_b8._0_4_ = uVar9;
        local_b8 = (double)CONCAT44(iVar22,(uint)local_b8);
        cVar7 = FUN_140383372(&local_b8,&local_d8);
        if (cVar7 == '\0') {
          if (local_b8._4_4_ == 0) {
LAB_140b0348e:
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            if ((-1 < (int)(uint)local_b8) && ((int)(uint)local_b8 < DAT_14c9647dc)) {
              puVar17 = (undefined8 *)
                        ((ulonglong)(((uint)local_b8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_b8 >> 0x10) * 8));
              if ((puVar17 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar17 + 2) != local_b8._4_4_ ||
                  ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_140b0348e;
              uVar27 = *puVar17;
            }
          }
          FUN_14577036a(lVar4,uVar27,1);
        }
        else if (bVar25) {
          FUN_140b05db8(lVar4);
        }
        lVar21 = 0x40;
        if ((*(int *)(lVar4 + 0xf0) == 0) ||
           ((*(char *)(lVar4 + 0x19c) == '\x01' &&
            (((((*(int *)(lVar4 + 0x128) == 0 || (uVar9 = *(uint *)(lVar4 + 0x124), (int)uVar9 < 0))
               || (DAT_14c9647dc <= (int)uVar9)) ||
              ((lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar10 == 0
               || (*(int *)(lVar10 + 0x10) != *(int *)(lVar4 + 0x128))))) ||
             ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))) goto LAB_140b0343e;
        if (0 < *(int *)(lVar4 + 0xf0)) {
          uVar9 = ((uint *)*local_138)[1];
          if ((((uVar9 != 0) && (uVar3 = *(uint *)*local_138, -1 < (int)uVar3)) &&
              (((int)uVar3 < DAT_14c9647dc &&
               (((plVar23 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar23 != (longlong *)0x0 && (*(uint *)(plVar23 + 2) == uVar9)) &&
                ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)))))) && (*plVar23 != 0)) {
            lVar10 = *(longlong *)(*plVar23 + 0x1c8);
            if (lVar10 == 0) {
              local_c8 = DAT_14c8464f0;
              local_d8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_d0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_d8 = *(code **)(lVar10 + 0x260);
              uStack_d0 = *(longlong **)(lVar10 + 0x268);
              local_c8 = *(double *)(lVar10 + 0x270);
            }
            cVar7 = FUN_140b03a7c(lVar4,&local_d8,0x447a0000);
            if (cVar7 == '\0') goto LAB_140b0343e;
          }
        }
        if (((*(int *)(lVar4 + 0x130) != 0) && (uVar9 = *(uint *)(lVar4 + 300), -1 < (int)uVar9)) &&
           (((((int)uVar9 < DAT_14c9647dc &&
              ((plVar23 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar23 != (longlong *)0x0 && ((int)plVar23[2] == *(int *)(lVar4 + 0x130))))) &&
             ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)) && (lVar10 = *plVar23, lVar10 != 0)))) {
          local_d8 = *(code **)(lVar10 + 0x260);
          uStack_d0 = *(longlong **)(lVar10 + 0x268);
          local_c8 = *(double *)(lVar10 + 0x270);
          cVar7 = FUN_140b03a7c(lVar4,&local_d8,0x447a0000);
          if (cVar7 == '\0') goto LAB_140b0343e;
        }
        if ((((*(int *)(lVar4 + 0xd4) == 0) || (uVar9 = *(uint *)(lVar4 + 0xd0), (int)uVar9 < 0)) ||
            (DAT_14c9647dc <= (int)uVar9)) ||
           (((plVar23 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)(lVar4 + 0xd4))) ||
            (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 ||
             ((*plVar23 == 0 || (lVar10 = *(longlong *)(*plVar23 + 0x410), lVar10 == 0))))))))
        goto LAB_140b0343e;
        FUN_1448c1924(lVar10,&local_b8);
        uVar2 = DAT_14cb1ae68;
        if ((local_b8 == 0.0) || (*(int *)(lVar4 + 0xac) == 0)) {
LAB_140b0228b:
          bVar25 = false;
        }
        else {
          uVar9 = *(uint *)(lVar4 + 0xa8);
          bVar25 = false;
          if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
            plVar23 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if ((plVar23 != (longlong *)0x0) &&
               ((((int)plVar23[2] == *(int *)(lVar4 + 0xac) &&
                 ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)) && (lVar21 = *plVar23, lVar21 != 0)))
               ) {
              if (DAT_14c9a7d10 == (undefined8 *)0x0) {
                DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                *DAT_14c9a7d10 = 0;
                DAT_14c9a7d10[1] = 0;
                DAT_14c9a7d10[2] = 0;
                DAT_14c9a7d10[3] = 0;
              }
              FUN_14005915a(DAT_14c9a7d10,&local_d8,uVar2,lVar21);
              plVar23 = uStack_d0;
              pcVar6 = local_d8;
              if (local_d8 == (code *)0x0) {
                plVar23 = (longlong *)0x0;
              }
              else {
                if (uStack_d0 == (longlong *)0x0) goto LAB_140b0228b;
                LOCK();
                *(int *)(uStack_d0 + 1) = (int)uStack_d0[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)((longlong)uStack_d0 + 0xc) = *(int *)((longlong)uStack_d0 + 0xc) + 1;
                UNLOCK();
                LOCK();
                plVar15 = uStack_d0 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)*uStack_d0)();
                  LOCK();
                  piVar1 = (int *)((longlong)plVar23 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar23 + 0x10))();
                  }
                }
              }
              plVar15 = uStack_d0;
              if (uStack_d0 != (longlong *)0x0) {
                LOCK();
                plVar11 = uStack_d0 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*uStack_d0)();
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))();
                  }
                }
              }
              if (plVar23 != (longlong *)0x0) {
                iVar22 = (int)plVar23[1];
                do {
                  if (iVar22 == 0) {
                    plVar15 = (longlong *)0x0;
                    break;
                  }
                  LOCK();
                  iVar20 = (int)plVar23[1];
                  bVar25 = iVar22 == iVar20;
                  if (bVar25) {
                    *(int *)(plVar23 + 1) = iVar22 + 1;
                    iVar20 = iVar22;
                  }
                  iVar22 = iVar20;
                  UNLOCK();
                  plVar15 = plVar23;
                } while (!bVar25);
                LOCK();
                piVar1 = (int *)((longlong)plVar23 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                }
                if (plVar15 != (longlong *)0x0) {
                  if (pcVar6 == (code *)0x0) {
                    bVar25 = false;
                  }
                  else {
                    bVar25 = true;
                    if (*(char *)((longlong)local_b8 + 0x1f0) == '\0') {
                      local_128 = plVar15;
                      cVar7 = FUN_14070c9d0(pcVar6 + 0x1d8,*(undefined4 *)(pcVar6 + 0x1d4),
                                            DAT_14c763fd0);
                      if ((cVar7 != '\0') ||
                         (plVar15 = local_128,
                         *(float *)(pcVar6 + 0x660) - _DAT_14c763fd4 <= *(float *)(pcVar6 + 0x664)))
                      {
                        if (*(float *)(pcVar6 + 0x664) < *(float *)(pcVar6 + 0x660) - _DAT_14c763fd4
                           ) {
                          if (*(int *)(lVar4 + 0xac) == 0) {
LAB_140b032a1:
                            uVar27 = 0;
                          }
                          else {
                            uVar9 = *(uint *)(lVar4 + 0xa8);
                            uVar27 = 0;
                            if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
                              puVar17 = (undefined8 *)
                                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                              if ((puVar17 == (undefined8 *)0x0) ||
                                 ((*(int *)(puVar17 + 2) != *(int *)(lVar4 + 0xac) ||
                                  ((*(uint *)(puVar17 + 1) & 0x10200000) != 0))))
                              goto LAB_140b032a1;
                              uVar27 = *puVar17;
                            }
                          }
                          cVar7 = FUN_140b04b50(uVar27);
                          plVar15 = local_128;
                          if (cVar7 != '\0') goto LAB_140b02ec3;
                        }
                        lVar21 = FUN_144860928();
                        lVar10 = FUN_14092c0b8();
                        if ((longlong)*(int *)(lVar4 + 0xf0) == 0) {
                          bVar25 = false;
                          plVar15 = local_128;
                        }
                        else {
                          fVar29 = *(float *)(lVar10 + 0x38);
                          lVar10 = *(longlong *)(lVar4 + 0xe8);
                          local_114 = DAT_14c9647dc;
                          local_100 = DAT_14c9647c8;
                          uVar2 = *(undefined4 *)(lVar21 + 0xeb8);
                          lVar21 = (longlong)*(int *)(lVar4 + 0xf0) << 3;
                          lVar12 = 0;
                          local_110 = lVar10;
                          local_108 = lVar21;
                          do {
                            iVar22 = *(int *)(lVar10 + 4 + lVar12);
                            if (((((iVar22 != 0) &&
                                  (uVar9 = *(uint *)(lVar10 + lVar12), -1 < (int)uVar9)) &&
                                 ((int)uVar9 < local_114)) &&
                                ((plVar23 = (longlong *)
                                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                            *(longlong *)
                                             (local_100 + (ulonglong)(uVar9 >> 0x10) * 8)),
                                 plVar23 != (longlong *)0x0 && ((int)plVar23[2] == iVar22)))) &&
                               (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 && (*plVar23 != 0)))) {
                              lVar21 = *(longlong *)(*plVar23 + 0x1c8);
                              if (lVar21 == 0) {
                                local_c8 = DAT_14c8464f0;
                                local_d8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,
                                                            (undefined4)DAT_14c8464e0);
                                uStack_d0 = (longlong *)
                                            CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                              }
                              else {
                                local_d8 = *(code **)(lVar21 + 0x260);
                                uStack_d0 = *(longlong **)(lVar21 + 0x268);
                                local_c8 = *(double *)(lVar21 + 0x270);
                              }
                              dVar5 = (double)FUN_140b0468a(pcVar6,&local_d8);
                              plVar15 = local_128;
                              if (((float)dVar5 <= fVar29 * fVar29) ||
                                 (cVar7 = FUN_140b048b0(pcVar6,&local_d8,uVar2), plVar15 = local_128
                                 , lVar21 = local_108, lVar10 = local_110, cVar7 != '\0'))
                              goto LAB_140b02ec3;
                            }
                            lVar12 = lVar12 + 8;
                          } while (lVar21 != lVar12);
                          bVar25 = false;
                          plVar15 = local_128;
                        }
                      }
                    }
                  }
LAB_140b02ec3:
                  LOCK();
                  plVar23 = plVar15 + 1;
                  *(int *)plVar23 = (int)*plVar23 + -1;
                  UNLOCK();
                  if ((int)*plVar23 == 0) {
                    (**(code **)*plVar15)();
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                  goto LAB_140b0228e;
                }
              }
            }
            goto LAB_140b0228b;
          }
        }
LAB_140b0228e:
        plVar23 = local_b0;
        lVar21 = 0x40;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_b0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        if (!bVar25) goto LAB_140b0343e;
        if ((((*(int *)(lVar4 + 0x130) == 0) || (uVar9 = *(uint *)(lVar4 + 300), (int)uVar9 < 0)) ||
            (DAT_14c9647dc <= (int)uVar9)) ||
           (((lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar21 == 0 ||
             (*(int *)(lVar21 + 0x10) != *(int *)(lVar4 + 0x130))) ||
            ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))) {
          lVar21 = 0x70;
          if ((((*(longlong *)(lVar4 + 0xc0) == 0) || (*(int *)(lVar4 + 0xac) == 0)) ||
              (((uVar9 = *(uint *)(lVar4 + 0xa8), (int)uVar9 < 0 ||
                (((DAT_14c9647dc <= (int)uVar9 ||
                  (plVar23 = (longlong *)
                             ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                  plVar23 == (longlong *)0x0)) || ((int)plVar23[2] != *(int *)(lVar4 + 0xac))))) ||
               (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (lVar10 = *plVar23, lVar10 == 0))))))
             || ((*(byte *)(lVar10 + 0x155) & 0x20) != 0)) goto LAB_140b0343e;
          if (*(float *)(lVar10 + 0x930) <= *(float *)(lVar4 + 0x1a0) &&
              *(float *)(lVar4 + 0x1a0) != *(float *)(lVar10 + 0x930)) goto LAB_140b0230d;
          uVar9 = *(uint *)(lVar4 + 0x1b8);
          if ((int)uVar9 < 0) {
            plVar23 = (longlong *)FUN_1457700dc(*(longlong *)(lVar4 + 0xc0),lVar10);
            if ((plVar23 != (longlong *)0x0) && ((longlong)(int)plVar23[1] != 0)) {
              FUN_145771b0f(*plVar23,*plVar23 + (longlong)(int)plVar23[1] * 8,&local_d8);
              uVar9 = *(uint *)(plVar23 + 1);
              if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(uVar9);
              }
              plVar15 = (longlong *)(lVar4 + 0x1a8);
              if (*(int *)(lVar4 + 0x1b4) < (int)uVar9) {
                FUN_14577007c(plVar15,uVar9);
                uVar9 = *(uint *)(plVar23 + 1);
              }
              if (uVar9 != 0) {
                iVar22 = *(int *)(lVar4 + 0x1b0);
                *(uint *)(lVar4 + 0x1b0) = iVar22 + uVar9;
                if ((uint)(*(int *)(lVar4 + 0x1b4) - iVar22) < uVar9) {
                  FUN_1418dc2fe(plVar15,iVar22);
                }
                memcpy((void *)((longlong)iVar22 * 8 + *plVar15),(void *)*plVar23,
                       (longlong)(int)uVar9 << 3);
              }
              *(undefined4 *)(lVar4 + 0x1b8) = 0;
              uVar9 = 0;
              goto LAB_140b02d26;
            }
            uVar9 = *(uint *)(lVar4 + 0x1b8);
            if (-1 < (int)uVar9) goto LAB_140b02d26;
          }
          else {
LAB_140b02d26:
            iVar22 = *(int *)(lVar4 + 0x1b0);
            if ((int)uVar9 < iVar22) {
              uVar16 = (ulonglong)uVar9;
              uVar9 = uVar9 + 1;
              *(uint *)(lVar4 + 0x1b8) = uVar9;
              if (*(longlong *)(*(longlong *)(lVar4 + 0x1a8) + uVar16 * 8) != 0) {
                cVar7 = FUN_140b04bf4(lVar4,lVar10);
                if (cVar7 != '\0') {
                  *(undefined4 *)(lVar4 + 0x1b0) = 0;
                  if (*(int *)(lVar4 + 0x1b4) < 0) {
                    FUN_14577007c(lVar4 + 0x1a8,0);
                  }
                  *(undefined4 *)(lVar4 + 0x1b8) = 0xffffffff;
                  if (*(int *)(lVar4 + 0xf0) < 1) {
LAB_140b0328f:
                    uVar27 = 0;
                  }
                  else {
                    uVar9 = ((uint *)*local_138)[1];
                    if (uVar9 == 0) goto LAB_140b0328f;
                    uVar3 = *(uint *)*local_138;
                    uVar27 = 0;
                    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
                      puVar17 = (undefined8 *)
                                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                      if ((puVar17 == (undefined8 *)0x0) ||
                         ((*(uint *)(puVar17 + 2) != uVar9 ||
                          ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_140b0328f;
                      uVar27 = *puVar17;
                    }
                  }
                  FUN_14577036a(lVar4,uVar27,0);
                  goto LAB_140b0230d;
                }
                uVar9 = *(uint *)(lVar4 + 0x1b8);
                if ((int)uVar9 < 0) goto LAB_140b02d79;
                iVar22 = *(int *)(lVar4 + 0x1b0);
              }
            }
            if ((int)uVar9 < iVar22) goto LAB_140b0230d;
          }
LAB_140b02d79:
          *(undefined4 *)(lVar4 + 0x1b0) = 0;
          if (*(int *)(lVar4 + 0x1b4) < 0) {
            FUN_14577007c(lVar4 + 0x1a8,0);
          }
          *(undefined4 *)(lVar4 + 0x1b8) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0x1a0) = 0x7f7fffff;
        }
LAB_140b0230d:
        if (((((*(int *)(lVar4 + 0xcc) != 0) && (uVar9 = *(uint *)(lVar4 + 200), -1 < (int)uVar9))
             && ((int)uVar9 < DAT_14c9647dc)) &&
            ((plVar23 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar23 != (longlong *)0x0 && ((int)plVar23[2] == *(int *)(lVar4 + 0xcc))))) &&
           (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 &&
            ((lVar21 = *plVar23, lVar21 != 0 &&
             (lVar10 = (**(code **)(*(longlong *)(lVar21 + 0x390) + 0x10))(lVar21 + 0x390),
             lVar10 != 0)))))) {
          cVar7 = *(char *)(lVar4 + 0x19c);
          if (((cVar7 == '\0') &&
              (((*(int *)(lVar4 + 0xd4) != 0 && (uVar9 = *(uint *)(lVar4 + 0xd0), -1 < (int)uVar9))
               && ((int)uVar9 < DAT_14c9647dc)))) &&
             ((((plVar23 = (longlong *)
                           ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                plVar23 != (longlong *)0x0 && ((int)plVar23[2] == *(int *)(lVar4 + 0xd4))) &&
               (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 &&
                ((*plVar23 != 0 &&
                 (plVar23 = *(longlong **)(*plVar23 + 0x410), plVar23 != (longlong *)0x0)))))) &&
              (cVar8 = (**(code **)(*plVar23 + 0xad0))(), cVar8 != '\0')))) {
            cVar7 = '\x01';
          }
          lVar12 = *(longlong *)(lVar21 + 0x1c8);
          if (lVar12 == 0) {
            local_e8 = DAT_14c8464f0;
            local_f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_f8 = *(double *)(lVar12 + 0x260);
            uStack_f0 = *(double *)(lVar12 + 0x268);
            local_e8 = *(double *)(lVar12 + 0x270);
          }
          fVar29 = *(float *)(lVar10 + 0x638);
          if ((((cVar7 == '\0') || (*(longlong *)(lVar4 + 0x138) == 0)) ||
              (plVar23 = *(longlong **)(lVar4 + 0x140), plVar23 == (longlong *)0x0)) ||
             (((int)plVar23[1] < 1 || (*(int *)(lVar4 + 0xf0) < 1)))) {
LAB_140b030ad:
            bVar25 = false;
LAB_140b030b5:
            lVar12 = *(longlong *)(lVar4 + 0xc0);
            if (lVar12 == 0) {
              if (!bVar25) goto LAB_140b02771;
            }
            else {
              local_e8 = *(double *)(lVar12 + 0x40);
              local_f8 = *(double *)(lVar12 + 0x30);
              uStack_f0 = *(double *)(lVar12 + 0x38);
              fVar29 = *(float *)(lVar12 + 0x48);
            }
          }
          else {
            uVar9 = ((uint *)*local_138)[1];
            if (((uVar9 == 0) ||
                ((uVar3 = *(uint *)*local_138, (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)))) ||
               ((plVar15 = (longlong *)
                           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                plVar15 == (longlong *)0x0 ||
                (((*(uint *)(plVar15 + 2) != uVar9 || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))
                 || (lVar12 = *plVar15, lVar12 == 0)))))) goto LAB_140b030ad;
            iVar22 = (int)plVar23[1];
            do {
              if (iVar22 == 0) goto LAB_140b030ad;
              LOCK();
              iVar20 = (int)plVar23[1];
              bVar25 = iVar22 == iVar20;
              if (bVar25) {
                *(int *)(plVar23 + 1) = iVar22 + 1;
                iVar20 = iVar22;
              }
              iVar22 = iVar20;
              UNLOCK();
            } while (!bVar25);
            lVar24 = *(longlong *)(lVar4 + 0x138);
            if (lVar24 == 0) {
LAB_140b035e6:
              bVar25 = false;
            }
            else {
              iVar22 = *(int *)(lVar4 + 0x198);
              if ((((longlong)iVar22 < 0) || (*(int *)(lVar24 + 0xb0) <= iVar22)) ||
                 (lVar24 = (longlong)iVar22 * 0x78 + *(longlong *)(lVar24 + 0xa8), lVar24 == 0))
              goto LAB_140b035e6;
              lVar12 = *(longlong *)(lVar12 + 0x1c8);
              if (lVar12 == 0) {
                local_c8 = DAT_14c8464f0;
                local_d8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_d0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_d8 = *(code **)(lVar12 + 0x260);
                uStack_d0 = *(longlong **)(lVar12 + 0x268);
                local_c8 = *(double *)(lVar12 + 0x270);
              }
              local_dc = 0x7f7fffff;
              uVar27 = FUN_14040e062(lVar24 + 0x30,&local_d8,&local_dc,&local_b8);
              FUN_140703ce0(lVar24 + 0x30,&local_f8,uVar27,*(undefined8 *)(lVar24 + 0x58));
              lVar12 = *(longlong *)(lVar4 + 0x98);
              if (lVar12 == 0) {
                uVar13 = FUN_141518b52();
                lVar12 = FUN_14477b664(uVar13);
                *(longlong *)(lVar4 + 0x98) = lVar12;
              }
              lVar14 = *(longlong *)(lVar4 + 0xa0);
              if (lVar14 == 0) {
                if ((lVar12 != 0) && (local_120 = (longlong *)(lVar4 + 0x90), *local_120 != 0)) {
                  plVar15 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar15 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
                    *(undefined8 *)(lVar4 + 0xa0) = 0;
                  }
                  else {
                    uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                    lVar14 = FUN_144aff482(uVar13,local_120);
                    *(longlong *)(lVar4 + 0xa0) = lVar14;
                    if (lVar14 != 0) goto LAB_140b02574;
                  }
                }
                bVar25 = true;
                if (*(float *)(lVar24 + 0x28) <= 0.0) {
                  fVar29 = 1.0;
                }
                else {
                  fVar28 = (float)uVar27 / *(float *)(lVar24 + 0x28);
                  if (1.0 <= fVar28) {
                    fVar28 = 1.0;
                  }
                  if (fVar28 <= 0.0) {
                    fVar28 = 0.0;
                  }
                  fVar29 = *(float *)(*(longlong *)(lVar24 + 0x48) + 0x30);
                  fVar29 = (*(float *)(*(longlong *)(lVar24 + 0x58) + 0x30) - fVar29) * fVar28 +
                           fVar29;
                }
              }
              else {
LAB_140b02574:
                fVar29 = *(float *)(lVar14 + 0xa8);
                bVar25 = true;
              }
            }
            LOCK();
            plVar15 = plVar23 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
            if (!bVar25) goto LAB_140b030b5;
          }
          plVar23 = *(longlong **)(lVar21 + 0x1c8);
          if (plVar23 != (longlong *)0x0) {
            local_a8 = local_e8 - (double)plVar23[0x4e];
            local_b0 = (longlong *)(uStack_f0 - (double)plVar23[0x4d]);
            local_b8 = local_f8 - (double)plVar23[0x4c];
            local_d8 = (code *)plVar23[0x48];
            uStack_d0 = (longlong *)plVar23[0x49];
            local_c8 = (double)plVar23[0x4a];
            uStack_c0 = (undefined4)plVar23[0x4b];
            uStack_bc = *(undefined4 *)((longlong)plVar23 + 0x25c);
            local_178 = local_178 & 0xffffff00;
            local_180 = 0;
            local_188 = 0;
            (**(code **)(*plVar23 + 0x510))(plVar23,&local_b8,&local_d8,0);
          }
          *(float *)(lVar10 + 0x638) = fVar29;
          if ((((((*(int *)(lVar4 + 0xd4) != 0) &&
                 (uVar9 = *(uint *)(lVar4 + 0xd0), -1 < (int)uVar9)) && ((int)uVar9 < DAT_14c9647dc)
                ) && ((plVar23 = (longlong *)
                                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                      plVar23 != (longlong *)0x0 && ((int)plVar23[2] == *(int *)(lVar4 + 0xd4)))))
              && ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)) &&
             ((*plVar23 != 0 &&
              (plVar23 = *(longlong **)(*plVar23 + 0x1c8), plVar23 != (longlong *)0x0)))) {
            local_a8 = (local_e8 + 500.0) - (double)plVar23[0x4e];
            local_b0 = (longlong *)((uStack_f0 + 0.0) - (double)plVar23[0x4d]);
            local_b8 = (local_f8 + 0.0) - (double)plVar23[0x4c];
            local_d8 = (code *)plVar23[0x48];
            uStack_d0 = (longlong *)plVar23[0x49];
            local_c8 = (double)plVar23[0x4a];
            uStack_c0 = (undefined4)plVar23[0x4b];
            uStack_bc = *(undefined4 *)((longlong)plVar23 + 0x25c);
            local_178 = local_178 & 0xffffff00;
            local_180 = 0;
            local_188 = 0;
            (**(code **)(*plVar23 + 0x510))(plVar23,&local_b8,&local_d8);
          }
        }
LAB_140b02771:
        plVar23 = local_130;
        if (0 < *(int *)(lVar4 + 0xf0)) {
          uVar9 = ((uint *)*local_138)[1];
          if (((uVar9 != 0) && (uVar3 = *(uint *)*local_138, -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) {
            plVar15 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar15 != (longlong *)0x0) && (*(uint *)(plVar15 + 2) == uVar9)) &&
               (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
                (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))) {
              lVar21 = *(longlong *)(lVar4 + 0x98);
              if (lVar21 == 0) {
                uVar27 = FUN_141518b52();
                lVar21 = FUN_14477b664(uVar27);
                *(longlong *)(lVar4 + 0x98) = lVar21;
              }
              lVar10 = *(longlong *)(lVar4 + 0xa0);
              if (lVar10 == 0) {
                plVar23 = local_130;
                if ((lVar21 != 0) && (*(longlong *)(lVar4 + 0x90) != 0)) {
                  plVar23 = *(longlong **)(lVar21 + 0xb8);
                  if ((plVar23 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar7 == '\0')) {
                    *(undefined8 *)(lVar4 + 0xa0) = 0;
                    plVar23 = local_130;
                  }
                  else {
                    uVar27 = (**(code **)(*plVar23 + 0x110))(plVar23);
                    lVar10 = FUN_144aff482(uVar27,(longlong *)(lVar4 + 0x90));
                    *(longlong *)(lVar4 + 0xa0) = lVar10;
                    plVar23 = local_130;
                    if (lVar10 != 0) goto LAB_140b0280e;
                  }
                }
              }
              else {
LAB_140b0280e:
                cVar7 = ((*(byte *)(lVar10 + 0x58) & 0xfe) == 2) + '\x01';
                if (*(char *)(lVar10 + 0x59) != '\0') {
                  cVar7 = *(char *)(lVar10 + 0x59);
                }
                local_138 = (longlong *)FUN_140b041a5(*(byte *)(lVar10 + 0x58),cVar7);
                if (*local_138 != 0) {
                  puVar18 = *(undefined4 **)(lVar10 + 8);
                  if (puVar18 == (undefined4 *)0x0) {
                    puVar18 = &DAT_14c9485f0;
                  }
                  local_120 = plVar15;
                  if (DAT_14c947fe0 == 0) {
                    lVar21 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar21);
                    DAT_14c947fe0 = lVar21;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_b8,puVar18);
                  iVar22 = *(int *)(lVar4 + 0xf0);
                  plVar15 = local_120;
                  if ((longlong)iVar22 != 0) {
                    lVar21 = *(longlong *)(lVar4 + 0xe8);
                    lVar10 = 0;
                    do {
                      iVar20 = *(int *)(lVar21 + 4 + lVar10);
                      if ((((iVar20 != 0) && (uVar9 = *(uint *)(lVar21 + lVar10), -1 < (int)uVar9))
                          && ((int)uVar9 < DAT_14c9647dc)) &&
                         (((plVar23 = (longlong *)
                                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8))
                           , plVar23 != (longlong *)0x0 && ((int)plVar23[2] == iVar20)) &&
                          (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 &&
                           (plVar23 = (longlong *)*plVar23, plVar23 != (longlong *)0x0)))))) {
                        if (DAT_14cb1c498 == 0) {
                          local_d8 = FUN_1449e2820;
                          local_140 = FUN_14081d0ea;
                          local_148 = FUN_1427b09ee;
                          local_150 = &local_d8;
                          local_158 = &LAB_147e36893;
                          local_160 = FUN_146420564;
                          local_168 = L"Engine";
                          local_170 = 0;
                          local_178 = 0x10004001;
                          local_180 = 8;
                          local_188 = CONCAT44(local_188._4_4_,0x28);
                          FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498);
                        }
                        plVar15 = (longlong *)(**(code **)(*plVar23 + 0x288))(plVar23,DAT_14cb1c498)
                        ;
                        if (plVar15 != (longlong *)0x0) {
                          if (DAT_14cb1c498 == 0) {
                            local_d8 = FUN_1449e2820;
                            local_140 = FUN_14081d0ea;
                            local_148 = FUN_1427b09ee;
                            local_150 = &local_d8;
                            local_158 = &LAB_147e36893;
                            local_160 = FUN_146420564;
                            local_168 = L"Engine";
                            local_170 = 0;
                            local_178 = 0x10004001;
                            local_180 = 8;
                            local_188 = CONCAT44(local_188._4_4_,0x28);
                            FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498);
                          }
                          plVar11 = (longlong *)FUN_144718840(plVar15,DAT_14cb1c498);
                          if (((plVar15 != plVar11) && (plVar11 != (longlong *)0x0)) &&
                             (lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11), lVar12 != 0)) {
                            lVar24 = FUN_140519fd4(plVar23);
                            if ((lVar24 == 0) || (cVar7 = FUN_140b038fa(lVar24), cVar7 == '\0')) {
                              FUN_140b043fa(lVar12,&local_b8,local_138);
                            }
                            else {
                              if (0 < *(int *)(lVar12 + 0x230)) {
                                local_d8 = (code *)&local_b8;
                                FUN_140b042ce(lVar12 + 0x1a8,&local_d8);
                              }
                              if (*(char *)(lVar12 + 0x118) == '\0') {
                                uVar27 = FUN_144836af6(lVar12);
                                FUN_1448367ba(lVar12,uVar27);
                              }
                              if (((*(char *)(lVar12 + 0x160) == '\x01') &&
                                  (4 < DAT_14c872be0 - *(longlong *)(lVar12 + 0x158))) &&
                                 ((*(longlong *)(lVar12 + 0x150) + 4U <= DAT_14c872be0 ||
                                  (*(char *)(lVar12 + 0x148) == '\0')))) {
                                FUN_14012b994(lVar12);
                              }
                            }
                          }
                        }
                      }
                      lVar10 = lVar10 + 8;
                      plVar15 = local_120;
                    } while ((longlong)iVar22 * 8 != lVar10);
                  }
                }
                uVar27 = FUN_140b040c0();
                plVar23 = (longlong *)FUN_144718840(plVar15,uVar27);
                if (plVar23 == (longlong *)0x0) {
                  bVar25 = false;
                }
                else {
                  lVar21 = (**(code **)(*plVar23 + 0x20))(plVar23);
                  if (lVar21 == 0) {
                    bVar25 = false;
                  }
                  else {
                    bVar25 = *(char *)(lVar21 + 0x3c0) == '\x01';
                  }
                }
                plVar23 = local_130;
                if ((bool)*(char *)(lVar4 + 0x19c) != bVar25) {
                  *(bool *)(lVar4 + 0x19c) = bVar25;
                  FUN_140b05db8(lVar4);
                }
              }
            }
          }
        }
      }
      else {
LAB_140b03456:
        FUN_140b04202(plVar15[(ulonglong)uVar19 * 2]);
        FUN_14576fff8(plVar23,uVar19);
        FUN_14576ffba(plVar23);
        uVar19 = uVar19 - 1;
      }
LAB_140b01de1:
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < *(int *)(param_1 + 0x40));
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b038fa FUN_140b038fa body=117 status=ok
// SIG undefined FUN_140b038fa(void)

undefined8 FUN_140b038fa(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  
  if ((((*(int *)(param_1 + 0xc0) != 0) && (0 < *(int *)(param_1 + 0x80))) &&
      (**(int **)(param_1 + 0x78) != 0x7fffffff)) &&
     (uVar1 = *(ulonglong *)(*(int **)(param_1 + 0x78) + 1), uVar1 >> 0x20 != 0)) {
    uVar3 = (uint)uVar1;
    if ((int)uVar3 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar3) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8)));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == (int)(uVar1 >> 0x20))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      return CONCAT71((int7)((ulonglong)plVar2 >> 8),*plVar2 != 0);
    }
  }
  return 0;
}



// FUNCTION 140b03970 FUN_140b03970 body=267 status=ok
// SIG undefined FUN_140b03970(void)

byte FUN_140b03970(undefined8 param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb56270 == 0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148630fef;
    local_40 = FUN_1464b6a91;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar2 = (longlong *)FUN_144718840(param_1,DAT_14cb56270);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
    if (lVar3 != 0) {
      bVar1 = *(byte *)(lVar3 + 0x470) >> 7;
      goto LAB_140b039be;
    }
  }
  bVar1 = 0;
LAB_140b039be:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b03a7c FUN_140b03a7c body=185 status=ok
// SIG undefined FUN_140b03a7c(void)

ulonglong FUN_140b03a7c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong unaff_RBP;
  bool bVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x140);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140b03aee;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x138);
    if (lVar4 != 0) {
      uVar7 = FUN_140b03b36(lVar4,param_2,param_3);
      unaff_RBP = (ulonglong)uVar7;
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
    if (lVar4 != 0) {
      return unaff_RBP & 0xffffff01;
    }
  }
LAB_140b03aee:
  uVar8 = FUN_14479d2ce(param_1 + 0xa8);
  uVar9 = FUN_148ce0208(uVar8,param_2,param_3);
  return uVar9;
}



// FUNCTION 140b03b36 FUN_140b03b36 body=363 status=ok
// SIG undefined FUN_140b03b36(void)

undefined8 FUN_140b03b36(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = *(int *)(param_1 + 0xf0);
  if ((longlong)iVar3 != 0) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    lVar6 = *(longlong *)(param_1 + 0xe8);
    lVar9 = 0;
    do {
      iVar4 = *(int *)(lVar6 + 4 + lVar9);
      if (((iVar4 != 0) && (uVar5 = *(uint *)(lVar6 + lVar9), -1 < (int)uVar5)) &&
         ((int)uVar5 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == iVar4)) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
          FUN_140b03ca2(*plVar8,&local_98);
          dVar11 = local_98;
          if (dVar1 < local_98) {
LAB_140b03c18:
            dVar10 = (dVar1 - dVar11) * (dVar1 - dVar11);
          }
          else {
            dVar10 = 0.0;
            dVar11 = local_80;
            if (local_80 < dVar1) goto LAB_140b03c18;
          }
          dVar11 = local_90;
          if ((dVar2 < local_90) || (dVar11 = local_78, local_78 < dVar2)) {
            dVar10 = dVar10 + (dVar2 - dVar11) * (dVar2 - dVar11);
          }
          if ((float)dVar10 <= param_3 * param_3) {
            uVar7 = 1;
            goto LAB_140b03c6b;
          }
        }
      }
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar9);
  }
  uVar7 = 0;
LAB_140b03c6b:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b03ca2 FUN_140b03ca2 body=1053 status=ok
// SIG undefined FUN_140b03ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140b03ca2(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_128 [32];
  double local_108;
  longlong lStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  char local_c8;
  undefined7 uStack_c7;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar3 = (double)param_1[0x48];
  dVar21 = (double)param_1[0x49];
  dVar17 = (double)param_1[0x4a];
  dVar2 = (double)param_1[0x4b];
  dVar1 = (double)param_1[0x4c];
  dVar12 = (double)param_1[0x4d];
  dVar8 = (double)param_1[0x4e];
  lVar9 = param_1[0x4f];
  (**(code **)(*param_1 + 0xa00))(param_1,&local_f8);
  if (local_c8 == '\0') {
    dStack_d0 = dVar8 + 1.0;
    dStack_d8 = dVar12 + 1.0;
    dStack_e0 = dVar1 + 1.0;
    local_e8 = dVar8 + -1.0;
    dStack_f0 = dVar12 + -1.0;
    local_f8 = dVar1 + -1.0;
    local_c8 = '\x01';
    param_2[6] = (double)CONCAT71(uStack_c7,1);
    param_2[2] = local_e8;
    param_2[3] = dStack_e0;
    *param_2 = local_f8;
    param_2[1] = dStack_f0;
    param_2[4] = dStack_d8;
    param_2[5] = dStack_d0;
  }
  else {
    dVar11 = dVar17 * dVar17 + dVar3 * dVar3;
    dVar15 = dVar2 * dVar2 + dVar21 * dVar21;
    auVar13._0_8_ = dVar11 + dVar15;
    auVar13._8_8_ = dVar11 + dVar15;
    uVar10 = -(ulonglong)(1e-08 <= auVar13._8_8_);
    auVar14 = sqrtpd(auVar13,auVar13);
    auVar18 = divpd(_DAT_149934d80,auVar14);
    auVar19._0_8_ = auVar18._0_8_ * dVar17;
    auVar19._8_8_ = auVar18._8_8_ * dVar2;
    auVar14._8_4_ = (int)uVar10;
    auVar14._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
    auVar14._12_4_ = (int)(uVar10 >> 0x20);
    auVar14 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar14);
    dVar17 = (double)((ulonglong)(dVar3 * auVar18._0_8_) & -(ulonglong)(1e-08 <= auVar13._0_8_));
    dVar2 = (double)((ulonglong)(dVar21 * auVar18._8_8_) & uVar10);
    dVar21 = auVar14._0_8_;
    dVar23 = auVar14._8_8_;
    dVar3 = dVar21 + dVar21;
    dVar16 = dVar17 + dVar17;
    dVar20 = dVar2 + dVar2;
    auVar26._0_8_ = dVar20 * dVar23 + dVar17 * dVar3;
    auVar26._8_8_ = dVar16 * dVar23 + dVar17 * dVar16;
    auVar27._0_8_ = dVar20 * dVar17 - dVar23 * dVar3;
    auVar27._8_8_ = dVar3 * dVar2 - dVar23 * dVar16;
    auVar14 = blendpd(auVar26,auVar27,2);
    dVar25 = (double)DAT_149934d80 - (dVar3 * dVar21 + dVar20 * dVar2);
    auVar18._8_8_ = DAT_149934d80._8_8_ - (dVar3 * dVar21 + dVar16 * dVar17);
    auVar18._0_8_ = dVar25;
    auVar18 = blendpd(auVar27,auVar18,2);
    dVar22 = dVar23 * dVar3 + dVar20 * dVar17;
    dVar24 = dVar23 * dVar16 + dVar3 * dVar2;
    dVar15 = (local_f8 + dStack_e0) * 0.5;
    dVar4 = (dStack_f0 + dStack_d8) * 0.5;
    dVar11 = (local_e8 + dStack_d0) * 0.5;
    dVar6 = (dStack_e0 - local_f8) * 0.5;
    dVar7 = (dStack_d8 - dStack_f0) * 0.5;
    dVar21 = (dStack_d0 - local_e8) * 0.5;
    dVar1 = dVar1 + dVar11 * auVar14._0_8_ + auVar18._0_8_ * dVar4 + dVar15 * dVar25;
    dVar12 = dVar12 + dVar11 * auVar14._8_8_ + auVar18._8_8_ * dVar4 + dVar15 * dVar22;
    dVar3 = dVar17 * dVar3 - dVar20 * dVar23;
    dVar23 = ABS(dVar21 * auVar14._0_8_) + ABS(auVar18._0_8_ * dVar7) + ABS(dVar6 * dVar25);
    dVar22 = ABS(dVar21 * auVar14._8_8_) + ABS(auVar18._8_8_ * dVar7) + ABS(dVar6 * dVar22);
    dVar25 = dVar22 + dVar12;
    *param_2 = dVar1 - dVar23;
    param_2[1] = dVar12 - dVar22;
    dVar12 = 1.0 - (dVar16 * dVar17 + dVar20 * dVar2);
    dVar17 = dVar8 + dVar11 * dVar12 + dVar4 * dVar24 + dVar15 * dVar3;
    dVar12 = ABS(dVar12 * dVar21) + ABS(dVar24 * dVar7) + ABS(dVar3 * dVar6);
    param_2[2] = dVar17 - dVar12;
    auVar5._8_4_ = SUB84(dVar25,0);
    auVar5._0_8_ = dVar23 + dVar1;
    auVar5._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 3) = auVar5;
    param_2[5] = dVar12 + dVar17;
    *(undefined1 *)(param_2 + 6) = 1;
    local_108 = dVar8;
    lStack_100 = lVar9;
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b040c0 FUN_140b040c0 body=228 status=ok
// SIG undefined FUN_140b040c0(void)

longlong FUN_140b040c0(void)

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
  if (DAT_14cb21ac0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f22915;
    local_40 = FUN_14643547d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxBrainOwner",&DAT_14cb21ac0,&DAT_147f22914);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb21ac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b041a5 FUN_140b041a5 body=92 status=ok
// SIG undefined FUN_140b041a5(void)

undefined8 * FUN_140b041a5(char param_1,byte param_2)

{
  undefined **ppuVar1;
  
  if (param_1 == '\0') {
    if (3 < param_2) {
      return &DAT_14caa8578;
    }
    ppuVar1 = &PTR_DAT_14b3ecfb8;
  }
  else if (param_1 == '\x01') {
    if (3 < param_2) {
      return &DAT_14caa8578;
    }
    ppuVar1 = &PTR_DAT_14b3ecfd8;
  }
  else if (param_1 == '\x02') {
    if (3 < param_2) {
      return &DAT_14caa8578;
    }
    ppuVar1 = &PTR_DAT_14b3ecff8;
  }
  else {
    if (param_1 != '\x03') {
      return &DAT_14caa8578;
    }
    if (3 < param_2) {
      return &DAT_14caa8578;
    }
    ppuVar1 = &PTR_DAT_14b3ed018;
  }
  return (undefined8 *)ppuVar1[(char)param_2];
}



// FUNCTION 140b04202 FUN_140b04202 body=204 status=ok
// SIG undefined FUN_140b04202(void)

void FUN_140b04202(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1411cdc38(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x100);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
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
  FUN_1458da54c(param_1);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_1412a753c(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  if (*(int *)(param_1 + 0xe4) < 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_146620cca(param_1 + 0xd8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  return;
}



// FUNCTION 140b042ce FUN_140b042ce body=300 status=ok
// SIG undefined FUN_140b042ce(void)

int FUN_140b042ce(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  
  iVar7 = *(int *)(param_1 + 0x88);
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar12 = param_1;
    }
    iVar13 = 0;
    bVar11 = *(longlong *)(lVar12 + 0x18) == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar6 = iVar3 + 1;
      if (iVar3 + 1 < iVar7) {
        iVar6 = iVar7;
      }
      lVar2 = lVar10 * 0x20;
      plVar9 = (longlong *)(lVar12 + 0x38 + lVar2);
      iVar5 = iVar3;
      do {
        lVar10 = lVar10 + 1;
        iVar4 = iVar6;
        if (lVar8 <= lVar10) break;
        lVar1 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 4;
        iVar4 = iVar5;
      } while (bVar11 == (lVar1 == *(longlong *)*param_2));
      iVar6 = iVar4 - iVar3;
      if (bVar11 == false) {
        if (iVar13 != iVar3) {
          memmove((void *)((longlong)iVar13 * 0x20 + lVar12),(void *)(lVar2 + lVar12),
                  (longlong)iVar6 << 5);
        }
        iVar13 = iVar13 + iVar6;
      }
      else {
        FUN_140b3a311(lVar2 + lVar12,iVar6);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar3 = iVar4;
    } while (lVar10 < lVar8);
    *(int *)(param_1 + 0x88) = iVar13;
    iVar7 = iVar7 - iVar13;
  }
  return iVar7;
}



// FUNCTION 140b043fa FUN_140b043fa body=655 status=ok
// SIG undefined FUN_140b043fa(void)

void FUN_140b043fa(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar6 = *param_3;
    uVar5 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar11 = (uint)lVar6 & 0xffff;
    lVar12 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar12 = *(longlong *)(param_1 + 0xf0);
    }
    iVar9 = *(int *)(lVar12 + (ulonglong)
                              (*(int *)(param_1 + 0xf8) - 1U &
                              (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 0x28);
        if (*plVar4 == lVar6) {
          if (((plVar4 != (longlong *)0x0) && (plVar4 != (longlong *)&DAT_fffffffffffffff8)) &&
             (lVar6 = FUN_14058d91e(), lVar6 != 0)) {
            FUN_140844312(&local_40,param_1,lVar6);
            puVar3 = (undefined8 *)(param_1 + 0x1a8);
            puVar8 = *(undefined8 **)(param_1 + 0x228);
            puVar10 = puVar8;
            if (puVar8 == (undefined8 *)0x0) {
              puVar10 = puVar3;
            }
            iVar9 = *(int *)(param_1 + 0x230);
            lVar6 = (longlong)iVar9;
            if (lVar6 == 0) goto LAB_140b0460c;
            lVar12 = lVar6 << 5;
            goto LAB_140b0450c;
          }
          break;
        }
        iVar9 = (int)plVar4[4];
      } while (iVar9 != -1);
    }
  }
  goto LAB_140b0458a;
  while( true ) {
    puVar10 = puVar10 + 4;
    lVar12 = lVar12 + -0x20;
    if (lVar12 == 0) break;
LAB_140b0450c:
    if (puVar10[3] == *param_2) {
      if (puVar10 != (undefined8 *)0x0) goto LAB_140b0451f;
      break;
    }
  }
LAB_140b0460c:
  *(uint *)(param_1 + 0x230) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x234) < iVar9 + 1U) {
    FUN_147e437d0(puVar3,iVar9);
    puVar8 = *(undefined8 **)(param_1 + 0x228);
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = puVar3;
  }
  puVar8[lVar6 * 4 + 2] = 0;
  (puVar8 + lVar6 * 4 + 2)[1] = 0;
  puVar8[lVar6 * 4] = 0;
  (puVar8 + lVar6 * 4)[1] = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x228);
  if (*(undefined8 **)(param_1 + 0x228) == (undefined8 *)0x0) {
    puVar8 = puVar3;
  }
  puVar10 = puVar8 + lVar6 * 4;
  puVar8[lVar6 * 4 + 3] = *param_2;
LAB_140b0451f:
  *puVar10 = local_40;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)puVar10[2];
  puVar10[1] = local_38;
  puVar10[2] = local_30;
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (*(char *)(param_1 + 0x118) == '\0') {
    uVar7 = FUN_144836af6(param_1);
    FUN_1448367ba(param_1,uVar7);
  }
  if (((*(char *)(param_1 + 0x160) == '\x01') &&
      (4 < DAT_14c872be0 - *(longlong *)(param_1 + 0x158))) &&
     ((*(longlong *)(param_1 + 0x150) + 4U <= DAT_14c872be0 || (*(char *)(param_1 + 0x148) == '\0'))
     )) {
    FUN_14012b994(param_1);
  }
LAB_140b0458a:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b0468a FUN_140b0468a body=123 status=ok
// SIG undefined FUN_140b0468a(void)

double FUN_140b0468a(longlong param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  
  if ((longlong)*(int *)(param_1 + 0x1b8) == 0) {
    dVar3 = 1.79769313486232e+308;
  }
  else {
    pdVar2 = *(double **)(param_1 + 0x1b0);
    pdVar1 = pdVar2 + (longlong)*(int *)(param_1 + 0x1b8) * 3;
    dVar4 = 1.79769313486232e+308;
    do {
      dVar3 = (pdVar2[2] - param_2[2]) * (pdVar2[2] - param_2[2]) +
              (pdVar2[1] - param_2[1]) * (pdVar2[1] - param_2[1]) +
              (*pdVar2 - *param_2) * (*pdVar2 - *param_2);
      if (dVar4 <= dVar3) {
        dVar3 = dVar4;
      }
      pdVar2 = pdVar2 + 3;
      dVar4 = dVar3;
    } while (pdVar2 != pdVar1);
  }
  return dVar3;
}



// FUNCTION 140b04706 FUN_140b04706 body=426 status=ok
// SIG undefined FUN_140b04706(void)

void FUN_140b04706(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
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
  
  dVar5 = *param_2;
  if ((longlong)*(int *)(param_1 + 0x688) == 0) {
    cVar4 = '\0';
  }
  else {
    lVar3 = 0;
    cVar4 = '\0';
    dVar6 = dVar5;
    dVar7 = param_2[5];
    dVar10 = param_2[4];
    dVar12 = param_2[3];
    dVar14 = param_2[2];
    dVar16 = param_2[1];
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x680) + lVar3);
      dVar5 = dVar6;
      dVar8 = dVar7;
      dVar9 = dVar10;
      dVar11 = dVar12;
      dVar13 = dVar14;
      dVar15 = dVar16;
      if (((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x680) + 0x28 + lVar3) != 0)) {
        dVar5 = (double)*(float *)(lVar1 + 0x80) * 100.0;
        dVar15 = (double)*(float *)(lVar1 + 0x84) * 100.0;
        dVar13 = (double)*(float *)(lVar1 + 0x88) * 100.0;
        dVar11 = (double)*(float *)(lVar1 + 0x90) * 100.0;
        dVar9 = (double)*(float *)(lVar1 + 0x94) * 100.0;
        dVar2 = (double)*(float *)(lVar1 + 0x98) * 100.0;
        dVar8 = dVar2;
        if (cVar4 != '\0') {
          if (dVar5 <= dVar6) {
            dVar6 = dVar5;
          }
          if (dVar15 <= dVar16) {
            dVar16 = dVar15;
          }
          if (dVar13 <= dVar14) {
            dVar14 = dVar13;
          }
          if (dVar12 <= dVar11) {
            dVar12 = dVar11;
          }
          if (dVar10 <= dVar9) {
            dVar10 = dVar9;
          }
          dVar5 = dVar6;
          dVar8 = dVar7;
          dVar9 = dVar10;
          dVar11 = dVar12;
          dVar13 = dVar14;
          dVar15 = dVar16;
          if (dVar7 <= dVar2) {
            dVar8 = dVar2;
          }
        }
        cVar4 = '\x01';
      }
      lVar3 = lVar3 + 0x30;
      dVar6 = dVar5;
      dVar7 = dVar8;
      dVar10 = dVar9;
      dVar12 = dVar11;
      dVar14 = dVar13;
      dVar16 = dVar15;
    } while ((longlong)*(int *)(param_1 + 0x688) * 0x30 != lVar3);
    param_2[1] = dVar15;
    param_2[2] = dVar13;
    param_2[3] = dVar11;
    param_2[4] = dVar9;
    param_2[5] = dVar8;
  }
  *(char *)(param_2 + 6) = cVar4;
  *param_2 = dVar5;
  return;
}



// FUNCTION 140b048b0 FUN_140b048b0 body=671 status=ok
// SIG undefined FUN_140b048b0(void)

undefined8 FUN_140b048b0(longlong param_1,double *param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar11 = *(uint *)(param_1 + 0x1c8);
  if ((int)*(uint *)(param_1 + 0x1b8) < (int)*(uint *)(param_1 + 0x1c8)) {
    uVar11 = *(uint *)(param_1 + 0x1b8);
  }
  if ((int)uVar11 < 1) {
    uVar12 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1b0);
    lVar2 = *(longlong *)(param_1 + 0x1c0);
    uVar14 = (ulonglong)uVar11;
    uVar12 = CONCAT71((int7)(uVar14 * 8 >> 8),1);
    uVar15 = 1;
    lVar13 = 0;
    do {
      dVar3 = param_2[1] - *(double *)(lVar1 + 8 + lVar13);
      dVar4 = *param_2 - *(double *)(lVar1 + lVar13);
      dVar5 = dVar4 * dVar4 + dVar3 * dVar3;
      uVar18 = (undefined4)DAT_14c8464f0;
      uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      if ((dVar5 != 1.0) || (NAN(dVar5))) {
        uVar16 = uVar18;
        uVar17 = uVar19;
        dVar7 = DAT_14c8464e8;
        dVar8 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar5) {
          uVar16 = 0;
          uVar17 = 0;
          dVar7 = dVar3 * (1.0 / SQRT(dVar5));
          dVar8 = dVar4 * (1.0 / SQRT(dVar5));
        }
      }
      else {
        dVar5 = param_2[2] - *(double *)(lVar1 + 0x10 + lVar13);
        uVar6 = -(ulonglong)(dVar5 == 0.0) & (ulonglong)dVar5;
        uVar16 = (undefined4)uVar6;
        uVar17 = (undefined4)(uVar6 >> 0x20);
        dVar7 = dVar3;
        dVar8 = dVar4;
      }
      dVar3 = *(double *)(lVar2 + lVar13);
      dVar4 = *(double *)(lVar2 + 8 + lVar13);
      dVar5 = dVar3 * dVar3 + dVar4 * dVar4;
      if ((dVar5 != 1.0) || (NAN(dVar5))) {
        dVar9 = DAT_14c8464e0;
        dVar10 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar5) {
          uVar18 = 0;
          uVar19 = 0;
          dVar9 = dVar3 * (1.0 / SQRT(dVar5));
          dVar10 = dVar4 * (1.0 / SQRT(dVar5));
        }
      }
      else {
        dVar5 = *(double *)(lVar2 + 0x10 + lVar13);
        uVar6 = -(ulonglong)(dVar5 == 0.0) & (ulonglong)dVar5;
        uVar18 = (undefined4)uVar6;
        uVar19 = (undefined4)(uVar6 >> 0x20);
        dVar9 = dVar3;
        dVar10 = dVar4;
      }
      if (param_3 <=
          (float)(dVar7 * dVar10 + dVar8 * dVar9 +
                 (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar19,uVar18))) {
        return uVar12;
      }
      uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),uVar15 < uVar14);
      lVar13 = lVar13 + 0x18;
      uVar15 = uVar15 + 1;
    } while (uVar14 * 0x18 != lVar13);
  }
  return uVar12;
}



// FUNCTION 140b04b50 FUN_140b04b50 body=163 status=ok
// SIG undefined FUN_140b04b50(void)

undefined8 FUN_140b04b50(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((param_1 == 0) || (iVar5 = *(int *)(param_1 + 0x238), iVar5 < 1)) {
LAB_140b04be8:
    uVar4 = 0;
  }
  else {
    lVar6 = 0;
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x230) + 4 + lVar6 * 8);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x230) + lVar6 * 8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)) &&
          (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && ((longlong *)*plVar7 != (longlong *)0x0))))
         )) {
        lVar3 = (**(code **)(*(longlong *)*plVar7 + 0x5f8))();
        if (lVar3 == 0) goto LAB_140b04be8;
        iVar5 = *(int *)(param_1 + 0x238);
        uVar4 = 1;
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar5);
  }
  return uVar4;
}



// FUNCTION 140b04bf4 FUN_140b04bf4 body=3739 status=ok
// SIG undefined FUN_140b04bf4(void)

undefined8 FUN_140b04bf4(longlong param_1,code **param_2,undefined8 param_3)

{
  code ***pppcVar1;
  int *piVar2;
  code ***pppcVar3;
  float fVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  code *pcVar8;
  longlong lVar9;
  code **ppcVar10;
  char cVar11;
  int iVar12;
  code **ppcVar13;
  longlong lVar14;
  longlong *plVar15;
  code ***pppcVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  code ***pppcVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  double dVar25;
  double _X;
  double dVar26;
  float fVar27;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  code ***local_1b0;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_198;
  undefined4 uStack_194;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  code *local_168;
  code ***pppcStack_160;
  longlong local_158;
  code **local_150;
  code ***local_148;
  code **local_140;
  longlong local_138;
  longlong **local_130;
  longlong *local_128;
  undefined8 uStack_120;
  code *local_110;
  code **local_108;
  code ***pppcStack_100;
  double *local_f8;
  undefined4 *puStack_f0;
  float *local_e8;
  undefined4 *puStack_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_141307202();
  lVar14 = *(longlong *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  pppcVar20 = (code ***)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  FUN_1412a753c(pppcVar20);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  uVar22 = DAT_14cb1ae68;
  if (lVar14 == 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_108,uVar22,param_2);
    pppcVar16 = pppcStack_100;
    ppcVar13 = local_108;
    if ((local_108 == (code **)0x0) || (pppcStack_100 == (code ***)0x0)) {
      pppcVar16 = (code ***)0x0;
    }
    else {
      LOCK();
      *(int *)(pppcStack_100 + 1) = *(int *)(pppcStack_100 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)pppcStack_100 + 0xc) = *(int *)((longlong)pppcStack_100 + 0xc) + 1;
      UNLOCK();
      LOCK();
      pppcVar3 = pppcStack_100 + 1;
      *(int *)pppcVar3 = *(int *)pppcVar3 + -1;
      UNLOCK();
      if (*(int *)pppcVar3 == 0) {
        (***pppcStack_100)(pppcStack_100);
        LOCK();
        piVar2 = (int *)((longlong)pppcVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(*pppcVar16)[2])(pppcVar16);
        }
      }
    }
    pppcVar3 = pppcStack_100;
    if (pppcStack_100 != (code ***)0x0) {
      LOCK();
      pppcVar1 = pppcStack_100 + 1;
      *(int *)pppcVar1 = *(int *)pppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppcVar1 == 0) {
        (***pppcStack_100)(pppcStack_100);
        LOCK();
        piVar2 = (int *)((longlong)pppcVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(*pppcVar3)[2])(pppcVar3);
        }
      }
    }
    local_150 = (code **)0x0;
    local_148 = pppcVar16;
    if (pppcVar16 != (code ***)0x0) {
      iVar12 = *(int *)(pppcVar16 + 1);
      do {
        if (iVar12 == 0) {
          local_148 = (code ***)0x0;
          break;
        }
        LOCK();
        iVar19 = *(int *)(pppcVar16 + 1);
        bVar21 = iVar12 == iVar19;
        if (bVar21) {
          *(int *)(pppcVar16 + 1) = iVar12 + 1;
          iVar19 = iVar12;
        }
        iVar12 = iVar19;
        UNLOCK();
      } while (!bVar21);
      LOCK();
      piVar2 = (int *)((longlong)pppcVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(*pppcVar16)[2])(pppcVar16);
      }
      pppcVar16 = local_148;
      if (local_148 == (code ***)0x0) {
        if (local_150 != (code **)0x0) goto LAB_140b050ec;
      }
      else {
        local_150 = ppcVar13;
        if (ppcVar13 == (code **)0x0) {
          LOCK();
          pppcVar20 = local_148 + 1;
          *(int *)pppcVar20 = *(int *)pppcVar20 + -1;
          UNLOCK();
          if (*(int *)pppcVar20 == 0) {
            (***local_148)(local_148);
            LOCK();
            piVar2 = (int *)((longlong)pppcVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              ppcVar13 = *pppcVar16;
LAB_140b05093:
              (*ppcVar13[2])(pppcVar16);
            }
          }
        }
        else {
LAB_140b050ec:
          lVar14 = FUN_144860928();
          local_f8 = &local_180;
          local_180 = (double)CONCAT44(local_180._4_4_,
                                       *(float *)(lVar14 + 0xea8) * *(float *)(lVar14 + 0xea8));
          local_198 = *(float *)(lVar14 + 0xeac) * *(float *)(lVar14 + 0xeac);
          local_e8 = &local_198;
          local_d8 = &local_128;
          local_128 = (longlong *)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar14 + 0xeb4));
          local_108 = &local_110;
          local_110 = (code *)((ulonglong)local_110 & 0xffffffff00000000);
          puStack_f0 = &local_19c;
          local_19c = 0;
          puStack_e0 = &local_1a0;
          local_1a0 = 0;
          local_d0 = &local_1a4;
          local_1a4 = 0;
          pppcStack_100 = &local_150;
          local_168 = FUN_1440cd922;
          pppcStack_160 = &local_108;
          cVar11 = FUN_14570d6e8(param_3,param_2,pppcVar20);
          pppcVar16 = local_148;
          if (cVar11 != '\0') {
            if (local_148 != (code ***)0x0) {
              LOCK();
              pppcVar3 = local_148 + 1;
              *(int *)pppcVar3 = *(int *)pppcVar3 + -1;
              UNLOCK();
              if (*(int *)pppcVar3 == 0) {
                (***local_148)(local_148);
                LOCK();
                piVar2 = (int *)((longlong)pppcVar16 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(*pppcVar16)[2])(pppcVar16);
                }
              }
            }
            goto LAB_140b04e31;
          }
          if (local_148 != (code ***)0x0) {
            LOCK();
            pppcVar20 = local_148 + 1;
            *(int *)pppcVar20 = *(int *)pppcVar20 + -1;
            UNLOCK();
            if (*(int *)pppcVar20 == 0) {
              (***local_148)(local_148);
              LOCK();
              piVar2 = (int *)((longlong)pppcVar16 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                ppcVar13 = *pppcVar16;
                goto LAB_140b05093;
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_14040d984(&local_108,param_2);
    if (pppcStack_100 != (code ***)0x0) {
      iVar12 = *(int *)(pppcStack_100 + 1);
      do {
        if (iVar12 == 0) {
          pppcVar16 = (code ***)0x0;
          break;
        }
        LOCK();
        iVar19 = *(int *)(pppcStack_100 + 1);
        bVar21 = iVar12 == iVar19;
        if (bVar21) {
          *(int *)(pppcStack_100 + 1) = iVar12 + 1;
          iVar19 = iVar12;
        }
        iVar12 = iVar19;
        UNLOCK();
        pppcVar16 = pppcStack_100;
      } while (!bVar21);
      LOCK();
      piVar2 = (int *)((longlong)pppcStack_100 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(*pppcStack_100)[2])();
      }
      ppcVar13 = local_108;
      if (pppcVar16 != (code ***)0x0) {
        if (local_108 == (code **)0x0) {
LAB_140b04e09:
          cVar11 = '\0';
        }
        else {
          FUN_14040dabc(local_108,param_3);
          local_168 = (code *)FUN_14040d8e0(ppcVar13,param_3);
          if (local_168 == (code *)0x0) goto LAB_140b04e09;
          FUN_14040dabc(ppcVar13,lVar14);
          local_150 = &local_168;
          pppcStack_100 = &local_150;
          local_108 = (code **)FUN_1440ce7ac;
          local_148 = pppcVar20;
          cVar11 = FUN_14040d662(lVar14,param_2);
        }
        LOCK();
        pppcVar3 = pppcVar16 + 1;
        *(int *)pppcVar3 = *(int *)pppcVar3 + -1;
        UNLOCK();
        if (*(int *)pppcVar3 == 0) {
          (***pppcVar16)(pppcVar16);
          LOCK();
          piVar2 = (int *)((longlong)pppcVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(*pppcVar16)[2])(pppcVar16);
          }
        }
        if (cVar11 != '\0') {
LAB_140b04e31:
          if (((*pppcVar20 != (code **)0x0) &&
              (plVar6 = *(longlong **)(param_1 + 0x140), plVar6 != (longlong *)0x0)) &&
             (0 < (int)plVar6[1])) {
            *(undefined8 *)(param_1 + 0xc0) = param_3;
            iVar12 = (int)plVar6[1];
            do {
              if (iVar12 == 0) goto LAB_140b050a3;
              LOCK();
              iVar19 = (int)plVar6[1];
              bVar21 = iVar12 == iVar19;
              if (bVar21) {
                *(int *)(plVar6 + 1) = iVar12 + 1;
                iVar19 = iVar12;
              }
              iVar12 = iVar19;
              uVar22 = DAT_14cb1ae68;
              UNLOCK();
            } while (!bVar21);
            ppcVar13 = *pppcVar20;
            if (ppcVar13 == (code **)0x0) {
LAB_140b051fa:
              bVar21 = false;
            }
            else {
              if (DAT_14c9a7d10 == (undefined8 *)0x0) {
                DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                *DAT_14c9a7d10 = 0;
                DAT_14c9a7d10[1] = 0;
                DAT_14c9a7d10[2] = 0;
                DAT_14c9a7d10[3] = 0;
              }
              FUN_14005915a(DAT_14c9a7d10,&local_108,uVar22,param_2);
              pppcVar20 = pppcStack_100;
              ppcVar10 = local_108;
              if ((local_108 == (code **)0x0) || (pppcStack_100 == (code ***)0x0)) {
                pppcVar20 = (code ***)0x0;
              }
              else {
                LOCK();
                *(int *)(pppcStack_100 + 1) = *(int *)(pppcStack_100 + 1) + 1;
                UNLOCK();
                LOCK();
                *(int *)((longlong)pppcVar20 + 0xc) = *(int *)((longlong)pppcVar20 + 0xc) + 1;
                UNLOCK();
                LOCK();
                pppcVar16 = pppcVar20 + 1;
                *(int *)pppcVar16 = *(int *)pppcVar16 + -1;
                UNLOCK();
                if (*(int *)pppcVar16 == 0) {
                  (***pppcVar20)();
                  LOCK();
                  piVar2 = (int *)((longlong)pppcVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (*(*pppcVar20)[2])();
                  }
                }
              }
              pppcVar16 = pppcStack_100;
              if (pppcStack_100 != (code ***)0x0) {
                LOCK();
                pppcVar3 = pppcStack_100 + 1;
                *(int *)pppcVar3 = *(int *)pppcVar3 + -1;
                UNLOCK();
                if (*(int *)pppcVar3 == 0) {
                  (***pppcVar16)();
                  LOCK();
                  piVar2 = (int *)((longlong)pppcVar16 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (*(*pppcVar16)[2])();
                  }
                }
              }
              if (pppcVar20 == (code ***)0x0) goto LAB_140b051fa;
              iVar12 = *(int *)(pppcVar20 + 1);
              do {
                pppcVar16 = (code ***)0x0;
                if (iVar12 == 0) break;
                LOCK();
                iVar19 = *(int *)(pppcVar20 + 1);
                bVar21 = iVar12 == iVar19;
                if (bVar21) {
                  *(int *)(pppcVar20 + 1) = iVar12 + 1;
                  iVar19 = iVar12;
                }
                iVar12 = iVar19;
                UNLOCK();
                pppcVar16 = pppcVar20;
              } while (!bVar21);
              LOCK();
              piVar2 = (int *)((longlong)pppcVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(*pppcVar20)[2])();
              }
              if (pppcVar16 == (code ***)0x0) goto LAB_140b051fa;
              if (ppcVar10 == (code **)0x0) {
                bVar21 = false;
              }
              else {
                local_110 = (code *)0x0;
                local_128 = (longlong *)0x0;
                uStack_120 = 0;
                iVar12 = *(int *)(param_1 + 400) + 2;
                if (*(int *)(param_1 + 400) < -2) {
LAB_140b0593f:
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar12);
                }
                uStack_120._4_4_ = 0;
                if (*(int *)(param_1 + 0xe4) < iVar12) {
                  FUN_146620cca();
                  iVar12 = *(int *)(param_1 + 400) + 2;
                  if (*(int *)(param_1 + 400) < -2) goto LAB_140b0593f;
                }
                if (uStack_120._4_4_ < iVar12) {
                  FUN_146620d2a();
                }
                local_e8 = (float *)0x0;
                puStack_e0 = (undefined4 *)0x0;
                local_f8 = (double *)0x0;
                puStack_f0 = (undefined4 *)0x0;
                local_108 = (code **)0x0;
                pppcStack_100 = (code ***)0x0;
                local_c8 = 0;
                local_b8 = (longlong *)0x0;
                local_d8 = (longlong **)
                           (CONCAT53(0x4800,CONCAT12(local_d8._2_1_,0x100)) & 0xffffffffffe0ffff |
                           0x40000);
                local_150 = param_2;
                local_148 = &local_108;
                local_140 = &local_110;
                local_138 = param_1;
                local_130 = &local_128;
                uVar5 = *(uint *)(param_1 + 0x160);
                if ((ulonglong)uVar5 != 0xffffffff) {
                  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(ppcVar13 + 0x12))) {
                    pcVar7 = ppcVar13[0x15];
                    lVar14 = (ulonglong)uVar5 * 0x78;
                    local_180 = (double)CONCAT44(local_180._4_4_,0x7f7fffff);
                    uVar23 = FUN_14040e062(pcVar7 + lVar14 + 0x30,param_1 + 0x148,&local_180,
                                           &local_168);
                    FUN_140703ce0(pcVar7 + lVar14 + 0x30,&local_168,uVar23,
                                  *(undefined8 *)(pcVar7 + lVar14 + 0x58));
                    FUN_14655484c(pcVar7 + lVar14,&local_198);
                    dVar26 = (double)CONCAT44(uStack_194,local_198);
                    uVar22 = SUB84(local_190,0);
                    uVar24 = (undefined4)((ulonglong)local_190 >> 0x20);
                    local_178 = 0.0;
                    if ((dVar26 != 0.0) ||
                       (((NAN(dVar26) || (local_190 != 0.0)) || (NAN(local_190))))) {
                      local_178 = atan2(local_190,dVar26);
                      local_178 = local_178 * 57.29577951308232;
                      dVar26 = (double)CONCAT44(uStack_194,local_198);
                      uVar22 = SUB84(local_190,0);
                      uVar24 = (undefined4)((ulonglong)local_190 >> 0x20);
                    }
                    dVar25 = SQRT(dVar26 * dVar26 +
                                  (double)CONCAT44(uVar24,uVar22) * (double)CONCAT44(uVar24,uVar22))
                    ;
                    dVar26 = 0.0;
                    if (((dVar25 != 0.0) || (NAN(dVar25))) ||
                       ((local_188 != 0.0 || (NAN(local_188))))) {
                      dVar26 = atan2(local_188,dVar25);
                      dVar26 = dVar26 * 57.29577951308232;
                    }
                    local_170 = 0;
                    local_180 = dVar26;
                    FUN_1440c9e3e(&local_150,&local_168,&local_180);
                    goto LAB_140b05403;
                  }
LAB_140b05034:
                  bVar21 = false;
                  goto LAB_140b05846;
                }
LAB_140b05403:
                iVar12 = *(int *)(param_1 + 400);
                local_1b0 = pppcVar16;
                if ((longlong)iVar12 != 0) {
                  lVar14 = *(longlong *)(param_1 + 0x188);
                  lVar18 = 0;
                  do {
                    iVar19 = *(int *)(lVar14 + lVar18);
                    if (((longlong)iVar19 < 0) || (*(int *)(ppcVar13 + 0x12) <= iVar19))
                    goto LAB_140b0583f;
                    FUN_1440c9e3e(&local_150,ppcVar13[0x11] + (longlong)iVar19 * 0x90);
                    lVar18 = lVar18 + 0xc;
                  } while ((longlong)iVar12 * 0xc != lVar18);
                }
                uVar5 = *(uint *)(param_1 + 0x180);
                if ((ulonglong)uVar5 != 0xffffffff) {
                  pppcVar16 = local_1b0;
                  if (((int)uVar5 < 0) || (*(int *)(ppcVar13 + 0x12) <= (int)uVar5))
                  goto LAB_140b05034;
                  pcVar8 = ppcVar13[0x15];
                  lVar14 = (ulonglong)uVar5 * 0x78;
                  pcVar7 = pcVar8 + lVar14;
                  local_180 = (double)CONCAT44(local_180._4_4_,0x7f7fffff);
                  uVar23 = FUN_14040e062(pcVar8 + lVar14 + 0x30,param_1 + 0x168,&local_180,
                                         &local_168);
                  FUN_140703ce0(pcVar8 + lVar14 + 0x30,&local_168,uVar23,
                                *(undefined8 *)(pcVar8 + lVar14 + 0x58));
                  FUN_14655484c(pcVar7,&local_198);
                  dVar25 = (double)CONCAT44(uStack_194,local_198);
                  uVar22 = SUB84(local_190,0);
                  uVar24 = (undefined4)((ulonglong)local_190 >> 0x20);
                  dVar26 = 0.0;
                  if ((((dVar25 != 0.0) || (NAN(dVar25))) || (local_190 != 0.0)) || (NAN(local_190))
                     ) {
                    dVar26 = atan2(local_190,dVar25);
                    dVar26 = dVar26 * 57.29577951308232;
                    dVar25 = (double)CONCAT44(uStack_194,local_198);
                    uVar22 = SUB84(local_190,0);
                    uVar24 = (undefined4)((ulonglong)local_190 >> 0x20);
                  }
                  _X = SQRT(dVar25 * dVar25 +
                            (double)CONCAT44(uVar24,uVar22) * (double)CONCAT44(uVar24,uVar22));
                  dVar25 = 0.0;
                  local_178 = dVar26;
                  if (((_X != 0.0) || (NAN(_X))) || ((local_188 != 0.0 || (NAN(local_188))))) {
                    dVar25 = atan2(local_188,_X);
                    dVar25 = dVar25 * 57.29577951308232;
                  }
                  local_170 = 0;
                  if (*(float *)(pcVar7 + 0x28) <= 0.0) {
                    fVar27 = 1.0;
                  }
                  else {
                    fVar27 = (float)uVar23 / *(float *)(pcVar7 + 0x28);
                    if (1.0 <= fVar27) {
                      fVar27 = 1.0;
                    }
                    if (fVar27 <= 0.0) {
                      fVar27 = 0.0;
                    }
                    fVar27 = (*(float *)(*(longlong *)(pcVar7 + 0x58) + 0x30) -
                             *(float *)(*(longlong *)(pcVar7 + 0x48) + 0x30)) * fVar27 +
                             *(float *)(*(longlong *)(pcVar7 + 0x48) + 0x30);
                  }
                  local_180 = dVar25;
                  FUN_1440c9e3e(&local_150,&local_168,&local_180,fVar27);
                }
                plVar15 = local_128;
                if (*(int *)(param_1 + 0xe0) == 0) {
LAB_140b0583f:
                  bVar21 = false;
                  pppcVar16 = local_1b0;
                }
                else {
                  lVar14 = (longlong)(int)uStack_120;
                  if (lVar14 != 0) {
                    lVar18 = 0;
                    do {
                      lVar9 = *(longlong *)((longlong)plVar15 + lVar18);
                      if (lVar9 != 0) {
                        puVar17 = (undefined8 *)(*(longlong *)(lVar9 + 0x1c8) + 0x240);
                        if (*(longlong *)(lVar9 + 0x1c8) == 0) {
                          puVar17 = &DAT_14c846480;
                        }
                        local_1b8 = 0;
                        FUN_14113775c(lVar9,puVar17,1,0);
                      }
                      lVar18 = lVar18 + 8;
                    } while (lVar14 * 8 != lVar18);
                  }
                  lVar14 = FUN_144860928();
                  if ((*local_128 == 0) ||
                     (plVar15 = *(longlong **)(*local_128 + 0x3a0), plVar15 == (longlong *)0x0))
                  goto LAB_140b0583f;
                  fVar27 = *(float *)(lVar14 + 0xea8);
                  fVar4 = *(float *)(lVar14 + 0xeac);
                  uVar22 = *(undefined4 *)(lVar14 + 0xeb4);
LAB_140b056ad:
                  local_168 = (code *)plVar15[0x4c];
                  pppcStack_160 = (code ***)plVar15[0x4d];
                  local_158 = plVar15[0x4e];
                  cVar11 = FUN_140b03a7c(param_1,&local_168,(int)plVar15[0xcb]);
                  if (cVar11 == '\0') {
LAB_140b05711:
                    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x9f8))(plVar15);
                    if (plVar15 == (longlong *)0x0) goto LAB_140b057ef;
                    lVar14 = FUN_14098e79e();
                    if ((*(int *)(plVar15[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                        != lVar14 + 0x30)) goto LAB_140b057ef;
                    goto LAB_140b056ad;
                  }
                  dVar26 = (double)FUN_140b0468a(ppcVar10,&local_168);
                  if ((((float)dVar26 < fVar27 * fVar27) || (fVar4 * fVar4 < (float)dVar26)) ||
                     (cVar11 = FUN_140b048b0(ppcVar10,&local_168,uVar22), cVar11 != '\0'))
                  goto LAB_140b05711;
                  uVar5 = *(uint *)((longlong)plVar15 + 0xc);
                  *(uint *)(param_1 + 0x124) = uVar5;
                  if ((int)uVar5 < DAT_14c9647dc) {
                    lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                  }
                  else {
                    lVar14 = 0;
                  }
                  iVar12 = *(int *)(lVar14 + 0x10);
                  if (*(int *)(lVar14 + 0x10) == 0) {
                    LOCK();
                    iVar12 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar19 = DAT_14c964868 + 1;
                    bVar21 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar12;
                    if (bVar21) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar19);
                    }
                    LOCK();
                    iVar12 = *(int *)(lVar14 + 0x10);
                    bVar21 = iVar12 == 0;
                    if (bVar21) {
                      *(int *)(lVar14 + 0x10) = iVar19;
                      iVar12 = 0;
                    }
                    UNLOCK();
                    if (bVar21) {
                      iVar12 = iVar19;
                    }
                  }
                  *(int *)(param_1 + 0x128) = iVar12;
                  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_1 + 0x124);
                  lVar14 = (**(code **)(*plVar15 + 0x9f8))(plVar15);
                  if (lVar14 == 0) {
LAB_140b057dd:
                    *(undefined4 *)(param_1 + 300) = 0;
                    iVar12 = 0;
                  }
                  else {
                    lVar18 = FUN_14098e79e();
                    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30))
                    goto LAB_140b057dd;
                    uVar5 = *(uint *)(lVar14 + 0xc);
                    *(uint *)(param_1 + 300) = uVar5;
                    if ((int)uVar5 < DAT_14c9647dc) {
                      lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                    }
                    else {
                      lVar14 = 0;
                    }
                    iVar12 = *(int *)(lVar14 + 0x10);
                    if (*(int *)(lVar14 + 0x10) == 0) {
                      LOCK();
                      iVar12 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar19 = DAT_14c964868 + 1;
                      bVar21 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar12;
                      if (bVar21) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar19);
                      }
                      LOCK();
                      iVar12 = *(int *)(lVar14 + 0x10);
                      bVar21 = iVar12 == 0;
                      if (bVar21) {
                        *(int *)(lVar14 + 0x10) = iVar19;
                        iVar12 = 0;
                      }
                      UNLOCK();
                      if (bVar21) {
                        iVar12 = iVar19;
                      }
                    }
                  }
                  *(int *)(param_1 + 0x130) = iVar12;
LAB_140b057ef:
                  if (*(int *)(param_1 + 0x128) == 0) goto LAB_140b0583f;
                  uVar5 = *(uint *)(param_1 + 0x124);
                  bVar21 = false;
                  pppcVar16 = local_1b0;
                  if ((-1 < (int)uVar5) && (bVar21 = false, (int)uVar5 < DAT_14c9647dc)) {
                    lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                    if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != *(int *)(param_1 + 0x128)))
                    goto LAB_140b0583f;
                    bVar21 = (*(uint *)(lVar14 + 8) & 0x10200000) == 0;
                  }
                }
LAB_140b05846:
                if (local_c8 != 0) {
                  plVar15 = local_b8;
                  if (local_b8 == (longlong *)0x0) {
                    plVar15 = local_a8;
                  }
                  (**(code **)(*plVar15 + 0x10))();
                }
                if (local_128 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              LOCK();
              pppcVar20 = pppcVar16 + 1;
              *(int *)pppcVar20 = *(int *)pppcVar20 + -1;
              UNLOCK();
              if (*(int *)pppcVar20 == 0) {
                (***pppcVar16)(pppcVar16);
                LOCK();
                piVar2 = (int *)((longlong)pppcVar16 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(*pppcVar16)[2])(pppcVar16);
                }
              }
            }
            LOCK();
            plVar15 = plVar6 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            if (bVar21) {
              *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x160);
              uVar23 = CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(param_1 + 0x160) >> 8),1);
              goto LAB_140b050a5;
            }
          }
        }
      }
    }
  }
LAB_140b050a3:
  uVar23 = 0;
LAB_140b050a5:
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b05a90 FUN_140b05a90 body=808 status=ok
// SIG undefined FUN_140b05a90(void)

longlong * FUN_140b05a90(longlong *param_1,longlong param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  double *pdVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  plVar5 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*(char *)((longlong)param_1 + 0x6f1) != '\0') {
      plVar5 = param_1;
    }
  }
  else if (*(char *)((longlong)plVar5 + 0x6f1) == '\x01') {
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x9f8))(plVar5);
    if (plVar6 != plVar5) {
      plVar6 = (longlong *)FUN_14048bbc8(plVar5 + 0xeb);
      if ((plVar6 == (longlong *)0x0) ||
         (lVar7 = (**(code **)(*plVar6 + 0xa00))(plVar6), lVar7 == 0)) {
        plVar6 = (longlong *)0x0;
      }
      lVar7 = *(longlong *)(param_2 + 0x1c8);
      if (lVar7 == 0) {
        pdVar8 = &DAT_14c8464e0;
        uVar20 = SUB84(DAT_14c8464f0,0);
        uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar20 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
        uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
        pdVar8 = (double *)(lVar7 + 0x260);
      }
      uVar22 = (undefined4)plVar5[0x4c];
      uVar23 = *(undefined4 *)((longlong)plVar5 + 0x264);
      uVar24 = (undefined4)plVar5[0x4d];
      uVar25 = *(undefined4 *)((longlong)plVar5 + 0x26c);
      uVar26 = (undefined4)plVar5[0x4e];
      uVar27 = (undefined4)((ulonglong)plVar5[0x4e] >> 0x20);
      dVar3 = *pdVar8;
      dVar4 = pdVar8[1];
      plVar9 = (longlong *)(**(code **)(*plVar5 + 0x9f8))(plVar5);
      if (plVar9 != (longlong *)0x0) {
        fVar12 = 3.4028235e+38;
        plVar11 = plVar5;
        do {
          plVar10 = plVar9;
          auVar2 = *(undefined1 (*) [16])(plVar10 + 0x4c);
          dVar1 = (double)plVar10[0x4e];
          dVar13 = dVar1 - (double)CONCAT44(uVar27,uVar26);
          dVar17 = auVar2._0_8_ - (double)CONCAT44(uVar23,uVar22);
          dVar18 = auVar2._8_8_ - (double)CONCAT44(uVar25,uVar24);
          fVar19 = (float)SQRT(dVar13 * dVar13 + dVar17 * dVar17 + dVar18 * dVar18);
          dVar14 = DAT_14c8464f0;
          dVar15 = DAT_14c8464e8;
          dVar16 = DAT_14c8464e0;
          if (1e-08 < fVar19) {
            dVar16 = (double)(1.0 / fVar19);
            dVar14 = dVar13 * dVar16;
            dVar15 = dVar18 * dVar16;
            dVar16 = dVar17 * dVar16;
          }
          dVar17 = ((double)CONCAT44(uVar21,uVar20) - (double)CONCAT44(uVar27,uVar26)) * dVar14 +
                   (dVar3 - (double)CONCAT44(uVar23,uVar22)) * dVar16 +
                   (dVar4 - (double)CONCAT44(uVar25,uVar24)) * dVar15;
          if ((double)fVar19 <= dVar17) {
            dVar17 = (double)fVar19;
          }
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          dVar18 = (double)(float)dVar17;
          dVar17 = (dVar16 * dVar18 + (double)CONCAT44(uVar23,uVar22)) - dVar3;
          dVar16 = (dVar15 * dVar18 + (double)CONCAT44(uVar25,uVar24)) - dVar4;
          dVar18 = (dVar14 * dVar18 + (double)CONCAT44(uVar27,uVar26)) -
                   (double)CONCAT44(uVar21,uVar20);
          fVar19 = (float)(dVar18 * dVar18 + dVar16 * dVar16 + dVar17 * dVar17);
          if (fVar19 < fVar12) {
            plVar5 = plVar11;
          }
          if (plVar10 == plVar6) {
            return plVar5;
          }
          if (*(char *)((longlong)plVar10 + 0x6f1) == '\0') {
            return plVar5;
          }
          if (fVar12 <= fVar19) {
            fVar19 = fVar12;
          }
          fVar12 = fVar19;
          plVar9 = (longlong *)(**(code **)(*plVar10 + 0x9f8))(plVar10);
          uVar26 = SUB84(dVar1,0);
          uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
          uVar22 = auVar2._0_4_;
          uVar23 = auVar2._4_4_;
          uVar24 = auVar2._8_4_;
          uVar25 = auVar2._12_4_;
          plVar11 = plVar10;
        } while (plVar9 != (longlong *)0x0);
      }
    }
  }
  else {
    plVar5 = (longlong *)0x0;
  }
  return plVar5;
}



// FUNCTION 140b05db8 FUN_140b05db8 body=2314 status=ok
// SIG undefined FUN_140b05db8(void)

void FUN_140b05db8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  code ****ppppcVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code ***local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  code **local_90;
  code ***local_88;
  undefined8 uStack_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0xf0) < 2) goto LAB_140b0661c;
  lVar17 = *(longlong *)(param_1 + 0x98);
  if (lVar17 == 0) {
    uVar11 = FUN_141518b52();
    lVar17 = FUN_14477b664(uVar11);
    *(longlong *)(param_1 + 0x98) = lVar17;
  }
  lVar16 = *(longlong *)(param_1 + 0xa0);
  if (lVar16 == 0) {
    if ((lVar17 == 0) || (*(longlong *)(param_1 + 0x90) == 0)) goto LAB_140b0661c;
    plVar19 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar19 == (longlong *)0x0) ||
       (cVar9 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar9 == '\0')) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      goto LAB_140b0661c;
    }
    uVar11 = (**(code **)(*plVar19 + 0x110))(plVar19);
    lVar16 = FUN_144aff482(uVar11,(longlong *)(param_1 + 0x90));
    *(longlong *)(param_1 + 0xa0) = lVar16;
    if (lVar16 == 0) goto LAB_140b0661c;
  }
  if (*(int *)(param_1 + 0xf0) < 1) goto LAB_140b0661c;
  uVar2 = (*(uint **)(param_1 + 0xe8))[1];
  if ((((uVar2 == 0) || (uVar3 = **(uint **)(param_1 + 0xe8), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar19 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar19 == (longlong *)0x0 || (*(uint *)(plVar19 + 2) != uVar2)) ||
      (((*(uint *)(plVar19 + 1) & 0x10200000) != 0 || (local_b0 = *plVar19, local_b0 == 0))))))
  goto LAB_140b0661c;
  puVar20 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar16 + 8) != (undefined4 *)0x0) {
    puVar20 = *(undefined4 **)(lVar16 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar17 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar17);
    DAT_14c947fe0 = lVar17;
  }
  FUN_140045924(DAT_14c947fe0,&local_90,puVar20,1);
  cVar9 = ((*(byte *)(lVar16 + 0x58) & 0xfe) == 2) + '\x01';
  if (*(char *)(lVar16 + 0x59) != '\0') {
    cVar9 = *(char *)(lVar16 + 0x59);
  }
  local_a8 = (longlong *)FUN_140b041a5(*(byte *)(lVar16 + 0x58),cVar9);
  if (*(int *)(param_1 + 0xcc) == 0) {
LAB_140b06310:
    lVar17 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 200);
    lVar17 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar19 == (longlong *)0x0) ||
         (((int)plVar19[2] != *(int *)(param_1 + 0xcc) ||
          ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140b06310;
      lVar17 = *plVar19;
    }
  }
  iVar10 = *(int *)(param_1 + 0xf0);
  if (1 < iVar10) {
    uVar21 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0xc + uVar21 * 8);
      if ((((((iVar4 != 0) &&
             (uVar2 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 8 + uVar21 * 8), -1 < (int)uVar2))
            && ((int)uVar2 < DAT_14c9647dc)) &&
           ((plVar19 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar4)))) &&
          ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) &&
         (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)) {
        if (lVar17 != 0) {
          uVar11 = FUN_140b066c4();
          plVar12 = (longlong *)(**(code **)(*plVar19 + 0x288))(plVar19,uVar11);
          if (plVar12 != (longlong *)0x0) {
            uVar11 = FUN_140b066c4();
            plVar13 = (longlong *)FUN_144718840(plVar12,uVar11);
            if ((plVar12 != plVar13) && (plVar13 != (longlong *)0x0)) {
              uVar11 = (**(code **)(*(longlong *)(lVar17 + 0x390) + 0x10))
                                 ((longlong *)(lVar17 + 0x390));
              (**(code **)(*plVar13 + 0x10))(plVar13,uVar11);
            }
          }
        }
        uVar11 = FUN_140b040c0();
        plVar12 = (longlong *)FUN_144718840(plVar19,uVar11);
        if (plVar12 == (longlong *)0x0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        if (DAT_14c9a4e08 == 0) {
          local_d0 = (code ***)&local_88;
          local_88 = (code ***)FUN_1449e2820;
          local_c0 = FUN_14081d0ea;
          local_c8 = FUN_1427b09ee;
          local_d8 = &LAB_1470c76a3;
          local_e0 = FUN_1462ab034;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10004001;
          local_100 = 8;
          local_108 = 0x28;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
        }
        plVar12 = (longlong *)FUN_144718840(plVar19,DAT_14c9a4e08);
        if ((lVar14 != 0) && (plVar12 != (longlong *)0x0)) {
          if (*(char *)(param_1 + 0x19c) == '\x01') {
            local_88 = (code ***)0x0;
            uStack_80 = 0;
            FUN_140b068ec(lVar14,1,&DAT_14cb23f30,&local_88);
            FUN_1449db362(&local_88);
            uVar11 = (**(code **)(*plVar12 + 0x28))(plVar12);
            local_70 = 8;
            local_88 = (code ***)0x0;
            FUN_14485c47a(&local_88,local_b0);
            local_68 = 7;
            FUN_1402b90a2(uVar11,&DAT_14cbc3030,&local_88);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar5 != (code *)0x0) {
              ppppcVar18 = &local_88;
              if (0x18 < local_70) {
                ppppcVar18 = (code ****)local_88;
              }
              (*pcVar5)(ppppcVar18);
            }
            if (0x18 < local_70) {
              FUN_1400020a8(local_88);
            }
          }
          else {
            FUN_140356f00(lVar14,1,4);
          }
        }
        lVar14 = *(longlong *)(lVar16 + 0x30);
        if (lVar14 == 0) {
          uVar11 = FUN_145cd2868();
          lVar14 = FUN_14477b664(uVar11);
          *(longlong *)(lVar16 + 0x30) = lVar14;
        }
        lVar15 = *(longlong *)(lVar16 + 0x38);
        if (((lVar15 == 0) && (lVar15 = 0, lVar14 != 0)) && (*(longlong *)(lVar16 + 0x28) != 0)) {
          plVar12 = *(longlong **)(lVar14 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar9 == '\0')) {
            lVar15 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar15 = FUN_144aff482(uVar11,lVar16 + 0x28);
          }
          *(longlong *)(lVar16 + 0x38) = lVar15;
        }
        FUN_14070cbf4(&local_a0,plVar19);
        lVar14 = local_a0;
        if ((lVar15 != 0) && (local_a0 != 0)) {
          if ((*(char *)(param_1 + 0x19c) == '\x01') &&
             (FUN_140b067aa(lVar15,&local_88,uVar21 & 0xffffffff,*(int *)(param_1 + 0xf0) + -1),
             (local_70 & 1) != 0)) {
            FUN_140b0682c(lVar14,local_b0,&local_88);
          }
          else {
            *(undefined8 *)(lVar14 + 0x438) = 0;
            uVar8 = DAT_14c8464e8._4_4_;
            uVar7 = (undefined4)DAT_14c8464e8;
            uVar6 = DAT_14c8464e0._4_4_;
            *(undefined4 *)(lVar14 + 0x420) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)(lVar14 + 0x424) = uVar6;
            *(undefined4 *)(lVar14 + 0x428) = uVar7;
            *(undefined4 *)(lVar14 + 0x42c) = uVar8;
            *(undefined8 *)(lVar14 + 0x430) = DAT_14c8464f0;
          }
        }
        if (*local_a8 != 0) {
          if (DAT_14cb1c498 == 0) {
            local_88 = (code ***)FUN_1449e2820;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_1427b09ee;
            local_d0 = (code ***)&local_88;
            local_d8 = &LAB_147e36893;
            local_e0 = FUN_146420564;
            local_e8 = L"Engine";
            local_f0 = 0;
            local_f8 = 0x10004001;
            local_100 = 8;
            local_108 = 0x28;
            FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
          }
          plVar12 = (longlong *)(**(code **)(*plVar19 + 0x288))(plVar19,DAT_14cb1c498);
          if (plVar12 != (longlong *)0x0) {
            if (DAT_14cb1c498 == 0) {
              local_88 = (code ***)FUN_1449e2820;
              local_c0 = FUN_14081d0ea;
              local_c8 = FUN_1427b09ee;
              local_d0 = (code ***)&local_88;
              local_d8 = &LAB_147e36893;
              local_e0 = FUN_146420564;
              local_e8 = L"Engine";
              local_f0 = 0;
              local_f8 = 0x10004001;
              local_100 = 8;
              local_108 = 0x28;
              FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
            }
            plVar13 = (longlong *)FUN_144718840(plVar12,DAT_14cb1c498);
            if (((plVar12 != plVar13) && (plVar13 != (longlong *)0x0)) &&
               (lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar14 != 0)) {
              lVar15 = FUN_140519fd4(plVar19);
              if ((lVar15 == 0) || (cVar9 = FUN_140b038fa(lVar15), cVar9 == '\0')) {
                FUN_140b043fa(lVar14,&local_90,local_a8);
              }
              else {
                if (0 < *(int *)(lVar14 + 0x230)) {
                  local_88 = &local_90;
                  FUN_140b042ce(lVar14 + 0x1a8,&local_88);
                }
                FUN_14483674a(lVar14);
              }
            }
          }
        }
        plVar19 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_98 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        iVar10 = *(int *)(param_1 + 0xf0);
      }
      lVar14 = uVar21 + 2;
      uVar21 = uVar21 + 1;
    } while (lVar14 < iVar10);
  }
LAB_140b0661c:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b066c4 FUN_140b066c4 body=228 status=ok
// SIG undefined FUN_140b066c4(void)

longlong FUN_140b066c4(void)

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
  if (DAT_14cb224e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f2c473;
    local_40 = FUN_146438bdd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryUser",&DAT_14cb224e0,&DAT_147f2c472);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb224e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b067aa FUN_140b067aa body=129 status=ok
// SIG undefined FUN_140b067aa(void)

void FUN_140b067aa(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((int)param_4 < 1) || (*(int *)(param_1 + 0x30) < (int)param_4)) {
    plVar5 = (longlong *)(param_1 + 0x38);
  }
  else {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_4 * 8 + -8);
  }
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x18);
    lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x18;
    do {
      if (*plVar4 == *plVar5) {
        if (((plVar4 != (longlong *)0x0) && (-1 < (int)param_3)) && ((int)param_3 < (int)plVar4[2]))
        {
          lVar6 = plVar4[1];
          param_2[2] = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)param_3 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + (ulonglong)param_3 * 0x18);
          uVar2 = puVar1[1];
          *param_2 = *puVar1;
          param_2[1] = uVar2;
          uVar3 = 1;
          goto LAB_140b06827;
        }
        break;
      }
      plVar4 = plVar4 + 3;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  uVar3 = 0;
LAB_140b06827:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}



// FUNCTION 140b0682c FUN_140b0682c body=191 status=ok
// SIG undefined FUN_140b0682c(void)

void FUN_140b0682c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x438) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x438) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x43c) = iVar3;
  uVar2 = param_3[1];
  *(undefined8 *)(param_1 + 0x420) = *param_3;
  *(undefined8 *)(param_1 + 0x428) = uVar2;
  *(undefined8 *)(param_1 + 0x430) = param_3[2];
  return;
}



// FUNCTION 140b068ec FUN_140b068ec body=263 status=ok
// SIG undefined FUN_140b068ec(void)

undefined4
FUN_140b068ec(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1402b9204(param_1,param_3);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    local_40 = *(undefined8 *)(lVar5 + 0x30);
    plVar3 = *(longlong **)(lVar5 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      uVar4 = FUN_14123f11a(param_1,param_2,&local_40,param_4);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_38 = plVar3;
      uVar4 = FUN_14123f11a(param_1,param_2,&local_40,param_4);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b069f4 FUN_140b069f4 body=634 status=ok
// SIG undefined FUN_140b069f4(void)

void FUN_140b069f4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x1c0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(lVar2 + lVar10);
      if (lVar8 != 0) {
        if (DAT_14cb20f48 == 0) {
          local_50 = FUN_141030f22;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_14641d14a;
          local_70 = &local_50;
          local_78 = &LAB_147f14d17;
          local_80 = &LAB_14643168d;
          local_88 = &DAT_149e063b2;
          local_90 = 0;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x10a0;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxAICharacter",&DAT_14cb20f48,&DAT_147f14d16);
          lVar8 = *(longlong *)(lVar2 + lVar10);
          if (lVar8 == 0) goto LAB_140b06b23;
        }
        if ((((DAT_14cb20f48 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 != 0)) &&
            (*(int *)(DAT_14cb20f48 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb20f48 + 0x38) * 8) ==
            DAT_14cb20f48 + 0x30)) {
          cVar5 = FUN_140b03970(lVar8);
          if (cVar5 == '\0') {
            lVar8 = *(longlong *)(lVar2 + lVar10);
            if ((lVar8 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar8);
LAB_140b06ac5:
              uVar7 = *(uint *)(lVar8 + 0xc);
              uVar9 = (ulonglong)uVar7;
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              uVar7 = *(uint *)(lVar8 + 0x10);
              if (*(uint *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                uVar7 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar7);
                }
                LOCK();
                uVar6 = *(uint *)(lVar8 + 0x10);
                bVar11 = uVar6 == 0;
                if (bVar11) {
                  *(uint *)(lVar8 + 0x10) = uVar7;
                  uVar6 = 0;
                }
                UNLOCK();
                if (!bVar11) {
                  uVar7 = uVar6;
                }
              }
            }
            else {
              if (lVar8 != 0) goto LAB_140b06ac5;
              uVar9 = 0;
              uVar7 = 0;
            }
            iVar4 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
              FUN_140155462(param_2,iVar4);
            }
            *(ulonglong *)(*param_2 + (longlong)iVar4 * 8) = uVar9 | (ulonglong)uVar7 << 0x20;
          }
          else {
            FUN_140b069f4(lVar8,param_2);
          }
        }
      }
LAB_140b06b23:
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b06c70 FUN_140b06c70 body=370 status=ok
// SIG undefined FUN_140b06c70(void)

undefined8 * FUN_140b06c70(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b06de4 FUN_140b06de4 body=2336 status=ok
// SIG undefined FUN_140b06de4(void)

void FUN_140b06de4(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,ulonglong param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 unaff_RBP;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  int local_98;
  char *local_90;
  undefined1 *local_88;
  uint local_80;
  ulonglong local_78;
  char local_69;
  int local_68;
  uint local_64;
  undefined8 local_60;
  longlong local_58;
  char local_4c;
  undefined1 local_4b;
  ushort local_4a;
  ulonglong local_48;
  
  lVar9 = DAT_14c9c4778;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_5 & 0x40) != 0) {
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = 0;
    FUN_140b0884e(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
    local_98 = 2;
    FUN_140b0770a(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = 0;
    FUN_140b08494(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
    local_98 = 2;
    FUN_140b08b70(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)CONCAT71(local_90._1_7_,1);
    local_98 = 0;
    FUN_140b0884e(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
    local_98 = 2;
    FUN_140b0770a(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)CONCAT71(local_90._1_7_,1);
    local_98 = 0;
    FUN_140b08494(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
    local_98 = 2;
    FUN_140b08b70(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = 1;
    FUN_140b0884e(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_90 = (char *)CONCAT44(local_90._4_4_,1);
    local_98 = 2;
    FUN_140b0770a(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = 1;
    FUN_140b08494(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_90 = (char *)CONCAT44(local_90._4_4_,1);
    local_98 = 2;
    FUN_140b08b70(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)CONCAT71(local_90._1_7_,1);
    local_98 = 1;
    FUN_140b0884e(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_90 = (char *)CONCAT44(local_90._4_4_,1);
    local_98 = 2;
    FUN_140b0770a(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)CONCAT71(local_90._1_7_,1);
    local_98 = 1;
    FUN_140b08494(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_90 = (char *)CONCAT44(local_90._4_4_,1);
    local_98 = 2;
    FUN_140b08b70(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = 2;
    FUN_140b0884e(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_90 = (char *)CONCAT44(local_90._4_4_,2);
    local_98 = 2;
    FUN_140b0770a(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)((ulonglong)local_90 & 0xffffffffffffff00);
    local_98 = 2;
    FUN_140b08494(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_90 = (char *)CONCAT44(local_90._4_4_,2);
    local_98 = 2;
    FUN_140b08b70(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)CONCAT71(local_90._1_7_,1);
    local_98 = 2;
    FUN_140b0884e(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_90 = (char *)CONCAT44(local_90._4_4_,2);
    local_98 = 2;
    FUN_140b0770a(param_1,param_2,param_4,param_3);
    local_88 = (undefined1 *)param_6;
    local_90 = (char *)CONCAT71(local_90._1_7_,1);
    local_98 = 2;
    FUN_140b08494(param_1,param_2,param_4,param_3);
    local_78 = param_6;
    local_80 = 0;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_90 = (char *)CONCAT44(local_90._4_4_,2);
    local_98 = 2;
    FUN_140b08b70(param_1,param_2,param_4,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  plVar6 = param_3;
  if (*(char *)(param_1 + 0x11) == '\x1d') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar2 ^ 1);
    }
    if (*(int *)(lVar9 + uVar5 * 4) == 0) goto LAB_140b06f5c;
  }
  pcVar7 = *(code **)(*param_3 + 0x270);
  plVar8 = param_3;
  if (pcVar7 == (code *)&LAB_1447f82f4) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 != (code *)&LAB_14470b702) goto LAB_140b076a7;
      bVar2 = *(byte *)((longlong)plVar8 + 0x129);
      if (bVar2 == 1) {
        bVar2 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
      }
      uVar13 = (uint)bVar2;
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 != (code *)&LAB_14497e176) goto LAB_140b076a7;
      uVar13 = (uint)*(byte *)(plVar8 + 0x2b);
    }
  }
  else {
LAB_140b076a7:
    uVar13 = (*pcVar7)(plVar8);
  }
  if ((((1 < uVar13) || ((*param_5 & 0x400) == 0)) ||
      (iVar4 = (**(code **)(*param_3 + 0x30))(param_3), iVar4 == 3)) ||
     ((cVar1 = (**(code **)(*param_3 + 0x368))(param_3), cVar1 != '\0' ||
      ((**(code **)(*param_3 + 0x288))(param_3,&local_4a), (local_4a >> 10 & 1) != 0))))
  goto LAB_140b06f5c;
  uVar13 = *(uint *)(*param_4 + 0x28);
  local_4c = '\0';
  if (param_3[2] == 0) {
    uVar11 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),
                     *(undefined1 *)(*(longlong *)(param_3[2] + 0x28) + 0x246)) & 0xffffffffffffff08
    ;
    uVar11 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 3);
  }
  local_88 = &local_4b;
  local_90 = &local_4c;
  local_98 = CONCAT31(local_98._1_3_,-1 < (short)uVar13);
  cVar1 = FUN_1400cdc16(param_1,param_3,uVar11,(uVar13 & 0x20) >> 5);
  if (cVar1 == '\0') goto LAB_140b06f5c;
  if ((((uVar13 & 0x20) == 0) && (local_4c != '\0')) && (param_4[1] != 0)) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),DAT_14cb0cc00);
    FUN_14003fbd6();
    plVar6 = (longlong *)
             (**(code **)(*DAT_14caea080 + 0x350))
                       (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar5 & 0xffffffff);
  }
  else {
    plVar6 = param_3;
    if (local_4c != '\0') goto LAB_140b06f5c;
  }
  uVar5 = *param_5;
  pcVar7 = *(code **)(*param_3 + 0x38);
  plVar8 = param_3;
  local_60 = param_2;
  if (pcVar7 == FUN_144765e18) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x420);
      pcVar10 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x420);
      pcVar10 = (code *)&LAB_14497e108;
    }
    if (pcVar7 != pcVar10) goto LAB_140b076c8;
  }
  else {
LAB_140b076c8:
    (*pcVar7)(plVar8);
  }
  lVar9 = *param_3;
  if (*(code **)(lVar9 + 0x100) == (code *)&LAB_144b25520) {
    bVar2 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar2 = (**(code **)(lVar9 + 0x100))(param_3);
    lVar9 = *param_3;
  }
  pcVar7 = *(code **)(lVar9 + 0x38);
  if (pcVar7 == FUN_144765e18) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      pcVar7 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar7 != (code *)&LAB_144b24e8a) goto LAB_140b076f7;
      bVar3 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x420);
      if (pcVar7 != (code *)&LAB_14497e108) goto LAB_140b076f7;
      bVar3 = *(byte *)(plVar8 + 0x2a);
    }
    bVar3 = (bVar3 & 0x10) >> 4;
  }
  else {
LAB_140b076f7:
    bVar3 = (*pcVar7)();
  }
  iVar12 = 2 - (uint)bVar2;
  iVar4 = (((uint)uVar5 >> 0x10 & 1) != 0) + 1;
  if (bVar3 != 0) {
    iVar4 = 0;
  }
  if ((uVar5 & 0x20000) != 0) {
    iVar4 = 0;
  }
  local_80 = (uint)*param_5;
  uVar13 = (local_80 >> 0x14 & 0xf) - 3;
  local_64 = (uint)(uVar13 < 0xfffffffe);
  local_68 = iVar12;
  if (uVar13 < 0xfffffffe) {
    local_69 = (**(code **)(*param_3 + 0x48))(param_3);
    local_80 = (uint)*param_5 & 0x3f;
    local_78 = param_6;
    local_90 = (char *)CONCAT44(local_90._4_4_,iVar4);
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_98 = iVar12;
    local_58 = param_1;
    FUN_140b0770a(param_1,local_60,param_4,plVar6);
    param_1 = local_58;
    if (local_69 != '\0') {
      local_80 = (uint)*param_5;
      goto LAB_140b07663;
    }
    local_64 = 0;
    uVar11 = local_60;
  }
  else {
LAB_140b07663:
    uVar11 = local_60;
    local_80 = local_80 & 0x3f;
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,uVar13 < 0xfffffffe);
    local_78 = param_6;
    local_90 = (char *)CONCAT44(local_90._4_4_,iVar4);
    local_98 = local_68;
    FUN_140b0770a(param_1,local_60,param_4);
  }
  cVar1 = (**(code **)(*param_3 + 0xd0))(param_3);
  if ((cVar1 == '\x01') && ((*param_5 >> 0x2d & 1) != 0)) {
    local_80 = (uint)*param_5 & 0x3f;
    local_90 = (char *)CONCAT44(local_90._4_4_,iVar4);
    local_98 = local_68;
    local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_78 = param_6;
    FUN_140b08b70(param_1,uVar11,param_4,plVar6);
    if ((char)local_64 != '\0') {
      local_80 = (uint)*param_5 & 0x3f;
      local_90 = (char *)CONCAT44(local_90._4_4_,iVar4);
      local_98 = local_68;
      local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
      local_78 = param_6;
      FUN_140b08b70(param_1,uVar11,param_4,plVar6);
    }
  }
LAB_140b06f5c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b0770a FUN_140b0770a body=993 status=ok
// SIG undefined FUN_140b0770a(void)

void FUN_140b0770a(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,
                  undefined8 param_9)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8 [8];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b0 = &local_f8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if (*(longlong *)(param_4 + 0x10) == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),
                     *(undefined1 *)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x28) + 0x246)) &
            0xffffffffffffff40;
    uVar7 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 6);
  }
  local_1a8 = &local_118;
  local_1b8 = &local_108;
  cVar4 = FUN_1447e3edc(param_4,*param_3,*(undefined4 *)(param_1 + 0x20),uVar7);
  lVar3 = DAT_14c9c7c48;
  if (cVar4 == '\0') goto LAB_140b079e4;
  local_158 = *(undefined4 *)(param_1 + 0x40);
  uStack_154 = *(undefined4 *)(param_1 + 0x44);
  lStack_150 = *(longlong *)(param_1 + 0x48);
  local_148 = *(undefined4 *)(param_1 + 0x50);
  uStack_144 = *(undefined4 *)(param_1 + 0x54);
  uStack_140 = *(undefined4 *)(param_1 + 0x58);
  uStack_13c = *(undefined4 *)(param_1 + 0x5c);
  local_138 = *(undefined4 *)(param_1 + 0x60);
  uStack_134 = *(undefined4 *)(param_1 + 100);
  uStack_130 = *(undefined4 *)(param_1 + 0x68);
  uStack_12c = *(undefined4 *)(param_1 + 0x6c);
  local_128 = *(undefined4 *)(param_1 + 0x70);
  uStack_124 = *(undefined4 *)(param_1 + 0x74);
  uStack_120 = *(undefined4 *)(param_1 + 0x78);
  uStack_11c = *(undefined4 *)(param_1 + 0x7c);
  local_160 = param_3;
  if (*(char *)(param_1 + 0x89) == '\0') {
    if (*(char *)(param_1 + 0x8a) == '\0') {
      lStack_150 = DAT_14c9c7c60;
      if (param_7 == '\0') {
        lStack_150 = DAT_14c9c7c78;
      }
      if (lStack_150 == 0) {
        lStack_150 = 0;
        uStack_120 = 0;
      }
      else {
        LOCK();
        *(int *)(lStack_150 + 8) = *(int *)(lStack_150 + 8) + 1;
        UNLOCK();
        LOCK();
        puVar1 = (uint *)(lStack_150 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
joined_r0x000140b07a81:
        uStack_120 = 0;
        if ((uVar2 & 0x3fffffff) == 1) {
          uStack_120 = 0;
          FUN_144a54812();
        }
      }
    }
    else {
      if (DAT_14c9c7c48 != 0) {
        LOCK();
        *(int *)(DAT_14c9c7c48 + 8) = *(int *)(DAT_14c9c7c48 + 8) + 1;
        UNLOCK();
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        lStack_150 = lVar3;
        goto joined_r0x000140b07a81;
      }
      lStack_150 = 0;
      uStack_120 = 0;
    }
  }
  uVar6 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_50 = 1;
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_68 = 0xb;
  local_58 = 1;
  local_56 = 1;
  local_54 = 0x22;
  local_57 = ((uint)local_60 >> 0xc & 1) == 0;
  local_178 = *(undefined4 *)(param_1 + 8);
  local_170 = param_9;
  local_180 = 1;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = param_8;
  local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,param_6);
  local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,param_5);
  local_1b8 = &local_108;
  local_55 = local_57;
  FUN_140b07aec(local_160,param_4,&local_158);
  lVar3 = DAT_14c9c4790;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar5 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar5 ^ 1);
  }
  if (0 < *(int *)(lVar3 + uVar6 * 4)) {
    lStack_150 = DAT_14c9c9ad0;
    uStack_120 = 0;
    *(undefined1 *)((longlong)&local_b8 + (local_b8 & 0xffffffff) + 4) = 2;
    local_a8[local_b8 & 0xffffffff] = 9;
    local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
    local_178 = *(undefined4 *)(param_1 + 8);
    local_170 = param_9;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_1a0 = param_8;
    local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,param_6);
    local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,param_5);
    local_1b8 = &local_108;
    local_180 = 1;
    FUN_140b07aec(local_160,param_4);
  }
LAB_140b079e4:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b07aec FUN_140b07aec body=2471 status=ok
// SIG undefined FUN_140b07aec(void)

/* WARNING: Removing unreachable block (ram,0x000140b082b0) */

void FUN_140b07aec(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,undefined4 param_8,byte param_9,
                  undefined1 param_10,undefined1 param_11,byte param_12,uint param_13,
                  longlong *param_14)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_4a8 [32];
  uint *local_488;
  undefined1 *local_480;
  longlong local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  short local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar3 = FUN_1406917e6();
  if (cVar3 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    bVar5 = 2;
    if ((param_9 & 2) == 0) {
      bVar5 = param_9 & 1;
    }
    local_1ac = param_8;
    if (param_1[1] == 0 || bVar5 != 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0xffffffff,&local_310);
      FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238);
    if (param_6 == 0) {
      puVar8 = &DAT_14c9c0e48;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e60;
      }
      puVar7 = &DAT_14c9c0e78;
    }
    else if (param_6 == 1) {
      puVar8 = &DAT_14c9c0e00;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e18;
      }
      puVar7 = &DAT_14c9c0e30;
    }
    else {
      puVar8 = &DAT_14c9c0d58;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0de8;
      }
      puVar7 = &DAT_14c9c0da0;
    }
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    uStack_1d0 = *(undefined8 *)(puVar7 + 0x10);
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar6 = (**(code **)(*param_2 + 0x490))(param_2);
    if (uVar6 < 4) {
      uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
    }
    else {
      uVar4 = 0;
      if ((uVar6 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar4,(undefined1)local_1af);
    cVar3 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar4);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_240;
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar2 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_488 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_480 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_13,lVar2);
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        local_470 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_488 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_480 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_13,local_470);
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = param_10;
    local_24d = param_11;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = (ushort)param_12 << 8;
  local_70 = param_13 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar5 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar5 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_14[1];
  *(uint *)(param_14 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_14 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_14,iVar1);
  }
  lVar2 = *param_14;
  _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b08494 FUN_140b08494 body=653 status=ok
// SIG undefined FUN_140b08494(void)

void FUN_140b08494(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,char param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_178 = &local_118;
  local_118 = 0;
  uStack_110 = 0;
  cVar4 = FUN_140b08722(param_4,*param_3,&local_108);
  if (cVar4 != '\0') {
    local_158 = *(undefined4 *)(param_1 + 0x40);
    uStack_154 = *(undefined4 *)(param_1 + 0x44);
    lStack_150 = *(longlong *)(param_1 + 0x48);
    local_148 = *(undefined4 *)(param_1 + 0x50);
    uStack_144 = *(undefined4 *)(param_1 + 0x54);
    uStack_140 = *(undefined4 *)(param_1 + 0x58);
    uStack_13c = *(undefined4 *)(param_1 + 0x5c);
    local_138 = *(undefined4 *)(param_1 + 0x60);
    uStack_134 = *(undefined4 *)(param_1 + 100);
    uStack_130 = *(undefined4 *)(param_1 + 0x68);
    uStack_12c = *(undefined4 *)(param_1 + 0x6c);
    local_128 = *(undefined4 *)(param_1 + 0x70);
    uStack_124 = *(undefined4 *)(param_1 + 0x74);
    uStack_120 = *(undefined4 *)(param_1 + 0x78);
    uStack_11c = *(undefined4 *)(param_1 + 0x7c);
    if (*(char *)(param_1 + 0x89) == '\0') {
      lStack_150 = DAT_14c9c7c48;
      if ((*(char *)(param_1 + 0x8a) == '\0') && (lStack_150 = DAT_14c9c7c78, param_6 != '\0')) {
        lStack_150 = DAT_14c9c7c60;
      }
      if (lStack_150 == 0) {
        lStack_150 = 0;
        uStack_120 = 0;
      }
      else {
        LOCK();
        *(int *)(lStack_150 + 8) = *(int *)(lStack_150 + 8) + 1;
        UNLOCK();
        uStack_120 = 0;
        LOCK();
        puVar1 = (uint *)(lStack_150 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    uVar6 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = 1;
    local_60 = *(undefined8 *)(param_2 + 0x38);
    local_68 = 0xb;
    local_58 = 1;
    local_56 = 1;
    local_54 = 0x22;
    local_57 = ((uint)local_60 >> 0xc & 1) == 0;
    local_168 = *(undefined4 *)(param_1 + 8);
    local_160 = param_7;
    local_170 = param_5;
    local_178 = &local_108;
    local_55 = local_57;
    FUN_140b0a494(param_3,param_4,&local_158);
    lVar3 = DAT_14c9c4790;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) != 0x40000002) {
      bVar5 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar5 ^ 1);
    }
    if (0 < *(int *)(lVar3 + uVar6 * 4)) {
      lStack_150 = DAT_14c9c9ad0;
      uStack_120 = 0;
      local_b8 = CONCAT35(local_b8._5_3_,0x200000000);
      local_a8 = 9;
      local_b8 = CONCAT44(local_b8._4_4_,1);
      local_168 = *(undefined4 *)(param_1 + 8);
      local_160 = param_7;
      local_170 = param_5;
      local_178 = &local_108;
      FUN_140b0a494(param_3,param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b08722 FUN_140b08722 body=298 status=ok
// SIG undefined FUN_140b08722(void)

void FUN_140b08722(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0 [12];
  undefined4 auStack_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_c0,0,0x90);
  FUN_1400cef80();
  local_c0[DAT_14c9c4848] = &DAT_14c9c4800;
  auStack_60[DAT_14c9c4848] = 0;
  local_c8 = &DAT_14c9c4e10;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,&local_c8,param_2);
  if (cVar1 != '\0') {
    if (lStack_130 != 0) {
      *param_5 = lStack_130;
      param_5[1] = local_138;
    }
    if (local_128 != 0) {
      *param_3 = local_128;
      param_3[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_4 = lStack_110;
      param_4[1] = local_138;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0884e FUN_140b0884e body=800 status=ok
// SIG undefined FUN_140b0884e(void)

void FUN_140b0884e(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined4 param_5,char param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8 [8];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_1a0 = &local_f8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if (*(longlong *)(param_4 + 0x10) == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),
                     *(undefined1 *)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x28) + 0x246)) &
            0xffffffffffffff40;
    uVar7 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 6);
  }
  local_198 = &local_118;
  local_1a8 = &local_108;
  cVar4 = FUN_1400cee52(param_4,*param_3,*(undefined4 *)(param_1 + 0x20),uVar7);
  if (cVar4 != '\0') {
    local_158 = *(undefined4 *)(param_1 + 0x40);
    uStack_154 = *(undefined4 *)(param_1 + 0x44);
    lStack_150 = *(longlong *)(param_1 + 0x48);
    local_148 = *(undefined4 *)(param_1 + 0x50);
    uStack_144 = *(undefined4 *)(param_1 + 0x54);
    uStack_140 = *(undefined4 *)(param_1 + 0x58);
    uStack_13c = *(undefined4 *)(param_1 + 0x5c);
    local_138 = *(undefined4 *)(param_1 + 0x60);
    uStack_134 = *(undefined4 *)(param_1 + 100);
    uStack_130 = *(undefined4 *)(param_1 + 0x68);
    uStack_12c = *(undefined4 *)(param_1 + 0x6c);
    local_128 = *(undefined4 *)(param_1 + 0x70);
    uStack_124 = *(undefined4 *)(param_1 + 0x74);
    uStack_120 = *(undefined4 *)(param_1 + 0x78);
    uStack_11c = *(undefined4 *)(param_1 + 0x7c);
    if (*(char *)(param_1 + 0x89) == '\0') {
      lStack_150 = DAT_14c9c7c48;
      if ((*(char *)(param_1 + 0x8a) == '\0') && (lStack_150 = DAT_14c9c7c60, param_6 == '\0')) {
        lStack_150 = DAT_14c9c7c78;
      }
      if (lStack_150 == 0) {
        lStack_150 = 0;
        uStack_120 = 0;
      }
      else {
        LOCK();
        *(int *)(lStack_150 + 8) = *(int *)(lStack_150 + 8) + 1;
        UNLOCK();
        uStack_120 = 0;
        LOCK();
        puVar1 = (uint *)(lStack_150 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    uVar6 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_50 = 1;
    local_60 = *(undefined8 *)(param_2 + 0x38);
    local_68 = 0xb;
    local_58 = 1;
    local_56 = 1;
    local_54 = 0x22;
    local_57 = ((uint)local_60 >> 0xc & 1) == 0;
    local_168 = *(undefined4 *)(param_1 + 8);
    local_160 = param_7;
    local_170 = 1;
    local_178 = 0;
    local_180 = 0;
    local_190 = 0;
    local_198 = (undefined8 *)CONCAT44(local_198._4_4_,param_5);
    local_188 = 1;
    local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,2);
    local_1a8 = &local_108;
    local_55 = local_57;
    FUN_140b09aec(param_3,param_4,&local_158);
    lVar3 = DAT_14c9c4790;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) != 0x40000002) {
      bVar5 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar5 ^ 1);
    }
    if (0 < *(int *)(lVar3 + uVar6 * 4)) {
      lStack_150 = DAT_14c9c9ad0;
      uStack_120 = 0;
      *(undefined1 *)((longlong)&local_b8 + (local_b8 & 0xffffffff) + 4) = 2;
      local_a8[local_b8 & 0xffffffff] = 9;
      local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
      local_168 = *(undefined4 *)(param_1 + 8);
      local_160 = param_7;
      local_178 = 0;
      local_180 = 0;
      local_190 = 0;
      local_198 = (undefined8 *)CONCAT44(local_198._4_4_,param_5);
      local_170 = 1;
      local_188 = 1;
      local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,2);
      local_1a8 = &local_108;
      FUN_140b09aec(param_3,param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b08b70 FUN_140b08b70 body=907 status=ok
// SIG undefined FUN_140b08b70(void)

void FUN_140b08b70(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,
                  undefined8 param_9)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = &local_f8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if (*(longlong *)(param_4 + 0x10) == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),
                     *(undefined1 *)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x28) + 0x246)) &
            0xffffffffffffff40;
    uVar7 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 6);
  }
  local_190 = &local_118;
  cVar4 = FUN_140b08efc(param_4,*param_3,uVar7,&local_108);
  lVar3 = DAT_14c9c7c48;
  if (cVar4 == '\0') goto LAB_140b08e09;
  local_158 = *(undefined4 *)(param_1 + 0x40);
  uStack_154 = *(undefined4 *)(param_1 + 0x44);
  lStack_150 = *(longlong *)(param_1 + 0x48);
  local_148 = *(undefined4 *)(param_1 + 0x50);
  uStack_144 = *(undefined4 *)(param_1 + 0x54);
  uStack_140 = *(undefined4 *)(param_1 + 0x58);
  uStack_13c = *(undefined4 *)(param_1 + 0x5c);
  local_138 = *(undefined4 *)(param_1 + 0x60);
  uStack_134 = *(undefined4 *)(param_1 + 100);
  uStack_130 = *(undefined4 *)(param_1 + 0x68);
  uStack_12c = *(undefined4 *)(param_1 + 0x6c);
  local_128 = *(undefined4 *)(param_1 + 0x70);
  uStack_124 = *(undefined4 *)(param_1 + 0x74);
  uStack_120 = *(undefined4 *)(param_1 + 0x78);
  uStack_11c = *(undefined4 *)(param_1 + 0x7c);
  local_160 = param_3;
  if (*(char *)(param_1 + 0x89) == '\0') {
    if (*(char *)(param_1 + 0x8a) == '\0') {
      lStack_150 = DAT_14c9c7c78;
      if (param_7 != '\0') {
        lStack_150 = DAT_14c9c7c60;
      }
      if (lStack_150 == 0) {
        lStack_150 = 0;
        uStack_120 = 0;
      }
      else {
        LOCK();
        *(int *)(lStack_150 + 8) = *(int *)(lStack_150 + 8) + 1;
        UNLOCK();
        LOCK();
        puVar1 = (uint *)(lStack_150 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
joined_r0x000140b08e97:
        uStack_120 = 0;
        if ((uVar2 & 0x3fffffff) == 1) {
          uStack_120 = 0;
          FUN_144a54812();
        }
      }
    }
    else {
      if (DAT_14c9c7c48 != 0) {
        LOCK();
        *(int *)(DAT_14c9c7c48 + 8) = *(int *)(DAT_14c9c7c48 + 8) + 1;
        UNLOCK();
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        lStack_150 = lVar3;
        goto joined_r0x000140b08e97;
      }
      lStack_150 = 0;
      uStack_120 = 0;
    }
  }
  uVar6 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_50 = 1;
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_68 = 0xb;
  local_58 = 1;
  local_56 = 1;
  local_54 = 0x22;
  local_57 = ((uint)local_60 >> 0xc & 1) == 0;
  local_178 = *(undefined4 *)(param_1 + 8);
  local_170 = param_9;
  local_180 = param_8;
  local_188 = param_6;
  local_190 = (undefined8 *)CONCAT44(local_190._4_4_,param_5);
  local_198 = &local_108;
  local_55 = local_57;
  FUN_140b091b2(local_160,param_4,&local_158);
  lVar3 = DAT_14c9c4790;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar5 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar5 ^ 1);
  }
  if (0 < *(int *)(lVar3 + uVar6 * 4)) {
    lStack_150 = DAT_14c9c9ad0;
    uStack_120 = 0;
    local_b8 = CONCAT35(local_b8._5_3_,0x200000000);
    local_a8 = 9;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_178 = *(undefined4 *)(param_1 + 8);
    local_170 = param_9;
    local_180 = param_8;
    local_188 = param_6;
    local_190 = (undefined8 *)CONCAT44(local_190._4_4_,param_5);
    local_198 = &local_108;
    FUN_140b091b2(local_160,param_4);
  }
LAB_140b08e09:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b08efc FUN_140b08efc body=692 status=ok
// SIG undefined FUN_140b08efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b08efc(longlong *param_1,longlong param_2,char param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 local_180;
  code *local_178;
  code *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c0;
  undefined8 local_b8 [12];
  undefined4 auStack_58 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memset(local_b8,0,0x90);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c49d0) {
    FUN_144b3d300(&DAT_14c9c49d0);
    if (DAT_14c9c49d0 == -1) {
      FUN_1456cbdfe();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_14714d7d2;
      local_168 = FUN_14175f93a;
      local_170 = FUN_14714d7d6;
      local_178 = FUN_14714d7fe;
      local_190 = L"Main";
      local_198 = L"/Engine/Private/DepthOnlyVertexShader.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 0;
      FUN_140db5666(&DAT_14c9c4928,2,&DAT_14c9c48c0,L"TDepthOnlyVS<false>");
      _DAT_14c9c4928 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb454);
      _Init_thread_footer(&DAT_14c9c49d0);
    }
  }
  local_b8[DAT_14c9c4970] = &DAT_14c9c4928;
  auStack_58[DAT_14c9c4970] = 0;
  cVar1 = FUN_1447e4184(param_1,0,-1 < *(short *)(param_2 + 0x28));
  if ((cVar1 != '\0') && (param_3 == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (cVar1 == '\0') {
      local_c0 = &DAT_14c9c4d60;
      goto LAB_140b08fbc;
    }
  }
  FUN_145771f0a();
  local_b8[DAT_14c9c4a98] = &DAT_14c9c4a50;
  auStack_58[DAT_14c9c4a98] = 0;
  local_c0 = &DAT_14c9c4f70;
LAB_140b08fbc:
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,&local_c0,param_2);
  if (cVar1 != '\0') {
    if (lStack_130 != 0) {
      *param_6 = lStack_130;
      param_6[1] = local_138;
    }
    if (local_128 != 0) {
      *param_4 = local_128;
      param_4[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_5 = lStack_110;
      param_5[1] = local_138;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b091b2 FUN_140b091b2 body=2361 status=ok
// SIG undefined FUN_140b091b2(void)

/* WARNING: Removing unreachable block (ram,0x000140b0990c) */

void FUN_140b091b2(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,undefined4 param_8,uint param_9,
                  longlong *param_10)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_4a8 [32];
  uint *local_488;
  undefined1 *local_480;
  longlong *local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined2 local_24e;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar2 = FUN_1406917e6();
  if (cVar2 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    local_1ac = param_8;
    lVar6 = param_1[1];
    local_470 = param_1;
    if (lVar6 == 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0,&local_310);
      lVar6 = FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238,lVar6);
    puVar8 = &DAT_14c9c0e10;
    if (param_7 == 2) {
      puVar8 = &DAT_14c9c0e28;
    }
    puVar9 = &DAT_14c9c0d68;
    if (param_7 == 2) {
      puVar9 = &DAT_14c9c0df8;
    }
    puVar7 = &DAT_14c9c0e40;
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    puVar8 = &DAT_14c9c0db0;
    if (param_7 != 0) {
      puVar8 = puVar9;
    }
    if (param_6 == 1) {
      puVar8 = puVar7;
    }
    uStack_1d0 = *puVar8;
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar5 = (**(code **)(*param_2 + 0x490))(param_2);
    param_1 = local_470;
    if (uVar5 < 4) {
      uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar5 << 3) & 0x1f));
    }
    else {
      uVar3 = 0;
      if ((uVar5 < 7) && (uVar3 = 0, DAT_14ca84f33 != '\0')) {
        uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar5 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar3,(undefined1)local_1af);
    cVar2 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar3);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_240;
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar6 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_488 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_480 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          param_1 = local_470;
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_9,lVar6);
          param_1 = local_470;
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar6 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_488 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_480 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          param_1 = local_470;
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_9,lVar6);
          param_1 = local_470;
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = 0;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = 0x100;
  local_70 = param_9 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar4 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar4 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_10[1];
  *(uint *)(param_10 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_10 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_10,iVar1);
  }
  lVar6 = *param_10;
  _Dst = (void *)(lVar6 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar6 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b09aec FUN_140b09aec body=2471 status=ok
// SIG undefined FUN_140b09aec(void)

/* WARNING: Removing unreachable block (ram,0x000140b0a2b0) */

void FUN_140b09aec(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,undefined4 param_8,byte param_9,
                  undefined1 param_10,undefined1 param_11,byte param_12,uint param_13,
                  longlong *param_14)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_4a8 [32];
  uint *local_488;
  undefined1 *local_480;
  longlong local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  short local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar3 = FUN_1406917e6();
  if (cVar3 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    bVar5 = 2;
    if ((param_9 & 2) == 0) {
      bVar5 = param_9 & 1;
    }
    local_1ac = param_8;
    if (param_1[1] == 0 || bVar5 != 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0xffffffff,&local_310);
      FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238);
    if (param_6 == 0) {
      puVar8 = &DAT_14c9c0e48;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e60;
      }
      puVar7 = &DAT_14c9c0e78;
    }
    else if (param_6 == 1) {
      puVar8 = &DAT_14c9c0e00;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e18;
      }
      puVar7 = &DAT_14c9c0e30;
    }
    else {
      puVar8 = &DAT_14c9c0d58;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0de8;
      }
      puVar7 = &DAT_14c9c0da0;
    }
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    uStack_1d0 = *(undefined8 *)(puVar7 + 0x10);
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar6 = (**(code **)(*param_2 + 0x490))(param_2);
    if (uVar6 < 4) {
      uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
    }
    else {
      uVar4 = 0;
      if ((uVar6 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar4,(undefined1)local_1af);
    cVar3 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar4);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_240;
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar2 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_488 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_480 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_13,lVar2);
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        local_470 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_488 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_480 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_13,local_470);
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = param_10;
    local_24d = param_11;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = (ushort)param_12 << 8;
  local_70 = param_13 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar5 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar5 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_14[1];
  *(uint *)(param_14 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_14 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_14,iVar1);
  }
  lVar2 = *param_14;
  _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0a494 FUN_140b0a494 body=2237 status=ok
// SIG undefined FUN_140b0a494(void)

/* WARNING: Removing unreachable block (ram,0x000140b0ab75) */

void FUN_140b0a494(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,uint param_7,longlong *param_8)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_498 [32];
  uint *local_478;
  undefined1 *local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined2 local_24e;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar3 = FUN_1406917e6();
  if (cVar3 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1ac = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    local_288 = 0x1100000000;
    (**(code **)(*param_1 + 0x48))(1,&local_310);
    uVar7 = FUN_14486d71a(&local_310);
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238,uVar7,&local_310);
    puVar9 = &DAT_14c9c0d58;
    if (param_6 == 2) {
      puVar9 = &DAT_14c9c0de8;
    }
    puVar8 = &DAT_14c9c0da0;
    if (param_6 != 0) {
      puVar8 = puVar9;
    }
    uStack_1d0 = *(undefined8 *)(puVar8 + 0x10);
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar6 = (**(code **)(*param_2 + 0x490))(param_2);
    if (uVar6 < 4) {
      uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
    }
    else {
      uVar4 = 0;
      if ((uVar6 < 7) && (uVar4 = 0, DAT_14ca84f33 != '\0')) {
        uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar4,(undefined1)local_1af);
    cVar3 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar4);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      uStack_1a8 = (undefined4)local_240;
      uStack_1a4 = (undefined4)((ulonglong)local_240 >> 0x20);
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar2 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_478 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_470 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_7,lVar2);
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar2 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_478 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_470 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_7,lVar2);
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = 0;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = 0x100;
  local_70 = param_7 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar5 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar5 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_8[1];
  *(uint *)(param_8 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_8 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_8,iVar1);
  }
  lVar2 = *param_8;
  _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0ad52 FUN_140b0ad52 body=97 status=ok
// SIG undefined FUN_140b0ad52(void)

void FUN_140b0ad52(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_140b0adb4();
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x148))) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x140);
      uVar4 = FUN_1433d8eb0(lVar2,*(undefined8 *)(lVar1 + lVar3 * 8));
      FUN_14347fe0c(lVar2,*(undefined8 *)(lVar1 + lVar3 * 8),uVar4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x148));
  }
  return;
}



// FUNCTION 140b0adb4 FUN_140b0adb4 body=93 status=ok
// SIG undefined FUN_140b0adb4(void)

undefined8 FUN_140b0adb4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140b0ae12();
  if (((param_1 != 0) && (lVar1 != 0)) && ((longlong)*(int *)(lVar1 + 0x148) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x140);
    lVar1 = (longlong)*(int *)(lVar1 + 0x148) * 0x48;
    do {
      if (puVar2[7] == param_1) {
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
        return *puVar2;
      }
      puVar2 = puVar2 + 9;
      lVar1 = lVar1 + -0x48;
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 140b0ae12 FUN_140b0ae12 body=73 status=ok
// SIG undefined FUN_140b0ae12(void)

longlong FUN_140b0ae12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_140b0ae5c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140b0ae5c FUN_140b0ae5c body=228 status=ok
// SIG undefined FUN_140b0ae5c(void)

longlong FUN_140b0ae5c(void)

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
  if (DAT_14cb267b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1438b245c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147f86b2e;
    local_40 = FUN_14181b28f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXComponent",&DAT_14cb267b8,FUN_146449d44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb267b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0af46 FUN_140b0af46 body=26 status=ok
// SIG undefined FUN_140b0af46(void)

void FUN_140b0af46(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_140d72879();
  uVar1 = FUN_1401e6c61();
  FUN_140b0af60(param_1,uVar1);
  return;
}



// FUNCTION 140b0af60 FUN_140b0af60 body=624 status=ok
// SIG undefined FUN_140b0af60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140b0af60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar7 = 0;
  if (param_2 == 0) goto LAB_140b0aff8;
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (lVar6 == 0) {
    uVar4 = FUN_145d10d9a();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar6;
  }
  plVar1 = (longlong *)(param_2 + 0x48);
  lVar5 = *(longlong *)(param_2 + 0x58);
  if (lVar5 == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_140b0aff8;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    iVar7 = 0;
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      goto LAB_140b0aff8;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_2 + 0x58) = lVar5;
    if (lVar5 == 0) goto LAB_140b0aff8;
    lVar6 = *(longlong *)(param_2 + 0x50);
  }
  if (lVar6 == 0) {
    uVar4 = FUN_145d10d9a();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar6;
    lVar5 = *(longlong *)(param_2 + 0x58);
    if (lVar5 == 0) {
      if (*plVar1 == 0) {
        lVar5 = 0;
        goto LAB_140b0b100;
      }
      iVar8 = _DAT_00000028;
      if (lVar6 != 0) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_2 + 0x58) = lVar5;
        lVar6 = *(longlong *)(param_2 + 0x50);
        goto LAB_140b0b100;
      }
LAB_140b0b176:
      uVar4 = FUN_145d10d9a();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(param_2 + 0x50) = lVar6;
      lVar5 = *(longlong *)(param_2 + 0x58);
    }
    else {
LAB_140b0b100:
      iVar8 = *(int *)(lVar5 + 0x28);
      if (lVar6 == 0) goto LAB_140b0b176;
    }
    if (lVar5 == 0) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      lVar5 = 0;
      if ((lVar6 != 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_2 + 0x58) = lVar5;
      }
    }
  }
  else {
    iVar8 = *(int *)(lVar5 + 0x28);
  }
  puVar9 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(lVar5 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar6 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar6);
    DAT_14c947fe0 = lVar6;
  }
  FUN_140045924(DAT_14c947fe0,&local_38,puVar9,1);
  iVar7 = 0x46;
  if (DAT_14cbc5658 != local_38) {
    iVar7 = iVar8;
  }
  if (iVar8 < iVar7) {
    iVar7 = iVar8;
  }
LAB_140b0aff8:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 140b0b1d2 FUN_140b0b1d2 body=103 status=ok
// SIG undefined FUN_140b0b1d2(void)

ulonglong FUN_140b0b1d2(longlong param_1)

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
LAB_140b0b21c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140b0b21c;
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



// FUNCTION 140b0b23a FUN_140b0b23a body=36 status=ok
// SIG undefined FUN_140b0b23a(void)

void FUN_140b0b23a(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140b0b25e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x70);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 140b0b25e FUN_140b0b25e body=348 status=ok
// SIG undefined FUN_140b0b25e(void)

undefined8 FUN_140b0b25e(longlong param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar6;
  longlong *plVar5;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  plVar5 = *(longlong **)(param_2 + 2);
  if ((plVar5 == (longlong *)0x0) || (param_2[1] == 0)) {
switchD_140b0b37e_default:
    return 0;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return 0;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(uint *)(lVar3 + 0x10) != param_2[1]) {
    return 0;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return 0;
  }
  if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_1447a1f2e) {
    plVar5 = plVar5 + 0xd9;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
  }
  cVar2 = FUN_14486eb0e(plVar5,param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = FUN_140280ec4(param_2);
    uVar4 = FUN_141362ac2(uVar4,*(undefined1 *)(param_1 + 0x11));
    return uVar4;
  }
  cVar2 = *(char *)(param_1 + 0x18);
  lVar3 = FUN_140280ec4(param_2);
  if (cVar2 == '\x01') {
    fVar9 = *(float *)(lVar3 + 0x30) - *(float *)(lVar3 + 0x24);
    fVar8 = 0.0;
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      fVar8 = (*(float *)(lVar3 + 200) - *(float *)(lVar3 + 0x24)) / fVar9;
    }
  }
  else {
    fVar8 = *(float *)(lVar3 + 200);
  }
  uVar6 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_140b0b37e::switchdataD_14b42ab9c +
           (longlong)(int)(&switchD_140b0b37e::switchdataD_14b42ab9c)[*(byte *)(param_1 + 0x10) - 1]
           ) >> 8);
  switch((uint)*(byte *)(param_1 + 0x10)) {
  case 1:
    fVar9 = *(float *)(param_1 + 0x14);
    bVar7 = fVar8 < *(float *)(param_1 + 0x14);
    break;
  case 2:
    bVar7 = fVar8 < *(float *)(param_1 + 0x14);
    goto LAB_140b0b3ab;
  case 3:
    fVar9 = *(float *)(param_1 + 0x14);
    bVar7 = fVar9 < fVar8;
    break;
  case 4:
    bVar7 = *(float *)(param_1 + 0x14) < fVar8;
LAB_140b0b3ab:
    return CONCAT71(uVar6,!bVar7);
  default:
    goto switchD_140b0b37e_default;
  }
  return CONCAT71(uVar6,!bVar7 && fVar9 != fVar8);
}



// FUNCTION 140b0b416 FUN_140b0b416 body=2423 status=ok
// SIG undefined FUN_140b0b416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b0b416(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  byte bVar19;
  undefined4 **ppuVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_138 [44];
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 *local_100;
  longlong local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined4 local_dc;
  undefined4 *local_d8 [4];
  undefined4 **local_b8;
  ulonglong local_b0;
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  code **local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x3b0) <= (int)param_3)) goto LAB_140b0b5a0;
  local_104 = *(undefined4 *)(param_1 + 0x3a0);
  *(uint *)(param_1 + 0x3a0) = param_3;
  local_100 = *(undefined4 **)(*(longlong *)(param_1 + 0x3a8) + (ulonglong)param_3 * 8);
  *local_100 = (undefined4)DAT_14c872be0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b414c30;
  local_80 = local_a8;
  local_a8[0] = FUN_143dcc42c;
  iVar3 = local_100[6];
  local_f8 = param_1;
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(local_100 + 4);
    puVar1 = local_100 + 0xc;
    lVar15 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar15);
      if ((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 0xd) == param_3)) {
        (**(code **)(*plVar5 + 0x2e8))(plVar5,param_2,puVar1);
        pcVar7 = local_a8[0];
        pppuVar13 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar13 = &local_88;
        }
        local_e8 = plVar5;
        local_dc = param_2;
        local_d8[0] = puVar1;
        uVar8 = (*(code *)(*pppuVar13)[1])();
        (*pcVar7)(uVar8,&local_e8,&local_dc,local_d8);
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar3 * 8 != lVar15);
  }
  lVar4 = local_f8;
  puVar1 = local_100;
  local_100[1] = local_100[10];
  if (0 < (int)local_100[10]) {
    puVar16 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar10 = (uint *)*puVar16;
    local_10c = param_3;
    if (puVar10 != (uint *)0x0) goto LAB_140b0b67b;
    do {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_143dc814b);
      }
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar15 + 0x310);
      *(undefined8 *)(lVar15 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar16 = puVar9;
      FUN_140217a48(puVar16);
      puVar10 = (uint *)*puVar16;
LAB_140b0b67b:
      uVar21 = *(longlong *)(puVar10 + 0x10) + 7;
      uVar12 = puVar10[0x12];
      while( true ) {
        puVar22 = (undefined8 *)(uVar21 & 0xfffffffffffffff8);
        if (puVar22 + 0x17 <= puVar10 + 0x4000) {
          *(undefined8 **)(puVar10 + 0x10) = puVar22 + 0x17;
          puVar10[0x12] = uVar12 + 1;
          uVar12 = 0;
          FUN_1447247dc(puVar22,0);
          *puVar22 = &PTR_FUN_14b414c50;
          uVar21 = 0;
          if (lVar4 != 0) {
            uVar12 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            uVar21 = (ulonglong)*(uint *)(lVar15 + 0x10);
            if (*(uint *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              uVar11 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar11);
              }
              LOCK();
              uVar18 = *(uint *)(lVar15 + 0x10);
              bVar23 = uVar18 == 0;
              if (bVar23) {
                *(uint *)(lVar15 + 0x10) = uVar11;
                uVar18 = 0;
              }
              UNLOCK();
              if (bVar23) {
                uVar18 = uVar11;
              }
              uVar21 = (ulonglong)uVar18;
            }
          }
          puVar22[0x15] = (ulonglong)uVar12 | uVar21 << 0x20;
          *(uint *)(puVar22 + 0x16) = local_10c;
          uVar12 = DAT_14cb85130;
          if (((DAT_14cb85128 != 0x400) || (DAT_14c7585d8 != 0)) &&
             ((DAT_14cb85128 != 0x800 || (DAT_14c7585dc != 0)))) {
            uVar12 = DAT_14cb85128 | _DAT_14cb8512c;
          }
          uVar11 = uVar12 >> 10 & 3;
          if ((uVar12 >> 9 & 1) == 0 || uVar11 < 2) {
            bVar19 = (&DAT_149e38edc)[uVar11];
          }
          else {
            bVar19 = 2;
          }
          uVar21 = (ulonglong)bVar19;
          if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
          }
          puVar22[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar22[9] = puVar22;
          puVar22[10] = puVar22;
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          lVar17 = *(longlong *)(lVar15 + 0x2b8);
          if (lVar17 == 0) {
            uVar21 = 1;
            if (bVar19 != 6) {
              uVar21 = (ulonglong)bVar19;
            }
            uVar8 = 0;
          }
          else {
            if (bVar19 == 6) {
              uVar21 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
            }
            uVar8 = *(undefined8 *)(lVar17 + 0x30);
          }
          puVar22[0xf] = uVar8;
          puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
          *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
          if (puVar22 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
            UNLOCK();
          }
          local_d8[0] = (undefined4 *)CONCAT71(local_d8[0]._1_7_,1);
          FUN_1447439e4(puVar22);
          puVar6 = *(undefined8 **)(puVar1 + 0x1a);
          *(undefined8 **)(puVar1 + 0x1a) = puVar22;
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar6 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
          local_b8 = (undefined4 **)0x0;
          local_b0 = 0x400000001;
          local_d8[0] = *(undefined4 **)(puVar1 + 0x1a);
          if (local_d8[0] != (undefined4 *)0x0) {
            LOCK();
            local_d8[0][2] = local_d8[0][2] + 1;
            UNLOCK();
          }
          puVar10 = (uint *)*puVar16;
          if (puVar10 != (uint *)0x0) goto LAB_140b0b9b4;
          goto LAB_140b0b936;
        }
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar11 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar11 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar16;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar16 = puVar10;
        uVar21 = (longlong)puVar10 + 0x5f;
        uVar12 = 0;
      }
    } while( true );
  }
  goto LAB_140b0b56e;
LAB_140b0b936:
  uVar12 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar12 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar12 | 1;
    __tlregdtor(&LAB_143dc814b);
  }
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar9 = *(undefined4 **)(lVar17 + 0x310);
  *(undefined8 *)(lVar17 + 0x310) = 0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar9 = 0xffffffff;
  *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
  puVar9[0x12] = 0;
  *puVar16 = puVar9;
  FUN_140217a48(puVar16);
  puVar10 = (uint *)*puVar16;
LAB_140b0b9b4:
  puVar22 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar14 = (uint *)(puVar22 + 0x17);
  uVar12 = puVar10[0x12];
  if (puVar14 <= puVar10 + 0x4000) goto LAB_140b0bc83;
  while( true ) {
    *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
    LOCK();
    uVar11 = *puVar10;
    *puVar10 = *puVar10 + uVar12 + 1;
    UNLOCK();
    if ((uVar11 ^ uVar12) != 0xffffffff) break;
    puVar10 = (uint *)*puVar16;
    *puVar10 = 0xffffffff;
    *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
    puVar10[0x12] = 0;
    *puVar16 = puVar10;
    puVar22 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
    puVar14 = (uint *)(puVar22 + 0x17);
    uVar12 = 0;
    if (puVar14 <= puVar10 + 0x4000) {
      uVar12 = 1;
      goto LAB_140b0ba34;
    }
  }
  goto LAB_140b0b936;
LAB_140b0bc83:
  uVar12 = uVar12 + 1;
LAB_140b0ba34:
  *(uint **)(puVar10 + 0x10) = puVar14;
  puVar10[0x12] = uVar12;
  FUN_1447247dc(puVar22,local_d8);
  *puVar22 = &PTR_FUN_14b414c60;
  if (lVar4 == 0) {
    uVar12 = 0;
    uVar21 = 0;
  }
  else {
    uVar12 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    uVar11 = *(uint *)(lVar17 + 0x10);
    if (*(uint *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar18 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar23) {
        local_108 = uVar18;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar18);
        uVar18 = local_108;
      }
      LOCK();
      uVar11 = *(uint *)(lVar17 + 0x10);
      bVar23 = uVar11 == 0;
      if (bVar23) {
        *(uint *)(lVar17 + 0x10) = uVar18;
        uVar11 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar11 = uVar18;
      }
    }
    uVar21 = (ulonglong)uVar11;
  }
  puVar22[0x15] = (ulonglong)uVar12 | uVar21 << 0x20;
  *(uint *)(puVar22 + 0x16) = local_10c;
  if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
  }
  puVar22[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar22[9] = puVar22;
  puVar22[10] = puVar22;
  lVar15 = *(longlong *)(lVar15 + 0x2b8);
  if (lVar15 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar15 + 0x30);
  }
  puVar22[0xf] = uVar8;
  puVar22[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar22 + 0x1c) = 3;
  if (puVar22 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
    UNLOCK();
  }
  local_e8 = (longlong *)CONCAT71(local_e8._1_7_,1);
  FUN_1447439e4(puVar22);
  lVar15 = *(longlong *)(puVar1 + 0x14);
  if (*(char *)(lVar15 + 1) == '\x03') {
    puVar16 = (undefined8 *)**(undefined8 **)(lVar15 + 0x10);
LAB_140b0bb8a:
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
    }
  }
  else {
    puVar16 = (undefined8 *)0x0;
    if ((lVar15 != 0) && (*(char *)(lVar15 + 1) == '\x02')) {
      puVar16 = *(undefined8 **)(lVar15 + 0x10);
      goto LAB_140b0bb8a;
    }
  }
  if (puVar22 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
    UNLOCK();
  }
  local_f0 = puVar22;
  FUN_14002c244(puVar16,&local_f0);
  if (puVar16 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar16 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar16)(puVar16,1);
    }
  }
  if (puVar22 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar22 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar22)(puVar22,1);
    }
  }
  ppuVar20 = local_d8;
  if (local_b8 != (undefined4 **)0x0) {
    ppuVar20 = local_b8;
  }
  FUN_144717c65(ppuVar20,local_b0 & 0xffffffff);
  if (local_b8 != (undefined4 **)0x0) {
    FUN_1400020a8();
  }
LAB_140b0b56e:
  if (local_a8[0] != (code *)0x0) {
    pppuVar13 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar13 = local_98;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  *(undefined4 *)(lVar4 + 0x3a0) = local_104;
LAB_140b0b5a0:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b0bd8e FUN_140b0bd8e body=154 status=ok
// SIG undefined FUN_140b0bd8e(void)

undefined8 * FUN_140b0bd8e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = &PTR_LAB_14b9dd360;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_140b0beb2(puVar3 + 2,iVar1,0);
    FUN_140b0be28(puVar3[2],uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  *puVar3 = &PTR_FUN_14b9dd220;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 140b0be28 FUN_140b0be28 body=137 status=ok
// SIG undefined FUN_140b0be28(void)

void FUN_140b0be28(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14aa2b2b0;
      uVar3 = *(undefined8 *)(param_2 + 0xe + lVar8);
      *(undefined8 *)(param_1 + 8 + lVar8) = *(undefined8 *)(param_2 + 8 + lVar8);
      *(undefined8 *)(param_1 + 0xe + lVar8) = uVar3;
      *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14b517f30;
      puVar1 = (undefined8 *)(param_2 + 0x18 + lVar8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x28 + lVar8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x34 + lVar8);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x18 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x28 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x34 + lVar8);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14b8fbe20;
      puVar1 = (undefined8 *)(param_2 + 0x48 + lVar8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x58 + lVar8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x48 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x58 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      *(undefined8 *)(param_1 + 0x68 + lVar8) = *(undefined8 *)(param_2 + 0x68 + lVar8);
      lVar8 = lVar8 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b0beb2 FUN_140b0beb2 body=229 status=ok
// SIG undefined FUN_140b0beb2(void)

void FUN_140b0beb2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 140b0bf98 FUN_140b0bf98 body=137 status=ok
// SIG undefined FUN_140b0bf98(void)

void FUN_140b0bf98(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((DAT_14c75f420 == '\x01') && (lVar1 = *param_1, lVar1 != 0)) &&
     (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
    if (*(int *)(lVar1 + 8) == 1) {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      lVar2 = *(longlong *)(lVar1 + 0x398);
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x260), lVar4 != 0)) {
        FUN_1401ba9dc(lVar4,*(undefined8 *)(lVar2 + 0x40));
      }
      FUN_140b0c022(uVar3,lVar1);
    }
    else {
      if (*(int *)(lVar1 + 8) != 3) {
        return;
      }
      FUN_140b0c118(*(undefined8 *)(lVar2 + 8),lVar1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 140b0c022 FUN_140b0c022 body=245 status=ok
// SIG undefined FUN_140b0c022(void)

void FUN_140b0c022(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  FUN_1401aa8ae(param_1 + 0x70,lVar1);
  **(undefined1 **)(*(longlong *)(param_2 + 0x10) + 0x20) = 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(longlong *)(param_2 + 0x398) != 0) {
    FUN_1401cf158(param_1);
    *(undefined8 *)(param_2 + 0x398) = 0;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(lVar1 + 0x40) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 8) = 1;
  *puVar2 = &PTR_FUN_149f45dc0;
  puVar2[10] = FUN_142a105bc;
  puVar2[0xc] = 0;
  puVar2[0xe] = &PTR_LAB_149f6af70;
  puVar2[0xf] = lVar1;
  puVar2[0x10] = param_1;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar2);
  return;
}



// FUNCTION 140b0c118 FUN_140b0c118 body=218 status=ok
// SIG undefined FUN_140b0c118(void)

void FUN_140b0c118(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  **(undefined1 **)(lVar1 + 0x20) = 1;
  FUN_1401aa8ae(param_1 + 0x70,lVar1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 8) = 1;
  *puVar2 = &PTR_FUN_149f45dc0;
  puVar2[10] = FUN_142a106c0;
  puVar2[0xc] = 0;
  puVar2[0xe] = &PTR_LAB_149f6af90;
  puVar2[0xf] = param_1 + 0x2b0;
  puVar2[0x10] = lVar1;
  puVar2[0x11] = param_1;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar2);
  return;
}



// FUNCTION 140b0c1f8 FUN_140b0c1f8 body=57 status=ok
// SIG undefined FUN_140b0c1f8(void)

void FUN_140b0c1f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21df8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21df8 = FUN_140002ddd(FUN_14643631c,uVar1,L"GbxBrainTask_Random");
  }
  return;
}



// FUNCTION 140b0c232 FUN_140b0c232 body=230 status=ok
// SIG undefined FUN_140b0c232(void)

void FUN_140b0c232(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xf8) == 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_140b0c31a(*(longlong *)(param_1 + 0x40),&local_30);
    plVar1 = local_28;
    if ((undefined8 *)(param_1 + 0xf8) != &local_30) {
      *(undefined8 *)(param_1 + 0xf8) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x100);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x100) = plVar1;
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
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0c31a FUN_140b0c31a body=881 status=ok
// SIG undefined FUN_140b0c31a(void)

longlong * FUN_140b0c31a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  lVar14 = param_1[0x11];
  param_2[1] = lVar14;
  if (lVar14 != 0) {
    iVar3 = *(int *)(lVar14 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        goto LAB_140b0c356;
      }
      LOCK();
      iVar6 = *(int *)(lVar14 + 8);
      bVar15 = iVar3 == iVar6;
      if (bVar15) {
        *(int *)(lVar14 + 8) = iVar3 + 1;
        iVar6 = iVar3;
      }
      iVar3 = iVar6;
      UNLOCK();
    } while (!bVar15);
    if (param_2[1] != 0) {
      lVar14 = param_1[0x10];
      *param_2 = lVar14;
      goto LAB_140b0c359;
    }
  }
LAB_140b0c356:
  lVar14 = *param_2;
LAB_140b0c359:
  if (lVar14 == 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    (**(code **)(*param_1 + 0x70))(param_1,&local_58);
    iVar3 = (int)uStack_50;
    lVar14 = (longlong)(int)uStack_50;
    iVar6 = 0;
    if (lVar14 != 0) {
      local_98 = local_58;
      local_90 = local_58 + 4;
      iVar6 = 0;
      bVar15 = *local_58 == 0;
      iVar7 = 0;
      do {
        lVar11 = (longlong)iVar7;
        iVar13 = iVar7 + 1;
        if (iVar7 + 1 < iVar3) {
          iVar13 = iVar3;
        }
        plVar10 = local_90 + lVar11 * 4;
        iVar8 = iVar7;
        lVar12 = lVar11;
        do {
          lVar12 = lVar12 + 1;
          iVar9 = iVar13;
          if (lVar14 <= lVar12) break;
          lVar2 = *plVar10;
          iVar8 = iVar8 + 1;
          plVar10 = plVar10 + 4;
          iVar9 = iVar8;
        } while (bVar15 == (lVar2 == 0));
        iVar13 = iVar9 - iVar7;
        if (bVar15 == false) {
          if (iVar6 != iVar7) {
            memmove(local_98 + (longlong)iVar6 * 4,local_98 + lVar11 * 4,(longlong)iVar13 << 5);
          }
          iVar6 = iVar6 + iVar13;
        }
        else {
          FUN_140861e20(local_98 + lVar11 * 4,iVar13);
        }
        bVar15 = (bool)(bVar15 ^ 1);
        iVar7 = iVar9;
      } while (lVar12 < lVar14);
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
      if (0 < iVar6) {
        if (param_1[2] == 0) {
          FUN_1400021e4(param_1 + 0x12,&local_88);
        }
        else {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_1401031ac(param_1[2],0);
        }
        iVar3 = (int)plStack_80 + -1;
        if ((int)plStack_80 == 0) {
          iVar3 = 0;
        }
        FUN_1446f82e2(local_68,iVar3,local_88,1);
        local_70 = DAT_14c9a7920;
        local_60 = 0;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        uVar4 = FUN_14050fd64();
        FUN_140b0c6f6(uVar4,&local_88,&local_70);
        plVar10 = plStack_80;
        if (&local_88 != param_2) {
          *param_2 = local_88;
          local_88 = 0;
          plVar5 = (longlong *)param_2[1];
          if (plStack_80 != plVar5) {
            plStack_80 = (longlong *)0x0;
            param_2[1] = (longlong)plVar10;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar5 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
        }
        plVar10 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_80 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        plVar10 = (longlong *)*param_2;
        if (plVar10 == (longlong *)0x0) {
          lVar14 = 0;
        }
        else {
          (**(code **)(*plVar10 + 0x10))(plVar10,&local_58,0,0);
          FUN_1407d097e(*param_2);
          lVar14 = *param_2;
        }
        param_1[0x10] = lVar14;
        plVar10 = (longlong *)param_2[1];
        plVar5 = (longlong *)param_1[0x11];
        if (plVar5 != plVar10) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar5 = (longlong *)param_1[0x11];
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          param_1[0x11] = (longlong)plVar10;
        }
        iVar6 = (int)uStack_50;
      }
    }
    FUN_140861e20(local_58,iVar6);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b0c68c FUN_140b0c68c body=105 status=ok
// SIG undefined FUN_140b0c68c(void)

void FUN_140b0c68c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  code **local_20;
  undefined1 *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_38;
  local_20 = &local_30;
  local_30 = FUN_142b44648;
  local_10 = &local_20;
  local_18 = &LAB_142b4460a;
  local_38 = param_2;
  FUN_1447c5ba2();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b0c6f6 FUN_140b0c6f6 body=1372 status=ok
// SIG undefined FUN_140b0c6f6(void)

longlong * FUN_140b0c6f6(longlong param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140520a5e(param_1,&local_70);
  if (((local_70 == 0) || (local_68 == (longlong *)0x0)) || ((int)local_68[1] < 1)) {
    plVar6 = (longlong *)FUN_14001cc68(200,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a90a2b0;
    plVar1 = plVar6 + 2;
    FUN_14050fb38(plVar1,param_3,0);
    local_80 = plVar1;
    local_78 = plVar6;
    FUN_140b0cc54(&local_80,plVar1);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
    lVar11 = param_1 + 0x4e8;
    FUN_140510246(lVar11,local_58);
    *(undefined8 *)(local_50 + 4) = *(undefined8 *)(param_3 + 4);
    uVar8 = param_3[1];
    uVar13 = param_3[2];
    uVar16 = param_3[3];
    *local_50 = *param_3;
    local_50[1] = uVar8;
    local_50[2] = uVar13;
    local_50[3] = uVar16;
    *(longlong **)(local_50 + 6) = local_80;
    *(longlong **)(local_50 + 8) = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_78 + 0xc) = *(int *)((longlong)local_78 + 0xc) + 1;
      UNLOCK();
    }
    local_50[10] = 0xffffffff;
    local_5c = local_58[0];
    uVar8 = *local_50;
    uVar13 = local_50[2];
    uVar16 = local_50[3];
    uVar12 = local_50[4];
    uVar14 = local_50[5];
    uVar12 = uVar14 >> 0xd ^
             ((uVar12 << 0x10 | uVar12 & 0xffff) - uVar14) +
             ((uVar12 >> 0x10) << 0x13 | uVar12 >> 0x10) + ((uVar12 & 0xffff) >> 4);
    uVar9 = uVar12 << 8 ^ (-0x61c88647 - uVar14) - uVar12;
    uVar14 = uVar9 >> 0xd ^ (uVar14 - uVar12) - uVar9;
    uVar12 = uVar14 >> 0xc ^ (uVar12 - uVar9) - uVar14;
    uVar9 = uVar12 << 0x10 ^ (uVar9 - uVar14) - uVar12;
    uVar14 = uVar9 >> 5 ^ (uVar14 - uVar12) - uVar9;
    uVar15 = uVar14 >> 3 ^ (uVar12 - uVar9) - uVar14;
    uVar12 = uVar15 << 10 ^ (uVar9 - uVar14) - uVar15;
    uVar12 = uVar12 >> 0xf ^ uVar14 - (uVar15 + uVar12);
    uVar13 = uVar16 >> 0xd ^
             ((uVar13 << 0x10 | uVar13 & 0xffff) - uVar16) +
             ((uVar13 >> 0x10) << 0x13 | uVar13 >> 0x10) + ((uVar13 & 0xffff) >> 4);
    uVar14 = uVar13 << 8 ^ (-0x61c88647 - uVar16) - uVar13;
    uVar16 = uVar14 >> 0xd ^ (uVar16 - uVar13) - uVar14;
    uVar13 = uVar16 >> 0xc ^ (uVar13 - uVar14) - uVar16;
    uVar14 = uVar13 << 0x10 ^ (uVar14 - uVar16) - uVar13;
    uVar16 = uVar14 >> 5 ^ (uVar16 - uVar13) - uVar14;
    uVar9 = uVar16 >> 3 ^ (uVar13 - uVar14) - uVar16;
    uVar13 = uVar9 << 10 ^ (uVar14 - uVar16) - uVar9;
    uVar16 = uVar13 >> 0xf ^ uVar16 - (uVar9 + uVar13);
    uVar13 = uVar16 >> 0xd ^
             ((uVar8 << 0x10 | uVar8 & 0xffff) + ((uVar8 & 0xffff) >> 4) +
             ((uVar8 >> 0x10) << 0x13 | uVar8 >> 0x10)) - uVar16;
    uVar8 = uVar13 << 8 ^ (-0x61c88647 - uVar16) - uVar13;
    uVar14 = uVar8 >> 0xd ^ (uVar16 - uVar13) - uVar8;
    uVar16 = uVar14 >> 0xc ^ (uVar13 - uVar8) - uVar14;
    uVar13 = uVar16 << 0x10 ^ (uVar8 - uVar14) - uVar16;
    uVar8 = uVar13 >> 5 ^ (uVar14 - uVar16) - uVar13;
    uVar16 = uVar8 >> 3 ^ (uVar16 - uVar13) - uVar8;
    uVar13 = uVar16 << 10 ^ (uVar13 - uVar8) - uVar16;
    uVar13 = uVar12 >> 0xd ^ (uVar13 >> 0xf ^ uVar8 - (uVar16 + uVar13)) - uVar12;
    uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar12) - uVar13;
    uVar8 = uVar16 >> 0xd ^ (uVar12 - uVar13) - uVar16;
    uVar13 = uVar8 >> 0xc ^ (uVar13 - uVar16) - uVar8;
    uVar16 = uVar13 << 0x10 ^ (uVar16 - uVar8) - uVar13;
    uVar12 = uVar16 >> 5 ^ (uVar8 - uVar13) - uVar16;
    uVar8 = uVar12 >> 3 ^ (uVar13 - uVar16) - uVar12;
    uVar13 = uVar8 << 10 ^ (uVar16 - uVar12) - uVar8;
    uVar8 = uVar13 >> 0xf ^ uVar12 - (uVar8 + uVar13);
    local_88 = 0;
    cVar5 = FUN_1405101a2(lVar11,uVar8,local_50);
    if (cVar5 == '\0') {
      uVar13 = *(int *)(param_1 + 0x4f0) - *(int *)(param_1 + 0x51c);
      if (uVar13 < 4) {
        iVar10 = 1;
      }
      else {
        uVar7 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((int)uVar13 < 1) || (iVar10 <= *(int *)(param_1 + 0x530))) {
        uVar8 = *(int *)(param_1 + 0x530) - 1U & uVar8;
        local_50[0xb] = uVar8;
        lVar11 = *(longlong *)(param_1 + 0x528);
        if (*(longlong *)(param_1 + 0x528) == 0) {
          lVar11 = param_1 + 0x520;
        }
        local_50[10] = *(uint *)(lVar11 + ((longlong)*(int *)(param_1 + 0x530) - 1U &
                                          (longlong)(int)uVar8) * 4);
        lVar11 = *(longlong *)(param_1 + 0x528);
        if (*(longlong *)(param_1 + 0x528) == 0) {
          lVar11 = param_1 + 0x520;
        }
        *(undefined4 *)
         (lVar11 + ((longlong)*(int *)(param_1 + 0x530) - 1U & (longlong)(int)uVar8) * 4) = local_5c
        ;
      }
      else {
        *(int *)(param_1 + 0x530) = iVar10;
        FUN_140510424(lVar11);
      }
    }
    *param_2 = (longlong)local_80;
    param_2[1] = (longlong)local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
    plVar1 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_78 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_78)(local_78);
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
  else {
    *param_2 = 0;
    param_2[1] = (longlong)local_68;
    iVar10 = (int)local_68[1];
    do {
      if (iVar10 == 0) {
        param_2[1] = 0;
        goto LAB_140b0cb7f;
      }
      LOCK();
      iVar4 = (int)local_68[1];
      bVar17 = iVar10 == iVar4;
      if (bVar17) {
        *(int *)(local_68 + 1) = iVar10 + 1;
        iVar4 = iVar10;
      }
      iVar10 = iVar4;
      UNLOCK();
    } while (!bVar17);
    if (param_2[1] != 0) {
      *param_2 = local_70;
    }
  }
LAB_140b0cb7f:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_68 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b0cc54 FUN_140b0cc54 body=162 status=ok
// SIG undefined FUN_140b0cc54(void)

void FUN_140b0cc54(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140b0cc93;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140b0cc93;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140b0cc93:
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
                    /* WARNING: Could not recover jumptable at 0x000140b0ccf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140b0ccf6 FUN_140b0ccf6 body=15250 status=ok
// SIG undefined FUN_140b0ccf6(void)

void FUN_140b0ccf6(ulonglong param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong **pplVar8;
  DWORD DVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  DWORD dwTlsIndex;
  DWORD DVar17;
  LPVOID pvVar18;
  longlong **pplVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  code *pcVar24;
  uint *puVar25;
  longlong ***ppplVar26;
  uint uVar27;
  ulonglong *puVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  undefined *puVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined8 *puVar38;
  size_t _Size;
  void *pvVar39;
  longlong *plVar40;
  longlong lVar41;
  ulonglong uVar42;
  bool bVar43;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined *local_3d8;
  code *local_3d0;
  longlong *local_3c0;
  undefined8 local_3b8;
  ulonglong local_3b0;
  uint *local_3a8;
  ulonglong *local_3a0;
  ulonglong local_398;
  longlong **local_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  longlong local_360;
  ulonglong local_358;
  int local_34c;
  longlong **local_348;
  undefined8 uStack_340;
  longlong **local_338;
  undefined8 uStack_330;
  int local_320;
  uint local_31c;
  longlong *local_318;
  ulonglong *local_310;
  int local_308;
  undefined4 local_304;
  byte local_300;
  undefined8 local_2f8 [7];
  int local_2bc;
  char local_280;
  undefined8 local_278;
  uint local_270;
  ulonglong local_26c;
  int local_23c [3];
  undefined8 local_230;
  char local_200;
  longlong **local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  longlong **local_180;
  undefined8 local_178;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  puVar28 = *(ulonglong **)(*param_2 + 8);
  uVar21 = puVar28[5];
  uVar36 = *(ulonglong *)(param_1 + 0x38);
  local_200 = '\0';
  bVar10 = *(byte *)(param_1 + 0x70);
  local_3a0 = param_4;
  local_304 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  local_318 = *(longlong **)(param_1 + 0x78);
  local_308 = *(int *)((longlong)local_318 + 0x34);
  local_31c = (uint)param_3[1];
  local_3c0 = param_2;
  local_3b8 = puVar28;
  local_3b0 = param_1;
  local_310 = param_3;
  local_300 = bVar10;
  if ((uVar21 & 0x40) != 0) {
    if ((((uint)*(ulonglong *)(local_318[1] + 0x18) >> 0x18 & 1) != 0) &&
       (((*(ulonglong *)(local_318[1] + 0x18) & 0x40) == 0 || (local_318[0xe] == 0)))) {
      plVar34 = *(longlong **)(*param_2 + 8);
      puVar5 = (ulonglong *)plVar34[1];
      puVar25 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar25) {
        if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar34 + 0x170))(plVar34,&local_31c,4);
        }
        else {
          FUN_14572512c(plVar34,&local_31c);
        }
      }
      else {
        local_31c = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar25;
      }
      uVar27 = local_31c;
      if ((puVar28[5] & 1) != 0) {
        iVar13 = (int)local_310[1];
        if (((iVar13 != 0) && (0 < iVar13)) && ((local_318[7] & 0x1040000000U) == 0)) {
          iVar14 = iVar13;
          if ((local_300 & 1) == 0) {
            uVar36 = *local_310;
          }
          else {
            uVar36 = *local_310;
            param_1 = local_3b0;
            if ((uVar36 & 1) != 0) {
              uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
            }
          }
          do {
            if ((local_318[7] & 0x1000000000U) == 0) {
              (**(code **)(*local_318 + 0x148))(local_318,uVar36);
            }
            uVar36 = uVar36 + (longlong)local_308;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        if (iVar13 != 0 || uVar27 != 0) {
          *(undefined4 *)(local_310 + 1) = 0;
          if ((local_300 & 1) == 0) {
            if (*(uint *)((longlong)local_310 + 0xc) != uVar27) {
              FUN_14474d398(local_310,uVar27);
            }
          }
          else if (*(uint *)((longlong)local_310 + 0xc) != uVar27) {
            FUN_1468c0360(local_310,uVar27,local_308,local_304);
          }
        }
        param_2 = local_3c0;
        uVar36 = local_310[1];
        iVar13 = uVar27 + (int)uVar36;
        *(int *)(local_310 + 1) = iVar13;
        if ((local_300 & 1) == 0) {
          if (*(int *)((longlong)local_310 + 0xc) < iVar13) {
            FUN_14097bbd2();
          }
        }
        else if (*(int *)((longlong)local_310 + 0xc) < iVar13) {
          FUN_1468c03c2(local_310,(int)uVar36,local_308,local_304);
        }
      }
      if ((int)local_310[1] == 0) {
        uVar36 = 0;
      }
      else if ((local_300 & 1) == 0) {
        uVar36 = *local_310;
      }
      else {
        uVar36 = *local_310;
        if ((uVar36 & 1) != 0) {
          uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
        }
      }
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x170))
                (*(longlong **)(*param_2 + 8),uVar36,
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34) * (longlong)(int)local_31c
                );
      goto LAB_140b0efa7;
    }
    plVar34 = *(longlong **)(*param_2 + 8);
    puVar5 = (ulonglong *)plVar34[1];
    puVar25 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar25) {
      if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar34 + 0x170))(plVar34,&local_31c,4);
      }
      else {
        FUN_14572512c(plVar34,&local_31c);
      }
    }
    else {
      local_31c = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar25;
    }
    uVar27 = local_31c;
    if ((puVar28[5] & 1) != 0) {
      uVar36 = (ulonglong)local_31c;
      iVar13 = (int)local_310[1];
      if (((iVar13 != 0) && (0 < iVar13)) && ((local_318[7] & 0x1040000000U) == 0)) {
        iVar14 = iVar13;
        if ((local_300 & 1) == 0) {
          uVar21 = *local_310;
        }
        else {
          uVar21 = *local_310;
          param_1 = local_3b0;
          if ((uVar21 & 1) != 0) {
            uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
          }
        }
        do {
          if ((local_318[7] & 0x1000000000U) == 0) {
            (**(code **)(*local_318 + 0x148))(local_318,uVar21);
          }
          uVar21 = uVar21 + (longlong)local_308;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (iVar13 != 0 || uVar27 != 0) {
        *(undefined4 *)(local_310 + 1) = 0;
        if ((local_300 & 1) == 0) {
          if (*(uint *)((longlong)local_310 + 0xc) != uVar27) {
            FUN_14474d398(local_310,uVar27);
          }
        }
        else if (*(uint *)((longlong)local_310 + 0xc) != uVar27) {
          FUN_1468c0360(local_310,uVar27,local_308,local_304);
        }
      }
      param_2 = local_3c0;
      uVar21 = local_310[1];
      iVar13 = (int)uVar21 + uVar27;
      *(int *)(local_310 + 1) = iVar13;
      if ((local_300 & 1) == 0) {
        if (*(int *)((longlong)local_310 + 0xc) < iVar13) {
          FUN_14097bbd2();
        }
      }
      else if (*(int *)((longlong)local_310 + 0xc) < iVar13) {
        FUN_1468c03c2();
      }
      if (0 < (int)uVar27) {
        if ((int)local_310[1] == 0) {
          pvVar39 = (void *)0x0;
        }
        else {
          if ((local_300 & 1) == 0) {
            uVar42 = *local_310;
          }
          else {
            uVar42 = *local_310;
            param_2 = local_3c0;
            param_1 = local_3b0;
            if ((uVar42 & 1) != 0) {
              uVar42 = (longlong)local_310 + ((longlong)uVar42 >> 0x18);
            }
          }
          pvVar39 = (void *)((longlong)local_308 * (longlong)(int)uVar21 + uVar42);
        }
        if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
          do {
            if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
              (**(code **)(*local_318 + 0x160))();
            }
            else {
              memset(pvVar39,0,
                     (longlong)(int)local_318[6] * (longlong)*(int *)((longlong)local_318 + 0x34));
            }
            pvVar39 = (void *)((longlong)pvVar39 + (longlong)local_308);
            uVar27 = (int)uVar36 - 1;
            uVar36 = (ulonglong)uVar27;
          } while (uVar27 != 0);
        }
        else {
          memset(pvVar39,0,(longlong)local_308 * uVar36);
        }
      }
    }
    puVar28 = local_3b8;
    plVar34 = *(longlong **)(param_1 + 0x78);
    if (plVar34 == (longlong *)0x0 || local_3b8[0xe] != param_1 && param_1 != 0) {
      plVar34 = (longlong *)0x0;
    }
    else if (*(code **)(*local_3b8 + 0x228) == FUN_144a610a4) {
      uVar36 = local_3b8[0xf];
      if (uVar36 == 0) {
        uVar36 = FUN_14001cc68(0x58,0x10);
        *(undefined8 *)(uVar36 + 0x40) = 0;
        *(undefined8 *)(uVar36 + 0x48) = 0x800000000;
        *(undefined4 *)(uVar36 + 0x50) = 0;
        puVar28[0xf] = uVar36;
        iVar13 = 0;
        uVar27 = 8;
      }
      else {
        iVar13 = *(int *)(uVar36 + 0x48);
        uVar27 = *(uint *)(uVar36 + 0x4c);
      }
      *(uint *)(uVar36 + 0x48) = iVar13 + 1U;
      if (uVar27 < iVar13 + 1U) {
        FUN_140b4c3de(uVar36,iVar13);
      }
      uVar21 = *(ulonglong *)(uVar36 + 0x40);
      if (*(ulonglong *)(uVar36 + 0x40) == 0) {
        uVar21 = uVar36;
      }
      *(longlong **)(uVar21 + (longlong)iVar13 * 8) = plVar34;
      iVar13 = *(int *)(uVar36 + 0x50) + 1;
      do {
        iVar14 = iVar13;
        iVar13 = 1;
      } while (iVar14 == 0);
      *(int *)(uVar36 + 0x50) = iVar14;
      local_3b8[0xe] = (ulonglong)plVar34;
      puVar28 = local_3b8;
    }
    else {
      (**(code **)(*local_3b8 + 0x228))(local_3b8,plVar34,(uint)((ulonglong)plVar34[7] >> 0x23) & 1)
      ;
    }
    if (0 < (int)local_31c) {
      lVar41 = 0;
      do {
        if ((int)local_310[1] == 0) {
          lVar37 = 0;
        }
        else {
          if ((local_300 & 1) == 0) {
            uVar36 = *local_310;
          }
          else {
            uVar36 = *local_310;
            if ((uVar36 & 1) != 0) {
              uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
            }
          }
          lVar37 = local_308 * lVar41 + uVar36;
        }
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0xd0))
                  (*(longlong **)(param_1 + 0x78),param_2,lVar37,0);
        lVar41 = lVar41 + 1;
      } while (lVar41 < (int)local_31c);
    }
    if (plVar34 == (longlong *)0x0) goto LAB_140b0efa7;
    pcVar24 = *(code **)(*puVar28 + 0x230);
    if (pcVar24 == (code *)&LAB_1449b19a2) {
      uVar36 = puVar28[0xf];
      *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
      iVar13 = *(int *)(uVar36 + 0x50) + 1;
      do {
        iVar14 = iVar13;
        iVar13 = 1;
      } while (iVar14 == 0);
      *(int *)(uVar36 + 0x50) = iVar14;
      uVar36 = puVar28[0xf];
      if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
        uVar36 = 0;
      }
      else {
        uVar21 = *(ulonglong *)(uVar36 + 0x40);
        if (*(ulonglong *)(uVar36 + 0x40) == 0) {
          uVar21 = uVar36;
        }
        uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
      }
      puVar28[0xe] = uVar36;
      goto LAB_140b0efa7;
    }
    uVar27 = (uint)((ulonglong)plVar34[7] >> 0x20);
LAB_140b0fe41:
    (*pcVar24)(puVar28,plVar34,uVar27 >> 3 & 1);
    goto LAB_140b0efa7;
  }
  uVar36 = uVar36 >> 0x39;
  local_280 = '\0';
  if ((puVar28[5] & 1) != 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar41 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar37 = *(longlong *)(lVar41 + 0xd68);
    if (lVar37 != 0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
        lVar37 = *(longlong *)(lVar41 + 0xd68);
      }
      uVar36 = (ulonglong)*(byte *)(lVar37 + 0x74);
    }
  }
  if ((uVar36 & 1) != 0) {
    if ((puVar28[5] & 1) == 0) {
      local_338 = (longlong **)0x0;
      uStack_330 = (ulonglong *)0x0;
      local_348 = (longlong **)0x0;
      uStack_340 = (ulonglong *)0x0;
      if ((local_3a0 == (ulonglong *)0x0) || ((*(byte *)((longlong)puVar28 + 0x2a) & 8) != 0)) {
LAB_140b0e374:
        local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,(int)param_3[1]);
        plVar34 = *(longlong **)(*param_2 + 8);
        puVar28 = (ulonglong *)plVar34[1];
        puVar2 = (undefined4 *)*puVar28 + 1;
        if ((undefined4 *)puVar28[1] < puVar2) {
          if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar34 + 0x170))(plVar34,&local_1f8,4);
          }
          else {
            FUN_14572512c(plVar34,&local_1f8);
          }
        }
        else {
          local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,*(undefined4 *)*puVar28);
          *puVar28 = (ulonglong)puVar2;
        }
        plVar34 = local_3c0;
        uVar36 = local_310[1];
        if (0 < (longlong)(int)uVar36) {
          lVar41 = 0;
          do {
            if ((int)local_310[1] == 0) {
              lVar37 = 0;
            }
            else {
              if ((local_300 & 1) == 0) {
                uVar21 = *local_310;
              }
              else {
                uVar21 = *local_310;
                if ((uVar21 & 1) != 0) {
                  uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
                }
              }
              lVar37 = local_308 * lVar41 + uVar21;
            }
            if (local_280 == '\x01') {
              lVar22 = (**(code **)(**(longlong **)(*plVar34 + 8) + 0x28))();
              plVar40 = *(longlong **)(local_3b0 + 0x78);
              local_3e8 = 0;
              uStack_3e0 = 0;
              iVar13 = (**(code **)(*plVar40 + 0xc0))(plVar40,local_2f8,plVar34,lVar37);
              if ((iVar13 != 1) && (iVar13 != 3)) {
                if (iVar13 != 2) goto LAB_140b0e497;
                (**(code **)(*(longlong *)plVar40[0xe] + 0x380))((longlong *)plVar40[0xe],lVar37);
                (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x1a0))
                          (*(longlong **)(*local_3c0 + 8),lVar22 + local_2bc);
              }
            }
            else {
LAB_140b0e497:
              (**(code **)(**(longlong **)(local_3b0 + 0x78) + 0xd0))
                        (*(longlong **)(local_3b0 + 0x78),local_3c0,lVar37,0);
            }
            lVar41 = lVar41 + 1;
          } while ((int)uVar36 != lVar41);
        }
      }
      else {
        uVar36 = *(ulonglong *)(param_1 + 0x78);
        if (uVar36 == 0) {
          lVar41 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xd58);
          if (lVar41 != 0) {
            uVar21 = 0;
            goto LAB_140b0f27d;
          }
          goto LAB_140b0e374;
        }
        puVar33 = *(undefined **)(uVar36 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951cc8) &&
           (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_3d8 = (undefined *)FUN_140342cba();
            local_3d0 = FUN_1468c7f1e;
            uStack_3e0 = 0;
            local_3e8 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_3d0 = FUN_1468d96f0;
          local_3d8 = &DAT_14c951a38;
          uStack_3e0 = 0;
          local_3e8 = 0x4008001;
          FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
          atexit(FUN_14281144d);
          _Init_thread_footer(&DAT_14c951cc8);
          puVar28 = local_3b8;
          param_2 = local_3c0;
          param_1 = local_3b0;
        }
        if (DAT_14c951c80 == 0) {
          bVar43 = puVar33 != (undefined *)0x0;
          if (puVar33 != &DAT_14c951c78 && bVar43) {
            do {
              puVar33 = *(undefined **)(puVar33 + 0x30);
              bVar43 = puVar33 != (undefined *)0x0;
              if (puVar33 == &DAT_14c951c78) break;
            } while (puVar33 != (undefined *)0x0);
          }
        }
        else {
          bVar43 = (*(ulonglong *)(puVar33 + 0x18) & DAT_14c951c80) != 0;
        }
        uVar21 = 0;
        if (bVar43) {
          uVar21 = uVar36;
        }
        lVar41 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd58);
        if (lVar41 == 0) {
          if ((uVar21 == 0) || ((*(ulonglong *)(uVar21 + 0x38) >> 0x31 & 1) == 0))
          goto LAB_140b0e374;
        }
        else {
LAB_140b0f27d:
          bVar10 = FUN_1468c37cc(lVar41,puVar28[0xf],0);
          if ((bVar10 & 0xfd) != 0) {
            uVar4 = *(undefined1 *)(param_1 + 0x70);
            local_358 = uVar21;
            uVar15 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
            local_1f8 = *(longlong ***)(param_1 + 0x78);
            local_1e8 = (longlong ***)CONCAT44(uVar15,*(undefined4 *)((longlong)local_1f8 + 0x34));
            local_1e0 = (undefined8 *)CONCAT71(local_1e0._1_7_,uVar4);
            uStack_1f0 = local_3a0;
            lVar37 = FUN_1468c4ad2(lVar41,puVar28[0xf]);
            param_2 = local_3c0;
            param_1 = local_3b0;
            if (lVar37 == 0) goto LAB_140b0f2a1;
            local_3a8 = (uint *)(lVar37 + 0x28);
            uVar27 = *(uint *)(lVar37 + 0x40);
            local_398 = (ulonglong)uVar27;
            param_3 = local_310;
            if (uVar27 == 0) {
              uVar21 = 1;
              uVar42 = 0;
              local_3b8 = (ulonglong *)((ulonglong)local_3b8._4_4_ << 0x20);
              uVar36 = 0;
            }
            else {
              puVar25 = *(uint **)(lVar37 + 0x38);
              if (*(uint **)(lVar37 + 0x38) == (uint *)0x0) {
                puVar25 = local_3a8;
              }
              uVar16 = *puVar25;
              if (uVar16 == 0) {
                iVar13 = uVar27 + 0x1e;
                if (-1 < (int)(uVar27 - 1)) {
                  iVar13 = uVar27 - 1;
                }
                uVar42 = 0;
                uVar36 = (ulonglong)(uint)(iVar13 >> 5);
                if (iVar13 >> 5 < 1) {
                  uVar36 = uVar42;
                }
                local_3b8 = (ulonglong *)((ulonglong)local_3b8 & 0xffffffff00000000);
                do {
                  if (uVar36 == uVar42) goto joined_r0x000140b10010;
                  local_3b8 = (ulonglong *)CONCAT44(local_3b8._4_4_,(int)local_3b8 + 0x20);
                  uVar16 = puVar25[uVar42 + 1];
                  uVar42 = uVar42 + 1;
                } while (uVar16 == 0);
              }
              else {
                uVar42 = 0;
                local_3b8 = (ulonglong *)((ulonglong)local_3b8._4_4_ << 0x20);
              }
              uVar21 = (ulonglong)(-uVar16 & uVar16);
              uVar36 = uVar21 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              uVar16 = ((int)local_3b8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              uVar36 = (ulonglong)uVar16;
              if ((int)uVar27 <= (int)uVar16) {
                uVar36 = local_398;
              }
            }
            if ((uint)uVar36 != uVar27) {
              uVar27 = 0xffffffff;
              do {
                lVar22 = *(longlong *)(lVar37 + 0x18);
                lVar23 = (longlong)(int)uVar36;
                local_368 = *(undefined8 *)(lVar22 + 0x10 + lVar23 * 0x28);
                local_360 = *(longlong *)(lVar22 + 0x18 + lVar23 * 0x28);
                if ((DAT_14c950c29 == 1) && (local_360 != 0)) {
                  FUN_1456cec3c();
                }
                puVar35 = (undefined8 *)(lVar22 + lVar23 * 0x28);
                cVar11 = FUN_1468c4eb2(lVar41,&local_368);
                if (cVar11 == '\x03') {
                  local_388 = *puVar35;
                  local_380 = puVar35[1];
                  if ((DAT_14c950c29 == 1) && (local_380 != 0)) {
                    FUN_1456cec3c();
                  }
                  iVar13 = FUN_14280cc24(&local_358,&local_388,&local_318);
                  puVar28 = uStack_340;
                  if (iVar13 != -1) {
                    iVar14 = (int)uStack_340;
                    uVar16 = (int)uStack_340 + 1;
                    uStack_340 = (ulonglong *)CONCAT44(uStack_340._4_4_,uVar16);
                    if (uStack_340._4_4_ < uVar16) {
                      FUN_1446f48e2(&local_348,(ulonglong)puVar28 & 0xffffffff);
                    }
                    ppplVar26 = &local_348;
LAB_140b10195:
                    *(int *)((longlong)*ppplVar26 + (longlong)iVar14 * 4) = iVar13;
                  }
                }
                else if (cVar11 == '\x04') {
                  local_378 = *puVar35;
                  local_370 = puVar35[1];
                  if ((DAT_14c950c29 == 1) && (local_370 != 0)) {
                    FUN_1456cec3c();
                  }
                  iVar13 = FUN_14280cc24(&local_358,&local_378,&local_1f8);
                  puVar28 = uStack_330;
                  if (iVar13 != -1) {
                    iVar14 = (int)uStack_330;
                    uVar16 = (int)uStack_330 + 1;
                    uStack_330 = (ulonglong *)CONCAT44(uStack_330._4_4_,uVar16);
                    if (uStack_330._4_4_ < uVar16) {
                      FUN_1446f48e2(&local_338,(ulonglong)puVar28 & 0xffffffff);
                    }
                    ppplVar26 = &local_338;
                    goto LAB_140b10195;
                  }
                }
                uVar27 = uVar27 & ~(uint)uVar21;
                puVar25 = *(uint **)(lVar37 + 0x38);
                if (*(uint **)(lVar37 + 0x38) == (uint *)0x0) {
                  puVar25 = local_3a8;
                }
                uVar16 = *(uint *)(lVar37 + 0x40);
                iVar13 = (int)uVar42;
                lVar22 = (longlong)iVar13;
                uVar29 = puVar25[lVar22] & uVar27;
                if (uVar29 == 0) {
                  iVar14 = uVar16 + 0x1e;
                  if (-1 < (int)(uVar16 - 1)) {
                    iVar14 = uVar16 - 1;
                  }
                  iVar14 = iVar14 >> 5;
                  local_3b8 = (ulonglong *)CONCAT44(local_3b8._4_4_,(int)local_3b8 + 0x20);
                  iVar12 = iVar14;
                  if (iVar14 < iVar13) {
                    iVar12 = iVar13;
                  }
                  if (iVar13 < iVar14) {
                    lVar23 = 0;
                    do {
                      uVar29 = puVar25[lVar22 + lVar23 + 1];
                      if (uVar29 != 0) {
                        uVar42 = (ulonglong)(iVar13 + (int)lVar23 + 1);
                        uVar27 = 0xffffffff;
                        goto LAB_140b10224;
                      }
                      local_3b8 = (ulonglong *)CONCAT44(local_3b8._4_4_,(int)local_3b8 + 0x20);
                      lVar23 = lVar23 + 1;
                    } while (iVar12 - lVar22 != lVar23);
                    uVar27 = 0xffffffff;
                    iVar13 = iVar12;
                  }
                  uVar42 = (ulonglong)(iVar13 + 1);
                  uVar29 = uVar16;
                }
                else {
LAB_140b10224:
                  uVar21 = (ulonglong)(-uVar29 & uVar29);
                  uVar36 = uVar21 * 2 + 1;
                  lVar22 = 0x3f;
                  if (uVar36 != 0) {
                    for (; uVar36 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                    }
                  }
                  uVar29 = ((int)local_3b8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                  if ((int)uVar16 <= (int)uVar29) {
                    uVar29 = uVar16;
                  }
                }
                uVar36 = (ulonglong)uVar29;
                param_2 = local_3c0;
                param_1 = local_3b0;
                param_3 = local_310;
              } while (uVar29 != (uint)local_398);
            }
          }
joined_r0x000140b10010:
          if (bVar10 == 2) goto LAB_140b0e374;
        }
LAB_140b0f2a1:
        local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,0xffffffff);
        plVar34 = *(longlong **)(*param_2 + 8);
        puVar28 = (ulonglong *)plVar34[1];
        puVar2 = (undefined4 *)*puVar28 + 1;
        if ((undefined4 *)puVar28[1] < puVar2) {
          if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar34 + 0x170))(plVar34,&local_1f8,4);
          }
          else {
            FUN_14572512c(plVar34,&local_1f8);
          }
        }
        else {
          local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,*(undefined4 *)*puVar28);
          *puVar28 = (ulonglong)puVar2;
        }
        local_3b8 = (ulonglong *)CONCAT71(local_3b8._1_7_,*(undefined1 *)(param_1 + 0x70));
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
        iVar13 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
        local_358 = CONCAT44(local_358._4_4_,(int)uStack_330);
        plVar34 = *(longlong **)(*local_3c0 + 8);
        puVar28 = (ulonglong *)plVar34[1];
        puVar2 = (undefined4 *)*puVar28 + 1;
        if ((undefined4 *)puVar28[1] < puVar2) {
          if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar34 + 0x170))(plVar34,&local_358,4);
          }
          else {
            FUN_14572512c(plVar34,&local_358);
          }
        }
        else {
          local_358 = CONCAT44(local_358._4_4_,*(undefined4 *)*puVar28);
          *puVar28 = (ulonglong)puVar2;
        }
        pplVar19 = local_338;
        plVar34 = local_3c0;
        lVar41 = (longlong)(int)uStack_330;
        if (lVar41 != 0) {
          lVar37 = 0;
          do {
            if ((int)local_3a0[1] == 0) {
              lVar22 = 0;
            }
            else {
              if (((ulonglong)local_3b8 & 1) == 0) {
                uVar36 = *local_3a0;
              }
              else {
                uVar36 = *local_3a0;
                if ((uVar36 & 1) != 0) {
                  uVar36 = ((longlong)uVar36 >> 0x18) + (longlong)local_3a0;
                }
              }
              lVar22 = (longlong)*(int *)((longlong)pplVar19 + lVar37) * (longlong)iVar13 + uVar36;
            }
            if (local_280 == '\x01') {
              lVar23 = (**(code **)(**(longlong **)(*plVar34 + 8) + 0x28))();
              plVar40 = *(longlong **)(local_3b0 + 0x78);
              local_3e8 = 0;
              uStack_3e0 = 0;
              iVar14 = (**(code **)(*plVar40 + 0xc0))(plVar40,local_2f8,plVar34,lVar22);
              if ((iVar14 != 1) && (iVar14 != 3)) {
                if (iVar14 != 2) goto LAB_140b0f412;
                (**(code **)(*(longlong *)plVar40[0xe] + 0x380))((longlong *)plVar40[0xe],lVar22);
                (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x1a0))
                          (*(longlong **)(*local_3c0 + 8),lVar23 + local_2bc);
              }
            }
            else {
LAB_140b0f412:
              (**(code **)(**(longlong **)(local_3b0 + 0x78) + 0xd0))
                        (*(longlong **)(local_3b0 + 0x78),local_3c0,lVar22,0);
            }
            lVar37 = lVar37 + 4;
          } while (lVar41 * 4 != lVar37);
        }
        plVar40 = local_3c0;
        local_320 = 0;
        plVar34 = *(longlong **)(*local_3c0 + 8);
        puVar28 = (ulonglong *)plVar34[1];
        piVar1 = (int *)*puVar28 + 1;
        if ((int *)puVar28[1] < piVar1) {
          if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar34 + 0x170))(plVar34,&local_320,4);
          }
          else {
            FUN_14572512c(plVar34,&local_320);
          }
        }
        else {
          local_320 = *(int *)*puVar28;
          *puVar28 = (ulonglong)piVar1;
        }
        local_34c = (int)uStack_340;
        plVar34 = *(longlong **)(*plVar40 + 8);
        puVar28 = (ulonglong *)plVar34[1];
        piVar1 = (int *)*puVar28 + 1;
        if ((int *)puVar28[1] < piVar1) {
          if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar34 + 0x170))(plVar34,&local_34c,4);
          }
          else {
            FUN_14572512c(plVar34,&local_34c);
          }
        }
        else {
          local_34c = *(int *)*puVar28;
          *puVar28 = (ulonglong)piVar1;
        }
        pplVar19 = local_348;
        plVar34 = local_3c0;
        lVar41 = (longlong)(int)uStack_340;
        if (lVar41 != 0) {
          lVar37 = 0;
          do {
            if ((int)local_310[1] == 0) {
              lVar22 = 0;
            }
            else {
              if ((local_300 & 1) == 0) {
                uVar36 = *local_310;
              }
              else {
                uVar36 = *local_310;
                if ((uVar36 & 1) != 0) {
                  uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
                }
              }
              lVar22 = (longlong)local_308 * (longlong)*(int *)((longlong)pplVar19 + lVar37) +
                       uVar36;
            }
            if (local_280 == '\x01') {
              lVar23 = (**(code **)(**(longlong **)(*plVar34 + 8) + 0x28))();
              plVar40 = *(longlong **)(local_3b0 + 0x78);
              local_3e8 = 0;
              uStack_3e0 = 0;
              iVar13 = (**(code **)(*plVar40 + 0xc0))(plVar40,local_2f8,plVar34,lVar22);
              if ((iVar13 != 1) && (iVar13 != 3)) {
                if (iVar13 != 2) goto LAB_140b0f5a8;
                (**(code **)(*(longlong *)plVar40[0xe] + 0x380))((longlong *)plVar40[0xe],lVar22);
                (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x1a0))
                          (*(longlong **)(*local_3c0 + 8),lVar23 + local_2bc);
              }
            }
            else {
LAB_140b0f5a8:
              (**(code **)(**(longlong **)(local_3b0 + 0x78) + 0xd0))
                        (*(longlong **)(local_3b0 + 0x78),local_3c0,lVar22,0);
            }
            lVar37 = lVar37 + 4;
          } while (lVar41 * 4 != lVar37);
        }
      }
      pplVar19 = local_338;
      if (local_348 != (longlong **)0x0) {
        FUN_1400020a8();
        pplVar19 = local_338;
      }
LAB_140b0e4da:
      if (pplVar19 == (longlong **)0x0) goto LAB_140b0efa7;
    }
    else {
      uVar36 = local_358 >> 0x20;
      local_358 = local_358 & 0xffffffff00000000;
      plVar34 = *(longlong **)(*param_2 + 8);
      puVar5 = (ulonglong *)plVar34[1];
      puVar25 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar25) {
        if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar34 + 0x170))(plVar34,&local_358,4);
        }
        else {
          FUN_14572512c(plVar34,&local_358);
        }
        uVar27 = (uint)local_358;
      }
      else {
        uVar27 = *(uint *)*puVar5;
        local_358 = CONCAT44((int)uVar36,uVar27);
        *puVar5 = (ulonglong)puVar25;
      }
      uVar36 = (ulonglong)uVar27;
      plVar34 = *(longlong **)(param_1 + 0x78);
      if (uVar27 != 0xffffffff) {
        if ((param_1 == 0) || (puVar28[0xe] == param_1)) {
          if (plVar34 != (longlong *)0x0) {
            if (*(code **)(*puVar28 + 0x228) == FUN_144a610a4) {
              uVar36 = puVar28[0xf];
              if (uVar36 == 0) {
                uVar36 = FUN_14001cc68(0x58,0x10);
                *(undefined8 *)(uVar36 + 0x40) = 0;
                *(undefined8 *)(uVar36 + 0x48) = 0x800000000;
                *(undefined4 *)(uVar36 + 0x50) = 0;
                puVar28[0xf] = uVar36;
                iVar13 = 0;
                uVar27 = 8;
              }
              else {
                iVar13 = *(int *)(uVar36 + 0x48);
                uVar27 = *(uint *)(uVar36 + 0x4c);
              }
              *(uint *)(uVar36 + 0x48) = iVar13 + 1U;
              if (uVar27 < iVar13 + 1U) {
                FUN_140b4c3de(uVar36,iVar13);
              }
              uVar21 = *(ulonglong *)(uVar36 + 0x40);
              if (*(ulonglong *)(uVar36 + 0x40) == 0) {
                uVar21 = uVar36;
              }
              *(longlong **)(uVar21 + (longlong)iVar13 * 8) = plVar34;
              iVar13 = *(int *)(uVar36 + 0x50) + 1;
              do {
                iVar14 = iVar13;
                iVar13 = 1;
              } while (iVar14 == 0);
              *(int *)(uVar36 + 0x50) = iVar14;
              local_3b8[0xe] = (ulonglong)plVar34;
            }
            else {
              (**(code **)(*puVar28 + 0x228))
                        (puVar28,plVar34,(uint)((ulonglong)plVar34[7] >> 0x23) & 1);
            }
          }
          uVar36 = local_358 & 0xffffffff;
        }
        else {
          plVar34 = (longlong *)0x0;
        }
        iVar13 = (int)local_310[1];
        if (((iVar13 != 0) && (0 < iVar13)) && ((local_318[7] & 0x1040000000U) == 0)) {
          iVar14 = iVar13;
          if ((local_300 & 1) == 0) {
            uVar21 = *local_310;
          }
          else {
            uVar21 = *local_310;
            param_1 = local_3b0;
            if ((uVar21 & 1) != 0) {
              uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
            }
          }
          do {
            if ((local_318[7] & 0x1000000000U) == 0) {
              (**(code **)(*local_318 + 0x148))(local_318,uVar21);
            }
            uVar21 = uVar21 + (longlong)local_308;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        iVar14 = (int)uVar36;
        if (iVar13 != 0 || iVar14 != 0) {
          *(undefined4 *)(local_310 + 1) = 0;
          if ((local_300 & 1) == 0) {
            if (*(int *)((longlong)local_310 + 0xc) != iVar14) {
              FUN_14474d398(local_310,uVar36);
            }
          }
          else if (*(int *)((longlong)local_310 + 0xc) != iVar14) {
            FUN_1468c0360(local_310,uVar36,local_308,local_304);
          }
        }
        plVar40 = local_3c0;
        iVar13 = (int)local_310[1];
        iVar12 = iVar13 + iVar14;
        *(int *)(local_310 + 1) = iVar12;
        if ((local_300 & 1) == 0) {
          if (*(int *)((longlong)local_310 + 0xc) < iVar12) {
            FUN_14097bbd2();
          }
        }
        else if (*(int *)((longlong)local_310 + 0xc) < iVar12) {
          FUN_1468c03c2(local_310,iVar13,local_308);
        }
        if (0 < iVar14) {
          if ((int)local_310[1] == 0) {
            pvVar39 = (void *)0x0;
          }
          else {
            if ((local_300 & 1) == 0) {
              uVar21 = *local_310;
            }
            else {
              uVar21 = *local_310;
              plVar40 = local_3c0;
              param_1 = local_3b0;
              if ((uVar21 & 1) != 0) {
                uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
              }
            }
            pvVar39 = (void *)((longlong)local_308 * (longlong)iVar13 + uVar21);
          }
          if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
            do {
              if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
                (**(code **)(*local_318 + 0x160))();
              }
              else {
                memset(pvVar39,0,
                       (longlong)(int)local_318[6] * (longlong)*(int *)((longlong)local_318 + 0x34))
                ;
              }
              pvVar39 = (void *)((longlong)pvVar39 + (longlong)local_308);
              uVar27 = (int)uVar36 - 1;
              uVar36 = (ulonglong)uVar27;
            } while (uVar27 != 0);
          }
          else {
            memset(pvVar39,0,(longlong)local_308 * uVar36);
          }
        }
        if (0 < (int)(uint)local_358) {
          lVar41 = 0;
          do {
            if ((int)local_310[1] == 0) {
              lVar37 = 0;
            }
            else {
              if ((local_300 & 1) == 0) {
                uVar36 = *local_310;
              }
              else {
                uVar36 = *local_310;
                if ((uVar36 & 1) != 0) {
                  uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
                }
              }
              lVar37 = local_308 * lVar41 + uVar36;
            }
            if (local_280 == '\x01') {
              lVar22 = (**(code **)(**(longlong **)(*plVar40 + 8) + 0x28))();
              plVar7 = *(longlong **)(param_1 + 0x78);
              local_3e8 = 0;
              uStack_3e0 = 0;
              iVar13 = (**(code **)(*plVar7 + 0xc0))(plVar7,local_2f8,plVar40,lVar37);
              if ((iVar13 != 1) && (iVar13 != 3)) {
                if (iVar13 != 2) goto LAB_140b0e08a;
                (**(code **)(*(longlong *)plVar7[0xe] + 0x380))((longlong *)plVar7[0xe],lVar37);
                (**(code **)(**(longlong **)(*plVar40 + 8) + 0x1a0))
                          (*(longlong **)(*plVar40 + 8),lVar22 + local_2bc);
              }
            }
            else {
LAB_140b0e08a:
              (**(code **)(**(longlong **)(param_1 + 0x78) + 0xd0))
                        (*(longlong **)(param_1 + 0x78),plVar40,lVar37,0);
            }
            lVar41 = lVar41 + 1;
          } while (lVar41 < (int)(uint)local_358);
        }
        if (plVar34 == (longlong *)0x0) goto LAB_140b0efa7;
        pcVar24 = *(code **)(*local_3b8 + 0x230);
        if (pcVar24 == (code *)&LAB_1449b19a2) {
          uVar36 = local_3b8[0xf];
          *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
          iVar13 = *(int *)(uVar36 + 0x50) + 1;
          do {
            iVar14 = iVar13;
            iVar13 = 1;
          } while (iVar14 == 0);
          *(int *)(uVar36 + 0x50) = iVar14;
          uVar36 = local_3b8[0xf];
          if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
            uVar36 = 0;
          }
          else {
            uVar21 = *(ulonglong *)(uVar36 + 0x40);
            if (*(ulonglong *)(uVar36 + 0x40) == 0) {
              uVar21 = uVar36;
            }
            uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
          }
          local_3b8[0xe] = uVar36;
          goto LAB_140b0efa7;
        }
        uVar27 = (uint)((ulonglong)plVar34[7] >> 0x20);
        puVar28 = local_3b8;
        goto LAB_140b0fe41;
      }
      local_3a8 = *(uint **)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xd58);
      local_398 = CONCAT71(local_398._1_7_,*(undefined1 *)(param_1 + 0x70));
      (**(code **)(*plVar34 + 0x178))(plVar34);
      lVar41 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
      local_320 = 0;
      plVar40 = *(longlong **)(*param_2 + 8);
      puVar5 = (ulonglong *)plVar40[1];
      piVar1 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar1) {
        if ((*(byte *)((longlong)plVar40 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar40 + 0x170))(plVar40,&local_320,4);
        }
        else {
          FUN_14572512c();
        }
      }
      else {
        local_320 = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar1;
      }
      if (local_320 == 0) {
        pplVar19 = (longlong **)0x0;
      }
      else {
        local_338 = (longlong **)0x0;
        uStack_330 = (ulonglong *)0x0;
        pplVar19 = (longlong **)FUN_14001cc68((longlong)*(int *)((longlong)plVar34 + 0x34));
        if ((*(byte *)((longlong)plVar34 + 0x39) & 2) == 0) {
          (**(code **)(*plVar34 + 0x160))(plVar34,pplVar19);
        }
        else {
          memset(pplVar19,0,(longlong)(int)plVar34[6] * (longlong)*(int *)((longlong)plVar34 + 0x34)
                );
        }
        local_390 = pplVar19;
        if (0 < local_320) {
          iVar13 = 0;
LAB_140b0f606:
          uVar36 = *(ulonglong *)(param_1 + 0x78);
          if (uVar36 == 0 || puVar28[0xe] != param_1 && param_1 != 0) {
            uVar36 = 0;
          }
          else if (*(code **)(*puVar28 + 0x228) == FUN_144a610a4) {
            uVar21 = puVar28[0xf];
            if (uVar21 == 0) {
              uVar21 = FUN_14001cc68(0x58,0x10);
              *(undefined8 *)(uVar21 + 0x40) = 0;
              *(undefined8 *)(uVar21 + 0x48) = 0x800000000;
              *(undefined4 *)(uVar21 + 0x50) = 0;
              puVar28[0xf] = uVar21;
              iVar14 = 0;
              uVar27 = 8;
            }
            else {
              iVar14 = *(int *)(uVar21 + 0x48);
              uVar27 = *(uint *)(uVar21 + 0x4c);
            }
            *(uint *)(uVar21 + 0x48) = iVar14 + 1U;
            if (uVar27 < iVar14 + 1U) {
              FUN_140b4c3de(uVar21,iVar14);
            }
            uVar42 = *(ulonglong *)(uVar21 + 0x40);
            if (*(ulonglong *)(uVar21 + 0x40) == 0) {
              uVar42 = uVar21;
            }
            *(ulonglong *)(uVar42 + (longlong)iVar14 * 8) = uVar36;
            iVar14 = *(int *)(uVar21 + 0x50) + 1;
            do {
              iVar12 = iVar14;
              iVar14 = 1;
            } while (iVar12 == 0);
            *(int *)(uVar21 + 0x50) = iVar12;
            local_3b8[0xe] = uVar36;
          }
          else {
            (**(code **)(*puVar28 + 0x228))
                      (puVar28,uVar36,(uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1)
            ;
          }
          plVar40 = local_3c0;
          if (local_280 == '\x01') {
            lVar37 = (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x28))();
            param_1 = local_3b0;
            plVar7 = *(longlong **)(local_3b0 + 0x78);
            local_3e8 = 0;
            uStack_3e0 = 0;
            iVar14 = (**(code **)(*plVar7 + 0xc0))(plVar7,local_2f8,plVar40,pplVar19);
            if ((iVar14 != 1) && (iVar14 != 3)) {
              if (iVar14 != 2) goto LAB_140b0f72c;
              (**(code **)(*(longlong *)plVar7[0xe] + 0x380))((longlong *)plVar7[0xe],pplVar19);
              (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x1a0))
                        (*(longlong **)(*local_3c0 + 8),lVar37 + local_2bc);
            }
          }
          else {
LAB_140b0f72c:
            (**(code **)(**(longlong **)(param_1 + 0x78) + 0xd0))
                      (*(longlong **)(param_1 + 0x78),local_3c0,pplVar19,0);
          }
          puVar28 = local_3b8;
          if (uVar36 != 0) {
            if (*(code **)(*local_3b8 + 0x230) == (code *)&LAB_1449b19a2) {
              uVar36 = local_3b8[0xf];
              *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
              iVar14 = *(int *)(uVar36 + 0x50) + 1;
              do {
                iVar12 = iVar14;
                iVar14 = 1;
              } while (iVar12 == 0);
              *(int *)(uVar36 + 0x50) = iVar12;
              uVar36 = local_3b8[0xf];
              if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
                uVar36 = 0;
              }
              else {
                uVar21 = *(ulonglong *)(uVar36 + 0x40);
                if (*(ulonglong *)(uVar36 + 0x40) == 0) {
                  uVar21 = uVar36;
                }
                uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
              }
              local_3b8[0xe] = uVar36;
            }
            else {
              (**(code **)(*local_3b8 + 0x230))
                        (local_3b8,uVar36,
                         (uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1);
            }
          }
          lVar37 = (**(code **)(*plVar34 + 0x210))(plVar34,pplVar19);
          if (lVar37 != 0) {
            lVar22 = (longlong)(int)local_3a0[1];
            if (0 < lVar22) {
              iVar14 = 1;
              lVar30 = 0;
              lVar23 = 0;
              while( true ) {
                if (iVar14 == 0) {
                  lVar31 = 0;
                }
                else {
                  if ((local_398 & 1) == 0) {
                    uVar36 = *local_3a0;
                  }
                  else {
                    uVar36 = *local_3a0;
                    if ((uVar36 & 1) != 0) {
                      uVar36 = ((longlong)uVar36 >> 0x18) + (longlong)local_3a0;
                    }
                  }
                  lVar31 = uVar36 + lVar30;
                }
                lVar31 = (**(code **)(*plVar34 + 0x210))(plVar34,lVar31);
                if (lVar31 == lVar37) goto LAB_140b0f835;
                if (lVar22 + -1 == lVar23) break;
                iVar14 = (int)local_3a0[1];
                lVar30 = lVar30 + lVar41;
                lVar23 = lVar23 + 1;
              }
              lVar30 = *(longlong *)(lVar37 + 0x18);
              lVar31 = 0;
              lVar23 = 0;
              do {
                if ((int)local_3a0[1] == 0) {
                  lVar32 = 0;
                }
                else {
                  if ((local_398 & 1) == 0) {
                    uVar36 = *local_3a0;
                  }
                  else {
                    uVar36 = *local_3a0;
                    if ((uVar36 & 1) != 0) {
                      uVar36 = ((longlong)uVar36 >> 0x18) + (longlong)local_3a0;
                    }
                  }
                  lVar32 = uVar36 + lVar31;
                }
                lVar32 = (**(code **)(*plVar34 + 0x210))(plVar34,lVar32);
                if ((lVar32 != 0) && (*(longlong *)(lVar32 + 0x18) == lVar30)) goto LAB_140b0f835;
                lVar23 = lVar23 + 1;
                lVar31 = lVar31 + lVar41;
              } while (lVar22 != lVar23);
            }
            goto LAB_140b0f871;
          }
          goto LAB_140b0f888;
        }
LAB_140b0fa31:
        FUN_1468d93af(local_338,(ulonglong)uStack_330 & 0xffffffff);
        pplVar19 = local_338;
        lVar41 = (longlong)(int)uStack_330;
        if (lVar41 != 0) {
          lVar37 = 0;
          do {
            iVar13 = *(int *)((longlong)pplVar19 + lVar37);
            if ((local_318[7] & 0x1040000000U) == 0) {
              if ((int)local_310[1] == 0) {
                lVar22 = 0;
              }
              else {
                if ((local_300 & 1) == 0) {
                  uVar36 = *local_310;
                }
                else {
                  uVar36 = *local_310;
                  puVar28 = local_3b8;
                  if ((uVar36 & 1) != 0) {
                    uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
                  }
                }
                lVar22 = (longlong)local_308 * (longlong)iVar13 + uVar36;
              }
              (**(code **)(*local_318 + 0x148))(local_318,lVar22);
            }
            uStack_1f0 = (ulonglong *)CONCAT44(1,iVar13);
            local_1f8 = &local_318;
            FUN_140eff44e(&local_318);
            lVar37 = lVar37 + 4;
          } while (lVar41 * 4 != lVar37);
        }
        param_2 = local_3c0;
        pplVar19 = local_390;
        if (local_338 != (longlong **)0x0) {
          FUN_1400020a8(local_338);
          pplVar19 = local_390;
        }
      }
      uVar36 = (ulonglong)local_348 >> 0x20;
      local_348 = (longlong **)((ulonglong)local_348 & 0xffffffff00000000);
      plVar40 = *(longlong **)(*param_2 + 8);
      puVar5 = (ulonglong *)plVar40[1];
      piVar1 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar1) {
        if ((*(byte *)((longlong)plVar40 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar40 + 0x170))(plVar40,&local_348,4);
        }
        else {
          FUN_14572512c();
        }
        iVar13 = (int)local_348;
      }
      else {
        iVar13 = *(int *)*puVar5;
        local_348 = (longlong **)CONCAT44((int)uVar36,iVar13);
        *puVar5 = (ulonglong)piVar1;
      }
      if (iVar13 != 0) {
        if (pplVar19 == (longlong **)0x0) {
          pplVar19 = (longlong **)FUN_14001cc68((longlong)*(int *)((longlong)plVar34 + 0x34));
          if ((*(byte *)((longlong)plVar34 + 0x39) & 2) == 0) {
            (**(code **)(*plVar34 + 0x160))(plVar34,pplVar19);
          }
          else {
            memset(pplVar19,0,
                   (longlong)(int)plVar34[6] * (longlong)*(int *)((longlong)plVar34 + 0x34));
          }
        }
        param_2 = local_3c0;
        if (0 < (int)local_348) {
          iVar13 = 0;
LAB_140b0e5a5:
          uVar36 = *(ulonglong *)(local_3b0 + 0x78);
          if (uVar36 == 0 || puVar28[0xe] != local_3b0 && local_3b0 != 0) {
            uVar36 = 0;
          }
          else if (*(code **)(*puVar28 + 0x228) == FUN_144a610a4) {
            uVar21 = puVar28[0xf];
            if (uVar21 == 0) {
              uVar21 = FUN_14001cc68(0x58,0x10);
              *(undefined8 *)(uVar21 + 0x40) = 0;
              *(undefined8 *)(uVar21 + 0x48) = 0x800000000;
              *(undefined4 *)(uVar21 + 0x50) = 0;
              puVar28[0xf] = uVar21;
              iVar14 = 0;
              uVar27 = 8;
            }
            else {
              iVar14 = *(int *)(uVar21 + 0x48);
              uVar27 = *(uint *)(uVar21 + 0x4c);
            }
            *(uint *)(uVar21 + 0x48) = iVar14 + 1U;
            if (uVar27 < iVar14 + 1U) {
              FUN_140b4c3de(uVar21,iVar14);
            }
            uVar42 = *(ulonglong *)(uVar21 + 0x40);
            if (*(ulonglong *)(uVar21 + 0x40) == 0) {
              uVar42 = uVar21;
            }
            *(ulonglong *)(uVar42 + (longlong)iVar14 * 8) = uVar36;
            iVar14 = *(int *)(uVar21 + 0x50) + 1;
            do {
              iVar12 = iVar14;
              iVar14 = 1;
            } while (iVar12 == 0);
            *(int *)(uVar21 + 0x50) = iVar12;
            local_3b8[0xe] = uVar36;
          }
          else {
            (**(code **)(*puVar28 + 0x228))
                      (puVar28,uVar36,(uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1)
            ;
          }
          plVar40 = local_3c0;
          if (local_280 == '\x01') {
            lVar41 = (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x28))();
            plVar7 = *(longlong **)(local_3b0 + 0x78);
            local_3e8 = 0;
            uStack_3e0 = 0;
            iVar14 = (**(code **)(*plVar7 + 0xc0))(plVar7,local_2f8,plVar40,pplVar19);
            if ((iVar14 != 1) && (iVar14 != 3)) {
              if (iVar14 != 2) goto LAB_140b0e6ce;
              (**(code **)(*(longlong *)plVar7[0xe] + 0x380))((longlong *)plVar7[0xe],pplVar19);
              (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x1a0))
                        (*(longlong **)(*local_3c0 + 8),lVar41 + local_2bc);
            }
          }
          else {
LAB_140b0e6ce:
            (**(code **)(**(longlong **)(local_3b0 + 0x78) + 0xd0))
                      (*(longlong **)(local_3b0 + 0x78),local_3c0,pplVar19,0);
          }
          if (uVar36 != 0) {
            if (*(code **)(*local_3b8 + 0x230) == (code *)&LAB_1449b19a2) {
              uVar36 = local_3b8[0xf];
              *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
              iVar14 = *(int *)(uVar36 + 0x50) + 1;
              do {
                iVar12 = iVar14;
                iVar14 = 1;
              } while (iVar12 == 0);
              *(int *)(uVar36 + 0x50) = iVar12;
              uVar36 = local_3b8[0xf];
              if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
                uVar36 = 0;
              }
              else {
                uVar21 = *(ulonglong *)(uVar36 + 0x40);
                if (*(ulonglong *)(uVar36 + 0x40) == 0) {
                  uVar21 = uVar36;
                }
                uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
              }
              local_3b8[0xe] = uVar36;
            }
            else {
              (**(code **)(*local_3b8 + 0x230))
                        (local_3b8,uVar36,
                         (uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1);
            }
          }
          lVar41 = (**(code **)(*plVar34 + 0x210))(plVar34,pplVar19);
          if (((lVar41 != 0) && (lVar37 = FUN_144938c96(lVar41), lVar37 != 0)) &&
             (lVar22 = (longlong)(int)local_310[1], 0 < lVar22)) {
            lVar23 = 0;
            do {
              if ((int)local_310[1] == 0) {
                lVar30 = 0;
              }
              else {
                if ((local_300 & 1) == 0) {
                  uVar36 = *local_310;
                }
                else {
                  uVar36 = *local_310;
                  if ((uVar36 & 1) != 0) {
                    uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
                  }
                }
                lVar30 = local_308 * lVar23 + uVar36;
              }
              lVar30 = (**(code **)(*plVar34 + 0x210))(plVar34,lVar30);
              if ((lVar30 == lVar37) || (lVar30 == lVar41)) goto LAB_140b0e80a;
              lVar23 = lVar23 + 1;
            } while (lVar22 != lVar23);
            lVar37 = *(longlong *)(lVar37 + 0x18);
            lVar23 = 0;
            do {
              if ((int)local_310[1] == 0) {
                lVar30 = 0;
              }
              else {
                if ((local_300 & 1) == 0) {
                  uVar36 = *local_310;
                }
                else {
                  uVar36 = *local_310;
                  if ((uVar36 & 1) != 0) {
                    uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
                  }
                }
                lVar30 = local_308 * lVar23 + uVar36;
              }
              lVar30 = (**(code **)(*plVar34 + 0x210))(plVar34,lVar30);
              if ((lVar30 != 0) && (*(longlong *)(lVar30 + 0x18) == lVar37)) goto LAB_140b0e80a;
              lVar23 = lVar23 + 1;
            } while (lVar22 != lVar23);
          }
          goto LAB_140b0e914;
        }
      }
LAB_140b0e978:
      local_34c = 0;
      plVar40 = *(longlong **)(*param_2 + 8);
      puVar5 = (ulonglong *)plVar40[1];
      piVar1 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar1) {
        if ((*(byte *)((longlong)plVar40 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar40 + 0x170))(plVar40,&local_34c,4);
        }
        else {
          FUN_14572512c();
        }
      }
      else {
        local_34c = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar1;
      }
      if (local_34c != 0) {
        if (pplVar19 == (longlong **)0x0) {
          pplVar19 = (longlong **)FUN_14001cc68((longlong)*(int *)((longlong)plVar34 + 0x34));
          if ((*(byte *)((longlong)plVar34 + 0x39) & 2) == 0) {
            (**(code **)(*plVar34 + 0x160))(plVar34,pplVar19);
          }
          else {
            memset(pplVar19,0,
                   (longlong)(int)plVar34[6] * (longlong)*(int *)((longlong)plVar34 + 0x34));
          }
        }
        if (0 < local_34c) {
          local_3a0 = (ulonglong *)(ulonglong)(uint)local_310[1];
          iVar13 = 0;
          local_390 = pplVar19;
LAB_140b0ea1d:
          uVar36 = *(ulonglong *)(local_3b0 + 0x78);
          if (uVar36 == 0 || puVar28[0xe] != local_3b0 && local_3b0 != 0) {
            uVar36 = 0;
          }
          else if (*(code **)(*puVar28 + 0x228) == FUN_144a610a4) {
            uVar21 = puVar28[0xf];
            if (uVar21 == 0) {
              uVar21 = FUN_14001cc68(0x58,0x10);
              *(undefined8 *)(uVar21 + 0x40) = 0;
              *(undefined8 *)(uVar21 + 0x48) = 0x800000000;
              *(undefined4 *)(uVar21 + 0x50) = 0;
              puVar28[0xf] = uVar21;
              iVar14 = 0;
              uVar27 = 8;
            }
            else {
              iVar14 = *(int *)(uVar21 + 0x48);
              uVar27 = *(uint *)(uVar21 + 0x4c);
            }
            *(uint *)(uVar21 + 0x48) = iVar14 + 1U;
            if (uVar27 < iVar14 + 1U) {
              FUN_140b4c3de(uVar21,iVar14);
            }
            uVar42 = *(ulonglong *)(uVar21 + 0x40);
            if (*(ulonglong *)(uVar21 + 0x40) == 0) {
              uVar42 = uVar21;
            }
            *(ulonglong *)(uVar42 + (longlong)iVar14 * 8) = uVar36;
            iVar14 = *(int *)(uVar21 + 0x50) + 1;
            do {
              iVar12 = iVar14;
              iVar14 = 1;
            } while (iVar12 == 0);
            *(int *)(uVar21 + 0x50) = iVar12;
            local_3b8[0xe] = uVar36;
          }
          else {
            (**(code **)(*puVar28 + 0x228))
                      (puVar28,uVar36,(uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1)
            ;
          }
          if (local_280 == '\x01') {
            lVar41 = (**(code **)(**(longlong **)(*param_2 + 8) + 0x28))();
            plVar40 = *(longlong **)(local_3b0 + 0x78);
            local_3e8 = 0;
            uStack_3e0 = 0;
            iVar14 = (**(code **)(*plVar40 + 0xc0))(plVar40,local_2f8,param_2,pplVar19);
            if ((iVar14 != 1) && (iVar14 != 3)) {
              if (iVar14 != 2) goto LAB_140b0eb35;
              (**(code **)(*(longlong *)plVar40[0xe] + 0x380))((longlong *)plVar40[0xe],pplVar19);
              (**(code **)(**(longlong **)(*param_2 + 8) + 0x1a0))
                        (*(longlong **)(*param_2 + 8),lVar41 + local_2bc);
            }
          }
          else {
LAB_140b0eb35:
            (**(code **)(**(longlong **)(local_3b0 + 0x78) + 0xd0))
                      (*(longlong **)(local_3b0 + 0x78),param_2,pplVar19,0);
          }
          puVar28 = local_3b8;
          if (uVar36 != 0) {
            if (*(code **)(*local_3b8 + 0x230) == (code *)&LAB_1449b19a2) {
              uVar36 = local_3b8[0xf];
              *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
              iVar14 = *(int *)(uVar36 + 0x50) + 1;
              do {
                iVar12 = iVar14;
                iVar14 = 1;
              } while (iVar12 == 0);
              *(int *)(uVar36 + 0x50) = iVar12;
              uVar36 = local_3b8[0xf];
              if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
                uVar36 = 0;
              }
              else {
                uVar21 = *(ulonglong *)(uVar36 + 0x40);
                if (*(ulonglong *)(uVar36 + 0x40) == 0) {
                  uVar21 = uVar36;
                }
                uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
              }
              local_3b8[0xe] = uVar36;
            }
            else {
              (**(code **)(*local_3b8 + 0x230))
                        (local_3b8,uVar36,
                         (uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1);
            }
          }
          lVar41 = (**(code **)(*plVar34 + 0x210))(plVar34);
          if (lVar41 != 0) {
            lVar37 = FUN_144938c96(lVar41);
            if ((lVar37 != 0) && (lVar22 = (longlong)(int)local_310[1], 0 < lVar22)) {
              lVar23 = 0;
              do {
                lVar30 = (**(code **)(*plVar34 + 0x210))(plVar34);
                if ((lVar30 == lVar37) || (lVar30 == lVar41)) goto LAB_140b0ec71;
                lVar23 = lVar23 + 1;
              } while (lVar22 != lVar23);
              lVar37 = *(longlong *)(lVar37 + 0x18);
              lVar23 = 0;
              do {
                lVar30 = (**(code **)(*plVar34 + 0x210))(plVar34);
                if ((lVar30 != 0) && (*(longlong *)(lVar30 + 0x18) == lVar37)) goto LAB_140b0ec71;
                lVar23 = lVar23 + 1;
              } while (lVar22 != lVar23);
            }
            goto LAB_140b0ec80;
          }
          goto LAB_140b0edf3;
        }
      }
LAB_140b0ef85:
      if (pplVar19 == (longlong **)0x0) goto LAB_140b0efa7;
      if ((*(byte *)((longlong)plVar34 + 0x3c) & 0x10) == 0) {
        (**(code **)(*plVar34 + 0x148))(plVar34,pplVar19);
      }
    }
    FUN_1400020a8(pplVar19);
    goto LAB_140b0efa7;
  }
  plVar34 = *(longlong **)(*param_2 + 8);
  puVar5 = (ulonglong *)plVar34[1];
  puVar25 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar25) {
    if ((*(byte *)((longlong)plVar34 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar34 + 0x170))(plVar34,&local_31c,4);
    }
    else {
      FUN_14572512c();
    }
  }
  else {
    local_31c = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar25;
  }
  uVar27 = local_31c;
  if ((puVar28[5] & 1) != 0) {
    if ((*(byte *)((longlong)local_3b8 + 0x2c) & 1) == 0) {
      uVar36 = (ulonglong)local_31c;
      iVar13 = (int)local_310[1];
      if (((iVar13 != 0) && (0 < iVar13)) && ((local_318[7] & 0x1040000000U) == 0)) {
        iVar14 = iVar13;
        if ((local_300 & 1) == 0) {
          uVar21 = *local_310;
        }
        else {
          uVar21 = *local_310;
          param_1 = local_3b0;
          if ((uVar21 & 1) != 0) {
            uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
          }
        }
        do {
          if ((local_318[7] & 0x1000000000U) == 0) {
            (**(code **)(*local_318 + 0x148))(local_318,uVar21);
          }
          uVar21 = uVar21 + (longlong)local_308;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (iVar13 != 0 || uVar27 != 0) {
        *(undefined4 *)(local_310 + 1) = 0;
        if ((local_300 & 1) == 0) {
          if (*(uint *)((longlong)local_310 + 0xc) != uVar27) {
            FUN_14474d398(local_310,uVar27);
          }
        }
        else if (*(uint *)((longlong)local_310 + 0xc) != uVar27) {
          FUN_1468c0360(local_310,uVar27,local_308,local_304);
        }
      }
      param_2 = local_3c0;
      iVar13 = (int)local_310[1];
      iVar14 = iVar13 + uVar27;
      *(int *)(local_310 + 1) = iVar14;
      if ((local_300 & 1) == 0) {
        if (*(int *)((longlong)local_310 + 0xc) < iVar14) {
          FUN_14097bbd2();
        }
      }
      else if (*(int *)((longlong)local_310 + 0xc) < iVar14) {
        FUN_1468c03c2(local_310,iVar13,local_308,local_304);
      }
      if (0 < (int)uVar27) {
        if ((int)local_310[1] == 0) {
          pvVar39 = (void *)0x0;
        }
        else {
          if ((local_300 & 1) == 0) {
            uVar21 = *local_310;
          }
          else {
            uVar21 = *local_310;
            param_2 = local_3c0;
            param_1 = local_3b0;
            if ((uVar21 & 1) != 0) {
              uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
            }
          }
          pvVar39 = (void *)((longlong)local_308 * (longlong)iVar13 + uVar21);
        }
        if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
          do {
            if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
              (**(code **)(*local_318 + 0x160))();
            }
            else {
              memset(pvVar39,0,
                     (longlong)(int)local_318[6] * (longlong)*(int *)((longlong)local_318 + 0x34));
            }
            pvVar39 = (void *)((longlong)pvVar39 + (longlong)local_308);
            uVar27 = (int)uVar36 - 1;
            uVar36 = (ulonglong)uVar27;
          } while (uVar27 != 0);
        }
        else {
          _Size = (longlong)local_308 * uVar36;
LAB_140b0e13a:
          memset(pvVar39,0,_Size);
        }
      }
    }
    else {
      iVar13 = (int)local_310[1];
      if (iVar13 < (int)local_31c) {
        uVar27 = local_31c - iVar13;
        uVar36 = (ulonglong)uVar27;
        *(uint *)(local_310 + 1) = local_31c;
        if ((local_300 & 1) == 0) {
          if (*(int *)((longlong)local_310 + 0xc) < (int)local_31c) {
            FUN_14097bbd2();
          }
        }
        else if (*(int *)((longlong)local_310 + 0xc) < (int)local_31c) {
          FUN_1468c03c2(local_310,iVar13,local_308,local_304);
        }
        if (0 < (int)uVar27) {
          if ((int)local_310[1] == 0) {
            pvVar39 = (void *)0x0;
          }
          else {
            if ((local_300 & 1) == 0) {
              uVar21 = *local_310;
            }
            else {
              uVar21 = *local_310;
              param_2 = local_3c0;
              param_1 = local_3b0;
              if ((uVar21 & 1) != 0) {
                uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
              }
            }
            pvVar39 = (void *)((longlong)local_308 * (longlong)iVar13 + uVar21);
          }
          if ((*(byte *)((longlong)local_318 + 0x39) & 2) != 0) {
            _Size = (longlong)local_308 * uVar36;
            goto LAB_140b0e13a;
          }
          do {
            if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
              (**(code **)(*local_318 + 0x160))();
            }
            else {
              memset(pvVar39,0,
                     (longlong)(int)local_318[6] * (longlong)*(int *)((longlong)local_318 + 0x34));
            }
            pvVar39 = (void *)((longlong)pvVar39 + (longlong)local_308);
            uVar27 = (int)uVar36 - 1;
            uVar36 = (ulonglong)uVar27;
          } while (uVar27 != 0);
        }
      }
      else if ((int)local_31c < iVar13) {
        iVar14 = iVar13 - local_31c;
        if ((iVar14 != 0 && (int)local_31c <= iVar13) && ((local_318[7] & 0x1040000000U) == 0)) {
          iVar12 = iVar14;
          if (iVar13 == 0) {
            lVar41 = 0;
          }
          else {
            if ((local_300 & 1) == 0) {
              uVar36 = *local_310;
            }
            else {
              uVar36 = *local_310;
              if ((uVar36 & 1) != 0) {
                uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
              }
            }
            lVar41 = (longlong)local_308 * (longlong)(int)local_31c + uVar36;
          }
          do {
            if ((local_318[7] & 0x1000000000U) == 0) {
              (**(code **)(*local_318 + 0x148))(local_318,lVar41);
            }
            lVar41 = lVar41 + local_308;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        local_1f8 = &local_318;
        uStack_1f0 = (ulonglong *)CONCAT44(iVar14,uVar27);
        FUN_140eff44e();
        param_2 = local_3c0;
        param_1 = local_3b0;
      }
    }
  }
  puVar28 = local_3b8;
  (**(code **)(*local_3b8 + 0x10))
            (local_3b8,(longlong)(int)local_310[1] * (longlong)local_308,
             (longlong)*(int *)((longlong)local_310 + 0xc) * (longlong)local_308);
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar17 = 0xffffffff;
    LOCK();
    bVar43 = DAT_14c75ec34 != 0xffffffff;
    DVar9 = dwTlsIndex;
    if (bVar43) {
      DVar17 = DAT_14c75ec34;
      DVar9 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar9;
    UNLOCK();
    puVar28 = local_3b8;
    param_2 = local_3c0;
    param_1 = local_3b0;
    if (bVar43) {
      TlsFree(dwTlsIndex);
      puVar28 = local_3b8;
      param_2 = local_3c0;
      param_1 = local_3b0;
      dwTlsIndex = DVar17;
    }
  }
  pvVar18 = TlsGetValue(dwTlsIndex);
  if (pvVar18 == (LPVOID)0x0) {
    pvVar18 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar18);
    FUN_140fddf04(pvVar18);
    puVar28 = local_3b8;
    TlsSetValue(dwTlsIndex,pvVar18);
  }
  if (499 < (int)puVar28[8] && (int)(puVar28[8] >> 0x20) < 0x3f4) {
    puVar33 = *(undefined **)(*(longlong *)(param_1 + 0x78) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_3d8 = (undefined *)FUN_140342cba();
        local_3d0 = FUN_1468c7f1e;
        uStack_3e0 = 0;
        local_3e8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_3d0 = FUN_1403a682c;
      local_3d8 = &DAT_14c951a38;
      uStack_3e0 = 0;
      local_3e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
      puVar28 = local_3b8;
      param_2 = local_3c0;
      param_1 = local_3b0;
    }
    if (DAT_14c952a10 == 0) {
      bVar43 = puVar33 != (undefined *)0x0;
      if (puVar33 != &DAT_14c952a08 && bVar43) {
        do {
          puVar33 = *(undefined **)(puVar33 + 0x30);
          bVar43 = puVar33 != (undefined *)0x0;
          if (puVar33 == &DAT_14c952a08) break;
        } while (puVar33 != (undefined *)0x0);
      }
      if (bVar43) goto LAB_140b0d641;
    }
    else if ((*(ulonglong *)(puVar33 + 0x18) & DAT_14c952a10) != 0) {
LAB_140b0d641:
      if (local_200 == '\0') {
        FUN_140a6bd9e(&local_278,*(undefined8 *)(param_1 + 0x78),0,param_3);
        local_200 = '\x01';
        local_1e0 = &local_1e8;
        local_1f8 = (longlong **)&PTR_FUN_149e37810;
        local_1e8 = &local_1f8;
        uStack_1f0 = puVar28;
        FUN_140241707(local_1e0,&local_278);
      }
      if ((puVar28[5] & 1) == 0) goto LAB_140b0d6a4;
      FUN_1468dc184(&local_1f8,local_270,*(undefined8 *)(param_1 + 0x78));
      if ((int)local_1f8 != 0) {
        FUN_140241d2e(&local_278);
      }
      cVar11 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x1a8))
                         (*(longlong **)(param_1 + 0x78),local_270);
      if (cVar11 != '\0') goto LAB_140b0d6a4;
      plVar34 = *(longlong **)(param_1 + 0x78);
      uVar27 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)local_270 >> 0xd) * 8) + 8 +
                      (ulonglong)(local_270 & 0x1fff) * 0xc)) {
        uVar27 = local_270 + 1;
      }
      if ((*(byte *)(plVar34[0xe] + 0xb2) & 8) != 0) {
        lVar41 = *(longlong *)
                  (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar27 >> 0xd) * 8) +
                  (ulonglong)(uVar27 & 0x1fff) * 0xc);
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        if ((local_26c != DAT_14c892b68) || (lVar41 != *(longlong *)(plVar34[0xe] + 0x18))) {
          puVar35 = &local_278;
          puVar38 = local_2f8;
          for (lVar41 = 0xf; lVar41 != 0; lVar41 = lVar41 + -1) {
            *puVar38 = *puVar35;
            puVar35 = puVar35 + 1;
            puVar38 = puVar38 + 1;
          }
          local_280 = '\x01';
          goto LAB_140b0d6a4;
        }
      }
      local_180 = (longlong **)0x0;
      local_178 = 0xa00000000;
      local_148 = 0;
      local_140 = 0xa00000000;
      local_138 = 0xffffffff;
      (**(code **)(*plVar34 + 0x1a0))(plVar34);
      lVar41 = (**(code **)(*puVar28 + 0x28))(puVar28);
      lVar22 = (longlong)local_23c[0];
      lVar37 = (**(code **)(*puVar28 + 0x28))(puVar28);
      lVar37 = (lVar22 + lVar41) - lVar37;
      if (0 < lVar37) {
        lVar41 = 0;
        do {
          puVar5 = (ulonglong *)puVar28[1];
          puVar3 = (undefined1 *)*puVar5 + 1;
          if ((undefined1 *)puVar5[1] < puVar3) {
            (**(code **)(*puVar28 + 0x170))(puVar28,&local_338,1);
          }
          else {
            local_338 = (longlong **)CONCAT71(local_338._1_7_,*(undefined1 *)*puVar5);
            *puVar5 = (ulonglong)puVar3;
          }
          lVar41 = lVar41 + 1;
        } while (lVar41 < lVar37);
      }
      pplVar19 = local_180;
      if (local_148 != 0) {
        FUN_1400020a8();
        pplVar19 = local_180;
      }
      goto LAB_140b0e4da;
    }
  }
LAB_140b0d6a4:
  local_398 = (**(code **)(*puVar28 + 0x28))(puVar28);
  bVar10 = *(byte *)((longlong)puVar28 + 0x2c);
  local_3a0 = (ulonglong *)(CONCAT71(local_3a0._1_7_,bVar10) & 0xffffffffffffff01);
  iVar13 = 0;
  if (((bVar10 & 1) == 0) ||
     (plVar34 = (longlong *)puVar28[0xc], iVar13 = 0, plVar34 == (longlong *)0x0)) {
LAB_140b0dbc2:
    *(byte *)((longlong)puVar28 + 0x2c) = bVar10 & 0xfe;
    uVar36 = *(ulonglong *)(param_1 + 0x78);
    if (uVar36 == 0 || puVar28[0xe] != param_1 && param_1 != 0) {
      uVar36 = 0;
    }
    else if (*(code **)(*puVar28 + 0x228) == FUN_144a610a4) {
      uVar21 = puVar28[0xf];
      if (uVar21 == 0) {
        uVar21 = FUN_14001cc68(0x58,0x10);
        *(undefined8 *)(uVar21 + 0x40) = 0;
        *(undefined8 *)(uVar21 + 0x48) = 0x800000000;
        *(undefined4 *)(uVar21 + 0x50) = 0;
        local_3b8[0xf] = uVar21;
        iVar14 = 0;
        uVar27 = 8;
      }
      else {
        iVar14 = *(int *)(uVar21 + 0x48);
        uVar27 = *(uint *)(uVar21 + 0x4c);
      }
      *(uint *)(uVar21 + 0x48) = iVar14 + 1U;
      if (uVar27 < iVar14 + 1U) {
        FUN_140b4c3de(uVar21,iVar14);
      }
      uVar42 = *(ulonglong *)(uVar21 + 0x40);
      if (*(ulonglong *)(uVar21 + 0x40) == 0) {
        uVar42 = uVar21;
      }
      *(ulonglong *)(uVar42 + (longlong)iVar14 * 8) = uVar36;
      iVar14 = *(int *)(uVar21 + 0x50) + 1;
      do {
        iVar12 = iVar14;
        iVar14 = 1;
      } while (iVar12 == 0);
      *(int *)(uVar21 + 0x50) = iVar12;
      local_3b8[0xe] = uVar36;
    }
    else {
      (**(code **)(*puVar28 + 0x228))
                (puVar28,uVar36,(uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1);
    }
    if (iVar13 < (int)local_31c) {
      lVar41 = (longlong)iVar13;
      do {
        if ((int)local_310[1] == 0) {
          lVar37 = 0;
        }
        else {
          if ((local_300 & 1) == 0) {
            uVar21 = *local_310;
          }
          else {
            uVar21 = *local_310;
            if ((uVar21 & 1) != 0) {
              uVar21 = (longlong)local_310 + ((longlong)uVar21 >> 0x18);
            }
          }
          lVar37 = local_308 * lVar41 + uVar21;
        }
        if (local_280 == '\x01') {
          lVar22 = (**(code **)(**(longlong **)(*param_2 + 8) + 0x28))();
          plVar34 = *(longlong **)(param_1 + 0x78);
          local_3e8 = 0;
          uStack_3e0 = 0;
          iVar13 = (**(code **)(*plVar34 + 0xc0))(plVar34,local_2f8,param_2,lVar37);
          if ((iVar13 != 1) && (iVar13 != 3)) {
            if (iVar13 != 2) goto LAB_140b0dd39;
            (**(code **)(*(longlong *)plVar34[0xe] + 0x380))((longlong *)plVar34[0xe],lVar37);
            (**(code **)(**(longlong **)(*param_2 + 8) + 0x1a0))
                      (*(longlong **)(*param_2 + 8),lVar22 + local_2bc);
          }
        }
        else {
LAB_140b0dd39:
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0xd0))
                    (*(longlong **)(param_1 + 0x78),param_2,lVar37,0);
        }
        lVar41 = lVar41 + 1;
      } while (lVar41 < (int)local_31c);
    }
    puVar28 = local_3b8;
    *(byte *)((longlong)local_3b8 + 0x2c) =
         (*(byte *)((longlong)local_3b8 + 0x2c) & 0xfe) + (char)local_3a0;
    if (uVar36 != 0) {
      if (*(code **)(*local_3b8 + 0x230) == (code *)&LAB_1449b19a2) {
        uVar36 = local_3b8[0xf];
        *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
        iVar13 = *(int *)(uVar36 + 0x50) + 1;
        do {
          iVar14 = iVar13;
          iVar13 = 1;
        } while (iVar14 == 0);
        *(int *)(uVar36 + 0x50) = iVar14;
        uVar36 = local_3b8[0xf];
        if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
          uVar36 = 0;
        }
        else {
          uVar21 = *(ulonglong *)(uVar36 + 0x40);
          if (*(ulonglong *)(uVar36 + 0x40) == 0) {
            uVar21 = uVar36;
          }
          uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
        }
        local_3b8[0xe] = uVar36;
      }
      else {
        (**(code **)(*local_3b8 + 0x230))
                  (local_3b8,uVar36,(uint)((ulonglong)*(undefined8 *)(uVar36 + 0x38) >> 0x23) & 1);
      }
    }
  }
  else {
    puVar25 = *(uint **)(param_1 + 0x78);
    iVar13 = 0;
    if (puVar25 == (uint *)0x0 || puVar28[0xe] != param_1 && param_1 != 0) {
      local_3a8 = (uint *)0x0;
    }
    else {
      local_3a8 = puVar25;
      if (*(code **)(*puVar28 + 0x228) == FUN_144a610a4) {
        uVar36 = puVar28[0xf];
        if (uVar36 == 0) {
          uVar36 = FUN_14001cc68(0x58,0x10);
          *(undefined8 *)(uVar36 + 0x40) = 0;
          *(undefined8 *)(uVar36 + 0x48) = 0x800000000;
          *(undefined4 *)(uVar36 + 0x50) = 0;
          local_3b8[0xf] = uVar36;
          iVar14 = 0;
          uVar27 = 8;
        }
        else {
          iVar14 = *(int *)(uVar36 + 0x48);
          uVar27 = *(uint *)(uVar36 + 0x4c);
        }
        *(uint *)(uVar36 + 0x48) = iVar14 + 1U;
        if (uVar27 < iVar14 + 1U) {
          FUN_140b4c3de(uVar36,iVar14);
        }
        uVar21 = *(ulonglong *)(uVar36 + 0x40);
        if (*(ulonglong *)(uVar36 + 0x40) == 0) {
          uVar21 = uVar36;
        }
        *(uint **)(uVar21 + (longlong)iVar14 * 8) = puVar25;
        iVar14 = *(int *)(uVar36 + 0x50) + 1;
        do {
          iVar12 = iVar14;
          iVar14 = 1;
        } while (iVar12 == 0);
        *(int *)(uVar36 + 0x50) = iVar12;
        local_3b8[0xe] = (ulonglong)puVar25;
      }
      else {
        (**(code **)(*puVar28 + 0x228))
                  (puVar28,puVar25,(uint)((ulonglong)*(undefined8 *)(puVar25 + 0xe) >> 0x23) & 1);
      }
    }
    bVar43 = false;
    plVar40 = plVar34;
    do {
      plVar7 = local_3c0;
      if (((int)local_31c <= iVar13) || (bVar43)) break;
      if (*plVar40 == *(longlong *)(param_1 + 0x78)) {
        local_1f8 = (longlong **)*plVar40;
        local_1e8 = (longlong ***)plVar40[2];
        uStack_1f0 = (ulonglong *)((ulonglong)*(uint *)((longlong)plVar40 + 0xc) << 0x20);
        local_1e0 = (undefined8 *)0x0;
        local_3b8[0xc] = (ulonglong)&local_1f8;
        iVar13 = (int)plVar40[1];
        if ((int)local_310[1] == 0) {
          lVar41 = 0;
        }
        else {
          if ((local_300 & 1) == 0) {
            uVar36 = *local_310;
          }
          else {
            uVar36 = *local_310;
            if ((uVar36 & 1) != 0) {
              uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
            }
          }
          lVar41 = (longlong)local_308 * (longlong)iVar13 + uVar36;
        }
        if (local_280 == '\x01') {
          lVar37 = (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x28))();
          param_1 = local_3b0;
          plVar6 = *(longlong **)(local_3b0 + 0x78);
          local_3e8 = 0;
          uStack_3e0 = 0;
          iVar14 = (**(code **)(*plVar6 + 0xc0))(plVar6,local_2f8,plVar7,lVar41);
          if ((iVar14 != 1) && (iVar14 != 3)) {
            if (iVar14 != 2) goto LAB_140b0db6f;
            (**(code **)(*(longlong *)plVar6[0xe] + 0x380))((longlong *)plVar6[0xe],lVar41);
            (**(code **)(**(longlong **)(*local_3c0 + 8) + 0x1a0))
                      (*(longlong **)(*local_3c0 + 8),lVar37 + local_2bc);
          }
        }
        else {
LAB_140b0db6f:
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0xd0))
                    (*(longlong **)(param_1 + 0x78),local_3c0,lVar41,0);
        }
        plVar40 = (longlong *)plVar40[3];
        local_3b8[0xc] = (ulonglong)plVar34;
      }
      else {
        bVar43 = true;
        if (*plVar40 == 0) {
          iVar13 = (int)plVar40[1];
        }
      }
    } while (plVar40 != (longlong *)0x0);
    param_2 = local_3c0;
    if (local_3a8 != (uint *)0x0) {
      if (*(code **)(*local_3b8 + 0x230) == (code *)&LAB_1449b19a2) {
        uVar36 = local_3b8[0xf];
        *(int *)(uVar36 + 0x48) = *(int *)(uVar36 + 0x48) + -1;
        iVar14 = *(int *)(uVar36 + 0x50) + 1;
        do {
          iVar12 = iVar14;
          iVar14 = 1;
        } while (iVar12 == 0);
        *(int *)(uVar36 + 0x50) = iVar12;
        uVar36 = local_3b8[0xf];
        if ((longlong)*(int *)(uVar36 + 0x48) < 1) {
          uVar36 = 0;
        }
        else {
          uVar21 = *(ulonglong *)(uVar36 + 0x40);
          if (*(ulonglong *)(uVar36 + 0x40) == 0) {
            uVar21 = uVar36;
          }
          uVar36 = *(ulonglong *)((uVar21 - 8) + (longlong)*(int *)(uVar36 + 0x48) * 8);
        }
        local_3b8[0xe] = uVar36;
      }
      else {
        (**(code **)(*local_3b8 + 0x230))
                  (local_3b8,local_3a8,
                   (uint)((ulonglong)*(undefined8 *)(local_3a8 + 0xe) >> 0x23) & 1);
      }
    }
    puVar28 = local_3b8;
    if (bVar43) {
      bVar10 = *(byte *)((longlong)local_3b8 + 0x2c);
      goto LAB_140b0dbc2;
    }
  }
  if ((local_200 == '\x01') && ((puVar28[5] & 4) != 0)) {
    local_23c[0] = (**(code **)(*puVar28 + 0x28))(puVar28);
    local_23c[0] = local_23c[0] - (uint)local_398;
    if (0 < local_23c[0]) {
      uVar20 = (**(code **)(*puVar28 + 0x28))(puVar28);
      (**(code **)(*puVar28 + 0x1a0))(puVar28,local_230);
      plVar34 = (longlong *)puVar28[1];
      if ((int *)plVar34[1] < (int *)*plVar34 + 1) {
        if ((*(byte *)((longlong)puVar28 + 0x2a) & 2) == 0) {
          (**(code **)(*puVar28 + 0x170))(puVar28,local_23c,4);
        }
        else {
          FUN_14572512c(puVar28,local_23c);
        }
      }
      else {
        local_23c[0] = *(int *)*plVar34;
        *plVar34 = *plVar34 + 4;
      }
      (**(code **)(*puVar28 + 0x1a0))(puVar28,uVar20);
    }
  }
LAB_140b0efa7:
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140b0f835:
  puVar28 = uStack_330;
  if ((int)lVar23 != -1) {
    lVar22 = (longlong)(int)uStack_330;
    uVar27 = (int)uStack_330 + 1;
    uStack_330 = (ulonglong *)CONCAT44(uStack_330._4_4_,uVar27);
    if (uStack_330._4_4_ < uVar27) {
      FUN_1446f48e2(&local_338,(ulonglong)puVar28 & 0xffffffff);
    }
    *(int *)((longlong)local_338 + lVar22 * 4) = (int)lVar23;
  }
LAB_140b0f871:
  pplVar19 = local_390;
  param_1 = local_3b0;
  puVar28 = local_3b8;
  if ((local_3a8 != (uint *)0x0) &&
     (lVar22 = FUN_1468c47ee(local_3a8,1,local_3b8[0xf]), lVar22 != 0)) {
    FUN_1468c3c28(&local_348,lVar37);
    puVar28 = uStack_340;
    pplVar8 = local_348;
    if ((uStack_340 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uStack_340);
    }
    local_1f8 = pplVar8;
    uStack_1f0 = puVar28;
    if ((puVar28 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(puVar28);
    }
    lVar37 = FUN_1468c4036(local_3a8,lVar22,&local_1f8);
    *(undefined1 *)(lVar37 + 0x10) = 4;
    puVar28 = local_3b8;
    param_1 = local_3b0;
  }
LAB_140b0f888:
  iVar13 = iVar13 + 1;
  if (local_320 <= iVar13) goto LAB_140b0fa31;
  goto LAB_140b0f606;
LAB_140b0e80a:
  if ((int)lVar23 != -1) {
    if ((int)local_310[1] == 0) {
      lVar37 = 0;
    }
    else {
      if ((local_300 & 1) == 0) {
        uVar36 = *local_310;
      }
      else {
        uVar36 = *local_310;
        if ((uVar36 & 1) != 0) {
          uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
        }
      }
      lVar37 = (longlong)local_308 * (longlong)(int)lVar23 + uVar36;
    }
    (**(code **)(*plVar34 + 0x1f0))(plVar34,lVar37,lVar41);
  }
LAB_140b0e914:
  iVar13 = iVar13 + 1;
  puVar28 = local_3b8;
  param_2 = local_3c0;
  if ((int)local_348 <= iVar13) goto LAB_140b0e978;
  goto LAB_140b0e5a5;
LAB_140b0ec71:
  iVar14 = (int)lVar23;
  pplVar19 = local_390;
  if (iVar14 == -1) {
LAB_140b0ec80:
    iVar14 = (int)local_310[1];
    *(int *)(local_310 + 1) = iVar14 + 1;
    if ((local_300 & 1) == 0) {
      if (*(int *)((longlong)local_310 + 0xc) <= iVar14) {
        FUN_14097bbd2();
      }
    }
    else if (*(int *)((longlong)local_310 + 0xc) <= iVar14) {
      FUN_1468c03c2(local_310,iVar14,local_308);
    }
    pplVar19 = local_390;
    if ((int)local_310[1] == 0) {
      pvVar39 = (void *)0x0;
    }
    else {
      if ((local_300 & 1) == 0) {
        uVar36 = *local_310;
      }
      else {
        uVar36 = *local_310;
        puVar28 = local_3b8;
        if ((uVar36 & 1) != 0) {
          uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
        }
      }
      pvVar39 = (void *)((longlong)local_308 * (longlong)iVar14 + uVar36);
    }
    if ((*(byte *)((longlong)local_318 + 0x39) & 2) == 0) {
      (**(code **)(*local_318 + 0x160))();
    }
    else {
      memset(pvVar39,0,(longlong)local_308);
    }
    iVar14 = (int)local_3a0;
    local_3a0 = (ulonglong *)(ulonglong)(iVar14 + 1);
  }
  param_2 = local_3c0;
  if ((int)local_310[1] == 0) {
    lVar37 = 0;
  }
  else {
    if ((local_300 & 1) == 0) {
      uVar36 = *local_310;
    }
    else {
      uVar36 = *local_310;
      if ((uVar36 & 1) != 0) {
        uVar36 = (longlong)local_310 + ((longlong)uVar36 >> 0x18);
      }
    }
    lVar37 = (longlong)local_308 * (longlong)iVar14 + uVar36;
  }
  (**(code **)(*plVar34 + 0x1f0))(plVar34,lVar37,lVar41);
  if ((local_3a8 != (uint *)0x0) && (lVar37 = FUN_1468c47ee(local_3a8,1,puVar28[0xf]), lVar37 != 0))
  {
    FUN_1468c3c28(&local_338,lVar41);
    puVar28 = uStack_330;
    pplVar8 = local_338;
    if ((uStack_330 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uStack_330);
    }
    local_1f8 = pplVar8;
    uStack_1f0 = puVar28;
    if ((puVar28 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(puVar28);
    }
    lVar41 = FUN_1468c4036(local_3a8,lVar37,&local_1f8);
    *(undefined1 *)(lVar41 + 0x10) = 3;
    puVar28 = local_3b8;
  }
LAB_140b0edf3:
  iVar13 = iVar13 + 1;
  if (local_34c <= iVar13) goto LAB_140b0ef85;
  goto LAB_140b0ea1d;
}



// FUNCTION 140b1088a FUN_140b1088a body=270 status=ok
// SIG undefined FUN_140b1088a(void)

undefined8 FUN_140b1088a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140b10992;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b10992;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140b10992:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b10940;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140b10940;
    }
  }
  uVar6 = 0;
LAB_140b10940:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1099a FUN_140b1099a body=138 status=ok
// SIG undefined FUN_140b1099a(void)

void FUN_140b1099a(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140b10a34(&DAT_14cab24e8,&local_28);
  if ((((*(int *)(param_1 + 0x218) == (int)local_28) &&
       (*(int *)(param_1 + 0x21c) == local_28._4_4_)) &&
      (*(int *)(param_1 + 0x220) == (int)uStack_20)) &&
     (*(int *)(param_1 + 0x224) == uStack_20._4_4_)) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 140b10a34 FUN_140b10a34 body=308 status=ok
// SIG undefined FUN_140b10a34(void)

void FUN_140b10a34(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (iVar2 < 0x24) {
    if (iVar2 == 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (iVar2 == 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else {
    if (iVar2 == 0x24) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (iVar2 == 0x26) {
      FUN_1400b22c2(&local_30,L"{AbsoluteBase");
      iVar2 = local_28 + -1;
      puVar3 = local_30;
      if (local_28 == 0) {
        puVar3 = &DAT_149dfb77a;
        iVar2 = 0;
      }
      cVar1 = FUN_144a791f8(param_1,puVar3,iVar2,1);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 == '\0') {
        uVar4 = 5;
      }
      else {
        uVar4 = 4;
      }
      FUN_140b10bb8(param_1,uVar4,param_2);
    }
    else if (iVar2 == 0x44) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b10bb8 FUN_140b10bb8 body=3878 status=ok
// SIG undefined FUN_140b10bb8(void)

ulonglong FUN_140b10bb8(longlong *param_1,uint param_2,uint *param_3)

{
  void *pvVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  undefined2 *puVar9;
  undefined8 unaff_RBX;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ushort uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 9) {
    if ((int)param_1[1] == 0x1a) {
      puVar8 = (ushort *)*param_1;
      uVar18 = *puVar8;
      if (uVar18 == 0) {
        uVar15 = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar15 = 0;
        do {
          puVar8 = puVar8 + 1;
          uVar11 = (uVar17 & 0xffffffff) * 0x24;
          uVar12 = uVar11 & 0xffffffff;
          uVar11 = (uVar11 >> 0x20) + (uVar17 >> 0x20) * 0x24;
          if ((ushort)(uVar18 - 0x30) < 10) {
            uVar19 = uVar11 & 0xffffffff;
            uVar12 = uVar12 + (uVar18 - 0x30);
            uVar14 = uVar12 >> 0x20;
          }
          else {
            if (0x19 < (ushort)(uVar18 - 0x41)) goto LAB_140b112e7;
            uVar12 = uVar12 + (uVar18 - 0x37);
            uVar19 = uVar12 >> 0x20;
            uVar14 = uVar11 & 0xffffffff;
          }
          uVar17 = uVar14 + uVar19 << 0x20 | uVar12 & 0xffffffff;
          uVar15 = (uVar14 + uVar19 >> 0x20) +
                   (uVar15 & 0x3fffffff00000000) * 0x24 + (uVar15 & 0xffffffff) * 0x24 +
                   (uVar11 >> 0x20);
          uVar18 = *puVar8;
        } while (uVar18 != 0);
      }
      *param_3 = (uint)(uVar15 >> 0x20);
      param_3[1] = (uint)uVar15;
      param_3[2] = (uint)(uVar17 >> 0x20);
      param_3[3] = (uint)uVar17;
      uVar15 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      goto LAB_140b10e89;
    }
  }
  else {
    if (param_2 != 8) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      FUN_14005eb28(&local_58);
      if (param_2 < 2) {
        if ((int)param_1[1] != 0x21) goto LAB_140b11ad8;
        if (&local_58 != param_1) {
          pvVar1 = (void *)*param_1;
          uStack_50 = CONCAT44(uStack_50._4_4_,0x21);
          FUN_1446dd670(&local_58,0x21,uStack_50._4_4_);
          memcpy(local_58,pvVar1,0x42);
        }
switchD_140b11313_default:
        if ((uint)uStack_50 - 2 < 0x7fffffff) {
          lVar21 = 0;
          do {
            iVar3 = iswxdigit(local_58[lVar21]);
            if (iVar3 == 0) goto LAB_140b11ad8;
            lVar21 = lVar21 + 1;
            uVar7 = (uint)uStack_50 - 1;
            if ((uint)uStack_50 == 0) {
              uVar7 = 0;
            }
          } while (lVar21 < (int)uVar7);
        }
        else {
          uVar7 = (uint)uStack_50 - 1;
          if ((uint)uStack_50 == 0) {
            uVar7 = 0;
          }
        }
        uVar4 = 0x18;
        if ((int)uVar7 < 0x18) {
          uVar4 = uVar7;
        }
        uVar17 = 0;
        uVar20 = 0;
        uVar15 = (ulonglong)uVar4;
        if ((int)uVar4 < 1) {
          uVar15 = uVar17;
        }
        uVar4 = 0x20;
        if ((int)uVar7 < 0x20) {
          uVar4 = uVar7;
        }
        if ((longlong)(int)uVar4 < (longlong)uVar15) {
          uVar4 = (uint)uVar15;
        }
        puVar9 = &DAT_149dfb77a;
        if ((uint)uStack_50 != 0) {
          puVar9 = local_58;
        }
        FUN_14006620a(&local_68,puVar9 + uVar15,uVar4 - (uint)uVar15);
        puVar9 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar9 = local_68;
        }
        uVar4 = FUN_140b11ae0(puVar9);
        uVar7 = (uint)uStack_50 - 1;
        if ((uint)uStack_50 == 0) {
          uVar7 = uVar20;
        }
        uVar5 = 0x10;
        if ((int)uVar7 < 0x10) {
          uVar5 = uVar7;
        }
        uVar15 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar15 = uVar17;
        }
        uVar5 = 0x18;
        if ((int)uVar7 < 0x18) {
          uVar5 = uVar7;
        }
        uVar11 = (longlong)(int)uVar5;
        if ((longlong)(int)uVar5 < (longlong)uVar15) {
          uVar11 = uVar15;
        }
        puVar9 = &DAT_149dfb77a;
        if ((uint)uStack_50 != 0) {
          puVar9 = local_58;
        }
        FUN_14006620a(&local_78,puVar9 + uVar15,(int)uVar11 - (int)uVar15);
        puVar9 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        uVar5 = FUN_140b11ae0(puVar9);
        uVar7 = (uint)uStack_50 - 1;
        if ((uint)uStack_50 == 0) {
          uVar7 = uVar20;
        }
        uVar6 = 8;
        if ((int)uVar7 < 8) {
          uVar6 = uVar7;
        }
        uVar15 = (ulonglong)uVar6;
        if ((int)uVar6 < 1) {
          uVar15 = uVar17;
        }
        uVar6 = 0x10;
        if ((int)uVar7 < 0x10) {
          uVar6 = uVar7;
        }
        uVar17 = (longlong)(int)uVar6;
        if ((longlong)(int)uVar6 < (longlong)uVar15) {
          uVar17 = uVar15;
        }
        puVar9 = &DAT_149dfb77a;
        if ((uint)uStack_50 != 0) {
          puVar9 = local_58;
        }
        FUN_14006620a(&local_88,puVar9 + uVar15,(int)uVar17 - (int)uVar15);
        puVar9 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar9 = local_88;
        }
        uVar6 = FUN_140b11ae0(puVar9);
        uVar7 = (uint)uStack_50 - 1;
        if ((uint)uStack_50 == 0) {
          uVar7 = uVar20;
        }
        uVar10 = 8;
        if ((int)uVar7 < 8) {
          uVar10 = uVar7;
        }
        if ((int)uVar10 < 1) {
          uVar10 = uVar20;
        }
        puVar9 = &DAT_149dfb77a;
        if ((uint)uStack_50 != 0) {
          puVar9 = local_58;
        }
        FUN_14006620a(&local_98,puVar9,uVar10);
        puVar9 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar9 = local_98;
        }
        uVar7 = FUN_140b11ae0(puVar9);
        *param_3 = uVar7;
        param_3[1] = uVar6;
        param_3[2] = uVar5;
        param_3[3] = uVar4;
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8(local_98);
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar15 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
        puVar9 = local_58;
      }
      else {
        puVar9 = local_58;
        if ((param_2 & 0xfffffffe) == 2) {
          if (((((int)param_1[1] != 0x25) || (lVar21 = *param_1, *(short *)(lVar21 + 0x10) != 0x2d))
              || (*(short *)(lVar21 + 0x1a) != 0x2d)) || (*(short *)(lVar21 + 0x24) != 0x2d))
          goto LAB_140b11ad8;
          uVar15 = 0;
          if (*(short *)(lVar21 + 0x2e) != 0x2d) goto LAB_140b10e7f;
          FUN_14006620a(&local_68,lVar21,8);
          uVar17 = (ulonglong)(local_60 - 1);
          if (local_60 == 0) {
            uVar17 = uVar15;
          }
          FUN_1400020e8(&local_58,local_68,uVar17);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar3 = (int)param_1[1];
          uVar7 = iVar3 - 1;
          if (iVar3 == 0) {
            uVar7 = 0;
          }
          uVar4 = 9;
          if ((int)uVar7 < 9) {
            uVar4 = uVar7;
          }
          uVar15 = (ulonglong)uVar4;
          if ((int)uVar4 < 1) {
            uVar15 = 0;
          }
          uVar4 = 0xd;
          if ((int)uVar7 < 0xd) {
            uVar4 = uVar7;
          }
          if ((longlong)(int)uVar4 < (longlong)uVar15) {
            uVar4 = (uint)uVar15;
          }
          if (iVar3 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = (undefined2 *)*param_1;
          }
          FUN_14006620a(&local_68,puVar9 + uVar15,uVar4 - (uint)uVar15);
          uVar15 = (ulonglong)(local_60 - 1);
          if (local_60 == 0) {
            uVar15 = 0;
          }
          FUN_1400020e8(&local_58,local_68,uVar15);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar3 = (int)param_1[1];
          uVar7 = iVar3 - 1;
          if (iVar3 == 0) {
            uVar7 = 0;
          }
          uVar4 = 0xe;
          if ((int)uVar7 < 0xe) {
            uVar4 = uVar7;
          }
          uVar15 = (ulonglong)uVar4;
          if ((int)uVar4 < 1) {
            uVar15 = 0;
          }
          uVar4 = 0x12;
          if ((int)uVar7 < 0x12) {
            uVar4 = uVar7;
          }
          if ((longlong)(int)uVar4 < (longlong)uVar15) {
            uVar4 = (uint)uVar15;
          }
          if (iVar3 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = (undefined2 *)*param_1;
          }
          FUN_14006620a(&local_68,puVar9 + uVar15,uVar4 - (uint)uVar15);
          uVar15 = (ulonglong)(local_60 - 1);
          if (local_60 == 0) {
            uVar15 = 0;
          }
          FUN_1400020e8(&local_58,local_68,uVar15);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar3 = (int)param_1[1];
          uVar7 = iVar3 - 1;
          if (iVar3 == 0) {
            uVar7 = 0;
          }
          uVar4 = 0x13;
          if ((int)uVar7 < 0x13) {
            uVar4 = uVar7;
          }
          uVar15 = (ulonglong)uVar4;
          if ((int)uVar4 < 1) {
            uVar15 = 0;
          }
          uVar4 = 0x17;
          if ((int)uVar7 < 0x17) {
            uVar4 = uVar7;
          }
          if ((longlong)(int)uVar4 < (longlong)uVar15) {
            uVar4 = (uint)uVar15;
          }
          if (iVar3 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = (undefined2 *)*param_1;
          }
          FUN_14006620a(&local_68,puVar9 + uVar15,uVar4 - (uint)uVar15);
          uVar15 = (ulonglong)(local_60 - 1);
          if (local_60 == 0) {
            uVar15 = 0;
          }
          FUN_1400020e8(&local_58,local_68,uVar15);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar3 = (int)param_1[1];
          uVar7 = iVar3 - 1;
          if (iVar3 == 0) {
            uVar7 = 0;
          }
          uVar4 = 0x18;
          if ((int)uVar7 < 0x18) {
            uVar4 = uVar7;
          }
          uVar15 = (ulonglong)uVar4;
          if ((int)uVar4 < 1) {
            uVar15 = 0;
          }
          uVar4 = 0x24;
          if ((int)uVar7 < 0x24) {
            uVar4 = uVar7;
          }
          if ((longlong)(int)uVar4 < (longlong)uVar15) {
            uVar4 = (uint)uVar15;
          }
          if (iVar3 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = (undefined2 *)*param_1;
          }
          FUN_14006620a(&local_68,puVar9 + uVar15,uVar4 - (uint)uVar15);
          uVar15 = (ulonglong)(local_60 - 1);
          if (local_60 == 0) {
            uVar15 = 0;
          }
          FUN_1400020e8(&local_58,local_68,uVar15);
LAB_140b11120:
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto switchD_140b11313_default;
        }
        switch(param_2) {
        case 4:
          if ((((int)param_1[1] == 0x27) && (psVar2 = (short *)*param_1, *psVar2 == 0x7b)) &&
             (((psVar2[9] == 0x2d && ((psVar2[0xe] == 0x2d && (psVar2[0x13] == 0x2d)))) &&
              (psVar2[0x18] == 0x2d)))) {
            uVar15 = 0;
            if (psVar2[0x25] == 0x7d) {
LAB_140b11411:
              FUN_144a63a7c(param_1,&local_68,1,8);
              iVar3 = local_60 + -1;
              if (local_60 == 0) {
                iVar3 = 0;
              }
              FUN_1400020e8(&local_58,local_68,iVar3);
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_144a63a7c(param_1,&local_68,10,4);
              iVar3 = local_60 + -1;
              if (local_60 == 0) {
                iVar3 = 0;
              }
              FUN_1400020e8(&local_58,local_68,iVar3);
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_144a63a7c(param_1,&local_68,0xf,4);
              iVar3 = local_60 + -1;
              if (local_60 == 0) {
                iVar3 = 0;
              }
              FUN_1400020e8(&local_58,local_68,iVar3);
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_144a63a7c(param_1,&local_68,0x14,4);
              iVar3 = local_60 + -1;
              if (local_60 == 0) {
                iVar3 = 0;
              }
              FUN_1400020e8(&local_58,local_68,iVar3);
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar13 = 0x19;
              uVar16 = 0xc;
LAB_140b11534:
              FUN_144a63a7c(param_1,&local_68,uVar13,uVar16);
              iVar3 = local_60 + -1;
              if (local_60 == 0) {
                iVar3 = 0;
              }
LAB_140b11ac3:
              FUN_1400020e8(&local_58,local_68,iVar3);
              goto LAB_140b11120;
            }
          }
          else {
LAB_140b11ad8:
            uVar15 = 0;
            puVar9 = local_58;
          }
          break;
        case 5:
          if ((((int)param_1[1] != 0x27) || (psVar2 = (short *)*param_1, *psVar2 != 0x28)) ||
             ((psVar2[9] != 0x2d ||
              (((psVar2[0xe] != 0x2d || (psVar2[0x13] != 0x2d)) || (psVar2[0x18] != 0x2d))))))
          goto LAB_140b11ad8;
          uVar15 = 0;
          if (psVar2[0x25] == 0x29) goto LAB_140b11411;
          break;
        case 6:
          if ((((((int)param_1[1] != 0x45) || (psVar2 = (short *)*param_1, *psVar2 != 0x7b)) ||
               ((((psVar2[1] != 0x30 ||
                  (((psVar2[2] != 0x78 || (psVar2[0xb] != 0x2c)) || (psVar2[0xc] != 0x30)))) ||
                 ((psVar2[0xd] != 0x78 || (psVar2[0x12] != 0x2c)))) || (psVar2[0x13] != 0x30)))) ||
              ((((((psVar2[0x14] != 0x78 || (psVar2[0x19] != 0x2c)) ||
                  ((psVar2[0x1a] != 0x7b ||
                   (((psVar2[0x1b] != 0x30 || (psVar2[0x1c] != 0x78)) || (psVar2[0x1f] != 0x2c))))))
                 || ((psVar2[0x20] != 0x30 || (psVar2[0x21] != 0x78)))) ||
                ((psVar2[0x24] != 0x2c ||
                 (((psVar2[0x25] != 0x30 || (psVar2[0x26] != 0x78)) ||
                  ((psVar2[0x29] != 0x2c ||
                   (((((psVar2[0x2a] != 0x30 || (psVar2[0x2b] != 0x78)) || (psVar2[0x2e] != 0x2c))
                     || ((psVar2[0x2f] != 0x30 || (psVar2[0x30] != 0x78)))) ||
                    (psVar2[0x33] != 0x2c)))))))))) ||
               ((psVar2[0x34] != 0x30 || (psVar2[0x35] != 0x78)))))) ||
             ((psVar2[0x38] != 0x2c ||
              ((((psVar2[0x39] != 0x30 || (psVar2[0x3a] != 0x78)) || (psVar2[0x3d] != 0x2c)) ||
               (((psVar2[0x3e] != 0x30 || (psVar2[0x3f] != 0x78)) || (psVar2[0x42] != 0x7d))))))))
          goto LAB_140b11ad8;
          uVar15 = 0;
          if (psVar2[0x43] == 0x7d) {
            FUN_144a63a7c(param_1,&local_68,3,8);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0xe,4);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x15,4);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x1d,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x22,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x27,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x2c,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x31,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x36,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x3b,2);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            uVar13 = 0x40;
            uVar16 = 2;
            goto LAB_140b11534;
          }
          break;
        case 7:
          if ((((int)param_1[1] != 0x24) || (lVar21 = *param_1, *(short *)(lVar21 + 0x10) != 0x2d))
             || (*(short *)(lVar21 + 0x22) != 0x2d)) goto LAB_140b11ad8;
          uVar15 = 0;
          if (*(short *)(lVar21 + 0x34) == 0x2d) {
            FUN_144a63a7c(param_1,&local_68,0,8);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,9,8);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x12,8);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(&local_58,local_68,iVar3);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a63a7c(param_1,&local_68,0x1b,8);
            iVar3 = local_60 + -1;
            if (local_60 == 0) {
              iVar3 = 0;
            }
            goto LAB_140b11ac3;
          }
          break;
        default:
          goto switchD_140b11313_default;
        }
      }
LAB_140b10e7f:
      if (puVar9 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140b10e89;
    }
    if ((int)param_1[1] == 0x17) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      iVar3 = FUN_14607a29e(param_1);
      if (iVar3 == 0x10) {
        local_68 = (undefined2 *)0x0;
        local_60 = (int)param_1[1];
        lVar21 = (longlong)local_60;
        pvVar1 = (void *)*param_1;
        if (lVar21 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,pvVar1,lVar21 * 2);
        }
        FUN_144afd20c(&local_68,0x2d,0x2b);
        FUN_144afd20c(&local_68,0x5f,0x2f);
        iVar3 = local_60 + -1;
        puVar9 = local_68;
        if (local_60 == 0) {
          puVar9 = &DAT_149dfb77a;
          iVar3 = 0;
        }
        uVar7 = FUN_1415cf884(puVar9,iVar3,&local_58,0);
        uVar15 = (ulonglong)uVar7;
        puVar9 = local_68;
        if ((char)uVar7 != '\0') {
          *param_3 = (uint)local_58 >> 0x18 | ((uint)local_58 & 0xff0000) >> 8 |
                     ((uint)local_58 & 0xff00) << 8 | (uint)local_58 << 0x18;
          param_3[1] = local_58._4_4_ >> 0x18 | (local_58._4_4_ & 0xff0000) >> 8 |
                       (local_58._4_4_ & 0xff00) << 8 | local_58._4_4_ << 0x18;
          param_3[2] = (uint)uStack_50 >> 0x18 | ((uint)uStack_50 & 0xff0000) >> 8 |
                       ((uint)uStack_50 & 0xff00) << 8 | (uint)uStack_50 << 0x18;
          param_3[3] = uStack_50._4_4_ >> 0x18 | (uStack_50._4_4_ & 0xff0000) >> 8 |
                       (uStack_50._4_4_ & 0xff00) << 8 | uStack_50._4_4_ << 0x18;
        }
        goto LAB_140b10e7f;
      }
    }
  }
LAB_140b112e7:
  uVar15 = 0;
LAB_140b10e89:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b11ae0 FUN_140b11ae0 body=99 status=ok
// SIG undefined FUN_140b11ae0(void)

int FUN_140b11ae0(ushort *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    param_1 = param_1 + 1;
    if ((ushort)(uVar3 - 0x30) < 10) {
      iVar2 = uVar3 - 0x30;
    }
    else if ((ushort)(uVar3 - 0x61) < 6) {
      iVar2 = uVar3 - 0x57;
    }
    else {
      iVar2 = uVar3 - 0x37;
      if (5 < (ushort)(uVar3 - 0x41)) {
        iVar2 = 0;
      }
    }
    iVar1 = iVar1 * 0x10 + iVar2;
    uVar3 = *param_1;
  } while (uVar3 != 0);
  return iVar1;
}



// FUNCTION 140b11b44 FUN_140b11b44 body=2810 status=ok
// SIG undefined FUN_140b11b44(void)

void ** FUN_140b11b44(longlong *param_1,void **param_2,longlong param_3,longlong *param_4,
                     byte param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  size_t sVar11;
  longlong lVar12;
  void *pvVar13;
  void *pvVar14;
  int iVar15;
  wchar_t *_Str;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  void *local_120;
  uint local_114;
  longlong local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  int local_b0;
  int iStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar18 = param_1[1];
  if ((int)lVar18 == 0) {
    FUN_140056680(param_2,L"[Empty]");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_158);
  }
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  if (0 < (int)lVar18) {
    lVar19 = 0x40;
    local_114 = (uint)param_5;
    lVar18 = 0;
    local_138 = param_3;
    local_130 = param_4;
    local_128 = param_1;
    do {
      lVar12 = local_a8;
      lVar16 = *param_1;
      if (*(char *)(lVar16 + -0x40 + lVar19) == '\0') {
        iVar17 = *(int *)(lVar16 + -0x24 + lVar19);
        if (param_5 == 2) {
          if ((local_138 == 0) || (iVar17 < 1)) goto LAB_140b11beb;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = (void *)0x0;
          uStack_68 = 0;
          lVar12 = lVar16 + -0x28 + lVar19;
          local_90 = *(uint *)(lVar12 + -8);
          uVar2 = *(undefined8 *)(lVar12 + -0x10);
          local_98._0_2_ = (undefined2)uVar2;
          local_98._2_2_ = (undefined2)((ulonglong)uVar2 >> 0x10);
          local_98._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          FUN_1447715ec();
          plVar3 = local_130;
          FUN_140d847e0(local_138,&local_98,local_130);
          local_b8 = local_b8 & 0xffffff00;
          uStack_b4 = 0;
          local_b0 = 0;
          iStack_ac = 0;
          if ((plVar3 != (longlong *)0x0) &&
             (lVar12 = (**(code **)(*local_130 + 0x2b0))(), lVar12 != 0)) {
            FUN_14039fc7b(&local_98,&local_b8,lVar12,0);
          }
          FUN_140b12754(&local_b8,&local_e8);
          FUN_140ba7826(&local_d8,&DAT_149e2b508,&local_e8);
          FUN_144a882a8(&local_c8,&local_d8);
          if (&local_c8 == param_2) {
            if (local_c8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_2 != (void *)0x0) {
              FUN_1400020a8();
            }
            *param_2 = local_c8;
            local_c8 = (void *)0x0;
            *(uint *)(param_2 + 1) = (uint)local_c0;
            *(uint *)((longlong)param_2 + 0xc) = local_c0._4_4_;
            local_c0 = 0;
          }
          pvVar14 = local_e8;
          if (local_d8 != (void *)0x0) {
            FUN_1400020a8();
            pvVar14 = local_e8;
          }
LAB_140b123ad:
          pvVar13 = local_70;
          if (pvVar14 != (void *)0x0) {
            FUN_1400020a8();
            pvVar13 = local_70;
          }
LAB_140b12492:
          if (pvVar13 != (void *)0x0) goto LAB_140b12054;
        }
        else {
          if (((local_114 == 1) && (local_138 != 0)) && (0 < iVar17)) {
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = (void *)0x0;
            uStack_68 = 0;
            lVar12 = lVar16 + -0x28 + lVar19;
            local_90 = *(uint *)(lVar12 + -8);
            uVar2 = *(undefined8 *)(lVar12 + -0x10);
            local_98._0_2_ = (undefined2)uVar2;
            local_98._2_2_ = (undefined2)((ulonglong)uVar2 >> 0x10);
            local_98._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            FUN_1447715ec();
            FUN_140d847e0(local_138,&local_98);
            FUN_140b126e4(&local_98,&local_b8);
            if ((void **)&local_b8 == param_2) {
              pvVar14 = (void *)CONCAT44(uStack_b4,local_b8);
              goto LAB_140b123ad;
            }
            if (*param_2 != (void *)0x0) {
              FUN_1400020a8();
            }
            *param_2 = (void *)CONCAT44(uStack_b4,local_b8);
            local_b8 = 0;
            uStack_b4 = 0;
            *(int *)(param_2 + 1) = local_b0;
            *(int *)((longlong)param_2 + 0xc) = iStack_ac;
            pvVar13 = local_70;
            goto LAB_140b12492;
          }
LAB_140b11beb:
          if (iVar17 < 1) {
            FUN_140b12754(lVar16 + lVar19,&local_98);
          }
          else {
            FUN_140b126e4(lVar16 + lVar19 + -0x38,&local_98);
          }
          if ((void **)&local_98 == param_2) {
            pvVar13 = (void *)CONCAT44(local_98._4_4_,CONCAT22(local_98._2_2_,(undefined2)local_98))
            ;
            goto LAB_140b12492;
          }
          if (*param_2 != (void *)0x0) {
            FUN_1400020a8();
          }
          *param_2 = (void *)CONCAT44(local_98._4_4_,CONCAT22(local_98._2_2_,(undefined2)local_98));
          local_98._0_2_ = 0;
          local_98._2_2_ = 0;
          local_98._4_4_ = 0;
          *(uint *)(param_2 + 1) = local_90;
          *(uint *)((longlong)param_2 + 0xc) = local_8c;
        }
      }
      else {
        iVar17 = (int)uStack_a0;
        if ((longlong)(int)uStack_a0 < 2) break;
        lVar10 = (longlong)(int)uStack_a0 * 0x10;
        local_120 = *(void **)(local_a8 + -0x10 + lVar10);
        *(undefined8 *)(local_a8 + -0x10 + lVar10) = 0;
        uVar9 = *(uint *)(local_a8 + -8 + lVar10);
        *(undefined4 *)(local_a8 + -8 + lVar10) = 0;
        *(undefined4 *)(local_a8 + -4 + lVar10) = 0;
        lVar10 = (longlong)(int)uStack_a0 * 0x10;
        if (*(longlong *)(local_a8 + -0x10 + lVar10) != 0) {
          FUN_1400020a8();
          if ((int)uStack_a0 - iVar17 != 0) {
            memmove((void *)(lVar10 + -0x10 + lVar12),(void *)(lVar12 + lVar10),
                    (longlong)((int)uStack_a0 - iVar17) << 4);
            iVar17 = (int)uStack_a0;
          }
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar17 + -1);
        FUN_140b12644(&local_a8);
        lVar12 = local_a8;
        iVar17 = (int)uStack_a0;
        lVar10 = (longlong)(int)uStack_a0 * 0x10;
        local_110 = *(longlong *)(local_a8 + -0x10 + lVar10);
        local_98._0_2_ = (undefined2)local_110;
        local_98._2_2_ = (undefined2)((ulonglong)local_110 >> 0x10);
        local_98._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
        *(undefined8 *)(local_a8 + -0x10 + lVar10) = 0;
        local_90 = *(uint *)(local_a8 + -8 + lVar10);
        local_8c = *(uint *)(local_a8 + -4 + lVar10);
        *(undefined8 *)(local_a8 + -8 + lVar10) = 0;
        lVar10 = (longlong)(int)uStack_a0 * 0x10;
        if (*(longlong *)(local_a8 + -0x10 + lVar10) != 0) {
          FUN_1400020a8();
          if ((int)uStack_a0 - iVar17 != 0) {
            memmove((void *)(lVar10 + -0x10 + lVar12),(void *)(lVar12 + lVar10),
                    (longlong)((int)uStack_a0 - iVar17) << 4);
            iVar17 = (int)uStack_a0;
          }
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar17 + -1);
        FUN_140b12644(&local_a8);
        bVar6 = *(char *)(lVar16 + -0x40 + lVar19) - 1;
        _Str = L"?";
        if (bVar6 < 0xd) {
          _Str = (wchar_t *)(&PTR_DAT_14b3fe000)[bVar6];
        }
        FUN_140b1283a(&local_108,&DAT_149e06140,&local_98);
        iVar17 = (int)local_100;
        iVar7 = ((int)local_100 == 0) + 1;
        local_f8 = local_108;
        local_108 = (void *)0x0;
        iVar8 = local_100._4_4_;
        local_f0 = local_100;
        local_100 = 0;
        iVar15 = iVar7 + iVar17;
        if (iVar15 < iVar17) {
LAB_140b124b8:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar15 < 0) {
LAB_140b12206:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar15);
        }
        if (iVar8 < iVar15) {
          FUN_1446f8c06(&local_f8);
        }
        FUN_1400020e8(&local_f8);
        sVar11 = wcslen(_Str);
        pvVar13 = local_f8;
        iVar17 = (int)local_f0;
        iVar8 = local_f0._4_4_;
        if ((int)sVar11 == 0) {
          local_f8 = (void *)0x0;
          local_f0 = 0;
        }
        else {
          iVar7 = (int)sVar11 + (uint)((int)local_f0 == 0);
          local_e8 = local_f8;
          local_f8 = (void *)0x0;
          uStack_e0 = local_f0;
          local_f0 = 0;
          iVar15 = iVar7 + iVar17;
          if (iVar15 < iVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar7);
          }
          if (iVar15 < 0) goto LAB_140b12206;
          if (iVar8 < iVar15) {
            FUN_1446f8c06(&local_e8);
          }
          FUN_1400020e8(&local_e8,_Str,sVar11 & 0xffffffff);
          pvVar13 = local_e8;
          iVar8 = uStack_e0._4_4_;
          iVar17 = (int)uStack_e0;
        }
        param_1 = local_128;
        iVar7 = (iVar17 == 0) + 1;
        local_e8 = (void *)0x0;
        uStack_e0 = 0;
        uStack_d0 = CONCAT44(iVar8,iVar17);
        iVar15 = iVar7 + iVar17;
        local_d8 = pvVar13;
        if (iVar15 < iVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar15 < 0) goto LAB_140b12206;
        if (iVar8 < iVar15) {
          FUN_1446f8c06(&local_d8);
        }
        FUN_1400020e8(&local_d8,&DAT_149e001d8,1);
        pvVar13 = local_120;
        uVar4 = (uint)uStack_d0;
        if ((int)(uint)uStack_d0 < 2) {
          local_c8 = (void *)0x0;
          local_c0._0_4_ = uVar9;
          if (uVar9 == 0) {
            local_c0._4_4_ = 0;
            param_1 = local_128;
          }
          else {
            FUN_1446dd670(&local_c8,uVar9,0);
            pvVar13 = local_120;
            memcpy(local_c8,local_120,(longlong)(int)uVar9 * 2);
            param_1 = local_128;
          }
        }
        else {
          iVar17 = uVar9 - 1;
          if (uVar9 == 0) {
            iVar17 = 0;
          }
          local_c8 = local_d8;
          local_c0._4_4_ = uStack_d0._4_4_;
          local_d8 = (void *)0x0;
          uStack_d0 = 0;
          local_c0._0_4_ = uVar4;
          if ((int)(uVar4 + iVar17) < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar17);
          }
          if ((int)local_c0._4_4_ < (int)(uVar4 + iVar17)) {
            FUN_1446f8c06(&local_c8);
          }
          FUN_1400020e8(&local_c8,pvVar13,iVar17);
        }
        uVar4 = local_c0._4_4_;
        uVar9 = (uint)local_c0;
        iVar7 = ((uint)local_c0 == 0) + 1;
        local_b8 = (uint)local_c8;
        uStack_b4 = (undefined4)((ulonglong)local_c8 >> 0x20);
        local_c8 = (void *)0x0;
        local_b0 = (uint)local_c0;
        iStack_ac = local_c0._4_4_;
        local_c0 = 0;
        iVar15 = iVar7 + uVar9;
        if (iVar15 < (int)uVar9) goto LAB_140b124b8;
        if (iVar15 < 0) goto LAB_140b12206;
        if ((int)uVar4 < iVar15) {
          FUN_1446f8c06(&local_b8);
        }
        FUN_1400020e8(&local_b8,&DAT_149e06144);
        if ((void **)&local_b8 == param_2) {
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != (void *)0x0) {
            FUN_1400020a8();
          }
          *param_2 = (void *)CONCAT44(uStack_b4,local_b8);
          local_b8 = 0;
          uStack_b4 = 0;
          *(int *)(param_2 + 1) = local_b0;
          *(int *)((longlong)param_2 + 0xc) = iStack_ac;
          local_b0 = 0;
          iStack_ac = 0;
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_d8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        if (pvVar13 == (void *)0x0) goto LAB_140b120a8;
LAB_140b12054:
        FUN_1400020a8(pvVar13);
      }
LAB_140b120a8:
      if (*(char *)(lVar16 + -0x3f + lVar19) == '\x01') {
        FUN_140056680(&local_98,&DAT_149e06128);
        FUN_140e63652(param_2,0);
        if (CONCAT44(local_98._4_4_,CONCAT22(local_98._2_2_,(undefined2)local_98)) != 0) {
          FUN_1400020a8();
        }
      }
      uVar5 = uStack_a0;
      lVar16 = (longlong)(int)uStack_a0;
      uVar9 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar9);
      if (uStack_a0._4_4_ < uVar9) {
        FUN_1447a1bd6(&local_a8,uVar5 & 0xffffffff);
      }
      lVar16 = lVar16 * 0x10;
      puVar1 = (undefined8 *)(local_a8 + lVar16);
      *(undefined8 *)(local_a8 + lVar16) = 0;
      uVar9 = *(uint *)(param_2 + 1);
      pvVar13 = *param_2;
      *(uint *)(local_a8 + 8 + lVar16) = uVar9;
      if ((longlong)(int)uVar9 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uVar9,0);
        memcpy((void *)*puVar1,pvVar13,(longlong)(int)uVar9 * 2);
      }
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0x50;
    } while (lVar18 < (int)param_1[1]);
    if (*(uint *)(param_2 + 1) - 3 < 0x7ffffffe) {
      FUN_140c540b4(param_2,&DAT_149e06140,1,1);
      FUN_140b127b8(param_2,&DAT_149e06144,1,1);
    }
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b12644 FUN_140b12644 body=63 status=ok
// SIG undefined FUN_140b12644(void)

void FUN_140b12644(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140b12684(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 140b12684 FUN_140b12684 body=95 status=ok
// SIG undefined FUN_140b12684(void)

ulonglong FUN_140b12684(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 140b126e4 FUN_140b126e4 body=111 status=ok
// SIG undefined FUN_140b126e4(void)

undefined8 * FUN_140b126e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14014e996(param_1,local_40,1,0);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b2348(local_40,param_2,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b12754 FUN_140b12754 body=100 status=ok
// SIG undefined FUN_140b12754(void)

undefined8 * FUN_140b12754(char *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    param_1 = param_1 + 4;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        FUN_140002266(param_2,&DAT_149e063bc,*(undefined4 *)(param_1 + 0xc));
        return param_2;
      }
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      param_1 = (char *)&DAT_14cb7c580;
    }
    else {
      param_1 = (char *)&DAT_14cb7c588;
    }
  }
  FUN_1400021e4(param_1,param_2);
  return param_2;
}



// FUNCTION 140b127b8 FUN_140b127b8 body=129 status=ok
// SIG undefined FUN_140b127b8(void)

ulonglong FUN_140b127b8(longlong *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  int iVar5;
  
  if (param_3 != 0) {
    cVar1 = FUN_144a38768();
    if (cVar1 != '\0') {
      iVar2 = (int)param_1[1];
      iVar3 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (0 < (int)param_3) {
        iVar5 = iVar2 - ((iVar3 - param_3) + param_3);
        if (iVar5 != 0) {
          _Dst = (void *)((longlong)(int)(iVar3 - param_3) * 2 + *param_1);
          memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)param_3 * 2),(longlong)iVar5 * 2);
          iVar2 = (int)param_1[1];
        }
        *(uint *)(param_1 + 1) = iVar2 - param_3;
        FUN_1449649ae(param_1);
      }
      goto LAB_140b12829;
    }
  }
  uVar4 = 0;
LAB_140b12829:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140b1283a FUN_140b1283a body=277 status=ok
// SIG undefined FUN_140b1283a(void)

undefined8 * FUN_140b1283a(undefined8 *param_1,wchar_t *param_2,undefined8 *param_3)

{
  void *pvVar1;
  int extraout_EAX;
  int iVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar3;
  
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    extraout_EAX = (int)sVar3;
    if (extraout_EAX != 0) {
      iVar2 = 0;
      iVar5 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar5 = 0;
      }
      uVar6 = iVar5 + extraout_EAX + 1;
      *param_1 = 0;
      param_1[1] = 0;
      if (-2 < iVar5 + extraout_EAX) {
        iVar4 = 0;
        if (-1 < iVar5 + extraout_EAX) {
          FUN_1446f8c06(param_1,uVar6);
          iVar4 = *(int *)(param_1 + 1);
          iVar2 = *(int *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = iVar4 + uVar6;
        if ((uint)(iVar2 - iVar4) < uVar6) {
          FUN_144a2dbb8(param_1);
        }
        pvVar1 = (void *)*param_1;
        memcpy(pvVar1,param_2,(longlong)extraout_EAX * 2);
        pvVar1 = (void *)((longlong)pvVar1 + (longlong)extraout_EAX * 2);
        memcpy(pvVar1,(void *)*param_3,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar5 * 2) = 0;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
  }
  *param_1 = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar1 = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar1,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 140b12950 FUN_140b12950 body=261 status=ok
// SIG undefined FUN_140b12950(void)

void FUN_140b12950(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cac9610;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cac9618 != DAT_14cac9644) {
    puVar4 = &DAT_14cac9648;
    if (DAT_14cac9650 != (undefined *)0x0) {
      puVar4 = DAT_14cac9650;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cac9658 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x80;
      local_38 = *(undefined8 *)(DAT_14cac9610 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x70);
          if (lVar6 == -1) goto LAB_140b129e7;
          lVar6 = lVar6 * 0x80;
          lVar1 = DAT_14cac9610 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cac9610 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_14472d054(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x70);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_140b12a56(*puVar7);
    }
  }
LAB_140b129e7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b12a56 FUN_140b12a56 body=96 status=ok
// SIG undefined FUN_140b12a56(void)

void FUN_140b12a56(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar2 = &DAT_14cac9648;
  if (DAT_14cac9650 != (undefined *)0x0) {
    puVar2 = DAT_14cac9650;
  }
  lVar4 = (longlong)*(int *)(DAT_14cac9610 + 0x74 + (longlong)param_1 * 0x80);
  iVar1 = *(int *)(puVar2 + lVar4 * 4);
  if (iVar1 == param_1) {
    piVar3 = (int *)(puVar2 + lVar4 * 4);
  }
  else {
    do {
      piVar3 = (int *)(DAT_14cac9610 + (longlong)iVar1 * 0x80 + 0x70);
      iVar1 = *piVar3;
    } while (iVar1 != param_1);
  }
  *piVar3 = *(int *)(DAT_14cac9610 + (longlong)param_1 * 0x80 + 0x70);
  FUN_140b12ab6();
  return;
}



// FUNCTION 140b12ab6 FUN_140b12ab6 body=128 status=ok
// SIG undefined FUN_140b12ab6(void)

void FUN_140b12ab6(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cac9610;
  if (DAT_14cac9644 != 0) {
    *(int *)(DAT_14cac9610 + (longlong)DAT_14cac9640 * 0x80) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x80) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cac9644) {
    iVar4 = DAT_14cac9640;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x80) = iVar4;
  DAT_14cac9644 = DAT_14cac9644 + 1;
  puVar3 = &DAT_14cac9620;
  if (DAT_14cac9630 != (undefined4 *)0x0) {
    puVar3 = DAT_14cac9630;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cac9640 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 140b12b36 FUN_140b12b36 body=1571 status=ok
// SIG undefined FUN_140b12b36(void)

void FUN_140b12b36(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_60 = 0;
  uStack_5c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_98 = (undefined *)FUN_1446ddbd2();
    local_90 = FUN_1468d96f0;
    local_a0 = 0;
    local_a8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_60);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_60);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_60);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_60 = (undefined4)uVar3;
      uStack_5c = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_60);
    }
  }
  local_64 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_90 = FUN_1408a629c;
    local_98 = &DAT_14c9520b8;
    local_a0 = 0;
    local_a8 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_64);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_64);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_64 = (undefined4)uVar3;
      uStack_60 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_64);
    }
  }
  local_80 = 0xffffffffffffffff;
  local_78 = 0;
  lStack_70 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_98 = (undefined *)FUN_1446ddbd2();
    local_90 = FUN_1403a682c;
    local_a0 = 0;
    local_a8 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_80);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_80);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_80 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_80);
    }
  }
  lVar7 = lStack_70;
  uVar3 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = (undefined4)local_80;
  uVar6 = local_80._4_4_;
  if ((lStack_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lStack_70);
  }
  uVar8 = local_64;
  lVar10 = FUN_1402ad3be(DAT_14cb0d2b0,CONCAT44(uStack_5c,uStack_60),1);
  if (lVar10 != 0) {
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      lVar10 = lVar10 + 0x460;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x1f0) + 0xf8);
    }
    lVar11 = FUN_140b1315a(lVar10,lVar7,uVar6,&local_51);
    if (lVar11 == 0) {
      puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar12 = &PTR_FUN_14a9b0800;
      *(undefined4 *)(puVar12 + 1) = uVar8;
      *(undefined8 *)((longlong)puVar12 + 0xc) = uVar3;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar5;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
      if (lVar7 == 0) {
        *(undefined4 *)(puVar12 + 3) = 0;
        iVar9 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0xc);
        *(uint *)(puVar12 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar9 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar9 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar9 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar13;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar9 = iVar13;
          }
        }
      }
      *(int *)((longlong)puVar12 + 0x1c) = iVar9;
      FUN_140b1330e(lVar10,lVar7,uVar6,puVar12);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1315a FUN_140b1315a body=336 status=ok
// SIG undefined FUN_140b1315a(void)

undefined8 FUN_140b1315a(undefined8 param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  if (param_2 == 0) {
    local_30 = 0;
    iVar2 = 0;
  }
  else {
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar2 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar2 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar2 = iVar7;
      }
    }
  }
  local_2c = iVar2;
  plVar3 = (longlong *)FUN_140633c48(param_1);
  if (((plVar3 == (longlong *)0x0) || (iVar2 = FUN_140b132ac(plVar3,param_3), iVar2 < 1)) ||
     ((int)plVar3[9] == 0)) {
    uVar4 = 0;
  }
  else {
    plVar5 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar3[8];
    }
    puVar6 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
    uVar4 = 0;
    do {
      lVar8 = (longlong)(int)*puVar6;
      if (lVar8 == -1) goto LAB_140b131e9;
      puVar1 = (uint *)(*plVar3 + lVar8 * 0x18);
      puVar6 = puVar1 + 4;
    } while (*puVar1 != param_3);
    uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar8 * 0x18);
  }
LAB_140b131e9:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140b132ac FUN_140b132ac body=97 status=ok
// SIG undefined FUN_140b132ac(void)

int FUN_140b132ac(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[9] != 0) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar1 = *param_1;
      lVar4 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
      if (*(uint *)(lVar1 + lVar4 * 0x18) == param_2) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          do {
            if (iVar3 == -1) {
              return iVar2;
            }
            lVar4 = (longlong)iVar3;
            iVar3 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
          } while (*(uint *)(lVar1 + lVar4 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 140b1330e FUN_140b1330e body=560 status=ok
// SIG undefined FUN_140b1330e(void)

void FUN_140b1330e(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_3;
  local_48 = param_4;
  if (param_2 == 0) {
    local_40._0_4_ = 0;
    uVar5 = 0;
    uVar3 = (uint)local_40;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    local_40 = (undefined4 *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar5 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar5 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar5 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar5 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_40;
      if (bVar11) {
        uVar5 = uVar9;
      }
    }
  }
  local_40._0_4_ = uVar3;
  local_40 = (undefined4 *)CONCAT44(uVar5,(uint)local_40);
  plVar6 = (longlong *)FUN_140b135ee(param_1,uVar5 ^ (uint)local_40);
  if (*plVar6 != 0) goto LAB_140b13432;
  puVar7 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x80;
  *(undefined4 *)(puVar7 + 6) = 0xffffffff;
  puVar7[10] = 0xffffffffffffffff;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a9b1fe0;
  plVar8[2] = (longlong)puVar7;
  *plVar6 = (longlong)puVar7;
  plVar4 = (longlong *)plVar6[1];
  if (plVar8 == plVar4) {
    if (plVar8 == (longlong *)0x0) goto LAB_140b13432;
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140b13432;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar8;
  }
  else {
    plVar6[1] = (longlong)plVar8;
    if (plVar4 == (longlong *)0x0) goto LAB_140b13432;
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_140b13432;
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
LAB_140b13432:
  local_40 = &local_4c;
  local_38 = &local_48;
  FUN_140b1390e(*plVar6,local_2c,&local_40,0);
  FUN_140b13540(&DAT_14cae8d10,param_2,1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b13540 FUN_140b13540 body=173 status=ok
// SIG undefined FUN_140b13540(void)

void FUN_140b13540(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_140b135d7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b135d7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140b135ee FUN_140b135ee body=190 status=ok
// SIG undefined FUN_140b135ee(void)

longlong FUN_140b135ee(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_140b13684;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140b136ae(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_140b13684:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140b136ae FUN_140b136ae body=608 status=ok
// SIG undefined FUN_140b136ae(void)

int * FUN_140b136ae(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1447711aa(param_1,iVar20);
    }
    lVar21 = (longlong)iVar20;
    iVar19 = FUN_144a54ea4(param_1 + 2,1);
    plVar17 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar17 = param_1 + 2;
    }
    iVar16 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar16 = iVar19;
    }
    bVar9 = (byte)iVar19 & 0x1f;
    puVar3 = (uint *)((longlong)plVar17 + (longlong)(iVar16 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar21 = (longlong)iVar20;
    iVar19 = *(int *)(*param_1 + 4 + lVar21 * 0x20);
    *(int *)(param_1 + 6) = iVar19;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x20) = 0xffffffff;
    }
  }
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar19 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar19 = iVar20;
  }
  puVar3 = (uint *)((longlong)plVar17 + (longlong)(iVar19 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar20 & 0x1f);
  lVar7 = *param_1;
  lVar21 = lVar21 * 0x20;
  puVar4 = (undefined4 *)(lVar7 + lVar21);
  lVar8 = *(longlong *)*param_4;
  *(longlong *)(lVar7 + lVar21) = lVar8;
  puVar6 = (undefined8 *)(lVar7 + 8 + lVar21);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(lVar7 + 0x18 + lVar21) = 0xffffffff;
  cVar15 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar19 == -1) {
      cVar15 = '\0';
    }
    else {
      do {
        puVar5 = (undefined4 *)(*param_1 + (longlong)iVar19 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar19 * 0x20) == lVar8) {
          plVar17 = *(longlong **)(puVar5 + 4);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar4 + 4);
          *puVar5 = uVar10;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          FUN_1435550a0(param_1,iVar20);
          cVar15 = '\x01';
          break;
        }
        iVar19 = puVar5[6];
        cVar15 = '\0';
      } while (iVar19 != -1);
    }
  }
  if (param_5 != (char *)0x0) {
    *param_5 = cVar15;
  }
  if (cVar15 == '\0') {
    uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar19 = 1;
    if (3 < uVar14) {
      uVar18 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar21 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar21 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar19 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      puVar4[7] = param_3;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      puVar4[6] = *(undefined4 *)
                   ((longlong)plVar17 +
                   ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar20;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_140b13e08(param_1);
    }
  }
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 140b1390e FUN_140b1390e body=1273 status=ok
// SIG undefined FUN_140b1390e(void)

int * FUN_140b1390e(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_14482b872(param_1,iVar16);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar9 = iVar20 + 1;
    iVar11 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar11 = iVar20;
    }
    if (iVar11 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar20;
        }
        else {
          uVar5 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar5) {
              uVar19 = uVar5;
            }
          }
          else {
            uVar19 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar19 << 2,0);
          iVar4 = (int)(uVar7 >> 2);
          iVar9 = -0x20;
          if ((int)uVar5 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar13,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar13;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar6 = (longlong)iVar16;
    iVar20 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar20;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar1;
  }
  iVar20 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar20 = iVar16;
  }
  puVar10[iVar20 >> 5] = puVar10[iVar20 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  uVar19 = 1;
  lVar17 = *param_1;
  puVar2 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *(uint *)(lVar17 + lVar6 * 0x18) = uVar5;
  *(undefined8 *)(lVar17 + 8 + lVar6 * 0x18) = *puVar2;
  *(undefined4 *)(lVar17 + 0x10 + lVar6 * 0x18) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar18) {
    uVar7 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    lVar17 = lVar17 + lVar6 * 0x18;
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)(lVar17 + 0x14) = uVar5;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(lVar17 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         iVar16;
    goto LAB_140b13c09;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_140b13a60:
    uVar5 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar19 != uVar5);
  }
  else {
    if (uVar19 == 0) goto LAB_140b13c09;
    FUN_1446efa72(plVar13,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_140b13a60;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar7 = 0;
    uVar15 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    if (uVar5 == 0) {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      uVar7 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar7;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar7) goto LAB_140b13c09;
        iVar9 = iVar9 + 0x20;
        uVar5 = puVar10[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar7 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar21 = uVar15 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar4) {
      iVar4 = iVar20;
    }
  }
  if (iVar4 < iVar20) {
    uVar5 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar17 = (longlong)iVar4;
      uVar21 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar17 * 0x18);
      iVar20 = (int)uVar21;
      *(int *)(lVar6 + 0x14 + lVar17 * 0x18) = iVar20;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar17 * 0x18) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar5 = ~(uint)uVar15 & uVar5;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar4 = (int)uVar7;
      lVar6 = (longlong)iVar4;
      uVar19 = puVar10[lVar6] & uVar5;
      if (uVar19 == 0) {
        iVar11 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar11 = iVar20 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar4) {
          iVar12 = iVar4;
        }
        if (iVar11 <= iVar4) break;
        lVar17 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar19 = puVar10[lVar6 + lVar17 + 1];
          if (uVar19 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar12 - lVar6 == lVar17) goto LAB_140b13c09;
        }
        uVar7 = (ulonglong)(iVar4 + (int)lVar17 + 1);
        uVar5 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar19 & uVar19);
      uVar21 = uVar15 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar20);
  }
LAB_140b13c09:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 140b13e08 FUN_140b13e08 body=565 status=ok
// SIG undefined FUN_140b13e08(void)

void FUN_140b13e08(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140b13fdb;
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
LAB_140b13fdb:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1403e FUN_140b1403e body=1541 status=ok
// SIG undefined FUN_140b1403e(void)

void FUN_140b1403e(byte *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_8c [4];
  longlong local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar5 = *param_1;
  *param_1 = bVar5 & 0xbf;
  if ((bVar5 & 3) == 3) {
    if ((bVar5 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    }
    iVar7 = (int)plVar10[6];
    if (iVar7 == 0) {
      uVar23 = 1;
      uVar22 = 0;
      iVar12 = 0;
      iVar19 = 0;
    }
    else {
      puVar9 = (uint *)plVar10[5];
      if ((uint *)plVar10[5] == (uint *)0x0) {
        puVar9 = (uint *)(plVar10 + 3);
      }
      uVar17 = *puVar9;
      if (uVar17 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
        }
        uVar22 = 0;
        uVar23 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar23 = uVar22;
        }
        iVar19 = 0;
        do {
          if (uVar23 == uVar22) goto LAB_140b14082;
          iVar19 = iVar19 + 0x20;
          uVar17 = puVar9[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar22 = 0;
        iVar19 = 0;
      }
      uVar23 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar23 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar12 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar12) {
        iVar12 = iVar7;
      }
    }
    if (iVar12 != iVar7) {
      uVar17 = 0xffffffff;
      iVar6 = iVar7;
      do {
        if (*(longlong *)(*plVar10 + 0x28 + (longlong)iVar12 * 0x40) != 0) {
          FUN_140b1403e();
          iVar6 = (int)plVar10[6];
        }
        uVar17 = uVar17 & ~(uint)uVar23;
        puVar9 = (uint *)plVar10[5];
        if ((uint *)plVar10[5] == (uint *)0x0) {
          puVar9 = (uint *)(plVar10 + 3);
        }
        iVar12 = (int)uVar22;
        lVar20 = (longlong)iVar12;
        uVar13 = puVar9[lVar20] & uVar17;
        if (uVar13 == 0) {
          iVar14 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar14 = iVar6 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar12 < iVar14) {
            lVar21 = 0;
            do {
              uVar13 = puVar9[lVar20 + lVar21 + 1];
              if (uVar13 != 0) {
                uVar22 = (ulonglong)(iVar12 + (int)lVar21 + 1);
                uVar17 = 0xffffffff;
                goto LAB_140b141ca;
              }
              iVar19 = iVar19 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar15 - lVar20 != lVar21);
            uVar17 = 0xffffffff;
            iVar12 = iVar15;
          }
          uVar22 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar6;
        }
        else {
LAB_140b141ca:
          uVar23 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar23 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar12 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar12) {
            iVar12 = iVar6;
          }
        }
      } while (iVar12 != iVar7);
    }
  }
  else if ((bVar5 & 3) == 2) {
    if ((bVar5 & 2) == 0) {
      puVar16 = &DAT_14c9a1288;
    }
    else {
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    }
    FUN_140b14644(puVar16,0);
    bVar5 = *param_1;
    if ((char)bVar5 < '\0') {
      if ((bVar5 & 2) == 0) {
        puVar11 = &DAT_14c9a1270;
        puVar16 = &DAT_14c9a1288;
      }
      else {
        puVar11 = *(undefined8 **)(param_1 + 8);
        puVar16 = puVar11 + 3;
      }
      uVar17 = *(uint *)(puVar11 + 2);
      if ((uint)(*(int *)(puVar16 + 2) - *(int *)((longlong)puVar16 + 0x3c)) < uVar17) {
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar17);
        }
        FUN_144846f0c(puVar16,uVar17);
        if (uVar17 < 4) {
          iVar7 = 1;
        }
        else {
          uVar17 = (uVar17 | 1) + 0xe;
          iVar7 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          iVar7 = 1 << ((byte)iVar7 & 0x1f);
        }
        if ((*(int *)(puVar16 + 10) == 0) || (*(int *)(puVar16 + 10) < iVar7)) {
          *(int *)(puVar16 + 10) = iVar7;
          FUN_1446eb800(puVar16);
        }
      }
      bVar5 = *param_1 & 2;
      if (bVar5 == 0) {
        puVar16 = &DAT_14c9a1270;
      }
      else {
        puVar16 = *(undefined8 **)(param_1 + 8);
      }
      if ((longlong)*(int *)(puVar16 + 2) != 0) {
        puVar11 = (undefined8 *)*puVar16;
        lVar20 = (longlong)*(int *)(puVar16 + 2) << 4;
        do {
          pbVar4 = (byte *)*puVar11;
          if (pbVar4 != (byte *)0x0) {
            *pbVar4 = *pbVar4 & 0x7f;
            FUN_140b1403e(pbVar4);
            iVar7 = *(int *)(param_1 + 0x24);
            bVar5 = *pbVar4 & 3;
            if (iVar7 == 0) {
              if ((bVar5 != 1) || (*(longlong *)(pbVar4 + 8) == 0)) {
LAB_140b14578:
                *param_1 = *param_1 | 0x40;
                goto LAB_140b14412;
              }
              *pbVar4 = *pbVar4 | 0x80;
              if (*(int *)(pbVar4 + 0x24) == 0) {
                local_88 = 0;
                puStack_80 = (undefined8 *)0x0;
                local_78 = 0;
                local_70 = 0;
                uStack_68 = 0;
                FUN_1446ddda2(&local_88,*(longlong *)(pbVar4 + 8),0);
                uVar8 = FUN_14009aea0(&DAT_14c9a1320,&local_88);
                *(undefined4 *)(pbVar4 + 0x24) = uVar8;
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            else {
              if (bVar5 != 3) goto LAB_140b14578;
              AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
              lVar21 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar7 / 0x199) * 8);
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
              puVar16 = (undefined8 *)
                        FUN_142b20a62(pbVar4,(ulonglong)(uint)(iVar7 % 0x199) * 0x28 + lVar21);
              local_98 = (byte *)*puVar16;
              plVar10 = (longlong *)puVar16[1];
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              if (local_98 == (byte *)0x0) {
LAB_140b14536:
                *pbVar4 = *pbVar4 | 0x40;
                uVar22 = (ulonglong)local_98 >> 0x20;
                local_98 = (byte *)CONCAT44((int)uVar22,
                                            (int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
              }
              else {
                bVar5 = *local_98;
                puVar16 = (undefined8 *)CONCAT71((int7)((ulonglong)local_98 >> 8),bVar5);
                if (((bVar5 & 3) != 1) || (*(longlong *)(local_98 + 8) == 0)) goto LAB_140b14536;
                *local_98 = bVar5 | 0x80;
                local_88 = 0;
                puStack_80 = (undefined8 *)0x0;
                local_78 = 0;
                local_70 = 0;
                uStack_68 = 0;
                FUN_1446ddda2(&local_88,*(longlong *)(local_98 + 8),0);
                uVar8 = FUN_14009aea0(&DAT_14c9a1320,&local_88);
                *(undefined4 *)(local_98 + 0x24) = uVar8;
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
                *pbVar4 = *pbVar4 | 0x80;
                *(undefined4 *)(pbVar4 + 0x24) = *(undefined4 *)(local_98 + 0x24);
                local_98 = (byte *)((ulonglong)local_98 & 0xffffffff00000000);
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar10 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar10 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              if ((char)local_98 != '\0') goto LAB_140b14412;
            }
            puVar16 = &DAT_14c9a1288;
            if ((*param_1 & 2) != 0) {
              puVar16 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
            }
            iVar7 = *(int *)(pbVar4 + 0x24);
            AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
            lVar21 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar7 / 0x199) * 8);
            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
            local_88 = (ulonglong)(uint)(iVar7 % 0x199) * 0x28 + lVar21;
            puStack_80 = puVar11;
            FUN_140141a0c(puVar16,local_8c,&local_88,0);
          }
LAB_140b14412:
          puVar11 = puVar11 + 2;
          lVar20 = lVar20 + -0x10;
        } while (lVar20 != 0);
        bVar5 = *param_1 & 2;
      }
      if (bVar5 == 0) {
        puVar16 = &DAT_14c9a1288;
      }
      else {
        puVar16 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
      }
      FUN_14074432e(puVar16);
      FUN_140743c6a(puVar16,*(int *)(puVar16 + 2) - *(int *)((longlong)puVar16 + 0x3c));
    }
    else {
      if ((bVar5 & 2) == 0) {
        plVar10 = &DAT_14c9a1270;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 8);
      }
      lVar20 = plVar10[2];
      if ((longlong)(int)lVar20 != 0) {
        lVar21 = *plVar10;
        lVar18 = 0;
        do {
          pbVar4 = *(byte **)(lVar21 + lVar18);
          if (pbVar4 != (byte *)0x0) {
            *pbVar4 = *pbVar4 & 0x7f;
            FUN_140b1403e();
          }
          lVar18 = lVar18 + 0x10;
        } while ((longlong)(int)lVar20 * 0x10 != lVar18);
      }
    }
  }
LAB_140b14082:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b14644 FUN_140b14644 body=107 status=ok
// SIG undefined FUN_140b14644(void)

void FUN_140b14644(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x50)) {
LAB_140b14693:
      FUN_140b147f8(param_1,param_2);
      *(int *)(param_1 + 0x50) = iVar3;
      FUN_1446eb800(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x50) != iVar3) goto LAB_140b14693;
  FUN_140b146b0(param_1);
  FUN_140b147f8(param_1,param_2);
  return;
}



// FUNCTION 140b146b0 FUN_140b146b0 body=327 status=ok
// SIG undefined FUN_140b146b0(void)

void FUN_140b146b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 8;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[9];
  }
  iVar6 = (int)param_1[10];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) < iVar4 >> 2) {
    plVar1 = param_1 + 3;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[6] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[6];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[10]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b147f8 FUN_140b147f8 body=746 status=ok
// SIG undefined FUN_140b147f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b147f8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  puVar1 = (uint *)(param_1 + 3);
  iVar5 = (int)param_1[6];
  if (iVar5 == 0) {
    uVar16 = 0;
    uVar17 = 1;
    iVar8 = 0;
    iVar15 = 0;
  }
  else {
    puVar12 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar18 = *puVar12;
    if (uVar18 == 0) {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar15 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_140b14a45;
        iVar15 = iVar15 + 0x20;
        uVar18 = puVar12[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar15 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar4 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar8) {
      iVar8 = iVar5;
    }
  }
  if (iVar8 < iVar5) {
    uVar18 = 0xffffffff;
    do {
      lVar14 = *param_1;
      plVar6 = *(longlong **)(lVar14 + 0x30 + (longlong)iVar8 * 0x40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          if (*(code **)*plVar6 == FUN_1456d1724) {
            FUN_14474dbbc(plVar6 + 2);
          }
          else {
            (**(code **)*plVar6)(plVar6);
          }
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            pcVar7 = *(code **)(*plVar6 + 0x10);
            if (pcVar7 == FUN_1456beaa2) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
              _DAT_14c9a10a4 = _DAT_14c9a10a4 + -1;
              *plVar6 = (longlong)DAT_14c9a1098;
              DAT_14c9a1098 = plVar6;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
            }
            else if (pcVar7 == FUN_1448c525e) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
            else {
              (*pcVar7)(plVar6);
            }
          }
        }
      }
      if (*(longlong *)(lVar14 + (longlong)iVar8 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      puVar12 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar5 = (int)param_1[6];
      iVar8 = (int)uVar16;
      lVar14 = (longlong)iVar8;
      uVar9 = puVar12[lVar14] & uVar18;
      if (uVar9 == 0) {
        iVar10 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar10 = iVar5 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar13 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar9 = puVar12[lVar14 + lVar13 + 1];
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar11 - lVar14 == lVar13) goto LAB_140b14a45;
        }
        uVar16 = (ulonglong)(iVar8 + (int)lVar13 + 1);
        uVar18 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar9 & uVar9);
      uVar4 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar5);
  }
LAB_140b14a45:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != param_2) {
    FUN_1447b3e64(param_1,param_2);
  }
  param_1[7] = 0xffffffff;
  uVar18 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (((int)uVar18 <= *(int *)((longlong)param_1 + 0x34)) &&
     (*(int *)((longlong)param_1 + 0x34) < 0x81)) {
    return;
  }
  uVar9 = 0x80;
  if (0x80 < (int)uVar18) {
    uVar9 = uVar18;
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar9;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140b14ae2 FUN_140b14ae2 body=52 status=ok
// SIG undefined FUN_140b14ae2(void)

void FUN_140b14ae2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      FUN_140b14b16(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 140b14b16 FUN_140b14b16 body=112 status=ok
// SIG undefined FUN_140b14b16(void)

void FUN_140b14b16(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if ((bVar1 & 3) == 1) {
    if ((bVar1 & 4) == 0) {
      *(byte *)(param_1 + 0xf) = bVar1 & 0xd8;
      lVar3 = param_1[8];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = param_1[7];
        lVar4 = 0;
        do {
          if (*(char *)(lVar2 + 4 + lVar4) == '\x01') {
            *(undefined1 *)(lVar2 + 4 + lVar4) = 0;
          }
          *(undefined4 *)(lVar2 + 8 + lVar4) = 0;
          lVar4 = lVar4 + 0x40;
        } while ((longlong)(int)lVar3 * 0x40 != lVar4);
      }
      FUN_140435058(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140b14b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
    *(byte *)(param_1 + 0xf) = bVar1 | 8;
  }
  return;
}



// FUNCTION 140b14b8c FUN_140b14b8c body=57 status=ok
// SIG undefined FUN_140b14b8c(void)

void FUN_140b14b8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23530 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23530 = FUN_140002ddd(FUN_14643e039,uVar1,L"GpsTestSettings_NavNearArc");
  }
  return;
}



// FUNCTION 140b14bc6 FUN_140b14bc6 body=437 status=ok
// SIG undefined FUN_140b14bc6(void)

byte FUN_140b14bc6(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_54;
  uint *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x4c8);
  local_54 = *(uint *)(param_1 + 0x4cc);
  if ((*(byte *)(param_2 + 0x30) & 0x80) == 0) {
    plVar1 = (longlong *)(param_2 + 0x1a8);
    if (*(int *)(param_2 + 0x1b0) != *(int *)(param_2 + 0x1dc)) {
      lVar7 = param_2 + 0x1e0;
      if (*(longlong *)(param_2 + 0x1e8) != 0) {
        lVar7 = *(longlong *)(param_2 + 0x1e8);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_2 + 0x1f0) - 1U & local_54) * 4);
      if (iVar6 != -1) {
        do {
          lVar7 = *plVar1 + (longlong)iVar6 * 0x10;
          if (*(uint *)(*plVar1 + (longlong)iVar6 * 0x10) == local_54) {
            if (lVar7 != 0) goto LAB_140b14c65;
            break;
          }
          iVar6 = *(int *)(lVar7 + 8);
        } while (iVar6 != -1);
      }
    }
    local_50 = &local_54;
    local_68 = 0;
    FUN_1407932ac(plVar1,&local_44);
    lVar7 = (longlong)local_44 * 0x10 + *plVar1;
LAB_140b14c65:
    if (*(int *)(lVar7 + 4) != iVar2) {
      *(int *)(lVar7 + 4) = iVar2;
      iVar2 = *(int *)(param_2 + 0x250);
      *(uint *)(param_2 + 0x250) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x254) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(param_2 + 0x248),iVar2);
      }
      *(uint *)(*(longlong *)(param_2 + 0x248) + (longlong)iVar2 * 4) = local_54;
      goto LAB_140b14d12;
    }
  }
  else {
LAB_140b14d12:
    if (0 < *(int *)(param_1 + 0x510)) {
      lVar7 = 0;
      bVar8 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x508) + lVar7 * 8);
        if ((lVar3 != 0) &&
           (cVar4 = FUN_144a5e2d4(param_2,*(int *)(param_1 + 0x4cc) + (int)lVar7 + 1,
                                  *(undefined4 *)(lVar3 + 0x28)), cVar4 != '\0')) {
          bVar5 = FUN_144a5e2b6(param_2,lVar3,param_3,*param_4);
          bVar8 = bVar8 | bVar5;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x510));
      goto LAB_140b14c6b;
    }
  }
  bVar8 = 0;
LAB_140b14c6b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8 & 1;
}



// FUNCTION 140b14d7c FUN_140b14d7c body=519 status=ok
// SIG undefined FUN_140b14d7c(void)

longlong * FUN_140b14d7c(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_4 != 0) {
    uVar7 = *(uint *)(param_4 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      if (*(int *)(lVar10 + 0x10) == 0) {
        *(int *)(lVar10 + 0x10) = iVar6;
      }
      UNLOCK();
    }
  }
  FUN_140b14f84(param_1 + 0x15d0,param_2,param_3,param_4);
  iVar5 = DAT_14c9647dc;
  lVar9 = DAT_14c9647c8;
  lVar10 = *param_2;
  if (lVar10 != 0) {
    uVar3 = *(ulonglong *)(lVar10 + 0xd8);
    if ((((uVar3 >> 0x20 == 0) || (uVar7 = (uint)uVar3, (int)uVar7 < 0)) ||
        (DAT_14c9647dc <= (int)uVar7)) ||
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
         plVar8 == (longlong *)0x0 || ((int)plVar8[2] != (int)(uVar3 >> 0x20))) ||
        (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar4 = *plVar8, lVar4 == 0)))))) {
      *param_2 = 0;
      plVar8 = (longlong *)param_2[1];
      if (plVar8 != (longlong *)0x0) {
        param_2[1] = 0;
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
    else {
      *(longlong *)(lVar10 + 0x48) = lVar4;
      uVar7 = *(uint *)(lVar4 + 0xc);
      *(uint *)(lVar10 + 0xd8) = uVar7;
      if ((int)uVar7 < iVar5) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar5 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar6;
        }
      }
      *(int *)(lVar10 + 0xdc) = iVar5;
    }
  }
  return param_2;
}



// FUNCTION 140b14f84 FUN_140b14f84 body=1104 status=ok
// SIG undefined FUN_140b14f84(void)

undefined8 * FUN_140b14f84(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == 0) {
    uVar14 = 0;
    uVar5 = 0;
  }
  else {
    uVar14 = *(uint *)(param_3 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar5 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar5 = *(uint *)(lVar15 + 0x10);
      bVar16 = uVar5 == 0;
      if (bVar16) {
        *(uint *)(lVar15 + 0x10) = uVar6;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar5 = uVar6;
      }
    }
  }
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return param_2;
  }
  uVar6 = uVar5 >> 0xd ^ uVar14 - uVar5;
  uVar8 = uVar6 << 8 ^ (-0x61c88647 - uVar5) - uVar6;
  uVar12 = uVar8 >> 0xd ^ (uVar5 - uVar6) - uVar8;
  uVar13 = uVar12 >> 0xc ^ (uVar6 - uVar8) - uVar12;
  uVar6 = uVar13 << 0x10 ^ (uVar8 - uVar12) - uVar13;
  uVar8 = uVar6 >> 5 ^ (uVar12 - uVar13) - uVar6;
  uVar12 = uVar8 >> 3 ^ (uVar13 - uVar6) - uVar8;
  uVar6 = uVar12 << 10 ^ (uVar6 - uVar8) - uVar12;
  plVar7 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[8];
  }
  iVar9 = *(int *)((longlong)plVar7 +
                  (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0xf ^ uVar8 - (uVar12 + uVar6))) * 4)
  ;
  if (iVar9 == -1) {
    return param_2;
  }
  lVar15 = *param_1;
  while( true ) {
    lVar10 = (longlong)iVar9 * 0x60;
    lVar2 = lVar15 + lVar10;
    if ((*(uint *)(lVar15 + lVar10) == uVar14) && (*(uint *)(lVar15 + 4 + lVar10) == uVar5)) break;
    iVar9 = *(int *)(lVar2 + 0x58);
    if (iVar9 == -1) {
      return param_2;
    }
  }
  if (lVar2 == 0) {
    return param_2;
  }
  if (param_4 == 0) {
    uVar14 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_4 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      if (*(int *)(lVar15 + 0x10) == 0) {
        *(int *)(lVar15 + 0x10) = iVar11;
      }
      UNLOCK();
    }
    uVar14 = *(uint *)(param_4 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar5 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar5 = *(uint *)(lVar15 + 0x10);
      bVar16 = uVar5 == 0;
      if (bVar16) {
        *(uint *)(lVar15 + 0x10) = uVar6;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar5 = uVar6;
      }
    }
  }
  if (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) {
    return param_2;
  }
  uVar6 = uVar5 >> 0xd ^ uVar14 - uVar5;
  uVar8 = uVar6 << 8 ^ (-0x61c88647 - uVar5) - uVar6;
  uVar12 = uVar8 >> 0xd ^ (uVar5 - uVar6) - uVar8;
  uVar13 = uVar12 >> 0xc ^ (uVar6 - uVar8) - uVar12;
  uVar6 = uVar13 << 0x10 ^ (uVar8 - uVar12) - uVar13;
  uVar8 = uVar6 >> 5 ^ (uVar12 - uVar13) - uVar6;
  uVar12 = uVar8 >> 3 ^ (uVar13 - uVar6) - uVar8;
  uVar6 = uVar12 << 10 ^ (uVar6 - uVar8) - uVar12;
  lVar15 = lVar2 + 0x40;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    lVar15 = *(longlong *)(lVar2 + 0x48);
  }
  iVar9 = *(int *)(lVar15 + (ulonglong)
                            (*(int *)(lVar2 + 0x50) - 1U & (uVar6 >> 0xf ^ uVar8 - (uVar12 + uVar6))
                            ) * 4);
  if (iVar9 == -1) {
    return param_2;
  }
  lVar15 = *(longlong *)(lVar2 + 8);
  while ((lVar10 = (longlong)iVar9 * 0x20, *(uint *)(lVar15 + lVar10) != uVar14 ||
         (*(uint *)(lVar15 + 4 + lVar10) != uVar5))) {
    iVar9 = *(int *)(lVar10 + lVar15 + 0x18);
    if (iVar9 == -1) {
      return param_2;
    }
  }
  uVar3 = *(undefined8 *)(lVar15 + 8 + lVar10);
  plVar7 = *(longlong **)(lVar15 + 0x10 + lVar10);
  if (plVar7 == (longlong *)0x0) {
    *param_2 = uVar3;
    goto LAB_140b15251;
  }
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = uVar3;
  if (plVar7 == plVar4) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140b15251;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140b15251;
    lVar15 = *plVar7;
  }
  else {
    param_2[1] = plVar7;
    if (plVar4 == (longlong *)0x0) goto LAB_140b15251;
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_140b15251;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140b15251;
    lVar15 = *plVar4;
    plVar7 = plVar4;
  }
  (**(code **)(lVar15 + 0x10))(plVar7);
LAB_140b15251:
  FUN_140d7d13e((longlong *)(lVar2 + 8),iVar9);
  return param_2;
}



// FUNCTION 140b153da FUN_140b153da body=57 status=ok
// SIG undefined FUN_140b153da(void)

void FUN_140b153da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23690 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23690 = FUN_140002ddd(FUN_14643efa0,uVar1,L"GpsTest_OtherNavGoals");
  }
  return;
}



// FUNCTION 140b15414 FUN_140b15414 body=117 status=ok
// SIG undefined FUN_140b15414(void)

void FUN_140b15414(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140b1548a(param_1 + 0x7a,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1548a FUN_140b1548a body=2884 status=ok
// SIG undefined FUN_140b1548a(void)

void FUN_140b1548a(uint *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  int *piVar19;
  int iVar20;
  uint *puVar21;
  bool bVar22;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  char local_9d;
  uint local_9c;
  longlong local_98;
  uint local_8c;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  uint *local_70;
  longlong local_68;
  code *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  param_3 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar8 = FUN_140b15fd0();
  if ((((*(longlong *)(param_1 + 2) == 0) || (param_1[1] == 0)) ||
      (uVar6 = *param_1, (int)uVar6 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar6 ||
       (lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar10 == 0)) ||
      ((*(uint *)(lVar10 + 0x10) != param_1[1] ||
       ((lVar8 == 0 || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))))) goto LAB_140b15595;
  if (param_2 == 0) {
LAB_140b15581:
    lVar8 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_c0 = &local_60;
      local_60 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_142b4754c;
      local_c8 = &LAB_147c45ce0;
      local_d0 = &LAB_1463f1ff4;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0x4000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
      puVar21 = param_1 + 0x24;
      lVar10 = *(longlong *)(param_1 + 0x24);
      uVar6 = param_1[0x26];
      local_98 = (longlong)(int)uVar6;
      cVar4 = (char)param_3;
      if (cVar4 == '\0') {
        if (uVar6 != 0) {
          local_98 = local_98 << 4;
          lVar8 = 0;
          uVar5 = 0;
          do {
            iVar20 = *(int *)(lVar10 + 0xc + lVar8);
            if ((iVar20 == 0) || (uVar1 = *(uint *)(lVar10 + 8 + lVar8), (int)uVar1 < 0)) {
LAB_140b15c5a:
              lVar15 = 0;
            }
            else {
              lVar15 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                plVar18 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != iVar20)) ||
                   ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_140b15c5a;
                lVar15 = *plVar18;
              }
            }
            if (lVar15 == param_2) {
              if ((-1 < (int)uVar5) && ((int)uVar5 < (int)uVar6)) {
                lVar8 = (ulonglong)(uVar5 & 0x7fffffff) * 0x10;
                if (*(longlong *)(lVar10 + lVar8) != 0) {
                  FUN_14480f766(param_2 + 0x410);
                  uVar6 = param_1[0x26];
                }
                if (uVar6 - 1 != uVar5) {
                  memmove((void *)(*(longlong *)(param_1 + 0x24) + lVar8),
                          (void *)(*(longlong *)(param_1 + 0x24) + lVar8 + 0x10),
                          (longlong)(int)((uVar6 - 1) - uVar5) << 4);
                  uVar6 = param_1[0x26];
                }
                param_1[0x26] = uVar6 - 1;
                FUN_140b16120(puVar21);
              }
              break;
            }
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 0x10;
          } while (local_98 != lVar8);
        }
      }
      else {
        local_9d = cVar4;
        if (uVar6 == 0) {
          uVar16 = 0;
        }
        else {
          lVar11 = local_98 << 4;
          lVar15 = lVar10;
          do {
            if ((*(int *)(lVar15 + 0xc) == 0) || (uVar5 = *(uint *)(lVar15 + 8), (int)uVar5 < 0)) {
LAB_140b15c52:
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              if ((int)uVar5 < DAT_14c9647dc) {
                plVar18 = (longlong *)
                          ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)(lVar15 + 0xc))) ||
                   ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_140b15c52;
                lVar17 = *plVar18;
              }
            }
            if (lVar17 == param_2) {
              if (lVar15 != 0) goto LAB_140b15552;
              break;
            }
            lVar15 = lVar15 + 0x10;
            lVar11 = lVar11 + -0x10;
          } while (lVar11 != 0);
          uVar16 = 0;
          if (*(int *)(lVar10 + 0xc) == 0) {
LAB_140b15c34:
            param_3 = 0;
          }
          else {
            uVar5 = *(uint *)(lVar10 + 8);
            param_3 = 0;
            if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
              lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) != *(int *)(lVar10 + 0xc)))
              goto LAB_140b15c34;
              param_3 = (ulonglong)((*(uint *)(lVar15 + 8) & 0x10200000) == 0);
            }
          }
          local_68 = 1 - local_98;
          local_78 = lVar10 + 0x1c;
          uVar5 = 0;
          local_8c = uVar6;
          local_80 = lVar10;
          local_70 = puVar21;
          do {
            puVar21 = local_70;
            uVar1 = local_8c;
            lVar10 = (longlong)(int)uVar5;
            uVar9 = uVar5 + 1;
            uVar14 = uVar9;
            if ((int)uVar9 < (int)uVar6) {
              uVar14 = uVar6;
            }
            if (lVar10 + 1 < local_98) {
              lVar15 = lVar10 + 2;
              piVar19 = (int *)(lVar10 * 0x10 + local_78);
              bVar22 = true;
              do {
                local_9c = uVar9;
                if (((*piVar19 == 0) || (uVar6 = piVar19[-1], (int)uVar6 < 0)) ||
                   ((DAT_14c9647dc <= (int)uVar6 ||
                    ((lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8),
                     lVar11 == 0 || (*(int *)(lVar11 + 0x10) != *piVar19)))))) {
                  if (param_3 != 0) break;
                }
                else if (((*(uint *)(lVar11 + 8) & 0x10200000) == 0) != SUB81(param_3,0)) break;
                bVar22 = lVar15 < local_98;
                uVar9 = uVar9 + 1;
                lVar11 = local_68 + lVar15;
                lVar15 = lVar15 + 1;
                piVar19 = piVar19 + 4;
                local_9c = uVar14;
              } while (lVar11 != 1);
            }
            else {
              bVar22 = false;
              local_9c = uVar14;
            }
            local_88 = uVar16;
            if (param_3 != 0) {
              iVar20 = local_9c - uVar5;
              if ((uint)uVar16 != uVar5) {
                memmove((void *)((longlong)(int)(uint)uVar16 * 0x10 + local_80),
                        (void *)(lVar10 * 0x10 + local_80),(longlong)iVar20 << 4);
              }
              uVar16 = (ulonglong)(uint)((int)local_88 + iVar20);
            }
            param_3 = param_3 ^ 1;
            uVar6 = uVar1;
            uVar5 = local_9c;
          } while (bVar22);
        }
        uVar6 = (int)uVar16 + 1;
        param_1[0x26] = uVar6;
        if (param_1[0x27] < uVar6) {
          FUN_140b16798(puVar21,uVar16);
        }
        lVar10 = *(longlong *)puVar21;
        lVar15 = (longlong)(int)uVar16 * 0x10;
        *(undefined8 *)(lVar10 + lVar15) = 0;
        ((undefined8 *)(lVar10 + lVar15))[1] = 0;
        uVar6 = *(uint *)(param_2 + 0xc);
        *(uint *)(lVar10 + 8 + lVar15) = uVar6;
        param_3 = CONCAT71((int7)(param_3 >> 8),local_9d);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar20 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar22 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar22) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar20 = *(int *)(lVar11 + 0x10);
          bVar22 = iVar20 == 0;
          if (bVar22) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar22) {
            iVar20 = iVar7;
          }
        }
        *(int *)(lVar10 + lVar15 + 0xc) = iVar20;
        local_60 = (code *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        pcVar3 = local_60;
        local_58 = 3;
        *(undefined ***)local_60 = &PTR_LAB_14b405f40;
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar17 == 0) {
          LOCK();
          UNLOCK();
          lVar17 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        *(longlong *)(local_60 + 0x10) = lVar17;
        *(undefined ***)local_60 = &PTR_FUN_14b432f10;
        *(longlong *)(local_60 + 0x18) = 0;
        uVar6 = *(uint *)(lVar8 + 0xc);
        *(uint *)(local_60 + 0x18) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar20 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar22 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar22) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar20 = *(int *)(lVar8 + 0x10);
          bVar22 = iVar20 == 0;
          if (bVar22) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar22) {
            iVar20 = iVar7;
          }
        }
        *(int *)(pcVar3 + 0x1c) = iVar20;
        *(uint **)(pcVar3 + 0x20) = param_1;
        if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
           (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
          if (local_58 == 0) {
            uVar12 = 0;
            goto LAB_140b15a37;
          }
          if (local_60 != (code *)0x0) {
            uVar12 = 0;
            (*(code *)**(undefined8 **)local_60)(local_60,0);
            FUN_1446efa72(&local_60,0,0,0x10);
            goto LAB_140b15a24;
          }
          uVar12 = 0;
        }
        else {
          plVar18 = (longlong *)(param_2 + 0x410);
          if (*(int *)(param_2 + 0x424) < 1) {
            iVar20 = *(int *)(param_2 + 0x418);
            iVar7 = *(int *)(param_2 + 0x420) + -1;
            *(int *)(param_2 + 0x420) = iVar7;
            if (iVar7 <= iVar20) {
              iVar7 = iVar20;
              if (0 < iVar20) {
                iVar13 = 0;
                do {
                  if (((*(int *)(*plVar18 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                      (plVar2 = *(longlong **)(*plVar18 + (longlong)iVar13 * 0x10),
                      plVar2 == (longlong *)0x0)) ||
                     (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                    FUN_14005b288(plVar18,iVar13);
                    FUN_14005b248(plVar18);
                  }
                  else {
                    iVar13 = iVar13 + 1;
                  }
                  iVar7 = *(int *)(param_2 + 0x418);
                } while (iVar13 < iVar7);
              }
              iVar13 = 2;
              if (2 < iVar7 * 2) {
                iVar13 = iVar7 * 2;
              }
              *(int *)(param_2 + 0x420) = iVar13;
              if ((iVar13 < iVar20) && (*(int *)(param_2 + 0x41c) != iVar7)) {
                FUN_14045812c();
              }
            }
          }
          uVar12 = 0;
          if ((local_58 != 0) && (local_60 != (code *)0x0)) {
            (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
            uVar12 = local_50;
          }
          iVar20 = *(int *)(param_2 + 0x418);
          *(uint *)(param_2 + 0x418) = iVar20 + 1U;
          if (*(uint *)(param_2 + 0x41c) < iVar20 + 1U) {
            FUN_1447a71f6(plVar18,iVar20);
          }
          lVar8 = *plVar18;
          lVar11 = (longlong)iVar20 * 0x10;
          *(undefined8 *)(lVar8 + lVar11) = 0;
          *(undefined4 *)(lVar8 + 8 + lVar11) = 0;
          *(code **)(lVar8 + lVar11) = local_60;
          local_60 = (code *)0x0;
          *(int *)(lVar8 + 8 + lVar11) = local_58;
LAB_140b15a24:
          local_58 = 0;
LAB_140b15a37:
          if (local_60 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        *(undefined8 *)(lVar10 + lVar15) = uVar12;
      }
    }
LAB_140b15552:
    if (DAT_14caf64b8 == 0) {
      local_c0 = &local_60;
      local_60 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_142b4754c;
      local_c8 = &LAB_147c45ce0;
      local_d0 = &LAB_1463f1ff4;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0x4000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) ||
       (lVar8 = *(longlong *)(param_2 + 0x3c0), lVar8 == 0)) goto LAB_140b15581;
    if (DAT_14cb61cd0 == 0) {
      local_c0 = &local_60;
      local_60 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = (code *)&LAB_1463b31ae;
      local_c8 = &LAB_1486dca4f;
      local_d0 = &LAB_1464f50a6;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_140b15581;
  }
  FUN_140b161b0(param_1,param_2,lVar8,param_3);
LAB_140b15595:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b15fd0 FUN_140b15fd0 body=335 status=ok
// SIG undefined FUN_140b15fd0(void)

longlong FUN_140b15fd0(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140b1605c;
  }
  lVar3 = 0;
LAB_140b1605c:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b16120 FUN_140b16120 body=143 status=ok
// SIG undefined FUN_140b16120(void)

void FUN_140b16120(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140b161b0 FUN_140b161b0 body=1499 status=ok
// SIG undefined FUN_140b161b0(void)

void FUN_140b161b0(uint *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = FUN_140b15fd0();
  if (((((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
         (uVar2 = *param_1, -1 < (int)uVar2)) &&
        (((int)uVar2 < DAT_14c9647dc &&
         (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0)))) &&
       ((*(uint *)(lVar11 + 0x10) == param_1[1] &&
        ((lVar7 != 0 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))))) &&
      (lVar7 = FUN_1447210f0(lVar7), lVar7 != 0)) &&
     ((iVar6 = FUN_14490d72a(lVar7), iVar6 != 3 && (*(char *)((longlong)param_1 + 0x61) == '\x01')))
     ) {
    dVar1 = *(double *)(lVar7 + 0x6d0);
    if ((char)param_1[0x1a] == '\0') {
      if ((longlong)(int)param_1[0xe] != 0) {
        lVar7 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0xc) + 8 + lVar7) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0xc) + lVar7) != 0)) goto LAB_140b162cd;
          lVar7 = lVar7 + 0x10;
        } while ((longlong)(int)param_1[0xe] * 0x10 != lVar7);
      }
      if ((((0.0 < (float)param_1[8]) && (0.0 < (float)param_1[9])) &&
          ((float)dVar1 < (float)param_1[8] + (float)param_1[9])) ||
         ((0 < (int)param_1[6] && ((int)param_1[6] <= (int)param_1[7])))) goto LAB_140b1625e;
    }
LAB_140b162cd:
    if ((param_3 != 0) || ((char)param_1[10] == '\0')) {
      lVar7 = FUN_140b15fd0(param_1);
      plVar3 = *(longlong **)(param_1 + 2);
      if (param_4 == '\0') {
        if ((((plVar3 != (longlong *)0x0) && (param_1[1] != 0)) &&
            ((uVar2 = *param_1, -1 < (int)uVar2 &&
             ((((int)uVar2 < DAT_14c9647dc &&
               (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0)
               ) && (*(uint *)(lVar11 + 0x10) == param_1[1])))))) &&
           (((lVar7 != 0 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) &&
            ((**(code **)(*plVar3 + 0x28))
                       (plVar3,param_2,CONCAT71((int7)((ulonglong)lVar11 >> 8),param_3 != 0)),
            param_3 != 0)))) {
          uVar2 = *(uint *)(param_3 + 0xc);
          local_a8 = (undefined8 **)(ulonglong)uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar6 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar6 = *(int *)(lVar7 + 0x10);
            bVar13 = iVar6 == 0;
            if (bVar13) {
              *(int *)(lVar7 + 0x10) = iVar10;
              iVar6 = 0;
            }
            UNLOCK();
            uVar2 = (uint)local_a8;
            if (bVar13) {
              iVar6 = iVar10;
            }
          }
          local_a8._0_4_ = uVar2;
          local_a8 = (undefined8 **)CONCAT44(iVar6,(uint)local_a8);
          uVar2 = param_1[0x2a];
          if ((longlong)(int)uVar2 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x28);
            uVar12 = 0;
            do {
              cVar5 = FUN_141291ffc(lVar7 + uVar12,&local_a8);
              if (cVar5 != '\0') {
                if ((int)(~uVar12 >> 3) != 0) goto LAB_140b164a6;
                break;
              }
              uVar12 = uVar12 + 8;
            } while ((longlong)(int)uVar2 * 8 != uVar12);
          }
          uVar2 = param_1[0x2a];
          param_1[0x2a] = uVar2 + 1;
          if (param_1[0x2b] < uVar2 + 1) {
            FUN_14577298c(param_1 + 0x28,uVar2);
          }
          *(undefined8 ***)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar2 * 8) = local_a8;
LAB_140b164a6:
          if (((*(longlong *)(param_1 + 0x2c) == 0) && (lVar7 = FUN_140b15fd0(param_1), lVar7 != 0))
             && (lVar7 = FUN_1447210f0(lVar7), lVar7 != 0)) {
            uVar8 = FUN_140b15fd0(param_1);
            if (*(longlong *)(lVar7 + 0x1f0) == 0) {
              puVar9 = (undefined8 *)(lVar7 + 0x458);
            }
            else {
              puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
            }
            uVar4 = *puVar9;
            local_c0 = (undefined8 *)0x0;
            local_b8 = 0;
            FUN_1446efa72(&local_c0,0,3,0x10);
            puVar9 = local_c0;
            local_b8 = 3;
            *local_c0 = &PTR_LAB_14a1c8830;
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
            local_c0[2] = lVar11;
            *local_c0 = &PTR_FUN_14b432ea0;
            local_c0[3] = 0;
            FUN_14485c47a(local_c0 + 3,uVar8);
            puVar9[4] = param_1;
            local_a8 = (undefined8 **)0x0;
            local_a0 = 0;
            FUN_14487d8d8(&local_a8,&local_c0);
            local_68 = 1;
            local_c8 = local_b0;
            local_b0[0] = 0;
            local_ac = 0xbf800000;
            FUN_1406f4044(uVar4,param_1 + 0x2c,&local_a8,0x800000);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
            FUN_1449db362(&local_c0);
          }
        }
      }
      else if (((((plVar3 != (longlong *)0x0) && (param_1[1] != 0)) &&
                (uVar2 = *param_1, -1 < (int)uVar2)) &&
               (((int)uVar2 < DAT_14c9647dc &&
                (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0
                )))) && (((*(uint *)(lVar11 + 0x10) == param_1[1] &&
                          ((lVar7 != 0 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) &&
                         ((**(code **)(*plVar3 + 0x20))
                                    (plVar3,param_2,
                                     CONCAT71((int7)((ulonglong)lVar11 >> 8),param_3 != 0)),
                         param_3 != 0)))) {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 2) + 0x30))();
        if ((cVar5 != '\0') && (cVar5 = FUN_14885fa80(lVar7,lVar7), cVar5 != '\0')) {
          (**(code **)(**(longlong **)(param_1 + 2) + 0x38))();
        }
        if ((longlong)(int)param_1[0x2a] != 0) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          lVar11 = (longlong)(int)param_1[0x2a] << 3;
          do {
            cVar5 = FUN_1411db966(lVar7,param_3);
            if (cVar5 != '\0') {
              local_c0 = (undefined8 *)0x0;
              FUN_14485c47a(&local_c0,param_3);
              local_a8 = &local_c0;
              FUN_141291ed4(param_1 + 0x28);
              goto LAB_140b16387;
            }
            lVar7 = lVar7 + 8;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        FUN_1411d03f8(param_1 + 0xc,param_3);
      }
LAB_140b16387:
      if (param_1[6] != 0) {
        param_1[7] = param_1[7] + 1;
      }
      if (0.0 < (float)param_1[8]) {
        param_1[9] = (uint)(float)dVar1;
      }
    }
  }
LAB_140b1625e:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b16798 FUN_140b16798 body=269 status=ok
// SIG undefined FUN_140b16798(void)

void FUN_140b16798(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b168a6 FUN_140b168a6 body=73 status=ok
// SIG undefined FUN_140b168a6(void)

void FUN_140b168a6(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1 + 0x1c8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b168f0 FUN_140b168f0 body=128 status=ok
// SIG undefined FUN_140b168f0(void)

void FUN_140b168f0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  FUN_1447cd2ec(param_1 + 0x1b8);
  if ((((param_3 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (*(longlong *)(param_1 + 0x18) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 8))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b16984 FUN_140b16984 body=8 status=ok
// SIG undefined FUN_140b16984(void)

undefined8 FUN_140b16984(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 140b1698c FUN_140b1698c body=103 status=ok
// SIG undefined FUN_140b1698c(void)

ulonglong FUN_140b1698c(longlong param_1)

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
LAB_140b169d6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140b169d6;
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



// FUNCTION 140b169f4 FUN_140b169f4 body=28 status=ok
// SIG undefined FUN_140b169f4(void)

void FUN_140b169f4(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140b16a10();
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 140b16a10 FUN_140b16a10 body=457 status=ok
// SIG undefined FUN_140b16a10(void)

undefined8 FUN_140b16a10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar2 == 0) {
    uVar5 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar8 + (longlong)iVar2 * 3;
    while( true ) {
      local_50 = 0;
      local_58 = *plVar8;
      local_48 = 0;
      uVar5 = FUN_14477b664(plVar8[1]);
      local_50 = FUN_14477b664(uVar5);
      local_48 = plVar8[2];
      if (local_50 == 0) {
        uVar5 = FUN_140e391b0();
        local_50 = FUN_14477b664(uVar5);
      }
      if (local_48 == 0) break;
LAB_140b16b16:
      uVar5 = *param_2;
      lVar7 = local_48;
      if (local_50 == 0) {
        uVar6 = FUN_140e391b0();
        local_50 = FUN_14477b664(uVar6);
        lVar7 = local_48;
        if (local_48 == 0) {
          if (local_50 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            if (local_58 != 0) {
              plVar3 = *(longlong **)(local_50 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                lVar7 = 0;
                local_48 = lVar7;
              }
              else {
                uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar7 = FUN_144aff482(uVar6,&local_58);
                local_48 = lVar7;
              }
            }
          }
        }
      }
      uVar5 = FUN_141416bba(uVar5,lVar7);
      if (((char)uVar5 == '\0') || (plVar8 = plVar8 + 3, plVar8 == plVar1)) goto LAB_140b16bb3;
    }
    local_48 = 0;
    if ((((local_50 != 0) && (local_58 != 0)) &&
        (plVar3 = *(longlong **)(local_50 + 0xb8), plVar3 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 != '\0')) {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      local_48 = FUN_144aff482(uVar5,&local_58);
      if (local_48 != 0) goto LAB_140b16b16;
    }
    uVar5 = 0;
  }
LAB_140b16bb3:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140b16bda FUN_140b16bda body=499 status=ok
// SIG undefined FUN_140b16bda(void)

void FUN_140b16bda(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_6c;
  int *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = *(int *)(*(longlong *)(param_1 + 0x10) + 0x34);
  if (local_6c != 1) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x10);
      lVar5 = (longlong)local_6c * 0x20;
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      puVar2 = (undefined4 *)(lVar7 + lVar5);
      local_98 = *puVar2;
      uStack_94 = puVar2[1];
      uStack_90 = puVar2[2];
      uStack_8c = puVar2[3];
      puVar2 = (undefined4 *)(lVar7 + 0x10 + lVar5);
      local_88 = *puVar2;
      iStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      uVar4 = *(ulonglong *)(lVar7 + 8 + lVar5);
      if (uVar4 != 0) {
        if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
          uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          lVar7 = *(longlong *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x60) == 0) {
            lVar7 = param_1 + 0x58;
          }
          iVar8 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(param_1 + 0x68) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
          if (iVar8 != -1) {
            lVar7 = *(longlong *)(param_1 + 0x20);
            do {
              lVar5 = lVar7 + (longlong)iVar8 * 0x20;
              if (*(ulonglong *)(lVar7 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_140b16d9d;
              iVar8 = *(int *)(lVar5 + 0x18);
            } while (iVar8 != -1);
          }
        }
        lVar5 = 0;
LAB_140b16d9d:
        local_68 = &local_6c;
        FUN_140b16dce(lVar5 + 8,&local_68);
        if (*(int *)(lVar5 + 0x10) == 0) {
          FUN_1400eb0ec((longlong *)(param_1 + 0x20),puVar1[1]);
        }
      }
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      lVar7 = *(longlong *)(param_1 + 0x10);
      lVar5 = (longlong)local_6c * 0x20;
      iVar8 = *(int *)(lVar7 + 0x14 + lVar5);
      iVar3 = *(int *)(lVar7 + 0x18 + lVar5);
      *(int *)(lVar7 + 0x14 + (longlong)iVar3 * 0x20) = iVar8;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x18 + (longlong)iVar8 * 0x20) = iVar3;
      *(int *)(lVar7 + 0x18 + lVar5) = local_6c;
      *(int *)(lVar7 + 0x14 + lVar5) = local_6c;
      lVar7 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(lVar7 + 0x14 + lVar5) = 0;
      iVar8 = *(int *)(lVar7 + 0x18);
      *(int *)(lVar7 + 0x18 + lVar5) = iVar8;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x14 + (longlong)iVar8 * 0x20) = local_6c;
      *(int *)(lVar7 + 0x18) = local_6c;
      if ((code *)CONCAT44(uStack_94,local_98) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_94,local_98))(&local_88,CONCAT44(uStack_8c,uStack_90));
      }
      local_6c = iStack_84;
    } while (iStack_84 != 1);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b16dce FUN_140b16dce body=212 status=ok
// SIG undefined FUN_140b16dce(void)

int FUN_140b16dce(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar5 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    iVar4 = 0;
    bVar11 = *piVar1 == *(int *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar3;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (piVar1[lVar7] == *(int *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar8) {
          memmove(piVar1 + iVar4,piVar1 + lVar3,(longlong)(iVar10 - iVar8) << 2);
        }
        iVar4 = iVar4 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar6);
    *(int *)(param_1 + 1) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 140b16eb0 FUN_140b16eb0 body=36 status=ok
// SIG undefined FUN_140b16eb0(void)

undefined8 FUN_140b16eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140b16ee4 FUN_140b16ee4 body=44 status=ok
// SIG undefined FUN_140b16ee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b16ee4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7d2cc = _DAT_14cb7d2cc + -1;
  *param_1 = DAT_14cb7d2c0;
  DAT_14cb7d2c0 = param_1;
  return;
}



// FUNCTION 140b16f10 FUN_140b16f10 body=40 status=ok
// SIG undefined FUN_140b16f10(void)

undefined8 FUN_140b16f10(undefined8 param_1,int param_2)

{
  FUN_140b16f38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b16f38 FUN_140b16f38 body=400 status=ok
// SIG undefined FUN_140b16f38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b16f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b401200;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x6e);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 99);
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x36);
  FUN_14051f4c4(param_1 + 0x1f);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f497(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f497(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140b17077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140b170c8 FUN_140b170c8 body=549 status=ok
// SIG undefined FUN_140b170c8(void)

void FUN_140b170c8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = (**(code **)(*param_1 + 0x28))();
  if ((param_3 != (longlong *)0x0) && (cVar4 != '\0')) {
    uVar6 = FUN_140b17338();
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_140b17338();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) {
        lVar11 = param_1[9];
        if (*(longlong *)(lVar11 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
        if ((longlong)*(int *)(lVar11 + 0x50) == 0) {
          local_58 = 0;
          uStack_50 = 0;
          (**(code **)(*plVar8 + 0x10))(plVar8,lVar11 + 0x38,&local_58);
          FUN_140b1730a(local_58,uStack_50 & 0xffffffff);
        }
        else {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          puVar9 = *(undefined8 **)(lVar11 + 0x48);
          puVar10 = puVar9 + (longlong)*(int *)(lVar11 + 0x50) * 3;
          do {
            uVar3 = uStack_50;
            uVar6 = *puVar9;
            lVar11 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_14023b962(&local_58,uVar3 & 0xffffffff);
            }
            uVar3 = uStack_60;
            *(undefined8 *)(local_58 + lVar11 * 8) = uVar6;
            lVar11 = (longlong)(int)uStack_60;
            uVar5 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
            if (uStack_60._4_4_ < uVar5) {
              FUN_140b1741e(&local_68,uVar3 & 0xffffffff);
            }
            lVar11 = lVar11 * 0x10;
            puVar1 = (undefined8 *)(local_68 + lVar11);
            *(undefined8 *)(local_68 + lVar11) = 0;
            iVar2 = *(int *)(puVar9 + 2);
            _Src = (void *)puVar9[1];
            *(int *)(local_68 + 8 + lVar11) = iVar2;
            if ((longlong)iVar2 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1411312f2(puVar1,iVar2,0);
              memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
            }
            puVar9 = puVar9 + 3;
          } while (puVar9 != puVar10);
          (**(code **)(*plVar8 + 0x10))(plVar8,&local_58,&local_68);
          FUN_140b1730a(local_68,uStack_60 & 0xffffffff);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1730a FUN_140b1730a body=45 status=ok
// SIG undefined FUN_140b1730a(void)

void FUN_140b1730a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140b17338 FUN_140b17338 body=228 status=ok
// SIG undefined FUN_140b17338(void)

longlong FUN_140b17338(void)

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
  if (DAT_14cb57558 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14863f9d7;
    local_40 = FUN_1464bc913;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ExternalGestaltPartInterface",&DAT_14cb57558,&DAT_14863f9d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1741e FUN_140b1741e body=269 status=ok
// SIG undefined FUN_140b1741e(void)

void FUN_140b1741e(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b1752c FUN_140b1752c body=678 status=ok
// SIG undefined FUN_140b1752c(void)

undefined8 FUN_140b1752c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140311eb6(param_2,param_3);
    if (param_3 == param_2) {
      FUN_140311eb6(param_2 + 0x28,param_3 + 0x28);
      FUN_140311eb6(param_2 + 0x38,param_3 + 0x38);
    }
    else {
      local_78 = 0;
      uStack_70 = 0;
      iVar1 = *(int *)(param_3 + 0x18);
      if ((longlong)iVar1 != 0) {
        local_90 = *(longlong *)(param_3 + 0x10);
        lVar6 = 0;
        do {
          if ((*(int *)(local_90 + 8 + lVar6) != 0) &&
             (*(longlong **)(local_90 + lVar6) != (longlong *)0x0)) {
            local_88 = 0;
            local_80 = 0;
            (**(code **)(**(longlong **)(local_90 + lVar6) + 0x40))();
            local_98 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_1447a71f6(&local_78);
            }
            lVar8 = local_98 * 0x10;
            *(undefined8 *)(local_78 + lVar8) = 0;
            *(undefined4 *)(local_78 + 8 + lVar8) = 0;
            *(undefined8 *)(local_78 + lVar8) = local_88;
            local_88 = 0;
            *(undefined4 *)(local_78 + 8 + lVar8) = local_80;
            local_80 = 0;
            FUN_1449db362(&local_88);
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      FUN_1448a8284((longlong *)(param_2 + 0x10));
      if (&local_78 == (longlong *)(param_2 + 0x10)) {
        uVar7 = uStack_70 & 0xffffffff;
      }
      else {
        FUN_144760e21(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
        if (*(longlong *)(param_2 + 0x10) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 0x10) = local_78;
        local_78 = 0;
        *(int *)(param_2 + 0x18) = (int)uStack_70;
        *(uint *)(param_2 + 0x1c) = uStack_70._4_4_;
        uStack_70 = 0;
        uVar7 = 0;
      }
      FUN_144760e21(local_78,uVar7);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140311eb6(param_2 + 0x28,param_3 + 0x28);
      FUN_140311eb6(param_2 + 0x38,param_3 + 0x38);
      FUN_140b17902(param_2 + 0x48,param_3 + 0x48);
    }
    uVar2 = *(undefined4 *)(param_3 + 100);
    uVar3 = *(undefined4 *)(param_3 + 0x68);
    uVar4 = *(undefined4 *)(param_3 + 0x6c);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    *(undefined4 *)(param_2 + 100) = uVar2;
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x6c) = uVar4;
    *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
    FUN_140b177d4(param_2 + 0x78,param_3 + 0x78);
    *(undefined2 *)(param_2 + 0x98) = *(undefined2 *)(param_3 + 0x98);
    FUN_140b178a4(param_2 + 0xa0,param_3 + 0xa0);
    FUN_140b178a4(param_2 + 0xb0,param_3 + 0xb0);
    FUN_140b178a4(param_2 + 0xc0,param_3 + 0xc0);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b177d4 FUN_140b177d4 body=106 status=ok
// SIG undefined FUN_140b177d4(void)

void * FUN_140b177d4(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    }
    else {
      FUN_140b1783e(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b1783e FUN_140b1783e body=101 status=ok
// SIG undefined FUN_140b1783e(void)

void FUN_140b1783e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 2, 2 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_140254e44(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 140b178a4 FUN_140b178a4 body=93 status=ok
// SIG undefined FUN_140b178a4(void)

undefined8 * FUN_140b178a4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1404967ae(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b17b4c(param_1,iVar1);
      FUN_140b17a8e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140b17902 FUN_140b17902 body=395 status=ok
// SIG undefined FUN_140b17902(void)

void FUN_140b17902(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b17a8e FUN_140b17a8e body=189 status=ok
// SIG undefined FUN_140b17a8e(void)

void FUN_140b17a8e(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined4 *)(param_1 + -0x28) = *(undefined4 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + -8) = 0;
      FUN_14007b350(param_1,param_2);
      uVar1 = *(undefined4 *)(param_2 + 0x164);
      uVar2 = *(undefined4 *)(param_2 + 0x168);
      uVar3 = *(undefined4 *)(param_2 + 0x16c);
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
      *(undefined4 *)(param_1 + 0x164) = uVar1;
      *(undefined4 *)(param_1 + 0x168) = uVar2;
      *(undefined4 *)(param_1 + 0x16c) = uVar3;
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      FUN_14007b0d4(param_1 + 0x178,param_2 + 0x178);
      *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
      param_1 = param_1 + 0x1b8;
      param_2 = param_2 + 0x1b8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b17b4c FUN_140b17b4c body=336 status=ok
// SIG undefined FUN_140b17b4c(void)

void FUN_140b17b4c(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x1b8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b17bbd;
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
LAB_140b17bbd:
    iVar5 = (int)(uVar4 / 0x1b8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x1b8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b17c9c FUN_140b17c9c body=367 status=ok
// SIG undefined FUN_140b17c9c(void)

void FUN_140b17c9c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong ****pppplVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong ****pppplVar6;
  longlong ****pppplVar7;
  undefined1 auStack_68 [40];
  longlong ***local_40;
  longlong ***local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140b17e46();
  if ((param_3 & 1) != 0) {
    pppplVar6 = &local_40;
    FUN_14026eace(pppplVar6,param_2);
    pppplVar7 = (longlong ****)local_40;
    bVar3 = true;
    if ((longlong ****)local_40 != (longlong ****)0x0) {
      uVar5 = FUN_140b17e0c();
      cVar4 = FUN_1448093f4(pppplVar7,uVar5);
      if (cVar4 != '\0') {
        if ((longlong ****)local_38 == (longlong ****)0x0) {
          pppplVar7 = (longlong ****)0x0;
        }
        else {
          LOCK();
          *(int *)(local_38 + 1) = *(int *)(local_38 + 1) + 1;
          UNLOCK();
          pppplVar7 = (longlong ****)local_38;
        }
        bVar3 = false;
        pppplVar6 = (longlong ****)local_40;
      }
    }
    if ((longlong ****)local_38 != (longlong ****)0x0) {
      LOCK();
      pppplVar1 = (longlong ****)(local_38 + 1);
      *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
      UNLOCK();
      if (*(int *)pppplVar1 == 0) {
        (*(code *)**local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_38)[2])(local_38);
        }
      }
    }
    if (!bVar3) {
      if (pppplVar6 != (longlong ****)0x0) {
        FUN_140b192b8(param_1,pppplVar6 + 0x111,param_1 + 0x1c8);
        FUN_140b192b8(param_1,pppplVar6 + 0x113,param_1 + 0x1d8);
        FUN_140b192b8(param_1,pppplVar6 + 0x115,param_1 + 0x1e8);
        FUN_140b192b8(param_1,pppplVar6 + 0x117,param_1 + 0x1f8);
      }
      if (pppplVar7 != (longlong ****)0x0) {
        LOCK();
        pppplVar6 = pppplVar7 + 1;
        *(int *)pppplVar6 = *(int *)pppplVar6 + -1;
        UNLOCK();
        if (*(int *)pppplVar6 == 0) {
          (*(code *)**pppplVar7)(pppplVar7);
          LOCK();
          piVar2 = (int *)((longlong)pppplVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppplVar7)[2])(pppplVar7);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b17e0c FUN_140b17e0c body=57 status=ok
// SIG undefined FUN_140b17e0c(void)

void FUN_140b17e0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd508 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd508 = FUN_140002ddd(FUN_14660f154,uVar1,L"OakWeaponAudioProvider");
  }
  return;
}



// FUNCTION 140b17e46 FUN_140b17e46 body=5233 status=ok
// SIG undefined FUN_140b17e46(void)

void FUN_140b17e46(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float fVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint *puVar19;
  byte bVar20;
  int iVar21;
  ulonglong uVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  int iVar31;
  undefined8 *puVar32;
  longlong lVar33;
  longlong *unaff_R13;
  ulonglong uVar34;
  byte *pbVar35;
  longlong *plVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  float fVar40;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong **local_120;
  longlong *local_110;
  uint *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  int local_d4;
  longlong *local_d0;
  uint *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3 & 1) != 0) {
    FUN_14026eace(&local_a8);
    plVar29 = local_a8;
    bVar9 = true;
    if (local_a8 != (longlong *)0x0) {
      uVar17 = FUN_140b193ca();
      cVar13 = FUN_1448093f4(plVar29,uVar17);
      if (cVar13 != '\0') {
        if (local_a0 == (longlong *)0x0) {
          plVar29 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          plVar29 = local_a0;
        }
        bVar9 = false;
        unaff_R13 = local_a8;
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_a0 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
    if (!bVar9) {
      if (unaff_R13 != (longlong *)0x0) {
        FUN_140b192b8(param_1,unaff_R13 + 0x6a,param_1 + 0x30);
        FUN_140b192b8(param_1,unaff_R13 + 0x6c,param_1 + 0x40);
        FUN_140b192b8(param_1,unaff_R13 + 0x6e,param_1 + 0x50);
        FUN_140b192b8(param_1,unaff_R13 + 0x70,param_1 + 0x60);
        FUN_140b192b8(param_1,unaff_R13 + 0x72,param_1 + 0x70);
        FUN_140b192b8(param_1,unaff_R13 + 0x74,param_1 + 0x80);
        FUN_140b192b8(param_1,unaff_R13 + 0x76,param_1 + 0x90);
        FUN_140b192b8(param_1,unaff_R13 + 0x78,param_1 + 0xa0);
        if (plVar29 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
          UNLOCK();
        }
        puVar2 = (uint *)(param_1 + 0xd0);
        uVar38 = *(uint *)(param_1 + 0xe8);
        if (uVar38 == 0) {
          uVar34 = 1;
          uVar22 = 0;
          iVar31 = 0;
          uVar15 = 0;
        }
        else {
          puVar19 = *(uint **)(param_1 + 0xe0);
          if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
            puVar19 = puVar2;
          }
          uVar15 = *puVar19;
          if (uVar15 == 0) {
            iVar31 = uVar38 + 0x1e;
            if (-1 < (int)(uVar38 - 1)) {
              iVar31 = uVar38 - 1;
            }
            uVar22 = 0;
            uVar26 = (ulonglong)(uint)(iVar31 >> 5);
            if (iVar31 >> 5 < 1) {
              uVar26 = uVar22;
            }
            iVar31 = 0;
            do {
              if (uVar26 == uVar22) goto LAB_140b18762;
              iVar31 = iVar31 + 0x20;
              uVar15 = puVar19[uVar22 + 1];
              uVar22 = uVar22 + 1;
            } while (uVar15 == 0);
          }
          else {
            uVar22 = 0;
            iVar31 = 0;
          }
          uVar34 = (ulonglong)(-uVar15 & uVar15);
          uVar26 = uVar34 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar15 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar38 <= (int)uVar15) {
            uVar15 = uVar38;
          }
        }
        if (uVar15 != uVar38) {
          local_100 = unaff_R13 + 0x60;
          local_110 = unaff_R13 + 0x67;
          local_d0 = unaff_R13 + 0x68;
          local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
          local_108 = (uint *)(unaff_R13 + 0x62);
          local_c0 = (ulonglong)uVar38;
          do {
            local_f8 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar15 * 0x28);
            lVar18 = *local_f8;
            uVar38 = (uint)((ulonglong)lVar18 >> 0x10);
            uVar15 = (uint)lVar18 & 0xffff;
            uVar38 = ((uint)lVar18 << 0x10 | uVar15) + (int)((ulonglong)lVar18 >> 0x20) +
                     (uVar38 << 0x13 | uVar38 & 0xffff) + (uVar15 >> 4);
            iVar28 = (int)unaff_R13[0x61];
            iVar14 = *(int *)((longlong)unaff_R13 + 0x334);
            local_e8 = uVar34;
            local_d4 = iVar31;
            local_b0 = uVar22;
            if (iVar28 != iVar14) {
              plVar23 = (longlong *)unaff_R13[0x68];
              if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                plVar23 = local_110;
              }
              iVar31 = *(int *)((longlong)plVar23 +
                               (ulonglong)((int)unaff_R13[0x69] - 1U & uVar38) * 4);
              if (iVar31 != -1) {
                do {
                  lVar39 = *local_100 + (longlong)iVar31 * 0x20;
                  if (*(longlong *)(*local_100 + (longlong)iVar31 * 0x20) == lVar18) {
                    if (lVar39 != 0) goto LAB_140b182c7;
                    break;
                  }
                  iVar31 = *(int *)(lVar39 + 0x18);
                } while (iVar31 != -1);
              }
            }
            if (iVar14 == 0) {
              *(int *)(unaff_R13 + 0x61) = iVar28 + 1;
              if (*(int *)((longlong)unaff_R13 + 0x30c) == iVar28) {
                FUN_1447711aa(local_100,iVar28);
              }
              iVar31 = (int)unaff_R13[0x65];
              if (iVar31 == 0) {
                iVar14 = -1;
              }
              else {
                iVar14 = iVar31 + 0x1e;
                if (-1 < iVar31 + -1) {
                  iVar14 = iVar31 + -1;
                }
                iVar14 = iVar14 >> 5;
              }
              iVar21 = iVar31 + 1;
              iVar24 = iVar31 + 0x1f;
              if (-1 < iVar31) {
                iVar24 = iVar31;
              }
              if (iVar24 >> 5 == iVar14) {
                *(int *)(unaff_R13 + 0x65) = iVar21;
              }
              else {
                if (*(int *)((longlong)unaff_R13 + 0x32c) <= iVar31) {
                  if (iVar31 + 0x20U < 0xa0) {
                    iVar21 = 0x80;
                    iVar14 = iVar31;
                  }
                  else {
                    uVar15 = iVar31 + 0x20U >> 5;
                    local_b8 = (ulonglong)uVar15;
                    if (*(int *)((longlong)unaff_R13 + 0x32c) + 0x1fU < 0xa0) {
                      uVar27 = 4;
                      if (4 < uVar15) {
                        uVar27 = uVar15;
                      }
                    }
                    else {
                      uVar27 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
                    }
                    uVar22 = FUN_144a3809e(uVar27 << 2,0);
                    iVar14 = (int)(uVar22 >> 2);
                    iVar21 = -0x20;
                    if ((int)local_b8 <= iVar14) {
                      iVar21 = iVar14 << 5;
                    }
                    iVar14 = (int)unaff_R13[0x65];
                  }
                  *(int *)((longlong)unaff_R13 + 0x32c) = iVar21;
                  FUN_1446efbd8(local_108,iVar14);
                  iVar21 = (int)unaff_R13[0x65] + 1;
                }
                iVar14 = iVar21 + 0x1f;
                if (-1 < iVar21) {
                  iVar14 = iVar21;
                }
                *(int *)(unaff_R13 + 0x65) = iVar21;
                if (iVar21 % 0x20 != 0) {
                  puVar19 = (uint *)unaff_R13[100];
                  if ((uint *)unaff_R13[100] == (uint *)0x0) {
                    puVar19 = local_108;
                  }
                  bVar20 = -(char)(iVar21 % 0x20);
                  puVar19[iVar14 >> 5] =
                       (puVar19[iVar14 >> 5] << (bVar20 & 0x1f)) >> (bVar20 & 0x1f);
                }
              }
              lVar18 = (longlong)iVar28;
              puVar19 = (uint *)unaff_R13[100];
              if ((uint *)unaff_R13[100] == (uint *)0x0) {
                puVar19 = local_108;
              }
              bVar20 = (byte)iVar31 & 0x1f;
              puVar19[iVar24 >> 5] =
                   puVar19[iVar24 >> 5] & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
            }
            else {
              iVar28 = (int)unaff_R13[0x66];
              lVar18 = (longlong)iVar28;
              iVar31 = *(int *)(unaff_R13[0x60] + 4 + lVar18 * 0x20);
              *(int *)(unaff_R13 + 0x66) = iVar31;
              *(int *)((longlong)unaff_R13 + 0x334) = iVar14 + -1;
              if (iVar14 + -1 != 0) {
                *(undefined4 *)(unaff_R13[0x60] + (longlong)iVar31 * 0x20) = 0xffffffff;
              }
            }
            puVar19 = (uint *)unaff_R13[100];
            if ((uint *)unaff_R13[100] == (uint *)0x0) {
              puVar19 = local_108;
            }
            iVar31 = iVar28 + 0x1f;
            if (-1 < iVar28) {
              iVar31 = iVar28;
            }
            puVar19[iVar31 >> 5] = puVar19[iVar31 >> 5] | 1 << ((byte)iVar28 & 0x1f);
            lVar39 = unaff_R13[0x60];
            lVar18 = lVar18 * 0x20;
            puVar3 = (undefined4 *)(lVar39 + lVar18);
            lVar37 = *local_f8;
            *(longlong *)(lVar39 + lVar18) = lVar37;
            *(undefined8 *)(lVar39 + 8 + lVar18) = 0;
            *(undefined1 *)(lVar39 + 0x10 + lVar18) = 0;
            *(undefined4 *)(lVar39 + 0x18 + lVar18) = 0xffffffff;
            uVar15 = (int)unaff_R13[0x61] - *(int *)((longlong)unaff_R13 + 0x334);
            if ((uVar15 != 0) && (uVar15 != 1)) {
              plVar23 = (longlong *)unaff_R13[0x68];
              if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                plVar23 = local_110;
              }
              iVar31 = *(int *)((longlong)plVar23 +
                               (ulonglong)((int)unaff_R13[0x69] - 1U & uVar38) * 4);
              if (iVar31 != -1) {
                do {
                  puVar4 = (undefined4 *)(*local_100 + (longlong)iVar31 * 0x20);
                  if (*(longlong *)(*local_100 + (longlong)iVar31 * 0x20) == lVar37) {
                    if ((*(longlong *)(puVar4 + 2) != 0) && ((DAT_14cb26569 & 1) != 0)) {
                      FUN_1400848c0(*(undefined8 *)(*(longlong *)(puVar4 + 2) + 0x50));
                    }
                    uVar16 = *puVar3;
                    uVar10 = puVar3[1];
                    uVar11 = puVar3[2];
                    uVar12 = puVar3[3];
                    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
                    *puVar4 = uVar16;
                    puVar4[1] = uVar10;
                    puVar4[2] = uVar11;
                    puVar4[3] = uVar12;
                    FUN_148a1c940(local_100,iVar28);
                    uVar34 = local_e8;
                    goto LAB_140b182ab;
                  }
                  iVar31 = puVar4[6];
                } while (iVar31 != -1);
              }
            }
            uVar27 = 1;
            if (3 < uVar15) {
              uVar22 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
              lVar18 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uVar27 = 1 << ((byte)lVar18 & 0x1f);
            }
            if (((int)uVar15 < 1) || ((int)uVar27 <= (int)unaff_R13[0x69])) {
              uVar38 = (int)unaff_R13[0x69] - 1U & uVar38;
              puVar3[7] = uVar38;
              plVar23 = (longlong *)unaff_R13[0x68];
              if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                plVar23 = local_110;
              }
              puVar3[6] = *(undefined4 *)
                           ((longlong)plVar23 +
                           ((longlong)(int)unaff_R13[0x69] - 1U & (longlong)(int)uVar38) * 4);
              plVar23 = (longlong *)unaff_R13[0x68];
              if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                plVar23 = local_110;
              }
              *(int *)((longlong)plVar23 +
                      ((longlong)(int)unaff_R13[0x69] - 1U & (longlong)(int)uVar38) * 4) = iVar28;
              uVar34 = local_e8;
            }
            else {
              *(uint *)(unaff_R13 + 0x69) = uVar27;
              if (unaff_R13[0x68] != 0) {
                FUN_1446efa72(local_d0,0,0,4);
                uVar27 = *(uint *)(unaff_R13 + 0x69);
              }
              uVar34 = local_e8;
              if (uVar27 == 1) {
                if (*local_d0 != 0) {
                  FUN_1446efa72(local_d0,0,0,4);
                }
LAB_140b1842f:
                uVar38 = 0;
                do {
                  plVar23 = (longlong *)unaff_R13[0x68];
                  if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                    plVar23 = local_110;
                  }
                  *(undefined4 *)
                   ((longlong)plVar23 + (ulonglong)((int)unaff_R13[0x69] + 0x7fffffffU & uVar38) * 4
                   ) = 0xffffffff;
                  uVar38 = uVar38 + 1;
                } while (uVar27 != uVar38);
              }
              else {
                if (uVar27 == 0) goto LAB_140b182ab;
                FUN_1446efa72(local_d0,0,uVar27,4);
                if (0 < (int)uVar27) goto LAB_140b1842f;
              }
              iVar31 = (int)unaff_R13[0x65];
              if (iVar31 == 0) {
                uVar22 = 0;
                uVar26 = 1;
                iVar14 = 0;
                iVar21 = 0;
              }
              else {
                puVar19 = (uint *)unaff_R13[100];
                if ((uint *)unaff_R13[100] == (uint *)0x0) {
                  puVar19 = local_108;
                }
                uVar38 = *puVar19;
                if (uVar38 == 0) {
                  iVar14 = iVar31 + 0x1e;
                  if (-1 < iVar31 + -1) {
                    iVar14 = iVar31 + -1;
                  }
                  uVar22 = 0;
                  uVar26 = (ulonglong)(uint)(iVar14 >> 5);
                  if (iVar14 >> 5 < 1) {
                    uVar26 = uVar22;
                  }
                  iVar21 = 0;
                  do {
                    if (uVar26 == uVar22) goto LAB_140b182ab;
                    iVar21 = iVar21 + 0x20;
                    uVar38 = puVar19[uVar22 + 1];
                    uVar22 = uVar22 + 1;
                  } while (uVar38 == 0);
                }
                else {
                  uVar22 = 0;
                  iVar21 = 0;
                }
                uVar26 = (ulonglong)(-uVar38 & uVar38);
                uVar5 = uVar26 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar5 != 0) {
                  for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar14 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar31 <= iVar14) {
                  iVar14 = iVar31;
                }
              }
              if (iVar14 < iVar31) {
                uVar38 = 0xffffffff;
                do {
                  lVar18 = unaff_R13[0x60];
                  lVar39 = (longlong)iVar14 * 0x20;
                  uVar17 = *(undefined8 *)(lVar18 + lVar39);
                  uVar15 = (uint)((ulonglong)uVar17 >> 0x10);
                  uVar27 = (uint)uVar17 & 0xffff;
                  uVar34 = (longlong)
                           (int)(((uint)uVar17 << 0x10 | uVar27) + (int)((ulonglong)uVar17 >> 0x20)
                                 + (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar27 >> 4)) &
                           (longlong)(int)unaff_R13[0x69] - 1U;
                  iVar31 = (int)uVar34;
                  *(int *)(lVar18 + 0x1c + lVar39) = iVar31;
                  plVar23 = (longlong *)unaff_R13[0x68];
                  if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                    plVar23 = local_110;
                  }
                  *(undefined4 *)(lVar18 + 0x18 + lVar39) =
                       *(undefined4 *)
                        ((longlong)plVar23 + ((longlong)(int)unaff_R13[0x69] - 1U & uVar34) * 4);
                  plVar23 = (longlong *)unaff_R13[0x68];
                  if ((longlong *)unaff_R13[0x68] == (longlong *)0x0) {
                    plVar23 = local_110;
                  }
                  *(int *)((longlong)plVar23 +
                          ((longlong)iVar31 & (longlong)(int)unaff_R13[0x69] - 1U) * 4) = iVar14;
                  uVar38 = ~(uint)uVar26 & uVar38;
                  puVar19 = (uint *)unaff_R13[100];
                  if ((uint *)unaff_R13[100] == (uint *)0x0) {
                    puVar19 = local_108;
                  }
                  iVar31 = (int)unaff_R13[0x65];
                  iVar14 = (int)uVar22;
                  lVar18 = (longlong)iVar14;
                  uVar15 = puVar19[lVar18] & uVar38;
                  uVar34 = local_e8;
                  local_e0 = plVar29;
                  local_c8 = puVar2;
                  if (uVar15 == 0) {
                    iVar24 = iVar31 + 0x1e;
                    if (-1 < iVar31 + -1) {
                      iVar24 = iVar31 + -1;
                    }
                    iVar24 = iVar24 >> 5;
                    iVar25 = iVar24;
                    if (iVar24 < iVar14) {
                      iVar25 = iVar14;
                    }
                    if (iVar24 <= iVar14) break;
                    lVar39 = 0;
                    while( true ) {
                      iVar21 = iVar21 + 0x20;
                      uVar15 = puVar19[lVar18 + lVar39 + 1];
                      if (uVar15 != 0) break;
                      lVar39 = lVar39 + 1;
                      if (iVar25 - lVar18 == lVar39) goto LAB_140b182ab;
                    }
                    uVar22 = (ulonglong)(iVar14 + (int)lVar39 + 1);
                    uVar38 = 0xffffffff;
                  }
                  uVar26 = (ulonglong)(-uVar15 & uVar15);
                  uVar5 = uVar26 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar5 != 0) {
                    for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar14 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                } while (iVar14 < iVar31);
              }
            }
LAB_140b182ab:
            lVar39 = *local_100 + (longlong)iVar28 * 0x20;
LAB_140b182c7:
            if (*(byte *)(lVar39 + 0x10) <= *(byte *)(param_1 + 8)) {
              lVar18 = local_f8[2];
              if (lVar18 == 0) {
                uVar17 = FUN_140067708();
                lVar18 = FUN_14477b664(uVar17);
                local_f8[2] = lVar18;
              }
              plVar23 = (longlong *)local_f8[3];
              if (plVar23 == (longlong *)0x0) {
                if (lVar18 == 0) {
                  plVar23 = (longlong *)0x0;
                }
                else {
                  plVar36 = local_f8 + 1;
                  plVar23 = (longlong *)0x0;
                  if (*plVar36 != 0) {
                    plVar23 = *(longlong **)(lVar18 + 0xb8);
                    if ((plVar23 == (longlong *)0x0) ||
                       (cVar13 = (**(code **)(*plVar23 + 0x108))(), cVar13 == '\0')) {
                      plVar23 = (longlong *)0x0;
                    }
                    else {
                      uVar17 = (**(code **)(*plVar23 + 0x110))(plVar23);
                      plVar23 = (longlong *)FUN_144aff482(uVar17,plVar36);
                    }
                    local_f8[3] = (longlong)plVar23;
                  }
                }
              }
              local_a8 = plVar23;
              FUN_140942716(&local_a8);
              FUN_1407ec87c(lVar39 + 8,&local_a8);
              if ((local_a8 != (longlong *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
                FUN_1400848c0(local_a8[10]);
              }
              *(undefined1 *)(lVar39 + 0x10) = *(undefined1 *)(param_1 + 8);
            }
            uVar38 = (uint)local_f0 & ~(uint)uVar34;
            puVar19 = *(uint **)(param_1 + 0xe0);
            if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
              puVar19 = puVar2;
            }
            uVar27 = *(uint *)(param_1 + 0xe8);
            iVar28 = (int)local_b0;
            lVar18 = (longlong)iVar28;
            uVar15 = puVar19[lVar18] & uVar38;
            if (uVar15 == 0) {
              iVar14 = uVar27 + 0x1e;
              if (-1 < (int)(uVar27 - 1)) {
                iVar14 = uVar27 - 1;
              }
              iVar14 = iVar14 >> 5;
              iVar31 = local_d4 + 0x20;
              iVar21 = iVar14;
              if (iVar14 < iVar28) {
                iVar21 = iVar28;
              }
              if (iVar28 < iVar14) {
                lVar39 = 0;
                do {
                  uVar15 = puVar19[lVar18 + lVar39 + 1];
                  if (uVar15 != 0) {
                    local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
                    uVar22 = (ulonglong)(iVar28 + (int)lVar39 + 1);
                    goto LAB_140b183ba;
                  }
                  iVar31 = iVar31 + 0x20;
                  lVar39 = lVar39 + 1;
                } while (iVar21 - lVar18 != lVar39);
                local_f0._0_4_ = 0xffffffff;
                iVar28 = iVar21;
                uVar38 = (uint)local_f0;
              }
              local_f0 = CONCAT44(local_f0._4_4_,uVar38);
              uVar22 = (ulonglong)(iVar28 + 1);
              uVar34 = local_e8;
              uVar15 = uVar27;
            }
            else {
              local_f0 = CONCAT44(local_f0._4_4_,uVar38);
              uVar22 = local_b0;
              iVar31 = local_d4;
LAB_140b183ba:
              uVar34 = (ulonglong)(-uVar15 & uVar15);
              uVar26 = uVar34 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uVar15 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if ((int)uVar27 <= (int)uVar15) {
                uVar15 = uVar27;
              }
            }
          } while (uVar15 != (uint)local_c0);
        }
LAB_140b18762:
        if (plVar29 != (longlong *)0x0) {
          LOCK();
          plVar23 = plVar29 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar29)(plVar29);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
          LOCK();
          *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
          UNLOCK();
        }
        if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
          plVar36 = *(longlong **)(param_1 + 0xb0);
          plVar23 = plVar36 + (longlong)*(int *)(param_1 + 0xb8) * 5;
          do {
            lVar18 = plVar36[1];
            if (lVar18 == 0) {
              uVar17 = FUN_1407f787c();
              lVar18 = FUN_14477b664(uVar17);
              plVar36[1] = lVar18;
            }
            if (plVar36[2] == 0) {
              if ((*plVar36 != 0) && (lVar18 != 0)) {
                plVar8 = *(longlong **)(lVar18 + 0xb8);
                if ((plVar8 == (longlong *)0x0) ||
                   (cVar13 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar13 == '\0')) {
                  plVar36[2] = 0;
                }
                else {
                  uVar17 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  lVar18 = FUN_144aff482(uVar17,plVar36);
                  plVar36[2] = lVar18;
                  if (lVar18 != 0) goto LAB_140b19143;
                }
              }
            }
            else {
LAB_140b19143:
              fVar40 = (float)*(byte *)(param_1 + 8) + 1.0;
              fVar7 = *(float *)(plVar36 + 3);
              local_e0 = plVar29;
              if ((longlong)(int)unaff_R13[0x7b] != 0) {
                puVar30 = (undefined8 *)unaff_R13[0x7a];
                local_110 = (longlong *)((longlong)(int)unaff_R13[0x7b] * 0x28);
                do {
                  if (plVar36[1] == 0) {
                    uVar17 = FUN_1407f787c();
                    lVar18 = FUN_14477b664(uVar17);
                    plVar36[1] = lVar18;
                  }
                  lVar18 = puVar30[1];
                  if (lVar18 == 0) {
                    lVar18 = FUN_1407f787c();
                  }
                  plVar29 = (longlong *)*puVar30;
                  local_f0 = FUN_14477b664(lVar18);
                  local_a8 = plVar29;
                  uVar16 = FUN_144a7891a(local_f0);
                  local_100 = (longlong *)CONCAT44(local_100._4_4_,uVar16);
                  local_98 = *plVar36;
                  lVar18 = plVar36[1];
                  uVar16 = FUN_144a7891a(lVar18);
                  local_120 = &local_a8;
                  local_128 = local_f0;
                  cVar13 = FUN_144a789b8(uVar16,lVar18,&local_98,(ulonglong)local_100 & 0xffffffff);
                  if (cVar13 != '\0') {
                    if (puVar30 != (undefined8 *)0x0) {
                      *(float *)((longlong)puVar30 + 0x1c) =
                           fVar7 * fVar40 + *(float *)((longlong)puVar30 + 0x1c);
                      *(float *)(puVar30 + 4) = fVar40 + *(float *)(puVar30 + 4);
                      plVar29 = local_e0;
                      goto LAB_140b18d22;
                    }
                    break;
                  }
                  puVar30 = puVar30 + 5;
                  local_110 = local_110 + -5;
                } while (local_110 != (longlong *)0x0);
              }
              iVar31 = (int)unaff_R13[0x7b];
              *(uint *)(unaff_R13 + 0x7b) = iVar31 + 1U;
              if (*(uint *)((longlong)unaff_R13 + 0x3dc) < iVar31 + 1U) {
                FUN_148a1c9b2(unaff_R13 + 0x7a,iVar31);
              }
              puVar30 = (undefined8 *)(unaff_R13[0x7a] + (longlong)iVar31 * 0x28);
              puVar30[2] = 0;
              puVar30[3] = 0;
              *puVar30 = 0;
              puVar30[1] = 0;
              puVar30[4] = 0;
              *(float *)((longlong)puVar30 + 0x1c) = fVar7 * fVar40;
              *(float *)(puVar30 + 4) = fVar40;
              FUN_14123c256(puVar30,plVar36);
              plVar29 = local_e0;
            }
LAB_140b18d22:
            plVar36 = plVar36 + 5;
          } while (plVar36 != plVar23);
        }
        if (plVar29 != (longlong *)0x0) {
          LOCK();
          plVar23 = plVar29 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar29)(plVar29);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
          LOCK();
          *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
          UNLOCK();
        }
        if ((longlong)*(int *)(param_1 + 0x118) != 0) {
          puVar30 = *(undefined8 **)(param_1 + 0x110);
          puVar32 = puVar30 + (longlong)*(int *)(param_1 + 0x118) * 0xe;
          local_100 = unaff_R13 + 0xe9;
          do {
            plVar23 = local_100;
            iVar31 = (int)unaff_R13[0xea];
            *(uint *)(unaff_R13 + 0xea) = iVar31 + 1U;
            if (*(uint *)((longlong)unaff_R13 + 0x754) < iVar31 + 1U) {
              FUN_140b19780(local_100,iVar31);
            }
            lVar18 = *plVar23;
            lVar37 = (longlong)iVar31 * 0x70;
            *(undefined8 *)(lVar18 + lVar37) = *puVar30;
            puVar6 = (undefined8 *)(lVar18 + 8 + lVar37);
            *puVar6 = 0;
            puVar6[1] = 0;
            *(undefined8 *)(lVar18 + 0x18 + lVar37) = 0;
            *(undefined8 *)(lVar18 + 8 + lVar37) = puVar30[1];
            uVar17 = FUN_14477b664(puVar30[2]);
            uVar17 = FUN_14477b664(uVar17);
            *(undefined8 *)(lVar18 + 0x10 + lVar37) = uVar17;
            *(undefined8 *)(lVar18 + 0x18 + lVar37) = puVar30[3];
            *(undefined8 *)(lVar18 + 0x30 + lVar37) = 0;
            puVar6 = (undefined8 *)(lVar18 + 0x20 + lVar37);
            *puVar6 = 0;
            puVar6[1] = 0;
            *(undefined8 *)(lVar18 + 0x20 + lVar37) = puVar30[4];
            uVar17 = FUN_14477b664(puVar30[5]);
            uVar17 = FUN_14477b664(uVar17);
            *(undefined8 *)(lVar18 + 0x28 + lVar37) = uVar17;
            *(undefined8 *)(lVar18 + 0x30 + lVar37) = puVar30[6];
            *(undefined4 *)(lVar18 + 0x48 + lVar37) = *(undefined4 *)(puVar30 + 9);
            uVar17 = puVar30[8];
            puVar6 = (undefined8 *)(lVar18 + 0x38 + lVar37);
            *puVar6 = puVar30[7];
            puVar6[1] = uVar17;
            *(undefined8 *)(lVar18 + 0x50 + lVar37) = puVar30[10];
            lVar39 = puVar30[0xb];
            *(longlong *)(lVar18 + 0x58 + lVar37) = lVar39;
            if (lVar39 != 0) {
              LOCK();
              *(int *)(lVar39 + 0xc) = *(int *)(lVar39 + 0xc) + 1;
              UNLOCK();
            }
            lVar18 = lVar18 + lVar37;
            uVar16 = *(undefined4 *)((longlong)puVar30 + 100);
            uVar10 = *(undefined4 *)(puVar30 + 0xd);
            uVar11 = *(undefined4 *)((longlong)puVar30 + 0x6c);
            *(undefined4 *)(lVar18 + 0x60) = *(undefined4 *)(puVar30 + 0xc);
            *(undefined4 *)(lVar18 + 100) = uVar16;
            *(undefined4 *)(lVar18 + 0x68) = uVar10;
            *(undefined4 *)(lVar18 + 0x6c) = uVar11;
            puVar30 = puVar30 + 0xe;
          } while (puVar30 != puVar32);
        }
        if (plVar29 != (longlong *)0x0) {
          LOCK();
          plVar23 = plVar29 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar29)(plVar29);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        if (*(uint *)(param_1 + 0x15c) != 0) {
          pbVar35 = (byte *)(unaff_R13 + 0xd5);
          uVar38 = *(uint *)(param_1 + 0x15c);
          do {
            if ((uVar38 & 1) != 0) {
              bVar20 = *(byte *)(param_1 + 8);
              if ((*(char *)(param_1 + 0x138) == '\x01') &&
                 ((pbVar35[-0x2f] <= bVar20 || (pbVar35[-0x30] == 0)))) {
                lVar18 = *(longlong *)(param_1 + 0x120);
                if (*(longlong *)(pbVar35 + -0x48) != lVar18) {
                  pbVar35[-0x38] = 0;
                  pbVar35[-0x37] = 0;
                  pbVar35[-0x36] = 0;
                  pbVar35[-0x35] = 0;
                  pbVar35[-0x34] = 0;
                  pbVar35[-0x33] = 0;
                  pbVar35[-0x32] = 0;
                  pbVar35[-0x31] = 0;
                }
                *(longlong *)(pbVar35 + -0x48) = lVar18;
                if (*(longlong *)(pbVar35 + -0x40) != *(longlong *)(param_1 + 0x128)) {
                  pbVar35[-0x38] = 0;
                  pbVar35[-0x37] = 0;
                  pbVar35[-0x36] = 0;
                  pbVar35[-0x35] = 0;
                  pbVar35[-0x34] = 0;
                  pbVar35[-0x33] = 0;
                  pbVar35[-0x32] = 0;
                  pbVar35[-0x31] = 0;
                }
                uVar17 = FUN_14477b664();
                uVar17 = FUN_14477b664(uVar17);
                *(undefined8 *)(pbVar35 + -0x40) = uVar17;
                *(undefined8 *)(pbVar35 + -0x38) = *(undefined8 *)(param_1 + 0x130);
                pbVar35[-0x30] = 1;
                pbVar35[-0x2f] = bVar20;
              }
              if ((*(char *)(param_1 + 0x144) == '\x01') &&
                 ((pbVar35[-0x23] <= bVar20 || (pbVar35[-0x24] == 0)))) {
                *(undefined8 *)(pbVar35 + -0x2c) = *(undefined8 *)(param_1 + 0x13c);
                pbVar35[-0x24] = 1;
                pbVar35[-0x23] = bVar20;
              }
              if ((*(char *)(param_1 + 0x14c) == '\x01') &&
                 ((pbVar35[-0x1b] <= bVar20 || (pbVar35[-0x1c] == 0)))) {
                *(undefined4 *)(pbVar35 + -0x20) = *(undefined4 *)(param_1 + 0x148);
                pbVar35[-0x1c] = 1;
                pbVar35[-0x1b] = bVar20;
              }
              if ((*(char *)(param_1 + 0x14f) == '\x01') &&
                 ((pbVar35[-0x18] <= bVar20 || (pbVar35[-0x19] == 0)))) {
                pbVar35[-0x1a] = *(byte *)(param_1 + 0x14e);
                pbVar35[-0x19] = 1;
                pbVar35[-0x18] = bVar20;
              }
              if ((*(char *)(param_1 + 0x158) == '\x01') &&
                 ((pbVar35[-0xf] <= bVar20 || (pbVar35[-0x10] == 0)))) {
                *(undefined4 *)(pbVar35 + -0x14) = *(undefined4 *)(param_1 + 0x154);
                pbVar35[-0x10] = 1;
                pbVar35[-0xf] = bVar20;
              }
              if ((*(char *)(param_1 + 0x15a) == '\x01') &&
                 ((pbVar35[-8] <= bVar20 || (pbVar35[-0xe] == 0)))) {
                *(undefined4 *)(pbVar35 + -0xc) = *(undefined4 *)(param_1 + 0x15c);
                pbVar35[-0xe] = 1;
                pbVar35[-8] = bVar20;
              }
              if ((*(char *)(param_1 + 0x161) == '\x01') &&
                 ((*pbVar35 <= bVar20 || (pbVar35[-7] == 0)))) {
                *(undefined4 *)(pbVar35 + -4) = *(undefined4 *)(param_1 + 0x164);
                pbVar35[-7] = 1;
                *pbVar35 = bVar20;
              }
            }
            pbVar35 = pbVar35 + 0x50;
            bVar9 = 1 < uVar38;
            uVar38 = uVar38 >> 1;
          } while (bVar9);
        }
        bVar20 = *(byte *)(param_1 + 8);
        if ((*(char *)(param_1 + 0x188) == '\x01') &&
           ((*(byte *)((longlong)unaff_R13 + 0x719) <= bVar20 || ((char)unaff_R13[0xe3] == '\0'))))
        {
          FUN_144a7bb84(unaff_R13 + 0xe0,param_1 + 0x170);
          *(undefined1 *)(unaff_R13 + 0xe3) = 1;
          *(byte *)((longlong)unaff_R13 + 0x719) = bVar20;
        }
        if ((*(char *)(param_1 + 0x1a8) == '\x01') &&
           ((*(byte *)((longlong)unaff_R13 + 0x739) <= bVar20 || ((char)unaff_R13[0xe7] == '\0'))))
        {
          FUN_144a7bb84(unaff_R13 + 0xe4,param_1 + 400);
          *(undefined1 *)(unaff_R13 + 0xe7) = 1;
          *(byte *)((longlong)unaff_R13 + 0x739) = bVar20;
        }
        if ((*(char *)(param_1 + 0x1b4) == '\x01') &&
           ((*(byte *)((longlong)unaff_R13 + 0x745) <= bVar20 ||
            (*(char *)((longlong)unaff_R13 + 0x744) == '\0')))) {
          *(undefined8 *)((longlong)unaff_R13 + 0x73c) = *(undefined8 *)(param_1 + 0x1ac);
          *(undefined1 *)((longlong)unaff_R13 + 0x744) = 1;
          *(byte *)((longlong)unaff_R13 + 0x745) = bVar20;
        }
        if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
          lVar18 = *(longlong *)(param_1 + 0x1b8);
          lVar39 = (longlong)*(int *)(param_1 + 0x1c0) * 0x100 + lVar18;
          do {
            if ((longlong)(int)unaff_R13[0x45] == 0) {
              iVar31 = 0;
            }
            else {
              lVar37 = unaff_R13[0x44];
              lVar33 = (longlong)(int)unaff_R13[0x45] << 8;
              do {
                cVar13 = FUN_147f7d3bc(lVar37,lVar18);
                if (cVar13 != '\0') goto LAB_140b18f8c;
                lVar37 = lVar37 + 0x100;
                lVar33 = lVar33 + -0x100;
              } while (lVar33 != 0);
              iVar31 = (int)unaff_R13[0x45];
            }
            *(uint *)(unaff_R13 + 0x45) = iVar31 + 1U;
            if (*(uint *)((longlong)unaff_R13 + 0x22c) < iVar31 + 1U) {
              FUN_14644907a(unaff_R13 + 0x44,iVar31);
            }
            FUN_1412e9142((longlong)iVar31 * 0x100 + unaff_R13[0x44],lVar18);
LAB_140b18f8c:
            lVar18 = lVar18 + 0x100;
          } while (lVar18 != lVar39);
        }
      }
      if (plVar29 != (longlong *)0x0) {
        LOCK();
        plVar23 = plVar29 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar29)(plVar29);
          LOCK();
          piVar1 = (int *)((longlong)plVar29 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b192b8 FUN_140b192b8 body=273 status=ok
// SIG undefined FUN_140b192b8(void)

void FUN_140b192b8(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *_Dst;
  
  if ((longlong)(int)param_3[1] != 0) {
    plVar3 = (longlong *)*param_3;
    plVar4 = plVar3 + (longlong)(int)param_3[1] * 0x12;
    do {
      plVar5 = (longlong *)*param_2;
      lVar6 = (longlong)*(int *)(param_2 + 1);
      if (lVar6 != 0) {
        lVar2 = lVar6 * 0x90;
        _Dst = plVar5;
        do {
          if (*_Dst == *plVar3) {
            if (_Dst != (longlong *)0x0) goto LAB_140b19394;
            break;
          }
          _Dst = _Dst + 0x12;
          lVar2 = lVar2 + -0x90;
        } while (lVar2 != 0);
      }
      uVar1 = *(int *)(param_2 + 1) + 1;
      *(uint *)(param_2 + 1) = uVar1;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar1) {
        FUN_140b1966c(param_2);
        plVar5 = (longlong *)*param_2;
      }
      _Dst = plVar5 + lVar6 * 0x12;
      memset(_Dst,0,0x90);
      *(undefined4 *)((longlong)plVar5 + lVar6 * 0x90 + 0x54) = 1;
      *(undefined1 *)(plVar5 + lVar6 * 0x12 + 0xc) = 0;
      *(undefined4 *)((longlong)plVar5 + lVar6 * 0x90 + 100) = 7;
      plVar5[lVar6 * 0x12 + 0xe] = 0;
      (plVar5 + lVar6 * 0x12 + 0xe)[1] = 0;
      *(undefined1 *)(plVar5 + lVar6 * 0x12 + 0x10) = 0;
      plVar5[lVar6 * 0x12] = *plVar3;
      if (_Dst != (longlong *)0x0) {
LAB_140b19394:
        FUN_140b19404(_Dst,plVar3,*(undefined1 *)(param_1 + 8));
      }
      plVar3 = plVar3 + 0x12;
    } while (plVar3 != plVar4);
  }
  return;
}



// FUNCTION 140b193ca FUN_140b193ca body=57 status=ok
// SIG undefined FUN_140b193ca(void)

void FUN_140b193ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ae0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ae0 = FUN_140002ddd(FUN_14657351c,uVar1,L"WeaponAudioProvider");
  }
  return;
}



// FUNCTION 140b19404 FUN_140b19404 body=616 status=ok
// SIG undefined FUN_140b19404(void)

void FUN_140b19404(longlong *param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*param_1 == *param_2) {
    if (((char)param_2[1] == '\x01') &&
       ((*(byte *)((longlong)param_1 + 0x14) <= param_3 || ((char)param_1[1] == '\0')))) {
      *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
      *(undefined1 *)(param_1 + 1) = 1;
      *(byte *)((longlong)param_1 + 0x14) = param_3;
    }
    if ((*(char *)((longlong)param_2 + 0x15) == '\x01') &&
       ((*(byte *)(param_1 + 10) <= param_3 || (*(char *)((longlong)param_1 + 0x15) == '\0')))) {
      lVar3 = param_2[3];
      if (param_1[3] != lVar3) {
        param_1[5] = 0;
      }
      param_1[3] = lVar3;
      if (param_1[4] != param_2[4]) {
        param_1[5] = 0;
      }
      uVar2 = FUN_14477b664();
      lVar3 = FUN_14477b664(uVar2);
      param_1[4] = lVar3;
      param_1[5] = param_2[5];
      *(undefined1 *)((longlong)param_1 + 0x15) = 1;
      *(byte *)(param_1 + 10) = param_3;
    }
    if (((char)param_2[6] == '\x01') &&
       ((*(byte *)(param_1 + 10) <= param_3 || ((char)param_1[6] == '\0')))) {
      lVar3 = param_2[7];
      if (param_1[7] != lVar3) {
        param_1[9] = 0;
      }
      param_1[7] = lVar3;
      if (param_1[8] != param_2[8]) {
        param_1[9] = 0;
      }
      uVar2 = FUN_14477b664();
      lVar3 = FUN_14477b664(uVar2);
      param_1[8] = lVar3;
      param_1[9] = param_2[9];
      *(undefined1 *)(param_1 + 6) = 1;
      *(byte *)(param_1 + 10) = param_3;
    }
    if ((*(char *)((longlong)param_2 + 0x51) == '\x01') &&
       ((*(byte *)(param_1 + 0xb) <= param_3 || (*(char *)((longlong)param_1 + 0x51) == '\0')))) {
      *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
      *(undefined1 *)((longlong)param_1 + 0x51) = 1;
      *(byte *)(param_1 + 0xb) = param_3;
    }
    if ((*(char *)((longlong)param_2 + 0x59) == '\x01') &&
       ((*(byte *)(param_1 + 0xc) <= param_3 || (*(char *)((longlong)param_1 + 0x59) == '\0')))) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
      *(undefined1 *)((longlong)param_1 + 0x59) = 1;
      *(byte *)(param_1 + 0xc) = param_3;
    }
    if ((*(char *)((longlong)param_2 + 0x61) == '\x01') &&
       ((*(byte *)(param_1 + 0xd) <= param_3 || (*(char *)((longlong)param_1 + 0x61) == '\0')))) {
      *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
      *(undefined1 *)((longlong)param_1 + 0x61) = 1;
      *(byte *)(param_1 + 0xd) = param_3;
    }
    if ((*(char *)((longlong)param_2 + 0x69) == '\x01') &&
       ((*(byte *)(param_1 + 0x11) <= param_3 || (*(char *)((longlong)param_1 + 0x69) == '\0')))) {
      if (param_1 != param_2) {
        iVar1 = (int)param_2[0xf];
        _Src = (void *)param_2[0xe];
        *(int *)(param_1 + 0xf) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x7c) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
        }
        else {
          FUN_1447a127e(param_1 + 0xe,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)param_1[0xe],_Src,(longlong)iVar1);
          }
        }
      }
      *(char *)(param_1 + 0x10) = (char)param_2[0x10];
      *(undefined1 *)((longlong)param_1 + 0x69) = 1;
      *(byte *)(param_1 + 0x11) = param_3;
    }
  }
  return;
}



// FUNCTION 140b1966c FUN_140b1966c body=275 status=ok
// SIG undefined FUN_140b1966c(void)

void FUN_140b1966c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b19780 FUN_140b19780 body=268 status=ok
// SIG undefined FUN_140b19780(void)

void FUN_140b19780(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b198a8 FUN_140b198a8 body=512 status=ok
// SIG undefined FUN_140b198a8(void)

void FUN_140b198a8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  code *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 **local_38;
  code *local_30;
  longlong **local_28;
  code **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)(param_1 + 0x20);
  local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
  if ((((plVar2 != (longlong *)0x0) &&
       (local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
       *(int *)(param_1 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x18),
      local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0), -1 < (int)uVar1)) &&
     (local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0), (int)uVar1 < DAT_14c9647dc
     )) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
    if (((lVar3 != 0) &&
        (local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
        *(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       (local_a0 = (code ***)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
       (*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar2 + 0x10) == (code *)&LAB_144944cea) {
        plVar2 = plVar2 + 0xe1;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
      }
      local_68 = &local_70;
      local_70 = DAT_14cb72618;
      local_60 = &local_48;
      local_48 = 0;
      local_50 = &local_68;
      local_58 = &LAB_143cbcae0;
      if (plVar2[8] != 0) {
        local_28 = &local_40;
        local_38 = &local_58;
        local_20 = &local_30;
        local_30 = FUN_143cbca2e;
        local_a0 = &local_20;
        local_a8 = FUN_1487df56e;
        local_40 = plVar2;
        FUN_1447c5ba2();
        if (local_48 != 0) {
          if (*(char *)(param_1 + 0x50) != '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
          }
          local_a8 = (code *)0x0;
          local_a0._0_4_ = CONCAT31(local_a0._1_3_,1);
          local_a0._4_4_ = 0x43340000;
          uStack_98 = 0;
          local_94 = 0;
          local_90 = 0x3f0000003f000000;
          local_88 = 0x3e4ccccd;
          local_84 = 0;
          uStack_80 = 0x42b40000;
          uStack_7c = 0;
          uStack_78 = 0x42960000;
          local_72 = 2;
          local_74 = 0;
          FUN_14056efae(local_48 + 0x5d0,&DAT_14cb72050);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b19abe FUN_140b19abe body=457 status=ok
// SIG undefined FUN_140b19abe(void)

void FUN_140b19abe(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      do {
        if (*(undefined8 **)(lVar5 + (longlong)iVar7 * 0x14) == param_3) goto LAB_140b19b70;
        iVar7 = *(int *)(lVar5 + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  local_88 = &local_60;
  local_4c = 0;
  uStack_80 = SUB84(&local_4c,0);
  uStack_7c = (undefined1)((ulonglong)&local_4c >> 0x20);
  uStack_7b = (undefined1)((ulonglong)&local_4c >> 0x28);
  uStack_7a = (undefined2)((ulonglong)&local_4c >> 0x30);
  local_60 = param_3;
  FUN_140b20442((longlong *)(param_1 + 0x58),&local_98,&local_88,0);
LAB_140b19b70:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_140b19b9b;
    }
  }
  uVar8 = *param_5;
LAB_140b19b9b:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88._0_4_ = CONCAT31(local_88._1_3_,0x2c);
  local_88._4_4_ = (undefined4)uVar8;
  uStack_80 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  uStack_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = &local_88;
  FUN_1406cd0ac(param_1 + 8,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b19c94 FUN_140b19c94 body=39 status=ok
// SIG undefined FUN_140b19c94(void)

void FUN_140b19c94(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140491bf8(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 140b19cbc FUN_140b19cbc body=118 status=ok
// SIG undefined FUN_140b19cbc(void)

void FUN_140b19cbc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1406ce8b4(param_1,iVar1);
    }
    FUN_14076b65f((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146e9de54(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b19d32 FUN_140b19d32 body=191 status=ok
// SIG undefined FUN_140b19d32(void)

longlong * FUN_140b19d32(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140b19daa;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140b19df2(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_140b19daa:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140b19df2 FUN_140b19df2 body=288 status=ok
// SIG undefined FUN_140b19df2(void)

undefined4 *
FUN_140b19df2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b19fb4(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0xffffffff00000000;
  local_68 = param_5;
  cVar1 = FUN_140b19f14(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140b1a18a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b19f14 FUN_140b19f14 body=159 status=ok
// SIG undefined FUN_140b19f14(void)

void FUN_140b19f14(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
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
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_14070f1e0(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140b19f5f;
    }
  }
  uVar2 = 0;
LAB_140b19f5f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140b19fb4 FUN_140b19fb4 body=470 status=ok
// SIG undefined FUN_140b19fb4(void)

int * FUN_140b19fb4(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140b1a18a FUN_140b1a18a body=594 status=ok
// SIG undefined FUN_140b1a18a(void)

void FUN_140b1a18a(longlong *param_1)

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
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10 + lVar13 * 0x14) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xc + lVar13 * 0x14) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_140b1a393;
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
LAB_140b1a393:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1a3de FUN_140b1a3de body=236 status=ok
// SIG undefined FUN_140b1a3de(void)

undefined8 FUN_140b1a3de(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)param_1;
  uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_40 = *(undefined4 *)(param_1 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar1 = FUN_14022f3b8(&local_48,0,0);
  if (cVar1 == '\0') {
    FUN_14006620a(&local_38,*param_1,*(undefined4 *)(param_1 + 1));
    local_58 = local_38;
    uStack_54 = uStack_34;
    iStack_50 = iStack_30;
    uStack_4c = uStack_2c;
    FUN_140b1a4cc(&local_38);
    iVar2 = iStack_30 + -1;
    if (iStack_30 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_28,iVar2,CONCAT44(uStack_34,local_38),1);
    *param_2 = local_28;
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1446f82e2(&local_38,*(undefined4 *)(param_1 + 1),*param_1,1);
    *param_2 = CONCAT44(uStack_34,local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1a4cc FUN_140b1a4cc body=677 status=ok
// SIG undefined FUN_140b1a4cc(void)

undefined8 * FUN_140b1a4cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  cVar7 = FUN_140f11842(param_2,param_1,&local_78,0);
  if (cVar7 == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
      FUN_1400684da(&DAT_14c9482f8);
      atexit(FUN_1427b7fa2);
      _Init_thread_footer(&DAT_14c948490);
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
    lVar5 = DAT_14c948480;
    lVar9 = (longlong)DAT_14c948488;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        uVar6 = uStack_80;
        lVar3 = *(longlong *)(lVar5 + lVar10);
        lVar12 = (longlong)(int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_1447a1bd6(&local_88,uVar6 & 0xffffffff);
        }
        lVar12 = lVar12 * 0x10;
        puVar1 = (undefined8 *)(local_88 + lVar12);
        *(undefined8 *)(local_88 + lVar12) = 0;
        iVar2 = *(int *)(lVar3 + 0x18);
        pvVar4 = *(void **)(lVar3 + 0x10);
        *(int *)(local_88 + 8 + lVar12) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,pvVar4,(longlong)iVar2 * 2);
        }
        uVar6 = uStack_90;
        lVar3 = *(longlong *)(lVar5 + lVar10);
        lVar12 = (longlong)(int)uStack_90;
        uVar8 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
        if (uStack_90._4_4_ < uVar8) {
          FUN_1447a1bd6(&local_98,uVar6 & 0xffffffff);
        }
        lVar12 = lVar12 * 0x10;
        puVar1 = (undefined8 *)(local_98 + lVar12);
        *(undefined8 *)(local_98 + lVar12) = 0;
        iVar2 = *(int *)(lVar3 + 0x28);
        pvVar4 = *(void **)(lVar3 + 0x20);
        *(int *)(local_98 + 8 + lVar12) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,pvVar4,(longlong)iVar2 * 2);
        }
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
    param_1 = local_a0;
    puVar11 = local_78;
    if ((int)uStack_70 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Misc/PackageName.cpp",0x39c,&DAT_149e0625e,puVar11
                 );
    FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b1a772 FUN_140b1a772 body=353 status=ok
// SIG undefined FUN_140b1a772(void)

undefined4
FUN_140b1a772(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c75ec51 == '\0') && (cVar3 = (*(code *)PTR_FUN_14c758760)(), cVar3 == '\0')) {
    FUN_1400021e4(param_1,&local_58);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncPackageLoader.cpp",0x29f,
                  L"Requesting async load of \"%s\" when async loading is not allowed (after shutdown). Please fix higher level code."
                  ,puVar5);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar2 = DAT_14c948aa0;
  local_68 = 0;
  local_60 = 0;
  FUN_141712e6e(&local_68,param_3);
  local_78 = param_8;
  local_80 = param_7;
  local_88 = param_6;
  local_90 = param_5;
  local_98 = param_4;
  uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,&local_68);
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140b1a8a3;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_140b1a8a3:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140b1a8d4 FUN_140b1a8d4 body=380 status=ok
// SIG undefined FUN_140b1a8d4(void)

void FUN_140b1a8d4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
      plVar1 = param_1 + 2;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      uStack_38 = 0;
      uStack_48 = plVar1;
      if ((int)param_1[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_50);
        iVar6 = (int)param_1[5];
      }
      local_70 = (undefined4)local_50;
      uStack_6c = local_50._4_4_;
      uStack_68 = (undefined4)uStack_48;
      uStack_64 = uStack_48._4_4_;
      uStack_58 = CONCAT44(uStack_34,uStack_38);
      local_60 = local_40;
      uVar2 = local_60;
      local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      iVar4 = local_60._4_4_;
      local_78 = param_1;
      if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140b1aa64(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147a4f024(param_1);
  return;
}



// FUNCTION 140b1aa64 FUN_140b1aa64 body=378 status=ok
// SIG undefined FUN_140b1aa64(void)

void FUN_140b1aa64(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1abe0 FUN_140b1abe0 body=143 status=ok
// SIG undefined FUN_140b1abe0(void)

undefined8 * FUN_140b1abe0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb40);
  memset(_Dst,0,0xb40);
  FUN_140b1ac70(_Dst);
  _Dst[0x161] = 0;
  *(undefined4 *)(_Dst + 0x162) = 0;
  _Dst[0x15a] = 0;
  _Dst[0x15b] = 0;
  _Dst[0x15c] = 0;
  _Dst[0x15d] = 0;
  _Dst[0x15e] = 0;
  *(undefined8 *)((longlong)_Dst + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0xb1c) = 0;
  _Dst[0x165] = 0;
  *(undefined4 *)(_Dst + 0x166) = 0;
  *_Dst = &PTR_FUN_14b303830;
  return _Dst;
}



// FUNCTION 140b1ac70 FUN_140b1ac70 body=380 status=ok
// SIG undefined FUN_140b1ac70(void)

undefined8 * FUN_140b1ac70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  memset(param_1,0,0x968);
  FUN_140b4884c(param_1);
  param_1[0x115] = 0;
  param_1[0x116] = 0xffffffff7fffffff;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *param_1 = &PTR_FUN_14ab72a10;
  param_1[0x12d] = 0;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x981) = 0;
  *(undefined8 *)((longlong)param_1 + 0x989) = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  *(undefined1 *)(param_1 + 0x135) = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0;
  param_1[0x140] = 0x3f800000;
  param_1[0x141] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x142) = 1;
  param_1[0x143] = 0;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  param_1[0x152] = DAT_14cb1c748;
  uVar1 = DAT_14cb1c740;
  param_1[0x150] = DAT_14cb1c738;
  param_1[0x151] = uVar1;
  param_1[0x155] = DAT_14cb1c870;
  uVar1 = DAT_14cb1c868;
  param_1[0x153] = DAT_14cb1c860;
  param_1[0x154] = uVar1;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  param_1[0x159] = 0;
  return param_1;
}



// FUNCTION 140b1adec FUN_140b1adec body=2985 status=ok
// SIG undefined FUN_140b1adec(void)

void FUN_140b1adec(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x40,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0xa0,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x100,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x160,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,3);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x1c0,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,4);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x220,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,5);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x270,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b1b996();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,6);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1b996 FUN_140b1b996 body=57 status=ok
// SIG undefined FUN_140b1b996(void)

void FUN_140b1b996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d20 = FUN_14171c317(FUN_1466191fe,uVar1,L"EAtt_WeaponBehaviorStatusEffectModifier");
  }
  return;
}



// FUNCTION 140b1b9d0 FUN_140b1b9d0 body=96 status=ok
// SIG undefined FUN_140b1b9d0(void)

ulonglong FUN_140b1b9d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140b1ba13:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140b1ba13;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140b1ba30 FUN_140b1ba30 body=45 status=ok
// SIG undefined FUN_140b1ba30(void)

void FUN_140b1ba30(undefined8 param_1,undefined8 param_2)

{
  FUN_140b1ba5e();
  FUN_140b1bac0(param_1,param_2);
  FUN_140b1bb24(param_1,param_2);
  return;
}



// FUNCTION 140b1ba5e FUN_140b1ba5e body=98 status=ok
// SIG undefined FUN_140b1ba5e(void)

void FUN_140b1ba5e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    uVar2 = 0;
    do {
      if (*plVar1 == param_2) {
        FUN_1408bbfec((longlong *)(param_1 + 0x10),uVar2,1);
        break;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 3;
    } while (*(uint *)(param_1 + 0x18) != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b1ba8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 140b1bac0 FUN_140b1bac0 body=100 status=ok
// SIG undefined FUN_140b1bac0(void)

void FUN_140b1bac0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (0 < (int)*(uint *)(param_1 + 0x28)) {
    lVar2 = 0x10;
    uVar3 = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    do {
      if (*(longlong *)(lVar1 + lVar2) == param_2) {
        FUN_1408bbfec((longlong *)(param_1 + 0x20),uVar3,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
        break;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (*(uint *)(param_1 + 0x28) != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b1baee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return;
}



// FUNCTION 140b1bb24 FUN_140b1bb24 body=245 status=ok
// SIG undefined FUN_140b1bb24(void)

void FUN_140b1bb24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar6 = 1;
    lVar7 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar7) == param_2) {
        cVar2 = FUN_144729dda(*plVar1 + lVar7 + 0x10);
        if ((cVar2 != '\0') && (lVar4 = FUN_14479d2ce(*plVar1 + lVar7 + 0x10), lVar4 != 0)) {
          lVar5 = *plVar1;
          if (*(longlong *)(lVar5 + 8 + lVar7) != 0) {
            FUN_14480f766(lVar4 + 0x200);
            lVar5 = *plVar1;
          }
          *(undefined8 *)(lVar5 + 8 + lVar7) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x38);
        if (iVar3 - iVar6 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x30) + lVar7),
                  (void *)(*(longlong *)(param_1 + 0x30) + lVar7 + 0x18),
                  (longlong)(iVar3 - iVar6) * 0x18);
          iVar3 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar3 + -1;
        FUN_147f8476e(plVar1);
        break;
      }
      lVar7 = lVar7 + 0x18;
      iVar6 = iVar6 + 1;
    } while ((ulonglong)*(uint *)(param_1 + 0x38) * 0x18 != lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b1bb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 140b1bc30 FUN_140b1bc30 body=151 status=ok
// SIG undefined FUN_140b1bc30(void)

void FUN_140b1bc30(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb758b8 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140b1bfcc(DAT_14cb758b8,&local_38);
    lVar1 = local_38;
    lVar2 = (longlong)(int)uStack_30;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_140b1bcc8(param_1,*(undefined8 *)(lVar1 + lVar3),1);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1bcc8 FUN_140b1bcc8 body=343 status=ok
// SIG undefined FUN_140b1bcc8(void)

void FUN_140b1bcc8(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  
  piVar10 = (int *)FUN_1409e484c();
  piVar11 = (int *)FUN_140b1be20(param_1,param_2);
  if (param_3 != '\0') {
    if (*(longlong *)(piVar11 + 2) != *(longlong *)(piVar10 + 2)) {
      FUN_140b1bf00(&DAT_14cbd0a38,param_1,param_2,*(longlong *)(piVar11 + 2),
                    *(longlong *)(piVar10 + 2));
      if (*piVar11 != *piVar10) {
        lVar12 = FUN_1401e6c61();
        if ((lVar12 == param_2) &&
           (plVar1 = *(longlong **)(param_1 + 0x408), plVar1 != (longlong *)0x0)) {
          lVar12 = (**(code **)(*plVar1 + 0x5e0))(plVar1);
          if (lVar12 != 0) {
            lVar13 = FUN_144a2f878();
            if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
              FUN_14115e3cc(lVar12);
            }
          }
          lVar12 = (**(code **)(*plVar1 + 0x5f8))(plVar1);
          if (lVar12 != 0) {
            lVar13 = FUN_1402095ca();
            if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
              FUN_148cd6fd8(lVar12);
            }
          }
        }
        FUN_140b1bf00(&DAT_14cbd0b78,param_1,param_2,(longlong)*piVar11,(longlong)*piVar10);
      }
    }
  }
  *(undefined8 *)(piVar11 + 8) = *(undefined8 *)(piVar10 + 8);
  iVar2 = *piVar10;
  iVar3 = piVar10[1];
  iVar4 = piVar10[2];
  iVar5 = piVar10[3];
  iVar6 = piVar10[5];
  iVar7 = piVar10[6];
  iVar8 = piVar10[7];
  piVar11[4] = piVar10[4];
  piVar11[5] = iVar6;
  piVar11[6] = iVar7;
  piVar11[7] = iVar8;
  *piVar11 = iVar2;
  piVar11[1] = iVar3;
  piVar11[2] = iVar4;
  piVar11[3] = iVar5;
  FUN_1447715ec(piVar11 + 10,piVar10 + 10);
  uVar9 = *(undefined8 *)(piVar10 + 0x16);
  *(undefined8 *)(piVar11 + 0x14) = *(undefined8 *)(piVar10 + 0x14);
  *(undefined8 *)(piVar11 + 0x16) = uVar9;
  return;
}



// FUNCTION 140b1be20 FUN_140b1be20 body=223 status=ok
// SIG undefined FUN_140b1be20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b1be20(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = FUN_1441fe358();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x6c0) <= (int)uVar1)) {
    puVar2 = &DAT_14cbd06f8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbd0758) {
      FUN_144b3d300(&DAT_14cbd0758);
      if (DAT_14cbd0758 == -1) {
        uRam000000014cbd0734 = 0;
        _DAT_14cbd06f8 = 1;
        DAT_14cbd0738 = 0;
        _DAT_14cbd0740 = 0;
        _DAT_14cbd06fc = 0;
        uRam000000014cbd0704 = 0;
        _DAT_14cbd070c = 0;
        uRam000000014cbd0714 = 0;
        _DAT_14cbd071c = 0;
        uRam000000014cbd0724 = 0;
        _DAT_14cbd072c = 0;
        _DAT_14cbd0730 = 0;
        _DAT_14cbd0748 = 1;
        _DAT_14cbd0750 = 0;
        atexit((_func_5014 *)&LAB_1441fe40f);
        _Init_thread_footer(&DAT_14cbd0758);
      }
    }
  }
  else {
    puVar2 = (undefined *)((ulonglong)uVar1 * 0x60 + *(longlong *)(param_1 + 0x6b8));
  }
  return puVar2;
}



// FUNCTION 140b1bf00 FUN_140b1bf00 body=204 status=ok
// SIG undefined FUN_140b1bf00(void)

void FUN_140b1bf00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140b1bfb2;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b1bfb2:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140b1bfcc FUN_140b1bfcc body=146 status=ok
// SIG undefined FUN_140b1bfcc(void)

void FUN_140b1bfcc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148dc396a(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_140b1c45a;
  local_20 = &local_30;
  local_28 = FUN_140b1c416;
  local_48 = param_2;
  FUN_140b1c060(param_1,&local_28,1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1c060 FUN_140b1c060 body=891 status=ok
// SIG undefined FUN_140b1c060(void)

void FUN_140b1c060(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  uint *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  cVar7 = (**(code **)(*param_1 + 0x300))();
  if (cVar7 == '\0') {
    plVar4 = param_1 + 0x4f;
    plVar1 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_1[0x54] == 0) {
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar16 = (int)param_1[0x54];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar6 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar4;
    if ((local_78._4_4_ != iVar16) || (local_78 = local_58, uStack_60 != plVar1)) {
      do {
        local_78 = uVar6;
        lVar10 = *local_90;
        lVar11 = *(longlong *)(lVar10 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar11 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar11,0);
            lVar11 = *(longlong *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar11 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar11 + 0x48) & 0x6b) == 3)) &&
             (plVar5 = *(longlong **)(lVar11 + 0x30), plVar5 != (longlong *)0x0)) {
            lVar10 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar11 = FUN_140b1c3dc();
            if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30)) {
              (*(code *)*local_a0)(local_a0[1],plVar5);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_90 != plVar4 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar16));
    }
  }
  else {
    local_98 = (uint *)(param_1 + 0x3b);
    iVar16 = (int)param_1[0x3e];
    if (iVar16 == 0) {
      uVar17 = 1;
      uVar18 = 0;
      iVar8 = 0;
      iVar15 = 0;
    }
    else {
      puVar9 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar9 = local_98;
      }
      uVar19 = *puVar9;
      if (uVar19 == 0) {
        iVar8 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar8 = iVar16 + -1;
        }
        uVar18 = 0;
        uVar17 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar17 = uVar18;
        }
        iVar15 = 0;
        do {
          if (uVar17 == uVar18) goto LAB_140b1c22b;
          iVar15 = iVar15 + 0x20;
          uVar19 = puVar9[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar18 = 0;
        iVar15 = 0;
      }
      uVar17 = (ulonglong)(-uVar19 & uVar19);
      uVar2 = uVar17 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar16 <= iVar8) {
        iVar8 = iVar16;
      }
    }
    if (iVar8 != iVar16) {
      uVar19 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar11 = FUN_140b1c3dc();
          if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            (*(code *)*local_a0)(local_a0[1],plVar4);
          }
        }
        uVar19 = uVar19 & ~(uint)uVar17;
        puVar9 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar9 = local_98;
        }
        iVar3 = (int)param_1[0x3e];
        iVar8 = (int)uVar18;
        lVar10 = (longlong)iVar8;
        uVar14 = puVar9[lVar10] & uVar19;
        if (uVar14 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar8 < iVar12) {
            lVar11 = 0;
            do {
              uVar14 = puVar9[lVar10 + lVar11 + 1];
              if (uVar14 != 0) {
                uVar18 = (ulonglong)(iVar8 + (int)lVar11 + 1);
                uVar19 = 0xffffffff;
                goto LAB_140b1c1ff;
              }
              iVar15 = iVar15 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar13 - lVar10 != lVar11);
            uVar19 = 0xffffffff;
            iVar8 = iVar13;
          }
          uVar18 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_140b1c1ff:
          uVar17 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar17 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar16);
    }
  }
LAB_140b1c22b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1c3dc FUN_140b1c3dc body=57 status=ok
// SIG undefined FUN_140b1c3dc(void)

void FUN_140b1c3dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dcb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dcb0 = FUN_140002ddd(FUN_1464de1dc,uVar1,L"GbxExperienceDef");
  }
  return;
}



// FUNCTION 140b1c416 FUN_140b1c416 body=67 status=ok
// SIG undefined FUN_140b1c416(void)

void FUN_140b1c416(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1c45a FUN_140b1c45a body=61 status=ok
// SIG undefined FUN_140b1c45a(void)

void FUN_140b1c45a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*(char *)(lVar2 + 0x40) == '\x02') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_140b1c498(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 140b1c498 FUN_140b1c498 body=353 status=ok
// SIG undefined FUN_140b1c498(void)

void FUN_140b1c498(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b1c51d;
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
LAB_140b1c51d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140b1c5f9 FUN_140b1c5f9 body=985 status=ok
// SIG undefined FUN_140b1c5f9(void)

void FUN_140b1c5f9(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  GUID local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar2 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar2;
  lVar5 = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 2;
  *puVar2 = &PTR_FUN_14a414aa0;
  puVar2[5] = &PTR_FUN_14a414d40;
  puVar2[6] = &PTR_FUN_14a414d80;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 1;
  *(undefined8 *)((longlong)puVar2 + 0x5c) = 0x6400000000;
  *(undefined1 *)((longlong)puVar2 + 100) = 0;
  puVar2[0xd] = 0;
  *(undefined4 *)(puVar2 + 0xe) = 3;
  FUN_1447c510a(puVar2 + 0xd,3,0);
  puVar4 = (undefined8 *)puVar2[0xd];
  *puVar4 = 0x4743500048f42400;
  *(undefined4 *)(puVar4 + 1) = 0x459c4000;
  *(undefined2 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x7a) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x7c) = 1;
  puVar2[0x10] = 0x3f800000;
  *(undefined1 *)(puVar2 + 0x11) = 2;
  *(undefined8 *)((longlong)puVar2 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xab) = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xd2) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xda) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xe2) = 1;
  puVar2[0x1d] = 0;
  *(undefined1 *)(puVar2 + 0x1e) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xf4) = 0;
  *(undefined1 *)(puVar2 + 0x1f) = 1;
  *(undefined8 *)((longlong)puVar2 + 0xfc) = 0x3dcccccd451c4000;
  *(undefined1 *)((longlong)puVar2 + 0x104) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x105) = DAT_14c9932b4;
  *(undefined2 *)((longlong)puVar2 + 0x106) = 1;
  puVar2[0x21] = 0x4014000000000000;
  puVar2[0x22] = 0x4024000000000000;
  puVar2[0x23] = 0x4004000000000000;
  puVar2[0x24] = 0x4014000000000000;
  *(undefined1 *)(puVar2 + 0x25) = 1;
  *(undefined4 *)((longlong)puVar2 + 300) = 0x3f800000;
  *(undefined1 *)(puVar2 + 0x26) = 0;
  puVar2[0x27] = 0;
  puVar2[0x28] = 0;
  *(undefined1 *)(puVar2 + 0x29) = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  FUN_1400b22c2(puVar2 + 0x2d,"GeometryCollectionTerminal");
  puVar2[0x33] = 0;
  *(undefined4 *)(puVar2 + 0x34) = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x1ac) = 0;
  puVar2[0x37] = 0;
  *(undefined4 *)(puVar2 + 0x38) = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  *(undefined4 *)(puVar2 + 0x3d) = 0xffffffff;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x41] = 0;
  *(undefined4 *)(puVar2 + 0x42) = 0xffffffff;
  uVar3 = FUN_14001cc68(0x4c0,0x10);
  local_68 = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_60 = 0x3f800000;
  uStack_5c = 0x3f800000;
  FUN_140b1d240(uVar3);
  puVar2[0x43] = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149f6ac40;
  puVar4[2] = uVar3;
  puVar2[0x44] = puVar4;
  puVar2[0x45] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  local_58.Data1 = 0;
  local_58.Data2 = 0;
  local_58.Data3 = 0;
  local_58.Data4[0] = '\0';
  local_58.Data4[1] = '\0';
  local_58.Data4[2] = '\0';
  local_58.Data4[3] = '\0';
  local_58.Data4[4] = '\0';
  local_58.Data4[5] = '\0';
  local_58.Data4[6] = '\0';
  local_58.Data4[7] = '\0';
  CoCreateGuid(&local_58);
  *(ulong *)(puVar2 + 0x39) = local_58.Data1;
  *(undefined4 *)((longlong)puVar2 + 0x1cc) = local_58._4_4_;
  *(undefined4 *)(puVar2 + 0x3a) = local_58.Data4._0_4_;
  *(undefined4 *)((longlong)puVar2 + 0x1d4) = local_58.Data4._4_4_;
  local_58.Data1 = 0;
  local_58.Data2 = 0;
  local_58.Data3 = 0;
  local_58.Data4[0] = '\0';
  local_58.Data4[1] = '\0';
  local_58.Data4[2] = '\0';
  local_58.Data4[3] = '\0';
  local_58.Data4[4] = '\0';
  local_58.Data4[5] = '\0';
  local_58.Data4[6] = '\0';
  local_58.Data4[7] = '\0';
  CoCreateGuid(&local_58);
  *(ulong *)(puVar2 + 0x3b) = local_58.Data1;
  *(undefined4 *)((longlong)puVar2 + 0x1dc) = local_58._4_4_;
  *(undefined4 *)(puVar2 + 0x3c) = local_58.Data4._0_4_;
  *(undefined4 *)((longlong)puVar2 + 0x1e4) = local_58.Data4._4_4_;
  FUN_140b1cb14(puVar2);
  FUN_140b1ca34(puVar2);
  if (DAT_14cb0d2b0 != 0) {
    lVar5 = *(longlong *)(DAT_14cb0d2b0 + 0x898);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
  }
  puVar2[0x1d] = lVar5;
  iVar1 = *(int *)(puVar2 + 0x28);
  *(uint *)(puVar2 + 0x28) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar2 + 0x144) < iVar1 + 1U) {
    FUN_140b1cd0a(puVar2 + 0x27,iVar1);
  }
  FUN_140b1c9d3((longlong)iVar1 * 0x20 + puVar2[0x27]);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1c9d3 FUN_140b1c9d3 body=97 status=ok
// SIG undefined FUN_140b1c9d3(void)

void FUN_140b1c9d3(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  *param_1 = 0x47c34ff3;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 1;
  FUN_140b1cbbc(param_1 + 2,1,0);
  puVar1 = *(undefined2 **)(param_1 + 2);
  *puVar1 = 0x500;
  *(undefined8 *)(puVar1 + 2) = 0xa00000005;
  *(undefined8 *)(puVar1 + 6) = 0x3200000019;
  *(undefined8 *)(puVar1 + 10) = 0x3c3f800000;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  param_1[6] = 5000;
  return;
}



// FUNCTION 140b1ca34 FUN_140b1ca34 body=222 status=ok
// SIG undefined FUN_140b1ca34(void)

void FUN_140b1ca34(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [168];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) < 0) {
    FUN_14481578e(plVar1,0);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_14075a44e(local_d0);
    FUN_140b1ce0a(local_d0,&local_e0);
    if (plVar1 == &local_e0) {
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1f0) = local_e0;
      *(undefined4 *)(param_1 + 0x1f8) = local_d8;
      *(undefined4 *)(param_1 + 0x1fc) = local_d4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1cb14 FUN_140b1cb14 body=167 status=ok
// SIG undefined FUN_140b1cb14(void)

void FUN_140b1cb14(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [48];
  longlong *local_98;
  longlong local_60;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_14075a44e(local_c8);
    iVar2 = -1;
    if (((local_98 != (longlong *)0x0) && (local_60 != 0)) &&
       (iVar1 = (**(code **)(*local_98 + 0x60))(), 0 < iVar1)) {
      iVar1 = 0;
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(local_98[2] + (longlong)iVar2 * 4);
      } while (iVar1 != -1);
    }
    *(int *)(param_1 + 0x1e8) = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b1cbbc FUN_140b1cbbc body=334 status=ok
// SIG undefined FUN_140b1cbbc(void)

void FUN_140b1cbbc(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x24;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b1cc2e;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140b1cc2e:
    iVar5 = (int)(uVar4 / 0x24);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x24,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b1cd0a FUN_140b1cd0a body=255 status=ok
// SIG undefined FUN_140b1cd0a(void)

void FUN_140b1cd0a(longlong param_1,int param_2)

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



// FUNCTION 140b1ce0a FUN_140b1ce0a body=949 status=ok
// SIG undefined FUN_140b1ce0a(void)

longlong * FUN_140b1ce0a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_b8 [40];
  uint *local_90;
  ulonglong local_88;
  int local_7c;
  uint *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  uint local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  plVar15 = *(longlong **)(param_1 + 0x30);
  if ((plVar15 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    local_70 = *(longlong *)(param_1 + 0x68);
    FUN_140b1d1c2(&local_68,param_1);
    if (&local_68 == param_2) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_60;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
    }
    iVar3 = (**(code **)(*plVar15 + 0x60))(plVar15);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      FUN_14481578e(param_2,iVar3);
    }
    if (0 < (int)param_2[1]) {
      lVar18 = 0;
      do {
        lVar9 = *(longlong *)(local_70 + 0x10);
        lVar6 = (longlong)*(int *)(*param_2 + lVar18 * 4) * 0x50;
        if (*(int *)(lVar9 + 8 + lVar6) != *(int *)(lVar9 + 0x34 + lVar6)) {
          plVar15 = (longlong *)(lVar9 + lVar6);
          puVar14 = (uint *)(plVar15 + 2);
          local_54 = *(uint *)(plVar15 + 5);
          uVar11 = 1;
          if (local_54 == 0) {
            uVar17 = 0;
            iVar3 = 0;
            uVar10 = 0;
          }
          else {
            puVar8 = (uint *)plVar15[4];
            if ((uint *)plVar15[4] == (uint *)0x0) {
              puVar8 = puVar14;
            }
            uVar10 = *puVar8;
            if (uVar10 == 0) {
              iVar3 = local_54 + 0x1e;
              if (-1 < (int)(local_54 - 1)) {
                iVar3 = local_54 - 1;
              }
              uVar13 = 0;
              uVar7 = (ulonglong)(uint)(iVar3 >> 5);
              if (iVar3 >> 5 < 1) {
                uVar7 = uVar13;
              }
              uVar17 = (ulonglong)((int)uVar7 + 1);
              iVar4 = 0;
              do {
                iVar3 = (int)uVar7 * 0x20 + 0x20;
                uVar10 = local_54;
                if (uVar7 == uVar13) goto LAB_140b1cf99;
                iVar4 = iVar4 + 0x20;
                uVar10 = puVar8[uVar13 + 1];
                uVar13 = uVar13 + 1;
              } while (uVar10 == 0);
              uVar17 = uVar13 & 0xffffffff;
            }
            else {
              uVar17 = 0;
              iVar4 = 0;
            }
            uVar11 = (ulonglong)(-uVar10 & uVar10);
            uVar7 = uVar11 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uVar10 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            iVar3 = iVar4;
            if ((int)local_54 <= (int)uVar10) {
              uVar10 = local_54;
            }
          }
LAB_140b1cf99:
          local_68 = CONCAT44(1 << ((byte)local_54 & 0x1f),(int)local_54 >> 5);
          local_58 = -1 << ((byte)local_54 & 0x1f);
          local_50 = local_54 & 0xffffffe0;
          local_60 = puVar14;
          if (*(uint *)(plVar15 + 5) != local_54) {
            local_90 = puVar14;
            FUN_1449c0562(&local_68);
          }
          uVar7 = (ulonglong)local_54;
          local_90 = local_60;
          if ((uVar10 != local_54) || (puVar14 != local_60)) {
            uVar12 = 0xffffffff;
            local_88 = uVar7;
            do {
              iVar16 = (int)uVar17;
              uVar1 = *(undefined4 *)(*plVar15 + (longlong)(int)uVar10 * 0xc);
              iVar4 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                local_7c = iVar3;
                local_78 = puVar14;
                FUN_1446f48e2(param_2,iVar4);
                uVar7 = local_88;
                puVar14 = local_78;
                iVar3 = local_7c;
              }
              *(undefined4 *)(*param_2 + (longlong)iVar4 * 4) = uVar1;
              uVar12 = uVar12 & ~(uint)uVar11;
              puVar8 = (uint *)plVar15[4];
              if ((uint *)plVar15[4] == (uint *)0x0) {
                puVar8 = puVar14;
              }
              uVar2 = *(uint *)(plVar15 + 5);
              lVar9 = (longlong)iVar16;
              uVar10 = puVar8[lVar9] & uVar12;
              if (uVar10 == 0) {
                iVar4 = uVar2 + 0x1e;
                if (-1 < (int)(uVar2 - 1)) {
                  iVar4 = uVar2 - 1;
                }
                iVar4 = iVar4 >> 5;
                iVar3 = iVar3 + 0x20;
                iVar5 = iVar4;
                if (iVar4 < iVar16) {
                  iVar5 = iVar16;
                }
                uVar7 = local_88;
                if (iVar16 < iVar4) {
                  lVar6 = 0;
                  do {
                    uVar10 = puVar8[lVar9 + lVar6 + 1];
                    if (uVar10 != 0) {
                      uVar17 = (ulonglong)(iVar16 + (int)lVar6 + 1);
                      uVar12 = 0xffffffff;
                      goto LAB_140b1d08f;
                    }
                    iVar3 = iVar3 + 0x20;
                    lVar6 = lVar6 + 1;
                  } while (iVar5 - lVar9 != lVar6);
                  uVar12 = 0xffffffff;
                  iVar16 = iVar5;
                }
                uVar17 = (ulonglong)(iVar16 + 1);
                uVar10 = uVar2;
              }
              else {
LAB_140b1d08f:
                uVar11 = (ulonglong)(-uVar10 & uVar10);
                uVar13 = uVar11 * 2 + 1;
                lVar9 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                uVar10 = (iVar3 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                if ((int)uVar2 <= (int)uVar10) {
                  uVar10 = uVar2;
                }
              }
            } while ((uVar10 != (uint)uVar7) || (puVar14 != local_90));
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)param_2[1]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b1d1c2 FUN_140b1d1c2 body=122 status=ok
// SIG undefined FUN_140b1d1c2(void)

longlong * FUN_140b1d1c2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = *(longlong **)(param_2 + 0x30);
  if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1), 0 < iVar2)) {
    lVar3 = 0;
    do {
      if (*(int *)(plVar1[2] + lVar3 * 4) == -1) {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_1,iVar2);
        }
        *(int *)(*param_1 + (longlong)iVar2 * 4) = (int)lVar3;
      }
      lVar3 = lVar3 + 1;
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while (lVar3 < iVar2);
  }
  return param_1;
}



// FUNCTION 140b1d240 FUN_140b1d240 body=682 status=ok
// SIG undefined FUN_140b1d240(void)

undefined8 * FUN_140b1d240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140b1d4ea();
  param_1[0x2b] = param_1;
  param_1[0x2d] = param_1;
  *param_1 = &PTR_FUN_149f635f0;
  param_1[0x2a] = &PTR_FUN_149f63650;
  param_1[0x2c] = &PTR_FUN_149f63670;
  uVar1 = param_2[1];
  param_1[0x2e] = *param_2;
  param_1[0x2f] = uVar1;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = &PTR_LAB_149f45b50;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = &PTR_LAB_149f45c70;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = &PTR_LAB_149f45b50;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = &PTR_LAB_149f45b50;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = &PTR_LAB_149f45b50;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x58] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = &PTR_LAB_149f62da0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x8000000000;
  param_1[0x60] = &PTR_FUN_149f62ee0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0x8000000000;
  param_1[0x6e] = &PTR_FUN_149f62ee0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = &PTR_LAB_149f63020;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = &PTR_FUN_149f63160;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = &PTR_FUN_149f63160;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x90] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = &PTR_LAB_149f63900;
  FUN_140b1dae4(param_1);
  return param_1;
}



// FUNCTION 140b1d4ea FUN_140b1d4ea body=260 status=ok
// SIG undefined FUN_140b1d4ea(void)

undefined8 * FUN_140b1d4ea(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 9;
  *param_1 = &PTR_FUN_149f66000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = &PTR_LAB_149f62610;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = &PTR_LAB_149f4b690;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = &PTR_LAB_149f45c70;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = &PTR_LAB_149f63d80;
  FUN_140b1d5ee(param_1);
  return param_1;
}



// FUNCTION 140b1d5ee FUN_140b1d5ee body=393 status=ok
// SIG undefined FUN_140b1d5ee(void)

void FUN_140b1d5ee(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined2 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 1;
  FUN_140b19abe(param_1,DAT_14c9974b0,DAT_14c9974a8,param_1 + 0xb0);
  uVar1 = DAT_14c9974a8;
  local_70 = 0;
  local_68 = 1;
  local_50 = "BoneName";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_a8 = &local_70;
  FUN_140b1d778(param_1,uVar2,uVar1,param_1 + 0xd0);
  uVar1 = DAT_14c9974a8;
  local_80 = 0;
  local_78 = 1;
  local_50 = "BoneColor";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  local_a8 = &local_80;
  FUN_140b1ed16(param_1,uVar2,uVar1,param_1 + 0xf0);
  local_a8 = &local_90;
  local_90 = 0;
  local_88 = 1;
  FUN_140b1e87e(param_1,DAT_14c9974b8,DAT_14c9974a8,param_1 + 0x110);
  local_a8 = &local_a0;
  local_a0 = 0;
  local_98 = 1;
  FUN_140b1d92e(param_1,DAT_14c9974c0,DAT_14c9974a8,param_1 + 0x130);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1d778 FUN_140b1d778 body=437 status=ok
// SIG undefined FUN_140b1d778(void)

void FUN_140b1d778(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar9 = (uint)param_3 & 0xffff;
    lVar8 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x98);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(param_1 + 0xa0) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar10 * 0x14) == param_3)
        goto LAB_140b1d824;
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar10 * 0x14 + 0xc);
      } while (iVar10 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b1d824:
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar6 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar6 != '\0') {
      uVar11 = 0;
      goto LAB_140b1d844;
    }
  }
  uVar11 = *param_5;
LAB_140b1d844:
  uVar3 = *(undefined1 *)(param_5 + 1);
  uVar7 = FUN_1401f66f6(param_1,param_3);
  local_88[0] = 8;
  local_7b = 1;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_84 = uVar11;
  local_7c = uVar3;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar7);
  (**(code **)*param_4)(param_4,uVar7);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_4c,&local_60,0);
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1d92e FUN_140b1d92e body=437 status=ok
// SIG undefined FUN_140b1d92e(void)

void FUN_140b1d92e(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar9 = (uint)param_3 & 0xffff;
    lVar8 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x98);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(param_1 + 0xa0) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar10 * 0x14) == param_3)
        goto LAB_140b1d9da;
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar10 * 0x14 + 0xc);
      } while (iVar10 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b1d9da:
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar6 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar6 != '\0') {
      uVar11 = 0;
      goto LAB_140b1d9fa;
    }
  }
  uVar11 = *param_5;
LAB_140b1d9fa:
  uVar3 = *(undefined1 *)(param_5 + 1);
  uVar7 = FUN_1401f66f6(param_1,param_3);
  local_88[0] = 0xe;
  local_7b = 1;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_84 = uVar11;
  local_7c = uVar3;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar7);
  (**(code **)*param_4)(param_4,uVar7);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_4c,&local_60,0);
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1dae4 FUN_140b1dae4 body=3468 status=ok
// SIG undefined FUN_140b1dae4(void)

void FUN_140b1dae4(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined8 *local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  ulonglong *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined4 *)((longlong)param_1 + 0xac) = 10;
  uVar13 = DAT_14c9974a8;
  local_220 = DAT_14c9974a8;
  local_208 = DAT_14c996ae0;
  local_200 = DAT_14c996ae8;
  local_a8 = 0;
  local_a0 = 1;
  local_88._0_4_ = 0x49f62a06;
  local_88._4_4_ = 1;
  local_80 = 0x18;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_a8;
  FUN_140b1e87e(param_1,uVar4,uVar13,param_1 + 0x30);
  uVar13 = DAT_14c9974a8;
  local_b8 = 0;
  local_b0 = 1;
  local_88._0_4_ = 0x49f637a2;
  local_88._4_4_ = 1;
  local_80 = 0xe;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_b8;
  FUN_140b1e87e(param_1,uVar4,uVar13,param_1 + 0x34);
  uVar13 = DAT_14c9974a8;
  local_c8 = 0;
  local_c0 = 1;
  local_88._0_4_ = 0x49f635c8;
  local_88._4_4_ = 1;
  local_80 = 0xb;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_c8;
  FUN_140b1e87e(param_1,uVar4,uVar13,param_1 + 0x38);
  uVar13 = DAT_14c9974a8;
  local_d8 = 0;
  local_d0 = 1;
  local_88._0_4_ = 0x49f61fd0;
  local_88._4_4_ = 1;
  local_80 = 0x13;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_d8;
  FUN_140b1e87e(param_1,uVar4,uVar13,param_1 + 0x3c);
  uVar13 = DAT_14c9974a8;
  local_e8 = 0;
  local_e0 = 1;
  local_88._0_4_ = 0x49f63688;
  local_88._4_4_ = 1;
  local_80 = 0xd;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_e8;
  FUN_140b1e87e(param_1,uVar4,uVar13,param_1 + 0x40);
  uVar13 = DAT_14c996ae0;
  local_f8 = 0;
  local_f0 = 1;
  local_88._0_4_ = 0x49f51b87;
  local_88._4_4_ = 1;
  local_80 = 6;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_f8;
  FUN_140b1eb60(param_1,uVar4,uVar13,param_1 + 0x44);
  uVar13 = DAT_14c996ae0;
  local_108 = 0;
  local_100 = 1;
  local_88._0_4_ = 0x49ee9c40;
  local_88._4_4_ = 1;
  local_80 = 6;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_108;
  FUN_140b1eb60(param_1,uVar4,uVar13,param_1 + 0x54);
  local_228 = &local_118;
  local_118 = 0;
  local_110 = 1;
  FUN_140b1ed16(param_1,DAT_14c996a28,DAT_14c996ae0,param_1 + 0x48);
  uVar13 = DAT_14c996ae0;
  local_128 = 0;
  local_120 = 1;
  local_88._0_4_ = 0x49f629af;
  local_88._4_4_ = 1;
  local_80 = 8;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_128;
  FUN_140b1eb60(param_1,uVar4,uVar13,param_1 + 0x4c);
  uVar13 = DAT_14c996ae0;
  local_138 = 0;
  local_130 = 1;
  local_88._0_4_ = 0x49f629b8;
  local_88._4_4_ = 1;
  local_80 = 8;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_138;
  FUN_140b1eb60(param_1,uVar4,uVar13,param_1 + 0x50);
  uVar13 = DAT_14c996ae0;
  local_148 = local_220;
  local_140 = 1;
  local_88._0_4_ = 0x49f629c1;
  local_88._4_4_ = 1;
  local_80 = 7;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_148;
  FUN_140b1e87e(param_1,uVar4,uVar13,param_1 + 0x58);
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_80 = 1;
  FUN_140b1eb1a(param_1,DAT_14c996a90,DAT_14c996a88,&local_88);
  puVar1 = DAT_14c996ae8;
  plVar8 = param_1 + 0x5c;
  local_88._0_4_ = 0x49f51b8e;
  local_88._4_4_ = 1;
  local_80 = 7;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar5 = FUN_14001a6c0(&local_88,1);
  local_210 = param_1 + 0xb;
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    uVar11 = (uint)((ulonglong)puVar1 >> 0x10);
    uVar9 = (uint)puVar1 & 0xffff;
    plVar6 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x13];
    }
    iVar10 = *(int *)((longlong)plVar6 +
                     (ulonglong)
                     ((int)param_1[0x14] - 1U &
                     (int)((ulonglong)puVar1 >> 0x20) + ((uint)puVar1 << 0x10 | uVar9) +
                     (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(ulonglong **)(*local_210 + (longlong)iVar10 * 0x14) == puVar1) goto LAB_140b1e039;
        iVar10 = *(int *)(*local_210 + (longlong)iVar10 * 0x14 + 0xc);
      } while (iVar10 != -1);
    }
  }
  local_88 = &local_60;
  local_60 = puVar1;
  local_4c = 0;
  local_80 = SUB82(&local_4c,0);
  uStack_7e = (undefined2)((ulonglong)&local_4c >> 0x10);
  uStack_7c = (undefined1)((ulonglong)&local_4c >> 0x20);
  uStack_7b = (undefined1)((ulonglong)&local_4c >> 0x28);
  uStack_7a = (undefined2)((ulonglong)&local_4c >> 0x30);
  FUN_140b20442(local_210,&local_98,&local_88,0);
LAB_140b1e039:
  FUN_1401f66f6(param_1,puVar1);
  uVar13 = local_208;
  cVar3 = FUN_1406cda7c(param_1,local_208,puVar1);
  if (cVar3 != '\0') {
    uVar13 = 0;
  }
  uVar4 = FUN_1401f66f6(param_1,puVar1);
  local_88._0_4_ = CONCAT31(local_88._1_3_,2);
  local_88._4_4_ = (undefined4)uVar13;
  local_80 = (undefined2)((ulonglong)uVar13 >> 0x20);
  uStack_7e = (undefined2)((ulonglong)uVar13 >> 0x30);
  uStack_7c = 1;
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = plVar8;
  (**(code **)(param_1[0x5c] + 8))(plVar8,uVar4);
  (**(code **)param_1[0x5c])(plVar8,uVar4);
  local_218 = param_1 + 1;
  local_60 = &local_98;
  local_90 = puVar1;
  local_98 = (ulonglong)uVar5;
  local_58 = &local_88;
  FUN_1406cd0ac(local_218,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  puVar1 = DAT_14c996ae8;
  local_158 = 0;
  local_150 = 1;
  local_88._0_4_ = 0x49ed82b8;
  local_88._4_4_ = 1;
  local_80 = 7;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_158;
  FUN_1406cceac(param_1,uVar4,puVar1,param_1 + 0x60);
  puVar1 = DAT_14c996ae8;
  local_168 = 0;
  local_160 = 1;
  local_88._0_4_ = 0x49f629c9;
  local_88._4_4_ = 1;
  local_80 = 0xd;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_168;
  FUN_140b1e87e(param_1,uVar4,puVar1,param_1 + 0x66);
  puVar1 = DAT_14c996ae8;
  local_178 = 0;
  local_170 = 1;
  local_88._0_4_ = 0x49f629d7;
  local_88._4_4_ = 1;
  local_80 = 10;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_178;
  FUN_140b1e87e(param_1,uVar4,puVar1,param_1 + 0x6a);
  puVar1 = DAT_14c996ae8;
  local_188 = 0;
  local_180 = 1;
  local_88._0_4_ = 0x49f629e2;
  local_88._4_4_ = 1;
  local_80 = 8;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_188;
  FUN_1406cceac(param_1,uVar4,puVar1,param_1 + 0x6e);
  lVar2 = DAT_14c996af0;
  local_198 = local_220;
  local_190 = 1;
  local_88._0_4_ = 0x49f629eb;
  local_88._4_4_ = 1;
  local_80 = 0xe;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_198;
  FUN_140b1e87e(param_1,uVar4,lVar2,param_1 + 0x74);
  lVar2 = DAT_14c996af0;
  plVar8 = param_1 + 0x78;
  local_88._0_4_ = 0x49f629fa;
  local_88._4_4_ = 1;
  local_80 = 0xb;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar5 = FUN_14001a6c0(&local_88,1);
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    uVar11 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar9 = (uint)lVar2 & 0xffff;
    plVar6 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x13];
    }
    iVar10 = *(int *)((longlong)plVar6 +
                     (ulonglong)
                     ((int)param_1[0x14] - 1U &
                     (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                     (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(longlong *)(*local_210 + (longlong)iVar10 * 0x14) == lVar2) goto LAB_140b1e383;
        iVar10 = *(int *)(*local_210 + (longlong)iVar10 * 0x14 + 0xc);
      } while (iVar10 != -1);
    }
  }
  FUN_140b203e2(param_1,lVar2);
LAB_140b1e383:
  FUN_1401f66f6(param_1,lVar2);
  FUN_1406cda7c(param_1,0,lVar2);
  uVar4 = FUN_1401f66f6(param_1,lVar2);
  local_88._0_4_ = CONCAT31(local_88._1_3_,0xd);
  local_88._4_4_ = 0;
  local_80 = 0;
  uStack_7e = 0;
  uStack_7c = 1;
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = plVar8;
  (**(code **)(param_1[0x78] + 8))(plVar8,uVar4);
  (**(code **)param_1[0x78])(plVar8,uVar4);
  local_90 = (ulonglong *)lVar2;
  local_60 = &local_98;
  local_98 = (ulonglong)uVar5;
  local_58 = &local_88;
  FUN_1406cd0ac(local_218,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  lVar2 = DAT_14c996af0;
  local_1a8 = 0;
  local_1a0 = 1;
  local_88._0_4_ = 0x49f637b1;
  local_88._4_4_ = 1;
  local_80 = 0xb;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_1a8;
  FUN_140b1eeba(param_1,uVar4,lVar2,param_1 + 0x7c);
  lVar2 = DAT_14c996af0;
  local_1b8 = 0;
  local_1b0 = 1;
  local_88._0_4_ = 0x49f637bd;
  local_88._4_4_ = 1;
  local_80 = 0xb;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_1b8;
  FUN_140b1eeba(param_1,uVar4,lVar2,param_1 + 0x80);
  lVar2 = DAT_14c996af0;
  local_1c8 = local_208;
  local_1c0 = 1;
  local_88._0_4_ = 0x49f51ba2;
  local_88._4_4_ = 1;
  local_80 = 0xb;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_1c8;
  FUN_140b1e87e(param_1,uVar4,lVar2,param_1 + 0x84);
  lVar2 = DAT_14c996af0;
  local_1d8 = 0;
  local_1d0 = 1;
  local_88._0_4_ = 0x49f51b96;
  local_88._4_4_ = 1;
  local_80 = 0xb;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_1d8;
  FUN_140b1e87e(param_1,uVar4,lVar2,param_1 + 0x88);
  lVar2 = DAT_14c996af0;
  local_1e8 = local_200;
  local_1e0 = 1;
  local_88._0_4_ = 0x49f51bb8;
  local_88._4_4_ = 1;
  local_80 = 9;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = (longlong *)&local_1e8;
  FUN_140b1e87e(param_1,uVar4,lVar2,param_1 + 0x8c);
  lVar2 = DAT_14c996af0;
  local_1f8 = 0;
  local_1f0 = 1;
  local_88._0_4_ = 0x49f51bae;
  local_88._4_4_ = 1;
  local_80 = 9;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar4 = FUN_14001a6c0(&local_88,1);
  local_228 = &local_1f8;
  FUN_140b1e87e(param_1,uVar4,lVar2,param_1 + 0x90);
  puVar1 = DAT_14c996a80;
  local_88._0_4_ = 0x49efdd3b;
  local_88._4_4_ = 1;
  local_80 = 8;
  uStack_7e = 0;
  uStack_7c = 0;
  uVar7 = FUN_14001a6c0(&local_88,1);
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    uVar5 = (uint)((ulonglong)puVar1 >> 0x10);
    uVar11 = (uint)puVar1 & 0xffff;
    plVar8 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x13];
    }
    iVar10 = *(int *)((longlong)plVar8 +
                     (ulonglong)
                     ((int)param_1[0x14] - 1U &
                     (int)((ulonglong)puVar1 >> 0x20) + ((uint)puVar1 << 0x10 | uVar11) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(ulonglong **)(*local_210 + (longlong)iVar10 * 0x14) == puVar1) goto LAB_140b1e74f;
        iVar10 = *(int *)(*local_210 + (longlong)iVar10 * 0x14 + 0xc);
      } while (iVar10 != -1);
    }
  }
  local_60 = puVar1;
  local_4c = 0;
  local_88 = &local_60;
  local_80 = SUB82(&local_4c,0);
  uStack_7e = (undefined2)((ulonglong)&local_4c >> 0x10);
  uStack_7c = (undefined1)((ulonglong)&local_4c >> 0x20);
  uStack_7b = (undefined1)((ulonglong)&local_4c >> 0x28);
  uStack_7a = (undefined2)((ulonglong)&local_4c >> 0x30);
  FUN_140b20442(local_210,&local_98,&local_88,0);
LAB_140b1e74f:
  plVar8 = param_1 + 0x94;
  FUN_1401f66f6(param_1,puVar1);
  puVar12 = local_200;
  cVar3 = FUN_1406cda7c(param_1,local_200,puVar1);
  if (cVar3 != '\0') {
    puVar12 = (ulonglong *)0x0;
  }
  uVar4 = FUN_1401f66f6(param_1,puVar1);
  local_88._0_4_ = CONCAT31(local_88._1_3_,0xc);
  local_88._4_4_ = SUB84(puVar12,0);
  local_80 = (undefined2)((ulonglong)puVar12 >> 0x20);
  uStack_7e = (undefined2)((ulonglong)puVar12 >> 0x30);
  uStack_7c = 1;
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = plVar8;
  (**(code **)(param_1[0x94] + 8))(plVar8,uVar4);
  (**(code **)param_1[0x94])(plVar8,uVar4);
  local_90 = puVar1;
  local_60 = &local_98;
  local_98 = uVar7 & 0xffffffff;
  local_58 = &local_88;
  FUN_1406cd0ac(local_218,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  (**(code **)(*param_1 + 0x58))(param_1);
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1e87e FUN_140b1e87e body=436 status=ok
// SIG undefined FUN_140b1e87e(void)

void FUN_140b1e87e(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      do {
        if (*(undefined8 **)(lVar5 + (longlong)iVar7 * 0x14) == param_3) goto LAB_140b1e95c;
        iVar7 = *(int *)(lVar5 + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  local_88 = &local_60;
  local_4c = 0;
  local_80 = SUB84(&local_4c,0);
  uStack_7c = (undefined1)((ulonglong)&local_4c >> 0x20);
  uStack_7b = (undefined1)((ulonglong)&local_4c >> 0x28);
  uStack_7a = (undefined2)((ulonglong)&local_4c >> 0x30);
  local_60 = param_3;
  FUN_140b20442((longlong *)(param_1 + 0x58),&local_98,&local_88,0);
LAB_140b1e95c:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_140b1e987;
    }
  }
  uVar8 = *param_5;
LAB_140b1e987:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88._0_4_ = CONCAT31(local_88._1_3_,5);
  local_88._4_4_ = (undefined4)uVar8;
  local_80 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  uStack_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = &local_88;
  FUN_1406cd0ac(param_1 + 8,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1ea34 FUN_140b1ea34 body=38 status=ok
// SIG undefined FUN_140b1ea34(void)

void FUN_140b1ea34(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_140ea921a(param_1 + 0x10);
  return;
}



// FUNCTION 140b1ea5a FUN_140b1ea5a body=40 status=ok
// SIG undefined FUN_140b1ea5a(void)

void FUN_140b1ea5a(longlong param_1)

{
  FUN_140b1f6b6(param_1 + 0x150);
  FUN_140b1f156(param_1 + 0x160);
  return;
}



// FUNCTION 140b1ea82 FUN_140b1ea82 body=117 status=ok
// SIG undefined FUN_140b1ea82(void)

void FUN_140b1ea82(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146eb34aa(param_1,iVar1);
    }
    FUN_140b1eaf7((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146eb3530(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b1eaf7 FUN_140b1eaf7 body=34 status=ok
// SIG undefined FUN_140b1eaf7(void)

void FUN_140b1eaf7(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140b1eb1a FUN_140b1eb1a body=70 status=ok
// SIG undefined FUN_140b1eb1a(void)

void FUN_140b1eb1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140b1f3e0(param_1,param_2,param_3,param_4);
  }
  FUN_140b1f05e(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b1eb60 FUN_140b1eb60 body=436 status=ok
// SIG undefined FUN_140b1eb60(void)

void FUN_140b1eb60(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      do {
        if (*(undefined8 **)(lVar5 + (longlong)iVar7 * 0x14) == param_3) goto LAB_140b1ec3e;
        iVar7 = *(int *)(lVar5 + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  local_88 = &local_60;
  local_4c = 0;
  local_80 = SUB84(&local_4c,0);
  uStack_7c = (undefined1)((ulonglong)&local_4c >> 0x20);
  uStack_7b = (undefined1)((ulonglong)&local_4c >> 0x28);
  uStack_7a = (undefined2)((ulonglong)&local_4c >> 0x30);
  local_60 = param_3;
  FUN_140b20442((longlong *)(param_1 + 0x58),&local_98,&local_88,0);
LAB_140b1ec3e:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_140b1ec69;
    }
  }
  uVar8 = *param_5;
LAB_140b1ec69:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88._0_4_ = CONCAT31(local_88._1_3_,1);
  local_88._4_4_ = (undefined4)uVar8;
  local_80 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  uStack_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = &local_88;
  FUN_1406cd0ac(param_1 + 8,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1ed16 FUN_140b1ed16 body=418 status=ok
// SIG undefined FUN_140b1ed16(void)

void FUN_140b1ed16(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140b1edc2;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b1edc2:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_140b1eded;
    }
  }
  uVar8 = *param_5;
LAB_140b1eded:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88[0] = 4;
  local_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_84 = uVar8;
  local_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_4c,&local_60,0);
  FUN_1406cd076(local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1eeba FUN_140b1eeba body=418 status=ok
// SIG undefined FUN_140b1eeba(void)

void FUN_140b1eeba(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140b1ef66;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b1ef66:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_140b1ef91;
    }
  }
  uVar8 = *param_5;
LAB_140b1ef91:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88[0] = 9;
  local_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_84 = uVar8;
  local_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_4c,&local_60,0);
  FUN_1406cd076(local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1f05e FUN_140b1f05e body=248 status=ok
// SIG undefined FUN_140b1f05e(void)

void FUN_140b1f05e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140b1f12c;
    }
  }
  lVar2 = 0;
LAB_140b1f12c:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 140b1f156 FUN_140b1f156 body=649 status=ok
// SIG undefined FUN_140b1f156(void)

void FUN_140b1f156(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar7 + 0x60) != *(int *)(lVar7 + 0x8c)) {
    uVar1 = (uint)((ulonglong)DAT_14c996fe0 >> 0x10);
    uVar5 = (uint)DAT_14c996fe0 & 0xffff;
    lVar4 = lVar7 + 0x90;
    if (*(longlong *)(lVar7 + 0x98) != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x98);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar7 + 0xa0) - 1U &
                             (int)((ulonglong)DAT_14c996fe0 >> 0x20) +
                             ((uint)DAT_14c996fe0 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar6 * 0x14) == DAT_14c996fe0)
        goto LAB_140b1f1fb;
        iVar6 = *(int *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar6 * 0x14 + 0xc);
      } while (iVar6 != -1);
    }
  }
  FUN_140b203e2(lVar7,DAT_14c996fe0);
  lVar7 = *(longlong *)(param_1 + 8);
LAB_140b1f1fb:
  uVar2 = DAT_14c996ff0;
  lVar4 = DAT_14c996fe0;
  cVar3 = FUN_140498cd4(lVar7,DAT_14c996ff0,DAT_14c996fe0);
  if (cVar3 == '\0') {
    local_38 = 0;
    local_30 = 1;
    FUN_140b1fb8c(lVar7,uVar2,lVar4);
    lVar7 = *(longlong *)(param_1 + 8);
    lVar4 = DAT_14c996fe0;
  }
  uVar2 = DAT_14c996fe8;
  cVar3 = FUN_140498cd4(lVar7,DAT_14c996fe8,lVar4);
  if (cVar3 == '\0') {
    local_48 = 0;
    local_40 = 1;
    FUN_140498c8e(lVar7,uVar2,lVar4);
    lVar7 = *(longlong *)(param_1 + 8);
    lVar4 = DAT_14c996fe0;
  }
  uVar2 = DAT_14c996ff8;
  cVar3 = FUN_140498cd4(lVar7,DAT_14c996ff8,lVar4);
  if (cVar3 == '\0') {
    local_58 = 0;
    local_50 = 1;
    FUN_140b1fbd2(lVar7,uVar2,lVar4);
    lVar7 = *(longlong *)(param_1 + 8);
    lVar4 = DAT_14c996fe0;
  }
  uVar2 = DAT_14c997010;
  cVar3 = FUN_140498cd4(lVar7,DAT_14c997010,lVar4);
  if (cVar3 == '\0') {
    local_68 = 0;
    local_60 = 1;
    FUN_14062f558(lVar7,uVar2,lVar4);
    lVar7 = *(longlong *)(param_1 + 8);
    lVar4 = DAT_14c996fe0;
  }
  uVar2 = DAT_14c997008;
  cVar3 = FUN_140498cd4(lVar7,DAT_14c997008,lVar4);
  if (cVar3 == '\0') {
    local_78 = 0;
    local_70 = 1;
    FUN_140498c8e(lVar7,uVar2,lVar4);
    lVar7 = *(longlong *)(param_1 + 8);
    lVar4 = DAT_14c996fe0;
  }
  uVar2 = DAT_14c997000;
  cVar3 = FUN_140498cd4(lVar7,DAT_14c997000,lVar4);
  if (cVar3 == '\0') {
    local_88 = 0;
    local_80 = 1;
    FUN_14062f558(lVar7,uVar2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1f3e0 FUN_140b1f3e0 body=536 status=ok
// SIG undefined FUN_140b1f3e0(void)

void FUN_140b1f3e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140b1f488;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b1f488:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c996a50) {
    FUN_144b3d300(&DAT_14c996a50);
    if (DAT_14c996a50 == -1) {
      DAT_14c996a48 = 0;
      _Init_thread_footer(&DAT_14c996a50);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996a48;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f637e0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_140b1f5fa(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b1f5fa FUN_140b1f5fa body=138 status=ok
// SIG undefined FUN_140b1f5fa(void)

undefined1 *
FUN_140b1f5fa(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 3;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f63730;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140b1f690 FUN_140b1f690 body=38 status=ok
// SIG undefined FUN_140b1f690(void)

void FUN_140b1f690(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_14171ef34(param_1 + 0x10);
  return;
}



// FUNCTION 140b1f6b6 FUN_140b1f6b6 body=1237 status=ok
// SIG undefined FUN_140b1f6b6(void)

void FUN_140b1f6b6(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar13 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar13 + 0x60) != *(int *)(lVar13 + 0x8c)) {
    uVar4 = (uint)((ulonglong)DAT_14c996b60 >> 0x10);
    uVar12 = (uint)DAT_14c996b60 & 0xffff;
    lVar6 = lVar13 + 0x90;
    if (*(longlong *)(lVar13 + 0x98) != 0) {
      lVar6 = *(longlong *)(lVar13 + 0x98);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar13 + 0xa0) - 1U &
                             (int)((ulonglong)DAT_14c996b60 >> 0x20) +
                             ((uint)DAT_14c996b60 << 0x10 | uVar12) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar13 + 0x58) + (longlong)iVar3 * 0x14) == DAT_14c996b60)
        goto LAB_140b1f768;
        iVar3 = *(int *)(*(longlong *)(lVar13 + 0x58) + (longlong)iVar3 * 0x14 + 0xc);
      } while (iVar3 != -1);
    }
  }
  FUN_140b203e2(lVar13,DAT_14c996b60);
  lVar13 = *(longlong *)(param_1 + 8);
LAB_140b1f768:
  cVar2 = FUN_140498cd4(lVar13,DAT_14c996b68,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_58 = DAT_14c9974a8;
    local_50 = 1;
    FUN_140b1fb8c(*(undefined8 *)(param_1 + 8),DAT_14c996b68,DAT_14c996b60);
  }
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),DAT_14c996b70,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_68 = 0;
    local_60 = 1;
    FUN_140b1fbd2(*(undefined8 *)(param_1 + 8),DAT_14c996b70,DAT_14c996b60);
  }
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),DAT_14c996b78,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_78 = 0;
    local_70 = 1;
    FUN_140498c8e(*(undefined8 *)(param_1 + 8),DAT_14c996b78,DAT_14c996b60);
  }
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),DAT_14c996b80,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_88 = 0;
    local_80 = 1;
    FUN_140498c8e(*(undefined8 *)(param_1 + 8),DAT_14c996b80,DAT_14c996b60);
  }
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),DAT_14c996b88,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_98 = 0;
    local_90 = 1;
    FUN_140498c8e(*(undefined8 *)(param_1 + 8),DAT_14c996b88,DAT_14c996b60);
  }
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),DAT_14c996b90,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_a8 = 0;
    local_a0 = 1;
    FUN_140b1fb8c(*(undefined8 *)(param_1 + 8),DAT_14c996b90,DAT_14c996b60);
  }
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),DAT_14c996b98,DAT_14c996b60);
  if (cVar2 == '\0') {
    local_b8 = 0;
    local_b0 = 1;
    FUN_140498c8e(*(undefined8 *)(param_1 + 8),DAT_14c996b98,DAT_14c996b60);
  }
  plVar5 = (longlong *)FUN_140b1fc18(*(undefined8 *)(param_1 + 8),DAT_14c996b68,DAT_14c996b60);
  iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
  if ((iVar3 != 0) && ((longlong)(int)plVar5[3] != 0)) {
    lVar13 = 0;
    do {
      if (*(int *)(plVar5[2] + lVar13) == -1) goto LAB_140b1fb1f;
      lVar13 = lVar13 + 4;
    } while ((longlong)(int)plVar5[3] * 4 != lVar13);
  }
  iVar3 = FUN_1409bcbd8(*(undefined8 *)(param_1 + 8),1,DAT_14c996b60);
  *(undefined4 *)(plVar5[2] + (longlong)iVar3 * 4) = 0xffffffff;
  plVar5 = (longlong *)FUN_140b1fc18(*(undefined8 *)(param_1 + 8),DAT_14c996b68,DAT_14c996b60);
  lVar13 = FUN_140b1fd10(*(undefined8 *)(param_1 + 8),DAT_14c996b70,DAT_14c996b60);
  lVar6 = FUN_140499144(*(undefined8 *)(param_1 + 8),DAT_14c996b78,DAT_14c996b60);
  lVar7 = FUN_140499144(*(undefined8 *)(param_1 + 8),DAT_14c996b80,DAT_14c996b60);
  lVar8 = FUN_140499144(*(undefined8 *)(param_1 + 8),DAT_14c996b88,DAT_14c996b60);
  lVar9 = FUN_140b1fc18(*(undefined8 *)(param_1 + 8),DAT_14c996b90,DAT_14c996b60);
  lVar10 = FUN_140499144(*(undefined8 *)(param_1 + 8),DAT_14c996b98,DAT_14c996b60);
  if ((longlong)(int)plVar5[3] != 0) {
    lVar11 = (longlong)(int)plVar5[3] * 4;
    lVar14 = 0;
    do {
      if (*(int *)(plVar5[2] + lVar14) == -1) {
        uVar16 = 0;
        goto LAB_140b1fb49;
      }
      lVar14 = lVar14 + 4;
    } while (lVar11 != lVar14);
  }
  uVar4 = FUN_1409bcbd8(*(undefined8 *)(param_1 + 8),1,DAT_14c996b60);
  uVar16 = (ulonglong)uVar4;
LAB_140b1faa8:
  uVar4 = (uint)uVar16;
  if ((-1 < (int)uVar4) && (iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5), (int)uVar4 < iVar3)) {
    uVar15 = uVar16 & 0xffffffff;
    *(undefined4 *)(plVar5[2] + uVar15 * 4) = 0xffffffff;
    lVar11 = lVar13 + 0x10;
    if (*(longlong *)(lVar13 + 0x20) != 0) {
      lVar11 = *(longlong *)(lVar13 + 0x20);
    }
    puVar1 = (uint *)(lVar11 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar16 & 0x1f);
    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + uVar15 * 4) = 0x3f000000;
    *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + uVar15 * 4) = 0x41200000;
    *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + uVar15 * 4) = 0x3f000000;
    *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + uVar15 * 4) = 1;
    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + uVar15 * 4) = 0;
  }
LAB_140b1fb1f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    uVar16 = uVar16 + 1;
    lVar11 = lVar11 + -4;
    if (lVar11 == 0) break;
LAB_140b1fb49:
    if (*(int *)(plVar5[2] + uVar16 * 4) == -1) goto LAB_140b1faa8;
  }
  goto LAB_140b1fb1f;
}



// FUNCTION 140b1fb8c FUN_140b1fb8c body=70 status=ok
// SIG undefined FUN_140b1fb8c(void)

void FUN_140b1fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140b1fe08(param_1,param_2,param_3,param_4);
  }
  FUN_140b1fc18(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b1fbd2 FUN_140b1fbd2 body=70 status=ok
// SIG undefined FUN_140b1fbd2(void)

void FUN_140b1fbd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140b20134(param_1,param_2,param_3,param_4);
  }
  FUN_140b1fd10(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b1fc18 FUN_140b1fc18 body=248 status=ok
// SIG undefined FUN_140b1fc18(void)

void FUN_140b1fc18(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140b1fce6;
    }
  }
  lVar2 = 0;
LAB_140b1fce6:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 140b1fd10 FUN_140b1fd10 body=248 status=ok
// SIG undefined FUN_140b1fd10(void)

void FUN_140b1fd10(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140b1fdde;
    }
  }
  lVar2 = 0;
LAB_140b1fdde:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 140b1fe08 FUN_140b1fe08 body=515 status=ok
// SIG undefined FUN_140b1fe08(void)

void FUN_140b1fe08(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140b1febb;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b1febb:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9968c8) {
    FUN_144b3d300(&DAT_14c9968c8);
    if (DAT_14c9968c8 == -1) {
      DAT_14c9968c0 = 0;
      _Init_thread_footer(&DAT_14c9968c8);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c9968c0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_FUN_149f62c60;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_140b2000c(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2000c FUN_140b2000c body=138 status=ok
// SIG undefined FUN_140b2000c(void)

undefined1 *
FUN_140b2000c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 5;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f62d80;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140b20096 FUN_140b20096 body=38 status=ok
// SIG undefined FUN_140b20096(void)

void FUN_140b20096(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_14481578e(param_1 + 0x10);
  return;
}



// FUNCTION 140b200be FUN_140b200be body=117 status=ok
// SIG undefined FUN_140b200be(void)

void FUN_140b200be(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < (uint)(param_2 - iVar2)) {
      FUN_1446f48e2(plVar1);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(longlong)(param_2 - iVar2) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar2 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_14479f406(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b20134 FUN_140b20134 body=546 status=ok
// SIG undefined FUN_140b20134(void)

void FUN_140b20134(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140b201dc;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140b201dc:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9968e0) {
    FUN_144b3d300(&DAT_14c9968e0);
    if (DAT_14c9968e0 == -1) {
      DAT_14c9968d8 = 0;
      _Init_thread_footer(&DAT_14c9968e0);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c9968d8;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x30,0x10);
  *local_60 = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *(undefined8 *)((longlong)local_60 + 0x1c) = 0;
  *(undefined8 *)((longlong)local_60 + 0x24) = 0;
  *(undefined4 *)((longlong)local_60 + 0x2c) = 0x80;
  *local_60 = (longlong)&PTR_FUN_149f62ee0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_140b20358(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b20358 FUN_140b20358 body=138 status=ok
// SIG undefined FUN_140b20358(void)

undefined1 *
FUN_140b20358(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 6;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f63000;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140b203e2 FUN_140b203e2 body=94 status=ok
// SIG undefined FUN_140b203e2(void)

void FUN_140b203e2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 *local_20;
  undefined4 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_2c;
  local_2c = 0;
  local_28 = param_2;
  FUN_140b20442(param_1 + 0x58,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b20442 FUN_140b20442 body=473 status=ok
// SIG undefined FUN_140b20442(void)

int * FUN_140b20442(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b2061c(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *local_48 = lVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  uVar8 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar3 = (uint)lVar2 & 0xffff;
  uVar8 = ((uint)lVar2 << 0x10 | uVar3) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar3 >> 4);
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
    if (iVar7 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar7 * 0x14);
        if (*plVar5 == lVar2) {
          lVar2 = *local_48;
          *(int *)(plVar5 + 1) = (int)local_48[1];
          *plVar5 = lVar2;
          FUN_140b20aac(param_1,local_50[0]);
          cVar4 = '\x01';
          local_50[0] = iVar7;
          break;
        }
        iVar7 = *(int *)((longlong)plVar5 + 0xc);
        cVar4 = '\0';
      } while (iVar7 != -1);
      goto LAB_140b204e0;
    }
  }
  cVar4 = '\0';
LAB_140b204e0:
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
      uVar8 = (int)param_1[9] - 1U & uVar8;
      *(uint *)(local_48 + 2) = uVar8;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar7;
      FUN_140b207f8(param_1);
    }
  }
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b2061c FUN_140b2061c body=476 status=ok
// SIG undefined FUN_140b2061c(void)

int * FUN_140b2061c(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140b207f8 FUN_140b207f8 body=691 status=ok
// SIG undefined FUN_140b207f8(void)

void FUN_140b207f8(longlong *param_1)

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
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140b2085e;
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
LAB_140b2085e:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
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
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x14);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x10 + lVar15 * 0x14) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc + lVar15 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140b20aac FUN_140b20aac body=116 status=ok
// SIG undefined FUN_140b20aac(void)

void FUN_140b20aac(longlong *param_1,int param_2)

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



// FUNCTION 140b20b20 FUN_140b20b20 body=1526 status=ok
// SIG undefined FUN_140b20b20(void)

undefined8 FUN_140b20b20(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  uint *local_b0;
  longlong local_a8;
  code *local_a0 [2];
  longlong *local_90;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    bVar21 = true;
    bVar22 = false;
    lVar8 = 0;
LAB_140b20b5e:
    if ((bVar21) && (lVar8 == 0)) {
      if ((((*(int *)(param_3 + 0x4c) == 0) ||
           ((uVar20 = *(uint *)(param_3 + 0x48), (int)uVar20 < 0 || (DAT_14c9647dc <= (int)uVar20)))
           ) || (plVar14 = (longlong *)
                           ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                plVar14 == (longlong *)0x0)) ||
         ((((int)plVar14[2] != *(int *)(param_3 + 0x4c) ||
           ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar14, lVar8 == 0))))
      goto LAB_140b20d85;
      if (bVar22) {
        if (DAT_14cac6e60 == 0) {
          local_d0 = local_a0;
          local_a0[0] = FUN_144a7958c;
          local_c0 = FUN_14081d0ea;
          local_c8 = FUN_142b47bc4;
          local_d8 = &LAB_1478989f1;
          local_e0 = &LAB_146391124;
          local_e8 = L"Engine";
          local_f0 = 0x10000000000;
          local_f8 = 0x10000005;
          local_100 = 0x10;
          local_108 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30))
        goto LAB_140b20d85;
        plVar14 = (longlong *)(lVar8 + 0x5c0);
      }
      else {
        if (*(longlong *)(lVar8 + 0x120) == 0) goto LAB_140b20d85;
        plVar14 = (longlong *)(*(longlong *)(lVar8 + 0x120) + 0xa8);
      }
      lVar8 = *plVar14;
    }
    if (lVar8 == 0) goto LAB_140b20d85;
  }
  else {
    uVar20 = *param_2;
    if (((((ulonglong)uVar20 == 0xffffffff) || ((int)uVar20 < 0)) ||
        (*(int *)(*(longlong *)(param_2 + 2) + 0x48) <= (int)uVar20)) ||
       (lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 2) + 0x40) + (ulonglong)uVar20 * 8),
       lVar8 == 0)) {
      lVar8 = FUN_1404101e2(param_1 + 0x70);
      bVar21 = *(char *)(param_1 + 0x38) != '\0';
      bVar22 = *(char *)(param_1 + 0x38) == '\x03';
      goto LAB_140b20b5e;
    }
  }
  uVar20 = *(uint *)(param_1 + 0x68);
  puVar6 = param_2 + 0xe;
  uVar2 = param_2[0x38];
  local_b0 = puVar6;
  if (uVar20 != uVar2) {
    if ((int)uVar2 < (int)uVar20) {
      param_2[0x38] = uVar20;
      if (param_2[0x39] - uVar2 < uVar20 - uVar2) {
        FUN_140b21132(puVar6,uVar2);
      }
      puVar6 = *(uint **)(param_2 + 0x36);
      if (*(uint **)(param_2 + 0x36) == (uint *)0x0) {
        puVar6 = local_b0;
      }
      FUN_140b21118(puVar6 + (longlong)(int)uVar2 * 10,uVar20 - uVar2);
    }
    else {
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar20);
      }
      if ((int)uVar20 < (int)uVar2) {
        FUN_1497d6d2e(puVar6,uVar20,uVar2 - uVar20);
        FUN_1497d6da4(puVar6);
      }
    }
    uVar20 = *(uint *)(param_1 + 0x68);
  }
  if (0 < (int)uVar20) {
    lVar12 = 8;
    lVar19 = 0;
    lVar16 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0x60);
      local_a0[0] = (code *)((ulonglong)local_a0[0] & 0xffffffffffffff00);
      local_78 = 0;
      FUN_1456bb102(local_a0,lVar8);
      FUN_1448729ea(lVar13 + lVar12,local_70,local_a0);
      puVar6 = *(uint **)(param_2 + 0x36);
      if (*(uint **)(param_2 + 0x36) == (uint *)0x0) {
        puVar6 = local_b0;
      }
      plVar14 = (longlong *)((longlong)puVar6 + lVar19);
      pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 +
                          (ulonglong)((uint)*(byte *)((longlong)puVar6 + lVar19 + 0x20) * 0x120));
      if (pcVar15 != (code *)0x0) {
        plVar10 = plVar14;
        if (0x18 < *(ushort *)((longlong)puVar6 + lVar19 + 0x18)) {
          plVar10 = (longlong *)*plVar14;
        }
        (*pcVar15)(plVar10);
      }
      if (0x18 < *(ushort *)((longlong)puVar6 + lVar19 + 0x18)) {
        FUN_1400020a8(*plVar14);
      }
      *(ushort *)((longlong)puVar6 + lVar19 + 0x18) = local_58;
      if (local_58 < 0x19) {
        uVar5 = (ulonglong)((uint)local_50 * 0x120);
        pcVar15 = *(code **)((longlong)&DAT_14c9a85b8 + uVar5);
        if ((pcVar15 == (code *)0x0) &&
           (pcVar15 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5), pcVar15 == (code *)0x0)) {
          memcpy(plVar14,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
        }
        else {
          (*pcVar15)(plVar14,local_70);
        }
      }
      else {
        *plVar14 = (longlong)local_70[0];
        local_70[0] = (undefined8 ****)0x0;
        local_58 = 0;
      }
      *(byte *)(plVar14 + 4) = local_50;
      local_50 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar11 = local_70;
        if (0x18 < local_58) {
          ppppuVar11 = (undefined8 ****)local_70[0];
        }
        (*DAT_14c9a85d0)(ppppuVar11);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      if ((longlong)local_78 != 0) {
        lVar18 = (longlong)local_78 + -1;
        local_a8 = DAT_14c9a3da0;
        lVar13 = lVar18 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
        if (*(longlong *)(local_a8 + lVar13) != 0) {
          FUN_1400020a8();
        }
        lVar4 = DAT_14c9a3da0;
        iVar17 = (int)lVar18;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar17;
        }
        *(undefined4 *)(lVar4 + lVar13) = 0xffffffff;
        iVar9 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar9 = DAT_14c9a3dd0;
        }
        *(int *)(lVar4 + 4 + lVar13) = iVar9;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar7 = DAT_14c9a3dc0;
        if (DAT_14c9a3dc0 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3db0;
        }
        iVar9 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar9 = iVar17;
        }
        bVar3 = (byte)lVar18 & 0x1f;
        DAT_14c9a3dd0 = iVar17;
        *(uint *)(puVar7 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(puVar7 + (longlong)(iVar9 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        local_78 = 0;
      }
      if (((char)local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      lVar16 = lVar16 + 1;
      lVar19 = lVar19 + 0x28;
      lVar12 = lVar12 + 0x58;
    } while (lVar16 < *(int *)(param_1 + 0x68));
  }
LAB_140b20d85:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140b21118 FUN_140b21118 body=26 status=ok
// SIG undefined FUN_140b21118(void)

void FUN_140b21118(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x20);
    do {
      *(undefined2 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b21132 FUN_140b21132 body=367 status=ok
// SIG undefined FUN_140b21132(void)

void FUN_140b21132(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xa8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (4 < *(uint *)(param_1 + 0xac)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140b211c8;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140b211c8:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x28)) {
      uVar6 = uVar4 / 0x28 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0xac) = (int)uVar6;
  FUN_140b212a2(param_1,param_2,uVar6,0x28);
  return;
}



// FUNCTION 140b212a2 FUN_140b212a2 body=149 status=ok
// SIG undefined FUN_140b212a2(void)

void FUN_140b212a2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b21338 FUN_140b21338 body=40 status=ok
// SIG undefined FUN_140b21338(void)

undefined8 FUN_140b21338(undefined8 param_1,int param_2)

{
  FUN_140b21360();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b21360 FUN_140b21360 body=184 status=ok
// SIG undefined FUN_140b21360(void)

void FUN_140b21360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6d53d0;
  param_1[5] = &PTR_FUN_14b6d5e20;
  param_1[6] = &PTR_LAB_14b6d5e60;
  param_1[0x55] = &PTR_FUN_14b6d5eb0;
  param_1[0x56] = &PTR_FUN_14b6d5f30;
  param_1[0x57] = &PTR_FUN_14b6d5f40;
  param_1[0xc4] = &PTR_FUN_14b6d5f70;
  param_1[0xd1] = &PTR_FUN_14b6d5f80;
  param_1[0xd2] = &PTR_FUN_14b6d5fa0;
  param_1[0xd3] = &PTR_FUN_14b6d6040;
  param_1[0xd4] = &PTR_FUN_14b6d6050;
  if (param_1[0x21d] != 0) {
    FUN_1400020a8();
  }
  FUN_140b21418(param_1);
  return;
}



// FUNCTION 140b21418 FUN_140b21418 body=2093 status=ok
// SIG undefined FUN_140b21418(void)

void FUN_140b21418(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b098f90;
  param_1[5] = &PTR_FUN_14b0999e0;
  param_1[6] = &PTR_LAB_14b099a20;
  param_1[0x55] = &PTR_FUN_14b099a70;
  param_1[0x56] = &PTR_FUN_14b099af0;
  param_1[0x57] = &PTR_FUN_14b099b00;
  param_1[0xc4] = &PTR_FUN_14b099b30;
  param_1[0xd1] = &PTR_FUN_14b099b40;
  param_1[0xd2] = &PTR_FUN_14b099b60;
  param_1[0xd3] = &PTR_FUN_14b099c00;
  param_1[0xd4] = &PTR_FUN_14b099c10;
  plVar3 = param_1 + 0x213;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x217) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x216)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x216)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x20c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x210) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x20f)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20f)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x205;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x209) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x208)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x208)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1fd;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x201) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x200)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x200)) {
    FUN_1400020a8(*plVar3);
  }
  FUN_14028f404(param_1[0x1f9],*(undefined4 *)(param_1 + 0x1fa));
  if (param_1[0x1f9] != 0) {
    FUN_1400020a8();
  }
  FUN_140b21c46(param_1 + 0x1f5,1);
  plVar3 = param_1 + 0x1ed;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f1) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1d5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1d8)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d8)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1cd;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d1) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1d0)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d0)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1c6;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1ca) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1c9)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c9)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1b9;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1bd) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1bc)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1bc)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1b2;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1b6) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1b5)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1b5)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x1ab;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1af) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x1ae)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1ae)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x18b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 399) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x18e)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x18e)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x183;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x187) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x186)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x186)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x178;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x17b)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x17b)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = param_1 + 0x171;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x175) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 0x174)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x174)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = (longlong *)param_1[0x16f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x167) = 0;
  if (param_1[0x166] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x15e);
  if (param_1[0x157] != 0) {
    FUN_1400020a8();
  }
  FUN_140b21dd6(param_1 + 300);
  if (param_1[0x128] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x101);
  if (param_1[0xfd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xda],*(undefined4 *)(param_1 + 0xdb));
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd7],*(undefined4 *)(param_1 + 0xd8));
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xd6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140b21cc2(param_1);
  return;
}



// FUNCTION 140b21c46 FUN_140b21c46 body=124 status=ok
// SIG undefined FUN_140b21c46(void)

void FUN_140b21c46(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140b21cc2 FUN_140b21cc2 body=151 status=ok
// SIG undefined FUN_140b21cc2(void)

void FUN_140b21cc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab686d0;
  param_1[5] = &PTR_FUN_14ab690f0;
  param_1[6] = &PTR_LAB_14ab69130;
  param_1[0x55] = &PTR_FUN_14ab69180;
  param_1[0x56] = &PTR_FUN_14ab69200;
  param_1[0x57] = &PTR_FUN_14ab69210;
  param_1[0xc4] = &PTR_FUN_14ab69240;
  FUN_140b21d5a(param_1 + 0xcd,1);
  param_1[0xc4] = &PTR_LAB_14ab74bb0;
  FUN_14028f6a8(param_1 + 0xc6,1);
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140b21d5a FUN_140b21d5a body=124 status=ok
// SIG undefined FUN_140b21d5a(void)

void FUN_140b21d5a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140b21dd6 FUN_140b21dd6 body=380 status=ok
// SIG undefined FUN_140b21dd6(void)

void FUN_140b21dd6(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x100);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x120) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x118)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x118)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0xc0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x98)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x98)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x60) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x58)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x58)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b21f52 FUN_140b21f52 body=33 status=ok
// SIG undefined FUN_140b21f52(void)

undefined4 FUN_140b21f52(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14087fa96();
  FUN_140b21f74(param_1);
  return uVar1;
}



// FUNCTION 140b21f74 FUN_140b21f74 body=264 status=ok
// SIG undefined FUN_140b21f74(void)

void FUN_140b21f74(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  longlong local_80;
  longlong local_30;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x50] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x40))();
    if ((cVar2 != '\0') && (lVar1 = param_1[7], lVar1 != 0)) {
      lVar3 = FUN_14070cc62();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
          (lVar1 = *(longlong *)(lVar1 + 0x858), lVar1 != 0)))) {
        local_90 = (undefined4)param_1[0x51];
        local_80 = param_1[0x50];
        local_8c = 0x3f800000;
        local_88 = 1;
        if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c();
        }
        local_20 = '\0';
        FUN_140b2207e(lVar1,&local_90,0x3dcccccd);
        if ((local_20 == '\x01') && (local_30 != 0)) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2207e FUN_140b2207e body=254 status=ok
// SIG undefined FUN_140b2207e(void)

void FUN_140b2207e(longlong param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)(param_1 + 0x1560);
  if (pfVar1 != param_2) {
    FUN_140b2217c(pfVar1);
  }
  *(undefined4 *)(param_1 + 0x15e4) = 0;
  if (param_3 <= 0.0) {
    *(undefined4 *)(param_1 + 0x15e0) = 0;
    return;
  }
  *(float *)(param_1 + 0x15e0) = param_3;
  if (*(char *)(param_1 + 0x15d0) == '\x01') {
    fVar2 = *(float *)(param_1 + 0x1578);
  }
  else {
    if (*(longlong **)(param_1 + 0x1570) == (longlong *)0x0) {
      fVar3 = 0.0;
      goto LAB_140b22106;
    }
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x1570) + 0x2b0))();
  }
  if ((fVar2 != 0.0) || (fVar3 = fVar2, NAN(fVar2))) {
    fVar3 = *pfVar1 - param_3;
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_1447c7e44();
      fVar3 = (float)((uint)(fVar2 - fVar3) & -(uint)(fVar3 != 0.0));
    }
    else if (fVar2 < fVar3) {
      fVar3 = (float)FUN_1447c7e44(fVar3 - fVar2);
      fVar3 = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar2 |
                     (uint)(fVar3 + 0.0) & -(uint)(fVar3 != 0.0));
    }
  }
LAB_140b22106:
  *pfVar1 = fVar3;
  return;
}



// FUNCTION 140b2217c FUN_140b2217c body=247 status=ok
// SIG undefined FUN_140b2217c(void)

undefined8 * FUN_140b2217c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *_Src;
  
  if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)(param_1 + 0xe) == '\x01')) {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    param_1[7] = param_2[7];
    uVar4 = *(undefined4 *)(param_2 + 3);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar9 = *(undefined4 *)(param_2 + 6);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
    *(undefined4 *)(param_1 + 6) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar10;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    *(undefined4 *)(param_1 + 4) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
    param_1[0xc] = 0;
    iVar2 = *(int *)(param_2 + 0xd);
    puVar11 = (undefined8 *)param_2[0xc];
    *(int *)(param_1 + 0xd) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 2;
    }
    else {
      _Src = param_2 + 8;
      if (puVar11 != (undefined8 *)0x0) {
        _Src = puVar11;
      }
      FUN_144891736(param_1 + 8,iVar2,0);
      puVar11 = (undefined8 *)param_1[0xc];
      if ((undefined8 *)param_1[0xc] == (undefined8 *)0x0) {
        puVar11 = param_1 + 8;
      }
      memcpy(puVar11,_Src,(longlong)iVar2 << 4);
    }
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 140b22274 FUN_140b22274 body=477 status=ok
// SIG undefined FUN_140b22274(void)

undefined8 FUN_140b22274(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float extraout_XMM0_Da;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar8 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 0x18 + lVar8);
      if (((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + 0x14 + lVar8), -1 < (int)uVar3)) &&
           ((int)uVar3 < DAT_14c9647dc)) &&
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar2)))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar5 = *plVar7, lVar5 != 0)))) {
        if (DAT_14c9a51d8 == 0) {
          local_70 = &local_58;
          local_58 = FUN_1433d5220;
          local_60 = FUN_142b32f24;
          local_68 = &LAB_1462ac436;
          local_78 = &LAB_1470c7d1d;
          local_80 = &LAB_1462ac43b;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000008;
          local_a0 = 0x10;
          local_a8 = 0x560;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
        }
        if ((*(int *)(DAT_14c9a51d8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) == DAT_14c9a51d8 + 0x30)) {
          FUN_144a5e4da(lVar5,*(undefined8 *)(lVar4 + lVar8));
          if ((1e-05 < extraout_XMM0_Da) && (uVar6 = 1, 0.99999 <= extraout_XMM0_Da))
          goto LAB_140b2236f;
        }
      }
      lVar8 = lVar8 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar8);
  }
  uVar6 = 0;
LAB_140b2236f:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b22452 FUN_140b22452 body=260 status=ok
// SIG undefined FUN_140b22452(void)

void FUN_140b22452(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  
  lVar2 = DAT_14cb0dd88;
  fVar10 = *(float *)(param_2 + 0x34);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar9 + 0xc60);
  if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
    uVar7 = 0;
  }
  else if (iVar8 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  piVar3 = DAT_14cb0dda0;
  if (*(int *)(lVar2 + uVar7 * 4) == 0) {
    uVar7 = 0;
    goto LAB_140b224b6;
  }
  piVar1 = (int *)(lVar9 + 0xc60);
  if (*piVar1 == 0x40000002) {
    iVar8 = *DAT_14cb0dda0;
LAB_140b22501:
    uVar7 = 0;
    lVar9 = DAT_14cb0ddb8;
  }
  else {
    bVar4 = FUN_144a61b4f();
    lVar9 = DAT_14cb0ddb8;
    iVar8 = piVar3[bVar4 ^ 1];
    if (*piVar1 == 0x40000002) goto LAB_140b22501;
    bVar4 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar4 ^ 1);
  }
  fVar10 = fVar10 - (float)*(int *)(lVar9 + uVar7 * 4);
  uVar7 = (ulonglong)(uint)(int)(float)iVar8;
LAB_140b224b6:
  FUN_140b22556(param_1,param_2,(ulonglong)(uint)(int)fVar10 << 0x20 | uVar7);
  return;
}



// FUNCTION 140b22556 FUN_140b22556 body=4496 status=ok
// SIG undefined FUN_140b22556(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b22556(undefined **param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  float fVar2;
  undefined1 uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t sVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  ushort uVar15;
  int iVar16;
  undefined2 *puVar17;
  ushort uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_4f8 [32];
  undefined1 local_4d8;
  longlong local_4d0;
  undefined **local_4c0;
  undefined ***local_4b8;
  float *local_4b0;
  float *local_4a8;
  longlong *local_4a0;
  undefined8 *local_498;
  float *local_490;
  float *local_488;
  undefined8 *local_480;
  float *local_478;
  float *local_470;
  undefined ***local_468;
  undefined **local_460;
  undefined8 uStack_458;
  double local_450;
  undefined8 local_448;
  undefined1 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  double local_420;
  double local_418;
  undefined4 local_410;
  longlong local_408;
  undefined8 uStack_400;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  longlong local_3e8;
  undefined8 uStack_3e0;
  float local_3cc;
  longlong *local_3c8;
  undefined4 local_3c0;
  undefined **local_3b8;
  double local_3b0;
  double local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  float local_37c;
  double local_378;
  double local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  float local_2fc;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined **local_2e0;
  int local_2d8;
  float local_2d0;
  float local_2cc;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined **local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  float local_27c;
  undefined8 local_278;
  uint local_270;
  byte local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  float local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined1 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  puVar17 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar17 = (undefined2 *)param_1[0xf];
  }
  ppuVar13 = (undefined **)&DAT_149dfb77a;
  if (DAT_14cb0ddf8 != 0) {
    ppuVar13 = DAT_14cb0ddf0;
  }
  local_2c8 = param_2;
  local_2c0 = param_3;
  FUN_140002266(&local_2e0,L"%s%s",ppuVar13,puVar17);
  if (*(int *)(param_1 + 0x13) < 2) {
    local_2f8 = 0;
    uStack_2f0 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar10 = 0;
    }
    iVar16 = *(int *)(param_1 + 0x13) + -1;
    if (iVar16 <= iVar10) {
      iVar10 = iVar16;
    }
    if (iVar10 < 1) {
      iVar10 = 0;
    }
    FUN_14006620a(&local_2f8,param_1[0x12] + (uint)(iVar10 * 2),iVar16 - iVar10);
  }
  local_4d0 = *(longlong *)(local_2c8 + 0x2e0);
  if (*(char *)(local_4d0 + 0xa0) == '\0') {
    local_2fc = *(float *)(local_4d0 + 0xb0);
  }
  else {
    local_2fc = 1.0;
  }
  local_308 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_4d8 = *(undefined1 *)(param_1 + 0x2d);
  iVar10 = local_2d8 + -1;
  if (local_2d8 == 0) {
    iVar10 = 0;
  }
  local_2b8 = local_2e0;
  local_2b0 = (double)CONCAT44(local_2b0._4_4_,iVar10);
  FUN_140b23708(local_308,&local_2b8,&local_2cc,&local_2d0);
  local_2cc = local_2cc / local_2fc;
  local_2d0 = local_2d0 / local_2fc;
  fVar2 = *(float *)(param_1[0x2a] + 0x50);
  fVar22 = *(float *)(local_2c8 + 0x30);
  fVar21 = local_2d0 + 6.0;
  local_340 = FUN_1447b4020(param_1[8]);
  local_3b0 = (double)(int)local_2c0;
  local_3a8 = (double)((float)(local_2c0._4_4_ + -6) - local_2d0);
  local_390 = 0;
  local_398 = 0;
  local_3b8 = &PTR_FUN_14aaeb770;
  local_368 = 0x3f800000;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0x3ff0000000000000;
  local_348 = 0x3ff0000000000000;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = (undefined4)DAT_14c8463f0;
  uStack_314 = DAT_14c8463f0._4_4_;
  uStack_310 = (undefined4)DAT_14c8463f8;
  uStack_30c = DAT_14c8463f8._4_4_;
  local_388 = 0;
  local_380 = 0;
  local_3a0 = 0xb00000000;
  lVar19 = *(longlong *)(local_2c8 + 0x2e0);
  local_37c = fVar2 / 100.0;
  local_378 = (double)fVar22;
  local_370 = (double)fVar21;
  FUN_1405054c0(&local_3b8,lVar19);
  if (*(int *)(lVar19 + 0xac) == 1) {
    FUN_14376e4da(lVar19,0);
  }
  local_388 = CONCAT44(DAT_14c758e90,DAT_14c758e90);
  local_380 = DAT_14c758e90;
  local_37c = 1.0;
  local_340 = FUN_1447b4020(param_1[9]);
  local_370 = 2.0;
  lVar19 = *(longlong *)(local_2c8 + 0x2e0);
  local_378 = (double)fVar22;
  (*(code *)local_3b8[3])(&local_3b8,lVar19);
  if (*(int *)(lVar19 + 0xac) == 1) {
    FUN_14376e4da(lVar19,0);
  }
  FUN_140009b9a(&local_3c8,&local_2e0);
  puVar4 = param_1[0x2a];
  local_288 = (&DAT_14c758c60)[(byte)puVar4[0x5a]];
  local_284 = (&DAT_14c758c60)[(byte)puVar4[0x59]];
  local_27c = (float)(byte)puVar4[0x5b] * 0.003921569;
  local_2b0 = (double)(int)local_2c0;
  local_2a8 = (double)((float)(local_2c0._4_4_ + -3) - local_2d0);
  local_290 = 0;
  local_298 = 0;
  local_278 = 0x3f80000000000000;
  local_270 = local_270 & 0xfffffffc;
  local_268 = local_268 & 0xfe;
  local_280 = (&DAT_14c758c60)[(byte)puVar4[0x58]];
  local_264 = 0;
  uStack_25c = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0x3f80000000000000;
  local_220 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  uStack_218 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  local_210 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  uStack_208 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  local_200 = 0;
  local_1fe = 0;
  local_1fc = 0;
  uStack_1f4 = 0x3f80000000000000;
  local_1ec = 1;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1d8 = &PTR_FUN_14aaeb770;
  local_198 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  uStack_190 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  local_188 = 0x3f800000;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0x3ff0000000000000;
  local_168 = 0x3ff0000000000000;
  local_160 = DAT_14ca94e18;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_138 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  uStack_130 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  local_1e8 = 0x3ff0000000000000;
  local_1e0 = 0x3ff0000000000000;
  local_120 = local_308;
  local_b8 = 0;
  local_2a0 = 0x200000000;
  local_2b8 = &PTR_FUN_14aaeb7f0;
  local_b0 = local_3c8;
  local_1d0 = local_2b0;
  local_1c8 = local_2a8;
  local_1a8 = local_288;
  local_1a4 = local_284;
  local_1a0 = local_280;
  local_19c = local_27c;
  if (local_3c8 != (longlong *)0x0) {
    (**(code **)(*local_3c8 + 8))();
  }
  local_a8 = local_3c0;
  local_220 = 0x3ff0000000000000;
  uStack_218 = 0x3ff0000000000000;
  local_230 = 0;
  uStack_228 = 0x3f80000000000000;
  local_270 = local_270 | 2;
  lVar19 = *(longlong *)(local_2c8 + 0x2e0);
  (*(code *)local_2b8[3])(&local_2b8,lVar19);
  if (*(int *)(lVar19 + 0xac) == 1) {
    FUN_14376e4da(lVar19,0);
  }
  if (1 < (int)uStack_2f0) {
    puVar4 = param_1[0x2a];
    local_288 = (&DAT_14c758c60)[(byte)puVar4[0x6a]];
    local_284 = (&DAT_14c758c60)[(byte)puVar4[0x69]];
    local_280 = (&DAT_14c758c60)[(byte)puVar4[0x68]];
    local_27c = (float)(byte)puVar4[0x6b] * 0.003921569;
    FUN_140009b9a(&local_460,&local_2f8);
    FUN_140008f88(&local_b0,&local_460);
    if (local_460 != (undefined **)0x0) {
      (**(code **)(*local_460 + 0x10))();
    }
    lVar19 = *(longlong *)(local_2c8 + 0x2e0);
    (*(code *)local_2b8[1])
              (&local_2b8,lVar19,(float)(int)local_2c0 + local_2cc,
               (float)(local_2c0._4_4_ + -3) - local_2d0);
    if (*(int *)(lVar19 + 0xac) == 1) {
      FUN_14376e4da(lVar19,0);
    }
  }
  lVar19 = local_2c8;
  if (0 < *(int *)(param_1 + 0x22)) {
    iVar10 = *(int *)((longlong)param_1 + 0xcc);
    iVar11 = *(int *)(param_1 + 0x22) + iVar10;
    iVar16 = 0;
    if (iVar11 < 1) {
      iVar11 = 0;
    }
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    ppuVar13 = DAT_14cb0ddf0;
    if (DAT_14cb0ddf8 == 0) {
      ppuVar13 = (undefined **)&DAT_149dfb77a;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x2d);
    if (ppuVar13 != (undefined **)0x0) {
      sVar8 = wcslen((wchar_t *)ppuVar13);
      iVar16 = (int)sVar8;
    }
    local_4d0 = *(longlong *)(lVar19 + 0x2e0);
    local_4d8 = uVar3;
    local_460 = ppuVar13;
    uStack_458._0_4_ = iVar16;
    FUN_140b23708(local_308,&local_460,&local_2cc);
    uVar6 = DAT_14c758c60;
    local_2cc = local_2cc / local_2fc;
    local_2d0 = local_2d0 / local_2fc;
    local_3cc = ((float)local_2c0._4_4_ + -6.0) - (local_2d0 + local_2d0);
    fVar2 = *(float *)(param_1[0x2a] + 0x50);
    local_388 = CONCAT44(DAT_14c758c60,DAT_14c758c60);
    local_380 = DAT_14c758c60;
    local_37c = fVar2 / 100.0;
    local_340 = FUN_1447b4020(param_1[9]);
    local_3e8 = 0;
    uStack_3e0 = 0;
    FUN_140b23a12();
    local_3ec = 0.0;
    fVar22 = 0.0;
    lVar19 = 0;
    do {
      uVar9 = uStack_3e0;
      uVar7 = *(uint *)(param_1 + 0x22);
      if ((int)uVar7 <= lVar19) goto LAB_140b22ea4;
      puVar4 = param_1[0x21];
      lVar20 = (longlong)(int)uStack_3e0;
      uVar7 = (int)uStack_3e0 + 1;
      uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar7);
      if (uStack_3e0._4_4_ < uVar7) {
        FUN_147da062a(&local_3e8,uVar9 & 0xffffffff);
      }
      plVar1 = (longlong *)(puVar4 + (longlong)iVar11 * 0x28 + lVar19 * 0x28);
      *(longlong **)(local_3e8 + lVar20 * 8) = plVar1;
      local_4d8 = *(undefined1 *)(param_1 + 0x2d);
      puVar17 = &DAT_149dfb77a;
      if ((int)plVar1[3] != 0) {
        puVar17 = (undefined2 *)plVar1[2];
      }
      lVar20 = 0;
      while( true ) {
        uVar15 = *(ushort *)((longlong)puVar17 + lVar20);
        uVar9 = (ulonglong)uVar15;
        uVar18 = *(ushort *)((longlong)&DAT_149e06342 + lVar20);
        if (uVar15 != uVar18) break;
        if (uVar15 == 0) goto LAB_140b22d47;
LAB_140b22d17:
        lVar20 = lVar20 + 2;
      }
      if ((uVar18 | uVar15) < 0x80) {
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar12 = (ulonglong)uVar18;
        uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_140b22d17;
      }
      if (uVar15 != uVar18) {
        lVar20 = 0;
        goto LAB_140b22d4c;
      }
LAB_140b22d47:
      lVar20 = 0x10;
LAB_140b22d4c:
      local_460 = *(undefined ***)((longlong)plVar1 + lVar20);
      iVar10 = *(int *)((longlong)plVar1 + lVar20 + 8);
      uStack_458._0_4_ = iVar10 + -1;
      if (iVar10 == 0) {
        uStack_458._0_4_ = 0;
      }
      local_4d0 = *(longlong *)(local_2c8 + 0x2e0);
      FUN_140b23708(local_308,&local_460,&local_4c0);
      if (local_3ec <= local_4c0._0_4_ / local_2fc) {
        local_3ec = local_4c0._0_4_ / local_2fc;
      }
      if (1 < (int)plVar1[3]) {
        local_4d8 = *(undefined1 *)(param_1 + 0x2d);
        local_460 = (undefined **)plVar1[2];
        lVar20 = 0;
        while( true ) {
          uVar15 = *(ushort *)((longlong)local_460 + lVar20);
          uVar9 = (ulonglong)uVar15;
          uVar18 = *(ushort *)((longlong)&DAT_149e06342 + lVar20);
          if (uVar15 != uVar18) break;
          if (uVar15 == 0) goto LAB_140b22e22;
LAB_140b22df2:
          lVar20 = lVar20 + 2;
        }
        if ((uVar18 | uVar15) < 0x80) {
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar12 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_140b22df2;
        }
        lVar20 = 0x10;
        if (uVar15 != uVar18) goto LAB_140b22e28;
LAB_140b22e22:
        local_460 = (undefined **)*plVar1;
        lVar20 = 0;
LAB_140b22e28:
        iVar10 = *(int *)((longlong)plVar1 + lVar20 + 8);
        uStack_458._0_4_ = iVar10 + -1;
        if (iVar10 == 0) {
          uStack_458._0_4_ = 0;
        }
        local_4d0 = *(longlong *)(local_2c8 + 0x2e0);
        FUN_140b23708(local_308,&local_460,&local_3f4);
        fVar21 = local_3f4 / local_2fc + 6.0;
        if (fVar22 <= fVar21) {
          fVar22 = fVar21;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x14);
    uVar7 = *(uint *)(param_1 + 0x22);
LAB_140b22ea4:
    if (0x14 < uVar7) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0e260) && (FUN_144b3d300(&DAT_14cb0e260), DAT_14cb0e260 == -1))
      {
        DAT_14cb0e248 = 0;
        uRam000000014cb0e250 = 0;
        DAT_14cb0e238 = (undefined **)0x0;
        uRam000000014cb0e240 = 0;
        _DAT_14cb0e258 = 0xffb4b4b4;
        atexit(FUN_143774677);
        _Init_thread_footer(&DAT_14cb0e260);
      }
      FUN_140002266(&local_460,L"[%i more matches]",*(int *)(param_1 + 0x22) + -0x14);
      if (DAT_14cb0e238 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      uVar9 = uStack_3e0;
      DAT_14cb0e238 = local_460;
      uRam000000014cb0e240 = CONCAT44(uStack_458._4_4_,(int)uStack_458);
      _DAT_14cb0e258 = *(undefined4 *)(param_1[0x2a] + 0x68);
      lVar19 = (longlong)(int)uStack_3e0;
      uVar7 = (int)uStack_3e0 + 1;
      uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar7);
      if (uStack_3e0._4_4_ < uVar7) {
        FUN_147da062a(&local_3e8,uVar9 & 0xffffffff);
      }
      *(undefined ****)(local_3e8 + lVar19 * 8) = &DAT_14cb0e238;
    }
    local_3f0 = fVar22 + local_3ec;
    fVar22 = (float)(int)uStack_3e0 * local_2d0;
    local_378 = (double)(local_3f0 + 8.0);
    local_388 = CONCAT44(uVar6,uVar6);
    local_380 = uVar6;
    local_3a0 = CONCAT44(0xb,(undefined4)local_3a0);
    lVar19 = *(longlong *)(local_2c8 + 0x2e0);
    local_37c = fVar2 / 100.0;
    local_370 = (double)(fVar22 + 8.0);
    (*(code *)local_3b8[1])
              (&local_3b8,lVar19,(float)(int)local_2c0 + local_2cc + -4.0,
               ((local_2d0 + local_3cc) - fVar22) + -4.0);
    if (*(int *)(lVar19 + 0xac) == 1) {
      FUN_14376e4da(lVar19,0);
    }
    local_420 = (double)(local_3f0 + 8.0);
    local_438 = 0;
    local_448 = 0;
    local_440 = 0;
    local_460 = &PTR_FUN_14a8eb0d0;
    local_410 = 0;
    local_408 = 0;
    uStack_400 = 0;
    local_430 = DAT_14c758e90;
    local_42c = DAT_14c758e90;
    local_428 = DAT_14c758e90;
    local_424 = 0x3f800000;
    lVar19 = *(longlong *)(local_2c8 + 0x2e0);
    uStack_458 = (double)((float)(int)local_2c0 + local_2cc + -4.0);
    local_450 = (double)(((local_3cc + local_2d0) - fVar22) + -4.0);
    local_418 = (double)(fVar22 + 8.0);
    FUN_140b240d4(&local_460,lVar19);
    if (*(int *)(lVar19 + 0xac) == 1) {
      FUN_14376e4da(lVar19,0);
    }
    local_4b0 = &local_3f0;
    local_4a8 = &local_2d0;
    local_4a0 = &local_2c8;
    local_498 = &local_2c0;
    local_490 = &local_2cc;
    local_488 = &local_3cc;
    local_480 = &local_308;
    local_478 = &local_2fc;
    local_470 = &local_3ec;
    uVar9 = uStack_3e0 & 0xffffffff;
    local_4c0 = param_1;
    local_4b8 = &local_3b8;
    local_468 = &local_2b8;
    if (param_1[0x2a][0x54] == '\x01') {
      if (0 < (int)uStack_3e0) {
        uVar12 = uVar9;
        do {
          FUN_140b23aa4(&local_4c0,*(undefined8 *)(local_3e8 + -8 + uVar12 * 8),
                        uVar12 - 1 & 0xffffffff,uVar9);
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar5);
      }
    }
    else if (0 < (int)uStack_3e0) {
      uVar12 = 0;
      do {
        FUN_140b23aa4(&local_4c0,*(undefined8 *)(local_3e8 + uVar12 * 8),uVar12 & 0xffffffff,uVar9);
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
    }
    local_460 = &PTR_FUN_14a8eb0d0;
    if (local_408 != 0) {
      FUN_1400020a8();
    }
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
  }
  puVar17 = &DAT_149dfb77a;
  iVar10 = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar10 = 0;
  }
  else {
    puVar17 = (undefined2 *)param_1[0xf];
  }
  if (*(int *)(param_1 + 0x11) < iVar10) {
    iVar10 = *(int *)(param_1 + 0x11);
  }
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  FUN_14006620a(&local_460,puVar17,iVar10);
  ppuVar13 = (undefined **)&DAT_149dfb77a;
  if ((int)uStack_458 != 0) {
    ppuVar13 = local_460;
  }
  ppuVar14 = (undefined **)&DAT_149dfb77a;
  if (DAT_14cb0ddf8 != 0) {
    ppuVar14 = DAT_14cb0ddf0;
  }
  FUN_140002266(&local_4c0,L"%s%s",ppuVar14,ppuVar13);
  if (local_460 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_4d8 = *(undefined1 *)(param_1 + 0x2d);
  iVar10 = (int)local_4b8 + -1;
  if ((int)local_4b8 == 0) {
    iVar10 = 0;
  }
  local_4d0 = *(undefined8 *)(local_2c8 + 0x2e0);
  local_460 = local_4c0;
  uStack_458 = (double)CONCAT44(uStack_458._4_4_,iVar10);
  FUN_140b23708(local_308,&local_460,&local_2cc,&local_2d0);
  local_2cc = local_2cc / local_2fc;
  local_2d0 = local_2d0 / local_2fc;
  local_288 = DAT_14c75905c;
  local_284 = DAT_14c75905c;
  local_280 = DAT_14c75905c;
  local_27c = 1.0;
  FUN_140056680(&local_3e8,&DAT_149e01f60);
  FUN_140233b1a(&local_460,&local_3e8);
  FUN_140008f88(&local_b0,&local_460);
  if (local_460 != (undefined **)0x0) {
    (**(code **)(*local_460 + 0x10))();
  }
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  lVar19 = *(longlong *)(local_2c8 + 0x2e0);
  (*(code *)local_2b8[1])
            (&local_2b8,lVar19,(float)(int)local_2c0 + local_2cc,
             ((float)local_2c0._4_4_ + -1.0) - local_2d0);
  if (*(int *)(lVar19 + 0xac) == 1) {
    FUN_14376e4da(lVar19,0);
  }
  if (local_4c0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140b2399e(&local_2b8);
  if (local_3c8 != (longlong *)0x0) {
    (**(code **)(*local_3c8 + 0x10))();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (local_2e0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b236e8 FUN_140b236e8 body=31 status=ok
// SIG undefined FUN_140b236e8(void)

void FUN_140b236e8(longlong *param_1,undefined8 param_2,float param_3,float param_4)

{
  param_1[1] = (longlong)(double)param_3;
  param_1[2] = (longlong)(double)param_4;
                    /* WARNING: Could not recover jumptable at 0x000140b23704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 140b23708 FUN_140b23708 body=660 status=ok
// SIG undefined FUN_140b23708(void)

void FUN_140b23708(longlong param_1,ulonglong *param_2,undefined4 *param_3,undefined4 *param_4,
                  char param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  ulonglong *local_118;
  undefined8 *local_110;
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x30) == '\0') || (param_5 == '\0')) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3ff0000000000000;
      local_c0 = 0x3ff0000000000000;
      local_b8 = param_1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_1);
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_78 = *param_2;
      uStack_70 = param_2[1];
      local_118 = (ulonglong *)&local_e0;
      FUN_147d8d986(&local_d8,&local_78,0,2);
      *param_3 = (undefined4)uStack_d0;
      *param_4 = uStack_d0._4_4_;
    }
    else {
      local_118 = &local_78;
      uStack_70 = 0;
      local_78 = local_78 & 0xff00000000000000;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0x3f800000;
      FUN_140324f46(&local_d8,param_1,(float)*(int *)(param_1 + 0x13c),param_1 + 0x140);
      lVar3 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x10) {
        uVar4 = *(undefined8 *)(lVar3 + 0x30);
        plVar5 = *(longlong **)(lVar3 + 0x38);
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x20);
        plVar5 = *(longlong **)(lVar3 + 0x28);
      }
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (*(char *)(param_6 + 0xa0) == '\0') {
        local_100 = *(undefined4 *)(param_6 + 0xb0);
      }
      else {
        local_100 = 0x3f800000;
      }
      local_78 = *param_2;
      uStack_70 = param_2[1];
      local_e8 = local_54;
      local_118 = (ulonglong *)CONCAT44(local_118._4_4_,(int)param_2[1]);
      local_f0 = 2;
      local_f8 = 0xffffffff;
      local_108 = 0;
      local_110 = &local_d8;
      FUN_140499f08(uVar4,&local_e0,&local_78,0);
      *param_3 = local_e0;
      *param_4 = local_dc;
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
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_a0 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2399e FUN_140b2399e body=115 status=ok
// SIG undefined FUN_140b2399e(void)

void FUN_140b2399e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aaeb7f0;
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x41] + 0x10))();
  }
  *param_1 = &PTR_LAB_14aaf76e0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    plVar3 = (longlong *)param_1[0x3b];
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
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 140b23a12 FUN_140b23a12 body=145 status=ok
// SIG undefined FUN_140b23a12(void)

void FUN_140b23a12(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0xa8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0b];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xa8,8);
  }
  uVar2 = 0x7fffffff;
  if (0x14 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 140b23aa4 FUN_140b23aa4 body=1583 status=ok
// SIG undefined FUN_140b23aa4(void)

void FUN_140b23aa4(longlong *param_1,undefined8 *param_2,int param_3,uint param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  longlong lVar16;
  uint uVar17;
  undefined2 *puVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  byte local_a9;
  byte local_a8;
  byte local_a7;
  byte local_a6;
  char local_a5;
  uint local_a4;
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90 [4];
  float local_8c [2];
  float local_84;
  longlong *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0 = *param_1;
  if (*(int *)(param_2 + 3) == 0) {
    puVar18 = &DAT_149dfb77a;
  }
  else {
    puVar18 = (undefined2 *)param_2[2];
  }
  local_a5 = 0x14 < param_4 && param_4 - 1 == param_3;
  lVar16 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar18 + lVar16);
    uVar17 = (uint)uVar9;
    uVar15 = *(ushort *)((longlong)&DAT_149e06342 + lVar16);
    uVar13 = (uint)uVar15;
    if (uVar9 != uVar15) {
      if ((uVar15 | uVar9) < 0x80) {
        uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar9];
        uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar15]) goto LAB_140b23b35;
      }
      iVar14 = uVar17 - uVar13;
      goto LAB_140b23b5f;
    }
    if (uVar9 == 0) break;
LAB_140b23b35:
    lVar16 = lVar16 + 2;
  }
  iVar14 = 0;
LAB_140b23b5f:
  uVar17 = *(uint *)(*(longlong *)(local_a0 + 0x150) + 0x68);
  uVar13 = uVar17 >> 8;
  uVar19 = uVar17 >> 0x10;
  local_a4 = uVar17 >> 0x18;
  local_98 = param_2;
  if (*(int *)(local_a0 + 0xd0) == param_3) {
    fVar1 = *(float *)param_1[3];
    lVar16 = param_1[1];
    *(double *)(lVar16 + 0x40) = (double)*(float *)param_1[2];
    *(double *)(lVar16 + 0x48) = (double)fVar1;
    uVar3 = DAT_14c758d28;
    uVar2 = DAT_14c758c60;
    lVar16 = param_1[1];
    *(undefined4 *)(lVar16 + 0x30) = DAT_14c758c60;
    *(undefined4 *)(lVar16 + 0x34) = uVar3;
    *(undefined4 *)(lVar16 + 0x38) = uVar2;
    *(undefined4 *)(lVar16 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1[1] + 0x1c) = 0;
    lVar16 = *(longlong *)(*(longlong *)param_1[4] + 0x2e0);
    lVar11 = lVar16;
    (**(code **)(*(longlong *)param_1[1] + 8))
              ((longlong *)param_1[1],lVar16,(float)*(int *)param_1[5] + *(float *)param_1[6],
               *(undefined4 *)param_1[7]);
    uVar20 = 0xff;
    if (*(int *)(lVar16 + 0xac) == 1) {
      lVar11 = 0;
      FUN_14376e4da(lVar16,0);
    }
    uVar5 = 0xff;
    uVar6 = 0xff;
    uVar10 = (uint)CONCAT71((int7)((ulonglong)lVar11 >> 8),0xff);
  }
  else {
    uVar20 = *(uint *)(param_2 + 4);
    uVar5 = uVar20 >> 8;
    uVar6 = uVar20 >> 0x10;
    uVar10 = uVar20 >> 0x18;
  }
  puVar4 = local_98;
  if (iVar14 == 0) {
    local_a6 = (byte)uVar20;
    local_a8 = (byte)uVar5;
    local_a9 = (byte)uVar6;
    local_a7 = (byte)uVar10;
  }
  else {
    local_a6 = (byte)uVar17;
    local_a8 = (byte)(uVar17 >> 8);
    local_a9 = (byte)(uVar17 >> 0x10);
    local_a7 = (byte)local_a4;
    uVar17 = uVar20;
    uVar13 = uVar5;
    uVar19 = uVar6;
    local_a4 = uVar10;
  }
  local_c8 = *(undefined1 *)(local_a0 + 0x168);
  local_80 = (longlong *)*local_98;
  iVar14 = 0;
  local_78 = *(int *)(local_98 + 1) + -1;
  if (*(int *)(local_98 + 1) == 0) {
    local_78 = iVar14;
  }
  local_c0 = *(undefined8 *)(*(longlong *)param_1[4] + 0x2e0);
  FUN_140b23708(*(undefined8 *)param_1[8],&local_80,&local_84);
  fVar1 = *(float *)param_1[9];
  if (local_a5 != '\0') {
    fVar23 = *(float *)param_1[2] * 0.5 - (local_84 / fVar1) * 0.5;
    if (*(float *)param_1[10] + 6.0 <= fVar23) {
      fVar23 = *(float *)param_1[10] + 6.0;
    }
    iVar14 = (int)fVar23;
  }
  lVar16 = param_1[0xb];
  uVar2 = (&DAT_14c758c60)[uVar13 & 0xff];
  uVar3 = (&DAT_14c758c60)[uVar17 & 0xff];
  *(undefined4 *)(lVar16 + 0x30) = (&DAT_14c758c60)[uVar19 & 0xff];
  *(undefined4 *)(lVar16 + 0x34) = uVar2;
  *(undefined4 *)(lVar16 + 0x38) = uVar3;
  *(float *)(lVar16 + 0x3c) = (float)(local_a4 & 0xff) * 0.003921569;
  if (*(int *)(puVar4 + 3) == 0) {
    puVar18 = &DAT_149dfb77a;
  }
  else {
    puVar18 = (undefined2 *)puVar4[2];
  }
  lVar16 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar18 + lVar16);
    uVar8 = (ulonglong)uVar9;
    uVar15 = *(ushort *)((longlong)&DAT_149e06342 + lVar16);
    if (uVar9 != uVar15) break;
    if (uVar9 == 0) goto LAB_140b23de9;
LAB_140b23dbb:
    lVar16 = lVar16 + 2;
  }
  if ((uVar15 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar12 = (ulonglong)uVar15;
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_140b23dbb;
  }
  if (uVar9 != uVar15) {
    lVar16 = 0;
    goto LAB_140b23dee;
  }
LAB_140b23de9:
  lVar16 = 0x10;
LAB_140b23dee:
  FUN_140009b9a(&local_80,lVar16 + (longlong)puVar4);
  FUN_140008f88(param_1[0xb] + 0x208,&local_80);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  lVar16 = *(longlong *)(*(longlong *)param_1[4] + 0x2e0);
  (**(code **)(*(longlong *)param_1[0xb] + 8))
            ((longlong *)param_1[0xb],lVar16,
             (float)(iVar14 + *(int *)param_1[5]) + *(float *)param_1[6],*(undefined4 *)param_1[7]);
  if (*(int *)(lVar16 + 0xac) == 1) {
    FUN_14376e4da(lVar16,0);
  }
  local_c8 = *(undefined1 *)(local_a0 + 0x168);
  local_80 = (longlong *)puVar4[2];
  puVar18 = &DAT_149dfb77a;
  plVar7 = local_80;
  if (*(int *)(puVar4 + 3) == 0) {
    plVar7 = (longlong *)&DAT_149dfb77a;
  }
  lVar16 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)plVar7 + lVar16);
    uVar8 = (ulonglong)uVar9;
    uVar15 = *(ushort *)((longlong)&DAT_149e06342 + lVar16);
    if (uVar9 != uVar15) break;
    if (uVar9 == 0) goto LAB_140b23ed9;
LAB_140b23ea9:
    lVar16 = lVar16 + 2;
  }
  if ((uVar15 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar12 = (ulonglong)uVar15;
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_140b23ea9;
  }
  lVar16 = 0x10;
  if (uVar9 != uVar15) goto LAB_140b23ede;
LAB_140b23ed9:
  local_80 = (longlong *)*puVar4;
  lVar16 = 0;
LAB_140b23ede:
  iVar14 = *(int *)((longlong)puVar4 + lVar16 + 8);
  local_78 = iVar14 + -1;
  if (iVar14 == 0) {
    local_78 = 0;
  }
  local_c0 = *(undefined8 *)(*(longlong *)param_1[4] + 0x2e0);
  FUN_140b23708(*(undefined8 *)param_1[8],&local_80,local_8c,local_90);
  fVar22 = (float)*(int *)param_1[5] + *(float *)param_1[6] + 6.0;
  fVar23 = *(float *)param_1[10] + fVar22;
  fVar21 = (local_8c[0] / *(float *)param_1[9] + fVar23) -
           (float)*(int *)(*(longlong *)param_1[4] + 0x40);
  if (0.0 < fVar21) {
    fVar21 = fVar23 - fVar21;
    fVar23 = local_84 / fVar1 + fVar22;
    if (fVar23 <= fVar21) {
      fVar23 = fVar21;
    }
  }
  lVar16 = param_1[0xb];
  uVar2 = (&DAT_14c758c60)[local_a8];
  uVar3 = (&DAT_14c758c60)[local_a6];
  *(undefined4 *)(lVar16 + 0x30) = (&DAT_14c758c60)[local_a9];
  *(undefined4 *)(lVar16 + 0x34) = uVar2;
  *(undefined4 *)(lVar16 + 0x38) = uVar3;
  *(float *)(lVar16 + 0x3c) = (float)local_a7 * 0.003921569;
  if (*(int *)(puVar4 + 3) != 0) {
    puVar18 = (undefined2 *)puVar4[2];
  }
  lVar16 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar18 + lVar16);
    uVar8 = (ulonglong)uVar9;
    uVar15 = *(ushort *)((longlong)&DAT_149e06342 + lVar16);
    if (uVar9 != uVar15) break;
    if (uVar9 == 0) goto LAB_140b24018;
LAB_140b23fed:
    lVar16 = lVar16 + 2;
  }
  if ((uVar15 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar12 = (ulonglong)uVar15;
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_140b23fed;
  }
  lVar16 = 0x10;
  if (uVar9 != uVar15) goto LAB_140b2401a;
LAB_140b24018:
  lVar16 = 0;
LAB_140b2401a:
  FUN_140009b9a(&local_80,(longlong)puVar4 + lVar16);
  FUN_140008f88(param_1[0xb] + 0x208,&local_80);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  lVar16 = *(longlong *)(*(longlong *)param_1[4] + 0x2e0);
  (**(code **)(*(longlong *)param_1[0xb] + 8))
            ((longlong *)param_1[0xb],lVar16,fVar23,*(undefined4 *)param_1[7]);
  if (*(int *)(lVar16 + 0xac) == 1) {
    FUN_14376e4da(lVar16,0);
  }
  *(float *)param_1[7] = *(float *)param_1[7] - *(float *)param_1[3];
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b240d4 FUN_140b240d4 body=471 status=ok
// SIG undefined FUN_140b240d4(void)

void FUN_140b240d4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  double *local_90;
  undefined4 local_88;
  undefined1 local_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = param_1 + 0x58;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1447a8aa0(lVar5,0);
  }
  local_78 = *(double *)(param_1 + 8);
  dStack_70 = *(double *)(param_1 + 0x10);
  local_68 = 0;
  FUN_1417f9682(lVar5,&local_78);
  local_78 = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x40);
  dStack_70 = *(double *)(param_1 + 0x10);
  local_68 = 0;
  FUN_1417f9682(lVar5,&local_78);
  dStack_70 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x48);
  local_78 = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x40);
  local_68 = 0;
  FUN_1417f9682(lVar5,&local_78);
  dStack_70 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x48);
  local_78 = *(double *)(param_1 + 8);
  local_68 = 0;
  FUN_1417f9682(lVar5,&local_78);
  local_78 = 0.0;
  dStack_70 = 0.0;
  local_68 = local_68 & 0xffffffff00000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = CONCAT31(local_88._1_3_,1);
  local_98 = 0x2e;
  local_90 = &local_78;
  uVar1 = FUN_14011db44(param_2,0,0,0);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x60);
  if (0 < (int)*(uint *)(param_1 + 0x60)) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      local_90 = (double *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x50));
      local_80 = 0;
      local_88 = 0;
      local_98 = uVar3;
      FUN_14095857a(uVar1,*(longlong *)(param_1 + 0x58) + lVar5,
                    *(longlong *)(param_1 + 0x58) +
                    ((longlong)((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff)
                     % (longlong)(int)uVar2 & 0xffffffffU) * 0x18,param_1 + 0x30);
      uVar2 = (ulonglong)*(int *)(param_1 + 0x60);
      lVar5 = lVar5 + 0x18;
    } while ((longlong)uVar4 < (longlong)uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b242ac FUN_140b242ac body=983 status=ok
// SIG undefined FUN_140b242ac(void)

void FUN_140b242ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  code *pcVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x10c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x108);
    uStack_78 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b2433a;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x10c) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uStack_78 = *puVar4;
      goto LAB_140b2433a;
    }
  }
  uStack_78 = 0;
LAB_140b2433a:
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b424020;
  pcVar14 = FUN_143e1a772;
  local_a8 = FUN_143e1a772;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_80 = param_1;
  lVar5 = FUN_140b247ea(param_1 + 0x70);
  if (lVar5 == 0) {
    pcVar14 = (code *)0x0;
  }
  else {
    local_c8 = &PTR_LAB_14b424020;
    local_c0 = (undefined4)local_80;
    uStack_bc = local_80._4_4_;
    uStack_b8 = (undefined4)uStack_78;
    uStack_b4 = uStack_78._4_4_;
  }
  local_d8 = (undefined ***)0x0;
  local_e8[0] = pcVar14;
  FUN_140b24684(param_2,&local_f8,local_e8);
  if (local_e8[0] != (code *)0x0) {
    pppuVar7 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar7 = &local_c8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((longlong)(int)uStack_f0 == 0) {
    bVar17 = false;
  }
  else {
    local_100 = local_f8 + (int)uStack_f0;
    plVar1 = (longlong *)(param_1 + 0x60);
    bVar17 = false;
    plVar16 = local_f8;
    do {
      lVar5 = *plVar16;
      lVar6 = *(longlong *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x68);
      lVar15 = (longlong)iVar3;
      if (lVar15 != 0) {
        lVar8 = lVar15 * 0x38;
        lVar9 = lVar6;
        do {
          if ((*(int *)(lVar9 + 0x10) == 0) || (uVar2 = *(uint *)(lVar9 + 0xc), (int)uVar2 < 0)) {
LAB_140b24610:
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar12 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != *(int *)(lVar9 + 0x10))) ||
                 ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_140b24610;
              lVar11 = *plVar12;
            }
          }
          if (lVar11 == lVar5) {
            if (lVar9 != 0) goto LAB_140b245c0;
            break;
          }
          lVar9 = lVar9 + 0x38;
          lVar8 = lVar8 + -0x38;
        } while (lVar8 != 0);
      }
      *(uint *)(param_1 + 0x68) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
        FUN_140b249d6(plVar1,iVar3);
        lVar6 = *plVar1;
      }
      lVar15 = lVar15 * 0x38;
      puVar4 = (undefined8 *)(lVar6 + 0x20 + lVar15);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar6 + 0x10 + lVar15);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(lVar6 + lVar15) = 0;
      ((undefined8 *)(lVar6 + lVar15))[1] = 0;
      *(undefined8 *)(lVar6 + 0x30 + lVar15) = 0;
      lVar6 = *plVar1;
      puVar13 = (uint *)(lVar6 + lVar15 + 0xc);
      if (lVar5 == 0) {
        *puVar13 = 0;
        iVar3 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0xc);
        *puVar13 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar3 = *(int *)(lVar5 + 0x10);
          bVar17 = iVar3 == 0;
          if (bVar17) {
            *(int *)(lVar5 + 0x10) = iVar10;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar3 = iVar10;
          }
        }
      }
      *(int *)(lVar6 + lVar15 + 0x10) = iVar3;
      *(undefined4 *)(*plVar1 + lVar15) = 0xffffffff;
      bVar17 = true;
LAB_140b245c0:
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_100);
  }
  bVar18 = (longlong)uStack_f0 < 0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  if (bVar18) {
    FUN_148952ed2(&local_f8,0);
  }
  if (bVar17) {
    FUN_1410f6e3a(param_1,*(undefined8 *)(param_2 + 0xa8),1);
    FUN_1407e73ea(param_1);
  }
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b24684 FUN_140b24684 body=356 status=ok
// SIG undefined FUN_140b24684(void)

void FUN_140b24684(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    lVar7 = FUN_14081cebe();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) && ((*(byte *)((longlong)param_1 + 0x2e4) & 4) == 0)) &&
       (((cVar6 = (**(code **)(*param_1 + 0x4e8))(param_1), cVar6 != '\0' ||
         ((*(byte *)((longlong)param_1 + 0x2d6) & 2) != 0)) ||
        ((*(byte *)((longlong)param_1 + 0x2e4) & 1) != 0)))) {
      pcVar4 = (code *)*param_3;
      if (pcVar4 != (code *)0x0) {
        plVar9 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar9 = (longlong *)param_3[2];
        }
        local_40 = param_1;
        uVar8 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar4)(uVar8,&local_40);
        if (cVar6 == '\0') goto LAB_140b246ce;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_140b24874(param_2,iVar1);
      }
      *(longlong **)(*param_2 + (longlong)iVar1 * 8) = param_1;
    }
  }
LAB_140b246ce:
  lVar7 = param_1[0x28];
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = param_1[0x27];
    lVar10 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar10);
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
LAB_140b24708:
        FUN_140b24684(lVar3,param_2,param_3);
        bVar5 = DAT_14c950c29;
      }
      else if (lVar3 != 0) goto LAB_140b24708;
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar10);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b247ea FUN_140b247ea body=136 status=ok
// SIG undefined FUN_140b247ea(void)

longlong FUN_140b247ea(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb8a478 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb8a478,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b24874 FUN_140b24874 body=353 status=ok
// SIG undefined FUN_140b24874(void)

void FUN_140b24874(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b248f9;
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
LAB_140b248f9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140b249d6 FUN_140b249d6 body=369 status=ok
// SIG undefined FUN_140b249d6(void)

void FUN_140b249d6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140b24a5b;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140b24a5b:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140b24b48 FUN_140b24b48 body=104 status=ok
// SIG undefined FUN_140b24b48(void)

undefined8 FUN_140b24b48(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_48;
  local_38 = 0;
  local_28 = &PTR_LAB_14aa2ac60;
  local_20 = in_stack_00000028;
  local_48[0] = FUN_14363fa0c;
  FUN_140b24bb2();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b24bb2 FUN_140b24bb2 body=351 status=ok
// SIG undefined FUN_140b24bb2(void)

void FUN_140b24bb2(longlong **param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
                  longlong *param_5)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 1);
  local_41 = *param_1 != (longlong *)0x0;
  (**(code **)(*param_2 + 0x178))(param_2,&local_41,1);
  if (local_41 != '\x01') goto LAB_140b24c40;
  plVar4 = *param_1;
  if ((plVar4 == (longlong *)0x0 & *(byte *)(param_2 + 5)) == 1) {
    if (param_1[1] != (longlong *)0x0) {
      pcVar1 = (code *)*param_5;
      plVar4 = param_5 + 4;
      if ((longlong *)param_5[2] != (longlong *)0x0) {
        plVar4 = (longlong *)param_5[2];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(&local_50,uVar3);
      plVar4 = local_50;
      if (&local_50 == param_1) {
LAB_140b24cf7:
        if (local_50 != (longlong *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
        plVar4 = *param_1;
      }
      else {
        plVar2 = *param_1;
        *param_1 = local_50;
        local_50 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
          goto LAB_140b24cf7;
        }
      }
      if (plVar4 != (longlong *)0x0) goto LAB_140b24c31;
    }
    FUN_14572541c(param_2);
    *param_4 = 0;
  }
  else {
LAB_140b24c31:
    (**(code **)(*plVar4 + 0xa0))(plVar4,param_2,param_3);
  }
LAB_140b24c40:
  if (*param_5 != 0) {
    plVar4 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b24d18 FUN_140b24d18 body=130 status=ok
// SIG undefined FUN_140b24d18(void)

void FUN_140b24d18(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  if (param_1 != 0) {
    lVar1 = param_1;
    do {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_140b24d4d;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    FUN_1404d4eb0(param_1 + 0x440,param_1);
  }
LAB_140b24d4d:
  FUN_14071060c(param_1 + 0xb90,param_1);
  FUN_14071053a(param_1 + 0x828,param_1);
  FUN_140b24d9a(param_1 + 0x1370,param_1);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_144757f48(param_1,0x4000000);
    return;
  }
  return;
}



// FUNCTION 140b24d9a FUN_140b24d9a body=148 status=ok
// SIG undefined FUN_140b24d9a(void)

void FUN_140b24d9a(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  return;
}



// FUNCTION 140b24e2e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b24e34 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b24e3a FUN_140b24e3a body=700 status=ok
// SIG undefined FUN_140b24e3a(void)

undefined8 * FUN_140b24e3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adfc700;
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140b250f6(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140852690(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b250f6 FUN_140b250f6 body=49 status=ok
// SIG undefined FUN_140b250f6(void)

void FUN_140b250f6(longlong param_1,int param_2)

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



// FUNCTION 140b25128 FUN_140b25128 body=112 status=ok
// SIG undefined FUN_140b25128(void)

void FUN_140b25128(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = (int)param_1[3];
  if ((longlong)iVar2 == 0) {
    iVar5 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_140b25198(param_1,iVar5);
    }
  }
  else {
    iVar5 = *(int *)(param_1[2] + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 3) = iVar2 + -1;
    FUN_14479f406(param_1 + 2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar5 * 0x30;
  puVar1 = (undefined8 *)(lVar3 + 0x1c + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  *(undefined4 *)(lVar3 + 0x2c + lVar4) = 1;
  return;
}



// FUNCTION 140b25198 FUN_140b25198 body=275 status=ok
// SIG undefined FUN_140b25198(void)

void FUN_140b25198(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b252ac FUN_140b252ac body=407 status=ok
// SIG undefined FUN_140b252ac(void)

ulonglong FUN_140b252ac(longlong param_1,uint param_2,byte *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  local_58 = param_4;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x38;
    }
    if (((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) ||
       (puVar7 = (ulonglong *)((ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 0x28)),
       puVar7 == (ulonglong *)0x0)) {
      uVar3 = 0;
    }
    else {
      if (*param_3 == 0xff) {
        *param_3 = DAT_14cb7cad0;
        DAT_14cb7cad0 = DAT_14cb7cad0 + 1 & 0x7f;
      }
      puVar6 = puVar7;
      uVar1 = param_2;
      while ((byte)puVar6[2] != *param_3) {
        *(byte *)(puVar6 + 2) = *param_3;
        uVar3 = *puVar6 + local_58;
        if (0x7ffffffffffffffe < uVar3) {
          uVar3 = 0x7fffffffffffffff;
        }
        *puVar6 = uVar3;
        local_4a = (undefined2)uVar1;
        FUN_140b25444(param_1 + 0x60,&local_4a);
        uVar1 = (uint)*(short *)((longlong)puVar6 + 10);
        if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x50) <= (int)uVar1)) break;
        lVar2 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar2 = param_1 + 0x38;
        }
        if (((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) ||
           (puVar6 = (ulonglong *)((ulonglong)uVar1 * 0x30 + *(longlong *)(param_1 + 0x28)),
           puVar6 == (ulonglong *)0x0)) break;
      }
      FUN_140b254aa(param_1,puVar7,param_2,1);
      if ((*(int *)(param_1 + 0xc) != 0) &&
         ((uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 != (undefined8 *)0x0) &&
           ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0xc) &&
            ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            uVar4 = *puVar5;
          }
          else {
            uVar4 = 0;
          }
          FUN_1405f658a(uVar4);
        }
      }
      uVar3 = *puVar7;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


