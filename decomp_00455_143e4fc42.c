// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e4fc42 FUN_143e4fc42 body=49 status=ok
// SIG undefined FUN_143e4fc42(void)

void FUN_143e4fc42(void)

{
  FUN_144760e21(DAT_14cb8cbe8,DAT_14cb8cbf0);
  if (DAT_14cb8cbe8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e4fc73 FUN_143e4fc73 body=91 status=ok
// SIG undefined FUN_143e4fc73(void)

void FUN_143e4fc73(void)

{
  if (DAT_14cb8cc08 != 0) {
    if (DAT_14cb8cc00 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8cc00)(DAT_14cb8cc00,0);
    FUN_1446efa72(&DAT_14cb8cc00,0,0,0x10);
    DAT_14cb8cc08 = 0;
  }
  if (DAT_14cb8cc00 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e4fcce FUN_143e4fcce body=91 status=ok
// SIG undefined FUN_143e4fcce(void)

void FUN_143e4fcce(void)

{
  if (DAT_14cb8cc18 != 0) {
    if (DAT_14cb8cc10 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8cc10)(DAT_14cb8cc10,0);
    FUN_1446efa72(&DAT_14cb8cc10,0,0,0x10);
    DAT_14cb8cc18 = 0;
  }
  if (DAT_14cb8cc10 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e4fd38 FUN_143e4fd38 body=72 status=ok
// SIG undefined FUN_143e4fd38(void)

void FUN_143e4fd38(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
                    /* WARNING: Could not recover jumptable at 0x000143e4fd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xa8,0,0);
  return;
}



// FUNCTION 143e4fd80 FUN_143e4fd80 body=824 status=ok
// SIG undefined FUN_143e4fd80(void)

undefined8 FUN_143e4fd80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *_Buf1;
  longlong *plVar12;
  void *_Buf2;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  lVar14 = *param_2;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar14);
  }
  if (*param_1 == lVar14) {
    uVar2 = *(uint *)(param_1 + 2);
    puVar9 = (uint *)(ulonglong)uVar2;
    if ((uVar2 == *(uint *)(param_2 + 2)) &&
       (*(char *)((longlong)param_1 + 0x14) == *(char *)((longlong)param_2 + 0x14))) {
      if (uVar2 == 3) {
        uVar18 = 0;
        if ((int)param_1[4] - *(int *)((longlong)param_1 + 0x4c) !=
            (int)param_2[4] - *(int *)((longlong)param_2 + 0x4c)) {
          return 0;
        }
        uVar2 = *(uint *)(param_1 + 8);
        if (uVar2 == 0) {
          uVar16 = 1;
          puVar9 = (uint *)0x0;
          iVar13 = 0;
        }
        else {
          puVar9 = (uint *)param_1[7];
          if ((uint *)param_1[7] == (uint *)0x0) {
            puVar9 = (uint *)(param_1 + 5);
          }
          uVar4 = *puVar9;
          if (uVar4 == 0) {
            iVar13 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar13 = uVar2 - 1;
            }
            uVar18 = 0;
            uVar16 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar16 = uVar18;
            }
            iVar13 = 0;
            do {
              if (uVar16 == uVar18) goto LAB_143e4fdd3;
              iVar13 = iVar13 + 0x20;
              uVar4 = puVar9[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar4 == 0);
          }
          else {
            uVar18 = 0;
            iVar13 = 0;
          }
          uVar16 = (ulonglong)(-uVar4 & uVar4);
          uVar11 = uVar16 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar4 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          puVar9 = (uint *)(ulonglong)uVar4;
          if ((int)uVar2 <= (int)uVar4) {
            puVar9 = (uint *)(ulonglong)uVar2;
          }
        }
        if ((uint)puVar9 != uVar2) {
          uVar17 = 0xffffffff;
          uVar4 = uVar2;
          do {
            if ((int)param_2[4] == *(int *)((longlong)param_2 + 0x4c)) {
              return 0;
            }
            lVar10 = (longlong)(int)puVar9 * 0x38;
            lVar14 = *(longlong *)(param_1[3] + lVar10);
            uVar5 = (uint)((ulonglong)lVar14 >> 0x10);
            uVar15 = (uint)lVar14 & 0xffff;
            plVar12 = (longlong *)param_2[0xb];
            if ((longlong *)param_2[0xb] == (longlong *)0x0) {
              plVar12 = param_2 + 10;
            }
            iVar8 = *(int *)((longlong)plVar12 +
                            (ulonglong)
                            ((int)param_2[0xc] - 1U &
                            (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar15) +
                            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4)) * 4);
            if (iVar8 == -1) {
              return 0;
            }
            lVar10 = param_1[3] + lVar10;
            while (lVar1 = param_2[3] + (longlong)iVar8 * 0x38,
                  *(longlong *)(param_2[3] + (longlong)iVar8 * 0x38) != lVar14) {
              iVar8 = *(int *)(lVar1 + 0x30);
              if (iVar8 == -1) {
                return 0;
              }
            }
            if (lVar1 == 0) {
              return 0;
            }
            _Buf2 = (void *)(lVar1 + 8);
            if (_Buf2 == (void *)0x0) {
              return 0;
            }
            if (*(byte *)(lVar10 + 0x28) != *(byte *)(lVar1 + 0x28)) {
              return 0;
            }
            if (0x18 < *(ushort *)(lVar1 + 0x20)) {
              _Buf2 = *(void **)(lVar1 + 8);
            }
            _Buf1 = (undefined8 *)(lVar10 + 8);
            if (0x18 < *(ushort *)(lVar10 + 0x20)) {
              _Buf1 = (undefined8 *)*_Buf1;
            }
            uVar11 = (ulonglong)((uint)*(byte *)(lVar10 + 0x28) * 0x120);
            if (*(code **)(&DAT_14c9a85e0 + uVar11) == (code *)0x0) {
              iVar8 = memcmp(_Buf1,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
              if (iVar8 != 0) {
                return 0;
              }
            }
            else {
              cVar3 = (**(code **)(&DAT_14c9a85e0 + uVar11))();
              if (cVar3 == '\0') {
                return 0;
              }
              uVar4 = *(uint *)(param_1 + 8);
            }
            uVar17 = uVar17 & ~(uint)uVar16;
            puVar9 = (uint *)param_1[7];
            if ((uint *)param_1[7] == (uint *)0x0) {
              puVar9 = (uint *)(param_1 + 5);
            }
            iVar8 = (int)uVar18;
            lVar14 = (longlong)iVar8;
            uVar5 = puVar9[lVar14] & uVar17;
            if (uVar5 == 0) {
              iVar6 = uVar4 + 0x1e;
              if (-1 < (int)(uVar4 - 1)) {
                iVar6 = uVar4 - 1;
              }
              iVar6 = iVar6 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar7 = iVar6;
              if (iVar6 < iVar8) {
                iVar7 = iVar8;
              }
              if (iVar8 < iVar6) {
                lVar10 = 0;
                do {
                  uVar5 = puVar9[lVar14 + lVar10 + 1];
                  if (uVar5 != 0) {
                    uVar18 = (ulonglong)(iVar8 + (int)lVar10 + 1);
                    uVar17 = 0xffffffff;
                    goto LAB_143e4fff4;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar10 = lVar10 + 1;
                } while (iVar7 - lVar14 != lVar10);
                uVar17 = 0xffffffff;
                iVar8 = iVar7;
              }
              puVar9 = (uint *)(ulonglong)uVar4;
              uVar18 = (ulonglong)(iVar8 + 1);
            }
            else {
LAB_143e4fff4:
              uVar16 = (ulonglong)(-uVar5 & uVar5);
              uVar11 = uVar16 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar5 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              puVar9 = (uint *)(ulonglong)uVar5;
              if ((int)uVar4 <= (int)uVar5) {
                puVar9 = (uint *)(ulonglong)uVar4;
              }
            }
          } while ((uint)puVar9 != uVar2);
        }
      }
LAB_143e4fdd3:
      return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143e500d8 FUN_143e500d8 body=967 status=ok
// SIG undefined FUN_143e500d8(void)

void FUN_143e500d8(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_148 [34];
  byte local_126;
  byte local_125;
  int local_124;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e0 [64];
  longlong local_a0;
  undefined4 local_98;
  char local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar3 = FUN_140b4b52a();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    local_120 = param_1;
    if (cVar3 == '\0') {
      local_118 = (longlong *)(param_1 + 0x78);
      local_110 = param_2;
      do {
        memset(&local_f8,0,0x98);
        FUN_14053a926(&local_f8,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
        if (local_f8 != 0) {
          if (local_90 == '\x01') {
            iVar1 = *(int *)(param_1 + 0x70);
            lVar7 = (longlong)iVar1;
            if (lVar7 != 0) {
              lVar6 = *(longlong *)(param_1 + 0x68);
              bVar4 = FUN_143e4fd80(lVar6,&local_f8);
              local_100 = lVar6 + 0x98;
              local_124 = 0;
              iVar8 = 0;
              local_108 = lVar6;
              do {
                local_125 = bVar4;
                local_126 = local_125 ^ 1;
                lVar6 = (longlong)iVar8;
                iVar2 = iVar8 + 1;
                if (iVar8 + 1 < iVar1) {
                  iVar2 = iVar1;
                }
                lVar11 = lVar6 * 0x98;
                lVar12 = local_100 + lVar11;
                bVar4 = local_125 & 1;
                iVar9 = iVar8;
                do {
                  lVar6 = lVar6 + 1;
                  iVar10 = iVar2;
                  if (lVar7 <= lVar6) break;
                  bVar5 = FUN_143e4fd80(lVar12);
                  iVar9 = iVar9 + 1;
                  lVar12 = lVar12 + 0x98;
                  iVar10 = iVar9;
                } while (bVar4 == bVar5);
                param_2 = local_110;
                iVar2 = local_124;
                bVar4 = local_126;
                if ((local_125 & 1) == 0) {
                  if (local_124 != iVar8) {
                    memmove((void *)((longlong)local_124 * 0x98 + local_108),
                            (void *)(lVar11 + local_108),(longlong)(iVar10 - iVar8) * 0x98);
                  }
                  local_124 = iVar2 + (iVar10 - iVar8);
                }
                else {
                  FUN_140882410(lVar11 + local_108);
                  param_2 = local_110;
                  bVar4 = local_126;
                }
                iVar8 = iVar10;
              } while (lVar6 < lVar7);
              *(int *)(local_120 + 0x70) = local_124;
              param_1 = local_120;
            }
          }
          else {
            cVar3 = FUN_140539fdc(param_1);
            if (cVar3 == '\0') {
              iVar1 = *(int *)(param_1 + 0x80);
              *(uint *)(param_1 + 0x80) = iVar1 + 1U;
              if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
                FUN_14088594e(local_118,iVar1);
              }
              lVar7 = *local_118;
              *(longlong *)(lVar7 + (longlong)iVar1 * 0x98) = local_f8;
              if ((local_f8 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              bVar4 = DAT_14c950c29;
              lVar7 = lVar7 + (longlong)iVar1 * 0x98;
              *(longlong *)(lVar7 + 8) = local_f0;
              if ((local_f0 != 0 & bVar4) == 1) {
                FUN_1456cec3c();
              }
              *(undefined2 *)(lVar7 + 0x14) = local_e4;
              *(undefined4 *)(lVar7 + 0x10) = local_e8;
              *(undefined8 *)(lVar7 + 0x38) = 0;
              *(undefined4 *)(lVar7 + 0x40) = 0;
              *(undefined8 *)(lVar7 + 0x18) = 0;
              *(undefined8 *)(lVar7 + 0x20) = 0;
              *(undefined8 *)(lVar7 + 0x44) = 0xffffffff00000080;
              *(undefined4 *)(lVar7 + 0x4c) = 0;
              *(undefined8 *)(lVar7 + 0x58) = 0;
              *(undefined4 *)(lVar7 + 0x60) = 0;
              FUN_140725242(lVar7 + 0x18);
              *(ulonglong *)(lVar7 + 0x68) = CONCAT71(uStack_8f,local_90);
              *(char *)(lVar7 + 0x90) = local_68;
              param_1 = local_120;
              if (local_68 == '\x01') {
                *(undefined8 *)(lVar7 + 0x80) = local_78;
                *(undefined8 *)(lVar7 + 0x88) = uStack_70;
                *(undefined8 *)(lVar7 + 0x70) = local_88;
                *(undefined8 *)(lVar7 + 0x78) = uStack_80;
              }
            }
          }
        }
        if (local_68 == '\x01') {
          local_68 = '\0';
        }
        local_98 = 0;
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(local_e0);
        cVar3 = (**(code **)(*param_2 + 0x38))(param_2);
      } while (cVar3 == '\0');
    }
    if ((0 < *(int *)(param_1 + 0x70)) || (0 < *(int *)(param_1 + 0x80))) {
      lVar7 = *(longlong *)(param_1 + 0x28);
      local_f8 = param_1;
      if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_120);
      }
      FUN_1405f6d44(lVar7 + 0x16c8,&local_f8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e504ee FUN_143e504ee body=1185 status=ok
// SIG undefined FUN_143e504ee(void)

void FUN_143e504ee(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong **pplVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_288 [40];
  longlong local_260;
  uint *local_258;
  longlong **local_250;
  uint local_248 [64];
  uint *local_148;
  int local_140;
  undefined4 local_13c;
  longlong *local_138 [8];
  longlong **local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [64];
  undefined1 *local_a8;
  ulonglong local_a0;
  longlong local_98 [8];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_148 = (uint *)0x0;
  iVar5 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  local_140 = iVar5;
  if ((longlong)iVar5 == 0) {
    local_13c = 0x10;
  }
  else {
    FUN_1418b246c(local_248,iVar5);
    puVar7 = local_148;
    if (local_148 == (uint *)0x0) {
      puVar7 = local_248;
    }
    memcpy(puVar7,_Src,(longlong)iVar5 << 4);
  }
  local_260 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_1489abc8a(local_260);
  }
  puVar7 = local_148;
  if (local_148 == (uint *)0x0) {
    puVar7 = local_248;
  }
  if ((longlong)local_140 != 0) {
    puVar12 = puVar7 + (longlong)local_140 * 4;
    local_258 = puVar12;
    do {
      if ((((*(longlong **)(puVar7 + 2) != (longlong *)0x0) && (puVar7[1] != 0)) &&
          (uVar6 = *puVar7, -1 < (int)uVar6)) &&
         ((((int)uVar6 < DAT_14c9647dc &&
           (lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar13 != 0)) &&
          ((*(uint *)(lVar13 + 0x10) == puVar7[1] && ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))))
         ) {
        lVar13 = (**(code **)(**(longlong **)(puVar7 + 2) + 0x50))();
        local_58 = (longlong *)0x0;
        local_50 = 0x400000000;
        local_a8 = (undefined1 *)0x0;
        local_a0 = 0x400000000;
        FUN_1401dfa9a(local_e8,lVar13 + 0x40);
        puVar9 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar9 = local_e8;
        }
        lVar15 = (longlong)(int)local_a0;
        if (lVar15 != 0) {
          lVar14 = 0;
          do {
            if (((char)(*(longlong **)(puVar9 + lVar14))[0x14] != '\0') ||
               (iVar5 = (**(code **)(**(longlong **)(puVar9 + lVar14) + 0x50))(), iVar5 == 1)) {
              uVar3 = local_50;
              lVar11 = (longlong)(int)local_50;
              uVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar6);
              if (local_50._4_4_ < uVar6) {
                FUN_1401dfb04(local_98,uVar3 & 0xffffffff);
              }
              plVar10 = local_58;
              if (local_58 == (longlong *)0x0) {
                plVar10 = local_98;
              }
              plVar10[lVar11 * 2] = *(longlong *)(puVar9 + lVar14);
              lVar1 = *(longlong *)(puVar9 + lVar14 + 8);
              plVar10[lVar11 * 2 + 1] = lVar1;
              if (lVar1 != 0) {
                LOCK();
                *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
                UNLOCK();
              }
            }
            lVar14 = lVar14 + 0x10;
          } while (lVar15 * 0x10 != lVar14);
          plVar10 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar10 = local_98;
          }
          if ((longlong)(int)local_50 != 0) {
            plVar16 = plVar10 + (longlong)(int)local_50 * 2;
            do {
              iVar5 = *(int *)(lVar13 + 0x58);
              *(uint *)(lVar13 + 0x58) = iVar5 + 1U;
              if (*(uint *)(lVar13 + 0x5c) < iVar5 + 1U) {
                FUN_1418b24f8((longlong *)(lVar13 + 0x50),iVar5);
              }
              lVar15 = *(longlong *)(lVar13 + 0x50);
              *(longlong *)(lVar15 + (longlong)iVar5 * 0x10) = *plVar10;
              lVar14 = plVar10[1];
              *(longlong *)(lVar15 + 8 + (longlong)iVar5 * 0x10) = lVar14;
              if (lVar14 != 0) {
                LOCK();
                *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
                UNLOCK();
              }
              local_138[0] = plVar10;
              FUN_1418b27c6(lVar13 + 0x40,local_138);
              plVar2 = (longlong *)*plVar10;
              if ((char)plVar2[0x14] == '\0') {
                (**(code **)(*plVar2 + 0x58))(plVar2,0);
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 != plVar16);
          }
        }
        local_f8 = (longlong **)0x0;
        local_f0 = 0x400000000;
        FUN_1401dfa9a(local_138,lVar13 + 0x50);
        pplVar8 = local_f8;
        if (local_f8 == (longlong **)0x0) {
          pplVar8 = local_138;
        }
        if ((longlong)(int)local_f0 != 0) {
          lVar15 = (longlong)(int)local_f0 << 4;
          do {
            plVar10 = *pplVar8;
            if (plVar10 != (longlong *)0x0) {
              if (*(byte *)(plVar10 + 0x14) < 2) {
                cVar4 = (**(code **)(*plVar10 + 0x60))();
                if (cVar4 == '\0') goto LAB_143e5084d;
                (**(code **)(**pplVar8 + 0x68))();
              }
              local_250 = pplVar8;
              FUN_1418b27c6(lVar13 + 0x50,&local_250);
            }
LAB_143e5084d:
            pplVar8 = pplVar8 + 2;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != 0);
        }
        FUN_140cbd738(lVar13);
        pplVar8 = local_f8;
        if (local_f8 == (longlong **)0x0) {
          pplVar8 = local_138;
        }
        FUN_144a07593(pplVar8,local_f0 & 0xffffffff);
        if (local_f8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        puVar9 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar9 = local_e8;
        }
        FUN_144a07593(puVar9,local_a0 & 0xffffffff);
        puVar12 = local_258;
        if (local_a8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        plVar10 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar10 = local_98;
        }
        FUN_144a07593(plVar10,local_50 & 0xffffffff);
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (((0 < *(int *)(lVar13 + 0x48)) || (0 < *(int *)(lVar13 + 0x20))) ||
           (0 < *(int *)(lVar13 + 0x58))) {
          FUN_144a8a564(local_260,puVar7);
        }
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar12);
  }
  if (local_148 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e509b2 FUN_143e509b2 body=237 status=ok
// SIG undefined FUN_143e509b2(void)

longlong FUN_143e509b2(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (param_1[1] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1[2];
    }
    local_98 = *param_1;
    local_90 = 0x100;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_8e = param_3;
    uVar3 = FUN_140725242(&local_88,param_4);
    local_38 = uVar2;
    lVar1 = FUN_140ce32d2(uVar3,param_2,&local_98);
    if (lVar1 == 0) {
      lVar1 = param_2;
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e50aa0 FUN_143e50aa0 body=55 status=ok
// SIG undefined FUN_143e50aa0(void)

undefined8 FUN_143e50aa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar2);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x10 != lVar2);
  }
  return 0;
}



// FUNCTION 143e50ad7 FUN_143e50ad7 body=169 status=ok
// SIG undefined FUN_143e50ad7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50ad7(void)

{
  _DAT_14cb8cd88 = 0;
  if (DAT_14cb8cd80 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb8cd48 = 0;
  if (DAT_14cb8cd4c != 0) {
    FUN_14472eb64(&DAT_14cb8cd40,0);
  }
  _DAT_14cb8cd70 = 0xffffffff;
  _DAT_14cb8cd68 = 0;
  if (0x80 < DAT_14cb8cd6c) {
    DAT_14cb8cd6c = 0x80;
    FUN_1446efbd8(&DAT_14cb8cd50,0);
  }
  if (DAT_14cb8cd60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8cd40 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e50b80 FUN_143e50b80 body=169 status=ok
// SIG undefined FUN_143e50b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50b80(void)

{
  _DAT_14cb8cdf8 = 0;
  if (DAT_14cb8cdf0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb8cdb8 = 0;
  if (DAT_14cb8cdbc != 0) {
    FUN_14472eb64(&DAT_14cb8cdb0,0);
  }
  _DAT_14cb8cde0 = 0xffffffff;
  _DAT_14cb8cdd8 = 0;
  if (0x80 < DAT_14cb8cddc) {
    DAT_14cb8cddc = 0x80;
    FUN_1446efbd8(&DAT_14cb8cdc0,0);
  }
  if (DAT_14cb8cdd0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8cdb0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e50c2a FUN_143e50c2a body=308 status=ok
// SIG undefined FUN_143e50c2a(void)

longlong FUN_143e50c2a(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_138 [40];
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = *(longlong **)(param_1 + 0x98);
  lVar3 = (**(code **)(*plVar1 + 0x58))(plVar1);
  if (lVar3 == 0) {
    lVar3 = FUN_140312a30(plVar1,param_2);
  }
  lVar4 = lVar3;
  if ((param_4 != '\0') && (cVar2 = FUN_1489a74a2(lVar3,param_3), cVar2 == '\0')) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0x1800000000;
    FUN_140312d42(*(undefined8 *)(param_1 + 0x38),local_110,0);
    puVar7 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar7 = local_110;
    }
    lVar6 = (longlong)(int)local_48;
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(puVar7 + lVar5);
        if ((lVar4 != lVar3) && (cVar2 = FUN_1489a74a2(lVar4,param_3), cVar2 != '\0'))
        goto LAB_143e50d4c;
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
      lVar4 = 0;
    }
LAB_143e50d4c:
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 143e50e10 FUN_143e50e10 body=104 status=ok
// SIG undefined FUN_143e50e10(void)

void FUN_143e50e10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if (lVar2 != 0) {
    plVar1 = (longlong *)param_1[0x13];
    lVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_3);
    if (lVar3 == 0) {
      lVar3 = FUN_140312a30(plVar1,param_3);
    }
    FUN_141022b78(lVar2,param_2,param_3,lVar3);
    return;
  }
  return;
}



// FUNCTION 143e50e78 FUN_143e50e78 body=237 status=ok
// SIG undefined FUN_143e50e78(void)

void FUN_143e50e78(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_29);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  plVar3 = param_1 + 0x1b;
  lVar4 = 0;
  do {
    lVar1 = param_1[lVar4 + 0xc3];
    if (lVar1 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      plVar3[3] = lVar1;
      param_1[lVar4 + 0xc3] = 0;
    }
    FUN_140b4fbe0(plVar3);
    FUN_140b4fd32(plVar3);
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 0x2a;
  } while (lVar4 != 4);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e50f66 FUN_143e50f66 body=109 status=ok
// SIG undefined FUN_143e50f66(void)

void FUN_143e50f66(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_4 + 0x58))(param_4,param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_140312a30(param_4,param_3);
  }
  lVar2 = 0xd8;
  do {
    FUN_141022b78(param_1 + lVar2,param_2,param_3,lVar1);
    lVar2 = lVar2 + 0x150;
  } while (lVar2 != 0x618);
  return;
}



// FUNCTION 143e50ff4 FUN_143e50ff4 body=265 status=ok
// SIG undefined FUN_143e50ff4(void)

void FUN_143e50ff4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar4 = FUN_1400439fc(param_1,0,&local_31);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar3 = param_1[0x1d];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x1c];
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x188 + lVar5);
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        *(longlong *)(lVar1 + 0x50 + lVar5) = lVar2;
        *(undefined8 *)(lVar1 + 0x188 + lVar5) = 0;
      }
      lVar2 = lVar1 + 0x38 + lVar5;
      FUN_140b4fbe0(lVar2);
      FUN_140b4fd32(lVar2);
      lVar5 = lVar5 + 400;
    } while ((longlong)(int)lVar3 * 400 - lVar5 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e510fe FUN_143e510fe body=132 status=ok
// SIG undefined FUN_143e510fe(void)

void FUN_143e510fe(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_4 + 0x58))(param_4,param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_140312a30(param_4,param_3);
  }
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xe8) * 400;
    lVar2 = *(longlong *)(param_1 + 0xe0) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,lVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143e51182 FUN_143e51182 body=237 status=ok
// SIG undefined FUN_143e51182(void)

void FUN_143e51182(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_29);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  plVar3 = param_1 + 0x1b;
  lVar4 = 0;
  do {
    lVar1 = param_1[lVar4 + 0xc4];
    if (lVar1 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      plVar3[3] = lVar1;
      param_1[lVar4 + 0xc4] = 0;
    }
    FUN_140b4fbe0(plVar3);
    FUN_140b4fd32(plVar3);
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 0x2a;
  } while (lVar4 != 4);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e51270 FUN_143e51270 body=109 status=ok
// SIG undefined FUN_143e51270(void)

void FUN_143e51270(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_4 + 0x58))(param_4,param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_140312a30(param_4,param_3);
  }
  lVar2 = 0xd8;
  do {
    FUN_141022b78(param_1 + lVar2,param_2,param_3,lVar1);
    lVar2 = lVar2 + 0x150;
  } while (lVar2 != 0x618);
  return;
}



// FUNCTION 143e5135e FUN_143e5135e body=116 status=ok
// SIG undefined FUN_143e5135e(void)

void FUN_143e5135e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140b4fb18();
  plVar3 = (longlong *)FUN_140995b6b(DAT_14c951640);
  *(byte *)((longlong)plVar3 + 0x66c) = *(byte *)((longlong)plVar3 + 0x66c) | 4;
  iVar1 = *(int *)(param_1 + 0x240);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x238);
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x18 + lVar4) != 0) {
        FUN_1400337aa();
        (**(code **)(*plVar3 + 0xa78))(plVar3,*(undefined8 *)(lVar2 + 0x18 + lVar4));
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 143e513d2 FUN_143e513d2 body=809 status=ok
// SIG undefined FUN_143e513d2(void)

undefined8 FUN_143e513d2(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double *pdVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar18;
  double dVar17;
  undefined1 auStack_e8 [40];
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined4 local_a8;
  char local_a4;
  undefined4 local_a0;
  char local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140880c0c();
  lVar1 = param_1 + 0x48;
  FUN_1405b019a(&local_a0,lVar1);
  FUN_14656251c(&local_70,lVar1);
  if (local_9c == '\x01') {
    uVar9 = 1;
    if ((local_58 & 1) != 0) {
      lVar10 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
      uVar15 = 0;
      uVar18 = 0;
      if (lVar10 != 0) {
        uVar15 = (undefined4)*(undefined8 *)(lVar10 + 0x6d0);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x6d0) >> 0x20);
      }
      *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uVar18,uVar15);
      *(undefined4 *)(param_1 + 0xe0) = local_a0;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
      if (lVar10 == 0) {
        puVar11 = &DAT_14c8464e0;
        uVar15 = (undefined4)DAT_14c8464f0;
        uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar15 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
        puVar11 = (undefined8 *)(lVar10 + 0x260);
      }
      uVar9 = puVar11[1];
      *(undefined8 *)(param_1 + 0xe8) = *puVar11;
      *(undefined8 *)(param_1 + 0xf0) = uVar9;
      *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uVar18,uVar15);
      *(undefined4 *)(param_1 + 0x100) = local_70;
      *(undefined4 *)(param_1 + 0x104) = uStack_6c;
      *(undefined4 *)(param_1 + 0x108) = uStack_68;
      *(undefined4 *)(param_1 + 0x10c) = uStack_64;
      *(undefined8 *)(param_1 + 0x110) = local_60;
      puVar14 = &local_a8;
      FUN_146562610(puVar14,lVar1);
      uVar15 = SUB84(puVar14,0);
      if (local_a4 == '\x01') {
        *(bool *)(param_1 + 0x118) = 0.0 < *(float *)(param_1 + 0xe0);
        if (0.0 < *(float *)(param_1 + 0xe0)) {
          *(undefined4 *)(param_1 + 0x120) = local_a8;
          dVar17 = *(double *)(param_1 + 0x38);
          lVar10 = *(longlong *)((longlong)dVar17 + 0x1c8);
          if (lVar10 == 0) {
            uVar15 = SUB84(DAT_14c846500,0);
            uVar18 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
          }
          else {
            dVar4 = *(double *)(lVar10 + 0x240);
            dVar5 = *(double *)(lVar10 + 0x248);
            dVar6 = *(double *)(lVar10 + 0x250);
            dVar7 = *(double *)(lVar10 + 600);
            pdVar12 = *(double **)(lVar10 + 0x228);
            local_98 = dVar4;
            uStack_90 = dVar5;
            local_88 = dVar6;
            dStack_80 = dVar7;
            if (pdVar12 == (double *)0x0) {
              uVar15 = 0x40;
              pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
              dVar17 = DAT_14c8463d8;
              *pdVar12 = DAT_14c8463d0;
              pdVar12[1] = dVar17;
              dVar17 = DAT_14c8463e8;
              pdVar12[2] = DAT_14c8463e0;
              pdVar12[3] = dVar17;
              dVar17 = DAT_14c846500;
              pdVar12[4] = DAT_14c8464f8;
              pdVar12[5] = dVar17;
              dVar17 = DAT_14c846508;
              pdVar12[6] = DAT_14c846508;
              *(double **)(lVar10 + 0x228) = pdVar12;
            }
            auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar12[1]);
            auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar12);
            auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar12[1]) >> 0x20);
            iVar8 = movmskpd(SUB84(dVar17,0),auVar2);
            auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar12[3]);
            auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar12[2]);
            auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar12[3]) >> 0x20);
            uVar13 = movmskpd(uVar15,auVar3);
            if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
              pdVar12[2] = local_88;
              pdVar12[3] = dStack_80;
              *(undefined4 *)pdVar12 = (undefined4)local_98;
              *(undefined4 *)((longlong)pdVar12 + 4) = local_98._4_4_;
              *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_90._4_4_;
              FUN_1448052ee(&local_98,&local_c0);
              pdVar12[6] = local_b0;
              pdVar12[4] = local_c0;
              pdVar12[5] = dStack_b8;
            }
            uVar15 = SUB84(pdVar12[5],0);
            uVar18 = (undefined4)((ulonglong)pdVar12[5] >> 0x20);
          }
          *(float *)(param_1 + 0x11c) = (float)(double)CONCAT44(uVar18,uVar15);
          FUN_1418b1792(&local_98,lVar1);
          if ((local_98._1_1_ != '\x01') || (fVar16 = 0.0, ((ulonglong)local_98 & 1) != 0)) {
            dVar17 = (double)FUN_144719204(SUB84((double)(*(float *)(param_1 + 0x120) -
                                                         *(float *)(param_1 + 0x11c)),0));
            dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                             (ulonglong)(dVar17 + 360.0) & -(ulonglong)(dVar17 < 0.0));
            fVar16 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                                        (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17))
                        ) / *(float *)(param_1 + 0xe0);
          }
          *(float *)(param_1 + 0x124) = fVar16;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x118) = 0;
      }
      FUN_1414f531a(param_1,1);
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 1;
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e516fc FUN_143e516fc body=886 status=ok
// SIG undefined FUN_143e516fc(void)

double FUN_143e516fc(longlong param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
  dVar9 = 4.94065645841247e-324;
  if (lVar8 == 0) goto LAB_143e519d8;
  if (*(double *)(lVar8 + 0x6d0) <= 0.0) goto LAB_143e519d8;
  lVar12 = *(longlong *)(param_1 + 0x38);
  fVar13 = *(float *)(lVar12 + 0x74);
  fVar17 = ((float)(*(double *)(lVar8 + 0x6d0) - *(double *)(param_1 + 0xd8)) * fVar13) /
           *(float *)(param_1 + 0xe0);
  if (1.0 <= fVar17) {
    fVar17 = 1.0;
  }
  fVar16 = fVar17;
  if (fVar17 <= 0.0) {
    fVar16 = 0.0;
  }
  dVar2 = (double)fVar16;
  local_c0 = (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8)) * dVar2 +
             *(double *)(param_1 + 0xf8);
  local_c8 = (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0)) * dVar2 +
             *(double *)(param_1 + 0xf0);
  local_d0 = (*(double *)(param_1 + 0x100) - *(double *)(param_1 + 0xe8)) * dVar2 +
             *(double *)(param_1 + 0xe8);
  lVar8 = *(longlong *)(lVar12 + 0x1c8);
  if (lVar8 == 0) {
    local_a8 = DAT_14c846508;
    local_b8 = (undefined4)DAT_14c8464f8;
    uStack_b4 = DAT_14c8464f8._4_4_;
    uStack_b0 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  }
  else {
    dVar2 = *(double *)(lVar8 + 0x240);
    dVar4 = *(double *)(lVar8 + 0x248);
    dVar5 = *(double *)(lVar8 + 0x250);
    dVar6 = *(double *)(lVar8 + 600);
    pdVar10 = *(double **)(lVar8 + 0x228);
    local_98 = dVar2;
    uStack_90 = dVar4;
    local_88 = dVar5;
    uStack_80 = dVar6;
    if (pdVar10 == (double *)0x0) {
      lVar12 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar8 + 0x228) = pdVar10;
    }
    auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar10[1]);
    auVar1._0_8_ = -(ulonglong)(dVar2 != *pdVar10);
    auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar10[1]) >> 0x20);
    iVar7 = movmskpd(SUB84(dVar9,0),auVar1);
    auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar10[3]);
    auVar3._0_8_ = -(ulonglong)(dVar5 != pdVar10[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd((int)lVar12,auVar3);
    if ((uVar11 & 0x3fffffff) != 0 || iVar7 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_88._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_80._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(&local_98,&local_b8);
      pdVar10[6] = local_a8;
      pdVar10[4] = (double)CONCAT44(uStack_b4,local_b8);
      pdVar10[5] = uStack_b0;
    }
    local_a8 = pdVar10[6];
    local_b8 = *(undefined4 *)(pdVar10 + 4);
    uStack_b4 = *(undefined4 *)((longlong)pdVar10 + 0x24);
    uStack_b0 = pdVar10[5];
    lVar12 = *(longlong *)(param_1 + 0x38);
  }
  lVar8 = FUN_1447210f0(lVar12);
  if ((lVar8 != 0) && (*(char *)(param_1 + 0x118) != '\0')) {
    FUN_1418b1792(&local_98,param_1 + 0x48);
    if (*(float *)(param_1 + 0x124) <= 0.0) {
      if (((local_98._1_1_ != '\x01') || (((ulonglong)local_98 & 1) != 0)) || (fVar16 < 1.0))
      goto LAB_143e519a5;
      fVar14 = *(float *)(param_1 + 0x120);
    }
    else {
      fVar14 = *(float *)(param_1 + 0x120);
      fVar15 = fVar14 - *(float *)(param_1 + 0x11c);
      if (1e-08 <= fVar15 * fVar15) {
        fVar13 = *(float *)(param_1 + 0x124) * fVar13 * *(float *)(lVar8 + 0x6f4);
        if (fVar13 <= fVar15) {
          fVar15 = fVar13;
        }
        if (fVar15 <= -fVar13) {
          fVar15 = -fVar13;
        }
        fVar14 = *(float *)(param_1 + 0x11c) + fVar15;
      }
      *(float *)(param_1 + 0x11c) = fVar14;
    }
    uStack_b0 = (double)fVar14;
  }
LAB_143e519a5:
  if (0.0 < fVar17) {
    local_d8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x4d0))
              (*(longlong **)(param_1 + 0x38),&local_d0,&local_b8,0);
  }
  dVar9 = (double)(ulonglong)(1.0 <= fVar16);
LAB_143e519d8:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return dVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e51a74 FUN_143e51a74 body=134 status=ok
// SIG undefined FUN_143e51a74(void)

void FUN_143e51a74(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_4 + 0x58))(param_4,param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_140312a30(param_4,param_3);
  }
  FUN_141022b78(param_1 + 0xd8,param_2,param_3,lVar1);
  FUN_141022b78(param_1 + 0x228,param_2,param_3,lVar1);
  FUN_141022b78(param_1 + 0x378,param_2,param_3,lVar1);
  return;
}



// FUNCTION 143e51afa FUN_143e51afa body=174 status=ok
// SIG undefined FUN_143e51afa(void)

void FUN_143e51afa(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_4 + 0x58))(param_4,param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_140312a30(param_4,param_3);
  }
  FUN_141022b78(param_1 + 0xd8,param_2,param_3,lVar1);
  FUN_141022b78(param_1 + 0x238,param_2,param_3,lVar1);
  if ((longlong)*(int *)(param_1 + 0x230) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x230) * 0x188;
    lVar2 = *(longlong *)(param_1 + 0x228) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,lVar1);
      lVar2 = lVar2 + 0x188;
      lVar3 = lVar3 + -0x188;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143e51ba8 FUN_143e51ba8 body=170 status=ok
// SIG undefined FUN_143e51ba8(void)

undefined8 * FUN_143e51ba8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  FUN_1403dcede(plVar1);
  if (*(int *)(param_1 + 0xe0) < 1) {
    if (*(int *)(param_1 + 0x230) < 1) {
      plVar1 = (longlong *)(param_1 + 0x238);
      FUN_1403dcede(plVar1);
      if (*(int *)(param_1 + 0x240) < 1) {
        puVar2 = &DAT_14cb8d430;
        goto LAB_143e51c38;
      }
      if (*(char *)(param_1 + 0x26c) == '\x01') {
        puVar2 = (undefined8 *)(param_1 + 0x264);
        goto LAB_143e51c38;
      }
      goto LAB_143e51c31;
    }
    lVar3 = *(longlong *)(param_1 + 0x228);
    if ((*(char *)(lVar3 + 0x6c) != '\0') || (*(int *)(lVar3 + 0x40) == 0)) {
      puVar2 = (undefined8 *)(lVar3 + 100);
      goto LAB_143e51c38;
    }
    lVar3 = *(longlong *)(lVar3 + 0x38);
  }
  else {
    if (*(char *)(param_1 + 0x10c) == '\x01') {
      puVar2 = (undefined8 *)(param_1 + 0x104);
      goto LAB_143e51c38;
    }
LAB_143e51c31:
    lVar3 = *plVar1;
  }
  puVar2 = (undefined8 *)(lVar3 + 0x28);
LAB_143e51c38:
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 143e51c52 FUN_143e51c52 body=211 status=ok
// SIG undefined FUN_143e51c52(void)

void FUN_143e51c52(longlong *param_1,longlong *param_2,longlong *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  
  lVar1 = *param_1;
  FUN_1403dcede(param_2);
  if ((longlong)(int)param_2[1] != 0) {
    plVar5 = (longlong *)(*param_2 + 4);
    lVar4 = 0;
    do {
      if (*plVar5 == *param_3) {
        lVar4 = *param_2 - lVar4;
        if (lVar4 == 0) {
          return;
        }
        lVar4 = lVar4 + 0x10;
        lVar2 = FUN_143e50c2a(lVar1,param_3,lVar4,*(undefined1 *)((longlong)plVar5 + 0xdd));
        if (((lVar2 == 0) ||
            ((plVar3 = *(longlong **)((longlong)plVar5 + 0x14), plVar3 == (longlong *)0x0 &&
             (plVar3 = (longlong *)FUN_1404dcd0c(lVar2 + 0x1288,lVar4), plVar3 == (longlong *)0x0)))
            ) && (plVar3 = *(longlong **)(lVar1 + 0x98),
                 plVar3 = (longlong *)(**(code **)(*plVar3 + 0x68))(plVar3,plVar5,lVar4),
                 plVar3 == (longlong *)0x0)) {
          return;
        }
        fVar6 = (float)(**(code **)(*plVar3 + 0x2b0))();
        *param_4 = fVar6 + *param_4;
        return;
      }
      plVar5 = plVar5 + 0x1e;
      lVar4 = lVar4 + -0xf0;
    } while ((longlong)(int)param_2[1] * -0xf0 - lVar4 != 0);
  }
  return;
}



// FUNCTION 143e51d5c FUN_143e51d5c body=97 status=ok
// SIG undefined FUN_143e51d5c(void)

void FUN_143e51d5c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xa8,0,0);
                    /* WARNING: Could not recover jumptable at 0x000143e51dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xd8,0,0);
  return;
}



// FUNCTION 143e51dbe FUN_143e51dbe body=951 status=ok
// SIG undefined FUN_143e51dbe(void)

double FUN_143e51dbe(longlong param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14087fa96();
  if (*(char *)(param_1 + 0xa0) == '\0') {
    do {
      cVar7 = FUN_14087fd2a(param_1);
    } while (cVar7 != '\0');
    cVar7 = *(char *)(param_1 + 0x120);
    dVar14 = (double)(ulonglong)(cVar7 == '\x04');
  }
  else {
    cVar7 = *(char *)(param_1 + 0x120);
    dVar14 = 4.94065645841247e-324;
  }
  dVar10 = dVar14;
  if ((cVar7 != '\x02') || (*(char *)(param_1 + 0x1c0) != '\x01')) goto LAB_143e5202d;
  lVar9 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
  dVar10 = 4.94065645841247e-324;
  if ((lVar9 == 0) || (*(double *)(lVar9 + 0x6d0) <= 0.0)) goto LAB_143e5202d;
  lVar13 = *(longlong *)(param_1 + 0x38);
  fVar15 = *(float *)(lVar13 + 0x74);
  fVar18 = ((float)(*(double *)(lVar9 + 0x6d0) - *(double *)(param_1 + 0x170)) * fVar15) /
           *(float *)(param_1 + 0x178);
  if (1.0 <= fVar18) {
    fVar18 = 1.0;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (*(char *)(param_1 + 0x120) == '\x02') {
    dVar2 = (double)fVar18;
    local_c0 = (*(double *)(param_1 + 0x1a8) - *(double *)(param_1 + 400)) * dVar2 +
               *(double *)(param_1 + 400);
    local_c8 = (*(double *)(param_1 + 0x1a0) - *(double *)(param_1 + 0x188)) * dVar2 +
               *(double *)(param_1 + 0x188);
    local_d0 = (*(double *)(param_1 + 0x198) - *(double *)(param_1 + 0x180)) * dVar2 +
               *(double *)(param_1 + 0x180);
    lVar9 = *(longlong *)(lVar13 + 0x1c8);
    if (lVar9 == 0) {
      local_a8 = DAT_14c846508;
      local_b8 = (undefined4)DAT_14c8464f8;
      uStack_b4 = DAT_14c8464f8._4_4_;
      uStack_b0 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    }
    else {
      dVar2 = *(double *)(lVar9 + 0x240);
      dVar4 = *(double *)(lVar9 + 0x248);
      dVar5 = *(double *)(lVar9 + 0x250);
      dVar6 = *(double *)(lVar9 + 600);
      pdVar11 = *(double **)(lVar9 + 0x228);
      local_98 = dVar2;
      uStack_90 = dVar4;
      local_88 = dVar5;
      uStack_80 = dVar6;
      if (pdVar11 == (double *)0x0) {
        lVar13 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar9 + 0x228) = pdVar11;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar11[1]);
      auVar1._0_8_ = -(ulonglong)(dVar2 != *pdVar11);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar11[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar10,0),auVar1);
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[3]);
      auVar3._0_8_ = -(ulonglong)(dVar5 != pdVar11[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[3]) >> 0x20);
      uVar12 = movmskpd((int)lVar13,auVar3);
      if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_88._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_80._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_98;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_98._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_90._4_4_;
        FUN_1448052ee(&local_98,&local_b8);
        pdVar11[6] = local_a8;
        pdVar11[4] = (double)CONCAT44(uStack_b4,local_b8);
        pdVar11[5] = uStack_b0;
      }
      local_a8 = pdVar11[6];
      local_b8 = *(undefined4 *)(pdVar11 + 4);
      uStack_b4 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_b0 = pdVar11[5];
      lVar13 = *(longlong *)(param_1 + 0x38);
    }
    lVar9 = FUN_1447210f0(lVar13);
    if ((lVar9 != 0) && (*(char *)(param_1 + 0x1b0) != '\0')) {
      FUN_1489a843c(&local_98,param_1 + 0x48);
      if (*(float *)(param_1 + 0x1bc) <= 0.0) {
        if (((local_98._1_1_ != '\x01') || (((ulonglong)local_98 & 1) != 0)) || (fVar18 < 1.0))
        goto LAB_143e51ffe;
        fVar16 = *(float *)(param_1 + 0x1b8);
      }
      else {
        fVar16 = *(float *)(param_1 + 0x1b8);
        fVar17 = fVar16 - *(float *)(param_1 + 0x1b4);
        if (1e-08 <= fVar17 * fVar17) {
          fVar15 = *(float *)(param_1 + 0x1bc) * fVar15 * *(float *)(lVar9 + 0x6f4);
          if (fVar15 <= fVar17) {
            fVar17 = fVar15;
          }
          if (fVar17 <= -fVar15) {
            fVar17 = -fVar15;
          }
          fVar16 = *(float *)(param_1 + 0x1b4) + fVar17;
        }
        *(float *)(param_1 + 0x1b4) = fVar16;
      }
      uStack_b0 = (double)fVar16;
    }
LAB_143e51ffe:
    local_d8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x4d0))
              (*(longlong **)(param_1 + 0x38),&local_d0,&local_b8,0);
  }
  *(bool *)(param_1 + 0x1c1) = 1.0 <= fVar18;
  dVar10 = dVar14;
LAB_143e5202d:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar10;
}



// FUNCTION 143e52176 FUN_143e52176 body=803 status=ok
// SIG undefined FUN_143e52176(void)

void FUN_143e52176(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double *pdVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar18;
  double dVar17;
  undefined1 auStack_e8 [40];
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined4 local_a8;
  char local_a4;
  undefined4 local_a0;
  char local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = param_1 + 0x48;
  FUN_1489a85a4(&local_a0,lVar1);
  FUN_1489a812a(&local_70,lVar1);
  if (((local_9c == '\x01') && (local_58 == '\x01')) && (*(char *)(param_1 + 0x120) == '\x02')) {
    lVar10 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
    uVar15 = 0;
    uVar18 = 0;
    if (lVar10 != 0) {
      uVar15 = (undefined4)*(undefined8 *)(lVar10 + 0x6d0);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x6d0) >> 0x20);
    }
    *(ulonglong *)(param_1 + 0x170) = CONCAT44(uVar18,uVar15);
    *(undefined4 *)(param_1 + 0x178) = local_a0;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
    if (lVar10 == 0) {
      puVar11 = &DAT_14c8464e0;
      uVar15 = (undefined4)DAT_14c8464f0;
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar15 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
      puVar11 = (undefined8 *)(lVar10 + 0x260);
    }
    uVar8 = puVar11[1];
    *(undefined8 *)(param_1 + 0x180) = *puVar11;
    *(undefined8 *)(param_1 + 0x188) = uVar8;
    *(ulonglong *)(param_1 + 400) = CONCAT44(uVar18,uVar15);
    *(undefined4 *)(param_1 + 0x198) = local_70;
    *(undefined4 *)(param_1 + 0x19c) = uStack_6c;
    *(undefined4 *)(param_1 + 0x1a0) = uStack_68;
    *(undefined4 *)(param_1 + 0x1a4) = uStack_64;
    *(undefined8 *)(param_1 + 0x1a8) = local_60;
    puVar14 = &local_a8;
    FUN_1489a82d4(puVar14,lVar1);
    uVar15 = SUB84(puVar14,0);
    if (local_a4 == '\x01') {
      *(bool *)(param_1 + 0x1b0) = 0.0 < *(float *)(param_1 + 0x178);
      if (0.0 < *(float *)(param_1 + 0x178)) {
        *(undefined4 *)(param_1 + 0x1b8) = local_a8;
        dVar17 = *(double *)(param_1 + 0x38);
        lVar10 = *(longlong *)((longlong)dVar17 + 0x1c8);
        if (lVar10 == 0) {
          uVar15 = SUB84(DAT_14c846500,0);
          uVar18 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
        }
        else {
          dVar4 = *(double *)(lVar10 + 0x240);
          dVar5 = *(double *)(lVar10 + 0x248);
          dVar6 = *(double *)(lVar10 + 0x250);
          dVar7 = *(double *)(lVar10 + 600);
          pdVar12 = *(double **)(lVar10 + 0x228);
          local_98 = dVar4;
          uStack_90 = dVar5;
          local_88 = dVar6;
          dStack_80 = dVar7;
          if (pdVar12 == (double *)0x0) {
            uVar15 = 0x40;
            pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
            dVar17 = DAT_14c8463d8;
            *pdVar12 = DAT_14c8463d0;
            pdVar12[1] = dVar17;
            dVar17 = DAT_14c8463e8;
            pdVar12[2] = DAT_14c8463e0;
            pdVar12[3] = dVar17;
            dVar17 = DAT_14c846500;
            pdVar12[4] = DAT_14c8464f8;
            pdVar12[5] = dVar17;
            dVar17 = DAT_14c846508;
            pdVar12[6] = DAT_14c846508;
            *(double **)(lVar10 + 0x228) = pdVar12;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar12[1]);
          auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar12);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar12[1]) >> 0x20);
          iVar9 = movmskpd(SUB84(dVar17,0),auVar2);
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar12[3]);
          auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar12[2]);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar12[3]) >> 0x20);
          uVar13 = movmskpd(uVar15,auVar3);
          if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
            pdVar12[2] = local_88;
            pdVar12[3] = dStack_80;
            *(undefined4 *)pdVar12 = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar12 + 4) = local_98._4_4_;
            *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_90._4_4_;
            FUN_1448052ee(&local_98,&local_c0);
            pdVar12[6] = local_b0;
            pdVar12[4] = local_c0;
            pdVar12[5] = dStack_b8;
          }
          uVar15 = SUB84(pdVar12[5],0);
          uVar18 = (undefined4)((ulonglong)pdVar12[5] >> 0x20);
        }
        *(float *)(param_1 + 0x1b4) = (float)(double)CONCAT44(uVar18,uVar15);
        FUN_1489a843c(&local_98,lVar1);
        if ((local_98._1_1_ != '\x01') || (fVar16 = 0.0, ((ulonglong)local_98 & 1) != 0)) {
          dVar17 = (double)FUN_144719204(SUB84((double)(*(float *)(param_1 + 0x1b8) -
                                                       *(float *)(param_1 + 0x1b4)),0));
          dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                           (ulonglong)(dVar17 + 360.0) & -(ulonglong)(dVar17 < 0.0));
          fVar16 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                                      (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17)))
                   / *(float *)(param_1 + 0x178);
        }
        *(float *)(param_1 + 0x1bc) = fVar16;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1b0) = 0;
    }
    FUN_1489a8978(param_1,1);
    *(undefined1 *)(param_1 + 0x1c0) = 1;
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5249c FUN_143e5249c body=97 status=ok
// SIG undefined FUN_143e5249c(void)

undefined8 * FUN_143e5249c(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140724c88();
  *param_1 = &PTR_FUN_14b431960;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar1 = FUN_1447210f0(param_1[7]);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = (undefined4)*(undefined8 *)(lVar1 + 0x6d0);
    uVar3 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x6d0) >> 0x20);
  }
  param_1[0x1b] = CONCAT44(uVar3,uVar2);
  param_1[0x1c] = CONCAT44(uVar3,uVar2);
  return param_1;
}



// FUNCTION 143e524fe FUN_143e524fe body=649 status=ok
// SIG undefined FUN_143e524fe(void)

undefined8 FUN_143e524fe(longlong param_1)

{
  float fVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *_Src;
  double dVar11;
  undefined1 auStack_78 [40];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03') {
    lVar6 = FUN_1447210f0();
    if (lVar6 == 0) {
      dVar11 = 0.0;
    }
    else {
      dVar11 = *(double *)(lVar6 + 0x6d0);
    }
    uVar7 = 1;
    if ((float)(dVar11 - *(double *)(param_1 + 0xd8)) <
        *(float *)(*(longlong *)(param_1 + 0xd0) + 0x98)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0xd0) + 0x9c);
      uVar7 = 0;
      if (fVar1 <= (float)(dVar11 - *(double *)(param_1 + 0xe0))) {
        *(double *)(param_1 + 0xe0) = *(double *)(param_1 + 0xe0) + (double)fVar1;
        if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
          uVar4 = (uint)((ulonglong)DAT_14cb8cf58 >> 0x10);
          uVar10 = (uint)DAT_14cb8cf58 & 0xffff;
          lVar6 = param_1 + 0x80;
          if (*(longlong *)(param_1 + 0x88) != 0) {
            lVar6 = *(longlong *)(param_1 + 0x88);
          }
          iVar5 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(param_1 + 0x90) - 1U &
                                   (int)((ulonglong)DAT_14cb8cf58 >> 0x20) +
                                   ((uint)DAT_14cb8cf58 << 0x10 | uVar10) +
                                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar5 != -1) {
            do {
              lVar6 = *(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38;
              if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38) ==
                  DAT_14cb8cf58) {
                if (lVar6 != 0) {
                  _Src = (undefined8 *)(lVar6 + 8);
                  bVar2 = *(byte *)(lVar6 + 0x28);
                  local_38 = *(ushort *)(lVar6 + 0x20);
                  if (local_38 < 0x19) {
                    ppppuVar8 = local_50;
                  }
                  else {
                    ppppuVar8 = (undefined8 ****)FUN_14001cc68(local_38,0);
                    _Src = (undefined8 *)*_Src;
                    local_50[0] = ppppuVar8;
                  }
                  uVar9 = (ulonglong)((uint)bVar2 * 0x120);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
                  if (pcVar3 == (code *)0x0) {
                    memcpy(ppppuVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
                  }
                  else {
                    (*pcVar3)(ppppuVar8,_Src);
                  }
                  local_30 = *(byte *)(lVar6 + 0x28);
                  goto LAB_143e5266d;
                }
                break;
              }
              iVar5 = *(int *)(lVar6 + 0x30);
            } while (iVar5 != -1);
          }
        }
        local_38 = 0;
        local_30 = 0;
LAB_143e5266d:
        iVar5 = FUN_14005fbd2(local_50,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar8 = local_50;
          if (0x18 < local_38) {
            ppppuVar8 = (undefined8 ****)local_50[0];
          }
          (*pcVar3)(ppppuVar8);
        }
        if (0x18 < local_38) {
          FUN_1400020a8(local_50[0]);
        }
        local_38 = 4;
        local_50[0] = (undefined8 ***)CONCAT44(local_50[0]._4_4_,iVar5 + 1);
        local_30 = 2;
        FUN_1408834b4(param_1,&DAT_14cb8cf58,local_50);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar8 = local_50;
          if (0x18 < local_38) {
            ppppuVar8 = (undefined8 ****)local_50[0];
          }
          (*pcVar3)(ppppuVar8);
        }
        if (0x18 < local_38) {
          FUN_1400020a8(local_50[0]);
        }
        uVar7 = 0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143e5278a FUN_143e5278a body=2295 status=ok
// SIG undefined FUN_143e5278a(void)

void FUN_143e5278a(longlong *param_1,char *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_4e8 [40];
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined1 local_410;
  undefined **local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined **local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined2 local_378;
  undefined4 local_374;
  undefined2 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  longlong *local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined2 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 *puStack_2a8;
  int local_2a0;
  uint local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined2 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  int local_70;
  undefined4 local_68;
  char local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  lVar7 = param_1[1];
  local_4c0 = 0;
  local_4b8 = 0x10;
  local_4b0 = 0;
  local_4a8 = 1;
  local_4a0 = 0;
  local_498 = 0xf00000d0;
  local_490 = 0;
  local_488 = 4;
  local_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0xf00000d0;
  local_440 = 0;
  local_438 = 0x3f800000;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_410 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_408 = &PTR_FUN_14b023b20;
  local_3f0 = &PTR_FUN_14b023b40;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = &PTR_FUN_14b00be70;
  local_3d0 = 0;
  local_3c8 = 0xf00000d0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b4 = 0;
  local_3b0 = 0;
  local_3ac = 1;
  local_3a8 = 0;
  local_3a0 = 0xf00000d0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0xf00000d0;
  local_380 = 0;
  local_378 = 0;
  local_374 = 0;
  local_370 = 0;
  local_36c = 6;
  local_368 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_360 = DAT_14c844840;
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
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0xf00000d0;
  local_300 = 0;
  local_2f8 = 0x3f800000;
  local_298 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  puStack_2a8 = (undefined8 *)0x0;
  local_2a0 = 0;
  local_290 = 0;
  local_288 = 0x10;
  local_280 = 0;
  local_278 = 1;
  local_270 = 0;
  local_268 = 0xf00000d0;
  local_260 = 0;
  local_258 = 4;
  local_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0xf00000d0;
  local_210 = 0;
  local_208 = 0x3f800000;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = &PTR_FUN_14b023b20;
  local_1c0 = &PTR_FUN_14b023b40;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = &PTR_FUN_14b00be70;
  local_1a0 = 0;
  local_198 = 0xf00000d0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 1;
  local_178 = 0;
  local_170 = 0xf00000d0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0xf00000d0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 6;
  local_138 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_130 = DAT_14c844840;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0xf00000d0;
  local_d0 = 0;
  local_c8 = 0x3f800000;
  local_68 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_4c = 0;
  local_50 = (uint)local_50._2_2_ << 0x10;
  local_60 = *param_2;
  if (local_60 == '\0') {
    local_298 = local_298 | 1;
    local_60 = '\0';
LAB_143e52c5b:
    local_50 = 0;
  }
  else {
    if (local_60 == '\x01') {
LAB_143e52c3d:
      local_68 = 1;
      goto LAB_143e52c5b;
    }
    if (local_60 == '\x02') {
      local_298 = local_298 | 1;
      goto LAB_143e52c3d;
    }
    if (local_60 != '\x03') goto LAB_143e52c5b;
  }
  local_58 = 0;
  local_5c = *(undefined4 *)(param_2 + 4);
  if (*(char *)(*param_1 + 8) == '\x01') {
    if (local_2a0 != 3) {
      FUN_1446efa72(&puStack_2a8,0,3,0x10);
      local_2a0 = 3;
    }
    puVar4 = puStack_2a8;
    *puStack_2a8 = &PTR_LAB_14b3e9b40;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puStack_2a8[2] = lVar3;
    *puStack_2a8 = &PTR_FUN_14b432500;
    puStack_2a8[3] = 0;
    if (lVar7 == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar7 + 0xc);
      *(uint *)(puStack_2a8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar2 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
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
        iVar2 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar2 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar2 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar2;
    puVar4[4] = FUN_1489a8dd4;
    *(undefined4 *)(puVar4 + 5) = 0;
    if (local_70 != 3) {
      FUN_1446efa72(&puStack_78,0,3,0x10);
      local_70 = 3;
    }
    puVar4 = puStack_78;
    *puStack_78 = &PTR_LAB_14b3e9b40;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puStack_78[2] = lVar3;
    *puStack_78 = &PTR_FUN_14b432500;
    puStack_78[3] = 0;
    if (lVar7 == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar7 + 0xc);
      *(uint *)(puStack_78 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar2;
    puVar4[4] = FUN_1489a8dd4;
    *(undefined4 *)(puVar4 + 5) = 0;
  }
  if (param_3 == '\0') {
    puVar4 = (undefined8 *)(param_1[2] + 0x10);
  }
  else {
    if (param_3 != '\x01') goto LAB_143e52e43;
    puVar4 = (undefined8 *)(param_1[2] + 0x490);
  }
  if (puVar4 != &local_4c0) {
    FUN_14007afac(puVar4,&local_4c0);
  }
LAB_143e52e43:
  FUN_144908ac8(&local_290);
  FUN_144908ac8(&local_4c0);
  if ((local_48 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e53082 FUN_143e53082 body=2054 status=ok
// SIG undefined FUN_143e53082(void)

void FUN_143e53082(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  code **ppcVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  int local_cc;
  longlong local_c8;
  longlong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  code *local_98;
  longlong lStack_90;
  wchar_t local_88 [24];
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1401c3c2c();
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    uVar22 = *(uint *)(lVar2 + 0x268);
    uVar15 = (ulonglong)uVar22;
    puVar13 = (uint *)(lVar2 + 0x250);
    if (uVar22 == 0) {
      uVar11 = 0;
      uVar12 = 1;
      uVar4 = 0;
      iVar20 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar2 + 0x260);
      if (*(uint **)(lVar2 + 0x260) == (uint *)0x0) {
        puVar6 = puVar13;
      }
      uVar4 = *puVar6;
      if (uVar4 == 0) {
        iVar20 = uVar22 + 0x1e;
        if (-1 < (int)(uVar22 - 1)) {
          iVar20 = uVar22 - 1;
        }
        uVar11 = 0;
        uVar12 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar12 = uVar11;
        }
        iVar20 = 0;
        do {
          if (uVar12 == uVar11) goto LAB_143e53142;
          iVar20 = iVar20 + 0x20;
          uVar4 = puVar6[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar11 = 0;
        iVar20 = 0;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar4 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar22 <= (int)uVar4) {
        uVar4 = uVar22;
      }
    }
    if (uVar4 != uVar22) {
      local_a8 = (longlong *)(param_1 + 0x660);
      uVar22 = 0xffffffff;
      local_c0 = param_1;
      local_b8 = puVar13;
      local_b0 = uVar15;
      do {
        lVar17 = *(longlong *)(*(longlong *)(lVar2 + 0x240) + (longlong)(int)uVar4 * 0x10);
        if (lVar17 != 0) {
          if (DAT_14cac6e60 == 0) {
            local_98 = FUN_144a7958c;
            local_e0 = FUN_14081d0ea;
            local_e8 = FUN_142b47bc4;
            local_f0 = &local_98;
            local_f8 = &LAB_1478989f1;
            local_100 = &LAB_146391124;
            local_108 = L"Engine";
            local_110 = 0x10000000000;
            local_118 = 0x10000005;
            local_120 = 0x10;
            local_128 = 0x620;
            local_cc = iVar20;
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            iVar20 = local_cc;
          }
          if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
            local_cc = iVar20;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb8d3f8) && (FUN_144b3d300(&DAT_14cb8d3f8), DAT_14cb8d3f8 == -1))
            {
              pwVar14 = L"NotifyActorComponentStartOverlap";
              ppcVar16 = &local_98;
              for (lVar18 = 8; lVar18 != 0; lVar18 = lVar18 + -1) {
                *ppcVar16 = *(code **)pwVar14;
                pwVar14 = pwVar14 + 4;
                ppcVar16 = ppcVar16 + 1;
              }
              local_58 = 0;
              FUN_1446f470e(&DAT_14cb8d3f0,&local_98,1);
              _Init_thread_footer(&DAT_14cb8d3f8);
            }
            lVar18 = DAT_14cb8d3f0;
            if (param_1 == 0) {
              uVar15 = 0;
              uVar4 = 0;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar21 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar21 = 0;
              }
              uVar5 = *(uint *)(lVar21 + 0x10);
              if (*(uint *)(lVar21 + 0x10) == 0) {
                LOCK();
                iVar20 = DAT_14c964868 + 1;
                UNLOCK();
                uVar19 = DAT_14c964868 + 1;
                bVar23 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar20;
                if (bVar23) {
                  local_c8 = DAT_14cb8d3f0;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                  lVar18 = local_c8;
                }
                LOCK();
                uVar5 = *(uint *)(lVar21 + 0x10);
                bVar23 = uVar5 == 0;
                if (bVar23) {
                  *(uint *)(lVar21 + 0x10) = uVar19;
                  uVar5 = 0;
                }
                UNLOCK();
                if (bVar23) {
                  uVar5 = uVar19;
                }
              }
              uVar15 = (ulonglong)uVar5;
              if (lVar18 == 0) {
                lVar18 = 0;
              }
              else if (uVar5 == 0) {
                uVar15 = 0;
              }
              else if ((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
                       (plVar7 = (longlong *)
                                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                       plVar7 != (longlong *)0x0)) &&
                      (((*(uint *)(plVar7 + 2) == uVar5 &&
                        ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
                FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),lVar18,1);
              }
            }
            FUN_140838726(lVar17 + 0x599,&local_a0);
            local_98 = (code *)((ulonglong)uVar4 | uVar15 << 0x20);
            lStack_90 = lVar18;
            bVar3 = FUN_140a28ca8(lVar17,local_a0,&local_98);
            *(byte *)(lVar17 + 0x599) = *(byte *)(lVar17 + 0x599) | bVar3;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb8d408) && (FUN_144b3d300(&DAT_14cb8d408), DAT_14cb8d408 == -1))
            {
              builtin_wcsncpy(local_88 + 8,L"nentEndOverlap",0xf);
              builtin_wcsncpy(local_88,L"torCompo",8);
              local_98 = (code *)0x690074006f004e;
              lStack_90 = 0x63004100790066;
              FUN_1446f470e(&DAT_14cb8d400,&local_98,1);
              _Init_thread_footer(&DAT_14cb8d408);
            }
            lVar18 = DAT_14cb8d400;
            if (local_c0 == 0) {
              uVar15 = 0;
              uVar4 = 0;
            }
            else {
              uVar4 = *(uint *)(local_c0 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar21 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar21 = 0;
              }
              uVar5 = *(uint *)(lVar21 + 0x10);
              if (*(uint *)(lVar21 + 0x10) == 0) {
                LOCK();
                iVar20 = DAT_14c964868 + 1;
                UNLOCK();
                uVar19 = DAT_14c964868 + 1;
                bVar23 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar20;
                if (bVar23) {
                  local_c8 = DAT_14cb8d400;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                  lVar18 = local_c8;
                }
                LOCK();
                uVar5 = *(uint *)(lVar21 + 0x10);
                bVar23 = uVar5 == 0;
                if (bVar23) {
                  *(uint *)(lVar21 + 0x10) = uVar19;
                  uVar5 = 0;
                }
                UNLOCK();
                if (bVar23) {
                  uVar5 = uVar19;
                }
              }
              uVar15 = (ulonglong)uVar5;
              if (lVar18 == 0) {
                lVar18 = 0;
              }
              else if (uVar5 == 0) {
                uVar15 = 0;
              }
              else if (((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
                        (plVar7 = (longlong *)
                                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                        plVar7 != (longlong *)0x0)) &&
                       ((*(uint *)(plVar7 + 2) == uVar5 &&
                        ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) && (*plVar7 != 0)) {
                FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),lVar18,1);
              }
            }
            FUN_140852908(lVar17 + 0x59a,&local_a0);
            local_98 = (code *)((ulonglong)uVar4 | uVar15 << 0x20);
            lStack_90 = lVar18;
            bVar3 = FUN_140a28ca8(lVar17,local_a0,&local_98);
            *(byte *)(lVar17 + 0x59a) = *(byte *)(lVar17 + 0x59a) | bVar3;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar17);
            }
            uVar15 = local_b0;
            param_1 = local_c0;
            iVar10 = *(int *)(local_c0 + 0x668);
            *(uint *)(local_c0 + 0x668) = iVar10 + 1U;
            if (*(uint *)(local_c0 + 0x66c) < iVar10 + 1U) {
              FUN_140e402be(local_a8,iVar10);
            }
            puVar13 = local_b8;
            iVar20 = local_cc;
            *(longlong *)(*local_a8 + (longlong)iVar10 * 8) = lVar17;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar17);
            }
          }
        }
        uVar22 = uVar22 & ~(uint)uVar12;
        puVar6 = *(uint **)(lVar2 + 0x260);
        if (*(uint **)(lVar2 + 0x260) == (uint *)0x0) {
          puVar6 = puVar13;
        }
        uVar5 = *(uint *)(lVar2 + 0x268);
        iVar10 = (int)uVar11;
        lVar17 = (longlong)iVar10;
        uVar4 = puVar6[lVar17] & uVar22;
        if (uVar4 == 0) {
          iVar8 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar8 = uVar5 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar10) {
            iVar9 = iVar10;
          }
          if (iVar10 < iVar8) {
            lVar18 = 0;
            do {
              uVar4 = puVar6[lVar17 + lVar18 + 1];
              if (uVar4 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar18 + 1);
                uVar22 = 0xffffffff;
                goto LAB_143e53558;
              }
              iVar20 = iVar20 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar17 != lVar18);
            uVar22 = 0xffffffff;
            iVar10 = iVar9;
          }
          uVar11 = (ulonglong)(iVar10 + 1);
          puVar13 = local_b8;
          uVar15 = local_b0;
          param_1 = local_c0;
          uVar4 = uVar5;
        }
        else {
LAB_143e53558:
          uVar12 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar12 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar4 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar4) {
            uVar4 = uVar5;
          }
        }
      } while (uVar4 != (uint)uVar15);
    }
  }
LAB_143e53142:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e538c2 FUN_143e538c2 body=41 status=ok
// SIG undefined FUN_143e538c2(void)

void FUN_143e538c2(void)

{
  DAT_14cb8cfe0 = 0;
  if (DAT_14cb8cfd8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68534();
  return;
}



// FUNCTION 143e53929 FUN_143e53929 body=41 status=ok
// SIG undefined FUN_143e53929(void)

void FUN_143e53929(void)

{
  DAT_14cb8d100 = 0;
  if (DAT_14cb8d0f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d685d2();
  return;
}



// FUNCTION 143e53957 FUN_143e53957 body=69 status=ok
// SIG undefined FUN_143e53957(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e53957(void)

{
  _DAT_14cb8d1a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e53999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8d1a8,1);
  return;
}



// FUNCTION 143e5399c FUN_143e5399c body=69 status=ok
// SIG undefined FUN_143e5399c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5399c(void)

{
  _DAT_14cb8d1b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e539de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8d1b8,1);
  return;
}



// FUNCTION 143e539e1 FUN_143e539e1 body=69 status=ok
// SIG undefined FUN_143e539e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e539e1(void)

{
  _DAT_14cb8d1c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e53a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8d1c8,1);
  return;
}



// FUNCTION 143e53a26 FUN_143e53a26 body=69 status=ok
// SIG undefined FUN_143e53a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e53a26(void)

{
  _DAT_14cb8d1d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e53a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8d1d8,1);
  return;
}



// FUNCTION 143e53a6b FUN_143e53a6b body=41 status=ok
// SIG undefined FUN_143e53a6b(void)

void FUN_143e53a6b(void)

{
  DAT_14cb8d278 = 0;
  if (DAT_14cb8d270 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68670();
  return;
}



// FUNCTION 143e53b7e FUN_143e53b7e body=198 status=ok
// SIG undefined FUN_143e53b7e(void)

undefined8 FUN_143e53b7e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*(longlong *)(param_1 + 0x20) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  uVar3 = FUN_140aa569c(param_2);
  lVar4 = FUN_140aa56e6(param_1,uVar3);
  if ((lVar4 != 0) && (cVar2 = FUN_14095026a(lVar4,lVar5), cVar2 == '\0')) {
    FUN_1407d853c(lVar4,lVar5);
    return 1;
  }
  return 0;
}



// FUNCTION 143e53c7e FUN_143e53c7e body=75 status=ok
// SIG undefined FUN_143e53c7e(void)

void FUN_143e53c7e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x30) != 0)) {
    local_10 = *(longlong *)(param_3 + 0x30);
    FUN_1407d8126();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e53cca FUN_143e53cca body=91 status=ok
// SIG undefined FUN_143e53cca(void)

void FUN_143e53cca(void)

{
  if (DAT_14cb8d3d0 != 0) {
    if (DAT_14cb8d3c8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8d3c8)(DAT_14cb8d3c8,0);
    FUN_1446efa72(&DAT_14cb8d3c8,0,0,0x10);
    DAT_14cb8d3d0 = 0;
  }
  if (DAT_14cb8d3c8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e53d5e FUN_143e53d5e body=12 status=ok
// SIG undefined FUN_143e53d5e(void)

void FUN_143e53d5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e53d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e53d6a FUN_143e53d6a body=29 status=ok
// SIG undefined FUN_143e53d6a(void)

undefined8 FUN_143e53d6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e53db6 FUN_143e53db6 body=12 status=ok
// SIG undefined FUN_143e53db6(void)

void FUN_143e53db6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e53dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e53dc2 FUN_143e53dc2 body=29 status=ok
// SIG undefined FUN_143e53dc2(void)

undefined8 FUN_143e53dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e53de0 FUN_143e53de0 body=106 status=ok
// SIG undefined FUN_143e53de0(void)

bool FUN_143e53de0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(*param_2 + 0x30);
  if ((char)plVar1[8] == '\x01') {
    local_20 = plVar1[7];
  }
  else {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20 == *(longlong *)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e53e6a FUN_143e53e6a body=12 status=ok
// SIG undefined FUN_143e53e6a(void)

void FUN_143e53e6a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e53e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e53e76 FUN_143e53e76 body=29 status=ok
// SIG undefined FUN_143e53e76(void)

undefined8 FUN_143e53e76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e53e94 FUN_143e53e94 body=152 status=ok
// SIG undefined FUN_143e53e94(void)

bool FUN_143e53e94(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(*param_1 + 0x30);
  if ((char)plVar1[8] == '\x01') {
    local_20 = plVar1[7];
  }
  else {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,&local_20);
  }
  if (local_20 == 0) {
    bVar4 = false;
  }
  else {
    lVar2 = *(longlong *)(*param_1 + 0x30);
    lVar3 = FUN_1412da528();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    bVar4 = true;
    if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
      bVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e53f31 FUN_143e53f31 body=31 status=ok
// SIG undefined FUN_143e53f31(void)

void FUN_143e53f31(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return;
}



// FUNCTION 143e53f50 FUN_143e53f50 body=73 status=ok
// SIG undefined FUN_143e53f50(void)

undefined8 * FUN_143e53f50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b433340;
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



// FUNCTION 143e53f9a FUN_143e53f9a body=896 status=ok
// SIG undefined FUN_143e53f9a(void)

void FUN_143e53f9a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined4 local_b4;
  undefined4 local_88;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar4 = *param_1;
  plVar6 = *(longlong **)(lVar4 + 0x38);
  if (*(char *)(*(longlong *)(lVar4 + 0x138) + 0x230) == '\x01') {
    FUN_1405e47c6(plVar6,0);
    FUN_14045627c(plVar6[0x39],0,2);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar5 = FUN_14072d970();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      FUN_14072d970();
      plVar7 = (longlong *)FUN_144718840(plVar6);
      if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
        lVar8 = FUN_1401f6e4a(*(longlong *)(lVar4 + 0x138) + 0x268);
        if (lVar8 != 0) {
          plVar6 = *(longlong **)(lVar4 + 0x38);
          lVar8 = plVar6[0x39];
          if (lVar8 == 0) {
            puVar9 = &DAT_14c8464e0;
            uVar12 = (undefined4)DAT_14c8464f0;
            uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar12 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
            puVar9 = (undefined8 *)(lVar8 + 0x260);
          }
          uVar5 = *puVar9;
          uVar11 = puVar9[1];
          memset(local_158,0,0x100);
          local_88 = 0xffffffff;
          local_154 = 0x3f800000;
          local_b4 = 0xffffffff;
          local_138 = CONCAT44(uVar13,uVar12);
          local_120 = CONCAT44(uVar13,uVar12);
          local_118 = DAT_14c8462c0;
          dStack_110 = DAT_14c8462c8;
          local_108 = DAT_14c8462d0;
          local_100 = DAT_14c8462c0;
          dStack_f8 = DAT_14c8462c8;
          local_f0 = DAT_14c8462d0;
          local_148 = uVar5;
          uStack_140 = uVar11;
          local_130 = uVar5;
          uStack_128 = uVar11;
          if (plVar6 != (longlong *)0x0) {
            if (DAT_14cacf818 == 0) {
              local_170 = &local_58;
              local_58 = FUN_141030f22;
              local_160 = FUN_14081d0ea;
              local_168 = &LAB_1463b216c;
              local_178 = &LAB_1479977e3;
              local_180 = &LAB_1463b2171;
              local_188 = &DAT_149e063b2;
              local_190 = 0;
              local_198 = 0x10000004;
              local_1a0 = 0x10;
              local_1a8 = 0x750;
              FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
            }
            if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) ==
                DAT_14cacf818 + 0x30)) {
              lVar8 = (**(code **)(*plVar6 + 0x638))(plVar6);
              if (lVar8 != 0) {
                lVar10 = FUN_140f27e30();
                if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                  dVar1 = *(double *)(lVar8 + 0x500);
                  dVar2 = *(double *)(lVar8 + 0x508);
                  dVar3 = *(double *)(lVar8 + 0x510);
                  if (((dVar1 != 0.0) || (((NAN(dVar1) || (dVar2 != 0.0)) || (NAN(dVar2))))) ||
                     ((dVar3 != 0.0 || (NAN(dVar3))))) {
                    local_118 = dVar1;
                    dStack_110 = dVar2;
                    local_108 = dVar3;
                    local_100 = dVar1;
                    dStack_f8 = dVar2;
                    local_f0 = dVar3;
                  }
                }
              }
            }
          }
          uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
          uVar12 = *(undefined4 *)(lVar4 + 0x130);
          uVar11 = FUN_1401f6e4a(*(longlong *)(lVar4 + 0x138) + 0x268);
          FUN_145a29e3a(uVar5,uVar11,local_158,uVar12);
        }
        uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_141412c80(uVar5,*(undefined1 *)(*(longlong *)(lVar4 + 0x138) + 0x230));
        FUN_140a8cb22(lVar4,plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_1c8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e54370 FUN_143e54370 body=12 status=ok
// SIG undefined FUN_143e54370(void)

void FUN_143e54370(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e54379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e5437c FUN_143e5437c body=83 status=ok
// SIG undefined FUN_143e5437c(void)

undefined8 * FUN_143e5437c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b432c90;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143e543d0 FUN_143e543d0 body=31 status=ok
// SIG undefined FUN_143e543d0(void)

undefined8 FUN_143e543d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e543fc FUN_143e543fc body=31 status=ok
// SIG undefined FUN_143e543fc(void)

undefined8 FUN_143e543fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e54428 FUN_143e54428 body=29 status=ok
// SIG undefined FUN_143e54428(void)

undefined8 FUN_143e54428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e545c4 FUN_143e545c4 body=93 status=ok
// SIG undefined FUN_143e545c4(void)

void FUN_143e545c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e54622 FUN_143e54622 body=93 status=ok
// SIG undefined FUN_143e54622(void)

void FUN_143e54622(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e54680 FUN_143e54680 body=126 status=ok
// SIG undefined FUN_143e54680(void)

void FUN_143e54680(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e546ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e54708 FUN_143e54708 body=266 status=ok
// SIG undefined FUN_143e54708(void)

undefined8 FUN_143e54708(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e5480c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e5480c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e5480c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e547c0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1458359cc(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143e547c0;
    }
  }
  uVar6 = 0;
LAB_143e547c0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e54814 FUN_143e54814 body=29 status=ok
// SIG undefined FUN_143e54814(void)

undefined8 FUN_143e54814(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e549b0 FUN_143e549b0 body=93 status=ok
// SIG undefined FUN_143e549b0(void)

void FUN_143e549b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e54a0e FUN_143e54a0e body=93 status=ok
// SIG undefined FUN_143e54a0e(void)

void FUN_143e54a0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e54a6c FUN_143e54a6c body=126 status=ok
// SIG undefined FUN_143e54a6c(void)

void FUN_143e54a6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b405f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e54adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e54af4 FUN_143e54af4 body=298 status=ok
// SIG undefined FUN_143e54af4(void)

undefined8 FUN_143e54af4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e54c17;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e54c17;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_143e54c17:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e54bc6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1418b1a34(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_143e54bc6;
    }
  }
  uVar6 = 0;
LAB_143e54bc6:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e54cc8 FUN_143e54cc8 body=29 status=ok
// SIG undefined FUN_143e54cc8(void)

undefined8 FUN_143e54cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e54e64 FUN_143e54e64 body=93 status=ok
// SIG undefined FUN_143e54e64(void)

void FUN_143e54e64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e54ec2 FUN_143e54ec2 body=93 status=ok
// SIG undefined FUN_143e54ec2(void)

void FUN_143e54ec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e54f20 FUN_143e54f20 body=126 status=ok
// SIG undefined FUN_143e54f20(void)

void FUN_143e54f20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b433160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e54f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e54faa FUN_143e54faa body=267 status=ok
// SIG undefined FUN_143e54faa(void)

undefined8 FUN_143e54faa(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e550af;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e550af;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e550af:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e55063;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
      uVar6 = 1;
      goto LAB_143e55063;
    }
  }
  uVar6 = 0;
LAB_143e55063:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e550b6 FUN_143e550b6 body=29 status=ok
// SIG undefined FUN_143e550b6(void)

undefined8 FUN_143e550b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e55252 FUN_143e55252 body=93 status=ok
// SIG undefined FUN_143e55252(void)

void FUN_143e55252(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b433240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4331d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e552b0 FUN_143e552b0 body=93 status=ok
// SIG undefined FUN_143e552b0(void)

void FUN_143e552b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b433240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4331d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e5530e FUN_143e5530e body=126 status=ok
// SIG undefined FUN_143e5530e(void)

void FUN_143e5530e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b433240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4331d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e5537d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e5539a FUN_143e5539a body=274 status=ok
// SIG undefined FUN_143e5539a(void)

undefined8 FUN_143e5539a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e554a6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e554a6;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e554a6:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e55459;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143e55459;
    }
  }
  uVar6 = 0;
LAB_143e55459:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e554b3 FUN_143e554b3 body=3451 status=ok
// SIG undefined FUN_143e554b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e554b3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8cb28 = (ulonglong)uVar2;
  DAT_14cb8cb50 = 0;
  DAT_14cb8cb58 = 0;
  DAT_14cb8cb30 = 0;
  _DAT_14cb8cb38 = 0;
  _DAT_14cb8cb5c = 0xffffffff00000080;
  _DAT_14cb8cb64 = 0;
  DAT_14cb8cb70 = 0;
  _DAT_14cb8cb78 = 0;
  atexit(FUN_143e4f820);
  FUN_1446f470e(&DAT_14cb8cb80,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cb8cb88,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cb8cb90,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cb8cb98,L"TimeOfDayForecastEvents",1);
  ram0x00014cb8cba4 = 0;
  FUN_14052b5e0(&DAT_14cb8cba0,"weather_layer",0);
  _DAT_14cb8cbb0 = "weather_layer";
  ram0x00014cb8cbbc = 0;
  FUN_14052b5e0(&DAT_14cb8cbb8,"time_of_day",0);
  _DAT_14cb8cbc8 = "time_of_day";
  ram0x00014cb8cbd4 = 0;
  FUN_14052b5e0(&DAT_14cb8cbd0,"weather_enabled",0);
  _DAT_14cb8cbe0 = "weather_enabled";
  DAT_14cb8cbe8 = 0;
  _DAT_14cb8cbf0 = 0;
  _DAT_14cb8cbf8 = 2;
  atexit(FUN_143e4fc42);
  DAT_14cb8cc00 = 0;
  DAT_14cb8cc08 = 0;
  atexit(FUN_143e4fc73);
  DAT_14cb8cc10 = 0;
  DAT_14cb8cc18 = 0;
  atexit(FUN_143e4fcce);
  _DAT_14cb8cc20 = 0x47efffffe0000000;
  _DAT_14cb8cc28 = 0x47efffffe0000000;
  _DAT_14cb8cc30 = 0x47efffffe0000000;
  _DAT_14cb8cc38 = 0x47efffffe0000000;
  _DAT_14cb8cc40 = 0x47efffffe0000000;
  DAT_14cb8cc48 = 0x47efffffe0000000;
  _DAT_14cb8cc50 = 0x47efffffe0000000;
  _DAT_14cb8cc58 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb8cc60);
  if (cVar1 == '\0') {
    _DAT_14cb8cc60 = 0;
    uRam000000014cb8cc68 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = "bone";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cb8cc80,L"Index",1);
  FUN_1446f470e(&DAT_14cb8cc88,L"PlayRate",1);
  FUN_1446f470e(&DAT_14cb8cc90,L"Duration",1);
  FUN_1446f470e(&DAT_14cb8cc98,L"StartTime",1);
  FUN_1446f470e(&DAT_14cb8cca0,L"PauseAtEnd",1);
  _DAT_14cb8ccb0 = 0;
  LOCK();
  DAT_14cb8cca8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e500b8);
  FUN_1446f470e(&DAT_14cb8ccb8,L"TricksChannel",1);
  FUN_1446f470e(&DAT_14cb8d438,L"Body3rd",1);
  FUN_1446f470e(&DAT_14cb8d440,L"Body1st",1);
  FUN_1446f470e(&DAT_14cb8d430,L"FullBody",1);
  local_b8 = 0;
  FUN_1412cc41e(&DAT_14cb8ccd0,L"FGbxTrickManager",0,0xffffffff);
  local_a8 = (char *)0xa9934a6786974e05;
  uStack_a0 = 0xac2d378a;
  uStack_9c = 0xe8cfd6e;
  _DAT_14cb8ccdc = 0x86974e05;
  uRam000000014cb8cce0 = 0xa9934a67;
  uRam000000014cb8cce4 = 0xac2d378a;
  uRam000000014cb8cce8 = 0xe8cfd6e;
  FUN_141005458(&local_a8,0,L"GbxTrickOptions",0);
  atexit((_func_5014 *)&LAB_143e50990);
  FUN_1446f470e(&local_a8,L"Trick",1);
  FUN_14598ad7a(&DAT_14cb8ccec,&local_a8,2);
  FUN_140056680(&DAT_14cb8cd08,L"GbxTrick");
  atexit((_func_5014 *)&LAB_143e5099c);
  _DAT_14cb8cd18 = 0xffffffff;
  _DAT_14cb8cd1c = 0;
  DAT_14cb8ccc8 = 0;
  LOCK();
  DAT_14cb8ccc0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e509ad);
  _DAT_14cb8cd20 = &DAT_14c872bc8;
  _DAT_14cb8cd28 = L"GbxTricks";
  FUN_1446f470e(&DAT_14cb8cd30,L"MeshTypes",1);
  DAT_14cb8cd38 = 0;
  DAT_14cb8cd60 = 0;
  _DAT_14cb8cd68 = 0;
  DAT_14cb8cd40 = 0;
  _DAT_14cb8cd48 = 0;
  _DAT_14cb8cd6c = 0xffffffff00000080;
  _DAT_14cb8cd74 = 0;
  DAT_14cb8cd80 = 0;
  _DAT_14cb8cd88 = 0;
  atexit(FUN_143e50ad7);
  _DAT_14cb8cd90 = &DAT_14c872bc8;
  _DAT_14cb8cd98 = L"GbxTricks";
  FUN_1446f470e(&DAT_14cb8cda0,L"CommonSlots",1);
  DAT_14cb8cda8 = 0;
  DAT_14cb8cdd0 = 0;
  _DAT_14cb8cdd8 = 0;
  DAT_14cb8cdb0 = 0;
  _DAT_14cb8cdb8 = 0;
  _DAT_14cb8cddc = 0xffffffff00000080;
  _DAT_14cb8cde4 = 0;
  DAT_14cb8cdf0 = 0;
  _DAT_14cb8cdf8 = 0;
  atexit(FUN_143e50b80);
  FUN_1446f470e(&DAT_14cb8ce00,L"BlendSpaceInput",1);
  FUN_1446f470e(&DAT_14cb8ce08,L"Direction",1);
  FUN_1446f470e(&DAT_14cb8ce10,L"Direction",1);
  FUN_1446f470e(&DAT_14cb8d410,L"DodgeDirection",1);
  FUN_140056680(&DAT_14cb8ce18,L"GoreStump_");
  atexit((_func_5014 *)&LAB_143e5131a);
  FUN_140056680(&DAT_14cb8ce28,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_143e5132b);
  FUN_140056680(&DAT_14cb8ce38,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_143e5133c);
  FUN_140056680(&DAT_14cb8ce48,L"GoreFX_");
  atexit((_func_5014 *)&LAB_143e5134d);
  FUN_1446f470e(&DAT_14cb8ce58,L"LIMB_GORED",1);
  _DAT_14cb8ce60 = 0x4072c00000000000;
  _DAT_14cb8ce68 = 0x4082c00000000000;
  FUN_145fa134c(&DAT_14cb8ce70,L"TriggerGib",4);
  FUN_1446f470e(&DAT_14cb8ce80,L"Force",1);
  FUN_1446f470e(&DAT_14cb8ce88,L"BoneName",1);
  FUN_1446f470e(&DAT_14cb8ce90,&DAT_14b43136e,1);
  FUN_1446f470e(&DAT_14cb8ce98,L"Interp",1);
  FUN_1446f470e(&DAT_14cb8cea0,L"TrickInterp",1);
  FUN_1446f470e(&DAT_14cb8d418,&DAT_14ad0b128,1);
  FUN_1446f470e(&DAT_14cb8cea8,L"RotateThroughoutTeleport",1);
  FUN_1446f470e(&DAT_14cb8ceb0,L"Location",1);
  FUN_1446f470e(&DAT_14cb8ceb8,L"Leap",1);
  FUN_1446f470e(&DAT_14cb8cec0,L"Extent",1);
  FUN_1446f470e(&DAT_14cb8cec8,L"GoalActor",1);
  FUN_1446f470e(&DAT_14cb8ced0,L"ServerGoal",1);
  FUN_1446f470e(&DAT_14cb8ced8,L"GoalLocation",1);
  FUN_1446f470e(&DAT_14cb8cee0,L"TrajectoryOptions",1);
  FUN_1446f470e(&DAT_14cb8cee8,L"Direction",1);
  FUN_1446f470e(&DAT_14cb8cef0,L"LoopTime",1);
  FUN_1446f470e(&DAT_14cb8cef8,L"LoopCount",1);
  FUN_1446f470e(&DAT_14cb8cf00,L"RandomSeed",1);
  FUN_1446f470e(&DAT_14cb8cf08,L"LoopCondition",1);
  FUN_1446f470e(&DAT_14cb8cf10,L"LoopInternalCondition",1);
  FUN_1446f470e(&DAT_14cb8cf18,L"StopLooping",1);
  FUN_1446f470e(&DAT_14cb8cf20,L"Force",1);
  FUN_1446f470e(&DAT_14cb8cf28,L"BoneName",1);
  FUN_1446f470e(&DAT_14cb8cf30,L"Ragdoll Trick",1);
  FUN_1446f470e(&DAT_14cb8cf38,L"Teleport",1);
  FUN_1446f470e(&DAT_14cb8cf40,L"TrickTeleport",1);
  FUN_1446f470e(&DAT_14cb8cf48,&DAT_14ad0b128,1);
  FUN_1446f470e(&DAT_14cb8cf50,L"RotateThroughoutTeleport",1);
  FUN_1446f470e(&DAT_14cb8d420,L"Location",1);
  FUN_1446f470e(&DAT_14cb8d428,L"TeleportDuration",1);
  FUN_1446f470e(&DAT_14cb8cf58,L"TestValue",1);
  FUN_1446f470e(&DAT_14cb8cf60,L"Trigger",1);
  local_a8 = "HasMissionGiver";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8cf68 = (ulonglong)uVar2;
  _DAT_14cb8cf78 = &LAB_143e53889;
  _DAT_14cb8cf80 = 0x46273400;
  DAT_14cb8cf84 = 1;
  DAT_14cb8cf70 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8cf70;
  atexit((_func_5014 *)&LAB_143e5388e);
  DAT_14cb8cff0 = 0;
  uRam000000014cb8cff8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e54c20;
  local_a8 = &DAT_14011fc1e;
  FUN_1461008ac(&local_a8);
  atexit((_func_5014 *)&LAB_143e538eb);
  _DAT_14cb8d098 = &LAB_143e538f0;
  _DAT_14cb8d0a0 = 0x4628c400;
  DAT_14cb8d0a4 = 1;
  DAT_14cb8d090 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d090;
  atexit((_func_5014 *)&LAB_143e538f5);
  DAT_14cb8d110 = 0;
  uRam000000014cb8d118 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e54cbe;
  local_a8 = &DAT_14011fc1e;
  FUN_146101042(&local_a8);
  atexit((_func_5014 *)&LAB_143e53952);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14cb8d1a0,L"gbx.ui.StandinUiLevel",&DAT_14c763a60,&DAT_149dfb77a);
  atexit(FUN_143e53957);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14cb8d1b0,L"gbx.ui.StandinUiScale",&DAT_14c763a64,&DAT_149dfb77a);
  atexit(FUN_143e5399c);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14cb8d1c0,L"gbx.ui.StandinLdrCurve",&DAT_14c763a68,&DAT_149dfb77a);
  atexit(FUN_143e539e1);
  local_b8 = 0x20;
  FUN_14153156c(&DAT_14cb8d1d0,L"gbx.ui.StandinUseMaterialComp",&DAT_14c763a6c,&DAT_149dfb77a);
  atexit(FUN_143e53a26);
  FUN_1446f470e(&DAT_14cb8d1e0,L"FGbxSceneViewerProviderInstanceOverrideScreenPercentageTagName",1);
  DAT_14cb8d288 = 0;
  _DAT_14cb8d290 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e554ae;
  local_a8 = &DAT_14011fc1e;
  FUN_1461017d8(&local_a8);
  atexit((_func_5014 *)&LAB_143e53a94);
  _DAT_14cb8d328 = &LAB_143e53a99;
  _DAT_14cb8d330 = 0x44434666;
  DAT_14cb8d334 = 1;
  DAT_14cb8d320 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d320;
  atexit((_func_5014 *)&LAB_143e53a9e);
  _DAT_14cb8d348 = &LAB_143e53ad2;
  _DAT_14cb8d350 = 0x44434ccd;
  DAT_14cb8d354 = 1;
  DAT_14cb8d340 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d340;
  atexit((_func_5014 *)&LAB_143e53ad7);
  _DAT_14cb8d368 = &LAB_143e53b0b;
  _DAT_14cb8d370 = 0x439c0000;
  DAT_14cb8d374 = 1;
  DAT_14cb8d360 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d360;
  atexit((_func_5014 *)&LAB_143e53b10);
  _DAT_14cb8d388 = &LAB_143e53b44;
  _DAT_14cb8d390 = 0x439a0000;
  DAT_14cb8d394 = 1;
  DAT_14cb8d380 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d380;
  atexit((_func_5014 *)&LAB_143e53b49);
  local_a8 = "nexus";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8d3a0 = (ulonglong)uVar2;
  _DAT_14cb8d3b0 = &LAB_143e53c44;
  _DAT_14cb8d3b8 = 0x42de3852;
  DAT_14cb8d3bc = 1;
  DAT_14cb8d3a8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d3a8;
  atexit((_func_5014 *)&LAB_143e53c49);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e56230 FUN_143e56230 body=41 status=ok
// SIG undefined FUN_143e56230(void)

void FUN_143e56230(void)

{
  DAT_14cb8d4a0 = 0;
  if (DAT_14cb8d498 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6870e();
  return;
}



// FUNCTION 143e5625a FUN_143e5625a body=44 status=ok
// SIG undefined FUN_143e5625a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5625a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8d4bc = _DAT_14cb8d4bc + -1;
  *param_1 = DAT_14cb8d4b0;
  DAT_14cb8d4b0 = param_1;
  return;
}



// FUNCTION 143e5628b FUN_143e5628b body=41 status=ok
// SIG undefined FUN_143e5628b(void)

void FUN_143e5628b(void)

{
  DAT_14cb8d590 = 0;
  if (DAT_14cb8d588 != 0) {
    FUN_1400020a8();
  }
  FUN_145d687ac();
  return;
}



// FUNCTION 143e562b4 FUN_143e562b4 body=99 status=ok
// SIG undefined FUN_143e562b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e562b4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb8d5a0;
  if (DAT_14cb8d5a0 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x700,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0xe;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb8d5a0;
    _DAT_14cb8d5a8 = _DAT_14cb8d5a8 + 0x10;
  }
  DAT_14cb8d5a0 = (undefined8 *)*puVar2;
  _DAT_14cb8d5ac = _DAT_14cb8d5ac + 1;
  return;
}



// FUNCTION 143e56360 FUN_143e56360 body=7 status=ok
// SIG undefined FUN_143e56360(void)

void FUN_143e56360(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x458) = *(uint *)(param_1 + 0x458) | param_2;
  return;
}



// FUNCTION 143e56368 FUN_143e56368 body=49 status=ok
// SIG undefined FUN_143e56368(void)

void FUN_143e56368(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x460) = param_2;
  if (param_2 != '\x03') {
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    if (param_2 == '\0') {
      *(undefined4 *)(param_1 + 0x464) = 0;
    }
  }
  return;
}



// FUNCTION 143e56444 FUN_143e56444 body=41 status=ok
// SIG undefined FUN_143e56444(void)

void FUN_143e56444(void)

{
  DAT_14cb8d830 = 0;
  if (DAT_14cb8d828 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6884a();
  return;
}



// FUNCTION 143e5648a FUN_143e5648a body=41 status=ok
// SIG undefined FUN_143e5648a(void)

void FUN_143e5648a(void)

{
  DAT_14cb8d9e0 = 0;
  if (DAT_14cb8d9d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d688e8();
  return;
}



// FUNCTION 143e564f2 FUN_143e564f2 body=76 status=ok
// SIG undefined FUN_143e564f2(void)

longlong FUN_143e564f2(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    lVar3 = 0x488;
    lVar2 = 0x10;
  }
  else {
    if (param_2 != '\x01') {
      if (param_2 != '\x02') {
        return 0;
      }
      if (*(char *)(param_1 + 0x488) != '\0') {
        return param_1 + 0x10;
      }
    }
    lVar3 = 0x908;
    lVar2 = 0x490;
  }
  lVar1 = 0;
  if (*(char *)(param_1 + lVar3) != '\0') {
    lVar1 = lVar2 + param_1;
  }
  return lVar1;
}



// FUNCTION 143e56542 FUN_143e56542 body=7 status=ok
// SIG undefined FUN_143e56542(void)

undefined1 FUN_143e56542(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



// FUNCTION 143e5654a FUN_143e5654a body=19 status=ok
// SIG undefined FUN_143e5654a(void)

longlong FUN_143e5654a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  return lVar1 + 0x70;
}



// FUNCTION 143e5655d FUN_143e5655d body=69 status=ok
// SIG undefined FUN_143e5655d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5655d(void)

{
  _DAT_14cb8daa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5659f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8dab0,1);
  return;
}



// FUNCTION 143e565a2 FUN_143e565a2 body=266 status=ok
// SIG undefined FUN_143e565a2(void)

void FUN_143e565a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_141245f18();
  lVar1 = *(longlong *)(param_1 + 0x1ac0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x1ac0) = 0;
    FUN_1409c1d1e(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      uVar3 = 0;
      uVar4 = 0x42a00000;
    }
    else {
      uVar3 = (undefined4)
              *(undefined8 *)
               (&DAT_14b433430 +
               (ulonglong)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0) == 0) * 8);
      uVar4 = (undefined4)
              ((ulonglong)
               *(undefined8 *)
                (&DAT_14b433430 +
                (ulonglong)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0) == 0) * 8) >> 0x20)
      ;
    }
    *(ulonglong *)(param_1 + 0x1ab8) = CONCAT44(uVar4,uVar3);
    puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[6] = CONCAT44(uVar4,uVar3) ^ 0x8000000000000000;
    puVar2[7] = CONCAT44(uVar4,uVar3) ^ 0x8000000000000000;
    puVar2[8] = CONCAT44(uVar4,uVar3);
    puVar2[9] = CONCAT44(uVar4,uVar3);
    *(undefined1 *)(puVar2 + 10) = 1;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0x42c80000;
    *(undefined1 *)((longlong)puVar2 + 0x6c) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    lVar1 = *(longlong *)(param_1 + 0x1ac0);
    *(undefined8 **)(param_1 + 0x1ac0) = puVar2;
    if (lVar1 != 0) {
      FUN_1409c1d1e(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143e566ac FUN_143e566ac body=2329 status=ok
// SIG undefined FUN_143e566ac(void)

void FUN_143e566ac(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_8f8 [32];
  undefined4 local_8d8;
  undefined4 local_8d0;
  undefined4 local_8c8;
  undefined8 local_8c0;
  wchar_t *local_8b8;
  code *local_8b0;
  undefined1 *local_8a8;
  code **local_8a0;
  code *local_898;
  code *local_890;
  longlong *local_888;
  uint *local_880;
  longlong local_878;
  uint *local_870;
  longlong local_868;
  code *local_860;
  undefined1 local_858 [32];
  undefined1 *local_838;
  undefined8 local_830;
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x10000000000;
  iVar2 = *(int *)(param_1 + 0x28);
  local_888 = param_2;
  if ((longlong)iVar2 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x20);
    lVar17 = 0;
    do {
      uVar13 = local_50;
      uVar8 = *(undefined8 *)(lVar15 + lVar17);
      lVar19 = (longlong)(int)local_50;
      uVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar3);
      if (local_50._4_4_ < uVar3) {
        FUN_145882b44(local_858,uVar13 & 0xffffffff);
      }
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_858;
      }
      *(undefined8 *)(puVar6 + lVar19 * 8) = uVar8;
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar2 * 8 != lVar17);
  }
  puVar16 = (uint *)(param_1 + 0x1850);
  iVar2 = *(int *)(param_1 + 0x1878);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar18 = 0;
    iVar14 = 0;
    iVar12 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x1870);
    if (*(uint **)(param_1 + 0x1870) == (uint *)0x0) {
      puVar11 = puVar16;
    }
    uVar3 = *puVar11;
    uVar18 = 0;
    iVar14 = 0;
    if (uVar3 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar13 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar13 = uVar18;
      }
      do {
        if (uVar13 == uVar18) goto LAB_143e5693c;
        iVar14 = iVar14 + 0x20;
        uVar3 = puVar11[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar3 == 0);
    }
    uVar13 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar12 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 < iVar2) {
    local_878 = param_1 + 0x40;
    uVar3 = 0xffffffff;
    local_880 = puVar16;
    do {
      uVar1 = local_50;
      lVar15 = *(longlong *)(param_1 + 0x1840);
      if (*(longlong *)(param_1 + 0x1840) == 0) {
        lVar15 = local_878;
      }
      lVar17 = (longlong)(int)local_50;
      uVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      if (local_50._4_4_ < uVar4) {
        FUN_145882b44(local_858,uVar1 & 0xffffffff);
        puVar16 = local_880;
      }
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_858;
      }
      *(undefined8 *)(puVar6 + lVar17 * 8) = *(undefined8 *)(lVar15 + (longlong)iVar12 * 0x18);
      uVar3 = uVar3 & ~(uint)uVar13;
      puVar11 = *(uint **)(param_1 + 0x1870);
      if (*(uint **)(param_1 + 0x1870) == (uint *)0x0) {
        puVar11 = puVar16;
      }
      iVar2 = *(int *)(param_1 + 0x1878);
      iVar12 = (int)uVar18;
      lVar15 = (longlong)iVar12;
      uVar4 = puVar11[lVar15] & uVar3;
      if (uVar4 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar9 = iVar10;
        if (iVar10 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar10 <= iVar12) break;
        lVar17 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar4 = puVar11[lVar15 + lVar17 + 1];
          if (uVar4 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar9 - lVar15 == lVar17) goto LAB_143e5693c;
        }
        uVar18 = (ulonglong)(iVar12 + (int)lVar17 + 1);
        uVar3 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar2);
  }
LAB_143e5693c:
  uVar13 = local_50;
  if (-1 < (int)local_50) {
    plVar20 = (longlong *)(param_1 + 0x1bb0);
    *(undefined4 *)(param_1 + 0x23b8) = 0;
    if (*(int *)(param_1 + 0x23bc) < (int)local_50) {
      FUN_145db43ee(plVar20);
    }
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_858;
    }
    if ((int)local_50 != 0) {
      lVar17 = (longlong)(int)local_50;
      lVar15 = 0;
      do {
        lVar19 = (**(code **)(**(longlong **)(puVar6 + lVar15) + 8))();
        if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar19);
        }
        iVar2 = *(int *)(param_1 + 0x23b8);
        *(uint *)(param_1 + 0x23b8) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x23bc) < iVar2 + 1U) {
          FUN_1489b27c4(plVar20,iVar2);
        }
        plVar5 = *(longlong **)(param_1 + 0x23b0);
        if (*(longlong **)(param_1 + 0x23b0) == (longlong *)0x0) {
          plVar5 = plVar20;
        }
        plVar5[iVar2] = lVar19;
        if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar19);
        }
        lVar15 = lVar15 + 8;
      } while (lVar17 * 8 != lVar15);
    }
    plVar5 = local_888;
    lVar15 = param_1 + -0x20;
    if (*(longlong **)(param_1 + 0x23b0) != (longlong *)0x0) {
      plVar20 = *(longlong **)(param_1 + 0x23b0);
    }
    if ((longlong)*(int *)(param_1 + 0x23b8) != 0) {
      plVar7 = plVar20 + *(int *)(param_1 + 0x23b8);
      do {
        lVar17 = *plVar20;
        if (lVar17 != 0) {
          if (DAT_14cb6f900 == 0) {
            local_860 = FUN_1449e2820;
            local_890 = FUN_14081d0ea;
            local_898 = FUN_1427b09ee;
            local_8a0 = &local_860;
            local_8a8 = &LAB_1487a9c57;
            local_8b0 = FUN_146541d03;
            local_8b8 = L"Engine";
            local_8c0 = 0;
            local_8c8 = 0x10004001;
            local_8d0 = 8;
            local_8d8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900);
          }
          lVar17 = FUN_144718840(lVar17,DAT_14cb6f900);
          (**(code **)(*plVar5 + 0x88))(plVar5,plVar20,0);
          if (*plVar20 == 0) {
            if ((longlong)*(int *)(param_1 + 0x38) != 0) {
              lVar19 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19) == lVar17)
                goto LAB_143e56aaa;
                lVar19 = lVar19 + 8;
              } while ((longlong)*(int *)(param_1 + 0x38) * 8 != lVar19);
            }
            FUN_140b3bb3e(lVar15,lVar17);
          }
        }
LAB_143e56aaa:
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar7);
    }
    local_878 = lVar15;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_838 = (undefined1 *)0x0;
    local_830 = 0x400000000;
    lVar15 = param_1 + 0x1aa8;
    if (*(longlong *)(param_1 + 0x1ac8) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x1ac8);
    }
    iVar2 = *(int *)(param_1 + 0x1ad0);
    if ((longlong)iVar2 != 0) {
      lVar17 = 0;
      do {
        uVar13 = local_830;
        uVar8 = *(undefined8 *)(lVar15 + lVar17);
        lVar19 = (longlong)(int)local_830;
        uVar3 = (int)local_830 + 1;
        local_830 = CONCAT44(local_830._4_4_,uVar3);
        if (local_830._4_4_ < uVar3) {
          FUN_1489b2842(local_858,uVar13 & 0xffffffff);
        }
        puVar6 = local_838;
        if (local_838 == (undefined1 *)0x0) {
          puVar6 = local_858;
        }
        *(undefined8 *)(puVar6 + lVar19 * 8) = uVar8;
        lVar17 = lVar17 + 8;
      } while ((longlong)iVar2 * 8 != lVar17);
    }
    puVar16 = (uint *)(param_1 + 0x1b78);
    iVar2 = *(int *)(param_1 + 0x1b88);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar18 = 0;
      iVar14 = 0;
      iVar12 = 0;
    }
    else {
      puVar11 = *(uint **)(param_1 + 0x1b80);
      if (*(uint **)(param_1 + 0x1b80) == (uint *)0x0) {
        puVar11 = puVar16;
      }
      uVar3 = *puVar11;
      if (uVar3 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        uVar18 = 0;
        uVar13 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar13 = uVar18;
        }
        iVar12 = 0;
        do {
          if (uVar13 == uVar18) goto LAB_143e56e01;
          iVar12 = iVar12 + 0x20;
          uVar3 = puVar11[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar18 = 0;
        iVar12 = 0;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar14) {
        iVar14 = iVar2;
      }
    }
    if (iVar14 < iVar2) {
      local_868 = param_1 + 0x1b08;
      uVar3 = 0xffffffff;
      do {
        uVar1 = local_830;
        local_880 = (uint *)CONCAT44(local_880._4_4_,iVar12);
        lVar15 = *(longlong *)(param_1 + 0x1b68);
        if (*(longlong *)(param_1 + 0x1b68) == 0) {
          lVar15 = local_868;
        }
        lVar17 = (longlong)(int)local_830;
        uVar4 = (int)local_830 + 1;
        local_830 = CONCAT44(local_830._4_4_,uVar4);
        if (local_830._4_4_ < uVar4) {
          local_870 = puVar16;
          FUN_1489b2842(local_858,uVar1 & 0xffffffff);
          puVar16 = local_870;
        }
        puVar6 = local_838;
        if (local_838 == (undefined1 *)0x0) {
          puVar6 = local_858;
        }
        *(undefined8 *)(puVar6 + lVar17 * 8) = *(undefined8 *)(lVar15 + (longlong)iVar14 * 0x18);
        uVar3 = uVar3 & ~(uint)uVar13;
        puVar11 = *(uint **)(param_1 + 0x1b80);
        if (*(uint **)(param_1 + 0x1b80) == (uint *)0x0) {
          puVar11 = puVar16;
        }
        iVar2 = *(int *)(param_1 + 0x1b88);
        iVar14 = (int)uVar18;
        lVar15 = (longlong)iVar14;
        uVar4 = puVar11[lVar15] & uVar3;
        iVar12 = (int)local_880;
        if (uVar4 == 0) {
          iVar10 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar10 = iVar2 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar9 = iVar10;
          if (iVar10 < iVar14) {
            iVar9 = iVar14;
          }
          if (iVar10 <= iVar14) break;
          lVar17 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = puVar11[lVar15 + lVar17 + 1];
            if (uVar4 != 0) break;
            lVar17 = lVar17 + 1;
            if (iVar9 - lVar15 == lVar17) goto LAB_143e56e01;
          }
          uVar18 = (ulonglong)(iVar14 + (int)lVar17 + 1);
          uVar3 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar14 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar14 < iVar2);
    }
LAB_143e56e01:
    plVar20 = local_888;
    uVar13 = local_830;
    if (-1 < (int)local_830) {
      plVar5 = (longlong *)(param_1 + 0x23c0);
      *(undefined4 *)(param_1 + 0x23e8) = 0;
      if (*(int *)(param_1 + 0x23ec) < (int)local_830) {
        FUN_146f6394a(plVar5);
      }
      puVar6 = local_858;
      if (local_838 != (undefined1 *)0x0) {
        puVar6 = local_838;
      }
      if ((int)local_830 != 0) {
        lVar17 = (longlong)(int)local_830;
        lVar15 = 0;
        do {
          lVar19 = (**(code **)(**(longlong **)(puVar6 + lVar15) + 0x18))();
          if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar19);
          }
          iVar2 = *(int *)(param_1 + 0x23e8);
          *(uint *)(param_1 + 0x23e8) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x23ec) < iVar2 + 1U) {
            FUN_146f69916(plVar5,iVar2);
          }
          plVar7 = *(longlong **)(param_1 + 0x23e0);
          if (*(longlong **)(param_1 + 0x23e0) == (longlong *)0x0) {
            plVar7 = plVar5;
          }
          plVar7[iVar2] = lVar19;
          if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar19);
          }
          lVar15 = lVar15 + 8;
        } while (lVar17 * 8 != lVar15);
      }
      if (*(longlong **)(param_1 + 0x23e0) != (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x23e0);
      }
      if ((longlong)*(int *)(param_1 + 0x23e8) != 0) {
        lVar15 = (longlong)*(int *)(param_1 + 0x23e8) << 3;
        do {
          lVar17 = *plVar5;
          uVar8 = FUN_1413dc03c();
          uVar8 = FUN_144718840(lVar17,uVar8);
          (**(code **)(*plVar20 + 0x88))(plVar20,plVar5,0,0);
          if (*plVar5 == 0) {
            FUN_145ac0328(local_878,uVar8);
          }
          plVar5 = plVar5 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      if (local_838 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if ((0 < *(int *)(param_1 + 0x38)) || (0 < *(int *)(param_1 + 0x1b00))) {
        FUN_143e56fc6(local_878);
      }
      if ((local_48 ^ (ulonglong)auStack_8f8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar13 & 0xffffffff);
}



// FUNCTION 143e56fc6 FUN_143e56fc6 body=1463 status=ok
// SIG undefined FUN_143e56fc6(void)

void FUN_143e56fc6(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  undefined1 auStack_9e8 [32];
  longlong local_9c8;
  uint *local_9c0;
  longlong local_9b8;
  longlong local_9b0;
  ulonglong *local_9a8;
  ulonglong local_9a0;
  ulonglong local_998;
  ulonglong uStack_990;
  ulonglong local_988;
  ulonglong local_980;
  undefined1 local_978;
  undefined1 local_758 [584];
  char local_510;
  undefined1 local_2d8 [584];
  char local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_9e8;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    puVar20 = *(ulonglong **)(param_1 + 0x50);
    local_9a8 = puVar20 + *(int *)(param_1 + 0x58);
    lVar14 = param_1 + 0x60;
    local_9b8 = param_1 + 0x1b28;
    local_9c0 = (uint *)(param_1 + 0x1b98);
    local_9b0 = param_1 + 0x18a8;
    local_9c8 = lVar14;
    do {
      uVar2 = *puVar20;
      local_9a0 = uVar2;
      if (*(int *)(&DAT_00001868 + param_1) != *(int *)(param_1 + 0x18a4)) {
        uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        lVar16 = *(longlong *)(param_1 + 0x1aa8);
        if (*(longlong *)(param_1 + 0x1aa8) == 0) {
          lVar16 = local_9b0;
        }
        iVar13 = *(int *)(lVar16 + ((longlong)(int)(uVar4 >> 0x10 ^ uVar4) &
                                   (longlong)*(int *)(param_1 + 0x1ab0) - 1U) * 4);
        if (iVar13 != -1) {
          lVar15 = *(longlong *)(&DAT_00001860 + param_1);
          if (*(longlong *)(&DAT_00001860 + param_1) == 0) {
            lVar15 = lVar14;
          }
LAB_143e570cd:
          puVar1 = (ulonglong *)(lVar15 + (longlong)iVar13 * 0x18);
          if (*puVar1 != uVar2) goto code_r0x000143e570dd;
          iVar7 = *(int *)(lVar16 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          if (iVar7 == iVar13) {
            piVar5 = (int *)(lVar16 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          }
          else {
            do {
              piVar5 = (int *)(lVar15 + (longlong)iVar7 * 0x18 + 0x10);
              iVar7 = *piVar5;
            } while (iVar7 != iVar13);
          }
          *piVar5 = (int)puVar1[2];
          lVar16 = *(longlong *)(&DAT_00001860 + param_1);
          if (*(longlong *)(&DAT_00001860 + param_1) == 0) {
            lVar16 = lVar14;
          }
          puVar3 = *(undefined8 **)(lVar16 + 8 + (longlong)iVar13 * 0x18);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          FUN_143e64728(lVar14,iVar13);
        }
      }
LAB_143e57144:
      local_988 = *(ulonglong *)(param_1 + 0x1ab8);
      local_998 = local_988 ^ 0x8000000000000000;
      uStack_990 = local_988 ^ 0x8000000000000000;
      local_978 = 1;
      local_980 = local_988;
      FUN_1447436a6(*(undefined8 *)(param_1 + 0x1ac0),&local_9a0);
      iVar13 = *(int *)(param_1 + 0x1ba8);
      if (iVar13 == 0) {
        uVar19 = 1;
        uVar21 = 0;
        iVar7 = 0;
        iVar18 = 0;
      }
      else {
        puVar11 = *(uint **)(param_1 + 0x1ba0);
        if (*(uint **)(param_1 + 0x1ba0) == (uint *)0x0) {
          puVar11 = local_9c0;
        }
        uVar4 = *puVar11;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          uVar21 = 0;
          uVar19 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar19 = uVar21;
          }
          iVar18 = 0;
          do {
            if (uVar19 == uVar21) goto LAB_143e574b8;
            iVar18 = iVar18 + 0x20;
            uVar4 = puVar11[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar21 = 0;
          iVar18 = 0;
        }
        uVar19 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar19 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar7 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar7) {
          iVar7 = iVar13;
        }
      }
      if (iVar7 < iVar13) {
        uVar4 = 0xffffffff;
        do {
          lVar16 = *(longlong *)(param_1 + 0x1b88);
          if (*(longlong *)(param_1 + 0x1b88) == 0) {
            lVar16 = local_9b8;
          }
          lVar16 = *(longlong *)(lVar16 + 8 + (longlong)iVar7 * 0x18);
          if (((*(ulonglong *)(lVar16 + 0x20) == 0) || (*(int *)(lVar16 + 0x1c) == 0)) ||
             (uVar8 = *(uint *)(lVar16 + 0x18), (int)uVar8 < 0)) {
LAB_143e572a0:
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
              if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) != *(int *)(lVar16 + 0x1c)))
              goto LAB_143e572a0;
              uVar6 = *(ulonglong *)(lVar16 + 0x20);
              if ((*(uint *)(lVar15 + 8) & 0x10200000) != 0) {
                uVar6 = 0;
              }
            }
          }
          if (uVar6 == uVar2) {
            local_510 = '\0';
            local_90 = '\0';
            local_88 = 0;
            local_80 = 0;
            local_7c = 0;
            local_998 = 0;
            uStack_990 = 0;
            FUN_14065e180(lVar16,&local_998);
            if (local_90 == '\x01') {
              FUN_144908ac8(local_2d8);
              FUN_144908ac8();
              local_90 = '\0';
            }
            lVar14 = local_9c8;
            if (local_510 == '\x01') {
              FUN_144908ac8(local_758);
              FUN_144908ac8();
              lVar14 = local_9c8;
            }
          }
          lVar15 = lVar16 + 0x960;
          if (*(longlong *)(lVar16 + 0x9e0) != 0) {
            lVar15 = *(longlong *)(lVar16 + 0x9e0);
          }
          iVar13 = *(int *)(lVar16 + 0x9e8);
          if ((longlong)iVar13 != 0) {
            iVar7 = 1;
            lVar17 = 0;
            lVar12 = 0;
            do {
              if (*(ulonglong *)(lVar15 + lVar17) == uVar2) {
                if (iVar7 != 0) {
                  iVar7 = iVar13 - iVar7;
                  if (iVar7 != 0) {
                    if (0 < iVar7) {
                      iVar7 = 1;
                    }
                    memmove((void *)(lVar15 + (lVar12 >> 0x20) * 8),
                            (void *)(lVar15 + (longlong)(iVar13 - iVar7) * 8),(longlong)iVar7 << 3);
                    iVar13 = *(int *)(lVar16 + 0x9e8);
                    lVar14 = local_9c8;
                  }
                  *(int *)(lVar16 + 0x9e8) = iVar13 + -1;
                }
                break;
              }
              lVar12 = lVar12 + 0x100000000;
              iVar7 = iVar7 + 1;
              lVar17 = lVar17 + 8;
              lVar14 = local_9c8;
            } while ((longlong)iVar13 << 3 != lVar17);
          }
          uVar4 = uVar4 & ~(uint)uVar19;
          puVar11 = *(uint **)(param_1 + 0x1ba0);
          if (*(uint **)(param_1 + 0x1ba0) == (uint *)0x0) {
            puVar11 = local_9c0;
          }
          iVar13 = *(int *)(param_1 + 0x1ba8);
          iVar7 = (int)uVar21;
          lVar16 = (longlong)iVar7;
          uVar8 = puVar11[lVar16] & uVar4;
          if (uVar8 == 0) {
            iVar9 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar9 = iVar13 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar15 = 0;
            while( true ) {
              iVar18 = iVar18 + 0x20;
              uVar8 = puVar11[lVar16 + lVar15 + 1];
              if (uVar8 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar10 - lVar16 == lVar15) goto LAB_143e574b8;
            }
            uVar21 = (ulonglong)(iVar7 + (int)lVar15 + 1);
            uVar4 = 0xffffffff;
          }
          uVar19 = (ulonglong)(-uVar8 & uVar8);
          uVar6 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar7 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar13);
      }
LAB_143e574b8:
      puVar20 = puVar20 + 1;
    } while (puVar20 != local_9a8);
  }
  lVar14 = *(longlong *)(param_1 + 0x1b18);
  if (*(longlong *)(param_1 + 0x1b18) == 0) {
    lVar14 = param_1 + 0x1af8;
  }
  iVar13 = *(int *)(param_1 + 0x1b20);
  if ((longlong)iVar13 != 0) {
    lVar16 = 0;
    do {
      FUN_145d48b58(param_1 + 0x1b28,*(undefined8 *)(lVar14 + lVar16));
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar13 * 8 != lVar16);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_14006c34c(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x1b20) = 0;
  if (*(int *)(param_1 + 0x1b24) < 0) {
    FUN_1489b29c4(param_1 + 0x1af8);
  }
  if ((local_70 ^ (ulonglong)auStack_9e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143e570dd:
  iVar13 = (int)puVar1[2];
  if (iVar13 == -1) goto LAB_143e57144;
  goto LAB_143e570cd;
}



// FUNCTION 143e5757e FUN_143e5757e body=2942 status=ok
// SIG undefined FUN_143e5757e(void)

void FUN_143e5757e(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  double *pdVar4;
  undefined8 **ppuVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint *puVar21;
  ulonglong uVar22;
  int iVar23;
  double **ppdVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  ulonglong *puVar32;
  undefined1 auStack_228 [32];
  uint local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  double **local_1d0;
  code *local_1c8;
  code *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  ulonglong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined1 local_18c [4];
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined8 *local_160;
  double *local_158;
  undefined8 **local_150;
  double local_148;
  double local_140;
  undefined1 local_138;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar29 = param_1 + -0x30;
  if ((0 < *(int *)(param_1 + 0x28)) || (0 < *(int *)(param_1 + 0x1af0))) {
    FUN_143e56fc6();
  }
  iVar23 = *(int *)(param_1 + 0x18);
  local_198 = lVar29;
  if ((longlong)iVar23 < 1) {
    if (*(int *)(param_1 + 0x1ac0) < 1) goto LAB_143e57add;
    local_1b0 = (longlong *)(param_1 + 0x10);
    if (iVar23 != 0) goto LAB_143e57645;
  }
  else {
LAB_143e57645:
    local_1b0 = (longlong *)(param_1 + 0x10);
    puVar32 = (ulonglong *)*local_1b0;
    local_1a8 = puVar32 + iVar23;
    lVar29 = param_1 + 0x30;
    local_1a0 = param_1 + 0x1840;
    lVar30 = param_1 + 0x1878;
    local_1b8 = lVar30;
    do {
      uVar22 = *puVar32;
      puVar15 = (undefined8 *)FUN_14001cc68(0x120,0x10);
      *puVar15 = &PTR_FUN_14b4336b8;
      puVar15[2] = uVar22;
      puVar16 = &DAT_14c846480;
      puVar25 = puVar15 + 4;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar25 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar25 = puVar25 + 1;
      }
      *(undefined1 *)(puVar15 + 0x17) = 0;
      puVar15[0x10] = 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      *(undefined1 *)(puVar15 + 0x16) = 0;
      *(undefined8 *)((longlong)puVar15 + 0xbc) = 0xbf800000000000ff;
      puVar15[0x19] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1b] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1e] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x20] = 0;
      puVar15[0x21] = 0;
      puVar15[0x22] = 0;
      puVar15[0x23] = 0;
      if (*(int *)(param_1 + 0x1874) == 0) {
        iVar23 = *(int *)(param_1 + 0x1838);
        *(int *)(param_1 + 0x1838) = iVar23 + 1;
        if (*(int *)(param_1 + 0x183c) == iVar23) {
          FUN_145be01b0(lVar29,iVar23);
        }
        lVar30 = local_1a0;
        lVar26 = (longlong)iVar23;
        iVar31 = FUN_14013140c(local_1a0,1);
        lVar20 = *(longlong *)(&DAT_00001860 + param_1);
        if (*(longlong *)(&DAT_00001860 + param_1) == 0) {
          lVar20 = lVar30;
        }
        iVar12 = iVar31 + 0x1f;
        if (-1 < iVar31) {
          iVar12 = iVar31;
        }
        bVar10 = (byte)iVar31 & 0x1f;
        puVar21 = (uint *)(lVar20 + (longlong)(iVar12 >> 5) * 4);
        *puVar21 = *puVar21 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
        lVar30 = local_1b8;
      }
      else {
        lVar20 = *(longlong *)(param_1 + 0x1830);
        if (*(longlong *)(param_1 + 0x1830) == 0) {
          lVar20 = lVar29;
        }
        iVar23 = *(int *)(param_1 + 0x1870);
        lVar26 = (longlong)iVar23;
        iVar31 = *(int *)(lVar20 + 4 + lVar26 * 0x18);
        *(int *)(param_1 + 0x1870) = iVar31;
        iVar12 = *(int *)(param_1 + 0x1874) + -1;
        *(int *)(param_1 + 0x1874) = iVar12;
        if (iVar12 != 0) {
          *(undefined4 *)(lVar20 + (longlong)iVar31 * 0x18) = 0xffffffff;
        }
      }
      lVar20 = *(longlong *)(&DAT_00001860 + param_1);
      if (*(longlong *)(&DAT_00001860 + param_1) == 0) {
        lVar20 = local_1a0;
      }
      iVar31 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar31 = iVar23;
      }
      puVar21 = (uint *)(lVar20 + (longlong)(iVar31 >> 5) * 4);
      *puVar21 = *puVar21 | 1 << ((byte)iVar23 & 0x1f);
      lVar20 = *(longlong *)(param_1 + 0x1830);
      if (*(longlong *)(param_1 + 0x1830) == 0) {
        lVar20 = lVar29;
      }
      puVar1 = (ulonglong *)(lVar20 + lVar26 * 0x18);
      *puVar1 = uVar22;
      puVar1[1] = (ulonglong)puVar15;
      *(undefined4 *)(puVar1 + 2) = 0xffffffff;
      uVar13 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar13 = uVar13 >> 0x10 ^ uVar13;
      iVar31 = *(int *)(param_1 + 0x1a80);
      uVar28 = *(int *)(param_1 + 0x1838) - *(int *)(param_1 + 0x1874);
      if ((uVar28 != 0) && (uVar28 != 1)) {
        lVar20 = *(longlong *)(param_1 + 0x1a78);
        if (*(longlong *)(param_1 + 0x1a78) == 0) {
          lVar20 = lVar30;
        }
        iVar12 = *(int *)(lVar20 + (ulonglong)(iVar31 - 1U & uVar13) * 4);
        if (iVar12 != -1) {
          lVar20 = *(longlong *)(param_1 + 0x1830);
          if (*(longlong *)(param_1 + 0x1830) == 0) {
            lVar20 = lVar29;
          }
          do {
            puVar2 = (ulonglong *)(lVar20 + (longlong)iVar12 * 0x18);
            if (*puVar2 == uVar22) {
              puVar16 = (undefined8 *)puVar2[1];
              if (puVar16 != (undefined8 *)0x0) {
                (**(code **)*puVar16)(puVar16,1);
              }
              uVar22 = puVar1[1];
              *puVar2 = *puVar1;
              puVar2[1] = uVar22;
              FUN_143e64728(lVar29,iVar23);
              lVar30 = local_1b8;
              goto LAB_143e578d8;
            }
            iVar12 = (int)puVar2[2];
            lVar30 = local_1b8;
          } while (iVar12 != -1);
        }
      }
      uVar22 = (ulonglong)(((uVar28 >> 1) - 1) + (uint)(uVar28 >> 1 == 0)) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar20 & 0x1f);
      if ((uint)lVar20 < 7) {
        iVar12 = 0x80;
      }
      if (uVar28 < 4) {
        iVar12 = 0x80;
      }
      if (((int)uVar28 < 1) || (iVar12 <= iVar31)) {
        uVar13 = iVar31 - 1U & uVar13;
        *(uint *)((longlong)puVar1 + 0x14) = uVar13;
        lVar20 = *(longlong *)(param_1 + 0x1a78);
        if (*(longlong *)(param_1 + 0x1a78) == 0) {
          lVar20 = lVar30;
        }
        *(undefined4 *)(puVar1 + 2) =
             *(undefined4 *)
              (lVar20 + ((longlong)*(int *)(param_1 + 0x1a80) - 1U & (longlong)(int)uVar13) * 4);
        lVar20 = *(longlong *)(param_1 + 0x1a78);
        if (*(longlong *)(param_1 + 0x1a78) == 0) {
          lVar20 = lVar30;
        }
        *(int *)(lVar20 + ((longlong)*(int *)(param_1 + 0x1a80) - 1U & (longlong)(int)uVar13) * 4) =
             iVar23;
      }
      else {
        *(int *)(param_1 + 0x1a80) = iVar12;
        FUN_1415897de(lVar29);
      }
LAB_143e578d8:
      FUN_14080e550();
      puVar32 = puVar32 + 1;
    } while (puVar32 != local_1a8);
  }
  lVar29 = *(longlong *)(param_1 + 0x1ab8);
  if (*(longlong *)(param_1 + 0x1ab8) == 0) {
    lVar29 = param_1 + 0x1a98;
  }
  iVar23 = *(int *)(param_1 + 0x1ac0);
  if ((longlong)iVar23 != 0) {
    lVar30 = 0;
    do {
      dVar9 = *(double *)(lVar29 + lVar30);
      local_188 = dVar9;
      puVar16 = (undefined8 *)FUN_14001cc68(0xa08,0x10);
      FUN_1489aedce(puVar16,dVar9);
      local_158 = &local_188;
      local_150 = &local_160;
      local_160 = puVar16;
      FUN_145cfb6cc(param_1 + 0x1af8,local_18c,&local_158);
      if (local_160 != (undefined8 *)0x0) {
        (**(code **)*local_160)(local_160,1);
      }
      lVar30 = lVar30 + 8;
    } while ((longlong)iVar23 * 8 != lVar30);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_14006c34c(local_1b0,0);
  }
  *(undefined4 *)(param_1 + 0x1ac0) = 0;
  if (*(int *)(param_1 + 0x1ac4) < 0) {
    FUN_1489b29c4();
  }
LAB_143e57add:
  if (*(int *)(param_1 + 0x1838) != *(int *)(param_1 + 0x1874)) {
    iVar23 = *(int *)(&DAT_00001868 + param_1);
    if (iVar23 == 0) {
      uVar22 = 1;
      uVar27 = 0;
      iVar31 = 0;
      iVar12 = 0;
    }
    else {
      puVar21 = *(uint **)(&DAT_00001860 + param_1);
      if (*(uint **)(&DAT_00001860 + param_1) == (uint *)0x0) {
        puVar21 = (uint *)(param_1 + 0x1840);
      }
      uVar13 = *puVar21;
      uVar27 = 0;
      iVar31 = 0;
      if (uVar13 == 0) {
        iVar12 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar12 = iVar23 + -1;
        }
        uVar27 = 0;
        uVar22 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar22 = uVar27;
        }
        do {
          if (uVar22 == uVar27) goto LAB_143e5804f;
          iVar31 = iVar31 + 0x20;
          uVar13 = puVar21[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar13 == 0);
      }
      uVar22 = (ulonglong)(-uVar13 & uVar13);
      uVar3 = uVar22 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar12 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar12) {
        iVar12 = iVar23;
      }
    }
    if (iVar12 < iVar23) {
      local_1b0 = (longlong *)(param_1 + 0x30);
      uVar13 = 0xffffffff;
      do {
        plVar17 = *(longlong **)(param_1 + 0x1830);
        if (*(longlong **)(param_1 + 0x1830) == (longlong *)0x0) {
          plVar17 = local_1b0;
        }
        lVar29 = plVar17[(longlong)iVar12 * 3 + 1];
        local_160 = (undefined8 *)plVar17[(longlong)iVar12 * 3];
        uVar28 = *(uint *)(lVar29 + 0xbc);
        if (uVar28 != 0) {
          pdVar4 = *(double **)(lVar29 + 0x80);
          ppuVar5 = *(undefined8 ***)(lVar29 + 0x88);
          dVar9 = *(double *)(lVar29 + 0x90);
          dVar6 = *(double *)(lVar29 + 0x98);
          dVar7 = *(double *)(lVar29 + 0xa0);
          dVar8 = *(double *)(lVar29 + 0xa8);
          local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(lVar29 + 0xb0));
          uVar14 = uVar28;
          if ((uVar28 & 1) != 0) {
            local_1a8 = (ulonglong *)CONCAT44(local_1a8._4_4_,uVar13);
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar31);
            (**(code **)(**(longlong **)(lVar29 + 0x10) + 0x18))
                      (*(longlong **)(lVar29 + 0x10),&local_158);
            ppdVar24 = &local_158;
            puVar16 = (undefined8 *)(lVar29 + 0x20);
            for (lVar30 = 0xc; lVar30 != 0; lVar30 = lVar30 + -1) {
              *puVar16 = *ppdVar24;
              ppdVar24 = ppdVar24 + 1;
              puVar16 = puVar16 + 1;
            }
            plVar17 = (longlong *)(**(code **)(**(longlong **)(lVar29 + 0x10) + 8))();
            if (plVar17 == (longlong *)0x0) {
LAB_143e58004:
              plVar17 = (longlong *)0x0;
            }
            else {
              if (DAT_14cac9ca8 == 0) {
                local_158 = (double *)FUN_141030f22;
                local_1c0 = FUN_14081d0ea;
                local_1c8 = FUN_14081d0ea;
                local_1d0 = &local_158;
                local_1d8 = &LAB_1478c0a72;
                local_1e0 = &LAB_1417b2375;
                local_1e8 = L"Engine";
                local_1f0 = 0x1000000000;
                local_1f8 = 0x10000004;
                local_200 = 8;
                local_208 = 0x390;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              if ((*(int *)(plVar17[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
                  != DAT_14cac9ca8 + 0x30)) goto LAB_143e58004;
            }
            local_208 = local_208 & 0xffffff00;
            (**(code **)(*plVar17 + 800))(plVar17,1,&local_158,&local_188);
            *(double *)(lVar29 + 0x80) = (double)local_158 - local_188;
            *(double *)(lVar29 + 0x88) = (double)local_150 - dStack_180;
            *(double *)(lVar29 + 0x90) = local_148 - local_178;
            *(double *)(lVar29 + 0x98) = (double)local_158 + local_188;
            *(double *)(lVar29 + 0xa0) = (double)local_150 + dStack_180;
            *(double *)(lVar29 + 0xa8) = local_148 + local_178;
            *(undefined1 *)(lVar29 + 0xb0) = 1;
            uVar14 = *(uint *)(lVar29 + 0xbc);
            iVar31 = (int)local_1a0;
            uVar13 = (uint)local_1a8;
          }
          if ((uVar14 & 2) != 0) {
            uVar11 = (**(code **)(**(longlong **)(lVar29 + 0x10) + 0x90))();
            *(undefined1 *)(lVar29 + 0xb8) = uVar11;
          }
          *(undefined4 *)(lVar29 + 0xbc) = 0;
          if ((uVar28 & 1) != 0) {
            if ((char)local_1b8 != '\0' || *(char *)(lVar29 + 0xb0) != '\0') {
              if ((char)local_1b8 != '\0' && *(char *)(lVar29 + 0xb0) != '\0') {
                if (((double)pdVar4 == *(double *)(lVar29 + 0x80)) &&
                   (!NAN((double)pdVar4) && !NAN(*(double *)(lVar29 + 0x80)))) {
                  if (((double)ppuVar5 == *(double *)(lVar29 + 0x88)) &&
                     (!NAN((double)ppuVar5) && !NAN(*(double *)(lVar29 + 0x88)))) {
                    if ((dVar9 == *(double *)(lVar29 + 0x90)) &&
                       (!NAN(dVar9) && !NAN(*(double *)(lVar29 + 0x90)))) {
                      if ((dVar6 == *(double *)(lVar29 + 0x98)) &&
                         (!NAN(dVar6) && !NAN(*(double *)(lVar29 + 0x98)))) {
                        if ((dVar7 == *(double *)(lVar29 + 0xa0)) &&
                           (!NAN(dVar7) && !NAN(*(double *)(lVar29 + 0xa0)))) {
                          if ((dVar8 == *(double *)(lVar29 + 0xa8)) &&
                             (!NAN(dVar8) && !NAN(*(double *)(lVar29 + 0xa8)))) goto LAB_143e57e99;
                        }
                      }
                    }
                  }
                }
              }
              local_138 = 1;
              local_158 = pdVar4;
              local_150 = ppuVar5;
              local_148 = dVar6;
              local_140 = dVar7;
              FUN_1447436a6(*(undefined8 *)(param_1 + 0x1a90),&local_160,&local_158);
              local_188 = *(double *)(lVar29 + 0x80);
              dStack_180 = *(double *)(lVar29 + 0x88);
              local_178 = *(double *)(lVar29 + 0x98);
              uStack_170 = *(undefined8 *)(lVar29 + 0xa0);
              local_168 = 1;
              FUN_143e647bc(*(undefined8 *)(param_1 + 0x1a90),&local_160,&local_188);
            }
          }
        }
LAB_143e57e99:
        uVar13 = uVar13 & ~(uint)uVar22;
        puVar21 = *(uint **)(&DAT_00001860 + param_1);
        if (*(uint **)(&DAT_00001860 + param_1) == (uint *)0x0) {
          puVar21 = (uint *)(param_1 + 0x1840);
        }
        iVar23 = *(int *)(&DAT_00001868 + param_1);
        iVar12 = (int)uVar27;
        lVar29 = (longlong)iVar12;
        uVar28 = puVar21[lVar29] & uVar13;
        if (uVar28 == 0) {
          iVar18 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar18 = iVar23 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar18;
          if (iVar18 < iVar12) {
            iVar19 = iVar12;
          }
          if (iVar18 <= iVar12) break;
          lVar30 = 0;
          while( true ) {
            iVar31 = iVar31 + 0x20;
            uVar28 = puVar21[lVar29 + lVar30 + 1];
            if (uVar28 != 0) break;
            lVar30 = lVar30 + 1;
            if (iVar19 - lVar29 == lVar30) goto LAB_143e5804f;
          }
          uVar27 = (ulonglong)(iVar12 + (int)lVar30 + 1);
          uVar13 = 0xffffffff;
        }
        uVar22 = (ulonglong)(-uVar28 & uVar28);
        uVar3 = uVar22 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar12 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar23);
    }
  }
LAB_143e5804f:
  if (*(int *)(param_1 + 0x1b60) != *(int *)(param_1 + 0x1b84)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_228);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e5c1a9 FUN_143e5c1a9 body=316 status=ok
// SIG undefined FUN_143e5c1a9(void)

uint * FUN_143e5c1a9(uint *param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint *puVar7;
  
  if ((*(longlong **)(param_1 + 2) == (longlong *)0x0) || (param_1[1] == 0)) {
LAB_143e5c20e:
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar1 = *param_1;
    plVar5 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 == 0) || (*(uint *)(lVar4 + 0x10) != param_1[1])) goto LAB_143e5c20e;
      plVar5 = (longlong *)0x0;
      if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
        plVar5 = *(longlong **)(param_1 + 2);
      }
    }
  }
  if ((*(longlong **)(param_2 + 2) != (longlong *)0x0) && (param_2[1] != 0)) {
    uVar1 = *param_2;
    plVar6 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143e5c26a;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 != 0) && (*(uint *)(lVar4 + 0x10) == param_2[1])) {
      plVar6 = (longlong *)0x0;
      if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
        plVar6 = *(longlong **)(param_2 + 2);
      }
      goto LAB_143e5c26a;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_143e5c26a:
  if ((param_3 == (longlong *)0x0) ||
     ((puVar7 = param_1, plVar5 != param_3 && (puVar7 = param_2, plVar6 != param_3)))) {
    iVar3 = -0x80000000;
    iVar2 = -0x80000000;
    if (plVar5 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar5 + 0x20))();
    }
    if (plVar6 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    puVar7 = param_1;
    if ((iVar2 <= iVar3) && (puVar7 = param_2, iVar3 <= iVar2)) {
      if ((char)param_1[0x247] == (char)param_2[0x247]) {
        puVar7 = param_1;
        if ((float)param_2[0x246] <= (float)param_1[0x246] &&
            (float)param_1[0x246] != (float)param_2[0x246]) {
          puVar7 = param_2;
        }
      }
      else {
        puVar7 = param_1;
        if ((char)param_1[0x247] == '\0') {
          puVar7 = param_2;
        }
      }
    }
  }
  return puVar7;
}



// FUNCTION 143e5c2e6 FUN_143e5c2e6 body=1200 status=ok
// SIG undefined FUN_143e5c2e6(void)

ulonglong FUN_143e5c2e6(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,
                       char param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    uVar12 = 0;
    if (((*param_4 == 0) || (param_4[1] == 0)) || (*param_4 == DAT_14c948000)) goto LAB_143e5c489;
    if (param_5 == '\0') {
      local_88 = DAT_14cb8dcf8;
      plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cb8dd00);
      FUN_1448075d0(&local_78);
      uVar16 = *param_4;
      uVar6 = (uint)local_78;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (uVar16 == uVar6) goto LAB_143e5c487;
      lVar7 = *param_3;
    }
    iVar14 = *(int *)(*param_2 + 0x1f8);
    if ((longlong)iVar14 != 0) {
      lVar4 = *(longlong *)(*param_2 + 0x1f0);
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar8) == lVar7) {
          uVar17 = (lVar8 >> 4) * -0x3333333333333333;
          uVar12 = 0;
          uVar16 = (uint)uVar17;
          if (((int)uVar16 < 0) || (iVar14 <= (int)uVar16)) goto LAB_143e5c489;
          plVar11 = (longlong *)((ulonglong)(uVar16 & 0x7fffffff) * 0x50);
          if ((byte)(*(char *)(lVar4 + 8 + (longlong)plVar11) - 1U) < 2) {
            lVar7 = *(longlong *)(param_1 + 0x78);
            lVar8 = (ulonglong)(uVar16 & 0x7fffffff) * 0x70;
            pbVar5 = *(byte **)(lVar7 + lVar8);
            if (pbVar5 == (byte *)0x0) goto LAB_143e5c482;
            if ((*pbVar5 & 2) == 0) {
              plVar9 = &DAT_14c9a1288;
            }
            else {
              plVar9 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
            }
            if ((int)plVar9[2] == *(int *)((longlong)plVar9 + 0x3c)) goto LAB_143e5c482;
            plVar15 = plVar9 + 8;
            if ((longlong *)plVar9[9] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar9[9];
            }
            iVar14 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar9[10] - 1U & *param_4) * 4);
            if (iVar14 == -1) goto LAB_143e5c482;
            goto LAB_143e5c467;
          }
          break;
        }
        lVar8 = lVar8 + 0x50;
      } while ((longlong)iVar14 * 0x50 != lVar8);
    }
  }
LAB_143e5c487:
  uVar12 = 0;
LAB_143e5c489:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
  while (iVar14 = *(int *)(lVar3 + 0x38), iVar14 != -1) {
LAB_143e5c467:
    lVar3 = *plVar9 + (longlong)iVar14 * 0x40;
    if (*(uint *)(*plVar9 + (longlong)iVar14 * 0x40) == *param_4) {
      if (((lVar3 != 0) && (puVar10 = (undefined8 *)(lVar3 + 0x28), puVar10 != (undefined8 *)0x0))
         && (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
      goto LAB_143e5c4cc;
      break;
    }
  }
LAB_143e5c482:
  puVar10 = &DAT_14c9a1308;
LAB_143e5c4cc:
  pbVar5 = (byte *)*puVar10;
  plVar9 = (longlong *)puVar10[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 0x6b) != 3)) {
    plVar15 = (longlong *)(lVar7 + lVar8);
    if ((*(char *)((longlong)plVar11 + lVar4 + 0x14) == '\x01') &&
       (((*(uint *)(plVar15 + 2) != 0 && (*(int *)((longlong)plVar15 + 0x14) != 0)) &&
        (*(uint *)(plVar15 + 2) != DAT_14c948000)))) {
      pbVar5 = (byte *)plVar15[0xc];
      puVar10 = &DAT_14c9a1288;
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
        puVar10 = (undefined8 *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      FUN_140b14644(puVar10,0);
    }
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_14009b010(&local_78,3,0);
    FUN_14131a8f2(&local_78,param_4);
    if (*plVar15 != 0) {
      local_98 = 0;
      FUN_14014191c(*plVar15,param_4,&local_78,0);
    }
    plVar13 = plVar11;
    if (*(char *)((longlong)plVar11 + lVar4 + 8) == '\x02') {
      lVar7 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1f0) + 0x24 + (longlong)plVar11);
      if (lVar7 == -1) {
        local_90 = (longlong *)(param_1 + 0x68);
      }
      else {
        local_90 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x60 + lVar7 * 0x70);
        if (1 < (byte)(*(char *)(*(longlong *)(*param_2 + 0x1f0) + 8 + lVar7 * 0x50) - 1U)) {
          local_90 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar7 * 0x70);
        }
      }
      plVar13 = &local_88;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_14009b010(plVar13,1,0);
      if (local_88 != 0) {
        FUN_1402afb64(local_88,param_4);
      }
      if (*local_90 != 0) {
        local_98 = 0;
        FUN_14014191c(*local_90,(longlong)plVar11 + lVar4 + 0x28,&local_88,0);
      }
      plVar11 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    FUN_1447715ec(plVar15 + 2,param_4);
    if (((byte *)*plVar15 != (byte *)0x0) && ((*(byte *)*plVar15 & 3) != 0)) {
      FUN_1458e966b(&local_88,plVar15,param_4);
      if (plVar15 != (longlong *)&DAT_14c9a12a8) {
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)plVar15[0xd];
        plVar15[0xc] = local_88;
        plVar15[0xd] = (longlong)plStack_80;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar11 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
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
      }
      plVar11 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_80 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    FUN_1489af216(param_1,param_2,uVar17 & 0xffffffff);
    uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
    FUN_14131ab28(param_1,param_2,uVar17 & 0xffffffff,1);
    plVar11 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_70 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  else {
    uVar12 = 0;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  goto LAB_143e5c489;
}



// FUNCTION 143e5c798 FUN_143e5c798 body=588 status=ok
// SIG undefined FUN_143e5c798(void)

undefined8 FUN_143e5c798(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 != 0) {
    iVar4 = *(int *)(*param_2 + 0x1f8);
    if ((longlong)iVar4 != 0) {
      lVar15 = *(longlong *)(*param_2 + 0x1f0);
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar15 + lVar9) == *param_3) {
          uVar14 = (lVar9 >> 4) * -0x3333333333333333;
          uVar10 = 0;
          uVar13 = (uint)uVar14;
          if (((int)uVar13 < 0) || (iVar4 <= (int)uVar13)) goto LAB_143e5c8d4;
          lVar9 = (ulonglong)(uVar13 & 0x7fffffff) * 0x50;
          cVar7 = *(char *)(lVar15 + 8 + lVar9);
          if ((byte)(cVar7 - 1U) < 2) {
            lVar5 = *(longlong *)(param_1 + 0x78);
            lVar11 = (ulonglong)(uVar13 & 0x7fffffff) * 0x70;
            iVar4 = *(int *)(lVar5 + 0x10 + lVar11);
            uVar10 = 1;
            if (((iVar4 != 0) && (lVar3 = lVar5 + lVar11, *(int *)(lVar3 + 0x14) != 0)) &&
               (iVar4 != DAT_14c948000)) {
              lVar15 = lVar15 + lVar9;
              local_60 = lVar3;
              if (*(char *)(lVar15 + 0x14) == '\x01') {
                pbVar6 = *(byte **)(lVar3 + 0x60);
                puVar8 = &DAT_14c9a1288;
                if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 2) != 0)) {
                  puVar8 = (undefined8 *)(*(longlong *)(pbVar6 + 8) + 0x18);
                }
                FUN_140b14644(puVar8,0);
                cVar7 = *(char *)(lVar15 + 8);
              }
              if (cVar7 == '\x02') {
                lVar9 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1f0) + 0x24 + lVar9);
                if (lVar9 == -1) {
                  plVar12 = (longlong *)(param_1 + 0x68);
                }
                else {
                  plVar12 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x60 + lVar9 * 0x70);
                  if (1 < (byte)(*(char *)(*(longlong *)(*param_2 + 0x1f0) + 8 + lVar9 * 0x50) - 1U)
                     ) {
                    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar9 * 0x70);
                  }
                }
                local_58 = 0;
                plStack_50 = (longlong *)0x0;
                FUN_14009b010(&local_58,1,0);
                if (*plVar12 != 0) {
                  local_68 = 0;
                  FUN_14014191c(*plVar12,lVar15 + 0x28,&local_58,0);
                }
                plVar12 = plStack_50;
                if (plStack_50 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_50 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_50)(plStack_50);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar12 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                }
              }
              FUN_1447715ec(lVar5 + lVar11 + 0x10,&DAT_14c9485f0);
              *(undefined8 *)(local_60 + 0x60) = 0;
              plVar12 = *(longlong **)(local_60 + 0x68);
              if (plVar12 != (longlong *)0x0) {
                *(undefined8 *)(local_60 + 0x68) = 0;
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
              FUN_1489af216(param_1,param_2,uVar14 & 0xffffffff);
            }
            goto LAB_143e5c8d4;
          }
          break;
        }
        lVar9 = lVar9 + 0x50;
      } while ((longlong)iVar4 * 0x50 != lVar9);
    }
  }
  uVar10 = 0;
LAB_143e5c8d4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 143e5c9e6 FUN_143e5c9e6 body=333 status=ok
// SIG undefined FUN_143e5c9e6(void)

undefined8 FUN_143e5c9e6(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  
  if (*param_3 == 0) {
    return 0;
  }
  uVar1 = *param_4;
  if (((uVar1 == 0) || (param_4[1] == 0)) || (uVar1 == DAT_14c948000)) {
    return 0;
  }
  iVar10 = *(int *)(*param_2 + 0x1f8);
  if ((longlong)iVar10 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(*param_2 + 0x1f0);
  lVar5 = 0;
  while (*(longlong *)(lVar2 + lVar5) != *param_3) {
    lVar5 = lVar5 + 0x50;
    if ((longlong)iVar10 * 0x50 == lVar5) {
      return 0;
    }
  }
  uVar11 = (int)(lVar5 >> 4) * -0x33333333;
  if ((int)uVar11 < 0) {
    return 0;
  }
  if (iVar10 <= (int)uVar11) {
    return 0;
  }
  if (1 < (byte)(*(char *)(lVar2 + 8 + (ulonglong)(uVar11 & 0x7fffffff) * 0x50) - 1U)) {
    return 0;
  }
  pbVar3 = *(byte **)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar11 & 0x7fffffff) * 0x70);
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar7 = &DAT_14c9a1288;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar9 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar7[9];
      }
      iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[10] - 1U & uVar1) * 4);
      if (iVar10 != -1) {
        do {
          lVar2 = *plVar7 + (longlong)iVar10 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar10 * 0x40) == uVar1) {
            if (((lVar2 != 0) &&
                (puVar8 = (undefined8 *)(lVar2 + 0x28), puVar8 != (undefined8 *)0x0)) &&
               (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
            goto LAB_143e5cb12;
            break;
          }
          iVar10 = *(int *)(lVar2 + 0x38);
        } while (iVar10 != -1);
      }
    }
  }
  puVar8 = &DAT_14c9a1308;
LAB_143e5cb12:
  puVar4 = (undefined1 *)*puVar8;
  if (puVar4 == (undefined1 *)0x0) {
    return 0;
  }
  uVar6 = CONCAT71((int7)((ulonglong)puVar4 >> 8),*puVar4) & 0xffffffffffffff6b;
  return CONCAT71((int7)(uVar6 >> 8),(char)uVar6 == '\x03');
}



// FUNCTION 143e5cb34 FUN_143e5cb34 body=1316 status=ok
// SIG undefined FUN_143e5cb34(void)

void FUN_143e5cb34(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong **pplVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_68;
  longlong **local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*param_3 != 0) && (*param_4 != 0)) && (param_4[1] != 0)) && (*param_4 != DAT_14c948000)) {
    local_a8 = DAT_14cb8dcf8;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,DAT_14cb8dd00);
    FUN_1448075d0(&local_78);
    uVar10 = *param_4;
    uVar5 = (uint)local_78;
    if (local_60 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (uVar10 != uVar5) {
      iVar15 = *(int *)(*param_2 + 0x1f8);
      if ((longlong)iVar15 != 0) {
        lVar17 = *(longlong *)(*param_2 + 0x1f0);
        lVar7 = 0;
        do {
          if (*(longlong *)(lVar17 + lVar7) == *param_3) {
            uVar11 = (lVar7 >> 4) * -0x3333333333333333;
            uVar10 = (uint)uVar11;
            if ((-1 < (int)uVar10) && ((int)uVar10 < iVar15)) {
              lVar7 = (ulonglong)(uVar10 & 0x7fffffff) * 0x50;
              if ((byte)(*(char *)(lVar17 + 8 + lVar7) - 1U) < 2) {
                lVar12 = *(longlong *)(param_1 + 0x78);
                lVar16 = (ulonglong)(uVar10 & 0x7fffffff) * 0x70;
                pbVar4 = *(byte **)(lVar12 + lVar16);
                if (pbVar4 == (byte *)0x0) goto LAB_143e5cccc;
                if ((*pbVar4 & 2) == 0) {
                  plVar8 = &DAT_14c9a1288;
                }
                else {
                  plVar8 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
                }
                if ((int)plVar8[2] == *(int *)((longlong)plVar8 + 0x3c)) goto LAB_143e5cccc;
                plVar14 = plVar8 + 8;
                if ((longlong *)plVar8[9] != (longlong *)0x0) {
                  plVar14 = (longlong *)plVar8[9];
                }
                iVar15 = *(int *)((longlong)plVar14 +
                                 (ulonglong)((int)plVar8[10] - 1U & *param_4) * 4);
                if (iVar15 == -1) goto LAB_143e5cccc;
                goto LAB_143e5ccb1;
              }
            }
            break;
          }
          lVar7 = lVar7 + 0x50;
        } while ((longlong)iVar15 * 0x50 != lVar7);
      }
    }
  }
  goto LAB_143e5ce33;
  while (iVar15 = *(int *)(lVar3 + 0x38), iVar15 != -1) {
LAB_143e5ccb1:
    lVar3 = *plVar8 + (longlong)iVar15 * 0x40;
    if (*(uint *)(*plVar8 + (longlong)iVar15 * 0x40) == *param_4) {
      if (((lVar3 != 0) && (puVar9 = (undefined8 *)(lVar3 + 0x28), puVar9 != (undefined8 *)0x0)) &&
         (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0)))) goto LAB_143e5ccf4;
      break;
    }
  }
LAB_143e5cccc:
  puVar9 = &DAT_14c9a1308;
LAB_143e5ccf4:
  if ((((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 0x6b) != 3)) ||
     (cVar6 = FUN_14709d15a(pbVar4,param_4), cVar6 == '\0')) goto LAB_143e5ce33;
  lVar17 = lVar17 + lVar7;
  lVar12 = lVar12 + lVar16;
  if (*(char *)(lVar17 + 0x14) == '\x01') {
    local_68 = 0;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_60 = (longlong **)0x0;
    uStack_58 = 0;
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_d0 = lVar12;
    cVar6 = FUN_1418b3762(*param_2,param_1,uVar11 & 0xffffffff);
    if (cVar6 != '\0') {
      if (DAT_14c947fe0 == 0) {
        lVar12 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar12);
        DAT_14c947fe0 = lVar12;
      }
      FUN_140045924(DAT_14c947fe0,local_b0,param_4,1);
      FUN_1401533ba(&local_c8,local_b0,1);
      pplVar13 = &plStack_70;
      if (1 < local_78._4_4_) {
        pplVar13 = local_60;
      }
      if (0 < uStack_58._4_4_) {
        pplVar13 = local_60;
      }
      *(undefined8 **)((longlong)pplVar13 + (longlong)(local_78._4_4_ + -1) * 0xc) = local_c8;
      *(int *)((longlong)pplVar13 + (longlong)(local_78._4_4_ + -1) * 0xc + 8) = (int)uStack_c0;
      cVar6 = (**(code **)(*(longlong *)*param_2 + 0x310))
                        ((longlong *)*param_2,param_1,&local_78,&local_a8);
      if (cVar6 != '\0') {
        local_c8 = (undefined8 *)0x0;
        uStack_c0 = 0;
        FUN_1489af342(*param_2,param_1,&local_a8,&local_c8);
        if ((int)uStack_c0 != 0) {
          if (local_c8 == (undefined8 *)0x0) goto LAB_143e5ce07;
          (**(code **)*local_c8)(local_c8,0);
          FUN_1446efa72(&local_c8,0,0,0x10);
          uStack_c0 = uStack_c0 & 0xffffffff00000000;
        }
        if (local_c8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_143e5ce07:
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar12 = local_d0;
    if (local_60 != (longlong **)0x0) {
      FUN_1400020a8();
      lVar12 = local_d0;
    }
  }
  if (*(uint *)(lVar12 + 0x10) == *param_4) {
    lVar7 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1f0) + 0x24 + lVar7);
    if (lVar7 == -1) {
      plVar8 = (longlong *)(param_1 + 0x68);
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x60 + lVar7 * 0x70);
      if (1 < (byte)(*(char *)(*(longlong *)(*param_2 + 0x1f0) + 8 + lVar7 * 0x50) - 1U)) {
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar7 * 0x70);
      }
    }
    if (*(char *)(lVar17 + 8) == '\x02') {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_14009b010(&local_78,1,0);
      if (*plVar8 != 0) {
        local_d8 = 0;
        FUN_14014191c(*plVar8,lVar17 + 0x28,&local_78,0);
      }
      plVar14 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
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
    FUN_1447715ec(lVar12 + 0x10,&DAT_14c9485f0);
    *(undefined8 *)(lVar12 + 0x60) = 0;
    plVar14 = *(longlong **)(lVar12 + 0x68);
    if (plVar14 != (longlong *)0x0) {
      *(undefined8 *)(lVar12 + 0x68) = 0;
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    FUN_1489af216(param_1,param_2,uVar11 & 0xffffffff);
    if (param_5 != '\0') {
      local_d8 = 3;
      FUN_1458e8fd2(param_1,param_2,plVar8,uVar11 & 0xffffffff);
    }
  }
LAB_143e5ce33:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e5d05a FUN_143e5d05a body=164 status=ok
// SIG undefined FUN_143e5d05a(void)

undefined8 FUN_143e5d05a(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*param_4 != 0) {
    iVar1 = *(int *)(*param_3 + 0x1f8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(*param_3 + 0x1f0);
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar5) == *param_4) {
          uVar4 = (int)(lVar5 >> 4) * -0x33333333;
          if (((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) &&
             ((byte)(*(char *)(lVar2 + 8 + (ulonglong)(uVar4 & 0x7fffffff) * 0x50) - 1U) < 2)) {
            puVar3 = (undefined4 *)
                     (*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar4 & 0x7fffffff) * 0x70 + 0x38)
            ;
            goto LAB_143e5d0ed;
          }
          break;
        }
        lVar5 = lVar5 + 0x50;
      } while ((longlong)iVar1 * 0x50 != lVar5);
    }
  }
  puVar3 = &DAT_14c9485f0;
LAB_143e5d0ed:
  FUN_1447a97f4(param_2,puVar3);
  return param_2;
}



// FUNCTION 143e5d0fe FUN_143e5d0fe body=552 status=ok
// SIG undefined FUN_143e5d0fe(void)

undefined8 FUN_143e5d0fe(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0x2c) - 1U < 3) || (*(char *)(param_1 + 0x91) != '\0')) ||
     (*(int *)(param_1 + 0x48) < 2)) {
    uVar3 = 0;
    goto LAB_143e5d137;
  }
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  uVar3 = *param_2;
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar2 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_14b434d90;
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
  local_80[2] = lVar4;
  *local_80 = &PTR_FUN_14b4344c0;
  local_80[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = FUN_14592e008;
  local_68 = DAT_14cb8dd68;
  local_70 = DAT_14cb8dd60;
  FUN_1448075d0(local_60);
  FUN_145840754(uVar3,param_1,local_60,&local_80);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_78 == 0) {
LAB_143e5d2a6:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_143e5d2a6;
  }
  uVar3 = 1;
LAB_143e5d137:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143e5d328 FUN_143e5d328 body=958 status=ok
// SIG undefined FUN_143e5d328(void)

void FUN_143e5d328(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  byte *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78 [3];
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar20 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar20 = 0;
  }
  lVar20 = *(longlong *)(lVar20 + 0x1f0);
  lVar18 = (longlong)param_2 * 0x50;
  if ((byte)(*(char *)(lVar20 + 8 + lVar18) - 1U) < 2) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar14 = (longlong)param_2 * 0x70;
    lVar11 = param_3 + 8;
    if (1 < *(int *)(param_3 + 4)) {
      lVar11 = *(longlong *)(param_3 + 0x18);
    }
    if (0 < *(int *)(param_3 + 0x24)) {
      lVar11 = *(longlong *)(param_3 + 0x18);
    }
    lVar8 = (longlong)(*(int *)(param_3 + 4) + -1);
    local_80 = *(undefined4 *)(lVar11 + 8 + lVar8 * 0xc);
    local_88 = *(undefined8 *)(lVar11 + lVar8 * 0xc);
    local_a0 = param_1;
    FUN_1448075d0(local_78);
    iVar16 = *(int *)(lVar4 + 0x10 + lVar14);
    iVar6 = (int)local_78[0];
    if (CONCAT44(uStack_5c,local_60) != 0) {
      FUN_1400020a8();
    }
    param_1 = local_a0;
    if (iVar16 == iVar6) {
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_60 = 0xffff;
      if ((*(uint *)(local_a0 + 8) & 0x10) == 0) {
        uVar12 = *(undefined8 *)(local_a0 + 0x20);
      }
      else {
        uVar12 = 0;
      }
      lVar20 = lVar20 + lVar18;
      puVar17 = (uint *)(lVar4 + lVar14 + 0x10);
      FUN_140fe4ff6(uVar12,local_a0,local_78);
      if (*(uint *)(param_4 + 0x30) == 0) {
        lVar18 = (longlong)*(int *)(*(longlong *)(local_78[0] + 0x1f0) + 0x24 + lVar18);
        if (lVar18 == -1) {
          plVar19 = (longlong *)(param_1 + 0x68);
        }
        else {
          plVar19 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x60 + lVar18 * 0x70);
          if (1 < (byte)(*(char *)(*(longlong *)(local_78[0] + 0x1f0) + 8 + lVar18 * 0x50) - 1U)) {
            plVar19 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar18 * 0x70);
          }
        }
        cVar2 = *(char *)(lVar20 + 8);
        if (*plVar19 == 0) {
          puVar9 = &DAT_14c9a1308;
        }
        else {
          puVar9 = (undefined8 *)FUN_1446e60f4(*plVar19,lVar20);
        }
        if ((byte)(cVar2 - 1U) < 2) {
          pbVar5 = (byte *)*puVar9;
          if (pbVar5 != (byte *)0x0) {
            if ((*pbVar5 & 2) == 0) {
              plVar10 = &DAT_14c9a1288;
            }
            else {
              plVar10 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
            }
            if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
              uVar3 = *puVar17;
              plVar15 = plVar10 + 8;
              if ((longlong *)plVar10[9] != (longlong *)0x0) {
                plVar15 = (longlong *)plVar10[9];
              }
              iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar10[10] - 1U & uVar3) * 4);
              if (iVar16 != -1) {
                do {
                  lVar20 = *plVar10 + (longlong)iVar16 * 0x40;
                  if (*(uint *)(*plVar10 + (longlong)iVar16 * 0x40) == uVar3) {
                    if ((((lVar20 != 0) &&
                         (puVar9 = (undefined8 *)(lVar20 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                        ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
                    goto LAB_143e5d5ea;
                    break;
                  }
                  iVar16 = *(int *)(lVar20 + 0x38);
                } while (iVar16 != -1);
              }
            }
          }
          puVar9 = &DAT_14c9a1308;
        }
LAB_143e5d5ea:
        pbVar5 = (byte *)*puVar9;
        plVar10 = (longlong *)puVar9[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_a8 = 0;
        FUN_1401412e0(param_4 + 0x38,&local_98,1,0);
        puVar9 = &DAT_14c9a1288;
        puVar13 = &DAT_14c9a1288;
        if ((local_98 != (byte *)0x0) && (puVar13 = &DAT_14c9a1288, (*local_98 & 2) != 0)) {
          puVar13 = (undefined8 *)(*(longlong *)(local_98 + 8) + 0x18);
        }
        if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
          puVar9 = (undefined8 *)(*(longlong *)(pbVar5 + 8) + 0x18);
        }
        FUN_140142078(puVar9,puVar13);
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_90 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
            }
          }
        }
        param_1 = local_a0;
        local_a8 = 7;
        FUN_1458e8fd2(local_a0,local_78,plVar19,param_2);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar10 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
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
      else if (((*(uint *)(param_4 + 0x30) & 0xfffffffe) == 4) &&
              ((byte)(*(char *)(lVar20 + 8) - 1U) < 2)) {
        if (*(longlong **)(local_78[0] + 0x1b0) == (longlong *)0x0) {
          local_a8 = false;
        }
        else {
          bVar7 = (**(code **)(**(longlong **)(local_78[0] + 0x1b0) + 0x498))();
          local_a8 = bVar7 < 6;
        }
        FUN_143e5cb34(param_1,local_78,lVar20,puVar17);
      }
    }
  }
  if ((*(char *)(param_1 + 0x91) == '\x01') && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_14623ce6e(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5d6e8 FUN_143e5d6e8 body=1144 status=ok
// SIG undefined FUN_143e5d6e8(void)

void FUN_143e5d6e8(longlong *param_1,ulonglong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined1 local_131;
  ulonglong local_130;
  int local_128;
  int local_124;
  void *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  longlong *plStack_d8;
  undefined1 local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*param_2 != 0) && (0 < (int)param_1[0x10])) {
    lVar12 = 0x60;
    lVar13 = 0;
    uVar14 = 0;
    do {
      lVar4 = *(longlong *)(*param_2 + 0x1f0);
      if (((byte)(*(char *)(lVar4 + 8 + lVar13) - 1U) < 2) &&
         (*(char *)(lVar4 + 0x14 + lVar13) == '\x01')) {
        lVar11 = param_1[0xf] + lVar12 + -0x50;
        cVar8 = (**(code **)(*param_1 + 0x2a0))(param_1,lVar11,param_1[0xf] + lVar12);
        if (cVar8 == '\0') {
          local_78 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_a8 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          cVar8 = FUN_1418b3762(*param_2,param_1,uVar14 & 0xffffffff,&local_88);
          if (cVar8 == '\0') {
LAB_143e5da8b:
            local_148 = (undefined8 *)CONCAT71(local_148._1_7_,param_3);
            FUN_143e5cb34(param_1,param_2,lVar4 + lVar13,lVar11);
          }
          else {
            cVar8 = (**(code **)(*(longlong *)*param_2 + 0x310))
                              ((longlong *)*param_2,param_1,&local_88,&local_b8);
            if (cVar8 == '\0') goto LAB_143e5da8b;
            uVar5 = *param_2;
            if (((*(longlong *)(uVar5 + 0x1b0) == 0) ||
                (lVar6 = *(longlong *)(*(longlong *)(uVar5 + 0x1b0) + 0x1e0), lVar6 == 0)) ||
               (*(longlong *)(lVar6 + 0x68) == 0)) goto LAB_143e5da8b;
            local_c8 = (undefined8 *)0x0;
            local_c0 = 0;
            local_e8[0] = 0;
            local_e0 = 0;
            plStack_d8 = (longlong *)0x0;
            local_d0 = 0;
            local_124 = (int)param_1[0xb];
            local_131 = param_3;
            local_130 = uVar5;
            if (local_124 < 2) {
              local_108 = (void *)0x0;
              uStack_100 = 0;
              FUN_1400b2348(&local_b8,&local_108,1);
            }
            else {
              local_118 = 0;
              uStack_110 = 0;
              FUN_1400b2348(&local_b8,&local_118,1);
              local_128 = (int)uStack_110 + -1;
              if ((int)uStack_110 == 0) {
                local_128 = 0;
              }
              uVar3 = *(uint *)(param_1 + 0xb);
              iVar9 = local_128 + 1 + (uint)((longlong)(int)uVar3 == 0);
              local_108 = (void *)0x0;
              uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
              if (iVar9 == 0 && uVar3 == 0) {
                uStack_100 = (ulonglong)uVar3;
              }
              else {
                local_120 = (void *)param_1[10];
                if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar9 + uVar3);
                }
                FUN_1446dd670(&local_108,iVar9 + uVar3,0);
                if (uVar3 != 0) {
                  memcpy(local_108,local_120,(longlong)(int)uVar3 * 2);
                }
              }
              FUN_1401aebe8(&local_108,local_118,local_128);
            }
            local_f8 = (undefined4)local_108;
            uStack_f4 = local_108._4_4_;
            uStack_f0 = (uint)uStack_100;
            uStack_ec = uStack_100._4_4_;
            local_108 = (void *)0x0;
            uStack_100 = 0;
            if ((1 < local_124) && (local_118 != 0)) {
              FUN_1400020a8();
            }
            lVar6 = *(longlong *)(*(longlong *)(local_130 + 0x1b0) + 0x1e0);
            if (lVar6 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined8 *)(lVar6 + 0x68);
            }
            local_148 = &local_e0;
            FUN_143e61aa0(local_130,param_1,uVar10,local_e8);
            bVar15 = DAT_14c872bf2 == '\x01';
            if (bVar15) {
              FUN_1400020e8(&local_f8,L".yml",4);
            }
            plVar7 = *(longlong **)(DAT_14cb44718 + 8);
            local_130 = local_130 & 0xffffffff00000000;
            local_d0 = bVar15;
            if ((plVar7 != (longlong *)0x0) && (1 < uStack_f0)) {
              uVar10 = (**(code **)(*plVar7 + 0x18))(plVar7,&local_f8);
              local_130 = CONCAT44(local_130._4_4_,
                                   (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),(int)uVar10 == 0));
            }
            if (local_c0 == 0) {
LAB_143e5da39:
              if (local_c8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_c8 != (undefined8 *)0x0) {
              (**(code **)*local_c8)(local_c8,0);
              FUN_1446efa72(&local_c8,0,0,0x10);
              local_c0 = 0;
              goto LAB_143e5da39;
            }
            plVar7 = plStack_d8;
            if (plStack_d8 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_d8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_d8)(plStack_d8);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            if (CONCAT44(uStack_f4,local_f8) != 0) {
              FUN_1400020a8();
            }
            param_3 = local_131;
            if ((char)local_130 == '\0') goto LAB_143e5da8b;
            FUN_143e5c798(param_1,param_2,lVar4 + lVar13);
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x70;
      lVar13 = lVar13 + 0x50;
    } while ((longlong)uVar14 < (longlong)(int)param_1[0x10]);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e5db62 FUN_143e5db62 body=301 status=ok
// SIG undefined FUN_143e5db62(void)

undefined8 FUN_143e5db62(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x91) == '\x01') {
    *(undefined1 *)(param_1 + 0x92) = 1;
  }
  else if ((((*(char *)(param_1 + 0x9c) == '\0') && (*(char *)(param_1 + 0x8d) == '\0')) &&
           (1 < *(int *)(param_1 + 0x58))) &&
          ((*(byte **)(param_1 + 0x68) != (byte *)0x0 && ((**(byte **)(param_1 + 0x68) & 0x6b) == 3)
           ))) {
    FUN_140212f8e(local_40);
    (**(code **)(*(longlong *)*param_2 + 0x308))((longlong *)*param_2,param_1 + 0x68,local_40);
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x80);
    if (0 < (int)*(uint *)(param_1 + 0x80)) {
      lVar6 = 0x14;
      lVar7 = 0;
      lVar5 = 0;
      do {
        plVar1 = (longlong *)*param_2;
        if (*(char *)(plVar1[0x3e] + lVar6) == '\x01') {
          if ((byte)(*(char *)(plVar1[0x3e] + -0xc + lVar6) - 1U) < 2) {
            lVar4 = *(longlong *)(param_1 + 0x78) + lVar7 + 0x60;
          }
          else {
            lVar4 = *(longlong *)(param_1 + 0x78) + lVar7;
          }
          (**(code **)(*plVar1 + 0x308))(plVar1,lVar4,local_40);
          uVar2 = (ulonglong)*(uint *)(param_1 + 0x80);
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x70;
        lVar6 = lVar6 + 0x50;
      } while (lVar5 < (int)uVar2);
    }
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
    goto LAB_143e5dc6b;
  }
  uVar3 = 0;
LAB_143e5dc6b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5dc90 FUN_143e5dc90 body=1008 status=ok
// SIG undefined FUN_143e5dc90(void)

undefined8 FUN_143e5dc90(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x74) == 0) {
LAB_143e5dcfe:
    uVar9 = 0;
    goto LAB_143e5de98;
  }
  uVar12 = *(uint *)(param_2 + 0x70);
  uVar9 = 0;
  if (((int)uVar12 < 0) || (DAT_14c9647dc <= (int)uVar12)) goto LAB_143e5de98;
  lVar4 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
  if ((lVar4 == 0) ||
     ((*(int *)(lVar4 + 0x10) != *(int *)(param_2 + 0x74) ||
      ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) goto LAB_143e5dcfe;
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar10 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b434710;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_58[2] = lVar8;
  *local_58 = &PTR_FUN_14b4346a0;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != 0) {
    uVar12 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar13 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar13 = *(int *)(lVar4 + 0x10);
      bVar17 = iVar13 == 0;
      if (bVar17) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar13 = iVar3;
      }
    }
  }
  *(int *)((longlong)puVar10 + 0x1c) = iVar13;
  puVar10[4] = param_1;
  puVar10[5] = uVar9;
  iVar13 = *(int *)(param_2 + 0x48);
  if (iVar13 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar14 = 0;
    iVar3 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x40);
    if (*(uint **)(param_2 + 0x40) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x30);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar3 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar3 = iVar13 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_143e5de51;
        iVar14 = iVar14 + 0x20;
        uVar12 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar16 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar3 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar3) {
      iVar3 = iVar13;
    }
  }
  if (iVar3 != iVar13) {
    uVar12 = 0xffffffff;
    do {
      lVar4 = (longlong)iVar3 * 0x40 + *(longlong *)(param_2 + 0x20);
      *(undefined1 *)(param_1 + 0x9c) = 1;
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      if ((*(int *)(param_2 + 0x74) == 0) || (uVar11 = *(uint *)(param_2 + 0x70), (int)uVar11 < 0))
      {
LAB_143e5dff6:
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar11 < DAT_14c9647dc) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != *(int *)(param_2 + 0x74))
              ) || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143e5dff6;
          uVar9 = *puVar10;
        }
      }
      local_68 = &local_58;
      FUN_143e5e21a(uVar9,param_1,lVar4,lVar4 + 0x28);
      uVar12 = uVar12 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_2 + 0x40);
      if (*(uint **)(param_2 + 0x40) == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 0x30);
      }
      iVar2 = *(int *)(param_2 + 0x48);
      iVar3 = (int)uVar15;
      lVar4 = (longlong)iVar3;
      uVar11 = puVar5[lVar4] & uVar12;
      if (uVar11 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar6) {
          lVar8 = 0;
          do {
            uVar11 = puVar5[lVar4 + lVar8 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar3 + (int)lVar8 + 1);
              uVar12 = 0xffffffff;
              goto LAB_143e5dfc2;
            }
            iVar14 = iVar14 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar7 - lVar4 != lVar8);
          uVar12 = 0xffffffff;
          lVar4 = (longlong)iVar7;
        }
        uVar15 = lVar4 + 1U & 0xffffffff;
        iVar3 = iVar2;
      }
      else {
LAB_143e5dfc2:
        uVar16 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar16 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar3 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar3) {
          iVar3 = iVar2;
        }
      }
    } while (iVar3 != iVar13);
  }
LAB_143e5de51:
  if (local_50 == 0) {
LAB_143e5de88:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143e5de88;
  }
  uVar9 = 1;
LAB_143e5de98:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5e082 FUN_143e5e082 body=406 status=ok
// SIG undefined FUN_143e5e082(void)

ulonglong FUN_143e5e082(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte **)(param_1 + 0x68) == (byte *)0x0) || ((**(byte **)(param_1 + 0x68) & 0x6b) != 3)) {
    uVar8 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80);
    if (0 < iVar3) {
      lVar7 = 0xc;
      uVar8 = 0;
      do {
        if ((*(int *)(param_2 + 0x74) == 0) || (uVar1 = *(uint *)(param_2 + 0x70), (int)uVar1 < 0))
        {
LAB_143e5e16b:
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(param_2 + 0x74))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_143e5e16b;
            lVar5 = *plVar6;
          }
        }
        if (*(longlong *)(*(longlong *)(lVar5 + 0x1f0) + lVar7) == 0) {
          local_78 = param_3;
          FUN_143e5e6d6(param_1,param_2,param_2 + 0x10,uVar8 & 0xffffffff);
          iVar3 = *(int *)(param_1 + 0x80);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while ((longlong)uVar8 < (longlong)iVar3);
    }
    local_68 = DAT_14cb8dd68;
    local_70 = DAT_14cb8dd60;
    FUN_1448075d0(local_60);
    pcVar2 = (code *)*param_3;
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar4,local_60,param_2 + 0x10);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    uVar8 = CONCAT71((int7)((ulonglong)(param_2 + 0x10) >> 8),1);
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143e5e21a FUN_143e5e21a body=1211 status=ok
// SIG undefined FUN_143e5e21a(void)

void FUN_143e5e21a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 ****_Src;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  undefined2 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  undefined4 local_74;
  undefined1 local_70 [8];
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  iVar5 = *(int *)(param_1 + 0x25c);
  *(int *)(param_1 + 0x25c) = iVar5 + 1;
  *puVar6 = &PTR_FUN_14b433f68;
  *(int *)(puVar6 + 1) = iVar5;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)puVar6 + 0xc) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar5 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar5 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar5 = iVar10;
      }
    }
  }
  *(int *)(puVar6 + 2) = iVar5;
  FUN_1447a97f4(puVar6 + 3,param_3);
  *(undefined1 *)(puVar6 + 8) = 1;
  *puVar6 = &PTR_FUN_14b433ff8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 2;
  if (puVar6 + 9 != &DAT_14c9a1308) {
    uVar2 = *param_4;
    lVar12 = param_4[1];
    if (lVar12 == 0) {
      puVar6[9] = uVar2;
      puVar6[10] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
      plVar11 = (longlong *)puVar6[10];
      puVar6[9] = uVar2;
      puVar6[10] = lVar12;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
  iVar5 = *(int *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x268) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x26c) < iVar5 + 1U) {
    FUN_145840b16((longlong *)(param_1 + 0x260),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x260) + (longlong)iVar5 * 8) = puVar6;
  local_58 = 0;
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_50 = 0xf;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  FUN_140c1c7d8(puVar6 + 9,&local_68);
  _Src = &local_68;
  if (0xf < local_50) {
    _Src = (undefined8 ****)local_68;
  }
  uVar7 = (uint)local_58;
  local_80 = (longlong *)0x0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_58 & 0xffffffff);
  }
  local_78 = uVar7;
  if (uVar7 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1447a127e(&local_80,local_58,0);
    memcpy(local_80,_Src,(ulonglong)(uVar7 & 0x7fffffff));
  }
  if (puVar6[0xb] != 0) {
    FUN_1400020a8();
  }
  puVar6[0xb] = local_80;
  local_80 = (longlong *)0x0;
  *(uint *)(puVar6 + 0xc) = local_78;
  *(undefined4 *)((longlong)puVar6 + 100) = local_74;
  if (((longlong *)*param_5 == (longlong *)0x0 || (int)param_5[1] == 0) ||
     (cVar4 = (**(code **)(*(longlong *)*param_5 + 0x30))(), cVar4 == '\0')) goto LAB_143e5e5d7;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  FUN_1418b4370(&local_80,param_5);
  if ((local_78 == 0) ||
     ((local_80 == (longlong *)0x0 || (cVar4 = (**(code **)(*local_80 + 0x30))(), cVar4 == '\0'))))
  {
    if (local_78 != 0) {
      if (local_80 == (longlong *)0x0) goto LAB_143e5e5d7;
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      goto LAB_143e5e5c1;
    }
  }
  else {
    plVar11 = puVar6 + 0xd;
    if (*(int *)((longlong)puVar6 + 0x7c) < 1) {
      iVar5 = *(int *)(puVar6 + 0xe);
      iVar10 = *(int *)(puVar6 + 0xf);
      *(int *)(puVar6 + 0xf) = iVar10 + -1;
      if (iVar10 + -1 <= iVar5) {
        iVar10 = iVar5;
        if (0 < iVar5) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar11 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar11,iVar8);
              FUN_14005b248(plVar11);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar10 = *(int *)(puVar6 + 0xe);
          } while (iVar8 < iVar10);
        }
        iVar8 = 2;
        if (2 < iVar10 * 2) {
          iVar8 = iVar10 * 2;
        }
        *(int *)(puVar6 + 0xf) = iVar8;
        if ((iVar8 < iVar5) && (*(int *)((longlong)puVar6 + 0x74) != iVar10)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_78 != 0) && (local_80 != (longlong *)0x0)) {
      (**(code **)(*local_80 + 0x38))(local_80,local_70);
    }
    iVar5 = *(int *)(puVar6 + 0xe);
    *(uint *)(puVar6 + 0xe) = iVar5 + 1U;
    if (*(uint *)((longlong)puVar6 + 0x74) < iVar5 + 1U) {
      FUN_1447a71f6(plVar11,iVar5);
    }
    lVar12 = *plVar11;
    lVar9 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar12 + lVar9) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar9) = 0;
    *(longlong **)(lVar12 + lVar9) = local_80;
    local_80 = (longlong *)0x0;
    *(uint *)(lVar12 + 8 + lVar9) = local_78;
LAB_143e5e5c1:
    local_78 = 0;
  }
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143e5e5d7:
  FUN_1401d9a90(&local_68);
  FUN_140f1049c(param_1);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e5e6d6 FUN_143e5e6d6 body=1947 status=ok
// SIG undefined FUN_143e5e6d6(void)

void FUN_143e5e6d6(longlong param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong *local_c0;
  byte *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_2 + 0x74) == 0) {
LAB_143e5ede8:
    lVar21 = 0;
  }
  else {
    uVar18 = *(uint *)(param_2 + 0x70);
    lVar21 = 0;
    if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar18 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_2 + 0x74) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)
          ))) goto LAB_143e5ede8;
      lVar21 = *plVar9;
    }
  }
  plVar9 = (longlong *)((longlong)param_4 * 0x50 + *(longlong *)(lVar21 + 0x1f0));
  lVar21 = *(longlong *)(param_1 + 0x78);
  if (*param_3 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1446e60f4(*param_3,plVar9);
  }
  local_b8 = (byte *)*puVar10;
  local_b0 = (longlong *)puVar10[1];
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  local_c0 = param_3;
  if ((byte)((char)plVar9[1] - 1U) < 2) {
    lVar24 = (longlong)param_4 * 0x70;
    local_a8 = DAT_14cb8dcf8;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,DAT_14cb8dd00);
    FUN_1448075d0(&local_78);
    iVar7 = *(int *)(lVar21 + 0x10 + lVar24);
    iVar8 = (int)local_78;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    plVar20 = local_b0;
    if (local_b8 != (byte *)0x0) {
      if ((*local_b8 & 2) == 0) {
        plVar15 = &DAT_14c9a1288;
      }
      else {
        plVar15 = (longlong *)(*(longlong *)(local_b8 + 8) + 0x18);
      }
      if ((int)plVar15[2] != *(int *)((longlong)plVar15 + 0x3c)) {
        uVar18 = *(uint *)(lVar21 + lVar24 + 0x10);
        plVar19 = plVar15 + 8;
        if ((longlong *)plVar15[9] != (longlong *)0x0) {
          plVar19 = (longlong *)plVar15[9];
        }
        iVar17 = *(int *)((longlong)plVar19 + (ulonglong)((int)plVar15[10] - 1U & uVar18) * 4);
        if (iVar17 != -1) {
          do {
            lVar21 = *plVar15 + (longlong)iVar17 * 0x40;
            if (*(uint *)(*plVar15 + (longlong)iVar17 * 0x40) == uVar18) {
              if ((((lVar21 != 0) &&
                   (puVar10 = (undefined8 *)(lVar21 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_143e5e886;
              break;
            }
            iVar17 = *(int *)(lVar21 + 0x38);
          } while (iVar17 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_143e5e886:
    local_b8 = (byte *)*puVar10;
    plVar15 = (longlong *)puVar10[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_b0 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        puVar10 = (undefined8 *)*local_b0;
        local_b0 = plVar15;
        (*(code *)*puVar10)();
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar15 = local_b0;
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))();
          plVar15 = local_b0;
        }
      }
    }
    local_b0 = plVar15;
    if (iVar7 != iVar8) goto LAB_143e5e8e5;
    if (*(char *)((longlong)plVar9 + 0x14) != '\x01') goto LAB_143e5ec8a;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
  }
  else {
LAB_143e5e8e5:
    if ((local_b8 != (byte *)0x0) && ((*local_b8 & 0x6b) == 3)) {
      iVar7 = *(int *)(param_1 + 0x80);
      if (param_4 + 1 < iVar7) {
        uVar22 = (ulonglong)(param_4 + 1);
        lVar21 = uVar22 * 0x50 + 0xc;
        do {
          if ((*(int *)(param_2 + 0x74) == 0) ||
             (uVar18 = *(uint *)(param_2 + 0x70), (int)uVar18 < 0)) {
LAB_143e5e9cb:
            lVar24 = 0;
          }
          else {
            lVar24 = 0;
            if ((int)uVar18 < DAT_14c9647dc) {
              plVar20 = (longlong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
              if (((plVar20 == (longlong *)0x0) || ((int)plVar20[2] != *(int *)(param_2 + 0x74))) ||
                 ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) goto LAB_143e5e9cb;
              lVar24 = *plVar20;
            }
          }
          if (*(longlong *)(*(longlong *)(lVar24 + 0x1f0) + lVar21) == *plVar9) {
            local_c8 = param_5;
            FUN_143e5e6d6(param_1,param_2,&local_b8,uVar22 & 0xffffffff);
            iVar7 = *(int *)(param_1 + 0x80);
          }
          uVar22 = uVar22 + 1;
          lVar21 = lVar21 + 0x50;
        } while ((longlong)uVar22 < (longlong)iVar7);
      }
    }
    if (*(char *)((longlong)plVar9 + 0x14) == '\0') goto LAB_143e5ec8a;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    cVar6 = FUN_1418b3762(0,param_1,param_4,&local_78);
    if (cVar6 != '\0') {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      if (*(int *)(param_2 + 0x74) == 0) {
LAB_143e5ee1a:
        plVar20 = (longlong *)0x0;
      }
      else {
        uVar18 = *(uint *)(param_2 + 0x70);
        plVar20 = (longlong *)0x0;
        if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
          if ((puVar10 == (undefined8 *)0x0) ||
             ((*(int *)(puVar10 + 2) != *(int *)(param_2 + 0x74) ||
              ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143e5ee1a;
          plVar20 = (longlong *)*puVar10;
        }
      }
      cVar6 = (**(code **)(*plVar20 + 0x310))(0,param_1,&local_78,&local_a8);
      if (cVar6 != '\0') {
        pcVar4 = (code *)*param_5;
        plVar20 = param_5 + 4;
        if ((longlong *)param_5[2] != (longlong *)0x0) {
          plVar20 = (longlong *)param_5[2];
        }
        uVar11 = (**(code **)(*plVar20 + 8))(plVar20);
        (*pcVar4)(uVar11,&local_a8,&local_b8);
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
  }
  pbVar5 = (byte *)*local_c0;
  if ((byte)((char)plVar9[1] - 1U) < 2) {
    if (pbVar5 == (byte *)0x0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1446e60f4(pbVar5,plVar9);
    }
    pbVar5 = (byte *)*puVar10;
    local_c0 = (longlong *)puVar10[1];
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    plVar9 = &DAT_14c9a1288;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
      plVar9 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    iVar7 = (int)plVar9[6];
    if (iVar7 == 0) {
      uVar23 = 1;
      uVar22 = 0;
      iVar17 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)plVar9[5];
      if ((uint *)plVar9[5] == (uint *)0x0) {
        puVar12 = (uint *)(plVar9 + 3);
      }
      uVar18 = *puVar12;
      if (uVar18 == 0) {
        iVar8 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar8 = iVar7 + -1;
        }
        uVar22 = 0;
        uVar23 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar23 = uVar22;
        }
        iVar17 = 0;
        do {
          if (uVar23 == uVar22) goto LAB_143e5ec52;
          iVar17 = iVar17 + 0x20;
          uVar18 = puVar12[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar22 = 0;
        iVar17 = 0;
      }
      uVar23 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar23 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar8 = (iVar17 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar8) {
        iVar8 = iVar7;
      }
    }
    if (iVar8 != iVar7) {
      uVar18 = 0xffffffff;
      do {
        lVar21 = *plVar9;
        lVar24 = (longlong)iVar8 * 0x40;
        *(undefined8 *)(lVar21 + 0x28 + lVar24) = 0;
        plVar20 = *(longlong **)(lVar21 + 0x30 + lVar24);
        if (plVar20 != (longlong *)0x0) {
          *(undefined8 *)(lVar24 + lVar21 + 0x30) = 0;
          LOCK();
          plVar15 = plVar20 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
        uVar18 = uVar18 & ~(uint)uVar23;
        puVar12 = (uint *)plVar9[5];
        if ((uint *)plVar9[5] == (uint *)0x0) {
          puVar12 = (uint *)(plVar9 + 3);
        }
        iVar3 = (int)plVar9[6];
        iVar8 = (int)uVar22;
        lVar21 = (longlong)iVar8;
        uVar16 = puVar12[lVar21] & uVar18;
        if (uVar16 == 0) {
          iVar13 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar13 = iVar3 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar8 < iVar13) {
            lVar24 = 0;
            do {
              uVar16 = puVar12[lVar21 + lVar24 + 1];
              if (uVar16 != 0) {
                uVar22 = (ulonglong)(iVar8 + (int)lVar24 + 1);
                uVar18 = 0xffffffff;
                goto LAB_143e5ed9f;
              }
              iVar17 = iVar17 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar14 - lVar21 != lVar24);
            uVar18 = 0xffffffff;
            iVar8 = iVar14;
          }
          uVar22 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_143e5ed9f:
          uVar23 = (ulonglong)(-uVar16 & uVar16);
          uVar2 = uVar23 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar8 = (iVar17 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar7);
    }
LAB_143e5ec52:
    plVar9 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_c0 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*local_c0)(local_c0);
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
  else {
    puVar10 = &DAT_14c9a1288;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
      puVar10 = (undefined8 *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    FUN_1446dcdd4(&local_a8,plVar9);
    FUN_14045886c(puVar10,&local_a8);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_143e5ec8a:
  plVar9 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_b0 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e5ee72 FUN_143e5ee72 body=538 status=ok
// SIG undefined FUN_143e5ee72(void)

void FUN_143e5ee72(longlong param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b0 [6];
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  int local_60 [6];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (param_3 == 0) {
    local_88 = DAT_14cb8dd60;
    uStack_80 = CONCAT44(uStack_80._4_4_,DAT_14cb8dd68);
    FUN_1448075d0(local_60);
    iVar3 = local_60[0];
    iVar5 = *param_2;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (iVar5 != iVar3) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_c0 = DAT_14cb8dd60;
      local_b8 = DAT_14cb8dd68;
      FUN_1448075d0(local_60);
      iVar5 = *param_2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (iVar5 == local_60[0]) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        plVar6 = *(longlong **)(param_1 + 0x168);
        if (plVar6 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x168) = 0;
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
      }
      else {
        cVar4 = (**(code **)(*plVar6 + 0x318))(plVar6,param_1,param_2,&local_88);
        if (cVar4 != '\0') {
          FUN_1447a97f4(local_b0,param_2);
          if ((longlong)*(int *)(param_1 + 0x178) != 0) {
            lVar7 = 0;
            iVar5 = 0;
            do {
              if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + lVar7) + 8) == local_b0[0]
                 ) {
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
                if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x178))) {
                  FUN_1489b3192(param_1 + 0x170,iVar5);
                  FUN_1489b3208(param_1 + 0x170);
                }
                goto LAB_143e5f02d;
              }
              iVar5 = iVar5 + 1;
              lVar7 = lVar7 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != lVar7);
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
        }
      }
LAB_143e5f02d:
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5f08e FUN_143e5f08e body=85 status=ok
// SIG undefined FUN_143e5f08e(void)

undefined8 * FUN_143e5f08e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0703c0;
  FUN_1447a97f4(param_1 + 1,&DAT_14c9485f0);
  FUN_1447a97f4(param_1 + 6,&DAT_14c9485f0);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x4ade3d;
  return param_1;
}



// FUNCTION 143e5f0e4 FUN_143e5f0e4 body=1909 status=ok
// SIG undefined FUN_143e5f0e4(void)

void FUN_143e5f0e4(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  size_t sVar5;
  char **ppcVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char **ppcVar11;
  uint uVar12;
  char *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  longlong local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  char *local_160;
  int local_158;
  undefined1 local_154;
  longlong local_148;
  char **local_60;
  char **local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined1 *)(param_1 + 0x58) = 3;
  uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db38);
  local_178 = DAT_14cb8db30;
  FUN_1448075d0(&local_160);
  pbVar1 = (byte *)*param_3;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar14 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar10[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar10[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar7 = *plVar10 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar8 * 0x40) == (uint)local_160) {
            if ((((lVar7 != 0) &&
                 (puVar16 = (undefined8 *)(lVar7 + 0x28), puVar16 != (undefined8 *)0x0)) &&
                ((byte *)*puVar16 != (byte *)0x0)) && ((*(byte *)*puVar16 & 0x40) == 0))
            goto LAB_143e5f1c3;
            break;
          }
          iVar8 = *(int *)(lVar7 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar16 = &DAT_14c9a1308;
LAB_143e5f1c3:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar16 == (byte *)0x0) || ((*(byte *)*puVar16 & 0x6b) != 3)) goto LAB_143e5f6e6;
  uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db50);
  local_178 = DAT_14cb8db48;
  FUN_1448075d0(&local_160);
  pbVar1 = (byte *)*puVar16;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar14 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar10[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar10[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar7 = *plVar10 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar8 * 0x40) == (uint)local_160) {
            if (((lVar7 != 0) &&
                (puVar17 = (undefined8 *)(lVar7 + 0x28), puVar17 != (undefined8 *)0x0)) &&
               (((byte *)*puVar17 != (byte *)0x0 && ((*(byte *)*puVar17 & 0x40) == 0))))
            goto LAB_143e5f29d;
            break;
          }
          iVar8 = *(int *)(lVar7 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar17 = &DAT_14c9a1308;
LAB_143e5f29d:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  pbVar1 = (byte *)*puVar17;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) {
    pcVar2 = *(char **)(pbVar1 + 8);
    local_60 = (char **)0x0;
    if (pcVar2 == (char *)0x0) {
      local_58 = (char **)0x0;
      local_50 = 0;
    }
    else {
      sVar5 = strlen(pcVar2);
      iVar8 = (int)sVar5;
      uVar12 = iVar8 + 1;
      local_50 = iVar8;
      if (uVar12 < 0x81) {
        ppcVar6 = (char **)0x0;
      }
      else {
        FUN_1446efa72(&local_60,0,uVar12,2);
        ppcVar6 = local_60;
      }
      ppcVar11 = &local_160;
      if (ppcVar6 != (char **)0x0) {
        ppcVar11 = ppcVar6;
      }
      local_58 = ppcVar11;
      if (-1 < iVar8) {
        uVar9 = 0;
        do {
          *(short *)((longlong)ppcVar11 + uVar9 * 2) = (short)pcVar2[uVar9];
          uVar9 = uVar9 + 1;
        } while (uVar12 != uVar9);
      }
    }
    FUN_140056680(local_188,local_58);
    cVar3 = FUN_140b10a34(local_188,&local_178);
    if (cVar3 == '\0') {
      local_178 = 0;
      uStack_170 = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)local_178;
    *(undefined4 *)(param_1 + 0x60) = local_178._4_4_;
    *(undefined4 *)(param_1 + 100) = (undefined4)uStack_170;
    *(undefined4 *)(param_1 + 0x68) = uStack_170._4_4_;
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (char **)0x0) {
      FUN_1400020a8();
    }
  }
  uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db68);
  local_178 = DAT_14cb8db60;
  FUN_1448075d0(&local_160);
  pbVar1 = (byte *)*puVar16;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar14 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar10[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar10[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar7 = *plVar10 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar8 * 0x40) == (uint)local_160) {
            if ((((lVar7 != 0) &&
                 (puVar17 = (undefined8 *)(lVar7 + 0x28), puVar17 != (undefined8 *)0x0)) &&
                ((byte *)*puVar17 != (byte *)0x0)) && ((*(byte *)*puVar17 & 0x40) == 0))
            goto LAB_143e5f436;
            break;
          }
          iVar8 = *(int *)(lVar7 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar17 = &DAT_14c9a1308;
LAB_143e5f436:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar17 != (byte *)0x0) && ((*(byte *)*puVar17 & 0x6b) == 1)) {
    lVar7 = FUN_140d7984c(puVar17,0);
    local_190 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    FUN_14021300e(&local_160,0x7b2,1,1);
    *(char **)(param_1 + 0x70) = local_160 + lVar7 * 10000000;
  }
  uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db80);
  local_178 = DAT_14cb8db78;
  FUN_1448075d0(&local_160);
  pbVar1 = (byte *)*puVar16;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar14 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar10[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar10[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar7 = *plVar10 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar8 * 0x40) == (uint)local_160) {
            if (((lVar7 != 0) &&
                (puVar17 = (undefined8 *)(lVar7 + 0x28), puVar17 != (undefined8 *)0x0)) &&
               (((byte *)*puVar17 != (byte *)0x0 && ((*(byte *)*puVar17 & 0x40) == 0))))
            goto LAB_143e5f554;
            break;
          }
          iVar8 = *(int *)(lVar7 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar17 = &DAT_14c9a1308;
LAB_143e5f554:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  pbVar1 = (byte *)*puVar17;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) {
    pcVar2 = *(char **)(pbVar1 + 8);
    if (pcVar2 == (char *)0x0) {
LAB_143e5f768:
      uVar9 = 0;
      uVar18 = 0;
    }
    else {
      sVar5 = strlen(pcVar2);
      iVar8 = (int)sVar5;
      if (iVar8 == 0) goto LAB_143e5f768;
      lVar7 = (longlong)iVar8;
      pcVar13 = pcVar2 + lVar7 + -1;
      uVar12 = 0;
      if (pcVar13 < pcVar2) {
        lVar20 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar13 - 0x30U)) break;
          uVar12 = uVar12 + 1;
          pcVar13 = pcVar13 + -1;
        } while (pcVar2 <= pcVar13);
        lVar20 = 0;
        if ((((uVar12 != 0) && ((int)uVar12 < iVar8)) && (lVar20 = 0, uVar12 < 0xb)) &&
           (lVar15 = -(ulonglong)uVar12, pcVar2[lVar15 + lVar7 + -1] == '_')) {
          if ((uVar12 == 1) || (pcVar2[lVar15 + lVar7] != '0')) {
            lVar19 = 0;
            do {
              lVar20 = (longlong)pcVar2[lVar15 + lVar7] + lVar19 * 10;
              lVar19 = lVar20 + -0x30;
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0);
            if (lVar19 < 0x7fffffff) {
              iVar8 = ~uVar12 + iVar8;
              lVar20 = lVar20 + -0x2f;
              goto LAB_143e5f5da;
            }
          }
          lVar20 = 0;
        }
LAB_143e5f5da:
        if (iVar8 == 0) goto LAB_143e5f768;
      }
      local_154 = 0;
      local_160 = pcVar2;
      local_158 = iVar8;
      uVar12 = FUN_14001a6c0(&local_160,1);
      uVar18 = lVar20 << 0x20;
      uVar9 = (ulonglong)uVar12;
    }
    *(ulonglong *)(param_1 + 0x78) = uVar9 | uVar18;
  }
  uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db98);
  local_178 = DAT_14cb8db90;
  FUN_1448075d0(&local_160);
  pbVar1 = (byte *)*puVar16;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar14 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar10[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar10[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar7 = *plVar10 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar8 * 0x40) == (uint)local_160) {
            if (((lVar7 != 0) &&
                (puVar16 = (undefined8 *)(lVar7 + 0x28), puVar16 != (undefined8 *)0x0)) &&
               (((byte *)*puVar16 != (byte *)0x0 && ((*(byte *)*puVar16 & 0x40) == 0))))
            goto LAB_143e5f6b5;
            break;
          }
          iVar8 = *(int *)(lVar7 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar16 = &DAT_14c9a1308;
LAB_143e5f6b5:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar16 != (byte *)0x0) && ((*(byte *)*puVar16 & 0x6b) == 1)) {
    uVar4 = FUN_1410451c0(puVar16,0);
    *(undefined4 *)(param_1 + 0x80) = uVar4;
  }
LAB_143e5f6e6:
  if (*(longlong *)(param_1 + 0x78) == 0) {
    (**(code **)(*param_2 + 0x2f8))(param_2,&local_160);
    *(char **)(param_1 + 0x78) = local_160;
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5f85a FUN_143e5f85a body=69 status=ok
// SIG undefined FUN_143e5f85a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5f85a(void)

{
  _DAT_14cb8dbb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5f89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8dbc0,1);
  return;
}



// FUNCTION 143e5f89f FUN_143e5f89f body=69 status=ok
// SIG undefined FUN_143e5f89f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5f89f(void)

{
  _DAT_14cb8dcb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5f8e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8dcc0,1);
  return;
}



// FUNCTION 143e5f8e4 FUN_143e5f8e4 body=105 status=ok
// SIG undefined FUN_143e5f8e4(void)

undefined8
FUN_143e5f8e4(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  
  if ((((param_1 != 0) && (DAT_14cb8dcb0 != '\0')) && ((byte *)*param_3 != (byte *)0x0)) &&
     (((*(byte *)*param_3 & 0x6b) == 3 && (cVar1 = FUN_1489af962(), cVar1 != '\0')))) {
    plVar2 = (longlong *)FUN_1489afb3c(param_5);
    *plVar2 = param_1;
    plVar2[1] = *param_4;
    FUN_1446dcc2e(plVar2 + 4,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 143e5f94d FUN_143e5f94d body=218 status=ok
// SIG undefined FUN_143e5f94d(void)

void FUN_143e5f94d(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  longlong **local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = &local_58;
  local_68 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = FUN_143e66254;
  local_70 = 0;
  local_58 = param_4;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",(int)param_4[1],1);
  if ((longlong)(int)param_4[1] != 0) {
    lVar2 = (longlong)(int)param_4[1] * 0x30;
    lVar1 = *param_4 + 0x10;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        local_78 = 0;
        FUN_140516f2a(*(longlong *)(lVar1 + 0x10),lVar1 + -8,lVar1,0);
      }
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e5fa28 FUN_143e5fa28 body=2143 status=ok
// SIG undefined FUN_143e5fa28(void)

ulonglong FUN_143e5fa28(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  uint *puVar16;
  int iVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_168 [40];
  undefined4 local_140;
  uint *local_138;
  uint local_124;
  uint *local_120;
  ulonglong local_118;
  uint **local_110;
  code *local_108;
  uint ***pppuStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  uint local_d8 [2];
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  longlong local_78;
  uint local_70;
  uint local_68;
  uint uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1[0x36] == 0) {
    uVar15 = 0;
  }
  else {
    lVar21 = *(longlong *)(param_1[0x36] + 0x30);
    if ((lVar21 != 0) && (lVar21 = *(longlong *)(lVar21 + 0x360), lVar21 != 0)) {
      lVar7 = FUN_1405e677a(DAT_14cb0d2b0,lVar21);
      uVar15 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if ((*(char *)(lVar7 + 0x88) != '\0') || ((*(byte *)(lVar21 + 0x155) & 0x21) != 1))
      goto LAB_143e6023b;
    }
    puVar16 = (uint *)(param_1 + 0x2e);
    local_e8 = (uint *)0x0;
    uStack_e0 = 0;
    uVar6 = *(uint *)(param_1 + 0x31);
    if (uVar6 == 0) {
      uVar13 = 1;
      uVar19 = 0;
      iVar20 = 0;
      uVar5 = 0;
    }
    else {
      puVar8 = (uint *)param_1[0x30];
      if ((uint *)param_1[0x30] == (uint *)0x0) {
        puVar8 = puVar16;
      }
      uVar5 = *puVar8;
      if (uVar5 == 0) {
        iVar20 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar20 = uVar6 - 1;
        }
        uVar19 = 0;
        uVar15 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar15 = uVar19;
        }
        iVar20 = 0;
        do {
          if (uVar15 == uVar19) {
            uVar15 = 0;
            goto LAB_143e60148;
          }
          iVar20 = iVar20 + 0x20;
          uVar5 = puVar8[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar19 = 0;
        iVar20 = 0;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar15 = uVar13 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar5 = (iVar20 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if ((int)uVar6 <= (int)uVar5) {
        uVar5 = uVar6;
      }
    }
    uVar15 = 0;
    if (uVar5 != uVar6) {
      uVar22 = 0xffffffff;
      local_124 = 0;
      bVar14 = false;
      local_120 = puVar16;
      local_118 = (ulonglong)uVar6;
      do {
        lVar7 = (longlong)(int)uVar5 * 3;
        lVar21 = *(longlong *)(param_1[0x2c] + 8 + (longlong)(int)uVar5 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (lVar21 != 0)) {
          lVar7 = FUN_1456cec3c(lVar21);
          puVar16 = local_120;
LAB_143e5fba6:
          if ((*(char *)(lVar21 + 0x88) == '\x01') && (*(uint *)(lVar21 + 0x2c) < 2)) {
            if ((*(char *)(lVar21 + 0x8a) == '\x01') && (*(char *)(lVar21 + 0x8b) != '\x01')) {
              local_124 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
            }
            else {
              uVar9 = FUN_140f5a10e(lVar21,param_1[0x36]);
              if ((char)uVar9 == '\0') {
                local_124 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                puVar16 = local_120;
              }
              else {
                local_108 = (code *)0x0;
                pppuStack_100 = (uint ***)0x0;
                local_f8 = 0;
                local_f0 = 0xffff;
                FUN_140fe4ff6(param_1,lVar21,&local_108);
                FUN_140f5a346(param_1,&local_108,lVar21,0xffffffff);
                local_98 = 0;
                local_90 = 0;
                local_d8[0] = 0;
                local_d8[1] = 0;
                uStack_d0 = (uint **)0x0;
                local_c8 = 0;
                plStack_c0 = (longlong *)0x0;
                local_b8 = 0;
                uStack_b0 = 0;
                uStack_8c = 0x80;
                uStack_88 = 0xffffffff;
                uStack_84 = 0;
                local_78 = 0;
                local_70 = 0;
                uStack_64 = 0;
                if (param_1 == (longlong *)0x0) {
                  local_68 = 0;
                  uVar6 = 0;
                }
                else {
                  local_68 = *(uint *)((longlong)param_1 + 0xc);
                  if ((int)local_68 < DAT_14c9647dc) {
                    lVar7 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
                  }
                  else {
                    lVar7 = 0;
                  }
                  uVar6 = *(uint *)(lVar7 + 0x10);
                  if (*(uint *)(lVar7 + 0x10) == 0) {
                    LOCK();
                    iVar17 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar5 = DAT_14c964868 + 1;
                    bVar23 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar17;
                    if (bVar23) {
                      local_124 = uVar5;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar5);
                      uVar5 = local_124;
                    }
                    LOCK();
                    uVar6 = *(uint *)(lVar7 + 0x10);
                    bVar23 = uVar6 == 0;
                    if (bVar23) {
                      *(uint *)(lVar7 + 0x10) = uVar5;
                      uVar6 = 0;
                    }
                    UNLOCK();
                    if (bVar23) {
                      uVar6 = uVar5;
                    }
                  }
                }
                uVar5 = *(uint *)(lVar21 + 0xc);
                local_d8[0] = uVar5;
                if ((int)uVar5 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                uVar5 = *(uint *)(lVar7 + 0x10);
                uStack_64 = uVar6;
                if (*(uint *)(lVar7 + 0x10) == 0) {
                  LOCK();
                  iVar17 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar6 = DAT_14c964868 + 1;
                  bVar23 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar17;
                  if (bVar23) {
                    local_124 = uVar6;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar6);
                    uVar6 = local_124;
                  }
                  LOCK();
                  uVar5 = *(uint *)(lVar7 + 0x10);
                  bVar23 = uVar5 == 0;
                  if (bVar23) {
                    *(uint *)(lVar7 + 0x10) = uVar6;
                    uVar5 = 0;
                  }
                  UNLOCK();
                  if (bVar23) {
                    uVar5 = uVar6;
                  }
                }
                local_d8[1] = uVar5;
                FUN_140212f8e(&local_110);
                uStack_d0 = local_110;
                cVar4 = FUN_143e5db62(lVar21,&local_108);
                uVar15 = uStack_e0;
                bVar23 = true;
                if (cVar4 != '\0') {
                  lVar21 = (longlong)(int)uStack_e0;
                  uVar6 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
                  if (uStack_e0._4_4_ < uVar6) {
                    FUN_1418b4202(&local_e8,uVar15 & 0xffffffff);
                  }
                  puVar16 = local_e8 + lVar21 * 0x1e;
                  *puVar16 = local_d8[0];
                  puVar16[1] = local_d8[1];
                  puVar16[2] = (uint)uStack_d0;
                  puVar16[3] = uStack_d0._4_4_;
                  *(undefined8 *)(local_e8 + lVar21 * 0x1e + 4) = local_c8;
                  *(longlong **)(local_e8 + lVar21 * 0x1e + 6) = plStack_c0;
                  if (plStack_c0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                    UNLOCK();
                  }
                  puVar16 = local_e8 + lVar21 * 0x1e;
                  puVar16[0x10] = 0;
                  puVar16[0x11] = 0;
                  puVar16[0x12] = 0;
                  puVar16[8] = 0;
                  puVar16[9] = 0;
                  puVar16[10] = 0;
                  puVar16[0xb] = 0;
                  puVar16[0x13] = 0x80;
                  puVar16[0x14] = 0xffffffff;
                  puVar16[0x15] = 0;
                  puVar16[0x18] = 0;
                  puVar16[0x19] = 0;
                  puVar16[0x1a] = 0;
                  if (puVar16 != local_d8) {
                    *(undefined8 *)(puVar16 + 8) = local_b8;
                    local_b8 = 0;
                    puVar16[10] = (uint)uStack_b0;
                    puVar16[0xb] = uStack_b0._4_4_;
                    uStack_b0 = 0;
                    if (local_98 == 0) {
                      puVar16[0xc] = local_a8;
                      puVar16[0xd] = uStack_a4;
                      puVar16[0xe] = uStack_a0;
                      puVar16[0xf] = uStack_9c;
                    }
                    if (*(longlong *)(puVar16 + 0x10) != 0) {
                      FUN_1400020a8();
                    }
                    *(longlong *)(puVar16 + 0x10) = local_98;
                    local_98 = 0;
                    puVar16[0x12] = local_90;
                    puVar16[0x13] = uStack_8c;
                    local_90 = 0;
                    uStack_8c = 0;
                    puVar16[0x14] = uStack_88;
                    puVar16[0x15] = uStack_84;
                    uStack_88 = 0xffffffff;
                    uStack_84 = 0;
                  }
                  if (local_78 == 0) {
                    puVar16[0x16] = local_80;
                  }
                  if (*(longlong *)(puVar16 + 0x18) != 0) {
                    FUN_1400020a8();
                  }
                  *(longlong *)(puVar16 + 0x18) = local_78;
                  local_78 = 0;
                  puVar16[0x1a] = local_70;
                  *(ulonglong *)(puVar16 + 0x1c) = CONCAT44(uStack_64,local_68);
                  bVar23 = bVar14;
                }
                bVar14 = bVar23;
                local_70 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                FUN_140cb2c32(&local_b8);
                plVar3 = plStack_c0;
                if (plStack_c0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_c0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_c0)(plStack_c0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                    }
                  }
                }
                local_124 = 0;
                puVar16 = local_120;
              }
            }
          }
        }
        else if (lVar21 != 0) goto LAB_143e5fba6;
        uVar22 = uVar22 & ~(uint)uVar13;
        puVar8 = (uint *)param_1[0x30];
        if ((uint *)param_1[0x30] == (uint *)0x0) {
          puVar8 = puVar16;
        }
        uVar6 = *(uint *)(param_1 + 0x31);
        iVar17 = (int)uVar19;
        lVar21 = (longlong)iVar17;
        uVar5 = puVar8[lVar21] & uVar22;
        if (uVar5 == 0) {
          iVar10 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar10 = uVar6 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar17) {
            iVar11 = iVar17;
          }
          if (iVar17 < iVar10) {
            lVar7 = 0;
            do {
              uVar5 = puVar8[lVar21 + lVar7 + 1];
              if (uVar5 != 0) {
                uVar19 = (ulonglong)(iVar17 + (int)lVar7 + 1);
                uVar22 = 0xffffffff;
                goto LAB_143e5ffd5;
              }
              iVar20 = iVar20 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar11 - lVar21 != lVar7);
            uVar22 = 0xffffffff;
            iVar17 = iVar11;
          }
          uVar19 = (ulonglong)(iVar17 + 1);
          puVar16 = local_120;
          uVar5 = uVar6;
        }
        else {
LAB_143e5ffd5:
          uVar13 = (ulonglong)(-uVar5 & uVar5);
          uVar15 = uVar13 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar5 = (iVar20 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar6 <= (int)uVar5) {
            uVar5 = uVar6;
          }
        }
      } while (uVar5 != (uint)local_118);
      if (bVar14) {
        (**(code **)(*param_1 + 0x2b0))(param_1);
      }
      uVar15 = (ulonglong)local_124;
    }
LAB_143e60148:
    local_110 = &local_e8;
    pppuStack_100 = &local_110;
    local_138 = local_d8;
    local_d8[0] = 0;
    local_d8[1] = 0;
    uStack_d0 = (uint **)((ulonglong)uStack_d0 & 0xffffffff00000000);
    local_108 = FUN_143e66406;
    local_140 = 0;
    FUN_1401f8d10(L"ParallelFor Task",uStack_e0 & 0xffffffff,1);
    uVar18 = 0;
    if ((longlong)(int)uStack_e0 != 0) {
      lVar21 = (longlong)(int)uStack_e0 * 0x78;
      puVar16 = local_e8;
      do {
        if ((((puVar16[1] != 0) && (uVar6 = *puVar16, -1 < (int)uVar6)) &&
            ((int)uVar6 < DAT_14c9647dc)) &&
           (((puVar12 = (undefined8 *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             puVar12 != (undefined8 *)0x0 && (*(uint *)(puVar12 + 2) == puVar16[1])) &&
            ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
            uVar9 = *puVar12;
          }
          else {
            uVar9 = 0;
          }
          FUN_143e5dc90(uVar9,puVar16);
        }
        puVar16 = puVar16 + 0x1e;
        lVar21 = lVar21 + -0x78;
      } while (lVar21 != 0);
      uVar18 = (int)uStack_e0;
    }
    FUN_1418b4195(local_e8,uVar18);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143e6023b:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffff01;
}



// FUNCTION 143e60288 FUN_143e60288 body=2180 status=ok
// SIG undefined FUN_143e60288(void)

ulonglong FUN_143e60288(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  size_t sVar10;
  char **ppcVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  char **ppcVar20;
  uint uVar21;
  ulonglong unaff_RBP;
  char *pcVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_1a8 [32];
  byte *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char *local_160;
  int local_158;
  undefined1 local_154;
  longlong local_148;
  char **local_60;
  char **local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 3)) {
    uVar15 = 0;
    goto LAB_143e60664;
  }
  uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db38);
  local_178 = DAT_14cb8db30;
  FUN_1448075d0(&local_160);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar14 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar12[9];
      }
      iVar9 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar9 != -1) {
        do {
          lVar19 = *plVar12 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar9 * 0x40) == (uint)local_160) {
            if ((((lVar19 != 0) &&
                 (puVar13 = (undefined8 *)(lVar19 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                ((byte *)*puVar13 != (byte *)0x0)) && ((*(byte *)*puVar13 & 0x40) == 0))
            goto LAB_143e6037b;
            break;
          }
          iVar9 = *(int *)(lVar19 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_143e6037b:
  pbVar2 = (byte *)*puVar13;
  plVar12 = (longlong *)puVar13[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 0x6b) != 3)) {
    uVar15 = 0;
  }
  else {
    uStack_170 = CONCAT44(uStack_170._4_4_,DAT_14cb8db50);
    local_178 = DAT_14cb8db48;
    FUN_1448075d0(&local_160);
    if ((*pbVar2 & 2) == 0) {
      plVar14 = &DAT_14c9a1288;
    }
    else {
      plVar14 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
      plVar16 = plVar14 + 8;
      if ((longlong *)plVar14[9] != (longlong *)0x0) {
        plVar16 = (longlong *)plVar14[9];
      }
      iVar9 = *(int *)((longlong)plVar16 + (ulonglong)((int)plVar14[10] - 1U & (uint)local_160) * 4)
      ;
      if (iVar9 != -1) {
        do {
          lVar19 = *plVar14 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar14 + (longlong)iVar9 * 0x40) == (uint)local_160) {
            if (((lVar19 != 0) &&
                (puVar13 = (undefined8 *)(lVar19 + 0x28), puVar13 != (undefined8 *)0x0)) &&
               (((byte *)*puVar13 != (byte *)0x0 && ((*(byte *)*puVar13 & 0x40) == 0))))
            goto LAB_143e60460;
            break;
          }
          iVar9 = *(int *)(lVar19 + 0x38);
        } while (iVar9 != -1);
      }
    }
    puVar13 = &DAT_14c9a1308;
LAB_143e60460:
    pbVar3 = (byte *)*puVar13;
    plVar14 = (longlong *)puVar13[1];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 0x6b) != 1)) {
LAB_143e6061e:
      uVar15 = 0;
    }
    else {
      local_178 = 0;
      uStack_170 = 0;
      pcVar4 = *(char **)(pbVar3 + 8);
      local_60 = (char **)0x0;
      if (pcVar4 == (char *)0x0) {
        local_58 = (char **)0x0;
        local_50 = 0;
      }
      else {
        sVar10 = strlen(pcVar4);
        iVar9 = (int)sVar10;
        uVar21 = iVar9 + 1;
        unaff_RBP = (ulonglong)uVar21;
        local_50 = iVar9;
        if (uVar21 < 0x81) {
          ppcVar11 = (char **)0x0;
        }
        else {
          FUN_1446efa72(&local_60,0,uVar21,2);
          ppcVar11 = local_60;
        }
        ppcVar20 = &local_160;
        if (ppcVar11 != (char **)0x0) {
          ppcVar20 = ppcVar11;
        }
        local_58 = ppcVar20;
        if (-1 < iVar9) {
          uVar15 = 0;
          do {
            *(short *)((longlong)ppcVar20 + uVar15 * 2) = (short)pcVar4[uVar15];
            uVar15 = uVar15 + 1;
          } while (unaff_RBP != uVar15);
        }
      }
      FUN_140056680(&local_188,local_58);
      cVar8 = FUN_140b10a34(&local_188,&local_178);
      if (cVar8 == '\0') {
        if (local_188 != (byte *)0x0) {
          FUN_1400020a8();
        }
        if (local_60 != (char **)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143e6061e;
      }
      iVar5 = local_178._4_4_;
      iVar9 = (int)local_178;
      iVar6 = (int)uStack_170;
      iVar7 = uStack_170._4_4_;
      if (local_188 != (byte *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (char **)0x0) {
        FUN_1400020a8();
      }
      if (((iVar5 == 0 && iVar9 == 0) && iVar6 == 0) && iVar7 == 0) goto LAB_143e6061e;
      local_180 = (longlong *)CONCAT44(local_180._4_4_,DAT_14cb8db68);
      local_188 = DAT_14cb8db60;
      FUN_1448075d0(&local_160);
      if ((*pbVar2 & 2) == 0) {
        plVar16 = &DAT_14c9a1288;
      }
      else {
        plVar16 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar16[2] != *(int *)((longlong)plVar16 + 0x3c)) {
        plVar17 = plVar16 + 8;
        if ((longlong *)plVar16[9] != (longlong *)0x0) {
          plVar17 = (longlong *)plVar16[9];
        }
        iVar9 = *(int *)((longlong)plVar17 +
                        (ulonglong)((int)plVar16[10] - 1U & (uint)local_160) * 4);
        if (iVar9 != -1) {
          do {
            lVar19 = *plVar16 + (longlong)iVar9 * 0x40;
            if (*(uint *)(*plVar16 + (longlong)iVar9 * 0x40) == (uint)local_160) {
              if ((((lVar19 != 0) &&
                   (puVar13 = (undefined8 *)(lVar19 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar13 != (byte *)0x0)) && ((*(byte *)*puVar13 & 0x40) == 0))
              goto LAB_143e606c6;
              break;
            }
            iVar9 = *(int *)(lVar19 + 0x38);
          } while (iVar9 != -1);
        }
      }
      puVar13 = &DAT_14c9a1308;
LAB_143e606c6:
      pbVar3 = (byte *)*puVar13;
      plVar16 = (longlong *)puVar13[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 0x6b) != 1)) {
        uVar15 = 0;
      }
      else {
        local_180 = (longlong *)CONCAT44(local_180._4_4_,DAT_14cb8db80);
        local_188 = DAT_14cb8db78;
        FUN_1448075d0(&local_160);
        if ((*pbVar2 & 2) == 0) {
          plVar17 = &DAT_14c9a1288;
        }
        else {
          plVar17 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        if ((int)plVar17[2] != *(int *)((longlong)plVar17 + 0x3c)) {
          plVar18 = plVar17 + 8;
          if ((longlong *)plVar17[9] != (longlong *)0x0) {
            plVar18 = (longlong *)plVar17[9];
          }
          iVar9 = *(int *)((longlong)plVar18 +
                          (ulonglong)((int)plVar17[10] - 1U & (uint)local_160) * 4);
          if (iVar9 != -1) {
            do {
              lVar19 = *plVar17 + (longlong)iVar9 * 0x40;
              if (*(uint *)(*plVar17 + (longlong)iVar9 * 0x40) == (uint)local_160) {
                if (((lVar19 != 0) &&
                    (puVar13 = (undefined8 *)(lVar19 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar13 != (byte *)0x0 && ((*(byte *)*puVar13 & 0x40) == 0))))
                goto LAB_143e607b1;
                break;
              }
              iVar9 = *(int *)(lVar19 + 0x38);
            } while (iVar9 != -1);
          }
        }
        puVar13 = &DAT_14c9a1308;
LAB_143e607b1:
        pbVar3 = (byte *)*puVar13;
        plVar17 = (longlong *)puVar13[1];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 0x6b) != 1)) {
LAB_143e608ff:
          uVar15 = 0;
        }
        else {
          pcVar4 = *(char **)(pbVar3 + 8);
          if (pcVar4 == (char *)0x0) {
LAB_143e60a11:
            iVar9 = 0;
            lVar25 = 0;
          }
          else {
            sVar10 = strlen(pcVar4);
            iVar9 = (int)sVar10;
            if (iVar9 == 0) goto LAB_143e60a11;
            lVar19 = (longlong)iVar9;
            pcVar22 = pcVar4 + lVar19 + -1;
            uVar21 = 0;
            if (pcVar22 < pcVar4) {
              lVar25 = 0;
            }
            else {
              do {
                if (9 < (byte)(*pcVar22 - 0x30U)) break;
                uVar21 = uVar21 + 1;
                pcVar22 = pcVar22 + -1;
              } while (pcVar4 <= pcVar22);
              lVar25 = 0;
              if ((((uVar21 != 0) && ((int)uVar21 < iVar9)) && (lVar25 = 0, uVar21 < 0xb)) &&
                 (lVar24 = -(ulonglong)uVar21, pcVar4[lVar24 + lVar19 + -1] == '_')) {
                if ((uVar21 == 1) || (pcVar4[lVar24 + lVar19] != '0')) {
                  lVar26 = 0;
                  do {
                    lVar25 = (longlong)pcVar4[lVar24 + lVar19] + lVar26 * 10;
                    lVar26 = lVar25 + -0x30;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 != 0);
                  if (lVar26 < 0x7fffffff) {
                    iVar9 = ~uVar21 + iVar9;
                    lVar25 = lVar25 + -0x2f;
                    goto LAB_143e60841;
                  }
                }
                lVar25 = 0;
              }
LAB_143e60841:
              if (iVar9 == 0) goto LAB_143e60a11;
            }
            local_154 = 0;
            local_160 = pcVar4;
            local_158 = iVar9;
            iVar9 = FUN_14001a6c0(&local_160,1);
            lVar25 = lVar25 << 0x20;
          }
          if (iVar9 == 0 && lVar25 == 0) goto LAB_143e608ff;
          local_180 = (longlong *)CONCAT44(local_180._4_4_,DAT_14cb8db98);
          local_188 = DAT_14cb8db90;
          FUN_1448075d0(&local_160);
          if ((*pbVar2 & 2) == 0) {
            plVar18 = &DAT_14c9a1288;
          }
          else {
            plVar18 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          if ((int)plVar18[2] != *(int *)((longlong)plVar18 + 0x3c)) {
            plVar23 = plVar18 + 8;
            if ((longlong *)plVar18[9] != (longlong *)0x0) {
              plVar23 = (longlong *)plVar18[9];
            }
            iVar9 = *(int *)((longlong)plVar23 +
                            (ulonglong)((int)plVar18[10] - 1U & (uint)local_160) * 4);
            if (iVar9 != -1) {
              do {
                lVar19 = *plVar18 + (longlong)iVar9 * 0x40;
                if (*(uint *)(*plVar18 + (longlong)iVar9 * 0x40) == (uint)local_160) {
                  if (((lVar19 != 0) &&
                      (puVar13 = (undefined8 *)(lVar19 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                     (((byte *)*puVar13 != (byte *)0x0 && ((*(byte *)*puVar13 & 0x40) == 0))))
                  goto LAB_143e60970;
                  break;
                }
                iVar9 = *(int *)(lVar19 + 0x38);
              } while (iVar9 != -1);
            }
          }
          puVar13 = &DAT_14c9a1308;
LAB_143e60970:
          local_188 = (byte *)*puVar13;
          local_180 = (longlong *)puVar13[1];
          if (local_180 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_180 + 1) = (int)local_180[1] + 1;
            UNLOCK();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if ((local_188 == (byte *)0x0) || ((*local_188 & 0x6b) != 1)) {
            uVar15 = 0;
          }
          else {
            uVar21 = FUN_1410451c0(&local_188,0);
            uVar15 = CONCAT71((int7)(unaff_RBP >> 8),0x4ade3c < uVar21);
          }
          plVar18 = local_180;
          if (local_180 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_180 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*local_180)(local_180);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
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
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
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
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar14 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
LAB_143e60664:
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e60b0e FUN_143e60b0e body=3882 status=ok
// SIG undefined FUN_143e60b0e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143e60b0e(longlong *param_1,longlong *param_2,char **param_3)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  GUID *pGVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong lVar19;
  GUID *pGVar20;
  wchar_t *_Str;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_238 [32];
  uint local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined4 local_200;
  wchar_t *local_1f0;
  longlong *local_1e8;
  wchar_t *local_1e0;
  longlong *local_1d8;
  char *local_1d0;
  wchar_t *local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  wchar_t *local_1a8;
  longlong *local_1a0;
  wchar_t *local_198;
  longlong *local_190;
  wchar_t *local_188;
  undefined4 local_180;
  GUID local_178;
  longlong local_160;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  GUID *local_78;
  GUID *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) == 0)) goto LAB_143e618a3;
  local_190 = (longlong *)CONCAT44(local_190._4_4_,DAT_14cb8db38);
  local_198 = DAT_14cb8db30;
  FUN_1448075d0(&local_178);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar13 = &DAT_14c9a1288;
    }
    else {
      plVar13 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
      plVar18 = plVar13 + 8;
      if ((longlong *)plVar13[9] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar13[9];
      }
      iVar8 = *(int *)((longlong)plVar18 + (ulonglong)((int)plVar13[10] - 1U & local_178.Data1) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar13 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar13 + (longlong)iVar8 * 0x40) == local_178.Data1) {
            if ((((lVar11 != 0) &&
                 (puVar14 = (undefined8 *)(lVar11 + 0x28), puVar14 != (undefined8 *)0x0)) &&
                ((byte *)*puVar14 != (byte *)0x0)) && ((*(byte *)*puVar14 & 0x40) == 0))
            goto LAB_143e60c0e;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_143e60c0e:
  local_198 = (wchar_t *)*puVar14;
  local_190 = (longlong *)puVar14[1];
  if (local_190 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_190 + 1) = (int)local_190[1] + 1;
    UNLOCK();
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if ((local_198 == (wchar_t *)0x0) || ((*local_198 & L'k') != L'\x03')) {
    FUN_14009b010(&local_198,3,0);
    local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,DAT_14cb8db38);
    local_1a8 = DAT_14cb8db30;
    FUN_1448075d0(&local_178);
    FUN_14131a8f2(&local_198,&local_178);
    if (local_160 != 0) {
      FUN_1400020a8();
    }
  }
  local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,DAT_14cb8db50);
  local_1a8 = DAT_14cb8db48;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    if ((*local_198 & L'\x02') == L'\0') {
      plVar13 = &DAT_14c9a1288;
    }
    else {
      plVar13 = (longlong *)(*(longlong *)(local_198 + 4) + 0x18);
    }
    if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
      plVar18 = plVar13 + 8;
      if ((longlong *)plVar13[9] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar13[9];
      }
      iVar8 = *(int *)((longlong)plVar18 + (ulonglong)((int)plVar13[10] - 1U & local_178.Data1) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar13 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar13 + (longlong)iVar8 * 0x40) == local_178.Data1) {
            if (((lVar11 != 0) &&
                (puVar14 = (undefined8 *)(lVar11 + 0x28), puVar14 != (undefined8 *)0x0)) &&
               (((byte *)*puVar14 != (byte *)0x0 && ((*(byte *)*puVar14 & 0x40) == 0))))
            goto LAB_143e60d6c;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_143e60d6c:
  local_1a8 = (wchar_t *)*puVar14;
  local_1a0 = (longlong *)puVar14[1];
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
    UNLOCK();
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if ((local_1a8 == (wchar_t *)0x0) || ((*local_1a8 & L'k') != L'\x01')) {
    FUN_14009b010(&local_1a8,1,0);
    uStack_1b0 = (uchar  [8])CONCAT44(uStack_1b0._4_4_,DAT_14cb8db50);
    local_1b8 = DAT_14cb8db48;
    FUN_1448075d0(&local_178);
    FUN_14131a8f2(&local_1a8,&local_178);
    if (local_160 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (wchar_t *)0x0) goto LAB_143e60dc7;
LAB_143e60ed1:
    local_78 = (GUID *)0x0;
    uStack_1b0._0_1_ = '\0';
    uStack_1b0._1_1_ = '\0';
    uStack_1b0._2_1_ = '\0';
    uStack_1b0._3_1_ = '\0';
    uStack_1b0._4_1_ = '\0';
    uStack_1b0._5_1_ = '\0';
    uStack_1b0._6_1_ = '\0';
    uStack_1b0._7_1_ = '\0';
    local_1b8 = (wchar_t *)0x0;
    local_70 = (GUID *)0x0;
    local_68 = 0;
  }
  else {
LAB_143e60dc7:
    uStack_1b0._0_1_ = '\0';
    uStack_1b0._1_1_ = '\0';
    uStack_1b0._2_1_ = '\0';
    uStack_1b0._3_1_ = '\0';
    uStack_1b0._4_1_ = '\0';
    uStack_1b0._5_1_ = '\0';
    uStack_1b0._6_1_ = '\0';
    uStack_1b0._7_1_ = '\0';
    local_1b8 = (wchar_t *)0x0;
    if ((*local_1a8 & L'\x03') != L'\x01') goto LAB_143e60ed1;
    pcVar3 = *(char **)(local_1a8 + 4);
    local_78 = (GUID *)0x0;
    if (pcVar3 == (char *)0x0) goto LAB_143e60ed1;
    sVar9 = strlen(pcVar3);
    iVar8 = (int)sVar9;
    uVar16 = iVar8 + 1;
    local_68 = iVar8;
    if (uVar16 < 0x81) {
      pGVar10 = (GUID *)0x0;
    }
    else {
      FUN_1446efa72(&local_78,0,uVar16,2);
      pGVar10 = local_78;
    }
    pGVar20 = &local_178;
    if (pGVar10 != (GUID *)0x0) {
      pGVar20 = pGVar10;
    }
    local_70 = pGVar20;
    if (-1 < iVar8) {
      uVar15 = 0;
      do {
        *(short *)(pGVar20->Data4 + uVar15 * 2 + -8) = (short)pcVar3[uVar15];
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
    }
  }
  FUN_140056680(&local_1c8,local_70);
  cVar7 = FUN_140b10a34(&local_1c8,&local_1b8);
  if (cVar7 == '\0') {
    if (local_1c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (GUID *)0x0) {
      FUN_1400020a8();
    }
LAB_143e60f77:
    local_178._0_8_ = (char *)0x0;
    local_178.Data4[0] = '\0';
    local_178.Data4[1] = '\0';
    local_178.Data4[2] = '\0';
    local_178.Data4[3] = '\0';
    local_178.Data4[4] = '\0';
    local_178.Data4[5] = '\0';
    local_178.Data4[6] = '\0';
    local_178.Data4[7] = '\0';
    CoCreateGuid(&local_178);
    local_1b8 = (wchar_t *)local_178._0_8_;
    uStack_1b0._0_1_ = local_178.Data4[0];
    uStack_1b0._1_1_ = local_178.Data4[1];
    uStack_1b0._2_1_ = local_178.Data4[2];
    uStack_1b0._3_1_ = local_178.Data4[3];
    uStack_1b0._4_1_ = local_178.Data4[4];
    uStack_1b0._5_1_ = local_178.Data4[5];
    uStack_1b0._6_1_ = local_178.Data4[6];
    uStack_1b0._7_1_ = local_178.Data4[7];
    local_1c8 = (wchar_t *)0x0;
    plStack_1c0 = (longlong *)0x0;
    FUN_1407c869a(&local_1b8,&local_1c8,0);
    _Str = local_1c8;
    if ((int)plStack_1c0 == 0) {
      _Str = L"";
    }
    local_f8 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_f0 = 0;
      local_e8 = 0;
    }
    else {
      sVar9 = wcslen(_Str);
      FUN_1449b853c(&local_178,_Str,sVar9 & 0xffffffff,1);
    }
    if ((local_1a8 != (wchar_t *)0x0) && ((*local_1a8 & L'Ȁ') == L'\0')) {
      FUN_140126aca(local_1a8,local_f0);
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar4 = local_1b8._4_4_;
    iVar8 = (int)local_1b8;
    iVar5 = (int)uStack_1b0;
    iVar6 = uStack_1b0._4_4_;
    if (local_1c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (GUID *)0x0) {
      FUN_1400020a8();
    }
    if (((iVar4 == 0 && iVar8 == 0) && iVar5 == 0) && iVar6 == 0) goto LAB_143e60f77;
  }
  plStack_1c0 = (longlong *)CONCAT44(plStack_1c0._4_4_,DAT_14cb8db50);
  local_1c8 = DAT_14cb8db48;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    local_218 = local_218 & 0xffffff00;
    FUN_14014191c(local_198,&local_178,&local_1a8,0);
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  FUN_140212f8e(&local_1d0);
  if (param_3 == (char **)0x0) {
    plStack_1c0 = (longlong *)CONCAT44(plStack_1c0._4_4_,DAT_14cb8db68);
    local_1c8 = DAT_14cb8db60;
    FUN_1448075d0(&local_178);
    if (local_198 != (wchar_t *)0x0) {
      if ((*local_198 & L'\x02') == L'\0') {
        plVar13 = &DAT_14c9a1288;
      }
      else {
        plVar13 = (longlong *)(*(longlong *)(local_198 + 4) + 0x18);
      }
      if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
        plVar18 = plVar13 + 8;
        if ((longlong *)plVar13[9] != (longlong *)0x0) {
          plVar18 = (longlong *)plVar13[9];
        }
        iVar8 = *(int *)((longlong)plVar18 +
                        (ulonglong)((int)plVar13[10] - 1U & local_178.Data1) * 4);
        if (iVar8 != -1) {
          do {
            lVar11 = *plVar13 + (longlong)iVar8 * 0x40;
            if (*(uint *)(*plVar13 + (longlong)iVar8 * 0x40) == local_178.Data1) {
              if ((((lVar11 != 0) &&
                   (puVar14 = (undefined8 *)(lVar11 + 0x28), puVar14 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar14 != (byte *)0x0)) && ((*(byte *)*puVar14 & 0x40) == 0))
              goto LAB_143e61185;
              break;
            }
            iVar8 = *(int *)(lVar11 + 0x38);
          } while (iVar8 != -1);
        }
      }
    }
    puVar14 = &DAT_14c9a1308;
LAB_143e61185:
    if (local_160 != 0) {
      FUN_1400020a8();
    }
    param_3 = &local_1d0;
    if (((byte *)*puVar14 != (byte *)0x0) && ((*(byte *)*puVar14 & 0x6b) == 1)) {
      lVar11 = FUN_140d7984c(puVar14,0);
      local_200 = 0;
      local_208 = 0;
      local_210 = 0;
      local_218 = 0;
      FUN_14021300e(&local_178,0x7b2,1,1);
      local_1d0 = (char *)(local_178._0_8_ + lVar11 * 10000000);
    }
  }
  local_1c8 = (wchar_t *)0x0;
  plStack_1c0 = (longlong *)0x0;
  FUN_14009b010(&local_1c8,1,0);
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,DAT_14cb8db68);
  local_1e0 = DAT_14cb8db60;
  FUN_1448075d0(&local_178);
  FUN_14131a8f2(&local_1c8,&local_178);
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  pcVar3 = *param_3;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  FUN_14021300e(&local_178,0x7b2,1,1);
  if (local_1c8 != (wchar_t *)0x0) {
    FUN_14061dc9e(local_1c8,((longlong)pcVar3 - local_178._0_8_) / 10000000);
  }
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,DAT_14cb8db68);
  local_1e0 = DAT_14cb8db60;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    local_218 = local_218 & 0xffffff00;
    FUN_14014191c(local_198,&local_178,&local_1c8,0);
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,DAT_14cb8db80);
  local_1e0 = DAT_14cb8db78;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    if ((*local_198 & L'\x02') == L'\0') {
      plVar13 = &DAT_14c9a1288;
    }
    else {
      plVar13 = (longlong *)(*(longlong *)(local_198 + 4) + 0x18);
    }
    if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
      plVar18 = plVar13 + 8;
      if ((longlong *)plVar13[9] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar13[9];
      }
      iVar8 = *(int *)((longlong)plVar18 + (ulonglong)((int)plVar13[10] - 1U & local_178.Data1) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar13 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar13 + (longlong)iVar8 * 0x40) == local_178.Data1) {
            if (((lVar11 != 0) &&
                (puVar14 = (undefined8 *)(lVar11 + 0x28), puVar14 != (undefined8 *)0x0)) &&
               (((byte *)*puVar14 != (byte *)0x0 && ((*(byte *)*puVar14 & 0x40) == 0))))
            goto LAB_143e613d8;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_143e613d8:
  local_1e0 = (wchar_t *)*puVar14;
  local_1d8 = (longlong *)puVar14[1];
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
    UNLOCK();
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if ((local_1e0 == (wchar_t *)0x0) || ((*local_1e0 & L'k') != L'\x01')) {
    FUN_14009b010(&local_1e0,1,0);
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,DAT_14cb8db80);
    local_1f0 = DAT_14cb8db78;
    FUN_1448075d0(&local_178);
    FUN_14131a8f2(&local_1e0,&local_178);
    if (local_160 != 0) {
      FUN_1400020a8();
    }
    if (local_1e0 != (wchar_t *)0x0) goto LAB_143e6141f;
LAB_143e61517:
    iVar8 = 0;
    lVar21 = 0;
  }
  else {
LAB_143e6141f:
    if (((*local_1e0 & L'\x03') != L'\x01') ||
       (pcVar3 = *(char **)(local_1e0 + 4), pcVar3 == (char *)0x0)) goto LAB_143e61517;
    sVar9 = strlen(pcVar3);
    uVar16 = (uint)sVar9;
    if (uVar16 == 0) goto LAB_143e61517;
    lVar11 = (longlong)(int)uVar16;
    pcVar17 = pcVar3 + lVar11 + -1;
    uVar12 = 0;
    if (pcVar17 < pcVar3) {
      lVar21 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar17 - 0x30U)) break;
        uVar12 = uVar12 + 1;
        pcVar17 = pcVar17 + -1;
      } while (pcVar3 <= pcVar17);
      lVar21 = 0;
      if ((((uVar12 != 0) && ((int)uVar12 < (int)uVar16)) && (lVar21 = 0, uVar12 < 0xb)) &&
         (lVar19 = -(ulonglong)uVar12, pcVar3[lVar19 + lVar11 + -1] == '_')) {
        if ((uVar12 == 1) || (pcVar3[lVar19 + lVar11] != '0')) {
          lVar22 = 0;
          do {
            lVar21 = (longlong)pcVar3[lVar19 + lVar11] + lVar22 * 10;
            lVar22 = lVar21 + -0x30;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
          if (lVar22 < 0x7fffffff) {
            uVar16 = ~uVar12 + uVar16;
            lVar21 = lVar21 + -0x2f;
            goto LAB_143e61488;
          }
        }
        lVar21 = 0;
      }
LAB_143e61488:
      if (uVar16 == 0) goto LAB_143e61517;
    }
    local_178.Data4[4] = '\0';
    local_178.Data4[0] = (char)uVar16;
    local_178.Data4[1] = (char)(uVar16 >> 8);
    local_178.Data4[2] = (char)(uVar16 >> 0x10);
    local_178.Data4[3] = (char)(uVar16 >> 0x18);
    local_178._0_8_ = pcVar3;
    iVar8 = FUN_14001a6c0(&local_178,1);
    lVar21 = lVar21 << 0x20;
  }
  if ((iVar8 == 0 && lVar21 == 0) &&
     ((**(code **)(*param_1 + 0x2f8))(param_1,&local_178), local_1e0 != (wchar_t *)0x0)) {
    FUN_1401269d0(local_1e0,&local_178);
  }
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,DAT_14cb8db80);
  local_1f0 = DAT_14cb8db78;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    local_218 = local_218 & 0xffffff00;
    FUN_14014191c(local_198,&local_178,&local_1e0,0);
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,DAT_14cb8db98);
  local_1f0 = DAT_14cb8db90;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    if ((*local_198 & L'\x02') == L'\0') {
      plVar13 = &DAT_14c9a1288;
    }
    else {
      plVar13 = (longlong *)(*(longlong *)(local_198 + 4) + 0x18);
    }
    if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
      plVar18 = plVar13 + 8;
      if ((longlong *)plVar13[9] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar13[9];
      }
      iVar8 = *(int *)((longlong)plVar18 + (ulonglong)((int)plVar13[10] - 1U & local_178.Data1) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar13 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar13 + (longlong)iVar8 * 0x40) == local_178.Data1) {
            if ((((lVar11 != 0) &&
                 (puVar14 = (undefined8 *)(lVar11 + 0x28), puVar14 != (undefined8 *)0x0)) &&
                ((byte *)*puVar14 != (byte *)0x0)) && ((*(byte *)*puVar14 & 0x40) == 0))
            goto LAB_143e61660;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_143e61660:
  local_1f0 = (wchar_t *)*puVar14;
  local_1e8 = (longlong *)puVar14[1];
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if ((local_1f0 == (wchar_t *)0x0) || ((*local_1f0 & L'k') != L'\x01')) {
    FUN_14009b010(&local_1f0,1,0);
    local_180 = DAT_14cb8db98;
    local_188 = DAT_14cb8db90;
    FUN_1448075d0(&local_178);
    FUN_14131a8f2(&local_1f0,&local_178);
    if (local_160 != 0) {
      FUN_1400020a8();
    }
  }
  uVar16 = FUN_1410451c0(&local_1f0,0);
  if ((uVar16 < 0x4ade3d) && (local_1f0 != (wchar_t *)0x0)) {
    FUN_1406114f4(local_1f0,0x4ade3d);
  }
  local_180 = DAT_14cb8db98;
  local_188 = DAT_14cb8db90;
  FUN_1448075d0(&local_178);
  if (local_198 != (wchar_t *)0x0) {
    local_218 = local_218 & 0xffffff00;
    FUN_14014191c(local_198,&local_178,&local_1f0,0);
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  local_180 = DAT_14cb8db38;
  local_188 = DAT_14cb8db30;
  FUN_1448075d0(&local_178);
  if (*param_2 != 0) {
    local_218 = local_218 & 0xffffff00;
    FUN_14014191c(*param_2,&local_178,&local_198,0);
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  plVar13 = local_1e8;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1e8 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1d8 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = plStack_1c0;
  if (plStack_1c0 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_1c0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plStack_1c0)(plStack_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1a0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_190 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_143e618a3:
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e61a3a FUN_143e61a3a body=101 status=ok
// SIG undefined FUN_143e61a3a(void)

longlong * FUN_143e61a3a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar3 = (longlong *)*param_1;
    lVar2 = (longlong)*(int *)(param_1 + 1) << 3;
    do {
      if (*(char *)(*plVar3 + 0x40) == '\x03') {
        cVar1 = FUN_143e66a42(*plVar3 + 0xc,*param_2);
        if ((cVar1 != '\0') && (*(int *)(*plVar3 + 0x18) == *(int *)(param_2 + 1)))
        goto LAB_143e61a84;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_143e61a84:
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  return plVar3;
}



// FUNCTION 143e61aa0 FUN_143e61aa0 body=440 status=ok
// SIG undefined FUN_143e61aa0(void)

void FUN_143e61aa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  longlong local_78;
  undefined **local_70;
  longlong *local_68;
  longlong *plStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80[0] = 0xffff;
  FUN_140fe4ff6(param_1,param_2,&local_98);
  (**(code **)(*param_1 + 0x2f8))(param_1,&local_78);
  if (local_78 == 0) {
    local_70 = &PTR_FUN_14a184370;
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    local_58 = 0;
    uVar8 = 0;
  }
  else {
    FUN_1413d9c32(param_3,&local_70,local_80,&local_78);
    uVar8 = local_58 & 0xff;
  }
  uVar5 = FUN_140def96c(param_3,local_80);
  *param_4 = uVar5;
  bVar3 = (&DAT_149fc1b6e)[uVar8];
  if (bVar3 == 1) {
    if ((local_68 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_68 + 0x28))(), cVar4 == '\0'))
    goto LAB_143e61bb5;
    bVar3 = (&DAT_149fc1b6e)[local_58 & 0xff];
LAB_143e61b98:
    if ((bVar3 & 1) == 0) goto LAB_143e61bb5;
    plVar6 = local_68;
    if (plStack_60 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
      plVar7 = plStack_60;
    }
  }
  else {
    if (((ulonglong)local_68 & 0xffffff) != 0) goto LAB_143e61b98;
LAB_143e61bb5:
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  *param_5 = plVar6;
  plVar6 = (longlong *)param_5[1];
  if (plVar7 == plVar6) {
    if (plVar7 == (longlong *)0x0) goto LAB_143e61c0e;
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_143e61c0e;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar7;
  }
  else {
    param_5[1] = plVar7;
    if (plVar6 == (longlong *)0x0) goto LAB_143e61c0e;
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_143e61c0e;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_143e61c0e:
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58 & 0xff])(&local_68);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e61c5a FUN_143e61c5a body=5245 status=ok
// SIG undefined FUN_143e61c5a(void)

void FUN_143e61c5a(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  int *piVar20;
  int iVar21;
  ulonglong *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  undefined8 *local_430;
  ulonglong *local_428;
  undefined8 *local_420;
  ulonglong local_418;
  undefined8 *local_410;
  longlong *local_408;
  undefined8 *local_400;
  longlong local_3f8;
  int local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  char local_3e0;
  ulonglong local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  ulonglong local_3b8;
  longlong lStack_3b0;
  undefined4 local_3a8 [2];
  longlong local_3a0;
  undefined8 uStack_398;
  int local_b0;
  undefined4 uStack_ac;
  longlong local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar10 = param_1[0x4e];
  iVar6 = -1;
  if ((longlong)(int)param_1[0x4f] != 0) {
    lVar23 = (longlong)(int)param_1[0x4f] << 3;
    lVar26 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar10 + lVar26 * 8) + 8) == param_2) {
        iVar6 = (int)lVar26;
        break;
      }
      lVar26 = lVar26 + 1;
      lVar23 = lVar23 + -8;
    } while (lVar23 != 0);
  }
  puVar7 = *(undefined8 **)(lVar10 + (longlong)iVar6 * 8);
  *(undefined8 *)(lVar10 + (longlong)iVar6 * 8) = 0;
  FUN_140f1002a(param_1 + 0x4e);
  if ((longlong)*(int *)(puVar7 + 10) != 0) {
    local_400 = puVar7 + 9;
    lVar10 = 0;
    do {
      if ((*(int *)(puVar7[9] + 8 + lVar10) != 0) && (*(longlong *)(puVar7[9] + lVar10) != 0)) {
        local_3d8 = 0;
        uStack_3d0 = 0;
        if (*(int *)(puVar7 + 2) == 0) {
LAB_143e630d1:
          local_3e8 = 0;
        }
        else {
          uVar27 = *(uint *)((longlong)puVar7 + 0xc);
          local_3e8 = 0;
          if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != *(int *)(puVar7 + 2) ||
                ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_143e630d1;
            local_3e8 = *puVar8;
          }
        }
        local_3e0 = *(char *)(param_3 + 0x18);
        if (local_3e0 != '\x01') goto LAB_143e62ed8;
        local_3f8 = 0;
        iVar6 = *(int *)(param_3 + 0x28);
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        local_410 = puVar7;
        local_408 = param_1;
        local_3f0 = iVar6;
        if (iVar6 == 0) {
          local_3ec = 0;
        }
        else {
          FUN_140b856de(&local_3f8,iVar6,0);
          FUN_140b8566a(local_3f8,uVar2,iVar6);
          if (DAT_14c872bf2 == '\0') goto LAB_143e61f21;
          if (0 < local_3f0) {
            lVar10 = 0;
            bVar29 = false;
            do {
              lVar23 = lVar10 << 4;
              while (cVar4 = FUN_144a38768(local_3f8 + lVar23,L".yml",4,1), cVar4 != '\0') {
                lVar10 = lVar10 + 1;
                lVar23 = lVar23 + 0x10;
                if (local_3f0 <= lVar10) {
                  if (!bVar29) goto LAB_143e61ee5;
                  goto LAB_143e61ed5;
                }
              }
              do {
                FUN_146294fd6(&local_3f8);
                if (local_3f0 <= lVar10) goto LAB_143e61ed5;
                cVar4 = FUN_144a38768(local_3f8 + lVar23,L".yml",4,1);
              } while (cVar4 == '\0');
              lVar10 = lVar10 + 1;
              bVar29 = true;
            } while (lVar10 < local_3f0);
LAB_143e61ed5:
            FUN_140b12644(&local_3f8);
          }
LAB_143e61ee5:
          if (local_3f0 != 0) {
            lVar23 = (longlong)local_3f0 << 4;
            lVar10 = local_3f8;
            do {
              FUN_140b127b8(lVar10,L".yml",4,1);
              lVar10 = lVar10 + 0x10;
              lVar23 = lVar23 + -0x10;
            } while (lVar23 != 0);
LAB_143e61f21:
            if (local_3f0 != 0) {
              lVar23 = (longlong)local_3f0 << 4;
              lVar10 = local_3f8;
              do {
                FUN_14000bbd8(&local_b0,lVar10,0);
                local_3c8 = DAT_14cb8dd60;
                local_3c0 = DAT_14cb8dd68;
                FUN_1448075d0(&local_3b8);
                iVar5 = local_b0;
                iVar6 = (int)local_3b8;
                if (local_3a0 != 0) {
                  FUN_1400020a8();
                }
                uVar28 = uStack_3d0;
                if (iVar5 == iVar6) {
                  if (*(char *)(local_410 + 0xc) == '\x01') {
                    lVar26 = (longlong)(int)uStack_3d0;
                    uVar27 = (int)uStack_3d0 + 1;
                    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar27);
                    if (uStack_3d0._4_4_ < uVar27) {
                      FUN_141741a52(&local_3d8,uVar28 & 0xffffffff);
                    }
                    uVar28 = local_3d8;
                    FUN_1447a97f4(lVar26 * 0x50 + local_3d8,&local_b0);
                    FUN_1447a97f4(lVar26 * 0x50 + uVar28 + 0x28);
                  }
                }
                else {
                  local_3b8 = 0;
                  lStack_3b0 = 0;
                  local_3a8[0] = 0;
                  local_3a0 = 0;
                  uStack_398 = 0;
                  cVar4 = (**(code **)(*local_408 + 0x318))
                                    (local_408,local_3e8,&local_b0,&local_3b8);
                  uVar28 = uStack_3d0;
                  if (cVar4 != '\0') {
                    lVar26 = (longlong)(int)uStack_3d0;
                    uVar27 = (int)uStack_3d0 + 1;
                    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar27);
                    if (uStack_3d0._4_4_ < uVar27) {
                      FUN_141741a52(&local_3d8,uVar28 & 0xffffffff);
                    }
                    uVar28 = local_3d8;
                    FUN_1447a97f4(lVar26 * 0x50 + local_3d8,&local_b0);
                    FUN_1447a97f4(lVar26 * 0x50 + uVar28 + 0x28);
                  }
                  if (local_3a0 != 0) {
                    FUN_1400020a8();
                  }
                }
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
                lVar10 = lVar10 + 0x10;
                lVar23 = lVar23 + -0x10;
              } while (lVar23 != 0);
            }
          }
        }
        uVar28 = local_3d8;
        iVar6 = (int)uStack_3d0;
        lVar10 = (longlong)(int)uStack_3d0;
        if (1 < lVar10) {
          memset(local_3a8,0,0x2f0);
          local_3b8 = uVar28;
          lStack_3b0 = lVar10 * 0x50 + uVar28 + -0x50;
          fVar30 = logf((float)iVar6);
          local_3a8[0] = (int)(longlong)(fVar30 + fVar30);
          puVar22 = &local_3b8;
          do {
            puVar8 = (undefined8 *)*puVar22;
            puVar7 = (undefined8 *)puVar22[1];
            iVar6 = (int)puVar22[2];
            iVar5 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar8) >> 4) * -0x33333333;
            uVar28 = (ulonglong)(iVar5 + 1);
            local_428 = puVar22;
            if (iVar6 != 0) {
LAB_143e61fc4:
              if (8 < (int)(uint)uVar28) {
                local_418 = CONCAT44(local_418._4_4_,iVar6);
                puVar16 = puVar8 + (ulonglong)((uint)uVar28 >> 1) * 10;
                piVar20 = &local_b0;
                for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *(undefined8 *)piVar20 = *puVar16;
                  puVar16 = puVar16 + 1;
                  piVar20 = piVar20 + 2;
                }
                puVar16 = puVar8;
                puVar19 = puVar8 + (ulonglong)((uint)uVar28 >> 1) * 10;
                for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar19 = *puVar16;
                  puVar16 = puVar16 + 1;
                  puVar19 = puVar19 + 1;
                }
                piVar20 = &local_b0;
                puVar16 = puVar8;
                for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar16 = *(undefined8 *)piVar20;
                  piVar20 = piVar20 + 2;
                  puVar16 = puVar16 + 1;
                }
                puVar16 = puVar7 + 10;
                puVar24 = puVar8;
                puVar19 = puVar7;
                local_430 = puVar7;
                local_420 = puVar7;
LAB_143e62027:
                do {
                  puVar17 = puVar24 + 10;
                  if (puVar19 < puVar17) goto joined_r0x000143e62195;
                  uVar27 = *(uint *)((longlong)puVar8 + 0x2c);
                  puVar7 = puVar8 + 6;
                  if (1 < (int)uVar27 || 0 < *(int *)((longlong)puVar8 + 0x4c)) {
                    puVar7 = (undefined8 *)puVar8[8];
                  }
                  uVar15 = *(uint *)((longlong)puVar24 + 0x7c);
                  if ((int)uVar15 < 2 && *(int *)((longlong)puVar24 + 0x9c) < 1) {
                    puVar13 = puVar24 + 0x10;
                  }
                  else {
                    puVar13 = (undefined8 *)puVar24[0x12];
                  }
                  puVar24 = puVar17;
                  if (uVar27 != uVar15) goto LAB_143e62165;
                  if (0 < (int)uVar27) {
                    lVar10 = 0;
                    uVar28 = DAT_14c948034;
                    do {
                      uVar18 = *(ulonglong *)((longlong)puVar7 + lVar10 + 4);
                      if ((uVar18 == uVar28) &&
                         (*(int *)((longlong)puVar7 + lVar10) != DAT_14c948030)) {
                        FUN_14011791e(&local_b0,*(int *)((longlong)puVar7 + lVar10),uVar18 >> 0x20);
                        *(ulonglong *)((longlong)puVar7 + lVar10 + 4) = CONCAT44(uStack_ac,local_b0)
                        ;
                        uVar28 = DAT_14c948034;
                        puVar19 = local_430;
                      }
                      uVar18 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
                      iVar6 = (int)(uVar18 >> 0x20);
                      uVar9 = uVar18;
                      if (uVar18 == uVar28) {
                        uVar9 = uVar28;
                        if (*(int *)((longlong)puVar13 + lVar10) != DAT_14c948030) {
                          FUN_14011791e(&local_b0,*(int *)((longlong)puVar13 + lVar10));
                          *(ulonglong *)((longlong)puVar13 + lVar10 + 4) =
                               CONCAT44(uStack_ac,local_b0);
                          uVar18 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
                          uVar28 = DAT_14c948034;
                          uVar9 = uVar18;
                        }
                        iVar6 = (int)(uVar18 >> 0x20);
                        puVar19 = local_430;
                      }
                      uVar11 = *(ulonglong *)((longlong)puVar7 + lVar10 + 4);
                      if (uVar11 != uVar9) {
                        if ((int)uVar11 == (int)uVar18) {
                          iVar6 = (int)(uVar11 >> 0x20) - iVar6;
                        }
                        else {
                          iVar6 = FUN_14002c2bd(uVar11 & 0xffffffff);
                          puVar19 = local_430;
                        }
                        if (iVar6 < 0) goto joined_r0x000143e62195;
                        break;
                      }
                      lVar10 = lVar10 + 0xc;
                    } while ((ulonglong)uVar27 * 0xc != lVar10);
                  }
                } while( true );
              }
              puVar22 = local_428;
              if (puVar8 < puVar7) {
                do {
                  puVar19 = puVar8 + 10;
                  puVar16 = puVar8;
                  puVar24 = puVar7;
                  puVar17 = puVar8;
                  if (puVar8 + 10 <= puVar7) {
                    do {
                      puVar13 = puVar19;
                      uVar27 = *(uint *)((longlong)puVar17 + 0x2c);
                      if ((int)uVar27 < 2 && *(int *)((longlong)puVar17 + 0x4c) < 1) {
                        puVar19 = puVar17 + 6;
                      }
                      else {
                        puVar19 = (undefined8 *)puVar17[8];
                      }
                      uVar15 = *(uint *)((longlong)puVar16 + 0x7c);
                      if ((int)uVar15 < 2 && *(int *)((longlong)puVar16 + 0x9c) < 1) {
                        puVar16 = puVar16 + 0x10;
                      }
                      else {
                        puVar16 = (undefined8 *)puVar16[0x12];
                      }
                      if (uVar27 == uVar15) {
                        if (0 < (int)uVar27) {
                          lVar10 = 0;
                          uVar28 = DAT_14c948034;
                          do {
                            uVar18 = *(ulonglong *)((longlong)puVar19 + lVar10 + 4);
                            if ((uVar18 == uVar28) &&
                               (*(int *)((longlong)puVar19 + lVar10) != DAT_14c948030)) {
                              local_430 = puVar7;
                              FUN_14011791e(&local_b0,*(int *)((longlong)puVar19 + lVar10),
                                            uVar18 >> 0x20);
                              *(ulonglong *)((longlong)puVar19 + lVar10 + 4) =
                                   CONCAT44(uStack_ac,local_b0);
                              uVar28 = DAT_14c948034;
                              puVar7 = local_430;
                            }
                            uVar18 = *(ulonglong *)((longlong)puVar16 + lVar10 + 4);
                            iVar6 = (int)(uVar18 >> 0x20);
                            uVar9 = uVar18;
                            if (uVar18 == uVar28) {
                              uVar9 = uVar28;
                              local_430 = puVar7;
                              if (*(int *)((longlong)puVar16 + lVar10) != DAT_14c948030) {
                                FUN_14011791e(&local_b0,*(int *)((longlong)puVar16 + lVar10));
                                *(ulonglong *)((longlong)puVar16 + lVar10 + 4) =
                                     CONCAT44(uStack_ac,local_b0);
                                uVar18 = *(ulonglong *)((longlong)puVar16 + lVar10 + 4);
                                uVar28 = DAT_14c948034;
                                uVar9 = uVar18;
                              }
                              iVar6 = (int)(uVar18 >> 0x20);
                              puVar7 = local_430;
                            }
                            uVar11 = *(ulonglong *)((longlong)puVar19 + lVar10 + 4);
                            if (uVar11 != uVar9) {
                              if ((int)uVar11 == (int)uVar18) {
                                iVar6 = (int)(uVar11 >> 0x20) - iVar6;
                              }
                              else {
                                iVar6 = FUN_14002c2bd(uVar11 & 0xffffffff);
                              }
                              if (iVar6 < 0) goto LAB_143e62e50;
                              break;
                            }
                            lVar10 = lVar10 + 0xc;
                          } while ((ulonglong)uVar27 * 0xc != lVar10);
                        }
                      }
                      else if ((int)uVar27 < (int)uVar15) {
LAB_143e62e50:
                        puVar17 = puVar13;
                      }
                      puVar19 = puVar13 + 10;
                      puVar16 = puVar13;
                      puVar24 = puVar7;
                    } while (puVar13 + 10 <= puVar7);
                  }
                  puVar7 = puVar24 + -10;
                  puVar16 = puVar17;
                  piVar20 = &local_b0;
                  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *(undefined8 *)piVar20 = *puVar16;
                    puVar16 = puVar16 + 1;
                    piVar20 = piVar20 + 2;
                  }
                  puVar16 = puVar24;
                  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *puVar17 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar17 = puVar17 + 1;
                  }
                  piVar20 = &local_b0;
                  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *puVar24 = *(undefined8 *)piVar20;
                    piVar20 = piVar20 + 2;
                    puVar24 = puVar24 + 1;
                  }
                  puVar22 = local_428;
                } while (puVar8 < puVar7);
              }
              goto LAB_143e62e9c;
            }
LAB_143e6244e:
            puVar22 = local_428;
            if ((int)uVar28 != 0) {
              uVar27 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
              local_438 = puVar8;
              local_418 = uVar28;
              do {
                puVar7 = (undefined8 *)(ulonglong)uVar27;
                uVar15 = uVar27 * 2 + 1;
                puVar16 = puVar7;
                if ((int)uVar15 < (int)uVar28) {
                  do {
                    uVar27 = uVar27 * 2 + 2;
                    puVar19 = (undefined8 *)(ulonglong)uVar27;
                    if ((int)uVar27 < (int)uVar28) {
                      puVar17 = (undefined8 *)(longlong)(int)uVar27;
                      uVar27 = *(uint *)((longlong)puVar8 + (longlong)puVar17 * 0x50 + 0x2c);
                      if ((int)uVar27 < 2 &&
                          *(int *)((longlong)puVar8 + (longlong)puVar17 * 0x50 + 0x4c) < 1) {
                        puVar13 = puVar8 + (longlong)puVar17 * 10 + 6;
                      }
                      else {
                        puVar13 = (undefined8 *)puVar8[(longlong)puVar17 * 10 + 8];
                      }
                      puVar24 = (undefined8 *)(longlong)(int)uVar15;
                      uVar1 = *(uint *)((longlong)puVar8 + (longlong)puVar24 * 0x50 + 0x2c);
                      if ((int)uVar1 < 2 &&
                          *(int *)((longlong)puVar8 + (longlong)puVar24 * 0x50 + 0x4c) < 1) {
                        puVar14 = puVar8 + (longlong)puVar24 * 10 + 6;
                      }
                      else {
                        puVar14 = (undefined8 *)puVar8[(longlong)puVar24 * 10 + 8];
                      }
                      if (uVar27 == uVar1) {
                        if (0 < (int)uVar27) {
                          lVar10 = 0;
                          uVar18 = DAT_14c948034;
                          local_430 = puVar24;
                          do {
                            uVar28 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
                            if ((uVar28 == uVar18) &&
                               (*(int *)((longlong)puVar13 + lVar10) != DAT_14c948030)) {
                              local_420 = puVar16;
                              FUN_14011791e(&local_b0,*(int *)((longlong)puVar13 + lVar10),
                                            uVar28 >> 0x20);
                              *(ulonglong *)((longlong)puVar13 + lVar10 + 4) =
                                   CONCAT44(uStack_ac,local_b0);
                              uVar18 = DAT_14c948034;
                              puVar8 = local_438;
                              puVar16 = local_420;
                            }
                            uVar28 = *(ulonglong *)((longlong)puVar14 + lVar10 + 4);
                            iVar6 = (int)(uVar28 >> 0x20);
                            uVar9 = uVar28;
                            if (uVar28 == uVar18) {
                              uVar9 = uVar18;
                              local_420 = puVar16;
                              if (*(int *)((longlong)puVar14 + lVar10) != DAT_14c948030) {
                                FUN_14011791e(&local_b0,*(int *)((longlong)puVar14 + lVar10));
                                *(ulonglong *)((longlong)puVar14 + lVar10 + 4) =
                                     CONCAT44(uStack_ac,local_b0);
                                uVar28 = *(ulonglong *)((longlong)puVar14 + lVar10 + 4);
                                uVar18 = DAT_14c948034;
                                uVar9 = uVar28;
                              }
                              iVar6 = (int)(uVar28 >> 0x20);
                              puVar8 = local_438;
                              puVar16 = local_420;
                            }
                            uVar11 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
                            if (uVar11 != uVar9) {
                              if ((int)uVar11 == (int)uVar28) {
                                iVar6 = (int)(uVar11 >> 0x20) - iVar6;
                              }
                              else {
                                iVar6 = FUN_14002c2bd(uVar11 & 0xffffffff);
                                puVar8 = local_438;
                              }
                              puVar24 = local_430;
                              uVar28 = local_418;
                              if (iVar6 < 0) goto LAB_143e6260c;
                              break;
                            }
                            lVar10 = lVar10 + 0xc;
                            uVar28 = local_418;
                          } while ((ulonglong)uVar27 * 0xc != lVar10);
                        }
                      }
                      else if ((int)uVar27 < (int)uVar1) goto LAB_143e6260c;
                    }
                    else {
                      puVar24 = (undefined8 *)(longlong)(int)uVar15;
LAB_143e6260c:
                      puVar17 = puVar24;
                      puVar19 = (undefined8 *)(ulonglong)uVar15;
                    }
                    lVar10 = (longlong)(int)puVar7 * 0x50;
                    puVar7 = puVar8 + (longlong)(int)puVar7 * 10;
                    uVar27 = *(uint *)((longlong)puVar8 + lVar10 + 0x2c);
                    if ((int)uVar27 < 2 && *(int *)((longlong)puVar8 + lVar10 + 0x4c) < 1) {
                      puVar24 = puVar7 + 6;
                    }
                    else {
                      puVar24 = (undefined8 *)puVar7[8];
                    }
                    puVar17 = puVar8 + (longlong)puVar17 * 10;
                    uVar15 = *(uint *)((longlong)puVar17 + 0x2c);
                    if ((int)uVar15 < 2 && *(int *)((longlong)puVar17 + 0x4c) < 1) {
                      puVar13 = puVar17 + 6;
                    }
                    else {
                      puVar13 = (undefined8 *)puVar17[8];
                    }
                    if (uVar27 == uVar15) {
                      if ((int)uVar27 < 1) break;
                      lVar10 = 0;
                      uVar18 = DAT_14c948034;
                      while( true ) {
                        uVar9 = *(ulonglong *)((longlong)puVar24 + lVar10 + 4);
                        if ((uVar9 == uVar18) &&
                           (*(int *)((longlong)puVar24 + lVar10) != DAT_14c948030)) {
                          local_420 = puVar16;
                          FUN_14011791e(&local_b0,*(int *)((longlong)puVar24 + lVar10),uVar9 >> 0x20
                                       );
                          *(ulonglong *)((longlong)puVar24 + lVar10 + 4) =
                               CONCAT44(uStack_ac,local_b0);
                          uVar18 = DAT_14c948034;
                          puVar8 = local_438;
                          puVar16 = local_420;
                        }
                        uVar9 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
                        iVar6 = (int)(uVar9 >> 0x20);
                        uVar11 = uVar9;
                        if (uVar9 == uVar18) {
                          uVar11 = uVar18;
                          local_420 = puVar16;
                          if (*(int *)((longlong)puVar13 + lVar10) != DAT_14c948030) {
                            FUN_14011791e(&local_b0,*(int *)((longlong)puVar13 + lVar10));
                            *(ulonglong *)((longlong)puVar13 + lVar10 + 4) =
                                 CONCAT44(uStack_ac,local_b0);
                            uVar9 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
                            uVar18 = DAT_14c948034;
                            uVar11 = uVar9;
                          }
                          iVar6 = (int)(uVar9 >> 0x20);
                          puVar8 = local_438;
                          puVar16 = local_420;
                        }
                        uVar25 = *(ulonglong *)((longlong)puVar24 + lVar10 + 4);
                        if (uVar25 != uVar11) break;
                        lVar10 = lVar10 + 0xc;
                        if ((ulonglong)uVar27 * 0xc == lVar10) goto LAB_143e6284c;
                      }
                      if ((int)uVar25 == (int)uVar9) {
                        iVar6 = (int)(uVar25 >> 0x20) - iVar6;
                      }
                      else {
                        iVar6 = FUN_14002c2bd(uVar25 & 0xffffffff);
                        puVar8 = local_438;
                      }
                      if (-1 < iVar6) break;
                    }
                    else if ((int)uVar15 <= (int)uVar27) break;
                    puVar24 = puVar7;
                    piVar20 = &local_b0;
                    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *(undefined8 *)piVar20 = *puVar24;
                      puVar24 = puVar24 + 1;
                      piVar20 = piVar20 + 2;
                    }
                    puVar24 = puVar17;
                    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *puVar7 = *puVar24;
                      puVar24 = puVar24 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    piVar20 = &local_b0;
                    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *puVar17 = *(undefined8 *)piVar20;
                      piVar20 = piVar20 + 2;
                      puVar17 = puVar17 + 1;
                    }
                    uVar27 = (uint)puVar19;
                    uVar15 = uVar27 * 2 + 1;
                    puVar7 = puVar19;
                  } while ((int)uVar15 < (int)uVar28);
                }
LAB_143e6284c:
                uVar27 = (int)puVar16 - 1;
              } while ((int)puVar16 != 0);
              puVar22 = local_428;
              if (1 < (int)uVar28) {
                puVar7 = (undefined8 *)((uVar28 & 0xffffffff) - 1);
                puVar16 = puVar8;
                piVar20 = &local_b0;
                for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *(undefined8 *)piVar20 = *puVar16;
                  puVar16 = puVar16 + 1;
                  piVar20 = piVar20 + 2;
                }
                puVar16 = puVar8 + (longlong)puVar7 * 10;
                puVar19 = puVar8;
                for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar19 = *puVar16;
                  puVar16 = puVar16 + 1;
                  puVar19 = puVar19 + 1;
                }
                piVar20 = &local_b0;
                puVar16 = puVar8 + (longlong)puVar7 * 10;
                for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar16 = *(undefined8 *)piVar20;
                  piVar20 = piVar20 + 2;
                  puVar16 = puVar16 + 1;
                }
                if ((int)uVar28 != 2) {
                  do {
                    iVar5 = 0;
                    iVar6 = 1;
                    puVar16 = puVar7;
                    iVar21 = 0;
                    do {
                      iVar12 = iVar5 + 2;
                      uVar18 = (ulonglong)iVar12;
                      uVar28 = (ulonglong)iVar6;
                      if ((longlong)uVar18 < (longlong)puVar16) {
                        uVar27 = *(uint *)((longlong)puVar8 + uVar18 * 0x50 + 0x2c);
                        if ((int)uVar27 < 2 && *(int *)((longlong)puVar8 + uVar18 * 0x50 + 0x4c) < 1
                           ) {
                          puVar7 = puVar8 + uVar18 * 10 + 6;
                        }
                        else {
                          puVar7 = (undefined8 *)puVar8[uVar18 * 10 + 8];
                        }
                        uVar15 = *(uint *)((longlong)puVar8 + uVar28 * 0x50 + 0x2c);
                        if ((int)uVar15 < 2 && *(int *)((longlong)puVar8 + uVar28 * 0x50 + 0x4c) < 1
                           ) {
                          puVar19 = puVar8 + uVar28 * 10 + 6;
                        }
                        else {
                          puVar19 = (undefined8 *)puVar8[uVar28 * 10 + 8];
                        }
                        if (uVar27 == uVar15) {
                          if (0 < (int)uVar27) {
                            lVar10 = 0;
                            uVar9 = DAT_14c948034;
                            local_430 = puVar16;
                            do {
                              uVar11 = *(ulonglong *)((longlong)puVar7 + lVar10 + 4);
                              if ((uVar11 == uVar9) &&
                                 (*(int *)((longlong)puVar7 + lVar10) != DAT_14c948030)) {
                                local_418 = uVar28;
                                FUN_14011791e(&local_b0,*(int *)((longlong)puVar7 + lVar10),
                                              uVar11 >> 0x20);
                                *(ulonglong *)((longlong)puVar7 + lVar10 + 4) =
                                     CONCAT44(uStack_ac,local_b0);
                                uVar9 = DAT_14c948034;
                                puVar8 = local_438;
                                uVar28 = local_418;
                              }
                              uVar11 = *(ulonglong *)((longlong)puVar19 + lVar10 + 4);
                              iVar5 = (int)(uVar11 >> 0x20);
                              uVar25 = uVar11;
                              if (uVar11 == uVar9) {
                                uVar25 = uVar9;
                                local_418 = uVar28;
                                if (*(int *)((longlong)puVar19 + lVar10) != DAT_14c948030) {
                                  FUN_14011791e(&local_b0,*(int *)((longlong)puVar19 + lVar10));
                                  *(ulonglong *)((longlong)puVar19 + lVar10 + 4) =
                                       CONCAT44(uStack_ac,local_b0);
                                  uVar11 = *(ulonglong *)((longlong)puVar19 + lVar10 + 4);
                                  uVar9 = DAT_14c948034;
                                  uVar25 = uVar11;
                                }
                                iVar5 = (int)(uVar11 >> 0x20);
                                puVar8 = local_438;
                                uVar28 = local_418;
                              }
                              uVar3 = *(ulonglong *)((longlong)puVar7 + lVar10 + 4);
                              if (uVar3 != uVar25) {
                                if ((int)uVar3 == (int)uVar11) {
                                  iVar5 = (int)(uVar3 >> 0x20) - iVar5;
                                }
                                else {
                                  iVar5 = FUN_14002c2bd(uVar3 & 0xffffffff);
                                  puVar8 = local_438;
                                }
                                puVar16 = local_430;
                                if (iVar5 < 0) goto LAB_143e62a3b;
                                break;
                              }
                              lVar10 = lVar10 + 0xc;
                              puVar16 = local_430;
                            } while ((ulonglong)uVar27 * 0xc != lVar10);
                          }
                        }
                        else if ((int)uVar27 < (int)uVar15) goto LAB_143e62a3b;
                      }
                      else {
LAB_143e62a3b:
                        uVar18 = uVar28;
                        iVar12 = iVar6;
                      }
                      lVar10 = (longlong)iVar21 * 0x50;
                      puVar7 = puVar8 + (longlong)iVar21 * 10;
                      uVar27 = *(uint *)((longlong)puVar8 + lVar10 + 0x2c);
                      if ((int)uVar27 < 2 && *(int *)((longlong)puVar8 + lVar10 + 0x4c) < 1) {
                        puVar19 = puVar7 + 6;
                      }
                      else {
                        puVar19 = (undefined8 *)puVar7[8];
                      }
                      puVar24 = puVar8 + uVar18 * 10;
                      uVar15 = *(uint *)((longlong)puVar24 + 0x2c);
                      if ((int)uVar15 < 2 && *(int *)((longlong)puVar24 + 0x4c) < 1) {
                        puVar17 = puVar24 + 6;
                      }
                      else {
                        puVar17 = (undefined8 *)puVar24[8];
                      }
                      if (uVar27 == uVar15) {
                        if ((int)uVar27 < 1) break;
                        lVar10 = 0;
                        uVar28 = DAT_14c948034;
                        while( true ) {
                          uVar18 = *(ulonglong *)((longlong)puVar19 + lVar10 + 4);
                          if ((uVar18 == uVar28) &&
                             (*(int *)((longlong)puVar19 + lVar10) != DAT_14c948030)) {
                            FUN_14011791e(&local_b0,*(int *)((longlong)puVar19 + lVar10),
                                          uVar18 >> 0x20);
                            *(ulonglong *)((longlong)puVar19 + lVar10 + 4) =
                                 CONCAT44(uStack_ac,local_b0);
                            uVar28 = DAT_14c948034;
                            puVar8 = local_438;
                          }
                          uVar18 = *(ulonglong *)((longlong)puVar17 + lVar10 + 4);
                          iVar6 = (int)(uVar18 >> 0x20);
                          uVar9 = uVar18;
                          if (uVar18 == uVar28) {
                            uVar9 = uVar28;
                            if (*(int *)((longlong)puVar17 + lVar10) != DAT_14c948030) {
                              FUN_14011791e(&local_b0,*(int *)((longlong)puVar17 + lVar10));
                              *(ulonglong *)((longlong)puVar17 + lVar10 + 4) =
                                   CONCAT44(uStack_ac,local_b0);
                              uVar18 = *(ulonglong *)((longlong)puVar17 + lVar10 + 4);
                              uVar28 = DAT_14c948034;
                              uVar9 = uVar18;
                            }
                            iVar6 = (int)(uVar18 >> 0x20);
                            puVar8 = local_438;
                          }
                          uVar11 = *(ulonglong *)((longlong)puVar19 + lVar10 + 4);
                          if (uVar11 != uVar9) break;
                          lVar10 = lVar10 + 0xc;
                          if ((ulonglong)uVar27 * 0xc == lVar10) goto LAB_143e62c5e;
                        }
                        if ((int)uVar11 == (int)uVar18) {
                          iVar6 = (int)(uVar11 >> 0x20) - iVar6;
                        }
                        else {
                          iVar6 = FUN_14002c2bd(uVar11 & 0xffffffff);
                          puVar8 = local_438;
                        }
                        if (-1 < iVar6) break;
                      }
                      else if ((int)uVar15 <= (int)uVar27) break;
                      puVar19 = puVar7;
                      piVar20 = &local_b0;
                      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                        *(undefined8 *)piVar20 = *puVar19;
                        puVar19 = puVar19 + 1;
                        piVar20 = piVar20 + 2;
                      }
                      puVar19 = puVar24;
                      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                        *puVar7 = *puVar19;
                        puVar19 = puVar19 + 1;
                        puVar7 = puVar7 + 1;
                      }
                      piVar20 = &local_b0;
                      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                        *puVar24 = *(undefined8 *)piVar20;
                        piVar20 = piVar20 + 2;
                        puVar24 = puVar24 + 1;
                      }
                      iVar5 = iVar12 * 2;
                      iVar6 = iVar12 * 2 + 1;
                      iVar21 = iVar12;
                    } while ((longlong)iVar6 < (longlong)puVar16);
LAB_143e62c5e:
                    puVar7 = (undefined8 *)((longlong)puVar16 + -1);
                    puVar19 = puVar8;
                    piVar20 = &local_b0;
                    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *(undefined8 *)piVar20 = *puVar19;
                      puVar19 = puVar19 + 1;
                      piVar20 = piVar20 + 2;
                    }
                    puVar19 = puVar8 + (longlong)puVar7 * 10;
                    puVar24 = puVar8;
                    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *puVar24 = *puVar19;
                      puVar19 = puVar19 + 1;
                      puVar24 = puVar24 + 1;
                    }
                    piVar20 = &local_b0;
                    puVar19 = puVar8 + (longlong)puVar7 * 10;
                    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *puVar19 = *(undefined8 *)piVar20;
                      piVar20 = piVar20 + 2;
                      puVar19 = puVar19 + 1;
                    }
                    puVar22 = local_428;
                  } while ((undefined8 *)0x2 < puVar16);
                }
              }
            }
LAB_143e62e9c:
            puVar22 = puVar22 + -3;
          } while (&local_3b8 <= puVar22);
        }
        FUN_1447a1747(local_3f8,local_3f0);
        param_1 = local_408;
        puVar7 = local_410;
        if (local_3f8 != 0) {
          FUN_1400020a8();
          param_1 = local_408;
          puVar7 = local_410;
        }
LAB_143e62ed8:
        FUN_14605fd70(local_400,&local_3e8);
        FUN_141741bf5(local_3d8,uStack_3d0 & 0xffffffff);
        if (local_3d8 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)*(int *)(puVar7 + 10) * 0x10 != lVar10);
  }
  FUN_140f1049c(param_1);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143e62165:
  if ((int)uVar15 <= (int)uVar27) goto LAB_143e62027;
joined_r0x000143e62195:
  do {
    uVar28 = DAT_14c948034;
    puVar7 = puVar16;
    puVar16 = puVar7 + -10;
    DAT_14c948034 = uVar28;
    if (puVar16 <= puVar8) break;
    uVar27 = *(uint *)((longlong)puVar7 + -0x24);
    if ((int)uVar27 < 2 && *(int *)((longlong)puVar7 + -4) < 1) {
      puVar24 = puVar7 + -4;
    }
    else {
      puVar24 = (undefined8 *)puVar7[-2];
    }
    uVar15 = *(uint *)((longlong)puVar8 + 0x2c);
    puVar13 = puVar8 + 6;
    if (1 < (int)uVar15 || 0 < *(int *)((longlong)puVar8 + 0x4c)) {
      puVar13 = (undefined8 *)puVar8[8];
    }
    if (uVar27 == uVar15) {
      if (0 < (int)uVar27) {
        lVar10 = 0;
        do {
          uVar18 = *(ulonglong *)((longlong)puVar24 + lVar10 + 4);
          if ((uVar18 == uVar28) && (*(int *)((longlong)puVar24 + lVar10) != DAT_14c948030)) {
            local_438 = puVar17;
            FUN_14011791e(&local_b0,*(int *)((longlong)puVar24 + lVar10),uVar18 >> 0x20);
            *(ulonglong *)((longlong)puVar24 + lVar10 + 4) = CONCAT44(uStack_ac,local_b0);
            uVar28 = DAT_14c948034;
            puVar17 = local_438;
            puVar19 = local_430;
          }
          uVar18 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
          iVar6 = (int)(uVar18 >> 0x20);
          uVar9 = uVar18;
          if (uVar18 == uVar28) {
            uVar9 = uVar28;
            local_438 = puVar17;
            if (*(int *)((longlong)puVar13 + lVar10) != DAT_14c948030) {
              FUN_14011791e(&local_b0,*(int *)((longlong)puVar13 + lVar10));
              *(ulonglong *)((longlong)puVar13 + lVar10 + 4) = CONCAT44(uStack_ac,local_b0);
              uVar18 = *(ulonglong *)((longlong)puVar13 + lVar10 + 4);
              uVar28 = DAT_14c948034;
              uVar9 = uVar18;
            }
            iVar6 = (int)(uVar18 >> 0x20);
            puVar17 = local_438;
            puVar19 = local_430;
          }
          uVar11 = *(ulonglong *)((longlong)puVar24 + lVar10 + 4);
          if (uVar11 != uVar9) {
            if ((int)uVar11 == (int)uVar18) {
              iVar6 = (int)(uVar11 >> 0x20) - iVar6;
            }
            else {
              iVar6 = FUN_14002c2bd(uVar11 & 0xffffffff);
              puVar19 = local_430;
            }
            if (iVar6 < 0) goto LAB_143e62341;
            break;
          }
          lVar10 = lVar10 + 0xc;
        } while ((ulonglong)uVar27 * 0xc != lVar10);
      }
      goto joined_r0x000143e62195;
    }
  } while ((int)uVar15 <= (int)uVar27);
LAB_143e62341:
  lVar10 = 10;
  puVar24 = puVar8;
  puVar13 = puVar17;
  piVar20 = &local_b0;
  if (puVar17 <= puVar16) {
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      *(undefined8 *)piVar20 = *puVar13;
      puVar13 = puVar13 + 1;
      piVar20 = piVar20 + 2;
    }
    puVar7 = puVar16;
    puVar24 = puVar17;
    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar24 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar24 = puVar24 + 1;
    }
    piVar20 = &local_b0;
    puVar7 = puVar16;
    for (lVar10 = 10; puVar24 = puVar17, lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar7 = *(undefined8 *)piVar20;
      piVar20 = piVar20 + 2;
      puVar7 = puVar7 + 1;
    }
    goto LAB_143e62027;
  }
  for (; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined8 *)piVar20 = *puVar24;
    puVar24 = puVar24 + 1;
    piVar20 = piVar20 + 2;
  }
  puVar24 = puVar16;
  puVar13 = puVar8;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar24;
    puVar24 = puVar24 + 1;
    puVar13 = puVar13 + 1;
  }
  piVar20 = &local_b0;
  puVar24 = puVar16;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar24 = *(undefined8 *)piVar20;
    piVar20 = piVar20 + 2;
    puVar24 = puVar24 + 1;
  }
  iVar6 = (int)local_418 + -1;
  puVar7 = puVar7 + -0x14;
  if ((longlong)puVar7 - (longlong)puVar8 < (longlong)local_420 - (longlong)puVar17) {
    if (puVar17 < puVar19) {
      *local_428 = (ulonglong)puVar17;
      local_428[1] = (ulonglong)puVar19;
      *(int *)(local_428 + 2) = iVar6;
      local_428 = local_428 + 3;
    }
    puVar22 = local_428;
    if (puVar16 <= puVar8 + 10) goto LAB_143e62e9c;
  }
  else {
    puVar22 = local_428;
    if (puVar8 + 10 < puVar16) {
      *local_428 = (ulonglong)puVar8;
      local_428[1] = (ulonglong)puVar7;
      *(int *)(local_428 + 2) = iVar6;
      puVar22 = local_428 + 3;
    }
    puVar7 = puVar19;
    puVar8 = puVar17;
    if (puVar19 <= puVar17) goto LAB_143e62e9c;
  }
  local_428 = puVar22;
  iVar5 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar8) >> 4) * -0x33333333;
  uVar28 = (ulonglong)(iVar5 + 1);
  if (iVar6 == 0) goto LAB_143e6244e;
  goto LAB_143e61fc4;
}



// FUNCTION 143e630d8 FUN_143e630d8 body=91 status=ok
// SIG undefined FUN_143e630d8(void)

void FUN_143e630d8(void)

{
  if (DAT_14cb8dcd0 != 0) {
    if (DAT_14cb8dcc8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8dcc8)(DAT_14cb8dcc8,0);
    FUN_1446efa72(&DAT_14cb8dcc8,0,0,0x10);
    DAT_14cb8dcd0 = 0;
  }
  if (DAT_14cb8dcc8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e63134 FUN_143e63134 body=52 status=ok
// SIG undefined FUN_143e63134(void)

undefined8 * FUN_143e63134(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b433f70;
  FUN_14063b166(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6317c FUN_143e6317c body=303 status=ok
// SIG undefined FUN_143e6317c(void)

void FUN_143e6317c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 0x31) {
    FUN_1446efa72(param_2,0,0x31,0x10);
    *(undefined4 *)(param_2 + 1) = 0x31;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b3e9b40;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b433f70;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
  puVar2[5] = &PTR_FUN_14a171dc0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  }
  puVar2[5] = &PTR_FUN_14b023890;
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  puVar2[0xb] = 0;
  FUN_14007b208(puVar2 + 0xc,param_1 + 0x60);
  FUN_14007b208(puVar2 + 0x20,param_1 + 0x100);
  FUN_14007b350(puVar2 + 0x34,param_1 + 0x1a0);
  puVar2[0x60] = 0;
  iVar1 = *(int *)(param_1 + 0x308);
  _Src = *(void **)(param_1 + 0x300);
  *(int *)(puVar2 + 0x61) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x30c) = 0;
    return;
  }
  FUN_14083056c(puVar2 + 0x60,iVar1,0);
  memcpy((void *)puVar2[0x60],_Src,(longlong)iVar1 << 4);
  return;
}



// FUNCTION 143e632ac FUN_143e632ac body=303 status=ok
// SIG undefined FUN_143e632ac(void)

void FUN_143e632ac(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 0x31) {
    FUN_1446efa72(param_2,0,0x31,0x10);
    *(undefined4 *)(param_2 + 1) = 0x31;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b3e9b40;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b433f70;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
  puVar2[5] = &PTR_FUN_14a171dc0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  }
  puVar2[5] = &PTR_FUN_14b023890;
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  puVar2[0xb] = 0;
  FUN_14007b208(puVar2 + 0xc,param_1 + 0x60);
  FUN_14007b208(puVar2 + 0x20,param_1 + 0x100);
  FUN_14007b350(puVar2 + 0x34,param_1 + 0x1a0);
  puVar2[0x60] = 0;
  iVar1 = *(int *)(param_1 + 0x308);
  _Src = *(void **)(param_1 + 0x300);
  *(int *)(puVar2 + 0x61) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x30c) = 0;
    return;
  }
  FUN_14083056c(puVar2 + 0x60,iVar1,0);
  memcpy((void *)puVar2[0x60],_Src,(longlong)iVar1 << 4);
  return;
}



// FUNCTION 143e633dc FUN_143e633dc body=343 status=ok
// SIG undefined FUN_143e633dc(void)

void FUN_143e633dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x31) {
    FUN_1446efa72(param_2 + 1,0,0x31,0x10);
    param_2[1].LockCount = 0x31;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b3e9b40;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b433f70;
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  DVar5 = *(DWORD *)(param_1 + 0x20);
  DVar6 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var2->ProcessLocksList).Blink + 4) = uVar4;
  p_Var2->EntryCount = DVar5;
  p_Var2->ContentionCount = DVar6;
  *(undefined ***)&p_Var2->Flags = &PTR_FUN_14a171dc0;
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined1 *)&p_Var2[1].CriticalSection = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    p_Var2[1].Type = (short)uVar3;
    p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
    *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  }
  *(undefined ***)&p_Var2->Flags = &PTR_FUN_14b023890;
  *(undefined1 *)&p_Var2[1].ProcessLocksList.Flink = *(undefined1 *)(param_1 + 0x40);
  p_Var2[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  p_Var2[1].EntryCount = *(DWORD *)(param_1 + 0x50);
  p_Var2[1].Flags = 0;
  p_Var2[1].CreatorBackTraceIndexHigh = 0;
  p_Var2[1].SpareWORD = 0;
  FUN_14007b208(p_Var2 + 2,param_1 + 0x60);
  FUN_14007b208(&p_Var2[5].ProcessLocksList,param_1 + 0x100);
  FUN_14007b350(&p_Var2[8].EntryCount,param_1 + 0x1a0);
  p_Var2[0x10].Type = 0;
  p_Var2[0x10].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[0x10].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x308);
  _Src = *(void **)(param_1 + 0x300);
  *(int *)&p_Var2[0x10].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[0x10].CriticalSection + 4) = 0;
  }
  else {
    FUN_14083056c(p_Var2 + 0x10,iVar1,0);
    memcpy(*(void **)(p_Var2 + 0x10),_Src,(longlong)iVar1 << 4);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e63521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e6359a FUN_143e6359a body=113 status=ok
// SIG undefined FUN_143e6359a(void)

undefined8 FUN_143e6359a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar3 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143e635fb;
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) {
        lVar3 = 0;
        if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
          lVar3 = *(longlong *)(param_1 + 0x20);
        }
        goto LAB_143e635fb;
      }
    }
  }
  lVar3 = 0;
LAB_143e635fb:
  FUN_146562ed2(param_1 + 0x28,lVar3);
  return 1;
}



// FUNCTION 143e63618 FUN_143e63618 body=29 status=ok
// SIG undefined FUN_143e63618(void)

undefined8 FUN_143e63618(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6364a FUN_143e6364a body=85 status=ok
// SIG undefined FUN_143e6364a(void)

void FUN_143e6364a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4340f0;
  return;
}



// FUNCTION 143e636a0 FUN_143e636a0 body=85 status=ok
// SIG undefined FUN_143e636a0(void)

void FUN_143e636a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4340f0;
  return;
}



// FUNCTION 143e636f6 FUN_143e636f6 body=118 status=ok
// SIG undefined FUN_143e636f6(void)

void FUN_143e636f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4340f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6375d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e63772 FUN_143e63772 body=1 status=ok
// SIG undefined FUN_143e63772(void)

void FUN_143e63772(void)

{
  return;
}



// FUNCTION 143e63780 FUN_143e63780 body=29 status=ok
// SIG undefined FUN_143e63780(void)

undefined8 FUN_143e63780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e637b2 FUN_143e637b2 body=93 status=ok
// SIG undefined FUN_143e637b2(void)

void FUN_143e637b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e63810 FUN_143e63810 body=93 status=ok
// SIG undefined FUN_143e63810(void)

void FUN_143e63810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e6386e FUN_143e6386e body=126 status=ok
// SIG undefined FUN_143e6386e(void)

void FUN_143e6386e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434220;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e638dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e63946 FUN_143e63946 body=100 status=ok
// SIG undefined FUN_143e63946(void)

undefined8 FUN_143e63946(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
        FUN_14051c98c(*(longlong *)(param_1 + 0x20),1);
      }
    }
  }
  return 1;
}



// FUNCTION 143e639aa FUN_143e639aa body=29 status=ok
// SIG undefined FUN_143e639aa(void)

undefined8 FUN_143e639aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e639dc FUN_143e639dc body=93 status=ok
// SIG undefined FUN_143e639dc(void)

void FUN_143e639dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e63a3a FUN_143e63a3a body=93 status=ok
// SIG undefined FUN_143e63a3a(void)

void FUN_143e63a3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e63a98 FUN_143e63a98 body=126 status=ok
// SIG undefined FUN_143e63a98(void)

void FUN_143e63a98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434290;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e63b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e63b16 FUN_143e63b16 body=66 status=ok
// SIG undefined FUN_143e63b16(void)

void FUN_143e63b16(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e63ba0(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e63b5a FUN_143e63b5a body=68 status=ok
// SIG undefined FUN_143e63b5a(void)

undefined8 FUN_143e63b5a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e63ba0(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e63ba0 FUN_143e63ba0 body=419 status=ok
// SIG undefined FUN_143e63ba0(void)

void FUN_143e63ba0(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
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
  plVar2 = *(longlong **)(param_1 + 2);
  if ((((plVar2 == (longlong *)0x0) || (param_1[1] == 0)) || (uVar1 = *param_1, (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_143e63c63;
  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if ((lVar4 == 0) || (*(uint *)(lVar4 + 0x10) != param_1[1])) goto LAB_143e63c63;
  if ((*param_2 == 0) || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) goto LAB_143e63c63;
  lVar4 = *(longlong *)(*param_2 + 0xa8);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar3 == 0) {
LAB_143e63c5c:
    lVar3 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_143e63c5c;
  }
  if (lVar4 == lVar3) {
    FUN_14051c98c(plVar2,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_143e63c63:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e63d5e FUN_143e63d5e body=29 status=ok
// SIG undefined FUN_143e63d5e(void)

undefined8 FUN_143e63d5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e63d90 FUN_143e63d90 body=93 status=ok
// SIG undefined FUN_143e63d90(void)

void FUN_143e63d90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e63dee FUN_143e63dee body=93 status=ok
// SIG undefined FUN_143e63dee(void)

void FUN_143e63dee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e63e4c FUN_143e63e4c body=126 status=ok
// SIG undefined FUN_143e63e4c(void)

void FUN_143e63e4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434300;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e63ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e63eca FUN_143e63eca body=66 status=ok
// SIG undefined FUN_143e63eca(void)

void FUN_143e63eca(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e63f54(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e63f0e FUN_143e63f0e body=68 status=ok
// SIG undefined FUN_143e63f0e(void)

undefined8 FUN_143e63f0e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e63f54(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e63f54 FUN_143e63f54 body=419 status=ok
// SIG undefined FUN_143e63f54(void)

void FUN_143e63f54(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
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
  plVar2 = *(longlong **)(param_1 + 2);
  if ((((plVar2 == (longlong *)0x0) || (param_1[1] == 0)) || (uVar1 = *param_1, (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_143e64017;
  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if ((lVar4 == 0) || (*(uint *)(lVar4 + 0x10) != param_1[1])) goto LAB_143e64017;
  if ((*param_2 == 0) || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) goto LAB_143e64017;
  lVar4 = *(longlong *)(*param_2 + 0xa8);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar3 == 0) {
LAB_143e64010:
    lVar3 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_143e64010;
  }
  if (lVar4 == lVar3) {
    FUN_14051c98c(plVar2,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_143e64017:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e64112 FUN_143e64112 body=29 status=ok
// SIG undefined FUN_143e64112(void)

undefined8 FUN_143e64112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e64144 FUN_143e64144 body=93 status=ok
// SIG undefined FUN_143e64144(void)

void FUN_143e64144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e641a2 FUN_143e641a2 body=93 status=ok
// SIG undefined FUN_143e641a2(void)

void FUN_143e641a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e64200 FUN_143e64200 body=126 status=ok
// SIG undefined FUN_143e64200(void)

void FUN_143e64200(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434370;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6426f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e642d8 FUN_143e642d8 body=100 status=ok
// SIG undefined FUN_143e642d8(void)

undefined8 FUN_143e642d8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
        FUN_14051c98c(*(longlong *)(param_1 + 0x20),1);
      }
    }
  }
  return 1;
}



// FUNCTION 143e6433c FUN_143e6433c body=29 status=ok
// SIG undefined FUN_143e6433c(void)

undefined8 FUN_143e6433c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e644d8 FUN_143e644d8 body=93 status=ok
// SIG undefined FUN_143e644d8(void)

void FUN_143e644d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4343e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e64536 FUN_143e64536 body=93 status=ok
// SIG undefined FUN_143e64536(void)

void FUN_143e64536(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4343e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e64594 FUN_143e64594 body=126 status=ok
// SIG undefined FUN_143e64594(void)

void FUN_143e64594(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4343e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e64603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e6461c FUN_143e6461c body=266 status=ok
// SIG undefined FUN_143e6461c(void)

undefined8 FUN_143e6461c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e64720;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e64720;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e64720:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e646d4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1404966d6(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143e646d4;
    }
  }
  uVar6 = 0;
LAB_143e646d4:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e64728 FUN_143e64728 body=148 status=ok
// SIG undefined FUN_143e64728(void)

void FUN_143e64728(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x1800);
  if (*(longlong *)(param_1 + 0x1800) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x1844) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1840) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x1844) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x1840);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x1840) = param_2;
  *(int *)(param_1 + 0x1844) = *(int *)(param_1 + 0x1844) + 1;
  lVar5 = param_1 + 0x1810;
  if (*(longlong *)(param_1 + 0x1830) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1830);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 143e647bc FUN_143e647bc body=1786 status=ok
// SIG undefined FUN_143e647bc(void)

void FUN_143e647bc(void **param_1,undefined8 *param_2,double *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  double dVar3;
  void *pvVar4;
  void *pvVar5;
  double dVar6;
  double dVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  void **ppvVar26;
  int iVar27;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 *local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  void *local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(char *)((longlong)param_1 + 0x6c) == '\x01') {
    dVar3 = *param_3;
    pvVar4 = param_1[0xb];
    pvVar5 = param_1[0xc];
    dVar6 = param_3[2];
    uVar20 = 0;
    if ((dVar3 <= (double)pvVar4) && (uVar20 = 0, param_3[1] <= (double)pvVar5)) {
      local_118[0] = param_1[4];
      uVar20 = 1;
    }
    if (((double)pvVar4 <= dVar6) && (param_3[1] <= (double)pvVar5)) {
      uVar23 = (ulonglong)uVar20;
      uVar20 = uVar20 + 1;
      local_118[uVar23] = param_1[5];
    }
    dVar7 = param_3[3];
    if ((dVar3 <= (double)pvVar4) && ((double)pvVar5 <= dVar7)) {
      uVar23 = (ulonglong)uVar20;
      uVar20 = uVar20 + 1;
      local_118[uVar23] = param_1[2];
    }
    if (((double)pvVar4 <= dVar6) && ((double)pvVar5 <= dVar7)) {
      uVar23 = (ulonglong)uVar20;
      uVar20 = uVar20 + 1;
      local_118[uVar23] = param_1[3];
    }
    if (uVar20 == 1) goto LAB_143e64e79;
    if (uVar20 != 0) {
      local_128 = param_3[4];
      local_148._0_4_ = *(undefined4 *)param_3;
      local_148._4_4_ = *(undefined4 *)((longlong)param_3 + 4);
      uStack_140 = *(undefined4 *)(param_3 + 1);
      uStack_13c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_138 = *(undefined4 *)(param_3 + 2);
      uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_130 = *(undefined4 *)(param_3 + 3);
      uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar13 = *param_2;
      iVar12 = *(int *)(param_1 + 1);
      *(uint *)(param_1 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar12 + 1U) {
        FUN_1418b3e08(param_1,iVar12);
      }
      pvVar4 = *param_1;
      lVar22 = (longlong)iVar12 * 0x30;
      *(double *)((longlong)pvVar4 + lVar22 + 0x20) = local_128;
      puVar1 = (undefined4 *)((longlong)pvVar4 + lVar22 + 0x10);
      *puVar1 = local_138;
      puVar1[1] = uStack_134;
      puVar1[2] = uStack_130;
      puVar1[3] = uStack_12c;
      puVar1 = (undefined4 *)((longlong)pvVar4 + lVar22);
      *puVar1 = (undefined4)local_148;
      puVar1[1] = local_148._4_4_;
      puVar1[2] = uStack_140;
      puVar1[3] = uStack_13c;
      *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x28) = uVar13;
      goto LAB_143e64a24;
    }
  }
  pvVar4 = param_1[9];
  pvVar5 = param_1[7];
  dVar6 = (double)pvVar4 - (double)pvVar5;
  pvVar8 = param_1[8];
  pvVar9 = param_1[6];
  dVar3 = (double)pvVar8 - (double)pvVar9;
  iVar12 = *(int *)(param_1 + 1);
  if (iVar12 < 100 ||
      dVar3 * dVar3 + dVar6 * dVar6 <=
      (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd))) {
    local_128 = param_3[4];
    local_148._0_4_ = *(undefined4 *)param_3;
    local_148._4_4_ = *(undefined4 *)((longlong)param_3 + 4);
    uStack_140 = *(undefined4 *)(param_3 + 1);
    uStack_13c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_138 = *(undefined4 *)(param_3 + 2);
    uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_130 = *(undefined4 *)(param_3 + 3);
    uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar13 = *param_2;
    *(uint *)(param_1 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar12 + 1U) {
      FUN_1418b3e08(param_1);
    }
    pvVar4 = *param_1;
    lVar22 = (longlong)iVar12 * 0x30;
    *(double *)((longlong)pvVar4 + lVar22 + 0x20) = local_128;
    puVar1 = (undefined4 *)((longlong)pvVar4 + lVar22 + 0x10);
    *puVar1 = local_138;
    puVar1[1] = uStack_134;
    puVar1[2] = uStack_130;
    puVar1[3] = uStack_12c;
    puVar1 = (undefined4 *)((longlong)pvVar4 + lVar22);
    *puVar1 = (undefined4)local_148;
    puVar1[1] = local_148._4_4_;
    puVar1[2] = uStack_140;
    puVar1[3] = uStack_13c;
    *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x28) = uVar13;
LAB_143e64a24:
    if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  pvVar10 = param_1[0xb];
  pvVar11 = param_1[0xc];
  dVar7 = dVar6 * 0.5 + (double)pvVar11;
  dVar14 = (double)pvVar10 - dVar3 * 0.5;
  dVar3 = dVar3 * 0.5 + (double)pvVar10;
  local_160 = param_2;
  puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0xd);
  local_168 = (double)pvVar11 + 0.0;
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[6] = dVar14;
  puVar21[7] = pvVar11;
  puVar21[8] = (double)pvVar10 + 0.0;
  puVar21[9] = dVar7;
  *(undefined1 *)(puVar21 + 10) = 1;
  puVar21[0xb] = ((double)pvVar10 + 0.0 + dVar14) * 0.5;
  puVar21[0xc] = (dVar7 + (double)pvVar11) * 0.5;
  *(undefined4 *)(puVar21 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  param_1[2] = puVar21;
  puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[6] = pvVar10;
  puVar21[7] = pvVar11;
  puVar21[8] = pvVar8;
  puVar21[9] = pvVar4;
  *(undefined1 *)(puVar21 + 10) = 1;
  puVar21[0xb] = ((double)pvVar8 + (double)pvVar10) * 0.5;
  puVar21[0xc] = ((double)pvVar4 + (double)pvVar11) * 0.5;
  *(undefined4 *)(puVar21 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  param_1[3] = puVar21;
  puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[6] = pvVar9;
  puVar21[7] = pvVar5;
  puVar21[8] = pvVar10;
  puVar21[9] = pvVar11;
  *(undefined1 *)(puVar21 + 10) = 1;
  puVar21[0xb] = ((double)pvVar9 + (double)pvVar10) * 0.5;
  puVar21[0xc] = ((double)pvVar5 + (double)pvVar11) * 0.5;
  *(undefined4 *)(puVar21 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  param_1[4] = puVar21;
  puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  dVar6 = (double)pvVar11 - dVar6 * 0.5;
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[6] = pvVar10;
  puVar21[7] = dVar6;
  puVar21[8] = dVar3;
  puVar21[9] = local_168;
  *(undefined1 *)(puVar21 + 10) = 1;
  puVar21[0xb] = (dVar3 + (double)pvVar10) * 0.5;
  puVar21[0xc] = (dVar6 + local_168) * 0.5;
  *(undefined4 *)(puVar21 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  param_1[5] = puVar21;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  iVar12 = *(int *)(param_1 + 1);
  if ((longlong)iVar12 != 0) {
    pvVar4 = *param_1;
    lVar22 = 0;
    do {
      uVar23 = uStack_150;
      if (*(char *)((longlong)param_1 + 0x6c) == '\x01') {
        dVar3 = *(double *)((longlong)pvVar4 + lVar22);
        dVar6 = *(double *)((longlong)pvVar4 + lVar22 + 8);
        pvVar5 = param_1[0xb];
        pvVar8 = param_1[0xc];
        uVar20 = 0;
        if ((dVar3 <= (double)pvVar5) && (uVar20 = 0, dVar6 <= (double)pvVar8)) {
          local_148 = param_1[4];
          uVar20 = 1;
        }
        dVar7 = *(double *)((longlong)pvVar4 + lVar22 + 0x10);
        if (((double)pvVar5 <= dVar7) && (dVar6 <= (double)pvVar8)) {
          uVar24 = (ulonglong)uVar20;
          uVar20 = uVar20 + 1;
          (&local_148)[uVar24] = param_1[5];
        }
        dVar6 = *(double *)((longlong)pvVar4 + lVar22 + 0x18);
        if ((dVar3 <= (double)pvVar5) && ((double)pvVar8 <= dVar6)) {
          uVar24 = (ulonglong)uVar20;
          uVar20 = uVar20 + 1;
          (&local_148)[uVar24] = param_1[2];
        }
        if (((double)pvVar5 <= dVar7) && ((double)pvVar8 <= dVar6)) {
          uVar24 = (ulonglong)uVar20;
          uVar20 = uVar20 + 1;
          (&local_148)[uVar24] = param_1[3];
        }
        ppvVar26 = local_148;
        if (uVar20 != 1) goto LAB_143e64dfa;
        iVar27 = *(int *)(local_148 + 1);
        *(uint *)(local_148 + 1) = iVar27 + 1U;
        if (*(uint *)((longlong)local_148 + 0xc) < iVar27 + 1U) {
          FUN_1418b3e08(local_148,iVar27);
        }
      }
      else {
LAB_143e64dfa:
        iVar27 = (int)uStack_150;
        uVar20 = (int)uStack_150 + 1;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar20);
        ppvVar26 = &local_158;
        if (uStack_150._4_4_ < uVar20) {
          FUN_1418b3e08(&local_158,uVar23 & 0xffffffff);
        }
      }
      puVar1 = (undefined4 *)(lVar22 + (longlong)pvVar4);
      pvVar5 = *ppvVar26;
      lVar25 = (longlong)iVar27 * 0x30;
      uVar2 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      uVar13 = *(undefined8 *)(puVar1 + 4);
      uVar18 = *(undefined8 *)(puVar1 + 6);
      uVar19 = *(undefined8 *)(puVar1 + 10);
      puVar21 = (undefined8 *)((longlong)pvVar5 + lVar25 + 0x20);
      *puVar21 = *(undefined8 *)(puVar1 + 8);
      puVar21[1] = uVar19;
      puVar21 = (undefined8 *)((longlong)pvVar5 + lVar25 + 0x10);
      *puVar21 = uVar13;
      puVar21[1] = uVar18;
      puVar1 = (undefined4 *)((longlong)pvVar5 + lVar25);
      *puVar1 = uVar2;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      lVar22 = lVar22 + 0x30;
    } while ((longlong)iVar12 * 0x30 != lVar22);
  }
  pvVar4 = local_158;
  if (&local_158 != param_1) {
    iVar12 = (int)uStack_150;
    lVar22 = (longlong)(int)uStack_150;
    *(int *)(param_1 + 1) = (int)uStack_150;
    if ((int)uStack_150 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143e64f30(param_1,uStack_150 & 0xffffffff);
      if (iVar12 != 0) {
        memcpy(*param_1,pvVar4,lVar22 * 0x30);
      }
    }
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143e64e79:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_188);
}



// FUNCTION 143e64f30 FUN_143e64f30 body=243 status=ok
// SIG undefined FUN_143e64f30(void)

void FUN_143e64f30(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
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



// FUNCTION 143e65023 FUN_143e65023 body=96 status=ok
// SIG undefined FUN_143e65023(void)

void FUN_143e65023(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    while (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x108) = **(undefined8 **)(param_1 + 0x108);
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 143e65084 FUN_143e65084 body=425 status=ok
// SIG undefined FUN_143e65084(void)

void FUN_143e65084(void *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x450);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x454) = 4;
LAB_143e650ad:
    if (*(void **)((longlong)param_1 + 0x440) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x440),(longlong)param_2 * 0x110);
    param_2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0x454)) {
      lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
    }
    uVar3 = lVar2 * 0x110;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
    uVar3 = uVar3 / 0x110;
    uVar5 = (uint)uVar3;
    if ((int)uVar5 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x454) = 0x7fffffff;
      uVar3 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x454) = uVar5;
      if (uVar5 < 5) goto LAB_143e650ad;
    }
    if (*(longlong *)((longlong)param_1 + 0x440) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x440,0,uVar3,0x110);
      memmove(*(void **)((longlong)param_1 + 0x440),param_1,(longlong)param_2 * 0x110);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x440,param_2,uVar3,0x110);
  return;
}



// FUNCTION 143e6522e FUN_143e6522e body=31 status=ok
// SIG undefined FUN_143e6522e(void)

undefined8 FUN_143e6522e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6524e FUN_143e6524e body=83 status=ok
// SIG undefined FUN_143e6524e(void)

undefined8 * FUN_143e6524e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b434530;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 143e65420 FUN_143e65420 body=126 status=ok
// SIG undefined FUN_143e65420(void)

void FUN_143e65420(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4345a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434530;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e6549e FUN_143e6549e body=126 status=ok
// SIG undefined FUN_143e6549e(void)

void FUN_143e6549e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4345a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434530;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e6551c FUN_143e6551c body=164 status=ok
// SIG undefined FUN_143e6551c(void)

void FUN_143e6551c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4345a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434530;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e655b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e655d4 FUN_143e655d4 body=282 status=ok
// SIG undefined FUN_143e655d4(void)

undefined8 FUN_143e655d4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e656e8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e656e8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e656e8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e65683;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1458e8ada(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,param_2);
      uVar6 = 1;
      goto LAB_143e65683;
    }
  }
  uVar6 = 0;
LAB_143e65683:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e656f0 FUN_143e656f0 body=59 status=ok
// SIG undefined FUN_143e656f0(void)

undefined8 * FUN_143e656f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b434610;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e658aa FUN_143e658aa body=122 status=ok
// SIG undefined FUN_143e658aa(void)

void FUN_143e658aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434610;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  FUN_1447a97f4(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143e65924 FUN_143e65924 body=122 status=ok
// SIG undefined FUN_143e65924(void)

void FUN_143e65924(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434610;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  FUN_1447a97f4(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143e6599e FUN_143e6599e body=156 status=ok
// SIG undefined FUN_143e6599e(void)

void FUN_143e6599e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b434d90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434610;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  FUN_1447a97f4(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e65a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e65a50 FUN_143e65a50 body=285 status=ok
// SIG undefined FUN_143e65a50(void)

undefined8 FUN_143e65a50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e65b67;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e65b67;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e65b67:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e65b1a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e5d328(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,
                    param_2);
      uVar6 = 1;
      goto LAB_143e65b1a;
    }
  }
  uVar6 = 0;
LAB_143e65b1a:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e65b6e FUN_143e65b6e body=342 status=ok
// SIG undefined FUN_143e65b6e(void)

void FUN_143e65b6e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x2a0))();
  if (cVar3 != '\0') {
    lVar1 = param_1[1];
    lVar8 = lVar1 + 0x20;
    FUN_140cb36c4(lVar8,local_40);
    FUN_1447a97f4(local_38,param_2);
    *(undefined8 *)(local_38 + 10) = *param_3;
    lVar2 = param_3[1];
    *(longlong *)(local_38 + 0xc) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_38[0xe] = 0xffffffff;
    local_44 = local_40[0];
    uVar5 = *local_38;
    local_58 = 0;
    cVar3 = FUN_140cb35fa(lVar8,uVar5,local_38);
    if (cVar3 == '\0') {
      uVar6 = *(int *)(lVar1 + 0x28) - *(int *)(lVar1 + 0x54);
      iVar7 = 1;
      if (3 < uVar6) {
        uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((int)uVar6 < 1) || (iVar7 <= *(int *)(lVar1 + 0x68))) {
        uVar5 = *(int *)(lVar1 + 0x68) - 1U & uVar5;
        local_38[0xf] = uVar5;
        lVar8 = *(longlong *)(lVar1 + 0x60);
        if (*(longlong *)(lVar1 + 0x60) == 0) {
          lVar8 = lVar1 + 0x58;
        }
        local_38[0xe] =
             *(uint *)(lVar8 + ((longlong)*(int *)(lVar1 + 0x68) - 1U & (longlong)(int)uVar5) * 4);
        lVar8 = *(longlong *)(lVar1 + 0x60);
        if (*(longlong *)(lVar1 + 0x60) == 0) {
          lVar8 = lVar1 + 0x58;
        }
        *(undefined4 *)(lVar8 + ((longlong)*(int *)(lVar1 + 0x68) - 1U & (longlong)(int)uVar5) * 4)
             = local_44;
      }
      else {
        *(int *)(lVar1 + 0x68) = iVar7;
        FUN_140cb3a4c(lVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e65cf0 FUN_143e65cf0 body=29 status=ok
// SIG undefined FUN_143e65cf0(void)

undefined8 FUN_143e65cf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e65d0e FUN_143e65d0e body=29 status=ok
// SIG undefined FUN_143e65d0e(void)

undefined8 FUN_143e65d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e65eaa FUN_143e65eaa body=101 status=ok
// SIG undefined FUN_143e65eaa(void)

void FUN_143e65eaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4346a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e65f10 FUN_143e65f10 body=101 status=ok
// SIG undefined FUN_143e65f10(void)

void FUN_143e65f10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4346a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e65f76 FUN_143e65f76 body=134 status=ok
// SIG undefined FUN_143e65f76(void)

void FUN_143e65f76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b434710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4346a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e65fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e66080 FUN_143e66080 body=388 status=ok
// SIG undefined FUN_143e66080(void)

undefined8 FUN_143e66080(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_143e661fe;
    if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_143e661fe;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e661fe:
    local_30 = 0;
  }
  iVar2 = DAT_14c9647dc;
  lVar4 = DAT_14c9647c8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar9 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143e6613b;
    lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar10 != 0) &&
       ((*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
      lVar10 = *(longlong *)(param_1 + 0x20);
      piVar1 = (int *)(lVar10 + 0xa0);
      *piVar1 = *piVar1 + -1;
      uVar9 = 1;
      if (*piVar1 != 0) goto LAB_143e6613b;
      *(undefined1 *)(lVar10 + 0x9c) = 0;
      *(undefined2 *)(lVar10 + 0x88) = 0;
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143e661e5:
        plVar7 = (longlong *)0x0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x28);
        plVar7 = (longlong *)0x0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < iVar2)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_143e661e5;
          plVar7 = (longlong *)*puVar8;
        }
      }
      (**(code **)(*plVar7 + 0x2a8))(plVar7,lVar10,*(undefined4 *)(param_2 + 0x30));
      goto LAB_143e6613b;
    }
  }
  uVar9 = 0;
LAB_143e6613b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e66254 FUN_143e66254 body=322 status=ok
// SIG undefined FUN_143e66254(void)

void FUN_143e66254(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *param_2;
  if ((-1 < (longlong)iVar3) && (iVar3 < (int)((longlong *)*param_1)[1])) {
    lVar4 = *(longlong *)*param_1;
    lVar7 = (longlong)iVar3 * 0x30;
    lVar5 = *(longlong *)(lVar4 + lVar7);
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar4 + lVar7);
      lVar4 = param_1[2];
      lVar7 = param_1[1];
      if (puVar9[4] == 0) {
        puVar8 = &DAT_14c9a1308;
      }
      else {
        puVar8 = (undefined8 *)FUN_1446e60f4(puVar9[4],puVar9 + 1);
      }
      local_48 = *puVar8;
      local_40 = puVar8[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_58 = lVar4;
      FUN_140b9b796(lVar5,&local_38,&local_48,(int)lVar7);
      if (puVar9 != &DAT_14c9a12f8) {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)puVar9[3];
        puVar9[2] = local_38;
        puVar9[3] = local_30;
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
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e66398 FUN_143e66398 body=31 status=ok
// SIG undefined FUN_143e66398(void)

undefined8 FUN_143e66398(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e66406 FUN_143e66406 body=591 status=ok
// SIG undefined FUN_143e66406(void)

void FUN_143e66406(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined **local_48;
  undefined8 local_40;
  uint *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *param_2;
  if (((longlong)iVar3 < 0) || ((int)((longlong *)*param_1)[1] <= iVar3)) goto LAB_143e665fc;
  lVar7 = *(longlong *)*param_1;
  lVar6 = (longlong)iVar3 * 0x78;
  iVar3 = *(int *)(lVar7 + 4 + lVar6);
  if (iVar3 == 0) goto LAB_143e665fc;
  puVar9 = (uint *)(lVar7 + lVar6);
  uVar4 = *puVar9;
  if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_143e665fc;
  plVar8 = (longlong *)
           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  if ((plVar8 == (longlong *)0x0) ||
     (((int)plVar8[2] != iVar3 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_143e665fc;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar8;
  }
  else {
    lVar7 = 0;
  }
  local_88 = 0;
  FUN_1401412e0(lVar7 + 0x68,&local_68,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0);
  if (puVar9 + 4 != (uint *)&DAT_14c9a1308) {
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(puVar9 + 6);
    *(code **)(puVar9 + 4) = local_68;
    *(longlong **)(puVar9 + 6) = local_60;
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
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  pbVar5 = *(byte **)(puVar9 + 4);
  puVar10 = &DAT_14c9a1288;
  if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
    puVar10 = (undefined8 *)(*(longlong *)(pbVar5 + 8) + 0x18);
  }
  local_70 = DAT_14cb8db20;
  local_78 = DAT_14cb8db18;
  FUN_1448075d0(&local_68);
  FUN_14045886c(puVar10,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (puVar9[1] == 0) {
LAB_143e6662b:
    local_40 = 0;
  }
  else {
    uVar4 = *puVar9;
    local_40 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar10 + 2) != puVar9[1] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_143e6662b;
      local_40 = *puVar10;
    }
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14b434680;
  local_68 = FUN_143e65b6e;
  local_38 = puVar9;
  FUN_143e5e082(local_40,puVar9);
LAB_143e665fc:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e66656 FUN_143e66656 body=29 status=ok
// SIG undefined FUN_143e66656(void)

undefined8 FUN_143e66656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e667f2 FUN_143e667f2 body=93 status=ok
// SIG undefined FUN_143e667f2(void)

void FUN_143e667f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e66850 FUN_143e66850 body=93 status=ok
// SIG undefined FUN_143e66850(void)

void FUN_143e66850(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e668ae FUN_143e668ae body=126 status=ok
// SIG undefined FUN_143e668ae(void)

void FUN_143e668ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434960;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6691d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e66936 FUN_143e66936 body=266 status=ok
// SIG undefined FUN_143e66936(void)

undefined8 FUN_143e66936(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e66a3a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e66a3a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e66a3a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e669ee;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1418b3aa8(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143e669ee;
    }
  }
  uVar6 = 0;
LAB_143e669ee:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e66a42 FUN_143e66a42 body=252 status=ok
// SIG undefined FUN_143e66a42(void)

ulonglong FUN_143e66a42(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143e66b40 FUN_143e66b40 body=55 status=ok
// SIG undefined FUN_143e66b40(void)

ulonglong FUN_143e66b40(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143e66b78 FUN_143e66b78 body=29 status=ok
// SIG undefined FUN_143e66b78(void)

undefined8 FUN_143e66b78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e66d14 FUN_143e66d14 body=101 status=ok
// SIG undefined FUN_143e66d14(void)

void FUN_143e66d14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4349d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e66d7a FUN_143e66d7a body=101 status=ok
// SIG undefined FUN_143e66d7a(void)

void FUN_143e66d7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4349d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e66de0 FUN_143e66de0 body=134 status=ok
// SIG undefined FUN_143e66de0(void)

void FUN_143e66de0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b434a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4349d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e66e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e66e78 FUN_143e66e78 body=278 status=ok
// SIG undefined FUN_143e66e78(void)

undefined8 FUN_143e66e78(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e66f88;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e66f88;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e66f88:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e66f3b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140f0fd40(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_143e66f3b;
    }
  }
  uVar6 = 0;
LAB_143e66f3b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e66f90 FUN_143e66f90 body=29 status=ok
// SIG undefined FUN_143e66f90(void)

undefined8 FUN_143e66f90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6712c FUN_143e6712c body=101 status=ok
// SIG undefined FUN_143e6712c(void)

void FUN_143e6712c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434b20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e67192 FUN_143e67192 body=101 status=ok
// SIG undefined FUN_143e67192(void)

void FUN_143e67192(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434b20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e671f8 FUN_143e671f8 body=134 status=ok
// SIG undefined FUN_143e671f8(void)

void FUN_143e671f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b434b20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434ab0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6726f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e67290 FUN_143e67290 body=278 status=ok
// SIG undefined FUN_143e67290(void)

undefined8 FUN_143e67290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e673a0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e673a0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e673a0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e67353;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_141366328(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_143e67353;
    }
  }
  uVar6 = 0;
LAB_143e67353:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e673a8 FUN_143e673a8 body=29 status=ok
// SIG undefined FUN_143e673a8(void)

undefined8 FUN_143e673a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e67544 FUN_143e67544 body=101 status=ok
// SIG undefined FUN_143e67544(void)

void FUN_143e67544(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434c00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e675aa FUN_143e675aa body=101 status=ok
// SIG undefined FUN_143e675aa(void)

void FUN_143e675aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434c00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e67610 FUN_143e67610 body=134 status=ok
// SIG undefined FUN_143e67610(void)

void FUN_143e67610(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b434c00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434b90;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e67687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e676a8 FUN_143e676a8 body=278 status=ok
// SIG undefined FUN_143e676a8(void)

undefined8 FUN_143e676a8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e677b8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e677b8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e677b8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e67757;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1489b12d2(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_143e67757;
    }
  }
  uVar6 = 0;
LAB_143e67757:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e677c0 FUN_143e677c0 body=29 status=ok
// SIG undefined FUN_143e677c0(void)

undefined8 FUN_143e677c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6795c FUN_143e6795c body=101 status=ok
// SIG undefined FUN_143e6795c(void)

void FUN_143e6795c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e679c2 FUN_143e679c2 body=101 status=ok
// SIG undefined FUN_143e679c2(void)

void FUN_143e679c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e67a28 FUN_143e67a28 body=134 status=ok
// SIG undefined FUN_143e67a28(void)

void FUN_143e67a28(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b434ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b434c70;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e67a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e67ac0 FUN_143e67ac0 body=278 status=ok
// SIG undefined FUN_143e67ac0(void)

undefined8 FUN_143e67ac0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e67bd0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e67bd0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e67bd0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e67b83;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e61c5a(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_143e67b83;
    }
  }
  uVar6 = 0;
LAB_143e67b83:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e67bd7 FUN_143e67bd7 body=2610 status=ok
// SIG undefined FUN_143e67bd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e67bd7(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb8d448 = (ulonglong)uVar2;
  local_98 = "char";
  local_90 = 4;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8dce8 = (ulonglong)uVar2;
  local_98 = "shared";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8dcf0 = (ulonglong)uVar2;
  DAT_14cb8d4b0 = 0;
  uRam000000014cb8d4b8 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e6360c;
  local_98 = &DAT_14011fc1e;
  FUN_14610d858(&local_98);
  atexit((_func_5014 *)&LAB_143e56286);
  DAT_14cb8d5a0 = 0;
  _DAT_14cb8d5a8 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e63612;
  local_98 = &DAT_14011fc1e;
  FUN_14610e00c(&local_98);
  atexit((_func_5014 *)&LAB_143e56317);
  _DAT_14cb8d630 = 0;
  uRam000000014cb8d638 = 0;
  _DAT_14cb8d640 = 0;
  DAT_14cb8d648 = 0;
  uRam000000014cb8d650 = 0;
  FUN_1446ddda2(&DAT_14cb8d630,"unlockables.char",0);
  atexit((_func_5014 *)&LAB_143e5631c);
  _DAT_14cb8d658 = 0;
  uRam000000014cb8d660 = 0;
  _DAT_14cb8d668 = 0;
  DAT_14cb8d670 = 0;
  uRam000000014cb8d678 = 0;
  FUN_1446ddda2(&DAT_14cb8d658,"engine.unlockables.char",0);
  atexit((_func_5014 *)&LAB_143e5632d);
  _DAT_14cb8d680 = 0;
  uRam000000014cb8d688 = 0;
  _DAT_14cb8d690 = 0;
  DAT_14cb8d698 = 0;
  uRam000000014cb8d6a0 = 0;
  FUN_1446ddda2(&DAT_14cb8d680,"unlockables.shared",0);
  atexit((_func_5014 *)&LAB_143e5633e);
  _DAT_14cb8d6a8 = 0;
  uRam000000014cb8d6b0 = 0;
  _DAT_14cb8d6b8 = 0;
  DAT_14cb8d6c0 = 0;
  uRam000000014cb8d6c8 = 0;
  FUN_1446ddda2(&DAT_14cb8d6a8,"engine.unlockables.shared",0);
  atexit((_func_5014 *)&LAB_143e5634f);
  local_98 = "unlockables";
  local_90 = 0xb;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8d6d0 = (ulonglong)uVar2;
  ram0x00014cb8d6dc = 0;
  FUN_14052b5e0(&DAT_14cb8d6d8,"bits64",0);
  _DAT_14cb8d6e8 = "bits64";
  ram0x00014cb8d6f4 = 0;
  FUN_14052b5e0(&DAT_14cb8d6f0,"entries",0);
  _DAT_14cb8d700 = "entries";
  ram0x00014cb8d70c = 0;
  FUN_14052b5e0(&DAT_14cb8d708,"purge",0);
  _DAT_14cb8d718 = "purge";
  ram0x00014cb8d724 = 0;
  FUN_14052b5e0(&DAT_14cb8d720,"_expand",0);
  _DAT_14cb8d730 = "_expand";
  local_98 = "Used";
  local_90 = 4;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8dce0 = (ulonglong)uVar2;
  _DAT_14cb8d750 = &LAB_143e56399;
  _DAT_14cb8d758 = 0x43950000;
  DAT_14cb8d75c = 1;
  DAT_14cb8d748 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d748;
  atexit((_func_5014 *)&LAB_143e5639e);
  local_98 = "responses";
  local_90 = 9;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb8d768 = (ulonglong)uVar2;
  _DAT_14cb8d778 = &LAB_143e563d2;
  _DAT_14cb8d780 = 0x43958000;
  DAT_14cb8d784 = 1;
  DAT_14cb8d770 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d770;
  atexit((_func_5014 *)&LAB_143e563d7);
  DAT_14cb8d790 = (undefined8 *)0x0;
  _DAT_14cb8d798 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0xa00,0);
  lVar5 = 0x3f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 5;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb8d790;
  _DAT_14cb8d798 = _DAT_14cb8d798 + 0x40;
  _DAT_14cb8d7a8 = &LAB_143e5640b;
  _DAT_14cb8d7b0 = 0x43960000;
  DAT_14cb8d7b4 = 1;
  DAT_14cb8d7a0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8d7a0;
  DAT_14cb8d790 = puVar3;
  atexit((_func_5014 *)&LAB_143e56410);
  DAT_14cb8d7c0 = (undefined8 *)0x0;
  _DAT_14cb8d7c8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x300,0);
  lVar5 = 0xf;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 6;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb8d7c0;
  _DAT_14cb8d7c8 = _DAT_14cb8d7c8 + 0x10;
  DAT_14cb8d7c0 = puVar3;
  FUN_1446f470e(&DAT_14cb8d7d0,L"UsePrompt_Locked",1);
  FUN_1446f470e(&DAT_14cb8d7d8,L"UsePrompt_Use",1);
  DAT_14cb8d840 = 0;
  _DAT_14cb8d848 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e63774;
  local_98 = &DAT_14011fc1e;
  FUN_1461937d0(&local_98);
  atexit((_func_5014 *)&LAB_143e5646d);
  DAT_14cb8d8d0 = 0;
  atexit((_func_5014 *)&LAB_143e56472);
  DAT_14cb8d9f0 = 0;
  _DAT_14cb8d9f8 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143e6377a;
  local_98 = &DAT_14011fc1e;
  FUN_146193eea(&local_98);
  atexit((_func_5014 *)&LAB_143e564b3);
  _DAT_14cb8da88 = &LAB_143e564b8;
  _DAT_14cb8da90 = 0x43fa0000;
  DAT_14cb8da94 = 1;
  DAT_14cb8da80 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8da80;
  atexit((_func_5014 *)&LAB_143e564bd);
  local_a8 = 0;
  FUN_1415c789c(&DAT_14cb8daa8,L"gbx.Use.PressConvertsToHoldUseTime",&DAT_14c763a88,
                L"Amount of time after pressing Use button but not releasing it before it will no longer trigger a regular Use if the objective supports both hold and not-hold."
               );
  atexit(FUN_143e5655d);
  _DAT_14cb8dab8 = 0x47efffffe0000000;
  _DAT_14cb8dac0 = 0x47efffffe0000000;
  _DAT_14cb8dac8 = 0x47efffffe0000000;
  _DAT_14cb8dad0 = 0x47efffffe0000000;
  _DAT_14cb8dad8 = 0x47efffffe0000000;
  _DAT_14cb8dae0 = 0x47efffffe0000000;
  _DAT_14cb8dae8 = 0x47efffffe0000000;
  _DAT_14cb8daf0 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb8daf8,L"LookForPickup",1);
  local_a8 = 0;
  FUN_1412cc41e(&DAT_14cb8db00,L"FUsableManager",0,0);
  local_98 = (char *)((ulonglong)local_98 & 0xffffffff00000000);
  local_a8 = 0;
  FUN_14078dbce(&DAT_14cb8dbb8,L"gbx.vault.max_bunch_size_bytes",&local_98,
                L"Set to 0 to use normal FOutBunch size limits rather than set them artificially.");
  atexit(FUN_143e5f85a);
  _DAT_14cb8dd34 = 0;
  FUN_14052b5e0(&DAT_14cb8dd30,"local",0);
  _DAT_14cb8dd40 = "local";
  ram0x00014cb8dbd4 = 0;
  FUN_14052b5e0(&DAT_14cb8dbd0,"send_to_host",0);
  _DAT_14cb8dbe0 = "send_to_host";
  ram0x00014cb8dbec = 0;
  FUN_14052b5e0(&DAT_14cb8dbe8,"local_as_client",0);
  _DAT_14cb8dbf8 = "local_as_client";
  ram0x00014cb8dc04 = 0;
  FUN_14052b5e0(&DAT_14cb8dc00,"host_receiving_client",0);
  _DAT_14cb8dc10 = "host_receiving_client";
  ram0x00014cb8dd64 = 0;
  FUN_14052b5e0(&DAT_14cb8dd60,"profile",0);
  _DAT_14cb8dd70 = "profile";
  _DAT_14cb8dd1c = 0;
  FUN_14052b5e0(&DAT_14cb8dd18,"domains",0);
  _DAT_14cb8dd28 = "domains";
  DAT_14cb8dd4c = 0;
  FUN_14052b5e0(&DAT_14cb8dd48,"characters",0);
  _DAT_14cb8dd58 = "characters";
  ram0x00014cb8dc24 = 0;
  FUN_14052b5e0(&DAT_14cb8dc20,"character",0);
  _DAT_14cb8dc30 = "character";
  _DAT_14cb8dc3c = 0;
  FUN_14052b5e0(&DAT_14cb8dc38,"cloud",0);
  _DAT_14cb8dc48 = "cloud";
  ram0x00014cb8dcfc = 0;
  FUN_14052b5e0(&DAT_14cb8dcf8,"default",0);
  _DAT_14cb8dd08 = "default";
  ram0x00014cb8db34 = 0;
  FUN_14052b5e0(&DAT_14cb8db30,"save_game_header",0);
  _DAT_14cb8db40 = "save_game_header";
  ram0x00014cb8db4c = 0;
  FUN_14052b5e0(&DAT_14cb8db48,&DAT_14b433a70,0);
  _DAT_14cb8db58 = &DAT_14b433a70;
  ram0x00014cb8db64 = 0;
  FUN_14052b5e0(&DAT_14cb8db60,"timestamp",0);
  _DAT_14cb8db70 = "timestamp";
  ram0x00014cb8db7c = 0;
  FUN_14052b5e0(&DAT_14cb8db78,"original_platform",0);
  _DAT_14cb8db88 = "original_platform";
  ram0x00014cb8db94 = 0;
  FUN_14052b5e0(&DAT_14cb8db90,"compatible_changelist",0);
  _DAT_14cb8dba0 = "compatible_changelist";
  ram0x00014cb8db1c = 0;
  FUN_14052b5e0(&DAT_14cb8db18,"transient",0);
  _DAT_14cb8db28 = "transient";
  _DAT_14cb8dc54 = 0;
  FUN_14052b5e0(&DAT_14cb8dc50,"pie_id",0);
  _DAT_14cb8dc60 = "pie_id";
  _DAT_14cb8dc6c = 0;
  FUN_14052b5e0(&DAT_14cb8dc68,"service",0);
  _DAT_14cb8dc78 = "service";
  _DAT_14cb8dc84 = 0;
  FUN_14052b5e0(&DAT_14cb8dc80,&DAT_14b433ab6,0);
  _DAT_14cb8dc90 = &DAT_14b433ab6;
  _DAT_14cb8dc9c = 0;
  FUN_14052b5e0(&DAT_14cb8dc98,"password",0);
  _DAT_14cb8dca8 = "password";
  local_98 = "VaultAddFailure_NoRoom";
  local_90 = 0x16;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8db10 = (ulonglong)uVar2;
  local_98 = "VaultAddFailure_ShouldUseExistingPlaceholder";
  local_90 = 0x2c;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb8dd10 = (ulonglong)uVar2;
  local_a8 = 0;
  FUN_14153156c(&DAT_14cb8dcb8,L"gbx.vault.do_threaded_config_updates",&DAT_14cb8dcb0,
                L"If true, use a threaded UpdateData() -> CreateForProfile() pass for those Roles that allow it."
               );
  atexit(FUN_143e5f89f);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e68645 FUN_143e68645 body=64 status=ok
// SIG undefined FUN_143e68645(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e68645(void)

{
  if (DAT_14cb8ddf8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb8ddf0 = 0;
  if (DAT_14cb8dde8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb8dda8);
  return;
}



// FUNCTION 143e68685 FUN_143e68685 body=53 status=ok
// SIG undefined FUN_143e68685(void)

void FUN_143e68685(void)

{
  longlong *plVar1;
  
  if (DAT_14cb8de63 != '\0') {
    plVar1 = (longlong *)FUN_140a3e602();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e686b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_14cb8de60,*(code **)(*plVar1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 143e686d2 FUN_143e686d2 body=69 status=ok
// SIG undefined FUN_143e686d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e686d2(void)

{
  _DAT_14cb8dec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e68714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8ded0,1);
  return;
}



// FUNCTION 143e68750 FUN_143e68750 body=68 status=ok
// SIG undefined FUN_143e68750(void)

undefined8 FUN_143e68750(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  if ((plVar2 != (longlong *)0x0) && (*pcVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000143e68790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    return uVar3;
  }
  return 0x3f800000;
}



// FUNCTION 143e687ea FUN_143e687ea body=176 status=ok
// SIG undefined FUN_143e687ea(void)

bool FUN_143e687ea(longlong *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar3 = *param_3;
  if (iVar3 != 2) {
    FUN_14009b010(param_5,3,0);
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar6 = FUN_141552268(uVar5,0);
    if (lVar6 == 0) {
      if (param_5 != &DAT_14c9a1308) {
        uVar5 = *param_4;
        lVar6 = param_4[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        plVar4 = (longlong *)param_5[1];
        *param_5 = uVar5;
        param_5[1] = lVar6;
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
    else {
      FUN_141863920(lVar6,param_4,param_5);
    }
  }
  return iVar3 != 2;
}



// FUNCTION 143e6889a FUN_143e6889a body=333 status=ok
// SIG undefined FUN_143e6889a(void)

void FUN_143e6889a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x498))(param_2);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x110), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x80))(plVar1,&local_30,0);
      lVar2 = DAT_14cb0d2b0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c872ef8) {
        FUN_144b3d300(&DAT_14c872ef8);
        if (DAT_14c872ef8 == -1) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
      }
      puVar3 = &DAT_149dfb77a;
      if (local_28 != 0) {
        puVar3 = local_30;
      }
      FUN_140002266(&local_40,L"NetImguiConnectToApp %s",puVar3);
      puVar3 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar3 = local_40;
      }
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))
                ((longlong *)(lVar2 + 0x28),0,puVar3,&DAT_14c872ee0);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e689e8 FUN_143e689e8 body=69 status=ok
// SIG undefined FUN_143e689e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e689e8(void)

{
  _DAT_14cb8e010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e68a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8e018,1);
  return;
}



// FUNCTION 143e68a2e FUN_143e68a2e body=429 status=ok
// SIG undefined FUN_143e68a2e(void)

void FUN_143e68a2e(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 != 0) &&
       ((bVar1 = *(byte *)(param_2 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
      (*(longlong *)(param_2 + 0x30) != 0)) &&
     ((lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar5 != 0 &&
      (*(longlong *)(lVar5 + 0x3f0) != 0)))) {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x98) = uVar2;
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
    *(int *)(param_1 + 0x9c) = iVar3;
    if ((((*(longlong *)(param_2 + 0x30) == 0) ||
         (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar5 == 0)) ||
        (lVar5 = *(longlong *)(lVar5 + 0x3f0), lVar5 == 0)) || (*(int *)(lVar5 + 0x48) != 2)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_146563a52(param_2 + 0x570,&local_30,param_1,FUN_143e68c1a);
      *(undefined8 *)(param_1 + 0x38) = local_30;
    }
    else {
      FUN_143e68c1a(param_1);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_146563a52(param_2 + 0x588,&local_30,param_1,FUN_143e68e06);
    *(undefined8 *)(param_1 + 0x40) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e68bdc FUN_143e68bdc body=62 status=ok
// SIG undefined FUN_143e68bdc(void)

void FUN_143e68bdc(longlong param_1)

{
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    FUN_1489b5648(param_1 + 0xa0);
    FUN_146563c8e(param_1 + 0xa0);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 143e68c1a FUN_143e68c1a body=490 status=ok
// SIG undefined FUN_143e68c1a(void)

ulonglong FUN_143e68c1a(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = uVar4;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x40) == 0) {
      FUN_14475ec7e(param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x9c);
    uVar4 = (ulonglong)uVar1;
    if ((((uVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x98), -1 < (int)uVar2)) &&
        ((int)uVar2 < DAT_14c9647dc)) &&
       ((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
        (*(uint *)(lVar5 + 0x10) == uVar1)))) {
      uVar4 = (ulonglong)*(uint *)(lVar5 + 8);
    }
    lVar5 = *(longlong *)(param_2 + 0xd0);
    if (lVar5 != 0) {
      local_40 = &local_38;
      local_48 = FUN_143e69a16;
      local_38 = param_1;
      FUN_140bc66fe(lVar5);
      FUN_146563b48(&local_50);
      local_38 = 0;
      lStack_30 = 0;
      lVar8 = local_50;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        local_38 = (ulonglong)uVar1;
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
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar3 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar3 = 0;
          }
          UNLOCK();
          uVar1 = (uint)local_38;
          if (bVar9) {
            iVar3 = iVar7;
          }
        }
        local_38._0_4_ = uVar1;
        local_38 = CONCAT44(iVar3,(uint)local_38);
        lStack_30 = local_50;
        lVar8 = lStack_30;
        if (((local_50 != 0) && (iVar3 != 0)) &&
           ((-1 < (int)(uint)local_38 &&
            (((((int)(uint)local_38 < DAT_14c9647dc &&
               (plVar6 = (longlong *)
                         ((ulonglong)(((uint)local_38 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_38 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == iVar3)) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))))) {
          FUN_1400796d0(*(undefined8 *)(*plVar6 + 0x10),local_50,1);
          lVar8 = lStack_30;
        }
      }
      lStack_30 = lVar8;
      uVar4 = FUN_14053c012(lVar5 + 0x28,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143e68e06 FUN_143e68e06 body=431 status=ok
// SIG undefined FUN_143e68e06(void)

ulonglong FUN_143e68e06(longlong param_1,longlong param_2)

{
  uint *_Dst;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = uVar5;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x40) == 0) {
      FUN_14475ec7e(param_2);
    }
    uVar4 = *(uint *)(param_1 + 0x9c);
    uVar5 = (ulonglong)uVar4;
    if ((((uVar4 != 0) && (uVar1 = *(uint *)(param_1 + 0x98), -1 < (int)uVar1)) &&
        ((int)uVar1 < DAT_14c9647dc)) &&
       ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
        (*(uint *)(lVar6 + 0x10) == uVar4)))) {
      uVar5 = (ulonglong)*(uint *)(lVar6 + 8);
    }
    lVar6 = *(longlong *)(param_2 + 0xd0);
    if (lVar6 != 0) {
      FUN_146563b48(local_48);
      FUN_1409ca370((longlong *)(lVar6 + 0x28),param_1);
      uVar5 = (ulonglong)*(uint *)(lVar6 + 0x30);
      if (0 < (int)*(uint *)(lVar6 + 0x30)) {
        lVar7 = 0;
        bVar8 = false;
        do {
          while( true ) {
            lVar2 = *(longlong *)(lVar6 + 0x28);
            _Dst = (uint *)(lVar2 + lVar7 * 0x10);
            iVar3 = (int)uVar5;
            if (((*(longlong *)(lVar2 + 8 + lVar7 * 0x10) != 0) && (_Dst[1] != 0)) &&
               ((uVar4 = *_Dst, -1 < (int)uVar4 &&
                (((((int)uVar4 < DAT_14c9647dc &&
                   (plVar10 = (longlong *)
                              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                   plVar10 != (longlong *)0x0)) && (*(uint *)(plVar10 + 2) == _Dst[1])) &&
                 (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))))) break;
            iVar9 = iVar3 + ~(uint)lVar7;
            if (iVar9 != 0) {
              if (0 < iVar9) {
                iVar9 = 1;
              }
              memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar9) * 0x10),(longlong)iVar9 << 4);
              uVar5 = (ulonglong)*(uint *)(lVar6 + 0x30);
            }
            uVar4 = (int)uVar5 - 1;
            uVar5 = (ulonglong)uVar4;
            *(uint *)(lVar6 + 0x30) = uVar4;
            bVar8 = true;
            if ((int)uVar4 <= lVar7) goto LAB_143e68f9c;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar3);
        if (bVar8) {
LAB_143e68f9c:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143e68fcc FUN_143e68fcc body=50 status=ok
// SIG undefined FUN_143e68fcc(void)

undefined8 FUN_143e68fcc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    FUN_147e269aa(param_1,param_2,0);
  }
  else {
    (**(code **)(*param_3 + 0x628))(param_3,param_2);
  }
  return param_2;
}



// FUNCTION 143e68ffe FUN_143e68ffe body=79 status=ok
// SIG undefined FUN_143e68ffe(void)

void FUN_143e68ffe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 400);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 143e6904e FUN_143e6904e body=29 status=ok
// SIG undefined FUN_143e6904e(void)

undefined8 FUN_143e6904e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e69080 FUN_143e69080 body=85 status=ok
// SIG undefined FUN_143e69080(void)

void FUN_143e69080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb7d20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435090;
  return;
}



// FUNCTION 143e690d6 FUN_143e690d6 body=85 status=ok
// SIG undefined FUN_143e690d6(void)

void FUN_143e690d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb7d20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435090;
  return;
}



// FUNCTION 143e6912c FUN_143e6912c body=118 status=ok
// SIG undefined FUN_143e6912c(void)

void FUN_143e6912c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acb7d20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b435090;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e69193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e691a2 FUN_143e691a2 body=62 status=ok
// SIG undefined FUN_143e691a2(void)

void FUN_143e691a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143e69224(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e691e2 FUN_143e691e2 body=64 status=ok
// SIG undefined FUN_143e691e2(void)

undefined8 FUN_143e691e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143e69224(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e69224 FUN_143e69224 body=384 status=ok
// SIG undefined FUN_143e69224(void)

void FUN_143e69224(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
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
  if (((*param_2 != 0) && (*(int *)(param_1 + 1) != 0)) &&
     (lVar1 = *(longlong *)(*param_2 + 0x3e0), lVar1 != 0)) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      plVar5 = (longlong *)(lVar1 + 0x1158);
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = *(undefined2 **)*param_1;
      }
      FUN_1446f470e(&local_20,puVar4,1);
      pcVar2 = local_20;
      plVar3 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
      if ((code *)*plVar3 != pcVar2) {
        *plVar3 = (longlong)pcVar2;
        (**(code **)(*plVar5 + 0x20))(plVar5);
        FUN_140357eea(plVar5);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e693a6 FUN_143e693a6 body=55 status=ok
// SIG undefined FUN_143e693a6(void)

void FUN_143e693a6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1459b3630(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143e693de FUN_143e693de body=29 status=ok
// SIG undefined FUN_143e693de(void)

undefined8 FUN_143e693de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e69586 FUN_143e69586 body=93 status=ok
// SIG undefined FUN_143e69586(void)

void FUN_143e69586(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b435170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e695e4 FUN_143e695e4 body=93 status=ok
// SIG undefined FUN_143e695e4(void)

void FUN_143e695e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b435170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e69642 FUN_143e69642 body=126 status=ok
// SIG undefined FUN_143e69642(void)

void FUN_143e69642(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b435170;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b435100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e696b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e696ca FUN_143e696ca body=278 status=ok
// SIG undefined FUN_143e696ca(void)

undefined8 FUN_143e696ca(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e697da;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e697da;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e697da:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e6978d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e697e4(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_143e6978d;
    }
  }
  uVar6 = 0;
LAB_143e6978d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e697e4 FUN_143e697e4 body=350 status=ok
// SIG undefined FUN_143e697e4(void)

void FUN_143e697e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  code **local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  code *local_70;
  longlong **local_68;
  code **local_60;
  code *local_58;
  code ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar2 = (code *)*param_2;
  uVar3 = param_2[1];
  local_78 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = &local_78;
  local_70 = FUN_143e693a6;
  local_50 = &local_60;
  local_58 = FUN_14103084c;
  local_60 = &local_70;
  FUN_1410304a0(*param_1);
  lVar5 = local_88;
  lVar8 = (longlong)(int)uStack_80;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar7) != 0) {
        piVar6 = *(int **)(*(longlong *)(lVar5 + lVar7) + 8);
        if (piVar6 == (int *)0x0) {
          piVar6 = &DAT_14c9485f0;
        }
        local_58 = DAT_14c948618;
        iVar4 = DAT_14c948620;
        if (((*piVar6 != 0) && (iVar1 = piVar6[1], iVar1 != 0)) && (*piVar6 != DAT_14c948000)) {
          if ((iVar1 < 2) && (piVar6[9] < 1)) {
            piVar6 = piVar6 + 2;
          }
          else {
            piVar6 = *(int **)(piVar6 + 6);
          }
          if (0 < iVar1) {
            local_58 = *(code **)piVar6;
            iVar4 = piVar6[2];
          }
        }
        local_50 = (code ***)CONCAT44(local_50._4_4_,iVar4);
        local_70 = (code *)((ulonglong)local_70 & 0xffffffffffffff00);
        local_98 = &local_70;
        (*pcVar2)(uVar3,&DAT_14cb8df10,&local_58,&DAT_14cb8df28);
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e69944 FUN_143e69944 body=208 status=ok
// SIG undefined FUN_143e69944(void)

void FUN_143e69944(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  uint *local_20;
  undefined1 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)*param_1;
  if (*(int *)(lVar1 + 0x438) != *(int *)(lVar1 + 0x464)) {
    puVar2 = &DAT_14c9485f0;
    if (*(uint **)(param_3 + 8) != (uint *)0x0) {
      puVar2 = *(uint **)(param_3 + 8);
    }
    lVar3 = lVar1 + 0x468;
    if (*(longlong *)(lVar1 + 0x470) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x470);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x478) - 1U & *puVar2) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar1 + 0x430) + (longlong)iVar4 * 0x40) == *puVar2) {
          local_18 = &local_21;
          local_21 = 0;
          local_20 = puVar2;
          FUN_14614201a(param_1[1] + 0xf0,local_c);
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar1 + 0x430) + 0x38);
      } while (iVar4 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e69a16 FUN_143e69a16 body=43 status=ok
// SIG undefined FUN_143e69a16(void)

undefined4 FUN_143e69a16(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = FUN_1411bbdb2(uVar1);
  FUN_1415df63e(uVar2,uVar1,uVar3);
  return 1;
}



// FUNCTION 143e69a42 FUN_143e69a42 body=68 status=ok
// SIG undefined FUN_143e69a42(void)

undefined8 * FUN_143e69a42(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4353f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e69a86 FUN_143e69a86 body=91 status=ok
// SIG undefined FUN_143e69a86(void)

bool FUN_143e69a86(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143e69ab6;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143e69ab6:
  return lVar6 == param_2;
}



// FUNCTION 143e69afe FUN_143e69afe body=1424 status=ok
// SIG undefined FUN_143e69afe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e69afe(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb8dd78 = (ulonglong)uVar2;
  local_50 = "default_data";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb8dd80 = (ulonglong)uVar2;
  _DAT_14cb8dd90 = &LAB_143e6860c;
  _DAT_14cb8dd98 = 0x4477c000;
  DAT_14cb8dd9c = 1;
  DAT_14cb8dd88 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8dd88;
  atexit((_func_5014 *)&LAB_143e68611);
  _DAT_14cb8de20 = 0x47efffffe0000000;
  _DAT_14cb8de28 = 0x47efffffe0000000;
  _DAT_14cb8de30 = 0x47efffffe0000000;
  _DAT_14cb8de38 = 0x47efffffe0000000;
  _DAT_14cb8de40 = 0x47efffffe0000000;
  _DAT_14cb8de48 = 0x47efffffe0000000;
  _DAT_14cb8de50 = 0x47efffffe0000000;
  _DAT_14cb8de58 = 0x47efffffe0000000;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"GbxVisibilityPhase",1);
  FUN_142767454(&DAT_14cb8de60,&local_50,3,3);
  atexit(FUN_143e68685);
  DAT_14cb8de70 = 0;
  atexit((_func_5014 *)&LAB_143e686ba);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_14b435090;
  local_58 = 0x10001;
  FUN_141819a96(&DAT_14cb8dec8,L"gbx.Player.SetVisPhase",
                L"Select the player\'s visibility phase by name",&local_50);
  if (local_48 == 0) {
LAB_143e69d3b:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143e69d3b;
  }
  atexit(FUN_143e686d2);
  ram0x00014cb8dedc = 0;
  FUN_14052b5e0(&DAT_14cb8ded8,"Discovered",0);
  _DAT_14cb8dee8 = "Discovered";
  _DAT_14cb8def8 = &LAB_143e68717;
  _DAT_14cb8df00 = 0x453b8000;
  DAT_14cb8df04 = 1;
  DAT_14cb8def0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8def0;
  atexit((_func_5014 *)&LAB_143e6871c);
  ram0x00014cb8df14 = 0;
  FUN_14052b5e0(&DAT_14cb8df10,"regions",0);
  _DAT_14cb8df20 = "regions";
  _DAT_14cb8df2c = 0;
  FUN_14052b5e0(&DAT_14cb8df28,"region",0);
  _DAT_14cb8df38 = "region";
  _DAT_14cb8df40 = 0;
  uRam000000014cb8df48 = 0;
  _DAT_14cb8df50 = 0;
  DAT_14cb8df58 = 0;
  uRam000000014cb8df60 = 0;
  FUN_1446ddda2(&DAT_14cb8df40,"allactivities",0);
  atexit((_func_5014 *)&LAB_143e68794);
  _DAT_14cb8df68 = 0;
  uRam000000014cb8df70 = 0;
  _DAT_14cb8df78 = 0;
  DAT_14cb8df80 = 0;
  uRam000000014cb8df88 = 0;
  FUN_1446ddda2(&DAT_14cb8df68,"serial",0);
  atexit((_func_5014 *)&LAB_143e687a5);
  _DAT_14cb8df90 = 0;
  uRam000000014cb8df98 = 0;
  _DAT_14cb8dfa0 = 0;
  DAT_14cb8dfa8 = 0;
  uRam000000014cb8dfb0 = 0;
  FUN_1446ddda2(&DAT_14cb8df90,"missionstate",0);
  atexit((_func_5014 *)&LAB_143e687b6);
  local_50 = "activities";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cb8dfb8 = (ulonglong)uVar2;
  _DAT_14cb8dfc0 = 0;
  uRam000000014cb8dfc8 = 0;
  _DAT_14cb8dfd0 = 0;
  DAT_14cb8dfd8 = 0;
  uRam000000014cb8dfe0 = 0;
  FUN_1446ddda2(&DAT_14cb8dfc0,"activities",0);
  atexit((_func_5014 *)&LAB_143e687c7);
  _DAT_14cb8dfe8 = 0;
  uRam000000014cb8dff0 = 0;
  _DAT_14cb8dff8 = 0;
  DAT_14cb8e000 = 0;
  uRam000000014cb8e008 = 0;
  FUN_1446ddda2(&DAT_14cb8dfe8,"gbx.activities",0);
  atexit((_func_5014 *)&LAB_143e687d8);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_14acb7cb0;
  *(code **)(local_50 + 0x18) = FUN_143e6889a;
  local_58 = 0x10001;
  FUN_141819a96(&DAT_14cb8e010,L"gbx.netimgui.ConnectGameServerToNetImgui",
                L"Connect the remote server to the local NetImguiServer.",&local_50);
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_143e6a024;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143e6a024:
  atexit(FUN_143e689e8);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6a090 FUN_143e6a090 body=842 status=ok
// SIG undefined FUN_143e6a090(void)

bool FUN_143e6a090(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&local_48,L"WINDOWS",1);
  plVar5 = (longlong *)FUN_140272950(&local_48);
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_48,DAT_14c872be8);
  plVar6 = uStack_40;
  if (uStack_40 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x20) = local_48;
    plVar8 = *(longlong **)(param_1 + 0x28);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
LAB_143e6a137:
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000143e6a166:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x20) = local_48;
    plVar8 = *(longlong **)(param_1 + 0x28);
    if (uStack_40 == plVar8) {
      LOCK();
      plVar8 = uStack_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*uStack_40)(uStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x000143e6a166;
      }
    }
    else {
      *(longlong **)(param_1 + 0x28) = uStack_40;
      if (plVar8 != (longlong *)0x0) goto LAB_143e6a137;
    }
  }
  plVar6 = uStack_40;
  puVar7 = (undefined8 *)(param_1 + 0x20);
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = uStack_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  (**(code **)(*(longlong *)*puVar7 + 0x28))((longlong *)*puVar7,param_2);
  (**(code **)(*(longlong *)*puVar7 + 0xa8))((longlong *)*puVar7,&local_50);
  (**(code **)(*plVar5 + 0x88))(plVar5,&local_48,local_50);
  plVar6 = uStack_40;
  if (uStack_40 == (longlong *)0x0) {
    *(longlong *)(param_1 + 8) = local_48;
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
LAB_143e6a210:
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000143e6a23f:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 8) = local_48;
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (uStack_40 == plVar8) {
      LOCK();
      plVar8 = uStack_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*uStack_40)(uStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x000143e6a23f;
      }
    }
    else {
      *(longlong **)(param_1 + 0x10) = uStack_40;
      if (plVar8 != (longlong *)0x0) goto LAB_143e6a210;
    }
  }
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = uStack_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar1 = (int *)((longlong)uStack_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*uStack_40 + 0x10))(uStack_40);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
  (**(code **)(*plVar5 + 0x90))(plVar5,&local_68);
  lVar3 = *(longlong *)(param_1 + 0x30);
  plVar6 = *(longlong **)(param_1 + 0x38);
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_5c,uStack_60);
  local_48._0_4_ = (undefined4)lVar3;
  local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_40._0_4_ = SUB84(plVar6,0);
  uStack_40._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_48 = lVar3;
  uStack_40 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  (**(code **)(*(longlong *)*puVar7 + 0xa8))((longlong *)*puVar7,&local_68);
  FUN_140056680(&local_48,L"LAN beacon");
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_70 = (ulonglong)DAT_14c892fa0;
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_70,&local_48,&local_68);
  *(longlong **)(param_1 + 0x18) = plVar6;
  if (local_48 != 0) {
    FUN_1400020a8();
    plVar6 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0xe8))(plVar6,1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))(*(longlong **)(param_1 + 0x18),1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf8))(*(longlong **)(param_1 + 0x18),1);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                      (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if ((cVar4 != '\0') &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                          (*(longlong **)(param_1 + 0x18),1), cVar4 != '\0')) {
      bVar9 = *(longlong *)(param_1 + 0x18) != 0;
      goto LAB_143e6a3b6;
    }
  }
  bVar9 = false;
LAB_143e6a3b6:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6a3dc FUN_143e6a3dc body=106 status=ok
// SIG undefined FUN_143e6a3dc(void)

undefined4 FUN_143e6a3dc(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    local_14 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0x30);
    local_20 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


