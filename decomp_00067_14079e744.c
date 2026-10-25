// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14079e744 FUN_14079e744 body=96 status=ok
// SIG undefined FUN_14079e744(void)

void FUN_14079e744(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar5 = (int)param_1[1];
  lVar8 = (longlong)iVar5;
  if (lVar8 != 0) {
    iVar7 = iVar5 + 0x10;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      FUN_14079e7a6(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar2 = *param_1;
    puVar1 = (undefined4 *)(lVar2 + (longlong)(iVar5 + -1) * 8);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(lVar2 + lVar8 * 8 + lVar6 * 8);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0x10);
  }
  return;
}



// FUNCTION 14079e7a6 FUN_14079e7a6 body=307 status=ok
// SIG undefined FUN_14079e7a6(void)

void FUN_14079e7a6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14079e83a;
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
LAB_14079e83a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14079e8da FUN_14079e8da body=483 status=ok
// SIG undefined FUN_14079e8da(void)

void FUN_14079e8da(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong *local_c0;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined1 *local_90;
  code **local_88;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3b0))) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14b414c90;
    local_90 = local_78;
    local_88 = local_b8;
    local_b8[0] = FUN_143dcc8e0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (ulonglong)param_2 * 8);
    if ((longlong)*(int *)(lVar2 + 0x28) != 0) {
      plVar10 = *(longlong **)(lVar2 + 0x20);
      plVar9 = plVar10 + *(int *)(lVar2 + 0x28);
      do {
        pcVar5 = local_b8[0];
        plVar3 = (longlong *)*plVar10;
        if ((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 0xd) == param_2)) {
          pppuVar7 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar7 = &local_98;
          }
          local_c0 = plVar3;
          uVar6 = (*(code *)(*pppuVar7)[1])();
          (*pcVar5)(uVar6,&local_c0);
          (**(code **)(*plVar3 + 0x2f8))(plVar3);
          lVar11 = (longlong)(int)local_50;
          if (0 < lVar11) {
            local_c8 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              local_c8 = local_78;
            }
            lVar8 = 0;
            do {
              (**(code **)(**(longlong **)(local_c8 + lVar8) + 0x2f8))();
              lVar8 = lVar8 + 8;
            } while (lVar11 * 8 != lVar8);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
    *(undefined4 *)(lVar2 + 0x28) = 0;
    if (*(int *)(lVar2 + 0x2c) < 0) {
      FUN_1488e51b4(lVar2 + 0x20);
    }
    puVar4 = *(undefined8 **)(lVar2 + 0x68);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x68) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar7 = &local_98;
      if (local_a8 != (undefined ***)0x0) {
        pppuVar7 = local_a8;
      }
      (*(code *)(*pppuVar7)[2])(pppuVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079eabe FUN_14079eabe body=85 status=ok
// SIG undefined FUN_14079eabe(void)

void FUN_14079eabe(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x62);
  *(byte *)(param_1 + 0x62) = bVar1 & 0xef;
  if ((bVar1 & 0x20) == 0) {
    if ((char)param_1[0x12f] == '\0') {
      (**(code **)(*param_1 + 0x350))(param_1,*(undefined4 *)((longlong)param_1 + 0x96c));
    }
  }
  else {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xbf;
  return;
}



// FUNCTION 14079eb14 FUN_14079eb14 body=282 status=ok
// SIG undefined FUN_14079eb14(void)

undefined8 * FUN_14079eb14(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143dc814b);
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



// FUNCTION 14079ec2e FUN_14079ec2e body=2651 status=ok
// SIG undefined FUN_14079ec2e(void)

void FUN_14079ec2e(longlong *param_1,float param_2)

{
  longlong lVar1;
  void *_Src;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  longlong lVar28;
  undefined1 auStack_3e8 [39];
  char local_3c1;
  undefined8 local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  undefined1 local_3a0 [4];
  undefined4 local_39c;
  undefined4 local_2fc;
  undefined1 local_2e8 [24];
  undefined4 local_2d0;
  longlong local_2a0;
  undefined1 local_298 [48];
  undefined1 *local_268;
  undefined4 local_260;
  code *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [184];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  code *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  uVar16 = 0;
  memset(local_3a0,0,0x100);
  local_2d0 = 0xffffffff;
  local_39c = 0x3f800000;
  local_2fc = 0xffffffff;
  plVar26 = param_1 + 0x107;
  if (0 < (longlong)(int)param_1[0x108]) {
    memcpy(local_3a0,(void *)(*plVar26 + (longlong)(int)param_1[0x108] * 0x100 + -0x100),0x100);
    uVar16 = FUN_14485cccc(local_2e8);
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar23 = param_1[4];
  }
  else {
    lVar23 = 0;
  }
  if (*(char *)(lVar23 + 0x178) == '\x03') {
    if ((*(byte *)(param_1[0xf] + 0x1db) & 1) != 0) {
      (**(code **)(*param_1 + 0x378))(param_1,param_2,local_3a0);
    }
    (**(code **)(*param_1 + 0x380))(param_1,param_2,local_3a0);
  }
  local_3c0 = uVar16;
  (**(code **)(*param_1 + 0x388))(param_1,param_2,param_1 + 0xe7);
  (**(code **)(*param_1 + 0x390))(param_1);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar23 = param_1[4];
  }
  else {
    lVar23 = 0;
  }
  local_3c1 = *(char *)(lVar23 + 0x178);
  (**(code **)(*param_1 + 0x400))(param_1);
  if (0 < (int)param_1[0xe0]) {
    FUN_1488e023a(param_1);
  }
  uVar15 = *(uint *)(param_1 + 0xde);
  uVar24 = (ulonglong)(int)uVar15;
  if (0 < (longlong)uVar24) {
    iVar27 = -uVar15;
    lVar23 = uVar24 << 5;
    uVar18 = (ulonglong)uVar15;
    do {
      iVar25 = (int)uVar18;
      lVar23 = lVar23 + -0x20;
      lVar28 = param_1[0xdd];
      if (*(float *)(lVar28 + lVar23) <= *(float *)((longlong)param_1 + 0x31c)) {
        if (uVar24 != uVar18) {
          iVar8 = iVar25 + iVar27;
          if (0 < iVar25 + iVar27) {
            iVar8 = 1;
          }
          memmove((void *)(lVar28 + lVar23),(void *)(lVar28 + (longlong)(iVar25 - iVar8) * 0x20),
                  (longlong)iVar8 << 5);
          iVar25 = (int)param_1[0xde];
        }
        uVar18 = (ulonglong)(iVar25 - 1U);
        *(uint *)(param_1 + 0xde) = iVar25 - 1U;
      }
      iVar27 = iVar27 + 1;
      bVar7 = 1 < uVar24;
      uVar24 = uVar24 - 1;
    } while (bVar7);
  }
  uVar15 = *(uint *)(param_1 + 0x12a);
  if (0 < (longlong)(int)uVar15) {
    fVar3 = *(float *)((longlong)param_1 + 0x31c);
    fVar4 = *(float *)(param_1 + 0x12);
    iVar27 = -uVar15;
    uVar24 = (longlong)(int)uVar15;
    do {
      plVar17 = (longlong *)param_1[0x129];
      if ((longlong *)param_1[0x129] == (longlong *)0x0) {
        plVar17 = param_1 + 0x109;
      }
      if (*(float *)((longlong)plVar17 + uVar24 * 8 + -4) <= fVar3 - fVar4) {
        if (uVar24 != uVar15) {
          iVar25 = uVar15 + iVar27;
          if (0 < iVar25) {
            iVar25 = 1;
          }
          memmove(plVar17 + (uVar24 - 1),plVar17 + (int)(uVar15 - iVar25),(longlong)iVar25 << 3);
          uVar15 = *(uint *)(param_1 + 0x12a);
        }
        uVar15 = uVar15 - 1;
        *(uint *)(param_1 + 0x12a) = uVar15;
      }
      iVar27 = iVar27 + 1;
      bVar7 = 1 < uVar24;
      uVar24 = uVar24 - 1;
    } while (bVar7);
  }
  if (0 < (longlong)(int)param_1[0x108]) {
    local_3b0 = param_1 + 0x51;
    lVar28 = (longlong)(int)param_1[0x108] * 0x100;
    local_3b8 = lVar28 + -0x100;
    lVar23 = 0;
    local_3a8 = plVar26;
    do {
      lVar6 = *plVar26;
      lVar1 = lVar6 + lVar23;
      plVar17 = (longlong *)FUN_14485cccc(lVar1 + 0xb8);
      if ((*(int *)(lVar1 + 0xdc) == 0) || (uVar15 = *(uint *)(lVar1 + 0xd8), (int)uVar15 < 0)) {
LAB_14079f3bd:
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if ((int)uVar15 < DAT_14c9647dc) {
          plVar21 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
          if (((plVar21 == (longlong *)0x0) || ((int)plVar21[2] != *(int *)(lVar1 + 0xdc))) ||
             ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_14079f3bd;
          lVar20 = *plVar21;
        }
      }
      if (lVar20 != 0 || plVar17 != (longlong *)0x0) {
        _Src = (void *)(lVar6 + lVar23);
        if ((local_3c1 == '\x03') && (plVar17 != (longlong *)0x0)) {
          uVar16 = FUN_14079fa16();
          lVar20 = (**(code **)(*plVar17 + 0x288))(plVar17,uVar16);
          if (lVar20 != 0) {
            uVar16 = FUN_14079fa16();
            lVar19 = FUN_144718840(lVar20,uVar16);
            if (lVar19 != 0 && lVar20 != lVar19) {
              FUN_1488e0440(param_1,lVar19,_Src);
            }
          }
        }
        if ((*(byte *)(lVar6 + 0xad + lVar23) & 1) == 0) {
          (**(code **)(*param_1 + 0x3d8))(param_1,_Src);
        }
        else {
          (**(code **)(*param_1 + 0x3d0))(param_1,_Src,local_3b8 == lVar23);
        }
        lVar20 = DAT_14cb24ad0;
        if (DAT_14cb24ad0 == 0) {
          plVar26 = (longlong *)FUN_145a7712c();
          lVar20 = plVar26[0x22];
          if (plVar26[0x22] == 0) {
            (**(code **)(*plVar26 + 1000))(plVar26);
            lVar20 = plVar26[0x22];
          }
        }
        DAT_14cb24ad0 = lVar20;
        uVar5 = *(undefined4 *)(DAT_14cb24ad0 + 0x48);
        uVar16 = *(undefined8 *)(DAT_14cb24ad0 + 0x4c);
        memcpy(local_218,_Src,0xb8);
        local_160 = *(undefined8 *)(lVar6 + 0xb8 + lVar23);
        puVar2 = (undefined8 *)(lVar6 + 0xc0 + lVar23);
        uStack_158 = *puVar2;
        local_150 = puVar2[1];
        local_148 = *(undefined4 *)(lVar6 + 0xd0 + lVar23);
        local_144 = *(undefined1 *)(lVar6 + 0xd4 + lVar23);
        local_120 = *(undefined8 *)(lVar1 + 0xf8);
        local_140 = *(undefined4 *)(lVar1 + 0xd8);
        uStack_13c = *(undefined4 *)(lVar1 + 0xdc);
        uStack_138 = *(undefined4 *)(lVar1 + 0xe0);
        uStack_134 = *(undefined4 *)(lVar1 + 0xe4);
        local_130 = *(undefined4 *)(lVar1 + 0xe8);
        uStack_12c = *(undefined4 *)(lVar1 + 0xec);
        uStack_128 = *(undefined4 *)(lVar1 + 0xf0);
        uStack_124 = *(undefined4 *)(lVar1 + 0xf4);
        local_108 = (code *)0x0;
        local_f8 = (longlong *)0x0;
        local_10c = 1;
        local_2a0 = param_1[0x50];
        local_268 = (undefined1 *)0x0;
        plVar26 = (longlong *)param_1[0x57];
        if ((longlong *)param_1[0x57] == (longlong *)0x0) {
          plVar26 = local_3b0;
        }
        local_118 = uVar16;
        local_110 = uVar5;
        FUN_1400709d4(local_298,plVar26,(int)param_1[0x58],0);
        local_258 = (code *)0x0;
        local_248 = (longlong *)0x0;
        plVar17 = (longlong *)FUN_14001cc68(0x50,8);
        *plVar17 = (longlong)&PTR_FUN_14b414b60;
        plVar17[1] = local_2a0;
        plVar17[8] = 0;
        puVar22 = local_268;
        if (local_268 == (undefined1 *)0x0) {
          puVar22 = local_298;
        }
        local_248 = plVar17;
        FUN_1400709d4(plVar17 + 2,puVar22,local_260,0);
        uVar13 = uStack_d0;
        uVar12 = local_d8;
        uVar11 = uStack_e0;
        lVar1 = local_e8;
        uVar10 = uStack_f0;
        plVar21 = local_f8;
        uVar16 = uStack_100;
        pcVar9 = local_108;
        plVar26 = local_3a8;
        if (plVar17 != (longlong *)&DAT_fffffffffffffff8) {
          local_258 = FUN_143dcc026;
        }
        local_98 = local_d8;
        uStack_90 = uStack_d0;
        local_a8 = local_e8;
        uStack_a0 = uStack_e0;
        local_b8 = local_f8;
        uStack_b0 = uStack_f0;
        local_c8 = (longlong)local_108;
        uStack_c0 = uStack_100;
        local_d8 = CONCAT44(uStack_224,local_228);
        uStack_d0 = CONCAT44(uStack_21c,uStack_220);
        local_e8 = CONCAT44(uStack_234,local_238);
        uStack_e0 = CONCAT44(uStack_22c,uStack_230);
        local_f8 = local_248;
        uStack_f0 = CONCAT44(uStack_23c,uStack_240);
        local_108 = local_258;
        uStack_100 = CONCAT44(uStack_24c,uStack_250);
        uStack_c0._0_4_ = (undefined4)uVar16;
        uStack_c0._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        uStack_b0._0_4_ = (undefined4)uVar10;
        uStack_b0._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_a8._0_4_ = (undefined4)lVar1;
        local_a8._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
        uStack_a0._0_4_ = (undefined4)uVar11;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_98._0_4_ = (undefined4)uVar12;
        local_98._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        uStack_90._0_4_ = (undefined4)uVar13;
        uStack_90._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        local_228 = (undefined4)local_98;
        uStack_224 = local_98._4_4_;
        uStack_220 = (undefined4)uStack_90;
        uStack_21c = uStack_90._4_4_;
        local_238 = (undefined4)local_a8;
        uStack_234 = local_a8._4_4_;
        uStack_230 = (undefined4)uStack_a0;
        uStack_22c = uStack_a0._4_4_;
        local_248 = plVar21;
        uStack_240 = (undefined4)uStack_b0;
        uStack_23c = uStack_b0._4_4_;
        local_258 = pcVar9;
        uStack_250 = (undefined4)uStack_c0;
        uStack_24c = uStack_c0._4_4_;
        uStack_c0 = uVar16;
        uStack_b0 = uVar10;
        local_a8 = lVar1;
        uStack_a0 = uVar11;
        local_98 = uVar12;
        uStack_90 = uVar13;
        if (pcVar9 != (code *)0x0) {
          if (plVar21 == (longlong *)0x0) {
            plVar21 = (longlong *)&local_238;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        if (local_268 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14079f6b4(local_218);
        if (local_108 != (code *)0x0) {
          plVar17 = local_f8;
          if (local_f8 == (longlong *)0x0) {
            plVar17 = &local_e8;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      lVar23 = lVar23 + 0x100;
    } while (lVar28 != lVar23);
  }
  if (local_3c1 != '\x03') goto LAB_14079f1b6;
  FUN_14079fafc(param_1,0);
  if (*(int *)((longlong)param_1 + 0x364) == 0) {
LAB_14079f295:
    *(undefined4 *)(param_1 + 0x6f) = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x6c);
    if (((((int)uVar15 < 0) || (DAT_14c9647dc <= (int)uVar15)) ||
        ((plVar26 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar26 == (longlong *)0x0 ||
         ((((int)plVar26[2] != *(int *)((longlong)param_1 + 0x364) ||
           ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) || (*plVar26 == 0)))))) ||
       (cVar14 = FUN_14069eaf4(param_1 + 0x6c,local_3c0), cVar14 == '\0')) goto LAB_14079f295;
    *(float *)(param_1 + 0x6f) = param_2 + *(float *)(param_1 + 0x6f);
  }
  lVar23 = (**(code **)(*param_1 + 0x180))();
  if (*(float *)(param_1 + 99) <= (float)*(double *)(lVar23 + 0x6d0)) {
    if (((1.0 < ABS((double)param_1[0x4a] - (double)param_1[0x77])) ||
        (1.0 < ABS((double)param_1[0x4b] - (double)param_1[0x78]))) ||
       (bVar7 = true, 1.0 < ABS((double)param_1[0x4c] - (double)param_1[0x79]))) {
      param_1[0x4c] = param_1[0x79];
      param_1[0x4a] = param_1[0x77];
      param_1[0x4b] = param_1[0x78];
      bVar7 = false;
    }
    if (((1.0 < ABS((double)param_1[0x4d] - (double)param_1[0x94])) ||
        (1.0 < ABS((double)param_1[0x4e] - (double)param_1[0x95]))) ||
       (1.0 < ABS((double)param_1[0x4f] - (double)param_1[0x96]))) {
      param_1[0x4f] = param_1[0x96];
      *(int *)(param_1 + 0x4d) = (int)param_1[0x94];
      *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)((longlong)param_1 + 0x4a4);
      *(int *)(param_1 + 0x4e) = (int)param_1[0x95];
      *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)((longlong)param_1 + 0x4ac);
LAB_14079f49a:
      *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        plVar26 = (longlong *)param_1[4];
      }
      else {
        plVar26 = (longlong *)0x0;
      }
      *(int *)((longlong)plVar26 + 0x3fc) = *(int *)((longlong)plVar26 + 0x3fc) + 1;
      (**(code **)(*plVar26 + 0x578))();
    }
    else if (!bVar7) goto LAB_14079f49a;
    lVar28 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar23 = param_1[0xf];
    *(float *)(param_1 + 99) = (float)*(double *)(lVar28 + 0x6d0) + *(float *)(lVar23 + 0x54);
  }
  else {
    lVar23 = param_1[0xf];
  }
  if ((*(char *)(lVar23 + 0x268) == '\x01') &&
     (*(float *)(param_1 + 0x68) <= *(float *)((longlong)param_1 + 0x31c))) {
    (**(code **)(*param_1 + 0x418))(param_1);
  }
  if (((((*(byte *)(param_1 + 0x62) & 0x40) == 0) &&
       ((**(code **)(*param_1 + 0x398))(param_1), (char)param_1[0x15] != '\0')) &&
      (param_1[0x19] != 0)) && ((*(byte *)(param_1[0x19] + 0x65) & 2) != 0)) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
LAB_14079f1b6:
  if ((local_80 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079f6b4 FUN_14079f6b4 body=155 status=ok
// SIG undefined FUN_14079f6b4(void)

void FUN_14079f6b4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      uVar3 = FUN_14079f750();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014079f742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4,param_1,*(code **)(*plVar4 + 0x18));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14079f750 FUN_14079f750 body=228 status=ok
// SIG undefined FUN_14079f750(void)

longlong FUN_14079f750(void)

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
  if (DAT_14cb24838 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f62c4e;
    local_40 = FUN_146442adf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"GbxDestructibleInterface",&DAT_14cb24838,FUN_146442ab8
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb24838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079f836 FUN_14079f836 body=111 status=ok
// SIG undefined FUN_14079f836(void)

void FUN_14079f836(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  if ((((0.0 < *(float *)(param_1 + 0x1b8)) && (*(int *)(param_2 + 0xdc) != 0)) &&
      (uVar1 = *(uint *)(param_2 + 0xd8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_2 + 0xdc))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_14485cccc(param_2 + 0xb8);
      return;
    }
  }
  return;
}



// FUNCTION 14079fa16 FUN_14079fa16 body=228 status=ok
// SIG undefined FUN_14079fa16(void)

longlong FUN_14079fa16(void)

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
  if (DAT_14cb6ac70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148769ec7;
    local_40 = FUN_14652901f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"LightBeamCollisionHandlerInterface",&DAT_14cb6ac70,
                  &DAT_148769ec6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ac70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079fafc FUN_14079fafc body=316 status=ok
// SIG undefined FUN_14079fafc(void)

void FUN_14079fafc(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = (ulonglong)*(int *)(param_1 + 0x720);
  if (0 < (longlong)uVar7) {
    iVar8 = -*(int *)(param_1 + 0x720);
    lVar6 = uVar7 * 0x120;
    do {
      lVar6 = lVar6 + -0x120;
      lVar1 = *(longlong *)(param_1 + 0x718);
      if ((param_2 != '\0') || (*(longlong *)(lVar1 + 0x110 + lVar6) != DAT_14c872be0)) {
        if ((*(char *)(lVar1 + 0x118 + lVar6) != '\0') &&
           ((*(longlong *)(lVar1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(lVar1 + 8 + lVar6), plVar2 != (longlong *)0x0)))) {
          (**(code **)(*plVar2 + 0x18))(plVar2,param_1,lVar1 + lVar6 + 0x10);
        }
        if ((param_2 == '\0') &&
           (uVar5 = *(uint *)(param_1 + 0x720), (longlong)uVar7 <= (longlong)(int)uVar5)) {
          if (uVar7 != uVar5) {
            iVar4 = iVar8 + uVar5;
            if (0 < (int)(iVar8 + uVar5)) {
              iVar4 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x718) + lVar6),
                    (void *)((ulonglong)(uVar5 - iVar4) * 0x120 + *(longlong *)(param_1 + 0x718)),
                    (longlong)iVar4 * 0x120);
            uVar5 = *(uint *)(param_1 + 0x720);
          }
          *(uint *)(param_1 + 0x720) = uVar5 - 1;
        }
      }
      iVar8 = iVar8 + 1;
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar3);
  }
  if ((param_2 != '\0') && (*(undefined4 *)(param_1 + 0x720) = 0, *(int *)(param_1 + 0x724) != 0)) {
    FUN_1488e4cb2((longlong *)(param_1 + 0x718));
    return;
  }
  return;
}



// FUNCTION 14079fc38 FUN_14079fc38 body=557 status=ok
// SIG undefined FUN_14079fc38(void)

void FUN_14079fc38(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  int iVar9;
  code **ppcVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_14485cccc(param_2 + 0xb8);
  cVar5 = (**(code **)(*param_1 + 1000))(param_1,lVar7);
  if (cVar5 != '\0') {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b414bf0;
    local_88[0] = FUN_143dcc176;
    ppcVar10 = local_88;
    if ((*(byte *)((longlong)param_1 + 0x311) & 1) == 0) {
      ppcVar10 = (code **)0x0;
    }
    local_60 = param_1;
    local_58 = param_2;
    (**(code **)(*param_1 + 0x3f0))(param_1,param_2,ppcVar10);
    if ((char)param_3 != '\0') {
      puVar1 = (uint *)(param_1 + 0x6c);
      cVar5 = FUN_14069eaf4(puVar1,lVar7);
      if (cVar5 == '\0') {
        *(undefined4 *)(param_1 + 0x6f) = 0;
      }
      if (lVar7 == 0) {
        *puVar1 = 0;
        iVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar7 + 0xc);
        *puVar1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar6 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar12 + 0x10);
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(lVar12 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)((longlong)param_1 + 0x364) = iVar6;
      *(undefined8 *)((longlong)param_1 + 0x37c) = *(undefined8 *)(param_2 + 0xf0);
    }
    uVar3 = *(undefined4 *)(lVar7 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x31c);
    iVar6 = (int)param_1[0x12a];
    *(uint *)(param_1 + 0x12a) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x954) < iVar6 + 1U) {
      FUN_1488e46ca(param_1 + 0x109,iVar6);
    }
    plVar11 = param_1 + 0x109;
    if ((longlong *)param_1[0x129] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0x129];
    }
    *(undefined4 *)(plVar11 + iVar6) = uVar3;
    *(undefined4 *)((longlong)plVar11 + (longlong)iVar6 * 8 + 4) = uVar4;
    if (local_88[0] != (code *)0x0) {
      pppuVar8 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar8 = &local_68;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  if (((char)param_3 != '\0') || ((*(byte *)(param_1[0xf] + 0x144) & 1) != 0)) {
    (**(code **)(*param_1 + 0x408))(param_1,param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079fe66 FUN_14079fe66 body=1699 status=ok
// SIG undefined FUN_14079fe66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079fe66(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  byte bVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar16 = *(longlong **)(param_1 + 0x80);
  if (plVar16 == (longlong *)0x0) goto LAB_1407a0133;
  if ((*(byte *)(param_1 + 0x311) & 0x18) == 8) {
    (**(code **)(*plVar16 + 0xa60))(plVar16,0);
    plVar16 = *(longlong **)(param_1 + 0x88);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0xa60))(plVar16,0);
    }
    iVar3 = *(int *)(param_1 + 0x710);
    if ((longlong)iVar3 != 0) {
      lVar15 = *(longlong *)(param_1 + 0x708);
      lVar18 = 0;
      do {
        plVar16 = *(longlong **)(lVar15 + 8 + lVar18);
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0xa60))(plVar16,0);
        }
        lVar18 = lVar18 + 0x18;
      } while ((longlong)iVar3 * 0x18 != lVar18);
    }
    *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) | 0x10;
  }
  local_d8 = *(undefined8 *)(param_1 + 0x450);
  local_e8 = *(undefined8 *)(param_1 + 0x440);
  uStack_e0 = *(undefined8 *)(param_1 + 0x448);
  local_f8 = *(undefined8 *)(param_1 + 0x528);
  local_108._0_4_ = *(undefined4 *)(param_1 + 0x518);
  local_108._4_4_ = *(undefined4 *)(param_1 + 0x51c);
  uStack_100 = *(undefined4 *)(param_1 + 0x520);
  uStack_fc = *(undefined4 *)(param_1 + 0x524);
  if ((((*(byte *)(param_1 + 0x310) & 4) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) &&
     (lVar15 = FUN_140ed3994(), lVar15 != 0)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x2e4) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x310) & 8) != 0) goto LAB_14079ff4a;
      puVar17 = &local_e8;
      lVar18 = param_1 + 0x440;
    }
    else {
      puVar17 = &local_108;
      lVar18 = param_1 + 0x518;
    }
    FUN_1407a2bd4(lVar15,puVar17,lVar18);
  }
LAB_14079ff4a:
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x470);
  auVar19 = divpd(auVar2,_DAT_1499387d0);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *(double *)(param_1 + 0x480);
  auVar20 = divpd(auVar20,_DAT_1499387d0);
  auVar19 = roundpd(auVar19,auVar19,3);
  auVar20 = roundpd(auVar20,auVar20,3);
  dVar11 = (auVar2._0_8_ - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar12 = (auVar2._8_8_ - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar9 = (*(double *)(param_1 + 0x480) - auVar20._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar10 = (0.0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar6 = sin(dVar11);
  dVar7 = sin(dVar12);
  dVar8 = sin(dVar9);
  sin(dVar10);
  dVar11 = cos(dVar11);
  dVar12 = cos(dVar12);
  dVar9 = cos(dVar9);
  cos(dVar10);
  dVar10 = dVar7 * dVar6 * dVar8 + dVar12 * dVar11 * dVar9;
  local_168 = dVar6 * dVar7 * dVar9 - dVar11 * dVar12 * dVar8;
  dStack_160 = -(dVar6 * dVar12 * dVar9) - dVar11 * dVar7 * dVar8;
  uStack_140 = (undefined4)uStack_e0;
  uStack_13c = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  local_158._8_4_ = SUB84(dVar10,0);
  local_158._0_8_ = -(dVar12 * dVar6 * dVar8) + dVar7 * dVar11 * dVar9;
  local_158._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_148 = (undefined4)local_e8;
  uStack_144 = local_e8._4_4_;
  local_138 = local_d8;
  uStack_130 = 0;
  local_128 = 0x3ff0000000000000;
  uStack_120 = 0x3ff0000000000000;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0;
  local_198 = local_198 & 0xffffffffffffff00;
  FUN_140613f88(uVar4,&local_168,0,0);
  uVar1 = param_1 + 0x530;
  local_198 = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0xac0))
            (*(longlong **)(param_1 + 0x80),&local_e8,&local_108,param_1 + 0x458);
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (lVar15 != 0) {
    FUN_144a7484c(param_1 + 0x578,&local_168);
    local_148 = *(undefined4 *)(param_1 + 0x548);
    uStack_144 = *(undefined4 *)(param_1 + 0x54c);
    uStack_140 = *(undefined4 *)(param_1 + 0x550);
    uStack_13c = *(undefined4 *)(param_1 + 0x554);
    local_138 = *(undefined8 *)(param_1 + 0x558);
    uStack_130 = 0;
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0x3ff0000000000000;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0;
    local_198 = local_198 & 0xffffffffffffff00;
    FUN_140613f88(lVar15,&local_168,0,0);
    local_198 = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0xac0))
              (*(longlong **)(param_1 + 0x88),param_1 + 0x548,param_1 + 0x518,param_1 + 0x560);
  }
  if ((longlong)*(int *)(param_1 + 0x710) != 0) {
    local_178 = param_1 + 0x470;
    lVar15 = *(longlong *)(param_1 + 0x708);
    local_170 = (longlong)*(int *)(param_1 + 0x710) * 0x18;
    local_180 = param_1 + 0x548;
    local_188 = param_1 + 0x578;
    local_190 = param_1 + 0x560;
    lVar18 = 0;
    do {
      lVar5 = *(longlong *)(lVar15 + 8 + lVar18);
      if (lVar5 != 0) {
        FUN_144a7484c(local_178,&local_168);
        uStack_140 = (undefined4)uStack_e0;
        uStack_13c = (undefined4)((ulonglong)uStack_e0 >> 0x20);
        local_148 = (undefined4)local_e8;
        uStack_144 = local_e8._4_4_;
        local_138 = local_d8;
        uStack_130 = 0;
        local_128 = 0x3ff0000000000000;
        uStack_120 = 0x3ff0000000000000;
        local_118 = 0x3ff0000000000000;
        uStack_110 = 0;
        local_198 = local_198 & 0xffffffffffffff00;
        FUN_140613f88(lVar5,&local_168,0,0);
        plVar16 = *(longlong **)(lVar15 + 8 + lVar18);
        local_198 = uVar1;
        (**(code **)(*plVar16 + 0xac0))(plVar16,&local_e8);
      }
      lVar5 = *(longlong *)(lVar15 + 0x10 + lVar18);
      if (lVar5 != 0) {
        FUN_144a7484c(local_188,&local_168);
        local_148 = *(undefined4 *)(param_1 + 0x548);
        uStack_144 = *(undefined4 *)(param_1 + 0x54c);
        uStack_140 = *(undefined4 *)(param_1 + 0x550);
        uStack_13c = *(undefined4 *)(param_1 + 0x554);
        local_138 = *(undefined8 *)(param_1 + 0x558);
        uStack_130 = 0;
        local_128 = 0x3ff0000000000000;
        uStack_120 = 0x3ff0000000000000;
        local_118 = 0x3ff0000000000000;
        uStack_110 = 0;
        local_198 = local_198 & 0xffffffffffffff00;
        FUN_140613f88(lVar5,&local_168,0,0);
        plVar16 = *(longlong **)(lVar15 + 0x10 + lVar18);
        local_198 = uVar1;
        (**(code **)(*plVar16 + 0xac0))(plVar16,local_180);
      }
      lVar18 = lVar18 + 0x18;
    } while (local_170 != lVar18);
  }
  if (((*(byte *)(param_1 + 0x2ea) & 1) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
    plVar16 = (longlong *)FUN_140f5ffbc(param_1);
    if (plVar16 == (longlong *)0x0) {
      bVar14 = 0;
    }
    else {
      cVar13 = (**(code **)(*plVar16 + 0x798))(plVar16);
      bVar14 = cVar13 << 2;
    }
    *(byte *)(param_1 + 0x310) = *(byte *)(param_1 + 0x310) & 0xfb | bVar14;
  }
LAB_1407a0133:
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a050a FUN_1407a050a body=728 status=ok
// SIG undefined FUN_1407a050a(void)

undefined8 FUN_1407a050a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
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
  code *local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(byte *)(param_1 + 0x311) & 0x20) == 0) || (param_2 == 0)) {
LAB_1407a0670:
    uVar6 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x62) & 4) == 0) {
      lVar2 = FUN_14069ec50();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (piVar3 = (int *)(lVar2 + 0x30),
         *(int **)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar2 + 0x38) * 8) != piVar3)) goto LAB_1407a0670;
    }
    else {
      if ((*(char *)(*(longlong *)(param_1 + 0x78) + 0x1d9) == '\x01') &&
         (plVar4 = *(longlong **)(param_1 + 0x188), plVar4 != (longlong *)0x0)) {
        if (DAT_14cb223d8 == 0) {
          local_60 = local_48;
          local_48[0] = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_147f29feb;
          local_70 = FUN_1464384fe;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb223d8);
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_60 = local_48;
            local_48[0] = FUN_1449e2820;
            local_50 = FUN_14081d0ea;
            local_58 = FUN_1427b09ee;
            local_68 = &LAB_147f29feb;
            local_70 = FUN_1464384fe;
            local_78 = L"Engine";
            local_80 = 0;
            local_88 = 0x10004001;
            local_90 = 8;
            local_98 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb223d8);
          if (((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) &&
             (lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar2 != 0)) {
            if (*(longlong **)(lVar2 + 0x18) == (longlong *)0x0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x180))();
            }
            FUN_140154c96(local_48,param_2);
            iVar1 = FUN_1448618b0(lVar2 + 0x20,local_48,uVar6);
            if (iVar1 == 0) goto LAB_1407a0670;
          }
        }
      }
      piVar3 = (int *)(param_1 + 0x848);
      if (*(int **)(param_1 + 0x948) != (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x948);
      }
      if ((longlong)*(int *)(param_1 + 0x950) != 0) {
        lVar2 = (longlong)*(int *)(param_1 + 0x950) << 3;
        do {
          if (*(int *)(param_2 + 0xc) == *piVar3) goto LAB_1407a0668;
          piVar3 = piVar3 + 2;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
        piVar3 = (int *)0x0;
LAB_1407a0668:
        uVar6 = CONCAT71((int7)((ulonglong)piVar3 >> 8),piVar3 == (int *)0x0);
        goto LAB_1407a0672;
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)piVar3 >> 8),1);
  }
LAB_1407a0672:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1407a07e4 FUN_1407a07e4 body=132 status=ok
// SIG undefined FUN_1407a07e4(void)

void FUN_1407a07e4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x310)) &
            0xffffffffffffff40;
    uVar2 = FUN_1447210f0(lVar1);
    FUN_14019ced9(uVar2,param_1 + 0x440,param_1 + 0x518,
                  CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 6) & 0xffffffff,lVar1,0x3f800000);
    *(float *)(param_1 + 0x340) =
         *(float *)(param_1 + 0x31c) + *(float *)(*(longlong *)(param_1 + 0x78) + 0x26c);
  }
  return;
}



// FUNCTION 1407a0868 FUN_1407a0868 body=1367 status=ok
// SIG undefined FUN_1407a0868(void)

void FUN_1407a0868(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  undefined1 local_310 [8];
  undefined1 *local_308;
  code **local_300;
  undefined1 local_2f4 [4];
  code *local_2f0;
  longlong *local_2e8 [3];
  undefined2 local_2d0;
  undefined1 local_2c8;
  byte local_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_188;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (((((*(ushort *)((longlong)param_1 + 0x2ea) & 10) == 2) &&
       (lVar9 = FUN_1407a0dc0(param_1[0xf] + 0x220), lVar9 != 0)) &&
      (lVar9 = param_1[0xf], *(longlong *)(lVar9 + 0x248) != 0)) &&
     ((int)param_1[0xda] < *(int *)(lVar9 + 0x200))) {
    fVar15 = *(float *)((longlong)param_1 + 0x334) + *(float *)(lVar9 + 600);
    if (fVar15 <= *(float *)(param_1 + 0x67)) {
      fVar15 = *(float *)(param_1 + 0x67);
    }
    if ((fVar15 <= *(float *)((longlong)param_1 + 0x31c)) && (lVar3 = param_1[0x25], lVar3 != 0)) {
      *(float *)(param_1 + 0x67) = *(float *)((longlong)param_1 + 0x31c) + *(float *)(lVar9 + 0x25c)
      ;
      uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1409e0c66(&local_2b8,uVar10);
      if (plStack_2b0 != (longlong *)0x0) {
        iVar8 = (int)plStack_2b0[1];
        do {
          if (iVar8 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar7 = (int)plStack_2b0[1];
          bVar14 = iVar8 == iVar7;
          if (bVar14) {
            *(int *)(plStack_2b0 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
          plVar12 = plStack_2b0;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)plStack_2b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_2b0 + 0x10))();
        }
        lVar9 = local_2b8;
        if (plVar12 != (longlong *)0x0) {
          if (local_2b8 != 0) {
            local_290 = 0;
            local_288 = 0;
            local_2b8 = 0;
            plStack_2b0 = (longlong *)0x0;
            local_2a8 = 0;
            local_284 = 0xffffffff00000080;
            local_27c = 0;
            local_270 = 0;
            local_268 = 0;
            local_240 = 0;
            local_238 = 0;
            local_260 = 0;
            uStack_258 = 0;
            local_234 = 0xffffffff00000080;
            local_22c = 0;
            local_220 = 0;
            local_218 = 0;
            local_210 = 0;
            local_208 = 0xffffffff00000000;
            local_1e0 = 0;
            local_1d8 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_1d4 = 0xffffffff00000080;
            local_1cc = 0;
            local_1c0 = 0;
            local_1b8 = 0;
            local_1b0 = 0;
            local_188 = 0;
            local_160 = 0;
            local_158 = 0x200000000;
            local_148 = 0;
            local_140 = 0;
            uStack_13c = 0x20;
            uStack_138 = 0xffffffff;
            uStack_134 = 0;
            local_128 = 0;
            local_120 = 0;
            local_f8 = 0;
            local_f0 = 0x200000000;
            local_e0 = 0;
            local_d8 = 0;
            uStack_d4 = 0x20;
            uStack_d0 = 0xffffffff;
            uStack_cc = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_90 = 0;
            local_88 = 0x200000000;
            local_78 = 0;
            local_70 = 0;
            uStack_6c = 0x20;
            uStack_68 = 0xffffffff;
            uStack_64 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            lVar11 = FUN_1407a0dc0(param_1[0xf] + 0x220);
            if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar11);
            }
            local_2b8 = lVar11;
            FUN_1488e090e(&local_2f0,lVar3);
            FUN_1412d0e98(local_310);
            local_308 = local_310;
            local_300 = &local_2f0;
            FUN_140ff1448(&plStack_2b0,local_2f4,&local_308,0);
            FUN_144a2da94(&local_2f0);
            FUN_1404d669e(param_1 + 0x25,local_2e8);
            local_2f0 = (code *)0x0;
            local_2d0 = 0x18;
            local_2c8 = 4;
            local_2c0 = (byte)~DAT_14c9a8994 >> 3 & 4;
            uVar10 = *(undefined8 *)(param_1[0xf] + 0x248);
            uVar6 = (uint)((ulonglong)uVar10 >> 0x10);
            uVar13 = (uint)uVar10 & 0xffff;
            FUN_1488e4742(&plStack_2b0,
                          ((uint)uVar10 << 0x10 | uVar13) + (int)((ulonglong)uVar10 >> 0x20) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4),param_1[0xf] + 0x248,
                          &local_2f0);
            FUN_144a2da94(&local_2f0);
            lVar3 = param_1[0xf];
            lVar11 = *(longlong *)(lVar3 + 0x250);
            if (lVar11 != 0) {
              local_2f0 = (code *)0x0;
              local_2d0 = 4;
              local_2e8[0] = (longlong *)CONCAT44(local_2e8[0]._4_4_,*(undefined4 *)(lVar3 + 0x260))
              ;
              local_2c8 = 3;
              local_2c0 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
              uVar6 = (uint)((ulonglong)lVar11 >> 0x10);
              uVar13 = (uint)lVar11 & 0xffff;
              FUN_1488e4742(&plStack_2b0,
                            ((uint)lVar11 << 0x10 | uVar13) + (int)((ulonglong)lVar11 >> 0x20) +
                            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4),lVar3 + 0x250,
                            &local_2f0);
              FUN_144a2da94(&local_2f0);
            }
            FUN_140ff15b2(&local_2b8);
            local_318 = 0;
            FUN_140a41f04(lVar9,&local_2f0,param_1[0x31],&local_2b8);
            plVar2 = local_2e8[0];
            if ((code **)(param_1 + 0xdb) != &local_2f0) {
              param_1[0xdb] = (longlong)local_2f0;
              local_2f0 = (code *)0x0;
              plVar4 = (longlong *)param_1[0xdc];
              if (local_2e8[0] != plVar4) {
                local_2e8[0] = (longlong *)0x0;
                param_1[0xdc] = (longlong)plVar2;
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar4 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
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
              }
            }
            plVar2 = local_2e8[0];
            if (local_2e8[0] != (longlong *)0x0) {
              LOCK();
              plVar4 = local_2e8[0] + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_2e8[0])(local_2e8[0]);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            pcVar5 = (code *)param_1[0xdb];
            if (pcVar5 != (code *)0x0) {
              local_2f0 = FUN_1488e0a4c;
              local_2e8[0] = (longlong *)((ulonglong)local_2e8[0] & 0xffffffff00000000);
              FUN_1488e094c(pcVar5 + 0x130,&local_308,param_1);
            }
            local_2b8 = 0;
            FUN_14076ba36(&plStack_2b0);
          }
          LOCK();
          plVar2 = plVar12 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a0dc0 FUN_1407a0dc0 body=630 status=ok
// SIG undefined FUN_1407a0dc0(void)

longlong FUN_1407a0dc0(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        if (lVar4 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          goto LAB_1407a0e32;
        }
        uVar3 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar3 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar3 = *(uint *)(lVar7 + 0x10);
          bVar8 = uVar3 == 0;
          if (bVar8) {
            *(uint *)(lVar7 + 0x10) = uVar6;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar8) {
            uVar3 = uVar6;
          }
        }
        param_1[1] = uVar3;
      }
      else {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_1407a0ec4;
    }
  }
  else {
LAB_1407a0ec4:
    if (DAT_14cb22ea0 == 0) {
      local_50 = &local_30;
      local_30 = &LAB_141741c86;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1458b5086;
      local_58 = &LAB_147f33011;
      local_60 = FUN_14180ec27;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x58;
      FUN_14081cfa3(L"/Script/GbxAI",L"GpsQueryAsset",&DAT_14cb22ea0,&DAT_147f33010);
    }
    if ((*(int *)(DAT_14cb22ea0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb22ea0 + 0x38) * 8) == DAT_14cb22ea0 + 0x30)) goto LAB_1407a0e34;
  }
LAB_1407a0e32:
  lVar4 = 0;
LAB_1407a0e34:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1407a1038 FUN_1407a1038 body=54 status=ok
// SIG undefined FUN_1407a1038(void)

void FUN_1407a1038(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 != '\0') {
    FUN_1407a106e(param_1 + -0x15e,param_2);
    return;
  }
  return;
}



// FUNCTION 1407a106e FUN_1407a106e body=854 status=ok
// SIG undefined FUN_1407a106e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x0001407a139d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1407a106e(longlong param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  uint local_188;
  int iStack_184;
  undefined1 local_178 [184];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  longlong local_68;
  undefined8 local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((param_1 != 0) &&
     (((lVar7 = *(longlong *)(param_1 + 0xb0), lVar7 != 0 ||
       (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) && (0 < (longlong)DAT_14cb24a48)))) {
    lVar6 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(DAT_14cb24a40 + lVar6) == lVar7) {
        lVar4 = *(longlong *)(DAT_14cb24a40 + 8 + lVar6);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)DAT_14cb24a48 * 0x10 != lVar6);
    if (lVar4 != 0) {
      iStack_184 = 0;
      local_188 = *(uint *)(param_1 + 0xc);
      if ((int)local_188 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((local_188 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_188 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar2 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar2 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar2 = iVar5;
        }
      }
      iStack_184 = iVar2;
      memcpy(local_178,param_2,0xb8);
      local_c0 = *(undefined8 *)((longlong)param_2 + 0xb8);
      local_b8 = *(undefined8 *)((longlong)param_2 + 0xc0);
      uStack_b0 = *(undefined8 *)((longlong)param_2 + 200);
      local_a8 = *(undefined4 *)((longlong)param_2 + 0xd0);
      local_a4 = *(undefined1 *)((longlong)param_2 + 0xd4);
      local_80 = *(undefined8 *)((longlong)param_2 + 0xf8);
      local_a0 = *(undefined4 *)((longlong)param_2 + 0xd8);
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xdc);
      uStack_98 = *(undefined4 *)((longlong)param_2 + 0xe0);
      uStack_94 = *(undefined4 *)((longlong)param_2 + 0xe4);
      local_90 = *(undefined4 *)((longlong)param_2 + 0xe8);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xec);
      uStack_88 = *(undefined4 *)((longlong)param_2 + 0xf0);
      uStack_84 = *(undefined4 *)((longlong)param_2 + 0xf4);
      uStack_70 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x105) >> 0x18);
      uStack_78 = (undefined5)*(undefined8 *)((longlong)param_2 + 0x100);
      local_73 = (undefined3)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x100) >> 0x28);
      local_68 = *(longlong *)((longlong)param_2 + 0x110);
      local_58[0] = 0;
      if (local_68 != 0) {
        puVar3 = (undefined8 *)((longlong)param_2 + 0x130);
        if (*(undefined8 **)((longlong)param_2 + 0x120) != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)((longlong)param_2 + 0x120);
        }
        (**(code **)*puVar3)(puVar3,local_58);
      }
      puVar3 = (undefined8 *)FUN_14001cc68(0x170,0x10);
      *puVar3 = 0;
      puVar3[2] = CONCAT44(iStack_184,local_188);
      memcpy(puVar3 + 4,local_178,0xb8);
      puVar3[0x1b] = local_c0;
      puVar3[0x1c] = local_b8;
      puVar3[0x1d] = uStack_b0;
      *(undefined4 *)(puVar3 + 0x1e) = local_a8;
      *(undefined1 *)((longlong)puVar3 + 0xf4) = local_a4;
      puVar3[0x23] = local_80;
      puVar3[0x21] = CONCAT44(uStack_8c,local_90);
      puVar3[0x22] = CONCAT44(uStack_84,uStack_88);
      puVar3[0x1f] = CONCAT44(uStack_9c,local_a0);
      puVar3[0x20] = CONCAT44(uStack_94,uStack_98);
      *(ulonglong *)((longlong)puVar3 + 0x125) = CONCAT53(uStack_70,local_73);
      puVar3[0x24] = CONCAT35(local_73,uStack_78);
      puVar3[0x26] = local_68;
      puVar3[0x28] = local_58[0];
      local_58[0] = 0;
      *(undefined4 *)(puVar3 + 0x2c) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x164) = uStack_34;
      *(undefined4 *)(puVar3 + 0x2d) = uStack_30;
      *(undefined4 *)((longlong)puVar3 + 0x16c) = uStack_2c;
      *(undefined4 *)(puVar3 + 0x2a) = local_48;
      *(undefined4 *)((longlong)puVar3 + 0x154) = uStack_44;
      *(undefined4 *)(puVar3 + 0x2b) = uStack_40;
      *(undefined4 *)((longlong)puVar3 + 0x15c) = uStack_3c;
      if (local_68 != 0) {
        local_68 = 0;
      }
      if (puVar3 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(lVar4 + 0x40);
        *(undefined8 **)(lVar4 + 0x40) = puVar3;
        *puVar1 = puVar3;
        if (local_68 != 0) {
          (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a13c6 FUN_1407a13c6 body=2475 status=ok
// SIG undefined FUN_1407a13c6(void)

void FUN_1407a13c6(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  byte bVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(ushort *)((longlong)param_1 + 0x2ea);
  plVar3 = (longlong *)param_1[0x25];
  if ((uVar1 & 2) == 0) {
    if ((plVar3 == (longlong *)0x0) && (*(char *)(param_1[0xf] + 0x1da) == '\x01'))
    goto LAB_1407a1a9e;
  }
  else {
    if (plVar3 == (longlong *)0x0) goto LAB_1407a1a9e;
    if (plVar3 != (longlong *)param_1[0x19]) {
      uVar8 = FUN_14069ce7c();
      plVar9 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar8);
      if (plVar9 != (longlong *)0x0) {
        FUN_14069ce7c();
        plVar10 = (longlong *)FUN_144718840(plVar9);
        if ((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) {
          pcVar4 = *(code **)(*plVar10 + 0x10);
          if (pcVar4 == (code *)&LAB_144a13144) {
            puVar13 = (uint *)(plVar10 + 0x25d);
          }
          else if (pcVar4 == (code *)&LAB_144a1313c) {
            puVar13 = (uint *)(plVar10 + 0x13);
          }
          else {
            puVar13 = (uint *)(*pcVar4)(plVar10);
          }
          if ((puVar13 != (uint *)0x0) &&
             (((*(char *)((longlong)puVar13 + 0x18a) != '\0' ||
               (*(char *)((longlong)puVar13 + 0x189) == '\x01')) &&
              (plVar9 = (longlong *)param_1[0x31], plVar9 != (longlong *)0x0)))) {
            if (puVar13[1] == 0) {
LAB_1407a1813:
              plVar10 = (longlong *)0x0;
            }
            else {
              uVar2 = *puVar13;
              plVar10 = (longlong *)0x0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar14 = (undefined8 *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar14 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar14 + 2) != puVar13[1] ||
                    ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_1407a1813;
                plVar10 = (longlong *)*puVar14;
              }
            }
            if (plVar10 != plVar9) {
              if (DAT_14caf64b8 == 0) {
                local_90 = &local_78;
                local_78 = FUN_141030f22;
                local_80 = FUN_14081d0ea;
                local_88 = FUN_142b4754c;
                local_98 = &LAB_147c45ce0;
                local_a0 = (code *)&LAB_1463f1ff4;
                local_a8 = L"Game";
                local_b0 = 0x4000000000;
                local_b8 = 0x10000004;
                local_c0 = 8;
                local_c8 = 0x428;
                FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
                plVar9 = (longlong *)param_1[0x31];
                if (plVar9 != (longlong *)0x0) goto LAB_1407a152c;
LAB_1407a160c:
                bVar15 = false;
              }
              else {
LAB_1407a152c:
                bVar15 = false;
                if ((DAT_14caf64b8 != 0) && (lVar12 = plVar9[2], bVar15 = false, lVar12 != 0)) {
                  if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
                      == DAT_14caf64b8 + 0x30)) {
                    pcVar4 = *(code **)(*plVar9 + 0x5e8);
                    if (pcVar4 == FUN_140972dde) {
                      lVar12 = plVar9[0x76];
                      if (lVar12 != 0) goto LAB_1407a17f8;
                      pcVar4 = *(code **)(*plVar9 + 0x5f8);
                      if (pcVar4 == FUN_144784df4) {
                        if (*(code **)(plVar9[0x784] + 0x18) == (code *)&LAB_144904684) {
                          if (*(int *)((longlong)plVar9 + 0x75b4) != 0) {
                            uVar2 = *(uint *)(plVar9 + 0xeb6);
                            bVar15 = false;
                            if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2))
                            goto LAB_1407a160e;
                            plVar10 = (longlong *)
                                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8))
                            ;
                            if ((plVar10 != (longlong *)0x0) &&
                               (((int)plVar10[2] == *(int *)((longlong)plVar9 + 0x75b4) &&
                                ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
                              if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                                lVar12 = *plVar10;
                              }
                              else {
                                lVar12 = 0;
                              }
                              lVar12 = lVar12 + 0x110;
                              goto LAB_1407a17d2;
                            }
                          }
                        }
                        else {
                          lVar12 = (**(code **)(plVar9[0x784] + 0x18))(plVar9 + 0x784);
LAB_1407a17d2:
                          if (lVar12 != 0) {
                            lVar12 = *(longlong *)(lVar12 + 0x20);
                            goto LAB_1407a17df;
                          }
                        }
                      }
                      else {
                        lVar12 = (*pcVar4)();
LAB_1407a17df:
                        if (lVar12 != 0) {
                          lVar12 = *(longlong *)(lVar12 + 0x3b0);
                          goto LAB_1407a17ef;
                        }
                      }
                    }
                    else {
                      lVar12 = (*pcVar4)();
LAB_1407a17ef:
                      if (lVar12 != 0) {
LAB_1407a17f8:
                        bVar15 = (*(byte *)(lVar12 + 0x39a) & 8) == 0;
                        goto LAB_1407a160e;
                      }
                    }
                  }
                  goto LAB_1407a160c;
                }
              }
LAB_1407a160e:
              if ((char)puVar13[6] == '\x01') {
                if (((char)puVar13[0x10] != '\0') || (!bVar15)) goto LAB_1407a183e;
              }
              else {
                if (bVar15) {
                  bVar5 = (byte)puVar13[0x10] & 1;
                }
                else {
                  bVar5 = (byte)puVar13[0x20];
                }
                if (bVar5 != 0) {
LAB_1407a183e:
                  FUN_145744964(param_1);
                }
              }
            }
          }
        }
      }
      if (DAT_14cb56270 == 0) {
        local_90 = &local_78;
        local_78 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_1427b09ee;
        local_98 = &LAB_148630fef;
        local_a0 = FUN_1464b6a91;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = 8;
        local_c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar9 = (longlong *)FUN_144718840(plVar3,DAT_14cb56270);
      if (((*(byte *)((longlong)plVar3 + 0x65) & 2) != 0) ||
         ((plVar9 != (longlong *)0x0 &&
          (cVar7 = (**(code **)(*plVar9 + 0x40))(plVar9), cVar7 != '\0')))) {
        FUN_145744964(param_1);
      }
    }
    if (param_1[0x25] == 0) goto LAB_1407a1a9e;
  }
  if (param_1[0xd7] != 0) {
    if ((char)*(ushort *)((longlong)param_1 + 0x2ea) < '\0') {
      if ((*(byte *)(param_1[0xd7] + 0x63d) & 1) == 0) goto LAB_1407a1a9e;
    }
    else if (((*(ushort *)((longlong)param_1 + 0x2ea) & 2) == 0) ||
            ((fVar17 = *(float *)(param_1[0xf] + 0x264), 0.0 < fVar17 &&
             (fVar17 * fVar17 <=
              (float)(((double)param_1[0x93] - (double)param_1[0x79]) *
                      ((double)param_1[0x93] - (double)param_1[0x79]) +
                     ((double)param_1[0x91] - (double)param_1[0x77]) *
                     ((double)param_1[0x91] - (double)param_1[0x77]) +
                     ((double)param_1[0x92] - (double)param_1[0x78]) *
                     ((double)param_1[0x92] - (double)param_1[0x78])))))) goto LAB_1407a1a9e;
  }
  if ((uVar1 & 2) == 0) goto LAB_1407a16cc;
  if ((((*(byte *)(param_1 + 0x62) & 1) != 0) && (*(char *)(param_1[0xf] + 0x1da) != '\x01')) &&
     ((*(byte *)(param_1[0xf] + 0x1db) & 8) != 0)) {
    uVar8 = FUN_14479d2ce(param_1 + 0xcd);
    uVar11 = FUN_14485cccc(param_1 + 0xc9);
    cVar7 = (**(code **)(*param_1 + 0x338))(param_1,uVar11,uVar8);
    if (cVar7 == '\0') {
      if (*(char *)(param_1[0xf] + 0x1da) != '\x02') goto LAB_1407a1a9e;
      FUN_145744964(param_1);
    }
  }
  if (((*(byte *)(param_1[0xf] + 0x1db) & 0x10) != 0) &&
     (fVar17 = *(float *)(param_1[0xf] + 0x158),
     fVar17 * fVar17 <
     (float)(((double)param_1[0x93] - (double)param_1[0x79]) *
             ((double)param_1[0x93] - (double)param_1[0x79]) +
            ((double)param_1[0x91] - (double)param_1[0x77]) *
            ((double)param_1[0x91] - (double)param_1[0x77]) +
            ((double)param_1[0x92] - (double)param_1[0x78]) *
            ((double)param_1[0x92] - (double)param_1[0x78])))) {
LAB_1407a1a9e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  if (0.0 < *(float *)((longlong)param_1 + 0x9c)) {
    dVar22 = (double)param_1[0x7a];
    uStack_70 = (double)param_1[0x7b];
    local_68 = (double)param_1[0x7c];
    dVar21 = local_68 * local_68 + dVar22 * dVar22 + uStack_70 * uStack_70;
    if ((dVar21 != 1.0) || (NAN(dVar21))) {
      if (dVar21 < 9.99999993922529e-09) {
        local_68 = DAT_14c8464f0;
        uVar16 = (undefined4)DAT_14c8464e0;
        uVar18 = DAT_14c8464e0._4_4_;
        uVar19 = (undefined4)DAT_14c8464e8;
        uVar20 = DAT_14c8464e8._4_4_;
        goto LAB_1407a1b4e;
      }
      dVar21 = 1.0 / SQRT(dVar21);
      local_68 = local_68 * dVar21;
      uStack_70 = uStack_70 * dVar21;
      local_78 = (code *)(dVar22 * dVar21);
    }
    else {
      local_68 = (double)param_1[0x7c];
      uVar16 = (int)param_1[0x7a];
      uVar18 = *(undefined4 *)((longlong)param_1 + 0x3d4);
      uVar19 = (int)param_1[0x7b];
      uVar20 = *(undefined4 *)((longlong)param_1 + 0x3dc);
LAB_1407a1b4e:
      local_78 = (code *)CONCAT44(uVar18,uVar16);
      uStack_70 = (double)CONCAT44(uVar20,uVar19);
    }
    fVar17 = (float)FUN_1409661f0(param_1 + 0x91,&local_78,param_1 + 0x77);
    if (fVar17 < *(float *)((longlong)param_1 + 0x9c)) goto LAB_1407a16bb;
  }
  else {
LAB_1407a16bb:
    if (*(float *)(param_1 + 0x14) <= 0.0) goto LAB_1407a16cc;
    dVar22 = (double)param_1[0x7a];
    dVar21 = (double)param_1[0x7b];
    dVar23 = (double)param_1[0x7c];
    dVar24 = dVar23 * dVar23 + dVar22 * dVar22 + dVar21 * dVar21;
    if ((dVar24 != 1.0) || (NAN(dVar24))) {
      if (9.99999993922529e-09 <= dVar24) {
        dVar24 = 1.0 / SQRT(dVar24);
        dVar23 = dVar23 * dVar24;
        dVar21 = dVar21 * dVar24;
        dVar22 = dVar22 * dVar24;
      }
      else {
        dVar22 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar21 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar23 = DAT_14c8464f0;
      }
    }
    dVar24 = (double)param_1[0x93] - (double)param_1[0x79];
    dVar25 = (double)param_1[0x92] - (double)param_1[0x78];
    dVar26 = (double)param_1[0x91] - (double)param_1[0x77];
    dVar6 = dVar24 * dVar24 + dVar26 * dVar26 + dVar25 * dVar25;
    if ((dVar6 != 1.0) || (NAN(dVar6))) {
      if (9.99999993922529e-09 <= dVar6) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar24 = dVar24 * dVar6;
        dVar25 = dVar25 * dVar6;
        dVar26 = dVar26 * dVar6;
      }
      else {
        dVar26 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar25 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar24 = DAT_14c8464f0;
      }
    }
    fVar17 = cosf(*(float *)(param_1 + 0x14) * 0.017453292);
    if (fVar17 < (float)(dVar21 * dVar25 + dVar22 * dVar26 + dVar23 * dVar24)) goto LAB_1407a16cc;
  }
  (**(code **)(*param_1 + 0x2e0))(param_1);
LAB_1407a16cc:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a1da6 FUN_1407a1da6 body=461 status=ok
// SIG undefined FUN_1407a1da6(void)

void FUN_1407a1da6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80 [9];
  undefined1 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14485cccc(param_3 + 0xb8);
  if ((lVar3 == 0) || (*(char *)(param_1[0xf] + 0x1da) == '\0')) goto LAB_1407a1e04;
  if ((*(char *)(param_1[0xf] + 0x1da) == '\x02') &&
     ((*(ushort *)((longlong)param_1 + 0x2ea) & 2) == 0)) {
    plVar1 = param_1 + 0x6c;
    lVar4 = FUN_14479d2ce(plVar1);
    if (lVar4 == 0) goto LAB_1407a1dfb;
    lVar4 = FUN_14479d2ce(plVar1);
    if (((lVar3 != lVar4) || (*(float *)(param_1 + 0x13) <= 0.0)) ||
       (*(float *)(param_1 + 0x6f) < *(float *)(param_1 + 0x13))) goto LAB_1407a1dfb;
    uVar5 = FUN_14479d2ce(plVar1);
    cVar2 = FUN_1488e07d6(param_1,uVar5);
    if (cVar2 == '\0') goto LAB_1407a1dfb;
    local_80[7] = 0;
    local_80[8] = 0;
    local_80[5] = 0;
    local_80[6] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_38 = 0;
    local_34 = 0;
    uStack_2c = 0;
    local_80[0] = FUN_14479d2ce(plVar1);
    if ((local_80[0] != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_80[0]);
    }
    local_80[2] = *(undefined8 *)((longlong)param_1 + 0x37c);
    lVar3 = *param_1;
  }
  else {
LAB_1407a1dfb:
    if (lVar3 == param_1[0x25]) goto LAB_1407a1e04;
    if ((*(float *)(param_1 + 0x13) != 0.0) || (NAN(*(float *)(param_1 + 0x13))))
    goto LAB_1407a1e04;
    cVar2 = FUN_1488e07d6(param_1,lVar3);
    if (cVar2 == '\0') goto LAB_1407a1e04;
    local_80[7] = 0;
    local_80[8] = 0;
    local_80[5] = 0;
    local_80[6] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_38 = 0;
    local_34 = 0;
    uStack_2c = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    local_80[0] = lVar3;
    FUN_143dc0862(param_1);
    lVar3 = *param_1;
  }
  (**(code **)(lVar3 + 0x2b8))(param_1,local_80);
LAB_1407a1e04:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a1f74 FUN_1407a1f74 body=2564 status=ok
// SIG undefined FUN_1407a1f74(void)

void FUN_1407a1f74(longlong param_1,void *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double _X;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  bool bVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_488 [32];
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 *local_458;
  undefined8 local_448;
  longlong *plStack_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined1 local_42b;
  void *local_428;
  undefined8 uStack_420;
  longlong local_418;
  longlong *local_410;
  undefined8 local_408 [2];
  undefined8 local_3f8;
  undefined8 local_3c8 [2];
  undefined8 local_3b8;
  undefined1 local_388 [56];
  longlong local_350;
  undefined8 local_348;
  undefined1 local_340 [48];
  undefined1 *local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong local_300;
  undefined8 local_2f8;
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [256];
  longlong local_1e0;
  int local_1d8;
  undefined8 local_1d0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined1 local_f8 [64];
  undefined1 local_b8 [72];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_488;
  if (*(float *)(param_1 + 0x1b8) <= 0.0) goto LAB_1407a2574;
  lVar11 = (longlong)param_2 + 0xb8;
  lVar8 = FUN_14485cccc(lVar11);
  if (lVar8 == 0) goto LAB_1407a2574;
  fVar23 = *(float *)(param_1 + 900);
  lVar9 = FUN_14082ce84(*(longlong *)(param_1 + 0x78) + 0x178);
  if (((lVar9 != 0) && (*(char *)(param_1 + 0x310) < '\0')) && (*(longlong *)(lVar9 + 0x348) == 0))
  {
    uVar10 = FUN_14485cccc(lVar11);
    fVar23 = (float)FUN_14074d5ce(lVar9,uVar10,0);
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    fVar18 = (float)FUN_1449e6cbc(*(longlong *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x31c));
    fVar23 = fVar23 * (fVar18 * *(float *)(param_1 + 0x240) + 1.0);
  }
  FUN_14082cf0e(local_388,lVar8,*(undefined8 *)(param_1 + 400),0);
  if ((*(longlong *)(param_1 + 0x188) == 0) ||
     (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x1b0), lVar12 == 0)) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar12 + 0x3c0);
    if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
      FUN_1456cec3c(lVar12);
    }
    if ((lVar12 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar12);
    }
  }
  local_348 = *(undefined8 *)(param_1 + 0x280);
  local_350 = lVar12;
  if (local_340 != (undefined1 *)(param_1 + 0x288)) {
    puVar14 = (undefined1 *)(param_1 + 0x288);
    if (*(undefined1 **)(param_1 + 0x2b8) != (undefined1 *)0x0) {
      puVar14 = *(undefined1 **)(param_1 + 0x2b8);
    }
    FUN_1400709d4(local_340,puVar14,*(undefined4 *)(param_1 + 0x2c0),local_304);
  }
  memcpy(local_2e0,param_2,0x100);
  local_190 = *(undefined8 *)((longlong)param_2 + 0x38);
  local_1a0 = *(undefined8 *)((longlong)param_2 + 0x28);
  uStack_198 = *(undefined8 *)((longlong)param_2 + 0x30);
  local_178 = *(double *)((longlong)param_2 + 0x98) - *(double *)((longlong)param_2 + 0x80);
  uStack_180 = *(double *)((longlong)param_2 + 0x90) - *(double *)((longlong)param_2 + 0x78);
  local_188 = *(double *)((longlong)param_2 + 0x88) - *(double *)((longlong)param_2 + 0x70);
  dVar22 = local_178 * local_178 + local_188 * local_188 + uStack_180 * uStack_180;
  if ((dVar22 != 1.0) || (NAN(dVar22))) {
    if (dVar22 < 9.999999747378752e-05) {
      local_188 = -*(double *)((longlong)param_2 + 0x58);
      uStack_180 = -*(double *)((longlong)param_2 + 0x60);
      local_178 = -*(double *)((longlong)param_2 + 0x68);
    }
    else {
      dVar22 = 1.0 / SQRT(dVar22);
      local_178 = local_178 * dVar22;
      uStack_180 = uStack_180 * dVar22;
      local_188 = local_188 * dVar22;
    }
  }
  local_170 = (double)*(float *)(param_1 + 0x244);
  local_160 = local_178 * local_170;
  dStack_168 = uStack_180 * local_170;
  local_170 = local_188 * local_170;
  if (local_1e0 == *(longlong *)(param_1 + 0x218)) {
    iVar13 = *(int *)(param_1 + 0x220);
    if (local_1d8 != iVar13) goto LAB_1407a2616;
  }
  else {
    iVar13 = *(int *)(param_1 + 0x220);
LAB_1407a2616:
    local_1d0 = 0;
    local_1e0 = *(longlong *)(param_1 + 0x218);
    local_1d8 = iVar13;
  }
  local_148 = local_160;
  local_158 = local_170;
  uStack_150 = dStack_168;
  if (param_3 != 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar12 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar12 = 0;
    }
    if (*(char *)(lVar12 + 0x178) == '\x03') {
      FUN_1403e12d4(local_f8,param_3);
    }
  }
  if (lVar9 == 0) {
    FUN_1407a3302(local_388,*(longlong *)(param_1 + 0x78) + 400);
    if (0 < *(int *)(param_1 + 0x960)) {
      FUN_1408da3b0(local_b8,param_1 + 0x958);
    }
    (**(code **)(local_300 + 0x20))(&local_300,0);
    local_2f8 = *(undefined8 *)(param_1 + 0x2d0);
    FUN_1406022fe(local_2f0,param_1 + 0x2d8);
    if ((*(byte *)(param_1 + 0x310) & 2) == 0) {
      local_468 = local_408;
      local_408[0] = 0;
      local_3f8 = 0;
      FUN_14082d216(local_388,fVar23,0,1);
    }
    else {
      local_42c = 0;
      local_428 = (void *)0x0;
      local_448 = *(longlong *)((longlong)param_2 + 0x28);
      plStack_440 = *(longlong **)((longlong)param_2 + 0x30);
      local_438 = *(undefined8 *)((longlong)param_2 + 0x38);
      local_430 = *(undefined4 *)(param_1 + 0x230);
      local_42b = 3;
      uStack_420 = 1;
      FUN_144a3a3ee(&local_428,0);
      pvVar7 = local_428;
      memcpy(local_428,param_2,0xb8);
      *(undefined8 *)((longlong)pvVar7 + 0xb8) = 0;
      *(undefined8 *)((longlong)pvVar7 + 0xc0) = 0;
      *(undefined8 *)((longlong)pvVar7 + 200) = 0;
      *(undefined4 *)((longlong)pvVar7 + 0xd0) = 0xffffffff;
      *(undefined1 *)((longlong)pvVar7 + 0xd4) = 0;
      *(undefined8 *)((longlong)pvVar7 + 0xb8) = *(undefined8 *)((longlong)param_2 + 0xb8);
      uVar10 = *(undefined8 *)((longlong)param_2 + 200);
      *(undefined8 *)((longlong)pvVar7 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
      *(undefined8 *)((longlong)pvVar7 + 200) = uVar10;
      *(undefined4 *)((longlong)pvVar7 + 0xd0) = *(undefined4 *)((longlong)param_2 + 0xd0);
      *(undefined1 *)((longlong)pvVar7 + 0xd4) = *(undefined1 *)((longlong)param_2 + 0xd4);
      *(undefined8 *)((longlong)pvVar7 + 0xf8) = *(undefined8 *)((longlong)param_2 + 0xf8);
      uVar17 = *(undefined4 *)((longlong)param_2 + 0xd8);
      uVar19 = *(undefined4 *)((longlong)param_2 + 0xdc);
      uVar20 = *(undefined4 *)((longlong)param_2 + 0xe0);
      uVar21 = *(undefined4 *)((longlong)param_2 + 0xe4);
      uVar10 = *(undefined8 *)((longlong)param_2 + 0xf0);
      *(undefined8 *)((longlong)pvVar7 + 0xe8) = *(undefined8 *)((longlong)param_2 + 0xe8);
      *(undefined8 *)((longlong)pvVar7 + 0xf0) = uVar10;
      *(undefined4 *)((longlong)pvVar7 + 0xd8) = uVar17;
      *(undefined4 *)((longlong)pvVar7 + 0xdc) = uVar19;
      *(undefined4 *)((longlong)pvVar7 + 0xe0) = uVar20;
      *(undefined4 *)((longlong)pvVar7 + 0xe4) = uVar21;
      local_458 = local_3c8;
      local_3c8[0] = 0;
      local_3b8 = 0;
      local_468 = (undefined8 *)0x0;
      local_460 = 1;
      FUN_1405fd98c(local_388,fVar23,&local_448,1);
      if (local_428 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_1405fab15(&local_448);
    lVar12 = local_448;
    *(float *)(local_448 + 8) = fVar23;
    *(undefined1 *)(local_448 + 0xc) = 1;
    *(undefined8 *)(local_448 + 0x10) = local_348;
    if ((undefined1 *)(local_448 + 0x18) != local_340) {
      puVar14 = local_340;
      if (local_310 != (undefined1 *)0x0) {
        puVar14 = local_310;
      }
      FUN_1400709d4((undefined1 *)(local_448 + 0x18),puVar14,local_308,
                    *(undefined4 *)(local_448 + 0x54));
    }
    if (0.0 < *(float *)(param_1 + 0x230)) {
      *(float *)(lVar12 + 0x78) = *(float *)(param_1 + 0x230);
      *(undefined1 *)(lVar12 + 0x7c) = 1;
    }
    else if (*(char *)(lVar12 + 0x7c) == '\x01') {
      *(undefined1 *)(lVar12 + 0x7c) = 0;
    }
    if (&local_1a0 != (undefined8 *)(lVar12 + 0x1e0)) {
      *(undefined8 *)(lVar12 + 0x1f0) = local_190;
      *(undefined8 *)(lVar12 + 0x1e0) = local_1a0;
      *(undefined8 *)(lVar12 + 0x1e8) = uStack_198;
      *(undefined1 *)(lVar12 + 0x1f8) = 1;
    }
    uVar20 = SUB84(local_188,0);
    uVar21 = (undefined4)((ulonglong)local_188 >> 0x20);
    uVar17 = SUB84(uStack_180,0);
    uVar19 = (undefined4)((ulonglong)uStack_180 >> 0x20);
    dVar22 = 0.0;
    if ((((local_188 != 0.0) || (NAN(local_188))) || (uStack_180 != 0.0)) || (NAN(uStack_180))) {
      dVar22 = atan2(uStack_180,local_188);
      dVar22 = dVar22 * 57.29577951308232;
      uVar20 = SUB84(local_188,0);
      uVar21 = (undefined4)((ulonglong)local_188 >> 0x20);
      uVar17 = SUB84(uStack_180,0);
      uVar19 = (undefined4)((ulonglong)uStack_180 >> 0x20);
    }
    _X = SQRT((double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20) +
              (double)CONCAT44(uVar19,uVar17) * (double)CONCAT44(uVar19,uVar17));
    dVar5 = 0.0;
    if (((_X != 0.0) || (NAN(_X))) || ((local_178 != 0.0 || (NAN(local_178))))) {
      dVar5 = atan2(local_178,_X);
      dVar5 = dVar5 * 57.29577951308232;
    }
    *(double *)(lVar12 + 0x200) = dVar5;
    *(double *)(lVar12 + 0x208) = dVar22;
    *(undefined8 *)(lVar12 + 0x210) = 0;
    *(undefined1 *)(lVar12 + 0x218) = 1;
    if (&local_1a0 != (undefined8 *)(lVar12 + 0x1a0)) {
      *(undefined8 *)(lVar12 + 0x1b0) = local_190;
      *(undefined8 *)(lVar12 + 0x1a0) = local_1a0;
      *(undefined8 *)(lVar12 + 0x1a8) = uStack_198;
      *(undefined1 *)(lVar12 + 0x1b8) = 1;
    }
    if ((undefined4 *)(param_1 + 0x244) != (undefined4 *)(lVar12 + 0x1c0)) {
      *(undefined4 *)(lVar12 + 0x1c0) = *(undefined4 *)(param_1 + 0x244);
      *(undefined1 *)(lVar12 + 0x1c4) = 1;
    }
    memcpy((void *)(lVar12 + 0xa0),param_2,0x100);
    if (&local_188 != (undefined8 *)(lVar12 + 0x220)) {
      *(double *)(lVar12 + 0x230) = local_178;
      *(undefined4 *)(lVar12 + 0x220) = (undefined4)local_188;
      *(undefined4 *)(lVar12 + 0x224) = local_188._4_4_;
      *(undefined4 *)(lVar12 + 0x228) = (undefined4)uStack_180;
      *(undefined4 *)(lVar12 + 0x22c) = uStack_180._4_4_;
      *(undefined1 *)(lVar12 + 0x238) = 1;
    }
    FUN_1407a29f8(lVar12,*(longlong *)(param_1 + 0x78) + 400);
    lVar4 = *(longlong *)(param_1 + 0x78);
    if ((*(longlong *)(lVar12 + 0x290) != *(longlong *)(lVar4 + 0x128)) ||
       (*(int *)(lVar12 + 0x298) != *(int *)(lVar4 + 0x130))) {
      *(longlong *)(lVar12 + 0x290) = *(longlong *)(lVar4 + 0x128);
      *(undefined4 *)(lVar12 + 0x298) = *(undefined4 *)(lVar4 + 0x130);
      *(undefined8 *)(lVar12 + 0x2a0) = 0;
    }
    (**(code **)(*(longlong *)(lVar12 + 0x58) + 0x20))(lVar12 + 0x58,0);
    *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(param_1 + 0x2d0);
    FUN_1406022fe(lVar12 + 0x68,param_1 + 0x2d8);
    local_418 = local_448;
    local_410 = plStack_440;
    if (plStack_440 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_440 + 1) = (int)plStack_440[1] + 1;
      UNLOCK();
    }
    local_468 = (undefined8 *)0x0;
    FUN_1405fd19a(*(undefined8 *)(param_1 + 400),lVar9,lVar8,&local_418);
    plVar6 = plStack_440;
    if (plStack_440 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_440 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_440)(plStack_440);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  lVar8 = FUN_14485cccc(lVar11);
  if (lVar8 == 0) {
    local_448._0_4_ = 0;
    iVar13 = 0;
    uVar3 = (uint)local_448;
  }
  else {
    uVar3 = *(uint *)(lVar8 + 0xc);
    local_448 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar13 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar8 + 0x10);
      bVar16 = iVar13 == 0;
      if (bVar16) {
        *(int *)(lVar8 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_448;
      if (bVar16) {
        iVar13 = iVar15;
      }
    }
  }
  local_448._0_4_ = uVar3;
  local_448 = CONCAT44(iVar13,(uint)local_448);
  FUN_1407a297a(param_1 + 0x368);
  uVar10 = FUN_14485cccc(lVar11);
  lVar11 = FUN_140717404(uVar10);
  if (lVar11 != 0) {
    local_448 = 0;
    FUN_14485c47a(&local_448,lVar11);
    FUN_1407a297a(param_1 + 0x368,&local_448);
  }
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x31c);
  FUN_1403dfdc4(local_388);
LAB_1407a2574:
  if ((local_70 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a297a FUN_1407a297a body=125 status=ok
// SIG undefined FUN_1407a297a(void)

int FUN_1407a297a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_140383372(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140155462(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 1407a29f8 FUN_1407a29f8 body=474 status=ok
// SIG undefined FUN_1407a29f8(void)

void FUN_1407a29f8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = *(uint *)(param_2 + 1);
  uVar9 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    if (*(int *)(param_1 + 0x28c) < (int)(uVar4 * 2)) {
      FUN_1407a322c((longlong *)(param_1 + 0x280));
    }
    lVar11 = 0;
    local_a0 = (longlong *)(param_1 + 0x280);
    do {
      local_98 = *(longlong *)(*param_2 + lVar11);
      FUN_1446dcdd4(local_88,&local_98);
      if (DAT_14cb77de0 == 0) {
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
      }
      else {
        FUN_140f6011c(DAT_14cb77de0,&local_98,local_88);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_90;
      lVar7 = local_98;
      if (local_98 != 0) {
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        iVar5 = *(int *)(param_1 + 0x288);
        *(uint *)(param_1 + 0x288) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x28c) < iVar5 + 1U) {
          FUN_1408da40e(local_a0,iVar5);
        }
        lVar6 = *local_a0;
        lVar10 = (longlong)iVar5 * 0x20;
        lVar1 = lVar6 + lVar10;
        *(longlong *)(lVar6 + lVar10) = lVar7;
        *(longlong **)(lVar6 + 8 + lVar10) = plVar8;
        if (plVar8 == (longlong *)0x0) {
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_90 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar11 = lVar11 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a2bd4 FUN_1407a2bd4 body=1209 status=ok
// SIG undefined FUN_1407a2bd4(void)

double * FUN_1407a2bd4(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_208 [32];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((longlong *)param_1[0x89] != (longlong *)0x0) {
    fVar10 = (float)(**(code **)(*(longlong *)param_1[0x89] + 0x6e8))();
    fVar11 = (float)(**(code **)(*(longlong *)param_1[0x89] + 0x860))();
    if (1e-08 < ABS(fVar11 - fVar10)) {
      fVar10 = (float)(**(code **)(*(longlong *)param_1[0x89] + 0x860))();
      if (1e-08 < ABS(fVar10)) {
        (**(code **)(*param_1 + 0x718))(param_1,&local_1d0,&local_1e8);
        dVar1 = sin(local_1e8 * 0.01745329238474369);
        dVar2 = sin(dStack_1e0 * 0.01745329238474369);
        dVar3 = sin(local_1d8 * 0.01745329238474369);
        sin(0.0);
        dVar4 = cos(local_1e8 * 0.01745329238474369);
        dVar5 = cos(dStack_1e0 * 0.01745329238474369);
        dVar6 = cos(local_1d8 * 0.01745329238474369);
        cos(0.0);
        local_1b8 = dVar4 * dVar5;
        dStack_1b0 = dVar2 * dVar4;
        local_1a0 = 0;
        local_198 = dVar1 * dVar3 * dVar5 - dVar2 * dVar6;
        dStack_190 = dVar1 * dVar3 * dVar2 + dVar5 * dVar6;
        local_188 = -dVar3 * dVar4;
        local_180 = 0;
        local_178 = -(dVar1 * dVar6 * dVar5 + dVar2 * dVar3);
        dStack_170 = dVar5 * dVar3 - dVar2 * dVar1 * dVar6;
        local_168 = dVar4 * dVar6;
        local_160 = 0;
        local_158 = DAT_14c8464e0;
        uStack_150 = (undefined4)DAT_14c8464e8;
        uStack_14c = DAT_14c8464e8._4_4_;
        uStack_148 = (undefined4)DAT_14c8464f0;
        uStack_144 = DAT_14c8464f0._4_4_;
        local_140 = 0x3ff0000000000000;
        dVar2 = param_3[2] - local_1c0;
        dVar5 = param_3[1] - local_1c8;
        dVar3 = *param_3 - local_1d0;
        local_1a8 = dVar1;
        FUN_14007522e(&local_138,&local_1b8);
        dVar4 = local_d8 * 0.0 + dVar2 * local_f8 + dVar5 * local_118 + dVar3 * local_138;
        fVar10 = (float)(**(code **)(*(longlong *)param_1[0x89] + 0x6e8))();
        fVar10 = tanf(fVar10 * 0.017453292 * 0.5);
        fVar11 = (float)(**(code **)(*(longlong *)param_1[0x89] + 0x860))();
        fVar11 = tanf(fVar11 * 0.017453292 * 0.5);
        dVar1 = (dVar3 * local_128 + dVar5 * local_108 + dVar2 * local_e8 + local_c8 * 0.0) *
                (double)(fVar10 / fVar11);
        dVar2 = (dStack_d0 * 0.0 + dVar2 * dStack_f0 + dVar5 * dStack_110 + dVar3 * dStack_130) *
                (double)(fVar10 / fVar11);
        *param_2 = local_158 * 0.0 + dVar1 * local_178 + dVar2 * local_198 + dVar4 * local_1b8 +
                   local_1d0;
        param_2[1] = (double)CONCAT44(uStack_14c,uStack_150) * 0.0 +
                     dVar1 * dStack_170 + dVar2 * dStack_190 + dVar4 * dStack_1b0 + local_1c8;
        param_2[2] = dVar4 * local_1a8 + dVar2 * local_188 + dVar1 * local_168 +
                     (double)CONCAT44(uStack_144,uStack_148) * 0.0 + local_1c0;
        if ((local_b0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  param_2[2] = param_3[2];
  uVar7 = *(undefined4 *)((longlong)param_3 + 4);
  uVar8 = *(undefined4 *)(param_3 + 1);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_208);
}



// FUNCTION 1407a3094 FUN_1407a3094 body=407 status=ok
// SIG undefined FUN_1407a3094(void)

ulonglong FUN_1407a3094(longlong *param_1)

{
  byte bVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_a98 [32];
  undefined1 local_a78 [104];
  float local_a10;
  undefined4 local_9e0;
  char local_9dc;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined1 local_9c8 [2088];
  longlong local_1a0;
  longlong local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e8 [12];
  byte local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a98;
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(local_a78,_Src,0x98);
  local_9dc = *(char *)((longlong)_Src + 0x9c);
  if (local_9dc == '\x01') {
    local_9e0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9d0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9d8 = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9c8,(longlong)_Src + 0xb0);
  local_108 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_100 = *(undefined8 *)((longlong)_Src + 0x978);
  local_f8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_f0 = *(undefined8 *)((longlong)_Src + 0x988);
  bVar1 = *(byte *)((longlong)_Src + 0x9f0);
  local_88 = bVar1;
  if (bVar1 == 1) {
    puVar3 = (undefined8 *)((longlong)_Src + 0x990);
    puVar4 = auStack_e8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_58 = *(undefined8 *)((longlong)_Src + 0xa20);
  local_78 = *(undefined8 *)((longlong)_Src + 0xa00);
  uStack_70 = *(undefined8 *)((longlong)_Src + 0xa08);
  local_68 = *(undefined4 *)((longlong)_Src + 0xa10);
  uStack_64 = *(undefined4 *)((longlong)_Src + 0xa14);
  uStack_60 = *(undefined4 *)((longlong)_Src + 0xa18);
  uStack_5c = *(undefined4 *)((longlong)_Src + 0xa1c);
  uVar5 = (ulonglong)(uint)local_a10;
  if (local_a10 <= 0.0) {
    uVar5 = (**(code **)(*param_1 + 0x6e8))(param_1);
    bVar1 = local_88;
  }
  if ((bVar1 & 1) != 0) {
    local_88 = 0;
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a322c FUN_1407a322c body=214 status=ok
// SIG undefined FUN_1407a322c(void)

void FUN_1407a322c(longlong param_1,int param_2)

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



// FUNCTION 1407a3302 FUN_1407a3302 body=456 status=ok
// SIG undefined FUN_1407a3302(void)

void FUN_1407a3302(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = *(uint *)(param_2 + 1);
  uVar10 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    local_a0 = (longlong *)(param_1 + 0x2d0);
    if (*(int *)(param_1 + 0x2dc) < (int)(uVar4 * 2)) {
      FUN_1407a322c(local_a0);
    }
    lVar9 = 0;
    do {
      local_98 = *(longlong *)(*param_2 + lVar9);
      FUN_1446dcdd4(local_88,&local_98);
      if (DAT_14cb77de0 == 0) {
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
      }
      else {
        FUN_140f6011c(DAT_14cb77de0,&local_98,local_88);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_90;
      lVar7 = local_98;
      if (local_98 != 0) {
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        iVar5 = *(int *)(param_1 + 0x2d8);
        *(uint *)(param_1 + 0x2d8) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x2dc) < iVar5 + 1U) {
          FUN_1408da40e(local_a0,iVar5);
        }
        lVar6 = *local_a0;
        lVar11 = (longlong)iVar5 * 0x20;
        lVar1 = lVar6 + lVar11;
        *(longlong *)(lVar6 + lVar11) = lVar7;
        *(longlong **)(lVar6 + 8 + lVar11) = plVar8;
        if (plVar8 == (longlong *)0x0) {
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_90 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar9 = lVar9 + 0x18;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a34cc FUN_1407a34cc body=648 status=ok
// SIG undefined FUN_1407a34cc(void)

uint * FUN_1407a34cc(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  uint *puVar5;
  void *_Dst;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined1 local_ac [4];
  uint *local_a8;
  uint **ppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  if (DAT_14c9495b0 != DAT_14c9495dc) {
    puVar6 = &DAT_14c9495e0;
    if (DAT_14c9495e8 != (undefined4 *)0x0) {
      puVar6 = DAT_14c9495e8;
    }
    uVar2 = puVar6[DAT_14c9495f0 - 1U & param_1];
    while (uVar2 != 0xffffffff) {
      puVar10 = (uint *)(DAT_14c9495a8 + (longlong)(int)uVar2 * 0x18);
      if (*puVar10 == param_1) {
        if (puVar10 != (uint *)0x0) goto LAB_1407a3585;
        break;
      }
      uVar2 = puVar10[4];
    }
  }
  local_a8 = &local_b0;
  FUN_145744a6a(&local_b8);
  puVar10 = (uint *)(DAT_14c9495a8 + (longlong)(int)local_b8 * 0x18);
LAB_1407a3585:
  uVar2 = DAT_14c949600;
  puVar4 = DAT_14c9495f8;
  puVar8 = *(uint **)(puVar10 + 2);
  if (puVar8 == (uint *)0x0) {
    local_88 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (uint *)0x0;
    ppuStack_a0 = (uint **)0x0;
    uStack_80 = 0x8000000000;
    local_78 = 0xffffffff;
    local_58 = 0;
    lVar9 = (longlong)(int)DAT_14c949600;
    DAT_14c949600 = DAT_14c949600 + 1;
    if (DAT_14c949604 < DAT_14c949600) {
      FUN_14574507c(uVar2);
    }
    puVar5 = DAT_14c9495f8;
    puVar1 = DAT_14c9495f8 + lVar9 * 0x18;
    puVar8 = puVar1 + 2;
    *puVar1 = local_b0;
    FUN_145744b98(puVar8,&local_a8);
    *(undefined8 *)(puVar1 + 0x16) = local_58;
    local_58 = 0;
    FUN_1407a3756(&local_a8);
    if (DAT_14c9495f8 == puVar4) {
      *(uint **)(puVar10 + 2) = puVar8;
    }
    else {
      FUN_145744d32();
      if ((longlong)(int)DAT_14c949600 != 0) {
        lVar11 = (longlong)(int)DAT_14c949600 * 0x60;
        puVar10 = DAT_14c9495f8;
        do {
          local_b8 = puVar10 + 2;
          local_a8 = puVar10;
          ppuStack_a0 = &local_b8;
          FUN_145744f58(local_ac,&local_a8);
          puVar10 = puVar10 + 0x18;
          lVar11 = lVar11 + -0x60;
        } while (lVar11 != 0);
      }
    }
    if ((local_b0 & 0x3000000) != 0) {
      _Dst = (void *)FUN_14001cc68(0x480);
      uVar7 = 0;
      memset(_Dst,0,0x480);
      *(undefined2 *)((longlong)_Dst + 0x40) = 0x10;
      memset((void *)((longlong)_Dst + 0x42),(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),0xff),0x400
            );
      pvVar3 = *(void **)(puVar5 + lVar9 * 0x18 + 0x16);
      if ((pvVar3 != _Dst) &&
         (*(void **)(puVar5 + lVar9 * 0x18 + 0x16) = _Dst, pvVar3 != (void *)0x0)) {
        FUN_14574511c(pvVar3);
        FUN_1400020a8(pvVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a3756 FUN_1407a3756 body=107 status=ok
// SIG undefined FUN_1407a3756(void)

void FUN_1407a3756(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_14574511c(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3850(param_1);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407a37c2 FUN_1407a37c2 body=142 status=ok
// SIG undefined FUN_1407a37c2(void)

undefined8 FUN_1407a37c2(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((DAT_14c9495b0 - DAT_14c9495dc != 1) && (DAT_14c9495b0 != DAT_14c9495dc)) {
    puVar6 = &DAT_14c9495e0;
    if (DAT_14c9495e8 != (undefined4 *)0x0) {
      puVar6 = DAT_14c9495e8;
    }
    iVar5 = puVar6[DAT_14c9495f0 - 1U & param_1];
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(DAT_14c9495a8 + (longlong)iVar5 * 0x18);
        if (*piVar1 == *param_2) {
          iVar2 = param_2[1];
          iVar3 = param_2[2];
          iVar4 = param_2[3];
          *piVar1 = *param_2;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_1468b33dc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1407a3850 FUN_1407a3850 body=467 status=ok
// SIG undefined FUN_1407a3850(void)

void FUN_1407a3850(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
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
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._4_4_ = 0;
    uVar9 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    uVar9 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x20;
      FUN_1407a3a24(*(undefined8 *)(lVar11 + 8 + lVar10),*(undefined4 *)(lVar11 + 0x10 + lVar10));
      if (*(longlong *)(lVar11 + 8 + lVar10) != 0) {
        FUN_1400020a8();
      }
      uVar9 = uVar9 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar9;
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
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1407a397d;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar9 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1407a397d:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a3a24 FUN_1407a3a24 body=68 status=ok
// SIG undefined FUN_1407a3a24(void)

void FUN_1407a3a24(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x50;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1407a3a68(param_1);
      param_1 = param_1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407a3a68 FUN_1407a3a68 body=55 status=ok
// SIG undefined FUN_1407a3a68(void)

void FUN_1407a3a68(longlong *param_1)

{
  FUN_1407a3aa0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407a3aa0 FUN_1407a3aa0 body=560 status=ok
// SIG undefined FUN_1407a3aa0(void)

void FUN_1407a3aa0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1407a3ad5;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)((longlong)iVar6 * 0x28 + lVar12) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1407a3ad5;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1407a3ad5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1407a3cd0 FUN_1407a3cd0 body=367 status=ok
// SIG undefined FUN_1407a3cd0(void)

void FUN_1407a3cd0(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14c9495e0;
  if (DAT_14c9495e8 != (undefined4 *)0x0) {
    puVar5 = DAT_14c9495e8;
  }
  iVar4 = DAT_14c9495f0 + 3;
  if (-1 < DAT_14c9495f0) {
    iVar4 = DAT_14c9495f0;
  }
  if (DAT_14c9495b0 - DAT_14c9495dc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c9495b8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c9495d0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c9495d0;
    }
    local_78 = &DAT_14c9495a8;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c9495b8)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c9495a8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c9495b8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c9495f0) {
      lVar3 = 0;
      do {
        puVar5[lVar3] = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14c9495f0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a3e40 FUN_1407a3e40 body=473 status=ok
// SIG undefined FUN_1407a3e40(void)

void FUN_1407a3e40(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9495e8 != (undefined4 *)0x0) {
    FUN_1446efa72(&DAT_14c9495e8,0,0,4);
  }
  uVar2 = DAT_14c9495f0;
  uVar3 = local_50;
  if (DAT_14c9495f0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9495e0,0,DAT_14c9495f0,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14c9495e8;
        if (DAT_14c9495e8 == (undefined4 *)0x0) {
          puVar6 = &DAT_14c9495e0;
        }
        puVar6[DAT_14c9495f0 + 0x7fffffff & uVar7] = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9495b8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9495d0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9495a8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14c9495f0 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9495e8;
        if (DAT_14c9495e8 == (undefined4 *)0x0) {
          puVar6 = &DAT_14c9495e0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             puVar6[(longlong)(int)DAT_14c9495f0 - 1U & uVar9];
        puVar6 = DAT_14c9495e8;
        if (DAT_14c9495e8 == (undefined4 *)0x0) {
          puVar6 = &DAT_14c9495e0;
        }
        puVar6[(longlong)iVar8 & (longlong)(int)DAT_14c9495f0 - 1U] = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a401a FUN_1407a401a body=283 status=ok
// SIG undefined FUN_1407a401a(void)

void FUN_1407a401a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x440) == 0) {
    do {
      plVar1 = *(longlong **)(param_1 + 0x240);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,100,0), cVar4 != '\0')) {
        local_78 = 0;
        uStack_70 = 0;
        FUN_1407a4530(&local_78);
        FUN_1407a42da(param_1 + 0xc0,&local_78);
        lVar3 = local_78;
        lVar6 = (longlong)(int)uStack_70;
        if (lVar6 != 0) {
          lVar5 = 0;
          do {
            lVar2 = *(longlong *)(lVar3 + lVar5);
            if ((*(int *)(lVar2 + 0x120) != 0) &&
               (plVar1 = *(longlong **)(lVar2 + 0x118), plVar1 != (longlong *)0x0)) {
              (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
            }
            FUN_1407a4136(param_1 + 0x40,lVar2);
            lVar5 = lVar5 + 8;
          } while (lVar6 * 8 != lVar5);
        }
        if (local_78 != 0) {
          FUN_1400020a8(local_78);
        }
      }
    } while (*(int *)(param_1 + 0x440) == 0);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a4136 FUN_1407a4136 body=419 status=ok
// SIG undefined FUN_1407a4136(void)

ulonglong FUN_1407a4136(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  plVar1 = (longlong *)(param_2 + 0x118);
  if (*(int *)(param_2 + 0x120) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1407a416c;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x120) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1407a416c:
  if (*(longlong *)(param_2 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_14493c560();
  if (uVar4 == 0) {
    uVar5 = 0;
    uVar9 = 0;
    lVar8 = 0;
  }
  else {
    uVar9 = (ulonglong)(uVar4 >> 0xe);
    uVar5 = uVar4 & 0x3fff;
    lVar8 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
  }
  *(longlong *)(lVar8 + 8) = param_2;
  do {
    uVar2 = *param_1;
    uVar6 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar5 * 0x18);
    }
    *(uint *)(lVar8 + 0x10) = (uint)uVar2 & 0x3ffffff;
    LOCK();
    uVar7 = *param_1;
    bVar10 = uVar2 == uVar7;
    if (bVar10) {
      *param_1 = uVar6 | uVar4;
      uVar7 = uVar2;
    }
    UNLOCK();
  } while (!bVar10);
  return uVar7;
}



// FUNCTION 1407a42da FUN_1407a42da body=90 status=ok
// SIG undefined FUN_1407a42da(void)

void FUN_1407a42da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1407a4334();
  while (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1407a45c2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    lVar2 = FUN_1407a4334(param_1);
  }
  return;
}



// FUNCTION 1407a4334 FUN_1407a4334 body=507 status=ok
// SIG undefined FUN_1407a4334(void)

undefined8 FUN_1407a4334(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  do {
    while( true ) {
      do {
        uVar5 = *param_1;
        uVar4 = param_1[8];
        uVar6 = (uint)uVar5;
        puVar8 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar8 = (ulonglong *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar6 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar1 = *puVar8;
      } while (uVar5 != *param_1);
      uVar7 = (uint)uVar1;
      if ((((uint)uVar4 ^ uVar6) & 0x3ffffff) != 0) break;
      if ((uVar1 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar4 == param_1[8]) {
        param_1[8] = uVar5 | uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    if ((uVar1 & 0x3ffffff) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uVar7 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar7 & 0x3ffffff) >> 0xe) * 8);
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar5 == uVar1) {
      *param_1 = uVar4 | uVar7 & 0x3ffffff;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  FUN_1447d080c(uVar6 & 0x3ffffff);
  return uVar2;
}



// FUNCTION 1407a4530 FUN_1407a4530 body=145 status=ok
// SIG undefined FUN_1407a4530(void)

void FUN_1407a4530(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x200;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e20];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x200,8);
  }
  uVar2 = 0x7fffffff;
  if (0x3f < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1407a45c2 FUN_1407a45c2 body=353 status=ok
// SIG undefined FUN_1407a45c2(void)

void FUN_1407a45c2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407a4649;
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
LAB_1407a4649:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407a4724 FUN_1407a4724 body=105 status=ok
// SIG undefined FUN_1407a4724(void)

void FUN_1407a4724(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    local_18 = &local_28;
    local_20 = &LAB_143625ad4;
    local_28 = param_1;
    local_10 = lVar1;
    FUN_1407a478e(&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a478e FUN_1407a478e body=130 status=ok
// SIG undefined FUN_1407a478e(void)

ulonglong FUN_1407a478e(longlong *param_1,undefined8 *param_2)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  undefined1 auStack_68 [40];
  char local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    FUN_1407a4812(local_40,param_1,1);
    (*(code *)*param_2)(param_2[1],param_1);
    if (local_40[0] == '\x01') {
      FUN_1447e63de(local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a4812 FUN_1407a4812 body=67 status=ok
// SIG undefined FUN_1407a4812(void)

undefined1 * FUN_1407a4812(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = param_3;
  if (param_2 != 0) {
    lVar1 = FUN_1407a4856();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
    }
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  FUN_1447e649a(param_1);
  return param_1;
}



// FUNCTION 1407a4856 FUN_1407a4856 body=60 status=ok
// SIG undefined FUN_1407a4856(void)

undefined8 FUN_1407a4856(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if ((((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x10) != 0)) &&
     (((*(int *)(lVar1 + 8) == 1 && (piVar2 = *(int **)(lVar1 + 0x348), piVar2 != (int *)0x0)) &&
      ((*piVar2 == 4 && (*(longlong *)(piVar2 + 2) != 0)))))) {
    return *(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x10);
  }
  return 0;
}



// FUNCTION 1407a4892 FUN_1407a4892 body=852 status=ok
// SIG undefined FUN_1407a4892(void)

undefined8 FUN_1407a4892(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = (double)CONCAT71(local_100._1_7_,1);
  local_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  FUN_1403d4924(param_1 + 8,&local_100);
  FUN_14493db24(&local_100);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar14 = *param_3;
    uVar15 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = *(undefined8 *)(param_3 + 4);
    uVar9 = *(undefined8 *)(param_3 + 6);
    uVar10 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar10;
    *(undefined8 *)(param_1 + 0x128) = uVar8;
    *(undefined8 *)(param_1 + 0x130) = uVar9;
    *(undefined4 *)(param_1 + 0x118) = uVar14;
    *(undefined4 *)(param_1 + 0x11c) = uVar15;
    *(undefined4 *)(param_1 + 0x120) = uVar6;
    *(undefined4 *)(param_1 + 0x124) = uVar7;
  }
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x188);
    if ((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[1])) {
      iVar13 = (int)plVar3[1];
      do {
        if (iVar13 == 0) {
          cVar12 = FUN_140591fd6(0);
          if (cVar12 == '\0') goto LAB_1407a49b1;
          goto LAB_1407a49aa;
        }
        LOCK();
        iVar11 = (int)plVar3[1];
        bVar16 = iVar13 == iVar11;
        if (bVar16) {
          *(int *)(plVar3 + 1) = iVar13 + 1;
          iVar11 = iVar13;
        }
        iVar13 = iVar11;
        UNLOCK();
      } while (!bVar16);
      cVar12 = FUN_140591fd6(*(undefined8 *)(param_1 + 0x180));
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
      if (cVar12 != '\0') {
LAB_1407a49aa:
        *(undefined1 *)(param_1 + 0x244) = 1;
      }
    }
LAB_1407a49b1:
    if (((*(longlong *)(param_1 + 0x180) != 0) &&
        (plVar3 = *(longlong **)(param_1 + 0x188), plVar3 != (longlong *)0x0)) &&
       (0 < (int)plVar3[1])) {
      iVar13 = (int)plVar3[1];
      do {
        if (iVar13 == 0) {
          cVar12 = FUN_140591fd6(0);
          goto LAB_1407a4a0a;
        }
        LOCK();
        iVar11 = (int)plVar3[1];
        bVar16 = iVar13 == iVar11;
        if (bVar16) {
          *(int *)(plVar3 + 1) = iVar13 + 1;
          iVar11 = iVar13;
        }
        iVar13 = iVar11;
        UNLOCK();
      } while (!bVar16);
      cVar12 = FUN_140591fd6(*(undefined8 *)(param_1 + 0x180));
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
      goto LAB_1407a4a0a;
    }
  }
  cVar12 = '\0';
LAB_1407a4a0a:
  if (*(longlong *)(param_1 + -0x90) != 0) {
    plVar3 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_100);
    if (((int)local_100 != (int)DAT_14c967818) || (local_100._4_4_ != DAT_14c967818._4_4_)) {
      plVar4 = *(longlong **)(param_1 + -0x90);
      uVar14 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x108))(plVar3);
      uVar15 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x100))(plVar3);
      lVar5 = *plVar4;
      if (cVar12 == '\0') {
        (**(code **)(lVar5 + 0xa0))(plVar4,plVar3,uVar15,uVar14);
      }
      else {
        (**(code **)(lVar5 + 0xa8))();
        fVar2 = *(float *)(param_4 + 0x34);
        *(int *)(param_1 + 0x1ac) =
             (int)((float)*(int *)(param_1 + 0x1ac) + *(float *)(param_4 + 0x30));
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
        *(int *)(param_1 + 0x1b0) = (int)((float)*(int *)(param_1 + 0x1b0) - fVar2);
        *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
      }
      if (*(char *)(param_1 + 0x1d1) == '\x01') {
        local_f8 = (double)*(int *)(param_1 + 0x1d8);
        local_100 = (double)*(int *)(param_1 + 0x1d4);
        (**(code **)(*(longlong *)(DAT_14c98e618 + 0x148) + 0x1e8))(DAT_14c98e618 + 0x148);
      }
    }
  }
  FUN_1403d4c6e(param_2,param_1 + 8);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407a4be8 FUN_1407a4be8 body=504 status=ok
// SIG undefined FUN_1407a4be8(void)

void FUN_1407a4be8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar1,1,1);
    DAT_14c9670a0 = plVar1;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_74,*(undefined4 *)(param_3 + 0x10));
  if (local_74 == DAT_14c9680a8) {
    fVar6 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                  *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
    fVar7 = *(float *)(param_2 + 0x1c) * fVar6;
    fVar4 = -*(float *)(param_2 + 0x24) * fVar6;
    fVar2 = -*(float *)(param_2 + 0x20) * fVar6;
    fVar6 = fVar6 * *(float *)(param_2 + 0x28);
    dVar5 = (double)(fVar6 * *(float *)(param_3 + 0x20) + fVar4 * *(float *)(param_3 + 0x24) +
                    (-*(float *)(param_2 + 0x2c) * fVar6 - *(float *)(param_2 + 0x30) * fVar4)) *
            (double)*(float *)(param_1 + 0x1e8);
    if (2147483647.0 <= dVar5) {
      dVar5 = 2147483647.0;
    }
    if (dVar5 <= -2147483648.0) {
      dVar5 = -2147483648.0;
    }
    dVar3 = (double)(fVar2 * *(float *)(param_3 + 0x20) + fVar7 * *(float *)(param_3 + 0x24) +
                    (-*(float *)(param_2 + 0x2c) * fVar2 - fVar7 * *(float *)(param_2 + 0x30))) *
            (double)*(float *)(param_1 + 0x1e8);
    if (2147483647.0 <= dVar3) {
      dVar3 = 2147483647.0;
    }
    if (dVar3 <= -2147483648.0) {
      dVar3 = -2147483648.0;
    }
    *(ulonglong *)(param_1 + 0x1d8) =
         (ulonglong)(longlong)ROUND(dVar5 + dVar5 + 0.5) >> 1 & 0xffffffff |
         ((longlong)ROUND(dVar3 + dVar3 + 0.5) & 0xfffffffffffffffeU) << 0x1f;
  }
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a4de2 FUN_1407a4de2 body=127 status=ok
// SIG undefined FUN_1407a4de2(void)

void FUN_1407a4de2(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407a4e62(local_68,param_1 + 0x90);
  FUN_14042b1ec(param_2,local_68,1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a4e62 FUN_1407a4e62 body=691 status=ok
// SIG undefined FUN_1407a4e62(void)

uint * FUN_1407a4e62(uint *param_1,longlong param_2)

{
  uint *puVar1;
  void **ppvVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  void *local_78;
  uint local_70;
  undefined4 local_6c;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  longlong local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_1407a5116(param_2);
  puVar1 = param_1 + 2;
  ppvVar2 = (void **)(param_1 + 6);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (lVar7 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    FUN_1400bbfc4(&local_60,lVar7);
    *puVar1 = local_60;
    param_1[3] = uStack_5c;
    param_1[4] = uStack_58;
    param_1[5] = uStack_54;
    if (puVar1 == &local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 6) = local_50;
      local_50 = 0;
      param_1[8] = local_48;
      param_1[9] = local_44;
    }
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    uVar6 = *(uint *)(lVar7 + 0xc);
    if (cVar5 != '\0') {
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_1407a4f45;
      }
    }
    *param_1 = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar6 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar6 = *(uint *)(lVar7 + 0x10);
      bVar9 = uVar6 == 0;
      if (bVar9) {
        *(uint *)(lVar7 + 0x10) = uVar8;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar6 = uVar8;
      }
    }
    param_1[1] = uVar6;
  }
LAB_1407a4f45:
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
    local_88 = *(uint *)(param_2 + 8);
    uStack_84 = *(uint *)(param_2 + 0xc);
    uStack_80 = *(uint *)(param_2 + 0x10);
    uStack_7c = *(uint *)(param_2 + 0x14);
    local_78 = (void *)0x0;
    local_70 = *(uint *)(param_2 + 0x20);
    lVar7 = (longlong)(int)local_70;
    pvVar3 = *(void **)(param_2 + 0x18);
    if (lVar7 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar3,lVar7 * 2);
    }
    uVar6 = local_70;
    pvVar3 = local_78;
    param_1[0] = 0;
    param_1[1] = 0;
    *puVar1 = local_88;
    param_1[3] = uStack_84;
    param_1[4] = uStack_80;
    param_1[5] = uStack_7c;
    if (ppvVar2 != &local_78) {
      lVar7 = (longlong)(int)local_70;
      param_1[8] = local_70;
      if (local_70 == 0 && param_1[9] == 0) {
        param_1[9] = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,local_70);
        if (uVar6 != 0) {
          memcpy(*ppvVar2,pvVar3,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407a5116 FUN_1407a5116 body=380 status=ok
// SIG undefined FUN_1407a5116(void)

longlong FUN_1407a5116(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1407a5292();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1407a5292 FUN_1407a5292 body=228 status=ok
// SIG undefined FUN_1407a5292(void)

longlong FUN_1407a5292(void)

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
  if (DAT_14cb6f458 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_1487a5939;
    local_40 = FUN_146540532;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"SpawnPointBodyData",&DAT_14cb6f458,&DAT_1487a5938);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6f458;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a5378 FUN_1407a5378 body=73 status=ok
// SIG undefined FUN_1407a5378(void)

void FUN_1407a5378(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[6];
  param_1[6] = param_2;
  (**(code **)(*param_1 + 0x2b8))();
  FUN_1407a53c4(param_1,param_2,param_3,param_4);
  param_1[6] = lVar1;
  return;
}



// FUNCTION 1407a53c4 FUN_1407a53c4 body=406 status=ok
// SIG undefined FUN_1407a53c4(void)

/* WARNING: Removing unreachable block (ram,0x0001407a550f) */
/* WARNING: Removing unreachable block (ram,0x0001407a5519) */
/* WARNING: Removing unreachable block (ram,0x0001407a552b) */

ulonglong FUN_1407a53c4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  local_40 = 0;
  uStack_3b = 0;
  local_38 = 0;
  local_34 = 0;
  local_60 = *param_4;
  plStack_58 = (longlong *)param_4[1];
  if (plStack_58 == (longlong *)0x0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  local_50 = param_4[2];
  lVar5 = param_4[3];
  local_70 = param_2;
  local_68 = param_3;
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_4[3];
    }
  }
  uStack_48 = (undefined5)lVar5;
  uStack_43 = (undefined3)((ulonglong)lVar5 >> 0x28);
  lVar5 = param_4[4];
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_4[4];
    }
  }
  local_40 = (undefined5)lVar5;
  uStack_3b = (undefined3)((ulonglong)lVar5 >> 0x28);
  local_34 = *(undefined1 *)((longlong)param_4 + 0x2c);
  local_38 = *(undefined4 *)(param_4 + 5);
  uVar4 = FUN_14477b072(param_1,DAT_14cacc3c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_70);
  plVar3 = plStack_58;
  uVar6 = CONCAT71((int7)((ulonglong)&local_38 >> 8),local_30);
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1407a555c FUN_1407a555c body=262 status=ok
// SIG undefined FUN_1407a555c(void)

void FUN_1407a555c(longlong param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0xd0) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
    else if (*(char *)(param_1 + 0xd0) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      FUN_1400b22c2(local_28,"Invalid Trick");
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x30);
      if (lVar1 == 0) {
        FUN_140056680(local_28,&DAT_149e01fe8);
      }
      else {
        local_38[0] = *(longlong *)(lVar1 + 0x18);
        FUN_1400021e4(local_38,local_28);
      }
    }
    if ((*(byte *)(param_1 + 0xd0) & 0xfd) == 0) {
      pcVar2 = "Uncloak";
      if (param_2 != '\0') {
        pcVar2 = "Cloak";
      }
      FUN_1400b22c2(local_38,pcVar2);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a5680 FUN_1407a5680 body=102 status=ok
// SIG undefined FUN_1407a5680(void)

ulonglong FUN_1407a5680(longlong param_1)

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
LAB_1407a56c9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1407a56c9;
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



// FUNCTION 1407a5729 FUN_1407a5729 body=203 status=ok
// SIG undefined FUN_1407a5729(void)

void FUN_1407a5729(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xb8) + 200);
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if ((longlong)(int)uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1407a57f6(param_2,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = param_2;
      FUN_1407a5844(uVar2,param_1,&local_48,0);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a57f6 FUN_1407a57f6 body=77 status=ok
// SIG undefined FUN_1407a57f6(void)

void FUN_1407a57f6(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144a2c682();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1469124fc();
      return;
    }
  }
  return;
}



// FUNCTION 1407a5844 FUN_1407a5844 body=3995 status=ok
// SIG undefined FUN_1407a5844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a5844(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  undefined1 auStack_3c8 [32];
  undefined1 *local_3a8;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [64];
  undefined1 *local_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (*(char *)(*param_3 + (longlong)(int)param_1) == '\0') {
    local_288 = (undefined1 *)0x0;
    local_280 = 0x1000000000;
    local_3a8 = local_2c8;
    cVar8 = FUN_1407a67e0(param_1,param_2,*(undefined4 *)(*(longlong *)(param_2 + 0xb8) + 200),
                          param_3);
    if ((cVar8 != '\0') && ((int)local_280 != 0)) {
      do {
        puVar11 = local_288;
        if (local_288 == (undefined1 *)0x0) {
          puVar11 = local_2c8;
        }
        uVar12 = *(uint *)(puVar11 + (longlong)(int)local_280 * 4 + -4);
        local_280 = CONCAT44(local_280._4_4_,(int)local_280 + -1);
        if (((int)uVar12 < 0) || (*(int *)(param_2 + 0xf0) <= (int)uVar12)) {
          lVar13 = *(longlong *)(param_2 + 0xb8);
          iVar10 = -1;
        }
        else {
          lVar13 = *(longlong *)(param_2 + 0xb8);
          lVar9 = *(longlong *)(param_2 + 0xe8);
          if (*(longlong *)(param_2 + 0xe8) == 0) {
            lVar9 = param_2 + 0xd8;
          }
          iVar10 = -1;
          if ((*(uint *)(lVar9 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
            iVar10 = *(int *)(*(longlong *)(lVar13 + 0x120) + (ulonglong)uVar12 * 4);
          }
        }
        plVar14 = (longlong *)(lVar13 + 0xc0);
        if (*(char *)(param_2 + 0x118) != '\0') {
          plVar14 = (longlong *)(param_2 + 0x108);
        }
        lVar13 = *plVar14;
        lVar15 = (longlong)(int)uVar12;
        lVar9 = lVar15 * 0x30;
        uVar3 = *(undefined8 *)(lVar13 + 0x20 + lVar9);
        auVar53._0_8_ = (double)(float)uVar3;
        auVar53._8_8_ = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)(lVar13 + 0x28 + lVar9);
        auVar23._0_8_ = (double)(float)uVar3;
        auVar23._8_8_ = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)(lVar13 + 0x10 + lVar9);
        dVar26 = (double)(float)uVar3;
        dVar29 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)(lVar13 + 0x18 + lVar9);
        dVar22 = (double)(float)uVar3;
        dVar25 = (double)(float)((ulonglong)uVar3 >> 0x20);
        dVar34 = (double)(float)*(undefined8 *)(lVar13 + lVar9);
        dVar35 = (double)(float)((ulonglong)*(undefined8 *)(lVar13 + lVar9) >> 0x20);
        uVar3 = *(undefined8 *)(lVar13 + 8 + lVar9);
        dVar38 = (double)(float)uVar3;
        dVar39 = (double)(float)((ulonglong)uVar3 >> 0x20);
        if (iVar10 != DAT_14c75f3b2) {
          lVar13 = *param_5;
          lVar9 = (longlong)iVar10 * 0x60;
          pdVar1 = (double *)(lVar13 + lVar9);
          local_388 = *(undefined1 (*) [16])(lVar13 + 0x40 + lVar9);
          auVar24 = *(undefined1 (*) [16])(lVar13 + 0x50 + lVar9);
          dVar30 = auVar24._0_8_;
          dVar37 = auVar24._8_8_;
          auVar43._8_8_ = auVar53._8_8_;
          auVar43._0_8_ = auVar53._0_8_;
          auVar43 = minpd(auVar43,local_388);
          auVar48._8_8_ = auVar23._8_8_;
          auVar48._0_8_ = auVar23._0_8_;
          auVar48 = minpd(auVar48,auVar24);
          auVar24._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
          auVar24._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
          iVar10 = movmskpd((int)lVar9,auVar24);
          auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar12 = movmskpd((int)lVar13,auVar49);
          if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
            dVar6 = *pdVar1;
            dVar7 = pdVar1[1];
            dVar4 = SUB168(*(undefined1 (*) [16])(pdVar1 + 2),0);
            dVar51 = SUB168(*(undefined1 (*) [16])(pdVar1 + 2),8);
            dVar42 = pdVar1[3];
            dVar54 = pdVar1[3];
            dVar46 = pdVar1[1];
            dVar52 = pdVar1[1];
            dVar40 = dVar46 * dVar34;
            dVar45 = dVar52 * dVar35;
            dVar55 = *pdVar1 * dVar35;
            dVar5 = *pdVar1 * dVar34;
            dVar47 = pdVar1[2];
            dVar41 = pdVar1[2];
            dVar36 = dVar34 * dVar41;
            dVar41 = dVar38 * dVar41;
            dVar34 = dVar35 * dVar47 * -1.0 +
                     dVar38 * dVar46 + dVar39 * *pdVar1 * 1.0 + dVar42 * dVar34;
            dVar35 = dVar36 * 1.0 + dVar39 * dVar52 + dVar38 * *pdVar1 * -1.0 + dVar54 * dVar35;
            dVar38 = dVar39 * dVar47 * 1.0 + ((dVar55 * 1.0 + dVar42 * dVar38) - dVar40);
            dVar39 = dVar41 * -1.0 + ((dVar5 * -1.0 + dVar54 * dVar39) - dVar45);
            dVar26 = dVar26 * (double)local_388._0_8_;
            dVar29 = dVar29 * (double)local_388._8_8_;
            dVar22 = dVar22 * dVar30;
            dVar25 = dVar25 * dVar37;
            dVar41 = dVar29 * dVar6 - dVar26 * dVar7;
            dVar47 = dVar22 * dVar7 - dVar29 * dVar4;
            dVar52 = dVar26 * dVar4 - dVar22 * dVar6;
            dVar46 = dVar25 * dVar51 - dVar25 * dVar51;
            dVar47 = dVar47 + dVar47;
            dVar52 = dVar52 + dVar52;
            dVar41 = dVar41 + dVar41;
            dVar46 = dVar46 + dVar46;
            auVar53._0_8_ = auVar53._0_8_ * (double)local_388._0_8_;
            auVar53._8_8_ = auVar53._8_8_ * (double)local_388._8_8_;
            dVar25 = (dVar46 * dVar51 - dVar46 * dVar51) + dVar54 * dVar46 + dVar25 + pdVar1[7];
            auVar23._8_8_ = auVar23._8_8_ * dVar37;
            auVar23._0_8_ = auVar23._0_8_ * dVar30;
            dVar22 = (dVar52 * dVar6 - dVar7 * dVar47) + dVar42 * dVar41 + dVar22 + pdVar1[6];
            dVar26 = (dVar41 * dVar7 - dVar4 * dVar52) + dVar42 * dVar47 + dVar26 + pdVar1[4];
            dVar29 = (dVar47 * dVar4 - dVar41 * dVar6) + dVar54 * dVar52 + dVar29 + pdVar1[5];
          }
          else {
            dVar47 = *pdVar1;
            dVar4 = pdVar1[1];
            dVar51 = pdVar1[2];
            dVar55 = dVar4 + dVar4;
            dVar52 = dVar51 + dVar51;
            dVar42 = dVar47 * (dVar47 + dVar47);
            dVar25 = pdVar1[3];
            dVar46 = dVar52 * dVar25;
            dVar41 = (dVar47 + dVar47) * pdVar1[3];
            dVar25 = dVar55 * dVar25;
            dVar54 = (dVar52 * dVar4 - dVar41) * dVar30;
            local_1f8 = (1.0 - (dVar51 * dVar52 + dVar4 * dVar55)) * (double)local_388._0_8_;
            dVar51 = (1.0 - (dVar51 * dVar52 + dVar42)) * (double)local_388._8_8_;
            local_1a8 = (1.0 - (dVar42 + dVar4 * dVar55)) * dVar30;
            local_398 = dVar30 * auVar23._0_8_;
            dStack_390 = dVar37 * auVar23._8_8_;
            dStack_1f0 = (dVar55 * dVar47 + dVar46) * (double)local_388._0_8_;
            local_1c8 = (dVar52 * dVar4 + dVar41) * (double)local_388._8_8_;
            local_1e8 = (*pdVar1 * dVar52 - dVar25) * (double)local_388._0_8_;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar51,0);
            local_1d8._0_8_ = (dVar55 * dVar47 - dVar46) * (double)local_388._8_8_;
            local_1d8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar54,0);
            local_1b8._0_8_ = (dVar25 + *pdVar1 * dVar52) * dVar30;
            local_1b8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
            uStack_1a0 = 0;
            local_198 = pdVar1[4];
            dStack_190 = pdVar1[5];
            local_188 = pdVar1[6];
            uStack_180 = 0x3ff0000000000000;
            dVar46 = dVar35 + dVar35;
            dVar42 = dVar38 + dVar38;
            dVar52 = (dVar34 + dVar34) * dVar34;
            local_228 = (1.0 - (dVar52 + dVar46 * dVar35)) * auVar23._0_8_;
            dVar54 = (dVar34 + dVar34) * dVar39;
            dVar25 = (dVar42 * dVar35 - dVar54) * auVar23._0_8_;
            dVar30 = (double)local_388._0_8_ * auVar53._0_8_;
            dVar37 = (double)local_388._8_8_ * auVar53._8_8_;
            local_278 = (1.0 - (dVar42 * dVar38 + dVar46 * dVar35)) * auVar53._0_8_;
            dVar38 = (1.0 - (dVar42 * dVar38 + dVar52)) * auVar53._8_8_;
            dStack_270 = (dVar46 * dVar34 + dVar42 * dVar39) * auVar53._0_8_;
            local_248 = (dVar42 * dVar35 + dVar54) * auVar53._8_8_;
            local_268 = (dVar34 * dVar42 - dVar46 * dVar39) * auVar53._0_8_;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar38,0);
            local_258._0_8_ = (dVar46 * dVar34 - dVar42 * dVar39) * auVar53._8_8_;
            local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar25,0);
            local_238._0_8_ = (dVar34 * dVar42 + dVar46 * dVar39) * auVar23._0_8_;
            local_238._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            uStack_220 = 0;
            uStack_200 = 0x3ff0000000000000;
            local_218 = dVar26;
            dStack_210 = dVar29;
            local_208 = dVar22;
            FUN_1447fea8d(&local_178);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar53 = _DAT_149934d80;
            auVar20._8_8_ = -(ulonglong)(0.0 <= dVar37);
            auVar20._0_8_ = -(ulonglong)(0.0 <= dVar30);
            auVar24 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar20);
            auVar23._8_8_ = dStack_390;
            auVar23._0_8_ = local_398;
            dVar38 = (double)(~-(ulonglong)(0.0 <= local_398) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= local_398) & 0x3ff0000000000000);
            dVar39 = auVar24._0_8_;
            local_168 = local_168 * dVar39;
            local_170 = local_170 * dVar39;
            local_178 = local_178 * dVar39;
            dVar39 = auVar24._8_8_;
            local_148 = local_148 * dVar39;
            local_150 = local_150 * dVar39;
            local_158 = dVar39 * local_158;
            local_128 = local_128 * dVar38;
            local_130 = local_130 * dVar38;
            local_138 = dVar38 * local_138;
            FUN_14481fd10(&local_2e8);
            dVar38 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
            dVar39 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
            auVar28._0_8_ = dVar38 + dVar39;
            auVar28._8_8_ = dVar38 + dVar39;
            auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
            auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
            auVar24 = sqrtpd(auVar28,auVar28);
            auVar53 = divpd(auVar53,auVar24);
            auVar33._0_8_ = auVar53._0_8_ * local_2d8;
            auVar33._8_8_ = auVar53._8_8_ * dStack_2d0;
            auVar24 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar21);
            dVar34 = (double)((ulonglong)(local_2e8 * auVar53._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
            dVar35 = (double)((ulonglong)(dStack_2e0 * auVar53._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
            dVar25 = 0.0;
            dVar38 = auVar24._0_8_;
            dVar39 = auVar24._8_8_;
            auVar53._8_8_ = dVar37;
            auVar53._0_8_ = dVar30;
            dVar22 = local_108;
            dVar26 = local_118;
            dVar29 = dStack_110;
          }
        }
        auVar24 = _DAT_149934d80;
        auVar19 = auVar23;
        auVar32 = auVar53;
        dVar42 = dVar34;
        dVar54 = dVar35;
        dVar30 = dVar38;
        dVar37 = dVar39;
        if (param_4 != 0) {
          lVar13 = *(longlong *)(param_4 + 0x10);
          lVar9 = lVar15 * 0x60;
          local_378 = *(double *)(lVar13 + lVar9);
          dStack_370 = ((double *)(lVar13 + lVar9))[1];
          pdVar1 = (double *)(lVar13 + 0x10 + lVar9);
          local_358 = *pdVar1;
          dStack_350 = pdVar1[1];
          pdVar1 = (double *)(lVar13 + 0x20 + lVar9);
          local_398 = *pdVar1;
          dStack_390 = pdVar1[1];
          pauVar2 = (undefined1 (*) [16])(lVar13 + 0x30 + lVar9);
          local_388 = *pauVar2;
          local_338 = *(undefined1 (*) [16])(lVar13 + 0x40 + lVar9);
          local_348 = *(undefined1 (*) [16])(lVar13 + 0x50 + lVar9);
          auVar43 = minpd(local_338,auVar53);
          auVar48 = minpd(local_348,auVar23);
          auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
          auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
          iVar10 = movmskpd((int)lVar13,auVar44);
          auVar50._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar50._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar12 = movmskpd((int)lVar9,auVar50);
          local_318._0_8_ = auVar53._0_8_;
          local_318._8_8_ = auVar53._8_8_;
          local_328._0_8_ = auVar23._0_8_;
          local_328._8_8_ = auVar23._8_8_;
          local_328 = auVar23;
          local_318 = auVar53;
          if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
            local_398 = local_398 * (double)local_318._0_8_;
            dStack_390 = dStack_390 * (double)local_318._8_8_;
            local_388._0_8_ = (double)local_388._0_8_ * (double)local_328._0_8_;
            local_388._8_8_ = *(double *)(*pauVar2 + 8) * (double)local_328._8_8_;
            dVar52 = dStack_390 * dVar34 - dVar35 * local_398;
            dVar46 = (double)local_388._0_8_ * dVar35 - dVar38 * dStack_390;
            dVar41 = local_398 * dVar38 - dVar34 * (double)local_388._0_8_;
            dVar47 = (double)local_388._8_8_ * dVar39 - dVar39 * (double)local_388._8_8_;
            dVar46 = dVar46 + dVar46;
            dVar41 = dVar41 + dVar41;
            dVar52 = dVar52 + dVar52;
            dVar47 = dVar47 + dVar47;
            local_308 = dVar39 * dVar46;
            dStack_300 = dVar39 * dVar41;
            dVar42 = dStack_370 * dVar38 * -1.0 +
                     local_358 * dVar35 + dVar34 * dStack_350 * 1.0 + dVar39 * local_378;
            dVar54 = local_378 * dVar38 * 1.0 +
                     dStack_350 * dVar35 + dVar34 * local_358 * -1.0 + dVar39 * dStack_370;
            dVar30 = dStack_350 * dVar38 * 1.0 +
                     ((dVar34 * dStack_370 * 1.0 + dVar39 * local_358) - dVar35 * local_378);
            dVar37 = local_358 * dVar38 * -1.0 +
                     ((dVar34 * local_378 * -1.0 + dVar39 * dStack_350) - dVar35 * dStack_370);
            dVar26 = dVar26 + (dVar52 * dVar35 - dVar38 * dVar41) + local_308 + local_398;
            dVar29 = dVar29 + (dVar46 * dVar38 - dVar52 * dVar34) + dStack_300 + dStack_390;
            dVar22 = dVar22 + (dVar41 * dVar34 - dVar35 * dVar46) +
                              dVar39 * dVar52 + (double)local_388._0_8_;
            dVar25 = dVar25 + (dVar47 * dVar39 - dVar47 * dVar39) +
                              dVar39 * dVar47 + (double)local_388._8_8_;
            auVar32._0_8_ = (double)local_318._0_8_ * (double)local_338._0_8_;
            auVar32._8_8_ = (double)local_318._8_8_ * (double)local_338._8_8_;
            auVar19._0_8_ = (double)local_328._0_8_ * (double)local_348._0_8_;
            auVar19._8_8_ = (double)local_328._8_8_ * (double)local_348._8_8_;
            local_368 = dVar34;
            dStack_360 = dVar39;
            local_2f8 = dVar35;
            dStack_2f0 = dVar38;
          }
          else {
            dVar54 = dVar35 + dVar35;
            dVar25 = dVar38 + dVar38;
            dVar42 = dVar34 * (dVar34 + dVar34);
            dVar30 = (dVar34 + dVar34) * dVar39;
            dVar37 = (dVar25 * dVar35 - dVar30) * (double)local_328._0_8_;
            local_1f8 = (1.0 - (dVar38 * dVar25 + dVar35 * dVar54)) * (double)local_318._0_8_;
            dStack_1f0 = (dVar54 * dVar34 + dVar25 * dVar39) * (double)local_318._0_8_;
            local_1c8 = (dVar25 * dVar35 + dVar30) * (double)local_318._8_8_;
            local_1e8 = (dVar34 * dVar25 - dVar54 * dVar39) * (double)local_318._0_8_;
            uStack_1e0 = 0;
            local_1a8 = (1.0 - (dVar42 + dVar35 * dVar54)) * (double)local_328._0_8_;
            dVar35 = (double)local_328._0_8_ * (double)local_348._0_8_;
            dVar52 = (double)local_328._8_8_ * (double)local_348._8_8_;
            local_1d8._8_8_ = (1.0 - (dVar38 * dVar25 + dVar42)) * (double)local_318._8_8_;
            local_1d8._0_8_ = (dVar54 * dVar34 - dVar25 * dVar39) * (double)local_318._8_8_;
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar37,0);
            local_1b8._0_8_ = (dVar54 * dVar39 + dVar34 * dVar25) * (double)local_328._0_8_;
            local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
            uStack_1a0 = 0;
            uStack_180 = 0x3ff0000000000000;
            dVar37 = dStack_370 + dStack_370;
            dVar38 = local_358 + local_358;
            dVar30 = local_378 * (local_378 + local_378);
            local_228 = (1.0 - (dVar30 + dStack_370 * dVar37)) * (double)local_348._0_8_;
            dVar25 = (local_378 + local_378) * dStack_350;
            dVar39 = (double)local_318._0_8_ * (double)local_338._0_8_;
            dVar34 = (double)local_318._8_8_ * (double)local_338._8_8_;
            local_278 = ((double)DAT_149934d80 - (local_358 * dVar38 + dStack_370 * dVar37)) *
                        (double)local_338._0_8_;
            dStack_270 = (dVar37 * local_378 + dVar38 * dStack_350) * (double)local_338._0_8_;
            local_248 = (dVar38 * dStack_370 + dVar25) * (double)local_338._8_8_;
            local_268 = (local_378 * dVar38 - dVar37 * dStack_350) * (double)local_338._0_8_;
            uStack_260 = 0;
            local_258._8_8_ =
                 (DAT_149934d80._8_8_ - (local_358 * dVar38 + dVar30)) * (double)local_338._8_8_;
            local_258._0_8_ = (dVar37 * local_378 - dVar38 * dStack_350) * (double)local_338._8_8_;
            uStack_240 = 0;
            local_238._8_8_ = (dVar38 * dStack_370 - dVar25) * (double)local_348._0_8_;
            local_238._0_8_ = (dVar37 * dStack_350 + local_378 * dVar38) * (double)local_348._0_8_;
            uStack_220 = 0;
            local_208 = (double)local_388._0_8_;
            uStack_200 = 0x3ff0000000000000;
            local_218 = local_398;
            dStack_210 = dStack_390;
            local_198 = dVar26;
            dStack_190 = dVar29;
            local_188 = dVar22;
            FUN_1447fea8d(&local_178);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar17._8_8_ = -(ulonglong)(0.0 <= dVar34);
            auVar17._0_8_ = -(ulonglong)(0.0 <= dVar39);
            auVar23 = blendvpd(_DAT_149936790,auVar24,auVar17);
            uVar16 = -(ulonglong)(0.0 <= dVar35);
            dVar38 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
            dVar22 = auVar23._0_8_;
            local_168 = local_168 * dVar22;
            local_170 = local_170 * dVar22;
            local_178 = local_178 * dVar22;
            dVar22 = auVar23._8_8_;
            local_148 = local_148 * dVar22;
            local_150 = local_150 * dVar22;
            local_158 = dVar22 * local_158;
            local_128 = local_128 * dVar38;
            local_130 = local_130 * dVar38;
            local_138 = dVar38 * local_138;
            FUN_14481fd10(&local_2e8);
            dVar38 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
            dVar22 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
            auVar27._0_8_ = dVar38 + dVar22;
            auVar27._8_8_ = dVar38 + dVar22;
            auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
            auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
            auVar23 = sqrtpd(auVar27,auVar27);
            auVar23 = divpd(auVar24,auVar23);
            auVar31._0_8_ = auVar23._0_8_ * local_2d8;
            auVar31._8_8_ = auVar23._8_8_ * dStack_2d0;
            auVar53 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar18);
            dVar42 = (double)((ulonglong)(local_2e8 * auVar23._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
            dVar54 = (double)((ulonglong)(dStack_2e0 * auVar23._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
            dVar25 = 0.0;
            dVar30 = auVar53._0_8_;
            dVar37 = auVar53._8_8_;
            auVar32._8_8_ = dVar34;
            auVar32._0_8_ = dVar39;
            auVar19._8_8_ = dVar52;
            auVar19._0_8_ = dVar35;
            dVar22 = local_108;
            dVar26 = local_118;
            dVar29 = dStack_110;
          }
        }
        lVar13 = *param_5;
        lVar9 = lVar15 * 0x60;
        *(double *)(lVar13 + lVar9) = dVar42;
        ((double *)(lVar13 + lVar9))[1] = dVar54;
        pdVar1 = (double *)(lVar13 + 0x10 + lVar9);
        *pdVar1 = dVar30;
        pdVar1[1] = dVar37;
        pdVar1 = (double *)(lVar13 + 0x20 + lVar9);
        *pdVar1 = dVar26;
        pdVar1[1] = dVar29;
        pdVar1 = (double *)(lVar13 + 0x30 + lVar9);
        *pdVar1 = dVar22;
        pdVar1[1] = dVar25;
        *(undefined1 (*) [16])(lVar13 + 0x40 + lVar9) = auVar32;
        *(undefined1 (*) [16])(lVar13 + 0x50 + lVar9) = auVar19;
        *(undefined1 *)(*param_3 + lVar15) = 1;
      } while ((int)local_280 != 0);
    }
    if (local_288 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a67e0 FUN_1407a67e0 body=290 status=ok
// SIG undefined FUN_1407a67e0(void)

undefined8
FUN_1407a67e0(undefined4 param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_5 + 0x48);
  *(uint *)(param_5 + 0x48) = iVar5 + 1U;
  if (*(uint *)(param_5 + 0x4c) < iVar5 + 1U) {
    FUN_1401fcbb6(param_5,iVar5);
  }
  lVar3 = *(longlong *)(param_5 + 0x40);
  if (*(longlong *)(param_5 + 0x40) == 0) {
    lVar3 = param_5;
  }
  *(undefined4 *)(lVar3 + (longlong)iVar5 * 4) = param_1;
  iVar5 = *(int *)(param_5 + 0x48);
  if (iVar5 <= param_3) {
    do {
      lVar3 = *(longlong *)(param_5 + 0x40);
      lVar4 = lVar3;
      if (lVar3 == 0) {
        lVar4 = param_5;
      }
      uVar1 = *(uint *)(lVar4 + (longlong)(iVar5 + -1) * 4);
      if ((int)uVar1 < 0) {
        return 1;
      }
      if (*(int *)(param_2 + 0xf0) <= (int)uVar1) {
        return 1;
      }
      lVar4 = *(longlong *)(param_2 + 0xe8);
      if (*(longlong *)(param_2 + 0xe8) == 0) {
        lVar4 = param_2 + 0xd8;
      }
      if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
        return 1;
      }
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x120) + (ulonglong)uVar1 * 4);
      if ((longlong)iVar2 == -1) {
        return 1;
      }
      if (*(char *)(*param_4 + (longlong)iVar2) != '\0') {
        return 1;
      }
      *(uint *)(param_5 + 0x48) = iVar5 + 1U;
      if (*(uint *)(param_5 + 0x4c) < iVar5 + 1U) {
        FUN_1401fcbb6(param_5,iVar5);
        lVar3 = *(longlong *)(param_5 + 0x40);
      }
      if (lVar3 == 0) {
        lVar3 = param_5;
      }
      *(int *)(lVar3 + (longlong)iVar5 * 4) = iVar2;
      iVar5 = *(int *)(param_5 + 0x48);
    } while (iVar5 <= param_3);
  }
  return 0;
}



// FUNCTION 1407a6902 FUN_1407a6902 body=2709 status=ok
// SIG undefined FUN_1407a6902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a6902(undefined8 *param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  char *_Str;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  size_t sVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  char *pcVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  undefined1 auStack_108 [44];
  int local_dc;
  int local_d8;
  uint local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  uint *local_b8;
  uint *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_98;
  ulonglong local_90;
  int local_88;
  char *local_80;
  int local_78;
  undefined1 local_74;
  ulonglong local_70;
  int local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar21 = DAT_14cbcd908 - _DAT_14cbcd934;
  if (iVar21 == 0 || DAT_14cbcd908 < _DAT_14cbcd934) {
    fVar31 = 0.0;
  }
  else {
    local_78 = DAT_14cb7d088;
    local_80 = DAT_14cb7d080;
    FUN_1448075d0(&local_70);
    pbVar2 = (byte *)*param_1;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar12 = &DAT_14c9a1288;
      }
      else {
        plVar12 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
        plVar17 = plVar12 + 8;
        if ((longlong *)plVar12[9] != (longlong *)0x0) {
          plVar17 = (longlong *)plVar12[9];
        }
        iVar18 = *(int *)((longlong)plVar17 +
                         (ulonglong)((int)plVar12[10] - 1U & (uint)local_70) * 4);
        if (iVar18 != -1) {
          do {
            lVar25 = *plVar12 + (longlong)iVar18 * 0x40;
            if (*(uint *)(*plVar12 + (longlong)iVar18 * 0x40) == (uint)local_70) {
              if ((((lVar25 != 0) &&
                   (puVar13 = (undefined8 *)(lVar25 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar13 != (byte *)0x0)) && ((*(byte *)*puVar13 & 0x40) == 0))
              goto LAB_1407a69db;
              break;
            }
            iVar18 = *(int *)(lVar25 + 0x38);
          } while (iVar18 != -1);
        }
      }
    }
    puVar13 = &DAT_14c9a1308;
LAB_1407a69db:
    pbVar2 = (byte *)*puVar13;
    plVar12 = &DAT_14c9a1288;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar12 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar11 = *(uint *)(plVar12 + 6);
    local_dc = iVar21;
    if (uVar11 == 0) {
      uVar22 = 1;
      uVar29 = 0;
      uVar4 = 0;
      iVar21 = 0;
    }
    else {
      puVar9 = (uint *)plVar12[5];
      if ((uint *)plVar12[5] == (uint *)0x0) {
        puVar9 = (uint *)(plVar12 + 3);
      }
      uVar4 = *puVar9;
      if (uVar4 == 0) {
        iVar21 = uVar11 + 0x1e;
        if (-1 < (int)(uVar11 - 1)) {
          iVar21 = uVar11 - 1;
        }
        uVar29 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar29;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar29) {
            fVar31 = 0.0;
            goto LAB_1407a7229;
          }
          iVar21 = iVar21 + 0x20;
          uVar4 = puVar9[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar29 = 0;
        iVar21 = 0;
      }
      uVar22 = (ulonglong)(-uVar4 & uVar4);
      uVar30 = uVar22 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar4 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if ((int)uVar11 <= (int)uVar4) {
        uVar4 = uVar11;
      }
    }
    if (uVar4 == uVar11) {
      fVar31 = 0.0;
    }
    else {
      uVar28 = 0xffffffff;
      iVar18 = 0;
      local_c8 = (ulonglong)uVar11;
      local_c0 = plVar12;
      local_b0 = (uint *)(plVar12 + 3);
      do {
        lVar25 = *local_c0 + (longlong)(int)uVar4 * 0x40;
        iVar5 = *(int *)(*local_c0 + (longlong)(int)uVar4 * 0x40);
        if (((iVar5 == 0) || (iVar10 = *(int *)(lVar25 + 4), iVar10 == 0)) ||
           (iVar5 == DAT_14c948000)) {
          local_88 = DAT_14c948620;
          local_90 = DAT_14c948618;
        }
        else {
          if ((iVar10 < 2) && (*(int *)(lVar25 + 0x24) < 1)) {
            puVar15 = (ulonglong *)(lVar25 + 8);
          }
          else {
            puVar15 = *(ulonglong **)(lVar25 + 0x18);
          }
          if (iVar10 < 1) {
            local_88 = DAT_14c948620;
            local_90 = DAT_14c948618;
          }
          else {
            local_88 = (int)puVar15[1];
            local_90 = *puVar15;
          }
        }
        local_a0 = local_90;
        local_98 = local_88;
        local_d4 = uVar28;
        FUN_1448075d0(&local_70,&local_a0);
        if (((DAT_14cb86df8 == 0) || (lVar7 = FUN_144837462(DAT_14cb86df8,&local_70), lVar7 == 0))
           || (*(char *)(lVar7 + 0x58) == '\0')) {
          lVar7 = 0;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_d8 = iVar21;
        local_a8 = uVar29;
        if (lVar7 != 0) {
          if (local_88 != 0) {
            FUN_144a78877(local_90 & 0xffffffff,local_88);
          }
          iVar21 = FUN_1407a7398(&DAT_14cbcd8b0);
          if (iVar21 != -1) {
            local_78 = DAT_14cb88980;
            local_80 = DAT_14cb88978;
            FUN_1448075d0(&local_70,&local_80);
            pbVar2 = *(byte **)(lVar25 + 0x28);
            puVar13 = &DAT_14c9a1308;
            if (pbVar2 != (byte *)0x0) {
              plVar12 = &DAT_14c9a1288;
              if ((*pbVar2 & 2) != 0) {
                plVar12 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
              }
              puVar13 = &DAT_14c9a1308;
              if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
                plVar17 = plVar12 + 8;
                if ((longlong *)plVar12[9] != (longlong *)0x0) {
                  plVar17 = (longlong *)plVar12[9];
                }
                iVar21 = *(int *)((longlong)plVar17 +
                                 (ulonglong)((int)plVar12[10] - 1U & (uint)local_70) * 4);
                puVar13 = &DAT_14c9a1308;
                if (iVar21 != -1) {
                  do {
                    lVar16 = *plVar12 + (longlong)iVar21 * 0x40;
                    if (*(uint *)(*plVar12 + (longlong)iVar21 * 0x40) == (uint)local_70) {
                      puVar13 = &DAT_14c9a1308;
                      if (lVar16 == 0) goto LAB_1407a6c95;
                      puVar14 = (undefined8 *)(lVar16 + 0x28);
                      puVar13 = &DAT_14c9a1308;
                      if ((puVar14 == (undefined8 *)0x0) ||
                         (((byte *)*puVar14 != (byte *)0x0 &&
                          (puVar13 = puVar14, (*(byte *)*puVar14 & 0x40) == 0))))
                      goto LAB_1407a6c95;
                      break;
                    }
                    iVar21 = *(int *)(lVar16 + 0x38);
                  } while (iVar21 != -1);
                  puVar13 = &DAT_14c9a1308;
                }
              }
            }
LAB_1407a6c95:
            pbVar2 = (byte *)*puVar13;
            if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
               (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) {
LAB_1407a6ca1:
              uVar30 = 0;
              uVar29 = 0;
            }
            else {
              sVar8 = strlen(_Str);
              iVar21 = (int)sVar8;
              if (iVar21 == 0) goto LAB_1407a6ca1;
              lVar16 = (longlong)iVar21;
              pcVar26 = _Str + lVar16 + -1;
              if (pcVar26 < _Str) {
                lVar20 = 0;
              }
              else {
                uVar11 = 0;
                do {
                  if (9 < (byte)(*pcVar26 - 0x30U)) break;
                  uVar11 = uVar11 + 1;
                  pcVar26 = pcVar26 + -1;
                } while (_Str <= pcVar26);
                if ((((uVar11 == 0) || (iVar21 <= (int)uVar11)) || (10 < uVar11)) ||
                   ((lVar27 = -(ulonglong)uVar11, _Str[lVar27 + lVar16 + -1] != '_' ||
                    ((uVar11 != 1 && (_Str[lVar27 + lVar16] == '0')))))) {
LAB_1407a6e24:
                  lVar20 = 0;
                }
                else {
                  lVar19 = 0;
                  do {
                    lVar20 = (longlong)_Str[lVar27 + lVar16] + lVar19 * 10;
                    lVar19 = lVar20 + -0x30;
                    lVar27 = lVar27 + 1;
                  } while (lVar27 != 0);
                  if (0x7ffffffe < lVar19) goto LAB_1407a6e24;
                  iVar21 = ~uVar11 + iVar21;
                  lVar20 = lVar20 + -0x2f;
                }
                if (iVar21 == 0) goto LAB_1407a6ca1;
              }
              local_74 = 0;
              local_80 = _Str;
              local_78 = iVar21;
              uVar11 = FUN_14001a6c0(&local_80,1);
              uVar29 = lVar20 << 0x20;
              uVar30 = (ulonglong)uVar11;
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if ((uVar29 | uVar30) == DAT_14cb88920) {
              iVar21 = *(int *)(lVar7 + 0x68);
              if ((longlong)iVar21 != 0) {
                lVar25 = *(longlong *)(lVar7 + 0x60);
                lVar7 = 0;
                do {
                  bVar3 = FUN_1407a73f8(*(longlong *)(lVar25 + lVar7) + 0x4f0,&DAT_14cbcdd98);
                  iVar18 = iVar18 + (uint)bVar3;
                  lVar7 = lVar7 + 8;
                } while ((longlong)iVar21 * 8 != lVar7);
              }
            }
            else {
              local_78 = DAT_14cb7d0a0;
              local_80 = DAT_14cb7d098;
              FUN_1448075d0(&local_70,&local_80);
              pbVar2 = *(byte **)(lVar25 + 0x28);
              puVar13 = &DAT_14c9a1308;
              if (pbVar2 != (byte *)0x0) {
                plVar12 = &DAT_14c9a1288;
                if ((*pbVar2 & 2) != 0) {
                  plVar12 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
                }
                puVar13 = &DAT_14c9a1308;
                if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
                  plVar17 = plVar12 + 8;
                  if ((longlong *)plVar12[9] != (longlong *)0x0) {
                    plVar17 = (longlong *)plVar12[9];
                  }
                  iVar21 = *(int *)((longlong)plVar17 +
                                   (ulonglong)((int)plVar12[10] - 1U & (uint)local_70) * 4);
                  puVar13 = &DAT_14c9a1308;
                  if (iVar21 != -1) {
                    do {
                      lVar25 = *plVar12 + (longlong)iVar21 * 0x40;
                      if (*(uint *)(*plVar12 + (longlong)iVar21 * 0x40) == (uint)local_70) {
                        puVar13 = &DAT_14c9a1308;
                        if (lVar25 == 0) goto LAB_1407a6f3e;
                        puVar14 = (undefined8 *)(lVar25 + 0x28);
                        puVar13 = &DAT_14c9a1308;
                        if ((puVar14 == (undefined8 *)0x0) ||
                           (((byte *)*puVar14 != (byte *)0x0 &&
                            (puVar13 = puVar14, (*(byte *)*puVar14 & 0x40) == 0))))
                        goto LAB_1407a6f3e;
                        break;
                      }
                      iVar21 = *(int *)(lVar25 + 0x38);
                    } while (iVar21 != -1);
                    puVar13 = &DAT_14c9a1308;
                  }
                }
              }
LAB_1407a6f3e:
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              pbVar2 = (byte *)*puVar13;
              plVar12 = &DAT_14c9a1288;
              if ((pbVar2 != (byte *)0x0) && (plVar12 = &DAT_14c9a1288, (*pbVar2 & 2) != 0)) {
                plVar12 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
              }
              uVar11 = *(uint *)(plVar12 + 6);
              if (uVar11 == 0) {
                uVar29 = 1;
                uVar30 = 0;
                uVar4 = 0;
                iVar21 = 0;
              }
              else {
                puVar9 = (uint *)plVar12[5];
                if ((uint *)plVar12[5] == (uint *)0x0) {
                  puVar9 = (uint *)(plVar12 + 3);
                }
                uVar4 = *puVar9;
                if (uVar4 == 0) {
                  iVar21 = uVar11 + 0x1e;
                  if (-1 < (int)(uVar11 - 1)) {
                    iVar21 = uVar11 - 1;
                  }
                  uVar30 = 0;
                  uVar29 = (ulonglong)(uint)(iVar21 >> 5);
                  if (iVar21 >> 5 < 1) {
                    uVar29 = uVar30;
                  }
                  iVar21 = 0;
                  do {
                    if (uVar29 == uVar30) goto LAB_1407a6d01;
                    iVar21 = iVar21 + 0x20;
                    uVar4 = puVar9[uVar30 + 1];
                    uVar30 = uVar30 + 1;
                  } while (uVar4 == 0);
                }
                else {
                  uVar30 = 0;
                  iVar21 = 0;
                }
                uVar29 = (ulonglong)(-uVar4 & uVar4);
                uVar1 = uVar29 * 2 + 1;
                lVar25 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                uVar4 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                if ((int)uVar11 <= (int)uVar4) {
                  uVar4 = uVar11;
                }
              }
              if (uVar4 != uVar11) {
                uVar28 = 0xffffffff;
                local_d0 = (ulonglong)uVar11;
                local_b8 = (uint *)(plVar12 + 3);
                do {
                  iVar5 = *(int *)(*plVar12 + (longlong)(int)uVar4 * 0x40);
                  if (iVar5 == 0) {
LAB_1407a72af:
                    local_68 = DAT_14c948620;
                    local_70 = DAT_14c948618;
                  }
                  else {
                    lVar25 = *plVar12 + (longlong)(int)uVar4 * 0x40;
                    iVar10 = *(int *)(lVar25 + 4);
                    if ((iVar10 == 0) || (iVar5 == DAT_14c948000)) goto LAB_1407a72af;
                    if ((iVar10 < 2) && (*(int *)(lVar25 + 0x24) < 1)) {
                      puVar15 = (ulonglong *)(lVar25 + 8);
                    }
                    else {
                      puVar15 = *(ulonglong **)(lVar25 + 0x18);
                    }
                    if (iVar10 < 1) goto LAB_1407a72af;
                    local_68 = (int)puVar15[1];
                    local_70 = *puVar15;
                  }
                  uVar6 = (uint)local_70;
                  if (local_68 != 0) {
                    uVar6 = FUN_144a78877(local_70 & 0xffffffff,local_68);
                  }
                  iVar5 = FUN_1407a7398(&DAT_14cbcd900,uVar6,&local_70);
                  uVar28 = uVar28 & ~(uint)uVar29;
                  puVar9 = (uint *)plVar12[5];
                  if ((uint *)plVar12[5] == (uint *)0x0) {
                    puVar9 = local_b8;
                  }
                  uVar11 = *(uint *)(plVar12 + 6);
                  iVar10 = (int)uVar30;
                  lVar25 = (longlong)iVar10;
                  uVar4 = puVar9[lVar25] & uVar28;
                  if (uVar4 == 0) {
                    iVar23 = uVar11 + 0x1e;
                    if (-1 < (int)(uVar11 - 1)) {
                      iVar23 = uVar11 - 1;
                    }
                    iVar23 = iVar23 >> 5;
                    iVar21 = iVar21 + 0x20;
                    iVar24 = iVar23;
                    if (iVar23 < iVar10) {
                      iVar24 = iVar10;
                    }
                    if (iVar10 < iVar23) {
                      lVar7 = 0;
                      do {
                        uVar4 = puVar9[lVar25 + lVar7 + 1];
                        if (uVar4 != 0) {
                          uVar30 = (ulonglong)(iVar10 + (int)lVar7 + 1);
                          uVar28 = 0xffffffff;
                          goto LAB_1407a7118;
                        }
                        iVar21 = iVar21 + 0x20;
                        lVar7 = lVar7 + 1;
                      } while (iVar24 - lVar25 != lVar7);
                      uVar28 = 0xffffffff;
                      iVar10 = iVar24;
                    }
                    uVar30 = (ulonglong)(iVar10 + 1);
                    uVar4 = uVar11;
                  }
                  else {
LAB_1407a7118:
                    uVar29 = (ulonglong)(-uVar4 & uVar4);
                    uVar1 = uVar29 * 2 + 1;
                    lVar25 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                      }
                    }
                    uVar4 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                    if ((int)uVar11 <= (int)uVar4) {
                      uVar4 = uVar11;
                    }
                  }
                  iVar18 = iVar18 + (uint)(iVar5 != -1);
                } while (uVar4 != (uint)local_d0);
              }
            }
          }
        }
LAB_1407a6d01:
        uVar28 = local_d4 & ~(uint)uVar22;
        puVar9 = (uint *)local_c0[5];
        if ((uint *)local_c0[5] == (uint *)0x0) {
          puVar9 = local_b0;
        }
        uVar11 = *(uint *)(local_c0 + 6);
        iVar5 = (int)local_a8;
        lVar25 = (longlong)iVar5;
        uVar4 = puVar9[lVar25] & uVar28;
        uVar29 = local_a8;
        iVar21 = local_d8;
        if (uVar4 == 0) {
          iVar10 = uVar11 + 0x1e;
          if (-1 < (int)(uVar11 - 1)) {
            iVar10 = uVar11 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar21 = local_d8 + 0x20;
          iVar23 = iVar10;
          if (iVar10 < iVar5) {
            iVar23 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar7 = 0;
            do {
              uVar4 = puVar9[lVar25 + lVar7 + 1];
              if (uVar4 != 0) {
                uVar28 = 0xffffffff;
                uVar29 = (ulonglong)(iVar5 + (int)lVar7 + 1);
                goto LAB_1407a6d88;
              }
              iVar21 = iVar21 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar23 - lVar25 != lVar7);
            uVar28 = 0xffffffff;
            iVar5 = iVar23;
          }
          uVar29 = (ulonglong)(iVar5 + 1);
          uVar4 = uVar11;
        }
        else {
LAB_1407a6d88:
          uVar22 = (ulonglong)(-uVar4 & uVar4);
          uVar30 = uVar22 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          uVar4 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if ((int)uVar11 <= (int)uVar4) {
            uVar4 = uVar11;
          }
        }
      } while (uVar4 != (uint)local_c8);
      fVar31 = (float)iVar18;
    }
LAB_1407a7229:
    fVar31 = fVar31 / (float)local_dc;
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar31);
}



// FUNCTION 1407a7398 FUN_1407a7398 body=95 status=ok
// SIG undefined FUN_1407a7398(void)

int FUN_1407a7398(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x14) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x14 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0xc + lVar4 * 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1407a73f8 FUN_1407a73f8 body=123 status=ok
// SIG undefined FUN_1407a73f8(void)

undefined2 FUN_1407a73f8(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  if (*param_1 != 0) {
    cVar1 = FUN_1407a7474(*param_1,&local_18,param_2);
    if ((((cVar1 != '\0') && (*param_1 != 0)) && (local_18 != 0)) &&
       (*param_1 == *(longlong *)(local_18 + 0x10))) {
      uVar2 = CONCAT11((char)(*(ushort *)(local_18 + 8) >> 8),
                       *(uint *)(param_1 + 1) == (uint)*(ushort *)(local_18 + 8));
      goto LAB_1407a7453;
    }
  }
  uVar2 = 0;
LAB_1407a7453:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a7474 FUN_1407a7474 body=208 status=ok
// SIG undefined FUN_1407a7474(void)

undefined8 FUN_1407a7474(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xd));
  *param_2 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == lVar1) {
          uVar6 = 0;
          if ((plVar4 == (longlong *)0x0) || (plVar4 + 1 == (longlong *)0x0)) goto LAB_1407a752b;
          lVar1 = plVar4[1];
          if (lVar1 != 0) {
            *param_2 = lVar1;
            uVar6 = 1;
            goto LAB_1407a752b;
          }
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  uVar6 = 0;
LAB_1407a752b:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xd));
  return uVar6;
}



// FUNCTION 1407a7544 FUN_1407a7544 body=78 status=ok
// SIG undefined FUN_1407a7544(void)

void FUN_1407a7544(longlong *param_1)

{
  FUN_1407a7646();
  if (((*(byte *)((longlong)param_1 + 0x4a) & 0x20) == 0) == 0 < *DAT_14cad28b0) {
    FUN_1407a7592(param_1 + 8,0 < *DAT_14cad28b0);
  }
  FUN_14048cbac(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001407a758b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xce8))(param_1);
  return;
}



// FUNCTION 1407a7592 FUN_1407a7592 body=180 status=ok
// SIG undefined FUN_1407a7592(void)

void FUN_1407a7592(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  
  cVar7 = (char)param_2;
  if (((*(byte *)(param_1 + 10) & 0x20) == 0) == (bool)cVar7) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf | cVar7 << 5;
    iVar1 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      do {
        iVar2 = *(int *)(lVar4 + 4 + lVar8);
        if ((((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar8), -1 < (int)uVar3)) &&
              ((int)uVar3 < DAT_14c9647dc)) &&
             ((plVar6 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar2)))) &&
            (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
             ((*plVar6 != 0 && (lVar5 = *(longlong *)(lVar4 + 8 + lVar8), lVar5 != 0)))))) &&
           (((*(byte *)(lVar5 + 10) & 0x20) == 0) == (bool)cVar7)) {
          FUN_1407a7592(lVar5,param_2);
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar8);
    }
  }
  return;
}



// FUNCTION 1407a7646 FUN_1407a7646 body=889 status=ok
// SIG undefined FUN_1407a7646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a7646(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  bool bVar10;
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
  lVar1 = param_1 + 0x40;
  if (param_2 == '\0') {
    if ((*(byte **)(param_1 + 0x60) != (byte *)0x0) && ((**(byte **)(param_1 + 0x60) & 1) != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1))
      {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
      FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),lVar1);
      **(byte **)(param_1 + 0x60) = **(byte **)(param_1 + 0x60) & 0xfe;
    }
  }
  else {
    lVar8 = param_1;
    if ((*(byte *)(param_1 + 0x4a) & 2) != 0) {
      for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x20)) {
        if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_1407a7756;
      }
      lVar8 = *(longlong *)(param_1 + 0xa8);
      lVar6 = lVar8;
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0xb0);
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(param_1);
        }
        lVar8 = *(longlong *)(lVar8 + 0x30);
      }
      else {
        do {
          if ((*(uint *)(lVar6 + 8) & 0x30) != 0) goto LAB_1407a7756;
          plVar2 = (longlong *)(lVar6 + 0x20);
          lVar6 = *plVar2;
        } while (*plVar2 != 0);
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
        lVar6 = DAT_14cae8b20;
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
        lVar7 = *(longlong *)(lVar8 + 0x20);
        if (lVar7 == 0) {
          lVar8 = 0;
        }
        else {
          iVar3 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar3) ||
               (lVar8 = lVar7,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
               lVar6 + 0x30)) {
              lVar8 = 0;
            }
          } while ((lVar8 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
        }
      }
      if ((*(byte *)(param_1 + 0x4a) & 4) == 0) {
        bVar10 = *(char *)(param_1 + 0x4b) != '\0';
      }
      else {
        bVar10 = true;
      }
      pbVar4 = *(byte **)(param_1 + 0x60);
      if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
        *(bool *)(param_1 + 0x4b) = bVar10;
      }
      else {
        cVar9 = *(char *)(param_1 + 0x4b);
        if (bVar10 != (cVar9 != '\0')) {
          uVar5 = *(undefined8 *)(pbVar4 + 0x28);
          FUN_1402eb48e(uVar5,lVar1);
          *(bool *)(param_1 + 0x4b) = bVar10;
          FUN_1402eb97e(uVar5,lVar1);
          cVar9 = *(char *)(param_1 + 0x4b);
        }
        if (cVar9 == '\0') {
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x24) = 0xbf800000;
        }
      }
      FUN_1402eb876(lVar1,lVar8);
      *(longlong *)(param_1 + 0x68) = param_1;
    }
  }
LAB_1407a7756:
  _DAT_14cad01b0 = param_1;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a79c0 FUN_1407a79c0 body=335 status=ok
// SIG undefined FUN_1407a79c0(void)

undefined4 *
FUN_1407a79c0(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407a7ba4(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1407a7b10(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1407a7d86(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a7b10 FUN_1407a7b10 body=147 status=ok
// SIG undefined FUN_1407a7b10(void)

void FUN_1407a7b10(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1428404a8(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1407a7b7a;
    }
  }
  uVar1 = 0;
LAB_1407a7b7a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1407a7ba4 FUN_1407a7ba4 body=482 status=ok
// SIG undefined FUN_1407a7ba4(void)

int * FUN_1407a7ba4(longlong *param_1,int *param_2)

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



// FUNCTION 1407a7d86 FUN_1407a7d86 body=679 status=ok
// SIG undefined FUN_1407a7d86(void)

void FUN_1407a7d86(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1407a7dea;
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
LAB_1407a7dea:
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
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1407a8034 FUN_1407a8034 body=57 status=ok
// SIG undefined FUN_1407a8034(void)

void FUN_1407a8034(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb225f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb225f0 = FUN_140002ddd(FUN_146439104,uVar1,L"GpsCondition_Attribute");
  }
  return;
}



// FUNCTION 1407a806e FUN_1407a806e body=52 status=ok
// SIG undefined FUN_1407a806e(void)

void FUN_1407a806e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1407a80a2(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407a80a2 FUN_1407a80a2 body=56 status=ok
// SIG undefined FUN_1407a80a2(void)

void FUN_1407a80a2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407a80da FUN_1407a80da body=40 status=ok
// SIG undefined FUN_1407a80da(void)

undefined8 FUN_1407a80da(undefined8 param_1,int param_2)

{
  FUN_1407a8102();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407a8102 FUN_1407a8102 body=232 status=ok
// SIG undefined FUN_1407a8102(void)

void FUN_1407a8102(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa286c0;
  param_1[5] = &PTR_FUN_14aa28960;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a81ea(param_1 + 0x1d,0);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x13);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1407a81ea FUN_1407a81ea body=121 status=ok
// SIG undefined FUN_1407a81ea(void)

void FUN_1407a81ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 1407a8264 FUN_1407a8264 body=25 status=ok
// SIG undefined FUN_1407a8264(void)

undefined8 FUN_1407a8264(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1407a827e FUN_1407a827e body=492 status=ok
// SIG undefined FUN_1407a827e(void)

void FUN_1407a827e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined8 **local_108;
  code *local_f8;
  longlong *local_f0;
  code *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  longlong local_a8;
  code *local_a0;
  longlong local_98;
  longlong *local_88;
  undefined4 local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x280) != 0) {
    local_98 = param_1 + 0x278;
    local_a0 = FUN_1448a986c;
    local_108 = &local_30;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    local_f8 = FUN_143cae3ae;
    local_110 = 0;
    local_f0 = &local_a8;
    local_a8 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x280),1);
    if (((DAT_14c992a90 == '\x01') && ((DAT_14c763859 & 1) != 0)) &&
       (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74))) {
      local_68 = 0;
      local_58 = &PTR_LAB_14b3eca20;
      local_78[0] = FUN_143cae5ea;
      local_50 = param_1;
      FUN_1417399ce(param_1 + 0x20,local_78,0);
      local_30 = *(undefined8 **)(param_1 + 0x20);
      if (local_30 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
        UNLOCK();
      }
      local_88 = (longlong *)0x0;
      local_80 = 1;
      FUN_144727e94(&local_a8,1,0);
      plVar2 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar2 = &local_a8;
      }
      FUN_144727e6e(plVar2,&local_30,1);
      if (local_30 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_30 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_30)(local_30,1);
        }
      }
      local_d8 = 0;
      local_c8 = &PTR_LAB_14b3eca40;
      local_e8[0] = FUN_143caef9e;
      local_c0 = param_1;
      FUN_1417399ce(param_1 + 0x30,local_e8,&local_a8);
      plVar2 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar2 = &local_a8;
      }
      FUN_144717c65(plVar2,local_80);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407a846c FUN_1407a846c body=669 status=ok
// SIG undefined FUN_1407a846c(void)

void FUN_1407a846c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  longlong local_88;
  longlong local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  lVar2 = param_1 + 0x278;
  uVar3 = *(uint *)(param_1 + 0x290);
  if ((longlong)(int)uVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x280);
    *(uint *)(param_1 + 0x280) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x284) - iVar4) < uVar3) {
      FUN_146545b64(lVar2,iVar4);
    }
    memcpy((void *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x278)),
           *(void **)(param_1 + 0x288),(longlong)(int)uVar3 << 3);
  }
  iVar4 = *(int *)(param_1 + 0x280);
  uVar6 = 0;
  if ((longlong)iVar4 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x278);
    lVar8 = 0;
    do {
      FUN_143cb3632(*(undefined8 *)(lVar9 + lVar8));
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar4 * 8 != lVar8);
    uVar6 = *(undefined4 *)(param_1 + 0x280);
  }
  local_78 = (code *)&LAB_1447ec86a;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143cae3ae;
  local_a0 = 0;
  local_98 = &local_58;
  local_80 = param_1;
  local_70 = lVar2;
  local_60 = &local_80;
  FUN_1401f8d10(L"ParallelFor Task",uVar6,1,&local_68);
  local_78 = FUN_1448ecbce;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143cae3ae;
  local_a0 = 0;
  local_98 = &local_58;
  local_80 = param_1;
  local_70 = lVar2;
  local_60 = &local_80;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x280),1,&local_68);
  iVar4 = *(int *)(param_1 + 0x280);
  if ((longlong)iVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    lVar9 = 0;
    do {
      FUN_1448c5c38(*(undefined8 *)(lVar2 + lVar9));
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar4 * 8 != lVar9);
    iVar4 = *(int *)(param_1 + 0x280);
    if ((longlong)iVar4 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x278);
      lVar9 = 0;
      do {
        lVar8 = *(longlong *)(lVar2 + lVar9);
        bVar10 = *(longlong *)(lVar8 + 0xa8) != 0;
        plVar5 = (longlong *)(lVar8 + 0xa8);
        if (!bVar10) {
          plVar5 = (longlong *)(lVar8 + 0xa0);
        }
        if (*(longlong *)(lVar8 + 0xa0 + (ulonglong)bVar10 * 8) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x228);
          if (*(char *)(lVar8 + 1) == '\x03') {
            puVar7 = (undefined8 *)**(undefined8 **)(lVar8 + 0x10);
LAB_1407a8673:
            if (puVar7 == (undefined8 *)0x0) {
LAB_1407a86bf:
              puVar7 = (undefined8 *)0x0;
            }
            else {
              LOCK();
              *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
              UNLOCK();
            }
          }
          else {
            if (lVar8 == 0) goto LAB_1407a86bf;
            puVar7 = (undefined8 *)0x0;
            if (*(char *)(lVar8 + 1) == '\x02') {
              puVar7 = *(undefined8 **)(lVar8 + 0x10);
              goto LAB_1407a8673;
            }
          }
          local_88 = *plVar5;
          if (local_88 != 0) {
            LOCK();
            *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
            UNLOCK();
          }
          FUN_14002c244(puVar7,&local_88);
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar7 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar4 * 8 != lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407a870a FUN_1407a870a body=11078 status=ok
// SIG undefined FUN_1407a870a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a870a(PSRWLOCK param_1,float param_2)

{
  float *pfVar1;
  uint *puVar2;
  ulonglong *_Src;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  PSRWLOCK pRVar7;
  DWORD DVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  DWORD dwTlsIndex;
  DWORD DVar12;
  LPVOID lpTlsValue;
  PSRWLOCK pRVar13;
  PSRWLOCK pRVar14;
  undefined8 uVar15;
  PSRWLOCK *ppRVar16;
  byte bVar17;
  int iVar18;
  PSRWLOCK pRVar19;
  PSRWLOCK pRVar20;
  PVOID pvVar21;
  PSRWLOCK pRVar22;
  uint uVar23;
  undefined4 uVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  int *piVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong *puVar31;
  PSRWLOCK pRVar32;
  PVOID pvVar33;
  ulonglong *puVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  PSRWLOCK pRVar37;
  ulonglong uVar38;
  int iVar39;
  int iVar40;
  PSRWLOCK pRVar41;
  int iVar42;
  int iVar43;
  ulonglong uVar44;
  PSRWLOCK pRVar45;
  longlong lVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_4e8 [40];
  undefined4 local_4c0;
  PSRWLOCK *local_4b8;
  PSRWLOCK local_4a8;
  PSRWLOCK local_4a0;
  PSRWLOCK local_498;
  PSRWLOCK local_490;
  PSRWLOCK local_488;
  PSRWLOCK local_480;
  ulonglong *local_478;
  PSRWLOCK local_470;
  code *local_468;
  PSRWLOCK *local_460;
  undefined1 *local_458;
  PSRWLOCK *local_450;
  undefined1 *local_448;
  longlong *local_440;
  PSRWLOCK local_438;
  undefined8 uStack_430;
  PSRWLOCK local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined8 uStack_410;
  PSRWLOCK local_408;
  undefined8 uStack_400;
  PSRWLOCK local_3f8;
  undefined8 uStack_3f0;
  PVOID local_3e8;
  char local_3e0;
  PVOID local_3d8;
  PSRWLOCK local_3c8;
  PSRWLOCK pRStack_3c0;
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined2 local_368;
  undefined8 local_364;
  char local_35c;
  ulonglong local_358;
  undefined8 local_350;
  undefined2 local_348;
  undefined7 local_340;
  undefined4 uStack_339;
  PSRWLOCK apRStack_330 [3];
  ulonglong auStack_318 [11];
  ulonglong local_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined4 local_280;
  ulonglong local_278;
  ulonglong uStack_270;
  undefined2 local_268;
  undefined8 local_264;
  char local_25c;
  ulonglong local_258;
  undefined8 local_250;
  undefined2 local_248;
  char local_240;
  ulonglong local_238;
  undefined8 local_230;
  undefined1 local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if ((((DAT_14c992a90 == '\x01') && ((DAT_14c763859 & 1) != 0)) && (param_1[6].Ptr != (PVOID)0x0))
     && ((*(byte *)((longlong)param_1[6].Ptr + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 6,0xff);
  }
  iVar40 = *(int *)((longlong)&param_1[1].Ptr + 4);
  if (((((iVar40 != 0) && (uVar30 = *(uint *)&param_1[1].Ptr, -1 < (int)uVar30)) &&
       (((int)uVar30 < DAT_14c9647dc &&
        ((plVar25 = (longlong *)
                    ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
         plVar25 != (longlong *)0x0 && ((int)plVar25[2] == iVar40)))))) &&
      ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)) &&
     ((lVar27 = *plVar25, lVar27 != 0 &&
      (((((*(longlong *)(lVar27 + 0x30) == 0 ||
          (lVar26 = *(longlong *)(*(longlong *)(lVar27 + 0x30) + 0x2b0), lVar26 == 0)) ||
         (*(longlong *)(lVar26 + 0x588) == 0)) ||
        (*(double *)(lVar27 + 0x6d0) < *(double *)(lVar27 + 0x708))) &&
       (((*(byte *)(lVar27 + 0x154) & 0x40) == 0 || (iVar40 = FUN_14490d72a(lVar27), iVar40 != 3))))
      )))) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar26 = 0;
      do {
        lVar46 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar26);
        if (*(longlong *)(lVar46 + 0x360) == lVar27) {
          if ((lVar46 != 0) && ((*(byte *)(lVar46 + 0x278) & 1) != 0)) goto LAB_1407a8891;
          break;
        }
        lVar26 = lVar26 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar26);
    }
    cVar9 = FUN_144a80e00(lVar27);
    if ((cVar9 == '\0') || (-1 < *(char *)(lVar27 + 0x155))) {
      local_3f8 = (PSRWLOCK)FUN_14001cc68(0x10,0x10);
      local_3f8->Ptr = (PVOID)0x0;
      uStack_3f0 = local_3f8;
      local_408 = (PSRWLOCK)FUN_14001cc68(0x10,0x10);
      local_408->Ptr = (PVOID)0x0;
      param_1[0x53].Ptr = &local_3f8;
      param_1[0x54].Ptr = &local_408;
      local_480 = param_1 + 0x32;
      pRStack_3c0 = (PSRWLOCK)CONCAT44(pRStack_3c0._4_4_,1);
      uStack_400 = local_408;
      local_3c8 = local_480;
      AcquireSRWLockExclusive(local_480);
      local_440 = &local_418;
      local_418 = CONCAT44(local_418._4_4_,param_2);
      local_448 = &LAB_143cae428;
      local_4a0 = param_1 + 0x14;
      local_3b8 = param_1 + 0x14;
      FUN_1448e9f46(&local_3c8);
      param_1[0x54].Ptr = (PVOID)0x0;
      while (pRVar13 = uStack_400->Ptr, pRVar13 != (PSRWLOCK)0x0) {
        pRVar13[1].Ptr = (PVOID)0x0;
        bVar47 = uStack_400 != (PSRWLOCK)0x0;
        uStack_400 = pRVar13;
        if (bVar47) {
          FUN_1400020a8();
        }
        FUN_1406c4404(param_1);
      }
      param_1[0x53].Ptr = (PVOID)0x0;
      while (pRVar13 = uStack_400->Ptr, pRVar13 != (PSRWLOCK)0x0) {
        pRVar13[1].Ptr = (PVOID)0x0;
        bVar47 = uStack_400 != (PSRWLOCK)0x0;
        uStack_400 = pRVar13;
        if (bVar47) {
          FUN_1400020a8();
        }
        FUN_1406c4164(param_1);
      }
      if ((int)pRStack_3c0 == 0) {
        ReleaseSRWLockShared(local_3c8);
      }
      else {
        ReleaseSRWLockExclusive(local_3c8);
      }
      while (uStack_400 != (PSRWLOCK)0x0) {
        uStack_400 = uStack_400->Ptr;
        FUN_1400020a8();
      }
      while (uStack_3f0 != (PSRWLOCK)0x0) {
        uStack_3f0 = uStack_3f0->Ptr;
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive(local_480);
      if ((longlong)*(int *)&param_1[0x21].Ptr != 0) {
        pRVar14 = param_1[0x20].Ptr;
        local_4a8 = pRVar14 + *(int *)&param_1[0x21].Ptr;
        pRVar13 = param_1 + 0x1b;
        local_498 = param_1 + 0x2e;
LAB_1407a90f7:
        if (*(int *)&param_1[0x15].Ptr != *(int *)((longlong)&param_1[0x1a].Ptr + 4)) {
          pRVar20 = pRVar14->Ptr;
          pRVar19 = param_1[0x1c].Ptr;
          if (param_1[0x1c].Ptr == (PSRWLOCK)0x0) {
            pRVar19 = pRVar13;
          }
          iVar40 = *(int *)((longlong)&pRVar19->Ptr +
                           (ulonglong)
                           (*(int *)&param_1[0x1d].Ptr - 1U &
                           ((uint)((ulonglong)pRVar20 >> 0x20) ^ (uint)pRVar20)) * 4);
          if (iVar40 != -1) {
            pvVar21 = local_4a0->Ptr;
            do {
              lVar27 = (longlong)iVar40 * 0x230;
              local_3c8 = *(PSRWLOCK *)((longlong)pvVar21 + lVar27);
              local_3f8 = pRVar20;
              cVar9 = FUN_144717174(&local_3c8,&local_3f8);
              pvVar21 = local_4a0->Ptr;
              if (cVar9 != '\0') {
                if (((PVOID)((longlong)pvVar21 + lVar27) != (PVOID)0x0) &&
                   ((PVOID)((longlong)pvVar21 + lVar27) != (PVOID)0xfffffffffffffff8)) {
                  pcVar4 = param_1[0x2a].Ptr;
                  if (pcVar4 != (code *)0x0) {
                    pRVar20 = param_1[0x2c].Ptr;
                    if (param_1[0x2c].Ptr == (PSRWLOCK)0x0) {
                      pRVar20 = local_498;
                    }
                    uVar15 = (**(code **)((longlong)pRVar20->Ptr + 8))();
                    (*pcVar4)(uVar15,pRVar14);
                  }
                  if (*(int *)&param_1[0x15].Ptr != *(int *)((longlong)&param_1[0x1a].Ptr + 4)) {
                    pRVar20 = pRVar14->Ptr;
                    pRVar19 = param_1[0x1c].Ptr;
                    if (param_1[0x1c].Ptr == (PSRWLOCK)0x0) {
                      pRVar19 = pRVar13;
                    }
                    uVar44 = (longlong)(int)((uint)((ulonglong)pRVar20 >> 0x20) ^ (uint)pRVar20) &
                             (longlong)*(int *)&param_1[0x1d].Ptr - 1U;
                    lVar27 = (longlong)*(int *)((longlong)&pRVar19->Ptr + uVar44 * 4);
                    if (lVar27 != -1) {
                      pvVar21 = local_4a0->Ptr;
                      lVar27 = lVar27 * 0x230;
                      local_3c8 = *(PSRWLOCK *)((longlong)pvVar21 + lVar27);
                      local_3f8 = pRVar20;
                      cVar9 = FUN_144717174(&local_3c8,&local_3f8);
                      if (cVar9 == '\0') {
                        pvVar21 = (PVOID)((longlong)pvVar21 + lVar27);
                        goto LAB_1407a92c0;
                      }
                      piVar28 = (int *)((longlong)&pRVar19->Ptr + uVar44 * 4);
                      goto LAB_1407a9248;
                    }
                  }
                }
                break;
              }
              iVar40 = *(int *)((longlong)pvVar21 + lVar27 + 0x228);
            } while (iVar40 != -1);
          }
        }
        goto LAB_1407a92a9;
      }
LAB_1407a8b09:
      if ((longlong)*(int *)&param_1[0x1f].Ptr != 0) {
        pRVar13 = param_1[0x1e].Ptr;
        local_498 = pRVar13 + *(int *)&param_1[0x1f].Ptr;
        local_470 = param_1 + 0x26;
        local_490 = param_1 + 0x16;
        local_478 = auStack_318;
        local_488 = param_1 + 0x1b;
        do {
          iVar40 = *(int *)((longlong)&pRVar13->Ptr + 4);
          if ((((iVar40 != 0) && (uVar30 = *(uint *)&pRVar13->Ptr, -1 < (int)uVar30)) &&
              ((int)uVar30 < DAT_14c9647dc)) &&
             (((lVar27 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8), lVar27 != 0
               && (*(int *)(lVar27 + 0x10) == iVar40)) &&
              ((*(uint *)(lVar27 + 8) & 0x10200000) == 0)))) {
            iVar40 = *(int *)((longlong)&param_1[0x1a].Ptr + 4);
            if (iVar40 == 0) {
              uVar30 = *(uint *)&param_1[0x15].Ptr;
              local_4a8 = (PSRWLOCK)(ulonglong)uVar30;
              uVar23 = *(uint *)((longlong)&param_1[0x15].Ptr + 4);
              *(uint *)&param_1[0x15].Ptr = uVar30 + 1;
              if (uVar23 == uVar30) {
                FUN_146545ad2(local_4a0,local_4a8);
              }
              iVar40 = *(int *)&param_1[0x19].Ptr;
              if (iVar40 == 0) {
                iVar10 = -1;
              }
              else {
                iVar10 = iVar40 + 0x1e;
                if (-1 < iVar40 + -1) {
                  iVar10 = iVar40 + -1;
                }
                iVar10 = iVar10 >> 5;
              }
              iVar42 = iVar40 + 1;
              iVar43 = iVar40 + 0x1f;
              if (-1 < iVar40) {
                iVar43 = iVar40;
              }
              if (iVar43 >> 5 == iVar10) {
                *(int *)&param_1[0x19].Ptr = iVar42;
              }
              else {
                iVar10 = *(int *)((longlong)&param_1[0x19].Ptr + 4);
                if (iVar10 <= iVar40) {
                  iVar42 = iVar40;
                  if (iVar40 + 0x20U < 0xa0) {
                    iVar10 = 0x80;
                  }
                  else {
                    uVar30 = iVar40 + 0x20U >> 5;
                    if (iVar10 + 0x1fU < 0xa0) {
                      uVar23 = 4;
                      if (4 < uVar30) {
                        uVar23 = uVar30;
                      }
                    }
                    else {
                      uVar23 = uVar30 + (uVar30 * 3 >> 3) + 0x10;
                    }
                    uVar44 = (ulonglong)(uVar23 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar11 = (uint)(uVar44 + 0xf);
                        if (uVar23 < 0x1ffd) {
                          uVar44 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar44 + 0xf >> 4]];
                        }
                        else {
                          uVar38 = (ulonglong)(uVar11 & 0xfffffff0);
                          if (uVar38 < 0x7ff1) {
                            bVar17 = (&DAT_14c841e00)[uVar11 >> 4];
                            uVar29 = 0x32;
                            if (0x32 < bVar17) {
                              uVar29 = (ulonglong)bVar17;
                            }
                            uVar36 = 0x32 - (ulonglong)bVar17;
                            do {
                              uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                              goto LAB_1407a9bd2;
                              lVar27 = uVar29 + 1 + uVar36;
                              uVar36 = uVar36 - 1;
                            } while (lVar27 != 0x33);
                          }
                          uVar44 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar44 = 0x10;
                          }
                          uVar44 = -uVar44 & (uVar38 + uVar44) - 1;
                        }
                      }
                      else {
                        uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                        iVar42 = *(int *)&param_1[0x19].Ptr;
                      }
                    }
LAB_1407a9bd2:
                    iVar18 = (int)(uVar44 >> 2);
                    iVar10 = iVar18 << 5;
                    if (iVar18 < (int)uVar30) {
                      iVar10 = -0x20;
                    }
                  }
                  *(int *)((longlong)&param_1[0x19].Ptr + 4) = iVar10;
                  FUN_1446efbd8(local_490,iVar42);
                  iVar42 = *(int *)&param_1[0x19].Ptr + 1;
                }
                iVar10 = iVar42 + 0x1f;
                if (-1 < iVar42) {
                  iVar10 = iVar42;
                }
                *(int *)&param_1[0x19].Ptr = iVar42;
                if (iVar42 % 0x20 != 0) {
                  pRVar14 = param_1[0x18].Ptr;
                  if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
                    pRVar14 = local_490;
                  }
                  bVar17 = -(char)(iVar42 % 0x20);
                  *(uint *)((longlong)&pRVar14->Ptr + (longlong)(iVar10 >> 5) * 4) =
                       (uint)(*(int *)((longlong)&pRVar14->Ptr + (longlong)(iVar10 >> 5) * 4) <<
                             (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
                }
              }
              lVar27 = (longlong)(int)local_4a8;
              pRVar14 = param_1[0x18].Ptr;
              if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
                pRVar14 = local_490;
              }
              bVar17 = (byte)iVar40 & 0x1f;
              puVar2 = (uint *)((longlong)&pRVar14->Ptr + (longlong)(iVar43 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
            }
            else {
              pvVar21 = param_1[0x14].Ptr;
              local_4a8 = (PSRWLOCK)(ulonglong)*(uint *)&param_1[0x1a].Ptr;
              lVar27 = (longlong)(int)*(uint *)&param_1[0x1a].Ptr;
              iVar10 = *(int *)((longlong)pvVar21 + lVar27 * 0x230 + 4);
              *(int *)&param_1[0x1a].Ptr = iVar10;
              iVar40 = iVar40 + -1;
              *(int *)((longlong)&param_1[0x1a].Ptr + 4) = iVar40;
              if (iVar40 != 0) {
                *(undefined4 *)((longlong)pvVar21 + (longlong)iVar10 * 0x230) = 0xffffffff;
              }
            }
            pRVar14 = param_1[0x18].Ptr;
            if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
              pRVar14 = local_490;
            }
            iVar40 = (int)local_4a8;
            iVar10 = iVar40 + 0x1f;
            if (-1 < iVar40) {
              iVar10 = iVar40;
            }
            puVar2 = (uint *)((longlong)&pRVar14->Ptr + (longlong)(iVar10 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)local_4a8 & 0x1f);
            pvVar21 = param_1[0x14].Ptr;
            lVar27 = lVar27 * 0x230;
            _Src = (ulonglong *)((longlong)pvVar21 + lVar27);
            FUN_14186b4ee(&local_3c8);
            *(PVOID *)((longlong)pvVar21 + lVar27) = pRVar13->Ptr;
            *(undefined8 *)((longlong)pvVar21 + lVar27 + 0x28) = local_3a8;
            puVar3 = (undefined4 *)((longlong)pvVar21 + lVar27 + 0x18);
            *puVar3 = (undefined4)local_3b8;
            puVar3[1] = local_3b8._4_4_;
            puVar3[2] = uStack_3b0;
            puVar3[3] = uStack_3ac;
            puVar35 = (undefined8 *)((longlong)pvVar21 + lVar27 + 8);
            *puVar35 = local_3c8;
            puVar35[1] = pRStack_3c0;
            *(undefined8 *)((longlong)pvVar21 + lVar27 + 0x30) = local_3a0;
            *(undefined8 *)((longlong)pvVar21 + lVar27 + 0x38) = uStack_398;
            local_3a0 = 0;
            uStack_398 = 0;
            *(undefined8 *)((longlong)pvVar21 + lVar27 + 0x50) = local_380;
            puVar35 = (undefined8 *)((longlong)pvVar21 + lVar27 + 0x40);
            *puVar35 = local_390;
            puVar35[1] = uStack_388;
            puVar35 = (undefined8 *)((longlong)pvVar21 + lVar27 + 0x58);
            *puVar35 = local_378;
            puVar35[1] = uStack_370;
            *(undefined2 *)((longlong)pvVar21 + lVar27 + 0x68) = local_368;
            *(char *)((longlong)pvVar21 + lVar27 + 0x74) = local_35c;
            if (local_35c == '\x01') {
              *(undefined8 *)((longlong)_Src + 0x6c) = local_364;
            }
            _Src[0xf] = 0;
            _Src[0xf] = local_358;
            local_358 = 0;
            *(undefined4 *)(_Src + 0x10) = (undefined4)local_350;
            *(undefined4 *)((longlong)_Src + 0x84) = local_350._4_4_;
            local_350 = 0;
            *(undefined2 *)(_Src + 0x11) = local_348;
            _Src[0x12] = CONCAT17((undefined1)uStack_339,local_340);
            *(undefined4 *)((longlong)_Src + 0x97) = uStack_339;
            lVar27 = 0x13;
            do {
              _Src[lVar27 + 1] = (ulonglong)(&local_3c8)[lVar27];
              (&local_3c8)[lVar27] = (PSRWLOCK)0x0;
              lVar27 = lVar27 + 1;
            } while (lVar27 != 0x16);
            puVar31 = local_478;
            puVar34 = _Src + 0x17;
            for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
              *puVar34 = *puVar31;
              puVar31 = puVar31 + 1;
              puVar34 = puVar34 + 1;
            }
            _Src[0x22] = 0;
            _Src[0x22] = local_2c0;
            local_2c0 = 0;
            *(undefined4 *)(_Src + 0x23) = (undefined4)local_2b8;
            *(undefined4 *)((longlong)_Src + 0x11c) = local_2b8._4_4_;
            local_2b8 = 0;
            _Src[0x24] = 0;
            _Src[0x24] = local_2b0;
            local_2b0 = 0;
            *(undefined4 *)(_Src + 0x25) = (undefined4)local_2a8;
            *(undefined4 *)((longlong)_Src + 300) = local_2a8._4_4_;
            local_2a8 = 0;
            _Src[0x26] = 0;
            _Src[0x26] = local_2a0;
            local_2a0 = 0;
            *(undefined4 *)(_Src + 0x27) = (undefined4)local_298;
            *(undefined4 *)((longlong)_Src + 0x13c) = local_298._4_4_;
            local_298 = 0;
            _Src[0x28] = 0;
            _Src[0x28] = local_290;
            local_290 = 0;
            *(undefined4 *)(_Src + 0x29) = (undefined4)local_288;
            *(undefined4 *)((longlong)_Src + 0x14c) = local_288._4_4_;
            local_288 = 0;
            *(undefined4 *)(_Src + 0x2a) = local_280;
            *(char *)(_Src + 0x32) = local_240;
            if (local_240 == '\x01') {
              *(undefined2 *)(_Src + 0x2d) = local_268;
              _Src[0x2b] = local_278;
              _Src[0x2c] = uStack_270;
              *(char *)((longlong)_Src + 0x174) = local_25c;
              if (local_25c == '\x01') {
                *(undefined8 *)((longlong)_Src + 0x16c) = local_264;
              }
              _Src[0x2f] = 0;
              _Src[0x2f] = local_258;
              local_258 = 0;
              *(undefined4 *)(_Src + 0x30) = (undefined4)local_250;
              *(undefined4 *)((longlong)_Src + 0x184) = local_250._4_4_;
              local_250 = 0;
              *(undefined2 *)(_Src + 0x31) = local_248;
            }
            _Src[0x33] = 0;
            _Src[0x33] = local_238;
            local_238 = 0;
            *(undefined4 *)(_Src + 0x34) = (undefined4)local_230;
            *(undefined4 *)((longlong)_Src + 0x1a4) = local_230._4_4_;
            local_230 = 0;
            *(undefined1 *)(_Src + 0x35) = local_228;
            _Src[0x36] = local_220;
            _Src[0x37] = local_218;
            _Src[0x38] = uStack_210;
            _Src[0x39] = local_208;
            _Src[0x3a] = 0;
            _Src[0x3a] = local_200;
            local_200 = 0;
            *(undefined4 *)(_Src + 0x3b) = (undefined4)local_1f8;
            *(undefined4 *)((longlong)_Src + 0x1dc) = local_1f8._4_4_;
            local_1f8 = 0;
            _Src[0x3c] = 0;
            _Src[0x3c] = local_1f0;
            local_1f0 = 0;
            *(undefined4 *)(_Src + 0x3d) = (undefined4)local_1e8;
            *(undefined4 *)((longlong)_Src + 0x1ec) = local_1e8._4_4_;
            local_1e8 = 0;
            *(undefined1 *)(_Src + 0x3e) = local_1e0;
            _Src[0x3f] = local_1d8;
            *(undefined4 *)(_Src + 0x40) = local_1d0;
            *(undefined4 *)((longlong)_Src + 0x204) = uStack_1cc;
            *(undefined4 *)(_Src + 0x41) = uStack_1c8;
            *(undefined4 *)((longlong)_Src + 0x20c) = uStack_1c4;
            _Src[0x42] = local_1c0;
            _Src[0x43] = 0;
            _Src[0x43] = local_1b8;
            local_1b8 = 0;
            *(undefined4 *)(_Src + 0x44) = (undefined4)local_1b0;
            *(undefined4 *)((longlong)_Src + 0x224) = local_1b0._4_4_;
            local_1b0 = 0;
            FUN_1413497da(&local_3c8);
            *(undefined4 *)(_Src + 0x45) = 0xffffffff;
            pRVar14 = (PSRWLOCK)*_Src;
            uVar23 = (uint)((ulonglong)pRVar14 >> 0x20) ^ (uint)pRVar14;
            uVar30 = *(int *)&param_1[0x15].Ptr - *(int *)((longlong)&param_1[0x1a].Ptr + 4);
            if ((uVar30 != 0) && (uVar30 != 1)) {
              pRVar20 = param_1[0x1c].Ptr;
              if (param_1[0x1c].Ptr == (PSRWLOCK)0x0) {
                pRVar20 = local_488;
              }
              uVar11 = *(uint *)((longlong)&pRVar20->Ptr +
                                (ulonglong)(*(int *)&param_1[0x1d].Ptr - 1U & uVar23) * 4);
              if (uVar11 != 0xffffffff) {
                pvVar21 = local_4a0->Ptr;
                do {
                  lVar27 = (longlong)(int)uVar11 * 0x230;
                  local_3c8 = *(PSRWLOCK *)((longlong)pvVar21 + lVar27);
                  local_3f8 = pRVar14;
                  cVar9 = FUN_144717174(&local_3c8,&local_3f8);
                  pvVar21 = local_4a0->Ptr;
                  if (cVar9 != '\0') {
                    FUN_1413497da((longlong)pvVar21 + lVar27 + 8);
                    memmove((void *)((longlong)pvVar21 + lVar27),_Src,0x228);
                    FUN_143cae47a(local_4a0,local_4a8);
                    local_4a8 = (PSRWLOCK)(ulonglong)uVar11;
                    goto LAB_1407a99f8;
                  }
                  uVar11 = *(uint *)((longlong)pvVar21 + lVar27 + 0x228);
                } while (uVar11 != 0xffffffff);
                uVar30 = *(int *)&param_1[0x15].Ptr - *(int *)((longlong)&param_1[0x1a].Ptr + 4);
              }
            }
            if (uVar30 < 4) {
              iVar40 = 1;
            }
            else {
              uVar44 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
              lVar27 = 0x3f;
              if (uVar44 != 0) {
                for (; uVar44 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar40 = 1 << ((byte)lVar27 & 0x1f);
            }
            if (((int)uVar30 < 1) || (iVar40 <= *(int *)&param_1[0x1d].Ptr)) {
              uVar23 = *(int *)&param_1[0x1d].Ptr - 1U & uVar23;
              *(uint *)((longlong)_Src + 0x22c) = uVar23;
              pRVar14 = param_1[0x1c].Ptr;
              if (param_1[0x1c].Ptr == (PSRWLOCK)0x0) {
                pRVar14 = local_488;
              }
              *(undefined4 *)(_Src + 0x45) =
                   *(undefined4 *)
                    ((longlong)&pRVar14->Ptr +
                    ((longlong)*(int *)&param_1[0x1d].Ptr - 1U & (longlong)(int)uVar23) * 4);
              pRVar14 = param_1[0x1c].Ptr;
              if (param_1[0x1c].Ptr == (PSRWLOCK)0x0) {
                pRVar14 = local_488;
              }
              *(int *)((longlong)&pRVar14->Ptr +
                      ((longlong)*(int *)&param_1[0x1d].Ptr - 1U & (longlong)(int)uVar23) * 4) =
                   (int)local_4a8;
            }
            else {
              *(int *)&param_1[0x1d].Ptr = iVar40;
              FUN_14186a168(local_4a0);
            }
LAB_1407a99f8:
            pcVar4 = param_1[0x22].Ptr;
            if (pcVar4 != (code *)0x0) {
              pRVar14 = param_1[0x24].Ptr;
              if (param_1[0x24].Ptr == (PSRWLOCK)0x0) {
                pRVar14 = local_470;
              }
              uVar15 = (**(code **)((longlong)pRVar14->Ptr + 8))();
              (*pcVar4)(uVar15,pRVar13);
            }
          }
          pRVar13 = pRVar13 + 1;
        } while (pRVar13 != local_498);
      }
      iVar40 = *(int *)((longlong)&param_1[0x1f].Ptr + 4);
      *(undefined4 *)&param_1[0x1f].Ptr = 0;
      if (iVar40 < 0) {
        FUN_1401f8bd0(param_1 + 0x1e,0);
      }
      iVar40 = *(int *)((longlong)&param_1[0x21].Ptr + 4);
      *(undefined4 *)&param_1[0x21].Ptr = 0;
      if (iVar40 < 0) {
        FUN_1401f8bd0(param_1 + 0x20,0);
      }
      ReleaseSRWLockExclusive(local_480);
      local_4a8 = param_1 + 0x4f;
      iVar40 = *(int *)((longlong)&param_1[0x50].Ptr + 4);
      *(undefined4 *)&param_1[0x50].Ptr = 0;
      if (iVar40 < 0) {
        FUN_1487d43b4(local_4a8,0);
      }
      local_488 = param_1 + 0x51;
      iVar40 = *(int *)((longlong)&param_1[0x52].Ptr + 4);
      *(undefined4 *)&param_1[0x52].Ptr = 0;
      if (iVar40 < 0) {
        FUN_1487d43b4(local_488,0);
      }
      local_3c8 = local_480;
      pRStack_3c0 = (PSRWLOCK)CONCAT44(pRStack_3c0._4_4_,1);
      AcquireSRWLockExclusive(local_480);
      local_3b8 = local_4a0;
      local_3f8 = (PSRWLOCK)CONCAT44(local_3f8._4_4_,param_2);
      local_450 = &local_3f8;
      local_458 = &LAB_143cae4f4;
      FUN_1448e9f46(&local_3c8);
      if ((int)pRStack_3c0 == 0) {
        ReleaseSRWLockShared(local_3c8);
      }
      else {
        ReleaseSRWLockExclusive(local_3c8);
      }
      if (DAT_14cb71cb0 == '\x01') {
        dwTlsIndex = DAT_14c7585d0;
        if (DAT_14c7585d0 == 0xffffffff) {
          dwTlsIndex = TlsAlloc();
          DVar12 = 0xffffffff;
          LOCK();
          bVar47 = DAT_14c7585d0 != 0xffffffff;
          DVar8 = dwTlsIndex;
          if (bVar47) {
            DVar12 = DAT_14c7585d0;
            DVar8 = DAT_14c7585d0;
          }
          DAT_14c7585d0 = DVar8;
          UNLOCK();
          if (bVar47) {
            TlsFree(dwTlsIndex);
            dwTlsIndex = DVar12;
          }
        }
        lpTlsValue = TlsGetValue(dwTlsIndex);
        if (lpTlsValue == (LPVOID)0x0) {
          lpTlsValue = (LPVOID)FUN_140036a08(&local_3c8);
          FUN_140fddf04(lpTlsValue);
          TlsSetValue(dwTlsIndex,lpTlsValue);
        }
        local_3f8 = (PSRWLOCK)((longlong)lpTlsValue + 0x10);
        uStack_3f0 = *(PSRWLOCK *)((longlong)lpTlsValue + 0x10);
        local_3e8 = *(PVOID *)((longlong)lpTlsValue + 0x20);
        local_3e0 = '\0';
        local_3d8 = *(PVOID *)((longlong)lpTlsValue + 0x28);
        *(PSRWLOCK **)((longlong)lpTlsValue + 0x28) = &local_3f8;
        *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
        local_408 = (PSRWLOCK)0x0;
        uStack_400 = (PSRWLOCK)0x0;
        local_418 = 0;
        uStack_410 = 0;
        local_428 = (PSRWLOCK)0x0;
        uStack_420 = 0;
        local_498 = param_1 + 0x16;
        local_438 = (PSRWLOCK)0x0;
        uStack_430 = 0;
        iVar40 = *(int *)&param_1[0x19].Ptr;
        if (iVar40 == 0) {
          uVar38 = 1;
          uVar44 = 0;
          iVar10 = 0;
          iVar42 = 0;
        }
        else {
          pRVar13 = param_1[0x18].Ptr;
          if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
            pRVar13 = local_498;
          }
          uVar30 = *(uint *)&pRVar13->Ptr;
          if (uVar30 == 0) {
            iVar10 = iVar40 + 0x1e;
            if (-1 < iVar40 + -1) {
              iVar10 = iVar40 + -1;
            }
            uVar44 = 0;
            uVar38 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar38 = uVar44;
            }
            iVar42 = 0;
            do {
              if (uVar38 == uVar44) goto LAB_1407aa302;
              iVar42 = iVar42 + 0x20;
              uVar30 = *(uint *)((longlong)&pRVar13->Ptr + uVar44 * 4 + 4);
              uVar44 = uVar44 + 1;
            } while (uVar30 == 0);
          }
          else {
            uVar44 = 0;
            iVar42 = 0;
          }
          uVar38 = (ulonglong)(-uVar30 & uVar30);
          uVar29 = uVar38 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar10 = (iVar42 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (iVar40 <= iVar10) {
            iVar10 = iVar40;
          }
        }
        if (iVar10 == iVar40) {
LAB_1407aa302:
          fVar53 = 0.0;
          fVar52 = 0.0;
          fVar54 = 0.0;
          fVar51 = 0.0;
        }
        else {
          uVar30 = 0xffffffff;
          fVar51 = 0.0;
          local_490 = (PSRWLOCK)0x0;
          fVar54 = 0.0;
          fVar52 = 0.0;
          fVar53 = 0.0;
          do {
            pRVar13 = uStack_400;
            uVar6 = uStack_410;
            uVar36 = uStack_420;
            uVar29 = uStack_430;
            pvVar21 = local_4a0->Ptr;
            lVar27 = (longlong)iVar10 * 0x230;
            iVar10 = *(int *)((longlong)pvVar21 + lVar27 + 0x44);
            if (iVar10 != 0) {
              pvVar33 = (PVOID)((longlong)pvVar21 + lVar27 + 8);
              uVar23 = *(uint *)((longlong)pvVar21 + lVar27 + 0x40);
              if (((((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) &&
                   (plVar25 = (longlong *)
                              ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                   plVar25 != (longlong *)0x0)) &&
                  (((int)plVar25[2] == iVar10 && ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)))) &&
                 (*plVar25 != 0)) {
                iVar10 = *(int *)((longlong)pvVar21 + lVar27 + 0x54);
                if (iVar10 - 2U < 2) {
                  fVar48 = *(float *)((longlong)pvVar21 + lVar27 + 0xc);
                  fVar49 = *(float *)((longlong)pvVar21 + lVar27 + 0x14);
                  fVar51 = fVar51 + fVar49;
                  if (fVar48 < 2.0) {
                    if (fVar48 < 1.0) {
                      iVar10 = (int)uStack_420;
                      uVar23 = (int)uStack_420 + 1;
                      uStack_420 = CONCAT44(uStack_420._4_4_,uVar23);
                      pRVar13 = local_428;
                      if (uStack_420._4_4_ < uVar23) {
                        FUN_14186a398(&local_428,uVar36 & 0xffffffff);
                        pRVar13 = local_428;
                      }
                      goto LAB_1407a8e8c;
                    }
                    if (*(float *)(*plVar25 + 0x858) < _DAT_14c763868) {
                      lVar26 = (longlong)(int)uStack_410;
                      uVar23 = (int)uStack_410 + 1;
                      uStack_410 = CONCAT44(uStack_410._4_4_,uVar23);
                      if (uStack_410._4_4_ < uVar23) {
                        FUN_14186a398(&local_418,uVar6 & 0xffffffff);
                      }
                      *(PVOID *)(local_418 + lVar26 * 8) = pvVar33;
                      fVar53 = fVar53 + *(float *)((longlong)pvVar21 + lVar27 + 0x14);
                    }
                    else {
                      lVar26 = (longlong)(int)uStack_400;
                      uVar23 = (int)uStack_400 + 1;
                      uStack_400 = (PSRWLOCK)CONCAT44(uStack_400._4_4_,uVar23);
                      if (uStack_400._4_4_ < uVar23) {
                        FUN_14186a398(&local_408,(ulonglong)pRVar13 & 0xffffffff);
                        local_490 = local_408;
                      }
                      local_490[lVar26].Ptr = pvVar33;
                      fVar52 = fVar52 + *(float *)((longlong)pvVar21 + lVar27 + 0x14);
                    }
                  }
                  else {
                    fVar54 = fVar54 + fVar49;
                  }
                }
                else if (iVar10 == 1) {
                  iVar10 = (int)uStack_430;
                  uVar23 = (int)uStack_430 + 1;
                  uStack_430 = CONCAT44(uStack_430._4_4_,uVar23);
                  pRVar13 = local_438;
                  if (uStack_430._4_4_ < uVar23) {
                    FUN_14186a398(&local_438,uVar29 & 0xffffffff);
                    pRVar13 = local_438;
                  }
LAB_1407a8e8c:
                  pRVar13[iVar10].Ptr = pvVar33;
                }
              }
            }
            uVar30 = uVar30 & ~(uint)uVar38;
            pRVar13 = param_1[0x18].Ptr;
            if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
              pRVar13 = local_498;
            }
            iVar43 = *(int *)&param_1[0x19].Ptr;
            iVar10 = (int)uVar44;
            lVar27 = (longlong)iVar10;
            uVar23 = *(uint *)((longlong)&pRVar13->Ptr + lVar27 * 4) & uVar30;
            if (uVar23 == 0) {
              iVar18 = iVar43 + 0x1e;
              if (-1 < iVar43 + -1) {
                iVar18 = iVar43 + -1;
              }
              iVar18 = iVar18 >> 5;
              iVar42 = iVar42 + 0x20;
              iVar39 = iVar18;
              if (iVar18 < iVar10) {
                iVar39 = iVar10;
              }
              if (iVar10 < iVar18) {
                lVar26 = 0;
                do {
                  uVar23 = *(uint *)((longlong)&pRVar13->Ptr + lVar27 * 4 + lVar26 * 4 + 4);
                  if (uVar23 != 0) {
                    uVar44 = (ulonglong)(iVar10 + (int)lVar26 + 1);
                    uVar30 = 0xffffffff;
                    goto LAB_1407a8f15;
                  }
                  iVar42 = iVar42 + 0x20;
                  lVar26 = lVar26 + 1;
                } while (iVar39 - lVar27 != lVar26);
                uVar30 = 0xffffffff;
                lVar27 = (longlong)iVar39;
              }
              uVar44 = lVar27 + 1U & 0xffffffff;
              iVar10 = iVar43;
            }
            else {
LAB_1407a8f15:
              uVar38 = (ulonglong)(-uVar23 & uVar23);
              uVar29 = uVar38 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar10 = (iVar42 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if (iVar43 <= iVar10) {
                iVar10 = iVar43;
              }
            }
          } while (iVar10 != iVar40);
        }
        pRVar13 = local_438;
        fVar48 = DAT_14c763878;
        if (DAT_14c763878 <= 0.0) {
          *(float *)&param_1[0x55].Ptr = fVar51;
        }
        else {
          fVar49 = fVar51 - *(float *)&param_1[0x55].Ptr;
          if (1e-08 <= fVar49 * fVar49) {
            fVar51 = DAT_14c763878 * param_2;
            if (1.0 <= fVar51) {
              fVar51 = 1.0;
            }
            if (fVar51 <= 0.0) {
              fVar51 = 0.0;
            }
            fVar51 = *(float *)&param_1[0x55].Ptr + fVar49 * fVar51;
          }
          *(float *)&param_1[0x55].Ptr = fVar51;
          fVar49 = *(float *)((longlong)&param_1[0x55].Ptr + 4);
          fVar50 = fVar54 - fVar49;
          if (1e-08 <= fVar50 * fVar50) {
            fVar48 = fVar48 * param_2;
            if (1.0 <= fVar48) {
              fVar48 = 1.0;
            }
            if (fVar48 <= 0.0) {
              fVar48 = 0.0;
            }
            fVar54 = fVar49 + fVar48 * fVar50;
          }
        }
        *(float *)((longlong)&param_1[0x55].Ptr + 4) = fVar54;
        fVar54 = DAT_14c76385c;
        if (fVar51 < DAT_14c76385c) {
          iVar40 = (int)uStack_430;
          lVar27 = (longlong)(int)uStack_430;
          if (1 < lVar27) {
            memset(&local_3b8,0,0x2f0);
            local_3c8 = pRVar13;
            pRStack_3c0 = pRVar13 + lVar27 + -1;
            fVar52 = logf((float)iVar40);
            local_3b8 = (PSRWLOCK)CONCAT44(local_3b8._4_4_,(int)(longlong)(fVar52 + fVar52));
            ppRVar16 = &local_3c8;
            do {
              pRVar14 = *ppRVar16;
              pRVar20 = ppRVar16[1];
              iVar40 = *(int *)(ppRVar16 + 2);
              iVar10 = (int)((ulonglong)((longlong)pRVar20 - (longlong)pRVar14) >> 3);
              uVar44 = (ulonglong)(iVar10 + 1);
              pRVar19 = pRVar14;
              pRVar13 = pRVar20;
              pRVar41 = pRVar14;
              if (iVar40 != 0) {
LAB_1407aa45d:
                if (8 < (int)(uint)uVar44) {
                  uVar30 = (uint)uVar44 >> 1;
                  pvVar21 = pRVar19[uVar30].Ptr;
                  pRVar19[uVar30].Ptr = pRVar19->Ptr;
                  pRVar19->Ptr = pvVar21;
                  pRVar22 = pRVar13 + 1;
                  pRVar14 = pRVar19;
                  do {
                    pRVar7 = pRVar14 + 1;
                    pRVar37 = pRVar14 + 1;
                    do {
                      pRVar32 = pRVar37;
                      pRVar14 = pRVar7;
                      if (pRVar13 < pRVar14) break;
                      fVar52 = *(float *)((longlong)pRVar19->Ptr + 4);
                      pfVar1 = (float *)((longlong)pRVar14->Ptr + 4);
                      pRVar7 = pRVar14 + 1;
                      pRVar37 = pRVar32 + 1;
                    } while (fVar52 < *pfVar1 || fVar52 == *pfVar1);
                    pRVar7 = pRVar22 + -2;
                    do {
                      pRVar37 = pRVar22;
                      pRVar45 = pRVar7;
                      pRVar22 = pRVar37 + -1;
                      if (pRVar22 <= pRVar19) break;
                      fVar52 = *(float *)((longlong)pRVar22->Ptr + 4);
                      pfVar1 = (float *)((longlong)pRVar19->Ptr + 4);
                      pRVar7 = pRVar45 + -1;
                    } while (fVar52 < *pfVar1 || fVar52 == *pfVar1);
                    if (pRVar22 < pRVar14) goto LAB_1407aa4f3;
                    pvVar21 = pRVar14->Ptr;
                    pRVar14->Ptr = pRVar22->Ptr;
                    pRVar22->Ptr = pvVar21;
                  } while( true );
                }
                if (pRVar19 < pRVar13) {
                  do {
                    pRVar14 = pRVar19;
                    if (pRVar19 + 1 <= pRVar13) {
                      pvVar21 = pRVar19->Ptr;
                      pRVar20 = pRVar19 + 1;
                      do {
                        pfVar1 = (float *)((longlong)pRVar20->Ptr + 4);
                        pRVar41 = pRVar20;
                        pvVar33 = pRVar20->Ptr;
                        if (*(float *)((longlong)pvVar21 + 4) < *pfVar1 ||
                            *(float *)((longlong)pvVar21 + 4) == *pfVar1) {
                          pRVar41 = pRVar14;
                          pvVar33 = pvVar21;
                        }
                        pvVar21 = pvVar33;
                        pRVar14 = pRVar41;
                        pRVar20 = pRVar20 + 1;
                      } while (pRVar20 <= pRVar13);
                    }
                    pvVar21 = pRVar14->Ptr;
                    pRVar14->Ptr = pRVar13->Ptr;
                    pRVar13->Ptr = pvVar21;
                    pRVar13 = pRVar13 + -1;
                  } while (pRVar19 < pRVar13);
                }
                goto LAB_1407aa5dd;
              }
LAB_1407aa5f2:
              iVar40 = (int)uVar44;
              if (iVar40 != 0) {
                iVar10 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
                iVar42 = iVar10;
joined_r0x0001407aa615:
                do {
                  iVar43 = iVar10 * 2 + 1;
                  if (iVar43 < iVar40) {
                    iVar18 = iVar10 * 2 + 2;
                    if ((iVar18 < iVar40) &&
                       (fVar52 = *(float *)((longlong)pRVar14[iVar18].Ptr + 4),
                       pfVar1 = (float *)((longlong)pRVar14[iVar43].Ptr + 4),
                       fVar52 < *pfVar1 || fVar52 == *pfVar1)) {
                      iVar43 = iVar18;
                    }
                    pvVar21 = pRVar14[iVar10].Ptr;
                    fVar52 = *(float *)((longlong)pvVar21 + 4);
                    pfVar1 = (float *)((longlong)pRVar14[iVar43].Ptr + 4);
                    if (*pfVar1 <= fVar52 && fVar52 != *pfVar1) {
                      pRVar14[iVar10].Ptr = pRVar14[iVar43].Ptr;
                      pRVar14[iVar43].Ptr = pvVar21;
                      iVar10 = iVar43;
                      goto joined_r0x0001407aa615;
                    }
                  }
                  bVar47 = iVar42 != 0;
                  iVar10 = iVar42 + -1;
                  iVar42 = iVar10;
                } while (bVar47);
                if (1 < iVar40) {
                  pvVar21 = pRVar14->Ptr;
                  pRVar14->Ptr = pRVar14[uVar44 - 1].Ptr;
                  pRVar14[uVar44 - 1].Ptr = pvVar21;
                  if (iVar40 != 2) {
                    do {
                      uVar38 = uVar44 - 1;
                      iVar40 = 0;
                      iVar42 = 1;
                      iVar10 = 0;
                      do {
                        iVar40 = iVar40 + 2;
                        iVar43 = iVar42;
                        if (((longlong)iVar40 < (longlong)uVar38) &&
                           (fVar52 = *(float *)((longlong)pRVar14[iVar40].Ptr + 4),
                           pfVar1 = (float *)((longlong)pRVar14[iVar42].Ptr + 4),
                           fVar52 < *pfVar1 || fVar52 == *pfVar1)) {
                          iVar43 = iVar40;
                        }
                        pvVar21 = pRVar14[iVar10].Ptr;
                        fVar52 = *(float *)((longlong)pvVar21 + 4);
                        pfVar1 = (float *)((longlong)pRVar14[iVar43].Ptr + 4);
                        if (fVar52 < *pfVar1 || fVar52 == *pfVar1) break;
                        pRVar14[iVar10].Ptr = pRVar14[iVar43].Ptr;
                        pRVar14[iVar43].Ptr = pvVar21;
                        iVar40 = iVar43 * 2;
                        iVar42 = iVar43 * 2 + 1;
                        iVar10 = iVar43;
                      } while ((longlong)iVar42 < (longlong)uVar38);
                      pvVar21 = pRVar14->Ptr;
                      pRVar14->Ptr = pRVar14[uVar44 - 2].Ptr;
                      pRVar14[uVar44 - 2].Ptr = pvVar21;
                      uVar44 = uVar38;
                    } while (2 < uVar38);
                  }
                }
              }
LAB_1407aa5dd:
              ppRVar16 = ppRVar16 + -3;
            } while (&local_3c8 <= ppRVar16);
          }
          if ((int)uStack_430 != 0) {
            fVar54 = fVar54 - fVar51;
            lVar27 = 0;
            while (lVar26 = *(longlong *)((longlong)&local_438->Ptr + lVar27),
                  0.0 < *(float *)(lVar26 + 4)) {
              if (*(int *)(lVar26 + 0x4c) == 1) {
                *(undefined4 *)(lVar26 + 0x4c) = 2;
              }
              fVar54 = fVar54 - *(float *)(lVar26 + 0xc);
              if ((fVar54 <= 0.0) ||
                 (bVar47 = (longlong)(int)uStack_430 * 8 + -8 == lVar27, lVar27 = lVar27 + 8, bVar47
                 )) break;
            }
          }
          fVar51 = 0.0;
          if (0.0 < DAT_14c763878) {
            fVar54 = 0.0 - *(float *)&param_1[0x56].Ptr;
            if (1e-08 <= fVar54 * fVar54) {
              fVar51 = DAT_14c763878 * param_2;
              if (1.0 <= fVar51) {
                fVar51 = 1.0;
              }
              if (fVar51 <= 0.0) {
                fVar51 = 0.0;
              }
              fVar51 = *(float *)&param_1[0x56].Ptr + fVar54 * fVar51;
            }
          }
          *(float *)&param_1[0x56].Ptr = fVar51;
        }
        else {
          fVar51 = fVar51 - DAT_14c76385c;
          FUN_143ca8a06(&local_428);
          fVar54 = 0.0;
          if ((0.0 < fVar51) && ((int)uStack_420 != 0)) {
            uVar44 = (ulonglong)DAT_14c763870;
            fVar48 = (float)(int)DAT_14c763870;
            lVar27 = 0;
            do {
              lVar26 = *(longlong *)((longlong)&local_428->Ptr + lVar27);
              *(ulonglong *)(lVar26 + 100) = uVar44;
              *(undefined1 *)(lVar26 + 0x6c) = 1;
              fVar54 = *(float *)(lVar26 + 0xc) * (1.0 - 1.0 / fVar48) + fVar54;
              if ((longlong)(int)uStack_420 * 8 + -8 == lVar27) break;
              lVar27 = lVar27 + 8;
            } while (fVar54 < fVar51);
          }
          if (fVar54 < fVar51) {
            FUN_143ca8a06(&local_418);
            if (fVar54 < fVar51 && (longlong)(int)uStack_410 != 0) {
              fVar53 = 1.0 - (fVar53 * (1.0 / (float)(int)DAT_14c76386c)) / (fVar51 - fVar54);
              if (1.0 <= fVar53) {
                fVar53 = 1.0;
              }
              if (fVar53 <= 0.0) {
                fVar53 = 0.0;
              }
              fVar53 = fVar53 * (float)(int)DAT_14c76386c;
              uVar30 = 1 - ((int)ROUND(-0.5 - (fVar53 + fVar53)) >> 1);
              if ((int)DAT_14c76386c < (int)uVar30) {
                uVar30 = DAT_14c76386c;
              }
              lVar27 = 0;
              do {
                lVar26 = *(longlong *)(local_418 + lVar27);
                *(ulonglong *)(lVar26 + 100) = (ulonglong)uVar30;
                *(undefined1 *)(lVar26 + 0x6c) = 1;
                fVar54 = *(float *)(lVar26 + 0xc) * (1.0 - 1.0 / (float)(int)uVar30) + fVar54;
                if ((longlong)(int)uStack_410 * 8 + -8 == lVar27) break;
                lVar27 = lVar27 + 8;
              } while (fVar54 < fVar51);
            }
          }
          if (fVar54 < fVar51) {
            FUN_143ca8a06(&local_408);
            uVar30 = DAT_14c763864;
            fVar53 = DAT_14c763860;
            FUN_143ca8a06(&local_408);
            if ((fVar54 < fVar51) && ((int)uStack_400 != 0)) {
              fVar48 = (float)(int)uVar30;
              fVar52 = 1.0 - (fVar52 * (((fVar48 + -1.0) * fVar53 + 1.0) / fVar48)) /
                             (fVar51 - fVar54);
              if (1.0 <= fVar52) {
                fVar52 = 1.0;
              }
              if (fVar52 <= 0.0) {
                fVar52 = 0.0;
              }
              uVar23 = 1 - ((int)ROUND(-0.5 - (fVar52 * fVar48 + fVar52 * fVar48)) >> 1);
              if ((int)uVar30 < (int)uVar23) {
                uVar23 = uVar30;
              }
              lVar27 = 0;
              do {
                lVar26 = *(longlong *)((longlong)&local_408->Ptr + lVar27);
                *(ulonglong *)(lVar26 + 100) = (ulonglong)uVar23 | 0x100000000;
                *(undefined1 *)(lVar26 + 0x6c) = 1;
                fVar54 = *(float *)(lVar26 + 0xc) * (-1.0 / (float)(int)uVar23 + 1.0) + fVar54;
                if ((longlong)(int)uStack_400 * 8 + -8 == lVar27) break;
                lVar27 = lVar27 + 8;
              } while (fVar54 < fVar51);
            }
          }
          fVar52 = 0.0;
          if (0.0 <= fVar51 - fVar54) {
            fVar52 = fVar51 - fVar54;
          }
          if (0.0 < DAT_14c763878) {
            fVar51 = fVar52 - *(float *)&param_1[0x56].Ptr;
            if (1e-08 <= fVar51 * fVar51) {
              fVar54 = DAT_14c763878 * param_2;
              if (1.0 <= fVar54) {
                fVar54 = 1.0;
              }
              if (fVar54 <= 0.0) {
                fVar54 = 0.0;
              }
              fVar52 = *(float *)&param_1[0x56].Ptr + fVar51 * fVar54;
            }
          }
          *(float *)&param_1[0x56].Ptr = fVar52;
        }
        if (local_3e0 == '\0') {
          local_3e0 = '\x01';
          *(int *)&local_3f8[4].Ptr = *(int *)&local_3f8[4].Ptr + -1;
          if (local_3e8 != local_3f8[2].Ptr) {
            FUN_14004673c();
          }
          local_3f8->Ptr = uStack_3f0;
          local_3f8[3].Ptr = local_3d8;
        }
      }
      else {
        lVar27 = FUN_140a88303();
        iVar40 = *(int *)(lVar27 + 0x30);
        if (0 < iVar40) {
          local_3f8 = (PSRWLOCK)0x0;
          uStack_3f0 = (PSRWLOCK)0x0;
          iVar10 = *(int *)&param_1[0x15].Ptr - *(int *)((longlong)&param_1[0x1a].Ptr + 4);
          if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar10);
          }
          if (iVar10 != 0) {
            FUN_1487d43b4();
          }
          lVar27 = FUN_140a88303();
          local_490 = param_1 + 0x16;
          uVar30 = *(uint *)&param_1[0x19].Ptr;
          pRVar13 = (PSRWLOCK)(ulonglong)uVar30;
          local_498 = pRVar13;
          if (uVar30 == 0) {
            uVar44 = 1;
            uVar38 = 0;
            iVar10 = 0;
            pRVar14 = (PSRWLOCK)0x0;
          }
          else {
            pRVar14 = param_1[0x18].Ptr;
            if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
              pRVar14 = local_490;
            }
            uVar23 = *(uint *)&pRVar14->Ptr;
            if (uVar23 == 0) {
              iVar10 = uVar30 + 0x1e;
              if (-1 < (int)(uVar30 - 1)) {
                iVar10 = uVar30 - 1;
              }
              uVar38 = 0;
              uVar44 = (ulonglong)(uint)(iVar10 >> 5);
              if (iVar10 >> 5 < 1) {
                uVar44 = uVar38;
              }
              iVar10 = 0;
              do {
                if (uVar44 == uVar38) goto LAB_1407a9d8a;
                iVar10 = iVar10 + 0x20;
                uVar23 = *(uint *)((longlong)&pRVar14->Ptr + uVar38 * 4 + 4);
                uVar38 = uVar38 + 1;
              } while (uVar23 == 0);
            }
            else {
              uVar38 = 0;
              iVar10 = 0;
            }
            uVar44 = (ulonglong)(-uVar23 & uVar23);
            uVar29 = uVar44 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            uVar23 = (iVar10 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            pRVar14 = (PSRWLOCK)(ulonglong)uVar23;
            if ((int)uVar30 <= (int)uVar23) {
              pRVar14 = pRVar13;
            }
          }
          if ((uint)pRVar14 != uVar30) {
            fVar51 = *(float *)(lVar27 + 0x34) * *(float *)(lVar27 + 0x34);
            uVar30 = 0xffffffff;
            do {
              pRVar20 = uStack_3f0;
              pvVar21 = local_4a0->Ptr;
              lVar27 = (longlong)(int)pRVar14 * 0x230;
              iVar42 = *(int *)((longlong)pvVar21 + lVar27 + 0x54);
              if (iVar42 < 2) {
                if ((iVar42 == 1) &&
                   (pfVar1 = (float *)((longlong)pvVar21 + lVar27 + 0xb8),
                   *pfVar1 <= fVar51 && fVar51 != *pfVar1)) {
                  lVar26 = (longlong)(int)uStack_3f0;
                  uVar23 = (int)uStack_3f0 + 1;
                  uStack_3f0 = (PSRWLOCK)CONCAT44(uStack_3f0._4_4_,uVar23);
                  if (uStack_3f0._4_4_ < uVar23) {
                    FUN_146545b64(&local_3f8,(ulonglong)pRVar20 & 0xffffffff);
                  }
                  local_3f8[lVar26].Ptr = (PVOID)((longlong)pvVar21 + lVar27 + 8);
                  pRVar13 = (PSRWLOCK)(ulonglong)*(uint *)&param_1[0x19].Ptr;
                }
              }
              else {
                iVar40 = iVar40 + -1;
                if (iVar40 == 0) goto LAB_1407aa17f;
              }
              uVar30 = uVar30 & ~(uint)uVar44;
              pRVar14 = param_1[0x18].Ptr;
              if (param_1[0x18].Ptr == (PSRWLOCK)0x0) {
                pRVar14 = local_490;
              }
              iVar43 = (int)uVar38;
              lVar27 = (longlong)iVar43;
              uVar23 = *(uint *)((longlong)&pRVar14->Ptr + lVar27 * 4) & uVar30;
              iVar42 = (int)pRVar13;
              if (uVar23 == 0) {
                iVar18 = iVar42 + 0x1e;
                if (-1 < iVar42 + -1) {
                  iVar18 = iVar42 + -1;
                }
                iVar18 = iVar18 >> 5;
                iVar10 = iVar10 + 0x20;
                iVar39 = iVar18;
                if (iVar18 < iVar43) {
                  iVar39 = iVar43;
                }
                if (iVar43 < iVar18) {
                  lVar26 = 0;
                  do {
                    uVar23 = *(uint *)((longlong)&pRVar14->Ptr + lVar27 * 4 + lVar26 * 4 + 4);
                    if (uVar23 != 0) {
                      uVar38 = (ulonglong)(iVar43 + (int)lVar26 + 1);
                      uVar30 = 0xffffffff;
                      goto LAB_1407aa280;
                    }
                    iVar10 = iVar10 + 0x20;
                    lVar26 = lVar26 + 1;
                  } while (iVar39 - lVar27 != lVar26);
                  uVar30 = 0xffffffff;
                  lVar27 = (longlong)iVar39;
                }
                uVar38 = lVar27 + 1U & 0xffffffff;
                pRVar14 = pRVar13;
              }
              else {
LAB_1407aa280:
                uVar44 = (ulonglong)(-uVar23 & uVar23);
                uVar29 = uVar44 * 2 + 1;
                lVar27 = 0x3f;
                if (uVar29 != 0) {
                  for (; uVar29 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                uVar23 = (iVar10 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                pRVar14 = (PSRWLOCK)(ulonglong)uVar23;
                if (iVar42 <= (int)uVar23) {
                  pRVar14 = pRVar13;
                }
              }
            } while ((int)pRVar14 != (int)local_498);
          }
LAB_1407a9d8a:
          pRVar13 = local_3f8;
          iVar10 = (int)uStack_3f0;
          uVar44 = (ulonglong)uStack_3f0 & 0xffffffff;
          if (uVar44 != 0) {
            if (1 < (int)uStack_3f0) {
              memset(&local_3b8,0,0x2f0);
              local_3c8 = pRVar13;
              pRStack_3c0 = pRVar13 + (uVar44 - 1);
              fVar51 = logf((float)iVar10);
              local_3b8 = (PSRWLOCK)CONCAT44(local_3b8._4_4_,(int)(longlong)(fVar51 + fVar51));
              ppRVar16 = &local_3c8;
              do {
                pRVar14 = *ppRVar16;
                pRVar20 = ppRVar16[1];
                iVar10 = *(int *)(ppRVar16 + 2);
                iVar42 = (int)((ulonglong)((longlong)pRVar20 - (longlong)pRVar14) >> 3);
                uVar44 = (ulonglong)(iVar42 + 1);
                pRVar13 = pRVar20;
                pRVar19 = pRVar14;
                if (iVar10 != 0) {
LAB_1407a9e1e:
                  if (8 < (int)(uint)uVar44) {
                    uVar30 = (uint)uVar44 >> 1;
                    pvVar21 = pRVar14[uVar30].Ptr;
                    pRVar14[uVar30].Ptr = pRVar14->Ptr;
                    pRVar14->Ptr = pvVar21;
                    pRVar41 = pRVar13 + 1;
                    pRVar22 = pRVar14;
                    do {
                      pRVar7 = pRVar22 + 1;
                      pRVar37 = pRVar22 + 1;
                      do {
                        pRVar32 = pRVar37;
                        pRVar22 = pRVar7;
                        if (pRVar13 < pRVar22) break;
                        fVar51 = *(float *)((longlong)pRVar22->Ptr + 0xb0);
                        pfVar1 = (float *)((longlong)pRVar14->Ptr + 0xb0);
                        pRVar7 = pRVar22 + 1;
                        pRVar37 = pRVar32 + 1;
                      } while (fVar51 < *pfVar1 || fVar51 == *pfVar1);
                      pRVar7 = pRVar41 + -2;
                      do {
                        pRVar37 = pRVar41;
                        pRVar45 = pRVar7;
                        pRVar41 = pRVar37 + -1;
                        if (pRVar41 <= pRVar14) break;
                        fVar51 = *(float *)((longlong)pRVar14->Ptr + 0xb0);
                        pfVar1 = (float *)((longlong)pRVar41->Ptr + 0xb0);
                        pRVar7 = pRVar45 + -1;
                      } while (fVar51 < *pfVar1 || fVar51 == *pfVar1);
                      if (pRVar41 < pRVar22) goto LAB_1407a9ec0;
                      pvVar21 = pRVar22->Ptr;
                      pRVar22->Ptr = pRVar41->Ptr;
                      pRVar41->Ptr = pvVar21;
                    } while( true );
                  }
                  if (pRVar14 < pRVar13) {
                    do {
                      pRVar20 = pRVar14;
                      if (pRVar14 + 1 <= pRVar13) {
                        pvVar21 = pRVar14->Ptr;
                        pRVar19 = pRVar14 + 1;
                        do {
                          fVar51 = *(float *)((longlong)pRVar19->Ptr + 0xb0);
                          pRVar41 = pRVar19;
                          pvVar33 = pRVar19->Ptr;
                          if (fVar51 < *(float *)((longlong)pvVar21 + 0xb0) ||
                              fVar51 == *(float *)((longlong)pvVar21 + 0xb0)) {
                            pRVar41 = pRVar20;
                            pvVar33 = pvVar21;
                          }
                          pvVar21 = pvVar33;
                          pRVar20 = pRVar41;
                          pRVar19 = pRVar19 + 1;
                        } while (pRVar19 <= pRVar13);
                      }
                      pvVar21 = pRVar20->Ptr;
                      pRVar20->Ptr = pRVar13->Ptr;
                      pRVar13->Ptr = pvVar21;
                      pRVar13 = pRVar13 + -1;
                    } while (pRVar14 < pRVar13);
                  }
                  goto LAB_1407aa11c;
                }
LAB_1407a9f54:
                iVar10 = (int)uVar44;
                if (iVar10 != 0) {
                  iVar42 = (iVar42 - (iVar42 + -1 >> 0x1f)) + -1 >> 1;
                  iVar43 = iVar42;
joined_r0x0001407a9f77:
                  do {
                    iVar18 = iVar42 * 2 + 1;
                    if (iVar18 < iVar10) {
                      iVar39 = iVar42 * 2 + 2;
                      if ((iVar39 < iVar10) &&
                         (fVar51 = *(float *)((longlong)pRVar14[iVar18].Ptr + 0xb0),
                         pfVar1 = (float *)((longlong)pRVar14[iVar39].Ptr + 0xb0),
                         fVar51 < *pfVar1 || fVar51 == *pfVar1)) {
                        iVar18 = iVar39;
                      }
                      pvVar21 = pRVar14[iVar42].Ptr;
                      fVar51 = *(float *)((longlong)pRVar14[iVar18].Ptr + 0xb0);
                      pfVar1 = (float *)((longlong)pvVar21 + 0xb0);
                      if (*pfVar1 <= fVar51 && fVar51 != *pfVar1) {
                        pRVar14[iVar42].Ptr = pRVar14[iVar18].Ptr;
                        pRVar14[iVar18].Ptr = pvVar21;
                        iVar42 = iVar18;
                        goto joined_r0x0001407a9f77;
                      }
                    }
                    bVar47 = iVar43 != 0;
                    iVar42 = iVar43 + -1;
                    iVar43 = iVar42;
                  } while (bVar47);
                  if (1 < iVar10) {
                    pvVar21 = pRVar14->Ptr;
                    pRVar14->Ptr = pRVar14[uVar44 - 1].Ptr;
                    pRVar14[uVar44 - 1].Ptr = pvVar21;
                    if (iVar10 != 2) {
                      do {
                        uVar38 = uVar44 - 1;
                        iVar10 = 0;
                        iVar43 = 1;
                        iVar42 = 0;
                        do {
                          iVar10 = iVar10 + 2;
                          iVar18 = iVar43;
                          if (((longlong)iVar10 < (longlong)uVar38) &&
                             (fVar51 = *(float *)((longlong)pRVar14[iVar43].Ptr + 0xb0),
                             pfVar1 = (float *)((longlong)pRVar14[iVar10].Ptr + 0xb0),
                             fVar51 < *pfVar1 || fVar51 == *pfVar1)) {
                            iVar18 = iVar10;
                          }
                          pvVar21 = pRVar14[iVar42].Ptr;
                          fVar51 = *(float *)((longlong)pRVar14[iVar18].Ptr + 0xb0);
                          pfVar1 = (float *)((longlong)pvVar21 + 0xb0);
                          if (fVar51 < *pfVar1 || fVar51 == *pfVar1) break;
                          pRVar14[iVar42].Ptr = pRVar14[iVar18].Ptr;
                          pRVar14[iVar18].Ptr = pvVar21;
                          iVar10 = iVar18 * 2;
                          iVar43 = iVar18 * 2 + 1;
                          iVar42 = iVar18;
                        } while ((longlong)iVar43 < (longlong)uVar38);
                        pvVar21 = pRVar14->Ptr;
                        pRVar14->Ptr = pRVar14[uVar44 - 2].Ptr;
                        pRVar14[uVar44 - 2].Ptr = pvVar21;
                        uVar44 = uVar38;
                      } while (2 < uVar38);
                    }
                  }
                }
LAB_1407aa11c:
                ppRVar16 = ppRVar16 + -3;
              } while (&local_3c8 <= ppRVar16);
            }
            if ((int)uStack_3f0 != 0) {
              lVar27 = 0;
              do {
                iVar40 = iVar40 + -1;
                lVar26 = *(longlong *)((longlong)&local_3f8->Ptr + lVar27);
                if (*(int *)(lVar26 + 0x4c) == 1) {
                  *(undefined4 *)(lVar26 + 0x4c) = 2;
                }
              } while ((iVar40 != 0) &&
                      (bVar47 = (longlong)(int)uStack_3f0 * 8 + -8 != lVar27, lVar27 = lVar27 + 8,
                      bVar47));
            }
          }
LAB_1407aa17f:
          if (local_3f8 != (PSRWLOCK)0x0) {
            FUN_1400020a8();
          }
        }
      }
      local_3f8 = (PSRWLOCK)FUN_14001cc68(0x10,0x10);
      local_3f8->Ptr = (PVOID)0x0;
      local_3c8 = local_480;
      pRStack_3c0 = (PSRWLOCK)CONCAT44(pRStack_3c0._4_4_,1);
      uStack_3f0 = local_3f8;
      AcquireSRWLockExclusive(local_480);
      local_3b8 = local_4a0;
      local_408 = (PSRWLOCK)CONCAT44(local_408._4_4_,param_2);
      uStack_400 = (PSRWLOCK)&local_3f8;
      local_460 = &local_408;
      local_468 = FUN_143cae500;
      FUN_1448e9f46(&local_3c8);
      while (pRVar13 = uStack_3f0->Ptr, pRVar13 != (PSRWLOCK)0x0) {
        pvVar21 = pRVar13[1].Ptr;
        pRVar13[1].Ptr = (PVOID)0x0;
        bVar47 = uStack_3f0 != (PSRWLOCK)0x0;
        uStack_3f0 = pRVar13;
        if (bVar47) {
          FUN_1400020a8();
        }
        if (((*(longlong *)((longlong)pvVar21 + 0xc0) == 0) ||
            ((*(byte *)(*(longlong *)((longlong)pvVar21 + 0xc0) + 0x31) & 1) == 0)) &&
           (1 < *(int *)((longlong)pvVar21 + 0x4c))) {
          iVar40 = *(int *)&param_1[0x52].Ptr;
          *(uint *)&param_1[0x52].Ptr = iVar40 + 1U;
          pRVar13 = local_488;
          if (*(uint *)((longlong)&param_1[0x52].Ptr + 4) < iVar40 + 1U) {
LAB_1407aac3e:
            FUN_146545b64(pRVar13,iVar40);
          }
        }
        else {
          iVar40 = *(int *)&param_1[0x50].Ptr;
          *(uint *)&param_1[0x50].Ptr = iVar40 + 1U;
          pRVar13 = local_4a8;
          if (*(uint *)((longlong)&param_1[0x50].Ptr + 4) < iVar40 + 1U) goto LAB_1407aac3e;
        }
        *(PVOID *)((longlong)pRVar13->Ptr + (longlong)iVar40 * 8) = pvVar21;
      }
      if ((int)pRStack_3c0 == 0) {
        ReleaseSRWLockShared(local_3c8);
      }
      else {
        ReleaseSRWLockExclusive(local_3c8);
      }
      while (uStack_3f0 != (PSRWLOCK)0x0) {
        uStack_3f0 = uStack_3f0->Ptr;
        FUN_1400020a8();
      }
      if (*(int *)&param_1[0x52].Ptr != 0) {
        pRStack_3c0 = (PSRWLOCK)FUN_143cb2bda;
        local_3b8 = local_488;
        local_3f8 = (PSRWLOCK)0x0;
        uStack_3f0 = (PSRWLOCK)0x0;
        local_408 = (PSRWLOCK)FUN_143cae3ae;
        local_4b8 = &local_3f8;
        local_4c0 = 0;
        uStack_400 = (PSRWLOCK)&local_3c8;
        local_3c8 = param_1;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)&param_1[0x52].Ptr,1);
        iVar40 = *(int *)&param_1[0x52].Ptr;
        uVar24 = 0;
        if ((longlong)iVar40 != 0) {
          pvVar21 = param_1[0x51].Ptr;
          lVar27 = 0;
          do {
            FUN_143cb306e(*(undefined8 *)((longlong)pvVar21 + lVar27));
            lVar27 = lVar27 + 8;
          } while ((longlong)iVar40 * 8 != lVar27);
          uVar24 = *(undefined4 *)&param_1[0x52].Ptr;
        }
        pRStack_3c0 = (PSRWLOCK)FUN_1402513da;
        local_3b8 = local_488;
        local_3f8 = (PSRWLOCK)0x0;
        uStack_3f0 = (PSRWLOCK)((ulonglong)uStack_3f0 & 0xffffffff00000000);
        local_408 = (PSRWLOCK)FUN_143cae3ae;
        local_4b8 = &local_3f8;
        local_4c0 = 0;
        uStack_400 = (PSRWLOCK)&local_3c8;
        local_3c8 = param_1;
        FUN_1401f8d10(L"ParallelFor Task",uVar24,1);
        iVar40 = *(int *)&param_1[0x52].Ptr;
        if ((longlong)iVar40 != 0) {
          pvVar21 = param_1[0x51].Ptr;
          lVar27 = 0;
          do {
            FUN_1448edbba(*(undefined8 *)((longlong)pvVar21 + lVar27));
            lVar27 = lVar27 + 8;
          } while ((longlong)iVar40 * 8 != lVar27);
        }
      }
      pRStack_3c0 = (PSRWLOCK)FUN_143cb2bda;
      local_3b8 = local_4a8;
      local_3f8 = (PSRWLOCK)0x0;
      iVar10 = 0;
      uStack_3f0 = (PSRWLOCK)((ulonglong)uStack_3f0 & 0xffffffff00000000);
      local_408 = (PSRWLOCK)FUN_143cae3ae;
      local_4b8 = &local_3f8;
      local_4c0 = 0;
      uStack_400 = (PSRWLOCK)&local_3c8;
      local_3c8 = param_1;
      FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)&param_1[0x50].Ptr,1);
      iVar40 = *(int *)&param_1[0x50].Ptr;
      if ((longlong)iVar40 != 0) {
        pvVar21 = param_1[0x4f].Ptr;
        lVar27 = 0;
        do {
          FUN_143cb306e(*(undefined8 *)((longlong)pvVar21 + lVar27));
          lVar27 = lVar27 + 8;
        } while ((longlong)iVar40 * 8 != lVar27);
        uVar30 = *(uint *)&param_1[0x50].Ptr;
        uVar44 = (ulonglong)(int)uVar30;
        if (uVar44 == 0) {
          iVar10 = 0;
        }
        else {
          plVar25 = local_4a8->Ptr;
          lVar27 = *plVar25;
          bVar47 = true;
          if ((((lVar27 != 0) && (*(int *)(lVar27 + 0x3c) != 0)) &&
              ((uVar23 = *(uint *)(lVar27 + 0x38), -1 < (int)uVar23 &&
               (((int)uVar23 < DAT_14c9647dc &&
                (lVar26 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8),
                lVar26 != 0)))))) && (*(int *)(lVar26 + 0x10) == *(int *)(lVar27 + 0x3c))) {
            bVar47 = (*(uint *)(lVar26 + 8) & 0x10200000) != 0;
          }
          iVar10 = 0;
          uVar38 = 0;
          lVar27 = DAT_14c9647c8;
          iVar40 = DAT_14c9647dc;
          do {
            while( true ) {
              iVar42 = (int)uVar38;
              uVar38 = (ulonglong)(iVar42 + 1U);
              if ((int)(iVar42 + 1U) < (int)uVar30) break;
              if (bVar47 != false) goto LAB_1407ab00b;
              bVar5 = false;
LAB_1407aafcd:
              iVar43 = (int)uVar38 - iVar42;
              if (iVar10 != iVar42) {
                memmove(plVar25 + iVar10,plVar25 + iVar42,(longlong)iVar43 << 3);
                lVar27 = DAT_14c9647c8;
                iVar40 = DAT_14c9647dc;
              }
              iVar10 = iVar10 + iVar43;
              bVar47 = true;
              if (!bVar5) goto LAB_1407ab00b;
            }
            uVar38 = (longlong)iVar42 + 1;
            bVar5 = true;
            do {
              lVar26 = plVar25[uVar38];
              if (lVar26 == 0) {
                if (bVar47 == false) goto LAB_1407aafcd;
              }
              else if ((((*(int *)(lVar26 + 0x3c) == 0) ||
                        (uVar23 = *(uint *)(lVar26 + 0x38), (int)uVar23 < 0)) ||
                       (iVar40 <= (int)uVar23)) ||
                      ((lVar46 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                                 *(longlong *)(lVar27 + (ulonglong)(uVar23 >> 0x10) * 8),
                       lVar46 == 0 || (*(int *)(lVar46 + 0x10) != *(int *)(lVar26 + 0x3c))))) {
                if (bVar47 == false) goto LAB_1407aafb2;
              }
              else if (bVar47 == ((*(uint *)(lVar46 + 8) & 0x10200000) == 0)) goto LAB_1407aafb2;
              uVar38 = uVar38 + 1;
              bVar5 = (longlong)uVar38 < (longlong)uVar44;
            } while (uVar38 != uVar44);
            uVar38 = (ulonglong)uVar30;
LAB_1407aafb2:
            if (bVar47 == false) goto LAB_1407aafcd;
            bVar47 = false;
          } while (bVar5);
LAB_1407ab00b:
          *(int *)&param_1[0x50].Ptr = iVar10;
        }
      }
      iVar40 = *(int *)((longlong)&param_1[1].Ptr + 4);
      if (((iVar40 != 0) && (uVar30 = *(uint *)&param_1[1].Ptr, -1 < (int)uVar30)) &&
         (((int)uVar30 < DAT_14c9647dc &&
          ((((plVar25 = (longlong *)
                        ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
             plVar25 != (longlong *)0x0 && ((int)plVar25[2] == iVar40)) &&
            ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)) && ((*plVar25 != 0 && (iVar10 != 0))))))))
      {
        pvVar21 = param_1[0x4f].Ptr;
        lVar27 = 0;
        do {
          lVar26 = *(longlong *)((longlong)pvVar21 + lVar27);
          FUN_143cb3a22(lVar26,param_1);
          bVar47 = *(longlong *)(lVar26 + 0xa0) != 0;
          plVar25 = (longlong *)(lVar26 + 0xa0);
          if (!bVar47) {
            plVar25 = (longlong *)(lVar26 + 0x98);
          }
          pRVar13 = *(PSRWLOCK *)(lVar26 + 0x98 + (ulonglong)bVar47 * 8);
          if (pRVar13 != (PSRWLOCK)0x0) {
            pvVar33 = param_1[0x3e].Ptr;
            if (*(char *)((longlong)pvVar33 + 1) == '\x03') {
              puVar35 = (undefined8 *)**(undefined8 **)((longlong)pvVar33 + 0x10);
LAB_1407ab0f2:
              if (puVar35 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar35 + 1) = *(int *)(puVar35 + 1) + 1;
                UNLOCK();
                local_3c8 = (PSRWLOCK)*plVar25;
                if (local_3c8 != (PSRWLOCK)0x0) {
                  LOCK();
                  *(int *)&local_3c8[1].Ptr = *(int *)&local_3c8[1].Ptr + 1;
                  UNLOCK();
                }
                FUN_14002c244(puVar35,&local_3c8);
                LOCK();
                piVar28 = (int *)(puVar35 + 1);
                *piVar28 = *piVar28 + -1;
                UNLOCK();
                if (*piVar28 == 0) {
                  (**(code **)*puVar35)(puVar35,1);
                }
                goto LAB_1407ab120;
              }
            }
            else if ((pvVar33 != (PVOID)0x0) && (*(char *)((longlong)pvVar33 + 1) == '\x02')) {
              puVar35 = *(undefined8 **)((longlong)pvVar33 + 0x10);
              goto LAB_1407ab0f2;
            }
            LOCK();
            *(int *)&pRVar13[1].Ptr = *(int *)&pRVar13[1].Ptr + 1;
            UNLOCK();
            local_3c8 = pRVar13;
            FUN_14002c244(0,&local_3c8);
          }
LAB_1407ab120:
          lVar27 = lVar27 + 8;
        } while ((longlong)iVar10 * 8 != lVar27);
        *(undefined1 *)&param_1[0x39].Ptr = 1;
      }
    }
  }
LAB_1407a8891:
  if ((local_c0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    pvVar21 = local_4a0->Ptr;
    lVar27 = lVar27 * 0x230;
    local_3c8 = *(PSRWLOCK *)((longlong)pvVar21 + lVar27);
    local_3f8 = pRVar20;
    cVar9 = FUN_144717174(&local_3c8,&local_3f8);
    pvVar21 = (PVOID)((longlong)pvVar21 + lVar27);
    if (cVar9 != '\0') break;
LAB_1407a92c0:
    pvVar33 = pvVar21;
    lVar27 = (longlong)*(int *)((longlong)pvVar33 + 0x228);
    if (lVar27 == -1) goto LAB_1407a92a9;
  }
  piVar28 = (int *)((longlong)pvVar33 + 0x228);
LAB_1407a9248:
  pRVar20 = local_4a0;
  iVar40 = *piVar28;
  lVar27 = (longlong)iVar40 * 0x230;
  pRVar19 = param_1[0x1c].Ptr;
  if (param_1[0x1c].Ptr == (PSRWLOCK)0x0) {
    pRVar19 = pRVar13;
  }
  pvVar21 = param_1[0x14].Ptr;
  lVar26 = (longlong)*(int *)((longlong)pvVar21 + lVar27 + 0x22c);
  iVar10 = *(int *)((longlong)&pRVar19->Ptr + lVar26 * 4);
  if (iVar10 == iVar40) {
    piVar28 = (int *)((longlong)&pRVar19->Ptr + lVar26 * 4);
  }
  else {
    do {
      piVar28 = (int *)((longlong)pvVar21 + (longlong)iVar10 * 0x230 + 0x228);
      iVar10 = *piVar28;
    } while (iVar10 != iVar40);
  }
  *piVar28 = *(int *)((longlong)pvVar21 + lVar27 + 0x228);
  FUN_1413497da((longlong)local_4a0->Ptr + lVar27 + 8);
  FUN_143cae47a(pRVar20,iVar40);
LAB_1407a92a9:
  pRVar14 = pRVar14 + 1;
  if (pRVar14 == local_4a8) goto LAB_1407a8b09;
  goto LAB_1407a90f7;
LAB_1407aa4f3:
  pvVar21 = pRVar19->Ptr;
  pRVar19->Ptr = pRVar22->Ptr;
  pRVar22->Ptr = pvVar21;
  iVar40 = iVar40 + -1;
  pRVar37 = pRVar37 + -2;
  if ((longlong)pRVar45 - (longlong)pRVar41 < (longlong)pRVar20 - (longlong)pRVar32) {
    if (pRVar14 < pRVar13) {
      *ppRVar16 = pRVar14;
      ppRVar16[1] = pRVar13;
      *(int *)(ppRVar16 + 2) = iVar40;
      ppRVar16 = ppRVar16 + 3;
    }
    pRVar32 = pRVar19;
    pRVar14 = pRVar19;
    pRVar13 = pRVar37;
    pRVar20 = pRVar45;
    if (pRVar22 <= pRVar19 + 1) goto LAB_1407aa5dd;
  }
  else {
    if (pRVar19 + 1 < pRVar22) {
      *ppRVar16 = pRVar19;
      ppRVar16[1] = pRVar37;
      *(int *)(ppRVar16 + 2) = iVar40;
      ppRVar16 = ppRVar16 + 3;
    }
    pRVar20 = pRVar13;
    if (pRVar13 <= pRVar14) goto LAB_1407aa5dd;
  }
  iVar10 = (int)((ulonglong)((longlong)pRVar20 - (longlong)pRVar32) >> 3);
  uVar44 = (ulonglong)(iVar10 + 1);
  pRVar19 = pRVar14;
  pRVar41 = pRVar32;
  if (iVar40 == 0) goto LAB_1407aa5f2;
  goto LAB_1407aa45d;
LAB_1407a9ec0:
  pvVar21 = pRVar14->Ptr;
  pRVar14->Ptr = pRVar41->Ptr;
  pRVar41->Ptr = pvVar21;
  iVar10 = iVar10 + -1;
  pRVar37 = pRVar37 + -2;
  if ((longlong)pRVar45 - (longlong)pRVar19 < (longlong)pRVar20 - (longlong)pRVar32) {
    if (pRVar22 < pRVar13) {
      *ppRVar16 = pRVar22;
      ppRVar16[1] = pRVar13;
      *(int *)(ppRVar16 + 2) = iVar10;
      ppRVar16 = ppRVar16 + 3;
    }
    pRVar32 = pRVar14;
    pRVar20 = pRVar45;
    if (pRVar41 <= pRVar14 + 1) goto LAB_1407aa11c;
  }
  else {
    if (pRVar14 + 1 < pRVar41) {
      *ppRVar16 = pRVar14;
      ppRVar16[1] = pRVar37;
      *(int *)(ppRVar16 + 2) = iVar10;
      ppRVar16 = ppRVar16 + 3;
    }
    pRVar14 = pRVar22;
    pRVar37 = pRVar13;
    pRVar20 = pRVar13;
    if (pRVar13 <= pRVar22) goto LAB_1407aa11c;
  }
  iVar42 = (int)((ulonglong)((longlong)pRVar20 - (longlong)pRVar32) >> 3);
  uVar44 = (ulonglong)(iVar42 + 1);
  pRVar13 = pRVar37;
  pRVar19 = pRVar32;
  if (iVar10 == 0) goto LAB_1407a9f54;
  goto LAB_1407a9e1e;
}



// FUNCTION 1407ab252 FUN_1407ab252 body=940 status=ok
// SIG undefined FUN_1407ab252(void)

void FUN_1407ab252(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38) + 0x5d8))();
  if (lVar8 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar1 = *(uint *)(lVar8 + 0xc);
      *(uint *)(param_1 + 0x58) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar13 = iVar7 == 0;
        if (bVar13) {
          *(int *)(lVar8 + 0x10) = iVar12;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar7 = iVar12;
        }
      }
      goto LAB_1407ab291;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar7 = 0;
LAB_1407ab291:
  *(int *)(param_1 + 0x5c) = iVar7;
  FUN_1407ab80a(param_1);
  local_28 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
  FUN_1407ab600(*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),1,&local_28);
  FUN_1407ab6c8(*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),1);
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
  if ((plVar10 != (longlong *)0x0) && (*(char *)(*(longlong *)(param_1 + 0x60) + 0x238) != '\0')) {
    uVar9 = FUN_140338614();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar9);
    if (plVar10 != (longlong *)0x0) {
      uVar9 = FUN_140338614();
      plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
      if ((plVar10 != plVar11) && (plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x58))(plVar11);
      }
    }
  }
  FUN_1407ad3a6(param_1,1);
  lVar8 = *(longlong *)(param_1 + 0x60);
  if (*(char *)(lVar8 + 0x239) == '\x01') {
    FUN_1407bc1ec(param_1,1);
    lVar8 = *(longlong *)(param_1 + 0x60);
  }
  if (*(char *)(lVar8 + 0x23a) == '\x01') {
    FUN_1407bc90c(param_1,1);
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if (lVar8 != 0) {
    if (DAT_14cba8288 == 0) {
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      local_40 = &local_28;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      uVar3 = *(undefined4 *)(lVar2 + 0x250);
      uVar4 = *(undefined4 *)(lVar2 + 0x254);
      uVar5 = *(undefined4 *)(lVar2 + 600);
      uVar6 = *(undefined4 *)(lVar2 + 0x25c);
      *(undefined8 *)(lVar8 + 0x9c70) = *(undefined8 *)(lVar2 + 0x260);
      *(undefined4 *)(lVar8 + 0x9c60) = uVar3;
      *(undefined4 *)(lVar8 + 0x9c64) = uVar4;
      *(undefined4 *)(lVar8 + 0x9c68) = uVar5;
      *(undefined4 *)(lVar8 + 0x9c6c) = uVar6;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ab600 FUN_1407ab600 body=199 status=ok
// SIG undefined FUN_1407ab600(void)

void FUN_1407ab600(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x211) == '\x01') {
    FUN_1418f3a1e(param_1,param_2,param_3,param_4);
  }
  else if (*(char *)(param_1 + 0x212) == '\x01') {
    FUN_14423fe7c(param_1,param_2,param_3,param_4);
  }
  if (*(char *)(param_1 + 0x209) == '\x01') {
    FUN_140d7892c(param_1,param_2,param_3,param_4);
  }
  if (*(char *)(param_1 + 0x221) == '\x01') {
    FUN_1418f3b88();
  }
  if (((char)param_3 != '\0') && (*(char *)(param_1 + 0x211) == '\x01')) {
    FUN_1414940ec(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    FUN_140fb609c();
    return;
  }
  return;
}



// FUNCTION 1407ab6c8 FUN_1407ab6c8 body=320 status=ok
// SIG undefined FUN_1407ab6c8(void)

void FUN_1407ab6c8(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x240) != 0) &&
     (plVar3 = (longlong *)(**(code **)(*param_2 + 0x5d8))(param_2), plVar3 != (longlong *)0x0)) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30 && (cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar2 != '\0')))) {
      FUN_1400021e4(param_1 + 0x240,&local_58);
      puVar5 = local_58;
      if (local_50 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_48,L"UI.State.%s",puVar5);
      iVar1 = local_40 + -1;
      if (local_40 == 0) {
        iVar1 = 0;
      }
      FUN_1446f82e2(local_38,iVar1,local_48,1);
      FUN_1447683ea(local_30,local_38,1);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (param_3 == '\0') {
        FUN_140c125e6(plVar3 + 0x1b3,local_30);
      }
      else {
        FUN_1403ca8ec();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ab80a FUN_1407ab80a body=385 status=ok
// SIG undefined FUN_1407ab80a(void)

void FUN_1407ab80a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((*(char *)(lVar1 + 0x58) == '\x01') && (*(longlong *)(lVar1 + 0x68) != 0)) &&
     (*(longlong *)(lVar1 + 0x70) != 0)) {
    FUN_1407bc0a8(param_1,lVar1 + 0x68);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (*(char *)(lVar1 + 0x2e) == '\x01') {
    FUN_1407bca9e(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (*(char *)(lVar1 + 0x2d) == '\x01') {
    FUN_1407bc608(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  }
  FUN_1407ac70c(param_1,1);
  FUN_1407abb64(param_1,1);
  FUN_1407ab98c(param_1,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x2b),
                *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x2c));
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x41) == '\x01') {
    FUN_1407bbfa6(param_1,1);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (*(char *)(lVar1 + 0x78) == '\x01') {
    FUN_1407bc786(param_1,1);
  }
  FUN_1407abab2(param_1,1);
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x7a) == '\x01') {
    FUN_1407bbeb4(param_1,1);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (*(char *)(lVar1 + 0x7c) == '\x01') {
    FUN_1407bbd62(param_1,1);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (*(char *)(lVar1 + 0x7e) == '\x01') {
    FUN_1407bc344(param_1,1);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (*(char *)(lVar1 + 0x7f) == '\x01') {
    FUN_1407bc4a4(param_1,1);
  }
  FUN_1407acd76(param_1,1);
  FUN_1407ac082(param_1,1);
  FUN_1407aba12(param_1,1);
  FUN_1407ac82e(param_1);
  FUN_1407abc20(param_1);
  FUN_1407abce6(param_1,1);
  return;
}



// FUNCTION 1407ab98c FUN_1407ab98c body=132 status=ok
// SIG undefined FUN_1407ab98c(void)

void FUN_1407ab98c(longlong param_1,char param_2,char param_3)

{
  char cVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == '\x02') {
    param_2 = '\x01';
    param_3 = '\x01';
  }
  cVar1 = '\0';
  if (param_2 != '\0') {
    cVar1 = param_3;
  }
  if ((*(char *)(param_1 + 0x2c) != param_2) || (*(char *)(param_1 + 0x2d) != cVar1)) {
    *(char *)(param_1 + 0x2c) = param_2;
    *(char *)(param_1 + 0x2d) = cVar1;
    local_10 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
    FUN_1407ade21(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407aba12 FUN_1407aba12 body=160 status=ok
// SIG undefined FUN_1407aba12(void)

void FUN_1407aba12(longlong param_1,char param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (param_2 == '\0') {
    if (*(char *)(lVar1 + 0x80) != '\x01') {
      if (*(char *)(lVar1 + 0x82) != '\x01') {
        return;
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
      if (((((char)plVar2[0x2f] != '\x03') && ((*(byte *)((longlong)plVar2 + 0x61) & 1) == 0)) &&
          ((*(byte *)(plVar2 + 0xc) & 1) == 0)) && ((*(byte *)((longlong)plVar2 + 99) & 8) != 0)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001407aba9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x330))(plVar2,1);
      return;
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x5c8);
  }
  else {
    if ((*(char *)(lVar1 + 0x81) != '\x01') ||
       (((plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38),
         (char)plVar2[0x2f] != '\x03' && ((*(byte *)((longlong)plVar2 + 0x61) & 1) == 0)) &&
        (((*(byte *)(plVar2 + 0xc) & 1) == 0 && ((*(byte *)((longlong)plVar2 + 99) & 8) != 0)))))) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x330);
  }
                    /* WARNING: Could not recover jumptable at 0x0001407aba67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,0);
  return;
}



// FUNCTION 1407abab2 FUN_1407abab2 body=177 status=ok
// SIG undefined FUN_1407abab2(void)

void FUN_1407abab2(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x79) == '\x01') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38), lVar1 != 0)) {
    lVar2 = FUN_14070cc62();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30 && (*(longlong *)(lVar1 + 0x858) != 0)))) {
      local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
      if (param_2 == '\0') {
        FUN_1400bc8c2(*(longlong *)(lVar1 + 0x858) + 0x11c8,&local_28);
      }
      else {
        FUN_1400bc96c();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407abb64 FUN_1407abb64 body=188 status=ok
// SIG undefined FUN_1407abb64(void)

void FUN_1407abb64(longlong param_1,char param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_2 != '\0') && (*(char *)(*(longlong *)(param_1 + 8) + 0x2a) == '\x01')) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_144a78b9e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x638))(plVar2);
      if (plVar4 != (longlong *)0x0) {
        lVar3 = FUN_140f27e30();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x29);
          if ((ulonglong)bVar1 < 3) {
            (**(code **)(*plVar4 + 0x5d0))
                      (plVar4,*(undefined4 *)(&DAT_14b4333e8 + (ulonglong)bVar1 * 4),0);
            FUN_145ccf238(plVar2,bVar1 + 1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1407abc20 FUN_1407abc20 body=196 status=ok
// SIG undefined FUN_1407abc20(void)

void FUN_1407abc20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38);
  uVar3 = FUN_1447210f0(uVar2);
  local_b8 = local_b0;
  FUN_1407acb05(uVar3,lVar1 + 0x198,lVar1 + 0x1b0,uVar2);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407abce6 FUN_1407abce6 body=482 status=ok
// SIG undefined FUN_1407abce6(void)

void FUN_1407abce6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x200) == '\x01') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38), lVar1 != 0)) {
    if (DAT_14cb5b388 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146431698;
      local_58 = &LAB_1486775cb;
      local_60 = &LAB_1464cee35;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x1188) + 0x10))(lVar1 + 0x1188);
      FUN_1407abeca(&local_38,uVar2);
      if ((((local_30 != (longlong *)0x0) &&
           ((((local_38._4_4_ != 0 && (-1 < (int)(uint)local_38)) &&
             ((int)(uint)local_38 < DAT_14c9647dc)) &&
            ((lVar3 = (ulonglong)(((uint)local_38 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_38 >> 0x10) * 8),
             lVar3 != 0 && (*(int *)(lVar3 + 0x10) == local_38._4_4_)))))) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) &&
         ((lVar3 = (**(code **)(*local_30 + 0x10))(), lVar3 != 0 &&
          ((*(longlong *)(lVar3 + 0x1f8) == 0 ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x1f8) + 0x60) != *(longlong *)(param_1 + 8))))))) {
        FUN_1407abf92(lVar3 + 0x1e0,lVar1,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407abeca FUN_1407abeca body=200 status=ok
// SIG undefined FUN_1407abeca(void)

uint * FUN_1407abeca(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1407abf92 FUN_1407abf92 body=238 status=ok
// SIG undefined FUN_1407abf92(void)

void FUN_1407abf92(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x30) != param_3)) {
    *(char *)(param_1 + 0x30) = param_3;
    if (param_3 == '\0') {
      if ((*(char *)(param_1 + 0x20) == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
        uVar3 = (**(code **)(*(longlong *)(param_2 + 0x1188) + 0x10))(param_2 + 0x1188);
        FUN_1407abeca(local_30,uVar3);
        if (local_28 != (longlong *)0x0) {
          cVar1 = FUN_144729dda(local_30);
          if (cVar1 != '\0') {
            lVar4 = (**(code **)(*local_28 + 0x10))();
            if ((lVar4 != 0) && (*(float *)(lVar4 + 0xc4) < *(float *)(param_1 + 0x28)))
            goto LAB_1407abfee;
          }
        }
        uVar2 = (**(code **)(*(longlong *)(param_2 + 0x10e0) + 0x20))
                          (param_2 + 0x10e0,*(undefined8 *)(param_1 + 0x18));
        *(undefined1 *)(param_1 + 0x20) = uVar2;
      }
    }
    else if (*(char *)(param_1 + 0x20) != '\0') {
      (**(code **)(*(longlong *)(param_2 + 0x10e0) + 0x30))(param_2 + 0x10e0);
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
  }
LAB_1407abfee:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac082 FUN_1407ac082 body=521 status=ok
// SIG undefined FUN_1407ac082(void)

void FUN_1407ac082(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    FUN_1407ac99a(param_1,0);
    FUN_1407ac648(param_1,0);
    FUN_1407ac348(param_1,0);
    FUN_1407ac408(param_1,0);
    FUN_1407ac4c8(param_1,0);
    FUN_1407ac588(param_1,0);
    FUN_1407ac28c(param_1,0);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar1 + 0x40) == '\x01') {
      FUN_1407ac99a(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x201) == '\x01') {
      FUN_1407ac648(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x202) == '\x01') {
      FUN_1407ac348(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x203) == '\x01') {
      FUN_1407ac408(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x204) == '\x01') {
      FUN_1407ac4c8(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x205) == '\x01') {
      FUN_1407ac588(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x206) == '\x01') {
      FUN_1407ac28c(param_1,1);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x207) == '\0') goto LAB_1407ac15f;
  }
  if (((*(byte *)(param_1 + 0x1a) & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfd | param_2 * '\x02';
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1be8,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
LAB_1407ac15f:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ac28c FUN_1407ac28c body=186 status=ok
// SIG undefined FUN_1407ac28c(void)

void FUN_1407ac28c(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1a) & 1) != param_2) {
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfe | param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == 0) {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1bc0,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac348 FUN_1407ac348 body=191 status=ok
// SIG undefined FUN_1407ac348(void)

void FUN_1407ac348(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x19) & 0x10) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xef | param_2 << 4;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1c38,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac408 FUN_1407ac408 body=191 status=ok
// SIG undefined FUN_1407ac408(void)

void FUN_1407ac408(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x19) & 0x20) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xdf | param_2 << 5;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x3638,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac4c8 FUN_1407ac4c8 body=191 status=ok
// SIG undefined FUN_1407ac4c8(void)

void FUN_1407ac4c8(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x19) & 0x40) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xbf | param_2 << 6;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x3660,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac588 FUN_1407ac588 body=191 status=ok
// SIG undefined FUN_1407ac588(void)

void FUN_1407ac588(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (-1 < (char)*(byte *)(param_1 + 0x19) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0x7f | param_2 << 7;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1c60,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac648 FUN_1407ac648 body=194 status=ok
// SIG undefined FUN_1407ac648(void)

void FUN_1407ac648(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x19) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xf7 | param_2 * '\b';
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78b9e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1b98,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ac70c FUN_1407ac70c body=289 status=ok
// SIG undefined FUN_1407ac70c(void)

void FUN_1407ac70c(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (param_2 == '\0') {
    FUN_1407bbdf0(param_1,0);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x28) == '\x01') {
    FUN_1407bbdf0(param_1,1);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  if ((*(char *)(lVar3 + 0x2a) == '\x01') &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_144a78b9e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30 &&
        (plVar4 = (longlong *)(**(code **)(*plVar2 + 0x638))(plVar2), plVar4 != (longlong *)0x0))))
    {
      lVar3 = FUN_140f27e30();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x29);
        if (cVar1 == '\x02') {
          (**(code **)(*plVar4 + 0x5d0))(plVar4,5,0);
          uVar5 = 3;
        }
        else if (cVar1 == '\x01') {
          (**(code **)(*plVar4 + 0x5d0))(plVar4,5,0);
          uVar5 = 2;
        }
        else {
          if (cVar1 != '\0') {
            return;
          }
          (**(code **)(*plVar4 + 0x5d0))(plVar4,2,0);
          uVar5 = 1;
        }
        FUN_145ccf238(plVar2,uVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407ac82e FUN_1407ac82e body=364 status=ok
// SIG undefined FUN_1407ac82e(void)

void FUN_1407ac82e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar1 + 0x188);
  if (lVar5 == 0) {
    uVar4 = FUN_1409ff8bc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x188) = lVar5;
  }
  if (*(longlong *)(lVar1 + 400) == 0) {
    if (*(longlong *)(lVar1 + 0x180) == 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    plVar6 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) {
      *(undefined8 *)(lVar1 + 400) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x180));
    *(longlong *)(lVar1 + 400) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  plVar6 = (longlong *)FUN_1409fe326(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar5 = *(longlong *)(lVar1 + 0x188);
    if (lVar5 == 0) {
      uVar4 = FUN_1409ff8bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar1 + 0x188) = lVar5;
    }
    lVar7 = *(longlong *)(lVar1 + 400);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(lVar1 + 0x180) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x180));
      }
      *(longlong *)(lVar1 + 400) = lVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x0001407ac917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6,lVar7,0,0);
    return;
  }
  return;
}



// FUNCTION 1407ac99a FUN_1407ac99a body=362 status=ok
// SIG undefined FUN_1407ac99a(void)

void FUN_1407ac99a(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(param_1 + 0x18) & 0x10) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xef | param_2 << 4;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      if (DAT_14cb5b388 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146431698;
        local_48 = &LAB_1486775cb;
        local_50 = &LAB_1464cee35;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000005;
        local_70 = 0x10;
        local_78 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x11e8) != 0)) {
        local_28 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1b70,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407acb05 FUN_1407acb05 body=509 status=ok
// SIG undefined FUN_1407acb05(void)

undefined4
FUN_1407acb05(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_348 [32];
  undefined1 local_328 [4];
  ulonglong local_324;
  undefined8 local_31c;
  undefined1 local_310 [704];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_1407ad36c();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  if (param_2[2] == 0) {
    uVar4 = 0;
    if ((*param_2 == 0) || (lVar7 == 0)) goto LAB_1407acb50;
    plVar1 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      uVar4 = 0;
      goto LAB_1407acb50;
    }
    uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar7 = FUN_144aff482(uVar6,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_1407acb50;
  }
  if (param_1 == 0) {
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
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
      uVar5 = *(uint *)(lVar7 + 0x10);
      bVar11 = uVar5 == 0;
      if (bVar11) {
        *(uint *)(lVar7 + 0x10) = uVar9;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar5 = uVar9;
      }
      uVar8 = (ulonglong)uVar5;
    }
  }
  local_324 = (ulonglong)uVar10 | uVar8 << 0x20;
  local_328[0] = 0;
  uVar6 = 0;
  local_31c = 0;
  local_50 = 0;
  local_48 = 0x800000000;
  FUN_1407ae7e8(param_3,local_328,param_4,0);
  if (param_1 != 0) {
    uVar6 = FUN_140115352(param_1);
  }
  uVar4 = FUN_1407ae347(uVar6,param_2,local_328,param_5);
  FUN_1407acd04(local_310);
LAB_1407acb50:
  if ((local_40 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1407acd04 FUN_1407acd04 body=61 status=ok
// SIG undefined FUN_1407acd04(void)

void FUN_1407acd04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    lVar1 = param_1;
  }
  FUN_1407acd41(lVar1,*(undefined4 *)(param_1 + 0x2c8));
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407acd41 FUN_1407acd41 body=53 status=ok
// SIG undefined FUN_1407acd41(void)

void FUN_1407acd41(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x50);
    do {
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*pbVar1])(pbVar1 + -0x38);
      pbVar1 = pbVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407acd76 FUN_1407acd76 body=1524 status=ok
// SIG undefined FUN_1407acd76(void)

void FUN_1407acd76(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_258;
  longlong *local_250;
  undefined8 local_248 [13];
  longlong *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined2 local_150;
  undefined8 local_14c;
  longlong *local_138 [12];
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 local_b8 [12];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_2 == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x84) != '\x01') {
      lVar6 = param_1 + 0x30;
      cVar5 = FUN_144904448(lVar6);
      if (cVar5 != '\0') {
        FUN_144a2c796(lVar6,local_138);
        if (((*(longlong *)(param_1 + 0x48) == 0) || ((DAT_14cb26569 & 1) == 0)) ||
           (local_138[0] == (longlong *)0x0)) {
          FUN_14072d42a(lVar6,0);
        }
        else {
          uVar8 = FUN_140ba21e6(lVar6);
          local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffff00000000);
          FUN_14084a448(local_138[0],&local_270,*(undefined8 *)(param_1 + 0x48),uVar8);
          local_270 = 0;
          local_268 = 0xffffffffffffffff;
        }
        FUN_144a61ac8(local_138);
      }
    }
    goto LAB_1407ace4a;
  }
  FUN_14026e798(&local_1c8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (local_1c8 != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    local_1d8 = local_1c8;
    local_1d0 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
      UNLOCK();
    }
    lVar6 = FUN_140206ee8(lVar6 + 0x88,&local_1d8);
    if (lVar6 != 0) {
      local_1e0 = (longlong *)0x0;
      lVar13 = *(longlong *)(param_1 + 8);
      cVar5 = *(char *)(lVar13 + 0x83);
      if (cVar5 == '\0') {
        FUN_1403c747e(local_1c8,local_138,*(undefined8 *)(lVar13 + 0xe8));
LAB_1407aceb5:
        FUN_1403c75f4(&local_1e0,local_138);
        plVar1 = local_138[0];
        if (((local_138[0] != (longlong *)0x0) &&
            (*(int *)(local_138[0] + 0x21) = (int)local_138[0][0x21] + -1,
            (int)local_138[0][0x26] < 1)) &&
           (FUN_1400847bc(local_138[0] + 0x17,0), (int)plVar1[0x21] == 0)) {
          FUN_140087e46(plVar1);
          if (*plVar1 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_1407acef7;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
          }
        }
      }
      else {
        if (cVar5 == '\x01') {
          local_288 = local_b8;
          puVar10 = (undefined8 *)(lVar13 + 0x100);
          puVar12 = local_288;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          local_58 = *(undefined4 *)(lVar13 + 0x160);
          local_54 = *(undefined4 *)(lVar13 + 0x164);
          local_50 = *(undefined1 *)(lVar13 + 0x168);
          local_4f = *(undefined1 *)(lVar13 + 0x169);
          local_4c = *(undefined8 *)(lVar13 + 0x16c);
          local_280 = 0;
          FUN_14071b0f2(local_1c8,local_138,&DAT_14cb8cd08,*(undefined8 *)(lVar13 + 0xf0));
          goto LAB_1407aceb5;
        }
        if (cVar5 != '\x02') goto LAB_1407acdfd;
        local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffffffffff00);
        FUN_14084a140(local_1c8,local_138,&DAT_14cb8cd08,0);
        FUN_1403c75f4(&local_1e0,local_138);
        FUN_144a61ac8(local_138);
        if (local_1e0 == (longlong *)0x0) goto LAB_1407acdfd;
        FUN_140a9d2f2(local_1c8,local_248,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf0));
        puVar10 = local_248;
        pplVar11 = local_138;
        for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
          *pplVar11 = (longlong *)*puVar10;
          puVar10 = puVar10 + 1;
          pplVar11 = pplVar11 + 1;
        }
        local_d8 = 0x3f800000;
        local_d0 = 0;
        local_cc = 0;
        FUN_1400875ba(local_138,*(longlong *)(param_1 + 8) + 0x100);
        pplVar11 = local_138;
        puVar10 = local_1b8;
        for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar10 = *pplVar11;
          pplVar11 = pplVar11 + 1;
          puVar10 = puVar10 + 1;
        }
        local_158 = local_d8;
        local_150 = local_d0;
        local_14c = local_cc;
        FUN_14150591e(local_1e0);
      }
LAB_1407acef7:
      plVar1 = local_1e0;
      if (local_1e0 != (longlong *)0x0) {
        plVar4 = *(longlong **)(local_1c8 + 0x20);
        if ((plVar4 == (longlong *)0x0) || (*(int *)(local_1c8 + 0x1c) == 0)) {
LAB_1407ad122:
          plVar7 = (longlong *)0x0;
        }
        else {
          uVar3 = *(uint *)(local_1c8 + 0x18);
          plVar7 = (longlong *)0x0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            if (((lVar13 == 0) || (*(int *)(lVar13 + 0x10) != *(int *)(local_1c8 + 0x1c))) ||
               ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)) goto LAB_1407ad122;
            if (*(code **)(*plVar4 + 0x30) == (code *)&LAB_14479b63c) {
              plVar7 = plVar4 + -0xa4;
              if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar4[-0x77];
              }
            }
            else {
              plVar7 = (longlong *)(**(code **)(*plVar4 + 0x30))();
            }
          }
        }
        local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffff00000000);
        FUN_14084a448(plVar1,local_138,lVar6,plVar7);
        *(longlong **)(param_1 + 0x30) = local_138[0];
        *(longlong **)(param_1 + 0x38) = local_138[1];
        *(longlong **)(param_1 + 0x40) = local_138[2];
        lVar6 = *(longlong *)(param_1 + 8);
        local_258 = local_1c8;
        local_250 = local_1c0;
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
        }
        lVar6 = FUN_140206ee8(lVar6 + 0xb8,&local_258);
        if (lVar6 != 0) {
          FUN_1415a48ac(lVar6,local_138);
          FUN_1407ec87c(param_1 + 0x48,local_138);
          if ((local_138[0] != (longlong *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(local_138[0][10]);
          }
        }
        plVar1 = local_1e0;
        if (((local_1e0 != (longlong *)0x0) &&
            (*(int *)(local_1e0 + 0x21) = (int)local_1e0[0x21] + -1, (int)local_1e0[0x26] < 1)) &&
           (FUN_1400847bc(local_1e0 + 0x17,0), (int)plVar1[0x21] == 0)) {
          FUN_140087e46(plVar1);
          if (*plVar1 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_1407acdfd;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
          }
        }
      }
    }
  }
LAB_1407acdfd:
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar2 = (int *)((longlong)local_1c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1c0 + 0x10))(local_1c0);
      }
    }
  }
LAB_1407ace4a:
  if ((local_30 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ad36c FUN_1407ad36c body=57 status=ok
// SIG undefined FUN_1407ad36c(void)

void FUN_1407ad36c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56e98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56e98 = FUN_140002ddd(FUN_1418470b8,uVar1,L"GbxDialogEventDef");
  }
  return;
}



// FUNCTION 1407ad3a6 FUN_1407ad3a6 body=1943 status=ok
// SIG undefined FUN_1407ad3a6(void)

void FUN_1407ad3a6(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  code **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  undefined2 *local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar11 = *(longlong *)(param_1 + 0x60);
  if ((((*(char *)(lVar11 + 0x234) == '\x01') && (*(int *)(param_1 + 0x5c) != 0)) &&
      (uVar5 = *(uint *)(param_1 + 0x58), -1 < (int)uVar5)) &&
     ((((int)uVar5 < DAT_14c9647dc &&
       (plVar10 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0)) &&
      (((int)plVar10[2] == *(int *)(param_1 + 0x5c) && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0))
      )))) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar10;
    }
    else {
      lVar11 = 0;
    }
    (**(code **)(*(longlong *)(lVar11 + 0xda8) + 0x70))
              (lVar11 + 0xda8,param_2,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18));
    lVar11 = *(longlong *)(param_1 + 0x60);
  }
  if (((*(char *)(lVar11 + 0x236) == '\x01') && (*(int *)(param_1 + 0x5c) != 0)) &&
     (((uVar5 = *(uint *)(param_1 + 0x58), -1 < (int)uVar5 &&
       ((((int)uVar5 < DAT_14c9647dc &&
         (plVar10 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0)) && ((int)plVar10[2] == *(int *)(param_1 + 0x5c))))) &&
      ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar10;
    }
    else {
      lVar11 = 0;
    }
    FUN_1407ae792(lVar11 + 0x3910,param_2,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18));
    lVar11 = *(longlong *)(param_1 + 0x60);
  }
  if ((*(char *)(lVar11 + 0x237) == '\x01') && (*(int *)(param_1 + 0x5c) != 0)) {
    puVar2 = (uint *)(param_1 + 0x58);
    uVar5 = *puVar2;
    if (((-1 < (int)uVar5) &&
        (((int)uVar5 < DAT_14c9647dc &&
         (lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar11 != 0)))) &&
       ((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x5c) &&
        (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 &&
         (lVar11 = FUN_14479d2ce(puVar2), *(longlong *)(lVar11 + 0x2210) != 0)))))) {
      lVar11 = FUN_14479d2ce(puVar2);
      local_50 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
      FUN_1407afd70(*(undefined8 *)(lVar11 + 0x2210),param_2);
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x23b) == '\x01') {
    cVar4 = FUN_144729dda(param_1 + 0x58);
    if (cVar4 != '\0') {
      uVar9 = FUN_14479d2ce(param_1 + 0x58);
      FUN_148dc2498(uVar9,*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18),param_2);
    }
  }
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  cVar4 = (char)param_2;
  if (lVar11 != 0) {
    if (DAT_14cba8288 == 0) {
      local_b0 = &local_50;
      local_50 = FUN_141864c34;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1464cee30;
      local_b8 = &LAB_148bfac22;
      local_c0 = &LAB_140f21842;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x235) == '\x01') &&
         (plVar10 = *(longlong **)(lVar11 + 0x75e0), plVar10 != (longlong *)0x0)) {
        iVar7 = (int)plVar10[1];
        do {
          if (iVar7 == 0) goto LAB_1407ad454;
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar12 = iVar7 == iVar6;
          if (bVar12) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar12);
        if (*(longlong *)(lVar11 + 0x75d8) != 0) {
          FUN_145745220(*(longlong *)(lVar11 + 0x75d8),
                        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18),
                        param_2);
        }
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
      }
LAB_1407ad454:
      lVar8 = *(longlong *)(param_1 + 0x60);
      if (*(int *)(lVar8 + 0x228) == 0) {
        if (cVar4 != '\0') {
LAB_1407ad46c:
          if (*(int *)(lVar8 + 0x22c) != 0) {
            FUN_1407ae6f0(lVar11);
          }
        }
      }
      else {
        if (cVar4 != '\0') {
          FUN_1407af814();
          lVar8 = *(longlong *)(param_1 + 0x60);
          goto LAB_1407ad46c;
        }
        FUN_140bc2046(lVar11,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18),
                      *(int *)(lVar8 + 0x228),0);
      }
      lVar8 = *(longlong *)(param_1 + 0x60);
      if (((*(char *)(lVar8 + 0x230) != '\0') || (*(char *)(lVar8 + 0x231) != '\0')) ||
         (*(char *)(lVar8 + 0x232) == '\x01')) {
        FUN_1407ae1a6(lVar11 + 0x6c48,&local_60,&DAT_14cb8c3a8);
        lVar11 = local_60;
        if (local_60 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x60);
          if (*(char *)(lVar8 + 0x230) == '\x01') {
            local_70 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
            local_50 = (code *)0x149e2b6a8;
            local_48 = (undefined2 *)CONCAT35(local_48._5_3_,5);
            uVar5 = FUN_14001a6c0(&local_50,1);
            local_50 = (code *)(ulonglong)uVar5;
            FUN_1407add6a(lVar11,&local_50,&local_70,param_2);
            lVar8 = *(longlong *)(param_1 + 0x60);
          }
          lVar11 = local_60;
          if (*(char *)(lVar8 + 0x231) == '\x01') {
            local_70 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
            local_50 = (code *)0x14b9a0b00;
            local_48 = (undefined2 *)CONCAT35(local_48._5_3_,7);
            uVar5 = FUN_14001a6c0(&local_50,1);
            local_50 = (code *)(ulonglong)uVar5;
            FUN_1407add6a(lVar11,&local_50,&local_70,param_2);
            lVar8 = *(longlong *)(param_1 + 0x60);
          }
          lVar11 = local_60;
          if (*(char *)(lVar8 + 0x232) == '\x01') {
            local_50 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
            FUN_1446ddc76(&local_70,"ElementalAttunement",1);
            FUN_1407add6a(lVar11,&local_70,&local_50,param_2);
          }
        }
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_58 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_58 + 0x10))(local_58);
            }
          }
        }
      }
    }
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x24c);
  if (cVar4 == '\0') {
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_1407ad4c7;
  }
  else if (*(int *)(param_1 + 0x50) == iVar7) goto LAB_1407ad4c7;
  local_98 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
  FUN_1400021e4(&local_98,&local_90);
  local_48 = local_90;
  if (local_88 == 0) {
    local_48 = &DAT_149dfb77a;
  }
  local_80 = &local_50;
  local_50 = (code *)CONCAT44(local_50._4_4_,5);
  local_40 = 0;
  uStack_38 = 0;
  local_78 = &local_30;
  FUN_1407adb6e(&local_70);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,&local_60,L"TrickMovementLock_{0}",&local_70);
  FUN_1407adb3e(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1407aedfe(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0,&local_60);
  }
  iVar6 = 0;
  if (cVar4 != '\0') {
    FUN_1407aedfe(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),1,&local_60,iVar7);
    iVar6 = iVar7;
  }
  *(int *)(param_1 + 0x50) = iVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_1407ad4c7:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407adb3e FUN_1407adb3e body=47 status=ok
// SIG undefined FUN_1407adb3e(void)

void FUN_1407adb3e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407adb6e FUN_1407adb6e body=85 status=ok
// SIG undefined FUN_1407adb6e(void)

undefined8 * FUN_1407adb6e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 5;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1407adc92(param_1,uVar2 & 0xffffffff,0);
    FUN_1407adbc3(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 1407adbc3 FUN_1407adbc3 body=69 status=ok
// SIG undefined FUN_1407adbc3(void)

void FUN_1407adbc3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1407adc08(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1407adc08 FUN_1407adc08 body=138 status=ok
// SIG undefined FUN_1407adc08(void)

int * FUN_1407adc08(int *param_1,int *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (iVar1 == 3) {
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      param_1[6] = iVar1;
      if (iVar1 == 0 && param_1[7] == 0) {
        param_1[7] = 0;
      }
      else {
        FUN_1446dd670(param_1 + 4,iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
        }
      }
    }
    else {
      switch(iVar1) {
      case 0:
      case 1:
      case 2:
      case 4:
      case 5:
      case 6:
      case 7:
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407adc92 FUN_1407adc92 body=216 status=ok
// SIG undefined FUN_1407adc92(void)

void FUN_1407adc92(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407add6a FUN_1407add6a body=110 status=ok
// SIG undefined FUN_1407add6a(void)

void FUN_1407add6a(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*param_2 != 0) && (*param_3 != 0)) {
    if (param_4 != '\0') {
      lVar1 = FUN_1407ae652();
      uVar3 = 1;
LAB_1407addc7:
      FUN_1407addd8(lVar1,param_3,uVar3);
      return;
    }
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x48;
      do {
        if (*(longlong *)(lVar1 + 0x18) == *param_2) {
          if (lVar1 == 0) {
            return;
          }
          uVar3 = 0;
          goto LAB_1407addc7;
        }
        lVar1 = lVar1 + 0x48;
        lVar2 = lVar2 + -0x48;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 1407addd8 FUN_1407addd8 body=73 status=ok
// SIG undefined FUN_1407addd8(void)

void FUN_1407addd8(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0x20));
  }
  else {
    FUN_1400bc96c();
  }
  if (cVar1 != *(char *)(param_1 + 0x20)) {
    FUN_1407ae296(param_1,param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 1407ade21 FUN_1407ade21 body=306 status=ok
// SIG undefined FUN_1407ade21(void)

void FUN_1407ade21(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_3 == '\x02') {
    param_4 = '\x01';
    param_3 = '\x01';
  }
  if (param_1 == 0) {
    return;
  }
  lVar1 = FUN_14070cc62();
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x858);
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\x01') {
LAB_1407adee1:
    FUN_1407ae0cc(lVar1,param_2,2);
LAB_1407adef2:
    if (param_4 == '\x02') goto LAB_1407adea9;
    if (param_4 == '\0') {
      FUN_1400bc8c2(lVar1 + 0x1aa0,param_2);
      bVar2 = param_3 == '\x01';
      goto LAB_1407adebb;
    }
    if (param_4 != '\x01') {
      if (param_4 != '\x03') {
        return;
      }
      FUN_1400bc8c2(lVar1 + 0x1aa0,param_2);
      bVar2 = true;
      goto LAB_1407adebb;
    }
    FUN_1400bc96c(lVar1 + 0x1aa0,param_2);
  }
  else {
    if (param_3 != '\0') {
      if (param_3 == '\x03') {
        FUN_140257a06(lVar1,param_2,7);
        goto LAB_1407adee1;
      }
      goto LAB_1407adef2;
    }
    FUN_1407adf94(lVar1,param_2);
    FUN_1409df526(lVar1,param_2);
LAB_1407adea9:
    FUN_1400bc8c2(lVar1 + 0x1aa0,param_2);
  }
  bVar2 = false;
LAB_1407adebb:
  FUN_1407adf54(lVar1,param_2,bVar2);
  return;
}



// FUNCTION 1407adf54 FUN_1407adf54 body=63 status=ok
// SIG undefined FUN_1407adf54(void)

void FUN_1407adf54(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c(param_1 + 0x1198);
  }
  *(byte *)(param_1 + 0x5b7) =
       *(byte *)(param_1 + 0x5b7) & 0xfd | *(char *)(param_1 + 0x1198) * '\x02';
  return;
}



// FUNCTION 1407adf94 FUN_1407adf94 body=91 status=ok
// SIG undefined FUN_1407adf94(void)

void FUN_1407adf94(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(param_1 + 0x1190)) {
    local_18 = param_2;
    FUN_1407ae536(param_1 + 0x1158,&local_18);
  }
  FUN_1407adff0(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407adff0 FUN_1407adff0 body=220 status=ok
// SIG undefined FUN_1407adff0(void)

void FUN_1407adff0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if ((*(longlong *)(param_1 + 0x1f0) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x428), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0xae8);
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10b8);
  if (*(longlong *)(param_1 + 0x10b8) != lVar2) {
    if (lVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1150) = 3;
    }
    else {
      *(uint *)(param_1 + 0x1150) = (uint)*(byte *)(lVar2 + 0x30);
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
    }
    *(longlong *)(param_1 + 0x10b8) = lVar2;
    lVar1 = lVar2;
  }
  if (lVar1 != 0) {
    if ((longlong)*(int *)(param_1 + 0x1190) < 1) {
      puVar3 = (undefined1 *)(param_1 + 0x1150);
    }
    else {
      lVar2 = param_1 + 0x1158;
      if (*(longlong *)(param_1 + 0x1188) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x1188);
      }
      puVar3 = (undefined1 *)(lVar2 + (longlong)*(int *)(param_1 + 0x1190) * 0xc + -0xc);
    }
    *(undefined1 *)(lVar1 + 0x30) = *puVar3;
  }
  return;
}



// FUNCTION 1407ae0cc FUN_1407ae0cc body=218 status=ok
// SIG undefined FUN_1407ae0cc(void)

void FUN_1407ae0cc(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined4 *)(param_1 + 0x1158);
  puVar3 = *(undefined4 **)(param_1 + 0x1188);
  puVar4 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x1190);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 * 0xc;
    do {
      if (*(longlong *)(puVar4 + 1) == *param_2) {
        if (puVar4 != (undefined4 *)0x0) goto LAB_1407ae14f;
        break;
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x1190) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1194) < iVar2 + 1U) {
    FUN_1470e3d9e(puVar1,iVar2);
    puVar3 = *(undefined4 **)(param_1 + 0x1188);
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar3[lVar6 * 3 + 2] = 0;
  *(undefined8 *)(puVar3 + lVar6 * 3) = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x1188);
  if (*(undefined4 **)(param_1 + 0x1188) == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6 * 3;
  *(longlong *)(puVar3 + lVar6 * 3 + 1) = *param_2;
LAB_1407ae14f:
  *puVar4 = param_3;
  FUN_1407adff0(param_1);
  return;
}



// FUNCTION 1407ae1a6 FUN_1407ae1a6 body=178 status=ok
// SIG undefined FUN_1407ae1a6(void)

longlong * FUN_1407ae1a6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_1407ae25c();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1407ae1fc;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1407ae1fc:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ae25c FUN_1407ae25c body=57 status=ok
// SIG undefined FUN_1407ae25c(void)

void FUN_1407ae25c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65180 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65180 = FUN_140002ddd(FUN_1465085ea,uVar1,L"GbxSkillLocks");
  }
  return;
}



// FUNCTION 1407ae296 FUN_1407ae296 body=177 status=ok
// SIG undefined FUN_1407ae296(void)

void FUN_1407ae296(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1407ae32c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1407ae32c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1407ae347 FUN_1407ae347 body=207 status=ok
// SIG undefined FUN_1407ae347(void)

undefined8 FUN_1407ae347(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_1 != 0) && (cVar2 = FUN_1407ae416(), cVar2 == '\0')) {
    lVar4 = param_2[1];
    if (lVar4 == 0) {
      uVar3 = FUN_1407ad36c();
      lVar4 = FUN_14477b664(uVar3);
      param_2[1] = lVar4;
    }
    if (param_2[2] != 0) {
LAB_1407ae384:
      uVar3 = FUN_1407af00a(param_1,param_2,param_3,param_4,0);
      return uVar3;
    }
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 != 0) goto LAB_1407ae384;
      }
    }
  }
  return 0;
}



// FUNCTION 1407ae416 FUN_1407ae416 body=286 status=ok
// SIG undefined FUN_1407ae416(void)

bool FUN_1407ae416(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
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
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140754f84;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_147da9a76;
      local_40 = FUN_1409f3105;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
      iVar2 = FUN_14490d72a(lVar1);
      bVar3 = iVar2 == 3;
      goto LAB_1407ae477;
    }
  }
  bVar3 = false;
LAB_1407ae477:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ae536 FUN_1407ae536 body=283 status=ok
// SIG undefined FUN_1407ae536(void)

int FUN_1407ae536(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar4 = *(int *)(param_1 + 0x38);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar12 = param_1;
    }
    iVar3 = 0;
    bVar13 = *(longlong *)(lVar12 + 4) == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      iVar2 = iVar9 + 1;
      if (iVar9 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      plVar6 = (longlong *)(lVar12 + 0x10 + lVar7 * 0xc);
      iVar11 = iVar9;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar2;
        if (lVar5 <= lVar8) break;
        lVar1 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 0xc);
        iVar10 = iVar11;
      } while (bVar13 == (lVar1 == *(longlong *)*param_2));
      if (bVar13 == false) {
        if (iVar3 != iVar9) {
          memmove((void *)(lVar12 + (longlong)iVar3 * 0xc),(void *)(lVar12 + lVar7 * 0xc),
                  (longlong)(iVar10 - iVar9) * 0xc);
        }
        iVar3 = iVar3 + (iVar10 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar5);
    *(int *)(param_1 + 0x38) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1407ae652 FUN_1407ae652 body=158 status=ok
// SIG undefined FUN_1407ae652(void)

void FUN_1407ae652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar2;
  if (lVar5 != 0) {
    lVar6 = lVar5 * 0x48;
    lVar3 = lVar4;
    do {
      if (*(longlong *)(lVar3 + 0x18) == *param_2) {
        if (lVar3 != 0) {
          return;
        }
        break;
      }
      lVar3 = lVar3 + 0x48;
      lVar6 = lVar6 + -0x48;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_1457452c0((longlong *)(param_1 + 0x28),iVar2);
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 2;
  puVar1[3] = *param_2;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x200000000;
  return;
}



// FUNCTION 1407ae6f0 FUN_1407ae6f0 body=161 status=ok
// SIG undefined FUN_1407ae6f0(void)

void FUN_1407ae6f0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((param_2 & 2) == 0) {
    uVar1 = FUN_1403ae46b();
    if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
        (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
       ((*(longlong **)(lVar2 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar2 + 0x20) != 0 &&
        (lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))(), lVar2 != 0)))) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if ((plVar4 != (longlong *)0x0) &&
         (uVar1 = (**(code **)(*plVar4 + 0xa8))(plVar4), (uVar1 & param_2) != 0))
      goto LAB_1407ae702;
    }
    return;
  }
LAB_1407ae702:
  FUN_1407afb5c(param_1,1,1);
  return;
}



// FUNCTION 1407ae792 FUN_1407ae792 body=84 status=ok
// SIG undefined FUN_1407ae792(void)

void FUN_1407ae792(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  if (param_2 == '\0') {
    FUN_1400bc8c2(param_1 + 0xa8,&local_10);
  }
  else {
    FUN_1400bc96c(param_1 + 0xa8,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ae7e8 FUN_1407ae7e8 body=562 status=ok
// SIG undefined FUN_1407ae7e8(void)

void FUN_1407ae7e8(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  local_50 = param_4;
  if (param_3 != 0) {
    lVar3 = FUN_140316ff8();
    FUN_1407aea1c(param_2,lVar3 + 0x1b0,&local_58);
  }
  if (param_4 != 0) {
    lVar3 = FUN_140316ff8();
    FUN_1407aea1c(param_2,lVar3 + 0x198,&local_50);
  }
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar11 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar9 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar9 = iVar1 + -1;
      }
      uVar14 = 0;
      uVar6 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar6 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar6 == uVar14) goto LAB_1407ae864;
        iVar9 = iVar9 + 0x20;
        uVar5 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar5 & uVar5);
    uVar6 = uVar13 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar11 = (iVar9 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar11) {
      iVar11 = iVar1;
    }
  }
  if (iVar11 != iVar1) {
    uVar5 = 0xffffffff;
    do {
      FUN_1410de4b6(param_2,*param_1 + (longlong)iVar11 * 0x60,
                    *param_1 + (longlong)iVar11 * 0x60 + 0x18);
      uVar5 = ~(uint)uVar13 & uVar5;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar11 = (int)uVar14;
      lVar3 = (longlong)iVar11;
      uVar10 = puVar4[lVar3] & uVar5;
      if (uVar10 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar11 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar4[lVar3 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1407ae923;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar3 != lVar12);
          uVar5 = 0xffffffff;
          iVar11 = iVar8;
        }
        uVar14 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar2;
      }
      else {
LAB_1407ae923:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar6 = uVar13 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar11 = (iVar9 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar11) {
          iVar11 = iVar2;
        }
      }
    } while (iVar11 != iVar1);
  }
LAB_1407ae864:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407aea1c FUN_1407aea1c body=993 status=ok
// SIG undefined FUN_1407aea1c(void)

void FUN_1407aea1c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined **ppuVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    uVar7 = FUN_140490c9a();
    lVar14 = FUN_14477b664(uVar7);
    param_2[1] = lVar14;
  }
  lVar16 = *param_2;
  if (param_2[2] == 0) {
    if (lVar14 == 0) {
      return;
    }
    if (lVar16 == 0) {
      return;
    }
    plVar9 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
      param_2[2] = 0;
      return;
    }
    uVar7 = (**(code **)(*plVar9 + 0x110))(plVar9);
    lVar14 = FUN_144aff482(uVar7,param_2);
    param_2[2] = lVar14;
    if (lVar14 == 0) {
      return;
    }
    lVar16 = *param_2;
    lVar14 = param_2[1];
  }
  uVar7 = FUN_14477b664(lVar14);
  lVar8 = FUN_14477b664(uVar7);
  lVar14 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    lVar14 = param_1 + 0x18;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if ((longlong)iVar1 != 0) {
    lVar17 = 8;
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar14 + lVar17) == 0) {
        uVar7 = FUN_140490c9a();
        uVar7 = FUN_14477b664(uVar7);
        *(undefined8 *)(lVar14 + lVar17) = uVar7;
      }
      lVar10 = lVar8;
      if (lVar8 == 0) {
        lVar10 = FUN_140490c9a(0);
      }
      lVar10 = FUN_14477b664(lVar10);
      iVar5 = 0;
      if ((lVar10 != 0) && (plVar9 = *(longlong **)(lVar10 + 0xb8), plVar9 != (longlong *)0x0)) {
        lVar11 = *plVar9;
        pcVar2 = *(code **)(lVar11 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar4 = (*pcVar2)(plVar9);
          iVar5 = 0;
          if (cVar4 == '\0') goto LAB_1407aeb7a;
          lVar11 = *plVar9;
        }
        pcVar2 = *(code **)(lVar11 + 0x110);
        ppuVar15 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar15 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar15 = (undefined **)(*pcVar2)(plVar9);
        }
        iVar5 = FUN_144aff48c(ppuVar15);
      }
LAB_1407aeb7a:
      lVar11 = *(longlong *)(lVar14 + -8 + lVar17);
      lVar3 = *(longlong *)(lVar14 + lVar17);
      if ((lVar3 == 0) || (plVar9 = *(longlong **)(lVar3 + 0xb8), plVar9 == (longlong *)0x0)) {
        iVar6 = 0;
      }
      else {
        lVar12 = *plVar9;
        pcVar2 = *(code **)(lVar12 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar4 = (*pcVar2)(plVar9);
          iVar6 = 0;
          if (cVar4 == '\0') goto LAB_1407aebf9;
          lVar12 = *plVar9;
        }
        pcVar2 = *(code **)(lVar12 + 0x110);
        ppuVar15 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar15 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar15 = (undefined **)(*pcVar2)(plVar9);
        }
        iVar6 = FUN_144aff48c(ppuVar15);
      }
LAB_1407aebf9:
      if ((iVar6 == iVar5) && (lVar11 == lVar16)) {
        if (lVar3 == lVar10) {
LAB_1407aecb3:
          if (lVar14 - lVar13 != 0) {
            plVar9 = (longlong *)((lVar14 - lVar13) + 0x18);
            goto LAB_1407aea8f;
          }
          break;
        }
        if ((lVar10 != 0) && (lVar3 != 0)) {
          iVar5 = *(int *)(lVar10 + 0x38);
          iVar6 = *(int *)(lVar3 + 0x38);
          if (((iVar5 <= iVar6) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 8) == lVar10 + 0x30))
             || ((iVar6 <= iVar5 &&
                 (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar6 * 8) == lVar3 + 0x30)
                 ))) goto LAB_1407aecb3;
        }
      }
      lVar13 = lVar13 + -0x58;
      lVar17 = lVar17 + 0x58;
    } while ((longlong)iVar1 * -0x58 != lVar13);
  }
  plVar9 = (longlong *)FUN_14042880c(param_1 + 0x18,param_2);
LAB_1407aea8f:
  lVar14 = *param_3;
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(plVar9 + 7)])(plVar9);
  *plVar9 = lVar14;
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  *(undefined1 *)(plVar9 + 7) = 1;
  return;
}



// FUNCTION 1407aedfe FUN_1407aedfe body=522 status=ok
// SIG undefined FUN_1407aedfe(void)

void FUN_1407aedfe(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_3;
      }
      FUN_1446f470e(&local_30,puVar6,1);
      local_88 = param_4;
      FUN_140dfb21a(param_1 + 0x6718,param_1,&local_30,param_2);
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar5 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x39);
      }
      else {
        uVar7 = (uint)uVar1;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar3 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar3 = DAT_14c998080;
          }
          if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar2 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            lVar4 = *(longlong *)(lVar2 + 0x18);
            if (*(longlong *)(lVar2 + 0x18) == 0) {
              lVar4 = lVar2 + 8;
            }
            *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x2000000;
            *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407af00a FUN_1407af00a body=2056 status=ok
// SIG undefined FUN_1407af00a(void)

undefined4
FUN_1407af00a(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,int *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  code **local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  undefined8 local_180;
  int local_178;
  undefined1 local_170 [24];
  undefined8 local_158;
  code *local_150 [5];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_d1;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 != 0) {
    if (DAT_14cb10130 == 0) {
      local_1a0 = local_150;
      local_150[0] = FUN_140754f84;
      local_190 = FUN_14081d0ea;
      local_198 = FUN_14081d0ea;
      local_1a8 = &LAB_147da9a76;
      local_1b0 = FUN_1409f3105;
      local_1b8 = L"Engine";
      local_1c0 = 0;
      local_1c8 = 0x10000000;
      local_1d0 = (code **)CONCAT44(local_1d0._4_4_,8);
      local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
      iVar3 = FUN_14490d72a(lVar7);
      uVar5 = 0;
      if (iVar3 == 3) goto LAB_1407af240;
    }
  }
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_1407ad36c();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar9 = param_2[2];
  if (lVar9 == 0) {
    uVar5 = 0;
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_1407af240;
    plVar11 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar11 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar2 != '\0')) {
      uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar9 = FUN_144aff482(uVar6,param_2);
      param_2[2] = lVar9;
      if (lVar9 == 0) goto LAB_1407af240;
      lVar7 = param_2[1];
      goto LAB_1407af0a9;
    }
LAB_1407af3e5:
    uVar5 = 0;
    param_2[2] = 0;
    goto LAB_1407af240;
  }
LAB_1407af0a9:
  if (lVar7 == 0) {
    uVar6 = FUN_1407ad36c();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
    lVar9 = param_2[2];
    if (lVar9 == 0) {
      uVar5 = 0;
      if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_1407af240;
      plVar11 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar11 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar2 == '\0')) goto LAB_1407af3e5;
      uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar9 = FUN_144aff482(uVar6,param_2);
      param_2[2] = lVar9;
      local_90 = lVar9;
      if (lVar9 == 0) goto LAB_1407af240;
    }
  }
  local_90 = lVar9;
  FUN_14067aea4(param_1,param_3);
  if (((*(float *)(lVar9 + 0x38) == 0.0) && (!NAN(*(float *)(lVar9 + 0x38)))) ||
     (*(char *)(param_4 + 0x43) != '\0')) {
    if ((((*(char *)(param_4 + 0x81) != '\0') ||
         (1.0 < *(float *)(lVar9 + 0x34) || *(float *)(lVar9 + 0x34) == 1.0)) ||
        (uVar4 = rand(), fVar15 = (float)(uVar4 & 0x7fff) / 32767.0,
        fVar15 < *(float *)(lVar9 + 0x34) || fVar15 == *(float *)(lVar9 + 0x34))) &&
       (lVar7 = FUN_141889e76(*(undefined8 *)(param_1 + 0x50),param_2), lVar7 != 0)) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_98 = 0;
      local_c8 = (code *)0x0;
      lStack_c0 = 0;
      lVar8 = *(longlong *)(lVar9 + 0x20);
      if (lVar8 == 0) {
        uVar6 = FUN_14065b502();
        lVar8 = FUN_14477b664(uVar6);
        *(longlong *)(lVar9 + 0x20) = lVar8;
      }
      plVar11 = (longlong *)(lVar9 + 0x18);
      lVar10 = *(longlong *)(lVar9 + 0x28);
      if (lVar10 == 0) {
        if ((*plVar11 != 0) && (lVar8 != 0)) {
          plVar1 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar1 != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
            uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar10 = FUN_144aff482(uVar6,plVar11);
            *(longlong *)(lVar9 + 0x28) = lVar10;
            FUN_1408d80e8(local_150,param_4);
            if (lVar10 != 0) goto LAB_1407af1b2;
            goto LAB_1407af40a;
          }
          *(undefined8 *)(lVar9 + 0x28) = 0;
        }
        FUN_1408d80e8(local_150,param_4);
      }
      else {
        FUN_1408d80e8(local_150,param_4);
LAB_1407af1b2:
        if (*(char *)(lVar10 + 0x2c) == '\x01') {
          local_d1 = 1;
        }
      }
LAB_1407af40a:
      if (local_128 != *plVar11) {
        local_118 = 0;
      }
      if (local_120 != *(longlong *)(lVar9 + 0x20)) {
        local_118 = 0;
      }
      local_128 = *plVar11;
      uVar6 = FUN_14477b664();
      local_120 = FUN_14477b664(uVar6);
      local_118 = *(undefined8 *)(lVar9 + 0x28);
      lVar9 = *(longlong *)(param_1 + 0x20);
      if (lVar9 == 0) {
LAB_1407af7e3:
        lVar9 = 0;
      }
      else {
        if (DAT_14cb10130 == 0) {
          local_1a0 = local_88;
          local_88[0] = FUN_140754f84;
          local_190 = FUN_14081d0ea;
          local_198 = FUN_14081d0ea;
          local_1a8 = &LAB_147da9a76;
          local_1b0 = FUN_1409f3105;
          local_1b8 = L"Engine";
          local_1c0 = 0;
          local_1c8 = 0x10000000;
          local_1d0 = (code **)CONCAT44(local_1d0._4_4_,8);
          local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x990);
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
        goto LAB_1407af7e3;
      }
      local_1d0 = (code **)&local_c8;
      local_1d8 = &local_b8;
      cVar2 = FUN_143d68312(*(undefined8 *)(param_1 + 0x50),param_3,lVar7,local_150);
      uVar5 = 0;
      uVar12 = 0;
      if (((((cVar2 == '\0') || (lStack_c0 == 0)) || (local_c8._4_4_ == 0)) ||
          ((uVar5 = uVar12, (int)(uint)local_c8 < 0 || (DAT_14c9647dc <= (int)(uint)local_c8)))) ||
         ((lVar7 = (ulonglong)(((uint)local_c8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_c8 >> 0x10) * 8),
          lVar7 == 0 ||
          ((*(int *)(lVar7 + 0x10) != local_c8._4_4_ || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))
          ))) goto LAB_1407af240;
      lVar7 = FUN_140899680(&local_b8);
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x40);
      }
      if (param_5 != (int *)0x0) {
        if (*param_5 == 0) {
LAB_1407af596:
          DAT_14c763920 = DAT_14c763920 + -1;
          *param_5 = DAT_14c763920;
        }
        else {
          cVar2 = FUN_140317ca6(param_5 + 1,0);
          if (cVar2 == '\0') goto LAB_1407af5f0;
          if (*param_5 == 0) goto LAB_1407af596;
        }
        if (lVar9 == 0) {
          param_5[1] = 0;
          iVar3 = 0;
        }
        else {
          uVar4 = *(uint *)(lVar9 + 0xc);
          param_5[1] = uVar4;
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar3 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar13 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar13);
            }
            LOCK();
            iVar3 = *(int *)(lVar7 + 0x10);
            bVar14 = iVar3 == 0;
            if (bVar14) {
              *(int *)(lVar7 + 0x10) = iVar13;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar3 = iVar13;
            }
          }
        }
        param_5[2] = iVar3;
      }
LAB_1407af5f0:
      local_158 = 0;
      FUN_141889fac(local_170,uVar6,local_90);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      local_88[0] = (code *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x30,8);
      *local_78 = (longlong)&PTR_FUN_14b406df0;
      local_78[1] = (longlong)param_2;
      local_78[2] = (longlong)local_170;
      local_78[3] = (longlong)&local_90;
      local_78[4] = (longlong)&local_b8;
      local_78[5] = (longlong)&local_158;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = FUN_143d64234;
      }
      if (param_5 == (int *)0x0) {
        local_178 = 0;
        local_180 = 0;
      }
      else {
        local_178 = param_5[2];
        local_180 = *(undefined8 *)param_5;
      }
      local_1d0 = local_88;
      local_1d8 = &local_180;
      uVar5 = FUN_143d65da6(uVar6,&local_c8,&local_b8,local_150);
      if (local_88[0] != (code *)0x0) {
        plVar11 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar11 = local_68;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      goto LAB_1407af240;
    }
  }
  else {
    FUN_1408d7a60(param_1 + 0x150,param_2,param_3,param_4);
  }
  uVar5 = 0;
LAB_1407af240:
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1407af814 FUN_1407af814 body=597 status=ok
// SIG undefined FUN_1407af814(void)

void FUN_1407af814(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar11 = (byte *)(param_1 + 0x64a0);
  lVar9 = 0;
  bVar8 = 0;
  local_50 = param_2;
  do {
    uVar10 = 1 << ((byte)lVar9 & 0x1f);
    if ((param_3 >> ((uint)lVar9 & 0x1f) & 1) != 0) {
      bVar8 = bVar8 | *pbVar11 ^ 1;
      *(uint *)(param_1 + 0x6498) = *(uint *)(param_1 + 0x6498) | uVar10;
      FUN_1400bc96c(pbVar11,&local_50);
      if ((param_4 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) {
        *(uint *)(param_1 + 0x6350) = *(uint *)(param_1 + 0x6350) | uVar10;
        uVar1 = *(ulonglong *)(param_1 + 0x28);
        if (uVar1 < 0xffffffff00000000) {
          plVar5 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar5 = (longlong *)0x0;
          }
          (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x35);
        }
        else {
          uVar10 = (uint)uVar1;
          if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
            puVar6 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar6 = DAT_14c998080;
            }
            if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0)
            {
              lVar3 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
              lVar7 = *(longlong *)(lVar3 + 0x18);
              if (*(longlong *)(lVar3 + 0x18) == 0) {
                lVar7 = lVar3 + 8;
              }
              *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | 0x200000;
              *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
            }
          }
        }
        FUN_1400bc96c(pbVar11 + -0x148,&local_50);
      }
    }
    lVar9 = lVar9 + 1;
    pbVar11 = pbVar11 + 0x28;
  } while (lVar9 != 8);
  if ((bVar8 & 1) == 0) goto LAB_1407af92e;
  if ((*(byte *)(param_1 + 0x6498) & 2) == 0) {
    uVar10 = FUN_1403ae46b();
    if (((((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0x78f0))) &&
         (lVar9 = (ulonglong)uVar10 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar9 != 0)) &&
        ((*(longlong *)(lVar9 + 0x20) != 0 && (*(longlong **)(lVar9 + 0x28) != (longlong *)0x0))))
       && (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))(), lVar9 != 0)) {
      uVar4 = FUN_1403ae386();
      plVar5 = (longlong *)FUN_144718840(lVar9,uVar4);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar10 = *(uint *)(param_1 + 0x6498), uVar2 = (**(code **)(*plVar5 + 0xa8))(plVar5),
         (uVar2 & uVar10) != 0)) goto LAB_1407af8e3;
    }
  }
  else {
LAB_1407af8e3:
    FUN_1407afb5c(param_1,1,1);
  }
  if (((*(byte *)(param_1 + 0x6498) & 1) != 0) && (lVar9 = FUN_1407afa82(param_1), lVar9 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
LAB_1407af92e:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407afa82 FUN_1407afa82 body=121 status=ok
// SIG undefined FUN_1407afa82(void)

longlong FUN_1407afa82(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_140232fad();
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
     (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      return 0;
    }
    if (*(longlong **)(lVar2 + 0x28) == (longlong *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      lVar3 = FUN_140232dfe();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1407afafc FUN_1407afafc body=96 status=ok
// SIG undefined FUN_1407afafc(void)

void FUN_1407afafc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0x178) == '\x03') &&
       (lVar1 = *(longlong *)(param_1 + 0xb20), lVar1 != 0)) && (*(char *)(lVar1 + 0x178) == '\x03')
      ) && (*(char *)(param_1 + 0xaf0) != '\0')) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10e0) + 0x50))(lVar1 + 0x10e0);
    FUN_140c4a7e8(uVar2,*(undefined1 *)(param_1 + 0xaf0),1);
    *(undefined1 *)(param_1 + 0xaf0) = 0;
  }
  return;
}



// FUNCTION 1407afb5c FUN_1407afb5c body=293 status=ok
// SIG undefined FUN_1407afb5c(void)

void FUN_1407afb5c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_1403ae46b();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x178) == '\x03') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
        }
        local_78 = 0;
        uStack_70 = 0;
        local_68 = DAT_14c8464e0;
        uStack_60 = DAT_14c8464e8;
        local_58 = DAT_14c8464f0;
        local_50 = (undefined4)DAT_14c8464f8;
        uStack_4c = DAT_14c8464f8._4_4_;
        uStack_48 = (undefined4)DAT_14c846500;
        uStack_44 = DAT_14c846500._4_4_;
        local_40 = DAT_14c846508;
        (**(code **)(*plVar4 + 0x48))(plVar4,&local_78);
        FUN_1407afc9c(param_1,param_2,param_3,&local_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407afc9c FUN_1407afc9c body=211 status=ok
// SIG undefined FUN_1407afc9c(void)

void FUN_1407afc9c(longlong *param_1,undefined1 param_2,undefined1 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_4;
  local_68 = param_2;
  local_67 = param_3;
  if (DAT_14c950c29 == 1) {
    if (local_60 == 0) {
      local_60 = 0;
    }
    else {
      FUN_1456cec3c();
      local_60 = *param_4;
    }
  }
  local_58 = param_4[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_1456cec3c();
      local_58 = param_4[1];
    }
  }
  local_50 = (undefined4)param_4[2];
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_48 = (undefined4)param_4[3];
  uStack_44 = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_40 = (undefined4)param_4[4];
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_38 = (undefined4)param_4[5];
  uStack_34 = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_30 = (undefined4)param_4[6];
  uStack_2c = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_28 = (undefined4)param_4[7];
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar1 = FUN_14477b072(param_1,DAT_14cba80c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407afd70 FUN_1407afd70 body=27 status=ok
// SIG undefined FUN_1407afd70(void)

void FUN_1407afd70(longlong param_1,char param_2,undefined8 param_3)

{
  if (param_2 == '\0') {
    FUN_1400bc8c2(param_1 + 0xb0,param_3);
    return;
  }
  FUN_1400bc96c(param_1 + 0xb0,param_3);
  return;
}



// FUNCTION 1407afd94 FUN_1407afd94 body=157 status=ok
// SIG undefined FUN_1407afd94(void)

undefined8 FUN_1407afd94(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 3)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_1c = 0;
    FUN_140008118(&local_38);
    if ((*param_1 != local_38) || ((int)param_1[1] != local_30)) {
      *param_1 = local_38;
      *(int *)(param_1 + 1) = local_30;
      param_1[2] = 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1407afe32 FUN_1407afe32 body=79 status=ok
// SIG undefined FUN_1407afe32(void)

undefined8 * FUN_1407afe32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b14f7e0;
  param_1[0x81] = &PTR_LAB_14b14fe20;
  FUN_14028f4a8(param_1 + 0x82);
  FUN_1407afe82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407afe82 FUN_1407afe82 body=81 status=ok
// SIG undefined FUN_1407afe82(void)

void FUN_1407afe82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac265a0;
  FUN_1407afed4(param_1 + 0x7d,1);
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1407afed4 FUN_1407afed4 body=124 status=ok
// SIG undefined FUN_1407afed4(void)

void FUN_1407afed4(longlong *param_1)

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



// FUNCTION 1407aff50 FUN_1407aff50 body=38 status=ok
// SIG undefined FUN_1407aff50(void)

void FUN_1407aff50(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x51) == '\x01') {
    iVar1 = FUN_1407aff76();
    iVar2 = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x40) = iVar2;
  }
  return;
}



// FUNCTION 1407aff76 FUN_1407aff76 body=881 status=ok
// SIG undefined FUN_1407aff76(void)

undefined4 FUN_1407aff76(longlong param_1)

{
  int *piVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  double *pdVar21;
  bool bVar22;
  double dVar23;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  float local_bc;
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0x51) == '\x01') &&
     (plVar8 = *(longlong **)(param_1 + 0x68), plVar8 != (longlong *)0x0)) {
    iVar15 = (int)plVar8[1];
    do {
      if (iVar15 == 0) goto LAB_1407b024a;
      LOCK();
      iVar13 = (int)plVar8[1];
      bVar22 = iVar15 == iVar13;
      if (bVar22) {
        *(int *)(plVar8 + 1) = iVar15 + 1;
        iVar13 = iVar15;
      }
      iVar15 = iVar13;
      UNLOCK();
    } while (!bVar22);
    lVar9 = *(longlong *)(param_1 + 0x60);
    if (lVar9 == 0) {
      bVar22 = false;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 8);
      plVar10 = *(longlong **)(param_1 + 0x10);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (*(int *)(lVar19 + 0x110) == 0) {
LAB_1407b0292:
        bVar22 = false;
      }
      else {
        uVar7 = *(uint *)(lVar19 + 0x10c);
        bVar22 = false;
        if ((-1 < (int)uVar7) && (bVar22 = false, (int)uVar7 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             ((((int)plVar18[2] != *(int *)(lVar19 + 0x110) ||
               ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) || (lVar20 = *plVar18, lVar20 == 0))))
          goto LAB_1407b0292;
          lVar17 = (longlong)*(int *)(*(longlong *)(lVar19 + 0x10) + 0x1b8);
          if (lVar17 == 0) {
            bVar22 = true;
          }
          else {
            dVar4 = *(double *)(lVar20 + 0x270);
            pdVar21 = *(double **)(*(longlong *)(lVar19 + 0x10) + 0x1b0);
            pdVar2 = pdVar21 + lVar17 * 3;
            fVar3 = *(float *)(param_1 + 0x44);
            dVar5 = *(double *)(lVar20 + 0x260);
            dVar6 = *(double *)(lVar20 + 0x268);
            do {
              dVar11 = *pdVar21 - dVar5;
              dVar23 = pdVar21[1] - dVar6;
              dVar12 = pdVar21[2] - dVar4;
              bVar22 = (double)(fVar3 * fVar3) < dVar12 * dVar12 + dVar23 * dVar23 + dVar11 * dVar11
              ;
              if (!bVar22) goto LAB_1407b0292;
              iVar15 = *(int *)(lVar9 + 0x110);
              if ((longlong)iVar15 != 0) {
                lVar19 = *(longlong *)(lVar9 + 0x108);
                lVar20 = 0;
                do {
                  if (*(longlong *)(lVar19 + lVar20) != 0) {
                    local_c8 = pdVar21[2];
                    local_d8 = *(undefined4 *)pdVar21;
                    uStack_d4 = *(undefined4 *)((longlong)pdVar21 + 4);
                    uStack_d0 = *(undefined4 *)(pdVar21 + 1);
                    uStack_cc = *(undefined4 *)((longlong)pdVar21 + 0xc);
                    plVar18 = *(longlong **)(*(longlong *)(lVar19 + lVar20) + 0x3a8);
                    if (((plVar18 != (longlong *)0x0) &&
                        (local_e8 = lVar20, local_e0 = lVar19,
                        cVar14 = (**(code **)(*plVar18 + 0x7c0))
                                           (plVar18,&local_d8,&local_bc,local_b8), lVar19 = local_e0
                        , lVar20 = local_e8, cVar14 != '\0')) &&
                       ((0.0 <= local_bc && (local_bc <= 0.0)))) goto LAB_1407b0292;
                  }
                  lVar20 = lVar20 + 8;
                } while ((longlong)iVar15 * 8 != lVar20);
              }
              pdVar21 = pdVar21 + 3;
            } while (pdVar21 != pdVar2);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar10 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
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
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (bVar22) {
      cVar14 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x10) + 0x88))();
      uVar16 = 0;
      if (cVar14 == '\0') {
        uVar16 = *(undefined4 *)(param_1 + 0x34);
      }
      goto LAB_1407b0172;
    }
  }
LAB_1407b024a:
  if (((*(char *)(param_1 + 0x50) == '\x01') && (*(int *)(param_1 + 0x38) < 1)) &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x1f0) == '\0')) {
    uVar16 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar16 = *(undefined4 *)(param_1 + 0x28);
  }
LAB_1407b0172:
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 1407b02ee FUN_1407b02ee body=57 status=ok
// SIG undefined FUN_1407b02ee(void)

void FUN_1407b02ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb214d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb214d8 = FUN_140002ddd(FUN_1464330aa,uVar1,L"GbxBrainAspect_IsInRange");
  }
  return;
}



// FUNCTION 1407b0328 FUN_1407b0328 body=286 status=ok
// SIG undefined FUN_1407b0328(void)

undefined8 FUN_1407b0328(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1407b0440;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1407b0440;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1407b0440:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1407b03e9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1407b03e9;
    }
  }
  uVar6 = 0;
LAB_1407b03e9:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b0448 FUN_1407b0448 body=3827 status=ok
// SIG undefined FUN_1407b0448(void)

void FUN_1407b0448(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  code **ppcVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  code **ppcVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  code *local_210;
  undefined1 *local_208;
  code **local_200;
  code *local_1f8;
  code *local_1f0;
  uint local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b0;
  undefined1 *local_1a8;
  longlong *local_1a0;
  uint local_198 [4];
  uint *local_188;
  undefined8 local_180;
  code *local_178 [16];
  code **local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar29 = *(uint *)(param_1 + 0xc);
  if ((int)uVar29 < DAT_14c9647dc) {
    lVar16 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
  }
  else {
    lVar16 = 0;
  }
  if (((*(uint *)(lVar16 + 8) >> 0x1c & 1) == 0) && (-1 < (short)*(undefined4 *)(param_1 + 8))) {
    if (DAT_14cb10130 == 0) {
      local_200 = local_178;
      local_178[0] = FUN_140754f84;
      local_1f0 = FUN_14081d0ea;
      local_1f8 = FUN_14081d0ea;
      local_208 = &LAB_147da9a76;
      local_210 = FUN_1409f3105;
      local_218 = L"Engine";
      local_220 = 0;
      local_228 = 0x10000000;
      local_230 = 8;
      local_238 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar16 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_200 = local_178;
      local_178[0] = FUN_1449e2820;
      local_1f0 = FUN_14081d0ea;
      local_1f8 = FUN_14081d0ea;
      local_208 = &LAB_1468c5283;
      local_210 = FUN_142809da0;
      local_218 = L"Engine";
      local_220 = 0x400000000;
      local_228 = 0x10000000;
      local_230 = 8;
      local_238 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar20 = *(longlong *)(param_1 + 0x20);
    if (lVar20 == 0) {
      lVar25 = 0;
    }
    else {
      iVar12 = *(int *)(lVar16 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar12) ||
           (lVar25 = lVar20,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar12 * 8)
           != lVar16 + 0x30)) {
          lVar25 = 0;
        }
      } while ((lVar25 == 0) && (lVar20 = *(longlong *)(lVar20 + 0x20), lVar20 != 0));
    }
    if (((*(longlong *)(lVar25 + 0x30) != 0) &&
        (((lVar16 = *(longlong *)(*(longlong *)(lVar25 + 0x30) + 0x2b0), lVar16 != 0 &&
          (*(longlong *)(lVar16 + 0x588) != 0)) &&
         (*(double *)(lVar25 + 0x708) <= *(double *)(lVar25 + 0x6d0))))) ||
       (((*(byte *)(lVar25 + 0x154) & 0x40) != 0 &&
        (lVar16 = FUN_14490d72a(lVar25), (int)lVar16 == 3)))) {
      local_1dc = (uint)CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
    }
    else {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar16 = (longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8;
        lVar20 = 0;
        do {
          lVar28 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar20);
          if (*(longlong *)(lVar28 + 0x360) == lVar25) {
            if ((lVar28 != 0) &&
               (local_1dc = (uint)CONCAT71((int7)((ulonglong)lVar16 >> 8),1),
               (*(byte *)(lVar28 + 0x278) & 1) != 0)) goto LAB_1407b05e7;
            break;
          }
          lVar20 = lVar20 + 8;
        } while (lVar16 != lVar20);
      }
      uVar10 = FUN_144a80e00(lVar25);
      if ((char)uVar10 == '\0') {
        local_1dc = 0;
      }
      else {
        local_1dc = (uint)CONCAT71((int7)((ulonglong)uVar10 >> 8),*(byte *)(lVar25 + 0x155) >> 7);
      }
    }
LAB_1407b05e7:
    dVar3 = *(double *)(lVar25 + 0x6d8);
    dVar4 = *(double *)(lVar25 + 0x6d0);
    local_180._0_4_ = 0;
    local_f8 = (code **)0x0;
    local_f0 = 0x1000000000;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    uStack_cc = 0x80;
    uStack_c8._0_4_ = 0xffffffff;
    uStack_c8._4_4_ = 0;
    local_188 = (uint *)0x0;
    local_180 = 0x8000000000;
    local_f0._0_4_ = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      uVar31 = 0;
      do {
        uVar32 = local_180;
        uVar13 = (uint)uVar31;
        uVar29 = 1 << ((byte)uVar31 & 0x1f);
        lVar16 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar16 = param_1 + 0x48;
        }
        uVar30 = uVar31 >> 5 & 0x7ffffff;
        if ((*(uint *)(lVar16 + uVar30 * 4) >> (uVar13 & 0x1f) & 1) != 0) {
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + uVar31 * 0x30) + 0x80) == 0
             ) {
            lVar16 = *(longlong *)(param_1 + 0x38) + uVar31 * 0x30;
            fVar33 = param_2;
            fVar34 = param_2;
            if (0.0 <= *(float *)(lVar16 + 0x20)) {
              fVar33 = (float)dVar3 - *(float *)(lVar16 + 0x20);
              if (fVar33 < (float)*(int *)(lVar16 + 0x18) * 0.001) goto LAB_1407b099d;
              fVar34 = (float)dVar4 - *(float *)(lVar16 + 0x24);
            }
            *(float *)(lVar16 + 0x20) = (float)dVar3;
            *(float *)(lVar16 + 0x24) = (float)dVar4;
            iVar12 = (int)local_f0;
            if ((longlong)uVar31 < (longlong)(int)local_f0) {
              ppcVar17 = local_f8;
              if (local_f8 == (code **)0x0) {
                ppcVar17 = local_178;
              }
            }
            else {
              iVar23 = uVar13 + 1;
              uVar13 = iVar23 - (int)local_f0;
              local_f0 = CONCAT44(local_f0._4_4_,iVar23);
              if ((uint)(local_f0._4_4_ - iVar12) < uVar13) {
                FUN_14011a0e2(local_178);
                iVar23 = (int)local_f0;
              }
              ppcVar17 = local_f8;
              if (local_f8 == (code **)0x0) {
                ppcVar17 = local_178;
              }
              if ((int)local_d0 < iVar23) {
                do {
                  uVar13 = local_d0;
                  lVar16 = (longlong)(int)local_d0;
                  *(undefined4 *)(ppcVar17 + lVar16) = 0xffffffff;
                  *(uint *)((longlong)ppcVar17 + lVar16 * 8 + 4) = (uint)uStack_c8;
                  if (uStack_c8._4_4_ != 0) {
                    *(uint *)(ppcVar17 + (int)(uint)uStack_c8) = uVar13;
                  }
                  uVar19 = local_d0;
                  uStack_c8._0_4_ = uVar13;
                  if (local_d0 == 0) {
                    iVar12 = -1;
                  }
                  else {
                    iVar12 = local_d0 + 0x1e;
                    if (-1 < (int)(local_d0 - 1)) {
                      iVar12 = local_d0 - 1;
                    }
                    iVar12 = iVar12 >> 5;
                  }
                  uVar13 = local_d0 + 0x1f;
                  if (-1 < (int)local_d0) {
                    uVar13 = local_d0;
                  }
                  if ((int)uVar13 >> 5 == iVar12) {
                    local_d0 = local_d0 + 1;
                  }
                  else {
                    FUN_1403a3a36(local_e8);
                    uVar6 = local_d0 + 1;
                    uVar5 = local_d0 + 0x20;
                    if (-1 < (int)uVar6) {
                      uVar5 = uVar6;
                    }
                    local_d0 = uVar6;
                    iVar12 = uVar6 - (uVar5 & 0xffffffe0);
                    if (iVar12 != 0) {
                      puVar8 = local_d8;
                      if (local_d8 == (undefined1 *)0x0) {
                        puVar8 = local_e8;
                      }
                      bVar11 = -(char)iVar12;
                      *(uint *)(puVar8 + (longlong)((int)uVar5 >> 5) * 4) =
                           (uint)(*(int *)(puVar8 + (longlong)((int)uVar5 >> 5) * 4) <<
                                 (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
                    }
                  }
                  puVar8 = local_d8;
                  if (local_d8 == (undefined1 *)0x0) {
                    puVar8 = local_e8;
                  }
                  bVar11 = (byte)uVar19 & 0x1f;
                  *(uint *)(puVar8 + (longlong)((int)uVar13 >> 5) * 4) =
                       *(uint *)(puVar8 + (longlong)((int)uVar13 >> 5) * 4) &
                       (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
                  uStack_c8._4_4_ = uStack_c8._4_4_ + 1;
                } while ((int)local_d0 < (int)local_f0);
              }
            }
            uStack_c8._4_4_ = uStack_c8._4_4_ + -1;
            iVar12 = *(int *)(ppcVar17 + uVar31);
            uVar13 = *(uint *)((longlong)ppcVar17 + uVar31 * 8 + 4);
            if ((longlong)iVar12 == -1) {
              uStack_c8._0_4_ = uVar13;
            }
            else {
              *(uint *)((longlong)ppcVar17 + (longlong)iVar12 * 8 + 4) = uVar13;
            }
            if (uVar13 != 0xffffffff) {
              *(int *)(ppcVar17 + (int)uVar13) = iVar12;
            }
            puVar8 = local_d8;
            if (local_d8 == (undefined1 *)0x0) {
              puVar8 = local_e8;
            }
            *(uint *)(puVar8 + uVar30 * 4) = *(uint *)(puVar8 + uVar30 * 4) | uVar29;
            ppcVar17 = local_f8;
            if (local_f8 == (code **)0x0) {
              ppcVar17 = local_178;
            }
            ppcVar17[uVar31] = (code *)CONCAT44(fVar34,fVar33);
          }
          else {
            iVar12 = uVar13 + 1;
            iVar23 = iVar12 - (int)local_180;
            if (iVar23 != 0 && (int)local_180 <= iVar12) {
              if ((int)local_180 == 0) {
LAB_1407b09b2:
                if ((longlong)local_180._4_4_ <= (longlong)uVar31) {
                  if (uVar31 < 0x80) {
                    uVar18 = local_180 & 0xffffffff;
                    iVar12 = 0x80;
                  }
                  else {
                    uVar13 = uVar13 + 0x20 >> 5;
                    if (local_180._4_4_ + 0x1fU < 0xa0) {
                      uVar19 = 4;
                      if (4 < uVar13) {
                        uVar19 = uVar13;
                      }
                    }
                    else {
                      uVar19 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
                    }
                    uVar9 = (ulonglong)(uVar19 * 4);
                    if (DAT_14c872d28 == (longlong *)0x0) {
LAB_1407b0a87:
                      uVar18 = local_180 & 0xffffffff;
                    }
                    else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar6 = (uint)(uVar9 + 0xf);
                      if (uVar19 < 0x1ffd) {
                        uVar9 = (ulonglong)
                                (ushort)(&DAT_14c841d90)
                                        [0x32 - (byte)(&DAT_14c841e00)[uVar9 + 0xf >> 4]];
                        goto LAB_1407b0a87;
                      }
                      uVar18 = (ulonglong)(uVar6 & 0xfffffff0);
                      if (uVar18 < 0x7ff1) {
                        bVar11 = (&DAT_14c841e00)[uVar6 >> 4];
                        uVar21 = 0x32;
                        if (0x32 < bVar11) {
                          uVar21 = (ulonglong)bVar11;
                        }
                        uVar26 = 0x32 - (ulonglong)bVar11;
                        do {
                          uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1407b0b0c;
                          lVar16 = uVar21 + 1 + uVar26;
                          uVar26 = uVar26 - 1;
                        } while (lVar16 != 0x33);
                      }
                      uVar9 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar9 = 0x10;
                      }
                      uVar9 = -uVar9 & (uVar18 + uVar9) - 1;
LAB_1407b0b0c:
                      uVar18 = local_180 & 0xffffffff;
                    }
                    else {
                      uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
                      uVar18 = local_180 & 0xffffffff;
                    }
                    iVar24 = (int)(uVar9 >> 2);
                    iVar12 = iVar24 << 5;
                    if (iVar24 < (int)uVar13) {
                      iVar12 = -0x20;
                    }
                  }
                  local_180 = CONCAT44(iVar12,(int)local_180);
                  FUN_1446efbd8(local_198,uVar18);
                  iVar12 = (int)local_180 + iVar23;
                }
                iVar24 = iVar12 + 0x1f;
                if (-1 < iVar12) {
                  iVar24 = iVar12;
                }
                local_180 = CONCAT44(local_180._4_4_,iVar12);
                if (iVar12 % 0x20 != 0) {
                  puVar7 = local_188;
                  if (local_188 == (uint *)0x0) {
                    puVar7 = local_198;
                  }
                  bVar11 = -(char)(iVar12 % 0x20);
                  puVar7[iVar24 >> 5] = (puVar7[iVar24 >> 5] << (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
                }
              }
              else {
                iVar24 = (int)local_180 + 0x1e;
                if (-1 < (int)local_180 + -1) {
                  iVar24 = (int)local_180 + -1;
                }
                if ((int)uVar30 != iVar24 >> 5) goto LAB_1407b09b2;
                local_180 = CONCAT44(local_180._4_4_,iVar12);
              }
              FUN_1447c6044(local_198,uVar32 & 0xffffffff,iVar23,0);
            }
            puVar7 = local_188;
            if (local_188 == (uint *)0x0) {
              puVar7 = local_198;
            }
            puVar7[uVar30] = puVar7[uVar30] | uVar29;
          }
        }
LAB_1407b099d:
        uVar31 = uVar31 + 1;
      } while ((longlong)uVar31 < (longlong)*(int *)(param_1 + 0x40));
    }
    if ((int)local_f0 != uStack_c8._4_4_ || (int)local_180 != 0) {
      local_1c8 = 0;
      uStack_1c0 = 0;
      uVar10 = *(undefined8 *)(param_1 + 0x78);
      *(longlong **)(param_1 + 0x78) = &local_1c8;
      iVar12 = (int)local_180;
      if (((int)local_f0 != uStack_c8._4_4_) &&
         (iVar23 = *(int *)(param_1 + 0x30), (longlong)iVar23 != 0)) {
        lVar16 = *(longlong *)(param_1 + 0x28);
        local_1dc = local_1dc ^ 1;
        lVar20 = 0;
        do {
          bVar11 = *(byte *)(lVar16 + 0x14 + lVar20);
          if ((((((byte)((byte)local_1dc | bVar11) == 1) &&
                (iVar12 = *(int *)(lVar16 + 0xc + lVar20), iVar12 != 0)) &&
               (uVar29 = *(uint *)(lVar16 + 8 + lVar20), -1 < (int)uVar29)) &&
              (((int)uVar29 < DAT_14c9647dc &&
               (plVar27 = (longlong *)
                          ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
               plVar27 != (longlong *)0x0)))) &&
             (((int)plVar27[2] == iVar12 &&
              (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 && (*plVar27 != 0)))))) {
            uVar29 = *(uint *)(lVar16 + 0x10 + lVar20);
            uVar31 = (ulonglong)uVar29;
            if ((-1 < (int)uVar29) && ((int)uVar29 < (int)local_d0)) {
              puVar8 = local_d8;
              if (local_d8 == (undefined1 *)0x0) {
                puVar8 = local_e8;
              }
              if ((*(uint *)(puVar8 + (ulonglong)(uVar29 >> 5) * 4) >> (uVar29 & 0x1f) & 1) != 0) {
                ppcVar17 = local_f8;
                if (local_f8 == (code **)0x0) {
                  ppcVar17 = local_178;
                }
                ppcVar22 = (code **)((longlong)ppcVar17 + uVar31 * 8 + 4);
                if (bVar11 != 0) {
                  ppcVar22 = ppcVar17 + uVar31;
                }
                plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x10 + uVar31 * 0x30);
                if (plVar27 == (longlong *)0x0) {
                  (**(code **)(**(longlong **)(lVar16 + lVar20) + 0x10))
                            (*(longlong **)(lVar16 + lVar20),*(undefined4 *)ppcVar22,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + uVar31 * 0x30));
                }
                else {
                  LOCK();
                  *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
                  UNLOCK();
                  (**(code **)(**(longlong **)(lVar16 + lVar20) + 0x10))();
                  LOCK();
                  plVar1 = plVar27 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar27)();
                    LOCK();
                    piVar2 = (int *)((longlong)plVar27 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar27 + 0x10))();
                    }
                  }
                }
              }
            }
          }
          lVar20 = lVar20 + 0x18;
        } while ((longlong)iVar23 * 0x18 != lVar20);
        iVar12 = (int)local_180;
      }
      if (iVar12 == 0) {
        uVar32 = 1;
        iVar24 = 0;
        uVar31 = 0;
        iVar23 = 0;
      }
      else {
        puVar7 = local_188;
        if (local_188 == (uint *)0x0) {
          puVar7 = local_198;
        }
        uVar29 = *puVar7;
        if (uVar29 == 0) {
          iVar23 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar23 = iVar12 + -1;
          }
          uVar31 = 0;
          uVar32 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar32 = uVar31;
          }
          iVar24 = 0;
          do {
            if (uVar32 == uVar31) goto LAB_1407b0efc;
            iVar24 = iVar24 + 0x20;
            uVar29 = puVar7[uVar31 + 1];
            uVar31 = uVar31 + 1;
          } while (uVar29 == 0);
        }
        else {
          iVar24 = 0;
          uVar31 = 0;
        }
        uVar32 = (ulonglong)(-uVar29 & uVar29);
        uVar30 = uVar32 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar23 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar12 <= iVar23) {
          iVar23 = iVar12;
        }
      }
      if (iVar23 < iVar12) {
        uVar29 = 0xffffffff;
        do {
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar23 * 0x30);
          if (lVar16 != 0) {
            uVar13 = *(uint *)(lVar16 + 0xc);
            if ((int)uVar13 < DAT_14c9647dc) {
              lVar20 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
            }
            else {
              lVar20 = 0;
            }
            if (((*(uint *)(lVar20 + 8) >> 0x1c & 1) == 0) &&
               (-1 < (short)*(undefined4 *)(lVar16 + 8))) {
              lVar16 = *(longlong *)(param_1 + 0x38) + (longlong)iVar23 * 0x30;
              fVar33 = *(float *)(lVar16 + 0x1c);
              lVar16 = *(longlong *)(lVar16 + 8);
              if (*(int *)(lVar16 + 0x80) == 0) {
                *(undefined4 *)(lVar16 + 0x80) = DAT_14cab2be4;
              }
              FUN_14029f2bc(lVar16,(double)fVar33);
              iVar12 = (int)local_180;
            }
          }
          uVar29 = uVar29 & ~(uint)uVar32;
          puVar7 = local_188;
          if (local_188 == (uint *)0x0) {
            puVar7 = local_198;
          }
          iVar23 = (int)uVar31;
          lVar16 = (longlong)iVar23;
          uVar13 = puVar7[lVar16] & uVar29;
          if (uVar13 == 0) {
            iVar14 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar14 = iVar12 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar15 = iVar14;
            if (iVar14 < iVar23) {
              iVar15 = iVar23;
            }
            if (iVar14 <= iVar23) break;
            lVar20 = 0;
            while( true ) {
              iVar24 = iVar24 + 0x20;
              uVar13 = puVar7[lVar16 + lVar20 + 1];
              if (uVar13 != 0) break;
              lVar20 = lVar20 + 1;
              if (iVar15 - lVar16 == lVar20) goto LAB_1407b0efc;
            }
            uVar31 = (ulonglong)(iVar23 + (int)lVar20 + 1);
            uVar29 = 0xffffffff;
          }
          uVar32 = (ulonglong)(-uVar13 & uVar13);
          uVar30 = uVar32 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar23 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar23 < iVar12);
      }
LAB_1407b0efc:
      if (0 < (int)local_f0) {
        lVar16 = 0;
        uVar31 = 0;
        iVar12 = (int)local_f0;
        do {
          puVar8 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar8 = local_e8;
          }
          if ((*(uint *)(puVar8 + (uVar31 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar31 & 0x1f) & 1) != 0)
          {
            lVar20 = *(longlong *)(param_1 + 0x38);
            lVar25 = *(longlong *)(lVar20 + lVar16);
            if (lVar25 != 0) {
              uVar29 = *(uint *)(lVar25 + 0xc);
              if ((int)uVar29 < DAT_14c9647dc) {
                lVar28 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
              }
              else {
                lVar28 = 0;
              }
              if ((((*(uint *)(lVar28 + 8) >> 0x1c & 1) == 0) &&
                  (-1 < (short)*(undefined4 *)(lVar25 + 8))) &&
                 (((lVar25 = *(longlong *)(lVar20 + 8 + lVar16), *(int *)(lVar25 + 0x20) != 0 ||
                   (*(int *)(lVar25 + 0x40) != 0)) ||
                  ((((*(int *)(lVar25 + 0x14) != 0 &&
                     (uVar29 = *(uint *)(lVar25 + 0x10), -1 < (int)uVar29)) &&
                    ((int)uVar29 < DAT_14c9647dc)) &&
                   ((((plVar27 = (longlong *)
                                 ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                      plVar27 != (longlong *)0x0 && ((int)plVar27[2] == *(int *)(lVar25 + 0x14))) &&
                     ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)) &&
                    ((lVar28 = *plVar27, lVar28 != 0 &&
                     ((*(ulonglong *)(lVar28 + 0x6e0) == 0 ||
                      (*(ulonglong *)(lVar28 + 0x6e0) < *(ulonglong *)(lVar28 + 0x278))))))))))))) {
                fVar33 = *(float *)(lVar20 + 0x1c + lVar16);
                if (*(int *)(lVar25 + 0x80) == 0) {
                  *(undefined4 *)(lVar25 + 0x80) = DAT_14cab2be4;
                }
                FUN_14029f2bc(lVar25,(double)fVar33);
                iVar12 = (int)local_f0;
              }
            }
          }
          uVar31 = uVar31 + 1;
          lVar16 = lVar16 + 0x30;
        } while ((longlong)uVar31 < (longlong)iVar12);
      }
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      local_1d8 = local_1c8;
      local_1d0 = (undefined4)uStack_1c0;
      FUN_140c2af12(param_1);
      local_1a0 = &local_1b0;
      local_1a8 = &LAB_1432e042a;
      local_1b0 = param_1;
      FUN_140de924e(param_1 + 0x80);
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_188 != (uint *)0x0) {
      FUN_1400020a8();
    }
    uVar31 = local_f0 >> 0x20;
    local_f0 = local_f0 & 0xffffffff00000000;
    if ((int)uVar31 != 0) {
      FUN_14179f972(local_178);
    }
    uStack_c8 = 0xffffffff;
    local_d0 = 0;
    if (0x80 < uStack_cc) {
      uStack_cc = 0x80;
      FUN_1403a3b9e(local_e8,0);
    }
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b133c FUN_1407b133c body=70 status=ok
// SIG undefined FUN_1407b133c(void)

void FUN_1407b133c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(param_1 + 3);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407b1382 FUN_1407b1382 body=55 status=ok
// SIG undefined FUN_1407b1382(void)

void FUN_1407b1382(longlong *param_1)

{
  FUN_1407b13ba(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407b13ba FUN_1407b13ba body=123 status=ok
// SIG undefined FUN_1407b13ba(void)

void FUN_1407b13ba(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 1407b1448 FUN_1407b1448 body=124 status=ok
// SIG undefined FUN_1407b1448(void)

void FUN_1407b1448(longlong param_1,float param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  longlong *local_48;
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0.0 <= param_2) {
    FUN_1407b161a(local_68);
    FUN_1407b14c6(param_1 + 0x308,local_68);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b14c6 FUN_1407b14c6 body=146 status=ok
// SIG undefined FUN_1407b14c6(void)

int FUN_1407b14c6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_1407b174e(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 4) * -0x33333333;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x50;
    } while ((longlong)(int)lVar2 * 0x50 != uVar5);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_145745354(param_1,iVar4);
  }
  FUN_1407b1558((longlong)iVar4 * 0x50 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 1407b1558 FUN_1407b1558 body=193 status=ok
// SIG undefined FUN_1407b1558(void)

undefined4 * FUN_1407b1558(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  FUN_14023423e(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0x10] = param_2[0x10];
  lVar1 = *(longlong *)(param_2 + 0x12);
  *(longlong *)(param_1 + 0x12) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1407b161a FUN_1407b161a body=308 status=ok
// SIG undefined FUN_1407b161a(void)

undefined4 * FUN_1407b161a(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  
  *param_1 = param_2;
  *(longlong *)(param_1 + 2) = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
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
  *(longlong **)(param_1 + 8) = DAT_14c844840;
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
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1407b174e FUN_1407b174e body=125 status=ok
// SIG undefined FUN_1407b174e(void)

undefined8 FUN_1407b174e(float *param_1,float *param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    lVar1 = *(longlong *)(param_2 + 2);
    uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar2 = extraout_var;
    }
    if (((*(longlong *)(param_1 + 2) == lVar1) && (*(char *)(param_1 + 4) == *(char *)(param_2 + 4))
        ) && (*(char *)((longlong)param_1 + 0x11) == *(char *)((longlong)param_2 + 0x11))) {
      lVar1 = *(longlong *)(param_2 + 6);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
        uVar2 = extraout_var_00;
      }
      return CONCAT71(uVar2,*(longlong *)(param_1 + 6) == lVar1);
    }
  }
  return 0;
}



// FUNCTION 1407b17cb FUN_1407b17cb body=2607 status=ok
// SIG undefined FUN_1407b17cb(void)

undefined8 *
FUN_1407b17cb(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,longlong param_6,undefined4 param_7,longlong *param_8,
             longlong param_9)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 **ppuVar21;
  undefined8 *puVar22;
  undefined1 uVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 **local_130;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar20 + 0xee;
  local_120 = param_1;
  local_110 = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x780);
    puVar20 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar13 = puVar20 + 0xee;
  }
  *puVar1 = (ulonglong)puVar13;
  *puVar20 = &PTR_FUN_14a2c4488;
  local_f8 = puVar20 + 2;
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 1;
  puVar20[4] = 0;
  *(undefined1 *)(puVar20 + 5) = 1;
  puVar20[6] = 0;
  *(undefined1 *)(puVar20 + 7) = 1;
  puVar20[8] = 0;
  *(undefined1 *)(puVar20 + 9) = 1;
  local_f0 = puVar20 + 10;
  puVar20[0x10] = 0;
  *(undefined4 *)(puVar20 + 0x11) = 0;
  *(undefined1 (*) [16])(puVar20 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  puVar20[0xe] = 0;
  *(undefined8 *)((longlong)puVar20 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar20 + 0x94) = 0;
  *(undefined4 *)((longlong)puVar20 + 0x9c) = 0x3f800000;
  lVar10 = 0x180;
  do {
    *(undefined1 (*) [16])((longlong)puVar20 + lVar10) = (undefined1  [16])0x0;
    lVar10 = lVar10 + 0x80;
  } while (lVar10 != 0x400);
  lVar10 = 0x400;
  do {
    *(undefined1 (*) [16])((longlong)puVar20 + lVar10) = (undefined1  [16])0x0;
    lVar10 = lVar10 + 0x80;
  } while (lVar10 != 0x680);
  local_108 = puVar20 + 200;
  puVar20[200] = 0;
  puVar20[0xc9] = 0x3f80000000000000;
  *(undefined1 (*) [16])(puVar20 + 0xc2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar20 + 0xc5) = (undefined1  [16])0x0;
  lVar10 = 0x670;
  do {
    *(undefined1 (*) [16])((longlong)puVar20 + lVar10) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar20 + lVar10 + 0x10) = 0xffff0000;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x730);
  *(undefined4 *)((longlong)puVar20 + 0x744) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xe6) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar20 + 0xe8) = 0;
  *(undefined4 *)(puVar20 + 0xe9) = 0xffffffff;
  *(undefined4 *)((longlong)puVar20 + 0x74c) = 0xffffffff;
  *(undefined4 *)(puVar20 + 0xea) = 0xffffffff;
  *(undefined4 *)((longlong)puVar20 + 0x754) = 0xffffffff;
  *(undefined4 *)(puVar20 + 0xeb) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x75c) = 0;
  puVar20[0xec] = 0;
  plVar3 = (longlong *)(local_120 + 0x98);
  iVar24 = *(int *)(local_120 + 0xa0);
  *(uint *)(local_120 + 0xa0) = iVar24 + 1U;
  local_118 = param_2;
  if (*(uint *)(local_120 + 0xa4) < iVar24 + 1U) {
    FUN_1448cfae8(plVar3,iVar24);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar24 * 8) = puVar20;
  uVar4 = *(undefined8 *)(local_118 + 0x1a0);
  uVar7 = *(undefined8 *)(local_118 + 0x1a8);
  uVar15 = *(undefined4 *)(local_118 + 0x1b4);
  uVar5 = *(undefined4 *)(local_118 + 0x1b8);
  uVar6 = *(undefined4 *)(local_118 + 0x1bc);
  *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(local_118 + 0x1b0);
  *(undefined4 *)((longlong)puVar20 + 0x34) = uVar15;
  *(undefined4 *)(puVar20 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar20 + 0x3c) = uVar6;
  puVar20[4] = uVar4;
  puVar20[5] = uVar7;
  lVar10 = FUN_1447e4f80();
  cVar14 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar14 = *(char *)(lVar10 + 0x41);
  }
  puVar20[2] = *(undefined8 *)(local_110 + 0x18);
  *(char *)(puVar20 + 3) = cVar14;
  plVar3 = *(longlong **)(local_110 + 0x30d8);
  if ((plVar3 == (longlong *)0x0) || ((*(byte *)(plVar3 + 1) & 2) == 0)) {
    local_130 = local_b8;
    local_b8[0] = &DAT_3f8000003f800000;
    local_b8[1] = &DAT_3f8000003f800000;
    local_138 = 1;
    lVar10 = FUN_1449cc94d(local_120,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar3 + 0x80) == (code *)&LAB_144b15db6) {
      local_b8[0] = (undefined1 *)plVar3[(ulonglong)*(uint *)(plVar3 + 0xcd) + 0xd1];
    }
    else {
      local_b8[0] = (undefined1 *)(**(code **)(*plVar3 + 0x80))();
    }
    if ((undefined8 *)local_b8[0] != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)local_b8[0] + 8) = *(int *)((longlong)local_b8[0] + 8) + 1;
      UNLOCK();
    }
    lVar10 = FUN_144735dd8(local_120,local_b8,1);
    if ((undefined8 *)local_b8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_b8[0] + 8);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)**(undefined8 **)local_b8[0])(local_b8[0],1);
      }
    }
  }
  if ((*(byte *)(lVar10 + 0x68) & 0x80) == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0x1c;
  }
  puVar25 = (undefined8 *)(*(longlong *)(local_120 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar25 + 9;
  if (*(undefined8 **)(local_120 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x50);
    puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar25 + 9;
  }
  *(undefined8 **)(local_120 + 0x70) = puVar13;
  puVar25[1] = *(undefined8 *)(lVar10 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar25 + 5) = uVar23;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar10;
  iVar24 = *(int *)(local_120 + 0x1a0);
  *(uint *)(local_120 + 0x1a0) = iVar24 + 1U;
  if (*(uint *)(local_120 + 0x1a4) < iVar24 + 1U) {
    FUN_1447568fc(local_120 + 0x198,iVar24);
  }
  *(undefined8 **)(*(longlong *)(local_120 + 0x198) + (longlong)iVar24 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(local_120 + 0x1a0) + -1;
  puVar20[0xc3] = puVar25;
  FUN_144a2c7c2(local_b8,param_4);
  lVar10 = local_118;
  ppuVar21 = local_b8;
  puVar13 = puVar20 + 0x14;
  for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar13 = *ppuVar21;
    ppuVar21 = ppuVar21 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar23 = *(undefined1 *)(param_5 + 3);
  puVar20[0xce] = *param_5;
  puVar20[0xcf] = 0;
  *(undefined1 *)(puVar20 + 0xd0) = uVar23;
  *(undefined1 *)((longlong)puVar20 + 0x681) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x682) = 0xffff;
  *(uint *)(puVar20 + 0xc4) = (uint)*(byte *)(local_118 + 0x1c9);
  if (param_6 != 0) {
    puVar20[0xe6] = param_6;
    puVar20[0xe7] = 0;
    *(undefined2 *)(puVar20 + 0xe8) = 0x101;
    *(undefined4 *)((longlong)puVar20 + 0x744) = 0x11;
  }
  *(undefined4 *)(puVar20 + 0xcc) = param_7;
  uVar9 = (**(code **)(*param_8 + 0x440))(param_8);
  uVar15 = 7;
  if (uVar9 < 7) {
    uVar15 = *(undefined4 *)(&DAT_14a2c5630 + (ulonglong)uVar9 * 4);
  }
  *(undefined4 *)((longlong)puVar20 + 0x664) = uVar15;
  puVar20[0xc2] = DAT_14c9c0de0;
  local_e8 = FUN_14476842e(local_120,&DAT_14ca63b28,L"BlackDummy",2);
  local_e0 = 0;
  uStack_d8 = 0;
  if (local_e8 != 0) {
    uStack_d8 = *(undefined8 *)(local_e8 + 0x84);
  }
  local_100 = DAT_14c9c0d80;
  iVar24 = *(int *)(*(longlong *)(param_9 + 0x28) + 0x230);
  puVar13 = (undefined8 *)(lVar10 + 0x98);
  puVar25 = puVar20 + 0x31;
  lVar16 = 0;
  do {
    puVar19 = puVar13 + -0xf;
    if (*(char *)(lVar10 + 0x110 + lVar16) != '\0') {
      puVar19 = puVar13;
    }
    uVar11 = 0x4000L << ((byte)lVar16 & 0x3f) &
             *(ulonglong *)(*(longlong *)(param_9 + 0x28) + 0x238);
    if ((undefined8 *)*puVar19 == (undefined8 *)0x0) {
LAB_1407b1c9a:
      FUN_1448a0832(local_b8,local_120,&local_e8);
      puVar12 = local_b8[1];
      puVar17 = local_b8[2];
      puVar19 = (undefined8 *)local_b8[0];
    }
    else if (((undefined1 *)puVar19[2] == (undefined1 *)puVar19[1]) ||
            (puVar12 = (undefined1 *)puVar19[1], puVar17 = (undefined1 *)puVar19[2],
            puVar19 = (undefined8 *)*puVar19, (uVar11 != 0) != (iVar24 < 1 || uVar11 != 0)))
    goto LAB_1407b1c9a;
    iVar24 = iVar24 - (uint)(iVar24 >= 1 && uVar11 == 0);
    local_d0 = *(undefined8 *)(puVar19[7] + 0x84);
    local_c8 = puVar12;
    local_c0 = puVar17;
    FUN_144a2c7c2(local_b8,&local_d0);
    ppuVar21 = local_b8;
    puVar22 = puVar25 + -0xf;
    for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar22 = *ppuVar21;
      ppuVar21 = ppuVar21 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar25[-1] = puVar19;
    *puVar25 = local_100;
    lVar16 = lVar16 + 1;
    puVar25 = puVar25 + 0x10;
    puVar13 = puVar13 + 3;
    lVar10 = local_118;
  } while (lVar16 != 5);
  puVar13 = puVar20 + 0x81;
  puVar25 = (undefined8 *)(local_118 + 0x128);
  lVar10 = 0;
  do {
    local_c8 = (undefined1 *)local_e0;
    local_c0 = (undefined1 *)uStack_d8;
    lVar16 = local_e8;
    if ((puVar25[-2] != 0) &&
       (((uint)(1L << ((byte)lVar10 & 0x3f)) &
        (uint)*(byte *)(*(longlong *)(param_9 + 0x28) + 0x240)) != 0)) {
      local_c8 = (undefined1 *)puVar25[-1];
      local_c0 = (undefined1 *)*puVar25;
      lVar16 = puVar25[-2];
    }
    local_d0 = *(undefined8 *)(lVar16 + 0x84);
    FUN_144a2c7c2(local_b8,&local_d0);
    lVar26 = local_110;
    ppuVar21 = local_b8;
    puVar19 = puVar13 + -0xf;
    for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar19 = *ppuVar21;
      ppuVar21 = ppuVar21 + 1;
      puVar19 = puVar19 + 1;
    }
    puVar13[-1] = lVar16;
    *puVar13 = local_100;
    lVar10 = lVar10 + 1;
    puVar13 = puVar13 + 0x10;
    puVar25 = puVar25 + 3;
  } while (lVar10 != 5);
  uVar4 = *(undefined8 *)(local_110 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar14 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar14 = *(char *)(lVar10 + 0x41);
  }
  puVar20[8] = uVar4;
  *(char *)(puVar20 + 9) = cVar14;
  iVar24 = DAT_14c760a60;
  if ((*(longlong *)(local_118 + 0x1c0) == 0) ||
     (lVar10 = *(longlong *)(*(longlong *)(local_118 + 0x1c0) + 0x10), lVar10 == 0)) {
    *(undefined4 *)((longlong)puVar20 + 0x624) = 0;
    puVar13 = &DAT_14c9c0d80;
    bVar8 = false;
  }
  else {
    puVar13 = &DAT_14c9c0de0;
    if ((*(uint *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar10 + 0x93) * 0x30)) &
        0x200) == 0) {
      puVar13 = &DAT_14c9c0d80;
    }
    *(undefined4 *)((longlong)puVar20 + 0x624) = 1;
    if (iVar24 < 2) {
      puVar13 = &DAT_14c9c0d80;
    }
    bVar8 = true;
  }
  puVar20[0xc6] = *puVar13;
  if (DAT_14c760a84 == -1) {
    local_138 = 0x66;
    FUN_140002266(local_b8,L"%s %s %d",L"FRDGSystemTextures",
                  L".\\Runtime/Renderer/Private/SystemTextures.cpp");
    DAT_14c760a84 = FUN_145d12cf0(local_b8);
    lVar26 = local_110;
    if ((undefined8 *)local_b8[0] != (undefined8 *)0x0) {
      FUN_1400020a8();
      lVar26 = local_110;
    }
  }
  lVar10 = local_118;
  if ((DAT_14c760a84 < *(int *)(local_120 + 0x130)) &&
     (lVar16 = *(longlong *)(*(longlong *)(local_120 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar16 != 0)) {
    lVar16 = lVar16 + 8;
  }
  else {
    lVar16 = 0;
  }
  puVar20[0xc5] = *(undefined8 *)(lVar16 + 8);
  puVar20[200] = 0;
  puVar20[0xc9] = &DAT_3f8000003f800000;
  puVar20[0xca] = 0;
  puVar20[0xcb] = 0;
  if (bVar8) {
    if (((*(char *)(lVar26 + 0x23f2) == '\x01') && (*(char *)(lVar26 + 0x23f5) == '\0')) &&
       (*(int *)(lVar26 + 0x1dd0) != 0)) {
      iVar24 = *(int *)(lVar26 + 0x1dd8);
    }
    else {
      lVar16 = (longlong)*(int *)(*(longlong *)(lVar26 + 8) + 0x10);
      iVar24 = -1;
      if (lVar16 != 0) {
        lVar16 = lVar16 << 3;
        lVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*(longlong *)(lVar26 + 8) + 8) + lVar18 * 8) == lVar26) {
            iVar24 = (int)lVar18;
            break;
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + -8;
        } while (lVar16 != 0);
      }
    }
    puVar20[0xc5] = *(undefined8 *)(*(longlong *)(local_118 + 0x1c0) + 0x10);
    puVar13 = (undefined8 *)
              (*(longlong *)(*(longlong *)(local_118 + 0x1c0) + 0x18) + 0x10 +
              (longlong)iVar24 * 0x20);
    uVar4 = puVar13[1];
    *local_108 = *puVar13;
    local_108[1] = uVar4;
    lVar16 = *(longlong *)(*(longlong *)(local_118 + 0x1c0) + 0x10);
    fVar27 = (float)*(int *)(lVar16 + 0x88);
    fVar28 = (float)*(int *)(lVar16 + 0x84);
    *(float *)(puVar20 + 0xca) = fVar28;
    *(float *)((longlong)puVar20 + 0x654) = fVar27;
    *(float *)(puVar20 + 0xcb) = 1.0 / fVar28;
    *(float *)((longlong)puVar20 + 0x65c) = 1.0 / fVar27;
  }
  FUN_1407b21fb(local_b8);
  ppuVar21 = local_b8;
  puVar13 = local_f0;
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar13 = *ppuVar21;
    ppuVar21 = ppuVar21 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar15 = 0xffffffff;
  if (*(char *)(lVar10 + 0x1ca) == '\0') {
    uVar15 = *(undefined4 *)(lVar10 + 0x1cc);
  }
  *(undefined4 *)(puVar20 + 0xcd) = uVar15;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_f8;
}



// FUNCTION 1407b21fb FUN_1407b21fb body=630 status=ok
// SIG undefined FUN_1407b21fb(void)

undefined8 * FUN_1407b21fb(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  
  uVar6 = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  lVar4 = FUN_14473c272(param_2,&DAT_14ca63b28,0);
  if ((*(char *)(lVar4 + 0x92) == '\x04') || (*(char *)(lVar4 + 0x92) == '\x01')) {
    uVar6 = *(undefined2 *)(lVar4 + 0x8e);
  }
  uVar2 = *(undefined1 *)(lVar4 + 0x90);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x48);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 1;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar7 + 5) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x2a) = uVar2;
  *(undefined1 *)((longlong)puVar7 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar7 + 0x2e) = uVar6;
  *(undefined1 *)(puVar7 + 6) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
  puVar7[7] = lVar4;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[1] = puVar7;
  lVar4 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,4,0,0);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = 0xd;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[4] = puVar7;
  return param_1;
}



// FUNCTION 1407b2472 FUN_1407b2472 body=26 status=ok
// SIG undefined FUN_1407b2472(void)

void FUN_1407b2472(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1b();
  FUN_1407b248c(param_1);
  return;
}



// FUNCTION 1407b248c FUN_1407b248c body=76 status=ok
// SIG undefined FUN_1407b248c(void)

void FUN_1407b248c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14063d1f6();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (uVar3 = 1,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)) goto LAB_1407b24c6;
  }
  uVar3 = 0;
LAB_1407b24c6:
  *(undefined1 *)(param_1 + 0x48) = uVar3;
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



// FUNCTION 1407b24d8 caseD_1b body=127 status=ok
// SIG undefined caseD_1b(void)

void switchD_143c3d4dc::caseD_1b(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1407b256c FUN_1407b256c body=131 status=ok
// SIG undefined FUN_1407b256c(void)

undefined8 FUN_1407b256c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_1407b25f0(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0xe0) = puVar1[0x3a];
      *(undefined4 *)(lVar2 + 0xe4) = puVar1[0x3b];
      *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(puVar1 + 0x3c);
      lVar3 = lVar3 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407b25f0 FUN_1407b25f0 body=224 status=ok
// SIG undefined FUN_1407b25f0(void)

void FUN_1407b25f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1407b26d0(param_1 + 2,param_2 + 2);
  FUN_1407b2728(param_1 + 4,param_2 + 4);
  FUN_1407b2780(param_1 + 6,param_2 + 6);
  uVar3 = param_2[0x12];
  lVar4 = param_2[0x13];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x13];
  param_1[0x12] = uVar3;
  param_1[0x13] = lVar4;
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
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
  FUN_1406fda46(param_2 + 8,param_1 + 8);
  FUN_1401d7e14(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar3;
  return;
}



// FUNCTION 1407b26d0 FUN_1407b26d0 body=88 status=ok
// SIG undefined FUN_1407b26d0(void)

undefined8 * FUN_1407b26d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406fd90c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407b2728 FUN_1407b2728 body=88 status=ok
// SIG undefined FUN_1407b2728(void)

undefined8 * FUN_1407b2728(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487630d4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407b2780 FUN_1407b2780 body=93 status=ok
// SIG undefined FUN_1407b2780(void)

undefined8 * FUN_1407b2780(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b9920(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406fd828(param_1,iVar1);
      FUN_1406fd7df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1407b27fe FUN_1407b27fe body=91 status=ok
// SIG undefined FUN_1407b27fe(void)

void FUN_1407b27fe(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1409e69cc((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined4 *)(lVar2 + lVar3) = param_2;
  *(undefined4 *)(lVar2 + 4 + lVar3) = param_3;
  *(undefined4 *)(lVar2 + 8 + lVar3) = param_4;
  *(undefined1 *)(lVar2 + 0xc + lVar3) = 1;
  return;
}



// FUNCTION 1407b285a FUN_1407b285a body=125 status=ok
// SIG undefined FUN_1407b285a(void)

undefined8 * FUN_1407b285a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1407b28d8();
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



// FUNCTION 1407b28d8 FUN_1407b28d8 body=150 status=ok
// SIG undefined FUN_1407b28d8(void)

longlong * FUN_1407b28d8(longlong *param_1,longlong *param_2)

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



// FUNCTION 1407b296e FUN_1407b296e body=4886 status=ok
// SIG undefined FUN_1407b296e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b296e(longlong *param_1,float param_2)

{
  double dVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  code *pcVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  undefined8 *local_450;
  wchar_t *local_448;
  undefined8 *local_440;
  wchar_t *local_438;
  undefined1 *local_430;
  undefined1 *local_428;
  undefined8 *local_420;
  code *local_418;
  code *local_410;
  float local_404;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  float local_380;
  float local_37c;
  double local_368;
  double local_360;
  double local_358;
  undefined4 local_2e4;
  byte local_2db;
  undefined4 local_2b8;
  uint local_288;
  float fStack_284;
  float local_280;
  undefined1 local_278 [4];
  undefined4 local_274;
  byte local_248;
  undefined4 local_1e4;
  undefined4 local_1d4;
  byte local_1cb;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined2 uStack_167;
  undefined1 uStack_165;
  undefined2 uStack_164;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158;
  undefined4 local_154;
  undefined2 local_150;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  param_1[0xac] = param_1[0x27];
  param_1[0xaa] = param_1[0x25];
  param_1[0xab] = param_1[0x26];
  *(float *)(param_1 + 0xad) =
       (float)SQRT((double)param_1[0x27] * (double)param_1[0x27] +
                   (double)param_1[0x25] * (double)param_1[0x25] +
                   (double)param_1[0x26] * (double)param_1[0x26]);
  lVar17 = param_1[0x23];
  if (lVar17 == 0) {
    plVar13 = (longlong *)&DAT_14c8464e0;
    dVar20 = DAT_14c8464f0;
  }
  else {
    plVar13 = (longlong *)(lVar17 + 0x260);
    dVar20 = *(double *)(lVar17 + 0x270);
  }
  lVar17 = plVar13[1];
  param_1[0xaf] = *plVar13;
  param_1[0xb0] = lVar17;
  param_1[0xb1] = (longlong)dVar20;
  FUN_1407b3c86(param_1);
  if ((((char)param_1[0xa8] == '\x01') && ((*(byte *)((longlong)param_1 + 0x181) & 2) == 0)) &&
     (lVar17 = param_1[0x23], lVar17 != 0)) {
    dVar21 = *(double *)(lVar17 + 0x260);
    dStack_3f0 = *(double *)(lVar17 + 0x268);
    dVar20 = *(double *)(lVar17 + 0x268);
    dVar23 = *(double *)(lVar17 + 0x270);
    plVar13 = (longlong *)param_1[0x22];
    local_3f8 = dVar21;
    local_3e8 = dVar23;
    if (plVar13 != (longlong *)0x0) {
      fVar28 = 2.4;
      if (2.4 <= *(float *)(param_1 + 0xa6) + -2.4) {
        fVar28 = *(float *)(param_1 + 0xa6) + -2.4;
      }
      if (0.0 < fVar28) {
        local_288 = 0;
        fStack_284 = 0.0;
        local_280 = 0.0;
        memset(local_278,0,0x100);
        local_1a8 = 0xffffffff;
        local_1d4 = 0xffffffff;
        local_274 = 0x3f800000;
        if (DAT_14cac6e60 == 0) {
          local_420 = &local_388;
          local_388 = FUN_144a7958c;
          local_410 = FUN_14081d0ea;
          local_418 = FUN_142b47bc4;
          local_428 = &LAB_1478989f1;
          local_430 = &LAB_146391124;
          local_438 = L"Engine";
          local_440 = (undefined8 *)0x10000000000;
          local_448 = (wchar_t *)CONCAT44(local_448._4_4_,0x10000005);
          local_450 = (undefined8 *)CONCAT44(local_450._4_4_,0x10);
          local_458 = (undefined8 *)CONCAT44(local_458._4_4_,0x620);
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          plVar13 = (longlong *)param_1[0x22];
          if (plVar13 != (longlong *)0x0) goto LAB_1407b2d5a;
LAB_1407b3c69:
          fVar19 = 0.0;
          fVar25 = 0.0;
        }
        else {
LAB_1407b2d5a:
          if (((DAT_14cac6e60 == 0) || (lVar17 = plVar13[2], lVar17 == 0)) ||
             (*(int *)(lVar17 + 0x38) < *(int *)(DAT_14cac6e60 + 0x38))) goto LAB_1407b3c69;
          fVar19 = 0.0;
          fVar25 = 0.0;
          if (*(longlong *)
               (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
              DAT_14cac6e60 + 0x30) {
            (**(code **)(*plVar13 + 0x820))(plVar13,&local_388,0);
            fVar19 = local_388._4_4_;
            fVar25 = local_388._4_4_;
            if ((int)local_388 != 2) {
              if ((int)local_388 == 1) {
                fVar19 = local_37c;
                if (local_380 <= local_388._4_4_) {
                  fVar25 = local_380;
                }
              }
              else {
                fVar19 = local_380;
                if ((int)local_388 != 3) {
                  dVar1 = (double)plVar13[0x2f];
                  if ((double)plVar13[0x30] <= (double)plVar13[0x2f]) {
                    dVar1 = (double)plVar13[0x30];
                  }
                  fVar19 = (float)(double)plVar13[0x31];
                  fVar25 = (float)dVar1;
                }
              }
            }
          }
        }
        lVar17 = param_1[0x99];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb8a3f0) && (FUN_144b3d300(), DAT_14cb8a3f0 == -1)) {
          local_388 = (code *)0x14a83ce20;
          local_380 = 2.24208e-44;
          local_37c = (float)((uint)local_37c & 0xffffff00);
          uVar12 = FUN_14001a6c0(&local_388,1);
          DAT_14cb8a3e8 = (ulonglong)uVar12;
          _Init_thread_footer();
        }
        local_154 = 0;
        uStack_170 = 0;
        local_150 = 0x101;
        local_128 = 0;
        local_120 = 0x800000000;
        local_108 = 0;
        local_100 = 0x400000000;
        local_168 = 0;
        uStack_15c = 0;
        local_178 = DAT_14cb8a3e8;
        uStack_167 = 1;
        uStack_165 = 0;
        local_158 = 0;
        uStack_164 = 0;
        uStack_162 = 0;
        if (lVar17 != 0) {
          local_118 = *(undefined4 *)(lVar17 + 0xc);
          local_100 = 0x400000001;
          uStack_170 = *(undefined8 *)(lVar17 + 0x18);
        }
        uStack_161 = 1;
        uStack_160 = CONCAT31(uStack_160._1_3_,1);
        local_398 = _DAT_14cad0ee0;
        uStack_390 = uRam000000014cad0ee8;
        local_3a8 = _DAT_14cad0ed0;
        uStack_3a0 = _DAT_14cad0ed8;
        lVar17 = 0;
        do {
          cVar10 = *(char *)((longlong)&uStack_3a0 + lVar17);
          cVar2 = *(char *)((longlong)&uStack_3a0 + lVar17 + 1);
          cVar3 = *(char *)((longlong)&uStack_3a0 + lVar17 + 2);
          cVar4 = *(char *)((longlong)&uStack_3a0 + lVar17 + 3);
          cVar5 = *(char *)((longlong)&uStack_3a0 + lVar17 + 4);
          cVar6 = *(char *)((longlong)&uStack_3a0 + lVar17 + 5);
          cVar7 = *(char *)((longlong)&uStack_3a0 + lVar17 + 6);
          cVar8 = *(char *)((longlong)&uStack_3a0 + lVar17 + 7);
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17) == DAT_149c360b0) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 1) == DAT_149c360b0._1_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 1) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 2) == DAT_149c360b0._2_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 2) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 3) == DAT_149c360b0._3_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 3) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 4) == DAT_149c360b0._4_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 4) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 5) == DAT_149c360b0._5_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 5) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 6) == DAT_149c360b0._6_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 6) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_3a8 + lVar17 + 7) == DAT_149c360b0._7_1_) & 1)) {
            *(undefined1 *)((longlong)&local_3a8 + lVar17 + 7) = 2;
          }
          if ((bool)(~(cVar10 == DAT_149c360b0._8_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17) = 2;
          }
          if ((bool)(~(cVar2 == DAT_149c360b0._9_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 1) = 2;
          }
          if ((bool)(~(cVar3 == DAT_149c360b0._10_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 2) = 2;
          }
          if ((bool)(~(cVar4 == DAT_149c360b0._11_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 3) = 2;
          }
          if ((bool)(~(cVar5 == DAT_149c360b0._12_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 4) = 2;
          }
          if ((bool)(~(cVar6 == DAT_149c360b0._13_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 5) = 2;
          }
          if ((bool)(~(cVar7 == DAT_149c360b0._14_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 6) = 2;
          }
          if ((bool)(~(cVar8 == DAT_149c360b0._15_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_3a0 + lVar17 + 7) = 2;
          }
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x20);
        (**(code **)(*param_1 + 0x4d8))(param_1,&local_178,&local_3a8);
        uVar11 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
        if (fVar25 <= 0.0) {
LAB_1407b33e7:
          if (((local_288 & 1) != 0) || ((local_1cb & 2) != 0)) {
            local_3b8 = local_3e8;
            local_3c8 = local_3f8;
            dStack_3c0 = dStack_3f0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb8a400) && (FUN_144b3d300(&DAT_14cb8a400), DAT_14cb8a400 == -1))
            {
              local_388 = (code *)0x14a83ce31;
              local_380 = 1.96182e-44;
              local_37c = (float)((uint)local_37c & 0xffffff00);
              uVar12 = FUN_14001a6c0();
              DAT_14cb8a3f8 = (ulonglong)uVar12;
              _Init_thread_footer(&DAT_14cb8a400);
            }
            local_178 = DAT_14cb8a3f8;
            memset(&local_388,0,0x100);
            local_2b8 = 0xffffffff;
            local_2e4 = 0xffffffff;
            local_388 = (code *)CONCAT44(0x3f800000,(int)local_388);
            lVar17 = param_1[0x16];
            if (lVar17 == 0) {
              lVar17 = FUN_1448abda6(param_1);
            }
            local_3d0 = (double)-(fVar28 + fVar19) + local_3b8;
            local_3d8 = dStack_3c0 + 0.0;
            local_3e0 = local_3c8 + 0.0;
            local_458 = (undefined8 *)CONCAT44(local_458._4_4_,uVar11);
            local_450 = &local_178;
            local_448 = (wchar_t *)&local_3a8;
            cVar10 = FUN_1400b50cc(lVar17);
            if ((cVar10 != '\0') && (0.0 < local_388._4_4_)) {
              fVar19 = local_388._4_4_ * (fVar28 + fVar19) - fVar19;
              auVar26._0_4_ = ~-(uint)(fVar25 < 2.4) & (uint)-fVar25;
              auVar26._4_4_ = 0x80000000;
              auVar26._8_4_ = 0x80000000;
              auVar26._12_4_ = 0x80000000;
              auVar26 = auVar26 | ZEXT416(-(uint)(fVar25 < 2.4) & 0xc019999a);
              uVar15 = auVar26._0_8_;
              if (auVar26._0_4_ <= fVar19) {
                auVar27._4_12_ = auVar26._4_12_;
                auVar27._0_4_ = fVar19;
                uVar15 = auVar27._0_8_;
              }
              local_288 = local_288 | 1;
              if (((float)uVar15 <= fVar28) && (cVar10 = FUN_14048db04(param_1), cVar10 != '\0')) {
                local_458 = (undefined8 *)CONCAT71(local_458._1_7_,1);
                FUN_1407b691e(&local_288,&local_388,fStack_284,uVar15);
                fVar28 = fStack_284;
                goto LAB_1407b3586;
              }
            }
            local_288 = local_288 & 0xfffffffd;
            fVar28 = fStack_284;
          }
        }
        else {
          fVar31 = (fVar19 - fVar25) * 0.100000024;
          fVar30 = fVar28 + fVar31;
          local_3e0 = (double)CONCAT44(fVar25,3);
          local_3d8 = (double)CONCAT44(local_3d8._4_4_,fVar19 - fVar31);
          local_404 = param_2;
          memset(&local_388,0,0x100);
          local_2b8 = 0xffffffff;
          local_2e4 = 0xffffffff;
          local_388 = (code *)CONCAT44(0x3f800000,(int)local_388);
          local_3b8 = dVar23 - (double)fVar30;
          dVar1 = dVar20 + 0.0;
          dVar29 = dVar21 + 0.0;
          lVar17 = param_1[0x16];
          local_400 = dVar23;
          local_3c8 = dVar29;
          dStack_3c0 = dVar1;
          if (lVar17 == 0) {
            lVar17 = FUN_1448abda6(param_1);
          }
          local_450 = (undefined8 *)CONCAT44(local_450._4_4_,uVar11);
          local_458 = &DAT_14c8463d0;
          local_448 = (wchar_t *)&local_3e0;
          local_440 = &local_178;
          local_438 = (wchar_t *)&local_3a8;
          cVar10 = FUN_14021655c(lVar17,&local_388,&local_3f8,&local_3c8);
          param_2 = local_404;
          if (cVar10 == '\0') goto LAB_1407b33e7;
          if ((local_2db & 2) == 0) {
            local_358 = local_358 - dVar20;
            fVar24 = 0.15010001;
            if (0.15010001 <= local_3e0._4_4_ + -0.15) {
              fVar24 = local_3e0._4_4_ + -0.15;
            }
            if (fVar24 * fVar24 <=
                (float)((local_360 - dVar21) * (local_360 - dVar21) + local_358 * local_358))
            goto LAB_1407b3204;
          }
          else {
LAB_1407b3204:
            fVar22 = local_3e0._4_4_ + -0.15 + -0.0001;
            fVar24 = 0.0;
            if (0.0 <= fVar22) {
              fVar24 = fVar22;
            }
            local_3e0 = (double)CONCAT44(fVar24,(int)local_3e0);
            fVar22 = fVar24;
            if ((int)local_3e0 - 2U < 2) {
LAB_1407b3232:
              if (0.0001 < fVar22) {
LAB_1407b3243:
                fVar31 = (fVar19 - fVar25) * 0.9;
                fVar30 = fVar28 + fVar31;
                fVar22 = fVar19 - fVar31;
                if (fVar19 - fVar31 <= fVar24) {
                  fVar22 = fVar24;
                }
                local_3d8 = (double)CONCAT44(local_3d8._4_4_,fVar22);
                memset(&local_388,0,0x100);
                local_2b8 = 0xffffffff;
                local_2e4 = 0xffffffff;
                local_388 = (code *)CONCAT44(0x3f800000,(int)local_388);
                local_3b8 = local_400 - (double)fVar30;
                lVar17 = param_1[0x16];
                local_3c8 = dVar29;
                dStack_3c0 = dVar1;
                if (lVar17 == 0) {
                  lVar17 = FUN_1448abda6(param_1);
                }
                local_450 = (undefined8 *)CONCAT44(local_450._4_4_,uVar11);
                local_458 = &DAT_14c8463d0;
                local_448 = (wchar_t *)&local_3e0;
                local_440 = &local_178;
                local_438 = (wchar_t *)&local_3a8;
                FUN_14021655c(lVar17,&local_388,&local_3f8,&local_3c8);
              }
            }
            else if ((int)local_3e0 == 1) {
              if ((fVar24 <= 0.0001) && (fVar22 = local_3d8._4_4_, (float)local_3d8 <= 0.0001))
              goto LAB_1407b3232;
              goto LAB_1407b3243;
            }
          }
          fVar31 = fVar30 * local_388._4_4_ - fVar31;
          fVar30 = (float)(~-(uint)(fVar25 < 2.4) & (uint)-fVar25 |
                          -(uint)(fVar25 < 2.4) & 0xc019999a);
          if (fVar30 <= fVar31) {
            fVar30 = fVar31;
          }
          bVar18 = local_2db & 3;
          local_288 = local_288 & 0xfffffff8 | (uint)(bVar18 == 1);
          local_280 = 0.0;
          fStack_284 = fVar30;
          memcpy(local_278,&local_388,0x100);
          param_2 = local_404;
          if (((bVar18 != 1) ||
              (cVar10 = FUN_14048db04(param_1), param_2 = local_404, fVar28 < fVar30)) ||
             (cVar10 == '\0')) goto LAB_1407b33e7;
          local_288 = local_288 | 2;
          fVar28 = fStack_284;
        }
LAB_1407b3586:
        fStack_284 = fVar28;
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        if (((~local_288 & 3) == 0) &&
           (((fVar28 = fStack_284, (local_288 & 4) == 0 || (fVar28 = local_280, 1.9 <= fStack_284))
            || (local_280 < 1.9)))) {
          if (2.4 < fVar28) {
            memset(&local_388,0,0x100);
            local_2b8 = 0xffffffff;
            local_2e4 = 0xffffffff;
            local_388 = (code *)CONCAT44(0x3f800000,(int)local_388);
            lVar17 = param_1[0x22];
            dVar20 = *(double *)(lVar17 + 0x270);
            fVar28 = 2.15 - fVar28;
            local_178 = *(ulonglong *)(lVar17 + 0x240);
            uStack_170 = *(undefined8 *)(lVar17 + 0x248);
            uVar15 = *(undefined8 *)(lVar17 + 0x250);
            local_168 = (undefined1)uVar15;
            uStack_167 = (undefined2)((ulonglong)uVar15 >> 8);
            uStack_165 = (undefined1)((ulonglong)uVar15 >> 0x18);
            uStack_164 = (undefined2)((ulonglong)uVar15 >> 0x20);
            uStack_162 = (undefined1)((ulonglong)uVar15 >> 0x30);
            uStack_161 = (undefined1)((ulonglong)uVar15 >> 0x38);
            uStack_160 = (undefined4)*(undefined8 *)(lVar17 + 600);
            uStack_15c = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 600) >> 0x20);
            local_398 = (double)fVar28;
            local_3a8 = 0;
            uStack_3a0 = 0;
            local_450 = (undefined8 *)((ulonglong)local_450 & 0xffffffffffffff00);
            local_458 = &local_388;
            FUN_1402eda10(param_1,&local_3a8,&local_178,1);
            if ((local_2db & 3) != 1) {
              fStack_284 = fVar28 + fStack_284;
              goto LAB_1407b2a98;
            }
            if (fVar28 <= 0.0) {
              fStack_284 = (float)((double)(float)*(double *)(param_1[0x22] + 0x270) - local_368);
              cVar10 = FUN_14048db04(param_1);
              if (cVar10 == '\0') goto LAB_1407b2a98;
              local_288 = (local_288 & 0xfffffff8) + (uint)((local_2db & 3) == 1) + 2;
              local_280 = 0.0;
              memcpy(local_278,&local_388,0x100);
            }
            else {
              fStack_284 = ((float)*(double *)(param_1[0x22] + 0x270) - (float)dVar20) + fStack_284;
            }
          }
          *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 2;
        }
      }
    }
  }
LAB_1407b2a98:
  if (((*(char *)((longlong)param_1 + 0x52c) == '\0') && ((char)param_1[0xa8] == '\x01')) &&
     (((*(byte *)((longlong)param_1 + 0x181) & 2) == 0 && (0.0 < (double)param_1[0x27])))) {
    param_1[0x27] = 0;
  }
  bVar18 = *(byte *)((longlong)param_1 + 0x181);
  if ((char)param_1[0xa4] == '\0') {
    if ((bVar18 & 2) == 0) {
      uVar11 = *(undefined4 *)((longlong)param_1 + 0x56c);
    }
    else {
      uVar11 = 0;
      if ((char)param_1[0xa8] == '\0') {
        *(int *)((longlong)param_1 + 0x56c) = (int)param_1[0x35];
      }
    }
    *(undefined4 *)(param_1 + 0x35) = uVar11;
  }
  if ((bVar18 & 2) == 0) {
    if ((char)param_1[0xa8] != '\0') {
      lVar17 = 0x5a8;
      if ((0.0 < *(float *)((longlong)param_1 + 0x534)) && (param_1[0xb2] == 0)) {
        uVar15 = FUN_1401b4c98(param_1[0x15]);
        uVar11 = *(undefined4 *)((longlong)param_1 + 0x534);
        local_388 = (code *)0x0;
        local_380 = 0.0;
        FUN_1446efa72(&local_388,0,3,0x10);
        pcVar9 = local_388;
        local_380 = 4.2039e-45;
        *(undefined ***)local_388 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        *(longlong *)(local_388 + 0x10) = lVar16;
        *(undefined ***)local_388 = &PTR_FUN_14b422810;
        *(undefined8 *)(local_388 + 0x18) = 0;
        FUN_14485c47a(local_388 + 0x18,param_1);
        *(undefined4 *)(pcVar9 + 0x28) = 0;
        *(code **)(pcVar9 + 0x20) = FUN_143e1038e;
        local_288 = 0;
        fStack_284 = 0.0;
        local_280 = 0.0;
        FUN_14487d8d8(&local_288,&local_388);
        local_248 = 1;
        local_458 = &local_178;
        uVar12 = (uint)local_178;
        local_178 = CONCAT44(0xbf800000,uVar12 & 0xffff0000);
        FUN_1406f4044(uVar15,param_1 + 0xb2,&local_288,uVar11);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_248])(&local_288);
        FUN_1449db362(&local_388);
      }
LAB_1407b3846:
      FUN_1447cd2ec(lVar17 + (longlong)param_1);
      bVar18 = *(byte *)((longlong)param_1 + 0x181);
    }
  }
  else if ((char)param_1[0xa8] == '\0') {
    lVar17 = 0x5b8;
    if ((param_1[0xb2] != 0) && ((char)param_1[0xa7] == '\x01')) {
      uVar15 = FUN_1401b4c98(param_1[0x15]);
      lVar14 = FUN_144a61814(uVar15);
      if (lVar14 != 0) {
        FUN_1405a424c(uVar15);
      }
      param_1[0xb2] = 0;
    }
    goto LAB_1407b3846;
  }
  *(byte *)(param_1 + 0xa8) = bVar18 >> 1 & 1;
  lVar17 = param_1[0x23];
  if (lVar17 != 0) {
    dVar20 = (double)param_1[0xaf];
    if ((dVar20 != DAT_14c8464e0) || (NAN(dVar20) || NAN(DAT_14c8464e0))) {
      dVar23 = (double)param_1[0xb0];
      dVar21 = (double)param_1[0xb1];
    }
    else {
      dVar23 = (double)param_1[0xb0];
      dVar21 = (double)param_1[0xb1];
      if ((dVar23 == DAT_14c8464e8) && (!NAN(dVar23) && !NAN(DAT_14c8464e8))) {
        if ((dVar21 == DAT_14c8464f0) && (!NAN(dVar21) && !NAN(DAT_14c8464f0))) goto LAB_1407b2b6a;
      }
    }
    if (((ABS(dVar20 - *(double *)(lVar17 + 0x260)) <= 9.999999747378752e-05) &&
        (ABS(dVar23 - *(double *)(lVar17 + 0x268)) <= 9.999999747378752e-05)) &&
       (ABS(dVar21 - *(double *)(lVar17 + 0x270)) <= 9.999999747378752e-05)) {
      param_2 = param_2 + *(float *)((longlong)param_1 + 0x544);
      *(float *)((longlong)param_1 + 0x544) = param_2;
      if ((0.0 < *(float *)((longlong)param_1 + 0x53c)) &&
         (*(float *)((longlong)param_1 + 0x53c) <= param_2)) {
        memset(&local_288,0,0x100);
        local_1b8 = 0xffffffff;
        fStack_284 = 1.0;
        local_1e4 = 0xffffffff;
        FUN_1479fe224(param_1 + 0x3a,&local_288);
      }
      goto LAB_1407b2b74;
    }
  }
LAB_1407b2b6a:
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
LAB_1407b2b74:
  if ((local_f0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b3c86 FUN_1407b3c86 body=1489 status=ok
// SIG undefined FUN_1407b3c86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b3c86(longlong param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar1 = *(double *)(param_1 + 0x128);
  dVar21 = *(double *)(param_1 + 0x130);
  dVar2 = *(double *)(param_1 + 0x138);
  plVar8 = *(longlong **)(param_1 + 0x110);
  if (((((plVar8 != (longlong *)0x0) && (lVar9 = *(longlong *)(param_1 + 0x4c8), lVar9 != 0)) &&
       (*(char *)(lVar9 + 0x178) != '\x03')) &&
      ((*(char *)(lVar9 + 0x136c) == '\x01' && (*(longlong *)(lVar9 + 0xd8) == 0)))) &&
     (plVar8[0x24] != 0)) {
    (**(code **)(*plVar8 + 0x4a0))(plVar8,&DAT_14cadad9c);
  }
  if ((longlong)*(int *)(param_1 + 0x4b8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x4b0);
    lVar10 = (longlong)*(int *)(param_1 + 0x4b8) * 0x18;
    do {
      plVar8 = (longlong *)FUN_1412ba9fc(lVar9);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      plVar8 = (longlong *)FUN_1412ba9fc(lVar9);
      (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
      lVar9 = lVar9 + 0x18;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if ((*(byte *)(param_1 + 1000) & 2) != 0) {
    FUN_1407b5ce2(param_1 + 0x3a0,param_2);
  }
  if (*(char *)(param_1 + 0x421) == '\x01') {
    FUN_1407b4d50(param_1 + 0x410,param_2);
  }
  if (((*(longlong *)(param_1 + 0x110) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x110) + 8) >> 0x1e & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x180) & 0x20) != 0)) {
    if ((*(byte *)(param_1 + 0x180) & 1) == 0) {
      dVar21 = ABS(dVar21);
      dVar7 = ABS(dVar2);
    }
    else {
      dVar21 = ABS(dVar21);
      dVar7 = ABS(dVar2);
      if (((0.009999999776482582 < ABS(dVar1)) || (0.009999999776482582 < dVar21)) ||
         (0.009999999776482582 < dVar7)) {
        dVar14 = (double)param_2;
        dVar11 = *(double *)(param_1 + 0x380) * dVar14;
        dVar15 = *(double *)(param_1 + 0x378) * dVar14;
        dVar14 = dVar14 * *(double *)(param_1 + 0x370);
        auVar20._8_8_ = dVar15;
        auVar20._0_8_ = dVar14;
        auVar19 = divpd(auVar20,_DAT_1499387d0);
        auVar17._0_8_ = dVar11 / 360.0;
        auVar17._8_8_ = 0;
        auVar20 = roundpd(auVar19,auVar19,3);
        auVar19 = roundpd(auVar17,auVar17,3);
        dVar14 = (dVar14 - auVar20._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar15 = (dVar15 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar22 = (dVar11 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar23 = (0.0 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar11 = sin(dVar14);
        dVar12 = sin(dVar15);
        dVar13 = sin(dVar22);
        sin(dVar23);
        dVar14 = cos(dVar14);
        dVar15 = cos(dVar15);
        dVar22 = cos(dVar22);
        cos(dVar23);
        dVar5 = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar22;
        dVar6 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar22;
        dVar16 = dVar11 * dVar12 * dVar22 - dVar14 * dVar15 * dVar13;
        dVar18 = -(dVar11 * dVar15 * dVar22) - dVar14 * dVar12 * dVar13;
        dVar14 = *(double *)(param_1 + 0x518);
        dVar15 = *(double *)(param_1 + 0x518);
        dVar11 = *(double *)(param_1 + 0x500);
        dVar12 = *(double *)(param_1 + 0x500);
        dVar13 = *(double *)(param_1 + 0x508);
        dVar22 = *(double *)(param_1 + 0x508);
        dVar23 = *(double *)(param_1 + 0x510);
        dVar3 = *(double *)(param_1 + 0x510);
        dVar4 = dVar16 * dVar3 * 1.0 + dVar6 * dVar22 + dVar12 * dVar5 * -1.0 + dVar15 * dVar18;
        auVar19._8_4_ = SUB84(dVar4,0);
        auVar19._0_8_ =
             dVar18 * dVar23 * -1.0 + dVar5 * dVar13 + dVar11 * dVar6 * 1.0 + dVar14 * dVar16;
        auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x500) = auVar19;
        *(double *)(param_1 + 0x510) =
             dVar6 * dVar23 * 1.0 + ((dVar11 * dVar18 * 1.0 + dVar14 * dVar5) - dVar16 * dVar13);
        *(double *)(param_1 + 0x518) =
             dVar5 * dVar3 * -1.0 + ((dVar12 * dVar16 * -1.0 + dVar15 * dVar6) - dVar18 * dVar22);
      }
    }
    FUN_1407b4258(param_1,param_2,param_3,param_4);
    if (((((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < dVar21)) ||
         (9.999999747378752e-05 < dVar7)) &&
        ((ABS(*(double *)(param_1 + 0x128)) <= 9.999999747378752e-05 &&
         (ABS(*(double *)(param_1 + 0x130)) <= 9.999999747378752e-05)))) &&
       (ABS(*(double *)(param_1 + 0x138)) <= 9.999999747378752e-05)) {
      FUN_1447cd2ec(param_1 + 0x310,0);
    }
    if ((*(char *)(param_1 + 0x4d5) == '\x01') &&
       (*(double *)(param_1 + 0x138) <= 0.0 && *(double *)(param_1 + 0x138) != 0.0)) {
      FUN_1447f69b6(param_1 + 0x338);
      *(undefined1 *)(param_1 + 0x4d5) = 0;
    }
    if ((0.0 <= dVar2) &&
       (*(double *)(param_1 + 0x138) <= 0.0 && *(double *)(param_1 + 0x138) != 0.0)) {
      FUN_1447f69b6(param_1 + 800);
      return;
    }
  }
  return;
}



// FUNCTION 1407b4258 FUN_1407b4258 body=2806 status=ok
// SIG undefined FUN_1407b4258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b4258(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  double _X;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auStack_f78 [32];
  float *local_f58;
  undefined1 local_f50;
  ulonglong local_f40;
  uint local_f34;
  double *local_f30;
  undefined1 local_f28 [16];
  double local_f18;
  double dStack_f10;
  double local_f08;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  float local_edc;
  double local_ed8;
  double dStack_ed0;
  double local_ec8;
  double local_eb8;
  longlong lStack_eb0;
  longlong local_ea8;
  double local_e98;
  double dStack_e90;
  double local_e88;
  double local_e78;
  double dStack_e70;
  undefined1 local_e68 [16];
  undefined1 local_e50 [24];
  double local_e38;
  double dStack_e30;
  double local_e28;
  float local_e18;
  float local_e14;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined4 local_d74;
  byte local_d6b;
  undefined4 local_d48;
  longlong local_d18 [125];
  longlong local_930;
  longlong local_720;
  byte local_710;
  longlong local_708 [125];
  longlong local_320;
  longlong local_110;
  byte local_100;
  ulonglong local_f0;
  
  fVar25 = (float)param_2;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_f78;
  uVar13 = 0;
  if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
    uVar13 = *(uint *)(param_1 + 0x30) >> 5 & 1;
  }
  if (*(int *)((longlong)param_1 + 0x264) != 0) {
    uVar3 = *(uint *)(param_1 + 0x4c);
    uVar10 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1407b435c;
    puVar11 = (undefined8 *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar11 != (undefined8 *)0x0) &&
       ((*(int *)(puVar11 + 2) == *(int *)((longlong)param_1 + 0x264) &&
        ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
      uVar10 = *puVar11;
      goto LAB_1407b435c;
    }
  }
  uVar10 = 0;
LAB_1407b435c:
  FUN_1402ed838(local_708,uVar10,uVar13,1);
  if ((*(byte *)((longlong)param_1 + 0x181) & 0x20) == 0) {
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  param_1[0x45] = param_1[0x58];
  param_1[0x43] = param_1[0x56];
  param_1[0x44] = param_1[0x57];
  lVar4 = DAT_14c8464e8;
  param_1[0x56] = DAT_14c8464e0;
  param_1[0x57] = lVar4;
  param_1[0x58] = DAT_14c8464f0;
  if (((param_1[0x22] != 0) && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) &&
     (cVar8 = (**(code **)(*param_1 + 0x498))(param_1), cVar8 == '\0')) {
    FUN_14347b504(param_1);
    lVar4 = param_1[0x22];
    if ((((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) &&
        (((*(byte *)(param_1 + 0x30) & 0x20) != 0 &&
         ((lVar4 = *(longlong *)(lVar4 + 0xa8), lVar4 != 0 &&
          (cVar8 = (**(code **)(*param_1 + 0x580))(param_1), cVar8 != '\0')))))) &&
       (cVar8 = (**(code **)(*(longlong *)param_1[0x22] + 0x480))(), cVar8 == '\0')) {
      local_f40 = 0;
      memset(&local_e18,0,0x100);
      local_d48 = 0xffffffff;
      local_d74 = 0xffffffff;
      local_e14 = 1.0;
      if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = param_1[0x22];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
      }
      puVar14 = (undefined1 *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      auVar22._0_8_ = FUN_1402ed838(local_d18,lVar12,1,puVar14);
      auVar22._8_8_ = extraout_XMM0_Qb;
      pdVar2 = (double *)(param_1 + 0x25);
      local_f30 = (double *)(param_1 + 0x32);
      auVar22 = roundpd(auVar22,ZEXT816(0),3);
      local_f28._0_8_ = (0.0 - auVar22._0_8_ * 360.0) * 0.008726646259971648;
      local_f28._8_8_ = (0.0 - auVar22._8_8_ * 360.0) * 0.008726646259971648;
      local_f34 = 0;
      iVar16 = 0;
      local_f18 = local_f28._8_8_;
      dStack_f10 = local_f28._8_8_;
      do {
        if ((((((*(byte *)(param_1 + 0x30) & 0x20) == 0) || (fVar25 < 1e-06)) ||
             ((int)param_1[0x3e] <= iVar16)) ||
            (((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0 || (param_1[0x22] == 0)))) ||
           ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_1407b4be2;
        iVar1 = iVar16 + 1;
        cVar8 = (**(code **)(*param_1 + 0x598))(param_1);
        fVar26 = fVar25;
        uVar27 = (int)((ulonglong)param_2 >> 0x20);
        if (cVar8 != '\0') {
          fVar26 = *(float *)((longlong)param_1 + 0x1ec);
          fVar23 = fVar25;
          if (((fVar26 < fVar25) && (iVar1 < (int)param_1[0x3e])) &&
             (fVar23 = fVar26, fVar25 * 0.5 <= fVar26)) {
            fVar23 = fVar25 * 0.5;
          }
          uVar27 = 0;
          fVar26 = 1e-06;
          if (1e-06 <= fVar23) {
            fVar26 = fVar23;
          }
        }
        local_e14 = 1.0;
        local_e28 = (double)param_1[0x27];
        local_e38 = *pdVar2;
        dStack_e30 = (double)param_1[0x26];
        (**(code **)(*param_1 + 0x5e8))(param_1,local_e50,&local_e38,CONCAT44(uVar27,fVar26));
        local_f58 = (float *)local_e50;
        (**(code **)(*param_1 + 0x608))(param_1,&local_e78,&local_e38,CONCAT44(uVar27,fVar26));
        uVar15 = CONCAT71((int7)((ulonglong)puVar14 >> 8),*(byte *)(param_1 + 0x30));
        if ((~*(byte *)(param_1 + 0x30) & 3) == 0) {
          FUN_1448052ee(&local_e78,&local_e98);
          local_e98 = 0.0;
          dVar17 = (double)FUN_144719204(dStack_e90,0x4076800000000000);
          dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                           (ulonglong)(dVar17 + 360.0) & -(ulonglong)(dVar17 < 0.0));
          dVar24 = (double)(~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                           (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17));
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar24;
          auVar22 = divpd(auVar5 << 0x40,_DAT_1499387d0);
          auVar22 = roundpd(auVar22,auVar22,3);
          dVar17 = (0.0 - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar24 = (dVar24 - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          local_f08 = sin(dVar17);
          dVar18 = sin(dVar24);
          uVar10 = local_f28._0_8_;
          dVar19 = sin((double)local_f28._0_8_);
          _X = local_f18;
          sin(local_f18);
          dVar20 = cos(dVar17);
          dVar24 = cos(dVar24);
          dVar21 = cos((double)uVar10);
          cos(_X);
          dVar17 = dVar18 * local_f08 * dVar19 + dVar24 * dVar20 * dVar21;
          local_e78 = local_f08 * dVar18 * dVar21 - dVar20 * dVar24 * dVar19;
          dStack_e70 = -(local_f08 * dVar24 * dVar21) - dVar20 * dVar18 * dVar19;
          local_e68._8_4_ = SUB84(dVar17,0);
          local_e68._0_8_ = -(dVar24 * local_f08 * dVar19) + dVar18 * dVar20 * dVar21;
          local_e68._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          uVar15 = CONCAT71((int7)(uVar15 >> 8),(char)param_1[0x30]);
        }
        if ((uVar15 & 4) == 0) {
          uVar13 = *(uint *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x24) = uVar13 | 4;
          puVar14 = (undefined1 *)
                    CONCAT71((int7)((uVar15 & 0xffffffffffffff40) >> 8),
                             (byte)(uVar15 & 0xffffffffffffff40) >> 6);
          local_f58 = &local_e18;
          local_f50 = 0;
          (**(code **)(*param_1 + 0x4e8))(param_1,local_e50,&local_e78,puVar14);
          *(uint *)(param_1 + 0x24) = uVar13;
        }
        else {
          puVar14 = (undefined1 *)
                    CONCAT71((int7)((uVar15 & 0xffffffffffffff40) >> 8),
                             (byte)(uVar15 & 0xffffffffffffff40) >> 6);
          local_f58 = &local_e18;
          local_f50 = 0;
          FUN_1402eda10(param_1,local_e50,&local_e78,puVar14);
        }
        if ((((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) || (param_1[0x22] == 0)) ||
           ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_1407b4bee;
        fVar25 = fVar25 - fVar26;
        if ((local_d6b & 1) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
          *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) & 0xfd;
          bVar7 = false;
          iVar16 = iVar1;
          bVar6 = false;
          if (((double)param_1[0x25] == local_e38) &&
             (bVar6 = false, !NAN((double)param_1[0x25]) && !NAN(local_e38))) {
            bVar6 = bVar7;
            if (((double)param_1[0x26] == dStack_e30) &&
               (!NAN((double)param_1[0x26]) && !NAN(dStack_e30))) {
              if (((double)param_1[0x27] == local_e28) &&
                 (!NAN((double)param_1[0x27]) && !NAN(local_e28))) {
                local_eb8 = *pdVar2;
                lStack_eb0 = param_1[0x26];
                local_ea8 = param_1[0x27];
                (**(code **)(*param_1 + 0x588))
                          (param_1,&local_e98,&local_eb8,CONCAT44(uVar27,fVar26));
                param_1[0x27] = (longlong)local_e88;
                *pdVar2 = local_e98;
                param_1[0x26] = (longlong)dStack_e90;
              }
            }
          }
        }
        else {
          if ((*pdVar2 == local_e38) && (!NAN(*pdVar2) && !NAN(local_e38))) {
            if (((double)param_1[0x26] == dStack_e30) &&
               (!NAN((double)param_1[0x26]) && !NAN(dStack_e30))) {
              if (((double)param_1[0x27] == local_e28) &&
                 (!NAN((double)param_1[0x27]) && !NAN(local_e28))) {
                if (local_e14 <= 0.0001) {
                  local_e88 = local_e28;
                  local_e98 = local_e38;
                  dStack_e90 = dStack_e30;
                }
                else {
                  local_ec8 = local_e28;
                  local_ed8 = local_e38;
                  dStack_ed0 = dStack_e30;
                  (**(code **)(*param_1 + 0x588))(param_1,&local_e98,&local_ed8,local_e14 * fVar26);
                }
                param_1[0x27] = (longlong)local_e88;
                *pdVar2 = local_e98;
                param_1[0x26] = (longlong)dStack_e90;
              }
            }
          }
          local_edc = (1.0 - local_e14) * fVar26;
          local_f58 = &local_edc;
          puVar14 = local_e50;
          iVar9 = (**(code **)(*param_1 + 0x5c8))(param_1,&local_e18);
          if (((iVar9 == 2) || (param_1[0x22] == 0)) ||
             ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) {
            iVar9 = (int)local_f40;
            bVar6 = true;
          }
          else {
            if (iVar9 == 1) {
              *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
            }
            else if (iVar9 == 0) {
              local_f34 = local_f34 + 1;
              puVar14 = (undefined1 *)(ulonglong)local_f34;
              local_f58 = &local_edc;
              (**(code **)(*param_1 + 0x5d0))(param_1,&local_e18,&local_e38);
              *(float *)((longlong)param_1 + 0x18c) = local_e14;
              local_ef8 = local_dd8;
              uStack_ef0 = uStack_dd0;
              local_ee8 = local_dc8;
              (**(code **)(*param_1 + 0x560))(param_1,&local_e98,&local_ef8);
              local_f30[2] = local_e88;
              *local_f30 = local_e98;
              local_f30[1] = dStack_e90;
            }
            iVar9 = (int)local_f40;
            bVar6 = false;
            if ((1e-06 <= local_edc) &&
               (fVar25 = fVar25 + local_edc, bVar6 = false,
               iVar9 < *(int *)((longlong)param_1 + 500))) {
              iVar1 = iVar16;
            }
          }
          iVar16 = iVar1;
          local_f40 = (ulonglong)(iVar9 + 1);
        }
      } while (!bVar6);
      if (bVar6) {
LAB_1407b4be2:
        (**(code **)(*param_1 + 0x4d0))(param_1);
      }
LAB_1407b4bee:
      if ((((local_710 & 1) != 0) && (local_d18[0] != 0)) &&
         ((*(uint *)(local_d18[0] + 8) >> 0x1e & 1) == 0)) {
        FUN_140248a4c();
      }
      local_d18[0] = 0;
      if (local_720 != 0) {
        FUN_1400020a8();
      }
      if (local_930 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((((local_100 & 1) != 0) && (local_708[0] != 0)) &&
     ((*(uint *)(local_708[0] + 8) >> 0x1e & 1) == 0)) {
    FUN_140248a4c();
  }
  local_708[0] = 0;
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_320 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_f78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b4d50 FUN_1407b4d50 body=3606 status=ok
// SIG undefined FUN_1407b4d50(void)

void FUN_1407b4d50(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
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
  double _Y;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_208 [36];
  float local_1e4;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 local_198;
  uint uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  double dStack_180;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((((*(char *)((longlong)param_1 + 0x11) != '\x01') || ((longlong *)*param_1 == (longlong *)0x0)
       ) || (param_1[1] == 0)) || ((char)param_1[2] == '\0')) goto LAB_1407b557d;
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x180))();
  if (lVar3 != 0) {
    if (*param_1 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)param_1[1];
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_e8);
    fVar23 = (float)SQRT(local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0);
    if (0.0001 <= fVar23) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      fVar22 = (float)*(double *)(lVar3 + 0x6d0);
      lVar3 = (**(code **)(*plVar4 + 0xb0))();
      fVar21 = *(float *)((longlong)param_1 + 0x14);
      if ((*(float *)((longlong)param_1 + 0x14) < 0.0) &&
         (*(float *)((longlong)param_1 + 0x14) = fVar22, fVar21 = fVar22, (char)param_1[2] == '\x02'
         )) {
        fVar19 = *(float *)(lVar3 + 0x3c);
        uVar2 = *(int *)((longlong)param_1 + 0x1c) * 0xbb38435 + 0x3619636b;
        *(uint *)((longlong)param_1 + 0x1c) = uVar2;
        *(float *)(param_1 + 0x10) = ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * fVar19 + 0.0;
      }
      if (*(float *)(lVar3 + 0xc) <= fVar22 - fVar21) {
        local_f8 = (double)param_1[10];
        local_108 = (double)param_1[8];
        dStack_100 = (double)param_1[9];
        if (*(char *)((longlong)param_1 + 0x12) == '\0') {
          if (*param_1 == 0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = (longlong *)param_1[1];
          }
          cVar1 = (**(code **)(*plVar4 + 0x68))();
          if (cVar1 != '\0') {
            if (*param_1 == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = (longlong *)param_1[1];
            }
            cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_108);
            if (cVar1 != '\0') {
              *(undefined1 *)((longlong)param_1 + 0x12) = 1;
            }
          }
        }
        fVar19 = *(float *)(lVar3 + 0x10);
        fVar8 = 1.0;
        if ((fVar19 <= 0.0) ||
           (fVar21 = (fVar22 - fVar21) - *(float *)(lVar3 + 0xc), fVar19 <= fVar21)) {
LAB_1407b4f41:
          fVar21 = fVar8;
          if ((0.0 < *(float *)(lVar3 + 8)) && (*(char *)((longlong)param_1 + 0x12) == '\x01')) {
            if (*param_1 == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = (longlong *)param_1[1];
            }
            (**(code **)(*plVar4 + 0x10))(plVar4,&local_158);
            fVar19 = (float)SQRT((local_f8 - local_148) * (local_f8 - local_148) +
                                 (local_108 - local_158) * (local_108 - local_158) +
                                 (dStack_100 - dStack_150) * (dStack_100 - dStack_150));
            fVar8 = fVar19 / *(float *)(lVar3 + 8);
            uVar2 = -(uint)(*(float *)(lVar3 + 8) < fVar19);
            fVar21 = fVar21 * (float)(uVar2 & 0x3f800000 | ~uVar2 & (uint)(fVar8 * fVar8));
          }
        }
        else {
          fVar21 = fVar21 / fVar19;
          fVar8 = 1.0;
          if ((1.0 <= fVar21) || (fVar8 = fVar21, 0.0 < fVar21)) goto LAB_1407b4f41;
        }
        lVar6 = DAT_14c8463e8;
        if ((char)param_1[2] == '\x01') {
          if ((0.0 < fVar21) && (*(float *)(param_1 + 0xb) + *(float *)(lVar3 + 0x18) <= fVar22)) {
            *(float *)(param_1 + 0xb) = fVar22;
            fVar19 = 0.0;
            if (*(float *)((longlong)param_1 + 0x5c) < 0.0) {
              *(float *)(param_1 + 0xb) = fVar22 + *(float *)(lVar3 + 0x18) * -0.5;
              fVar22 = 360.0;
            }
            else {
              fVar8 = *(float *)((longlong)param_1 + 0x5c) + 180.0;
              fVar22 = *(float *)(lVar3 + 0x24);
              if (180.0 <= *(float *)(lVar3 + 0x24)) {
                fVar22 = 180.0;
              }
              if (fVar22 <= 0.0) {
                fVar22 = 0.0;
              }
              fVar19 = fVar8 - fVar22;
              fVar22 = fVar22 + fVar8;
            }
            if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
              if (*param_1 == 0) {
                plVar4 = (longlong *)0x0;
              }
              else {
                plVar4 = (longlong *)param_1[1];
              }
              (**(code **)(*plVar4 + 0x10))(plVar4,&local_158);
            }
            uVar2 = *(int *)((longlong)param_1 + 0x1c) * 0xbb38435 + 0x3619636b;
            *(uint *)((longlong)param_1 + 0x1c) = uVar2;
            fVar19 = (fVar22 - fVar19) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) + fVar19;
            *(float *)((longlong)param_1 + 0x5c) = fVar19;
            dVar9 = (double)FUN_144719204((double)fVar19);
            fVar22 = (float)(double)(~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar9 |
                                    (ulonglong)(dVar9 + 360.0) & -(ulonglong)(dVar9 < 0.0));
            *(float *)((longlong)param_1 + 0x5c) = fVar22;
            dVar10 = (double)(fVar22 * 0.017453292);
            dVar9 = sin(dVar10);
            param_1[0xe] = (longlong)dVar9;
            dVar9 = cos(dVar10);
            param_1[0xf] = (longlong)dVar9;
            fVar22 = *(float *)(lVar3 + 0x20);
            param_1[0xe] = (longlong)((double)param_1[0xe] * (double)fVar22);
            param_1[0xf] = (longlong)(dVar9 * (double)fVar22);
          }
          dVar9 = (double)param_1[0xc];
          dVar10 = (double)param_1[0xe];
          if ((dVar10 != dVar9) || (NAN(dVar10) || NAN(dVar9))) {
            fVar22 = (float)FUN_1407b5b68((float)dVar9,(float)dVar10);
            dVar9 = (double)FUN_144719204((double)fVar22);
            dVar9 = (double)(~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar9 |
                            (ulonglong)(dVar9 + 360.0) & -(ulonglong)(dVar9 < 0.0));
            dVar9 = (double)(~-(ulonglong)(180.0 < dVar9) & (ulonglong)dVar9 |
                            (ulonglong)(dVar9 + -360.0) & -(ulonglong)(180.0 < dVar9));
            param_1[0xc] = (longlong)dVar9;
          }
          dVar10 = (double)param_1[0xd];
          dVar11 = (double)param_1[0xf];
          local_1e4 = fVar23;
          if ((dVar11 != dVar10) || (NAN(dVar11) || NAN(dVar10))) {
            fVar23 = (float)FUN_1407b5b68(CONCAT44((int)((ulonglong)dVar10 >> 0x20),(float)dVar10),
                                          CONCAT44((int)((ulonglong)dVar11 >> 0x20),(float)dVar11));
            dVar9 = (double)FUN_144719204((double)fVar23);
            dVar9 = (double)(~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar9 |
                            (ulonglong)(dVar9 + 360.0) & -(ulonglong)(dVar9 < 0.0));
            dVar10 = (double)(~-(ulonglong)(180.0 < dVar9) & (ulonglong)dVar9 |
                             (ulonglong)(dVar9 + -360.0) & -(ulonglong)(180.0 < dVar9));
            param_1[0xd] = (longlong)dVar10;
            dVar9 = (double)param_1[0xc];
          }
          dVar10 = (double)FUN_144719204(dVar10 * (double)fVar21);
          dVar11 = (double)FUN_144719204(dVar9 * (double)fVar21);
          local_1e0 = sin(dVar10 * 0.017453292519943295);
          dVar12 = cos(dVar10 * 0.017453292519943295);
          dVar9 = sin(dVar11 * 0.017453292519943295);
          dVar10 = cos(dVar11 * 0.017453292519943295);
          dVar15 = -(double)param_1[4];
          dVar16 = -(double)param_1[5];
          dVar11 = (double)param_1[6] * -1.0;
          dVar13 = (double)param_1[7] * 1.0;
          dVar17 = dVar16 * local_d8 - dStack_e0 * dVar11;
          dVar17 = dVar17 + dVar17;
          dVar20 = dVar15 * dStack_e0 - local_e8 * dVar16;
          dVar20 = dVar20 + dVar20;
          dVar14 = dVar11 * local_e8 - local_d8 * dVar15;
          dVar14 = dVar14 + dVar14;
          dVar18 = (dVar15 * dVar14 - dVar17 * dVar16) + dVar13 * dVar20 + local_d8;
          dVar15 = (dVar11 * dVar17 - dVar20 * dVar15) + dVar13 * dVar14 + dStack_e0;
          dVar11 = (dVar16 * dVar20 - dVar14 * dVar11) + dVar13 * dVar17 + local_e8;
          dVar13 = 0.0;
          if ((((dVar11 != 0.0) || (NAN(dVar11))) || (dVar15 != 0.0)) || (NAN(dVar15))) {
            dVar13 = atan2(dVar15,dVar11);
            dVar13 = dVar13 * 0.5;
          }
          dVar9 = dVar9 * dVar12;
          dVar10 = dVar10 * dVar12;
          dVar15 = SQRT(dVar11 * dVar11 + dVar15 * dVar15);
          dVar11 = 0.0;
          if (((dVar18 != 0.0) || (NAN(dVar18))) || ((dVar15 != 0.0 || (NAN(dVar15))))) {
            dVar11 = atan2(dVar18,dVar15);
            dVar11 = dVar11 * 0.5;
          }
          dVar12 = sin(dVar11);
          dVar15 = cos(dVar11);
          dVar17 = sin(dVar13);
          dVar11 = cos(dVar13);
          dVar14 = dVar12 * dVar17;
          dVar13 = -dVar12 * dVar11;
          dVar17 = dVar17 * dVar15;
          dVar15 = dVar15 * dVar11;
          dVar18 = dVar14 * dVar9 - dVar10 * dVar13;
          dVar16 = dVar17 * dVar10 - local_1e0 * dVar14;
          dVar20 = dVar13 * local_1e0 - dVar9 * dVar17;
          dVar18 = dVar18 + dVar18;
          dVar16 = dVar16 + dVar16;
          dVar20 = dVar20 + dVar20;
          dVar12 = (double)local_1e4;
          _Y = ((dVar14 * dVar16 - dVar20 * dVar13) + dVar15 * dVar18 + local_1e0) * dVar12;
          dVar11 = ((dVar17 * dVar20 - dVar18 * dVar14) + dVar15 * dVar16 + dVar9) * dVar12;
          dVar12 = ((dVar13 * dVar18 - dVar16 * dVar17) + dVar15 * dVar20 + dVar10) * dVar12;
          dVar9 = 0.0;
          local_158 = dVar12;
          dStack_150 = dVar11;
          local_148 = _Y;
          if (((dVar12 != 0.0) || (NAN(dVar12))) || ((dVar11 != 0.0 || (NAN(dVar11))))) {
            dVar9 = atan2(dVar11,dVar12);
            dVar9 = dVar9 * 0.5;
          }
          dVar11 = SQRT(dVar12 * dVar12 + dVar11 * dVar11);
          dVar10 = 0.0;
          if ((((_Y != 0.0) || (NAN(_Y))) || (dVar11 != 0.0)) || (NAN(dVar11))) {
            dVar10 = atan2(_Y,dVar11);
            dVar10 = dVar10 * 0.5;
          }
          dVar12 = sin(dVar10);
          dVar11 = cos(dVar10);
          dVar10 = sin(dVar9);
          dVar9 = cos(dVar9);
          dVar18 = dVar12 * dVar10;
          dVar12 = -dVar12 * dVar9;
          dVar10 = dVar10 * dVar11;
          dVar11 = dVar11 * dVar9;
          dVar17 = dVar17 * -1.0;
          dVar15 = dVar15 * 1.0;
          param_1[4] = (longlong)
                       ((dVar17 * dVar12 + (dVar15 * dVar18 * 1.0 - dVar11 * dVar14)) -
                       dVar13 * dVar10 * -1.0);
          param_1[5] = (longlong)
                       ((dVar15 * dVar12 + (dVar17 * dVar18 * -1.0 - dVar11 * dVar13)) -
                       dVar14 * dVar10 * 1.0);
          param_1[6] = (longlong)
                       (dVar15 * dVar10 * 1.0 +
                       dVar14 * dVar12 + (dVar17 * dVar11 - dVar18 * dVar13 * 1.0));
          param_1[7] = (longlong)
                       (dVar17 * dVar10 * -1.0 +
                       dVar13 * dVar12 + (dVar15 * dVar11 - dVar18 * dVar14 * -1.0));
          if (*param_1 == 0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = (longlong *)param_1[1];
          }
          lVar3 = *plVar4;
          pdVar5 = &local_158;
        }
        else {
          if ((((fVar21 <= 0.0) && ((double)param_1[0x11] == 0.0)) && (!NAN((double)param_1[0x11])))
             && (((double)param_1[0x12] == 0.0 && (!NAN((double)param_1[0x12]))))) {
            param_1[6] = DAT_14c8463e0;
            param_1[7] = lVar6;
            lVar3 = DAT_14c8463d8;
            param_1[4] = DAT_14c8463d0;
            param_1[5] = lVar3;
            lVar3 = DAT_14c8463f8;
            param_1[0x11] = DAT_14c8463f0;
            param_1[0x12] = lVar3;
            goto LAB_1407b5579;
          }
          if ((longlong)*(int *)(lVar3 + 0x30) == 0) {
            dVar9 = 0.0;
            dVar10 = 0.0;
          }
          else {
            lVar6 = *(longlong *)(lVar3 + 0x28);
            lVar7 = (longlong)*(int *)(lVar3 + 0x30) * 0x18;
            dVar10 = 0.0;
            dVar9 = 0.0;
            do {
              FUN_142b404f4(lVar6,&local_158);
              dVar9 = dVar9 + local_158;
              dVar10 = dVar10 + dStack_150;
              lVar6 = lVar6 + 0x18;
              lVar7 = lVar7 + -0x18;
            } while (lVar7 != 0);
          }
          dVar9 = dVar9 * (double)*(float *)(lVar3 + 0x38) * (double)fVar21;
          dVar11 = dVar10 * (double)*(float *)(lVar3 + 0x38) * (double)fVar21;
          local_110 = 0;
          local_120 = dVar11;
          local_118 = dVar9;
          FUN_144a76660(&local_120,&local_138);
          local_198 = (undefined4)param_1[4];
          uStack_190 = (undefined4)param_1[5];
          uStack_194 = *(uint *)((longlong)param_1 + 0x24) ^ 0x80000000;
          uStack_18c = *(uint *)((longlong)param_1 + 0x2c) ^ 0x80000000;
          local_188 = (double)param_1[6] * -1.0;
          dStack_180 = (double)param_1[7] * 1.0;
          local_1b8 = local_e8;
          dStack_1b0 = dStack_e0;
          local_1a8 = local_d8;
          FUN_14276fa40(&local_198,&local_170);
          FUN_144afe7fe(&local_170,&local_158);
          local_1d8 = local_138;
          uStack_1d0 = uStack_130;
          local_1c8 = local_128;
          FUN_14276fa40(&local_158,&local_198);
          local_170 = (double)fVar23;
          local_160 = local_188 * local_170;
          local_168 = (double)CONCAT44(uStack_18c,uStack_190) * local_170;
          local_170 = local_170 * (double)CONCAT44(uStack_194,local_198);
          FUN_144afe7fe(&local_170,&local_198);
          dVar10 = local_148 * -1.0;
          dStack_140 = dStack_140 * 1.0;
          param_1[4] = (longlong)
                       ((dVar10 * (double)CONCAT44(uStack_18c,uStack_190) +
                        ((double)CONCAT44(uStack_194,local_198) * dStack_140 * 1.0 -
                        dStack_180 * local_158)) - dStack_150 * local_188 * -1.0);
          param_1[5] = (longlong)
                       ((dStack_140 * (double)CONCAT44(uStack_18c,uStack_190) +
                        ((double)CONCAT44(uStack_194,local_198) * dVar10 * -1.0 -
                        dStack_180 * dStack_150)) - local_158 * local_188 * 1.0);
          param_1[6] = (longlong)
                       (dStack_140 * local_188 * 1.0 +
                       local_158 * (double)CONCAT44(uStack_18c,uStack_190) +
                       (dVar10 * dStack_180 -
                       (double)CONCAT44(uStack_194,local_198) * dStack_150 * 1.0));
          param_1[7] = (longlong)
                       (dVar10 * local_188 * -1.0 +
                       dStack_150 * (double)CONCAT44(uStack_18c,uStack_190) +
                       (dStack_140 * dStack_180 -
                       (double)CONCAT44(uStack_194,local_198) * local_158 * -1.0));
          param_1[0x11] = (longlong)dVar9;
          param_1[0x12] = (longlong)dVar11;
          if (*param_1 == 0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = (longlong *)param_1[1];
          }
          lVar3 = *plVar4;
          pdVar5 = &local_170;
        }
        (**(code **)(lVar3 + 0x20))(plVar4,pdVar5);
      }
    }
  }
LAB_1407b5579:
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
LAB_1407b557d:
  if ((local_d0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b5b68 FUN_1407b5b68 body=377 status=ok
// SIG undefined FUN_1407b5b68(void)

uint FUN_1407b5b68(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((param_3 == 0.0) && (fVar1 = param_1, !NAN(param_3))) || (fVar1 = param_2, 360.0 <= param_3))
  goto LAB_1407b5c3d;
  fVar1 = (float)FUN_1447c7e44(param_1);
  fVar3 = (float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + 360.0) & -(uint)(fVar1 < 0.0)
                 );
  fVar1 = (float)FUN_1447c7e44();
  fVar1 = (float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + 360.0) & -(uint)(fVar1 < 0.0)
                 );
  param_3 = ABS(param_3);
  if (fVar1 < fVar3) {
    fVar2 = fVar3 - fVar1;
    if (fVar2 < 180.0) goto LAB_1407b5ca7;
    fVar2 = (fVar1 + 360.0) - fVar3;
  }
  else {
    fVar2 = fVar1 - fVar3;
    if (180.0 <= fVar2) {
      fVar2 = (fVar3 + 360.0) - fVar1;
LAB_1407b5ca7:
      if (param_3 <= fVar2) {
        fVar2 = param_3;
      }
      fVar1 = fVar3 - fVar2;
      goto LAB_1407b5c3d;
    }
  }
  if (param_3 <= fVar2) {
    fVar2 = param_3;
  }
  fVar1 = fVar3 + fVar2;
LAB_1407b5c3d:
  fVar1 = (float)FUN_1447c7e44(fVar1);
  return ~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + 360.0) & -(uint)(fVar1 < 0.0);
}



// FUNCTION 1407b5ce2 FUN_1407b5ce2 body=3131 status=ok
// SIG undefined FUN_1407b5ce2(void)

void FUN_1407b5ce2(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  byte bVar2;
  double _Y;
  double dVar3;
  double _Y_00;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double _X;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float local_1b4;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined4 local_178 [2];
  undefined4 local_170;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((((*(byte *)(param_1 + 9) & 2) == 0) || (*param_1 == 0)) ||
     (plVar10 = (longlong *)param_1[1], plVar10 == (longlong *)0x0)) goto LAB_1407b689c;
  fVar13 = (float)param_2;
  uVar23 = (undefined4)((ulonglong)param_2 >> 0x20);
  cVar6 = (**(code **)(*plVar10 + 0x58))(plVar10,&local_f8);
  if (cVar6 == '\0') goto LAB_1407b689c;
  if (*param_1 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)param_1[1];
  }
  bVar2 = *(byte *)(param_1 + 9);
  lVar9 = (**(code **)(*plVar10 + 0x48))();
  if (*param_1 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)param_1[1];
  }
  cVar6 = (**(code **)(*plVar10 + 0xb8))();
  if (*param_1 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)param_1[1];
  }
  cVar7 = (**(code **)(*plVar10 + 0x40))();
  if (*param_1 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)param_1[1];
  }
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_110);
  if (*param_1 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)param_1[1];
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,&local_128);
  _Y_00 = local_f0 - (double)CONCAT44(uStack_104,uStack_108);
  _X = local_f8 - (double)CONCAT44(uStack_10c,local_110);
  _Y = 0.0;
  if (cVar7 == '\0') {
    _Y = local_e8 - local_100;
  }
  fVar27 = (float)SQRT(_Y * _Y + _X * _X + _Y_00 * _Y_00);
  if (0.0001 < fVar27) {
    dVar15 = 1.0 / (double)fVar27;
    _X = _X * dVar15;
    _Y_00 = _Y_00 * dVar15;
    _Y = _Y * dVar15;
  }
  if (cVar6 != '\0') {
    if (*param_1 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)param_1[1];
    }
    (**(code **)(*plVar10 + 200))(plVar10,&local_148);
    dVar21 = local_140 * _Y - _Y_00 * local_138;
    dVar21 = dVar21 + dVar21;
    dVar15 = local_148 * _Y_00 - _X * local_140;
    dVar15 = dVar15 + dVar15;
    dVar19 = local_138 * _X - _Y * local_148;
    dVar19 = dVar19 + dVar19;
    _Y = (local_148 * dVar19 - dVar21 * local_140) + local_130 * dVar15 + _Y;
    _Y_00 = (local_138 * dVar21 - dVar15 * local_148) + local_130 * dVar19 + _Y_00;
    _X = (local_140 * dVar15 - dVar19 * local_138) + dVar21 * local_130 + _X;
  }
  fVar11 = (float)SQRT(local_118 * local_118 + local_128 * local_128 + local_120 * local_120);
  dVar15 = (double)fVar11;
  local_1a8 = local_128;
  local_188 = local_120;
  local_180 = local_118;
  if (0.0001 < fVar11) {
    local_180 = 1.0 / dVar15;
    local_1a8 = local_128 * local_180;
    local_188 = local_120 * local_180;
    local_180 = local_118 * local_180;
  }
  bVar8 = *(byte *)(param_1 + 9);
  if ((bVar8 & 4) == 0) {
    uVar23 = SUB84(local_100,0);
    uVar12 = (undefined4)((ulonglong)local_100 >> 0x20);
    dVar19 = (double)param_1[6];
    dVar20 = local_100 - dVar19;
    dVar21 = (double)param_1[4];
    dVar22 = (double)param_1[5];
    dVar17 = (double)CONCAT44(uStack_104,uStack_108) - dVar22;
    dVar4 = (double)CONCAT44(uStack_10c,local_110) - dVar21;
    dVar16 = (local_e8 - dVar19) * dVar20 +
             (local_f8 - dVar21) * dVar4 + (local_f0 - dVar22) * dVar17;
    if (dVar16 <= 0.0) {
LAB_1407b6167:
      uVar14 = SUB84(dVar22,0);
      uVar26 = (undefined4)((ulonglong)dVar22 >> 0x20);
      uVar23 = SUB84(dVar19,0);
      uVar12 = (undefined4)((ulonglong)dVar19 >> 0x20);
      dVar5 = dVar21;
    }
    else {
      dVar3 = dVar20 * dVar20 + dVar4 * dVar4 + dVar17 * dVar17;
      uVar14 = uStack_108;
      uVar26 = uStack_104;
      dVar5 = (double)CONCAT44(uStack_10c,local_110);
      if (dVar16 < dVar3) {
        dVar16 = dVar16 / dVar3;
        dVar19 = dVar19 + dVar20 * dVar16;
        dVar22 = dVar22 + dVar17 * dVar16;
        dVar21 = dVar21 + dVar4 * dVar16;
        goto LAB_1407b6167;
      }
    }
    local_f0 = local_f0 - (double)CONCAT44(uVar26,uVar14);
    local_f0 = local_f0 * local_f0;
    dVar19 = (local_f8 - dVar5) * (local_f8 - dVar5);
    if ((*(byte *)(lVar9 + 0x5c) & 1) == 0) {
      local_e8 = local_e8 - (double)CONCAT44(uVar12,uVar23);
      dVar19 = dVar19 + local_f0 + local_e8 * local_e8;
    }
    else {
      dVar19 = dVar19 + local_f0;
    }
    uVar23 = 0;
    fVar27 = (float)SQRT(dVar19);
    local_1b4 = fVar13;
    local_1b0 = dVar15;
    local_1a0 = _Y;
    local_198 = _Y_00;
    local_190 = _X;
  }
  if ((bVar8 & 0x10) == 0) {
    if (fVar27 <= *(float *)(lVar9 + 0x58)) {
      if (*param_1 == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)param_1[1];
      }
      (**(code **)(*plVar10 + 0x90))();
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x10;
      if ((*param_1 == 0) || (param_1[1] == 0)) goto LAB_1407b689c;
    }
  }
  else if (*(float *)(lVar9 + 0x58) < fVar27) {
    *(byte *)(param_1 + 9) = bVar8 & 0xef;
  }
  fVar11 = *(float *)(lVar9 + 0x2c);
  fVar24 = 1.0;
  fVar25 = 0.0;
  if ((0.0 < fVar11) && (*(float *)(param_1 + 2) < fVar11)) {
    dVar19 = (double)FUN_140bcb07c(SUB84((double)(*(float *)(param_1 + 2) / fVar11),0),
                                   *(undefined1 *)(lVar9 + 0x30),(double)*(float *)(lVar9 + 0x34),
                                   *(undefined4 *)(lVar9 + 0x38));
    fVar24 = (float)(dVar19 + 0.0);
  }
  fVar11 = *(float *)(lVar9 + 0x3c);
  if (fVar27 < fVar11) {
    fVar25 = *(float *)(param_1 + 3);
    if (fVar27 < *(float *)(param_1 + 3)) {
      *(float *)(param_1 + 3) = fVar27;
      fVar11 = *(float *)(lVar9 + 0x3c);
      fVar25 = fVar27;
    }
    fVar1 = *(float *)(lVar9 + 0x40);
    if (fVar11 <= fVar1) {
      fVar25 = 1.0;
    }
    else {
      fVar11 = (fVar25 - fVar1) / (fVar11 - fVar1);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      dVar19 = (double)FUN_140bcb07c(SUB84((double)(1.0 - fVar11),0),*(undefined1 *)(lVar9 + 0x48),
                                     (double)*(float *)(lVar9 + 0x4c),*(undefined4 *)(lVar9 + 0x50))
      ;
      fVar25 = (float)(dVar19 + 0.0);
    }
    fVar24 = fVar24 * ((*(float *)(lVar9 + 0x44) + -1.0) * fVar25 + 1.0);
  }
  fVar11 = *(float *)(lVar9 + 0x10);
  if (((fVar11 != 0.0) || (NAN(fVar11))) && (fVar1 = *(float *)(lVar9 + 0xc), 0.0 < fVar1)) {
    fVar18 = *(float *)((longlong)param_1 + 0x14);
    if ((fVar18 != fVar1) || (NAN(fVar18) || NAN(fVar1))) {
      if (fVar18 <= fVar1) {
        fVar18 = fVar11 * fVar13 + fVar18;
        if (fVar1 <= fVar18) {
          fVar18 = fVar1;
        }
      }
      else {
        fVar18 = fVar18 - fVar11 * fVar13;
        if (fVar18 <= fVar1) {
          fVar18 = fVar1;
        }
      }
      *(float *)((longlong)param_1 + 0x14) = fVar18;
    }
  }
  dVar22 = _X;
  dVar19 = _Y;
  dVar21 = _Y_00;
  if ((((*(byte *)(lVar9 + 0x5c) & 2) == 0) && (*(float *)(lVar9 + 0x24) < fVar27)) &&
     ((*(float *)(lVar9 + 0x28) <= 0.0 || (*(float *)(param_1 + 2) < *(float *)(lVar9 + 0x28))))) {
    uVar12 = SUB84(local_120,0);
    uVar14 = (undefined4)((ulonglong)local_120 >> 0x20);
    local_140 = 0.0;
    if ((((local_128 != 0.0) || (NAN(local_128))) || (local_120 != 0.0)) || (NAN(local_120))) {
      local_140 = atan2(local_120,local_128);
      local_140 = local_140 * 57.29577951308232;
      uVar12 = SUB84(local_120,0);
      uVar14 = (undefined4)((ulonglong)local_120 >> 0x20);
    }
    dVar21 = SQRT(local_128 * local_128 +
                  (double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12));
    dVar19 = 0.0;
    if (((dVar21 != 0.0) || (NAN(dVar21))) || ((local_118 != 0.0 || (NAN(local_118))))) {
      dVar19 = atan2(local_118,dVar21);
      dVar19 = dVar19 * 57.29577951308232;
    }
    local_138 = 0.0;
    local_158 = 0.0;
    local_148 = dVar19;
    if (((_X != 0.0) || (NAN(_X))) || ((_Y_00 != 0.0 || (NAN(_Y_00))))) {
      local_158 = atan2(_Y_00,_X);
      local_158 = local_158 * 57.29577951308232;
    }
    dVar21 = SQRT(_X * _X + _Y_00 * _Y_00);
    local_160 = 0.0;
    if ((((_Y != 0.0) || (NAN(_Y))) || (dVar21 != 0.0)) || (NAN(dVar21))) {
      local_160 = atan2(_Y,dVar21);
      local_160 = local_160 * 57.29577951308232;
    }
    local_150 = 0;
    if (cVar7 != '\0') {
      local_160 = dVar19;
    }
    fVar11 = *(float *)(lVar9 + 0x14);
    if ((fVar11 != 1.0) || (local_1b0 = dVar15, NAN(fVar11))) {
      local_1b0 = dVar15;
      dVar15 = (double)FUN_140bcb07c(SUB84((double)((float)(local_180 * _Y +
                                                           local_1a8 * _X + local_188 * _Y_00) *
                                                    -0.5 + 0.5),0),*(undefined1 *)(lVar9 + 0x18),
                                     (double)*(float *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20))
      ;
      fVar24 = fVar24 * (float)(((double)fVar11 + -1.0) * dVar15 + 1.0);
    }
    fVar11 = *(float *)((longlong)param_1 + 0x14);
    if (*param_1 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)param_1[1];
    }
    local_1a8 = (double)CONCAT44(local_1a8._4_4_,fVar25);
    fVar25 = (float)(**(code **)(*plVar10 + 0xa8))();
    fVar25 = fVar24 * fVar11 * fVar25;
    if ((fVar25 != 0.0) || (NAN(fVar25))) {
      local_1c8 = fVar25;
      FUN_1409b4488(local_178,&local_148,&local_160,CONCAT44(uVar23,fVar13));
      dVar15 = (double)FUN_144719204(local_178[0],0x4076800000000000);
    }
    else {
      dVar15 = (double)FUN_144719204(SUB84(local_148,0),0x4076800000000000);
      local_170 = SUB84(local_140,0);
    }
    dVar22 = (double)FUN_144719204(local_170,0x4076800000000000);
    dVar19 = sin(dVar15 * 0.017453292519943295);
    dVar15 = cos(dVar15 * 0.017453292519943295);
    dVar21 = sin(dVar22 * 0.017453292519943295);
    dVar22 = cos(dVar22 * 0.017453292519943295);
    dVar21 = dVar21 * dVar15;
    dVar22 = dVar22 * dVar15;
    fVar25 = local_1a8._0_4_;
    dVar15 = local_1b0;
  }
  dVar17 = dVar19 * dVar19 + dVar22 * dVar22 + dVar21 * dVar21;
  if (((dVar17 != 1.0) || (dVar4 = dVar22, dVar16 = dVar19, dVar20 = dVar21, NAN(dVar17))) &&
     (dVar4 = DAT_14c8464e0, dVar16 = DAT_14c8464f0, dVar20 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar17)) {
    dVar17 = 1.0 / SQRT(dVar17);
    dVar4 = dVar22 * dVar17;
    dVar16 = dVar19 * dVar17;
    dVar20 = dVar21 * dVar17;
  }
  local_138 = dVar16 * dVar15;
  local_140 = dVar20 * dVar15;
  local_148 = dVar15 * dVar4;
  *(float *)(param_1 + 2) = fVar13 + *(float *)(param_1 + 2);
  if ((*(byte *)(lVar9 + 0x5c) & 4) == 0) {
LAB_1407b6786:
    if ((bVar2 & 2) == 0) goto LAB_1407b683c;
    if (*param_1 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)param_1[1];
    }
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_148);
    fVar13 = *(float *)(lVar9 + 0x54);
    if ((0.0 < fVar13) && (fVar27 <= fVar13)) {
      if (*param_1 == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)param_1[1];
      }
      (**(code **)(*plVar10 + 0x70))(fVar13,0);
      goto LAB_1407b685c;
    }
  }
  else {
    fVar13 = (float)(_Y * dVar16 + _X * dVar4 + _Y_00 * dVar20);
    bVar8 = *(byte *)(param_1 + 9) & 0x20;
    if (0.0 <= fVar13 && bVar8 == 0) {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x20;
      bVar8 = 0x20;
    }
    if (((0.0 < fVar13) || (fVar25 != 1.0)) || ((NAN(fVar25) || (bVar8 == 0)))) goto LAB_1407b6786;
    if (*param_1 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)param_1[1];
    }
    (**(code **)(*plVar10 + 0x70))(fVar13,0);
LAB_1407b683c:
    if ((0.0 < *(float *)(lVar9 + 0x54)) && (fVar27 <= *(float *)(lVar9 + 0x54))) {
LAB_1407b685c:
      if (*param_1 == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)param_1[1];
      }
      (**(code **)(*plVar10 + 0x98))();
      if ((*param_1 == 0) || (param_1[1] == 0)) goto LAB_1407b689c;
    }
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfb;
  *(undefined4 *)(param_1 + 4) = local_110;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_10c;
  *(undefined4 *)(param_1 + 5) = uStack_108;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_104;
  param_1[6] = (longlong)local_100;
LAB_1407b689c:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b691e FUN_1407b691e body=407 status=ok
// SIG undefined FUN_1407b691e(void)

void FUN_1407b691e(uint *param_1,void *param_2,uint param_3,uint param_4,byte param_5)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0 [6];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(byte *)((longlong)param_1 + 0xbd) & 1) != 0) &&
     ((*(byte *)((longlong)param_2 + 0xad) & 1) != 0)) {
    uVar1 = param_1[5];
    local_78 = *(undefined8 *)(param_1 + 10);
    uStack_70 = *(undefined8 *)(param_1 + 0xc);
    local_88 = *(undefined8 *)(param_1 + 6);
    uStack_80 = *(undefined8 *)(param_1 + 8);
    local_a8 = *(undefined8 *)(param_1 + 0xe);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    local_98 = *(undefined8 *)(param_1 + 0x12);
    puVar3 = param_1 + 0x14;
    puVar4 = local_f0;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *(undefined8 *)puVar3;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 1;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x2a);
    local_108 = *(undefined8 *)(param_1 + 0x26);
    uStack_100 = *(undefined8 *)(param_1 + 0x28);
    memcpy(param_1 + 4,param_2,0x100);
    param_1[5] = uVar1;
    *(undefined8 *)(param_1 + 0x12) = local_98;
    *(undefined8 *)(param_1 + 0xe) = local_a8;
    *(undefined8 *)(param_1 + 0x10) = uStack_a0;
    *(undefined8 *)(param_1 + 0xc) = uStack_70;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(undefined8 *)(param_1 + 10) = local_78;
    *(undefined8 *)(param_1 + 0x24) = local_b0;
    *(undefined8 *)(param_1 + 0x20) = local_c0;
    *(undefined8 *)(param_1 + 0x22) = uStack_b8;
    param_1[0x26] = (uint)local_108;
    param_1[0x27] = local_108._4_4_;
    param_1[0x28] = (uint)uStack_100;
    param_1[0x29] = uStack_100._4_4_;
    *(undefined8 *)(param_1 + 0x2a) = local_f8;
    param_1[1] = param_3;
    param_1[2] = param_4;
    *param_1 = (*param_1 & 0xfffffff9) + (uint)param_5 * 2 + 4;
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b6ab6 FUN_1407b6ab6 body=1901 status=ok
// SIG undefined FUN_1407b6ab6(void)

void FUN_1407b6ab6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  void *pvVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined *puVar16;
  size_t _Size;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_208 [44];
  int local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  int local_180;
  undefined8 local_178;
  int local_170;
  undefined1 local_168;
  void *local_160;
  int local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  int local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  undefined1 local_118 [144];
  undefined1 local_88 [16];
  void *local_78;
  int local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  uVar13 = FUN_1448332aa(param_2,&DAT_14ad42464);
  local_1c0 = &local_1c8;
  local_1d8 = &PTR_FUN_149e37810;
  local_1c8 = &local_1d8;
  local_1d0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((int)uVar13 < 0x16) {
    bVar3 = *(byte *)(param_1 + 0x30);
    if (((bVar3 < 3) || ((0xe < (int)uVar13 && ((byte)(bVar3 - 0xb) < 2)))) ||
       ((bVar11 = 1, uVar13 == 0x15 && ((bVar3 < 0xb && ((0x620U >> (bVar3 & 0x1f) & 1) != 0)))))) {
LAB_1407b6b49:
      bVar11 = 0;
      goto LAB_1407b6b4b;
    }
  }
  else if (uVar13 < 0x1d) {
    bVar11 = FUN_1481deb72(param_1);
  }
  else {
    if ((*(char *)(param_1 + 0x30) != '\b') || (*(char *)(param_1 + 0x348) == '\0'))
    goto LAB_1407b6b49;
    if ((longlong)*(int *)(param_1 + 0x298) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x290);
      lVar22 = (longlong)*(int *)(param_1 + 0x298) * 0x48;
      do {
        if ((*(longlong *)(lVar17 + 0x10) != 0) &&
           ((plVar14 = (longlong *)FUN_1402d67b8(lVar17), plVar14 == (longlong *)0x0 ||
            (cVar10 = (**(code **)(*plVar14 + 0x330))(plVar14,1), cVar10 == '\0'))))
        goto LAB_1407b6b49;
        lVar17 = lVar17 + 0x48;
        lVar22 = lVar22 + -0x48;
      } while (lVar22 != 0);
    }
    bVar11 = 1;
  }
  if (bVar11 == 1 && (int)uVar13 < 0x2c) {
    iVar21 = *(int *)(param_1 + 0x298);
    if ((longlong)iVar21 == 0) {
      bVar11 = 1;
    }
    else {
      lVar17 = *(longlong *)(param_1 + 0x290);
      bVar11 = 1;
      lVar22 = 0;
      do {
        if (*(short *)(lVar17 + 0x18 + lVar22) == 1) {
          lVar20 = *(longlong *)(lVar17 + 0x10 + lVar22);
        }
        else {
          lVar20 = 0;
        }
        lVar15 = FUN_140a45cc8();
        if (lVar20 == lVar15) {
LAB_1407b700f:
          bVar11 = 0;
        }
        else {
          if (*(short *)(lVar17 + 0x18 + lVar22) == 1) {
            lVar20 = *(longlong *)(lVar17 + 0x10 + lVar22);
          }
          else {
            lVar20 = 0;
          }
          lVar15 = FUN_145a78ce0();
          if (lVar20 == lVar15) goto LAB_1407b700f;
        }
        lVar22 = lVar22 + 0x48;
      } while ((longlong)iVar21 * 0x48 != lVar22);
    }
  }
LAB_1407b6b4b:
  if ((((0xd < (int)uVar13 & (bVar11 ^ 1)) == 0) && (4 < (int)uVar13)) &&
     ((*(byte *)(param_2 + 5) & 1) != 0)) {
    local_1dc = 0;
    puVar5 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1dc,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_1dc);
      }
    }
    else {
      local_1dc = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar2;
    }
    if (0 < local_1dc) {
      iVar21 = 0;
      do {
        FUN_1407b792e(&local_1d8);
        FUN_1407b7aca(&local_1d8,param_2);
        if ((*(longlong *)(param_1 + 0x1c8) == 0) && (local_1c8 != (undefined ***)0x0)) {
          sVar12 = 0x9b;
          if (DAT_14ca80058 != DAT_14ca80084) {
            puVar6 = local_1c8[5][0xb];
            uVar13 = (uint)((ulonglong)puVar6 >> 0x10);
            uVar19 = (uint)puVar6 & 0xffff;
            puVar16 = DAT_14ca80090;
            if (DAT_14ca80090 == (undefined *)0x0) {
              puVar16 = &DAT_14ca80088;
            }
            iVar4 = *(int *)(puVar16 +
                            (ulonglong)
                            (DAT_14ca80098 - 1U &
                            (int)((ulonglong)puVar6 >> 0x20) + ((uint)puVar6 << 0x10 | uVar19) +
                            (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar19 >> 4)) * 4);
            while (iVar4 != -1) {
              plVar14 = (longlong *)(DAT_14ca80050 + (longlong)iVar4 * 0x14);
              if ((undefined *)*plVar14 == puVar6) {
                if ((plVar14 != (longlong *)0x0) && (plVar14 + 1 != (longlong *)0x0)) {
                  sVar12 = (short)plVar14[1];
                }
                break;
              }
              iVar4 = *(int *)((longlong)plVar14 + 0xc);
            }
          }
          if (DAT_14ca85550 == sVar12) {
            plVar14 = (longlong *)FUN_14001cc68(0x180,0x10);
            pppuVar7 = local_1c8;
            plVar14[1] = (longlong)&DAT_100000001;
            *plVar14 = (longlong)&PTR_FUN_14ae1de60;
            plVar14[2] = (longlong)&PTR_FUN_14ad49950;
            plVar14[3] = (longlong)local_1d0;
            plVar14[4] = (longlong)local_1c8;
            if (local_1c8 != (undefined ***)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
              *(int *)((longlong)pppuVar7 + 0x4c) = *(int *)((longlong)pppuVar7 + 0x4c) + 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
            }
            uVar8 = local_188;
            plVar14[5] = (longlong)local_1c0;
            plVar14[6] = local_1b8;
            plVar14[7] = local_1b0;
            if (local_1b0 != 0) {
              LOCK();
              *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
              UNLOCK();
            }
            plVar14[8] = local_1a8;
            plVar14[9] = local_1a0;
            if (local_1a0 != 0) {
              LOCK();
              *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
              UNLOCK();
            }
            *(undefined4 *)(plVar14 + 10) = local_198;
            *(undefined4 *)((longlong)plVar14 + 0x54) = uStack_194;
            *(undefined4 *)(plVar14 + 0xb) = uStack_190;
            *(undefined4 *)((longlong)plVar14 + 0x5c) = uStack_18c;
            plVar14[0xc] = 0;
            *(int *)(plVar14 + 0xd) = local_180;
            if (local_180 == 0) {
              *(undefined4 *)((longlong)plVar14 + 0x6c) = 0;
            }
            else {
              FUN_140b856de(plVar14 + 0xc,local_180,0);
              FUN_140b8566a(plVar14[0xc],uVar8);
            }
            uVar8 = local_178;
            plVar14[0xe] = 0;
            *(int *)(plVar14 + 0xf) = local_170;
            if (local_170 == 0) {
              *(undefined4 *)((longlong)plVar14 + 0x7c) = 0;
            }
            else {
              FUN_140b856de(plVar14 + 0xe,local_170,0);
              FUN_140b8566a(plVar14[0xe],uVar8);
            }
            pvVar9 = local_160;
            *(undefined1 *)(plVar14 + 0x10) = local_168;
            plVar14[0x11] = 0;
            _Size = (size_t)local_158;
            *(int *)(plVar14 + 0x12) = local_158;
            if (_Size == 0) {
              *(undefined4 *)((longlong)plVar14 + 0x94) = 0;
            }
            else {
              FUN_1447a127e(plVar14 + 0x11,local_158,0);
              memcpy((void *)plVar14[0x11],pvVar9,_Size);
            }
            uVar8 = local_140;
            *(undefined4 *)(plVar14 + 0x13) = local_150;
            *(undefined4 *)((longlong)plVar14 + 0x9c) = uStack_14c;
            *(undefined4 *)(plVar14 + 0x14) = uStack_148;
            *(undefined4 *)((longlong)plVar14 + 0xa4) = uStack_144;
            plVar14[0x15] = 0;
            *(int *)(plVar14 + 0x16) = local_138;
            if (local_138 == 0) {
              *(undefined4 *)((longlong)plVar14 + 0xb4) = 0;
            }
            else {
              FUN_148059508(plVar14 + 0x15,local_138,0);
              FUN_14805956a(plVar14[0x15],uVar8);
            }
            plVar14[0x19] = local_120;
            *(undefined4 *)(plVar14 + 0x17) = local_130;
            *(undefined4 *)((longlong)plVar14 + 0xbc) = uStack_12c;
            *(undefined4 *)(plVar14 + 0x18) = uStack_128;
            *(undefined4 *)((longlong)plVar14 + 0xc4) = uStack_124;
            FUN_1407b772c(plVar14 + 0x1a,local_118);
            FUN_1407b7224(plVar14 + 0x2c,local_88);
            pvVar9 = local_78;
            plVar14[0x2e] = 0;
            lVar17 = (longlong)local_70;
            *(int *)(plVar14 + 0x2f) = local_70;
            if (lVar17 == 0) {
              *(undefined4 *)((longlong)plVar14 + 0x17c) = 0;
            }
            else {
              FUN_1446dd670(plVar14 + 0x2e,local_70,0);
              memcpy((void *)plVar14[0x2e],pvVar9,lVar17 * 2);
            }
            if (plVar14 == (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x1c8) = 0x10;
              plVar18 = *(longlong **)(param_1 + 0x1d0);
              if (plVar18 != (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x1d0) = 0;
LAB_1407b716d:
                LOCK();
                plVar1 = plVar18 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
                if (plVar14 != (longlong *)0x0) goto LAB_1407b6eea;
              }
            }
            else {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              *(longlong **)(param_1 + 0x1c8) = plVar14 + 2;
              plVar18 = *(longlong **)(param_1 + 0x1d0);
              if (plVar14 == plVar18) {
                LOCK();
                plVar18 = plVar14 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              else {
                *(longlong **)(param_1 + 0x1d0) = plVar14;
                if (plVar18 != (longlong *)0x0) goto LAB_1407b716d;
              }
LAB_1407b6eea:
              LOCK();
              plVar18 = plVar14 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
          }
        }
        FUN_1407b72ae(&local_1d8);
        iVar21 = iVar21 + 1;
      } while (iVar21 < local_1dc);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b7224 FUN_1407b7224 body=137 status=ok
// SIG undefined FUN_1407b7224(void)

longlong * FUN_1407b7224(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140311f3e(&local_28);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b72ae FUN_1407b72ae body=405 status=ok
// SIG undefined FUN_1407b72ae(void)

void FUN_1407b72ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad49950;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0 && (param_1[0x27] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0 && (param_1[0x24] & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_1407b744e(param_1 + 0x1f);
  FUN_1407b744e(param_1 + 0x1d);
  FUN_1407b74c4(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[5];
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
  if (param_1[2] != 0) {
    FUN_1407b74f2();
    return;
  }
  return;
}



// FUNCTION 1407b7444 FUN_1407b7444 body=9 status=ok
// SIG undefined FUN_1407b7444(void)

void FUN_1407b7444(longlong param_1)

{
  FUN_1401b54e4(param_1 + 0x10);
  return;
}



// FUNCTION 1407b744e FUN_1407b744e body=64 status=ok
// SIG undefined FUN_1407b744e(void)

void FUN_1407b744e(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    uVar1 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  }
  FUN_1407b748e(uVar1,(int)param_1[1]);
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407b748e FUN_1407b748e body=54 status=ok
// SIG undefined FUN_1407b748e(void)

void FUN_1407b748e(ulonglong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0 && (*param_1 & 1) == 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1407b74c4 FUN_1407b74c4 body=45 status=ok
// SIG undefined FUN_1407b74c4(void)

void FUN_1407b74c4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1407b74f2 FUN_1407b74f2 body=570 status=ok
// SIG undefined FUN_1407b74f2(void)

ulonglong FUN_1407b74f2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      uVar4 = 0x9b;
      if (DAT_14ca80058 != DAT_14ca80084) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
        uVar5 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar10 = (uint)lVar8 & 0xffff;
        puVar11 = &DAT_14ca80088;
        if (DAT_14ca80090 != (undefined *)0x0) {
          puVar11 = DAT_14ca80090;
        }
        iVar3 = *(int *)(puVar11 +
                        (ulonglong)
                        (DAT_14ca80098 - 1U &
                        (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar10) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
        while (iVar3 != -1) {
          plVar2 = (longlong *)(DAT_14ca80050 + (longlong)iVar3 * 0x14);
          if (*plVar2 == lVar8) {
            if ((plVar2 != (longlong *)0x0) && ((ushort *)(plVar2 + 1) != (ushort *)0x0)) {
              uVar4 = (uint)*(ushort *)(plVar2 + 1);
            }
            break;
          }
          iVar3 = *(int *)((longlong)plVar2 + 0xc);
        }
      }
      FUN_148058fa6(&DAT_14cb2f7e0 + uVar4 * 0x50,*(longlong *)(param_1 + 0x28) + 0x60);
      *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe;
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
  uVar7 = extraout_RAX;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar4 = FUN_14493c560();
    if (uVar4 == 0) {
      uVar5 = 0;
      uVar9 = 0;
      lVar8 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar4 >> 0xe);
      uVar5 = uVar4 & 0x3fff;
      lVar8 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
    }
    *(longlong *)(lVar8 + 8) = param_1 + 0x40;
    do {
      uVar7 = DAT_14ca96680;
      uVar6 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
      if (uVar6 >> 0x1a < DAT_14ca96680 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      if (uVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar5 * 0x18);
      }
      *(uint *)(lVar8 + 0x10) = (uint)uVar7 & 0x3ffffff;
      LOCK();
      bVar12 = uVar7 != DAT_14ca96680;
      uVar6 = uVar6 | uVar4;
      if (bVar12) {
        uVar7 = DAT_14ca96680;
        uVar6 = DAT_14ca96680;
      }
      DAT_14ca96680 = uVar6;
      UNLOCK();
    } while (bVar12);
  }
  return uVar7;
}



// FUNCTION 1407b772c FUN_1407b772c body=325 status=ok
// SIG undefined FUN_1407b772c(void)

undefined4 * FUN_1407b772c(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *_Dst;
  ulonglong uVar12;
  void *_Src;
  
  param_1[8] = param_2[8];
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar11;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar3 = *(ulonglong *)(param_2 + 10);
  uVar12 = (longlong)param_2 + ((longlong)uVar3 >> 0x18) + 0x28;
  if ((uVar3 & 1) == 0) {
    uVar12 = uVar3;
  }
  FUN_1407b7872(param_1 + 10,uVar12,param_2[0xc],0);
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar3 = *(ulonglong *)(param_2 + 0xe);
  uVar12 = (longlong)param_2 + ((longlong)uVar3 >> 0x18) + 0x38;
  if ((uVar3 & 1) == 0) {
    uVar12 = uVar3;
  }
  FUN_1407b7872(param_1 + 0xe,uVar12,param_2[0x10],0);
  param_1[0x16] = param_2[0x16];
  uVar5 = param_2[0x13];
  uVar6 = param_2[0x14];
  uVar7 = param_2[0x15];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar2 = param_2[0x1a];
  pvVar4 = *(void **)(param_2 + 0x18);
  param_1[0x1a] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    puVar1 = (ulonglong *)(param_1 + 0x18);
    _Src = (void *)((longlong)param_2 + ((longlong)pvVar4 >> 0x18) + 0x60);
    if (((ulonglong)pvVar4 & 1) == 0) {
      _Src = pvVar4;
    }
    FUN_148058e12(puVar1,iVar2,0);
    pvVar4 = (void *)*puVar1;
    _Dst = (void *)(((longlong)pvVar4 >> 0x18) + (longlong)puVar1);
    if (((ulonglong)pvVar4 & 1) == 0) {
      _Dst = pvVar4;
    }
    memcpy(_Dst,_Src,(longlong)iVar2 * 0x14);
  }
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  uVar3 = *(ulonglong *)(param_2 + 0x1e);
  uVar12 = (longlong)param_2 + ((longlong)uVar3 >> 0x18) + 0x78;
  if ((uVar3 & 1) == 0) {
    uVar12 = uVar3;
  }
  FUN_1407b78d0(param_1 + 0x1e,uVar12,param_2[0x20],0);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  return param_1;
}



// FUNCTION 1407b7872 FUN_1407b7872 body=94 status=ok
// SIG undefined FUN_1407b7872(void)

void FUN_1407b7872(ulonglong *param_1,undefined8 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_148058ca6(param_1,param_3,param_4);
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_148058d08(uVar2,param_2,param_3);
  return;
}



// FUNCTION 1407b78d0 FUN_1407b78d0 body=94 status=ok
// SIG undefined FUN_1407b78d0(void)

void FUN_1407b78d0(ulonglong *param_1,undefined8 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_148058e86(param_1,param_3,param_4);
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_148058ee8(uVar2,param_2,param_3);
  return;
}



// FUNCTION 1407b792e FUN_1407b792e body=412 status=ok
// SIG undefined FUN_1407b792e(void)

undefined8 * FUN_1407b792e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14ad49950;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ad4f410;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  param_1[4] = plVar5 + 2;
  param_1[5] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    param_1[6] = 0x10;
    param_1[7] = 0;
  }
  else {
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
    lVar3 = param_1[5];
    param_1[6] = param_1[4];
    param_1[7] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar4 = DAT_14c760db4;
  *(undefined4 *)(param_1 + 0x15) = DAT_14c760db4;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x9b;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) & 0xf0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 1407b7aca FUN_1407b7aca body=1004 status=ok
// SIG undefined FUN_1407b7aca(void)

void FUN_1407b7aca(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [2];
  longlong *local_98;
  undefined1 local_90;
  undefined8 local_8c;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2[0xd] == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = *(longlong *)(param_2[0xd] + 0x10) != 0;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_a8[0] = (undefined **)CONCAT44(local_a8[0]._4_4_,(uint)bVar11);
    (**(code **)(*param_2 + 0x170))(param_2,local_a8,4);
    uVar9 = (uint)local_a8[0];
    if (1 < (uint)local_a8[0]) {
      FUN_14572541c(param_2);
      uVar9 = (uint)local_a8[0];
    }
  }
  else {
    uVar9 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xb4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_140077068(param_2,param_1 + 0x78);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(uint *)(param_1 + 0xb0) = (*(uint *)(param_1 + 0xb0) & 0xfffffffd) + (uint)(uVar9 != 0) * 2;
  }
  if (uVar9 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(int *)(param_1 + 0x168) == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0x160);
      }
      FUN_140033559(".\\../Plugins/FX/Niagara/Source/NiagaraShader/Private/NiagaraShared.cpp",0x147,
                    L"This platform requires cooked packages, and shaders were not cooked into this Niagara script %s."
                    ,puVar10);
    }
  }
  else if ((param_2[0xd] == 0) || (*(longlong *)(param_2[0xd] + 0x10) == 0)) {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_a8[0] = (undefined **)((ulonglong)local_a8[0] & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,local_a8,4);
      uVar9 = (uint)local_a8[0];
      if (1 < (uint)local_a8[0]) {
        FUN_14572541c(param_2);
        uVar9 = (uint)local_a8[0];
      }
    }
    else {
      uVar9 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar9 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      puVar6[7] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
      *puVar6 = &PTR_FUN_14ad48320;
      puVar6[8] = &PTR_FUN_14ad48350;
      puVar6[9] = 1;
      *(undefined1 *)(puVar6 + 10) = 0;
      *(uint *)((longlong)puVar6 + 0x54) = *(uint *)((longlong)puVar6 + 0x54) & 0xffffffe0 | 0x16;
      if (puVar6 != (undefined8 *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
        *(undefined4 *)((longlong)puVar6 + 0x4c) = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
      }
      local_a8[0] = &PTR_FUN_14a388320;
      local_8c = 0;
      local_78 = 0;
      local_68 = (longlong *)0x0;
      local_90 = 1;
      local_98 = param_2;
      cVar5 = FUN_1407b7eb8(puVar6);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
      {
        uVar7 = FUN_14118da1c();
        DAT_14c8442b8 = FUN_14054d46e(uVar7,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
      if ((((DAT_14c872bf0 != '\x01') || (DAT_14c872bf1 == '\x01')) && (cVar5 != '\0')) &&
         (DAT_14c8442b8 == '\0')) {
        *(undefined8 **)(param_1 + 0x18) = puVar6;
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        if (puVar4 != puVar6) {
          *(undefined8 **)(param_1 + 0x10) = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
            *(int *)((longlong)puVar6 + 0x4c) = *(int *)((longlong)puVar6 + 0x4c) + 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_1407b74f2(puVar4);
          }
        }
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_144a79778();
        }
        FUN_1407b888c(param_1,1);
      }
      local_a8[0] = &PTR_FUN_14a388320;
      if (local_78 != 0) {
        plVar8 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar8 = local_58;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1407b74f2(puVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b7eb8 FUN_1407b7eb8 body=2515 status=ok
// SIG undefined FUN_1407b7eb8(void)

bool FUN_1407b7eb8(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  uint uVar19;
  undefined *puVar20;
  undefined8 unaff_RBP;
  ulonglong uVar21;
  uint uVar22;
  PSRWLOCK SRWLock;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  int local_150;
  undefined8 local_144;
  int local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined1 *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined4 local_100;
  undefined1 local_fc [8];
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0 [3];
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong lStack_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar18 = *(longlong **)(param_2 + 0x10);
  if ((*(byte *)(plVar18 + 5) & 4) != 0) {
    puVar17 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    local_a0[0] = 0xffffffff;
    local_a0[1] = 0;
    lStack_a8 = 0x500000008;
    local_b0 = param_1[3];
    uStack_b8 = puVar17;
    FUN_1468263f2(local_a0,plVar18);
    local_a0[2] = FUN_146827aca(&local_c8);
    lVar12 = param_1[4];
    (**(code **)(lVar12 + 0x20))(local_a0 + 2,param_1[5],lVar12,lVar12);
    local_108 = (longlong *)0x0;
    local_118 = (undefined1 *)0x0;
    uStack_110 = 0;
    local_100 = 0xffffffff;
    local_fc = (undefined1  [8])0x0;
    uStack_f4 = 0;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    FUN_146826f00(&local_c8,&local_118,1);
    FUN_146827336(&local_118,plVar18);
    FUN_1468272e8(&local_118);
    FUN_146828fdc(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar17 != (undefined8 *)0x0) {
      (**(code **)*puVar17)(puVar17,1);
    }
    puVar4 = (ulonglong *)plVar18[1];
    if (puVar4[1] < *puVar4 + 4) {
      local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffff00000000);
      (**(code **)(*plVar18 + 0x170))(plVar18,&local_118,4);
      if (1 < (uint)local_118) {
        FUN_14572541c(plVar18);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
    FUN_147442168(param_1[2],param_2);
    goto LAB_1407b855b;
  }
  lVar12 = (**(code **)(*param_1 + 0x20))(param_1);
  param_1[3] = lVar12;
  local_144 = 0xffffffff;
  uVar13 = (**(code **)(*param_1 + 0x18))(param_1);
  local_178 = &local_144;
  FUN_1427905ac(&local_160,plVar18,uVar13,lVar12);
  uVar11 = FUN_14178fc5a(&local_144);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar11;
  puVar4 = (ulonglong *)plVar18[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffff00000000);
    (**(code **)(*plVar18 + 0x170))(plVar18,&local_118,4);
    uVar22 = (uint)local_118;
    if (1 < (uint)local_118) {
      FUN_14572541c(plVar18);
      uVar22 = (uint)local_118;
    }
  }
  else {
    uVar22 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  local_168 = 0;
  (**(code **)(*plVar18 + 0x160))(plVar18);
  uVar21 = CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),0x9b);
  if (DAT_14ca80058 != DAT_14ca80084) {
    uVar6 = (uint)((ulonglong)local_168 >> 0x10);
    uVar19 = (uint)local_168 & 0xffff;
    puVar20 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar20 = DAT_14ca80090;
    }
    iVar3 = *(int *)(puVar20 +
                    (ulonglong)
                    (DAT_14ca80098 - 1U &
                    (int)((ulonglong)local_168 >> 0x20) + ((uint)local_168 << 0x10 | uVar19) +
                    (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) * 4);
    while (iVar3 != -1) {
      plVar14 = (longlong *)(DAT_14ca80050 + (longlong)iVar3 * 0x14);
      if (*plVar14 == local_168) {
        if ((plVar14 != (longlong *)0x0) && ((ushort *)(plVar14 + 1) != (ushort *)0x0)) {
          uVar21 = (ulonglong)*(ushort *)(plVar14 + 1);
        }
        break;
      }
      iVar3 = *(int *)((longlong)plVar14 + 0xc);
    }
  }
  if (uVar22 == 0) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    *puVar15 = &PTR_FUN_149e002e8;
    *(undefined4 *)(puVar15 + 1) = 0;
    *puVar15 = &PTR_FUN_14a395bd0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    *(undefined4 *)(puVar15 + 4) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar17 = (undefined8 *)param_1[2];
    if (puVar17 != puVar15) {
      param_1[2] = (longlong)puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
      }
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar17 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    FUN_147442168(param_1[2],param_2);
    puVar17 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    lVar12 = param_1[2];
    FUN_1406f6720(puVar17,uVar21 & 0xffffffff,*(undefined4 *)(lVar12 + 0x50));
    *puVar17 = &PTR_FUN_14a395780;
    puVar17[2] = &PTR_LAB_14a395800;
    puVar17[0xd] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    puVar15 = (undefined8 *)param_1[1];
    if (puVar15 != puVar17) {
      param_1[1] = (longlong)puVar17;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar17 + 0xc) = *(int *)(puVar17 + 0xc) + 1;
        UNLOCK();
      }
      if (puVar15 != (undefined8 *)0x0) {
        FUN_140021284();
      }
    }
  }
  else {
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    pcVar16 = *(code **)(*plVar18 + 0x170);
    if (pcVar16 == FUN_14473a572) {
      plVar14 = (longlong *)plVar18[0x12];
      pcVar16 = *(code **)(*plVar14 + 0x170);
      if (pcVar16 == FUN_14004e24c) {
        FUN_14004e24c(plVar14,&local_138,0x14);
      }
      else if (pcVar16 == FUN_1447395b8) {
        lVar12 = plVar14[0x13];
        local_128 = *(undefined4 *)(plVar14[0x12] + 0x10 + lVar12);
        puVar17 = (undefined8 *)(plVar14[0x12] + lVar12);
        local_138 = *puVar17;
        uStack_130 = puVar17[1];
        plVar14[0x13] = lVar12 + 0x14;
      }
      else {
        if (pcVar16 != FUN_144a6950e) goto LAB_1407b83e8;
        if ((*(byte *)((longlong)plVar14 + 0x29) & 2) == 0) {
          puVar17 = *(undefined8 **)plVar14[1];
          local_128 = *(undefined4 *)(puVar17 + 2);
          local_138 = *puVar17;
          uStack_130 = puVar17[1];
          plVar14 = (longlong *)plVar14[1];
          goto LAB_1407b817a;
        }
      }
    }
    else if (pcVar16 == FUN_140090aac) {
      FUN_140090aac(plVar18,&local_138,0x14);
    }
    else {
      plVar14 = plVar18;
      if (pcVar16 == FUN_144a6950e) {
        if ((*(byte *)((longlong)plVar18 + 0x29) & 2) == 0) {
          plVar14 = (longlong *)plVar18[1];
          puVar17 = (undefined8 *)*plVar14;
          local_128 = *(undefined4 *)(puVar17 + 2);
          local_138 = *puVar17;
          uStack_130 = puVar17[1];
LAB_1407b817a:
          *plVar14 = *plVar14 + 0x14;
        }
      }
      else {
LAB_1407b83e8:
        (*pcVar16)(plVar14,&local_138,0x14);
      }
    }
    if (DAT_14ca9a668 == 0) {
LAB_1407b8469:
      lVar12 = 0;
    }
    else {
      FUN_1406af748(&DAT_14ca9a628,&local_138,plVar18);
      local_13c = -1;
      puVar17 = (undefined8 *)FUN_14061d268(DAT_14ca9a668,&local_138);
      iVar3 = local_13c;
      if (puVar17 == (undefined8 *)0x0) goto LAB_1407b8469;
      lVar12 = (longlong)local_13c;
      SRWLock = (PSRWLOCK)(puVar17 + 0x163);
      AcquireSRWLockShared(SRWLock);
      lVar12 = *(longlong *)(puVar17[0x141] + lVar12 * 8);
      if (lVar12 == 0) {
        ReleaseSRWLockShared(SRWLock);
        lVar12 = FUN_14001cc68(0x78,0x10);
        FUN_1406f65ea(lVar12,puVar17,iVar3);
        iVar3 = *(int *)(lVar12 + 0x70);
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 1;
          UNLOCK();
        }
        AcquireSRWLockExclusive(SRWLock);
        lVar5 = *(longlong *)(puVar17[0x141] + (longlong)iVar3 * 8);
        if (lVar5 == 0) {
          *(longlong *)(puVar17[0x141] + (longlong)iVar3 * 8) = lVar12;
          cVar8 = DAT_14ca84e34;
          iVar7 = DAT_14c760e5c;
          ReleaseSRWLockExclusive(SRWLock);
          if ((cVar8 == '\0') && (iVar7 != 0)) {
            local_70 = (longlong *)0x0;
            local_68 = 0x400000000;
            uVar10 = (**(code **)(*(longlong *)*puVar17 + 0x70))
                               ((longlong *)*puVar17,iVar3,local_a0 + 2);
            plVar14 = local_70;
            *(undefined1 *)(lVar12 + 0x74) = uVar10;
            iVar3 = (int)local_68;
            if (0 < (int)local_68 && plVar18 != (longlong *)0x0) {
              local_a0[0] = 0;
              if (local_70 == (longlong *)0x0) {
                local_b0 = local_80;
                lStack_a8 = lStack_78;
                uStack_c0 = local_a0[2];
                uStack_b8 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
              }
              local_70 = (longlong *)0x0;
              uVar11 = local_68._4_4_;
              local_68 = 0x400000000;
              local_118 = (undefined1 *)0x0;
              local_c8 = puVar17;
              local_108 = (longlong *)FUN_14001cc68(0x40,8);
              *local_108 = (longlong)&PTR_FUN_14a395460;
              local_108[1] = (longlong)puVar17;
              if (plVar14 == (longlong *)0x0) {
                local_108[4] = local_b0;
                local_108[5] = lStack_a8;
                *(undefined4 *)(local_108 + 2) = (undefined4)uStack_c0;
                *(undefined4 *)((longlong)local_108 + 0x14) = uStack_c0._4_4_;
                *(undefined4 *)(local_108 + 3) = (undefined4)uStack_b8;
                *(undefined4 *)((longlong)local_108 + 0x1c) = uStack_b8._4_4_;
              }
              local_108[6] = (longlong)plVar14;
              local_a0[0] = 0;
              *(int *)(local_108 + 7) = iVar3;
              *(undefined4 *)((longlong)local_108 + 0x3c) = uVar11;
              local_a0[1] = 0x400000000;
              if (local_108 != (longlong *)&DAT_fffffffffffffff8) {
                local_118 = &LAB_14743e660;
              }
              FUN_144717c65(&uStack_c0,0);
              if (local_a0[0] != 0) {
                FUN_1400020a8();
              }
              (**(code **)(*plVar18 + 0x238))(plVar18,&local_118);
              if (local_118 != (undefined1 *)0x0) {
                plVar18 = local_108;
                if (local_108 == (longlong *)0x0) {
                  plVar18 = (longlong *)(local_fc + 4);
                }
                (**(code **)(*plVar18 + 0x10))();
              }
            }
            plVar18 = local_a0 + 2;
            if (local_70 != (longlong *)0x0) {
              plVar18 = local_70;
            }
            FUN_144717c65(plVar18,(int)local_68);
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          lVar9 = lVar12;
          if (lVar5 != lVar12) {
            LOCK();
            *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
            UNLOCK();
            lVar9 = lVar5;
            if (lVar12 != 0) {
              FUN_140021284(lVar12);
            }
          }
          lVar12 = lVar9;
          ReleaseSRWLockExclusive(SRWLock);
        }
      }
      else {
        LOCK();
        *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 1;
        UNLOCK();
        ReleaseSRWLockShared(SRWLock);
      }
    }
    lVar5 = param_1[1];
    param_1[1] = lVar12;
    if (lVar5 != 0) {
      FUN_140021284();
      lVar12 = param_1[1];
    }
    if (((lVar12 == 0) &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc)) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
  }
  iVar3 = local_150;
  lVar12 = local_158;
  if (local_158 != 0) {
    if (param_1[1] != 0) {
      param_1[4] = local_160;
      param_1[5] = local_158;
      *(int *)(param_1 + 6) = local_150;
      if (local_150 == 0) {
        FUN_14743d44e(param_1 + 4,param_1[3]);
      }
      (**(code **)(*param_1 + 0x28))(param_1);
      uVar11 = FUN_144b1d062(param_1[5]);
      *(undefined4 *)(param_1 + 7) = uVar11;
      FUN_140308182(param_1[1],0);
      goto LAB_1407b855b;
    }
    if (*(code **)(local_160 + 0x18) != (code *)0x0) {
      (**(code **)(local_160 + 0x18))(local_158,local_160,param_1[3],local_150 != 0);
    }
    if (iVar3 == 0) {
      thunk_FUN_1400020a8(lVar12);
    }
    if (local_150 != 0) {
      FUN_1400020a8(local_158);
    }
    local_158 = 0;
    local_150 = 0;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
    FUN_140021284();
  }
LAB_1407b855b:
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1[5] != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b888c FUN_1407b888c body=2691 status=ok
// SIG undefined FUN_1407b888c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b888c(ulonglong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  ulonglong *puVar7;
  byte bVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  ulonglong uVar20;
  undefined *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  wchar_t *local_110;
  undefined4 local_108;
  undefined4 local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  char local_a9;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [8];
  undefined8 *local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar33 = (ulonglong)*(uint *)(param_1 + 0xb4);
  lVar24 = *(longlong *)(param_1 + 0x10);
  uVar32 = 0;
  local_a9 = param_2;
  local_a8 = param_1;
  if ((((lVar24 != 0) && ((~*(uint *)(lVar24 + 0x54) & 6) == 0)) &&
      (*(char *)(lVar24 + 0x50) == '\0')) && (uVar32 = 1, 0 < (int)*(uint *)(param_1 + 0xb4))) {
    uVar25 = 0;
    local_a0 = uVar33;
    do {
      uVar33 = local_a0;
      lVar24 = *(longlong *)(local_a8 + 0x10);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb2f758) && (FUN_144b3d300(&DAT_14cb2f758), DAT_14cb2f758 == -1))
      {
        FUN_146087666();
        local_d0 = &LAB_14712ac08;
        local_d8 = &LAB_14712ac0c;
        local_e0 = &LAB_14804db00;
        local_e8 = &LAB_14804db04;
        local_f0 = FUN_14804db08;
        local_f8 = FUN_14804db30;
        local_110 = L"SimulateMain";
        local_118 = (undefined1 **)0x14ad47f90;
        local_c0 = 0;
        local_c8 = 0xf8;
        local_100 = 1;
        local_108 = 5;
        FUN_140db5666(&DAT_14cb2f6b0,3,&DAT_14cb2f648,L"FNiagaraShader");
        _DAT_14cb2f6b0 = &PTR_FUN_14ad4b7e0;
        atexit((_func_5014 *)&LAB_1438fa290);
        _Init_thread_footer(&DAT_14cb2f758);
      }
      puVar7 = *(ulonglong **)(lVar24 + 0x28);
      uVar20 = puVar7[3];
      if ((uVar20 & 1) != 0) {
        uVar20 = (longlong)puVar7 + ((longlong)uVar20 >> 0x18) + 0x18;
      }
      uVar28 = puVar7[5];
      if ((uVar28 & 1) != 0) {
        uVar28 = (longlong)puVar7 + ((longlong)uVar28 >> 0x18) + 0x28;
      }
      uVar29 = puVar7[1];
      if ((uVar29 & 1) != 0) {
        uVar29 = (longlong)puVar7 + ((longlong)uVar29 >> 0x18) + 8;
      }
      uVar31 = *puVar7;
      if ((uVar31 & 1) != 0) {
        uVar31 = ((longlong)uVar31 >> 0x18) + (longlong)puVar7;
      }
      uVar23 = (DAT_14cb2f6d8 ^ uVar25) * -0x622015f714c7d297;
      lVar24 = (uVar23 >> 0x2f ^ uVar25 ^ uVar23) * -0x622015f714c7d297;
      uVar30 = *(uint *)(uVar31 + (ulonglong)
                                  ((uint)puVar7[2] &
                                   ((uint)((ulonglong)lVar24 >> 0x2f) ^ (uint)lVar24) * 0x2d69 &
                                  0xffff) * 4);
      if (uVar30 == 0xffffffff) {
LAB_1407b8e13:
        uVar32 = uVar32 & 0xfffffffe;
        break;
      }
      while ((uVar31 = (ulonglong)uVar30, *(ulonglong *)(uVar20 + uVar31 * 8) != DAT_14cb2f6d8 ||
             (uVar25 != *(uint *)(uVar28 + uVar31 * 4)))) {
        uVar30 = *(uint *)(uVar29 + uVar31 * 4);
        if (uVar30 == 0xffffffff) goto LAB_1407b8e13;
      }
      uVar20 = puVar7[7];
      if ((uVar20 & 1) != 0) {
        uVar20 = (longlong)(puVar7 + 7) + ((longlong)uVar20 >> 0x18);
      }
      uVar28 = *(ulonglong *)(uVar20 + (longlong)(int)uVar30 * 8);
      if ((uVar28 & 1) != 0) {
        uVar28 = ((longlong)uVar28 >> 0x18) + uVar20 + (longlong)(int)uVar30 * 8;
      }
      if (uVar28 == 0) goto LAB_1407b8e13;
      sVar5 = *(short *)(uVar28 + 0xe4);
      sVar6 = *(short *)(uVar28 + 0xe6);
      sVar10 = 0x9b;
      if (DAT_14ca80058 != DAT_14ca80084) {
        lVar24 = *(longlong *)(*(longlong *)(*(longlong *)(local_a8 + 0x10) + 0x28) + 0x58);
        uVar30 = (uint)((ulonglong)lVar24 >> 0x10);
        uVar27 = (uint)lVar24 & 0xffff;
        puVar21 = DAT_14ca80090;
        if (DAT_14ca80090 == (undefined *)0x0) {
          puVar21 = &DAT_14ca80088;
        }
        iVar11 = *(int *)(puVar21 +
                         (ulonglong)
                         (DAT_14ca80098 - 1U &
                         (int)((ulonglong)lVar24 >> 0x20) + ((uint)lVar24 << 0x10 | uVar27) +
                         (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar27 >> 4)) * 4);
        while (iVar11 != -1) {
          plVar3 = (longlong *)(DAT_14ca80050 + (longlong)iVar11 * 0x14);
          if (*plVar3 == lVar24) {
            if ((plVar3 != (longlong *)0x0) && (plVar3 + 1 != (longlong *)0x0)) {
              sVar10 = (short)plVar3[1];
            }
            break;
          }
          iVar11 = *(int *)((longlong)plVar3 + 0xc);
        }
      }
      bVar4 = *(byte *)(uVar28 + 0xe0);
      if (DAT_14ca85550 == sVar10) {
        cVar9 = FUN_1406917e6();
        if (cVar9 == '\0') {
          cVar9 = FUN_140c62276();
          if (cVar9 == '\0') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
            {
              uVar15 = FUN_14118da1c();
              DAT_14c8442b8 = FUN_14054d46e(uVar15,L"nullrhi");
              _Init_thread_footer(&DAT_14c8442bc);
            }
            bVar8 = DAT_14c8442b8;
            if (DAT_14c872bf0 == '\x01') {
              if (DAT_14c872bf1 != '\x01') goto LAB_1407b8c80;
              bVar8 = DAT_14c8442b8 & 1;
            }
            if ((bVar8 != 0) ||
               ((((DAT_14c760d84 == 0 || ((DAT_14ca84f5a & 1) == 0)) &&
                 (cVar9 = FUN_1406917e6(), cVar9 == '\0')) || (DAT_14c76194c == 0))))
            goto LAB_1407b8c80;
          }
          lVar24 = *(longlong *)(*(longlong *)(local_a8 + 0x10) + 8);
          lVar14 = *(longlong *)
                    (*(longlong *)(lVar24 + 0x50) + (longlong)*(int *)(uVar28 + 0xd4) * 8);
          if (lVar14 == 0) {
            lVar14 = FUN_1400bafc2(lVar24,(longlong)*(int *)(uVar28 + 0xd4),1);
          }
          local_118 = (undefined1 **)((ulonglong)local_118 & 0xffffffffffffff00);
          FUN_14053ef1e(DAT_14ca811d0,local_98,lVar14,L"NiagaraCompute");
          if (local_90 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_90 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_90)(local_90,1);
            }
          }
        }
        else {
          local_68 = (undefined1 **)0x0;
          local_60 = 0x400000000;
          plVar3 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + 8);
          (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(uVar28 + 0xd4),local_88);
          ppuVar18 = local_68;
          if (local_68 == (undefined1 **)0x0) {
            ppuVar18 = local_88;
          }
          FUN_144717c65(ppuVar18,local_60 & 0xffffffff);
          if (local_68 != (undefined1 **)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_1407b8c80:
      uVar32 = uVar32 | (uint)(sVar6 != -1) * 4 + (uint)(sVar5 != -1) * 2 + (uint)bVar4 * 8;
      uVar25 = uVar25 + 1;
      uVar33 = local_a0;
    } while (uVar25 != local_a0);
  }
  if (local_a9 != '\0') {
    uVar33 = (ulonglong)uVar32 << 0x20 | uVar33;
    goto LAB_1407b8e28;
  }
  if ((*(byte *)(local_a8 + 0xb0) & 4) != 0) goto LAB_1407b8f2c;
  uVar33 = (ulonglong)uVar32 << 0x20 | uVar33;
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar24 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 != 1) goto LAB_1407b8e7e;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_1407b8e28;
      goto LAB_1407b8e83;
    }
  }
  else {
LAB_1407b8e7e:
    if (iVar11 != 0x10) {
LAB_1407b8e83:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar24 + 0xc60), iVar11 == 2))
        goto LAB_1407b8e28;
        if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          if (DVar12 == DVar13) goto LAB_1407b8e28;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar17 = (uint *)*puVar2;
        if (puVar17 != (uint *)0x0) goto LAB_1407b8ffa;
        while( true ) {
          uVar32 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar32 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar32 | 1;
            __tlregdtor(&LAB_1438fbf1b);
          }
          lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar24 + 0x310);
          *(undefined8 *)(lVar24 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          FUN_140217a48(puVar2);
          puVar17 = (uint *)*puVar2;
LAB_1407b8ffa:
          puVar26 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar26 + 0x17);
          uVar32 = puVar17[0x12];
          if (puVar22 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar30 = *puVar17;
            *puVar17 = *puVar17 + uVar32 + 1;
            UNLOCK();
            if ((uVar30 ^ uVar32) != 0xffffffff) break;
            puVar17 = (uint *)*puVar2;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            puVar26 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
            puVar22 = (uint *)(puVar26 + 0x17);
            uVar32 = 0;
            if (puVar22 <= puVar17 + 0x4000) {
              uVar32 = 1;
              goto LAB_1407b907a;
            }
          }
        }
        uVar32 = uVar32 + 1;
LAB_1407b907a:
        *(uint **)(puVar17 + 0x10) = puVar22;
        puVar17[0x12] = uVar32;
        iVar11 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14ad4f4d8;
        puVar26[0x15] = local_a8;
        puVar26[0x16] = uVar33;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar32 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar32 < 2) {
            uVar33 = (ulonglong)(byte)(&DAT_149e38edc)[uVar32];
            iVar11 = 0;
          }
          else {
            uVar33 = 2;
          }
        }
        else {
          iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar33 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar24 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar24 == 0) {
          uVar25 = 1;
          if ((char)uVar33 != '\x06') {
            uVar25 = uVar33;
          }
          uVar33 = uVar25;
          uVar15 = 0;
        }
        else {
          if ((char)uVar33 == '\x06') {
            uVar33 = *(ulonglong *)(lVar24 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar24 + 0x30);
        }
        puVar26[0xf] = uVar15;
        puVar26[0x10] = uVar33 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar11;
        if (puVar26 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_118 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14ad4f490;
        local_60 = local_a8;
        local_88[0] = &LAB_1438fc248;
        local_58 = uVar33;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateCachedData",&DAT_14cb35848);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar19 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar19 = &local_68;
          }
          (*(code *)(*pppuVar19)[2])();
        }
      }
      goto LAB_1407b8f2c;
    }
  }
LAB_1407b8e28:
  *(ulonglong *)(local_a8 + 0xb8) = uVar33;
LAB_1407b8f2c:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b9310 FUN_1407b9310 body=561 status=ok
// SIG undefined FUN_1407b9310(void)

void FUN_1407b9310(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = (**(code **)(*param_1 + 0x600))();
  if ((cVar5 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_1407b93ba;
  lVar6 = param_1[0x103];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(param_1[0x3d] + 0x30))(param_1 + 0x3d);
    param_1[0x103] = lVar6;
  }
  cVar5 = FUN_1407b9542(param_1,*(undefined4 *)(param_2 + 0xc),lVar6,&local_41);
  if (cVar5 != '\0') {
    if (*(int *)(param_2 + 0x78) < 1) {
      plVar7 = param_1 + 0x828;
      if ((longlong *)param_1[0x82a] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x82a];
      }
      if ((longlong)(int)param_1[0x82b] != 0) {
        plVar1 = param_1 + 0x827;
        lVar6 = 0;
        do {
          if (*(longlong *)((longlong)plVar7 + lVar6) == DAT_14cb760d8) {
            if (((char)*plVar1 == '\x01') &&
               (FUN_1400bc8c2(plVar1,&DAT_14cb760d8), (char)*plVar1 == '\0')) {
              *(undefined4 *)((longlong)param_1 + 0x4164) = 0;
              *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 4;
            }
            break;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)param_1[0x82b] * 8 != lVar6);
      }
    }
    else if (*(char *)(param_2 + 0x98) != '\0') {
      plVar7 = param_1 + 0x828;
      if ((longlong *)param_1[0x82a] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x82a];
      }
      if ((longlong)(int)param_1[0x82b] != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)((longlong)plVar7 + lVar6) == DAT_14cb760d8) goto LAB_1407b9395;
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)param_1[0x82b] * 8 != lVar6);
      }
      FUN_1407b9c72(param_1,&DAT_14cb760d8);
    }
LAB_1407b9395:
    if (*(char *)(param_2 + 0x72) != '\0') {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_1407b939f;
        plVar7 = param_1 + 0x642;
      }
      else {
        plVar7 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      FUN_1407b9d1e(&local_40,*(undefined4 *)(param_2 + 0x74));
      plVar7[0x4c] = local_30;
      plVar7[0x4a] = local_40;
      plVar7[0x4b] = lStack_38;
      uVar2 = *(undefined4 *)(param_2 + 0x14);
      uVar3 = *(undefined4 *)(param_2 + 0x18);
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(plVar7 + 0x4d) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)((longlong)plVar7 + 0x26c) = uVar2;
      *(undefined4 *)(plVar7 + 0x4e) = uVar3;
      *(undefined4 *)((longlong)plVar7 + 0x274) = uVar4;
      plVar7[0x4f] = *(longlong *)(param_2 + 0x20);
    }
LAB_1407b939f:
    (**(code **)(*param_1 + 0xce8))(param_1,*(undefined2 *)(param_2 + 0x70));
  }
  FUN_1407b9618(param_1,param_2);
LAB_1407b93ba:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407b9542 FUN_1407b9542 body=213 status=ok
// SIG undefined FUN_1407b9542(void)

bool FUN_1407b9542(longlong param_1,float param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  if (0.0 < param_2) {
    iVar1 = _finite((double)param_2);
    if (iVar1 != 0) {
      fVar5 = param_2 - *(float *)(param_3 + 0x98);
      if (*(float *)(param_1 + 0x828) * 0.5 < ABS(fVar5)) {
        *param_4 = 1;
        if (fVar5 < 0.0) {
          lVar2 = *(longlong *)(param_1 + 0xb0);
          if (lVar2 == 0) {
            lVar2 = FUN_1448abda6(param_1);
          }
          dVar7 = *(double *)(lVar2 + 0x6d0) - (double)*(float *)(param_1 + 0x82c);
          dVar6 = (double)(*(float *)(param_1 + 0x828) * 0.5);
          bVar4 = dVar6 == dVar7;
          bVar3 = dVar6 < dVar7;
          goto LAB_1407b95b1;
        }
      }
      else if (*(float *)(param_3 + 0x98) < param_2) {
        bVar4 = fVar5 == 1e-06;
        bVar3 = 1e-06 < fVar5;
LAB_1407b95b1:
        return bVar3 || bVar4;
      }
    }
  }
  return false;
}



// FUNCTION 1407b9618 FUN_1407b9618 body=1625 status=ok
// SIG undefined FUN_1407b9618(void)

void FUN_1407b9618(longlong *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_d58 [32];
  undefined4 *local_d38;
  undefined4 local_d30;
  undefined4 uStack_d2c;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  undefined8 local_d20;
  wchar_t *local_d18;
  code *local_d10;
  undefined1 *local_d08;
  code **local_d00;
  code *local_cf8;
  code *local_cf0;
  undefined4 local_ce8;
  undefined4 uStack_ce4;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined8 local_cd8;
  undefined4 local_cc8;
  undefined4 uStack_cc4;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  undefined8 local_cb8;
  longlong local_ca8 [125];
  longlong local_8c0;
  longlong local_6b0;
  byte local_6a0;
  code *local_698 [125];
  longlong local_2b0;
  longlong local_a0;
  byte local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d58;
  cVar6 = (**(code **)(*param_1 + 0x600))();
  if ((cVar6 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_1407b9a76;
  fVar1 = *(float *)(param_2 + 0xc);
  local_cb8 = *(undefined8 *)(param_2 + 0x20);
  local_cc8 = *(undefined4 *)(param_2 + 0x10);
  uStack_cc4 = *(undefined4 *)(param_2 + 0x14);
  uStack_cc0 = *(undefined4 *)(param_2 + 0x18);
  uStack_cbc = *(undefined4 *)(param_2 + 0x1c);
  if ((DAT_14c7613d8 != 0) &&
     ((lVar7 = *(longlong *)(param_2 + 0x60), lVar7 != 0 && (*(char *)(lVar7 + 0x1fb) == '\x02'))))
  {
    FUN_14341f956(lVar7,*(undefined8 *)(param_2 + 0x68),param_2 + 0x10,&local_cc8);
  }
  uVar3 = *(undefined1 *)(param_2 + 0x58);
  local_cd8 = *(undefined8 *)(param_2 + 0x50);
  local_ce8 = *(undefined4 *)(param_2 + 0x40);
  uStack_ce4 = *(undefined4 *)(param_2 + 0x44);
  uStack_ce0 = *(undefined4 *)(param_2 + 0x48);
  uStack_cdc = *(undefined4 *)(param_2 + 0x4c);
  lVar7 = param_1[0x103];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(param_1[0x3d] + 0x30))(param_1 + 0x3d);
    param_1[0x103] = lVar7;
  }
  cVar6 = (**(code **)(*param_1 + 0xa80))(param_1,fVar1,lVar7);
  if (cVar6 == '\0') goto LAB_1407b9a76;
  plVar11 = *(longlong **)(param_1[0x3e] + 0x3c0);
  bVar4 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_1407b9765:
    plVar11 = (longlong *)0x0;
    bVar5 = true;
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_d00 = local_698;
      local_698[0] = FUN_141030f22;
      local_cf0 = FUN_14081d0ea;
      local_cf8 = (code *)&LAB_1463c0cc2;
      local_d08 = &LAB_147c9db5b;
      local_d10 = (code *)&LAB_1463f9c44;
      local_d18 = L"Game";
      local_d20 = 0x2000000000;
      uStack_d28 = 0x10000004;
      local_d30 = 8;
      local_d38 = (undefined4 *)CONCAT44(local_d38._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
        DAT_14caf9cd0 + 0x30)) goto LAB_1407b9765;
    cVar6 = (**(code **)(*plVar11 + 0xe20))(plVar11,param_1[0x3e],fVar1);
    if (cVar6 == '\0') {
      local_cb8 = DAT_14c8464f0;
      local_cc8 = (undefined4)DAT_14c8464e0;
      uStack_cc4 = DAT_14c8464e0._4_4_;
      uStack_cc0 = (undefined4)DAT_14c8464e8;
      uStack_cbc = DAT_14c8464e8._4_4_;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      bVar5 = false;
    }
  }
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
      lVar8 = FUN_1447210f0();
      if (lVar8 != 0) goto LAB_1407b97a3;
    }
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      if (DAT_14cb10130 == 0) {
        local_d00 = local_698;
        local_698[0] = FUN_140754f84;
        local_cf0 = FUN_14081d0ea;
        local_cf8 = FUN_14081d0ea;
        local_d08 = &LAB_147da9a76;
        local_d10 = FUN_1409f3105;
        local_d18 = L"Engine";
        local_d20 = 0;
        uStack_d28 = 0x10000000;
        local_d30 = 8;
        local_d38 = (undefined4 *)CONCAT44(local_d38._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_1407b97a3;
    }
    lVar8 = 0;
  }
LAB_1407b97a3:
  if (*(longlong *)(lVar8 + 0x30) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
  }
  fVar15 = *(float *)(param_1[0x3e] + 0x74);
  fVar12 = (float)(**(code **)(*plVar9 + 0x668))();
  if (*(char *)(lVar7 + 0xc0) == '\x01') {
    fVar15 = *(float *)(lVar7 + 0xc4);
  }
  else {
    fVar14 = 1.0;
    if (1.0 <= DAT_14c7613c8) {
      fVar14 = DAT_14c7613c8;
    }
    fVar13 = fVar1 - *(float *)(lVar7 + 0x98);
    fVar15 = fVar14 * *(float *)(lVar7 + 0xb0) * fVar15 * fVar12;
    if (fVar13 <= fVar15) {
      fVar15 = fVar13;
    }
  }
  if ((DAT_14cad0aa0 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1[0x3e] + 0x428);
  }
  FUN_1402ed838(local_698,uVar10,1,1);
  if (fVar15 <= 0.0) {
LAB_1407b99e6:
    if (*(int *)(param_2 + 8) == 0) {
      local_d30 = *(undefined4 *)(param_2 + 0x60);
      uStack_d2c = *(undefined4 *)(param_2 + 100);
      uStack_d28 = *(undefined4 *)(param_2 + 0x68);
      uStack_d24 = *(undefined4 *)(param_2 + 0x6c);
      local_d38 = (undefined4 *)(param_2 + 0x28);
      local_d20 = CONCAT71(local_d20._1_7_,*(undefined1 *)(param_2 + 0x59));
      (**(code **)(*param_1 + 0xa28))(param_1,fVar1,fVar15,&local_cc8);
    }
  }
  else {
    *(float *)(lVar7 + 0x98) = fVar1;
    *(double *)(lVar7 + 0xa0) = (double)fVar15 + *(double *)(lVar7 + 0xa0);
    dVar2 = *(double *)(lVar8 + 0x6d0);
    *(float *)(lVar7 + 8) = (float)dVar2;
    *(float *)(lVar7 + 0xac) = (float)dVar2;
    plVar9 = *(longlong **)(param_1[0x3e] + 0x3c0);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x688))(plVar9,&local_ce8,1);
    }
    if (bVar4) {
      if (*(longlong *)(lVar8 + 0x30) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
      }
      if (*(longlong *)(lVar7 + 0x588) == 0) {
        if ((*(byte *)((longlong)param_1 + 0x349) & 1) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = param_1[0x22];
        }
        FUN_1402ed838(local_ca8,lVar7,1,1);
        if (!bVar5) {
          (**(code **)(*plVar11 + 0xb78))(plVar11,fVar15);
        }
        local_d38 = &local_cc8;
        (**(code **)(*param_1 + 0xa48))
                  (param_1,fVar1,fVar15,
                   CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff);
        if ((((local_6a0 & 1) != 0) && (local_ca8[0] != 0)) &&
           ((*(uint *)(local_ca8[0] + 8) >> 0x1e & 1) == 0)) {
          FUN_140248a4c(local_ca8[0],local_ca8);
        }
        local_ca8[0] = 0;
        if (local_6b0 != 0) {
          FUN_1400020a8();
        }
        if (local_8c0 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1407b99e6;
    }
  }
  if ((((local_90 & 1) != 0) && (local_698[0] != (code *)0x0)) &&
     ((*(uint *)(local_698[0] + 8) >> 0x1e & 1) == 0)) {
    FUN_140248a4c(local_698[0],local_698);
  }
  local_698[0] = (code *)0x0;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_2b0 != 0) {
    FUN_1400020a8();
  }
LAB_1407b9a76:
  if ((local_80 ^ (ulonglong)auStack_d58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b9c72 FUN_1407b9c72 body=170 status=ok
// SIG undefined FUN_1407b9c72(void)

void FUN_1407b9c72(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400bc96c(param_1 + 0x4138);
  if (param_4 <= *(float *)(param_1 + 0x4168)) {
    param_4 = *(float *)(param_1 + 0x4168);
  }
  *(float *)(param_1 + 0x4168) = param_4;
  *(undefined4 *)(param_1 + 0x4164) = 0;
  if ((&DAT_00004160)[param_1] == '\0') {
    (&DAT_00004160)[param_1] = 1;
  }
  local_28 = DAT_14cb760f0;
  FUN_1400bc96c(param_1 + 0x41b0);
  *(byte *)(param_1 + 0x5b5) =
       *(byte *)(param_1 + 0x5b5) & 0xf9 | *(char *)(param_1 + 0x41b0) * '\x02';
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b9d1e FUN_1407b9d1e body=286 status=ok
// SIG undefined FUN_1407b9d1e(void)

double * FUN_1407b9d1e(double *param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((int)param_2 < 0) {
    dVar4 = (double)FUN_144719204(SUB84((double)((float)((param_2 >> 0x10 & 0x7fff) * 0x168) /
                                                32767.0),0),0x4076800000000000);
    dVar3 = (double)FUN_144719204(SUB84((double)(param_2 & 0xffff) * 360.0 * 1.52587890625e-05,0),
                                  0x4076800000000000);
    dVar1 = sin(dVar4 * 0.017453292519943295);
    dVar4 = cos(dVar4 * 0.017453292519943295);
    dVar2 = sin(dVar3 * 0.017453292519943295);
    dVar3 = cos(dVar3 * 0.017453292519943295);
    *param_1 = dVar3 * dVar4;
    param_1[1] = dVar2 * dVar4;
    param_1[2] = dVar1;
  }
  else {
    param_1[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = dVar1;
  }
  return param_1;
}



// FUNCTION 1407b9e3c FUN_1407b9e3c body=312 status=ok
// SIG undefined FUN_1407b9e3c(void)

void FUN_1407b9e3c(longlong *param_1,ulonglong param_2,double *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  double local_48;
  ulonglong local_40;
  ulonglong *local_38;
  double *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  pdVar4 = (double *)(**(code **)(*(longlong *)(param_2 + 0x28) + 0x50))(param_2 + 0x28);
  dVar7 = (*pdVar4 + pdVar4[3]) * 0.5 - *param_3;
  dVar6 = (pdVar4[1] + pdVar4[4]) * 0.5 - param_3[1];
  local_48 = dVar6 * dVar6 + dVar7 * dVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_2) {
          pdVar4 = (double *)(puVar1 + 1);
          if (pdVar4 != (double *)0x0 && puVar1 != (ulonglong *)0x0) {
            dVar6 = *pdVar4;
            if (local_48 <= *pdVar4) {
              dVar6 = local_48;
            }
            *pdVar4 = dVar6;
            goto LAB_1407b9f37;
          }
          break;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  local_38 = &local_40;
  local_30 = &local_48;
  FUN_1407b9f8e(param_1,local_24,&local_38,0);
LAB_1407b9f37:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407b9f8e FUN_1407b9f8e body=1490 status=ok
// SIG undefined FUN_1407b9f8e(void)

int * FUN_1407b9f8e(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_14482b872(param_1,iVar23);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar12 = iVar20 + 1;
    iVar16 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar16 = iVar20;
    }
    if (iVar16 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar6 = iVar20;
        }
        else {
          uVar11 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar11) {
              uVar7 = uVar11;
            }
          }
          else {
            uVar7 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar7 << 2,0);
          iVar6 = (int)(uVar15 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar6) {
            iVar12 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar14,iVar6);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar6 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar6 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar14;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar6 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar20 & 0x1f;
    puVar2 = (uint *)((longlong)plVar14 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar8 = (longlong)iVar23;
    iVar20 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar20;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x18) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar2;
  }
  iVar20 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar20 = iVar23;
  }
  puVar13[iVar20 >> 5] = puVar13[iVar20 >> 5] | 1 << ((byte)iVar23 & 0x1f);
  puVar1 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  puVar3 = (ulonglong *)param_3[1];
  uVar15 = *(ulonglong *)*param_3;
  *puVar1 = uVar15;
  puVar1[1] = *puVar3;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar11 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  cVar9 = '\0';
  iVar20 = iVar23;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar20 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar20 * 0x18);
        if (*puVar3 == uVar15) {
          uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar15 = puVar1[1];
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(int *)puVar3 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
          *(int *)(puVar3 + 1) = (int)uVar15;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
          FUN_147dd617e(param_1,iVar23);
          cVar9 = '\x01';
          goto LAB_1407ba0fd;
        }
        iVar20 = (int)puVar3[2];
      } while (iVar20 != -1);
    }
    cVar9 = '\0';
    iVar20 = iVar23;
  }
LAB_1407ba0fd:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar9;
  }
  if (cVar9 != '\0') goto LAB_1407ba181;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 < 4) {
    uVar21 = 1;
  }
  else {
    uVar15 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar7 < 1) || ((int)uVar21 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)puVar1 + 0x14) = uVar11;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar20;
    goto LAB_1407ba181;
  }
  *(uint *)(param_1 + 9) = uVar21;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar21 = *(uint *)(param_1 + 9);
  }
  plVar18 = param_1 + 7;
  if (uVar21 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_1407ba225:
    uVar11 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4) =
           0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar21 != uVar11);
  }
  else {
    if (uVar21 == 0) goto LAB_1407ba181;
    FUN_1446efa72(plVar14,0,uVar21,4);
    if (0 < (int)uVar21) goto LAB_1407ba225;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar15 = 0;
    uVar19 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar6 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar6 = iVar23 + -1;
      }
      uVar15 = 0;
      uVar19 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar19 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar19 == uVar15) goto LAB_1407ba181;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar13[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar19 = (ulonglong)(-uVar11 & uVar11);
    uVar24 = uVar19 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar6) {
      iVar6 = iVar23;
    }
  }
  if (iVar6 < iVar23) {
    uVar11 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar22 = (longlong)iVar6;
      uVar24 = *(ulonglong *)(lVar8 + lVar22 * 0x18);
      uVar7 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      uVar11 = ~(uint)uVar19 & uVar11;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar2;
      }
      iVar23 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar8 = (longlong)iVar6;
      uVar7 = puVar13[lVar8] & uVar11;
      if (uVar7 == 0) {
        iVar16 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar16 = iVar23 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar6) {
          iVar17 = iVar6;
        }
        if (iVar16 <= iVar6) break;
        lVar22 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar13[lVar8 + lVar22 + 1];
          if (uVar7 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar17 - lVar8 == lVar22) goto LAB_1407ba181;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar22 + 1);
        uVar11 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar7 & uVar7);
      uVar24 = uVar19 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar23);
  }
LAB_1407ba181:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 1407ba560 FUN_1407ba560 body=329 status=ok
// SIG undefined FUN_1407ba560(void)

void FUN_1407ba560(longlong *param_1)

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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ba6aa FUN_1407ba6aa body=2797 status=ok
// SIG undefined FUN_1407ba6aa(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1407ba6aa(longlong param_1,longlong ******param_2)

{
  int *piVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong *****ppppplVar4;
  double *pdVar5;
  double *pdVar6;
  longlong *******ppppppplVar7;
  longlong ****pppplVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *****ppppplVar12;
  longlong ******pppppplVar13;
  longlong *****ppppplVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong *******ppppppplVar27;
  longlong ******pppppplVar28;
  longlong ******pppppplVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong ******local_118;
  longlong ******local_110;
  ulonglong *local_108;
  longlong *******local_100;
  longlong *****local_f8;
  longlong *****ppppplStack_f0;
  longlong ******local_e8;
  undefined8 uStack_e0;
  longlong *****local_d8;
  longlong *****local_d0;
  longlong *******local_c8;
  longlong *****local_c0;
  undefined1 local_b4 [4];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar15 = param_1 + 0x1838;
  FUN_1406c9154(lVar15,0);
  if (param_2 != (longlong ******)0x0) {
    ppppplVar12 = (longlong *****)FUN_14001cc68(0x38,0x10);
    ppppplVar12[1] = (longlong ****)&DAT_100000001;
    *ppppplVar12 = (longlong ****)&PTR_FUN_14b3f5040;
    local_d8 = ppppplVar12 + 2;
    ppppplVar12[2] = (longlong ****)0x0;
    ppppplVar12[3] = (longlong ****)0x0;
    ppppplVar12[4] = (longlong ****)0x0;
    ppppplVar12[5] = (longlong ****)0x0;
    ppppplVar12[6] = (longlong ****)0x0;
    local_d0 = ppppplVar12;
    if (ppppplVar12 != (longlong *****)0x0) {
      LOCK();
      *(int *)(ppppplVar12 + 1) = *(int *)(ppppplVar12 + 1) + 1;
      UNLOCK();
      LOCK();
      ppppplVar14 = ppppplVar12 + 1;
      *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
      UNLOCK();
      if (*(int *)ppppplVar14 == 0) {
        (*(code *)**ppppplVar12)(ppppplVar12);
        LOCK();
        piVar1 = (int *)((longlong)ppppplVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppppplVar12)[2])(ppppplVar12);
        }
      }
    }
    ppppplVar12 = local_d8;
    uVar10 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(local_d8 + 4) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar24 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar24 = 0;
    }
    iVar11 = *(int *)(lVar24 + 0x10);
    if (*(int *)(lVar24 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar23 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar23);
      }
      LOCK();
      iVar11 = *(int *)(lVar24 + 0x10);
      bVar30 = iVar11 == 0;
      if (bVar30) {
        *(int *)(lVar24 + 0x10) = iVar23;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar11 = iVar23;
      }
    }
    *(int *)((longlong)ppppplVar12 + 0x24) = iVar11;
    local_e8 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_c8 = &local_e8;
    local_c0 = (longlong *****)&local_d8;
    FUN_1407bd4ec(lVar15,&local_f8);
    local_e8 = (longlong ******)0x0;
    uStack_e0 = 1;
    FUN_141876724(&local_e8,0);
    *local_e8 = local_d8;
    local_e8[1] = local_d0;
    if (local_d0 != (longlong *****)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
      UNLOCK();
    }
    if ((longlong)*(int *)(param_1 + 0x1660) != 0) {
      puVar22 = *(ulonglong **)(param_1 + 0x1658);
      puVar19 = puVar22 + *(int *)(param_1 + 0x1660);
      local_120 = lVar15;
      local_118 = param_2;
      local_108 = puVar19;
      do {
        ppppppplVar7 = (longlong *******)*puVar22;
        if (ppppppplVar7 != (longlong *******)0x0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(ppppppplVar7);
          }
          local_c8 = ppppppplVar7;
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(ppppppplVar7);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(ppppppplVar7);
          }
          uVar10 = ((uint)((ulonglong)ppppppplVar7 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)ppppppplVar7 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          iVar11 = FUN_1407bd8e0(lVar15,uVar10 >> 0x10 ^ uVar10,&local_c8);
          if (iVar11 == -1) {
            local_f8 = (longlong *****)0x0;
            ppppplStack_f0 = (longlong *****)0x0;
            ppppplVar12 = ppppplStack_f0;
            if ((longlong)(int)uStack_e0 != 0) {
              pppppplVar28 = local_e8 + (longlong)(int)uStack_e0 * 2;
              pppppplVar13 = local_e8;
              do {
                iVar11 = *(int *)((longlong)*pppppplVar13 + 0x24);
                local_110 = pppppplVar13;
                if (((((iVar11 != 0) && (uVar10 = *(uint *)(*pppppplVar13 + 4), -1 < (int)uVar10))
                     && ((int)uVar10 < DAT_14c9647dc)) &&
                    ((puVar19 = (ulonglong *)
                                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                     puVar19 != (ulonglong *)0x0 && ((int)puVar19[2] == iVar11)))) &&
                   (((puVar19[1] & 0x10200000) == 0 &&
                    (ppppppplVar27 = (longlong *******)*puVar19,
                    ppppppplVar27 != (longlong *******)0x0)))) {
                  lVar15 = (*(code *)(*ppppppplVar27)[0x7e])(ppppppplVar27);
                  lVar24 = (*(code *)(*ppppppplVar7)[0x7e])(ppppppplVar7);
                  if (lVar15 == lVar24) {
                    lVar15 = (*(code *)(*ppppppplVar27)[0x61])(ppppppplVar27);
                    lVar24 = (*(code *)(*ppppppplVar7)[0x61])(ppppppplVar7);
                    uVar10 = *(uint *)(lVar24 + 0x28);
                    uVar26 = *(uint *)(lVar15 + 0x28);
                    uVar17 = uVar10;
                    if ((int)uVar26 < (int)uVar10) {
                      uVar17 = uVar26;
                    }
                    if ((int)uVar17 < 1) {
LAB_1407bab08:
                      pppppplVar13 = local_110;
                      lVar15 = local_120;
                      if ((int)uVar26 < (int)uVar10) {
                        ppppppplVar27 = ppppppplVar7;
                      }
                      ppppplVar12 = *local_110;
                      uVar10 = *(uint *)((longlong)ppppppplVar27 + 0xc);
                      *(uint *)(ppppplVar12 + 4) = uVar10;
                      if ((int)uVar10 < DAT_14c9647dc) {
                        lVar24 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                      }
                      else {
                        lVar24 = 0;
                      }
                      iVar11 = *(int *)(lVar24 + 0x10);
                      if (*(int *)(lVar24 + 0x10) == 0) {
                        LOCK();
                        iVar11 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar23 = DAT_14c964868 + 1;
                        bVar30 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar11;
                        if (bVar30) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar23);
                        }
                        LOCK();
                        iVar11 = *(int *)(lVar24 + 0x10);
                        bVar30 = iVar11 == 0;
                        if (bVar30) {
                          *(int *)(lVar24 + 0x10) = iVar23;
                          iVar11 = 0;
                        }
                        UNLOCK();
                        if (bVar30) {
                          iVar11 = iVar23;
                        }
                      }
                      ppppplVar14 = ppppplStack_f0;
                      param_2 = local_118;
                      *(int *)((longlong)ppppplVar12 + 0x24) = iVar11;
                      local_f8 = *pppppplVar13;
                      ppppplVar12 = pppppplVar13[1];
                      if (ppppplVar12 != (longlong *****)0x0) {
                        LOCK();
                        *(int *)(ppppplVar12 + 1) = *(int *)(ppppplVar12 + 1) + 1;
                        UNLOCK();
                      }
                      if (ppppplStack_f0 != (longlong *****)0x0) {
                        LOCK();
                        ppppplVar4 = ppppplStack_f0 + 1;
                        *(int *)ppppplVar4 = *(int *)ppppplVar4 + -1;
                        UNLOCK();
                        if (*(int *)ppppplVar4 == 0) {
                          pppplVar8 = *ppppplStack_f0;
                          ppppplStack_f0 = ppppplVar12;
                          (*(code *)*pppplVar8)(ppppplVar14);
                          LOCK();
                          piVar1 = (int *)((longlong)ppppplVar14 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          ppppplVar12 = ppppplStack_f0;
                          if (*piVar1 == 0) {
                            (*(code *)(*ppppplVar14)[2])(ppppplVar14);
                            ppppplVar12 = ppppplStack_f0;
                          }
                        }
                      }
                      break;
                    }
                    lVar16 = 0;
                    while (*(longlong *)(*(longlong *)(lVar15 + 0x20) + lVar16) ==
                           *(longlong *)(*(longlong *)(lVar24 + 0x20) + lVar16)) {
                      lVar9 = *(longlong *)(lVar15 + 0x30);
                      lVar25 = *(longlong *)(lVar24 + 0x30);
                      pdVar2 = (double *)(lVar25 + lVar16 * 8);
                      pdVar5 = (double *)(lVar25 + 0x20 + lVar16 * 8);
                      pdVar6 = (double *)(lVar9 + 0x20 + lVar16 * 8);
                      dVar32 = *pdVar5 - *pdVar6;
                      dVar34 = pdVar5[1] - pdVar6[1];
                      dVar35 = *(double *)(lVar25 + 0x30 + lVar16 * 8) -
                               *(double *)(lVar9 + 0x30 + lVar16 * 8);
                      pdVar5 = (double *)(lVar9 + lVar16 * 8);
                      dVar33 = *(double *)(lVar9 + 0x18 + lVar16 * 8) *
                               *(double *)(lVar25 + 0x18 + lVar16 * 8) +
                               *(double *)(lVar9 + 0x10 + lVar16 * 8) *
                               *(double *)(lVar25 + 0x10 + lVar16 * 8) +
                               *pdVar5 * *pdVar2 + pdVar5[1] * pdVar2[1];
                      dVar31 = (dVar33 + dVar33) * dVar33 + -1.0;
                      dVar33 = dVar31;
                      if (1.0 <= dVar31) {
                        dVar33 = 1.0;
                      }
                      dVar33 = acos((double)(-(ulonglong)(dVar31 < -1.0) & 0xbff0000000000000 |
                                            ~-(ulonglong)(dVar31 < -1.0) & (ulonglong)dVar33));
                      if ((1.0 < (float)SQRT(dVar32 * dVar32 + dVar34 * dVar34 + dVar35 * dVar35))
                         || (0.017453292 < (float)dVar33)) break;
                      lVar16 = lVar16 + 0xc;
                      if ((ulonglong)uVar17 * 0xc == lVar16) {
                        uVar26 = *(uint *)(lVar15 + 0x28);
                        uVar10 = *(uint *)(lVar24 + 0x28);
                        goto LAB_1407bab08;
                      }
                    }
                  }
                }
                pppppplVar13 = local_110 + 2;
                param_2 = local_118;
                lVar15 = local_120;
                ppppplVar12 = ppppplStack_f0;
              } while (pppppplVar13 != pppppplVar28);
            }
            ppppplStack_f0 = ppppplVar12;
            if (local_f8 == (longlong *****)0x0) {
              ppppplVar14 = (longlong *****)FUN_14001cc68(0x38,0x10);
              ppppplVar12 = ppppplStack_f0;
              ppppplVar14[1] = (longlong ****)&DAT_100000001;
              *ppppplVar14 = (longlong ****)&PTR_FUN_14b3f5040;
              local_f8 = ppppplVar14 + 2;
              ppppplVar14[2] = (longlong ****)0x0;
              ppppplVar14[3] = (longlong ****)0x0;
              ppppplVar14[4] = (longlong ****)0x0;
              ppppplVar14[5] = (longlong ****)0x0;
              ppppplVar14[6] = (longlong ****)0x0;
              if (ppppplVar14 == (longlong *****)0x0) {
                if (ppppplStack_f0 != (longlong *****)0x0) {
                  ppppplStack_f0 = (longlong *****)0x0;
LAB_1407bacb1:
                  LOCK();
                  ppppplVar4 = ppppplVar12 + 1;
                  *(int *)ppppplVar4 = *(int *)ppppplVar4 + -1;
                  UNLOCK();
                  if (*(int *)ppppplVar4 == 0) {
                    (*(code *)**ppppplVar12)(ppppplVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)ppppplVar12 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (*(code *)(*ppppplVar12)[2])(ppppplVar12);
                    }
                  }
                  if (ppppplVar14 != (longlong *****)0x0) goto LAB_1407bacfc;
                }
              }
              else {
                LOCK();
                *(int *)(ppppplVar14 + 1) = *(int *)(ppppplVar14 + 1) + 1;
                UNLOCK();
                if (ppppplVar14 == ppppplStack_f0) {
                  LOCK();
                  ppppplVar12 = ppppplVar14 + 1;
                  *(int *)ppppplVar12 = *(int *)ppppplVar12 + -1;
                  UNLOCK();
                  if (*(int *)ppppplVar12 == 0) {
                    (*(code *)**ppppplVar14)(ppppplVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)ppppplVar14 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (*(code *)(*ppppplVar14)[2])(ppppplVar14);
                    }
                  }
                }
                else {
                  bVar30 = ppppplStack_f0 != (longlong *****)0x0;
                  ppppplStack_f0 = ppppplVar14;
                  if (bVar30) goto LAB_1407bacb1;
                }
LAB_1407bacfc:
                LOCK();
                ppppplVar12 = ppppplVar14 + 1;
                *(int *)ppppplVar12 = *(int *)ppppplVar12 + -1;
                UNLOCK();
                if (*(int *)ppppplVar12 == 0) {
                  (*(code *)**ppppplVar14)(ppppplVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)ppppplVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*ppppplVar14)[2])(ppppplVar14);
                  }
                }
              }
              ppppplVar12 = local_f8;
              lVar15 = local_120;
              uVar10 = *(uint *)((longlong)ppppppplVar7 + 0xc);
              *(uint *)(local_f8 + 4) = uVar10;
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar24 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar24 = 0;
              }
              iVar11 = *(int *)(lVar24 + 0x10);
              if (*(int *)(lVar24 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar23 = DAT_14c964868 + 1;
                bVar30 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar30) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar23);
                }
                LOCK();
                iVar11 = *(int *)(lVar24 + 0x10);
                bVar30 = iVar11 == 0;
                if (bVar30) {
                  *(int *)(lVar24 + 0x10) = iVar23;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar30) {
                  iVar11 = iVar23;
                }
              }
              uVar21 = uStack_e0;
              *(int *)((longlong)ppppplVar12 + 0x24) = iVar11;
              lVar24 = (longlong)(int)uStack_e0;
              uVar10 = (int)uStack_e0 + 1;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar10);
              if (uStack_e0._4_4_ < uVar10) {
                FUN_141876724(&local_e8,uVar21 & 0xffffffff);
              }
              local_e8[lVar24 * 2] = local_f8;
              local_e8[lVar24 * 2 + 1] = ppppplStack_f0;
              if (ppppplStack_f0 != (longlong *****)0x0) {
                LOCK();
                *(int *)(ppppplStack_f0 + 1) = *(int *)(ppppplStack_f0 + 1) + 1;
                UNLOCK();
              }
            }
            local_100 = ppppppplVar7;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(ppppppplVar7);
            }
            local_c8 = (longlong *******)&local_100;
            local_c0 = (longlong *****)&local_f8;
            FUN_1407bd4ec(lVar15,local_b4,&local_c8);
            ppppplVar12 = ppppplStack_f0;
            puVar19 = local_108;
            if (ppppplStack_f0 != (longlong *****)0x0) {
              LOCK();
              ppppplVar14 = ppppplStack_f0 + 1;
              *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
              UNLOCK();
              if (*(int *)ppppplVar14 == 0) {
                (*(code *)**ppppplStack_f0)(ppppplStack_f0);
                LOCK();
                piVar1 = (int *)((longlong)ppppplVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppplVar12)[2])(ppppplVar12);
                }
              }
            }
          }
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar19);
    }
    if ((longlong)(int)uStack_e0 == 0) {
      uVar21 = 0;
    }
    else {
      pppppplVar28 = local_e8 + (longlong)(int)uStack_e0 * 2;
      pppppplVar13 = local_e8;
      do {
        iVar11 = *(int *)((longlong)*pppppplVar13 + 0x24);
        if ((iVar11 == 0) || (uVar10 = *(uint *)(*pppppplVar13 + 4), (int)uVar10 < 0)) {
LAB_1407bb08c:
          pppppplVar29 = (longlong ******)0x0;
        }
        else {
          pppppplVar29 = (longlong ******)0x0;
          if ((int)uVar10 < DAT_14c9647dc) {
            puVar20 = (undefined8 *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if (((puVar20 == (undefined8 *)0x0) || (*(int *)(puVar20 + 2) != iVar11)) ||
               ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_1407bb08c;
            pppppplVar29 = (longlong ******)*puVar20;
          }
        }
        if (pppppplVar29 != param_2) {
          lVar15 = (*(code *)(*param_2)[0x61])(param_2);
          lVar24 = (*(code *)(*pppppplVar29)[0x61])(pppppplVar29);
          ppppplVar12 = *pppppplVar13;
          uVar10 = *(uint *)(lVar24 + 0x28);
          iVar11 = *(int *)(ppppplVar12 + 1);
          *(uint *)(ppppplVar12 + 1) = iVar11 + uVar10;
          if ((uint)(*(int *)((longlong)ppppplVar12 + 0xc) - iVar11) < uVar10) {
            FUN_1446f48e2();
          }
          if (0 < *(int *)(lVar24 + 0x28)) {
            lVar16 = 0;
            do {
              lVar9 = *(longlong *)(*(longlong *)(lVar24 + 0x20) + lVar16 * 0xc);
              uVar18 = 0xffffffff;
              if ((lVar9 != 0) && (*(int *)(lVar15 + 0x98) != *(int *)(lVar15 + 0xc4))) {
                uVar10 = (uint)((ulonglong)lVar9 >> 0x10);
                uVar26 = (uint)lVar9 & 0xffff;
                lVar25 = *(longlong *)(lVar15 + 0xd0);
                if (*(longlong *)(lVar15 + 0xd0) == 0) {
                  lVar25 = lVar15 + 200;
                }
                iVar11 = *(int *)(lVar25 + (ulonglong)
                                           (*(int *)(lVar15 + 0xd8) - 1U &
                                           (int)((ulonglong)lVar9 >> 0x20) +
                                           ((uint)lVar9 << 0x10 | uVar26) +
                                           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar26 >> 4)) * 4);
                if (iVar11 != -1) {
                  do {
                    plVar3 = (longlong *)(*(longlong *)(lVar15 + 0x90) + (longlong)iVar11 * 0x14);
                    if (*plVar3 == lVar9) {
                      if ((plVar3 != (longlong *)0x0) && (plVar3 + 1 != (longlong *)0x0)) {
                        uVar18 = (undefined4)plVar3[1];
                      }
                      break;
                    }
                    iVar11 = *(int *)((longlong)plVar3 + 0xc);
                  } while (iVar11 != -1);
                }
              }
              *(undefined4 *)((longlong)**pppppplVar13 + lVar16 * 4) = uVar18;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(lVar24 + 0x28));
          }
        }
        pppppplVar13 = pppppplVar13 + 2;
      } while (pppppplVar13 != pppppplVar28);
      uVar21 = uStack_e0 & 0xffffffff;
    }
    FUN_143ce9aeb(local_e8,uVar21);
    if (local_e8 != (longlong ******)0x0) {
      FUN_1400020a8();
    }
    ppppplVar12 = local_d0;
    if (local_d0 != (longlong *****)0x0) {
      LOCK();
      ppppplVar14 = local_d0 + 1;
      *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
      UNLOCK();
      if (*(int *)ppppplVar14 == 0) {
        (*(code *)**local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)ppppplVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppppplVar12)[2])(ppppplVar12);
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bb198 FUN_1407bb198 body=638 status=ok
// SIG undefined FUN_1407bb198(void)

void FUN_1407bb198(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1407bb1fb;
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
LAB_1407bb1fb:
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
      lVar13 = (longlong)iVar12 * 0x30;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x2c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x28 + lVar13) =
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



// FUNCTION 1407bb416 FUN_1407bb416 body=108 status=ok
// SIG undefined FUN_1407bb416(void)

undefined * FUN_1407bb416(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874c00) {
    FUN_144b3d300(&DAT_14c874c00);
    if (DAT_14c874c00 == -1) {
      FUN_14574566a(&DAT_14c874b70);
      atexit((_func_5014 *)&LAB_14278f0f2);
      _Init_thread_footer(&DAT_14c874c00);
    }
  }
  return &DAT_14c874b70;
}



// FUNCTION 1407bb482 FUN_1407bb482 body=80 status=ok
// SIG undefined FUN_1407bb482(void)

void FUN_1407bb482(LPCRITICAL_SECTION param_1,longlong param_2)

{
  EnterCriticalSection(param_1);
  FUN_1407bb4d2(param_2 + 0x10,*(int *)(param_2 + 0x18) + -1,1);
  FUN_14089e7f6(param_1,3,param_2);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407bb4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1407bb4d2 FUN_1407bb4d2 body=136 status=ok
// SIG undefined FUN_1407bb4d2(void)

void FUN_1407bb4d2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145c4daa0(param_1,iVar1);
    }
    FUN_146820440((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1407bb55c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1407bb5ee(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1407bb55c FUN_1407bb55c body=103 status=ok
// SIG undefined FUN_1407bb55c(void)

void FUN_1407bb55c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_1407bb5c3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1407bb5c3 FUN_1407bb5c3 body=43 status=ok
// SIG undefined FUN_1407bb5c3(void)

void FUN_1407bb5c3(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1407bb5ee FUN_1407bb5ee body=151 status=ok
// SIG undefined FUN_1407bb5ee(void)

void FUN_1407bb5ee(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 1407bb686 FUN_1407bb686 body=283 status=ok
// SIG undefined FUN_1407bb686(void)

longlong * FUN_1407bb686(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8745a8) {
    FUN_144b3d300(&DAT_14c8745a8);
    if (DAT_14c8745a8 == -1) {
      local_38 = &local_24;
      local_24 = 0;
      local_28 = 0;
      local_29 = 0;
      local_18 = (longlong *)FUN_1457456af(L"Status",L"Unknown");
      local_20 = local_18 + 2;
      FUN_145745742(&local_20);
      plVar3 = local_18;
      DAT_14c874598 = local_20;
      DAT_14c8745a0 = local_18;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_18 + 1) = (int)local_18[1] + 1;
        UNLOCK();
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_18 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_18)(local_18);
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
      atexit(FUN_14278cb99);
      _Init_thread_footer(&DAT_14c8745a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return DAT_14c874598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bb7a8 FUN_1407bb7a8 body=57 status=ok
// SIG undefined FUN_1407bb7a8(void)

void FUN_1407bb7a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22840 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22840 = FUN_140002ddd(FUN_146439a48,uVar1,L"GpsFlow_Root");
  }
  return;
}



// FUNCTION 1407bb7e2 FUN_1407bb7e2 body=123 status=ok
// SIG undefined FUN_1407bb7e2(void)

undefined8 * FUN_1407bb7e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3c8f00;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407bb85e(param_1 + 5,0);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407bb85e FUN_1407bb85e body=123 status=ok
// SIG undefined FUN_1407bb85e(void)

void FUN_1407bb85e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1407bb8da FUN_1407bb8da body=376 status=ok
// SIG undefined FUN_1407bb8da(void)

void FUN_1407bb8da(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407bb964;
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
LAB_1407bb964:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 200)) {
    uVar7 = uVar5 / 200 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,200,8);
  return;
}



// FUNCTION 1407bba54 FUN_1407bba54 body=447 status=ok
// SIG undefined FUN_1407bba54(void)

void FUN_1407bba54(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1407bbc14();
  FUN_1407bc90c(param_1,0);
  FUN_1407bc1ec(param_1,0);
  FUN_1407ab6c8(*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((param_2 == '\0') && (*(char *)(lVar1 + 0x208) != '\0')) {
    local_20 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
    FUN_1407bcdc2(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  }
  else {
    local_20 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
    FUN_1407ab600(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0);
  }
  FUN_1407ad3a6(param_1,0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      *(undefined8 *)(lVar1 + 0x9c70) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar3 = (undefined4)DAT_14c8464e8;
      uVar2 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(lVar1 + 0x9c60) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(lVar1 + 0x9c64) = uVar2;
      *(undefined4 *)(lVar1 + 0x9c68) = uVar3;
      *(undefined4 *)(lVar1 + 0x9c6c) = uVar4;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bbc14 FUN_1407bbc14 body=228 status=ok
// SIG undefined FUN_1407bbc14(void)

void FUN_1407bbc14(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1407bc0a8();
  FUN_1407bca9e(param_1,0);
  FUN_1407bc608(param_1,0);
  FUN_1407bbdf0(param_1,0);
  FUN_1407ab98c(param_1,0,0);
  FUN_1407bbfa6(param_1,0);
  FUN_1407bc786(param_1,0);
  FUN_1407abab2(param_1,0);
  FUN_1407bbeb4(param_1,0);
  FUN_1407bbd62(param_1,0);
  FUN_1407bc344(param_1,0);
  FUN_1407bc4a4(param_1,0);
  FUN_1407acd76(param_1,0);
  FUN_1407ac082(param_1,0);
  FUN_1407aba12(param_1,0);
  FUN_1407bbcfa(param_1);
  FUN_1407abce6(param_1,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bbcfa FUN_1407bbcfa body=103 status=ok
// SIG undefined FUN_1407bbcfa(void)

void FUN_1407bbcfa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x7d) == '\x01') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38), lVar1 != 0)) {
    lVar2 = FUN_14070cc62();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30 && (lVar1 = *(longlong *)(lVar1 + 0x858), lVar1 != 0)))) {
      iVar3 = 2;
      if (2 < *(int *)(lVar1 + 0x153c)) {
        iVar3 = *(int *)(lVar1 + 0x153c);
      }
      *(int *)(lVar1 + 0x153c) = iVar3;
    }
  }
  return;
}



// FUNCTION 1407bbd62 FUN_1407bbd62 body=141 status=ok
// SIG undefined FUN_1407bbd62(void)

void FUN_1407bbd62(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x19) & 1) != param_2) {
    lVar1 = FUN_14152bd28(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
    if (lVar1 != 0) {
      local_20 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
      if (param_2 == 0) {
        FUN_1400bc8c2(lVar1 + 0x118,&local_20);
      }
      else {
        FUN_1400bc96c();
      }
      *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe | param_2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bbdf0 FUN_1407bbdf0 body=194 status=ok
// SIG undefined FUN_1407bbdf0(void)

void FUN_1407bbdf0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x18) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf7 | param_2 * '\b';
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_14070cc62();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x858) != 0)) {
        local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(*(longlong *)(lVar1 + 0x858) + 0x11f0,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bbeb4 FUN_1407bbeb4 body=241 status=ok
// SIG undefined FUN_1407bbeb4(void)

void FUN_1407bbeb4(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (-1 < (char)*(byte *)(param_1 + 0x18) == (bool)param_2) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0x7f | param_2 << 7;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140b040c0();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_140b040c0();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if (lVar4 != 0) {
            if (param_2 == '\0') {
              local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18)
              ;
              FUN_140ba2af2(lVar4);
            }
            else {
              local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18)
              ;
              FUN_140ba2cd0(lVar4,&local_28,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x7b));
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bbfa6 FUN_1407bbfa6 body=257 status=ok
// SIG undefined FUN_1407bbfa6(void)

void FUN_1407bbfa6(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x18) & 0x20) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xdf | param_2 << 5;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar2 != 0) {
      uVar1 = FUN_1407725cc();
      lVar2 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != 0) {
        uVar1 = FUN_144b397c8(lVar2);
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
        if (lVar2 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar2 = lVar2 << 3;
          do {
            lVar3 = FUN_144a782da(uVar1,lVar4);
            if (lVar3 != 0) {
              if (param_2 == '\0') {
                local_40 = *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
                FUN_14134c034(lVar3,&local_40);
              }
              else {
                local_40 = *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
                FUN_1413d8066(lVar3,&local_40);
              }
            }
            lVar4 = lVar4 + 8;
            lVar2 = lVar2 + -8;
          } while (lVar2 != 0);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407bc0a8 FUN_1407bc0a8 body=323 status=ok
// SIG undefined FUN_1407bc0a8(void)

void FUN_1407bc0a8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == *(longlong *)(param_1 + 0x1c)) {
    if (*(int *)(param_1 + 0x28) == 0) {
LAB_1407bc13a:
      lVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x24);
      lVar2 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar4 == (longlong *)0x0) ||
           (((int)plVar4[2] != *(int *)(param_1 + 0x28) ||
            ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) goto LAB_1407bc13a;
        lVar2 = *plVar4;
      }
    }
    if (param_2[1] == lVar2) goto LAB_1407bc119;
  }
  FUN_1489a5a8c(&local_38,param_2);
  *(undefined4 *)(param_1 + 0x1c) = local_38;
  *(undefined4 *)(param_1 + 0x20) = uStack_34;
  *(undefined4 *)(param_1 + 0x24) = uStack_30;
  *(undefined4 *)(param_1 + 0x28) = uStack_2c;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x98);
  FUN_1446ddc76(&local_38,"Body3rd",1);
  lVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xae8), lVar2 != 0)) {
    uVar3 = FUN_1459b9e2c();
    lVar2 = FUN_144718840(lVar2,uVar3);
    if (lVar2 != 0) {
      uVar3 = FUN_1461f32fe(lVar2);
      if ((*param_2 == 0) || (param_2[1] == 0)) {
        FUN_147acfff0(uVar3,1);
      }
      else {
        FUN_147acffae(uVar3,param_2,1);
      }
    }
  }
LAB_1407bc119:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bc1ec FUN_1407bc1ec body=342 status=ok
// SIG undefined FUN_1407bc1ec(void)

void FUN_1407bc1ec(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x54) != param_2) {
    *(char *)(param_1 + 0x54) = param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        local_20 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (*(char *)(param_1 + 0x54) == '\x01') {
          FUN_1400bc96c();
        }
        else {
          FUN_1400bc8c2(lVar1 + 0x7c78,&local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bc344 FUN_1407bc344 body=351 status=ok
// SIG undefined FUN_1407bc344(void)

void FUN_1407bc344(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
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
  if (((*(byte *)(param_1 + 0x19) & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfd | param_2 * '\x02';
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar2 != 0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14cb56270);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
        if (lVar2 != 0) {
          local_28 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
          if (param_2 == '\0') {
            FUN_1400bc8c2(lVar2 + 0x90,&local_28);
          }
          else {
            FUN_1400bc96c();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bc4a4 FUN_1407bc4a4 body=355 status=ok
// SIG undefined FUN_1407bc4a4(void)

void FUN_1407bc4a4(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
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
  if (((*(byte *)(param_1 + 0x19) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfb | param_2 * '\x04';
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar2 != 0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14cb56270);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
        if (lVar2 != 0) {
          local_28 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
          if (param_2 == '\0') {
            FUN_1400bc8c2(lVar2 + 0xb8,&local_28);
          }
          else {
            FUN_1400bc96c();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bc608 FUN_1407bc608 body=380 status=ok
// SIG undefined FUN_1407bc608(void)

void FUN_1407bc608(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
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
  if (((*(byte *)(param_1 + 0x18) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfb | param_2 * '\x04';
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      if (DAT_14cb66140 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148725495;
        local_50 = FUN_14650e266;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSlopeWarpingInterface",&DAT_14cb66140,&DAT_148725494);
      }
      plVar2 = (longlong *)FUN_144718840(lVar1,DAT_14cb66140);
      if (plVar2 != (longlong *)0x0) {
        if (*(code **)(*plVar2 + 0x10) == (code *)&LAB_144801c46) {
          plVar2 = plVar2 + 0x9f;
        }
        else {
          plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
        }
        local_28 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          FUN_1400bc8c2(plVar2 + 0x1c,&local_28);
        }
        else {
          FUN_1400bc96c();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bc786 FUN_1407bc786 body=388 status=ok
// SIG undefined FUN_1407bc786(void)

void FUN_1407bc786(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*(byte *)(param_1 + 0x18) & 0x40) == 0) == (bool)(char)param_2) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xbf | (char)param_2 << 6;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1800000000;
    FUN_140312d42(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),local_118,0);
    puVar2 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar2 = local_118;
    }
    lVar3 = (longlong)(int)local_50;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(puVar2 + lVar4);
        if (lVar1 != 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb8cd00) && (FUN_144b3d300(&DAT_14cb8cd00), DAT_14cb8cd00 == -1)) {
            FUN_1446f470e(&DAT_14cb8ccf8,L"Trick",1);
            _Init_thread_footer(&DAT_14cb8cd00);
          }
          local_120 = (ulonglong)
                      CONCAT14(*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x40),DAT_14cb8ccf8);
          FUN_140d52e40(lVar1,&local_120,param_2,1);
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407bc90c FUN_1407bc90c body=400 status=ok
// SIG undefined FUN_1407bc90c(void)

void FUN_1407bc90c(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x55) != param_2) {
    *(char *)(param_1 + 0x55) = param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_50 = &local_28;
        local_28 = FUN_141864c34;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464cee30;
        local_58 = &LAB_148bfac22;
        local_60 = &LAB_140f21842;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        local_30 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x18);
        if (param_2 == '\0') {
          if (0 < *(int *)(lVar1 + 0x7ea0)) {
            local_28 = (code *)&local_30;
            FUN_14104f8f4(lVar1 + 0x7e68);
          }
        }
        else {
          FUN_1407bcc70(lVar1 + 0x7c78,&local_30,
                        *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x23c));
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bca9e FUN_1407bca9e body=427 status=ok
// SIG undefined FUN_1407bca9e(void)

void FUN_1407bca9e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar2 = *(byte *)(param_1 + 3);
  cVar8 = (char)param_2;
  if (((bVar2 & 2) == 0) == (bool)cVar8) {
    if (*(int *)(param_1[1] + 0x38) == 0) {
      cVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      if (cVar3 == '\0') goto LAB_1407bcac9;
      bVar2 = *(byte *)(param_1 + 3);
    }
    *(byte *)(param_1 + 3) = bVar2 & 0xfd | cVar8 * '\x02';
    plVar1 = *(longlong **)(param_1[2] + 0x38);
    if (plVar1 != (longlong *)0x0) {
      uVar4 = FUN_14058c2fc();
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar4);
      if (plVar5 != (longlong *)0x0) {
        uVar4 = FUN_14058c2fc();
        plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
        if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
          lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
          if (lVar7 != 0) {
            if ((cVar8 != '\0') && (*(int *)(param_1[1] + 0x38) != 0)) {
              FUN_1407bcc4a(lVar7,&DAT_14cb8ccec);
              local_48 = (undefined8 *)0x0;
              local_40 = 0x400000000;
              FUN_1407bcd44(local_58,param_1[1] + 0x30);
              local_68 = local_48;
              if (local_48 == (undefined8 *)0x0) {
                local_68 = local_58;
              }
              local_60 = (undefined4)local_40;
              local_78 = 0;
              FUN_140f718e4(lVar7,&DAT_14cb8ccec,plVar1);
              if (local_48 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            (**(code **)(*param_1 + 0x18))(param_1,param_2);
            local_58[0] = *(undefined8 *)(*(longlong *)(param_1[2] + 0x30) + 0x18);
            FUN_1409e8d8c(lVar7,&DAT_14cb8ccec,param_2);
          }
        }
      }
    }
  }
LAB_1407bcac9:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bcc4a FUN_1407bcc4a body=38 status=ok
// SIG undefined FUN_1407bcc4a(void)

void FUN_1407bcc4a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(param_2 + 8);
  if (((-1 < lVar1) && (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x30))) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar1 * 8) != 0)) {
    FUN_1409e8d8c(param_1,param_2,0,*(longlong *)(param_1 + 0x28) + lVar1 * 8);
    return;
  }
  return;
}



// FUNCTION 1407bcc70 FUN_1407bcc70 body=211 status=ok
// SIG undefined FUN_1407bcc70(void)

void FUN_1407bcc70(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined1 *)(param_1 + 0x1f0);
  puVar3 = *(undefined1 **)(param_1 + 0x220);
  puVar4 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x228);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 * 0xc;
    do {
      if (*(longlong *)(puVar4 + 4) == *param_2) {
        if (puVar4 != (undefined1 *)0x0) goto LAB_1407bccf5;
        break;
      }
      puVar4 = puVar4 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x228) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x22c) < iVar2 + 1U) {
    FUN_148d54822(puVar1,iVar2);
    puVar3 = *(undefined1 **)(param_1 + 0x220);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  lVar6 = lVar6 * 0xc;
  *(undefined4 *)(puVar3 + lVar6 + 8) = 0;
  *(undefined8 *)(puVar3 + lVar6) = 0;
  puVar3 = *(undefined1 **)(param_1 + 0x220);
  if (*(undefined1 **)(param_1 + 0x220) == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6;
  *(longlong *)(puVar3 + lVar6 + 4) = *param_2;
LAB_1407bccf5:
  *puVar4 = param_3;
  return;
}



// FUNCTION 1407bcd44 FUN_1407bcd44 body=126 status=ok
// SIG undefined FUN_1407bcd44(void)

void FUN_1407bcd44(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
      FUN_1489abce2(param_1,iVar2);
    }
    lVar3 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    lVar5 = 0;
    do {
      *(uint *)(lVar4 + (longlong)iVar2 * 4 + lVar5 * 4) = (uint)*(byte *)(lVar3 + lVar5);
      lVar5 = lVar5 + 1;
    } while (uVar1 != (uint)lVar5);
    return;
  }
  return;
}



// FUNCTION 1407bcdc2 FUN_1407bcdc2 body=1797 status=ok
// SIG undefined FUN_1407bcdc2(void)

void FUN_1407bcdc2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  longlong *plStack_70;
  code *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == (longlong *)0x0) {
LAB_1407bcf02:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  if (DAT_14cb94538 == 0) {
    local_90 = &local_60;
    local_60 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_148a18249;
    local_a0 = FUN_14657713c;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb94538);
  if (plVar6 == (longlong *)0x0) goto LAB_1407bcf02;
  if (DAT_14cb94538 == 0) {
    local_90 = &local_60;
    local_60 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_148a18249;
    local_a0 = FUN_14657713c;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb94538);
  if ((plVar7 == (longlong *)0x0 || plVar6 == plVar7) ||
     (lVar8 = (**(code **)(*plVar7 + 0x18))(plVar7), *(int *)(lVar8 + 0xa8) < 1))
  goto LAB_1407bcf02;
  lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0xa0) + 0x20);
  if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
    uVar15 = FUN_1456cec3c(lVar8);
  }
  else {
    uVar15 = extraout_XMM0_Da;
    if (lVar8 == 0) goto LAB_1407bcf02;
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    uVar15 = FUN_140fb609c(uVar15,param_2,0,param_3);
  }
  if (*(char *)(param_1 + 0x221) == '\x01') {
    local_c8 = param_3;
    FUN_1418f3b88(uVar15,param_2,0,*(undefined4 *)(param_1 + 0x224));
  }
  cVar4 = (**(code **)(*plVar7 + 0x70))(plVar7);
  if ((cVar4 != '\0') ||
     (((*(char *)(lVar8 + 0x60) < '\0' && (*(char *)(lVar8 + 0x178) != '\x03')) ||
      (cVar4 = FUN_14126ac96(lVar8), cVar4 == '\0')))) goto LAB_1407bcf02;
  if (*(char *)(param_1 + 0x211) == '\x01') {
    FUN_1418f3a1e(extraout_XMM0_Da_00,param_2,0,param_3);
  }
  else if (*(char *)(param_1 + 0x212) == '\x01') {
    FUN_14423fe7c(extraout_XMM0_Da_00,param_2,0,param_3);
  }
  (**(code **)(*plVar7 + 0x78))(plVar7,param_1,param_3);
  uVar2 = *(uint *)((longlong)param_2 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar11 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar11 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar11;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar5);
    }
    LOCK();
    iVar11 = *(int *)(lVar13 + 0x10);
    bVar14 = iVar11 == 0;
    if (bVar14) {
      *(int *)(lVar13 + 0x10) = iVar5;
      iVar11 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar11 = iVar5;
    }
  }
  uVar9 = FUN_1407ca880();
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar9);
  if (plVar6 == (longlong *)0x0) {
LAB_1407bd006:
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    uVar9 = FUN_1407ca880();
    plVar7 = (longlong *)FUN_144718840(plVar6,uVar9);
    if (((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) ||
       (lVar13 = (**(code **)(*plVar7 + 0x50))(plVar7), lVar13 == 0)) goto LAB_1407bd006;
    FUN_140dc01da(lVar13,&local_78,*(undefined1 *)(lVar8 + 0xb91));
  }
  lVar8 = local_78;
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  pcVar3 = local_60;
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_14b9a5c70;
  *(longlong *)(local_60 + 8) = CONCAT44(iVar11,uVar2);
  *(longlong *)(local_60 + 0x10) = *param_3;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  *(longlong *)(local_60 + 0x18) = lVar10;
  *(undefined ***)local_60 = &PTR_FUN_14b9a5c00;
  *(longlong *)(local_60 + 0x20) = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 0x20) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar5;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar5;
      }
    }
  }
  *(int *)(pcVar3 + 0x24) = iVar11;
  *(code **)(pcVar3 + 0x28) = FUN_141191b4c;
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (code *)0x0) goto LAB_1407bd230;
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1407bd214;
    }
  }
  else {
    plVar6 = (longlong *)(lVar8 + 0x18);
    if (*(int *)(lVar8 + 0x2c) < 1) {
      iVar11 = *(int *)(lVar8 + 0x20);
      iVar5 = *(int *)(lVar8 + 0x28) + -1;
      *(int *)(lVar8 + 0x28) = iVar5;
      if (iVar5 <= iVar11) {
        iVar5 = iVar11;
        if (0 < iVar11) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar7 = *(longlong **)(*plVar6 + (longlong)iVar12 * 0x10),
                plVar7 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar7 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar6,iVar12);
              FUN_14005b248(plVar6);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(lVar8 + 0x20);
          } while (iVar12 < iVar5);
        }
        iVar12 = 2;
        if (2 < iVar5 * 2) {
          iVar12 = iVar5 * 2;
        }
        *(int *)(lVar8 + 0x28) = iVar12;
        if ((iVar12 < iVar11) && (*(int *)(lVar8 + 0x24) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,local_50);
    }
    iVar11 = *(int *)(lVar8 + 0x20);
    *(uint *)(lVar8 + 0x20) = iVar11 + 1U;
    if (*(uint *)(lVar8 + 0x24) < iVar11 + 1U) {
      FUN_1447a71f6(plVar6,iVar11);
    }
    lVar8 = *plVar6;
    lVar13 = (longlong)iVar11 * 0x10;
    *(undefined8 *)(lVar8 + lVar13) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar13) = 0;
    *(code **)(lVar8 + lVar13) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar8 + 8 + lVar13) = local_58;
LAB_1407bd214:
    local_58 = 0;
  }
  if (local_60 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1407bd230:
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_70 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407bd4ec FUN_1407bd4ec body=1010 status=ok
// SIG undefined FUN_1407bd4ec(void)

int * FUN_1407bd4ec(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1447711aa(param_1,iVar20);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar10 = iVar21 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar15 = iVar21 + 1;
    iVar19 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar19 = iVar21;
    }
    if (iVar19 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar10 = iVar21;
        }
        else {
          uVar11 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar11) {
              uVar12 = uVar11;
            }
          }
          else {
            uVar12 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar12 << 2,0);
          iVar10 = (int)(uVar16 >> 2);
          iVar15 = -0x20;
          if ((int)uVar11 <= iVar10) {
            iVar15 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar17,iVar10);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar10 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar10 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar17;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar21 & 0x1f;
    puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar19 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar13 = (longlong)iVar20;
    iVar21 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar21;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x20) = 0xffffffff;
    }
  }
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar21 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar21 = iVar20;
  }
  puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar21 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar20 & 0x1f);
  puVar3 = (ulonglong *)(*param_1 + lVar13 * 0x20);
  puVar5 = (ulonglong *)param_3[1];
  lVar6 = *(longlong *)*param_3;
  *(longlong *)(*param_1 + lVar13 * 0x20) = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar3[1] = *puVar5;
  uVar16 = puVar5[1];
  puVar3[2] = uVar16;
  if (uVar16 != 0) {
    LOCK();
    *(int *)(uVar16 + 8) = *(int *)(uVar16 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar3 + 3) = 0xffffffff;
  uVar16 = *puVar3;
  if ((DAT_14c950c29 == 1) && (uVar16 != 0)) {
    FUN_1456cec3c(uVar16);
  }
  uVar11 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  iVar21 = 1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar12 = 1;
  }
  else {
    local_50 = *puVar3;
    if ((DAT_14c950c29 == 1) && (local_50 != 0)) {
      FUN_1456cec3c();
    }
    iVar10 = FUN_1407bd8e0(param_1,uVar11,&local_50);
    if (iVar10 != -1) {
      puVar4 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
      plVar17 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar10 * 0x20);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar17 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      uVar16 = *puVar3;
      uVar7 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar9 = puVar3[1];
      uVar8 = *(undefined4 *)((longlong)puVar3 + 0xc);
      *(ulonglong *)(puVar4 + 4) = puVar3[2];
      *puVar4 = (int)uVar16;
      puVar4[1] = uVar7;
      puVar4[2] = (int)uVar9;
      puVar4[3] = uVar8;
      FUN_148813b0e(param_1,iVar20);
      goto LAB_1407bd708;
    }
    uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar12) {
      uVar16 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar13 & 0x1f);
    }
  }
  iVar10 = iVar20;
  if (((int)uVar12 < 1) || (iVar21 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)puVar3 + 0x1c) = uVar11;
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(undefined4 *)(puVar3 + 3) =
         *(undefined4 *)
          ((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar20;
  }
  else {
    *(int *)(param_1 + 9) = iVar21;
    FUN_1407bd9aa(param_1);
  }
LAB_1407bd708:
  *param_2 = iVar10;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bd8e0 FUN_1407bd8e0 body=202 status=ok
// SIG undefined FUN_1407bd8e0(void)

int FUN_1407bd8e0(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
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



// FUNCTION 1407bd9aa FUN_1407bd9aa body=732 status=ok
// SIG undefined FUN_1407bd9aa(void)

void FUN_1407bd9aa(longlong *param_1)

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
    if ((int)uVar14 < 1) goto LAB_1407bda24;
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
LAB_1407bda24:
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
      uVar9 = *(ulonglong *)(lVar15 + (longlong)iVar11 * 0x20);
      if (((bVar2 & 1) != 0) && (uVar9 != 0)) {
        FUN_1456cec3c(uVar9);
        bVar2 = DAT_14c950c29;
      }
      lVar15 = lVar15 + (longlong)iVar11 * 0x20;
      uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar9 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar9;
      *(int *)(lVar15 + 0x1c) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar15 + 0x18) =
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



// FUNCTION 1407bdc9a FUN_1407bdc9a body=186 status=ok
// SIG undefined FUN_1407bdc9a(void)

void FUN_1407bdc9a(longlong *param_1,longlong param_2)

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
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x40;
        lVar1 = lVar2 + lVar7;
        if (*(longlong *)(lVar2 + lVar7) == param_2) {
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
          FUN_1409dec50(*param_1 + lVar7 + 8);
          FUN_1407bdd54(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x38);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 1407bdd54 FUN_1407bdd54 body=114 status=ok
// SIG undefined FUN_1407bdd54(void)

void FUN_1407bdd54(longlong *param_1,int param_2)

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



// FUNCTION 1407bddc6 FUN_1407bddc6 body=1440 status=ok
// SIG undefined FUN_1407bddc6(void)

void FUN_1407bddc6(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407be434();
  plVar12 = *(longlong **)(param_1 + 0xa8);
  if (plVar12 == (longlong *)0x0) goto LAB_1407be197;
  FUN_1400bc96c(plVar12 + 0x6d,&DAT_14cb8c168);
  if (-1 < (char)plVar12[0xc] == (bool)(char)plVar12[0x6d]) {
    (**(code **)(*plVar12 + 0x608))(plVar12);
  }
  FUN_1405e47c6(plVar12,0);
  uVar5 = FUN_140566488();
  plVar6 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,uVar5);
  if (plVar6 == (longlong *)0x0) {
LAB_1407be29f:
    uStack_50 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
LAB_1407be2a1:
    local_58 = (longlong *)0x0;
    iVar3 = 0;
  }
  else {
    uVar5 = FUN_140566488();
    plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
    if (plVar6 == plVar7) goto LAB_1407be29f;
    local_58 = (longlong *)0x0;
    uStack_50 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) goto LAB_1407be29f;
    lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
    if (lVar8 == 0) goto LAB_1407be2a1;
    uVar1 = *(uint *)(lVar8 + 0xc);
    local_58 = (longlong *)CONCAT44(local_58._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar13 = iVar3 == 0;
      if (bVar13) {
        *(int *)(lVar8 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar3 = iVar4;
      }
    }
  }
  local_58 = (longlong *)CONCAT44(iVar3,(undefined4)local_58);
  cVar2 = FUN_14493c216(&local_58,0);
  if (cVar2 == '\0') {
    uStack_50 = plVar7;
  }
  *(undefined4 *)(param_1 + 0x9c8) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x9cc) = local_58._4_4_;
  *(int *)(param_1 + 0x9d0) = (int)uStack_50;
  *(undefined4 *)(param_1 + 0x9d4) = uStack_50._4_4_;
  uVar5 = FUN_1407ca880();
  lVar8 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar5);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    uVar5 = FUN_1407ca880();
    lVar9 = FUN_144718840(lVar8,uVar5);
    lVar10 = 0;
    if (lVar8 != lVar9) {
      lVar10 = lVar9;
    }
  }
  FUN_1407be368(&local_58,lVar10);
  *(undefined4 *)(param_1 + 0x9d8) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x9dc) = local_58._4_4_;
  *(int *)(param_1 + 0x9e0) = (int)uStack_50;
  *(undefined4 *)(param_1 + 0x9e4) = uStack_50._4_4_;
  uVar5 = FUN_140437988();
  lVar8 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar5);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    uVar5 = FUN_140437988();
    lVar9 = FUN_144718840(lVar8,uVar5);
    lVar10 = 0;
    if (lVar8 != lVar9) {
      lVar10 = lVar9;
    }
  }
  FUN_14078a6f4(&local_58,lVar10);
  *(undefined4 *)(param_1 + 0x9e8) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x9ec) = local_58._4_4_;
  *(int *)(param_1 + 0x9f0) = (int)uStack_50;
  *(undefined4 *)(param_1 + 0x9f4) = uStack_50._4_4_;
  if (((((*(longlong **)(param_1 + 0x9f0) == (longlong *)0x0) || (*(int *)(param_1 + 0x9ec) == 0))
       || (uVar1 = *(uint *)(param_1 + 0x9e8), (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 == 0)))) ||
     ((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x9ec) ||
      ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_1407be197;
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x18))();
  local_58 = (longlong *)0x0;
  uStack_50 = (longlong *)((ulonglong)uStack_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar12 = local_58;
  uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,3);
  *local_58 = (longlong)&PTR_LAB_14b3f7600;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar9;
  *local_58 = (longlong)&PTR_FUN_14b42e0f0;
  local_58[3] = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar13 = iVar3 == 0;
      if (bVar13) {
        *(int *)(lVar8 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar12 + 0x1c) = iVar3;
  plVar12[4] = (longlong)FUN_1412e95b2;
  *(undefined4 *)(plVar12 + 5) = 0;
  if (((int)uStack_50 == 0) || (local_58 == (longlong *)0x0)) {
LAB_1407be2e3:
    if ((int)uStack_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_1407be197;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1407be181;
    }
  }
  else {
    cVar2 = (**(code **)(*local_58 + 0x30))();
    if (cVar2 == '\0') {
      goto LAB_1407be2e3;
    }
    plVar12 = (longlong *)(lVar10 + 0x58);
    if (*(int *)(lVar10 + 0x6c) < 1) {
      iVar3 = *(int *)(lVar10 + 0x60);
      iVar4 = *(int *)(lVar10 + 0x68) + -1;
      *(int *)(lVar10 + 0x68) = iVar4;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
        if (0 < iVar3) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar12 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar12 + (longlong)iVar11 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar12,iVar11);
              FUN_14005b248(plVar12);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar4 = *(int *)(lVar10 + 0x60);
          } while (iVar11 < iVar4);
        }
        iVar11 = 2;
        if (2 < iVar4 * 2) {
          iVar11 = iVar4 * 2;
        }
        *(int *)(lVar10 + 0x68) = iVar11;
        if ((iVar11 < iVar3) && (*(int *)(lVar10 + 100) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_40);
    }
    iVar3 = *(int *)(lVar10 + 0x60);
    *(uint *)(lVar10 + 0x60) = iVar3 + 1U;
    if (*(uint *)(lVar10 + 100) < iVar3 + 1U) {
      FUN_1447a71f6(plVar12,iVar3);
    }
    lVar8 = *plVar12;
    lVar10 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar8 + lVar10) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar10) = 0;
    *(longlong **)(lVar8 + lVar10) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar8 + 8 + lVar10) = (int)uStack_50;
LAB_1407be181:
    uStack_50 = (longlong *)((ulonglong)uStack_50 & 0xffffffff00000000);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1407be197:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407be368 FUN_1407be368 body=204 status=ok
// SIG undefined FUN_1407be368(void)

uint * FUN_1407be368(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1407be434 FUN_1407be434 body=301 status=ok
// SIG undefined FUN_1407be434(void)

void FUN_1407be434(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x87c) == 0) {
    bVar6 = false;
  }
  else if (*(longlong *)(param_1 + 0xa8) == 0) {
    bVar6 = true;
  }
  else {
    iVar2 = FUN_14487fd02();
    bVar6 = iVar2 != 3;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
LAB_1407be523:
    *(undefined8 *)(param_1 + 0x850) = 0;
  }
  else {
    lVar3 = FUN_1407bec78();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1407be523;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x850) = lVar1;
    if (*(longlong *)(lVar1 + 0x3b8) == param_1) {
      uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x3c0) + 0x28))(lVar1 + 0x3c0);
      FUN_1406c9d00(uVar4,local_38);
      bVar5 = local_38[0] != 0;
      goto LAB_1407be4dc;
    }
  }
  bVar5 = false;
LAB_1407be4dc:
  if ((bool)(bVar6 | bVar5)) {
    FUN_1407bebdc(param_1 + 0x858,param_1 + 0x840,*(undefined8 *)(param_1 + 0xa8));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1407be562(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407be562 FUN_1407be562 body=58 status=ok
// SIG undefined FUN_1407be562(void)

void FUN_1407be562(longlong param_1)

{
  FUN_1401c3c2c();
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    FUN_1447a91cc(param_1,0,0);
  }
  FUN_1407be59c(param_1);
  FUN_1407bf826(param_1);
  return;
}



// FUNCTION 1407be59c FUN_1407be59c body=447 status=ok
// SIG undefined FUN_1407be59c(void)

undefined8 FUN_1407be59c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  ulonglong local_48;
  
  iVar3 = DAT_14cb1b320;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = (longlong)(int)DAT_14cb1b320;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(DAT_14cb1b318 + lVar9) == param_1) {
        uVar5 = CONCAT71((int7)((ulonglong)DAT_14cb1b318 >> 8),1);
        goto LAB_1407be614;
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 - lVar9 != 0);
  }
  DAT_14cb1b320 = DAT_14cb1b320 + 1;
  if (DAT_14cb1b324 < DAT_14cb1b320) {
    FUN_1407bea76(&DAT_14cb1b318,iVar3);
  }
  *(longlong *)(DAT_14cb1b318 + lVar10 * 8) = param_1;
  if ((longlong)*(int *)(param_1 + 0x688) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x680);
    plVar1 = plVar11 + *(int *)(param_1 + 0x688);
    do {
      plVar6 = (longlong *)*plVar11;
      if (plVar6 != (longlong *)0x0) {
        uVar5 = FUN_1407be81e();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1407be81e();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
          if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_60);
            lVar10 = local_60;
            lVar9 = (longlong)local_58;
            if (lVar9 != 0) {
              lVar8 = 0;
              do {
                lVar2 = *(longlong *)(lVar10 + lVar8);
                cVar4 = FUN_1407be59c(lVar2);
                if (cVar4 != '\0') {
                  local_68 = param_1;
                  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(param_1);
                  }
                  local_50 = &local_68;
                  FUN_147e2bd2a(lVar2 + 0x7c8,&local_50);
                  *plVar11 = 0;
                }
                lVar8 = lVar8 + 8;
              } while (lVar9 * 8 != lVar8);
            }
            if (local_60 != 0) {
              FUN_1400020a8(local_60);
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  DAT_14cb1b320 = DAT_14cb1b320 - 1;
  FUN_1407be782();
  uVar5 = 0;
LAB_1407be614:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1407be75c FUN_1407be75c body=38 status=ok
// SIG undefined FUN_1407be75c(void)

undefined8 * FUN_1407be75c(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1407be904(param_1 + -0x390,param_2,0);
  return param_2;
}



// FUNCTION 1407be782 FUN_1407be782 body=156 status=ok
// SIG undefined FUN_1407be782(void)

void FUN_1407be782(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14cb1b320;
  if (((((longlong)(int)(DAT_14cb1b324 - DAT_14cb1b320) & 0x1ffffffffffff800U) != 0) ||
      ((int)(DAT_14cb1b320 * 3) < DAT_14cb1b324 * 2)) &&
     (DAT_14cb1b320 == 0 || 0x40 < (int)(DAT_14cb1b324 - DAT_14cb1b320))) {
    if (0 < (int)DAT_14cb1b320) {
      uVar1 = FUN_144a3809e(uVar1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
    if ((int)uVar1 != DAT_14cb1b324) {
      DAT_14cb1b324 = (int)uVar1;
      FUN_1446f8d3c(&DAT_14cb1b318,DAT_14cb1b320,uVar1,8,8);
    }
  }
  return;
}



// FUNCTION 1407be81e FUN_1407be81e body=228 status=ok
// SIG undefined FUN_1407be81e(void)

longlong FUN_1407be81e(void)

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
  if (DAT_14cb1abf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147e1d8a3;
    local_40 = FUN_14641a09a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnPointProvider",&DAT_14cb1abf8,&DAT_147e1d8a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1abf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407be904 FUN_1407be904 body=139 status=ok
// SIG undefined FUN_1407be904(void)

void FUN_1407be904(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_147e2b0e6(param_2,0);
  }
  local_28 = FUN_1407be990();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1407bed5e(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407be990 FUN_1407be990 body=228 status=ok
// SIG undefined FUN_1407be990(void)

longlong FUN_1407be990(void)

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
  if (DAT_14cb1abc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147e1d86b;
    local_40 = &LAB_146419ff8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x800;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnPointComponent",&DAT_14cb1abc8,FUN_146419fd6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1abc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bea76 FUN_1407bea76 body=356 status=ok
// SIG undefined FUN_1407bea76(void)

void FUN_1407bea76(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407beafb;
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
LAB_1407beafb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407bebdc FUN_1407bebdc body=155 status=ok
// SIG undefined FUN_1407bebdc(void)

void FUN_1407bebdc(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if (((((*(char *)(param_1 + 0x14) == '\0') && (param_3 != 0)) &&
       (*(char *)(param_1 + 0xd) == '\0')) && (lVar2 = FUN_1447210f0(param_3), lVar2 != 0)) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    if ((*(char *)(param_3 + 0x178) == '\x03') || ((*(byte *)(param_3 + 99) & 8) == 0)) {
      if (*(int *)(param_1 + 0x24) == 0) {
        FUN_1407bf3e3(param_3,param_1 + 0x24);
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    FUN_1407c0b34(param_1,param_2,param_3);
    return;
  }
  return;
}


