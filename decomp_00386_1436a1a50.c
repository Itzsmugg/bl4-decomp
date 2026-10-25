// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436a1a50 FUN_1436a1a50 body=96 status=ok
// SIG undefined FUN_1436a1a50(void)

undefined8 * FUN_1436a1a50(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((param_4 != '\0') && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
    if ((*(float *)(lVar2 + 0x38) != 0.0) || (NAN(*(float *)(lVar2 + 0x38)))) {
      puVar3 = (undefined8 *)(lVar2 + (longlong)param_3 * 0x18);
      goto LAB_1436a1a69;
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x1048);
LAB_1436a1a69:
  param_2[2] = puVar3[2];
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1436a1ab0 FUN_1436a1ab0 body=63 status=ok
// SIG undefined FUN_1436a1ab0(void)

undefined8 FUN_1436a1ab0(float param_1,float param_2,double *param_3)

{
  double dVar1;
  float fVar2;
  
  dVar1 = *param_3 * 0.5;
  if (*param_3 * 0.5 <= param_3[5] * 0.5) {
    dVar1 = param_3[5] * 0.5;
  }
  fVar2 = 1e-08;
  if (1e-08 <= param_1 * 0.5) {
    fVar2 = param_1 * 0.5;
  }
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),((float)dVar1 * param_2) / fVar2);
}



// FUNCTION 1436a1aef FUN_1436a1aef body=238 status=ok
// SIG undefined FUN_1436a1aef(void)

undefined8 FUN_1436a1aef(double *param_1,float param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  double *pdVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  if (*(longlong **)(param_3 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x48))();
    if ((*(float *)(lVar1 + 0x38) != 0.0) || (NAN(*(float *)(lVar1 + 0x38)))) {
      lVar3 = (longlong)param_4;
      pdVar5 = (double *)(lVar1 + lVar3 * 0x18);
      pdVar4 = (double *)(lVar1 + lVar3 * 0x18 + 8);
      pdVar2 = (double *)(lVar1 + lVar3 * 0x18 + 0x10);
      goto LAB_1436a1b57;
    }
  }
  pdVar5 = (double *)(param_3 + 0x1048);
  pdVar4 = (double *)(param_3 + 0x1050);
  pdVar2 = (double *)(param_3 + 0x1058);
LAB_1436a1b57:
  fVar7 = (float)(((*pdVar2 - param_1[2]) * (*pdVar2 - param_1[2]) +
                  (*pdVar4 - param_1[1]) * (*pdVar4 - param_1[1]) +
                  (*pdVar5 - *param_1) * (*pdVar5 - *param_1)) * *(double *)(param_3 + 0x888));
  dVar9 = *(double *)(param_3 + 0x858) * 0.5;
  dVar6 = *(double *)(param_3 + 0x830) * 0.5;
  if (dVar6 <= dVar9) {
    dVar6 = dVar9;
  }
  fVar8 = 1.0;
  if (1.0 <= fVar7) {
    fVar8 = fVar7;
  }
  return CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                  ((float)dVar6 * param_2 * (float)dVar6 * param_2) / fVar8);
}



// FUNCTION 1436a1bdd FUN_1436a1bdd body=1183 status=ok
// SIG undefined FUN_1436a1bdd(void)

short * FUN_1436a1bdd(short *param_1,longlong *param_2,longlong param_3,double *param_4,
                     float param_5,uint param_6,float *param_7,byte param_8,float param_9,
                     char param_10)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_e8 [40];
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  ulonglong local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  if ((*(int *)(param_3 + 0x1dd0) != 0) &&
     (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
    uVar3 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x30))();
    lVar7 = *(longlong *)(param_3 + 8);
    if ((-1 < (int)uVar3 && lVar7 != 0) && ((int)uVar3 < *(int *)(lVar7 + 0x10))) {
      param_3 = *(longlong *)(*(longlong *)(lVar7 + 8) + (ulonglong)uVar3 * 8);
    }
  }
  if ((int)param_6 < 0) {
    uVar3 = *(uint *)(param_2 + 1);
    uVar12 = (ulonglong)uVar3;
    if ((uVar12 == 0) || ((*(uint *)(*(longlong *)(param_3 + 8) + 0x54) & 4) == 0))
    goto LAB_1436a1df1;
    if ((param_10 == '\0') || ((*(byte *)(*param_2 + 0x14) & 0x40) == 0)) {
      dVar15 = *(double *)(param_3 + 0x1048) - *param_4;
      dVar17 = *(double *)(param_3 + 0x1050) - param_4[1];
      dVar18 = *(double *)(param_3 + 0x1058) - param_4[2];
      fVar16 = (float)((dVar18 * dVar18 + dVar17 * dVar17 + dVar15 * dVar15) *
                      *(double *)(param_3 + 0x888));
      dVar17 = *(double *)(param_3 + 0x858) * 0.5;
      dVar15 = *(double *)(param_3 + 0x830) * 0.5;
      if (dVar15 <= dVar17) {
        dVar15 = dVar17;
      }
      fVar14 = 1.0;
      if (1.0 <= fVar16) {
        fVar14 = fVar16;
      }
      fVar14 = ((float)dVar15 * param_5 * (float)dVar15 * param_5) / fVar14;
      *param_7 = fVar14;
      if ((int)uVar3 < 1) {
        uVar3 = 0x7fff;
      }
      else {
        uVar13 = uVar12 + 1;
        pbVar5 = (byte *)(*param_2 + uVar12 * 0x18 + -4);
        uVar3 = 0x7fffffff;
        do {
          fVar16 = *(float *)(pbVar5 + -8) * param_9 * 0.5;
          bVar1 = *pbVar5;
          if (fVar14 <= fVar16 * fVar16) {
            bVar9 = 0x7f;
            if ((bVar1 & 0x10) == 0) {
              bVar9 = bVar1 & 0xf;
            }
            uVar3 = (uint)bVar9;
            goto LAB_1436a1dba;
          }
          uVar6 = (uint)(char)(-((bVar1 & 0x10) != 0) | bVar1 & 0xf);
          if ((int)uVar6 <= (int)uVar3) {
            uVar3 = uVar6;
          }
          uVar13 = uVar13 - 1;
          pbVar5 = pbVar5 + -0x18;
        } while (1 < uVar13);
        uVar3 = uVar3 & 0x7f;
LAB_1436a1dba:
        uVar3 = uVar3 << 7 | uVar3;
      }
    }
    else {
      local_b8 = uVar12 * 0x18 + -4;
      local_c0 = 0;
      local_bc = (uint)CONCAT71((int7)((ulonglong)local_b8 >> 8),1);
      uVar3 = 0;
      local_b0 = uVar12;
      do {
        local_a8 = *param_4;
        local_a0 = param_4[1];
        local_98 = param_4[2];
        fVar16 = (float)FUN_1436a1aef(&local_a8,param_5,param_3,local_c0);
        *param_7 = fVar16;
        if ((int)local_b0 < 1) {
          uVar6 = 0x7fffffff;
        }
        else {
          pbVar5 = (byte *)(*param_2 + local_b8);
          uVar6 = 0x7fffffff;
          lVar7 = uVar12 + 1;
          do {
            if (0.0 < *(float *)(pbVar5 + -8)) {
              fVar14 = *(float *)(pbVar5 + -8) * param_9 * 0.5;
              bVar10 = *pbVar5 & 0xf;
              bVar1 = -((*pbVar5 & 0x10) != 0);
              bVar9 = bVar1 | bVar10;
              if (fVar16 <= fVar14 * fVar14) {
                if ((local_c0 & 1) == 0) {
                  uVar6 = (uint)(bVar1 & 0x7f | bVar10);
                  goto LAB_1436a2025;
                }
                uVar6 = (uint)bVar9;
                goto LAB_1436a2016;
              }
              if ((int)(char)bVar9 <= (int)uVar6) {
                uVar6 = (int)(char)bVar9;
              }
            }
            lVar7 = lVar7 + -1;
            pbVar5 = pbVar5 + -0x18;
          } while (1 < lVar7);
        }
        if ((local_c0 & 1) == 0) {
          uVar6 = uVar6 & 0x7f;
LAB_1436a2025:
          sVar4 = -0x80;
        }
        else {
LAB_1436a2016:
          uVar6 = (uVar6 & 0x7f) << 7;
          sVar4 = -0x3f81;
        }
        uVar3 = uVar6 | (int)sVar4 & uVar3;
        local_c0 = 1;
        uVar6 = local_bc & 1;
        local_bc = 0;
      } while (uVar6 != 0);
    }
    uVar2 = (ushort)uVar3 & 0x7f;
    if (uVar2 <= param_8) {
      uVar2 = (ushort)(param_8 & 0x7f);
    }
    uVar8 = (ushort)(uVar3 >> 7) & 0x7f;
    if (uVar8 <= param_8) {
      uVar8 = (ushort)(param_8 & 0x7f);
    }
    sVar4 = uVar2 + uVar8 * 0x80;
  }
  else {
    *param_7 = 0.0;
    if ((longlong)(int)param_2[1] < 1) {
      uVar6 = 0;
      uVar3 = 0x7f;
    }
    else {
      lVar7 = 0;
      uVar3 = 0x7f;
      uVar6 = 0;
      do {
        if (0.0 < *(float *)(*param_2 + 0xc + lVar7)) {
          bVar1 = *(byte *)(*param_2 + 0x14 + lVar7);
          uVar11 = (uint)(char)(-((bVar1 & 0x10) != 0) | bVar1 & 0xf);
          if ((int)uVar11 <= (int)uVar3) {
            uVar3 = uVar11;
          }
          if ((int)uVar6 < (int)uVar11) {
            uVar6 = uVar11;
          }
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)param_2[1] * 0x18 != lVar7);
    }
    if ((int)uVar3 < (int)(char)param_8) {
      uVar3 = (int)(char)param_8;
    }
    if ((int)param_6 < (int)uVar6) {
      uVar6 = param_6;
    }
    if ((int)uVar6 < (int)uVar3) {
      uVar6 = uVar3;
    }
    sVar4 = (short)(uVar6 & 0x7f) + (short)((uVar6 & 0x7f) << 7);
  }
  *param_1 = sVar4 + 0x4000;
LAB_1436a1df1:
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1436a207e FUN_1436a207e body=567 status=ok
// SIG undefined FUN_1436a207e(void)

void FUN_1436a207e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  float local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  lVar7 = DAT_14cb0b518;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar10 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar10 = 1;
  }
  fVar13 = *(float *)(lVar7 + uVar10 * 4);
  if (15.0 <= fVar13) {
    fVar13 = 15.0;
  }
  if (fVar13 <= -15.0) {
    fVar13 = -15.0;
  }
  lVar7 = FUN_140032b16(0);
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x78) + 0x28);
  local_3c = *(undefined4 *)(lVar7 + 0x58);
  local_4b = *(byte *)(param_1 + 0x18) ^ 1;
  local_4c = *(undefined1 *)(lVar7 + 1);
  local_44 = 0x7f7fffff00000000;
  local_38 = 0;
  local_34 = 0;
  local_4a = local_4b;
  local_49 = local_4b;
  local_48 = fVar13;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_58);
  plVar11 = (longlong *)(param_1 + 0x10);
  if (plVar11 != &local_58) {
    lVar7 = *plVar11;
    *plVar11 = local_58;
    local_58 = 0;
    if (lVar7 == 0) goto LAB_1436a2241;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar12 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar7 = local_58;
  if (local_58 != 0) {
    LOCK();
    puVar1 = (uint *)(local_58 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_58 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_58 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar12 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
LAB_1436a2241:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a22b6 FUN_1436a22b6 body=652 status=ok
// SIG undefined FUN_1436a22b6(void)

void FUN_1436a22b6(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  longlong local_120;
  undefined1 local_118 [248];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar3 = DAT_14ca96500;
  if (param_2 == 1) {
joined_r0x0001436a2504:
    if (bVar3 != 0) {
LAB_1436a2319:
      if (*(char *)(param_1 + 8) != '\0') goto LAB_1436a23bc;
    }
  }
  else if (((2 < param_2) &&
           (lVar4 = (ulonglong)DAT_14ca85550 * 0x3c,
           *(longlong *)(&DAT_14ca814b0 + lVar4) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc)) {
    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar4 + 3) & 0x10) != 0) {
      bVar3 = *(byte *)((longlong)&DAT_14ca814c8 + lVar4 + 3) & 0x20;
      goto joined_r0x0001436a2504;
    }
    goto LAB_1436a2319;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) || (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_140ee1f3a(local_118);
    FUN_140ee1f64(param_2,local_118,param_1);
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 == 0) {
      plVar7 = (longlong *)(param_1 + 0x28);
      lVar4 = FUN_145fa089e();
      local_130 = 1;
      local_138 = 2;
      (**(code **)(*DAT_14ca83900 + 0x138))
                (DAT_14ca83900,&local_120,local_118,*(undefined8 *)(lVar4 + 0x48));
      if (plVar7 != &local_120) {
        lVar4 = *plVar7;
        *plVar7 = local_120;
        local_120 = 0;
        if (lVar4 == 0) goto LAB_1436a23bc;
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
      lVar4 = local_120;
      if (local_120 != 0) {
        LOCK();
        puVar1 = (uint *)(local_120 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_120 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_120 + 0xd);
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
    }
    else if (DAT_14ca85169 == '\0') {
      FUN_14002049c(&DAT_14ca85100,1);
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,lVar4,local_118);
      FUN_14002049c(&DAT_14ca85100,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,lVar4,local_118);
    }
  }
LAB_1436a23bc:
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a254f FUN_1436a254f body=47 status=ok
// SIG undefined FUN_1436a254f(void)

void FUN_1436a254f(void)

{
  DAT_14cb053e8 = &PTR_FUN_14aa813f0;
  FUN_144725486(&DAT_14cb053e8);
  FUN_1463ff73c(&DAT_14cb053e8);
  return;
}



// FUNCTION 1436a258a FUN_1436a258a body=47 status=ok
// SIG undefined FUN_1436a258a(void)

void FUN_1436a258a(void)

{
  DAT_14cb05398 = &PTR_FUN_14aa81450;
  FUN_144725486(&DAT_14cb05398);
  FUN_1463ff804(&DAT_14cb05398);
  return;
}



// FUNCTION 1436a25d1 FUN_1436a25d1 body=224 status=ok
// SIG undefined FUN_1436a25d1(void)

void FUN_1436a25d1(longlong param_1,byte param_2)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  
  uVar3 = (ulonglong)(param_2 ^ 1) << 0xc | 0x200;
  uVar4 = 0xfffffffffffdffef;
  if (param_2 != 0) {
    uVar4 = 0xffffffffffffefef;
  }
  lVar6 = 0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    lVar6 = lVar6 * 0x70;
    lVar1 = param_1 + lVar6;
    *(ulonglong *)(param_1 + 8 + lVar6) = (*(ulonglong *)(param_1 + 8 + lVar6) | uVar3) & uVar4;
    *(ulonglong *)(param_1 + 0x18 + lVar6) =
         (*(ulonglong *)(param_1 + 0x18 + lVar6) | uVar3) & uVar4;
    *(ulonglong *)(param_1 + 0x28 + lVar6) =
         (*(ulonglong *)(param_1 + 0x28 + lVar6) | uVar3) & uVar4;
    *(ulonglong *)(param_1 + 0x38 + lVar6) =
         (*(ulonglong *)(param_1 + 0x38 + lVar6) | uVar3) & uVar4;
    *(ulonglong *)(param_1 + 0x48 + lVar6) =
         (*(ulonglong *)(param_1 + 0x48 + lVar6) | uVar3) & uVar4;
    if (*(char *)(param_1 + 4 + lVar6) == '\x02') {
      *(undefined1 *)(lVar1 + 4) = 0x25;
    }
    if (*(char *)(lVar1 + 0x14) == '\x02') {
      *(undefined1 *)(lVar1 + 0x14) = 0x25;
    }
    if (*(char *)(lVar1 + 0x24) == '\x02') {
      *(undefined1 *)(lVar1 + 0x24) = 0x25;
    }
    if (*(char *)(lVar1 + 0x34) == '\x02') {
      *(undefined1 *)(lVar1 + 0x34) = 0x25;
    }
    if (*(char *)(lVar1 + 0x44) == '\x02') {
      *(undefined1 *)(lVar1 + 0x44) = 0x25;
    }
    lVar6 = 1;
    bVar2 = false;
  } while (bVar5);
  return;
}



// FUNCTION 1436a26b1 FUN_1436a26b1 body=69 status=ok
// SIG undefined FUN_1436a26b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a26b1(void)

{
  _DAT_14cb02df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a26f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02e00,1);
  return;
}



// FUNCTION 1436a2732 FUN_1436a2732 body=69 status=ok
// SIG undefined FUN_1436a2732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2732(void)

{
  _DAT_14cb03168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03170,1);
  return;
}



// FUNCTION 1436a2777 FUN_1436a2777 body=69 status=ok
// SIG undefined FUN_1436a2777(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2777(void)

{
  _DAT_14cb03180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a27b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03188,1);
  return;
}



// FUNCTION 1436a27bc FUN_1436a27bc body=69 status=ok
// SIG undefined FUN_1436a27bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a27bc(void)

{
  _DAT_14cb03198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a27fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb031a0,1);
  return;
}



// FUNCTION 1436a2801 FUN_1436a2801 body=69 status=ok
// SIG undefined FUN_1436a2801(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2801(void)

{
  _DAT_14cb031b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb031b8,1);
  return;
}



// FUNCTION 1436a2846 FUN_1436a2846 body=69 status=ok
// SIG undefined FUN_1436a2846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2846(void)

{
  _DAT_14cb031c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb031d0,1);
  return;
}



// FUNCTION 1436a288b FUN_1436a288b body=69 status=ok
// SIG undefined FUN_1436a288b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a288b(void)

{
  _DAT_14cb031e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a28cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb031e8,1);
  return;
}



// FUNCTION 1436a28d0 FUN_1436a28d0 body=69 status=ok
// SIG undefined FUN_1436a28d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a28d0(void)

{
  _DAT_14cb031f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03200,1);
  return;
}



// FUNCTION 1436a2915 FUN_1436a2915 body=69 status=ok
// SIG undefined FUN_1436a2915(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2915(void)

{
  _DAT_14cb03210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03218,1);
  return;
}



// FUNCTION 1436a295a FUN_1436a295a body=69 status=ok
// SIG undefined FUN_1436a295a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a295a(void)

{
  _DAT_14cb03228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a299c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03230,1);
  return;
}



// FUNCTION 1436a299f FUN_1436a299f body=69 status=ok
// SIG undefined FUN_1436a299f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a299f(void)

{
  _DAT_14cb03240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a29e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03248,1);
  return;
}



// FUNCTION 1436a29e4 FUN_1436a29e4 body=69 status=ok
// SIG undefined FUN_1436a29e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a29e4(void)

{
  _DAT_14cb03258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03260,1);
  return;
}



// FUNCTION 1436a2a29 FUN_1436a2a29 body=69 status=ok
// SIG undefined FUN_1436a2a29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2a29(void)

{
  _DAT_14cb03270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03278,1);
  return;
}



// FUNCTION 1436a2a6e FUN_1436a2a6e body=69 status=ok
// SIG undefined FUN_1436a2a6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2a6e(void)

{
  _DAT_14cb03288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03290,1);
  return;
}



// FUNCTION 1436a2ab3 FUN_1436a2ab3 body=69 status=ok
// SIG undefined FUN_1436a2ab3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2ab3(void)

{
  _DAT_14cb032a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb032a8,1);
  return;
}



// FUNCTION 1436a2af8 FUN_1436a2af8 body=69 status=ok
// SIG undefined FUN_1436a2af8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2af8(void)

{
  _DAT_14cb032b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb032c0,1);
  return;
}



// FUNCTION 1436a2b3d FUN_1436a2b3d body=69 status=ok
// SIG undefined FUN_1436a2b3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2b3d(void)

{
  _DAT_14cb032d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb032d8,1);
  return;
}



// FUNCTION 1436a2b82 FUN_1436a2b82 body=69 status=ok
// SIG undefined FUN_1436a2b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2b82(void)

{
  _DAT_14cb032e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb032f0,1);
  return;
}



// FUNCTION 1436a2bc7 FUN_1436a2bc7 body=69 status=ok
// SIG undefined FUN_1436a2bc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2bc7(void)

{
  _DAT_14cb03300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03308,1);
  return;
}



// FUNCTION 1436a2c0c FUN_1436a2c0c body=69 status=ok
// SIG undefined FUN_1436a2c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2c0c(void)

{
  _DAT_14cb03318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03320,1);
  return;
}



// FUNCTION 1436a2c51 FUN_1436a2c51 body=69 status=ok
// SIG undefined FUN_1436a2c51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2c51(void)

{
  _DAT_14cb03330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03338,1);
  return;
}



// FUNCTION 1436a2c96 FUN_1436a2c96 body=69 status=ok
// SIG undefined FUN_1436a2c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2c96(void)

{
  _DAT_14cb03348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03350,1);
  return;
}



// FUNCTION 1436a2cdb FUN_1436a2cdb body=69 status=ok
// SIG undefined FUN_1436a2cdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2cdb(void)

{
  _DAT_14cb03360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2d1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03368,1);
  return;
}



// FUNCTION 1436a2d20 FUN_1436a2d20 body=69 status=ok
// SIG undefined FUN_1436a2d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2d20(void)

{
  _DAT_14cb03378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03380,1);
  return;
}



// FUNCTION 1436a2d65 FUN_1436a2d65 body=69 status=ok
// SIG undefined FUN_1436a2d65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2d65(void)

{
  _DAT_14cb03390 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03398,1);
  return;
}



// FUNCTION 1436a2daa FUN_1436a2daa body=69 status=ok
// SIG undefined FUN_1436a2daa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2daa(void)

{
  _DAT_14cb033a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb033b0,1);
  return;
}



// FUNCTION 1436a2def FUN_1436a2def body=69 status=ok
// SIG undefined FUN_1436a2def(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2def(void)

{
  _DAT_14cb033c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb033c8,1);
  return;
}



// FUNCTION 1436a2e34 FUN_1436a2e34 body=69 status=ok
// SIG undefined FUN_1436a2e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2e34(void)

{
  _DAT_14cb033d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb033e0,1);
  return;
}



// FUNCTION 1436a2e79 FUN_1436a2e79 body=69 status=ok
// SIG undefined FUN_1436a2e79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2e79(void)

{
  _DAT_14cb033f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb033f8,1);
  return;
}



// FUNCTION 1436a2ebe FUN_1436a2ebe body=69 status=ok
// SIG undefined FUN_1436a2ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2ebe(void)

{
  _DAT_14cb03408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03410,1);
  return;
}



// FUNCTION 1436a2f03 FUN_1436a2f03 body=69 status=ok
// SIG undefined FUN_1436a2f03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2f03(void)

{
  _DAT_14cb03420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03428,1);
  return;
}



// FUNCTION 1436a2f48 FUN_1436a2f48 body=69 status=ok
// SIG undefined FUN_1436a2f48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2f48(void)

{
  _DAT_14cb03438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03440,1);
  return;
}



// FUNCTION 1436a2f8d FUN_1436a2f8d body=69 status=ok
// SIG undefined FUN_1436a2f8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2f8d(void)

{
  _DAT_14cb03448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a2fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03450,1);
  return;
}



// FUNCTION 1436a2fd2 FUN_1436a2fd2 body=69 status=ok
// SIG undefined FUN_1436a2fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a2fd2(void)

{
  _DAT_14cb03460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a3014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03468,1);
  return;
}



// FUNCTION 1436a3017 FUN_1436a3017 body=69 status=ok
// SIG undefined FUN_1436a3017(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a3017(void)

{
  _DAT_14cb03478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a3059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03480,1);
  return;
}



// FUNCTION 1436a305c FUN_1436a305c body=69 status=ok
// SIG undefined FUN_1436a305c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a305c(void)

{
  _DAT_14cb03488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a309e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb03490,1);
  return;
}



// FUNCTION 1436a30a1 FUN_1436a30a1 body=47 status=ok
// SIG undefined FUN_1436a30a1(void)

void FUN_1436a30a1(void)

{
  DAT_14cb05598 = &PTR_FUN_14aa814b0;
  FUN_144725486(&DAT_14cb05598);
  FUN_14006f2ae(&DAT_14cb05598);
  return;
}



// FUNCTION 1436a30d0 FUN_1436a30d0 body=20 status=ok
// SIG undefined FUN_1436a30d0(void)

undefined8 FUN_1436a30d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436a30dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1436a30e4 FUN_1436a30e4 body=7436 status=ok
// SIG undefined FUN_1436a30e4(void)

/* WARNING: Removing unreachable block (ram,0x0001436a33cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a30e4(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar78;
  double dVar79;
  undefined1 auVar80 [12];
  undefined1 auVar81 [12];
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  double dVar101;
  double dVar102;
  double dVar103;
  double dVar104;
  double dVar105;
  double dVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  double dVar110;
  double dVar111;
  double dVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar117;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  uint uVar127;
  double dVar128;
  double dVar129;
  undefined1 auVar124 [16];
  uint uVar126;
  undefined1 auVar125 [16];
  double dVar130;
  double dVar131;
  undefined1 auVar132 [16];
  double dVar133;
  double dVar134;
  double dVar135;
  double dVar136;
  double dVar137;
  double dVar138;
  double dVar139;
  double dVar140;
  undefined4 uVar141;
  undefined4 uVar142;
  undefined4 uVar143;
  undefined4 uVar144;
  double dStack_3a0;
  undefined8 local_388;
  double dStack_360;
  double dStack_340;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double dStack_2f0;
  double dStack_2b0;
  double dStack_290;
  double dStack_170;
  double dStack_160;
  double dStack_150;
  double dStack_140;
  double dVar2;
  double dVar4;
  double dVar6;
  
  *(double *)(param_1 + 0xb58) = param_2[2];
  dVar137 = param_2[1];
  *(double *)(param_1 + 0xb48) = *param_2;
  *(double *)(param_1 + 0xb50) = dVar137;
  dVar100 = cos((param_3[1] * 3.1415927410125732) / 180.0);
  dVar101 = sin((param_3[1] * 3.1415927410125732) / 180.0);
  dVar102 = sin((param_3[1] * 3.1415927410125732) / 180.0);
  dVar103 = cos((param_3[1] * 3.1415927410125732) / 180.0);
  dVar104 = cos((*param_3 * 3.1415927410125732) / 180.0);
  dVar105 = sin((*param_3 * 3.1415927410125732) / 180.0);
  dVar106 = sin((*param_3 * 3.1415927410125732) / 180.0);
  dVar107 = cos((*param_3 * 3.1415927410125732) / 180.0);
  dVar108 = dVar105 * 0.0;
  dVar116 = dVar104 * 0.0;
  dVar133 = (dVar103 * dVar107 - dVar102 * 0.0) + dVar108 + 0.0;
  dVar135 = (dVar103 * 0.0 - dVar102 * 1.0) + 0.0 + 0.0;
  dVar137 = (dVar103 * -dVar106 - dVar102 * 0.0) + dVar116 + 0.0;
  dVar102 = (dVar103 * 0.0 - dVar102 * 0.0) + 0.0 + 0.0;
  dVar103 = dVar100 * 0.0 + dVar107 * dVar101 + dVar108 + 0.0;
  dVar113 = dVar100 * 1.0 + dVar101 * 0.0 + 0.0 + 0.0;
  dVar114 = dVar100 * 0.0 + dVar101 * -dVar106 + dVar116 + 0.0;
  dVar111 = dVar100 * 0.0 + dVar101 * 0.0 + 0.0 + 0.0;
  dVar140 = dVar107 * 0.0 + 0.0;
  dVar105 = dVar105 + dVar140;
  dVar140 = dVar140 + dVar108;
  dVar107 = dVar106 * -0.0 + 0.0;
  dVar104 = dVar104 + dVar107;
  dVar107 = dVar107 + dVar116;
  dVar108 = cos((param_3[2] * 3.1415927410125732) / 180.0);
  dVar116 = sin((param_3[2] * 3.1415927410125732) / 180.0);
  dVar109 = sin((param_3[2] * 3.1415927410125732) / 180.0);
  dVar110 = cos((param_3[2] * 3.1415927410125732) / 180.0);
  dVar122 = dVar102 * 0.0 + dVar137 * 0.0 + dVar135 * 0.0 + dVar133 * 1.0;
  dVar128 = dVar102 * 0.0 + dVar137 * -dVar116 + dVar135 * dVar110 + dVar133 * 0.0;
  dVar100 = dVar102 * 0.0 + dVar108 * dVar137 + dVar135 * dVar109 + dVar133 * 0.0;
  dVar101 = dVar102 * 1.0 + dVar137 * 0.0 + dVar135 * 0.0 + dVar133 * 0.0;
  dVar135 = dVar111 * 0.0 + dVar114 * 0.0 + dVar113 * 0.0 + dVar103 * 1.0;
  dVar119 = dVar111 * 0.0 + dVar114 * -dVar116 + dVar113 * dVar110 + dVar103 * 0.0;
  dVar106 = dVar111 * 0.0 + dVar108 * dVar114 + dVar113 * dVar109 + dVar103 * 0.0;
  dVar137 = dVar111 * 1.0 + dVar114 * 0.0 + dVar113 * 0.0 + dVar103 * 0.0;
  auVar71._8_4_ = SUB84(dVar137,0);
  auVar71._0_8_ = dVar106;
  auVar71._12_4_ = (int)((ulonglong)dVar137 >> 0x20);
  dVar111 = dVar104 * 0.0 + dVar105 * 1.0 + 0.0 + 0.0;
  dVar133 = dVar104 * -dVar116 + dVar105 * 0.0 + dVar110 * 0.0 + 0.0;
  dVar113 = dVar108 * dVar104 + dVar105 * 0.0 + dVar109 * 0.0 + 0.0;
  dVar114 = dVar104 * 0.0 + dVar105 * 0.0 + 0.0 + 0.0;
  dVar137 = dVar107 * 0.0 + dVar140 * 1.0 + 0.0 + 0.0;
  dVar102 = -dVar116 * dVar107 + dVar140 * 0.0 + dVar110 * 0.0 + 0.0;
  dVar104 = dVar108 * dVar107 + dVar140 * 0.0 + dVar109 * 0.0 + 0.0;
  dVar103 = dVar107 * 0.0 + dVar140 * 0.0 + 0.0 + 1.0;
  dVar123 = dVar101 * 0.0 + dVar100 * 0.0 + dVar128 * 1.0 + dVar122 * 0.0;
  dVar129 = dVar101 * 0.0 + dVar100 * 1.0 + dVar128 * 0.0 + dVar122 * 0.0;
  dVar49 = dVar101 * 0.0 + dVar100 * 0.0 + dVar128 * 0.0 + dVar122 * 1.0;
  dVar51 = dVar101 * 1.0 + dVar100 * 0.0 + dVar128 * 0.0 + dVar122 * 0.0;
  dStack_3a0 = auVar71._8_8_;
  dVar117 = dStack_3a0 * 0.0 + dVar106 * 0.0 + dVar119 * 1.0 + dVar135 * 0.0;
  dVar120 = dStack_3a0 * 0.0 + dVar106 * 1.0 + dVar119 * 0.0 + dVar135 * 0.0;
  dVar68 = dStack_3a0 * 0.0 + dVar106 * 0.0 + dVar119 * 0.0 + dVar135 * 1.0;
  dVar69 = dStack_3a0 * 1.0 + dVar106 * 0.0 + dVar119 * 0.0 + dVar135 * 0.0;
  uVar143 = (undefined4)((ulonglong)dVar69 >> 0x20);
  dVar112 = dVar114 * 0.0 + dVar113 * 0.0 + dVar133 * 1.0 + dVar111 * 0.0;
  dVar115 = dVar114 * 0.0 + dVar113 * 1.0 + dVar133 * 0.0 + dVar111 * 0.0;
  uStack_334 = (undefined4)((ulonglong)dVar112 >> 0x20);
  uStack_330 = SUB84(dVar115,0);
  uStack_32c = (undefined4)((ulonglong)dVar115 >> 0x20);
  dVar59 = dVar114 * 0.0 + dVar113 * 0.0 + dVar133 * 0.0 + dVar111 * 1.0;
  dVar61 = dVar114 * 1.0 + dVar113 * 0.0 + dVar133 * 0.0 + dVar111 * 0.0;
  uVar142 = (undefined4)((ulonglong)dVar61 >> 0x20);
  dVar50 = dVar103 * 0.0 + dVar104 * 0.0 + dVar102 * 1.0 + dVar137 * 0.0;
  dVar52 = dVar103 * 0.0 + dVar104 * 1.0 + dVar102 * 0.0 + dVar137 * 0.0;
  uVar141 = (undefined4)((ulonglong)dVar52 >> 0x20);
  dVar41 = dVar103 * 0.0 + dVar104 * 0.0 + dVar102 * 0.0 + dVar137 * 1.0;
  dVar43 = dVar103 * 1.0 + dVar104 * 0.0 + dVar102 * 0.0 + dVar137 * 0.0;
  auVar35._8_4_ = SUB84(dVar43,0);
  auVar35._0_8_ = dVar41;
  auVar35._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  local_388 = -param_2[1];
  uVar144 = (undefined4)((ulonglong)dVar120 >> 0x20);
  auVar21._8_4_ = SUB84(dVar51,0);
  auVar21._0_8_ = dVar49;
  auVar21._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  auVar72._8_4_ = SUB84(dVar120,0);
  auVar72._0_8_ = dVar117;
  auVar72._12_4_ = uVar144;
  auVar63._8_4_ = SUB84(dVar69,0);
  auVar63._0_8_ = dVar68;
  auVar63._12_4_ = uVar143;
  auVar45._8_4_ = SUB84(dVar52,0);
  auVar45._0_8_ = dVar50;
  auVar45._12_4_ = uVar141;
  dVar106 = dVar50 * 0.0;
  dVar111 = dVar52 * 0.0;
  dStack_360 = auVar35._8_8_;
  dVar113 = dVar41 * 0.0;
  dVar114 = dStack_360 * 0.0;
  dVar101 = dVar120 + dVar129 * 0.0 + dVar115 * 0.0 + dVar111;
  auVar56._8_4_ = SUB84(dVar61,0);
  auVar56._0_8_ = dVar59;
  auVar56._12_4_ = uVar142;
  dVar100 = dVar51 * 0.0 + dVar69 * 0.0 + dVar61 + dVar114;
  dVar102 = *param_2;
  dVar137 = *param_2;
  auVar124._8_4_ = (undefined4)local_388;
  auVar124._0_8_ = local_388;
  auVar124._12_4_ = local_388._4_4_;
  dVar103 = param_2[2];
  dVar104 = param_2[2];
  *(double *)(param_1 + 0x4b0) = dVar123 + dVar117 * 0.0 + dVar112 * 0.0 + dVar106;
  *(double *)(param_1 + 0x4b8) = dVar129 + dVar120 * 0.0 + dVar115 * 0.0 + dVar111;
  *(double *)(param_1 + 0x4c0) = dVar49 + dVar68 * 0.0 + dVar59 * 0.0 + dVar113;
  *(double *)(param_1 + 0x4c8) = dVar51 + dVar69 * 0.0 + dVar61 * 0.0 + dVar114;
  auVar22._8_4_ = SUB84(dVar101,0);
  auVar22._0_8_ = dVar117 + dVar123 * 0.0 + dVar112 * 0.0 + dVar106;
  auVar22._12_4_ = (int)((ulonglong)dVar101 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x4d0) = auVar22;
  *(double *)(param_1 + 0x4e0) = dVar68 + dVar49 * 0.0 + dVar59 * 0.0 + dVar113;
  *(double *)(param_1 + 0x4e8) = dVar69 + dVar51 * 0.0 + dVar61 * 0.0 + dVar114;
  *(double *)(param_1 + 0x4f0) = dVar123 * 0.0 + dVar117 * 0.0 + dVar112 + dVar106;
  *(double *)(param_1 + 0x4f8) = dVar129 * 0.0 + dVar120 * 0.0 + dVar115 + dVar111;
  auVar14._8_4_ = SUB84(dVar100,0);
  auVar14._0_8_ = dVar49 * 0.0 + dVar68 * 0.0 + dVar59 + dVar113;
  auVar14._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x500) = auVar14;
  *(double *)(param_1 + 0x510) =
       ((local_388 * dVar117 - dVar102 * dVar123) - dVar103 * dVar112) + dVar50;
  *(double *)(param_1 + 0x518) =
       ((auVar124._8_8_ * dVar120 - dVar137 * dVar129) - dVar104 * dVar115) + dVar52;
  *(double *)(param_1 + 0x520) =
       ((local_388 * dVar68 - dVar102 * dVar49) - dVar103 * dVar59) + dVar41;
  *(double *)(param_1 + 0x528) =
       ((auVar124._8_8_ * dVar69 - dVar137 * dVar51) - dVar104 * dVar61) + dStack_360;
  dVar102 = (param_3[1] * 3.1415927410125732) / 180.0;
  dVar137 = *param_3;
  dVar101 = cos(dVar102);
  dVar113 = sin(dVar102);
  dVar114 = sin(dVar102);
  dVar106 = cos(dVar102);
  dVar137 = (dVar137 * 3.1415927410125732) / 180.0;
  dVar103 = cos(dVar137);
  dVar104 = sin(dVar137);
  dVar111 = sin(dVar137);
  dVar107 = cos(dVar137);
  dVar109 = dVar104 * 0.0;
  dVar110 = dVar103 * 0.0;
  dVar105 = dVar107 * 0.0 + 0.0;
  dVar104 = dVar104 + dVar105;
  dVar105 = dVar105 + dVar109;
  dVar100 = dVar111 * -0.0 + 0.0;
  dVar103 = dVar103 + dVar100;
  dVar100 = dVar100 + dVar110;
  dVar137 = (dVar106 * dVar107 - dVar114 * 0.0) + dVar109 + 0.0;
  dVar102 = (dVar106 * 0.0 - dVar114 * 1.0) + 0.0 + 0.0;
  dVar108 = (dVar106 * -dVar111 - dVar114 * 0.0) + dVar110 + 0.0;
  dVar114 = (dVar106 * 0.0 - dVar114 * 0.0) + 0.0 + 0.0;
  dVar119 = dVar114 * 0.0 + dVar108 * 0.0 + dVar102 * 0.0 + dVar137 * 1.0;
  dVar122 = dVar114 * 0.0 + dVar108 * -0.0 + dVar102 * 1.0 + dVar137 * 0.0;
  dVar116 = dVar114 * 0.0 + dVar108 * 1.0 + dVar102 * 0.0 + dVar137 * 0.0;
  dVar108 = dVar114 * 1.0 + dVar108 * 0.0 + dVar102 * 0.0 + dVar137 * 0.0;
  dVar137 = dVar101 * 0.0 + dVar107 * dVar113 + dVar109 + 0.0;
  dVar102 = dVar101 * 1.0 + dVar113 * 0.0 + 0.0 + 0.0;
  dVar111 = dVar101 * 0.0 + dVar113 * -dVar111 + dVar110 + 0.0;
  dVar101 = dVar101 * 0.0 + dVar113 * 0.0 + 0.0 + 0.0;
  dVar114 = dVar101 * 0.0 + dVar111 * 0.0 + dVar102 * 0.0 + dVar137 * 1.0;
  dVar106 = dVar101 * 0.0 + dVar111 * -0.0 + dVar102 * 1.0 + dVar137 * 0.0;
  dVar107 = dVar101 * 0.0 + dVar111 * 1.0 + dVar102 * 0.0 + dVar137 * 0.0;
  dVar111 = dVar101 * 1.0 + dVar111 * 0.0 + dVar102 * 0.0 + dVar137 * 0.0;
  dVar133 = dVar103 * 0.0 + dVar104 * 1.0 + 0.0;
  dVar135 = dVar103 * -0.0 + dVar104 * 0.0 + 0.0;
  dVar102 = dVar104 * 0.0 + 0.0;
  dVar137 = dVar103 * 1.0 + dVar102;
  dVar102 = dVar103 * 0.0 + dVar102;
  dVar109 = dVar100 * 0.0 + dVar105 * 1.0 + 0.0;
  dVar110 = dVar100 * -0.0 + dVar105 * 0.0 + 0.0;
  dVar101 = dVar105 * 0.0 + 0.0;
  dVar113 = dVar111 * 0.0 + dVar107 * 1.0 + dVar106 * 0.0 + dVar114 * 0.0;
  dVar104 = dVar102 * 1.0 + dVar137 * 0.0 + dVar135 * 0.0 + dVar133 * 0.0;
  dVar103 = dVar100 * 1.0 + dVar101 + 0.0;
  dVar100 = dVar100 * 0.0 + dVar101 + 1.0;
  dVar101 = dVar100 * 1.0 + dVar103 * 0.0 + dVar110 * 0.0 + dVar109 * 0.0;
  *(double *)(param_1 + 0x6b0) = dVar108 * 0.0 + dVar116 * 0.0 + dVar122 * 1.0 + dVar119 * 0.0;
  *(double *)(param_1 + 0x6b8) = dVar108 * 0.0 + dVar116 * 1.0 + dVar122 * 0.0 + dVar119 * 0.0;
  *(double *)(param_1 + 0x6c0) = dVar108 * 0.0 + dVar116 * 0.0 + dVar122 * 0.0 + dVar119 * 1.0;
  *(double *)(param_1 + 0x6c8) = dVar108 * 1.0 + dVar116 * 0.0 + dVar122 * 0.0 + dVar119 * 0.0;
  auVar30._8_4_ = SUB84(dVar113,0);
  auVar30._0_8_ = dVar111 * 0.0 + dVar107 * 0.0 + dVar106 * 1.0 + dVar114 * 0.0;
  auVar30._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x6d0) = auVar30;
  *(double *)(param_1 + 0x6e0) = dVar111 * 0.0 + dVar107 * 0.0 + dVar106 * 0.0 + dVar114 * 1.0;
  *(double *)(param_1 + 0x6e8) = dVar111 * 1.0 + dVar107 * 0.0 + dVar106 * 0.0 + dVar114 * 0.0;
  *(double *)(param_1 + 0x6f0) = dVar102 * 0.0 + dVar137 * 0.0 + dVar135 * 1.0 + dVar133 * 0.0;
  *(double *)(param_1 + 0x6f8) = dVar102 * 0.0 + dVar137 * 1.0 + dVar135 * 0.0 + dVar133 * 0.0;
  auVar15._8_4_ = SUB84(dVar104,0);
  auVar15._0_8_ = dVar102 * 0.0 + dVar137 * 0.0 + dVar135 * 0.0 + dVar133 * 1.0;
  auVar15._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x700) = auVar15;
  *(double *)(param_1 + 0x710) = dVar100 * 0.0 + dVar103 * 0.0 + dVar110 * 1.0 + dVar109 * 0.0;
  *(double *)(param_1 + 0x718) = dVar100 * 0.0 + dVar103 * 1.0 + dVar110 * 0.0 + dVar109 * 0.0;
  auVar23._8_4_ = SUB84(dVar101,0);
  auVar23._0_8_ = dVar100 * 0.0 + dVar103 * 0.0 + dVar110 * 0.0 + dVar109 * 1.0;
  auVar23._12_4_ = (int)((ulonglong)dVar101 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x720) = auVar23;
  dVar82 = *(double *)(param_1 + 0x330);
  dVar83 = *(double *)(param_1 + 0x338);
  dVar137 = *(double *)(param_1 + 0x4b0);
  dVar102 = *(double *)(param_1 + 0x4b0);
  dVar84 = *(double *)(param_1 + 0x350);
  dVar85 = *(double *)(param_1 + 0x358);
  dVar104 = *(double *)(param_1 + 0x4b8);
  dVar103 = *(double *)(param_1 + 0x4b8);
  dVar86 = *(double *)(param_1 + 0x340);
  dVar87 = *(double *)(param_1 + 0x348);
  dVar88 = *(double *)(param_1 + 0x360);
  dVar89 = *(double *)(param_1 + 0x368);
  dVar90 = *(double *)(param_1 + 0x370);
  dVar91 = *(double *)(param_1 + 0x378);
  dVar100 = *(double *)(param_1 + 0x4c0);
  dVar101 = *(double *)(param_1 + 0x4c0);
  dVar92 = *(double *)(param_1 + 0x380);
  dVar93 = *(double *)(param_1 + 0x388);
  dVar94 = *(double *)(param_1 + 0x390);
  dVar95 = *(double *)(param_1 + 0x398);
  dVar113 = *(double *)(param_1 + 0x4c8);
  dVar114 = *(double *)(param_1 + 0x4c8);
  dVar96 = *(double *)(param_1 + 0x3a0);
  dVar97 = *(double *)(param_1 + 0x3a8);
  dVar53 = dVar114 * dVar97 + dVar101 * dVar93 + dVar103 * dVar89 + dVar102 * dVar87;
  dVar106 = *(double *)(param_1 + 0x4d0);
  dVar111 = *(double *)(param_1 + 0x4d0);
  dVar107 = *(double *)(param_1 + 0x4d8);
  dVar105 = *(double *)(param_1 + 0x4d8);
  dVar108 = *(double *)(param_1 + 0x4e0);
  dVar116 = *(double *)(param_1 + 0x4e0);
  dVar109 = *(double *)(param_1 + 0x4e8);
  dVar110 = *(double *)(param_1 + 0x4e8);
  dVar133 = *(double *)(param_1 + 0x4f0);
  dVar135 = *(double *)(param_1 + 0x4f0);
  dVar119 = *(double *)(param_1 + 0x4f8);
  dVar122 = *(double *)(param_1 + 0x4f8);
  dVar128 = *(double *)(param_1 + 0x500);
  dVar140 = *(double *)(param_1 + 0x500);
  dVar1 = *(double *)(param_1 + 0x508);
  dVar2 = *(double *)(param_1 + 0x508);
  dVar28 = dVar95 * dVar2 + dVar91 * dVar140 + dVar85 * dVar122 + dVar83 * dVar135;
  dVar20 = dVar2 * dVar97 + dVar140 * dVar93 + dVar122 * dVar89 + dVar135 * dVar87;
  dVar135 = *(double *)(param_1 + 0x510);
  dVar122 = *(double *)(param_1 + 0x510);
  dVar140 = *(double *)(param_1 + 0x518);
  dVar2 = *(double *)(param_1 + 0x518);
  dVar3 = *(double *)(param_1 + 0x520);
  dVar4 = *(double *)(param_1 + 0x520);
  dVar5 = *(double *)(param_1 + 0x528);
  dVar6 = *(double *)(param_1 + 0x528);
  dVar44 = dVar6 * dVar97 + dVar4 * dVar93 + dVar2 * dVar89 + dVar122 * dVar87;
  *(double *)(param_1 + 0x5b0) =
       dVar94 * dVar113 + dVar90 * dVar100 + dVar84 * dVar104 + dVar82 * dVar137;
  *(double *)(param_1 + 0x5b8) =
       dVar95 * dVar114 + dVar91 * dVar101 + dVar85 * dVar103 + dVar83 * dVar102;
  auVar46._8_4_ = SUB84(dVar53,0);
  auVar46._0_8_ = dVar113 * dVar96 + dVar100 * dVar92 + dVar104 * dVar88 + dVar137 * dVar86;
  auVar46._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5c0) = auVar46;
  *(double *)(param_1 + 0x5d0) =
       dVar94 * dVar109 + dVar90 * dVar108 + dVar84 * dVar107 + dVar82 * dVar106;
  *(double *)(param_1 + 0x5d8) =
       dVar95 * dVar110 + dVar91 * dVar116 + dVar85 * dVar105 + dVar83 * dVar111;
  *(double *)(param_1 + 0x5e0) =
       dVar109 * dVar96 + dVar108 * dVar92 + dVar107 * dVar88 + dVar106 * dVar86;
  *(double *)(param_1 + 0x5e8) =
       dVar110 * dVar97 + dVar116 * dVar93 + dVar105 * dVar89 + dVar111 * dVar87;
  auVar24._8_4_ = SUB84(dVar28,0);
  auVar24._0_8_ = dVar94 * dVar1 + dVar90 * dVar128 + dVar84 * dVar119 + dVar82 * dVar133;
  auVar24._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5f0) = auVar24;
  auVar16._8_4_ = SUB84(dVar20,0);
  auVar16._0_8_ = dVar1 * dVar96 + dVar128 * dVar92 + dVar119 * dVar88 + dVar133 * dVar86;
  auVar16._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x600) = auVar16;
  *(double *)(param_1 + 0x610) =
       dVar94 * dVar5 + dVar90 * dVar3 + dVar84 * dVar140 + dVar82 * dVar135;
  *(double *)(param_1 + 0x618) = dVar95 * dVar6 + dVar91 * dVar4 + dVar85 * dVar2 + dVar83 * dVar122
  ;
  auVar36._8_4_ = SUB84(dVar44,0);
  auVar36._0_8_ = dVar5 * dVar96 + dVar3 * dVar92 + dVar140 * dVar88 + dVar135 * dVar86;
  auVar36._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x620) = auVar36;
  dVar7 = auVar72._8_8_;
  dVar103 = dVar117 * 0.0 + dVar123 * 0.0;
  auVar99._8_4_ = uStack_330;
  auVar99._0_8_ = dVar112;
  auVar99._12_4_ = uStack_32c;
  dVar8 = auVar99._8_8_;
  dVar104 = *param_2;
  dVar137 = param_2[1];
  dVar9 = auVar45._8_8_;
  auVar74._8_4_ = SUB84(dVar50,0);
  auVar74._0_8_ = dVar50;
  auVar74._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
  dVar118 = dVar50 * dVar104 + dVar112 * 0.0 + dVar117 * 0.0 + dVar123 * 1.0;
  dVar121 = dVar50 * dVar137 + dVar112 * 0.0 + dVar117 * 1.0 + dVar123 * 0.0;
  dVar102 = param_2[2];
  dVar78 = dVar50 * dVar102 + dVar112 * 1.0 + dVar103;
  dVar79 = dVar50 * 1.0 + dVar112 * 0.0 + dVar103;
  auVar31._8_4_ = SUB84(dVar120,0);
  auVar31._0_8_ = dVar7;
  auVar31._12_4_ = uVar144;
  auVar37._8_4_ = uStack_330;
  auVar37._0_8_ = dVar8;
  auVar37._12_4_ = uStack_32c;
  auVar38._8_4_ = SUB84(dVar52,0);
  auVar38._0_8_ = dVar9;
  auVar38._12_4_ = uVar141;
  dVar60 = dVar9 * dVar104 + dVar8 * 0.0 + dVar7 * 0.0 + dVar129 * 1.0;
  dVar62 = dVar9 * dVar137 + dVar8 * 0.0 + dVar7 * 1.0 + dVar129 * 0.0;
  dVar42 = dVar9 * dVar102 + dVar8 * 1.0 + dVar7 * 0.0 + dVar129 * 0.0;
  dVar130 = dVar9 * 1.0 + dVar8 * 0.0 + dVar7 * 0.0 + dVar129 * 0.0;
  dStack_2f0 = auVar21._8_8_;
  dVar10 = auVar63._8_8_;
  dVar103 = dVar68 * 0.0 + dVar49 * 0.0;
  dVar11 = auVar56._8_8_;
  auVar25._8_4_ = SUB84(dVar41,0);
  auVar25._0_8_ = dVar41;
  auVar25._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  dVar134 = dVar41 * dVar104 + dVar59 * 0.0 + dVar68 * 0.0 + dVar49 * 1.0;
  dVar136 = dVar41 * dVar137 + dVar59 * 0.0 + dVar68 * 1.0 + dVar49 * 0.0;
  dVar27 = dVar41 * dVar102 + dVar59 * 1.0 + dVar103;
  dVar29 = dVar41 * 1.0 + dVar59 * 0.0 + dVar103;
  auVar64._8_4_ = SUB84(dVar69,0);
  auVar64._0_8_ = dVar10;
  auVar64._12_4_ = uVar143;
  auVar73._8_4_ = SUB84(dVar61,0);
  auVar73._0_8_ = dVar11;
  auVar73._12_4_ = uVar142;
  dVar138 = dVar104 * dStack_360 + dVar11 * 0.0 + dVar10 * 0.0 + dStack_2f0 * 1.0;
  dVar139 = dVar137 * dStack_360 + dVar11 * 0.0 + dVar10 * 1.0 + dStack_2f0 * 0.0;
  dVar131 = dVar102 * dStack_360 + dVar11 * 1.0 + dVar10 * 0.0 + dStack_2f0 * 0.0;
  dVar54 = dStack_360 * 1.0 + dVar11 * 0.0 + dVar10 * 0.0 + dStack_2f0 * 0.0;
  *(double *)(param_1 + 0x530) = dVar118;
  *(double *)(param_1 + 0x538) = dVar121;
  auVar75._8_4_ = SUB84(dVar79,0);
  auVar75._0_8_ = dVar78;
  auVar75._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x540) = auVar75;
  auVar57._8_4_ = SUB84(dVar62,0);
  auVar57._0_8_ = dVar60;
  auVar57._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x550) = auVar57;
  auVar39._8_4_ = SUB84(dVar130,0);
  auVar39._0_8_ = dVar42;
  auVar39._12_4_ = (int)((ulonglong)dVar130 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x560) = auVar39;
  *(double *)(param_1 + 0x570) = dVar134;
  *(double *)(param_1 + 0x578) = dVar136;
  auVar26._8_4_ = SUB84(dVar29,0);
  auVar26._0_8_ = dVar27;
  auVar26._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x580) = auVar26;
  *(double *)(param_1 + 0x590) = dVar138;
  *(double *)(param_1 + 0x598) = dVar139;
  auVar47._8_4_ = SUB84(dVar54,0);
  auVar47._0_8_ = dVar131;
  auVar47._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5a0) = auVar47;
  dVar137 = *(double *)(param_1 + 0x430);
  dVar102 = *(double *)(param_1 + 0x430);
  dVar104 = *(double *)(param_1 + 0x438);
  dVar103 = *(double *)(param_1 + 0x438);
  dVar100 = *(double *)(param_1 + 0x440);
  dVar101 = *(double *)(param_1 + 0x440);
  dVar113 = *(double *)(param_1 + 0x448);
  dVar114 = *(double *)(param_1 + 0x448);
  dVar70 = dVar54 * dVar114 + dVar29 * dVar101 + dVar130 * dVar103 + dVar79 * dVar102;
  dVar106 = *(double *)(param_1 + 0x450);
  dVar111 = *(double *)(param_1 + 0x450);
  dVar107 = *(double *)(param_1 + 0x458);
  dVar105 = *(double *)(param_1 + 0x458);
  dVar116 = *(double *)(param_1 + 0x460);
  dVar108 = *(double *)(param_1 + 0x460);
  dVar109 = *(double *)(param_1 + 0x468);
  dVar110 = *(double *)(param_1 + 0x468);
  dVar34 = dVar139 * dVar110 + dVar136 * dVar108 + dVar62 * dVar105 + dVar121 * dVar111;
  dVar120 = dVar54 * dVar110 + dVar29 * dVar108 + dVar130 * dVar105 + dVar79 * dVar111;
  dVar133 = *(double *)(param_1 + 0x470);
  dVar135 = *(double *)(param_1 + 0x470);
  dVar119 = *(double *)(param_1 + 0x478);
  dVar122 = *(double *)(param_1 + 0x478);
  dVar128 = *(double *)(param_1 + 0x480);
  dVar140 = *(double *)(param_1 + 0x480);
  dVar1 = *(double *)(param_1 + 0x488);
  dVar2 = *(double *)(param_1 + 0x488);
  dVar3 = *(double *)(param_1 + 0x490);
  dVar4 = *(double *)(param_1 + 0x490);
  dVar6 = *(double *)(param_1 + 0x498);
  dVar5 = *(double *)(param_1 + 0x498);
  dVar20 = *(double *)(param_1 + 0x4a0);
  dVar28 = *(double *)(param_1 + 0x4a0);
  dVar44 = *(double *)(param_1 + 0x4a8);
  dVar53 = *(double *)(param_1 + 0x4a8);
  dVar55 = dVar54 * dVar53 + dVar29 * dVar28 + dVar130 * dVar5 + dVar79 * dVar4;
  *(double *)(param_1 + 0x630) =
       dVar138 * dVar113 + dVar134 * dVar100 + dVar60 * dVar104 + dVar118 * dVar137;
  *(double *)(param_1 + 0x638) =
       dVar139 * dVar114 + dVar136 * dVar101 + dVar62 * dVar103 + dVar121 * dVar102;
  auVar65._8_4_ = SUB84(dVar70,0);
  auVar65._0_8_ = dVar131 * dVar113 + dVar27 * dVar100 + dVar42 * dVar104 + dVar78 * dVar137;
  auVar65._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x640) = auVar65;
  auVar32._8_4_ = SUB84(dVar34,0);
  auVar32._0_8_ = dVar138 * dVar109 + dVar134 * dVar116 + dVar60 * dVar107 + dVar118 * dVar106;
  auVar32._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x650) = auVar32;
  auVar17._8_4_ = SUB84(dVar120,0);
  auVar17._0_8_ = dVar131 * dVar109 + dVar27 * dVar116 + dVar42 * dVar107 + dVar78 * dVar106;
  auVar17._12_4_ = (int)((ulonglong)dVar120 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x660) = auVar17;
  *(double *)(param_1 + 0x670) =
       dVar138 * dVar1 + dVar134 * dVar128 + dVar60 * dVar119 + dVar118 * dVar133;
  *(double *)(param_1 + 0x678) =
       dVar139 * dVar2 + dVar136 * dVar140 + dVar62 * dVar122 + dVar121 * dVar135;
  *(double *)(param_1 + 0x680) =
       dVar131 * dVar1 + dVar27 * dVar128 + dVar42 * dVar119 + dVar78 * dVar133;
  *(double *)(param_1 + 0x688) =
       dVar54 * dVar2 + dVar29 * dVar140 + dVar130 * dVar122 + dVar79 * dVar135;
  *(double *)(param_1 + 0x690) =
       dVar138 * dVar44 + dVar134 * dVar20 + dVar60 * dVar6 + dVar118 * dVar3;
  *(double *)(param_1 + 0x698) =
       dVar139 * dVar53 + dVar136 * dVar28 + dVar62 * dVar5 + dVar121 * dVar4;
  auVar48._8_4_ = SUB84(dVar55,0);
  auVar48._0_8_ = dVar131 * dVar44 + dVar27 * dVar20 + dVar42 * dVar6 + dVar78 * dVar3;
  auVar48._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x6a0) = auVar48;
  auVar14 = _DAT_149931e80;
  uVar12 = (uint)DAT_149931e80;
  uVar13 = DAT_149931e80._12_4_;
  uVar126 = DAT_149931e80._4_4_;
  uVar127 = DAT_149931e80._8_4_;
  *(uint *)(param_1 + 0xb30) = *(uint *)(param_1 + 0xb48) ^ uVar12;
  *(uint *)(param_1 + 0xb34) = *(uint *)(param_1 + 0xb4c) ^ uVar126;
  *(uint *)(param_1 + 0xb38) = *(uint *)(param_1 + 0xb50) ^ uVar127;
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb54) ^ uVar13;
  *(ulonglong *)(param_1 + 0xb40) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0xb58) >> 0x20) ^ uVar126,
                (uint)*(undefined8 *)(param_1 + 0xb58) ^ uVar12);
  auVar98._8_8_ = dVar129;
  auVar98._0_8_ = dVar123;
  *(undefined1 (*) [16])(param_1 + 0x730) = auVar98;
  *(double *)(param_1 + 0x740) = dVar49;
  *(double *)(param_1 + 0x748) = dVar51;
  *(double *)(param_1 + 0x750) = dVar117;
  *(double *)(param_1 + 0x758) = dVar7;
  *(double *)(param_1 + 0x760) = dVar68;
  *(double *)(param_1 + 0x768) = dVar69;
  *(double *)(param_1 + 0x770) = dVar112;
  *(double *)(param_1 + 0x778) = dVar115;
  *(double *)(param_1 + 0x780) = dVar59;
  *(double *)(param_1 + 0x788) = dVar61;
  *(double *)(param_1 + 0x790) = dVar50;
  *(double *)(param_1 + 0x798) = dVar52;
  *(double *)(param_1 + 0x7a0) = dVar41;
  *(double *)(param_1 + 0x7a8) = dVar43;
  *(double *)(param_1 + 0x7b0) = dVar123;
  *(double *)(param_1 + 0x7b8) = dVar117;
  *(double *)(param_1 + 0x7c0) = dVar112;
  *(double *)(param_1 + 0x7c8) = dVar50;
  auVar80._4_8_ = auVar14._8_8_;
  auVar80._0_4_ = (int)((ulonglong)dVar123 >> 0x20);
  auVar125._0_8_ = auVar80._0_8_ << 0x20;
  auVar125._8_4_ = SUB84(dVar129,0);
  auVar125._12_4_ = (int)((ulonglong)dVar129 >> 0x20);
  *(longlong *)(param_1 + 2000) = auVar125._8_8_;
  *(double *)(param_1 + 0x7d8) = dVar7;
  auVar81._4_8_ = dVar129;
  auVar81._0_4_ = uStack_334;
  auVar132._0_8_ = auVar81._0_8_ << 0x20;
  auVar132._8_4_ = uStack_330;
  auVar132._12_4_ = uStack_32c;
  *(longlong *)(param_1 + 0x7e0) = auVar132._8_8_;
  *(double *)(param_1 + 0x7e8) = dVar52;
  *(double *)(param_1 + 0x7f0) = dVar49;
  *(double *)(param_1 + 0x7f8) = dVar68;
  *(double *)(param_1 + 0x800) = dVar59;
  *(double *)(param_1 + 0x808) = dVar41;
  *(double *)(param_1 + 0x810) = dVar51;
  *(double *)(param_1 + 0x818) = dVar69;
  *(double *)(param_1 + 0x820) = dVar61;
  *(double *)(param_1 + 0x828) = dVar43;
  *(undefined1 (*) [16])(param_1 + 0x830) = auVar98;
  *(double *)(param_1 + 0x840) = dVar49;
  *(double *)(param_1 + 0x848) = dVar51;
  *(double *)(param_1 + 0x850) = dVar117;
  *(double *)(param_1 + 0x858) = dVar7;
  *(double *)(param_1 + 0x860) = dVar68;
  *(double *)(param_1 + 0x868) = dVar69;
  *(double *)(param_1 + 0x870) = dVar112;
  *(double *)(param_1 + 0x878) = dVar115;
  *(double *)(param_1 + 0x880) = dVar59;
  *(double *)(param_1 + 0x888) = dVar61;
  *(double *)(param_1 + 0x890) = dVar50;
  *(double *)(param_1 + 0x898) = dVar52;
  *(double *)(param_1 + 0x8a0) = dVar41;
  *(double *)(param_1 + 0x8a8) = dVar43;
  *(double *)(param_1 + 0x8b0) = dVar123;
  *(double *)(param_1 + 0x8b8) = dVar117;
  *(double *)(param_1 + 0x8c0) = dVar112;
  *(double *)(param_1 + 0x8c8) = dVar50;
  *(longlong *)(param_1 + 0x8d0) = auVar125._8_8_;
  *(double *)(param_1 + 0x8d8) = dVar7;
  *(longlong *)(param_1 + 0x8e0) = auVar132._8_8_;
  *(double *)(param_1 + 0x8e8) = dVar52;
  *(double *)(param_1 + 0x8f0) = dVar49;
  *(double *)(param_1 + 0x8f8) = dVar68;
  *(double *)(param_1 + 0x900) = dVar59;
  *(double *)(param_1 + 0x908) = dVar41;
  *(double *)(param_1 + 0x910) = dVar51;
  *(double *)(param_1 + 0x918) = dVar69;
  *(double *)(param_1 + 0x920) = dVar61;
  *(double *)(param_1 + 0x928) = dVar43;
  dVar120 = *(double *)(param_1 + 0x730);
  dVar27 = *(double *)(param_1 + 0x730);
  dVar29 = *(double *)(param_1 + 0x738);
  dVar34 = *(double *)(param_1 + 0x738);
  dVar130 = dStack_2f0 * dVar97 + dVar49 * dVar93 + dVar34 * dVar89 + dVar27 * dVar87;
  dStack_170 = auVar31._8_8_;
  dStack_2b0 = auVar64._8_8_;
  dVar131 = dStack_2b0 * dVar97 + dVar68 * dVar93 + dStack_170 * dVar89 + dVar117 * dVar87;
  dStack_150 = auVar37._8_8_;
  dStack_290 = auVar73._8_8_;
  dVar43 = dStack_290 * dVar97 + dVar59 * dVar93 + dStack_150 * dVar89 + dVar112 * dVar87;
  dStack_340 = auVar74._8_8_;
  dStack_140 = auVar38._8_8_;
  dStack_160 = auVar25._8_8_;
  dVar42 = dVar95 * dStack_360 + dVar91 * dStack_160 + dVar85 * dStack_140 + dVar83 * dStack_340;
  *(double *)(param_1 + 0x930) =
       dStack_2f0 * dVar94 + dVar49 * dVar90 + dVar84 * dVar29 + dVar82 * dVar120;
  *(double *)(param_1 + 0x938) =
       dStack_2f0 * dVar95 + dVar49 * dVar91 + dVar85 * dVar34 + dVar83 * dVar27;
  auVar58._8_4_ = SUB84(dVar130,0);
  auVar58._0_8_ = dStack_2f0 * dVar96 + dVar49 * dVar92 + dVar29 * dVar88 + dVar120 * dVar86;
  auVar58._12_4_ = (int)((ulonglong)dVar130 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x940) = auVar58;
  *(double *)(param_1 + 0x950) =
       dVar10 * dVar94 + dVar68 * dVar90 + dVar7 * dVar84 + dVar117 * dVar82;
  *(double *)(param_1 + 0x958) =
       dStack_2b0 * dVar95 + dVar68 * dVar91 + dStack_170 * dVar85 + dVar117 * dVar83;
  auVar66._8_4_ = SUB84(dVar131,0);
  auVar66._0_8_ = dVar10 * dVar96 + dVar68 * dVar92 + dVar7 * dVar88 + dVar117 * dVar86;
  auVar66._12_4_ = (int)((ulonglong)dVar131 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x960) = auVar66;
  *(double *)(param_1 + 0x970) =
       dVar11 * dVar94 + dVar59 * dVar90 + dVar8 * dVar84 + dVar112 * dVar82;
  *(double *)(param_1 + 0x978) =
       dStack_290 * dVar95 + dVar59 * dVar91 + dStack_150 * dVar85 + dVar112 * dVar83;
  auVar76._8_4_ = SUB84(dVar43,0);
  auVar76._0_8_ = dVar11 * dVar96 + dVar59 * dVar92 + dVar8 * dVar88 + dVar112 * dVar86;
  auVar76._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x980) = auVar76;
  auVar18._8_4_ = SUB84(dVar42,0);
  auVar18._0_8_ = dVar94 * dStack_360 + dVar90 * dVar41 + dVar84 * dVar9 + dVar82 * dVar50;
  auVar18._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x990) = auVar18;
  *(double *)(param_1 + 0x9a0) =
       dStack_360 * dVar96 + dVar41 * dVar92 + dVar9 * dVar88 + dVar50 * dVar86;
  *(double *)(param_1 + 0x9a8) =
       dStack_360 * dVar97 + dStack_160 * dVar93 + dStack_140 * dVar89 + dStack_340 * dVar87;
  dVar27 = *(double *)(param_1 + 0x7b0);
  dVar29 = *(double *)(param_1 + 0x7b8);
  dVar34 = *(double *)(param_1 + 2000);
  dVar7 = *(double *)(param_1 + 0x7d8);
  dVar8 = *(double *)(param_1 + 0x7c0);
  dVar9 = *(double *)(param_1 + 0x7c8);
  dVar10 = *(double *)(param_1 + 0x7e0);
  dVar11 = *(double *)(param_1 + 0x7e8);
  dVar42 = *(double *)(param_1 + 0x7f0);
  dVar41 = *(double *)(param_1 + 0x7f8);
  dVar43 = *(double *)(param_1 + 0x800);
  dVar130 = *(double *)(param_1 + 0x808);
  dVar49 = *(double *)(param_1 + 0x810);
  dVar50 = *(double *)(param_1 + 0x818);
  dVar120 = dVar114 * dVar50 + dVar101 * dVar41 + dVar103 * dVar7 + dVar102 * dVar29;
  dVar131 = *(double *)(param_1 + 0x820);
  dVar51 = *(double *)(param_1 + 0x828);
  dVar103 = dVar114 * dVar51 + dVar101 * dVar130 + dVar103 * dVar11 + dVar102 * dVar9;
  dVar114 = dVar110 * dVar51 + dVar108 * dVar130 + dVar105 * dVar11 + dVar111 * dVar9;
  dVar102 = dVar2 * dVar50 + dVar140 * dVar41 + dVar122 * dVar7 + dVar135 * dVar29;
  dVar101 = dVar2 * dVar51 + dVar140 * dVar130 + dVar122 * dVar11 + dVar135 * dVar9;
  auVar19._8_4_ = SUB84(dVar120,0);
  auVar19._0_8_ = dVar113 * dVar49 + dVar100 * dVar42 + dVar104 * dVar34 + dVar137 * dVar27;
  auVar19._12_4_ = (int)((ulonglong)dVar120 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9b0) = auVar19;
  auVar67._8_4_ = SUB84(dVar103,0);
  auVar67._0_8_ = dVar113 * dVar131 + dVar100 * dVar43 + dVar104 * dVar10 + dVar137 * dVar8;
  auVar67._12_4_ = (int)((ulonglong)dVar103 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9c0) = auVar67;
  *(double *)(param_1 + 0x9d0) =
       dVar109 * dVar49 + dVar116 * dVar42 + dVar107 * dVar34 + dVar106 * dVar27;
  *(double *)(param_1 + 0x9d8) =
       dVar110 * dVar50 + dVar108 * dVar41 + dVar105 * dVar7 + dVar111 * dVar29;
  auVar77._8_4_ = SUB84(dVar114,0);
  auVar77._0_8_ = dVar109 * dVar131 + dVar116 * dVar43 + dVar107 * dVar10 + dVar106 * dVar8;
  auVar77._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9e0) = auVar77;
  auVar33._8_4_ = SUB84(dVar102,0);
  auVar33._0_8_ = dVar1 * dVar49 + dVar128 * dVar42 + dVar119 * dVar34 + dVar133 * dVar27;
  auVar33._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9f0) = auVar33;
  auVar40._8_4_ = SUB84(dVar101,0);
  auVar40._0_8_ = dVar1 * dVar131 + dVar128 * dVar43 + dVar119 * dVar10 + dVar133 * dVar8;
  auVar40._12_4_ = (int)((ulonglong)dVar101 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa00) = auVar40;
  *(double *)(param_1 + 0xa10) = dVar49 * dVar44 + dVar42 * dVar20 + dVar34 * dVar6 + dVar27 * dVar3
  ;
  *(double *)(param_1 + 0xa18) = dVar50 * dVar53 + dVar41 * dVar28 + dVar7 * dVar5 + dVar29 * dVar4;
  *(double *)(param_1 + 0xa20) = dVar44 * dVar131 + dVar20 * dVar43 + dVar6 * dVar10 + dVar3 * dVar8
  ;
  *(double *)(param_1 + 0xa28) = dVar53 * dVar51 + dVar28 * dVar130 + dVar5 * dVar11 + dVar4 * dVar9
  ;
  return;
}



// FUNCTION 1436a4df0 FUN_1436a4df0 body=122 status=ok
// SIG undefined FUN_1436a4df0(void)

double * FUN_1436a4df0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
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
  double dVar2;
  double dVar4;
  double dVar6;
  
  dVar1 = *param_3;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar6 = param_3[2];
  dVar10 = *(double *)(param_1 + 0xab8);
  dVar11 = *(double *)(param_1 + 0xac0);
  dVar12 = *(double *)(param_1 + 0xac8);
  dVar13 = *(double *)(param_1 + 0xad8);
  dVar14 = *(double *)(param_1 + 0xae0);
  dVar15 = *(double *)(param_1 + 0xae8);
  dVar16 = *(double *)(param_1 + 0xaf8);
  dVar17 = *(double *)(param_1 + 0xb00);
  dVar18 = *(double *)(param_1 + 0xb08);
  dVar8 = *(double *)(param_1 + 0xb18);
  dVar7 = *(double *)(param_1 + 0xb20);
  dVar9 = *(double *)(param_1 + 0xb28);
  *param_2 = *(double *)(param_1 + 0xaf0) * dVar5 +
             *(double *)(param_1 + 0xad0) * dVar3 + *(double *)(param_1 + 0xab0) * dVar1 +
             *(double *)(param_1 + 0xb10);
  param_2[1] = dVar16 * dVar6 + dVar13 * dVar4 + dVar10 * dVar2 + dVar8;
  param_2[2] = dVar5 * dVar17 + dVar3 * dVar14 + dVar1 * dVar11 + dVar7;
  param_2[3] = dVar6 * dVar18 + dVar4 * dVar15 + dVar2 * dVar12 + dVar9;
  return param_2;
}



// FUNCTION 1436a4e6a FUN_1436a4e6a body=47 status=ok
// SIG undefined FUN_1436a4e6a(void)

void FUN_1436a4e6a(void)

{
  DAT_14cb053d0 = &PTR_FUN_14aa814e0;
  FUN_144725486(&DAT_14cb053d0);
  FUN_1463ff8e6(&DAT_14cb053d0);
  return;
}



// FUNCTION 1436a4f06 FUN_1436a4f06 body=719 status=ok
// SIG undefined FUN_1436a4f06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1436a4f06(undefined8 param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  undefined2 **local_98;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_70 = 0;
  uStack_60 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_78 = 1;
  local_68 = (ulonglong)(byte)param_3;
  *(undefined1 *)(DAT_14c872ce0 + 8) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03ff0) {
    FUN_144b3d300(&DAT_14cb03ff0);
    if (DAT_14cb03ff0 == -1) {
      FUN_14170204c(&local_88);
      iVar2 = (int)local_80;
      iVar4 = ((int)local_80 == 0) + 0x10;
      DAT_14cb03fe0 = local_88;
      local_88 = (undefined2 *)0x0;
      DAT_14cb03fe8 = (int)local_80;
      iVar3 = local_80._4_4_;
      _DAT_14cb03fec = local_80._4_4_;
      local_80 = 0;
      iVar5 = iVar4 + iVar2;
      if (iVar5 < iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar3 < iVar5) {
        FUN_1446f8c06(&DAT_14cb03fe0);
      }
      FUN_1400020e8(&DAT_14cb03fe0,L"CloudStorage.ini",0x10);
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a51d7);
      _Init_thread_footer(&DAT_14cb03ff0);
    }
  }
  lVar1 = DAT_14c872ce0;
  if (param_3 == 3) {
    puVar7 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (DAT_14cb03fe8 != 0) {
      puVar6 = DAT_14cb03fe0;
    }
    FUN_140056680(&local_88,puVar6);
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    local_98 = &local_88;
    FUN_1449da20c(lVar1,L"CloudStorageEmulation",puVar7,local_58);
  }
  else if (param_3 == 2) {
    puVar7 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (DAT_14cb03fe8 != 0) {
      puVar6 = DAT_14cb03fe0;
    }
    FUN_140056680(&local_88,puVar6);
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    local_98 = &local_88;
    FUN_14153841e(lVar1,L"CloudStorageEmulation",puVar7,&uStack_60);
  }
  else {
    if (param_3 != 1) goto LAB_1436a50b4;
    puVar7 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (DAT_14cb03fe8 != 0) {
      puVar6 = DAT_14cb03fe0;
    }
    FUN_140056680(&local_88,puVar6);
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    local_98 = &local_88;
    FUN_1414d73b6(lVar1,L"CloudStorageEmulation",puVar7,(longlong)&local_68 + 4);
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1436a50b4:
  *(undefined1 *)(DAT_14c872ce0 + 8) = 1;
  FUN_147cf15da(param_1,0,&local_78);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a51e8 FUN_1436a51e8 body=799 status=ok
// SIG undefined FUN_1436a51e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1436a51e8(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined2 **local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb04008) && (FUN_144b3d300(&DAT_14cb04008), DAT_14cb04008 == -1)) {
    FUN_14170204c(&local_80);
    iVar2 = (int)local_78;
    iVar4 = ((int)local_78 == 0) + 0x10;
    DAT_14cb03ff8 = local_80;
    local_80 = (undefined2 *)0x0;
    DAT_14cb04000 = (int)local_78;
    iVar3 = local_78._4_4_;
    _DAT_14cb04004 = local_78._4_4_;
    local_78 = 0;
    iVar6 = iVar4 + iVar2;
    if (iVar6 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar3 < iVar6) {
      FUN_1446f8c06(&DAT_14cb03ff8);
    }
    FUN_1400020e8(&DAT_14cb03ff8,L"CloudStorage.ini",0x10);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1436a5509);
    _Init_thread_footer(&DAT_14cb04008);
  }
  lVar5 = DAT_14c872ce0;
  *(undefined1 *)(DAT_14c872ce0 + 8) = 0;
  cVar1 = *(char *)(param_3 + 8);
  if (cVar1 == '\x03') {
    puVar8 = DAT_14cb03ff8;
    if (DAT_14cb04000 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_80,puVar8);
    iVar2 = *(int *)(param_3 + 0x20);
    puVar8 = *(undefined2 **)(param_3 + 0x18);
    iVar3 = *(int *)(param_2 + 1);
    puVar7 = (undefined2 *)*param_2;
    lVar5 = FUN_14052bcbc(lVar5,&local_80);
    if (lVar5 != 0) {
      if (iVar3 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      if (iVar2 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_1410abc54(lVar5,L"CloudStorageEmulation",puVar7,puVar8);
    }
  }
  else if (cVar1 == '\x02') {
    puVar8 = &DAT_149dfb77a;
    puVar7 = &DAT_149dfb77a;
    if (DAT_14cb04000 != 0) {
      puVar7 = DAT_14cb03ff8;
    }
    FUN_140056680(&local_80,puVar7);
    if (*(int *)(param_2 + 1) != 0) {
      puVar8 = (undefined2 *)*param_2;
    }
    local_88 = &local_80;
    FUN_1458d3460(lVar5,L"CloudStorageEmulation",puVar8,*(undefined4 *)(param_3 + 0x10));
  }
  else {
    if (cVar1 != '\x01') goto LAB_1436a5376;
    puVar8 = &DAT_149dfb77a;
    puVar7 = &DAT_149dfb77a;
    if (DAT_14cb04000 != 0) {
      puVar7 = DAT_14cb03ff8;
    }
    FUN_140056680(&local_80,puVar7);
    if (*(int *)(param_2 + 1) != 0) {
      puVar8 = (undefined2 *)*param_2;
    }
    local_88 = &local_80;
    FUN_141301e58(lVar5,L"CloudStorageEmulation",puVar8,*(undefined4 *)(param_3 + 0xc));
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1436a5376:
  lVar5 = DAT_14c872ce0;
  puVar8 = DAT_14cb03ff8;
  if (DAT_14cb04000 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_80,puVar8);
  FUN_140d6d8de(lVar5,0,&local_80);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(DAT_14c872ce0 + 8) = 1;
  local_6c = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = (undefined2 *)CONCAT71(local_80._1_7_,1);
  FUN_14788f940(&local_78,param_3);
  FUN_147cf15da(param_1,1,&local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1436a551a FUN_1436a551a body=811 status=ok
// SIG undefined FUN_1436a551a(void)

longlong *
FUN_1436a551a(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  wchar_t *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  code **local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined **local_198 [17];
  undefined ***local_110;
  undefined ***local_108;
  undefined2 local_100;
  int local_f4;
  undefined **local_f0;
  ulonglong *local_e8;
  byte local_c8;
  byte local_c6;
  longlong *local_98;
  longlong local_78;
  undefined ***local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x2f8))(0,param_2,&local_48,param_5);
  if ((int)uStack_40 == 0) {
    plVar2 = (longlong *)0x0;
    goto LAB_1436a5711;
  }
  memset(&local_f0,0,0x90);
  FUN_144869430(&local_f0);
  local_60 = 0;
  local_f0 = &PTR_FUN_149e1e050;
  local_50 = 0x7fffffffffffffff;
  local_c8 = local_c8 | 1;
  local_58 = &local_48;
  FUN_1449c2eca(&local_f0,1);
  piVar1 = (int *)*local_e8 + 1;
  if ((int *)local_e8[1] < piVar1) {
    if ((local_c6 & 2) == 0) {
      (*(code *)local_f0[0x2e])(&local_f0,&local_f4,4);
    }
    else {
      FUN_14572512c(&local_f0,&local_f4);
    }
  }
  else {
    local_f4 = *(int *)*local_e8;
    *local_e8 = (ulonglong)piVar1;
  }
  if (local_f4 == param_4) {
    FUN_1407134c4(local_198,&local_f0);
    local_110 = local_68;
    local_198[0] = &PTR_FUN_149eae6c0;
    local_100 = 0;
    lVar3 = *param_3;
    local_108 = &local_f0;
    local_68 = local_198;
    if (lVar3 == 0) {
LAB_1436a569b:
      lVar3 = 0;
    }
    else {
      if (DAT_14c927740 == 0) {
        local_1b0 = &local_30;
        local_30 = FUN_1449e2820;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = FUN_14081d0ea;
        local_1b8 = &LAB_146856450;
        local_1c0 = FUN_1427b121c;
        local_1c8 = L"Engine";
        uStack_1d0 = 0;
        local_1d8 = CONCAT44(local_1d8._4_4_,0x10000021);
        local_1e0 = 8;
        local_1e8 = CONCAT44(local_1e8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        if (DAT_14c927740 == 0) goto LAB_1436a569b;
      }
      if ((*(int *)(lVar3 + 0x38) < *(int *)(DAT_14c927740 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
          != DAT_14c927740 + 0x30)) goto LAB_1436a569b;
      lVar3 = *param_3;
    }
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e0 = local_1e0 & 0xffffff00;
    local_1e8 = 0;
    plVar2 = (longlong *)FUN_140584627(DAT_14c951640,lVar3,0,0);
    (**(code **)(*plVar2 + 0xd8))(plVar2,local_198);
    FUN_14041e0ea(local_198);
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  local_f0 = &PTR__purecall_149e35f70;
  if (local_98 != (longlong *)0x0) {
    if (*local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_98);
  }
  if (local_78 != 0) {
    if (*(longlong *)(local_78 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_78);
  }
LAB_1436a5711:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 1436a5846 FUN_1436a5846 body=166 status=ok
// SIG undefined FUN_1436a5846(void)

void FUN_1436a5846(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14aa76140;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x89) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x91) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  return;
}



// FUNCTION 1436a58ec FUN_1436a58ec body=69 status=ok
// SIG undefined FUN_1436a58ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a58ec(void)

{
  _DAT_14cb04050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a592e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04058,1);
  return;
}



// FUNCTION 1436a5931 FUN_1436a5931 body=69 status=ok
// SIG undefined FUN_1436a5931(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5931(void)

{
  _DAT_14cb04068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04070,1);
  return;
}



// FUNCTION 1436a5976 FUN_1436a5976 body=69 status=ok
// SIG undefined FUN_1436a5976(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5976(void)

{
  _DAT_14cb04080 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a59b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04088,1);
  return;
}



// FUNCTION 1436a59bb FUN_1436a59bb body=69 status=ok
// SIG undefined FUN_1436a59bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a59bb(void)

{
  _DAT_14cb04098 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a59fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb040a0,1);
  return;
}



// FUNCTION 1436a5a00 FUN_1436a5a00 body=69 status=ok
// SIG undefined FUN_1436a5a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5a00(void)

{
  _DAT_14cb040b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb040b8,1);
  return;
}



// FUNCTION 1436a5a45 FUN_1436a5a45 body=69 status=ok
// SIG undefined FUN_1436a5a45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5a45(void)

{
  _DAT_14cb040c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb040d0,1);
  return;
}



// FUNCTION 1436a5a8a FUN_1436a5a8a body=69 status=ok
// SIG undefined FUN_1436a5a8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5a8a(void)

{
  _DAT_14cb040e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb040e8,1);
  return;
}



// FUNCTION 1436a5acf FUN_1436a5acf body=69 status=ok
// SIG undefined FUN_1436a5acf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5acf(void)

{
  _DAT_14cb040f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04100,1);
  return;
}



// FUNCTION 1436a5b14 FUN_1436a5b14 body=69 status=ok
// SIG undefined FUN_1436a5b14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5b14(void)

{
  _DAT_14cb04110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04118,1);
  return;
}



// FUNCTION 1436a5b59 FUN_1436a5b59 body=69 status=ok
// SIG undefined FUN_1436a5b59(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5b59(void)

{
  _DAT_14cb04120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04128,1);
  return;
}



// FUNCTION 1436a5b9e FUN_1436a5b9e body=69 status=ok
// SIG undefined FUN_1436a5b9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5b9e(void)

{
  _DAT_14cb04130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04138,1);
  return;
}



// FUNCTION 1436a5be3 FUN_1436a5be3 body=69 status=ok
// SIG undefined FUN_1436a5be3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5be3(void)

{
  _DAT_14cb04140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04148,1);
  return;
}



// FUNCTION 1436a5c28 FUN_1436a5c28 body=69 status=ok
// SIG undefined FUN_1436a5c28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5c28(void)

{
  _DAT_14cb04160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04168,1);
  return;
}



// FUNCTION 1436a5c6d FUN_1436a5c6d body=69 status=ok
// SIG undefined FUN_1436a5c6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5c6d(void)

{
  _DAT_14cb04170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04178,1);
  return;
}



// FUNCTION 1436a5cb2 FUN_1436a5cb2 body=69 status=ok
// SIG undefined FUN_1436a5cb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5cb2(void)

{
  _DAT_14cb04668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04670,1);
  return;
}



// FUNCTION 1436a5cf7 FUN_1436a5cf7 body=69 status=ok
// SIG undefined FUN_1436a5cf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5cf7(void)

{
  _DAT_14cb04680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04688,1);
  return;
}



// FUNCTION 1436a5d3c FUN_1436a5d3c body=69 status=ok
// SIG undefined FUN_1436a5d3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5d3c(void)

{
  _DAT_14cb04698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb046a0,1);
  return;
}



// FUNCTION 1436a5d81 FUN_1436a5d81 body=69 status=ok
// SIG undefined FUN_1436a5d81(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5d81(void)

{
  _DAT_14cb046b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb046b8,1);
  return;
}



// FUNCTION 1436a5dc6 FUN_1436a5dc6 body=69 status=ok
// SIG undefined FUN_1436a5dc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5dc6(void)

{
  _DAT_14cb046c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb046d0,1);
  return;
}



// FUNCTION 1436a5e0b FUN_1436a5e0b body=69 status=ok
// SIG undefined FUN_1436a5e0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5e0b(void)

{
  _DAT_14cb046d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb046e0,1);
  return;
}



// FUNCTION 1436a5e50 FUN_1436a5e50 body=69 status=ok
// SIG undefined FUN_1436a5e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5e50(void)

{
  _DAT_14cb046f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb046f8,1);
  return;
}



// FUNCTION 1436a5e95 FUN_1436a5e95 body=69 status=ok
// SIG undefined FUN_1436a5e95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5e95(void)

{
  _DAT_14cb04708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04710,1);
  return;
}



// FUNCTION 1436a5eda FUN_1436a5eda body=69 status=ok
// SIG undefined FUN_1436a5eda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5eda(void)

{
  _DAT_14cb04720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04728,1);
  return;
}



// FUNCTION 1436a5f1f FUN_1436a5f1f body=69 status=ok
// SIG undefined FUN_1436a5f1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5f1f(void)

{
  _DAT_14cb04738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04740,1);
  return;
}



// FUNCTION 1436a5f64 FUN_1436a5f64 body=69 status=ok
// SIG undefined FUN_1436a5f64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5f64(void)

{
  _DAT_14cb04750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04758,1);
  return;
}



// FUNCTION 1436a5fa9 FUN_1436a5fa9 body=69 status=ok
// SIG undefined FUN_1436a5fa9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5fa9(void)

{
  _DAT_14cb04768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a5feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04770,1);
  return;
}



// FUNCTION 1436a5fee FUN_1436a5fee body=69 status=ok
// SIG undefined FUN_1436a5fee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a5fee(void)

{
  _DAT_14cb04780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04788,1);
  return;
}



// FUNCTION 1436a6033 FUN_1436a6033 body=69 status=ok
// SIG undefined FUN_1436a6033(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a6033(void)

{
  _DAT_14cb04798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb047a0,1);
  return;
}



// FUNCTION 1436a6078 FUN_1436a6078 body=69 status=ok
// SIG undefined FUN_1436a6078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a6078(void)

{
  _DAT_14cb047b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a60ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb047b8,1);
  return;
}



// FUNCTION 1436a60bd FUN_1436a60bd body=69 status=ok
// SIG undefined FUN_1436a60bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a60bd(void)

{
  _DAT_14cb047c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a60ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb047d0,1);
  return;
}



// FUNCTION 1436a6102 FUN_1436a6102 body=69 status=ok
// SIG undefined FUN_1436a6102(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a6102(void)

{
  _DAT_14cb047e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb047e8,1);
  return;
}



// FUNCTION 1436a6147 FUN_1436a6147 body=69 status=ok
// SIG undefined FUN_1436a6147(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a6147(void)

{
  _DAT_14cb047f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04800,1);
  return;
}



// FUNCTION 1436a618c FUN_1436a618c body=69 status=ok
// SIG undefined FUN_1436a618c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a618c(void)

{
  _DAT_14cb04810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a61ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04818,1);
  return;
}



// FUNCTION 1436a61d1 FUN_1436a61d1 body=69 status=ok
// SIG undefined FUN_1436a61d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a61d1(void)

{
  _DAT_14cb04828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04830,1);
  return;
}



// FUNCTION 1436a6216 FUN_1436a6216 body=69 status=ok
// SIG undefined FUN_1436a6216(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a6216(void)

{
  _DAT_14cb04840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04848,1);
  return;
}



// FUNCTION 1436a625b FUN_1436a625b body=69 status=ok
// SIG undefined FUN_1436a625b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a625b(void)

{
  _DAT_14cb04858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a629d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04860,1);
  return;
}



// FUNCTION 1436a62a0 FUN_1436a62a0 body=69 status=ok
// SIG undefined FUN_1436a62a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a62a0(void)

{
  _DAT_14cb04870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a62e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04878,1);
  return;
}



// FUNCTION 1436a62e5 FUN_1436a62e5 body=69 status=ok
// SIG undefined FUN_1436a62e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a62e5(void)

{
  _DAT_14cb04888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04890,1);
  return;
}



// FUNCTION 1436a632a FUN_1436a632a body=69 status=ok
// SIG undefined FUN_1436a632a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a632a(void)

{
  _DAT_14cb048a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a636c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb048a8,1);
  return;
}



// FUNCTION 1436a636f FUN_1436a636f body=69 status=ok
// SIG undefined FUN_1436a636f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a636f(void)

{
  _DAT_14cb048b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a63b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb048c0,1);
  return;
}



// FUNCTION 1436a63b4 FUN_1436a63b4 body=69 status=ok
// SIG undefined FUN_1436a63b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a63b4(void)

{
  _DAT_14cb048c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a63f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb048d0,1);
  return;
}



// FUNCTION 1436a63f9 FUN_1436a63f9 body=69 status=ok
// SIG undefined FUN_1436a63f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a63f9(void)

{
  _DAT_14cb048e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a643b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb048e8,1);
  return;
}



// FUNCTION 1436a643e FUN_1436a643e body=69 status=ok
// SIG undefined FUN_1436a643e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a643e(void)

{
  _DAT_14cb048f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a6480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04900,1);
  return;
}



// FUNCTION 1436a6483 FUN_1436a6483 body=69 status=ok
// SIG undefined FUN_1436a6483(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a6483(void)

{
  _DAT_14cb04910 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a64c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04918,1);
  return;
}



// FUNCTION 1436a64c8 FUN_1436a64c8 body=3107 status=ok
// SIG undefined FUN_1436a64c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a64c8(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  PRTL_CRITICAL_SECTION_DEBUG p_Var17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  LPCRITICAL_SECTION p_Var29;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  LPCRITICAL_SECTION local_1a8;
  LPCRITICAL_SECTION local_1a0;
  longlong local_198;
  uint *local_190;
  int *local_188;
  longlong local_180;
  undefined4 *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160 [2];
  longlong *local_150;
  longlong *local_148;
  longlong *local_140 [2];
  LARGE_INTEGER *local_130;
  ulonglong *local_128;
  longlong *local_120;
  longlong *local_118;
  LARGE_INTEGER *local_110;
  ulonglong *local_108;
  LARGE_INTEGER *local_100;
  undefined1 *local_f8;
  LARGE_INTEGER local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [24];
  undefined4 local_b8;
  char local_b4;
  byte local_a0;
  LARGE_INTEGER local_90;
  ulonglong local_88;
  longlong *local_80;
  undefined4 local_78;
  ulonglong local_70 [6];
  
  local_70[0] = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  QueryPerformanceCounter(&local_f0);
  if (param_3 == '\0') {
    plVar15 = *(longlong **)(param_1 + 0x198);
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x68))(plVar15,0);
    }
    local_1a0 = (LPCRITICAL_SECTION)(param_1 + 0x68);
    EnterCriticalSection(local_1a0);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    local_178 = (undefined4 *)0x0;
    uStack_170 = 1;
    FUN_1446f48e2(&local_178,0);
    *local_178 = 0;
    lVar23 = DAT_14cb05368;
    cVar7 = FUN_146320abd();
    if (cVar7 != '\0') {
      local_1a0 = (LPCRITICAL_SECTION)(param_1 + 0xa0);
      if (*(char *)(lVar23 + 0x119) == '\0') {
        iVar26 = 0;
        do {
          iVar27 = *(int *)(lVar23 + 0xf8);
          if ((longlong)iVar27 != 0) {
            lVar14 = *(longlong *)(lVar23 + 0xf0);
            lVar28 = 0;
            do {
              iVar26 = (**(code **)(**(longlong **)(lVar14 + lVar28) + 0x48))();
              lVar28 = lVar28 + 8;
            } while ((longlong)iVar27 * 8 != lVar28);
          }
        } while (0 < iVar26);
        if (0 < (int)uStack_170) {
          lVar14 = 0;
          iVar26 = (int)uStack_170;
          do {
            if (*(int *)(lVar23 + 0x18) != *(int *)(lVar23 + 0x44)) {
              uVar25 = local_178[lVar14];
              lVar28 = *(longlong *)(lVar23 + 0x50);
              if (*(longlong *)(lVar23 + 0x50) == 0) {
                lVar28 = lVar23 + 0x48;
              }
              uVar11 = *(uint *)(lVar28 + (ulonglong)(*(int *)(lVar23 + 0x58) - 1U & uVar25) * 4);
              if (uVar11 != 0xffffffff) {
                do {
                  puVar24 = (uint *)(*(longlong *)(lVar23 + 0x10) + (longlong)(int)uVar11 * 0x18);
                  if (*puVar24 == uVar25) {
                    if (puVar24 + 2 != (uint *)0x0 && puVar24 != (uint *)0x0) {
                      lVar4 = *(longlong *)(puVar24 + 2);
                      lVar28 = lVar4 + 0x10;
                      if (lVar4 == 0) {
                        lVar28 = 0;
                      }
                      FUN_147cf299a(local_1a0,uVar25,lVar28);
                      FUN_147d0c584((longlong *)(lVar23 + 0x10),local_178[lVar14]);
                      iVar26 = (int)uStack_170;
                    }
                    break;
                  }
                  uVar11 = puVar24[4];
                } while (uVar11 != 0xffffffff);
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar26);
        }
      }
      else {
        local_1a8 = (LPCRITICAL_SECTION)(lVar23 + 0x68);
        EnterCriticalSection(local_1a8);
        uVar25 = 0;
        if (0 < (int)uStack_170) {
          lVar14 = 0;
          uVar25 = 0;
          do {
            if (*(int *)(lVar23 + 0x18) != *(int *)(lVar23 + 0x44)) {
              lVar28 = *(longlong *)(lVar23 + 0x50);
              if (*(longlong *)(lVar23 + 0x50) == 0) {
                lVar28 = lVar23 + 0x48;
              }
              uVar11 = *(uint *)(lVar28 + (ulonglong)
                                          (*(int *)(lVar23 + 0x58) - 1U & local_178[lVar14]) * 4);
              if (uVar11 != 0xffffffff) {
                do {
                  puVar24 = (uint *)(*(longlong *)(lVar23 + 0x10) + (longlong)(int)uVar11 * 0x18);
                  if (*puVar24 == local_178[lVar14]) {
                    if (puVar24 + 2 != (uint *)0x0 && puVar24 != (uint *)0x0) {
                      lVar4 = *(longlong *)(puVar24 + 2);
                      lVar28 = lVar4 + 0x10;
                      if (lVar4 == 0) {
                        lVar28 = 0;
                      }
                      uVar25 = uVar25 + *(int *)(lVar28 + 0x10);
                    }
                    break;
                  }
                  uVar11 = puVar24[4];
                } while (uVar11 != 0xffffffff);
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)uStack_170);
        }
        local_198 = param_1;
        LeaveCriticalSection(local_1a8);
        uVar6 = DAT_14c872be8;
        local_f0.QuadPart = 0x14aa7b558;
        local_e8._0_4_ = 0x1a;
        FUN_1446e940c(&local_150,&local_f0);
        local_f0.QuadPart = 0x14aa7b50a;
        local_e8._0_4_ = 0xe;
        FUN_1446e940c(local_160,&local_f0);
        local_f0.QuadPart = 0x14aa7b528;
        local_e8 = CONCAT44(local_e8._4_4_,0x17);
        FUN_140208c1e(local_140,local_160,&local_150,&local_f0);
        FUN_14023409e(&local_130,local_140,1);
        local_f0.QuadPart = local_f0.QuadPart & 0xffffffff00000000;
        local_e0 = (longlong *)0x0;
        local_d8 = 0;
        local_e8 = (longlong)(int)uVar25;
        local_f8 = local_d0;
        local_100 = &local_f0;
        FUN_14010d304(&local_90);
        local_110 = local_130;
        local_108 = local_128;
        if (local_128 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = (int)local_128[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_120,&local_110,&local_90);
        FUN_14007f2db(local_90.QuadPart,local_88 & 0xffffffff);
        if (local_90.QuadPart != 0) {
          FUN_1400020a8();
        }
        if (local_e0 != (longlong *)0x0) {
          (**(code **)(*local_e0 + 0x10))();
        }
        if (local_128 != (ulonglong *)0x0) {
          LOCK();
          puVar1 = local_128 + 1;
          *(int *)puVar1 = (int)*puVar1 + -1;
          UNLOCK();
          if ((int)*puVar1 == 0) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar2 = (int *)((longlong)local_128 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_128 + 0x10))(local_128);
            }
          }
        }
        local_1b8 = uVar6;
        FUN_140997f46(&local_f0,(float)(int)uVar25,&local_120,0);
        FUN_140997a0e(&local_f0);
        if (local_120 != (longlong *)0x0) {
          (**(code **)(*local_120 + 0x10))();
        }
        if (local_140[0] != (longlong *)0x0) {
          (**(code **)(*local_140[0] + 0x10))();
        }
        if (0 < (int)uVar25) {
          local_b8 = 0x3f800000;
          local_b4 = '\x01';
          local_a0 = local_a0 & 0xfc;
        }
        EnterCriticalSection(local_1a8);
        if (0 < (int)uStack_170) {
          local_188 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60);
          iVar26 = 0;
          do {
            lVar14 = 0;
            uVar11 = 0;
            do {
              if (*(int *)(lVar23 + 0x18) != *(int *)(lVar23 + 0x44)) {
                lVar28 = *(longlong *)(lVar23 + 0x50);
                if (*(longlong *)(lVar23 + 0x50) == 0) {
                  lVar28 = lVar23 + 0x48;
                }
                uVar18 = *(uint *)(lVar28 + (ulonglong)
                                            (*(int *)(lVar23 + 0x58) - 1U & local_178[lVar14]) * 4);
                if (uVar18 != 0xffffffff) {
                  do {
                    puVar24 = (uint *)(*(longlong *)(lVar23 + 0x10) + (longlong)(int)uVar18 * 0x18);
                    if (*puVar24 == local_178[lVar14]) {
                      if (puVar24 + 2 != (uint *)0x0 && puVar24 != (uint *)0x0) {
                        lVar4 = *(longlong *)(puVar24 + 2);
                        lVar28 = lVar4 + 0x10;
                        if (lVar4 == 0) {
                          lVar28 = 0;
                        }
                        if (*(int *)(lVar28 + 0x10) == 0) {
                          if (0 < *(int *)(lVar28 + 8)) {
                            FUN_147cf299a(local_1a0,local_178[lVar14],lVar28);
                          }
                          FUN_147d0c584((longlong *)(lVar23 + 0x10),local_178[lVar14]);
                        }
                        else {
                          if (*(char *)(lVar28 + 0x20) == '\0') {
                            QueryPerformanceCounter(&local_90);
                            dVar5 = ((double)local_90.QuadPart * DAT_14c83f420 + 16777216.0) -
                                    *(double *)(lVar28 + 0x18);
                            if (((double)_DAT_14c761b04 <= dVar5) &&
                               (*(undefined1 *)(lVar28 + 0x20) = 1, DAT_14cb046e8 != 0)) {
                              local_1b0 = *(undefined4 *)(lVar28 + 8);
                              local_1b8 = CONCAT44(local_1b8._4_4_,*(undefined4 *)(lVar28 + 0x10));
                              FUN_140033559(".\\Runtime/Engine/Private/ShaderCompiler/ShaderCompiler.cpp"
                                            ,0x9c3,
                                            L"Crashing on a hung shadermap, time spent compiling: %f seconds, NumPendingJobs: %d, FinishedJobs: %d"
                                            ,dVar5);
                            }
                          }
                          uVar11 = uVar11 + *(int *)(lVar28 + 0x10);
                        }
                      }
                      break;
                    }
                    uVar18 = puVar24[4];
                  } while (uVar18 != 0xffffffff);
                }
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)uStack_170);
            LeaveCriticalSection(local_1a8);
            if ((int)uVar11 < 1) goto LAB_1436a6dd1;
            local_190 = (uint *)CONCAT44(local_190._4_4_,uVar25);
            plVar15 = *(longlong **)(lVar23 + 0x198);
            if (plVar15 != (longlong *)0x0) {
              if ((DAT_14c86a9f8 == '\x01') && (*local_188 != 2)) {
                if (*local_188 == 1) {
                  DVar9 = FUN_140ad26c0();
                  DVar10 = GetCurrentThreadId();
                  if (DVar9 == DVar10) {
                    plVar15 = *(longlong **)(lVar23 + 0x198);
                    goto LAB_1436a6ca2;
                  }
                }
              }
              else {
LAB_1436a6ca2:
                (**(code **)(*plVar15 + 0x68))(plVar15,0x3c23d70a);
              }
            }
            local_180 = CONCAT44(local_180._4_4_,iVar26);
            local_90.QuadPart = 0x14aa7b558;
            local_88._0_4_ = 0x1a;
            FUN_1446e940c(local_164,&local_90);
            local_90.QuadPart = 0x14aa7b50a;
            local_88._0_4_ = 0xe;
            FUN_1446e940c(local_168,&local_90);
            local_90.QuadPart = 0x14aa7b528;
            local_88 = CONCAT44(local_88._4_4_,0x17);
            FUN_140208c1e(local_160,local_168,local_164,&local_90);
            FUN_14023409e(&local_150,local_160,1);
            local_90.QuadPart = local_90.QuadPart & 0xffffffff00000000;
            local_80 = (longlong *)0x0;
            local_78 = 0;
            local_88 = (ulonglong)uVar11;
            local_108 = local_70;
            local_110 = &local_90;
            FUN_14010d304(&local_100,&local_110);
            local_120 = local_150;
            local_118 = local_148;
            if (local_148 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_148 + 1) = (int)local_148[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_140,&local_120,&local_100);
            FUN_14007f2db(local_100,(ulonglong)local_f8 & 0xffffffff);
            iVar26 = (int)local_190;
            if (local_100 != (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
            }
            if (local_80 != (longlong *)0x0) {
              (**(code **)(*local_80 + 0x10))();
            }
            plVar15 = local_148;
            if (local_148 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_148 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_148)(local_148);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            FUN_140997b30(&local_f0,(float)(int)(iVar26 - uVar11),local_140);
            if (local_140[0] != (longlong *)0x0) {
              (**(code **)(*local_140[0] + 0x10))();
            }
            iVar26 = (int)local_180;
            if (local_160[0] != (longlong *)0x0) {
              (**(code **)(*local_160[0] + 0x10))();
            }
            FUN_14000f986(0x3c23d70a);
            if (iVar26 < 0x32) {
              iVar26 = iVar26 + 1;
            }
            else {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c872ef8) &&
                 (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                FUN_1459825b0(&DAT_14c872ee0);
                atexit(FUN_1427868a5);
                _Init_thread_footer(&DAT_14c872ef8);
              }
              FUN_1400e4168(&DAT_14c872ee0,1);
              iVar26 = 0;
            }
            EnterCriticalSection(local_1a8);
            uVar25 = uVar11;
          } while (0 < (int)uStack_170);
        }
        LeaveCriticalSection(local_1a8);
LAB_1436a6dd1:
        FUN_140997a5c(&local_f0);
        param_1 = local_198;
        if (local_b4 == '\x01') {
          local_b4 = '\0';
        }
        if (local_e0 != (longlong *)0x0) {
          (**(code **)(*local_e0 + 0x10))();
        }
        if ((longlong *)local_f0.QuadPart != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_f0 + 0x10))();
        }
      }
      FUN_147cf28ee(lVar23);
    }
    if (local_178 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_1a0 = (LPCRITICAL_SECTION)(param_1 + 0x68);
    EnterCriticalSection(local_1a0);
  }
  puVar24 = (uint *)(param_1 + 0x20);
  iVar26 = *(int *)(param_1 + 0x38);
  if (iVar26 == 0) {
    uVar21 = 1;
    uVar22 = 0;
    iVar27 = 0;
    iVar20 = 0;
  }
  else {
    puVar16 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar16 = puVar24;
    }
    uVar25 = *puVar16;
    if (uVar25 == 0) {
      iVar27 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar27 = iVar26 + -1;
      }
      uVar22 = 0;
      uVar19 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar19 = uVar22;
      }
      iVar27 = 0;
      do {
        if (uVar19 == uVar22) goto LAB_1436a7072;
        iVar27 = iVar27 + 0x20;
        uVar25 = puVar16[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar22 = 0;
      iVar27 = 0;
    }
    uVar21 = (ulonglong)(-uVar25 & uVar25);
    uVar19 = uVar21 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar20 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar26 <= iVar20) {
      iVar20 = iVar26;
    }
  }
  if (iVar20 < iVar26) {
    plVar15 = (longlong *)(param_1 + 0x10);
    local_188 = (int *)(param_1 + 0xa0);
    uVar25 = 0xffffffff;
    local_198 = param_1;
    local_190 = puVar24;
    do {
      lVar23 = *plVar15;
      lVar14 = (longlong)iVar20;
      p_Var17 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar23 + 8 + lVar14 * 0x18);
      if (0 < *(int *)&(p_Var17->ProcessLocksList).Blink) {
        p_Var29 = (LPCRITICAL_SECTION)(lVar23 + lVar14 * 0x18 + 8);
        local_180 = FUN_147d0c66e(local_188,*(undefined4 *)(lVar23 + lVar14 * 0x18));
        FUN_147cf2b60(local_180,&p_Var29->DebugInfo->ProcessLocksList);
        p_Var17 = p_Var29->DebugInfo;
        iVar26 = *(int *)((longlong)&(p_Var17->ProcessLocksList).Blink + 4);
        local_1a8 = p_Var29;
        FUN_144b25a0f((p_Var17->ProcessLocksList).Flink,
                      *(undefined4 *)&(p_Var17->ProcessLocksList).Blink);
        *(undefined4 *)&(p_Var17->ProcessLocksList).Blink = 0;
        if ((iVar26 < 0) && (*(int *)((longlong)&(p_Var17->ProcessLocksList).Blink + 4) != 0)) {
          FUN_147d0c8cc(&p_Var17->ProcessLocksList,0);
        }
        if (*(char *)(local_180 + 0x14) == '\x01') {
          uVar8 = (undefined1)local_1a8->DebugInfo->ContentionCount;
        }
        else {
          uVar8 = 0;
        }
        *(undefined1 *)(local_180 + 0x14) = uVar8;
        p_Var17 = local_1a8->DebugInfo;
        puVar24 = local_190;
        param_1 = local_198;
      }
      if (p_Var17->EntryCount == 0) {
        FUN_147d0c5d6(plVar15,iVar20);
      }
      uVar25 = uVar25 & ~(uint)uVar21;
      puVar16 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar16 = puVar24;
      }
      iVar26 = *(int *)(param_1 + 0x38);
      iVar20 = (int)uVar22;
      lVar23 = (longlong)iVar20;
      uVar11 = puVar16[lVar23] & uVar25;
      if (uVar11 == 0) {
        iVar12 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar12 = iVar26 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar20) {
          iVar13 = iVar20;
        }
        if (iVar12 <= iVar20) break;
        lVar14 = 0;
        while( true ) {
          iVar27 = iVar27 + 0x20;
          uVar11 = puVar16[lVar23 + lVar14 + 1];
          if (uVar11 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar13 - lVar23 == lVar14) goto LAB_1436a7072;
        }
        uVar22 = (ulonglong)(iVar20 + (int)lVar14 + 1);
        uVar25 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar11 & uVar11);
      uVar19 = uVar21 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar20 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar20 < iVar26);
  }
LAB_1436a7072:
  if (local_1a0 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_1a0);
  }
  if (*(int *)(param_1 + 0xd4) < *(int *)(param_1 + 0xa8)) {
    FUN_140b3f358();
    FUN_146320abd();
  }
  FUN_147cf28ee(param_1);
  if ((local_70[0] ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a70ec FUN_1436a70ec body=69 status=ok
// SIG undefined FUN_1436a70ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a70ec(void)

{
  _DAT_14cb04928 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a712e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04930,1);
  return;
}



// FUNCTION 1436a7131 FUN_1436a7131 body=766 status=ok
// SIG undefined FUN_1436a7131(void)

void FUN_1436a7131(uint param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  int local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)(param_1 & 0xffff) * 8);
  FUN_14631c15a(uVar6);
  local_68 = 0xffffffff;
  FUN_14682641a(&local_68,param_2);
  uVar3 = FUN_14178fc5a(&local_68);
  if (param_3 != '\0') {
    lVar4 = FUN_1463fe530(uVar6);
    uVar3 = *(undefined4 *)(lVar4 + 0x3c);
  }
  if (DAT_14ca98540 != (longlong *)0x0) {
    local_a0 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    plVar5 = DAT_14ca98540;
    local_98 = uVar6;
    do {
      lVar4 = plVar5[2];
      if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 0)) {
        if (0 < *(int *)(lVar4 + 0x50)) {
          iVar7 = 0;
          do {
            local_54 = *(undefined8 *)(lVar4 + 0x20);
            local_60 = (wchar_t *)CONCAT62(local_60._2_6_,(short)param_1);
            local_60 = (wchar_t *)CONCAT44(iVar7,(undefined4)local_60);
            local_58 = uVar3;
            cVar2 = FUN_144a21736(lVar4,&local_60);
            if ((cVar2 != '\0') && (FUN_1448e935e(uVar6,local_78,lVar4,iVar7), local_78[0] == 0)) {
              if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8)
              {
                local_60 = L"NoGlobalShader_Error";
                local_58 = 0x14;
                FUN_1446e940c(local_8c,&local_60);
                local_60 = L"ShaderCompiler";
                local_58 = 0xe;
                FUN_1446e940c(local_90,&local_60);
                local_60 = 
                L"Missing shader permutation. Please make sure cooking was successful and refer to Engine log for details."
                ;
                local_58 = 0x68;
                FUN_140208c1e(local_88,local_90,local_8c,&local_60);
                FUN_1427863e0();
                FUN_1427864dc(0,0,local_88,&DAT_14c873210);
                uVar6 = local_98;
                if (local_88[0] != (longlong *)0x0) {
                  (**(code **)(*local_88[0] + 0x10))();
                  uVar6 = local_98;
                }
              }
              local_a8 = iVar7;
              FUN_140033559(".\\Runtime/Engine/Private/ShaderCompiler/ShaderCompiler.cpp",0x1233,
                            L"Missing global shader %s\'s permutation %i, Please make sure cooking was successful."
                            ,*(undefined8 *)(lVar4 + 0x18));
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar4 + 0x50));
        }
        if (((*local_a0 != 0x40000002) && (*local_a0 == 1)) && (DAT_14c86a9f8 != '\0')) {
          FUN_140ad26c0();
          GetCurrentThreadId();
        }
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)0x0);
  }
  if (DAT_14ca985f8 != (longlong *)0x0) {
    plVar5 = DAT_14ca985f8;
    do {
      puVar1 = (undefined8 *)plVar5[2];
      if (((*(longlong *)puVar1[4] != 0) && (*(int *)(*(longlong *)puVar1[4] + 8) == 0)) &&
         ((cVar2 = FUN_14741c8e8(puVar1,param_1,uVar3), cVar2 != '\0' &&
          (FUN_14741c9ae(uVar6,&local_60,puVar1), local_60 == (wchar_t *)0x0)))) {
        FUN_140033559(".\\Runtime/Engine/Private/ShaderCompiler/ShaderCompiler.cpp",0x126d,
                      L"Missing global shader pipeline %s, Please make sure cooking was successful."
                      ,*puVar1);
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a7430 FUN_1436a7430 body=3242 status=ok
// SIG undefined FUN_1436a7430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a7430(ushort param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined1 auStack_2c8 [32];
  undefined **local_2a8;
  int local_294;
  undefined8 local_290;
  longlong local_288;
  ulonglong uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 uStack_264;
  undefined4 local_25c;
  longlong *local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined1 auStack_22c [4];
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 auStack_21c [4];
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined1 auStack_20c [4];
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1fc [4];
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 auStack_1ec [4];
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined2 uStack_1da;
  undefined4 uStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined **local_1c8;
  ulonglong local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined2 local_170;
  undefined8 local_16c;
  undefined2 local_164;
  undefined2 local_160;
  undefined8 local_15c;
  undefined2 local_154;
  uint local_70;
  undefined1 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb04948) && (FUN_144b3d300(&DAT_14cb04948), DAT_14cb04948 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb04940 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PSOPrecache.GlobalShaders",1);
    _Init_thread_footer(&DAT_14cb04948);
  }
  if (((DAT_14cb04940 == (longlong *)0x0) ||
      (iVar5 = (**(code **)(*DAT_14cb04940 + 0xb0))(), iVar5 == 0)) ||
     ((cVar4 = FUN_1406917e6(), cVar4 == '\0' &&
      ((DAT_14c760d84 == 0 || ((DAT_14ca84f5a & 1) == 0)))))) goto LAB_1436a74bb;
  local_240 = 0xffffffff;
  FUN_14682641a(&local_240,param_2);
  uVar6 = FUN_14178fc5a(&local_240);
  local_290 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)param_1 * 8);
  local_294 = (**(code **)(*DAT_14cb04940 + 0xb0))();
  local_258 = (longlong *)0x0;
  uStack_250 = 0;
  if (DAT_14ca98540 != (longlong *)0x0) {
    plVar19 = DAT_14ca98540;
    do {
      lVar22 = plVar19[2];
      if (((lVar22 != 0) && (*(int *)(lVar22 + 8) == 0)) &&
         (((local_294 != 1 || (*(char *)(lVar22 + 0x48) == '\x05')) && (0 < *(int *)(lVar22 + 0x50))
          ))) {
        iVar5 = 0;
        do {
          uVar13 = *(undefined8 *)(lVar22 + 0x20);
          local_1e8 = (code *)CONCAT62(local_1e8._2_6_,param_1);
          local_1e8 = (code *)CONCAT44(iVar5,(undefined4)local_1e8);
          uStack_1dc = (undefined2)uVar13;
          uStack_1da = (undefined2)((ulonglong)uVar13 >> 0x10);
          uStack_1d8 = (undefined4)((ulonglong)uVar13 >> 0x20);
          uStack_1e0 = uVar6;
          cVar4 = FUN_144a21736(lVar22,&local_1e8);
          if (cVar4 != '\0') {
            uVar13 = *(undefined8 *)(lVar22 + 0x20);
            local_1e8 = (code *)CONCAT62(local_1e8._2_6_,param_1);
            local_1e8 = (code *)CONCAT44(iVar5,(undefined4)local_1e8);
            uStack_1dc = (undefined2)uVar13;
            uStack_1da = (undefined2)((ulonglong)uVar13 >> 0x10);
            uStack_1d8 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if ((((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] != 1) ||
                ((uStack_1e0 = uVar6, *(byte *)(lVar22 + 0x48) < 6 &&
                 ((0x29U >> (*(byte *)(lVar22 + 0x48) & 0x1f) & 1) != 0)))) &&
               ((uStack_1e0 = uVar6, cVar4 = (**(code **)(lVar22 + 0x70))(&local_1e8), cVar4 == '\0'
                && (FUN_1448e935e(local_290,&local_1e8,lVar22,iVar5), uVar20 = uStack_250,
                   local_1e8 != (code *)0x0)))) {
              lVar24 = (longlong)(int)uStack_250;
              uVar7 = (int)uStack_250 + 1;
              uStack_250 = CONCAT44(uStack_250._4_4_,uVar7);
              if (uStack_250._4_4_ < uVar7) {
                FUN_141790964(&local_258,uVar20 & 0xffffffff);
              }
              plVar18 = local_258 + lVar24 * 2;
              *(undefined4 *)plVar18 = (undefined4)local_1e8;
              *(undefined4 *)((longlong)plVar18 + 4) = local_1e8._4_4_;
              *(undefined4 *)(plVar18 + 1) = uStack_1e0;
              *(uint *)((longlong)plVar18 + 0xc) = CONCAT22(uStack_1da,uStack_1dc);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar22 + 0x50));
      }
      plVar18 = local_258;
      plVar19 = (longlong *)*plVar19;
    } while (plVar19 != (longlong *)0x0);
    lVar22 = (longlong)(int)uStack_250;
    if (0 < lVar22) {
      if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
        cVar4 = FUN_1406917e6();
        if (cVar4 == '\0') goto LAB_1436a776c;
        local_1c8 = (undefined **)0x0;
        local_1c0 = 0x400000000;
        if ((longlong)(int)uStack_250 == 0) {
          uVar20 = 0;
        }
        else {
          plVar18 = local_258 + (longlong)(int)uStack_250 * 2;
          plVar19 = local_258;
          do {
            (**(code **)(**(longlong **)(plVar19[1] + 8) + 0x30))
                      (*(longlong **)(plVar19[1] + 8),*(undefined4 *)(*plVar19 + 0xd4),&local_1e8);
            plVar19 = plVar19 + 2;
          } while (plVar19 != plVar18);
          uVar20 = local_1c0 & 0xffffffff;
        }
        ppuVar14 = (undefined **)&local_1e8;
        if (local_1c8 != (undefined **)0x0) {
          ppuVar14 = local_1c8;
        }
        FUN_144717c65(ppuVar14,uVar20);
        ppuVar14 = local_1c8;
      }
      else {
        local_278 = 0;
        uStack_274 = 0;
        iStack_270 = (int)uStack_250;
        FUN_1463ff92a(&local_278,uStack_250 & 0xffffffff);
        memcpy((void *)CONCAT44(uStack_274,local_278),plVar18,lVar22 << 4);
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar5 = *(int *)(lVar22 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar5 != 2) {
            if (iVar5 != 1) goto LAB_1436a7a46;
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1436a7a4f;
            goto LAB_1436a7baa;
          }
LAB_1436a7a4f:
          if ((longlong)iStack_270 != 0) {
            plVar19 = (longlong *)CONCAT44(uStack_274,local_278);
            plVar18 = plVar19 + (longlong)iStack_270 * 2;
            do {
              lVar22 = *plVar19;
              plVar17 = (longlong *)
                        ((longlong)(int)(*(ulonglong *)(lVar22 + 0xc0) >> 1) * 8 +
                        *(longlong *)(*(longlong *)(plVar19[1] + 0x18) + 0x28));
              if ((*(ulonglong *)(lVar22 + 0xc0) & 1) == 0) {
                plVar17 = (longlong *)(lVar22 + 0xc0);
              }
              if (lVar22 != 0) {
                uVar13 = *(undefined8 *)(*plVar17 + 0x18);
                lVar24 = *(longlong *)(plVar19[1] + 8);
                lVar10 = *(longlong *)
                          (*(longlong *)(lVar24 + 0x50) + (longlong)*(int *)(lVar22 + 0xd4) * 8);
                if (lVar10 == 0) {
                  lVar10 = FUN_1400bafc2(lVar24,(longlong)*(int *)(lVar22 + 0xd4),0);
                }
                if (lVar10 != 0) {
                  local_2a8 = (undefined **)((ulonglong)local_2a8 & 0xffffffffffffff00);
                  FUN_14053ef1e(DAT_14ca811d0,&local_1e8,lVar10,uVar13);
                  puVar23 = (undefined8 *)CONCAT26(uStack_1da,CONCAT24(uStack_1dc,uStack_1e0));
                  if (puVar23 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(puVar23 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar23)(puVar23,1);
                    }
                  }
                }
              }
              plVar19 = plVar19 + 2;
            } while (plVar19 != plVar18);
          }
        }
        else {
LAB_1436a7a46:
          if (iVar5 == 0x10) goto LAB_1436a7a4f;
LAB_1436a7baa:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 == '\x01') && (iVar5 = *(int *)(lVar22 + 0xc60), iVar5 != 2)) {
              if (iVar5 == 1) {
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_1436a7ff1;
              }
              goto LAB_1436a7bdb;
            }
LAB_1436a7ff1:
            if ((longlong)iStack_270 != 0) {
              plVar19 = (longlong *)CONCAT44(uStack_274,local_278);
              plVar18 = plVar19 + (longlong)iStack_270 * 2;
              do {
                lVar22 = *plVar19;
                plVar17 = (longlong *)
                          ((longlong)(int)(*(ulonglong *)(lVar22 + 0xc0) >> 1) * 8 +
                          *(longlong *)(*(longlong *)(plVar19[1] + 0x18) + 0x28));
                if ((*(ulonglong *)(lVar22 + 0xc0) & 1) == 0) {
                  plVar17 = (longlong *)(lVar22 + 0xc0);
                }
                if (lVar22 != 0) {
                  uVar13 = *(undefined8 *)(*plVar17 + 0x18);
                  lVar24 = *(longlong *)(plVar19[1] + 8);
                  lVar10 = *(longlong *)
                            (*(longlong *)(lVar24 + 0x50) + (longlong)*(int *)(lVar22 + 0xd4) * 8);
                  if (lVar10 == 0) {
                    lVar10 = FUN_1400bafc2(lVar24,(longlong)*(int *)(lVar22 + 0xd4),0);
                  }
                  if (lVar10 != 0) {
                    local_2a8 = (undefined **)((ulonglong)local_2a8 & 0xffffffffffffff00);
                    FUN_14053ef1e(DAT_14ca811d0,&local_1e8,lVar10,uVar13);
                    puVar23 = (undefined8 *)CONCAT26(uStack_1da,CONCAT24(uStack_1dc,uStack_1e0));
                    if (puVar23 != (undefined8 *)0x0) {
                      LOCK();
                      piVar1 = (int *)(puVar23 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar23)(puVar23,1);
                      }
                    }
                  }
                }
                plVar19 = plVar19 + 2;
              } while (plVar19 != plVar18);
            }
          }
          else {
LAB_1436a7bdb:
            if (DAT_14ca9a43c == 0) {
              puVar23 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar12 = (uint *)*puVar23;
              if (puVar12 != (uint *)0x0) goto LAB_1436a7d14;
              while( true ) {
                uVar7 = *(uint *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x318);
                if ((uVar7 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar7 | 1;
                  __tlregdtor(&LAB_1436a8c8c);
                }
                lVar22 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar11 = *(undefined4 **)(lVar22 + 0x310);
                *(undefined8 *)(lVar22 + 0x310) = 0;
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar11 = 0xffffffff;
                *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar23 = puVar11;
                FUN_140217a48(puVar23);
                puVar12 = (uint *)*puVar23;
LAB_1436a7d14:
                puVar21 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar16 = (uint *)(puVar21 + 0x17);
                uVar7 = puVar12[0x12];
                if (puVar16 <= puVar12 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                  LOCK();
                  uVar2 = *puVar12;
                  *puVar12 = *puVar12 + uVar7 + 1;
                  UNLOCK();
                  if ((uVar2 ^ uVar7) != 0xffffffff) break;
                  puVar12 = (uint *)*puVar23;
                  *puVar12 = 0xffffffff;
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                  puVar12[0x12] = 0;
                  *puVar23 = puVar12;
                  puVar21 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                  puVar16 = (uint *)(puVar21 + 0x17);
                  uVar7 = 0;
                  if (puVar16 <= puVar12 + 0x4000) {
                    uVar7 = 1;
                    goto LAB_1436a7d94;
                  }
                }
              }
              uVar7 = uVar7 + 1;
LAB_1436a7d94:
              *(uint **)(puVar12 + 0x10) = puVar16;
              puVar12[0x12] = uVar7;
              iVar5 = 0;
              FUN_1447247dc(puVar21,0);
              *puVar21 = &PTR_FUN_14aa815a0;
              puVar21[0x15] = CONCAT44(uStack_274,local_278);
              local_278 = 0;
              uStack_274 = 0;
              *(int *)(puVar21 + 0x16) = iStack_270;
              *(undefined4 *)((longlong)puVar21 + 0xb4) = uStack_26c;
              iStack_270 = 0;
              uStack_26c = 0;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar7 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
                  uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
                }
                else {
                  uVar20 = 2;
                }
              }
              else {
                iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar20 = 5;
              }
              if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
              }
              puVar21[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar21[9] = puVar21;
              puVar21[10] = puVar21;
              lVar22 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar22 == 0) {
                uVar3 = 1;
                if ((char)uVar20 != '\x06') {
                  uVar3 = uVar20;
                }
                uVar20 = uVar3;
                uVar13 = 0;
              }
              else {
                if ((char)uVar20 == '\x06') {
                  uVar20 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar22 + 0x30);
              }
              puVar21[0xf] = uVar13;
              puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar21 + 0x1c) = iVar5;
              if (puVar21 == (undefined8 *)0x0) {
                local_1e8 = (code *)CONCAT71(local_1e8._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
                UNLOCK();
                local_1e8 = (code *)CONCAT71(local_1e8._1_7_,1);
                FUN_1447439e4(puVar21);
                LOCK();
                piVar1 = (int *)(puVar21 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar21)(puVar21,1);
                }
              }
            }
            else {
              uStack_1d8 = 0;
              iStack_1d4 = 0;
              local_1c8 = &PTR_LAB_14aa81540;
              local_1c0 = CONCAT44(uStack_274,local_278);
              uStack_1b8 = CONCAT44(uStack_26c,iStack_270);
              local_278 = 0;
              uStack_274 = 0;
              iStack_270 = 0;
              uStack_26c = 0;
              local_1e8 = FUN_1436ab4de;
              local_2a8 = (undefined **)&local_1e8;
              FUN_14005a792(&DAT_14ca9a440,L"PrecachePSOsForGlobalShaders",&DAT_14cb05358);
              if (local_1e8 != (code *)0x0) {
                pppuVar15 = (undefined ***)CONCAT44(iStack_1d4,uStack_1d8);
                if ((undefined ***)CONCAT44(iStack_1d4,uStack_1d8) == (undefined ***)0x0) {
                  pppuVar15 = &local_1c8;
                }
                (*(code *)(*pppuVar15)[2])();
              }
            }
          }
        }
        ppuVar14 = (undefined **)CONCAT44(uStack_274,local_278);
      }
      if (ppuVar14 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1436a776c:
  uStack_274 = (undefined4)DAT_14c967818;
  iStack_270 = (int)((ulonglong)DAT_14c967818 >> 0x20);
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  local_25c = 0;
  local_278 = DAT_14c760db4;
  local_1e8 = (code *)0x200000007;
  uStack_1e0 = 3;
  uStack_1dc = 0;
  local_1d0 = DAT_14c967818;
  local_1c8 = (undefined **)&DAT_100000002;
  local_1c0 = CONCAT35(local_1c0._5_3_,1);
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = _DAT_14ca83a30;
  uStack_190 = _DAT_14ca83a38;
  local_188 = DAT_14ca83a40;
  local_184 = DAT_14ca850b0;
  uStack_180 = _DAT_14ca850b4;
  uStack_17c = _DAT_14ca850b8;
  uStack_178 = uRam000000014ca850bc;
  local_174 = DAT_14ca850c0;
  local_170 = 0x9b;
  local_164 = 0;
  local_16c = 0;
  local_160 = 0x9b;
  local_154 = 0;
  local_15c = 0;
  lVar22 = 0x100;
  do {
    *(undefined4 *)((longlong)&uStack_250 + lVar22) = 0xffffffff;
    *(undefined1 *)((longlong)&uStack_250 + lVar22 + 4) = 0;
    *(undefined8 *)((longlong)&uStack_248 + lVar22) = 0;
    *(undefined4 *)((longlong)&local_240 + lVar22) = 0xffffffff;
    *(undefined1 *)((longlong)&local_240 + lVar22 + 4) = 0;
    *(undefined8 *)((longlong)&local_238 + lVar22) = 0;
    *(undefined4 *)((longlong)&uStack_230 + lVar22) = 0xffffffff;
    auStack_22c[lVar22] = 0;
    *(undefined8 *)((longlong)&uStack_228 + lVar22) = 0;
    *(undefined4 *)((longlong)&uStack_220 + lVar22) = 0xffffffff;
    auStack_21c[lVar22] = 0;
    *(undefined8 *)((longlong)&uStack_218 + lVar22) = 0;
    *(undefined4 *)((longlong)&uStack_210 + lVar22) = 0xffffffff;
    auStack_20c[lVar22] = 0;
    *(undefined8 *)((longlong)&uStack_208 + lVar22) = 0;
    *(undefined4 *)((longlong)&uStack_200 + lVar22) = 0xffffffff;
    auStack_1fc[lVar22] = 0;
    *(undefined8 *)((longlong)&uStack_1f8 + lVar22) = 0;
    *(undefined4 *)((longlong)&uStack_1f0 + lVar22) = 0xffffffff;
    auStack_1ec[lVar22] = 0;
    *(undefined8 *)((longlong)&local_1e8 + lVar22) = 0;
    lVar22 = lVar22 + 0x70;
  } while (lVar22 != 0x1e0);
  local_70 = local_70 & 0xfffffe00 | 4;
  local_6c = 0;
  uStack_1d8 = uStack_274;
  iStack_1d4 = iStack_270;
  FUN_1400521a2(&local_1e8,&local_278);
  local_288 = 0;
  uStack_280 = 0;
  FUN_1417e1d8e(&local_288,0x400);
  if (0 < DAT_14c9ebd80) {
    puVar23 = &DAT_14cafe3e0;
    uVar20 = 0;
    iVar5 = DAT_14c9ebd80;
    do {
      if ((code *)*puVar23 != (code *)0x0) {
        (*(code *)*puVar23)(&local_1e8,uVar20 & 0xffffffff,&local_288);
        iVar5 = DAT_14c9ebd80;
      }
      uVar20 = uVar20 + 1;
      puVar23 = puVar23 + 2;
    } while ((longlong)uVar20 < (longlong)iVar5);
  }
  FUN_1405be4a9(&local_238,&local_288);
  FUN_140231422(&local_238);
  FUN_1405be1b2(local_288,uStack_280 & 0xffffffff);
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  if (local_258 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1436a74bb:
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a80fd FUN_1436a80fd body=410 status=ok
// SIG undefined FUN_1436a80fd(void)

longlong * FUN_1436a80fd(longlong *param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(&DAT_14ca814a0 + (ulonglong)param_2 * 0x3c);
  FUN_1400021e4(&local_48,local_40);
  FUN_140056680(&local_68);
  iVar1 = (int)local_60;
  iVar3 = ((int)local_60 == 0) + 0x13;
  local_58 = local_68;
  local_68 = 0;
  local_50 = (int)local_60;
  iVar2 = local_60._4_4_;
  local_4c = local_60._4_4_;
  local_60 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar1 <= iVar4) {
    if (-1 < iVar4) {
      if (iVar2 < iVar4) {
        FUN_1446f8c06(&local_58);
      }
      FUN_1401aebe8(&local_58,L"GlobalShaderCache-",0x12);
      FUN_1401c7f3e(&local_30,&local_58,local_40);
      iVar1 = (int)local_28;
      iVar3 = ((int)local_28 == 0) + 4;
      *param_1 = local_30;
      local_30 = 0;
      *(int *)(param_1 + 1) = (int)local_28;
      iVar2 = local_28._4_4_;
      *(int *)((longlong)param_1 + 0xc) = local_28._4_4_;
      local_28 = 0;
      iVar4 = iVar3 + iVar1;
      if (iVar4 < iVar1) goto LAB_1436a828a;
      if (-1 < iVar4) {
        if (iVar2 < iVar4) {
          FUN_1446f8c06(param_1);
        }
        FUN_1400020e8(param_1,L".bin",4);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_40[0] != 0) {
          FUN_1400020a8();
        }
        if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
LAB_1436a828a:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1436a8299 FUN_1436a8299 body=789 status=ok
// SIG undefined FUN_1436a8299(void)

void FUN_1436a8299(void)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 uStack_150;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8 [3];
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14080c2b4();
  uVar7 = DAT_14caec4b4 | 1 << ((byte)DAT_14c760db4 & 0x1f);
  do {
    uVar9 = -uVar7 & uVar7;
    uVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if (uVar9 == 0) {
      uVar3 = 0;
    }
    uVar1 = *(ushort *)(&DAT_14ca85070 + (ulonglong)uVar3 * 2);
    FUN_140f206bc(*(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)uVar1 * 8));
    FUN_1416b6897(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)uVar3 * 2),0,1);
    FUN_1436a7131((ulonglong)uVar1,0,0);
    bVar13 = uVar9 != uVar7;
    puVar11 = DAT_14caa0098;
    uVar7 = uVar9 ^ uVar7;
  } while (bVar13);
  for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
    FUN_1432232ff(puVar11[2],0);
  }
  FUN_1403a2f52(&local_139);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_1435aa49e(*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xfc0),local_e8);
  if ((longlong)local_d0 != 0) {
    lVar10 = 0;
    do {
      puVar11 = *(undefined8 **)(local_e8[2] + lVar10);
      cVar6 = (**(code **)*puVar11)(puVar11);
      if (cVar6 != '\0') {
        uVar8 = FUN_14001cc68(0x18,0x10);
        FUN_1417bca60(uVar8,puVar11,&local_98);
        uVar4 = uStack_150;
        lVar12 = (longlong)(int)uStack_150;
        uVar7 = (int)uStack_150 + 1;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar7);
        if (uStack_150._4_4_ < uVar7) {
          FUN_1456bd870(&local_158,uVar4 & 0xffffffff);
        }
        *(undefined8 *)(local_158 + lVar12 * 8) = uVar8;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)local_d0 * 8 != lVar10);
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_145d6313c(local_e8,&local_98);
  FUN_1414effc2(local_e8);
  lVar10 = local_158;
  iVar5 = (int)uStack_150;
  if ((int)uStack_150 != 0) {
    lVar12 = 0;
    do {
      lVar2 = *(longlong *)(lVar10 + lVar12 * 8);
      if (lVar2 != 0) {
        FUN_1405ed516(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar12 = lVar12 + 1;
    } while (iVar5 != (int)lVar12);
  }
  uVar4 = uStack_150 >> 0x20;
  uStack_150 = uStack_150 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_1447ab16c(&local_158,0);
  }
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_145d6313c(&local_138,&local_98);
  FUN_1414effc2(&local_138);
  FUN_147d0ac90(&local_158);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_141145f8e(&local_98);
  FUN_1403a2e22(&local_139);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a85af FUN_1436a85af body=69 status=ok
// SIG undefined FUN_1436a85af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a85af(void)

{
  _DAT_14cb04e78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a85f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04e80,1);
  return;
}



// FUNCTION 1436a85f4 FUN_1436a85f4 body=116 status=ok
// SIG undefined FUN_1436a85f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a85f4(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  
  if ((*(int *)(param_1 + 1) != 0) &&
     (param_1 = (undefined8 *)*param_1, (void **)param_1 != &DAT_14cb04e68)) {
    iVar1 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    _DAT_14cb04e70 = iVar1;
    if (iVar1 == 0 && DAT_14cb04e74 == 0) {
      DAT_14cb04e74 = 0;
    }
    else {
      FUN_1446dd670(&DAT_14cb04e68,iVar1);
      if (iVar1 != 0) {
        memcpy(DAT_14cb04e68,_Src,(longlong)iVar1 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1436a8668 FUN_1436a8668 body=69 status=ok
// SIG undefined FUN_1436a8668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a8668(void)

{
  _DAT_14cb04e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a86aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb04e90,1);
  return;
}



// FUNCTION 1436a86c5 FUN_1436a86c5 body=97 status=ok
// SIG undefined FUN_1436a86c5(void)

char FUN_1436a86c5(void)

{
  char cVar1;
  longlong *plVar2;
  
  if (((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xfe0) != 0)) &&
     (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x78))();
    if ((plVar2 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2), cVar1 != '\0')) {
      return cVar1;
    }
    cVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x38))();
    if (cVar1 != '\0') {
      return '%';
    }
  }
  return '\x02';
}



// FUNCTION 1436a8726 FUN_1436a8726 body=43 status=ok
// SIG undefined FUN_1436a8726(void)

void FUN_1436a8726(undefined8 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001436a874e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1436a8752 FUN_1436a8752 body=106 status=ok
// SIG undefined FUN_1436a8752(void)

undefined8 * FUN_1436a8752(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14aa810e0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1436a87c2 FUN_1436a87c2 body=29 status=ok
// SIG undefined FUN_1436a87c2(void)

void FUN_1436a87c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436a87e0 FUN_1436a87e0 body=71 status=ok
// SIG undefined FUN_1436a87e0(void)

undefined8 * FUN_1436a87e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa810e0;
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



// FUNCTION 1436a882a FUN_1436a882a body=40 status=ok
// SIG undefined FUN_1436a882a(void)

void FUN_1436a882a(undefined8 *param_1)

{
  (**(code **)(*DAT_14c9485b8 + 0x2d0))(DAT_14c9485b8,*param_1);
  FUN_14282b7b8(*param_1);
  return;
}



// FUNCTION 1436a8868 FUN_1436a8868 body=29 status=ok
// SIG undefined FUN_1436a8868(void)

undefined8 FUN_1436a8868(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436a8886 FUN_1436a8886 body=94 status=ok
// SIG undefined FUN_1436a8886(void)

void FUN_1436a8886(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1[8];
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a88f0 FUN_1436a88f0 body=29 status=ok
// SIG undefined FUN_1436a88f0(void)

void FUN_1436a88f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436a890e FUN_1436a890e body=71 status=ok
// SIG undefined FUN_1436a890e(void)

undefined8 * FUN_1436a890e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa81140;
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



// FUNCTION 1436a8956 FUN_1436a8956 body=118 status=ok
// SIG undefined FUN_1436a8956(void)

undefined8 * FUN_1436a8956(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a89cc FUN_1436a89cc body=592 status=ok
// SIG undefined FUN_1436a89cc(void)

void FUN_1436a89cc(longlong param_1)

{
  uint uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  void *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong local_b8;
  longlong *local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0xc0) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0xb8);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))
                    (*(longlong **)(param_1 + 0xb0),puVar5,*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xd0) == 0) goto LAB_1436a8a2a;
  local_d8 = (void *)0x0;
  uVar1 = *(uint *)(param_1 + 0xc0);
  _Src = *(void **)(param_1 + 0xb8);
  local_d0 = CONCAT44(local_d0._4_4_,uVar1);
  uStack_c4 = uVar2;
  if ((longlong)(int)uVar1 == 0) {
    local_d0 = (ulonglong)uVar1;
    local_c8 = *(undefined4 *)(param_1 + 200);
    local_b8 = *(longlong *)(param_1 + 0xd0);
LAB_1436a8af7:
    local_a8[0] = (longlong *)0x0;
    puVar3 = (undefined8 *)(param_1 + 0xf0);
    if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0xe0);
    }
    (**(code **)*puVar3)(puVar3,local_a8);
  }
  else {
    FUN_1446dd670(&local_d8,uVar1,0);
    memcpy(local_d8,_Src,(longlong)(int)uVar1 * 2);
    local_b8 = *(longlong *)(param_1 + 0xd0);
    local_c8 = *(undefined4 *)(param_1 + 200);
    local_a8[0] = (longlong *)0x0;
    if (local_b8 != 0) goto LAB_1436a8af7;
  }
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *local_68 = &PTR_FUN_14aa81180;
  local_68[2] = local_d8;
  local_d8 = (void *)0x0;
  *(undefined4 *)(local_68 + 3) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_68 + 0x1c) = local_d0._4_4_;
  local_d0 = 0;
  local_68[4] = CONCAT44(uStack_c4,local_c8);
  local_68[6] = local_b8;
  local_68[8] = local_a8[0];
  local_a8[0] = (longlong *)0x0;
  *(undefined4 *)(local_68 + 0xc) = local_88;
  *(undefined4 *)((longlong)local_68 + 100) = uStack_84;
  *(undefined4 *)(local_68 + 0xd) = uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x6c) = uStack_7c;
  *(undefined4 *)(local_68 + 10) = local_98;
  *(undefined4 *)((longlong)local_68 + 0x54) = uStack_94;
  *(undefined4 *)(local_68 + 0xb) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_8c;
  if (local_b8 != 0) {
    local_b8 = 0;
  }
  if (local_68 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_78[0] = FUN_1436a8cb4;
  }
  FUN_147ced7a0(local_78);
  if (local_b8 != 0) {
    plVar4 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar4 = (longlong *)&local_98;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar4 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xe0);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
LAB_1436a8a2a:
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a8c1e FUN_1436a8c1e body=110 status=ok
// SIG undefined FUN_1436a8c1e(void)

undefined8 * FUN_1436a8c1e(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a8cb4 FUN_1436a8cb4 body=119 status=ok
// SIG undefined FUN_1436a8cb4(void)

void FUN_1436a8cb4(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(undefined4 *)(param_1 + 0x10);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1,&local_2c,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a8d2c FUN_1436a8d2c body=191 status=ok
// SIG undefined FUN_1436a8d2c(void)

undefined8 * FUN_1436a8d2c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa81180;
  puVar1 = puVar4 + 2;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  puVar4[8] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 8);
  }
  return puVar1;
}



// FUNCTION 1436a8df2 FUN_1436a8df2 body=29 status=ok
// SIG undefined FUN_1436a8df2(void)

void FUN_1436a8df2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436a8e10 FUN_1436a8e10 body=85 status=ok
// SIG undefined FUN_1436a8e10(void)

undefined8 * FUN_1436a8e10(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa81180;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436a8e66 FUN_1436a8e66 body=118 status=ok
// SIG undefined FUN_1436a8e66(void)

undefined8 * FUN_1436a8e66(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a8edc FUN_1436a8edc body=663 status=ok
// SIG undefined FUN_1436a8edc(void)

void FUN_1436a8edc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  void *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  longlong local_b8;
  longlong *local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(param_1 + 200) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0xc0);
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))
                    (*(longlong **)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb8),puVar7,
                     *(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 0xf0) == 0) goto LAB_1436a8f4d;
  local_d8 = (void *)0x0;
  uVar3 = *(uint *)(param_1 + 200);
  _Src = *(void **)(param_1 + 0xc0);
  local_d0 = CONCAT44(local_d0._4_4_,uVar3);
  local_c4 = uVar4;
  if ((longlong)(int)uVar3 == 0) {
    local_d0 = (ulonglong)uVar3;
    local_c8 = *(undefined4 *)(param_1 + 0xd0);
    local_b8 = *(longlong *)(param_1 + 0xf0);
LAB_1436a9049:
    local_a8[0] = (longlong *)0x0;
    puVar5 = (undefined8 *)(param_1 + 0x110);
    if (*(undefined8 **)(param_1 + 0x100) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x100);
    }
    (**(code **)*puVar5)(puVar5,local_a8);
  }
  else {
    FUN_1446dd670(&local_d8,uVar3,0);
    memcpy(local_d8,_Src,(longlong)(int)uVar3 * 2);
    local_b8 = *(longlong *)(param_1 + 0xf0);
    local_c8 = *(undefined4 *)(param_1 + 0xd0);
    local_a8[0] = (longlong *)0x0;
    if (local_b8 != 0) goto LAB_1436a9049;
  }
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *local_68 = &PTR_FUN_14aa811c0;
  local_68[2] = local_d8;
  local_d8 = (void *)0x0;
  *(undefined4 *)(local_68 + 3) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_68 + 0x1c) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined1 *)((longlong)local_68 + 0x24) = local_c4;
  *(undefined4 *)(local_68 + 4) = local_c8;
  local_68[6] = local_b8;
  local_68[8] = local_a8[0];
  local_a8[0] = (longlong *)0x0;
  *(undefined4 *)(local_68 + 0xc) = local_88;
  *(undefined4 *)((longlong)local_68 + 100) = uStack_84;
  *(undefined4 *)(local_68 + 0xd) = uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x6c) = uStack_7c;
  *(undefined4 *)(local_68 + 10) = local_98;
  *(undefined4 *)((longlong)local_68 + 0x54) = uStack_94;
  *(undefined4 *)(local_68 + 0xb) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_8c;
  if (local_b8 != 0) {
    local_b8 = 0;
  }
  if (local_68 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_78[0] = FUN_1436a91e2;
  }
  FUN_147ced7a0(local_78);
  if (local_b8 != 0) {
    plVar6 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar6 = (longlong *)&local_98;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    plVar6 = (longlong *)(param_1 + 0x110);
    if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x100);
    }
    (**(code **)(*plVar6 + 0x10))();
  }
LAB_1436a8f4d:
  plVar6 = *(longlong **)(param_1 + 0xe0);
  if (plVar6 != (longlong *)0x0) {
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
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a9174 FUN_1436a9174 body=110 status=ok
// SIG undefined FUN_1436a9174(void)

undefined8 * FUN_1436a9174(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a91e2 FUN_1436a91e2 body=119 status=ok
// SIG undefined FUN_1436a91e2(void)

void FUN_1436a91e2(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2d = *(undefined1 *)(param_1 + 0x14);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1,&local_2c,&local_2d);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a925a FUN_1436a925a body=195 status=ok
// SIG undefined FUN_1436a925a(void)

undefined8 * FUN_1436a925a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa811c0;
  puVar1 = puVar4 + 2;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)((longlong)puVar4 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  puVar4[8] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 8);
  }
  return puVar1;
}



// FUNCTION 1436a9324 FUN_1436a9324 body=29 status=ok
// SIG undefined FUN_1436a9324(void)

void FUN_1436a9324(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436a9342 FUN_1436a9342 body=85 status=ok
// SIG undefined FUN_1436a9342(void)

undefined8 * FUN_1436a9342(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa811c0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436a9398 FUN_1436a9398 body=118 status=ok
// SIG undefined FUN_1436a9398(void)

undefined8 * FUN_1436a9398(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a940e FUN_1436a940e body=829 status=ok
// SIG undefined FUN_1436a940e(void)

void FUN_1436a940e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *_Src;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_128 [32];
  longlong *local_108;
  void *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  longlong local_d8;
  longlong *local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong *local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar7 = *(longlong **)(param_1 + 0xb0);
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f2c880;
  plVar5[2] = 0;
  plVar5[3] = 0;
  if (*(int *)(param_1 + 200) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0xc0);
  }
  local_108 = plVar5 + 2;
  uVar4 = (**(code **)(*plVar7 + 0x30))
                    (plVar7,*(undefined1 *)(param_1 + 0xb8),puVar8,*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 0xe0) == 0) goto LAB_1436a94b7;
  local_f8 = (void *)0x0;
  uVar3 = *(uint *)(param_1 + 200);
  _Src = *(void **)(param_1 + 0xc0);
  local_f0 = CONCAT44(local_f0._4_4_,uVar3);
  local_e4 = uVar4;
  if ((longlong)(int)uVar3 == 0) {
    local_f0 = (ulonglong)uVar3;
    local_e8 = *(undefined4 *)(param_1 + 0xd0);
    local_d8 = *(longlong *)(param_1 + 0xe0);
LAB_1436a95dd:
    local_c8[0] = (longlong *)0x0;
    puVar6 = (undefined8 *)(param_1 + 0x100);
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0xf0);
    }
    (**(code **)*puVar6)(puVar6,local_c8);
  }
  else {
    FUN_1446dd670(&local_f8,uVar3,0);
    memcpy(local_f8,_Src,(longlong)(int)uVar3 * 2);
    local_d8 = *(longlong *)(param_1 + 0xe0);
    local_e8 = *(undefined4 *)(param_1 + 0xd0);
    local_c8[0] = (longlong *)0x0;
    if (local_d8 != 0) goto LAB_1436a95dd;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88[0] = (code *)0x0;
  local_98 = plVar5 + 2;
  local_90 = plVar5;
  local_78 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *local_78 = &PTR_FUN_14aa81200;
  local_78[2] = local_f8;
  local_f8 = (void *)0x0;
  *(undefined4 *)(local_78 + 3) = (undefined4)local_f0;
  *(undefined4 *)((longlong)local_78 + 0x1c) = local_f0._4_4_;
  local_f0 = 0;
  *(undefined1 *)((longlong)local_78 + 0x24) = local_e4;
  *(undefined4 *)(local_78 + 4) = local_e8;
  local_78[6] = local_d8;
  local_78[8] = local_c8[0];
  local_c8[0] = (longlong *)0x0;
  *(undefined4 *)(local_78 + 0xc) = local_a8;
  *(undefined4 *)((longlong)local_78 + 100) = uStack_a4;
  *(undefined4 *)(local_78 + 0xd) = uStack_a0;
  *(undefined4 *)((longlong)local_78 + 0x6c) = uStack_9c;
  *(undefined4 *)(local_78 + 10) = local_b8;
  *(undefined4 *)((longlong)local_78 + 0x54) = uStack_b4;
  *(undefined4 *)(local_78 + 0xb) = uStack_b0;
  *(undefined4 *)((longlong)local_78 + 0x5c) = uStack_ac;
  if (local_d8 != 0) {
    local_d8 = 0;
  }
  local_78[0xe] = local_98;
  local_78[0xf] = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  if (local_78 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_88[0] = FUN_1436a97ba;
  }
  FUN_147ced7a0(local_88);
  plVar7 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_d8 != 0) {
    plVar7 = local_c8[0];
    if (local_c8[0] == (longlong *)0x0) {
      plVar7 = (longlong *)&local_b8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1436a94b7:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    plVar7 = (longlong *)(param_1 + 0x100);
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0xf0);
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a974c FUN_1436a974c body=110 status=ok
// SIG undefined FUN_1436a974c(void)

undefined8 * FUN_1436a974c(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a97ba FUN_1436a97ba body=132 status=ok
// SIG undefined FUN_1436a97ba(void)

void FUN_1436a97ba(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  local_35 = *(undefined1 *)(param_1 + 0x14);
  local_34 = *(undefined4 *)(param_1 + 0x10);
  pcVar2 = *(code **)(param_1 + 0x20);
  plVar4 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  local_48 = uVar1;
  (*pcVar2)(uVar3,param_1,&local_34,&local_35);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a9840 FUN_1436a9840 body=217 status=ok
// SIG undefined FUN_1436a9840(void)

undefined8 * FUN_1436a9840(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa81200;
  puVar1 = puVar4 + 2;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)((longlong)puVar4 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  puVar4[8] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 8);
  }
  puVar4[0xe] = *(undefined8 *)(param_1 + 0x70);
  lVar3 = *(longlong *)(param_1 + 0x78);
  puVar4[0xf] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return puVar1;
}



// FUNCTION 1436a9920 FUN_1436a9920 body=29 status=ok
// SIG undefined FUN_1436a9920(void)

void FUN_1436a9920(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436a993e FUN_1436a993e body=125 status=ok
// SIG undefined FUN_1436a993e(void)

undefined8 * FUN_1436a993e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aa81200;
  plVar3 = (longlong *)param_1[0xf];
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
  if (param_1[6] != 0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436a99bc FUN_1436a99bc body=118 status=ok
// SIG undefined FUN_1436a99bc(void)

undefined8 * FUN_1436a99bc(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a9a32 FUN_1436a9a32 body=606 status=ok
// SIG undefined FUN_1436a9a32(void)

void FUN_1436a9a32(longlong param_1)

{
  uint uVar1;
  void *_Src;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  void *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  longlong local_b8;
  longlong *local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 200) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0xc0);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))
                    (*(longlong **)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb8),puVar5,
                     *(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 0xe0) == 0) goto LAB_1436a9a96;
  local_d8 = (void *)0x0;
  uVar1 = *(uint *)(param_1 + 200);
  _Src = *(void **)(param_1 + 0xc0);
  local_d0 = CONCAT44(local_d0._4_4_,uVar1);
  local_c4 = uVar2;
  if ((longlong)(int)uVar1 == 0) {
    local_d0 = (ulonglong)uVar1;
    local_c8 = *(undefined4 *)(param_1 + 0xd0);
    local_b8 = *(longlong *)(param_1 + 0xe0);
LAB_1436a9b69:
    local_a8[0] = (longlong *)0x0;
    puVar3 = (undefined8 *)(param_1 + 0x100);
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0xf0);
    }
    (**(code **)*puVar3)(puVar3,local_a8);
  }
  else {
    FUN_1446dd670(&local_d8,uVar1,0);
    memcpy(local_d8,_Src,(longlong)(int)uVar1 * 2);
    local_b8 = *(longlong *)(param_1 + 0xe0);
    local_c8 = *(undefined4 *)(param_1 + 0xd0);
    local_a8[0] = (longlong *)0x0;
    if (local_b8 != 0) goto LAB_1436a9b69;
  }
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *local_68 = &PTR_FUN_14aa81240;
  local_68[2] = local_d8;
  local_d8 = (void *)0x0;
  *(undefined4 *)(local_68 + 3) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_68 + 0x1c) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined1 *)((longlong)local_68 + 0x24) = local_c4;
  *(undefined4 *)(local_68 + 4) = local_c8;
  local_68[6] = local_b8;
  local_68[8] = local_a8[0];
  local_a8[0] = (longlong *)0x0;
  *(undefined4 *)(local_68 + 0xc) = local_88;
  *(undefined4 *)((longlong)local_68 + 100) = uStack_84;
  *(undefined4 *)(local_68 + 0xd) = uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x6c) = uStack_7c;
  *(undefined4 *)(local_68 + 10) = local_98;
  *(undefined4 *)((longlong)local_68 + 0x54) = uStack_94;
  *(undefined4 *)(local_68 + 0xb) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_8c;
  if (local_b8 != 0) {
    local_b8 = 0;
  }
  if (local_68 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_78[0] = FUN_1436a9d00;
  }
  FUN_147ced7a0(local_78);
  if (local_b8 != 0) {
    plVar4 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar4 = (longlong *)&local_98;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    plVar4 = (longlong *)(param_1 + 0x100);
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xf0);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
LAB_1436a9a96:
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a9c92 FUN_1436a9c92 body=110 status=ok
// SIG undefined FUN_1436a9c92(void)

undefined8 * FUN_1436a9c92(undefined8 *param_1,int param_2)

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



// FUNCTION 1436a9d00 FUN_1436a9d00 body=119 status=ok
// SIG undefined FUN_1436a9d00(void)

void FUN_1436a9d00(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2d = *(undefined1 *)(param_1 + 0x14);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1,&local_2c,&local_2d);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a9d78 FUN_1436a9d78 body=195 status=ok
// SIG undefined FUN_1436a9d78(void)

undefined8 * FUN_1436a9d78(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa81240;
  puVar1 = puVar4 + 2;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)((longlong)puVar4 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  puVar4[8] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 8);
  }
  return puVar1;
}



// FUNCTION 1436a9e42 FUN_1436a9e42 body=29 status=ok
// SIG undefined FUN_1436a9e42(void)

void FUN_1436a9e42(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436a9e60 FUN_1436a9e60 body=85 status=ok
// SIG undefined FUN_1436a9e60(void)

undefined8 * FUN_1436a9e60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa81240;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436a9eb6 FUN_1436a9eb6 body=547 status=ok
// SIG undefined FUN_1436a9eb6(void)

longlong * FUN_1436a9eb6(longlong *param_1,int param_2)

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



// FUNCTION 1436aa0da FUN_1436aa0da body=498 status=ok
// SIG undefined FUN_1436aa0da(void)

void FUN_1436aa0da(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_b8;
  longlong *local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x20))
                    (*(longlong **)(param_1 + 0xb0),&local_e8,*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_d8 = *(undefined4 *)(param_1 + 0xb8);
    uVar1 = (undefined4)local_e8;
    local_d0 = local_e8;
    uStack_c8._0_4_ = (undefined4)uStack_e0;
    uStack_c8._4_4_ = uStack_e0._4_4_;
    local_e8 = 0;
    uStack_e0 = 0;
    local_a8[0] = (longlong *)0x0;
    puVar3 = (undefined8 *)(param_1 + 0xe0);
    if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0xd0);
    }
    local_d4 = uVar2;
    local_b8 = *(longlong *)(param_1 + 0xc0);
    (**(code **)*puVar3)(uVar1,local_a8);
    local_78[0] = (code *)0x0;
    local_68 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *local_68 = &PTR_FUN_14aa81280;
    *(undefined1 *)((longlong)local_68 + 0x14) = local_d4;
    *(undefined4 *)(local_68 + 2) = local_d8;
    local_68[3] = local_d0;
    local_d0 = 0;
    *(undefined4 *)(local_68 + 4) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)local_68 + 0x24) = uStack_c8._4_4_;
    uStack_c8 = 0;
    local_68[6] = local_b8;
    local_68[8] = local_a8[0];
    local_a8[0] = (longlong *)0x0;
    *(undefined4 *)(local_68 + 0xc) = local_88;
    *(undefined4 *)((longlong)local_68 + 100) = uStack_84;
    *(undefined4 *)(local_68 + 0xd) = uStack_80;
    *(undefined4 *)((longlong)local_68 + 0x6c) = uStack_7c;
    *(undefined4 *)(local_68 + 10) = local_98;
    *(undefined4 *)((longlong)local_68 + 0x54) = uStack_94;
    *(undefined4 *)(local_68 + 0xb) = uStack_90;
    *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_8c;
    if (local_b8 != 0) {
      local_b8 = 0;
    }
    if (local_68 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_78[0] = FUN_1436aa33c;
    }
    FUN_147ced7a0(local_78);
    if (local_b8 != 0) {
      plVar4 = local_a8[0];
      if (local_a8[0] == (longlong *)0x0) {
        plVar4 = (longlong *)&local_98;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    FUN_1447a1747(local_d0,uStack_c8 & 0xffffffff);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    plVar4 = (longlong *)(param_1 + 0xe0);
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xd0);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436aa2ce FUN_1436aa2ce body=110 status=ok
// SIG undefined FUN_1436aa2ce(void)

undefined8 * FUN_1436aa2ce(undefined8 *param_1,int param_2)

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



// FUNCTION 1436aa33c FUN_1436aa33c body=119 status=ok
// SIG undefined FUN_1436aa33c(void)

void FUN_1436aa33c(undefined4 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2d = *(undefined1 *)(param_1 + 1);
  local_2c = *param_1;
  pcVar1 = *(code **)(param_1 + 8);
  plVar3 = (longlong *)(param_1 + 0x10);
  if (*(longlong **)(param_1 + 0xc) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0xc);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_2c,&local_2d,param_1 + 2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436aa3b4 FUN_1436aa3b4 body=192 status=ok
// SIG undefined FUN_1436aa3b4(void)

undefined8 * FUN_1436aa3b4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa81280;
  *(undefined1 *)((longlong)puVar4 + 0x14) = *(undefined1 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar4[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar4 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  }
  else {
    FUN_140b856de(puVar4 + 3,iVar1,0);
    FUN_140b8566a(puVar4[3],uVar2,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  puVar4[8] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 8);
  }
  return puVar4 + 2;
}



// FUNCTION 1436aa47a FUN_1436aa47a body=29 status=ok
// SIG undefined FUN_1436aa47a(void)

void FUN_1436aa47a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436aa498 FUN_1436aa498 body=97 status=ok
// SIG undefined FUN_1436aa498(void)

undefined8 * FUN_1436aa498(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa81280;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436aa4fa FUN_1436aa4fa body=105 status=ok
// SIG undefined FUN_1436aa4fa(void)

void FUN_1436aa4fa(undefined4 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *param_1;
  local_25 = 1;
  pcVar1 = *(code **)(param_1 + 4);
  plVar3 = (longlong *)(param_1 + 0xc);
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 8);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_24,&local_25);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436aa564 FUN_1436aa564 body=112 status=ok
// SIG undefined FUN_1436aa564(void)

undefined8 * FUN_1436aa564(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14aa812a0;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 1436aa5da FUN_1436aa5da body=29 status=ok
// SIG undefined FUN_1436aa5da(void)

void FUN_1436aa5da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436aa5f8 FUN_1436aa5f8 body=71 status=ok
// SIG undefined FUN_1436aa5f8(void)

undefined8 * FUN_1436aa5f8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa812a0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436aa640 FUN_1436aa640 body=71 status=ok
// SIG undefined FUN_1436aa640(void)

undefined8 * FUN_1436aa640(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aa812c0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436aa69c FUN_1436aa69c body=144 status=ok
// SIG undefined FUN_1436aa69c(void)

void FUN_1436aa69c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa812c0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001436aa721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1436aa72c FUN_1436aa72c body=144 status=ok
// SIG undefined FUN_1436aa72c(void)

void FUN_1436aa72c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa812c0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001436aa7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1436aa7bc FUN_1436aa7bc body=171 status=ok
// SIG undefined FUN_1436aa7bc(void)

void FUN_1436aa7bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa812c0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436aa857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1436aa868 FUN_1436aa868 body=43 status=ok
// SIG undefined FUN_1436aa868(void)

undefined8 FUN_1436aa868(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 1436aa894 FUN_1436aa894 body=43 status=ok
// SIG undefined FUN_1436aa894(void)

undefined8 FUN_1436aa894(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 1;
}



// FUNCTION 1436aa8c0 FUN_1436aa8c0 body=450 status=ok
// SIG undefined FUN_1436aa8c0(void)

void FUN_1436aa8c0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1436aa9db:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1436aaa18:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1436aa916;
LAB_1436aa90b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1436aa916:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001436aa942;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1436aa998:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1436aaa18;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1436aa9db;
code_r0x0001436aa942:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1436aa998;
    }
  }
  goto LAB_1436aa90b;
}



// FUNCTION 1436aaa82 FUN_1436aaa82 body=455 status=ok
// SIG undefined FUN_1436aaa82(void)

void FUN_1436aaa82(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  size_t _Size;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_2,2);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1436aaba0:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1436aabdd:
    *param_1 = _Dst;
    return;
  }
  uVar3 = param_2 * 2;
  _Size = (size_t)uVar3;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1436aaad9;
LAB_1436aaacd:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1436aaad9:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x7fd3) goto code_r0x0001436aab06;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(size_t *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1436aab5e:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(uint *)((longlong)_Dst + -4) = uVar3;
  if (_Src == (void *)0x0) goto LAB_1436aabdd;
  uVar7 = *(uint *)((longlong)_Src + -4);
  if (uVar7 != 0) {
    if (uVar7 < uVar3) {
      _Size = (size_t)uVar7;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1436aaba0;
code_r0x0001436aab06:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1436aab5e;
    }
  }
  goto LAB_1436aaacd;
}



// FUNCTION 1436aac4a FUN_1436aac4a body=450 status=ok
// SIG undefined FUN_1436aac4a(void)

void FUN_1436aac4a(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1436aad65:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1436aada2:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1436aaca0;
LAB_1436aac95:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1436aaca0:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001436aaccc;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1436aad22:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1436aada2;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1436aad65;
code_r0x0001436aaccc:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1436aad22;
    }
  }
  goto LAB_1436aac95;
}



// FUNCTION 1436aae0c FUN_1436aae0c body=450 status=ok
// SIG undefined FUN_1436aae0c(void)

void FUN_1436aae0c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1436aaf27:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1436aaf64:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1436aae62;
LAB_1436aae57:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1436aae62:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001436aae8e;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1436aaee4:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1436aaf64;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1436aaf27;
code_r0x0001436aae8e:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1436aaee4;
    }
  }
  goto LAB_1436aae57;
}



// FUNCTION 1436aafce FUN_1436aafce body=450 status=ok
// SIG undefined FUN_1436aafce(void)

void FUN_1436aafce(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1436ab0e9:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1436ab126:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1436ab024;
LAB_1436ab019:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1436ab024:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001436ab050;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1436ab0a6:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1436ab126;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1436ab0e9;
code_r0x0001436ab050:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1436ab0a6;
    }
  }
  goto LAB_1436ab019;
}



// FUNCTION 1436ab190 FUN_1436ab190 body=102 status=ok
// SIG undefined FUN_1436ab190(void)

void FUN_1436ab190(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1436ab1f6 FUN_1436ab1f6 body=370 status=ok
// SIG undefined FUN_1436ab1f6(void)

void FUN_1436ab1f6(longlong param_1)

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
  local_2c = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1436ab319;
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
LAB_1436ab319:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436ab36a FUN_1436ab36a body=370 status=ok
// SIG undefined FUN_1436ab36a(void)

void FUN_1436ab36a(longlong param_1)

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
  local_2c = 4;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_1436ab48d;
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
LAB_1436ab48d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436ab4de FUN_1436ab4de body=248 status=ok
// SIG undefined FUN_1436ab4de(void)

void FUN_1436ab4de(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [8];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_1[1] != 0) {
    plVar8 = (longlong *)*param_1;
    plVar7 = plVar8 + (longlong)(int)param_1[1] * 2;
    do {
      lVar2 = *plVar8;
      plVar6 = (longlong *)
               ((longlong)(int)(*(ulonglong *)(lVar2 + 0xc0) >> 1) * 8 +
               *(longlong *)(*(longlong *)(plVar8[1] + 0x18) + 0x28));
      if ((*(ulonglong *)(lVar2 + 0xc0) & 1) == 0) {
        plVar6 = (longlong *)(lVar2 + 0xc0);
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(*plVar6 + 0x18);
        lVar4 = *(longlong *)(plVar8[1] + 8);
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)*(int *)(lVar2 + 0xd4) * 8);
        if (lVar5 == 0) {
          lVar5 = FUN_1400bafc2(lVar4,(longlong)*(int *)(lVar2 + 0xd4),0);
        }
        if (lVar5 != 0) {
          local_48 = 0;
          FUN_14053ef1e(DAT_14ca811d0,local_38,lVar5,uVar3);
          if (local_30 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_30 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_30)(local_30,1);
            }
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436ab5e2 FUN_1436ab5e2 body=12 status=ok
// SIG undefined FUN_1436ab5e2(void)

void FUN_1436ab5e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436ab5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436ab5ee FUN_1436ab5ee body=57 status=ok
// SIG undefined FUN_1436ab5ee(void)

undefined8 * FUN_1436ab5ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa81540;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436ab628 FUN_1436ab628 body=282 status=ok
// SIG undefined FUN_1436ab628(void)

undefined8 * FUN_1436ab628(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436a8c8c);
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



// FUNCTION 1436ab742 FUN_1436ab742 body=321 status=ok
// SIG undefined FUN_1436ab742(void)

ulonglong FUN_1436ab742(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [8];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar5 = (ulonglong)DAT_14c7585c8;
  plVar7 = (longlong *)param_1[0x15];
  if ((longlong)*(int *)(param_1 + 0x16) != 0) {
    plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x16) * 2;
    do {
      lVar2 = *plVar7;
      plVar6 = (longlong *)
               ((longlong)(int)(*(ulonglong *)(lVar2 + 0xc0) >> 1) * 8 +
               *(longlong *)(*(longlong *)(plVar7[1] + 0x18) + 0x28));
      if ((*(ulonglong *)(lVar2 + 0xc0) & 1) == 0) {
        plVar6 = (longlong *)(lVar2 + 0xc0);
      }
      uVar5 = 0;
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(*plVar6 + 0x18);
        lVar4 = *(longlong *)(plVar7[1] + 8);
        uVar5 = *(ulonglong *)(lVar4 + 0x50);
        uVar8 = *(ulonglong *)(uVar5 + (longlong)*(int *)(lVar2 + 0xd4) * 8);
        if (uVar8 == 0) {
          uVar5 = FUN_1400bafc2(lVar4,(longlong)*(int *)(lVar2 + 0xd4),0);
          uVar8 = uVar5;
        }
        if (uVar8 != 0) {
          local_48 = 0;
          uVar5 = FUN_14053ef1e(DAT_14ca811d0,local_40,uVar8,uVar3);
          if (local_38 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_38 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              uVar5 = (**(code **)*local_38)(local_38,1);
            }
          }
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar9);
    plVar7 = (longlong *)param_1[0x15];
  }
  if (plVar7 != (longlong *)0x0) {
    uVar5 = FUN_1400020a8(plVar7);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar5 = (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436ab88a FUN_1436ab88a body=282 status=ok
// SIG undefined FUN_1436ab88a(void)

undefined8 * FUN_1436ab88a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436a8c8c);
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



// FUNCTION 1436ab9a4 FUN_1436ab9a4 body=79 status=ok
// SIG undefined FUN_1436ab9a4(void)

void FUN_1436ab9a4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14741cc38();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14741cc38();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436ab9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1436ab9f3 FUN_1436ab9f3 body=8573 status=ok
// SIG undefined FUN_1436ab9f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ab9f3(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  longlong local_90 [2];
  undefined2 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa6f810,1,0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa6ff00,1,0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa70250,1,0);
  local_70 = "AssetRegistry";
  local_68 = (code *)CONCAT35(local_68._5_3_,0xd);
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb02710 = (ulonglong)uVar4;
  _DAT_14cb02718 = 0;
  _DAT_14cb02720 = 0;
  _DAT_14cb02728 = 0;
  _DAT_14cb02730 = L"SaveGamePipe";
  DAT_14cb02738 = 0;
  _DAT_14cb02740 = 0;
  _DAT_14cb02748 = 2;
  atexit(FUN_14369fe69);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_c8._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cb02750,L"sg.ResolutionQuality",&local_70,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 10..100, default: 100"
               );
  atexit(FUN_14369fe9a);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02768,L"sg.ViewDistanceQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_14369fedf);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02780,L"sg.AntiAliasingQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_14369ff24);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02798,L"sg.ShadowQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_14369ff69);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb027b0,L"sg.GlobalIlluminationQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_14369ffae);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb027c8,L"sg.ReflectionQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_14369fff3);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb027e0,L"sg.PostProcessQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_1436a0038);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb027f8,L"sg.TextureQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_1436a007d);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02810,L"sg.EffectsQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_1436a00c2);
  local_70._0_4_ = 3;
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02828,L"sg.FoliageQuality",&local_70,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_1436a0107);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02840,L"sg.ShadingQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_1436a014c);
  local_c8._0_4_ = 0x180;
  FUN_14078dbce(&DAT_14cb02858,L"sg.LandscapeQuality",&DAT_14aa7078c,
                L"Scalability quality state (internally used by scalability system, ini load/save or using SCALABILITY console command)\n 0:low, 1:med, 2:high, 3:epic, 4:cinematic, default: 3"
               );
  atexit(FUN_1436a0191);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb02870,L"sg.ViewDistanceQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.ViewDistanceQuality\n default: 5 (0..4)");
  atexit(FUN_1436a01d6);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb02888,L"sg.AntiAliasingQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.AntiAliasingQuality\n default: 5 (0..4)");
  atexit(FUN_1436a021b);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb028a0,L"sg.ShadowQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.ShadowQuality\n default: 5 (0..4)");
  atexit(FUN_1436a0260);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb028b8,L"sg.GlobalIlluminationQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.GlobalIlluminationQuality\n default: 5 (0..4)"
               );
  atexit(FUN_1436a02a5);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb028d0,L"sg.ReflectionQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.ReflectionQuality\n default: 5 (0..4)");
  atexit(FUN_1436a02ea);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb028e8,L"sg.PostProcessQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.PostProcessQuality\n default: 5 (0..4)");
  atexit(FUN_1436a032f);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb02900,L"sg.TextureQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.TextureQuality\n default: 5 (0..4)");
  atexit(FUN_1436a0374);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb02918,L"sg.EffectsQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.EffectsQuality\n default: 5 (0..4)");
  atexit(FUN_1436a03b9);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb02930,L"sg.FoliageQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.FoliageQuality\n default: 5 (0..4)");
  atexit(FUN_1436a03fe);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb02948,L"sg.ShadingQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.ShadingQuality\n default: 5 (0..4)");
  atexit(FUN_1436a0443);
  local_70 = (char *)CONCAT44(local_70._4_4_,5);
  local_c8 = CONCAT44(local_c8._4_4_,4);
  FUN_14078dbce(&DAT_14cb02960,L"sg.LandscapeQuality.NumLevels",&local_70,
                L"Number of settings quality levels in sg.LandscapeQuality\n default: 5 (0..4)");
  atexit(FUN_1436a0488);
  DAT_14cb029a8 = 0xbf800000bf800000;
  DAT_14cb029b0 = 0;
  _DAT_14cb029b8 = 0;
  DAT_14cb029c0 = 0;
  _DAT_14cb029c8 = 0;
  atexit(FUN_1436a04cd);
  _DAT_14cb02a00 = 0xbf800000bf800000;
  DAT_14cb02a08 = 0;
  uRam000000014cb02a10 = 0;
  DAT_14cb02a18 = 0;
  uRam000000014cb02a20 = 0;
  atexit(FUN_1436a04fd);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_70,&DAT_14cb02a8c);
  if (cVar3 == '\0') {
    _DAT_14cb02a8c = 0;
    uRam000000014cb02a94 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = (char *)CONCAT44(local_70._4_4_,0x3f000000);
  local_c8._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cb02aa0,L"lod.TemporalLag",&local_70,
                L"This controls the the time lag for temporal LOD, in seconds.");
  atexit(FUN_1436a110f);
  FUN_1411e592c(&DAT_14cb02ad4,L"WorkingColorSpace");
  local_68 = FUN_14155e106;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02b60,&local_70);
  _DAT_14cb05378 = 0xffffffff;
  _DAT_14cb0537c = 0x105;
  lVar9 = 0;
  DAT_14cb0537e = 0;
  _DAT_14cb05380 = 2;
  DAT_14cb05388 = 0;
  DAT_14cb05390 = 0;
  DAT_14cb05370 = &PTR_FUN_14aa81330;
  FUN_1463ff5fe();
  atexit(FUN_1436a120b);
  local_68 = FUN_145fcd0b4;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02bf8,&local_70);
  _DAT_14cb053f0 = 0xffffffff;
  _DAT_14cb053f4 = 0x105;
  DAT_14cb053f6 = 0;
  _DAT_14cb053f8 = 2;
  DAT_14cb05400 = 0;
  uRam000000014cb05408 = 0;
  DAT_14cb053e8 = &PTR_FUN_14aa813f0;
  FUN_1463ff6c6();
  atexit(FUN_1436a254f);
  local_68 = FUN_1415bf3a0;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02ca0,&local_70);
  _DAT_14cb053a0 = 0xffffffff;
  _DAT_14cb053a4 = 0x105;
  DAT_14cb053a6 = 0;
  _DAT_14cb053a8 = 2;
  DAT_14cb053b0 = 0;
  DAT_14cb053b8 = 0;
  DAT_14cb05398 = &PTR_FUN_14aa81450;
  FUN_1463ff78e();
  atexit(FUN_1436a258a);
  _DAT_14cb05410 = 0x200000007;
  _DAT_14cb05418 = 3;
  _DAT_14cb0541c = 0;
  DAT_14cb05420 = DAT_14c967818;
  _DAT_14cb05428 = DAT_14c967818;
  _DAT_14cb05430 = &DAT_100000002;
  _DAT_14cb05438 = 1;
  DAT_14cb0543c = 0;
  _DAT_14cb05440 = 0;
  uRam000000014cb05448 = 0;
  _DAT_14cb05450 = 0;
  uRam000000014cb05458 = 0;
  _DAT_14cb05460 = _DAT_14ca83a30;
  uRam000000014cb05468 = _DAT_14ca83a38;
  _DAT_14cb05470 = DAT_14ca83a40;
  DAT_14cb05484 = DAT_14ca850c0;
  _DAT_14cb05474 = DAT_14ca850b0;
  uRam000000014cb05478 = _DAT_14ca850b4;
  uRam000000014cb0547c = _DAT_14ca850b8;
  uRam000000014cb05480 = uRam000000014ca850bc;
  do {
    *(undefined2 *)((longlong)&DAT_14cb05488 + lVar9) = 0x9b;
    *(undefined8 *)((longlong)&DAT_14cb0548c + lVar9) = 0;
    *(undefined2 *)((longlong)&DAT_14cb05494 + lVar9) = 0;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x20);
  lVar9 = 0;
  do {
    *(undefined4 *)((longlong)&DAT_14cb054a8 + lVar9) = 0xffffffff;
    (&DAT_14cb054ac)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb054b0 + lVar9) = 0;
    *(undefined4 *)((longlong)&DAT_14cb054b8 + lVar9) = 0xffffffff;
    (&DAT_14cb054bc)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb054c0 + lVar9) = 0;
    *(undefined4 *)((longlong)&DAT_14cb054c8 + lVar9) = 0xffffffff;
    (&DAT_14cb054cc)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb054d0 + lVar9) = 0;
    *(undefined4 *)((longlong)&DAT_14cb054d8 + lVar9) = 0xffffffff;
    (&DAT_14cb054dc)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb054e0 + lVar9) = 0;
    *(undefined4 *)((longlong)&DAT_14cb054e8 + lVar9) = 0xffffffff;
    (&DAT_14cb054ec)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb054f0 + lVar9) = 0;
    *(undefined4 *)((longlong)&DAT_14cb054f8 + lVar9) = 0xffffffff;
    (&DAT_14cb054fc)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb05500 + lVar9) = 0;
    *(undefined4 *)((longlong)&DAT_14cb05508 + lVar9) = 0xffffffff;
    (&DAT_14cb0550c)[lVar9] = 0;
    *(undefined8 *)((longlong)&DAT_14cb05510 + lVar9) = 0;
    lVar9 = lVar9 + 0x70;
  } while (lVar9 != 0xe0);
  _DAT_14cb05588 = _DAT_14cb05588 & 0xfffffe00 | 4;
  DAT_14cb0558c = 0;
  FUN_1411e592c(&DAT_14cb02cb0,L"SceneTextures");
  local_68 = FUN_14482e3b2;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02d40,&local_70);
  local_68 = FUN_144a890ae;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02dd8,&local_70);
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb02df8,L"r.CustomDepth",&DAT_14c761ae8,
                L"0: feature is disabled\n1: feature is enabled, texture is created on demand\n2: feature is enabled, texture is not released until required (should be the project setting if the feature should not stall)\n3: feature is enabled, stencil writes are enabled, texture is not released until required (should be the project setting if the feature should not stall)"
               );
  atexit(FUN_1436a26b1);
  FUN_1411e592c(&DAT_14cb02e6d,L"View");
  FUN_1411e592c(&DAT_14cb02e6e,L"InstancedView");
  local_68 = FUN_144a8f66a;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02ef8,&local_70);
  local_68 = FUN_145ef17d6;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb02f90,&local_70);
  local_68 = FUN_1447e4f80;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb03028,&local_70);
  local_68 = FUN_144a96f7c;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb030c0,&local_70);
  local_68 = FUN_1415bf548;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb03158,&local_70);
  local_70._0_4_ = 0xbf800000;
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb03168,L"r.SSR.MaxRoughness",&local_70,
                L"Allows to override the post process setting ScreenSpaceReflectionMaxRoughness.\nIt defines until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster.\n(Useful for testing, no scalability or project setting)\n 0..1: use specified max roughness (overrride PostprocessVolume setting)\n -1: no override (default)"
               );
  atexit(FUN_1436a2732);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb03180,L"r.MinRoughnessOverride",&local_70,
                L"WARNING: This is an experimental feature that may change at any time.\nSets a global limit for roughness when used in the direct lighting calculations.\nThis can be used to limit the amount of fireflies caused by low roughness, in particular when AA is not in use.\n 0.0: no change (default)"
               );
  atexit(FUN_1436a2777);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0x21;
  FUN_140a6b41e(&DAT_14cb03198,L"r.AmbientOcclusion.FadeRadiusScale",&local_70,
                L"Allows to scale the ambient occlusion fade radius (SSAO).\n 0.01:smallest .. 1.0:normal (default), <1:smaller, >1:larger"
               );
  atexit(FUN_1436a27bc);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 1;
  FUN_140a6b41e(&DAT_14cb031b0,L"r.ExposureOffset",&local_70,
                L"For adjusting the exposure on top of post process settings and eye adaptation. 0: default"
               );
  atexit(FUN_1436a2801);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb031c8,L"r.DefaultFeature.Bloom",&local_70,
                L"Engine default (project setting) for Bloom is (postprocess volume/camera/game setting still can override)\n 0: off, set BloomIntensity to 0\n 1: on (default)"
               );
  atexit(FUN_1436a2846);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb031e0,L"r.DefaultFeature.AmbientOcclusion",&local_70,
                L"Engine default (project setting) for AmbientOcclusion is (postprocess volume/camera/game setting still can override)\n 0: off, sets AmbientOcclusionIntensity to 0\n 1: on (default)"
               );
  atexit(FUN_1436a288b);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb031f8,L"r.DefaultFeature.AmbientOcclusionStaticFraction",&local_70,
                L"Engine default (project setting) for AmbientOcclusion is (postprocess volume/camera/game setting still can override)\n 0: off, sets AmbientOcclusionStaticFraction to 0\n 1: on (default, costs extra pass, only useful if there is some baked lighting)"
               );
  atexit(FUN_1436a28d0);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb03210,L"r.DefaultFeature.AutoExposure",&local_70,
                L"Engine default (project setting) for AutoExposure is (postprocess volume/camera/game setting still can override)\n 0: off, sets AutoExposureMinBrightness and AutoExposureMaxBrightness to 1\n 1: on (default)"
               );
  atexit(FUN_1436a2915);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb03228,L"r.DefaultFeature.AutoExposure.Method",&local_70,
                L"Engine default (project setting) for AutoExposure Method (postprocess volume/camera/game setting still can override)\n 0: Histogram based (requires compute shader, default)\n 1: Basic AutoExposure"
               );
  atexit(FUN_1436a295a);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb03240,L"r.DefaultFeature.AutoExposure.Bias",&local_70,
                L"Engine default (project setting) for AutoExposure Exposure Bias (postprocess volume/camera/game setting still can override)\n"
               );
  atexit(FUN_1436a299f);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb03258,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange",
                &local_70,
                L"Whether the default values for AutoExposure should support an extended range of scene luminance.\nThis also change the PostProcessSettings.Exposure.MinBrightness, MaxBrightness, HistogramLogMin and HisogramLogMax\nto be expressed in EV100 values instead of in Luminance and Log2 Luminance.\n 0: Legacy range (UE4 default)\n 1: Extended range (UE5 default)"
               );
  atexit(FUN_1436a29e4);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb03270,L"r.DefaultFeature.LocalExposure.HighlightContrastScale",&local_70,
                L"Engine default (project setting) for Local Exposure Highlight Contrast (postprocess volume/camera/game setting still can override)\n"
               );
  atexit(FUN_1436a2a29);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb03288,L"r.DefaultFeature.LocalExposure.ShadowContrastScale",&local_70,
                L"Engine default (project setting) for Local Exposure Shadow Contrast (postprocess volume/camera/game setting still can override)\n"
               );
  atexit(FUN_1436a2a6e);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb032a0,L"r.DefaultFeature.MotionBlur",&local_70,
                L"Engine default (project setting) for MotionBlur is (postprocess volume/camera/game setting still can override)\n 0: off, sets MotionBlurAmount to 0\n 1: on (default)"
               );
  atexit(FUN_1436a2ab3);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb032b8,L"r.DefaultFeature.LensFlare",&local_70,
                L"Engine default (project setting) for LensFlare is (postprocess volume/camera/game setting still can override)\n 0: off, sets LensFlareIntensity to 0\n 1: on (default)"
               );
  atexit(FUN_1436a2af8);
  local_70._0_4_ = 4;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb032d0,L"r.AntiAliasingMethod",&local_70,
                L"Engine default (project setting) for AntiAliasingMethod is (postprocess volume/camera/game setting still can override)\n 0: off (no anti-aliasing)\n 1: Fast Approximate Anti-Aliasing (FXAA)\n 2: Temporal Anti-Aliasing (TAA)\n 3: Multisample Anti-Aliasing (MSAA, Only available on the desktop forward renderer)\n 4: Temporal Super-Resolution (TSR, Default)"
               );
  atexit(FUN_1436a2b3d);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb032e8,L"r.DefaultFeature.LightUnits",&local_70,
                L"Default units to use for point, spot and rect lights\n 0: unitless \n 1: candelas (default)\n 2: lumens"
               );
  atexit(FUN_1436a2b82);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb03300,L"r.MotionBlur.Scale",&local_70,
                L"Allows to scale the postprocess intensity/amount setting in the postprocess.\n1: don\'t do any scaling (default)"
               );
  atexit(FUN_1436a2bc7);
  local_70._0_4_ = 0xbf800000;
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb03318,L"r.MotionBlur.Amount",&local_70,
                L"Allows to override the postprocess setting (scale of motion blur)\n-1: override (default)"
               );
  atexit(FUN_1436a2c0c);
  local_70._0_4_ = 0xbf800000;
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb03330,L"r.MotionBlur.Max",&local_70,
                L"Allows to override the postprocess setting (max length of motion blur, in percent of the screen width)\n-1: override (default)"
               );
  atexit(FUN_1436a2c51);
  local_70._0_4_ = 0xffffffff;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb03348,L"r.MotionBlur.TargetFPS",&local_70,
                L"Allows to override the postprocess setting (target FPS for motion blur velocity length scaling).\n-1: override (default) 0: target current frame rate with moving average\n[1,120]: target FPS for motion blur velocity scaling"
               );
  atexit(FUN_1436a2c96);
  local_70._0_4_ = 0xbf800000;
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb03360,L"r.SceneColorFringe.Max",&local_70,
                L"Allows to clamp the postprocess setting (in percent, Scene chromatic aberration / color fringe to simulate an artifact that happens in real-world lens, mostly visible in the image corners)\n-1: don\'t clamp (default)\n-2: to test extreme fringe"
               );
  atexit(FUN_1436a2cdb);
  local_70._0_4_ = 5;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb03378,L"r.Tonemapper.Quality",&local_70,
                L"Defines the Tonemapper Quality in the range 0..5\nDepending on the used settings we might pick a faster shader permutation\n 0: basic tonemapper only, lowest quality\n 2: + Vignette\n 4: + Grain\n 5: + GrainJitter = full quality (default)"
               );
  atexit(FUN_1436a2d20);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0x21;
  FUN_140a6b41e(&DAT_14cb03390,L"r.DiffuseColor.Min",&local_70,
                L"Allows quick material test by remapping the diffuse color at 1 to a new value (0..1), Only for non shipping built!\n1: (default)"
               );
  atexit(FUN_1436a2d65);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0x21;
  FUN_140a6b41e(&DAT_14cb033a8,L"r.DiffuseColor.Max",&local_70,
                L"Allows quick material test by remapping the diffuse color at 1 to a new value (0..1), Only for non shipping built!\n1: (default)"
               );
  atexit(FUN_1436a2daa);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0x21;
  FUN_140a6b41e(&DAT_14cb033c0,L"r.Roughness.Min",&local_70,
                L"Allows quick material test by remapping the roughness at 0 to a new value (0..1), Only for non shipping built!\n0: (default)"
               );
  atexit(FUN_1436a2def);
  local_70._0_4_ = 0x3f800000;
  local_c8._0_4_ = 0x21;
  FUN_140a6b41e(&DAT_14cb033d8,L"r.Roughness.Max",&local_70,
                L"Allows quick material test by remapping the roughness at 1 to a new value (0..1), Only for non shipping built!\n1: (default)"
               );
  atexit(FUN_1436a2e34);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb033f0,L"r.TemporalAA.Upsampling",&local_70,
                L"Whether to do primary screen percentage with temporal AA or not.\n 0: use spatial upscale pass independently of TAA;\n 1: TemporalAA performs spatial and temporal upscale as screen percentage method (default)."
               );
  atexit(FUN_1436a2e79);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb03408,L"r.Ortho.CalculateDepthThicknessScaling",&local_70,
                L"Whether to automatically derive the depth thickness test scale from the Near/FarPlane difference.\n0: Disabled (use scaling specified by r.Ortho.DepthThicknessScale)\n1: Enabled (default)"
               );
  atexit(FUN_1436a2ebe);
  local_c8._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14cb03420,L"r.Ortho.DepthThicknessScale",&DAT_14c761aec,
                L"Orthographic scene depth scales proportionally lower than perspective, typically on a scale of 1/100Use this value to tweak the scale of depth thickness testing values simultaneously across various screen trace passes"
               );
  atexit(FUN_1436a2f03);
  local_c8._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14cb03438,L"r.Ortho.DefaultUpdateNearClipPlane",&DAT_14cb03430,
                L"Ortho near clip plane value to correct to when using ortho near clip correction");
  atexit(FUN_1436a2f48);
  local_70._0_1_ = 1;
  local_c8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb03448,L"r.Ortho.AllowNearPlaneCorrection",&local_70,
                L"Orthographic near planes can be behind the camera position, which causes some issues with Unreal resolving lighting behind the camera position This CVar enables the Orthographic cameras globally to automatically update the camera location to match the NearPlane location, and force the pseudo camera position to be the replaced near plane location for the projection matrix calculation. This means Unreal can resolve lighting behind the camera correctly."
               );
  atexit(FUN_1436a2f8d);
  local_70 = (char *)CONCAT71(local_70._1_7_,1);
  local_c8._0_4_ = 0x60;
  FUN_140bd5914(&DAT_14cb03460,L"r.Ortho.CameraHeightAsViewTarget",&local_70,
                L"Sets whether to use the camera height as a pseudo camera to view target.\nPrimarily helps with VSM clipmap selection and avoids overcorrecting NearPlanes.\n"
               );
  atexit(FUN_1436a2fd2);
  local_c8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb03478,L"r.vt.FeedbackFactor",&DAT_14c761af0,
                L"The size of the VT feedback buffer is calculated by dividing the render resolution by this factor.The value set here is rounded up to the nearest power of two before use."
               );
  atexit(FUN_1436a3017);
  local_c8 = CONCAT44(local_c8._4_4_,0x20);
  FUN_141471170(&DAT_14cb03488,L"r.HairStrands.DOFDepth",&DAT_14c761af4);
  atexit(FUN_1436a305c);
  _DAT_14cb055a0 = 0xffffffff;
  DAT_14cb055a4 = 5;
  DAT_14cb055a5 = 1;
  DAT_14cb055a6 = 0;
  _DAT_14cb055a8 = 2;
  DAT_14cb055b0 = 0;
  DAT_14cb055b8 = 0;
  DAT_14cb05598 = &PTR_FUN_14aa814b0;
  FUN_1463ff856();
  atexit(FUN_1436a30a1);
  _DAT_14cb053d8 = 0xffffffff;
  DAT_14cb053dc = 5;
  DAT_14cb053dd = 1;
  DAT_14cb053de = 0;
  DAT_14cb053e0 = 0;
  DAT_14cb053d0 = &PTR_FUN_14aa814e0;
  FUN_1463ff89e();
  atexit(FUN_1436a4e6a);
  local_68 = FUN_145db0c8a;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03688,&local_70);
  local_68 = FUN_1460ab964;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb037b0,&local_70);
  local_68 = FUN_1460b15ce;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb038d8,&local_70);
  local_68 = FUN_146043adc;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03a00,&local_70);
  local_68 = FUN_146043e1e;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03b28,&local_70);
  local_68 = FUN_145fec28c;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03c50,&local_70);
  local_68 = FUN_145fec648;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03d78,&local_70);
  local_68 = FUN_1417ed4a6;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03ea0,&local_70);
  local_68 = FUN_146044160;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb03fc8,&local_70);
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa75c80,1,0);
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa763e0,1,0);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb04050,L"r.ShaderCompiler.RecompileShadersOnSave",&local_70,
                L"When enabled, the editor will attempt to recompile any shader files that have changed when saved.  Useful for iterating on shaders in the editor.\nDefault: false"
               );
  atexit(FUN_1436a58ec);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb04068,L"r.ShaderCompiler.DebugDumpJobInputHashes",&local_70,
                L"If true, the job input hash will be dumped alongside other debug data (in InputHash.txt)"
               );
  atexit(FUN_1436a5931);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb04080,L"r.ShaderCompiler.DebugDumpJobDiagnostics",&local_70,
                L"If true, all diagnostic messages (errors and warnings) for each shader job will be dumped alongside other debug data (in Diagnostics.txt)"
               );
  atexit(FUN_1436a5976);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb04098,L"r.ShaderCompiler.DebugDumpShaderCode",&local_70,
                L"If true, each shader job will dump a ShaderCode.bin containing the contents of the output shader code object (the contents of this can differ for each shader format; note that this is the data that is hashed to produce the OutputHash.txt file)"
               );
  atexit(FUN_1436a59bb);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb040b0,L"r.ShaderCompiler.DebugDumpShaderCodePlatformHashes",&local_70,
                L"If true, each shader job will dump a PlatformHash.txt file containing the shader code hash as reported by the platform compiler (if the associated shader format registers this hash with the shader stats).\nNote the distinction between this and OutputHash.txt - these files can be used to find shaders which have identical code and only result in different output hashes due to diffs in other metadata."
               );
  atexit(FUN_1436a5a00);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb040c8,L"r.ShaderCompiler.DebugDumpDetailedShaderSource",&local_70,
                L"If true, and if the preprocessed job cache is enabled, this will dump multiple copies of the shader source for any job which has debug output enabled:\n\t1. The unmodified output of the preprocessing step as constructed by the PreprocessShader implementation of the IShaderFormat (Preprocessed_<shader>.usf\n\t2. The stripped version of the above (with comments, line directives, and whitespace-only lines removed), which is the version hashed for inclusion in the job input hash when the preprocessed job cache is enabled (Stripped_<shader>.usf)\t3. The final source as passed to the platform compiler (this will differ if the IShaderFormat compile function applies further modifications to the source after preprocessing; otherwise this will be the same as 2 above (<shader>.usf)\nIf false, or the preprocessed job cache is disabled, this will simply dump whatever source is passed to the compiler (equivalent to either 1 or 3 depending on if the IShaderFormat implementation modifies the source in the compile step."
               );
  atexit(FUN_1436a5a45);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb040e0,L"r.ShaderCompiler.DisableSourceStripping",&local_70,
                L"If true, the process which strips comments, line directives and whitespace from final preprocessed source is disabled. This results in file associations being maintained and visible in RenderDoc etc., at the cost of less effective deduplication."
               );
  atexit(FUN_1436a5a8a);
  local_70._0_1_ = 1;
  local_c8._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cb040f8,L"r.AreShaderErrorsFatal",&local_70,
                L"When enabled, when a the default material or global shaders fail to compile it will issue a Fatal error.  Otherwise just an Error.\nDefault: true"
               );
  atexit(FUN_1436a5acf);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb04110,L"r.ShaderCompiler.AllowDistributedCompilation",&DAT_14c761af8,
                L"If 0, only local (spawned by the engine) ShaderCompileWorkers will be used. If 1, SCWs will be distributed using one of several possible backends (XGE, FASTBuild, SN-DBS)"
               );
  atexit(FUN_1436a5b14);
  local_c8._0_4_ = 4;
  FUN_141471170(&DAT_14cb04120,L"r.ShaderCompiler.MaxDumpedShaderSources",&DAT_14c761afc,
                L"Maximum number of preprocessed shader sources to dump as a build artifact on shader compile errors. By default 10."
               );
  atexit(FUN_1436a5b59);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb04130,L"r.Shaders.CheckLevel",&DAT_14c761b00,
                L"0 => DO_CHECK=0, DO_GUARD_SLOW=0, 1 => DO_CHECK=1, DO_GUARD_SLOW=0, 2 => DO_CHECK=1, DO_GUARD_SLOW=1 for all shaders."
               );
  atexit(FUN_1436a5b9e);
  local_70 = (char *)((ulonglong)local_70._1_7_ << 8);
  local_c8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb04140,L"r.ShaderCompiler.DumpDDCKeys",&local_70,
                L"if != 0, DDC keys for each shadermap will be dumped into project\'s Saved directory (ShaderDDCKeys subdirectory)"
               );
  atexit(FUN_1436a5be3);
  local_c8._0_4_ = 4;
  FUN_14153156c(&DAT_14cb04160,L"r.ShaderCompiler.DebugDumpWorkerCrashLog",&DAT_14cb04158,
                L"If true, the ShaderCompileWorker will dump its entire log to the Saved folder when a crash is detected."
               );
  atexit(FUN_1436a5c28);
  local_70._0_4_ = 0x1e;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb04170,L"r.ShaderCompiler.LogSlowJobThreshold",&local_70,
                L"If a single compilation job\'s compile time exceeds the specified value (in seconds), info about the job will be automatically logged for investigation."
               );
  atexit(FUN_1436a5c6d);
  local_c8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb04668,L"r.DumpShaderDebugInfo",&DAT_14cb04678,
                L"Dumps debug info for compiled shaders to GameName/Saved/ShaderDebugInfo\nWhen set to 1, debug info is dumped for all compiled shader\nWhen set to 2, it is restricted to shaders with compilation errors\nWhen set to 3, it is restricted to shaders with compilation errors or warnings\nThe debug info is platform dependent, but usually includes a preprocessed version of the shader source.\nGlobal shaders automatically dump debug info if r.ShaderDevelopmentMode is enabled, this cvar is not necessary.\nOn iOS, if the PowerVR graphics SDK is installed to the default path, the PowerVR shader compiler will be called and errors will be reported during the cook."
               );
  atexit(FUN_1436a5cb2);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb04680,L"r.DumpShaderDebugShortNames",&DAT_14cb04690,
                L"Only valid when r.DumpShaderDebugInfo > 0.\nWhen set to 1, will shorten names factory and shader type folder names to avoid issues with long paths."
               );
  atexit(FUN_1436a5cf7);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb04698,L"r.DumpShaderDebugBindlessNames",&DAT_14cb046a8,
                L"Only valid when r.DumpShaderDebugInfo > 0.\nWhen set to 1, will add bindless folder names."
               );
  atexit(FUN_1436a5d3c);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb046b0,L"r.DumpShaderDebugWorkerCommandLine",&DAT_14cb046c0,
                L"Only valid when r.DumpShaderDebugInfo > 0.\nWhen set to 1, it will generate a file that can be used with ShaderCompileWorker\'s -directcompile."
               );
  atexit(FUN_1436a5d81);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb046c8,L"r.ShaderCompiler.ShadermapCompilationTimeout",&DAT_14c761b04,
                L"Maximum number of seconds a single shadermap (which can be comprised of multiple jobs) can be compiled after being considered hung."
               );
  atexit(FUN_1436a5dc6);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb046d8,L"r.ShaderCompiler.CrashOnHungShaderMaps",&DAT_14cb046e8,
                L"If set to 1, the shader compiler will crash on hung shadermaps.");
  atexit(FUN_1436a5e0b);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb046f0,L"r.ForceAllCoresForShaderCompiling",&DAT_14cb04700,
                L"When set to 1, it will ignore INI settings and launch as many ShaderCompileWorker instances as cores are available.\nImproves shader throughput but for big projects it can make the machine run OOM"
               );
  atexit(FUN_1436a5e50);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb04708,L"r.Shaders.Symbols",&local_70,
                L"Enables debugging of shaders in platform specific graphics debuggers. This will generate and write shader symbols.\nThis enables the behavior of both r.Shaders.GenerateSymbols and r.Shaders.WriteSymbols.\nEnables shader debugging features that require shaders to be recompiled. This compiles shaders with symbols and also includes extra runtime information like shader names. When using graphical debuggers it can be useful to enable this on startup.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a5e95);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04720,L"r.Shaders.SymbolsInfo",&local_70,
                L"In lieu of a full set of platform shader PDBs, save out a slimmer ShaderSymbols.Info which contains shader platform hashes and shader debug info.\nAn option for when it is not practical to save PDBs for shaders all the time.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a5eda);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04738,L"r.Shaders.GenerateSymbols",&local_70,
                L"Enables generation of data for shader debugging when compiling shaders. This explicitly does not write any shader symbols to disk.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a5f1f);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04750,L"r.Shaders.WriteSymbols",&local_70,
                L"Enables writing shader symbols to disk for platforms that support that. This explicitly does not enable generation of shader symbols.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a5f64);
  FUN_1400b22c2(&local_70,&DAT_149e02088);
  local_c8 = CONCAT44(local_c8._4_4_,4);
  FUN_140f510cc(&DAT_14cb04768,L"r.Shaders.SymbolPathOverride",&local_70,
                L"Override output location of shader symbols. If the path contains the text \'{Platform}\', that will be replaced with the shader platform string.\nEmpty: use default location Saved/ShaderSymbols/{Platform}\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1436a5fa9);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04780,L"r.Shaders.AllowUniqueSymbols",&local_70,
                L"When enabled, this tells supported shader compilers to generate symbols based on source files.\nEnabling this can cause a drastic increase in the number of symbol files, enable only if absolutely necessary.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a5fee);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04798,L"r.Shaders.WriteSymbols.Zip",&local_70,
                L" 0: Export as loose files.\n 1: Export as an uncompressed archive.\n");
  atexit(FUN_1436a6033);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb047b0,L"r.Shaders.ExtraData",&local_70,
                L"Enables generation of extra shader data that can be used at runtime. This includes shader names and other platform specific data.\nThis can add bloat to compiled shaders and can prevent shaders from being deduplicated.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a6078);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb047c8,L"r.Shaders.Optimize",&local_70,
                L"Whether to optimize shaders.  When using graphical debuggers like Nsight it can be useful to disable this on startup.\nThis setting can be overriden in any Engine.ini under the [ShaderCompiler] section."
               );
  atexit(FUN_1436a60bd);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb047e0,L"r.Shaders.FastMath",&local_70,
                L"Whether to use fast-math optimisations in shaders.");
  atexit(FUN_1436a6102);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb047f8,L"r.Shaders.ZeroInitialise",&local_70,
                L"Whether to enforce zero initialise local variables of primitive type in shaders. Defaults to 1 (enabled). Not all shader languages can omit zero initialisation."
               );
  atexit(FUN_1436a6147);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04810,L"r.Shaders.BoundsChecking",&local_70,
                L"Whether to enforce bounds-checking & flush-to-zero/ignore for buffer reads & writes in shaders. Defaults to 1 (enabled). Not all shader languages can omit bounds checking."
               );
  atexit(FUN_1436a618c);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04828,L"r.Shaders.WarningsAsErrors",&local_70,
                L"Whether to treat warnings as errors when compiling shaders. (0: disabled (default), 1: global shaders only, 2: all shaders)). This setting may be ignored on older platforms."
               );
  atexit(FUN_1436a61d1);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04840,L"r.Shaders.FlowControlMode",&local_70,
                L"Specifies whether the shader compiler should preserve or unroll flow-control in shader code.\nThis is primarily a debugging aid and will override any per-shader or per-material settings if not left at the default value (0).\n\t0: Off (Default) - Entirely at the discretion of the platform compiler or the specific shader/material.\n\t1: Prefer - Attempt to preserve flow-control.\n\t2: Avoid - Attempt to unroll and flatten flow-control.\n"
               );
  atexit(FUN_1436a6216);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04858,L"r.D3D.CheckedForTypedUAVs",&local_70,
                L"Whether to disallow usage of typed UAV loads, as they are unavailable in Windows 7 D3D 11.0.\n 0: Allow usage of typed UAV loads.\n 1: Disallow usage of typed UAV loads. (default)"
               );
  atexit(FUN_1436a625b);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04870,L"r.D3D.ForceDXC",&local_70,
                L"Forces DirectX Shader Compiler (DXC) to be used for all D3D shaders. Shaders compiled with this option are only compatible with D3D12.\n 0: Disable (default)\n 1: Force new compiler for all shaders"
               );
  atexit(FUN_1436a62a0);
  local_70._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04888,L"r.WarpCulling",&local_70,
                L"Enable Warp Culling optimization for platforms that support it.\n 0: Disable (default)\n 1: Enable"
               );
  atexit(FUN_1436a62e5);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb048a0,L"r.CullBeforeFetch",&local_70,
                L"Enable Cull-Before-Fetch optimization for platforms that support it.\n 0: Disable (default)\n 1: Enable"
               );
  atexit(FUN_1436a632a);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb048b8,L"r.CreateShadersOnLoad",&DAT_14cb05364,
                L"Whether to create shaders on load, which can reduce hitching, but use more memory.  Otherwise they will be created as needed."
               );
  atexit(FUN_1436a636f);
  FUN_1400b22c2(&local_70,&DAT_149e02088);
  local_c8 = CONCAT44(local_c8._4_4_,4);
  FUN_140f510cc(&DAT_14cb048c8,L"r.OverrideShaderDebugDir",&local_70,
                L"Override output location of shader debug files\nEmpty: use default location Saved\\ShaderDebugInfo.\n"
               );
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1436a63b4);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb048e0,L"r.DisambiguateShaderDebugDir",&local_70,
                L"If true, appends a folder containing the full project path with directory separators/drive qualifiers replaced with _ to the root debug info folder.\nIntended for use in conjunction with r.OverrideShaderDebugDir to avoid shaderdebuginfo output clashing across workspaces/projects."
               );
  atexit(FUN_1436a63f9);
  local_70._0_4_ = 1;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb048f8,L"r.Shaders.Validation",&local_70,
                L"Enabled shader compiler validation warnings and errors.");
  atexit(FUN_1436a643e);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb04910,L"r.Shaders.RemoveDeadCode",&local_70,
                L"Run a preprocessing step that removes unreferenced code before compiling shaders.\nThis can improve the compilation speed for shaders which include many large utility headers.\n\t0: Keep all input source code.\n\t1: Remove unreferenced code before compilation (Default)\n"
               );
  atexit(FUN_1436a6483);
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  FUN_141471170(&DAT_14cb04928,L"ODSC.MaterialUpdateFlags",&DAT_14cb04938,
                L"Changes the material update flags when ODSC receives new shaders and needs to update the materials\n0 (default): no additional work\n1: Reregister all components while updating the material\n2: Sync with the rendering thread after all the calls to RecacheUniformExpressions\n4 (legacy): Recreates only the render state for *all* components, including the ones not changed by ODSC\n"
               );
  atexit(FUN_1436a70ec);
  FUN_1400b22c2(local_90,"Windows");
  FUN_140056680(&local_b0,L"../../../Engine");
  iVar1 = (int)local_a8;
  iVar5 = ((int)local_a8 == 0) + 0x16;
  local_a0 = local_b0;
  local_b0 = 0;
  local_98 = (int)local_a8;
  iVar2 = local_a8._4_4_;
  local_94 = local_a8._4_4_;
  local_a8 = 0;
  iVar6 = iVar5 + iVar1;
  if (iVar6 < iVar1) {
LAB_1436adb27:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar6 < 0) {
LAB_1436adb2e:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar2 < iVar6) {
    FUN_1446f8c06(&local_a0);
  }
  FUN_1401aebe8(&local_a0,L"GlobalShaderCache-SP_",0x15);
  FUN_1401c7f3e(&local_80,&local_a0,local_90);
  iVar1 = (int)local_78;
  iVar5 = ((int)local_78 == 0) + 4;
  local_70 = (char *)local_80;
  local_80 = (undefined2 *)0x0;
  iVar2 = local_78._4_4_;
  local_68 = local_78;
  local_78 = (code *)0x0;
  iVar6 = iVar5 + iVar1;
  if (iVar6 < iVar1) goto LAB_1436adb27;
  if (iVar6 < 0) goto LAB_1436adb2e;
  if (iVar2 < iVar6) {
    FUN_1446f8c06(&local_70);
  }
  FUN_1400020e8(&local_70,L".bin",4);
  puVar7 = (undefined2 *)local_70;
  if ((int)local_68 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_145880e80(&DAT_14cb04950,puVar7);
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1436a80db);
  DAT_14cb04e68 = 0;
  _DAT_14cb04e70 = 0;
  atexit((_func_5014 *)&LAB_1436a80ec);
  local_70 = (char *)0x0;
  local_68 = (code *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68._0_4_ = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  *(longlong *)((longlong)local_70 + 0x10) = lVar8;
  *(undefined ***)local_70 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_70 + 0x18) = FUN_1436a8299;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb04e78,L"ReloadGlobalShaders",L"Reloads the global shaders file",&local_70);
  if ((int)local_68 == 0) {
LAB_1436ad9eb:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68._0_4_ = 0;
    goto LAB_1436ad9eb;
  }
  atexit(FUN_1436a85af);
  local_70 = (char *)0x0;
  local_68._0_4_ = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68._0_4_ = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  *(longlong *)((longlong)local_70 + 0x10) = lVar8;
  *(undefined ***)local_70 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_70 + 0x18) = FUN_1436a85f4;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb04e88,L"SetGlobalShaderCacheOverrideDirectory",
                L"Set the directory to read the override global shader map file from.",&local_70);
  if ((int)local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_1436adae5;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68._0_4_ = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1436adae5:
  atexit(FUN_1436a8668);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436adb74 FUN_1436adb74 body=69 status=ok
// SIG undefined FUN_1436adb74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adb74(void)

{
  _DAT_14cb055d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adbb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb055d8,1);
  return;
}



// FUNCTION 1436adbb9 FUN_1436adbb9 body=69 status=ok
// SIG undefined FUN_1436adbb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adbb9(void)

{
  _DAT_14cb055e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adbfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb055e8,1);
  return;
}



// FUNCTION 1436adbfe FUN_1436adbfe body=69 status=ok
// SIG undefined FUN_1436adbfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adbfe(void)

{
  _DAT_14cb055f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb055f8,1);
  return;
}



// FUNCTION 1436adc43 FUN_1436adc43 body=69 status=ok
// SIG undefined FUN_1436adc43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adc43(void)

{
  _DAT_14cb05600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05608,1);
  return;
}



// FUNCTION 1436adc88 FUN_1436adc88 body=69 status=ok
// SIG undefined FUN_1436adc88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adc88(void)

{
  _DAT_14cb05618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adcca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05620,1);
  return;
}



// FUNCTION 1436adccd FUN_1436adccd body=69 status=ok
// SIG undefined FUN_1436adccd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adccd(void)

{
  _DAT_14cb05630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436add0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05638,1);
  return;
}



// FUNCTION 1436add12 FUN_1436add12 body=69 status=ok
// SIG undefined FUN_1436add12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436add12(void)

{
  _DAT_14cb05640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436add54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05648,1);
  return;
}



// FUNCTION 1436add57 FUN_1436add57 body=69 status=ok
// SIG undefined FUN_1436add57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436add57(void)

{
  _DAT_14cb05650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436add99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05658,1);
  return;
}



// FUNCTION 1436add9c FUN_1436add9c body=69 status=ok
// SIG undefined FUN_1436add9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436add9c(void)

{
  _DAT_14cb05668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436addde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05670,1);
  return;
}



// FUNCTION 1436adde1 FUN_1436adde1 body=69 status=ok
// SIG undefined FUN_1436adde1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adde1(void)

{
  _DAT_14cb05680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ade23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05688,1);
  return;
}



// FUNCTION 1436ade26 FUN_1436ade26 body=69 status=ok
// SIG undefined FUN_1436ade26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ade26(void)

{
  _DAT_14cb05690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ade68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05698,1);
  return;
}



// FUNCTION 1436ade6b FUN_1436ade6b body=69 status=ok
// SIG undefined FUN_1436ade6b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ade6b(void)

{
  _DAT_14cb056a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb056b0,1);
  return;
}



// FUNCTION 1436adeb0 FUN_1436adeb0 body=69 status=ok
// SIG undefined FUN_1436adeb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adeb0(void)

{
  _DAT_14cb056b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb056c0,1);
  return;
}



// FUNCTION 1436adef5 FUN_1436adef5 body=69 status=ok
// SIG undefined FUN_1436adef5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adef5(void)

{
  _DAT_14cb056d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adf37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb056d8,1);
  return;
}



// FUNCTION 1436adf3a FUN_1436adf3a body=69 status=ok
// SIG undefined FUN_1436adf3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adf3a(void)

{
  _DAT_14cb056e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb056f0,1);
  return;
}



// FUNCTION 1436adf7f FUN_1436adf7f body=69 status=ok
// SIG undefined FUN_1436adf7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adf7f(void)

{
  _DAT_14cb05700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436adfc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05708,1);
  return;
}



// FUNCTION 1436adfc4 FUN_1436adfc4 body=69 status=ok
// SIG undefined FUN_1436adfc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436adfc4(void)

{
  _DAT_14cb05718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05720,1);
  return;
}



// FUNCTION 1436ae009 FUN_1436ae009 body=69 status=ok
// SIG undefined FUN_1436ae009(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae009(void)

{
  _DAT_14cb05728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05730,1);
  return;
}



// FUNCTION 1436ae04e FUN_1436ae04e body=69 status=ok
// SIG undefined FUN_1436ae04e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae04e(void)

{
  _DAT_14cb05748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05750,1);
  return;
}



// FUNCTION 1436ae093 FUN_1436ae093 body=69 status=ok
// SIG undefined FUN_1436ae093(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae093(void)

{
  _DAT_14cb05760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05768,1);
  return;
}



// FUNCTION 1436ae0d8 FUN_1436ae0d8 body=69 status=ok
// SIG undefined FUN_1436ae0d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae0d8(void)

{
  _DAT_14cb05778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05780,1);
  return;
}



// FUNCTION 1436ae11d FUN_1436ae11d body=69 status=ok
// SIG undefined FUN_1436ae11d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae11d(void)

{
  _DAT_14cb05788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae15f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05790,1);
  return;
}



// FUNCTION 1436ae162 FUN_1436ae162 body=69 status=ok
// SIG undefined FUN_1436ae162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae162(void)

{
  _DAT_14cb05798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb057a0,1);
  return;
}



// FUNCTION 1436ae1a7 FUN_1436ae1a7 body=69 status=ok
// SIG undefined FUN_1436ae1a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae1a7(void)

{
  _DAT_14cb057b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb057c0,1);
  return;
}



// FUNCTION 1436ae1f1 FUN_1436ae1f1 body=69 status=ok
// SIG undefined FUN_1436ae1f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae1f1(void)

{
  _DAT_14cb057f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb057f8,1);
  return;
}



// FUNCTION 1436ae236 FUN_1436ae236 body=69 status=ok
// SIG undefined FUN_1436ae236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae236(void)

{
  _DAT_14cb05808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05810,1);
  return;
}



// FUNCTION 1436ae27b FUN_1436ae27b body=69 status=ok
// SIG undefined FUN_1436ae27b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436ae27b(void)

{
  _DAT_14cb05820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436ae2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb05828,1);
  return;
}



// FUNCTION 1436ae2c0 FUN_1436ae2c0 body=906 status=ok
// SIG undefined FUN_1436ae2c0(void)

void FUN_1436ae2c0(longlong *param_1,code *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  undefined1 auStack_268 [40];
  undefined8 *local_240 [2];
  char local_230;
  undefined1 local_228 [128];
  undefined1 *local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  byte local_188;
  undefined1 local_180 [128];
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d8;
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar11 = *param_1;
  iVar7 = (int)param_1[0x21] + -1;
  lVar8 = (longlong)(int)param_1[0x21] * 0x20;
  lVar10 = *(longlong *)(lVar11 + -0x20 + lVar8);
  uVar12 = *(uint *)(lVar11 + -0x10 + lVar8);
  bVar1 = *(byte *)(lVar11 + -8 + lVar8);
  *(int *)(param_1 + 0x21) = iVar7;
  if (lVar10 == 0) {
    bVar13 = 0x1c;
    if (bVar1 < 0x1c) {
      bVar13 = bVar1;
    }
    uVar12 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar13 * 0x10];
  }
  lVar8 = (longlong)(int)param_1[99] - (longlong)(int)uVar12;
  if (uVar12 != 0) {
    *(int *)(param_1 + 99) = (int)lVar8;
  }
  lVar2 = param_1[0x22];
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  if (lVar10 == 0) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_48 = CONCAT44(0x10,uVar12);
    local_d8 = bVar1;
    if (uVar12 < 0x11) {
      if (uVar12 == 0) goto LAB_1436ae3e1;
    }
    else {
      FUN_147bcda28(local_d0,0);
    }
    puVar9 = local_d0;
    if (local_50 != (undefined1 *)0x0) {
      puVar9 = local_50;
    }
    memcpy(puVar9,(void *)(lVar8 * 8 + lVar2),(longlong)(int)uVar12 << 3);
    lVar11 = *param_1;
    iVar7 = (int)param_1[0x21];
  }
LAB_1436ae3e1:
  lVar8 = (longlong)iVar7 * 0x20;
  lVar10 = *(longlong *)(lVar11 + -0x20 + lVar8);
  uVar12 = *(uint *)(lVar11 + -0x10 + lVar8);
  bVar1 = *(byte *)(lVar11 + -8 + lVar8);
  *(int *)(param_1 + 0x21) = iVar7 + -1;
  if (lVar10 == 0) {
    bVar13 = 0x1c;
    if (bVar1 < 0x1c) {
      bVar13 = bVar1;
    }
    uVar12 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar13 * 0x10];
  }
  lVar11 = (longlong)(int)param_1[99] - (longlong)(int)uVar12;
  if (uVar12 != 0) {
    *(int *)(param_1 + 99) = (int)lVar11;
  }
  lVar8 = param_1[0x22];
  local_100 = (undefined1 *)0x0;
  local_f8 = 0x1000000000;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  if (lVar10 == 0) {
    local_198 = 0;
    uStack_190 = 0;
    local_f8 = CONCAT44(0x10,uVar12);
    local_188 = bVar1;
    if (uVar12 < 0x11) {
      if (uVar12 == 0) goto LAB_1436ae4c0;
    }
    else {
      FUN_147bcda28(local_180,0);
    }
    puVar9 = local_180;
    if (local_100 != (undefined1 *)0x0) {
      puVar9 = local_100;
    }
    memcpy(puVar9,(void *)(lVar11 * 8 + lVar8),(longlong)(int)uVar12 << 3);
  }
LAB_1436ae4c0:
  (*param_2)(local_240,&local_198,&local_e8);
  iVar7 = (int)param_1[0x21];
  *(uint *)(param_1 + 0x21) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar7 + 1U) {
    FUN_147d13022(param_1,iVar7);
  }
  lVar11 = *param_1;
  lVar10 = (longlong)iVar7 * 0x20;
  *(undefined8 *)(lVar11 + lVar10) = 0;
  ((undefined8 *)(lVar11 + lVar10))[1] = 0;
  *(undefined4 *)(lVar11 + 0x10 + lVar10) = 0;
  *(char *)(lVar11 + 0x18 + lVar10) = local_230;
  if (local_230 == '\x19') {
    puVar6 = (undefined8 *)(lVar11 + lVar10);
    *puVar6 = *local_240[0];
    uVar3 = *(undefined4 *)((longlong)local_240[0] + 0x2c);
    uVar4 = *(undefined4 *)(local_240[0] + 6);
    uVar5 = *(undefined4 *)((longlong)local_240[0] + 0x34);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(local_240[0] + 5);
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
    *(undefined4 *)(puVar6 + 2) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar5;
  }
  if ((longlong)(int)local_1a0 != 0) {
    iVar7 = (int)param_1[99];
    *(uint *)(param_1 + 99) = iVar7 + local_1a0;
    if ((uint)(*(int *)((longlong)param_1 + 0x31c) - iVar7) < local_1a0) {
      FUN_147d12c5e(param_1 + 0x22,iVar7);
    }
    puVar9 = local_228;
    if (local_1a8 != (undefined1 *)0x0) {
      puVar9 = local_1a8;
    }
    memcpy((void *)((longlong)iVar7 * 8 + param_1[0x22]),puVar9,(longlong)(int)local_1a0 << 3);
  }
  if (local_1a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436ae64b FUN_1436ae64b body=1112 status=ok
// SIG undefined FUN_1436ae64b(void)

undefined8 * FUN_1436ae64b(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  double dVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  char cVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 == 0x19) || (bVar2 = *(byte *)(param_3 + 0x10), bVar2 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
    goto LAB_1436ae7e0;
  }
  uVar8 = (uint)bVar1;
  if (0x1b < bVar1) {
    uVar8 = 0x1c;
  }
  uVar15 = (uint)bVar2;
  if (0x1b < bVar2) {
    uVar15 = 0x1c;
  }
  cVar3 = (&DAT_14aa842ba)[uVar15 << 4];
  uVar16 = (ulonglong)cVar3;
  cVar4 = (&DAT_14aa842ba)[uVar8 << 4];
  uVar9 = (ulonglong)cVar4;
  if ((uVar16 == 1) || (cVar4 == '\x01')) {
    uVar14 = uVar9;
    if (cVar4 < cVar3) {
      uVar14 = uVar16;
    }
  }
  else {
    uVar14 = uVar16;
    if (cVar4 < cVar3) {
      uVar14 = uVar9;
    }
  }
  param_1[0x13] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  cVar5 = (&DAT_14aa842b9)[uVar8 << 4];
  cVar13 = (char)uVar14;
  if ((cVar5 == '\x02') || (cVar6 = (&DAT_14aa842b9)[uVar15 << 4], cVar6 == '\x02')) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 5;
    FUN_14013e547(&local_78,param_2,&local_58);
    FUN_14013e547(&local_79,param_3,&local_78);
    if (cVar13 < '\x01') {
      dVar7 = 0.0;
    }
    else {
      dVar7 = 0.0;
      uVar9 = 0;
      do {
        dVar7 = dVar7 + (double)(&local_58)[uVar9] * (double)(&local_78)[uVar9];
        uVar9 = uVar9 + 1;
      } while ((uVar14 & 0xff) != uVar9);
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    param_1[3] = dVar7;
    goto LAB_1436ae7e0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((cVar5 != '\x01') && (cVar6 != '\x01')) {
    *(undefined1 *)(param_1 + 2) = 9;
    FUN_147d0d1b6(param_2,&local_58);
    FUN_147d0d1b6(param_3);
    uVar9 = 0;
    if ('\0' < cVar13) {
      uVar16 = 0;
      do {
        uVar8 = (int)uVar9 +
                *(int *)((longlong)&local_78 + uVar16 * 4) *
                *(int *)((longlong)&local_58 + uVar16 * 4);
        uVar9 = (ulonglong)uVar8;
        uVar16 = uVar16 + 1;
      } while ((uVar14 & 0xff) != uVar16);
      uVar9 = (ulonglong)uVar8;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    param_1[3] = uVar9;
    goto LAB_1436ae7e0;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  if (cVar4 == '\x01') {
    pfVar10 = (float *)(param_2 + 0x18);
    if (*(float **)(param_2 + 0x98) != (float *)0x0) {
      pfVar10 = *(float **)(param_2 + 0x98);
    }
    if (cVar5 == '\x01') {
      local_58._0_4_ = *pfVar10;
    }
    else if (cVar5 == '\x03') {
      local_58._0_4_ = (float)(int)*pfVar10;
    }
    else {
      local_58._0_4_ = 0.0;
      if (cVar5 == '\x04') {
        local_58._0_4_ = (float)*(byte *)pfVar10;
      }
    }
    local_58._4_4_ = (float)local_58;
    fStack_50 = (float)local_58;
    fStack_4c = (float)local_58;
  }
  else {
    uVar8 = 4;
    if (cVar4 < '\x04') {
      uVar8 = (int)cVar4;
    }
    if ('\0' < cVar4) {
      lVar11 = param_2 + 0x18;
      if (*(longlong *)(param_2 + 0x98) != 0) {
        lVar11 = *(longlong *)(param_2 + 0x98);
      }
      uVar12 = 0;
      do {
        if (cVar5 == '\x01') {
          fVar17 = *(float *)(lVar11 + uVar12 * 8);
        }
        else if (cVar5 == '\x03') {
          fVar17 = (float)*(int *)(lVar11 + uVar12 * 8);
        }
        else {
          fVar17 = 0.0;
          if (cVar5 == '\x04') {
            fVar17 = (float)*(byte *)(lVar11 + uVar12 * 8);
          }
        }
        *(float *)((longlong)&local_58 + uVar12 * 4) = fVar17;
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
      if ('\x03' < cVar4) goto LAB_1436ae770;
    }
    memset((void *)((longlong)&local_58 + uVar9 * 4),0,(ulonglong)(3 - uVar8) * 4 + 4);
  }
LAB_1436ae770:
  if (cVar3 == '\x01') {
    pfVar10 = (float *)(param_3 + 0x18);
    if (*(float **)(param_3 + 0x98) != (float *)0x0) {
      pfVar10 = *(float **)(param_3 + 0x98);
    }
    if (cVar6 == '\x01') {
      local_78._0_4_ = *pfVar10;
    }
    else if (cVar6 == '\x03') {
      local_78._0_4_ = (float)(int)*pfVar10;
    }
    else {
      local_78._0_4_ = 0.0;
      if (cVar6 == '\x04') {
        local_78._0_4_ = (float)*(byte *)pfVar10;
      }
    }
    local_78._4_4_ = (float)local_78;
    fStack_70 = (float)local_78;
    fStack_6c = (float)local_78;
  }
  else {
    uVar9 = 4;
    if (cVar3 < '\x04') {
      uVar9 = uVar16 & 0xffffffff;
    }
    if ('\0' < cVar3) {
      lVar11 = param_3 + 0x18;
      if (*(longlong *)(param_3 + 0x98) != 0) {
        lVar11 = *(longlong *)(param_3 + 0x98);
      }
      uVar12 = 0;
      do {
        if (cVar6 == '\x01') {
          fVar17 = *(float *)(lVar11 + uVar12 * 8);
        }
        else if (cVar6 == '\x03') {
          fVar17 = (float)*(int *)(lVar11 + uVar12 * 8);
        }
        else {
          fVar17 = 0.0;
          if (cVar6 == '\x04') {
            fVar17 = (float)*(byte *)(lVar11 + uVar12 * 8);
          }
        }
        *(float *)((longlong)&local_78 + uVar12 * 4) = fVar17;
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
      if ('\x03' < cVar3) goto LAB_1436ae7a2;
    }
    memset((void *)((longlong)&local_78 + uVar16 * 4),0,(ulonglong)(3 - (int)uVar9) * 4 + 4);
  }
LAB_1436ae7a2:
  if (cVar13 < '\x01') {
    fVar17 = 0.0;
  }
  else {
    fVar17 = 0.0;
    uVar9 = 0;
    do {
      fVar17 = fVar17 + *(float *)((longlong)&local_58 + uVar9 * 4) *
                        *(float *)((longlong)&local_78 + uVar9 * 4);
      uVar9 = uVar9 + 1;
    } while ((uVar14 & 0xff) != uVar9);
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(float *)(param_1 + 3) = fVar17;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
LAB_1436ae7e0:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1436aeaa4 FUN_1436aeaa4 body=170 status=ok
// SIG undefined FUN_1436aeaa4(void)

void FUN_1436aeaa4(int param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  default:
    uVar1 = 0;
    if (param_1 == 100) goto switchD_1436aeac4_caseD_0;
  case 3:
  case 4:
  case 5:
  case 7:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x18:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x25:
    uVar1 = 1;
  case 0:
  case 1:
  case 2:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1e:
  case 0x21:
  case 0x24:
switchD_1436aeac4_caseD_0:
    param_3[1] = (uint)(param_1 == 0x1f) + (uint)(param_1 == 0x22) * 2 + (uint)(param_1 == 0x23) * 4
                 + (uint)(param_1 == 0x20) * 8 | param_3[1] & 0xfffffff0;
    *param_3 = (uint)(param_1 == 0x1d) << 0x1f | uVar1 | *param_3 & 0x7ffffffe;
    param_3[6] = (param_3[6] & 0xfffffffd) + (uint)(param_1 == 0x1b) * 2;
    return;
  }
}



// FUNCTION 1436aeb4e FUN_1436aeb4e body=2499 status=ok
// SIG undefined FUN_1436aeb4e(void)

void FUN_1436aeb4e(undefined8 param_1,uint param_2,byte *param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (DAT_14c867cf1 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb05948) && (FUN_144b3d300(&DAT_14cb05948), DAT_14cb05948 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HighResScreenshotDelay",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14cb05940 = (int *)0x0;
      }
      else {
        DAT_14cb05940 = (int *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14cb05948);
    }
    if (*DAT_14cb05940 < 4) {
      *param_3 = *param_3 & 0xdf;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05958) && (FUN_144b3d300(&DAT_14cb05958), DAT_14cb05958 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LightFunctionQuality",1);
    if (plVar6 == (longlong *)0x0) {
      DAT_14cb05950 = (int *)0x0;
    }
    else {
      DAT_14cb05950 = (int *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14cb05958);
  }
  if (*DAT_14cb05950 < 1) {
    param_3[10] = param_3[10] & 0xf7;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05968) && (FUN_144b3d300(&DAT_14cb05968), DAT_14cb05968 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EyeAdaptationQuality",1);
    if (plVar6 == (longlong *)0x0) {
      DAT_14cb05960 = (int *)0x0;
    }
    else {
      DAT_14cb05960 = (int *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14cb05968);
  }
  if (*DAT_14cb05960 < 1) {
    param_3[1] = param_3[1] & 0xef;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05978) && (FUN_144b3d300(&DAT_14cb05978), DAT_14cb05978 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ShadowQuality",1);
    if (plVar6 == (longlong *)0x0) {
      DAT_14cb05970 = (int *)0x0;
    }
    else {
      DAT_14cb05970 = (int *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14cb05978);
  }
  if (*DAT_14cb05970 < 1) {
    param_3[0xb] = param_3[0xb] & 0xfb;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05988) && (FUN_144b3d300(&DAT_14cb05988), DAT_14cb05988 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SkyLightingQuality",1);
    if (plVar6 == (longlong *)0x0) {
      DAT_14cb05980 = (int *)0x0;
    }
    else {
      DAT_14cb05980 = (int *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14cb05988);
  }
  if (*DAT_14cb05980 < 1) {
    param_3[0x13] = param_3[0x13] & 0xdf;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1)
    ;
    if (plVar6 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar5 = DAT_14ca97068;
  bVar11 = true;
  cVar1 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 0x40000002) {
      cVar1 = '\x02';
      uVar8 = 0;
    }
    else {
      bVar11 = true;
      cVar1 = '\x02';
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar11 = DVar3 == DVar4;
          cVar1 = DAT_14ca96da8;
        }
        else {
          bVar11 = false;
        }
      }
      uVar8 = (ulonglong)(bVar11 ^ 1);
    }
    bVar11 = *(int *)(lVar5 + uVar8 * 4) != 0;
  }
  if ((!bVar11) || (cVar1 == '\0')) {
    param_3[0x18] = param_3[0x18] & 0xfd;
  }
  if (param_2 < 0x26) {
    uVar8 = (ulonglong)param_2;
    switch(uVar8) {
    case 0:
    case 1:
    case 2:
    case 9:
    case 10:
      param_3[10] = param_3[10] & 0xf7;
      if (param_2 < 0xb) {
        if ((0x707U >> (param_2 & 0x1f) & 1) != 0) goto switchD_1436aecdc_caseD_8;
        if ((0x28U >> (param_2 & 0x1f) & 1) != 0) goto switchD_1436aecdc_caseD_3;
        if (param_2 == 6) goto switchD_1436aecdc_caseD_6;
      }
      goto LAB_1436aee00;
    case 3:
    case 5:
    case 0x20:
    case 0x25:
      goto switchD_1436aecdc_caseD_3;
    default:
      goto switchD_1436aecdc_caseD_4;
    case 6:
      goto switchD_1436aecdc_caseD_6;
    case 8:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1a:
    case 0x1e:
switchD_1436aecdc_caseD_8:
      param_3[0xb] = param_3[0xb] & 0xfb;
      if ((param_2 < 0x1f) && ((0x46fdc307U >> (param_2 & 0x1f) & 1) != 0))
      goto switchD_1436aecdc_caseD_e;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x17:
    case 0x21:
    case 0x24:
switchD_1436aecdc_caseD_e:
      param_3[0xd] = param_3[0xd] & 0x7f;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xfffdff7f;
    }
    switch(param_2) {
    case 3:
    case 5:
    case 10:
    case 0x20:
switchD_1436aecdc_caseD_3:
      param_3[0xd] = param_3[0xd] | 0x80;
      if (param_2 < 0x22) {
        if ((0x46300000UL >> (uVar8 & 0x3f) & 1) != 0) goto switchD_1436aed2d_caseD_14;
        if ((0x200840000U >> (uVar8 & 0x3f) & 1) != 0) goto switchD_1436aed2d_caseD_12;
        if (uVar8 == 6) goto switchD_1436aecdc_caseD_6;
      }
      break;
    case 6:
switchD_1436aecdc_caseD_6:
      param_3[0xc] = param_3[0xc] & 0xfe;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xfffdff7f;
LAB_1436aee00:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
      if ((((DAT_14ca96da8 == '\x02') && (DAT_14ca97068 != 0)) &&
          (iVar2 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar2 != 0x40000002)) &&
         ((iVar2 == 1 && (DAT_14c86a9f8 != '\0')))) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      goto LAB_1436aee3c;
    case 0x12:
    case 0x17:
    case 0x21:
switchD_1436aed2d_caseD_12:
      param_3[3] = param_3[3] & 0xfe;
      break;
    case 0x14:
    case 0x15:
    case 0x19:
    case 0x1a:
    case 0x1e:
switchD_1436aed2d_caseD_14:
      param_3[3] = param_3[3] & 0xfe;
      param_3[0xb] = param_3[0xb] & 0xf7;
      param_3[0x10] = param_3[0x10] & 0x7f;
      if (param_2 == 0x17) goto switchD_1436aed2d_caseD_12;
    }
  }
switchD_1436aecdc_caseD_4:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1)
    ;
    if (plVar6 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar5 = DAT_14ca97068;
  bVar11 = true;
  cVar1 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    cVar1 = '\x02';
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar8 = 0;
    }
    else if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar3 != DVar4);
      cVar1 = DAT_14ca96da8;
    }
    else {
      uVar8 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar8 * 4) != 0;
  }
  if (((param_2 == 0x1c) && (bVar11)) && (cVar1 != '\0')) {
    param_3[5] = param_3[5] & 0xf7;
  }
  else if (param_2 == 100) {
    param_3[3] = param_3[3] & 0xfe;
  }
LAB_1436aee3c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05998) && (FUN_144b3d300(&DAT_14cb05998), DAT_14cb05998 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Gbx.ScreenSpaceDecals.Enabled",1)
    ;
    if (plVar6 == (longlong *)0x0) {
      DAT_14cb05990 = (char *)0x0;
    }
    else {
      DAT_14cb05990 = (char *)(**(code **)(*plVar6 + 0x60))(plVar6);
    }
    _Init_thread_footer(&DAT_14cb05998);
  }
  if ((DAT_14cb05990 != (char *)0x0) && (*DAT_14cb05990 == '\0')) {
    param_3[0x1c] = param_3[0x1c] & 0xfd;
  }
  lVar5 = 0;
  do {
    pbVar9 = &DAT_14cb0b1e8 + lVar5;
    param_3[lVar5] = ~*pbVar9 & param_3[lVar5] | (&DAT_14cb0b228)[lVar5];
    lVar5 = lVar5 + 1;
  } while (pbVar9 != &DAT_14cb0b227);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb05a18) && (FUN_144b3d300(&DAT_14cb05a18), DAT_14cb05a18 == -1)) {
    InitializeSRWLock((PSRWLOCK)&DAT_14cb05a10);
    _Init_thread_footer(&DAT_14cb05a18);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  FUN_141518296();
  if (0 < DAT_14cb05a00) {
    lVar5 = 0x28;
    uVar8 = 0;
    do {
      FUN_141518296();
      iVar2 = (**(code **)(**(longlong **)(DAT_14cb059f8 + lVar5) + 0xb0))();
      if (iVar2 != 2) {
        uVar7 = 1 << ((byte)uVar8 & 0x1f);
        pbVar9 = *(byte **)(param_3 + 0x30);
        if (*(byte **)(param_3 + 0x30) == (byte *)0x0) {
          pbVar9 = param_3 + 0x20;
        }
        uVar10 = uVar8 >> 5 & 0x7ffffff;
        if (iVar2 == 0) {
          uVar7 = ~uVar7 & *(uint *)(pbVar9 + uVar10 * 4);
        }
        else {
          uVar7 = uVar7 | *(uint *)(pbVar9 + uVar10 * 4);
        }
        *(uint *)(pbVar9 + uVar10 * 4) = uVar7;
      }
      uVar8 = uVar8 + 1;
      FUN_141518296();
      lVar5 = lVar5 + 0x30;
    } while ((longlong)uVar8 < (longlong)DAT_14cb05a00);
  }
                    /* WARNING: Could not recover jumptable at 0x0001436aeef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  return;
}



// FUNCTION 1436af511 FUN_1436af511 body=41 status=ok
// SIG undefined FUN_1436af511(void)

void FUN_1436af511(void)

{
  DAT_14cb059e8 = 0;
  if (DAT_14cb059e0 != 0) {
    FUN_1400020a8();
  }
  FUN_147d12d62();
  return;
}



// FUNCTION 1436af53a FUN_1436af53a body=49 status=ok
// SIG undefined FUN_1436af53a(void)

void FUN_1436af53a(void)

{
  FUN_147d134fc(DAT_14cb059f8,DAT_14cb05a00);
  if (DAT_14cb059f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1436af57c FUN_1436af57c body=49 status=ok
// SIG undefined FUN_1436af57c(void)

void FUN_1436af57c(void)

{
  FUN_144760e21(DAT_14cb05a48,DAT_14cb05a50);
  if (DAT_14cb05a48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1436af5ad FUN_1436af5ad body=174 status=ok
// SIG undefined FUN_1436af5ad(void)

undefined4 FUN_1436af5ad(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14aa855c0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0x15] = 0;
  return *(undefined4 *)(puVar1 + 1);
}



// FUNCTION 1436af66c FUN_1436af66c body=2882 status=ok
// SIG undefined FUN_1436af66c(void)

void FUN_1436af66c(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  uint *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 uStack_80;
  code *local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_108 = (wchar_t *)0x0;
    uStack_100 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar6 = FUN_1400439fc(param_1,0);
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar7 = param_1[4];
  if (lVar7 == 0) {
LAB_1436af6fb:
    lVar7 = 0;
  }
  else {
    if (DAT_14c949118 == 0) {
      local_70 = FUN_140631fbe;
      lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar8;
      FUN_1446f470e(local_68,L"Class",1);
      local_d8 = &LAB_146891e90;
      local_e0 = (code *)&LAB_146273097;
      local_f0 = L"Engine";
      local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
      local_f8 = 0x20;
      uStack_100 = CONCAT44(uStack_100._4_4_,0x10000000);
      local_108._0_4_ = 8;
      local_d0 = &local_70;
      FUN_14574b4b2(lVar8);
      DAT_14c949118 = lVar8;
      if (DAT_14c951858 == 0) {
        local_88 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d0 = &local_88;
        local_d8 = &LAB_1468c5283;
        local_e0 = FUN_142809da0;
        local_e8 = L"Engine";
        local_f0 = (wchar_t *)0x400000000;
        local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
        uStack_100 = CONCAT44(uStack_100._4_4_,8);
        local_108._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar23 = DAT_14c951858;
      lVar8 = DAT_14c949118;
      uVar9 = FUN_1449e2fb2();
      local_108 = L"Class";
      FUN_14574b446(uVar9,lVar8,lVar23,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_1436af6fb;
  }
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc88) == '\0') && (lVar8 = param_1[4], lVar8 != 0)) {
    if (DAT_14c949118 == 0) {
      local_70 = FUN_140631fbe;
      lVar23 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar23;
      FUN_1446f470e(local_68,L"Class",1);
      local_d8 = &LAB_146891e90;
      local_e0 = (code *)&LAB_146273097;
      local_f0 = L"Engine";
      local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
      local_f8 = 0x20;
      uStack_100 = CONCAT44(uStack_100._4_4_,0x10000000);
      local_108._0_4_ = 8;
      local_d0 = &local_70;
      FUN_14574b4b2(lVar23);
      DAT_14c949118 = lVar23;
      if (DAT_14c951858 == 0) {
        local_88 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d0 = &local_88;
        local_d8 = &LAB_1468c5283;
        local_e0 = FUN_142809da0;
        local_e8 = L"Engine";
        local_f0 = (wchar_t *)0x400000000;
        local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
        uStack_100 = CONCAT44(uStack_100._4_4_,8);
        local_108._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = DAT_14c951858;
      lVar23 = DAT_14c949118;
      uVar9 = FUN_1449e2fb2();
      local_108 = L"Class";
      FUN_14574b446(uVar9,lVar23,lVar4,L"/Script/CoreUObject");
    }
    if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
       (0 < (int)param_1[6])) {
      lVar23 = 0;
LAB_1436af859:
      lVar4 = *(longlong *)(param_1[5] + lVar23 * 8);
      if (*(longlong *)(lVar4 + 0x88) == 0) goto LAB_1436afac5;
      plVar1 = (longlong *)(lVar4 + 0x88);
      if (*(char *)(lVar4 + 0x98) != '\x01') {
        local_88 = (code *)0x0;
        uStack_80 = 0;
        FUN_14043aa1e(lVar8,&local_88);
        if (1 < (longlong)(int)uStack_80) {
          uVar11 = (longlong)(int)uStack_80 + 1;
          do {
            lVar17 = *(longlong *)(local_88 + uVar11 * 8 + -0x10);
            if (((lVar17 != 0) && (lVar18 = *(longlong *)(lVar17 + 0x2b8), lVar18 != 0)) &&
               (*(longlong *)(lVar17 + 0x18) == *(longlong *)(lVar4 + 0x90))) {
              if ((longlong)*(int *)(lVar18 + 0x40) != 0) {
                lVar17 = 0;
                goto LAB_1436afaee;
              }
              break;
            }
            uVar11 = uVar11 - 1;
          } while (2 < uVar11);
        }
        goto LAB_1436afaab;
      }
      lVar17 = *(longlong *)(lVar8 + 0x110);
      if (lVar17 != 0) {
        if (DAT_14cac9ca8 == 0) {
          local_88 = FUN_141030f22;
          local_c0 = FUN_14081d0ea;
          local_c8 = FUN_14081d0ea;
          local_d0 = &local_88;
          local_d8 = &LAB_1478c0a72;
          local_e0 = (code *)&LAB_1417b2375;
          local_e8 = L"Engine";
          local_f0 = (wchar_t *)0x1000000000;
          local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
          uStack_100 = CONCAT44(uStack_100._4_4_,8);
          local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x390);
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_1436afac5;
        iVar3 = *(int *)(lVar17 + 0x268);
        local_a8 = (uint *)(lVar17 + 0x250);
        if (iVar3 == 0) {
          uVar11 = 0;
          uVar20 = 1;
          iVar14 = 0;
          iVar13 = 0;
        }
        else {
          puVar10 = *(uint **)(lVar17 + 0x260);
          if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
            puVar10 = local_a8;
          }
          uVar21 = *puVar10;
          if (uVar21 == 0) {
            iVar14 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar14 = iVar3 + -1;
            }
            uVar11 = 0;
            uVar20 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar20 = uVar11;
            }
            iVar13 = 0;
            do {
              if (uVar20 == uVar11) goto LAB_1436afabc;
              iVar13 = iVar13 + 0x20;
              uVar21 = puVar10[uVar11 + 1];
              uVar11 = uVar11 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar11 = 0;
            iVar13 = 0;
          }
          uVar20 = (ulonglong)(-uVar21 & uVar21);
          uVar2 = uVar20 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar14 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar14) {
            iVar14 = iVar3;
          }
        }
        if (iVar14 != iVar3) {
          local_b0 = *(longlong *)(lVar17 + 0x240);
          iVar19 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar19 = iVar3 + -1;
          }
          iVar19 = iVar19 >> 5;
          uVar21 = 0xffffffff;
          do {
            lVar18 = *(longlong *)(local_b0 + (longlong)iVar14 * 0x10);
            if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0x18) == *plVar1)) goto LAB_1436afac5;
            uVar21 = uVar21 & ~(uint)uVar20;
            puVar10 = *(uint **)(lVar17 + 0x260);
            if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
              puVar10 = local_a8;
            }
            iVar14 = (int)uVar11;
            lVar18 = (longlong)iVar14;
            uVar15 = puVar10[lVar18] & uVar21;
            if (uVar15 == 0) {
              iVar16 = iVar19;
              if (iVar19 < iVar14) {
                iVar16 = iVar14;
              }
              if (iVar19 <= iVar14) break;
              lVar22 = 0;
              while( true ) {
                iVar13 = iVar13 + 0x20;
                uVar15 = puVar10[lVar18 + lVar22 + 1];
                if (uVar15 != 0) break;
                lVar22 = lVar22 + 1;
                if (iVar16 - lVar18 == lVar22) goto LAB_1436afabc;
              }
              uVar11 = (ulonglong)(iVar14 + (int)lVar22 + 1);
              uVar21 = 0xffffffff;
            }
            uVar20 = (ulonglong)(-uVar15 & uVar15);
            uVar2 = uVar20 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar14 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          } while (iVar14 < iVar3);
        }
        goto LAB_1436afabc;
      }
      goto LAB_1436afac5;
    }
  }
LAB_1436af751:
  FUN_144842a8a(param_1,&local_88);
  if (((lVar7 != 0) && ((int)local_88 < 0x181)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x110), lVar7 != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_88 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = (code *)&LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = (wchar_t *)0x1000000000;
      local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
      uStack_100 = CONCAT44(uStack_100._4_4_,8);
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x390);
      local_d0 = &local_88;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       ((*(longlong *)(lVar7 + 0x1c8) == 0 && ((longlong)(int)param_1[6] != 0)))) {
      lVar7 = 0;
      do {
        lVar8 = *(longlong *)(param_1[5] + lVar7);
        if (*(longlong *)(lVar8 + 0x88) == 0) {
          lVar7 = *(longlong *)(lVar8 + 0x30);
          if (lVar7 == 0) break;
          if (DAT_14cac7648 == 0) {
            local_88 = FUN_144a7958c;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_143242436;
            local_d8 = &LAB_14789ef1f;
            local_e0 = (code *)&LAB_1417b008f;
            local_e8 = L"Engine";
            local_f0 = (wchar_t *)0x8000000000;
            local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
            uStack_100 = CONCAT44(uStack_100._4_4_,0x10);
            local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x2b0);
            local_d0 = &local_88;
            FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
            lVar7 = *(longlong *)(lVar8 + 0x30);
            if (lVar7 == 0) break;
          }
          if ((((DAT_14cac7648 != 0) && (lVar8 = *(longlong *)(lVar7 + 0x10), lVar8 != 0)) &&
              ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(lVar8 + 0x38) &&
               (*(longlong *)
                 (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
                DAT_14cac7648 + 0x30)))) &&
             (((((*(double *)(lVar7 + 0x1c8) != 1.0 || (NAN(*(double *)(lVar7 + 0x1c8)))) ||
                (*(double *)(lVar7 + 0x1d0) != 1.0)) ||
               ((NAN(*(double *)(lVar7 + 0x1d0)) || (*(double *)(lVar7 + 0x1d8) != 1.0)))) ||
              (NAN(*(double *)(lVar7 + 0x1d8)))))) {
            local_a0 = 0x3ff0000000000000;
            local_98 = 0x3ff0000000000000;
            local_90 = 0x3ff0000000000000;
            FUN_14084f00a();
          }
          break;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)param_1[6] * 8 != lVar7);
    }
  }
  FUN_144842a8a(param_1,&local_88);
  if (((int)local_88 < 0x1ee) && (lVar7 = (longlong)(int)param_1[6], 0 < lVar7)) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) < 0) {
      FUN_147d0bf58(param_1 + 7,0);
      lVar7 = (longlong)(int)param_1[6];
      if (lVar7 == 0) goto LAB_1436afc1d;
    }
    plVar12 = (longlong *)param_1[5];
    plVar1 = plVar12 + lVar7;
    do {
      if (*plVar12 != 0) {
        FUN_147cf268a(*plVar12,&local_88);
        FUN_147d11e80(param_1 + 7,&local_88);
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
LAB_1436afc1d:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (lVar17 = lVar17 + 8, (longlong)*(int *)(lVar18 + 0x40) * 8 != lVar17) {
LAB_1436afaee:
    lVar22 = *(longlong *)(*(longlong *)(lVar18 + 0x38) + lVar17);
    if ((lVar22 != 0) && (*(longlong *)(lVar22 + 0xd0) == *plVar1)) {
      bVar5 = true;
      goto LAB_1436afaad;
    }
  }
LAB_1436afaab:
  bVar5 = false;
LAB_1436afaad:
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar5) {
LAB_1436afabc:
    *plVar1 = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined1 *)(lVar4 + 0x98) = 0;
  }
LAB_1436afac5:
  lVar23 = lVar23 + 1;
  if ((int)param_1[6] <= lVar23) goto LAB_1436af751;
  goto LAB_1436af859;
}



// FUNCTION 1436b01af FUN_1436b01af body=266 status=ok
// SIG undefined FUN_1436b01af(void)

void FUN_1436b01af(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ushort *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  longlong local_50 [4];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = (ushort *)*param_2;
  local_5c = *(undefined4 *)(puVar2 + 1);
  local_58 = (undefined1)puVar2[3];
  local_68 = *(undefined8 *)(param_2[2] + (ulonglong)*puVar2 * 0xc);
  local_60 = *(int *)(param_2[2] + 8 + (ulonglong)*puVar2 * 0xc);
  uVar1 = *(undefined4 *)((longlong)puVar2 + 7);
  *param_2 = (longlong)puVar2 + 0xb;
  *param_3 = 0;
  *param_4 = 0;
  if ((local_60 != 0 || (int)local_68 != 0) &&
     (plVar3 = (longlong *)*param_1, plVar3 != (longlong *)0x0)) {
    local_30 = 0xff;
    local_78 = param_1;
    if (*(code **)(*plVar3 + 0x48) == FUN_144727fec) {
      cVar4 = FUN_144727fec(plVar3,0x144727f03,&local_68,local_50);
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,0x144727f03,&local_68,local_50);
    }
    if (cVar4 != '\0') goto LAB_1436b026a;
  }
  local_50[0] = FUN_140081bf9(param_1[1],uVar1);
LAB_1436b026a:
  *param_3 = local_50[0];
  if (local_50[0] == 0) {
    FUN_14013e67e(param_1,&local_68,uVar1,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436b02ba FUN_1436b02ba body=25 status=ok
// SIG undefined FUN_1436b02ba(void)

void FUN_1436b02ba(void)

{
  FUN_14578d6c0();
  FUN_14170c56a(&DAT_14cb05858);
  return;
}



// FUNCTION 1436b02d4 FUN_1436b02d4 body=25 status=ok
// SIG undefined FUN_1436b02d4(void)

void FUN_1436b02d4(void)

{
  FUN_146121074();
  FUN_14170c56a(&DAT_14cb058c8);
  return;
}



// FUNCTION 1436b02ed FUN_1436b02ed body=2049 status=ok
// SIG undefined FUN_1436b02ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b02ed(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  HANDLE pvVar3;
  LPCWSTR lpName;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *local_98;
  int local_90;
  code *local_88;
  HANDLE local_80;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_88,&DAT_14cb055c0);
  if (cVar1 == '\0') {
    _DAT_14cb055c0 = 0;
    uRam000000014cb055c8 = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb055d0,L"r.XGEShaderCompile.MinBatchSize",&DAT_14c761b08,
                L"This CVar is deprecated, please use r.ShaderCompiler.DistributedMinBatchSize");
  atexit(FUN_1436adb74);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb055e0,L"r.ShaderCompiler.DistributedMinBatchSize",&DAT_14c761b08,
                L"Minimum number of shaders to compile with a distributed controller.\nSmaller number of shaders will compile locally."
               );
  atexit(FUN_1436adbb9);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb055f0,L"r.ShaderCompiler.DistributedControllerTimeout",&DAT_14c761b0c,
                L"Maximum number of seconds we expect to pass between getting distributed controller complete a task (this is used to detect problems with the distribution controllers)."
               );
  atexit(FUN_1436adbfe);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05600,L"r.ShaderCompiler.DistributedJobDescriptionLevel",&DAT_14cb05610,
                L"Sets the level of descriptive details for each distributed job batch. The following modes are supported:\n Mode 0: Disabled.\n Mode 1: Basic information of the first 20 compile jobs per batch.\n Mode 2: Additional information of the shader format per compile job.\nThis will show up in the UBA trace files. By default 0."
               );
  atexit(FUN_1436adc43);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffffffffff00);
  local_b8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb05618,L"r.ShaderCompiler.DebugValidateJobCache",&local_88,
                L"Enables debug mode for job cache which will fully execute all jobs and validate that job outputs with matching input hashes match."
               );
  atexit(FUN_1436adc88);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05630,L"r.ShaderCompiler.MaxJobCacheMemoryPercent",&DAT_14c761b10,
                L"if != 0, shader compiler cache will be limited to this percentage of available physical RAM (5% by default). If 0, the usage will be unlimited. Minimum of this or r.ShaderCompiler.MaxJobCacheMemoryMB applies."
               );
  atexit(FUN_1436adccd);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05640,L"r.ShaderCompiler.MaxJobCacheMemoryMB",&DAT_14c761b14,
                L"if != 0, shader compiler cache will be limited to this many megabytes (16GB by default). If 0, the usage will be unlimited. Minimum of this or r.ShaderCompiler.MaxJobCacheMemoryPercent applies."
               );
  atexit(FUN_1436add12);
  local_88._0_1_ = 1;
  local_b8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb05650,L"r.ShaderCompiler.PerShaderDDCCook",&local_88,
                L"If true, per-shader DDC caching will be enabled during cooks.");
  atexit(FUN_1436add57);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05668,L"r.ShaderCompiler.PerShaderDDCGlobal",&DAT_14c761b18,
                L"if != 0, Per-shader DDC queries enabled for global and default shaders.");
  atexit(FUN_1436add9c);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05680,L"r.ShaderCompiler.DebugStallSubmitJob",&DAT_14cb05678,
                L"For debugging, a value in milliseconds to stall in SubmitJob, to help reproduce threading bugs."
               );
  atexit(FUN_1436adde1);
  local_88._0_1_ = 1;
  local_b8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb05690,L"r.ShaderCompiler.PerShaderDDCAsync",&local_88,
                L"if != 0, Per-shader DDC queries will run async, instead of in the SubmitJobs task."
               );
  atexit(FUN_1436ade26);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb056a8,L"r.ShaderCompiler.JobCache",&DAT_14c761b1c,
                L"if != 0, shader compiler cache (based on the unpreprocessed input hash) will be disabled. By default, it is enabled."
               );
  atexit(FUN_1436ade6b);
  local_88._0_1_ = 1;
  local_b8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb056b8,L"r.ShaderCompiler.JobCacheDDC",&local_88,
                L"Skips compilation of all shaders on Material and Material Instance PostLoad and relies on on-demand shader compilation to compile what is needed."
               );
  atexit(FUN_1436adeb0);
  local_88._0_1_ = 1;
  local_b8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb056d0,L"r.ShaderCompiler.JobCacheDDCEnableRemotePolicy",&local_88,
                L"If true, individual shader jobs will be cached to remote/shared DDC instances in all operation modes; if false they will only cache to DDC instances on the local machine.\n"
               );
  atexit(FUN_1436adef5);
  local_88._0_1_ = 1;
  local_b8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb056e8,L"r.ShaderCompiler.JobCacheDDCCookEnableRemotePolicy",&local_88,
                L"If true, individual shader jobs will be cached to remote/shared DDC instances in all cook commandlet only; if false they will only cache to DDC instances on the local machine.\n"
               );
  atexit(FUN_1436adf3a);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05700,L"r.ShaderCompiler.JobCacheOverflowReducePercent",&DAT_14c761b20,
                L"When shader compiler job cache memory overflows, reduce memory to this percentage of the maximum.  Reduces overhead relative to cleaning up items one at a time when at max budget."
               );
  atexit(FUN_1436adf7f);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05718,L"r.ShaderCompiler.DebugStallDDCQuery",&DAT_14cb05710,
                L"For debugging, a value in milliseconds to stall in the DDC completion callback, to help reproduce threading bugs, or simulate higher latency DDC for perf testing."
               );
  atexit(FUN_1436adfc4);
  local_88._0_1_ = 0;
  local_b8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb05728,L"r.DumpShaderOutputCacheHits",&local_88,
                L"Dumps shader output bytecode and cache hits with reference to original output.\nDumping shader output bytecode for all compile shaders also requires CVar r.DumpShaderDebugInfo=1."
               );
  atexit(FUN_1436ae009);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05748,L"r.ShaderCompiler.DebugDiscardCacheOutputs",&DAT_14cb05740,
                L"if != 0, cache outputs are discarded (not added to the output map) for debugging purposes.\nEliminates usefulness of the cache, but allows repeated triggering of the same jobs for stress testing (for example, rapid undo/redo in the Material editor)."
               );
  atexit(FUN_1436ae04e);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05760,L"r.LogShaderCompilerStats",&DAT_14cb05770,
                L"When set to 1, Log detailed shader compiler stats.");
  atexit(FUN_1436ae093);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb05778,L"r.ShaderCompiler.MaxShaderStatsToPrint",&DAT_14c761b24,
                L"Max number of shaders FShaderJobCache stats logs out");
  atexit(FUN_1436ae0d8);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb05788,L"r.ShaderCompiler.TooLongIOThresholdSeconds",&DAT_14c761b28,
                L"By default, task files for SCW will be read/written sequentially, but if we ever spend more than this time (0.3s by default) doing that, we\'ll switch to parallel.We don\'t default to parallel writes as it increases the CPU overhead from the shader compiler."
               );
  atexit(FUN_1436ae11d);
  local_88 = (code *)((ulonglong)local_88._1_7_ << 8);
  local_b8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb05798,L"r.ShaderCompiler.ParallelInProcess",&local_88,
                L"EXPERIMENTAL- If true, shader compilation will be executed in-process in parallel. Note that this will serialize if the legacy preprocessor is enabled."
               );
  atexit(FUN_1436ae162);
  local_b8 = CONCAT44(local_b8._4_4_,4);
  FUN_141471170(&DAT_14cb057b8,L"r.ShaderCompiler.MemoryLimit",&DAT_14cb057b0,
                L"Specifies a memory limit (in MiB) for all ShaderCompileWorker (SCW) processes.If the total memory consumption of all SCW processes exceeds this limit, the editor will start to suspend workers and reschedule compile jobs.By default 0, effectively disabling the limitation. If this is non-zero, it must be greater than or equal to 1024 since shader compilation must be granted at least 1024 MiB of memory in total."
               );
  atexit(FUN_1436ae1a7);
  FUN_140056680(&local_98,L"UE.ShaderCompileWorker.JobGroup");
  _Src = local_98;
  DAT_14cb057c8 = (LPCWSTR)0x0;
  DAT_14cb057d0 = local_90;
  if ((longlong)local_90 == 0) {
    _DAT_14cb057d4 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cb057c8,local_90,0);
    memcpy(DAT_14cb057c8,_Src,(longlong)local_90 * 2);
    lpName = DAT_14cb057c8;
    if (DAT_14cb057d0 != 0) goto LAB_1436b08ab;
  }
  lpName = L"";
LAB_1436b08ab:
  _DAT_14cb057e8 = 0;
  DAT_14cb057e0._4_4_ = 0;
  DAT_14cb057e0._0_4_ = 0;
  DAT_14cb057d8._4_4_ = 0;
  DAT_14cb057d8._0_4_ = 0;
  pvVar3 = CreateJobObjectW((LPSECURITY_ATTRIBUTES)0x0,lpName);
  DAT_14cb057d8._0_4_ = SUB84(pvVar3,0);
  DAT_14cb057d8._4_4_ = (undefined4)((ulonglong)pvVar3 >> 0x20);
  if (pvVar3 != (HANDLE)0x0) {
    pvVar3 = CreateIoCompletionPort((HANDLE)0xffffffffffffffff,(HANDLE)0x0,0,1);
    DAT_14cb057e0._0_4_ = SUB84(pvVar3,0);
    DAT_14cb057e0._4_4_ = (undefined4)((ulonglong)pvVar3 >> 0x20);
    if (pvVar3 != (HANDLE)0x0) {
      local_88 = (code *)CONCAT44(DAT_14cb057d8._4_4_,(undefined4)DAT_14cb057d8);
      local_80 = pvVar3;
      SetInformationJobObject(local_88,JobObjectAssociateCompletionPortInformation,&local_88,0x10);
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1436ae1ec);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffffffffff00);
  local_b8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb057f0,L"r.ShaderCompiler.DebugDumpWorkerInputs",&local_88,
                L"If true, worker input files will be saved for each individual compile job alongside other debug data (note that r.DumpShaderDebugInfo must also be enabled for this to function)"
               );
  atexit(FUN_1436ae1f1);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffffffffff00);
  local_b8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb05808,L"r.Shaders.PropagateLocalWorkerOOMs",&local_88,
                L"When set, out-of-memory conditions in a local shader compile worker will be treated as regular out-of-memory conditions and propagated to the main process.\nThis is useful when running in environment with hard memory limits, where it does not matter which process in particular caused us to violate the memory limit."
               );
  atexit(FUN_1436ae236);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14cb05820,L"r.Shaders.UseGBufferRefactor",&local_88,
                L"Whether to use the refactored GBuffer that autogenerates encode/decode functions. Will be removed before UE5 ships."
               );
  atexit(FUN_1436ae27b);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1436b02ba;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb058c0,6,&local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1436b02d4;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb05930,6,&local_88);
  local_88 = (code *)0x14a1e3c88;
  local_80 = (HANDLE)CONCAT35(local_80._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb05938 = (ulonglong)uVar2;
  DAT_14cb05a48 = 0;
  _DAT_14cb05a50 = 0;
  _DAT_14cb05a58 = 2;
  atexit(FUN_1436af57c);
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa85860,1,0);
  FUN_140056680(&DAT_14cb05d20,L"_GEN_VARIABLE");
  atexit((_func_5014 *)&LAB_1436af65b);
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436b0b74 FUN_1436b0b74 body=69 status=ok
// SIG undefined FUN_1436b0b74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0b74(void)

{
  _DAT_14cb06af8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06b00,1);
  return;
}



// FUNCTION 1436b0bb9 FUN_1436b0bb9 body=69 status=ok
// SIG undefined FUN_1436b0bb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0bb9(void)

{
  _DAT_14cb06b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06b18,1);
  return;
}



// FUNCTION 1436b0bfe FUN_1436b0bfe body=69 status=ok
// SIG undefined FUN_1436b0bfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0bfe(void)

{
  _DAT_14cb06b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06b30,1);
  return;
}



// FUNCTION 1436b0c43 FUN_1436b0c43 body=69 status=ok
// SIG undefined FUN_1436b0c43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0c43(void)

{
  _DAT_14cb06b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06b48,1);
  return;
}



// FUNCTION 1436b0c94 FUN_1436b0c94 body=69 status=ok
// SIG undefined FUN_1436b0c94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0c94(void)

{
  _DAT_14cb06b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06b70,1);
  return;
}



// FUNCTION 1436b0cd9 FUN_1436b0cd9 body=69 status=ok
// SIG undefined FUN_1436b0cd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0cd9(void)

{
  _DAT_14cb06b80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06b88,1);
  return;
}



// FUNCTION 1436b0d1e FUN_1436b0d1e body=69 status=ok
// SIG undefined FUN_1436b0d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0d1e(void)

{
  _DAT_14cb06b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06ba0,1);
  return;
}



// FUNCTION 1436b0d63 FUN_1436b0d63 body=69 status=ok
// SIG undefined FUN_1436b0d63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0d63(void)

{
  _DAT_14cb06bb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06bb8,1);
  return;
}



// FUNCTION 1436b0da8 FUN_1436b0da8 body=69 status=ok
// SIG undefined FUN_1436b0da8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0da8(void)

{
  _DAT_14cb06bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06bd0,1);
  return;
}



// FUNCTION 1436b0ded FUN_1436b0ded body=69 status=ok
// SIG undefined FUN_1436b0ded(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b0ded(void)

{
  _DAT_14cb06bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b0e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06be0,1);
  return;
}



// FUNCTION 1436b0e4a FUN_1436b0e4a body=151 status=ok
// SIG undefined FUN_1436b0e4a(void)

void FUN_1436b0e4a(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 1436b0f12 FUN_1436b0f12 body=413 status=ok
// SIG undefined FUN_1436b0f12(void)

void FUN_1436b0f12(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  char cVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  
  param_1[0x18] = 0;
  lVar8 = (**(code **)(*param_1 + 0x388))();
  if (lVar8 != 0) {
    lVar9 = (longlong)(int)((longlong *)param_1[0x1d])[1];
    if (lVar9 < 1) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
      lVar13 = 1;
      do {
        lVar4 = *(longlong *)(*(longlong *)param_1[0x1d] + -8 + lVar13 * 8);
        if ((*(int *)(lVar4 + 0xec) == 0) &&
           (((*(byte *)(lVar4 + 0x540) & 2) == 0 || (*(int *)(lVar4 + 0x460) != 0)))) break;
        bVar11 = lVar9 <= lVar13;
        bVar16 = lVar13 != lVar9;
        lVar13 = lVar13 + 1;
      } while (bVar16);
    }
    uVar3 = *(uint *)(lVar8 + 8);
    iVar6 = (**(code **)(*param_1 + 0x428))(param_1,1);
    bVar1 = *(byte *)(lVar8 + 0x19);
    *(byte *)((longlong)param_1 + 0xc1) = bVar1;
    bVar2 = *(byte *)(lVar8 + 0x1a);
    *(byte *)((longlong)param_1 + 0xc2) = bVar2;
    uVar15 = uVar3 - iVar6;
    if ((int)uVar3 <= (int)(uVar3 - iVar6)) {
      uVar15 = uVar3;
    }
    if ((int)uVar15 < (int)(uint)*(byte *)(lVar8 + 0x19)) {
      uVar15 = (uint)*(byte *)(lVar8 + 0x19);
    }
    bVar14 = (byte)uVar15;
    *(byte *)((longlong)param_1 + 0xc3) = bVar14;
    *(char *)((longlong)param_1 + 0xc4) = (char)iVar6;
    *(undefined1 *)((longlong)param_1 + 199) = *(undefined1 *)(lVar8 + 0x1d);
    bVar5 = bVar14;
    if (bVar2 < bVar14) {
      bVar5 = bVar2;
    }
    *(byte *)((longlong)param_1 + 0xc2) = bVar5;
    cVar12 = (char)uVar3 - *(char *)(lVar8 + 0x1b);
    *(char *)((longlong)param_1 + 0xc5) = cVar12;
    *(char *)((longlong)param_1 + 0xc6) = cVar12;
    *(byte *)(param_1 + 0x18) =
         *(byte *)(param_1 + 0x18) & 0xfe |
         bVar1 != bVar14 & (*(byte *)((longlong)param_1 + 0xbc) & 1) == 0 & bVar11;
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x438))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x450))(param_1);
    FUN_1436beafc(lVar8,uVar7,plVar10,param_1);
    if ((DAT_14c950c29 == '\x01') && (iVar6 = (int)plVar10[1], 0 < iVar6)) {
      lVar8 = *plVar10;
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar9 * 8) != 0) {
          FUN_1456cec3c();
          iVar6 = (int)plVar10[1];
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar6);
    }
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
  FUN_1406baf36(param_1);
  return;
}



// FUNCTION 1436b10cc FUN_1436b10cc body=1745 status=ok
// SIG undefined FUN_1436b10cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b10cc(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  double *pdVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar18 = (**(code **)(*param_1 + 0x310))();
  uVar3 = *(uint *)(lVar18 + 8);
  uVar23 = (ulonglong)uVar3;
  lVar18 = (**(code **)(*param_1 + 0x370))(param_1);
  if (*(uint *)(lVar18 + 8) != uVar3) {
    lVar18 = (**(code **)(*param_1 + 0x370))(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar23);
    }
    *(undefined4 *)(lVar18 + 8) = 0;
    if (*(uint *)(lVar18 + 0xc) != uVar3) {
      FUN_14491ce3c(lVar18,uVar3);
    }
    lVar18 = (**(code **)(*param_1 + 0x370))(param_1);
    iVar21 = *(int *)(lVar18 + 8);
    *(uint *)(lVar18 + 8) = iVar21 + uVar3;
    if ((uint)(*(int *)(lVar18 + 0xc) - iVar21) < uVar3) {
      FUN_140491d2e(lVar18);
    }
    plVar1 = param_1 + 0x9e;
    *(undefined4 *)(param_1 + 0x9f) = 0;
    iVar21 = 0;
    uVar17 = uVar3;
    if (*(uint *)((longlong)param_1 + 0x4fc) != uVar3) {
      FUN_144920e50(plVar1,uVar3);
      iVar21 = (int)param_1[0x9f];
      uVar17 = *(uint *)((longlong)param_1 + 0x4fc);
    }
    *(uint *)(param_1 + 0x9f) = iVar21 + uVar3;
    if (uVar17 - iVar21 < uVar3) {
      FUN_140518214(plVar1);
    }
    else if (uVar3 == 0) goto LAB_1436b116f;
    lVar18 = 8;
    lVar26 = 0x28;
    lVar27 = 0;
    local_188 = 0;
    uStack_180 = 0x3ff0000000000000;
    lVar28 = 0;
    uVar29 = 0;
    local_190 = uVar23;
    do {
      lVar19 = (**(code **)(*param_1 + 0x308))(param_1);
      lVar19 = *(longlong *)(lVar19 + 0x10);
      lVar22 = (lVar28 >> 0x20) * 0x60;
      dVar4 = *(double *)(lVar19 + lVar22);
      dVar5 = ((double *)(lVar19 + lVar22))[1];
      pdVar24 = (double *)(lVar19 + 0x10 + lVar22);
      dVar6 = *pdVar24;
      dVar7 = pdVar24[1];
      pdVar24 = (double *)(lVar19 + 0x40 + lVar22);
      dVar8 = *pdVar24;
      dVar9 = pdVar24[1];
      dVar31 = dVar6 * dVar6 + dVar4 * dVar4;
      dVar34 = dVar7 * dVar7 + dVar5 * dVar5;
      auVar32._0_8_ = dVar31 + dVar34;
      auVar32._8_8_ = dVar31 + dVar34;
      auVar30._8_8_ = -(ulonglong)(1e-08 <= auVar32._8_8_);
      auVar30._0_8_ = -(ulonglong)(1e-08 <= auVar32._0_8_);
      auVar33 = sqrtpd(auVar32,auVar32);
      auVar33 = divpd(_DAT_149934d80,auVar33);
      auVar35._0_8_ = auVar33._0_8_ * dVar6;
      auVar35._8_8_ = auVar33._8_8_ * dVar7;
      dVar36 = (double)((ulonglong)(dVar4 * auVar33._0_8_) & -(ulonglong)(1e-08 <= auVar32._0_8_));
      dVar37 = (double)((ulonglong)(dVar5 * auVar33._8_8_) & -(ulonglong)(1e-08 <= auVar32._8_8_));
      auVar16._8_8_ = uStack_180;
      auVar16._0_8_ = local_188;
      auVar33 = blendvpd(auVar16,auVar35,auVar30);
      dVar34 = dVar37 + dVar37;
      dVar47 = auVar33._0_8_;
      dVar48 = auVar33._8_8_;
      dVar4 = dVar47 + dVar47;
      dVar7 = dVar36 * (dVar36 + dVar36);
      dVar31 = *(double *)(lVar19 + 0x50 + lVar22);
      dVar6 = (DAT_149934d80._8_8_ - (dVar47 * dVar4 + dVar7)) * dVar9;
      dVar5 = (dVar36 + dVar36) * dVar48;
      puVar2 = (undefined4 *)(lVar19 + 0x20 + lVar22);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(lVar19 + 0x30 + lVar22);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      lVar19 = param_1[0x9e];
      *(double *)(lVar19 + lVar27) =
           ((double)DAT_149934d80 - (dVar47 * dVar4 + dVar37 * dVar34)) * dVar8;
      ((double *)(lVar19 + lVar27))[1] = (dVar34 * dVar36 + dVar4 * dVar48) * dVar8;
      pdVar24 = (double *)(lVar19 + 0x10 + lVar27);
      *pdVar24 = (dVar36 * dVar4 - dVar34 * dVar48) * dVar8;
      pdVar24[1] = 0.0;
      auVar33._8_4_ = SUB84(dVar6,0);
      auVar33._0_8_ = (dVar34 * dVar36 - dVar4 * dVar48) * dVar9;
      auVar33._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(lVar19 + 0x20 + lVar27) = auVar33;
      pdVar24 = (double *)(lVar19 + 0x30 + lVar27);
      *pdVar24 = (dVar4 * dVar37 + dVar5) * dVar9;
      pdVar24[1] = 0.0;
      pdVar24 = (double *)(lVar19 + 0x40 + lVar27);
      *pdVar24 = (dVar36 * dVar4 + dVar34 * dVar48) * dVar31;
      pdVar24[1] = (dVar4 * dVar37 - dVar5) * dVar31;
      pdVar24 = (double *)(lVar19 + 0x50 + lVar27);
      *pdVar24 = (1.0 - (dVar7 + dVar37 * dVar34)) * dVar31;
      pdVar24[1] = 0.0;
      puVar2 = (undefined4 *)(lVar19 + 0x60 + lVar27);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar2 = (undefined4 *)(lVar19 + 0x70 + lVar27);
      *puVar2 = uVar14;
      puVar2[1] = uVar15;
      puVar2[2] = 0;
      puVar2[3] = 0x3ff00000;
      if (lVar27 != 0) {
        plVar20 = (longlong *)(**(code **)(*param_1 + 0x310))(param_1);
        iVar21 = -1;
        if ((longlong)uVar29 < (longlong)(int)plVar20[1]) {
          iVar21 = *(int *)(*plVar20 + lVar18);
        }
        FUN_1447fea8d(local_178,*plVar1 + lVar27,(longlong)iVar21 * 0x80 + *plVar1);
        pdVar24 = local_178;
        pdVar25 = (double *)(*plVar1 + lVar27);
        for (lVar19 = 0x10; uVar23 = local_190, lVar19 != 0; lVar19 = lVar19 + -1) {
          *pdVar25 = *pdVar24;
          pdVar24 = pdVar24 + 1;
          pdVar25 = pdVar25 + 1;
        }
      }
      lVar19 = *plVar1;
      if ((((((9.99999993922529e-09 < ABS(*(double *)(lVar19 + lVar27))) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar19 + 8 + lVar27)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x10 + lVar27)))) ||
           ((9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x20 + lVar27)) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x28 + lVar27)))))) ||
          ((9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x30 + lVar27)) ||
           ((9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x40 + lVar27)) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x48 + lVar27)))))))) ||
         (9.99999993922529e-09 < ABS(*(double *)(lVar19 + 0x50 + lVar27)))) {
        FUN_14007522e(local_178,lVar19 + lVar27);
      }
      else {
        pdVar24 = (double *)&DAT_14c846400;
        pdVar25 = local_178;
        for (lVar19 = 0x10; uVar23 = local_190, lVar19 != 0; lVar19 = lVar19 + -1) {
          *pdVar25 = *pdVar24;
          pdVar24 = pdVar24 + 1;
          pdVar25 = pdVar25 + 1;
        }
      }
      fVar40 = (float)local_178[0];
      fVar45 = (float)local_178[1];
      fVar46 = (float)local_178[2];
      fVar49 = (float)local_178[3];
      fVar38 = (float)local_158;
      fVar39 = (float)local_150;
      fVar41 = (float)local_148;
      fVar42 = (float)local_140;
      fVar43 = (float)local_138;
      fVar44 = (float)local_130;
      local_194 = (float)local_128;
      local_198 = (float)local_120;
      local_19c = (float)local_118;
      local_1a0 = (float)local_110;
      local_1a4 = (float)local_108;
      local_1a8 = (float)local_100;
      plVar20 = (longlong *)(**(code **)(*param_1 + 0x370))(param_1);
      lVar19 = *plVar20;
      *(float *)(lVar19 + -0x28 + lVar26) = fVar40;
      *(float *)(lVar19 + -0x24 + lVar26) = fVar45;
      *(float *)(lVar19 + -0x20 + lVar26) = fVar46;
      *(float *)(lVar19 + -0x1c + lVar26) = fVar49;
      *(float *)(lVar19 + -0x18 + lVar26) = fVar38;
      *(float *)(lVar19 + -0x14 + lVar26) = fVar39;
      *(float *)(lVar19 + -0x10 + lVar26) = fVar41;
      *(float *)(lVar19 + -0xc + lVar26) = fVar42;
      *(float *)(lVar19 + -8 + lVar26) = fVar43;
      *(float *)(lVar19 + -4 + lVar26) = fVar44;
      *(float *)(lVar19 + lVar26) = local_194;
      *(float *)(lVar19 + 4 + lVar26) = local_198;
      *(float *)(lVar19 + 8 + lVar26) = local_19c;
      *(float *)(lVar19 + 0xc + lVar26) = local_1a0;
      *(float *)(lVar19 + 0x10 + lVar26) = local_1a4;
      *(float *)(lVar19 + 0x14 + lVar26) = local_1a8;
      uVar29 = uVar29 + 1;
      lVar28 = lVar28 + 0x100000000;
      lVar18 = lVar18 + 0xc;
      lVar27 = lVar27 + 0x80;
      lVar26 = lVar26 + 0x40;
    } while (uVar23 != uVar29);
  }
LAB_1436b116f:
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436b17ae FUN_1436b17ae body=249 status=ok
// SIG undefined FUN_1436b17ae(void)

void FUN_1436b17ae(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  FUN_1436b18a8(param_1,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1436b180c;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    FUN_1436b0f12(param_1);
  }
LAB_1436b180c:
  FUN_1436b10cc(param_1);
  FUN_140aeee12(param_1);
  cVar2 = FUN_1417edc98(param_1);
  *(byte *)(param_1 + 0x2b5) = *(byte *)(param_1 + 0x2b5) & 0xf7 | cVar2 << 3;
  FUN_1405a7cce(param_1);
  return;
}



// FUNCTION 1436b18a8 FUN_1436b18a8 body=459 status=ok
// SIG undefined FUN_1436b18a8(void)

void FUN_1436b18a8(longlong *param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  uint local_64;
  longlong *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 0x84;
  FUN_140171a5c(plVar1,0);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x438))(param_1);
  local_64 = 0;
  if (0 < (int)plVar4[1]) {
    do {
      plVar5 = *(longlong **)(*plVar4 + (longlong)(int)local_64 * 8);
      if ((param_2 == '\0') && (cVar3 = (**(code **)(*plVar5 + 0x2c8))(plVar5), cVar3 == '\0')) {
        iVar7 = (int)plVar4[1];
        if (~local_64 + iVar7 != 0) {
          memmove((void *)(*plVar4 + (longlong)(int)local_64 * 8),
                  (void *)(*plVar4 + (longlong)(int)local_64 * 8 + 8),
                  (longlong)(int)(~local_64 + iVar7) << 3);
          iVar7 = (int)plVar4[1];
        }
        *(int *)(plVar4 + 1) = iVar7 + -1;
        FUN_147d1eed4(plVar4);
        local_64 = local_64 - 1;
      }
      else {
        local_70 = plVar5[3];
        if ((int)param_1[0x85] != *(int *)((longlong)param_1 + 0x454)) {
          uVar2 = (uint)((ulonglong)local_70 >> 0x10);
          uVar6 = (uint)local_70 & 0xffff;
          plVar5 = (longlong *)param_1[0x8c];
          if ((longlong *)param_1[0x8c] == (longlong *)0x0) {
            plVar5 = param_1 + 0x8b;
          }
          iVar7 = *(int *)((longlong)plVar5 +
                          (ulonglong)
                          ((int)param_1[0x8d] - 1U &
                          (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar6) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar5 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x14);
              if (*plVar5 == local_70) {
                if (((ulonglong)(plVar5 + 1) & 0xfffffffffffffff7) != 0) goto LAB_1436b19ed;
                break;
              }
              iVar7 = *(int *)((longlong)plVar5 + 0xc);
            } while (iVar7 != -1);
          }
        }
        local_60 = &local_70;
        local_58 = &local_64;
        FUN_140171856(plVar1,local_4c,&local_60,0);
      }
LAB_1436b19ed:
      local_64 = local_64 + 1;
    } while ((int)local_64 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436b1aad FUN_1436b1aad body=55 status=ok
// SIG undefined FUN_1436b1aad(void)

void FUN_1436b1aad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb06c10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb06c10 = FUN_14171c317(FUN_1463ffa90,uVar1,L"ESkeletalMeshAsyncProperties");
  }
  return;
}



// FUNCTION 1436b1ae4 FUN_1436b1ae4 body=55 status=ok
// SIG undefined FUN_1436b1ae4(void)

void FUN_1436b1ae4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb06ca0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb06ca0 = FUN_14171c317(FUN_1463ffdae,uVar1,L"EClothLODBiasMode");
  }
  return;
}



// FUNCTION 1436b1b1b FUN_1436b1b1b body=228 status=ok
// SIG undefined FUN_1436b1b1b(void)

longlong FUN_1436b1b1b(void)

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
  if (DAT_14cb06da8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464003b0;
    local_38 = &LAB_147d17bdf;
    local_40 = &LAB_1417edf22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb06da8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436b1c00 FUN_1436b1c00 body=5355 status=ok
// SIG undefined FUN_1436b1c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1436b1c00(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  longlong *plVar23;
  byte bVar24;
  byte bVar25;
  undefined2 *puVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong lVar32;
  ulonglong uVar33;
  bool bVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined8 *local_240;
  longlong *local_238;
  double local_230;
  longlong *local_228;
  ulonglong local_220;
  double local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b0;
  double local_1a8;
  double dStack_1a0;
  longlong *local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 *local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  longlong *local_118;
  undefined2 local_100;
  undefined6 uStack_fe;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar27 = param_2[0xcb];
  local_248 = param_2;
  local_240 = param_1;
  if (lVar27 == 0) {
    lVar27 = param_2[0xcc];
    if ((DAT_14c950c29 & lVar27 != 0) != 0) goto LAB_1436b3060;
    if (lVar27 != 0) goto LAB_1436b2ea1;
    uVar22 = 0;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_1436b3060:
      FUN_1456cec3c(lVar27);
      lVar27 = param_2[0xcb];
      if (lVar27 == 0) {
LAB_1436b2ea1:
        lVar27 = local_248[0xcc];
        bVar17 = DAT_14c950c29 & lVar27 != 0;
        param_2 = local_248;
        param_1 = local_240;
      }
      else {
        bVar17 = DAT_14c950c29 & 1;
        param_2 = local_248;
        param_1 = local_240;
      }
      local_248 = param_2;
      local_240 = param_1;
      if (bVar17 != 0) {
        FUN_1456cec3c(lVar27);
      }
    }
    uVar22 = *(undefined8 *)(lVar27 + 0x18);
  }
  FUN_1406ff4f8(param_1,param_2,uVar22);
  *param_1 = &PTR_FUN_14aa8c730;
  param_1[0x53] = param_2[0x15];
  param_1[0x54] = param_2[0x115];
  param_1[0x55] = param_3;
  lVar27 = param_2[0xcb];
  if (lVar27 == 0) {
    lVar27 = param_2[0xcc];
    if ((DAT_14c950c29 & lVar27 != 0) != 0) goto LAB_1436b2ed6;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1436b2ed6:
    FUN_1456cec3c(lVar27);
  }
  param_1[0x56] = lVar27;
  uVar22 = (**(code **)(*param_2 + 0xb98))(param_2);
  param_1[0x57] = uVar22;
  lVar27 = param_2[0xc6];
  if (lVar27 == 0) {
    if (*(code **)(*param_2 + 0xa68) == (code *)&LAB_14470a070) {
      lVar27 = 0;
    }
    else {
      lVar27 = (**(code **)(*param_2 + 0xa68))(param_2);
    }
  }
  param_1[0x58] = lVar27;
  fVar35 = *(float *)(param_2 + 199);
  if ((fVar35 == 0.0) && (!NAN(fVar35))) {
    fVar35 = (float)(**(code **)(*param_2 + 0xa70))(param_2);
  }
  *(float *)(param_1 + 0x59) = fVar35;
  bVar17 = *(byte *)((longlong)param_1 + 0x2cc);
  *(byte *)((longlong)param_1 + 0x2cc) = bVar17 & 0xfe;
  bVar24 = *(byte *)((longlong)param_2 + 0x89e) >> 5 & 2;
  *(byte *)((longlong)param_1 + 0x2cc) = bVar17 & 0xfc | bVar24;
  bVar25 = *(byte *)((longlong)param_2 + 0x89f) >> 2 & 8;
  *(byte *)((longlong)param_1 + 0x2cc) = bVar17 & 0xf4 | bVar24 | bVar25;
  *(byte *)((longlong)param_1 + 0x2cc) =
       bVar17 & 0xe4 | bVar24 | bVar25 | *(byte *)(param_2 + 0x114) >> 1 & 0x10;
  *(undefined1 *)((longlong)param_1 + 0x2cd) = *(undefined1 *)(param_1[0x42] + 8);
  *(undefined1 *)((longlong)param_1 + 0x2ce) = 0;
  (**(code **)(*param_2 + 0xa10))(param_2,param_1 + 0x5a,*(undefined4 *)(param_1[0x42] + 8));
  uVar22 = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x77) = *(byte *)((longlong)param_1 + 0x77) | 4;
  if (((int)param_2[0x65] == *(int *)((longlong)param_2 + 0x32c)) || (DAT_14cad2be8 == 0)) {
    uVar22 = (**(code **)(*param_2 + 0x648))(param_2);
  }
  param_1[0x44] = uVar22;
  if (((int)param_2[0x65] == *(int *)((longlong)param_2 + 0x32c)) || (DAT_14cad2be8 == 0)) {
    uVar22 = (**(code **)(*param_2 + 0x658))(param_2);
  }
  else {
    uVar22 = 0;
  }
  param_1[0x45] = uVar22;
  *(byte *)((longlong)param_1 + 0x75) =
       (*(byte *)((longlong)param_1 + 0x75) & 0xfd | *(byte *)((longlong)param_1 + 0x2cc) >> 3 & 2)
       ^ 2;
  cVar16 = (**(code **)(*(longlong *)param_1[0x54] + 0x40))();
  *(byte *)((longlong)param_1 + 0x2cc) = *(byte *)((longlong)param_1 + 0x2cc) & 0xfb | cVar16 << 2;
  if ((~*(byte *)((longlong)param_2 + 0x2d6) & 0x42) == 0) {
    bVar17 = *(byte *)((longlong)param_2 + 0x89f) >> 4 & 8;
  }
  else {
    bVar17 = 0;
  }
  bVar24 = *(byte *)((longlong)param_1 + 0x72);
  *(byte *)((longlong)param_1 + 0x72) = bVar24 & 0xf7 | bVar17;
  if ((~*(byte *)((longlong)param_2 + 0x2d6) & 0x42) == 0) {
    bVar25 = (*(byte *)(param_2 + 0x114) & 1) << 4;
  }
  else {
    bVar25 = 0;
  }
  *(byte *)((longlong)param_1 + 0x72) = bVar24 & 0xe7 | bVar17 | bVar25;
  fVar35 = *(float *)((longlong)param_2 + 0x8a4);
  if (1.0 <= fVar35) {
    fVar35 = 1.0;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  *(float *)(param_1 + 0x16) = fVar35;
  *(byte *)((longlong)param_1 + 0x73) =
       *(byte *)((longlong)param_1 + 0x73) & 0xfe |
       ((*(byte *)((longlong)param_1 + 0x73) & 1) != 0 || bVar17 != 0);
  FUN_14349379a(param_2,param_1 + 0x6c);
  if ((param_2 != (longlong *)0x0) && ((*(byte *)((longlong)param_2 + 0x89f) & 2) != 0)) {
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x80;
  }
  if ((int)param_2[0x65] == *(int *)((longlong)param_2 + 0x32c)) {
    local_208 = (double)((ulonglong)local_208._4_4_ << 0x20);
  }
  else {
    local_208 = (double)CONCAT44(local_208._4_4_,
                                 CONCAT31((int3)((uint)DAT_14c761950 >> 8),
                                          DAT_14cafb288 == 1 && DAT_14c761950 == 1));
  }
  if (param_4 == '\0') {
    bVar17 = *(byte *)(param_2 + 0xb9);
    *(byte *)((longlong)param_1 + 0x77) =
         *(byte *)((longlong)param_1 + 0x77) & 0xdf | (bVar17 & 2) << 4;
    iVar21 = DAT_14cae3d68;
    bVar17 = DAT_14cae3d68 != 0 & bVar17 >> 1;
    if (bVar17 == 1) {
      *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_1 + 0x73) | 0x40;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 1;
    }
    if ((iVar21 == 2 & *(byte *)(param_2 + 0xb9)) == 1) {
      *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_1 + 0x73) | 0x20;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 1;
      bVar17 = 1;
    }
    uVar19 = *(uint *)(param_1[0x55] + 8);
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar19);
    }
    plVar23 = param_1 + 0x5c;
    bVar24 = *(byte *)((longlong)param_2 + 0x2d6);
    iVar21 = *(int *)((longlong)param_1 + 0x2ec);
    if (iVar21 < (int)uVar19) {
      FUN_1417efad6(plVar23);
      uVar19 = *(uint *)(param_1[0x55] + 8);
      iVar21 = *(int *)((longlong)param_1 + 0x2ec);
    }
    iVar6 = *(int *)(param_1 + 0x5d);
    *(uint *)(param_1 + 0x5d) = iVar6 + uVar19;
    if ((uint)(iVar21 - iVar6) < uVar19) {
      FUN_147d1f21a(plVar23);
    }
    bVar25 = 0;
    local_228 = plVar23;
    memset((void *)((longlong)iVar6 * 0x10 + param_1[0x5c]),0,(longlong)(int)uVar19 << 4);
    plVar23 = (longlong *)param_1[0x55];
    if (0 < (int)plVar23[1]) {
      local_1f8 = param_1 + 0x62;
      local_1e8 = (double)(CONCAT71(local_1e8._1_7_,bVar17 | (bVar24 & 2) >> 1) ^ 1);
      uVar33 = 0;
      bVar25 = 0;
      do {
        dVar7 = *(double *)(*plVar23 + uVar33 * 8);
        plVar23 = (longlong *)param_2[0xcb];
        if (plVar23 == (longlong *)0x0) {
          plVar23 = (longlong *)param_2[0xcc];
          if ((DAT_14c950c29 & plVar23 != (longlong *)0x0) != 0) goto LAB_1436b269b;
        }
        else if (DAT_14c950c29 == 1) {
LAB_1436b269b:
          FUN_1456cec3c(plVar23);
        }
        local_230 = (double)(**(code **)(*plVar23 + 800))(plVar23,uVar33 & 0xffffffff);
        iVar21 = *(int *)((longlong)dVar7 + 0x18);
        if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar21);
        }
        local_238 = (longlong *)(uVar33 * 0x10 + *local_228);
        *(undefined4 *)(local_238 + 1) = 0;
        if (*(int *)((longlong)local_238 + 0xc) != iVar21) {
          FUN_1417efbb8(local_238);
        }
        local_220 = uVar33;
        if (0 < *(int *)((longlong)dVar7 + 0x18)) {
          local_1d8 = (double)(longlong)(int)uVar33;
          lVar27 = 0xc;
          lVar28 = 0;
          local_1c8 = dVar7;
          do {
            local_218 = *(double *)((longlong)local_1c8 + 0x10);
            uVar5 = *(ushort *)((longlong)local_218 + -0x30 + lVar27 * 4);
            uVar19 = (uint)uVar5;
            if (lVar28 < *(int *)((longlong)local_230 + 0x10)) {
              plVar23 = (longlong *)param_2[0xcb];
              if (plVar23 == (longlong *)0x0) {
                plVar23 = (longlong *)param_2[0xcc];
                if ((DAT_14c950c29 & plVar23 != (longlong *)0x0) != 0) goto LAB_1436b25f9;
              }
              else if (DAT_14c950c29 == 1) {
LAB_1436b25f9:
                FUN_1456cec3c(plVar23);
              }
              cVar16 = (**(code **)(*plVar23 + 0x328))
                                 (plVar23,*(undefined4 *)
                                           (*(longlong *)((longlong)local_230 + 8) + lVar28 * 4));
              uVar19 = (uint)uVar5;
              if (cVar16 != '\0') {
                uVar20 = *(uint *)(*(longlong *)((longlong)local_230 + 8) + lVar28 * 4);
                plVar23 = (longlong *)param_2[0xcb];
                if (plVar23 == (longlong *)0x0) {
                  plVar23 = (longlong *)param_2[0xcc];
                  if ((DAT_14c950c29 & plVar23 != (longlong *)0x0) != 0) goto LAB_1436b2647;
                }
                else if (DAT_14c950c29 == 1) {
LAB_1436b2647:
                  FUN_1456cec3c(plVar23);
                }
                uVar19 = (**(code **)(*plVar23 + 0x330))(plVar23);
                if ((int)uVar20 < (int)uVar19) {
                  uVar19 = uVar20;
                }
                if ((int)uVar19 < 1) {
                  uVar19 = 0;
                }
              }
            }
            if ((int)uVar19 <
                *(int *)(*(longlong *)(param_1[0x54] + 8) + 8 + (longlong)local_1d8 * 0x18)) {
              bVar17 = *(byte *)(*(longlong *)
                                  (*(longlong *)(param_1[0x54] + 8) + (longlong)local_1d8 * 0x18) +
                                (ulonglong)uVar19);
            }
            else {
              bVar17 = 0;
            }
            local_190 = (longlong *)(**(code **)(*param_2 + 0x610))(param_2,uVar19);
            if (((char)local_208 != '\0') ||
               (((local_190 != (longlong *)0x0 && (DAT_14cb0a8e0 != '\0')) &&
                (uVar20 = (**(code **)(*local_190 + 0x408))(local_190), uVar20 < 2)))) {
              FUN_14003fbd6();
              plVar23 = DAT_14caea080;
              local_190 = DAT_14caea080;
              uVar4 = *(undefined1 *)((longlong)param_1 + 0x2cd);
              uVar22 = (**(code **)(*DAT_14caea080 + 0x2b0))(DAT_14caea080);
              FUN_14582fb3e(plVar23,&local_188,uVar22,uVar4);
              param_1[0x5a] = param_1[0x5a] | (ulonglong)local_188;
              bVar24 = (byte)((ulonglong)local_188 >> 0x10);
              if (bVar24 <= *(byte *)((longlong)param_1 + 0x2d2)) {
                bVar24 = *(byte *)((longlong)param_1 + 0x2d2);
              }
              *(byte *)((longlong)param_1 + 0x2d2) = bVar24;
            }
            if (*(int *)((longlong)local_218 + lVar27 * 4) == 0) {
              if (local_190 != (longlong *)0x0) {
                bVar34 = false;
                goto LAB_1436b234f;
              }
LAB_1436b245a:
              local_188 = 0.0;
              dStack_180 = 0.0;
LAB_1436b2462:
              FUN_14003fbd6();
              plVar23 = DAT_14caea080;
              local_190 = DAT_14caea080;
              uVar4 = *(undefined1 *)((longlong)param_1 + 0x2cd);
              uVar22 = (**(code **)(*DAT_14caea080 + 0x2b0))(DAT_14caea080);
              FUN_14582fb3e(plVar23,&local_100,uVar22,uVar4);
              param_1[0x5a] = param_1[0x5a] | CONCAT62(uStack_fe,local_100);
              bVar24 = (byte)uStack_fe;
              if ((byte)uStack_fe <= *(byte *)((longlong)param_1 + 0x2d2)) {
                bVar24 = *(byte *)((longlong)param_1 + 0x2d2);
              }
              *(byte *)((longlong)param_1 + 0x2d2) = bVar24;
              if (local_188 != 0.0) {
                FUN_1400020a8();
              }
            }
            else {
              iVar21 = *(int *)(*(longlong *)((longlong)local_218 + -8 + lVar27 * 4) + 8);
              bVar34 = iVar21 != 0;
              if (local_190 == (longlong *)0x0) {
                param_1 = local_240;
                if (iVar21 == 0) goto LAB_1436b245a;
                bVar24 = 0;
LAB_1436b2396:
                bVar18 = 0;
                plVar23 = (longlong *)0x0;
                param_1 = local_240;
LAB_1436b239a:
                bVar24 = bVar24 & bVar18;
                bVar10 = true;
              }
              else {
LAB_1436b234f:
                bVar10 = false;
                bVar24 = (**(code **)(*local_190 + 0x340))(local_190,0);
                param_1 = local_240;
                plVar23 = local_190;
                if (bVar34) {
                  if (local_190 == (longlong *)0x0) goto LAB_1436b2396;
                  bVar18 = (**(code **)(*local_190 + 0x340))(local_190,9);
                  plVar23 = local_190;
                  goto LAB_1436b239a;
                }
              }
              if ((bVar24 & plVar23 != (longlong *)0x0) == 0) {
                local_188 = 0.0;
                dStack_180 = 0.0;
                if (plVar23 != (longlong *)0x0) {
                  cVar16 = (**(code **)(*plVar23 + 0x340))(plVar23,0);
                  if (cVar16 == '\0') {
                    FUN_1400020e8(&local_188,L"SkeletalMesh",0xc);
                  }
                  if ((bVar10) &&
                     (cVar16 = (**(code **)(*local_190 + 0x340))(local_190,9), cVar16 == '\0')) {
                    puVar26 = (undefined2 *)&DAT_14aa8c978;
                    bVar34 = dStack_180._0_4_ - 2U < 0x7fffffff;
                    if (!bVar34) {
                      puVar26 = &DAT_149dfb77a;
                    }
                    FUN_1400020e8(&local_188,puVar26,bVar34 * '\x03');
                    FUN_1400020e8(&local_188,L"Clothing",8);
                  }
                }
                goto LAB_1436b2462;
              }
            }
            param_2 = local_248;
            if (((bVar17 | local_1e8._0_1_) & 1) == 0) {
              plVar23 = (longlong *)local_248[0xcb];
              if (plVar23 == (longlong *)0x0) {
                plVar23 = (longlong *)local_248[0xcc];
                if ((DAT_14c950c29 & plVar23 != (longlong *)0x0) != 0) goto LAB_1436b2620;
              }
              else if (DAT_14c950c29 == 1) {
LAB_1436b2620:
                FUN_1456cec3c(plVar23);
              }
              cVar16 = (**(code **)(*plVar23 + 0x328))(plVar23,uVar19);
              bVar17 = 1;
              if (cVar16 != '\0') {
                bVar17 = *(byte *)((longlong)local_218 + -0x23 + lVar27 * 4);
              }
            }
            else {
              bVar17 = 0;
            }
            plVar23 = local_190;
            *(byte *)((longlong)param_1 + 0x2cc) =
                 *(byte *)((longlong)param_1 + 0x2cc) |
                 *(byte *)((longlong)param_1 + 0x2d5) >> 5 & 1;
            iVar21 = (int)local_238[1];
            lVar29 = (longlong)iVar21;
            *(uint *)(local_238 + 1) = iVar21 + 1U;
            if (*(uint *)((longlong)local_238 + 0xc) < iVar21 + 1U) {
              FUN_147d1f2a0(local_238,iVar21);
            }
            bVar25 = bVar25 | bVar17;
            lVar32 = *local_238;
            *(longlong **)(lVar32 + lVar29 * 0x18) = plVar23;
            *(byte *)(lVar32 + 8 + lVar29 * 0x18) = bVar17;
            *(uint *)(lVar32 + 0xc + lVar29 * 0x18) = uVar19;
            *(undefined1 *)(lVar32 + 0x10 + lVar29 * 0x18) = 0;
            FUN_140282c6a(local_1f8,&local_188,&local_190,0);
            lVar28 = lVar28 + 1;
            lVar27 = lVar27 + 0x3e;
            param_1 = local_240;
          } while (lVar28 < *(int *)((longlong)local_1c8 + 0x18));
        }
        uVar33 = local_220 + 1;
        plVar23 = (longlong *)param_1[0x55];
      } while ((longlong)uVar33 < (longlong)(int)plVar23[1]);
      bVar25 = bVar25 & 1;
    }
    plVar23 = (longlong *)param_1[0x58];
    if ((plVar23 != (longlong *)0x0) &&
       (cVar16 = (**(code **)(*plVar23 + 0x340))(plVar23,0), cVar16 == '\0')) {
      FUN_14003fbd6();
      param_1[0x58] = DAT_14caea080;
    }
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & (bVar25 | 0xfe);
  }
  local_210 = param_1 + 0x60;
  if (param_2 == (longlong *)0x0) goto LAB_1436b2f22;
  plVar23 = (longlong *)local_248[0xcb];
  if (plVar23 == (longlong *)0x0) {
    plVar23 = (longlong *)local_248[0xcc];
    if ((DAT_14c950c29 & plVar23 != (longlong *)0x0) != 0) goto LAB_1436b308a;
    if (plVar23 == (longlong *)0x0) goto LAB_1436b2f22;
LAB_1436b2f03:
    plVar23 = (longlong *)local_248[0xcc];
    if ((DAT_14c950c29 & plVar23 != (longlong *)0x0) != 0) {
LAB_1436b30df:
      FUN_1456cec3c(plVar23);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_1436b308a:
    FUN_1456cec3c(plVar23);
    plVar23 = (longlong *)local_248[0xcb];
    param_1 = local_240;
    if (plVar23 == (longlong *)0x0) goto LAB_1436b2f03;
    if ((DAT_14c950c29 & 1) == 0) goto LAB_1436b271f;
    goto LAB_1436b30df;
  }
LAB_1436b271f:
  lVar27 = (**(code **)(*plVar23 + 0x338))(plVar23);
  if ((((lVar27 != 0) && ((*(byte *)((longlong)local_248 + 0x2d6) & 2) != 0)) &&
      ((*(char *)((longlong)local_248 + 0x89f) < '\0' || ((*(byte *)(local_248 + 0x114) & 1) != 0)))
      ) && (0 < *(int *)(lVar27 + 0x48))) {
    plVar23 = param_1 + 0x5e;
    lVar28 = 0;
    local_1b0 = lVar27;
    do {
      lVar29 = *(longlong *)(*(longlong *)(lVar27 + 0x40) + lVar28 * 8);
      iVar21 = FUN_144909502(local_248,*(undefined8 *)(lVar29 + 0x28));
      if (iVar21 != -1) {
        plVar31 = (longlong *)local_248[0xcb];
        if (plVar31 == (longlong *)0x0) {
          plVar31 = (longlong *)local_248[0xcc];
          if ((DAT_14c950c29 & plVar31 != (longlong *)0x0) != 0) goto LAB_1436b2e55;
        }
        else if (DAT_14c950c29 == 1) {
LAB_1436b2e55:
          FUN_1456cec3c(plVar31);
        }
        (**(code **)(*plVar31 + 0x340))(plVar31,&local_188,iVar21);
        local_220 = (ulonglong)*(int *)(lVar29 + 0x40);
        if (0 < (longlong)local_220) {
          lVar27 = local_220 * 0x50;
          lVar32 = 0;
          do {
            lVar30 = *(longlong *)(lVar29 + 0x38);
            fVar35 = *(float *)(lVar30 + 0x48 + lVar32);
            dVar7 = *(double *)(lVar30 + 0x40 + lVar32);
            dVar2 = *(double *)(lVar30 + 0x30 + lVar32);
            dVar40 = *(double *)(lVar30 + 0x38 + lVar32);
            dVar9 = dVar7 * (double)local_148 + dVar40 * local_168 + dVar2 * local_188 + local_128;
            dVar36 = dVar7 * dStack_140 + dVar40 * dStack_160 + dVar2 * dStack_180 + dStack_120;
            dVar7 = dVar7 * local_138 + dVar40 * local_158 + dVar2 * local_178 + (double)local_118;
            iVar6 = *(int *)(local_240 + 0x5f);
            lVar30 = (longlong)iVar6;
            *(uint *)(local_240 + 0x5f) = iVar6 + 1U;
            if (*(uint *)((longlong)local_240 + 0x2fc) < iVar6 + 1U) {
              FUN_147d1f334(plVar23,iVar6);
            }
            lVar8 = *plVar23;
            *(int *)(lVar8 + lVar30 * 0x48) = iVar21;
            *(double *)(lVar8 + 8 + lVar30 * 0x48) = dVar9;
            *(double *)(lVar8 + 0x10 + lVar30 * 0x48) = dVar36;
            *(double *)(lVar8 + 0x18 + lVar30 * 0x48) = dVar7;
            *(double *)(lVar8 + 0x20 + lVar30 * 0x48) = (double)fVar35;
            puVar1 = (undefined8 *)(lVar8 + 0x28 + lVar30 * 0x48);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar8 + 0x38 + lVar30 * 0x48) = 0x3ff0000000000000;
            *(undefined8 *)(lVar8 + 0x40 + lVar30 * 0x48) = 0;
            lVar32 = lVar32 + 0x50;
          } while (lVar27 != lVar32);
        }
        local_228 = (longlong *)(longlong)*(int *)(lVar29 + 0x60);
        if (0 < (longlong)local_228) {
          lVar32 = (longlong)local_228 * 0x68;
          lVar27 = 0;
          do {
            lVar30 = *(longlong *)(lVar29 + 0x58);
            local_218 = (double)*(float *)(lVar30 + 100 + lVar27);
            auVar3 = *(undefined1 (*) [16])(lVar30 + 0x48 + lVar27);
            dVar7 = *(double *)(lVar30 + 0x58 + lVar27);
            auVar43 = divpd(auVar3,_DAT_1499387d0);
            auVar44._8_8_ = 0;
            auVar44._0_8_ = dVar7;
            auVar44 = divpd(auVar44,_DAT_1499387d0);
            auVar43 = roundpd(auVar43,auVar43,3);
            auVar44 = roundpd(auVar44,auVar44,3);
            dVar2 = (auVar3._0_8_ - auVar43._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar40 = (auVar3._8_8_ - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar7 = (dVar7 - auVar44._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar9 = (0.0 - auVar44._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar36 = sin(dVar2);
            dVar37 = sin(dVar40);
            dVar38 = sin(dVar7);
            sin(dVar9);
            dVar39 = cos(dVar2);
            dVar40 = cos(dVar40);
            dVar41 = cos(dVar7);
            cos(dVar9);
            dVar15 = local_138;
            dVar14 = local_158;
            dVar13 = local_178;
            dVar12 = dStack_180;
            dVar11 = local_188;
            dVar7 = -(dVar40 * dVar36 * dVar38) + dVar37 * dVar39 * dVar41;
            dVar2 = dVar37 * dVar36 * dVar38 + dVar40 * dVar39 * dVar41;
            dVar42 = dVar36 * dVar37 * dVar41 - dVar39 * dVar40 * dVar38;
            dVar37 = -(dVar36 * dVar40 * dVar41) - dVar39 * dVar37 * dVar38;
            dVar40 = _DAT_14cb06dc8 * dVar7 * -1.0 +
                     _DAT_14cb06dd0 * dVar37 +
                     _DAT_14cb06dd8 * dVar42 * 1.0 + _DAT_14cb06dc0 * dVar2;
            dVar9 = _DAT_14cb06dc0 * dVar7 * 1.0 +
                    _DAT_14cb06dd8 * dVar37 +
                    _DAT_14cb06dd0 * dVar42 * -1.0 + _DAT_14cb06dc8 * dVar2;
            dVar36 = _DAT_14cb06dd8 * dVar7 * 1.0 +
                     ((dVar42 * _DAT_14cb06dc8 * 1.0 + dVar2 * _DAT_14cb06dd0) -
                     dVar37 * _DAT_14cb06dc0);
            dVar2 = _DAT_14cb06dd0 * dVar7 * -1.0 +
                    ((dVar42 * _DAT_14cb06dc0 * -1.0 + dVar2 * _DAT_14cb06dd8) -
                    dVar37 * _DAT_14cb06dc8);
            dVar7 = dVar9 * 0.0 + dVar36 * -0.0;
            dVar7 = dVar7 + dVar7;
            local_1f8 = local_148;
            dStack_1f0 = dStack_140;
            local_1e8 = local_128;
            dStack_1e0 = dStack_120;
            local_238 = local_118;
            local_230 = (double)*(float *)(lVar30 + 0x60 + lVar27);
            local_1c8 = *(double *)(lVar30 + 0x40 + lVar27);
            uStack_1c0 = 0;
            local_208 = *(double *)(lVar30 + 0x30 + lVar27);
            uStack_200 = 0;
            local_1d8 = *(double *)(lVar30 + 0x38 + lVar27);
            uStack_1d0 = 0;
            iVar6 = *(int *)(local_240 + 0x5f);
            lVar30 = (longlong)iVar6;
            *(uint *)(local_240 + 0x5f) = iVar6 + 1U;
            dVar37 = local_168;
            dVar38 = dStack_160;
            if (*(uint *)((longlong)local_240 + 0x2fc) < iVar6 + 1U) {
              local_1a8 = local_168;
              dStack_1a0 = dStack_160;
              FUN_147d1f334(plVar23,iVar6);
              dVar37 = local_1a8;
              dVar38 = dStack_1a0;
            }
            dVar41 = dVar36 - dVar40 * 0.0;
            dVar42 = dVar40 * 0.0 - dVar9;
            dVar42 = dVar42 + dVar42;
            dVar41 = dVar41 + dVar41;
            dVar39 = (dVar40 * dVar41 - dVar7 * dVar9) + dVar2 * dVar42 + 0.0;
            dVar40 = (dVar36 * dVar7 - dVar42 * dVar40) + dVar2 * dVar41 + 0.0;
            dVar7 = dVar2 * dVar7 + 1.0 + (dVar9 * dVar42 - dVar41 * dVar36);
            lVar8 = *plVar23;
            *(int *)(lVar8 + lVar30 * 0x48) = iVar21;
            *(double *)(lVar8 + 8 + lVar30 * 0x48) =
                 local_1c8 * (double)local_1f8 + local_1d8 * dVar37 + local_208 * dVar11 + local_1e8
            ;
            *(double *)(lVar8 + 0x10 + lVar30 * 0x48) =
                 local_1c8 * dStack_1f0 + local_1d8 * dVar38 + local_208 * dVar12 + dStack_1e0;
            *(double *)(lVar8 + 0x18 + lVar30 * 0x48) =
                 dVar15 * local_1c8 + dVar14 * local_1d8 + dVar13 * local_208 + (double)local_238;
            *(double *)(lVar8 + 0x20 + lVar30 * 0x48) = local_230;
            *(double *)(lVar8 + 0x28 + lVar30 * 0x48) =
                 local_1e8 * 0.0 + dVar39 * (double)local_1f8 + dVar40 * dVar37 + dVar7 * dVar11;
            *(double *)(lVar8 + 0x30 + lVar30 * 0x48) =
                 dStack_1e0 * 0.0 + dVar39 * dStack_1f0 + dVar40 * dVar38 + dVar7 * dVar12;
            *(double *)(lVar8 + 0x38 + lVar30 * 0x48) =
                 dVar39 * dVar15 + dVar40 * dVar14 + dVar7 * dVar13 + (double)local_238 * 0.0;
            *(double *)(lVar8 + 0x40 + lVar30 * 0x48) = local_218;
            lVar27 = lVar27 + 0x68;
          } while (lVar32 - lVar27 != 0);
        }
        param_1 = local_240;
        lVar27 = local_1b0;
        if (0 < (int)local_220 || 0 < (int)local_228) {
          local_100 = (undefined2)iVar21;
          FUN_144838706(local_210,&local_100);
          param_1 = local_240;
          lVar27 = local_1b0;
        }
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)(lVar27 + 0x48));
  }
LAB_1436b2f22:
  if (*(int *)(param_1 + 0x61) != 0) {
    FUN_144a2d711(*local_210);
  }
  if (1 < *(byte *)((longlong)param_1 + 0x2cd)) {
    FUN_1403fbdee(param_1);
  }
  cVar16 = FUN_1403fbd81();
  if (cVar16 != '\0') {
    if ((char)*(byte *)((longlong)param_1 + 0x76) < '\0') {
      bVar17 = 0x80;
    }
    else {
      bVar17 = (*(byte *)((longlong)param_1 + 0x2cc) & 0x10) << 3;
    }
    *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0x7f | bVar17;
  }
  *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_1 + 0x73) | 0x80;
  bVar17 = 4;
  if ((*(byte *)((longlong)param_1 + 0x2d4) & 2) == 0) {
    bVar17 = *(byte *)((longlong)param_1 + 0x2d4) & 4;
  }
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0xfb | bVar17;
  if ((local_f0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436b30ec FUN_1436b30ec body=467 status=ok
// SIG undefined FUN_1436b30ec(void)

void FUN_1436b30ec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  
  if (*(longlong **)(param_1 + 0x2a0) == (longlong *)0x0) {
    return;
  }
  plVar15 = *(longlong **)(param_1 + 0x2a8);
  uVar1 = *(uint *)(plVar15 + 1);
  if ((ulonglong)uVar1 == 0) {
    return;
  }
  uVar6 = uVar1 - 1;
  if ((int)(uint)*(byte *)((longlong)plVar15 + 0x1b) < (int)(uVar1 - 1)) {
    uVar6 = (uint)*(byte *)((longlong)plVar15 + 0x1b);
  }
  uVar13 = 0;
  if (0 < (int)uVar6) {
    uVar13 = uVar6;
  }
  if ((int)uVar1 <= (int)uVar13) {
    return;
  }
  uVar10 = (ulonglong)uVar13;
  while (*(int *)(*(longlong *)(*plVar15 + uVar10 * 8) + 0xec) == 0) {
    uVar10 = uVar10 + 1;
    if (uVar1 == uVar10) {
      return;
    }
  }
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x90))();
  if (iVar7 < (int)uVar10) {
    return;
  }
  if (*(int *)(param_1 + 0x2e8) < 1) {
    return;
  }
  lVar14 = (longlong)iVar7;
  lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x2a8) + lVar14 * 8);
  iVar8 = *(int *)(lVar3 + 0x18);
  if (iVar8 < 1) {
    return;
  }
  plVar15 = (longlong *)(lVar14 * 0x10 + *(longlong *)(param_1 + 0x2e0));
  lVar11 = 0xf0;
  lVar12 = 0;
  lVar9 = 0;
  do {
    if ((int)plVar15[1] <= lVar9) {
      return;
    }
    lVar4 = *plVar15;
    iVar2 = *(int *)(lVar4 + 0xc + lVar12);
    if (((((longlong)iVar2 < 0) ||
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 8),
         *(int *)(lVar5 + 8 + lVar14 * 0x18) <= iVar2)) ||
        (*(char *)(*(longlong *)(lVar5 + lVar14 * 0x18) + (longlong)iVar2) == '\0')) &&
       (*(char *)(*(longlong *)(lVar3 + 0x10) + lVar11) == '\0')) {
      FUN_1400b599c(param_1,param_2,param_3,param_4,lVar3,iVar7,(int)lVar9,0,lVar4 + lVar12,1,
                    param_5,0,0,0);
      iVar8 = *(int *)(lVar3 + 0x18);
    }
    lVar9 = lVar9 + 1;
    lVar11 = lVar11 + 0xf8;
    lVar12 = lVar12 + 0x18;
  } while (lVar9 < iVar8);
  return;
}



// FUNCTION 1436b32e8 FUN_1436b32e8 body=249 status=ok
// SIG undefined FUN_1436b32e8(void)

undefined8 * FUN_1436b32e8(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14ca96da8 != '\0') && ((*(byte *)(param_1 + 0x2cc) & 0x10) != 0)) {
    local_38 = (void *)0x0;
    iStack_30 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 8);
    lVar3 = (longlong)iStack_30;
    uStack_2c = 0;
    uVar1 = uStack_2c;
    uStack_2c = 0;
    if (lVar3 != 0) {
      uStack_2c = uVar1;
      FUN_147cd0c7a(&local_38);
    }
    memset(local_38,0,lVar3 << 3);
    plVar2 = *(longlong **)(param_1 + 0x2a8);
    if (0 < (int)plVar2[1]) {
      lVar3 = 0;
      do {
        *(longlong *)((longlong)local_38 + lVar3 * 8) = *(longlong *)(*plVar2 + lVar3 * 8) + 0x550;
        lVar3 = lVar3 + 1;
        plVar2 = *(longlong **)(param_1 + 0x2a8);
      } while (lVar3 < (int)plVar2[1]);
    }
    *param_2 = local_38;
    *(int *)(param_2 + 1) = iStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1436b33f0 FUN_1436b33f0 body=1386 status=ok
// SIG undefined FUN_1436b33f0(void)

void FUN_1436b33f0(longlong param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_218 [40];
  longlong *local_1f0;
  double local_1e8 [4];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168 [14];
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x60))();
  lVar7 = (longlong)(int)param_3[1];
  local_1f0 = param_3;
  FUN_147d183c6(param_3,*(int *)(param_1 + 0x2f8) + (int)param_3[1]);
  if ((longlong)*(int *)(param_1 + 0x2f8) != 0) {
    piVar10 = *(int **)(param_1 + 0x2f0);
    piVar6 = piVar10 + (longlong)*(int *)(param_1 + 0x2f8) * 0x12;
    do {
      pdVar8 = (double *)(param_1 + 0x100);
      pdVar9 = local_168;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pdVar9 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      }
      iVar2 = *piVar10;
      if ((-1 < (longlong)iVar2) && (iVar2 < (int)plVar3[1])) {
        lVar5 = *plVar3;
        lVar4 = (longlong)iVar2 * 0x40;
        local_1e8[0] = (double)*(float *)(lVar5 + lVar4);
        local_1e8[1] = (double)*(float *)(lVar5 + 4 + lVar4);
        local_1e8[2] = (double)*(float *)(lVar5 + 8 + lVar4);
        local_1e8[3] = (double)*(float *)(lVar5 + 0xc + lVar4);
        local_1c8 = (double)*(float *)(lVar5 + 0x10 + lVar4);
        local_1c0 = (double)*(float *)(lVar5 + 0x14 + lVar4);
        local_1b8 = (double)*(float *)(lVar5 + 0x18 + lVar4);
        local_1b0 = (double)*(float *)(lVar5 + 0x1c + lVar4);
        local_1a8 = (double)*(float *)(lVar5 + 0x20 + lVar4);
        local_1a0 = (double)*(float *)(lVar5 + 0x24 + lVar4);
        local_198 = (double)*(float *)(lVar5 + 0x28 + lVar4);
        local_190 = (double)*(float *)(lVar5 + 0x2c + lVar4);
        local_188 = (double)*(float *)(lVar5 + 0x30 + lVar4);
        local_180 = (double)*(float *)(lVar5 + 0x34 + lVar4);
        local_178 = (double)*(float *)(lVar5 + 0x38 + lVar4);
        local_170 = (double)*(float *)(lVar5 + 0x3c + lVar4);
        FUN_1447fea8d(local_168,local_1e8,(double *)(param_1 + 0x100));
      }
      local_1e8[0] = 1.0;
      local_1e8[1] = 1.0;
      local_1e8[2] = 1.0;
      lVar5 = 0;
      do {
        dVar13 = *(double *)((longlong)local_168 + lVar5 * 4);
        dVar1 = *(double *)((longlong)local_168 + lVar5 * 4 + 8);
        dVar17 = *(double *)((longlong)local_168 + lVar5 * 4 + 0x10);
        dVar13 = dVar17 * dVar17 + dVar13 * dVar13 + dVar1 * dVar1;
        *(ulonglong *)((longlong)local_1e8 + lVar5) =
             -(ulonglong)(9.99999993922529e-09 < dVar13) & (ulonglong)SQRT(dVar13);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      dVar13 = local_1e8[0];
      if (local_1e8[0] <= local_1e8[1]) {
        dVar13 = local_1e8[1];
      }
      if (dVar13 <= local_1e8[2]) {
        dVar13 = local_1e8[2];
      }
      lVar5 = *local_1f0;
      lVar4 = lVar7 * 0x20;
      dVar1 = *(double *)(piVar10 + 6);
      dVar17 = *(double *)(piVar10 + 2);
      dVar14 = *(double *)(piVar10 + 4);
      dVar11 = param_2[2];
      dVar12 = param_2[1];
      *(float *)(lVar5 + lVar4) =
           (float)(dVar1 * local_168[8] + dVar14 * local_168[4] + dVar17 * local_168[0] +
                   local_168[0xc] + *param_2);
      *(float *)(lVar5 + 4 + lVar4) =
           (float)(dVar1 * local_168[9] + dVar14 * local_168[5] + dVar17 * local_168[1] +
                   local_168[0xd] + dVar12);
      *(float *)(lVar5 + 8 + lVar4) =
           (float)(dVar17 * local_168[2] + dVar14 * local_168[6] + dVar1 * local_168[10] + local_f8
                  + dVar11);
      *(float *)(lVar5 + 0xc + lVar4) = (float)(*(double *)(piVar10 + 8) * (double)(float)dVar13);
      dVar1 = *(double *)(piVar10 + 10);
      dVar17 = *(double *)(piVar10 + 0xc);
      dVar14 = *(double *)(piVar10 + 0xe);
      dVar11 = local_168[0xc] * 0.0 +
               dVar14 * local_168[8] + dVar17 * local_168[4] + dVar1 * local_168[0];
      dVar12 = local_168[0xd] * 0.0 +
               dVar14 * local_168[9] + dVar17 * local_168[5] + dVar1 * local_168[1];
      dVar16 = 0.0;
      dVar14 = local_168[2] * dVar1 + local_168[6] * dVar17 + local_168[10] * dVar14 +
               local_f8 * 0.0;
      dVar1 = dVar14 * dVar14 + dVar11 * dVar11 + dVar12 * dVar12;
      dVar17 = 0.0;
      dVar15 = 0.0;
      if (9.99999993922529e-09 < dVar1) {
        dVar15 = 1.0 / SQRT(dVar1);
        dVar16 = dVar14 * dVar15;
        dVar17 = dVar12 * dVar15;
        dVar15 = dVar15 * dVar11;
      }
      lVar5 = lVar5 + lVar4;
      *(float *)(lVar5 + 0x10) = (float)dVar15;
      *(float *)(lVar5 + 0x14) = (float)dVar17;
      *(float *)(lVar5 + 0x18) = (float)dVar16;
      lVar7 = lVar7 + 1;
      *(float *)(lVar5 + 0x1c) = (float)((double)(float)dVar13 * *(double *)(piVar10 + 0x10));
      piVar10 = piVar10 + 0x12;
    } while (piVar10 != piVar6);
  }
  if ((local_e0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436b3968 FUN_1436b3968 body=449 status=ok
// SIG undefined FUN_1436b3968(void)

void FUN_1436b3968(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_b8 [104];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar4 = *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x110) +
          *(double *)(param_1 + 0x100) * *(double *)(param_1 + 0x100) +
          *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x108);
  if (SQRT(dVar4) <= 9.999999747378752e-05 || dVar4 <= 9.99999993922529e-09) {
    dVar4 = *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x130) +
            *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x120) +
            *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x128);
    if (SQRT(dVar4) <= 9.999999747378752e-05 || dVar4 <= 9.99999993922529e-09) {
      dVar4 = *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x150) +
              *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x140) +
              *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x148);
      if (SQRT(dVar4) <= 9.999999747378752e-05 || dVar4 <= 9.99999993922529e-09) goto LAB_1436b3ab5;
    }
  }
  FUN_1448ac920(local_b8,param_1 + 0x100);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x58))();
  if ((lVar2 != 0) && ((*(byte *)(param_1 + 0x278) & 1) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x2b8);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x308))();
    local_c8 = local_50;
    local_d8 = lVar2;
    local_d0 = local_b8;
    FUN_147c7a8b4(uVar1,param_2,param_3,uVar3);
    *(byte *)(param_1 + 0x278) = *(byte *)(param_1 + 0x278) & 0xfe;
  }
LAB_1436b3ab5:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436b3b2a FUN_1436b3b2a body=111 status=ok
// SIG undefined FUN_1436b3b2a(void)

void FUN_1436b3b2a(longlong param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x490))();
  (**(code **)(*plVar1 + 0xf8))(plVar1,param_1 + 0x100,uVar2);
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x490))();
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x0001436b3b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x100,uVar2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 1436b3b99 FUN_1436b3b99 body=69 status=ok
// SIG undefined FUN_1436b3b99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3b99(void)

{
  _DAT_14cb06df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3bdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06df8,1);
  return;
}



// FUNCTION 1436b3bde FUN_1436b3bde body=69 status=ok
// SIG undefined FUN_1436b3bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3bde(void)

{
  _DAT_14cb07768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb07770,1);
  return;
}



// FUNCTION 1436b3c23 FUN_1436b3c23 body=69 status=ok
// SIG undefined FUN_1436b3c23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3c23(void)

{
  _DAT_14cb06e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06e18,1);
  return;
}



// FUNCTION 1436b3c68 FUN_1436b3c68 body=69 status=ok
// SIG undefined FUN_1436b3c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3c68(void)

{
  _DAT_14cb06e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06e30,1);
  return;
}



// FUNCTION 1436b3cad FUN_1436b3cad body=69 status=ok
// SIG undefined FUN_1436b3cad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3cad(void)

{
  _DAT_14cb06e40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06e48,1);
  return;
}



// FUNCTION 1436b3cf2 FUN_1436b3cf2 body=69 status=ok
// SIG undefined FUN_1436b3cf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3cf2(void)

{
  _DAT_14cb06e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06e60,1);
  return;
}



// FUNCTION 1436b3d37 FUN_1436b3d37 body=69 status=ok
// SIG undefined FUN_1436b3d37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3d37(void)

{
  _DAT_14cb06e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3d79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06e78,1);
  return;
}



// FUNCTION 1436b3d7c FUN_1436b3d7c body=69 status=ok
// SIG undefined FUN_1436b3d7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436b3d7c(void)

{
  _DAT_14cb06e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436b3dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb06e90,1);
  return;
}


